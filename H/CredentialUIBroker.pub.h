class <lambda_120d0c6b51dc644cb63ed5c7fc62f6c3>
{
	static <lambda_invoker_cdecl>();
};

class <lambda_152aa9d2a3a0648fa2fa7fcef514b376>
{
	static <lambda_invoker_cdecl>(void *);
};

struct <lambda_1a4ca6c36d2b22e422533f274cfa3b80>
{
	long operator()();
};

class <lambda_1ad7ecfab602a777ecf020873216a663>
{
	static <lambda_invoker_cdecl>(void *);
};

struct <lambda_4f9cb091d726181fa859ce89134efc24>
{
	operator()(Windows::Internal::PlatformExtensions::Details::ExtensionRegistration const *,bool,bool *);
};

class <lambda_5035b992506f4af81a770c5842624510>
{
	static <lambda_invoker_cdecl>(_TP_CALLBACK_INSTANCE *,void *,_TP_TIMER *);
};

class <lambda_708cbc1e77f5082e17c8e764360bb99b>
{
	static <lambda_invoker_cdecl>();
};

struct <lambda_77fac54a0df37977b8af88e4a8690683>
{
	long operator()();
};

class <lambda_93ae2df0382b960c1667db6321119e38>
{
	static <lambda_invoker_cdecl>();
};

class <lambda_bf0cab7e367b92d194d9a1ba31b40746>
{
	static <lambda_invoker_cdecl>();
};

class <lambda_d51448ba32f8ef42e59400edd4566183>
{
	static <lambda_invoker_cdecl>(_TP_CALLBACK_INSTANCE *,void *,_TP_TIMER *);
};

class <lambda_f1e7f17610f55d1f3f4cf582571324a1>
{
	static int <lambda_invoker_cdecl>(_RTL_RUN_ONCE *,void *,void * *);
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

struct CCoTaskMemPtr<unsigned char>
{
	~CCoTaskMemPtr<unsigned char>();
};

class CCredUIBrokerBase
{
	long _CreateUniqueEventName();
	static void _s_TriggerUIAbort(void *,unsigned char);
	void _RegisterWaitForCallingProcessTermination(CREDUI_INFO_INTERNAL *,CREDUI_INFO_INTERNAL *);
	void _UnregisterWaitForCallingProcessTermination();
protected:
	long _IsHWNDFromElevatedProcess(HWND__ *,bool *);
	long _PromptForWindowsCredentials(IUnknown *,CREDUI_INFO_INTERNAL *,unsigned long,unsigned long *,tagSAFEARRAY *,tagSAFEARRAY * *,int *,unsigned long,unsigned long *);
};

class CCredUIBrokerForAppContainers
{
	long _VerifyWindowIsInCallingProcessOrParentAppContainer(HWND__ *);
public:
	virtual long PromptForWindowsCredentials(CREDUI_INFO_INTERNAL *,unsigned long,unsigned long *,tagSAFEARRAY *,tagSAFEARRAY * *,int *,unsigned long,unsigned long *);
	virtual ~CCredUIBrokerForAppContainers();
};

struct CCredUIBrokerForNonAppContainers
{
	CCredUIBrokerForNonAppContainers();
	virtual long PromptForWindowsCredentials(CREDUI_INFO_INTERNAL *,unsigned long,unsigned long *,tagSAFEARRAY *,tagSAFEARRAY * *,int *,unsigned long,unsigned long *);
	virtual ~CCredUIBrokerForNonAppContainers();
};

struct CCredUIBrokerForNonAppContainersFailedMip
{
	virtual long PromptForWindowsCredentials(CREDUI_INFO_INTERNAL *,unsigned long,unsigned long *,tagSAFEARRAY *,tagSAFEARRAY * *,int *,unsigned long,unsigned long *);
	virtual ~CCredUIBrokerForNonAppContainersFailedMip();
};

struct CCredentialProviderSerialization
{
	CCredentialProviderSerialization();
	virtual long GetAuthenticationPackage(unsigned long *);
	virtual long GetCredentialContext(unsigned short * *);
	virtual long GetCredentialProviderCLSID(_GUID *);
	virtual long GetSerialization(unsigned long *,unsigned char * *);
	virtual long GetSerializationFlags(SERIALIZATION_FLAGS *);
	virtual ~CCredentialProviderSerialization();
};

struct CSingleUseOutOfProcModule
{
	virtual long RegisterCOMObject(unsigned short const *,_GUID *,IClassFactory * *,unsigned long *,unsigned int);
};

struct CTCoAllocPolicy
{
	static long Alloc(void *,unsigned long,unsigned __int64,void * *);
};

struct CTContainer_PolicyLocalMem
{
	static int DestroyMem(void *);
};

namespace CallerIdentity
{
	long GetCallingProcessHandle(unsigned long,RUNTIMEBROKER_CALLERIDENTITY_CHECK,void * *);
	long GetCallingProcessHandle(unsigned long,void * *);
	long GetImmersiveAppIdFromWindow(HWND__ *,unsigned short * *);
	long GetPackageSidFromProcess(unsigned long,void * *);
	long GetPackageSidFromProcessHandle(void *,void * *);
	long GetPackageSidFromProcessToken(void *,void * *);
	long GetPackageSidFromWindow(HWND__ *,void * *);
	long GetProcessAppId(void *,unsigned short * *);
	long GetWeakWindowAppId(HWND__ *,unsigned short * *);
	long IsProcessAppContainer(void *,bool *);
	long VerifyWindowIsInCallingProcessAppContainer(HWND__ *);
	long VerifyWindowIsInProcessByAppContainerSid(HWND__ *,void *);
	long VerifyWindowIsInSpecifiedApplication(HWND__ *,unsigned short const *,IUnknown *);
};

struct CredUIBrokerLogging
{
	static _tlgProvider_t const * Provider();
};

struct CredUIBrokerTelemetry
{
	class BrokerForAppContainersActivity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		void Stop(long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long);
		~BrokerForAppContainersActivity();
	};

