class <lambda_0374aa0a5d1201b2358c6bce99369c58>
{
	static <lambda_invoker_cdecl>(_TP_CALLBACK_INSTANCE *,void *,_TP_TIMER *);
};

class <lambda_152aa9d2a3a0648fa2fa7fcef514b376>
{
	static <lambda_invoker_cdecl>(void *);
};

class <lambda_1ad7ecfab602a777ecf020873216a663>
{
	static <lambda_invoker_cdecl>(void *);
};

struct <lambda_33b022599fe9b1d767a239ec3cd80a59>
{
	operator()(unsigned short * const,unsigned short const * const,unsigned __int64,unsigned __int64,unsigned short);
};

class <lambda_3b095cdcc3ffc9a61efc9666eeb34e86>
{
	static long <lambda_invoker_cdecl>(_WNF_STATE_NAME,unsigned long,_WNF_TYPE_ID *,void *,void const *,unsigned long);
};

class <lambda_5035b992506f4af81a770c5842624510>
{
	static <lambda_invoker_cdecl>(_TP_CALLBACK_INSTANCE *,void *,_TP_TIMER *);
};

class <lambda_5f1dd388c03885d19ee806198d2ac5ef>
{
	static int <lambda_invoker_cdecl>(_RTL_RUN_ONCE *,void *,void * *);
};

class <lambda_7ca1e1d73587844f6293a86c00810f12>
{
	static long <lambda_invoker_cdecl>(_WNF_STATE_NAME,unsigned long,_WNF_TYPE_ID *,void *,void const *,unsigned long);
};

class <lambda_aa194dc0bf891154933407eb98fb868a>
{
	static <lambda_invoker_cdecl>(void *);
};

struct <lambda_b70241e9b5ebaad244db3e52d52cab17>
{
	operator()(unsigned short * const,unsigned short const * const,unsigned __int64,unsigned __int64,unsigned short);
};

class <lambda_d51448ba32f8ef42e59400edd4566183>
{
	static <lambda_invoker_cdecl>(_TP_CALLBACK_INSTANCE *,void *,_TP_TIMER *);
};

class <lambda_f3b317fa465d1213540da7d5a90d7562>
{
	static <lambda_invoker_cdecl>();
};

struct <lambda_f68dc91b63048d8e897893337fb617c1>
{
	operator()(unsigned short * const,unsigned short const * const,unsigned __int64,unsigned __int64,unsigned __int64,unsigned short const * const,unsigned __int64);
};

class <lambda_fee8cea507d2413a58be13acfb66740a>
{
	static <lambda_invoker_cdecl>(void *);
};

struct AdditionHelper<unsigned long,unsigned long,1>
{
	static void AdditionThrow<SafeIntInternal::SafeIntExceptionHandler<SafeIntException> >(unsigned long const &,unsigned long const &,unsigned long &);
};

struct BioPolicy
{
	struct Values
	{
		static int make_index(Values::type);
	};

	long Refresh();
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

struct CflScenarioData
{
	CflScenarioData & operator=(CflScenarioData const &);
	CflScenarioData(CflScenarioData const &);
	void Initialize(unsigned short const * const,unsigned char const *,unsigned long);
	~CflScenarioData();
};

struct DeviceRegistrationStateApi
{
	static long GetJoinCertificate(unsigned short const *,_JOIN_TYPE,INFO_KIND,_CERT_CONTEXT const * *,int *);
	static long GetJoinInfo(_DSREG_JOIN_TYPE,unsigned short const *,unsigned short const *,INFO_KIND,int,int,_DSREG_JOIN_INFO_2 * *);
	static long IsJoined(unsigned short const *,_JOIN_TYPE,int *,int *,_CERT_CONTEXT const * *,int *);
	static long PopulateJoinInfo(_JOIN_TYPE,_CERT_CONTEXT const *,unsigned short const *,int,int,_DSREG_ACCOUNT_INFO_2 *);
};

class HWSecurityRegistryManager
{
	struct RegistryKeyEntry
	{
		~RegistryKeyEntry();
	};

	static std::map<HWSecurityRegistryManager::RegKeys,HWSecurityRegistryManager::RegistryKeyEntry,std::less<HWSecurityRegistryManager::RegKeys>,std::allocator<std::pair<HWSecurityRegistryManager::RegKeys const ,HWSecurityRegistryManager::RegistryKeyEntry> > > m_RegKeyTable;
	static std::map<HWSecurityRegistryManager::RegValues,HWSecurityRegistryManager::RegistryValueEntry,std::less<HWSecurityRegistryManager::RegValues>,std::allocator<std::pair<HWSecurityRegistryManager::RegValues const ,HWSecurityRegistryManager::RegistryValueEntry> > > m_RegValueTable;
};

class JoinStatusStorage
{
	static long GetExistingDeviceKeyPath(int,_CERT_CONTEXT const *,RegistryPath &);
	static long InitJoinStatusRegPath(int,RegistryPath &);
	static long ReadDeviceKey(struct_join_status *,RegistryPath &,int);
	static long ReadTenantKey(struct_join_status *,RegistryPath &,int);
	static long SetDefaultDiscoveryMetadata(struct_join_status *,unsigned short const *);
public:
	static long ReadJoinStatus(int,_CERT_CONTEXT const *,int,struct_join_status *,int);
};

struct KeyEnumInfo
{
	~KeyEnumInfo();
};

struct LargeIntRegMultiply<__int64,unsigned __int64>
{
	static void RegMultiplyThrow<SafeIntInternal::SafeIntExceptionHandler<SafeIntException> >(__int64 const &,unsigned __int64 const &,__int64 &);
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
	static long WriteGetPersistedStateLocationFailureEvent(long,unsigned short const *,unsigned short const *,int);
	static long WriteNullOrEmptyParameterFailureEvent(unsigned short const *,unsigned short const *);
	static long WriteRegistryFailureEvent(unsigned long,unsigned short const *,unsigned short const *);
	static long WriteRegistryFailureEvent(unsigned long,unsigned short const *,unsigned short const *,unsigned short const *);
	static long WriteRegistryFailureEvent(unsigned long,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *);
	static long WriteRegistryFailureEventEx(unsigned long,unsigned short const *,unsigned short const *,...);
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

		class ComPtr<ICredentialProviderCredential>
		{
		protected:
			unsigned long InternalRelease();
		public:
			ICredentialProviderCredential * * ReleaseAndGetAddressOf();
			~ComPtr<ICredentialProviderCredential>();
		};

		class ComPtr<ICredentialProviderEvents>
		{
		protected:
			unsigned long InternalRelease();
		public:
			ComPtr<ICredentialProviderEvents> & operator=(ICredentialProviderEvents *);
			long As<ICredentialProviderTileDataEvents>(Details::ComPtrRef<ComPtr<ICredentialProviderTileDataEvents> >);
		};

		class ComPtr<ICredentialProviderTileDataEvents>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<ICredentialProviderTileDataEvents>();
		};

