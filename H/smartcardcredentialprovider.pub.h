struct <lambda_05f501b124c2b2e6072c19adaef663d2>
{
	operator()();
};

struct <lambda_07d1eaa7b6f95515f3978d3d63fcf8f4>
{
	operator()();
};

struct <lambda_0d8b725cb6ed8297a38594a0396f5f23>
{
	operator()();
};

struct <lambda_0e20ab316bafe8be5fdb08b842ebe4fc>
{
	operator()();
};

struct <lambda_1039673b7fa2f17d3e2dbc22f2ceb28e>
{
	operator()();
};

struct <lambda_10d14d2aa9b19bb6585e6b3a8f617d5d>
{
	operator()();
};

struct <lambda_17d93e879a5d23fb9c663a83cf0ec3f0>
{
	operator()();
};

struct <lambda_2e445aad48175f22ad2967d839d47712>
{
	operator()();
};

struct <lambda_33f03f200eb3e63d1c19041cd8515d1e>
{
	operator()();
};

struct <lambda_45035db8fca15bca06122f6b29bacda3>
{
	operator()();
};

struct <lambda_4811322468db3cd2e836ce2d35578310>
{
	operator()();
};

struct <lambda_547a7039eb7f15cdc2cae41ce0c8c3de>
{
	operator()();
};

struct <lambda_6056c4348bdadbc954f1df3fb4662824>
{
	operator()();
};

struct <lambda_635d3740924a0f8f3eab06764fb97fd5>
{
	operator()();
};

struct <lambda_68dd3b13c0d06b16c842045b699e863f>
{
	operator()();
};

struct <lambda_6de4c10b8f18b505381e2663f9cf7546>
{
	operator()();
};

struct <lambda_72daf211825e20ead17ba7e22a8ed8b4>
{
	operator()();
};

struct <lambda_827b061743a40a040f5742e04aa988f6>
{
	operator()();
};

struct <lambda_82872ac41f2596c097f05dc7f9b77730>
{
	operator()();
};

struct <lambda_87d7c06c3e41b383a6474be33e085def>
{
	operator()();
};

struct <lambda_8d1db34eb89327a18ed8463787014e8c>
{
	operator()();
};

struct <lambda_9aab683e1d33aabed6731ae6d600d2ba>
{
	operator()();
};

struct <lambda_b57382d3b94ffc84884ea5207e71ff36>
{
	operator()();
};

struct <lambda_b725cf2e52301b5c3fa49ab5be999f25>
{
	operator()();
};

struct <lambda_c019bdfc3fb721bebb88ff6a3773f242>
{
	operator()();
};

struct <lambda_c814fecd4b091f1948457cb450457c0c>
{
	operator()();
};

struct <lambda_d94f2b9d9e1118d28732d1f5490fa48f>
{
	operator()();
};

struct <lambda_db511c1a67f3270c1db4d97bf8b35ff9>
{
	operator()();
};

namespace ATL
{
	struct CComPtr<IStream>
	{
		~CComPtr<IStream>();
	};

};

struct AdaptorBase<ICredentialProvider,RdrSelProvider>
{
	virtual long QueryInterface(_GUID const &,void * *);
};

struct AdaptorBase<ICredentialProvider,WinRTProvider>
{
	virtual long QueryInterface(_GUID const &,void * *);
};

struct AdaptorBase<ICredentialProviderCredential,RdrSelNoReader>
{
	virtual long QueryInterface(_GUID const &,void * *);
};

struct AdaptorBase<ICredentialProviderCredential,RdrSelReader>
{
	virtual long QueryInterface(_GUID const &,void * *);
};

struct AdaptorBase<ICredentialProviderCredential,WinRTPinChangeCredential>
{
	virtual long QueryInterface(_GUID const &,void * *);
};

struct AdaptorBase<ICredentialProviderCredential,WinRTPinPromptCredential>
{
	virtual long QueryInterface(_GUID const &,void * *);
};

struct AdaptorBase<ICredentialProviderCredential,WinRTVscCreateCredential>
{
	virtual long QueryInterface(_GUID const &,void * *);
};

struct AdaptorBase<ICredentialProviderCredential,WinRTVscDestroyCredential>
{
	virtual long QueryInterface(_GUID const &,void * *);
};

