
#if !defined(FUTURE_FTDCSTRUCT_H)
#define FUTURE_FTDCSTRUCT_H

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "FutureFtdcUserApiDataType.h"

#pragma pack(push)
#pragma pack(1)

///��Ϣ�ַ�
struct CFutureFtdcDisseminationField
{
	///����ϵ�к�
	TFutureFtdcSequenceSeriesType	SequenceSeries;
	///���к�
	TFutureFtdcSequenceNoType	SequenceNo;
};

///�û���¼����
struct CFutureFtdcReqUserLoginField
{
	///������
	TFutureFtdcDateType	TradingDay;
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///�û�����
	TFutureFtdcUserIDType	UserID;
	///����
	TFutureFtdcPasswordType	Password;
	///�û��˲�Ʒ��Ϣ
	TFutureFtdcProductInfoType	UserProductInfo;
	///�ӿڶ˲�Ʒ��Ϣ
	TFutureFtdcProductInfoType	InterfaceProductInfo;
	///Э����Ϣ
	TFutureFtdcProtocolInfoType	ProtocolInfo;
	///Mac��ַ
	TFutureFtdcMacAddressType	MacAddress;
	///��̬����
	TFutureFtdcPasswordType	OneTimePassword;
	///�ն�IP��ַ
	TFutureFtdcIPAddressType	ClientIPAddress;
};

///�û���¼Ӧ��
struct CFutureFtdcRspUserLoginField
{
	///������
	TFutureFtdcDateType	TradingDay;
	///��¼�ɹ�ʱ��
	TFutureFtdcTimeType	LoginTime;
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///�û�����
	TFutureFtdcUserIDType	UserID;
	///����ϵͳ����
	TFutureFtdcSystemNameType	SystemName;
	///ǰ�ñ��
	TFutureFtdcFrontIDType	FrontID;
	///�Ự���
	TFutureFtdcSessionIDType	SessionID;
	///��󱨵�����
	TFutureFtdcOrderRefType	MaxOrderRef;
	///������ʱ��
	TFutureFtdcTimeType	SHFETime;
	///������ʱ��
	TFutureFtdcTimeType	DCETime;
	///֣����ʱ��
	TFutureFtdcTimeType	CZCETime;
	///�н���ʱ��
	TFutureFtdcTimeType	FFEXTime;
};

///�û��ǳ�����
struct CFutureFtdcUserLogoutField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///�û�����
	TFutureFtdcUserIDType	UserID;
};

///ǿ�ƽ���Ա�˳�
struct CFutureFtdcForceUserLogoutField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///�û�����
	TFutureFtdcUserIDType	UserID;
};

///�ͻ�����֤����
struct CFutureFtdcReqAuthenticateField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///�û�����
	TFutureFtdcUserIDType	UserID;
	///�û��˲�Ʒ��Ϣ
	TFutureFtdcProductInfoType	UserProductInfo;
	///��֤��
	TFutureFtdcAuthCodeType	AuthCode;
};

///�ͻ�����֤��Ӧ
struct CFutureFtdcRspAuthenticateField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///�û�����
	TFutureFtdcUserIDType	UserID;
	///�û��˲�Ʒ��Ϣ
	TFutureFtdcProductInfoType	UserProductInfo;
};

///�ͻ�����֤��Ϣ
struct CFutureFtdcAuthenticationInfoField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///�û�����
	TFutureFtdcUserIDType	UserID;
	///�û��˲�Ʒ��Ϣ
	TFutureFtdcProductInfoType	UserProductInfo;
	///��֤��Ϣ
	TFutureFtdcAuthInfoType	AuthInfo;
	///�Ƿ�Ϊ��֤���
	TFutureFtdcBoolType	IsResult;
};

///����ת�ʱ���ͷ
struct CFutureFtdcTransferHeaderField
{
	///�汾�ţ�������1.0
	TFutureFtdcVersionType	Version;
	///���״��룬����
	TFutureFtdcTradeCodeType	TradeCode;
	///�������ڣ������ʽ��yyyymmdd
	TFutureFtdcTradeDateType	TradeDate;
	///����ʱ�䣬�����ʽ��hhmmss
	TFutureFtdcTradeTimeType	TradeTime;
	///������ˮ�ţ�N/A
	TFutureFtdcTradeSerialType	TradeSerial;
	///�ڻ���˾���룬����
	TFutureFtdcFutureIDType	FutureID;
	///���д��룬���ݲ�ѯ���еõ�������
	TFutureFtdcBankIDType	BankID;
	///���з����Ĵ��룬���ݲ�ѯ���еõ�������
	TFutureFtdcBankBrchIDType	BankBrchID;
	///����Ա��N/A
	TFutureFtdcOperNoType	OperNo;
	///�����豸���ͣ�N/A
	TFutureFtdcDeviceIDType	DeviceID;
	///��¼����N/A
	TFutureFtdcRecordNumType	RecordNum;
	///�Ự��ţ�N/A
	TFutureFtdcSessionIDType	SessionID;
	///�����ţ�N/A
	TFutureFtdcRequestIDType	RequestID;
};

///�����ʽ�ת�ڻ�����TradeCode=202001
struct CFutureFtdcTransferBankToFutureReqField
{
	///�ڻ��ʽ��˻�
	TFutureFtdcAccountIDType	FutureAccount;
	///�����־
	TFutureFtdcFuturePwdFlagType	FuturePwdFlag;
	///����
	TFutureFtdcFutureAccPwdType	FutureAccPwd;
	///ת�˽��
	TFutureFtdcMoneyType	TradeAmt;
	///�ͻ�������
	TFutureFtdcMoneyType	CustFee;
	///���֣�RMB-����� USD-��Բ HKD-��Ԫ
	TFutureFtdcCurrencyCodeType	CurrencyCode;
};

///�����ʽ�ת�ڻ�������Ӧ
struct CFutureFtdcTransferBankToFutureRspField
{
	///��Ӧ����
	TFutureFtdcRetCodeType	RetCode;
	///��Ӧ��Ϣ
	TFutureFtdcRetInfoType	RetInfo;
	///�ʽ��˻�
	TFutureFtdcAccountIDType	FutureAccount;
	///ת�ʽ��
	TFutureFtdcMoneyType	TradeAmt;
	///Ӧ�տͻ�������
	TFutureFtdcMoneyType	CustFee;
	///����
	TFutureFtdcCurrencyCodeType	CurrencyCode;
};

///�ڻ��ʽ�ת��������TradeCode=202002
struct CFutureFtdcTransferFutureToBankReqField
{
	///�ڻ��ʽ��˻�
	TFutureFtdcAccountIDType	FutureAccount;
	///�����־
	TFutureFtdcFuturePwdFlagType	FuturePwdFlag;
	///����
	TFutureFtdcFutureAccPwdType	FutureAccPwd;
	///ת�˽��
	TFutureFtdcMoneyType	TradeAmt;
	///�ͻ�������
	TFutureFtdcMoneyType	CustFee;
	///���֣�RMB-����� USD-��Բ HKD-��Ԫ
	TFutureFtdcCurrencyCodeType	CurrencyCode;
};

///�ڻ��ʽ�ת����������Ӧ
struct CFutureFtdcTransferFutureToBankRspField
{
	///��Ӧ����
	TFutureFtdcRetCodeType	RetCode;
	///��Ӧ��Ϣ
	TFutureFtdcRetInfoType	RetInfo;
	///�ʽ��˻�
	TFutureFtdcAccountIDType	FutureAccount;
	///ת�ʽ��
	TFutureFtdcMoneyType	TradeAmt;
	///Ӧ�տͻ�������
	TFutureFtdcMoneyType	CustFee;
	///����
	TFutureFtdcCurrencyCodeType	CurrencyCode;
};

///��ѯ�����ʽ�����TradeCode=204002
struct CFutureFtdcTransferQryBankReqField
{
	///�ڻ��ʽ��˻�
	TFutureFtdcAccountIDType	FutureAccount;
	///�����־
	TFutureFtdcFuturePwdFlagType	FuturePwdFlag;
	///����
	TFutureFtdcFutureAccPwdType	FutureAccPwd;
	///���֣�RMB-����� USD-��Բ HKD-��Ԫ
	TFutureFtdcCurrencyCodeType	CurrencyCode;
};

///��ѯ�����ʽ�������Ӧ
struct CFutureFtdcTransferQryBankRspField
{
	///��Ӧ����
	TFutureFtdcRetCodeType	RetCode;
	///��Ӧ��Ϣ
	TFutureFtdcRetInfoType	RetInfo;
	///�ʽ��˻�
	TFutureFtdcAccountIDType	FutureAccount;
	///�������
	TFutureFtdcMoneyType	TradeAmt;
	///���п������
	TFutureFtdcMoneyType	UseAmt;
	///���п�ȡ���
	TFutureFtdcMoneyType	FetchAmt;
	///����
	TFutureFtdcCurrencyCodeType	CurrencyCode;
};

///��ѯ���н�����ϸ����TradeCode=204999
struct CFutureFtdcTransferQryDetailReqField
{
	///�ڻ��ʽ��˻�
	TFutureFtdcAccountIDType	FutureAccount;
};

///��ѯ���н�����ϸ������Ӧ
struct CFutureFtdcTransferQryDetailRspField
{
	///��������
	TFutureFtdcDateType	TradeDate;
	///����ʱ��
	TFutureFtdcTradeTimeType	TradeTime;
	///���״���
	TFutureFtdcTradeCodeType	TradeCode;
	///�ڻ���ˮ��
	TFutureFtdcTradeSerialNoType	FutureSerial;
	///�ڻ���˾����
	TFutureFtdcFutureIDType	FutureID;
	///�ʽ��ʺ�
	TFutureFtdcFutureAccountType	FutureAccount;
	///������ˮ��
	TFutureFtdcTradeSerialNoType	BankSerial;
	///���д���
	TFutureFtdcBankIDType	BankID;
	///���з����Ĵ���
	TFutureFtdcBankBrchIDType	BankBrchID;
	///�����˺�
	TFutureFtdcBankAccountType	BankAccount;
	///֤������
	TFutureFtdcCertCodeType	CertCode;
	///���Ҵ���
	TFutureFtdcCurrencyCodeType	CurrencyCode;
	///�������
	TFutureFtdcMoneyType	TxAmount;
	///��Ч��־
	TFutureFtdcTransferValidFlagType	Flag;
};

///��Ӧ��Ϣ
struct CFutureFtdcRspInfoField
{
	///�������
	TFutureFtdcErrorIDType	ErrorID;
	///������Ϣ
	TFutureFtdcErrorMsgType	ErrorMsg;
};

///������
struct CFutureFtdcExchangeField
{
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///����������
	TFutureFtdcExchangeNameType	ExchangeName;
	///����������
	TFutureFtdcExchangePropertyType	ExchangeProperty;
};

///��Ʒ
struct CFutureFtdcProductField
{
	///��Ʒ����
	TFutureFtdcInstrumentIDType	ProductID;
	///��Ʒ����
	TFutureFtdcProductNameType	ProductName;
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///��Ʒ����
	TFutureFtdcProductClassType	ProductClass;
	///��Լ��������
	TFutureFtdcVolumeMultipleType	VolumeMultiple;
	///��С�䶯��λ
	TFutureFtdcPriceType	PriceTick;
	///�м۵�����µ���
	TFutureFtdcVolumeType	MaxMarketOrderVolume;
	///�м۵���С�µ���
	TFutureFtdcVolumeType	MinMarketOrderVolume;
	///�޼۵�����µ���
	TFutureFtdcVolumeType	MaxLimitOrderVolume;
	///�޼۵���С�µ���
	TFutureFtdcVolumeType	MinLimitOrderVolume;
	///�ֲ�����
	TFutureFtdcPositionTypeType	PositionType;
	///�ֲ���������
	TFutureFtdcPositionDateTypeType	PositionDateType;
	///ƽ�ִ�������
	TFutureFtdcCloseDealTypeType	CloseDealType;
};

///��Լ
struct CFutureFtdcInstrumentField
{
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
	///��Լ����
	TFutureFtdcInstrumentNameType	InstrumentName;
	///��Լ�ڽ������Ĵ���
	TFutureFtdcExchangeInstIDType	ExchangeInstID;
	///��Ʒ����
	TFutureFtdcInstrumentIDType	ProductID;
	///��Ʒ����
	TFutureFtdcProductClassType	ProductClass;
	///�������
	TFutureFtdcYearType	DeliveryYear;
	///������
	TFutureFtdcMonthType	DeliveryMonth;
	///�м۵�����µ���
	TFutureFtdcVolumeType	MaxMarketOrderVolume;
	///�м۵���С�µ���
	TFutureFtdcVolumeType	MinMarketOrderVolume;
	///�޼۵�����µ���
	TFutureFtdcVolumeType	MaxLimitOrderVolume;
	///�޼۵���С�µ���
	TFutureFtdcVolumeType	MinLimitOrderVolume;
	///��Լ��������
	TFutureFtdcVolumeMultipleType	VolumeMultiple;
	///��С�䶯��λ
	TFutureFtdcPriceType	PriceTick;
	///������
	TFutureFtdcDateType	CreateDate;
	///������
	TFutureFtdcDateType	OpenDate;
	///������
	TFutureFtdcDateType	ExpireDate;
	///��ʼ������
	TFutureFtdcDateType	StartDelivDate;
	///����������
	TFutureFtdcDateType	EndDelivDate;
	///��Լ��������״̬
	TFutureFtdcInstLifePhaseType	InstLifePhase;
	///��ǰ�Ƿ���
	TFutureFtdcBoolType	IsTrading;
	///�ֲ�����
	TFutureFtdcPositionTypeType	PositionType;
	///�ֲ���������
	TFutureFtdcPositionDateTypeType	PositionDateType;
	///�Ƿ�ʹ�ô��߱�֤���㷨
	TFutureFtdcMaxMarginSideAlgorithmType	MaxMarginSideAlgorithm;
	///������Ʒ����
	TFutureFtdcInstrumentIDType	UnderlyingInstrID;
	///ִ�м�
	TFutureFtdcPriceType	StrikePrice;
	///��Ȩ����
	TFutureFtdcOptionsTypeType	OptionsType;
	///��Լ������Ʒ����
	TFutureFtdcVolumeMultipleType	UnderlyingMultiple;
};

///���͹�˾
struct CFutureFtdcBrokerField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///���͹�˾���
	TFutureFtdcBrokerAbbrType	BrokerAbbr;
	///���͹�˾����
	TFutureFtdcBrokerNameType	BrokerName;
	///�Ƿ��Ծ
	TFutureFtdcBoolType	IsActive;
};

///����������Ա
struct CFutureFtdcTraderField
{
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///����������Ա����
	TFutureFtdcTraderIDType	TraderID;
	///��Ա����
	TFutureFtdcParticipantIDType	ParticipantID;
	///����
	TFutureFtdcPasswordType	Password;
	///��װ����
	TFutureFtdcInstallCountType	InstallCount;
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
};

///Ͷ����
struct CFutureFtdcInvestorField
{
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���߷������
	TFutureFtdcInvestorIDType	InvestorGroupID;
	///Ͷ��������
	TFutureFtdcPartyNameType	InvestorName;
	///֤������
	TFutureFtdcIdCardTypeType	IdentifiedCardType;
	///֤������
	TFutureFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///�Ƿ��Ծ
	TFutureFtdcBoolType	IsActive;
	///��ϵ�绰
	TFutureFtdcTelephoneType	Telephone;
	///ͨѶ��ַ
	TFutureFtdcAddressType	Address;
	///��������
	TFutureFtdcDateType	OpenDate;
	///�ֻ�
	TFutureFtdcMobileType	Mobile;
	///��������ģ�����
	TFutureFtdcInvestorIDType	CommModelID;
	///����ֶ�
	TFutureFtdcPadFieldType	PadField;
	///��֤����ģ�����
	TFutureFtdcInvestorIDType	MarginModelID;
};

///���ױ���
struct CFutureFtdcTradingCodeField
{
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///�ͻ�����
	TFutureFtdcClientIDType	ClientID;
	///�Ƿ��Ծ
	TFutureFtdcBoolType	IsActive;
	///���ױ�������
	TFutureFtdcClientIDTypeType	ClientIDType;
};

///��Ա����;��͹�˾������ձ�
struct CFutureFtdcPartBrokerField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///��Ա����
	TFutureFtdcParticipantIDType	ParticipantID;
	///�Ƿ��Ծ
	TFutureFtdcBoolType	IsActive;
};

///�����û�
struct CFutureFtdcSuperUserField
{
	///�û�����
	TFutureFtdcUserIDType	UserID;
	///�û�����
	TFutureFtdcUserNameType	UserName;
	///����
	TFutureFtdcPasswordType	Password;
	///�Ƿ��Ծ
	TFutureFtdcBoolType	IsActive;
};

///�����û�����Ȩ��
struct CFutureFtdcSuperUserFunctionField
{
	///�û�����
	TFutureFtdcUserIDType	UserID;
	///���ܴ���
	TFutureFtdcFunctionCodeType	FunctionCode;
};

///Ͷ������
struct CFutureFtdcInvestorGroupField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���߷������
	TFutureFtdcInvestorIDType	InvestorGroupID;
	///Ͷ���߷�������
	TFutureFtdcInvestorGroupNameType	InvestorGroupName;
};

///�ʽ��˻�
struct CFutureFtdcTradingAccountField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ�����ʺ�
	TFutureFtdcAccountIDType	AccountID;
	///�ϴ���Ѻ���
	TFutureFtdcMoneyType	PreMortgage;
	///�ϴ����ö��
	TFutureFtdcMoneyType	PreCredit;
	///�ϴδ���
	TFutureFtdcMoneyType	PreDeposit;
	///�ϴν���׼����
	TFutureFtdcMoneyType	PreBalance;
	///�ϴ�ռ�õı�֤��
	TFutureFtdcMoneyType	PreMargin;
	///��Ϣ����
	TFutureFtdcMoneyType	InterestBase;
	///��Ϣ����
	TFutureFtdcMoneyType	Interest;
	///�����
	TFutureFtdcMoneyType	Deposit;
	///������
	TFutureFtdcMoneyType	Withdraw;
	///����ı�֤��
	TFutureFtdcMoneyType	FrozenMargin;
	///������ʽ�
	TFutureFtdcMoneyType	FrozenCash;
	///�����������
	TFutureFtdcMoneyType	FrozenCommission;
	///��ǰ��֤���ܶ�
	TFutureFtdcMoneyType	CurrMargin;
	///�ʽ���
	TFutureFtdcMoneyType	CashIn;
	///������
	TFutureFtdcMoneyType	Commission;
	///ƽ��ӯ��
	TFutureFtdcMoneyType	CloseProfit;
	///�ֲ�ӯ��
	TFutureFtdcMoneyType	PositionProfit;
	///�ڻ�����׼����
	TFutureFtdcMoneyType	Balance;
	///�����ʽ�
	TFutureFtdcMoneyType	Available;
	///��ȡ�ʽ�
	TFutureFtdcMoneyType	WithdrawQuota;
	///����׼����
	TFutureFtdcMoneyType	Reserve;
	///������
	TFutureFtdcDateType	TradingDay;
	///������
	TFutureFtdcSettlementIDType	SettlementID;
	///���ö��
	TFutureFtdcMoneyType	Credit;
	///��Ѻ���
	TFutureFtdcMoneyType	Mortgage;
	///��������֤��
	TFutureFtdcMoneyType	ExchangeMargin;
	///Ͷ���߽��֤��
	TFutureFtdcMoneyType	DeliveryMargin;
	///���������֤��
	TFutureFtdcMoneyType	ExchangeDeliveryMargin;
	///�����ڻ�����׼����
	TFutureFtdcMoneyType	ReserveBalance;
	///��Ȩƽ��ӯ��
	TFutureFtdcMoneyType	OptionCloseProfit;
	///�ʻ�����
	TFutureFtdcAccountLevelType	AccountLevel;
};

///Ͷ���ֲ߳�
struct CFutureFtdcInvestorPositionField
{
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///�ֲֶ�շ���
	TFutureFtdcPosiDirectionType	PosiDirection;
	///Ͷ���ױ���־
	TFutureFtdcHedgeFlagType	HedgeFlag;
	///�ֲ�����
	TFutureFtdcPositionDateType	PositionDate;
	///���ճֲ�
	TFutureFtdcVolumeType	YdPosition;
	///���ճֲ�
	TFutureFtdcVolumeType	Position;
	///��ͷ����
	TFutureFtdcVolumeType	LongFrozen;
	///��ͷ����
	TFutureFtdcVolumeType	ShortFrozen;
	///���ֶ�����
	TFutureFtdcMoneyType	LongFrozenAmount;
	///���ֶ�����
	TFutureFtdcMoneyType	ShortFrozenAmount;
	///������
	TFutureFtdcVolumeType	OpenVolume;
	///ƽ����
	TFutureFtdcVolumeType	CloseVolume;
	///���ֽ��
	TFutureFtdcMoneyType	OpenAmount;
	///ƽ�ֽ��
	TFutureFtdcMoneyType	CloseAmount;
	///ƽ��ֽ��
	TFutureFtdcMoneyType	YdCloseAmount;
	///ƽ�������
	TFutureFtdcVolumeType	YdCloseVolume;
	///�ֲֳɱ�
	TFutureFtdcMoneyType	PositionCost;
	///�ϴ�ռ�õı�֤��
	TFutureFtdcMoneyType	PreMargin;
	///ռ�õı�֤��
	TFutureFtdcMoneyType	UseMargin;
	///����ı�֤��
	TFutureFtdcMoneyType	FrozenMargin;
	///������ʽ�
	TFutureFtdcMoneyType	FrozenCash;
	///�����������
	TFutureFtdcMoneyType	FrozenCommission;
	///�ʽ���
	TFutureFtdcMoneyType	CashIn;
	///������
	TFutureFtdcMoneyType	Commission;
	///ƽ��ӯ��
	TFutureFtdcMoneyType	CloseProfit;
	///�ֲ�ӯ��
	TFutureFtdcMoneyType	PositionProfit;
	///�ϴν����
	TFutureFtdcPriceType	PreSettlementPrice;
	///���ν����
	TFutureFtdcPriceType	SettlementPrice;
	///������
	TFutureFtdcDateType	TradingDay;
	///������
	TFutureFtdcSettlementIDType	SettlementID;
	///���ֳɱ�
	TFutureFtdcMoneyType	OpenCost;
	///��������֤��
	TFutureFtdcMoneyType	ExchangeMargin;
	///��ϳɽ��γɵĳֲ�
	TFutureFtdcVolumeType	CombPosition;
	///��϶�ͷ����
	TFutureFtdcVolumeType	CombLongFrozen;
	///��Ͽ�ͷ����
	TFutureFtdcVolumeType	CombShortFrozen;
	///���ն���ƽ��ӯ��
	TFutureFtdcMoneyType	CloseProfitByDate;
	///��ʶԳ�ƽ��ӯ��
	TFutureFtdcMoneyType	CloseProfitByTrade;
	///���ճֲ�
	TFutureFtdcVolumeType	TodayPosition;
	///��֤����
	TFutureFtdcRatioType	MarginRateByMoney;
	///��֤����(������)
	TFutureFtdcRatioType	MarginRateByVolume;
	///ִ�ж���
	TFutureFtdcVolumeType	StrikeFrozen;
	///ִ�ж�����
	TFutureFtdcMoneyType	StrikeFrozenAmount;
	///����ִ�ж���
	TFutureFtdcVolumeType	AbandonFrozen;
};

///��Լ��֤����
struct CFutureFtdcInstrumentMarginRateField
{
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
	///Ͷ���߷�Χ
	TFutureFtdcInvestorRangeType	InvestorRange;
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///Ͷ���ױ���־
	TFutureFtdcHedgeFlagType	HedgeFlag;
	///��ͷ��֤����
	TFutureFtdcRatioType	LongMarginRatioByMoney;
	///��ͷ��֤���
	TFutureFtdcMoneyType	LongMarginRatioByVolume;
	///��ͷ��֤����
	TFutureFtdcRatioType	ShortMarginRatioByMoney;
	///��ͷ��֤���
	TFutureFtdcMoneyType	ShortMarginRatioByVolume;
	///�Ƿ���Խ�������ȡ
	TFutureFtdcBoolType	IsRelative;
};

///��Լ��������
struct CFutureFtdcInstrumentCommissionRateField
{
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
	///Ͷ���߷�Χ
	TFutureFtdcInvestorRangeType	InvestorRange;
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///Ͷ���ױ���־
	TFutureFtdcHedgeFlagType	HedgeFlag;
	///������������
	TFutureFtdcRatioType	OpenRatioByMoney;
	///����������
	TFutureFtdcRatioType	OpenRatioByVolume;
	///ƽ����������
	TFutureFtdcRatioType	CloseRatioByMoney;
	///ƽ��������
	TFutureFtdcRatioType	CloseRatioByVolume;
	///ƽ����������
	TFutureFtdcRatioType	CloseTodayRatioByMoney;
	///ƽ��������
	TFutureFtdcRatioType	CloseTodayRatioByVolume;
};

