class CertificateUtil
{
	static long GuidStringFromByteArray(unsigned char * const,unsigned long,unsigned short * *);
public:
	static _CERT_EXTENSION * FindExtensionByOid(char const *,_CERT_CONTEXT const *);
	static long DoesExtensionWithValueExist(char const *,unsigned short const *,_CERT_CONTEXT const *,int *);
	static long FindAllCertificatesByOidValue(_CERTFICATE_LOCATION,char const *,unsigned short const *,_CERT_CONTEXT const * * const,unsigned long *);
	static long FindExtensionGuidValueByOid(char const *,_CERT_CONTEXT const *,unsigned short * *);
	static long FindExtensionStrValueByOid(char const *,_CERT_CONTEXT const *,unsigned short * *);
};

struct DeviceRegistrationStateApi
{
	static long CompareTenantId(_CERT_CONTEXT const *,unsigned short const *,int *);
	static long GetDeviceJoinInfo(unsigned short const *,INFO_KIND,_DSREG_JOIN_INFO_1 * *);
	static long GetJoinCertificate(unsigned short const *,_JOIN_TYPE,INFO_KIND,_CERT_CONTEXT const * *);
	static long GetTenantId(_CERT_CONTEXT const *,unsigned short * *,_DSR_INSTANCE *);
	static long GetWorkplaceJoinInfo(unsigned short const *,INFO_KIND,_DSREG_JOIN_INFO_1 * *);
	static long IsJoined(unsigned short const *,_JOIN_TYPE,int *,int *,_CERT_CONTEXT const * *);
	static long PopulateJoinInfo(_JOIN_TYPE,_CERT_CONTEXT const *,_DSREG_JOIN_INFO_1 * *);
};

class JoinStatusStorage
{
	static JoinStatusStorage::struct_join_status_reg_key_info DeviceJoinStatusRegKeyInfo;
	static JoinStatusStorage::struct_join_status_reg_key_info WorkplaceJoinStatusRegKeyInfo;
	static long ReadDeviceKey(struct_join_status *,HKEY__ *,unsigned short const *,unsigned short const *,int);
	static long ReadJoinStatus(unsigned short const *,unsigned short const *,int,struct_join_status *,HKEY__ *,JoinStatusStorage::struct_join_status_reg_key_info const *);
	static long ReadTenantKey(struct_join_status *,HKEY__ *,unsigned short const *,unsigned short const *);
	static long SaveTenantKey(struct_join_status *,HKEY__ *,unsigned short const *,unsigned short const *);
	static long SetDefaultDiscoveryMetadata(struct_join_status *,HKEY__ *,unsigned short const *,unsigned short const *);
public:
	static long ReadDeviceJoinStatus(unsigned short const *,unsigned short const *,int,struct_join_status *);
	static long ReadWorkplaceJoinStatus(unsigned short const *,unsigned short const *,int,struct_join_status *);
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
	static long WriteRegistryFailureEvent(unsigned long);
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

		struct ComPtr<ICredentialProviderBioEvents>
		{
			~ComPtr<ICredentialProviderBioEvents>();
		};

		struct ComPtr<ICredentialProviderCredential>
		{
			~ComPtr<ICredentialProviderCredential>();
		};

		struct ComPtr<ICredentialProviderCredentialEvents2>
		{
			~ComPtr<ICredentialProviderCredentialEvents2>();
		};

		struct ComPtr<ICredentialProviderCredentialEvents5>
		{
			~ComPtr<ICredentialProviderCredentialEvents5>();
		};

		struct ComPtr<ICredentialProviderEvents>
		{
			~ComPtr<ICredentialProviderEvents>();
		};

		struct ComPtr<ICredentialProviderTileDataEvents>
		{
			~ComPtr<ICredentialProviderTileDataEvents>();
		};

		struct ComPtr<ICredentialProviderUser>
		{
			~ComPtr<ICredentialProviderUser>();
		};

		struct ComPtr<IGreetingFormatter>
		{
			~ComPtr<IGreetingFormatter>();
		};

		struct ComPtr<NgcPinCredentialContainerCreation>
		{
			~ComPtr<NgcPinCredentialContainerCreation>();
		};

		struct ComPtr<NgcPinCredentialCredUIPinChange>
		{
			~ComPtr<NgcPinCredentialCredUIPinChange>();
		};

		struct ComPtr<NgcPinCredentialLogonUIError>
		{
			~ComPtr<NgcPinCredentialLogonUIError>();
		};

		struct ComPtr<NgcPinCredentialLogonUILocal>
		{
			~ComPtr<NgcPinCredentialLogonUILocal>();
		};

		struct ComPtr<NgcPinCredentialLogonUIOtherUser>
		{
			~ComPtr<NgcPinCredentialLogonUIOtherUser>();
		};

		struct ComPtr<NgcPinCredentialLogonUIResetStatus>
		{
			~ComPtr<NgcPinCredentialLogonUIResetStatus>();
		};

		struct ComPtr<NgcPinCredentialNegotiate>
		{
			~ComPtr<NgcPinCredentialNegotiate>();
		};

		struct ComPtr<NgcPinCredentialPreboot>
		{
			~ComPtr<NgcPinCredentialPreboot>();
		};

		struct ComPtr<RemoteNgcCredentialInformational>
		{
			~ComPtr<RemoteNgcCredentialInformational>();
		};

		struct ComPtr<RemoteNgcCredentialLogonUIV1>
		{
			~ComPtr<RemoteNgcCredentialLogonUIV1>();
		};

		namespace Details
		{
			class ImplementsHelper<RuntimeClassFlags<2>,0,ChainInterfaces<ICredentialProviderCredential3,ICredentialProviderCredential2,ICredentialProviderCredential,Nil,Nil,Nil,Nil,Nil,Nil,Nil>,ICredentialProviderCredentialWithFieldOptions,ICredentialProviderCredentialWithHiddenCredUISubmitButton>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<2>,0,ChainInterfaces<ICredentialProviderCredential4,ICredentialProviderCredential3,ICredentialProviderCredential2,ICredentialProviderCredential,Nil,Nil,Nil,Nil,Nil,Nil>,ICredentialProviderCredentialWithFieldOptions,ICredentialProviderCredentialWithUIMode,ICredentialProviderCredentialWithHiddenCredUISubmitButton,ICredentialProviderCredentialWithSubmissionOptions>
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

			struct MakeAllocator<NgcPinCredentialLogonUIError>
			{
				~MakeAllocator<NgcPinCredentialLogonUIError>();
			};

			struct MakeAllocator<NgcPinCredentialLogonUILocal>
			{
				~MakeAllocator<NgcPinCredentialLogonUILocal>();
			};

			struct MakeAllocator<NgcPinCredentialLogonUIOtherUser>
			{
				~MakeAllocator<NgcPinCredentialLogonUIOtherUser>();
			};

			struct MakeAllocator<NgcPinCredentialLogonUIResetStatus>
			{
				~MakeAllocator<NgcPinCredentialLogonUIResetStatus>();
			};

			struct MakeAllocator<NgcPinCredentialNegotiate>
			{
				~MakeAllocator<NgcPinCredentialNegotiate>();
			};

			struct MakeAllocator<NgcPinCredentialPreboot>
			{
				~MakeAllocator<NgcPinCredentialPreboot>();
			};

			struct MakeAllocator<RemoteNgcCredentialInformational>
			{
				~MakeAllocator<RemoteNgcCredentialInformational>();
			};

