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

class <lambda_1681166c52878bc0dc3a671f341fafcc>
{
	static unsigned long <lambda_invoker_cdecl>(void *);
};

class <lambda_1ad7ecfab602a777ecf020873216a663>
{
	static <lambda_invoker_cdecl>(void *);
};

class <lambda_5035b992506f4af81a770c5842624510>
{
	static <lambda_invoker_cdecl>(_TP_CALLBACK_INSTANCE *,void *,_TP_TIMER *);
};

class <lambda_aa194dc0bf891154933407eb98fb868a>
{
	static <lambda_invoker_cdecl>(void *);
};

class <lambda_d51448ba32f8ef42e59400edd4566183>
{
	static <lambda_invoker_cdecl>(_TP_CALLBACK_INSTANCE *,void *,_TP_TIMER *);
};

class <lambda_ea3cc8695ee3b11689d3803f6b2a8b61>
{
	static <lambda_invoker_cdecl>();
};

class <lambda_fee8cea507d2413a58be13acfb66740a>
{
	static <lambda_invoker_cdecl>(void *);
};

struct CAudioPlaybackEventCallback
{
	CAudioPlaybackEventCallback(void *);
	virtual long OnMarkerRendered(__int64);
	virtual long OnNewState(_CAudioPlaybackState);
	virtual long OnReplayIterationCompleted();
};

namespace Gdiplus
{
	struct Bitmap
	{
		static Bitmap * FromFile(unsigned short const *,int);
	};

	struct Image
	{
		virtual Image * Clone();
	};

};

struct LUALogging
{
	static _tlgProvider_t const * Provider();
};

namespace Microsoft
{
	namespace WRL
	{
		struct ComPtr<CAudioPlaybackEventCallback>
		{
			~ComPtr<CAudioPlaybackEventCallback>();
		};

		class ComPtr<IAudioPlayer>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IAudioPlayer>();
		};

		class ComPtr<IAudioPlayerFacade>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IAudioPlayerFacade>();
		};

		class ComPtr<IAudioSource>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IAudioSource>();
		};

		struct ComPtr<Windows::Internal::StateRepository::IApplication>
		{
			ComPtr<Windows::Internal::StateRepository::IApplication>(ComPtr<Windows::Internal::StateRepository::IApplication> const &);
			~ComPtr<Windows::Internal::StateRepository::IApplication>();
		};

		struct ComPtr<Windows::Internal::StateRepository::IApplicationResourceResolver>
		{
			~ComPtr<Windows::Internal::StateRepository::IApplicationResourceResolver>();
		};

		class ComPtr<Windows::Internal::StateRepository::IApplicationResourceResolverStatics>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Internal::StateRepository::IApplicationResourceResolverStatics>();
		};

		class ComPtr<Windows::Internal::StateRepository::IApplicationStatics>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Internal::StateRepository::IApplicationStatics>();
		};

		struct ComPtr<Windows::Internal::StateRepository::IPackage>
		{
			ComPtr<Windows::Internal::StateRepository::IPackage>(ComPtr<Windows::Internal::StateRepository::IPackage> const &);
			~ComPtr<Windows::Internal::StateRepository::IPackage>();
		};

		struct ComPtr<Windows::Internal::StateRepository::IPackageResourceResolver>
		{
			~ComPtr<Windows::Internal::StateRepository::IPackageResourceResolver>();
		};

		class ComPtr<Windows::Internal::StateRepository::IPackageResourceResolverStatics>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Internal::StateRepository::IPackageResourceResolverStatics>();
		};

		class ComPtr<Windows::Internal::StateRepository::IUser>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Internal::StateRepository::IUser>();
		};

		class ComPtr<Windows::Internal::StateRepository::IUserStatics>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Internal::StateRepository::IUserStatics>();
		};

		namespace Details
		{
			struct ComPtrRef<ComPtr<Windows::Internal::StateRepository::IUser> >
			{
				operator Windows::Internal::StateRepository::IUser * *();
			};

			struct ModuleBase
			{
				static ModuleBase * module_;
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IAudioPlaybackEvents>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			ComPtr<CAudioPlaybackEventCallback> Make<CAudioPlaybackEventCallback,void * &>(void * &);
			void RaiseException(long,unsigned long);
		};

		namespace Wrappers
		{
			struct HString
			{
				HSTRING__ * * GetAddressOf();
				~HString();
			};

			class HStringReference
			{
				static unsigned int AddOne(unsigned int);
				void CreateReference(unsigned short const *,unsigned int,unsigned int);
			public:
				HStringReference<38>(unsigned short const (&)[38]);
				~HStringReference();
			};

		};

	};

};