///�������
struct CFutureFtdcDepthMarketDataField
{
	///������
	TFutureFtdcDateType	TradingDay;
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///��Լ�ڽ������Ĵ���
	TFutureFtdcExchangeInstIDType	ExchangeInstID;
	///���¼�
	TFutureFtdcPriceType	LastPrice;
	///�ϴν����
	TFutureFtdcPriceType	PreSettlementPrice;
	///������
	TFutureFtdcPriceType	PreClosePrice;
	///��ֲ���
	TFutureFtdcLargeVolumeType	PreOpenInterest;
	///����
	TFutureFtdcPriceType	OpenPrice;
	///��߼�
	TFutureFtdcPriceType	HighestPrice;
	///��ͼ�
	TFutureFtdcPriceType	LowestPrice;
	///����
	TFutureFtdcVolumeType	Volume;
	///�ɽ����
	TFutureFtdcMoneyType	Turnover;
	///�ֲ���
	TFutureFtdcLargeVolumeType	OpenInterest;
	///������
	TFutureFtdcPriceType	ClosePrice;
	///���ν����
	TFutureFtdcPriceType	SettlementPrice;
	///��ͣ���
	TFutureFtdcPriceType	UpperLimitPrice;
	///��ͣ���
	TFutureFtdcPriceType	LowerLimitPrice;
	///����ʵ��
	TFutureFtdcRatioType	PreDelta;
	///����ʵ��
	TFutureFtdcRatioType	CurrDelta;
	///����޸�ʱ��
	TFutureFtdcTimeType	UpdateTime;
	///����޸ĺ���
	TFutureFtdcMillisecType	UpdateMillisec;
	///�����һ
	TFutureFtdcPriceType	BidPrice1;
	///������һ
	TFutureFtdcVolumeType	BidVolume1;
	///������һ
	TFutureFtdcPriceType	AskPrice1;
	///������һ
	TFutureFtdcVolumeType	AskVolume1;
	///����۶�
	TFutureFtdcPriceType	BidPrice2;
	///��������
	TFutureFtdcVolumeType	BidVolume2;
	///�����۶�
	TFutureFtdcPriceType	AskPrice2;
	///��������
	TFutureFtdcVolumeType	AskVolume2;
	///�������
	TFutureFtdcPriceType	BidPrice3;
	///��������
	TFutureFtdcVolumeType	BidVolume3;
	///��������
	TFutureFtdcPriceType	AskPrice3;
	///��������
	TFutureFtdcVolumeType	AskVolume3;
	///�������
	TFutureFtdcPriceType	BidPrice4;
	///��������
	TFutureFtdcVolumeType	BidVolume4;
	///��������
	TFutureFtdcPriceType	AskPrice4;
	///��������
	TFutureFtdcVolumeType	AskVolume4;
	///�������
	TFutureFtdcPriceType	BidPrice5;
	///��������
	TFutureFtdcVolumeType	BidVolume5;
	///��������
	TFutureFtdcPriceType	AskPrice5;
	///��������
	TFutureFtdcVolumeType	AskVolume5;
	///���վ���
	TFutureFtdcPriceType	AveragePrice;
	///ҵ������
	TFutureFtdcDateType	ActionDay;
};

///Ͷ���ߺ�Լ����Ȩ��
struct CFutureFtdcInstrumentTradingRightField
{
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
	///Ͷ���߷�Χ
	TFutureFtdcInvestorRangeType	InvestorRange;
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///����Ȩ��
	TFutureFtdcTradingRightType	TradingRight;
	///���۽���Ȩ��
	TFutureFtdcTradingRightType	QuoteTradingRight;
};

///���͹�˾�û�
struct CFutureFtdcBrokerUserField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///�û�����
	TFutureFtdcUserIDType	UserID;
	///�û�����
	TFutureFtdcUserNameType	UserName;
	///�û�����
	TFutureFtdcUserTypeType	UserType;
	///�Ƿ��Ծ
	TFutureFtdcBoolType	IsActive;
	///�Ƿ�ʹ������
	TFutureFtdcBoolType	IsUsingOTP;
};

///���͹�˾�û�����
struct CFutureFtdcBrokerUserPasswordField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///�û�����
	TFutureFtdcUserIDType	UserID;
	///����
	TFutureFtdcPasswordType	Password;
};

///���͹�˾�û�����Ȩ��
struct CFutureFtdcBrokerUserFunctionField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///�û�����
	TFutureFtdcUserIDType	UserID;
	///���͹�˾���ܴ���
	TFutureFtdcBrokerFunctionCodeType	BrokerFunctionCode;
};

///����������Ա���̻�
struct CFutureFtdcTraderOfferField
{
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///����������Ա����
	TFutureFtdcTraderIDType	TraderID;
	///��Ա����
	TFutureFtdcParticipantIDType	ParticipantID;
	///����
	TFutureFtdcPasswordType	Password;
	///��װ���
	TFutureFtdcInstallIDType	InstallID;
	///���ر������
	TFutureFtdcOrderLocalIDType	OrderLocalID;
	///����������Ա����״̬
	TFutureFtdcTraderConnectStatusType	TraderConnectStatus;
	///�����������������
	TFutureFtdcDateType	ConnectRequestDate;
	///�������������ʱ��
	TFutureFtdcTimeType	ConnectRequestTime;
	///�ϴα�������
	TFutureFtdcDateType	LastReportDate;
	///�ϴα���ʱ��
	TFutureFtdcTimeType	LastReportTime;
	///�����������
	TFutureFtdcDateType	ConnectDate;
	///�������ʱ��
	TFutureFtdcTimeType	ConnectTime;
	///��������
	TFutureFtdcDateType	StartDate;
	///����ʱ��
	TFutureFtdcTimeType	StartTime;
	///������
	TFutureFtdcDateType	TradingDay;
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///��ϯλ���ɽ����
	TFutureFtdcTradeIDType	MaxTradeID;
	///��ϯλ��󱨵�����
	TFutureFtdcReturnCodeType	MaxOrderMessageReference;
};

///Ͷ���߽�����
struct CFutureFtdcSettlementInfoField
{
	///������
	TFutureFtdcDateType	TradingDay;
	///������
	TFutureFtdcSettlementIDType	SettlementID;
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///���
	TFutureFtdcSequenceNoType	SequenceNo;
	///��Ϣ����
	TFutureFtdcContentType	Content;
};

///��Լ��֤���ʵ���
struct CFutureFtdcInstrumentMarginRateAdjustField
{
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
	///Ͷ���߷�Χ
	TFutureFtdcInvestorRangeType	InvestorRange;
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///Ͷ���ױ���־
	TFutureFtdcHedgeFlagType	HedgeFlag;
	///��ͷ��֤����
	TFutureFtdcRatioType	LongMarginRatioByMoney;
	///��ͷ��֤���
	TFutureFtdcMoneyType	LongMarginRatioByVolume;
	///��ͷ��֤����
	TFutureFtdcRatioType	ShortMarginRatioByMoney;
	///��ͷ��֤���
	TFutureFtdcMoneyType	ShortMarginRatioByVolume;
	///�Ƿ���Խ�������ȡ
	TFutureFtdcBoolType	IsRelative;
};

///��������֤����
struct CFutureFtdcExchangeMarginRateField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
	///Ͷ���ױ���־
	TFutureFtdcHedgeFlagType	HedgeFlag;
	///��ͷ��֤����
	TFutureFtdcRatioType	LongMarginRatioByMoney;
	///��ͷ��֤���
	TFutureFtdcMoneyType	LongMarginRatioByVolume;
	///��ͷ��֤����
	TFutureFtdcRatioType	ShortMarginRatioByMoney;
	///��ͷ��֤���
	TFutureFtdcMoneyType	ShortMarginRatioByVolume;
};

///��������֤���ʵ���
struct CFutureFtdcExchangeMarginRateAdjustField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
	///Ͷ���ױ���־
	TFutureFtdcHedgeFlagType	HedgeFlag;
	///���潻����Ͷ���߶�ͷ��֤����
	TFutureFtdcRatioType	LongMarginRatioByMoney;
	///���潻����Ͷ���߶�ͷ��֤���
	TFutureFtdcMoneyType	LongMarginRatioByVolume;
	///���潻����Ͷ���߿�ͷ��֤����
	TFutureFtdcRatioType	ShortMarginRatioByMoney;
	///���潻����Ͷ���߿�ͷ��֤���
	TFutureFtdcMoneyType	ShortMarginRatioByVolume;
	///��������ͷ��֤����
	TFutureFtdcRatioType	ExchLongMarginRatioByMoney;
	///��������ͷ��֤���
	TFutureFtdcMoneyType	ExchLongMarginRatioByVolume;
	///��������ͷ��֤����
	TFutureFtdcRatioType	ExchShortMarginRatioByMoney;
	///��������ͷ��֤���
	TFutureFtdcMoneyType	ExchShortMarginRatioByVolume;
	///�����潻����Ͷ���߶�ͷ��֤����
	TFutureFtdcRatioType	NoLongMarginRatioByMoney;
	///�����潻����Ͷ���߶�ͷ��֤���
	TFutureFtdcMoneyType	NoLongMarginRatioByVolume;
	///�����潻����Ͷ���߿�ͷ��֤����
	TFutureFtdcRatioType	NoShortMarginRatioByMoney;
	///�����潻����Ͷ���߿�ͷ��֤���
	TFutureFtdcMoneyType	NoShortMarginRatioByVolume;
};

///��������
struct CFutureFtdcSettlementRefField
{
	///������
	TFutureFtdcDateType	TradingDay;
	///������
	TFutureFtdcSettlementIDType	SettlementID;
};

///��ǰʱ��
struct CFutureFtdcCurrentTimeField
{
	///��ǰ����
	TFutureFtdcDateType	CurrDate;
	///��ǰʱ��
	TFutureFtdcTimeType	CurrTime;
	///��ǰʱ�䣨���룩
	TFutureFtdcMillisecType	CurrMillisec;
	///ҵ������
	TFutureFtdcDateType	ActionDay;
};

///ͨѶ�׶�
struct CFutureFtdcCommPhaseField
{
	///������
	TFutureFtdcDateType	TradingDay;
	///ͨѶʱ�α��
	TFutureFtdcCommPhaseNoType	CommPhaseNo;
	///ϵͳ���
	TFutureFtdcSystemIDType	SystemID;
};

///��¼��Ϣ
struct CFutureFtdcLoginInfoField
{
	///ǰ�ñ��
	TFutureFtdcFrontIDType	FrontID;
	///�Ự���
	TFutureFtdcSessionIDType	SessionID;
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///�û�����
	TFutureFtdcUserIDType	UserID;
	///��¼����
	TFutureFtdcDateType	LoginDate;
	///��¼ʱ��
	TFutureFtdcTimeType	LoginTime;
	///IP��ַ
	TFutureFtdcIPAddressType	IPAddress;
	///�û��˲�Ʒ��Ϣ
	TFutureFtdcProductInfoType	UserProductInfo;
	///�ӿڶ˲�Ʒ��Ϣ
	TFutureFtdcProductInfoType	InterfaceProductInfo;
	///Э����Ϣ
	TFutureFtdcProtocolInfoType	ProtocolInfo;
	///ϵͳ����
	TFutureFtdcSystemNameType	SystemName;
	///����
	TFutureFtdcPasswordType	Password;
	///��󱨵�����
	TFutureFtdcOrderRefType	MaxOrderRef;
	///������ʱ��
	TFutureFtdcTimeType	SHFETime;
	///������ʱ��
	TFutureFtdcTimeType	DCETime;
	///֣����ʱ��
	TFutureFtdcTimeType	CZCETime;
	///�н���ʱ��
	TFutureFtdcTimeType	FFEXTime;
	///Mac��ַ
	TFutureFtdcMacAddressType	MacAddress;
	///��̬����
	TFutureFtdcPasswordType	OneTimePassword;
};

///��¼��Ϣ
struct CFutureFtdcLogoutAllField
{
	///ǰ�ñ��
	TFutureFtdcFrontIDType	FrontID;
	///�Ự���
	TFutureFtdcSessionIDType	SessionID;
	///ϵͳ����
	TFutureFtdcSystemNameType	SystemName;
};

///ǰ��״̬
struct CFutureFtdcFrontStatusField
{
	///ǰ�ñ��
	TFutureFtdcFrontIDType	FrontID;
	///�ϴα�������
	TFutureFtdcDateType	LastReportDate;
	///�ϴα���ʱ��
	TFutureFtdcTimeType	LastReportTime;
	///�Ƿ��Ծ
	TFutureFtdcBoolType	IsActive;
};

///�û�������
struct CFutureFtdcUserPasswordUpdateField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///�û�����
	TFutureFtdcUserIDType	UserID;
	///ԭ���Ŀ���
	TFutureFtdcPasswordType	OldPassword;
	///�µĿ���
	TFutureFtdcPasswordType	NewPassword;
};

///���뱨��
struct CFutureFtdcInputOrderField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
	///��������
	TFutureFtdcOrderRefType	OrderRef;
	///�û�����
	TFutureFtdcUserIDType	UserID;
	///�����۸�����
	TFutureFtdcOrderPriceTypeType	OrderPriceType;
	///��������
	TFutureFtdcDirectionType	Direction;
	///��Ͽ�ƽ��־
	TFutureFtdcCombOffsetFlagType	CombOffsetFlag;
	///���Ͷ���ױ���־
	TFutureFtdcCombHedgeFlagType	CombHedgeFlag;
	///�۸�
	TFutureFtdcPriceType	LimitPrice;
	///����
	TFutureFtdcVolumeType	VolumeTotalOriginal;
	///��Ч������
	TFutureFtdcTimeConditionType	TimeCondition;
	///GTD����
	TFutureFtdcDateType	GTDDate;
	///�ɽ�������
	TFutureFtdcVolumeConditionType	VolumeCondition;
	///��С�ɽ���
	TFutureFtdcVolumeType	MinVolume;
	///��������
	TFutureFtdcContingentConditionType	ContingentCondition;
	///ֹ���
	TFutureFtdcPriceType	StopPrice;
	///ǿƽԭ��
	TFutureFtdcForceCloseReasonType	ForceCloseReason;
	///�Զ������־
	TFutureFtdcBoolType	IsAutoSuspend;
	///ҵ��Ԫ
	TFutureFtdcBusinessUnitType	BusinessUnit;
	///������
	TFutureFtdcRequestIDType	RequestID;
	///�û�ǿ����־
	TFutureFtdcBoolType	UserForceClose;
	///��������־
	TFutureFtdcBoolType	IsSwapOrder;
	///���ر������
	TFutureFtdcOrderLocalIDType	OrderLocalID;
};

///����
struct CFutureFtdcOrderField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
	///��������
	TFutureFtdcOrderRefType	OrderRef;
	///�û�����
	TFutureFtdcUserIDType	UserID;
	///�����۸�����
	TFutureFtdcOrderPriceTypeType	OrderPriceType;
	///��������
	TFutureFtdcDirectionType	Direction;
	///��Ͽ�ƽ��־
	TFutureFtdcCombOffsetFlagType	CombOffsetFlag;
	///���Ͷ���ױ���־
	TFutureFtdcCombHedgeFlagType	CombHedgeFlag;
	///�۸�
	TFutureFtdcPriceType	LimitPrice;
	///����
	TFutureFtdcVolumeType	VolumeTotalOriginal;
	///��Ч������
	TFutureFtdcTimeConditionType	TimeCondition;
	///GTD����
	TFutureFtdcDateType	GTDDate;
	///�ɽ�������
	TFutureFtdcVolumeConditionType	VolumeCondition;
	///��С�ɽ���
	TFutureFtdcVolumeType	MinVolume;
	///��������
	TFutureFtdcContingentConditionType	ContingentCondition;
	///ֹ���
	TFutureFtdcPriceType	StopPrice;
	///ǿƽԭ��
	TFutureFtdcForceCloseReasonType	ForceCloseReason;
	///�Զ������־
	TFutureFtdcBoolType	IsAutoSuspend;
	///ҵ��Ԫ
	TFutureFtdcBusinessUnitType	BusinessUnit;
	///������
	TFutureFtdcRequestIDType	RequestID;
	///���ر������
	TFutureFtdcOrderLocalIDType	OrderLocalID;
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///��Ա����
	TFutureFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TFutureFtdcClientIDType	ClientID;
	///��Լ�ڽ������Ĵ���
	TFutureFtdcExchangeInstIDType	ExchangeInstID;
	///����������Ա����
	TFutureFtdcTraderIDType	TraderID;
	///��װ���
	TFutureFtdcInstallIDType	InstallID;
	///�����ύ״̬
	TFutureFtdcOrderSubmitStatusType	OrderSubmitStatus;
	///������ʾ���
	TFutureFtdcSequenceNoType	NotifySequence;
	///������
	TFutureFtdcDateType	TradingDay;
	///������
	TFutureFtdcSettlementIDType	SettlementID;
	///�������
	TFutureFtdcOrderSysIDType	OrderSysID;
	///������Դ
	TFutureFtdcOrderSourceType	OrderSource;
	///����״̬
	TFutureFtdcOrderStatusType	OrderStatus;
	///��������
	TFutureFtdcOrderTypeType	OrderType;
	///��ɽ�����
	TFutureFtdcVolumeType	VolumeTraded;
	///ʣ������
	TFutureFtdcVolumeType	VolumeTotal;
	///��������
	TFutureFtdcDateType	InsertDate;
	///ί��ʱ��
	TFutureFtdcTimeType	InsertTime;
	///����ʱ��
	TFutureFtdcTimeType	ActiveTime;
	///����ʱ��
	TFutureFtdcTimeType	SuspendTime;
	///����޸�ʱ��
	TFutureFtdcTimeType	UpdateTime;
	///����ʱ��
	TFutureFtdcTimeType	CancelTime;
	///����޸Ľ���������Ա����
	TFutureFtdcTraderIDType	ActiveTraderID;
	///�����Ա���
	TFutureFtdcParticipantIDType	ClearingPartID;
	///���
	TFutureFtdcSequenceNoType	SequenceNo;
	///ǰ�ñ��
	TFutureFtdcFrontIDType	FrontID;
	///�Ự���
	TFutureFtdcSessionIDType	SessionID;
	///�û��˲�Ʒ��Ϣ
	TFutureFtdcProductInfoType	UserProductInfo;
	///״̬��Ϣ
	TFutureFtdcErrorMsgType	StatusMsg;
	///�û�ǿ����־
	TFutureFtdcBoolType	UserForceClose;
	///�����û�����
	TFutureFtdcUserIDType	ActiveUserID;
	///���͹�˾�������
	TFutureFtdcSequenceNoType	BrokerOrderSeq;
	///��ر���
	TFutureFtdcOrderSysIDType	RelativeOrderSysID;
	///֣�����ɽ�����
	TFutureFtdcVolumeType	ZCETotalTradedVolume;
	///��������־
	TFutureFtdcBoolType	IsSwapOrder;
	///���ױ�������
	TFutureFtdcClientIDTypeType	ClientIDType;
};

///����������
struct CFutureFtdcExchangeOrderField
{
	///�����۸�����
	TFutureFtdcOrderPriceTypeType	OrderPriceType;
	///��������
	TFutureFtdcDirectionType	Direction;
	///��Ͽ�ƽ��־
	TFutureFtdcCombOffsetFlagType	CombOffsetFlag;
	///���Ͷ���ױ���־
	TFutureFtdcCombHedgeFlagType	CombHedgeFlag;
	///�۸�
	TFutureFtdcPriceType	LimitPrice;
	///����
	TFutureFtdcVolumeType	VolumeTotalOriginal;
	///��Ч������
	TFutureFtdcTimeConditionType	TimeCondition;
	///GTD����
	TFutureFtdcDateType	GTDDate;
	///�ɽ�������
	TFutureFtdcVolumeConditionType	VolumeCondition;
	///��С�ɽ���
	TFutureFtdcVolumeType	MinVolume;
	///��������
	TFutureFtdcContingentConditionType	ContingentCondition;
	///ֹ���
	TFutureFtdcPriceType	StopPrice;
	///ǿƽԭ��
	TFutureFtdcForceCloseReasonType	ForceCloseReason;
	///�Զ������־
	TFutureFtdcBoolType	IsAutoSuspend;
	///ҵ��Ԫ
	TFutureFtdcBusinessUnitType	BusinessUnit;
	///������
	TFutureFtdcRequestIDType	RequestID;
	///���ر������
	TFutureFtdcOrderLocalIDType	OrderLocalID;
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///��Ա����
	TFutureFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TFutureFtdcClientIDType	ClientID;
	///��Լ�ڽ������Ĵ���
	TFutureFtdcExchangeInstIDType	ExchangeInstID;
	///����������Ա����
	TFutureFtdcTraderIDType	TraderID;
	///��װ���
	TFutureFtdcInstallIDType	InstallID;
	///�����ύ״̬
	TFutureFtdcOrderSubmitStatusType	OrderSubmitStatus;
	///������ʾ���
	TFutureFtdcSequenceNoType	NotifySequence;
	///������
	TFutureFtdcDateType	TradingDay;
	///������
	TFutureFtdcSettlementIDType	SettlementID;
	///�������
	TFutureFtdcOrderSysIDType	OrderSysID;
	///������Դ
	TFutureFtdcOrderSourceType	OrderSource;
	///����״̬
	TFutureFtdcOrderStatusType	OrderStatus;
	///��������
	TFutureFtdcOrderTypeType	OrderType;
	///��ɽ�����
	TFutureFtdcVolumeType	VolumeTraded;
	///ʣ������
	TFutureFtdcVolumeType	VolumeTotal;
	///��������
	TFutureFtdcDateType	InsertDate;
	///ί��ʱ��
	TFutureFtdcTimeType	InsertTime;
	///����ʱ��
	TFutureFtdcTimeType	ActiveTime;
	///����ʱ��
	TFutureFtdcTimeType	SuspendTime;
	///����޸�ʱ��
	TFutureFtdcTimeType	UpdateTime;
	///����ʱ��
	TFutureFtdcTimeType	CancelTime;
	///����޸Ľ���������Ա����
	TFutureFtdcTraderIDType	ActiveTraderID;
	///�����Ա���
	TFutureFtdcParticipantIDType	ClearingPartID;
	///���
	TFutureFtdcSequenceNoType	SequenceNo;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///�Ự���
	TFutureFtdcSessionIDType	SessionID;
	///��������
	TFutureFtdcOrderRefType	OrderRef;
};

///��������������ʧ��
struct CFutureFtdcExchangeOrderInsertErrorField
{
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///��Ա����
	TFutureFtdcParticipantIDType	ParticipantID;
	///����������Ա����
	TFutureFtdcTraderIDType	TraderID;
	///��װ���
	TFutureFtdcInstallIDType	InstallID;
	///���ر������
	TFutureFtdcOrderLocalIDType	OrderLocalID;
	///�������
	TFutureFtdcErrorIDType	ErrorID;
	///������Ϣ
	TFutureFtdcErrorMsgType	ErrorMsg;
	///�ͻ�����
	TFutureFtdcClientIDType	ClientID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///ҵ��Ԫ
	TFutureFtdcBusinessUnitType	BusinessUnit;
	///���
	TFutureFtdcSequenceNoType	SequenceNo;
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///�Ự���
	TFutureFtdcSessionIDType	SessionID;
	///��������
	TFutureFtdcOrderRefType	OrderRef;
};

///���뱨������
struct CFutureFtdcInputOrderActionField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///������������
	TFutureFtdcOrderActionRefType	OrderActionRef;
	///��������
	TFutureFtdcOrderRefType	OrderRef;
	///������
	TFutureFtdcRequestIDType	RequestID;
	///��������
	TFutureFtdcDirectionType	Direction;
	///ǰ�ñ��
	TFutureFtdcFrontIDType	FrontID;
	///�Ự���
	TFutureFtdcSessionIDType	SessionID;
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///�������
	TFutureFtdcOrderSysIDType	OrderSysID;
	///������־
	TFutureFtdcActionFlagType	ActionFlag;
	///�۸�
	TFutureFtdcPriceType	LimitPrice;
	///�����仯
	TFutureFtdcVolumeType	VolumeChange;
	///�û�����
	TFutureFtdcUserIDType	UserID;
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
};

///��������
struct CFutureFtdcOrderActionField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///������������
	TFutureFtdcOrderActionRefType	OrderActionRef;
	///��������
	TFutureFtdcOrderRefType	OrderRef;
	///������
	TFutureFtdcRequestIDType	RequestID;
	///��������
	TFutureFtdcDirectionType	Direction;
	///ǰ�ñ��
	TFutureFtdcFrontIDType	FrontID;
	///�Ự���
	TFutureFtdcSessionIDType	SessionID;
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///�������
	TFutureFtdcOrderSysIDType	OrderSysID;
	///������־
	TFutureFtdcActionFlagType	ActionFlag;
	///�۸�
	TFutureFtdcPriceType	LimitPrice;
	///�����仯
	TFutureFtdcVolumeType	VolumeChange;
	///��������
	TFutureFtdcDateType	ActionDate;
	///����ʱ��
	TFutureFtdcTimeType	ActionTime;
	///����������Ա����
	TFutureFtdcTraderIDType	TraderID;
	///��װ���
	TFutureFtdcInstallIDType	InstallID;
	///���ر������
	TFutureFtdcOrderLocalIDType	OrderLocalID;
	///�������ر��
	TFutureFtdcOrderLocalIDType	ActionLocalID;
	///��Ա����
	TFutureFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TFutureFtdcClientIDType	ClientID;
	///ҵ��Ԫ
	TFutureFtdcBusinessUnitType	BusinessUnit;
	///��������״̬
	TFutureFtdcOrderActionStatusType	OrderActionStatus;
	///�û�����
	TFutureFtdcUserIDType	UserID;
	///״̬��Ϣ
	TFutureFtdcErrorMsgType	StatusMsg;
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
};

///��������������
struct CFutureFtdcExchangeOrderActionField
{
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///�������
	TFutureFtdcOrderSysIDType	OrderSysID;
	///������־
	TFutureFtdcActionFlagType	ActionFlag;
	///�۸�
	TFutureFtdcPriceType	LimitPrice;
	///�����仯
	TFutureFtdcVolumeType	VolumeChange;
	///��������
	TFutureFtdcDateType	ActionDate;
	///����ʱ��
	TFutureFtdcTimeType	ActionTime;
	///����������Ա����
	TFutureFtdcTraderIDType	TraderID;
	///��װ���
	TFutureFtdcInstallIDType	InstallID;
	///���ر������
	TFutureFtdcOrderLocalIDType	OrderLocalID;
	///�������ر��
	TFutureFtdcOrderLocalIDType	ActionLocalID;
	///��Ա����
	TFutureFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TFutureFtdcClientIDType	ClientID;
	///ҵ��Ԫ
	TFutureFtdcBusinessUnitType	BusinessUnit;
	///��������״̬
	TFutureFtdcOrderActionStatusType	OrderActionStatus;
	///�û�����
	TFutureFtdcUserIDType	UserID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///�Ự���
	TFutureFtdcSessionIDType	SessionID;
	///������������
	TFutureFtdcOrderActionRefType	OrderActionRef;
};

///��������������ʧ��
struct CFutureFtdcExchangeOrderActionErrorField
{
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///�������
	TFutureFtdcOrderSysIDType	OrderSysID;
	///����������Ա����
	TFutureFtdcTraderIDType	TraderID;
	///��װ���
	TFutureFtdcInstallIDType	InstallID;
	///���ر������
	TFutureFtdcOrderLocalIDType	OrderLocalID;
	///�������ر��
	TFutureFtdcOrderLocalIDType	ActionLocalID;
	///�������
	TFutureFtdcErrorIDType	ErrorID;
	///������Ϣ
	TFutureFtdcErrorMsgType	ErrorMsg;
	///�ͻ�����
	TFutureFtdcClientIDType	ClientID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///ҵ��Ԫ
	TFutureFtdcBusinessUnitType	BusinessUnit;
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
};

