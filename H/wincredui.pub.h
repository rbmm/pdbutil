class <lambda_0374aa0a5d1201b2358c6bce99369c58>
{
	static <lambda_invoker_cdecl>(_TP_CALLBACK_INSTANCE *,void *,_TP_TIMER *);
};

class <lambda_120d0c6b51dc644cb63ed5c7fc62f6c3>
{
	static <lambda_invoker_cdecl>();
};

class <lambda_152aa9d2a3a0648fa2fa7fcef514b376>
{
	static <lambda_invoker_cdecl>(void *);
};

class <lambda_1ad7ecfab602a777ecf020873216a663>
{
	static <lambda_invoker_cdecl>(void *);
};

class <lambda_5035b992506f4af81a770c5842624510>
{
	static <lambda_invoker_cdecl>(_TP_CALLBACK_INSTANCE *,void *,_TP_TIMER *);
};

class <lambda_994cbaceb63be20e6344ac85b106800f>
{
	static <lambda_invoker_cdecl>();
};

struct <lambda_a9d94bce5eff6ae3e5080658d4694c5b>
{
	long operator()();
};

class <lambda_aa194dc0bf891154933407eb98fb868a>
{
	static <lambda_invoker_cdecl>(void *);
};

class <lambda_d51448ba32f8ef42e59400edd4566183>
{
	static <lambda_invoker_cdecl>(_TP_CALLBACK_INSTANCE *,void *,_TP_TIMER *);
};

class <lambda_fee8cea507d2413a58be13acfb66740a>
{
	static <lambda_invoker_cdecl>(void *);
};

namespace ARI
{
	namespace ProcessToken
	{
		struct AutoSysAppId
		{
			long Close();
		};

		namespace SysAppId
		{
			long GetAppUserModelId(_TOKEN_SECURITY_ATTRIBUTE_V1 const *,unsigned int,unsigned int *,unsigned short *);
			long GetPackageFamilyName(_TOKEN_SECURITY_ATTRIBUTE_V1 const *,unsigned int,unsigned int *,unsigned short *);
			long GetPackageRelativeApplicationId(_TOKEN_SECURITY_ATTRIBUTE_V1 const *,unsigned int,unsigned int *,unsigned short *);
			long Open(void *,_TOKEN_SECURITY_ATTRIBUTES_INFORMATION * *,_TOKEN_SECURITY_ATTRIBUTE_V1 const * *,bool *);
			long OpenTokenForProcess(void *,void * *);
			void CloseToken(void *);
		};

	};

	_TOKEN_SECURITY_ATTRIBUTES_INFORMATION * Allocate<_TOKEN_SECURITY_ATTRIBUTES_INFORMATION>(unsigned __int64);
	void Free(void *);
};

struct CREDUI_CHANGE_PASSWORD_INFO
{
	~CREDUI_CHANGE_PASSWORD_INFO();
};

struct CTCoAllocPolicy
{
	static long Alloc(void *,unsigned long,unsigned __int64,void * *);
};

namespace CallerIdentity
{
	long GetCallerProcessImageName(unsigned short *,unsigned long *);
	long GetCallingProcessHandle(unsigned long,RUNTIMEBROKER_CALLERIDENTITY_CHECK,void * *);
	long GetCoreWindowForCurrentThread(_GUID const &,void * *);
	long GetCoreWindowHandleForCurrentThread(HWND__ * *);
	long GetProcessAppId(void *,unsigned short * *);
	long GetProcessAppIdWithAppResolverFallback(void *,unsigned short * *);
	long IsProcessAppContainer(void *,bool *);
};

struct CredUILogging
{
	static _tlgProvider_t const * Provider();
};

struct CredUITelemetry
{
	struct CredUIApartmentActivity
	{
		void StartActivity();
		void Stop(long);
		~CredUIApartmentActivity();
	};

	class CredUIInProcessActivity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		void Stop(long,unsigned long,unsigned long,unsigned long);
		~CredUIInProcessActivity();
	};

	struct CredUIMessagePumpActivity
	{
		void StartActivity();
		void Stop(long);
		~CredUIMessagePumpActivity();
	};

	class CredUIPromptForWindowsCredentialsWorker
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(unsigned short const *,unsigned short const *);
		void Stop(unsigned long,bool);
		~CredUIPromptForWindowsCredentialsWorker();
	};

	class CredUIThroughBrokerActivity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		void Stop(long,unsigned long,unsigned long,unsigned long);
		~CredUIThroughBrokerActivity();
	};

	static void CredUIEarlyWaitExit();
	static void LogBadOwnerWindow(CredUITelemetry::BadWindowType);
};

struct CreduiAutoCompleteComboBox
{
	int Add(unsigned short *,int,int,int,int,int);
	int Enable();
	int Init(HINSTANCE__ *,HWND__ *,unsigned int,int,int);
	int Update(int,unsigned short *,int);
	~CreduiAutoCompleteComboBox();
};

