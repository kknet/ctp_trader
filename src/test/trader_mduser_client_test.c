
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <unistd.h>
#include <signal.h>
#include <limits.h>
#include <float.h>

#include <sys/time.h>

#include <event2/bufferevent.h>
#include <event2/util.h>
#include <event2/event.h>
#include <event2/buffer.h>

#include "trader_data.h"
#include "trader_mduser_api.h"

#include "glbProfile.h"

#include "trader_mduser_client.h"

typedef struct trader_mduser_client_test_def trader_mduser_client_test;
struct trader_mduser_client_test_def {

  struct event_base *pBase;
  struct event* pSigIntEvt;
  struct event* pSigTermEvt;
  
  trader_mduser_client* pApi;

  int commitCount;
  int linePos;
  trader_tick* tickBuffer;

  char csvFile[256];

  char cache[sizeof(trader_mduser_evt)];
  int cacheLen;

};

static void trader_mduser_client_test_connect_callback(void* user_data);
static void trader_mduser_client_test_disconnect_callback(void* user_data);
static void trader_mduser_client_test_recv_callback(void* user_data, void* data, int len);

static void trader_mduser_client_test_on_tick(trader_mduser_client_test* self, trader_tick* tick);

static void trader_mduser_client_test_flush(trader_mduser_client_test* self);

static void client_test_signal_cb(evutil_socket_t fd, short event, void *arg);

void client_test_signal_cb(evutil_socket_t fd, short event, void *arg)
{
  trader_mduser_client_test* test = (trader_mduser_client_test*)arg;
  struct timeval tv = {
    2, 0
  };
  event_base_loopexit(test->pBase, &tv);
}

void trader_mduser_client_test_connect_callback(void* user_data)
{
  printf("connected!\n");
}

void trader_mduser_client_test_disconnect_callback(void* user_data)
{
  printf("disconnected!\n");
  sleep(1);
  trader_mduser_client_test* test = (trader_mduser_client_test*)user_data;
  test->pApi->method->xConnect(test->pApi);
}

void trader_mduser_client_test_recv_callback(void* user_data, void* data, int len)
{
  trader_mduser_client_test* test = (trader_mduser_client_test*)user_data;
  int bDone = 0;
  int nLen;
  int nPos = 0;
  int nPos2 = 0;
  int nRest = len;
  char pBuff[sizeof(trader_mduser_evt)];
  trader_mduser_evt* pEvt = (trader_mduser_evt*)pBuff;
  trader_tick* tick_data = &pEvt->Tick;
  char* pData = (char*)data;
  
  if((test->cacheLen + len) < sizeof(trader_mduser_evt)){
    memcpy(&test->cache[test->cacheLen], pData, len);
    test->cacheLen += len;
    return ;
  }

  if(test->cacheLen > 0){
    nPos = sizeof(trader_mduser_evt) - test->cacheLen;
    memcpy(pBuff, test->cache, test->cacheLen);
    memcpy(&pBuff[test->cacheLen], pData, nPos);
    test->cacheLen = 0;
    
    pEvt = (trader_mduser_evt*)pBuff;
    tick_data = &pEvt->Tick;
    trader_mduser_client_test_on_tick(test, tick_data);  
  }

  while(nPos < len){
    if((nPos + sizeof(trader_mduser_evt)) > len){
      test->cacheLen = len - nPos;
      memcpy(&test->cache[0], &pData[nPos], test->cacheLen);
      break;
    }

    pEvt = (trader_mduser_evt*)&pData[nPos];
    tick_data = &pEvt->Tick;
    trader_mduser_client_test_on_tick(test, tick_data);

    nPos += sizeof(trader_mduser_evt);
  }
  return ;
}

void trader_mduser_client_test_on_tick(trader_mduser_client_test* self, trader_tick* tick)
{
  trader_tick* buffer = &self->tickBuffer[self->linePos];
  memcpy(buffer, tick, sizeof(trader_tick));
  self->linePos++;

  if(self->linePos == self->commitCount){
    trader_mduser_client_test_flush(self);
  }
}