		class ComPtr<ICredentialProviderUser>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<ICredentialProviderUser>();
		};

		struct ComPtr<NgcPinCredentialLogonUILocal>
		{
			~ComPtr<NgcPinCredentialLogonUILocal>();
		};

		struct ComPtr<NgcPinCredentialLogonUIOtherUser>
		{
			~ComPtr<NgcPinCredentialLogonUIOtherUser>();
		};

		struct ComPtr<NgcPinCredentialLogonUIRecovery>
		{
			~ComPtr<NgcPinCredentialLogonUIRecovery>();
		};

		struct ComPtr<NgcPinCredentialLogonUIResetStatus>
		{
			~ComPtr<NgcPinCredentialLogonUIResetStatus>();
		};

		struct ComPtr<NgcPinCredentialLogonUISetup>
		{
			~ComPtr<NgcPinCredentialLogonUISetup>();
		};

		struct ComPtr<NgcPinCredentialNegotiate>
		{
			~ComPtr<NgcPinCredentialNegotiate>();
		};

		struct ComPtr<NgcPinCredentialPreboot>
		{
			~ComPtr<NgcPinCredentialPreboot>();
		};

		namespace Details
		{
			class ImplementsHelper<RuntimeClassFlags<2>,0,ICredentialProviderCredentialWithWebDialog,NgcPinCredentialLogonUI>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<2>,1,ICredentialMethodInfo,NgcPinCredential>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			struct MakeAllocator<NgcPinCredentialContainerCreation>
			{
				~MakeAllocator<NgcPinCredentialContainerCreation>();
			};

			struct MakeAllocator<NgcPinCredentialCredUIPinChange>
			{
				~MakeAllocator<NgcPinCredentialCredUIPinChange>();
			};

			struct MakeAllocator<NgcPinCredentialLogonUILocal>
			{
				~MakeAllocator<NgcPinCredentialLogonUILocal>();
			};

			struct MakeAllocator<NgcPinCredentialLogonUIOtherUser>
			{
				~MakeAllocator<NgcPinCredentialLogonUIOtherUser>();
			};

			struct MakeAllocator<NgcPinCredentialLogonUIRecovery>
			{
				~MakeAllocator<NgcPinCredentialLogonUIRecovery>();
			};

			struct MakeAllocator<NgcPinCredentialLogonUIResetStatus>
			{
				~MakeAllocator<NgcPinCredentialLogonUIResetStatus>();
			};

			struct MakeAllocator<NgcPinCredentialLogonUISetup>
			{
				~MakeAllocator<NgcPinCredentialLogonUISetup>();
			};

			struct MakeAllocator<NgcPinCredentialNegotiate>
			{
				~MakeAllocator<NgcPinCredentialNegotiate>();
			};

			struct MakeAllocator<NgcPinCredentialPinCollection>
			{
				~MakeAllocator<NgcPinCredentialPinCollection>();
			};

			struct MakeAllocator<NgcPinCredentialPreboot>
			{
				~MakeAllocator<NgcPinCredentialPreboot>();
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

			class RuntimeClassBaseT<2>
			{
			protected:
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,NgcPinCredentialCredUI> >(RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,NgcPinCredentialCredUI> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,NgcPinCredentialLogonUI> >(RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,NgcPinCredentialLogonUI> *,_GUID const &,void * *);
			};

			class RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ICredentialProvider,ICredentialProviderSetUserArray,ICredentialProviderWithDisplayState,ICredentialProviderWithSessionContext>
			{
			protected:
				unsigned long InternalAddRef();
			public:
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			class RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ICredentialProviderCredentialWithWebDialog,NgcPinCredentialLogonUI>
			{
			protected:
				unsigned long InternalAddRef();
			public:
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			class RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,NgcPinCredentialCredUI>
			{
			protected:
				unsigned long InternalAddRef();
			public:
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			class RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,NgcPinCredentialLogonUI>
			{
			protected:
				unsigned long InternalAddRef();
			public:
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			class RuntimeClassImpl<RuntimeClassFlags<6>,0,0,0,IClassFactory,Nil,Nil,Nil,Nil>
			{
			protected:
				unsigned long InternalAddRef();
			};

			class StaticStorage<DefaultModule<1>,0,int>
			{
				static StaticStorage<DefaultModule<1>,0,int> instance_;
			public:
				~StaticStorage<DefaultModule<1>,0,int>();
			};

			bool TerminateMap(Details::ModuleBase *,unsigned short const *,bool);
			long CreateClassFactory<SimpleClassFactory<NgcPinProvider,0> >(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long GetCacheEntry(Details::ModuleBase *,unsigned int *,_GUID const &,Details::CreatorMap const *,IUnknown * *);
			long MakeAndInitialize<NgcPinCredentialLogonUILocal,ICredentialProviderCredential,NgcPinCredentialLogonUIInitializationContext &>(ICredentialProviderCredential * *,NgcPinCredentialLogonUIInitializationContext &);
			long MakeAndInitialize<NgcPinCredentialLogonUIOtherUser,ICredentialProviderCredential,NgcPinCredentialLogonUIInitializationContext &>(ICredentialProviderCredential * *,NgcPinCredentialLogonUIInitializationContext &);
			long MakeAndInitialize<NgcPinCredentialLogonUIRecovery,ICredentialProviderCredential,NgcPinCredentialLogonUIInitializationContext &>(ICredentialProviderCredential * *,NgcPinCredentialLogonUIInitializationContext &);
			long MakeAndInitialize<NgcPinCredentialLogonUIResetStatus,ICredentialProviderCredential,NgcPinCredentialLogonUIInitializationContext &>(ICredentialProviderCredential * *,NgcPinCredentialLogonUIInitializationContext &);
			long MakeAndInitialize<NgcPinCredentialLogonUISetup,ICredentialProviderCredential,NgcPinCredentialLogonUIInitializationContext &>(ICredentialProviderCredential * *,NgcPinCredentialLogonUIInitializationContext &);
			long MakeAndInitialize<NgcPinCredentialNegotiate,ICredentialProviderCredential,NgcPinCredentialLogonUIInitializationContext &>(ICredentialProviderCredential * *,NgcPinCredentialLogonUIInitializationContext &);
			unsigned long SafeUnknownDecrementReference(long volatile &);
			unsigned long SafeUnknownIncrementReference(long volatile &);
			void RaiseException(long,unsigned long);
		};

		class Module<1,Details::DefaultModule<1> >
		{
			static bool isInitialized;
		protected:
			static _RTL_RUN_ONCE initOnceInProc_;
		public:
			static Details::DefaultModule<1> & Create();
			virtual long RegisterCOMObject(unsigned short const *,_GUID *,IClassFactory * *,unsigned long *,unsigned int);
			virtual long RegisterWinRTObject(unsigned short const *,unsigned short const * *,_RO_REGISTRATION_COOKIE * *,unsigned int);
			virtual long UnregisterCOMObject(unsigned short const *,unsigned long *,unsigned int);
			virtual long UnregisterWinRTObject(unsigned short const *,_RO_REGISTRATION_COOKIE *);
			virtual unsigned long DecrementObjectCount();
			virtual unsigned long IncrementObjectCount();
			virtual ~Module<1,Details::DefaultModule<1> >();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,ICredentialProviderCredentialWithWebDialog,NgcPinCredentialLogonUI>
		{
			RuntimeClass<RuntimeClassFlags<2>,ICredentialProviderCredentialWithWebDialog,NgcPinCredentialLogonUI>();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,NgcPinCredentialCredUI>
		{
			RuntimeClass<RuntimeClassFlags<2>,NgcPinCredentialCredUI>();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,NgcPinCredentialLogonUI>
		{
			RuntimeClass<RuntimeClassFlags<2>,NgcPinCredentialLogonUI>();
		};

		struct SimpleClassFactory<NgcPinProvider,0>
		{
			virtual long CreateInstance(IUnknown *,_GUID const &,void * *);
		};

		namespace Wrappers
		{
			namespace Details
			{
				struct SyncLockCriticalSection
				{
					~SyncLockCriticalSection();
				};

				struct SyncLockExclusive
				{
					~SyncLockExclusive();
				};

			};

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

			class HandleT<LsaHandleTraits>
			{
			protected:
				virtual bool InternalClose();
			public:
				void Close();
				~HandleT<LsaHandleTraits>();
			};

			class HandleT<LsaPolicyHandleTraits>
			{
			protected:
				virtual bool InternalClose();
			public:
				void Close();
				~HandleT<LsaPolicyHandleTraits>();
			};

			class HandleT<NCryptKeyHandleTraits>
			{
			protected:
				virtual bool InternalClose();
			public:
				void Close();
				~HandleT<NCryptKeyHandleTraits>();
			};

			class HandleT<NCryptProvHandleTraits>
			{
			protected:
				virtual bool InternalClose();
			public:
				void Close();
				~HandleT<NCryptProvHandleTraits>();
			};

			class HandleT<RegKeyHandleTraits>
			{
			protected:
				virtual bool InternalClose();
			public:
				void Close();
				~HandleT<RegKeyHandleTraits>();
			};

			class HandleT<RpcBindingHandleTraits>
			{
			protected:
				virtual bool InternalClose();
			public:
				void Close();
				~HandleT<RpcBindingHandleTraits>();
			};

			class HandleT<SecurityDescriptorTraits>
			{
			protected:
				virtual bool InternalClose();
			public:
				void Close();
				~HandleT<SecurityDescriptorTraits>();
			};

			struct SRWLock
			{
				Details::SyncLockExclusive LockExclusive();
				~SRWLock();
			};

		};

	};

};

namespace NgcCredProv
{
	struct NgcPinResetScenarioInfo
	{
		virtual long AreScenarioPrerequisitesSatisfied(ScenarioPrerequisitesStatus *);
		virtual long IsScenarioEnabled(bool *);
	};

	struct NgcPinResetScenarioInfoAad
	{
		virtual long AreScenarioPrerequisitesSatisfied(ScenarioPrerequisitesStatus *);
		virtual long GetScenarioUserAuthType(UserAuthType *);
		virtual long IsScenarioEnabled(bool *);
		virtual long SetScenarioData(unsigned short const *);
	};

	struct NgcPinResetScenarioInfoDomain
	{
		virtual long AreScenarioPrerequisitesSatisfied(ScenarioPrerequisitesStatus *);
		virtual long GetScenarioUserAuthType(UserAuthType *);
		virtual long IsScenarioEnabled(bool *);
		virtual long SetScenarioData(unsigned short const *);
	};

	struct NgcPinResetScenarioInfoMsa
	{
		virtual long AreScenarioPrerequisitesSatisfied(ScenarioPrerequisitesStatus *);
		virtual long GetScenarioUserAuthType(UserAuthType *);
		virtual long IsScenarioEnabled(bool *);
		virtual long SetScenarioData(unsigned short const *);
	};

	long BuildPinPolicyDetailsString(NgcPolicy::NgcPolicy const &,unsigned short * *);
	long BuildPinPolicyValidationErrorString(NgcPolicy::NgcPolicy const &,PinPolicy::PinValidationResult,unsigned short * *);
	long ClearPinResetInProgressUser();
	long GetAadWebSignInInfo(unsigned short const *,unsigned short const *,aad::UserIntention,unsigned short * *,unsigned char * *,unsigned long *);
	long GetComputerNameW(unsigned short * *);
	long GetPinBlockProtectionText(bool,unsigned short * *);
	long GetPinResetInProgressUser(unsigned short * *);
	long GetProgressiveLockoutText(unsigned long,TraceLoggingCorrelationVector *,unsigned short * *);
	long GetSoftLockoutText(TraceLoggingCorrelationVector *,unsigned short * *);
	long GetTpmLockoutText(NgcUtils::UserAccountType,TraceLoggingCorrelationVector *,unsigned short * *);
	long GetUserAssociatedSessionId(unsigned short const *,unsigned long *);
	long IsPinResetScenarioEnabled(NgcCredProv::PinResetSupportedScenario,bool *);
	long RespondToPinTypeCheckboxClick(ICredentialProviderCredential *,ICredentialProviderCredentialEvents2 *,NgcPinCredentialType,bool,bool);
	long SetPinResetInProgressUser(unsigned short const *);
	long ShowForgotPinDetails(ICredentialProviderCredentialEvents2 *,NgcPinCredentialType);
	long ShowPinPolicyDetails(ICredentialProviderCredentialEvents2 *,NgcPinCredentialType,NgcPolicy::NgcPolicy const &);
};

struct NgcCredProvLogProvider
{
	class ChangeUIDisposition
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(TraceLoggingCorrelationVector *,unsigned long);
		~ChangeUIDisposition();
	};

	class CommandLinkClicked
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(TraceLoggingCorrelationVector *,unsigned long,unsigned long);
		~CommandLinkClicked();
	};

	class GetSerialization
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void GetSerializationResponseFailure(unsigned long,unsigned short const *,unsigned long);
		void StartActivity(TraceLoggingCorrelationVector *,unsigned long);
		~GetSerialization();
	};

	class HandlePinChangeError
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(TraceLoggingCorrelationVector *,long);
		~HandlePinChangeError();
	};

	class HandleSerializationError
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(TraceLoggingCorrelationVector *,long);
		~HandleSerializationError();
	};

	class SerializeResponseInternal
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(TraceLoggingCorrelationVector *,unsigned long,bool,unsigned long,bool,unsigned long,unsigned long,bool,bool,unsigned long,bool,bool,bool);
		~SerializeResponseInternal();
	};

	class WebDialogLinkClick
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(TraceLoggingCorrelationVector *,WebDialogLinkClickIntent);
		~WebDialogLinkClick();
	};

	class WebDialogVisibilityChange
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(TraceLoggingCorrelationVector *,bool);
		~WebDialogVisibilityChange();
	};

	static _tlgProvider_t const * Provider();
	static void FallbackTelemetryCallback(bool,wil::FailureInfo const &);
	static void InitializationContext(TraceLoggingCorrelationVector *,unsigned long,unsigned long,unsigned short const *,unsigned long,unsigned long,bool);
	static void NgcUpsellProvisioningInitiated(TraceLoggingCorrelationVector *);
	static void NgcUpsellTileSelected(TraceLoggingCorrelationVector *,unsigned long);
	static void UnexpectedAuthenticationError(TraceLoggingCorrelationVector *,unsigned long,bool,bool,long,long);
	static void UserHitLockoutUI(TraceLoggingCorrelationVector *,unsigned long);
	static void WebDialogReportResult(TraceLoggingCorrelationVector *,long,long);
};

class NgcPinCredential
{
protected:
	static bool ArePinCharactersValid(std::basic_string<unsigned short,std::char_traits<unsigned short>,wil::secure_allocator<unsigned short> > const &);
	static bool IsChallengePhraseValid(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &);
	virtual long AdviseInternal(ICredentialProviderCredentialEvents *);
	virtual long CommandLinkClickedInternal(unsigned long);
	virtual long GetAccessibilityTextForFieldInternal(unsigned long,unsigned short * *);
	virtual long GetBitmapBufferValueInternal(unsigned long,unsigned long *,unsigned char * *);
	virtual long GetBitmapValueInternal(unsigned long,HBITMAP__ * *);
	virtual long GetCheckboxValueInternal(unsigned long,int *,unsigned short * *);
	virtual long GetComboBoxValueAtInternal(unsigned long,unsigned long,unsigned short * *);
	virtual long GetComboBoxValueCountInternal(unsigned long,unsigned long *,unsigned long *);
	virtual long GetIsAccessibilityViewRawForFieldInternal(unsigned long,int *);
	virtual long GetSerializationInternal(_CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE *,_CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION *,unsigned short * *,_CREDENTIAL_PROVIDER_STATUS_ICON *);
	virtual long GetStringValueInternal(unsigned long,unsigned short * *);
	virtual long GetSubmitButtonValueInternal(unsigned long,unsigned long *);
	virtual long GetTextFieldMaxLengthInternal(unsigned long,unsigned long *);
	virtual long GetUserSidInternal(unsigned short * *);
	virtual long ReportResultInternal(long,long,unsigned short * *,_CREDENTIAL_PROVIDER_STATUS_ICON *);
	virtual long SetCheckboxValueInternal(unsigned long,int);
	virtual long SetComboBoxSelectedValueInternal(unsigned long,unsigned long);
	virtual long SetDeselectedInternal();
	virtual long SetSelectedInternal(int *);
	virtual long SetStringValueInternal(unsigned long,unsigned short const *);
	virtual long ShouldHideCredUISubmitButtonInternal(int *);
	virtual long UnAdviseInternal();
public:
	virtual long Advise(ICredentialProviderCredentialEvents *);
	virtual long CommandLinkClicked(unsigned long);
	virtual long GetAccessibilityTextForField(unsigned long,unsigned short * *);
	virtual long GetBitmapBufferValue(unsigned long,unsigned long *,unsigned char * *);
	virtual long GetBitmapValue(unsigned long,HBITMAP__ * *);
	virtual long GetCheckboxValue(unsigned long,int *,unsigned short * *);
	virtual long GetComboBoxValueAt(unsigned long,unsigned long,unsigned short * *);
	virtual long GetComboBoxValueCount(unsigned long,unsigned long *,unsigned long *);
	virtual long GetFieldOptions(unsigned long,CREDENTIAL_PROVIDER_CREDENTIAL_FIELD_OPTIONS *);
	virtual long GetFieldState(unsigned long,_CREDENTIAL_PROVIDER_FIELD_STATE *,_CREDENTIAL_PROVIDER_FIELD_INTERACTIVE_STATE *);
	virtual long GetIsAccessibilityViewRawForField(unsigned long,int *);
	virtual long GetSerialization(_CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE *,_CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION *,unsigned short * *,_CREDENTIAL_PROVIDER_STATUS_ICON *);
	virtual long GetStringValue(unsigned long,unsigned short * *);
	virtual long GetSubmitButtonValue(unsigned long,unsigned long *);
	virtual long GetTextFieldMaxLength(unsigned long,unsigned long *);
	virtual long GetUserSid(unsigned short * *);
	virtual long ReportResult(long,long,unsigned short * *,_CREDENTIAL_PROVIDER_STATUS_ICON *);
	virtual long SetCheckboxValue(unsigned long,int);
	virtual long SetComboBoxSelectedValue(unsigned long,unsigned long);
	virtual long SetDeselected();
	virtual long SetSelected(int *);
	virtual long SetStringValue(unsigned long,unsigned short const *);
	virtual long ShouldHideCredUISubmitButton(int *);
	virtual long UnAdvise();
};

class NgcPinCredentialContainerCreation
{
	long ClearPin();
	long ShowPinPolicyDetails();
	virtual long CommandLinkClickedInternal(unsigned long);
	virtual long GetCheckboxValueInternal(unsigned long,int *,unsigned short * *);
	virtual long GetFieldOptionsInternal(unsigned long,CREDENTIAL_PROVIDER_CREDENTIAL_FIELD_OPTIONS *);
	virtual long GetStringValueInternal(unsigned long,unsigned short * *);
	virtual long SerializeResponse(unsigned char * *,unsigned long *,bool *,_CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE *,unsigned short * *);
	virtual long SetCheckboxValueInternal(unsigned long,int);
	virtual long SetDeselectedInternal();
	virtual long SetSelectedInternal(int *);
	virtual long SetStringValueInternal(unsigned long,unsigned short const *);
	virtual long ValidateCredential(bool *,unsigned short * *);
	void InitializeDefaultFieldStateInfo();
public:
	NgcPinCredentialContainerCreation();
	virtual long RuntimeClassInitialize(unsigned char const *,unsigned long);
	virtual ~NgcPinCredentialContainerCreation();
};

class NgcPinCredentialCredUI
{
protected:
	virtual long GetBitmapBufferValueInternal(unsigned long,unsigned long *,unsigned char * *);
	virtual long GetFieldStateInternal(unsigned long,_CREDENTIAL_PROVIDER_FIELD_STATE *,_CREDENTIAL_PROVIDER_FIELD_INTERACTIVE_STATE *);
};

class NgcPinCredentialCredUIPinChange
{
	long ClearPin();
	long ShowPinPolicyDetails();
	virtual long CommandLinkClickedInternal(unsigned long);
	virtual long GetCheckboxValueInternal(unsigned long,int *,unsigned short * *);
	virtual long GetFieldOptionsInternal(unsigned long,CREDENTIAL_PROVIDER_CREDENTIAL_FIELD_OPTIONS *);
	virtual long GetStringValueInternal(unsigned long,unsigned short * *);
	virtual long SerializeResponse(unsigned char * *,unsigned long *,bool *,_CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE *,unsigned short * *);
	virtual long SetCheckboxValueInternal(unsigned long,int);
	virtual long SetDeselectedInternal();
	virtual long SetSelectedInternal(int *);
	virtual long SetStringValueInternal(unsigned long,unsigned short const *);
	virtual long ValidateCredential(bool *,unsigned short * *);
	void InitializeDefaultFieldStateInfo();
public:
	NgcPinCredentialCredUIPinChange();
	virtual long RuntimeClassInitialize(unsigned char const *,unsigned long);
	virtual ~NgcPinCredentialCredUIPinChange();
};

