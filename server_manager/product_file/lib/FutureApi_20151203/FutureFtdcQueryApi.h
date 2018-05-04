
#if !defined(FUTURE_FTDCQUERYAPI_H)
#define FUTURE_FTDCQUERYAPI_H

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "FutureFtdcUserApiStruct.h"

#if defined(ISLIB) && defined(WIN32)
#ifdef LIB_QUERY_API_EXPORT
#define QUERY_API_EXPORT __declspec(dllexport)
#else
#define QUERY_API_EXPORT __declspec(dllimport)
#endif
#else
#define QUERY_API_EXPORT 
#endif


class CFutureFtdcQuerySpi
{
public:
	///���ͻ����뽻�׺�̨������ͨ������ʱ����δ��¼ǰ�����÷��������á�
	virtual void OnFrontConnected(){};
	
	///���ͻ����뽻�׺�̨ͨ�����ӶϿ�ʱ���÷��������á���������������API���Զ��������ӣ��ͻ��˿ɲ�������
	///@param nReason ����ԭ��
	///        0x1001 �����ʧ��
	///        0x1002 ����дʧ��
	///        0x2001 ����������ʱ
	///        0x2002 ��������ʧ��
	///        0x2003 �յ�������
	virtual void OnFrontDisconnected(int nReason){};
		
	///������ʱ���档����ʱ��δ�յ�����ʱ���÷��������á�
	///@param nTimeLapse �����ϴν��ձ��ĵ�ʱ��
	virtual void OnHeartBeatWarning(int nTimeLapse){};
	
	///�ͻ�����֤��Ӧ
	virtual void OnRspAuthenticate(CFutureFtdcRspAuthenticateField *pRspAuthenticateField, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};


