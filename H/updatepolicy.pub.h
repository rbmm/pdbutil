namespace ATL
{
	struct CComPtr<IUsoLusPolicyUtil>
	{
		~CComPtr<IUsoLusPolicyUtil>();
	};

};

struct AgileGitPtr
{
	long Initialize(_GUID const &,IUnknown *);
};

class CBaseRPCTimeout
{
	static void s_Callback(void *,unsigned char);
};

struct CCoInit
{
	~CCoInit();
};

class EnterprisePolicyReader
{
	static long ReadCspPolicy(unsigned short const *,unsigned long,unsigned long,unsigned long,EnterprisePolicyValue *);
	static long ReadLusPolicy(unsigned short const *,tagVARIANT *,unsigned long *);
	static long ReadLusPolicy(unsigned short const *,unsigned long,unsigned long,unsigned long,EnterprisePolicyValue *);
	static long ReadLusPolicy(unsigned short const *,unsigned short const *,EnterprisePolicyValue *);
	static long ReadPolicyWithFallbackInternal(EnterprisePolicy,EnterprisePolicyValue *);
public:
	static long GetEnterprisePolicyName(EnterprisePolicy,unsigned short const * *);
	static long ReadPolicyWithFallback(EnterprisePolicy,EnterprisePolicyValue * *);
	static long ReleaseEnterprisePolicyValue(EnterprisePolicyValue * *);
};

struct EnterprisePolicyValue
{
	~EnterprisePolicyValue();
};

namespace Microsoft
{
	namespace WRL
	{
		namespace Details
		{
			struct ModuleBase
			{
				static ModuleBase * module_;
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IUnknown>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

		};

	};

};

struct PolicyConditions
{
	static int False();
	static int IsTelemetryEnabled();
	static int True();
};

struct PolicyHelpers
{
	static UpdateManagementGroup GetSkuUpdateManagementGroup();
	static bool IsDeferralAdjustmentForFlightingRequired();
	static bool IsFlightingEnabled();
	static int IsPolicyConfiguredAndEnabled(EnterprisePolicyValue *);
	static int IsPolicyConfiguredAndEnabled(UpdatePolicyValue *);
	static long GetPersistedPauseDate(unsigned short const *,int *,_FILETIME *);
	static long PersistPauseDate(unsigned short const *,_FILETIME,int);
	static long PersistPauseStatus(PauseUpdateType,unsigned long);
	static long ReadPolicyRegistry(unsigned short const *,unsigned short const *,unsigned long,unsigned long,unsigned long,PolicyStore,EnterprisePolicyValue *);
	static long ReadPolicyRegistry(unsigned short const *,unsigned short const *,unsigned short const *,PolicyStore,EnterprisePolicyValue *);
	static long ReadPolicyString(unsigned short const *,unsigned short const *,unsigned short * *);
};

struct PolicyTransforms
{
	static long ConvertAndSetPauseUpdates(unsigned short const *,PauseUpdateType,unsigned long,EnterprisePolicyValue *);
	static long ConvertDeferUpgradeToReadinessLevelString(EnterprisePolicyValue *);
	static long ConvertMonthsToDays(EnterprisePolicyValue *);
	static long ConvertWeeksToDays(EnterprisePolicyValue *);
	static long GetPauseFeatureUpdatesEndTime(EnterprisePolicyValue *);
	static long GetPauseQualityUpdatesEndTime(EnterprisePolicyValue *);
	static long GetPauseUpdatesEndTime(EnterprisePolicyValue *,unsigned long,EnterprisePolicyValue *,bool);
	static long GetPauseUpdatesStartTime(EnterprisePolicyValue *,bool);
	static long GetWUfBStatus(EnterprisePolicyValue *);
	static long PersistPauseUpdatesState(unsigned short const *,PauseUpdateType,unsigned long,EnterprisePolicyValue *);
	static long ProcessBranchReadinessLevel(EnterprisePolicyValue *);
	static long ProcessFeatureUpdatesDeferralPeriod(EnterprisePolicyValue *);
	static long ProcessQualityUpdatesDeferralPeriod(EnterprisePolicyValue *);
	static long SetPauseDeferrals(EnterprisePolicyValue *);
	static long SetPauseFeatureUpdates(EnterprisePolicyValue *);
	static long SetPauseFeatureUpdatesStartTime(EnterprisePolicyValue *);
	static long SetPauseQualityUpdates(EnterprisePolicyValue *);
	static long SetPauseQualityUpdatesStartTime(EnterprisePolicyValue *);
};

class RegistryManager
{
protected:
	static unsigned short const * const * const c_rgszUpdateRegKeyName;
public:
	static long DeleteRegValue(HKEY__ *,unsigned short const *,unsigned short const *);
	static long GetFileTimeRegKey(HKEY__ *,unsigned short const *,unsigned short const *,_FILETIME *);
	static long GetRegistryKeyName(RegistryKeyTypes,unsigned short *,unsigned __int64);
	static long RegValueExists(HKEY__ *,unsigned short const *,unsigned short const *,int *);
	static long SetFileTimeRegKey(HKEY__ *,unsigned short const *,unsigned short const *,_FILETIME);
	static long SetRegDword(HKEY__ *,unsigned short const *,unsigned short const *,unsigned long);
};

struct SP<unsigned char,SP_HLOCAL<unsigned char> >
{
	void Reset();
};

namespace SystemSettings
{
	namespace FlightSettingsAPI
	{
		class FlightSettings
		{
			static bool m_requireOnlineValidation;
		public:
			long DoFlightSettingsValidation();
		};

