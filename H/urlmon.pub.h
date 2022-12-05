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

namespace ABI
{
	long WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Security::EnterpriseData::FileProtectionInfo *>,Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::FileProtectionInfo *> >(ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Security::EnterpriseData::FileProtectionInfo *> *,tagCOWAIT_FLAGS,void *);
	long WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Storage::StorageFile *>,Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile *> >(ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Storage::StorageFile *> *,tagCOWAIT_FLAGS,void *);
	long WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Storage::StorageFolder *>,Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder *> >(ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Storage::StorageFolder *> *,tagCOWAIT_FLAGS,void *);
};

namespace ATL
{
	struct CComBSTR
	{
		CComBSTR & operator=(unsigned short const *);
		CComBSTR(CComBSTR const &);
		CComBSTR(unsigned short const *);
		long Append(unsigned short const *);
		long Append(unsigned short const *,int);
		unsigned int Length();
		void Empty();
		~CComBSTR();
	};

	struct CComPtr<IDomainListBrowserEmulationFilter>
	{
		~CComPtr<IDomainListBrowserEmulationFilter>();
	};

	struct CComPtr<IDualEngineBrowserEmulationFilter>
	{
		~CComPtr<IDualEngineBrowserEmulationFilter>();
	};

	struct CComPtr<IUri>
	{
		~CComPtr<IUri>();
	};

	struct CComPtr<IUriBuilder>
	{
		~CComPtr<IUriBuilder>();
	};

	struct CComPtr<IWebPlatformPermanentSecurityManager>
	{
		~CComPtr<IWebPlatformPermanentSecurityManager>();
	};

	struct CComPtr<IWebPlatformPermanentSecurityManagerInternal>
	{
		~CComPtr<IWebPlatformPermanentSecurityManagerInternal>();
	};

	struct CComPtr<IXMLDOMNode>
	{
		~CComPtr<IXMLDOMNode>();
	};

	struct CComPtrBase<IUri>
	{
		void Release();
	};

	IUnknown * AtlComPtrAssign(IUnknown * *,IUnknown *);
	void AtlThrowImpl(long);
};

struct AppDataFolderList
{
	virtual long GetPackageDependencyStateForIUri(IUri *,int *);
	virtual long GetPackageFullNameForIUri(IUri *,unsigned short * *);
	virtual long ResolveSourceIUriAlias(IUri *,int *,IUri * *);
};

namespace AppDataFolders
{
	unsigned short const * const Local;
	unsigned short const * const LocalCache;
	unsigned short const * const Roaming;
	unsigned short const * const Temp;
};

class AppDataProtocolClassFactory
{
protected:
	long Initialize(PACKAGE_INFO const *,unsigned int,long (*)(unsigned short const *,tag_APPDATA_URI_LOCALITY,void *,unsigned short *,unsigned int *),IServiceProvider *);
	virtual ~AppDataProtocolClassFactory();
public:
	static long CreateClassFactory(PACKAGE_INFO const *,unsigned int,long (*)(unsigned short const *,tag_APPDATA_URI_LOCALITY,void *,unsigned short *,unsigned int *),IServiceProvider *,IClassFactory * *);
	virtual long CombineUrl(unsigned short const *,unsigned short const *,unsigned long,unsigned short *,unsigned long,unsigned long *,unsigned long);
	virtual long CompareUrl(unsigned short const *,unsigned short const *,unsigned long);
	virtual long CreateInstance(IUnknown *,_GUID const &,void * *);
	virtual long LockServer(int);
	virtual long ParseUrl(unsigned short const *,_tagPARSEACTION,unsigned long,unsigned short *,unsigned long,unsigned long *,unsigned long);
	virtual long QueryInfo(unsigned short const *,_tagQUERYOPTION,unsigned long,void *,unsigned long,unsigned long *,unsigned long);
};

class AppDataUrlSchemeConverter
{
	long InitializeDestinationSchemePluggableProtocol(IUri *,IInternetProtocolSink *,IInternetBindInfo *,unsigned long,unsigned __int64,IInternetProtocolEx * *,long *);
public:
	AppDataUrlSchemeConverter();
	long Initialize(PACKAGE_INFO const *,unsigned int,long (*)(unsigned short const *,tag_APPDATA_URI_LOCALITY,void *,unsigned short *,unsigned int *),IServiceProvider *);
	virtual long ConvertToDestinationSchemeIUri(IUri *,IUri * *);
	virtual long CreateAndStartDestinationSchemePluggableProtocol(IUri *,IInternetProtocolSink *,IInternetBindInfo *,unsigned long,unsigned __int64,IInternetProtocolEx * *,long *);
	virtual long GetIPackageHostList(IPackageHostList * *);
	virtual ~AppDataUrlSchemeConverter();
};

namespace AppProtocolsCommon
{
	class PackageInfoFilePathCache
	{
		static IUri * rootPackagePath;
		static long initializedCount;
	public:
		static long GetRootPackagePathAsIUri(IUri * *);
		static long SetRootPackagePathAsIUri(IUri *);
	};

	int IsPackageScheme(unsigned short *);
	int IsTelemetryCollectionAllowed(IUri *,bool,tag_APPX_PROCESS_URL_ACTION_TELEMETRY *);
	int UriHasFullWinRTAccess(IWebPlatformAppContext *,IUri *);
	long CombineFileUriWithRelativePath(IUri *,unsigned short const *,unsigned __int64,IUri * *);
	long ConvertAppXIUriToMsResourceUriString(IUri *,bool,unsigned short const *,unsigned short *,unsigned __int64);
	long DecodePathInPlace(AppProtocolsCommon::DecoderType,unsigned short *,unsigned __int64 *);
	long DoesBindInfoReportAppXUriIsPreResolved(IInternetBindInfo *,int *);
	long EnsureTelemetryRegKeys(tag_APPX_PROCESS_URL_ACTION_TELEMETRY *);
	long FindPackageInfoFromHostname(unsigned short const * const,PACKAGE_INFO const *,unsigned int,PACKAGE_INFO const * *);
	long GetDomainFromSourceIUri(IUri *,unsigned __int64,unsigned short *,unsigned __int64 *);
	long GetEffectiveSecurityPrefix(IUri *,unsigned short const * *,unsigned __int64 *);
	long GetFileIUriAndResourceCandidateFromAppXIUri(IUri *,IResourceMap2 *,PACKAGE_INFO const *,unsigned int,IUri * *,IResourceCandidate2 * *);
	long GetFileIUriAndResourceCandidateFromPreResolvedAppXIUri(IUri *,IResourceMap2 *,PACKAGE_INFO const *,unsigned int,IUri * *,IResourceCandidate2 * *);
	long GetLocalizedFileIUriAndResourceCandidate(IUri *,IResourceMap2 *,unsigned short const *,IUri * *,IResourceCandidate2 * *);
	long GetNormalizedIUriFromSourceUri(unsigned short const *,IUri * *);
	long GetSecurityUrlFromSourceIUri(IUri *,unsigned __int64,unsigned short *,unsigned __int64 *);
	long GetUriFromContext(unsigned char const *,unsigned long,unsigned long,IUri * *);
	long IsAboutBlankUri(IUri *,int *);
	long IsAppDataUri(IUri *,int *);
	long IsCrossDomainWebWorkerAllowed(IUri *,IUri *,IAppxUrlHelper *,int *);
	long IsLocalCompartmentUri(IUri *,int *);
	long IsLocalStreamUri(IUri *,int *);
	long IsLocalXhrAllowed(IUri *,_tagPROTOCOL_ARGUMENT const *,int *);
	long IsPackageUri(IUri *,int *,int *);
	long IsPackagedWebCompartmentXhrAllowed(IUri *,IUri *,IAppxUrlHelper *,int *);
	long IsSchemeIncludedInTelemetry(IUri *,int *);
	long IsTelemetryCollectionEnabled(tag_APPX_PROCESS_URL_ACTION_TELEMETRY *,int *);
	long IsWebCompartmentUri(IUri *,int *);
	long ParseUrl(IPackageHostList *,unsigned short const *,_tagPARSEACTION,unsigned long,unsigned short *,unsigned long,unsigned long *,unsigned long);
	long ReplaceQueryStringOfUri(IUri *,unsigned short const *,unsigned short const *,IUri * *);
	long ValidateAppDataIUri(IUri *);
	long ValidatePackageIUri(IUri *);
};

class AppxSecurityManager
{
	long ProcessUrlActionInternal(IUri *,unsigned long,unsigned char *,unsigned long,unsigned char *,unsigned long);
	static _GUID const CustomConfirmObjectSafety;
	virtual ~AppxSecurityManager();
public:
	AppxSecurityManager();
	long Initialize(tag_AppxSecurityManagerContext *);
	virtual long GetSecurityId(IUri *,unsigned char *,unsigned long *);
	virtual long GetZoneActionPolicyEx(unsigned long,unsigned long,unsigned char *,unsigned long,_URLZONEREG,unsigned long);
	virtual long MapUrlToZone(IUri *,unsigned long *,unsigned long,unsigned short * *,unsigned long *);
	virtual long MapUrlToZoneInternal(IUri *,unsigned long *,unsigned long,unsigned short * *,unsigned long *,unsigned long,unsigned long *);
	virtual long ProcessUrlAction(IUri *,unsigned long,unsigned char *,unsigned long,unsigned char *,unsigned long,unsigned long,unsigned long *);
	virtual long QueryCustomPolicy(IUri *,_GUID const &,unsigned char * *,unsigned long *,unsigned char *,unsigned long);
};

struct Auto<unsigned short *,CoTaskMemAllocFunctor<unsigned short *> >
{
	void Clear();
};

struct AutoArray<char *,AutoTypedArrayFunctor<char> >
{
	void Clear();
};

struct AutoArray<unsigned short *,AutoTypedArrayFunctor<unsigned short> >
{
	void Clear();
};

namespace BrowserChannels
{
	namespace Private
	{
		bool ReadExePath(HKEY__ *,unsigned short *,unsigned long);
		bool ReadRegStringValue(HKEY__ *,unsigned short const *,unsigned short *,unsigned long);
	};

};

namespace BrowserReplacementVariant
{
	namespace Private
	{
		bool IsBrowserReplacementActivated();
	};

};

struct BrowserTelemetry
{
	static void IEModeSwitchToChromium<bool &>(bool &);
	static void SingleSignOnGetCookiesAadStarted<unsigned short const * &>(unsigned short const * &);
	static void SingleSignOnGetCookiesMsaStarted<unsigned short const * &>(unsigned short const * &);
	static void WdagTrustDeterminationTimeout<unsigned long const &>(unsigned long const &);
};

namespace BrowserUtilEdp
{
	bool IsEdpEnforcementEnabled();
};