			struct MakeAllocator<RemoteNgcCredentialLogonUIV1>
			{
				~MakeAllocator<RemoteNgcCredentialLogonUIV1>();
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

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ChainInterfaces<ICredentialProviderCredential3,ICredentialProviderCredential2,ICredentialProviderCredential,Nil,Nil,Nil,Nil,Nil,Nil,Nil>,ICredentialProviderCredentialWithFieldOptions,ICredentialProviderCredentialWithHiddenCredUISubmitButton>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ChainInterfaces<ICredentialProviderCredential4,ICredentialProviderCredential3,ICredentialProviderCredential2,ICredentialProviderCredential,Nil,Nil,Nil,Nil,Nil,Nil>,ICredentialProviderCredentialWithFieldOptions,ICredentialProviderCredentialWithUIMode,ICredentialProviderCredentialWithHiddenCredUISubmitButton,ICredentialProviderCredentialWithSubmissionOptions>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ICredentialProvider,ICredentialProviderSetUserArray,ICredentialProviderWithDisplayState>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ICredentialProvider,ICredentialProviderSetUserArray>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			bool TerminateMap(Details::ModuleBase *,unsigned short const *,bool);
			long CreateClassFactory<SimpleClassFactory<NgcPinProvider,0> >(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateClassFactory<SimpleClassFactory<RemoteNgcProvider,0> >(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long GetCacheEntry(Details::ModuleBase *,unsigned int *,_GUID const &,Details::CreatorMap const *,IUnknown * *);
			long MakeAndInitialize<NgcPinCredentialLogonUIError,ICredentialProviderCredential,NgcPinCredentialLogonUIInitializationContext &>(ICredentialProviderCredential * *,NgcPinCredentialLogonUIInitializationContext &);
			long MakeAndInitialize<NgcPinCredentialLogonUILocal,ICredentialProviderCredential,NgcPinCredentialLogonUIInitializationContext &>(ICredentialProviderCredential * *,NgcPinCredentialLogonUIInitializationContext &);
			long MakeAndInitialize<NgcPinCredentialLogonUIOtherUser,ICredentialProviderCredential,NgcPinCredentialLogonUIInitializationContext &>(ICredentialProviderCredential * *,NgcPinCredentialLogonUIInitializationContext &);
			long MakeAndInitialize<NgcPinCredentialLogonUIResetStatus,ICredentialProviderCredential,NgcPinCredentialLogonUIInitializationContext &>(ICredentialProviderCredential * *,NgcPinCredentialLogonUIInitializationContext &);
			long MakeAndInitialize<NgcPinCredentialNegotiate,ICredentialProviderCredential,NgcPinCredentialLogonUIInitializationContext &>(ICredentialProviderCredential * *,NgcPinCredentialLogonUIInitializationContext &);
			long MakeAndInitialize<RemoteNgcCredentialLogonUIV1,ICredentialProviderCredential,RemoteNgcCredentialLogonUIInitializationContext &>(ICredentialProviderCredential * *,RemoteNgcCredentialLogonUIInitializationContext &);
		};

		class Module<1,Details::DefaultModule<1> >
		{
			static bool isInitialized;
		public:
			virtual long RegisterCOMObject(unsigned short const *,_GUID *,IClassFactory * *,unsigned long *,unsigned int);
			virtual long RegisterWinRTObject(unsigned short const *,unsigned short const * *,<unnamed-type-RO_REGISTRATION_COOKIE> * *,unsigned int);
			virtual long UnregisterCOMObject(unsigned short const *,unsigned long *,unsigned int);
			virtual long UnregisterWinRTObject(unsigned short const *,<unnamed-type-RO_REGISTRATION_COOKIE> *);
			virtual unsigned long DecrementObjectCount();
			virtual unsigned long IncrementObjectCount();
		};

		struct SimpleClassFactory<NgcPinProvider,0>
		{
			virtual long CreateInstance(IUnknown *,_GUID const &,void * *);
		};

		struct SimpleClassFactory<RemoteNgcProvider,0>
		{
			virtual long CreateInstance(IUnknown *,_GUID const &,void * *);
		};

		namespace Wrappers
		{
			struct CriticalSection
			{
				~CriticalSection();
			};

			namespace Details
			{
				struct SyncLockCriticalSection
				{
					~SyncLockCriticalSection();
				};

			};

			class HandleT<DsrJoinInfoHandleTraits>
			{
			protected:
				virtual bool InternalClose();
			public:
				~HandleT<DsrJoinInfoHandleTraits>();
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
			};

			class HandleT<LsaPolicyHandleTraits>
			{
			protected:
				virtual bool InternalClose();
			public:
				~HandleT<LsaPolicyHandleTraits>();
			};

			class HandleT<NCryptKeyHandleTraits>
			{
			protected:
				virtual bool InternalClose();
			public:
				~HandleT<NCryptKeyHandleTraits>();
			};

			class HandleT<NCryptProvHandleTraits>
			{
			protected:
				virtual bool InternalClose();
			public:
				~HandleT<NCryptProvHandleTraits>();
			};

			class HandleT<RegKeyHandleTraits>
			{
			protected:
				virtual bool InternalClose();
			public:
				~HandleT<RegKeyHandleTraits>();
			};

			class HandleT<RpcBindingHandleTraits>
			{
			protected:
				virtual bool InternalClose();
			public:
				~HandleT<RpcBindingHandleTraits>();
			};

			class HandleT<SecurityDescriptorTraits>
			{
			protected:
				virtual bool InternalClose();
			public:
				~HandleT<SecurityDescriptorTraits>();
			};

			class HandleT<TpCleanupGroupTraits>
			{
			protected:
				virtual bool InternalClose();
			public:
				~HandleT<TpCleanupGroupTraits>();
			};

			class HandleT<TpEnvironmentTraits>
			{
			protected:
				virtual bool InternalClose();
			public:
				~HandleT<TpEnvironmentTraits>();
			};

		};

	};

};

namespace NgcCredProv
{
	struct NgcPinResetScenarioInfo
	{
		virtual long AreScenarioPrerequisitesSatisfied(ScenarioPrerequisitesStatus *);
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
	long GetPinBlockProtectionText(bool,unsigned short * *);
	long GetPinResetInProgressUser(unsigned short * *);
	long GetProgressiveLockoutText(unsigned long,unsigned short * *);
	long GetSoftLockoutText(unsigned short * *);
	long GetTpmLockoutText(NgcUtils::UserAccountType,unsigned short * *);
	long GetUnexpectedErrorLockoutText(NgcUtils::UserAccountType,unsigned short * *);
	long GetUserAssociatedSessionId(unsigned short const *,unsigned long *);
	long IsPinResetScenarioEnabled(NgcCredProv::PinResetSupportedScenario,bool *);
	long RespondToPinTypeCheckboxClick(ICredentialProviderCredential const *,Microsoft::WRL::ComPtr<ICredentialProviderCredentialEvents2> const &,NgcPinCredentialType,bool,bool);
	long SetPinResetInProgressUser(unsigned short const *);
	long ShowForgotPinDetails(Microsoft::WRL::ComPtr<ICredentialProviderCredentialEvents2> const &,NgcPinCredentialType);
	long ShowPinPolicyDetails(Microsoft::WRL::ComPtr<ICredentialProviderCredentialEvents2> const &,NgcPinCredentialType,NgcPolicy::NgcPolicy const &);
};

class NgcPinCredential
{
protected:
	static bool ArePinCharactersValid(std::basic_string<unsigned short,std::char_traits<unsigned short>,wil::secure_allocator<unsigned short> > const &);
	static bool IsChallengePhraseValid(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &);
	virtual long AdviseInternal(ICredentialProviderCredentialEvents *);
	virtual long CommandLinkClickedInternal(unsigned long);
	virtual long GetBitmapBufferValueInternal(unsigned long,unsigned long *,unsigned char * *);
	virtual long GetBitmapValueInternal(unsigned long,HBITMAP__ * *);
	virtual long GetCheckboxValueInternal(unsigned long,int *,unsigned short * *);
	virtual long GetComboBoxValueAtInternal(unsigned long,unsigned long,unsigned short * *);
	virtual long GetComboBoxValueCountInternal(unsigned long,unsigned long *,unsigned long *);
	virtual long GetSerializationInternal(_CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE *,_CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION *,unsigned short * *,_CREDENTIAL_PROVIDER_STATUS_ICON *);
	virtual long GetStringValueInternal(unsigned long,unsigned short * *);
	virtual long GetSubmissionOptionsInternal(SERIALIZATION_FLAGS *);
	virtual long GetSubmitButtonValueInternal(unsigned long,unsigned long *);
	virtual long GetTextFieldMaxLengthInternal(unsigned long,unsigned long *);
	virtual long GetUIModeInternal(_CREDENTIAL_PROVIDER_CREDENTIAL_UI_MODE *);
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
	NgcPinCredential();
	virtual long Advise(ICredentialProviderCredentialEvents *);
	virtual long CommandLinkClicked(unsigned long);
	virtual long GetBitmapBufferValue(unsigned long,unsigned long *,unsigned char * *);
	virtual long GetBitmapValue(unsigned long,HBITMAP__ * *);
	virtual long GetCheckboxValue(unsigned long,int *,unsigned short * *);
	virtual long GetComboBoxValueAt(unsigned long,unsigned long,unsigned short * *);
	virtual long GetComboBoxValueCount(unsigned long,unsigned long *,unsigned long *);
	virtual long GetFieldOptions(unsigned long,CREDENTIAL_PROVIDER_CREDENTIAL_FIELD_OPTIONS *);
	virtual long GetFieldState(unsigned long,_CREDENTIAL_PROVIDER_FIELD_STATE *,_CREDENTIAL_PROVIDER_FIELD_INTERACTIVE_STATE *);
	virtual long GetSerialization(_CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE *,_CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION *,unsigned short * *,_CREDENTIAL_PROVIDER_STATUS_ICON *);
	virtual long GetStringValue(unsigned long,unsigned short * *);
	virtual long GetSubmissionOptions(SERIALIZATION_FLAGS *);
	virtual long GetSubmitButtonValue(unsigned long,unsigned long *);
	virtual long GetTextFieldMaxLength(unsigned long,unsigned long *);
	virtual long GetUIMode(_CREDENTIAL_PROVIDER_CREDENTIAL_UI_MODE *);
	virtual long GetUserSid(unsigned short * *);
	virtual long ReportResult(long,long,unsigned short * *,_CREDENTIAL_PROVIDER_STATUS_ICON *);
	virtual long SetCheckboxValue(unsigned long,int);
	virtual long SetComboBoxSelectedValue(unsigned long,unsigned long);
	virtual long SetDeselected();
	virtual long SetSelected(int *);
	virtual long SetStringValue(unsigned long,unsigned short const *);
	virtual long ShouldHideCredUISubmitButton(int *);
	virtual long UnAdvise();
	virtual ~NgcPinCredential();
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
public:
	NgcPinCredentialContainerCreation();
	virtual long RuntimeClassInitialize(unsigned char const *,unsigned long,std::function<long (unsigned long)> const &);
};

class NgcPinCredentialCredUI
{
protected:
	virtual long GetBitmapBufferValueInternal(unsigned long,unsigned long *,unsigned char * *);
	virtual long GetBitmapValueInternal(unsigned long,HBITMAP__ * *);
	virtual long GetFieldStateInternal(unsigned long,_CREDENTIAL_PROVIDER_FIELD_STATE *,_CREDENTIAL_PROVIDER_FIELD_INTERACTIVE_STATE *);
public:
	NgcPinCredentialCredUI();
	virtual ~NgcPinCredentialCredUI();
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
public:
	NgcPinCredentialCredUIPinChange();
	virtual long RuntimeClassInitialize(unsigned char const *,unsigned long,std::function<long (unsigned long)> const &);
};

class NgcPinCredentialLogonUI
{
protected:
	virtual long GetBitmapBufferValueInternal(unsigned long,unsigned long *,unsigned char * *);
	virtual long GetBitmapValueInternal(unsigned long,HBITMAP__ * *);
	virtual long GetFieldStateInternal(unsigned long,_CREDENTIAL_PROVIDER_FIELD_STATE *,_CREDENTIAL_PROVIDER_FIELD_INTERACTIVE_STATE *);
	virtual long GetSubmitButtonValueInternal(unsigned long,unsigned long *);
	virtual long GetUserSidInternal(unsigned short * *);
	virtual long ReportResultInternal(long,long,unsigned short * *,_CREDENTIAL_PROVIDER_STATUS_ICON *);
public:
	NgcPinCredentialLogonUI();
	virtual ~NgcPinCredentialLogonUI();
};

class NgcPinCredentialLogonUIError
{
	long RespondToResetDeviceLink();
	virtual long BuildLogonErrorString(long,long,unsigned short * *);
	virtual long CommandLinkClickedInternal(unsigned long);
	virtual long GetCheckboxValueInternal(unsigned long,int *,unsigned short * *);
	virtual long GetFieldOptionsInternal(unsigned long,CREDENTIAL_PROVIDER_CREDENTIAL_FIELD_OPTIONS *);
	virtual long GetStringValueInternal(unsigned long,unsigned short * *);
	virtual long GetUIModeInternal(_CREDENTIAL_PROVIDER_CREDENTIAL_UI_MODE *);
	virtual long RespondToReportResult(long,long);
	virtual long SerializeResponse(unsigned char * *,unsigned long *,bool *,_CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE *,unsigned short * *);
	virtual long ValidateCredential(bool *,unsigned short * *);
	void InitializeDefaultFieldStateInfo();
public:
	virtual long RuntimeClassInitialize(NgcPinCredentialLogonUIInitializationContext const &);
};

struct NgcPinCredentialLogonUIInitializationContext
{
	NgcPinCredentialLogonUIInitializationContext(bool);
	~NgcPinCredentialLogonUIInitializationContext();
};

class NgcPinCredentialLogonUILocal
{
protected:
	long ClearPin();
	long GetPinProperties(bool *,unsigned long *,unsigned long *,unsigned long *,unsigned long *,bool *,unsigned long *,bool *);
	long HandlePinChangeError(long,unsigned char * *,unsigned long *,bool *,_CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE *,unsigned short * *);
	long HandleSerializationError(long,unsigned char * *,unsigned long *,bool *,_CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE *,unsigned short * *);
	long SerializeAutologonResponse(unsigned char * *,unsigned long *,bool *,_CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE *,unsigned short * *);
	long SerializeContainerCreationResponse(unsigned char * *,unsigned long *,bool *,_CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE *,unsigned short * *);
	long SerializeConvenienceResponse(unsigned char * *,unsigned long *,bool *,_CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE *,unsigned short * *);
	long SerializeNgcResponse(unsigned char * *,unsigned long *,bool *,_CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE *,unsigned short * *);
	long SerializePasswordChangeResponse(unsigned char * *,unsigned long *,bool *,_CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE *,unsigned short * *);
	long SerializePasswordResponse(unsigned char * *,unsigned long *,bool *,_CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE *,unsigned short * *);
	long SerializePinChangeResponse(unsigned char * *,unsigned long *,bool *,_CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE *,unsigned short * *);
	long SerializeResponseInternal(unsigned char * *,unsigned long *,bool *,_CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE *,unsigned short * *);
	long ShowPinPolicyDetails();
	long ValidateChallengePhrase(bool *,unsigned short * *);
	long ValidateNewPassword(bool *,unsigned short * *);
	long ValidateNewPin(bool *,unsigned short * *);
	long ValidatePassword(bool *,unsigned short * *);
	long ValidatePin(bool *,unsigned short * *);
	long WillNextPinAttemptWipeDevice(bool *);
	virtual long BuildLogonErrorString(long,long,unsigned short * *);
	virtual long ChangeUIDisposition(NgcPinCredentialLogonUILocal::UITransition);
	virtual long CommandLinkClickedInternal(unsigned long);
	virtual long GetCheckboxValueInternal(unsigned long,int *,unsigned short * *);
	virtual long GetFieldOptionsInternal(unsigned long,CREDENTIAL_PROVIDER_CREDENTIAL_FIELD_OPTIONS *);
	virtual long GetStringValueInternal(unsigned long,unsigned short * *);
	virtual long GetSubmissionOptionsInternal(SERIALIZATION_FLAGS *);
	virtual long GetSubmitButtonValueInternal(unsigned long,unsigned long *);
	virtual long GetTextFieldMaxLengthInternal(unsigned long,unsigned long *);
	virtual long GetUIModeInternal(_CREDENTIAL_PROVIDER_CREDENTIAL_UI_MODE *);
	virtual long RespondToForgotPinLink();
	virtual long RespondToReportResult(long,long);
	virtual long SerializeResponse(unsigned char * *,unsigned long *,bool *,_CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE *,unsigned short * *);
	virtual long SetCheckboxValueInternal(unsigned long,int);
	virtual long SetDeselectedInternal();
	virtual long SetSelectedInternal(int *);
	virtual long SetStringValueInternal(unsigned long,unsigned short const *);
	virtual long ValidateCredential(bool *,unsigned short * *);
public:
	NgcPinCredentialLogonUILocal();
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
	virtual long RespondToForgotPinLink();
	virtual long SetDeselectedInternal();
	virtual long SetSelectedInternal(int *);
	virtual long SetStringValueInternal(unsigned long,unsigned short const *);
	virtual long ValidateCredential(bool *,unsigned short * *);
	void InitializeDefaultFieldStateInfo();
public:
	virtual long RuntimeClassInitialize(NgcPinCredentialLogonUIInitializationContext const &);
};

class NgcPinCredentialLogonUIResetStatus
{
	long RespondToCancelResetLink();
	long UpdateResetScenarioProgress(_NgcPinResetScenarioState);
	static long GetResetScenarioProgressText(_NgcPinResetScenarioState,unsigned short * *);
	virtual long AdviseInternal(ICredentialProviderCredentialEvents *);
	virtual long BuildLogonErrorString(long,long,unsigned short * *);
	virtual long CommandLinkClickedInternal(unsigned long);
	virtual long GetCheckboxValueInternal(unsigned long,int *,unsigned short * *);
	virtual long GetFieldOptionsInternal(unsigned long,CREDENTIAL_PROVIDER_CREDENTIAL_FIELD_OPTIONS *);
	virtual long GetStringValueInternal(unsigned long,unsigned short * *);
	virtual long GetSubmissionOptionsInternal(SERIALIZATION_FLAGS *);
	virtual long GetUIModeInternal(_CREDENTIAL_PROVIDER_CREDENTIAL_UI_MODE *);
	virtual long RespondToReportResult(long,long);
	virtual long SerializeResponse(unsigned char * *,unsigned long *,bool *,_CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE *,unsigned short * *);
	virtual long UnAdviseInternal();
	virtual long ValidateCredential(bool *,unsigned short * *);
	void InitializeDefaultFieldStateInfo();
public:
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
	virtual long RuntimeClassInitialize(NgcPinCredentialLogonUIInitializationContext const &);
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
public:
	virtual long RuntimeClassInitialize(unsigned char const *,unsigned long,std::function<long (unsigned long)> const &);
};

class NgcPinCredentialPreboot
{
	long BuildSerializationBlob();
	virtual long BuildLogonErrorString(long,long,unsigned short * *);
	virtual long GetFieldOptionsInternal(unsigned long,CREDENTIAL_PROVIDER_CREDENTIAL_FIELD_OPTIONS *);
	virtual long GetStringValueInternal(unsigned long,unsigned short * *);
	virtual long ReportResultInternal(long,long,unsigned short * *,_CREDENTIAL_PROVIDER_STATUS_ICON *);
	virtual long RespondToReportResult(long,long);
	virtual long SerializeResponse(unsigned char * *,unsigned long *,bool *,_CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE *,unsigned short * *);
	virtual long SetSelectedInternal(int *);
	virtual long ValidateCredential(bool *,unsigned short * *);
public:
	long RuntimeClassInitialize(std::vector<unsigned char,std::allocator<unsigned char> > const &,std::vector<unsigned char,wil::secure_allocator<unsigned char> > const &,bool,std::function<long (long)> const &);
	virtual long RuntimeClassInitialize(NgcPinCredentialLogonUIInitializationContext const &);
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
	virtual long SetUsageScenario(_CREDENTIAL_PROVIDER_USAGE_SCENARIO,unsigned long);
	virtual long SetUserArray(ICredentialProviderUserArray *);
	virtual long UnAdvise();
	virtual ~NgcPinProvider();
};

struct NgcPinScenario
{
	virtual long SetDisplayState(_CREDENTIAL_PROVIDER_DISPLAY_STATE_FLAGS);
	virtual long SetUserArray(ICredentialProviderUserArray *);
};

class NgcPinScenarioCredUI
{
	long BuildCredentialList();
	long GetCurrentUserNegotiateCredentials(unsigned char const *,unsigned long,bool,std::vector<Microsoft::WRL::ComPtr<ICredentialProviderCredential>,std::allocator<Microsoft::WRL::ComPtr<ICredentialProviderCredential> > > *);
	long GetInCredNegotiateCredentials(unsigned char const *,unsigned long,bool,std::vector<Microsoft::WRL::ComPtr<ICredentialProviderCredential>,std::allocator<Microsoft::WRL::ComPtr<ICredentialProviderCredential> > > *);
	long GetNegotiateCredentials(unsigned char const *,unsigned long,bool,std::vector<Microsoft::WRL::ComPtr<ICredentialProviderCredential>,std::allocator<Microsoft::WRL::ComPtr<ICredentialProviderCredential> > > *);
	long GetNegotiateCredentialsFromUserArray(std::vector<Microsoft::WRL::ComPtr<ICredentialProviderCredential>,std::allocator<Microsoft::WRL::ComPtr<ICredentialProviderCredential> > > *);
	long RequestRebuildCredential(unsigned long);
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

class NgcPinScenarioLogonUI
{
	long BuildCredentialList(unsigned long *);
	long BuildCredentialListInternal(unsigned long *);
	long BuildPrebootCredentialList();
	long IsPolicyEnforcingContainerCreation(bool *);
	long LogonFailureNotificationRoutine(long);
	long RequestDismissLockscreen();
	static long CredentialRefreshNotification(_WNF_STATE_NAME,unsigned long,_WNF_TYPE_ID *,void *,void const *,unsigned long);
public:
	virtual long Advise(ICredentialProviderEvents *,unsigned __int64);
	virtual long GetCredentialAt(unsigned long,ICredentialProviderCredential * *);
	virtual long GetCredentialCount(unsigned long *,unsigned long *,int *);
	virtual long GetFieldDescriptorAt(unsigned long,_CREDENTIAL_PROVIDER_FIELD_DESCRIPTOR * *);
	virtual long GetFieldDescriptorCount(unsigned long *);
	virtual long SetDisplayState(_CREDENTIAL_PROVIDER_DISPLAY_STATE_FLAGS);
	virtual long SetSerialization(_CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION const *);
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
		long Merge(NgcPolicy const &);
	};

