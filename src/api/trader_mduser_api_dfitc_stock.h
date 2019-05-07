#ifndef _TRADER_MDUSER_API_DFITC_SOP_H_
#define _TRADER_MDUSER_API_DFITC_SOP_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "trader_mduser_api.h"

typedef struct trader_mduser_api_dfitc_stock_def  trader_mduser_api_dfitc_stock;
struct trader_mduser_api_dfitc_stock_def {
  void* pMdApi;
  void* pHandler;
  int nRequestID;
};

extern trader_mduser_api_method* trader_mduser_api_dfitc_stock_method_get();

#ifdef __cplusplus
}
#endif

#endif //_TRADER_MDUSER_API_DFITC_SOP_H_

