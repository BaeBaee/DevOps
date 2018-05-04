
#if !defined(FUTURE_FTDCTRADERAPI_H)
#define FUTURE_FTDCTRADERAPI_H

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "FutureFtdcUserApiStruct.h"

#if defined(ISLIB) && defined(WIN32)
#ifdef LIB_TRADER_API_EXPORT
#define TRADER_API_EXPORT __declspec(dllexport)
#else
#define TRADER_API_EXPORT __declspec(dllimport)
#endif
#else
#define TRADER_API_EXPORT 
#endif

class CFutureFtdcTraderSpi
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

	///�û��������������Ӧ
	virtual void OnRspUserPasswordUpdate(CFutureFtdcUserPasswordUpdateField *pUserPasswordUpdate, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///�ʽ��˻��������������Ӧ
	virtual void OnRspTradingAccountPasswordUpdate(CFutureFtdcTradingAccountPasswordUpdateField *pTradingAccountPasswordUpdate, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///����¼��������Ӧ
	virtual void OnRspOrderInsert(CFutureFtdcInputOrderField *pInputOrder, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///��������������Ӧ
	virtual void OnRspOrderAction(CFutureFtdcInputOrderActionField *pInputOrderAction, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///��ѯ��󱨵�������Ӧ
	virtual void OnRspQueryMaxOrderVolume(CFutureFtdcQueryMaxOrderVolumeField *pQueryMaxOrderVolume, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///Ͷ���߽�����ȷ����Ӧ
	virtual void OnRspSettlementInfoConfirm(CFutureFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ִ������¼��������Ӧ
	virtual void OnRspExecOrderInsert(CFutureFtdcInputExecOrderField *pInputExecOrder, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ִ���������������Ӧ
	virtual void OnRspExecOrderAction(CFutureFtdcInputExecOrderActionField *pInputExecOrderAction, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///����¼��������Ӧ
	virtual void OnRspQuoteInsert(CFutureFtdcInputQuoteField *pInputQuote, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///���۲���������Ӧ
	virtual void OnRspQuoteAction(CFutureFtdcInputQuoteActionField *pInputQuoteAction, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ѯ�۲���Ӧ��
	virtual void OnRspForQuote(CFutureFtdcInputForQuoteField *pInputForQuote, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///�����ʽ���ת��Ӧ
	virtual void OnRspInternalTransfer(CFutureFtdcInternalTransferField *pInternalTransfer, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///����Ӧ��
	virtual void OnRspError(CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///����֪ͨ
	virtual void OnRtnOrder(CFutureFtdcOrderField *pOrder) {};

	///�ɽ�֪ͨ
	virtual void OnRtnTrade(CFutureFtdcTradeField *pTrade) {};

	///����¼�����ر�
	virtual void OnErrRtnOrderInsert(CFutureFtdcInputOrderField *pInputOrder, CFutureFtdcRspInfoField *pRspInfo) {};

	///������������ر�
	virtual void OnErrRtnOrderAction(CFutureFtdcOrderActionField *pOrderAction, CFutureFtdcRspInfoField *pRspInfo) {};

	///��Լ����״̬֪ͨ
	virtual void OnRtnInstrumentStatus(CFutureFtdcInstrumentStatusField *pInstrumentStatus) {};

	///��ʾ������У�����
	virtual void OnRtnErrorConditionalOrder(CFutureFtdcErrorConditionalOrderField *pErrorConditionalOrder) {};

	///����¼�����ر�
	virtual void OnErrRtnQuoteInsert(CFutureFtdcInputQuoteField *pInputQuote, CFutureFtdcRspInfoField *pRspInfo) {};

	///���۲�������ر�
	virtual void OnErrRtnQuoteAction(CFutureFtdcQuoteActionField *pQuoteAction, CFutureFtdcRspInfoField *pRspInfo) {};

	///ѯ��֪ͨ
	virtual void OnRtnForQuote(CFutureFtdcForQuoteField *pForQuote) {};

	///ѯ�ۻر�
	virtual void OnRtnExchRspForQuote(CFutureFtdcExchRspForQuoteField *pExchRspForQuote) {};

	///��ʾ������ѯ��ʧ��
	virtual void OnRtnErrExchRtnForQuote(CFutureFtdcErrRtnExchRtnForQuoteField *pErrRtnExchRtnForQuote) {};

	///���з��������ʽ�ת�ڻ�֪ͨ
	virtual void OnRtnFromBankToFutureByBank(CFutureFtdcRspTransferField *pRspTransfer) {};

	///���з����ڻ��ʽ�ת����֪ͨ
	virtual void OnRtnFromFutureToBankByBank(CFutureFtdcRspTransferField *pRspTransfer) {};

	///���з����������ת�ڻ�֪ͨ
	virtual void OnRtnRepealFromBankToFutureByBank(CFutureFtdcRspRepealField *pRspRepeal) {};

	///���з�������ڻ�ת����֪ͨ
	virtual void OnRtnRepealFromFutureToBankByBank(CFutureFtdcRspRepealField *pRspRepeal) {};

	///�ڻ����������ʽ�ת�ڻ�֪ͨ
	virtual void OnRtnFromBankToFutureByFuture(CFutureFtdcRspTransferField *pRspTransfer) {};

	///�ڻ������ڻ��ʽ�ת����֪ͨ
	virtual void OnRtnFromFutureToBankByFuture(CFutureFtdcRspTransferField *pRspTransfer) {};

	///ϵͳ����ʱ�ڻ����ֹ������������ת�ڻ��������д�����Ϻ��̷��ص�֪ͨ
	virtual void OnRtnRepealFromBankToFutureByFutureManual(CFutureFtdcRspRepealField *pRspRepeal) {};

	///ϵͳ����ʱ�ڻ����ֹ���������ڻ�ת�����������д�����Ϻ��̷��ص�֪ͨ
	virtual void OnRtnRepealFromFutureToBankByFutureManual(CFutureFtdcRspRepealField *pRspRepeal) {};

	///�ڻ������ѯ�������֪ͨ
	virtual void OnRtnQueryBankBalanceByFuture(CFutureFtdcNotifyQueryAccountField *pNotifyQueryAccount) {};

	///�ڻ����������ʽ�ת�ڻ�����ر�
	virtual void OnErrRtnBankToFutureByFuture(CFutureFtdcReqTransferField *pReqTransfer, CFutureFtdcRspInfoField *pRspInfo) {};

	///�ڻ������ڻ��ʽ�ת���д���ر�
	virtual void OnErrRtnFutureToBankByFuture(CFutureFtdcReqTransferField *pReqTransfer, CFutureFtdcRspInfoField *pRspInfo) {};

	///ϵͳ����ʱ�ڻ����ֹ������������ת�ڻ�����ر�
	virtual void OnErrRtnRepealBankToFutureByFutureManual(CFutureFtdcReqRepealField *pReqRepeal, CFutureFtdcRspInfoField *pRspInfo) {};

	///ϵͳ����ʱ�ڻ����ֹ���������ڻ�ת���д���ر�
	virtual void OnErrRtnRepealFutureToBankByFutureManual(CFutureFtdcReqRepealField *pReqRepeal, CFutureFtdcRspInfoField *pRspInfo) {};

	///�ڻ������ѯ����������ر�
	virtual void OnErrRtnQueryBankBalanceByFuture(CFutureFtdcReqQueryAccountField *pReqQueryAccount, CFutureFtdcRspInfoField *pRspInfo) {};

	///�ڻ������������ת�ڻ��������д�����Ϻ��̷��ص�֪ͨ
	virtual void OnRtnRepealFromBankToFutureByFuture(CFutureFtdcRspRepealField *pRspRepeal) {};

	///�ڻ���������ڻ�ת�����������д�����Ϻ��̷��ص�֪ͨ
	virtual void OnRtnRepealFromFutureToBankByFuture(CFutureFtdcRspRepealField *pRspRepeal) {};

	///�ڻ����������ʽ�ת�ڻ�Ӧ��
	virtual void OnRspFromBankToFutureByFuture(CFutureFtdcReqTransferField *pReqTransfer, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///�ڻ������ڻ��ʽ�ת����Ӧ��
	virtual void OnRspFromFutureToBankByFuture(CFutureFtdcReqTransferField *pReqTransfer, CFutureFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///���з������ڿ���֪ͨ
	virtual void OnRtnOpenAccountByBank(CFutureFtdcOpenAccountField *pOpenAccount) {};

	///���з�����������֪ͨ
	virtual void OnRtnCancelAccountByBank(CFutureFtdcCancelAccountField *pCancelAccount) {};

	///���з����������˺�֪ͨ
	virtual void OnRtnChangeAccountByBank(CFutureFtdcChangeAccountField *pChangeAccount) {};
};

#ifndef WINDOWS
	#if __GNUC__ >= 4
		#pragma GCC visibility push(default)
	#endif
#endif
class TRADER_API_EXPORT CFutureFtdcTraderApi
{
public:
	///����TraderApi
	///@param pszFlowPath ����������Ϣ�ļ���Ŀ¼��Ĭ��Ϊ��ǰĿ¼
	///@return ��������UserApi
	//modify for udp marketdata
	static CFutureFtdcTraderApi *CreateFtdcTraderApi(const char *pszFlowPath = "", const bool bIsUsingUdp=false);
	
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
	virtual void RegisterSpi(CFutureFtdcTraderSpi *pSpi) = 0;
	
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

	///�û������������
	virtual int ReqUserPasswordUpdate(CFutureFtdcUserPasswordUpdateField *pUserPasswordUpdate, int nRequestID) = 0;

	///�ʽ��˻������������
	virtual int ReqTradingAccountPasswordUpdate(CFutureFtdcTradingAccountPasswordUpdateField *pTradingAccountPasswordUpdate, int nRequestID) = 0;

	///����¼������
	virtual int ReqOrderInsert(CFutureFtdcInputOrderField *pInputOrder, int nRequestID) = 0;

	///������������
	virtual int ReqOrderAction(CFutureFtdcInputOrderActionField *pInputOrderAction, int nRequestID) = 0;

	///��ѯ��󱨵���������
	virtual int ReqQueryMaxOrderVolume(CFutureFtdcQueryMaxOrderVolumeField *pQueryMaxOrderVolume, int nRequestID) = 0;

	///Ͷ���߽�����ȷ��
	virtual int ReqSettlementInfoConfirm(CFutureFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, int nRequestID) = 0;

	///ִ������¼������
	virtual int ReqExecOrderInsert(CFutureFtdcInputExecOrderField *pInputExecOrder, int nRequestID) = 0;

	///ִ�������������
	virtual int ReqExecOrderAction(CFutureFtdcInputExecOrderActionField *pInputExecOrderAction, int nRequestID) = 0;

	///����¼������
	virtual int ReqQuoteInsert(CFutureFtdcInputQuoteField *pInputQuote, int nRequestID) = 0;

	///���۲�������
	virtual int ReqQuoteAction(CFutureFtdcInputQuoteActionField *pInputQuoteAction, int nRequestID) = 0;

	///ѯ�۲�������
	virtual int ReqForQuote(CFutureFtdcInputForQuoteField *pInputForQuote, int nRequestID) = 0;

	///�����ʽ���ת
	virtual int ReqInternalTransfer(CFutureFtdcInternalTransferField *pInternalTransfer, int nRequestID) = 0;

	///�ڻ����������ʽ�ת�ڻ�����
	virtual int ReqFromBankToFutureByFuture(CFutureFtdcReqTransferField *pReqTransfer, int nRequestID) = 0;

	///�ڻ������ڻ��ʽ�ת��������
	virtual int ReqFromFutureToBankByFuture(CFutureFtdcReqTransferField *pReqTransfer, int nRequestID) = 0;
protected:
	~CFutureFtdcTraderApi(){};
};

#ifndef WINDOWS
	#if __GNUC__ >= 4
		#pragma GCC visibility pop
	#endif
#endif
#endif
