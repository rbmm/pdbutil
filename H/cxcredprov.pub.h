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

class <lambda_5f1dd388c03885d19ee806198d2ac5ef>
{
	static int <lambda_invoker_cdecl>(_RTL_RUN_ONCE *,void *,void * *);
};

class <lambda_76eeab6888669ae644bb045d590823a1>
{
	static <lambda_invoker_cdecl>();
};

class <lambda_aa194dc0bf891154933407eb98fb868a>
{
	static <lambda_invoker_cdecl>(void *);
};

class <lambda_d51448ba32f8ef42e59400edd4566183>
{
	static <lambda_invoker_cdecl>(_TP_CALLBACK_INSTANCE *,void *,_TP_TIMER *);
};

class <lambda_d93655bd33d44513d4ad201382c30aa7>
{
	static long <lambda_invoker_cdecl>(_WNF_STATE_NAME,unsigned long,_WNF_TYPE_ID *,void *,void const *,unsigned long);
};

class <lambda_fee8cea507d2413a58be13acfb66740a>
{
	static <lambda_invoker_cdecl>(void *);
};

class CXCredProvProvider
{
	class GetSerialization
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		void Stop(unsigned long);
		~GetSerialization();
	};

	class InterfaceMethodCall
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~InterfaceMethodCall();
	};

protected:
	static CXCredProvProvider * Instance();
public:
	static void CommandLinkClicked<unsigned long &>(unsigned long &);
	static void DomainHintProvided();
	static void FallbackTelemetryCallback(bool,wil::FailureInfo const &);
};

class CXCredential
{
protected:
	virtual long AdviseInternal(ICredentialProviderCredentialEvents *);
	virtual long CommandLinkClickedInternal(unsigned long);
	virtual long GetBitmapBufferValueInternal(unsigned long,unsigned long *,unsigned char * *);
	virtual long GetBitmapValueInternal(unsigned long,HBITMAP__ * *);
	virtual long GetCheckboxValueInternal(unsigned long,int *,unsigned short * *);
	virtual long GetComboBoxValueAtInternal(unsigned long,unsigned long,unsigned short * *);
	virtual long GetComboBoxValueCountInternal(unsigned long,unsigned long *,unsigned long *);
	virtual long GetSerializationInternal(_CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE *,_CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION *,unsigned short * *,_CREDENTIAL_PROVIDER_STATUS_ICON *);
	virtual long GetStringValueInternal(unsigned long,unsigned short * *);
	virtual long GetSubmitButtonValueInternal(unsigned long,unsigned long *);
	virtual long GetUserSidInternal(unsigned short * *);
	virtual long ReportResultInternal(long,long,unsigned short * *,_CREDENTIAL_PROVIDER_STATUS_ICON *);
	virtual long SetCheckboxValueInternal(unsigned long,int);
	virtual long SetComboBoxSelectedValueInternal(unsigned long,unsigned long);
	virtual long SetDeselectedInternal();
	virtual long SetSelectedInternal(int *);
	virtual long SetStringValueInternal(unsigned long,unsigned short const *);
	virtual long UnAdviseInternal();
public:
	virtual long Advise(ICredentialProviderCredentialEvents *);
	virtual long CommandLinkClicked(unsigned long);
	virtual long GetBitmapBufferValue(unsigned long,unsigned long *,unsigned char * *);
	virtual long GetBitmapValue(unsigned long,HBITMAP__ * *);
	virtual long GetCheckboxValue(unsigned long,int *,unsigned short * *);
	virtual long GetComboBoxValueAt(unsigned long,unsigned long,unsigned short * *);
	virtual long GetComboBoxValueCount(unsigned long,unsigned long *,unsigned long *);
	virtual long GetFieldState(unsigned long,_CREDENTIAL_PROVIDER_FIELD_STATE *,_CREDENTIAL_PROVIDER_FIELD_INTERACTIVE_STATE *);
	virtual long GetSerialization(_CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE *,_CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION *,unsigned short * *,_CREDENTIAL_PROVIDER_STATUS_ICON *);
	virtual long GetStringValue(unsigned long,unsigned short * *);
	virtual long GetSubmitButtonValue(unsigned long,unsigned long *);
	virtual long GetUserSid(unsigned short * *);
	virtual long ReportResult(long,long,unsigned short * *,_CREDENTIAL_PROVIDER_STATUS_ICON *);
	virtual long SetCheckboxValue(unsigned long,int);
	virtual long SetComboBoxSelectedValue(unsigned long,unsigned long);
	virtual long SetDeselected();
	virtual long SetSelected(int *);
	virtual long SetStringValue(unsigned long,unsigned short const *);
	virtual long UnAdvise();
};

