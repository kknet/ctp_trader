/////////////////////////////////////////////////////////////////////////
///@system ���ǰ��ϵͳ
///@company CFFEX
///@file USTPFtdcUserApiStruct.h
///@brief �����˿ͻ��˽ӿ�ʹ�õ�ҵ�����ݽṹ
///@history 
/////////////////////////////////////////////////////////////////////////

#if !defined(_USTP_FTDCSTRUCT_H)
#define _USTP_FTDCSTRUCT_H

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "USTPFtdcUserApiDataType.h"

///ϵͳ�û���¼����
struct CUstpFtdcReqUserLoginField
{
	///������
	TUstpFtdcDateType	TradingDay;
	///�����û�����
	TUstpFtdcUserIDType	UserID;
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///����
	TUstpFtdcPasswordType	Password;
	///�û��˲�Ʒ��Ϣ
	TUstpFtdcProductInfoType	UserProductInfo;
	///�ӿڶ˲�Ʒ��Ϣ
	TUstpFtdcProductInfoType	InterfaceProductInfo;
	///Э����Ϣ
	TUstpFtdcProtocolInfoType	ProtocolInfo;
	///IP��ַ
	TUstpFtdcIPAddressType	IPAddress;
	///Mac��ַ
	TUstpFtdcMacAddressType	MacAddress;
	///�������Ĵ���
	TUstpFtdcDataCenterIDType	DataCenterID;
	///�ͻ��������ļ���С
	TUstpFtdcFileSizeType	UserProductFileSize;
};
///ϵͳ�û���¼Ӧ��
struct CUstpFtdcRspUserLoginField
{
	///������
	TUstpFtdcDateType	TradingDay;
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///�����û�����
	TUstpFtdcUserIDType	UserID;
	///��¼�ɹ�ʱ��
	TUstpFtdcTimeType	LoginTime;
	///�û���󱾵ر�����
	TUstpFtdcUserOrderLocalIDType	MaxOrderLocalID;
	///����ϵͳ����
	TUstpFtdcTradingSystemNameType	TradingSystemName;
	///�������Ĵ���
	TUstpFtdcDataCenterIDType	DataCenterID;
	///��Ա˽������ǰ����
	TUstpFtdcSequenceNoType	PrivateFlowSize;
	///����Ա˽������ǰ����
	TUstpFtdcSequenceNoType	UserFlowSize;
};
///�û��ǳ�����
struct CUstpFtdcReqUserLogoutField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///�����û�����
	TUstpFtdcUserIDType	UserID;
};
///�û��ǳ���Ӧ
struct CUstpFtdcRspUserLogoutField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///�����û�����
	TUstpFtdcUserIDType	UserID;
};
///ǿ���û��˳�
struct CUstpFtdcForceUserExitField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///�����û�����
	TUstpFtdcUserIDType	UserID;
};
///�û������޸�
struct CUstpFtdcUserPasswordUpdateField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///�����û�����
	TUstpFtdcUserIDType	UserID;
	///������
	TUstpFtdcPasswordType	OldPassword;
	///������
	TUstpFtdcPasswordType	NewPassword;
};
///���뱨��
struct CUstpFtdcInputOrderField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///ϵͳ�������
	TUstpFtdcOrderSysIDType	OrderSysID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///�û�����
	TUstpFtdcUserIDType	UserID;
	///ָ��ͨ����ϯλ����µ�
	TUstpFtdcSeatNoType	SeatNo;
	///��Լ����
	TUstpFtdcInstrumentIDType	InstrumentID;
	///�û����ر�����
	TUstpFtdcUserOrderLocalIDType	UserOrderLocalID;
	///��������
	TUstpFtdcOrderPriceTypeType	OrderPriceType;
	///��������
	TUstpFtdcDirectionType	Direction;
	///��ƽ��־
	TUstpFtdcOffsetFlagType	OffsetFlag;
	///Ͷ���ױ���־
	TUstpFtdcHedgeFlagType	HedgeFlag;
	///�۸�
	TUstpFtdcPriceType	LimitPrice;
	///����
	TUstpFtdcVolumeType	Volume;
	///��Ч������
	TUstpFtdcTimeConditionType	TimeCondition;
	///GTD����
	TUstpFtdcDateType	GTDDate;
	///�ɽ�������
	TUstpFtdcVolumeConditionType	VolumeCondition;
	///��С�ɽ���
	TUstpFtdcVolumeType	MinVolume;
	///ֹ���
	TUstpFtdcPriceType	StopPrice;
	///ǿƽԭ��
	TUstpFtdcForceCloseReasonType	ForceCloseReason;
	///�Զ������־
	TUstpFtdcBoolType	IsAutoSuspend;
	///ҵ��Ԫ
	TUstpFtdcBusinessUnitType	BusinessUnit;
	///�û��Զ�����
	TUstpFtdcCustomType	UserCustom;
};
///��������
struct CUstpFtdcOrderActionField
{
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///�������
	TUstpFtdcOrderSysIDType	OrderSysID;
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///�û�����
	TUstpFtdcUserIDType	UserID;
	///���γ��������ı��ر��
	TUstpFtdcUserOrderLocalIDType	UserOrderActionLocalID;
	///���������ı��ر������
	TUstpFtdcUserOrderLocalIDType	UserOrderLocalID;
	///����������־
	TUstpFtdcActionFlagType	ActionFlag;
	///�۸�
	TUstpFtdcPriceType	LimitPrice;
	///�����仯
	TUstpFtdcVolumeType	VolumeChange;
};
///�ڴ������
struct CUstpFtdcMemDbField
{
	///�ڴ����
	TUstpFtdcMemTableNameType	MemTableName;
};
///�û���������
struct CUstpFtdcstpUserDepositField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///�û�����
	TUstpFtdcUserIDType	UserID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///���
	TUstpFtdcMoneyType	Amount;
	///�������
	TUstpFtdcAccountDirectionType	AmountDirection;
	///�û����ر�����
	TUstpFtdcUserOrderLocalIDType	UserOrderLocalID;
};
///�û�����ϯ�����
struct CUstpFtdcstpTransferMoneyField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///�û�����
	TUstpFtdcUserIDType	UserID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///���
	TUstpFtdcMoneyType	Amount;
	///�������
	TUstpFtdcAccountDirectionType	AmountDirection;
	///�û����ر�����
	TUstpFtdcUserOrderLocalIDType	UserOrderLocalID;
	///���л�������
	TUstpFtdcBankIDType	BankID;
	///����ת������
	TUstpFtdcBankPasswdType	BankPasswd;
	///��ϯת������
	TUstpFtdcAccountPasswdType	AccountPasswd;
};
///��Ӧ��Ϣ
struct CUstpFtdcRspInfoField
{
	///�������
	TUstpFtdcErrorIDType	ErrorID;
	///������Ϣ
	TUstpFtdcErrorMsgType	ErrorMsg;
};
///������ѯ
struct CUstpFtdcQryOrderField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///�û�����
	TUstpFtdcUserIDType	UserID;
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///�������
	TUstpFtdcOrderSysIDType	OrderSysID;
	///��Լ����
	TUstpFtdcInstrumentIDType	InstrumentID;
	///����״̬
	TUstpFtdcOrderStatusType	OrderStatus;
};
///�ɽ���ѯ
struct CUstpFtdcQryTradeField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///�û�����
	TUstpFtdcUserIDType	UserID;
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///�ɽ����
	TUstpFtdcTradeIDType	TradeID;
	///��Լ����
	TUstpFtdcInstrumentIDType	InstrumentID;
};
///��Լ��ѯ
struct CUstpFtdcQryInstrumentField
{
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///��Ʒ����
	TUstpFtdcProductIDType	ProductID;
	///��Լ����
	TUstpFtdcInstrumentIDType	InstrumentID;
};
///��Լ��ѯӦ��
struct CUstpFtdcRspInstrumentField
{
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///Ʒ�ִ���
	TUstpFtdcProductIDType	ProductID;
	///Ʒ������
	TUstpFtdcProductNameType	ProductName;
	///��Լ����
	TUstpFtdcInstrumentIDType	InstrumentID;
	///��Լ����
	TUstpFtdcInstrumentNameType	InstrumentName;
	///�������
	TUstpFtdcYearType	DeliveryYear;
	///������
	TUstpFtdcMonthType	DeliveryMonth;
	///�޼۵�����µ���
	TUstpFtdcVolumeType	MaxLimitOrderVolume;
	///�޼۵���С�µ���
	TUstpFtdcVolumeType	MinLimitOrderVolume;
	///�м۵�����µ���
	TUstpFtdcVolumeType	MaxMarketOrderVolume;
	///�м۵���С�µ���
	TUstpFtdcVolumeType	MinMarketOrderVolume;
	///��������
	TUstpFtdcVolumeMultipleType	VolumeMultiple;
	///���۵�λ
	TUstpFtdcPriceTickType	PriceTick;
	///����
	TUstpFtdcCurrencyType	Currency;
	///��ͷ�޲�
	TUstpFtdcVolumeType	LongPosLimit;
	///��ͷ�޲�
	TUstpFtdcVolumeType	ShortPosLimit;
	///��ͣ���
	TUstpFtdcPriceType	LowerLimitPrice;
	///��ͣ���
	TUstpFtdcPriceType	UpperLimitPrice;
	///�����
	TUstpFtdcPriceType	PreSettlementPrice;
	///��Լ����״̬
	TUstpFtdcInstrumentStatusType	InstrumentStatus;
	///������
	TUstpFtdcDateType	CreateDate;
	///������
	TUstpFtdcDateType	OpenDate;
	///������
	TUstpFtdcDateType	ExpireDate;
	///��ʼ������
	TUstpFtdcDateType	StartDelivDate;
	///��󽻸���
	TUstpFtdcDateType	EndDelivDate;
	///���ƻ�׼��
	TUstpFtdcPriceType	BasisPrice;
	///��ǰ�Ƿ���
	TUstpFtdcBoolType	IsTrading;
	///������Ʒ����
	TUstpFtdcInstrumentIDType	UnderlyingInstrID;
	///������Ʒ����
	TUstpFtdcUnderlyingMultipleType	UnderlyingMultiple;
	///�ֲ�����
	TUstpFtdcPositionTypeType	PositionType;
	///ִ�м�
	TUstpFtdcPriceType	StrikePrice;
	///��Ȩ����
	TUstpFtdcOptionsTypeType	OptionsType;
};
///��Լ״̬
struct CUstpFtdcInstrumentStatusField
{
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///Ʒ�ִ���
	TUstpFtdcProductIDType	ProductID;
	///Ʒ������
	TUstpFtdcProductNameType	ProductName;
	///��Լ����
	TUstpFtdcInstrumentIDType	InstrumentID;
	///��Լ����
	TUstpFtdcInstrumentNameType	InstrumentName;
	///�������
	TUstpFtdcYearType	DeliveryYear;
	///������
	TUstpFtdcMonthType	DeliveryMonth;
	///�޼۵�����µ���
	TUstpFtdcVolumeType	MaxLimitOrderVolume;
	///�޼۵���С�µ���
	TUstpFtdcVolumeType	MinLimitOrderVolume;
	///�м۵�����µ���
	TUstpFtdcVolumeType	MaxMarketOrderVolume;
	///�м۵���С�µ���
	TUstpFtdcVolumeType	MinMarketOrderVolume;
	///��������
	TUstpFtdcVolumeMultipleType	VolumeMultiple;
	///���۵�λ
	TUstpFtdcPriceTickType	PriceTick;
	///����
	TUstpFtdcCurrencyType	Currency;
	///��ͷ�޲�
	TUstpFtdcVolumeType	LongPosLimit;
	///��ͷ�޲�
	TUstpFtdcVolumeType	ShortPosLimit;
	///��ͣ���
	TUstpFtdcPriceType	LowerLimitPrice;
	///��ͣ���
	TUstpFtdcPriceType	UpperLimitPrice;
	///�����
	TUstpFtdcPriceType	PreSettlementPrice;
	///��Լ����״̬
	TUstpFtdcInstrumentStatusType	InstrumentStatus;
	///������
	TUstpFtdcDateType	CreateDate;
	///������
	TUstpFtdcDateType	OpenDate;
	///������
	TUstpFtdcDateType	ExpireDate;
	///��ʼ������
	TUstpFtdcDateType	StartDelivDate;
	///��󽻸���
	TUstpFtdcDateType	EndDelivDate;
	///���ƻ�׼��
	TUstpFtdcPriceType	BasisPrice;
	///��ǰ�Ƿ���
	TUstpFtdcBoolType	IsTrading;
	///������Ʒ����
	TUstpFtdcInstrumentIDType	UnderlyingInstrID;
	///������Ʒ����
	TUstpFtdcUnderlyingMultipleType	UnderlyingMultiple;
	///�ֲ�����
	TUstpFtdcPositionTypeType	PositionType;
	///ִ�м�
	TUstpFtdcPriceType	StrikePrice;
	///��Ȩ����
	TUstpFtdcOptionsTypeType	OptionsType;
};
///Ͷ�����ʽ��ѯ
struct CUstpFtdcQryInvestorAccountField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///�û�����
	TUstpFtdcUserIDType	UserID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
};
///Ͷ�����ʽ�Ӧ��
struct CUstpFtdcRspInvestorAccountField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///�ʽ��ʺ�
	TUstpFtdcAccountIDType	AccountID;
	///�ϴν���׼����
	TUstpFtdcMoneyType	PreBalance;
	///�����
	TUstpFtdcMoneyType	Deposit;
	///������
	TUstpFtdcMoneyType	Withdraw;
	///����ı�֤��
	TUstpFtdcMoneyType	FrozenMargin;
	///����������
	TUstpFtdcMoneyType	FrozenFee;
	///����Ȩ����
	TUstpFtdcMoneyType	FrozenPremium;
	///������
	TUstpFtdcMoneyType	Fee;
	///ƽ��ӯ��
	TUstpFtdcMoneyType	CloseProfit;
	///�ֲ�ӯ��
	TUstpFtdcMoneyType	PositionProfit;
	///�����ʽ�
	TUstpFtdcMoneyType	Available;
	///��ͷ����ı�֤��
	TUstpFtdcMoneyType	LongFrozenMargin;
	///��ͷ����ı�֤��
	TUstpFtdcMoneyType	ShortFrozenMargin;
	///��ͷռ�ñ�֤��
	TUstpFtdcMoneyType	LongMargin;
	///��ͷռ�ñ�֤��
	TUstpFtdcMoneyType	ShortMargin;
	///�����ͷű�֤��
	TUstpFtdcMoneyType	ReleaseMargin;
	///��̬Ȩ��
	TUstpFtdcMoneyType	DynamicRights;
	///���ճ����
	TUstpFtdcMoneyType	TodayInOut;
	///ռ�ñ�֤��
	TUstpFtdcMoneyType	Margin;
	///��ȨȨ������֧
	TUstpFtdcMoneyType	Premium;
	///���ն�
	TUstpFtdcMoneyType	Risk;
};
///����Ͷ���߲�ѯ
struct CUstpFtdcQryUserInvestorField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///�û�����
	TUstpFtdcUserIDType	UserID;
};
///����Ͷ����
struct CUstpFtdcRspUserInvestorField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///�����û�����
	TUstpFtdcUserIDType	UserID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
};
///���ױ����ѯ
struct CUstpFtdcQryTradingCodeField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///�û�����
	TUstpFtdcUserIDType	UserID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
};
///���ױ����ѯ
struct CUstpFtdcRspTradingCodeField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///�ͻ�����
	TUstpFtdcClientIDType	ClientID;
	///�ͻ�����Ȩ��
	TUstpFtdcTradingRightType	ClientRight;
	///�Ƿ��Ծ
	TUstpFtdcIsActiveType	IsActive;
};
///��������ѯ����
struct CUstpFtdcQryExchangeField
{
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
};
///��������ѯӦ��
struct CUstpFtdcRspExchangeField
{
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///����������
	TUstpFtdcExchangeNameType	ExchangeName;
};
///Ͷ���ֲֲ߳�ѯ����
struct CUstpFtdcQryInvestorPositionField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///�û�����
	TUstpFtdcUserIDType	UserID;
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///��Լ����
	TUstpFtdcInstrumentIDType	InstrumentID;
};
///Ͷ���ֲֲ߳�ѯӦ��
struct CUstpFtdcRspInvestorPositionField
{
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///�ͻ�����
	TUstpFtdcClientIDType	ClientID;
	///��Լ����
	TUstpFtdcInstrumentIDType	InstrumentID;
	///��������
	TUstpFtdcDirectionType	Direction;
	///Ͷ���ױ���־
	TUstpFtdcHedgeFlagType	HedgeFlag;
	///ռ�ñ�֤��
	TUstpFtdcMoneyType	UsedMargin;
	///��ֲ���
	TUstpFtdcVolumeType	Position;
	///���ճֲֳɱ�
	TUstpFtdcPriceType	PositionCost;
	///��ֲ���
	TUstpFtdcVolumeType	YdPosition;
	///���ճֲֳɱ�
	TUstpFtdcMoneyType	YdPositionCost;
	///����ı�֤��
	TUstpFtdcMoneyType	FrozenMargin;
	///���ֶ���ֲ�
	TUstpFtdcVolumeType	FrozenPosition;
	///ƽ�ֶ���ֲ�
	TUstpFtdcVolumeType	FrozenClosing;
	///�����Ȩ����
	TUstpFtdcMoneyType	FrozenPremium;
	///���һ�ʳɽ����
	TUstpFtdcTradeIDType	LastTradeID;
	///���һ�ʱ��ر������
	TUstpFtdcOrderLocalIDType	LastOrderLocalID;
	///����
	TUstpFtdcCurrencyIDType	Currency;
};
///�Ϲ������ѯ����
struct CUstpFtdcQryComplianceParamField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///�û�����
	TUstpFtdcUserIDType	UserID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
};
///�Ϲ������ѯӦ��
struct CUstpFtdcRspComplianceParamField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///�ͻ���
	TUstpFtdcClientIDType	ClientID;
	///ÿ����󱨵���
	TUstpFtdcVolumeType	DailyMaxOrder;
	///ÿ����󳷵���
	TUstpFtdcVolumeType	DailyMaxOrderAction;
	///ÿ����������
	TUstpFtdcVolumeType	DailyMaxErrorOrder;
	///ÿ����󱨵���
	TUstpFtdcVolumeType	DailyMaxOrderVolume;
	///ÿ����󳷵���
	TUstpFtdcVolumeType	DailyMaxOrderActionVolume;
};
///�û���ѯ
struct CUstpFtdcQryUserField
{
	///�����û�����
	TUstpFtdcUserIDType	StartUserID;
	///�����û�����
	TUstpFtdcUserIDType	EndUserID;
};
///�û�
struct CUstpFtdcUserField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///�û�����
	TUstpFtdcUserIDType	UserID;
	///�û���¼����
	TUstpFtdcPasswordType	Password;
	///�Ƿ��Ծ
	TUstpFtdcIsActiveType	IsActive;
	///�û�����
	TUstpFtdcUserNameType	UserName;
	///�û�����
	TUstpFtdcUserTypeType	UserType;
	///Ӫҵ��
	TUstpFtdcDepartmentType	Department;
	///��Ȩ���ܼ�
	TUstpFtdcGrantFuncSetType	GrantFuncSet;
	///�޸��û����
	TUstpFtdcUserIDType	SetUserID;
	///��������
	TUstpFtdcDateType	CommandDate;
	///����ʱ��
	TUstpFtdcTimeType	CommandTime;
};
///Ͷ�����������ʲ�ѯ
struct CUstpFtdcQryInvestorFeeField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///�û�����
	TUstpFtdcUserIDType	UserID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TUstpFtdcInstrumentIDType	InstrumentID;
};
///Ͷ������������
struct CUstpFtdcInvestorFeeField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///�ͻ���
	TUstpFtdcClientIDType	ClientID;
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TUstpFtdcInstrumentIDType	InstrumentID;
	///Ʒ�ִ���
	TUstpFtdcProductIDType	ProductID;
	///���������Ѱ�����
	TUstpFtdcRatioType	OpenFeeRate;
	///���������Ѱ�����
	TUstpFtdcRatioType	OpenFeeAmt;
	///ƽ�������Ѱ�����
	TUstpFtdcRatioType	OffsetFeeRate;
	///ƽ�������Ѱ�����
	TUstpFtdcRatioType	OffsetFeeAmt;
	///ƽ��������Ѱ�����
	TUstpFtdcRatioType	OTFeeRate;
	///ƽ��������Ѱ�����
	TUstpFtdcRatioType	OTFeeAmt;
	///ÿ�ʶ�����ȡ���걨��
	TUstpFtdcRatioType	PerOrderAmt;
	///ÿ�ʳ�����ȡ���걨��
	TUstpFtdcRatioType	PerCancelAmt;
};
///Ͷ���߱�֤���ʲ�ѯ
struct CUstpFtdcQryInvestorMarginField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///�û�����
	TUstpFtdcUserIDType	UserID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TUstpFtdcInstrumentIDType	InstrumentID;
};
///Ͷ���߱�֤����
struct CUstpFtdcInvestorMarginField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///�ͻ���
	TUstpFtdcClientIDType	ClientID;
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TUstpFtdcInstrumentIDType	InstrumentID;
	///Ʒ�ִ���
	TUstpFtdcProductIDType	ProductID;
	///��ͷռ�ñ�֤�𰴱���
	TUstpFtdcRatioType	LongMarginRate;
	///��ͷ��֤������
	TUstpFtdcRatioType	LongMarginAmt;
	///��ͷռ�ñ�֤�𰴱���
	TUstpFtdcRatioType	ShortMarginRate;
	///��ͷ��֤������
	TUstpFtdcRatioType	ShortMarginAmt;
};
///�ɽ�
struct CUstpFtdcTradeField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///������
	TUstpFtdcTradingDayType	TradingDay;
	///��Ա���
	TUstpFtdcParticipantIDType	ParticipantID;
	///�µ�ϯλ��
	TUstpFtdcSeatIDType	SeatID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///�ͻ���
	TUstpFtdcClientIDType	ClientID;
	///�û����
	TUstpFtdcUserIDType	UserID;
	///�µ��û����
	TUstpFtdcUserIDType	OrderUserID;
	///�ɽ����
	TUstpFtdcTradeIDType	TradeID;
	///�������
	TUstpFtdcOrderSysIDType	OrderSysID;
	///���ر������
	TUstpFtdcUserOrderLocalIDType	UserOrderLocalID;
	///��Լ����
	TUstpFtdcInstrumentIDType	InstrumentID;
	///��������
	TUstpFtdcDirectionType	Direction;
	///��ƽ��־
	TUstpFtdcOffsetFlagType	OffsetFlag;
	///Ͷ���ױ���־
	TUstpFtdcHedgeFlagType	HedgeFlag;
	///�ɽ��۸�
	TUstpFtdcPriceType	TradePrice;
	///�ɽ�����
	TUstpFtdcVolumeType	TradeVolume;
	///�ɽ�ʱ��
	TUstpFtdcTimeType	TradeTime;
	///�����Ա���
	TUstpFtdcParticipantIDType	ClearingPartID;
	///���γɽ�������
	TUstpFtdcMoneyType	UsedFee;
	///���γɽ�ռ�ñ�֤��
	TUstpFtdcMoneyType	UsedMargin;
	///���γɽ�ռ��Ȩ����
	TUstpFtdcMoneyType	Premium;
	///�ֱֲ���ֲ���
	TUstpFtdcVolumeType	Position;
	///�ֱֲ����ճֲֳɱ�
	TUstpFtdcPriceType	PositionCost;
	///�ʽ�������ʽ�
	TUstpFtdcMoneyType	Available;
	///�ʽ��ռ�ñ�֤��
	TUstpFtdcMoneyType	Margin;
	///�ʽ������ı�֤��
	TUstpFtdcMoneyType	FrozenMargin;
};
///����
struct CUstpFtdcOrderField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///ϵͳ�������
	TUstpFtdcOrderSysIDType	OrderSysID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///�û�����
	TUstpFtdcUserIDType	UserID;
	///ָ��ͨ����ϯλ����µ�
	TUstpFtdcSeatNoType	SeatNo;
	///��Լ����
	TUstpFtdcInstrumentIDType	InstrumentID;
	///�û����ر�����
	TUstpFtdcUserOrderLocalIDType	UserOrderLocalID;
	///��������
	TUstpFtdcOrderPriceTypeType	OrderPriceType;
	///��������
	TUstpFtdcDirectionType	Direction;
	///��ƽ��־
	TUstpFtdcOffsetFlagType	OffsetFlag;
	///Ͷ���ױ���־
	TUstpFtdcHedgeFlagType	HedgeFlag;
	///�۸�
	TUstpFtdcPriceType	LimitPrice;
	///����
	TUstpFtdcVolumeType	Volume;
	///��Ч������
	TUstpFtdcTimeConditionType	TimeCondition;
	///GTD����
	TUstpFtdcDateType	GTDDate;
	///�ɽ�������
	TUstpFtdcVolumeConditionType	VolumeCondition;
	///��С�ɽ���
	TUstpFtdcVolumeType	MinVolume;
	///ֹ���
	TUstpFtdcPriceType	StopPrice;
	///ǿƽԭ��
	TUstpFtdcForceCloseReasonType	ForceCloseReason;
	///�Զ������־
	TUstpFtdcBoolType	IsAutoSuspend;
	///ҵ��Ԫ
	TUstpFtdcBusinessUnitType	BusinessUnit;
	///�û��Զ�����
	TUstpFtdcCustomType	UserCustom;
	///������
	TUstpFtdcTradingDayType	TradingDay;
	///��Ա���
	TUstpFtdcParticipantIDType	ParticipantID;
	///����µ��û����
	TUstpFtdcUserIDType	OrderUserID;
	///�ͻ���
	TUstpFtdcClientIDType	ClientID;
	///�µ�ϯλ��
	TUstpFtdcSeatIDType	SeatID;
	///����ʱ��
	TUstpFtdcTimeType	InsertTime;
	///���ر������
	TUstpFtdcOrderLocalIDType	OrderLocalID;
	///������Դ
	TUstpFtdcOrderSourceType	OrderSource;
	///����״̬
	TUstpFtdcOrderStatusType	OrderStatus;
	///����ʱ��
	TUstpFtdcTimeType	CancelTime;
	///�����û����
	TUstpFtdcUserIDType	CancelUserID;
	///��ɽ�����
	TUstpFtdcVolumeType	VolumeTraded;
	///ʣ������
	TUstpFtdcVolumeType	VolumeRemain;
};
///����������
struct CUstpFtdcFlowMessageCancelField
{
	///����ϵ�к�
	TUstpFtdcSequenceSeriesType	SequenceSeries;
	///������
	TUstpFtdcDateType	TradingDay;
	///�������Ĵ���
	TUstpFtdcDataCenterIDType	DataCenterID;
	///������ʼ���к�
	TUstpFtdcSequenceNoType	StartSequenceNo;
	///���˽������к�
	TUstpFtdcSequenceNoType	EndSequenceNo;
};
///��Ϣ�ַ�
struct CUstpFtdcDisseminationField
{
	///����ϵ�к�
	TUstpFtdcSequenceSeriesType	SequenceSeries;
	///���к�
	TUstpFtdcSequenceNoType	SequenceNo;
};
///�������
struct CUstpFtdcInvestorAccountDepositResField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///�û�����
	TUstpFtdcUserIDType	UserID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///�ʽ��ʺ�
	TUstpFtdcAccountIDType	AccountID;
	///�ʽ���ˮ��
	TUstpFtdcAccountSeqNoType	AccountSeqNo;
	///���
	TUstpFtdcMoneyType	Amount;
	///�������
	TUstpFtdcAccountDirectionType	AmountDirection;
	///�����ʽ�
	TUstpFtdcMoneyType	Available;
	///����׼����
	TUstpFtdcMoneyType	Balance;
};
///����¼��
struct CUstpFtdcInputQuoteField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///�û�����
	TUstpFtdcUserIDType	UserID;
	///��Լ����
	TUstpFtdcInstrumentIDType	InstrumentID;
	///����ϵͳ���ص�ϵͳ���۱��
	TUstpFtdcQuoteSysIDType	QuoteSysID;
	///�û��趨�ı��ر��۱��
	TUstpFtdcUserQuoteLocalIDType	UserQuoteLocalID;
	///��������ϵͳ���ı��ر��۱��
	TUstpFtdcQuoteLocalIDType	QuoteLocalID;
	///����������
	TUstpFtdcVolumeType	BidVolume;
	///�򷽿�ƽ��־
	TUstpFtdcOffsetFlagType	BidOffsetFlag;
	///��Ͷ���ױ���־
	TUstpFtdcHedgeFlagType	BidHedgeFlag;
	///������۸�
	TUstpFtdcPriceType	BidPrice;
	///������������
	TUstpFtdcVolumeType	AskVolume;
	///������ƽ��־
	TUstpFtdcOffsetFlagType	AskOffsetFlag;
	///����Ͷ���ױ���־
	TUstpFtdcHedgeFlagType	AskHedgeFlag;
	///���������۸�
	TUstpFtdcPriceType	AskPrice;
	///ҵ��Ԫ
	TUstpFtdcBusinessUnitType	BusinessUnit;
	///�û��Զ�����
	TUstpFtdcCustomType	UserCustom;
	///��ֳ��������û����ر������
	TUstpFtdcUserOrderLocalIDType	BidUserOrderLocalID;
	///��ֳ����������û����ر������
	TUstpFtdcUserOrderLocalIDType	AskUserOrderLocalID;
};
///����֪ͨ
struct CUstpFtdcRtnQuoteField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///�û�����
	TUstpFtdcUserIDType	UserID;
	///��Լ����
	TUstpFtdcInstrumentIDType	InstrumentID;
	///����ϵͳ���ص�ϵͳ���۱��
	TUstpFtdcQuoteSysIDType	QuoteSysID;
	///�û��趨�ı��ر��۱��
	TUstpFtdcUserQuoteLocalIDType	UserQuoteLocalID;
	///��������ϵͳ���ı��ر��۱��
	TUstpFtdcQuoteLocalIDType	QuoteLocalID;
	///����������
	TUstpFtdcVolumeType	BidVolume;
	///�򷽿�ƽ��־
	TUstpFtdcOffsetFlagType	BidOffsetFlag;
	///��Ͷ���ױ���־
	TUstpFtdcHedgeFlagType	BidHedgeFlag;
	///������۸�
	TUstpFtdcPriceType	BidPrice;
	///������������
	TUstpFtdcVolumeType	AskVolume;
	///������ƽ��־
	TUstpFtdcOffsetFlagType	AskOffsetFlag;
	///����Ͷ���ױ���־
	TUstpFtdcHedgeFlagType	AskHedgeFlag;
	///���������۸�
	TUstpFtdcPriceType	AskPrice;
	///ҵ��Ԫ
	TUstpFtdcBusinessUnitType	BusinessUnit;
	///�û��Զ�����
	TUstpFtdcCustomType	UserCustom;
	///��ֳ��������û����ر������
	TUstpFtdcUserOrderLocalIDType	BidUserOrderLocalID;
	///��ֳ����������û����ر������
	TUstpFtdcUserOrderLocalIDType	AskUserOrderLocalID;
	///��ϵͳ�������
	TUstpFtdcQuoteSysIDType	BidOrderSysID;
	///����ϵͳ�������
	TUstpFtdcQuoteSysIDType	AskOrderSysID;
	///���۵�״̬
	TUstpFtdcQuoteStatusType	QuoteStatus;
	///����ʱ��
	TUstpFtdcTimeType	InsertTime;
	///����ʱ��
	TUstpFtdcTimeType	CancelTime;
	///�ɽ�ʱ��
	TUstpFtdcTimeType	TradeTime;
};
///���۲���
struct CUstpFtdcQuoteActionField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///�û�����
	TUstpFtdcUserIDType	UserID;
	///����ϵͳ���ص�ϵͳ���۱��
	TUstpFtdcQuoteSysIDType	QuoteSysID;
	///�û��趨�ı����ı��ر��۱��
	TUstpFtdcUserQuoteLocalIDType	UserQuoteLocalID;
	///�û���������ı��س������۱��
	TUstpFtdcUserQuoteLocalIDType	UserQuoteActionLocalID;
	///����������־
	TUstpFtdcActionFlagType	ActionFlag;
	///ҵ��Ԫ
	TUstpFtdcBusinessUnitType	BusinessUnit;
	///�û��Զ�����
	TUstpFtdcCustomType	UserCustom;
};
///ѯ������
struct CUstpFtdcReqForQuoteField
{
	///ѯ�۱��
	TUstpFtdcQuoteSysIDType	ReqForQuoteID;
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///�û�����
	TUstpFtdcUserIDType	UserID;
	///��Լ����
	TUstpFtdcInstrumentIDType	InstrumentID;
	///������
	TUstpFtdcDateType	TradingDay;
	///ѯ��ʱ��
	TUstpFtdcTimeType	ReqForQuoteTime;
};
///�����������
struct CUstpFtdcMarketDataBaseField
{
	///������
	TUstpFtdcDateType	TradingDay;
	///���������
	TUstpFtdcSettlementGroupIDType	SettlementGroupID;
	///������
	TUstpFtdcSettlementIDType	SettlementID;
	///�����
	TUstpFtdcPriceType	PreSettlementPrice;
	///������
	TUstpFtdcPriceType	PreClosePrice;
	///��ֲ���
	TUstpFtdcLargeVolumeType	PreOpenInterest;
	///����ʵ��
	TUstpFtdcRatioType	PreDelta;
};
///���龲̬����
struct CUstpFtdcMarketDataStaticField
{
	///����
	TUstpFtdcPriceType	OpenPrice;
	///��߼�
	TUstpFtdcPriceType	HighestPrice;
	///��ͼ�
	TUstpFtdcPriceType	LowestPrice;
	///������
	TUstpFtdcPriceType	ClosePrice;
	///��ͣ���
	TUstpFtdcPriceType	UpperLimitPrice;
	///��ͣ���
	TUstpFtdcPriceType	LowerLimitPrice;
	///�����
	TUstpFtdcPriceType	SettlementPrice;
	///����ʵ��
	TUstpFtdcRatioType	CurrDelta;
};
///�������³ɽ�����
struct CUstpFtdcMarketDataLastMatchField
{
	///���¼�
	TUstpFtdcPriceType	LastPrice;
	///����
	TUstpFtdcVolumeType	Volume;
	///�ɽ����
	TUstpFtdcMoneyType	Turnover;
	///�ֲ���
	TUstpFtdcLargeVolumeType	OpenInterest;
};
///�������ż�����
struct CUstpFtdcMarketDataBestPriceField
{
	///�����һ
	TUstpFtdcPriceType	BidPrice1;
	///������һ
	TUstpFtdcVolumeType	BidVolume1;
	///������һ
	TUstpFtdcPriceType	AskPrice1;
	///������һ
	TUstpFtdcVolumeType	AskVolume1;
};
///�����������������
struct CUstpFtdcMarketDataBid23Field
{
	///����۶�
	TUstpFtdcPriceType	BidPrice2;
	///��������
	TUstpFtdcVolumeType	BidVolume2;
	///�������
	TUstpFtdcPriceType	BidPrice3;
	///��������
	TUstpFtdcVolumeType	BidVolume3;
};
///������������������
struct CUstpFtdcMarketDataAsk23Field
{
	///�����۶�
	TUstpFtdcPriceType	AskPrice2;
	///��������
	TUstpFtdcVolumeType	AskVolume2;
	///��������
	TUstpFtdcPriceType	AskPrice3;
	///��������
	TUstpFtdcVolumeType	AskVolume3;
};
///���������ġ�������
struct CUstpFtdcMarketDataBid45Field
{
	///�������
	TUstpFtdcPriceType	BidPrice4;
	///��������
	TUstpFtdcVolumeType	BidVolume4;
	///�������
	TUstpFtdcPriceType	BidPrice5;
	///��������
	TUstpFtdcVolumeType	BidVolume5;
};
///���������ġ�������
struct CUstpFtdcMarketDataAsk45Field
{
	///��������
	TUstpFtdcPriceType	AskPrice4;
	///��������
	TUstpFtdcVolumeType	AskVolume4;
	///��������
	TUstpFtdcPriceType	AskPrice5;
	///��������
	TUstpFtdcVolumeType	AskVolume5;
};
///�������ʱ������
struct CUstpFtdcMarketDataUpdateTimeField
{
	///��Լ����
	TUstpFtdcInstrumentIDType	InstrumentID;
	///����޸�ʱ��
	TUstpFtdcTimeType	UpdateTime;
	///����޸ĺ���
	TUstpFtdcMillisecType	UpdateMillisec;
};
///�������
struct CUstpFtdcDepthMarketDataField
{
	///������
	TUstpFtdcDateType	TradingDay;
	///���������
	TUstpFtdcSettlementGroupIDType	SettlementGroupID;
	///������
	TUstpFtdcSettlementIDType	SettlementID;
	///�����
	TUstpFtdcPriceType	PreSettlementPrice;
	///������
	TUstpFtdcPriceType	PreClosePrice;
	///��ֲ���
	TUstpFtdcLargeVolumeType	PreOpenInterest;
	///����ʵ��
	TUstpFtdcRatioType	PreDelta;
	///����
	TUstpFtdcPriceType	OpenPrice;
	///��߼�
	TUstpFtdcPriceType	HighestPrice;
	///��ͼ�
	TUstpFtdcPriceType	LowestPrice;
	///������
	TUstpFtdcPriceType	ClosePrice;
	///��ͣ���
	TUstpFtdcPriceType	UpperLimitPrice;
	///��ͣ���
	TUstpFtdcPriceType	LowerLimitPrice;
	///�����
	TUstpFtdcPriceType	SettlementPrice;
	///����ʵ��
	TUstpFtdcRatioType	CurrDelta;
	///���¼�
	TUstpFtdcPriceType	LastPrice;
	///����
	TUstpFtdcVolumeType	Volume;
	///�ɽ����
	TUstpFtdcMoneyType	Turnover;
	///�ֲ���
	TUstpFtdcLargeVolumeType	OpenInterest;
	///�����һ
	TUstpFtdcPriceType	BidPrice1;
	///������һ
	TUstpFtdcVolumeType	BidVolume1;
	///������һ
	TUstpFtdcPriceType	AskPrice1;
	///������һ
	TUstpFtdcVolumeType	AskVolume1;
	///����۶�
	TUstpFtdcPriceType	BidPrice2;
	///��������
	TUstpFtdcVolumeType	BidVolume2;
	///�������
	TUstpFtdcPriceType	BidPrice3;
	///��������
	TUstpFtdcVolumeType	BidVolume3;
	///�����۶�
	TUstpFtdcPriceType	AskPrice2;
	///��������
	TUstpFtdcVolumeType	AskVolume2;
	///��������
	TUstpFtdcPriceType	AskPrice3;
	///��������
	TUstpFtdcVolumeType	AskVolume3;
	///�������
	TUstpFtdcPriceType	BidPrice4;
	///��������
	TUstpFtdcVolumeType	BidVolume4;
	///�������
	TUstpFtdcPriceType	BidPrice5;
	///��������
	TUstpFtdcVolumeType	BidVolume5;
	///��������
	TUstpFtdcPriceType	AskPrice4;
	///��������
	TUstpFtdcVolumeType	AskVolume4;
	///��������
	TUstpFtdcPriceType	AskPrice5;
	///��������
	TUstpFtdcVolumeType	AskVolume5;
	///��Լ����
	TUstpFtdcInstrumentIDType	InstrumentID;
	///����޸�ʱ��
	TUstpFtdcTimeType	UpdateTime;
	///����޸ĺ���
	TUstpFtdcMillisecType	UpdateMillisec;
};
///���ĺ�Լ�������Ϣ
struct CUstpFtdcSpecificInstrumentField
{
	///��Լ����
	TUstpFtdcInstrumentIDType	InstrumentID;
};
///�������
struct CUstpFtdcInputMarginCombActionField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///�����û�����
	TUstpFtdcUserIDType	UserID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///Ͷ���ױ���־
	TUstpFtdcHedgeFlagType	HedgeFlag;
	///�û����ر��
	TUstpFtdcUserOrderLocalIDType	UserActionLocalID;
	///��Ϻ�Լ����
	TUstpFtdcInstrumentIDType	CombInstrumentID;
	///�������
	TUstpFtdcVolumeType	CombVolume;
	///��϶�������
	TUstpFtdcCombDirectionType	CombDirection;
	///���ر��
	TUstpFtdcOrderLocalIDType	ActionLocalID;
};
///���ױ�����ϳֲֲ�ѯ
struct CUstpFtdcQryInvestorCombPositionField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///Ͷ���ױ���־
	TUstpFtdcHedgeFlagType	HedgeFlag;
	///��Ϻ�Լ����
	TUstpFtdcInstrumentIDType	CombInstrumentID;
};
///���ױ�����ϳֲֲ�ѯӦ��
struct CUstpFtdcRspInvestorCombPositionField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///Ͷ���ױ���־
	TUstpFtdcHedgeFlagType	HedgeFlag;
	///�ͻ�����
	TUstpFtdcClientIDType	ClientID;
	///��Ϻ�Լ����
	TUstpFtdcInstrumentIDType	CombInstrumentID;
	///��ϳֲ�
	TUstpFtdcVolumeType	CombPosition;
	///������ϳֲ�
	TUstpFtdcVolumeType	CombFrozenPosition;
	///���һ���ͷŵı�֤��
	TUstpFtdcMoneyType	CombFreeMargin;
};
///��Ϲ���
struct CUstpFtdcMarginCombinationLegField
{
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///��Ϻ�Լ����
	TUstpFtdcInstrumentIDType	CombInstrumentID;
	///���ȱ��
	TUstpFtdcLegIDType	LegID;
	///���Ⱥ�Լ����
	TUstpFtdcInstrumentIDType	LegInstrumentID;
	///��������
	TUstpFtdcDirectionType	Direction;
	///���ȳ���
	TUstpFtdcLegMultipleType	LegMultiple;
	///���ȼ�
	TUstpFtdcPriorityType	Priority;
};
///���ױ��뵥�ȳֲֲ�ѯ
struct CUstpFtdcQryInvestorLegPositionField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///Ͷ���ױ���־
	TUstpFtdcHedgeFlagType	HedgeFlag;
	///���Ⱥ�Լ����
	TUstpFtdcInstrumentIDType	LegInstrumentID;
};
///���ױ��뵥�ȳֲֲ�ѯӦ��
struct CUstpFtdcRspInvestorLegPositionField
{
	///���͹�˾���
	TUstpFtdcBrokerIDType	BrokerID;
	///����������
	TUstpFtdcExchangeIDType	ExchangeID;
	///Ͷ���߱��
	TUstpFtdcInvestorIDType	InvestorID;
	///Ͷ���ױ���־
	TUstpFtdcHedgeFlagType	HedgeFlag;
	///�ͻ�����
	TUstpFtdcClientIDType	ClientID;
	///���Ⱥ�Լ����
	TUstpFtdcInstrumentIDType	InstrumentID;
	///��ͷ�ֲ�
	TUstpFtdcVolumeType	LongPosition;
	///��ͷ�ֲ�
	TUstpFtdcVolumeType	ShortPosition;
	///��ͷռ�ñ�֤��
	TUstpFtdcMoneyType	LongMargin;
	///��ͷռ�ñ�֤��
	TUstpFtdcMoneyType	ShortMargin;
	///��ͷ����ֲ�
	TUstpFtdcVolumeType	LongFrozenPosition;
	///��ͷ����ֲ�
	TUstpFtdcVolumeType	ShortFrozenPosition;
	///��ͷ���ᱣ֤��
	TUstpFtdcMoneyType	LongFrozenMargin;
	///��ͷ���ᱣ֤��
	TUstpFtdcMoneyType	ShortFrozenMargin;
};
///��͸��ܿͻ���Ϣ
struct CUstpFtdcDSUserInfoField
{
	///�û�AppID
	TUstpFtdcDSAppIDType	AppID;
	///�û���Ȩ��
	TUstpFtdcDSAuthorizationCodeType	AuthCode;
	///��Կ��������
	TUstpFtdcDSKeyEncryptType	EncryptType;
};
///��͸��ܿͻ���֤������Ϣ
struct CUstpFtdcDSUserCertReqDataField
{
	///�û�AppID
	TUstpFtdcDSAppIDType	AppID;
	///�û���֤������Ϣ
	TUstpFtdcDSStreamDataType	UserCertReqData;
	///�û�֤����Ϣ��Ƭ����Ƭ��
	TUstpFtdcDSSeqeneceType	TotalNum;
	///�û�֤����Ϣ��Ƭ�ĵڼ�Ƭ
	TUstpFtdcDSSeqeneceType	CurrentNum;
};
///��͸��ܿͻ���֤��Ӧ��Ϣ
struct CUstpFtdcDSUserCertRspDataField
{
	///AppID
	TUstpFtdcDSAppIDType	AppID;
	///AppID����
	TUstpFtdcDSAppIDTypeType	AppIDType;
	///�û���֤������Ϣ
	TUstpFtdcDSStreamDataType	UserCertRspData;
	///�û�֤�鷵����Ϣ��Ƭ����Ƭ��
	TUstpFtdcDSSeqeneceType	TotalNum;
	///�û�֤�鷵����Ϣ��Ƭ�ĵڼ�Ƭ
	TUstpFtdcDSSeqeneceType	CurrentNum;
};
///��͸��ܿͻ���Ϣ�ɼ���Ϣ
struct CUstpFtdcDSLocalSystemDataField
{
	///�û�AppID
	TUstpFtdcDSAppIDType	AppID;
	///�쳣��ʶ
	TUstpFtdcDSExceptionFlagType	ExceptionFlag;
	///�û���Ϣ�ɼ����
	TUstpFtdcDSLocalSystemDataType	LocalSystemData;
};
///��͸����м���֤�ͻ���Ϣ
struct CUstpFtdcDSProxyCheckUserInfoField
{
	///�û�AppID
	TUstpFtdcDSAppIDType	AppID;
	///�û���Ȩ��
	TUstpFtdcDSAuthorizationCodeType	AuthCode;
	///��Կ��������
	TUstpFtdcDSKeyEncryptType	EncryptType;
};
///��͸����м̴����յ����ն���֤��Ϣ
struct CUstpFtdcDSProxyUserCertInField
{
	///��͸����м̴����յ����ն���֤��Ϣ
	TUstpFtdcDSProxyCertStreamDataType	UserCertReqInfo;
};
///��͸����м̴����ն���֤������Ϣ
struct CUstpFtdcDSProxyUserCertOutField
{
	///��͸����м̴�֤����֤�ķ��ؽ��
	TUstpFtdcDSProxyCertStreamDataType	UserCertRspInfo;
	///�м̴�����������ʹ�ó�����Ϣ
	TUstpFtdcDSBufLenType	UserCertRspInfoLen;
};
///��͸����м��ύ��Ϣ
struct CUstpFtdcDSProxySubmitDataField
{
	///AppID
	TUstpFtdcDSAppIDType	AppID;
	///�ͻ��ն˹���IP
	TUstpFtdcDSPubNetIPType	TerminalPubNetIP;
	///�ͻ��ն˹����˿ں�
	TUstpFtdcDSPubNetPortType	TerminalPubNetPort;
	///�ͻ��ն˵���ʱ��
	TUstpFtdcDSLoginTimeType	TerminalLoginTime;
	///�쳣��ʶ
	TUstpFtdcDSExceptionFlagType	ExceptionFlag;
	///RealyID
	TUstpFtdcDSAppIDType	RelayID;
	///�ն˲ɼ���Ϣ
	TUstpFtdcDSLocalSystemDataType	TerminalSystemData;
};


#endif