struct CreduiBalloonTip
{
	int Hide();
	int Init(HINSTANCE__ *,HWND__ *);
	int SetInfo(HWND__ *,CREDUI_BALLOON_TIP_INFO const *);
	int Show();
	~CreduiBalloonTip();
};

class CreduiCredentialControl
{
	__int64 MessageHandler(unsigned int,unsigned __int64,__int64);
	int AddCertificates();
	int CreateControls();
	int FindSmartCardInComboBox(_CERT_ENUM *);
	int GetSmartCardInfo(unsigned long,unsigned long,unsigned short *,int *,int *,_CERT_ENUM * *);
	int HandleSmartCardMessages(unsigned int,_CERT_ENUM *);
	int InitComboBoxUserNames();
	int InitWindow();
	int OnGetUserName(unsigned short *,unsigned long);
	int OnGetUserNameA(char *,unsigned long);
	int OnSetUserName(unsigned short *);
	int OnSetUserNameA(char *);
	int OnShowBalloon(_CREDUI_BALLOONW *);
	int OnShowBalloonA(_CREDUI_BALLOONA *);
	int ViewCertificate(int);
	long OnGetUserNameLength();
	static __int64 MessageHandlerCallback(HWND__ *,unsigned int,unsigned __int64,__int64);
	static long ConvertSmartCardPinToAnsi(unsigned short const *,unsigned char * *,unsigned long *);
	static long CreateNgcTicketStringFromSmartCardPin(_CERT_CONTEXT const *,unsigned short const *,unsigned short * *);
	unsigned short * MatchSmartCard(unsigned long,unsigned short *,unsigned long *,_CERT_ENUM * *);
	void CmdlineSavePrompt();
	void CmdlineSmartCardPrompt();
	void Enable(int);
	void OnUserNameSelectionChange();
	void RemoveSmartCardFromComboBox(_CERT_ENUM *,int);
public:
	CreduiCredentialControl();
	static long Register();
	virtual int OnHelpInfo(__int64);
	virtual unsigned int MapID(unsigned int);
	~CreduiCredentialControl();
};

struct CreduiIconParentWindow
{
	int Init(HINSTANCE__ *,unsigned int);
	~CreduiIconParentWindow();
};

class CreduiPasswordBox
{
	__int64 MessageHandler(unsigned int,unsigned __int64,__int64);
	static __int64 MessageHandlerCallback(HWND__ *,unsigned int,unsigned __int64,__int64);
public:
	int Init(HWND__ *,CreduiBalloonTip *,CREDUI_BALLOON_TIP_INFO const *,HFONT__ *,unsigned short);
	~CreduiPasswordBox();
};

class CreduiPasswordDialog
{
	__int64 DialogMessageHandler(unsigned int,unsigned __int64,__int64);
	int InitWindow(HWND__ *);
	static __int64 CmdLineMessageHandlerCallback(HWND__ *,unsigned int,unsigned __int64,__int64);
	static __int64 DialogMessageHandlerCallback(HWND__ *,unsigned int,unsigned __int64,__int64);
	static int ResizeDialogCallback(HWND__ *,__int64);
	static long Registered;
	unsigned long CmdLineDialog();
	unsigned long CmdlinePasswordPrompt();
	unsigned long FinishHandleOk();
	unsigned long HandleOk();
	unsigned long UsernameHandleOk();
	void SelectAndSetWindowCaption();
	void SelectAndSetWindowMessage();
	void SelectBestTargetName(int);
	void SetCredTargetFromInfo();
public:
	CreduiPasswordDialog(int,int,unsigned long,_CREDUI_INFOW *,unsigned short const *,unsigned short *,unsigned long,unsigned short *,unsigned long,int *,unsigned long,_SecHandle *,unsigned long,unsigned long *);
	~CreduiPasswordDialog();
};