	class BrokerForNonAppContainersActivity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		void Stop(long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long);
		~BrokerForNonAppContainersActivity();
	};

	static void LogBadOwnerWindow(CredUIBrokerTelemetry::BadWindowType);
};

struct CredUXLogging
{
	static _tlgProvider_t const * Provider();
};

class CredUXParameters
{
	long _SetupAuthContext(CredUXParametersBlob const *);
	long _SetupCaptionText(CredUXParametersBlob const *);
	long _SetupErrorText(CredUXParametersBlob const *);
	long _SetupInputBuffer(CredUXParametersBlob const *);
	long _SetupMessageText(CredUXParametersBlob const *);
public:
	CredUXParameters();
	long RuntimeClassInitialize(CredUXParametersBlob *,Windows::Internal::UI::Credentials::Controller::ICredUXExtension *,Windows::Internal::UI::Credentials::Controller::IConsentUXContext *,Windows::Internal::UI::Credentials::Controller::ICredUXSecurePrompt *);
	virtual long GetUserAccountKind(HSTRING__ *,Windows::Internal::UI::Logon::CredProvData::UserAccountKind *);
	virtual long get_CancelButtonText(HSTRING__ * *);
	virtual long get_CaptionText(HSTRING__ * *);
	virtual long get_ConsentUXContext(Windows::Internal::UI::Credentials::Controller::IConsentUXContext * *);
	virtual long get_Context(Windows::Storage::Streams::IBuffer * *);
	virtual long get_CredUXSecurePrompt(Windows::Internal::UI::Credentials::Controller::ICredUXSecurePrompt * *);
	virtual long get_ErrorText(HSTRING__ * *);
	virtual long get_Flags(unsigned int *);
	virtual long get_HideOKButton(unsigned char *);
	virtual long get_HideUserTileImage(unsigned char *);
	virtual long get_InputBuffer(IInspectable * *);
	virtual long get_InternalFlags(unsigned int *);
	virtual long get_IsOnSecureDesktop(unsigned char *);
	virtual long get_IsPromptForConsent(unsigned char *);
	virtual long get_IsPromptForCredentials(unsigned char *);
	virtual long get_IsSecurePromptRequired(unsigned char *);
	virtual long get_IsUAC(unsigned char *);
	virtual long get_MessageText(HSTRING__ * *);
	virtual long get_OkButtonText(HSTRING__ * *);
	virtual long get_ParentWindow(IInspectable * *);
	virtual long get_ProviderGUID(_GUID *);
	virtual long get_ProviderNameText(HSTRING__ * *);
	virtual long get_SaveCredCheckBoxIsChecked(unsigned char *);
	virtual long get_SaveCredCheckBoxIsVisible(unsigned char *);
	virtual long get_Style(Windows::Internal::UI::Credentials::Controller::CredUIStyle *);
	virtual long get_TipTestGuid(_GUID *);
	virtual long get_UserTileImageProvider(Windows::Internal::UI::Logon::CredProvData::IUserTileImageProvider * *);
	virtual ~CredUXParameters();
};

namespace CredUXTelemetry
{
	class AcceptCredentialsOrCancelActivity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~AcceptCredentialsOrCancelActivity();
	};

};

namespace Microsoft
{
	namespace WRL
	{
		struct ClassFactory<Details::Nil,Details::Nil,Details::Nil,0>
		{
			ClassFactory<Details::Nil,Details::Nil,Details::Nil,0>();
			virtual long LockServer(int);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
		};

		struct ComPtr<CCredUIBrokerForNonAppContainers>
		{
			void Attach(CCredUIBrokerForNonAppContainers *);
		};

		class ComPtr<IApplicationResolver>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IAsyncInfo>
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

		class ComPtr<ICredProviderCredentialSerialization>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<ICredUIBroker>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<ICredUILocalServiceBroker>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IInspectable>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IMarshal>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IUnknown>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::ApplicationModel::Core::ICoreApplicationView>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Foundation::IAsyncOperation<Windows::Internal::UI::Credentials::Controller::RequestCredentialsData *> >
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Internal::Shell::Holographic::IContextIdentifierStatics>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Internal::UI::Credentials::Controller::IConsentUXContext>
		{
		protected:
			void InternalAddRef();
		};

		class ComPtr<Windows::Internal::UI::Credentials::Controller::ICredUXParameters>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Internal::UI::Credentials::Controller::ICredUXSecurePrompt>
		{
		protected:
			void InternalAddRef();
		};

		class ComPtr<Windows::Internal::UI::Credentials::Controller::IRequestCredentialsData>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Internal::UI::Logon::CredProvData::ICredentialSerialization>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Storage::Streams::IBuffer>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Storage::Streams::IBufferByteAccess>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Storage::Streams::IBufferFactory>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::UI::Core::ICoreWindow>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::UI::WindowManagement::Preview::IWindowManagementPreviewStatics2>
		{
		protected:
			unsigned long InternalRelease();
		};

		namespace Details
		{
			class ImplementsHelper<RuntimeClassFlags<1>,0,Windows::Internal::UI::Credentials::Controller::ICredUXParameters,IWeakReferenceSource,FtmBase>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,1,IWeakReferenceSource,FtmBase>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,0,Windows::Internal::Foundation::Contracts::IActivationFactoryContractRedirectorContext,IWeakReferenceSource,FtmBase>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,ICredProviderCredentialSerialization,IWeakReferenceSource,FtmBase>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,IObjectWithWindow,IWeakReferenceSource,FtmBase>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,IWeakReferenceSource,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
				void FillArrayWithIid(unsigned long *,_GUID *);
			public:
				ImplementsHelper<RuntimeClassFlags<3>,1,IWeakReferenceSource,FtmBase>();
			};