class NgcPinCredentialLogonUI
{
protected:
	virtual long GetBitmapBufferValueInternal(unsigned long,unsigned long *,unsigned char * *);
	virtual long GetCheckboxValueInternal(unsigned long,int *,unsigned short * *);
	virtual long GetCredentialMethodInternal(_CREDENTIAL_METHOD_FLAGS *);
	virtual long GetFieldStateInternal(unsigned long,_CREDENTIAL_PROVIDER_FIELD_STATE *,_CREDENTIAL_PROVIDER_FIELD_INTERACTIVE_STATE *);
	virtual long GetSubmissionOptionsInternal(SERIALIZATION_FLAGS *,unsigned short * *);
	virtual long GetSubmitButtonValueInternal(unsigned long,unsigned long *);
	virtual long GetUIModeInternal(_CREDENTIAL_PROVIDER_CREDENTIAL_UI_MODE *);
	virtual long GetUserSidInternal(unsigned short * *);
	virtual long ReportResultInternal(long,long,unsigned short * *,_CREDENTIAL_PROVIDER_STATUS_ICON *);
public:
	NgcPinCredentialLogonUI();
	virtual long GetCredentialMethod(_CREDENTIAL_METHOD_FLAGS *);
	virtual long GetSubmissionOptions(SERIALIZATION_FLAGS *,unsigned short * *);
	virtual long GetUIMode(_CREDENTIAL_PROVIDER_CREDENTIAL_UI_MODE *);
	virtual ~NgcPinCredentialLogonUI();
};

struct NgcPinCredentialLogonUIInitializationContext
{
	NgcPinCredentialLogonUIInitializationContext();
	void Initialize(unsigned short const * const,unsigned short const * const,unsigned short const * const,NgcUtils::UserAccountType,_GUID const &,NgcPinCredentialScenario,bool,unsigned short const * const,bool);
	void SetScenarioData(CflScenarioData);
	~NgcPinCredentialLogonUIInitializationContext();
};

class NgcPinCredentialLogonUILocal
{
protected:
	long BuildSystemLogonErrorString(long,long,unsigned short * *);
	long ClearPin();
	long GetPinProperties(bool *,unsigned long *,unsigned long *,unsigned long *,unsigned long *,bool *,unsigned long *,bool *);
	long HandlePinChangeError(long,unsigned char * *,unsigned long *,bool *,_CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE *,unsigned short * *);
	long HandleSerializationError(long,unsigned char * *,unsigned long *,bool *,_CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE *,unsigned short * *);
	long RespondToWebSignInRequest();
	long SerializeAutologonResponse(unsigned char * *,unsigned long *,bool *,_CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE *,unsigned short * *);
	long SerializeConvenienceResponse(unsigned char * *,unsigned long *,bool *,_CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE *,unsigned short * *);
	long SerializeNgcResponse(unsigned char * *,unsigned long *,bool *,_CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE *,unsigned short * *);
	long SerializeNgcSspiResponse(unsigned char * *,unsigned long *,bool *,_CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE *,unsigned short * *);
	long SerializePasswordChangeResponse(unsigned char * *,unsigned long *,bool *,_CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE *,unsigned short * *);
	long SerializePasswordResponse(unsigned char * *,unsigned long *,bool *,_CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE *,unsigned short * *);
	long SerializePinChangeResponse(unsigned char * *,unsigned long *,bool *,_CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE *,unsigned short * *);
	long SerializeResponseInternal(unsigned char * *,unsigned long *,bool *,_CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE *,unsigned short * *);
	long SerializeSmartCardCredUINegoResponse(unsigned char * *,unsigned long *,bool *,_CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE *,unsigned short * *);
	long SetupWebSignInAuthEnvironment();
	long ShowPinPolicyDetails();
	long ValidateChallengePhrase(bool *,unsigned short * *);
	long ValidateNewPassword(bool *,unsigned short * *);
	long ValidateNewPin(bool *,unsigned short * *);
	long ValidatePassword(bool *,unsigned short * *);
	long ValidatePin(bool *,unsigned short * *);
	long WillNextPinAttemptWipeDevice(bool *);
	virtual long AdviseInternal(ICredentialProviderCredentialEvents *);
	virtual long BuildLogonErrorString(long,long,unsigned short * *);
	virtual long BuildLogonSuccessString(unsigned short * *);
	virtual long ChangeUIDisposition(NgcPinCredentialLogonUILocal::UITransition);
	virtual long CommandLinkClickedInternal(unsigned long);
	virtual long GetCheckboxValueInternal(unsigned long,int *,unsigned short * *);
	virtual long GetFieldOptionsInternal(unsigned long,CREDENTIAL_PROVIDER_CREDENTIAL_FIELD_OPTIONS *);
	virtual long GetStringValueInternal(unsigned long,unsigned short * *);
	virtual long GetSubmissionOptionsInternal(SERIALIZATION_FLAGS *,unsigned short * *);
	virtual long GetSubmitButtonValueInternal(unsigned long,unsigned long *);
	virtual long GetTextFieldMaxLengthInternal(unsigned long,unsigned long *);
	virtual long GetUIModeInternal(_CREDENTIAL_PROVIDER_CREDENTIAL_UI_MODE *);
	virtual long GetWebDialogUrlInternal(unsigned short * *);
	virtual long OnWebDialogVisiblityChangeInternal(int);
	virtual long RespondToForgotPinRequest();
	virtual long RespondToLegacyForgotPinRequest();
	virtual long RespondToReportResult(long,long);
	virtual long SerializeResponse(unsigned char * *,unsigned long *,bool *,_CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE *,unsigned short * *);
	virtual long SetCheckboxValueInternal(unsigned long,int);
	virtual long SetDeselectedInternal();
	virtual long SetSelectedInternal(int *);
	virtual long SetStringValueInternal(unsigned long,unsigned short const *);
	virtual long UnAdviseInternal();
	virtual long ValidateCredential(bool *,unsigned short * *);
	void InitializeDefaultFieldStateInfo();
public:
	NgcPinCredentialLogonUILocal();
	virtual long GetWebDialogUrl(unsigned short * *);
	virtual long OnWebDialogVisiblityChange(int);
	virtual long RuntimeClassInitialize(NgcPinCredentialLogonUIInitializationContext const &);
	virtual ~NgcPinCredentialLogonUILocal();
};

class NgcPinCredentialLogonUIOtherUser
{
	long ClearUserName();
	long GiveFocusToEditBoxField(NgcPinFieldIdLogonUI);
	long InvalidateUserInformation();
	long ValidateUserName(bool *,unsigned short * *);
	virtual long BuildLogonErrorString(long,long,unsigned short * *);
	virtual long ChangeUIDisposition(NgcPinCredentialLogonUILocal::UITransition);
	virtual long GetFieldOptionsInternal(unsigned long,CREDENTIAL_PROVIDER_CREDENTIAL_FIELD_OPTIONS *);
	virtual long GetStringValueInternal(unsigned long,unsigned short * *);
	virtual long RespondToForgotPinRequest();
	virtual long RespondToLegacyForgotPinRequest();
	virtual long SetDeselectedInternal();
	virtual long SetSelectedInternal(int *);
	virtual long SetStringValueInternal(unsigned long,unsigned short const *);
	virtual long ValidateCredential(bool *,unsigned short * *);
	void InitializeDefaultFieldStateInfo();
public:
	NgcPinCredentialLogonUIOtherUser();
	virtual long RuntimeClassInitialize(NgcPinCredentialLogonUIInitializationContext const &);
	virtual ~NgcPinCredentialLogonUIOtherUser();
};

class NgcPinCredentialLogonUIRecovery
{
	virtual long BuildLogonErrorString(long,long,unsigned short * *);
	virtual long BuildLogonSuccessString(unsigned short * *);
	virtual long GetFieldOptionsInternal(unsigned long,CREDENTIAL_PROVIDER_CREDENTIAL_FIELD_OPTIONS *);
	virtual long GetStringValueInternal(unsigned long,unsigned short * *);
	virtual long GetUIModeInternal(_CREDENTIAL_PROVIDER_CREDENTIAL_UI_MODE *);
	virtual long RespondToReportResult(long,long);
	virtual long SerializeResponse(unsigned char * *,unsigned long *,bool *,_CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE *,unsigned short * *);
	virtual long ValidateCredential(bool *,unsigned short * *);
	void InitializeDefaultFieldStateInfo();
public:
	NgcPinCredentialLogonUIRecovery();
	virtual long RuntimeClassInitialize(NgcPinCredentialLogonUIInitializationContext const &);
};

class NgcPinCredentialLogonUIResetStatus
{
	long RespondToCancelResetLink();
	long UpdateResetScenarioProgress(_NgcPinResetScenarioState);
	static long GetResetScenarioProgressText(_NgcPinResetScenarioState,unsigned short * *);
	virtual long AdviseInternal(ICredentialProviderCredentialEvents *);
	virtual long BuildLogonErrorString(long,long,unsigned short * *);
	virtual long BuildLogonSuccessString(unsigned short * *);
	virtual long CommandLinkClickedInternal(unsigned long);
	virtual long GetFieldOptionsInternal(unsigned long,CREDENTIAL_PROVIDER_CREDENTIAL_FIELD_OPTIONS *);
	virtual long GetStringValueInternal(unsigned long,unsigned short * *);
	virtual long GetSubmissionOptionsInternal(SERIALIZATION_FLAGS *,unsigned short * *);
	virtual long GetUIModeInternal(_CREDENTIAL_PROVIDER_CREDENTIAL_UI_MODE *);
	virtual long RespondToReportResult(long,long);
	virtual long SerializeResponse(unsigned char * *,unsigned long *,bool *,_CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE *,unsigned short * *);
	virtual long UnAdviseInternal();
	virtual long ValidateCredential(bool *,unsigned short * *);
	void DismissLockscreenIfAppropriate(_NgcPinResetScenarioState);
	void InitializeDefaultFieldStateInfo();
public:
	NgcPinCredentialLogonUIResetStatus();
	virtual long RuntimeClassInitialize(NgcPinCredentialLogonUIInitializationContext const &);
	virtual ~NgcPinCredentialLogonUIResetStatus();
};

class NgcPinCredentialLogonUISetup
{
	long ClearPassword();
	virtual long BuildLogonErrorString(long,long,unsigned short * *);
	virtual long BuildLogonSuccessString(unsigned short * *);
	virtual long GetFieldOptionsInternal(unsigned long,CREDENTIAL_PROVIDER_CREDENTIAL_FIELD_OPTIONS *);
	virtual long GetStringValueInternal(unsigned long,unsigned short * *);
	virtual long GetSubmitButtonValueInternal(unsigned long,unsigned long *);
	virtual long RespondToReportResult(long,long);
	virtual long SerializeResponse(unsigned char * *,unsigned long *,bool *,_CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE *,unsigned short * *);
	virtual long SetSelectedInternal(int *);
	virtual long SetStringValueInternal(unsigned long,unsigned short const *);
	virtual long ValidateCredential(bool *,unsigned short * *);
	void InitializeDefaultFieldStateInfo();
public:
	NgcPinCredentialLogonUISetup();
	virtual long RuntimeClassInitialize(NgcPinCredentialLogonUIInitializationContext const &);
};

class NgcPinCredentialNegotiate
{
	virtual long CommandLinkClickedInternal(unsigned long);
	virtual long GetFieldOptionsInternal(unsigned long,CREDENTIAL_PROVIDER_CREDENTIAL_FIELD_OPTIONS *);
	virtual long GetStringValueInternal(unsigned long,unsigned short * *);
	virtual long GetUserSidInternal(unsigned short * *);
	virtual long SetSelectedInternal(int *);
	virtual long ShouldHideCredUISubmitButtonInternal(int *);
	void InitializeDefaultFieldStateInfo();
public:
	NgcPinCredentialNegotiate();
	virtual long RuntimeClassInitialize(NgcPinCredentialLogonUIInitializationContext const &);
	virtual ~NgcPinCredentialNegotiate();
};

class NgcPinCredentialPinCollection
{
	long ClearPin();
	long RespondToUseAltCredLinkClick();
	virtual long CommandLinkClickedInternal(unsigned long);
	virtual long GetCheckboxValueInternal(unsigned long,int *,unsigned short * *);
	virtual long GetFieldOptionsInternal(unsigned long,CREDENTIAL_PROVIDER_CREDENTIAL_FIELD_OPTIONS *);
	virtual long GetStringValueInternal(unsigned long,unsigned short * *);
	virtual long GetTextFieldMaxLengthInternal(unsigned long,unsigned long *);
	virtual long SerializeResponse(unsigned char * *,unsigned long *,bool *,_CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE *,unsigned short * *);
	virtual long SetDeselectedInternal();
	virtual long SetSelectedInternal(int *);
	virtual long SetStringValueInternal(unsigned long,unsigned short const *);
	virtual long ShouldHideCredUISubmitButtonInternal(int *);
	virtual long ValidateCredential(bool *,unsigned short * *);
	void InitializeDefaultFieldStateInfo();
public:
	NgcPinCredentialPinCollection();
	virtual long RuntimeClassInitialize(unsigned char const *,unsigned long);
};