///�������ɽ�
struct CFutureFtdcExchangeTradeField
{
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///�ɽ����
	TFutureFtdcTradeIDType	TradeID;
	///��������
	TFutureFtdcDirectionType	Direction;
	///�������
	TFutureFtdcOrderSysIDType	OrderSysID;
	///��Ա����
	TFutureFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TFutureFtdcClientIDType	ClientID;
	///���׽�ɫ
	TFutureFtdcTradingRoleType	TradingRole;
	///��Լ�ڽ������Ĵ���
	TFutureFtdcExchangeInstIDType	ExchangeInstID;
	///��ƽ��־
	TFutureFtdcOffsetFlagType	OffsetFlag;
	///Ͷ���ױ���־
	TFutureFtdcHedgeFlagType	HedgeFlag;
	///�۸�
	TFutureFtdcPriceType	Price;
	///����
	TFutureFtdcVolumeType	Volume;
	///�ɽ�ʱ��
	TFutureFtdcDateType	TradeDate;
	///�ɽ�ʱ��
	TFutureFtdcTimeType	TradeTime;
	///�ɽ�����
	TFutureFtdcTradeTypeType	TradeType;
	///�ɽ�����Դ
	TFutureFtdcPriceSourceType	PriceSource;
	///����������Ա����
	TFutureFtdcTraderIDType	TraderID;
	///���ر������
	TFutureFtdcOrderLocalIDType	OrderLocalID;
	///�����Ա���
	TFutureFtdcParticipantIDType	ClearingPartID;
	///ҵ��Ԫ
	TFutureFtdcBusinessUnitType	BusinessUnit;
	///���
	TFutureFtdcSequenceNoType	SequenceNo;
	///�ɽ���Դ
	TFutureFtdcTradeSourceType	TradeSource;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
};

///�ɽ�
struct CFutureFtdcTradeField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
	///��������
	TFutureFtdcOrderRefType	OrderRef;
	///�û�����
	TFutureFtdcUserIDType	UserID;
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///�ɽ����
	TFutureFtdcTradeIDType	TradeID;
	///��������
	TFutureFtdcDirectionType	Direction;
	///�������
	TFutureFtdcOrderSysIDType	OrderSysID;
	///��Ա����
	TFutureFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TFutureFtdcClientIDType	ClientID;
	///���׽�ɫ
	TFutureFtdcTradingRoleType	TradingRole;
	///��Լ�ڽ������Ĵ���
	TFutureFtdcExchangeInstIDType	ExchangeInstID;
	///��ƽ��־
	TFutureFtdcOffsetFlagType	OffsetFlag;
	///Ͷ���ױ���־
	TFutureFtdcHedgeFlagType	HedgeFlag;
	///�۸�
	TFutureFtdcPriceType	Price;
	///����
	TFutureFtdcVolumeType	Volume;
	///�ɽ�ʱ��
	TFutureFtdcDateType	TradeDate;
	///�ɽ�ʱ��
	TFutureFtdcTimeType	TradeTime;
	///�ɽ�����
	TFutureFtdcTradeTypeType	TradeType;
	///�ɽ�����Դ
	TFutureFtdcPriceSourceType	PriceSource;
	///����������Ա����
	TFutureFtdcTraderIDType	TraderID;
	///���ر������
	TFutureFtdcOrderLocalIDType	OrderLocalID;
	///�����Ա���
	TFutureFtdcParticipantIDType	ClearingPartID;
	///ҵ��Ԫ
	TFutureFtdcBusinessUnitType	BusinessUnit;
	///���
	TFutureFtdcSequenceNoType	SequenceNo;
	///������
	TFutureFtdcDateType	TradingDay;
	///������
	TFutureFtdcSettlementIDType	SettlementID;
	///���͹�˾�������
	TFutureFtdcSequenceNoType	BrokerOrderSeq;
	///�ɽ���Դ
	TFutureFtdcTradeSourceType	TradeSource;
};

///�û��Ự
struct CFutureFtdcUserSessionField
{
	///ǰ�ñ��
	TFutureFtdcFrontIDType	FrontID;
	///�Ự���
	TFutureFtdcSessionIDType	SessionID;
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///�û�����
	TFutureFtdcUserIDType	UserID;
	///��¼����
	TFutureFtdcDateType	LoginDate;
	///��¼ʱ��
	TFutureFtdcTimeType	LoginTime;
	///IP��ַ
	TFutureFtdcIPAddressType	IPAddress;
	///�û��˲�Ʒ��Ϣ
	TFutureFtdcProductInfoType	UserProductInfo;
	///�ӿڶ˲�Ʒ��Ϣ
	TFutureFtdcProductInfoType	InterfaceProductInfo;
	///Э����Ϣ
	TFutureFtdcProtocolInfoType	ProtocolInfo;
	///Mac��ַ
	TFutureFtdcMacAddressType	MacAddress;
};

///��ѯ��󱨵�����
struct CFutureFtdcQueryMaxOrderVolumeField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
	///��������
	TFutureFtdcDirectionType	Direction;
	///��ƽ��־
	TFutureFtdcOffsetFlagType	OffsetFlag;
	///Ͷ���ױ���־
	TFutureFtdcHedgeFlagType	HedgeFlag;
	///�������������
	TFutureFtdcVolumeType	MaxVolume;
};

///Ͷ���߽�����ȷ����Ϣ
struct CFutureFtdcSettlementInfoConfirmField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///ȷ������
	TFutureFtdcDateType	ConfirmDate;
	///ȷ��ʱ��
	TFutureFtdcTimeType	ConfirmTime;
};

///�����ͬ��
struct CFutureFtdcSyncDepositField
{
	///�������ˮ��
	TFutureFtdcDepositSeqNoType	DepositSeqNo;
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///�����
	TFutureFtdcMoneyType	Deposit;
	///�Ƿ�ǿ�ƽ���
	TFutureFtdcBoolType	IsForce;
};

///���͹�˾ͬ��
struct CFutureFtdcBrokerSyncField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
};

///����ͬ���е�Ͷ����
struct CFutureFtdcSyncingInvestorField
{
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���߷������
	TFutureFtdcInvestorIDType	InvestorGroupID;
	///Ͷ��������
	TFutureFtdcPartyNameType	InvestorName;
	///֤������
	TFutureFtdcIdCardTypeType	IdentifiedCardType;
	///֤������
	TFutureFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///�Ƿ��Ծ
	TFutureFtdcBoolType	IsActive;
	///��ϵ�绰
	TFutureFtdcTelephoneType	Telephone;
	///ͨѶ��ַ
	TFutureFtdcAddressType	Address;
	///��������
	TFutureFtdcDateType	OpenDate;
	///�ֻ�
	TFutureFtdcMobileType	Mobile;
	///��������ģ�����
	TFutureFtdcInvestorIDType	CommModelID;
	///����ֶ�
	TFutureFtdcPadFieldType	PadField;
	///��֤����ģ�����
	TFutureFtdcInvestorIDType	MarginModelID;
};

///����ͬ���еĽ��״���
struct CFutureFtdcSyncingTradingCodeField
{
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///�ͻ�����
	TFutureFtdcClientIDType	ClientID;
	///�Ƿ��Ծ
	TFutureFtdcBoolType	IsActive;
	///���ױ�������
	TFutureFtdcClientIDTypeType	ClientIDType;
};

///����ͬ���е�Ͷ���߷���
struct CFutureFtdcSyncingInvestorGroupField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���߷������
	TFutureFtdcInvestorIDType	InvestorGroupID;
	///Ͷ���߷�������
	TFutureFtdcInvestorGroupNameType	InvestorGroupName;
};

///����ͬ���еĽ����˺�
struct CFutureFtdcSyncingTradingAccountField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ�����ʺ�
	TFutureFtdcAccountIDType	AccountID;
	///�ϴ���Ѻ���
	TFutureFtdcMoneyType	PreMortgage;
	///�ϴ����ö��
	TFutureFtdcMoneyType	PreCredit;
	///�ϴδ���
	TFutureFtdcMoneyType	PreDeposit;
	///�ϴν���׼����
	TFutureFtdcMoneyType	PreBalance;
	///�ϴ�ռ�õı�֤��
	TFutureFtdcMoneyType	PreMargin;
	///��Ϣ����
	TFutureFtdcMoneyType	InterestBase;
	///��Ϣ����
	TFutureFtdcMoneyType	Interest;
	///�����
	TFutureFtdcMoneyType	Deposit;
	///������
	TFutureFtdcMoneyType	Withdraw;
	///����ı�֤��
	TFutureFtdcMoneyType	FrozenMargin;
	///������ʽ�
	TFutureFtdcMoneyType	FrozenCash;
	///�����������
	TFutureFtdcMoneyType	FrozenCommission;
	///��ǰ��֤���ܶ�
	TFutureFtdcMoneyType	CurrMargin;
	///�ʽ���
	TFutureFtdcMoneyType	CashIn;
	///������
	TFutureFtdcMoneyType	Commission;
	///ƽ��ӯ��
	TFutureFtdcMoneyType	CloseProfit;
	///�ֲ�ӯ��
	TFutureFtdcMoneyType	PositionProfit;
	///�ڻ�����׼����
	TFutureFtdcMoneyType	Balance;
	///�����ʽ�
	TFutureFtdcMoneyType	Available;
	///��ȡ�ʽ�
	TFutureFtdcMoneyType	WithdrawQuota;
	///����׼����
	TFutureFtdcMoneyType	Reserve;
	///������
	TFutureFtdcDateType	TradingDay;
	///������
	TFutureFtdcSettlementIDType	SettlementID;
	///���ö��
	TFutureFtdcMoneyType	Credit;
	///��Ѻ���
	TFutureFtdcMoneyType	Mortgage;
	///��������֤��
	TFutureFtdcMoneyType	ExchangeMargin;
	///Ͷ���߽��֤��
	TFutureFtdcMoneyType	DeliveryMargin;
	///���������֤��
	TFutureFtdcMoneyType	ExchangeDeliveryMargin;
	///�����ڻ�����׼����
	TFutureFtdcMoneyType	ReserveBalance;
	///��Ȩƽ��ӯ��
	TFutureFtdcMoneyType	OptionCloseProfit;
	///�ʻ�����
	TFutureFtdcAccountLevelType	AccountLevel;
};

///����ͬ���е�Ͷ���ֲ߳�
struct CFutureFtdcSyncingInvestorPositionField
{
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///�ֲֶ�շ���
	TFutureFtdcPosiDirectionType	PosiDirection;
	///Ͷ���ױ���־
	TFutureFtdcHedgeFlagType	HedgeFlag;
	///�ֲ�����
	TFutureFtdcPositionDateType	PositionDate;
	///���ճֲ�
	TFutureFtdcVolumeType	YdPosition;
	///���ճֲ�
	TFutureFtdcVolumeType	Position;
	///��ͷ����
	TFutureFtdcVolumeType	LongFrozen;
	///��ͷ����
	TFutureFtdcVolumeType	ShortFrozen;
	///���ֶ�����
	TFutureFtdcMoneyType	LongFrozenAmount;
	///���ֶ�����
	TFutureFtdcMoneyType	ShortFrozenAmount;
	///������
	TFutureFtdcVolumeType	OpenVolume;
	///ƽ����
	TFutureFtdcVolumeType	CloseVolume;
	///���ֽ��
	TFutureFtdcMoneyType	OpenAmount;
	///ƽ�ֽ��
	TFutureFtdcMoneyType	CloseAmount;
	///ƽ��ֽ��
	TFutureFtdcMoneyType	YdCloseAmount;
	///ƽ�������
	TFutureFtdcVolumeType	YdCloseVolume;
	///�ֲֳɱ�
	TFutureFtdcMoneyType	PositionCost;
	///�ϴ�ռ�õı�֤��
	TFutureFtdcMoneyType	PreMargin;
	///ռ�õı�֤��
	TFutureFtdcMoneyType	UseMargin;
	///����ı�֤��
	TFutureFtdcMoneyType	FrozenMargin;
	///������ʽ�
	TFutureFtdcMoneyType	FrozenCash;
	///�����������
	TFutureFtdcMoneyType	FrozenCommission;
	///�ʽ���
	TFutureFtdcMoneyType	CashIn;
	///������
	TFutureFtdcMoneyType	Commission;
	///ƽ��ӯ��
	TFutureFtdcMoneyType	CloseProfit;
	///�ֲ�ӯ��
	TFutureFtdcMoneyType	PositionProfit;
	///�ϴν����
	TFutureFtdcPriceType	PreSettlementPrice;
	///���ν����
	TFutureFtdcPriceType	SettlementPrice;
	///������
	TFutureFtdcDateType	TradingDay;
	///������
	TFutureFtdcSettlementIDType	SettlementID;
	///���ֳɱ�
	TFutureFtdcMoneyType	OpenCost;
	///��������֤��
	TFutureFtdcMoneyType	ExchangeMargin;
	///��ϳɽ��γɵĳֲ�
	TFutureFtdcVolumeType	CombPosition;
	///��϶�ͷ����
	TFutureFtdcVolumeType	CombLongFrozen;
	///��Ͽ�ͷ����
	TFutureFtdcVolumeType	CombShortFrozen;
	///���ն���ƽ��ӯ��
	TFutureFtdcMoneyType	CloseProfitByDate;
	///��ʶԳ�ƽ��ӯ��
	TFutureFtdcMoneyType	CloseProfitByTrade;
	///���ճֲ�
	TFutureFtdcVolumeType	TodayPosition;
	///��֤����
	TFutureFtdcRatioType	MarginRateByMoney;
	///��֤����(������)
	TFutureFtdcRatioType	MarginRateByVolume;
	///ִ�ж���
	TFutureFtdcVolumeType	StrikeFrozen;
	///ִ�ж�����
	TFutureFtdcMoneyType	StrikeFrozenAmount;
	///����ִ�ж���
	TFutureFtdcVolumeType	AbandonFrozen;
};

///����ͬ���еĺ�Լ��֤����
struct CFutureFtdcSyncingInstrumentMarginRateField
{
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
	///Ͷ���߷�Χ
	TFutureFtdcInvestorRangeType	InvestorRange;
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///Ͷ���ױ���־
	TFutureFtdcHedgeFlagType	HedgeFlag;
	///��ͷ��֤����
	TFutureFtdcRatioType	LongMarginRatioByMoney;
	///��ͷ��֤���
	TFutureFtdcMoneyType	LongMarginRatioByVolume;
	///��ͷ��֤����
	TFutureFtdcRatioType	ShortMarginRatioByMoney;
	///��ͷ��֤���
	TFutureFtdcMoneyType	ShortMarginRatioByVolume;
	///�Ƿ���Խ�������ȡ
	TFutureFtdcBoolType	IsRelative;
};

///����ͬ���еĺ�Լ��������
struct CFutureFtdcSyncingInstrumentCommissionRateField
{
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
	///Ͷ���߷�Χ
	TFutureFtdcInvestorRangeType	InvestorRange;
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///Ͷ���ױ���־
	TFutureFtdcHedgeFlagType	HedgeFlag;
	///������������
	TFutureFtdcRatioType	OpenRatioByMoney;
	///����������
	TFutureFtdcRatioType	OpenRatioByVolume;
	///ƽ����������
	TFutureFtdcRatioType	CloseRatioByMoney;
	///ƽ��������
	TFutureFtdcRatioType	CloseRatioByVolume;
	///ƽ����������
	TFutureFtdcRatioType	CloseTodayRatioByMoney;
	///ƽ��������
	TFutureFtdcRatioType	CloseTodayRatioByVolume;
};

///����ͬ���еĺ�Լ����Ȩ��
struct CFutureFtdcSyncingInstrumentTradingRightField
{
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
	///Ͷ���߷�Χ
	TFutureFtdcInvestorRangeType	InvestorRange;
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///����Ȩ��
	TFutureFtdcTradingRightType	TradingRight;
	///���۽���Ȩ��
	TFutureFtdcTradingRightType	QuoteTradingRight;
};

///��ѯ����
struct CFutureFtdcQryOrderField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///�������
	TFutureFtdcOrderSysIDType	OrderSysID;
	///��ʼʱ��
	TFutureFtdcTimeType	InsertTimeStart;
	///����ʱ��
	TFutureFtdcTimeType	InsertTimeEnd;
};

///��ѯ�ɽ�
struct CFutureFtdcQryTradeField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///�ɽ����
	TFutureFtdcTradeIDType	TradeID;
	///��ʼʱ��
	TFutureFtdcTimeType	TradeTimeStart;
	///����ʱ��
	TFutureFtdcTimeType	TradeTimeEnd;
};

///��ѯͶ���ֲ߳�
struct CFutureFtdcQryInvestorPositionField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
};

///��ѯ�ʽ��˻�
struct CFutureFtdcQryTradingAccountField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
};

///��ѯͶ����
struct CFutureFtdcQryInvestorField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
};

///��ѯ���ױ���
struct CFutureFtdcQryTradingCodeField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///�ͻ�����
	TFutureFtdcClientIDType	ClientID;
	///���ױ�������
	TFutureFtdcClientIDTypeType	ClientIDType;
};

///��ѯ���ױ���
struct CFutureFtdcQryInvestorGroupField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
};

///��ѯ���ױ���
struct CFutureFtdcQryInstrumentMarginRateField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///Ͷ���ױ���־
	TFutureFtdcHedgeFlagType	HedgeFlag;
};

///��ѯ���ױ���
struct CFutureFtdcQryInstrumentCommissionRateField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
	///Ͷ���ױ���־
	TFutureFtdcHedgeFlagType	HedgeFlag;
};

///��ѯ���ױ���
struct CFutureFtdcQryInstrumentTradingRightField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
};

///��ѯ���͹�˾
struct CFutureFtdcQryBrokerField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
};

///��ѯ����Ա
struct CFutureFtdcQryTraderField
{
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///��Ա����
	TFutureFtdcParticipantIDType	ParticipantID;
	///����������Ա����
	TFutureFtdcTraderIDType	TraderID;
};

///��ѯ���͹�˾��Ա����
struct CFutureFtdcQryPartBrokerField
{
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///��Ա����
	TFutureFtdcParticipantIDType	ParticipantID;
};

///��ѯ�����û�����Ȩ��
struct CFutureFtdcQrySuperUserFunctionField
{
	///�û�����
	TFutureFtdcUserIDType	UserID;
};

///��ѯ�û��Ự
struct CFutureFtdcQryUserSessionField
{
	///ǰ�ñ��
	TFutureFtdcFrontIDType	FrontID;
	///�Ự���
	TFutureFtdcSessionIDType	SessionID;
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///�û�����
	TFutureFtdcUserIDType	UserID;
};

///��ѯǰ��״̬
struct CFutureFtdcQryFrontStatusField
{
	///ǰ�ñ��
	TFutureFtdcFrontIDType	FrontID;
};

///��ѯ����������
struct CFutureFtdcQryExchangeOrderField
{
	///��Ա����
	TFutureFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TFutureFtdcClientIDType	ClientID;
	///��Լ�ڽ������Ĵ���
	TFutureFtdcExchangeInstIDType	ExchangeInstID;
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///����������Ա����
	TFutureFtdcTraderIDType	TraderID;
};

///��ѯ��������
struct CFutureFtdcQryOrderActionField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
};

///��ѯ��������������
struct CFutureFtdcQryExchangeOrderActionField
{
	///��Ա����
	TFutureFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TFutureFtdcClientIDType	ClientID;
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///����������Ա����
	TFutureFtdcTraderIDType	TraderID;
};

///��ѯ�����û�
struct CFutureFtdcQrySuperUserField
{
	///�û�����
	TFutureFtdcUserIDType	UserID;
};

///��ѯ������
struct CFutureFtdcQryExchangeField
{
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
};

///��ѯ��Ʒ
struct CFutureFtdcQryProductField
{
	///��Ʒ����
	TFutureFtdcInstrumentIDType	ProductID;
	///��Ʒ����
	TFutureFtdcProductClassType	ProductClass;
};

///��ѯ��Լ
struct CFutureFtdcQryInstrumentField
{
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///��Լ�ڽ������Ĵ���
	TFutureFtdcExchangeInstIDType	ExchangeInstID;
	///��Ʒ����
	TFutureFtdcInstrumentIDType	ProductID;
};

///��ѯ����
struct CFutureFtdcQryDepthMarketDataField
{
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
};

///��ѯ���͹�˾�û�
struct CFutureFtdcQryBrokerUserField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///�û�����
	TFutureFtdcUserIDType	UserID;
};

///��ѯ���͹�˾�û�Ȩ��
struct CFutureFtdcQryBrokerUserFunctionField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///�û�����
	TFutureFtdcUserIDType	UserID;
};

///��ѯ����Ա���̻�
struct CFutureFtdcQryTraderOfferField
{
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///��Ա����
	TFutureFtdcParticipantIDType	ParticipantID;
	///����������Ա����
	TFutureFtdcTraderIDType	TraderID;
};

///��ѯ�������ˮ
struct CFutureFtdcQrySyncDepositField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///�������ˮ��
	TFutureFtdcDepositSeqNoType	DepositSeqNo;
};

///��ѯͶ���߽�����
struct CFutureFtdcQrySettlementInfoField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///������
	TFutureFtdcDateType	TradingDay;
};

///��ѯ����
struct CFutureFtdcQryHisOrderField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///�������
	TFutureFtdcOrderSysIDType	OrderSysID;
	///��ʼʱ��
	TFutureFtdcTimeType	InsertTimeStart;
	///����ʱ��
	TFutureFtdcTimeType	InsertTimeEnd;
	///������
	TFutureFtdcDateType	TradingDay;
	///������
	TFutureFtdcSettlementIDType	SettlementID;
};

///��ǰ��Ȩ��Լ��С��֤��
struct CFutureFtdcOptionInstrMiniMarginField
{
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
	///Ͷ���߷�Χ
	TFutureFtdcInvestorRangeType	InvestorRange;
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///��λ���֣���Ȩ��Լ��С��֤��
	TFutureFtdcMoneyType	MinMargin;
	///ȡֵ��ʽ
	TFutureFtdcValueMethodType	ValueMethod;
	///�Ƿ���潻������ȡ
	TFutureFtdcBoolType	IsRelative;
};

///���͹�˾��������Ȩ��֤���㷨
struct CFutureFtdcBrokerExchOptMarginAlgoField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///��ͱ���ϵ��
	TFutureFtdcRatioType	GuaranteeRatio;
	///��ֵ���Żݱ���
	TFutureFtdcRatioType	OutRatio;
};

///��ǰ��Ȩ��Լ��֤�����ϵ��
struct CFutureFtdcOptionInstrMarginAdjustField
{
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
	///Ͷ���߷�Χ
	TFutureFtdcInvestorRangeType	InvestorRange;
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///Ͷ���ױ���־
	TFutureFtdcHedgeFlagType	HedgeFlag;
	///��ͷ��֤�����ϵ��
	TFutureFtdcRatioType	ShortMarginRatioByMoney;
	///��ͷ��֤�����ϵ��
	TFutureFtdcMoneyType	ShortMarginRatioByVolume;
	///�Ƿ���潻������ȡ
	TFutureFtdcBoolType	IsRelative;
};

///��ǰ��Ȩ��Լ�����ѵ���ϸ����
struct CFutureFtdcOptionInstrCommRateField
{
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
	///Ͷ���߷�Χ
	TFutureFtdcInvestorRangeType	InvestorRange;
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///Ͷ���ױ���־
	TFutureFtdcHedgeFlagType	HedgeFlag;
	///������������
	TFutureFtdcRatioType	OpenRatioByMoney;
	///����������
	TFutureFtdcRatioType	OpenRatioByVolume;
	///ƽ����������
	TFutureFtdcRatioType	CloseRatioByMoney;
	///ƽ��������
	TFutureFtdcRatioType	CloseRatioByVolume;
	///ƽ����������
	TFutureFtdcRatioType	CloseTodayRatioByMoney;
	///ƽ��������
	TFutureFtdcRatioType	CloseTodayRatioByVolume;
	///ִ����������
	TFutureFtdcRatioType	StrikeRatioByMoney;
	///ִ��������
	TFutureFtdcMoneyType	StrikeRatioByVolume;
};

///��Ȩ���׳ɱ�
struct CFutureFtdcOptionInstrTradeCostField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
	///Ͷ���ױ���־
	TFutureFtdcHedgeFlagType	HedgeFlag;
	///��Ȩ��Լ��֤��
	TFutureFtdcMoneyType	Margin;
	///��Ȩ��ԼȨ����
	TFutureFtdcMoneyType	Royalty;
};

///��Ȩ���׳ɱ���ѯ
struct CFutureFtdcQryOptionInstrTradeCostField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
	///Ͷ���ױ���־
	TFutureFtdcHedgeFlagType	HedgeFlag;
	///��Ȩ��Լ����
	TFutureFtdcPriceType	InputPrice;
};

///��Ȩ�������ʲ�ѯ
struct CFutureFtdcQryOptionInstrCommRateField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
	///Ͷ���ױ���־
	TFutureFtdcHedgeFlagType	HedgeFlag;
};

///��ָ�ֻ�ָ��
struct CFutureFtdcIndexPriceField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
	///�ֻ����̼�
	TFutureFtdcPriceType	ClosePrice;
};

///�����ִ������
struct CFutureFtdcInputExecOrderField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
	///ִ����������
	TFutureFtdcOrderRefType	ExecOrderRef;
	///�û�����
	TFutureFtdcUserIDType	UserID;
	///��������
	TFutureFtdcOrderRefType	OrderRef;
	///����
	TFutureFtdcVolumeType	Volume;
	///������
	TFutureFtdcRequestIDType	RequestID;
	///ҵ��Ԫ
	TFutureFtdcBusinessUnitType	BusinessUnit;
	///��ƽ��־
	TFutureFtdcOffsetFlagType	OffsetFlag;
	///Ͷ���ױ���־
	TFutureFtdcHedgeFlagType	HedgeFlag;
	///ִ������
	TFutureFtdcActionTypeType	ActionType;
	///����ͷ������ĳֲַ���
	TFutureFtdcPosiDirectionType	PosiDirection;
	///��Ȩ��Ȩ���Ƿ����ڻ�ͷ��ı��
	TFutureFtdcExecOrderPositionFlagType	ReservePositionFlag;
	///��Ȩ��Ȩ�����ɵ�ͷ���Ƿ��Զ�ƽ��
	TFutureFtdcExecOrderCloseFlagType	CloseFlag;
};