			class ImplementsHelper<RuntimeClassFlags<6>,0,IClassFactory,Nil,Nil,Nil,Nil>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			struct MakeAllocator<CCredUIBrokerForAppContainers>
			{
				~MakeAllocator<CCredUIBrokerForAppContainers>();
			};

			struct MakeAllocator<CCredUIBrokerForNonAppContainers>
			{
				~MakeAllocator<CCredUIBrokerForNonAppContainers>();
			};

			struct MakeAllocator<CCredUIBrokerForNonAppContainersFailedMip>
			{
				~MakeAllocator<CCredUIBrokerForNonAppContainersFailedMip>();
			};

			struct MakeAllocator<CCredentialProviderSerialization>
			{
				~MakeAllocator<CCredentialProviderSerialization>();
			};

			struct MakeAllocator<CredUXParameters>
			{
				~MakeAllocator<CredUXParameters>();
			};

			struct MakeAllocator<SimpleClassFactory<CCredUIBrokerForAppContainers,0> >
			{
				~MakeAllocator<SimpleClassFactory<CCredUIBrokerForAppContainers,0> >();
			};

			struct MakeAllocator<SimpleClassFactory<CCredUIBrokerForNonAppContainers,0> >
			{
				~MakeAllocator<SimpleClassFactory<CCredUIBrokerForNonAppContainers,0> >();
			};

			struct MakeAllocator<SimpleClassFactory<CCredUIBrokerForNonAppContainersFailedMip,0> >
			{
				~MakeAllocator<SimpleClassFactory<CCredUIBrokerForNonAppContainersFailedMip,0> >();
			};

			struct MakeAllocator<WeakReferenceImpl>
			{
				~MakeAllocator<WeakReferenceImpl>();
			};

			struct MakeAllocator<WindowContainer>
			{
				~MakeAllocator<WindowContainer>();
			};

			struct MakeAllocator<Windows::Internal::PlatformExtensions::Details::ActivationFactoryContractRedirectorContext>
			{
				~MakeAllocator<Windows::Internal::PlatformExtensions::Details::ActivationFactoryContractRedirectorContext>();
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

			class OutOfProcModuleBase<CSingleUseOutOfProcModule>
			{
				virtual unsigned long GetObjectCount();
			protected:
				static _RTL_RUN_ONCE initOnceOutOfProc_;
			public:
				static CSingleUseOutOfProcModule & Create();
				virtual ~OutOfProcModuleBase<CSingleUseOutOfProcModule>();
			};

			struct RuntimeClass<InterfaceListHelper<IClassFactory,Nil,Nil,Nil,Nil>,RuntimeClassFlags<6>,0,0,0>
			{
				RuntimeClass<InterfaceListHelper<IClassFactory,Nil,Nil,Nil,Nil>,RuntimeClassFlags<6>,0,0,0>();
			};

			class RuntimeClassBaseT<1>
			{
			protected:
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::Credentials::Controller::ICredUXParameters,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::Credentials::Controller::ICredUXParameters,FtmBase> *,_GUID const &,void * *);
			};

			class RuntimeClassBaseT<2>
			{
			protected:
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::UI::Credentials::Controller::RequestCredentialsData *>,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::UI::Credentials::Controller::RequestCredentialsData *>,FtmBase> *,_GUID const &,void * *);
			};