class CXCredentialLogonUI
{
	long RespondToWebDialogTrigger(unsigned long);
	virtual ~CXCredentialLogonUI();
protected:
	virtual long AdviseInternal(ICredentialProviderCredentialEvents *);
	virtual long CommandLinkClickedInternal(unsigned long);
	virtual long GetAuthPackageId(unsigned long *);
	virtual long GetCredentialMethodInternal(_CREDENTIAL_METHOD_FLAGS *);
	virtual long GetFieldStateInternal(unsigned long,_CREDENTIAL_PROVIDER_FIELD_STATE *,_CREDENTIAL_PROVIDER_FIELD_INTERACTIVE_STATE *);
	virtual long GetShouldAssignPrimaryUserInternal(int *);
	virtual long GetStringValueInternal(unsigned long,unsigned short * *);
	virtual long GetSubmissionOptionsInternal(SERIALIZATION_FLAGS *,unsigned short * *);
	virtual long GetUIModeInternal(_CREDENTIAL_PROVIDER_CREDENTIAL_UI_MODE *);
	virtual long GetUserSidInternal(unsigned short * *);
	virtual long GetWebDialogUrlInternal(unsigned short * *);
	virtual long OnWebDialogVisiblityChangeInternal(int);
	virtual long ReportResultInternal(long,long,unsigned short * *,_CREDENTIAL_PROVIDER_STATUS_ICON *);
	virtual long SerializeResponse(unsigned char * *,unsigned long *,bool *,_CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE *,unsigned short * *);
	virtual long SetDeselectedInternal();
	virtual long SetSelectedInternal(int *);
	virtual long ValidateCredential(bool *,unsigned short * *);
public:
	CXCredentialLogonUI();
	long RuntimeClassInitialize(unsigned short const *,unsigned short const *,unsigned short const *,CxExperienceMode);
	virtual long GetCredentialMethod(_CREDENTIAL_METHOD_FLAGS *);
	virtual long GetShouldAssignPrimaryUser(int *);
	virtual long GetSubmissionOptions(SERIALIZATION_FLAGS *,unsigned short * *);
	virtual long GetUIMode(_CREDENTIAL_PROVIDER_CREDENTIAL_UI_MODE *);
	virtual long GetWebDialogUrl(unsigned short * *);
	virtual long OnWebDialogVisiblityChange(int);
};

struct CXLogonUIInitializationContext
{
	CXLogonUIInitializationContext(unsigned short const * const,unsigned short const * const,unsigned short const * const,CflScenarioData const *);
	~CXLogonUIInitializationContext();
};

class CXProvider
{
	virtual ~CXProvider();
public:
	virtual long Advise(ICredentialProviderEvents *,unsigned __int64);
	virtual long GetCredentialAt(unsigned long,ICredentialProviderCredential * *);
	virtual long GetCredentialCount(unsigned long *,unsigned long *,int *);
	virtual long GetFieldDescriptorAt(unsigned long,_CREDENTIAL_PROVIDER_FIELD_DESCRIPTOR * *);
	virtual long GetFieldDescriptorCount(unsigned long *);
	virtual long SetDisplayState(_CREDENTIAL_PROVIDER_DISPLAY_STATE_FLAGS);
	virtual long SetSerialization(_CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION const *);
	virtual long SetSessionContext(unsigned short const *);
	virtual long SetUsageScenario(_CREDENTIAL_PROVIDER_USAGE_SCENARIO,unsigned long);
	virtual long SetUserArray(ICredentialProviderUserArray *);
	virtual long UnAdvise();
};

struct CXScenario
{
	virtual long Advise(ICredentialProviderEvents *,unsigned __int64);
	virtual long SetUserArray(ICredentialProviderUserArray *);
};

class CXScenarioLogonUI
{
	virtual ~CXScenarioLogonUI();
public:
	virtual long GetCredentialAt(unsigned long,ICredentialProviderCredential * *);
	virtual long GetCredentialCount(unsigned long *,unsigned long *,int *);
	virtual long GetFieldDescriptorAt(unsigned long,_CREDENTIAL_PROVIDER_FIELD_DESCRIPTOR * *);
	virtual long GetFieldDescriptorCount(unsigned long *);
	virtual long SetDisplayState(_CREDENTIAL_PROVIDER_DISPLAY_STATE_FLAGS);
	virtual long SetSerialization(_CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION const *);
	virtual long SetSessionContext(unsigned short const *);
	virtual long SetUsageScenario(_CREDENTIAL_PROVIDER_USAGE_SCENARIO,unsigned long);
	virtual long UnAdvise();
};

