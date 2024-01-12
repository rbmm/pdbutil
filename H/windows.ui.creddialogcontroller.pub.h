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

class <lambda_15fb5e339dd11d18504022f286b77522>
{
	static <lambda_invoker_cdecl>();
};

class <lambda_1ad7ecfab602a777ecf020873216a663>
{
	static <lambda_invoker_cdecl>(void *);
};

class <lambda_376525fb27fd4d23a6d22a5c69e95956>
{
	static long <lambda_invoker_cdecl>(_WNF_STATE_NAME,unsigned long,_WNF_TYPE_ID *,void *,void const *,unsigned long);
};

class <lambda_5035b992506f4af81a770c5842624510>
{
	static <lambda_invoker_cdecl>(_TP_CALLBACK_INSTANCE *,void *,_TP_TIMER *);
};

struct <lambda_57a9c870cb5787c445dd52e46e135f4b>
{
	long operator()();
};

class <lambda_5f1dd388c03885d19ee806198d2ac5ef>
{
	static int <lambda_invoker_cdecl>(_RTL_RUN_ONCE *,void *,void * *);
};

struct <lambda_65e3138e1119b0922e2e133e1d5ad7dd>
{
	~<lambda_65e3138e1119b0922e2e133e1d5ad7dd>();
};

class <lambda_708cbc1e77f5082e17c8e764360bb99b>
{
	static <lambda_invoker_cdecl>();
};

class <lambda_872f10eb4eecf9de275a2f1bc62e534b>
{
	static <lambda_invoker_cdecl>();
};

class <lambda_aa194dc0bf891154933407eb98fb868a>
{
	static <lambda_invoker_cdecl>(void *);
};

struct <lambda_b01047f34762df22571ad95a3118eb4f>
{
	operator()(WNF_UMGR_USER_TILE_CHANGED_DATA const &);
	~<lambda_b01047f34762df22571ad95a3118eb4f>();
};

struct <lambda_b70241e9b5ebaad244db3e52d52cab17>
{
	operator()(unsigned short * const,unsigned short const * const,unsigned __int64,unsigned __int64,unsigned short);
};

struct <lambda_bbf5da6c9652a4f5276022be9bb02761>
{
	operator()();
};

class <lambda_d51448ba32f8ef42e59400edd4566183>
{
	static <lambda_invoker_cdecl>(_TP_CALLBACK_INSTANCE *,void *,_TP_TIMER *);
};

struct <lambda_eb2b5f7d56207cc59484d1c84bc18b68>
{
	operator()(winrt::WindowsUdk::Security::Credentials::UI::ICredUICoordinatorStatics const &);
};

struct <lambda_eb671a80c2298933c6b6690f34b15fa2>
{
	~<lambda_eb671a80c2298933c6b6690f34b15fa2>();
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

struct AutoStubBias<IUnknown,Windows::Internal::INilDelegate>
{
	~AutoStubBias<IUnknown,Windows::Internal::INilDelegate>();
};

struct AutoStubBias<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler>
{
	~AutoStubBias<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler>();
};

struct AutoStubBias<Windows::Foundation::IAsyncOperation<Windows::Internal::UI::Credentials::Controller::RequestCredentialsData *>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::UI::Credentials::Controller::RequestCredentialsData *> >
{
	~AutoStubBias<Windows::Foundation::IAsyncOperation<Windows::Internal::UI::Credentials::Controller::RequestCredentialsData *>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::UI::Credentials::Controller::RequestCredentialsData *> >();
};

struct BiasHelper<Windows::Foundation::IAsyncOperation<Windows::Internal::UI::Credentials::Controller::RequestCredentialsData *>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::UI::Credentials::Controller::RequestCredentialsData *>,1>
{
	static AutoStubBias<Windows::Foundation::IAsyncOperation<Windows::Internal::UI::Credentials::Controller::RequestCredentialsData *>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::UI::Credentials::Controller::RequestCredentialsData *> > CreateBias(IRpcOptions *,Windows::Foundation::IAsyncOperation<Windows::Internal::UI::Credentials::Controller::RequestCredentialsData *> *,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::UI::Credentials::Controller::RequestCredentialsData *> *);
};

struct CAutoHandle<HKEY__ *>
{
	~CAutoHandle<HKEY__ *>();
};

struct CCoTaskMemPtr<unsigned char>
{
	~CCoTaskMemPtr<unsigned char>();
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

struct CFileSysBindData
{
	virtual long GetFileID(_LARGE_INTEGER *);
	virtual long GetFindData(_WIN32_FIND_DATAW *);
	virtual long GetJunctionCLSID(_GUID *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SetFileID(_LARGE_INTEGER);
	virtual long SetFindData(_WIN32_FIND_DATAW const *);
	virtual long SetJunctionCLSID(_GUID const &);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CHardwareDetection
{
protected:
	static CHardwareDetection::HardwareState _s_HardwareState;
	static unsigned int _s_uKeyboardCount;
public:
	static CHardwareDetection::HardwareState s_GetState();
	static unsigned int s_GetPhysicalKeyboardCount(void *);
};

struct CLogonAsyncOperationBase<Windows::Internal::UI::Credentials::Controller::RequestCredentialsData,Windows::Internal::UI::Credentials::Controller::IRequestCredentialsData,Windows::Internal::UI::Credentials::CredUX::IRequestCredentialComplete>
{
	CLogonAsyncOperationBase<Windows::Internal::UI::Credentials::Controller::RequestCredentialsData,Windows::Internal::UI::Credentials::Controller::IRequestCredentialsData,Windows::Internal::UI::Credentials::CredUX::IRequestCredentialComplete>();
	virtual long GetResults(Windows::Internal::UI::Credentials::Controller::IRequestCredentialsData * *);
	virtual long OnComplete(Windows::Internal::UI::Credentials::Controller::IRequestCredentialsData *);
	virtual long get_Completed(Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::UI::Credentials::Controller::RequestCredentialsData *> * *);
	virtual long put_Completed(Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::UI::Credentials::Controller::RequestCredentialsData *> *);
	virtual void OnClose();
	virtual ~CLogonAsyncOperationBase<Windows::Internal::UI::Credentials::Controller::RequestCredentialsData,Windows::Internal::UI::Credentials::Controller::IRequestCredentialsData,Windows::Internal::UI::Credentials::CredUX::IRequestCredentialComplete>();
};

class CMarshaledInterface
{
	long _Unmarshal(_GUID const &,void * *,bool);
};

struct CRequestCredentialsAsyncOperation
{
	long RuntimeClassInitialize(Windows::Internal::UI::XAMLHost::IUIThreadDispatcher *,Windows::Internal::UI::XAMLHost::IXAMLHostResourceMap *,Windows::Internal::UI::Credentials::Controller::ICredUXParameters *,IInspectable *,Windows::Internal::UI::Logon::CredProvData::IDisplayStateProvider *);
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long OnStart();
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual void OnCancel();
	virtual ~CRequestCredentialsAsyncOperation();
};

struct CSASHardwareDetection
{
	static CSASHardwareDetection::HardwareButtonCombinationAsSASGesture s_GetHardwareButtonAvailability();
};

struct CTCoAllocPolicy
{
	static long Alloc(void *,unsigned long,unsigned __int64,void * *);
};

namespace CallerIdentity
{
	bool g_fRuntimeBrokerProcessIdInitialize;
	long GetCallerProcessImageName(unsigned short *,unsigned long *);
	long GetCallingProcessAppId(unsigned short * *);
	long GetCallingProcessHandle(unsigned long,RUNTIMEBROKER_CALLERIDENTITY_CHECK,void * *);
	long GetProcessAppId(void *,unsigned short * *);
	unsigned long g_dwRuntimeBrokerProcessId;
	void _EnsureRuntimeBrokerPID();
};

class ConsentUXContext
{
	bool IsFromMalware();
	long SetupSignatureDefaults(_CREDUI_CONTEXT const *,bool *);
	void * DuplicateHandleInCurrentProcess(unsigned long,void *);
	void OnPublisherCertificateLinkClicked_BGThread();
public:
	ConsentUXContext();
	long RuntimeClassInitialize(_CREDUI_CONTEXT const *);
	virtual long OnPublisherCertificateLinkClicked();
	virtual long OnUACSettingsLinkClicked();
	virtual long get_ActionText(HSTRING__ * *);
	virtual long get_ActionTextVisible(unsigned char *);
	virtual long get_AntiMalwareProviderName(HSTRING__ * *);
	virtual long get_ExpandPublisherByDefault(unsigned char *);
	virtual long get_Expanded(HSTRING__ * *);
	virtual long get_Icon(Windows::Storage::Streams::IRandomAccessStream * *);
	virtual long get_IsExpandedTextCLSID(unsigned char *);
	virtual long get_IsPublisherVerified(unsigned char *);
	virtual long get_OkButtonVisible(unsigned char *);
	virtual long get_ProgramName(HSTRING__ * *);
	virtual long get_ProgramOrigin(HSTRING__ * *);
	virtual long get_PublisherCertificateLinkText(HSTRING__ * *);
	virtual long get_PublisherName(HSTRING__ * *);
	virtual long get_Signature(HSTRING__ * *);
	virtual long get_SignatureLevel(Windows::Internal::UI::Credentials::Controller::ProgramSignatureLevel *);
	virtual long get_UACSettingsLinkText(HSTRING__ * *);
	virtual ~ConsentUXContext();
};

class CredUXController
{
	long AsyncOperationThreadProc(Windows::Internal::AsyncStage,long,Windows::Internal::CMarshaledInterfaceResult<Windows::Internal::UI::Credentials::Controller::IRequestCredentialsData> &,CredUXInstance *,unsigned long);
public:
	CredUXController();
	virtual long Prompt(Windows::Internal::UI::Credentials::Controller::ICredUXParameters *,Windows::Foundation::IAsyncOperation<Windows::Internal::UI::Credentials::Controller::RequestCredentialsData *> * *);
	virtual long Prompt(unsigned long,_CREDUI_CONTEXT const *,CREDUI_INFO_INTERNAL *,unsigned long,unsigned long *,void const *,unsigned long,void * *,unsigned long *,int *,unsigned long,unsigned long *);
};

struct CredUXControllerLogger
{
	static _tlgProvider_t const * Provider();
};

struct CredUXControllerTelemetry
{
	class CredUXDialogCancelledFromCallerActivity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~CredUXDialogCancelledFromCallerActivity();
	};

	class CredUXHostStartActivity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(bool);
		~CredUXHostStartActivity();
	};

	class CredUXHostStopActivity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(long);
		~CredUXHostStopActivity();
	};

	class ICredUIPromptActivity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~ICredUIPromptActivity();
	};

	class ICredUXPromptActivity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~ICredUXPromptActivity();
	};

	static void CredUIRunningAsSystemAndNotUAC();
	static void FallbackTelemetryCallback(bool,wil::FailureInfo const &);
};

class CredUXDisplayStateProvider
{
	Windows::Internal::UI::Logon::CredProvData::DisplayStateFlags DisplayStateFlagsFromXAMLDisplayState(Windows::Internal::UI::XAMLHost::DisplayState);
public:
	CredUXDisplayStateProvider();
	long RuntimeClassInitialize(Windows::Internal::UI::XAMLHost::IXAMLHostWindow *);
	long Shutdown();
	virtual long Invoke(IInspectable *,Windows::Internal::UI::XAMLHost::DisplayState);
	virtual long add_DisplayStateChanged(Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::Logon::CredProvData::IDisplayStateProvider *,Windows::Internal::UI::Logon::CredProvData::DisplayStateFlags> *,EventRegistrationToken *);
	virtual long get_DisplayState(Windows::Internal::UI::Logon::CredProvData::DisplayStateFlags *);
	virtual long remove_DisplayStateChanged(EventRegistrationToken);
	virtual ~CredUXDisplayStateProvider();
};

struct CredUXExtension
{
	CredUXExtension();
	long RuntimeClassInitialize(_CREDUI_CONTEXT const *,HWND__ *);
	virtual long GetStringFromError(unsigned int,HSTRING__ * *);
	virtual long GetUserAccountKind(HSTRING__ *,Windows::Internal::UI::Logon::CredProvData::UserAccountKind *);
	virtual long get_ConsentUIMessageText(HSTRING__ * *);
	virtual long get_FallbackCaptionText(HSTRING__ * *);
	virtual long get_IsSecurePromptPolicyEnforced(unsigned char *);
	virtual long get_IsThreadOnSecureDesktop(unsigned char *);
	virtual long get_UserTileImageProvider(Windows::Internal::UI::Logon::CredProvData::IUserTileImageProvider * *);
	virtual ~CredUXExtension();
};