///����ִ���������
struct CFutureFtdcInputExecOrderActionField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///ִ�������������
	TFutureFtdcOrderActionRefType	ExecOrderActionRef;
	///ִ����������
	TFutureFtdcOrderRefType	ExecOrderRef;
	///������
	TFutureFtdcRequestIDType	RequestID;
	///ǰ�ñ��
	TFutureFtdcFrontIDType	FrontID;
	///�Ự���
	TFutureFtdcSessionIDType	SessionID;
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///ִ������������
	TFutureFtdcExecOrderSysIDType	ExecOrderSysID;
	///������־
	TFutureFtdcActionFlagType	ActionFlag;
	///�û�����
	TFutureFtdcUserIDType	UserID;
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
};

///ִ������
struct CFutureFtdcExecOrderField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
	///ִ����������
	TFutureFtdcOrderRefType	ExecOrderRef;
	///�û�����
	TFutureFtdcUserIDType	UserID;
	///��������
	TFutureFtdcOrderRefType	OrderRef;
	///����
	TFutureFtdcVolumeType	Volume;
	///������
	TFutureFtdcRequestIDType	RequestID;
	///ҵ��Ԫ
	TFutureFtdcBusinessUnitType	BusinessUnit;
	///��ƽ��־
	TFutureFtdcOffsetFlagType	OffsetFlag;
	///Ͷ���ױ���־
	TFutureFtdcHedgeFlagType	HedgeFlag;
	///ִ������
	TFutureFtdcActionTypeType	ActionType;
	///����ͷ������ĳֲַ���
	TFutureFtdcPosiDirectionType	PosiDirection;
	///��Ȩ��Ȩ���Ƿ����ڻ�ͷ��ı��
	TFutureFtdcExecOrderPositionFlagType	ReservePositionFlag;
	///��Ȩ��Ȩ�����ɵ�ͷ���Ƿ��Զ�ƽ��
	TFutureFtdcExecOrderCloseFlagType	CloseFlag;
	///����ִ��������
	TFutureFtdcOrderLocalIDType	ExecOrderLocalID;
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///��Ա����
	TFutureFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TFutureFtdcClientIDType	ClientID;
	///��Լ�ڽ������Ĵ���
	TFutureFtdcExchangeInstIDType	ExchangeInstID;
	///����������Ա����
	TFutureFtdcTraderIDType	TraderID;
	///��װ���
	TFutureFtdcInstallIDType	InstallID;
	///ִ�������ύ״̬
	TFutureFtdcOrderSubmitStatusType	OrderSubmitStatus;
	///������ʾ���
	TFutureFtdcSequenceNoType	NotifySequence;
	///������
	TFutureFtdcDateType	TradingDay;
	///������
	TFutureFtdcSettlementIDType	SettlementID;
	///ִ��������
	TFutureFtdcExecOrderSysIDType	ExecOrderSysID;
	///��������
	TFutureFtdcDateType	InsertDate;
	///����ʱ��
	TFutureFtdcTimeType	InsertTime;
	///����ʱ��
	TFutureFtdcTimeType	CancelTime;
	///ִ�н��
	TFutureFtdcExecResultType	ExecResult;
	///�����Ա���
	TFutureFtdcParticipantIDType	ClearingPartID;
	///���
	TFutureFtdcSequenceNoType	SequenceNo;
	///ǰ�ñ��
	TFutureFtdcFrontIDType	FrontID;
	///�Ự���
	TFutureFtdcSessionIDType	SessionID;
	///�û��˲�Ʒ��Ϣ
	TFutureFtdcProductInfoType	UserProductInfo;
	///״̬��Ϣ
	TFutureFtdcErrorMsgType	StatusMsg;
	///�����û�����
	TFutureFtdcUserIDType	ActiveUserID;
	///���͹�˾�������
	TFutureFtdcSequenceNoType	BrokerExecOrderSeq;
	///���ױ�������
	TFutureFtdcClientIDTypeType	ClientIDType;
};

///ִ���������
struct CFutureFtdcExecOrderActionField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///ִ�������������
	TFutureFtdcOrderActionRefType	ExecOrderActionRef;
	///ִ����������
	TFutureFtdcOrderRefType	ExecOrderRef;
	///������
	TFutureFtdcRequestIDType	RequestID;
	///ǰ�ñ��
	TFutureFtdcFrontIDType	FrontID;
	///�Ự���
	TFutureFtdcSessionIDType	SessionID;
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///ִ������������
	TFutureFtdcExecOrderSysIDType	ExecOrderSysID;
	///������־
	TFutureFtdcActionFlagType	ActionFlag;
	///��������
	TFutureFtdcDateType	ActionDate;
	///����ʱ��
	TFutureFtdcTimeType	ActionTime;
	///����������Ա����
	TFutureFtdcTraderIDType	TraderID;
	///��װ���
	TFutureFtdcInstallIDType	InstallID;
	///����ִ��������
	TFutureFtdcOrderLocalIDType	ExecOrderLocalID;
	///�������ر��
	TFutureFtdcOrderLocalIDType	ActionLocalID;
	///��Ա����
	TFutureFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TFutureFtdcClientIDType	ClientID;
	///ҵ��Ԫ
	TFutureFtdcBusinessUnitType	BusinessUnit;
	///��������״̬
	TFutureFtdcOrderActionStatusType	OrderActionStatus;
	///�û�����
	TFutureFtdcUserIDType	UserID;
	///״̬��Ϣ
	TFutureFtdcErrorMsgType	StatusMsg;
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
};

///ִ�������ѯ
struct CFutureFtdcQryExecOrderField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///ִ��������
	TFutureFtdcExecOrderSysIDType	ExecOrderSysID;
	///��ʼʱ��
	TFutureFtdcTimeType	InsertTimeStart;
	///����ʱ��
	TFutureFtdcTimeType	InsertTimeEnd;
};

///������ִ��������Ϣ
struct CFutureFtdcExchangeExecOrderField
{
	///����
	TFutureFtdcVolumeType	Volume;
	///������
	TFutureFtdcRequestIDType	RequestID;
	///ҵ��Ԫ
	TFutureFtdcBusinessUnitType	BusinessUnit;
	///��ƽ��־
	TFutureFtdcOffsetFlagType	OffsetFlag;
	///Ͷ���ױ���־
	TFutureFtdcHedgeFlagType	HedgeFlag;
	///ִ������
	TFutureFtdcActionTypeType	ActionType;
	///����ͷ������ĳֲַ���
	TFutureFtdcPosiDirectionType	PosiDirection;
	///��Ȩ��Ȩ���Ƿ����ڻ�ͷ��ı��
	TFutureFtdcExecOrderPositionFlagType	ReservePositionFlag;
	///��Ȩ��Ȩ�����ɵ�ͷ���Ƿ��Զ�ƽ��
	TFutureFtdcExecOrderCloseFlagType	CloseFlag;
	///����ִ��������
	TFutureFtdcOrderLocalIDType	ExecOrderLocalID;
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///��Ա����
	TFutureFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TFutureFtdcClientIDType	ClientID;
	///��Լ�ڽ������Ĵ���
	TFutureFtdcExchangeInstIDType	ExchangeInstID;
	///����������Ա����
	TFutureFtdcTraderIDType	TraderID;
	///��װ���
	TFutureFtdcInstallIDType	InstallID;
	///ִ�������ύ״̬
	TFutureFtdcOrderSubmitStatusType	OrderSubmitStatus;
	///������ʾ���
	TFutureFtdcSequenceNoType	NotifySequence;
	///������
	TFutureFtdcDateType	TradingDay;
	///������
	TFutureFtdcSettlementIDType	SettlementID;
	///ִ��������
	TFutureFtdcExecOrderSysIDType	ExecOrderSysID;
	///��������
	TFutureFtdcDateType	InsertDate;
	///����ʱ��
	TFutureFtdcTimeType	InsertTime;
	///����ʱ��
	TFutureFtdcTimeType	CancelTime;
	///ִ�н��
	TFutureFtdcExecResultType	ExecResult;
	///�����Ա���
	TFutureFtdcParticipantIDType	ClearingPartID;
	///���
	TFutureFtdcSequenceNoType	SequenceNo;
};

///������ִ�������ѯ
struct CFutureFtdcQryExchangeExecOrderField
{
	///��Ա����
	TFutureFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TFutureFtdcClientIDType	ClientID;
	///��Լ�ڽ������Ĵ���
	TFutureFtdcExchangeInstIDType	ExchangeInstID;
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///����������Ա����
	TFutureFtdcTraderIDType	TraderID;
};

///ִ�����������ѯ
struct CFutureFtdcQryExecOrderActionField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
};

///������ִ���������
struct CFutureFtdcExchangeExecOrderActionField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///ִ������������
	TFutureFtdcExecOrderSysIDType	ExecOrderSysID;
	///������־
	TFutureFtdcActionFlagType	ActionFlag;
	///��������
	TFutureFtdcDateType	ActionDate;
	///����ʱ��
	TFutureFtdcTimeType	ActionTime;
	///����������Ա����
	TFutureFtdcTraderIDType	TraderID;
	///��װ���
	TFutureFtdcInstallIDType	InstallID;
	///����ִ��������
	TFutureFtdcOrderLocalIDType	ExecOrderLocalID;
	///�������ر��
	TFutureFtdcOrderLocalIDType	ActionLocalID;
	///��Ա����
	TFutureFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TFutureFtdcClientIDType	ClientID;
	///ҵ��Ԫ
	TFutureFtdcBusinessUnitType	BusinessUnit;
	///��������״̬
	TFutureFtdcOrderActionStatusType	OrderActionStatus;
	///�û�����
	TFutureFtdcUserIDType	UserID;
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
};

///������ִ�����������ѯ
struct CFutureFtdcQryExchangeExecOrderActionField
{
	///��Ա����
	TFutureFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TFutureFtdcClientIDType	ClientID;
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///����������Ա����
	TFutureFtdcTraderIDType	TraderID;
};

///����ִ������
struct CFutureFtdcErrExecOrderField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
	///ִ����������
	TFutureFtdcOrderRefType	ExecOrderRef;
	///�û�����
	TFutureFtdcUserIDType	UserID;
	///��������
	TFutureFtdcOrderRefType	OrderRef;
	///����
	TFutureFtdcVolumeType	Volume;
	///������
	TFutureFtdcRequestIDType	RequestID;
	///ҵ��Ԫ
	TFutureFtdcBusinessUnitType	BusinessUnit;
	///��ƽ��־
	TFutureFtdcOffsetFlagType	OffsetFlag;
	///Ͷ���ױ���־
	TFutureFtdcHedgeFlagType	HedgeFlag;
	///ִ������
	TFutureFtdcActionTypeType	ActionType;
	///����ͷ������ĳֲַ���
	TFutureFtdcPosiDirectionType	PosiDirection;
	///��Ȩ��Ȩ���Ƿ����ڻ�ͷ��ı��
	TFutureFtdcExecOrderPositionFlagType	ReservePositionFlag;
	///��Ȩ��Ȩ�����ɵ�ͷ���Ƿ��Զ�ƽ��
	TFutureFtdcExecOrderCloseFlagType	CloseFlag;
	///�������
	TFutureFtdcErrorIDType	ErrorID;
	///������Ϣ
	TFutureFtdcErrorMsgType	ErrorMsg;
};

///��ѯ����ִ������
struct CFutureFtdcQryErrExecOrderField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
};

///����ִ���������
struct CFutureFtdcErrExecOrderActionField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///ִ�������������
	TFutureFtdcOrderActionRefType	ExecOrderActionRef;
	///ִ����������
	TFutureFtdcOrderRefType	ExecOrderRef;
	///������
	TFutureFtdcRequestIDType	RequestID;
	///ǰ�ñ��
	TFutureFtdcFrontIDType	FrontID;
	///�Ự���
	TFutureFtdcSessionIDType	SessionID;
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///ִ������������
	TFutureFtdcExecOrderSysIDType	ExecOrderSysID;
	///������־
	TFutureFtdcActionFlagType	ActionFlag;
	///�û�����
	TFutureFtdcUserIDType	UserID;
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
	///�������
	TFutureFtdcErrorIDType	ErrorID;
	///������Ϣ
	TFutureFtdcErrorMsgType	ErrorMsg;
};

///��ѯ����ִ���������
struct CFutureFtdcQryErrExecOrderActionField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
};

///��������
struct CFutureFtdcInputQuoteField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
	///��������
	TFutureFtdcOrderRefType	OrderRef;
	///�û�����
	TFutureFtdcUserIDType	UserID;
	///������
	TFutureFtdcVolumeType	BidVolumeTotalOriginal;
	///�۸�
	TFutureFtdcPriceType	BidPrice;
	///����Ͽ�ƽ��־
	TFutureFtdcCombOffsetFlagType	BidCombOffsetFlag;
	///�����Ͷ���ױ���־
	TFutureFtdcCombHedgeFlagType	BidCombHedgeFlag;
	///��������
	TFutureFtdcVolumeType	AskVolumeTotalOriginal;
	///�۸�
	TFutureFtdcPriceType	AskPrice;
	///������Ͽ�ƽ��־
	TFutureFtdcCombOffsetFlagType	AskCombOffsetFlag;
	///�������Ͷ���ױ���־
	TFutureFtdcCombHedgeFlagType	AskCombHedgeFlag;
	///ҵ��Ԫ
	TFutureFtdcBusinessUnitType	BusinessUnit;
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
};

///���۲�������
struct CFutureFtdcInputQuoteActionField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///������������
	TFutureFtdcOrderActionRefType	QuoteActionRef;
	///��������
	TFutureFtdcOrderRefType	QuoteRef;
	///������
	TFutureFtdcRequestIDType	RequestID;
	///ǰ�ñ��
	TFutureFtdcFrontIDType	FrontID;
	///�Ự���
	TFutureFtdcSessionIDType	SessionID;
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///�������
	TFutureFtdcOrderSysIDType	QuoteSysID;
	///������־
	TFutureFtdcActionFlagType	ActionFlag;
	///�û�����
	TFutureFtdcUserIDType	UserID;
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
};

///��ѯ����
struct CFutureFtdcQryQuoteField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///���۱��
	TFutureFtdcOrderSysIDType	QuoteSysID;
	///��ʼʱ��
	TFutureFtdcTimeType	InsertTimeStart;
	///����ʱ��
	TFutureFtdcTimeType	InsertTimeEnd;
};

///����
struct CFutureFtdcQuoteField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
	///��������
	TFutureFtdcOrderRefType	OrderRef;
	///�û�����
	TFutureFtdcUserIDType	UserID;
	///������
	TFutureFtdcVolumeType	BidVolumeTotalOriginal;
	///�۸�
	TFutureFtdcPriceType	BidPrice;
	///����Ͽ�ƽ��־
	TFutureFtdcCombOffsetFlagType	BidCombOffsetFlag;
	///�����Ͷ���ױ���־
	TFutureFtdcCombHedgeFlagType	BidCombHedgeFlag;
	///��������
	TFutureFtdcVolumeType	AskVolumeTotalOriginal;
	///�۸�
	TFutureFtdcPriceType	AskPrice;
	///������Ͽ�ƽ��־
	TFutureFtdcCombOffsetFlagType	AskCombOffsetFlag;
	///�������Ͷ���ױ���־
	TFutureFtdcCombHedgeFlagType	AskCombHedgeFlag;
	///ҵ��Ԫ
	TFutureFtdcBusinessUnitType	BusinessUnit;
	///���ر������
	TFutureFtdcOrderLocalIDType	OrderLocalID;
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///��Ա����
	TFutureFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TFutureFtdcClientIDType	ClientID;
	///��Լ�ڽ������Ĵ���
	TFutureFtdcExchangeInstIDType	ExchangeInstID;
	///����������Ա����
	TFutureFtdcTraderIDType	TraderID;
	///��װ���
	TFutureFtdcInstallIDType	InstallID;
	///�����ύ״̬
	TFutureFtdcOrderSubmitStatusType	OrderSubmitStatus;
	///������ʾ���
	TFutureFtdcSequenceNoType	NotifySequence;
	///������
	TFutureFtdcDateType	TradingDay;
	///������
	TFutureFtdcSettlementIDType	SettlementID;
	///�������
	TFutureFtdcOrderSysIDType	QuoteSysID;
	///�򷽱������
	TFutureFtdcOrderSysIDType	BidOrderSysID;
	///�����������
	TFutureFtdcOrderSysIDType	AskOrderSysID;
	///����״̬
	TFutureFtdcOrderStatusType	QuoteStatus;
	///��ʣ������
	TFutureFtdcVolumeType	BidVolumeTotal;
	///����ʣ������
	TFutureFtdcVolumeType	AskVolumeTotal;
	///�򷽳ɽ�����
	TFutureFtdcVolumeType	BidVolumeTraded;
	///�����ɽ�����
	TFutureFtdcVolumeType	AskVolumeTraded;
	///��������
	TFutureFtdcDateType	InsertDate;
	///ί��ʱ��
	TFutureFtdcTimeType	InsertTime;
	///����ʱ��
	TFutureFtdcTimeType	ActiveTime;
	///����ʱ��
	TFutureFtdcTimeType	SuspendTime;
	///����޸�ʱ��
	TFutureFtdcTimeType	UpdateTime;
	///����ʱ��
	TFutureFtdcTimeType	CancelTime;
	///����޸Ľ���������Ա����
	TFutureFtdcTraderIDType	ActiveTraderID;
	///�����Ա���
	TFutureFtdcParticipantIDType	ClearingPartID;
	///���
	TFutureFtdcSequenceNoType	SequenceNo;
	///ǰ�ñ��
	TFutureFtdcFrontIDType	FrontID;
	///�Ự���
	TFutureFtdcSessionIDType	SessionID;
	///�û��˲�Ʒ��Ϣ
	TFutureFtdcProductInfoType	UserProductInfo;
	///״̬��Ϣ
	TFutureFtdcErrorMsgType	StatusMsg;
	///�����û�����
	TFutureFtdcUserIDType	ActiveUserID;
	///���͹�˾�������
	TFutureFtdcSequenceNoType	BrokerOrderSeq;
	///���ױ�������
	TFutureFtdcClientIDTypeType	ClientIDType;
};

///�ʽ���ת
struct CFutureFtdcInternalTransferField
{
	///�������ˮ��
	TFutureFtdcDepositSeqNoType	DepositSeqNo;
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///ת��Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///ת��Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InInvestorID;
	///��ת���
	TFutureFtdcMoneyType	Deposit;
	///�Ƿ�ǿ�ƽ���
	TFutureFtdcBoolType	IsForce;
};

///����
struct CFutureFtdcQuoteActionField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///������������
	TFutureFtdcOrderActionRefType	QuoteActionRef;
	///��������
	TFutureFtdcOrderRefType	QuoteRef;
	///������
	TFutureFtdcRequestIDType	RequestID;
	///ǰ�ñ��
	TFutureFtdcFrontIDType	FrontID;
	///�Ự���
	TFutureFtdcSessionIDType	SessionID;
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///�������
	TFutureFtdcOrderSysIDType	QuoteSysID;
	///������־
	TFutureFtdcActionFlagType	ActionFlag;
	///��������
	TFutureFtdcDateType	ActionDate;
	///����ʱ��
	TFutureFtdcTimeType	ActionTime;
	///����������Ա����
	TFutureFtdcTraderIDType	TraderID;
	///��װ���
	TFutureFtdcInstallIDType	InstallID;
	///���ر��۱��
	TFutureFtdcOrderLocalIDType	QuoteLocalID;
	///�������ر��
	TFutureFtdcOrderLocalIDType	ActionLocalID;
	///��Ա����
	TFutureFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TFutureFtdcClientIDType	ClientID;
	///ҵ��Ԫ
	TFutureFtdcBusinessUnitType	BusinessUnit;
	///��������״̬
	TFutureFtdcOrderActionStatusType	OrderActionStatus;
	///�û�����
	TFutureFtdcUserIDType	UserID;
	///״̬��Ϣ
	TFutureFtdcErrorMsgType	StatusMsg;
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
};

///����
struct CFutureFtdcQryQuoteActionField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
};

///Ͷ���߲�Ʒ�鱣֤��
struct CFutureFtdcInvestorProductGroupMarginField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///Ʒ��/��Ʒ�ֱ�ʾ
	TFutureFtdcInstrumentIDType	ProductGroupID;
	///������
	TFutureFtdcDateType	TradingDay;
	///������
	TFutureFtdcSettlementIDType	SettlementID;
	///����ı�֤��
	TFutureFtdcMoneyType	FrozenMargin;
	///��ͷ����ı�֤��
	TFutureFtdcMoneyType	LongFrozenMargin;
	///��ͷ����ı�֤��
	TFutureFtdcMoneyType	ShortFrozenMargin;
	///ռ�õı�֤��
	TFutureFtdcMoneyType	UseMargin;
	///��ͷ��֤��
	TFutureFtdcMoneyType	LongUseMargin;
	///��ͷ��֤��
	TFutureFtdcMoneyType	ShortUseMargin;
	///��������֤��
	TFutureFtdcMoneyType	ExchMargin;
	///��������ͷ��֤��
	TFutureFtdcMoneyType	LongExchMargin;
	///��������ͷ��֤��
	TFutureFtdcMoneyType	ShortExchMargin;
	///ƽ��ӯ��
	TFutureFtdcMoneyType	CloseProfit;
	///�����������
	TFutureFtdcMoneyType	FrozenCommission;
	///������
	TFutureFtdcMoneyType	Commission;
	///������ʽ�
	TFutureFtdcMoneyType	FrozenCash;
	///�ʽ���
	TFutureFtdcMoneyType	CashIn;
	///�ֲ�ӯ��
	TFutureFtdcMoneyType	PositionProfit;
	///�۵��ܽ��
	TFutureFtdcMoneyType	OffsetAmount;
	///��ͷ�۵��ܽ��
	TFutureFtdcMoneyType	LongOffsetAmount;
	///��ͷ�۵��ܽ��
	TFutureFtdcMoneyType	ShortOffsetAmount;
	///�������۵��ܽ��
	TFutureFtdcMoneyType	ExchOffsetAmount;
	///��������ͷ�۵��ܽ��
	TFutureFtdcMoneyType	LongExchOffsetAmount;
	///��������ͷ�۵��ܽ��
	TFutureFtdcMoneyType	ShortExchOffsetAmount;
	///Ͷ���ױ���־
	TFutureFtdcHedgeFlagType	HedgeFlag;
};

///Ͷ���߲�Ʒ�鱣֤��
struct CFutureFtdcQryInvestorProductGroupMarginField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///Ʒ��/��Ʒ�ֱ�ʾ
	TFutureFtdcInstrumentIDType	ProductGroupID;
	///Ͷ���ױ���־
	TFutureFtdcHedgeFlagType	HedgeFlag;
};

///�г�����
struct CFutureFtdcMarketDataField
{
	///������
	TFutureFtdcDateType	TradingDay;
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///��Լ�ڽ������Ĵ���
	TFutureFtdcExchangeInstIDType	ExchangeInstID;
	///���¼�
	TFutureFtdcPriceType	LastPrice;
	///�ϴν����
	TFutureFtdcPriceType	PreSettlementPrice;
	///������
	TFutureFtdcPriceType	PreClosePrice;
	///��ֲ���
	TFutureFtdcLargeVolumeType	PreOpenInterest;
	///����
	TFutureFtdcPriceType	OpenPrice;
	///��߼�
	TFutureFtdcPriceType	HighestPrice;
	///��ͼ�
	TFutureFtdcPriceType	LowestPrice;
	///����
	TFutureFtdcVolumeType	Volume;
	///�ɽ����
	TFutureFtdcMoneyType	Turnover;
	///�ֲ���
	TFutureFtdcLargeVolumeType	OpenInterest;
	///������
	TFutureFtdcPriceType	ClosePrice;
	///���ν����
	TFutureFtdcPriceType	SettlementPrice;
	///��ͣ���
	TFutureFtdcPriceType	UpperLimitPrice;
	///��ͣ���
	TFutureFtdcPriceType	LowerLimitPrice;
	///����ʵ��
	TFutureFtdcRatioType	PreDelta;
	///����ʵ��
	TFutureFtdcRatioType	CurrDelta;
	///����޸�ʱ��
	TFutureFtdcTimeType	UpdateTime;
	///����޸ĺ���
	TFutureFtdcMillisecType	UpdateMillisec;
	///ҵ������
	TFutureFtdcDateType	ActionDay;
};

///�����������
struct CFutureFtdcMarketDataBaseField
{
	///������
	TFutureFtdcDateType	TradingDay;
	///�ϴν����
	TFutureFtdcPriceType	PreSettlementPrice;
	///������
	TFutureFtdcPriceType	PreClosePrice;
	///��ֲ���
	TFutureFtdcLargeVolumeType	PreOpenInterest;
	///����ʵ��
	TFutureFtdcRatioType	PreDelta;
};

///���龲̬����
struct CFutureFtdcMarketDataStaticField
{
	///����
	TFutureFtdcPriceType	OpenPrice;
	///��߼�
	TFutureFtdcPriceType	HighestPrice;
	///��ͼ�
	TFutureFtdcPriceType	LowestPrice;
	///������
	TFutureFtdcPriceType	ClosePrice;
	///��ͣ���
	TFutureFtdcPriceType	UpperLimitPrice;
	///��ͣ���
	TFutureFtdcPriceType	LowerLimitPrice;
	///���ν����
	TFutureFtdcPriceType	SettlementPrice;
	///����ʵ��
	TFutureFtdcRatioType	CurrDelta;
};

///�������³ɽ�����
struct CFutureFtdcMarketDataLastMatchField
{
	///���¼�
	TFutureFtdcPriceType	LastPrice;
	///����
	TFutureFtdcVolumeType	Volume;
	///�ɽ����
	TFutureFtdcMoneyType	Turnover;
	///�ֲ���
	TFutureFtdcLargeVolumeType	OpenInterest;
};

///�������ż�����
struct CFutureFtdcMarketDataBestPriceField
{
	///�����һ
	TFutureFtdcPriceType	BidPrice1;
	///������һ
	TFutureFtdcVolumeType	BidVolume1;
	///������һ
	TFutureFtdcPriceType	AskPrice1;
	///������һ
	TFutureFtdcVolumeType	AskVolume1;
};

///�����������������
struct CFutureFtdcMarketDataBid23Field
{
	///����۶�
	TFutureFtdcPriceType	BidPrice2;
	///��������
	TFutureFtdcVolumeType	BidVolume2;
	///�������
	TFutureFtdcPriceType	BidPrice3;
	///��������
	TFutureFtdcVolumeType	BidVolume3;
};

///������������������
struct CFutureFtdcMarketDataAsk23Field
{
	///�����۶�
	TFutureFtdcPriceType	AskPrice2;
	///��������
	TFutureFtdcVolumeType	AskVolume2;
	///��������
	TFutureFtdcPriceType	AskPrice3;
	///��������
	TFutureFtdcVolumeType	AskVolume3;
};