	long GetPinPolicyType(NgcPolicy::NgcPolicy const &,NgcPolicy::NgcPinPolicyType *);
	long MakePolicyNumericOnly(NgcPolicy::NgcPolicy const &,NgcPolicy::NgcPolicy *);
};

namespace NgcPreboot
{
	long ClearProvisioningRequiredFlag(unsigned short const *,NgcPreboot::AccountCapability);
	long IsAccountEnabled(unsigned short const *,NgcPreboot::AccountCapability,bool *,bool *);
	long ProvisionAccount(unsigned short const *,unsigned short const *,unsigned short const *,bool);
};

class NgcStatusStorage
{
	static unsigned long ReadKey(HKEY__ *,unsigned short const *,_GUID,STRUCT_NGC_REG_KEY *);
	void Cleanup(STRUCT_NGC_REG_KEY *);
public:
	STRUCT_NGC_REG_KEY GetKey();
	long Load(HKEY__ *,unsigned short const *);
	static int IsKeyIdEmpty(_GUID const *);
	void Cleanup();
};

namespace NgcUtils
{
	class BluetoothRadioObserver
	{
		long MonitorRadioState(_DEV_QUERY_RESULT_ACTION_DATA const *);
		static void RadioStateMonitorCallback(HDEVQUERY__ *,void *,_DEV_QUERY_RESULT_ACTION_DATA const *);
	public:
		long Initialize(std::function<long (BluetoothRadioState)> const &);
		long Start();
		long Stop();
		~BluetoothRadioObserver();
	};

	struct CoInitializer
	{
		~CoInitializer();
	};

	namespace Detail
	{
		long CacheGetUserNameAndDomain(void * const,bool,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *);
		long CacheGetUserSid(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,std::vector<unsigned char,std::allocator<unsigned char> > *);
	};

	struct NgcKeyName
	{
		static long BuildNgcKeyNameString(std::vector<unsigned char,std::allocator<unsigned char> > const &,_GUID const &,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *);
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
		long Bind();
		long Rebind();
		void * BindingHandle();
	};