class CredUXInstance
{
	bool OnCoordinatorPositionChanged(winrt::WindowsUdk::Security::Credentials::UI::CredUICoordinator);
	long LoadAccessibilitySettingsForCurrentUser(Windows::Internal::UI::XAMLHost::IUIThreadDispatcher *);
	long OnComplete(long,Windows::Internal::UI::Credentials::Controller::IRequestCredentialsData *);
	long OnCompleteWorker(long,Windows::Internal::UI::Credentials::Controller::IRequestCredentialsData *);
	long SetBorderColorForAppWindow(Windows::Internal::UI::XAMLHost::IViewDefinition *);
	void ShutdownCredUXInstance();
	void UpdateFromCoordinator(Windows::Internal::UI::XAMLHost::ViewConfigFlags *,unsigned short const * *);
public:
	CredUXInstance();
	long Cancel();
	long RuntimeClassInitialize(Windows::Internal::UI::Credentials::Controller::ICredUXParameters *);
	long Start(Windows::Internal::AsyncDeferral<Windows::Internal::CMarshaledInterfaceResult<Windows::Internal::UI::Credentials::Controller::IRequestCredentialsData> >);
	virtual ~CredUXInstance();
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

class CredUXSecurePrompt
{
	static CREDUI_INFO_INTERNAL_CONTEXT _s_ConvertCredUIInfoInternalToContext(CREDUI_INFO_INTERNAL const *);
	void _EnsureAPCThreadTerminated();
protected:
	static unsigned long s_APCThread(void *);
	static void s_APCCallback(_RPC_ASYNC_STATE *,void *,_RPC_ASYNC_EVENT);
	static void s_APCSleepExit(unsigned __int64);
public:
	CredUXSecurePrompt();
	long RuntimeClassInitialize(SecurePromptParametersBlob *,Windows::Internal::UI::Credentials::Controller::ICredUXExtension *);
	virtual long AttemptSecureRequest();
	virtual long CancelSecureRequest();
	virtual long add_SecurePromptPhaseChanged(Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::Internal::UI::Credentials::Controller::SecurePromptPhase> *,EventRegistrationToken *);
	virtual long get_EnterSecurePromptPhaseText(HSTRING__ * *);
	virtual long get_SecurePromptGestureText(HSTRING__ * *);
	virtual long remove_SecurePromptPhaseChanged(EventRegistrationToken);
	virtual ~CredUXSecurePrompt();
	void OnIsWaitingForSecureGestureChanged();
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

class CredUXViewDefinition
{
	long GetCenteredOnParentPosition(tagRECT *,HWND__ *,tagSIZE const *);
	long GetCenteredOnScreenPosition(tagRECT *,tagSIZE const *);
	long PrepResourceMap(IInspectable *);
protected:
	virtual long v_GetRootElement(IInspectable *,_GUID const &,void * *);
	virtual long v_GetRootViewModel(IInspectable *,_GUID const &,void * *);
	virtual long v_GetTheme(Windows::UI::Xaml::ApplicationTheme *);
	virtual long v_GetTitleBarInfo(unsigned int,Windows::Internal::UI::XAMLHost::TitleBarInfo *);
	virtual long v_GetViewPosition(unsigned int,Windows::Foundation::Rect,Windows::Foundation::Rect *);
	virtual long v_GetXAMLSite(_GUID const &,void * *);
	virtual long v_OnHighContrastChange();
	virtual long v_TitleBarClose();
	virtual long v_UpdateTitleBarCloseButtonState(Windows::Internal::UI::XAMLHost::CloseButtonState);
public:
	long RuntimeClassInitialize(ViewDefinition const *,Windows::Internal::UI::Credentials::CredUX::ICredUXViewProvider *,HWND__ *);
	virtual ~CredUXViewDefinition();
};

struct DispatchableCredentialTask
{
	virtual long Dispatch();
	virtual ~DispatchableCredentialTask();
};

struct DispatchableTask<<lambda_65e3138e1119b0922e2e133e1d5ad7dd> >
{
	virtual long Dispatch();
	virtual ~DispatchableTask<<lambda_65e3138e1119b0922e2e133e1d5ad7dd> >();
};

struct DispatchableTask<<lambda_eb671a80c2298933c6b6690f34b15fa2> >
{
	virtual long Dispatch();
	virtual ~DispatchableTask<<lambda_eb671a80c2298933c6b6690f34b15fa2> >();
};

struct DispatcherWrapper
{
	DispatcherWrapper();
	virtual long DispatchEvent(Windows::Internal::UI::Logon::CredProvData::IDispatchEvent *);
	virtual ~DispatcherWrapper();
};

namespace Microsoft
{
	namespace WRL
	{
		class AgileRef
		{
		protected:
			long InternalResolve(_GUID const &,void * *);
		public:
			AgileRef();
			~AgileRef();
		};

		struct ClassFactory<Details::Nil,Details::Nil,Details::Nil,0>
		{
			ClassFactory<Details::Nil,Details::Nil,Details::Nil,0>();
			virtual long LockServer(int);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
		};

		struct ComPtr<CMarshaledInterface::CMarshalStream>
		{
			ComPtr<CMarshaledInterface::CMarshalStream> & operator=(ComPtr<CMarshaledInterface::CMarshalStream> const &);
		};

		class ComPtr<CRequestCredentialsAsyncOperation>
		{
		protected:
			void InternalAddRef();
		public:
			~ComPtr<CRequestCredentialsAsyncOperation>();
		};

		struct ComPtr<ConsentUXContext>
		{
			~ComPtr<ConsentUXContext>();
		};

		class ComPtr<CredUXController>
		{
		protected:
			void InternalAddRef();
		public:
			~ComPtr<CredUXController>();
		};

		class ComPtr<CredUXDisplayStateProvider>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<CredUXDisplayStateProvider>();
		};

		class ComPtr<CredUXInstance>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			~ComPtr<CredUXInstance>();
		};

		struct ComPtr<CredUXParameters>
		{
			~ComPtr<CredUXParameters>();
		};

		class ComPtr<CredUXSecurePrompt>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			~ComPtr<CredUXSecurePrompt>();
		};