		class FlightSettingsAPITelemetryClass
		{
		protected:
			static FlightSettingsAPITelemetryClass * Instance();
		public:
			virtual void Initialize();
			void StaticLibAsyncValidationFailed_(long);
			void StaticLibCoCreateInstanceFailed_(long);
		};

		struct FlightSettingsAPITelemetryProvider
		{
			static _TlgProvider_t const * Provider();
		};

	};

};

class UpdatePolicyReader
{
	static long ReadCspPolicy(unsigned short const *,unsigned long,unsigned long,unsigned long,UpdatePolicyValue *);
	static long ReadCspPolicy(unsigned short const *,unsigned short const *,UpdatePolicyValue *);
	static long ReadFlightSettings(UpdatePolicyValue *);
	static long ReadGPDWordPolicyValueWithPolicyState(unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned long,unsigned long,unsigned long,UpdatePolicyValue *);
	static long ReadGPDWordPolicyValueWithoutPolicyState(unsigned short const *,unsigned short const *,unsigned long,unsigned long,unsigned long,UpdatePolicyValue *);
	static long ReadGPPolicy(UpdatePolicy,UpdatePolicyValue *);
	static long ReadGPPolicyStateHelper(unsigned short const *,unsigned short const *,UpdatePolicyStatus *,int *);
	static long ReadGPPolicyStateOnly(unsigned short const *,unsigned short const *,UpdatePolicyValue *);
	static long ReadGPPolicy_FillEmptyContentUrls(UpdatePolicyValue *);
	static long ReadGPPolicy_UpdateServiceUrlAlternate(UpdatePolicyValue *);
	static long ReadGPStringPolicyValueWithPolicyState(unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,UpdatePolicyValue *);
	static long ReadLusPolicy(UpdatePolicy,UpdatePolicyValue *);
	static long ReadLusPolicy(unsigned short const *,tagVARIANT *,unsigned long *);
	static long ReadLusPolicy(unsigned short const *,unsigned long,unsigned long,unsigned long,UpdatePolicyValue *);
	static long ReadMDMPolicy(UpdatePolicy,UpdatePolicyValue *);
	static long ReadMDMPolicy_FillEmptyContentUrls(UpdatePolicyValue *);
	static long ReadMDMPolicy_UpdateServiceUrlAlternate(UpdatePolicyValue *);
	static unsigned long GetGPAuOptions();
public:
	static UpdateManagementGroup GetSkuUpdateManagementGroup();
	static long GetUpdatePolicyName(UpdatePolicy,unsigned short const * *);
	static long ReadPolicy(UpdatePolicy,UpdatePolicyValue * *);
	static long ReleaseUpdatePolicyValue(UpdatePolicyValue * *);
};

struct UpdatePolicyValue
{
	~UpdatePolicyValue();
};

namespace Windows
{
	namespace Internal
	{
		class ComTaskPool
		{
			struct CGitLifetimeExtension
			{
				void Init();
			};

			class CThread
			{
				long _CreateThreadRef(long *,IUnknown * *);
				long _WaitForThreadUpdate(unsigned long);
				static HINSTANCE__ * s_ExecuteThreadProc(void *);
				static unsigned long s_ThreadProc(void *);
				static void s_CheckForDeadlockTimerCallback(_TP_CALLBACK_INSTANCE *,void *,_TP_TIMER *);
				static void s_ThreadPoolCallback(_TP_CALLBACK_INSTANCE *,void *);
				void _ThreadProc();
			public:
				long StartThread();
				long StartThreadWithFallback();
				long _StartThreadCommon();
			};