void trader_mduser_client_test_flush(trader_mduser_client_test* self)
{
  char line[1000];
  int len;
  if(!self->linePos){
    return ;
  }

  char* buffer = (char*)malloc(self->commitCount * 1000 * sizeof(char));
  trader_tick* tick;
  int i = 0;
  int pos = 0;
  for(i = 0; i < self->linePos; i++){
    tick = &self->tickBuffer[i];
    if((DBL_MAX == tick->BidPrice1)
    ||(DBL_MAX == tick->AskPrice1)){
      continue;
    }
    snprintf(line, sizeof(line), "%s,%s,%s,%d,%f,%d,%f,%d\n",
      tick->InstrumentID,
      tick->TradingDay,
      tick->UpdateTime,
      tick->UpdateMillisec,
      tick->BidPrice1,
      tick->BidVolume1,
      tick->AskPrice1,
      tick->AskVolume1);

    len = strlen(line);
    memcpy(&buffer[pos], line, len);
    pos += len;
  }
  self->linePos = 0;

  do{
    FILE* fp = fopen(self->csvFile, "a");
    if(!fp){
      break;
    }

    fwrite(buffer, pos, 1, fp);
    
    fclose(fp);
  }while(0);
  
  free(buffer);

  return ;

}



int main(int argc, char* argv[])
{
  trader_mduser_client_test trader_mduser_client_test_st;
  trader_mduser_client_test* test = &trader_mduser_client_test_st;

  int nRet;
  char* pCfgFile = argv[1];
  char boardcastAddr[14+1];
  int boardcastPort;
  char filenamePreifx[200+1];

  nRet = glbPflGetString("MDUSER", "BOARDCAST_ADDR", pCfgFile, boardcastAddr);
  nRet = glbPflGetInt("MDUSER", "BOARDCAST_PORT", pCfgFile, &boardcastPort);
  nRet = glbPflGetInt("MDUSER", "COMMIT_COUNT", pCfgFile, &test->commitCount);
  nRet = glbPflGetString("MDUSER", "CSV_FILENAME", pCfgFile, filenamePreifx);
  
  time_t tt = time(NULL);
  struct tm now;

  tt += 4 * 60 * 60;
  localtime_r(&tt, &now);
  char sDate[9];
  snprintf(test->csvFile, sizeof(test->csvFile), "%s.%04d%02d%02d",
    filenamePreifx,
    now.tm_year+1900, now.tm_mon+1, now.tm_mday);

  
  test->pBase = event_base_new();

  test->pSigIntEvt = evsignal_new(test->pBase, SIGINT, client_test_signal_cb, (void *)test);
  test->pSigTermEvt = evsignal_new(test->pBase, SIGTERM, client_test_signal_cb, (void *)test);
  
  test->pApi = trader_mduser_client_new();

  test->pApi->method->xInit(test->pApi, test->pBase, boardcastAddr, boardcastPort,
    trader_mduser_client_test_connect_callback,
    trader_mduser_client_test_disconnect_callback,
    trader_mduser_client_test_recv_callback,
    test
    );

  test->tickBuffer = (trader_tick*)malloc((test->commitCount + 1) * sizeof(trader_tick));
  test->linePos = 0;

  test->cacheLen = 0;

  test->pApi->method->xConnect(test->pApi);

  nRet = event_add(test->pSigIntEvt, NULL);
  
  nRet = event_add(test->pSigTermEvt, NULL);

  event_base_dispatch(test->pBase);

  test->pApi->method->xExit(test->pApi);

  event_free(test->pSigTermEvt);
  event_free(test->pSigIntEvt);

  trader_mduser_client_free(test->pApi);

  trader_mduser_client_test_flush(test);
  
  free((void*)test->tickBuffer);

  event_base_free(test->pBase);
  

  return 0;
}