class UACIndicatorControlHost
{
	HDESK__ * GetThreadDesktopPrivate(unsigned long);
	void ThreadProc();
public:
	void Activate();
	void Deactivate();
};

namespace Windows
{
	namespace Foundation
	{
		long GetActivationFactory<Microsoft::WRL::ComPtr<Internal::StateRepository::IUserStatics> >(HSTRING__ *,Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Internal::StateRepository::IUserStatics> >);
	};

};

struct exception
{
	exception(exception const &);
};

namespace std
{
	nothrow_t const std::nothrow;
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
			unsigned int EnsureSubscribedToFeatureConfigurationChangesImpl();
			void RecordCachedUsageUnderLock();
		public:
			void EnsureSubscribedToUsageFlush(void (*)(void *));
			void OnStateChange();
			void OnTimer();
			void QueueBackgroundUsageReporting(unsigned int,wil_details_FeatureReportingCache *);
			~EnabledStateManager();
		};

		class FeatureImpl<__WilFeatureTraits_Feature_InputServiceLogon>
		{
			wil_details_FeatureStateCache GetCachedFeatureEnabledState();
			wil_details_FeatureStateCache GetCurrentFeatureEnabledState(int *);
		public:
			void ReportUsage(bool,ReportingKind,unsigned __int64);
		};

		class FeatureImpl<__WilFeatureTraits_Feature_InputServiceSecureDesktop>
		{
			wil_details_FeatureStateCache GetCachedFeatureEnabledState();
			wil_details_FeatureStateCache GetCurrentFeatureEnabledState(int *);
		public:
			void ReportUsage(bool,ReportingKind,unsigned __int64);
		};

		class FeatureImpl<__WilFeatureTraits_Feature_Servicing_UACPromptPackageName_36752341>
		{
			wil_details_FeatureStateCache GetCachedFeatureEnabledState();
			wil_details_FeatureStateCache GetCurrentFeatureEnabledState(int *);
		public:
			void ReportUsage(bool,ReportingKind,unsigned __int64);
		};

		struct FeatureLogging
		{
			static _tlgProvider_t const * Provider();
		};

		class FeatureStateManager
		{
			bool EnsureStateData();
			void EnsureSubscribedToProcessWideUsageFlushUnderLock();
		public:
			void FlushUsage();
			void QueueBackgroundSRUMUsageReporting(unsigned int,unsigned short,unsigned int);
			void RecordFeatureUsage(unsigned int,wil_details_ServiceReportingKind,unsigned __int64);
			void SubscribeToEnabledStateChanges(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
			void SubscribeToUsageFlush(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *));
			~FeatureStateManager();
		};

		struct ResultStatus
		{
			static ResultStatus FromResult(long);
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
			long Return_GetLastError(void *,unsigned int,char const *);
			void FailFast_Unexpected(void *,unsigned int,char const *);
			void Return_Hr(void *,unsigned int,char const *,long);
			void _FailFastImmediate_Unexpected();
			void _FailFast_GetLastError(void *,unsigned int,char const *);
			void _FailFast_Hr(void *,unsigned int,char const *,long);
			void _FailFast_Unexpected(void *,unsigned int,char const *);
			void _Throw_Hr(void *,unsigned int,char const *,long);
		};

		class shared_buffer
		{
			void assign(long *,unsigned __int64);
		public:
			bool create(void const *,unsigned __int64);
			void reset();
		};

		struct static_lazy<FeatureLogging>
		{
			struct Completer
			{
				~Completer();
			};

			FeatureLogging * get(void (*)());
		};

		struct static_lazy<LUALogging>
		{
			struct Completer
			{
				~Completer();
			};

			LUALogging * get(void (*)());
		};

		FEATURE_ENABLED_STATE WilApiImpl_GetFeatureEnabledState(unsigned int,FEATURE_CHANGE_TIME,int *);
		FEATURE_ENABLED_STATE WilApi_GetFeatureEnabledState(unsigned int,FEATURE_CHANGE_TIME,int *);
		bool GetModuleInformation(void *,unsigned int *,char *,unsigned __int64);
		bool IsFeatureConfigured(wil_FeatureState *,unsigned int,bool,wil_FeatureStore,int *);
		bool g_processShutdownInProgress;
		bool g_resultMessageCallbackSet;
		char const * (* ?? g_pfnGetModuleName)();
		char const * GetCurrentModuleName();
		details::ResultStatus ResultFromCaughtExceptionInternal(unsigned short *,unsigned __int64,bool *);
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
		long RecognizeCaughtExceptionFromCallback(unsigned short *,unsigned __int64);
		long ReportFailure_GetLastErrorHr<1>(void *,unsigned int,char const *,char const *,char const *,void *);
		long RtlDisownModuleHeapAllocation(void *,void *);
		long StringCchPrintfA(char *,unsigned __int64,char const *,...);
		shutdown_aware_object<details::EnabledStateManager> g_enabledStateManager;
		shutdown_aware_object<details::FeatureStateManager> g_featureStateManager;
		unsigned __int64 ResultStringSize(char const *);
		unsigned __int64 ResultStringSize(unsigned short const *);
		unsigned char (* ?? g_pfnDllShutdownInProgress)();
		unsigned char * WriteResultString<char const *>(unsigned char *,unsigned char *,char const *,char const * *);
		unsigned char * WriteResultString<unsigned short const *>(unsigned char *,unsigned char *,unsigned short const *,unsigned short const * *);
		unsigned char RtlDllShutdownInProgress();
		unsigned int EnsureSubscribedToFeatureConfigurationChanges();
		unsigned long (* ?? g_pfnRtlNtStatusToDosErrorNoTeb)(long);
		unsigned long GetLastErrorFail(void *,unsigned int,char const *,char const *,char const *,void *);
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
		void (* g_pfnRethrow)();
		void (* g_pfnThrowResultException)(FailureInfo const &);
		void * ProcessHeapAlloc(unsigned long,unsigned __int64);
		void CloseHandle(void *);
		void DebugBreak();
		void FeatureLoggingHook(unsigned int,FEATURE_LOGGED_TRAITS const *,FEATURE_ERROR const *,int,wil_ReportingKind const *,wil_VariantReportingKind const *,unsigned char,unsigned __int64);
		void FormatNtStatusMsg(long,unsigned short *,unsigned long);
		void FreeProcessHeap(void *);
		void GetContextAndNotifyFailure(FailureInfo *,char *,unsigned __int64);
		void LogFailure(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,details::ResultStatus const &,unsigned short const *,bool,unsigned short *,unsigned __int64,char *,unsigned __int64,FailureInfo *);
		void MaybeGetExceptionString(ResultException const &,unsigned short *,unsigned __int64);
		void MaybeGetExceptionString(exception const &,unsigned short *,unsigned __int64);
		void MicrosoftInternalNotifyFailure(FailureInfo *);
		void RecordFeatureUsageCallback(unsigned int,wil_details_ServiceReportingKind,unsigned int,wil_details_FeatureReportingCache *,wil_details_RecordUsageResult *);
		void RecordSRUMFeatureUsage(unsigned int,unsigned int,unsigned int);
		void ReleaseMutex(void *);
		void ReportFailure_Base<0,0>(void *,unsigned int,char const *,char const *,char const *,void *,details::ResultStatus const &,unsigned short const *,details::ReportFailureOptions);
		void ReportFailure_Base<1,0>(void *,unsigned int,char const *,char const *,char const *,void *,details::ResultStatus const &,unsigned short const *,details::ReportFailureOptions);
		void ReportFailure_Base<2,0>(void *,unsigned int,char const *,char const *,char const *,void *,details::ResultStatus const &,unsigned short const *,details::ReportFailureOptions);
		void ReportFailure_Base<3,0>(void *,unsigned int,char const *,char const *,char const *,void *,details::ResultStatus const &,unsigned short const *,details::ReportFailureOptions);
		void ReportFailure_Hr<0>(void *,unsigned int,char const *,char const *,char const *,void *,long);
		void ReportFailure_Hr<1>(void *,unsigned int,char const *,char const *,char const *,void *,long);
		void ReportFailure_Hr<2>(void *,unsigned int,char const *,char const *,char const *,void *,long);
		void ReportFailure_Hr<3>(void *,unsigned int,char const *,char const *,char const *,void *,long);
		void ReportFailure_NoReturn<0>(void *,unsigned int,char const *,char const *,char const *,void *,details::ResultStatus const &,unsigned short const *,details::ReportFailureOptions);
		void ReportFailure_NoReturn<3>(void *,unsigned int,char const *,char const *,char const *,void *,details::ResultStatus const &,unsigned short const *,details::ReportFailureOptions);
		void ReportFailure_Return<1>(void *,unsigned int,char const *,char const *,char const *,void *,details::ResultStatus const &,unsigned short const *,details::ReportFailureOptions);
		void ReportFailure_Return<2>(void *,unsigned int,char const *,char const *,char const *,void *,details::ResultStatus const &,unsigned short const *,details::ReportFailureOptions);
		void ReportUsageToService(wil_details_FeatureReportingCache *,unsigned int,int,int,FEATURE_LOGGED_TRAITS const *,int,wil_ReportingKind,unsigned __int64);
		void Rethrow();
		void SubscribeFeatureStateCacheToConfigurationChanges(wil_details_FeatureStateCache *,wil_FeatureChangeTime,unsigned int);
		void ThrowResultExceptionInternal(FailureInfo const &);
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
			ProcessLocalData * GetShared();
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
			void Release();
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
			~RawUsageIndex();
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
			ThreadLocalData * GetLocal(bool);
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
			~heap_buffer();
		};

		details_abi::ProcessLocalStorage<details_abi::ProcessLocalData> * g_pProcessLocalData;
		details_abi::ThreadLocalData * GetThreadLocalDataCache(bool);
		void RecordWnfUsageIndex(__WIL__WNF_STATE_NAME const *,unsigned __int64,details_abi::RawUsageIndex const &);
	};

	struct last_error_context
	{
		~last_error_context();
	};

	struct manually_managed_shutdown_aware_object<details::EnabledStateManager>
	{
		void construct();
		void destroy();
	};

	struct manually_managed_shutdown_aware_object<details::FeatureStateManager>
	{
		void construct();
		void destroy();
	};

	UNKNOWN GetTokenInformation<_TOKEN_USER>(void *);
	WilFailureReportFlags g_moduleFailureReportFlags;
	bool (* ?? g_pfnIsDebuggerPresent)();
	bool (* ?? g_pfnWilFailFast)(wil::FailureInfo const &);
	bool ProcessShutdownInProgress();
	bool g_fBreakOnFailure;
	bool g_fIsDebuggerPresent;
	long (* ?? g_pfnResultFromCaughtException)();
	long GetFailureLogString(unsigned short *,unsigned __int64,wil::FailureInfo const &);
	long ResultFromCaughtException();
	long get_token_information_nothrow<_TOKEN_USER,0>(wistd::unique_ptr<_TOKEN_USER,wistd::default_delete<_TOKEN_USER> > &,void *);
	void ThrowResultException(wil::FailureInfo const &);
	void assign_null_to_opt_param<char const *>(char const * *);
	void assign_null_to_opt_param<unsigned short const *>(unsigned short const * *);
	void assign_to_opt_param<char const *>(char const * *,char const *);
	void assign_to_opt_param<unsigned int>(unsigned int *,unsigned int);
	void assign_to_opt_param<unsigned short const *>(unsigned short const * *,unsigned short const *);
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

	};

	struct function<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>
	{
		~function<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>();
	};

	struct unique_ptr<_TOKEN_USER,default_delete<_TOKEN_USER> >
	{
		~unique_ptr<_TOKEN_USER,default_delete<_TOKEN_USER> >();
	};

	void __throw_bad_function_call();
};