struct CClassFactory
{
	virtual long CreateInstance(IUnknown *,_GUID const &,void * *);
	virtual long LockServer(int);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CCredential
{
	_PIN_UNBLOCK_TYPE _GetPinUnblockType();
	bool _IsScPnPEnabled();
	int _HasCardModule();
	long _CheckAndPersistCredentials(unsigned short const *);
	long _EnablePinReveal();
	static void _UnblockCallback(void *,unsigned char);
	unsigned long CalculatePinUnblockType();
	unsigned long GetReaderBitmap(HBITMAP__ * *);
	unsigned long _GetReaderDeviceTypeId();
	virtual long _ClearFields();
	virtual long _DoChangePasswordSerialization(_CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE *,_CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION *,unsigned short * *,_CREDENTIAL_PROVIDER_STATUS_ICON *);
	virtual long _DoChangePin();
	virtual long _DoCredSerialization(_CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE *,_CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION *,unsigned short * *,_CREDENTIAL_PROVIDER_STATUS_ICON *);
	virtual long _DoCredSerializationForSspiPfc(_CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE *,_CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION *,unsigned short * *,_CREDENTIAL_PROVIDER_STATUS_ICON *);
	virtual long _DoUnblock(unsigned short *,unsigned long);
	virtual long _EncryptPin(unsigned short *,unsigned short * *,unsigned long *);
	virtual long _GetContextString(unsigned short * *);
	virtual long _GetDeviceString(unsigned short * *);
	virtual long _GetFriendlyNameString(unsigned short * *);
	virtual long _GetUserNameString(unsigned short * *);
	virtual long _InitChallenge(unsigned short * *);
	virtual long _InitFieldStates();
	virtual long _RetrieveNewChallenge(unsigned short * *);
	void _StartUnblockTimer();
	void _StopUnblockTimer();
protected:
	CCredential(CredentialProviderVersion,CREDENTIAL_DATA *);
	long Initialize(unsigned short const *,unsigned short const *);
	virtual long Advise(ICredentialProviderCredentialEvents *);
	virtual long CommandLinkClicked(unsigned long);
	virtual long GetBitmapValue(unsigned long,HBITMAP__ * *);
	virtual long GetCheckboxValue(unsigned long,int *,unsigned short * *);
	virtual long GetComboBoxValueAt(unsigned long,unsigned long,unsigned short * *);
	virtual long GetComboBoxValueCount(unsigned long,unsigned long *,unsigned long *);
	virtual long GetFieldOptions(unsigned long,CREDENTIAL_PROVIDER_CREDENTIAL_FIELD_OPTIONS *);
	virtual long GetFieldState(unsigned long,_CREDENTIAL_PROVIDER_FIELD_STATE *,_CREDENTIAL_PROVIDER_FIELD_INTERACTIVE_STATE *);
	virtual long GetSerialization(_CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE *,_CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION *,unsigned short * *,_CREDENTIAL_PROVIDER_STATUS_ICON *);
	virtual long GetStringValue(unsigned long,unsigned short * *);
	virtual long GetSubmitButtonValue(unsigned long,unsigned long *);
	virtual long GetUserSid(unsigned short * *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long ReportResult(long,long,unsigned short * *,_CREDENTIAL_PROVIDER_STATUS_ICON *);
	virtual long SetCheckboxValue(unsigned long,int);
	virtual long SetComboBoxSelectedValue(unsigned long,unsigned long);
	virtual long SetDeselected();
	virtual long SetSelected(int *);
	virtual long SetStringValue(unsigned long,unsigned short const *);
	virtual long ShouldHideCredUISubmitButton(int *);
	virtual long UnAdvise();
	virtual long Validate(int *,unsigned short * *,_CREDENTIAL_PROVIDER_STATUS_ICON *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~CCredential();
};

class CExternalPinHelper
{
	CExternalPinHelper(CSmartcardReaderData *,CSmartcardReaderCredentialData *);
	static int _CloseChildWindow(HWND__ *,__int64);
	static int fExiting;
	static void _sCancelPINVerification(_TP_CALLBACK_INSTANCE *,void *,_TP_WORK *);
	static void _sProcessPINVerification(_TP_CALLBACK_INSTANCE *,void *,_TP_WORK *);
	virtual long _FinalizeThreadPoolLibrary();
	virtual long _InitializeThreadPoolLibrary();
	virtual long _MarshalSessionPin(unsigned char *,unsigned long,unsigned short * *);
	void _vCancelPINVerification();
	void _vProcessPINVerification();
	~CExternalPinHelper();
public:
	virtual long GetContextString(unsigned short * *);
	virtual long IsCredExternalPinProtected(int *);
	virtual long PrepareForVerification(unsigned long,_CREDENTIAL_PROVIDER_USAGE_SCENARIO,ICredentialProviderCredential *,ISCProviderEvents *);
	virtual long ProcessError(long *);
	virtual long QueryPinInformationFromCard();
	virtual long ValidateExternalPin(HWND__ *);
	virtual long ValidateExternalPinCancelled();
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CPinCredential
{
	CPinCredential();
	int _GetSecurePinRegValue();
	long Initialize(_USER_MATCH_DATA *,int);
	long _ClearPin();
	long _DisplayMoreInfo();
	long _FindCard();
	long _PackageReturnData(ReturnData,unsigned char *,unsigned long,unsigned char * *,unsigned long *);
	long _ProcessError(unsigned long,unsigned long,unsigned short * *);
	long _ProcessResourceFormatString(DeviceIndependentResourceId::type,unsigned short * *,...);
	unsigned long GetReaderBitmap(HBITMAP__ * *);
	virtual ~CPinCredential();
public:
	virtual long Advise(ICredentialProviderCredentialEvents *);
	virtual long CommandLinkClicked(unsigned long);
	virtual long GetBitmapValue(unsigned long,HBITMAP__ * *);
	virtual long GetCheckboxValue(unsigned long,int *,unsigned short * *);
	virtual long GetComboBoxValueAt(unsigned long,unsigned long,unsigned short * *);
	virtual long GetComboBoxValueCount(unsigned long,unsigned long *,unsigned long *);
	virtual long GetFieldOptions(unsigned long,CREDENTIAL_PROVIDER_CREDENTIAL_FIELD_OPTIONS *);
	virtual long GetFieldState(unsigned long,_CREDENTIAL_PROVIDER_FIELD_STATE *,_CREDENTIAL_PROVIDER_FIELD_INTERACTIVE_STATE *);
	virtual long GetSerialization(_CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE *,_CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION *,unsigned short * *,_CREDENTIAL_PROVIDER_STATUS_ICON *);
	virtual long GetStringValue(unsigned long,unsigned short * *);
	virtual long GetSubmitButtonValue(unsigned long,unsigned long *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long ReportResult(long,long,unsigned short * *,_CREDENTIAL_PROVIDER_STATUS_ICON *);
	virtual long SetCheckboxValue(unsigned long,int);
	virtual long SetComboBoxSelectedValue(unsigned long,unsigned long);
	virtual long SetDeselected();
	virtual long SetSelected(int *);
	virtual long SetStringValue(unsigned long,unsigned short const *);
	virtual long UnAdvise();
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CPinProvider
{
	CPinProvider();
	long Initialize();
	virtual long Advise(ICredentialProviderEvents *,unsigned __int64);
	virtual long GetCredentialAt(unsigned long,ICredentialProviderCredential * *);
	virtual long GetCredentialCount(unsigned long *,unsigned long *,int *);
	virtual long GetFieldDescriptorAt(unsigned long,_CREDENTIAL_PROVIDER_FIELD_DESCRIPTOR * *);
	virtual long GetFieldDescriptorCount(unsigned long *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SetSerialization(_CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION const *);
	virtual long SetUsageScenario(_CREDENTIAL_PROVIDER_USAGE_SCENARIO,unsigned long);
	virtual long UnAdvise();
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	void _ClearUserMatchData();
	~CPinProvider();
};

class CProvider
{
	CProvider(CredentialProviderVersion);
	long Initialize();
	long _AppendCredentialToDPA(CREDENTIAL_DATA &,bool,unsigned short *,bool,bool);
	long _InitializeForSspiPfc(unsigned char *,unsigned long,unsigned char * *,unsigned long *);
	long _InternalStartRMSThreadCallback();
	long _LoadPersistedCredentials(unsigned char * *,unsigned long *);
	long _SetTargetName(_UNICODE_STRING *);
	long _StartAsyncEventThreads();
	long _StartReaderMonitorThread();
	static void _StartRMSThreadCallback(void *,unsigned char);
	static void _sAsyncEventCallback(void *,unsigned char);
	static void _sAsyncProcessingCallback(void *,unsigned char);
	static void _sIssueCredentialsChangedCallback(_TP_CALLBACK_INSTANCE *,void *,_TP_WAIT *,long);
	static void _sPnPMonitorThreadCallback(_TP_CALLBACK_INSTANCE *,void *,_TP_WORK *);
	virtual long Advise(ICredentialProviderEvents *,unsigned __int64);
	virtual long GetCredentialAt(unsigned long,ICredentialProviderCredential * *);
	virtual long GetCredentialCount(unsigned long *,unsigned long *,int *);
	virtual long GetFieldDescriptorAt(unsigned long,_CREDENTIAL_PROVIDER_FIELD_DESCRIPTOR * *);
	virtual long GetFieldDescriptorCount(unsigned long *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SetDisplayState(_CREDENTIAL_PROVIDER_DISPLAY_STATE_FLAGS);
	virtual long SetSerialization(_CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION const *);
	virtual long SetUsageScenario(_CREDENTIAL_PROVIDER_USAGE_SCENARIO,unsigned long);
	virtual long SetUserArray(ICredentialProviderUserArray *);
	virtual long StartPnPMonitorInternal(unsigned short const *);
	virtual long UnAdvise();
	virtual long _BuildChangePasswordTile(CSmartcardReaderData *);
	virtual long _BuildCredentialList();
	virtual long _BuildDuplicateTile(CREDENTIAL_DATA &);
	virtual long _BuildDuplicateTileInternal(CREDENTIAL_DATA &);
	virtual long _BuildErrorTile(CSmartcardReaderData *);
	virtual long _BuildExternalTiles(int,int *);
	virtual long _BuildLogonTiles(CSmartcardReaderData *);
	virtual long _BuildNoCertsOnCardTile(CSmartcardReaderData *);
	virtual long _BuildNoReadersTile();
	virtual long _BuildReaderTile(CSmartcardReaderData *,void *);
	virtual long _BuildSingleLogonTile(CSmartcardReaderData *,unsigned short const *,unsigned short *,int &,CREDENTIAL_DATA &,int &);
	virtual long _BuildUserWithNoCertsTile(void *,int);
	virtual long _ClearExternalCred();
	virtual long _FinalizeThreadPoolLibrary();
	virtual long _ForceTileAsLastSelected(CREDENTIAL_DATA const &);
	virtual long _GetReaderDataMetrics(int *,unsigned long *,unsigned long *,int *,unsigned long *);
	virtual long _InitializeThreadPoolLibrary();
	virtual long _ResetKnownTilesAndSetLastLoggedOnCertificateHash();
	virtual long _SetExternalCred(_CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION const *);
	virtual long _SetFilteredProviderUserSidArray();
	virtual long _SetFilteredProviderUserSidArrayInternal();
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	void _ConfigureFilter(int);
	void _IssueCredentialsChanged();
	void _LookForExternalCred(_READER_MONITOR_STATE *,_READER_LIST_ITEM *);
	void _MarkVscHasUsersWithExpiredCerts(CSmartcardReaderData *);
	void _ResetIgnoreCredentialsChanged();
	void _vAsyncEventCallback(CProvider::EventType);
	void _vIssueCredentialsChangedCallback();
	~CProvider();
public:
	virtual long IgnoreCredentialsChanged();
	virtual long PnPDetectionCompleted(int *);
	virtual long ReportResult(int);
	virtual long SetSelected(int,TileData const &);
	virtual long StartPnPMonitor(unsigned short const *);
	virtual long TriggerExternalPinLogon(unsigned long);
	virtual long TriggerTileDeSelection();
	virtual void TriggerAction();
};

class CSerialization
{
	CSerialization();
	long Initialize(_CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION const *,int);
	long _CopyUnicodeString(unsigned __int64,unsigned short,unsigned short,unsigned short * *);
	~CSerialization();
public:
	ExternalCredType CredType();
	long CSPInfoFlags(unsigned long *);
	long CardName(unsigned short * *);
	long Container(unsigned short * *);
	long Domain(unsigned short * *);
	long KeySpec(unsigned long *);
	long Pin(unsigned short *,unsigned long);
	long ProviderName(unsigned short * *);
	long ReaderName(unsigned short * *);
	long User(unsigned short * *);
	void ReleaseReference();
};

class CSmartCardUser
{
	errorlib::scoped_error<winerror_error::tag> I_AddUserWithVscExpiredCredential(void *);
	errorlib::scoped_error<winerror_error::tag> I_DoesUserHaveVscExpiredCredential(void *,int *);
	errorlib::scoped_error<winerror_error::tag> I_GetFirstCredentialProviderUser(void * *);
	errorlib::scoped_error<winerror_error::tag> I_GetFirstUserWithNoCredential(void * *);
	errorlib::scoped_error<winerror_error::tag> I_GetNextCredentialProviderUser(void * *);
	errorlib::scoped_error<winerror_error::tag> I_GetNextUserWithNoCredential(void * *);
	errorlib::scoped_error<winerror_error::tag> I_IsSmartCardLastProviderForAnyUserInUserArray(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
	errorlib::scoped_error<winerror_error::tag> I_IsSmartCardLastProviderForUser(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,int *);
	errorlib::scoped_error<winerror_error::tag> I_MarkUserWithCredential(void *);
	unsigned long I_FindUserSidMatch(std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::vector<unsigned char,std::allocator<unsigned char> > const ,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > > >,void * *);
	unsigned long I_GetKnownUserFirst(unsigned char *,unsigned long,void * *);
	unsigned long I_InitializeKnownSmartCardUsers();
	unsigned long I_InitilaizeUserLastProvider();
	unsigned long I_ReadUPN_DNHashFromUserSID(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &);
	unsigned long I_SetProviderUserSidArray(std::vector<void *,std::allocator<void *> > const &);
public:
	unsigned long GetKnownUserFirst(unsigned char *,unsigned long,void * *);
	unsigned long GetKnownUserNext(unsigned char *,unsigned long,void * *);
	unsigned long GetSmartCardCredentialProviderUsers(std::vector<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::allocator<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > &);
	unsigned long Initialize(std::vector<void *,std::allocator<void *> > const &);
};

class CSmartcardReaderCredentialData
{
	CSmartcardReaderCredentialData();
	long Initialize(CSerialization *,CSmartcardReaderData *);
	long Initialize(_SC_CRED_LIST_ITEM const *,CSmartcardReaderData *);
	static unsigned short const * GetUPNFromNgcSelfSignedCert(unsigned short *);
	~CSmartcardReaderCredentialData();
public:
	CExternalPinHelper * GetExternalPinHelper();
	_CERT_CONTEXT const * GetCertContext();
	_PIN_INFO * GetPinInfo();
	int HasExpiredCert();
	int IsSelfSignedCert();
	long CheckForExternalPin(int,CSmartcardReaderData *);
	unsigned char * GetUPNDNHash();
	unsigned long GetKeySpec();
	unsigned long GetPinId();
	unsigned long GetTemplateVersion();
	unsigned long GetUPNDNHashSize();
	unsigned short const * GetCommonName();
	unsigned short const * GetContainer();
	unsigned short const * GetDomain();
	unsigned short const * GetTemplate();
	unsigned short const * GetUPN();
	unsigned short const * GetUser();
	void ReleaseReference();
	void SetExpiredCert();
};

class CSmartcardReaderData
{
	CSmartcardReaderData();
	int _HasLongerExpiration(CSmartcardReaderCredentialData *,CSmartcardReaderCredentialData *);
	int _IsDefaultContainer(CSmartcardReaderCredentialData *);
	int _IsHandledByNgcCredProv(_CREDENTIAL_PROVIDER_USAGE_SCENARIO,unsigned long,CSmartcardReaderCredentialData *);
	int _IsSameTemplate(CSmartcardReaderCredentialData *,CSmartcardReaderCredentialData *);
	int _IsSameUser(CSmartcardReaderCredentialData *,CSmartcardReaderCredentialData *);
	long Initialize(CSerialization *);
	long Initialize(_READER_LIST_ITEM const *);
	~CSmartcardReaderData();
public:
	CSmartcardReaderCredentialData * GetCredentialData(int);
	CSmartcardReaderCredentialData * GetVscExpiredCredentialData(int);
	ReaderState GetReaderState();
	int FoundTimeInvalidCertificates();
	int GetCredentialCount();
	int GetVscExpiredCredentialCount();
	long Filter(_CREDENTIAL_PROVIDER_USAGE_SCENARIO,unsigned long,_FILTER_CONFIG *);
	unsigned long GetActivityCount();
	unsigned long GetReaderDeviceTypeId();
	unsigned long GetReaderError();
	unsigned short const * GetCardName();
	unsigned short const * GetProviderName();
	unsigned short const * GetReaderName();
	void AddReference();
	void ReleaseReference();
};

struct CSynchLock
{
	CSynchLock(unsigned long);
	~CSynchLock();
};

class CTCoAllocPolicy
{
	static unsigned __int64 _CoTaskMemSize(void *);
};

namespace CardModule
{
	class CardModuleWrapper
	{
	protected:
		long ValidateCardData();
		long VerifyState();
		static void * CardDataAlloc(unsigned __int64);
		static void * CardDataReAlloc(void *,unsigned __int64);
		static void CardDataFree(void *);
		void InitializeCardData();
	public:
		CardModuleWrapper();
		long AcquireContext();
		long BeginTransaction();
		long ChangePin(unsigned char const *,unsigned long,unsigned char const *,unsigned long,unsigned long *);
		long Deauthenticate(unsigned long);
		long Deinitialize();
		long DeleteContext();
		long EndTransaction(unsigned long);
		long Initialize(unsigned short const *);
		long ReadFile(char const *,char const *,std::vector<unsigned char,std::allocator<unsigned char> > *);
		long WriteFile(char const *,char const *,unsigned char const *,unsigned long);
		~CardModuleWrapper();
	};

	long CardBeginTransaction(Microsoft::WRL::Wrappers::HandleT<SCardHandleTraits> const &,unsigned long *);
	long CardEndTransaction(Microsoft::WRL::Wrappers::HandleT<SCardHandleTraits> const &,unsigned long);
	long GetCardAtr(SCARD_READERSTATEW const &,std::vector<unsigned char,std::allocator<unsigned char> > *);
	long GetCardModuleName(Microsoft::WRL::Wrappers::HandleT<SCardContextTraits> const &,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *);
	long GetCardName(Microsoft::WRL::Wrappers::HandleT<SCardContextTraits> const &,std::vector<unsigned char,std::allocator<unsigned char> > const &,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *);
	long GetReaderState(Microsoft::WRL::Wrappers::HandleT<SCardContextTraits> const &,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,SCARD_READERSTATEW *);
	long GetSCardContext(Microsoft::WRL::Wrappers::HandleT<SCardContextTraits> *);
	long GetSCardHandle(Microsoft::WRL::Wrappers::HandleT<SCardContextTraits> const &,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,Microsoft::WRL::Wrappers::HandleT<SCardHandleTraits> *,unsigned long *);
};

struct ComInterfaceImpl<ICredentialProvider,CredentialProviderAdaptor,RdrSelProvider>
{
	ComInterfaceImpl<ICredentialProvider,CredentialProviderAdaptor,RdrSelProvider>();
	virtual RdrSelProvider & GetEntity();
	virtual ~ComInterfaceImpl<ICredentialProvider,CredentialProviderAdaptor,RdrSelProvider>();
};

struct ComInterfaceImpl<ICredentialProvider,CredentialProviderAdaptor,WinRTProvider>
{
	virtual WinRTProvider & GetEntity();
	virtual ~ComInterfaceImpl<ICredentialProvider,CredentialProviderAdaptor,WinRTProvider>();
};

struct ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelNoReader>
{
	ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelNoReader>();
	virtual RdrSelNoReader & GetEntity();
	virtual ~ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelNoReader>();
};

struct ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>
{
	ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>();
	virtual RdrSelReader & GetEntity();
	virtual ~ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>();
};

struct ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,WinRTPinChangeCredential>
{
	virtual WinRTPinChangeCredential & GetEntity();
	virtual ~ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,WinRTPinChangeCredential>();
};

struct ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,WinRTPinPromptCredential>
{
	virtual WinRTPinPromptCredential & GetEntity();
	virtual ~ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,WinRTPinPromptCredential>();
};

struct ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,WinRTVscCreateCredential>
{
	virtual WinRTVscCreateCredential & GetEntity();
	virtual ~ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,WinRTVscCreateCredential>();
};

struct ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,WinRTVscDestroyCredential>
{
	virtual WinRTVscDestroyCredential & GetEntity();
	virtual ~ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,WinRTVscDestroyCredential>();
};

class CredentialProviderAdaptor<ICredentialProvider,RdrSelProvider>
{
protected:
	virtual void AcquireInterface(_GUID const &,void * *);
public:
	virtual long Advise(ICredentialProviderEvents *,unsigned __int64);
	virtual long GetCredentialAt(unsigned long,ICredentialProviderCredential * *);
	virtual long GetCredentialCount(unsigned long *,unsigned long *,int *);
	virtual long GetFieldDescriptorAt(unsigned long,_CREDENTIAL_PROVIDER_FIELD_DESCRIPTOR * *);
	virtual long GetFieldDescriptorCount(unsigned long *);
	virtual long SetSerialization(_CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION const *);
	virtual long SetUsageScenario(_CREDENTIAL_PROVIDER_USAGE_SCENARIO,unsigned long);
	virtual long UnAdvise();
	virtual ~CredentialProviderAdaptor<ICredentialProvider,RdrSelProvider>();
};

class CredentialProviderAdaptor<ICredentialProvider,WinRTProvider>
{
protected:
	virtual void AcquireInterface(_GUID const &,void * *);
public:
	virtual long Advise(ICredentialProviderEvents *,unsigned __int64);
	virtual long GetCredentialAt(unsigned long,ICredentialProviderCredential * *);
	virtual long GetCredentialCount(unsigned long *,unsigned long *,int *);
	virtual long GetFieldDescriptorAt(unsigned long,_CREDENTIAL_PROVIDER_FIELD_DESCRIPTOR * *);
	virtual long GetFieldDescriptorCount(unsigned long *);
	virtual long SetSerialization(_CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION const *);
	virtual long SetUsageScenario(_CREDENTIAL_PROVIDER_USAGE_SCENARIO,unsigned long);
	virtual long UnAdvise();
};

class CredentialProviderCredentialAdaptor<ICredentialProviderCredential,RdrSelNoReader>
{
protected:
	virtual void AcquireInterface(_GUID const &,void * *);
public:
	virtual long Advise(ICredentialProviderCredentialEvents *);
	virtual long CommandLinkClicked(unsigned long);
	virtual long GetBitmapValue(unsigned long,HBITMAP__ * *);
	virtual long GetCheckboxValue(unsigned long,int *,unsigned short * *);
	virtual long GetComboBoxValueAt(unsigned long,unsigned long,unsigned short * *);
	virtual long GetComboBoxValueCount(unsigned long,unsigned long *,unsigned long *);
	virtual long GetFieldState(unsigned long,_CREDENTIAL_PROVIDER_FIELD_STATE *,_CREDENTIAL_PROVIDER_FIELD_INTERACTIVE_STATE *);
	virtual long GetSerialization(_CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE *,_CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION *,unsigned short * *,_CREDENTIAL_PROVIDER_STATUS_ICON *);
	virtual long GetStringValue(unsigned long,unsigned short * *);
	virtual long GetSubmitButtonValue(unsigned long,unsigned long *);
	virtual long ReportResult(long,long,unsigned short * *,_CREDENTIAL_PROVIDER_STATUS_ICON *);
	virtual long SetCheckboxValue(unsigned long,int);
	virtual long SetComboBoxSelectedValue(unsigned long,unsigned long);
	virtual long SetDeselected();
	virtual long SetSelected(int *);
	virtual long SetStringValue(unsigned long,unsigned short const *);
	virtual long UnAdvise();
};

class CredentialProviderCredentialAdaptor<ICredentialProviderCredential,RdrSelReader>
{
protected:
	virtual void AcquireInterface(_GUID const &,void * *);
public:
	virtual long Advise(ICredentialProviderCredentialEvents *);
	virtual long CommandLinkClicked(unsigned long);
	virtual long GetBitmapValue(unsigned long,HBITMAP__ * *);
	virtual long GetCheckboxValue(unsigned long,int *,unsigned short * *);
	virtual long GetComboBoxValueAt(unsigned long,unsigned long,unsigned short * *);
	virtual long GetComboBoxValueCount(unsigned long,unsigned long *,unsigned long *);
	virtual long GetFieldState(unsigned long,_CREDENTIAL_PROVIDER_FIELD_STATE *,_CREDENTIAL_PROVIDER_FIELD_INTERACTIVE_STATE *);
	virtual long GetSerialization(_CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE *,_CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION *,unsigned short * *,_CREDENTIAL_PROVIDER_STATUS_ICON *);
	virtual long GetStringValue(unsigned long,unsigned short * *);
	virtual long GetSubmitButtonValue(unsigned long,unsigned long *);
	virtual long ReportResult(long,long,unsigned short * *,_CREDENTIAL_PROVIDER_STATUS_ICON *);
	virtual long SetCheckboxValue(unsigned long,int);
	virtual long SetComboBoxSelectedValue(unsigned long,unsigned long);
	virtual long SetDeselected();
	virtual long SetSelected(int *);
	virtual long SetStringValue(unsigned long,unsigned short const *);
	virtual long UnAdvise();
	virtual ~CredentialProviderCredentialAdaptor<ICredentialProviderCredential,RdrSelReader>();
};

class CredentialProviderCredentialAdaptor<ICredentialProviderCredential,WinRTPinChangeCredential>
{
protected:
	virtual void AcquireInterface(_GUID const &,void * *);
public:
	virtual long Advise(ICredentialProviderCredentialEvents *);
	virtual long CommandLinkClicked(unsigned long);
	virtual long GetBitmapValue(unsigned long,HBITMAP__ * *);
	virtual long GetCheckboxValue(unsigned long,int *,unsigned short * *);
	virtual long GetComboBoxValueAt(unsigned long,unsigned long,unsigned short * *);
	virtual long GetComboBoxValueCount(unsigned long,unsigned long *,unsigned long *);
	virtual long GetFieldState(unsigned long,_CREDENTIAL_PROVIDER_FIELD_STATE *,_CREDENTIAL_PROVIDER_FIELD_INTERACTIVE_STATE *);
	virtual long GetSerialization(_CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE *,_CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION *,unsigned short * *,_CREDENTIAL_PROVIDER_STATUS_ICON *);
	virtual long GetStringValue(unsigned long,unsigned short * *);
	virtual long GetSubmitButtonValue(unsigned long,unsigned long *);
	virtual long ReportResult(long,long,unsigned short * *,_CREDENTIAL_PROVIDER_STATUS_ICON *);
	virtual long SetCheckboxValue(unsigned long,int);
	virtual long SetComboBoxSelectedValue(unsigned long,unsigned long);
	virtual long SetDeselected();
	virtual long SetSelected(int *);
	virtual long SetStringValue(unsigned long,unsigned short const *);
	virtual long UnAdvise();
};

class CredentialProviderCredentialAdaptor<ICredentialProviderCredential,WinRTPinPromptCredential>
{
protected:
	virtual void AcquireInterface(_GUID const &,void * *);
public:
	virtual long Advise(ICredentialProviderCredentialEvents *);
	virtual long CommandLinkClicked(unsigned long);
	virtual long GetBitmapValue(unsigned long,HBITMAP__ * *);
	virtual long GetCheckboxValue(unsigned long,int *,unsigned short * *);
	virtual long GetComboBoxValueAt(unsigned long,unsigned long,unsigned short * *);
	virtual long GetComboBoxValueCount(unsigned long,unsigned long *,unsigned long *);
	virtual long GetFieldState(unsigned long,_CREDENTIAL_PROVIDER_FIELD_STATE *,_CREDENTIAL_PROVIDER_FIELD_INTERACTIVE_STATE *);
	virtual long GetSerialization(_CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE *,_CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION *,unsigned short * *,_CREDENTIAL_PROVIDER_STATUS_ICON *);
	virtual long GetStringValue(unsigned long,unsigned short * *);
	virtual long GetSubmitButtonValue(unsigned long,unsigned long *);
	virtual long ReportResult(long,long,unsigned short * *,_CREDENTIAL_PROVIDER_STATUS_ICON *);
	virtual long SetCheckboxValue(unsigned long,int);
	virtual long SetComboBoxSelectedValue(unsigned long,unsigned long);
	virtual long SetDeselected();
	virtual long SetSelected(int *);
	virtual long SetStringValue(unsigned long,unsigned short const *);
	virtual long UnAdvise();
};

class CredentialProviderCredentialAdaptor<ICredentialProviderCredential,WinRTVscCreateCredential>
{
protected:
	virtual void AcquireInterface(_GUID const &,void * *);
public:
	virtual long Advise(ICredentialProviderCredentialEvents *);
	virtual long CommandLinkClicked(unsigned long);
	virtual long GetBitmapValue(unsigned long,HBITMAP__ * *);
	virtual long GetCheckboxValue(unsigned long,int *,unsigned short * *);
	virtual long GetComboBoxValueAt(unsigned long,unsigned long,unsigned short * *);
	virtual long GetComboBoxValueCount(unsigned long,unsigned long *,unsigned long *);
	virtual long GetFieldState(unsigned long,_CREDENTIAL_PROVIDER_FIELD_STATE *,_CREDENTIAL_PROVIDER_FIELD_INTERACTIVE_STATE *);
	virtual long GetSerialization(_CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE *,_CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION *,unsigned short * *,_CREDENTIAL_PROVIDER_STATUS_ICON *);
	virtual long GetStringValue(unsigned long,unsigned short * *);
	virtual long GetSubmitButtonValue(unsigned long,unsigned long *);
	virtual long ReportResult(long,long,unsigned short * *,_CREDENTIAL_PROVIDER_STATUS_ICON *);
	virtual long SetCheckboxValue(unsigned long,int);
	virtual long SetComboBoxSelectedValue(unsigned long,unsigned long);
	virtual long SetDeselected();
	virtual long SetSelected(int *);
	virtual long SetStringValue(unsigned long,unsigned short const *);
	virtual long UnAdvise();
};

class CredentialProviderCredentialAdaptor<ICredentialProviderCredential,WinRTVscDestroyCredential>
{
protected:
	virtual void AcquireInterface(_GUID const &,void * *);
public:
	virtual long Advise(ICredentialProviderCredentialEvents *);
	virtual long CommandLinkClicked(unsigned long);
	virtual long GetBitmapValue(unsigned long,HBITMAP__ * *);
	virtual long GetCheckboxValue(unsigned long,int *,unsigned short * *);
	virtual long GetComboBoxValueAt(unsigned long,unsigned long,unsigned short * *);
	virtual long GetComboBoxValueCount(unsigned long,unsigned long *,unsigned long *);
	virtual long GetFieldState(unsigned long,_CREDENTIAL_PROVIDER_FIELD_STATE *,_CREDENTIAL_PROVIDER_FIELD_INTERACTIVE_STATE *);
	virtual long GetSerialization(_CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE *,_CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION *,unsigned short * *,_CREDENTIAL_PROVIDER_STATUS_ICON *);
	virtual long GetStringValue(unsigned long,unsigned short * *);
	virtual long GetSubmitButtonValue(unsigned long,unsigned long *);
	virtual long ReportResult(long,long,unsigned short * *,_CREDENTIAL_PROVIDER_STATUS_ICON *);
	virtual long SetCheckboxValue(unsigned long,int);
	virtual long SetComboBoxSelectedValue(unsigned long,unsigned long);
	virtual long SetDeselected();
	virtual long SetSelected(int *);
	virtual long SetStringValue(unsigned long,unsigned short const *);
	virtual long UnAdvise();
};

namespace DsNgcUtils
{
	struct KeyEnumInfo
	{
		~KeyEnumInfo();
	};

	struct NgcKeyName
	{
		NgcKeyName(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &);
		static long ParseNgcKeyNameString(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,std::vector<unsigned char,std::allocator<unsigned char> > *,_GUID *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *);
		~NgcKeyName();
	};

	long GetCallerSid(std::vector<unsigned char,std::allocator<unsigned char> > *);
};

namespace Gdiplus
{
	struct Bitmap
	{
		Bitmap(HINSTANCE__ *,unsigned short const *);
		Bitmap(IStream *,int);
		Status GetHBITMAP(Color const &,HBITMAP__ * *);
	};

	struct Image
	{
		virtual Image * Clone();
	};

};

struct GdiplusInitializer
{
	GdiplusInitializer();
	~GdiplusInitializer();
};

struct LargeIntRegMultiply<__int64,unsigned __int64>
{
	static void RegMultiplyThrow<SafeIntInternal::SafeIntExceptionHandler<SafeIntException> >(__int64 const &,unsigned __int64 const &,__int64 &);
};

struct MatchParameterReceiver
{
	~MatchParameterReceiver();
};

namespace Microsoft
{
	namespace WRL
	{
		namespace Details
		{
			void RaiseException(long,unsigned long);
		};

		namespace Wrappers
		{
			class HandleT<KeyEnumInfoTraits>
			{
			protected:
				virtual bool InternalClose();
			public:
				~HandleT<KeyEnumInfoTraits>();
			};

			class HandleT<KeyEnumStateTraits>
			{
			protected:
				virtual bool InternalClose();
			public:
				~HandleT<KeyEnumStateTraits>();
			};

			class HandleT<ModuleHandleTraits>
			{
			protected:
				virtual bool InternalClose();
			public:
				void Close();
			};

			class HandleT<SCardContextTraits>
			{
			protected:
				virtual bool InternalClose();
			public:
				void Close();
			};

			class HandleT<SCardHandleTraits>
			{
			protected:
				virtual bool InternalClose();
			public:
				void Close();
			};

		};

	};

};

namespace PinPolicy
{
	struct PinPolicyRules
	{
		long Initialize();
		long Initialize(std::vector<unsigned char,std::allocator<unsigned char> > const &);
		long ValidatePin(std::basic_string<unsigned short,std::char_traits<unsigned short>,wil::secure_allocator<unsigned short> > const &,PinValidationResult *);
		long ValidateRules();
		static bool DoesPinContainSequence(std::basic_string<unsigned short,std::char_traits<unsigned short>,wil::secure_allocator<unsigned short> > const &);
		static long ConvertFromSmartCardPinCharacterPolicyOption(Windows::Devices::SmartCards::SmartCardPinCharacterPolicyOption,_PIN_CHARACTER_POLICY_OPTION *);
	};

};

class ProviderPnPMonitor
{
	long GetReaderDeviceInstanceId(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *);
	long GetSmartCardDeviceContainerId(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,std::vector<unsigned char,std::allocator<unsigned char> > *);
	long NotifyOnUXReady(std::vector<unsigned char,std::allocator<unsigned char> > const &,IProviderPnPMonitorAction *);
	long PnPMonitorForCardInstallationInternal(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,IProviderPnPMonitorAction *);
	static void SmartCardDeviceIdCallback(HDEVQUERY__ *,void *,_DEV_QUERY_RESULT_ACTION_DATA const *);
	static void UXReadySmartCardCallback(HDEVQUERY__ *,void *,_DEV_QUERY_RESULT_ACTION_DATA const *);
};

class RdrSelCspCard
{
	errorlib::scoped_error<winerror_error::tag> CheckCardData();
	errorlib::scoped_error<winerror_error::tag> LoadCardData();
	errorlib::scoped_error<winerror_error::tag> LoadCardModule();
	errorlib::scoped_error<winerror_error::tag> TransactCard();
	static void * CspAlloc(unsigned __int64);
	static void * CspReAlloc(void *,unsigned __int64);
	static void CspFree(void *);
	void InitializeCardData();
public:
	RdrSelCspCard(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,unsigned long,unsigned long,unsigned long);
	errorlib::scoped_error<winerror_error::tag> GetCardProperty(unsigned short const *,unsigned long,std::vector<unsigned char,std::allocator<unsigned char> > *);
	errorlib::scoped_error<winerror_error::tag> GetSerialNumber(std::vector<unsigned char,std::allocator<unsigned char> > *);
	errorlib::scoped_error<winerror_error::tag> Load();
	errorlib::scoped_error<winerror_error::tag> ReadCardFile(char const *,char const *,std::vector<unsigned char,std::allocator<unsigned char> > *);
	void Clear();
	~RdrSelCspCard();
};

struct RdrSelNoReader
{
	void CommandLinkClicked(unsigned long);
	void GetBitmapValue(unsigned long,HBITMAP__ * *);
	void GetCheckboxValue(unsigned long,int *,unsigned short * *);
	void GetComboBoxValueAt(unsigned long,unsigned long,unsigned short * *);
	void GetComboBoxValueCount(unsigned long,unsigned long *,unsigned long *);
	void GetFieldState(unsigned long,_CREDENTIAL_PROVIDER_FIELD_STATE *,_CREDENTIAL_PROVIDER_FIELD_INTERACTIVE_STATE *);
	void GetSerialization(_CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE *,_CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION *,unsigned short * *,_CREDENTIAL_PROVIDER_STATUS_ICON *);
	void GetStringValue(unsigned long,unsigned short * *);
	void GetSubmitButtonValue(unsigned long,unsigned long *);
	void Initialize(RdrSelProvider *);
	void ReportResult(long,long,unsigned short * *,_CREDENTIAL_PROVIDER_STATUS_ICON *);
	void SetCheckboxValue(unsigned long,int);
	void SetComboBoxSelectedValue(unsigned long,unsigned long);
	void SetStringValue(unsigned long,unsigned short const *);
	~RdrSelNoReader();
};

class RdrSelProvider
{
	static void ReaderMonitorActionEventCallback(_TP_CALLBACK_INSTANCE *,void *,_TP_WAIT *,long);
	static void ReaderMonitorProcessingEventCallback(_TP_CALLBACK_INSTANCE *,void *,_TP_WAIT *,long);
	unsigned long GetSelectedReader();
	void HandleActionEvent();
	void RegisterReaderMonitorEventHandlers();
	void RetrieveReaders();
	void UpdateReaders();
public:
	RdrSelProvider();
	errorlib::scoped_error<hresult_error::tag> NotifyCredentialChanges(bool);
	static RdrSelProvider::FieldDescriptor const * const Descriptors;
	void Advise(ICredentialProviderEvents *,unsigned __int64);
	void GetCredentialAt(unsigned long,ICredentialProviderCredential * *);
	void GetCredentialCount(unsigned long *,unsigned long *,int *);
	void GetFieldDescriptorAt(unsigned long,_CREDENTIAL_PROVIDER_FIELD_DESCRIPTOR * *);
	void SetSelected(RdrSelReader *);
	void SetSerialization(_CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION const *);
	void SetUsageScenario(_CREDENTIAL_PROVIDER_USAGE_SCENARIO,unsigned long);
	void UnAdvise();
	~RdrSelProvider();
};

class RdrSelReader
{
	static void CardVerificationCallback(_TP_CALLBACK_INSTANCE *,void *);
	static void PnpMonitorCallback(_TP_CALLBACK_INSTANCE *,void *);
	std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > GetStatusString();
	std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > GetTitleString();
	virtual void TriggerAction();
	void HandleCardVerification();
	void HandlePnpMonitor();
	void RetrieveReaderIcon(unsigned __int64);
	void RetrieveReaderType(unsigned __int64);
	void ScheduleCardVerification();
	void SchedulePnpMonitor();
	void SerializeReader(wistd::unique_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)> > *,unsigned __int64 *);
public:
	RdrSelReader();
	bool HasIdenticalState(RdrSelReader const &);
	std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > GetReaderName();
	void CleanupForRemoval();
	void CommandLinkClicked(unsigned long);
	void GetBitmapValue(unsigned long,HBITMAP__ * *);
	void GetCheckboxValue(unsigned long,int *,unsigned short * *);
	void GetComboBoxValueAt(unsigned long,unsigned long,unsigned short * *);
	void GetComboBoxValueCount(unsigned long,unsigned long *,unsigned long *);
	void GetFieldState(unsigned long,_CREDENTIAL_PROVIDER_FIELD_STATE *,_CREDENTIAL_PROVIDER_FIELD_INTERACTIVE_STATE *);
	void GetSerialization(_CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE *,_CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION *,unsigned short * *,_CREDENTIAL_PROVIDER_STATUS_ICON *);
	void GetStringValue(unsigned long,unsigned short * *);
	void GetSubmitButtonValue(unsigned long,unsigned long *);
	void Initialize(RdrSelProvider *,RdrSelThreadPool *,RdrSelVerificationParameter const &,_READER_LIST_ITEM *);
	void PrepareToShow();
	void Refresh();
	void ReportResult(long,long,unsigned short * *,_CREDENTIAL_PROVIDER_STATUS_ICON *);
	void SetCheckboxValue(unsigned long,int);
	void SetComboBoxSelectedValue(unsigned long,unsigned long);
	void SetDeselected();
	void SetStringValue(unsigned long,unsigned short const *);
	~RdrSelReader();
};

struct RdrSelReaderMonitor
{
	RdrSelReaderMonitor();
	_READER_LIST_ITEM * GetReaderList();
	raw_scoped_lock LockReaderList();
	void * GetActionEvent();
	void * GetProcessingEvent();
	void Start();
	void Stop();
	~RdrSelReaderMonitor();
};

struct RdrSelThreadPool
{
	RdrSelThreadPool();
	errorlib::scoped_error<winerror_error::tag> CreateWait(void (*)(_TP_CALLBACK_INSTANCE *,void *,_TP_WAIT *,long),void *,void *,_FILETIME *);
	errorlib::scoped_error<winerror_error::tag> CreateWork(void (*)(_TP_CALLBACK_INSTANCE *,void *),void *);
	errorlib::scoped_error<winerror_error::tag> SetWait(_TP_WAIT *,void *,_FILETIME *);
	~RdrSelThreadPool();
};

struct RdrSelVerificationParameter
{
	struct ReaderAndContainerParameter
	{
		ReaderAndContainerParameter(ReaderAndContainerParameter const &);
		~ReaderAndContainerParameter();
	};

	struct SerialNumberParameter
	{
		~SerialNumberParameter();
	};

	RdrSelVerificationParameter & operator=(RdrSelVerificationParameter const &);
	void Initialize(unsigned char const *,unsigned long);
	~RdrSelVerificationParameter();
};

struct ReportIndentTracker
{
	static ReportIndentTracker::type * get();
	static long Enter();
	static long Exit();
	static long Indent();
	static void Format(rangelib::range<char *>,long,char,char);
};

namespace SafeIntInternal
{
	struct SafeIntExceptionHandler<SafeIntException>
	{
		static void SafeIntOnOverflow();
	};

};

class TileData
{
	void Copy(TileData const &);
public:
	TileData & operator=(TileData const &);
	TileData();
	TileData(TileData const &);
	bool IsEquivalent(TileData const &);
	long GetContainerName(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
	long SetContainerName(unsigned short const *);
	~TileData();
};

class TileSelector
{
	void CalculateDefaultTileIndexBasedOnCardAction(unsigned long *,TileData &,CSmartCardUser &,bool);
	void CalculateDefaultTileIndexOnFilter(unsigned long *,TileData &,CSmartCardUser &,bool,bool);
};

class UnknownAdaptor<ICredentialProvider,RdrSelProvider>
{
protected:
	virtual void AcquireInterface(_GUID const &,void * *);
public:
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class UnknownAdaptor<ICredentialProvider,WinRTProvider>
{
protected:
	virtual void AcquireInterface(_GUID const &,void * *);
public:
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class UnknownAdaptor<ICredentialProviderCredential,RdrSelNoReader>
{
protected:
	virtual void AcquireInterface(_GUID const &,void * *);
public:
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class UnknownAdaptor<ICredentialProviderCredential,RdrSelReader>
{
protected:
	virtual void AcquireInterface(_GUID const &,void * *);
public:
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class UnknownAdaptor<ICredentialProviderCredential,WinRTPinChangeCredential>
{
protected:
	virtual void AcquireInterface(_GUID const &,void * *);
public:
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class UnknownAdaptor<ICredentialProviderCredential,WinRTPinPromptCredential>
{
protected:
	virtual void AcquireInterface(_GUID const &,void * *);
public:
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class UnknownAdaptor<ICredentialProviderCredential,WinRTVscCreateCredential>
{
protected:
	virtual void AcquireInterface(_GUID const &,void * *);
public:
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class UnknownAdaptor<ICredentialProviderCredential,WinRTVscDestroyCredential>
{
protected:
	virtual void AcquireInterface(_GUID const &,void * *);
public:
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct WinRTCredentialHelpers
{
	static PinPolicy::PinValidationResult ValidatePinPolicy(std::basic_string<unsigned short,std::char_traits<unsigned short>,wil::secure_allocator<unsigned short> > const &,PinPolicy::PinPolicyRules const &);
	static bool ValidatePinChars(std::basic_string<unsigned short,std::char_traits<unsigned short>,wil::secure_allocator<unsigned short> > const &);
	static void GetPinPolicyFromSerialization(unsigned char const *,unsigned long,SCWINRT_CP_REQUEST_SCENARIO_TYPE,PinPolicy::PinPolicyRules *);
	static void GetReaderNameFromSerialization(unsigned char const *,unsigned long,SCWINRT_CP_REQUEST_SCENARIO_TYPE,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *);
	static void SerializeResponse(std::basic_string<unsigned short,std::char_traits<unsigned short>,wil::secure_allocator<unsigned short> > const &,wistd::unique_ptr<unsigned char,wil::cotaskmem_secure_deleter> *,unsigned __int64 *);
};

class WinRTPinChangeCredential
{
	struct PinChangeFieldDescriptorProvider
	{
		PinChangeFieldDescriptorProvider();
		static IFieldDescriptorProvider::FieldDescriptor const * const Descriptors;
		virtual void GetFieldDescriptorAt(unsigned long,_CREDENTIAL_PROVIDER_FIELD_DESCRIPTOR * *);
		virtual void GetFieldDescriptorCount(unsigned long *);
	};

	bool ChangePin(long *,unsigned long *);
	bool ValidateCredential(unsigned short * *);
	unsigned short * ProcessChangePinError(long,unsigned long);
public:
	WinRTPinChangeCredential();
	void Advise(ICredentialProviderCredentialEvents *);
	void CommandLinkClicked(unsigned long);
	void GetBitmapValue(unsigned long,HBITMAP__ * *);
	void GetCheckboxValue(unsigned long,int *,unsigned short * *);
	void GetComboBoxValueAt(unsigned long,unsigned long,unsigned short * *);
	void GetComboBoxValueCount(unsigned long,unsigned long *,unsigned long *);
	void GetFieldState(unsigned long,_CREDENTIAL_PROVIDER_FIELD_STATE *,_CREDENTIAL_PROVIDER_FIELD_INTERACTIVE_STATE *);
	void GetSerialization(_CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE *,_CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION *,unsigned short * *,_CREDENTIAL_PROVIDER_STATUS_ICON *);
	void GetStringValue(unsigned long,unsigned short * *);
	void GetSubmitButtonValue(unsigned long,unsigned long *);
	void Initialize(unsigned char const *,unsigned long,WinRTProvider *);
	void ReportResult(long,long,unsigned short * *,_CREDENTIAL_PROVIDER_STATUS_ICON *);
	void SetCheckboxValue(unsigned long,int);
	void SetComboBoxSelectedValue(unsigned long,unsigned long);
	void SetDeselected();
	void SetImpl(ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,WinRTPinChangeCredential> *);
	void SetSelected(int *);
	void SetStringValue(unsigned long,unsigned short const *);
	void UnAdvise();
	~WinRTPinChangeCredential();
};

class WinRTPinPromptCredential
{
	struct PinPromptFieldDescriptorProvider
	{
		PinPromptFieldDescriptorProvider();
		static IFieldDescriptorProvider::FieldDescriptor const * const Descriptors;
		virtual void GetFieldDescriptorAt(unsigned long,_CREDENTIAL_PROVIDER_FIELD_DESCRIPTOR * *);
		virtual void GetFieldDescriptorCount(unsigned long *);
	};

	bool ValidateCredential(unsigned short * *);
	unsigned short * ProcessPreviousResult(long);
public:
	WinRTPinPromptCredential();
	void Advise(ICredentialProviderCredentialEvents *);
	void CommandLinkClicked(unsigned long);
	void GetBitmapValue(unsigned long,HBITMAP__ * *);
	void GetCheckboxValue(unsigned long,int *,unsigned short * *);
	void GetComboBoxValueAt(unsigned long,unsigned long,unsigned short * *);
	void GetComboBoxValueCount(unsigned long,unsigned long *,unsigned long *);
	void GetFieldState(unsigned long,_CREDENTIAL_PROVIDER_FIELD_STATE *,_CREDENTIAL_PROVIDER_FIELD_INTERACTIVE_STATE *);
	void GetSerialization(_CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE *,_CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION *,unsigned short * *,_CREDENTIAL_PROVIDER_STATUS_ICON *);
	void GetStringValue(unsigned long,unsigned short * *);
	void GetSubmitButtonValue(unsigned long,unsigned long *);
	void Initialize(unsigned char const *,unsigned long,WinRTProvider *,bool *);
	void ReportResult(long,long,unsigned short * *,_CREDENTIAL_PROVIDER_STATUS_ICON *);
	void SetCheckboxValue(unsigned long,int);
	void SetComboBoxSelectedValue(unsigned long,unsigned long);
	void SetDeselected();
	void SetImpl(ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,WinRTPinPromptCredential> *);
	void SetSelected(int *);
	void SetStringValue(unsigned long,unsigned short const *);
	void UnAdvise();
	~WinRTPinPromptCredential();
};

struct WinRTProvider
{
	WinRTProvider();
	void GetCredentialAt(unsigned long,ICredentialProviderCredential * *);
	void GetCredentialCount(unsigned long *,unsigned long *,int *);
	void GetFieldDescriptorAt(unsigned long,_CREDENTIAL_PROVIDER_FIELD_DESCRIPTOR * *);
	void GetFieldDescriptorCount(unsigned long *);
	void Initialize();
	void SetImpl(ComInterfaceImpl<ICredentialProvider,CredentialProviderAdaptor,WinRTProvider> *);
	void SetSerialization(_CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION const *);
	void SetUsageScenario(_CREDENTIAL_PROVIDER_USAGE_SCENARIO,unsigned long);
	~WinRTProvider();
};

class WinRTVscCreateCredential
{
	struct VscCreateFieldDescriptorProvider
	{
		VscCreateFieldDescriptorProvider();
		static IFieldDescriptorProvider::FieldDescriptor const * const Descriptors;
		virtual void GetFieldDescriptorAt(unsigned long,_CREDENTIAL_PROVIDER_FIELD_DESCRIPTOR * *);
		virtual void GetFieldDescriptorCount(unsigned long *);
	};

	bool ValidateCredential(unsigned short * *);
	unsigned short * ProcessPinPolicyError(PinPolicy::PinValidationResult);
	void ShowPinPolicyDetails();
public:
	WinRTVscCreateCredential();
	void Advise(ICredentialProviderCredentialEvents *);
	void CommandLinkClicked(unsigned long);
	void GetBitmapValue(unsigned long,HBITMAP__ * *);
	void GetCheckboxValue(unsigned long,int *,unsigned short * *);
	void GetComboBoxValueAt(unsigned long,unsigned long,unsigned short * *);
	void GetComboBoxValueCount(unsigned long,unsigned long *,unsigned long *);
	void GetFieldState(unsigned long,_CREDENTIAL_PROVIDER_FIELD_STATE *,_CREDENTIAL_PROVIDER_FIELD_INTERACTIVE_STATE *);
	void GetSerialization(_CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE *,_CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION *,unsigned short * *,_CREDENTIAL_PROVIDER_STATUS_ICON *);
	void GetStringValue(unsigned long,unsigned short * *);
	void GetSubmitButtonValue(unsigned long,unsigned long *);
	void Initialize(unsigned char const *,unsigned long,WinRTProvider *);
	void ReportResult(long,long,unsigned short * *,_CREDENTIAL_PROVIDER_STATUS_ICON *);
	void SetCheckboxValue(unsigned long,int);
	void SetComboBoxSelectedValue(unsigned long,unsigned long);
	void SetDeselected();
	void SetImpl(ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,WinRTVscCreateCredential> *);
	void SetSelected(int *);
	void SetStringValue(unsigned long,unsigned short const *);
	void UnAdvise();
	~WinRTVscCreateCredential();
};

class WinRTVscDestroyCredential
{
	struct VscDestroyFieldDescriptorProvider
	{
		VscDestroyFieldDescriptorProvider();
		static IFieldDescriptorProvider::FieldDescriptor const * const Descriptors;
		virtual void GetFieldDescriptorAt(unsigned long,_CREDENTIAL_PROVIDER_FIELD_DESCRIPTOR * *);
		virtual void GetFieldDescriptorCount(unsigned long *);
	};

	bool ValidateCredential(unsigned short * *);
public:
	WinRTVscDestroyCredential();
	void Advise(ICredentialProviderCredentialEvents *);
	void CommandLinkClicked(unsigned long);
	void GetBitmapValue(unsigned long,HBITMAP__ * *);
	void GetCheckboxValue(unsigned long,int *,unsigned short * *);
	void GetComboBoxValueAt(unsigned long,unsigned long,unsigned short * *);
	void GetComboBoxValueCount(unsigned long,unsigned long *,unsigned long *);
	void GetFieldState(unsigned long,_CREDENTIAL_PROVIDER_FIELD_STATE *,_CREDENTIAL_PROVIDER_FIELD_INTERACTIVE_STATE *);
	void GetSerialization(_CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE *,_CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION *,unsigned short * *,_CREDENTIAL_PROVIDER_STATUS_ICON *);
	void GetStringValue(unsigned long,unsigned short * *);
	void GetSubmitButtonValue(unsigned long,unsigned long *);
	void Initialize(unsigned char const *,unsigned long,WinRTProvider *);
	void ReportResult(long,long,unsigned short * *,_CREDENTIAL_PROVIDER_STATUS_ICON *);
	void SetCheckboxValue(unsigned long,int);
	void SetComboBoxSelectedValue(unsigned long,unsigned long);
	void SetDeselected();
	void SetImpl(ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,WinRTVscDestroyCredential> *);
	void SetSelected(int *);
	void SetStringValue(unsigned long,unsigned short const *);
	void UnAdvise();
	~WinRTVscDestroyCredential();
};

struct _QUERY_SMART_CARD_CALLBACK_CONTEXT
{
	~_QUERY_SMART_CARD_CALLBACK_CONTEXT();
};

struct case_insensitive
{
	bool operator()(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &);
};

namespace details
{
	void CloseThreadpoolCleanupMembersAndGroupNoCancel(_TP_CLEANUP_GROUP *);
};

namespace errcntrctlib
{
	unsigned long WIN32_FROM_NTSTATUS(long);
};

namespace errorlib
{
	struct ErrorDisposition
	{
		static bool safe(ErrorDisposition::type);
	};

	namespace detail
	{
		bool optionalFailFastCheck(...);
	};

	struct error_exception
	{
		error_exception();
		error_exception(error_exception const &);
	};

	class scoped_error<gdiplusstatus_error::tag>
	{
		void report(ErrorSource::type);
	public:
		scoped_error<gdiplusstatus_error::tag> const & ignore();
		~scoped_error<gdiplusstatus_error::tag>();
	};

	class scoped_error<hresult_error::tag>
	{
		void report(ErrorSource::type);
	public:
		scoped_error<hresult_error::tag> & operator=(scoped_error<hresult_error::tag>);
		scoped_error<hresult_error::tag> const & ignore();
		scoped_error<hresult_error::tag>();
		scoped_error<hresult_error::tag><long &>(ErrorSource::type,long &);
		~scoped_error<hresult_error::tag>();
	};

	struct scoped_error<ntstatus_error::tag>
	{
		~scoped_error<ntstatus_error::tag>();
	};

	class scoped_error<winerror_error::tag>
	{
		void report(ErrorSource::type);
	public:
		scoped_error<winerror_error::tag> & operator=(scoped_error<winerror_error::tag>);
		scoped_error<winerror_error::tag> const & ignore();
		scoped_error<winerror_error::tag>();
		~scoped_error<winerror_error::tag>();
	};

	struct specific_error_exception<gdiplusstatus_error::tag>
	{
		specific_error_exception<gdiplusstatus_error::tag>(specific_error_exception<gdiplusstatus_error::tag> const &);
		virtual ~specific_error_exception<gdiplusstatus_error::tag>();
	};

	struct specific_error_exception<hresult_error::tag>
	{
		specific_error_exception<hresult_error::tag>(specific_error_exception<hresult_error::tag> const &);
		virtual ~specific_error_exception<hresult_error::tag>();
	};

	struct specific_error_exception<ntstatus_error::tag>
	{
		specific_error_exception<ntstatus_error::tag>(specific_error_exception<ntstatus_error::tag> const &);
		virtual ~specific_error_exception<ntstatus_error::tag>();
	};

	struct specific_error_exception<winerror_error::tag>
	{
		specific_error_exception<winerror_error::tag>(scoped_error<winerror_error::tag> const &);
		specific_error_exception<winerror_error::tag>(specific_error_exception<winerror_error::tag> const &);
		virtual ~specific_error_exception<winerror_error::tag>();
	};

	void error_initiated<scoped_error<gdiplusstatus_error::tag> >(errorlib::scoped_error<gdiplusstatus_error::tag> const &,gdiplusstatus_error::tag const &);
	void error_initiated<scoped_error<hresult_error::tag> >(errorlib::scoped_error<hresult_error::tag> const &,hresult_error::tag const &);
	void error_initiated<scoped_error<winerror_error::tag> >(errorlib::scoped_error<winerror_error::tag> const &,winerror_error::tag const &);
	void error_propagated<scoped_error<gdiplusstatus_error::tag> >(errorlib::scoped_error<gdiplusstatus_error::tag> const &,gdiplusstatus_error::tag const &);
	void error_propagated<scoped_error<hresult_error::tag> >(errorlib::scoped_error<hresult_error::tag> const &,hresult_error::tag const &);
	void error_propagated<scoped_error<winerror_error::tag> >(errorlib::scoped_error<winerror_error::tag> const &,winerror_error::tag const &);
	void error_received<scoped_error<gdiplusstatus_error::tag> >(errorlib::scoped_error<gdiplusstatus_error::tag> const &,gdiplusstatus_error::tag const &);
	void error_received<scoped_error<hresult_error::tag> >(errorlib::scoped_error<hresult_error::tag> const &,hresult_error::tag const &);
	void error_received<scoped_error<ntstatus_error::tag> >(errorlib::scoped_error<ntstatus_error::tag> const &,ntstatus_error::tag const &);
	void error_received<scoped_error<winerror_error::tag> >(errorlib::scoped_error<winerror_error::tag> const &,winerror_error::tag const &);
};

struct hresult_exception
{
	hresult_exception(hresult_exception const &);
	virtual ~hresult_exception();
};

namespace metalib
{
	void FailFast(unsigned long);
};

namespace modloadlib
{
	struct library
	{
		void clear();
	};

	struct method_set<CardModApiSet>
	{
		errorlib::scoped_error<winerror_error::tag> load(HINSTANCE__ *);
	};

};

namespace oneoflib
{
	class one_of<typveclib::typevec<RdrSelVerificationParameter::ReaderAndContainerParameter,RdrSelVerificationParameter::SerialNumberParameter,RdrSelVerificationParameter::AllCardsParameter,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil>,typbldlib::metavalue<0>,typbldlib::metavalue<3>,typbldlib::metavalue<0> >
	{
	protected:
		void re_swap(one_of<typveclib::typevec<RdrSelVerificationParameter::ReaderAndContainerParameter,RdrSelVerificationParameter::SerialNumberParameter,RdrSelVerificationParameter::AllCardsParameter,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil>,typbldlib::metavalue<0>,typbldlib::metavalue<3>,typbldlib::metavalue<0> > &);
	};

	class one_of<typveclib::typevec<RdrSelVerificationParameter::ReaderAndContainerParameter,RdrSelVerificationParameter::SerialNumberParameter,RdrSelVerificationParameter::AllCardsParameter,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil>,typbldlib::metavalue<0>,typbldlib::metavalue<3>,typbldlib::metavalue<1> >
	{
	protected:
		void re_send<MatchParameterReceiver &>(MatchParameterReceiver &);
		void re_send<one_of<typveclib::typevec<RdrSelVerificationParameter::ReaderAndContainerParameter,RdrSelVerificationParameter::SerialNumberParameter,RdrSelVerificationParameter::AllCardsParameter,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil>,typbldlib::metavalue<0>,typbldlib::metavalue<3>,typbldlib::metavalue<3> >::other_move_receiver &>(one_of<typveclib::typevec<RdrSelVerificationParameter::ReaderAndContainerParameter,RdrSelVerificationParameter::SerialNumberParameter,RdrSelVerificationParameter::AllCardsParameter,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil>,typbldlib::metavalue<0>,typbldlib::metavalue<3>,typbldlib::metavalue<3> >::other_move_receiver &);
		void re_send<one_of<typveclib::typevec<RdrSelVerificationParameter::ReaderAndContainerParameter,RdrSelVerificationParameter::SerialNumberParameter,RdrSelVerificationParameter::AllCardsParameter,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil>,typbldlib::metavalue<0>,typbldlib::metavalue<3>,typbldlib::metavalue<3> >::other_reset_receiver &>(one_of<typveclib::typevec<RdrSelVerificationParameter::ReaderAndContainerParameter,RdrSelVerificationParameter::SerialNumberParameter,RdrSelVerificationParameter::AllCardsParameter,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil>,typbldlib::metavalue<0>,typbldlib::metavalue<3>,typbldlib::metavalue<3> >::other_reset_receiver &);
	};

	struct one_of<typveclib::typevec<RdrSelVerificationParameter::ReaderAndContainerParameter,RdrSelVerificationParameter::SerialNumberParameter,RdrSelVerificationParameter::AllCardsParameter,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil>,typbldlib::metavalue<0>,typbldlib::metavalue<3>,typbldlib::metavalue<2> >
	{
		~one_of<typveclib::typevec<RdrSelVerificationParameter::ReaderAndContainerParameter,RdrSelVerificationParameter::SerialNumberParameter,RdrSelVerificationParameter::AllCardsParameter,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil>,typbldlib::metavalue<0>,typbldlib::metavalue<3>,typbldlib::metavalue<2> >();
	};

	struct one_of<typveclib::typevec<RdrSelVerificationParameter::ReaderAndContainerParameter,RdrSelVerificationParameter::SerialNumberParameter,RdrSelVerificationParameter::AllCardsParameter,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil>,typbldlib::metavalue<0>,typbldlib::metavalue<3>,typbldlib::metavalue<3> >
	{
		void reset<RdrSelVerificationParameter::ReaderAndContainerParameter &>(RdrSelVerificationParameter::ReaderAndContainerParameter &);
		void reset<RdrSelVerificationParameter::SerialNumberParameter &>(RdrSelVerificationParameter::SerialNumberParameter &);
		void swap(one_of<typveclib::typevec<RdrSelVerificationParameter::ReaderAndContainerParameter,RdrSelVerificationParameter::SerialNumberParameter,RdrSelVerificationParameter::AllCardsParameter,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil>,typbldlib::metavalue<0>,typbldlib::metavalue<3>,typbldlib::metavalue<3> > &);
	};

};

namespace rangelib
{
	rangelib::range<char *> make_range<range<char *> &>(rangelib::range<char *> &,__int64,__int64);
};

struct raw_scoped_lock
{
	~raw_scoped_lock();
};

struct scoped_lock
{
	scoped_lock(CSynchLock *);
	~scoped_lock();
};

namespace std
{
	struct _Alloc_construct_ptr<allocator<_Tree_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> > >
	{
		~_Alloc_construct_ptr<allocator<_Tree_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> > >();
	};

	struct _Alloc_construct_ptr<allocator<_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> > >
	{
		~_Alloc_construct_ptr<allocator<_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> > >();
	};

	struct _Alloc_construct_ptr<allocator<_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy> >,void *> > >
	{
		~_Alloc_construct_ptr<allocator<_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy> >,void *> > >();
	};

	struct _Alloc_construct_ptr<allocator<_Tree_node<pair<vector<unsigned char,allocator<unsigned char> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> > >
	{
		~_Alloc_construct_ptr<allocator<_Tree_node<pair<vector<unsigned char,allocator<unsigned char> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> > >();
	};

	struct _Compressed_pair<allocator<unsigned short>,_String_val<_Simple_types<unsigned short> >,1>
	{
		~_Compressed_pair<allocator<unsigned short>,_String_val<_Simple_types<unsigned short> >,1>();
	};

	struct _Compressed_pair<wil::secure_allocator<char>,_String_val<_Simple_types<char> >,1>
	{
		~_Compressed_pair<wil::secure_allocator<char>,_String_val<_Simple_types<char> >,1>();
	};

	struct _Compressed_pair<wil::secure_allocator<unsigned short>,_String_val<_Simple_types<unsigned short> >,1>
	{
		~_Compressed_pair<wil::secure_allocator<unsigned short>,_String_val<_Simple_types<unsigned short> >,1>();
	};

	class _Func_class<void,RdrSelVerificationParameter::AllCardsParameter const &>
	{
	protected:
		void _Tidy();
	};

	class _Func_class<void,RdrSelVerificationParameter::ReaderAndContainerParameter const &>
	{
	protected:
		void _Tidy();
	};

	class _Func_class<void,RdrSelVerificationParameter::SerialNumberParameter const &>
	{
	protected:
		void _Tidy();
	};

	struct _Ref_count_base
	{
		virtual void * _Get_deleter(type_info const &);
		void _Decref();
	};

	class _Ref_count_obj2<DsNgcUtils::KeyEnumInfo>
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	struct _Tidy_guard<vector<unsigned char,allocator<unsigned char> > >
	{
		~_Tidy_guard<vector<unsigned char,allocator<unsigned char> > >();
	};

	struct _Tidy_guard<vector<unsigned char,wil::secure_allocator<unsigned char> > >
	{
		~_Tidy_guard<vector<unsigned char,wil::secure_allocator<unsigned char> > >();
	};

	struct _Tidy_guard<vector<unsigned short,allocator<unsigned short> > >
	{
		~_Tidy_guard<vector<unsigned short,allocator<unsigned short> > >();
	};

	class _Tree<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,case_insensitive,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,0> >
	{
	protected:
		_Tree_find_result<_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *> _Find_lower_bound<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		bool _Lower_bound_duplicate<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> * const,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
	};

	class _Tree<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy>,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy> > >,0> >
	{
	protected:
		_Tree_find_result<_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy> >,void *> *> _Find_lower_bound<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		bool _Lower_bound_duplicate<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy> >,void *> * const,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
	};

	class _Tree<_Tmap_traits<vector<unsigned char,allocator<unsigned char> >,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,less<vector<unsigned char,allocator<unsigned char> > >,allocator<pair<vector<unsigned char,allocator<unsigned char> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,1> >
	{
	protected:
		_Tree_find_result<_Tree_node<pair<vector<unsigned char,allocator<unsigned char> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *> _Find_lower_bound<vector<unsigned char,allocator<unsigned char> > >(vector<unsigned char,allocator<unsigned char> > const &);
		_Tree_find_result<_Tree_node<pair<vector<unsigned char,allocator<unsigned char> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *> _Find_upper_bound<vector<unsigned char,allocator<unsigned char> > >(vector<unsigned char,allocator<unsigned char> > const &);
	};

	class _Tree<_Tset_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,case_insensitive,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,0> >
	{
	protected:
		_Tree_find_hint_result<_Tree_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> *> _Find_hint<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >(_Tree_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> * const,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		_Tree_find_result<_Tree_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> *> _Find_lower_bound<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		_Tree_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> * _Emplace_hint<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > &>(_Tree_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> * const,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > &);
		bool _Lower_bound_duplicate<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >(_Tree_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> * const,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		pair<_Tree_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> *,_Tree_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> *> _Eqrange<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		pair<_Tree_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> *,bool> _Emplace<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &>(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		void _Check_grow_by_1();
	public:
		unsigned __int64 erase(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		void clear();
	};

	struct _Tree_temp_node<allocator<_Tree_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> > >
	{
		_Tree_temp_node<allocator<_Tree_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> > ><basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > &>(allocator<_Tree_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> > &,_Tree_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> *,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > &);
		_Tree_temp_node<allocator<_Tree_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> > ><basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &>(allocator<_Tree_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> > &,_Tree_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> *,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		~_Tree_temp_node<allocator<_Tree_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> > >();
	};

	struct _Tree_temp_node<allocator<_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> > >
	{
		~_Tree_temp_node<allocator<_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> > >();
	};

	struct _Tree_temp_node<allocator<_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy> >,void *> > >
	{
		~_Tree_temp_node<allocator<_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy> >,void *> > >();
	};

	struct _Tree_temp_node<allocator<_Tree_node<pair<vector<unsigned char,allocator<unsigned char> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> > >
	{
		~_Tree_temp_node<allocator<_Tree_node<pair<vector<unsigned char,allocator<unsigned char> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> > >();
	};

	struct _Tree_temp_node_alloc<allocator<_Tree_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> > >
	{
		_Tree_temp_node_alloc<allocator<_Tree_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> > >(allocator<_Tree_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> > &);
		~_Tree_temp_node_alloc<allocator<_Tree_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> > >();
	};

	struct _Tree_temp_node_alloc<allocator<_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> > >
	{
		~_Tree_temp_node_alloc<allocator<_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> > >();
	};

	struct _Tree_temp_node_alloc<allocator<_Tree_node<pair<vector<unsigned char,allocator<unsigned char> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> > >
	{
		~_Tree_temp_node_alloc<allocator<_Tree_node<pair<vector<unsigned char,allocator<unsigned char> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> > >();
	};

	struct _Tree_unchecked_const_iterator<_Tree_val<_Tree_simple_types<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,_Iterator_base0>
	{
		_Tree_unchecked_const_iterator<_Tree_val<_Tree_simple_types<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,_Iterator_base0> & operator++();
		_Tree_unchecked_const_iterator<_Tree_val<_Tree_simple_types<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,_Iterator_base0> & operator--();
	};

	struct _Tree_unchecked_const_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy> > > >,_Iterator_base0>
	{
		_Tree_unchecked_const_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy> > > >,_Iterator_base0> & operator++();
	};

	struct _Tree_val<_Tree_simple_types<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >
	{
		_Tree_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> * _Extract(_Tree_unchecked_const_iterator<_Tree_val<_Tree_simple_types<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,_Iterator_base0>);
		_Tree_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> * _Insert_node(_Tree_id<_Tree_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> *>,_Tree_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> * const);
		static _Tree_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> * _Min(_Tree_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> *);
		void _Erase_tree<allocator<_Tree_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> > >(allocator<_Tree_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> > &,_Tree_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> *);
		void _Lrotate(_Tree_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> *);
		void _Rrotate(_Tree_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> *);
	};

	struct _Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >
	{
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> * _Insert_node(_Tree_id<_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *>,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> * const);
		void _Erase_tree<allocator<_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> > >(allocator<_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> > &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *);
		void _Lrotate(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *);
		void _Rrotate(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *);
	};

	struct _Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy> > > >
	{
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy> >,void *> * _Extract(_Tree_unchecked_const_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy> > > >,_Iterator_base0>);
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy> >,void *> * _Insert_node(_Tree_id<_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy> >,void *> *>,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy> >,void *> * const);
		static _Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy> >,void *> * _Min(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy> >,void *> *);
		void _Erase_tree<allocator<_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy> >,void *> > >(allocator<_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy> >,void *> > &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy> >,void *> *);
		void _Lrotate(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy> >,void *> *);
		void _Rrotate(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy> >,void *> *);
	};

	struct _Tree_val<_Tree_simple_types<pair<vector<unsigned char,allocator<unsigned char> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >
	{
		_Tree_node<pair<vector<unsigned char,allocator<unsigned char> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> * _Insert_node(_Tree_id<_Tree_node<pair<vector<unsigned char,allocator<unsigned char> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *>,_Tree_node<pair<vector<unsigned char,allocator<unsigned char> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> * const);
		void _Erase_tree<allocator<_Tree_node<pair<vector<unsigned char,allocator<unsigned char> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> > >(allocator<_Tree_node<pair<vector<unsigned char,allocator<unsigned char> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> > &,_Tree_node<pair<vector<unsigned char,allocator<unsigned char> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *);
		void _Lrotate(_Tree_node<pair<vector<unsigned char,allocator<unsigned char> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *);
		void _Rrotate(_Tree_node<pair<vector<unsigned char,allocator<unsigned char> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *);
	};

	struct _Uninitialized_backout_al<allocator<TileData> >
	{
		~_Uninitialized_backout_al<allocator<TileData> >();
	};

	struct _Uninitialized_backout_al<allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >
	{
		~_Uninitialized_backout_al<allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >();
	};

	struct _WChar_traits<unsigned short>
	{
		static int compare(unsigned short const * const,unsigned short const * const,unsigned __int64);
	};

	struct allocator<TileData>
	{
		TileData * allocate(unsigned __int64);
	};

	struct allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >
	{
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > * allocate(unsigned __int64);
		void deallocate(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > * const,unsigned __int64);
	};

	struct allocator<unsigned char>
	{
		void deallocate(unsigned char * const,unsigned __int64);
	};

	struct allocator<unsigned short>
	{
		unsigned short * allocate(unsigned __int64);
		void deallocate(unsigned short * const,unsigned __int64);
	};

	struct bad_alloc
	{
		bad_alloc();
		bad_alloc(bad_alloc const &);
		virtual ~bad_alloc();
	};

	struct bad_array_new_length
	{
		bad_array_new_length();
		bad_array_new_length(bad_array_new_length const &);
		virtual ~bad_array_new_length();
	};

	class basic_string<char,char_traits<char>,wil::secure_allocator<char> >
	{
		basic_string<char,char_traits<char>,wil::secure_allocator<char> > & _Reallocate_grow_by<<lambda_276268864dcaaa269859b30272c96aa1>,unsigned __int64,char>(unsigned __int64,<lambda_276268864dcaaa269859b30272c96aa1>,unsigned __int64,char);
		basic_string<char,char_traits<char>,wil::secure_allocator<char> > & _Reallocate_grow_by<<lambda_6e124e58871ebe631de22ce81eacab8e>,char const *,unsigned __int64>(unsigned __int64,<lambda_6e124e58871ebe631de22ce81eacab8e>,char const *,unsigned __int64);
		basic_string<char,char_traits<char>,wil::secure_allocator<char> > & _Reallocate_grow_by<<lambda_d64d12cc51d4969d991a201fb1d13002>,char>(unsigned __int64,<lambda_d64d12cc51d4969d991a201fb1d13002>,char);
		unsigned __int64 _Calculate_growth(unsigned __int64);
	public:
		basic_string<char,char_traits<char>,wil::secure_allocator<char> > & append(unsigned __int64,char);
		basic_string<char,char_traits<char>,wil::secure_allocator<char> >(basic_string<char,char_traits<char>,wil::secure_allocator<char> > const &);
		~basic_string<char,char_traits<char>,wil::secure_allocator<char> >();
	};

	class basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >
	{
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & _Reallocate_for<<lambda_05cef1f6fdf474c9f3ed207deba0f73b>,unsigned short const *>(unsigned __int64,<lambda_05cef1f6fdf474c9f3ed207deba0f73b>,unsigned short const *);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & _Reallocate_grow_by<<lambda_7030d12a21dba11210293044e97fe9c7>,unsigned short const *,unsigned __int64>(unsigned __int64,<lambda_7030d12a21dba11210293044e97fe9c7>,unsigned short const *,unsigned __int64);
		static unsigned __int64 _Calculate_growth(unsigned __int64,unsigned __int64,unsigned __int64);
		void _Construct_lv_contents(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		void _Tidy_deallocate();
	public:
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & assign(unsigned short const * const,unsigned __int64);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > substr(unsigned __int64,unsigned __int64);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >(_String_constructor_concat_tag,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &,unsigned short const * const,unsigned __int64,unsigned short const * const,unsigned __int64);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >(unsigned short const * const);
		~basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >();
	};

	class basic_string<unsigned short,char_traits<unsigned short>,wil::secure_allocator<unsigned short> >
	{
		basic_string<unsigned short,char_traits<unsigned short>,wil::secure_allocator<unsigned short> > & _Reallocate_for<<lambda_12d8f83807da71f4e1cd8ccfd5dbbfe6>,unsigned short const *>(unsigned __int64,<lambda_12d8f83807da71f4e1cd8ccfd5dbbfe6>,unsigned short const *);
	public:
		~basic_string<unsigned short,char_traits<unsigned short>,wil::secure_allocator<unsigned short> >();
	};

	class codecvt<unsigned short,char,_Mbstatet>
	{
	protected:
		virtual bool do_always_noconv();
		virtual int do_encoding();
		virtual int do_in(_Mbstatet &,char const *,char const *,char const * &,unsigned short *,unsigned short *,unsigned short * &);
		virtual int do_length(_Mbstatet &,char const *,char const *,unsigned __int64);
		virtual int do_max_length();
		virtual int do_out(_Mbstatet &,unsigned short const *,unsigned short const *,unsigned short const * &,char *,char *,char * &);
		virtual int do_unshift(_Mbstatet &,char *,char *,char * &);
	};

	struct exception
	{
		exception(exception const &);
		virtual char const * what();
	};

	struct locale
	{
		struct facet
		{
			virtual _Facet_base * _Decref();
			virtual void _Incref();
		};

		~locale();
	};

	struct map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,case_insensitive,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >
	{
		~map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,case_insensitive,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >();
	};

	struct map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy>,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy> > > >
	{
		~map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy>,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy> > > >();
	};

	struct multimap<vector<unsigned char,allocator<unsigned char> >,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,less<vector<unsigned char,allocator<unsigned char> > >,allocator<pair<vector<unsigned char,allocator<unsigned char> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >
	{
		~multimap<vector<unsigned char,allocator<unsigned char> >,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,less<vector<unsigned char,allocator<unsigned char> > >,allocator<pair<vector<unsigned char,allocator<unsigned char> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >();
	};

	struct pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >
	{
		~pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >();
	};

	struct pair<vector<unsigned char,allocator<unsigned char> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >
	{
		~pair<vector<unsigned char,allocator<unsigned char> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >();
	};

	struct range_error
	{
		range_error(range_error const &);
		virtual ~range_error();
	};

	struct runtime_error
	{
		runtime_error(runtime_error const &);
	};

	struct set<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,case_insensitive,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >
	{
		~set<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,case_insensitive,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >();
	};

	struct shared_ptr<DsNgcUtils::KeyEnumInfo>
	{
		~shared_ptr<DsNgcUtils::KeyEnumInfo>();
	};

	struct unique_ptr<IFieldDescriptorProvider,default_delete<IFieldDescriptorProvider> >
	{
		void reset(IFieldDescriptorProvider *);
	};

	struct unique_ptr<RdrSelReaderMonitor,default_delete<RdrSelReaderMonitor> >
	{
		~unique_ptr<RdrSelReaderMonitor,default_delete<RdrSelReaderMonitor> >();
	};

	struct unique_ptr<RdrSelThreadPool,default_delete<RdrSelThreadPool> >
	{
		~unique_ptr<RdrSelThreadPool,default_delete<RdrSelThreadPool> >();
	};

	struct unique_ptr<_PNP_MONITOR_CONTEXT,default_delete<_PNP_MONITOR_CONTEXT> >
	{
		~unique_ptr<_PNP_MONITOR_CONTEXT,default_delete<_PNP_MONITOR_CONTEXT> >();
	};

	struct unique_ptr<map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy>,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy> > > >,default_delete<map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy>,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy> > > > > >
	{
		~unique_ptr<map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy>,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy> > > >,default_delete<map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy>,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy> > > > > >();
	};

	class vector<TileData,allocator<TileData> >
	{
		static void _Xlength();
		unsigned __int64 _Calculate_growth(unsigned __int64);
		void _Assign_range<TileData *>(TileData *,TileData *,forward_iterator_tag);
		void _Change_array(TileData * const,unsigned __int64,unsigned __int64);
		void _Clear_and_reserve_geometric(unsigned __int64);
	public:
		TileData * _Emplace_reallocate<TileData const &>(TileData * const,TileData const &);
		~vector<TileData,allocator<TileData> >();
	};

	class vector<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >
	{
		static void _Xlength();
		unsigned __int64 _Calculate_growth(unsigned __int64);
		void _Assign_range<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *>(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *,forward_iterator_tag);
		void _Change_array(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > * const,unsigned __int64,unsigned __int64);
		void _Clear_and_reserve_geometric(unsigned __int64);
		void _Reallocate_exactly(unsigned __int64);
	public:
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & at(unsigned __int64);
		void clear();
		~vector<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >();
	};

	class vector<shared_ptr<DsNgcUtils::KeyEnumInfo>,allocator<shared_ptr<DsNgcUtils::KeyEnumInfo> > >
	{
		void _Change_array(shared_ptr<DsNgcUtils::KeyEnumInfo> * const,unsigned __int64,unsigned __int64);
		void _Tidy();
	public:
		~vector<shared_ptr<DsNgcUtils::KeyEnumInfo>,allocator<shared_ptr<DsNgcUtils::KeyEnumInfo> > >();
	};

	class vector<unsigned char,allocator<unsigned char> >
	{
		static void _Xlength();
		unsigned __int64 _Calculate_growth(unsigned __int64);
		void _Assign_range<unsigned char *>(unsigned char *,unsigned char *,forward_iterator_tag);
		void _Assign_range<unsigned char const *>(unsigned char const *,unsigned char const *,forward_iterator_tag);
		void _Buy_nonzero(unsigned __int64);
		void _Buy_raw(unsigned __int64);
		void _Change_array(unsigned char * const,unsigned __int64,unsigned __int64);
		void _Clear_and_reserve_geometric(unsigned __int64);
		void _Construct_n<unsigned char * const &,unsigned char * const &>(unsigned __int64,unsigned char * const &,unsigned char * const &);
		void _Insert_range<unsigned char *>(_Vector_const_iterator<_Vector_val<_Simple_types<unsigned char> > >,unsigned char *,unsigned char *,forward_iterator_tag);
		void _Reallocate_exactly(unsigned __int64);
		void _Resize<_Value_init_tag>(unsigned __int64,_Value_init_tag const &);
		void _Resize_reallocate<_Value_init_tag>(unsigned __int64,_Value_init_tag const &);
		void _Tidy();
	public:
		vector<unsigned char,allocator<unsigned char> >(vector<unsigned char,allocator<unsigned char> > const &);
		void reserve(unsigned __int64);
		~vector<unsigned char,allocator<unsigned char> >();
	};

	class vector<unsigned char,wil::secure_allocator<unsigned char> >
	{
		static void _Xlength();
		void _Tidy();
	public:
		~vector<unsigned char,wil::secure_allocator<unsigned char> >();
	};

	class vector<unsigned short,allocator<unsigned short> >
	{
		static void _Xlength();
		void _Change_array(unsigned short * const,unsigned __int64,unsigned __int64);
		void _Resize<_Value_init_tag>(unsigned __int64,_Value_init_tag const &);
		void _Resize_reallocate<_Value_init_tag>(unsigned __int64,_Value_init_tag const &);
		void _Tidy();
	public:
		~vector<unsigned short,allocator<unsigned short> >();
	};

	class vector<void *,allocator<void *> >
	{
		static void _Xrange();
		void _Change_array(void * * const,unsigned __int64,unsigned __int64);
	public:
		void * * _Emplace_reallocate<void * const &>(void * * const,void * const &);
		~vector<void *,allocator<void *> >();
	};

	class vector<wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy>,allocator<wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy> > >
	{
		static void _Xlength();
		unsigned __int64 _Calculate_growth(unsigned __int64);
		void _Assign_range<wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy> *>(wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy> *,wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy> *,forward_iterator_tag);
		void _Change_array(wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy> * const,unsigned __int64,unsigned __int64);
		void _Clear_and_reserve_geometric(unsigned __int64);
	public:
		wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy> * _Emplace_reallocate<wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy> const &>(wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy> * const,wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy> const &);
		~vector<wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy>,allocator<wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy> > >();
	};

	class wstring_convert<codecvt<unsigned short,char,_Mbstatet>,unsigned short,wil::secure_allocator<unsigned short>,wil::secure_allocator<char> >
	{
		void _Init(codecvt<unsigned short,char,_Mbstatet> const *);
	public:
		basic_string<char,char_traits<char>,wil::secure_allocator<char> > to_bytes(basic_string<unsigned short,char_traits<unsigned short>,wil::secure_allocator<unsigned short> > const &);
		basic_string<char,char_traits<char>,wil::secure_allocator<char> > to_bytes(unsigned short const *,unsigned short const *);
		virtual ~wstring_convert<codecvt<unsigned short,char,_Mbstatet>,unsigned short,wil::secure_allocator<unsigned short>,wil::secure_allocator<char> >();
		wstring_convert<codecvt<unsigned short,char,_Mbstatet>,unsigned short,wil::secure_allocator<unsigned short>,wil::secure_allocator<char> >();
	};

	TileData * _Copy_unchecked<TileData *,TileData *>(TileData *,TileData *,TileData *);
	TileData * _Uninitialized_copy<TileData *,allocator<TileData> >(TileData * const,TileData * const,TileData *,std::allocator<TileData> &);
	TileData * _Uninitialized_move<TileData *,allocator<TileData> >(TileData * const,TileData * const,TileData *,std::allocator<TileData> &);
	bool _Traits_equal<char_traits<unsigned short> >(unsigned short const * const,unsigned __int64,unsigned short const * const,unsigned __int64);
	bool operator==<unsigned char,allocator<unsigned char> >(std::vector<unsigned char,std::allocator<unsigned char> > const &,std::vector<unsigned char,std::allocator<unsigned char> > const &);
	nothrow_t const std::nothrow;
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > > find<_Vector_iterator<_Vector_val<_Simple_types<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >,unsigned short *>(std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > >,std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > >,unsigned short * const &);
	std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > * _Copy_unchecked<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *>(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *);
	std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > * _Uninitialized_copy<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > * const,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > * const,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::allocator<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > &);
	std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > * _Uninitialized_move<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > * const,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > * const,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::allocator<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > &);
	std::shared_ptr<DsNgcUtils::KeyEnumInfo> * _Uninitialized_move<shared_ptr<DsNgcUtils::KeyEnumInfo> *,allocator<shared_ptr<DsNgcUtils::KeyEnumInfo> > >(std::shared_ptr<DsNgcUtils::KeyEnumInfo> * const,std::shared_ptr<DsNgcUtils::KeyEnumInfo> * const,std::shared_ptr<DsNgcUtils::KeyEnumInfo> *,std::allocator<std::shared_ptr<DsNgcUtils::KeyEnumInfo> > &);
	unsigned __int64 _Get_size_of_n<8>(unsigned __int64);
	unsigned char * _Move_unchecked<unsigned char *,unsigned char *>(unsigned char *,unsigned char *,unsigned char *);
	unsigned char * _Uninitialized_copy<unsigned char *,allocator<unsigned char> >(unsigned char * const,unsigned char * const,unsigned char *,std::allocator<unsigned char> &);
	unsigned char * _Uninitialized_move<unsigned char *,allocator<unsigned char> >(unsigned char * const,unsigned char * const,unsigned char *,std::allocator<unsigned char> &);
	unsigned char * _Uninitialized_value_construct_n<allocator<unsigned char> >(unsigned char *,unsigned __int64,std::allocator<unsigned char> &);
	unsigned short * _Uninitialized_move<unsigned short *,allocator<unsigned short> >(unsigned short * const,unsigned short * const,unsigned short *,std::allocator<unsigned short> &);
	unsigned short * _Uninitialized_value_construct_n<allocator<unsigned short> >(unsigned short *,unsigned __int64,std::allocator<unsigned short> &);
	void * _Allocate<16,_Default_allocate_traits,0>(unsigned __int64);
	void * _Allocate_manually_vector_aligned<_Default_allocate_traits>(unsigned __int64);
	void _Adjust_manually_vector_aligned(void * &,unsigned __int64 &);
	void _Deallocate<16,0>(void *,unsigned __int64);
	void _Destroy_range<allocator<TileData> >(TileData *,TileData * const,std::allocator<TileData> &);
	void _Destroy_range<allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > * const,std::allocator<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > &);
	void _Destroy_range<allocator<shared_ptr<DsNgcUtils::KeyEnumInfo> > >(std::shared_ptr<DsNgcUtils::KeyEnumInfo> *,std::shared_ptr<DsNgcUtils::KeyEnumInfo> * const,std::allocator<std::shared_ptr<DsNgcUtils::KeyEnumInfo> > &);
	void _Destroy_range<allocator<wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy> > >(wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy> *,wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy> * const,std::allocator<wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy> > &);
	void _Throw_bad_array_new_length();
	void _Throw_range_error(char const * const);
	void _Throw_tree_length_error();
	void _Xlen_string();
	void swap<RdrSelVerificationParameter::ReaderAndContainerParameter,0>(RdrSelVerificationParameter::ReaderAndContainerParameter &,RdrSelVerificationParameter::ReaderAndContainerParameter &);
	void swap<RdrSelVerificationParameter::SerialNumberParameter,0>(RdrSelVerificationParameter::SerialNumberParameter &,RdrSelVerificationParameter::SerialNumberParameter &);
	wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy> * _Copy_unchecked<wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy> *,wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy> *>(wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy> *,wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy> *,wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy> *);
	wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy> * _Uninitialized_copy<wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy> *,allocator<wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy> > >(wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy> * const,wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy> * const,wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy> *,std::allocator<wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy> > &);
	wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy> * _Uninitialized_move<wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy> *,allocator<wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy> > >(wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy> * const,wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy> * const,wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy> *,std::allocator<wil::com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,wil::err_exception_policy> > &);
};

namespace wil
{
	struct ResultException
	{
		ResultException(ResultException const &);
		virtual char const * what();
		virtual ~ResultException();
	};

	struct StoredFailureInfo
	{
		void SetFailureInfo(FailureInfo const &);
	};

	struct com_ptr_t<ComInterfaceImpl<ICredentialProvider,CredentialProviderAdaptor,RdrSelProvider>,err_exception_policy>
	{
		~com_ptr_t<ComInterfaceImpl<ICredentialProvider,CredentialProviderAdaptor,RdrSelProvider>,err_exception_policy>();
	};

	struct com_ptr_t<ComInterfaceImpl<ICredentialProvider,CredentialProviderAdaptor,WinRTProvider>,err_exception_policy>
	{
		~com_ptr_t<ComInterfaceImpl<ICredentialProvider,CredentialProviderAdaptor,WinRTProvider>,err_exception_policy>();
	};

	struct com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelNoReader>,err_exception_policy>
	{
		~com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelNoReader>,err_exception_policy>();
	};

	struct com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,err_exception_policy>
	{
		com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,err_exception_policy>(ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader> *);
		void attach(ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader> *);
		~com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,RdrSelReader>,err_exception_policy>();
	};

	struct com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,WinRTPinChangeCredential>,err_exception_policy>
	{
		~com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,WinRTPinChangeCredential>,err_exception_policy>();
	};

	struct com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,WinRTPinPromptCredential>,err_exception_policy>
	{
		~com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,WinRTPinPromptCredential>,err_exception_policy>();
	};

	struct com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,WinRTVscCreateCredential>,err_exception_policy>
	{
		~com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,WinRTVscCreateCredential>,err_exception_policy>();
	};

	struct com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,WinRTVscDestroyCredential>,err_exception_policy>
	{
		~com_ptr_t<ComInterfaceImpl<ICredentialProviderCredential,CredentialProviderCredentialAdaptor,WinRTVscDestroyCredential>,err_exception_policy>();
	};

	struct com_ptr_t<ICredentialProviderCredential,err_exception_policy>
	{
		void attach(ICredentialProviderCredential *);
		~com_ptr_t<ICredentialProviderCredential,err_exception_policy>();
	};

	struct com_ptr_t<ICredentialProviderCredentialEvents,err_exception_policy>
	{
		com_ptr_t<ICredentialProviderCredentialEvents,err_exception_policy> & operator=(ICredentialProviderCredentialEvents *);
		void reset();
		~com_ptr_t<ICredentialProviderCredentialEvents,err_exception_policy>();
	};

	struct com_ptr_t<ICredentialProviderCredentialEvents2,err_exception_policy>
	{
		~com_ptr_t<ICredentialProviderCredentialEvents2,err_exception_policy>();
	};

	struct com_ptr_t<ICredentialProviderEvents,err_exception_policy>
	{
		~com_ptr_t<ICredentialProviderEvents,err_exception_policy>();
	};

	struct com_ptr_t<ICredentialProviderUser,err_exception_policy>
	{
		~com_ptr_t<ICredentialProviderUser,err_exception_policy>();
	};

	struct com_ptr_t<IGlobalInterfaceTable,err_exception_policy>
	{
		~com_ptr_t<IGlobalInterfaceTable,err_exception_policy>();
	};

	struct com_ptr_t<IStream,err_exception_policy>
	{
		~com_ptr_t<IStream,err_exception_policy>();
	};

	struct cotaskmem_secure_deleter
	{
		void operator()<unsigned char>(unsigned char *);
	};

	namespace details
	{
		struct ScopeExitFnGuard<std::reference_wrapper<<lambda_547a7039eb7f15cdc2cae41ce0c8c3de> > >
		{
			void operator()();
			~ScopeExitFnGuard<std::reference_wrapper<<lambda_547a7039eb7f15cdc2cae41ce0c8c3de> > >();
		};

		struct ScopeExitFnGuard<std::reference_wrapper<<lambda_82872ac41f2596c097f05dc7f9b77730> > >
		{
			void operator()();
			~ScopeExitFnGuard<std::reference_wrapper<<lambda_82872ac41f2596c097f05dc7f9b77730> > >();
		};

		class ThreadFailureCallbackHolder
		{
			static long volatile s_telemetryId;
		public:
			static bool GetThreadContext(FailureInfo *,ThreadFailureCallbackHolder *,char *,unsigned __int64);
			static void GetContextAndNotifyFailure(FailureInfo *,char *,unsigned __int64);
		};

		namespace in1diag3
		{
			long Log_Hr(void *,unsigned int,char const *,long);
			long Return_GetLastError(void *,unsigned int,char const *);
			void FailFast_CaughtException(void *,unsigned int,char const *);
			void FailFast_Hr(void *,unsigned int,char const *,long);
			void FailFast_Unexpected(void *,unsigned int,char const *);
			void Return_Hr(void *,unsigned int,char const *,long);
			void _FailFastImmediate_Unexpected();
			void _FailFast_GetLastError(void *,unsigned int,char const *);
			void _FailFast_Hr(void *,unsigned int,char const *,long);
			void _FailFast_Unexpected(void *,unsigned int,char const *);
		};

		class shared_buffer
		{
			void assign(long *,unsigned __int64);
		public:
			bool create(void const *,unsigned __int64);
			void reset();
		};

		bool GetModuleInformation(void *,unsigned int *,char *,unsigned __int64);
		bool g_processShutdownInProgress;
		bool g_resultMessageCallbackSet;
		char const * (* ?? g_pfnGetModuleName)();
		char const * GetCurrentModuleName();
		details::ResultStatus ReportFailure_CaughtExceptionCommonNoReturnBase<3>(void *,unsigned int,char const *,char const *,char const *,void *,unsigned short *,unsigned __int64,SupportedExceptions);
		details::ResultStatus ResultFromCaughtExceptionInternal(unsigned short *,unsigned __int64,bool *);
		details_abi::ProcessLocalStorage<details_abi::ProcessLocalData> g_processLocalData;
		details_abi::ThreadLocalStorage<details::ThreadFailureCallbackHolder *> * g_pThreadFailureCallbacks;
		details_abi::ThreadLocalStorage<details::ThreadFailureCallbackHolder *> g_threadFailureCallbacks;
		int RecordException(long);
		int RecordFailFast(long);
		int RecordLog(long);
		int RecordReturn(long);
		long (* ?? g_pfnRtlDisownModuleHeapAllocation)(void *,void *);
		long GetLastErrorFailHr();
		long HrToNtStatus(long);
		long RecognizeCaughtExceptionFromCallback(unsigned short *,unsigned __int64);
		long ReportFailure_CaughtException<3>(void *,unsigned int,char const *,char const *,char const *,void *,SupportedExceptions);
		long ReportFailure_GetLastErrorHr<1>(void *,unsigned int,char const *,char const *,char const *,void *);
		long RtlDisownModuleHeapAllocation(void *,void *);
		long StringCchPrintfA(char *,unsigned __int64,char const *,...);
		unsigned __int64 ResultStringSize(char const *);
		unsigned __int64 ResultStringSize(unsigned short const *);
		unsigned char (* ?? g_pfnDllShutdownInProgress)();
		unsigned char * WriteResultString<char const *>(unsigned char *,unsigned char *,char const *,char const * *);
		unsigned char * WriteResultString<unsigned short const *>(unsigned char *,unsigned char *,unsigned short const *,unsigned short const * *);
		unsigned char RtlDllShutdownInProgress();
		unsigned long GetLastErrorFail(void *,unsigned int,char const *,char const *,char const *,void *);
		unsigned long ReportFailure_GetLastError<3>(void *,unsigned int,char const *,char const *,char const *,void *);
		unsigned short * LogStringPrintf(unsigned short *,unsigned short const *,unsigned short const *,...);
		void (* ?? g_pfnDebugBreak)();
		void (* ?? g_pfnFailfastWithContextCallback)(FailureInfo const &);
		void (* ?? g_pfnGetContextAndNotifyFailure)(FailureInfo *,char *,unsigned __int64);
		void (* ?? g_pfnLoggingCallback)(FailureInfo const &);
		void (* ?? g_pfnNotifyFailure)(FailureInfo *);
		void (* ?? g_pfnOriginateCallback)(FailureInfo const &);
		void (* ?? g_pfnTelemetryCallback)(bool,FailureInfo const &);
		void (* g_pfnFormatNtStatusMsg)(long,unsigned short *,unsigned long);
		void (* g_pfnRaiseFailFastException)(_EXCEPTION_RECORD *,_CONTEXT *,unsigned long);
		void (* g_pfnRethrow)();
		void (* g_pfnThrowResultException)(FailureInfo const &);
		void * ProcessHeapAlloc(unsigned long,unsigned __int64);
		void CloseHandle(void *);
		void DebugBreak();
		void FormatNtStatusMsg(long,unsigned short *,unsigned long);
		void FreeProcessHeap(void *);
		void GetContextAndNotifyFailure(FailureInfo *,char *,unsigned __int64);
		void LogFailure(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,details::ResultStatus const &,unsigned short const *,bool,unsigned short *,unsigned __int64,char *,unsigned __int64,FailureInfo *);
		void MaybeGetExceptionString(ResultException const &,unsigned short *,unsigned __int64);
		void MaybeGetExceptionString(std::exception const &,unsigned short *,unsigned __int64);
		void MicrosoftInternalNotifyFailure(FailureInfo *);
		void ReleaseMutex(void *);
		void ReportFailure_Base<1,0>(void *,unsigned int,char const *,char const *,char const *,void *,details::ResultStatus const &,unsigned short const *,details::ReportFailureOptions);
		void ReportFailure_Base<2,0>(void *,unsigned int,char const *,char const *,char const *,void *,details::ResultStatus const &,unsigned short const *,details::ReportFailureOptions);
		void ReportFailure_Base<3,0>(void *,unsigned int,char const *,char const *,char const *,void *,details::ResultStatus const &,unsigned short const *,details::ReportFailureOptions);
		void ReportFailure_Hr<1>(void *,unsigned int,char const *,char const *,char const *,void *,long);
		void ReportFailure_Hr<2>(void *,unsigned int,char const *,char const *,char const *,void *,long);
		void ReportFailure_Hr<3>(void *,unsigned int,char const *,char const *,char const *,void *,long);
		void ReportFailure_NoReturn<3>(void *,unsigned int,char const *,char const *,char const *,void *,details::ResultStatus const &,unsigned short const *,details::ReportFailureOptions);
		void ReportFailure_Return<1>(void *,unsigned int,char const *,char const *,char const *,void *,details::ResultStatus const &,unsigned short const *,details::ReportFailureOptions);
		void ReportFailure_Return<2>(void *,unsigned int,char const *,char const *,char const *,void *,details::ResultStatus const &,unsigned short const *,details::ReportFailureOptions);
		void Rethrow();
		void ThrowResultExceptionInternal(FailureInfo const &);
		void WilDynamicLoadRaiseFailFastException(_EXCEPTION_RECORD *,_CONTEXT *,unsigned long);
		void WilFailFast(FailureInfo const &);
		void WilRaiseFailFastException(_EXCEPTION_RECORD *,_CONTEXT *,unsigned long);
	};

	namespace details_abi
	{
		struct ProcessLocalStorage<ProcessLocalData>
		{
			ProcessLocalData * GetShared();
			~ProcessLocalStorage<ProcessLocalData>();
		};

		struct ProcessLocalStorageData<ProcessLocalData>
		{
			static long Acquire(char const *,ProcessLocalStorageData<ProcessLocalData> * *);
			void Release();
			~ProcessLocalStorageData<ProcessLocalData>();
		};

		class SemaphoreValue
		{
			long CreateFromValueInternal(unsigned short const *,bool,unsigned __int64);
			static long GetValueFromSemaphore(void *,long *);
			static long TryGetValueInternal(unsigned short const *,bool,unsigned __int64 *,bool *);
		public:
			~SemaphoreValue();
		};

		struct ThreadLocalData
		{
			void Clear();
			void SetLastError(FailureInfo const &);
		};

		struct ThreadLocalFailureInfo
		{
			void Set(FailureInfo const &,unsigned int);
		};

		struct ThreadLocalStorage<ThreadLocalData>
		{
			ThreadLocalData * GetLocal(bool);
			~ThreadLocalStorage<ThreadLocalData>();
		};

		struct ThreadLocalStorage<details::ThreadFailureCallbackHolder *>
		{
			details::ThreadFailureCallbackHolder * * GetLocal(bool);
			~ThreadLocalStorage<details::ThreadFailureCallbackHolder *>();
		};

		details_abi::ProcessLocalStorage<details_abi::ProcessLocalData> * g_pProcessLocalData;
		details_abi::ThreadLocalData * GetThreadLocalDataCache(bool);
	};

	WilFailureReportFlags g_moduleFailureReportFlags;
	bool (* ?? g_pfnIsDebuggerPresent)();
	bool (* ?? g_pfnWilFailFast)(wil::FailureInfo const &);
	bool g_fBreakOnFailure;
	bool g_fIsDebuggerPresent;
	long (* ?? g_pfnResultFromCaughtException)();
	long GetFailureLogString(unsigned short *,unsigned __int64,wil::FailureInfo const &);
	long ResultFromCaughtException();
};

namespace wistd
{
	struct unique_ptr<unsigned char,wil::cotaskmem_secure_deleter>
	{
		~unique_ptr<unsigned char,wil::cotaskmem_secure_deleter>();
	};

	struct unique_ptr<wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>,wil::process_heap_deleter>
	{
		~unique_ptr<wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>,wil::process_heap_deleter>();
	};

};

?ProcessReaderIcon@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@AEAVBitmap@Gdiplus@@_N@Z;
DeviceIndependentResourceId::type GetResourceIdFromError(unsigned long);
HINSTANCE__ * g_hinst;
HINSTANCE__ * g_wil_details_kernelbaseModuleHandle;
HINSTANCE__ * g_wil_details_ntdllModuleHandle;
HINSTANCE__ * wil_details_GetNtDllModuleHandle();
_CREDENTIAL_PROVIDER_FIELD_DESCRIPTOR * CoMemAllocOrThrow<_CREDENTIAL_PROVIDER_FIELD_DESCRIPTOR>();
_RTL_CRITICAL_SECTION g_cs;
_RTL_CRITICAL_SECTION g_csExternalPin;
__type_info_node __type_info_root_node;
bool IsLocalSession();
bool IsSmartCardPinChangeAllowed(unsigned short const *);
bool IsSmartCardPnpEnabled();
bool isUnblockEnabled();
char * WPP_pszIndent;
errorlib::scoped_error<hresult_error::tag> DevhlprGenerateBitmapFromImageBlobInternal(std::vector<unsigned char,std::allocator<unsigned char> > &,HBITMAP__ * *);
errorlib::scoped_error<hresult_error::tag> DevhlprGetReaderBitmapInternal(unsigned short *,HBITMAP__ * *);
errorlib::scoped_error<hresult_error::tag> DevhlprGetReaderDeviceTypeIdInternal(unsigned short *,unsigned long *);
errorlib::scoped_error<hresult_error::tag> DevhlprGetReaderImageBlobInternal(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::vector<unsigned char,std::allocator<unsigned char> > &);
errorlib::scoped_error<winerror_error::tag> VerifyCard(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,RdrSelVerificationParameter const &);
errorlib::scoped_error<winerror_error::tag> make_error_win32_if(int);
int _IsSetSerializationFromSspiPfc(unsigned char *,unsigned long);
long CClassFactory_CreateInstance(_GUID const &,_GUID const &,void * *);
long CCredential_CreateInstance(CredentialProviderVersion,CREDENTIAL_DATA *,unsigned short const *,unsigned short const *,ICredentialProviderCredential * *);
long CCv6s_HeapFree(void *,void *);
long CCv6s_HeapReallocArray<void *>(void *,unsigned long,void *,unsigned __int64,unsigned __int64,void * * *);
long CExternalPinHelper_CreateInstance(CExternalPinHelper * *,CSmartcardReaderData *,CSmartcardReaderCredentialData *);
long CExternalPinHelper_Release(CExternalPinHelper * *);
long CPinCredential_CreateInstance(CPinCredential * *,_USER_MATCH_DATA *,int);
long CPinCredential_GetICredential(CPinCredential *,ICredentialProviderCredential * *);
long CPinCredential_Release(CPinCredential * *);
long CPinProvider_CreateInstance(_GUID const &,void * *);
long CProvider_V1_CreateInstance(_GUID const &,void * *);
long CProvider_V2_CreateInstance(_GUID const &,void * *);
long ClearStoredCertificate();
long ConvertPinToAnsi(unsigned short *,unsigned char * *,unsigned long *);
long CreateAuthIdentityEx(unsigned short const *,unsigned short const *,unsigned short const *,int,_SEC_WINNT_AUTH_IDENTITY_EXW * *);
long CreateErrorString(DeviceIndependentResourceId::type,DeviceIndependentResourceId::type,unsigned long,unsigned short * *);
long CreateNgcTicketStringFromSmartCardPin(unsigned short const *,unsigned short const *,unsigned short * *);
long CredentialProviderFieldDescriptorCoAllocCopy(unsigned long,_CREDENTIAL_PROVIDER_FIELD_TYPE,DeviceIndependentResourceId::type,unsigned long,_GUID,_CREDENTIAL_PROVIDER_FIELD_DESCRIPTOR * *);
long GetAuthPackageId(char *,unsigned long *);
long GetCertificateHash(_CERT_CONTEXT const *,unsigned short * *);
long GetCurrentRegKey(unsigned short * *);
long GetDefaultCertificate(unsigned short * *);
long GetErrorStringForReportResult(long,long,_CREDENTIAL_PROVIDER_USAGE_SCENARIO,unsigned long,unsigned short * *);
long GetErrorStringFromHResult(long,DeviceIndependentResourceId::type,unsigned long,unsigned short * *);
long GetMarshalledCertificateHash(_CERT_CONTEXT const *,unsigned short * *);
long GetNegoAuthPackageId(unsigned long *);
long GetReaderActivityCount(unsigned short *,unsigned long *);
long GetSmartCardPinChangeString(unsigned long,unsigned short const *,unsigned short * *);
long GetUnblockString(unsigned long,unsigned short * *);
long HRESULTFromLastErrorError();
long HRESULT_FROM_GDIPLUS(Gdiplus::Status);
long HRFromLastErrorError();
long RdrSelProvider_CreateInstance(_GUID const &,void * *);
long ReadValueFromKey(HKEY__ *,unsigned short *,unsigned short * *);
long RetrieveStoredData(unsigned short * *,unsigned short * *);
long RetrieveStoredUserName(_CERT_CONTEXT const *,unsigned short *,unsigned long);
long StoreUserNameHint(_CERT_CONTEXT const *,unsigned short *);
long StringCbCatA(char *,unsigned __int64,char const *);
long StringCbCopyNW(unsigned short *,unsigned __int64,unsigned short const *,unsigned __int64);
long StringCbCopyW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCbPrintfW(unsigned short *,unsigned __int64,unsigned short const *,...);
long StringCchCopyA(char *,unsigned __int64,char const *);
long StringCchCopyNW(unsigned short *,unsigned __int64,unsigned short const *,unsigned __int64);
long StringCchCopyW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchPrintfExW(unsigned short *,unsigned __int64,unsigned short * *,unsigned __int64 *,unsigned long,unsigned short const *,...);
long StringCchPrintfW(unsigned short *,unsigned __int64,unsigned short const *,...);
long StringResourceStringCoAllocCopy(DeviceIndependentResourceId::type,unsigned long,unsigned short * *);
long StringResourceStringPrivateHeapAllocCopy(DeviceIndependentResourceId::type,unsigned long,unsigned short * *);
long StringStringCoAllocCopy(unsigned short const *,unsigned short * *);
long StringStringPrivateHeapAllocCopy(unsigned short const *,unsigned short * *);
long StringUnicodeStringAllocCopy(_UNICODE_STRING *,unsigned short * *);
long TCoAllocArray<unsigned char>(unsigned __int64,unsigned char * *);
long TPrivateHeapAllocArray<unsigned char>(unsigned __int64,unsigned char * *);
long TPrivateHeapAllocArray<unsigned short>(unsigned __int64,unsigned short * *);
long TResourceStringAllocCopyEx<unsigned short *>(HINSTANCE__ *,unsigned int,unsigned short,long (*)(void *,unsigned __int64,unsigned short * *),void *,unsigned short * *);
long WinRTProvider_CreateInstance(_GUID const &,void * *);
long _CSerialization_CreateInstance(_CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION const *,int,CSerialization * *);
long _GetCreduiwinSerializationFromInputAuthIdentity(_SEC_WINNT_AUTH_IDENTITY_EX2 *,unsigned char * *,unsigned long *);
std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > LoadResourceString(DeviceIndependentResourceId::type,unsigned long);
unsigned char * CoMemArrayAllocOrThrow<unsigned char>(unsigned __int64);
unsigned char * operator+=<unsigned char,unsigned long,SafeIntInternal::SafeIntExceptionHandler<SafeIntException> >(unsigned char * &,SafeInt<unsigned long,SafeIntInternal::SafeIntExceptionHandler<SafeIntException> >);
unsigned int GetDeviceSpecificResourceId(DeviceIndependentResourceId::type,unsigned long);
unsigned long AcquireCardContext(_CARD_HELPER_INFO *);
unsigned long I_GetCertificateContext_UPN_DN_Hash(_CERT_CONTEXT const *,unsigned char *,unsigned long *);
unsigned long module_method_stub(CardAcquireContextMethod,errorlib::scoped_error<winerror_error::tag> const &,...);
unsigned short * CoMemArrayAllocOrThrow<unsigned short>(unsigned __int64);
unsigned short * CoMemResourceFormatStringAllocCopyOrThrow(DeviceIndependentResourceId::type,unsigned long,...);
unsigned short * CoMemResourceStringAllocCopyOrThrow(DeviceIndependentResourceId::type,unsigned long);
unsigned short * CoMemStringAllocCopyOrThrow(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &);
unsigned short * CoMemStringAllocCopyOrThrow(std::basic_string<unsigned short,std::char_traits<unsigned short>,wil::secure_allocator<unsigned short> > const &);
unsigned short * InternalCoMemStringAllocCopyOrThrow<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > >(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &);
unsigned short * InternalCoMemStringAllocCopyOrThrow<std::basic_string<unsigned short,std::char_traits<unsigned short>,wil::secure_allocator<unsigned short> > >(std::basic_string<unsigned short,std::char_traits<unsigned short>,wil::secure_allocator<unsigned short> > const &);
void * AllocHelper(unsigned __int64);
void * ReAllocHelper(void *,unsigned __int64);
void * g_hHeap;
void * operator new(unsigned __int64);
void * operator new(unsigned __int64,std::nothrow_t const &);
void FreeHelper(void *);
void IgnoreFailed(errorlib::scoped_error<gdiplusstatus_error::tag> const &,char const *);
void IgnoreFailed(errorlib::scoped_error<hresult_error::tag> const &,char const *);
void IgnoreFailed(errorlib::scoped_error<winerror_error::tag> const &,char const *);
void PrivateHeapSafeAllocaInitialize();
void ThrowIfFailed(errorlib::scoped_error<gdiplusstatus_error::tag> const &,char const *);
void ThrowIfFailed(errorlib::scoped_error<hresult_error::tag> const &,char const *);
void ThrowIfFailed(errorlib::scoped_error<ntstatus_error::tag> const &,char const *);
void ThrowIfFailed(errorlib::scoped_error<winerror_error::tag> const &,char const *);
void WppTraceIndent(char * *,_WppTraceIndentType);
void __empty_global_delete(void *,unsigned __int64);
void __global_delete(void *,unsigned __int64);
void __scrt_initialize_type_info();
void __scrt_throw_std_bad_alloc();
void __scrt_throw_std_bad_array_new_length();
void __scrt_uninitialize_type_info();
void _tlgWriteActivityAutoStop<0,5>(_tlgProvider_t const *,_GUID const *);
void _tlgWriteActivityAutoStop<70368744177664,5>(_tlgProvider_t const *,_GUID const *);
void operator delete(void *);
void operator delete(void *,std::nothrow_t const &);
void operator delete(void *,unsigned __int64);