class CreduiStringArray
{
	~CreduiStringArray();
public:
	CreduiStringArray();
	int Add(unsigned short const *);
	virtual long Clone(IEnumString * *);
	virtual long Next(unsigned long,unsigned short * *,unsigned long *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Reset();
	virtual long Skip(unsigned long);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CreduiStringArrayFactory
{
	CreduiStringArrayFactory();
	virtual long CreateInstance(IUnknown *,_GUID const &,void * *);
	virtual long LockServer(int);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

namespace Microsoft
{
	namespace WRL
	{
		class ComPtr<IApplicationDesignModeSettingsPriv>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IApplicationResolver>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<ICallingProcessInfo>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<ICoreWindowInterop>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::UI::Core::ICoreWindow>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::UI::Core::ICoreWindowStatic>
		{
		protected:
			unsigned long InternalRelease();
		};

	};

};

class _TlgActivityBase<CredUITelemetry::CredUIApartmentActivity,35184372088832,5>
{
protected:
	~_TlgActivityBase<CredUITelemetry::CredUIApartmentActivity,35184372088832,5>();
public:
	_GUID const * zInternalRelatedId();
};

class _TlgActivityBase<CredUITelemetry::CredUIMessagePumpActivity,35184372088832,5>
{
protected:
	~_TlgActivityBase<CredUITelemetry::CredUIMessagePumpActivity,35184372088832,5>();
public:
	_GUID const * zInternalRelatedId();
};

class _TlgActivityBase<wil::ActivityBase<CredUILogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CredUILogging,_TlgReflectorTag_Param0IsProviderType>,70368744177664,5>
{
protected:
	~_TlgActivityBase<wil::ActivityBase<CredUILogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CredUILogging,_TlgReflectorTag_Param0IsProviderType>,70368744177664,5>();
};

namespace std
{
	nothrow_t const std::nothrow;
};

namespace wil
{
	class ActivityBase<CredUILogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>
	{
		struct ActivityData<CredUILogging,_TlgReflectorTag_Param0IsProviderType>
		{
			~ActivityData<CredUILogging,_TlgReflectorTag_Param0IsProviderType>();
		};

	protected:
		void Destroy();
		void EnsureWatchingCurrentThread();
	public:
		ActivityBase<CredUILogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(char const *,bool);
		_GUID const * zInternalRelatedId();
		virtual bool NotifyFailure(FailureInfo const &);
		void IgnoreCurrentThread();
		void zInternalStart();
		void zInternalStop();
		~ActivityBase<CredUILogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>();
	};

	struct StoredFailureInfo
	{
		void SetFailureInfo(FailureInfo const &);
	};

	struct ThreadFailureCache
	{
		ThreadFailureCache();
		virtual bool NotifyFailure(FailureInfo const &);
		~ThreadFailureCache();
	};

	class TraceLoggingProvider
	{
		virtual bool NotifyFailure(FailureInfo const &);
	protected:
		virtual void Initialize();
		virtual void OnErrorReported(bool,FailureInfo const &);
		virtual ~TraceLoggingProvider();
		void Register(_tlgProvider_t const * const,void (*)(_GUID const *,unsigned long,unsigned char,unsigned __int64,unsigned __int64,_EVENT_FILTER_DESCRIPTOR *,void *));
		void ReportTelemetryFailure(FailureInfo const &);
		void ReportTraceLoggingFailure(FailureInfo const &);
	};

	namespace details
	{
		struct DestroyThreadPoolTimer<SystemThreadPoolMethods,0>
		{
			static void Destroy(_TP_TIMER *);
		};

		class EnabledStateManager
		{
			void RecordCachedUsageUnderLock();
		public:
			unsigned int EnsureSubscribedToFeatureConfigurationChanges();
			void OnStateChange();
			void OnTimer();
			void QueueBackgroundUsageReporting(unsigned int,wil_details_FeatureReportingCache *);
			~EnabledStateManager();
		};

		class FeatureImpl<__WilFeatureTraits_Feature_CredUI_AlwaysBroker>
		{
			wil_details_FeatureStateCache GetCachedFeatureEnabledState();
			wil_details_FeatureStateCache GetCurrentFeatureEnabledState(int *);
		public:
			void ReportUsage(bool,ReportingKind,unsigned __int64);
		};

		class FeatureImpl<__WilFeatureTraits_Feature_CredUI_ConsoleMode>
		{
			wil_details_FeatureStateCache GetCachedFeatureEnabledState();
			wil_details_FeatureStateCache GetCurrentFeatureEnabledState(int *);
		public:
			void ReportUsage(bool,ReportingKind,unsigned __int64);
		};

		class FeatureImpl<__WilFeatureTraits_Feature_Servicing_IEAuthDialog>
		{
			wil_details_FeatureStateCache GetCachedFeatureEnabledState();
			wil_details_FeatureStateCache GetCurrentFeatureEnabledState(int *);
		public:
			bool __private_IsEnabled();
			void ReportUsage(bool,ReportingKind,unsigned __int64);
		};

		struct FeatureLogging
		{
			static _tlgProvider_t const * Provider();
		};

		class FeatureStateManager
		{
			bool EnsureStateData();
			bool EnsureSubscribedToStateChangesUnderLock();
		public:
			void FlushUsage();
			void QueueBackgroundSRUMUsageReporting(unsigned int,unsigned short,unsigned int);
			void RecordFeatureUsage(unsigned int,wil_details_ServiceReportingKind,unsigned __int64);
			void SubscribeToUsageFlush(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *));
			~FeatureStateManager();
		};

		class ThreadFailureCallbackHolder
		{
			static long volatile s_telemetryId;
		public:
			ThreadFailureCallbackHolder(IFailureCallback *,CallContextInfo *,bool);
			static bool GetThreadContext(FailureInfo *,ThreadFailureCallbackHolder *,char *,unsigned __int64);
			static void GetContextAndNotifyFailure(FailureInfo *,char *,unsigned __int64);
			void StartWatching();
			void StopWatching();
			~ThreadFailureCallbackHolder();
		};

		namespace in1diag3
		{
			long Log_Hr(void *,unsigned int,char const *,long);
			long Return_GetLastError(void *,unsigned int,char const *);
			long Return_Win32(void *,unsigned int,char const *,unsigned long);
			unsigned long Log_GetLastError(void *,unsigned int,char const *);
			void FailFast_Unexpected(void *,unsigned int,char const *);
			void Return_Hr(void *,unsigned int,char const *,long);
			void _FailFastImmediate_Unexpected();
			void _FailFast_GetLastError(void *,unsigned int,char const *);
			void _FailFast_Unexpected(void *,unsigned int,char const *);
			void _Log_Hr(void *,unsigned int,char const *,long);
		};

		struct shared_buffer
		{
			void reset();
		};

		struct shared_object<ActivityBase<CredUILogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CredUILogging,_TlgReflectorTag_Param0IsProviderType> >
		{
			void reset();
		};

		struct static_lazy<CredUILogging>
		{
			struct Completer
			{
				~Completer();
			};

			CredUILogging * get(void (*)());
		};

		struct static_lazy<FeatureLogging>
		{
			struct Completer
			{
				~Completer();
			};

			FeatureLogging * get(void (*)());
		};

		FEATURE_ENABLED_STATE WilApiImpl_GetFeatureEnabledState(unsigned int,FEATURE_CHANGE_TIME,int *);
		FEATURE_ENABLED_STATE WilApi_GetFeatureEnabledState(unsigned int,FEATURE_CHANGE_TIME,int *);
		bool GetModuleInformation(void *,unsigned int *,char *,unsigned __int64);
		bool IsFeatureConfigured(wil_FeatureState *,unsigned int,bool,wil_FeatureStore,int *);
		bool g_processShutdownInProgress;
		bool g_resultMessageCallbackSet;
		char const * (* ?? g_pfnGetModuleName)();
		char const * GetCurrentModuleName();
		details_abi::ProcessLocalStorage<details_abi::ProcessLocalData> g_processLocalData;
		details_abi::ThreadLocalStorage<details::ThreadFailureCallbackHolder *> * g_pThreadFailureCallbacks;
		details_abi::ThreadLocalStorage<details::ThreadFailureCallbackHolder *> g_threadFailureCallbacks;
		int RecordException(long);
		int RecordFailFast(long);
		int RecordLog(long);
		int RecordReturn(long);
		int ReportUsageToServiceDirect(wil_details_FeatureReportingCache *,unsigned int,int,int,wil_details_ServiceReportingKind,unsigned int,unsigned __int64,unsigned char);
		long (* ?? g_pfnRtlDisownModuleHeapAllocation)(void *,void *);
		long GetLastErrorFailHr();
		long HrToNtStatus(long);
		long NtStatusToHr(long);
		long ReportFailure_GetLastErrorHr<1>(void *,unsigned int,char const *,char const *,char const *,void *);
		long ReportFailure_Win32<1>(void *,unsigned int,char const *,char const *,char const *,void *,unsigned long);
		long RtlDisownModuleHeapAllocation(void *,void *);
		shutdown_aware_object<details::EnabledStateManager> g_enabledStateManager;
		shutdown_aware_object<details::FeatureStateManager> g_featureStateManager;
		unsigned __int64 ResultStringSize(char const *);
		unsigned __int64 ResultStringSize(unsigned short const *);
		unsigned char (* ?? g_pfnDllShutdownInProgress)();
		unsigned char * WriteResultString<char const *>(unsigned char *,unsigned char *,char const *,char const * *);
		unsigned char * WriteResultString<unsigned short const *>(unsigned char *,unsigned char *,unsigned short const *,unsigned short const * *);
		unsigned char RtlDllShutdownInProgress();
		unsigned long (* ?? g_pfnRtlNtStatusToDosErrorNoTeb)(long);
		unsigned long GetLastErrorFail(void *,unsigned int,char const *,char const *,char const *,void *);
		unsigned long ReportFailure_GetLastError<2>(void *,unsigned int,char const *,char const *,char const *,void *);
		unsigned long ReportFailure_GetLastError<3>(void *,unsigned int,char const *,char const *,char const *,void *);
		unsigned long RtlNtStatusToDosErrorNoTeb(long);
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
		void * ProcessHeapAlloc(unsigned long,unsigned __int64);
		void CloseHandle(void *);
		void DebugBreak();
		void FeatureLoggingHook(unsigned int,FEATURE_LOGGED_TRAITS const *,FEATURE_ERROR const *,int,wil_ReportingKind const *,wil_VariantReportingKind const *,unsigned char,unsigned __int64);
		void FormatNtStatusMsg(long,unsigned short *,unsigned long);
		void FreeProcessHeap(void *);
		void GetContextAndNotifyFailure(FailureInfo *,char *,unsigned __int64);
		void LogFailure(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,details::ResultStatus const &,unsigned short const *,bool,unsigned short *,unsigned __int64,char *,unsigned __int64,FailureInfo *);
		void MicrosoftInternalNotifyFailure(FailureInfo *);
		void RecordFeatureUsageCallback(unsigned int,wil_details_ServiceReportingKind,unsigned int,wil_details_FeatureReportingCache *,wil_details_RecordUsageResult *);
		void RecordSRUMFeatureUsage(unsigned int,unsigned int,unsigned int);
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
		void ReportUsageToService(wil_details_FeatureReportingCache *,unsigned int,int,int,FEATURE_LOGGED_TRAITS const *,int,wil_ReportingKind,unsigned __int64);
		void SubscribeFeatureStateCacheToConfigurationChanges(wil_details_FeatureStateCache *,wil_FeatureChangeTime,unsigned int);
		void UnsubscribeProcessWideUsageFlush(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
		void WilApiImpl_RecordFeatureUsage(unsigned int,unsigned int,unsigned int,char const *);
		void WilApiImpl_SubscribeFeatureStateChangeNotification(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
		void WilApiImpl_UnsubscribeFeatureStateChangeNotification(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
		void WilApi_RecordFeatureUsage(unsigned int,unsigned int,unsigned int,char const *);
		void WilApi_SubscribeFeatureStateChangeNotification(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
		void WilApi_UnsubscribeFeatureStateChangeNotification(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
		void WilDynamicLoadRaiseFailFastException(_EXCEPTION_RECORD *,_CONTEXT *,unsigned long);
		void WilFailFast(FailureInfo const &);
		void WilRaiseFailFastException(_EXCEPTION_RECORD *,_CONTEXT *,unsigned long);
	};

	namespace details_abi
	{
		class FeatureStateData
		{
			void RetrieveUsageUnderLock(UsageIndexes &);
		public:
			bool RecordFeatureUsage(unsigned int,wil_details_ServiceReportingKind,unsigned __int64);
			void ProcessShutdown();
			void RecordUsage();
			~FeatureStateData();
		};

		struct ProcessLocalStorage<FeatureStateData>
		{
			~ProcessLocalStorage<FeatureStateData>();
		};

		struct ProcessLocalStorage<ProcessLocalData>
		{
			~ProcessLocalStorage<ProcessLocalData>();
		};

		struct ProcessLocalStorageData<FeatureStateData>
		{
			static long Acquire(char const *,ProcessLocalStorageData<FeatureStateData> * *);
			void Release();
			~ProcessLocalStorageData<FeatureStateData>();
		};

		struct ProcessLocalStorageData<ProcessLocalData>
		{
			static long Acquire(char const *,ProcessLocalStorageData<ProcessLocalData> * *);
			~ProcessLocalStorageData<ProcessLocalData>();
		};

		class RawUsageIndex
		{
			bool RecordUsageInternal(void *,unsigned __int64,void *,unsigned __int64,unsigned int);
			unsigned char * FindInsertionPointOrIncrement(UsageIndexProperty &,unsigned char *,void *,unsigned __int64,unsigned int);
			unsigned char * LowerBound(unsigned char *,unsigned __int64,void *,unsigned __int64);
			unsigned char * SkipValues(UsageIndexProperty &,unsigned char *);
		public:
			RawUsageIndex(unsigned short,unsigned short,CountSize,unsigned short,CountSize);
			bool Iterate(wistd::function<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>);
			bool RecordUsage(void *,unsigned __int64,void *,unsigned __int64,unsigned int);
			void SetBuffer(void *,unsigned __int64,unsigned __int64);
			void Swap(RawUsageIndex &);
		};

		class SemaphoreValue
		{
			long CreateFromValueInternal(unsigned short const *,bool,unsigned __int64);
			static long GetValueFromSemaphore(void *,long *);
			static long TryGetValueInternal(unsigned short const *,bool,unsigned __int64 *,bool *);
		public:
			static long TryGetPointer(unsigned short const *,void * *);
			void Destroy();
			~SemaphoreValue();
		};

		struct SubscriptionList
		{
			SubscriptionList();
			void OnSignaled(srwlock &);
			void SubscribeUnderLock(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
			void Unsubscribe(srwlock &,FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
			~SubscriptionList();
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
			~ThreadLocalStorage<ThreadLocalData>();
		};

		struct ThreadLocalStorage<details::ThreadFailureCallbackHolder *>
		{
			details::ThreadFailureCallbackHolder * * GetLocal(bool);
			~ThreadLocalStorage<details::ThreadFailureCallbackHolder *>();
		};

		struct UsageIndexProperty
		{
			bool Read(unsigned char * &,unsigned char *);
			bool Write(unsigned char * &,unsigned char *);
			int Compare(void *,unsigned __int64);
			unsigned __int64 GetSize();
			void UpdateCount(unsigned int);
		};

		struct UsageIndexes
		{
			UsageIndexes();
			void Record();
			~UsageIndexes();
		};

		struct heap_buffer
		{
			bool ensure(unsigned __int64);
			bool push_back(void const *,unsigned __int64);
			bool reserve(unsigned __int64);
		};

		details_abi::ProcessLocalStorage<details_abi::ProcessLocalData> * g_pProcessLocalData;
		details_abi::ThreadLocalData * GetThreadLocalDataCache(bool);
		void RecordWnfUsageIndex(__WIL__WNF_STATE_NAME const *,unsigned __int64,details_abi::RawUsageIndex const &);
	};

	struct last_error_context
	{
		~last_error_context();
	};

	WilFailureReportFlags g_moduleFailureReportFlags;
	bool (* ?? g_pfnIsDebuggerPresent)();
	bool (* ?? g_pfnWilFailFast)(wil::FailureInfo const &);
	bool ProcessShutdownInProgress();
	bool g_fBreakOnFailure;
	bool g_fIsDebuggerPresent;
	long GetFailureLogString(unsigned short *,unsigned __int64,wil::FailureInfo const &);
};

namespace wistd
{
	namespace __function
	{
		struct __func<<lambda_8db0ce862824541f40dfb767113f1e28>,bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>
		{
			virtual void __clone(__base<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)> *);
			virtual void __move(__base<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)> *);
			virtual void destroy();
		};

		struct __func<<lambda_f11b7bb1fbf0dd15c57bb4b71ed15b0d>,long (unsigned short *,unsigned __int64,unsigned __int64 *)>
		{
			virtual void __clone(__base<long (unsigned short *,unsigned __int64,unsigned __int64 *)> *);
			virtual void __move(__base<long (unsigned short *,unsigned __int64,unsigned __int64 *)> *);
			virtual void destroy();
		};

	};

	struct function<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>
	{
		~function<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>();
	};

	struct function<long (unsigned short *,unsigned __int64,unsigned __int64 *)>
	{
		long operator()(unsigned short *,unsigned __int64,unsigned __int64 *);
		~function<long (unsigned short *,unsigned __int64,unsigned __int64 *)>();
	};

};

CREDUI_BALLOON_TIP_INFO CreduiCustomTipInfo;
CREDUI_BALLOON_TIP_INFO const CreduiCapsLockTipInfo;
CREDUI_STRINGS CreduiStrings;
FEATURE_ENABLED_STATE (* g_wil_details_apiGetFeatureEnabledState)(unsigned int,FEATURE_CHANGE_TIME,int *);
FEATURE_ENABLED_STATE (* g_wil_details_internalGetFeatureEnabledState)(unsigned int,FEATURE_CHANGE_TIME,int *);
HINSTANCE__ * CreduiInstance;
HINSTANCE__ * g_wil_details_kernelbaseModuleHandle;
HINSTANCE__ * g_wil_details_ntdllModuleHandle;
HINSTANCE__ * wil_details_GetKernelBaseModuleHandle();
HINSTANCE__ * wil_details_GetNtDllModuleHandle();
HWND__ * (* pHtmlHelpA)(HWND__ *,char const *,unsigned int,unsigned __int64);
HWND__ * (* pHtmlHelpW)(HWND__ *,unsigned short const *,unsigned int,unsigned __int64);
HWND__ * InferOwnerWindow();
_CRED_AWAITING_CONFIRMATION * pCredConfirmationListHead;
_GUID CreduiStringArrayClassId;
_RTL_CRITICAL_SECTION CredConfirmationCritSect;
_RTL_CRITICAL_SECTION g_cs;
bool AllowAsInferredOwnerWindow(HWND__ *);
bool EnterCredUIIfNotInProgress();
bool IsCharmWindowInWideMode(HWND__ *);
bool IsLowIL(void *);
bool IsProcessASTA();
bool _ForceBrokerForXAML(MouseInPointerStatus *);
bool _IsOwnerWindowSpecifiedAndEnabled(CREDUI_INFO_INTERNAL *);
bool _tlgGuidIsZero(_GUID const &);
bool g_CredUIInProgress;
int AddCredToConfirmationList(unsigned short const *,_CREDENTIAL_TARGET_INFORMATIONW *,_CREDENTIALW *,unsigned long,int);
int CheckForSSOCred(unsigned short *);
int CompleteUserName(unsigned short *,unsigned long,_CREDENTIAL_TARGET_INFORMATIONW *,unsigned short *,unsigned long);
int CredUIMarshallNode(_CERT_ENUM *,unsigned short *);
int CreduiChangeDomainPassword(HWND__ *,unsigned short const *,unsigned short *,unsigned long);
int CreduiGetAdministratorsGroupInfo(_LOCALGROUP_MEMBERS_INFO_2 * *,unsigned long *);
int CreduiGetCertificateDisplayName(_CERT_CONTEXT const *,unsigned short *,unsigned long,unsigned short *,unsigned long);
int CreduiHasSmartCardSupport;
int CreduiInitSmartCardWindowMessages();
int CreduiInitStringTable();
int CreduiIsCapsLockOn();
int CreduiIsClientAuthCertificate(_CERT_CONTEXT const *);
int CreduiIsDomainController;
int CreduiIsExpiredCertificate(_CERT_CONTEXT const *);
int CreduiIsPersonal;
int CreduiIsPostfixString(unsigned short *,unsigned short *);
int CreduiIsRemovableCertificate(_CERT_CONTEXT const *);
int CreduiIsSafeMode;
int CreduiIsSpecialCredential(_CREDENTIALW *);
int CreduiIsWildcardTargetName(unsigned short *);
int CreduiLookupLocalNameFromRid(unsigned long,unsigned short * *);
int CreduiLookupLocalSidFromRid(unsigned long,void * *);
int GetSSOPackageInfo(_CREDENTIAL_TARGET_INFORMATIONW *,_SSOPACKAGE *);
int IsDeaultSSORealm(unsigned short *);
int IsPasswordEncrypted(void *,unsigned long);
int LocalCredWriteDomainCredentialsW(_CREDENTIAL_TARGET_INFORMATIONW *,_CREDENTIALW *,unsigned long);
int LocalCredWriteW(_CREDENTIALW *,unsigned long);
int LookForUserNameMatch(unsigned short const *,unsigned short const *);
int ReadPassportRealmFromRegistry(unsigned short *);
int TryLauchRegWizard(_SSOPACKAGE *,HWND__ *,int,unsigned short *,unsigned long,unsigned short *,unsigned long,unsigned long *);
int gbStoredSSOCreds;
int gbWaitingForSSOCreds;
int wil_RtlStagingConfig_QueryFeatureState(wil_FeatureState *,unsigned int,int,int *);
long (* g_wil_details_pfnNtQueryWnfStateData)(__WIL__WNF_STATE_NAME const *,__WIL__WNF_TYPE_ID const *,void const *,unsigned long *,void *,unsigned long *);
long (* g_wil_details_pfnNtUpdateWnfStateData)(__WIL__WNF_STATE_NAME const *,void const *,unsigned long,__WIL__WNF_TYPE_ID const *,void const *,unsigned long,unsigned long);
long CCv6s_HeapFree(void *,void *);
long CCv6s_HeapReallocArray<void>(void *,unsigned long,void *,unsigned __int64,unsigned __int64,void * *);
long CoGetClassObjectInSession(unsigned long,_GUID const &,IUnknown *,_GUID const &,void * *);
long ConvertCredUiInfoToInternal(_CREDUI_INFOW *,CREDUI_INFO_INTERNAL * *);
long MitChangePasswordEy(unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,long *);
long RegisterWindowClass(tagWNDCLASSW const *);
long ResultFromKnownLastError();
long ResultFromWin32Bool(int);
long SHOpenEffectiveToken(unsigned long,int,void * *);
long SHQueryToken<_TOKEN_MANDATORY_LABEL>(void *,_TOKEN_INFORMATION_CLASS,int,_TOKEN_MANDATORY_LABEL * *);
long StringCchCatW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchCopyA(char *,unsigned __int64,char const *);
long StringCchCopyExW(unsigned short *,unsigned __int64,unsigned short const *,unsigned short * *,unsigned __int64 *,unsigned long);
long StringCchCopyNExW(unsigned short *,unsigned __int64,unsigned short const *,unsigned __int64,unsigned short * *,unsigned __int64 *,unsigned long);
long StringCchCopyW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchPrintfExW(unsigned short *,unsigned __int64,unsigned short * *,unsigned __int64 *,unsigned long,unsigned short const *,...);
long StringCchPrintfW(unsigned short *,unsigned __int64,unsigned short const *,...);
long ULongLongMult(unsigned __int64,unsigned __int64,unsigned __int64 *);
long _AllocArray<unsigned short,CTCoAllocPolicy>(void *,unsigned long,unsigned __int64,unsigned short * *);
long _AllocStringWorker<CTCoAllocPolicy>(void *,unsigned long,unsigned short const *,unsigned __int64,unsigned __int64,unsigned short * *);
long wil_details_NtQueryWnfStateData(__WIL__WNF_STATE_NAME const *,__WIL__WNF_TYPE_ID const *,void const *,unsigned long *,void *,unsigned long *);
long wil_details_NtUpdateWnfStateData(__WIL__WNF_STATE_NAME const *,void const *,unsigned long,__WIL__WNF_TYPE_ID const *,void const *,unsigned long,unsigned long);
long wil_details_WriteSRUMWnfUsageBuffer(wil::details_abi::heap_vector<wil_details_FeatureUsageSRUM> *);
unsigned __int64 g_CredUIPerfRegHandle;
unsigned char CredpValidateDnsString(unsigned short *,_DNS_NAME_FORMAT,unsigned long *);
unsigned int CreduiScarduiWmCardCertAvail;
unsigned int CreduiScarduiWmCardInsertion;
unsigned int CreduiScarduiWmCardRemoval;
unsigned int CreduiScarduiWmCardStatus;
unsigned int CreduiScarduiWmReaderArrival;
unsigned int CreduiScarduiWmReaderRemoval;
unsigned long ConfirmCred(unsigned short const *,int,int);
unsigned long CredUIApartmentThread(void *);
unsigned long CredUIParseUserNameWithType(unsigned short const *,unsigned short *,unsigned long,unsigned short *,unsigned long,_CREDUI_USERNAME_TYPE *);
unsigned long CredUIPromptForCredentialsWorker(int,_CREDUI_INFOW *,unsigned short const *,_SecHandle *,unsigned long,unsigned short *,unsigned long,unsigned short *,unsigned long,int *,unsigned long);
unsigned long CredUIPromptForWindowsCredentialsThroughBroker(CREDUI_INFO_INTERNAL *,unsigned long,unsigned long *,void const *,unsigned long,void * *,unsigned long *,int *,unsigned long,unsigned long,unsigned long);
unsigned long CreduiComReferenceCount;
unsigned long EncryptPassword(unsigned short *,void * *,unsigned long *);
unsigned long GetPasswdStr(unsigned short *,unsigned long,unsigned long *);
unsigned long GetString(unsigned short *,unsigned long,unsigned long *);
unsigned long NetUserChangePasswordEy(unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *);
unsigned long SCardUIExit(void *);
unsigned long WriteCred(unsigned short const *,unsigned long,_CREDENTIAL_TARGET_INFORMATIONW *,_CREDENTIALW *,unsigned long,int,int);
unsigned short * CreduiCustomTipMessage;
unsigned short * CreduiCustomTipTitle;
unsigned short * GetAccountDomainName();
unsigned short * TrimUsername(unsigned short *,unsigned short *);
unsigned short * g_szSalt;
unsigned short * gszSSOPassword;
unsigned short * gszSSOUserName;
unsigned short const * FirstString(unsigned short const *);
unsigned short const * NextString(unsigned short const *);
unsigned short const * const RuntimeClass_Windows_UI_Core_CoreWindow;
void (* g_wil_details_RecordSRUMFeatureUsage)(unsigned int,unsigned int,unsigned int);
void (* g_wil_details_apiRecordFeatureUsage)(unsigned int,unsigned int,unsigned int,char const *);
void (* g_wil_details_apiSubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
void (* g_wil_details_apiUnsubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
void (* g_wil_details_internalRecordFeatureUsage)(unsigned int,unsigned int,unsigned int,char const *);
void (* g_wil_details_internalSubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
void (* g_wil_details_internalUnsubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
void (* g_wil_details_pfnFeatureLoggingHook)(unsigned int,FEATURE_LOGGED_TRAITS const *,FEATURE_ERROR const *,int,wil_ReportingKind const *,wil_VariantReportingKind const *,unsigned char,unsigned __int64);
void (* g_wil_details_realtimeFeatureUsageHook)(unsigned int,unsigned int,unsigned char);
void * SCardUIInit(HWND__ *);
void * operator new(unsigned __int64);
void * operator new(unsigned __int64,std::nothrow_t const &);
void * operator new[](unsigned __int64,std::nothrow_t const &);
void CredGetStdin(unsigned short *,unsigned long,unsigned char);
void CredPutStdout(unsigned short *);
void DeleteConfirmationListEntry(_CRED_AWAITING_CONFIRMATION *);
void DemoteOldDefaultSSOCred(_CREDENTIAL_TARGET_INFORMATIONW *,unsigned long);
void GetDeaultSSORealm(unsigned short *,unsigned long,int);
void I_UpdateCertificatesCapi(_THREAD_DATA *,SCARD_READERSTATEW *);
void I_UpdateCertificatesCng(_THREAD_DATA *,SCARD_READERSTATEW *);
void LogOwnerWindowTelemetry(_CREDUI_INFOW *);
void UnregisterWindowClass(unsigned short const *);
void _tlgWriteActivityAutoStop<35184372088832,5>(_tlgProvider_t const *,_GUID const *);
void _tlgWriteActivityAutoStop<70368744177664,5>(_tlgProvider_t const *,_GUID const *);
void operator delete(void *);
void wil_StagingConfig_LogStagedFeatureUsage(unsigned int,unsigned int,unsigned char);
void wil_details_FeatureReporting_IncrementOpportunityInCache(wil_details_FeatureReportingCache *,wil_details_ServiceReportingKind,unsigned int,wil_details_RecordUsageResult *);
void wil_details_FeatureReporting_IncrementUsageInCache(wil_details_FeatureReportingCache *,wil_details_ServiceReportingKind,unsigned int,wil_details_RecordUsageResult *);
void wil_details_RecordCachedUsage(unsigned int,wil_details_FeatureReportingCache *,void (*)(unsigned int,unsigned int,unsigned int,char const *));
wil_details_RecordUsageResult wil_details_FeatureReporting_RecordUsageInCache(wil_details_FeatureReportingCache *,wil_details_ServiceReportingKind,unsigned int,unsigned int);
wil_details_ServiceReportingKind wil_details_MapReportingKind(wil_ReportingKind,int);