///���������ġ�������
struct CFutureFtdcMarketDataBid45Field
{
	///�������
	TFutureFtdcPriceType	BidPrice4;
	///��������
	TFutureFtdcVolumeType	BidVolume4;
	///�������
	TFutureFtdcPriceType	BidPrice5;
	///��������
	TFutureFtdcVolumeType	BidVolume5;
};

///���������ġ�������
struct CFutureFtdcMarketDataAsk45Field
{
	///��������
	TFutureFtdcPriceType	AskPrice4;
	///��������
	TFutureFtdcVolumeType	AskVolume4;
	///��������
	TFutureFtdcPriceType	AskPrice5;
	///��������
	TFutureFtdcVolumeType	AskVolume5;
};

///�������ʱ������
struct CFutureFtdcMarketDataUpdateTimeField
{
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
	///����޸�ʱ��
	TFutureFtdcTimeType	UpdateTime;
	///����޸ĺ���
	TFutureFtdcMillisecType	UpdateMillisec;
	///ҵ������
	TFutureFtdcDateType	ActionDay;
};

///���齻������������
struct CFutureFtdcMarketDataExchangeField
{
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
};

///ָ���ĺ�Լ
struct CFutureFtdcSpecificInstrumentField
{
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
};

///��Լ״̬
struct CFutureFtdcInstrumentStatusField
{
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///��Լ�ڽ������Ĵ���
	TFutureFtdcExchangeInstIDType	ExchangeInstID;
	///���������
	TFutureFtdcSettlementGroupIDType	SettlementGroupID;
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
	///��Լ����״̬
	TFutureFtdcInstrumentStatusType	InstrumentStatus;
	///���׽׶α��
	TFutureFtdcTradingSegmentSNType	TradingSegmentSN;
	///���뱾״̬ʱ��
	TFutureFtdcTimeType	EnterTime;
	///���뱾״̬ԭ��
	TFutureFtdcInstStatusEnterReasonType	EnterReason;
};

///��ѯ��Լ״̬
struct CFutureFtdcQryInstrumentStatusField
{
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///��Լ�ڽ������Ĵ���
	TFutureFtdcExchangeInstIDType	ExchangeInstID;
};

///Ͷ�����˻�
struct CFutureFtdcInvestorAccountField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///Ͷ�����ʺ�
	TFutureFtdcAccountIDType	AccountID;
};

///����ӯ���㷨
struct CFutureFtdcPositionProfitAlgorithmField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ�����ʺ�
	TFutureFtdcAccountIDType	AccountID;
	///ӯ���㷨
	TFutureFtdcAlgorithmType	Algorithm;
	///��ע
	TFutureFtdcMemoType	Memo;
};

///��Ա�ʽ��ۿ�
struct CFutureFtdcDiscountField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���߷�Χ
	TFutureFtdcInvestorRangeType	InvestorRange;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///�ʽ��ۿ۱���
	TFutureFtdcRatioType	Discount;
};

///��ѯת������
struct CFutureFtdcQryTransferBankField
{
	///���д���
	TFutureFtdcBankIDType	BankID;
	///���з����Ĵ���
	TFutureFtdcBankBrchIDType	BankBrchID;
};

///ת������
struct CFutureFtdcTransferBankField
{
	///���д���
	TFutureFtdcBankIDType	BankID;
	///���з����Ĵ���
	TFutureFtdcBankBrchIDType	BankBrchID;
	///��������
	TFutureFtdcBankNameType	BankName;
	///�Ƿ��Ծ
	TFutureFtdcBoolType	IsActive;
};

///��ѯͶ���ֲ߳���ϸ
struct CFutureFtdcQryInvestorPositionDetailField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
};

///Ͷ���ֲ߳���ϸ
struct CFutureFtdcInvestorPositionDetailField
{
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///Ͷ���ױ���־
	TFutureFtdcHedgeFlagType	HedgeFlag;
	///����
	TFutureFtdcDirectionType	Direction;
	///��������
	TFutureFtdcDateType	OpenDate;
	///�ɽ����
	TFutureFtdcTradeIDType	TradeID;
	///����
	TFutureFtdcVolumeType	Volume;
	///���ּ�
	TFutureFtdcPriceType	OpenPrice;
	///������
	TFutureFtdcDateType	TradingDay;
	///������
	TFutureFtdcSettlementIDType	SettlementID;
	///�ɽ�����
	TFutureFtdcTradeTypeType	TradeType;
	///��Ϻ�Լ����
	TFutureFtdcInstrumentIDType	CombInstrumentID;
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///���ն���ƽ��ӯ��
	TFutureFtdcMoneyType	CloseProfitByDate;
	///��ʶԳ�ƽ��ӯ��
	TFutureFtdcMoneyType	CloseProfitByTrade;
	///���ն��гֲ�ӯ��
	TFutureFtdcMoneyType	PositionProfitByDate;
	///��ʶԳ�ֲ�ӯ��
	TFutureFtdcMoneyType	PositionProfitByTrade;
	///Ͷ���߱�֤��
	TFutureFtdcMoneyType	Margin;
	///��������֤��
	TFutureFtdcMoneyType	ExchMargin;
	///��֤����
	TFutureFtdcRatioType	MarginRateByMoney;
	///��֤����(������)
	TFutureFtdcRatioType	MarginRateByVolume;
	///������
	TFutureFtdcPriceType	LastSettlementPrice;
	///�����
	TFutureFtdcPriceType	SettlementPrice;
	///ƽ����
	TFutureFtdcVolumeType	CloseVolume;
	///ƽ�ֽ��
	TFutureFtdcMoneyType	CloseAmount;
};

///�ʽ��˻�������
struct CFutureFtdcTradingAccountPasswordField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ�����ʺ�
	TFutureFtdcAccountIDType	AccountID;
	///����
	TFutureFtdcPasswordType	Password;
};

///���������鱨�̻�
struct CFutureFtdcMDTraderOfferField
{
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///����������Ա����
	TFutureFtdcTraderIDType	TraderID;
	///��Ա����
	TFutureFtdcParticipantIDType	ParticipantID;
	///����
	TFutureFtdcPasswordType	Password;
	///��װ���
	TFutureFtdcInstallIDType	InstallID;
	///���ر������
	TFutureFtdcOrderLocalIDType	OrderLocalID;
	///����������Ա����״̬
	TFutureFtdcTraderConnectStatusType	TraderConnectStatus;
	///�����������������
	TFutureFtdcDateType	ConnectRequestDate;
	///�������������ʱ��
	TFutureFtdcTimeType	ConnectRequestTime;
	///�ϴα�������
	TFutureFtdcDateType	LastReportDate;
	///�ϴα���ʱ��
	TFutureFtdcTimeType	LastReportTime;
	///�����������
	TFutureFtdcDateType	ConnectDate;
	///�������ʱ��
	TFutureFtdcTimeType	ConnectTime;
	///��������
	TFutureFtdcDateType	StartDate;
	///����ʱ��
	TFutureFtdcTimeType	StartTime;
	///������
	TFutureFtdcDateType	TradingDay;
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///��ϯλ���ɽ����
	TFutureFtdcTradeIDType	MaxTradeID;
	///��ϯλ��󱨵�����
	TFutureFtdcReturnCodeType	MaxOrderMessageReference;
};

///��ѯ���鱨�̻�
struct CFutureFtdcQryMDTraderOfferField
{
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///��Ա����
	TFutureFtdcParticipantIDType	ParticipantID;
	///����������Ա����
	TFutureFtdcTraderIDType	TraderID;
};

///��ѯ�ͻ�֪ͨ
struct CFutureFtdcQryNoticeField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
};

///�ͻ�֪ͨ
struct CFutureFtdcNoticeField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///��Ϣ����
	TFutureFtdcContentType	Content;
	///���͹�˾֪ͨ�������к�
	TFutureFtdcSequenceLabelType	SequenceLabel;
};

///�û�Ȩ��
struct CFutureFtdcUserRightField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///�û�����
	TFutureFtdcUserIDType	UserID;
	///�ͻ�Ȩ������
	TFutureFtdcUserRightTypeType	UserRightType;
	///�Ƿ��ֹ
	TFutureFtdcBoolType	IsForbidden;
};

///��ѯ������Ϣȷ����
struct CFutureFtdcQrySettlementInfoConfirmField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
};

///װ�ؽ�����Ϣ
struct CFutureFtdcLoadSettlementInfoField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
};

///���͹�˾�����ʽ��㷨��
struct CFutureFtdcBrokerWithdrawAlgorithmField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///�����ʽ��㷨
	TFutureFtdcAlgorithmType	WithdrawAlgorithm;
	///�ʽ�ʹ����
	TFutureFtdcRatioType	UsingRatio;
	///�����Ƿ����ƽ��ӯ��
	TFutureFtdcIncludeCloseProfitType	IncludeCloseProfit;
	///�����޲����޳ɽ��ͻ��Ƿ��ܿ����������
	TFutureFtdcAllWithoutTradeType	AllWithoutTrade;
	///�����Ƿ����ƽ��ӯ��
	TFutureFtdcIncludeCloseProfitType	AvailIncludeCloseProfit;
	///�Ƿ������û��¼�
	TFutureFtdcBoolType	IsBrokerUserEvent;
};

///�ʽ��˻���������
struct CFutureFtdcTradingAccountPasswordUpdateV1Field
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///ԭ���Ŀ���
	TFutureFtdcPasswordType	OldPassword;
	///�µĿ���
	TFutureFtdcPasswordType	NewPassword;
};

///�ʽ��˻���������
struct CFutureFtdcTradingAccountPasswordUpdateField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ�����ʺ�
	TFutureFtdcAccountIDType	AccountID;
	///ԭ���Ŀ���
	TFutureFtdcPasswordType	OldPassword;
	///�µĿ���
	TFutureFtdcPasswordType	NewPassword;
};

///��ѯ��Ϻ�Լ����
struct CFutureFtdcQryCombinationLegField
{
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///��Ϻ�Լ����
	TFutureFtdcInstrumentIDType	CombInstrumentID;
	///���ȱ��
	TFutureFtdcLegIDType	LegID;
	///���Ⱥ�Լ����
	TFutureFtdcInstrumentIDType	LegInstrumentID;
};

///��ѯ��Ϻ�Լ����
struct CFutureFtdcQrySyncStatusField
{
	///������
	TFutureFtdcDateType	TradingDay;
};

///��Ͻ��׺�Լ�ĵ���
struct CFutureFtdcCombinationLegField
{
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///��Ϻ�Լ����
	TFutureFtdcInstrumentIDType	CombInstrumentID;
	///���ȱ��
	TFutureFtdcLegIDType	LegID;
	///���Ⱥ�Լ����
	TFutureFtdcInstrumentIDType	LegInstrumentID;
	///��������
	TFutureFtdcDirectionType	Direction;
	///���ȳ���
	TFutureFtdcLegMultipleType	LegMultiple;
	///��������
	TFutureFtdcImplyLevelType	ImplyLevel;
};

///����ͬ��״̬
struct CFutureFtdcSyncStatusField
{
	///������
	TFutureFtdcDateType	TradingDay;
	///����ͬ��״̬
	TFutureFtdcDataSyncStatusType	DataSyncStatus;
};

///��ѯ��ϵ��
struct CFutureFtdcQryLinkManField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
};

///��ϵ��
struct CFutureFtdcLinkManField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///��ϵ������
	TFutureFtdcPersonTypeType	PersonType;
	///֤������
	TFutureFtdcIdCardTypeType	IdentifiedCardType;
	///֤������
	TFutureFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///����
	TFutureFtdcPartyNameType	PersonName;
	///��ϵ�绰
	TFutureFtdcTelephoneType	Telephone;
	///ͨѶ��ַ
	TFutureFtdcAddressType	Address;
	///��������
	TFutureFtdcZipCodeType	ZipCode;
	///���ȼ�
	TFutureFtdcPriorityType	Priority;
};

///��ѯ���͹�˾�û��¼�
struct CFutureFtdcQryBrokerUserEventField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///�û�����
	TFutureFtdcUserIDType	UserID;
	///�û��¼�����
	TFutureFtdcUserEventTypeType	UserEventType;
};

///��ѯ���͹�˾�û��¼�
struct CFutureFtdcBrokerUserEventField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///�û�����
	TFutureFtdcUserIDType	UserID;
	///�û��¼�����
	TFutureFtdcUserEventTypeType	UserEventType;
	///�û��¼����
	TFutureFtdcSequenceNoType	EventSequenceNo;
	///�¼���������
	TFutureFtdcDateType	EventDate;
	///�¼�����ʱ��
	TFutureFtdcTimeType	EventTime;
	///�û��¼���Ϣ
	TFutureFtdcUserEventInfoType	UserEventInfo;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
};

///��ѯǩԼ��������
struct CFutureFtdcQryContractBankField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///���д���
	TFutureFtdcBankIDType	BankID;
	///���з����Ĵ���
	TFutureFtdcBankBrchIDType	BankBrchID;
};

///��ѯǩԼ������Ӧ
struct CFutureFtdcContractBankField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///���д���
	TFutureFtdcBankIDType	BankID;
	///���з����Ĵ���
	TFutureFtdcBankBrchIDType	BankBrchID;
	///��������
	TFutureFtdcBankNameType	BankName;
};

///Ͷ������ϳֲ���ϸ
struct CFutureFtdcInvestorPositionCombineDetailField
{
	///������
	TFutureFtdcDateType	TradingDay;
	///��������
	TFutureFtdcDateType	OpenDate;
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///������
	TFutureFtdcSettlementIDType	SettlementID;
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///��ϱ��
	TFutureFtdcTradeIDType	ComTradeID;
	///��ϱ��
	TFutureFtdcTradeIDType	TradeID;
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
	///Ͷ���ױ���־
	TFutureFtdcHedgeFlagType	HedgeFlag;
	///����
	TFutureFtdcDirectionType	Direction;
	///�ֲ���
	TFutureFtdcVolumeType	TotalAmt;
	///Ͷ���߱�֤��
	TFutureFtdcMoneyType	Margin;
	///��������֤��
	TFutureFtdcMoneyType	ExchMargin;
	///��֤����
	TFutureFtdcRatioType	MarginRateByMoney;
	///��֤����(������)
	TFutureFtdcRatioType	MarginRateByVolume;
	///���ȱ��
	TFutureFtdcLegIDType	LegID;
	///���ȳ���
	TFutureFtdcLegMultipleType	LegMultiple;
	///��ϳֲֺ�Լ����
	TFutureFtdcInstrumentIDType	CombInstrumentID;
	///�ɽ����
	TFutureFtdcTradeGroupIDType	TradeGroupID;
};

///Ԥ��
struct CFutureFtdcParkedOrderField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
	///��������
	TFutureFtdcOrderRefType	OrderRef;
	///�û�����
	TFutureFtdcUserIDType	UserID;
	///�����۸�����
	TFutureFtdcOrderPriceTypeType	OrderPriceType;
	///��������
	TFutureFtdcDirectionType	Direction;
	///��Ͽ�ƽ��־
	TFutureFtdcCombOffsetFlagType	CombOffsetFlag;
	///���Ͷ���ױ���־
	TFutureFtdcCombHedgeFlagType	CombHedgeFlag;
	///�۸�
	TFutureFtdcPriceType	LimitPrice;
	///����
	TFutureFtdcVolumeType	VolumeTotalOriginal;
	///��Ч������
	TFutureFtdcTimeConditionType	TimeCondition;
	///GTD����
	TFutureFtdcDateType	GTDDate;
	///�ɽ�������
	TFutureFtdcVolumeConditionType	VolumeCondition;
	///��С�ɽ���
	TFutureFtdcVolumeType	MinVolume;
	///��������
	TFutureFtdcContingentConditionType	ContingentCondition;
	///ֹ���
	TFutureFtdcPriceType	StopPrice;
	///ǿƽԭ��
	TFutureFtdcForceCloseReasonType	ForceCloseReason;
	///�Զ������־
	TFutureFtdcBoolType	IsAutoSuspend;
	///ҵ��Ԫ
	TFutureFtdcBusinessUnitType	BusinessUnit;
	///������
	TFutureFtdcRequestIDType	RequestID;
	///�û�ǿ����־
	TFutureFtdcBoolType	UserForceClose;
	///��������־
	TFutureFtdcBoolType	IsSwapOrder;
	///���ر������
	TFutureFtdcOrderLocalIDType	OrderLocalID;
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///Ԥ�񱨵����
	TFutureFtdcParkedOrderIDType	ParkedOrderID;
	///�û�����
	TFutureFtdcUserTypeType	UserType;
	///Ԥ��״̬
	TFutureFtdcParkedOrderStatusType	Status;
	///�������
	TFutureFtdcErrorIDType	ErrorID;
	///������Ϣ
	TFutureFtdcErrorMsgType	ErrorMsg;
};

///����Ԥ�񵥲���
struct CFutureFtdcParkedOrderActionField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///������������
	TFutureFtdcOrderActionRefType	OrderActionRef;
	///��������
	TFutureFtdcOrderRefType	OrderRef;
	///������
	TFutureFtdcRequestIDType	RequestID;
	///��������
	TFutureFtdcDirectionType	Direction;
	///ǰ�ñ��
	TFutureFtdcFrontIDType	FrontID;
	///�Ự���
	TFutureFtdcSessionIDType	SessionID;
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///�������
	TFutureFtdcOrderSysIDType	OrderSysID;
	///������־
	TFutureFtdcActionFlagType	ActionFlag;
	///�۸�
	TFutureFtdcPriceType	LimitPrice;
	///�����仯
	TFutureFtdcVolumeType	VolumeChange;
	///�û�����
	TFutureFtdcUserIDType	UserID;
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
	///Ԥ�񳷵������
	TFutureFtdcParkedOrderActionIDType	ParkedOrderActionID;
	///�û�����
	TFutureFtdcUserTypeType	UserType;
	///Ԥ�񳷵�״̬
	TFutureFtdcParkedOrderStatusType	Status;
	///�������
	TFutureFtdcErrorIDType	ErrorID;
	///������Ϣ
	TFutureFtdcErrorMsgType	ErrorMsg;
};

///��ѯԤ��
struct CFutureFtdcQryParkedOrderField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
};

///��ѯԤ�񳷵�
struct CFutureFtdcQryParkedOrderActionField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
};

///ɾ��Ԥ��
struct CFutureFtdcRemoveParkedOrderField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///Ԥ�񱨵����
	TFutureFtdcParkedOrderIDType	ParkedOrderID;
};

///ɾ��Ԥ�񳷵�
struct CFutureFtdcRemoveParkedOrderActionField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///Ԥ�񳷵����
	TFutureFtdcParkedOrderActionIDType	ParkedOrderActionID;
};

///���͹�˾�����ʽ��㷨��
struct CFutureFtdcInvestorWithdrawAlgorithmField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���߷�Χ
	TFutureFtdcInvestorRangeType	InvestorRange;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///�����ʽ����
	TFutureFtdcRatioType	UsingRatio;
};

///��ѯ��ϳֲ���ϸ
struct CFutureFtdcQryInvestorPositionCombineDetailField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///��ϳֲֺ�Լ����
	TFutureFtdcInstrumentIDType	CombInstrumentID;
};

///�ɽ�����
struct CFutureFtdcMarketDataAveragePriceField
{
	///���վ���
	TFutureFtdcPriceType	AveragePrice;
};

///У��Ͷ��������
struct CFutureFtdcVerifyInvestorPasswordField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///����
	TFutureFtdcPasswordType	Password;
};

///�û�IP
struct CFutureFtdcUserIPField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///�û�����
	TFutureFtdcUserIDType	UserID;
	///IP��ַ
	TFutureFtdcIPAddressType	IPAddress;
	///IP��ַ����
	TFutureFtdcIPAddressType	IPMask;
	///Mac��ַ
	TFutureFtdcMacAddressType	MacAddress;
};

///�û��¼�֪ͨ��Ϣ
struct CFutureFtdcTradingNoticeInfoField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///����ʱ��
	TFutureFtdcTimeType	SendTime;
	///��Ϣ����
	TFutureFtdcContentType	FieldContent;
	///����ϵ�к�
	TFutureFtdcSequenceSeriesType	SequenceSeries;
	///���к�
	TFutureFtdcSequenceNoType	SequenceNo;
};

///�û��¼�֪ͨ
struct CFutureFtdcTradingNoticeField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���߷�Χ
	TFutureFtdcInvestorRangeType	InvestorRange;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///����ϵ�к�
	TFutureFtdcSequenceSeriesType	SequenceSeries;
	///�û�����
	TFutureFtdcUserIDType	UserID;
	///����ʱ��
	TFutureFtdcTimeType	SendTime;
	///���к�
	TFutureFtdcSequenceNoType	SequenceNo;
	///��Ϣ����
	TFutureFtdcContentType	FieldContent;
};

///��ѯ�����¼�֪ͨ
struct CFutureFtdcQryTradingNoticeField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
};

///��ѯ���󱨵�
struct CFutureFtdcQryErrOrderField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
};

///���󱨵�
struct CFutureFtdcErrOrderField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
	///��������
	TFutureFtdcOrderRefType	OrderRef;
	///�û�����
	TFutureFtdcUserIDType	UserID;
	///�����۸�����
	TFutureFtdcOrderPriceTypeType	OrderPriceType;
	///��������
	TFutureFtdcDirectionType	Direction;
	///��Ͽ�ƽ��־
	TFutureFtdcCombOffsetFlagType	CombOffsetFlag;
	///���Ͷ���ױ���־
	TFutureFtdcCombHedgeFlagType	CombHedgeFlag;
	///�۸�
	TFutureFtdcPriceType	LimitPrice;
	///����
	TFutureFtdcVolumeType	VolumeTotalOriginal;
	///��Ч������
	TFutureFtdcTimeConditionType	TimeCondition;
	///GTD����
	TFutureFtdcDateType	GTDDate;
	///�ɽ�������
	TFutureFtdcVolumeConditionType	VolumeCondition;
	///��С�ɽ���
	TFutureFtdcVolumeType	MinVolume;
	///��������
	TFutureFtdcContingentConditionType	ContingentCondition;
	///ֹ���
	TFutureFtdcPriceType	StopPrice;
	///ǿƽԭ��
	TFutureFtdcForceCloseReasonType	ForceCloseReason;
	///�Զ������־
	TFutureFtdcBoolType	IsAutoSuspend;
	///ҵ��Ԫ
	TFutureFtdcBusinessUnitType	BusinessUnit;
	///������
	TFutureFtdcRequestIDType	RequestID;
	///�û�ǿ����־
	TFutureFtdcBoolType	UserForceClose;
	///�������
	TFutureFtdcErrorIDType	ErrorID;
	///������Ϣ
	TFutureFtdcErrorMsgType	ErrorMsg;
	///��������־
	TFutureFtdcBoolType	IsSwapOrder;
	///���ر������
	TFutureFtdcOrderLocalIDType	OrderLocalID;
};

///��ѯ���󱨵�����
struct CFutureFtdcErrorConditionalOrderField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
	///��������
	TFutureFtdcOrderRefType	OrderRef;
	///�û�����
	TFutureFtdcUserIDType	UserID;
	///�����۸�����
	TFutureFtdcOrderPriceTypeType	OrderPriceType;
	///��������
	TFutureFtdcDirectionType	Direction;
	///��Ͽ�ƽ��־
	TFutureFtdcCombOffsetFlagType	CombOffsetFlag;
	///���Ͷ���ױ���־
	TFutureFtdcCombHedgeFlagType	CombHedgeFlag;
	///�۸�
	TFutureFtdcPriceType	LimitPrice;
	///����
	TFutureFtdcVolumeType	VolumeTotalOriginal;
	///��Ч������
	TFutureFtdcTimeConditionType	TimeCondition;
	///GTD����
	TFutureFtdcDateType	GTDDate;
	///�ɽ�������
	TFutureFtdcVolumeConditionType	VolumeCondition;
	///��С�ɽ���
	TFutureFtdcVolumeType	MinVolume;
	///��������
	TFutureFtdcContingentConditionType	ContingentCondition;
	///ֹ���
	TFutureFtdcPriceType	StopPrice;
	///ǿƽԭ��
	TFutureFtdcForceCloseReasonType	ForceCloseReason;
	///�Զ������־
	TFutureFtdcBoolType	IsAutoSuspend;
	///ҵ��Ԫ
	TFutureFtdcBusinessUnitType	BusinessUnit;
	///������
	TFutureFtdcRequestIDType	RequestID;
	///���ر������
	TFutureFtdcOrderLocalIDType	OrderLocalID;
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///��Ա����
	TFutureFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TFutureFtdcClientIDType	ClientID;
	///��Լ�ڽ������Ĵ���
	TFutureFtdcExchangeInstIDType	ExchangeInstID;
	///����������Ա����
	TFutureFtdcTraderIDType	TraderID;
	///��װ���
	TFutureFtdcInstallIDType	InstallID;
	///�����ύ״̬
	TFutureFtdcOrderSubmitStatusType	OrderSubmitStatus;
	///������ʾ���
	TFutureFtdcSequenceNoType	NotifySequence;
	///������
	TFutureFtdcDateType	TradingDay;
	///������
	TFutureFtdcSettlementIDType	SettlementID;
	///�������
	TFutureFtdcOrderSysIDType	OrderSysID;
	///������Դ
	TFutureFtdcOrderSourceType	OrderSource;
	///����״̬
	TFutureFtdcOrderStatusType	OrderStatus;
	///��������
	TFutureFtdcOrderTypeType	OrderType;
	///��ɽ�����
	TFutureFtdcVolumeType	VolumeTraded;
	///ʣ������
	TFutureFtdcVolumeType	VolumeTotal;
	///��������
	TFutureFtdcDateType	InsertDate;
	///ί��ʱ��
	TFutureFtdcTimeType	InsertTime;
	///����ʱ��
	TFutureFtdcTimeType	ActiveTime;
	///����ʱ��
	TFutureFtdcTimeType	SuspendTime;
	///����޸�ʱ��
	TFutureFtdcTimeType	UpdateTime;
	///����ʱ��
	TFutureFtdcTimeType	CancelTime;
	///����޸Ľ���������Ա����
	TFutureFtdcTraderIDType	ActiveTraderID;
	///�����Ա���
	TFutureFtdcParticipantIDType	ClearingPartID;
	///���
	TFutureFtdcSequenceNoType	SequenceNo;
	///ǰ�ñ��
	TFutureFtdcFrontIDType	FrontID;
	///�Ự���
	TFutureFtdcSessionIDType	SessionID;
	///�û��˲�Ʒ��Ϣ
	TFutureFtdcProductInfoType	UserProductInfo;
	///״̬��Ϣ
	TFutureFtdcErrorMsgType	StatusMsg;
	///�û�ǿ����־
	TFutureFtdcBoolType	UserForceClose;
	///�����û�����
	TFutureFtdcUserIDType	ActiveUserID;
	///���͹�˾�������
	TFutureFtdcSequenceNoType	BrokerOrderSeq;
	///��ر���
	TFutureFtdcOrderSysIDType	RelativeOrderSysID;
	///֣�����ɽ�����
	TFutureFtdcVolumeType	ZCETotalTradedVolume;
	///�������
	TFutureFtdcErrorIDType	ErrorID;
	///������Ϣ
	TFutureFtdcErrorMsgType	ErrorMsg;
	///��������־
	TFutureFtdcBoolType	IsSwapOrder;
};