	bool IsCurrentMachineDomainJoinedOrJoinedPlusPlus(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *);
	bool IsRemoteNgcEnabledForCurrentSku();
	long AreLogonCredsAvailableForAnyUser(bool *);
	long CacheUserNameAndSid(void * const,unsigned short const *,bool);
	long CacheUserNameAndSid(void * const,unsigned short const *,unsigned short const *,bool);
	long ClearDestructiveResetInProgressStatus(unsigned short const *);
	long CoMemAllocCopy(void const *,unsigned __int64,void * *);
	long CoMemResourceFormatStringAllocCopy(HINSTANCE__ *,unsigned int,unsigned short * *,...);
	long CoMemResourceStringAllocCopy(HINSTANCE__ *,unsigned int,unsigned short * *);
	long GetAuthPackageId(unsigned short const *,unsigned long *);
	long GetMachineName(unsigned short * *);
	long GetUserAccountType(void *,NgcUtils::UserAccountType *);
	long GetUserNameAndDomain(void * const,bool,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,bool *);
	long GetUserSid(unsigned short const *,std::vector<unsigned char,std::allocator<unsigned char> > *,bool *);
	long IsConsumerUser(unsigned short const *,bool *);
	long IsDestructiveResetInProgress(unsigned short const *,bool *);
	long IsTpm20(bool *);
	long NgcCredProvEnumLogonKeys(std::vector<unsigned char,std::allocator<unsigned char> > const &,std::vector<std::shared_ptr<KeyEnumInfo>,std::allocator<std::shared_ptr<KeyEnumInfo> > > *);
	long QueryLogonCredsAvailableRegState(std::vector<unsigned char,std::allocator<unsigned char> > const &,NgcUtils::LogonCredsAvailableRegState *);
	void ConvertWideCharToMultiByte(std::basic_string<unsigned short,std::char_traits<unsigned short>,wil::secure_allocator<unsigned short> > const &,std::basic_string<char,std::char_traits<char>,wil::secure_allocator<char> > *);
};

namespace PinPolicy
{
	struct PinPolicyRules
	{
		bool IsStricterThan(PinPolicyRules const &);
		long Initialize(std::vector<unsigned char,std::allocator<unsigned char> > const &);
		long ValidatePin(std::basic_string<unsigned short,std::char_traits<unsigned short>,wil::secure_allocator<unsigned short> > const &,PinValidationResult *);
		long ValidateRules();
		static bool DoesPinContainSequence(std::basic_string<unsigned short,std::char_traits<unsigned short>,wil::secure_allocator<unsigned short> > const &);
		static long ConvertFromSmartCardPinCharacterPolicyOption(Windows::Devices::SmartCards::SmartCardPinCharacterPolicyOption,_PIN_CHARACTER_POLICY_OPTION *);
	};

};

namespace PolicyManager
{
	long GetDefaultPolicy(unsigned short const *,bool,NgcPolicy::NgcPolicy *);
	long GetManagedPolicy(unsigned short const *,NgcPolicy::NgcPolicy *,PolicyManager::PolicyType *);
	long QueryIsRemoteNgcEnabled(unsigned short const *,_NGC_ENABLED_STATE *);
	unsigned long GetDefaultPinMinLength(unsigned short const *);
};

class RegistrationCertStatus
{
	static long GetCertificate(_CERTFICATE_LOCATION,char const *,unsigned short const *,INFO_KIND,_CERT_CONTEXT const * *);
public:
	static long GetDeviceCertificate(INFO_KIND,_CERT_CONTEXT const * *);
	static long GetDeviceId(_CERT_CONTEXT const *,unsigned short * *);
	static long GetTenantId(_CERT_CONTEXT const *,unsigned short * *);
};

class RemoteNgcCredential
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
	virtual long ShouldHideCredUISubmitButtonInternal(int *);
	virtual long UnAdviseInternal();
public:
	RemoteNgcCredential();
	virtual long Advise(ICredentialProviderCredentialEvents *);
	virtual long CommandLinkClicked(unsigned long);
	virtual long GetBitmapBufferValue(unsigned long,unsigned long *,unsigned char * *);
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
	virtual long ReportResult(long,long,unsigned short * *,_CREDENTIAL_PROVIDER_STATUS_ICON *);
	virtual long SetCheckboxValue(unsigned long,int);
	virtual long SetComboBoxSelectedValue(unsigned long,unsigned long);
	virtual long SetDeselected();
	virtual long SetSelected(int *);
	virtual long SetStringValue(unsigned long,unsigned short const *);
	virtual long ShouldHideCredUISubmitButton(int *);
	virtual long UnAdvise();
	virtual ~RemoteNgcCredential();
};

class RemoteNgcCredentialCredUI
{
protected:
	virtual long GetBitmapBufferValueInternal(unsigned long,unsigned long *,unsigned char * *);
	virtual long GetBitmapValueInternal(unsigned long,HBITMAP__ * *);
	virtual long GetFieldStateInternal(unsigned long,_CREDENTIAL_PROVIDER_FIELD_STATE *,_CREDENTIAL_PROVIDER_FIELD_INTERACTIVE_STATE *);
public:
	virtual ~RemoteNgcCredentialCredUI();
};

class RemoteNgcCredentialInformational
{
	long GetResourceStringFromRequestStatus(_NgcRemoteRequestStatus,unsigned short * *);
	long HandleRemoteRequestStatus(_NgcRemoteRequestStatus,bool *);
	long MonitorRemoteRequestStatusArrival();
	long RespondToTryAgainLink();
	static void RemoteRequestStatusMonitorCallback(_TP_CALLBACK_INSTANCE *,void *);
protected:
	virtual long AdviseInternal(ICredentialProviderCredentialEvents *);
	virtual long CommandLinkClickedInternal(unsigned long);
	virtual long GetFieldOptionsInternal(unsigned long,CREDENTIAL_PROVIDER_CREDENTIAL_FIELD_OPTIONS *);
	virtual long GetStringValueInternal(unsigned long,unsigned short * *);
	virtual long SerializeResponse(unsigned char * *,unsigned long *,bool *,_CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE *,unsigned short * *);
	virtual long SetDeselectedInternal();
	virtual long SetSelectedInternal(int *);
	virtual long ShouldHideCredUISubmitButtonInternal(int *);
	virtual long UnAdviseInternal();
	virtual long ValidateCredential(bool *,unsigned short * *);
public:
	virtual long RuntimeClassInitialize(unsigned char const *,unsigned long,std::function<long (void (*)(_TP_CALLBACK_INSTANCE *,void *),void *)> const &);
};

class RemoteNgcCredentialLogonUI
{
protected:
	long BuildLogonErrorString(long,long,unsigned short * *);
	virtual long GetBitmapBufferValueInternal(unsigned long,unsigned long *,unsigned char * *);
	virtual long GetBitmapValueInternal(unsigned long,HBITMAP__ * *);
	virtual long GetFieldStateInternal(unsigned long,_CREDENTIAL_PROVIDER_FIELD_STATE *,_CREDENTIAL_PROVIDER_FIELD_INTERACTIVE_STATE *);
	virtual long GetUserSidInternal(unsigned short * *);
	virtual long ReportResultInternal(long,long,unsigned short * *,_CREDENTIAL_PROVIDER_STATUS_ICON *);
	virtual long SerializeResponse(unsigned char * *,unsigned long *,bool *,_CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE *,unsigned short * *);
	virtual long ValidateCredential(bool *,unsigned short * *);
public:
	virtual ~RemoteNgcCredentialLogonUI();
};

struct RemoteNgcCredentialLogonUIInitializationContext
{
	~RemoteNgcCredentialLogonUIInitializationContext();
};

class RemoteNgcCredentialLogonUIV1
{
	long DisplayErrorUX(unsigned short const *,bool);
	long HandleRemoteAuthenticationError(long,bool *);
	long HandleRemoteRequestStatus(_NgcRemoteRequestStatus,bool *);
	long MonitorRemoteKeyArrival();
	long RespondToDescriptionLink();
	long RespondToTryAgainLink();
	static void RemoteKeyMonitorCallback(_TP_CALLBACK_INSTANCE *,void *);
protected:
	virtual long AdviseInternal(ICredentialProviderCredentialEvents *);
	virtual long CommandLinkClickedInternal(unsigned long);
	virtual long GetFieldOptionsInternal(unsigned long,CREDENTIAL_PROVIDER_CREDENTIAL_FIELD_OPTIONS *);
	virtual long GetStringValueInternal(unsigned long,unsigned short * *);
	virtual long RespondToReportResult(long,long);
	virtual long SetDeselectedInternal();
	virtual long SetSelectedInternal(int *);
	virtual long UnAdviseInternal();
public:
	RemoteNgcCredentialLogonUIV1();
	virtual long RuntimeClassInitialize(RemoteNgcCredentialLogonUIInitializationContext const &);
};

struct RemoteNgcProvider
{
	virtual long Advise(ICredentialProviderEvents *,unsigned __int64);
	virtual long GetCredentialAt(unsigned long,ICredentialProviderCredential * *);
	virtual long GetCredentialCount(unsigned long *,unsigned long *,int *);
	virtual long GetFieldDescriptorAt(unsigned long,_CREDENTIAL_PROVIDER_FIELD_DESCRIPTOR * *);
	virtual long GetFieldDescriptorCount(unsigned long *);
	virtual long SetSerialization(_CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION const *);
	virtual long SetUsageScenario(_CREDENTIAL_PROVIDER_USAGE_SCENARIO,unsigned long);
	virtual long SetUserArray(ICredentialProviderUserArray *);
	virtual long UnAdvise();
	virtual ~RemoteNgcProvider();
};

class RemoteNgcScenario
{
	long InitializeThreadPool();
	long RequestBluetoothRadioStateForTileUpdate(NgcUtils::BluetoothRadioState);
public:
	RemoteNgcScenario();
	long RequestPoolWork(void (*)(_TP_CALLBACK_INSTANCE *,void *),void *);
	virtual long Advise(ICredentialProviderEvents *,unsigned __int64);
	virtual long GetCredentialAt(unsigned long,ICredentialProviderCredential * *);
	virtual long GetCredentialCount(unsigned long *,unsigned long *,int *);
	virtual long GetFieldDescriptorAt(unsigned long,_CREDENTIAL_PROVIDER_FIELD_DESCRIPTOR * *);
	virtual long GetFieldDescriptorCount(unsigned long *);
	virtual long SetUserArray(ICredentialProviderUserArray *);
	virtual long UnAdvise();
	virtual ~RemoteNgcScenario();
};

class RemoteNgcScenarioCredUI
{
protected:
	virtual long BuildCredentialList();
public:
	virtual long SetSerialization(_CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION const *);
	virtual long SetUsageScenario(_CREDENTIAL_PROVIDER_USAGE_SCENARIO,unsigned long);
};

class RemoteNgcScenarioLogonUI
{
	long IsRemoteEnabled(bool *);
	long RequestDisplayUserGreeting(void *,unsigned short const *,_BIO_FEEDBACK_PRIORITY);
	long RequestHideUserGreeting();
protected:
	virtual long BuildCredentialList();
public:
	virtual long SetSerialization(_CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION const *);
	virtual long SetUsageScenario(_CREDENTIAL_PROVIDER_USAGE_SCENARIO,unsigned long);
};

struct SafeIntException
{
	SafeIntException(SafeIntError);
};

namespace SafeIntInternal
{
	struct SafeIntExceptionHandler<SafeIntException>
	{
		static void SafeIntOnOverflow();
	};

};

struct TraceLoggingCorrelationVector
{
	TraceLoggingCorrelationVector();
};

struct _TlgCVGetter
{
	_TlgCVGetter(TraceLoggingCorrelationVector *);
};

struct hresult_exception
{
	hresult_exception(hresult_exception const &);
	hresult_exception(long);
	virtual ~hresult_exception();
};

namespace std
{
	struct _Func_class<long,long>
	{
		~_Func_class<long,long>();
	};