struct CXUserAuthInfo
{
	CXUserAuthInfo(unsigned short const *,unsigned short const *,unsigned short const *);
};

struct CflScenarioData
{
	CflScenarioData(CflScenarioData const &);
	CflScenarioData(unsigned short const * const,unsigned char const *,unsigned long);
	~CflScenarioData();
};

namespace CredProvPolicy
{
	bool IsPrimaryUserForEduEnvironment();
};

namespace Microsoft
{
	namespace WRL
	{
		struct ClassFactory<Details::Nil,Details::Nil,Details::Nil,0>
		{
			virtual long LockServer(int);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
		};

		struct ComPtr<CXCredentialLogonUI>
		{
			~ComPtr<CXCredentialLogonUI>();
		};

		namespace Details
		{
			class ImplementsHelper<RuntimeClassFlags<2>,1,ICredentialProviderCredentialWithUIMode,ICredentialProviderCredentialWithSubmissionOptions,ICredentialMethodInfo,CXCredential>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			struct MakeAllocator<CXCredentialLogonUI>
			{
				~MakeAllocator<CXCredentialLogonUI>();
			};

			class ModuleBase
			{
				static void * moduleLock_;
			protected:
				static unsigned long volatile objectCount_;
			public:
				static ModuleBase * module_;
				virtual CreatorMap const * * GetFirstEntryPointer();
				virtual CreatorMap const * * GetLastEntryPointer();
				virtual CreatorMap const * * GetMidEntryPointer();
				virtual _RTL_SRWLOCK * GetLock();
				virtual unsigned long GetObjectCount();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ICredentialProvider,ICredentialProviderSetUserArray,ICredentialProviderWithSessionContext,ICredentialProviderWithDisplayState>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ICredentialProviderCredentialForPrimaryUser,ICredentialProviderCredentialWithWebDialog,ICredentialProviderCredentialWithUIMode,ICredentialProviderCredentialWithSubmissionOptions,ICredentialMethodInfo,CXCredential>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			class StaticStorage<DefaultModule<1>,0,int>
			{
				static StaticStorage<DefaultModule<1>,0,int> instance_;
			};

			bool TerminateMap(Details::ModuleBase *,unsigned short const *,bool);
			long CreateClassFactory<SimpleClassFactory<CXProvider,0> >(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long GetCacheEntry(Details::ModuleBase *,unsigned int *,_GUID const &,Details::CreatorMap const *,IUnknown * *);
			void RaiseException(long,unsigned long);
		};

		class Module<1,Details::DefaultModule<1> >
		{
			static bool isInitialized;
		protected:
			static _RTL_RUN_ONCE initOnceInProc_;
		public:
			virtual long RegisterCOMObject(unsigned short const *,_GUID *,IClassFactory * *,unsigned long *,unsigned int);
			virtual long RegisterWinRTObject(unsigned short const *,unsigned short const * *,_RO_REGISTRATION_COOKIE * *,unsigned int);
			virtual long UnregisterCOMObject(unsigned short const *,unsigned long *,unsigned int);
			virtual long UnregisterWinRTObject(unsigned short const *,_RO_REGISTRATION_COOKIE *);
			virtual unsigned long DecrementObjectCount();
			virtual unsigned long IncrementObjectCount();
		};

		struct SimpleClassFactory<CXProvider,0>
		{
			virtual long CreateInstance(IUnknown *,_GUID const &,void * *);
		};

	};

};

namespace PwdlessPlat
{
	class ImageCustomizations
	{
		void QueryCustomizations();
	};

	long GetDwordRegistryValue(HKEY__ *,unsigned short const *,unsigned short const *,unsigned long *);
};

namespace Windows
{
	namespace Internal
	{
		class NativeString<CoTaskMemPolicy<unsigned short> >
		{
			long _EnsureCapacity(unsigned __int64);
			long _Initialize(unsigned short const *,unsigned __int64);
		public:
			long Initialize(HINSTANCE__ *,unsigned int);
			long InitializeFormat(unsigned short const *,char *);
			long InitializeResFormat(HINSTANCE__ *,int,...);
			~NativeString<CoTaskMemPolicy<unsigned short> >();
		};

	};

};

namespace std
{
	struct _Tidy_guard<vector<unsigned char,allocator<unsigned char> > >
	{
		~_Tidy_guard<vector<unsigned char,allocator<unsigned char> > >();
	};