			static ComTaskPool::CThread * s_pThreadList;
			static ComTaskPool::TaskList s_taskFloodingList;
			static _RTL_SRWLOCK s_rwLock;
			static bool s_TryRemoveThread(ComTaskPool::CThread *,bool);
			static bool volatile s_fCanReuseThreads;
			static bool volatile s_fWaitForMoreTasks;
			static long s_GetTaskPoolTlsSlot(unsigned long *);
			static long s_QueuePoolTask(TaskApartment,TaskOptions,unsigned long,IComPoolTask *);
			static long s_QueuePoolTaskUnderLock(void *,TaskApartment,TaskOptions,unsigned long,IComPoolTask *,ComTaskPool::TaskList *,ComTaskPool::CThread * *);
			static unsigned long volatile s_cThreadsStarting;
			static unsigned long volatile s_dwThreadIdReuse;
			static void * s_hEventCache;
			static void s_AttachAndRecoverTask(ComTaskPool::TaskData *);
		};

	};

};

struct XInterface<IFlightSettingsAPIBroker>
{
	~XInterface<IFlightSettingsAPIBroker>();
};

struct XPtrST<EnterprisePolicyValue>
{
	~XPtrST<EnterprisePolicyValue>();
};

struct _com_error
{
	_com_error(_com_error const &);
	_com_error(long,IErrorInfo *,bool);
	virtual ~_com_error();
};

struct _variant_t
{
	~_variant_t();
};

struct exception
{
	exception(exception const &);
};

namespace std
{
	struct _Error_objects<int>
	{
		static _Generic_error_category _Generic_object;
		static _Iostream_error_category _Iostream_object;
		static _System_error_category _System_object;
	};

	struct _Generic_error_category
	{
		virtual basic_string<char,char_traits<char>,allocator<char> > message(int);
		virtual char const * name();
	};

	struct _Iostream_error_category
	{
		virtual basic_string<char,char_traits<char>,allocator<char> > message(int);
		virtual char const * name();
	};

	struct _System_error_category
	{
		virtual basic_string<char,char_traits<char>,allocator<char> > message(int);
		virtual char const * name();
		virtual error_condition default_error_condition(int);
	};

	struct basic_string<char,char_traits<char>,allocator<char> >
	{
		basic_string<char,char_traits<char>,allocator<char> > & assign(basic_string<char,char_traits<char>,allocator<char> > const &,unsigned __int64,unsigned __int64);
		basic_string<char,char_traits<char>,allocator<char> > & assign(char const *,unsigned __int64);
		basic_string<char,char_traits<char>,allocator<char> > & erase(unsigned __int64,unsigned __int64);
		void _Copy(unsigned __int64,unsigned __int64);
		void _Tidy(bool,unsigned __int64);
		void _Xlen();
		void _Xran();
	};

	struct error_category
	{
		virtual bool equivalent(error_code const &,int);
		virtual bool equivalent(int,error_condition const &);
		virtual error_condition default_error_condition(int);
	};

	struct num_put<char,back_insert_iterator<basic_string<char,char_traits<char>,allocator<char> > > >
	{
		static locale::id id;
	};

	struct num_put<unsigned short,back_insert_iterator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >
	{
		static locale::id id;
	};

	nothrow_t const std::nothrow;
};

namespace wil
{
	struct ResultException
	{
		ResultException(FailureInfo const &);
		ResultException(ResultException const &);
		virtual char const * what();
		virtual ~ResultException();
	};

	struct StoredFailureInfo
	{
		StoredFailureInfo(StoredFailureInfo const &);
		void SetFailureInfo(FailureInfo const &);
	};

	class TraceLoggingProvider
	{
		virtual bool NotifyFailure(FailureInfo const &);
	protected:
		virtual void Initialize();
		virtual void OnErrorReported(bool,FailureInfo const &);
		void ReportTelemetryFailure(FailureInfo const &);
		void ReportTraceLoggingFailure(FailureInfo const &);
	};

	namespace details
	{
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
			void Return_Hr_NoOriginate(void *,unsigned int,char const *,long);
			void _FailFastImmediate_Unexpected();
			void _FailFast_GetLastError(void *,unsigned int,char const *);
			void _Log_Hr(void *,unsigned int,char const *,long);
		};

		struct shared_buffer
		{
			bool create(void const *,unsigned __int64);
		};