///��ѯ���󱨵�����
struct CFutureFtdcQryErrOrderActionField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
};

///���󱨵�����
struct CFutureFtdcErrOrderActionField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///������������
	TFutureFtdcOrderActionRefType	OrderActionRef;
	///��������
	TFutureFtdcOrderRefType	OrderRef;
	///������
	TFutureFtdcRequestIDType	RequestID;
	///��������
	TFutureFtdcDirectionType	Direction;
	///ǰ�ñ��
	TFutureFtdcFrontIDType	FrontID;
	///�Ự���
	TFutureFtdcSessionIDType	SessionID;
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///�������
	TFutureFtdcOrderSysIDType	OrderSysID;
	///������־
	TFutureFtdcActionFlagType	ActionFlag;
	///�۸�
	TFutureFtdcPriceType	LimitPrice;
	///�����仯
	TFutureFtdcVolumeType	VolumeChange;
	///��������
	TFutureFtdcDateType	ActionDate;
	///����ʱ��
	TFutureFtdcTimeType	ActionTime;
	///����������Ա����
	TFutureFtdcTraderIDType	TraderID;
	///��װ���
	TFutureFtdcInstallIDType	InstallID;
	///���ر������
	TFutureFtdcOrderLocalIDType	OrderLocalID;
	///�������ر��
	TFutureFtdcOrderLocalIDType	ActionLocalID;
	///��Ա����
	TFutureFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TFutureFtdcClientIDType	ClientID;
	///ҵ��Ԫ
	TFutureFtdcBusinessUnitType	BusinessUnit;
	///��������״̬
	TFutureFtdcOrderActionStatusType	OrderActionStatus;
	///�û�����
	TFutureFtdcUserIDType	UserID;
	///״̬��Ϣ
	TFutureFtdcErrorMsgType	StatusMsg;
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
	///�������
	TFutureFtdcErrorIDType	ErrorID;
	///������Ϣ
	TFutureFtdcErrorMsgType	ErrorMsg;
};

///��ѯ������״̬
struct CFutureFtdcQryExchangeSequenceField
{
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
};

///������״̬
struct CFutureFtdcExchangeSequenceField
{
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///���
	TFutureFtdcSequenceNoType	SequenceNo;
	///��Լ����״̬
	TFutureFtdcInstrumentStatusType	MarketStatus;
};

///���ݼ۸��ѯ��󱨵�����
struct CFutureFtdcQueryMaxOrderVolumeWithPriceField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
	///��������
	TFutureFtdcDirectionType	Direction;
	///��ƽ��־
	TFutureFtdcOffsetFlagType	OffsetFlag;
	///Ͷ���ױ���־
	TFutureFtdcHedgeFlagType	HedgeFlag;
	///�������������
	TFutureFtdcVolumeType	MaxVolume;
	///�����۸�
	TFutureFtdcPriceType	Price;
};

///��ѯ���͹�˾���ײ���
struct CFutureFtdcQryBrokerTradingParamsField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
};

///���͹�˾���ײ���
struct CFutureFtdcBrokerTradingParamsField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///��֤��۸�����
	TFutureFtdcMarginPriceTypeType	MarginPriceType;
	///ӯ���㷨
	TFutureFtdcAlgorithmType	Algorithm;
	///�����Ƿ����ƽ��ӯ��
	TFutureFtdcIncludeCloseProfitType	AvailIncludeCloseProfit;
};

///��ѯ���͹�˾�����㷨
struct CFutureFtdcQryBrokerTradingAlgosField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
};

///���͹�˾�����㷨
struct CFutureFtdcBrokerTradingAlgosField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
	///�ֲִ����㷨���
	TFutureFtdcHandlePositionAlgoIDType	HandlePositionAlgoID;
	///Ѱ�ұ�֤�����㷨���
	TFutureFtdcFindMarginRateAlgoIDType	FindMarginRateAlgoID;
	///�ʽ����㷨���
	TFutureFtdcHandleTradingAccountAlgoIDType	HandleTradingAccountAlgoID;
};

///��ѯ���͹�˾�ʽ�
struct CFutureFtdcQueryBrokerDepositField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
};

///���͹�˾�ʽ�
struct CFutureFtdcBrokerDepositField
{
	///��������
	TFutureFtdcTradeDateType	TradingDay;
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///��Ա����
	TFutureFtdcParticipantIDType	ParticipantID;
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///�ϴν���׼����
	TFutureFtdcMoneyType	PreBalance;
	///��ǰ��֤���ܶ�
	TFutureFtdcMoneyType	CurrMargin;
	///ƽ��ӯ��
	TFutureFtdcMoneyType	CloseProfit;
	///�ڻ�����׼����
	TFutureFtdcMoneyType	Balance;
	///�����
	TFutureFtdcMoneyType	Deposit;
	///������
	TFutureFtdcMoneyType	Withdraw;
	///�����ʽ�
	TFutureFtdcMoneyType	Available;
	///����׼����
	TFutureFtdcMoneyType	Reserve;
	///����ı�֤��
	TFutureFtdcMoneyType	FrozenMargin;
};

///��ѯ��֤����ϵͳ���͹�˾��Կ
struct CFutureFtdcQryCFMMCBrokerKeyField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
};

///��֤����ϵͳ���͹�˾��Կ
struct CFutureFtdcCFMMCBrokerKeyField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///���͹�˾ͳһ����
	TFutureFtdcParticipantIDType	ParticipantID;
	///��Կ��������
	TFutureFtdcDateType	CreateDate;
	///��Կ����ʱ��
	TFutureFtdcTimeType	CreateTime;
	///��Կ���
	TFutureFtdcSequenceNoType	KeyID;
	///��̬��Կ
	TFutureFtdcCFMMCKeyType	CurrentKey;
	///��̬��Կ����
	TFutureFtdcCFMMCKeyKindType	KeyKind;
};

///��֤����ϵͳ���͹�˾�ʽ��˻���Կ
struct CFutureFtdcCFMMCTradingAccountKeyField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///���͹�˾ͳһ����
	TFutureFtdcParticipantIDType	ParticipantID;
	///Ͷ�����ʺ�
	TFutureFtdcAccountIDType	AccountID;
	///��Կ���
	TFutureFtdcSequenceNoType	KeyID;
	///��̬��Կ
	TFutureFtdcCFMMCKeyType	CurrentKey;
};

///�����ѯ��֤����ϵͳ���͹�˾�ʽ��˻���Կ
struct CFutureFtdcQryCFMMCTradingAccountKeyField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
};

///�û���̬���Ʋ���
struct CFutureFtdcBrokerUserOTPParamField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///�û�����
	TFutureFtdcUserIDType	UserID;
	///��̬�����ṩ��
	TFutureFtdcOTPVendorsIDType	OTPVendorsID;
	///��̬�������к�
	TFutureFtdcSerialNumberType	SerialNumber;
	///������Կ
	TFutureFtdcAuthKeyType	AuthKey;
	///Ư��ֵ
	TFutureFtdcLastDriftType	LastDrift;
	///�ɹ�ֵ
	TFutureFtdcLastSuccessType	LastSuccess;
	///��̬��������
	TFutureFtdcOTPTypeType	OTPType;
};

///�ֹ�ͬ���û���̬����
struct CFutureFtdcManualSyncBrokerUserOTPField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///�û�����
	TFutureFtdcUserIDType	UserID;
	///��̬��������
	TFutureFtdcOTPTypeType	OTPType;
	///��һ����̬����
	TFutureFtdcPasswordType	FirstOTP;
	///�ڶ�����̬����
	TFutureFtdcPasswordType	SecondOTP;
};

///Ͷ������������ģ��
struct CFutureFtdcCommRateModelField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///��������ģ�����
	TFutureFtdcInvestorIDType	CommModelID;
	///ģ������
	TFutureFtdcCommModelNameType	CommModelName;
};

///�����ѯͶ������������ģ��
struct CFutureFtdcQryCommRateModelField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///��������ģ�����
	TFutureFtdcInvestorIDType	CommModelID;
};

///Ͷ���߱�֤����ģ��
struct CFutureFtdcMarginModelField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///��֤����ģ�����
	TFutureFtdcInvestorIDType	MarginModelID;
	///ģ������
	TFutureFtdcCommModelNameType	MarginModelName;
};

///�ֵ��۵���Ϣ
struct CFutureFtdcEWarrantOffsetField
{
	///��������
	TFutureFtdcTradeDateType	TradingDay;
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
	///��������
	TFutureFtdcDirectionType	Direction;
	///Ͷ���ױ���־
	TFutureFtdcHedgeFlagType	HedgeFlag;
	///����
	TFutureFtdcVolumeType	Volume;
};

///��ѯ�ֵ��۵���Ϣ
struct CFutureFtdcQryEWarrantOffsetField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
};

///ת�ʿ�������
struct CFutureFtdcReqOpenAccountField
{
	///ҵ������
	TFutureFtdcTradeCodeType	TradeCode;
	///���д���
	TFutureFtdcBankIDType	BankID;
	///���з�֧��������
	TFutureFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TFutureFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TFutureFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TFutureFtdcTradeDateType	TradeDate;
	///����ʱ��
	TFutureFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TFutureFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TFutureFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TFutureFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TFutureFtdcLastFragmentType	LastFragment;
	///�Ự��
	TFutureFtdcSessionIDType	SessionID;
	///�ͻ�����
	TFutureFtdcIndividualNameType	CustomerName;
	///֤������
	TFutureFtdcIdCardTypeType	IdCardType;
	///֤������
	TFutureFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///�Ա�
	TFutureFtdcGenderType	Gender;
	///���Ҵ���
	TFutureFtdcCountryCodeType	CountryCode;
	///�ͻ�����
	TFutureFtdcCustTypeType	CustType;
	///��ַ
	TFutureFtdcAddressType	Address;
	///�ʱ�
	TFutureFtdcZipCodeType	ZipCode;
	///�绰����
	TFutureFtdcTelephoneType	Telephone;
	///�ֻ�
	TFutureFtdcMobilePhoneType	MobilePhone;
	///����
	TFutureFtdcFaxType	Fax;
	///�����ʼ�
	TFutureFtdcEMailType	EMail;
	///�ʽ��˻�״̬
	TFutureFtdcMoneyAccountStatusType	MoneyAccountStatus;
	///�����ʺ�
	TFutureFtdcBankAccountType	BankAccount;
	///��������
	TFutureFtdcPasswordType	BankPassWord;
	///Ͷ�����ʺ�
	TFutureFtdcAccountIDType	AccountID;
	///�ڻ�����
	TFutureFtdcPasswordType	Password;
	///��װ���
	TFutureFtdcInstallIDType	InstallID;
	///��֤�ͻ�֤�������־
	TFutureFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///���ִ���
	TFutureFtdcCurrencyIDType	CurrencyID;
	///�㳮��־
	TFutureFtdcCashExchangeCodeType	CashExchangeCode;
	///ժҪ
	TFutureFtdcDigestType	Digest;
	///�����ʺ�����
	TFutureFtdcBankAccTypeType	BankAccType;
	///������־
	TFutureFtdcDeviceIDType	DeviceID;
	///�ڻ���λ�ʺ�����
	TFutureFtdcBankAccTypeType	BankSecuAccType;
	///�ڻ���˾���б���
	TFutureFtdcBankCodingForFutureType	BrokerIDByBank;
	///�ڻ���λ�ʺ�
	TFutureFtdcBankAccountType	BankSecuAcc;
	///���������־
	TFutureFtdcPwdFlagType	BankPwdFlag;
	///�ڻ��ʽ�����˶Ա�־
	TFutureFtdcPwdFlagType	SecuPwdFlag;
	///���׹�Ա
	TFutureFtdcOperNoType	OperNo;
	///����ID
	TFutureFtdcTIDType	TID;
	///�û���ʶ
	TFutureFtdcUserIDType	UserID;
};

///ת����������
struct CFutureFtdcReqCancelAccountField
{
	///ҵ������
	TFutureFtdcTradeCodeType	TradeCode;
	///���д���
	TFutureFtdcBankIDType	BankID;
	///���з�֧��������
	TFutureFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TFutureFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TFutureFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TFutureFtdcTradeDateType	TradeDate;
	///����ʱ��
	TFutureFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TFutureFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TFutureFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TFutureFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TFutureFtdcLastFragmentType	LastFragment;
	///�Ự��
	TFutureFtdcSessionIDType	SessionID;
	///�ͻ�����
	TFutureFtdcIndividualNameType	CustomerName;
	///֤������
	TFutureFtdcIdCardTypeType	IdCardType;
	///֤������
	TFutureFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///�Ա�
	TFutureFtdcGenderType	Gender;
	///���Ҵ���
	TFutureFtdcCountryCodeType	CountryCode;
	///�ͻ�����
	TFutureFtdcCustTypeType	CustType;
	///��ַ
	TFutureFtdcAddressType	Address;
	///�ʱ�
	TFutureFtdcZipCodeType	ZipCode;
	///�绰����
	TFutureFtdcTelephoneType	Telephone;
	///�ֻ�
	TFutureFtdcMobilePhoneType	MobilePhone;
	///����
	TFutureFtdcFaxType	Fax;
	///�����ʼ�
	TFutureFtdcEMailType	EMail;
	///�ʽ��˻�״̬
	TFutureFtdcMoneyAccountStatusType	MoneyAccountStatus;
	///�����ʺ�
	TFutureFtdcBankAccountType	BankAccount;
	///��������
	TFutureFtdcPasswordType	BankPassWord;
	///Ͷ�����ʺ�
	TFutureFtdcAccountIDType	AccountID;
	///�ڻ�����
	TFutureFtdcPasswordType	Password;
	///��װ���
	TFutureFtdcInstallIDType	InstallID;
	///��֤�ͻ�֤�������־
	TFutureFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///���ִ���
	TFutureFtdcCurrencyIDType	CurrencyID;
	///�㳮��־
	TFutureFtdcCashExchangeCodeType	CashExchangeCode;
	///ժҪ
	TFutureFtdcDigestType	Digest;
	///�����ʺ�����
	TFutureFtdcBankAccTypeType	BankAccType;
	///������־
	TFutureFtdcDeviceIDType	DeviceID;
	///�ڻ���λ�ʺ�����
	TFutureFtdcBankAccTypeType	BankSecuAccType;
	///�ڻ���˾���б���
	TFutureFtdcBankCodingForFutureType	BrokerIDByBank;
	///�ڻ���λ�ʺ�
	TFutureFtdcBankAccountType	BankSecuAcc;
	///���������־
	TFutureFtdcPwdFlagType	BankPwdFlag;
	///�ڻ��ʽ�����˶Ա�־
	TFutureFtdcPwdFlagType	SecuPwdFlag;
	///���׹�Ա
	TFutureFtdcOperNoType	OperNo;
	///����ID
	TFutureFtdcTIDType	TID;
	///�û���ʶ
	TFutureFtdcUserIDType	UserID;
};

///��������˻�����
struct CFutureFtdcReqChangeAccountField
{
	///ҵ������
	TFutureFtdcTradeCodeType	TradeCode;
	///���д���
	TFutureFtdcBankIDType	BankID;
	///���з�֧��������
	TFutureFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TFutureFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TFutureFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TFutureFtdcTradeDateType	TradeDate;
	///����ʱ��
	TFutureFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TFutureFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TFutureFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TFutureFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TFutureFtdcLastFragmentType	LastFragment;
	///�Ự��
	TFutureFtdcSessionIDType	SessionID;
	///�ͻ�����
	TFutureFtdcIndividualNameType	CustomerName;
	///֤������
	TFutureFtdcIdCardTypeType	IdCardType;
	///֤������
	TFutureFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///�Ա�
	TFutureFtdcGenderType	Gender;
	///���Ҵ���
	TFutureFtdcCountryCodeType	CountryCode;
	///�ͻ�����
	TFutureFtdcCustTypeType	CustType;
	///��ַ
	TFutureFtdcAddressType	Address;
	///�ʱ�
	TFutureFtdcZipCodeType	ZipCode;
	///�绰����
	TFutureFtdcTelephoneType	Telephone;
	///�ֻ�
	TFutureFtdcMobilePhoneType	MobilePhone;
	///����
	TFutureFtdcFaxType	Fax;
	///�����ʼ�
	TFutureFtdcEMailType	EMail;
	///�ʽ��˻�״̬
	TFutureFtdcMoneyAccountStatusType	MoneyAccountStatus;
	///�����ʺ�
	TFutureFtdcBankAccountType	BankAccount;
	///��������
	TFutureFtdcPasswordType	BankPassWord;
	///�������ʺ�
	TFutureFtdcBankAccountType	NewBankAccount;
	///����������
	TFutureFtdcPasswordType	NewBankPassWord;
	///Ͷ�����ʺ�
	TFutureFtdcAccountIDType	AccountID;
	///�ڻ�����
	TFutureFtdcPasswordType	Password;
	///�����ʺ�����
	TFutureFtdcBankAccTypeType	BankAccType;
	///��װ���
	TFutureFtdcInstallIDType	InstallID;
	///��֤�ͻ�֤�������־
	TFutureFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///���ִ���
	TFutureFtdcCurrencyIDType	CurrencyID;
	///�ڻ���˾���б���
	TFutureFtdcBankCodingForFutureType	BrokerIDByBank;
	///���������־
	TFutureFtdcPwdFlagType	BankPwdFlag;
	///�ڻ��ʽ�����˶Ա�־
	TFutureFtdcPwdFlagType	SecuPwdFlag;
	///����ID
	TFutureFtdcTIDType	TID;
	///ժҪ
	TFutureFtdcDigestType	Digest;
};

///ת������
struct CFutureFtdcReqTransferField
{
	///ҵ������
	TFutureFtdcTradeCodeType	TradeCode;
	///���д���
	TFutureFtdcBankIDType	BankID;
	///���з�֧��������
	TFutureFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TFutureFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TFutureFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TFutureFtdcTradeDateType	TradeDate;
	///����ʱ��
	TFutureFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TFutureFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TFutureFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TFutureFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TFutureFtdcLastFragmentType	LastFragment;
	///�Ự��
	TFutureFtdcSessionIDType	SessionID;
	///�ͻ�����
	TFutureFtdcIndividualNameType	CustomerName;
	///֤������
	TFutureFtdcIdCardTypeType	IdCardType;
	///֤������
	TFutureFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///�ͻ�����
	TFutureFtdcCustTypeType	CustType;
	///�����ʺ�
	TFutureFtdcBankAccountType	BankAccount;
	///��������
	TFutureFtdcPasswordType	BankPassWord;
	///Ͷ�����ʺ�
	TFutureFtdcAccountIDType	AccountID;
	///�ڻ�����
	TFutureFtdcPasswordType	Password;
	///��װ���
	TFutureFtdcInstallIDType	InstallID;
	///�ڻ���˾��ˮ��
	TFutureFtdcFutureSerialType	FutureSerial;
	///�û���ʶ
	TFutureFtdcUserIDType	UserID;
	///��֤�ͻ�֤�������־
	TFutureFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///���ִ���
	TFutureFtdcCurrencyIDType	CurrencyID;
	///ת�ʽ��
	TFutureFtdcTradeAmountType	TradeAmount;
	///�ڻ���ȡ���
	TFutureFtdcTradeAmountType	FutureFetchAmount;
	///����֧����־
	TFutureFtdcFeePayFlagType	FeePayFlag;
	///Ӧ�տͻ�����
	TFutureFtdcCustFeeType	CustFee;
	///Ӧ���ڻ���˾����
	TFutureFtdcFutureFeeType	BrokerFee;
	///���ͷ������շ�����Ϣ
	TFutureFtdcAddInfoType	Message;
	///ժҪ
	TFutureFtdcDigestType	Digest;
	///�����ʺ�����
	TFutureFtdcBankAccTypeType	BankAccType;
	///������־
	TFutureFtdcDeviceIDType	DeviceID;
	///�ڻ���λ�ʺ�����
	TFutureFtdcBankAccTypeType	BankSecuAccType;
	///�ڻ���˾���б���
	TFutureFtdcBankCodingForFutureType	BrokerIDByBank;
	///�ڻ���λ�ʺ�
	TFutureFtdcBankAccountType	BankSecuAcc;
	///���������־
	TFutureFtdcPwdFlagType	BankPwdFlag;
	///�ڻ��ʽ�����˶Ա�־
	TFutureFtdcPwdFlagType	SecuPwdFlag;
	///���׹�Ա
	TFutureFtdcOperNoType	OperNo;
	///������
	TFutureFtdcRequestIDType	RequestID;
	///����ID
	TFutureFtdcTIDType	TID;
	///ת�˽���״̬
	TFutureFtdcTransferStatusType	TransferStatus;
};

///���з��������ʽ�ת�ڻ���Ӧ
struct CFutureFtdcRspTransferField
{
	///ҵ������
	TFutureFtdcTradeCodeType	TradeCode;
	///���д���
	TFutureFtdcBankIDType	BankID;
	///���з�֧��������
	TFutureFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TFutureFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TFutureFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TFutureFtdcTradeDateType	TradeDate;
	///����ʱ��
	TFutureFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TFutureFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TFutureFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TFutureFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TFutureFtdcLastFragmentType	LastFragment;
	///�Ự��
	TFutureFtdcSessionIDType	SessionID;
	///�ͻ�����
	TFutureFtdcIndividualNameType	CustomerName;
	///֤������
	TFutureFtdcIdCardTypeType	IdCardType;
	///֤������
	TFutureFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///�ͻ�����
	TFutureFtdcCustTypeType	CustType;
	///�����ʺ�
	TFutureFtdcBankAccountType	BankAccount;
	///��������
	TFutureFtdcPasswordType	BankPassWord;
	///Ͷ�����ʺ�
	TFutureFtdcAccountIDType	AccountID;
	///�ڻ�����
	TFutureFtdcPasswordType	Password;
	///��װ���
	TFutureFtdcInstallIDType	InstallID;
	///�ڻ���˾��ˮ��
	TFutureFtdcFutureSerialType	FutureSerial;
	///�û���ʶ
	TFutureFtdcUserIDType	UserID;
	///��֤�ͻ�֤�������־
	TFutureFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///���ִ���
	TFutureFtdcCurrencyIDType	CurrencyID;
	///ת�ʽ��
	TFutureFtdcTradeAmountType	TradeAmount;
	///�ڻ���ȡ���
	TFutureFtdcTradeAmountType	FutureFetchAmount;
	///����֧����־
	TFutureFtdcFeePayFlagType	FeePayFlag;
	///Ӧ�տͻ�����
	TFutureFtdcCustFeeType	CustFee;
	///Ӧ���ڻ���˾����
	TFutureFtdcFutureFeeType	BrokerFee;
	///���ͷ������շ�����Ϣ
	TFutureFtdcAddInfoType	Message;
	///ժҪ
	TFutureFtdcDigestType	Digest;
	///�����ʺ�����
	TFutureFtdcBankAccTypeType	BankAccType;
	///������־
	TFutureFtdcDeviceIDType	DeviceID;
	///�ڻ���λ�ʺ�����
	TFutureFtdcBankAccTypeType	BankSecuAccType;
	///�ڻ���˾���б���
	TFutureFtdcBankCodingForFutureType	BrokerIDByBank;
	///�ڻ���λ�ʺ�
	TFutureFtdcBankAccountType	BankSecuAcc;
	///���������־
	TFutureFtdcPwdFlagType	BankPwdFlag;
	///�ڻ��ʽ�����˶Ա�־
	TFutureFtdcPwdFlagType	SecuPwdFlag;
	///���׹�Ա
	TFutureFtdcOperNoType	OperNo;
	///������
	TFutureFtdcRequestIDType	RequestID;
	///����ID
	TFutureFtdcTIDType	TID;
	///ת�˽���״̬
	TFutureFtdcTransferStatusType	TransferStatus;
	///�������
	TFutureFtdcErrorIDType	ErrorID;
	///������Ϣ
	TFutureFtdcErrorMsgType	ErrorMsg;
};