	///��¼������Ӧ
	virtual void OnRspUserLogin(CFutureFtdcRspUserLoginField *pRspUserLogin, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///�ǳ�������Ӧ
	virtual void OnRspUserLogout(CFutureFtdcUserLogoutField *pUserLogout, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///�����ѯ������Ӧ
	virtual void OnRspQryOrder(CFutureFtdcOrderField *pOrder, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///�����ѯ�ɽ���Ӧ
	virtual void OnRspQryTrade(CFutureFtdcTradeField *pTrade, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///�����ѯͶ���ֲ߳���Ӧ
	virtual void OnRspQryInvestorPosition(CFutureFtdcInvestorPositionField *pInvestorPosition, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///�����ѯ�ʽ��˻���Ӧ
	virtual void OnRspQryTradingAccount(CFutureFtdcTradingAccountField *pTradingAccount, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///�����ѯͶ������Ӧ
	virtual void OnRspQryInvestor(CFutureFtdcInvestorField *pInvestor, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///�����ѯ���ױ�����Ӧ
	virtual void OnRspQryTradingCode(CFutureFtdcTradingCodeField *pTradingCode, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///�����ѯ��Լ��֤������Ӧ
	virtual void OnRspQryInstrumentMarginRate(CFutureFtdcInstrumentMarginRateField *pInstrumentMarginRate, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///�����ѯ��Լ����������Ӧ
	virtual void OnRspQryInstrumentCommissionRate(CFutureFtdcInstrumentCommissionRateField *pInstrumentCommissionRate, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///�����ѯ��������Ӧ
	virtual void OnRspQryExchange(CFutureFtdcExchangeField *pExchange, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///�����ѯ��Լ��Ӧ
	virtual void OnRspQryInstrument(CFutureFtdcInstrumentField *pInstrument, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///�����ѯ������Ӧ
	virtual void OnRspQryDepthMarketData(CFutureFtdcDepthMarketDataField *pDepthMarketData, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///�����ѯͶ���߽�������Ӧ
	virtual void OnRspQrySettlementInfo(CFutureFtdcSettlementInfoField *pSettlementInfo, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///�����ѯת��������Ӧ
	virtual void OnRspQryTransferBank(CFutureFtdcTransferBankField *pTransferBank, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///�����ѯͶ���ֲ߳���ϸ��Ӧ
	virtual void OnRspQryInvestorPositionDetail(CFutureFtdcInvestorPositionDetailField *pInvestorPositionDetail, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///�����ѯͶ���ֲ߳���ϸ��Ӧ
	virtual void OnRspQryInvestorPositionCombineDetail(CFutureFtdcInvestorPositionCombineDetailField *pInvestorPositionCombineDetail, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///��ѯ��֤����ϵͳ���͹�˾�ʽ��˻���Կ��Ӧ
	virtual void OnRspQryCFMMCTradingAccountKey(CFutureFtdcCFMMCTradingAccountKeyField *pCFMMCTradingAccountKey, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///�����ѯ�ֵ��۵���Ϣ��Ӧ
	virtual void OnRspQryEWarrantOffset(CFutureFtdcEWarrantOffsetField *pEWarrantOffset, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///�����ѯִ��������Ӧ
	virtual void OnRspQryExecOrder(CFutureFtdcExecOrderField *pExecOrder, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///�����ѯִ�����������Ӧ
	virtual void OnRspQryExecOrderAction(CFutureFtdcExecOrderActionField *pExecOrderAction, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///�����ѯ����ִ��������Ӧ
	virtual void OnRspQryErrExecOrder(CFutureFtdcErrExecOrderField *pErrExecOrder, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///�����ѯ����ִ�����������Ӧ
	virtual void OnRspQryErrExecOrderAction(CFutureFtdcErrExecOrderActionField *pErrExecOrderAction, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///�����ѯת����ˮ��Ӧ
	virtual void OnRspQryTransferSerial(CFutureFtdcTransferSerialField *pTransferSerial, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///�����ѯ����ǩԼ��ϵ��Ӧ
	virtual void OnRspQryAccountregister(CFutureFtdcAccountregisterField *pAccountregister, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///����Ӧ��
	virtual void OnRspError(CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///�����ѯǩԼ������Ӧ
	virtual void OnRspQryContractBank(CFutureFtdcContractBankField *pContractBank, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///�����ѯ����֪ͨ��Ӧ
	virtual void OnRspQryTradingNotice(CFutureFtdcTradingNoticeField *pTradingNotice, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///�����ѯ���͹�˾���ײ�����Ӧ
	virtual void OnRspQryBrokerTradingParams(CFutureFtdcBrokerTradingParamsField *pBrokerTradingParams, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///�����ѯ���͹�˾�����㷨��Ӧ
	virtual void OnRspQryBrokerTradingAlgos(CFutureFtdcBrokerTradingAlgosField *pBrokerTradingAlgos, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};
};

#ifndef WINDOWS
	#if __GNUC__ >= 4
		#pragma GCC visibility push(default)
	#endif
#endif
class QUERY_API_EXPORT CFutureFtdcQueryApi
{
public:
	///����QueryApi
	///@param pszFlowPath ����������Ϣ�ļ���Ŀ¼��Ĭ��Ϊ��ǰĿ¼
	///@return ��������UserApi
	//modify for udp marketdata
	static CFutureFtdcQueryApi *CreateFtdcQueryApi(const char *pszFlowPath = "", const bool bIsUsingUdp=false);
	
	///ɾ���ӿڶ�����
	///@remark ����ʹ�ñ��ӿڶ���ʱ,���øú���ɾ���ӿڶ���
	virtual void Release() = 0;
	
	///��ʼ��
	///@remark ��ʼ�����л���,ֻ�е��ú�,�ӿڲſ�ʼ����
	virtual void Init() = 0;
	
	///�ȴ��ӿ��߳̽�������
	///@return �߳��˳�����
	virtual int Join() = 0;
	
	///��ȡ��ǰ������
	///@retrun ��ȡ���Ľ�����
	///@remark ֻ�е�¼�ɹ���,���ܵõ���ȷ�Ľ�����
	virtual const char *GetTradingDay() = 0;
	
	///ע��ǰ�û������ַ
	///@param pszFrontAddress��ǰ�û������ַ��
	///@remark �����ַ�ĸ�ʽΪ����protocol://ipaddress:port�����磺��tcp://127.0.0.1:17001���� 
	///@remark ��tcp��������Э�飬��127.0.0.1�������������ַ����17001������������˿ںš�
	virtual void RegisterFront(char *pszFrontAddress, unsigned int priority = 0) = 0;
	
	///ע��ص��ӿ�
	///@param pSpi �����Իص��ӿ����ʵ��
	virtual void RegisterSpi(CFutureFtdcQuerySpi *pSpi) = 0;
	
	///����˽������
	///@param nResumeType ˽�����ش���ʽ  
	///        FUTURE_TERT_RESTART:�ӱ������տ�ʼ�ش�
	///        FUTURE_TERT_RESUME:���ϴ��յ�������
	///        FUTURE_TERT_QUICK:ֻ���͵�¼��˽����������
	///@remark �÷���Ҫ��Init����ǰ���á����������򲻻��յ�˽���������ݡ�
	virtual void SubscribePrivateTopic(FUTURE_TE_RESUME_TYPE nResumeType) = 0;
	
	///���Ĺ�������
	///@param nResumeType �������ش���ʽ  
	///        FUTURE_TERT_RESTART:�ӱ������տ�ʼ�ش�
	///        FUTURE_TERT_RESUME:���ϴ��յ�������
	///        FUTURE_TERT_QUICK:ֻ���͵�¼�󹫹���������
	///@remark �÷���Ҫ��Init����ǰ���á����������򲻻��յ������������ݡ�
	virtual void SubscribePublicTopic(FUTURE_TE_RESUME_TYPE nResumeType) = 0;

  ///�ͻ�����֤����
	virtual int ReqAuthenticate(CFutureFtdcReqAuthenticateField *pReqAuthenticateField, int nRequestID) = 0;
	
	///�û���¼����
	virtual int ReqUserLogin(CFutureFtdcReqUserLoginField *pReqUserLoginField, int nRequestID) = 0;
	

	///�ǳ�����
	virtual int ReqUserLogout(CFutureFtdcUserLogoutField *pUserLogout, int nRequestID) = 0;

	///�����ѯ����
	virtual int ReqQryOrder(CFutureFtdcQryOrderField *pQryOrder, int nRequestID) = 0;

	///�����ѯ�ɽ�
	virtual int ReqQryTrade(CFutureFtdcQryTradeField *pQryTrade, int nRequestID) = 0;

	///�����ѯͶ���ֲ߳�
	virtual int ReqQryInvestorPosition(CFutureFtdcQryInvestorPositionField *pQryInvestorPosition, int nRequestID) = 0;

	///�����ѯ�ʽ��˻�
	virtual int ReqQryTradingAccount(CFutureFtdcQryTradingAccountField *pQryTradingAccount, int nRequestID) = 0;

	///�����ѯͶ����
	virtual int ReqQryInvestor(CFutureFtdcQryInvestorField *pQryInvestor, int nRequestID) = 0;

	///�����ѯ���ױ���
	virtual int ReqQryTradingCode(CFutureFtdcQryTradingCodeField *pQryTradingCode, int nRequestID) = 0;

	///�����ѯ��Լ��֤����
	virtual int ReqQryInstrumentMarginRate(CFutureFtdcQryInstrumentMarginRateField *pQryInstrumentMarginRate, int nRequestID) = 0;

	///�����ѯ��Լ��������
	virtual int ReqQryInstrumentCommissionRate(CFutureFtdcQryInstrumentCommissionRateField *pQryInstrumentCommissionRate, int nRequestID) = 0;

	///�����ѯ������
	virtual int ReqQryExchange(CFutureFtdcQryExchangeField *pQryExchange, int nRequestID) = 0;

	///�����ѯ��Լ
	virtual int ReqQryInstrument(CFutureFtdcQryInstrumentField *pQryInstrument, int nRequestID) = 0;

	///�����ѯ����
	virtual int ReqQryDepthMarketData(CFutureFtdcQryDepthMarketDataField *pQryDepthMarketData, int nRequestID) = 0;

	///�����ѯͶ���߽�����
	virtual int ReqQrySettlementInfo(CFutureFtdcQrySettlementInfoField *pQrySettlementInfo, int nRequestID) = 0;

	///�����ѯת������
	virtual int ReqQryTransferBank(CFutureFtdcQryTransferBankField *pQryTransferBank, int nRequestID) = 0;

	///�����ѯͶ���ֲ߳���ϸ
	virtual int ReqQryInvestorPositionDetail(CFutureFtdcQryInvestorPositionDetailField *pQryInvestorPositionDetail, int nRequestID) = 0;

	///�����ѯͶ���ֲ߳���ϸ
	virtual int ReqQryInvestorPositionCombineDetail(CFutureFtdcQryInvestorPositionCombineDetailField *pQryInvestorPositionCombineDetail, int nRequestID) = 0;

	///�����ѯ��֤����ϵͳ���͹�˾�ʽ��˻���Կ
	virtual int ReqQryCFMMCTradingAccountKey(CFutureFtdcQryCFMMCTradingAccountKeyField *pQryCFMMCTradingAccountKey, int nRequestID) = 0;

	///�����ѯ�ֵ��۵���Ϣ
	virtual int ReqQryEWarrantOffset(CFutureFtdcQryEWarrantOffsetField *pQryEWarrantOffset, int nRequestID) = 0;

	///�����ѯִ������
	virtual int ReqQryExecOrder(CFutureFtdcQryExecOrderField *pQryExecOrder, int nRequestID) = 0;

	///�����ѯִ���������
	virtual int ReqQryExecOrderAction(CFutureFtdcQryExecOrderActionField *pQryExecOrderAction, int nRequestID) = 0;

	///�����ѯ����ִ������
	virtual int ReqQryErrExecOrder(CFutureFtdcQryErrExecOrderField *pQryErrExecOrder, int nRequestID) = 0;

	///�����ѯ����ִ���������
	virtual int ReqQryErrExecOrderAction(CFutureFtdcQryErrExecOrderActionField *pQryErrExecOrderAction, int nRequestID) = 0;

	///�����ѯת����ˮ
	virtual int ReqQryTransferSerial(CFutureFtdcQryTransferSerialField *pQryTransferSerial, int nRequestID) = 0;

	///�����ѯ����ǩԼ��ϵ
	virtual int ReqQryAccountregister(CFutureFtdcQryAccountregisterField *pQryAccountregister, int nRequestID) = 0;

	///�����ѯǩԼ����
	virtual int ReqQryContractBank(CFutureFtdcQryContractBankField *pQryContractBank, int nRequestID) = 0;

	///�����ѯ����֪ͨ
	virtual int ReqQryTradingNotice(CFutureFtdcQryTradingNoticeField *pQryTradingNotice, int nRequestID) = 0;

	///�����ѯ���͹�˾���ײ���
	virtual int ReqQryBrokerTradingParams(CFutureFtdcQryBrokerTradingParamsField *pQryBrokerTradingParams, int nRequestID) = 0;

	///�����ѯ���͹�˾�����㷨
	virtual int ReqQryBrokerTradingAlgos(CFutureFtdcQryBrokerTradingAlgosField *pQryBrokerTradingAlgos, int nRequestID) = 0;
protected:
	~CFutureFtdcQueryApi(){};
};

#ifndef WINDOWS
	#if __GNUC__ >= 4
		#pragma GCC visibility pop
	#endif
#endif
#endif