		bool (* g_pfnGetModuleInformation)(void *,unsigned int *,char *,unsigned __int64);
		bool GetModuleInformation(void *,unsigned int *,char *,unsigned __int64);
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
		long (* g_pfnRunFunctorWithExceptionFilter)(details::IFunctor &,details::IFunctorHost &,void *);
		long GetLastErrorFailHr();
		long GetLastErrorFailHr(void *,unsigned int,char const *,char const *,char const *,void *);
		long RecognizeCaughtExceptionFromCallback(unsigned short *,unsigned __int64);
		long ReportFailure_GetLastErrorHr(void *,unsigned int,char const *,char const *,char const *,void *,FailureType);
		long ResultFromCaughtExceptionInternal(unsigned short *,unsigned __int64,bool *);
		long RunFunctorWithExceptionFilter(details::IFunctor &,details::IFunctorHost &,void *);
		long StringCchPrintfA(char *,unsigned __int64,char const *,...);
		unsigned char (* g_pfnRtlDllShutdownInProgress)();
		unsigned char * WriteResultString<char const *>(unsigned char *,unsigned char *,char const *,char const * *);
		unsigned char * WriteResultString<unsigned short const *>(unsigned char *,unsigned char *,unsigned short const *,unsigned short const * *);
		unsigned char RtlDllShutdownInProgress();
		unsigned long (* g_pfnRtlNtStatusToDosErrorNoTeb)(long);
		unsigned long ReportFailure_GetLastError(void *,unsigned int,char const *,char const *,char const *,void *,FailureType);
		unsigned long RtlNtStatusToDosErrorNoTeb(long);
		unsigned short * LogStringPrintf(unsigned short *,unsigned short const *,unsigned short const *,...);
		void (* g_pfnDebugBreak)();
		void (* g_pfnFailFastInLoaderCallout)();
		void (* g_pfnGetContextAndNotifyFailure)(FailureInfo *,char *,unsigned __int64);
		void (* g_pfnLoggingCallback)(FailureInfo const &);
		void (* g_pfnOriginateCallback)(FailureType,long);
		void (* g_pfnRethrow)();
		void (* g_pfnTelemetryCallback)(bool,FailureInfo const &);
		void (* g_pfnThrowResultException)(FailureInfo const &);
		void DebugBreak();
		void FailFastInLoaderCallout();
		void GetContextAndNotifyFailure(FailureInfo *,char *,unsigned __int64);
		void LogFailure(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long,unsigned short const *,bool,unsigned short *,unsigned __int64,char *,unsigned __int64,FailureInfo *);
		void ReportFailure(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long,unsigned short const *,details::ReportFailureOptions);
		void ReportFailure_Hr(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long);
		void Rethrow();
		void ThrowResultExceptionInternal(FailureInfo const &);
	};

	namespace details_abi
	{
		struct ProcessLocalStorageData<ProcessLocalData>
		{
			static long Acquire(char const *,ProcessLocalStorageData<ProcessLocalData> * *);
			void Release();
		};

		class SemaphoreValue
		{
			long CreateFromValueInternal(unsigned short const *,bool,unsigned __int64);
			static long GetValueFromSemaphore(void *,long *);
			static long TryGetValueInternal(unsigned short const *,bool,unsigned __int64 *,bool *);
		public:
			static long TryGetPointer(unsigned short const *,void * *);
			~SemaphoreValue();
		};

		struct ThreadLocalData
		{
			bool EnsureAllocated(bool);
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
			~ThreadLocalStorage<details::ThreadFailureCallbackHolder *>();
		};

		details_abi::ProcessLocalStorage<details_abi::ProcessLocalData> * g_pProcessLocalData;
		details_abi::ThreadLocalData * GetThreadLocalDataCache(bool);
	};

	bool (* g_pfnIsDebuggerPresent)();
	bool g_fBreakOnFailure;
	bool g_fIsDebuggerPresent;
	bool g_fResultOutputDebugString;
	bool g_fResultThrowPlatformException;
	long (* g_pfnResultFromCaughtException)();
	long GetFailureLogString(unsigned short *,unsigned __int64,wil::FailureInfo const &);
	void SetLastError(wil::FailureInfo const &);
};

HINSTANCE__ * g_wil_details_ntdllModuleHandle;
int TimeDiff(_FILETIME const &,_FILETIME const &,int);
long StringCchCatW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchCopyW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchPrintfExW(unsigned short *,unsigned __int64,unsigned short * *,unsigned __int64 *,unsigned long,unsigned short const *,...);
long StringCchPrintfW(unsigned short *,unsigned __int64,unsigned short const *,...);
long StringCchVPrintfW(unsigned short *,unsigned __int64,unsigned short const *,char *);
void * operator new(unsigned __int64);
void * operator new(unsigned __int64,std::nothrow_t const &);
void * operator new[](unsigned __int64,std::nothrow_t const &);
void _com_issue_error(long);
void _com_raise_error(long,IErrorInfo *);
void operator delete(void *);
