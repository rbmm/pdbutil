class <lambda_0ae89f7ca77040da3af7dd229dfecfb4>
{
	static long <lambda_invoker_cdecl>(__WIL__WNF_STATE_NAME,unsigned long,__WIL__WNF_TYPE_ID *,void *,void const *,unsigned long);
};

class <lambda_120d0c6b51dc644cb63ed5c7fc62f6c3>
{
	static void <lambda_invoker_cdecl>();
};

class <lambda_152aa9d2a3a0648fa2fa7fcef514b376>
{
	static void <lambda_invoker_cdecl>(void *);
};

class <lambda_1ad7ecfab602a777ecf020873216a663>
{
	static void <lambda_invoker_cdecl>(void *);
};

class <lambda_aa194dc0bf891154933407eb98fb868a>
{
	static void <lambda_invoker_cdecl>(void *);
};

class <lambda_fee8cea507d2413a58be13acfb66740a>
{
	static void <lambda_invoker_cdecl>(void *);
};

struct CConvenienceLogonEnrollmentData
{
	CConvenienceLogonEnrollmentData(unsigned short const *,unsigned short const *);
	long Create();
	long Delete();
	long Exists(bool *);
	virtual ~CConvenienceLogonEnrollmentData();
};

struct CPINLogonVault
{
	static long ClearEnrollment(void *);
	static long GetEnrollmentData(void *,unsigned short *,unsigned short * *);
	static long QueryEnrollment(void *);
	static long SetEnrollment(void *,unsigned short const *,unsigned short const *);
	static long UpdateEnrollmentPassword(void *,unsigned short const *);
};

struct CPicturePasswordVault
{
	static long ClearEnrollment(void *);
	static long GetEnrollment(void *,unsigned short * *,GESTURE_SIGNATURE * *,unsigned __int64 *);
	static long GetEnrollmentStatus(void *);
	static long SetEnrollment(void *,unsigned short const *,GESTURE_SIGNATURE const *,unsigned __int64);
	static long UpdateEnrollmentPassword(void *,unsigned short const *);
};

struct CTContainer_PolicyLocalMem
{
	static int DestroyMem(void *);
};

struct CTLocalAllocPolicy
{
	static long Alloc(void *,unsigned long,unsigned __int64,void * *);
};

struct CTrustedSignalsVault
{
	static long ClearEnrollment(void *);
	static long GetEnrollmentData(void *,unsigned short * *);
	static long QueryEnrollment(void *,bool *);
	static long SetEnrollment(void *,unsigned short const *);
	static long UpdateEnrollmentPassword(void *,unsigned short const *);
};

struct CallToPackageHelper
{
	CallToPackageHelper(_UNICODE_STRING const *,unsigned long);
	~CallToPackageHelper();
};

class CertificateUtil
{
	static long GuidStringFromByteArray(unsigned char const *,unsigned long,unsigned short * *);
public:
	static _CERT_EXTENSION * FindExtensionByOid(char const *,_CERT_CONTEXT const *);
	static long DoesExtensionWithValueExist(char const *,unsigned short const *,_CERT_OID_VALUE_TYPE,_CERT_CONTEXT const *,int *);
	static long FindAllCertificatesByOidValue(_CERTFICATE_LOCATION,char const * * const,unsigned short const * * const,_CERT_OID_VALUE_TYPE * const,unsigned long,_CERT_CONTEXT const * * const,unsigned long *);
	static long FindExtensionGuidValueByOid(char const *,_CERT_CONTEXT const *,unsigned short * *);
	static long FindExtensionStrValueByOid(char const *,_CERT_CONTEXT const *,unsigned short * *);
	static long GetCertificateThumbprint(_CERT_CONTEXT const *,unsigned short * *);
	static long GetCertificateThumbprintBytes(_CERT_CONTEXT const *,unsigned char * *,unsigned long *);
	static void FreeCertificates(_CERT_CONTEXT const * * const,unsigned long);
};

struct DeviceRegistrationStateApi
{
	static long GetJoinCertificate(unsigned short const *,_JOIN_TYPE,INFO_KIND,_CERT_CONTEXT const * *);
	static long IsJoined(unsigned short const *,_JOIN_TYPE,int *,int *,_CERT_CONTEXT const * *);
};

class JoinStatusStorage
{
	struct JoinStatusRegKeyInfo
	{
		~JoinStatusRegKeyInfo();
	};

	static JoinStatusStorage::JoinStatusRegKeyInfo DeviceJoinStatusRegKeyInfo;
};

class Logger
{
	static long FormatString(unsigned short * &,unsigned short const *,char *);
	static long Trace(_TRACE_LEVEL,unsigned short const *,char *);
public:
	static long TraceCritical(unsigned short const *,...);
	static long TraceError(unsigned short const *,...);
	static long TraceInformation(unsigned short const *,...);
	static long TraceVerbose(unsigned short const *,...);
	static long TraceWarning(unsigned short const *,...);
	static long WriteNullOrEmptyParameterFailureEvent(unsigned short const *,unsigned short const *);
	static long WriteRegistryFailureEventEx(unsigned long,unsigned short const *,unsigned short const *,...);
};

namespace LoopbackLibrary
{
	struct BCryptAlgHandle
	{
		~BCryptAlgHandle();
	};

	struct BCryptHashHandle
	{
		BCryptHashHandle & operator=(BCryptHashHandle const &);
		~BCryptHashHandle();
	};

	struct ByteBuffer
	{
		~ByteBuffer();
	};

	struct SecurityContextPtr
	{
		~SecurityContextPtr();
	};

	struct SessionHandle
	{
		long AcquireSession(unsigned long);
		~SessionHandle();
	};

	struct SrwLock
	{
		SrwLock(_RTL_SRWLOCK *,SrwLock::LockState);
		~SrwLock();
	};

	LoopbackLibrary::TrackingState g_trackingState;
	_RTL_AVL_TREE * g_handleTrees;
	_RTL_AVL_TREE * g_hashTrees;
	_RTL_SRWLOCK * g_handleLocks;
	_RTL_SRWLOCK * g_hashLocks;
	bool FindSessionByHash(LoopbackLibrary::ByteBuffer &,unsigned long *);
	bool InitializeTables(unsigned long);
	bool InsertContext(LoopbackLibrary::SecurityContextPtr &);
	bool LockContext(_SecHandle &,LoopbackLibrary::SecurityContextPtr &);
	bool RemoveContext(_SecHandle &,LoopbackLibrary::SecurityContextPtr &);
	bool g_unitTest;
	long BeginTracking(_SecHandle *,unsigned char,unsigned char,_SecBufferDesc *,unsigned long);
	long CheckLoopback(_SecHandle *,unsigned long *);
	long Initialize(unsigned long);
	long UpdateTracking(_SecHandle *,_SecHandle *,unsigned char,unsigned char,_SecBufferDesc *);
	unsigned long IndexFromHash(LoopbackLibrary::ByteBuffer &);
	unsigned long g_tableCount;
	void EndTracking(_SecHandle *);
	void FinishHash(LoopbackLibrary::SecurityContextPtr &);
	void HandleTableDelete(_RTL_BALANCED_NODE *,void *);
	void NotifyLoopback(_SecHandle *);
	void Uninitialize();
	void UninitializeTables();
};

namespace LsaIumMkRpc
{
	LsaIumMkRpc::_lsaiummkrpc_MIDL_PROC_FORMAT_STRING const lsaiummkrpc__MIDL_ProcFormatString;
	LsaIumMkRpc::_lsaiummkrpc_MIDL_TYPE_FORMAT_STRING const lsaiummkrpc__MIDL_TypeFormatString;
	RPC_DISPATCH_TABLE const LsaIumMkRpc_v0_0_DispatchTable;
	_MIDL_SERVER_INFO_ const LsaIumMkRpc_ServerInfo;
	_MIDL_STUB_DESC const LsaIumMkRpc_StubDesc;
	__midl_frag10_t const LsaIumMkRpc::__midl_frag10;
	__midl_frag11_t const LsaIumMkRpc::__midl_frag11;
	__midl_frag14_t const LsaIumMkRpc::__midl_frag14;
	__midl_frag2_t const LsaIumMkRpc::__midl_frag2;
	__midl_frag5_t const LsaIumMkRpc::__midl_frag5;
	__midl_frag6_t const LsaIumMkRpc::__midl_frag6;
	unsigned char const __midl_frag12;
	unsigned char const __midl_frag15;
};

namespace ProvIumRpc
{
	ProvIumRpc::_NDR64_CONFORMANT_STRING_FORMAT const __midl_frag26;
	ProvIumRpc::_NDR64_POINTER_FORMAT const __midl_frag13;
	ProvIumRpc::_NDR64_POINTER_FORMAT const __midl_frag14;
	ProvIumRpc::_NDR64_POINTER_FORMAT const __midl_frag57;
	ProvIumRpc::_NDR64_POINTER_FORMAT const __midl_frag58;
	ProvIumRpc::_NDR64_POINTER_FORMAT const __midl_frag73;
	ProvIumRpc::_NDR64_POINTER_FORMAT const __midl_frag74;
	ProvIumRpc::_provium_MIDL_PROC_FORMAT_STRING const provium__MIDL_ProcFormatString;
	ProvIumRpc::_provium_MIDL_TYPE_FORMAT_STRING const provium__MIDL_TypeFormatString;
	_MIDL_STUBLESS_PROXY_INFO const ProvIum_ProxyInfo;
	_MIDL_STUB_DESC const ProvIum_StubDesc;
	__midl_frag10_t const ProvIumRpc::__midl_frag10;
	__midl_frag15_t const ProvIumRpc::__midl_frag15;
	__midl_frag16_t const ProvIumRpc::__midl_frag16;
	__midl_frag19_t const ProvIumRpc::__midl_frag19;
	__midl_frag49_t const ProvIumRpc::__midl_frag49;
	__midl_frag59_t const ProvIumRpc::__midl_frag59;
	__midl_frag60_t const ProvIumRpc::__midl_frag60;
	__midl_frag63_t const ProvIumRpc::__midl_frag63;
	__midl_frag66_t const ProvIumRpc::__midl_frag66;
	__midl_frag67_t const ProvIumRpc::__midl_frag67;
	__midl_frag75_t const ProvIumRpc::__midl_frag75;
	__midl_frag76_t const ProvIumRpc::__midl_frag76;
	unsigned char const __midl_frag77;
	unsigned char const __midl_frag78;
};

class RegistrationCertStatus
{
	static long GetCertificate(_CERTFICATE_LOCATION,char const *,unsigned short const *,unsigned short const *,INFO_KIND,_CERT_CONTEXT const * *);
public:
	static long GetDeviceCertificate(unsigned short const *,INFO_KIND,_CERT_CONTEXT const * *);
	static long GetWorkplaceCertificate(unsigned short const *,INFO_KIND,_CERT_CONTEXT const * *);
};

struct SH<void *,SH_HANDLE>
{
	void Reset();
};