	struct _Func_class<long,unsigned long>
	{
		~_Func_class<long,unsigned long>();
	};

	struct _Func_class<long,void (*)(_TP_CALLBACK_INSTANCE *,void *),void *>
	{
		~_Func_class<long,void (*)(_TP_CALLBACK_INSTANCE *,void *),void *>();
	};

	class _Func_impl<_Binder<_Unforced,long ( NgcPinScenarioCredUI::*)(unsigned long),NgcPinScenarioCredUI *,_Ph<1> const &>,allocator<int>,long,unsigned long>
	{
		virtual _Func_base<long,unsigned long> * _Copy(void *);
		virtual _Func_base<long,unsigned long> * _Move(void *);
		virtual type_info const & _Target_type();
		virtual void _Delete_this(bool);
		virtual void const * _Get();
	};

	class _Func_impl<_Binder<_Unforced,long ( NgcPinScenarioLogonUI::*)(long),NgcPinScenarioLogonUI *,_Ph<1> const &>,allocator<int>,long,long>
	{
		virtual _Func_base<long,long> * _Copy(void *);
		virtual _Func_base<long,long> * _Move(void *);
		virtual type_info const & _Target_type();
		virtual void _Delete_this(bool);
		virtual void const * _Get();
	};

	class _Func_impl<_Binder<_Unforced,long ( RemoteNgcScenario::*)(void (*)(_TP_CALLBACK_INSTANCE *,void *),void *),RemoteNgcScenarioCredUI *,_Ph<1> const &,_Ph<2> const &>,allocator<int>,long,void (*)(_TP_CALLBACK_INSTANCE *,void *),void *>
	{
		virtual _Func_base<long,void (*)(_TP_CALLBACK_INSTANCE *,void *),void *> * _Copy(void *);
		virtual _Func_base<long,void (*)(_TP_CALLBACK_INSTANCE *,void *),void *> * _Move(void *);
		virtual type_info const & _Target_type();
		virtual void _Delete_this(bool);
		virtual void const * _Get();
	};

	class _Func_impl<_Binder<_Unforced,long ( RemoteNgcScenario::*)(void (*)(_TP_CALLBACK_INSTANCE *,void *),void *),RemoteNgcScenarioLogonUI *,_Ph<1> const &,_Ph<2> const &>,allocator<int>,long,void (*)(_TP_CALLBACK_INSTANCE *,void *),void *>
	{
		virtual _Func_base<long,void (*)(_TP_CALLBACK_INSTANCE *,void *),void *> * _Copy(void *);
		virtual _Func_base<long,void (*)(_TP_CALLBACK_INSTANCE *,void *),void *> * _Move(void *);
		virtual type_info const & _Target_type();
		virtual void _Delete_this(bool);
		virtual void const * _Get();
	};

	class _Ref_count<NgcUtils::RpcClient>
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	struct _Ref_count_base
	{
		virtual void * _Get_deleter(type_info const &);
	};

	class _Ref_count_obj<KeyEnumInfo>
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	struct _String_val<_Simple_types<unsigned short> >
	{
		static void _Xran();
	};

	struct _Wrap_alloc<allocator<Microsoft::WRL::ComPtr<ICredentialProviderCredential> > >
	{
		void deallocate(Microsoft::WRL::ComPtr<ICredentialProviderCredential> *,unsigned __int64);
		void destroy<Microsoft::WRL::ComPtr<ICredentialProviderCredential> >(Microsoft::WRL::ComPtr<ICredentialProviderCredential> *);
	};

	struct _Wrap_alloc<allocator<shared_ptr<KeyEnumInfo> > >
	{
		void deallocate(shared_ptr<KeyEnumInfo> *,unsigned __int64);
		void destroy<shared_ptr<KeyEnumInfo> >(shared_ptr<KeyEnumInfo> *);
	};

	struct _Wrap_alloc<allocator<unique_ptr<NgcPinScenario::UserAuthInfo,default_delete<NgcPinScenario::UserAuthInfo> > > >
	{
		void deallocate(unique_ptr<NgcPinScenario::UserAuthInfo,default_delete<NgcPinScenario::UserAuthInfo> > *,unsigned __int64);
		void destroy<unique_ptr<NgcPinScenario::UserAuthInfo,default_delete<NgcPinScenario::UserAuthInfo> > >(unique_ptr<NgcPinScenario::UserAuthInfo,default_delete<NgcPinScenario::UserAuthInfo> > *);
	};

	struct _Wrap_alloc<allocator<unique_ptr<RemoteNgcScenario::UserAuthInfo,default_delete<RemoteNgcScenario::UserAuthInfo> > > >
	{
		void deallocate(unique_ptr<RemoteNgcScenario::UserAuthInfo,default_delete<RemoteNgcScenario::UserAuthInfo> > *,unsigned __int64);
		void destroy<unique_ptr<RemoteNgcScenario::UserAuthInfo,default_delete<RemoteNgcScenario::UserAuthInfo> > >(unique_ptr<RemoteNgcScenario::UserAuthInfo,default_delete<RemoteNgcScenario::UserAuthInfo> > *);
	};