		class ComPtr<CredUXViewDefinition>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<CredUXViewDefinition>();
		};

		class ComPtr<Details::EventTargetArray>
		{
		protected:
			void InternalAddRef();
		public:
			ComPtr<Details::EventTargetArray> & operator=(ComPtr<Details::EventTargetArray> const &);
			ComPtr<Details::EventTargetArray> & operator=(Details::EventTargetArray *);
			void Attach(Details::EventTargetArray *);
			~ComPtr<Details::EventTargetArray>();
		};

		class ComPtr<IAgileObject>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IAgileObject>();
		};

		class ComPtr<IAgileReference>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IAsyncInfo>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			ComPtr<IAsyncInfo> & operator=(ComPtr<IAsyncInfo> const &);
			long As<Windows::Foundation::IAsyncAction>(Details::ComPtrRef<ComPtr<Windows::Foundation::IAsyncAction> >);
			long As<Windows::Foundation::IAsyncOperation<Windows::Internal::UI::Credentials::Controller::RequestCredentialsData *> >(Details::ComPtrRef<ComPtr<Windows::Foundation::IAsyncOperation<Windows::Internal::UI::Credentials::Controller::RequestCredentialsData *> > >);
			~ComPtr<IAsyncInfo>();
		};

		class ComPtr<ICallingProcessInfo>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<ICredProviderCredentialSerialization>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<ICredProviderCredentialSerialization>();
		};

		class ComPtr<IGlobalInterfaceTable>
		{
		protected:
			unsigned long InternalRelease();
		};

		struct ComPtr<IGlobalOptions>
		{
			~ComPtr<IGlobalOptions>();
		};

		class ComPtr<IInitializeWithWindow>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IInitializeWithWindow>();
		};

		class ComPtr<IInspectable>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			ComPtr<IInspectable> & operator=(IInspectable *);
			long CopyTo(_GUID const &,void * *);
			~ComPtr<IInspectable>();
		};

		class ComPtr<IMarshal>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IObjectWithWindow>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IObjectWithWindow>();
		};

		class ComPtr<IPropertyBag2>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IPropertyBag2>();
		};

		class ComPtr<IRestrictedErrorInfo>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IRpcOptions>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IRpcOptions>();
		};

		class ComPtr<IShellItem>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IShellItem>();
		};

		class ComPtr<IStream>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IStream>();
		};

		class ComPtr<IUnknown>
		{
		protected:
			unsigned long InternalRelease();
		public:
			ComPtr<IUnknown> & operator=(IUnknown *);
			ComPtr<IUnknown>();
			~ComPtr<IUnknown>();
		};

		class ComPtr<IUserTileImageProviderInternal>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IUserTileImageProviderInternal>();
		};

		class ComPtr<IUserTileStore>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IWICBitmap>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IWICBitmap>();
		};

		class ComPtr<IWICBitmapEncoder>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IWICBitmapEncoder>();
		};

		class ComPtr<IWICBitmapFrameEncode>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IWICBitmapFrameEncode>();
		};

		class ComPtr<IWICBitmapScaler>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IWICBitmapScaler>();
		};

		class ComPtr<IWICBitmapSource>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IWICBitmapSource>();
		};

		class ComPtr<IWICFormatConverter>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IWICFormatConverter>();
		};

		class ComPtr<IWICImagingFactory>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IWICImagingFactory>();
		};

		class ComPtr<StopRequestCredentialsAsyncOperation>
		{
		protected:
			void InternalAddRef();
		public:
			~ComPtr<StopRequestCredentialsAsyncOperation>();
		};

		class ComPtr<Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *> >
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *> >();
		};

		class ComPtr<Windows::Foundation::Collections::IMap<IInspectable *,IInspectable *> >
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Foundation::Collections::IMap<IInspectable *,IInspectable *> >();
		};

		class ComPtr<Windows::Foundation::Collections::Internal::AgileVector<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,0> >
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Foundation::Collections::Internal::AgileVector<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,0> >();
		};

		class ComPtr<Windows::Foundation::Collections::Internal::SimpleVectorIterator<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *,Windows::Foundation::Collections::Internal::Vector<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *,0,1,0> >,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,XWinRT::IntVersionTag,1> >
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Foundation::Collections::Internal::SimpleVectorIterator<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *,Windows::Foundation::Collections::Internal::Vector<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *,0,1,0> >,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,XWinRT::IntVersionTag,1> >();
		};

		class ComPtr<Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *,Windows::Foundation::Collections::Internal::Vector<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *,0,1,0> >,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,XWinRT::IntVersionTag,1> >
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Foundation::IAsyncAction>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Foundation::IAsyncAction>();
		};

		class ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			~ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>();
		};

		class ComPtr<Windows::Foundation::IAsyncOperation<Windows::Internal::UI::Credentials::Controller::RequestCredentialsData *> >
		{
		protected:
			unsigned long InternalRelease();
		public:
			long As<IAsyncInfo>(Details::ComPtrRef<ComPtr<IAsyncInfo> >);
			~ComPtr<Windows::Foundation::IAsyncOperation<Windows::Internal::UI::Credentials::Controller::RequestCredentialsData *> >();
		};

		class ComPtr<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::UI::Credentials::Controller::RequestCredentialsData *> >
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			ComPtr<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::UI::Credentials::Controller::RequestCredentialsData *> > & operator=(Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::UI::Credentials::Controller::RequestCredentialsData *> *);
			~ComPtr<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::UI::Credentials::Controller::RequestCredentialsData *> >();
		};

		class ComPtr<Windows::Foundation::IPropertyValueStatics>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Foundation::IPropertyValueStatics>();
		};

		class ComPtr<Windows::Internal::IAsyncDeferral>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			~ComPtr<Windows::Internal::IAsyncDeferral>();
		};

		class ComPtr<Windows::Internal::IAsyncFireCompletion>
		{
		protected:
			void InternalAddRef();
		};

		class ComPtr<Windows::Internal::INilDelegate>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Internal::INilDelegate>();
		};

		class ComPtr<Windows::Internal::Shell::PlatformExtensions::ICredUX>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Internal::Shell::PlatformExtensions::ICredUX>();
		};

		class ComPtr<Windows::Internal::UI::Credentials::Controller::IConsentUXContext>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			~ComPtr<Windows::Internal::UI::Credentials::Controller::IConsentUXContext>();
		};

		class ComPtr<Windows::Internal::UI::Credentials::Controller::ICredUXExtension>
		{
		protected:
			unsigned long InternalRelease();
		public:
			ComPtr<Windows::Internal::UI::Credentials::Controller::ICredUXExtension> & operator=(Windows::Internal::UI::Credentials::Controller::ICredUXExtension *);
			~ComPtr<Windows::Internal::UI::Credentials::Controller::ICredUXExtension>();
		};

		class ComPtr<Windows::Internal::UI::Credentials::Controller::ICredUXParameters>
		{
		protected:
			unsigned long InternalRelease();
		public:
			ComPtr<Windows::Internal::UI::Credentials::Controller::ICredUXParameters> & operator=(Windows::Internal::UI::Credentials::Controller::ICredUXParameters *);
			~ComPtr<Windows::Internal::UI::Credentials::Controller::ICredUXParameters>();
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
			void InternalAddRef();
		public:
			~ComPtr<Windows::Internal::UI::Credentials::Controller::IRequestCredentialsData>();
		};

		class ComPtr<Windows::Internal::UI::Credentials::CredUX::ICredUXResourceMap>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Internal::UI::Credentials::CredUX::ICredUXResourceMap>();
		};

		class ComPtr<Windows::Internal::UI::Credentials::CredUX::ICredUXViewInfo>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Internal::UI::Credentials::CredUX::ICredUXViewModel>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Internal::UI::Credentials::CredUX::ICredUXViewModel>();
		};

		class ComPtr<Windows::Internal::UI::Credentials::CredUX::ICredUXViewProvider>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Internal::UI::Credentials::CredUX::ICredUXViewProvider>();
		};

		class ComPtr<Windows::Internal::UI::Logon::Callbacks::IAbortableCallback>
		{
		protected:
			void InternalAddRef();
		public:
			~ComPtr<Windows::Internal::UI::Logon::Callbacks::IAbortableCallback>();
		};

		class ComPtr<Windows::Internal::UI::Logon::CredProvData::ICredentialSerialization>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Internal::UI::Logon::CredProvData::ICredentialSerialization>();
		};

		class ComPtr<Windows::Internal::UI::Logon::CredProvData::IDisplayStateProvider>
		{
		protected:
			void InternalAddRef();
		};

		class ComPtr<Windows::Internal::UI::Logon::CredProvData::IUIThreadEventDispatcher>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Internal::UI::Logon::CredProvData::IUIThreadEventDispatcher>();
		};

		class ComPtr<Windows::Internal::UI::Logon::CredProvData::IUserTileImageFactory>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Internal::UI::Logon::CredProvData::IUserTileImageProvider>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Internal::UI::XAMLHost::IDispatchableTask>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Internal::UI::XAMLHost::IDispatchableTask>();
		};

		class ComPtr<Windows::Internal::UI::XAMLHost::IDispatchableTaskWithContext>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Internal::UI::XAMLHost::IDispatchableTaskWithContext>();
		};

		class ComPtr<Windows::Internal::UI::XAMLHost::IUIThreadDispatcher>
		{
		protected:
			unsigned long InternalRelease();
		public:
			ComPtr<Windows::Internal::UI::XAMLHost::IUIThreadDispatcher> & operator=(Windows::Internal::UI::XAMLHost::IUIThreadDispatcher *);
			~ComPtr<Windows::Internal::UI::XAMLHost::IUIThreadDispatcher>();
		};

		class ComPtr<Windows::Internal::UI::XAMLHost::IXAMLHostDesiredSizeReady>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Internal::UI::XAMLHost::IXAMLHostDesiredSizeReady>();
		};

		class ComPtr<Windows::Internal::UI::XAMLHost::IXAMLHostResourceMap>
		{
		protected:
			unsigned long InternalRelease();
		public:
			ComPtr<Windows::Internal::UI::XAMLHost::IXAMLHostResourceMap> & operator=(Windows::Internal::UI::XAMLHost::IXAMLHostResourceMap *);
			~ComPtr<Windows::Internal::UI::XAMLHost::IXAMLHostResourceMap>();
		};

		class ComPtr<Windows::Internal::UI::XAMLHost::IXAMLHostWindow>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Storage::Streams::IBuffer>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Storage::Streams::IBuffer>();
		};

		class ComPtr<Windows::Storage::Streams::IBufferByteAccess>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Storage::Streams::IBufferByteAccess>();
		};

		class ComPtr<Windows::Storage::Streams::IBufferFactory>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Storage::Streams::IBufferFactory>();
		};

		class ComPtr<Windows::Storage::Streams::IRandomAccessStream>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Storage::Streams::IRandomAccessStream>();
		};

		class ComPtr<Windows::UI::Xaml::Hosting::IXamlRuntimeSite>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::UI::Xaml::Hosting::IXamlRuntimeSite>();
		};

		class ComPtr<Windows::UI::Xaml::IUIElement>
		{
		protected:
			unsigned long InternalRelease();
		};

		struct DelegateTraits<-1>
		{
			static void EnsureStackSnapshot(long);
		};

		namespace Details
		{
			struct ComPtrRef<AgileRef>
			{
				operator AgileRef *();
			};

			struct EventTargetArray
			{
				long RuntimeClassInitialize(unsigned __int64);
				virtual ~EventTargetArray();
				void AddTail(IUnknown *,void *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,0,Windows::Foundation::Collections::IIterator<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,IWeakReferenceSource,FtmBase>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,0,Windows::Internal::UI::Credentials::Controller::IConsentUXContext,IWeakReferenceSource,FtmBase>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,0,Windows::Internal::UI::Credentials::Controller::ICredUXExtension,IWeakReferenceSource,FtmBase>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,0,Windows::Internal::UI::Credentials::Controller::ICredUXParameters,IWeakReferenceSource,FtmBase>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,0,Windows::Internal::UI::Credentials::Controller::ICredUXSecurePrompt,IWeakReferenceSource,FtmBase>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,1,IWeakReferenceSource,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
				void FillArrayWithIid(unsigned long *,_GUID *);
			public:
				ImplementsHelper<RuntimeClassFlags<1>,1,IWeakReferenceSource,FtmBase>();
			};

			class ImplementsHelper<RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
				void FillArrayWithIid(unsigned long *,_GUID *);
			public:
				ImplementsHelper<RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,FtmBase>();
			};

			class ImplementsHelper<RuntimeClassFlags<1>,1,IWeakReferenceSource>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,1,Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,FtmBase>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,1,Windows::Internal::UI::Logon::Callbacks::IAbortableCallback>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,0,IInspectable,FtmBase,IWeakReferenceSource>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,0,ImplementsMarker<ViewDefinitionBase>,IWeakReferenceSource,FtmBase>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			public:
				~ImplementsHelper<RuntimeClassFlags<3>,0,ImplementsMarker<ViewDefinitionBase>,IWeakReferenceSource,FtmBase>();
			};

			class ImplementsHelper<RuntimeClassFlags<3>,0,Windows::Internal::UI::Credentials::CredUX::ICredUXResourceMap,IWeakReferenceSource,FtmBase>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,0,Windows::Internal::UI::Logon::CredProvData::IUIThreadEventDispatcher,IWeakReferenceSource,FtmBase>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,0,Windows::Internal::UI::XAMLHost::IDispatchableTask,IWeakReferenceSource,FtmBase>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,0,Windows::Internal::UI::XAMLHost::IDispatchableTaskWithContext,IWeakReferenceSource,FtmBase>
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

			class ImplementsHelper<RuntimeClassFlags<3>,1,IUserTileImageProviderInternal,FtmBase>
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

			class ImplementsHelper<RuntimeClassFlags<3>,1,IWeakReferenceSource,IUserTileImageProviderInternal,FtmBase>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Foundation::IAsyncOperation<Windows::Internal::UI::Credentials::Controller::RequestCredentialsData *>,Windows::Internal::IAsyncOperationLocal,CloakedIid<Windows::Internal::IAsyncDeferral>,CloakedIid<Windows::Internal::IComPoolTask>,CloakedIid<Windows::Internal::IAsyncFireCompletion> >
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			public:
				ImplementsHelper<RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Foundation::IAsyncOperation<Windows::Internal::UI::Credentials::Controller::RequestCredentialsData *>,Windows::Internal::IAsyncOperationLocal,CloakedIid<Windows::Internal::IAsyncDeferral>,CloakedIid<Windows::Internal::IComPoolTask>,CloakedIid<Windows::Internal::IAsyncFireCompletion> >();
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::XAMLHost::DesiredSizeClass *,IInspectable *>,FtmBase>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Internal::Shell::PlatformExtensions::ICredUX,FtmBase>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Internal::UI::XAMLHost::IDisplayStateChangedEventHandler,FtmBase>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,IWeakReferenceSource>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,ImplementsMarker<FtmBase>,IWeakReferenceSource>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,Windows::Foundation::IAsyncOperation<Windows::Internal::UI::Credentials::Controller::RequestCredentialsData *>,Windows::Internal::IAsyncOperationLocal,CloakedIid<Windows::Internal::IAsyncDeferral>,CloakedIid<Windows::Internal::IComPoolTask>,CloakedIid<Windows::Internal::IAsyncFireCompletion> >
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			public:
				ImplementsHelper<RuntimeClassFlags<3>,1,Windows::Foundation::IAsyncOperation<Windows::Internal::UI::Credentials::Controller::RequestCredentialsData *>,Windows::Internal::IAsyncOperationLocal,CloakedIid<Windows::Internal::IAsyncDeferral>,CloakedIid<Windows::Internal::IComPoolTask>,CloakedIid<Windows::Internal::IAsyncFireCompletion> >();
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::XAMLHost::DesiredSizeClass *,IInspectable *>,FtmBase>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,Windows::Internal::IAsyncOperationLocal,CloakedIid<Windows::Internal::IAsyncDeferral>,CloakedIid<Windows::Internal::IComPoolTask>,CloakedIid<Windows::Internal::IAsyncFireCompletion> >
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,Windows::Internal::Shell::PlatformExtensions::ICredUX,FtmBase>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,Windows::Internal::UI::XAMLHost::IDisplayStateChangedEventHandler,FtmBase>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,Windows::Internal::UI::XAMLHost::IViewDefinition,FtmBase>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<6>,0,IClassFactory,Nil,Nil,Nil,Nil>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			struct MakeAllocator<CCredentialProviderSerialization>
			{
				~MakeAllocator<CCredentialProviderSerialization>();
			};

			struct MakeAllocator<CRequestCredentialsAsyncOperation>
			{
				~MakeAllocator<CRequestCredentialsAsyncOperation>();
			};

			struct MakeAllocator<ConsentUXContext>
			{
				~MakeAllocator<ConsentUXContext>();
			};

			struct MakeAllocator<CredUXController>
			{
				~MakeAllocator<CredUXController>();
			};

			struct MakeAllocator<CredUXDisplayStateProvider>
			{
				~MakeAllocator<CredUXDisplayStateProvider>();
			};

			struct MakeAllocator<CredUXExtension>
			{
				~MakeAllocator<CredUXExtension>();
			};

			struct MakeAllocator<CredUXInstance>
			{
				~MakeAllocator<CredUXInstance>();
			};

			struct MakeAllocator<CredUXParameters>
			{
				~MakeAllocator<CredUXParameters>();
			};

			struct MakeAllocator<CredUXSecurePrompt>
			{
				~MakeAllocator<CredUXSecurePrompt>();
			};

			struct MakeAllocator<CredUXViewDefinition>
			{
				~MakeAllocator<CredUXViewDefinition>();
			};

			struct MakeAllocator<DispatchableCredentialTask>
			{
				~MakeAllocator<DispatchableCredentialTask>();
			};

			struct MakeAllocator<DispatchableTask<<lambda_65e3138e1119b0922e2e133e1d5ad7dd> > >
			{
				~MakeAllocator<DispatchableTask<<lambda_65e3138e1119b0922e2e133e1d5ad7dd> > >();
			};

			struct MakeAllocator<DispatchableTask<<lambda_eb671a80c2298933c6b6690f34b15fa2> > >
			{
				~MakeAllocator<DispatchableTask<<lambda_eb671a80c2298933c6b6690f34b15fa2> > >();
			};

			struct MakeAllocator<DispatcherWrapper>
			{
				~MakeAllocator<DispatcherWrapper>();
			};

			struct MakeAllocator<EventTargetArray>
			{
				~MakeAllocator<EventTargetArray>();
			};

			struct MakeAllocator<RenderCompletion>
			{
				~MakeAllocator<RenderCompletion>();
			};

			struct MakeAllocator<ResourceWrapper>
			{
				~MakeAllocator<ResourceWrapper>();
			};

			struct MakeAllocator<SimpleClassFactory<CredUXController,0> >
			{
				~MakeAllocator<SimpleClassFactory<CredUXController,0> >();
			};

			struct MakeAllocator<StopRequestCredentialsAsyncOperation>
			{
				~MakeAllocator<StopRequestCredentialsAsyncOperation>();
			};

			struct MakeAllocator<UserTileImageProvider>
			{
				~MakeAllocator<UserTileImageProvider>();
			};

			struct MakeAllocator<WeakReferenceImpl>
			{
				~MakeAllocator<WeakReferenceImpl>();
			};

			struct MakeAllocator<WindowContainer>
			{
				~MakeAllocator<WindowContainer>();
			};

			struct MakeAllocator<Windows::Foundation::Collections::Internal::SimpleVectorIterator<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *,Windows::Foundation::Collections::Internal::Vector<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *,0,1,0> >,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,XWinRT::IntVersionTag,1> >
			{
				~MakeAllocator<Windows::Foundation::Collections::Internal::SimpleVectorIterator<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *,Windows::Foundation::Collections::Internal::Vector<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *,0,1,0> >,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,XWinRT::IntVersionTag,1> >();
			};

			struct MakeAllocator<Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *,Windows::Foundation::Collections::Internal::Vector<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *,0,1,0> >,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,XWinRT::IntVersionTag,1> >
			{
				~MakeAllocator<Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *,Windows::Foundation::Collections::Internal::Vector<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *,0,1,0> >,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,XWinRT::IntVersionTag,1> >();
			};

			struct MakeAllocator<Windows::Foundation::Collections::Internal::Vector<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *,0,1,0> > >
			{
				~MakeAllocator<Windows::Foundation::Collections::Internal::Vector<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *,0,1,0> > >();
			};

			struct MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<<lambda_c2fd7731c5ae0d37e65ea73be67c0f1b> > >
			{
				~MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<<lambda_c2fd7731c5ae0d37e65ea73be67c0f1b> > >();
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

			struct RuntimeClass<InterfaceListHelper<IClassFactory,Nil,Nil,Nil,Nil>,RuntimeClassFlags<6>,0,0,0>
			{
				RuntimeClass<InterfaceListHelper<IClassFactory,Nil,Nil,Nil,Nil>,RuntimeClassFlags<6>,0,0,0>();
			};

			class RuntimeClassBaseT<1>
			{
			protected:
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,CLogonAsyncOperationBase<Windows::Internal::UI::Credentials::Controller::RequestCredentialsData,Windows::Internal::UI::Credentials::Controller::IRequestCredentialsData,Windows::Internal::UI::Credentials::CredUX::IRequestCredentialComplete> > >(RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,CLogonAsyncOperationBase<Windows::Internal::UI::Credentials::Controller::RequestCredentialsData,Windows::Internal::UI::Credentials::Controller::IRequestCredentialsData,Windows::Internal::UI::Credentials::CredUX::IRequestCredentialComplete> > *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::Credentials::Controller::IConsentUXContext,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::Credentials::Controller::IConsentUXContext,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::Credentials::Controller::ICredUXExtension,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::Credentials::Controller::ICredUXExtension,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::Credentials::Controller::ICredUXParameters,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::Credentials::Controller::ICredUXParameters,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::Credentials::Controller::ICredUXSecurePrompt,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::Credentials::Controller::ICredUXSecurePrompt,FtmBase> *,_GUID const &,void * *);
				static long GetImplementedIIDS<RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,CLogonAsyncOperationBase<Windows::Internal::UI::Credentials::Controller::RequestCredentialsData,Windows::Internal::UI::Credentials::Controller::IRequestCredentialsData,Windows::Internal::UI::Credentials::CredUX::IRequestCredentialComplete> > >(RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,CLogonAsyncOperationBase<Windows::Internal::UI::Credentials::Controller::RequestCredentialsData,Windows::Internal::UI::Credentials::Controller::IRequestCredentialsData,Windows::Internal::UI::Credentials::CredUX::IRequestCredentialComplete> > *,unsigned long *,_GUID * *);
			};

			class RuntimeClassBaseT<2>
			{
			protected:
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncActionCompletedHandler,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncActionCompletedHandler,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::UI::Credentials::Controller::RequestCredentialsData *>,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::UI::Credentials::Controller::RequestCredentialsData *>,FtmBase> *,_GUID const &,void * *);
			};

			class RuntimeClassBaseT<3>
			{
			protected:
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,ICredProviderCredentialSerialization,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,ICredProviderCredentialSerialization,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,ICredUI,Windows::Internal::Shell::PlatformExtensions::ICredUX,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,ICredUI,Windows::Internal::Shell::PlatformExtensions::ICredUX,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,IObjectWithWindow,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,IObjectWithWindow,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,ViewDefinitionBase,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,ViewDefinitionBase,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::Credentials::CredUX::ICredUXRenderComplete,Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::XAMLHost::DesiredSizeClass *,IInspectable *>,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::Credentials::CredUX::ICredUXRenderComplete,Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::XAMLHost::DesiredSizeClass *,IInspectable *>,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::Credentials::CredUX::ICredUXResourceMap,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::Credentials::CredUX::ICredUXResourceMap,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::Logon::CredProvData::IDisplayStateProvider,Windows::Internal::UI::XAMLHost::IDisplayStateChangedEventHandler,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::Logon::CredProvData::IDisplayStateProvider,Windows::Internal::UI::XAMLHost::IDisplayStateChangedEventHandler,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::Logon::CredProvData::IUIThreadEventDispatcher,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::Logon::CredProvData::IUIThreadEventDispatcher,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::Logon::CredProvData::IUserTileImageProvider,IUserTileImageProviderInternal,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::Logon::CredProvData::IUserTileImageProvider,IUserTileImageProviderInternal,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::XAMLHost::IDispatchableTask,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::XAMLHost::IDispatchableTask,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::XAMLHost::IDispatchableTaskWithContext,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::XAMLHost::IDispatchableTaskWithContext,FtmBase> *,_GUID const &,void * *);
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,CLogonAsyncOperationBase<Windows::Internal::UI::Credentials::Controller::RequestCredentialsData,Windows::Internal::UI::Credentials::Controller::IRequestCredentialsData,Windows::Internal::UI::Credentials::CredUX::IRequestCredentialComplete> >
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,CLogonAsyncOperationBase<Windows::Internal::UI::Credentials::Controller::RequestCredentialsData,Windows::Internal::UI::Credentials::Controller::IRequestCredentialsData,Windows::Internal::UI::Credentials::CredUX::IRequestCredentialComplete> >();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::Credentials::Controller::IConsentUXContext,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::Credentials::Controller::IConsentUXContext,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::Credentials::Controller::ICredUXExtension,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::Credentials::Controller::ICredUXExtension,FtmBase>();
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

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::Credentials::Controller::ICredUXSecurePrompt,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::Credentials::Controller::ICredUXSecurePrompt,FtmBase>();
			};

			class RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IUnknown>
			{
			protected:
				RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IUnknown>();
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

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncActionCompletedHandler,FtmBase>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::UI::Credentials::Controller::RequestCredentialsData *> >
			{
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

			class RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>
			{
			protected:
				RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>();
			public:
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,FtmBase>();
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

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,ICredUI,Windows::Internal::Shell::PlatformExtensions::ICredUX,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,ICredUI,Windows::Internal::Shell::PlatformExtensions::ICredUX,FtmBase>();
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

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,ViewDefinitionBase,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,ViewDefinitionBase,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::Credentials::CredUX::ICredUXRenderComplete,Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::XAMLHost::DesiredSizeClass *,IInspectable *>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::Credentials::CredUX::ICredUXRenderComplete,Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::XAMLHost::DesiredSizeClass *,IInspectable *>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::Credentials::CredUX::ICredUXResourceMap,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::Credentials::CredUX::ICredUXResourceMap,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::Logon::CredProvData::IDisplayStateProvider,Windows::Internal::UI::XAMLHost::IDisplayStateChangedEventHandler,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::Logon::CredProvData::IDisplayStateProvider,Windows::Internal::UI::XAMLHost::IDisplayStateChangedEventHandler,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::Logon::CredProvData::IUIThreadEventDispatcher,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::Logon::CredProvData::IUIThreadEventDispatcher,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::Logon::CredProvData::IUserTileImageProvider,IUserTileImageProviderInternal,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::Logon::CredProvData::IUserTileImageProvider,IUserTileImageProviderInternal,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::XAMLHost::IDispatchableTask,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::XAMLHost::IDispatchableTask,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::XAMLHost::IDispatchableTaskWithContext,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::XAMLHost::IDispatchableTaskWithContext,FtmBase>();
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

			class StaticStorage<DefaultModule<1>,0,int>
			{
				static StaticStorage<DefaultModule<1>,0,int> instance_;
			public:
				~StaticStorage<DefaultModule<1>,0,int>();
			};

			struct WeakReferenceImpl
			{
				virtual long Resolve(_GUID const &,IInspectable * *);
			};

			ComPtr<Details::WeakReferenceImpl> Make<WeakReferenceImpl,IUnknown * &>(IUnknown * &);
			Details::WeakReferenceImpl * CreateWeakReference(IUnknown *);
			bool TerminateMap(Details::ModuleBase *,unsigned short const *,bool);
			long CreateClassFactory<SimpleClassFactory<CredUXController,0> >(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long GetCacheEntry(Details::ModuleBase *,unsigned int *,_GUID const &,Details::CreatorMap const *,IUnknown * *);
			long GetClassObject<1>(Details::ModuleBase *,unsigned short const *,_GUID const &,_GUID const &,void * *);
			long MakeAndInitialize<CCredentialProviderSerialization,ICredProviderCredentialSerialization,_CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION &>(ICredProviderCredentialSerialization * *,_CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION &);
			long MakeAndInitialize<ConsentUXContext,Windows::Internal::UI::Credentials::Controller::IConsentUXContext,_CREDUI_CONTEXT const * &>(Windows::Internal::UI::Credentials::Controller::IConsentUXContext * *,_CREDUI_CONTEXT const * &);
			long MakeAndInitialize<CredUXExtension,Windows::Internal::UI::Credentials::Controller::ICredUXExtension,_CREDUI_CONTEXT const * &,HWND__ * &>(Windows::Internal::UI::Credentials::Controller::ICredUXExtension * *,_CREDUI_CONTEXT const * &,HWND__ * &);
			long MakeAndInitialize<CredUXInstance,CredUXInstance,Windows::Internal::UI::Credentials::Controller::ICredUXParameters * &>(CredUXInstance * *,Windows::Internal::UI::Credentials::Controller::ICredUXParameters * &);
			long MakeAndInitialize<DispatchableCredentialTask,Windows::Internal::UI::XAMLHost::IDispatchableTask,Windows::Internal::UI::Logon::CredProvData::IDispatchEvent * &>(Windows::Internal::UI::XAMLHost::IDispatchableTask * *,Windows::Internal::UI::Logon::CredProvData::IDispatchEvent * &);
			long MakeAndInitialize<EventTargetArray,EventTargetArray,unsigned __int64 &>(Details::EventTargetArray * *,unsigned __int64 &);
			long MakeAndInitialize<UserTileImageProvider,Windows::Internal::UI::Logon::CredProvData::IUserTileImageProvider,HWND__ * &>(Windows::Internal::UI::Logon::CredProvData::IUserTileImageProvider * *,HWND__ * &);
			long MakeAndInitialize<WindowContainer,IInspectable,HWND__ * &>(IInspectable * *,HWND__ * &);
			unsigned long SafeUnknownDecrementReference(long volatile &);
			unsigned long SafeUnknownIncrementReference(long volatile &);
			void RaiseException(long,unsigned long);
		};

		struct ErrorPropagationPolicyTraits<-1>
		{
			static long FireCompletionErrorPropagationPolicyFilter(long,IUnknown *,void *);
			static long FireProgressErrorPropagationPolicyFilter(long,IUnknown *,void *);
		};

		class EventSource<Windows::Foundation::ITypedEventHandler<IInspectable *,IInspectable *>,InvokeModeOptions<-2> >
		{
			long AddInternal(Windows::Foundation::ITypedEventHandler<IInspectable *,IInspectable *> *,void *,EventRegistrationToken *);
			long DoInvoke<<lambda_337f1687659ef8e0cdacf61090607356> >(<lambda_337f1687659ef8e0cdacf61090607356>);
		public:
			EventSource<Windows::Foundation::ITypedEventHandler<IInspectable *,IInspectable *>,InvokeModeOptions<-2> >();
			long Remove(EventRegistrationToken);
			~EventSource<Windows::Foundation::ITypedEventHandler<IInspectable *,IInspectable *>,InvokeModeOptions<-2> >();
		};

		class EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::Credentials::CredUX::CredUXRenderComplete *,IInspectable *>,InvokeModeOptions<-2> >
		{
			long AddInternal(Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::Credentials::CredUX::CredUXRenderComplete *,IInspectable *> *,void *,EventRegistrationToken *);
			long DoInvoke<<lambda_48dc06bddf70052b8e10d9ce6e4007f7> >(<lambda_48dc06bddf70052b8e10d9ce6e4007f7>);
		public:
			long Remove(EventRegistrationToken);
			~EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::Credentials::CredUX::CredUXRenderComplete *,IInspectable *>,InvokeModeOptions<-2> >();
		};

		class EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::Logon::CredProvData::IUserTileImageProvider *,HSTRING__ *>,InvokeModeOptions<-2> >
		{
			long AddInternal(Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::Logon::CredProvData::IUserTileImageProvider *,HSTRING__ *> *,void *,EventRegistrationToken *);
			long DoInvoke<<lambda_fa90f8e3580c5baea19519f4845db6ce> >(<lambda_fa90f8e3580c5baea19519f4845db6ce>);
		public:
			long Remove(EventRegistrationToken);
			~EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::Logon::CredProvData::IUserTileImageProvider *,HSTRING__ *>,InvokeModeOptions<-2> >();
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

		class Implements<RuntimeClassFlags<3>,Windows::Internal::UI::XAMLHost::IViewDefinition,FtmBase>
		{
		protected:
			void FillArrayWithIid(unsigned long *,_GUID *);
		};

		struct InvokeTraits<-2>
		{
			static long InvokeDelegates<<lambda_337f1687659ef8e0cdacf61090607356>,Windows::Foundation::ITypedEventHandler<IInspectable *,IInspectable *> >(<lambda_337f1687659ef8e0cdacf61090607356>,Details::EventTargetArray *,EventSource<Windows::Foundation::ITypedEventHandler<IInspectable *,IInspectable *>,InvokeModeOptions<-2> > *);
			static long InvokeDelegates<<lambda_48dc06bddf70052b8e10d9ce6e4007f7>,Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::Credentials::CredUX::CredUXRenderComplete *,IInspectable *> >(<lambda_48dc06bddf70052b8e10d9ce6e4007f7>,Details::EventTargetArray *,EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::Credentials::CredUX::CredUXRenderComplete *,IInspectable *>,InvokeModeOptions<-2> > *);
			static long InvokeDelegates<<lambda_fa90f8e3580c5baea19519f4845db6ce>,Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::Logon::CredProvData::IUserTileImageProvider *,HSTRING__ *> >(<lambda_fa90f8e3580c5baea19519f4845db6ce>,Details::EventTargetArray *,EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::Logon::CredProvData::IUserTileImageProvider *,HSTRING__ *>,InvokeModeOptions<-2> > *);
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

		struct RuntimeClass<CLogonAsyncOperationBase<Windows::Internal::UI::Credentials::Controller::RequestCredentialsData,Windows::Internal::UI::Credentials::Controller::IRequestCredentialsData,Windows::Internal::UI::Credentials::CredUX::IRequestCredentialComplete> >
		{
			RuntimeClass<CLogonAsyncOperationBase<Windows::Internal::UI::Credentials::Controller::RequestCredentialsData,Windows::Internal::UI::Credentials::Controller::IRequestCredentialsData,Windows::Internal::UI::Credentials::CredUX::IRequestCredentialComplete> >();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>
		{
			RuntimeClass<RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>();
		};

		struct RuntimeClass<RuntimeClassFlags<3>,ViewDefinitionBase,FtmBase>
		{
			RuntimeClass<RuntimeClassFlags<3>,ViewDefinitionBase,FtmBase>();
		};

		struct RuntimeClass<RuntimeClassFlags<3>,Windows::Internal::UI::XAMLHost::IDispatchableTask,FtmBase>
		{
			RuntimeClass<RuntimeClassFlags<3>,Windows::Internal::UI::XAMLHost::IDispatchableTask,FtmBase>();
		};

		struct RuntimeClass<RuntimeClassFlags<3>,Windows::Internal::UI::XAMLHost::IDispatchableTaskWithContext,FtmBase>
		{
			RuntimeClass<RuntimeClassFlags<3>,Windows::Internal::UI::XAMLHost::IDispatchableTaskWithContext,FtmBase>();
		};

		struct SimpleClassFactory<CredUXController,0>
		{
			SimpleClassFactory<CredUXController,0>();
			virtual long CreateInstance(IUnknown *,_GUID const &,void * *);
		};

		namespace Wrappers
		{
			namespace Details
			{
				struct SyncLockExclusive
				{
					~SyncLockExclusive();
				};

			};

			struct HString
			{
				long Set(unsigned short const *,unsigned int);
				long Set<unsigned short const *>(unsigned short const * const &,Details::Dummy);
				~HString();
			};

			class HStringReference
			{
				static unsigned int AddOne(unsigned int);
				void CreateReference(unsigned short const *,unsigned int,unsigned int);
			public:
				HStringReference<unsigned short *>(unsigned short * const &,Details::Dummy);
				HStringReference<unsigned short const *>(unsigned short const * const &,Details::Dummy);
				~HStringReference();
			};

			struct SRWLock
			{
				static Details::SyncLockExclusive LockExclusive(_RTL_SRWLOCK *);
				static Details::SyncLockShared LockShared(_RTL_SRWLOCK *);
			};

		};

		Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics * gCausality;
		_RTL_RUN_ONCE gCausalityInitOnce;
		long AsWeak<IUserTileImageProviderInternal>(IUserTileImageProviderInternal *,WRL::WeakRef *);
	};

};

struct RenderCompletion
{
	RenderCompletion();
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long InitialRenderComplete();
	virtual long Invoke(Windows::Internal::UI::XAMLHost::IXAMLHostDesiredSizeReady *,IInspectable *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long add_WindowUncloaked(Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::Credentials::CredUX::CredUXRenderComplete *,IInspectable *> *,EventRegistrationToken *);
	virtual long remove_WindowUncloaked(EventRegistrationToken);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~RenderCompletion();
};

struct ResourceWrapper
{
	ResourceWrapper();
	virtual long GetFormattedString(HSTRING__ *,HSTRING__ *,HSTRING__ * *);
	virtual long GetResourceString(HSTRING__ *,HSTRING__ * *);
	virtual ~ResourceWrapper();
};

struct RpcOptionsHelper
{
	static long GetRpcOptions(IUnknown *,bool,IRpcOptions * *);
};

struct StopRequestCredentialsAsyncOperation
{
	virtual long OnStart();
	virtual void OnCancel();
	virtual ~StopRequestCredentialsAsyncOperation();
};

struct UACIndicatorControlHost
{
	void Deactivate();
};

class UserTileImageProvider
{
	long _EnsureInitialized();
	unsigned int _GetScaledUserTileSize(int);
	virtual ~UserTileImageProvider();
public:
	UserTileImageProvider();
	long RuntimeClassInitialize(HWND__ *);
	virtual long GetExtraSmallImage(HSTRING__ *,Windows::Internal::UI::Logon::CredProvData::IUserTileImage * *);
	virtual long GetLargeImage(HSTRING__ *,Windows::Internal::UI::Logon::CredProvData::IUserTileImage * *);
	virtual long GetSmallImage(HSTRING__ *,Windows::Internal::UI::Logon::CredProvData::IUserTileImage * *);
	virtual long OnImageChange(HSTRING__ *);
	virtual long add_ImageChanged(Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::Logon::CredProvData::IUserTileImageProvider *,HSTRING__ *> *,EventRegistrationToken *);
	virtual long remove_ImageChanged(EventRegistrationToken);
};

class ViewDefinitionBase
{
	long _EnsureSiteInitialized();
	long _EnsureViewInitialized();
protected:
	virtual long v_GetAtlasSize(Windows::Foundation::Size *);
	virtual long v_GetResourceManager(IInspectable * *);
	virtual long v_GetRootElement(IInspectable *,_GUID const &,void * *);
	virtual long v_GetRootViewModel(IInspectable *,_GUID const &,void * *);
	virtual long v_GetTheme(Windows::UI::Xaml::ApplicationTheme *);
	virtual long v_GetTitleBarInfo(unsigned int,Windows::Internal::UI::XAMLHost::TitleBarInfo *);
	virtual long v_GetViewPosition(unsigned int,Windows::Foundation::Rect,Windows::Foundation::Rect *);
	virtual long v_GetXAMLSite(_GUID const &,void * *);
	virtual long v_OnHighContrastChange();
	virtual long v_TitleBarClose();
	virtual long v_UpdateTitleBarCloseButtonState(Windows::Internal::UI::XAMLHost::CloseButtonState);
public:
	virtual long GetTitleBarInfo(unsigned int,Windows::Internal::UI::XAMLHost::TitleBarInfo *);
	virtual long GetViewPosition(unsigned int,Windows::Foundation::Rect,Windows::Foundation::Rect *);
	virtual long OnHighContrastChange();
	virtual long SetMergedResourceDictionary(IInspectable *);
	virtual long TitleBarClose();
	virtual long UpdateTitleBarCloseButtonState(Windows::Internal::UI::XAMLHost::CloseButtonState);
	virtual long get_ApplicationResources(Windows::Foundation::Collections::IMapView<HSTRING__ *,IInspectable *> * *);
	virtual long get_ApplicationResourcesUri(HSTRING__ * *);
	virtual long get_AtlasSize(Windows::Foundation::Size *);
	virtual long get_LangID(unsigned short *);
	virtual long get_MaxWindowSize(Windows::Foundation::Size *);
	virtual long get_MinWindowSize(Windows::Foundation::Size *);
	virtual long get_ResourceFileName(HSTRING__ * *);
	virtual long get_ResourceManager(IInspectable * *);
	virtual long get_RootUIElement(Windows::UI::Xaml::IUIElement * *);
	virtual long get_RootViewModel(IInspectable * *);
	virtual long get_Theme(Windows::UI::Xaml::ApplicationTheme *);
	virtual long get_ViewConfig(Windows::Internal::UI::XAMLHost::ViewConfigFlags *);
	virtual long get_WindowClassName(HSTRING__ * *);
	virtual long get_WindowStylesEx(unsigned long *);
	virtual long get_WindowTitleUri(HSTRING__ * *);
	virtual long get_WindowZOrderBand(unsigned long *);
	virtual long get_XamlRuntimeSite(Windows::UI::Xaml::Hosting::IXamlRuntimeSite * *);
	virtual long get_XamlRuntimeSites(Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *> * *);
	~ViewDefinitionBase();
};

struct WindowContainer
{
	virtual long GetWindow(HWND__ * *);
	virtual long SetWindow(HWND__ *);
};

namespace Windows
{
	namespace Foundation
	{
		namespace Collections
		{
			namespace Detail
			{
				long _IteratorGetMany<IIterator_impl<UI::Xaml::Hosting::IXamlRuntimeSite *,1>,UI::Xaml::Hosting::IXamlRuntimeSite *>(IIterator_impl<UI::Xaml::Hosting::IXamlRuntimeSite *,1> *,unsigned int,UI::Xaml::Hosting::IXamlRuntimeSite * *,unsigned int *);
				long _VectorGetMany<IVectorView_impl<UI::Xaml::Hosting::IXamlRuntimeSite *,1>,UI::Xaml::Hosting::IXamlRuntimeSite *>(IVectorView_impl<UI::Xaml::Hosting::IXamlRuntimeSite *,1> *,unsigned int,unsigned int,UI::Xaml::Hosting::IXamlRuntimeSite * *,unsigned int *);
				long _VectorGetMany<IVector_impl<UI::Xaml::Hosting::IXamlRuntimeSite *,1>,UI::Xaml::Hosting::IXamlRuntimeSite *>(IVector_impl<UI::Xaml::Hosting::IXamlRuntimeSite *,1> *,unsigned int,unsigned int,UI::Xaml::Hosting::IXamlRuntimeSite * *,unsigned int *);
				long _VectorReplaceAll<IVector_impl<UI::Xaml::Hosting::IXamlRuntimeSite *,1>,UI::Xaml::Hosting::IXamlRuntimeSite *>(IVector_impl<UI::Xaml::Hosting::IXamlRuntimeSite *,1> *,unsigned int,UI::Xaml::Hosting::IXamlRuntimeSite * *);
				void _Cleanup<UI::Xaml::Hosting::IXamlRuntimeSite,unsigned int>(UI::Xaml::Hosting::IXamlRuntimeSite * * const,unsigned int);
			};

			struct IIterable<UI::Xaml::Hosting::IXamlRuntimeSite *>
			{
				IIterable<UI::Xaml::Hosting::IXamlRuntimeSite *>();
			};

			struct IIterable_impl<UI::Xaml::Hosting::IXamlRuntimeSite *>
			{
				IIterable_impl<UI::Xaml::Hosting::IXamlRuntimeSite *>();
			};

			struct IIterator<UI::Xaml::Hosting::IXamlRuntimeSite *>
			{
				IIterator<UI::Xaml::Hosting::IXamlRuntimeSite *>();
			};

			struct IIterator_impl<UI::Xaml::Hosting::IXamlRuntimeSite *,1>
			{
				IIterator_impl<UI::Xaml::Hosting::IXamlRuntimeSite *,1>();
				virtual long GetMany(unsigned int,UI::Xaml::Hosting::IXamlRuntimeSite * *,unsigned int *);
			};

			struct IVector<UI::Xaml::Hosting::IXamlRuntimeSite *>
			{
				IVector<UI::Xaml::Hosting::IXamlRuntimeSite *>();
			};

			struct IVectorView<UI::Xaml::Hosting::IXamlRuntimeSite *>
			{
				IVectorView<UI::Xaml::Hosting::IXamlRuntimeSite *>();
			};

			struct IVectorView_impl<UI::Xaml::Hosting::IXamlRuntimeSite *,1>
			{
				IVectorView_impl<UI::Xaml::Hosting::IXamlRuntimeSite *,1>();
				virtual long GetMany(unsigned int,unsigned int,UI::Xaml::Hosting::IXamlRuntimeSite * *,unsigned int *);
			};

			struct IVector_impl<UI::Xaml::Hosting::IXamlRuntimeSite *,1>
			{
				IVector_impl<UI::Xaml::Hosting::IXamlRuntimeSite *,1>();
				virtual long GetMany(unsigned int,unsigned int,UI::Xaml::Hosting::IXamlRuntimeSite * *,unsigned int *);
				virtual long ReplaceAll(unsigned int,UI::Xaml::Hosting::IXamlRuntimeSite * *);
			};

			namespace Internal
			{
				struct SimpleVectorIterator<UI::Xaml::Hosting::IXamlRuntimeSite *,Vector<UI::Xaml::Hosting::IXamlRuntimeSite *,DefaultEqualityPredicate<UI::Xaml::Hosting::IXamlRuntimeSite *>,DefaultLifetimeTraits<UI::Xaml::Hosting::IXamlRuntimeSite *>,VectorOptions<UI::Xaml::Hosting::IXamlRuntimeSite *,0,1,0> >,DefaultLifetimeTraits<UI::Xaml::Hosting::IXamlRuntimeSite *>,XWinRT::IntVersionTag,1>
				{
					SimpleVectorIterator<UI::Xaml::Hosting::IXamlRuntimeSite *,Vector<UI::Xaml::Hosting::IXamlRuntimeSite *,DefaultEqualityPredicate<UI::Xaml::Hosting::IXamlRuntimeSite *>,DefaultLifetimeTraits<UI::Xaml::Hosting::IXamlRuntimeSite *>,VectorOptions<UI::Xaml::Hosting::IXamlRuntimeSite *,0,1,0> >,DefaultLifetimeTraits<UI::Xaml::Hosting::IXamlRuntimeSite *>,XWinRT::IntVersionTag,1>(Vector<UI::Xaml::Hosting::IXamlRuntimeSite *,DefaultEqualityPredicate<UI::Xaml::Hosting::IXamlRuntimeSite *>,DefaultLifetimeTraits<UI::Xaml::Hosting::IXamlRuntimeSite *>,VectorOptions<UI::Xaml::Hosting::IXamlRuntimeSite *,0,1,0> > *,SimpleVectorIterator<UI::Xaml::Hosting::IXamlRuntimeSite *,Vector<UI::Xaml::Hosting::IXamlRuntimeSite *,DefaultEqualityPredicate<UI::Xaml::Hosting::IXamlRuntimeSite *>,DefaultLifetimeTraits<UI::Xaml::Hosting::IXamlRuntimeSite *>,VectorOptions<UI::Xaml::Hosting::IXamlRuntimeSite *,0,1,0> >,DefaultLifetimeTraits<UI::Xaml::Hosting::IXamlRuntimeSite *>,XWinRT::IntVersionTag,1>::permission);
					static long Make(Vector<UI::Xaml::Hosting::IXamlRuntimeSite *,DefaultEqualityPredicate<UI::Xaml::Hosting::IXamlRuntimeSite *>,DefaultLifetimeTraits<UI::Xaml::Hosting::IXamlRuntimeSite *>,VectorOptions<UI::Xaml::Hosting::IXamlRuntimeSite *,0,1,0> > *,SimpleVectorIterator<UI::Xaml::Hosting::IXamlRuntimeSite *,Vector<UI::Xaml::Hosting::IXamlRuntimeSite *,DefaultEqualityPredicate<UI::Xaml::Hosting::IXamlRuntimeSite *>,DefaultLifetimeTraits<UI::Xaml::Hosting::IXamlRuntimeSite *>,VectorOptions<UI::Xaml::Hosting::IXamlRuntimeSite *,0,1,0> >,DefaultLifetimeTraits<UI::Xaml::Hosting::IXamlRuntimeSite *>,XWinRT::IntVersionTag,1> * *);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetMany(unsigned int,UI::Xaml::Hosting::IXamlRuntimeSite * *,unsigned int *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long MoveNext(unsigned char *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long get_Current(UI::Xaml::Hosting::IXamlRuntimeSite * *);
					virtual long get_HasCurrent(unsigned char *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
					virtual ~SimpleVectorIterator<UI::Xaml::Hosting::IXamlRuntimeSite *,Vector<UI::Xaml::Hosting::IXamlRuntimeSite *,DefaultEqualityPredicate<UI::Xaml::Hosting::IXamlRuntimeSite *>,DefaultLifetimeTraits<UI::Xaml::Hosting::IXamlRuntimeSite *>,VectorOptions<UI::Xaml::Hosting::IXamlRuntimeSite *,0,1,0> >,DefaultLifetimeTraits<UI::Xaml::Hosting::IXamlRuntimeSite *>,XWinRT::IntVersionTag,1>();
				};

				struct SimpleVectorView<UI::Xaml::Hosting::IXamlRuntimeSite *,Vector<UI::Xaml::Hosting::IXamlRuntimeSite *,DefaultEqualityPredicate<UI::Xaml::Hosting::IXamlRuntimeSite *>,DefaultLifetimeTraits<UI::Xaml::Hosting::IXamlRuntimeSite *>,VectorOptions<UI::Xaml::Hosting::IXamlRuntimeSite *,0,1,0> >,DefaultLifetimeTraits<UI::Xaml::Hosting::IXamlRuntimeSite *>,XWinRT::IntVersionTag,1>
				{
					SimpleVectorView<UI::Xaml::Hosting::IXamlRuntimeSite *,Vector<UI::Xaml::Hosting::IXamlRuntimeSite *,DefaultEqualityPredicate<UI::Xaml::Hosting::IXamlRuntimeSite *>,DefaultLifetimeTraits<UI::Xaml::Hosting::IXamlRuntimeSite *>,VectorOptions<UI::Xaml::Hosting::IXamlRuntimeSite *,0,1,0> >,DefaultLifetimeTraits<UI::Xaml::Hosting::IXamlRuntimeSite *>,XWinRT::IntVersionTag,1>(Vector<UI::Xaml::Hosting::IXamlRuntimeSite *,DefaultEqualityPredicate<UI::Xaml::Hosting::IXamlRuntimeSite *>,DefaultLifetimeTraits<UI::Xaml::Hosting::IXamlRuntimeSite *>,VectorOptions<UI::Xaml::Hosting::IXamlRuntimeSite *,0,1,0> > *,SimpleVectorView<UI::Xaml::Hosting::IXamlRuntimeSite *,Vector<UI::Xaml::Hosting::IXamlRuntimeSite *,DefaultEqualityPredicate<UI::Xaml::Hosting::IXamlRuntimeSite *>,DefaultLifetimeTraits<UI::Xaml::Hosting::IXamlRuntimeSite *>,VectorOptions<UI::Xaml::Hosting::IXamlRuntimeSite *,0,1,0> >,DefaultLifetimeTraits<UI::Xaml::Hosting::IXamlRuntimeSite *>,XWinRT::IntVersionTag,1>::permission);
					virtual long First(IIterator<UI::Xaml::Hosting::IXamlRuntimeSite *> * *);
					virtual long GetAt(unsigned int,UI::Xaml::Hosting::IXamlRuntimeSite * *);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetMany(unsigned int,unsigned int,UI::Xaml::Hosting::IXamlRuntimeSite * *,unsigned int *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long IndexOf(UI::Xaml::Hosting::IXamlRuntimeSite *,unsigned int *,unsigned char *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long get_Size(unsigned int *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
					virtual ~SimpleVectorView<UI::Xaml::Hosting::IXamlRuntimeSite *,Vector<UI::Xaml::Hosting::IXamlRuntimeSite *,DefaultEqualityPredicate<UI::Xaml::Hosting::IXamlRuntimeSite *>,DefaultLifetimeTraits<UI::Xaml::Hosting::IXamlRuntimeSite *>,VectorOptions<UI::Xaml::Hosting::IXamlRuntimeSite *,0,1,0> >,DefaultLifetimeTraits<UI::Xaml::Hosting::IXamlRuntimeSite *>,XWinRT::IntVersionTag,1>();
				};

				class Vector<UI::Xaml::Hosting::IXamlRuntimeSite *,DefaultEqualityPredicate<UI::Xaml::Hosting::IXamlRuntimeSite *>,DefaultLifetimeTraits<UI::Xaml::Hosting::IXamlRuntimeSite *>,VectorOptions<UI::Xaml::Hosting::IXamlRuntimeSite *,0,1,0> >
				{
					long IndexOfInternal(XWinRT::detail::GitStorageType<UI::Xaml::Hosting::IXamlRuntimeSite> *,unsigned int,UI::Xaml::Hosting::IXamlRuntimeSite *,unsigned int *,unsigned char *);
					long InsertAtInternal(unsigned int,UI::Xaml::Hosting::IXamlRuntimeSite *,bool);
					long RemoveAtInternal(unsigned int,bool);
					long ResizeStorage(unsigned int);
					static void _Free(XWinRT::detail::GitStorageType<UI::Xaml::Hosting::IXamlRuntimeSite> *,unsigned int);
					void _EraseAll(XWinRT::detail::GitStorageType<UI::Xaml::Hosting::IXamlRuntimeSite> * *,unsigned int *);
				protected:
					virtual ~Vector<UI::Xaml::Hosting::IXamlRuntimeSite *,DefaultEqualityPredicate<UI::Xaml::Hosting::IXamlRuntimeSite *>,DefaultLifetimeTraits<UI::Xaml::Hosting::IXamlRuntimeSite *>,VectorOptions<UI::Xaml::Hosting::IXamlRuntimeSite *,0,1,0> >();
				public:
					Vector<UI::Xaml::Hosting::IXamlRuntimeSite *,DefaultEqualityPredicate<UI::Xaml::Hosting::IXamlRuntimeSite *>,DefaultLifetimeTraits<UI::Xaml::Hosting::IXamlRuntimeSite *>,VectorOptions<UI::Xaml::Hosting::IXamlRuntimeSite *,0,1,0> >(DefaultEqualityPredicate<UI::Xaml::Hosting::IXamlRuntimeSite *> const &,Vector<UI::Xaml::Hosting::IXamlRuntimeSite *,DefaultEqualityPredicate<UI::Xaml::Hosting::IXamlRuntimeSite *>,DefaultLifetimeTraits<UI::Xaml::Hosting::IXamlRuntimeSite *>,VectorOptions<UI::Xaml::Hosting::IXamlRuntimeSite *,0,1,0> >::permission);
					virtual long Append(UI::Xaml::Hosting::IXamlRuntimeSite *);
					virtual long Clear();
					virtual long First(IIterator<UI::Xaml::Hosting::IXamlRuntimeSite *> * *);
					virtual long GetAt(unsigned int,UI::Xaml::Hosting::IXamlRuntimeSite * *);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetMany(unsigned int,unsigned int,UI::Xaml::Hosting::IXamlRuntimeSite * *,unsigned int *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long GetView(IVectorView<UI::Xaml::Hosting::IXamlRuntimeSite *> * *);
					virtual long IndexOf(UI::Xaml::Hosting::IXamlRuntimeSite *,unsigned int *,unsigned char *);
					virtual long InsertAt(unsigned int,UI::Xaml::Hosting::IXamlRuntimeSite *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long RemoveAt(unsigned int);
					virtual long RemoveAtEnd();
					virtual long ReplaceAll(unsigned int,UI::Xaml::Hosting::IXamlRuntimeSite * *);
					virtual long SetAt(unsigned int,UI::Xaml::Hosting::IXamlRuntimeSite *);
					virtual long get_Size(unsigned int *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				struct VectorOptions<UI::Xaml::Hosting::IXamlRuntimeSite *,0,1,0>
				{
					static long RaiseEvent(...);
				};

			};

		};

		struct IAsyncOperation<Internal::UI::Credentials::Controller::RequestCredentialsData *>
		{
			IAsyncOperation<Internal::UI::Credentials::Controller::RequestCredentialsData *>();
		};

		struct IAsyncOperation_impl<Internal::AggregateType<Internal::UI::Credentials::Controller::RequestCredentialsData *,Internal::UI::Credentials::Controller::IRequestCredentialsData *> >
		{
			IAsyncOperation_impl<Internal::AggregateType<Internal::UI::Credentials::Controller::RequestCredentialsData *,Internal::UI::Credentials::Controller::IRequestCredentialsData *> >();
		};

		long ActivateInstance<Internal::Shell::PlatformExtensions::ICredUX>(HSTRING__ *,Internal::Shell::PlatformExtensions::ICredUX * *);
		long ActivateInstance<Internal::UI::Credentials::CredUX::ICredUXViewProvider>(HSTRING__ *,Internal::UI::Credentials::CredUX::ICredUXViewProvider * *);
		long ActivateInstance<Internal::UI::XAMLHost::IXAMLHostWindow>(HSTRING__ *,Internal::UI::XAMLHost::IXAMLHostWindow * *);
		long ActivateInstance<Microsoft::WRL::ComPtr<Internal::Shell::PlatformExtensions::ICredUX> >(HSTRING__ *,Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Internal::Shell::PlatformExtensions::ICredUX> >);
		long GetActivationFactory<Diagnostics::IAsyncCausalityTracerStatics>(HSTRING__ *,Foundation::Diagnostics::IAsyncCausalityTracerStatics * *);
	};

	namespace Internal
	{
		struct AsyncCallbackBase<CMarshaledInterfaceResult<UI::Credentials::Controller::IRequestCredentialsData> >
		{
			virtual ~AsyncCallbackBase<CMarshaledInterfaceResult<UI::Credentials::Controller::IRequestCredentialsData> >();
		};

		struct AsyncDeferral<CMarshaledInterfaceResult<UI::Credentials::Controller::IRequestCredentialsData> >
		{
			~AsyncDeferral<CMarshaledInterfaceResult<UI::Credentials::Controller::IRequestCredentialsData> >();
		};

		struct CMarshaledInterfaceResult<UI::Credentials::Controller::IRequestCredentialsData>
		{
			long Get(UI::Credentials::Controller::IRequestCredentialsData * *);
			void Close();
			~CMarshaledInterfaceResult<UI::Credentials::Controller::IRequestCredentialsData>();
		};

		struct ComTaskPool
		{
			struct CTaskWrapper<<lambda_c2fd7731c5ae0d37e65ea73be67c0f1b> >
			{
				virtual void Run();
				virtual ~CTaskWrapper<<lambda_c2fd7731c5ae0d37e65ea73be67c0f1b> >();
			};

			static ComTaskPool::SThreadData tls_threadData;
		};

		struct ComTaskPoolHandler
		{
			static long _FireCompletion(IAsyncFireCompletion *);
		};

		namespace Details
		{
			struct Git
			{
				long Acquire();
			};

			Details::Git _git;
		};

		struct GitPtrSupportsAgile<Foundation::IAsyncActionCompletedHandler>
		{
			long CopyLocal(_GUID const &,void * *);
		};

		struct GitPtrSupportsAgile<Foundation::IAsyncOperationCompletedHandler<UI::Credentials::Controller::RequestCredentialsData *> >
		{
			long CopyLocal(_GUID const &,void * *);
			long CopyLocal<Foundation::IAsyncOperationCompletedHandler<UI::Credentials::Controller::RequestCredentialsData *> >(Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Foundation::IAsyncOperationCompletedHandler<UI::Credentials::Controller::RequestCredentialsData *> > >);
			long Initialize<Foundation::IAsyncOperationCompletedHandler<UI::Credentials::Controller::RequestCredentialsData *> >(Foundation::IAsyncOperationCompletedHandler<UI::Credentials::Controller::RequestCredentialsData *> *);
			long Revoke();
		};

		struct GitPtrSupportsAgile<INilDelegate>
		{
			long CopyLocal(_GUID const &,void * *);
		};

		class NativeString<CoTaskMemPolicy<unsigned short> >
		{
			long _EnsureCapacity(unsigned __int64);
			long _Initialize(unsigned short const *,unsigned __int64);
			long _InitializeFromRegistry(HKEY__ *,unsigned short const *,bool);
			long _InitializeHelper<<lambda_255728157cf8e92998065ff06efe801f> >(unsigned short const *,char *,<lambda_255728157cf8e92998065ff06efe801f> const &);
			long _InitializeHelper<<lambda_fe718337787c493ce2d833414db25eba> >(unsigned short const *,char *,<lambda_fe718337787c493ce2d833414db25eba> const &);
			void _EnsureCount();
			void _Free();
		public:
			long InitializeFormat(unsigned short const *,...);
			long InitializeMessage(unsigned short const *,...);
			long InitializeResMessage(HINSTANCE__ *,int,...);
			~NativeString<CoTaskMemPolicy<unsigned short> >();
		};

		struct ResourceString
		{
			static bool FindAndSize(HINSTANCE__ *,unsigned int,unsigned short,unsigned short const * *,unsigned short *);
		};

		_RTL_RUN_ONCE s_bIsEnvironmentCheckDone;
	};

};

namespace XWinRT
{
	struct AutoValue<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *> >
	{
		~AutoValue<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *> >();
	};

	struct AutoValue<detail::GitStorageType<Windows::UI::Xaml::Hosting::IXamlRuntimeSite>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *> >
	{
		AutoValue<detail::GitStorageType<Windows::UI::Xaml::Hosting::IXamlRuntimeSite>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *> ><Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>(Windows::UI::Xaml::Hosting::IXamlRuntimeSite * const &,long *);
		~AutoValue<detail::GitStorageType<Windows::UI::Xaml::Hosting::IXamlRuntimeSite>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *> >();
	};

	struct InterfaceEquals
	{
		long operator()<Windows::UI::Xaml::Hosting::IXamlRuntimeSite>(Windows::UI::Xaml::Hosting::IXamlRuntimeSite *,Windows::UI::Xaml::Hosting::IXamlRuntimeSite *,bool *);
	};

	struct InterfaceLifetimeTraits
	{
		static long Construct<Windows::UI::Xaml::Hosting::IXamlRuntimeSite>(detail::GitStorageType<Windows::UI::Xaml::Hosting::IXamlRuntimeSite> *,detail::GitStorageType<Windows::UI::Xaml::Hosting::IXamlRuntimeSite>);
		static void Destroy<Windows::UI::Xaml::Hosting::IXamlRuntimeSite>(Windows::UI::Xaml::Hosting::IXamlRuntimeSite * *);
	};

	struct SerializingLockPolicy
	{
		static detail::LockHolder<ComLock,detail::AcquireRead> Read(ComLock &,long *);
		static detail::LockHolder<ComLock,detail::AcquireWrite> Write(ComLock &,long *);
	};

	namespace detail
	{
		struct AbiReference<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *,GitStorageType<Windows::UI::Xaml::Hosting::IXamlRuntimeSite>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *> >
		{
			~AbiReference<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *,GitStorageType<Windows::UI::Xaml::Hosting::IXamlRuntimeSite>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *> >();
		};

		struct AtomicUpdates
		{
			static long AtomicUpdate<<lambda_e0c5a7d6ffa19d29529311fded0c8501>,<lambda_bbf5da6c9652a4f5276022be9bb02761> >(unsigned int *,<lambda_e0c5a7d6ffa19d29529311fded0c8501> const &,<lambda_bbf5da6c9652a4f5276022be9bb02761> const &);
		};

		struct GitStorageType<Windows::UI::Xaml::Hosting::IXamlRuntimeSite>
		{
			class ReferencedGitCookie
			{
				~ReferencedGitCookie();
			public:
				long Localize(Windows::UI::Xaml::Hosting::IXamlRuntimeSite * *);
				unsigned long Release();
			};

			GitStorageType<Windows::UI::Xaml::Hosting::IXamlRuntimeSite>();
			long Initialize(Windows::UI::Xaml::Hosting::IXamlRuntimeSite *);
		};

		struct InvalidationChecker<Windows::Foundation::Collections::Internal::Vector<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *,0,1,0> >,IntVersionTag>
		{
			long Do<<lambda_3670e5fd664440402d67687b68d062bd>,<lambda_c0556a67f8d80694a0b8e3c5717246ae> >(Windows::Foundation::Collections::Internal::Vector<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *,0,1,0> > *,<lambda_3670e5fd664440402d67687b68d062bd> const &,<lambda_c0556a67f8d80694a0b8e3c5717246ae> const &);
			long Do<<lambda_57a9c870cb5787c445dd52e46e135f4b>,<lambda_acd30ea3618387a5dda5f94c653ae4eb> >(Windows::Foundation::Collections::Internal::Vector<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *,0,1,0> > *,<lambda_57a9c870cb5787c445dd52e46e135f4b> const &,<lambda_acd30ea3618387a5dda5f94c653ae4eb> const &);
			long Do<<lambda_6627b275dadd6a08cd95721707a459e8>,<lambda_bbf5da6c9652a4f5276022be9bb02761> >(Windows::Foundation::Collections::Internal::Vector<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *,0,1,0> > *,<lambda_6627b275dadd6a08cd95721707a459e8> const &,<lambda_bbf5da6c9652a4f5276022be9bb02761> const &);
			long Do<<lambda_6d55e714b3e01c288883e543afab9c9b>,<lambda_9206b7d5efa39fb289d17faa3b2b2682> >(Windows::Foundation::Collections::Internal::Vector<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *,0,1,0> > *,<lambda_6d55e714b3e01c288883e543afab9c9b> const &,<lambda_9206b7d5efa39fb289d17faa3b2b2682> const &);
			long Do<<lambda_84a004458d5725f72497590279571ec1>,<lambda_bcf4ae199144e095bc5ec8fe19aa2472> >(Windows::Foundation::Collections::Internal::Vector<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *,0,1,0> > *,<lambda_84a004458d5725f72497590279571ec1> const &,<lambda_bcf4ae199144e095bc5ec8fe19aa2472> const &);
			long Do<<lambda_84a226219995d5a003e96d2637b7ba32>,<lambda_fb47ea5ecd1138e0f4ceacb21dc71e32> >(Windows::Foundation::Collections::Internal::Vector<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *,0,1,0> > *,<lambda_84a226219995d5a003e96d2637b7ba32> const &,<lambda_fb47ea5ecd1138e0f4ceacb21dc71e32> const &);
			long Do<<lambda_bb534ed23c509f1a569c6fbe0cab8100>,<lambda_a687820f5a295f0b8866a8ea2d642c46> >(Windows::Foundation::Collections::Internal::Vector<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *,0,1,0> > *,<lambda_bb534ed23c509f1a569c6fbe0cab8100> const &,<lambda_a687820f5a295f0b8866a8ea2d642c46> const &);
			long Do<<lambda_c2b5c2222c6e545e2b4a9deb0672dccf>,<lambda_62fd96da56645c5ddce3bd8bd6330315> >(Windows::Foundation::Collections::Internal::Vector<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::UI::Xaml::Hosting::IXamlRuntimeSite *,0,1,0> > *,<lambda_c2b5c2222c6e545e2b4a9deb0672dccf> const &,<lambda_62fd96da56645c5ddce3bd8bd6330315> const &);
		};

		struct LockHolder<ComLock,AcquireRead>
		{
			~LockHolder<ComLock,AcquireRead>();
		};

		struct LockHolder<ComLock,AcquireWrite>
		{
			~LockHolder<ComLock,AcquireWrite>();
		};

		struct ReentrancyGuard<0>
		{
			ReentrancyGuard<0>(...);
		};

	};

};

class _TlgActivityBase<wil::ActivityBase<CredUXControllerLogger,0,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CredUXControllerLogger,_TlgReflectorTag_Param0IsProviderType>,0,5>
{
protected:
	~_TlgActivityBase<wil::ActivityBase<CredUXControllerLogger,0,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CredUXControllerLogger,_TlgReflectorTag_Param0IsProviderType>,0,5>();
};

class _TlgActivityBase<wil::ActivityBase<CredUXControllerLogger,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CredUXControllerLogger,_TlgReflectorTag_Param0IsProviderType>,70368744177664,5>
{
protected:
	~_TlgActivityBase<wil::ActivityBase<CredUXControllerLogger,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CredUXControllerLogger,_TlgReflectorTag_Param0IsProviderType>,70368744177664,5>();
};

class _TlgActivityBase<wil::ActivityBase<CredUXLogging,1,35184372088832,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CredUXLogging,_TlgReflectorTag_Param0IsProviderType>,35184372088832,5>
{
protected:
	~_TlgActivityBase<wil::ActivityBase<CredUXLogging,1,35184372088832,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CredUXLogging,_TlgReflectorTag_Param0IsProviderType>,35184372088832,5>();
};

namespace std
{
	struct allocator<unsigned short>
	{
		unsigned short * allocate(unsigned __int64);
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
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & _Reallocate_grow_by<<lambda_b70241e9b5ebaad244db3e52d52cab17>,unsigned __int64,unsigned short>(unsigned __int64,<lambda_b70241e9b5ebaad244db3e52d52cab17>,unsigned __int64,unsigned short);
		unsigned __int64 _Calculate_growth(unsigned __int64);
	public:
		void resize(unsigned __int64,unsigned short);
		~basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >();
	};

	struct exception
	{
		exception(exception const &);
		virtual char const * what();
	};

	struct invalid_argument
	{
		invalid_argument(invalid_argument const &);
		virtual ~invalid_argument();
	};

	struct logic_error
	{
		logic_error(logic_error const &);
	};

	nothrow_t const std::nothrow;
	void _Throw_bad_array_new_length();
	void _Xlen_string();
};

namespace wil
{
	class ActivityBase<CredUXControllerLogger,0,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>
	{
		struct ActivityData<CredUXControllerLogger,_TlgReflectorTag_Param0IsProviderType>
		{
			bool SetStopResult(long,long *);
			~ActivityData<CredUXControllerLogger,_TlgReflectorTag_Param0IsProviderType>();
		};

	protected:
		void Destroy();
	public:
		ActivityBase<CredUXControllerLogger,0,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>(char const *,bool);
		_GUID const * zInternalRelatedId();
		virtual bool NotifyFailure(FailureInfo const &);
		void IgnoreCurrentThread();
		void Stop(long);
		void zInternalStart();
		void zInternalStop();
		~ActivityBase<CredUXControllerLogger,0,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>();
	};

	class ActivityBase<CredUXControllerLogger,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>
	{
		struct ActivityData<CredUXControllerLogger,_TlgReflectorTag_Param0IsProviderType>
		{
			bool SetStopResult(long,long *);
			~ActivityData<CredUXControllerLogger,_TlgReflectorTag_Param0IsProviderType>();
		};

	protected:
		void Destroy();
		void EnsureWatchingCurrentThread();
	public:
		ActivityBase<CredUXControllerLogger,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(char const *,bool);
		_GUID const * zInternalRelatedId();
		virtual bool NotifyFailure(FailureInfo const &);
		void IgnoreCurrentThread();
		void Stop(long);
		void zInternalStart();
		void zInternalStop();
		~ActivityBase<CredUXControllerLogger,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>();
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
		void InternalInitialize();
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

		class FeatureImpl<__WilFeatureTraits_Feature_CUFSTest>
		{
			wil_details_FeatureStateCache GetCachedFeatureEnabledState();
			wil_details_FeatureStateCache GetCurrentFeatureEnabledState(int *);
		public:
			void ReportUsage(bool,ReportingKind,unsigned __int64);
		};

		class FeatureImpl<__WilFeatureTraits_Feature_CUICOORD>
		{
			wil_details_FeatureStateCache GetCachedFeatureEnabledState();
			wil_details_FeatureStateCache GetCurrentFeatureEnabledState(int *);
		public:
			void ReportUsage(bool,ReportingKind,unsigned __int64);
		};

		class FeatureImpl<__WilFeatureTraits_Feature_CUUACSTest>
		{
			wil_details_FeatureStateCache GetCachedFeatureEnabledState();
			wil_details_FeatureStateCache GetCurrentFeatureEnabledState(int *);
		public:
			void ReportUsage(bool,ReportingKind,unsigned __int64);
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

		class FeatureImpl<__WilFeatureTraits_Feature_Servicing_CredUIReorderCancelOperations_25974254>
		{
			wil_details_FeatureStateCache GetCachedFeatureEnabledState();
			wil_details_FeatureStateCache GetCurrentFeatureEnabledState(int *);
		public:
			void ReportUsage(bool,ReportingKind,unsigned __int64);
		};

		class FeatureImpl<__WilFeatureTraits_Feature_VTest>
		{
			wil_details_FeatureStateCache GetCachedFeatureEnabledState();
			wil_details_FeatureStateCache GetCurrentFeatureEnabledState(int *);
		};

		class FeatureImpl<__WilFeatureTraits_Feature_XHSWUI>
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
			long Log_Hr(void *,unsigned int,char const *,long);
			long Return_GetLastError(void *,unsigned int,char const *);
			long Return_NtStatus(void *,unsigned int,char const *,long);
			long Return_Win32(void *,unsigned int,char const *,unsigned long);
			void FailFast_Unexpected(void *,unsigned int,char const *);
			void Return_Hr(void *,unsigned int,char const *,long);
			void _FailFastImmediate_Unexpected();
			void _FailFast_GetLastError(void *,unsigned int,char const *);
			void _FailFast_Unexpected(void *,unsigned int,char const *);
			void _Log_Hr(void *,unsigned int,char const *,long);
		};

		class shared_buffer
		{
			void assign(long *,unsigned __int64);
		public:
			bool create(void const *,unsigned __int64);
			void reset();
		};

		struct shared_object<ActivityBase<CredUXControllerLogger,0,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CredUXControllerLogger,_TlgReflectorTag_Param0IsProviderType> >
		{
			void reset();
		};

		struct shared_object<ActivityBase<CredUXControllerLogger,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CredUXControllerLogger,_TlgReflectorTag_Param0IsProviderType> >
		{
			void reset();
		};

		struct shared_object<ActivityBase<CredUXLogging,1,35184372088832,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CredUXLogging,_TlgReflectorTag_Param0IsProviderType> >
		{
			void reset();
		};

		struct static_lazy<CredUXControllerLogger>
		{
			struct Completer
			{
				~Completer();
			};

			CredUXControllerLogger * get(void (*)());
		};

		namespace static_lazy<CredUXControllerTelemetry>
		{
			struct Completer
			{
				~Completer();
			};

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

		struct wnf_subscription_state<WNF_UMGR_USER_TILE_CHANGED_DATA>
		{
			virtual ~wnf_subscription_state<WNF_UMGR_USER_TILE_CHANGED_DATA>();
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
		long ReportFailure_NtStatus<1>(void *,unsigned int,char const *,char const *,char const *,void *,long);
		long ReportFailure_Win32<1>(void *,unsigned int,char const *,char const *,char const *,void *,unsigned long);
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
		void delete_wnf_subscription_state(details::wnf_subscription_state_base *);
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

	WilFailureReportFlags g_moduleFailureReportFlags;
	bool (* ?? g_pfnIsDebuggerPresent)();
	bool (* ?? g_pfnWilFailFast)(wil::FailureInfo const &);
	bool ProcessShutdownInProgress();
	bool g_fBreakOnFailure;
	bool g_fIsDebuggerPresent;
	long GetFailureLogString(unsigned short *,unsigned __int64,wil::FailureInfo const &);
};

namespace winrt
{
	namespace Windows
	{
		namespace Foundation
		{
			class IUnknown
			{
				void unconditional_release_ref();
			};

			struct TypedEventHandler<WindowsUdk::Security::Credentials::UI::CredUICoordinator,IInspectable>
			{
				~TypedEventHandler<WindowsUdk::Security::Credentials::UI::CredUICoordinator,IInspectable>();
			};

		};

	};

	namespace WindowsUdk
	{
		namespace Security
		{
			namespace Credentials
			{
				namespace UI
				{
					struct CredUICoordinator
					{
						~CredUICoordinator();
					};

					struct ICredUICoordinator
					{
						~ICredUICoordinator();
					};

					struct ICredUICoordinatorStatics
					{
						~ICredUICoordinatorStatics();
					};

				};

			};

		};

	};

	class com_ptr<impl::IAgileObject>
	{
		void unconditional_release_ref();
	};

	class com_ptr<impl::IErrorInfo>
	{
		void unconditional_release_ref();
	public:
		impl::IErrorInfo * * put();
	};

	class com_ptr<impl::ILanguageExceptionErrorInfo2>
	{
		void unconditional_release_ref();
	};

	class com_ptr<impl::IMarshal>
	{
		void unconditional_release_ref();
	};

	class com_ptr<impl::IRestrictedErrorInfo>
	{
		void unconditional_release_ref();
	};

	class com_ptr<impl::IWeakReference>
	{
		void unconditional_release_ref();
	public:
		~com_ptr<impl::IWeakReference>();
	};

	class com_ptr<impl::IWeakReferenceSource>
	{
		void unconditional_release_ref();
	public:
		~com_ptr<impl::IWeakReferenceSource>();
	};

	class com_ptr<impl::abi<Windows::Foundation::IActivationFactory,void>::type>
	{
		void unconditional_release_ref();
	public:
		impl::abi<Windows::Foundation::IActivationFactory,void>::type * * put();
	};

	class com_ptr<impl::abi<Windows::Foundation::IUnknown,void>::type>
	{
		void unconditional_release_ref();
	public:
		impl::abi<Windows::Foundation::IUnknown,void>::type * * put();
	};

	struct handle_type<impl::bstr_traits>
	{
		unsigned short * * put();
		void close();
	};

	struct handle_type<impl::heap_traits>
	{
		unsigned short * * put();
		void close();
	};

	struct handle_type<impl::hstring_traits>
	{
		impl::hstring_header * * put();
		void close();
	};

	struct hresult_access_denied
	{
		hresult_access_denied(hresult_access_denied const &);
		~hresult_access_denied();
	};

	struct hresult_canceled
	{
		hresult_canceled(hresult_canceled const &);
		~hresult_canceled();
	};

	struct hresult_changed_state
	{
		hresult_changed_state(hresult_changed_state const &);
		~hresult_changed_state();
	};

	struct hresult_class_not_available
	{
		hresult_class_not_available(hresult_class_not_available const &);
		~hresult_class_not_available();
	};

	struct hresult_class_not_registered
	{
		hresult_class_not_registered(hresult_class_not_registered const &);
		~hresult_class_not_registered();
	};

	class hresult_error
	{
		static int fallback_RoOriginateLanguageException(int,void *,void *);
		void originate(hresult,void *);
	public:
		hresult to_abi();
		hresult_error(hresult,param::hstring const &);
		hresult_error(hresult,take_ownership_from_abi_t);
		hresult_error(hresult_error const &);
		~hresult_error();
	};

	struct hresult_illegal_delegate_assignment
	{
		hresult_illegal_delegate_assignment(hresult_illegal_delegate_assignment const &);
		~hresult_illegal_delegate_assignment();
	};

	struct hresult_illegal_method_call
	{
		hresult_illegal_method_call(hresult_illegal_method_call const &);
		~hresult_illegal_method_call();
	};

	struct hresult_illegal_state_change
	{
		hresult_illegal_state_change(hresult_illegal_state_change const &);
		~hresult_illegal_state_change();
	};

	struct hresult_invalid_argument
	{
		hresult_invalid_argument(hresult_invalid_argument const &);
		~hresult_invalid_argument();
	};

	struct hresult_no_interface
	{
		hresult_no_interface(hresult_no_interface const &);
		~hresult_no_interface();
	};

	struct hresult_not_implemented
	{
		hresult_not_implemented(hresult_not_implemented const &);
		~hresult_not_implemented();
	};

	struct hresult_out_of_bounds
	{
		hresult_out_of_bounds(hresult_out_of_bounds const &);
		~hresult_out_of_bounds();
	};

	struct hresult_wrong_thread
	{
		hresult_wrong_thread(hresult_wrong_thread const &);
		~hresult_wrong_thread();
	};

	namespace impl
	{
		struct atomic_ref_count
		{
			unsigned int operator--();
		};

		struct consume_WindowsUdk_Security_Credentials_UI_ICredUICoordinator<WindowsUdk::Security::Credentials::UI::ICredUICoordinator>
		{
			Placement();
		};

		struct consume_WindowsUdk_Security_Credentials_UI_ICredUICoordinatorStatics<WindowsUdk::Security::Credentials::UI::ICredUICoordinatorStatics>
		{
			GetForWindow(unsigned __int64);
		};

		struct error_info_fallback
		{
			error_info_fallback(int,void *);
			virtual int GetDescription(unsigned short * *);
			virtual int GetErrorDetails(unsigned short * *,int *,unsigned short * *,unsigned short * *);
			virtual int GetGUID(guid *);
			virtual int GetHelpContext(unsigned int *);
			virtual int GetHelpFile(unsigned short * *);
			virtual int GetReference(unsigned short * *);
			virtual int GetSource(unsigned short * *);
			virtual int QueryInterface(guid const &,void * *);
			virtual unsigned int AddRef();
			virtual unsigned int Release();
			~error_info_fallback();
		};

		struct factory_cache_entry<WindowsUdk::Security::Credentials::UI::CredUICoordinator,WindowsUdk::Security::Credentials::UI::ICredUICoordinatorStatics>
		{
			UNKNOWN call<<lambda_eb2b5f7d56207cc59484d1c84bc18b68> &>(<lambda_eb2b5f7d56207cc59484d1c84bc18b68> &);
		};

		struct factory_count_guard
		{
			~factory_count_guard();
		};

		factory_cache_entry<WindowsUdk::Security::Credentials::UI::CredUICoordinator,WindowsUdk::Security::Credentials::UI::ICredUICoordinatorStatics>::winrt::factory_cache_entry<WindowsUdk::Security::Credentials::UI::CredUICoordinator,WindowsUdk::Security::Credentials::UI::ICredUICoordinatorStatics> factory_cache_entry_v<WindowsUdk::Security::Credentials::UI::CredUICoordinator,WindowsUdk::Security::Credentials::UI::ICredUICoordinatorStatics>;
		guid::guid const guid_v<IAgileObject>;
		guid::guid const guid_v<IErrorInfo>;
		guid::guid const guid_v<ILanguageExceptionErrorInfo2>;
		guid::guid const guid_v<IMarshal>;
		guid::guid const guid_v<IRestrictedErrorInfo>;
		guid::guid const guid_v<IWeakReferenceSource>;
		guid::guid const guid_v<Windows::Foundation::IUnknown>;
		guid::guid const guid_v<Windows::Foundation::TypedEventHandler<WindowsUdk::Security::Credentials::UI::CredUICoordinator,Windows::Foundation::IInspectable> >;
		guid::guid const guid_v<WindowsUdk::Security::Credentials::UI::ICredUICoordinator>;
		guid::guid const guid_v<WindowsUdk::Security::Credentials::UI::ICredUICoordinatorStatics>;
		hresult const error_access_denied;
		hresult const error_canceled;
		hresult const error_changed_state;
		hresult const error_class_not_available;
		hresult const error_class_not_registered;
		hresult const error_fail;
		hresult const error_illegal_delegate_assignment;
		hresult const error_illegal_method_call;
		hresult const error_illegal_state_change;
		hresult const error_invalid_argument;
		hresult const error_no_interface;
		hresult const error_not_implemented;
		hresult const error_out_of_bounds;
		hresult const error_wrong_thread;
		hresult get_runtime_activation_factory_impl<0>(param::hstring const &,guid const &,void * *);
		hstring trim_hresult_message(unsigned short const * const,unsigned int);
		impl::hstring_header * create_hstring_on_heap(unsigned short const *,unsigned int);
		impl::shared_hstring_header * precreate_hstring_on_heap(unsigned int);
		int fallback_RoGetActivationFactory(void *,guid const &,void * *);
		int make_marshaler(impl::abi<Windows::Foundation::IUnknown,void>::type *,void * *);
	};

	class weak_ref<WindowsUdk::Security::Credentials::UI::ICredUICoordinator>
	{
		void from_com_ref<WindowsUdk::Security::Credentials::UI::ICredUICoordinator const &>(WindowsUdk::Security::Credentials::UI::ICredUICoordinator const &);
	public:
		get();
		weak_ref<WindowsUdk::Security::Credentials::UI::ICredUICoordinator><WindowsUdk::Security::Credentials::UI::ICredUICoordinator const &,void>(WindowsUdk::Security::Credentials::UI::ICredUICoordinator const &);
	};

	void throw_hresult(winrt::hresult);
	winrt::WindowsUdk::Security::Credentials::UI::ICredUICoordinatorStatics get_activation_factory<WindowsUdk::Security::Credentials::UI::ICredUICoordinatorStatics>(winrt::param::hstring const &);
	winrt::hresult to_hresult();
	winrt::hstring to_hstring<char const *,0>(char const * const &);
};

namespace wistd
{
	struct __compressed_pair<Windows::Internal::AsyncDeferral<Windows::Internal::CMarshaledInterfaceResult<Windows::Internal::UI::Credentials::Controller::IRequestCredentialsData> > *,default_delete<Windows::Internal::AsyncDeferral<Windows::Internal::CMarshaledInterfaceResult<Windows::Internal::UI::Credentials::Controller::IRequestCredentialsData> > > >
	{
		void swap(__compressed_pair<Windows::Internal::AsyncDeferral<Windows::Internal::CMarshaledInterfaceResult<Windows::Internal::UI::Credentials::Controller::IRequestCredentialsData> > *,default_delete<Windows::Internal::AsyncDeferral<Windows::Internal::CMarshaledInterfaceResult<Windows::Internal::UI::Credentials::Controller::IRequestCredentialsData> > > > &);
	};

	namespace __function
	{
		struct __func<<lambda_8db0ce862824541f40dfb767113f1e28>,bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>
		{
			virtual void __clone(__base<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)> *);
			virtual void __move(__base<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)> *);
			virtual void destroy();
		};

		struct __func<<lambda_b01047f34762df22571ad95a3118eb4f>,void (WNF_UMGR_USER_TILE_CHANGED_DATA const &)>
		{
			virtual void __clone(__base<void (WNF_UMGR_USER_TILE_CHANGED_DATA const &)> *);
			virtual void __move(__base<void (WNF_UMGR_USER_TILE_CHANGED_DATA const &)> *);
			virtual void destroy();
			virtual void operator()(WNF_UMGR_USER_TILE_CHANGED_DATA const &);
			virtual ~__func<<lambda_b01047f34762df22571ad95a3118eb4f>,void (WNF_UMGR_USER_TILE_CHANGED_DATA const &)>();
		};

	};

	struct function<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>
	{
		~function<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>();
	};

	struct function<void (WNF_UMGR_USER_TILE_CHANGED_DATA const &)>
	{
		~function<void (WNF_UMGR_USER_TILE_CHANGED_DATA const &)>();
	};

	struct unique_ptr<Windows::Internal::AsyncDeferral<Windows::Internal::CMarshaledInterfaceResult<Windows::Internal::UI::Credentials::Controller::IRequestCredentialsData> >,default_delete<Windows::Internal::AsyncDeferral<Windows::Internal::CMarshaledInterfaceResult<Windows::Internal::UI::Credentials::Controller::IRequestCredentialsData> > > >
	{
		void reset(Windows::Internal::AsyncDeferral<Windows::Internal::CMarshaledInterfaceResult<Windows::Internal::UI::Credentials::Controller::IRequestCredentialsData> > *);
		void swap(unique_ptr<Windows::Internal::AsyncDeferral<Windows::Internal::CMarshaledInterfaceResult<Windows::Internal::UI::Credentials::Controller::IRequestCredentialsData> >,default_delete<Windows::Internal::AsyncDeferral<Windows::Internal::CMarshaledInterfaceResult<Windows::Internal::UI::Credentials::Controller::IRequestCredentialsData> > > > &);
		~unique_ptr<Windows::Internal::AsyncDeferral<Windows::Internal::CMarshaledInterfaceResult<Windows::Internal::UI::Credentials::Controller::IRequestCredentialsData> >,default_delete<Windows::Internal::AsyncDeferral<Windows::Internal::CMarshaledInterfaceResult<Windows::Internal::UI::Credentials::Controller::IRequestCredentialsData> > > >();
	};

};

;
FEATURE_ENABLED_STATE (* g_wil_details_apiGetFeatureEnabledState)(unsigned int,FEATURE_CHANGE_TIME,int *);
FEATURE_ENABLED_STATE (* g_wil_details_internalGetFeatureEnabledState)(unsigned int,FEATURE_CHANGE_TIME,int *);
HINSTANCE__ * g_wil_details_kernelbaseModuleHandle;
HINSTANCE__ * g_wil_details_ntdllModuleHandle;
HINSTANCE__ * wil_details_GetKernelBaseModuleHandle();
HINSTANCE__ * wil_details_GetNtDllModuleHandle();
Microsoft::WRL::Details::CreatorMap const __object_CredUXController_COM;
Microsoft::WRL::Details::FactoryCache __objectFactory__CredUXController_COM;
SJpegQuantizationTable const * const JpegQuantizationTables;
UACIndicatorControlHost g_uacIndicatorControlHost;
_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
__type_info_node __type_info_root_node;
bool IsWideStringEmpty(unsigned short const * const);
bool StopSystemTextInputProcesses();
bool _IsXAMLCredUIAvailable();
bool _SetSessionEvent(void *,void *);
bool _SetSystemEvent(SystemEventInfo const *);
bool _tlgGuidIsZero(_GUID const &);
int (* ?? winrt_activation_handler)(void *,winrt::guid const &,void * *);
int (* ?? winrt_to_hresult_handler)(void *);
int InlineIsEqualGUID(_GUID const &,_GUID const &);
int wil_RtlStagingConfig_QueryFeatureState(wil_FeatureState *,unsigned int,int,int *);
long (* g_wil_details_pfnNtQueryWnfStateData)(__WIL__WNF_STATE_NAME const *,__WIL__WNF_TYPE_ID const *,void const *,unsigned long *,void *,unsigned long *);
long (* g_wil_details_pfnNtUpdateWnfStateData)(__WIL__WNF_STATE_NAME const *,void const *,unsigned long,__WIL__WNF_TYPE_ID const *,void const *,unsigned long,unsigned long);
long AddFrameToWICBitmap(IWICImagingFactory *,IWICBitmapEncoder *,IWICBitmapSource *,_GUID,EncodingOptions);
long Convert32bppIWICBitmapSourceToHBITMAP(IWICBitmapSource *,HBITMAP__ * *);
long ConvertHBITMAPToWICBitmap(IWICImagingFactory *,HBITMAP__ *,WICBitmapAlphaChannelOption,IWICBitmapSource * *);
long ConvertIWICBitmapSourcePixelFormat(IWICBitmapSource *,_GUID,IWICImagingFactory *,IWICBitmapSource * *);
long ConvertWICBitmapPixelFormat(IWICImagingFactory *,IWICBitmapSource *,_GUID,WICBitmapDitherType,IWICBitmapSource * *);
long Create32BitHBITMAP(HDC__ *,tagSIZE const *,void * *,HBITMAP__ * *);
long CreateBitmapFromIconWithAlpha(HICON__ *,int,HBITMAP__ * *);
long CreateCredUXParams(unsigned long,_CREDUI_CONTEXT const *,CREDUI_INFO_INTERNAL *,unsigned long,unsigned long *,void const *,unsigned long,int *,unsigned long,Windows::Internal::UI::Credentials::Controller::CredUIStyle,Windows::Internal::UI::Credentials::Controller::ICredUXExtension *,Windows::Internal::UI::Credentials::Controller::IConsentUXContext *,Windows::Internal::UI::Credentials::Controller::ICredUXSecurePrompt *,Windows::Internal::UI::Credentials::Controller::ICredUXParameters * *);
long CreateFileSystemBindData(_GUID const &,void * *);
long ExtractCredentialData(Windows::Internal::UI::Credentials::Controller::IRequestCredentialsData *,unsigned long *,void * *,unsigned long *,int *);
long GetStreamFromHBITMAP(HBITMAP__ *,BITMAP_VERSION,WTS_STREAMTYPE *,_GUID const &,void * *);
long GetStreamOfWICBitmapSourceWithOptions(IWICImagingFactory *,IWICBitmapSource *,_GUID const &,_GUID,EncodingOptions,IStream * *);
long PromptAndWaitForCredsWithStyle(Windows::Internal::Shell::PlatformExtensions::ICredUX *,Windows::Internal::UI::Credentials::Controller::CredUIStyle,Windows::Internal::UI::Credentials::Controller::ICredUXExtension *,Windows::Internal::UI::Credentials::Controller::IConsentUXContext *,Windows::Internal::UI::Credentials::Controller::ICredUXSecurePrompt *,unsigned long,_CREDUI_CONTEXT const *,CREDUI_INFO_INTERNAL *,unsigned long,unsigned long *,void const *,unsigned long,void * *,unsigned long *,int *,unsigned long,unsigned long *);
long PromptInternal(Windows::Internal::Shell::PlatformExtensions::ICredUX *,Windows::Internal::UI::Credentials::Controller::CredUIStyle,Windows::Internal::UI::Credentials::Controller::ICredUXExtension *,Windows::Internal::UI::Credentials::Controller::IConsentUXContext *,Windows::Internal::UI::Credentials::Controller::ICredUXSecurePrompt *,unsigned long,_CREDUI_CONTEXT const *,CREDUI_INFO_INTERNAL *,unsigned long,unsigned long *,void const *,unsigned long,void * *,unsigned long *,int *,unsigned long,bool *);
long RegOpenSessionDataKey(unsigned long,unsigned long,HKEY__ * *);
long ResultFromKnownLastError();
long ResultFromWin32Bool(int);
long SHRegGetBOOLWithREGSAM(HKEY__ *,unsigned short const *,unsigned short const *,unsigned long,int *);
long SHRegGetDWORD(HKEY__ *,unsigned short const *,unsigned short const *,unsigned long *);
long SHSimpleItemFromAttributes(unsigned short const *,unsigned long,_GUID const &,void * *);
long SetJpegQuantizationTableOptions(JpegQuantizationTableTypes,IPropertyBag2 *);
long StringCchCatW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchCopyNExW(unsigned short *,unsigned __int64,unsigned short const *,unsigned __int64,unsigned short * *,unsigned __int64 *,unsigned long);
long StringCchPrintfW(unsigned short *,unsigned __int64,unsigned short const *,...);
long StringCchVPrintfW(unsigned short *,unsigned __int64,unsigned short const *,char *);
long ULongLongMult(unsigned __int64,unsigned __int64,unsigned __int64 *);
long WaitForCompletion<Windows::Foundation::IAsyncActionCompletedHandler,Windows::Foundation::IAsyncAction>(Windows::Foundation::IAsyncAction *,tagCOWAIT_FLAGS,void *);
long WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::UI::Credentials::Controller::RequestCredentialsData *>,Windows::Foundation::IAsyncOperation<Windows::Internal::UI::Credentials::Controller::RequestCredentialsData *> >(Windows::Foundation::IAsyncOperation<Windows::Internal::UI::Credentials::Controller::RequestCredentialsData *> *,tagCOWAIT_FLAGS,void *);
long WeakRefAs<Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IUserTileImageProviderInternal> > >(Microsoft::WRL::WeakRef const &,Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IUserTileImageProviderInternal> >);
long _AllocStringWorker<CTCoAllocPolicy>(void *,unsigned long,unsigned short const *,unsigned __int64,unsigned __int64,unsigned short * *);
long _CreateFileSysBindCtx(IBindCtx *,_WIN32_FIND_DATAW const *,IBindCtx * *);
long _DoesBitmapHaveAlpha(HBITMAP__ *,bool *);
long _ScaleBitmap(HBITMAP__ *,unsigned int,HBITMAP__ * *);
long wil_details_NtQueryWnfStateData(__WIL__WNF_STATE_NAME const *,__WIL__WNF_TYPE_ID const *,void const *,unsigned long *,void *,unsigned long *);
long wil_details_NtUpdateWnfStateData(__WIL__WNF_STATE_NAME const *,void const *,unsigned long,__WIL__WNF_TYPE_ID const *,void const *,unsigned long,unsigned long);
long wil_details_WriteSRUMWnfUsageBuffer(wil::details_abi::heap_vector<wil_details_FeatureUsageSRUM> *);
unsigned short GetSessionLangID();
unsigned short const * const PromptOperation;
unsigned short const * const RuntimeClass_Windows_Foundation_Diagnostics_AsyncCausalityTracer;
unsigned short const * const RuntimeClass_Windows_Foundation_PropertyValue;
unsigned short const * const RuntimeClass_Windows_Internal_Shell_PlatformExtensions_ConsoleCredUX;
unsigned short const * const RuntimeClass_Windows_Internal_UI_Credentials_CredUX_CredUXRenderComplete;
unsigned short const * const RuntimeClass_Windows_Internal_UI_Credentials_CredUX_CredUXViewProvider;
unsigned short const * const RuntimeClass_Windows_Internal_UI_Logon_CredProvData_UserTileImage;
unsigned short const * const RuntimeClass_Windows_Internal_UI_XAMLHost_XAMLHostWindow;
unsigned short const * const RuntimeClass_Windows_Storage_Streams_Buffer;
unsigned short const * const c_StopAsyncAction;
void (* ?? winrt_throw_hresult_handler)(unsigned int,char const *,char const *,void *,winrt::hresult);
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
void * operator new[](unsigned __int64,std::nothrow_t const &);
void CloseGlobalHandles();
void __ArrayUnwind(void *,unsigned __int64,unsigned __int64,void (*)(void *));
void __scrt_initialize_type_info();
void __scrt_throw_std_bad_alloc();
void __scrt_throw_std_bad_array_new_length();
void __scrt_uninitialize_type_info();
void _tlgWriteActivityAutoStop<0,5>(_tlgProvider_t const *,_GUID const *);
void _tlgWriteActivityAutoStop<35184372088832,5>(_tlgProvider_t const *,_GUID const *);
void _tlgWriteActivityAutoStop<70368744177664,5>(_tlgProvider_t const *,_GUID const *);
void operator delete(void *);
void operator delete(void *,std::nothrow_t const &);
void operator delete(void *,unsigned __int64);
void operator delete[](void *);
void operator delete[](void *,std::nothrow_t const &);
void operator delete[](void *,unsigned __int64);
void wil_StagingConfig_LogStagedFeatureUsage(unsigned int,unsigned int,unsigned char);
void wil_details_FeatureReporting_IncrementOpportunityInCache(wil_details_FeatureReportingCache *,wil_details_ServiceReportingKind,unsigned int,wil_details_RecordUsageResult *);
void wil_details_FeatureReporting_IncrementUsageInCache(wil_details_FeatureReportingCache *,wil_details_ServiceReportingKind,unsigned int,wil_details_RecordUsageResult *);
void wil_details_RecordCachedUsage(unsigned int,wil_details_FeatureReportingCache *,void (*)(unsigned int,unsigned int,unsigned int,char const *));
wil_details_RecordUsageResult wil_details_FeatureReporting_RecordUsageInCache(wil_details_FeatureReportingCache *,wil_details_ServiceReportingKind,unsigned int,unsigned int);
wil_details_ServiceReportingKind wil_details_MapReportingKind(wil_ReportingKind,int);