	struct _Uninitialized_backout_al<allocator<unique_ptr<CXUserAuthInfo,default_delete<CXUserAuthInfo> > > >
	{
		~_Uninitialized_backout_al<allocator<unique_ptr<CXUserAuthInfo,default_delete<CXUserAuthInfo> > > >();
	};

	struct allocator<unique_ptr<CXUserAuthInfo,default_delete<CXUserAuthInfo> > >
	{
		void deallocate(unique_ptr<CXUserAuthInfo,default_delete<CXUserAuthInfo> > * const,unsigned __int64);
	};

	struct allocator<wil::com_ptr_t<ICredentialProviderCredential,wil::err_exception_policy> >
	{
		void deallocate(wil::com_ptr_t<ICredentialProviderCredential,wil::err_exception_policy> * const,unsigned __int64);
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

	class basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >
	{
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & _Reallocate_for<<lambda_05cef1f6fdf474c9f3ed207deba0f73b>,unsigned short const *>(unsigned __int64,<lambda_05cef1f6fdf474c9f3ed207deba0f73b>,unsigned short const *);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & _Reallocate_grow_by<<lambda_7030d12a21dba11210293044e97fe9c7>,unsigned short const *,unsigned __int64>(unsigned __int64,<lambda_7030d12a21dba11210293044e97fe9c7>,unsigned short const *,unsigned __int64);
	public:
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & operator+=(unsigned short const * const);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >(unsigned short const * const);
		~basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >();
	};

	struct exception
	{
		exception(exception const &);
		virtual char const * what();
	};

	struct unique_ptr<CXUserAuthInfo,default_delete<CXUserAuthInfo> >
	{
		~unique_ptr<CXUserAuthInfo,default_delete<CXUserAuthInfo> >();
	};

	class vector<unique_ptr<CXUserAuthInfo,default_delete<CXUserAuthInfo> >,allocator<unique_ptr<CXUserAuthInfo,default_delete<CXUserAuthInfo> > > >
	{
		static void _Xlength();
		void _Tidy();
	public:
		~vector<unique_ptr<CXUserAuthInfo,default_delete<CXUserAuthInfo> >,allocator<unique_ptr<CXUserAuthInfo,default_delete<CXUserAuthInfo> > > >();
	};

	class vector<unsigned char,allocator<unsigned char> >
	{
		static void _Xlength();
		void _Buy_nonzero(unsigned __int64);
	};

	class vector<wil::com_ptr_t<ICredentialProviderCredential,wil::err_exception_policy>,allocator<wil::com_ptr_t<ICredentialProviderCredential,wil::err_exception_policy> > >
	{
		static void _Xlength();
		void _Tidy();
	public:
		~vector<wil::com_ptr_t<ICredentialProviderCredential,wil::err_exception_policy>,allocator<wil::com_ptr_t<ICredentialProviderCredential,wil::err_exception_policy> > >();
	};

	nothrow_t const std::nothrow;
	void _Destroy_range<allocator<unique_ptr<CXUserAuthInfo,default_delete<CXUserAuthInfo> > > >(std::unique_ptr<CXUserAuthInfo,std::default_delete<CXUserAuthInfo> > *,std::unique_ptr<CXUserAuthInfo,std::default_delete<CXUserAuthInfo> > * const,std::allocator<std::unique_ptr<CXUserAuthInfo,std::default_delete<CXUserAuthInfo> > > &);
	void _Destroy_range<allocator<wil::com_ptr_t<ICredentialProviderCredential,wil::err_exception_policy> > >(wil::com_ptr_t<ICredentialProviderCredential,wil::err_exception_policy> *,wil::com_ptr_t<ICredentialProviderCredential,wil::err_exception_policy> * const,std::allocator<wil::com_ptr_t<ICredentialProviderCredential,wil::err_exception_policy> > &);
	void _Throw_bad_array_new_length();
	void _Xlen_string();
};

namespace wil
{
	struct ActivityBase<CXCredProvProvider,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>
	{
		struct ActivityData<CXCredProvProvider,_TlgReflectorTag_Param0IsProviderType>
		{
			~ActivityData<CXCredProvProvider,_TlgReflectorTag_Param0IsProviderType>();
		};

		virtual bool NotifyFailure(FailureInfo const &);
		void Stop(long);
		~ActivityBase<CXCredProvProvider,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>();
	};