///��������
struct CFutureFtdcReqRepealField
{
	///����ʱ����
	TFutureFtdcRepealTimeIntervalType	RepealTimeInterval;
	///�Ѿ���������
	TFutureFtdcRepealedTimesType	RepealedTimes;
	///���г�����־
	TFutureFtdcBankRepealFlagType	BankRepealFlag;
	///���̳�����־
	TFutureFtdcBrokerRepealFlagType	BrokerRepealFlag;
	///������ƽ̨��ˮ��
	TFutureFtdcPlateSerialType	PlateRepealSerial;
	///������������ˮ��
	TFutureFtdcBankSerialType	BankRepealSerial;
	///�������ڻ���ˮ��
	TFutureFtdcFutureSerialType	FutureRepealSerial;
	///ҵ������
	TFutureFtdcTradeCodeType	TradeCode;
	///���д���
	TFutureFtdcBankIDType	BankID;
	///���з�֧��������
	TFutureFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TFutureFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TFutureFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TFutureFtdcTradeDateType	TradeDate;
	///����ʱ��
	TFutureFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TFutureFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TFutureFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TFutureFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TFutureFtdcLastFragmentType	LastFragment;
	///�Ự��
	TFutureFtdcSessionIDType	SessionID;
	///�ͻ�����
	TFutureFtdcIndividualNameType	CustomerName;
	///֤������
	TFutureFtdcIdCardTypeType	IdCardType;
	///֤������
	TFutureFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///�ͻ�����
	TFutureFtdcCustTypeType	CustType;
	///�����ʺ�
	TFutureFtdcBankAccountType	BankAccount;
	///��������
	TFutureFtdcPasswordType	BankPassWord;
	///Ͷ�����ʺ�
	TFutureFtdcAccountIDType	AccountID;
	///�ڻ�����
	TFutureFtdcPasswordType	Password;
	///��װ���
	TFutureFtdcInstallIDType	InstallID;
	///�ڻ���˾��ˮ��
	TFutureFtdcFutureSerialType	FutureSerial;
	///�û���ʶ
	TFutureFtdcUserIDType	UserID;
	///��֤�ͻ�֤�������־
	TFutureFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///���ִ���
	TFutureFtdcCurrencyIDType	CurrencyID;
	///ת�ʽ��
	TFutureFtdcTradeAmountType	TradeAmount;
	///�ڻ���ȡ���
	TFutureFtdcTradeAmountType	FutureFetchAmount;
	///����֧����־
	TFutureFtdcFeePayFlagType	FeePayFlag;
	///Ӧ�տͻ�����
	TFutureFtdcCustFeeType	CustFee;
	///Ӧ���ڻ���˾����
	TFutureFtdcFutureFeeType	BrokerFee;
	///���ͷ������շ�����Ϣ
	TFutureFtdcAddInfoType	Message;
	///ժҪ
	TFutureFtdcDigestType	Digest;
	///�����ʺ�����
	TFutureFtdcBankAccTypeType	BankAccType;
	///������־
	TFutureFtdcDeviceIDType	DeviceID;
	///�ڻ���λ�ʺ�����
	TFutureFtdcBankAccTypeType	BankSecuAccType;
	///�ڻ���˾���б���
	TFutureFtdcBankCodingForFutureType	BrokerIDByBank;
	///�ڻ���λ�ʺ�
	TFutureFtdcBankAccountType	BankSecuAcc;
	///���������־
	TFutureFtdcPwdFlagType	BankPwdFlag;
	///�ڻ��ʽ�����˶Ա�־
	TFutureFtdcPwdFlagType	SecuPwdFlag;
	///���׹�Ա
	TFutureFtdcOperNoType	OperNo;
	///������
	TFutureFtdcRequestIDType	RequestID;
	///����ID
	TFutureFtdcTIDType	TID;
	///ת�˽���״̬
	TFutureFtdcTransferStatusType	TransferStatus;
};

///������Ӧ
struct CFutureFtdcRspRepealField
{
	///����ʱ����
	TFutureFtdcRepealTimeIntervalType	RepealTimeInterval;
	///�Ѿ���������
	TFutureFtdcRepealedTimesType	RepealedTimes;
	///���г�����־
	TFutureFtdcBankRepealFlagType	BankRepealFlag;
	///���̳�����־
	TFutureFtdcBrokerRepealFlagType	BrokerRepealFlag;
	///������ƽ̨��ˮ��
	TFutureFtdcPlateSerialType	PlateRepealSerial;
	///������������ˮ��
	TFutureFtdcBankSerialType	BankRepealSerial;
	///�������ڻ���ˮ��
	TFutureFtdcFutureSerialType	FutureRepealSerial;
	///ҵ������
	TFutureFtdcTradeCodeType	TradeCode;
	///���д���
	TFutureFtdcBankIDType	BankID;
	///���з�֧��������
	TFutureFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TFutureFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TFutureFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TFutureFtdcTradeDateType	TradeDate;
	///����ʱ��
	TFutureFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TFutureFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TFutureFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TFutureFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TFutureFtdcLastFragmentType	LastFragment;
	///�Ự��
	TFutureFtdcSessionIDType	SessionID;
	///�ͻ�����
	TFutureFtdcIndividualNameType	CustomerName;
	///֤������
	TFutureFtdcIdCardTypeType	IdCardType;
	///֤������
	TFutureFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///�ͻ�����
	TFutureFtdcCustTypeType	CustType;
	///�����ʺ�
	TFutureFtdcBankAccountType	BankAccount;
	///��������
	TFutureFtdcPasswordType	BankPassWord;
	///Ͷ�����ʺ�
	TFutureFtdcAccountIDType	AccountID;
	///�ڻ�����
	TFutureFtdcPasswordType	Password;
	///��װ���
	TFutureFtdcInstallIDType	InstallID;
	///�ڻ���˾��ˮ��
	TFutureFtdcFutureSerialType	FutureSerial;
	///�û���ʶ
	TFutureFtdcUserIDType	UserID;
	///��֤�ͻ�֤�������־
	TFutureFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///���ִ���
	TFutureFtdcCurrencyIDType	CurrencyID;
	///ת�ʽ��
	TFutureFtdcTradeAmountType	TradeAmount;
	///�ڻ���ȡ���
	TFutureFtdcTradeAmountType	FutureFetchAmount;
	///����֧����־
	TFutureFtdcFeePayFlagType	FeePayFlag;
	///Ӧ�տͻ�����
	TFutureFtdcCustFeeType	CustFee;
	///Ӧ���ڻ���˾����
	TFutureFtdcFutureFeeType	BrokerFee;
	///���ͷ������շ�����Ϣ
	TFutureFtdcAddInfoType	Message;
	///ժҪ
	TFutureFtdcDigestType	Digest;
	///�����ʺ�����
	TFutureFtdcBankAccTypeType	BankAccType;
	///������־
	TFutureFtdcDeviceIDType	DeviceID;
	///�ڻ���λ�ʺ�����
	TFutureFtdcBankAccTypeType	BankSecuAccType;
	///�ڻ���˾���б���
	TFutureFtdcBankCodingForFutureType	BrokerIDByBank;
	///�ڻ���λ�ʺ�
	TFutureFtdcBankAccountType	BankSecuAcc;
	///���������־
	TFutureFtdcPwdFlagType	BankPwdFlag;
	///�ڻ��ʽ�����˶Ա�־
	TFutureFtdcPwdFlagType	SecuPwdFlag;
	///���׹�Ա
	TFutureFtdcOperNoType	OperNo;
	///������
	TFutureFtdcRequestIDType	RequestID;
	///����ID
	TFutureFtdcTIDType	TID;
	///ת�˽���״̬
	TFutureFtdcTransferStatusType	TransferStatus;
	///�������
	TFutureFtdcErrorIDType	ErrorID;
	///������Ϣ
	TFutureFtdcErrorMsgType	ErrorMsg;
};

///��ѯ�˻���Ϣ����
struct CFutureFtdcReqQueryAccountField
{
	///ҵ������
	TFutureFtdcTradeCodeType	TradeCode;
	///���д���
	TFutureFtdcBankIDType	BankID;
	///���з�֧��������
	TFutureFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TFutureFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TFutureFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TFutureFtdcTradeDateType	TradeDate;
	///����ʱ��
	TFutureFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TFutureFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TFutureFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TFutureFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TFutureFtdcLastFragmentType	LastFragment;
	///�Ự��
	TFutureFtdcSessionIDType	SessionID;
	///�ͻ�����
	TFutureFtdcIndividualNameType	CustomerName;
	///֤������
	TFutureFtdcIdCardTypeType	IdCardType;
	///֤������
	TFutureFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///�ͻ�����
	TFutureFtdcCustTypeType	CustType;
	///�����ʺ�
	TFutureFtdcBankAccountType	BankAccount;
	///��������
	TFutureFtdcPasswordType	BankPassWord;
	///Ͷ�����ʺ�
	TFutureFtdcAccountIDType	AccountID;
	///�ڻ�����
	TFutureFtdcPasswordType	Password;
	///�ڻ���˾��ˮ��
	TFutureFtdcFutureSerialType	FutureSerial;
	///��װ���
	TFutureFtdcInstallIDType	InstallID;
	///�û���ʶ
	TFutureFtdcUserIDType	UserID;
	///��֤�ͻ�֤�������־
	TFutureFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///���ִ���
	TFutureFtdcCurrencyIDType	CurrencyID;
	///ժҪ
	TFutureFtdcDigestType	Digest;
	///�����ʺ�����
	TFutureFtdcBankAccTypeType	BankAccType;
	///������־
	TFutureFtdcDeviceIDType	DeviceID;
	///�ڻ���λ�ʺ�����
	TFutureFtdcBankAccTypeType	BankSecuAccType;
	///�ڻ���˾���б���
	TFutureFtdcBankCodingForFutureType	BrokerIDByBank;
	///�ڻ���λ�ʺ�
	TFutureFtdcBankAccountType	BankSecuAcc;
	///���������־
	TFutureFtdcPwdFlagType	BankPwdFlag;
	///�ڻ��ʽ�����˶Ա�־
	TFutureFtdcPwdFlagType	SecuPwdFlag;
	///���׹�Ա
	TFutureFtdcOperNoType	OperNo;
	///������
	TFutureFtdcRequestIDType	RequestID;
	///����ID
	TFutureFtdcTIDType	TID;
};

///��ѯ�˻���Ϣ��Ӧ
struct CFutureFtdcRspQueryAccountField
{
	///ҵ������
	TFutureFtdcTradeCodeType	TradeCode;
	///���д���
	TFutureFtdcBankIDType	BankID;
	///���з�֧��������
	TFutureFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TFutureFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TFutureFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TFutureFtdcTradeDateType	TradeDate;
	///����ʱ��
	TFutureFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TFutureFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TFutureFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TFutureFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TFutureFtdcLastFragmentType	LastFragment;
	///�Ự��
	TFutureFtdcSessionIDType	SessionID;
	///�ͻ�����
	TFutureFtdcIndividualNameType	CustomerName;
	///֤������
	TFutureFtdcIdCardTypeType	IdCardType;
	///֤������
	TFutureFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///�ͻ�����
	TFutureFtdcCustTypeType	CustType;
	///�����ʺ�
	TFutureFtdcBankAccountType	BankAccount;
	///��������
	TFutureFtdcPasswordType	BankPassWord;
	///Ͷ�����ʺ�
	TFutureFtdcAccountIDType	AccountID;
	///�ڻ�����
	TFutureFtdcPasswordType	Password;
	///�ڻ���˾��ˮ��
	TFutureFtdcFutureSerialType	FutureSerial;
	///��װ���
	TFutureFtdcInstallIDType	InstallID;
	///�û���ʶ
	TFutureFtdcUserIDType	UserID;
	///��֤�ͻ�֤�������־
	TFutureFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///���ִ���
	TFutureFtdcCurrencyIDType	CurrencyID;
	///ժҪ
	TFutureFtdcDigestType	Digest;
	///�����ʺ�����
	TFutureFtdcBankAccTypeType	BankAccType;
	///������־
	TFutureFtdcDeviceIDType	DeviceID;
	///�ڻ���λ�ʺ�����
	TFutureFtdcBankAccTypeType	BankSecuAccType;
	///�ڻ���˾���б���
	TFutureFtdcBankCodingForFutureType	BrokerIDByBank;
	///�ڻ���λ�ʺ�
	TFutureFtdcBankAccountType	BankSecuAcc;
	///���������־
	TFutureFtdcPwdFlagType	BankPwdFlag;
	///�ڻ��ʽ�����˶Ա�־
	TFutureFtdcPwdFlagType	SecuPwdFlag;
	///���׹�Ա
	TFutureFtdcOperNoType	OperNo;
	///������
	TFutureFtdcRequestIDType	RequestID;
	///����ID
	TFutureFtdcTIDType	TID;
	///���п��ý��
	TFutureFtdcTradeAmountType	BankUseAmount;
	///���п�ȡ���
	TFutureFtdcTradeAmountType	BankFetchAmount;
};

///����ǩ��ǩ��
struct CFutureFtdcFutureSignIOField
{
	///ҵ������
	TFutureFtdcTradeCodeType	TradeCode;
	///���д���
	TFutureFtdcBankIDType	BankID;
	///���з�֧��������
	TFutureFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TFutureFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TFutureFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TFutureFtdcTradeDateType	TradeDate;
	///����ʱ��
	TFutureFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TFutureFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TFutureFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TFutureFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TFutureFtdcLastFragmentType	LastFragment;
	///�Ự��
	TFutureFtdcSessionIDType	SessionID;
	///��װ���
	TFutureFtdcInstallIDType	InstallID;
	///�û���ʶ
	TFutureFtdcUserIDType	UserID;
	///ժҪ
	TFutureFtdcDigestType	Digest;
	///���ִ���
	TFutureFtdcCurrencyIDType	CurrencyID;
	///������־
	TFutureFtdcDeviceIDType	DeviceID;
	///�ڻ���˾���б���
	TFutureFtdcBankCodingForFutureType	BrokerIDByBank;
	///���׹�Ա
	TFutureFtdcOperNoType	OperNo;
	///������
	TFutureFtdcRequestIDType	RequestID;
	///����ID
	TFutureFtdcTIDType	TID;
};

///����ǩ����Ӧ
struct CFutureFtdcRspFutureSignInField
{
	///ҵ������
	TFutureFtdcTradeCodeType	TradeCode;
	///���д���
	TFutureFtdcBankIDType	BankID;
	///���з�֧��������
	TFutureFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TFutureFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TFutureFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TFutureFtdcTradeDateType	TradeDate;
	///����ʱ��
	TFutureFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TFutureFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TFutureFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TFutureFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TFutureFtdcLastFragmentType	LastFragment;
	///�Ự��
	TFutureFtdcSessionIDType	SessionID;
	///��װ���
	TFutureFtdcInstallIDType	InstallID;
	///�û���ʶ
	TFutureFtdcUserIDType	UserID;
	///ժҪ
	TFutureFtdcDigestType	Digest;
	///���ִ���
	TFutureFtdcCurrencyIDType	CurrencyID;
	///������־
	TFutureFtdcDeviceIDType	DeviceID;
	///�ڻ���˾���б���
	TFutureFtdcBankCodingForFutureType	BrokerIDByBank;
	///���׹�Ա
	TFutureFtdcOperNoType	OperNo;
	///������
	TFutureFtdcRequestIDType	RequestID;
	///����ID
	TFutureFtdcTIDType	TID;
	///�������
	TFutureFtdcErrorIDType	ErrorID;
	///������Ϣ
	TFutureFtdcErrorMsgType	ErrorMsg;
	///PIN��Կ
	TFutureFtdcPasswordKeyType	PinKey;
	///MAC��Կ
	TFutureFtdcPasswordKeyType	MacKey;
};

///����ǩ������
struct CFutureFtdcReqFutureSignOutField
{
	///ҵ������
	TFutureFtdcTradeCodeType	TradeCode;
	///���д���
	TFutureFtdcBankIDType	BankID;
	///���з�֧��������
	TFutureFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TFutureFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TFutureFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TFutureFtdcTradeDateType	TradeDate;
	///����ʱ��
	TFutureFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TFutureFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TFutureFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TFutureFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TFutureFtdcLastFragmentType	LastFragment;
	///�Ự��
	TFutureFtdcSessionIDType	SessionID;
	///��װ���
	TFutureFtdcInstallIDType	InstallID;
	///�û���ʶ
	TFutureFtdcUserIDType	UserID;
	///ժҪ
	TFutureFtdcDigestType	Digest;
	///���ִ���
	TFutureFtdcCurrencyIDType	CurrencyID;
	///������־
	TFutureFtdcDeviceIDType	DeviceID;
	///�ڻ���˾���б���
	TFutureFtdcBankCodingForFutureType	BrokerIDByBank;
	///���׹�Ա
	TFutureFtdcOperNoType	OperNo;
	///������
	TFutureFtdcRequestIDType	RequestID;
	///����ID
	TFutureFtdcTIDType	TID;
};

///����ǩ����Ӧ
struct CFutureFtdcRspFutureSignOutField
{
	///ҵ������
	TFutureFtdcTradeCodeType	TradeCode;
	///���д���
	TFutureFtdcBankIDType	BankID;
	///���з�֧��������
	TFutureFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TFutureFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TFutureFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TFutureFtdcTradeDateType	TradeDate;
	///����ʱ��
	TFutureFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TFutureFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TFutureFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TFutureFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TFutureFtdcLastFragmentType	LastFragment;
	///�Ự��
	TFutureFtdcSessionIDType	SessionID;
	///��װ���
	TFutureFtdcInstallIDType	InstallID;
	///�û���ʶ
	TFutureFtdcUserIDType	UserID;
	///ժҪ
	TFutureFtdcDigestType	Digest;
	///���ִ���
	TFutureFtdcCurrencyIDType	CurrencyID;
	///������־
	TFutureFtdcDeviceIDType	DeviceID;
	///�ڻ���˾���б���
	TFutureFtdcBankCodingForFutureType	BrokerIDByBank;
	///���׹�Ա
	TFutureFtdcOperNoType	OperNo;
	///������
	TFutureFtdcRequestIDType	RequestID;
	///����ID
	TFutureFtdcTIDType	TID;
	///�������
	TFutureFtdcErrorIDType	ErrorID;
	///������Ϣ
	TFutureFtdcErrorMsgType	ErrorMsg;
};

///��ѯָ����ˮ�ŵĽ��׽������
struct CFutureFtdcReqQueryTradeResultBySerialField
{
	///ҵ������
	TFutureFtdcTradeCodeType	TradeCode;
	///���д���
	TFutureFtdcBankIDType	BankID;
	///���з�֧��������
	TFutureFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TFutureFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TFutureFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TFutureFtdcTradeDateType	TradeDate;
	///����ʱ��
	TFutureFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TFutureFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TFutureFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TFutureFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TFutureFtdcLastFragmentType	LastFragment;
	///�Ự��
	TFutureFtdcSessionIDType	SessionID;
	///��ˮ��
	TFutureFtdcSerialType	Reference;
	///����ˮ�ŷ����ߵĻ�������
	TFutureFtdcInstitutionTypeType	RefrenceIssureType;
	///����ˮ�ŷ����߻�������
	TFutureFtdcOrganCodeType	RefrenceIssure;
	///�ͻ�����
	TFutureFtdcIndividualNameType	CustomerName;
	///֤������
	TFutureFtdcIdCardTypeType	IdCardType;
	///֤������
	TFutureFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///�ͻ�����
	TFutureFtdcCustTypeType	CustType;
	///�����ʺ�
	TFutureFtdcBankAccountType	BankAccount;
	///��������
	TFutureFtdcPasswordType	BankPassWord;
	///Ͷ�����ʺ�
	TFutureFtdcAccountIDType	AccountID;
	///�ڻ�����
	TFutureFtdcPasswordType	Password;
	///���ִ���
	TFutureFtdcCurrencyIDType	CurrencyID;
	///ת�ʽ��
	TFutureFtdcTradeAmountType	TradeAmount;
	///ժҪ
	TFutureFtdcDigestType	Digest;
};

///��ѯָ����ˮ�ŵĽ��׽����Ӧ
struct CFutureFtdcRspQueryTradeResultBySerialField
{
	///ҵ������
	TFutureFtdcTradeCodeType	TradeCode;
	///���д���
	TFutureFtdcBankIDType	BankID;
	///���з�֧��������
	TFutureFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TFutureFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TFutureFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TFutureFtdcTradeDateType	TradeDate;
	///����ʱ��
	TFutureFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TFutureFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TFutureFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TFutureFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TFutureFtdcLastFragmentType	LastFragment;
	///�Ự��
	TFutureFtdcSessionIDType	SessionID;
	///�������
	TFutureFtdcErrorIDType	ErrorID;
	///������Ϣ
	TFutureFtdcErrorMsgType	ErrorMsg;
	///��ˮ��
	TFutureFtdcSerialType	Reference;
	///����ˮ�ŷ����ߵĻ�������
	TFutureFtdcInstitutionTypeType	RefrenceIssureType;
	///����ˮ�ŷ����߻�������
	TFutureFtdcOrganCodeType	RefrenceIssure;
	///ԭʼ���ش���
	TFutureFtdcReturnCodeType	OriginReturnCode;
	///ԭʼ����������
	TFutureFtdcDescrInfoForReturnCodeType	OriginDescrInfoForReturnCode;
	///�����ʺ�
	TFutureFtdcBankAccountType	BankAccount;
	///��������
	TFutureFtdcPasswordType	BankPassWord;
	///Ͷ�����ʺ�
	TFutureFtdcAccountIDType	AccountID;
	///�ڻ�����
	TFutureFtdcPasswordType	Password;
	///���ִ���
	TFutureFtdcCurrencyIDType	CurrencyID;
	///ת�ʽ��
	TFutureFtdcTradeAmountType	TradeAmount;
	///ժҪ
	TFutureFtdcDigestType	Digest;
};

///�����ļ���������
struct CFutureFtdcReqDayEndFileReadyField
{
	///ҵ������
	TFutureFtdcTradeCodeType	TradeCode;
	///���д���
	TFutureFtdcBankIDType	BankID;
	///���з�֧��������
	TFutureFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TFutureFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TFutureFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TFutureFtdcTradeDateType	TradeDate;
	///����ʱ��
	TFutureFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TFutureFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TFutureFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TFutureFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TFutureFtdcLastFragmentType	LastFragment;
	///�Ự��
	TFutureFtdcSessionIDType	SessionID;
	///�ļ�ҵ����
	TFutureFtdcFileBusinessCodeType	FileBusinessCode;
	///ժҪ
	TFutureFtdcDigestType	Digest;
};

///���ؽ��
struct CFutureFtdcReturnResultField
{
	///���ش���
	TFutureFtdcReturnCodeType	ReturnCode;
	///����������
	TFutureFtdcDescrInfoForReturnCodeType	DescrInfoForReturnCode;
};

///��֤�ڻ��ʽ�����
struct CFutureFtdcVerifyFuturePasswordField
{
	///ҵ������
	TFutureFtdcTradeCodeType	TradeCode;
	///���д���
	TFutureFtdcBankIDType	BankID;
	///���з�֧��������
	TFutureFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TFutureFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TFutureFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TFutureFtdcTradeDateType	TradeDate;
	///����ʱ��
	TFutureFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TFutureFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TFutureFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TFutureFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TFutureFtdcLastFragmentType	LastFragment;
	///�Ự��
	TFutureFtdcSessionIDType	SessionID;
	///Ͷ�����ʺ�
	TFutureFtdcAccountIDType	AccountID;
	///�ڻ�����
	TFutureFtdcPasswordType	Password;
	///�����ʺ�
	TFutureFtdcBankAccountType	BankAccount;
	///��������
	TFutureFtdcPasswordType	BankPassWord;
	///��װ���
	TFutureFtdcInstallIDType	InstallID;
	///����ID
	TFutureFtdcTIDType	TID;
};

///��֤�ͻ���Ϣ
struct CFutureFtdcVerifyCustInfoField
{
	///�ͻ�����
	TFutureFtdcIndividualNameType	CustomerName;
	///֤������
	TFutureFtdcIdCardTypeType	IdCardType;
	///֤������
	TFutureFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///�ͻ�����
	TFutureFtdcCustTypeType	CustType;
};

///��֤�ڻ��ʽ�����Ϳͻ���Ϣ
struct CFutureFtdcVerifyFuturePasswordAndCustInfoField
{
	///�ͻ�����
	TFutureFtdcIndividualNameType	CustomerName;
	///֤������
	TFutureFtdcIdCardTypeType	IdCardType;
	///֤������
	TFutureFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///�ͻ�����
	TFutureFtdcCustTypeType	CustType;
	///Ͷ�����ʺ�
	TFutureFtdcAccountIDType	AccountID;
	///�ڻ�����
	TFutureFtdcPasswordType	Password;
};

///��֤�ڻ��ʽ�����Ϳͻ���Ϣ
struct CFutureFtdcDepositResultInformField
{
	///�������ˮ�ţ�����ˮ��Ϊ���ڱ��̷��ص���ˮ��
	TFutureFtdcDepositSeqNoType	DepositSeqNo;
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///�����
	TFutureFtdcMoneyType	Deposit;
	///������
	TFutureFtdcRequestIDType	RequestID;
	///���ش���
	TFutureFtdcReturnCodeType	ReturnCode;
	///����������
	TFutureFtdcDescrInfoForReturnCodeType	DescrInfoForReturnCode;
};

///���׺��������ڱ��̷�����Կͬ������
struct CFutureFtdcReqSyncKeyField
{
	///ҵ������
	TFutureFtdcTradeCodeType	TradeCode;
	///���д���
	TFutureFtdcBankIDType	BankID;
	///���з�֧��������
	TFutureFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TFutureFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TFutureFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TFutureFtdcTradeDateType	TradeDate;
	///����ʱ��
	TFutureFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TFutureFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TFutureFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TFutureFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TFutureFtdcLastFragmentType	LastFragment;
	///�Ự��
	TFutureFtdcSessionIDType	SessionID;
	///��װ���
	TFutureFtdcInstallIDType	InstallID;
	///�û���ʶ
	TFutureFtdcUserIDType	UserID;
	///���׺��ĸ����ڱ��̵���Ϣ
	TFutureFtdcAddInfoType	Message;
	///������־
	TFutureFtdcDeviceIDType	DeviceID;
	///�ڻ���˾���б���
	TFutureFtdcBankCodingForFutureType	BrokerIDByBank;
	///���׹�Ա
	TFutureFtdcOperNoType	OperNo;
	///������
	TFutureFtdcRequestIDType	RequestID;
	///����ID
	TFutureFtdcTIDType	TID;
};

///���׺��������ڱ��̷�����Կͬ����Ӧ
struct CFutureFtdcRspSyncKeyField
{
	///ҵ������
	TFutureFtdcTradeCodeType	TradeCode;
	///���д���
	TFutureFtdcBankIDType	BankID;
	///���з�֧��������
	TFutureFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TFutureFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TFutureFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TFutureFtdcTradeDateType	TradeDate;
	///����ʱ��
	TFutureFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TFutureFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TFutureFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TFutureFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TFutureFtdcLastFragmentType	LastFragment;
	///�Ự��
	TFutureFtdcSessionIDType	SessionID;
	///��װ���
	TFutureFtdcInstallIDType	InstallID;
	///�û���ʶ
	TFutureFtdcUserIDType	UserID;
	///���׺��ĸ����ڱ��̵���Ϣ
	TFutureFtdcAddInfoType	Message;
	///������־
	TFutureFtdcDeviceIDType	DeviceID;
	///�ڻ���˾���б���
	TFutureFtdcBankCodingForFutureType	BrokerIDByBank;
	///���׹�Ա
	TFutureFtdcOperNoType	OperNo;
	///������
	TFutureFtdcRequestIDType	RequestID;
	///����ID
	TFutureFtdcTIDType	TID;
	///�������
	TFutureFtdcErrorIDType	ErrorID;
	///������Ϣ
	TFutureFtdcErrorMsgType	ErrorMsg;
};