class NgcPinCredentialPreboot
{
	long BuildSerializationBlob();
	virtual long BuildLogonErrorString(long,long,unsigned short * *);
	virtual long BuildLogonSuccessString(unsigned short * *);
	virtual long GetFieldOptionsInternal(unsigned long,CREDENTIAL_PROVIDER_CREDENTIAL_FIELD_OPTIONS *);
	virtual long GetStringValueInternal(unsigned long,unsigned short * *);
	virtual long ReportResultInternal(long,long,unsigned short * *,_CREDENTIAL_PROVIDER_STATUS_ICON *);
	virtual long RespondToReportResult(long,long);
	virtual long SerializeResponse(unsigned char * *,unsigned long *,bool *,_CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE *,unsigned short * *);
	virtual long SetSelectedInternal(int *);
	virtual long ValidateCredential(bool *,unsigned short * *);
public:
	NgcPinCredentialPreboot();
	long RuntimeClassInitialize(std::vector<unsigned char,std::allocator<unsigned char> > const &,std::vector<unsigned char,wil::secure_allocator<unsigned char> > const &,bool,std::function<long (long)> const &);
	virtual long RuntimeClassInitialize(NgcPinCredentialLogonUIInitializationContext const &);
	virtual ~NgcPinCredentialPreboot();
};

struct NgcPinProvider
{
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

struct NgcPinScenario
{
	struct UserAuthInfo
	{
		~UserAuthInfo();
	};

	NgcPinScenario();
	virtual long SetDisplayState(_CREDENTIAL_PROVIDER_DISPLAY_STATE_FLAGS);
	virtual long SetSessionContext(unsigned short const *);
	virtual long SetUserArray(ICredentialProviderUserArray *);
};

class NgcPinScenarioCredUI
{
	long BuildCredentialList(unsigned long *);
	long GetAdminsNegotiateCredentials(unsigned long *,std::vector<Microsoft::WRL::ComPtr<ICredentialProviderCredential>,std::allocator<Microsoft::WRL::ComPtr<ICredentialProviderCredential> > > *);
	long GetCurrentUserNegotiateCredentials(unsigned long *,std::vector<Microsoft::WRL::ComPtr<ICredentialProviderCredential>,std::allocator<Microsoft::WRL::ComPtr<ICredentialProviderCredential> > > *);
	long GetInCredNegotiateCredentials(unsigned char const *,unsigned long,bool,unsigned long *,std::vector<Microsoft::WRL::ComPtr<ICredentialProviderCredential>,std::allocator<Microsoft::WRL::ComPtr<ICredentialProviderCredential> > > *);
	long GetNegotiateCredentials(unsigned char const *,unsigned long,bool,unsigned long *,std::vector<Microsoft::WRL::ComPtr<ICredentialProviderCredential>,std::allocator<Microsoft::WRL::ComPtr<ICredentialProviderCredential> > > *);
	long GetNegotiateCredentialsFromUserArray(unsigned long *,std::vector<Microsoft::WRL::ComPtr<ICredentialProviderCredential>,std::allocator<Microsoft::WRL::ComPtr<ICredentialProviderCredential> > > *);
public:
	NgcPinScenarioCredUI();
	virtual long Advise(ICredentialProviderEvents *,unsigned __int64);
	virtual long GetCredentialAt(unsigned long,ICredentialProviderCredential * *);
	virtual long GetCredentialCount(unsigned long *,unsigned long *,int *);
	virtual long GetFieldDescriptorAt(unsigned long,_CREDENTIAL_PROVIDER_FIELD_DESCRIPTOR * *);
	virtual long GetFieldDescriptorCount(unsigned long *);
	virtual long SetSerialization(_CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION const *);
	virtual long SetUsageScenario(_CREDENTIAL_PROVIDER_USAGE_SCENARIO,unsigned long);
	virtual long UnAdvise();
	virtual ~NgcPinScenarioCredUI();
};

class NgcPinScenarioLogonUI
{
	long BuildCredentialListInternal(unsigned long *);
	long BuildPrebootCredentialList();
	long CredentialRefreshRequiredCallback(NgcWnf::CredentialRefreshRequiredStateData const &);
	long LogonFailureNotificationRoutine(long);
	long RequestDismissLockscreen();
	long RequestExpandSignInOptions();
	long RequestSetScenarioData(CflScenarioData const &);
	static bool HasSamUserEverSignedIn(unsigned short const *);
	static bool IsConsumerNgcAllowedByPolicy(unsigned short const *);
	static bool IsCurrentSessionRemote();
	static bool IsIsoContainerDisabledByPolicy(unsigned short const *);
public:
	NgcPinScenarioLogonUI();
	virtual long Advise(ICredentialProviderEvents *,unsigned __int64);
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

namespace NgcPolicy
{
	struct NgcPinPolicy
	{
		long Initialize(unsigned long,unsigned long,_PIN_CHARACTER_POLICY_OPTION,_PIN_CHARACTER_POLICY_OPTION,_PIN_CHARACTER_POLICY_OPTION,_PIN_CHARACTER_POLICY_OPTION,int,unsigned long,unsigned long);
	};

	struct NgcPolicy
	{
		long Initialize(_NGC_BIOMETRICS_POLICY,_NGC_SMART_CARD_POLICY,_NGC_HARDWARE_POLICY);
		long Initialize(_NGC_BIOMETRICS_POLICY,_NGC_SMART_CARD_POLICY,_NGC_HARDWARE_POLICY,NgcPinPolicy const &);
		long Initialize(std::vector<unsigned char,std::allocator<unsigned char> > const &);
	};

	long GetPinPolicyType(NgcPolicy::NgcPolicy const &,NgcPolicy::NgcPinPolicyType *);
	long MakePolicyNumericOnly(NgcPolicy::NgcPolicy const &,NgcPolicy::NgcPolicy *);
};

namespace NgcPreboot
{
	long ClearProvisioningRequiredFlag(unsigned short const *,NgcPreboot::AccountCapability);
	long GetPrebootCredential(std::vector<unsigned char,std::allocator<unsigned char> > *,std::vector<unsigned char,wil::secure_allocator<unsigned char> > *,unsigned long *);
	long IsAccountEnabled(unsigned short const *,NgcPreboot::AccountCapability,bool *,bool *);
	long IsAccountEnabled(void * const,NgcPreboot::AccountCapability,bool *,bool *);
	long IsFeatureEnabled(bool *,bool *);
	long ProvisionAccount(unsigned short const *,unsigned short const *,unsigned short const *,bool);
};

class NgcStatusStorage
{
	static unsigned long ReadKey(HKEY__ *,unsigned short const *,_GUID,STRUCT_NGC_REG_KEY *);
public:
	STRUCT_NGC_REG_KEY GetKey();
	long Load();
	long Load(HKEY__ *,unsigned short const *);
	static int IsKeyIdEmpty(_GUID const *);
	void Cleanup();
};

namespace NgcUtils
{
	struct CoInitializer
	{
		~CoInitializer();
	};

	namespace Detail
	{
		long CacheCleanupMultipleSidsForUser();
		long CacheCleanupMultipleUsersForSid();
		long CacheGetUserNameAndDomain(void * const,bool,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *);
		long CacheGetUserSid(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,std::vector<unsigned char,std::allocator<unsigned char> > *);
		long CachePreventDuplicateUserInfo(void * const,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &);
		long CacheRemoveUser(unsigned short const * const);
		long CacheRemoveUser(unsigned short const * const,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &);
		long CacheUpdateVersion();
	};

	struct NgcKeyName
	{
		static long ParseNgcKeyNameString(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,std::vector<unsigned char,std::allocator<unsigned char> > *,_GUID *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *);
	};

	struct RegKeyIterator
	{
		struct Iterator
		{
			std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > operator*();
		};

		RegKeyIterator(HKEY__ *,unsigned short const *);
		~RegKeyIterator();
	};

	class RpcClient
	{
		long BindInternalNoLocking();
	public:
		RpcClient(unsigned long,unsigned long,unsigned long,unsigned long,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,_SID const *,void * const);
		long Rebind();
		void * BindingHandle();
		~RpcClient();
	};

	bool IsCurrentMachineDomainJoinedOrJoinedPlusPlus(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *);
	bool IsNegotiateInputSerializationBufferFromSspi(unsigned char const *,unsigned long);
	long AreLogonCredsAvailableForAnyUser(bool *);
	long CacheUserNameAndSid(void * const,unsigned short const *,bool);
	long CacheUserNameAndSid(void * const,unsigned short const *,unsigned short const *,bool);
	long CoMemAllocCopy(void const *,unsigned __int64,void * *);
	long CoMemResourceFormatStringAllocCopy(HINSTANCE__ *,unsigned int,unsigned short * *,...);
	long CoMemResourceStringAllocCopy(HINSTANCE__ *,unsigned int,unsigned short * *);
	long CombineSeparateStrings(unsigned short const *,unsigned short const *,unsigned short const *,unsigned short * *);
	long DeviceLockUpdatePinBlockProtectionStatus(bool);
	long DeviceLockUpdateValue(unsigned short const *,bool);
	long GetAuthPackageId(unsigned short const *,unsigned long *);
	long GetMachineName(unsigned short * *);
	long GetNgcStateSeparatedRegistryLocation(unsigned short const *,unsigned short const *,unsigned short const *,unsigned short * *);
	long GetQualifiedUserName(ICredentialProviderUser *,unsigned short * *);
	long GetUserAccountType(unsigned short const *,NgcUtils::UserAccountType *);
	long GetUserAccountType(void *,NgcUtils::UserAccountType *);
	long GetUserNameAndDomain(void * const,bool,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,bool *);
	long GetUserSid(unsigned short const *,std::vector<unsigned char,std::allocator<unsigned char> > *,bool *);
	long GetUserSignInInfo(std::vector<unsigned char,std::allocator<unsigned char> > *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,_NgcCredentialTypes *,_NgcDeploymentTypes *,unsigned long *);
	long IsCertTrustEnabled(bool *);
	long IsCloudTrustEnabled(bool *);
	long NgcCredProvEnumLogonKeys(std::vector<unsigned char,std::allocator<unsigned char> > const &,std::vector<std::shared_ptr<KeyEnumInfo>,std::allocator<std::shared_ptr<KeyEnumInfo> > > *);
	long NgcCredProvShouldShowNegoCredential(KeyEnumInfo const *,bool,bool,bool,bool,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,bool *);
	long QueryLogonCredsAvailableRegState(std::vector<unsigned char,std::allocator<unsigned char> > const &,NgcUtils::LogonCredsAvailableRegState *);
	void ConvertWideCharToMultiByte(std::basic_string<unsigned short,std::char_traits<unsigned short>,wil::secure_allocator<unsigned short> > const &,std::basic_string<char,std::char_traits<char>,wil::secure_allocator<char> > *);
};

namespace PinPolicy
{
	struct PinPolicyRules
	{
		long Initialize(std::vector<unsigned char,std::allocator<unsigned char> > const &);
		long ValidatePin(std::basic_string<unsigned short,std::char_traits<unsigned short>,wil::secure_allocator<unsigned short> > const &,PinValidationResult *);
		long ValidateRules();
		static bool DoesPinContainSequence(std::basic_string<unsigned short,std::char_traits<unsigned short>,wil::secure_allocator<unsigned short> > const &);
		static long ConvertFromSmartCardPinCharacterPolicyOption(Windows::Devices::SmartCards::SmartCardPinCharacterPolicyOption,_PIN_CHARACTER_POLICY_OPTION *);
	};

};

namespace PwdlessPlat
{
	class ImageCustomizations
	{
		void QueryCustomizations();
	public:
		ImageCustomizations();
	};