struct SP<unsigned char,SP_HLOCAL<unsigned char> >
{
	unsigned long * GetPtrAs<unsigned long>();
	void Attach(unsigned char *);
	void Reset();
};

struct SP<unsigned char,SP_MEM<unsigned char> >
{
	void Attach(unsigned char *);
	void Reset();
};

struct SP<unsigned long,SP_MEM<unsigned long> >
{
	void Attach(unsigned long *);
	void Reset();
};

struct SP<unsigned short *,SP_MEM<unsigned short *> >
{
	void Attach(unsigned short * *);
	void Reset();
};

struct SP<unsigned short,SP_MEM<unsigned short> >
{
	void Reset();
};

namespace std
{
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

	struct exception
	{
		exception(exception const &);
		virtual char const * what();
	};

	nothrow_t const std::nothrow;
};

namespace wil
{
	class TraceLoggingProvider
	{
		virtual bool NotifyFailure(FailureInfo const &);
	protected:
		virtual void Initialize();
		virtual void OnErrorReported(bool,FailureInfo const &);
		virtual ~TraceLoggingProvider();
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
			void RecordCachedUsageUnderLock(EnabledStateManager::CachedUsageData const &);
		public:
			void EnsureSubscribedToUsageFlush(void (*)(void *));
			void OnStateChange();
			void OnTimer();
			void QueueBackgroundUsageReporting(unsigned int,wil_details_FeatureReportingCache *);
			void SubscribeFeatureStateCacheToConfigurationChanges(wil_details_FeatureStateCache *,wil_FeatureChangeTime,unsigned int);
		};

		class FeatureImpl<__WilFeatureTraits_Feature_ArsoForDesktopAad>
		{
			wil_details_FeatureStateCache GetCachedFeatureEnabledState();
			wil_details_FeatureStateCache GetCurrentFeatureEnabledState(int *);
		public:
			void ReportUsage(bool,ReportingKind,unsigned __int64);
		};

		class FeatureImpl<__WilFeatureTraits_Feature_ArsoForDesktopDJ>
		{
			wil_details_FeatureStateCache GetCachedFeatureEnabledState();
			wil_details_FeatureStateCache GetCurrentFeatureEnabledState(int *);
		public:
			void ReportUsage(bool,ReportingKind,unsigned __int64);
		};

		class FeatureImpl<__WilFeatureTraits_Feature_PasswordLessNewDevices>
		{
			wil_details_FeatureStateCache GetCachedFeatureEnabledState();
			wil_details_FeatureStateCache GetCurrentFeatureEnabledState(int *);
		public:
			void ReportUsage(bool,ReportingKind,unsigned __int64);
		};