///��ѯ�˻���Ϣ֪ͨ
struct CFutureFtdcNotifyQueryAccountField
{
	///ҵ������
	TFutureFtdcTradeCodeType	TradeCode;
	///���д���
	TFutureFtdcBankIDType	BankID;
	///���з�֧��������
	TFutureFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TFutureFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TFutureFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TFutureFtdcTradeDateType	TradeDate;
	///����ʱ��
	TFutureFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TFutureFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TFutureFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TFutureFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TFutureFtdcLastFragmentType	LastFragment;
	///�Ự��
	TFutureFtdcSessionIDType	SessionID;
	///�ͻ�����
	TFutureFtdcIndividualNameType	CustomerName;
	///֤������
	TFutureFtdcIdCardTypeType	IdCardType;
	///֤������
	TFutureFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///�ͻ�����
	TFutureFtdcCustTypeType	CustType;
	///�����ʺ�
	TFutureFtdcBankAccountType	BankAccount;
	///��������
	TFutureFtdcPasswordType	BankPassWord;
	///Ͷ�����ʺ�
	TFutureFtdcAccountIDType	AccountID;
	///�ڻ�����
	TFutureFtdcPasswordType	Password;
	///�ڻ���˾��ˮ��
	TFutureFtdcFutureSerialType	FutureSerial;
	///��װ���
	TFutureFtdcInstallIDType	InstallID;
	///�û���ʶ
	TFutureFtdcUserIDType	UserID;
	///��֤�ͻ�֤�������־
	TFutureFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///���ִ���
	TFutureFtdcCurrencyIDType	CurrencyID;
	///ժҪ
	TFutureFtdcDigestType	Digest;
	///�����ʺ�����
	TFutureFtdcBankAccTypeType	BankAccType;
	///������־
	TFutureFtdcDeviceIDType	DeviceID;
	///�ڻ���λ�ʺ�����
	TFutureFtdcBankAccTypeType	BankSecuAccType;
	///�ڻ���˾���б���
	TFutureFtdcBankCodingForFutureType	BrokerIDByBank;
	///�ڻ���λ�ʺ�
	TFutureFtdcBankAccountType	BankSecuAcc;
	///���������־
	TFutureFtdcPwdFlagType	BankPwdFlag;
	///�ڻ��ʽ�����˶Ա�־
	TFutureFtdcPwdFlagType	SecuPwdFlag;
	///���׹�Ա
	TFutureFtdcOperNoType	OperNo;
	///������
	TFutureFtdcRequestIDType	RequestID;
	///����ID
	TFutureFtdcTIDType	TID;
	///���п��ý��
	TFutureFtdcTradeAmountType	BankUseAmount;
	///���п�ȡ���
	TFutureFtdcTradeAmountType	BankFetchAmount;
	///�������
	TFutureFtdcErrorIDType	ErrorID;
	///������Ϣ
	TFutureFtdcErrorMsgType	ErrorMsg;
};

///����ת�˽�����ˮ��
struct CFutureFtdcTransferSerialField
{
	///ƽ̨��ˮ��
	TFutureFtdcPlateSerialType	PlateSerial;
	///���׷�������
	TFutureFtdcTradeDateType	TradeDate;
	///��������
	TFutureFtdcDateType	TradingDay;
	///����ʱ��
	TFutureFtdcTradeTimeType	TradeTime;
	///���״���
	TFutureFtdcTradeCodeType	TradeCode;
	///�Ự���
	TFutureFtdcSessionIDType	SessionID;
	///���б���
	TFutureFtdcBankIDType	BankID;
	///���з�֧��������
	TFutureFtdcBankBrchIDType	BankBranchID;
	///�����ʺ�����
	TFutureFtdcBankAccTypeType	BankAccType;
	///�����ʺ�
	TFutureFtdcBankAccountType	BankAccount;
	///������ˮ��
	TFutureFtdcBankSerialType	BankSerial;
	///�ڻ���˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TFutureFtdcFutureBranchIDType	BrokerBranchID;
	///�ڻ���˾�ʺ�����
	TFutureFtdcFutureAccTypeType	FutureAccType;
	///Ͷ�����ʺ�
	TFutureFtdcAccountIDType	AccountID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///�ڻ���˾��ˮ��
	TFutureFtdcFutureSerialType	FutureSerial;
	///֤������
	TFutureFtdcIdCardTypeType	IdCardType;
	///֤������
	TFutureFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///���ִ���
	TFutureFtdcCurrencyIDType	CurrencyID;
	///���׽��
	TFutureFtdcTradeAmountType	TradeAmount;
	///Ӧ�տͻ�����
	TFutureFtdcCustFeeType	CustFee;
	///Ӧ���ڻ���˾����
	TFutureFtdcFutureFeeType	BrokerFee;
	///��Ч��־
	TFutureFtdcAvailabilityFlagType	AvailabilityFlag;
	///����Ա
	TFutureFtdcOperatorCodeType	OperatorCode;
	///�������ʺ�
	TFutureFtdcBankAccountType	BankNewAccount;
	///�������
	TFutureFtdcErrorIDType	ErrorID;
	///������Ϣ
	TFutureFtdcErrorMsgType	ErrorMsg;
};

///�����ѯת����ˮ
struct CFutureFtdcQryTransferSerialField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ�����ʺ�
	TFutureFtdcAccountIDType	AccountID;
	///���б���
	TFutureFtdcBankIDType	BankID;
};

///����ǩ��֪ͨ
struct CFutureFtdcNotifyFutureSignInField
{
	///ҵ������
	TFutureFtdcTradeCodeType	TradeCode;
	///���д���
	TFutureFtdcBankIDType	BankID;
	///���з�֧��������
	TFutureFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TFutureFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TFutureFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TFutureFtdcTradeDateType	TradeDate;
	///����ʱ��
	TFutureFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TFutureFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TFutureFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TFutureFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TFutureFtdcLastFragmentType	LastFragment;
	///�Ự��
	TFutureFtdcSessionIDType	SessionID;
	///��װ���
	TFutureFtdcInstallIDType	InstallID;
	///�û���ʶ
	TFutureFtdcUserIDType	UserID;
	///ժҪ
	TFutureFtdcDigestType	Digest;
	///���ִ���
	TFutureFtdcCurrencyIDType	CurrencyID;
	///������־
	TFutureFtdcDeviceIDType	DeviceID;
	///�ڻ���˾���б���
	TFutureFtdcBankCodingForFutureType	BrokerIDByBank;
	///���׹�Ա
	TFutureFtdcOperNoType	OperNo;
	///������
	TFutureFtdcRequestIDType	RequestID;
	///����ID
	TFutureFtdcTIDType	TID;
	///�������
	TFutureFtdcErrorIDType	ErrorID;
	///������Ϣ
	TFutureFtdcErrorMsgType	ErrorMsg;
	///PIN��Կ
	TFutureFtdcPasswordKeyType	PinKey;
	///MAC��Կ
	TFutureFtdcPasswordKeyType	MacKey;
};

///����ǩ��֪ͨ
struct CFutureFtdcNotifyFutureSignOutField
{
	///ҵ������
	TFutureFtdcTradeCodeType	TradeCode;
	///���д���
	TFutureFtdcBankIDType	BankID;
	///���з�֧��������
	TFutureFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TFutureFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TFutureFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TFutureFtdcTradeDateType	TradeDate;
	///����ʱ��
	TFutureFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TFutureFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TFutureFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TFutureFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TFutureFtdcLastFragmentType	LastFragment;
	///�Ự��
	TFutureFtdcSessionIDType	SessionID;
	///��װ���
	TFutureFtdcInstallIDType	InstallID;
	///�û���ʶ
	TFutureFtdcUserIDType	UserID;
	///ժҪ
	TFutureFtdcDigestType	Digest;
	///���ִ���
	TFutureFtdcCurrencyIDType	CurrencyID;
	///������־
	TFutureFtdcDeviceIDType	DeviceID;
	///�ڻ���˾���б���
	TFutureFtdcBankCodingForFutureType	BrokerIDByBank;
	///���׹�Ա
	TFutureFtdcOperNoType	OperNo;
	///������
	TFutureFtdcRequestIDType	RequestID;
	///����ID
	TFutureFtdcTIDType	TID;
	///�������
	TFutureFtdcErrorIDType	ErrorID;
	///������Ϣ
	TFutureFtdcErrorMsgType	ErrorMsg;
};

///���׺��������ڱ��̷�����Կͬ����������֪ͨ
struct CFutureFtdcNotifySyncKeyField
{
	///ҵ������
	TFutureFtdcTradeCodeType	TradeCode;
	///���д���
	TFutureFtdcBankIDType	BankID;
	///���з�֧��������
	TFutureFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TFutureFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TFutureFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TFutureFtdcTradeDateType	TradeDate;
	///����ʱ��
	TFutureFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TFutureFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TFutureFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TFutureFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TFutureFtdcLastFragmentType	LastFragment;
	///�Ự��
	TFutureFtdcSessionIDType	SessionID;
	///��װ���
	TFutureFtdcInstallIDType	InstallID;
	///�û���ʶ
	TFutureFtdcUserIDType	UserID;
	///���׺��ĸ����ڱ��̵���Ϣ
	TFutureFtdcAddInfoType	Message;
	///������־
	TFutureFtdcDeviceIDType	DeviceID;
	///�ڻ���˾���б���
	TFutureFtdcBankCodingForFutureType	BrokerIDByBank;
	///���׹�Ա
	TFutureFtdcOperNoType	OperNo;
	///������
	TFutureFtdcRequestIDType	RequestID;
	///����ID
	TFutureFtdcTIDType	TID;
	///�������
	TFutureFtdcErrorIDType	ErrorID;
	///������Ϣ
	TFutureFtdcErrorMsgType	ErrorMsg;
};

///�����ѯ����ǩԼ��ϵ
struct CFutureFtdcQryAccountregisterField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ�����ʺ�
	TFutureFtdcAccountIDType	AccountID;
	///���б���
	TFutureFtdcBankIDType	BankID;
};

///�ͻ���������Ϣ��
struct CFutureFtdcAccountregisterField
{
	///��������
	TFutureFtdcTradeDateType	TradeDay;
	///���б���
	TFutureFtdcBankIDType	BankID;
	///���з�֧��������
	TFutureFtdcBankBrchIDType	BankBranchID;
	///�����ʺ�
	TFutureFtdcBankAccountType	BankAccount;
	///�ڻ���˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///�ڻ���˾��֧��������
	TFutureFtdcFutureBranchIDType	BrokerBranchID;
	///Ͷ�����ʺ�
	TFutureFtdcAccountIDType	AccountID;
	///֤������
	TFutureFtdcIdCardTypeType	IdCardType;
	///֤������
	TFutureFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///�ͻ�����
	TFutureFtdcIndividualNameType	CustomerName;
	///���ִ���
	TFutureFtdcCurrencyIDType	CurrencyID;
	///���������
	TFutureFtdcOpenOrDestroyType	OpenOrDestroy;
	///ǩԼ����
	TFutureFtdcTradeDateType	RegDate;
	///��Լ����
	TFutureFtdcTradeDateType	OutDate;
	///����ID
	TFutureFtdcTIDType	TID;
	///�ͻ�����
	TFutureFtdcCustTypeType	CustType;
	///�����ʺ�����
	TFutureFtdcBankAccTypeType	BankAccType;
};

///���ڿ�����Ϣ
struct CFutureFtdcOpenAccountField
{
	///ҵ������
	TFutureFtdcTradeCodeType	TradeCode;
	///���д���
	TFutureFtdcBankIDType	BankID;
	///���з�֧��������
	TFutureFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TFutureFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TFutureFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TFutureFtdcTradeDateType	TradeDate;
	///����ʱ��
	TFutureFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TFutureFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TFutureFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TFutureFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TFutureFtdcLastFragmentType	LastFragment;
	///�Ự��
	TFutureFtdcSessionIDType	SessionID;
	///�ͻ�����
	TFutureFtdcIndividualNameType	CustomerName;
	///֤������
	TFutureFtdcIdCardTypeType	IdCardType;
	///֤������
	TFutureFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///�Ա�
	TFutureFtdcGenderType	Gender;
	///���Ҵ���
	TFutureFtdcCountryCodeType	CountryCode;
	///�ͻ�����
	TFutureFtdcCustTypeType	CustType;
	///��ַ
	TFutureFtdcAddressType	Address;
	///�ʱ�
	TFutureFtdcZipCodeType	ZipCode;
	///�绰����
	TFutureFtdcTelephoneType	Telephone;
	///�ֻ�
	TFutureFtdcMobilePhoneType	MobilePhone;
	///����
	TFutureFtdcFaxType	Fax;
	///�����ʼ�
	TFutureFtdcEMailType	EMail;
	///�ʽ��˻�״̬
	TFutureFtdcMoneyAccountStatusType	MoneyAccountStatus;
	///�����ʺ�
	TFutureFtdcBankAccountType	BankAccount;
	///��������
	TFutureFtdcPasswordType	BankPassWord;
	///Ͷ�����ʺ�
	TFutureFtdcAccountIDType	AccountID;
	///�ڻ�����
	TFutureFtdcPasswordType	Password;
	///��װ���
	TFutureFtdcInstallIDType	InstallID;
	///��֤�ͻ�֤�������־
	TFutureFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///���ִ���
	TFutureFtdcCurrencyIDType	CurrencyID;
	///�㳮��־
	TFutureFtdcCashExchangeCodeType	CashExchangeCode;
	///ժҪ
	TFutureFtdcDigestType	Digest;
	///�����ʺ�����
	TFutureFtdcBankAccTypeType	BankAccType;
	///������־
	TFutureFtdcDeviceIDType	DeviceID;
	///�ڻ���λ�ʺ�����
	TFutureFtdcBankAccTypeType	BankSecuAccType;
	///�ڻ���˾���б���
	TFutureFtdcBankCodingForFutureType	BrokerIDByBank;
	///�ڻ���λ�ʺ�
	TFutureFtdcBankAccountType	BankSecuAcc;
	///���������־
	TFutureFtdcPwdFlagType	BankPwdFlag;
	///�ڻ��ʽ�����˶Ա�־
	TFutureFtdcPwdFlagType	SecuPwdFlag;
	///���׹�Ա
	TFutureFtdcOperNoType	OperNo;
	///����ID
	TFutureFtdcTIDType	TID;
	///�û���ʶ
	TFutureFtdcUserIDType	UserID;
	///�������
	TFutureFtdcErrorIDType	ErrorID;
	///������Ϣ
	TFutureFtdcErrorMsgType	ErrorMsg;
};

///����������Ϣ
struct CFutureFtdcCancelAccountField
{
	///ҵ������
	TFutureFtdcTradeCodeType	TradeCode;
	///���д���
	TFutureFtdcBankIDType	BankID;
	///���з�֧��������
	TFutureFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TFutureFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TFutureFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TFutureFtdcTradeDateType	TradeDate;
	///����ʱ��
	TFutureFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TFutureFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TFutureFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TFutureFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TFutureFtdcLastFragmentType	LastFragment;
	///�Ự��
	TFutureFtdcSessionIDType	SessionID;
	///�ͻ�����
	TFutureFtdcIndividualNameType	CustomerName;
	///֤������
	TFutureFtdcIdCardTypeType	IdCardType;
	///֤������
	TFutureFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///�Ա�
	TFutureFtdcGenderType	Gender;
	///���Ҵ���
	TFutureFtdcCountryCodeType	CountryCode;
	///�ͻ�����
	TFutureFtdcCustTypeType	CustType;
	///��ַ
	TFutureFtdcAddressType	Address;
	///�ʱ�
	TFutureFtdcZipCodeType	ZipCode;
	///�绰����
	TFutureFtdcTelephoneType	Telephone;
	///�ֻ�
	TFutureFtdcMobilePhoneType	MobilePhone;
	///����
	TFutureFtdcFaxType	Fax;
	///�����ʼ�
	TFutureFtdcEMailType	EMail;
	///�ʽ��˻�״̬
	TFutureFtdcMoneyAccountStatusType	MoneyAccountStatus;
	///�����ʺ�
	TFutureFtdcBankAccountType	BankAccount;
	///��������
	TFutureFtdcPasswordType	BankPassWord;
	///Ͷ�����ʺ�
	TFutureFtdcAccountIDType	AccountID;
	///�ڻ�����
	TFutureFtdcPasswordType	Password;
	///��װ���
	TFutureFtdcInstallIDType	InstallID;
	///��֤�ͻ�֤�������־
	TFutureFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///���ִ���
	TFutureFtdcCurrencyIDType	CurrencyID;
	///�㳮��־
	TFutureFtdcCashExchangeCodeType	CashExchangeCode;
	///ժҪ
	TFutureFtdcDigestType	Digest;
	///�����ʺ�����
	TFutureFtdcBankAccTypeType	BankAccType;
	///������־
	TFutureFtdcDeviceIDType	DeviceID;
	///�ڻ���λ�ʺ�����
	TFutureFtdcBankAccTypeType	BankSecuAccType;
	///�ڻ���˾���б���
	TFutureFtdcBankCodingForFutureType	BrokerIDByBank;
	///�ڻ���λ�ʺ�
	TFutureFtdcBankAccountType	BankSecuAcc;
	///���������־
	TFutureFtdcPwdFlagType	BankPwdFlag;
	///�ڻ��ʽ�����˶Ա�־
	TFutureFtdcPwdFlagType	SecuPwdFlag;
	///���׹�Ա
	TFutureFtdcOperNoType	OperNo;
	///����ID
	TFutureFtdcTIDType	TID;
	///�û���ʶ
	TFutureFtdcUserIDType	UserID;
	///�������
	TFutureFtdcErrorIDType	ErrorID;
	///������Ϣ
	TFutureFtdcErrorMsgType	ErrorMsg;
};

///���ڱ�������˺���Ϣ
struct CFutureFtdcChangeAccountField
{
	///ҵ������
	TFutureFtdcTradeCodeType	TradeCode;
	///���д���
	TFutureFtdcBankIDType	BankID;
	///���з�֧��������
	TFutureFtdcBankBrchIDType	BankBranchID;
	///���̴���
	TFutureFtdcBrokerIDType	BrokerID;
	///���̷�֧��������
	TFutureFtdcFutureBranchIDType	BrokerBranchID;
	///��������
	TFutureFtdcTradeDateType	TradeDate;
	///����ʱ��
	TFutureFtdcTradeTimeType	TradeTime;
	///������ˮ��
	TFutureFtdcBankSerialType	BankSerial;
	///����ϵͳ���� 
	TFutureFtdcTradeDateType	TradingDay;
	///����ƽ̨��Ϣ��ˮ��
	TFutureFtdcSerialType	PlateSerial;
	///����Ƭ��־
	TFutureFtdcLastFragmentType	LastFragment;
	///�Ự��
	TFutureFtdcSessionIDType	SessionID;
	///�ͻ�����
	TFutureFtdcIndividualNameType	CustomerName;
	///֤������
	TFutureFtdcIdCardTypeType	IdCardType;
	///֤������
	TFutureFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///�Ա�
	TFutureFtdcGenderType	Gender;
	///���Ҵ���
	TFutureFtdcCountryCodeType	CountryCode;
	///�ͻ�����
	TFutureFtdcCustTypeType	CustType;
	///��ַ
	TFutureFtdcAddressType	Address;
	///�ʱ�
	TFutureFtdcZipCodeType	ZipCode;
	///�绰����
	TFutureFtdcTelephoneType	Telephone;
	///�ֻ�
	TFutureFtdcMobilePhoneType	MobilePhone;
	///����
	TFutureFtdcFaxType	Fax;
	///�����ʼ�
	TFutureFtdcEMailType	EMail;
	///�ʽ��˻�״̬
	TFutureFtdcMoneyAccountStatusType	MoneyAccountStatus;
	///�����ʺ�
	TFutureFtdcBankAccountType	BankAccount;
	///��������
	TFutureFtdcPasswordType	BankPassWord;
	///�������ʺ�
	TFutureFtdcBankAccountType	NewBankAccount;
	///����������
	TFutureFtdcPasswordType	NewBankPassWord;
	///Ͷ�����ʺ�
	TFutureFtdcAccountIDType	AccountID;
	///�ڻ�����
	TFutureFtdcPasswordType	Password;
	///�����ʺ�����
	TFutureFtdcBankAccTypeType	BankAccType;
	///��װ���
	TFutureFtdcInstallIDType	InstallID;
	///��֤�ͻ�֤�������־
	TFutureFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///���ִ���
	TFutureFtdcCurrencyIDType	CurrencyID;
	///�ڻ���˾���б���
	TFutureFtdcBankCodingForFutureType	BrokerIDByBank;
	///���������־
	TFutureFtdcPwdFlagType	BankPwdFlag;
	///�ڻ��ʽ�����˶Ա�־
	TFutureFtdcPwdFlagType	SecuPwdFlag;
	///����ID
	TFutureFtdcTIDType	TID;
	///ժҪ
	TFutureFtdcDigestType	Digest;
	///�������
	TFutureFtdcErrorIDType	ErrorID;
	///������Ϣ
	TFutureFtdcErrorMsgType	ErrorMsg;
};

///�ֱ����Ľ���Ȩ��
struct CFutureFtdcUserRightsAssignField
{
	///Ӧ�õ�Ԫ����
	TFutureFtdcBrokerIDType	BrokerID;
	///�û�����
	TFutureFtdcUserIDType	UserID;
	///�������Ĵ���
	TFutureFtdcDRIdentityIDType	DRIdentityID;
};

///���ù�˾�Ƿ����ڱ���ʾ�Ľ���Ȩ��
struct CFutureFtdcBrokerUserRightAssignField
{
	///Ӧ�õ�Ԫ����
	TFutureFtdcBrokerIDType	BrokerID;
	///�������Ĵ���
	TFutureFtdcDRIdentityIDType	DRIdentityID;
	///�ܷ���
	TFutureFtdcBoolType	Tradeable;
};

///�ֱ�����ת������
struct CFutureFtdcDRTransferField
{
	///ԭ�������Ĵ���
	TFutureFtdcDRIdentityIDType	OrigDRIdentityID;
	///Ŀ�꽻�����Ĵ���
	TFutureFtdcDRIdentityIDType	DestDRIdentityID;
	///ԭӦ�õ�Ԫ����
	TFutureFtdcBrokerIDType	OrigBrokerID;
	///Ŀ�����õ�Ԫ����
	TFutureFtdcBrokerIDType	DestBrokerID;
};

///ѯ��
struct CFutureFtdcForQuoteField
{
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
	///�Ự���
	TFutureFtdcSessionIDType	SessionID;
	///��������
	TFutureFtdcOrderRefType	OrderRef;
	///���ر������
	TFutureFtdcOrderLocalIDType	OrderLocalID;
	///�û�����
	TFutureFtdcTraderIDType	TraderID;
	///��װ���
	TFutureFtdcInstallIDType	InstallID;
	///��Ա����
	TFutureFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TFutureFtdcClientIDType	ClientID;
	///�û�����
	TFutureFtdcUserIDType	UserID;
	///ѯ��ʱ��
	TFutureFtdcTimeType	ReqForQuoteTime;
	///ѯ�۱��
	TFutureFtdcOrderSysIDType	ReqForQuoteID;
	///������
	TFutureFtdcDateType	TradingDay;
};

///ѯ������
struct CFutureFtdcInputForQuoteField
{
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
	///�Ự���
	TFutureFtdcSessionIDType	SessionID;
	///��������
	TFutureFtdcOrderRefType	OrderRef;
	///���ر������
	TFutureFtdcOrderLocalIDType	OrderLocalID;
	///�û�����
	TFutureFtdcTraderIDType	TraderID;
	///��װ���
	TFutureFtdcInstallIDType	InstallID;
	///��Ա����
	TFutureFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TFutureFtdcClientIDType	ClientID;
	///�û�����
	TFutureFtdcUserIDType	UserID;
	///ѯ��ʱ��
	TFutureFtdcTimeType	ReqForQuoteTime;
};

///������ѯ������
struct CFutureFtdcExchRspForQuoteField
{
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
	///�Ự���
	TFutureFtdcSessionIDType	SessionID;
	///��������
	TFutureFtdcOrderRefType	OrderRef;
	///���ر������
	TFutureFtdcOrderLocalIDType	OrderLocalID;
	///�û�����
	TFutureFtdcTraderIDType	TraderID;
	///��װ���
	TFutureFtdcInstallIDType	InstallID;
	///��Ա����
	TFutureFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TFutureFtdcClientIDType	ClientID;
	///�û�����
	TFutureFtdcUserIDType	UserID;
	///ѯ��ʱ��
	TFutureFtdcTimeType	ReqForQuoteTime;
};

///������ѯ�۴���
struct CFutureFtdcErrRtnExchRtnForQuoteField
{
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///��Լ����
	TFutureFtdcInstrumentIDType	InstrumentID;
	///�Ự���
	TFutureFtdcSessionIDType	SessionID;
	///��������
	TFutureFtdcOrderRefType	OrderRef;
	///���ر������
	TFutureFtdcOrderLocalIDType	OrderLocalID;
	///�û�����
	TFutureFtdcTraderIDType	TraderID;
	///��װ���
	TFutureFtdcInstallIDType	InstallID;
	///��Ա����
	TFutureFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TFutureFtdcClientIDType	ClientID;
	///�û�����
	TFutureFtdcUserIDType	UserID;
	///ѯ��ʱ��
	TFutureFtdcTimeType	ReqForQuoteTime;
	///�������
	TFutureFtdcErrorIDType	ErrorID;
	///������Ϣ
	TFutureFtdcErrorMsgType	ErrorMsg;
};

///���������۴���
struct CFutureFtdcExchangeQuoteInsertErrorField
{
	///���͹�˾����
	TFutureFtdcBrokerIDType	BrokerID;
	///����������
	TFutureFtdcExchangeIDType	ExchangeID;
	///��Ա����
	TFutureFtdcParticipantIDType	ParticipantID;
	///����������Ա����
	TFutureFtdcTraderIDType	TraderID;
	///��װ���
	TFutureFtdcInstallIDType	InstallID;
	///���ر������
	TFutureFtdcOrderLocalIDType	QuoteLocalID;
	///�������
	TFutureFtdcErrorIDType	ErrorID;
	///������Ϣ
	TFutureFtdcErrorMsgType	ErrorMsg;
	///�ͻ�����
	TFutureFtdcClientIDType	ClientID;
	///Ͷ���ߴ���
	TFutureFtdcInvestorIDType	InvestorID;
	///ҵ��Ԫ
	TFutureFtdcBusinessUnitType	BusinessUnit;
};

///UDP�鲥����Ϣ
struct CFutureFtdcMulticastGroupInfoField
{
	///�鲥��IP��ַ
	TFutureFtdcIPAddressType	GroupIP;
	///�鲥��IP�˿�
	TFutureFtdcIPPortType	GroupPort;
	///Դ��ַ
	TFutureFtdcIPAddressType	SourceIP;
};


#pragma pack(pop)

#endif