	struct ActivityBase<CXCredProvProvider,1,140737488355328,5,0,_TlgReflectorTag_Param0IsProviderType>
	{
		struct ActivityData<CXCredProvProvider,_TlgReflectorTag_Param0IsProviderType>
		{
			~ActivityData<CXCredProvProvider,_TlgReflectorTag_Param0IsProviderType>();
		};

		virtual bool NotifyFailure(FailureInfo const &);
		~ActivityBase<CXCredProvProvider,1,140737488355328,5,0,_TlgReflectorTag_Param0IsProviderType>();
	};

	struct ResultException
	{
		ResultException(FailureInfo const &);
		ResultException(ResultException const &);
		virtual char const * what();
		virtual ~ResultException();
	};

	struct StoredFailureInfo
	{
		void SetFailureInfo(FailureInfo const &);
		~StoredFailureInfo();
	};

	class TraceLoggingProvider
	{
		virtual bool NotifyFailure(FailureInfo const &);
	protected:
		virtual void Initialize();
		virtual void OnErrorReported(bool,FailureInfo const &);
		void Register(_tlgProvider_t const * const,void (*)(_GUID const *,unsigned long,unsigned char,unsigned __int64,unsigned __int64,_EVENT_FILTER_DESCRIPTOR *,void *));
		void ReportTelemetryFailure(FailureInfo const &);
		void ReportTraceLoggingFailure(FailureInfo const &);
	};

	struct com_ptr_t<ICredentialProviderCredential,err_exception_policy>
	{
		~com_ptr_t<ICredentialProviderCredential,err_exception_policy>();
	};

	struct com_ptr_t<ICredentialProviderCredentialEvents,err_exception_policy>
	{
		~com_ptr_t<ICredentialProviderCredentialEvents,err_exception_policy>();
	};

	struct com_ptr_t<ICredentialProviderTileDataEvents,err_exception_policy>
	{
		~com_ptr_t<ICredentialProviderTileDataEvents,err_exception_policy>();
	};

	struct com_ptr_t<ICredentialProviderUser,err_exception_policy>
	{
		~com_ptr_t<ICredentialProviderUser,err_exception_policy>();
	};

	namespace details
	{
		class EnabledStateManager
		{
			void RecordCachedUsageUnderLock();
		public:
			void OnStateChange();
			void QueueBackgroundUsageReporting(unsigned int,wil_details_FeatureReportingCache *);
			~EnabledStateManager();
		};

		class FeatureImpl<__WilFeatureTraits_Feature_EnableFedSignInProForEdu>
		{
			wil_details_FeatureStateCache GetCachedFeatureEnabledState();
		public:
			bool __private_IsEnabled();
		};

		class FeatureImpl<__WilFeatureTraits_Feature_FederatedAADWebSignInSV2>
		{
			wil_details_FeatureStateCache GetCachedFeatureEnabledState();
		};

		class FeatureImpl<__WilFeatureTraits_Feature_MTestUx13>
		{
			wil_details_FeatureStateCache GetCachedFeatureEnabledState();
		public:
			bool __private_IsEnabled(ReportingKind);
		};

		class FeatureLogging
		{
		protected:
			static FeatureLogging * Instance();
		};

		class FeatureStateManager
		{
			bool EnsureStateData();
		public:
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
			~ThreadFailureCallbackHolder();
		};

		namespace in1diag3
		{
			bool Log_HrIfMsg(void *,unsigned int,char const *,long,bool,char const *,...);
			long Log_Hr(void *,unsigned int,char const *,long);
			long Log_HrMsg(void *,unsigned int,char const *,long,char const *,...);
			long Return_CaughtException(void *,unsigned int,char const *);
			long Return_GetLastError(void *,unsigned int,char const *);
			long Return_NtStatus(void *,unsigned int,char const *,long);
			void FailFast_Hr(void *,unsigned int,char const *,long);
			void FailFast_Unexpected(void *,unsigned int,char const *);
			void Return_Hr(void *,unsigned int,char const *,long);
			void Return_HrMsg(void *,unsigned int,char const *,long,char const *,...);
			void _FailFastImmediate_Unexpected();
			void _FailFast_GetLastError(void *,unsigned int,char const *);
			void _FailFast_Hr(void *,unsigned int,char const *,long);
			void _FailFast_Unexpected(void *,unsigned int,char const *);
			void _Log_GetLastError(void *,unsigned int,char const *);
			void _Log_Hr(void *,unsigned int,char const *,long);
			void _Log_NtStatus(void *,unsigned int,char const *,long);
			void _Throw_Hr(void *,unsigned int,char const *,long);
			void _Throw_NullAlloc(void *,unsigned int,char const *);
		};