		class FeatureImpl<__WilFeatureTraits_Feature_Servicing_2101c_27825144>
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
			void EnsureSubscribedToProcessWideUsageFlushUnderLock();
		public:
			void QueueBackgroundSRUMUsageReporting(unsigned int,unsigned short,unsigned int);
			void RecordFeatureUsage(unsigned int,wil_details_ServiceReportingKind,unsigned __int64);
			void SubscribeToEnabledStateChanges(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
			void SubscribeToUsageFlush(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *));
			~FeatureStateManager();
		};

		struct SecureZeroData
		{
			static void Close(SecureZeroData);
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
			long Log_IfFailedWithExpected(void *,unsigned int,char const *,long,unsigned int,...);
			long Return_GetLastError(void *,unsigned int,char const *);
			long Return_Win32(void *,unsigned int,char const *,unsigned long);
			void FailFast_Unexpected(void *,unsigned int,char const *);
			void Return_Hr(void *,unsigned int,char const *,long);
			void _FailFastImmediate_Unexpected();
			void _FailFast_GetLastError(void *,unsigned int,char const *);
			void _FailFast_Unexpected(void *,unsigned int,char const *);
			void _Log_Hr(void *,unsigned int,char const *,long);
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
		bool GetModuleInformation(void *,unsigned int *,char *,unsigned __int64);
		bool IsFeatureConfigured(wil_FeatureState *,unsigned int,bool,wil_FeatureStore,int *);
		bool g_processShutdownInProgress;
		bool g_resultMessageCallbackSet;
		char const * (* g_pfnGetModuleName)();
		char const * GetCurrentModuleName();
		details_abi::ProcessLocalStorage<details_abi::ProcessLocalData> g_processLocalData;
		details_abi::ThreadLocalStorage<details::ThreadFailureCallbackHolder *> * g_pThreadFailureCallbacks;
		details_abi::ThreadLocalStorage<details::ThreadFailureCallbackHolder *> g_threadFailureCallbacks;
		int RecordException(long);
		int RecordFailFast(long);
		int RecordLog(long);
		int RecordReturn(long);
		long (* g_pfnRtlDisownModuleHeapAllocation)(void *,void *);
		long GetLastErrorFailHr();
		long NtStatusToHr(long);
		long ReportFailure_GetLastErrorHr(void *,unsigned int,char const *,char const *,char const *,void *,FailureType);
		long ReportFailure_Win32(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,unsigned long);
		long RtlDisownModuleHeapAllocation(void *,void *);
		shutdown_aware_object<details::EnabledStateManager> g_enabledStateManager;
		shutdown_aware_object<details::FeatureStateManager> g_featureStateManager;
		unsigned __int64 ResultStringSize(char const *);
		unsigned __int64 ResultStringSize(unsigned short const *);
		unsigned char (* g_pfnDllShutdownInProgress)();
		unsigned char * WriteResultString<char const *>(unsigned char *,unsigned char *,char const *,char const * *);
		unsigned char * WriteResultString<unsigned short const *>(unsigned char *,unsigned char *,unsigned short const *,unsigned short const * *);
		unsigned char RtlDllShutdownInProgress();
		unsigned int EnsureSubscribedToFeatureConfigurationChanges();
		unsigned long (* g_pfnRtlNtStatusToDosErrorNoTeb)(long);
		unsigned long GetLastErrorFail(void *,unsigned int,char const *,char const *,char const *,void *);
		unsigned long ReportFailure_GetLastError(void *,unsigned int,char const *,char const *,char const *,void *,FailureType);
		unsigned long RtlNtStatusToDosErrorNoTeb(long);
		unsigned short * LogStringPrintf(unsigned short *,unsigned short const *,unsigned short const *,...);
		void (* g_pfnDebugBreak)();
		void (* g_pfnGetContextAndNotifyFailure)(FailureInfo *,char *,unsigned __int64);
		void (* g_pfnLoggingCallback)(FailureInfo const &);
		void (* g_pfnOriginateCallback)(FailureInfo const &);
		void (* g_pfnRaiseFailFastException)(_EXCEPTION_RECORD *,_CONTEXT *,unsigned long);
		void (* g_pfnTelemetryCallback)(bool,FailureInfo const &);
		void (* g_pfnThrowResultException)(FailureInfo const &);
		void * ProcessHeapAlloc(unsigned long,unsigned __int64);
		void CloseHandle(void *);
		void DebugBreak();
		void FeatureLoggingHook(unsigned int,FEATURE_LOGGED_TRAITS const *,FEATURE_ERROR const *,int,wil_ReportingKind const *,wil_VariantReportingKind const *,unsigned char,unsigned __int64);
		void FreeProcessHeap(void *);
		void GetContextAndNotifyFailure(FailureInfo *,char *,unsigned __int64);
		void LogFailure(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long,unsigned short const *,bool,unsigned short *,unsigned __int64,char *,unsigned __int64,FailureInfo *);
		void RecordFeatureUsageCallback(unsigned int,wil_details_ServiceReportingKind,unsigned int,wil_details_FeatureReportingCache *,wil_details_RecordUsageResult *);
		void RecordSRUMFeatureUsage(unsigned int,unsigned int,unsigned int);
		void ReleaseMutex(void *);
		void ReportFailure(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long,unsigned short const *,details::ReportFailureOptions);
		void ReportFailure_Hr(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long);
		void SubscribeFeatureStateCacheToConfigurationChanges(wil_details_FeatureStateCache *,wil_FeatureChangeTime,unsigned int);
		void UnregisterWilFeatureConfigurationChange(void *);
		void UnsubscribeProcessWideUsageFlush(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
		void UnsubscribeWilWnf(__WIL__WNF_USER_SUBSCRIPTION *);
		void VaultCloseVault(void *);
		void WilApiImpl_RecordFeatureUsage(unsigned int,unsigned int,unsigned int,char const *);
		void WilApiImpl_SubscribeFeatureStateChangeNotification(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
		void WilApiImpl_UnsubscribeFeatureStateChangeNotification(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
		void WilApi_RecordFeatureUsage(unsigned int,unsigned int,unsigned int,char const *);
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
		};

		struct SubscriptionList
		{
			SubscriptionList();
			void OnSignaled(srwlock &);
			void SubscribeUnderLock(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
			void Unsubscribe(srwlock &,FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
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

	bool (* g_pfnIsDebuggerPresent)();
	bool (* g_pfnWilFailFast)(wil::FailureInfo const &);
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

	};

	struct function<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>
	{
		~function<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>();
	};

	struct unique_ptr<unsigned char,wil::process_heap_deleter>
	{
		void reset(unsigned char *);
		~unique_ptr<unsigned char,wil::process_heap_deleter>();
	};

};

ASN1objectidentifier_s * NegKerbMechOid;
ASN1objectidentifier_s * NegKerbOldMechOid;
ASN1objectidentifier_s * NegNtlmMechOid;
ASN1objectidentifier_s * NegSpnegoMechOid;
ASN1objectidentifier_s * NegpDecodeObjectId(unsigned char *,unsigned long);
FEATURE_ENABLED_STATE (* g_wil_details_apiGetFeatureEnabledState)(unsigned int,FEATURE_CHANGE_TIME,int *);
FEATURE_ENABLED_STATE (* g_wil_details_internalGetFeatureEnabledState)(unsigned int,FEATURE_CHANGE_TIME,int *);
HINSTANCE__ * NeghMSVModule;
HINSTANCE__ * g_wil_details_ntdllModuleHandle;
HINSTANCE__ * wil_details_GetNtDllModuleHandle();
HKEY__ * LsaRegistryKey;
HKEY__ * LuaRegistryKey;
LibraryInitLock g_lockObject;
MicrosoftTelemetryAssertTriggeredNode * g_MicrosoftTelemetryAssertsTriggeredList;
RPC_DISPATCH_TABLE const LsaIdpExtRpc_v0_0_DispatchTable;
_CANONICAL_CREDENTIAL * CredpFindCredential(_CREDENTIAL_SETS *,_UNICODE_STRING *,_TARGET_ATTRIBUTE_TYPE *,_UNICODE_STRING *,unsigned long,unsigned long *,unsigned char,unsigned char);
_CANONICAL_TARGET_INFO * CredpFindTargetInfo(_CREDENTIAL_SETS *,unsigned short *);
_CCGClient * LsapCcgClient;
_CERT_CONTEXT const * LsapLoadIumBoundMachineAuthCert(int *);
_CREDENTIAL_SET * CredpAllocateCredSet();
_DLL_BINDING * * pPackageDllList;
_DLL_BINDING * SpmpFindDll(unsigned short const *);
_DebugKeys * BreakKeyNames;
_HANDLE_PACKAGE * LogonSessionPackage;
_LARGE_INTEGER * LsapNameLifespans;
_LARGE_INTEGER NegTrustTime;
_LARGE_INTEGER g_TimeForever;
_LIST_ENTRY * LogonSessionList;
_LIST_ENTRY CredentialSetList;
_LIST_ENTRY LogonSessionLeakList;
_LIST_ENTRY NegCredList;
_LIST_ENTRY NegDefaultCredList;
_LIST_ENTRY NegLogonSessionList;
_LIST_ENTRY NegLoopbackList;
_LIST_ENTRY NegPackageList;
_LIST_ENTRY NotifyEvents;
_LIST_ENTRY NotifyList;
_LIST_ENTRY ScavList;
_LIST_ENTRY SessionList;
_LIST_ENTRY g_IdProvList;
_LSAP_API_LOG * InternalApiLog;
_LSAP_API_LOG * LpcApiLog;
_LSAP_DS_NAME_MAP * LocalSystemNameMap;
_LSAP_DS_NAME_MAP * LsapCreateDsNameMap(_UNICODE_STRING *,_LARGE_INTEGER *,unsigned long);
_LSAP_LOGON_SESSION * LsapLocateLogonSessionWithSid(void *);
_LSAP_SECURITY_PACKAGE * * pPackageControlList;
_LSAP_SECURITY_PACKAGE * NegLsaPackage;
_LSA_IDENTITY_PROVIDER_HOST_FUNCTION_TABLE g_LsapIdProvHostTable;
_LSA_IF_LSASRV_FUNCTION_TABLE LsapLsasrvIfTable;
_LSA_LOOKUP_EX_FUNCTIONS LsapLookupExtensionFunctions;
_LSA_RM_EX_FUNCTIONS LsapRmExtensionFunctions;
_LSA_SSPI_EX_RPC_FUNCTIONS LsapSspiExtensionFunctions;
_MIDL_SERVER_INFO_ const LsaIdpExtRpc_ServerInfo;
_MIDL_STUB_DESC const LsaIdpExtRpc_StubDesc;
_NDR64_POINTER_FORMAT const __midl_frag38;
_NDR64_RANGE_FORMAT const __midl_frag37;
_NEG_CONTEXT * NegpCreateContext();
_NEG_CONTEXT_REQ_MAP * NegContextReqMap;
_NEG_DOMAIN_TYPES NegpIsUplevelDomain(_LUID *,_SECURITY_LOGON_TYPE,_UNICODE_STRING *);
_NEG_LOGON_SESSION * NegpBuildLogonSession(_LUID *,int,unsigned __int64,unsigned __int64);
_NEG_LOGON_SESSION * NegpLocateLogonSession(_LUID *);
_NEG_PACKAGE * NegpFindPackage(unsigned __int64);
_NEG_PACKAGE * NegpFindPackageByName(_UNICODE_STRING *);
_NEG_PACKAGE * NegpFindPackageByOid(ASN1objectidentifier_s *);
_NEG_TRUST_LIST * NegTrustList;
_NEG_TRUST_LIST * NegpGetTrustList();
_NETP_ETW_LOGGER_SESSION_ARGS LsaLogSessionArgs;
_NT_PRODUCT_TYPE NegProductType;
_PAC_INFO_BUFFER * PAC_Find(_PACTYPE *,unsigned long,_PAC_INFO_BUFFER *);
_PROMPT_DATA * CredpAllocatePromptData(_CANONICAL_CREDENTIAL *);
_PROMPT_DATA * CredpFindPromptData(_CREDENTIAL_SETS *,_UNICODE_STRING *,_TARGET_ATTRIBUTE_TYPE,_UNICODE_STRING *,unsigned long,unsigned long);
_PROVIDER_DATA gProvData;
_RTL_AVL_TREE NegLogonSessionTable;
_RTL_CRITICAL_SECTION CredentialSetListLock;
_RTL_CRITICAL_SECTION LogonSessionNotificationLock;
_RTL_CRITICAL_SECTION NegComputerNamesLock;
_RTL_CRITICAL_SECTION NegLogonSessionListLock;
_RTL_CRITICAL_SECTION NegTrustListLock;
_RTL_CRITICAL_SECTION NotifyLock;
_RTL_CRITICAL_SECTION ScavLock;
_RTL_CRITICAL_SECTION csSessionMgr;
_RTL_CRITICAL_SECTION g_autoLogonCritSec;
_RTL_CRITICAL_SECTION_DEBUG g_autoLogonCritSec_DEBUG;
_RTL_RESOURCE * LogonSessionListLock;
_RTL_RESOURCE * PackageListLock;
_RTL_RESOURCE LogonSessionLeakListLock;
_RTL_RESOURCE NegCredListLock;
_RTL_RESOURCE NegLock;
_RTL_RESOURCE g_ConnectedAccountStoreLock;
_RTL_RESOURCE g_EvalLock;
_RTL_RESOURCE g_IdProvRegLock;
_RTL_SRWLOCK LsaAutologgerLock;
_RTL_SRWLOCK g_MicrosoftTelemetryAssertLock;
_SECPKG_PRIMARY_CRED NegPrimarySystemCredentials;
_SECPKG_SUPPLEMENTAL_CRED_ARRAY * NegSupplementalSystemCredentials;
_SEC_HANDLE_ENTRY * ShtpFindHandle(_SMALL_HANDLE_TABLE *,_SecHandle *,unsigned long,int *);
_SEC_HANDLE_ENTRY * ShtpPopHandle(_SMALL_HANDLE_TABLE *);
_SID_AND_ATTRIBUTES * g_LsapAppContainerCapabilities;
_STRING NegpGlboalOriginName;
_STRING g_LogonOriginName;
_Session * pEfsSession;
_TOKEN_SOURCE NegpGlobalSourceContext;
_TP_TIMER * LogonSessionLeakTimer;
_UNICODE_STRING LsapGlobalCCGMachineAccount;
_UNICODE_STRING NegDnsComputerName_U;
_UNICODE_STRING NegLocalHostName_U;
_UNICODE_STRING NegNetbiosComputerName_U;
__midl_frag11_t const __midl_frag11;
__midl_frag14_t const __midl_frag14;
__midl_frag15_t const __midl_frag15;
__midl_frag22_t const __midl_frag22;
__midl_frag26_t const __midl_frag26;
__midl_frag27_t const __midl_frag27;
__midl_frag2_t const __midl_frag2;
__midl_frag32_t const __midl_frag32;
__midl_frag39_t const __midl_frag39;
__midl_frag40_t const __midl_frag40;
__midl_frag43_t const __midl_frag43;
__midl_frag48_t const __midl_frag48;
__midl_frag4_t const __midl_frag4;
__midl_frag52_t const __midl_frag52;
__midl_frag57_t const __midl_frag57;
__midl_frag5_t const __midl_frag5;
__midl_frag6_t const __midl_frag6;
__midl_frag7_t const __midl_frag7;
__midl_frag9_t const __midl_frag9;
__type_info_node __type_info_root_node;
_lsaidpextrpc_MIDL_PROC_FORMAT_STRING const lsaidpextrpc__MIDL_ProcFormatString;
_lsaidpextrpc_MIDL_TYPE_FORMAT_STRING const lsaidpextrpc__MIDL_TypeFormatString;
bool IsVaultAPIPresent();
char * * SessionStatLabels;
char * szSection;
int (* NegMsvIsLocalhostAliases)(_UNICODE_STRING *);
int BindOldPackage(void *,_SECPKG_FUNCTION_TABLE *);
int CheckMembershipFromToken(void *,WELL_KNOWN_SID_TYPE);
int DebugShutdownNotification(unsigned long);
int IsArsoPolicyExplicitlySet();
int IsCachedMachineNameType(_LSAP_LOGON_SESSION *,unsigned long);
int IsWinPEHost();
int LhtAddHandle(void *,_SecHandle *,void *,_LUID *,unsigned long);
int LhtDelete(void *,void (*)(_SecHandle *,void *,unsigned long));
int LhtDeleteHandle(void *,_SecHandle *,unsigned long);
int LhtInitialize();
int LhtReleaseContext(void *,_SecHandle *);
int LhtValidateHandle(void *,_SecHandle *,int);
int LhtpConvertSmallToLarge(_SMALL_HANDLE_TABLE *,_LARGE_HANDLE_TABLE *);
int LhtpExpandTable(_LARGE_HANDLE_TABLE *,unsigned long);
int LsapHasConnectPermission(void *);
int LsapIsCStringBuffer(void *,unsigned long);
int LsapIsUserSidIssuedByMsaIdProv(void *);
int LsapSetSamAccountNameForLogonSession(_LSAP_LOGON_SESSION *);
int NegUplevelDomain;
int NegpCompareOid(ASN1objectidentifier_s *,ASN1objectidentifier_s *);
int NegpIsHardcodedServiceAccount(void *,void *,unsigned long,_UNICODE_STRING * *,_UNICODE_STRING * *,_UNICODE_STRING * *,unsigned long *);
int NegpIsLoopback(MechTypeList *,_UNICODE_STRING *);
int SafeFree(void *);
int ShtAddHandle(void *,_SecHandle *,void *,_LUID *,unsigned long);
int ShtDelete(void *,void (*)(_SecHandle *,void *,unsigned long));
int ShtDeleteHandle(void *,_SecHandle *,unsigned long);
int ShtInitialize();
int ShtReleaseContext(void *,_SecHandle *);
int ShtValidateHandle(void *,_SecHandle *,int);
int ShutdownPackage(_LSAP_SECURITY_PACKAGE *);
int SpmpAddDll(_DLL_BINDING *);
int SpmpBootPackage(_LSAP_SECURITY_PACKAGE *,_SECPKG_PARAMETERS *);
int SpmpLoadPackage(_DLL_BINDING *,unsigned long,_SECPKG_PARAMETERS *);
int TestName(void *,_UNICODE_STRING *);
int g_bInitialized;
int g_fHasInitIdProvExtension;
int g_fHasInitIdProvHostSam;
int wil_QueryFeatureState(wil_FeatureState *,unsigned int,int,wil_FeatureStore,int *,int *);
int wil_RtlStagingConfig_QueryFeatureState(wil_FeatureState *,unsigned int,int,int *);
int wil_StagingConfig_QueryFeatureState(wil_FeatureStore,wil_FeatureState *,unsigned int,int,int *);
int wil_details_FeatureReporting_ReportUsageToServiceDirect(wil_details_FeatureReportingCache *,unsigned int,int,int,wil_details_ServiceReportingKind,unsigned int,unsigned __int64);
int wil_details_StagingConfigFeature_HasUniqueState(wil_details_StagingConfigFeature const *);
int wil_details_StagingConfig_QueryFeatureState(wil_details_StagingConfig *,wil_FeatureState *,unsigned int,int);
long (* g_wil_details_pfnNtQueryWnfStateData)(__WIL__WNF_STATE_NAME const *,__WIL__WNF_TYPE_ID const *,void const *,unsigned long *,void *,unsigned long *);
long (* g_wil_details_pfnNtUpdateWnfStateData)(__WIL__WNF_STATE_NAME const *,void const *,unsigned long,__WIL__WNF_TYPE_ID const *,void const *,unsigned long,unsigned long);
long (* g_wil_details_pfnRtlNotifyFeatureUsage)(_RTL_FEATURE_USAGE_REPORT *);
long (* g_wil_details_pfnRtlQueryFeatureConfiguration)(unsigned int,_RTL_FEATURE_CONFIGURATION_TYPE,unsigned __int64 *,_RTL_FEATURE_CONFIGURATION *);
long (* g_wil_details_pfnRtlRegisterFeatureConfigurationChangeNotification)(void (*)(void *),void *,unsigned __int64 *,void * *);
long (* g_wil_details_pfnRtlSubscribeWnfStateChangeNotification)(__WIL__WNF_USER_SUBSCRIPTION * *,__WIL__WNF_STATE_NAME,unsigned long,long (*)(__WIL__WNF_STATE_NAME,unsigned long,__WIL__WNF_TYPE_ID *,void *,void const *,unsigned long),void *,__WIL__WNF_TYPE_ID *,unsigned long,unsigned long);
long (* g_wil_details_pfnRtlUnsubscribeWnfNotificationWaitForCompletion)(__WIL__WNF_USER_SUBSCRIPTION *);
long (** LpcDispatchTable)(_SPM_LPC_MESSAGE *);
long CheckAppcontainerUserNameAccess(unsigned long,_LSA_CALL_INFO *,int *);
long CredpAcquirePrivateKeyForCertCred(_LUID *,_CANONICAL_CREDENTIAL *,_CERT_CONTEXT const * *,unsigned __int64 *,unsigned long *,int *);
long CredpCloneCredential(_LUID *,_CREDENTIAL_SETS *,unsigned long,_CANONICAL_CREDENTIAL *,unsigned char,unsigned char,_ENCRYPTED_CREDENTIALW * *);
long CredpCryptAcquireCertificatePrivateKey(_CERT_CONTEXT const *,unsigned __int64 *,unsigned long *,int *,unsigned long *);
long CredpDecryptDataBySecret(unsigned char *,unsigned long,unsigned char *,unsigned long,unsigned char * *,unsigned long *);
long CredpDeleteCredentialFile(_CREDENTIAL_SETS *,_CANONICAL_CREDENTIAL *);
long CredpDeleteFile(unsigned short const *,unsigned short const *,unsigned char);
long CredpElevateIfLowToken(void * *);
long CredpEncryptDataBySecret(unsigned char *,unsigned long,unsigned char *,unsigned long,unsigned char * *,unsigned long *);
long CredpEnsureUserIsImpersonated(_LUID *,unsigned char *);
long CredpFindBestMatchingCredential(_CREDENTIAL_SETS *,_UNICODE_STRING *,_UNICODE_STRING *,_TARGET_ATTRIBUTE_TYPE *,unsigned long *,_CANONICAL_CREDENTIAL * *);
long CredpFindBestMatchingDomainCredentials(_LUID *,unsigned long,_CREDENTIAL_SETS *,_CANONICAL_TARGET_INFO *,_CANONICAL_CREDENTIAL * *,unsigned long *);
long CredpFindCredentialInformationByTargetName(_CREDENTIAL_SETS *,unsigned short *,unsigned long,_TARGET_NAME_TYPE,unsigned long,unsigned char,unsigned long,_CANONICAL_CREDENTIAL * *,_PROMPT_DATA * *,_WILDCARD_TYPE *,unsigned char *);
long CredpGenerateCredentialFilename(_CANONICAL_CREDENTIAL *,unsigned short * const);
long CredpGenerateDomainVisibleTargetName(_UNICODE_STRING *,_UNICODE_STRING *,unsigned short * *);
long CredpGetCredIumRpcBinding(void * *);
long CredpGetHostNameFromSPNTargetName(unsigned short *,unsigned short * *);
long CredpIsTargetRecoveryDC(_LUID *,unsigned short *,unsigned long,int *);
long CredpIumCheckProtectedCredential(void *,unsigned long,void * *,unsigned long *);
long CredpIumProtectCredential(void *,unsigned long,void * *,unsigned long *);
long CredpLoadOnFirstUse(_LUID *);
long CredpLogonCredsMatchTargetInfo(_LUID *,_CANONICAL_TARGET_INFO *);
long CredpMarshalCredential(_CANONICAL_CREDENTIAL *,unsigned char *,unsigned long *,unsigned char *);
long CredpQueryUserApplicationDataPath(_CREDENTIAL_SET *,unsigned long,void *);
long CredpReadCredSet(_LUID *,_CREDENTIAL_SETS *,unsigned long,unsigned char,unsigned short const * *,unsigned long);
long CredpReadCredentialFromFile(unsigned short const *,unsigned short const *,ProtectionMethodType,unsigned char *,unsigned long,unsigned short const * *,unsigned long,_CANONICAL_CREDENTIAL * *,long *);
long CredpReadCredentialsFromStorage(unsigned short const *,unsigned short const * *,unsigned long,_LIST_ENTRY *);
long CredpReadDVDomainCredentials(_LUID *,unsigned long,unsigned long,_CANONICAL_TARGET_INFO *,unsigned long *,_ENCRYPTED_CREDENTIALW * * *);
long CredpReferenceCredSets(_LUID *,unsigned char,_CREDENTIAL_SETS *);
long CredpUnmarshalCredential(unsigned char *,unsigned long,unsigned long *,_CANONICAL_CREDENTIAL * *);
long CredpValidateCredential(unsigned long,unsigned long,_UNICODE_STRING *,_CANONICAL_TARGET_INFO *,_ENCRYPTED_CREDENTIALW *,unsigned char *,_CANONICAL_CREDENTIAL * *);
long CredpValidateTargetInfo(_CREDENTIAL_TARGET_INFORMATIONW *,_CANONICAL_TARGET_INFO * *);
long CredpWinStatusToNtStatus(unsigned long);
long CredpWriteCredToElevatedSession(_LUID *,unsigned long,_CANONICAL_CREDENTIAL *);
long CredpWriteCredential(_LUID *,_CREDENTIAL_SETS *,_CANONICAL_CREDENTIAL * *,unsigned char,unsigned char,unsigned char,unsigned long,_CRED_WRITE_UNDO * *);
long CredpWriteCredentialToFile(_CANONICAL_CREDENTIAL *,unsigned short const *,unsigned short const *,ProtectionMethodType,unsigned char *,unsigned long);
long CredpWriteFile(void *,_CREDENTIAL_FILE_HEADER *,unsigned char *,unsigned long);
long CredpWriteMorphedCredential(_LUID *,_CREDENTIAL_SETS *,unsigned long,unsigned long,_UNICODE_STRING *,unsigned char,_CANONICAL_TARGET_INFO *,_ENCRYPTED_CREDENTIALW *,_CANONICAL_CREDENTIAL * *);
long CredpWritePinToCsp(_LUID *,_CREDENTIAL_SETS *,_CANONICAL_CREDENTIAL *);
long EasEngineTestUserIsControlled(void *,int *);
long GetClientString(_UNICODE_STRING *,_UNICODE_STRING *,_SPM_LPC_MESSAGE *,unsigned char * *);
long I_DeleteSession(_Session *);
long InitializeLsaExtension(_LSA_EXTENSION_INIT_STAGE);
long InternalMessageId;
long IsBitLockerEnabledAndSecureOnVolume(unsigned char,unsigned short * const,int *);
long IsDeviceManaged(unsigned char,int *,int *);
long IsDeviceSecure(unsigned char,int *);
long LsaIfGetAuthDataForUser(_UNICODE_STRING *,unsigned long,_UNICODE_STRING *,unsigned char * *,unsigned long *,_UNICODE_STRING *);
long LsapAcceptPeerCertificate(_GUID *,int,_CERT_CONTEXT const *,void * *);
long LsapAddIdProv(_GUID const &,unsigned short const *,unsigned long,unsigned long,void *,_LSAP_IDPROV_REG_ENTRY * *);
long LsapAdjustGroupMembership(void *,void *);
long LsapApplyLoopbackSessionId(void *);
long LsapBuildPacSidList(_NETLOGON_VALIDATION_SAM_INFO3 *,_SAMPR_PSID_ARRAY *);
long LsapCaptureBuffers(unsigned char *,_SecBufferDesc *,_SecBufferDesc *,void * *,unsigned char);
long LsapCaptureSamInfo(void * *,_UNICODE_STRING *,_UNICODE_STRING *);
long LsapChangeBlankPasswordRestriction(unsigned char);
long LsapCheckEASPolicies(void *,int *);
long LsapCheckMachineKey(unsigned char *,unsigned long,unsigned char * *,unsigned long *);
long LsapCleanUpHandles(_Session *,void *);
long LsapConfigureArso(void *);
long LsapConfigureCloudCache(_LUID);
long LsapConfigureLocalAccount(_LUID);
long LsapConnectAccountInSam(_UNICODE_STRING *,_UNICODE_STRING *,_UNICODE_STRING *,_GUID *,int,void * *,unsigned long *,_CONNECT_OPERATION_SAM_RECOVERY_INFO *);
long LsapContainerModeInit();
long LsapConvertKerbWow64LogonBuffer(void *,unsigned long,void * *,unsigned long *);
long LsapConvertLogonAuthInfo(int,_SECURITY_LOGON_TYPE,void *,unsigned long,void *,void * *,unsigned long *,_LUID *,unsigned char *);
long LsapCopyNamesInLogonSession(_LUID *,_LSAP_LOGON_SESSION *);
long LsapCreateAppContainerContext(_SECURITY_CAPABILITIES *,unsigned short const *,unsigned short const *);
long LsapCreateCachedMachineNameMap(_LSAP_LOGON_SESSION *,unsigned long,_LSAP_DS_NAME_MAP * *);
long LsapCreateConnectedAccountInSam(void *,_UNICODE_STRING *,_UNICODE_STRING *,_GUID *,int,_UNICODE_STRING *,void * *);
long LsapCreateDnsNameFromCanonicalName(_LSAP_LOGON_SESSION *,unsigned long,_LSAP_DS_NAME_MAP * *);
long LsapCreateLsaLogonSession(_LUID *,_LSAP_LOGON_SESSION * *);
long LsapDecodeSecret(_UNICODE_STRING *,_UNICODE_STRING *);
long LsapDecryptDPAPIMasterKey(_LUID *,LSAI_DPAPI_KEY_TYPE,unsigned char *,unsigned long,unsigned char *,unsigned long,unsigned char * *,unsigned long *);
long LsapDecryptMarshalledAuthIdEx2(void *,unsigned char *,unsigned long,unsigned char * *,unsigned long *);
long LsapDecryptPassword(void *,_UNICODE_STRING *,_UNICODE_STRING *);
long LsapDeleteLocalAccountSecrets();
long LsapDeleteMachineCertificate();
long LsapDisableSystemArsoConsent();
long LsapDisconnectAccountInSam(void *,_UNICODE_STRING *,_UNICODE_STRING *,void *,int,_DISCONNECT_OPERATION_SAM_RECOVERY_INFO *);
long LsapDuplicateTokenForAppContainer(_LSA_CALL_INFO *,void *,void * *);
long LsapEnableSystemArsoConsent();
long LsapExtractServicePassword(unsigned short *,unsigned short * *);
long LsapFileSystemReservedNameCheck(_UNICODE_STRING *,_UNICODE_STRING *);
long LsapFilterElevatedTokenFull(void *,void * *);
long LsapGetCredentialComplexityFromProv(_GUID *,_LSA_CREDENTIAL_COMPLEXITY *);
long LsapGetCredentialKey(_LUID *,_GUID *,_CREDENTIAL_KEY * *);
long LsapGetCredentialKeyHelper(_LUID *,_GUID *,_CREDENTIAL_KEY * *);
long LsapGetDuplicatedGlobalProcessHandle(void * *,unsigned long);
long LsapGetFormatsForLogon(_LSAP_LOGON_SESSION *,unsigned short *,unsigned short *,unsigned long,_LSAP_DS_NAME_MAP * *);
long LsapGetHostUserToken(void * *);
long LsapGetIdProvCertFromCred(_LUID *,_GUID *,void *,unsigned long,void * *);
long LsapGetKerbTbalSupplementalCredz(_LUID,unsigned long *,unsigned char * *);
long LsapGetLocalUserName(void *,_UNICODE_STRING *,_LocalConnectFailureReason *);
long LsapGetNameForLogonSessionHelper(_LSAP_LOGON_SESSION *,_LARGE_INTEGER *,unsigned long,_LSAP_DS_NAME_MAP * *,int);
long LsapGetNameFromCert(_CERT_CONTEXT const *,int,unsigned short * *);
long LsapGetPasswordFromCredmanForUsernameTarget(_USERNAME_TARGET_CREDENTIAL_INFO *,unsigned short *,_SECURITY_LOGON_TYPE,int *,_UNICODE_STRING *,_UNICODE_STRING *,_UNICODE_STRING *);
long LsapGetRandomSuffix(unsigned short *);
long LsapGetS4ULogonContainerUserToken(_CERT_CONTEXT const *,void * *);
long LsapGetS4ULogonLocalUserToken(_CERT_CONTEXT const *,void * *);
long LsapGetSamRegKeyForComplexity(unsigned long,int,HKEY__ * *);
long LsapGetStrongCredentialKeyFromMSV(_LUID *,_GUID *,_CREDENTIAL_KEY * *);
long LsapGetTokenIntegrityInfo(void *,_LSAP_TOKEN_INFO_INTEGRITY *);
long LsapGetUserHandleBySamUserSid(void *,void * *,_DISCONNECT_OPERATION_SAM_RECOVERY_INFO *);
long LsapGetUserNameAndAuthBuffer(void *,unsigned char *,unsigned long,unsigned char * *,unsigned long *,_UNICODE_STRING *);
long LsapGetUserNameFromAuthIdEx2(unsigned char *,unsigned long,_UNICODE_STRING *);
long LsapIdProvExtReadLock();
long LsapIdProvExtWriteLock();
long LsapIdProvHostComputeLogonCredHash(void *,_UNICODE_STRING *,_UNICODE_STRING *,void * *,unsigned long *);
long LsapIdProvHostDeleteUnverifiedConnectedAccount(void *,unsigned short *);
long LsapIdProvHostDeregisterIdentityProvider(void *);
long LsapIdProvHostGetCurrentKeyIdForUser(void *,_GUID *);
long LsapIdProvHostGetProvInfo(void *,_GUID *);
long LsapIdProvHostLookUpUserInfo(void *,unsigned short const *,void *,_LSA_IDENTITY_INFO_CLASS,void * *,unsigned long *);
long LsapIdProvHostRegisterSubProvider(void *,unsigned short const *,unsigned short const *);
long LsapIdProvHostSaveUserInfo(void *,unsigned short *,_LSA_IDENTITY_INFO_CLASS,void *,unsigned long);
long LsapIdProvHostScorePassword(_UNICODE_STRING *,unsigned short *);
long LsapIdProvHostUpdateCredentialKey(void *,void *,_CREDENTIAL_KEY *,_CREDENTIAL_KEY *);
long LsapImpersonateClientEx(int *);
long LsapImpersonateNetworkService();
long LsapInitializeLeakDetectionInfo();
long LsapInitializeSessionToken(void *,void * *);
long LsapIsProtectedProcess(void *,int *);
long LsapIsSameUser(void *,void *,unsigned char *);
long LsapIsSystemArsoAllowed(unsigned char,int *,int *);
long LsapIsUserArsoEnabled(_SID *,int *,int *);
long LsapIsUserTokenAdmin(void *,int *);
long LsapKernelmodeClientCallback(unsigned long,unsigned __int64,unsigned __int64,unsigned __int64,_SecBuffer *,_SecBuffer *);
long LsapLazyInitSamConnection();
long LsapLogonUserWithCred(void *,unsigned char *,unsigned long,void * *,_LUID *);
long LsapLogonUserWithPassword(_UNICODE_STRING *,_UNICODE_STRING *,void * *);
long LsapLsaExtensionLoad();
long LsapLsaExtensionLoadComplete();
long LsapLsaExtensionStart();
long LsapMakeTokenInformationV1(_NETLOGON_VALIDATION_SAM_INFO3 *,_LSA_TOKEN_INFORMATION_V1 * *);
long LsapMakeTokenInformationV2(void *,_LSA_TOKEN_INFORMATION_V1 * *);
long LsapMakeTokenInformationV2Internal(void *,_TOKEN_GROUPS *,_LSA_TOKEN_INFORMATION_V1 * *);
long LsapNotifyLogonSessionInfoChange(_LSAP_LOGON_SESSION *);
long LsapNotifyRmSessionInfoChange(_LSAP_LOGON_SESSION *);
long LsapOpenLocalSamHandles(unsigned char,void * *,unsigned long,void * *,unsigned long,void * *,void * *);
long LsapPersistMachineCertificate(_CERT_CONTEXT const *,unsigned char *,unsigned long);
long LsapPrimeDPAPI(void *);
long LsapReadMachineNameFromRegistry(_LSAP_LOGON_SESSION *,unsigned long,_LSAP_DS_NAME_MAP * *);
long LsapRefIdProv(void *,_LSAP_IDPROV_REG_ENTRY * *);
long LsapRefIdProvByGuidEx(_GUID *,int,_LSAP_IDPROV_REG_ENTRY * *);
long LsapRefIdProvByInternetSid(void *,_LSAP_IDPROV_REG_ENTRY * *);
long LsapRefIdProvByName(_UNICODE_STRING *,_LSAP_IDPROV_REG_ENTRY * *,_LSAP_SUBPROV_REG_ENTRY * *);
long LsapRegisterSubIdentityProvider(_LSAP_IDPROV_REG_ENTRY *,unsigned short const *,unsigned short const *);
long LsapReturnBuffersToClient(void * *,void *,unsigned long,unsigned long);
long LsapS4ULogon(unsigned short const *,void * *);
long LsapSanitizeName(_UNICODE_STRING *,_UNICODE_STRING *,void *,int (*)(void *,_UNICODE_STRING *),_UNICODE_STRING *);
long LsapSaveUserInternetSid(unsigned short const *,void *);
long LsapSaveUserUniqueId(unsigned short const *,void *);
long LsapSetAuthOnRpc();
long LsapSetCredentialComplexity(unsigned long,int,_LSA_CREDENTIAL_COMPLEXITY *);
long LsapSetIdentitySecretInSam(_UNICODE_STRING *,int,unsigned char *,unsigned long);
long LsapSetUserArsoOptIn(void *,unsigned char);
long LsapShouldReduceToIdentifyLevel(void *,void *,unsigned char *);
long LsapSidFilterCheck(void *,unsigned long,unsigned long,void *,_UNICODE_STRING *,int *);
long LsapSidFilterCheckById(unsigned long,void *,unsigned long,void *,_UNICODE_STRING *,_NETLOGON_SID_AND_ATTRIBUTES *,int *);
long LsapSnapshotSamConnectedAccountAttributes(_UNICODE_STRING *,_UNICODE_STRING *,_GUID *,void * *,_DISCONNECT_OPERATION_SAM_RECOVERY_INFO *);
long LsapTotalFailedThreadCreations;
long LsapUncaptureBuffers(unsigned char *,void * *,_SecBufferDesc *,_SecBufferDesc *,int,int,unsigned long *);
long LsapUnpackKerbLogonBuffer(void *,unsigned long,void *,_UNICODE_STRING *,_UNICODE_STRING *,_UNICODE_STRING *,_LUID * *,unsigned char *);
long LsapUpdateIdpLogonStatistics(void *,_LSA_USER_LOGON_STATISTICS *);
long LsapUpdateInternetUserNameForSession(_LSAP_LOGON_SESSION *,_LARGE_INTEGER *,unsigned long,int,int *);
long LsapUpdateSingleMachineCredLogonSession(_SECPKG_PRIMARY_CRED *,_SECPKG_SUPPLEMENTAL_CRED *);
long LsapUsermodeClientCallback(unsigned long,unsigned __int64,unsigned __int64,unsigned __int64,_SecBuffer *,_SecBuffer *);
long LsapValidateNewLocalAccountName(_UNICODE_STRING *,void *);
long LsapValidateNewLocalAccountPassword(void *,_UNICODE_STRING *,_UNICODE_STRING *);
long LsapWinRtCaptureClientAuthIdentity(void *,_SEC_WINNT_AUTH_IDENTITY_EX2 * *,unsigned long *);
long LsapWinRtDecryptInPlace(unsigned short *,unsigned short *);
long NegAcceptCredentials(_SECURITY_LOGON_TYPE,_UNICODE_STRING *,_SECPKG_PRIMARY_CRED *,_SECPKG_SUPPLEMENTAL_CRED *);
long NegAcceptLsaModeContext(unsigned __int64,unsigned __int64,_SecBufferDesc *,unsigned long,unsigned long,unsigned __int64 *,_SecBufferDesc *,unsigned long *,_LARGE_INTEGER *,unsigned char *,_SecBuffer *);
long NegAcquireCredentialsHandle(_UNICODE_STRING *,unsigned long,_LUID *,void *,void *,void *,unsigned __int64 *,_LARGE_INTEGER *);
long NegAddFragmentToContext(_NEG_CONTEXT *,_SecBuffer *);
long NegApplyControlToken(unsigned __int64,_SecBufferDesc *);
long NegBuildRequestToken(int,_SecBufferDesc *,_NEG_CREDS *,_UNICODE_STRING *,unsigned long,unsigned long,MechTypeList *,_NEG_CONTEXT * *,_SecBufferDesc *,_LARGE_INTEGER *);
long NegCallPackage(void * *,void *,void *,unsigned long,void * *,unsigned long *,long *);
long NegCallPackagePassthrough(void * *,void *,void *,unsigned long,void * *,unsigned long *,long *);
long NegChangeAccountPassword(_UNICODE_STRING *,_UNICODE_STRING *,_UNICODE_STRING *,_UNICODE_STRING *,unsigned char,_SecBufferDesc *);
long NegCrackServerRequestAndReply(unsigned __int64,_UNICODE_STRING *,unsigned long,unsigned long,_SecBufferDesc *,unsigned __int64 *,_SecBufferDesc *,unsigned long *,_LARGE_INTEGER *,unsigned char *,_SecBuffer *);
long NegCreateContextFromFragment(unsigned __int64,unsigned __int64,_SecBuffer *,unsigned long,unsigned long,unsigned __int64 *,_SecBufferDesc *,unsigned long *);
long NegDecodeSecret(unsigned short *,void *,unsigned char *,_UNICODE_STRING *);
long NegDeleteLsaModeContext(unsigned __int64);
long NegEnumPackagePrefixesCall(void * *,void *,void *,unsigned long,void * *,unsigned long *,long *);
long NegFreeCredentialsHandle(unsigned __int64);
long NegGenerateInitialToken(unsigned __int64,_UNICODE_STRING *,unsigned long,unsigned long,_SecBufferDesc *,unsigned __int64 *,_SecBufferDesc *,unsigned long *,_LARGE_INTEGER *,unsigned char *,_SecBuffer *);
long NegGetCallerNameCall(void * *,void *,void *,unsigned long,void * *,unsigned long *,long *);
long NegGetExtendedInformation(_SECPKG_EXTENDED_INFORMATION_CLASS,_SECPKG_EXTENDED_INFORMATION * *);
long NegGetInfo(_SecPkgInfoW *);
long NegHandleClientRequest(unsigned __int64,_NEG_CONTEXT *,unsigned long,unsigned long,_SecBufferDesc *,unsigned __int64 *,_SecBufferDesc *,unsigned long *,_LARGE_INTEGER *,unsigned char *,_SecBuffer *);
long NegHandleServerReply(unsigned __int64,_NEG_CONTEXT *,_UNICODE_STRING *,unsigned long,unsigned long,_SecBufferDesc *,unsigned __int64 *,_SecBufferDesc *,unsigned long *,_LARGE_INTEGER *,unsigned char *,_SecBuffer *);
long NegHandleSubsequentClientRequest(unsigned __int64,_NEG_CONTEXT *,unsigned long,unsigned long,unsigned long,_SecBuffer *,NegotiationToken *,unsigned __int64 *,_SecBufferDesc *,unsigned long *,_LARGE_INTEGER *,unsigned char *,_SecBuffer *);
long NegInitLsaModeContext(unsigned __int64,unsigned __int64,_UNICODE_STRING *,unsigned long,unsigned long,_SecBufferDesc *,unsigned __int64 *,_SecBufferDesc *,unsigned long *,_LARGE_INTEGER *,unsigned char *,_SecBuffer *);
long NegInitialize(unsigned __int64,_SECPKG_PARAMETERS *,_LSA_SECPKG_FUNCTION_TABLE *);
long NegLogonUserEx3(void * *,_SECURITY_LOGON_TYPE,void *,void *,unsigned long,_SECPKG_SURROGATE_LOGON *,void * *,unsigned long *,_LUID *,long *,_LSA_TOKEN_INFORMATION_TYPE *,void * *,_UNICODE_STRING * *,_UNICODE_STRING * *,_UNICODE_STRING * *,_SECPKG_PRIMARY_CRED *,_SECPKG_SUPPLEMENTAL_CRED_ARRAY * *);
long NegLogonUserEx3Worker(void * *,_SECURITY_LOGON_TYPE,void *,void *,unsigned long,_SECPKG_SURROGATE_LOGON *,void * *,unsigned long *,_LUID *,long *,_LSA_TOKEN_INFORMATION_TYPE *,void * *,_UNICODE_STRING * *,_UNICODE_STRING * *,_UNICODE_STRING * *,_SECPKG_PRIMARY_CRED *,_SECPKG_SUPPLEMENTAL_CRED_ARRAY * *);
long NegQueryContextAttributes(unsigned __int64,unsigned long,void *);
long NegQueryContextAttributesRpc(unsigned __int64,unsigned long,void *);
long NegQueryCredentialsAttributes(unsigned __int64,unsigned long,void *);
long NegSetCredentialsAttributes(unsigned __int64,unsigned long,void *,unsigned long);
long NegShutdown();
long NegTransferCredCall(void * *,void *,void *,unsigned long,void * *,unsigned long *,long *);
long Neg_der_read_length(unsigned char * *,unsigned long *,unsigned long *,unsigned long *,unsigned char);
long NegpAcquireCredHandle(_UNICODE_STRING *,unsigned long,_LUID *,void *,void *,void *,unsigned __int64 *,_LARGE_INTEGER *);
long NegpAddServicesSid(_LSA_TOKEN_INFORMATION_TYPE,void *,_LSA_TOKEN_INFORMATION_TYPE *,void * *);
long NegpBuildPackageList(unsigned long,_NEG_PACKAGE * * *,unsigned long *);
long NegpCallPackage(unsigned __int64,void * *,void *,void *,unsigned long,void * *,unsigned long *,long *);
long NegpCaptureSuppliedCreds(unsigned long,void *,_NEG_PACKAGE * * *,unsigned long *,int *,int *);
long NegpCheckCachedLogonPolicy(_LUID *,void *,void *,unsigned long,HKEY__ *,int,int *);
long NegpCloneLogonSession(_SECURITY_LOGON_TYPE,void *,void *,unsigned long,void * *,unsigned long *,_LUID *,long *,_LSA_TOKEN_INFORMATION_TYPE *,void * *,_UNICODE_STRING * *,_UNICODE_STRING * *,_UNICODE_STRING * *,_SECPKG_PRIMARY_CRED *,_SECPKG_SUPPLEMENTAL_CRED_ARRAY * *);
long NegpConvertWOWInteractiveLogonBuffer(void *,void *,unsigned long *,void * *);
long NegpCopyCredsToBuffer(_SECPKG_PRIMARY_CRED *,_SECPKG_SUPPLEMENTAL_CRED_ARRAY *,_SECPKG_PRIMARY_CRED *,_SECPKG_SUPPLEMENTAL_CRED_ARRAY * *);
long NegpDetermineTokenPackage(unsigned __int64,_SecBuffer *,unsigned long *);
long NegpEncodeMechlist(MechTypeList *,_SecBuffer *);
long NegpGetTokenOid(unsigned char *,unsigned long,ASN1objectidentifier_s * *);
long NegpIsVirtualAccount(void *,void *,unsigned long,_SECURITY_LOGON_TYPE,_UNICODE_STRING * *,_UNICODE_STRING * *,_UNICODE_STRING * *,unsigned long *,int *);
long NegpMakeServiceToken(unsigned long,_LUID *,void * *,unsigned long *,long *,_LSA_TOKEN_INFORMATION_TYPE *,void * *,_UNICODE_STRING * *,_UNICODE_STRING * *,_UNICODE_STRING * *,_SECPKG_PRIMARY_CRED *,_SECPKG_SUPPLEMENTAL_CRED_ARRAY * *);
long NegpMakeSystemToken(_LUID *,void * *,unsigned long *,long *,_LSA_TOKEN_INFORMATION_TYPE *,void * *,_UNICODE_STRING * *,_UNICODE_STRING * *,_UNICODE_STRING * *,_SECPKG_PRIMARY_CRED *,_SECPKG_SUPPLEMENTAL_CRED_ARRAY * *);
long NegpMakeVirtualAccountToken(_SECURITY_LOGON_TYPE,unsigned long,_LUID *,void * *,unsigned long *,long *,_LSA_TOKEN_INFORMATION_TYPE *,void * *,_UNICODE_STRING * *,_UNICODE_STRING * *,_UNICODE_STRING * *,_SECPKG_PRIMARY_CRED *,_SECPKG_SUPPLEMENTAL_CRED_ARRAY * *);
long NegpMapLogonRequest(void *,void *,unsigned long,_MSV1_0_INTERACTIVE_LOGON * *);
long NegpParseBuffers(_SecBufferDesc *,int,_SecBuffer * *,_SecBuffer * *);
long NegpRepackWOWInteractiveLogonBuffer(void *,void *,unsigned long *,void * *);
long NetEnumPackageNamesCall(void * *,unsigned long *,long *);
long OpenVault(void * *);
long PAC_DecodeValidationInformation(unsigned char *,unsigned long,_NETLOGON_VALIDATION_SAM_INFO3 * *);
long PAC_EncodeValidationInformation(_NETLOGON_VALIDATION_SAM_INFO3 *,unsigned char * *,unsigned long *);
long PAC_InitAndUpdateGroupsEx(_NETLOGON_VALIDATION_SAM_INFO3 *,_SAMPR_PSID_ARRAY *,void *,_PACTYPE *,_PACTYPE * *);
long PAC_InitEx2(_SAMPR_USER_ALL_INFORMATION *,_SAMPR_GET_GROUPS_BUFFER *,_SID_AND_ATTRIBUTES_LIST *,void *,_UNICODE_STRING *,_UNICODE_STRING *,unsigned long,unsigned long,unsigned long,_PAC_INFO_BUFFER * *,_LARGE_INTEGER *,_LARGE_INTEGER *,_LSA_LAST_INTER_LOGON_INFO *,_PACTYPE * *);
long PAC_MarshallValidationInfo(_SAMPR_USER_ALL_INFORMATION *,_SAMPR_GET_GROUPS_BUFFER *,_SID_AND_ATTRIBUTES_LIST *,void *,_UNICODE_STRING *,_UNICODE_STRING *,unsigned char,unsigned char,_LARGE_INTEGER *,_LARGE_INTEGER *,_LSA_LAST_INTER_LOGON_INFO *,unsigned char * *,unsigned long *);
long PAC_ReMarshallValidationInfoWithGroups(_NETLOGON_VALIDATION_SAM_INFO3 *,_SAMPR_PSID_ARRAY *,void *,unsigned char * *,unsigned long *);
long PacValidateInfo3(_NETLOGON_VALIDATION_SAM_INFO3 * const);
long PreventBitLockerSuspension();
long QueryLsaInterface(_LSA_INTERFACE_TYPE,void * *);
long RegLoadKeyWinPE(HKEY__ *,unsigned short const *,unsigned short const *,unsigned short const *);
long ResultFromKnownLastError();
long RtlStringCchPrintfW(unsigned short *,unsigned __int64,unsigned short const *,...);
long SetDevicePasswordLessBuildVersion(DevicePasswordLessBuildVersion);
long SpnegoAsnErrorToSecStatus(tagASN1error_e);
long SpnegoInitAsn(ASN1encoding_s * *,ASN1decoding_s * *);
long SpnegoPackData(void *,unsigned long,ASN1encoding_s *);
long SpnegoUnpackData(unsigned char *,unsigned long,unsigned long,void * *);
long SspipBuildCallInfo(void *,_CLIENT_ID *,unsigned long *,unsigned long,_SecHandle *,_SecHandle *,_UNICODE_STRING *,void *,_UNICODE_STRING *,_LSA_CALL_INFO *);
long SspipEnsureTerminatedString(_UNICODE_STRING *,_UNICODE_STRING *);
long SspipValidedLogonProcess(unsigned short *,unsigned long,void *,int,unsigned long *);
long StringCat(unsigned short const *,unsigned short const *,unsigned short * *);
long StringCchCatW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchCopyNExW(unsigned short *,unsigned __int64,unsigned short const *,unsigned __int64,unsigned short * *,unsigned __int64 *,unsigned long);
long StringCchCopyW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchLengthW(unsigned short const *,unsigned __int64,unsigned __int64 *);
long StringCchPrintfExW(unsigned short *,unsigned __int64,unsigned short * *,unsigned __int64 *,unsigned long,unsigned short const *,...);
long StringCchPrintfW(unsigned short *,unsigned __int64,unsigned short const *,...);
long StringCchVPrintfW(unsigned short *,unsigned __int64,unsigned short const *,char *);
long StringLen(unsigned short const *,unsigned __int64 *);
long StringToFileTime(unsigned short const *,_FILETIME *);
long ULongLongMult(unsigned __int64,unsigned __int64,unsigned __int64 *);
long UpdatePasswordLessConfiguration(int);
long _CheckForControlledUsers(void *,int *);
long _LockStore(int,void * *);
long _OpenPicturePasswordVault(void * *);
long _OpenVault(void * *);
long _ParsePolicies(unsigned long,_tagEASPolicy *,_tagPasswordPolicies *,unsigned long *,unsigned long *,int *);
long _ReadPolicies(void *,unsigned long *,_tagEASPolicy * *);
long _RegValueToVariant(unsigned long,unsigned long,unsigned char const *,tagPROPVARIANT *);
long _myVariantClear(tagPROPVARIANT *);
long g_cRegisteredIdProv;
long wil_RtlStagingConfig_RecordFeatureUsage(unsigned int,unsigned int,int);
long wil_StagingConfig_RecordFeatureUsage(unsigned int,unsigned int,int);
long wil_details_NtQueryWnfStateData(__WIL__WNF_STATE_NAME const *,__WIL__WNF_TYPE_ID const *,void const *,unsigned long *,void *,unsigned long *);
long wil_details_NtUpdateWnfStateData(__WIL__WNF_STATE_NAME const *,void const *,unsigned long,__WIL__WNF_TYPE_ID const *,void const *,unsigned long,unsigned long);
long wil_details_RtlRegisterFeatureConfigurationChangeNotification(void (*)(void *),void *,unsigned __int64 *,void * *);
long wil_details_RtlSubscribeWnfStateChangeNotification(__WIL__WNF_USER_SUBSCRIPTION * *,__WIL__WNF_STATE_NAME,unsigned long,long (*)(__WIL__WNF_STATE_NAME,unsigned long,__WIL__WNF_TYPE_ID *,void *,void const *,unsigned long),void *,__WIL__WNF_TYPE_ID *,unsigned long,unsigned long);
long wil_details_StagingConfig_FireNotification(wil_details_StagingConfig *,unsigned int,unsigned short,int);
long wil_details_StagingConfig_Load(wil_details_StagingConfig *,wil_FeatureStore,unsigned __int64,void *,int);
long wil_details_WriteSRUMWnfUsageBuffer(wil::details_abi::heap_vector<wil_details_FeatureUsageSRUM> *);
unsigned __int64 KerberosPackageId;
unsigned __int64 NegPackageId;
unsigned __int64 NegoExtenderPackageId;
unsigned __int64 NegpFindPackageForOid(_NEG_CREDS *,ASN1objectidentifier_s *);
unsigned __int64 NtlmPackageId;
unsigned __int64 g_AuthRegistrationHandle;
unsigned char * InitializationVector;
unsigned char * NegKerberosLegacyOid;
unsigned char * NegKerberosOid;
unsigned char * NegMSMechanismsOid;
unsigned char * NegSpnegoMechEncodedOid;
unsigned char CredpCacheTargetInfo(_CREDENTIAL_SETS *,_CANONICAL_TARGET_INFO *);
unsigned char CredpCompareCredToTargetInfo(_CANONICAL_TARGET_INFO *,_CANONICAL_CREDENTIAL *,unsigned long *);
unsigned char CredpGetBytes(unsigned char *,unsigned char * *,unsigned long *,unsigned char * *);
unsigned char CredpGetNextFileName(unsigned short *,void * *,unsigned short * const);
unsigned char CredpGetUnicodeString(unsigned char *,unsigned char * *,unsigned short * *);
unsigned char CredpIsConnectedUser(_LUID *);
unsigned char CredpIsLoggedOnUser(_LUID *,_UNICODE_STRING *);
unsigned char CredpIsTargetForUserProfileServer(_CREDENTIAL_SETS *,_CANONICAL_TARGET_INFO *);
unsigned char CredpValidateBuffer(unsigned char *,unsigned long,unsigned long,unsigned char,unsigned long);
unsigned char CredpValidateNames(_CREDENTIAL_TARGET_INFORMATIONW *,unsigned char,unsigned long *,unsigned long *);
unsigned char DisableStorageMonitoring;
unsigned char IsRetriableRpcError(long);
unsigned char LsapAllowTargetForAppContainer(_UNICODE_STRING *);
unsigned char LsapBreakEveryMinute;
unsigned char LsapDebuggerOk;
unsigned char LsapIsContainerized;
unsigned char LsapIsDomainUser(void *);
unsigned char LsapIsDomainUserDPAPI(void *);
unsigned char LsapIsUnprivilegedProxyAuthAllowed();
unsigned char NegBreakoutOnExplictCredentials(long,unsigned long);
unsigned char NegpCheckForDuplicateCreds(_NEG_CREDS * *);
unsigned char const __midl_frag41;
unsigned char const __midl_frag61;
unsigned long (* pfnVaultLogonSessionNotification)(_LSAP_LOGON_SESSION_NOTIFICATION *);
unsigned long * LhtShiftValues;
unsigned long * LogonFormats;
unsigned long * LogonSessionCount;
unsigned long CreateNestedDirectories(unsigned short *,unsigned short *,unsigned char);
unsigned long CredLockedMemorySize;
unsigned long CredMaxAllocationSize;
unsigned long CredTargetInfoMaxCount;
unsigned long CredpDeriveKeysAndHashFromSecret(unsigned __int64,unsigned char * const,unsigned char * const,unsigned char * const,unsigned char *,unsigned long,unsigned __int64 *,unsigned __int64 *,unsigned __int64 *);
unsigned long CredpHashIndexTargetInfo(unsigned short *);
unsigned long CredpLogonGetUserNames(_LUID *,unsigned long *,_UNICODE_STRING * *);
unsigned long CredpReadFile(void *,unsigned char *,unsigned long);
unsigned long CredpSetupStorageChangeNotification(_CREDENTIAL_SET *,unsigned long,void * *);
unsigned long DeadScavIndex;
unsigned long GetCertName(_CERT_CONTEXT const *,int,char *,unsigned char * *,unsigned long *,unsigned long *);
unsigned long GetSystemArsoConsentValue();
unsigned long GetUserStorageArea(unsigned short const *,unsigned char,void *,unsigned short * *);
unsigned long GetWindowsDirectoryWinPE(unsigned short * *);
unsigned long LhtGetCount(void *);
unsigned long LogonSessionListCount;
unsigned long LsaAutologgerStartupEventsCompleted;
unsigned long LsaAutologgerStartupEventsRequired;
unsigned long LsaSuppressChannelBindingInfo;
unsigned long LsapLogonSessionNotification(void *);
unsigned long LsapProfileDeletedNotificationWorker(void *);
unsigned long LsapProfileLoadedNotificationWorker(void *);
unsigned long LsapRefreshNamesForLogonSession(void *);
unsigned long LsapRegistryWatch(void *);
unsigned long LsapScavengerBreak(void *);
unsigned long LsapScavengerHandleNotify(void *);
unsigned long LsapScavengerTrigger(void *);
unsigned long LsapUpdateFormatsForLogon(_LSAP_LOGON_SESSION *,unsigned short *,unsigned short *,EXTENDED_NAME_FORMAT *,unsigned long,unsigned long,_LSAP_DS_NAME_MAP * *);
unsigned long NegAcceptUnsafeUnprotectedNegotiation;
unsigned long NegEnableLastInteractiveLogonInfo;
unsigned long NegEventMask;
unsigned long NegGetPackageCaps(unsigned long);
unsigned long NegMachineState;
unsigned long NegPackageCount;
unsigned long NegPackageLoad(void *);
unsigned long NegParamChange(void *);
unsigned long NegSendOptionalMechlistMIC;
unsigned long NegpAsyncUpdateWorker(void *);
unsigned long OpenFileInStorageArea(unsigned long,unsigned short const *,unsigned short const *,void * *);
unsigned long PAC_GetSize(_PACTYPE *);
unsigned long PAC_Marshal(_PACTYPE *,unsigned long,unsigned char *);
unsigned long PAC_UnMarshal(_PACTYPE *,unsigned long);
unsigned long PackageControlCount;
unsigned long PackageControlTotal;
unsigned long PackageDllCount;
unsigned long PackageDllTotal;
unsigned long PackageListLockCount;
unsigned long RegReadStringValue(HKEY__ *,unsigned short const *,unsigned short const *,unsigned short * *);
unsigned long RegisterEventProvider(_GUID const *,unsigned __int64 *);
unsigned long ShtGetCount(void *);
unsigned long ShutdownWorker(void *);
unsigned long SpmpEventWriteHelper(_EVENT_DESCRIPTOR const *,unsigned __int64 *,unsigned short *,unsigned long,char *);
unsigned long g_Msv10PackageId;
unsigned long g_dwRefCount;
unsigned long getNumberDataDescriptors(unsigned short *);
unsigned short * * ppszDefault;
unsigned short * CredEnterpriseDataText;
unsigned short * CredLocalDataText;
unsigned short * NegLocalHostName;
unsigned short * NegPackageComment;
unsigned short * NegpFindCharInCountedString(unsigned short *,unsigned short,unsigned short);
unsigned short * szOldValue;
unsigned short * szOthersValue;
unsigned short * szPreferredPackage;
void (* g_Uninitialize)();
void (* g_pFnLog)(unsigned long,unsigned short *);
void (* g_wil_details_RecordSRUMFeatureUsage)(unsigned int,unsigned int,unsigned int);
void (* g_wil_details_apiRecordFeatureUsage)(unsigned int,unsigned int,unsigned int,char const *);
void (* g_wil_details_apiSubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
void (* g_wil_details_apiUnsubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
void (* g_wil_details_internalRecordFeatureUsage)(unsigned int,unsigned int,unsigned int,char const *);
void (* g_wil_details_internalSubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
void (* g_wil_details_internalUnsubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
void (* g_wil_details_pfnFeatureLoggingHook)(unsigned int,FEATURE_LOGGED_TRAITS const *,FEATURE_ERROR const *,int,wil_ReportingKind const *,wil_VariantReportingKind const *,unsigned char,unsigned __int64);
void (* g_wil_details_pfnRtlUnregisterFeatureConfigurationChangeNotification)(void *);
void (* g_wil_details_recordFeatureUsage)(unsigned int,wil_details_ServiceReportingKind,unsigned int,wil_details_FeatureReportingCache *,wil_details_RecordUsageResult *);
void * * DeadScavItems;
void * CredLockedMemory;
void * LhtCreate(unsigned long,void *,void (*)(_SecHandle *,void *,unsigned long));
void * LhtGetHandleContext(void *,_SecHandle *);
void * LhtRefHandle(void *,_SecHandle *);
void * LogonSessionTable;
void * LsaRegistryWatchEvent;
void * LsapEfsServiceSid;
void * LsapIdProvHostAllocateLsaHeap(void *,unsigned long);
void * LsapInitializeRegistryWatch(unsigned short const *,unsigned long,void * *,HKEY__ * *);
void * LuaRegistryWatchEvent;
void * MemoryAlloc(unsigned __int64);
void * NegpGlobalLsaHandle;
void * SafeAlloc(unsigned __int64);
void * ShtCreate(unsigned long,void *,void (*)(_SecHandle *,void *,unsigned long));
void * ShtGetHandleContext(void *,_SecHandle *);
void * ShtRefHandle(void *,_SecHandle *);
void * g_IdProvExtDomainSid;
void * g_hIdProvExtSamAccountDomain;
void * g_hIdProvExtSamServer;
void * g_hLsa;
void * h3DesKey;
void * h3DesProvider;
void * hAesKey;
void * hAesProvider;
void * operator new(unsigned __int64);
void * operator new(unsigned __int64,std::nothrow_t const &);
void * operator new[](unsigned __int64,std::nothrow_t const &);
void AbortLpcContext(_SecHandle *);
void CONNECTED_TRACE_ERROR(char const *,long);
void CleanupPreviousSecrets(void *);
void CredpDereferenceCredSet(_CREDENTIAL_SET *);
void CredpDereferenceSessionCredSets(_SESSION_CREDENTIAL_SETS *);
void CredpDereferenceUserCredSets(_USER_CREDENTIAL_SETS *);
void CredpLockAndRefreshCredSets(_CREDENTIAL_SETS *,_LUID *,unsigned short const * *,unsigned long);
void CredpMarkDirty(_CREDENTIAL_SETS *,unsigned long,_CANONICAL_CREDENTIAL *,unsigned char);
void CredpNotifyPasswordChange(_UNICODE_STRING *,_UNICODE_STRING *,_UNICODE_STRING *,_UNICODE_STRING *,_UNICODE_STRING *,_UNICODE_STRING *);
void CredpRevertIfElevated(void * *);
void CredpUndo(_CREDENTIAL_SETS *,_CRED_WRITE_UNDO *);
void CredpUndoFree(_CREDENTIAL_SETS *,_CRED_WRITE_UNDO *,unsigned char);
void CredpUnlockAndFlushCredSets(_LUID *,_CREDENTIAL_SETS *);
void CredpUpdatePassword2(_CREDENTIAL_SETS *,_UNICODE_STRING *,_UNICODE_STRING *,_UNICODE_STRING *,unsigned long,unsigned long);
void DbgPrintfW(unsigned long,unsigned short const *,...);
void DebugSpewCredential(_CANONICAL_CREDENTIAL *);
void DebugSpewTargetInfo(_CANONICAL_TARGET_INFO *);
void LhtDerefHandleKey(void *,void *);
void LhtpDeleteTable(_LARGE_HANDLE_TABLE *,void (*)(_SecHandle *,void *,unsigned long));
void LsaEncryptMemory(unsigned char *,unsigned long,int);
void LsapAuditPackageBoot(_LSAP_SECURITY_PACKAGE *,unsigned long);
void LsapCheckForLogonSessionLeakWorker(_TP_CALLBACK_INSTANCE *,void *,_TP_TIMER *);
void LsapCheckPostLogoffCredUsageAndLogEvent(unsigned short const *,long,_LUID *,_SECPKG_CLIENT_INFO *,_UNICODE_STRING *,_UNICODE_STRING *,_LSAP_SECURITY_PACKAGE *);
void LsapClassifySids(unsigned long,_NETLOGON_SID_AND_ATTRIBUTES const *,unsigned long *);
void LsapClearLogonStatistics(void *);
void LsapContextRundown(_SecHandle *,void *,unsigned long);
void LsapCredentialRundown(_SecHandle *,void *,unsigned long);
void LsapDeleteContextWrap(_SecHandle *,void *,unsigned long);
void LsapDerefIdProv(_LSAP_IDPROV_REG_ENTRY *);
void LsapDerefScavItem(_LSAP_SCAVENGER_ITEM *,unsigned char);
void LsapDeregisterIdentityProvider(_LSAP_IDPROV_REG_ENTRY *);
void LsapFreeCredWrap(_SecHandle *,void *,unsigned long);
void LsapFreeCredentialKey(_CREDENTIAL_KEY *);
void LsapIdProvHostFreeLsaHeap(void *,void *);
void LsapInvalidateDsNames(_LUID *,int,int);
void LsapLogonSessionDelete(_SecHandle *,void *,unsigned long);
void LsapMarkBootCheckpointGood(_TP_CALLBACK_INSTANCE *,void *,_TP_TIMER *);
void LsapMarkBootGood();
void LsapNotifyInitializationFinish(long);
void LsapPurgeLogonFromPackages(_LSAP_LOGON_SESSION *);
void LsapRollbackFailedConnect(bool,_UNICODE_STRING *,_UNICODE_STRING *,_UNICODE_STRING *,_CONNECT_OPERATION_SAM_RECOVERY_INFO *,_LSAP_IDPROV_REG_ENTRY *,void *,_LUID *,void *,void *,void *);
void LsapRollbackFailedDisconnect(void *,void *,_DISCONNECT_OPERATION_SAM_RECOVERY_INFO *);
void LsapSetDsNamesInLogonSession(_LSAP_LOGON_SESSION *,unsigned long,_LSAP_DS_NAME_MAP * * const);
void LsapSetupTuningParameters();
void LsapSubProv_FreeRoutine(_RTL_BALANCED_NODE *,void *);
void LsapThreadBase(_LSAP_THREAD_START *);
void LsapTimerCallback(void *,unsigned char);
void LsapTransitionNGCToPasswordStuffer(void *,_UNICODE_STRING *);
void LsapUpdateCredentialStuffers(void *,unsigned short *,unsigned long);
void LsapWriteBootTimestamp();
void LsapWriteMachineNamesIntoRegistry(_LSAP_LOGON_SESSION *,_LSAP_DS_NAME_MAP * *,_LSAP_DS_NAME_MAP * *);
void MemoryFree(void *);
void NegLogoffNotify(_LUID *);
void NegLsaPolicyChangeCallback(_POLICY_NOTIFICATION_INFORMATION_CLASS);
void NegoSqmASCIncrement();
void NegpDeleteContext(_NEG_CONTEXT *);
void NegpDerefLogonSession(_NEG_LOGON_SESSION *,unsigned char);
void NegpDerefTrustList(_NEG_TRUST_LIST *);
void NegpFreeObjectId(ASN1objectidentifier_s *);
void NegpFreePrimaryCred(_SECPKG_PRIMARY_CRED *);
void NegpNotifyNetworkProviders(_UNICODE_STRING *,_SECPKG_PRIMARY_CRED *);
void NegpParseChannelBindingsBuffer(_SecBufferDesc *,_SecBuffer * *);
void NegpReleaseCreds(_NEG_CREDS *,unsigned char);
void NegpUpdateCachedLogonPolicy(void *,void *,unsigned long,HKEY__ *);
void PacAllocFcn(void *,char * *,unsigned int *);
void PacReadFcn(void *,char * *,unsigned int *);
void PacWriteFcn(void *,char *,unsigned int);
void ShtDerefHandleKey(void *,void *);
void ShtpInsertHandle(_SMALL_HANDLE_TABLE *,_SEC_HANDLE_ENTRY *);
void SpLogException(_EXCEPTION_POINTERS *);
void SpmpRemoveDll(_DLL_BINDING *);
void SpmpRemovePackage(unsigned long);
void SpmpSetPackageInitialized(_LSAP_SECURITY_PACKAGE *);
void SpnegoFreeDecodedData(ASN1decoding_s *,unsigned long,void *);
void SpnegoTermAsn(ASN1encoding_s *,ASN1decoding_s *);
void SspipCleanupCallInfo(_LSA_CALL_INFO *);
void UpdateARSOSidAndFlags(void *,unsigned long);
void _FreePolicies(unsigned long,_tagEASPolicy *);
void __scrt_initialize_type_info();
void __scrt_throw_std_bad_alloc();
void __scrt_throw_std_bad_array_new_length();
void __scrt_uninitialize_type_info();
void _tlgWriteActivityAutoStop<0,5>(_tlgProvider_t const *,_GUID const *);
void _tlgWriteActivityAutoStop<35184372088832,5>(_tlgProvider_t const *,_GUID const *);
void operator delete(void *);
void operator delete(void *,unsigned __int64);
void populateStatusString(long,unsigned short *,unsigned int);
void wil_details_FeatureReporting_IncrementOpportunityInCache(wil_details_FeatureReportingCache *,wil_details_ServiceReportingKind,unsigned int,wil_details_RecordUsageResult *);
void wil_details_FeatureReporting_IncrementUsageInCache(wil_details_FeatureReportingCache *,wil_details_ServiceReportingKind,unsigned int,wil_details_RecordUsageResult *);
void wil_details_FeatureReporting_ReportUsageToService(wil_details_FeatureReportingCache *,unsigned int,int,int,FEATURE_LOGGED_TRAITS const *,int,wil_ReportingKind,unsigned __int64);
wil_details_RecordUsageResult wil_details_FeatureReporting_RecordUsageInCache(wil_details_FeatureReportingCache *,wil_details_ServiceReportingKind,unsigned int,unsigned int);