struct CAcceptHeaderOptions
{
	virtual long GetAcceptHeaderCategory(__MIDL___MIDL_itf_urlmonp_0000_0019_0001 *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SetAcceptHeaderCategory(__MIDL___MIDL_itf_urlmonp_0000_0019_0001);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CActiveSetupBinding
{
	long SaveHresult(long);
	long SetDefaultDownloadSite(char *);
	void DoCleanUp(unsigned long);
	void StartActiveSetup();
public:
	CActiveSetupBinding(IBindCtx *,IBindStatusCallback *,unsigned short *,unsigned short *,long *);
	virtual long Abort();
	virtual long GetBindResult(_GUID *,unsigned long *,unsigned short * *,unsigned long *);
	virtual long GetPriority(long *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Resume();
	virtual long SetPriority(long);
	virtual long Suspend();
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	~CActiveSetupBinding();
};

class CAllowList
{
	static int _CompareDomainNames(void *,void *,__int64);
	static int _CompareURIs(void *,void *,__int64);
public:
	bool Find(unsigned short const *);
};

struct CAuthenticateHostUI
{
	static long CreateInstance(HWND__ *,_GUID const &,void * *);
	static long FindInstance(HWND__ *,_GUID const &,void * *);
	virtual long GetCertificate(_CERT_CONTEXT const * *,bool,_SecPkgContext_IssuerListInfoEx *);
	virtual long GetCredential(IUri *,unsigned short const *,bool,unsigned short * *,unsigned short * *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SetSite(IAuthenticateHostUI *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CBMRulesEnum
{
	long _CopyRuleData(unsigned long,_sBrowserModeRuleData * *);
	long _CopyRuleName(unsigned long,unsigned short * *);
public:
	virtual long Count(unsigned long *);
	virtual long Item(unsigned long,_sBrowserModeRuleData * *);
	virtual long Name(unsigned long,unsigned short * *);
};

struct CBSC
{
	long GetRequestedObject(IBindCtx *,void * *);
	virtual long GetBindInfo(unsigned long *,_tagBINDINFO *);
	virtual long GetPriority(long *);
	virtual long OnDataAvailable(unsigned long,unsigned long,tagFORMATETC *,tagSTGMEDIUM *);
	virtual long OnLowResource(unsigned long);
	virtual long OnObjectAvailable(_GUID const &,IUnknown *);
	virtual long OnProgress(unsigned long,unsigned long,unsigned long,unsigned short const *);
	virtual long OnStartBinding(unsigned long,IBinding *);
	virtual long OnStopBinding(long,unsigned short const *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CBSCCreateObject
{
	CBSCCreateObject(_GUID const &,unsigned short const *,unsigned short const *,unsigned long,void *,_GUID const &,IBindCtx *,unsigned long,long &);
	IBindStatusCallback * GetClientBSC();
	virtual long GetBindInfo(unsigned long *,_tagBINDINFO *);
	virtual long GetPriority(long *);
	virtual long OnDataAvailable(unsigned long,unsigned long,tagFORMATETC *,tagSTGMEDIUM *);
	virtual long OnLowResource(unsigned long);
	virtual long OnObjectAvailable(_GUID const &,IUnknown *);
	virtual long OnProgress(unsigned long,unsigned long,unsigned long,unsigned short const *);
	virtual long OnStartBinding(unsigned long,IBinding *);
	virtual long OnStopBinding(long,unsigned short const *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long QueryService(_GUID const &,_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	~CBSCCreateObject();
};

struct CBSCHolder
{
	CBSCHolder();
	virtual long Authenticate(HWND__ * *,unsigned short * *,unsigned short * *);
	virtual long AuthenticateEx(HWND__ * *,unsigned short * *,unsigned short * *,_tagAUTHENTICATEINFO *);
	virtual long BeginningTransaction(unsigned short const *,unsigned short const *,unsigned long,unsigned short * *);
	virtual long GetBindCtx(IBindCtx * *);
	virtual long GetBindInfo(unsigned long *,_tagBINDINFO *);
	virtual long GetBindInfoEx(unsigned long *,_tagBINDINFO *,unsigned long *,unsigned long *);
	virtual long GetBindString(unsigned long,unsigned short * *,unsigned long,unsigned long *);
	virtual long GetDownloadInitiator(tagDOWNLOADINITIATORINFO *);
	virtual long GetDownloadModeHandle(void * *);
	virtual long GetInternalBindOption(unsigned long,void * *,unsigned long *);
	virtual long GetPriority(long *);
	virtual long GetRootSecurityId(unsigned char *,unsigned long *,unsigned __int64);
	virtual long GetSerializedClientCertContext(unsigned char * *,unsigned long *);
	virtual long ObtainService(_GUID const &,_GUID const &,void * *);
	virtual long OnDataAvailable(unsigned long,unsigned long,tagFORMATETC *,tagSTGMEDIUM *);
	virtual long OnLowResource(unsigned long);
	virtual long OnObjectAvailable(_GUID const &,IUnknown *);
	virtual long OnProgress(unsigned long,unsigned long,unsigned long,unsigned short const *);
	virtual long OnProtocolTerminated();
	virtual long OnResponse(unsigned long,unsigned short const *,unsigned short const *,unsigned short * *);
	virtual long OnStartBinding(unsigned long,IBinding *);
	virtual long OnStopBinding(long,unsigned short const *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long QueryService(_GUID const &,_GUID const &,void * *);
	virtual long RemoveNode(IBindStatusCallback *);
	virtual long SetMainNode(IBindStatusCallback *,IBindStatusCallback * *,void *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	void ReleaseNodeBindings();
	~CBSCHolder();
};

struct CBSCNode
{
	virtual long CBSCNodeObtainService(_GUID const &,_GUID const &,void * *);
	virtual long CallAuthenticate(long *,HWND__ * *,unsigned short * *,unsigned short * *);
	virtual long CallAuthenticateEx(long *,HWND__ * *,unsigned short * *,unsigned short * *,_tagAUTHENTICATEINFO *);
	virtual long CallBeginningTransaction(long *,unsigned short const *,unsigned short const *,unsigned long,unsigned short * *);
	virtual long CallGetRootSecurityId(long *,unsigned char *,unsigned long *,unsigned __int64);
	virtual long CallGetSerializedClientCertContext(long *,unsigned char * *,unsigned long *);
	virtual long CallOnResponse(long *,unsigned long,unsigned short const *,unsigned short const *,unsigned short * *);
};

struct CBaseBSCB
{
	CBaseBSCB(IUnknown *,unsigned long,IBindStatusCallback *);
	virtual bool ShouldSetDownloadMode();
	virtual long BeginningTransaction(unsigned short const *,unsigned short const *,unsigned long,unsigned short * *);
	virtual long GetBindInfo(unsigned long *,_tagBINDINFO *);
	virtual long GetDownloadModeHandle(void * *);
	virtual long GetFileHandle(void * *);
	virtual long GetFullFileName(unsigned short const * *);
	virtual long GetPriority(long *);
	virtual long KickOffDownload(unsigned short const *);
	virtual long MessagePending(unsigned long,unsigned long,unsigned long);
	virtual long OnDataAvailable(unsigned long,unsigned long,tagFORMATETC *,tagSTGMEDIUM *);
	virtual long OnLowResource(unsigned long);
	virtual long OnObjectAvailable(_GUID const &,IUnknown *);
	virtual long OnProgress(unsigned long,unsigned long,unsigned long,unsigned short const *);
	virtual long OnResponse(unsigned long,unsigned short const *,unsigned short const *,unsigned short * *);
	virtual long OnStartBinding(unsigned long,IBinding *);
	virtual long OnStopBinding(long,unsigned short const *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long QueryService(_GUID const &,_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual void Neutralize();
};

struct CBaseProtocol
{
	struct CPrivUnknown
	{
		virtual long QueryInterface(_GUID const &,void * *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
	};

	CBaseProtocol(IUnknown *);
	virtual long Abort(long,unsigned long);
	virtual long Continue();
	virtual long Continue(_tagPROTOCOLDATA *);
	virtual long GetPriority(long *);
	virtual long LockRequest(unsigned long);
	virtual long Prepare();
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long QueryService(_GUID const &,_GUID const &,void * *);
	virtual long Read(void *,unsigned long,unsigned long *);
	virtual long Resume();
	virtual long Seek(_LARGE_INTEGER,unsigned long,_ULARGE_INTEGER *);
	virtual long SetPriority(long);
	virtual long Start(unsigned short const *,IInternetProtocolSink *,IInternetBindInfo *,unsigned long,unsigned __int64);
	virtual long Suspend();
	virtual long Terminate(unsigned long);
	virtual long UnlockRequest();
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~CBaseProtocol();
};

class CBindCtx
{
	CBindCtx(IBindCtx *);
	long EnsureSecret();
	long ValidateMarshalParams(_GUID const &,void *,unsigned long,void *,unsigned long);
	static CMutexSem s_csSecretBlock;
	static int s_fSecretInit;
	static unsigned char * s_SecretBlock;
public:
	long SetTransactionObject(CTransaction *);
	static long Create(CBindCtx * *,IBindCtx *);
	virtual long DisconnectObject(unsigned long);
	virtual long EnumObjectParam(IEnumString * *);
	virtual long GetBindOptions(tagBIND_OPTS *);
	virtual long GetMarshalSizeMax(_GUID const &,void *,unsigned long,void *,unsigned long,unsigned long *);
	virtual long GetObjectParam(unsigned short *,IUnknown * *);
	virtual long GetRunningObjectTable(IRunningObjectTable * *);
	virtual long GetUnmarshalClass(_GUID const &,void *,unsigned long,void *,unsigned long,_GUID *);
	virtual long MarshalInterface(IStream *,_GUID const &,void *,unsigned long,void *,unsigned long);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long RegisterObjectBound(IUnknown *);
	virtual long RegisterObjectParam(unsigned short *,IUnknown *);
	virtual long ReleaseBoundObjects();
	virtual long ReleaseMarshalData(IStream *);
	virtual long RevokeObjectBound(IUnknown *);
	virtual long RevokeObjectParam(unsigned short *);
	virtual long SetBindOptions(tagBIND_OPTS *);
	virtual long UnmarshalInterface(IStream *,_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	~CBindCtx();
};

struct CBindStatusCallback
{
	virtual long BeginningTransaction(unsigned short const *,unsigned short const *,unsigned long,unsigned short * *);
	virtual long GetBindInfo(unsigned long *,_tagBINDINFO *);
	virtual long GetCatalogFile(char * *);
	virtual long GetCorTrust(void * *);
	virtual long GetJavaTrust(void * *);
	virtual long GetPriority(long *);
	virtual long GetWindow(_GUID const &,HWND__ * *);
	virtual long OnDataAvailable(unsigned long,unsigned long,tagFORMATETC *,tagSTGMEDIUM *);
	virtual long OnLowResource(unsigned long);
	virtual long OnObjectAvailable(_GUID const &,IUnknown *);
	virtual long OnProgress(unsigned long,unsigned long,unsigned long,unsigned short const *);
	virtual long OnResponse(unsigned long,unsigned short const *,unsigned short const *,unsigned short * *);
	virtual long OnStartBinding(unsigned long,IBinding *);
	virtual long OnStopBinding(long,unsigned short const *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long QueryService(_GUID const &,_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CBinding
{
	bool ShouldUseSniffedMimeType(unsigned short const *,unsigned short const *);
	bool UseRedirectedMonikerForLoading(_GUID const &,IMoniker * *);
	bool UseSniffedMimeTypeForFeeds(unsigned short const *,unsigned short const *);
	void SetProtocolPriority();
public:
	CBinding(IUnknown *);
	int IsAsyncTransaction();
	int IsHTAExtensionClsidMisMatch(_GUID *);
	int IsSafeToInitialize(IUri *,_GUID const &,_GUID *,IUnknown *);
	int OnTransNotification(tagBINDSTATUS,unsigned long,unsigned long,unsigned short *,long);
	long SetIUri(IUri *);
	long StartBinding(IUri *,IBindCtx *,_GUID const &,int,unsigned short * *,void * *);
	static long CreateIUriFromUrl(unsigned short const *,IUri * *);
	virtual HWND__ * GetNotificationWnd();
	virtual int IsAsyncBinding();
	virtual long Abort();
	virtual long CallAuthenticate(HWND__ * *,unsigned short * *,unsigned short * *);
	virtual long CallGetBindInfoEx(unsigned long *,_tagBINDINFO *,unsigned long *,unsigned long *);
	virtual long CallGetPriority(long *);
	virtual long CallOnDataAvailable(unsigned long,unsigned long,tagFORMATETC *,tagSTGMEDIUM *);
	virtual long CallOnLowResource(unsigned long);
	virtual long CallOnObjectAvailable(_GUID const &,IUnknown *);
	virtual long CallOnProgress(unsigned long,unsigned long,unsigned long,unsigned short const *);
	virtual long CallOnStartBinding(unsigned long,IBinding *);
	virtual long CallOnStopBinding(long,unsigned short const *);
	virtual long CompleteTransaction();
	virtual long CreateObject(_GUID *,_GUID const &,IUnknown * *);
	virtual long DeleteCacheEntryOnRequestHandleClosing(unsigned short const *);
	virtual long DeletePartialFileOnRequestHandleClosing();
	virtual long DetachFromPreBind();
	virtual long DisallowPrematureEOF(int);
	virtual long DownloadToDestinationPath(unsigned short const *);
	virtual long GetBindCtx(IBindCtx * *);
	virtual long GetBindHandle(__MIDL_IGetBindHandle_0001,void * *);
	virtual long GetBindInfo(unsigned long *,_tagBINDINFO *);
	virtual long GetBindInfoEx(unsigned long *,_tagBINDINFO *,unsigned long *,unsigned long *);
	virtual long GetBindResult(_GUID *,unsigned long *,unsigned short * *,unsigned long *);
	virtual long GetBindString(unsigned long,unsigned short * *,unsigned long,unsigned long *);
	virtual long GetDownloadInitiator(tagDOWNLOADINITIATORINFO *);
	virtual long GetDownloadModeHandle(void * *);
	virtual long GetFirewallError(unsigned long *);
	virtual long GetIPAddress(tagSAFEARRAY * *);
	virtual long GetIUri(IUri * *);
	virtual long GetInternalBindOption(unsigned long,void * *,unsigned long *);
	virtual long GetPriority(long *);
	virtual long GetProxyInfo(int *,unsigned short * *,unsigned long *);
	virtual long GetRequestedObject(IBindCtx *,IUnknown * *);
	virtual long HasSecurityFailure(int *);
	virtual long InstallIEFeature();
	virtual long InstantiateObject(_GUID *,_GUID *,_GUID const &,IUnknown * *,int);
	virtual long IsAppCacheLookupAllowed(int *);
	virtual long IsCachedHeaderAvailable(int *);
	virtual long IsCanceledByWebRequest(int *);
	virtual long IsDownloadModeEnabled(int *);
	virtual long IsFromUrlmonCBinding(int *);
	virtual long IsHSTSRedirectRequest(int *);
	virtual long LocalQueryInterface(_GUID const &,void * *);
	virtual long NotifyInternalOnRequestHandleClosing(INotifyInternal *);
	virtual long NotifyOnRequestHandleClosing(_GUID const &);
	virtual long ObjectPersistFileLoad(IUnknown *,_GUID *);
	virtual long ObjectPersistMnkLoad(IUnknown *,int,int,int *,int,_GUID *);
	virtual long OnDataNotification(unsigned long,unsigned long,unsigned long,int);
	virtual long OnObjectAvailable(unsigned long,unsigned long,unsigned long,int);
	virtual long QueryInfo(unsigned long,void *,unsigned long *,unsigned long *,unsigned long *);
	virtual long QueryInfoFromCachedHeader(unsigned long,void *,unsigned long *,unsigned long *,unsigned long *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long QueryOption(unsigned long,void *,unsigned long *);
	virtual long QueryService(_GUID const &,_GUID const &,void * *);
	virtual long ReportData(unsigned long,unsigned long,unsigned long);
	virtual long ReportProgress(unsigned long,unsigned short const *);
	virtual long ReportResult(long,unsigned long,unsigned short const *);
	virtual long Resume();
	virtual long SetDownloadPriorityInfo(__MIDL___MIDL_itf_urlmonp_0000_0026_0001,__MIDL___MIDL_itf_urlmonp_0000_0026_0002,__MIDL___MIDL_itf_urlmonp_0000_0026_0003,__MIDL___MIDL_itf_urlmonp_0000_0026_0004,long);
	virtual long SetPriority(long);
	virtual long SetSuppressedOnStopBindResult(long);
	virtual long SuppressOnStopBinding();
	virtual long Suspend();
	virtual long Switch(_tagPROTOCOLDATA *);
	virtual long TriggerOnStopBinding();
	virtual long UpdateNetworkTimeout(unsigned __int64,int,unsigned __int64,int,unsigned __int64,int);
	virtual long WasRequestToProxy();
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	void CheckFeedsClsidDisabled(_GUID *);
	void PutMonikerProperties(IUnknown *,unsigned short const *,_GUID *,int);
	~CBinding();
};

struct CBlockDownload
{
	virtual long GetBindInfo(unsigned long *,_tagBINDINFO *);
};

class CBlockListManager
{
	long _GetCachedString(unsigned short const *,unsigned int,unsigned short * *);
	long _HandleBlockListElement(unsigned short const *,unsigned int,IXmlReader *);
	long _HandleBlockListEntryElement(unsigned short const *,unsigned int,IXmlReader *,BLOCKLIST_LOAD_STATE);
	long _HandleElementFull(unsigned short const *,unsigned int,IXmlReader *);
	long _HandleElementPartial(unsigned short const *,unsigned int,IXmlReader *);
	long _HandleEndElementFull(unsigned short const *,unsigned int,IXmlReader *);
	long _HandleEndElementPartial(unsigned short const *,unsigned int,IXmlReader *,int *);
	long _HandleGroupEntryElement(unsigned short const *,unsigned int,IXmlReader *);
	long _HandleVersionEntryElement(unsigned short const *,unsigned int,IXmlReader *);
	long _InitializeFullNotThreadSafe();
	long _InitializeNotThreadSafe(unsigned short const *);
	long _LoadBlockListNotThreadSafe(BLOCKLIST_LOAD_STATE);
	long _PartialCLSIDFromString(unsigned short const *,_GUID *);
	long _StringToBool(unsigned short const *,bool *);
	long _StringToULong(unsigned short const *,unsigned long *,unsigned long);
	static void s_BlockListEntryDestroyCallback(BLOCKLIST_ENTRY *);
	static void s_GroupEntryDestroyCallback(GROUP_ENTRY *);
	static void s_StringDestroyCallback(unsigned short *);
public:
	long ForceLoadFullBlockList(unsigned short const *);
	long GetBlockListEntry(unsigned short const *,BLOCKLIST_ENTRY const * *,tagENTRY_TYPE,int *);
	~CBlockListManager();
};

class CBrowserModeFilter
{
	virtual long _EnsureFilterIfNoDataFound();
protected:
	int _IsRuleinList(unsigned short const *,unsigned long *);
	long _AddRule(unsigned short const *);
	long _EnsureBrowserModeFilter();
	long _Lock();
	long _PersistData();
	long _RemoveRule(unsigned short const *);
	virtual int _IsUriInList(IUri *);
	virtual long _LoadData(IStream *);
	virtual void _PruneData();
	void _PruneDataImpl();
public:
	virtual long AddEdgeRule(IUri *);
	virtual long AddIE7Rule(unsigned short const *);
	virtual long AddKeepInBrowserRule(IUri *);
	virtual long GetRuleTime(unsigned short const *,_FILETIME *);
	virtual long IE7Rules(IBrowserEmulationRulesEnum * *);
	virtual long Init();
	virtual long IsEdgeMode(IUri *,int *);
	virtual long IsIE7Mode(IUri *,int *);
	virtual long RemoveEdgeRule(IUri *);
	virtual long RemoveRule(unsigned short const *);
	virtual long ResetBrowserModeFilter();
	virtual long SetRuleTime(unsigned short const *,_FILETIME);
	virtual long ShouldKeepInBrowser(IUri *,int *);
	virtual ~CBrowserModeFilter();
};

struct CBuffer
{
	CBuffer(unsigned long);
	~CBuffer();
};

class CByteHashTable
{
	CByteHashTable::BHASHENTRY * _LookupEntry(unsigned char const *,unsigned int,unsigned int *,CByteHashTable::BHASHENTRY * *);
	long _AddUpdateItem(int,unsigned char const *,unsigned int,unsigned char const *,unsigned int,unsigned char *,unsigned int);
	long _GetValue(unsigned char const *,unsigned int,unsigned char * *,int *,unsigned char *,int);
	long _GetValueWorker(CByteHashTable::BHASHENTRY *,unsigned char * *,int *,unsigned char *,unsigned int);
	unsigned int _CalculateHashKey(unsigned char const *,unsigned int,unsigned int);
	void _GrowTable();
	void _RemoveCallback(int,void (*)(unsigned char *,unsigned int,void *),void *);
public:
	long Create(unsigned int,unsigned int,unsigned int,unsigned int,unsigned int (*)(unsigned char const *,unsigned int,unsigned int));
};

struct CCDLPacket
{
	long Post(unsigned long);
	long Process();
};

struct CCDLPacketMgr
{
	long AbortPackets(CDownload *);
	long Post(CCDLPacket *,unsigned long);
	long TimeSlice();
};

struct CCacheFileDownload
{
	virtual long GetBindInfo(unsigned long *,_tagBINDINFO *);
	virtual long KickOffDownload(unsigned short const *);
	virtual long OnDataAvailable(unsigned long,unsigned long,tagFORMATETC *,tagSTGMEDIUM *);
};

struct CCachedHttpHeaderEntry
{
	CCachedHttpHeaderEntry();
	~CCachedHttpHeaderEntry();
};

class CCdlProtocol
{
	long StartDownload(CodeDownloadDataTag &);
	long _ParseURL();
public:
	CCdlProtocol(IUnknown *);
	virtual long Abort(long,unsigned long);
	virtual long Continue(_tagPROTOCOLDATA *);
	virtual long LockRequest(unsigned long);
	virtual long Read(void *,unsigned long,unsigned long *);
	virtual long Seek(_LARGE_INTEGER,unsigned long,_ULARGE_INTEGER *);
	virtual long Start(unsigned short const *,IInternetProtocolSink *,IInternetBindInfo *,unsigned long,unsigned __int64);
	virtual long UnlockRequest();
	virtual ~CCdlProtocol();
};

struct CClBinding
{
	CClBinding(CCodeDownload *,IBindStatusCallback *,IBindCtx *,_GUID const &,unsigned long,void *,_GUID const &,IInternetHostSecurityManager *);
	HWND__ * GetHWND(_GUID const &);
	IBindHost * GetIBindHost();
	ICodeInstall * GetICodeInstall();
	IInternetHostSecurityManager * GetHostSecurityManager();
	IWindowForBindingUI * GetIWindowForBindingUI();
	long InstantiateObjectAndReport(CCodeDownload *);
	long ReleaseClient();
	long SetClassString(unsigned short const *);
	virtual long Abort();
	virtual long DeleteCacheEntryOnRequestHandleClosing(unsigned short const *);
	virtual long DeletePartialFileOnRequestHandleClosing();
	virtual long DisallowPrematureEOF(int);
	virtual long DownloadToDestinationPath(unsigned short const *);
	virtual long GetBindResult(_GUID *,unsigned long *,unsigned short * *,unsigned long *);
	virtual long GetFirewallError(unsigned long *);
	virtual long GetIPAddress(tagSAFEARRAY * *);
	virtual long GetPriority(long *);
	virtual long GetProxyInfo(int *,unsigned short * *,unsigned long *);
	virtual long HasSecurityFailure(int *);
	virtual long IsAppCacheLookupAllowed(int *);
	virtual long IsCanceledByWebRequest(int *);
	virtual long IsDownloadModeEnabled(int *);
	virtual long IsHSTSRedirectRequest(int *);
	virtual long NotifyInternalOnRequestHandleClosing(INotifyInternal *);
	virtual long NotifyOnRequestHandleClosing(_GUID const &);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Resume();
	virtual long SetPriority(long);
	virtual long Suspend();
	virtual long UpdateNetworkTimeout(unsigned __int64,int,unsigned __int64,int,unsigned __int64,int);
	virtual long WasRequestToProxy();
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CClassInstallFilter
{
	long InstallerReportResult(long,unsigned long,unsigned short const *);
public:
	CClassInstallFilter();
	virtual long Abort(long,unsigned long);
	virtual long Continue(_tagPROTOCOLDATA *);
	virtual long GetSecurityId(unsigned char *,unsigned long *,unsigned __int64);
	virtual long LockRequest(unsigned long);
	virtual long ProcessUrlAction(unsigned long,unsigned char *,unsigned long,unsigned char *,unsigned long,unsigned long,unsigned long);
	virtual long QueryCustomPolicy(_GUID const &,unsigned char * *,unsigned long *,unsigned char *,unsigned long,unsigned long);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long QueryService(_GUID const &,_GUID const &,void * *);
	virtual long Read(void *,unsigned long,unsigned long *);
	virtual long ReportData(unsigned long,unsigned long,unsigned long);
	virtual long ReportProgress(unsigned long,unsigned short const *);
	virtual long ReportResult(long,unsigned long,unsigned short const *);
	virtual long Resume();
	virtual long Seek(_LARGE_INTEGER,unsigned long,_ULARGE_INTEGER *);
	virtual long Start(unsigned short const *,IInternetProtocolSink *,IInternetBindInfo *,unsigned long,unsigned __int64);
	virtual long Suspend();
	virtual long Switch(_tagPROTOCOLDATA *);
	virtual long Terminate(unsigned long);
	virtual long UnlockRequest();
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	~CClassInstallFilter();
};

struct CClassInstallFilterSink
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long QueryService(_GUID const &,_GUID const &,void * *);
	virtual long ReportData(unsigned long,unsigned long,unsigned long);
	virtual long ReportProgress(unsigned long,unsigned short const *);
	virtual long ReportResult(long,unsigned long,unsigned short const *);
	virtual long Switch(_tagPROTOCOLDATA *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CCodeDLBSC
{
	CCodeDLBSC(IInternetProtocolSink *,IInternetBindInfo *,CCdlProtocol *,int);
	virtual long GetBindInfo(unsigned long *,_tagBINDINFO *);
	virtual long GetPriority(long *);
	virtual long OnDataAvailable(unsigned long,unsigned long,tagFORMATETC *,tagSTGMEDIUM *);
	virtual long OnLowResource(unsigned long);
	virtual long OnObjectAvailable(_GUID const &,IUnknown *);
	virtual long OnProgress(unsigned long,unsigned long,unsigned long,unsigned short const *);
	virtual long OnStartBinding(unsigned long,IBinding *);
	virtual long OnStopBinding(long,unsigned short const *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long QueryService(_GUID const &,_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~CCodeDLBSC();
};

class CCodeDownload
{
	long CallUpdateAllowedDomainsListBroker(_GUID const &,unsigned short *,int);
	long UpdateAllowedDomainsList(_GUID const &,unsigned short *);
	long UpdateDependencyList(HKEY__ *,unsigned long *,unsigned short const * * *);
	long UpdateDistUnit(CLocalComponentInfo *);
	long UpdateFileList(HKEY__ *,unsigned long *,unsigned short const * * *,int * *);
	long UpdateLanguageCheck(CLocalComponentInfo *);
	void DestroyPCBHList(CList<CCodeBaseHold *,CCodeBaseHold *> *);
	void LogControlBlock(ControlLogging::CtrlLoggingEvent,bool,char const *);
public:
	CCodeDownload(unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned long,unsigned long,int,long *);
	char * GetCatalogFile();
	int FileProtectionCheckSucceeded(char const *);
	int GenerateErrStrings(long,char * *,unsigned short * *);
	int HaveManifest();
	int IsFileProtected(char const *);
	int IsSectionInINF(char const *);
	int NeedLatestVersion();
	int SetOnStack();
	int WeAreReadyToSetup();
	long AbortBinding(CClBinding *);
	long AcquireSetupCookie();
	long AddDistUnitList(unsigned short *);
	long CallDeleteFile(char const *);
	long CallExtractFilesBroker(char const *,SESSION *);
	long CallInstallCatalogFileBroker(unsigned short const *);
	long CallInstallFileBroker(HWND__ *,char const *,char const *,char const *,char const *,unsigned long);
	long CallRegisterDllFileBroker(char const *,int,int);
	long CallRegisterExeFileBroker(char const *,int,_PROCESS_INFORMATION *);
	long CallRemoveExtractedFilesAndDirs(SESSION *);
	long CallRunSetupCommandBroker(HWND__ *,char const *,char const *,char const *,char const *,void * *,unsigned long);
	long CallUpdateDistributionUnitBroker(CLocalComponentInfo *,unsigned short const *,long,char const *,unsigned long,unsigned short const * *,int *,unsigned long,unsigned short const * *);
	long CallUpdateLanguageCheckBroker(unsigned short const *,_FILETIME);
	long CallUpdateModuleUsageBroker(char const *,char const *,char const *,char const *,unsigned long);
	long CallVerifyTrustBroker(HWND__ *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned long,unsigned long,IInternetHostSecurityManager *,_COR_POLICY_PROVIDER *,CDownload *);
	long CreateClientBinding(CClBinding * *,IBindCtx *,IBindStatusCallback *,_GUID const &,unsigned long,void *,_GUID const &,int,IInternetHostSecurityManager *);
	long DelayRegisterOCX(char const *,FILEXTN,int);
	long DoCodeDownload(CLocalComponentInfo *,unsigned long);
	long ExtractInnerCAB(CDownload *,char *);
	long FindCABInDownloadList(unsigned short const *,CDownload *,CDownload * *);
	long FindDupCABInThread(IMoniker *,CDownload * *);
	long GetInfCodeLocation(char const *,char *,int);
	long GetInfSectionInfo(char *,int,char *,int,_GUID * *,unsigned long *,unsigned long *,DESTINATION_DIR *,unsigned long *,unsigned long *,int *,int *);
	long GetNextComponent(char *,char * *);
	long GetNextOnInternetSearchPath(_GUID const &,void * *,unsigned long *,unsigned short *,unsigned long,unsigned short * *,FILEXTN *);
	long GetRedirectToHKCU(char *,int *);
	long GetSatelliteName(char *,int);
	long HandleUnSafeAbort();
	long InitializeBroker(HWND__ *,unsigned short const *,unsigned short const *);
	long InstallOCX(char const *,FILEXTN,int,int);
	long IsDuplicateHook(char const *);
	long ParseOSD(char const *,char const *,CDownload *);
	long PiggybackDupRequest(IBindStatusCallback *,IBindCtx *,_GUID const &,unsigned long,void *,_GUID const &);
	long ProcessDependency(CDownload *,IXMLElement *);
	long ProcessHookSection(char const *,CDownload *);
	long ProcessHooks(CDownload *);
	long ProcessNativeCode(CDownload *,IXMLElement *);
	long QueueModuleUsage(char const *,long,int);
	long RegisterPEDll(char const *,int);
	long ResolveCacheDirNameConflicts();
	long SelfRegEXETimeout();
	long SetCatalogFile(char const *);
	long SetMainCABCorTrustPermissions(_COR_TRUST *);
	long SetManifest(FILEXTN,char const *);
	long SetUserDeclined();
	long SetWaitingForEXE(char const *,int);
	long SetupCODEUrl(unsigned short * *,FILEXTN *);
	long SetupInf(char const *,char *,CDownload *);
	long StartDownload(char *,CDownload *,char *,DESTINATION_DIR,char *,unsigned long,int,unsigned long,CList<CCodeBaseHold *,CCodeBaseHold *> *);
	long UpdateModuleUsage();
	static long AnyCodeDownloadsInThread();
	static long HandleDuplicateCodeDownloads(unsigned short const *,unsigned short const *,unsigned short const *,_GUID const &,unsigned short const *,unsigned long,void *,_GUID const &,IBindCtx *,IBindStatusCallback *,unsigned long,IInternetHostSecurityManager *);
	static long HasUserDeclined(unsigned short const *,unsigned short const *,unsigned short const *,IBindStatusCallback *,IInternetHostSecurityManager *);
	unsigned long Release();
	void AddDownloadToList(CDownload *);
	void CodeDownloadDebugOut(int,int,unsigned int,...);
	void CompleteAll(long,unsigned short const *);
	void CompleteOne(CDownload *,long,long,long,unsigned short const *);
	void DoSetup();
	void GetClientAsyncSecurityStatus(unsigned long *);
	void InitLastModifiedFromDistUnit();
	void NotifyControlDetails(unsigned short const *,unsigned short const *);
	void ProcessInf(CDownload *);
	void SetDebugLog(CDLDebugLog *);
	~CCodeDownload();
};

class CCompatCacheList
{
protected:
	virtual void Lock();
	virtual void Unlock();
public:
	bool FindNode(_GUID const *,unsigned long *,unsigned long *);
	long AddNode(_GUID const *,unsigned long,unsigned long);
	virtual ~CCompatCacheList();
};

class CContentAnalyzer
{
	bool CheckBinaryImageHeaders(bool);
	bool IsHlsManifest();
	bool IsPartialMimeType(unsigned short const *);
	int CheckBinaryHeaders(bool);
	int CheckImageMime(unsigned short const *,bool);
	int CheckTextHeaders(bool);
	int FindAppFromExt(unsigned short const *,char *,unsigned long);
	int FindAppFromProgID(char *,char *,char *,unsigned long);
	int IsBMP();
	int IsZipBasedFileExt(unsigned short const *);
	int MatchDWordAtOffset(unsigned long,unsigned int);
	static bool IsM3UPlaylistMimeType(unsigned short const *);
	static char const * FindNextLine(char const *);
	static int s_BinarySearchStringCompare(void const *,void const *);
	unsigned long GetDataFormat(unsigned short const *);
	void SampleData();
public:
	int FindMimeFromExt(unsigned short const *,unsigned long *);
	unsigned short const * FindMimeFromData(unsigned short const *,char *,int,unsigned short *,unsigned long,unsigned long *);
};

struct CCookie<CCodeDownload *>
{
	CCookie<CCodeDownload *>(unsigned long);
	long Acquire(CCodeDownload *);
	long TickleWaitList();
};

struct CCookie<CDownload *>
{
	CCookie<CDownload *>(unsigned long);
	long Acquire(CDownload *);
	long TickleWaitList();
};

class CDLDebugLog
{
	static CList<CDLDebugLog *,CDLDebugLog *> s_dlogList;
	static CMutexSem s_mxsDLogList;
	static CMutexSem s_mxsMessage;
	static char * s_szMessage;
	static int s_bMessage;
public:
	int Init(CCodeDownload *);
	int Init(unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *);
	int Release();
	static CDLDebugLog * GetDebugLog(unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *);
	static CDLDebugLog * MakeDebugLog();
	static char const * GetSavedMessage();
	static void AddDebugLog(CDLDebugLog *);
	static void RemoveDebugLog(CDLDebugLog *);
	void Clear();
	void DebugOut(int,int,unsigned int,...);
	void DebugOutPreFormatted(int,int,char *);
	void DumpDebugLog(char const *,long);
	void MakeFile();
};

class CDNTExceptionLocalCache
{
	struct CDNTExceptionLocalCacheEntry
	{
		~CDNTExceptionLocalCacheEntry();
	};

protected:
	int FindCacheEntry(unsigned short const *,int *,int &);
public:
	CDNTExceptionLocalCache();
	int Lookup(unsigned short const *,int *);
	void Add(unsigned short const *,int);
	void Flush();
	~CDNTExceptionLocalCache();
};

struct CDPA<tagSETTINGTEMPLATE>
{
	~CDPA<tagSETTINGTEMPLATE>();
};

struct CDPA<unsigned long>
{
	int SortedInsertPtr(unsigned long const *,int,int (*)(unsigned long const *,unsigned long const *,__int64),__int64,unsigned int,unsigned long const *);
};

struct CDPA_Base<_sBrowserModeFilterEntry>
{
	int Create(int);
};

struct CDSA<unsigned long>
{
	~CDSA<unsigned long>();
};

struct CDSA_Base<StringFilter>
{
	int Create(int);
};

struct CDXGIAdapterWrapper
{
	long GetDXGIAdapter(IDXGIAdapter * *);
	~CDXGIAdapterWrapper();
};

struct CDXHardwareDenyList
{
	static bool IsVersionMatch(sGraphicsCardDetails const &);
	static bool MatchVersion(sGraphicsCardDetails const &,_LARGE_INTEGER const &);
	static bool MatchVersionRange(sDriverVersion const &,sDriverVersion const &,_LARGE_INTEGER const &);
	static int GetGPUCacheIndex();
	static void GetVersionFile(unsigned short const *,_LARGE_INTEGER &);
	static void ResetGPUInfoInRegistry();
	static void SetDriverVersionInRegistry(_LARGE_INTEGER const &);
	static void SetGPUOnDenyList(bool const &);
	static void SetPnpIdInRegistry(unsigned long const &,unsigned long const &,unsigned long const &,unsigned long const &);
};

class CDialogActivateGuard
{
	unsigned __int64 _GetActivationDelay();
public:
	int AllowDialogCommand();
	void HandleNCActivate(unsigned __int64);
};

class CDisableTransitionBrowserModeFilter
{
	virtual int _IsUptoDate();
	virtual long _EnsureFilterIfNoDataFound();
	virtual long _GetCounterValue();
	virtual long _IncrementCounterValue();
protected:
	virtual long _DeleteData();
	virtual long _GetDataStream(unsigned long,IStream * *);
public:
	virtual long AddKeepInBrowserRule(IUri *);
	virtual long ShouldKeepInBrowser(IUri *,int *);
};

struct CDownload
{
	CDownload(unsigned short const *,FILEXTN,int,long *);
	int HasAllActiveXPermissions();
	int IsSignalled(CCodeDownload *);
	long Abort(CCodeDownload *);
	long AddHook(char const *,char const *,char const *,unsigned long);
	long AddParent(CCodeDownload *);
	long AddSetupToExistingCAB(char *,char const *,DESTINATION_DIR,unsigned long,int,unsigned long);
	long CleanupFiles(CCodeDownload *);
	long CompleteSignal(long,long,long,unsigned short const *);
	long DoDownload(IMoniker * *,unsigned long,CList<CCodeBaseHold *,CCodeBaseHold *> *);
	long DoSetup();
	long DownloadRedundantCodeBase();
	long ExtractManifest(FILEXTN,char *,unsigned int,char * &);
	long GetFriendlyName(char *,char * *);
	long IsDownloadedVersionRequired();
	long PerformVirusScan(char *);
	long ReleaseParent(CCodeDownload *);
	long SetURLAndExtn(unsigned short const *,FILEXTN);
	long SetUsingCdlProtocol(unsigned short *);
	long SniffType();
	void CleanUp();
	void ProcessPiece();
	void SetFileName(char *);
	void VerifyTrust();
	~CDownload();
};

struct CEasyClassFactory
{
	long CreateInstance(IUnknown *,_GUID const &,void * *);
	long LockServer(int);
	long QueryInterface(_GUID const &,void * *);
	unsigned long AddRef();
	unsigned long Release();
};

class CEnumFmtEtc
{
	int Initialize(unsigned int,tagFORMATETC *,unsigned int);
public:
	static CEnumFmtEtc * Create(unsigned int,tagFORMATETC *);
	virtual long Clone(IEnumFORMATETC * *);
	virtual long Next(unsigned long,tagFORMATETC *,unsigned long *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Reset();
	virtual long Skip(unsigned long);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CEnumString
{
	long AddString(unsigned short const *);
	virtual long Clone(IEnumString * *);
	virtual long Next(unsigned long,unsigned short * *,unsigned long *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Reset();
	virtual long Skip(unsigned long);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CExtensionValidationProxy
{
	long _SendCLSIDToBSC(IBindStatusCallback *,_GUID const &);
public:
	CExtensionValidationProxy(IBindCtx *);
	virtual long OnBeforeCoGetClassObject(_GUID const &);
};

struct CFeatureCache
{
	__int64 EnsureFeatureKeyGetFeaturesCache(_tagINTERNETFEATURELIST);
	bool IsFeatureEnabled(_tagINTERNETFEATURELIST);
	void SetFeatureEntry(_tagINTERNETFEATURELIST,bool);
};

struct CFeatureControlKey
{
	long _CoInternetFeatureValueInternal(unsigned long *);
	long _CoInternetIsFeatureEnabledInternal();
	long _CoInternetIsFeatureEnabledInternalEx(int);
};

class CFileDownload
{
	long Cleanup();
public:
	CFileDownload(IUnknown *,unsigned long,IBindStatusCallback *,unsigned short const *);
	virtual bool ShouldSetDownloadMode();
	virtual long GetBindInfo(unsigned long *,_tagBINDINFO *);
	virtual long GetFileHandle(void * *);
	virtual long GetFullFileName(unsigned short const * *);
	virtual long KickOffDownload(unsigned short const *);
	virtual long OnDataAvailable(unsigned long,unsigned long,tagFORMATETC *,tagSTGMEDIUM *);
	virtual long OnStopBinding(long,unsigned short const *);
	virtual void Neutralize();
};

class CFileInfoCache
{
	long _AllocFileInfoIfNeeded(EXT_FILEINFO * *,int);
	long _GetCachedFileInfo(unsigned short const *,EXT_FILEINFO * *,int *);
	long _GetModulePath(unsigned short const *,unsigned short *,unsigned long,int,tagENTRY_TYPE);
	long _InsertFileInfoIntoCache(unsigned short const *,EXT_FILEINFO *);
	static void s_DestroyCallback(EXT_FILEINFO *);
public:
	long GetFileInfoForEntry(unsigned short const *,EXT_FILEINFO * *,int,tagENTRY_TYPE,int);
	long Initialize(bool);
	static long s_CopyFileInfo(EXT_FILEINFO const &,EXT_FILEINFO *);
	~CFileInfoCache();
};

struct CFreeCUriPtr
{
	~CFreeCUriPtr();
};

struct CFreeThreadedObservers<IHttpProtocolListener,NtCoTaskMemAllocator>
{
	struct _Observers
	{
		void Release();
	};

	long AddObserver(IHttpProtocolListener *);
	long RemoveObserver(IHttpProtocolListener *);
};

class CHashTable<BLOCKLIST_ENTRY,unsigned short>
{
	static void s_DestroyCallback(unsigned char *,unsigned int,void *);
public:
	long ContainsKey(unsigned short const *);
	long GetPtr(unsigned short const *,BLOCKLIST_ENTRY * *);
};

class CHashTable<CACHE_ENTRY,unsigned short>
{
	static void s_DestroyCallback(unsigned char *,unsigned int,void *);
};

class CHashTable<EXT_FILEINFO,unsigned short>
{
	static void s_DestroyCallback(unsigned char *,unsigned int,void *);
};

class CHashTable<GROUP_ENTRY,unsigned short>
{
	static void s_DestroyCallback(unsigned char *,unsigned int,void *);
public:
	long ContainsKey(unsigned short const *);
};

class CHashTable<_GUID,unsigned short>
{
	static void s_DestroyCallback(unsigned char *,unsigned int,void *);
public:
	long AddPtr(unsigned short const *,_GUID *);
	long ContainsKey(unsigned short const *);
};

struct CHashTable<unsigned char,unsigned short>
{
	long AddPtr(unsigned short const *,unsigned char *);
	long ContainsKey(unsigned short const *);
};

class CHashTable<unsigned short,unsigned short>
{
	static void s_DestroyCallback(unsigned char *,unsigned int,void *);
};

class CHashTableA<DomainFilter>
{
	static void s_DestroyCallback(unsigned char *,unsigned int,void *);
};

class CHashTableEx<BLOCKLIST_ENTRY,_GUID,CCLSIDTrait>
{
	static void s_DestroyCallback(unsigned char *,unsigned int,void *);
};

class CHashTableFixedSizeKey<StringFilter,8>
{
	static void s_DestroyCallback(unsigned char *,unsigned int,void *);
};

class CHeaders
{
protected:
	virtual ~CHeaders();
	void Clear();
public:
	CHeaders();
	virtual long GetHeaders(unsigned long *,HttpHeader * *);
};

struct CHttpHeaderTokenizer
{
	bool NextToken(unsigned short const * *);
	unsigned short const * SkipWhiteSpaces(unsigned short const *);
};

struct CHttpNegotiate
{
	virtual long BeginningTransaction(unsigned short const *,unsigned short const *,unsigned long,unsigned short * *);
	virtual long OnResponse(unsigned long,unsigned short const *,unsigned short const *,unsigned short * *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CHttpProtocolListenerManager
{
	static CHttpProtocolListenerManager * s_pSingleton;
	static CMutexSem s_mxs;
	static unsigned long volatile s_dwNextUid;
	void _Release();
public:
	static CHttpProtocolListenerManager * GetInstance();
	static CHttpProtocolListenerManager * GetOrCreateInstance();
	static long RegisterListener(IHttpProtocolListener *,bool);
	static void ReleaseInstance(CHttpProtocolListenerManager *);
};

class CIEApplicationAssociation
{
	long ConnectAssociationBridge();
	long GetClsidFromMimeLegacy(unsigned short const *,_GUID *,int);
	long GetProgIDFromExtLegacy(unsigned short const *,unsigned short * *);
public:
	long GetClsidFromExt(unsigned short const *,_GUID *);
	long GetClsidFromMime(unsigned short const *,_GUID *,int);
	long GetProgIDFromExt(unsigned short const *,unsigned short * *);
	long GetProgIDFromMime(unsigned short const *,unsigned short * *);
	static long FMimeKeyExists(unsigned short const *);
	static long GetClsidFromProgID(unsigned short const *,_GUID *);
	static long GetExtFromMime(unsigned short const *,unsigned short * *);
	static long GetInstance(CIEApplicationAssociation * *);
	static long GetMimeFromExt(unsigned short const *,unsigned short * *);
	static void Delete(APPASSOC_RELEASE_OPTION);
};

class CIEBrowserModeFilter
{
	class CXMLParser
	{
		long startElement(IXmlReader *,int);
		static CXMLParser::sCVListSection const * const s_cvListSections;
		static bool IsValidCustomUAString(unsigned short const *);
		static void processVersionVector(unsigned short const * const,int,sCVListAttributesInCache *);
		void characters(IXmlReader *);
		void endActiveXCompatElement();
		void endAppStoreChildElement();
		void endElement(IXmlReader *);
		void endLayoutWidthChildElement();
		void endNewTabPageChildElement();
		void endOriginTrialElement(unsigned long);
		void endSectionChildElement(unsigned long);
		void matchGPU(bool *);
		void processAttributes(IXmlReader *);
		void processDocMode(unsigned short const * const,int,sCVListAttributesInCache *);
		void processDriverOS(unsigned short const * const,OS *);
		void processDriverVersion(unsigned short const * const,int,sDriverVersion *);
		void processEngine(unsigned short const * const);
		void processExclude(unsigned short const * const);
		void processFlashPlatformString(unsigned short const * const,int,__MIDL___MIDL_itf_browsermode_0000_0000_0015 *);
		void processGPU(IXmlReader *);
		void processPnpId(unsigned short const * const,unsigned long *);
		void processTextScaling(unsigned short const * const,int,sCVListAttributesInCache *);
		void processUaString(unsigned short const * const,sCVListAttributesInCache *,bool);
	public:
		CXMLParser(CIEBrowserModeFilter * const);
		long ParseCVList(unsigned short const * const,int,int);
		static unsigned short const * GetSectionToken(unsigned long);
		~CXMLParser();
	};

	CIEBrowserModeFilter();
	bool CallElevationBrokerIfAppropriate(long *,_BROWSERBROKER_CVLISTACTION);
	bool GetPathCVAttributes(IUri *,unsigned short const *,unsigned short *,unsigned __int64,sCVListAttributesInCache *);
	bool MustUpgradeCacheContainers();
	bool isCacheVersionCurrent();
	long EnumPaths<ACTIVEX_RULE_STATE>(IUri *,unsigned short const *,unsigned short *,unsigned __int64,long (*const)(CIEBrowserModeFilter * const,IUri *,unsigned short const *,unsigned short const *,CIEBrowserModeFilter::ACTIVEX_RULE_STATE *),CIEBrowserModeFilter::ACTIVEX_RULE_STATE *);
	long EnumPaths<sCVListAttributesInCache>(IUri *,unsigned short const *,unsigned short *,unsigned __int64,long (*const)(CIEBrowserModeFilter * const,IUri *,unsigned short const *,unsigned short const *,sCVListAttributesInCache *),sCVListAttributesInCache *);
	long GetActiveXCompatCacheKey(unsigned short const *,unsigned short const *,_GUID *,unsigned short *,unsigned __int64);
	long GetActiveXRuleFromCacheKey(unsigned short *,__MIDL___MIDL_itf_browsermode_0000_0000_0014 * const);
	long GetCVListCacheKey(unsigned short const *,unsigned short const *,unsigned short const *,unsigned short *,unsigned __int64);
	long GetCVListEntryFromCacheKey<sAppStoreCVListEntry>(unsigned short *,sAppStoreCVListEntry * const);
	long GetCVListEntryFromCacheKey<sCVListEntry>(unsigned short *,sCVListEntry * const);
	long GetCVListEntryFromCacheKey<sLayoutWidthCVListEntry>(unsigned short *,sLayoutWidthCVListEntry * const);
	long GetCVListEntryFromCacheKey<sNewTabPageCVListEntry>(unsigned short *,sNewTabPageCVListEntry * const);
	long GetCVListEntryFromCacheKey<sUaCacheEntry>(unsigned short *,sUaCacheEntry * const);
	long GetGlobalActiveXCompatRule(_GUID *,__MIDL___MIDL_itf_browsermode_0000_0000_0014 *);
	long GetIsFeatureEnabledGlobally(unsigned long,int *);
	long GetUAStringCacheKey(unsigned short const *,unsigned short *,unsigned __int64);
	long GetXMLPath(unsigned short *,unsigned __int64);
	long _GetCVSectionBehaviorAllowedIfEntryFound(IUri * const,unsigned long,int * const);
	long addActiveXCacheEntry(sActiveXCompatRuleData *);
	long addAppStoreCVListEntry(unsigned short const *,unsigned short const *,int,int,unsigned short const *);
	long addCVListEntry(unsigned short const *,unsigned short const *,unsigned short const *,int,int);
	long addCacheEntry(unsigned short const *,unsigned short const *,CVListEngine,sCVListAttributesInCache const *,CPathList const *);
	long addLayoutWidthCVListEntry(unsigned short const *,unsigned short const *,int,int,unsigned int);
	long addNewTabPageCVListEntry(unsigned short const *,unsigned short const *,int,int,unsigned int);
	long addUaCacheEntry(int,unsigned short const *,unsigned short const *,unsigned short const *);
	long createCacheContainer(FilePathStore::BROWSERPROFILEDATA_FILEPATHID,unsigned short const *,unsigned short const *,unsigned short const *);
	long deleteOldCacheEntries(bool);
	long enumerateCacheEntries(unsigned short const *,bool,void *,long (*)(void *,_INTERNET_CACHE_ENTRY_INFOW *));
	long initializeUrlCache();
	long loadNewVersionXML();
	long lock();
	long readCacheVersionFromRegistry(unsigned long *,unsigned long *);
	long reloadVersionXML();
	long updateCacheVersionInRegistry(unsigned long,unsigned long);
	static long CollectF12UserAgentStringsCallback(void *,_INTERNET_CACHE_ENTRY_INFOW *);
	static long GetActiveXCompatRuleForDomainAndPath(CIEBrowserModeFilter * const,IUri *,unsigned short const *,unsigned short const *,CIEBrowserModeFilter::ACTIVEX_RULE_STATE *);
	static long GetActiveXCompatRuleOnPathsCallback(CIEBrowserModeFilter * const,IUri *,unsigned short const *,unsigned short const *,CIEBrowserModeFilter::ACTIVEX_RULE_STATE *);
	static long GetCacheEntry(unsigned short const *,_INTERNET_CACHE_ENTRY_INFOW * *,unsigned long * const);
	static long GetDomainEmulationStateCallback(CIEBrowserModeFilter * const,IUri *,unsigned short const *,unsigned short const *,CIEBrowserModeFilter::DOMAIN_EMULATION_STATE *);
	static long GetPathCVAttributesCallback(CIEBrowserModeFilter * const,IUri *,unsigned short const *,unsigned short const *,sCVListAttributesInCache *);
	static long GetSectionCVEntryForDomainAndPathCallback<sAppStoreCVListEntry>(CIEBrowserModeFilter * const,IUri *,unsigned short const *,unsigned short const *,sAppStoreCVListEntry *);
	static long GetSectionCVEntryForDomainAndPathCallback<sCVListEntry>(CIEBrowserModeFilter * const,IUri *,unsigned short const *,unsigned short const *,sCVListEntry *);
	static long GetSectionCVEntryForDomainAndPathCallback<sLayoutWidthCVListEntry>(CIEBrowserModeFilter * const,IUri *,unsigned short const *,unsigned short const *,sLayoutWidthCVListEntry *);
	static long GetSectionCVEntryForDomainAndPathCallback<sNewTabPageCVListEntry>(CIEBrowserModeFilter * const,IUri *,unsigned short const *,unsigned short const *,sNewTabPageCVListEntry *);
	static long collectCacheEntryInfoCallback(void *,_INTERNET_CACHE_ENTRY_INFOW *);
	static long convertPlatformToken(unsigned short const *,int,unsigned short *,int);
	static long copyAttributesToEmulationState(unsigned short *,unsigned long,__MIDL___MIDL_itf_browsermode_0000_0000_0010 *);
	static long deleteOldCacheEntryCallback(void *,_INTERNET_CACHE_ENTRY_INFOW *);
	virtual long Init();
	void setXMLVersion(unsigned long,unsigned long);
public:
	static __MIDL___MIDL_itf_browsermode_0000_0000_0012 GetCompatDataIndex();
	static bool NoCVListAttributeSet(__MIDL___MIDL_itf_browsermode_0000_0000_0010 const &);
	static bool NoXMLAttributeSet(sCVListAttributesInCache const &);
	static long CreateInstance(CIEBrowserModeFilter * *);
	static unsigned short const * GetEngineTokenFromEnum(CVListEngine);
	virtual long CheckForAppRecommendationServiceRedirect(IUri *,int *,unsigned short * *);
	virtual long CleanupOldCacheEntries();
	virtual long GetActiveXCompatRule(IUri *,_GUID *,__MIDL___MIDL_itf_browsermode_0000_0000_0014 *);
	virtual long GetAllowSSL3Fallback(IUri *,int *);
	virtual long GetBFCacheCVAllowed(IUri *,int *);
	virtual long GetBrowserEmulationData(unsigned short * *);
	virtual long GetBrowserTransitionPolicy(IUri *,int *);
	virtual long GetCVListUrl(unsigned short * *);
	virtual long GetCustomUaString(unsigned short const *,unsigned short *,unsigned long);
	virtual long GetDomainEmulationState(IUri *,int *,__MIDL___MIDL_itf_browsermode_0000_0000_0011 *);
	virtual long GetEPMCVRestricted(IUri *,int *);
	virtual long GetEPMNotificationsCVRestricted(IUri *,int *);
	virtual long GetEnableUTF8QueryString(IUri *,int *);
	virtual long GetEnabledSandboxNeutral(IUri *,int *);
	virtual long GetExecCommandPasteAllowed(IUri *,int *);
	virtual long GetF12UserAgentStrings(__MIDL___MIDL_itf_browsermode_0000_0000_0009 * *,unsigned long *);
	virtual long GetMinLayoutWidth(IUri *,unsigned int *);
	virtual long GetNewTabPageOccurrence(IUri *,unsigned int *);
	virtual long GetPointerDisabled(IUri *,int *);
	virtual long GetServiceWorkersCVAllowed(IUri *,int *);
	virtual long GetSiteRequiresVBScript(IUri *,int *);
	virtual long GetTFOCVAllowed(IUri *,int *);
	virtual long IsSameSiteCookiesEnabled(int *);
	virtual long RefreshBrowserModeFilter();
	virtual long ResetBrowserModeFilter();
	virtual long ResetBrowserModeFilterForGPUOnly();
	virtual ~CIEBrowserModeFilter();
};

class CIEEnterpriseModeFilter
{
	long _Init(bool);
	static bool _s_HasAllowedSitelistScheme(IUri *);
	static bool _s_HasExplicitPort(IUri *);
	static long _s_BuildCacheKey(unsigned short const *,unsigned short const *,unsigned short const *,unsigned long * const,unsigned short const *,unsigned short *,unsigned __int64);
	static long _s_CommitToCache<SEMIEConfigurationData>(unsigned short const *,unsigned short const *,unsigned short const *,unsigned long * const,unsigned short const *,SEMIEConfigurationData const *);
	static long _s_CommitToCache<SSiteListEntry>(unsigned short const *,unsigned short const *,unsigned short const *,unsigned long * const,unsigned short const *,SSiteListEntry const *);
	static long _s_CommitToCache<bool>(unsigned short const *,unsigned short const *,unsigned short const *,unsigned long * const,unsigned short const *,bool const *);
	static long _s_ConvertOldSchemaToNew(IXMLDOMDocument *,IXMLDOMDocument * *);
	static long _s_CreateXMLDOMDocument(IXMLDOMDocument * *);
	static long _s_EnumSubDomainsCallback(CIEEnterpriseModeFilter * const,IUri *,unsigned short const *,unsigned short const *,SSiteListEntry *);
	static long _s_EnumerateCacheContainer(SCacheContainerMetaData const *,void *,void (*)(void *,_URLCACHE_ENTRY_INFO const *));
	static long _s_FindUserListEntryForUrl(unsigned short const *,unsigned long * const,unsigned short const *,bool *);
	static long _s_ForEachElementByName(IXMLDOMNode *,unsigned short const *,long (*const)(IXMLDOMNode *,unsigned short const *,unsigned long * const),unsigned short const *,unsigned long * const);
	static long _s_GetAttributeByName(IXMLDOMNode *,unsigned short const *,unsigned short * *);
	static long _s_GetBrowserEmulationData(SCacheContainerMetaData const *,unsigned short * *);
	static long _s_GetCacheForUrl<SEMIEConfigurationData>(unsigned short const *,unsigned short const *,unsigned short const *,unsigned long * const,unsigned short const *,SEMIEConfigurationData *);
	static long _s_GetCacheForUrl<SSiteListEntry>(unsigned short const *,unsigned short const *,unsigned short const *,unsigned long * const,unsigned short const *,SSiteListEntry *);
	static long _s_GetCacheForUrl<bool>(unsigned short const *,unsigned short const *,unsigned short const *,unsigned long * const,unsigned short const *,bool *);
	static long _s_GetChildByName(IXMLDOMNode *,unsigned short const *,IXMLDOMNode * *);
	static long _s_GetTextContent(IXMLDOMNode *,unsigned short * *);
	static long _s_InitializeCacheContainer(SCacheContainerMetaData const *);
	static long _s_LoadXMLDOMDocument(IXMLDOMDocument *,unsigned short const *);
	static long _s_LoadXSLConverterDocument(IXMLDOMDocument *);
	static long _s_ParseSiteCallback(IXMLDOMNode *,unsigned short const *,unsigned long * const);
	static long _s_ProcessSiteSettings(IXMLDOMNode *,unsigned short const *,unsigned short const *,unsigned long * const,unsigned short const *);
	static long _s_SetSecondLevelProperty(IXMLDOMDocument2 *,unsigned short const *,bool);
	static long _s_ValidateCallContext(IUri *,bool,bool *,unsigned short * *,unsigned long *,unsigned short * *);
	static void _s_CollectCacheEntryInfoCallback(void *,_URLCACHE_ENTRY_INFO const *);
	static void _s_ConvertCompatModeToSiteListEntry(unsigned short const *,__MIDL___MIDL_itf_browsermode_0000_0000_0002 *,bool *);
	static void _s_DeleteOldCacheEntryCallback(void *,_URLCACHE_ENTRY_INFO const *);
public:
	static long CreateInstance(bool,CIEEnterpriseModeFilter * *);
	virtual long ClearSiteList();
	virtual long ClearUserList();
	virtual long EditUriOnUserList(IUri *,int);
	virtual long GetBrowserEmulationData(unsigned short * *);
	virtual long GetBrowserEmulationLocalData(unsigned short * *);
	virtual long GetEMIEDataConfiguration(unsigned short * *);
	virtual long GetTargetBrowserPolicy(IUri *,int *,int *,__MIDL___MIDL_itf_browsermode_0000_0003_0001 *);
	virtual long GetTargetEnginePolicy(IUri *,int *,int *,int *,__MIDL___MIDL_itf_browsermode_0000_0003_0001 *);
	virtual long GetUriBrowserEmulationMode(IUri *,__MIDL___MIDL_itf_browsermode_0000_0000_0002 *);
	virtual long IsCachePopulated(int *);
	virtual long IsExactUriOnEMIESiteList(IUri *,int *);
	virtual long IsUriInEMIEOrCompatView(IUri *,int *,int *,int *);
	virtual long ResetBrowserModeFilter(unsigned short const *);
};

class CIERegistryHelper
{
protected:
	static long _SetSingleValue(unsigned long,unsigned char *,unsigned long,int);
public:
	static long SetSingleValue(unsigned long,unsigned char *,unsigned long,CIERegistryHelper::_CallType);
};

class CINet
{
	struct CPrivUnknown
	{
		virtual long QueryInterface(_GUID const &,void * *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
	};

	int HasDomainNameInFileUri(IUri *);
	long CheckRedirectSecurity(IUri *,unsigned short const *,unsigned short const *,int *);
	long GetTransactionInternal(bool,ITransactionInternal * *);
	long SetNullOrigin();
	static bool s_IsSameOrigin(IUri *,unsigned short const *);
	void RefreshSingleSignOnCookiesIfNeeded();
protected:
	IInternetBindInfo * GetRefCountedBindInfo(bool);
	IInternetProtocolSink * GetRefCountedSink();
	IInternetProtocolSink * GetRefCountedSinkNoLock();
	INetState SetINetState(INetState);
	bool IsInsecureSSL3FallbackDisabled();
	char * FindTagInHeader(char const *,char const *);
	int GetPreviouslySubmittedCredential(unsigned short * *);
	int IsBasicAuth(int);
	int IsDNTException(IUri *);
	int IsDownloading64BitEnabled(IInternetBindInfo *);
	int IsUTF8EnabledForQuery(IUri *);
	int IsUpLoad();
	int UTF8Enabled();
	long CheckAuthHeaders(bool *);
	long CheckIAuthenticate(unsigned short * *,unsigned short * *);
	long GetStatePending(CINet::ePendingStateReason *);
	long GetUrlCacheFilename(unsigned short *,unsigned long);
	long HandleContentFromProxy();
	long INetAsyncStart();
	long INetAuthenticate();
	long INetDataAvailable();
	long INetDisplayUI();
	long INetQueryInfo();
	long INetRead();
	long INetReadDirect();
	long INetReportAvailableData();
	long INetResumeAsyncRequest(unsigned long);
	long OnCookieNotification(unsigned long,void *);
	long OnINetDataAvailable(unsigned long);
	long OnINetSendRequest(unsigned long,bool);
	long OnINetSuspendSendRequest(unsigned long,void *);
	long OnRedirect(char *);
	long OnRedirect(unsigned short const *);
	long QueryInfoOnResponse();
	long QueryService(_GUID const &,void * *);
	long ReadDataHere(unsigned char *,unsigned long,unsigned long *);
	long ReadDirect(unsigned char *,unsigned long,unsigned long *);
	long ReportDataToProtocolSink(unsigned long,unsigned __int64,unsigned __int64);
	long ReportNotification(tagBINDSTATUS,char const *);
	long ReportNotificationW(tagBINDSTATUS,unsigned short const *);
	long ResetRedirectURLW(unsigned short const *);
	long SetRedirectUri();
	long SetStatePending(long,CINet::ePendingStateReason,int);
	long SetUriAndAbsoluteUrl(IUri *);
	long TrackingProtectionCheckUri(IUri *);
	static bool IsThirdPartyFromBaseUrl(unsigned short const *,unsigned short const *);
	static bool s_fEnableHTTP2;
	static unsigned short * RedirectA2W(char const *);
	static void CINetCallback(void *,unsigned __int64,unsigned long,void *,unsigned long);
	unsigned __int64 GetMaxResponseBodySize();
	unsigned long CheckIAuthenticateHostUI(HWND__ *);
	unsigned long GetByteCountReadyToRead();
	unsigned long GetUTF8QueryState();
	unsigned short * GetRootDocUrlString(IInternetBindInfo *);
	unsigned short * GetUserAgentString(IInternetBindInfo *);
	unsigned short const * GetAadSingleSignOnLoginUrls();
	unsigned short const * GetSingleSignOnLoginUrl();
	virtual bool IsAppCacheFallbackRedirect();
	virtual bool IsDelayed();
	virtual bool IsHandleBasedDownloadMode();
	virtual bool IsInsecureSSL3FallbackAllowedForUri(IUri *);
	virtual bool IsThirdPartyUri(IUri *);
	virtual bool IsThirdPartyUrl(unsigned short const *);
	virtual int HttpsTunnelEstablished();
	virtual long AuthenticationRequest();
	virtual long CallGetBindInfo(IInternetBindInfo *);
	virtual long INetAsyncConnect();
	virtual long INetAsyncOpen();
	virtual long INetAsyncOpenRequest();
	virtual long INetAsyncSendRequest();
	virtual long INetSeek(_LARGE_INTEGER,unsigned long,_ULARGE_INTEGER *);
	virtual long INetWrite();
	virtual long LockFile(int);
	virtual long LookupAndSetAppCacheHandle(unsigned short const *);
	virtual long OnRequestSent(unsigned long,void *,unsigned long);
	virtual long QueryClientCertOnPost();
	virtual long QueryHeaderOnResponse();
	virtual long QueryStatusOnResponse();
	virtual long QueryStatusOnResponseDefault(unsigned long);
	virtual long RedirectRequest(unsigned long);
	virtual long ReportDataHelper(IInternetProtocolSink *,unsigned long,unsigned long,unsigned long);
	virtual long ReportProgressHelper(IInternetProtocolSink *,unsigned long,unsigned short const *);
	virtual long ReportResultAndStop(long,unsigned __int64,unsigned __int64,unsigned short *);
	virtual long ReportResultHelper(IInternetProtocolSink *,long,unsigned long,unsigned short const *);
	virtual long SetBindResult(unsigned long,long);
	virtual long SetWinInetHttpTimeouts(IInternetBindInfo *);
	virtual long UnlockFile();
	virtual long UpdateDownloadMode();
	virtual unsigned short const * GetObjectNameW();
	virtual void AddRefWinInet(void *);
	virtual void DelayMessagesIntoQueue();
	virtual void DeleteQueueWithoutSending();
	virtual void EvaluateAndSetHTTP2Restrictions();
	virtual void LastRequestHandleClosed();
	virtual void OnTerminateCalled();
	virtual void ReleaseRefWinInet(void *);
	virtual void SendQueueAndDisableDelay();
	virtual void SetDualEngineConfigurableSiteRequestHeader(bool);
	virtual void SetEnterpriseId();
	virtual void SetOptionsForUnicodeUrl();
	virtual void SetP2PRedirectionState();
	virtual void TerminateRequest();
	virtual void UpdateEDUPolicyHeader(unsigned short const *);
	virtual void UpdateSameSiteCookiePolicyForRedirection(unsigned short const *,int);
	virtual void UpdateUserAgentOnRedirect(unsigned short const *);
	void AllocUserNameAndPassword(unsigned short * *,unsigned short * *);
	void EnableSingleSignOnIfNeeded();
	void EvaluateAndSetHSTSRestrictionsOnRedirect(unsigned short const *);
	void EvaluateAndSetHTTP2RestrictionsOnRedirect(unsigned short const *);
	void EvaluateInsecureSSL3FallbackRedirect(unsigned short const *);
	void GetBindstringCreds(IInternetBindInfo *);
	void GetOrigin(unsigned short * *);
	void OnINetConnect(unsigned __int64);
	void OnINetInternal(unsigned __int64);
	void OnINetOpenRequest(unsigned __int64);
	void RedirectProtectedModeURLIfNecessary();
	void ReleaseCNetObjects(bool);
	void SetByteCountReadyToRead(long);
	void SetIPAddress();
	void SetServiceProvider(IServiceProvider *);
	void TransitState(unsigned long,int);
	void UpdateDualEngineConfigurableState(IUri *);
	void UpdateDualEngineConfigurableState(unsigned short const *);
public:
	CINet(_GUID const &,IUnknown *);
	long SetTimeoutsOnHandle(void *,unsigned long,int,unsigned long,int,unsigned long,int);
	long StartCommon(IUri *,IInternetProtocolSink *,IInternetBindInfo *,unsigned long,unsigned __int64);
	static unsigned long InternetAuthNotifyCallback(unsigned __int64,unsigned long,void *);
	virtual long Abort(long,unsigned long);
	virtual long ApplySetting(TRANSPORT_SETTING_ID const *,unsigned long,unsigned char const *,unsigned long *,unsigned char * *);
	virtual long CompleteDelivery();
	virtual long Continue();
	virtual long Continue(_tagPROTOCOLDATA *);
	virtual long DeleteCacheEntryOnRequestHandleClosing(unsigned short const *);
	virtual long DeletePartialFileOnRequestHandleClosing();
	virtual long DisallowPrematureEOF(int);
	virtual long DownloadToDestinationPath(unsigned short const *);
	virtual long EnablePreBinding(int);
	virtual long Flush();
	virtual long GetBindHandle(__MIDL_IGetBindHandle_0001,void * *);
	virtual long GetFirewallError(unsigned long *);
	virtual long GetIPAddress(tagSAFEARRAY * *);
	virtual long GetPriority(long *);
	virtual long GetProxyInfo(int *,unsigned short * *,unsigned long *);
	virtual long HasSecurityFailure(int *);
	virtual long IsAppCacheLookupAllowed(int *);
	virtual long IsCanceledByWebRequest(int *);
	virtual long IsDownloadModeEnabled(int *);
	virtual long IsHSTSRedirectRequest(int *);
	virtual long LockRequest(unsigned long);
	virtual long NotifyInternalOnRequestHandleClosing(INotifyInternal *);
	virtual long NotifyOnRequestHandleClosing(_GUID const &);
	virtual long OnStreamDataAvailable();
	virtual long Prepare();
	virtual long QueryInfo(unsigned long,void *,unsigned long *,unsigned long *,unsigned long *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long QueryOption(unsigned long,void *,unsigned long *);
	virtual long QuerySetting(TRANSPORT_SETTING_ID const *,unsigned long,unsigned char const *,unsigned long *,unsigned char * *);
	virtual long Read(void *,unsigned long,unsigned long *);
	virtual long Resume();
	virtual long ResumeMainBinding();
	virtual long Seek(_LARGE_INTEGER,unsigned long,_ULARGE_INTEGER *);
	virtual long SetCacheExtension(unsigned short const *,void *,unsigned long *,unsigned long *,unsigned long *);
	virtual long SetCacheExtension2(unsigned short const *,unsigned short *,unsigned long *,unsigned long *,unsigned long *);
	virtual long SetDownloadPriorityInfo(__MIDL___MIDL_itf_urlmonp_0000_0026_0001,__MIDL___MIDL_itf_urlmonp_0000_0026_0002,__MIDL___MIDL_itf_urlmonp_0000_0026_0003,__MIDL___MIDL_itf_urlmonp_0000_0026_0004,long);
	virtual long SetPriority(long);
	virtual long Start(unsigned short const *,IInternetProtocolSink *,IInternetBindInfo *,unsigned long,unsigned __int64);
	virtual long StartEx(IUri *,IInternetProtocolSink *,IInternetBindInfo *,unsigned long,unsigned __int64);
	virtual long Suspend();
	virtual long Terminate(unsigned long);
	virtual long UnlockRequest();
	virtual long UpdateNetworkTimeout(unsigned __int64,int,unsigned __int64,int,unsigned __int64,int);
	virtual long WasRequestToProxy();
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~CINet();
	void SetTransportTimeoutsAndMaxConnections();
};

class CINetEdge
{
	struct CAutoStateLock
	{
		bool AcquireLock();
		~CAutoStateLock();
	};

	struct CPrivUnknown
	{
		virtual long QueryInterface(_GUID const &,void * *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
	};

	bool GetWindowForErrorDlg(HWND__ * *,char const *,unsigned long,IWebPlatformAsyncHost * *);
	bool IsLastFiredWebRequestEventFinal();
	bool IsWindowForErrorDlgNeeded();
	bool ShouldFireRequestEvent(__MIDL___MIDL_itf_webrequest_0000_0000_0002);
	long CheckRedirectSecurity(IUri *,unsigned short const *,unsigned short const *,int *);
	long GetAsyncHost(IWebPlatformAsyncHost * *);
	long GetTransactionInternal(bool,ITransactionInternal * *);
	long SetNullOrigin();
	static bool s_IsSameOrigin(IUri *,unsigned short const *);
	static unsigned long s_MapBindFlagToOpenFlag(unsigned long,unsigned long);
	virtual void ReportTokenBinding();
	void RefreshSingleSignOnCookiesIfNeeded();
	void ReportInternetStatusTimestamp(unsigned long);
protected:
	IInternetBindInfo * GetRefCountedBindInfo(bool);
	IInternetProtocolSink * GetRefCountedSink();
	IInternetProtocolSink * GetRefCountedSinkNoLock();
	INetEdgeStateTransition AcquireLocalStateLock();
	INetEdgeStateTransition CheckAndSetINetEdgeState(INetEdgeState);
	INetEdgeStateTransition ReleaseLocalStateLock();
	INetState SetINetState(INetState);
	IServiceProvider * GetRefCountedServiceProvider();
	bool GetWindowForErrorDlgIfNeeded(HWND__ * *,char const *,unsigned long,IWebPlatformAsyncHost * *);
	bool IsAbortInProgress();
	bool IsAbortPending();
	bool IsAbortSafeOrLeafNodeState(INetEdgeState);
	bool IsAllowedStateForLoop(INetEdgeState);
	bool IsFetchModeClient();
	bool IsHTTP2EnabledForProcess();
	bool IsLocalStateLockHeld();
	bool IsRequestLocked();
	bool IsTerminated();
	bool IsTerminatedOrTerminationInProgress();
	bool IsTerminationInProgress();
	bool SetAndContinueAbort(long);
	bool ShouldAvoidLocking();
	bool const IsDone();
	int GetPreviouslySubmittedCredential(unsigned short * *);
	int IsApartmentThread();
	int IsBasicAuth(int);
	int IsDNTException(IUri *);
	int IsDownloading64BitEnabled(IInternetBindInfo *);
	int IsUpLoad();
	int UTF8Enabled();
	long CaptureWebRequestEventProperties();
	long CheckAuthHeaders(bool *);
	long CheckIAuthenticate(unsigned short * *,unsigned short * *);
	long CheckTransitionStatusAndDispatchAbort(INetEdgeStateTransition,long);
	long DoTerminate(unsigned long);
	long FireAsyncEvent(WebRequestEventDetailsGeneralProperties *,IWebRequestEventDetailsOptionalProperties *);
	long FireAuthRequiredWebRequestEvent(bool,unsigned short * *,unsigned short * *);
	long FireBeforeRedirectWebRequestEvent(unsigned short const *,unsigned short const *);
	long FireBeforeRequestWebRequestEvent(bool);
	long FireResponseStartedWebRequestEvent();
	long FireSyncEvent(WebRequestEventDetailsGeneralProperties *,IWebRequestEventDetailsOptionalProperties *,IWebRequestBlockingResponse * *,bool);
	long ForceRedirect(unsigned short const *);
	long GetRequestTimeout(IInternetBindInfo *,unsigned long *);
	long GetStatePending(CINetEdge::ePendingStateReason *);
	long GetStringInternalBindOption(unsigned long,unsigned short * *);
	long GetTTypeInternalBindOption<_GUID>(unsigned long,_GUID *);
	long GetTTypeInternalBindOption<bool>(unsigned long,bool *);
	long GetTTypeInternalBindOption<unsigned long>(unsigned long,unsigned long *);
	long GetUrlCacheFilename(unsigned short *,unsigned long);
	long HandleBeforeRequestWebRequestEventResponse(IWebRequestBlockingResponse *);
	long HandleContentFromProxy();
	long INetAsyncStart();
	long INetAuthenticate();
	long INetDataAvailable();
	long INetDisplayUI();
	long INetQueryInfo();
	long INetRead();
	long INetReadDirect();
	long INetReportAvailableData();
	long INetResumeAsyncRequest(unsigned long);
	long OnCookieNotification(unsigned long,void *);
	long OnFireAuthRequiredWebRequestEventCallback(long,unsigned short *,unsigned short *);
	long OnINetAuthenticate(unsigned long);
	long OnINetDataAvailable(unsigned long);
	long OnINetRead(unsigned __int64);
	long OnINetReadDirect(unsigned long);
	long OnINetSendRequest(unsigned long,bool);
	long OnINetSuspendSendRequest(unsigned long,void *);
	long OnRedirect(char *);
	long OnRedirect(unsigned short const *);
	long QueryInfoOnResponse();
	long QueryService(_GUID const &,void * *);
	long ReadDataHere(unsigned char *,unsigned long,unsigned long *);
	long ReadDirect(unsigned char *,unsigned long,unsigned long *);
	long ReportDataToProtocolSink(unsigned long,unsigned __int64,unsigned __int64);
	long ReportNotification(tagBINDSTATUS,char const *);
	long ReportNotificationW(tagBINDSTATUS,unsigned short const *);
	long ResetRedirectURLW(unsigned short const *);
	long SetRedirectUri();
	long SetStatePending(long,CINetEdge::ePendingStateReason,int);
	long SetUriAndAbsoluteUrl(IUri *);
	long WebRequestBlockingResponseReceivedWorker();
	static __MIDL___MIDL_itf_webrequest_0000_0000_0001 DownloadContextToWebRequestEventType(tagDOWNLOADINITIATORINFO const &);
	static bool s_IsInsecureSSL3FallbackDisabled();
	static bool s_fEnableHTTP2;
	static int s_IsUTF8EnabledForQuery(IUri *);
	static unsigned long WebRequestBlockingResponseReceivedTrampoline(void *);
	static unsigned short * RedirectA2W(char const *);
	static void CINetCallback(void *,unsigned __int64,unsigned long,void *,unsigned long);
	unsigned __int64 GetMaxResponseBodySize();
	unsigned long CheckIAuthenticateHostUI(HWND__ *);
	unsigned long GetByteCountReadyToRead();
	unsigned short * GetUserAgentString(IInternetBindInfo *);
	unsigned short GetPort();
	unsigned short const * GetAadSingleSignOnLoginUrls();
	unsigned short const * GetSingleSignOnLoginUrl();
	virtual __MIDL___MIDL_itf_urlmonp_0000_0026_0001 GetDownloadPriorityType();
	virtual bool IsAppCacheFallbackRedirect();
	virtual bool IsHandleBasedDownloadMode();
	virtual bool IsInWebRequestCompletedState(long);
	virtual bool IsInsecureSSL3FallbackAllowedForUri(IUri *);
	virtual bool IsPostToPostRedirected();
	virtual bool IsRedirecting();
	virtual bool IsThirdPartyUri(IUri *);
	virtual bool IsThirdPartyUrl(unsigned short const *);
	virtual int HttpsTunnelEstablished();
	virtual long AuthenticationRequest();
	virtual long CallGetBindInfo(IInternetBindInfo *);
	virtual long ContinueAbort(long,unsigned long);
	virtual long FireBeforeSendHeadersWebRequestEvent();
	virtual long FireHeadersReceivedWebRequestEvent();
	virtual long FireResultWebRequestEvent(long,unsigned short const *);
	virtual long FireSendHeadersWebRequestEvent();
	virtual long INetAsyncConnect();
	virtual long INetAsyncOpen();
	virtual long INetAsyncOpenRequest();
	virtual long INetAsyncSendRequest();
	virtual long INetSeek(_LARGE_INTEGER,unsigned long,_ULARGE_INTEGER *);
	virtual long INetWrite();
	virtual long LockFile(int);
	virtual long LookupAndSetAppCacheHandle(unsigned short const *);
	virtual long OnFireBeforeRequestWebRequestEventCallback(long,void *,unsigned long,bool);
	virtual long OnRequestSent(unsigned long,void *,unsigned long);
	virtual long QueryClientCertOnPost();
	virtual long QueryHeaderOnResponse();
	virtual long QueryStatusOnResponse();
	virtual long QueryStatusOnResponseDefault();
	virtual long RedirectRequest(unsigned short const *);
	virtual long ReportDataHelper(IInternetProtocolSink *,unsigned long,unsigned long,unsigned long);
	virtual long ReportProgressHelper(IInternetProtocolSink *,unsigned long,unsigned short const *);
	virtual long ReportResultAndStop(long,unsigned __int64,unsigned __int64,unsigned short const *);
	virtual long ReportResultHelper(IInternetProtocolSink *,long,unsigned long,unsigned short const *);
	virtual long SetBindResult(unsigned long,long);
	virtual long SetStatusCode(unsigned long,unsigned short const *);
	virtual long SetWinInetHttpTimeouts(IInternetBindInfo *);
	virtual long UnlockFile();
	virtual long UpdateDownloadMode();
	virtual unsigned long GetStatusCode();
	virtual unsigned short const * GetObjectNameW();
	virtual void AddRefWinInet(void *);
	virtual void ClearPerResponseState();
	virtual void CreateWebRequestEventDetails(__MIDL___MIDL_itf_webrequest_0000_0000_0002,WebRequestEventDetailsGeneralProperties *,IWebRequestEventDetailsOptionalProperties * *);
	virtual void EvaluateAndSetHTTP2Restrictions();
	virtual void LastRequestHandleClosed();
	virtual void OnTerminateCalled();
	virtual void ReleaseRefWinInet(void *);
	virtual void SetEnterpriseId();
	virtual void SetOptionsForUnicodeUrl();
	virtual void SetP2PRedirectionState();
	virtual void TerminateRequest();
	virtual void UpdateAcceptEncodingHeader(unsigned short const *);
	virtual void UpdateEDUPolicyHeader(unsigned short const *);
	virtual void UpdateSameSiteCookiePolicy(int);
	void ClearWebRequestBlockingResponse();
	void EnableSingleSignOnIfNeeded();
	void EvaluateAndSetHSTSRestrictionsForUri(IUri *);
	void EvaluateAndSetHSTSRestrictionsOnRedirect(unsigned short const *);
	void EvaluateAndSetHTTP2RestrictionsForUri(IUri *);
	void EvaluateAndSetHTTP2RestrictionsOnRedirect(unsigned short const *);
	void EvaluateInsecureSSL3FallbackRedirect(unsigned short const *);
	void GetBindstringCreds(IInternetBindInfo *);
	void GetOrigin(unsigned short * *);
	void OnINetConnect(unsigned __int64);
	void OnINetInternal(INetState,INetEdgeState);
	void OnINetOpenRequest(unsigned __int64);
	void RedirectProtectedModeURLIfNecessary(unsigned short const *,bool);
	void ReleaseCNetObjects(bool);
	void SetByteCountReadyToRead(long);
	void SetForceSwitchIfNeeded();
	void SetServiceProvider(IServiceProvider *);
	void TransitState(unsigned long,int,INetEdgeState);
public:
	CINetEdge(_GUID const &,IUnknown *);
	long StartCommon(IUri *,IInternetProtocolSink *,IInternetBindInfo *,unsigned long,unsigned __int64);
	static long s_SetTimeoutsOnHandle(void *,unsigned long,int,unsigned long,int,unsigned long,int);
	static unsigned long InternetAuthNotifyCallback(unsigned __int64,unsigned long,void *);
	static void s_SetTransportTimeoutsAndMaxConnections();
	virtual long Abort(long,unsigned long);
	virtual long AddRequestHeaders(unsigned short const *,unsigned long,unsigned long);
	virtual long ApplySetting(TRANSPORT_SETTING_ID const *,unsigned long,unsigned char const *,unsigned long *,unsigned char * *);
	virtual long CompleteDelivery();
	virtual long Continue();
	virtual long Continue(_tagPROTOCOLDATA *);
	virtual long DeleteCacheEntryOnRequestHandleClosing(unsigned short const *);
	virtual long DeletePartialFileOnRequestHandleClosing();
	virtual long DisallowPrematureEOF(int);
	virtual long DownloadToDestinationPath(unsigned short const *);
	virtual long EnablePreBinding(int);
	virtual long Flush();
	virtual long GetBindHandle(__MIDL_IGetBindHandle_0001,void * *);
	virtual long GetFirewallError(unsigned long *);
	virtual long GetIPAddress(tagSAFEARRAY * *);
	virtual long GetPriority(long *);
	virtual long GetProxyInfo(int *,unsigned short * *,unsigned long *);
	virtual long GetReplacementResponseHeaders(IWebRequestHttpHeaders * *);
	virtual long GetRequestId(unsigned short * *);
	virtual long HasSecurityFailure(int *);
	virtual long IsAppCacheLookupAllowed(int *);
	virtual long IsCanceledByWebRequest(int *);
	virtual long IsDownloadModeEnabled(int *);
	virtual long IsHSTSRedirectRequest(int *);
	virtual long LockRequest(unsigned long);
	virtual long NotifyInternalOnRequestHandleClosing(INotifyInternal *);
	virtual long NotifyOnRequestHandleClosing(_GUID const &);
	virtual long OnStreamDataAvailable();
	virtual long Prepare();
	virtual long QueryInfo(unsigned long,void *,unsigned long *,unsigned long *,unsigned long *);
	virtual long QueryInfoW(unsigned long,void *,unsigned long *,unsigned long *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long QueryOption(unsigned long,void *,unsigned long *);
	virtual long QuerySetting(TRANSPORT_SETTING_ID const *,unsigned long,unsigned char const *,unsigned long *,unsigned char * *);
	virtual long Read(void *,unsigned long,unsigned long *);
	virtual long Resume();
	virtual long ResumeMainBinding();
	virtual long Seek(_LARGE_INTEGER,unsigned long,_ULARGE_INTEGER *);
	virtual long SetCacheExtension(unsigned short const *,void *,unsigned long *,unsigned long *,unsigned long *);
	virtual long SetCacheExtension2(unsigned short const *,unsigned short *,unsigned long *,unsigned long *,unsigned long *);
	virtual long SetDownloadPriorityInfo(__MIDL___MIDL_itf_urlmonp_0000_0026_0001,__MIDL___MIDL_itf_urlmonp_0000_0026_0002,__MIDL___MIDL_itf_urlmonp_0000_0026_0003,__MIDL___MIDL_itf_urlmonp_0000_0026_0004,long);
	virtual long SetPriority(long);
	virtual long SetReplacementResponseHeaders(IWebRequestHttpHeaders *);
	virtual long SetRequestId(unsigned short *);
	virtual long Start(unsigned short const *,IInternetProtocolSink *,IInternetBindInfo *,unsigned long,unsigned __int64);
	virtual long StartEx(IUri *,IInternetProtocolSink *,IInternetBindInfo *,unsigned long,unsigned __int64);
	virtual long Suspend();
	virtual long Terminate(unsigned long);
	virtual long UnlockRequest();
	virtual long UpdateNetworkTimeout(unsigned __int64,int,unsigned __int64,int,unsigned __int64,int);
	virtual long WasRequestToProxy();
	virtual long WebRequestBlockingResponseReceived();
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~CINetEdge();
};

struct CINetEdgeManager
{
	bool ItemExists(CINetEdge *);
};

class CINetFile
{
	virtual unsigned short const * GetObjectNameW();
	void EnsureFileHandle();
protected:
	virtual unsigned long IsA();
public:
	virtual long INetAsyncOpen();
	virtual long INetSeek(_LARGE_INTEGER,unsigned long,_ULARGE_INTEGER *);
	virtual long LockFile(int);
	virtual long Read(void *,unsigned long,unsigned long *);
	virtual long UnlockFile();
	virtual ~CINetFile();
};

class CINetFileEdge
{
	CINetFileEdge::INetFileEdgeRequestState GetRequestState();
	long OpenRequestContinue(bool);
	static unsigned long OpenRequestContinueTrampoline(void *);
	virtual unsigned short const * GetObjectNameW();
	void EnsureFileHandle();
	void ReleaseFileHandle();
	void UpdateRequestState(CINetFileEdge::INetFileEdgeRequestState);
protected:
	virtual unsigned long IsA();
	virtual void CreateWebRequestEventDetails(__MIDL___MIDL_itf_webrequest_0000_0000_0002,WebRequestEventDetailsGeneralProperties *,IWebRequestEventDetailsOptionalProperties * *);
	virtual void TerminateRequest();
public:
	CINetFileEdge(_GUID const &,IUnknown *);
	virtual long INetAsyncOpen();
	virtual long INetSeek(_LARGE_INTEGER,unsigned long,_ULARGE_INTEGER *);
	virtual long LockFile(int);
	virtual long Read(void *,unsigned long,unsigned long *);
	virtual long UnlockFile();
	virtual ~CINetFileEdge();
};

class CINetFtp
{
	long ComposeURLForOpenRequest(IUri * *);
	virtual void * CallInternetOpenUrl();
protected:
	virtual unsigned long IsA();
public:
	CINetFtp(_GUID const &,IUnknown *);
	virtual long INetAsyncConnect();
	virtual long INetAsyncSendRequest();
	virtual ~CINetFtp();
};

class CINetFtpEdge
{
	long ComposeURLForOpenRequest(IUri * *);
	virtual void * CallInternetOpenUrl();
protected:
	virtual unsigned long IsA();
public:
	CINetFtpEdge(_GUID const &,IUnknown *);
	virtual long INetAsyncConnect();
	virtual long INetAsyncSendRequest();
	virtual ~CINetFtpEdge();
};

class CINetHttp
{
	DelayedProtEntry * RemoveAndGetHeadOfQueue();
	bool GetP2PRedirectionState();
	bool IsEqualAbsoluteUrl(unsigned short const *);
	bool IsUrlmonRequestRedirect();
	int IsHostHstsEnabled();
	int IsHstsFatalCertError(unsigned long);
	int IsInvalidCert(unsigned long);
	long GetModuleOfInterface(IUnknown *,HINSTANCE__ * *);
	long GetRequestPriority();
	long HandleHttpSecurityError(long *);
	long IHttpSecurityOnSecurityProblem(IHttpSecurity *,unsigned long,unsigned long,HWND__ * *,unsigned long *);
	long ObtainHttpNegotiate();
	long QuerySameSiteCookieLevel(int);
	long QueryServiceEx(_GUID const &,void * *,HINSTANCE__ * *);
	long SetStreamCallback(IStream *,IStreamDataNotificationCallback *);
	unsigned long GetSameSiteCookieLevel(IUri *);
	unsigned long HandleCertificateRequest(unsigned long);
	virtual void DeleteQueueWithoutSending();
	void AddTokenBindingHeader();
	void CacheSameSiteCookieParams();
	void ClearSameSiteCookieInfo();
	void HandleEDUHeaderPolicy(IUri *);
	void ResetBindStatusCallbackServices();
	void SetOptionUserAgent();
	void SetSameSiteCookiePolicy();
	void SetWininetPriority();
	void UpdateHttpHeaderUserAgent(unsigned short const *,unsigned long);
	void UpdateRequestHeaders();
protected:
	IHttpNegotiate * GetRefCountedHttpNeg();
	IStream * GetRefCountedStream();
	long GetDownloadModeHandle(void * *);
	long SetWininetDownloadMode(bool);
	long SetWininetDownloadModeCore();
	virtual bool IsDelayed();
	virtual bool IsHandleBasedDownloadMode();
	virtual long ReportDataHelper(IInternetProtocolSink *,unsigned long,unsigned long,unsigned long);
	virtual long ReportProgressHelper(IInternetProtocolSink *,unsigned long,unsigned short const *);
	virtual long ReportResultHelper(IInternetProtocolSink *,long,unsigned long,unsigned short const *);
	virtual long UpdateDownloadMode();
	virtual unsigned long IsA();
	virtual void DelayMessagesIntoQueue();
	virtual void INetAsyncReset();
	virtual void SendQueueAndDisableDelay();
	virtual void SetDualEngineConfigurableSiteRequestHeader(bool);
	virtual void SetEnterpriseId();
	virtual void UpdateEDUPolicyHeader(unsigned short const *);
	virtual void UpdateSameSiteCookiePolicyForRedirection(unsigned short const *,int);
	virtual void UpdateUserAgentOnRedirect(unsigned short const *);
	void ReleaseCNetObjects(bool);
	void UpdateSameSiteCookiePolicy();
public:
	CINetHttp(_GUID const &,IUnknown *);
	long ErrorHandlingRequest(unsigned long,unsigned short const *);
	long FindAppCacheForFallback(unsigned short const *,void * *);
	long GetAdditionalHeader();
	long GetNextSendBuffer(_INTERNET_BUFFERSW *,IStream *,int);
	long HResultFromHttpStatus(unsigned long);
	long HttpNegBeginningTransaction();
	long HttpNegGetRootSecurityId();
	long HttpNegGetSerializedCertContext();
	long HttpNegOnError(unsigned long,unsigned short const *);
	long HttpNegotiateOnHeadersAvailable(unsigned long,unsigned short *);
	long HttpSecurity(unsigned long);
	long HttpSecurityProblem(HWND__ * *,unsigned long);
	long INetAsyncRestart();
	long RedirectToAppCacheFallbackIfAvailable(unsigned long);
	long ZonesSecurityCheck(unsigned long,unsigned long *);
	unsigned short const * GetVerb();
	virtual bool IsInsecureSSL3FallbackAllowedForUri(IUri *);
	virtual bool IsThirdPartyUri(IUri *);
	virtual bool IsThirdPartyUrl(unsigned short const *);
	virtual long Abort(long,unsigned long);
	virtual long ApplySetting(TRANSPORT_SETTING_ID const *,unsigned long,unsigned char const *,unsigned long *,unsigned char * *);
	virtual long CallGetBindInfo(IInternetBindInfo *);
	virtual long CompleteDelivery();
	virtual long DeleteCacheEntryOnRequestHandleClosing(unsigned short const *);
	virtual long DeletePartialFileOnRequestHandleClosing();
	virtual long DisallowPrematureEOF(int);
	virtual long DownloadToDestinationPath(unsigned short const *);
	virtual long Flush();
	virtual long GetBindHandle(__MIDL_IGetBindHandle_0001,void * *);
	virtual long INetAsyncOpenRequest();
	virtual long INetAsyncSendRequest();
	virtual long INetWrite();
	virtual long IsAppCacheLookupAllowed(int *);
	virtual long IsHSTSRedirectRequest(int *);
	virtual long LookupAndSetAppCacheHandle(unsigned short const *);
	virtual long NotifyInternalOnRequestHandleClosing(INotifyInternal *);
	virtual long NotifyOnRequestHandleClosing(_GUID const &);
	virtual long OnStreamDataAvailable();
	virtual long QueryClientCertOnPost();
	virtual long QueryHeaderOnResponse();
	virtual long QuerySetting(TRANSPORT_SETTING_ID const *,unsigned long,unsigned char const *,unsigned long *,unsigned char * *);
	virtual long QueryStatusOnResponse();
	virtual long QueryStatusOnResponseDefault(unsigned long);
	virtual long RedirectRequest(unsigned long);
	virtual long ReportResultAndStop(long,unsigned __int64,unsigned __int64,unsigned short *);
	virtual long ResumeMainBinding();
	virtual long SetDownloadPriorityInfo(__MIDL___MIDL_itf_urlmonp_0000_0026_0001,__MIDL___MIDL_itf_urlmonp_0000_0026_0002,__MIDL___MIDL_itf_urlmonp_0000_0026_0003,__MIDL___MIDL_itf_urlmonp_0000_0026_0004,long);
	virtual long SetPriority(long);
	virtual long SetWinInetHttpTimeouts(IInternetBindInfo *);
	virtual long Terminate(unsigned long);
	virtual void AddRefWinInet(void *);
	virtual void LastRequestHandleClosed();
	virtual void OnTerminateCalled();
	virtual void ReleaseRefWinInet(void *);
	virtual void SetOptionsForUnicodeUrl();
	virtual void SetP2PRedirectionState();
	virtual void TerminateRequest();
	virtual ~CINetHttp();
};

class CINetHttpEdge
{
	bool IsEqualAbsoluteUrl(unsigned short const *);
	bool IsPostToGetRedirect();
	bool IsRequestRedirected();
	int IsHostHstsEnabled();
	int IsHstsFatalCertError(unsigned long);
	int IsInvalidCert(unsigned long);
	long DoRedirectToAppCacheFallback();
	long GetModuleOfInterface(IUnknown *,HINSTANCE__ * *);
	long GetRequestPriority();
	long HandleHttpSecurityError(long *);
	long HandleHttpSecurityProblem(unsigned long,unsigned long,unsigned long,HWND__ * *,unsigned long);
	long IHttpSecurityOnSecurityProblem(IHttpSecurity *,unsigned long,unsigned long,HWND__ * *,unsigned long *);
	long ObtainHttpNegotiate();
	long QueryReplacementHeaderValue(unsigned long,unsigned short const *,void *,unsigned long *,unsigned long *);
	long QueryServiceEx(_GUID const &,void * *,HINSTANCE__ * *);
	long QueryStatusOnResponseDefaultHelper(CINetHttpEdge::LocationHeaderInfo *);
	long SendRequestContinue(long,void *,unsigned long,bool);
	long SetStreamCallback(IStream *,IStreamDataNotificationCallback *);
	static unsigned long SendRequestContinueTrampoline(void *);
	unsigned long HandleCertificateRequest(unsigned long);
	unsigned short * ConvertLocationUrlToWideCharLocal(char const *,IUri *,bool);
	virtual bool IsPostToPostRedirected();
	virtual bool IsRedirecting();
	void AddTokenBindingHeader();
	void ApplyUserAgent();
	void ComputeSameSiteCookiePolicy(int);
	void EnsureStatusCode();
	void GetQueryLocation(CINetHttpEdge::LocationHeaderInfo *);
	void HandleEDUHeaderPolicy(IUri *);
	void ResetBindStatusCallbackServices();
	void SetSameSiteCookiePolicy();
	void SetWininetPriority();
	void UpdateRequestHeaders();
	void UpdateSameSiteCookie(unsigned long);
protected:
	IHttpNegotiate * GetRefCountedHttpNeg();
	IStream * GetRefCountedStream();
	long GetDownloadModeHandle(void * *);
	long SetWininetDownloadMode(bool);
	long SetWininetDownloadModeCore();
	unsigned short const * GetHeaderNameFromOption(unsigned long);
	unsigned short const * GetReplacementHeaderValue(unsigned short const *,unsigned long *,bool *,bool *);
	virtual __MIDL___MIDL_itf_urlmonp_0000_0026_0001 GetDownloadPriorityType();
	virtual bool IsAppCacheFallbackRedirect();
	virtual bool IsHandleBasedDownloadMode();
	virtual bool IsInWebRequestCompletedState(long);
	virtual long ContinueAbort(long,unsigned long);
	virtual long FireBeforeSendHeadersWebRequestEvent();
	virtual long FireHeadersReceivedWebRequestEvent();
	virtual long FireResultWebRequestEvent(long,unsigned short const *);
	virtual long FireSendHeadersWebRequestEvent();
	virtual long OnFireBeforeRequestWebRequestEventCallback(long,void *,unsigned long,bool);
	virtual long ReportDataHelper(IInternetProtocolSink *,unsigned long,unsigned long,unsigned long);
	virtual long ReportProgressHelper(IInternetProtocolSink *,unsigned long,unsigned short const *);
	virtual long ReportResultHelper(IInternetProtocolSink *,long,unsigned long,unsigned short const *);
	virtual long SetStatusCode(unsigned long,unsigned short const *);
	virtual long UpdateDownloadMode();
	virtual unsigned long GetStatusCode();
	virtual unsigned long IsA();
	virtual void ClearPerResponseState();
	virtual void CreateWebRequestEventDetails(__MIDL___MIDL_itf_webrequest_0000_0000_0002,WebRequestEventDetailsGeneralProperties *,IWebRequestEventDetailsOptionalProperties * *);
	virtual void INetAsyncReset();
	virtual void SetEnterpriseId();
	virtual void UpdateAcceptEncodingHeader(unsigned short const *);
	virtual void UpdateEDUPolicyHeader(unsigned short const *);
	virtual void UpdateSameSiteCookiePolicy(int);
	void FireMissingWebRequestEventsAfterSendRequest(bool);
	void ReleaseCNetObjects(bool);
	void SetDownloadModePending();
	void SetDownloadModeSucceeded();
public:
	CINetHttpEdge(_GUID const &,IUnknown *);
	long ErrorHandlingRequest(unsigned long,unsigned short const *);
	long FindAppCacheForFallback(unsigned short const *,void * *);
	long GetNextSendBuffer(_INTERNET_BUFFERSW *,IStream *,int);
	long HttpNegGetSerializedCertContext();
	long HttpNegOnError(unsigned long,unsigned short const *);
	long HttpSecurity(unsigned long);
	long HttpSecurityProblem(HWND__ * *,unsigned long);
	long INetAsyncRestart();
	long RedirectToAppCacheFallbackIfAvailable(unsigned long);
	long ZonesSecurityCheck(unsigned long,unsigned long *);
	unsigned short const * GetVerb();
	virtual bool IsInsecureSSL3FallbackAllowedForUri(IUri *);
	virtual bool IsThirdPartyUri(IUri *);
	virtual bool IsThirdPartyUrl(unsigned short const *);
	virtual long ApplySetting(TRANSPORT_SETTING_ID const *,unsigned long,unsigned char const *,unsigned long *,unsigned char * *);
	virtual long CallGetBindInfo(IInternetBindInfo *);
	virtual long CompleteDelivery();
	virtual long DeleteCacheEntryOnRequestHandleClosing(unsigned short const *);
	virtual long DeletePartialFileOnRequestHandleClosing();
	virtual long DisallowPrematureEOF(int);
	virtual long DownloadToDestinationPath(unsigned short const *);
	virtual long Flush();
	virtual long GetBindHandle(__MIDL_IGetBindHandle_0001,void * *);
	virtual long GetReplacementResponseHeaders(IWebRequestHttpHeaders * *);
	virtual long INetAsyncOpenRequest();
	virtual long INetAsyncSendRequest();
	virtual long INetWrite();
	virtual long IsAppCacheLookupAllowed(int *);
	virtual long IsDownloadModeEnabled(int *);
	virtual long IsHSTSRedirectRequest(int *);
	virtual long LookupAndSetAppCacheHandle(unsigned short const *);
	virtual long NotifyInternalOnRequestHandleClosing(INotifyInternal *);
	virtual long NotifyOnRequestHandleClosing(_GUID const &);
	virtual long OnStreamDataAvailable();
	virtual long QueryClientCertOnPost();
	virtual long QueryHeaderOnResponse();
	virtual long QueryInfo(unsigned long,void *,unsigned long *,unsigned long *,unsigned long *);
	virtual long QuerySetting(TRANSPORT_SETTING_ID const *,unsigned long,unsigned char const *,unsigned long *,unsigned char * *);
	virtual long QueryStatusOnResponse();
	virtual long QueryStatusOnResponseDefault();
	virtual long RedirectRequest(unsigned short const *);
	virtual long ReportResultAndStop(long,unsigned __int64,unsigned __int64,unsigned short const *);
	virtual long ResumeMainBinding();
	virtual long SetDownloadPriorityInfo(__MIDL___MIDL_itf_urlmonp_0000_0026_0001,__MIDL___MIDL_itf_urlmonp_0000_0026_0002,__MIDL___MIDL_itf_urlmonp_0000_0026_0003,__MIDL___MIDL_itf_urlmonp_0000_0026_0004,long);
	virtual long SetPriority(long);
	virtual long SetReplacementResponseHeaders(IWebRequestHttpHeaders *);
	virtual long SetWinInetHttpTimeouts(IInternetBindInfo *);
	virtual long Terminate(unsigned long);
	virtual void AddRefWinInet(void *);
	virtual void LastRequestHandleClosed();
	virtual void OnTerminateCalled();
	virtual void ReleaseRefWinInet(void *);
	virtual void SetOptionsForUnicodeUrl();
	virtual void SetP2PRedirectionState();
	virtual void TerminateRequest();
	virtual ~CINetHttpEdge();
};

class CINetHttpS
{
protected:
	virtual int HttpsTunnelEstablished();
	virtual long OnRequestSent(unsigned long,void *,unsigned long);
	virtual unsigned long IsA();
	virtual void EvaluateAndSetHTTP2Restrictions();
	virtual void INetAsyncReset();
public:
	CINetHttpS(_GUID const &,IUnknown *);
	virtual ~CINetHttpS();
};

class CINetHttpSEdge
{
	long CheckForTokenBindingPublicKey();
	virtual void ReportTokenBinding();
protected:
	virtual int HttpsTunnelEstablished();
	virtual long OnRequestSent(unsigned long,void *,unsigned long);
	virtual unsigned long IsA();
	virtual void EvaluateAndSetHTTP2Restrictions();
	virtual void INetAsyncReset();
};

struct CINetSimple
{
	CINetSimple(_GUID const &,IUnknown *);
	virtual long INetAsyncConnect();
	virtual long INetAsyncOpenRequest();
	virtual long INetAsyncSendRequest();
	virtual long QueryHeaderOnResponse();
	virtual long QueryStatusOnResponse();
	virtual long QueryStatusOnResponseDefault(unsigned long);
	virtual void * CallInternetOpenUrl();
	virtual ~CINetSimple();
};

struct CINetSimpleEdge
{
	CINetSimpleEdge(_GUID const &,IUnknown *);
	virtual long INetAsyncConnect();
	virtual long INetAsyncOpenRequest();
	virtual long INetAsyncSendRequest();
	virtual long QueryHeaderOnResponse();
	virtual long QueryStatusOnResponse();
	virtual long QueryStatusOnResponseDefault(unsigned long);
	virtual void * CallInternetOpenUrl();
	virtual ~CINetSimpleEdge();
};

class CINetStream
{
protected:
	virtual unsigned long IsA();
public:
	CINetStream(_GUID const &,IUnknown *);
	virtual long INetAsyncOpen();
	virtual long INetSeek(_LARGE_INTEGER,unsigned long,_ULARGE_INTEGER *);
	virtual long LockFile(int);
	virtual long Read(void *,unsigned long,unsigned long *);
	virtual long Start(unsigned short const *,IInternetProtocolSink *,IInternetBindInfo *,unsigned long,unsigned __int64);
	virtual long UnlockFile();
	virtual ~CINetStream();
};

class CINetStreamEdge
{
protected:
	virtual unsigned long IsA();
public:
	CINetStreamEdge(_GUID const &,IUnknown *);
	virtual long INetAsyncOpen();
	virtual long INetSeek(_LARGE_INTEGER,unsigned long,_ULARGE_INTEGER *);
	virtual long LockFile(int);
	virtual long Read(void *,unsigned long,unsigned long *);
	virtual long Start(unsigned short const *,IInternetProtocolSink *,IInternetBindInfo *,unsigned long,unsigned __int64);
	virtual long UnlockFile();
	virtual ~CINetStreamEdge();
};

class CInPrivateBrowserModeFilter
{
	virtual int _IsUptoDate();
	virtual long _EnsureFilterIfNoDataFound();
	virtual long _GetCounterValue();
	virtual long _IncrementCounterValue();
	virtual void _PruneData();
protected:
	virtual int _EnsureCLSID();
	virtual long _DeleteData();
	virtual long _GetDataStream(unsigned long,IStream * *);
};

class CInPrivateDisableTransitionBrowserModeFilter
{
protected:
	int _EnsureCLSID();
	virtual long _DeleteData();
	virtual long _GetDataStream(unsigned long,IStream * *);
	virtual long _LoadData(IStream *);
public:
	long SetFilterName(unsigned short const *);
};

struct CInstallBindInfo
{
	virtual long GetBindInfo(unsigned long *,_tagBINDINFO *);
	virtual long GetBindString(unsigned long,unsigned short * *,unsigned long,unsigned long *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CLangInfo
{
	unsigned long GetPrimaryLanguageInfo(unsigned long,char *,int);
public:
	int GetAcceptLanguageString(unsigned long,char *,int);
	int GetLocaleStrings(unsigned long,char *,int);
};

class CList<CCDLPacket *,CCDLPacket *>
{
protected:
	CList<CCDLPacket *,CCDLPacket *>::CNode * NewNode(CList<CCDLPacket *,CCDLPacket *>::CNode *,CList<CCDLPacket *,CCDLPacket *>::CNode *);
public:
	CCDLPacket * RemoveHead();
	void RemoveAll();
};

class CList<CClBinding *,CClBinding *>
{
protected:
	CList<CClBinding *,CClBinding *>::CNode * NewNode(CList<CClBinding *,CClBinding *>::CNode *,CList<CClBinding *,CClBinding *>::CNode *);
public:
	void RemoveAll();
};

class CList<CCodeBaseHold *,CCodeBaseHold *>
{
protected:
	CList<CCodeBaseHold *,CCodeBaseHold *>::CNode * NewNode(CList<CCodeBaseHold *,CCodeBaseHold *>::CNode *,CList<CCodeBaseHold *,CCodeBaseHold *>::CNode *);
public:
	void * AddHead(CCodeBaseHold *);
	void * AddTail(CCodeBaseHold *);
	void * InsertBefore(void *,CCodeBaseHold *);
	void RemoveAll();
};

class CList<CCodeDownload *,CCodeDownload *>
{
protected:
	CList<CCodeDownload *,CCodeDownload *>::CNode * NewNode(CList<CCodeDownload *,CCodeDownload *>::CNode *,CList<CCodeDownload *,CCodeDownload *>::CNode *);
public:
	void RemoveAll();
};

class CList<CDLDebugLog *,CDLDebugLog *>
{
protected:
	CList<CDLDebugLog *,CDLDebugLog *>::CNode * NewNode(CList<CDLDebugLog *,CDLDebugLog *>::CNode *,CList<CDLDebugLog *,CDLDebugLog *>::CNode *);
public:
	void * AddTail(CDLDebugLog *);
	void RemoveAll();
	void RemoveAt(void *);
};

class CList<CDownload *,CDownload *>
{
protected:
	CList<CDownload *,CDownload *>::CNode * NewNode(CList<CDownload *,CDownload *>::CNode *,CList<CDownload *,CDownload *>::CNode *);
public:
	void RemoveAll();
};

struct CList<CModuleUsage *,CModuleUsage *>
{
	void * AddTail(CModuleUsage *);
	void RemoveAll();
};

struct CList<CParentCDL *,CParentCDL *>
{
	void * AddTail(CParentCDL *);
	void RemoveAll();
};

struct CList<CSetupHook *,CSetupHook *>
{
	void * AddTail(CSetupHook *);
	void RemoveAll();
};

class CList<DebugLogElement *,DebugLogElement *>
{
protected:
	CList<DebugLogElement *,DebugLogElement *>::CNode * NewNode(CList<DebugLogElement *,DebugLogElement *>::CNode *,CList<DebugLogElement *,DebugLogElement *>::CNode *);
public:
	void * AddHead(DebugLogElement *);
	void RemoveAll();
};

struct CList<DelayedProtEntry *,DelayedProtEntry *>
{
	DelayedProtEntry * RemoveHead();
	void * AddTail(DelayedProtEntry *);
	void RemoveAll();
};

struct CList<tagSUrlMkTlsData *,tagSUrlMkTlsData *>
{
	void RemoveAt(void *);
};

struct CList<unsigned short *,unsigned short *>
{
	void * AddHead(unsigned short *);
	void RemoveAll();
};

struct CLocalComponentInfo
{
	CLocalComponentInfo();
	long MakeDestDir();
	~CLocalComponentInfo();
};

struct CLocalMemPtr<char>
{
	~CLocalMemPtr<char>();
};

class CMapPathToSpecialDirHelper
{
	bool FindCacheEntry(unsigned short const *,unsigned int,CMapPathToSpecialDirHelper::DirectoryType *);
	long AddToCache(unsigned short const *,unsigned long,CMapPathToSpecialDirHelper::DirectoryType);
	long ConstructFolderPath(int,int,unsigned short *,unsigned __int64);
	long GetLocalDirType(unsigned short const *,unsigned long,CMapPathToSpecialDirHelper::DirectoryType *,unsigned short *,unsigned long *,CMapPathToSpecialDirHelper::StatusGetLocalDirType *);
	void AddToCache(CMapPathToSpecialDirHelper::CMappedPathEntry *);
public:
	long Init();
	long IsFileInSpecialDirs(unsigned short const *,CMapPathToSpecialDirHelper::DirectoryType,int);
	long PathPrefixMatchesWithSpecialDir(unsigned short const *,CMapPathToSpecialDirHelper::DirectoryType *);
	static _RTL_CRITICAL_SECTION s_csPathToSpecialDirHelper;
	~CMapPathToSpecialDirHelper();
};

struct CMediaType
{
	CMediaType();
};

struct CMediaTypeHolder
{
	long FindCMediaType(char const *,CMediaType * *);
	long FindCMediaType(unsigned short,CMediaType * *);
	long Register(unsigned int,char const * const *,unsigned short *);
	long RegisterClassA(unsigned int,char const * const *,_GUID *);
	long RegisterMediaInfo(unsigned int,_tagMediaInfo *,int);
	virtual long FindClassMapping(char const *,_GUID *,unsigned long);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long RegisterClassMapping(unsigned long,char const * * const,_GUID * const,unsigned long);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CModuleUsage
{
	CModuleUsage(CCodeDownload *,char const *,unsigned long,int,long *);
};

struct CNetHelper
{
	static bool IsSecureUri(IUri *);
	static long ProtocolAllowedForRedirect(IUri *,unsigned short const *,unsigned short const *);
	static long ProtocolAllowedForRedirect(unsigned short const *,unsigned short const *);
};

struct CNodeData
{
	CNodeData(unsigned short,IClassFactory *,_GUID const &);
	bool GetImplementationDllFromStack(void *);
};

class COInetProt
{
	long GetProtocolSink(IInternetProtocolSink * *);
	long SafeReportDataToProtocolSink(unsigned long,unsigned long,unsigned long);
	long SafeReportProgressToProtocolSink(unsigned long,unsigned short const *,bool *);
	unsigned long SniffForBufferResize(unsigned long);
	void SetProtocolPriority();
public:
	COInetProt();
	IUnknown * GetInnerUnknownForTransAggregatedProtocols();
	int CheckCacheExtension(unsigned short const *,unsigned long);
	int ShouldCheckCacheExtension();
	long GetProtocol(IInternetProtocol * *);
	long Initialize(CTransaction *,IServiceProvider *,unsigned long,IUnknown *,IInternetProtocol *,IInternetProtocolSink *,IUri *);
	long OnDataReceived(unsigned long *,unsigned long *,unsigned long *);
	long SetUriAndAbsoluteUrl(IUri *);
	virtual long Abort(long,unsigned long);
	virtual long Continue(_tagPROTOCOLDATA *);
	virtual long DeleteCacheEntryOnRequestHandleClosing(unsigned short const *);
	virtual long DeletePartialFileOnRequestHandleClosing();
	virtual long DisallowPrematureEOF(int);
	virtual long DownloadToDestinationPath(unsigned short const *);
	virtual long GetFirewallError(unsigned long *);
	virtual long GetIPAddress(tagSAFEARRAY * *);
	virtual long GetIUri(IUri * *);
	virtual long GetPriority(long *);
	virtual long GetProxyInfo(int *,unsigned short * *,unsigned long *);
	virtual long HasSecurityFailure(int *);
	virtual long IsAppCacheLookupAllowed(int *);
	virtual long IsCanceledByWebRequest(int *);
	virtual long IsDownloadModeEnabled(int *);
	virtual long IsHSTSRedirectRequest(int *);
	virtual long LockRequest(unsigned long);
	virtual long NotifyInternalOnRequestHandleClosing(INotifyInternal *);
	virtual long NotifyOnRequestHandleClosing(_GUID const &);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long QueryService(_GUID const &,_GUID const &,void * *);
	virtual long Read(void *,unsigned long,unsigned long *);
	virtual long ReportData(unsigned long,unsigned long,unsigned long);
	virtual long ReportProgress(unsigned long,unsigned short const *);
	virtual long ReportResult(long,unsigned long,unsigned short const *);
	virtual long Resume();
	virtual long Seek(_LARGE_INTEGER,unsigned long,_ULARGE_INTEGER *);
	virtual long SetDownloadPriorityInfo(__MIDL___MIDL_itf_urlmonp_0000_0026_0001,__MIDL___MIDL_itf_urlmonp_0000_0026_0002,__MIDL___MIDL_itf_urlmonp_0000_0026_0003,__MIDL___MIDL_itf_urlmonp_0000_0026_0004,long);
	virtual long SetPriority(long);
	virtual long Start(unsigned short const *,IInternetProtocolSink *,IInternetBindInfo *,unsigned long,unsigned __int64);
	virtual long StartEx(IUri *,IInternetProtocolSink *,IInternetBindInfo *,unsigned long,unsigned __int64);
	virtual long Suspend();
	virtual long Switch(_tagPROTOCOLDATA *);
	virtual long Terminate(unsigned long);
	virtual long UnlockRequest();
	virtual long UpdateNetworkTimeout(unsigned __int64,int,unsigned __int64,int,unsigned __int64,int);
	virtual long WasRequestToProxy();
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	void InitAttachedBindToObject();
	void ReportCacheFileName(int);
	void SetProtocol(IInternetProtocol *);
	void SetProtocolSink(IInternetProtocolSink *);
	void SetServiceProvider(IServiceProvider *);
};

class COInetSession
{
	long CreateProtocolInfo(unsigned short const *,IInternetProtocolInfo * *);
	long FindFirstCF(unsigned short const *,IClassFactory * *,_GUID *,unsigned long *,unsigned long);
	long FindInternalCF(unsigned short const *,IClassFactory * *,_GUID *,unsigned long *);
	long FindNextCF(unsigned short const *,IClassFactory * *,_GUID *,unsigned long *);
	void UpdateTransLevelHandlerCount(int);
public:
	COInetSession();
	long CreateFirstProtocol(unsigned short const *,IUnknown *,IUnknown * *,IInternetProtocol * *,_GUID *,unsigned long *,unsigned long);
	long CreateHandler(unsigned short const *,IUnknown *,IUnknown * *,IInternetProtocol * *,_GUID *,IProtocolHandlerValidator *);
	long CreateNextProtocol(unsigned short const *,IUnknown *,IUnknown * *,IInternetProtocol * *,_GUID *,unsigned long *);
	long FindOInetProtocolClsID(unsigned short const *,_GUID *);
	static long Create(COInetSession * *);
	virtual long CombineUrl(unsigned short const *,unsigned short const *,unsigned long,unsigned short *,unsigned long,unsigned long *,unsigned long);
	virtual long CompareUrl(unsigned short const *,unsigned short const *,unsigned long);
	virtual long CreateBinding(IBindCtx *,unsigned short const *,IUnknown *,IUnknown * *,IInternetProtocol * *,unsigned long);
	virtual long GetSessionOption(unsigned long,void *,unsigned long *,unsigned long);
	virtual long ParseUrl(unsigned short const *,_tagPARSEACTION,unsigned long,unsigned short *,unsigned long,unsigned long *,unsigned long);
	virtual long QueryInfo(unsigned short const *,_tagQUERYOPTION,unsigned long,void *,unsigned long,unsigned long *,unsigned long);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long RegisterMimeFilter(IClassFactory *,_GUID const &,unsigned short const *);
	virtual long RegisterNameSpace(IClassFactory *,_GUID const &,unsigned short const *,unsigned long,unsigned short const * const *,unsigned long);
	virtual long SetSessionOption(unsigned long,void *,unsigned long,unsigned long);
	virtual long UnregisterMimeFilter(IClassFactory *,unsigned short const *);
	virtual long UnregisterNameSpace(IClassFactory *,unsigned short const *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	~COInetSession();
};

struct COleAutDll
{
	long Init();
	long VariantClear(tagVARIANT *);
	long VariantInit(tagVARIANT *);
	unsigned short * SysAllocString(unsigned short const *);
	void SysFreeString(unsigned short *);
	~COleAutDll();
};

class CPathList
{
	long EnsureBufferSize(unsigned __int64);
public:
	long AppendPath(unsigned short const *,unsigned __int64);
};

class CPercentDecodeList
{
protected:
	virtual long ShouldDecodeCharacter(unsigned __int64,unsigned long,bool *);
};

class CPercentDecodeString
{
protected:
	virtual long ShouldDecodeCharacter(unsigned __int64,unsigned long,bool *);
public:
	long Decode(unsigned short *,unsigned __int64 *,unsigned short * *,unsigned __int64 *,unsigned long);
};

class CPercentEncodeForExtraInfo
{
protected:
	virtual long ShouldEncodeCharacter(unsigned __int64,unsigned long,bool *);
};

class CPercentEncodeForExtraInfoEdge
{
protected:
	virtual long ShouldEncodeCharacter(unsigned __int64,unsigned long,bool *);
};

class CPercentEncodeString
{
protected:
	virtual long ShouldEncodeCharacter(unsigned __int64,unsigned long,bool *);
public:
	long Encode(unsigned short *,unsigned __int64 *,unsigned short * *,unsigned __int64 *,unsigned long);
};

struct CPercentEncodeUserInfo
{
	long AllocateAndEncode(unsigned short * *);
	virtual long ShouldEncodeCharacter(unsigned __int64,unsigned long,bool *);
};

struct CPlex
{
	static CPlex * Create(CPlex * &,unsigned int,unsigned int);
	void FreeDataChain();
};

class CPolicyBrowserModeFilter
{
	virtual int _IsUptoDate();
	virtual long _EnsureFilterIfNoDataFound();
	virtual long _GetCounterValue();
	virtual long _IncrementCounterValue();
	void _AddFromPolicyValue(unsigned short const *);
protected:
	int _IsHostinList(unsigned short const *,unsigned short const *,unsigned long *);
	virtual int _IsUriInList(IUri *);
	virtual long _DeleteData();
	virtual long _GetDataStream(unsigned long,IStream * *);
public:
	virtual long GetBrowserEmulationData(unsigned short * *);
};

struct CPropertyStoreHelperBase<INamedPropertyStore>
{
	void ClearPropertyStore();
};

class CProtMgr
{
	long FindNode(CNodeData * *,unsigned short const *,IClassFactory * *,_GUID *);
public:
	CProtMgr();
	long FindFirstCFWithValidation(unsigned short const *,IClassFactory * *,_GUID *,IProtocolHandlerValidator *);
	long Register(IClassFactory *,_GUID const &,unsigned short const *,unsigned long,unsigned short const * const *,unsigned long,void *);
	long Unregister(IClassFactory *,unsigned short const *);
	virtual long FindFirstCF(unsigned short const *,IClassFactory * *,_GUID *);
	virtual long FindNextCF(unsigned short const *,IClassFactory * *,_GUID *);
	virtual long LookupClsIDFromReg(unsigned short const *,_GUID *,unsigned long *,unsigned long *,unsigned long);
};

struct CProtMgrMimeHandler
{
	virtual long LookupClsIDFromReg(unsigned short const *,_GUID *,unsigned long *,unsigned long *,unsigned long);
};

class CProtMgrNameSpace
{
	long ShouldLookupRegistry(unsigned short const *);
public:
	virtual long FindFirstCF(unsigned short const *,IClassFactory * *,_GUID *);
	virtual long FindNextCF(unsigned short const *,IClassFactory * *,_GUID *);
	virtual long LookupClsIDFromReg(unsigned short const *,_GUID *,unsigned long *,unsigned long *,unsigned long);
};

struct CProtocolData
{
	int Init(unsigned short const *,CProtocolData *);
};

struct CPullDownload
{
	virtual long GetBindInfo(unsigned long *,_tagBINDINFO *);
};

class CPushDownload
{
protected:
	virtual long OnDataAvailable(unsigned long,unsigned long,tagFORMATETC *,tagSTGMEDIUM *);
	virtual void Neutralize();
public:
	CPushDownload(IUnknown *,unsigned long,IBindStatusCallback *);
	virtual long GetBindInfo(unsigned long *,_tagBINDINFO *);
	virtual ~CPushDownload();
};

class CReadOnlyStreamDirect
{
	unsigned short * GetFileName();
public:
	CReadOnlyStreamDirect(CTransData *,BindFlags,int);
	virtual long Clone(IStream * *);
	virtual long Commit(unsigned long);
	virtual long CopyTo(IStream *,_ULARGE_INTEGER,_ULARGE_INTEGER *,_ULARGE_INTEGER *);
	virtual long LockRegion(_ULARGE_INTEGER,_ULARGE_INTEGER,unsigned long);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Read(void *,unsigned long,unsigned long *);
	virtual long Revert();
	virtual long Seek(_LARGE_INTEGER,unsigned long,_ULARGE_INTEGER *);
	virtual long SetDeleteFile(unsigned __int64);
	virtual long SetHandleForUnlock(unsigned __int64,unsigned __int64);
	virtual long SetSize(_ULARGE_INTEGER);
	virtual long Stat(tagSTATSTG *,unsigned long);
	virtual long UnlockRegion(_ULARGE_INTEGER,_ULARGE_INTEGER,unsigned long);
	virtual long Write(void const *,unsigned long,unsigned long *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~CReadOnlyStreamDirect();
};

struct CReadOnlyStreamFile
{
	CReadOnlyStreamFile(unsigned short *,void *,unsigned short *);
	static long Create(unsigned short *,unsigned short const *,CReadOnlyStreamFile * *);
	virtual long Clone(IStream * *);
	virtual long CopyTo(IStream *,_ULARGE_INTEGER,_ULARGE_INTEGER *,_ULARGE_INTEGER *);
	virtual long LockRegion(_ULARGE_INTEGER,_ULARGE_INTEGER,unsigned long);
	virtual long Read(void *,unsigned long,unsigned long *);
	virtual long Seek(_LARGE_INTEGER,unsigned long,_ULARGE_INTEGER *);
	virtual long SetDeleteFile(unsigned __int64);
	virtual long SetHandleForUnlock(unsigned __int64,unsigned __int64);
	virtual long Stat(tagSTATSTG *,unsigned long);
	virtual long UnlockRegion(_ULARGE_INTEGER,_ULARGE_INTEGER,unsigned long);
	virtual ~CReadOnlyStreamFile();
};

struct CRegKey
{
	long Create(void *,unsigned short const *,unsigned long);
	long EnumKey(unsigned long,unsigned short *,unsigned long *);
	long EnumValue(unsigned long,unsigned short *,unsigned long *,unsigned long *,void *,unsigned long *);
	long QueryBinaryValue(unsigned char *,unsigned short const *,unsigned long *);
	long QuerySubKeyInfo(unsigned long *,unsigned long *,unsigned long *);
	long QueryValue(unsigned long *,unsigned short const *);
	long QueryValue(unsigned short *,unsigned short const *,unsigned long *);
	long SetValue(unsigned long,unsigned short const *);
	long SetValue(unsigned short const *,unsigned short const *);
	virtual long Close();
	virtual long Open(void *,unsigned short const *,unsigned long);
};

struct CRegKeyZoneMap
{
	long OpenKey(int);
	virtual long Close();
	virtual long Open(void *,unsigned short const *,unsigned long);
};

struct CRegKeyZoneMapUSKeyCache
{
	void Init();
};

class CRegZone
{
	class CRegZoneCache
	{
	protected:
		int FindCacheEntry(unsigned long,unsigned long,int,int &);
	public:
		CRegZoneCache(int);
		int Lookup(unsigned long,unsigned short const *,unsigned short const *,unsigned long,int,unsigned long *,int);
		void Add(unsigned long,unsigned long,int,unsigned long,int);
		void Flush();
		void IncrementGlobalCounter();
		~CRegZoneCache();
	};

	long EnsureZoneAttributes();
protected:
	int IsSecureSpecialUrlAction(unsigned long,unsigned long,unsigned long,int *);
	int IsSecureUrlActionSetting(unsigned short *,unsigned long,unsigned long,int *);
	int IsSpecialUrlAction(unsigned long);
	int QueryTemplatePolicyIndex(CRegKey &,unsigned short const *,unsigned long *);
	int VerifyTemplateSettings(unsigned long);
	int VerifyUrlPolicyAgainstTemplateSettings(unsigned long,unsigned short const *,unsigned long);
	static int GetAggregateAction(unsigned long,unsigned long *);
	static int IsAttributeName(unsigned short const *);
	static unsigned short const * GetTemplateNameFromIndex(tagURLTEMPLATE);
public:
	int Init(unsigned short const *,int,REGZONEUSE,int);
	int UpdateZoneMapFlags();
	long CopyTemplatePolicies(unsigned long,int);
	long GetActionPolicy(unsigned long,_URLZONEREG,unsigned long &,int);
	long GetCustomPolicy(_GUID const &,_URLZONEREG,unsigned char * *,unsigned long *);
	long GetZoneAttributes(_ZONEATTRIBUTES &,unsigned long);
	long ReadZoneAttributes(unsigned long);
	long SetActionPolicy(unsigned long,_URLZONEREG,unsigned long);
	long SetCustomPolicy(_GUID const &,_URLZONEREG,unsigned char *,unsigned long);
	long SetZoneAttributes(_ZONEATTRIBUTES const &);
	static CRegZone::CRegZoneCache s_lockrzcache;
	static CRegZone::CRegZoneCache s_rzcache;
	static long GetZonePath(unsigned short *,unsigned __int64,REGZONEUSE,unsigned short const *,int);
	~CRegZone();
};

class CRegZoneContainer
{
protected:
	long EnumerateAndLoadZones(CRegKey &,REGZONEUSE,CRegZoneContainer::CRegListElem * *,unsigned long *);
public:
	CRegZone * GetRegZoneById(unsigned long);
	CRegZoneContainer();
	int Attach(int,REGZONEUSE);
	int Detach();
	int SelfHeal(int);
	long CreateZoneEnumerator(unsigned long *,unsigned long *);
	long DestroyZoneEnumerator(unsigned long);
	long EnumerateAndLoadZones(REGZONEUSE,CRegZoneContainer::CRegListElem * *,unsigned long *);
	long GetZoneAt(unsigned long,unsigned long,unsigned long *);
	void ResetZoneAttributes();
};

class CReparsePointsHelper
{
	long BuildNewPathFromReparsePoint(unsigned short *,bool *);
	static unsigned short * ReturnPrevPotentialParsePoint(unsigned short *,unsigned short *);
public:
	long FindNextReparsePoint(bool *);
	long Init(unsigned short const *,unsigned long);
	static bool ContainsReparsePoint(unsigned short *,unsigned long);
	static bool IsReparsePoint(unsigned short const *);
};

struct CRunSetupHook
{
	long Init();
	unsigned long RunSetupCommand(HWND__ *,char *,char *,char *,char *,void * *,unsigned long,void *);
	unsigned long TranslateInfString(char const *,char const *,char const *,char const *,char *,unsigned long,unsigned long *,void *);
	~CRunSetupHook();
};

struct CSecureStr
{
	char * GetUnencryptedString();
	int SetData(char *,int *);
	void Free();
};

class CSecurityManager
{
	struct CPersistAnswers
	{
		int GetPrevAnswer(unsigned short const *,unsigned long,int *);
		static int IsPersistentAnswerAction(unsigned long);
		void RememberAnswer(unsigned short const *,unsigned long,int);
	};

	struct CPrivUnknown
	{
		virtual long QueryInterface(_GUID const &,void * *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
	};

	class CSecMgrCache
	{
		struct CMOTWCacheEntry
		{
			CMOTWCacheEntry();
			bool IsMatched(unsigned short const *,unsigned long);
			void Flush();
			void Set(unsigned short const *,unsigned short *,unsigned long,long);
			~CMOTWCacheEntry();
		};

		struct CSecMgrCacheEntry
		{
			CSecMgrCacheEntry();
			void Set(IUriPriv *,unsigned long,bool,bool,bool,unsigned long,TRIBIT,unsigned char const *,unsigned long,unsigned short const *,unsigned short const *);
			~CSecMgrCacheEntry();
		};

	protected:
		bool FindMOTWCacheEntry(unsigned short const *,unsigned long &);
		int FindCacheEntry(IUriPriv *,bool,bool,int &);
		int IsCounterEqual();
		void SetToCurrentCounter();
	public:
		CSecMgrCache();
		bool LookupMOTWCacheEntry(unsigned short const *,unsigned long *,unsigned short * *,long *);
		int Lookup(IUriPriv *,unsigned long,bool,bool,bool *,unsigned long *,TRIBIT *,unsigned char *,unsigned long *,unsigned short const *,unsigned short * *);
		void Add(IUriPriv *,unsigned long,bool,bool,bool,unsigned long,TRIBIT,unsigned char const *,unsigned long,unsigned short const *,unsigned short const *);
		void AddMOTWCacheEntry(unsigned short const *,unsigned short *,unsigned long,long);
		void Flush();
		~CSecMgrCache();
	};

	int DisplayMessage(HWND__ *,int,__int64 (*)(HWND__ *,unsigned int,unsigned __int64,__int64),unsigned int,unsigned int,__int64);
	long AllowJScriptPerProcess(unsigned short const *,int *);
	long GetSecurityIdEx2Internal(IUri *,unsigned char *,unsigned long *,unsigned __int64,unsigned long);
	long GetZoneFromUriInternal(IUri *,unsigned long *,unsigned long,unsigned short * *,unsigned long *,unsigned long,unsigned long *);
	long MapUrlToZoneEx2Private(IUri *,unsigned long *,unsigned long,unsigned short * *,unsigned long *,unsigned long,unsigned long *);
	long MapUrlToZonePrivate(unsigned short const *,unsigned long *,unsigned long,unsigned long,unsigned long *);
	long ProcessUrlActionEx2Internal(IUri *,unsigned long,unsigned char *,unsigned long,unsigned char *,unsigned long,unsigned long,unsigned __int64,unsigned long *,unsigned long,unsigned long *);
	long ProcessUrlActionEx2Private(IUri *,unsigned long,unsigned char *,unsigned long,unsigned char *,unsigned long,unsigned long,unsigned __int64,unsigned long *,unsigned long,unsigned long *);
	long ProcessUrlActionPerProcessInternal(unsigned short const *,unsigned long,unsigned char *,unsigned long);
	long QueryCustomPolicyEx2Internal(IUri *,_GUID const &,unsigned char * *,unsigned long *,unsigned char *,unsigned long,unsigned __int64);
	static DOMAIN_ITEM_LATEST * s_pSitesAndDomainsLatestCUEnd;
	static DOMAIN_ITEM_LATEST * s_pSitesAndDomainsLatestCUStart;
	static DOMAIN_ITEM_LATEST * s_pSitesAndDomainsLatestLMEnd;
	static DOMAIN_ITEM_LATEST * s_pSitesAndDomainsLatestLMStart;
	static PROTDEFAULT_ITEM * s_pProtocolDefaults;
	static _GUID * s_clsidAllowedList;
	static _RTL_CRITICAL_SECTION s_csectAList;
	static _RTL_CRITICAL_SECTION s_csectZones;
	static int s_bDragProtcolInit;
	static int s_fESCEnabled;
	static int s_fESCRead;
	static int s_fIPInit;
	static int s_fProtDefaultsInit;
	static int s_fSitesAndDomainsInit;
	static int s_fUsePoliciesZoneMap;
	static int s_fcsectZonesInit;
	static unsigned char * s_pRanges;
	static unsigned char * s_pSitesAndDomainsCU;
	static unsigned char * s_pSitesAndDomainsLM;
	static unsigned long * s_dwNumRestrictedProtocols;
	static unsigned long * s_dwNumdragProtocols;
	static unsigned long s_cNumDomainsCU;
	static unsigned long s_cNumDomainsLM;
	static unsigned long s_cNumProtocolDefaults;
	static unsigned long s_cNumRanges;
	static unsigned long s_cbDomainItemCU;
	static unsigned long s_cbDomainItemLM;
	static unsigned long s_cbRangeItem;
	static unsigned long s_dwNextRangeIndex;
	static unsigned long s_dwNumAllowedBehaviors;
	static unsigned long s_dwNumAllowedControls;
	static unsigned short * * * s_allowedDragprotocolsList;
	static unsigned short * * * s_restrictedProtocolsList;
	static unsigned short * * s_behaviorAllowedList;
protected:
	int DetermineZoneFromProtocolList(PROTDEFAULT_ITEM *,unsigned long,unsigned short *,unsigned long *);
	int EnsureZoneManager();
	int ReadMappings(int,unsigned long *,unsigned long *,unsigned char * *);
	int ShowFormsAlertDialog(HWND__ *,DlgData *);
	int ShowUnlockCDDialog();
	long AddDeleteIPRule(ZONEMAP_COMPONENTS *,unsigned long,unsigned long);
	long AddIPRulesToEnum(unsigned long,CEnumString *);
	long AddSiteAndDomainToList(unsigned short const *,unsigned short const *,PROTDEFAULT_ITEM *,unsigned long,DOMAIN_ITEM_LATEST * *,DOMAIN_ITEM_LATEST * *,DOMAIN_ITEM_LATEST * *);
	long AddUrlsToEnum(CRegKey *,unsigned long,unsigned short const *,int,int,CEnumString *);
	long CheckAddressAgainstRanges(ZONEMAP_COMPONENTS *,unsigned long *,unsigned short const *);
	long CheckHKCUMappings(ZONEMAP_COMPONENTS *,unsigned long *);
	long CheckHKLMMappings(ZONEMAP_COMPONENTS *,unsigned long *);
	long CheckMKURL(ZONEMAP_COMPONENTS *,unsigned long *,unsigned short const *);
	long CheckMappings(ZONEMAP_COMPONENTS *,unsigned long *,DOMAIN_ITEM_LATEST *,DOMAIN_ITEM_LATEST *,int);
	long CheckProtocolDefaults(unsigned short const *,unsigned long *);
	long CheckSiteAndDomainMappings(ZONEMAP_COMPONENTS *,unsigned long *);
	long ConvertMappings(unsigned long *,unsigned long *,unsigned char * *,DOMAIN_ITEM_LATEST * *,DOMAIN_ITEM_LATEST * *);
	long MapUrlToZoneEx2Internal(IUri *,unsigned long *,unsigned long,unsigned short * *,unsigned long *,unsigned long,unsigned long *);
	long ReadAllIPRules();
	long ReadProtocolDefaults();
	long ReadProtocols(CRegKey *,PROTDEFAULT_ITEM *,unsigned long *);
	long ReadSiteAndDomainMappings();
	long ReadSites(int,CRegKey *,DOMAIN_ITEM *);
	long _MapComponentsToZone(ZONEMAP_COMPONENTS *,unsigned long *,unsigned long,TRIBIT *,unsigned short * *,unsigned long,unsigned long *);
	static CSecurityManager::CSecMgrCache s_smcache;
	static HWND__ * SetControlText(HWND__ *,unsigned int,unsigned long,unsigned short const *);
	static __int64 CDUnlockAlertDialog(HWND__ *,unsigned int,unsigned __int64,__int64);
	static __int64 FormsAlertDialogProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	static __int64 ZonesAlertDialogProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	static __int64 ZonesAlertGenericProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	static __int64 ZonesWarnDialogProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	static int EnsureListReady(unsigned long,int);
	static int InitializeAllowedBehaviors();
	static int InitializeDragProtocols(int);
	static int InitializeRestrictedProtocols(int);
	static int IsBrowserHosted();
	static int IsDragRestricted(unsigned short const *,unsigned long,unsigned short const *);
	static int IsProtocolRestricted(unsigned short *,unsigned long);
	static int IsSiteInZone(unsigned short const *,unsigned long,IInternetSecurityManager *);
	static int ShowAddToSitesList(HWND__ *,unsigned short const *,unsigned long);
	static long ComposeUrl(unsigned short const *,unsigned int,unsigned short const *,unsigned int,int,unsigned short * *,unsigned int *);
	static long ComposeUrlSansProtocol(unsigned short const *,unsigned int,unsigned short const *,unsigned int,unsigned short * *,unsigned int *);
	static long ConstructSecurityID(ZONEMAP_COMPONENTS *,IUriPriv *,unsigned char *,unsigned long *,unsigned long,TRIBIT,unsigned short const *,bool);
	static long GetBehaviorPermissions(unsigned char *,unsigned long &);
	static long GetControlPermissions(unsigned char *,unsigned long &);
	static long GetDomainKeyNameForAdding(ZONEMAP_COMPONENTS const *,unsigned short *,unsigned long,int);
	static long GetDomainKeyNameForDeleting(ZONEMAP_COMPONENTS const *,unsigned short *,unsigned long,int);
	static long GetUrlActionRunPermissions(unsigned long,unsigned char *,unsigned long &);
	static long InitializeListFromRegistry(unsigned short *,unsigned short *,unsigned short * * *,unsigned long *);
	static long ReDiscoverDomainAndHost(unsigned short const *,unsigned long,unsigned short const *,unsigned long,unsigned short * *,unsigned long *,unsigned short * *,unsigned long *,int);
	static unsigned long GetAlertIdForAction(unsigned long);
	static unsigned long GetWarnIdForAction(unsigned long);
	static unsigned long s_dwPrevCDCounter;
	static unsigned long s_dwPrevIPRangesCounter;
	static unsigned long s_dwPrevZoneMapCounter;
	static void InitializeAllowedControls();
	static void PickZCString(ZONEMAP_COMPONENTS *,unsigned short const * *,unsigned long *,unsigned short const *);
	static void SetShowDialog(unsigned long);
	void _DoSavedFileCheck(bool,unsigned short const *,unsigned short * *,unsigned long *,long,unsigned long,TRIBIT *,unsigned short * *);
	void _MapPathToZone(ZONEMAP_COMPONENTS *,unsigned long *,unsigned long,TRIBIT *,unsigned short * *);
public:
	CSecurityManager(IUnknown *);
	static CRegKeyZoneMapUSKeyCache * s_pRegKeyZoneMapUSKeyCache;
	static __int64 TrustAlertDialogProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	static int GlobalCleanup();
	static int GlobalInit();
	static long DeleteMappings(DOMAIN_ITEM_LATEST * *);
	static long DeleteProtocolDefaults();
	static long DeleteSiteAndDomainMappings();
	static long ZoneMappingToRegKeyInternal(unsigned long,unsigned short const *,unsigned long *,HKEY__ *);
	static unsigned long ReadCDUnlockPolicy();
	static void WriteCDUnlockPolicy();
	virtual long GetProcessUrlActionEx2Internal(IUri *,unsigned long,unsigned char *,unsigned long,unsigned char *,unsigned long,unsigned long,unsigned __int64,unsigned long *,unsigned long,unsigned long *);
	virtual long GetSecurityId(unsigned short const *,unsigned char *,unsigned long *,unsigned __int64);
	virtual long GetSecurityIdEx2(IUri *,unsigned char *,unsigned long *,unsigned __int64);
	virtual long GetSecurityIdFromUriInternal(IUri *,unsigned char *,unsigned long *,unsigned __int64,unsigned long);
	virtual long GetSecurityIdFromUrlInternal(unsigned short const *,unsigned char *,unsigned long *,unsigned __int64,unsigned long);
	virtual long GetSecuritySite(IInternetSecurityMgrSite * *);
	virtual long GetZoneForUri(IUri *,unsigned long *,unsigned long,unsigned short * *,unsigned long *,unsigned long,unsigned long *);
	virtual long GetZoneMappings(unsigned long,IEnumString * *,unsigned long);
	virtual long MapUriToZoneInternal(IUri *,unsigned long *,unsigned long,unsigned short * *,unsigned long *,unsigned long,unsigned long *);
	virtual long MapUrlToZone(unsigned short const *,unsigned long *,unsigned long);
	virtual long MapUrlToZoneEx2(IUri *,unsigned long *,unsigned long,unsigned short * *,unsigned long *);
	virtual long MapUrlToZoneInternal(unsigned short const *,unsigned long *,unsigned long,unsigned long,unsigned long *);
	virtual long ProcessUrlAction(unsigned short const *,unsigned long,unsigned char *,unsigned long,unsigned char *,unsigned long,unsigned long,unsigned long);
	virtual long ProcessUrlActionEx(unsigned short const *,unsigned long,unsigned char *,unsigned long,unsigned char *,unsigned long,unsigned long,unsigned long,unsigned long *);
	virtual long ProcessUrlActionEx2(IUri *,unsigned long,unsigned char *,unsigned long,unsigned char *,unsigned long,unsigned long,unsigned __int64,unsigned long *);
	virtual long QueryCustomPolicy(unsigned short const *,_GUID const &,unsigned char * *,unsigned long *,unsigned char *,unsigned long,unsigned long);
	virtual long QueryCustomPolicyEx2(IUri *,_GUID const &,unsigned char * *,unsigned long *,unsigned char *,unsigned long,unsigned __int64);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SetSecuritySite(IInternetSecurityMgrSite *);
	virtual long SetZoneMapping(unsigned long,unsigned short const *,unsigned long);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~CSecurityManager();
};

class CSecurityTemplate
{
protected:
	void GenerateGroupPolicies();
public:
	CSecurityTemplate();
	int IsOptionUnsecure(int,unsigned long,unsigned long,unsigned long *,int *);
	int IsSettingPolicyControlled(unsigned long,unsigned long,unsigned long *,unsigned long *);
	long AddUnsecureOption(int,unsigned long,unsigned long);
	long GenerateTemplate();
	long SetDefaultOption(int,unsigned long,unsigned long);
	void DestroyTemplate();
	~CSecurityTemplate();
};

struct CSetup
{
	CSetup(char const *,char const *,FILEXTN,char const *,long *,DESTINATION_DIR);
	long CheckForNameCollision(CCodeDownload *,char const *);
	long DoSetup(CCodeDownload *,CDownload *);
	long InstallFile(CCodeDownload *,char *,int,unsigned short *,unsigned int *);
	long SetSrcFileName(char const *);
};

struct CSetupHook
{
	CSetupHook(CDownload *,char const *,char const *,char const *,unsigned long,long *);
	char * GetHookDir();
	long Run();
	long TranslateString();
	static long ExpandCommandLine(char *,char *,unsigned long,char const * * const,char const * * const);
	static long ExpandVar(char * &,char * &,unsigned long &,unsigned long,char const * * const,char const * * const);
};

class CSharedMem
{
	long _InitInternal(unsigned short const *,unsigned long,int,unsigned long);
public:
	int GetCounter(unsigned long,unsigned long *);
	int IncrementCounter(unsigned long);
	int IsCounterEqual(unsigned long,unsigned long,int);
	int SetCounter(unsigned long,unsigned long);
	void Release();
};

struct CShellDll
{
	HINSTANCE__ * ShellExecuteA(HWND__ *,char const *,char const *,char const *,char const *,int);
	long Init();
};

class CSoftDist
{
	int IsAuthorizedCDF(HKEY__ *,int);
	int IsCDFNewerVersion(unsigned long,unsigned long);
	long ActSetupAdvertise(int);
	long Advertise(int);
	long CheckConfig(IXMLElement *);
	long CheckDependency(IXMLElement *);
	long ICDAdvertise(int);
	long IsActSetupAdvertised(int *,int *);
	long IsActSetupLocallyInstalled(unsigned short const *,unsigned long,unsigned long,char const *);
	long IsICDAdvertised(int *,int *);
	long IsICDLocallyInstalled(unsigned short const *,unsigned long,unsigned long,char const *);
	long IsLocallyInstalled(unsigned short const *,unsigned long,unsigned long,char const *,unsigned long);
	long IsLogo3Advertised(int *,int *);
	long IsLogo3LocallyInstalled(unsigned short const *,unsigned long,unsigned long,char const *);
	long Logo3Advertise(int);
public:
	CSoftDist();
	long Logo3Download(unsigned short *);
	long Logo3DownloadNext();
	long Logo3DownloadRedundant();
	virtual long AsyncInstallDistributionUnit(IBindCtx *,void *,unsigned long,_tagCODEBASEHOLD *);
	virtual long GetFirstCodeBase(unsigned short * *,unsigned long *);
	virtual long GetNextCodeBase(unsigned short * *,unsigned long *);
	virtual long ProcessSoftDist(unsigned short const *,IXMLElement *,_tagSOFTDISTINFO *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	~CSoftDist();
};

class CSpecificInPrivateBrowserModeFilter
{
protected:
	virtual int _EnsureCLSID();
public:
	long SetFilterName(unsigned short const *);
};

struct CTSimpleArray<unsigned short,4294967294,CTPolicyCoTaskMem<unsigned short> >
{
	long Add(unsigned short const &,unsigned __int64 *);
	void RemoveAll();
};

class CTStringBuilder<unsigned short,4294967294,CTPolicyCoTaskMem<unsigned short> >
{
	int _IsThereANullTerminator();
	long _EnsureNullTerminator();
public:
	long Append(unsigned short const *);
	long Append(unsigned short const *,unsigned __int64);
	long AppendFormat(unsigned short const *,...);
};

struct CThreadSafeCompatCacheList
{
	virtual void Lock();
	virtual void Unlock();
};

class CTransData
{
	CTransData(CTransaction *,unsigned char *,unsigned long,int);
	bool IsDownloadToDestinationPath();
	~CTransData();
public:
	DataSink SwitchDataSink(DataSink);
	long CopyHttpHeaderData(ITransactionData *);
	long GetAcceptStr(unsigned short * *,unsigned long *);
	long GetClassID(_GUID,_GUID *,int,int);
	long GetData(tagFORMATETC * *,tagSTGMEDIUM * *,unsigned long);
	long Initialize(unsigned short const *,BindFlags,_GUID const &,IBindCtx *,int);
	long OnDataReceived(unsigned long,unsigned long,unsigned long,unsigned long *);
	long OnTerminate();
	long QueryInfoFromCachedHeader(unsigned long,char *,unsigned long *);
	long SaveHttpHeaderData(IWinInetHttpInfo *);
	long SetFileName(unsigned short *);
	long SetMimeType(unsigned short const *);
	long SetServerSpecifiedMimeType(unsigned short const *);
	virtual long GetHttpHeaderData(unsigned short const *,unsigned long,char *,unsigned long *);
	virtual long GetTransactionData(unsigned short const *,unsigned short * *,unsigned short * *,unsigned long *,unsigned long *,unsigned long);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CTransPacket
{
	CTransPacket & operator=(CTransPacket const &);
	CTransPacket(tagBINDSTATUS,long,unsigned short const *,unsigned long,unsigned long,unsigned long);
};

class CTransaction
{
	bool IsFetchEnabledClient();
protected:
	CTransaction(unsigned long);
	static long AppendFragmentOnRedirectedUri(IUri *,IUri *,IUri * *);
	void CloseNotificationWindow();
	void EnsureINetCallback(bool);
	void Init(unsigned long);
	void SetProtocolPriority();
	void SetResultOnSynchronousStartFailure(long);
	void _TryLoadMimeFilter(unsigned short const *);
public:
	CTransPacket * GetNextCTransPacket();
	int GotCTransPacket();
	int IsApartmentThread();
	long CreateIUriFromUrl(unsigned short const *,IUri * *);
	long DispatchPacket(CTransPacket *);
	long DispatchReport(tagBINDSTATUS,unsigned long,unsigned long,unsigned long,unsigned short const *,unsigned long,long);
	long IncrementAndCheckHttpRedirectionCount(IUri *);
	long LoadMimeFilter(unsigned short const *,COInetProt *,unsigned long,int);
	long OnAttach(IUri *,IInternetBindInfo *,IInternetProtocolSink *,unsigned long,unsigned __int64);
	long PrepareThreadTransfer();
	long SecurityCheckOnRedirect(IUri *);
	long SetRedirectIUri(IUri *);
	long ThreadTransfer();
	virtual HWND__ * GetNotificationWnd();
	virtual IUnknown * GetInnerUnknownForTransAggregatedProtocols();
	virtual int IsMonikerBind();
	virtual int IsNullOrigin();
	virtual long AddTransactionFlags(unsigned long);
	virtual long EnablePreBinding(int);
	virtual long GetAsyncHost(IWebPlatformAsyncHost * *);
	virtual long GetBindCtx(IBindCtx * *);
	virtual long GetBindInfo(unsigned long *,_tagBINDINFO *);
	virtual long GetBindInfoEx(unsigned long *,_tagBINDINFO *,unsigned long *,unsigned long *);
	virtual long GetBindString(unsigned long,unsigned short * *,unsigned long,unsigned long *);
	virtual long GetDownloadInitiator(tagDOWNLOADINITIATORINFO *);
	virtual long GetDownloadModeHandle(void * *);
	virtual long GetDownloadPriorityInfo(__MIDL___MIDL_itf_urlmonp_0000_0026_0001 *,__MIDL___MIDL_itf_urlmonp_0000_0026_0002 *,__MIDL___MIDL_itf_urlmonp_0000_0026_0003 *,__MIDL___MIDL_itf_urlmonp_0000_0026_0004 *,long *);
	virtual long GetFinalRedirectSource(IUri * *);
	virtual long GetIUri(IUri * *);
	virtual long GetInternalBindOption(unsigned long,void * *,unsigned long *);
	virtual long GetObjectNoAddRef(unsigned __int64 *);
	virtual long GetPriority(long *);
	virtual long GetRequestTimeouts(unsigned long *,unsigned long *,unsigned long *);
	virtual long GetTransactionFlags(unsigned long *);
	virtual long GetTransactionMsgId(unsigned long *);
	virtual long GetWrapperCode(long *,unsigned __int64);
	virtual long PostDispatch();
	virtual long PreDispatch();
	virtual long QueryBindFlags(unsigned long *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Reset4GBDownloadFlag();
	virtual long ResetRedirectKeepVerbFlag();
	virtual long ResumeMainBinding();
	virtual long Set4GBDownloadFlag();
	virtual long SetDownloadPriorityInfo(__MIDL___MIDL_itf_urlmonp_0000_0026_0001,__MIDL___MIDL_itf_urlmonp_0000_0026_0002,__MIDL___MIDL_itf_urlmonp_0000_0026_0003,__MIDL___MIDL_itf_urlmonp_0000_0026_0004,long);
	virtual long SetPriority(long);
	virtual long SetRedirectKeepVerbFlag();
	virtual long SetTransactionFlags(unsigned long);
	virtual long ValidateClsId(_GUID *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual void GetInitialNavigationUri(IUri * *);
	virtual void SetNullOrigin();
	virtual ~CTransaction();
	void AddCTransPacket(CTransPacket *,int);
	void ResumeDispatchingPackets();
	void SuspendDispatchingPackets(CTransPacket *);
	void UpdateCacheFileName(unsigned short const *);
};

struct CTransactionManager
{
	bool ItemExists(CTransaction *,unsigned long);
	bool RemoveItem(CTransaction *,unsigned long);
};

struct CUString
{
	CUString(IUri *,__MIDL_IUri_0001,long *);
	long Set(IUri *,__MIDL_IUri_0001);
	virtual ~CUString();
};

class CUrlMkTls
{
	long TLSAllocData();
public:
	CUrlMkTls(long &);
};

class CUrlMon
{
	int IsUrlMoniker(IMoniker *);
	long IsRunningROT(IBindCtx *,IMoniker *,IRunningObjectTable * *);
	long LoadIE7Beta1(IStream *);
	long LoadIE7OrIE6(IStream *);
	long SetIUri(IUri *);
	long SetUrl(unsigned short const *);
	long StartBinding(int,IBindCtx *,IMoniker *,_GUID const &,void * *);
	long ValidateMarshalParams(_GUID const &,void *,unsigned long,void *,unsigned long);
public:
	CUrlMon(IUri *,unsigned long);
	CUrlMon(unsigned short const *,unsigned long);
	virtual long BindToObject(IBindCtx *,IMoniker *,_GUID const &,void * *);
	virtual long BindToStorage(IBindCtx *,IMoniker *,_GUID const &,void * *);
	virtual long CommonPrefixWith(IMoniker *,IMoniker * *);
	virtual long ComposeWith(IMoniker *,int,IMoniker * *);
	virtual long DisconnectObject(unsigned long);
	virtual long Enum(int,IEnumMoniker * *);
	virtual long GetClassID(_GUID *);
	virtual long GetComparisonData(unsigned char *,unsigned long,unsigned long *);
	virtual long GetDisplayName(IBindCtx *,IMoniker *,unsigned short * *);
	virtual long GetIUri(IUri * *);
	virtual long GetMarshalSizeMax(_GUID const &,void *,unsigned long,void *,unsigned long,unsigned long *);
	virtual long GetSizeMax(_ULARGE_INTEGER *);
	virtual long GetTimeOfLastChange(IBindCtx *,IMoniker *,_FILETIME *);
	virtual long GetUnmarshalClass(_GUID const &,void *,unsigned long,void *,unsigned long,_GUID *);
	virtual long Hash(unsigned long *);
	virtual long Inverse(IMoniker * *);
	virtual long IsDirty();
	virtual long IsEqual(IMoniker *);
	virtual long IsRunning(IBindCtx *,IMoniker *,IMoniker *);
	virtual long IsSystemMoniker(unsigned long *);
	virtual long Load(IStream *);
	virtual long MarshalInterface(IStream *,_GUID const &,void *,unsigned long,void *,unsigned long);
	virtual long ParseDisplayName(IBindCtx *,IMoniker *,unsigned short *,unsigned long *,IMoniker * *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Reduce(IBindCtx *,unsigned long,IMoniker * *,IMoniker * *);
	virtual long RelativePathTo(IMoniker *,IMoniker * *);
	virtual long ReleaseMarshalData(IStream *);
	virtual long Save(IStream *,int);
	virtual long UnmarshalInterface(IStream *,_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CUrlZoneManager
{
	struct CPrivUnknown
	{
		virtual long QueryInterface(_GUID const &,void * *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
	};

	int IsSettingSecure(CSecurityTemplate *,unsigned long,unsigned long,int,int,int);
	long GetZoneSecurityStateInternal(CSecurityTemplate *,unsigned long,unsigned long *,int,int,int *,int);
protected:
	static CRegZoneContainer * s_pRegLockZoneContainer;
	static CRegZoneContainer * s_pRegZoneContainer;
public:
	CUrlZoneManager(IUnknown *);
	static _RTL_CRITICAL_SECTION s_csect;
	static int s_bcsectInit;
	virtual int Initialize();
	virtual long CopyTemplatePoliciesToZone(unsigned long,unsigned long,unsigned long);
	virtual long CreateZoneEnumerator(unsigned long *,unsigned long *,unsigned long);
	virtual long DestroyZoneEnumerator(unsigned long);
	virtual long FixUnsecureSettings();
	virtual long GetIESecurityState(int,unsigned long *,int *,int);
	virtual long GetZoneActionPolicy(unsigned long,unsigned long,unsigned char *,unsigned long,_URLZONEREG);
	virtual long GetZoneActionPolicyEx(unsigned long,unsigned long,unsigned char *,unsigned long,_URLZONEREG,unsigned long);
	virtual long GetZoneAt(unsigned long,unsigned long,unsigned long *);
	virtual long GetZoneAttributes(unsigned long,_ZONEATTRIBUTES *);
	virtual long GetZoneAttributesEx(unsigned long,_ZONEATTRIBUTES *,unsigned long);
	virtual long GetZoneCustomPolicy(unsigned long,_GUID const &,unsigned char * *,unsigned long *,_URLZONEREG);
	virtual long GetZoneSecurityState(unsigned long,int,unsigned long *,int *);
	virtual long LogAction(unsigned long,unsigned short const *,unsigned short const *,unsigned long);
	virtual long PromptAction(unsigned long,HWND__ *,unsigned short const *,unsigned short const *,unsigned long);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SetZoneActionPolicy(unsigned long,unsigned long,unsigned char *,unsigned long,_URLZONEREG);
	virtual long SetZoneActionPolicyEx(unsigned long,unsigned long,unsigned char *,unsigned long,_URLZONEREG,unsigned long);
	virtual long SetZoneAttributes(unsigned long,_ZONEATTRIBUTES *);
	virtual long SetZoneCustomPolicy(unsigned long,_GUID const &,unsigned char *,unsigned long,_URLZONEREG);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CUrlmonSharedMemoryUtil
{
	static long GetHandleName(unsigned short *,unsigned __int64);
};

class CUserBrowserModeFilter
{
	long _AddUnattendSettings();
	virtual int _IsUptoDate();
	virtual long _EnsureFilterIfNoDataFound();
	virtual long _GetCounterValue();
	virtual long _IncrementCounterValue();
	virtual void _PruneData();
protected:
	virtual long _DeleteData();
	virtual long _GetDataStream(unsigned long,IStream * *);
public:
	virtual long GetBrowserEmulationData(unsigned short * *);
};

struct CVersion
{
	long Init();
	unsigned long GetFileVersionInfoA(char *,unsigned long,unsigned long,void *);
	unsigned long GetFileVersionInfoSizeA(char *,unsigned long *);
	unsigned long VerQueryValueA(void * const,char *,void * *,unsigned int *);
	~CVersion();
};

class CVersionManagerClient
{
	long _CacheEntry(unsigned short const *,unsigned short *,unsigned short *,bool,bool);
	long _CreateCacheKey(unsigned short const *,unsigned short const *,unsigned short * *);
	long _GetCachedEntry(unsigned short const *,CACHE_ENTRY * *,int *);
	long _GetShdocvwBroker(ATL::CComPtr<IShdocvwBroker> &);
	static void s_CacheItemDestroyCallback(CACHE_ENTRY *);
public:
	long Initialize();
	virtual long IsVersionAllowed(unsigned short const *,unsigned short const *,unsigned short const *,int,int,unsigned short * *,unsigned short * *,int *,int *);
	virtual ~CVersionManagerClient();
};

class CVersionManagerServer
{
	CVersionManagerServer::TELEMETRY_PARAMS * _TelParamsDequeue();
	long _AcquireBlockListMutexIfNeeded(MutexUtils::CAutoMutex *,int);
	long _CreateBlockListManager(CBlockListManager * *,unsigned short const *,int);
	long _CreateLocalDirectory(unsigned short const *);
	long _DebugDownload(_FILETIME *,_FILETIME *);
	long _DownloadBlockListToTempFile(void *,unsigned short *,unsigned long);
	long _DownloadVersionList(int *);
	long _EnsureLoadedBlockListIsLatestNotThreadSafe(int);
	long _ForceLoadFullBlockListNotThreadSafe(CBlockListManager *,unsigned short const *,int,int);
	long _GetFileTime(SettingStore::VALUEID<unsigned long>,SettingStore::VALUEID<unsigned long>,_FILETIME *,int);
	long _GetGroupEntry(unsigned short const *,tagENTRY_TYPE,int,BLOCKLIST_ENTRY const *,EXT_FILEINFO *,GROUP_ENTRY const * *,int *);
	long _InitializeDomainWhitelist();
	long _IsEntryExcludedFromVersionCheck(unsigned short const *,EXT_SQM_VERSION_REASON *,tagENTRY_TYPE,int *);
	long _IsUriExcludedFromVersionCheckNotThreadSafe(IInternetSecurityManagerEx2 *,IUri *,EXT_SQM_VERSION_REASON *,int *,tagURLZONE *);
	long _IsVersionAllowedInternal(unsigned short const *,unsigned short const *,tagENTRY_TYPE,int,IInternetSecurityManagerEx2 *,IUri *,unsigned short * *,unsigned short * *,int *,int *);
	long _LogAuditEvent(unsigned short *,unsigned short const *,unsigned long,unsigned long,unsigned long,unsigned long,EXT_SQM_VERSION_STATE,EXT_SQM_VERSION_REASON,int);
	long _LogAuditEventWMI(unsigned short *,unsigned short const *,tagENTRY_TYPE,unsigned short const *,unsigned long,unsigned long,unsigned long,unsigned long,int,int,EXT_SQM_VERSION_REASON);
	long _ReadRegistrySettings();
	long _SetFileTimeWithFailureFallback(SettingStore::VALUEID<unsigned long>,SettingStore::VALUEID<unsigned long>,_FILETIME *,_FILETIME *,int);
	long _SqmReasonToString(EXT_SQM_VERSION_REASON,char *,unsigned __int64);
	long _SqmReasonToStringW(EXT_SQM_VERSION_REASON,unsigned short *,unsigned __int64);
	long _StartDownloadTimer();
	long _StartNextTimer();
	long _SwitchBlockListNotThreadSafe(CBlockListManager * *,int);
	long _TelParamsEnqueue(CVersionManagerServer::TELEMETRY_PARAMS *);
	long _WideToAnsi(unsigned short const *,char * *,unsigned long *);
	static void s_DownloadTimerCallback(_TP_CALLBACK_INSTANCE *,void *,_TP_TIMER *);
	static void s_TelParamsFree(CVersionManagerServer::TELEMETRY_PARAMS *);
	static void s_TelemetryWorkCallback(_TP_CALLBACK_INSTANCE *,void *,_TP_WORK *);
	void _AddTraceLogEntry(unsigned short const *,unsigned short const *,unsigned long,unsigned long,unsigned long,unsigned long,unsigned short const *,unsigned short const *,bool,tagURLZONE,unsigned long,unsigned short const *,bool,bool,unsigned long,unsigned long,unsigned long,unsigned long,bool);
	void _HandleAbandonedBlockListMutex();
public:
	CVersionManagerServer();
	long Initialize();
	virtual long IsVersionAllowed(unsigned short const *,unsigned short const *,unsigned short const *,int,int,unsigned short * *,unsigned short * *,int *,int *);
	virtual ~CVersionManagerServer();
};

class CWebPlatformSecurityManager
{
	long _CreateUriInternal(unsigned short const *,unsigned long,IUri * *);
	long _MapUrlToZoneInternal(IUri *,unsigned long *,unsigned long,unsigned short * *,unsigned long *,unsigned long,unsigned long *);
	long _ProcessUrlActionInternal(unsigned long,unsigned long,unsigned char *,unsigned long);
protected:
	CWebPlatformSecurityManager();
	virtual ~CWebPlatformSecurityManager();
public:
	static long CreateWebPlatformPermanentSecurityManager(IWebPlatformPermanentSecurityManager *,IInternetSecurityManagerEx2 * *);
	virtual long GetProcessUrlActionEx2Internal(IUri *,unsigned long,unsigned char *,unsigned long,unsigned char *,unsigned long,unsigned long,unsigned __int64,unsigned long *,unsigned long,unsigned long *);
	virtual long GetSecurityId(unsigned short const *,unsigned char *,unsigned long *,unsigned __int64);
	virtual long GetSecurityIdEx2(IUri *,unsigned char *,unsigned long *,unsigned __int64);
	virtual long GetSecurityIdFromUriInternal(IUri *,unsigned char *,unsigned long *,unsigned __int64,unsigned long);
	virtual long GetSecurityIdFromUrlInternal(unsigned short const *,unsigned char *,unsigned long *,unsigned __int64,unsigned long);
	virtual long GetSecuritySite(IInternetSecurityMgrSite * *);
	virtual long GetZoneActionPolicyEx(unsigned long,unsigned long,unsigned char *,unsigned long,_URLZONEREG,unsigned long);
	virtual long GetZoneMappings(unsigned long,IEnumString * *,unsigned long);
	virtual long IsRegisteredHostPermanentSecurityManager(IWebPlatformPermanentSecurityManager *,int *);
	virtual long MapUriToZoneInternal(IUri *,unsigned long *,unsigned long,unsigned short * *,unsigned long *,unsigned long,unsigned long *);
	virtual long MapUrlToZone(unsigned short const *,unsigned long *,unsigned long);
	virtual long MapUrlToZoneEx2(IUri *,unsigned long *,unsigned long,unsigned short * *,unsigned long *);
	virtual long MapUrlToZoneInternal(unsigned short const *,unsigned long *,unsigned long,unsigned long,unsigned long *);
	virtual long ProcessUrlAction(unsigned short const *,unsigned long,unsigned char *,unsigned long,unsigned char *,unsigned long,unsigned long,unsigned long);
	virtual long ProcessUrlActionEx(unsigned short const *,unsigned long,unsigned char *,unsigned long,unsigned char *,unsigned long,unsigned long,unsigned long,unsigned long *);
	virtual long ProcessUrlActionEx2(IUri *,unsigned long,unsigned char *,unsigned long,unsigned char *,unsigned long,unsigned long,unsigned __int64,unsigned long *);
	virtual long QueryCustomPolicy(unsigned short const *,_GUID const &,unsigned char * *,unsigned long *,unsigned char *,unsigned long,unsigned long);
	virtual long QueryCustomPolicyEx2(IUri *,_GUID const &,unsigned char * *,unsigned long *,unsigned char *,unsigned long,unsigned __int64);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long RegisterHostPermanentSecurityManager(IWebPlatformPermanentSecurityManager *);
	virtual long SetSecuritySite(IInternetSecurityMgrSite *);
	virtual long SetZoneMapping(unsigned long,unsigned short const *,unsigned long);
	virtual long UnregisterHostPermanentSecurityManager();
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CZoneIdentifier
{
	long _GetZoneId(unsigned short const *,unsigned long *);
	long _SetZoneId(unsigned short const *,unsigned long);
	long _UpdateFile(unsigned short const *);
	virtual ~CZoneIdentifier();
public:
	static long CreateInstance(CZoneIdentifier * *);
	virtual long DoesRemoveRequireElevation(unsigned short const *,int *);
	virtual long GetAppZoneId(unsigned long *);
	virtual long GetClassID(_GUID *);
	virtual long GetCurFile(unsigned short * *);
	virtual long GetId(unsigned long *);
	virtual long GetLastWriterPackageFamilyName(unsigned short * *);
	virtual long GetNameAt(unsigned long,unsigned short * *);
	virtual long GetNameCount(unsigned long *);
	virtual long GetNamedValue(unsigned short const *,unsigned short * *);
	virtual long IsDirty();
	virtual long Load(unsigned short const *,unsigned long);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Remove();
	virtual long RemoveAppZoneId();
	virtual long RemoveLastWriterPackageFamilyName();
	virtual long RemoveNamedValue(unsigned short const *);
	virtual long Save(unsigned short const *,int);
	virtual long SaveCompleted(unsigned short const *);
	virtual long SetAppZoneId(unsigned long);
	virtual long SetId(unsigned long);
	virtual long SetLastWriterPackageFamilyName(unsigned short const *);
	virtual long SetNamedValue(unsigned short const *,unsigned short const *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

namespace ControlLogging
{
	class CLogInformation
	{
	protected:
		long IECompatGetSignatureStateString(tagIE_SIGNATURE_INFO *,unsigned short *,unsigned long);
	public:
		void ExtractSignatureInfo(unsigned short *,unsigned short *,unsigned short *,unsigned short *);
	};

};

class Cwvt
{
	int AreSimilarCerts(unsigned short const *,unsigned short const *,tagIE_SIGNATURE_INFO *);
	int CryptCATAdminAcquireContext(void * *,_GUID *,unsigned long);
	int CryptCATAdminCalcHashFromFileHandle(void *,unsigned long *,unsigned char *,unsigned long);
	int CryptCATAdminReleaseCatalogContext(void *,void *,unsigned long);
	int CryptCATAdminReleaseContext(void *,unsigned long);
	int CryptCATCatalogInfoFromContext(void *,CATALOG_INFO_ *,unsigned long);
	int GetUntrustedControlsRegPath(_GUID const &,unsigned short *,unsigned long);
	int IsUpgrade(_GUID const &,unsigned short const *,tagIE_SIGNATURE_INFO *);
	int WriteUntrustedControlDetails(_GUID const &,unsigned short const *,tagIE_SIGNATURE_INFO *);
	long CheckHashRestrictionPolicies(void *);
	long InvokeWinVerifyTrust(void *,HWND__ *,unsigned long,_COR_TRUST * *,unsigned short const *,IInternetHostSecurityManager *,unsigned short const *,char *,int,CDownload *);
	void * CryptCATAdminAddCatalog(void *,unsigned short *,unsigned short *,unsigned long);
	void * CryptCATAdminEnumCatalogFromHash(void *,unsigned char *,unsigned long,unsigned long,void * *);
	void GetSafeDisplayName(tagIE_SIGNATURE_INFO *,unsigned short const *,unsigned short *,unsigned long);
	void NotifyControlDetails(CDownload *,unsigned short const *,tagIE_SIGNATURE_INFO *);
public:
	long Init();
	long InstallCatalogFile(CCodeDownload *,char const *);
	long IsValidCatalogFile(unsigned short const *);
	long VerifyFileAgainstSystemCatalog(char const *,unsigned short *,unsigned long *);
	long VerifyTrust(void *,HWND__ *,_COR_TRUST * *,unsigned short const *,IInternetHostSecurityManager *,char *,CDownload *);
	long VerifyTrustOnCatalogFile(unsigned short const *);
};

struct DebugLogElement
{
	long SetLogMessage(char *);
	virtual ~DebugLogElement();
};

class DomainFilter
{
protected:
	void AddSubFilter(bool,char const *);
public:
	_FilterPolicy::FilterPolicy MatchDomainFilter(char const *,bool);
	void ClearSubFilters(bool);
};

struct DomainFilters
{
	_FilterPolicy::FilterPolicy MatchDomainFilters(char const *,char const *);
	long AddDomainFilter(char const *,bool,char const *);
};

namespace DualEngine
{
	bool ConfigurableSitesEnabled();
	bool IsConfigurableSite(IUri *,bool);
	bool IsConfigurableSite(unsigned short const *,bool);
	bool IsDualEngineNavigationSticky(DualEngine::DualEngineNavigationType);
	bool ShouldUriContinueNavigationInEdge(IUri *,bool,DualEngine::DualEngineNavigationType);
	bool ShouldUrlContinueNavigationInEdge(unsigned short const *,bool,DualEngine::DualEngineNavigationType);
};

class EdgeTransaction
{
	TransactionState GetState();
	bool GetProtocol(IInternetProtocol * *);
	bool IsChangingLockedState();
	bool IsLocked();
	bool IsTerminated();
	bool SetState(TransactionState);
	bool StateIsSafeForClientCall();
	bool StateIsSafeForProtocolCall();
	void CleanupProtocol();
protected:
	virtual long GetClientBindInfo(IInternetBindInfo * *);
	virtual long GetClientSink(IInternetProtocolSink * *);
	virtual void RemoveClientOInet();
	virtual void SetClientBindInfo(IInternetBindInfo *);
	virtual void SetClientSink(IInternetProtocolSink *,bool);
public:
	EdgeTransaction(unsigned long);
	virtual long Abort(long,unsigned long);
	virtual long AllowRedirect(unsigned short *);
	virtual long Authenticate(HWND__ * *,unsigned short * *,unsigned short * *);
	virtual long CompleteOperation(int);
	virtual long Continue(_tagPROTOCOLDATA *);
	virtual long GetBindCtx(IBindCtx * *);
	virtual long GetBindInfo(unsigned long *,_tagBINDINFO *);
	virtual long GetBindInfoEx(unsigned long *,_tagBINDINFO *,unsigned long *,unsigned long *);
	virtual long GetBindString(unsigned long,unsigned short * *,unsigned long,unsigned long *);
	virtual long GetDownloadInitiator(tagDOWNLOADINITIATORINFO *);
	virtual long GetDownloadModeHandle(void * *);
	virtual long GetInternalBindOption(unsigned long,void * *,unsigned long *);
	virtual long LockRequest(unsigned long);
	virtual long MyPeekMessage(tagMSG *,HWND__ *,unsigned int,unsigned int,unsigned int);
	virtual long OnINetCallback(int);
	virtual long OnINetInternalCallback(CTransPacket *);
	virtual long QueryService(_GUID const &,_GUID const &,void * *);
	virtual long Read(void *,unsigned long,unsigned long *);
	virtual long Redirect(IUri *);
	virtual long ReportData(unsigned long,unsigned long,unsigned long);
	virtual long ReportProgress(unsigned long,unsigned short const *);
	virtual long ReportResult(long,unsigned long,unsigned short const *);
	virtual long RestartOperation(IUri *,unsigned short *);
	virtual long Resume();
	virtual long Seek(_LARGE_INTEGER,unsigned long,_ULARGE_INTEGER *);
	virtual long Start(unsigned short const *,IInternetProtocolSink *,IInternetBindInfo *,unsigned long,unsigned __int64);
	virtual long StartEx(IUri *,IInternetProtocolSink *,IInternetBindInfo *,unsigned long,unsigned __int64);
	virtual long Suspend();
	virtual long Switch(_tagPROTOCOLDATA *);
	virtual long Terminate(unsigned long);
	virtual long UnlockRequest();
	virtual unsigned long GetMaxHTTPRedirects();
	virtual ~EdgeTransaction();
};

namespace FCK
{
	CFeatureControlKey FEATURE_ALWAYS_SEND_EXTENDED_UA_STRING;
	CFeatureControlKey FEATURE_BLOCK_WEAK_ENCRYPTION;
	CFeatureControlKey FEATURE_BROWSER_COMPATDATA;
	CFeatureControlKey FEATURE_BROWSER_EMULATION;
	CFeatureControlKey FEATURE_CREATE_URL_MONIKER_DISABLE_LEGACY_COMPAT;
	CFeatureControlKey FEATURE_DISABLE_DATAURI_SUPPORT;
	CFeatureControlKey FEATURE_DISABLE_IGNORE_ZONE_FOR_SECURITYID;
	CFeatureControlKey FEATURE_DISABLE_INTERNAL_SECURITY_MANAGER;
	CFeatureControlKey FEATURE_ENABLE_SCRIPT_PASTE_URLACTION_IF_PROMPT;
	CFeatureControlKey FEATURE_ENSURE_SECURE_SETTINGS_ON_UPDATE_KB943141;
	CFeatureControlKey FEATURE_EPM_SPECIAL_FOLDER_LOWIL;
	CFeatureControlKey FEATURE_FILEPROTOCOL_NOFINDFIRST_KB947853;
	CFeatureControlKey FEATURE_GPU_CACHE;
	CFeatureControlKey FEATURE_IEXPLORE_USE_FEEDVIEWER_ON_FEED_MIMETYPE_DETECTION_KB2920147;
	CFeatureControlKey FEATURE_IGNORE_POLICIES_ZONEMAP_IF_ESC_ENABLED_KB918915;
	CFeatureControlKey FEATURE_IGNORE_ZONES_INITIALIZATION_FAILURE_KB945701;
	CFeatureControlKey FEATURE_INITIALIZE_URLACTION_SHELLEXECUTE_TO_ALLOW_KB936610;
	CFeatureControlKey FEATURE_INPRIVATE_BLOCKING;
	CFeatureControlKey FEATURE_IPERSISTMONIKER_LOAD_REDIRECTED_URL_KB976425;
	CFeatureControlKey FEATURE_ISOLATE_NAMED_WINDOWS;
	CFeatureControlKey FEATURE_MAXCONNECTIONSPER1_0SERVER;
	CFeatureControlKey FEATURE_MAXCONNECTIONSPERSERVER;
	CFeatureControlKey FEATURE_MIME_TREAT_IMAGE_AS_AUTHORITATIVE;
	CFeatureControlKey FEATURE_MIME_USE_BUILTIN_ACCEPT_HEADERS;
	CFeatureControlKey FEATURE_NINPUT_LEGACYMODE;
	CFeatureControlKey FEATURE_NO_FIEF_UI;
	CFeatureControlKey FEATURE_READ_ZONE_STRINGS_FROM_REGISTRY;
	CFeatureControlKey FEATURE_RELEASE_CALLBACK_ON_STOP_BINDING;
	CFeatureControlKey FEATURE_RESPECT_OBJECTSAFETY_POLICY_KB905547;
	CFeatureControlKey FEATURE_RESTRICTED_ZONE_WHEN_FILE_NOT_FOUND;
	CFeatureControlKey FEATURE_RESTRICT_CDL;
	CFeatureControlKey FEATURE_RESTRICT_CDL_CLSIDSNIFF;
	CFeatureControlKey FEATURE_RESTRICT_LEGACY_JSCRIPT_PER_SECURITY_ZONE;
	CFeatureControlKey FEATURE_SHOW_CERT_WARNINGS_ON_POST_FROM_ISTREAM_KB2894776;
	CFeatureControlKey FEATURE_SHOW_FAILED_CONNECT_CONTENT_KB942615;
	CFeatureControlKey FEATURE_URLMON_IQDA_SIZE;
	CFeatureControlKey FEATURE_USE_IETLDLIST_FOR_DOMAIN_DETERMINATION;
	CFeatureControlKey FEATURE_USE_SHORT_NAMES_AX_CDL_KB2310253;
	CFeatureControlKey FEATURE_WEBOC_ENABLE_HTTP2;
	CFeatureControlKey FEATURE_WININET_FTP_FOLDER_VIEW_KB939653;
	CFeatureControlKey FEATURE_ZONES_CHECK_ZONEMAP_POLICY_KB941001;
	CFeatureControlKey FEATURE_ZONES_DEFAULT_DRIVE_INTRANET_KB941000;
	CFeatureControlKey FEATURE_ZONES_MUTZ_DISABLE_LANMANCHECK;
	CFeatureControlKey PRIVATE_INTERNETFEATURELIST_FEATURE_ADDON_MANAGEMENT;
	CFeatureControlKey PRIVATE_INTERNETFEATURELIST_FEATURE_BEHAVIORS;
	CFeatureControlKey PRIVATE_INTERNETFEATURELIST_FEATURE_BLOCK_INPUT_PROMPTS;
	CFeatureControlKey PRIVATE_INTERNETFEATURELIST_FEATURE_DISABLE_LEGACY_COMPRESSION;
	CFeatureControlKey PRIVATE_INTERNETFEATURELIST_FEATURE_DISABLE_MK_PROTOCOL;
	CFeatureControlKey PRIVATE_INTERNETFEATURELIST_FEATURE_DISABLE_NAVIGATION_SOUNDS;
	CFeatureControlKey PRIVATE_INTERNETFEATURELIST_FEATURE_DISABLE_TELNET_PROTOCOL;
	CFeatureControlKey PRIVATE_INTERNETFEATURELIST_FEATURE_FEEDS;
	CFeatureControlKey PRIVATE_INTERNETFEATURELIST_FEATURE_FORCE_ADDR_AND_STATUS;
	CFeatureControlKey PRIVATE_INTERNETFEATURELIST_FEATURE_GET_URL_DOM_FILEPATH_UNENCODED;
	CFeatureControlKey PRIVATE_INTERNETFEATURELIST_FEATURE_HTTP_USERNAME_PASSWORD_DISABLE;
	CFeatureControlKey PRIVATE_INTERNETFEATURELIST_FEATURE_LOCALMACHINE_LOCKDOWN;
	CFeatureControlKey PRIVATE_INTERNETFEATURELIST_FEATURE_MIME_HANDLING;
	CFeatureControlKey PRIVATE_INTERNETFEATURELIST_FEATURE_MIME_SNIFFING;
	CFeatureControlKey PRIVATE_INTERNETFEATURELIST_FEATURE_OBJECT_CACHING;
	CFeatureControlKey PRIVATE_INTERNETFEATURELIST_FEATURE_PROTOCOL_LOCKDOWN;
	CFeatureControlKey PRIVATE_INTERNETFEATURELIST_FEATURE_RESTRICT_ACTIVEXINSTALL;
	CFeatureControlKey PRIVATE_INTERNETFEATURELIST_FEATURE_RESTRICT_FILEDOWNLOAD;
	CFeatureControlKey PRIVATE_INTERNETFEATURELIST_FEATURE_SAFE_BINDTOOBJECT;
	CFeatureControlKey PRIVATE_INTERNETFEATURELIST_FEATURE_SECURITYBAND;
	CFeatureControlKey PRIVATE_INTERNETFEATURELIST_FEATURE_SSLUX;
	CFeatureControlKey PRIVATE_INTERNETFEATURELIST_FEATURE_TABBED_BROWSING;
	CFeatureControlKey PRIVATE_INTERNETFEATURELIST_FEATURE_UNC_SAVEDFILECHECK;
	CFeatureControlKey PRIVATE_INTERNETFEATURELIST_FEATURE_VALIDATE_NAVIGATE_URL;
	CFeatureControlKey PRIVATE_INTERNETFEATURELIST_FEATURE_WEBOC_POPUPMANAGEMENT;
	CFeatureControlKey PRIVATE_INTERNETFEATURELIST_FEATURE_WINDOW_RESTRICTIONS;
	CFeatureControlKey PRIVATE_INTERNETFEATURELIST_FEATURE_XMLHTTP;
	CFeatureControlKey PRIVATE_INTERNETFEATURELIST_FEATURE_ZONE_ELEVATION;
};

struct FastMimeType
{
	long SetType(unsigned short const *);
	void Reset();
};

namespace FilePathStore
{
	FilePathStore::BROWSERPROFILEDATA_FILEPATHID const BROWSERPROFILEDATA_FILEPATH_DNTException;
};

class HLinkDll
{
	int LoadFunc(char const *,__int64 (*&)());
public:
	long HlinkCreateFromMoniker(IMoniker *,unsigned short const *,unsigned short const *,IHlinkSite *,unsigned long,IUnknown *,_GUID const &,void * *);
};

class IEProcessHelper
{
	static HINSTANCE__ * _hmoduleIEProcess;
	static IE80TabWindowExports const * const _TabWindowExports;
	static IE80TabWindowExports const _TabWindowExportsNotImpl;
	static _TLS_IMMUTABLE_TABDATA * TLSGetImmutableTabDataNotImpl();
	static bool _checkedIEProcess;
	static long AcquireModalDialogLockAndParentNotImpl(HWND__ *,HWND__ * *,void * *);
	static long TLSSetImmutableTabDataNotImpl(_TLS_IMMUTABLE_TABDATA *);
	static long WaitForTabWindowNotImpl(bool,HWND__ *,HWND__ * *);
	static void ReleaseModalDialogLockAndParentNotImpl(void *);
	static void TLSFreeImmutableTabDataNotImpl();
public:
	static IE80TabWindowExports const * TabWindow();
	static bool IsIEProcess();
};

class JSONSerializer
{
	long AddStackElem();
	void CleanupSerializer();
	void RemoveStackElem();
public:
	JSONSerializer();
	long AddName(unsigned short const *);
	long AddNameValuePair<bool>(unsigned short const *,bool);
	long AddNameValuePair<unsigned short *>(unsigned short const *,unsigned short *);
	long AddNameValuePair<unsigned short const *>(unsigned short const *,unsigned short const *);
	long AddValue(unsigned short const *);
	long BeginArray();
	long BeginObject();
	long EndArray();
	long EndObject();
};

struct LabelEntry
{
	LabelEntry();
};

class LegacyTransaction
{
protected:
	virtual long GetClientBindInfo(IInternetBindInfo * *);
	virtual long GetClientSink(IInternetProtocolSink * *);
	virtual void RemoveClientOInet();
	virtual void SetClientBindInfo(IInternetBindInfo *);
	virtual void SetClientSink(IInternetProtocolSink *,bool);
public:
	LegacyTransaction(unsigned long);
	virtual long Abort(long,unsigned long);
	virtual long AllowRedirect(unsigned short *);
	virtual long Authenticate(HWND__ * *,unsigned short * *,unsigned short * *);
	virtual long CompleteOperation(int);
	virtual long Continue(_tagPROTOCOLDATA *);
	virtual long LockRequest(unsigned long);
	virtual long MyPeekMessage(tagMSG *,HWND__ *,unsigned int,unsigned int,unsigned int);
	virtual long OnINetCallback(int);
	virtual long OnINetInternalCallback(CTransPacket *);
	virtual long QueryService(_GUID const &,_GUID const &,void * *);
	virtual long Read(void *,unsigned long,unsigned long *);
	virtual long Redirect(IUri *);
	virtual long ReportData(unsigned long,unsigned long,unsigned long);
	virtual long ReportProgress(unsigned long,unsigned short const *);
	virtual long ReportResult(long,unsigned long,unsigned short const *);
	virtual long RestartOperation(IUri *,unsigned short *);
	virtual long Resume();
	virtual long Seek(_LARGE_INTEGER,unsigned long,_ULARGE_INTEGER *);
	virtual long Start(unsigned short const *,IInternetProtocolSink *,IInternetBindInfo *,unsigned long,unsigned __int64);
	virtual long StartEx(IUri *,IInternetProtocolSink *,IInternetBindInfo *,unsigned long,unsigned __int64);
	virtual long Suspend();
	virtual long Switch(_tagPROTOCOLDATA *);
	virtual long Terminate(unsigned long);
	virtual long UnlockRequest();
	virtual unsigned long GetMaxHTTPRedirects();
	virtual ~LegacyTransaction();
};

class Logo3CodeDLBSC
{
	long RecordPrecacheValue(long);
public:
	Logo3CodeDLBSC(CSoftDist *,IBindStatusCallback *,char *,unsigned short *);
	virtual long GetBindInfo(unsigned long *,_tagBINDINFO *);
	virtual long GetPriority(long *);
	virtual long OnDataAvailable(unsigned long,unsigned long,tagFORMATETC *,tagSTGMEDIUM *);
	virtual long OnLowResource(unsigned long);
	virtual long OnObjectAvailable(_GUID const &,IUnknown *);
	virtual long OnProgress(unsigned long,unsigned long,unsigned long,unsigned short const *);
	virtual long OnStartBinding(unsigned long,IBinding *);
	virtual long OnStopBinding(long,unsigned short const *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~Logo3CodeDLBSC();
};

namespace Microsoft
{
	namespace WRL
	{
		class ComPtr<ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Security::EnterpriseData::FileProtectionInfo *> >
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Storage::StorageFile *> >
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Storage::StorageFolder *> >
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<ABI::Windows::Security::EnterpriseData::IFileProtectionInfo>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<ABI::Windows::Storage::IStorageFile>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<ABI::Windows::Storage::IStorageFolder>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<ABI::Windows::Storage::IStorageItem>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<CHeaders>
		{
		protected:
			unsigned long InternalRelease();
		public:
			long As<IWebRequestHttpHeaders>(Details::ComPtrRef<ComPtr<IWebRequestHttpHeaders> >);
		};

		class ComPtr<IAgileObject>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IAppxUrlHelper>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IAsyncInfo>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IAuthenticate>
		{
		protected:
			unsigned long InternalRelease();
		public:
			long As<IAuthenticateEx>(Details::ComPtrRef<ComPtr<IAuthenticateEx> >);
		};

		class ComPtr<IAuthenticateHostUI>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IBindCtx>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IBindingExInternal>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IDevToolbarDownloadInitiatorInfo>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IEUserBroker>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IHttpNegotiate>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IHttpSecurity>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IInternetBindInfo>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			ComPtr<IInternetBindInfo> & operator=(IInternetBindInfo *);
			long As<ITransactionInternal>(Details::ComPtrRef<ComPtr<ITransactionInternal> >);
			void Attach(IInternetBindInfo *);
		};

		class ComPtr<IInternetBindInfoEx>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IInternetBindInfoInternal>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IInternetProtocol>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IInternetProtocolEx>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IInternetProtocolSink>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			ComPtr<IInternetProtocolSink> & operator=(IInternetProtocolSink *);
			ComPtr<IInternetProtocolSink> & operator=<COInetProt>(COInetProt *);
			void Attach(IInternetProtocolSink *);
		};

		class ComPtr<IInternetSameSiteCookieInfo>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IMarshal>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IMrtService>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IPackageHostList>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IPermanentInternetSecurityManagerHelper>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IProtocolWebRequestContext>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IReadOnlyBrowserEmulationFilter>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IResourceCandidate2>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IResourceCandidate>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IResourceMap2>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IResourceMap>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IServiceProvider>
		{
		protected:
			unsigned long InternalRelease();
		public:
			ComPtr<IServiceProvider> & operator=(IServiceProvider *);
		};

		class ComPtr<IShdocvwBroker>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<ITransactionInternal>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IUnknown>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IUri>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			ComPtr<IUri> & operator=(ComPtr<IUri> const &);
		};

		class ComPtr<IUriBuilder>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IUriBuilderFactory>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IUriContainer>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IUriPriv>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IUrlRedirectionPolicyManager>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IWebPlatformAsyncHost>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IWebRequestBlockingResponse>
		{
		protected:
			void InternalAddRef();
		public:
			ComPtr<IWebRequestBlockingResponse> & operator=(ComPtr<IWebRequestBlockingResponse> const &);
		};

		class ComPtr<IWebRequestEventDetailsOptionalProperties>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IWebRequestHttpHeaders>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		};

		class ComPtr<IWebRequestListener>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			ComPtr<IWebRequestListener> & operator=(ComPtr<IWebRequestListener> const &);
			ComPtr<IWebRequestListener> & operator=(IWebRequestListener *);
		};

		struct ComPtr<IWinInetHttpHeaders>
		{
			ComPtr<IWinInetHttpHeaders> & operator=(IWinInetHttpHeaders *);
		};

		class ComPtr<IWindowForBindingUI>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<NotificationWindow>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<PackageHostList>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<UrlSchemeConverter>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<WebRequest::CEventDetailsForHttp>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics2>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<WrapperProtocol>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<WrapperProtocolSink>
		{
		protected:
			unsigned long InternalRelease();
		};

		namespace Details
		{
			struct ImplementsHelper<RuntimeClassFlags<2>,0,ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Security::EnterpriseData::FileProtectionInfo *>,FtmBase>
			{
				ImplementsHelper<RuntimeClassFlags<2>,0,ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Security::EnterpriseData::FileProtectionInfo *>,FtmBase>();
			};

			struct ImplementsHelper<RuntimeClassFlags<2>,0,ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Storage::StorageFile *>,FtmBase>
			{
				ImplementsHelper<RuntimeClassFlags<2>,0,ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Storage::StorageFile *>,FtmBase>();
			};

			struct ImplementsHelper<RuntimeClassFlags<2>,0,ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Storage::StorageFolder *>,FtmBase>
			{
				ImplementsHelper<RuntimeClassFlags<2>,0,ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Storage::StorageFolder *>,FtmBase>();
			};

			struct ModuleBase
			{
				static ModuleBase * module_;
			};

			class RuntimeClassBaseT<2>
			{
			protected:
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Security::EnterpriseData::FileProtectionInfo *>,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Security::EnterpriseData::FileProtectionInfo *>,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Storage::StorageFile *>,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Storage::StorageFile *>,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Storage::StorageFolder *>,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Storage::StorageFolder *>,FtmBase> *,_GUID const &,void * *);
			};

			class RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Security::EnterpriseData::FileProtectionInfo *>,FtmBase>
			{
			protected:
				unsigned long InternalAddRef();
			public:
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			class RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Storage::StorageFile *>,FtmBase>
			{
			protected:
				unsigned long InternalAddRef();
			public:
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			class RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Storage::StorageFolder *>,FtmBase>
			{
			protected:
				unsigned long InternalAddRef();
			public:
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			class RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ChainInterfaces<IInternetProtocolEx,IInternetProtocol,IInternetProtocolRoot,Nil,Nil,Nil,Nil,Nil,Nil,Nil> >
			{
			protected:
				unsigned long InternalAddRef();
			public:
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			class RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IAppxUrlHelper,UrlSchemeConverter>
			{
			protected:
				unsigned long InternalAddRef();
			public:
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			class RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IClassFactory,IInternetProtocolInfo>
			{
			protected:
				unsigned long InternalAddRef();
			public:
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			class RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IPackageHostList>
			{
			protected:
				unsigned long InternalAddRef();
			public:
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			class RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IWebPlatformSecurityManager,IWebPlatformSecurityManagerInternal,IWebPlatformPermanentSecurityManager>
			{
			protected:
				unsigned long InternalAddRef();
			public:
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			class RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IWebRequestEventDetailsOptionalProperties>
			{
			protected:
				unsigned long InternalAddRef();
			public:
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			class RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IWebRequestHttpHeaders>
			{
			protected:
				unsigned long InternalAddRef();
			public:
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			class RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,UrlSchemeConverter>
			{
			protected:
				unsigned long InternalAddRef();
			public:
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			unsigned long SafeUnknownDecrementReference(long volatile &);
			unsigned long SafeUnknownIncrementReference(long volatile &);
		};

		struct FtmBase
		{
			virtual long DisconnectObject(unsigned long);
			virtual long GetMarshalSizeMax(_GUID const &,void *,unsigned long,void *,unsigned long,unsigned long *);
			virtual long GetUnmarshalClass(_GUID const &,void *,unsigned long,void *,unsigned long,_GUID *);
			virtual long MarshalInterface(IStream *,_GUID const &,void *,unsigned long,void *,unsigned long);
			virtual long ReleaseMarshalData(IStream *);
			virtual long UnmarshalInterface(IStream *,_GUID const &,void * *);
		};

		struct RuntimeClass<RuntimeClassFlags<2>,IClassFactory,IInternetProtocolInfo>
		{
			RuntimeClass<RuntimeClassFlags<2>,IClassFactory,IInternetProtocolInfo>();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,IPackageHostList>
		{
			RuntimeClass<RuntimeClassFlags<2>,IPackageHostList>();
		};

		namespace Wrappers
		{
			struct CriticalSection
			{
				static Details::SyncLockCriticalSection Lock(_RTL_CRITICAL_SECTION *);
			};

			namespace Details
			{
				struct SyncLockCriticalSection
				{
					~SyncLockCriticalSection();
				};

			};

			class HStringReference
			{
				void CreateReference(unsigned short const *,unsigned int,unsigned int);
			public:
				HStringReference<unsigned short const *>(unsigned short const * const &,Details::Dummy);
			};

		};

	};

};

namespace MutexUtils
{
	struct CAutoMutex
	{
		long Lock(bool *);
	};

	struct CMutex
	{
		long Create(unsigned short const *,unsigned long);
		long Lock(bool *);
		void Unlock();
		~CMutex();
	};

};

class NotificationWindow
{
	HWND__ * CreateHandle();
	void DestroyUnusedHandle();
public:
	unsigned long Release();
	void FinishClosingHandle(HWND__ *);
	void GetHandle(HWND__ * *);
	void ReleaseHandle(HWND__ * *);
	void Shutdown(bool);
};

struct PackageHost
{
	PackageHost();
	~PackageHost();
};

class PackageHostList
{
	static long GetNormalizedHost(unsigned short const *,unsigned short * *);
protected:
	virtual ~PackageHostList();
public:
	virtual long GetPackageDependencyStateForIUri(IUri *,int *);
	virtual long GetPackageFullNameForIUri(IUri *,unsigned short * *);
	virtual long Initialize(PACKAGE_INFO const *,unsigned int);
	virtual long ResolveSourceIUriAlias(IUri *,int *,IUri * *);
	virtual void Uninitialize();
};

class PackageProtocolClassFactory
{
protected:
	long Initialize(PACKAGE_INFO const *,unsigned int,IResourceMap *,IServiceProvider *);
	virtual ~PackageProtocolClassFactory();
public:
	static long CreateClassFactory(PACKAGE_INFO const *,unsigned int,IResourceMap *,IServiceProvider *,IClassFactory * *);
	virtual long CombineUrl(unsigned short const *,unsigned short const *,unsigned long,unsigned short *,unsigned long,unsigned long *,unsigned long);
	virtual long CompareUrl(unsigned short const *,unsigned short const *,unsigned long);
	virtual long CreateInstance(IUnknown *,_GUID const &,void * *);
	virtual long LockServer(int);
	virtual long ParseUrl(unsigned short const *,_tagPARSEACTION,unsigned long,unsigned short *,unsigned long,unsigned long *,unsigned long);
	virtual long QueryInfo(unsigned short const *,_tagQUERYOPTION,unsigned long,void *,unsigned long,unsigned long *,unsigned long);
};

class PackageUrlSchemeConverter
{
	long ConvertToFileIUri(long (*)(IUri *,IResourceMap2 *,PACKAGE_INFO const *,unsigned int,IUri * *,IResourceCandidate2 * *),IUri *,IUri * *,IResourceCandidate2 * *);
	long InitializeDestinationSchemePluggableProtocol(IUri *,IInternetProtocolSink *,IInternetBindInfo *,unsigned long,unsigned __int64,IInternetProtocolEx * *,long *);
	static long CreateRootPackageIUri(unsigned short const *,IUri * *);
public:
	PackageUrlSchemeConverter();
	long Initialize(PACKAGE_INFO const *,unsigned int,IResourceMap *,IServiceProvider *);
	virtual long ConvertRelativeWindowsFilePathToRelativeIUri(unsigned short const *,IUri * *);
	virtual long ConvertRelativeWindowsFilePathToRelativeUriString(unsigned short const *,unsigned __int64 *,unsigned short * *);
	virtual long ConvertToDestinationSchemeIUri(IUri *,IUri * *);
	virtual long CreateAndStartDestinationSchemePluggableProtocol(IUri *,IInternetProtocolSink *,IInternetBindInfo *,unsigned long,unsigned __int64,IInternetProtocolEx * *,long *);
	virtual long GetIPackageHostList(IPackageHostList * *);
	virtual long GetLowerCasePackageName(unsigned short * *);
	virtual long GetPackageDependencyStateForIUri(IUri *,int *);
	virtual long GetPackageFamilyName(unsigned short * *);
	virtual long GetPackageFullNameForIUri(IUri *,unsigned short * *);
	virtual long ResolveHostAlias(IUri *,IUri * *);
	virtual long ResolveRelativeIUriAgainstPackageRoot(IUri *,IUri * *);
	virtual long ResolveSourceIUriAlias(IUri *,int *,IUri * *);
	virtual ~PackageUrlSchemeConverter();
};

class PercentEncodeNonUnreserved
{
protected:
	virtual long ShouldEncodeCharacter(unsigned __int64,unsigned long,bool *);
};

namespace ProofOfPossessionTokenProvider
{
	bool IsEdgeCookiesFeatureEnabled();
	bool ShouldSetCookie(unsigned short const *,unsigned short const *,unsigned long *);
	bool ShouldSetDeviceCookie(unsigned short const *,unsigned short const *,unsigned long *);
	long GetAadLoginUrl(unsigned short * *);
	long GetLoginUrl(unsigned short * *);
	long GetTokens(unsigned short const *,unsigned short const *,unsigned long *,ProofOfPossessionCookieInfo * *);
	unsigned short * GetAadLoginUrlMatch(unsigned short const *,unsigned short const *);
	void RemoveHeaders(void *);
	void SetCookiesAndFreeTokens<ProofOfPossessionCookieInfo>(void *,unsigned short const *,unsigned long,ProofOfPossessionCookieInfo *);
	void SetCookiesAndFreeTokens<_IEProofOfPossessionToken>(void *,unsigned short const *,unsigned long,_IEProofOfPossessionToken *);
	void SwapShortMemoryBlocks(char *,char *,unsigned __int64);
};

class ProtectionListParser
{
	bool ParseDomainRule(char *);
	bool ParsePropertyRule(char *);
public:
	bool NextLine();
	long OpenFile(unsigned short const *);
};

namespace ProtocolTestHooks
{
	int unitTest;
};

namespace Protocols
{
	unsigned short const * const AboutBlank;
	unsigned short const * const AppData;
	unsigned short const * const LocalStream;
	unsigned short const * const Package;
	unsigned short const * const PackageUntrusted;
	unsigned short const * const Res;
};

namespace SettingStore
{
	struct CEnum
	{
		unsigned short const * Next();
		~CEnum();
	};

	SettingStore::EXTKEY1ID const IEKEY_urlmon_ExtPreApproved;
	SettingStore::EXTKEY1ID const IEKEY_urlmon_MimeContentType;
	SettingStore::EXTVALUE1ID<int> const IEVALUE_PrivacIE_EnabledExt;
	SettingStore::EXTVALUE1ID<unsigned char *> const IEVALUE_BrowserEmulation_PrivateKeepInSpartanFilter;
	SettingStore::EXTVALUE1ID<unsigned char *> const IEVALUE_BrowserEmulation_UserPrivateFilter;
	SettingStore::EXTVALUE1ID<unsigned char *> const IEVALUE_ManageAddOns_ExtApprovedExtensions;
	SettingStore::EXTVALUE1ID<unsigned char *> const IEVALUE_ManageAddOns_ExtSettingsVerCache;
	SettingStore::EXTVALUE1ID<unsigned long> const IEVALUE_LCIE_TabProcConfig_Value;
	SettingStore::EXTVALUE1ID<unsigned long> const IEVALUE_ManageAddOns_ExtSettingsFlags;
	SettingStore::EXTVALUE1ID<unsigned long> const IEVALUE_ManageAddOns_ExtStatsFlag;
	SettingStore::EXTVALUE1ID<unsigned long> const IEVALUE_PrivacIE_PurposeExt;
	SettingStore::EXTVALUE1ID<unsigned long> const IEVALUE_PrivacIE_TrackingProtectionException;
	SettingStore::EXTVALUE1ID<unsigned long> const IEVALUE_urlmon_ActiveXCompatibilityFlags;
	SettingStore::EXTVALUE1ID<unsigned long> const IEVALUE_urlmon_ActiveXMiscStatusFlags;
	SettingStore::EXTVALUE1ID<unsigned long> const IEVALUE_urlmon_MimeContentFlags;
	SettingStore::EXTVALUE1ID<unsigned short *> const IEVALUE_PrivacIE_NameExt;
	SettingStore::EXTVALUE1ID<unsigned short *> const IEVALUE_PrivacIE_PathExt;
	SettingStore::EXTVALUE1ID<unsigned short *> const IEVALUE_PrivacIE_UrlExt;
	SettingStore::EXTVALUE1ID<unsigned short *> const IEVALUE_urlmon_ActiveXAlternateCLSID;
	SettingStore::EXTVALUE1ID<unsigned short *> const IEVALUE_urlmon_MimeContentClassID;
	SettingStore::EXTVALUE1ID<unsigned short *> const IEVALUE_urlmon_MimeContentExtension;
	SettingStore::EXTVALUE1ID<unsigned short *> const IEVALUE_urlmon_MimeExtensionContentType;
	SettingStore::EXTVALUE1ID<unsigned short *> const IEVALUE_urlmon_PolicyExtAllowDenyList;
	SettingStore::EXTVALUE1ID<unsigned short *> const IEVALUE_urlmon_ProtocolClassID;
	SettingStore::KEYID const IEKEY_BrowserEmulation_ActiveXPolicyList;
	SettingStore::KEYID const IEKEY_BrowserEmulation_PolicyFilter;
	SettingStore::KEYID const IEKEY_BrowserEmulation_QuirksPolicyList;
	SettingStore::KEYID const IEKEY_BrowserEmulation_UserFilters;
	SettingStore::KEYID const IEKEY_PrivacIE_Lists;
	SettingStore::KEYID const IEKEY_urlmon_ExtVerAllowedDomainList;
	SettingStore::VALUEID<SettingStore::MIGRATIONTIMESTAMP> const IEVALUE_urlmon_ZonesSecurityUpgrade;
	SettingStore::VALUEID<int> const IEVALUE_Addons_FlashPlayerEnabled;
	SettingStore::VALUEID<int> const IEVALUE_ApplicationGuard_RunAsIfInContainer;
	SettingStore::VALUEID<int> const IEVALUE_BrowserEmulation_CVListDomainAttributeSet;
	SettingStore::VALUEID<int> const IEVALUE_BrowserEmulation_IntranetCompatibilityMode;
	SettingStore::VALUEID<int> const IEVALUE_BrowserEmulation_LocalMachineCompatibilityMode;
	SettingStore::VALUEID<int> const IEVALUE_BrowserEmulation_MSCompatibilityMode;
	SettingStore::VALUEID<int> const IEVALUE_BrowserEmulation_PPBNoCompatibilityMode;
	SettingStore::VALUEID<int> const IEVALUE_BrowserEmulation_StaleIECompatCache;
	SettingStore::VALUEID<int> const IEVALUE_BrowserEmulation_TLDDefinitionsUpdated;
	SettingStore::VALUEID<int> const IEVALUE_BrowserEmulation_UnattendLoaded;
	SettingStore::VALUEID<int> const IEVALUE_BrowserStorage_AppCache_AllowWebsiteCaches;
	SettingStore::VALUEID<int> const IEVALUE_Browser_DisableFixSecuritySettings;
	SettingStore::VALUEID<int> const IEVALUE_Browser_EnterpriseMode_RestrictIE;
	SettingStore::VALUEID<int> const IEVALUE_Browser_EnterpriseMode_RestrictIE_KeepIntranetSitesInInternetExplorer;
	SettingStore::VALUEID<int> const IEVALUE_CustomUserAgent_CustomUAActive;
	SettingStore::VALUEID<int> const IEVALUE_DeprecatedHashingAlgorithm_ENABLE_MD2_MD4;
	SettingStore::VALUEID<int> const IEVALUE_Download_FeatureEnableEdgeCookies;
	SettingStore::VALUEID<int> const IEVALUE_Download_FeatureEnableHSTSForAppsInEdgeMode;
	SettingStore::VALUEID<int> const IEVALUE_Download_FeatureEnableIEHostOnlyCookies;
	SettingStore::VALUEID<int> const IEVALUE_Download_FeatureEnableSameSiteCookies;
	SettingStore::VALUEID<int> const IEVALUE_ExperimentalFeatures_EnableNetworkingExperimentalFeature;
	SettingStore::VALUEID<int> const IEVALUE_ExperimentalFeatures_EnableUseEnterpriseModeSiteList;
	SettingStore::VALUEID<int> const IEVALUE_ManageAddOns_PolicyDisableFlashInIE;
	SettingStore::VALUEID<int> const IEVALUE_PrivacIE_DisableInPrivateBlocking;
	SettingStore::VALUEID<int> const IEVALUE_PrivacIE_DisableToolbars;
	SettingStore::VALUEID<int> const IEVALUE_PrivacIE_DisableTrackerMonitoring;
	SettingStore::VALUEID<int> const IEVALUE_PrivacIE_DoNotTrack;
	SettingStore::VALUEID<int> const IEVALUE_WebPlatform_ForceExtendedUAString;
	SettingStore::VALUEID<int> const IEVALUE_urlmon_ExtVerAuditModeEnabled;
	SettingStore::VALUEID<int> const IEVALUE_urlmon_ExtVerDebugDownload;
	SettingStore::VALUEID<int> const IEVALUE_urlmon_ExtVerDownloadVersionList;
	SettingStore::VALUEID<int> const IEVALUE_urlmon_ExtVerMgmtEnabled;
	SettingStore::VALUEID<int> const IEVALUE_urlmon_PolicyExtIgnoreFrameApprovalCheck;
	SettingStore::VALUEID<int> const IEVALUE_urlmon_PolicyExtNoFirstTimePrompt;
	SettingStore::VALUEID<int> const IEVALUE_urlmon_PolicyExtRestrictToList;
	SettingStore::VALUEID<int> const IEVALUE_wininet_EnableHTTP2;
	SettingStore::VALUEID<unsigned char *> const IEVALUE_BrowserEmulation_KeepInSpartanFilter;
	SettingStore::VALUEID<unsigned char *> const IEVALUE_BrowserEmulation_UserFilter;
	SettingStore::VALUEID<unsigned long> const IEVALUE_BrowserEmulation_CVListDOSTime;
	SettingStore::VALUEID<unsigned long> const IEVALUE_BrowserEmulation_CVListXMLVersionHigh;
	SettingStore::VALUEID<unsigned long> const IEVALUE_BrowserEmulation_CVListXMLVersionLow;
	SettingStore::VALUEID<unsigned long> const IEVALUE_BrowserEmulation_IECompatVersionHigh;
	SettingStore::VALUEID<unsigned long> const IEVALUE_BrowserEmulation_IECompatVersionLow;
	SettingStore::VALUEID<unsigned long> const IEVALUE_Browser_ConfigureTelemetryForMicrosoft365Analytics;
	SettingStore::VALUEID<unsigned long> const IEVALUE_Browser_DisableInternetExplorerApp;
	SettingStore::VALUEID<unsigned long> const IEVALUE_Browser_EnterpriseMode_NeedEdgeBrowserChoice;
	SettingStore::VALUEID<unsigned long> const IEVALUE_Browser_EnterpriseMode_NeedEdgeBrowserChoice2;
	SettingStore::VALUEID<unsigned long> const IEVALUE_Browser_EnterpriseMode_NeedEdgeBrowserChoice3;
	SettingStore::VALUEID<unsigned long> const IEVALUE_Browser_UTF8URLQuery;
	SettingStore::VALUEID<unsigned long> const IEVALUE_Browser_UrlEncodingDisableUTF8;
	SettingStore::VALUEID<unsigned long> const IEVALUE_CodeIntegrity_DynamicCodePolicy;
	SettingStore::VALUEID<unsigned long> const IEVALUE_Download_NetworkBreakingChanges;
	SettingStore::VALUEID<unsigned long> const IEVALUE_Download_UrlmonStateMachineModes;
	SettingStore::VALUEID<unsigned long> const IEVALUE_ExperimentalFeatures_EnableTcpFastOpen;
	SettingStore::VALUEID<unsigned long> const IEVALUE_PrivacIE_DelayMonitoringUICount;
	SettingStore::VALUEID<unsigned long> const IEVALUE_PrivacIE_FilteringMode;
	SettingStore::VALUEID<unsigned long> const IEVALUE_RAC_Policy_LaunchFlags;
	SettingStore::VALUEID<unsigned long> const IEVALUE_Ried_InternetSettings_Zones_01004;
	SettingStore::VALUEID<unsigned long> const IEVALUE_urlmon_EnableSSL3Fallback;
	SettingStore::VALUEID<unsigned long> const IEVALUE_urlmon_ExtVerFirstCheckForUpdateHighDateTime;
	SettingStore::VALUEID<unsigned long> const IEVALUE_urlmon_ExtVerFirstCheckForUpdateLowDateTime;
	SettingStore::VALUEID<unsigned long> const IEVALUE_urlmon_ExtVerLastCheckForUpdateHighDateTime;
	SettingStore::VALUEID<unsigned long> const IEVALUE_urlmon_ExtVerLastCheckForUpdateLowDateTime;
	SettingStore::VALUEID<unsigned long> const IEVALUE_urlmon_ExtVerLastTTLHighDateTime;
	SettingStore::VALUEID<unsigned long> const IEVALUE_urlmon_ExtVerLastTTLLowDateTime;
	SettingStore::VALUEID<unsigned long> const IEVALUE_urlmon_ExtVerLastUpdateHighDateTime;
	SettingStore::VALUEID<unsigned long> const IEVALUE_urlmon_ExtVerLastUpdateLowDateTime;
	SettingStore::VALUEID<unsigned long> const IEVALUE_urlmon_SpecialFoldersCacheSize;
	SettingStore::VALUEID<unsigned short *> const IEVALUE_BrowserEmulation_AppRecommendationServiceUrl;
	SettingStore::VALUEID<unsigned short *> const IEVALUE_BrowserEmulation_CVListDownloadUrl;
	SettingStore::VALUEID<unsigned short *> const IEVALUE_BrowserEmulation_MobileCVListDownloadUrl;
	SettingStore::VALUEID<unsigned short *> const IEVALUE_BrowserEmulation_UnattendSites;
	SettingStore::VALUEID<unsigned short *> const IEVALUE_Browser_EnterpriseMode_CurrentVersion;
	SettingStore::VALUEID<unsigned short *> const IEVALUE_Browser_EnterpriseMode_Enable;
	SettingStore::VALUEID<unsigned short *> const IEVALUE_Browser_EnterpriseMode_MSEdgePath;
	SettingStore::VALUEID<unsigned short *> const IEVALUE_Browser_EnterpriseMode_MSEdgePath_Beta;
	SettingStore::VALUEID<unsigned short *> const IEVALUE_Browser_EnterpriseMode_MSEdgePath_Canary;
	SettingStore::VALUEID<unsigned short *> const IEVALUE_Browser_EnterpriseMode_MSEdgePath_Dev;
	SettingStore::VALUEID<unsigned short *> const IEVALUE_Browser_EnterpriseMode_SiteList;
	SettingStore::VALUEID<unsigned short *> const IEVALUE_CustomUserAgent_CustomUA;
	SettingStore::VALUEID<unsigned short *> const IEVALUE_Ried_InternetExplorerMkEnabled;
	SettingStore::VALUEID<unsigned short *> const IEVALUE_urlmon_ExtVerAuditModeFilePath;
	SettingStore::VALUEID<unsigned short *> const IEVALUE_urlmon_ExtVerBlockListFilePath;
	SettingStore::VALUEID<unsigned short *> const IEVALUE_urlmon_ExtVerDebugDownloadFilePath;
	SettingStore::VALUEID<unsigned short *> const IEVALUE_urlmon_ExtVerDownloadServerHostname;
	SettingStore::VALUEID<unsigned short *> const IEVALUE_urlmon_ExtVerDownloadServerPath;
};

struct SingleSignonTelemetryHelper
{
	SingleSignonTelemetryHelper(bool,unsigned long *,long *);
	~SingleSignonTelemetryHelper();
};

class StackBuffer<char>
{
protected:
	int EnsureSize(unsigned long);
};

class StackBuffer<unsigned short>
{
protected:
	int EnsureSize(unsigned long);
};

struct StringBlock
{
	char const * AddString(char const *,unsigned long);
};

struct StringFilter
{
	bool MatchFilter(char const *);
};

struct StringFilters
{
	bool MatchFilters(char const *);
	long AddStringFilter(char const *);
};

struct TUnknownMT1<IBrowserEmulationFilter>
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct TUnknownMT1<IBrowserEmulationRulesEnum>
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct TUnknownMT1<IVersionManager>
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct TUnknownMT2<IDomainListBrowserEmulationFilter,IDualEngineBrowserEmulationFilter>
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct TUnknownMT2<IReadOnlyBrowserEmulationFilter,IDiagnosticsUserAgentStringProvider>
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class TUnknownMTBase<char>
{
protected:
	unsigned long _Release();
};

struct TUnknownST1<IExtensionValidationProxy>
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class TUnknownSTBaseFRE<char>
{
protected:
	unsigned long _Release();
};

namespace TelemetryRegistryKeys
{
	unsigned short const * const TelemetryRedirectKeyValue;
	unsigned short const * const TelemetryRegistryKeyValue;
	unsigned short const * const WebApplicationHostRegistryKey;
	unsigned short const * const WebApplicationHostRegistryKeyGP;
};

struct TrackingProtection
{
	_FilterPolicy::FilterPolicy IsTrackingBlocked(IUri *);
	long AddList(unsigned short const *);
	long BeginInitialization();
	~TrackingProtection();
};

struct WMIHelper
{
	static long GetOrCreateWMIAXInfoObject(unsigned short const *,unsigned short const *,bool,IWbemServices *,IWbemClassObject * *);
	static long GetWMIServer(IWbemServices * *);
	static long WriteBoolToWMIObject(bool,unsigned short const *,IWbemClassObject *);
	static long WriteDWordToWMIObject(unsigned long,unsigned short const *,IWbemClassObject *);
	static long WriteWStrToWMIObject(unsigned short const *,unsigned short const *,IWbemClassObject *);
};

namespace WebRequest
{
	class CEventDetailsForHttp
	{
	protected:
		virtual ~CEventDetailsForHttp();
	public:
		CEventDetailsForHttp();
		static bool IsModifiableHeader(unsigned short const *,unsigned short const *);
		static long ApplyRequestHeaders(IWinInetHttpHeaders *,IWebRequestHttpHeaders *);
		static long ApplyResponseHeaders(IWinInetHttpHeaders *,IWebRequestHttpHeaders *);
		static long ClearRequestHeaders(IWinInetHttpHeaders *);
		virtual long GetRequestBody(IWebRequestHttpBody * *);
		virtual long GetRequestHeaders(IWebRequestHttpHeaders * *);
		virtual long GetResponseHeaders(IWebRequestHttpHeaders * *);
	};

	struct WebRequestUtils
	{
		static bool IsHeaderNameValueDelimiter(unsigned short const *);
		static bool IsNewLine(unsigned short const *);
		static long HeadersFromString(unsigned short const *,unsigned __int64,HttpHeader *);
		static unsigned __int64 HeadersFromStringCount(unsigned short const *);
		static unsigned short const * SkipLine(unsigned short const *);
	};

	bool HasListener();
	bool IsAllowedScheme(IUri *);
	long CreateUniqueRequestId(unsigned short * *);
};

namespace Windows
{
	namespace Internal
	{
		class NativeString<CoTaskMemPolicy<unsigned short> >
		{
			void _Free();
		};

	};

};

struct WininetStackBufferA
{
	int QueryHttpInfoA(void *,unsigned long);
};

struct WininetStackBufferW
{
	int QueryHttpInfoW(void *,unsigned long);
	int QueryInternetOptionW(void *,unsigned long);
	long QueryHttpInfoW(IWinInetHttpHeaders *,unsigned long);
};

class WrapperProtocol
{
protected:
	long Initialize(UrlSchemeConverter *,IServiceProvider *);
	long ReportRedirect(IUri *,IInternetProtocolSink *);
	virtual ~WrapperProtocol();
	void LogWrapperProtocolResult(unsigned short const *,long);
public:
	WrapperProtocol();
	static long CreateInstance(UrlSchemeConverter *,IServiceProvider *,WrapperProtocol * *);
	virtual long Abort(long,unsigned long);
	virtual long Continue(_tagPROTOCOLDATA *);
	virtual long LockRequest(unsigned long);
	virtual long Read(void *,unsigned long,unsigned long *);
	virtual long Resume();
	virtual long Seek(_LARGE_INTEGER,unsigned long,_ULARGE_INTEGER *);
	virtual long Start(unsigned short const *,IInternetProtocolSink *,IInternetBindInfo *,unsigned long,unsigned __int64);
	virtual long StartEx(IUri *,IInternetProtocolSink *,IInternetBindInfo *,unsigned long,unsigned __int64);
	virtual long Suspend();
	virtual long Terminate(unsigned long);
	virtual long UnlockRequest();
};

class WrapperProtocolSink
{
	long InvokeOnResponse(IInternetProtocolSink *,unsigned long,unsigned short const *);
public:
	static long CreateInstance(IInternetProtocolSink *,WrapperProtocolSink * *);
	virtual long Initialize(IInternetProtocolSink *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long ReportData(unsigned long,unsigned long,unsigned long);
	virtual long ReportProgress(unsigned long,unsigned short const *);
	virtual long ReportResult(long,unsigned long,unsigned short const *);
	virtual long Switch(_tagPROTOCOLDATA *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class ZONEMAP_COMPONENTS
{
	int _CrackFilePath(CRACK_STATE_ *,IUriPriv *);
	int _CrackSite(CRACK_STATE_ *,IUriPriv *,int);
public:
	long Crack(IUri *,unsigned long,int);
	~ZONEMAP_COMPONENTS();
};

struct sGraphicsCardDetails
{
	long SetUmdFilename(unsigned short const *);
	void Reset();
};

namespace std
{
	nothrow_t const std::nothrow;
};

struct tagSUrlMkTlsData
{
	void EnsureNotificationWindow(NotificationWindow * *);
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

	struct com_ptr_t<IAgileReference,err_returncode_policy>
	{
		~com_ptr_t<IAgileReference,err_returncode_policy>();
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
			void InvalidateFeatureStateCache(wil_details_FeatureStateCache *,wil_FeatureChangeTime);
			void RecordCachedUsageUnderLock();
			void RecordCachedUsageUnderLock(EnabledStateManager::CachedUsageData const &);
		public:
			void EnsureSubscribedToUsageFlush(void (*)(void *));
			void OnStateChange();
			void OnTimer();
			void QueueBackgroundUsageReporting(unsigned int,wil_details_FeatureReportingCache *);
			~EnabledStateManager();
		};

		class FeatureImpl<__WilFeatureTraits_Feature_BrowserReplacement>
		{
			wil_details_FeatureStateCache GetCachedFeatureEnabledState();
			wil_details_FeatureStateCache GetCurrentFeatureEnabledState(int *);
		public:
			void ReportUsage(bool,ReportingKind,unsigned __int64);
		};

		class FeatureImpl<__WilFeatureTraits_Feature_Servicing_BrowserReplacement_SpartanDeprecation>
		{
			wil_details_FeatureStateCache GetCachedFeatureEnabledState();
			wil_details_FeatureStateCache GetCurrentFeatureEnabledState(int *);
		public:
			bool __private_IsEnabled();
			void ReportUsage(bool,ReportingKind,unsigned __int64);
		};

		class FeatureImpl<__WilFeatureTraits_Feature_Servicing_EOF_FOR_PEERDIST_21726535>
		{
			wil_details_FeatureStateCache GetCachedFeatureEnabledState();
			wil_details_FeatureStateCache GetCurrentFeatureEnabledState(int *);
		public:
			bool __private_IsEnabled();
			void ReportUsage(bool,ReportingKind,unsigned __int64);
		};

		class FeatureImpl<__WilFeatureTraits_Feature_Servicing_IEModeNewTelemetry_31265381>
		{
			wil_details_FeatureStateCache GetCachedFeatureEnabledState();
			wil_details_FeatureStateCache GetCurrentFeatureEnabledState(int *);
		public:
			bool __private_IsEnabled();
			void ReportUsage(bool,ReportingKind,unsigned __int64);
		};

		class FeatureImpl<__WilFeatureTraits_Feature_Servicing_IEModeTempDirectFix_31917134>
		{
			wil_details_FeatureStateCache GetCachedFeatureEnabledState();
			wil_details_FeatureStateCache GetCurrentFeatureEnabledState(int *);
		public:
			bool __private_IsEnabled();
			void ReportUsage(bool,ReportingKind,unsigned __int64);
		};

		class FeatureImpl<__WilFeatureTraits_Feature_Servicing_IsolateSiteListCache_30782056>
		{
			wil_details_FeatureStateCache GetCachedFeatureEnabledState();
			wil_details_FeatureStateCache GetCurrentFeatureEnabledState(int *);
		public:
			bool __private_IsEnabled();
			void ReportUsage(bool,ReportingKind,unsigned __int64);
		};

		class FeatureImpl<__WilFeatureTraits_Feature_UpgradeToFailFast>
		{
			wil_details_FeatureStateCache GetCachedFeatureEnabledState();
			wil_details_FeatureStateCache GetCurrentFeatureEnabledState(int *);
		public:
			void ReportUsage(bool,ReportingKind,unsigned __int64);
		};

		class FeatureStateManager
		{
			bool EnsureStateData();
			bool EnsureSubscribedToStateChangesUnderLock();
			void EnsureSubscribedToProcessWideUsageFlushUnderLock();
		public:
			FeatureStateManager();
			void OnStateChange();
			void QueueBackgroundSRUMUsageReporting(unsigned int,unsigned short,unsigned int);
			void RecordFeatureUsage(unsigned int,wil_details_ServiceReportingKind,unsigned __int64);
			void SubscribeToEnabledStateChanges(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
			void SubscribeToUsageFlush(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *));
			~FeatureStateManager();
		};

		class ThreadFailureCallbackHolder
		{
			static long volatile s_telemetryId;
		public:
			static bool GetThreadContext(FailureInfo *,ThreadFailureCallbackHolder *,char *,unsigned __int64);
		};

		namespace in1diag3
		{
			APPXURLACTIONPOLICY const * FailFast_IfNullMsg<APPXURLACTIONPOLICY const *,0>(void *,unsigned int,char const *,APPXURLACTIONPOLICY const *,char const *,...);
			bool FailFast_HrIfMsg(void *,unsigned int,char const *,long,bool,char const *,...);
			bool FailFast_IfFalseMsg(void *,unsigned int,char const *,bool,char const *,...);
			long Return_GetLastError(void *,unsigned int,char const *);
			long Return_Win32(void *,unsigned int,char const *,unsigned long);
			unsigned long Log_Win32Msg(void *,unsigned int,char const *,unsigned long,char const *,...);
			void FailFast_Hr(void *,unsigned int,char const *,long);
			void FailFast_HrMsg(void *,unsigned int,char const *,long,char const *,...);
			void FailFast_IfNullMsg<Microsoft::WRL::ComPtr<UrlSchemeConverter>,0>(void *,unsigned int,char const *,Microsoft::WRL::ComPtr<UrlSchemeConverter> const &,char const *,...);
			void FailFast_Unexpected(void *,unsigned int,char const *);
			void FailFast_UnexpectedMsg(void *,unsigned int,char const *,char const *,...);
			void FailFast_Win32(void *,unsigned int,char const *,unsigned long);
			void Return_Hr(void *,unsigned int,char const *,long);
			void _FailFastImmediate_Unexpected();
			void _FailFast_GetLastError(void *,unsigned int,char const *);
			void _FailFast_Hr(void *,unsigned int,char const *,long);
			void _FailFast_NullAlloc(void *,unsigned int,char const *);
			void _FailFast_Unexpected(void *,unsigned int,char const *);
			void _FailFast_UnexpectedMsg(void *,unsigned int,char const *,void *,char const *,char *);
			void _Log_Hr(void *,unsigned int,char const *,long);
			void _Log_Win32(void *,unsigned int,char const *,unsigned long);
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
		long ReportFailure_Win32Msg(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,unsigned long,char const *,char *);
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
		void ReportFailure_HrMsg(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long,char const *,char *);
		void ReportFailure_Msg(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long,char const *,char *);
		void SetEvent(void *);
		void SubscribeFeatureStateCacheToConfigurationChanges(wil_details_FeatureStateCache *,wil_FeatureChangeTime,unsigned int);
		void UnregisterWilFeatureConfigurationChange(void *);
		void UnsubscribeProcessWideUsageFlush(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
		void UnsubscribeWilWnf(__WIL__WNF_USER_SUBSCRIPTION *);
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

		bool operator!=(details_abi::heap_vector_iterator<details::EnabledStateManager::CachedFeaturePropertyData> const &,details_abi::heap_vector_iterator<details::EnabledStateManager::CachedFeaturePropertyData> const &);
		bool operator!=(details_abi::heap_vector_iterator<details::EnabledStateManager::CachedUsageData> const &,details_abi::heap_vector_iterator<details::EnabledStateManager::CachedUsageData> const &);
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

	struct unique_ptr<unsigned short [0],default_delete<unsigned short [0]> >
	{
		void reset<unsigned short *>(unsigned short *);
		~unique_ptr<unsigned short [0],default_delete<unsigned short [0]> >();
	};

	struct unique_ptr<wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>,wil::process_heap_deleter>
	{
		~unique_ptr<wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>,wil::process_heap_deleter>();
	};

	struct unique_ptr<wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>,wil::process_heap_deleter>
	{
		~unique_ptr<wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>,wil::process_heap_deleter>();
	};

};

ActionStrIDMap * actionAlertIDMap;
ActionStrIDMap * actionWarnIDMap;
CBrowserModeFilter * g_pActiveXPolicyFilterBM;
CBrowserModeFilter * g_pInPrivateKeepInSpartanFilterBM;
CBrowserModeFilter * g_pKeepInIEFilterBM;
CBrowserModeFilter * g_pKeepInSpartanFilterBM;
CBrowserModeFilter * g_pPolicyFilterBM;
CBrowserModeFilter * g_pQuirksPolicyFilterBM;
CBrowserModeFilter * g_pUserFilterBM;
CCompatCacheList * g_pAxCompatCache;
CFeatureCache * g_pFeatureCache;
CIEBrowserModeFilter * g_pIEFilterBM;
CIEEnterpriseModeFilter * g_pIEFilterEM;
CINetEdgeManager * GetGlobalINetEdgeManager();
CMPTLGS g_cmptlgs;
CMapPathToSpecialDirHelper * g_pMapPathToSpecialDirHelper;
CMediaTypeHolder * GetMediaTypeHolder();
CMediaTypeHolder * g_pCMHolder;
CMutex g_urlRedirectionPolicyManagerLock;
CMutexSem g_mxsCINetEdgeMgr;
CMutexSem g_mxsCINetMgr;
CMutexSem g_mxsCodeDownloadGlobals;
CMutexSem g_mxsMedia;
CMutexSem g_mxsOInet;
CMutexSem g_mxsPermanentISM;
CMutexSem g_mxsSession;
CMutexSem g_mxsTransMgr;
COInetSession * g_pCOInetSession;
COleAutDll g_OleAutDll;
CRefCount g_cRef;
CRegZone * g_pLMZRegZone;
CRunSetupHook g_RunSetupHook;
CSharedMem g_SharedMem;
CSharedMem g_privacIESettingsSharedMem;
CTransactionManager * GetGlobalTransactionManager();
CUrlMon * CreateEmptyPathUrlMon();
CVLIST_PLATFORM g_enumCVListPlatform;
CVersion g_versiondll;
FEATURE_ENABLED_STATE (* g_wil_details_apiGetFeatureEnabledState)(unsigned int,FEATURE_CHANGE_TIME,int *);
FEATURE_ENABLED_STATE (* g_wil_details_internalGetFeatureEnabledState)(unsigned int,FEATURE_CHANGE_TIME,int *);
FILEXTN GetExtnAndBaseFileName(char const *,char const * *);
FeatureIconSizeMap * g_featureIconSizeMap;
HFONT__ * SelectControlFont(HDC__ *,HWND__ *);
HFONT__ * SetBoldFontOnControl(HWND__ *);
HICON__ * LoadIconMUIWithScaling(HWND__ *,unsigned short,int,unsigned long);
HINSTANCE__ * Ext_PinDllOfCLSID(_GUID const &);
HINSTANCE__ * IESHPinDllOfCLSID(_GUID const *);
HINSTANCE__ * g_hInst;
HINSTANCE__ * g_hinstDll;
HINSTANCE__ * g_hmodComCtl32;
HINSTANCE__ * g_wil_details_ntdllModuleHandle;
HINSTANCE__ * wil_details_GetNtDllModuleHandle();
ICatInformation * GetCategoryManager();
IClassFactory * g_pcf;
IE_GLOBAL_THREAD_STATE * GlobalThreadState();
IEnumFORMATETC * g_pEFmtETC;
IInternetHostSecurityManager * GetHostSecurityManager(IBindStatusCallback *);
IInternetSecurityManager * g_pInternetSecurityManager;
IInternetSecurityManagerEx2 * g_pInternetSecurityManagerEx2;
IVersionManager * g_pVersionManager;
IsoScope * IsoGetDefaultScope();
MicrosoftTelemetryAssertTriggeredNode * g_MicrosoftTelemetryAssertsTriggeredList;
TRIBIT s_tbIntranetAvailable;
TrackingProtection * CreateTrackingProtection(bool);
USERAGENT_PLATFORM GetUserAgentPlatform();
_GUID const * GetKnownOInetProtocolClsID(unsigned long);
_GUID const CLSID_AppxProtocol;
_GUID const CLSID_PluginHost;
_GUID const SID_SByteCodeClassFactory;
_INTERNET_CACHE_ENTRY_INFOA * QueryCacheEntry(char const *);
_INTERNET_CACHE_ENTRY_INFOW * GetUrlCacheEntryInfoAlloc(unsigned short const *,unsigned long);
_IsoIntegrity IsoGetIntegrity(unsigned long);
_RTL_CRITICAL_SECTION g_critSectBM;
_RTL_CRITICAL_SECTION g_critSectVersionManager;
_RTL_CRITICAL_SECTION g_csDll;
_RTL_CRITICAL_SECTION g_mxsFDI;
_RTL_RUN_ONCE g_InitOnce;
_RTL_SRWLOCK g_MicrosoftTelemetryAssertLock;
__int64 TransactionWndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
__int64 fdiNotifyExtract(FDINOTIFICATIONTYPE,FDINOTIFICATION *);
__int64 openfunc(char *,int,int);
_ePrivacIEURIState PrivacIEEvaluate(unsigned long,IUri *);
_ePrivacIEURIState TrackingProtectionListsEvaluate(IUri *,bool);
bool AddTlsDataToList(tagSUrlMkTlsData *);
bool ConfirmDoNotTrackExceptionsAllowed();
bool DoesMonikerRequireLegacyFileURIs(_GUID *);
bool Ext_IsDisabledByFlashPolicy(_GUID const &);
bool Ext_IsInstalled(_GUID const &,unsigned long);
bool GetInstalledBrowserChannelInfo(BrowserChannels::ChannelId,BrowserChannels::InstallationLevel,BrowserChannels::Info *);
bool GetInternalSecurityManager(IInternetSecurityManager *,IInternetSecurityManagerInternal * *);
bool GetInternalSecurityManager(IWebPlatformPermanentSecurityManager *,IInternetSecurityManagerInternal * *);
bool GetUserStringSid();
bool GlobalOMSIsEnabled();
bool IEOMSZoneIsEnabled(unsigned long);
bool IUri_HasProperty(IUri *,__MIDL_IUri_0001);
bool IsAllowedImmersiveClsid(_GUID const &);
bool IsAllowedSchemeForProxyAgnostic(IUri *);
bool IsBlockWeakCryptoEnabled();
bool IsBrowserReplacementFeaturePresent();
bool IsCINetEdgeValid(CINetEdge *,char const *);
bool IsCINetValid(CINet *);
bool IsClsidKillbittedWorker(_GUID const *,CCompatCacheList *);
bool IsCrossProcessRedirectResult(long);
bool IsDomainOrHostEqual(unsigned short const *,unsigned short const *);
bool IsEDUPolicyEnabled();
bool IsExtensionEnabledByUser(_GUID const &);
bool IsHVSITrusted(unsigned short const *,HVSIUntrustedReason *);
bool IsIEBrowserHosted();
bool IsKnownEdgeProtocol(unsigned short const *);
bool IsLegacyFileURI(unsigned short const *);
bool IsMatchingScheme(unsigned short const *,unsigned short const *,int);
bool IsMonitoringUIDelayed();
bool IsOs_DomainMember();
bool IsOs_PhoneNT();
bool IsOs_Win8OrGreater();
bool IsOs_Wow6432();
bool IsProtocolMonitorAttached();
bool IsRunningInHVSIContainer();
bool IsSVGMimeRegistrationMissing();
bool IsSameAuthority(IUri *,IUri *);
bool IsTelemetryInPrivate();
bool IsThisAMultiSessionOS();
bool IsTransferOfBindForPDF(IBindCtx *);
bool IsTridentClsid(_GUID const &);
bool IsValidContextToUpdateFilter();
bool IsWebFilteringEnabled();
bool IsWebProtocol(IUri *);
bool IsWindowsVersionOrGreater(unsigned short,unsigned short,unsigned short);
bool MatchAadLogonUrl(IUri *,unsigned short const *,unsigned __int64 *);
bool MatchesIsoEnterpriseID(unsigned short const *);
bool ProtocolHandledByWininet(IUri *);
bool RemovePermanentInternetSecurityManager(bool);
bool RemovePermanentUrlRedirectionPolicyManager(bool);
bool UrlHasHostName(unsigned short const *);
bool Utf8MatchWildcardSubstring(char const *,char const *);
bool ValueIsSetInBrowserTabTrustedDataFlags(unsigned long);
bool g_allowWebsiteAppCaches;
bool g_bUAInitialized;
bool g_enableEdgeCookies;
bool g_enableHSTSForAppsInEdgeMode;
bool g_enableHttp2ForProcess;
bool g_enableSameSiteCookies;
bool g_experimentalNetworkFeatures;
bool g_fCustomUAInUse;
bool g_fRegistryCustomUACached;
bool volatile g_IsIsoLoaded;
char * Bin2Hex(unsigned char *,unsigned long);
char * BuildUserAgentStringHelper(UACOMPATMODE,char *);
char * BuildUserAgentStringMobileHelper(UACOMPATMODE,char *,USERAGENT_TYPE,int);
char * FindFileExtension(char *);
char * GetLogString(_MY_LOGGING_INFO *);
char * GetUAInfoString();
char * GetUtf8LowerProperty(IUri *,__MIDL_IUri_0001);
char * MbsChrWorker(char const *,char);
char * ParseAFileName(char *,int *);
char * ReadTrackingPrefix();
char * SzW2ADynamic(unsigned short const *,char *,int,int);
char * _SkipWhite(char *);
char * g_pcszRegistryCustomUserAgentString;
char * g_pszUAInfoString;
char * g_pszUserAgentStringCustom;
char * g_szBrowserLang;
char * g_szBrowserPrimaryLang;
char * g_szOCXCacheDirMachineScope;
char * g_szOCXCacheDirUserScope;
char * g_szOCXTempDir;
char * g_szPlatform;
char const * * g_rgszMediaStr;
char const * GetCommonDefaultUserAgentA();
char const * GetUserAgentString();
char const * const * const g_szProcessorTypes;
char const * const g_pcszUserAgentString;
int (* g_pfnLoadString)(HINSTANCE__ *,int,char *,int);
int AccessAllowed(ITargetFrame *,IHlinkFrame *);
int AccessAllowed(unsigned short const *,IDispatch *,unsigned short const *,IDispatch *);
int AdjustFileTime(__int64,unsigned short,unsigned short);
int AdviseForceDownload(_GUID * const,unsigned long);
int AppendPlatformString(UACOMPATMODE,USERAGENT_PLATFORM,HKEY__ *,HKEY__ *,char * *,unsigned long *,unsigned long *);
int AppendPlatformStringHelper(UACOMPATMODE,HKEY__ *,HKEY__ *,char * *,unsigned long *,unsigned long *);
int AreAllLanguagesPresent(char const *,char const *);
int AreDoNotTrackExceptionsAllowed();
int CalcTextHeight(HWND__ *,HWND__ *,unsigned short const *);
int CanUseSimpleBinding();
int CheckIfDocFile(unsigned char *,unsigned long);
int CompareOptions(unsigned long const *,unsigned long const *,__int64);
int CompareSettings(tagSETTINGTEMPLATE const *,tagSETTINGTEMPLATE const *,__int64);
int ConvertToPrefixedURL(char const *,char * *);
int CountSegmentsW(unsigned short *);
int DPA_ReleaseCB<IUri>(IUri *,void *);
int DestroyBlock(char *,void *);
int DestroyOption(unsigned long *,void *);
int DestroySetting(tagSETTINGTEMPLATE *,void *);
int DoMimeAndExtensionMatch(unsigned short const *,unsigned short const *,unsigned short *,unsigned long);
int DoesPathAccessDosDevice(unsigned short const *);
int DwToWchar(unsigned long,unsigned short *,unsigned long,int);
int EmulationItem_Destroy(_sBrowserModeFilterEntry *,void *);
int EnumIEWindowsProc(HWND__ *,__int64);
int Ext_CompareFileNames(unsigned short const *,unsigned short const *);
int Ext_Disabled(unsigned short const *);
int Ext_EnhancedProtectedMode_IsCompatible(_GUID const &,unsigned long,bool);
int Ext_FixupUninstalledControl(_GUID const &);
int Ext_IsActiveXImmersiveCompatible(_GUID const &,IUri *,int);
int Ext_IsApprovedByUser(_GUID const &);
int Ext_IsBrowserExtension(_GUID const &);
int Ext_IsEnabledByUser(_GUID const &);
int Ext_IsMSHTMLDoc(_GUID const &,int *);
int Ext_IsManagedByPolicy(_GUID const &,int *);
int Ext_IsRegistered(_GUID const &,unsigned long,_EXT_ARCHITECTURE *);
int Ext_VersionCompare(unsigned long,unsigned long,unsigned long,unsigned long);
int FDeleteEntries(HKEY__ *,REGENTRY const * const,unsigned long);
int FDeleteEntryGroups(REGENTRYGROUP const *);
int FRegisterEntries(HKEY__ *,REGENTRY const * const,unsigned long,char *,char *);
int FRegisterEntryGroups(REGENTRYGROUP const *,char *,char *);
int FileBearsMarkOfTheWeb(unsigned short const *,unsigned short * *);
int GetAddSitesDisplayUrl(unsigned short const *,unsigned short *,unsigned long);
int GetCertHash(_CERT_CONTEXT const *,unsigned char *,unsigned long *);
int GetCertInfo(void *,_CERT_CONTEXT const * *,_CMSG_SIGNER_INFO * *);
int GetCertPublisherName(_CERT_CONTEXT const *,unsigned short *,unsigned long);
int GetDPIX();
int GetDPIY();
int GetEXEName(char *,unsigned int);
int GetLocalPDDI(_POLICY_DNS_DOMAIN_INFO * *);
int GetPortFromUrlSchemeStub(unsigned long,unsigned long *);
int GetPropertyFromNameStub(unsigned short const *,__MIDL_IUri_0001 *);
int GetZoneFromFeatureEnabledFlags(unsigned long,unsigned long *);
int GlobalInitOnceUrlMon(_RTL_RUN_ONCE *,void *,void * *);
int GlobalUTF8Enabled();
int GlobalUTF8EnabledInternal();
int HasDotInName(unsigned short const *,unsigned long);
int IECompatLoggingEnabled();
int IEGetIconSize(FEATURE_ICON_TYPE);
int InitOnceDeviceFamily(_RTL_RUN_ONCE *,void *,void * *);
int InitOnceVersionInfo(_RTL_RUN_ONCE *,void *,void * *);
int InitPrivacIESettingsSharedMem();
int InlineIsEqualGUID(_GUID const &,_GUID const &);
int InstallBrokerIsNeeded(unsigned long);
int IsABrowserApp();
int IsAboutIUri(IUri *);
int IsAbstractDifferent(HKEY__ *,char *);
int IsActiveXExtensionAllowed(_GUID const &,IUri *,int);
int IsAppContainerCompatible(_GUID const &,unsigned long);
int IsAutoProxyReady(IUri *);
int IsCDFile(IUriPriv *);
int IsDWORDPropertyStub(__MIDL_IUri_0001);
int IsDeclined(unsigned short const *,IInternetHostSecurityManager *);
int IsDoNotTrackEnabled();
int IsEDPModeNeutralIUri(IUri *);
int IsFirstRunAddonBlockEnabled();
int IsFlashLoaded();
int IsFlashVersionGreaterThan_9_0_16_0();
int IsHierarchicalScheme(unsigned long);
int IsIEInternalResUrl(IUriPriv *);
int IsIEPresent();
int IsIEResourcePage(IUri *);
int IsIESystemExtension(_GUID const &);
int IsIEVisible();
int IsInGUIModeSetup();
int IsInternalKnownResHost(unsigned short const *);
int IsInternetExplorerApp();
int IsLocalHostIP(unsigned short const *);
int IsMICHighProcess();
int IsOpaqueScheme(unsigned long);
int IsPreApproved(_GUID const &);
int IsProtectedModeNeutralIUri(IUri *);
int IsProtectedModeNeutralResIUri(IUri *);
int IsProtectedModeNeutralScriptIUri(IUri *);
int IsResIUri(IUri *);
int IsSafeToInitialize(IUri *,_GUID const &,_GUID *,IUnknown *,unsigned long,ICatInformation *,IInternetHostSecurityManager *);
int IsSameIHTMLWindow2(IHTMLWindow2 *,IHTMLWindow2 *);
int IsSameObject(IUnknown *,IUnknown *);
int IsSeparatorW(unsigned short);
int IsSpartanApp();
int IsSpecialUrl(unsigned short *);
int IsStatusOk(unsigned long);
int IsStreamEnabled();
int IsStringPropertyStub(__MIDL_IUri_0001);
int IsUIRestricted();
int IsUncSavedFileCheckEnabled();
int IsUserInAdminGroup();
int IsWebBrowserInImmersiveModeAllowed(IBindCtx *);
int JavaVMJitProc(HWND__ *,unsigned int,unsigned __int64,__int64);
int LoadIsoDll(_RTL_RUN_ONCE *,void *,void * *);
int LogSqmAddToAverage(unsigned long,unsigned long);
int LogSqmAddToStreamDWord(unsigned long,unsigned long,unsigned long);
int LogSqmAddToStreamString(unsigned long,unsigned long,unsigned short const *);
int LogSqmBits(unsigned long,unsigned long);
int LogSqmBool(unsigned long,unsigned long);
int LogSqmDWord(unsigned long,unsigned long);
int LogSqmIfMax(unsigned long,unsigned long);
int LogSqmIfMin(unsigned long,unsigned long);
int LogSqmIncrement(unsigned long,unsigned long);
int LogSqmSetString(unsigned long,unsigned short const *);
int NeedProgressiveDownload(unsigned short const *);
int PDFNeedProgressiveDownload();
int PathCchIsRootA(char const *);
int PrivacIESettingsCurrent(unsigned long *);
int SecurityIdsMatch(unsigned char *,unsigned long,unsigned char *,unsigned long);
int SniffStringFileInfo(char *,char const *,unsigned long *);
int SqmOptedIn();
int StrCmpIIA(char const *,char const *);
int StrCmpIIW(unsigned short const *,unsigned short const *);
int StrCmpNIIA(char const *,char const *,unsigned long);
int StrCmpNIIW(unsigned short const *,unsigned short const *,unsigned long);
int StringFitsControlWidth(HWND__ *,long,unsigned short const *,unsigned __int64,HFONT__ *);
int UnregisterUrlMkWndClass();
int ZonesInit();
int _AppendEdgeToken(char * *,unsigned long *,unsigned long *);
int _AppendToString(char * *,unsigned long *,unsigned long *,char const *,unsigned long);
int _AppendUAAttribute(char * *,unsigned long *,unsigned long *,char const *,unsigned long);
int _AppendWindowsVersion(char * *,unsigned long *,unsigned long *);
int _DNTEvaluateURL(unsigned short const *,bool);
int _GetRegistryFlag(char const *,char const *,char const *,int);
int _WriteHitLogging(_MY_LOGGING_INFO *);
int closefunc(__int64);
int g_CPUType;
int g_OSInfoInitialized;
int g_bCheckedForCoInstall;
int g_bInit;
int g_bInitBM;
int g_bInitVersionManager;
int g_bLangInit;
int g_bLockedDown;
int g_bUseHKLMOnly;
int g_bUseOLECoInstall;
int g_fClientCertSuppliedInProcess;
int g_fDefaultMediaRegistered;
int g_fDoNotTrack;
int g_fDoNotTrackAllowExceptions;
int g_fExtensionsOff;
int g_fFirstNavigationFlushed;
int g_fHSTSEnabled;
int g_fRestrictHTTP2;
int randnum();
int wil_QueryFeatureState(wil_FeatureState *,unsigned int,int,wil_FeatureStore,int *,int *);
int wil_RtlStagingConfig_QueryFeatureState(wil_FeatureState *,unsigned int,int,int *);
int wil_StagingConfig_QueryFeatureState(wil_FeatureStore,wil_FeatureState *,unsigned int,int,int *);
int wil_details_FeatureReporting_ReportUsageToServiceDirect(wil_details_FeatureReportingCache *,unsigned int,int,int,wil_details_ServiceReportingKind,unsigned int,unsigned __int64);
int wil_details_StagingConfigFeature_HasUniqueState(wil_details_StagingConfigFeature const *);
int wil_details_StagingConfig_AreAnyFeaturesConfigured(wil_details_StagingConfig *);
int wil_details_StagingConfig_QueryFeatureState(wil_details_StagingConfig *,wil_FeatureState *,unsigned int,int);
long (* g_pfnLoadIconWithScaleDown)(HINSTANCE__ *,unsigned short const *,int,int,HICON__ * *);
long (* g_wil_details_pfnNtQueryWnfStateData)(__WIL__WNF_STATE_NAME const *,__WIL__WNF_TYPE_ID const *,void const *,unsigned long *,void *,unsigned long *);
long (* g_wil_details_pfnNtUpdateWnfStateData)(__WIL__WNF_STATE_NAME const *,void const *,unsigned long,__WIL__WNF_TYPE_ID const *,void const *,unsigned long,unsigned long);
long (* g_wil_details_pfnRtlNotifyFeatureUsage)(_RTL_FEATURE_USAGE_REPORT *);
long (* g_wil_details_pfnRtlQueryFeatureConfiguration)(unsigned int,_RTL_FEATURE_CONFIGURATION_TYPE,unsigned __int64 *,_RTL_FEATURE_CONFIGURATION *);
long (* g_wil_details_pfnRtlRegisterFeatureConfigurationChangeNotification)(void (*)(void *),void *,unsigned __int64 *,void * *);
long (* g_wil_details_pfnRtlSubscribeWnfStateChangeNotification)(__WIL__WNF_USER_SUBSCRIPTION * *,__WIL__WNF_STATE_NAME,unsigned long,long (*)(__WIL__WNF_STATE_NAME,unsigned long,__WIL__WNF_TYPE_ID *,void *,void const *,unsigned long),void *,__WIL__WNF_TYPE_ID *,unsigned long,unsigned long);
long (* g_wil_details_pfnRtlUnsubscribeWnfNotificationWaitForCompletion)(__WIL__WNF_USER_SUBSCRIPTION *);
long (*LoadPFNForIconScaleDown())(HINSTANCE__ *,unsigned short const *,int,int,HICON__ * *);
long * GetGlobalCounterMemoryAddress(IEGLOBALCOUNTER);
long AskBrokerProtectedModeUrl(IUri *);
long CBindCtx_CreateInstance(IUnknown *,IUnknown * *);
long CLSIDFromStringA(char *,_GUID *);
long CMemPropSetStg_CreateInstanceWrapper(IUnknown *,IUnknown * *);
long CTSimpleArray_EnsureCapacity(long (*)(void *,unsigned __int64,void * *),unsigned __int64,unsigned __int64,unsigned __int64 *,void * *);
long CallRegInstall(char *);
long CallThreadPoolRegistryFunction(unsigned long,unsigned long,unsigned long,unsigned char *,unsigned long);
long CdlProtocol_CreateInstance(IUnknown *,IUnknown * *);
long CheckActiveXDownloadEnabled(IInternetHostSecurityManager *,unsigned short const *,IBindStatusCallback *);
long CheckFileImplementsCLSID(char const *,_GUID const &);
long CheckHandleInCaseOfDocFile(int *,_GUID *,unsigned char *,unsigned long);
long CheckInstalledVersionHint(HKEY__ *,CLocalComponentInfo *,unsigned long,unsigned long);
long CheckLanguage(unsigned long,char *);
long CoCreateInstanceForObjectBinding(_GUID const &,IUnknown *,unsigned long,_GUID const &,void * *,int,IUri *);
long CoGetClassObjectForObjectBinding(_GUID const &,unsigned long,void *,_GUID const &,void * *,int,IUri *,int,IExtensionValidationProxy *,unsigned long);
long CoUnmarshalInterfaceAtomic(IStream *,_GUID const &,void * *);
long CombineIMonikerAndIUri(IBindCtx *,IMoniker *,IMoniker *,IUri *,IUri * *,unsigned long,unsigned long);
long CompatFlagsFromClsidWorker(_GUID const *,unsigned long *,unsigned long *,CCompatCacheList *);
long CompatibleQueryInterface(IUnknown *,_GUID const &,void * *);
long ComposeHackClsidFromMime(char *,char const *);
long ConvertIPv6LiteralToHost(unsigned short *,unsigned long,unsigned short const *,unsigned long,unsigned short * *,unsigned __int64 *);
long CreateEdgeProtocolInstance(unsigned long,IUnknown *,IUnknown * *);
long CreateFileUriIfNecessary(IUri *,IUri * *,bool);
long CreateIUriFromProtocolAndDomainPath(unsigned short const *,unsigned short const *,unsigned short const *,IUri * *);
long CreateKnownProtocolInstance(unsigned long,IUnknown *,IUnknown * *);
long CreateLegacyProtocolInstance(unsigned long,IUnknown *,IUnknown * *);
long CreateUniqueCabTempDir(char *);
long CreateUriWithFlagsIfNecessary(IUri *,unsigned long,unsigned long,IUri * *);
long DeleteOInetSession(unsigned long);
long DoReboot(HWND__ *);
long DoUrlShellExecuteA(char const *);
long DoWPCLogging(unsigned short const *,unsigned short const *,int);
long DualEngineAdapterSigningChainedToMicrosoftRoot(void *);
long DupAttribute(IXMLElement *,unsigned short *,unsigned short * *);
long DupAttributeA(IXMLElement *,unsigned short *,char * *);
long EmulationItem_LoadFromStream(_DPASTREAMINFO *,IStream *,void *);
long EmulationItem_SaveToStream(_DPASTREAMINFO *,IStream *,void *);
long EncodeAsJSONString<CCoStringBuilder>(unsigned short const *,CCoStringBuilder &,bool,unsigned long);
long EnsureSecurityManager();
long EnumSubDomains<CIEBrowserModeFilter::ACTIVEX_RULE_STATE,CIEBrowserModeFilter>(CIEBrowserModeFilter *,IUri *,unsigned short const *,long (*const)(CIEBrowserModeFilter * const,IUri *,unsigned short const *,unsigned short const *,CIEBrowserModeFilter::ACTIVEX_RULE_STATE *),CIEBrowserModeFilter::ACTIVEX_RULE_STATE *);
long EnumSubDomains<CIEBrowserModeFilter::DOMAIN_EMULATION_STATE,CIEBrowserModeFilter>(CIEBrowserModeFilter *,IUri *,unsigned short const *,long (*const)(CIEBrowserModeFilter * const,IUri *,unsigned short const *,unsigned short const *,CIEBrowserModeFilter::DOMAIN_EMULATION_STATE *),CIEBrowserModeFilter::DOMAIN_EMULATION_STATE *);
long EnumSubDomains<SSiteListEntry,CIEEnterpriseModeFilter>(CIEEnterpriseModeFilter *,IUri *,unsigned short const *,long (*const)(CIEEnterpriseModeFilter * const,IUri *,unsigned short const *,unsigned short const *,SSiteListEntry *),SSiteListEntry *);
long EnumSubDomains<sAppStoreCVListEntry,CIEBrowserModeFilter>(CIEBrowserModeFilter *,IUri *,unsigned short const *,long (*const)(CIEBrowserModeFilter * const,IUri *,unsigned short const *,unsigned short const *,sAppStoreCVListEntry *),sAppStoreCVListEntry *);
long EnumSubDomains<sCVListEntry,CIEBrowserModeFilter>(CIEBrowserModeFilter *,IUri *,unsigned short const *,long (*const)(CIEBrowserModeFilter * const,IUri *,unsigned short const *,unsigned short const *,sCVListEntry *),sCVListEntry *);
long EnumSubDomains<sLayoutWidthCVListEntry,CIEBrowserModeFilter>(CIEBrowserModeFilter *,IUri *,unsigned short const *,long (*const)(CIEBrowserModeFilter * const,IUri *,unsigned short const *,unsigned short const *,sLayoutWidthCVListEntry *),sLayoutWidthCVListEntry *);
long EnumSubDomains<sNewTabPageCVListEntry,CIEBrowserModeFilter>(CIEBrowserModeFilter *,IUri *,unsigned short const *,long (*const)(CIEBrowserModeFilter * const,IUri *,unsigned short const *,unsigned short const *,sNewTabPageCVListEntry *),sNewTabPageCVListEntry *);
long EnumSubPathsWithSchemeAndPort<SSiteListEntry,CIEEnterpriseModeFilter>(CIEEnterpriseModeFilter *,IUri *,unsigned short const *,unsigned short const *,unsigned long * const,long (*const)(CIEEnterpriseModeFilter * const,IUri *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned long * const,SSiteListEntry *),SSiteListEntry *);
long Ext_ApproveExtension(_GUID const &,int);
long Ext_EnableExtension(_GUID const &);
long Ext_GetArchitectureBrowserExt(_GUID const &,_EXT_ARCHITECTURE *);
long Ext_GetArchitectureHelper(HKEY__ *,unsigned short const *,HKEY__ * *,_EXT_ARCHITECTURE *);
long Ext_GetFileVersion(unsigned short const *,unsigned long *,unsigned long *,unsigned long *,unsigned long *,unsigned long *);
long Ext_GetFileVersionFromCache(_GUID const &,unsigned short const *,unsigned long *,unsigned long *,unsigned long *,unsigned long *,unsigned long *);
long Ext_GetIEExtCompatKey(_GUID const &,unsigned short *,unsigned __int64);
long Ext_GetModulePath(_GUID const &,unsigned short *,unsigned __int64,unsigned long,_EXT_ARCHITECTURE *);
long Ext_GetSettingsKey(_GUID const &,unsigned short *,unsigned __int64);
long Ext_GetStatsKey(_GUID const &,unsigned short *,unsigned __int64);
long Ext_IECompatMatchExtension(unsigned short const *,unsigned short const *,unsigned long,unsigned long,unsigned long *,unsigned long *);
long Ext_IsFrameAddOnApproved(_GUID const &,bool *);
long Ext_IsIEExtCompatible(_GUID const &,unsigned long *,unsigned long *,int);
long Ext_IsVersionInRange(unsigned short const *,unsigned long,unsigned long);
long Ext_ReadStatsFlags(_GUID const &,unsigned long *);
long Ext_SetFileVersionInCache(_GUID const &,unsigned short const *,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long);
long ExtractFromCabinet(SESSION *,char const *,CCodeDownload *);
long ExtractInfFile(char const *,char const *,SESSION *,char *);
long ExtractOneFile(char const *,char *,char const *,SESSION *,char *);
long ExtractZoneFromFile(unsigned short const *,unsigned short * *,unsigned long *);
long FileProtocol_CreateInstance(IUnknown *,IUnknown * *);
long FillVersionInformation(unsigned short const *,tagIE_SIGNATURE_INFO *);
long FilterUnsupportedInstallScopes(unsigned long *,unsigned long *);
long FindBootstrapClsid(char *,_GUID *);
long FindMediaString(unsigned short,char const * *);
long FindMediaTypeClassInfo(char const *,char const *,_GUID *,unsigned long *,unsigned long);
long FindMediaTypeFormat(unsigned short const *,unsigned short *,unsigned long *);
long FitTextToWindowWithEllipsifiedStringWithFudge(HWND__ *,long,unsigned short const *,unsigned __int64,HFONT__ *,int,unsigned short * *);
long FtpProtocol_CreateInstance(IUnknown *,IUnknown * *);
long GetAbstract(HKEY__ *,char * *);
long GetAcceptHeadersForCategory(__MIDL___MIDL_itf_urlmonp_0000_0019_0001,unsigned short * *,unsigned long,unsigned long *);
long GetActivePolicy(IInternetHostSecurityManager *,unsigned short const *,unsigned long,unsigned long &);
long GetActivePolicy(IInternetHostSecurityManager *,unsigned short const *,unsigned long,unsigned long &,int);
long GetActiveXSafetyProvider(IActiveXSafetyProvider * *);
long GetAlternateClsidHelper(_GUID const *,_GUID *);
long GetAttribute(IXMLElement *,unsigned short *,tagVARIANT *);
long GetAttributeA(IXMLElement *,unsigned short *,char *,unsigned long);
long GetAuthenticodeSignatureInfo(unsigned short const *,void *,unsigned long,tagIE_SIGNATURE_INFO *,_CERT_CONTEXT const * *,void * *);
long GetAxInstallBroker(HWND__ *,unsigned long,IeAxiAdminInstaller * *,bool);
long GetAxInstallBrokerAsAdmin(_GUID const &,_GUID const &,HWND__ *,int,IUnknown * *);
long GetAxInstallBrokerHelper(_GUID const &,_GUID const &,HWND__ *,unsigned long,int,IUnknown * *);
long GetBSCHolder(IBindCtx *,CBSCHolder * *);
long GetBrowserTransitionState(unsigned short const *,tagBROWSERTRANSITIONREASON *,int *);
long GetBrowserTransitionStateInternal(unsigned short const *,tagBROWSERTRANSITIONREASON *,int *);
long GetCOInetSession(COInetSession * *);
long GetCachedFeatures(_tagINTERNETFEATURELIST,__int64 *,unsigned long *);
long GetCachedRedirectedEntry(_GUID *,unsigned short const *,unsigned short *,unsigned long,CHashTable<_GUID,unsigned short> *,_RTL_CRITICAL_SECTION *,int *);
long GetCatalogHashFromFile(void *,unsigned long *,unsigned char * *);
long GetCatalogSignatureInfo(unsigned short const *,void *,unsigned long,tagIE_SIGNATURE_INFO *,_CERT_CONTEXT const * *,void * *);
long GetClassDocFileBuffer(void *,unsigned long,_GUID *);
long GetClassFromExt(unsigned short const *,_GUID *);
long GetClassMime(unsigned short const *,_GUID *,int);
long GetClsIDInfo(_GUID *,unsigned long,unsigned long *);
long GetClsidFromExtOrMime(_GUID const &,_GUID &,unsigned short const *,unsigned short const *,char * *);
long GetCodeBaseFromDocFile(unsigned char *,unsigned long,unsigned short * *,unsigned short const *,unsigned long *,unsigned long *);
long GetComponentIDFromIEFeature(char const *,char * *);
long GetDefaultBlobSecurityUrl(unsigned short *,unsigned long,unsigned long *);
long GetDeploymentSectionInfo(char const *,unsigned long *,unsigned long *);
long GetDomainFromHost(__MIDL_IUri_0002,unsigned short const *,unsigned long,unsigned short const * *,unsigned long *,int);
long GetDomainWithHostFallbackFromUri(IUri *,unsigned short * *,unsigned long,int *);
long GetEncodedW3COriginFromUri(IUri *,unsigned long,unsigned short * *);
long GetFeatureIDFromCLSSPEC(__MIDL___MIDL_itf_wtypes_0000_0001_0001 *,char * *,tagQUERYCONTEXT *,tagQUERYCONTEXT *,_GUID *);
long GetFileVersion(CLocalComponentInfo *,unsigned long *,unsigned long *,unsigned long *,unsigned long *);
long GetFixedFilePathForResourceCandidate(IResourceCandidate *,unsigned short const *,unsigned short *,unsigned long);
long GetFlashModuleName(unsigned short *,unsigned long);
long GetHostDisplayNameFromUrlInternal(unsigned short const *,unsigned int,unsigned short * *,int *,int,int);
long GetIEFeatureFromClass(unsigned short * *,_GUID const &,tagQUERYCONTEXT *,tagQUERYCONTEXT *);
long GetIEFeatureFromMime(unsigned short * *,unsigned short const *,tagQUERYCONTEXT *,tagQUERYCONTEXT *);
long GetInetError(unsigned long);
long GetInstallScopeFromIntegrityLevel(unsigned long *);
long GetJavaTrustFromCorTrust(_COR_TRUST *,void * *);
long GetKnownImmersiveProtocolClsID(unsigned short const *,_GUID *);
long GetLangString(unsigned long,char *,int);
long GetLangStringMod(HINSTANCE__ *,unsigned long,char *,int);
long GetMachineTypeOfFile(char const *,unsigned long *);
long GetMimeFromExt(unsigned short const *,unsigned short *,unsigned long *);
long GetMimeInfo(unsigned short const *,_GUID *,unsigned long,unsigned long *);
long GetModuleUsageReady(char const *,HKEY__ * *);
long GetNextChildTag(IXMLElement *,unsigned short const *,IXMLElement * *,int &);
long GetNotificationWindowFromThreadState(NotificationWindow * *);
long GetObjectParam(IBindCtx *,unsigned short *,_GUID const &,IUnknown * *);
long GetOcxCacheDirForMachineScope(HKEY__ *,char *);
long GetOcxCacheDirForUserScope(char *);
long GetPlugInClsID(_GUID const &,char const *,char *,unsigned __int64,bool,_GUID *);
long GetRegistrationRootKeyFromIntegrityLevel(HKEY__ * *);
long GetSafeClsidOrAlternateClsidWorker(_GUID const *,_GUID *,CCompatCacheList *);
long GetSoftDistFromOSD(char const *,IXMLElement * *);
long GetStyleFromString(char *,unsigned long *);
long GetSubKey(unsigned short const *,unsigned long,int,unsigned short * *);
long GetSupportedInstallScopes(char *,unsigned long,unsigned long *,unsigned long *);
long GetSupportedInstallScopesFromFile(char const *,unsigned long *,unsigned long *);
long GetTlsFeatureCache(TlsFeatureCache * *);
long GetTokenInformation_HeapFree<_TOKEN_GROUPS>(void *,void *,_TOKEN_INFORMATION_CLASS,_TOKEN_GROUPS * *);
long GetTokenProviderLoginUrls(HKEY__ *,unsigned short const *,unsigned short const *,unsigned short * *);
long GetTopLevelParentWindow(IHTMLWindow2 *,IHTMLWindow2 * *);
long GetTransactionObjects(IBindCtx *,unsigned short const *,unsigned long,IInternetProtocol * *,CTransData * *);
long GetUriFromBindCtx(IBindCtx *,IUri * *);
long GetUriWithoutRedirector(IUriPriv *,IUriPriv * *);
long GetVersionFieldEx(unsigned short const *,unsigned short const *,unsigned short *,unsigned int,unsigned long);
long GetVersionFromString(char const *,unsigned long *,unsigned long *,char);
long GetVersionHint(HKEY__ *,unsigned long *,unsigned long *);
long GetZoneFromFileUri(IUri *,unsigned long *);
long HRESULTFromGetLastError();
long HRESULTFromLastErrorError();
long HrDllRegisterServer(REGENTRYGROUP const *,HINSTANCE__ *,int (*)(HINSTANCE__ *,int,char *,int),char *);
long HrGetRelativePathW(unsigned short const *,unsigned short const *,unsigned long,bool,unsigned short *);
long HttpProtocol_CreateInstance(IUnknown *,IUnknown * *);
long HttpsProtocol_CreateInstance(IUnknown *,IUnknown * *);
long IELoadIconWithScaleDown(HINSTANCE__ *,unsigned short const *,int,int,HICON__ * *);
long IEZoneCheckHost(IInternetHostSecurityManager *,unsigned long,unsigned long);
long IEZoneCheckHostEx(IInternetHostSecurityManager *,unsigned long *,unsigned long,unsigned long *,unsigned long,unsigned long,unsigned long);
long IEZoneCheckPathA(char const *,unsigned long,unsigned long,IInternetSecurityMgrSite *);
long IEZoneCheckPathW(unsigned short const *,unsigned long,unsigned long,IInternetSecurityMgrSite *);
long IEZoneCheckUrlA(char const *,unsigned long,unsigned long,IInternetSecurityMgrSite *);
long IEZoneCheckUrlExA(char const *,unsigned long *,unsigned long,unsigned long *,unsigned long,unsigned long,unsigned long,IInternetSecurityMgrSite *);
long IEZoneCheckUrlExCacheA(char const *,unsigned long *,unsigned long,unsigned long *,unsigned long,unsigned long,unsigned long,IInternetSecurityMgrSite *,IInternetSecurityManager * *);
long IEZoneCheckUrlExCacheW(unsigned short const *,unsigned long *,unsigned long,unsigned long *,unsigned long,unsigned long,unsigned long,IInternetSecurityMgrSite *,IInternetSecurityManager * *);
long IEZoneCheckUrlExW(unsigned short const *,unsigned long *,unsigned long,unsigned long *,unsigned long,unsigned long,unsigned long,IInternetSecurityMgrSite *);
long IEZoneCheckUrlW(unsigned short const *,unsigned long,unsigned long,IInternetSecurityMgrSite *);
long IUnknown_EnablePreBinding(IUnknown *,int);
long IUnknown_GetUri(IUnknown *,IUri * *);
long IUnknown_ResumeMainBinding(IUnknown *);
long InitBrowserLangStrings();
long InitUserAgentStringWFromA(char const *,unsigned short * *);
long InstallIEFeature(unsigned short const *,unsigned short const *,_GUID,IBindCtx *,unsigned long,unsigned long,unsigned long);
long InternalRegisterDefaultMediaType();
long IsActiveSetupFeatureLocallyInstalled(char const *,tagQUERYCONTEXT *,unsigned long *,unsigned long *,unsigned long);
long IsAddOnApproved(_GUID const &,unsigned char *,unsigned long,bool *);
long IsAncestorOfWindow(IHTMLWindow2 *,IHTMLWindow2 *,int *);
long IsCLSIDLocallyInstalled(char *,_GUID * const,unsigned short const *,unsigned long,unsigned long,CLocalComponentInfo *,char *,long *,int,int *);
long IsCertInStore(_CRYPTOAPI_BLOB *,CERTSTORE_TYPE);
long IsCompatibleFile(char const *,unsigned long *);
long IsCompatibleType(unsigned long);
long IsControlLocallyInstalled(char *,_GUID * const,unsigned short const *,unsigned long,unsigned long,CLocalComponentInfo *,char *,int,int *);
long IsDistUnitLocallyInstalled(unsigned short const *,unsigned long,unsigned long,CLocalComponentInfo *,char *,int *,unsigned long,int *);
long IsDistUnitLocallyInstalledInDistNode(HKEY__ *,char const *,unsigned long,unsigned long,CLocalComponentInfo *,char *,int *,unsigned long,int *);
long IsDocFile(void *,unsigned long);
long IsExtHandled(unsigned short const *);
long IsFileLocallyInstalled(char *,unsigned long,unsigned long,CLocalComponentInfo *,char *,int,int *);
long IsHSTSEnabled(int *);
long IsHandlerAvailable(unsigned short const *,unsigned short const *,_GUID *,unsigned char *,unsigned long);
long IsIEFeatureInstalled(char const *,tagQUERYCONTEXT *,unsigned long);
long IsMimeHandled(unsigned short const *);
long IsOInetProtocol(IBindCtx *,unsigned short const *);
long IsRedirectToBrokerNeeded(unsigned short const *,tagRedirectionPolicyFlags const *);
long IsRedirectToBrokerNeededInternal(unsigned short const *,tagRedirectionPolicyFlags const *);
long IsRegisterableDLL(char const *);
long IsRightLanguageLocallyInstalled(CLocalComponentInfo *);
long IsTopLevelWindow(IHTMLWindow2 *,int *);
long IsoGetSharedMemoryAddress(unsigned long,void * *,unsigned long *);
long LCIEGetRedirectionPolicyForURL(unsigned short const *,int,int,unsigned long,unsigned long *,int *);
long LCIEGetRedirectionPolicyForURL2(unsigned short const *,int,int,unsigned long,unsigned long *,int *,unsigned short * *);
long LCIEGetRedirectionPolicyForURLInternal(unsigned short const *,int,int,unsigned long,unsigned long *,int *,unsigned short * *);
long LCIEIsComponentSharedFlagValueSet(unsigned long,unsigned long);
long LocalVersionOK(HKEY__ *,CLocalComponentInfo *,_GUID *,unsigned long,unsigned long,int);
long LongLongToULong(__int64,unsigned long *);
long MakeUniqueTempDirectory(char const *,char *,int);
long MapPathToSpecialDirectoryInstance(CMapPathToSpecialDirHelper * *);
long MkProtocol_CreateInstance(IUnknown *,IUnknown * *);
long NeedForceLanguageCheck(HKEY__ *,CLocalComponentInfo *);
long NetworkIsolationGetEnterpriseIdEx(unsigned short const *,HVSIHostType *);
long NormalizeUriCreateFlags(unsigned long,unsigned long *);
long OMSReduceUrl(unsigned short const *,unsigned short * *);
long ObtainPermanentInternetZonePolicies(IPermanentInternetZonePolicies * *);
long ObtainPermanentUrlRedirectionPolicyManager(IUrlRedirectionPolicyManager * *);
long ParseIEFeature(char *,tagQUERYCONTEXT *,unsigned short * *,tagQUERYCONTEXT *);
long ParseLabelsFromHost(unsigned short const *,unsigned long,LabelEntry *,unsigned long *,unsigned long *);
long PathCchAddBackslashExA(char *,unsigned __int64,char * *,unsigned __int64 *);
long PathCchAppendA(char *,unsigned __int64,char const *);
long PathCchCanonicalizeA(char *,unsigned __int64,char const *);
long PathCchCombineA(char *,unsigned __int64,char const *,char const *);
long PathCchSkipRootA(char const *,char const * *);
long PathCchStripToRootA(char *,unsigned __int64);
long ProcessCodeBaseList(IXMLElement *,CList<CCodeBaseHold *,CCodeBaseHold *> *,unsigned short const *);
long ProcessImplementation(IXMLElement *,CList<CCodeBaseHold *,CCodeBaseHold *> *,unsigned long,unsigned short const *);
long ProcessUrlActionUsingTemplate(unsigned long,unsigned long,unsigned char *,unsigned long);
long RegisterPermanentUrlRedirectionPolicyManager(IUrlRedirectionPolicyManager *);
long RegisterProtocolMonitor(IHttpProtocolListener *,int);
long ResultFromKnownLastError();
long SHCoReallocArray<unsigned short>(unsigned short *,unsigned __int64,unsigned short * *);
long SHLocalAllocArray<CByteHashTable::BHASHENTRY *>(unsigned __int64,CByteHashTable::BHASHENTRY * * *);
long SHRegAllocData(HKEY__ *,unsigned short const *,unsigned short const *,int,void * *,unsigned long *);
long SHRegGetDWORD(HKEY__ *,unsigned short const *,unsigned short const *,unsigned long *);
long SecurityManager_CreateInstance(IUnknown *,IUnknown * *);
long SetCoInstall();
long SetCodeDownloadTLSVars();
long SetComponentDeclined(unsigned short const *,char const *);
long SetGlobals();
long SetInstallScopeFromFile(CDownload *);
long SetSignatureState(long,IE_SIGNATURE_STATE *);
long SetTextBold(HWND__ *,unsigned int,HFONT__ * *);
long StringCbCopyA(char *,unsigned __int64,char const *);
long StringCbCopyW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCbLengthW(unsigned short const *,unsigned __int64,unsigned __int64 *);
long StringCbPrintfA(char *,unsigned __int64,char const *,...);
long StringCchCatA(char *,unsigned __int64,char const *);
long StringCchCatExA(char *,unsigned __int64,char const *,char * *,unsigned __int64 *,unsigned long);
long StringCchCatNA(char *,unsigned __int64,char const *,unsigned __int64);
long StringCchCatNW(unsigned short *,unsigned __int64,unsigned short const *,unsigned __int64);
long StringCchCatW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchCopyA(char *,unsigned __int64,char const *);
long StringCchCopyExA(char *,unsigned __int64,char const *,char * *,unsigned __int64 *,unsigned long);
long StringCchCopyExW(unsigned short *,unsigned __int64,unsigned short const *,unsigned short * *,unsigned __int64 *,unsigned long);
long StringCchCopyNA(char *,unsigned __int64,char const *,unsigned __int64);
long StringCchCopyNExW(unsigned short *,unsigned __int64,unsigned short const *,unsigned __int64,unsigned short * *,unsigned __int64 *,unsigned long);
long StringCchCopyNW(unsigned short *,unsigned __int64,unsigned short const *,unsigned __int64);
long StringCchCopyW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchLengthA(char const *,unsigned __int64,unsigned __int64 *);
long StringCchLengthW(unsigned short const *,unsigned __int64,unsigned __int64 *);
long StringCchPrintfA(char *,unsigned __int64,char const *,...);
long StringCchPrintfW(unsigned short *,unsigned __int64,unsigned short const *,...);
long StringCchVPrintfW(unsigned short *,unsigned __int64,unsigned short const *,char *);
long TCreateInstance<CClassInstallFilter,IInternetProtocol>(IUnknown *,IUnknown * *);
long TCreateInstance<CSoftDist,ISoftDistExt>(IUnknown *,IUnknown * *);
long TCreateInstance<CUrlMon,IMoniker>(IUnknown *,IUnknown * *);
long TryCreateReadOnlyBrowserEmulationFilter(__MIDL___MIDL_itf_browsermode_0000_0000_0004,IReadOnlyBrowserEmulationFilter * *);
long ULongSub(unsigned long,unsigned long,unsigned long *);
long URLSubstitution(unsigned short const *,unsigned short *,unsigned long,unsigned long);
long UnregisterPermanentUrlRedirectionPolicyManager();
long UpdateModuleUsage(char const *,char const *,char const *,long,CCodeDownload *);
long UpdateSharedDlls(char const *);
long UpdateSignatureStateFromTrustData(unsigned short const *,void *,unsigned long,_CERT_CONTEXT const *,IE_SIGNATURE_STATE *);
long VerifyAuthenticodeSignature(unsigned short const *,void *,unsigned long,IE_SIGNATURE_STATE *,void * *);
long VerifyCatalogSignature(unsigned short const *,unsigned long,void *,unsigned char *,unsigned long,tagIE_SIGNATURE_INFO *,_CERT_CONTEXT const * *,void * *);
long VerifyCatalogSignatureIndividual(unsigned short const *,unsigned long,tagIE_SIGNATURE_INFO *,_CERT_CONTEXT const * *,void * *);
long WrapSpecialUrlFlat(unsigned short *,unsigned long);
long XORObfuscateValue(_CRYPTOAPI_BLOB *,_CRYPTOAPI_BLOB *);
long ZoneManager_CreateInstance(IUnknown *,IUnknown * *);
long _AllocStringWorker<CTCoAllocPolicy>(void *,unsigned long,unsigned short const *,unsigned __int64,unsigned __int64,unsigned short * *);
long _GetCachedZonesManager(_GUID const &,void * *);
long _GetDNTExceptionSize(unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned __int64 *);
long _GetPrefixedDNTExceptionEntry(unsigned short const *,int,unsigned short *,unsigned __int64);
long _GetZoneFromMOTW(unsigned short const *,unsigned short * *);
long _MemRealloc(void * *,unsigned long);
long _PackDNTException(unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned char *,unsigned __int64);
long _PackDNTExceptionHelper(unsigned short const *,unsigned __int64,unsigned char *,unsigned __int64,unsigned __int64 *);
long _PumpWithMultipleEvents(void * *,unsigned long,HWND__ *,unsigned int);
long _RegOpenKeyWithWow6432Fallback(HKEY__ *,char const *,unsigned long,unsigned long,HKEY__ * *);
long __CoInternetIsFeatureEnabledInternal_IFL(_tagINTERNETFEATURELIST);
long g_cTransLevelHandler;
long g_cUniqueCounterValue;
long seekfunc(__int64,long,int);
long volatile g_lCOInetSessionDllRefcount;
long wil_RtlStagingConfig_RecordFeatureUsage(unsigned int,unsigned int,int);
long wil_StagingConfig_RecordFeatureUsage(unsigned int,unsigned int,int);
long wil_details_NtQueryWnfStateData(__WIL__WNF_STATE_NAME const *,__WIL__WNF_TYPE_ID const *,void const *,unsigned long *,void *,unsigned long *);
long wil_details_NtUpdateWnfStateData(__WIL__WNF_STATE_NAME const *,void const *,unsigned long,__WIL__WNF_TYPE_ID const *,void const *,unsigned long,unsigned long);
long wil_details_RtlRegisterFeatureConfigurationChangeNotification(void (*)(void *),void *,unsigned __int64 *,void * *);
long wil_details_RtlSubscribeWnfStateChangeNotification(__WIL__WNF_USER_SUBSCRIPTION * *,__WIL__WNF_STATE_NAME,unsigned long,long (*)(__WIL__WNF_STATE_NAME,unsigned long,__WIL__WNF_TYPE_ID *,void *,void const *,unsigned long),void *,__WIL__WNF_TYPE_ID *,unsigned long,unsigned long);
long wil_details_StagingConfig_FireNotification(wil_details_StagingConfig *,unsigned int,unsigned short,int);
long wil_details_StagingConfig_Load(wil_details_StagingConfig *,wil_FeatureStore,unsigned __int64,void *,int);
long wil_details_WriteSRUMWnfUsageBuffer(wil::details_abi::heap_vector<wil_details_FeatureUsageSRUM> *);
tagFORMATETC * g_rgfmtetc;
tagHandlerInfo * rgKnownHandlers;
tagInterErrorToHResult * INetErrorExtended;
tagSAFEARRAY * MakeSafeArrayFromData(unsigned char *,unsigned long);
tagURLTEMPLATE * g_ESCTemplateIndex;
tagURLTEMPLATE * g_TemplateIndex;
unsigned __int64 const g_dwMagicContext;
unsigned char g_bShortcircuitKnownProtocols;
unsigned int _GetZoneTrust(unsigned long);
unsigned int _SizeOfString(unsigned short const *);
unsigned int g_iSecurityMessage;
unsigned int readfunc(__int64,void *,unsigned int);
unsigned int writefunc(__int64,void *,unsigned int);
unsigned long * dwAlertResIdArray;
unsigned long * dwToTypeResIdArray;
unsigned long * rgdwDriveTypeCache;
unsigned long ConvertCreateURLMonikerFlagsToCreateUriFlags(unsigned long);
unsigned long GetCurrentModeForList(unsigned short const *);
unsigned long GetLanguageCheckInterval(HKEY__ *);
unsigned long GetPrivacIESettingsMode();
unsigned long GetProcessForNav();
unsigned long GetUrlScheme(unsigned short const *);
unsigned long GetUrlSchemeW(unsigned short const *);
unsigned long GetWCHARCharacterSets(unsigned long,bool);
unsigned long HelperAddUriDefaultFlags(unsigned long,unsigned long);
unsigned long IEAddUriDefaultFlags(unsigned long);
unsigned long IERegGetDWORDWithPoliciesExA(char const *,char const *,char const *,unsigned long,int *,int *);
unsigned long IUri_ProtocolFromScheme(IUri *);
unsigned long IsIntranetAvailableNLA(int *);
unsigned long IsKnownProtocol(unsigned short const *);
unsigned long IsoGetCurrentProcessManager();
unsigned long IsoGetLRACPIC(bool);
unsigned long LeastTrustedZone(unsigned long,unsigned long,int);
unsigned long ProtocolFromScheme(unsigned long);
unsigned long SearchPathA_Wrap(char const *,char const *,char const *,unsigned long,char *,char * *);
unsigned long StartActiveSetup(void *);
unsigned long _IsLoggingEnabled(char const *);
unsigned long const * const g_aFeatureToUrlAction;
unsigned long gTlsIndex;
unsigned long g_dwAutoDetectFlag;
unsigned long g_dwCodeDownloadSetupFlags;
unsigned long g_dwGlobalUTF8EnabledForQuery;
unsigned long g_dwSettings;
unsigned long g_dwWarnOnIntranetFlag;
unsigned long g_enableTCPFastOpenState;
unsigned long g_fUnlockCDFiles;
unsigned long g_lcidBrowser;
unsigned long g_ssl3FallbackState;
unsigned short * AddCorrelationIdParameter(unsigned short const *,unsigned short const *);
unsigned short * AllocDecodedUriProperty(IUri *,__MIDL_IUri_0001);
unsigned short * FindFileExtensionLegacyW(unsigned short *);
unsigned short * FindFileExtensionW(unsigned short const *);
unsigned short * OLESTRDuplicate(unsigned short const *);
unsigned short * OLESTRDuplicate(unsigned short const *,unsigned long);
unsigned short * WzA2WDynamic(char const *,unsigned short *,int,int);
unsigned short * g_pwszAadLoginUrls;
unsigned short * g_pwszLoginUrl;
unsigned short * g_rgclFormat;
unsigned short const * * g_ppszEventsDescriptions;
unsigned short const * DecodeProgressStatusText(unsigned long,unsigned short const *,unsigned short *,unsigned long);
unsigned short const * FindFileExtensionLegacyConstW(unsigned short const *);
unsigned short const * GetCommonDefaultUserAgentW();
unsigned short const * GetPropertyNameStub(__MIDL_IUri_0001);
unsigned short const * SkipVersionWildcardMatches(unsigned short const *);
unsigned short const * const RuntimeClass_Windows_Security_EnterpriseData_FileProtectionManager;
unsigned short const * const RuntimeClass_Windows_Security_EnterpriseData_ProtectionPolicyManager;
unsigned short const * const RuntimeClass_Windows_Storage_StorageFile;
unsigned short const * const RuntimeClass_Windows_Storage_StorageFolder;
unsigned short const * const SZESCRANGES;
unsigned short const * const SZPOLICIESZONEMAPRANGES;
unsigned short const * const SZRANGEPREFIX;
unsigned short const * const SZRANGES;
unsigned short const * const g_vwzApplicationATOM;
unsigned short const * const g_vwzApplicationRSS;
unsigned short const * const g_vwzApplicationXML;
unsigned short const * const g_vwzTextXML;
unsigned short const * nextdot(unsigned short const *);
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
void * GetIESqmMutex(unsigned long,unsigned long);
void * GetLogFile(char const *,_INTERNET_CACHE_ENTRY_INFOA *,char *);
void * OpenPublisherStore(unsigned short const *);
void * Win32Open(char *,int,int);
void * allocfunc(unsigned long);
void * g_hHeap;
void * g_hSession;
void * g_hSharedMemMutexBM;
void * operator new(unsigned __int64);
void * operator new(unsigned __int64,std::nothrow_t const &);
void * operator new[](unsigned __int64);
void * operator new[](unsigned __int64,std::nothrow_t const &);
void A2W(char const *,unsigned short *,int);
void CDL_PacketProcessProc(HWND__ *,unsigned int,unsigned __int64,unsigned long);
void CleanupAllThreadsOnProcessDetach(bool);
void CleanupCurrentThread(int);
void CreateAXCompatCache();
void DeinitBrowserMode();
void DeinitVersionManager();
void DeleteAXCompatCache();
void DeleteUserAgentGlobals();
void DestroyDomainFilter(DomainFilter *);
void DestroyMUIScalingIcon(HWND__ *,int);
void DestroyStringFilter(StringFilter *);
void DestroyWindowFromDllMain(HWND__ *);
void DetermineOSAndCPUVersion();
void EncodeInternetStatusTimestamp(unsigned long,unsigned __int64,unsigned short,unsigned short *);
void Ext_VersionStringToNumber(unsigned short const *,unsigned long *,unsigned long *);
void FillFromCertContext(_CERT_CONTEXT const *,tagIE_SIGNATURE_INFO *);
void FillFromSignerInfo(_CMSG_SIGNER_INFO *,tagIE_SIGNATURE_INFO *);
void FormatFooterSection(HWND__ *,HWND__ *,HWND__ *,unsigned short const *);
void FormatUNCPath(unsigned short *,unsigned long,int *);
void FreeJavaTrust(void * *);
void FreeTlsData(tagSUrlMkTlsData *,int,int);
void FreeWVTStateData(void *);
void GUIDToWSTR(_GUID const &,unsigned short *);
void GetInstallBrokerIsNeededCache(unsigned long *,unsigned long *);
void GetUserAgentStringForMode(__MIDL___MIDL_itf_browsermode_0000_0000_0006,bool,char const * *);
void HashTable_CoTaskMemFreeCB<_GUID>(_GUID *);
void IECompatLogAntiphishingUrl(unsigned short const *,unsigned long);
void IECompatLogBinaryBhvr(unsigned short const *,unsigned short const *,unsigned long);
void IECompatLogCDLRestrictions(int,int,int);
void IECompatLogCSSFix(unsigned short const *,unsigned short const *,unsigned long);
void IECompatLogControlBlock(ControlLogging::CLogInformation *);
void IECompatLogFileDownloadWithSrcUrl(unsigned short const *,unsigned short const *);
void IECompatLogIDNNavigation(IUri *);
void IECompatLogMimeHandling(unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,int);
void IECompatLogMimeSniffImageNotUpgraded(unsigned short const *,unsigned short const *);
void IECompatLogMimeSniffUnsafe(unsigned short const *,unsigned short const *);
void IECompatLogMkAndViewSource(unsigned short const *);
void IECompatLogNavigationRestricted(unsigned short const *,unsigned short const *,unsigned short const *);
void IECompatLogNoCompression(long);
void IECompatLogObjCache(unsigned short const *);
void IECompatLogProxyContentManaged(unsigned short const *,char const *,int,int,long,unsigned long);
void IECompatLogRedirectUrl(unsigned short const *);
void IECompatLogSSLNavBlock(unsigned short const *,unsigned long);
void IECompatLogScriptUrl(unsigned short const *,unsigned short const *);
void IECompatLogSubframeNavigate(unsigned short const *,unsigned short const *,unsigned short const *);
void IECompatLogUIPIBlockedExtension(unsigned long,_GUID const &,unsigned short const *);
void IECompatLogZoneElevation3(unsigned short const *,unsigned short const *);
void IECompatLogZoneElevation4(IUri *,unsigned short const *);
void IncrementRegDword(HKEY__ *,unsigned short const *);
void InitBrowserMode();
void InitGlobalConstants();
void InitUserAgentGlobals(char *);
void LoadEdgeApis(HINSTANCE__ *);
void LoadLegacyApis(HINSTANCE__ *);
void LoadSharedApis(HINSTANCE__ *,bool);
void NetworkIsolationGetEnterpriseIdSyncCallback(void *,unsigned short const * const,unsigned long);
void OpenGlobalCounterFileMappingAndMapMemory(unsigned short const *,void * *,long * *);
void OverrideDialogTitleIfNotIEBrowserHosted(HWND__ *,unsigned int);
void ParseDirectInvokeHeader(unsigned short const *,bool *,bool *);
void PrepareLanguage(char *);
void RecordClsidBlocked(ControlLogging::CtrlLoggingEvent,_GUID const &,unsigned short const *,unsigned short const *,int);
void RegistryOperationCallBack(_TP_CALLBACK_INSTANCE *,void *);
void ReleaseIESqmMutex(void *);
void RemoveHyperlinkTags(unsigned short const *,unsigned short *,unsigned long);
void RemoveLeadingAndTrailingStars(char const *,char const * *,unsigned long *);
void RemoveTlsDataFromList(tagSUrlMkTlsData *);
void ScheduleSqmTasksInIdleThread();
void SecurityChanged();
void SqmAddClsidAndReasonToStream(unsigned long,_GUID const *,unsigned long,bool,bool);
void SqmAddExtensionClsid(_GUID const *);
void Utf8ToLower(char *,int);
void W2A(unsigned short const *,char *,int);
void ZonesUnInit(bool);
void freefunc(void *);
void operator delete(void *);
void operator delete[](void *);
void wil_details_FeatureReporting_IncrementOpportunityInCache(wil_details_FeatureReportingCache *,wil_details_ServiceReportingKind,unsigned int,wil_details_RecordUsageResult *);
void wil_details_FeatureReporting_IncrementUsageInCache(wil_details_FeatureReportingCache *,wil_details_ServiceReportingKind,unsigned int,wil_details_RecordUsageResult *);
void wil_details_FeatureReporting_ReportUsageToService(wil_details_FeatureReportingCache *,unsigned int,int,int,FEATURE_LOGGED_TRAITS const *,int,wil_ReportingKind,unsigned __int64);
void wil_details_StagingConfig_Free(wil_details_StagingConfig *);
wil_details_RecordUsageResult wil_details_FeatureReporting_RecordUsageInCache(wil_details_FeatureReportingCache *,wil_details_ServiceReportingKind,unsigned int,unsigned int);
wil_details_ServiceReportingKind wil_details_MapReportingKind(wil_ReportingKind,int);