		struct out_param_t<wistd::unique_ptr<unsigned char,cotaskmem_secure_deleter> >
		{
			~out_param_t<wistd::unique_ptr<unsigned char,cotaskmem_secure_deleter> >();
		};

		struct shared_buffer
		{
			bool create(void const *,unsigned __int64);
		};

		struct wnf_subscription_state<empty_wnf_state>
		{
			virtual ~wnf_subscription_state<empty_wnf_state>();
		};

		FEATURE_ENABLED_STATE WilApiImpl_GetFeatureEnabledState(unsigned int,FEATURE_CHANGE_TIME,int *);
		bool GetModuleInformation(void *,unsigned int *,char *,unsigned __int64);
		bool IsFeatureConfigured(wil_FeatureState *,unsigned int,bool,wil_FeatureStore,int *);
		bool g_processShutdownInProgress;
		bool g_resultMessageCallbackSet;
		char const * (* ?? g_pfnGetModuleName)();
		char const * GetCurrentModuleName();
		details::ResultStatus ReportFailure_CaughtExceptionCommon<1>(void *,unsigned int,char const *,char const *,char const *,void *,unsigned short *,unsigned __int64,SupportedExceptions);
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
		long ReportFailure_CaughtException<1>(void *,unsigned int,char const *,char const *,char const *,void *,SupportedExceptions);
		long ReportFailure_GetLastErrorHr<1>(void *,unsigned int,char const *,char const *,char const *,void *);
		long ReportFailure_NtStatus<1>(void *,unsigned int,char const *,char const *,char const *,void *,long);
		long ReportFailure_NtStatus<2>(void *,unsigned int,char const *,char const *,char const *,void *,long);
		long RtlDisownModuleHeapAllocation(void *,void *);
		long StringCchPrintfA(char *,unsigned __int64,char const *,...);
		shutdown_aware_object<details::EnabledStateManager> g_enabledStateManager;
		shutdown_aware_object<details::FeatureStateManager> g_featureStateManager;
		unsigned char (* ?? g_pfnDllShutdownInProgress)();
		unsigned char * WriteResultString<unsigned short const *>(unsigned char *,unsigned char *,unsigned short const *,unsigned short const * *);
		unsigned char RtlDllShutdownInProgress();
		unsigned int EnsureSubscribedToFeatureConfigurationChanges();
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
		void (* g_pfnRethrow)();
		void (* g_pfnThrowResultException)(FailureInfo const &);
		void * ProcessHeapAlloc(unsigned long,unsigned __int64);
		void DebugBreak();
		void FeatureLoggingHook(unsigned int,FEATURE_LOGGED_TRAITS const *,FEATURE_ERROR const *,int,wil_ReportingKind const *,wil_VariantReportingKind const *,unsigned char,unsigned __int64);
		void FormatNtStatusMsg(long,unsigned short *,unsigned long);
		void GetContextAndNotifyFailure(FailureInfo *,char *,unsigned __int64);
		void LogFailure(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,details::ResultStatus const &,unsigned short const *,bool,unsigned short *,unsigned __int64,char *,unsigned __int64,FailureInfo *);
		void MicrosoftInternalNotifyFailure(FailureInfo *);
		void PrintLoggingMessage(unsigned short *,unsigned __int64,char const *,char *);
		void RecordSRUMFeatureUsage(unsigned int,unsigned int,unsigned int);
		void ReportFailure_Base<0,0>(void *,unsigned int,char const *,char const *,char const *,void *,details::ResultStatus const &,unsigned short const *,details::ReportFailureOptions);
		void ReportFailure_Base<1,0>(void *,unsigned int,char const *,char const *,char const *,void *,details::ResultStatus const &,unsigned short const *,details::ReportFailureOptions);
		void ReportFailure_Base<2,0>(void *,unsigned int,char const *,char const *,char const *,void *,details::ResultStatus const &,unsigned short const *,details::ReportFailureOptions);
		void ReportFailure_Base<3,0>(void *,unsigned int,char const *,char const *,char const *,void *,details::ResultStatus const &,unsigned short const *,details::ReportFailureOptions);
		void ReportFailure_Hr<0>(void *,unsigned int,char const *,char const *,char const *,void *,long);
		void ReportFailure_Hr<1>(void *,unsigned int,char const *,char const *,char const *,void *,long);
		void ReportFailure_Hr<2>(void *,unsigned int,char const *,char const *,char const *,void *,long);
		void ReportFailure_Hr<3>(void *,unsigned int,char const *,char const *,char const *,void *,long);
		void ReportFailure_HrMsg<1>(void *,unsigned int,char const *,char const *,char const *,void *,long,char const *,char *);
		void ReportFailure_HrMsg<2>(void *,unsigned int,char const *,char const *,char const *,void *,long,char const *,char *);
		void ReportFailure_NoReturn<0>(void *,unsigned int,char const *,char const *,char const *,void *,details::ResultStatus const &,unsigned short const *,details::ReportFailureOptions);
		void ReportFailure_NoReturn<3>(void *,unsigned int,char const *,char const *,char const *,void *,details::ResultStatus const &,unsigned short const *,details::ReportFailureOptions);
		void ReportFailure_Return<1>(void *,unsigned int,char const *,char const *,char const *,void *,details::ResultStatus const &,unsigned short const *,details::ReportFailureOptions);
		void ReportFailure_Return<2>(void *,unsigned int,char const *,char const *,char const *,void *,details::ResultStatus const &,unsigned short const *,details::ReportFailureOptions);
		void ReportUsageToService(wil_details_FeatureReportingCache *,unsigned int,int,int,FEATURE_LOGGED_TRAITS const *,int,wil_ReportingKind,unsigned __int64);
		void Rethrow();
		void SubscribeFeatureStateCacheToConfigurationChanges(wil_details_FeatureStateCache *,wil_FeatureChangeTime,unsigned int);
		void ThrowResultExceptionInternal(FailureInfo const &);
		void UnregisterWilFeatureConfigurationChange(void *);
		void WilApiImpl_RecordFeatureUsage(unsigned int,unsigned int,unsigned int,char const *);
		void WilApiImpl_SubscribeFeatureStateChangeNotification(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
		void WilApiImpl_UnsubscribeFeatureStateChangeNotification(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
		void WilApi_RecordFeatureUsage(unsigned int,unsigned int,unsigned int,char const *);
		void WilDynamicLoadRaiseFailFastException(_EXCEPTION_RECORD *,_CONTEXT *,unsigned long);
		void WilFailFast(FailureInfo const &);
		void WilRaiseFailFastException(_EXCEPTION_RECORD *,_CONTEXT *,unsigned long);
	};

	namespace details_abi
	{
		struct FeatureStateData
		{
			void RecordUsage();
			~FeatureStateData();
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
		};

		class RawUsageIndex
		{
			bool RecordUsageInternal(void *,unsigned __int64,void *,unsigned __int64,unsigned int);
			unsigned char * FindInsertionPointOrIncrement(UsageIndexProperty &,unsigned char *,void *,unsigned __int64,unsigned int);
		public:
			bool RecordUsage(void *,unsigned __int64,void *,unsigned __int64,unsigned int);
			void SetBuffer(void *,unsigned __int64,unsigned __int64);
			void Swap(RawUsageIndex &);
		};

		class SemaphoreValue
		{
			static long GetValueFromSemaphore(void *,long *);
			static long TryGetValueInternal(unsigned short const *,bool,unsigned __int64 *,bool *);
		public:
			long CreateFromPointer(unsigned short const *,void *);
			~SemaphoreValue();
		};

		struct SubscriptionList
		{
			void OnSignaled(srwlock &);
			void SubscribeUnderLock(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
			void Unsubscribe(srwlock &,FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
		};

		struct ThreadLocalData
		{
			void SetLastError(FailureInfo const &);
			~ThreadLocalData();
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
		};

		details_abi::ProcessLocalStorage<details_abi::ProcessLocalData> * g_pProcessLocalData;
		details_abi::ThreadLocalData * GetThreadLocalDataCache(bool);
		void RecordWnfUsageIndex(__WIL__WNF_STATE_NAME const *,unsigned __int64,details_abi::RawUsageIndex const &);
	};

	WilFailureReportFlags g_moduleFailureReportFlags;
	bool (* ?? g_pfnIsDebuggerPresent)();
	bool (* ?? g_pfnWilFailFast)(wil::FailureInfo const &);
	bool g_fBreakOnFailure;
	bool g_fIsDebuggerPresent;
	long (* ?? g_pfnResultFromCaughtException)();
	long GetFailureLogString(unsigned short *,unsigned __int64,wil::FailureInfo const &);
	long ResultFromCaughtException();
	long verify_hresult<long>(long);
	make_cotaskmem_string(unsigned short const *,unsigned __int64);
	void ThrowResultException(wil::FailureInfo const &);
	wistd::unique_ptr<unsigned char [0],wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)> > make_unique_cotaskmem<unsigned char [0]>(unsigned __int64);
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

	struct function<void ()>
	{
		~function<void ()>();
	};

	struct unique_ptr<unsigned char,wil::cotaskmem_secure_deleter>
	{
		void reset(unsigned char *);
		~unique_ptr<unsigned char,wil::cotaskmem_secure_deleter>();
	};

	void __throw_bad_function_call();
};

FEATURE_ENABLED_STATE (* g_wil_details_apiGetFeatureEnabledState)(unsigned int,FEATURE_CHANGE_TIME,int *);
FEATURE_ENABLED_STATE (* g_wil_details_internalGetFeatureEnabledState)(unsigned int,FEATURE_CHANGE_TIME,int *);
HINSTANCE__ * g_moduleHandle;
HINSTANCE__ * g_wil_details_kernelbaseModuleHandle;
HINSTANCE__ * g_wil_details_ntdllModuleHandle;
Microsoft::WRL::Details::CreatorMap const __object_CXProvider_COM;
Microsoft::WRL::Details::FactoryCache __objectFactory__CXProvider_COM;
__type_info_node __type_info_root_node;
int wil_QueryFeatureState(wil_FeatureState *,unsigned int,int,wil_FeatureStore,int *,int *);
long (* g_wil_details_pfnNtQueryWnfStateData)(__WIL__WNF_STATE_NAME const *,__WIL__WNF_TYPE_ID const *,void const *,unsigned long *,void *,unsigned long *);
long (* g_wil_details_pfnNtUpdateWnfStateData)(__WIL__WNF_STATE_NAME const *,void const *,unsigned long,__WIL__WNF_TYPE_ID const *,void const *,unsigned long,unsigned long);
long StringCchCatW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchPrintfW(unsigned short *,unsigned __int64,unsigned short const *,...);
long wil_details_NtQueryWnfStateData(__WIL__WNF_STATE_NAME const *,__WIL__WNF_TYPE_ID const *,void const *,unsigned long *,void *,unsigned long *);
long wil_details_NtUpdateWnfStateData(__WIL__WNF_STATE_NAME const *,void const *,unsigned long,__WIL__WNF_TYPE_ID const *,void const *,unsigned long,unsigned long);
long wil_details_WriteSRUMWnfUsageBuffer(wil::details_abi::heap_vector<wil_details_FeatureUsageSRUM> *);
unsigned short const * const RuntimeClass_Windows_System_Profile_EducationSettings;
void (* g_wil_details_RecordSRUMFeatureUsage)(unsigned int,unsigned int,unsigned int);
void (* g_wil_details_apiRecordFeatureUsage)(unsigned int,unsigned int,unsigned int,char const *);
void (* g_wil_details_apiSubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
void (* g_wil_details_apiUnsubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
void (* g_wil_details_internalRecordFeatureUsage)(unsigned int,unsigned int,unsigned int,char const *);
void (* g_wil_details_internalSubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
void (* g_wil_details_internalUnsubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
void (* g_wil_details_pfnFeatureLoggingHook)(unsigned int,FEATURE_LOGGED_TRAITS const *,FEATURE_ERROR const *,int,wil_ReportingKind const *,wil_VariantReportingKind const *,unsigned char,unsigned __int64);
void (* g_wil_details_realtimeFeatureUsageHook)(unsigned int,unsigned int,unsigned char);
void * operator new(unsigned __int64);
void * operator new(unsigned __int64,std::nothrow_t const &);
void __scrt_initialize_type_info();
void __scrt_throw_std_bad_alloc();
void __scrt_throw_std_bad_array_new_length();
void __scrt_uninitialize_type_info();
void _tlgWriteActivityAutoStop<0,5>(_tlgProvider_t const *,_GUID const *);
void _tlgWriteActivityAutoStop<140737488355328,5>(_tlgProvider_t const *,_GUID const *);
void operator delete(void *);
void operator delete(void *,unsigned __int64);
void wil_StagingConfig_LogStagedFeatureUsage(unsigned int,unsigned int,unsigned char);
void wil_details_FeatureReporting_IncrementOpportunityInCache(wil_details_FeatureReportingCache *,wil_details_ServiceReportingKind,unsigned int,wil_details_RecordUsageResult *);
void wil_details_FeatureReporting_IncrementUsageInCache(wil_details_FeatureReportingCache *,wil_details_ServiceReportingKind,unsigned int,wil_details_RecordUsageResult *);