	struct _Wrap_alloc<allocator<unsigned char> >
	{
		void deallocate(unsigned char *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<unsigned short> >
	{
		void deallocate(unsigned short *,unsigned __int64);
	};

	struct _Wrap_alloc<wil::secure_allocator<unsigned char> >
	{
		void deallocate(unsigned char *,unsigned __int64);
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

	struct basic_string<char,char_traits<char>,wil::secure_allocator<char> >
	{
		basic_string<char,char_traits<char>,wil::secure_allocator<char> > & append(unsigned __int64,char);
		basic_string<char,char_traits<char>,wil::secure_allocator<char> >(basic_string<char,char_traits<char>,wil::secure_allocator<char> > const &);
		static void _Xlen();
		~basic_string<char,char_traits<char>,wil::secure_allocator<char> >();
	};

	struct basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >
	{
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & append(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & append(unsigned short const * const);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & operator=(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & operator=(unsigned short const * const);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & replace(unsigned __int64,unsigned __int64,unsigned short const * const,unsigned __int64);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > substr(unsigned __int64,unsigned __int64);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >(unsigned short const * const);
		static void _Xlen();
		unsigned __int64 find(unsigned short const * const,unsigned __int64);
		void _Tidy_deallocate();
		void reserve(unsigned __int64);
		void resize(unsigned __int64,unsigned short);
		~basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >();
	};

	struct basic_string<unsigned short,char_traits<unsigned short>,wil::secure_allocator<unsigned short> >
	{
		basic_string<unsigned short,char_traits<unsigned short>,wil::secure_allocator<unsigned short> > & operator=(unsigned short const * const);
		basic_string<unsigned short,char_traits<unsigned short>,wil::secure_allocator<unsigned short> >(unsigned short const * const);
		static void _Xlen();
		void _Tidy_deallocate();
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

	struct function<bool (vector<unsigned char,allocator<unsigned char> >,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,bool)>
	{
		~function<bool (vector<unsigned char,allocator<unsigned char> >,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,bool)>();
	};

	struct function<long ()>
	{
		function<long ()> & operator=(function<long ()> const &);
		function<long ()> & operator=<function<long ()> &,void>(function<long ()> &);
		void swap(function<long ()> &);
		~function<long ()>();
	};

	struct function<long (long)>
	{
		~function<long (long)>();
	};

	struct function<long (unsigned long)>
	{
		function<long (unsigned long)> & operator=(function<long (unsigned long)> const &);
		~function<long (unsigned long)>();
	};

	struct function<long (void (*)(_TP_CALLBACK_INSTANCE *,void *),void *)>
	{
		function<long (void (*)(_TP_CALLBACK_INSTANCE *,void *),void *)> & operator=(function<long (void (*)(_TP_CALLBACK_INSTANCE *,void *),void *)> const &);
		~function<long (void (*)(_TP_CALLBACK_INSTANCE *,void *),void *)>();
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

	class shared_ptr<NgcUtils::RpcClient>
	{
		void _Resetp<NgcUtils::RpcClient>(NgcUtils::RpcClient *);
	public:
		NgcUtils::RpcClient * operator->();
		~shared_ptr<NgcUtils::RpcClient>();
	};

	struct unique_ptr<NgcPinScenario::UserAuthInfo,default_delete<NgcPinScenario::UserAuthInfo> >
	{
		~unique_ptr<NgcPinScenario::UserAuthInfo,default_delete<NgcPinScenario::UserAuthInfo> >();
	};

	struct unique_ptr<NgcUtils::BluetoothRadioObserver::RadioStateMonitorContext,default_delete<NgcUtils::BluetoothRadioObserver::RadioStateMonitorContext> >
	{
		~unique_ptr<NgcUtils::BluetoothRadioObserver::RadioStateMonitorContext,default_delete<NgcUtils::BluetoothRadioObserver::RadioStateMonitorContext> >();
	};

	struct unique_ptr<RemoteNgcCredentialInformational::RemoteRequestStatusMonitorContext,default_delete<RemoteNgcCredentialInformational::RemoteRequestStatusMonitorContext> >
	{
		~unique_ptr<RemoteNgcCredentialInformational::RemoteRequestStatusMonitorContext,default_delete<RemoteNgcCredentialInformational::RemoteRequestStatusMonitorContext> >();
	};

	struct unique_ptr<RemoteNgcCredentialLogonUIV1::RemoteKeyMonitorContext,default_delete<RemoteNgcCredentialLogonUIV1::RemoteKeyMonitorContext> >
	{
		~unique_ptr<RemoteNgcCredentialLogonUIV1::RemoteKeyMonitorContext,default_delete<RemoteNgcCredentialLogonUIV1::RemoteKeyMonitorContext> >();
	};

	struct unique_ptr<RemoteNgcScenario::UserAuthInfo,default_delete<RemoteNgcScenario::UserAuthInfo> >
	{
		~unique_ptr<RemoteNgcScenario::UserAuthInfo,default_delete<RemoteNgcScenario::UserAuthInfo> >();
	};

	struct unique_ptr<_LSA_REFERENCED_DOMAIN_LIST,lsamem_delete<_LSA_REFERENCED_DOMAIN_LIST> >
	{
		~unique_ptr<_LSA_REFERENCED_DOMAIN_LIST,lsamem_delete<_LSA_REFERENCED_DOMAIN_LIST> >();
	};

	struct unique_ptr<_LSA_TRANSLATED_NAME,lsamem_delete<_LSA_TRANSLATED_NAME> >
	{
		~unique_ptr<_LSA_TRANSLATED_NAME,lsamem_delete<_LSA_TRANSLATED_NAME> >();
	};

	struct unique_ptr<unsigned short,rpcmem_delete<unsigned short> >
	{
		~unique_ptr<unsigned short,rpcmem_delete<unsigned short> >();
	};

	class vector<Microsoft::WRL::ComPtr<ICredentialProviderCredential>,allocator<Microsoft::WRL::ComPtr<ICredentialProviderCredential> > >
	{
		static void _Xlength();
		void _Tidy();
	public:
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
		void _Change_array(unique_ptr<NgcPinScenario::UserAuthInfo,default_delete<NgcPinScenario::UserAuthInfo> > * const,unsigned __int64,unsigned __int64);
		void _Tidy();
	public:
		~vector<unique_ptr<NgcPinScenario::UserAuthInfo,default_delete<NgcPinScenario::UserAuthInfo> >,allocator<unique_ptr<NgcPinScenario::UserAuthInfo,default_delete<NgcPinScenario::UserAuthInfo> > > >();
	};

	class vector<unique_ptr<RemoteNgcScenario::UserAuthInfo,default_delete<RemoteNgcScenario::UserAuthInfo> >,allocator<unique_ptr<RemoteNgcScenario::UserAuthInfo,default_delete<RemoteNgcScenario::UserAuthInfo> > > >
	{
		static void _Xlength();
		void _Change_array(unique_ptr<RemoteNgcScenario::UserAuthInfo,default_delete<RemoteNgcScenario::UserAuthInfo> > * const,unsigned __int64,unsigned __int64);
		void _Tidy();
	public:
		~vector<unique_ptr<RemoteNgcScenario::UserAuthInfo,default_delete<RemoteNgcScenario::UserAuthInfo> >,allocator<unique_ptr<RemoteNgcScenario::UserAuthInfo,default_delete<RemoteNgcScenario::UserAuthInfo> > > >();
	};

	class vector<unsigned char,allocator<unsigned char> >
	{
		bool _Buy(unsigned __int64);
		static void _Xlength();
		void _Change_array(unsigned char * const,unsigned __int64,unsigned __int64);
		void _Range_construct_or_tidy<unsigned char *>(unsigned char *,unsigned char *,forward_iterator_tag);
		void _Range_construct_or_tidy<unsigned char const *>(unsigned char const *,unsigned char const *,forward_iterator_tag);
		void _Tidy();
	public:
		vector<unsigned char,allocator<unsigned char> >(unsigned __int64,allocator<unsigned char> const &);
		vector<unsigned char,allocator<unsigned char> >(vector<unsigned char,allocator<unsigned char> > const &);
		void assign<unsigned char *,void>(unsigned char *,unsigned char *);
		void assign<unsigned char const *,void>(unsigned char const *,unsigned char const *);
		~vector<unsigned char,allocator<unsigned char> >();
	};

	class vector<unsigned char,wil::secure_allocator<unsigned char> >
	{
		bool _Buy(unsigned __int64);
		static void _Xlength();
		void _Change_array(unsigned char * const,unsigned __int64,unsigned __int64);
		void _Range_construct_or_tidy<char *>(char *,char *,forward_iterator_tag);
		void _Range_construct_or_tidy<unsigned char const *>(unsigned char const *,unsigned char const *,forward_iterator_tag);
		void _Tidy();
	public:
		vector<unsigned char,wil::secure_allocator<unsigned char> >(unsigned __int64,wil::secure_allocator<unsigned char> const &);
		void assign<_String_iterator<_String_val<_Simple_types<char> > >,void>(_String_iterator<_String_val<_Simple_types<char> > >,_String_iterator<_String_val<_Simple_types<char> > >);
		void assign<unsigned char *,void>(unsigned char *,unsigned char *);
		~vector<unsigned char,wil::secure_allocator<unsigned char> >();
	};

	class vector<unsigned short,allocator<unsigned short> >
	{
		static void _Xlength();
		void _Change_array(unsigned short * const,unsigned __int64,unsigned __int64);
		void _Tidy();
	public:
		vector<unsigned short,allocator<unsigned short> >(unsigned __int64,allocator<unsigned short> const &);
		~vector<unsigned short,allocator<unsigned short> >();
	};

	struct wstring_convert<codecvt<unsigned short,char,_Mbstatet>,unsigned short,wil::secure_allocator<unsigned short>,wil::secure_allocator<char> >
	{
		basic_string<char,char_traits<char>,wil::secure_allocator<char> > to_bytes(unsigned short const *,unsigned short const *);
		virtual ~wstring_convert<codecvt<unsigned short,char,_Mbstatet>,unsigned short,wil::secure_allocator<unsigned short>,wil::secure_allocator<char> >();
		wstring_convert<codecvt<unsigned short,char,_Mbstatet>,unsigned short,wil::secure_allocator<unsigned short>,wil::secure_allocator<char> >();
	};

	Microsoft::WRL::ComPtr<ICredentialProviderCredential> * _Unfancy<Microsoft::WRL::ComPtr<ICredentialProviderCredential> >(Microsoft::WRL::ComPtr<ICredentialProviderCredential> *);
	Microsoft::WRL::ComPtr<ICredentialProviderCredential> * _Uninitialized_move_al_unchecked<Microsoft::WRL::ComPtr<ICredentialProviderCredential> *,Microsoft::WRL::ComPtr<ICredentialProviderCredential> *,allocator<Microsoft::WRL::ComPtr<ICredentialProviderCredential> > >(Microsoft::WRL::ComPtr<ICredentialProviderCredential> *,Microsoft::WRL::ComPtr<ICredentialProviderCredential> *,Microsoft::WRL::ComPtr<ICredentialProviderCredential> *,std::_Wrap_alloc<std::allocator<Microsoft::WRL::ComPtr<ICredentialProviderCredential> > > &,std::_General_ptr_iterator_tag,std::_Any_tag);
	bool operator==<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >(unsigned short const * const,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &);
	nothrow_t const std::nothrow;
	std::shared_ptr<KeyEnumInfo> * _Unfancy<shared_ptr<KeyEnumInfo> >(std::shared_ptr<KeyEnumInfo> *);
	std::shared_ptr<KeyEnumInfo> * _Uninitialized_move_al_unchecked<shared_ptr<KeyEnumInfo> *,shared_ptr<KeyEnumInfo> *,allocator<shared_ptr<KeyEnumInfo> > >(std::shared_ptr<KeyEnumInfo> *,std::shared_ptr<KeyEnumInfo> *,std::shared_ptr<KeyEnumInfo> *,std::_Wrap_alloc<std::allocator<std::shared_ptr<KeyEnumInfo> > > &,std::_General_ptr_iterator_tag,std::_Any_tag);
	std::unique_ptr<NgcPinScenario::UserAuthInfo,std::default_delete<NgcPinScenario::UserAuthInfo> > * _Unfancy<unique_ptr<NgcPinScenario::UserAuthInfo,default_delete<NgcPinScenario::UserAuthInfo> > >(std::unique_ptr<NgcPinScenario::UserAuthInfo,std::default_delete<NgcPinScenario::UserAuthInfo> > *);
	std::unique_ptr<NgcPinScenario::UserAuthInfo,std::default_delete<NgcPinScenario::UserAuthInfo> > * _Uninitialized_move_al_unchecked<unique_ptr<NgcPinScenario::UserAuthInfo,default_delete<NgcPinScenario::UserAuthInfo> > *,unique_ptr<NgcPinScenario::UserAuthInfo,default_delete<NgcPinScenario::UserAuthInfo> > *,allocator<unique_ptr<NgcPinScenario::UserAuthInfo,default_delete<NgcPinScenario::UserAuthInfo> > > >(std::unique_ptr<NgcPinScenario::UserAuthInfo,std::default_delete<NgcPinScenario::UserAuthInfo> > *,std::unique_ptr<NgcPinScenario::UserAuthInfo,std::default_delete<NgcPinScenario::UserAuthInfo> > *,std::unique_ptr<NgcPinScenario::UserAuthInfo,std::default_delete<NgcPinScenario::UserAuthInfo> > *,std::_Wrap_alloc<std::allocator<std::unique_ptr<NgcPinScenario::UserAuthInfo,std::default_delete<NgcPinScenario::UserAuthInfo> > > > &,std::_General_ptr_iterator_tag,std::_Any_tag);
	std::unique_ptr<RemoteNgcScenario::UserAuthInfo,std::default_delete<RemoteNgcScenario::UserAuthInfo> > * _Unfancy<unique_ptr<RemoteNgcScenario::UserAuthInfo,default_delete<RemoteNgcScenario::UserAuthInfo> > >(std::unique_ptr<RemoteNgcScenario::UserAuthInfo,std::default_delete<RemoteNgcScenario::UserAuthInfo> > *);
	std::unique_ptr<RemoteNgcScenario::UserAuthInfo,std::default_delete<RemoteNgcScenario::UserAuthInfo> > * _Uninitialized_move_al_unchecked<unique_ptr<RemoteNgcScenario::UserAuthInfo,default_delete<RemoteNgcScenario::UserAuthInfo> > *,unique_ptr<RemoteNgcScenario::UserAuthInfo,default_delete<RemoteNgcScenario::UserAuthInfo> > *,allocator<unique_ptr<RemoteNgcScenario::UserAuthInfo,default_delete<RemoteNgcScenario::UserAuthInfo> > > >(std::unique_ptr<RemoteNgcScenario::UserAuthInfo,std::default_delete<RemoteNgcScenario::UserAuthInfo> > *,std::unique_ptr<RemoteNgcScenario::UserAuthInfo,std::default_delete<RemoteNgcScenario::UserAuthInfo> > *,std::unique_ptr<RemoteNgcScenario::UserAuthInfo,std::default_delete<RemoteNgcScenario::UserAuthInfo> > *,std::_Wrap_alloc<std::allocator<std::unique_ptr<RemoteNgcScenario::UserAuthInfo,std::default_delete<RemoteNgcScenario::UserAuthInfo> > > > &,std::_General_ptr_iterator_tag,std::_Any_tag);
	unsigned char * _Uninitialized_copy_al_unchecked<char *,unsigned char *,wil::secure_allocator<unsigned char> >(char *,char *,unsigned char *,std::_Wrap_alloc<wil::secure_allocator<unsigned char> > &,std::_General_ptr_iterator_tag,std::_Any_tag);
	unsigned char * _Uninitialized_copy_al_unchecked<unsigned char *,unsigned char *,wil::secure_allocator<unsigned char> >(unsigned char *,unsigned char *,unsigned char *,std::_Wrap_alloc<wil::secure_allocator<unsigned char> > &,std::_General_ptr_iterator_tag,std::_Any_tag);
	unsigned char * _Uninitialized_copy_al_unchecked<unsigned char const *,unsigned char *,wil::secure_allocator<unsigned char> >(unsigned char const *,unsigned char const *,unsigned char *,std::_Wrap_alloc<wil::secure_allocator<unsigned char> > &,std::_General_ptr_iterator_tag,std::_Any_tag);
	unsigned char * _Uninitialized_move_al_unchecked<unsigned char *,unsigned char *,wil::secure_allocator<unsigned char> >(unsigned char *,unsigned char *,unsigned char *,std::_Wrap_alloc<wil::secure_allocator<unsigned char> > &,std::_General_ptr_iterator_tag,std::_Any_tag);
	unsigned char * _Uninitialized_value_construct_n1<unsigned char *,unsigned __int64,wil::secure_allocator<unsigned char> >(unsigned char *,unsigned __int64,std::_Wrap_alloc<wil::secure_allocator<unsigned char> > &,std::integral_constant<bool,0>);
	void _Deallocate(void *,unsigned __int64,unsigned __int64);
	void _Destroy_range<allocator<Microsoft::WRL::ComPtr<ICredentialProviderCredential> >,Microsoft::WRL::ComPtr<ICredentialProviderCredential> *>(Microsoft::WRL::ComPtr<ICredentialProviderCredential> *,Microsoft::WRL::ComPtr<ICredentialProviderCredential> *,std::_Wrap_alloc<std::allocator<Microsoft::WRL::ComPtr<ICredentialProviderCredential> > > &);
	void _Destroy_range<allocator<shared_ptr<KeyEnumInfo> >,shared_ptr<KeyEnumInfo> *>(std::shared_ptr<KeyEnumInfo> *,std::shared_ptr<KeyEnumInfo> *,std::_Wrap_alloc<std::allocator<std::shared_ptr<KeyEnumInfo> > > &);
	void _Destroy_range<allocator<unique_ptr<NgcPinScenario::UserAuthInfo,default_delete<NgcPinScenario::UserAuthInfo> > >,unique_ptr<NgcPinScenario::UserAuthInfo,default_delete<NgcPinScenario::UserAuthInfo> > *>(std::unique_ptr<NgcPinScenario::UserAuthInfo,std::default_delete<NgcPinScenario::UserAuthInfo> > *,std::unique_ptr<NgcPinScenario::UserAuthInfo,std::default_delete<NgcPinScenario::UserAuthInfo> > *,std::_Wrap_alloc<std::allocator<std::unique_ptr<NgcPinScenario::UserAuthInfo,std::default_delete<NgcPinScenario::UserAuthInfo> > > > &);
	void _Destroy_range<allocator<unique_ptr<RemoteNgcScenario::UserAuthInfo,default_delete<RemoteNgcScenario::UserAuthInfo> > >,unique_ptr<RemoteNgcScenario::UserAuthInfo,default_delete<RemoteNgcScenario::UserAuthInfo> > *>(std::unique_ptr<RemoteNgcScenario::UserAuthInfo,std::default_delete<RemoteNgcScenario::UserAuthInfo> > *,std::unique_ptr<RemoteNgcScenario::UserAuthInfo,std::default_delete<RemoteNgcScenario::UserAuthInfo> > *,std::_Wrap_alloc<std::allocator<std::unique_ptr<RemoteNgcScenario::UserAuthInfo,std::default_delete<RemoteNgcScenario::UserAuthInfo> > > > &);
};

struct struct_join_status
{
	~struct_join_status();
};

namespace wil
{
	class Feature<__WilFeatureTraits_Feature_AlphaPinOption>
	{
		static wil_details_CachedFeatureEnabledState GetCachedFeatureEnabledState(bool);
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
	};

	namespace details
	{
		class EnabledStateManager
		{
			void RecordCachedUsageUnderLock();
		public:
			void OnStateChange();
			void QueueBackgroundUsageReporting(unsigned int,wil_details_FeaturePropertyCache &);
			void SubscribeFeaturePropertyCacheToEnabledStateChanges(wil_details_FeaturePropertyCache *,wil_FeatureChangeTime);
		};

		class FeatureStateManager
		{
			bool EnsureStateData();
			void EnsureTimerUnderLock();
		public:
			void RecordFeatureUsage(unsigned int,wil_details_ServiceReportingKind,unsigned __int64);
			void SubscribeToUsageFlush(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *));
		};

		class ThreadFailureCallbackHolder
		{
			static long volatile s_telemetryId;
		public:
			static bool GetThreadContext(FailureInfo *,ThreadFailureCallbackHolder *,char *,unsigned __int64);
		};

		namespace in1diag3
		{
			bool Log_HrIfMsg(void *,unsigned int,char const *,long,bool,char const *,...);
			int Log_IfWin32BoolFalseMsg(void *,unsigned int,char const *,int,char const *,...);
			long Log_Hr(void *,unsigned int,char const *,long);
			long Log_HrMsg(void *,unsigned int,char const *,long,char const *,...);
			long Return_CaughtException(void *,unsigned int,char const *);
			long Return_GetLastError(void *,unsigned int,char const *);
			long Return_GetLastErrorMsg(void *,unsigned int,char const *,char const *,...);
			long Return_NtStatus(void *,unsigned int,char const *,long);
			long Return_Win32(void *,unsigned int,char const *,unsigned long);
			void FailFast_CaughtException(void *,unsigned int,char const *);
			void FailFast_Hr(void *,unsigned int,char const *,long);
			void FailFast_Unexpected(void *,unsigned int,char const *);
			void Return_Hr(void *,unsigned int,char const *,long);
			void Return_Hr_NoOriginate(void *,unsigned int,char const *,long);
			void _FailFastImmediate_Unexpected();
			void _FailFast_GetLastError(void *,unsigned int,char const *);
			void _FailFast_Hr(void *,unsigned int,char const *,long);
			void _FailFast_Unexpected(void *,unsigned int,char const *);
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

		struct shared_buffer
		{
			bool create(void const *,unsigned __int64);
		};

		FEATURE_ENABLED_STATE WilApiImpl_GetFeatureEnabledState(unsigned int,FEATURE_CHANGE_TIME);
		bool GetModuleInformation(void *,unsigned int *,char *,unsigned __int64);
		bool IsFeatureConfigured(wil_FeatureState *,unsigned int,bool,wil_FeatureStore);
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
		long GetLastErrorFailHr();
		long NtStatusToHr(long);
		long RecognizeCaughtExceptionFromCallback(unsigned short *,unsigned __int64);
		long ReportFailure_CaughtException(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,SupportedExceptions);
		long ReportFailure_GetLastErrorHr(void *,unsigned int,char const *,char const *,char const *,void *,FailureType);
		long ReportFailure_GetLastErrorHrMsg(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,char const *,char *);
		long ReportFailure_NtStatus(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long);
		long ReportFailure_Win32(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,unsigned long);
		long ResultFromCaughtExceptionInternal(unsigned short *,unsigned __int64,bool *);
		long StringCchPrintfA(char *,unsigned __int64,char const *,...);
		shutdown_aware_object<details::EnabledStateManager> g_enabledStateManager;
		shutdown_aware_object<details::FeatureStateManager> g_featureStateManager;
		unsigned char (* g_pfnRtlDllShutdownInProgress)();
		unsigned char * WriteResultString<char const *>(unsigned char *,unsigned char *,char const *,char const * *);
		unsigned char * WriteResultString<unsigned short const *>(unsigned char *,unsigned char *,unsigned short const *,unsigned short const * *);
		unsigned char RtlDllShutdownInProgress();
		unsigned long (* g_pfnRtlNtStatusToDosErrorNoTeb)(long);
		unsigned long ReportFailure_GetLastError(void *,unsigned int,char const *,char const *,char const *,void *,FailureType);
		unsigned long ReportFailure_GetLastErrorMsg(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,char const *,char *);
		unsigned long RtlNtStatusToDosErrorNoTeb(long);
		unsigned short * LogStringPrintf(unsigned short *,unsigned short const *,unsigned short const *,...);
		void (* g_pfnDebugBreak)();
		void (* g_pfnGetContextAndNotifyFailure)(FailureInfo *,char *,unsigned __int64);
		void (* g_pfnLoggingCallback)(FailureInfo const &);
		void (* g_pfnOriginateCallback)(FailureType,long);
		void (* g_pfnRethrow)();
		void (* g_pfnTelemetryCallback)(bool,FailureInfo const &);
		void (* g_pfnThrowResultException)(FailureInfo const &);
		void DebugBreak();
		void GetContextAndNotifyFailure(FailureInfo *,char *,unsigned __int64);
		void LogFailure(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long,unsigned short const *,bool,unsigned short *,unsigned __int64,char *,unsigned __int64,FailureInfo *);
		void OriginateError(FailureType,long);
		void RecordFeatureUsageCallback(unsigned int,wil_details_FeaturePropertyCache *,wil_details_RecordUsageResult *);
		void ReportFailure(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long,unsigned short const *,details::ReportFailureOptions);
		void ReportFailure_Hr(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long);
		void ReportFailure_HrMsg(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long,char const *,char *);
		void ReportFailure_Msg(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long,char const *,char *);
		void Rethrow();
		void ThrowResultExceptionInternal(FailureInfo const &);
		void WilApiImpl_RecordFeatureUsage(unsigned int,unsigned int,unsigned int,char const *);
		void WilApiImpl_SubscribeFeatureStateChangeNotification(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
		void WilApiImpl_UnsubscribeFeatureStateChangeNotification(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
	};

	namespace details_abi
	{
		struct FeatureStateData
		{
			void ProcessShutdown();
			void RecordUsage();
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
			~RawUsageIndex();
		};

		class SemaphoreValue
		{
			static long GetValueFromSemaphore(void *,long *);
		public:
			long CreateFromPointer(unsigned short const *,void *);
			static long TryGetValue<unsigned __int64>(unsigned short const *,unsigned __int64 *,bool *);
			void Destroy();
			~SemaphoreValue();
		};

		struct SubscriptionList
		{
			void OnSignaled(srwlock &);
			void SubscribeUnderLock(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
			void Unsubscribe(srwlock &,FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
			~SubscriptionList();
		};

		struct ThreadLocalData
		{
			void SetLastError(FailureInfo const &);
			~ThreadLocalData();
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

	bool (* g_pfnIsDebuggerPresent)();
	bool g_fBreakOnFailure;
	bool g_fIsDebuggerPresent;
	bool wnf_query<_SEB_EVENT_HEADER>(_WNF_STATE_NAME const &,_SEB_EVENT_HEADER *,wil::WNF_CHANGE_STAMP_STRUCT *);
	long (* g_pfnResultFromCaughtException)();
	long GetFailureLogString(unsigned short *,unsigned __int64,wil::FailureInfo const &);
	long ResultFromCaughtException();
	long verify_hresult<long>(long);
	void attach_to_smart_pointer<wistd::unique_ptr<unsigned char,cotaskmem_secure_deleter>,void>(wistd::unique_ptr<unsigned char,wil::cotaskmem_secure_deleter> &,unsigned char *);
	void wnf_publish<NgcWnf::CredentialRefreshRequiredStateData>(_WNF_STATE_NAME const &,NgcWnf::CredentialRefreshRequiredStateData const &);
	void wnf_publish<_NgcPinResetScenarioLaunchData>(_WNF_STATE_NAME const &,_NgcPinResetScenarioLaunchData const &);
	wistd::unique_ptr<unsigned char [0],wil::cotaskmem_secure_deleter> make_unique_cotaskmem_secure<unsigned char [0]>(unsigned __int64);
};

struct win32_exception
{
	virtual ~win32_exception();
	win32_exception(unsigned long);
	win32_exception(win32_exception const &);
};

namespace wistd
{
	struct function<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>
	{
		~function<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>();
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
		void reset(unsigned short *);
		~unique_ptr<unsigned short [0],wil::cotaskmem_secure_deleter>();
	};

	void _Xbad_function_call();
};

FEATURE_ENABLED_STATE (* g_wil_details_apiGetFeatureEnabledState)(unsigned int,FEATURE_CHANGE_TIME);
FEATURE_ENABLED_STATE (* g_wil_details_internalGetFeatureEnabledState)(unsigned int,FEATURE_CHANGE_TIME);
HINSTANCE__ * g_hInstance;
HINSTANCE__ * g_wil_details_ntdllModuleHandle;
Microsoft::WRL::Details::CreatorMap const __object_NgcPinProvider_COM;
Microsoft::WRL::Details::CreatorMap const __object_RemoteNgcProvider_COM;
Microsoft::WRL::Details::FactoryCache __objectFactory__NgcPinProvider_COM;
Microsoft::WRL::Details::FactoryCache __objectFactory__RemoteNgcProvider_COM;
TraceLoggingCorrelationVector * cv;
__WIL_RTL_SRWLOCK g_wil_details_testFeatureStateLock;
__type_info_node __type_info_root_node;
int SafeFree(void *);
int g_wil_details_preventOnDemandStagingConfigReads;
int wil_QueryFeatureState(wil_FeatureState *,unsigned int,int,wil_FeatureStore,int *);
int wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(wil_details_FeaturePropertyCache *,unsigned int,wil_details_ServiceReportingKind,unsigned int,unsigned __int64);
int wil_details_SetPropertyCacheOpportunityCallback(wil_details_FeaturePropertyCache *,void *);
int wil_details_SetPropertyCacheUsageCallback(wil_details_FeaturePropertyCache *,void *);
int wil_details_StagingConfig_AreAnyFeaturesConfigured(wil_details_StagingConfig *);
int wil_details_StagingConfig_QueryFeatureState(wil_details_StagingConfig *,wil_FeatureState *,unsigned int,int);
long (* g_wil_details_pfnNtQueryWnfStateData)(__WIL__WNF_STATE_NAME const *,__WIL__WNF_TYPE_ID const *,void const *,unsigned long *,void *,unsigned long *);
long (* g_wil_details_pfnNtUpdateWnfStateData)(__WIL__WNF_STATE_NAME const *,void const *,unsigned long,__WIL__WNF_TYPE_ID const *,void const *,unsigned long,unsigned long);
long (* g_wil_details_pfnRtlSubscribeWnfStateChangeNotification)(__WIL__WNF_USER_SUBSCRIPTION * *,__WIL__WNF_STATE_NAME,unsigned long,long (*)(__WIL__WNF_STATE_NAME,unsigned long,__WIL__WNF_TYPE_ID *,void *,void const *,unsigned long),void *,__WIL__WNF_TYPE_ID *,unsigned long,unsigned long);
long (* g_wil_details_pfnRtlUnsubscribeWnfNotificationWaitForCompletion)(__WIL__WNF_USER_SUBSCRIPTION *);
long CompareStringW(unsigned short const *,unsigned short const *,unsigned long,int *);
long CopyStringNullSafeW(unsigned short const *,unsigned short * *);
long CopyStringSafeW(unsigned short const *,unsigned short * *);
long CopyStringW(unsigned short const *,unsigned __int64,unsigned short * *);
long GetDomainFromEmail(unsigned short const *,unsigned short * *,unsigned __int64 *);
long HResultToNtStatus(long);
long HResultToSecurityStatus(long);
long I_NgcRemotePairingCancelRequest(std::shared_ptr<NgcUtils::RpcClient> const &,unsigned long);
long I_NgcRemotePairingCompleteRequest(std::shared_ptr<NgcUtils::RpcClient> const &,unsigned long,long);
long I_NgcRemotePairingCreateLogonKeyRequest(std::shared_ptr<NgcUtils::RpcClient> const &,_NgcRemoteRequestStatus *,unsigned long *);
long I_NgcRemotePairingGetLogonKeyRequestStatus(std::shared_ptr<NgcUtils::RpcClient> const &,unsigned long,_NgcRemoteRequestStatus,_NgcRemoteRequestStatus *,unsigned short * *,unsigned short * *);
long I_NgcRemotePairingGetRequestError(std::shared_ptr<NgcUtils::RpcClient> const &,unsigned long,long *);
long I_NgcRemotePairingGetSpecificKeyRequestStatus(std::shared_ptr<NgcUtils::RpcClient> const &,unsigned long,_NgcRemoteRequestStatus,_NgcRemoteRequestStatus *);
long I_NgcTicketCreateForRemoteKeyOperations(std::shared_ptr<NgcUtils::RpcClient> const &,unsigned short *,unsigned __int64 *,unsigned short *,unsigned __int64 *);
long NgcMgmtEnumContainers(unsigned short const *,_NGC_RPC_CONTAINER_ENUM_INFO * *,unsigned long *);
long NgcRemotePairingCancelRequest(unsigned long);
long NgcRemotePairingCompleteRequest(unsigned long,long);
long NgcRemotePairingCreateLogonKeyRequest(_NgcRemoteRequestStatus *,unsigned long *);
long NgcRemotePairingGetLogonKeyRequestStatus(unsigned long,_NgcRemoteRequestStatus,_NgcRemoteRequestStatus *,unsigned short * *,unsigned short * *);
long NgcRemotePairingGetRequestError(unsigned long,long *);
long NgcRemotePairingGetSpecificKeyRequestStatus(unsigned long,_NgcRemoteRequestStatus,_NgcRemoteRequestStatus *);
long NgcTicketCreateForRemoteKeyOperations(unsigned short const *,unsigned __int64 *,unsigned short const *,unsigned __int64 *);
long RegLoadKeyWinPE(HKEY__ *,unsigned short const *,unsigned short const *,unsigned short const *);
long RegSaveStringValue(HKEY__ *,unsigned short const *,unsigned short const *,unsigned short const *);
long StringCat(unsigned short const *,unsigned short const *,unsigned short * *);
long StringCchCatW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchCopyW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchPrintfW(unsigned short *,unsigned __int64,unsigned short const *,...);
long StringDup(unsigned short const *,unsigned short * *);
long StringLen(unsigned short const *,unsigned __int64 *);
long wil_details_NtQueryWnfStateData(__WIL__WNF_STATE_NAME const *,__WIL__WNF_TYPE_ID const *,void const *,unsigned long *,void *,unsigned long *);
long wil_details_NtUpdateWnfStateData(__WIL__WNF_STATE_NAME const *,void const *,unsigned long,__WIL__WNF_TYPE_ID const *,void const *,unsigned long,unsigned long);
long wil_details_StagingConfig_FireNotification(wil_details_StagingConfig *,unsigned int,unsigned short);
long wil_details_StagingConfig_Load(wil_details_StagingConfig *,wil_FeatureStore,unsigned __int64,void *,int);
unsigned char * operator+<unsigned char,unsigned long,SafeIntInternal::SafeIntExceptionHandler<SafeIntException> >(unsigned char *,SafeInt<unsigned long,SafeIntInternal::SafeIntExceptionHandler<SafeIntException> >);
unsigned char const * operator+=<unsigned char const ,unsigned long,SafeIntInternal::SafeIntExceptionHandler<SafeIntException> >(unsigned char const * &,SafeInt<unsigned long,SafeIntInternal::SafeIntExceptionHandler<SafeIntException> >);
unsigned long RegOpenCurrentUserKey(unsigned long,HKEY__ * *);
unsigned long RegReadDwordValue(HKEY__ *,unsigned short const *,unsigned short const *,unsigned long *);
unsigned long RegReadStringValue(HKEY__ *,unsigned short const *,unsigned short const *,unsigned short * *);
void (* g_wil_details_apiRecordFeatureUsage)(unsigned int,unsigned int,unsigned int,char const *);
void (* g_wil_details_apiSubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
void (* g_wil_details_apiUnsubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
void (* g_wil_details_internalRecordFeatureUsage)(unsigned int,unsigned int,unsigned int,char const *);
void (* g_wil_details_internalSubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
void (* g_wil_details_internalUnsubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
void (* g_wil_details_pfnFeatureLoggingHook)(unsigned int,FEATURE_LOGGED_TRAITS const *,FEATURE_ERROR const *,int,wil_ReportingKind const *,wil_VariantReportingKind const *,unsigned char,unsigned __int64);
void (* g_wil_details_recordFeatureUsage)(unsigned int,wil_details_FeaturePropertyCache *,wil_details_RecordUsageResult *);
void * SafeAlloc(unsigned __int64);
void * operator new(unsigned __int64);
void * operator new(unsigned __int64,std::nothrow_t const &);
void _TlgCreateAuto(_EVENT_DATA_DESCRIPTOR *,unsigned short const *);
void _TlgWriteActivityAutoStop<0,5>(_TlgProvider_t const *,_GUID const *);
void _TlgWriteActivityAutoStop<35184372088832,5>(_TlgProvider_t const *,_GUID const *);
void _TlgWriteActivityAutoStop<70368744177664,5>(_TlgProvider_t const *,_GUID const *);
void __scrt_initialize_type_info();
void __scrt_throw_std_bad_alloc();
void __scrt_throw_std_bad_array_new_length();
void __scrt_uninitialize_type_info();
void operator delete(void *);
void operator delete(void *,unsigned __int64);
void wil_details_SetEnabledAndHasNotificationStateProperties(wil_details_FeaturePropertyCache *,wil_details_CachedFeatureEnabledState,wil_details_CachedHasNotificationState);
wil_StagingConfig * g_wil_details_stagingConfigForMachine;
wil_StagingConfig * g_wil_details_stagingConfigForUser;
wil_details_FeatureTestState * g_wil_details_testStates;