			class RuntimeClassBaseT<3>
			{
			protected:
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,ICredProviderCredentialSerialization,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,ICredProviderCredentialSerialization,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,IObjectWithWindow,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,IObjectWithWindow,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::Foundation::Contracts::IActivationFactoryContractRedirectorContext,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::Foundation::Contracts::IActivationFactoryContractRedirectorContext,FtmBase> *,_GUID const &,void * *);
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::Credentials::Controller::ICredUXParameters,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::Credentials::Controller::ICredUXParameters,FtmBase>();
			};

			class RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ICredUIBroker>
			{
			protected:
				RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ICredUIBroker>();
			public:
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			class RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IWeakReference>
			{
			protected:
				RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IWeakReference>();
			public:
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::UI::Credentials::Controller::RequestCredentialsData *>,FtmBase>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,ICredProviderCredentialSerialization,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,ICredProviderCredentialSerialization,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,IObjectWithWindow,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,IObjectWithWindow,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::Foundation::Contracts::IActivationFactoryContractRedirectorContext,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::Foundation::Contracts::IActivationFactoryContractRedirectorContext,FtmBase>();
			};

			class RuntimeClassImpl<RuntimeClassFlags<6>,0,0,0,IClassFactory,Nil,Nil,Nil,Nil>
			{
			protected:
				RuntimeClassImpl<RuntimeClassFlags<6>,0,0,0,IClassFactory,Nil,Nil,Nil,Nil>();
			public:
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			class StaticStorage<CSingleUseOutOfProcModule,1,int>
			{
				static StaticStorage<CSingleUseOutOfProcModule,1,int> instance_;
			public:
				~StaticStorage<CSingleUseOutOfProcModule,1,int>();
			};

			struct WeakReferenceImpl
			{
				virtual long Resolve(_GUID const &,IInspectable * *);
			};

			ComPtr<Details::WeakReferenceImpl> Make<WeakReferenceImpl,IUnknown * &>(IUnknown * &);
			Details::WeakReferenceImpl * CreateWeakReference(IUnknown *);
			bool TerminateMap(Details::ModuleBase *,unsigned short const *,bool);
			long ActivationFactoryCallback<2>(HSTRING__ *,IActivationFactory * *);
			long CreateClassFactory<SimpleClassFactory<CCredUIBrokerForAppContainers,0> >(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateClassFactory<SimpleClassFactory<CCredUIBrokerForNonAppContainers,0> >(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateClassFactory<SimpleClassFactory<CCredUIBrokerForNonAppContainersFailedMip,0> >(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long GetActivationFactory<2>(Details::ModuleBase *,unsigned short const *,HSTRING__ *,IActivationFactory * *);
			long GetCacheEntry(Details::ModuleBase *,unsigned int *,_GUID const &,Details::CreatorMap const *,IUnknown * *);
			long MakeAndInitialize<CCredentialProviderSerialization,ICredProviderCredentialSerialization,_CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION &>(ICredProviderCredentialSerialization * *,_CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION &);
			long MakeAndInitialize<WindowContainer,IInspectable,HWND__ * &>(IInspectable * *,HWND__ * &);
			long MakeAndInitialize<Windows::Internal::PlatformExtensions::Details::ActivationFactoryContractRedirectorContext,Windows::Internal::Foundation::Contracts::IActivationFactoryContractRedirectorContext,Windows::Internal::ApplicationModel::WindowManagement::WindowId &>(Windows::Internal::Foundation::Contracts::IActivationFactoryContractRedirectorContext * *,Windows::Internal::ApplicationModel::WindowManagement::WindowId &);
			long RegisterCOMObject<0>(unsigned short const *,_GUID *,IClassFactory * *,unsigned long *,unsigned int);
			long RegisterObjects<2>(Details::ModuleBase *,unsigned short const *);
			long RegisterWinRTObject<2>(unsigned short const *,unsigned short const * *,_RO_REGISTRATION_COOKIE * *,unsigned int);
			long UnregisterObjects(Details::ModuleBase *,unsigned short const *);
			unsigned long SafeUnknownDecrementReference(long volatile &);
			unsigned long SafeUnknownIncrementReference(long volatile &);
		};

		class FtmBase
		{
		protected:
			long CanCastTo(_GUID const &,void * *);
		public:
			FtmBase();
			virtual long DisconnectObject(unsigned long);
			virtual long GetMarshalSizeMax(_GUID const &,void *,unsigned long,void *,unsigned long,unsigned long *);
			virtual long GetUnmarshalClass(_GUID const &,void *,unsigned long,void *,unsigned long,_GUID *);
			virtual long MarshalInterface(IStream *,_GUID const &,void *,unsigned long,void *,unsigned long);
			virtual long ReleaseMarshalData(IStream *);
			virtual long UnmarshalInterface(IStream *,_GUID const &,void * *);
		};

		class Module<1,CSingleUseOutOfProcModule>
		{
			static bool isInitialized;
		public:
			virtual long RegisterCOMObject(unsigned short const *,_GUID *,IClassFactory * *,unsigned long *,unsigned int);
			virtual long RegisterWinRTObject(unsigned short const *,unsigned short const * *,_RO_REGISTRATION_COOKIE * *,unsigned int);
			virtual long UnregisterCOMObject(unsigned short const *,unsigned long *,unsigned int);
			virtual long UnregisterWinRTObject(unsigned short const *,_RO_REGISTRATION_COOKIE *);
			virtual unsigned long DecrementObjectCount();
			virtual unsigned long IncrementObjectCount();
			virtual ~Module<1,CSingleUseOutOfProcModule>();
		};

		struct Module<2,CSingleUseOutOfProcModule>
		{
			virtual long RegisterWinRTObject(unsigned short const *,unsigned short const * *,_RO_REGISTRATION_COOKIE * *,unsigned int);
			virtual long UnregisterCOMObject(unsigned short const *,unsigned long *,unsigned int);
			virtual long UnregisterWinRTObject(unsigned short const *,_RO_REGISTRATION_COOKIE *);
			virtual unsigned long DecrementObjectCount();
			virtual unsigned long IncrementObjectCount();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,ICredUIBroker>
		{
			RuntimeClass<RuntimeClassFlags<2>,ICredUIBroker>();
		};

		struct SimpleClassFactory<CCredUIBrokerForAppContainers,0>
		{
			SimpleClassFactory<CCredUIBrokerForAppContainers,0>();
			virtual long CreateInstance(IUnknown *,_GUID const &,void * *);
		};

		struct SimpleClassFactory<CCredUIBrokerForNonAppContainers,0>
		{
			SimpleClassFactory<CCredUIBrokerForNonAppContainers,0>();
			virtual long CreateInstance(IUnknown *,_GUID const &,void * *);
		};

		struct SimpleClassFactory<CCredUIBrokerForNonAppContainersFailedMip,0>
		{
			SimpleClassFactory<CCredUIBrokerForNonAppContainersFailedMip,0>();
			virtual long CreateInstance(IUnknown *,_GUID const &,void * *);
		};

		namespace Wrappers
		{
			struct HString
			{
				long Set(unsigned short const *,unsigned int);
				long Set<unsigned short const *>(unsigned short const * const &,Details::Dummy);
			};

			class HStringReference
			{
				void CreateReference(unsigned short const *,unsigned int,unsigned int);
			};

			struct SRWLock
			{
				static Details::SyncLockExclusive LockExclusive(_RTL_SRWLOCK *);
			};

		};

	};

};

struct WindowContainer
{
	virtual long GetWindow(HWND__ * *);
	virtual long SetWindow(HWND__ *);
};

namespace Windows
{
	namespace Internal
	{
		class NativeString<CoTaskMemPolicy<unsigned short> >
		{
			long _EnsureCapacity(unsigned __int64);
			long _Initialize(unsigned short const *,unsigned __int64);
			void _Free();
		};

		namespace PlatformExtensions
		{
			namespace Details
			{
				struct ActivationFactoryContractRedirectorContext
				{
					ActivationFactoryContractRedirectorContext();
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long get_ProcessId(unsigned long *);
					virtual long get_WindowId(ApplicationModel::WindowManagement::WindowId *);
					virtual long put_ProcessId(unsigned long);
					virtual long put_WindowId(ApplicationModel::WindowManagement::WindowId);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				struct ExtensionRegistrationCollectionRegistry
				{
					long Initialize(HSTRING__ *);
					virtual long GetAt(unsigned __int64,wistd::unique_ptr<ExtensionRegistration,wistd::default_delete<ExtensionRegistration> > &);
					virtual long GetCount(unsigned __int64 *);
					virtual ~ExtensionRegistrationCollectionRegistry();
				};

				class ExtensionRegistrationRegistry
				{
					static long TryGetRegValue(HKEY__ *,unsigned short const *,unsigned long,void *,unsigned long *);
				public:
					long Initialize(HKEY__ *,unsigned short const *);
					virtual bool IsDefaultExtension();
					virtual bool IsTestExtension();
					virtual long GetActivatableClassId(unsigned short *,unsigned __int64);
					virtual long GetExtensionClass(unsigned short *,unsigned __int64);
					virtual unsigned long GetVelocityFeatureId();
					virtual ~ExtensionRegistrationRegistry();
				};

				struct PlatformExtensionsTelemetry
				{
					class TryActivateContractExtension
					{
						TryActivateContractExtension<HSTRING__ * &,ApplicationModel::WindowManagement::WindowId &,_GUID const &>(wistd::integral_constant<char,0>,HSTRING__ * &,ApplicationModel::WindowManagement::WindowId &,_GUID const &);
					protected:
						virtual bool WasAlreadyReportedToTelemetry(long);
						virtual void StopActivity();
					public:
						void StartActivity(HSTRING__ *,ApplicationModel::WindowManagement::WindowId,_GUID const &);
						void Stop(bool,bool,unsigned short const *);
						~TryActivateContractExtension();
					};

					class TryLookupExtensionPointImplementationAcid
					{
					protected:
						virtual bool WasAlreadyReportedToTelemetry(long);
						virtual void StopActivity();
					public:
						void EvaluatingRegistration<unsigned short * &,bool &>(unsigned short * &,bool &);
						void StartActivity(HSTRING__ *);
						void Stop(unsigned short const *);
						~TryLookupExtensionPointImplementationAcid();
					};

					static _tlgProvider_t const * Provider();
				};

				long ForEachEnabledExtensionRegistration(HSTRING__ *,wistd::function<long (Details::ExtensionRegistration const *,bool,bool *)> const &);
				long GetExtensionRegistrationsForExtensionPoint(HSTRING__ *,wistd::unique_ptr<Details::ExtensionRegistrationCollection,wistd::default_delete<Details::ExtensionRegistrationCollection> > *);
				long TryActivateContractExtensionInternal(HSTRING__ *,ApplicationModel::WindowManagement::WindowId,_GUID const &,void * *);
				long TryLookupExtensionPointImplementationAcid(HSTRING__ *,unsigned short *,unsigned __int64,_GUID const *);
			};

		};

		namespace Shell
		{
			namespace Holographic
			{
				long GetWindowDisplayContext(HWND__ *,Holographic::ContextInspectionOptions,Holographic::UserDisplayContext *);
			};

		};

	};

};

class _TlgActivityBase<wil::ActivityBase<CredUIBrokerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CredUIBrokerLogging,_TlgReflectorTag_Param0IsProviderType>,35184372088832,5>
{
protected:
	~_TlgActivityBase<wil::ActivityBase<CredUIBrokerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CredUIBrokerLogging,_TlgReflectorTag_Param0IsProviderType>,35184372088832,5>();
};

class _TlgActivityBase<wil::ActivityBase<CredUXLogging,1,35184372088832,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CredUXLogging,_TlgReflectorTag_Param0IsProviderType>,35184372088832,5>
{
protected:
	~_TlgActivityBase<wil::ActivityBase<CredUXLogging,1,35184372088832,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CredUXLogging,_TlgReflectorTag_Param0IsProviderType>,35184372088832,5>();
};

class _TlgActivityBase<wil::ActivityBase<Windows::Internal::PlatformExtensions::Details::PlatformExtensionsTelemetry,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<Windows::Internal::PlatformExtensions::Details::PlatformExtensionsTelemetry,_TlgReflectorTag_Param0IsProviderType>,35184372088832,5>
{
protected:
	~_TlgActivityBase<wil::ActivityBase<Windows::Internal::PlatformExtensions::Details::PlatformExtensionsTelemetry,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<Windows::Internal::PlatformExtensions::Details::PlatformExtensionsTelemetry,_TlgReflectorTag_Param0IsProviderType>,35184372088832,5>();
};

class _TlgActivityBase<wil::ActivityBase<Windows::Internal::PlatformExtensions::Details::PlatformExtensionsTelemetry,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<Windows::Internal::PlatformExtensions::Details::PlatformExtensionsTelemetry,_TlgReflectorTag_Param0IsProviderType>,70368744177664,5>
{
protected:
	~_TlgActivityBase<wil::ActivityBase<Windows::Internal::PlatformExtensions::Details::PlatformExtensionsTelemetry,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<Windows::Internal::PlatformExtensions::Details::PlatformExtensionsTelemetry,_TlgReflectorTag_Param0IsProviderType>,70368744177664,5>();
};

namespace std
{
	nothrow_t const std::nothrow;
};

namespace wil
{
	class ActivityBase<CredUIBrokerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>
	{
		struct ActivityData<CredUIBrokerLogging,_TlgReflectorTag_Param0IsProviderType>
		{
			~ActivityData<CredUIBrokerLogging,_TlgReflectorTag_Param0IsProviderType>();
		};

	protected:
		void Destroy();
	public:
		ActivityBase<CredUIBrokerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(char const *,bool);
		_GUID const * zInternalRelatedId();
		virtual bool NotifyFailure(FailureInfo const &);
		void IgnoreCurrentThread();
		void zInternalStart();
		void zInternalStop();
		~ActivityBase<CredUIBrokerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>();
	};

	class ActivityBase<CredUXLogging,1,35184372088832,5,50331648,_TlgReflectorTag_Param0IsProviderType>
	{
		struct ActivityData<CredUXLogging,_TlgReflectorTag_Param0IsProviderType>
		{
			bool SetStopResult(long,long *);
			~ActivityData<CredUXLogging,_TlgReflectorTag_Param0IsProviderType>();
		};

	protected:
		void Destroy();
	public:
		_GUID const * zInternalRelatedId();
		virtual bool NotifyFailure(FailureInfo const &);
		void Stop(long);
		void zInternalStop();
		~ActivityBase<CredUXLogging,1,35184372088832,5,50331648,_TlgReflectorTag_Param0IsProviderType>();
	};

	class ActivityBase<Windows::Internal::PlatformExtensions::Details::PlatformExtensionsTelemetry,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>
	{
		struct ActivityData<Windows::Internal::PlatformExtensions::Details::PlatformExtensionsTelemetry,_TlgReflectorTag_Param0IsProviderType>
		{
			~ActivityData<Windows::Internal::PlatformExtensions::Details::PlatformExtensionsTelemetry,_TlgReflectorTag_Param0IsProviderType>();
		};

	protected:
		void Destroy();
	public:
		_GUID const * zInternalRelatedId();
		virtual bool NotifyFailure(FailureInfo const &);
		void zInternalStop();
		~ActivityBase<Windows::Internal::PlatformExtensions::Details::PlatformExtensionsTelemetry,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>();
	};

	class ActivityBase<Windows::Internal::PlatformExtensions::Details::PlatformExtensionsTelemetry,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>
	{
		struct ActivityData<Windows::Internal::PlatformExtensions::Details::PlatformExtensionsTelemetry,_TlgReflectorTag_Param0IsProviderType>
		{
			~ActivityData<Windows::Internal::PlatformExtensions::Details::PlatformExtensionsTelemetry,_TlgReflectorTag_Param0IsProviderType>();
		};

	protected:
		void Destroy();
	public:
		_GUID const * zInternalRelatedId();
		virtual bool NotifyFailure(FailureInfo const &);
		void zInternalStop();
		~ActivityBase<Windows::Internal::PlatformExtensions::Details::PlatformExtensionsTelemetry,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>();
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

	struct com_ptr_t<IActivationFactory,err_returncode_policy>
	{
		~com_ptr_t<IActivationFactory,err_returncode_policy>();
	};

	struct com_ptr_t<IInspectable,err_returncode_policy>
	{
		~com_ptr_t<IInspectable,err_returncode_policy>();
	};

	struct com_ptr_t<Windows::Internal::Foundation::Contracts::IActivationFactoryContractRedirector,err_returncode_policy>
	{
		~com_ptr_t<Windows::Internal::Foundation::Contracts::IActivationFactoryContractRedirector,err_returncode_policy>();
	};

	struct com_ptr_t<Windows::Internal::Foundation::Contracts::IActivationFactoryContractRedirectorContext,err_returncode_policy>
	{
		~com_ptr_t<Windows::Internal::Foundation::Contracts::IActivationFactoryContractRedirectorContext,err_returncode_policy>();
	};

	namespace details
	{
		struct DestroyThreadPoolTimer<SystemThreadPoolMethods,0>
		{
			static void Destroy(_TP_TIMER *);
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
			static bool GetThreadContext(FailureInfo *,ThreadFailureCallbackHolder *,char *,unsigned __int64);
			static void GetContextAndNotifyFailure(FailureInfo *,char *,unsigned __int64);
			void StartWatching();
			void StopWatching();
			~ThreadFailureCallbackHolder();
		};

		namespace in1diag3
		{
			bool FailFast_HrIfMsg(void *,unsigned int,char const *,long,bool,char const *,...);
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

		struct shared_object<ActivityBase<CredUIBrokerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CredUIBrokerLogging,_TlgReflectorTag_Param0IsProviderType> >
		{
			void reset();
		};

		struct shared_object<ActivityBase<CredUXLogging,1,35184372088832,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CredUXLogging,_TlgReflectorTag_Param0IsProviderType> >
		{
			void reset();
		};

		struct shared_object<ActivityBase<Windows::Internal::PlatformExtensions::Details::PlatformExtensionsTelemetry,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<Windows::Internal::PlatformExtensions::Details::PlatformExtensionsTelemetry,_TlgReflectorTag_Param0IsProviderType> >
		{
			void reset();
		};

		struct shared_object<ActivityBase<Windows::Internal::PlatformExtensions::Details::PlatformExtensionsTelemetry,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<Windows::Internal::PlatformExtensions::Details::PlatformExtensionsTelemetry,_TlgReflectorTag_Param0IsProviderType> >
		{
			void reset();
		};

		struct static_lazy<CredUIBrokerLogging>
		{
			struct Completer
			{
				~Completer();
			};

			CredUIBrokerLogging * get(void (*)());
		};

		struct static_lazy<CredUXLogging>
		{
			struct Completer
			{
				~Completer();
			};

			CredUXLogging * get(void (*)());
		};

		struct static_lazy<FeatureLogging>
		{
			struct Completer
			{
				~Completer();
			};

			FeatureLogging * get(void (*)());
		};

		struct static_lazy<Windows::Internal::PlatformExtensions::Details::PlatformExtensionsTelemetry>
		{
			struct Completer
			{
				~Completer();
			};

			Windows::Internal::PlatformExtensions::Details::PlatformExtensionsTelemetry * get(void (*)());
		};

		bool GetModuleInformation(void *,unsigned int *,char *,unsigned __int64);
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
		long (* ?? g_pfnRtlDisownModuleHeapAllocation)(void *,void *);
		long GetLastErrorFailHr();
		long HrToNtStatus(long);
		long NtStatusToHr(long);
		long ReportFailure_GetLastErrorHr<1>(void *,unsigned int,char const *,char const *,char const *,void *);
		long ReportFailure_Win32<1>(void *,unsigned int,char const *,char const *,char const *,void *,unsigned long);
		long RtlDisownModuleHeapAllocation(void *,void *);
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
		void ReleaseMutex(void *);
		void ReportFailure_Base<1,0>(void *,unsigned int,char const *,char const *,char const *,void *,details::ResultStatus const &,unsigned short const *,details::ReportFailureOptions);
		void ReportFailure_Base<2,0>(void *,unsigned int,char const *,char const *,char const *,void *,details::ResultStatus const &,unsigned short const *,details::ReportFailureOptions);
		void ReportFailure_Base<3,0>(void *,unsigned int,char const *,char const *,char const *,void *,details::ResultStatus const &,unsigned short const *,details::ReportFailureOptions);
		void ReportFailure_Hr<1>(void *,unsigned int,char const *,char const *,char const *,void *,long);
		void ReportFailure_Hr<2>(void *,unsigned int,char const *,char const *,char const *,void *,long);
		void ReportFailure_Hr<3>(void *,unsigned int,char const *,char const *,char const *,void *,long);
		void ReportFailure_HrMsg<3>(void *,unsigned int,char const *,char const *,char const *,void *,long,char const *,char *);
		void ReportFailure_Msg<3>(void *,unsigned int,char const *,char const *,char const *,void *,details::ResultStatus const &,char const *,char *);
		void ReportFailure_NoReturn<3>(void *,unsigned int,char const *,char const *,char const *,void *,details::ResultStatus const &,unsigned short const *,details::ReportFailureOptions);
		void ReportFailure_Return<1>(void *,unsigned int,char const *,char const *,char const *,void *,details::ResultStatus const &,unsigned short const *,details::ReportFailureOptions);
		void ReportFailure_Return<2>(void *,unsigned int,char const *,char const *,char const *,void *,details::ResultStatus const &,unsigned short const *,details::ReportFailureOptions);
		void UnsubscribeProcessWideUsageFlush(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
		void WilApiImpl_RecordFeatureUsage(unsigned int,unsigned int,unsigned int,char const *);
		void WilApiImpl_SubscribeFeatureStateChangeNotification(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
		void WilApiImpl_UnsubscribeFeatureStateChangeNotification(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
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
		struct __func<<lambda_4f9cb091d726181fa859ce89134efc24>,long (Windows::Internal::PlatformExtensions::Details::ExtensionRegistration const *,bool,bool *)>
		{
			virtual void __clone(__base<long (Windows::Internal::PlatformExtensions::Details::ExtensionRegistration const *,bool,bool *)> *);
			virtual void __move(__base<long (Windows::Internal::PlatformExtensions::Details::ExtensionRegistration const *,bool,bool *)> *);
			virtual void destroy();
		};

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

	struct function<long (Windows::Internal::PlatformExtensions::Details::ExtensionRegistration const *,bool,bool *)>
	{
		~function<long (Windows::Internal::PlatformExtensions::Details::ExtensionRegistration const *,bool,bool *)>();
	};

	struct function<long (unsigned short *,unsigned __int64,unsigned __int64 *)>
	{
		long operator()(unsigned short *,unsigned __int64,unsigned __int64 *);
		~function<long (unsigned short *,unsigned __int64,unsigned __int64 *)>();
	};

	struct unique_ptr<Windows::Internal::PlatformExtensions::Details::ExtensionRegistration,default_delete<Windows::Internal::PlatformExtensions::Details::ExtensionRegistration> >
	{
		void reset(Windows::Internal::PlatformExtensions::Details::ExtensionRegistration *);
	};

	struct unique_ptr<Windows::Internal::PlatformExtensions::Details::ExtensionRegistrationCollection,default_delete<Windows::Internal::PlatformExtensions::Details::ExtensionRegistrationCollection> >
	{
		void reset(Windows::Internal::PlatformExtensions::Details::ExtensionRegistrationCollection *);
	};

};

;
HINSTANCE__ * g_wil_details_kernelbaseModuleHandle;
HINSTANCE__ * g_wil_details_ntdllModuleHandle;
HINSTANCE__ * wil_details_GetKernelBaseModuleHandle();
HINSTANCE__ * wil_details_GetNtDllModuleHandle();
Microsoft::WRL::Details::CreatorMap const __object_CCredUIBrokerForAppContainers_COM;
Microsoft::WRL::Details::CreatorMap const __object_CCredUIBrokerForNonAppContainersFailedMip_COM;
Microsoft::WRL::Details::CreatorMap const __object_CCredUIBrokerForNonAppContainers_COM;
Microsoft::WRL::Details::FactoryCache __objectFactory__CCredUIBrokerForAppContainers_COM;
Microsoft::WRL::Details::FactoryCache __objectFactory__CCredUIBrokerForNonAppContainersFailedMip_COM;
Microsoft::WRL::Details::FactoryCache __objectFactory__CCredUIBrokerForNonAppContainers_COM;
bool IsWideStringEmpty(unsigned short const * const);
bool _tlgGuidIsZero(_GUID const &);
int InlineIsEqualGUID(_GUID const &,_GUID const &);
long (* g_wil_details_pfnNtQueryWnfStateData)(__WIL__WNF_STATE_NAME const *,__WIL__WNF_TYPE_ID const *,void const *,unsigned long *,void *,unsigned long *);
long (* g_wil_details_pfnNtUpdateWnfStateData)(__WIL__WNF_STATE_NAME const *,void const *,unsigned long,__WIL__WNF_TYPE_ID const *,void const *,unsigned long,unsigned long);
long CheckTokenMembershipSubAuthority0(void *,unsigned long,int *);
long ConvertCredUiInfoToInternal(_CREDUI_INFOW *,bool,CREDUI_INFO_INTERNAL *);
long CreateCredUXParams(unsigned long,_CREDUI_CONTEXT const *,CREDUI_INFO_INTERNAL *,unsigned long,unsigned long *,void const *,unsigned long,int *,unsigned long,Windows::Internal::UI::Credentials::Controller::CredUIStyle,Windows::Internal::UI::Credentials::Controller::ICredUXExtension *,Windows::Internal::UI::Credentials::Controller::IConsentUXContext *,Windows::Internal::UI::Credentials::Controller::ICredUXSecurePrompt *,Windows::Internal::UI::Credentials::Controller::ICredUXParameters * *);
long ExtractCredentialData(Windows::Internal::UI::Credentials::Controller::IRequestCredentialsData *,unsigned long *,void * *,unsigned long *,int *);
long PromptAndWaitForCredsWithStyle(Windows::Internal::Shell::PlatformExtensions::ICredUX *,Windows::Internal::UI::Credentials::Controller::CredUIStyle,Windows::Internal::UI::Credentials::Controller::ICredUXExtension *,Windows::Internal::UI::Credentials::Controller::IConsentUXContext *,Windows::Internal::UI::Credentials::Controller::ICredUXSecurePrompt *,unsigned long,_CREDUI_CONTEXT const *,CREDUI_INFO_INTERNAL *,unsigned long,unsigned long *,void const *,unsigned long,void * *,unsigned long *,int *,unsigned long,unsigned long *);
long PromptForCreds(_CREDUI_INFOW *,unsigned long,unsigned long *,void const *,unsigned long,void * *,unsigned long *,int *,unsigned long,unsigned long *);
long PromptInternal(Windows::Internal::Shell::PlatformExtensions::ICredUX *,Windows::Internal::UI::Credentials::Controller::CredUIStyle,Windows::Internal::UI::Credentials::Controller::ICredUXExtension *,Windows::Internal::UI::Credentials::Controller::IConsentUXContext *,Windows::Internal::UI::Credentials::Controller::ICredUXSecurePrompt *,unsigned long,_CREDUI_CONTEXT const *,CREDUI_INFO_INTERNAL *,unsigned long,unsigned long *,void const *,unsigned long,void * *,unsigned long *,int *,unsigned long,bool *);
long PromptLocalServiceWithStyle(CREDUI_STYLE,CREDUI_INFO_INTERNAL *,unsigned long,unsigned long *,void const *,unsigned long,void * *,unsigned long *,int *,unsigned long,unsigned __int64,unsigned long *);
long ResultFromKnownLastError();
long ResultFromWin32Bool(int);
long RunCredUI(_CREDUI_INFOW *,unsigned long,unsigned long *,void const *,unsigned long,void * *,unsigned long *,int *,unsigned long,unsigned __int64,unsigned long *);
long RunCredUIWithStyle(Windows::Internal::UI::Credentials::Controller::CredUIStyle,_CREDUI_INFOW *,unsigned long,unsigned long *,void const *,unsigned long,void * *,unsigned long *,int *,unsigned long,unsigned __int64,unsigned long *);
long StringCchCatW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchCopyNExW(unsigned short *,unsigned __int64,unsigned short const *,unsigned __int64,unsigned short * *,unsigned __int64 *,unsigned long);
long StringCchCopyW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchPrintfW(unsigned short *,unsigned __int64,unsigned short const *,...);
long StringCchVPrintfW(unsigned short *,unsigned __int64,unsigned short const *,char *);
long TranslateOwnerHwnd(HWND__ * &);
long ULongLongMult(unsigned __int64,unsigned __int64,unsigned __int64 *);
long WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::UI::Credentials::Controller::RequestCredentialsData *>,Windows::Foundation::IAsyncOperation<Windows::Internal::UI::Credentials::Controller::RequestCredentialsData *> >(Windows::Foundation::IAsyncOperation<Windows::Internal::UI::Credentials::Controller::RequestCredentialsData *> *,tagCOWAIT_FLAGS,void *);
long _AllocArray<unsigned short,CTCoAllocPolicy>(void *,unsigned long,unsigned __int64,unsigned short * *);
long _AllocStringWorker<CTCoAllocPolicy>(void *,unsigned long,unsigned short const *,unsigned __int64,unsigned __int64,unsigned short * *);
long __CxxUnhandledExceptionFilter(_EXCEPTION_POINTERS *);
long wil_details_NtQueryWnfStateData(__WIL__WNF_STATE_NAME const *,__WIL__WNF_TYPE_ID const *,void const *,unsigned long *,void *,unsigned long *);
long wil_details_NtUpdateWnfStateData(__WIL__WNF_STATE_NAME const *,void const *,unsigned long,__WIL__WNF_TYPE_ID const *,void const *,unsigned long,unsigned long);
long wil_details_WriteSRUMWnfUsageBuffer(wil::details_abi::heap_vector<wil_details_FeatureUsageSRUM> *);
unsigned long GetBufferSize(tagSAFEARRAY *);
unsigned long LaunchCredUIThreadProc(void *);
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Core_CoreApplication;
unsigned short const * const RuntimeClass_Windows_Internal_Foundation_Contracts_ActivationFactoryContractRedirectorContext;
unsigned short const * const RuntimeClass_Windows_Internal_Shell_Holographic_ContextIdentifier;
unsigned short const * const RuntimeClass_Windows_Storage_Streams_Buffer;
unsigned short const * const RuntimeClass_Windows_UI_WindowManagement_Preview_WindowManagementPreview;
void (* g_wil_details_internalRecordFeatureUsage)(unsigned int,unsigned int,unsigned int,char const *);
void (* g_wil_details_internalSubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
void (* g_wil_details_internalUnsubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
void (* g_wil_details_pfnFeatureLoggingHook)(unsigned int,FEATURE_LOGGED_TRAITS const *,FEATURE_ERROR const *,int,wil_ReportingKind const *,wil_VariantReportingKind const *,unsigned char,unsigned __int64);
void * operator new(unsigned __int64);
void * operator new(unsigned __int64,std::nothrow_t const &);
void * operator new[](unsigned __int64,std::nothrow_t const &);
void LogOwnerWindowTelemetry(CREDUI_INFO_INTERNAL *);
void _tlgWriteActivityAutoStop<35184372088832,5>(_tlgProvider_t const *,_GUID const *);
void _tlgWriteActivityAutoStop<70368744177664,5>(_tlgProvider_t const *,_GUID const *);
void operator delete(void *);