;
FEATURE_ENABLED_STATE (* g_wil_details_apiGetFeatureEnabledState)(unsigned int,FEATURE_CHANGE_TIME,int *);
FEATURE_ENABLED_STATE (* g_wil_details_internalGetFeatureEnabledState)(unsigned int,FEATURE_CHANGE_TIME,int *);
HICON__ * LoadIconFromResourceString(unsigned short *);
HINSTANCE__ * g_wil_details_kernelbaseModuleHandle;
HINSTANCE__ * g_wil_details_ntdllModuleHandle;
HINSTANCE__ * wil_details_GetKernelBaseModuleHandle();
HINSTANCE__ * wil_details_GetNtDllModuleHandle();
UACIndicatorControlHost g_uacIndicatorControlHost;
_CONTEXT_FILE_LOCATION CuiGetBinaryLocation(unsigned short const *);
__int64 BackgroundWndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
__int64 FakeClientWndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
__int64 InterimDialogWndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
bool StartSystemTextInputProcesses(bool);
bool _SetSystemEvent(SystemEventInfo const *);
int CuiIsCOMClassAutoApprovable(_GUID *);
int CuipAskUserForSwitch(HINSTANCE__ *,unsigned short *);
int CuipShouldConfirmBeforeAutoSwitchDesktop(HWND__ *);
int InlineIsEqualGUID(_GUID const &,_GUID const &);
int OnInterimDialogCreate(HWND__ *,tagCREATESTRUCTW *);
int wil_RtlStagingConfig_QueryFeatureState(wil_FeatureState *,unsigned int,int,int *);
long (* g_wil_details_pfnNtQueryWnfStateData)(__WIL__WNF_STATE_NAME const *,__WIL__WNF_TYPE_ID const *,void const *,unsigned long *,void *,unsigned long *);
long (* g_wil_details_pfnNtUpdateWnfStateData)(__WIL__WNF_STATE_NAME const *,void const *,unsigned long,__WIL__WNF_TYPE_ID const *,void const *,unsigned long,unsigned long);
long CuiGetBinarySignature(unsigned short const *,void *,unsigned char,unsigned char,SIGNATURE_INFO_FLAGS,_CONTEXT_SIGNATURE *,unsigned char *,unsigned short * *,unsigned short * *,_CERT_CONTEXT const * *,void * *);
long CuiUpdateContextInformation(unsigned short const *,unsigned char,_CREDUI_CONTEXT *);
long CuipGetParameters(void *,unsigned long,void *,_CONSENTUI_PARAM_HEADER * *);
long DisplayStatusDialog(void * *,unsigned short *,unsigned short *);
long GetContextFromSignature(_CONSENTUI_PARAM_HEADER *,unsigned short const *,void *,unsigned char *,_CREDUI_CONTEXT *);
long GetPackagedAppPackage(unsigned short const *,Windows::Internal::StateRepository::IApplication * *,Windows::Internal::StateRepository::IPackage * *);
long GetPackagedResourceResolvers(Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IApplication>,Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>,Windows::Internal::StateRepository::IApplicationResourceResolver * *,Windows::Internal::StateRepository::IPackageResourceResolver * *);
long HRESULTFromLastErrorError();
long StatusTaskDialogCallback(HWND__ *,unsigned int,unsigned __int64,__int64,__int64);
long StringCchCatW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchCopyA(char *,unsigned __int64,char const *);
long StringCchCopyNW(unsigned short *,unsigned __int64,unsigned short const *,unsigned __int64);
long StringCchPrintfW(unsigned short *,unsigned __int64,unsigned short const *,...);
long TResourceStringAllocCopyEx<unsigned short *>(HINSTANCE__ *,unsigned int,unsigned short,long (*)(void *,unsigned __int64,unsigned short * *),void *,unsigned short * *);
long __CxxUnhandledExceptionFilter(_EXCEPTION_POINTERS *);
long wil_RtlStagingConfig_RecordFeatureUsage(unsigned int,unsigned int,int);
long wil_details_NtQueryWnfStateData(__WIL__WNF_STATE_NAME const *,__WIL__WNF_TYPE_ID const *,void const *,unsigned long *,void *,unsigned long *);
long wil_details_NtUpdateWnfStateData(__WIL__WNF_STATE_NAME const *,void const *,unsigned long,__WIL__WNF_TYPE_ID const *,void const *,unsigned long,unsigned long);
long wil_details_RtlRegisterFeatureConfigurationChangeNotification(void (*)(void *),void *,unsigned __int64 *,void * *);
long wil_details_WriteSRUMWnfUsageBuffer(wil::details_abi::heap_vector<wil_details_FeatureUsageSRUM> *);
unsigned __int64 g_ConsentPerfRegHandle;
unsigned char CuipHasMarkOfTheWeb(unsigned short const *);
unsigned long AsyncKerbRefresh(_CRED_PROV_CREDENTIAL *,unsigned long,unsigned long,void *,void * *,unsigned long *);
unsigned long AttemptCredProvLogon(_CRED_PROV_CREDENTIAL *,_TOKEN_GROUPS *,void * *);
unsigned long AttemptKerbRefresh(void *);
unsigned long AttemptLogon(_CRED_PROV_CREDENTIAL *,unsigned long,unsigned long,void * *);
unsigned long CuiCheckElevationAutoApprovalMedium(_CONSENTUI_PARAM_HEADER *,_CREDUI_CONTEXT *,_AUTO_APPROVE_TYPE *);
unsigned long CuiGenerateSQMEvent(unsigned long,_CONSENTUI_PARAM_HEADER *,_CREDUI_CONTEXT *,unsigned char,unsigned long,_AM_SCAN_RESULT);
unsigned long CuiGetContextInformation(HINSTANCE__ *,_CONSENTUI_PARAM_HEADER *,unsigned char *,_CREDUI_CONTEXT *);
unsigned long CuiGetTokenForApp(HINSTANCE__ *,_CONSENTUI_PARAM_HEADER *,_CREDUI_CONTEXT *,unsigned long,_AUTO_APPROVE_TYPE,unsigned long,_AM_SCAN_RESULT,void * *,void * *);
unsigned long CuiInitializeAMProvider(HAMSCANCONTEXT__ * *);
unsigned long CuiPerformAMScan(HAMSCANCONTEXT__ *,_CONSENTUI_PARAM_HEADER *,_CREDUI_CONTEXT *,int,_AM_SCAN_RESULT *,unsigned short * *);
unsigned long CuiSetThreadDesktopToSecureDesktop();
unsigned long CuiStartBackgroundWindowAndSwitchToSecureDesktop(HINSTANCE__ *,unsigned short *,_CONSENTUI_PARAM_HEADER *,int *,unsigned char *);
unsigned long CuipAMScanThreadProc(void *);
unsigned long CuipAcquireSessionMutex(int *);
unsigned long CuipCheckActiveDesktop(unsigned short const *,ActiveDesktopType *);
unsigned long CuipCheckNetworkFileAccess(HINSTANCE__ *,void *,_CONSENTUI_PARAM_HEADER *);
unsigned long CuipCreateAutomaticAdminAccount(void *,void * *);
unsigned long CuipDuplicateToken(void *,void * *);
unsigned long CuipGetClientLUID(void *,_LUID *);
unsigned long CuipGetClientLogonSessionLUID(_CONSENTUI_PARAM_HEADER *,_LUID *);
unsigned long CuipGetCurrentUserUACSoundFilename(unsigned short const *,unsigned long *);
unsigned long CuipGetUserDesktopSnapshot();
unsigned long CuipInterimDialogWindowThread(void *);
unsigned long CuipWaitForDesktopToBeReady();
unsigned long CuipWindowThread(void *);
unsigned long GetConsent(HWND__ *,_CREDUI_CONTEXT const *);
unsigned long GetCredentials(HINSTANCE__ *,HWND__ *,unsigned long,unsigned long,_CREDUI_CONTEXT const *,unsigned long,unsigned long,void * *);
unsigned long PlayUACSoundProc(void *);
unsigned long RefreshSmartCardCredentials(HINSTANCE__ *,HWND__ *,_CREDUI_CONTEXT const *,unsigned long,unsigned long,unsigned long,void *,void * *);
unsigned short * CuipCopyRightString;
unsigned short * CuipGetActiveDesktopName();
unsigned short * CuipGetDesktopName(HDESK__ *);
unsigned short * CuipGetThreadDesktopName();
unsigned short * CuipJustFileName(unsigned short *);
unsigned short const * const RuntimeClass_Windows_Internal_StateRepository_Application;
unsigned short const * const RuntimeClass_Windows_Internal_StateRepository_ApplicationResourceResolver;
unsigned short const * const RuntimeClass_Windows_Internal_StateRepository_PackageResourceResolver;
unsigned short const * const RuntimeClass_Windows_Internal_StateRepository_User;
void (* g_wil_details_RecordSRUMFeatureUsage)(unsigned int,unsigned int,unsigned int);
void (* g_wil_details_apiRecordFeatureUsage)(unsigned int,unsigned int,unsigned int,char const *);
void (* g_wil_details_apiSubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
void (* g_wil_details_apiUnsubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
void (* g_wil_details_internalRecordFeatureUsage)(unsigned int,unsigned int,unsigned int,char const *);
void (* g_wil_details_internalSubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
void (* g_wil_details_internalUnsubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
void (* g_wil_details_pfnFeatureLoggingHook)(unsigned int,FEATURE_LOGGED_TRAITS const *,FEATURE_ERROR const *,int,wil_ReportingKind const *,wil_VariantReportingKind const *,unsigned char,unsigned __int64);
void (* g_wil_details_realtimeFeatureUsageHook)(unsigned int,unsigned int,unsigned char);
void * CreateSystemEvent(SystemEventInfo const *);
void * g_hSessionEventsNeedProcessing;
void * g_hStartSystemTabtip;
void * g_hStartSystemTextInputProcesses;
void * operator new(unsigned __int64);
void * operator new(unsigned __int64,std::nothrow_t const &);
void CloseGlobalHandles();
void CuiFreeContextInformation(_CREDUI_CONTEXT *);
void CuiFreeWVTStateData(void *);
void CuiPlayConsentLaunchedSound();
void CuiStopBackgroundWindowAndSwitchToDefaultDesktop();
void CuipAMInitializeAPCProc(unsigned __int64);
void CuipAMScanAPCProc(unsigned __int64);
void CuipAMUninitializeAPCProc(unsigned __int64);
void CuipAlphaBlend(HDC__ *,int,unsigned long,unsigned long);
void CuipPaintDesktop(HDC__ *);
void CuipPrepareAMSIScanContext(_CONSENTUI_PARAM_HEADER *,_CREDUI_CONTEXT *,int,AMSI_UAC_REQUEST_CONTEXT *);
void CuipReleaseSessionMutex();
void GetAxISContext(_CONSENTUI_PARAM_AXIS *,_CREDUI_CONTEXT *);
void GetCOMContext(_CONSENTUI_PARAM_COM *,_CREDUI_CONTEXT *);
void GetMSIContext(HINSTANCE__ *,_CONSENTUI_PARAM_MSI *,_CREDUI_CONTEXT *);
void GetPackagedAppContext(_CONSENTUI_PARAM_PACKAGED_APP *,unsigned char *,_CREDUI_CONTEXT *);
void GetPackagedAppIcon(Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IApplication>,_CREDUI_CONTEXT *);
void OnPaint(HWND__ *);
void ResetPriorityCallback(_TP_CALLBACK_INSTANCE *,void *,_TP_TIMER *);
void operator delete(void *);
void wil_StagingConfig_LogStagedFeatureUsage(unsigned int,unsigned int,unsigned char);
void wil_details_FeatureReporting_IncrementOpportunityInCache(wil_details_FeatureReportingCache *,wil_details_ServiceReportingKind,unsigned int,wil_details_RecordUsageResult *);
void wil_details_FeatureReporting_IncrementUsageInCache(wil_details_FeatureReportingCache *,wil_details_ServiceReportingKind,unsigned int,wil_details_RecordUsageResult *);
void wil_details_RecordCachedUsage(unsigned int,wil_details_FeatureReportingCache *,void (*)(unsigned int,unsigned int,unsigned int,char const *));
wil_details_RecordUsageResult wil_details_FeatureReporting_RecordUsageInCache(wil_details_FeatureReportingCache *,wil_details_ServiceReportingKind,unsigned int,unsigned int);
wil_details_ServiceReportingKind wil_details_MapReportingKind(wil_ReportingKind,int);