	long GetDwordRegistryValue(HKEY__ *,unsigned short const *,unsigned short const *,unsigned long *);
};

class RegistrationCertStatus
{
	static long GetCertificate(_CERTFICATE_LOCATION,char const *,unsigned short const *,unsigned short const *,INFO_KIND,_CERT_CONTEXT const * *);
	static long GetCertificates(_CERTFICATE_LOCATION,char const *,unsigned short const *,unsigned short const *,INFO_KIND,_CERT_CONTEXT const * * *,unsigned long *);
public:
	static long GetDeviceCertificate(unsigned short const *,INFO_KIND,_CERT_CONTEXT const * *);
	static long GetDeviceCertificates(unsigned short const *,INFO_KIND,_CERT_CONTEXT const * * *,unsigned long *);
	static long GetDeviceId(_CERT_CONTEXT const *,unsigned short * *);
	static long GetTenantId(_CERT_CONTEXT const *,unsigned short * *,int *);
	static long GetWorkplaceCertificates(unsigned short const *,INFO_KIND,_CERT_CONTEXT const * * *,unsigned long *);
};

class RegistryPath
{
	long Initialize(HKEY__ *,unsigned short const *,unsigned short const *);
	void Reset();
	void SetSubPath();
public:
	int Pop(int);
	long InitializeCurrentUserPath(unsigned long,unsigned short const *);
	long InitializePersistedStatePath(unsigned short const *,unsigned short const *,unsigned short const *);
	unsigned long Append(unsigned short const *);
	unsigned long OpenSubKey(unsigned long,HKEY__ * *,int);
	unsigned long OpenSubKey(unsigned long,int);
	unsigned long ReadDwordValue(unsigned short const *,unsigned long *,unsigned long);
	unsigned long ReadQwordValue(unsigned short const *,__int64 *,__int64);
	unsigned long ReadStringValue(unsigned short const *,unsigned short * *);
	unsigned long SubKeyExists(unsigned short const *,int *);
	void CloseSubKey();
};

struct SafeInt<__int64,SafeIntInternal::SafeIntExceptionHandler<SafeIntException> >
{
	SafeInt<__int64,SafeIntInternal::SafeIntExceptionHandler<SafeIntException> > operator*<unsigned __int64>(unsigned __int64);
};

struct SafeInt<unsigned __int64,SafeIntInternal::SafeIntExceptionHandler<SafeIntException> >
{
	SafeInt<unsigned __int64,SafeIntInternal::SafeIntExceptionHandler<SafeIntException> > operator+<__int64>(__int64);
};

namespace SafeIntInternal
{
	struct SafeIntExceptionHandler<SafeIntException>
	{
		static void SafeIntOnOverflow();
	};

};

namespace TLV
{
	void Base64Encode<129>(unsigned char const *,unsigned __int64,char (&)[129]);
};

class TraceLoggingCorrelationVector
{
	bool ToStringImpl(unsigned __int64,char *);
public:
	TraceLoggingCorrelationVector(TraceLoggingCorrelationVectorV2_t);
};

namespace Windows
{
	namespace Internal
	{
		class NativeString<CoTaskMemPolicy<unsigned short> >
		{
			long _InitializeFromRegistry(HKEY__ *,unsigned short const *,bool);
			void _Free();
		public:
			long Initialize(HKEY__ *,unsigned short const *,unsigned short const *);
			~NativeString<CoTaskMemPolicy<unsigned short> >();
		};

	};

};

class _TlgActivityBase<wil::ActivityBase<NgcCredProvLogProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<NgcCredProvLogProvider,_TlgReflectorTag_Param0IsProviderType>,70368744177664,5>
{
protected:
	~_TlgActivityBase<wil::ActivityBase<NgcCredProvLogProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<NgcCredProvLogProvider,_TlgReflectorTag_Param0IsProviderType>,70368744177664,5>();
};

class _TlgActivityBase<wil::ActivityBase<NgcCredProvLogProvider,1,70368744177664,5,16779264,_TlgReflectorTag_Param0IsProviderType>::ActivityData<NgcCredProvLogProvider,_TlgReflectorTag_Param0IsProviderType>,70368744177664,5>
{
protected:
	~_TlgActivityBase<wil::ActivityBase<NgcCredProvLogProvider,1,70368744177664,5,16779264,_TlgReflectorTag_Param0IsProviderType>::ActivityData<NgcCredProvLogProvider,_TlgReflectorTag_Param0IsProviderType>,70368744177664,5>();
};

class _TlgActivityBase<wil::ActivityBase<NgcCredProvLogProvider,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<NgcCredProvLogProvider,_TlgReflectorTag_Param0IsProviderType>,70368744177664,5>
{
protected:
	~_TlgActivityBase<wil::ActivityBase<NgcCredProvLogProvider,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<NgcCredProvLogProvider,_TlgReflectorTag_Param0IsProviderType>,70368744177664,5>();
};

struct _TlgCVGetter
{
	_TlgCVGetter(TraceLoggingCorrelationVector *);
};

struct _tlgWrapSz<unsigned short>
{
	_tlgWrapSz<unsigned short>(unsigned short const *);
};

struct _tlgWrapperByVal<4>
{
	_tlgWrapperByVal<4>(void const *);
	void * Fill(_EVENT_DATA_DESCRIPTOR *);
};

namespace std
{
	struct _Alloc_construct_ptr<allocator<_List_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> > >
	{
		~_Alloc_construct_ptr<allocator<_List_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> > >();
	};

	struct _Alloc_construct_ptr<allocator<_List_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> > >
	{
		~_Alloc_construct_ptr<allocator<_List_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> > >();
	};

	struct _Alloc_construct_ptr<allocator<_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,_FILETIME> >,void *> > >
	{
		~_Alloc_construct_ptr<allocator<_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,_FILETIME> >,void *> > >();
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

	struct _Fac_node
	{
		~_Fac_node();
	};

	struct _Fac_tidy_reg_t
	{
		~_Fac_tidy_reg_t();
	};

	struct _Func_class<bool,vector<unsigned char,allocator<unsigned char> >,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,bool>
	{
		bool operator()(vector<unsigned char,allocator<unsigned char> >,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,bool);
	};

	class _Func_class<long,CflScenarioData const &>
	{
	protected:
		void _Tidy();
	public:
		~_Func_class<long,CflScenarioData const &>();
	};

	class _Func_class<long,long>
	{
	protected:
		void _Tidy();
	public:
		~_Func_class<long,long>();
	};

	class _Func_impl_no_alloc<_Binder<_Unforced,long ( NgcPinScenarioLogonUI::*)(CflScenarioData const &),NgcPinScenarioLogonUI *,_Ph<1> const &>,long,CflScenarioData const &>
	{
		virtual _Func_base<long,CflScenarioData const &> * _Copy(void *);
		virtual _Func_base<long,CflScenarioData const &> * _Move(void *);
		virtual long _Do_call(CflScenarioData const &);
		virtual type_info const & _Target_type();
		virtual void _Delete_this(bool);
		virtual void const * _Get();
	};

	class _Func_impl_no_alloc<_Binder<_Unforced,long ( NgcPinScenarioLogonUI::*)(long),NgcPinScenarioLogonUI *,_Ph<1> const &>,long,long>
	{
		virtual _Func_base<long,long> * _Copy(void *);
		virtual _Func_base<long,long> * _Move(void *);
		virtual type_info const & _Target_type();
		virtual void _Delete_this(bool);
		virtual void const * _Get();
	};

	struct _List_node_emplace_op2<allocator<_List_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> > >
	{
		~_List_node_emplace_op2<allocator<_List_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> > >();
	};

	struct _List_node_emplace_op2<allocator<_List_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> > >
	{
		~_List_node_emplace_op2<allocator<_List_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> > >();
	};

	class _Ref_count<NgcUtils::RpcClient>
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	public:
		_Ref_count<NgcUtils::RpcClient>(NgcUtils::RpcClient *);
	};

	struct _Ref_count_base
	{
		virtual void * _Get_deleter(type_info const &);
		void _Decref();
	};

	class _Ref_count_obj2<KeyEnumInfo>
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	struct _String_val<_Simple_types<unsigned short> >
	{
		static void _Xran();
	};

	struct _Temporary_owner<NgcUtils::RpcClient>
	{
		~_Temporary_owner<NgcUtils::RpcClient>();
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

	class _Tree<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,_FILETIME>,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,_FILETIME> > >,0> >
	{
	protected:
		_Tree_find_result<_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,_FILETIME> >,void *> *> _Find_lower_bound<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		bool _Lower_bound_duplicate<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,_FILETIME> >,void *> * const,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
	public:
		~_Tree<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,_FILETIME>,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,_FILETIME> > >,0> >();
	};

	struct _Tree_temp_node<allocator<_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,_FILETIME> >,void *> > >
	{
		~_Tree_temp_node<allocator<_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,_FILETIME> >,void *> > >();
	};

	struct _Tree_temp_node_alloc<allocator<_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,_FILETIME> >,void *> > >
	{
		~_Tree_temp_node_alloc<allocator<_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,_FILETIME> >,void *> > >();
	};

	struct _Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,_FILETIME> > > >
	{
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,_FILETIME> >,void *> * _Insert_node(_Tree_id<_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,_FILETIME> >,void *> *>,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,_FILETIME> >,void *> * const);
		void _Erase_tree<allocator<_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,_FILETIME> >,void *> > >(allocator<_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,_FILETIME> >,void *> > &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,_FILETIME> >,void *> *);
		void _Lrotate(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,_FILETIME> >,void *> *);
		void _Rrotate(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,_FILETIME> >,void *> *);
	};

	struct _WChar_traits<unsigned short>
	{
		static int compare(unsigned short const * const,unsigned short const * const,unsigned __int64);
		static unsigned short const * find(unsigned short const *,unsigned __int64,unsigned short const &);
	};

	struct allocator<Microsoft::WRL::ComPtr<ICredentialProviderCredential> >
	{
		void deallocate(Microsoft::WRL::ComPtr<ICredentialProviderCredential> * const,unsigned __int64);
	};

	struct allocator<shared_ptr<KeyEnumInfo> >
	{
		void deallocate(shared_ptr<KeyEnumInfo> * const,unsigned __int64);
	};

	struct allocator<unique_ptr<NgcPinScenario::UserAuthInfo,default_delete<NgcPinScenario::UserAuthInfo> > >
	{
		void deallocate(unique_ptr<NgcPinScenario::UserAuthInfo,default_delete<NgcPinScenario::UserAuthInfo> > * const,unsigned __int64);
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
		static unsigned __int64 _Calculate_growth(unsigned __int64,unsigned __int64,unsigned __int64);
		unsigned __int64 _Calculate_growth(unsigned __int64);
		void _Construct_lv_contents(basic_string<char,char_traits<char>,wil::secure_allocator<char> > const &);
		void _Take_contents(basic_string<char,char_traits<char>,wil::secure_allocator<char> > &);
		void _Tidy_deallocate();
	public:
		basic_string<char,char_traits<char>,wil::secure_allocator<char> > & append(unsigned __int64,char);
		basic_string<char,char_traits<char>,wil::secure_allocator<char> >(basic_string<char,char_traits<char>,wil::secure_allocator<char> > const &);
		char & operator[](unsigned __int64);
		~basic_string<char,char_traits<char>,wil::secure_allocator<char> >();
	};

	class basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >
	{
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & _Reallocate_for<<lambda_05cef1f6fdf474c9f3ed207deba0f73b>,unsigned short const *>(unsigned __int64,<lambda_05cef1f6fdf474c9f3ed207deba0f73b>,unsigned short const *);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & _Reallocate_grow_by<<lambda_7030d12a21dba11210293044e97fe9c7>,unsigned short const *,unsigned __int64>(unsigned __int64,<lambda_7030d12a21dba11210293044e97fe9c7>,unsigned short const *,unsigned __int64);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & _Reallocate_grow_by<<lambda_b70241e9b5ebaad244db3e52d52cab17>,unsigned __int64,unsigned short>(unsigned __int64,<lambda_b70241e9b5ebaad244db3e52d52cab17>,unsigned __int64,unsigned short);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & _Reallocate_grow_by<<lambda_f68dc91b63048d8e897893337fb617c1>,unsigned __int64,unsigned __int64,unsigned short const *,unsigned __int64>(unsigned __int64,<lambda_f68dc91b63048d8e897893337fb617c1>,unsigned __int64,unsigned __int64,unsigned short const *,unsigned __int64);
		static unsigned __int64 _Calculate_growth(unsigned __int64,unsigned __int64,unsigned __int64);
		unsigned __int64 _Calculate_growth(unsigned __int64);
		void _Construct_lv_contents(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		void _Take_contents(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > &);
		void _Tidy_deallocate();
	public:
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & append(unsigned __int64,unsigned short);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & append(unsigned short const * const,unsigned __int64);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & assign(unsigned short const * const);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & assign(unsigned short const * const,unsigned __int64);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & assign<unsigned short *,0>(unsigned short * const,unsigned short * const);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & operator+=(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & operator+=(unsigned short const * const);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & operator=(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & operator=(unsigned short const * const);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & replace(unsigned __int64,unsigned __int64,unsigned short const * const,unsigned __int64);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >();
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >(_String_constructor_concat_tag,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &,unsigned short const * const,unsigned __int64,unsigned short const * const,unsigned __int64);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >(unsigned short const * const);
		bool _Equal(unsigned short const * const);
		unsigned __int64 find(unsigned short const * const,unsigned __int64);
		unsigned __int64 find(unsigned short,unsigned __int64);
		unsigned __int64 max_size();
		unsigned short const * c_str();
		void clear();
		~basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >();
	};

	class basic_string<unsigned short,char_traits<unsigned short>,wil::secure_allocator<unsigned short> >
	{
		basic_string<unsigned short,char_traits<unsigned short>,wil::secure_allocator<unsigned short> > & _Reallocate_for<<lambda_12d8f83807da71f4e1cd8ccfd5dbbfe6>,unsigned short const *>(unsigned __int64,<lambda_12d8f83807da71f4e1cd8ccfd5dbbfe6>,unsigned short const *);
		basic_string<unsigned short,char_traits<unsigned short>,wil::secure_allocator<unsigned short> > & _Reallocate_grow_by<<lambda_33b022599fe9b1d767a239ec3cd80a59>,unsigned __int64,unsigned short>(unsigned __int64,<lambda_33b022599fe9b1d767a239ec3cd80a59>,unsigned __int64,unsigned short);
		static unsigned __int64 _Calculate_growth(unsigned __int64,unsigned __int64,unsigned __int64);
		void _Take_contents(basic_string<unsigned short,char_traits<unsigned short>,wil::secure_allocator<unsigned short> > &);
		void _Tidy_deallocate();
	public:
		basic_string<unsigned short,char_traits<unsigned short>,wil::secure_allocator<unsigned short> > & append(unsigned __int64,unsigned short);
		basic_string<unsigned short,char_traits<unsigned short>,wil::secure_allocator<unsigned short> > & assign(unsigned short const * const,unsigned __int64);
		basic_string<unsigned short,char_traits<unsigned short>,wil::secure_allocator<unsigned short> > & operator=(basic_string<unsigned short,char_traits<unsigned short>,wil::secure_allocator<unsigned short> > const &);
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

	struct default_delete<NgcCredProv::NgcPinResetScenarioInfo>
	{
		void operator()(NgcCredProv::NgcPinResetScenarioInfo *);
	};

	struct default_delete<NgcPinScenario>
	{
		void operator()(NgcPinScenario *);
	};

	struct exception
	{
		exception(exception const &);
		virtual char const * what();
	};

	struct function<bool (vector<unsigned char,allocator<unsigned char> >,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,bool)>
	{
		~function<bool (vector<unsigned char,allocator<unsigned char> >,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,bool)>();
	};

	struct function<long ()>
	{
		function<long ()> & operator=(function<long ()> const &);
		function<long ()>(function<long ()> const &);
		function<long ()><_Binder<_Unforced,long ( NgcPinScenarioLogonUI::*)(),NgcPinScenarioLogonUI *>,0>(_Binder<_Unforced,long ( NgcPinScenarioLogonUI::*)(),NgcPinScenarioLogonUI *>);
		~function<long ()>();
	};

	struct function<long (CflScenarioData const &)>
	{
		function<long (CflScenarioData const &)> & operator=(function<long (CflScenarioData const &)> const &);
		function<long (CflScenarioData const &)>(function<long (CflScenarioData const &)> const &);
		function<long (CflScenarioData const &)><_Binder<_Unforced,long ( NgcPinScenarioLogonUI::*)(CflScenarioData const &),NgcPinScenarioLogonUI *,_Ph<1> const &>,0>(_Binder<_Unforced,long ( NgcPinScenarioLogonUI::*)(CflScenarioData const &),NgcPinScenarioLogonUI *,_Ph<1> const &>);
		~function<long (CflScenarioData const &)>();
	};

	struct function<long (long)>
	{
		function<long (long)> & operator=(function<long (long)> const &);
		function<long (long)><_Binder<_Unforced,long ( NgcPinScenarioLogonUI::*)(long),NgcPinScenarioLogonUI *,_Ph<1> const &>,0>(_Binder<_Unforced,long ( NgcPinScenarioLogonUI::*)(long),NgcPinScenarioLogonUI *,_Ph<1> const &>);
		~function<long (long)>();
	};

	struct invalid_argument
	{
		invalid_argument(char const *);
		invalid_argument(invalid_argument const &);
		virtual ~invalid_argument();
	};

	struct list<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >
	{
		_List_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> * _Emplace<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &>(_List_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> * const,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		~list<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >();
	};

	struct list<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >
	{
		~list<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >();
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

	struct logic_error
	{
		logic_error(char const *);
		logic_error(logic_error const &);
	};

	struct map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,_FILETIME>,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,_FILETIME> > > >
	{
		~map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,_FILETIME>,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,_FILETIME> > > >();
	};

	struct pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,_FILETIME> >
	{
		~pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,_FILETIME> >();
	};

	struct pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,_FILETIME>
	{
		~pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,_FILETIME>();
	};

	struct pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >
	{
		~pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >();
	};

	struct range_error
	{
		range_error(char const *);
		range_error(range_error const &);
		virtual ~range_error();
	};

	struct runtime_error
	{
		runtime_error(runtime_error const &);
	};

	struct shared_ptr<KeyEnumInfo>
	{
		~shared_ptr<KeyEnumInfo>();
	};

	struct shared_ptr<NgcUtils::RpcClient>
	{
		~shared_ptr<NgcUtils::RpcClient>();
	};

	struct unique_ptr<NgcPinScenario::UserAuthInfo,default_delete<NgcPinScenario::UserAuthInfo> >
	{
		~unique_ptr<NgcPinScenario::UserAuthInfo,default_delete<NgcPinScenario::UserAuthInfo> >();
	};

	struct unique_ptr<_LSA_REFERENCED_DOMAIN_LIST,lsamem_delete<_LSA_REFERENCED_DOMAIN_LIST> >
	{
		~unique_ptr<_LSA_REFERENCED_DOMAIN_LIST,lsamem_delete<_LSA_REFERENCED_DOMAIN_LIST> >();
	};

	struct unique_ptr<_LSA_TRANSLATED_NAME,lsamem_delete<_LSA_TRANSLATED_NAME> >
	{
		~unique_ptr<_LSA_TRANSLATED_NAME,lsamem_delete<_LSA_TRANSLATED_NAME> >();
	};

	class vector<Microsoft::WRL::ComPtr<ICredentialProviderCredential>,allocator<Microsoft::WRL::ComPtr<ICredentialProviderCredential> > >
	{
		static void _Xlength();
		void _Change_array(Microsoft::WRL::ComPtr<ICredentialProviderCredential> * const,unsigned __int64,unsigned __int64);
		void _Tidy();
	public:
		void clear();
		~vector<Microsoft::WRL::ComPtr<ICredentialProviderCredential>,allocator<Microsoft::WRL::ComPtr<ICredentialProviderCredential> > >();
	};

	class vector<shared_ptr<KeyEnumInfo>,allocator<shared_ptr<KeyEnumInfo> > >
	{
		static void _Xlength();
		void _Change_array(shared_ptr<KeyEnumInfo> * const,unsigned __int64,unsigned __int64);
		void _Tidy();
	public:
		~vector<shared_ptr<KeyEnumInfo>,allocator<shared_ptr<KeyEnumInfo> > >();
	};

	class vector<unique_ptr<NgcPinScenario::UserAuthInfo,default_delete<NgcPinScenario::UserAuthInfo> >,allocator<unique_ptr<NgcPinScenario::UserAuthInfo,default_delete<NgcPinScenario::UserAuthInfo> > > >
	{
		static void _Xlength();
		void _Tidy();
	public:
		~vector<unique_ptr<NgcPinScenario::UserAuthInfo,default_delete<NgcPinScenario::UserAuthInfo> >,allocator<unique_ptr<NgcPinScenario::UserAuthInfo,default_delete<NgcPinScenario::UserAuthInfo> > > >();
	};

	class vector<unsigned char,allocator<unsigned char> >
	{
		static void _Xlength();
		unsigned __int64 _Calculate_growth(unsigned __int64);
		void _Buy_nonzero(unsigned __int64);
		void _Buy_raw(unsigned __int64);
		void _Clear_and_reserve_geometric(unsigned __int64);
		void _Construct_n<unsigned char * const &,unsigned char * const &>(unsigned __int64,unsigned char * const &,unsigned char * const &);
		void _Resize_reallocate<_Value_init_tag>(unsigned __int64,_Value_init_tag const &);
		void _Tidy();
	public:
		vector<unsigned char,allocator<unsigned char> > & operator=(vector<unsigned char,allocator<unsigned char> > const &);
		vector<unsigned char,allocator<unsigned char> >(unsigned __int64,allocator<unsigned char> const &);
		vector<unsigned char,allocator<unsigned char> >(vector<unsigned char,allocator<unsigned char> > const &);
		vector<unsigned char,allocator<unsigned char> ><unsigned char *,0>(unsigned char *,unsigned char *,allocator<unsigned char> const &);
		vector<unsigned char,allocator<unsigned char> ><unsigned char const *,0>(unsigned char const *,unsigned char const *,allocator<unsigned char> const &);
		void assign<unsigned char *,0>(unsigned char *,unsigned char *);
		void assign<unsigned char const *,0>(unsigned char const *,unsigned char const *);
		~vector<unsigned char,allocator<unsigned char> >();
	};

	class vector<unsigned char,wil::secure_allocator<unsigned char> >
	{
		static void _Xlength();
		unsigned __int64 _Calculate_growth(unsigned __int64);
		void _Assign_range<char *>(char *,char *,forward_iterator_tag);
		void _Assign_range<unsigned char *>(unsigned char *,unsigned char *,forward_iterator_tag);
		void _Buy_nonzero(unsigned __int64);
		void _Buy_raw(unsigned __int64);
		void _Change_array(unsigned char * const,unsigned __int64,unsigned __int64);
		void _Clear_and_reserve_geometric(unsigned __int64);
		void _Resize_reallocate<_Value_init_tag>(unsigned __int64,_Value_init_tag const &);
		void _Tidy();
	public:
		vector<unsigned char,wil::secure_allocator<unsigned char> >(unsigned __int64,wil::secure_allocator<unsigned char> const &);
		vector<unsigned char,wil::secure_allocator<unsigned char> ><_String_iterator<_String_val<_Simple_types<char> > >,0>(_String_iterator<_String_val<_Simple_types<char> > >,_String_iterator<_String_val<_Simple_types<char> > >,wil::secure_allocator<unsigned char> const &);
		vector<unsigned char,wil::secure_allocator<unsigned char> ><unsigned char const *,0>(unsigned char const *,unsigned char const *,wil::secure_allocator<unsigned char> const &);
		void assign<_String_iterator<_String_val<_Simple_types<char> > >,0>(_String_iterator<_String_val<_Simple_types<char> > >,_String_iterator<_String_val<_Simple_types<char> > >);
		void assign<unsigned char *,0>(unsigned char *,unsigned char *);
		~vector<unsigned char,wil::secure_allocator<unsigned char> >();
	};

	class vector<unsigned short,allocator<unsigned short> >
	{
		static void _Xlength();
		void _Change_array(unsigned short * const,unsigned __int64,unsigned __int64);
		void _Resize_reallocate<_Value_init_tag>(unsigned __int64,_Value_init_tag const &);
		void _Tidy();
	public:
		vector<unsigned short,allocator<unsigned short> >(unsigned __int64,allocator<unsigned short> const &);
		~vector<unsigned short,allocator<unsigned short> >();
	};

	class wstring_convert<codecvt<unsigned short,char,_Mbstatet>,unsigned short,wil::secure_allocator<unsigned short>,wil::secure_allocator<char> >
	{
		void _Init(codecvt<unsigned short,char,_Mbstatet> const *);
	public:
		basic_string<char,char_traits<char>,wil::secure_allocator<char> > to_bytes(unsigned short const *,unsigned short const *);
		virtual ~wstring_convert<codecvt<unsigned short,char,_Mbstatet>,unsigned short,wil::secure_allocator<unsigned short>,wil::secure_allocator<char> >();
		wstring_convert<codecvt<unsigned short,char,_Mbstatet>,unsigned short,wil::secure_allocator<unsigned short>,wil::secure_allocator<char> >();
	};

	Microsoft::WRL::ComPtr<ICredentialProviderCredential> * _Uninitialized_move<Microsoft::WRL::ComPtr<ICredentialProviderCredential> *,allocator<Microsoft::WRL::ComPtr<ICredentialProviderCredential> > >(Microsoft::WRL::ComPtr<ICredentialProviderCredential> * const,Microsoft::WRL::ComPtr<ICredentialProviderCredential> * const,Microsoft::WRL::ComPtr<ICredentialProviderCredential> *,std::allocator<Microsoft::WRL::ComPtr<ICredentialProviderCredential> > &);
	bool _Traits_equal<char_traits<unsigned short> >(unsigned short const * const,unsigned __int64,unsigned short const * const,unsigned __int64);
	nothrow_t const std::nothrow;
	std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > operator+<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,unsigned short const * const);
	std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,_FILETIME> make_pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > &,_FILETIME &>(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &,_FILETIME &);
	std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > make_pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > &,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > &>(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
	std::shared_ptr<KeyEnumInfo> * _Uninitialized_move<shared_ptr<KeyEnumInfo> *,allocator<shared_ptr<KeyEnumInfo> > >(std::shared_ptr<KeyEnumInfo> * const,std::shared_ptr<KeyEnumInfo> * const,std::shared_ptr<KeyEnumInfo> *,std::allocator<std::shared_ptr<KeyEnumInfo> > &);
	std::unique_ptr<NgcPinScenario::UserAuthInfo,std::default_delete<NgcPinScenario::UserAuthInfo> > * _Uninitialized_move<unique_ptr<NgcPinScenario::UserAuthInfo,default_delete<NgcPinScenario::UserAuthInfo> > *,allocator<unique_ptr<NgcPinScenario::UserAuthInfo,default_delete<NgcPinScenario::UserAuthInfo> > > >(std::unique_ptr<NgcPinScenario::UserAuthInfo,std::default_delete<NgcPinScenario::UserAuthInfo> > * const,std::unique_ptr<NgcPinScenario::UserAuthInfo,std::default_delete<NgcPinScenario::UserAuthInfo> > * const,std::unique_ptr<NgcPinScenario::UserAuthInfo,std::default_delete<NgcPinScenario::UserAuthInfo> > *,std::allocator<std::unique_ptr<NgcPinScenario::UserAuthInfo,std::default_delete<NgcPinScenario::UserAuthInfo> > > &);
	unsigned __int64 _Get_size_of_n<16>(unsigned __int64);
	unsigned __int64 _Get_size_of_n<8>(unsigned __int64);
	unsigned __int64 _Traits_find_ch<char_traits<unsigned short> >(unsigned short const * const,unsigned __int64,unsigned __int64,unsigned short);
	unsigned __int64 const & max<unsigned __int64>(unsigned __int64 const &,unsigned __int64 const &);
	unsigned __int64 const & min<unsigned __int64>(unsigned __int64 const &,unsigned __int64 const &);
	unsigned char * _Copy_unchecked<char *,unsigned char *>(char *,char *,unsigned char *);
	unsigned char * _Copy_unchecked<unsigned char *,unsigned char *>(unsigned char *,unsigned char *,unsigned char *);
	unsigned char * _Uninitialized_copy<char *,wil::secure_allocator<unsigned char> >(char * const,char * const,unsigned char *,wil::secure_allocator<unsigned char> &);
	unsigned char * _Uninitialized_copy<unsigned char *,wil::secure_allocator<unsigned char> >(unsigned char * const,unsigned char * const,unsigned char *,wil::secure_allocator<unsigned char> &);
	unsigned char * _Uninitialized_move<unsigned char *,allocator<unsigned char> >(unsigned char * const,unsigned char * const,unsigned char *,std::allocator<unsigned char> &);
	unsigned char * _Uninitialized_move<unsigned char *,wil::secure_allocator<unsigned char> >(unsigned char * const,unsigned char * const,unsigned char *,wil::secure_allocator<unsigned char> &);
	unsigned char * _Uninitialized_value_construct_n<allocator<unsigned char> >(unsigned char *,unsigned __int64,std::allocator<unsigned char> &);
	unsigned char * _Uninitialized_value_construct_n<wil::secure_allocator<unsigned char> >(unsigned char *,unsigned __int64,wil::secure_allocator<unsigned char> &);
	unsigned short * _Uninitialized_move<unsigned short *,allocator<unsigned short> >(unsigned short * const,unsigned short * const,unsigned short *,std::allocator<unsigned short> &);
	unsigned short * _Uninitialized_value_construct_n<allocator<unsigned short> >(unsigned short *,unsigned __int64,std::allocator<unsigned short> &);
	void * _Allocate<16,_Default_allocate_traits,0>(unsigned __int64);
	void * _Allocate_manually_vector_aligned<_Default_allocate_traits>(unsigned __int64);
	void _Adjust_manually_vector_aligned(void * &,unsigned __int64 &);
	void _Deallocate<16,0>(void *,unsigned __int64);
	void _Destroy_range<allocator<Microsoft::WRL::ComPtr<ICredentialProviderCredential> > >(Microsoft::WRL::ComPtr<ICredentialProviderCredential> *,Microsoft::WRL::ComPtr<ICredentialProviderCredential> * const,std::allocator<Microsoft::WRL::ComPtr<ICredentialProviderCredential> > &);
	void _Destroy_range<allocator<shared_ptr<KeyEnumInfo> > >(std::shared_ptr<KeyEnumInfo> *,std::shared_ptr<KeyEnumInfo> * const,std::allocator<std::shared_ptr<KeyEnumInfo> > &);
	void _Destroy_range<allocator<unique_ptr<NgcPinScenario::UserAuthInfo,default_delete<NgcPinScenario::UserAuthInfo> > > >(std::unique_ptr<NgcPinScenario::UserAuthInfo,std::default_delete<NgcPinScenario::UserAuthInfo> > *,std::unique_ptr<NgcPinScenario::UserAuthInfo,std::default_delete<NgcPinScenario::UserAuthInfo> > * const,std::allocator<std::unique_ptr<NgcPinScenario::UserAuthInfo,std::default_delete<NgcPinScenario::UserAuthInfo> > > &);
	void _Throw_bad_array_new_length();
	void _Throw_range_error(char const * const);
	void _Throw_tree_length_error();
	void _Xlen_string();
};

struct struct_join_status
{
	~struct_join_status();
};

namespace wil
{
	class ActivityBase<NgcCredProvLogProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>
	{
		struct ActivityData<NgcCredProvLogProvider,_TlgReflectorTag_Param0IsProviderType>
		{
			bool SetStopResult(long,long *);
			~ActivityData<NgcCredProvLogProvider,_TlgReflectorTag_Param0IsProviderType>();
		};

	protected:
		void Destroy();
	public:
		ActivityBase<NgcCredProvLogProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(char const *,bool);
		_GUID const * zInternalRelatedId();
		virtual bool NotifyFailure(FailureInfo const &);
		void Stop(long);
		void zInternalStart();
		void zInternalStop();
		~ActivityBase<NgcCredProvLogProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>();
	};

	class ActivityBase<NgcCredProvLogProvider,1,70368744177664,5,16779264,_TlgReflectorTag_Param0IsProviderType>
	{
		struct ActivityData<NgcCredProvLogProvider,_TlgReflectorTag_Param0IsProviderType>
		{
			bool SetStopResult(long,long *);
			~ActivityData<NgcCredProvLogProvider,_TlgReflectorTag_Param0IsProviderType>();
		};

	protected:
		void Destroy();
	public:
		ActivityBase<NgcCredProvLogProvider,1,70368744177664,5,16779264,_TlgReflectorTag_Param0IsProviderType>(char const *,bool);
		virtual bool NotifyFailure(FailureInfo const &);
		void Stop(long);
		void zInternalStop();
		~ActivityBase<NgcCredProvLogProvider,1,70368744177664,5,16779264,_TlgReflectorTag_Param0IsProviderType>();
	};

	class ActivityBase<NgcCredProvLogProvider,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>
	{
		struct ActivityData<NgcCredProvLogProvider,_TlgReflectorTag_Param0IsProviderType>
		{
			bool SetStopResult(long,long *);
			~ActivityData<NgcCredProvLogProvider,_TlgReflectorTag_Param0IsProviderType>();
		};

	protected:
		void Destroy();
	public:
		ActivityBase<NgcCredProvLogProvider,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>(char const *,bool);
		_GUID const * zInternalRelatedId();
		virtual bool NotifyFailure(FailureInfo const &);
		void Stop(long);
		void zInternalStart();
		void zInternalStop();
		~ActivityBase<NgcCredProvLogProvider,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>();
	};

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

	struct ThreadFailureCache
	{
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
		void ReportTraceLoggingFailure(FailureInfo const &);
	};

	struct com_ptr_t<ICredentialProviderCredentialEvents,err_exception_policy>
	{
		com_ptr_t<ICredentialProviderCredentialEvents5,err_exception_policy> query<ICredentialProviderCredentialEvents5>();
		~com_ptr_t<ICredentialProviderCredentialEvents,err_exception_policy>();
	};

	struct com_ptr_t<ICredentialProviderCredentialEvents5,err_exception_policy>
	{
		com_ptr_t<ICredentialProviderCredentialSwitchProviderEvents,err_exception_policy> query<ICredentialProviderCredentialSwitchProviderEvents>();
		~com_ptr_t<ICredentialProviderCredentialEvents5,err_exception_policy>();
	};

	struct com_ptr_t<ICredentialProviderCredentialSwitchProviderEvents,err_exception_policy>
	{
		~com_ptr_t<ICredentialProviderCredentialSwitchProviderEvents,err_exception_policy>();
	};

	struct com_ptr_t<ICredentialProviderCredentialUIModeEvents,err_exception_policy>
	{
		~com_ptr_t<ICredentialProviderCredentialUIModeEvents,err_exception_policy>();
	};

	struct com_ptr_t<ICredentialProviderTileDataEvents,err_returncode_policy>
	{
		~com_ptr_t<ICredentialProviderTileDataEvents,err_returncode_policy>();
	};

	struct cotaskmem_secure_deleter
	{
		void operator()<unsigned char>(unsigned char *);
		void operator()<unsigned short>(unsigned short *);
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
			void OnStateChange();
			void OnTimer();
		};

		class FeatureImpl<__WilFeatureTraits_Feature_CloudTrust>
		{
			wil_details_FeatureStateCache GetCachedFeatureEnabledState();
			wil_details_FeatureStateCache GetCurrentFeatureEnabledState(int *);
		public:
			void ReportUsage(bool,ReportingKind,unsigned __int64);
		};

		class FeatureImpl<__WilFeatureTraits_Feature_ESSGP>
		{
			wil_details_FeatureStateCache GetCachedFeatureEnabledState();
			wil_details_FeatureStateCache GetCurrentFeatureEnabledState(int *);
		public:
			void ReportUsage(bool,ReportingKind,unsigned __int64);
		};

		class FeatureStateManager
		{
			bool EnsureStateData();
		public:
			FeatureStateManager();
			void FlushUsage();
			void QueueBackgroundSRUMUsageReporting(unsigned int,unsigned short,unsigned int);
			void SubscribeToUsageFlush(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *));
		};

		struct ResultStatus
		{
			static ResultStatus FromResult(long);
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
		};

		namespace in1diag3
		{
			bool Log_HrIfMsg(void *,unsigned int,char const *,long,bool,char const *,...);
			int Log_IfWin32BoolFalseMsg(void *,unsigned int,char const *,int,char const *,...);
			long Log_Hr(void *,unsigned int,char const *,long);
			long Log_HrMsg(void *,unsigned int,char const *,long,char const *,...);
			long Log_IfFailedWithExpected(void *,unsigned int,char const *,long,unsigned int,...);
			long Return_CaughtException(void *,unsigned int,char const *);
			long Return_GetLastError(void *,unsigned int,char const *);
			long Return_NtStatus(void *,unsigned int,char const *,long);
			long Return_Win32(void *,unsigned int,char const *,unsigned long);
			void FailFast_CaughtException(void *,unsigned int,char const *);
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
			void _Log_Win32(void *,unsigned int,char const *,unsigned long);
			void _Throw_Hr(void *,unsigned int,char const *,long);
			void _Throw_NullAlloc(void *,unsigned int,char const *);
			void _Throw_Win32(void *,unsigned int,char const *,unsigned long);
		};

		struct out_param_t<wistd::unique_ptr<unsigned char,cotaskmem_secure_deleter> >
		{
			~out_param_t<wistd::unique_ptr<unsigned char,cotaskmem_secure_deleter> >();
		};

		class shared_buffer
		{
			void assign(long *,unsigned __int64);
		public:
			bool create(void const *,unsigned __int64);
			void reset();
		};

		struct shared_object<ActivityBase<NgcCredProvLogProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<NgcCredProvLogProvider,_TlgReflectorTag_Param0IsProviderType> >
		{
			void reset();
		};

		struct shared_object<ActivityBase<NgcCredProvLogProvider,1,70368744177664,5,16779264,_TlgReflectorTag_Param0IsProviderType>::ActivityData<NgcCredProvLogProvider,_TlgReflectorTag_Param0IsProviderType> >
		{
			void reset();
		};

		struct shared_object<ActivityBase<NgcCredProvLogProvider,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<NgcCredProvLogProvider,_TlgReflectorTag_Param0IsProviderType> >
		{
			void reset();
		};

		struct static_lazy<NgcCredProvLogProvider>
		{
			struct Completer
			{
				~Completer();
			};

			NgcCredProvLogProvider * get(void (*)());
		};

		struct wnf_subscription_state_base
		{
			virtual ~wnf_subscription_state_base();
		};

		FEATURE_ENABLED_STATE WilApiImpl_GetFeatureEnabledState(unsigned int,FEATURE_CHANGE_TIME,int *);
		FEATURE_ENABLED_STATE WilApi_GetFeatureEnabledState(unsigned int,FEATURE_CHANGE_TIME,int *);
		bool GetModuleInformation(void *,unsigned int *,char *,unsigned __int64);
		bool g_processShutdownInProgress;
		bool g_resultMessageCallbackSet;
		char const * (* ?? g_pfnGetModuleName)();
		char const * GetCurrentModuleName();
		details::ResultStatus ReportFailure_CaughtExceptionCommon<1>(void *,unsigned int,char const *,char const *,char const *,void *,unsigned short *,unsigned __int64,SupportedExceptions);
		details::ResultStatus ReportFailure_CaughtExceptionCommon<3>(void *,unsigned int,char const *,char const *,char const *,void *,unsigned short *,unsigned __int64,SupportedExceptions);
		details::ResultStatus ReportFailure_CaughtExceptionCommonNoReturnBase<3>(void *,unsigned int,char const *,char const *,char const *,void *,unsigned short *,unsigned __int64,SupportedExceptions);
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
		long ReportFailure_CaughtException<3>(void *,unsigned int,char const *,char const *,char const *,void *,SupportedExceptions);
		long ReportFailure_GetLastErrorHr<1>(void *,unsigned int,char const *,char const *,char const *,void *);
		long ReportFailure_NtStatus<1>(void *,unsigned int,char const *,char const *,char const *,void *,long);
		long ReportFailure_Win32<0>(void *,unsigned int,char const *,char const *,char const *,void *,unsigned long);
		long ReportFailure_Win32<1>(void *,unsigned int,char const *,char const *,char const *,void *,unsigned long);
		long ReportFailure_Win32<2>(void *,unsigned int,char const *,char const *,char const *,void *,unsigned long);
		long ResultFromCaughtException_CppWinRt(unsigned short *,unsigned __int64,bool *);
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
		unsigned long (* ?? g_pfnRtlNtStatusToDosErrorNoTeb)(long);
		unsigned long GetLastErrorFail(void *,unsigned int,char const *,char const *,char const *,void *);
		unsigned long ReportFailure_GetLastError<2>(void *,unsigned int,char const *,char const *,char const *,void *);
		unsigned long ReportFailure_GetLastError<3>(void *,unsigned int,char const *,char const *,char const *,void *);
		unsigned long ReportFailure_GetLastErrorMsg<2>(void *,unsigned int,char const *,char const *,char const *,void *,char const *,char *);
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
		void FormatNtStatusMsg(long,unsigned short *,unsigned long);
		void FreeProcessHeap(void *);
		void GetContextAndNotifyFailure(FailureInfo *,char *,unsigned __int64);
		void LogFailure(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,details::ResultStatus const &,unsigned short const *,bool,unsigned short *,unsigned __int64,char *,unsigned __int64,FailureInfo *);
		void MaybeGetExceptionString(ResultException const &,unsigned short *,unsigned __int64);
		void MaybeGetExceptionString(std::exception const &,unsigned short *,unsigned __int64);
		void MaybeGetExceptionString(winrt::hresult_error const &,unsigned short *,unsigned __int64);
		void MicrosoftInternalNotifyFailure(FailureInfo *);
		void PrintLoggingMessage(unsigned short *,unsigned __int64,char const *,char *);
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
		void ReportFailure_HrMsg<1>(void *,unsigned int,char const *,char const *,char const *,void *,long,char const *,char *);
		void ReportFailure_HrMsg<2>(void *,unsigned int,char const *,char const *,char const *,void *,long,char const *,char *);
		void ReportFailure_Msg<2>(void *,unsigned int,char const *,char const *,char const *,void *,details::ResultStatus const &,char const *,char *);
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
		void WilApi_UnsubscribeFeatureStateChangeNotification(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
		void WilDynamicLoadRaiseFailFastException(_EXCEPTION_RECORD *,_CONTEXT *,unsigned long);
		void WilFailFast(FailureInfo const &);
		void WilRaiseFailFastException(_EXCEPTION_RECORD *,_CONTEXT *,unsigned long);
		void delete_wnf_subscription_state(details::wnf_subscription_state_base *);
	};

	namespace details_abi
	{
		class FeatureStateData
		{
			void RetrieveUsageUnderLock(UsageIndexes &);
		public:
			void ProcessShutdown();
			void RecordUsage();
			~FeatureStateData();
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
			void Destroy();
		};

		struct SubscriptionList
		{
			SubscriptionList();
			void OnSignaled(srwlock &);
			void SubscribeUnderLock(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
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
		void destroy();
	};

	struct secure_allocator<unsigned char>
	{
		void deallocate(unsigned char *,unsigned __int64);
	};

	struct unique_any_t<cert_context_t>
	{
		~unique_any_t<cert_context_t>();
	};

	WilFailureReportFlags g_moduleFailureReportFlags;
	bool (* ?? g_pfnIsDebuggerPresent)();
	bool (* ?? g_pfnWilFailFast)(wil::FailureInfo const &);
	bool ProcessShutdownInProgress();
	bool g_fBreakOnFailure;
	bool g_fIsDebuggerPresent;
	long (* ?? g_pfnResultFromCaughtException)();
	long GetFailureLogString(unsigned short *,unsigned __int64,wil::FailureInfo const &);
	long ResultFromCaughtException();
	long verify_hresult<long>(long);
	long wnf_query_nothrow<_SEB_EVENT_HEADER>(_WNF_STATE_NAME const &,bool *,_SEB_EVENT_HEADER *,wil::WNF_CHANGE_STAMP_STRUCT *);
	make_cotaskmem_string(unsigned short const *,unsigned __int64);
	make_hlocal_string(unsigned short const *,unsigned __int64);
	void SetResultTelemetryFallback(void (*)(bool,wil::FailureInfo const &),...);
	void ThrowResultException(wil::FailureInfo const &);
	void wnf_publish<_NgcPinResetScenarioLaunchData>(_WNF_STATE_NAME const &,_NgcPinResetScenarioLaunchData const &);
	void wnf_publish<unsigned short [22]>(_WNF_STATE_NAME const &,unsigned short const (&)[22]);
	wistd::unique_ptr<unsigned char [0],wil::cotaskmem_secure_deleter> make_unique_cotaskmem_secure<unsigned char [0]>(unsigned __int64);
	wistd::unique_ptr<unsigned char [0],wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)> > make_unique_cotaskmem<unsigned char [0]>(unsigned __int64);
	wistd::unique_ptr<unsigned char [0],wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)> > make_unique_cotaskmem_nothrow<unsigned char [0]>(unsigned __int64);
	wistd::unique_ptr<unsigned char [0],wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)> > make_unique_hlocal_nothrow<unsigned char [0]>(unsigned __int64);
	wistd::unique_ptr<unsigned short [0],wil::cotaskmem_secure_deleter> make_cotaskmem_string_secure(unsigned short const *);
};

struct win32_exception
{
	virtual ~win32_exception();
	win32_exception(unsigned long);
	win32_exception(win32_exception const &);
};

namespace winbio
{
	long GetAvailableFactorsCommon(unsigned int *);
	long GetEnrollmentCommitted(unsigned long *);
};

namespace winrt
{
	class com_ptr<impl::IErrorInfo>
	{
		void unconditional_release_ref();
	public:
		~com_ptr<impl::IErrorInfo>();
	};

	struct com_ptr<impl::IRestrictedErrorInfo>
	{
		UNKNOWN try_as<impl::IErrorInfo>();
	};

	struct handle_type<impl::bstr_traits>
	{
		unsigned short * * put();
		void close();
	};

	struct handle_type<impl::heap_traits>
	{
		void close();
	};

	struct handle_type<impl::hstring_traits>
	{
		operator bool();
	};

	struct hresult_error
	{
		hresult to_abi();
		hstring message();
	};

	struct hstring
	{
		bool empty();
	};

	namespace impl
	{
		struct hstring_traits
		{
			static void close(hstring_header *);
		};

		guid::guid const guid_v<IErrorInfo>;
		hstring message_from_hresult(hresult);
		hstring trim_hresult_message(unsigned short const * const,unsigned int);
		impl::shared_hstring_header * precreate_hstring_on_heap(unsigned int);
	};

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

	struct function<void (NgcWnf::CredentialRefreshRequiredStateData const &)>
	{
		~function<void (NgcWnf::CredentialRefreshRequiredStateData const &)>();
	};

	struct unique_ptr<unsigned char [0],wil::cotaskmem_secure_deleter>
	{
		~unique_ptr<unsigned char [0],wil::cotaskmem_secure_deleter>();
	};

	struct unique_ptr<unsigned char,wil::cotaskmem_secure_deleter>
	{
		~unique_ptr<unsigned char,wil::cotaskmem_secure_deleter>();
	};

	struct unique_ptr<unsigned short [0],wil::cotaskmem_secure_deleter>
	{
		~unique_ptr<unsigned short [0],wil::cotaskmem_secure_deleter>();
	};

	void __throw_bad_function_call();
};

;
FEATURE_ENABLED_STATE (* g_wil_details_apiGetFeatureEnabledState)(unsigned int,FEATURE_CHANGE_TIME,int *);
FEATURE_ENABLED_STATE (* g_wil_details_internalGetFeatureEnabledState)(unsigned int,FEATURE_CHANGE_TIME,int *);
HINSTANCE__ * g_hInstance;
HINSTANCE__ * g_wil_details_kernelbaseModuleHandle;
HINSTANCE__ * g_wil_details_ntdllModuleHandle;
HINSTANCE__ * wil_details_GetKernelBaseModuleHandle();
HINSTANCE__ * wil_details_GetNtDllModuleHandle();
Microsoft::WRL::Details::CreatorMap const __object_NgcPinProvider_COM;
Microsoft::WRL::Details::FactoryCache __objectFactory__NgcPinProvider_COM;
__type_info_node __type_info_root_node;
bool _tlgGuidIsZero(_GUID const &);
int InlineIsEqualGUID(_GUID const &,_GUID const &);
int IsResetDevicePresent();
int IsUserNgcEnrolled(unsigned short const *);
int IsWinPEHost();
int SafeFree(void *);
int SafeFree(void const *);
int wil_RtlStagingConfig_QueryFeatureState(wil_FeatureState *,unsigned int,int,int *);
long (* g_wil_details_pfnNtQueryWnfStateData)(__WIL__WNF_STATE_NAME const *,__WIL__WNF_TYPE_ID const *,void const *,unsigned long *,void *,unsigned long *);
long (* g_wil_details_pfnNtUpdateWnfStateData)(__WIL__WNF_STATE_NAME const *,void const *,unsigned long,__WIL__WNF_TYPE_ID const *,void const *,unsigned long,unsigned long);
long CallCloudAPPackage(unsigned long,unsigned char *,unsigned long *,void * *);
long CompareStringInternal(unsigned short const *,int,unsigned short const *,int,unsigned long,COMPARE_STR_RESULT *);
long CopyStringNullSafeW(unsigned short const *,unsigned short * *);
long CopyStringSafeW(unsigned short const *,unsigned short * *);
long CopyStringW(unsigned short const *,unsigned __int64,unsigned short * *);
long GetDomainFromEmail(unsigned short const *,unsigned short * *,unsigned __int64 *);
long GetMsaCxidSignInInfo(unsigned short const *,UserIntention,unsigned short * *,unsigned char * *,unsigned long *);
long GetUserNgcWasEnrolledRegKey(unsigned short const *,int *);
long GetWinBioRegistryLocation(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *);
long IsAccountCloudPasswordLessInternal(void * const,_LSA_USER_ACCOUNT_TYPE,int *);
long NgcMgmtEnumContainers(unsigned short const *,_NGC_RPC_CONTAINER_INFO * *,unsigned long *);
long QueryDevicePasswordLessBuildVersion(DevicePasswordLessBuildVersion *);
long QueryDevicePasswordLessData(PasswordLessDataType,unsigned long *);
long QueryDevicePasswordLessUpdateType(PasswordLessUpdateType *);
long RegLoadKeyWinPE(HKEY__ *,unsigned short const *,unsigned short const *,unsigned short const *);
long RegistryQueryDwordNoThrow(HKEY__ *,unsigned short const *,unsigned short const *,unsigned long *);
long SetDevicePasswordLessData(PasswordLessDataType,unsigned long);
long SetUserNgcWasEnrolledRegKey(unsigned short const *);
long SortCertificatesInPlace(_CERT_CONTEXT const * * const,unsigned long);
long StringCat(unsigned short const *,unsigned short const *,unsigned short * *);
long StringCbLengthW(unsigned short const *,unsigned __int64,unsigned __int64 *);
long StringCchCatW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchCopyW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchLengthW(unsigned short const *,unsigned __int64,unsigned __int64 *);
long StringCchPrintfW(unsigned short *,unsigned __int64,unsigned short const *,...);
long StringCchVPrintfW(unsigned short *,unsigned __int64,unsigned short const *,char *);
long StringCompare(unsigned short const *,unsigned short const *,unsigned long,COMPARE_STR_RESULT *);
long StringCompare(unsigned short const *,unsigned short const *,unsigned long,int *);
long StringDup(unsigned short const *,unsigned short * *,int);
long wil_RtlStagingConfig_RecordFeatureUsage(unsigned int,unsigned int,int);
long wil_details_NtQueryWnfStateData(__WIL__WNF_STATE_NAME const *,__WIL__WNF_TYPE_ID const *,void const *,unsigned long *,void *,unsigned long *);
long wil_details_NtUpdateWnfStateData(__WIL__WNF_STATE_NAME const *,void const *,unsigned long,__WIL__WNF_TYPE_ID const *,void const *,unsigned long,unsigned long);
long wil_details_WriteSRUMWnfUsageBuffer(wil::details_abi::heap_vector<wil_details_FeatureUsageSRUM> *);
unsigned char const * operator+=<unsigned char const ,unsigned long,SafeIntInternal::SafeIntExceptionHandler<SafeIntException> >(unsigned char const * &,SafeInt<unsigned long,SafeIntInternal::SafeIntExceptionHandler<SafeIntException> >);
unsigned long GetWindowsDirectoryWinPE(unsigned short * *);
unsigned long RegOpenCurrentUserKey(unsigned long,HKEY__ * *);
unsigned long RegReadDwordValue(HKEY__ *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned long *,unsigned long);
unsigned long RegReadQwordValue(HKEY__ *,unsigned short const *,unsigned short const *,unsigned short const *,__int64 *,__int64);
unsigned long RegReadStringValue(HKEY__ *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned long,unsigned short * *);
unsigned long RegReadStringValue(HKEY__ *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short * *);
unsigned long RegSubKeyExists(HKEY__ *,unsigned short const *,unsigned short const *,int *);
unsigned short * GetRegValueName(unsigned short const *);
unsigned short const * GetInfoKindName(INFO_KIND);
unsigned short const * GetStringName(PasswordLessDataType);
void (* g_wil_details_RecordSRUMFeatureUsage)(unsigned int,unsigned int,unsigned int);
void (* g_wil_details_apiRecordFeatureUsage)(unsigned int,unsigned int,unsigned int,char const *);
void (* g_wil_details_apiSubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
void (* g_wil_details_apiUnsubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
void (* g_wil_details_internalRecordFeatureUsage)(unsigned int,unsigned int,unsigned int,char const *);
void (* g_wil_details_internalSubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
void (* g_wil_details_internalUnsubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
void (* g_wil_details_pfnFeatureLoggingHook)(unsigned int,FEATURE_LOGGED_TRAITS const *,FEATURE_ERROR const *,int,wil_ReportingKind const *,wil_VariantReportingKind const *,unsigned char,unsigned __int64);
void (* g_wil_details_realtimeFeatureUsageHook)(unsigned int,unsigned int,unsigned char);
void * SafeAlloc(unsigned __int64);
void * operator new(unsigned __int64);
void * operator new(unsigned __int64,std::nothrow_t const &);
void * operator new[](unsigned __int64,std::nothrow_t const &);
void FillJoinStatus(unsigned short * &,unsigned short const * &,unsigned short const *,unsigned short const *);
void LogIsAccountPasswordless(unsigned short const *,int,unsigned long,long);
void TlgAggregateInternalProviderCallback(_GUID const *,unsigned long,unsigned char,unsigned __int64,unsigned __int64,_EVENT_FILTER_DESCRIPTOR *,void *);
void TlgAggregateInternalRegisteredProviderEtwCallback(_GUID const *,unsigned long,unsigned char,unsigned __int64,unsigned __int64,_EVENT_FILTER_DESCRIPTOR *,void *);
void __scrt_initialize_type_info();
void __scrt_throw_std_bad_alloc();
void __scrt_throw_std_bad_array_new_length();
void __scrt_uninitialize_type_info();
void _tlgWriteActivityAutoStop<0,5>(_tlgProvider_t const *,_GUID const *);
void _tlgWriteActivityAutoStop<70368744177664,5>(_tlgProvider_t const *,_GUID const *);
void operator delete(void *);
void operator delete(void *,unsigned __int64);
void wil_StagingConfig_LogStagedFeatureUsage(unsigned int,unsigned int,unsigned char);
void wil_details_FeatureReporting_IncrementOpportunityInCache(wil_details_FeatureReportingCache *,wil_details_ServiceReportingKind,unsigned int,wil_details_RecordUsageResult *);
void wil_details_FeatureReporting_IncrementUsageInCache(wil_details_FeatureReportingCache *,wil_details_ServiceReportingKind,unsigned int,wil_details_RecordUsageResult *);
void wil_details_RecordCachedUsage(unsigned int,wil_details_FeatureReportingCache *,void (*)(unsigned int,unsigned int,unsigned int,char const *));
wil_details_RecordUsageResult wil_details_FeatureReporting_RecordUsageInCache(wil_details_FeatureReportingCache *,wil_details_ServiceReportingKind,unsigned int,unsigned int);
