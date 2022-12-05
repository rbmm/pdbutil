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
		};

	};

	void Free(void *);
};

namespace ATL
{
	struct CAtlBaseModule
	{
		CAtlBaseModule();
		~CAtlBaseModule();
	};

	struct CAtlModule
	{
		long UpdateRegistryFromResourceS(unsigned int,int,_ATL_REGMAP_ENTRY *);
		long UpdateRegistryFromResourceS(unsigned short const *,int,_ATL_REGMAP_ENTRY *);
		static void EscapeSingleQuote(unsigned short *,unsigned __int64,unsigned short const *);
		virtual long GetGITPtr(IGlobalInterfaceTable * *);
		virtual long GetLockCount();
		virtual long Lock();
		virtual long Unlock();
	};

	struct CAtlModuleT<CComModule>
	{
		virtual long AddCommonRGSReplacements(IRegistrarBase *);
	};

	struct CAtlWinModule
	{
		CAtlWinModule();
		~CAtlWinModule();
	};

	struct CAutoVectorPtr<unsigned short>
	{
		~CAutoVectorPtr<unsigned short>();
	};

	struct CComAutoDeleteCriticalSection
	{
		~CComAutoDeleteCriticalSection();
	};

	struct CComBSTR
	{
		~CComBSTR();
	};

	struct CComCriticalSection
	{
		long Init();
	};

	struct CComModule
	{
		CComModule();
		virtual long UpdateRegistryFromResourceD(unsigned int,int,_ATL_REGMAP_ENTRY *);
		virtual long UpdateRegistryFromResourceD(unsigned short const *,int,_ATL_REGMAP_ENTRY *);
		virtual long UpdateRegistryFromResourceS(unsigned int,int,_ATL_REGMAP_ENTRY *);
		virtual long UpdateRegistryFromResourceS(unsigned short const *,int,_ATL_REGMAP_ENTRY *);
		virtual ~CComModule();
	};

	struct CComPtr<ActivityContext>
	{
		~CComPtr<ActivityContext>();
	};

	struct CComPtr<Enrollment>
	{
		~CComPtr<Enrollment>();
	};

	struct CComPtr<EnrollmentInfoEnumerator>
	{
		~CComPtr<EnrollmentInfoEnumerator>();
	};

	struct CComPtr<IAccPropServices>
	{
		~CComPtr<IAccPropServices>();
	};

	struct CComPtr<IEnrollmentInfo>
	{
		~CComPtr<IEnrollmentInfo>();
	};

	struct CComPtr<IEnrollmentInfoEnumerator>
	{
		~CComPtr<IEnrollmentInfoEnumerator>();
	};

	struct CComPtr<IPinnedList2>
	{
		~CComPtr<IPinnedList2>();
	};

	struct CComPtr<IPropertyStore>
	{
		~CComPtr<IPropertyStore>();
	};

	struct CComPtr<IShellItem2>
	{
		~CComPtr<IShellItem2>();
	};

	struct CComPtr<IShellItem>
	{
		~CComPtr<IShellItem>();
	};

	struct CComPtr<ITaskListWndSite>
	{
		~CComPtr<ITaskListWndSite>();
	};

	struct CExpansionVector
	{
		int Add(unsigned short const *,unsigned short const *);
		long ClearReplacements();
		~CExpansionVector();
	};

	struct CRegKey
	{
		long Close();
		long Create(HKEY__ *,unsigned short const *,unsigned short *,unsigned long,unsigned long,_SECURITY_ATTRIBUTES *,unsigned long *);
		long DeleteSubKey(unsigned short const *);
		long Open(HKEY__ *,unsigned short const *,unsigned long);
		long RecurseDeleteKey(unsigned short const *);
		long SetMultiStringValue(unsigned short const *,unsigned short const *);
		~CRegKey();
	};

	class CRegObject
	{
	protected:
		long RegisterFromResource(unsigned short const *,unsigned short const *,unsigned short const *,int);
	public:
		unsigned short const * StrFromMap(unsigned short *);
		virtual long AddReplacement(unsigned short const *,unsigned short const *);
		virtual long ClearReplacements();
		virtual long QueryInterface(_GUID const &,void * *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
		virtual ~CRegObject();
	};

	class CRegParser
	{
		struct CParseBuffer
		{
			int Append(unsigned short const *,int);
			~CParseBuffer();
		};

	protected:
		int CanForceRemoveKey(unsigned short const *);
		int HasSubKeys(HKEY__ *);
		long AddValue(CRegKey &,unsigned short const *,unsigned short *);
		long NextToken(unsigned short *);
		long RegisterSubkeys(unsigned short *,HKEY__ *,int,int);
		long SkipAssignment(unsigned short *);
		static int VTFromRegType(unsigned short const *,unsigned short &);
		static unsigned short * StrChrW(unsigned short *,unsigned short);
		static unsigned short const * const * const rgszNeverDelete;
		void SkipWhiteSpace();
	public:
		long PreProcessBuffer(unsigned short *,unsigned short * *);
		long RegisterBuffer(unsigned short *,int);
	};

	struct CSimpleArray<unsigned short,CSimpleArrayEqualHelper<unsigned short> >
	{
		void RemoveAll();
	};

	struct CSimpleMap<unsigned short *,unsigned short *,CExpansionVectorEqualHelper>
	{
		int Add(unsigned short * const &,unsigned short * const &);
		unsigned short * & GetValueAt(int);
		void RemoveAll();
		~CSimpleMap<unsigned short *,unsigned short *,CExpansionVectorEqualHelper>();
	};

	class CTempBuffer<unsigned char,256,CCRTAllocator>
	{
		void AllocateHeap(unsigned __int64);
		void FreeHeap();
	public:
		~CTempBuffer<unsigned char,256,CCRTAllocator>();
	};

	class CTempBuffer<unsigned short,1024,CCRTAllocator>
	{
		void AllocateHeap(unsigned __int64);
		void FreeHeap();
	public:
		~CTempBuffer<unsigned short,1024,CCRTAllocator>();
	};

	class CTempBuffer<unsigned short,256,CCRTAllocator>
	{
		void AllocateHeap(unsigned __int64);
		void FreeHeap();
	public:
		~CTempBuffer<unsigned short,256,CCRTAllocator>();
	};

	namespace _ATL_SAFE_ALLOCA_IMPL
	{
		struct CAtlSafeAllocBufferManager<CCRTAllocator>
		{
			~CAtlSafeAllocBufferManager<CCRTAllocator>();
		};

	};

	ATL::CAtlBaseModule _AtlBaseModule;
	ATL::CAtlWinModule _AtlWinModule;
	IUnknown * AtlComPtrAssign(IUnknown * *,IUnknown *);
	int AtlCrtErrorCheck(int);
	long AtlHresultFromLastError();
	long AtlHresultFromWin32(unsigned long);
	long AtlWinModuleTerm(ATL::_ATL_WIN_MODULE70 *,HINSTANCE__ *);
	unsigned __int64 AtlMultiplyThrow<unsigned __int64>(unsigned __int64,unsigned __int64);
	void AtlCallTermFunc(ATL::_ATL_MODULE70 *);
	void AtlThrowImpl(long);
};

struct ActivityContext
{
	ActivityContext();
	long set_Key(_GUID const &);
	long set_OrchestratorType(unsigned short const *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	~ActivityContext();
};

struct AgileGitPtr
{
	AgileGitPtr();
	long CopyLocal(_GUID const &,void * *);
	long CopyLocal<IAsyncCallbackDispatcher>(Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IAsyncCallbackDispatcher> >);
	long Initialize(AgileReferenceOptions,_GUID const &,IUnknown *);
	~AgileGitPtr();
};

namespace ApplicationViewHelpers
{
	long GetViewForApplication(IUnknown *,IImmersiveApplication *,IApplicationView * *);
};

namespace AssignedAccessHelper
{
	struct AssignedAccessUtility
	{
		static bool IsTaskbarAllowed();
	};

};

class AssignedAccessLogonTask
{
	long ApplySingleAppAssignedAccess();
	long QueryServiceImmersiveShell(_GUID const &,_GUID const &,void * *);
};

class AssignedAccessLogonTaskAgent
{
	long BeginPreStartTask(CLogonTaskFramework *,LogonFrameworkTelemetry::LogonTask *);
	static long EnsureLogonTaskAgent();
	static wil::srwlock m_srwLock;
	static wistd::unique_ptr<AssignedAccessLogonTaskAgent,wistd::default_delete<AssignedAccessLogonTaskAgent> > m_spAssignedAccessLogonTaskAgent;
public:
	static long PreStartTaskWait(CLogonTaskFramework *,LogonFrameworkTelemetry::LogonTask *);
};

struct AsyncCallbackDispatcher
{
	virtual long Dispatch(IAsyncCallback *);
};

namespace AsyncResultHelpers
{
	struct AsyncResult<NotificationCenterBadgeRenderResult>
	{
		virtual ~AsyncResult<NotificationCenterBadgeRenderResult>();
	};

	struct AsyncResult<SettingsBitmapLoadInfo>
	{
		virtual ~AsyncResult<SettingsBitmapLoadInfo>();
	};

	struct AsyncResult<TaskbarBadgeVisualRenderResult>
	{
		virtual ~AsyncResult<TaskbarBadgeVisualRenderResult>();
	};

};

namespace AutoHideTelemetry
{
	class TaskbarAutoHideTelemetry
	{
		class AutoHideOnTaskbarHide
		{
		protected:
			virtual bool WasAlreadyReportedToTelemetry(long);
			virtual void StopActivity();
		public:
			void AutoHideStop(HideStopReason,HMONITOR__ *,bool);
			void AutoHideStopMouseHover(HMONITOR__ *,tagPOINT *,tagRECT *,bool);
			void AutoHideStopTrayActive(HMONITOR__ *,HWND__ *);
			void StartActivity(TrayCommon::ShellMode,HMONITOR__ *);
			~AutoHideOnTaskbarHide();
		};

		class AutoHideOnTaskbarShow
		{
		protected:
			virtual bool WasAlreadyReportedToTelemetry(long);
			virtual void StopActivity();
		public:
			void AutoHideStart(TrayCommon::ShellMode,HMONITOR__ *,TrayCommon::TrayUnhideFlags,TrayCommon::UnhideRequest);
			void StartActivity(TrayCommon::ShellMode,HMONITOR__ *);
			~AutoHideOnTaskbarShow();
		};

		static bool CheckAndUpdateState(HideStopReason,unsigned __int64,bool);
	public:
		void AutoHideStopFromTaskList_(HideStopTaskListReason,HMONITOR__ *,bool,unsigned short const *);
	};

};

struct AutoProviderRegistrar
{
	AutoProviderRegistrar(void (*)(),void (*)());
	~AutoProviderRegistrar();
};

struct BUCKET
{
	BUCKET();
	~BUCKET();
};

class BackButton
{
	TrayButtonResources const * _GetButtonResources();
protected:
	virtual bool v_IsEnabled();
	virtual long v_Initialize();
	virtual long v_OnClick(ClickDevice);
	virtual long v_UpdateTheme();
	virtual void v_OnCustomPressAndHold(ClickDevice);
public:
	BackButton(ITrayComponentHost *);
};

struct BadgeContainer
{
	BadgeContainer();
	virtual bool SupportsAllDPIs(CCoSimpleArray<unsigned int,4294967294,CSimpleArrayStandardCompareHelper<unsigned int> > const &);
	virtual long BadgeVisualRendered(TaskbarBadgeVisualRenderResult);
	virtual long CreateBadgeVisualsForApp(unsigned short const *,IBadgeVisualProperties *);
	virtual long DestroyStorageForApp(unsigned short const *);
	virtual long GetOrCreateBadgeVisualForApp(unsigned short const *,IBadgeVisualProperties *,unsigned int,HBITMAP__ * *);
	virtual long Initialize(CCoSimpleArray<unsigned int,4294967294,CSimpleArrayStandardCompareHelper<unsigned int> > const &);
	virtual long Reset();
	virtual void Shutdown();
};

struct BadgeData
{
	virtual BadgingData::BadgeType GetBadgeType();
	virtual bool IsEqual(IBadgeData *);
	virtual long GetBadgeValue(unsigned int *);
};

namespace BadgeUtils
{
	long GetAccessibleStringForBadgeData(IBadgeData *,IResourceMap *,unsigned short * *);
	long GetAccessibleStringForGlyphBadge(BadgingData::BadgeType,IResourceMap *,unsigned short * *);
	long GetAccessibleStringForNumericBadge(unsigned int,unsigned short * *);
	long GetLocalizedStringForNumericBadge(unsigned int,unsigned int,unsigned short * *);
};

class BadgeVisualFactory
{
	D2D_SIZE_U GetBitmapSizeForText(BadgingData::BadgeType,DWRITE_TEXT_METRICS const &);
	long DrawBackground(Geometry::CRectFloat const &,unsigned long,unsigned long,bool,float,float,ID2D1RenderTarget *);
	long DrawGlyphBadgeText(BadgeVisualFactory::GlyphRenderingInfo const &,Geometry::CRectFloat const &,ID2D1SolidColorBrush *,ID2D1RenderTarget *);
	long DrawNumericBadgeText(Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short> > const &,Geometry::CRectFloat const &,ID2D1SolidColorBrush *,ID2D1RenderTarget *);
	long InitializeFonts();
	long InitializeMetrics();
	static long s_GetGlyphRenderingInfo(BadgingData::BadgeType,BadgeVisualFactory::GlyphRenderingInfo *);
	void OverrideFromRegistry(unsigned short *,float,float *);
public:
	BadgeVisualFactory();
	long RuntimeClassInitialize(unsigned int);
	virtual long CreateVisualForBadgeType(BadgingData::BadgeType,unsigned int *,unsigned long,unsigned long,unsigned long,float,float,HBITMAP__ * *);
};

struct BadgeVisualProperties
{
	BadgeVisualProperties();
	virtual BadgeVisualColors GetColors();
	virtual BadgingData::BadgeType GetBadgeType();
	virtual bool IsEqual(IBadgeVisualProperties *);
	virtual float GetBackgroundOpacity();
	virtual float GetStrokeOpacity();
	virtual long GetBadgeData(IBadgeData * *);
	virtual long GetBadgeValue(unsigned int *);
};

struct BadgeVisualRenderRequest
{
	BadgeVisualRenderRequest();
	long RuntimeClassInitialize(int,unsigned int,unsigned short const *,IBadgeVisualProperties *,IBadgeRenderNotifications *);
	virtual bool IsEqual(IBadgeVisualRenderRequest *);
	virtual bool IsSameAppId(unsigned short const *);
	virtual int GetContainerVersionNumber();
	virtual long BeginRequest();
	virtual long GetAppId(unsigned short * *);
	virtual long GetBadgeVisualProperties(IBadgeVisualProperties * *);
	virtual unsigned int GetDpi();
};

namespace BadgeVisualUtils
{
	void GetBadgeVisualColorsForColorTheme(COLORTHEME,BadgeVisualColors *);
};

namespace BadgingData
{
	bool IsGlyphBadge(BadgingData::BadgeType);
};

class ButtonTelemetry
{
	class ClockButtonClicked
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(ClickDevice,bool,bool);
		~ClockButtonClicked();
	};

	class ShowDesktopButton
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(InvocationType);
		~ShowDesktopButton();
	};

	static ButtonTelemetry::TabletModeButton ConvertToTabletModeButtonEnum(_GUID const *);
public:
	static void KeyboardButtonUserChangedDesiredVisibility<bool &,bool const &,bool const &,bool const &>(bool &,bool const &,bool const &,bool const &);
	static void PenWorkspaceButtonUserChangedDesiredVisibility<bool &,bool const &>(bool &,bool const &);
	static void TrayNotifyButtonIgnoreOnClickContextMenu();
	void BackButtonInvoked_(ClickDevice);
	void ControlCenterButtonInvoked_(ClickDevice);
	void KeyboardButtonEnableCalculated_(bool,bool,bool,bool,bool,bool);
	void KeyboardButtonInvoked_(ClickDevice,bool,bool,bool);
	void KeyboardButtonUserChangedDesiredVisibility_(bool,bool,bool,bool);
	void NotificationCenterButtonInvoked_(ClickDevice);
	void PenWorkspaceButtonEnableCalculated_(bool,bool,bool);
	void PenWorkspaceButtonInvoked_(ClickDevice,bool,bool);
	void PenWorkspaceButtonUserChangedDesiredVisibility_(bool,bool);
	void PeopleButtonInvoked_(ClickDevice);
	void SearchButtonInvoked_(ClickDevice,SearchboxTaskbarMode);
	void StartButtonInvoked_(ClickDevice);
	void TabletModeButtonInvoked_(ClickDevice,_GUID const *);
	void TaskViewButtonInvoked_(ClickDevice);
};

struct CAccessibleWrapperBase
{
	CAccessibleWrapperBase(IAccessible *);
	virtual long Clone(IEnumVARIANT * *);
	virtual long ContextSensitiveHelp(int);
	virtual long GetIDsOfNames(_GUID const &,unsigned short * *,unsigned int,unsigned long,long *);
	virtual long GetTypeInfo(unsigned int,unsigned long,ITypeInfo * *);
	virtual long GetTypeInfoCount(unsigned int *);
	virtual long GetWindow(HWND__ * *);
	virtual long Invoke(long,_GUID const &,unsigned long,unsigned short,tagDISPPARAMS *,tagVARIANT *,tagEXCEPINFO *,unsigned int *);
	virtual long Next(unsigned long,tagVARIANT *,unsigned long *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Reset();
	virtual long Skip(unsigned long);
	virtual long accDoDefaultAction(tagVARIANT);
	virtual long accHitTest(long,long,tagVARIANT *);
	virtual long accLocation(long *,long *,long *,long *,tagVARIANT);
	virtual long accNavigate(long,tagVARIANT,tagVARIANT *);
	virtual long accSelect(long,tagVARIANT);
	virtual long get_accChild(tagVARIANT,IDispatch * *);
	virtual long get_accChildCount(long *);
	virtual long get_accDefaultAction(tagVARIANT,unsigned short * *);
	virtual long get_accDescription(tagVARIANT,unsigned short * *);
	virtual long get_accFocus(tagVARIANT *);
	virtual long get_accHelp(tagVARIANT,unsigned short * *);
	virtual long get_accHelpTopic(unsigned short * *,tagVARIANT,long *);
	virtual long get_accKeyboardShortcut(tagVARIANT,unsigned short * *);
	virtual long get_accName(tagVARIANT,unsigned short * *);
	virtual long get_accParent(IDispatch * *);
	virtual long get_accRole(tagVARIANT,tagVARIANT *);
	virtual long get_accSelection(tagVARIANT *);
	virtual long get_accState(tagVARIANT,tagVARIANT *);
	virtual long get_accValue(tagVARIANT,unsigned short * *);
	virtual long put_accName(tagVARIANT,unsigned short *);
	virtual long put_accValue(tagVARIANT,unsigned short *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~CAccessibleWrapperBase();
};

class CActivatedEventArgsBase
{
	virtual long v_GetActivationKind(HSTRING__ *,Windows::ApplicationModel::Activation::ActivationKind *);
protected:
	virtual ~CActivatedEventArgsBase();
public:
	CActivatedEventArgsBase();
	virtual long Initialize(HSTRING__ *,Windows::ApplicationModel::Activation::ApplicationExecutionState,Windows::ApplicationModel::Activation::ISplashScreen *);
	virtual long get_IsForegroundActivation(unsigned char *);
	virtual long get_IsHolographic(unsigned char *);
	virtual long get_Kind(Windows::ApplicationModel::Activation::ActivationKind *);
	virtual long get_NavigationViewId(unsigned int *);
	virtual long get_PreviousExecutionState(Windows::ApplicationModel::Activation::ApplicationExecutionState *);
	virtual long get_SplashScreen(Windows::ApplicationModel::Activation::ISplashScreen * *);
	virtual long get_User(Windows::System::IUser * *);
	virtual long get_UserContext(unsigned __int64 *);
	virtual long put_IsForegroundActivation(unsigned char);
	virtual long put_IsHolographic(unsigned char);
	virtual long put_NavigationViewId(unsigned int);
	virtual long put_UserContext(unsigned __int64);
};

class CActivatedEventArgsWithPrelaunchAndViewIdBase
{
protected:
	virtual ~CActivatedEventArgsWithPrelaunchAndViewIdBase();
public:
	CActivatedEventArgsWithPrelaunchAndViewIdBase();
	virtual long SetPrelaunchActivated(unsigned char);
	virtual long get_PrelaunchActivated(unsigned char *);
};

class CActivatedEventArgsWithViewIdBase
{
protected:
	virtual ~CActivatedEventArgsWithViewIdBase();
public:
	CActivatedEventArgsWithViewIdBase();
	virtual long InitializeViewId(int);
	virtual long get_ActivationViewSwitcher(Windows::UI::ViewManagement::IActivationViewSwitcher * *);
	virtual long get_CurrentlyShownApplicationViewId(int *);
	virtual long get_Properties(Windows::ApplicationModel::Activation::MultiviewActivationProperties *);
	virtual long get_ViewSwitcher(Windows::UI::ViewManagement::IActivationViewSwitcher * *);
	virtual long put_ActivationViewSwitcher(Windows::UI::ViewManagement::IActivationViewSwitcher *);
	virtual long put_Properties(Windows::ApplicationModel::Activation::MultiviewActivationProperties);
};

struct CApi
{
	virtual DPI_AWARENESS_CONTEXT__ * SetThreadDpiAwarenessContext(DPI_AWARENESS_CONTEXT__ *);
	virtual HBITMAP__ * CreateDIBSection(HDC__ *,tagBITMAPINFO const *,unsigned int,void * *,void *,unsigned long);
	virtual HBRUSH__ * GetSysColorBrush(int);
	virtual HDC__ * BeginPaint(HWND__ *,tagPAINTSTRUCT *);
	virtual HDC__ * CreateCompatibleDC(HDC__ *);
	virtual HDC__ * GetDC(HWND__ *);
	virtual HDC__ * GetWindowDC(HWND__ *);
	virtual HFONT__ * CreateFontIndirectW(tagLOGFONTW const *);
	virtual HICON__ * CopyIcon(HICON__ *);
	virtual HICON__ * LoadCursorW(HINSTANCE__ *,unsigned short const *);
	virtual HMONITOR__ * GetTrayMonitor(ITrayComponentHost *);
	virtual HMONITOR__ * MonitorFromPoint(tagPOINT,unsigned long);
	virtual HMONITOR__ * MonitorFromRect(tagRECT const *,unsigned long);
	virtual HMONITOR__ * MonitorFromWindow(HWND__ *,unsigned long);
	virtual HPEN__ * CreatePen(int,int,unsigned long);
	virtual HWND__ * CreateWindowExW(unsigned long,unsigned short const *,unsigned short const *,unsigned long,int,int,int,int,HWND__ *,HMENU__ *,HINSTANCE__ *,void *);
	virtual HWND__ * GetActiveTabFromContainer(HWND__ * const);
	virtual HWND__ * GetAncestor(HWND__ *,unsigned int);
	virtual HWND__ * GetCapture();
	virtual HWND__ * GetDesktopWindow();
	virtual HWND__ * GetFocus();
	virtual HWND__ * GetForegroundWindow();
	virtual HWND__ * GetLowestTopMostWnd();
	virtual HWND__ * GetParent(HWND__ *);
	virtual HWND__ * GetTabContainerFromAtom(HWND__ * const);
	virtual HWND__ * HungWindowFromGhostWindow(HWND__ *);
	virtual HWND__ * SetCapture(HWND__ *);
	virtual HWND__ * SetFocus(HWND__ *);
	virtual HWND__ * WindowFromPoint(tagPOINT);
	virtual __int64 DefWindowProcA(HWND__ *,unsigned int,unsigned __int64,__int64);
	virtual __int64 DefWindowProcW(HWND__ *,unsigned int,unsigned __int64,__int64);
	virtual __int64 DispatchMessageW(tagMSG const *);
	virtual __int64 GetMessageExtraInfo();
	virtual __int64 GetWindowLongPtrW(HWND__ *,int);
	virtual __int64 LresultFromObject(_GUID const &,unsigned __int64,IUnknown *);
	virtual __int64 SendMessageW(HWND__ *,unsigned int,unsigned __int64,__int64);
	virtual __int64 SendTrayMessage(unsigned int,unsigned __int64,__int64);
	virtual __int64 SetWindowLongPtrW(HWND__ *,int,__int64);
	virtual bool GetIsImmersiveColorUsingHighContrast(IMMERSIVE_HC_CACHE_MODE);
	virtual bool IsImmersivePidl(_ITEMIDLIST_ABSOLUTE const *);
	virtual char * CharNextA(char const *);
	virtual int AdjustWindowRect(tagRECT *,unsigned long,int);
	virtual int AdjustWindowRectEx(tagRECT *,unsigned long,int,unsigned long);
	virtual int BringWindowToTop(HWND__ *);
	virtual int ClientToScreen(HWND__ *,tagPOINT *);
	virtual int CopyRect(tagRECT *,tagRECT const *);
	virtual int DeleteDC(HDC__ *);
	virtual int DeleteObject(void *);
	virtual int DestroyIcon(HICON__ *);
	virtual int DestroyMenu(HMENU__ *);
	virtual int DestroyWindow(HWND__ *);
	virtual int DrawTextExW(HDC__ *,unsigned short *,int,tagRECT *,unsigned int,tagDRAWTEXTPARAMS *);
	virtual int EndPaint(HWND__ *,tagPAINTSTRUCT const *);
	virtual int EnumDisplayMonitors(HDC__ *,tagRECT const *,int (*)(HMONITOR__ *,HDC__ *,tagRECT *,__int64),__int64);
	virtual int EqualRect(tagRECT const *,tagRECT const *);
	virtual int FillRect(HDC__ *,tagRECT const *,HBRUSH__ *);
	virtual int GdiFlush();
	virtual int GetClassInfoExW(HINSTANCE__ *,unsigned short const *,tagWNDCLASSEXW *);
	virtual int GetClientRect(HWND__ *,tagRECT *);
	virtual int GetClipBox(HDC__ *,tagRECT *);
	virtual int GetCursorInfo(tagCURSORINFO *);
	virtual int GetCursorPos(tagPOINT *);
	virtual int GetDeviceCaps(HDC__ *,int);
	virtual int GetIconInfo(HICON__ *,_ICONINFO *);
	virtual int GetLayeredWindowAttributes(HWND__ *,unsigned long *,unsigned char *,unsigned long *);
	virtual int GetMinimizedWidth();
	virtual int GetMonitorInfoW(HMONITOR__ *,tagMONITORINFO *);
	virtual int GetMonitorRects(HMONITOR__ *,tagRECT *,int);
	virtual int GetObjectW(void *,int,void *);
	virtual int GetPointerInfo(unsigned int,tagPOINTER_INFO *);
	virtual int GetScrollBarHeight();
	virtual int GetScrollBarWidth();
	virtual int GetSystemMetrics(int);
	virtual int GetSystemMetricsForDpi(int,unsigned int);
	virtual int GetTextMetricsW(HDC__ *,tagTEXTMETRICW *);
	virtual int GetWindowCompositionAttribute(HWND__ *,tagWINDOWCOMPOSITIONATTRIBDATA *);
	virtual int GetWindowRect(HWND__ *,tagRECT *);
	virtual int ILIsEqualByAliasOrPath(_ITEMIDLIST_ABSOLUTE const *,_ITEMIDLIST_ABSOLUTE const *);
	virtual int InflateRect(tagRECT *,int,int);
	virtual int InternalGetWindowText(HWND__ *,unsigned short *,int);
	virtual int InvalidateRect(HWND__ *,tagRECT const *,int);
	virtual int IsAnimationAllowedInSku();
	virtual int IsCompositionActive();
	virtual int IsGhostWindowClass(HWND__ * const);
	virtual int IsIconic(HWND__ *);
	virtual int IsProcessDPIAware();
	virtual int IsRectEmpty(tagRECT const *);
	virtual int IsTrayInSizeMove();
	virtual int IsWindow(HWND__ *);
	virtual int IsWindowUnicode(HWND__ *);
	virtual int IsWindowVisible(HWND__ *);
	virtual int KillTimer(HWND__ *,unsigned __int64);
	virtual int LoadStringW(HINSTANCE__ *,unsigned int,unsigned short *,int);
	virtual int MapWindowPoints(HWND__ *,HWND__ *,tagPOINT *,unsigned int);
	virtual int Mirror_IsThreadRTL();
	virtual int OffsetRect(tagRECT *,int,int);
	virtual int Polyline(HDC__ *,tagPOINT const *,int);
	virtual int PostMessageW(HWND__ *,unsigned int,unsigned __int64,__int64);
	virtual int PostTrayMessage(unsigned int,unsigned __int64,__int64);
	virtual int PtInRect(tagRECT const *,tagPOINT);
	virtual int RedrawWindow(HWND__ *,tagRECT const *,HRGN__ *,unsigned int);
	virtual int ReleaseCapture();
	virtual int ReleaseDC(HWND__ *,HDC__ *);
	virtual int SHGetDPIX();
	virtual int SHRegGetBoolValueFromHKCUHKLM(unsigned short const *,unsigned short const *,int);
	virtual int ScreenToClient(HWND__ *,tagPOINT *);
	virtual int SendMessageCallbackW(HWND__ *,unsigned int,unsigned __int64,__int64,void (*)(HWND__ *,unsigned int,unsigned __int64,__int64),unsigned __int64);
	virtual int SetBkMode(HDC__ *,int);
	virtual int SetForegroundWindow(HWND__ *);
	virtual int SetLayeredWindowAttributes(HWND__ *,unsigned long,unsigned char,unsigned long);
	virtual int SetRect(tagRECT *,int,int,int,int);
	virtual int SetRectEmpty(tagRECT *);
	virtual int SetWindowPos(HWND__ *,HWND__ *,int,int,int,int,unsigned int);
	virtual int ShouldTaskbarAnimate();
	virtual int SystemParametersInfoW(unsigned int,unsigned int,void *,unsigned int);
	virtual int TrackMouseEvent(tagTRACKMOUSEEVENT *);
	virtual int TrackPopupMenuEx(HMENU__ *,unsigned int,int,int,HWND__ *,tagTPMPARAMS *);
	virtual int TranslateArrowKey(int,unsigned long,int);
	virtual int TranslateMessage(tagMSG const *);
	virtual int UnionRect(tagRECT *,tagRECT const *,tagRECT const *);
	virtual int UpdateWindow(HWND__ *);
	virtual long BufferedPaintInit();
	virtual long BufferedPaintUnInit();
	virtual long CloseThemeData(void *);
	virtual long CreateSmallerIcon(HICON__ *,unsigned int,unsigned int,HICON__ * *);
	virtual long DataObj_SetBlob(IDataObject *,unsigned int,void const *,unsigned int);
	virtual long DrawThemeBackground(void *,HDC__ *,int,int,tagRECT const *,tagRECT const *);
	virtual long DrawThemeParentBackground(HWND__ *,HDC__ *,tagRECT const *);
	virtual long DrawThemeTextEx(void *,HDC__ *,int,int,unsigned short const *,int,unsigned long,tagRECT *,_DTTOPTS const *);
	virtual long DwmpActivateLivePreview(int,HWND__ *,HWND__ *,LIVEPREVIEW_TRIGGER,tagRECT *);
	virtual long EndAccessibilityElement_CreateInstance(ITaskListAcc *,_GUID const &,void * *);
	virtual long EndBufferedPaint(void *,int);
	virtual long GetDpiForMonitor(HMONITOR__ *,MONITOR_DPI_TYPE,unsigned int *,unsigned int *);
	virtual long GetThemeBool(void *,int,int,int,int *);
	virtual long GetThemeColor(void *,int,int,int,unsigned long *);
	virtual long GetThemeMargins(void *,HDC__ *,int,int,int,tagRECT const *,_MARGINS *);
	virtual long GetThemeMetric(void *,HDC__ *,int,int,int,int *);
	virtual long GetThemePartSize(void *,HDC__ *,int,int,tagRECT const *,THEMESIZE,tagSIZE *);
	virtual long GetWindowLongW(HWND__ *,int);
	virtual long MakeIconicThumbnailSource(IImmersiveApplication *,HWND__ * *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long RtlQueryWnfStateData(unsigned long *,_WNF_STATE_NAME,long (*)(_WNF_STATE_NAME,unsigned long,_WNF_TYPE_ID *,void *,void const *,unsigned long),void *,_WNF_TYPE_ID *);
	virtual long SHIsParentOwnerOrSelf(HWND__ *,HWND__ *);
	virtual long SetWindowLongW(HWND__ *,int,long);
	virtual long SetWindowTheme(HWND__ *,unsigned short const *,unsigned short const *);
	virtual long SwitchToDesktopOnMonitor(HWND__ *,HMONITOR__ *);
	virtual long _GetPinnabilityInfoForAppPidl(_ITEMIDLIST_ABSOLUTE const *,int *,int *);
	virtual short GetKeyState(int);
	virtual unsigned __int64 SetTimer(HWND__ *,unsigned __int64,unsigned int,void (*)(HWND__ *,unsigned int,unsigned __int64,unsigned long));
	virtual unsigned char GetTaskbarOpacity();
	virtual unsigned int GetCaretBlinkTime();
	virtual unsigned int GetDpiForWindow(HWND__ *);
	virtual unsigned int RegisterClipboardFormatW(unsigned short const *);
	virtual unsigned long AddRef();
	virtual unsigned long GetMessagePos();
	virtual unsigned long GetSysColor(int);
	virtual unsigned long GetTaskbarColor();
	virtual unsigned long GetTickCount();
	virtual unsigned long Release();
	virtual unsigned long RtlNtStatusToDosError(long);
	virtual unsigned long SHRegGetUSDWORDW(unsigned short const *,unsigned short const *,unsigned long);
	virtual unsigned long SHWindowsPolicy(_GUID const &);
	virtual unsigned long SetTextColor(HDC__ *,unsigned long);
	virtual unsigned short * CharNextW(unsigned short const *);
	virtual unsigned short RegisterClassExW(tagWNDCLASSEXW const *);
	virtual void * BeginBufferedPaint(HDC__ *,tagRECT const *,_BP_BUFFERFORMAT,_BP_PAINTPARAMS *,HDC__ * *);
	virtual void * GetCurrentObject(HDC__ *,unsigned int);
	virtual void * GetPropW(HWND__ *,unsigned short const *);
	virtual void * GetStockObject(int);
	virtual void * OpenThemeData(HWND__ *,unsigned short const *);
	virtual void * OpenThemeDataForDpi(HWND__ *,unsigned short const *,unsigned int);
	virtual void * SelectObject(HDC__ *,void *);
	virtual void DADHelper_DragEnter(HWND__ *,_POINTL,IDataObject *);
	virtual void DADHelper_DragMove(HWND__ *,_POINTL);
	virtual void ExcludeHwndFromLivePreview(HWND__ *,int);
	virtual void FillRectARGB(HDC__ *,tagRECT const *,unsigned char,unsigned long);
	virtual void ForceActiveWindowAppearance(HWND__ *);
	virtual void NotifyWinEvent(unsigned long,HWND__ *,long,long);
	virtual void RefreshImmersiveColorPolicyState();
	virtual void RemoveDescriptionFromDataObject(IDataObject *,unsigned int);
	virtual void SetTrayForeground();
};

class CAppBox
{
	long _BoxProcess(void *,void *);
	long _GetProcessPriorities(void *,CAppBox::_PROCESS_PRIORITIES *);
	long _Initialize();
	long _SetProcessPriorities(void *,CAppBox::_PROCESS_PRIORITIES const &,bool);
	static unsigned long s_ReleaseJobAndDeleteThisThreadProc(void *);
	virtual ~CAppBox();
	void _ReadConfiguration(HKEY__ *);
	void _ReleaseJobAndDeleteThis();
	void _ScheduleReleaseJobAndDeleteThis();
public:
	static long CreateInstance(CAppBox * *);
	virtual long OnCreated(ICreateProcessOutputs *);
	virtual long OnCreating(ICreateProcessInputs *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long QueryService(_GUID const &,_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CAppReadinessTaskCompletionHelper
{
	void _Complete();
public:
	CAppReadinessTaskCompletionHelper();
	long RuntimeClassInitialize(IAppReadinessTask *,unsigned short const *);
	virtual long OnBegin(IAppReadinessTask *);
	virtual long OnComplete(IAppReadinessTask *,long);
	virtual long OnProgress(IAppReadinessTask *);
};

class CApplicationUsageTracker
{
	long _HandleActivateWindow(HWND__ *);
	long _HandleDestroyWindow(HWND__ *);
	static void _FireDelayedSwitchCallback(void *,unsigned char);
	static void _UpdateUserActiveStateCallback(void *,unsigned char);
	virtual ~CApplicationUsageTracker();
	void _CheckUserActiveState(bool);
	void _FireDelayedSwitch();
	void _GetWindowTrackingSettings();
public:
	CApplicationUsageTracker();
	static long CreateInstance(IApplicationUsageTracker * *);
	virtual long CheckUserActiveState(int *);
	virtual long OnPowerBroadcastMessage(unsigned __int64,__int64);
	virtual long OnShellHookMessage(unsigned __int64,__int64);
	virtual long OnWindowDestroyed(HWND__ *);
	virtual long Start();
	virtual long Stop();
	virtual unsigned short const * GetTelemetryId(unsigned short const *,HWND__ *);
};

struct CAsyncLoadResult
{
	CAsyncLoadResult(IIconLoadData *,IIconLoaderNotifications2 *);
	virtual ~CAsyncLoadResult();
};

struct CAutoHandle<HBITMAP__ *>
{
	CAutoHandle<HBITMAP__ *>();
	CAutoHandle<HBITMAP__ *>(HBITMAP__ *);
	~CAutoHandle<HBITMAP__ *>();
};

struct CAutoHandle<HDC__ *>
{
	CAutoHandle<HDC__ *>(HDC__ *);
	~CAutoHandle<HDC__ *>();
};

struct CAutoHandle<HICON__ *>
{
	~CAutoHandle<HICON__ *>();
};

struct CAutoHandle<HKEY__ *>
{
	CAutoHandle<HKEY__ *>();
	~CAutoHandle<HKEY__ *>();
};

struct CAutoHandle<HMENU__ *>
{
	CAutoHandle<HMENU__ *>(HMENU__ *);
	~CAutoHandle<HMENU__ *>();
};

struct CAutoHandle<void *>
{
	~CAutoHandle<void *>();
};

struct CAutoHoldPowerSettings
{
	CAutoHoldPowerSettings();
};

struct CAutoMemPtr<RESOLVEDWINDOW>
{
	~CAutoMemPtr<RESOLVEDWINDOW>();
};

struct CAutoMemPtr<ShellCacheLoadInfo>
{
	~CAutoMemPtr<ShellCacheLoadInfo>();
};

struct CAutoMemPtr<shell::TaskScheduler>
{
	~CAutoMemPtr<shell::TaskScheduler>();
};

class CBaseRPCTimeout
{
	static void s_Callback(void *,unsigned char);
public:
	void Arm(unsigned long);
	void Disarm();
};

struct CBitmapBits
{
	int SaveBits(HDC__ *,HBITMAP__ *);
};

struct CBitmapDC
{
	int SetDIB(int,int,unsigned short,unsigned short);
	void Uninit(int);
};

class CBreakOnFailureT<CEmptyType>
{
	static long g_hResultToBreakOn;
public:
	static void CheckToBreakOnFailure(long);
};

struct CBucketComparator
{
	int Compare(BUCKET *,BUCKET *);
};

class CByteHashTable
{
	CByteHashTable::BHASHENTRY * _LookupEntry(unsigned char const *,unsigned int,unsigned int *,CByteHashTable::BHASHENTRY * *);
	long _AddUpdateItem(int,unsigned char const *,unsigned int,unsigned char const *,unsigned int,unsigned char *,unsigned int);
	long _GetValueWorker(CByteHashTable::BHASHENTRY *,unsigned char * *,int *,unsigned char *,unsigned int);
	unsigned int _CalculateHashKey(unsigned char const *,unsigned int,unsigned int);
	void _GrowTable();
};

struct CCLambdaAdapter<int (*)(HDC__ *,unsigned short *,int,tagRECT *,unsigned int,__int64),6>
{
	static int Adapt<<lambda_a6e095e96b82d37a4e0810b2bac7ffb3> >(HDC__ *,unsigned short *,int,tagRECT *,unsigned int,__int64);
};

struct CCLambdaAdapter<int (*)(HMONITOR__ *,HDC__ *,tagRECT *,__int64),4>
{
	static int Adapt<<lambda_094558da69b087a45302f3b8f910334a> >(HMONITOR__ *,HDC__ *,tagRECT *,__int64);
	static int Adapt<<lambda_b6f39b2568365c56bffbb4540c430978> >(HMONITOR__ *,HDC__ *,tagRECT *,__int64);
};

struct CCLambdaAdapter<int (*)(HWND__ *,__int64),2>
{
	static int Adapt<<lambda_3fc99cb55b233fec98f90f6949cdc539> >(HWND__ *,__int64);
};

class CChkMacroETWLoggerT<CEmptyType>
{
	static CEtwProviderT<void> g_chkMacroETWProvider;
};

struct CCloudRampBrandServices
{
	static FEATURE_TO_REGVALUE_MAP const * const s_rgMapFeatureToRampRegValue;
};

struct CCoSimpleArray<ClockButton::ADDITIONAL_CLOCK *,4294967294,CSimpleArrayStandardCompareHelper<ClockButton::ADDITIONAL_CLOCK *> >
{
	~CCoSimpleArray<ClockButton::ADDITIONAL_CLOCK *,4294967294,CSimpleArrayStandardCompareHelper<ClockButton::ADDITIONAL_CLOCK *> >();
};

struct CCoSimpleArray<ContextMenuRenderingData *,4294967294,CSimpleArrayStandardCompareHelper<ContextMenuRenderingData *> >
{
	CCoSimpleArray<ContextMenuRenderingData *,4294967294,CSimpleArrayStandardCompareHelper<ContextMenuRenderingData *> >();
};

struct CCoSimpleArray<FIRSTSYNCCOLLECTIONINFO,4294967294,CSimpleArrayStandardCompareHelper<FIRSTSYNCCOLLECTIONINFO> >
{
	~CCoSimpleArray<FIRSTSYNCCOLLECTIONINFO,4294967294,CSimpleArrayStandardCompareHelper<FIRSTSYNCCOLLECTIONINFO> >();
};

struct CCoSimpleArray<IActiveZBandNotification *,4294967294,CSimpleArrayStandardCompareHelper<IActiveZBandNotification *> >
{
	~CCoSimpleArray<IActiveZBandNotification *,4294967294,CSimpleArrayStandardCompareHelper<IActiveZBandNotification *> >();
};

struct CCoSimpleArray<IMultitaskingViewVisibilityNotification *,4294967294,CSimpleArrayStandardCompareHelper<IMultitaskingViewVisibilityNotification *> >
{
	~CCoSimpleArray<IMultitaskingViewVisibilityNotification *,4294967294,CSimpleArrayStandardCompareHelper<IMultitaskingViewVisibilityNotification *> >();
};

struct CCoSimpleArray<IUnknown *,4294967294,CSimpleArrayStandardCompareHelper<IUnknown *> >
{
	~CCoSimpleArray<IUnknown *,4294967294,CSimpleArrayStandardCompareHelper<IUnknown *> >();
};

struct CCoSimpleArray<_ITEMIDLIST_ABSOLUTE *,4294967294,CSimpleArrayStandardCompareHelper<_ITEMIDLIST_ABSOLUTE *> >
{
	~CCoSimpleArray<_ITEMIDLIST_ABSOLUTE *,4294967294,CSimpleArrayStandardCompareHelper<_ITEMIDLIST_ABSOLUTE *> >();
};

struct CCoSimpleArray<unsigned int,4294967294,CSimpleArrayStandardCompareHelper<unsigned int> >
{
	~CCoSimpleArray<unsigned int,4294967294,CSimpleArrayStandardCompareHelper<unsigned int> >();
};

struct CCoTaskMemPtr<_ITEMIDLIST_ABSOLUTE>
{
	~CCoTaskMemPtr<_ITEMIDLIST_ABSOLUTE>();
};

class CColorizationColor
{
	static CHSBColor const ConvertRGBtoHSB(CRGBColor const &);
	static CRGBColor const ConvertHSBtoRGB(CHSBColor const &);
	static unsigned int GetBitOffsetForColorValueType(_ARGB_COLOR_VALUE_PART);
	void SetColor(double,CRGBColor const &);
public:
	CColorizationColor(double,CHSBColor const &);
	CRGBColor const GetRGBColor();
};

struct CComPropVariant
{
	~CComPropVariant();
};

class CContextMenuForwarder
{
protected:
	virtual ~CContextMenuForwarder();
public:
	CContextMenuForwarder(IUnknown *);
	virtual long GetCommandString(unsigned __int64,unsigned int,unsigned int *,char *,unsigned int);
	virtual long GetMenuRestrictions(DEFAULT_FOLDER_MENU_RESTRICTIONS,DEFAULT_FOLDER_MENU_RESTRICTIONS *);
	virtual long GetSelection(_GUID const &,void * *);
	virtual long GetSite(_GUID const &,void * *);
	virtual long HandleMenuMsg(unsigned int,unsigned __int64,__int64);
	virtual long HandleMenuMsg2(unsigned int,unsigned __int64,__int64,__int64 *);
	virtual long Initialize(HWND__ *,IContextMenuCB *,_ITEMIDLIST_ABSOLUTE const *,IShellFolder *,unsigned int,_ITEMID_CHILD const * const *,IUnknown *,unsigned int,HKEY__ * const *);
	virtual long Initialize(_ITEMIDLIST_ABSOLUTE const *,IDataObject *,HKEY__ *);
	virtual long InvokeCommand(_CMINVOKECOMMANDINFO *);
	virtual long QueryContextMenu(HMENU__ *,unsigned int,unsigned int,unsigned int,unsigned int);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long QueryService(_GUID const &,_GUID const &,void * *);
	virtual long SetHandlerClsid(_GUID const &);
	virtual long SetInvokeVerbs(unsigned short const * const * const,unsigned int);
	virtual long SetMenuRestrictions(DEFAULT_FOLDER_MENU_RESTRICTIONS);
	virtual long SetSelection(IShellItemArray *);
	virtual long SetSite(IUnknown *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CContextMenuWithVerbs
{
	CContextMenuWithVerbs(IUnknown *,unsigned short const *);
	virtual long QueryContextMenu(HMENU__ *,unsigned int,unsigned int,unsigned int,unsigned int);
};

class CContextMenuWithoutSubMenus
{
protected:
	CContextMenuWithoutSubMenus(IUnknown *,int);
public:
	virtual long QueryContextMenu(HMENU__ *,unsigned int,unsigned int,unsigned int,unsigned int);
};

struct CCritSec
{
	~CCritSec();
};

struct CDPA<CTrayBalloonInfoTipManager::TNINFOITEM,CTContainer_PolicyUnOwned<CTrayBalloonInfoTipManager::TNINFOITEM> >
{
	~CDPA<CTrayBalloonInfoTipManager::TNINFOITEM,CTContainer_PolicyUnOwned<CTrayBalloonInfoTipManager::TNINFOITEM> >();
};

struct CDPA<ILivePreviewWindow,CTContainer_PolicyRelease<ILivePreviewWindow> >
{
	~CDPA<ILivePreviewWindow,CTContainer_PolicyRelease<ILivePreviewWindow> >();
};

struct CDPA<ITaskBtnGroup,CTContainer_PolicyUnOwned<ITaskBtnGroup> >
{
	~CDPA<ITaskBtnGroup,CTContainer_PolicyUnOwned<ITaskBtnGroup> >();
};

struct CDPA<ITaskButton,CTContainer_PolicyUnOwned<ITaskButton> >
{
	~CDPA<ITaskButton,CTContainer_PolicyUnOwned<ITaskButton> >();
};

struct CDPA<ITaskGroup,CTContainer_PolicyUnOwned<ITaskGroup> >
{
	~CDPA<ITaskGroup,CTContainer_PolicyUnOwned<ITaskGroup> >();
};

struct CDPA<ITaskItem,CTContainer_PolicyUnOwned<ITaskItem> >
{
	~CDPA<ITaskItem,CTContainer_PolicyUnOwned<ITaskItem> >();
};

struct CDPA<ITaskListUI,CTContainer_PolicyUnOwned<ITaskListUI> >
{
	~CDPA<ITaskListUI,CTContainer_PolicyUnOwned<ITaskListUI> >();
};

struct CDPA<ITaskThumbnail,CTContainer_PolicyUnOwned<ITaskThumbnail> >
{
	~CDPA<ITaskThumbnail,CTContainer_PolicyUnOwned<ITaskThumbnail> >();
};

struct CDPARelease<ITrayAppIdentity,CTContainer_PolicyRelease<ITrayAppIdentity> >
{
	~CDPARelease<ITrayAppIdentity,CTContainer_PolicyRelease<ITrayAppIdentity> >();
};

struct CDPARelease<ITrayInfoTip,CTContainer_PolicyRelease<ITrayInfoTip> >
{
	~CDPARelease<ITrayInfoTip,CTContainer_PolicyRelease<ITrayInfoTip> >();
};

class CDPA_Base<CTrayBalloonInfoTipManager::TNINFOITEM,CTContainer_PolicyUnOwned<CTrayBalloonInfoTipManager::TNINFOITEM> >
{
	static int _StandardDestroyCB(CTrayBalloonInfoTipManager::TNINFOITEM *,void *);
};

class CDPA_Base<ILivePreviewWindow,CTContainer_PolicyRelease<ILivePreviewWindow> >
{
	static int _StandardDestroyCB(ILivePreviewWindow *,void *);
public:
	int Destroy();
};

class CDPA_Base<ITaskBtnGroup,CTContainer_PolicyUnOwned<ITaskBtnGroup> >
{
	static int _StandardDestroyCB(ITaskBtnGroup *,void *);
public:
	int Create(int);
	long InsertPtr(int,ITaskBtnGroup *,int *);
};

class CDPA_Base<ITaskButton,CTContainer_PolicyUnOwned<ITaskButton> >
{
	static int _StandardDestroyCB(ITaskButton *,void *);
public:
	~CDPA_Base<ITaskButton,CTContainer_PolicyUnOwned<ITaskButton> >();
};

class CDPA_Base<ITaskGroup,CTContainer_PolicyUnOwned<ITaskGroup> >
{
	static int _StandardDestroyCB(ITaskGroup *,void *);
public:
	int Create(int);
};

class CDPA_Base<ITaskItem,CTContainer_PolicyUnOwned<ITaskItem> >
{
	static int _StandardDestroyCB(ITaskItem *,void *);
public:
	int Create(int);
	int Destroy();
	long AppendPtr(ITaskItem *,int *);
	~CDPA_Base<ITaskItem,CTContainer_PolicyUnOwned<ITaskItem> >();
};

class CDPA_Base<ITaskListUI,CTContainer_PolicyUnOwned<ITaskListUI> >
{
	static int _StandardDestroyCB(ITaskListUI *,void *);
};

class CDPA_Base<ITaskThumbnail,CTContainer_PolicyUnOwned<ITaskThumbnail> >
{
	static int _StandardDestroyCB(ITaskThumbnail *,void *);
public:
	int Create(int);
	int Destroy();
};

class CDPA_Base<ITrayAppIdentity,CTContainer_PolicyRelease<ITrayAppIdentity> >
{
	static int _StandardDestroyCB(ITrayAppIdentity *,void *);
};

class CDPA_Base<ITrayInfoTip,CTContainer_PolicyRelease<ITrayInfoTip> >
{
	static int _StandardDestroyCB(ITrayInfoTip *,void *);
};

class CDPA_Base<NOTIFYCBNODE,CTContainer_PolicyLocalMem>
{
	static int _StandardDestroyCB(NOTIFYCBNODE *,void *);
public:
	int Destroy();
};

class CDPA_Base<TNPersistStreamData,CTContainer_PolicyUnOwned<TNPersistStreamData> >
{
	static int _StandardDestroyCB(TNPersistStreamData *,void *);
public:
	int Create(int);
	long InsertPtr(int,TNPersistStreamData *,int *);
};

class CDPA_Base<tagRGBQUAD,CTContainer_PolicyUnOwned<tagRGBQUAD> >
{
	static int _StandardDestroyCB(tagRGBQUAD *,void *);
public:
	int Destroy();
};

struct CDSA_Base<HWND__ *>
{
	int Destroy();
};

struct CDSA_Base<TrayCommon::TRAYMONITORINFO>
{
	int Destroy();
};

struct CDSA_Base<tagRECT>
{
	int Destroy();
};

struct CDeskTray
{
	virtual long GetTrayWindow(HWND__ * *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SetDesktopWindow(HWND__ *);
	virtual long SetVar(int,unsigned long);
	virtual unsigned int AppBarGetState();
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CDesktopSwitchCallback
{
	static CDesktopSwitchCallback * _s_pSingleton;
	static void _s_OnDesktopSwitch(HWINEVENTHOOK__ *,unsigned long,HWND__ *,long,long,unsigned long,unsigned long);
	void _Cleanup();
public:
	static CDesktopSwitchCallback * s_GetInstance();
	static void s_DestroyInstance();
};

struct CDropTargetBase
{
	virtual long DragEnter(IDataObject *,unsigned long,_POINTL,unsigned long *);
	virtual long DragOver(unsigned long,_POINTL,unsigned long *);
	virtual long Drop(IDataObject *,unsigned long,_POINTL,unsigned long *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CDynamicClassFactory
{
	virtual long CreateInstance(IUnknown *,_GUID const &,void * *);
	virtual long LockServer(int);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CEnumTaskItems
{
	virtual long Next(ITaskItem * *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Reset();
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CEnumerableObjectCollection
{
protected:
	long Clone(_GUID const &,void * *);
	long InitializeClone(CEnumerableObjectCollection *);
	virtual ~CEnumerableObjectCollection();
public:
	static long CreateInstance(int,_GUID const &,void * *);
	virtual long AddFromArray(IObjectArray *);
	virtual long AddObject(IUnknown *);
	virtual long Clear();
	virtual long Clone(IEnumObjects * *);
	virtual long Clone(IEnumUnknown * *);
	virtual long GetAt(unsigned int,_GUID const &,void * *);
	virtual long GetCount(unsigned int *);
	virtual long Next(unsigned long,IUnknown * *,unsigned long *);
	virtual long Next(unsigned long,_GUID const &,void * *,unsigned long *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long RemoveObjectAt(unsigned int);
	virtual long Reset();
	virtual long Skip(unsigned long);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CEtwProviderT<void>
{
	class CETWApiSet
	{
		void Init();
	};

protected:
	static CEtwProviderT<void>::CETWApiSet g_etwApi;
public:
	long Register(_GUID const &);
	void Unregister();
};

struct CEventSource<IActiveZBandNotification>
{
	long Advise(IActiveZBandNotification *,unsigned long *);
};

struct CEventSource<IMultitaskingViewVisibilityNotification>
{
	long Advise(IMultitaskingViewVisibilityNotification *,unsigned long *);
	~CEventSource<IMultitaskingViewVisibilityNotification>();
};

class CExecuteRunAppFilter
{
	virtual ~CExecuteRunAppFilter();
public:
	CExecuteRunAppFilter(void * *);
	virtual long OnCreated(ICreateProcessOutputs *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long QueryService(_GUID const &,_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CFirstLogonAnimation
{
	long BeginFirstLogonAnimation(LogonAnimationFlags);
	void RequestEndFirstLogonAnimation();
	void TerminateFirstLogonAnimation();
};

class CHashTable<unsigned short,unsigned short>
{
	static void s_DestroyCallback(unsigned char *,unsigned int,void *);
public:
	long GetPtr(unsigned short const *,unsigned short * *);
};

struct CHeapMemPtr<unsigned short>
{
	~CHeapMemPtr<unsigned short>();
};

struct CIconLoadingFunctions
{
	CIconLoadingFunctions();
	virtual HICON__ * LoadIconW(HINSTANCE__ *,unsigned short const *);
	virtual bool IsValidIcon(HICON__ *);
	virtual int SendMessageCallbackW(HWND__ *,unsigned int,unsigned __int64,__int64,void (*)(HWND__ *,unsigned int,unsigned __int64,__int64),unsigned __int64);
	virtual long ConvertIconToBitmap(HICON__ *,tagSIZE const &,HBITMAP__ * *);
	virtual unsigned __int64 GetClassLongPtrW(HWND__ *,int);
};

struct CImmersiveColor
{
	static bool IsColorSchemeChangeMessage(unsigned int,__int64);
	static unsigned long GetColor(IMMERSIVE_COLOR_TYPE);
};

struct CImmersiveContextMenuOwnerDrawHelper
{
	static bool s_ContextMenuWndProc(HWND__ *,unsigned int,unsigned __int64,__int64,bool *,GRID_HOW_SELECTED_FLAGS *);
};

class CImmersiveTaskItem
{
protected:
	CImmersiveTaskItem(IMockableApi *,IImmersiveApplication *,IApplicationViewFlashingNotification *);
	HWND__ * _GetWindow(bool);
	virtual void v_OnFlashingChange(bool);
	virtual ~CImmersiveTaskItem();
public:
	virtual HWND__ * GetAppWindow();
	virtual HWND__ * GetLivePreviewWindow();
	virtual HWND__ * GetThumbnailWindow();
	virtual HWND__ * GetWindow();
	virtual IImmersiveApplication * GetImmersiveApp();
	virtual bool IsImmersive();
	virtual long GetBadgeData(IBadgeData * *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SetWindow(HWND__ *);
	virtual long UpdateLastActivatedTime();
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual void SetBadgeData(IBadgeData *);
	virtual void SetLivePreviewWindow(HWND__ *);
	virtual void UpdateMonitor(ITrayComponentHost *);
};

class CImmersiveWindowFactory
{
	virtual long v_CreateSplashScreen(SPLASHSCREEN_FLAGS,ISplashScreen * *);
	virtual long v_Initialize(IImmersiveMonitor *,tagRECT const *);
	virtual void v_OnAfterSetAppWindow();
public:
	CImmersiveWindowFactory();
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CImmersiveWindowFactoryBase
{
	virtual _GUID const & v_GetHandlerCLSID();
	virtual long v_GetAdditionalDataSizeMax(_GUID const &,void *,unsigned long,void *,unsigned long,unsigned long *);
	virtual long v_MarshalAdditionalData(IStream *,_GUID const &,void *,unsigned long,void *,unsigned long);
protected:
	virtual long v_CreateSplashScreen(SPLASHSCREEN_FLAGS,ISplashScreen * *);
	virtual long v_Initialize(IImmersiveMonitor *,tagRECT const *);
	virtual void v_OnAfterSetAppWindow();
	virtual ~CImmersiveWindowFactoryBase();
public:
	CImmersiveWindowFactoryBase();
	virtual long CreateCoreWindow(HSTRING__ *,Windows::UI::Core::ICoreWindow * *);
	virtual long CreateSplashScreen(SPLASHSCREEN_FLAGS,ISplashScreen * *);
	virtual long GetAppWindow(HWND__ * *);
	virtual long HasExistingSplashScreen(int *);
	virtual long Initialize(IImmersiveMonitor *,unsigned short const *);
	virtual long InitializeWithPosition(IImmersiveMonitor *,unsigned short const *,tagRECT const *);
	virtual long SetAppWindow(long);
	virtual long SetAppWindowAndGetHostProcess(long,unsigned __int64 *);
	virtual long SetViewId(unsigned long);
	virtual long get_WindowReuseAllowed(unsigned char *);
};

class CImpWndProc
{
protected:
	static __int64 s_WndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
};

class CImpWorkerWndProc
{
protected:
	static __int64 s_WndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
};

struct CInitializeTrayForegroundControl
{
	virtual long InitializeTrustedComponentForegroundControl(ITrustedComponentForegroundControl *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long ShutdownTrustedComponentForegroundControl();
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CInputIndicatorButtonAccessibleWrapper
{
	CInputIndicatorButtonAccessibleWrapper(IAccessible *,CTrayInputIndicator *,TrayInputIndicatorChildWindowIdentity);
	virtual long accDoDefaultAction(tagVARIANT);
	virtual long get_accKeyboardShortcut(tagVARIANT,unsigned short * *);
	virtual long get_accRole(tagVARIANT,tagVARIANT *);
	virtual long get_accState(tagVARIANT,tagVARIANT *);
};

class CKeyboardButton
{
	bool _HasDigitizer();
	void _EnsureDesiredVisibility();
protected:
	virtual bool v_IsEnabled();
	virtual long v_CycleHotItem(int);
	virtual long v_Initialize();
	virtual long v_OnClick(ClickDevice);
	virtual long v_UpdateTheme();
	virtual void v_GetMinimumFitSize(tagSIZE *);
public:
	CKeyboardButton(ITrayComponentHost *);
	bool GetEnabledState(bool);
	void SetEnabledState(bool);
};

class CLaunchActivatedEventArgs
{
	virtual ~CLaunchActivatedEventArgs();
public:
	CLaunchActivatedEventArgs();
	long RuntimeClassInitialize(HSTRING__ *,HSTRING__ *);
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_Arguments(HSTRING__ * *);
	virtual long get_TileActivatedInfo(Windows::ApplicationModel::Activation::ITileActivatedInfo * *);
	virtual long get_TileId(HSTRING__ * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CLauncherTelemetry
{
	class TerminateShellApplications
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		void TerminationPerformed(unsigned short const *);
		~TerminateShellApplications();
	};

	void AppLaunch_(unsigned short const *,unsigned short const *,unsigned int);
	void DefaultLauncherLayoutSet_(unsigned int,bool,unsigned short const *);
};

struct CLauncherUIMode
{
	CLauncherUIMode();
	virtual long GetDesktopSwitchPreference(IAM_DESKTOP_SWITCH_OPTION *);
	virtual long GetMonitor(HMONITOR__ * *);
	virtual long GetMonitorPreference(ACTIVATION_MONITOR_PREFERENCE *);
	virtual long GetPlaceModeOption(PLACE_MODE_OPTION *);
	virtual long GetRevertLayoutOption(REVERT_LAYOUT_OPTION *,HWND__ * *);
	virtual long GetSwitchAppFlags(SWITCH_APP_FLAGS *);
	virtual long GetUIMode(EC_HOST_UI_MODE *);
	virtual long QueryService(_GUID const &,_GUID const &,void * *);
	virtual long ShouldShowDownloadUI();
	virtual long ShouldSwitchToDesktop();
	virtual long ShouldWakeOnRPCCalls();
};

class CLivePreviewWindow
{
	CLivePreviewWindow(IImmersiveApplication *,bool);
	long _Initialize(tagRECT const &,tagRECT const &,HINSTANCE__ *);
	void _InitThumbnailWindow(tagRECT const &,tagRECT const &,HINSTANCE__ *);
public:
	static long CreateInstance(IImmersiveApplication *,bool,tagRECT const &,tagRECT const &,HINSTANCE__ *,ILivePreviewWindow * *);
	virtual HWND__ * GetLivePreviewHWND(tagRECT *);
	virtual bool IsEqualByApp(IImmersiveApplication *);
	virtual long GetImmersiveApp(IImmersiveApplication * *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CLocalSimpleArray<CTrayInputIndicator::NOIMEMODEIME_INFO,4294967294>
{
	~CLocalSimpleArray<CTrayInputIndicator::NOIMEMODEIME_INFO,4294967294>();
};

class CLogonTaskFramework
{
	struct CConnectedIdentityCallback
	{
		CConnectedIdentityCallback();
		long RuntimeClassInitialize(IIdentityProvider *,unsigned long);
		virtual long IdentityUpdated(unsigned long,unsigned short const *);
		void UnAdvise();
	};

	struct CConnectivityHelper
	{
		CConnectivityHelper();
		long RestoreConnectionIfNeeded();
		long RuntimeClassInitialize();
		virtual void OnInterfaceArrival(_GUID const &);
		virtual void OnInterfaceChange(_GUID const &);
		virtual void OnInterfaceRemoval(_GUID const &);
		virtual void OnWcmEvent();
	};

	LOGON_TASK_OPTIONS _GetOptionsFromDefinition(LOGON_TASK_DEFINITION);
	static InternetConnectionState s_TryWaitForInternetConnection(unsigned int);
	static LOGON_TASK_DEFINITION const * const cs_rgLogonTaskDefinition;
	static LogonOptimizationFlags s_LogonOptimizationFlagToSet(LogonOptimizationFlags);
	static bool s_CurrentUserExistedOnPreviousOS();
	static bool s_HasAppReadinessSigninWork();
	static bool s_IsAadUser();
	static bool s_IsContentDeliveryManagerMaintenanceTaskRegistered();
	static bool s_IsDeviceAADJoined();
	static bool s_IsDomainUser();
	static bool s_IsFSIAAllowed(LogonTypeFlags);
	static bool s_IsFSIAEnabled();
	static bool s_IsFirstLogonForCurrentUser();
	static bool s_IsFirstRunTelemetryComplete();
	static bool s_IsFirstUserToLogonToMachine();
	static bool s_IsMSA();
	static bool s_IsMSAConnected(bool,LogonTypeFlags,bool,LogonFrameworkTelemetry::LogonTask *);
	static bool s_IsSpecialRoamingProfile();
	static bool s_IsSyncDone(unsigned short const *);
	static bool s_IsSyncProgressProvisioned(unsigned short const *);
	static bool s_IsUpgradeOrPBR(LogonTypeFlags);
	static bool s_ShouldLaunchCloudExperienceHostForMDM(LogonTypeFlags);
	static bool s_ShouldRunAppReadinessFirstLogonTasks(CLogonTaskFramework *);
	static bool s_TestHook_AppReadinessBypass();
	static bool s_shouldLaunchCloudExperienceHostForAAD(LogonTypeFlags);
	static bool s_shouldLaunchCloudExperienceHostForNthMSA(LogonTypeFlags,bool);
	static bool s_shouldLaunchCloudExperienceHostForUpgradeOobe(LogonTypeFlags);
	static long s_ARSFirstRunTelemetryMethod(CLogonTaskFramework *,LogonFrameworkTelemetry::LogonTask *);
	static long s_ActiveSetupMethod(CLogonTaskFramework *,LogonFrameworkTelemetry::LogonTask *);
	static long s_AppReadinessInboxGroupStartMethod(CLogonTaskFramework *,LogonFrameworkTelemetry::LogonTask *);
	static long s_AppReadinessInboxGroupWaitMethod(CLogonTaskFramework *,LogonFrameworkTelemetry::LogonTask *);
	static long s_AppReadinessLogonGroupStartMethod(CLogonTaskFramework *,LogonFrameworkTelemetry::LogonTask *);
	static long s_AppReadinessLogonGroupStartWork(CLogonTaskFramework *,LogonFrameworkTelemetry::LogonTask *);
	static long s_AppReadinessLogonGroupWaitMethod(CLogonTaskFramework *,LogonFrameworkTelemetry::LogonTask *);
	static long s_AppReadinessNotifyLogonCompleteMethod(CLogonTaskFramework *,LogonFrameworkTelemetry::LogonTask *);
	static long s_AppReadinessPreRoamingGroupStartMethod(CLogonTaskFramework *,LogonFrameworkTelemetry::LogonTask *);
	static long s_AppReadinessPreRoamingGroupWaitMethod(CLogonTaskFramework *,LogonFrameworkTelemetry::LogonTask *);
	static long s_AppReadinessPreShellGroupStartMethod(CLogonTaskFramework *,LogonFrameworkTelemetry::LogonTask *);
	static long s_AppReadinessPreShellGroupWaitMethod(CLogonTaskFramework *,LogonFrameworkTelemetry::LogonTask *);
	static long s_AppReadinessTaskStart(unsigned short const *,APPREADINESS_USER_LOGON_PHASE,CLogonTaskFramework *);
	static long s_AppResolverStartMethod(CLogonTaskFramework *,LogonFrameworkTelemetry::LogonTask *);
	static long s_AppResolverWaitMethod(CLogonTaskFramework *,LogonFrameworkTelemetry::LogonTask *);
	static long s_AppResolverWork(CLogonTaskFramework *);
	static long s_AreSignInSuggestionsAllowed(bool *);
	static long s_AssignedAccessLogonTaskAgentPreStartStartMethod(CLogonTaskFramework *,LogonFrameworkTelemetry::LogonTask *);
	static long s_AssignedAccessLogonTaskAgentPreStartWaitMethod(CLogonTaskFramework *,LogonFrameworkTelemetry::LogonTask *);
	static long s_CameraCheckMethod(CLogonTaskFramework *,LogonFrameworkTelemetry::LogonTask *);
	static long s_CleanupPerUserPrivacyKeysIfNecessary(LogonTypeFlags);
	static long s_CreateAppReadinessService(IAppReadinessService * *);
	static long s_CreateEdgeIconIfNeededPostStartMethod(CLogonTaskFramework *,LogonFrameworkTelemetry::LogonTask *);
	static long s_DefaultAssociationsMethod(CLogonTaskFramework *,LogonFrameworkTelemetry::LogonTask *);
	static long s_EnterpriseProvisioningCleanUpMethod(CLogonTaskFramework *,LogonFrameworkTelemetry::LogonTask *);
	static long s_EnterpriseProvisioningMethod(CLogonTaskFramework *,LogonFrameworkTelemetry::LogonTask *);
	static long s_GetFirstSyncKey(unsigned short const *,HKEY__ * *);
	static long s_GetStoragePath(unsigned short const *,unsigned short * *);
	static long s_InitializeBrowserSsoCookieMethod(CLogonTaskFramework *,LogonFrameworkTelemetry::LogonTask *);
	static long s_InitializeCloudDataStoreMethod(CLogonTaskFramework *,LogonFrameworkTelemetry::LogonTask *);
	static long s_LaunchBasicCXHMethod(CLogonTaskFramework *,LogonFrameworkTelemetry::LogonTask *);
	static long s_LaunchBasicCXHPrepMethod(CLogonTaskFramework *,LogonFrameworkTelemetry::LogonTask *);
	static long s_LaunchContentDeliveryManagerStartMethod(CLogonTaskFramework *,LogonFrameworkTelemetry::LogonTask *);
	static long s_LaunchExperienceHostPostStartMethod(CLogonTaskFramework *,LogonFrameworkTelemetry::LogonTask *);
	static long s_LaunchExperienceHostStartMethod(CLogonTaskFramework *,LogonFrameworkTelemetry::LogonTask *);
	static long s_LaunchExperienceHostStartWork(CLogonTaskFramework *,LogonFrameworkTelemetry::LogonTask *);
	static long s_LaunchExperienceHostWaitMethod(CLogonTaskFramework *,LogonFrameworkTelemetry::LogonTask *);
	static long s_LaunchInputDialListenerPostStartMethod(CLogonTaskFramework *,LogonFrameworkTelemetry::LogonTask *);
	static long s_LaunchLockAppHostPostStartMethod(CLogonTaskFramework *,LogonFrameworkTelemetry::LogonTask *);
	static long s_LaunchLockScreenCacheImageRestorePostStartMethod(CLogonTaskFramework *,LogonFrameworkTelemetry::LogonTask *);
	static long s_LaunchPeopleExperiencePostStartMethod(CLogonTaskFramework *,LogonFrameworkTelemetry::LogonTask *);
	static long s_LaunchUserOobeMethod(CLogonTaskFramework *,LogonFrameworkTelemetry::LogonTask *);
	static long s_LaunchUserOobePrepMethod(CLogonTaskFramework *,LogonFrameworkTelemetry::LogonTask *);
	static long s_NotifyTrayStartIsReadyMethod(CLogonTaskFramework *,LogonFrameworkTelemetry::LogonTask *);
	static long s_OEMFirstRunTelemetryMethod(CLogonTaskFramework *,LogonFrameworkTelemetry::LogonTask *);
	static long s_PerUserSetupStartMethod(CLogonTaskFramework *,LogonFrameworkTelemetry::LogonTask *);
	static long s_PerUserSetupWaitMethod(CLogonTaskFramework *,LogonFrameworkTelemetry::LogonTask *);
	static long s_PerformSignInSuggestionsStartMethod(CLogonTaskFramework *,LogonFrameworkTelemetry::LogonTask *);
	static long s_PerformSignInSuggestionsWaitMethod(CLogonTaskFramework *,LogonFrameworkTelemetry::LogonTask *);
	static long s_QueryServiceImmersiveShell(_GUID const &,_GUID const &,void * *);
	static long s_RemoveTempOOBEUserMethod(CLogonTaskFramework *,LogonFrameworkTelemetry::LogonTask *);
	static long s_RemoveTempOOBEUserWork();
	static long s_RoamingBootstrapAndPayloadsMethod(CLogonTaskFramework *,LogonFrameworkTelemetry::LogonTask *);
	static long s_RoamingPayload3Method(CLogonTaskFramework *,LogonFrameworkTelemetry::LogonTask *);
	static long s_RunOnceMethod(CLogonTaskFramework *,LogonFrameworkTelemetry::LogonTask *);
	static long s_ShellPrepMethod(CLogonTaskFramework *,LogonFrameworkTelemetry::LogonTask *);
	static long s_SignInSuggestionsDoWork(CLogonTaskFramework *);
	static long s_SignInSuggestionsGetContent(CLogonTaskFramework *);
	static long s_SignInSuggestionsPerformActions(CLogonTaskFramework *);
	static long s_SkydrivePrepMethod(CLogonTaskFramework *,LogonFrameworkTelemetry::LogonTask *);
	static long s_StartLayoutInitMigration();
	static long s_StartLayoutInitStartMethod(CLogonTaskFramework *,LogonFrameworkTelemetry::LogonTask *);
	static long s_StartLayoutInitWaitMethod(CLogonTaskFramework *,LogonFrameworkTelemetry::LogonTask *);
	static long s_StartSkydriveSyncMethod(CLogonTaskFramework *,LogonFrameworkTelemetry::LogonTask *);
	static long s_SyncTimeZoneMethod(CLogonTaskFramework *,LogonFrameworkTelemetry::LogonTask *);
	static long s_TestHookMethod(CLogonTaskFramework *,LogonFrameworkTelemetry::LogonTask *);
	static long s_TestHookStartMethod(CLogonTaskFramework *,LogonFrameworkTelemetry::LogonTask *);
	static long s_TestHookWaitMethod(CLogonTaskFramework *,LogonFrameworkTelemetry::LogonTask *);
	static long s_UpdatePCSettingsPreStartMethod(CLogonTaskFramework *,LogonFrameworkTelemetry::LogonTask *);
	static long s_UpdatePCSettingsShellInitMethod(CLogonTaskFramework *,LogonFrameworkTelemetry::LogonTask *);
	static long s_UpdatePCSettingsWork(CLogonTaskFramework *,LogonFrameworkTelemetry::LogonTask *);
	static long s_WaitForCdmRegistrationToComplete();
	static long s_WaitForHandleWithDeadline(void *,unsigned long);
	static long s_WaitForInternetIfNeededMethod(CLogonTaskFramework *,LogonFrameworkTelemetry::LogonTask *);
	static long s_WaitForMSAConnectedMethod(CLogonTaskFramework *,LogonFrameworkTelemetry::LogonTask *);
	static unsigned long s_GetSignInSuggestionsTimeoutForDevice();
	static unsigned long s_UpdatePCSettingsThreadProc(void *);
	static void s_CleanUpRemovedSystemShortcuts();
	static void s_ClearAppReadinessSigninWork();
	static void s_EnterAppReadinessLogonPhase(APPREADINESS_USER_LOGON_PHASE);
	static void s_NoOpNotifyCallback(void *);
	static void s_OemFirstRun(CLogonTaskFramework *,LogonFrameworkTelemetry::LogonTask *,bool);
	static void s_PostTrayMessage(unsigned int,unsigned __int64,__int64);
	static void s_RunPostAppInstallTasks(CLogonTaskFramework *,LogonFrameworkTelemetry::LogonTask *,bool);
	static void s_WriteOutOOBEDataForOEMApp(LogonFrameworkTelemetry::LogonTask *,bool);
	void _ARSRoamingIntervalStop();
	void _ExecuteTaskFunction(LOGON_TASK_DEFINITION,LogonTaskPhase,bool);
	void _LaunchFSIAIfNecessary();
	void _RunBeforePostStartTasks();
	void _RunLogonOrWaitTask(LOGON_TASK_DEFINITION,LogonTaskPhase,bool);
	void _RunLogonTask(LOGON_TASK_DEFINITION,LogonTaskPhase);
	void _RunLogonTasksInPhase(LogonTaskPhase,bool);
	void _RunPhase(unsigned short const *,LogonTaskPhase);
	void _RunWaitTask(LOGON_TASK_DEFINITION,LogonTaskPhase);
	void _SetAllLogonOptimizationFlags();
	void _SetAllLogonTypeFlags();
	void _TerminateFSIA();
public:
	CLogonTaskFramework();
	long RuntimeClassInitialize();
	virtual long RunAllLogonTasks();
	virtual ~CLogonTaskFramework();
	void NotifyShellCompletionIfNecessary();
};

class CMarshaledInterface
{
	long _Unmarshal(_GUID const &,void * *,bool);
public:
	CMarshaledInterface();
	~CMarshaledInterface();
};

struct CMemString<CMemString_PolicyCoTaskMem>
{
	~CMemString<CMemString_PolicyCoTaskMem>();
};

struct CMetricsParams
{
	CMetricsParams();
};

struct CMorphAnimData
{
	CMorphAnimData(CTaskListThumbnailWnd *);
	void LayoutThumbnails(unsigned char);
};

class CMultitaskingButton
{
protected:
	virtual bool v_IsEnabled();
	virtual bool v_IsPressed();
	virtual long v_Initialize();
	virtual long v_OnClick(ClickDevice);
	virtual long v_PerformDelayedInit();
	virtual long v_UpdateTheme();
	virtual void v_OnPointerEnter();
	virtual void v_OnPointerLeave();
	virtual void v_Uninitialize();
	void _UpdateButtonState();
public:
	CMultitaskingButton(ITrayComponentHost *);
	virtual long MultitaskingViewDismissed(MULTITASKING_VIEW_TYPES);
	virtual long MultitaskingViewShown(MULTITASKING_VIEW_TYPES);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CNotificationCenterButton
{
	long DismissNotificationCenter(NotificationCenterUITelemetry::InputType);
	long LaunchNotificationCenter(NotificationCenterUITelemetry::InputType,NotificationCenterUITelemetry::InvokeMethod);
	long _CreateNotificationCenterExperienceIfNecessary();
	long _CreateNotificationCenterStatusIfNecessary();
	long _NotifyExperienceManager();
	long _RefreshSettings();
	long _RefreshSettingsAsync();
	long _SetBadgeEnabled(int);
	long _SetDoNotDisturbState(int);
	long _SetGleamEnabled(int);
	long _SetGlobalSettingAsync(int,_NOC_GLOBAL_SETTING);
	long _UpdateIconState();
	long _UpdateIconStateAsync();
	static NotificationCenterUITelemetry::InputType GetInputTypeFromClickDevice(ClickDevice);
	void _RegisterWindowClass();
protected:
	virtual WTL::CSize v_AdjustSizeForPaint(WTL::CSize);
	virtual __int64 v_OnUserMessage(HWND__ *,unsigned int,unsigned __int64,__int64);
	virtual bool v_IsAllowedByPolicy();
	virtual bool v_IsEnabled();
	virtual bool v_IsPressed();
	virtual bool v_IsPressedOnKeyUp();
	virtual long v_CycleHotItem(int);
	virtual long v_GetTooltipText(HINSTANCE__ * *,unsigned short * *,unsigned short *,unsigned __int64);
	virtual long v_OnClick(ClickDevice);
	virtual long v_OnContextMenu(ClickDevice,tagPOINT);
	virtual long v_PerformDelayedBootInit();
	virtual void v_GetMinimumFitSize(tagSIZE *);
	virtual void v_OnDisplayStateChange(bool);
	virtual void v_Uninitialize();
public:
	CNotificationCenterButton(ITrayComponentHost *);
	long InitializeNotifications();
	long OnFlyoutHidden(Windows::Internal::Shell::Experience::IActionCenterExperienceManager *,IInspectable *);
	long OnFlyoutShown(Windows::Internal::Shell::Experience::IActionCenterExperienceManager *,IInspectable *);
	long ToggleNotificationCenter(ClickDevice);
	static __int64 _WndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	virtual long OnStatusChanged(__MIDL___MIDL_itf_notificationcenter_0000_0000_0001,__MIDL___MIDL_itf_notificationcenter_0000_0000_0002,unsigned __int64);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SendStateCaptureTelemetry(StateCapture::TelemetryStateCaptureType);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	~CNotificationCenterButton();
};

struct CNotificationItem
{
	void CopyNotifyItem(tagNOTIFYITEM const &,int);
	void CopyPTNPD(TNPersistStreamData const *);
	void SetAppIdentity(unsigned short const *);
	void SetExeName(unsigned short const *);
	void SetIconText(unsigned short const *);
	void _Free();
	~CNotificationItem();
};

struct CObjectFactory
{
	virtual long CreateLivePreviewWindow(IImmersiveApplication *,bool,tagRECT const &,tagRECT const &,HINSTANCE__ *,ILivePreviewWindow * *);
	virtual long CreateSecondaryTaskListWndSite(ITaskListUI *,HMONITOR__ *,unsigned short const *,ITrayComponentHost *,ITaskListWndSite * *);
	virtual long CreateTaskBtnGroup(CTaskListWnd *,ITaskGroup *,ITaskBtnGroup * *);
	virtual long CreateTaskListThumbnailWnd(HINSTANCE__ *,unsigned int,ITrayComponentHost *,_GUID const &,void * *);
	virtual long CreateTaskListWndAccessible(ITaskListAcc *,_GUID const &,void * *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CObjectWithSite
{
	virtual long GetSite(_GUID const &,void * *);
	virtual long SetSite(IUnknown *);
	virtual ~CObjectWithSite();
};

struct CPaintBuffer
{
	~CPaintBuffer();
};

class CPearl
{
	__int64 _OnGetObject(unsigned __int64);
	bool _PointInClientRect(int,int);
	int _GetPearlThemePart();
	long _ColorizeIcon(HBITMAP__ *,unsigned long);
	long _CreateWindow(HWND__ *,IStartButtonSite *);
	long _EnsureAnimationManager();
	long _EnsureColorizedIcons(HDC__ *);
	long _EnsureImmersiveShell();
	long _EnsureLauncher();
	long _EnsureMonitorManager();
	long _EnsureTheme();
	long _GetLauncherTipContextMenu(ILauncherTipContextMenu * *);
	virtual __int64 v_WndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	void _DestroyColorizedIcons();
	void _OnContextMenu(int,int);
	void _OnLButtonUp(__int64);
	void _OnMouseLeave();
	void _OnMouseMove(__int64);
	void _OnPaint();
	void _OnPaintInternal(HWND__ *,HDC__ *);
	void _OnSetFocus(bool);
	void _SetPointerHover(bool);
	void _UpdateColors();
public:
	CPearl();
	HMONITOR__ * GetStartMenuMonitor();
	long RuntimeClassInitialize(ITrayComponentHost *,HWND__ *,IStartButtonSite *);
	long ShowStartPage();
	long UpdateSize(unsigned int);
	virtual long OnStoryboardStatusChanged(IUIAnimationStoryboard *,__MIDL___MIDL_itf_UIAnimation_0000_0002_0001,__MIDL___MIDL_itf_UIAnimation_0000_0002_0001);
	virtual long OnStoryboardUpdated(IUIAnimationStoryboard *);
	virtual ~CPearl();
	void GetMinimumFitSize(tagSIZE *);
	void Uninitialize();
};

struct CPearlAccessibleWrapper
{
	virtual long accDoDefaultAction(tagVARIANT);
	virtual long get_accKeyboardShortcut(tagVARIANT,unsigned short * *);
	virtual long get_accRole(tagVARIANT,tagVARIANT *);
	virtual long get_accState(tagVARIANT,tagVARIANT *);
};

struct CProcessAndThreadRefHost
{
	CProcessAndThreadRefHost();
};

struct CPropertyStoreHelper
{
	~CPropertyStoreHelper();
};

struct CRPCTimeout
{
	~CRPCTimeout();
};

struct CRefCountedObject<CFirstLogonAnimation>
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CRefCountedObject<CortanaEnabledState>
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CRunnableTask
{
protected:
	virtual ~CRunnableTask();
	void SetAbort(long);
public:
	virtual bool IsKeyboardNeededAndGlobalInputSwitchingOnThread();
	virtual long GetCancelEvent(void * *);
	virtual long InternalResumeRT();
	virtual long Kill(int);
	virtual long KillRT(int);
	virtual long QueryContinue();
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long QueryService(_GUID const &,_GUID const &,void * *);
	virtual long Resume();
	virtual long ResumeRT();
	virtual long Run();
	virtual long RunInitRT();
	virtual long Suspend();
	virtual long SuspendRT();
	virtual long TestTask();
	virtual unsigned long AddRef();
	virtual unsigned long IsRunning();
	virtual unsigned long Release();
	virtual void ActivateOriginalKeyboardLayout(HKL__ * *);
	virtual void ResetKeyboardLayout(HKL__ *);
};

class CSearchButton
{
	TrayButtonResources const * _GetButtonResources();
	long _EnsureImmersiveLaunchers();
	long _SetAppAnchorPosition();
	long _ToggleFlyout(unsigned short const *,unsigned short const *,unsigned short const *);
	void _SetWindowTitle();
protected:
	virtual bool v_IsAllowedByPolicy();
	virtual bool v_IsEnabled();
	virtual bool v_IsPressed();
	virtual long v_GetTooltipText(HINSTANCE__ * *,unsigned short * *,unsigned short *,unsigned __int64);
	virtual long v_Initialize();
	virtual long v_OnClick(ClickDevice);
	virtual long v_UpdateTheme();
	virtual void v_Uninitialize();
public:
	CSearchButton(ITrayComponentHost *,CRefCountedObject<CortanaEnabledState> *);
	void HandleSearchSettingUpdate();
};

class CSecondaryTaskBand
{
	CSecondaryTaskBand(ITaskListUI *,ISecondaryTray *,ITrayComponentHost *);
	virtual __int64 v_WndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	virtual ~CSecondaryTaskBand();
	void _LoadSettings();
	void _RefreshSettings();
public:
	static long CreateInstance(HWND__ *,ITaskListUI *,ISecondaryTray *,ITrayComponentHost *,CSecondaryTaskBand * *);
	virtual HMONITOR__ * GetMonitor();
	virtual SyncDisplayChangeFlags SyncDisplayChange(SyncDisplayChangeFlags,CCoSimpleArray<unsigned int,4294967294,CSimpleArrayStandardCompareHelper<unsigned int> > &);
	virtual bool IsDesktopVisibleOnTrayMonitor();
	virtual int HitTestForSizeableBorder(int,int);
	virtual int IsFullHeightOfTray();
	virtual int IsHorizontal();
	virtual int IsInSizeMove();
	virtual long ContextSensitiveHelp(int);
	virtual long GetPearlRect(tagRECT *);
	virtual long GetScrollInfo(int,tagSCROLLINFO *);
	virtual long GetStuckPlace(unsigned long *);
	virtual long GetTaskListUITheme(unsigned short const * *);
	virtual long GetUserPreferences(unsigned long *);
	virtual long GetWindow(HWND__ * *);
	virtual long HandleScroll(int,unsigned int,int);
	virtual long HandleSystemControlTurnedOnOrOff(SystemControl,bool);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SetScrollInfo(int,tagSCROLLINFO const &);
	virtual long UnhideTray();
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual void CheckSize(int);
	virtual void DestroySecondaryTray();
	virtual void GetStuckRect(tagRECT *);
	virtual void HandleCortanaAppVisibilityChange(HMONITOR__ *,bool);
	virtual void HandleDisplayChange();
	virtual void HandleImmersiveInvoke();
	virtual void HandleImmersiveLauncherVisibilityChange(HMONITOR__ *,bool);
	virtual void HandleJumpViewVisibilityChange(bool);
	virtual void HandleSearchSettingUpdate();
	virtual void HandleShellModeChanged();
	virtual void HandleTaskViewVisibilityChange(bool);
	virtual void HideSecondaryTray(HMONITOR__ *);
	virtual void ImmersiveShow();
	virtual void ResendStuckPlace();
	virtual void SetMonitor(HMONITOR__ *,unsigned short const *);
	virtual void SetStuckPlace(unsigned long);
	virtual void UpdateTheme();
};

class CSecondaryTray
{
	CSecondaryTray(ITrayComponentHost *);
	ImmersiveTray::ModeChangeFlags _GetModeChangeFlags();
	__int64 _OnNCHitTest(__int64);
	bool _DestroyClockControlIfApplicable();
	bool _HandleImmersiveInvoke(ImmersiveTray::ImmersiveInvokeFlags);
	bool _IsPointInWindow(HWND__ *,tagPOINT);
	int _GetDisplayRect(tagRECT *);
	long _CreateInitializeAndStartClockControlIfApplicable();
	long _CreateSecondaryTray(ITaskListUI *,HMONITOR__ *,unsigned short const *);
	long _SettingsBitmapLoaded(SettingsBitmapLoadInfo const &);
	unsigned int _CalcDragPlace(tagPOINT);
	virtual __int64 v_WndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	virtual ~CSecondaryTray();
	void _AdjustStuckWidths(tagRECT const &,tagSIZE *);
	void _AutoHide(bool);
	void _ComputeHiddenRect(tagRECT *);
	void _HandleTrayFlyoutVisibilityChange(bool);
	void _ImmersiveResize(bool);
	void _LoadSettings();
	void _LoadSettingsBitmap();
	void _OnContextMenu(unsigned long,bool);
	void _OnEnterSizeMove();
	void _OnMoving(unsigned __int64,tagRECT *);
	void _OnPaint(HDC__ *);
	void _OnSettingChange(__int64);
	void _OnSizing(tagRECT *,int);
	void _OnThemeChanged();
	void _OnTimer(unsigned __int64);
	void _OnWindowPosChanged(tagWINDOWPOS *);
	void _OnWindowPosChanging(tagWINDOWPOS *);
	void _PositionAppBar(unsigned int);
	void _ResetZorder(int);
	void _ResizeAndPositionChildControls(tagWINDOWPOS *);
	void _SaveTrayLocation();
	void _SetMonitorDeviceID(unsigned short const *);
	void _SnapshotStuckRectSize();
	void _Unhide(TrayCommon::TrayUnhideFlags,TrayCommon::UnhideRequest);
	void _UpdateAutoHideBar();
	void _UpdateChildControls_SetAutoHide(unsigned int);
	void _UpdateChildControls_SetTaskbarLocation(unsigned int);
	void _UpdateStuckRects();
public:
	virtual HMONITOR__ * GetMonitor();
	virtual SyncDisplayChangeFlags SyncDisplayChange(SyncDisplayChangeFlags,CCoSimpleArray<unsigned int,4294967294,CSimpleArrayStandardCompareHelper<unsigned int> > &);
	virtual bool IsDesktopVisibleOnTrayMonitor();
	virtual int HitTestForSizeableBorder(int,int);
	virtual int IsInSizeMove();
	virtual long ActiveZbandChanged(unsigned long,unsigned long);
	virtual long GetPearlRect(tagRECT *);
	virtual long HandleSystemControlTurnedOnOrOff(SystemControl,bool);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned int GetMonitorDPI();
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual void CheckSize(int);
	virtual void Destroy();
	virtual void GetStuckPlace(unsigned long *);
	virtual void GetStuckRect(tagRECT *);
	virtual void HandleCortanaAppVisibilityChange(HMONITOR__ *,bool);
	virtual void HandleDisplayChange();
	virtual void HandleImmersiveInvoke();
	virtual void HandleImmersiveLauncherVisibilityChange(HMONITOR__ *,bool);
	virtual void HandleJumpViewVisibilityChange(bool);
	virtual void HandleSearchSettingUpdate();
	virtual void HandleShellModeChanged();
	virtual void HandleTaskViewVisibilityChange(bool);
	virtual void Hide(HMONITOR__ *);
	virtual void ImmersiveShow();
	virtual void OnArrowKeyNavigation(bool);
	virtual void OnMinimumSizeChanged();
	virtual void RefreshSettings();
	virtual void ResendStuckPlace();
	virtual void SetMonitor(HMONITOR__ *,unsigned short const *);
	virtual void SetStuckPlace(unsigned long);
	virtual void Unhide(TrayCommon::UnhideRequest);
};

struct CShallowContainerIterator
{
	CShallowContainerIterator(_GUID const &,unsigned long);
	bool Next(IShellItem2 * *);
	~CShallowContainerIterator();
};

struct CShellProtectedRegLock
{
	void Lock();
	void Unlock();
	~CShellProtectedRegLock();
};

class CShowDesktopButton
{
	__int64 _HandleCreate(HWND__ *);
	int _HandleGetObject(unsigned __int64,__int64 *);
	int _PtInClientRect(__int64);
	unsigned int _GetStuckPlace();
	virtual __int64 v_WndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	void _ActivateLivePreview(bool,LIVEPREVIEW_TRIGGER);
	void _Command(int);
	void _GetAnimationStates(bool *,bool *);
	void _GetAnimationValues(int *);
	void _GetThemeMarginsWithFallback(int,int,int,int,unsigned int,_MARGINS *);
	void _GetThemeMetricWithFallback(int,int,int,int,unsigned int,int *);
	void _HandleAccessibilityClick();
	void _HandleContextMenu(__int64);
	void _HandleDestroy();
	void _HandleKeyUp(unsigned __int64);
	void _HandleLButtonDown();
	void _HandleLButtonUp(__int64);
	void _HandleMouseLeave();
	void _HandleMouseMove(__int64);
	void _HandlePaint();
	void _HandleThemeChanged();
	void _HandleTouchUp();
	void _KillHoverTimer();
	void _KillTouchTimer();
	void _Paint(HWND__ *,HDC__ *);
	void _ToggleDesktop();
	void _ToggleLivePreview();
public:
	CShowDesktopButton(ITrayComponentHost *);
	static HWND__ * Create(HWND__ *,unsigned int,HINSTANCE__ *,ITrayComponentHost *);
	static unsigned short const * const SZ_SHOWDESKTOP_THEME;
	static unsigned short const * const WC_TRAYSHOWDESKTOPBUTTON;
	virtual long DragEnter(IDataObject *,unsigned long,_POINTL,unsigned long *);
	virtual long DragLeave();
	virtual long DragOver(unsigned long,_POINTL,unsigned long *);
	virtual long Drop(IDataObject *,unsigned long,_POINTL,unsigned long *);
	virtual long OnStoryboardStatusChanged(IUIAnimationStoryboard *,__MIDL___MIDL_itf_UIAnimation_0000_0002_0001,__MIDL___MIDL_itf_UIAnimation_0000_0002_0001);
	virtual long OnStoryboardUpdated(IUIAnimationStoryboard *);
};

struct CShowDesktopButtonAccessibleWrapper
{
	virtual long accDoDefaultAction(tagVARIANT);
	virtual long get_accKeyboardShortcut(tagVARIANT,unsigned short * *);
	virtual long get_accName(tagVARIANT,unsigned short * *);
	virtual long get_accRole(tagVARIANT,tagVARIANT *);
	virtual long get_accState(tagVARIANT,tagVARIANT *);
};

struct CSimpleEnumString
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

struct CSimpleOleWindow
{
	virtual long ContextSensitiveHelp(int);
	virtual long GetClient(IUnknown * *);
	virtual long GetWindow(HWND__ * *);
	virtual long OnPosRectChangeDB(tagRECT *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SetClient(IUnknown *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CSimplePointerArray<ContextMenuRenderingData,CTContainer_PolicyNewMem,CSimpleArrayStandardCompareHelper<ContextMenuRenderingData *> >
{
	void RemoveAndReleaseAll();
};

struct CSimplePointerArray<IUnknown,CTContainer_PolicyRelease<IUnknown>,CSimpleArrayStandardCompareHelper<IUnknown *> >
{
	void RemoveAndReleaseAll();
};

struct CSimplePointerArrayNewMem<ContextMenuRenderingData,CSimpleArrayStandardCompareHelper<ContextMenuRenderingData *> >
{
	~CSimplePointerArrayNewMem<ContextMenuRenderingData,CSimpleArrayStandardCompareHelper<ContextMenuRenderingData *> >();
};

struct CSmuggledObject<CTaskListWnd>
{
	~CSmuggledObject<CTaskListWnd>();
};

struct CSmuggledObject<ITaskBtnGroup>
{
	~CSmuggledObject<ITaskBtnGroup>();
};

struct CSmuggledObject<ShellIconLoader>
{
	~CSmuggledObject<ShellIconLoader>();
};

struct CSmuggledObject<Windows::Internal::Shell::JumpView::IJumpViewParams>
{
	~CSmuggledObject<Windows::Internal::Shell::JumpView::IJumpViewParams>();
};

class CStartupTracker
{
	CStartupTracker();
	long _GetProcessStatistics(void *,CStartupTracker::PROCESS_STATISTICS *);
	unsigned long _ReadSetting(HKEY__ *,unsigned short const *,unsigned long,unsigned long);
public:
	virtual long IsStartupItemBlocked(unsigned short const *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long QueryService(_GUID const &,_GUID const &,void * *);
	virtual long SetStartupDB(HKEY__ *,unsigned short const *);
	virtual long WaitForSteadyState(void *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CStaticAppIdentity
{
	virtual bool IsActivationEnabled();
	virtual long Create();
	virtual long Delete();
	virtual long GetAppId(unsigned short *,unsigned __int64);
	virtual long GetLogoFilePath(unsigned short *,unsigned long);
	virtual long SetActivationEnabled(bool);
	virtual long SetIcon(HICON__ *);
	virtual long SetTitle(unsigned short const *);
};

class CSyncAtLogonTask
{
	struct RoamingEvent
	{
		RoamingEvent();
		~RoamingEvent();
	};

	long BootstrapAndSyncPayload1Task();
	long EnsureCollectionStagingManager();
	long InitializeRoamingEvent(CSyncAtLogonTask::RoamingPayloadPhase,unsigned long,unsigned short const *);
	long SyncBrowserState(ISettingSyncTask *,bool);
	long SyncPackageState();
	long SyncPayload2Collections(ISettingSyncTask *,SYNCATPRELOGONEVENT const *,bool);
	static unsigned long s_PerformTask(void *);
	void SyncPayload2Task();
public:
	CSyncAtLogonTask();
	long RuntimeClassInitialize(unsigned long,unsigned short const *,unsigned long,unsigned short const *,unsigned long,unsigned short const *,_GUID const &,bool,bool);
};

class CTCoAllocPolicy
{
	static unsigned __int64 _CoTaskMemSize(void *);
public:
	static long Alloc(void *,unsigned long,unsigned __int64,void * *);
	static long Realloc(void *,unsigned long,void *,unsigned __int64,void * *);
};

struct CTLocalAllocPolicy
{
	static long Alloc(void *,unsigned long,unsigned __int64,void * *);
};

struct CTSimpleArray<BUCKET *,4294967294,CTPolicyCoTaskMem<BUCKET *>,CSimpleArrayStandardCompareHelper<BUCKET *>,CSimpleArrayStandardMergeHelper<BUCKET *> >
{
	long _EnsureCapacity(unsigned __int64,unsigned __int64);
	void _MergeSort<CBucketComparator>(CBucketComparator const &,unsigned __int64,unsigned __int64);
	void _MergeThem<CBucketComparator>(CBucketComparator const &,unsigned __int64,unsigned __int64);
};

struct CTSimpleArray<CTrayInputIndicator::NOIMEMODEIME_INFO,4294967294,CTPolicyLocalMem<CTrayInputIndicator::NOIMEMODEIME_INFO>,CSimpleArrayStandardCompareHelper<CTrayInputIndicator::NOIMEMODEIME_INFO>,CSimpleArrayStandardMergeHelper<CTrayInputIndicator::NOIMEMODEIME_INFO> >
{
	long _EnsureCapacity(unsigned __int64,unsigned __int64);
	void RemoveAll();
};

struct CTSimpleArray<ClockButton::ADDITIONAL_CLOCK *,4294967294,CTPolicyCoTaskMem<ClockButton::ADDITIONAL_CLOCK *>,CSimpleArrayStandardCompareHelper<ClockButton::ADDITIONAL_CLOCK *>,CSimpleArrayStandardMergeHelper<ClockButton::ADDITIONAL_CLOCK *> >
{
	long _EnsureCapacity(unsigned __int64,unsigned __int64);
	void RemoveAll();
};

struct CTSimpleArray<ContextMenuRenderingData *,4294967294,CTPolicyCoTaskMem<ContextMenuRenderingData *>,CSimpleArrayStandardCompareHelper<ContextMenuRenderingData *>,CSimpleArrayStandardMergeHelper<ContextMenuRenderingData *> >
{
	long _EnsureCapacity(unsigned __int64,unsigned __int64);
	void RemoveAll();
};

struct CTSimpleArray<FIRSTSYNCCOLLECTIONINFO,4294967294,CTPolicyCoTaskMem<FIRSTSYNCCOLLECTIONINFO>,CSimpleArrayStandardCompareHelper<FIRSTSYNCCOLLECTIONINFO>,CSimpleArrayStandardMergeHelper<FIRSTSYNCCOLLECTIONINFO> >
{
	long _EnsureCapacity(unsigned __int64,unsigned __int64);
};

struct CTSimpleArray<IActiveZBandNotification *,4294967294,CTPolicyCoTaskMem<IActiveZBandNotification *>,CSimpleArrayStandardCompareHelper<IActiveZBandNotification *>,CSimpleArrayStandardMergeHelper<IActiveZBandNotification *> >
{
	long _EnsureCapacity(unsigned __int64,unsigned __int64);
	void RemoveAll();
};

struct CTSimpleArray<IMultitaskingViewVisibilityNotification *,4294967294,CTPolicyCoTaskMem<IMultitaskingViewVisibilityNotification *>,CSimpleArrayStandardCompareHelper<IMultitaskingViewVisibilityNotification *>,CSimpleArrayStandardMergeHelper<IMultitaskingViewVisibilityNotification *> >
{
	long _EnsureCapacity(unsigned __int64,unsigned __int64);
	void RemoveAll();
};

struct CTSimpleArray<IUnknown *,4294967294,CTPolicyCoTaskMem<IUnknown *>,CSimpleArrayStandardCompareHelper<IUnknown *>,CSimpleArrayStandardMergeHelper<IUnknown *> >
{
	long _EnsureCapacity(unsigned __int64,unsigned __int64);
	void RemoveAll();
};

struct CTSimpleArray<IconContainer::DPIData,4294967294,CTPolicyCoTaskMem<IconContainer::DPIData>,CSimpleArrayStandardCompareHelper<IconContainer::DPIData>,CSimpleArrayStandardMergeHelper<IconContainer::DPIData> >
{
	long _EnsureCapacity(unsigned __int64,unsigned __int64);
	void RemoveAll();
};

struct CTSimpleArray<Microsoft::WRL::ComPtr<IIconLoadData>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IIconLoadData> >,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IIconLoadData> >,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IIconLoadData> > >
{
	long RemoveAt(unsigned __int64);
	long _EnsureCapacity(unsigned __int64,unsigned __int64);
	void RemoveAll();
};

struct CTSimpleArray<Microsoft::WRL::ComPtr<IImageList>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IImageList> >,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImageList> >,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IImageList> > >
{
	long _EnsureCapacity(unsigned __int64,unsigned __int64);
	void RemoveAll();
};

struct CTSimpleArray<Microsoft::WRL::ComPtr<ITaskListAnimationNotificationSink>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<ITaskListAnimationNotificationSink> >,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ITaskListAnimationNotificationSink> >,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<ITaskListAnimationNotificationSink> > >
{
	void RemoveAll();
};

struct CTSimpleArray<TrackedImage,4294967294,CTPolicyCoTaskMem<TrackedImage>,CSimpleArrayStandardCompareHelper<TrackedImage>,CSimpleArrayStandardMergeHelper<TrackedImage> >
{
	long _EnsureCapacity(unsigned __int64,unsigned __int64);
	void RemoveAll();
};

struct CTSimpleArray<_ITEMIDLIST_ABSOLUTE *,4294967294,CTPolicyCoTaskMem<_ITEMIDLIST_ABSOLUTE *>,CSimpleArrayStandardCompareHelper<_ITEMIDLIST_ABSOLUTE *>,CSimpleArrayStandardMergeHelper<_ITEMIDLIST_ABSOLUTE *> >
{
	long _EnsureCapacity(unsigned __int64,unsigned __int64);
};

struct CTSimpleArray<unsigned int,4294967294,CTPolicyCoTaskMem<unsigned int>,CSimpleArrayStandardCompareHelper<unsigned int>,CSimpleArrayStandardMergeHelper<unsigned int> >
{
	long _AddSortedEx<CSimpleArrayStandardCompareHelper<unsigned int>,unsigned int const &>(CSimpleArrayStandardCompareHelper<unsigned int> const &,unsigned int const &,unsigned __int64 *);
	long _EnsureCapacity(unsigned __int64,unsigned __int64);
	void RemoveAll();
};

struct CTSimpleArray<unsigned short *,4294967294,CTPolicyCoTaskMem<unsigned short *>,CSimpleArrayCaseInsensitiveOrdinalStringCompareHelper,CSimpleArrayStandardMergeHelper<unsigned short *> >
{
	long _EnsureCapacity(unsigned __int64,unsigned __int64);
	long _InsertAt<unsigned short * const &>(unsigned short * const &,unsigned __int64);
	void RemoveAll();
};

struct CTSimpleArray<unsigned short *,4294967294,CTPolicyCoTaskMem<unsigned short *>,CSimpleArrayStandardCompareHelper<unsigned short *>,CSimpleArrayStandardMergeHelper<unsigned short *> >
{
	void RemoveAll();
};

struct CTSimpleFixedArray<TrackedImage,CSimpleArrayStandardCompareHelper<TrackedImage> >
{
	long FindEx<TrackedImageFinderByImageId>(TrackedImageFinderByImageId const &,TrackedImage const &,unsigned __int64 *,unsigned __int64);
};

struct CTSimpleFixedArray<unsigned short *,CSimpleArrayCaseInsensitiveOrdinalStringCompareHelper>
{
	long BinarySearchEx<CSimpleArrayCaseInsensitiveOrdinalStringCompareHelper>(CSimpleArrayCaseInsensitiveOrdinalStringCompareHelper const &,unsigned short * const &,unsigned __int64 *);
};

class CTaskBand
{
	struct CDestroyWindowTask
	{
		virtual long InternalResumeRT();
	};

	struct CInitialDesktopWindowsPopulatedTask
	{
		virtual long InternalResumeRT();
	};

	class CLauncherTask
	{
		long _Launch();
		long _RepairShortcut(HWND__ *,_ITEMIDLIST_ABSOLUTE * *);
		void _ResolveOrDeletePinnedItem(int);
		void _ThreadProc();
	public:
		CLauncherTask(CTaskBand *,ITaskGroup *,tagPOINT *,bool,TaskbandTelemetry::LaunchApplication);
		static unsigned long s_ThreadProc(void *);
	};

	struct CPinListModifyTask
	{
		long SetTo(_ITEMIDLIST_ABSOLUTE const *);
		virtual long InternalResumeRT();
	};

	struct CReorderWindowTask
	{
		virtual long InternalResumeRT();
	};

	class CResolveWindowTask
	{
		void _ResolveWindow();
	public:
		virtual long InternalResumeRT();
	};

	struct CTaskItemSite
	{
		virtual long QueryInterface(_GUID const &,void * *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
		~CTaskItemSite();
	};

protected:
	CTaskBand(ITrayComponentHost *);
	__int64 _HandleActivate(HWND__ *);
	__int64 _HandleCreate();
	__int64 _HandleDestroy();
	__int64 _HandleHardError(_tagHardErrorData const *,unsigned long);
	__int64 _HandleReplaceWindow(HWND__ *,HWND__ *);
	__int64 _HandleSettingChange(unsigned __int64,__int64,int);
	__int64 _HandleShellHook(int,__int64);
	__int64 _OnUpdateGroupPIDL(unsigned __int64,__int64);
	bool _DoWindowsToRestoreOverlap(WINDOWPOSITIONS const *,CDSA<HWND__ *> *);
	bool _ShouldAllowAppOnTaskbar(IImmersiveApplication *);
	bool _ShouldAllowImmersiveAppIdOnTaskbar(unsigned short const *);
	int _AddWindow(HWND__ *);
	int _CanMinimizeAll(ITaskGroup *,int *);
	int _CanRestoreAll(ITaskGroup *);
	int _MinimizeAll(void *,int);
	int _RegisterWindowClass();
	int _UpdateGroupAppID(ITaskGroup *,unsigned short const *,int);
	long Init(CTray *);
	long _AddImmersiveItem(IImmersiveApplication *,bool);
	long _AddPinnedItem(_ITEMIDLIST_ABSOLUTE const *,ITaskGroup * *,int,int);
	long _AsyncPinListModify(_ITEMIDLIST_ABSOLUTE const *,_ITEMIDLIST_ABSOLUTE const *);
	long _BandInfoChanged();
	long _BuildTaskList(CDPA<ITaskItem,CTContainer_PolicyUnOwned<ITaskItem> > *);
	long _CreateBadgeContainer();
	long _DestroyGroup(ITaskGroup *);
	long _EnsureAppResolver();
	long _EnsureMonitorManager();
	long _EnsurePinnedList();
	long _EnsureResolverScheduler();
	long _EnsureScheduler();
	long _EnumPinnedItems(bool);
	long _GetTargetInfo(_ITEMIDLIST_ABSOLUTE const *,int,unsigned short *,int,unsigned short * *,unsigned short *,int,bool *);
	long _GetTaskbarPinnedGroups(CDSA<PINNEDGROUP> *);
	long _HandlePresentedWindowChanged(IImmersiveApplication *);
	long _HandleShellContextMenu(IContextMenu *,int);
	long _InitIconContainer();
	long _InitStartUIResourceMap();
	long _InitialDesktopWindowsPopulated();
	long _InsertItem(HWND__ *,ITaskItem * *,HWND__ *,HWND__ *);
	long _MatchApp(IImmersiveApplication *,ITaskGroup * *,ITaskItem * *);
	long _MatchAppID(unsigned short const *,int,CTaskBand::MatchAppIDFlags,ITaskGroup * *);
	long _MatchApplicationView(IApplicationView *,ITaskGroup * *,ITaskItem * *);
	long _MatchIDList(_ITEMIDLIST_ABSOLUTE const *,ITaskGroup * *);
	long _MatchWindow(HWND__ *,_ITEMIDLIST_ABSOLUTE const *,unsigned short const *,WINDOWMATCHCONFIDENCE,ITaskGroup * *,ITaskItem * *);
	long _OnGroupDestroyed(ITaskGroup *);
	long _OnGroupResolved(ITaskGroup *);
	long _OnImmersiveAppActivated(IImmersiveApplication *);
	long _OnImmersiveAppMonitorChanged(IImmersiveApplication *);
	long _OnImmersiveAppTerminated(IImmersiveApplication *);
	long _OnSetTabActive(HWND__ * const);
	long _OnSetTabOrder(HWND__ * const,HWND__ * const);
	long _OnSetTabProperties(HWND__ * const);
	long _OnSetThumbnailClip(HWND__ * const,void * const);
	long _ProcessOrderTab(HWND__ *,HWND__ *);
	long _ProcessRenderTaskbarForDesktop(TrayBitmapForVDThumbnailData *);
	long _ReadTabsFromHwnd(HWND__ * const);
	long _RemoveImmersiveItem(IImmersiveApplication *);
	long _ResolveInsertBefore(HWND__ *,ITaskGroup *,ITaskItem *,ITaskGroup * *,ITaskItem * *);
	long _ScheduleReorderTab(HWND__ *,HWND__ *);
	long _SendNowPlayingSessionManagerButtonReady(IImmersiveApplication *);
	long _UpdateVirtualDesktopInclusion();
	long _UpdateVirtualDesktopInclusion(IVirtualDesktop *);
	long _ViewVirtualDesktopChanged(IApplicationView *,IVirtualDesktop *);
	static int BuildEnumProc(HWND__ *,__int64);
	static int DestroyPinnedGroupCB(PINNEDGROUP *,void *);
	static int FindPinnedGroupByTaskGroupCB(PINNEDGROUP const *,PINNEDGROUP const *,__int64);
	static int _ShouldMinimize(HWND__ *);
	static unsigned long MinimizeAllThreadProc(void *);
	static unsigned long _EndTaskThreadProc(void *);
	static void DeleteTabCB(unsigned __int64,HWND__ *);
	virtual __int64 v_WndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	void _AddAppTaskItem(ITaskItem *,RESOLVEDWINDOW *);
	void _AddEligibleImmersiveAppsFromBackstack();
	void _BuildMonitorDPIList(CCoSimpleArray<unsigned int,4294967294,CSimpleArrayStandardCompareHelper<unsigned int> > &);
	void _CheckImmersiveGroupEligibility(ITaskGroup *);
	void _ClearDefaultBrowserUserData();
	void _CreateIconContainerStorage();
	void _DelayedInit();
	void _DeleteItem(HWND__ *);
	void _DeleteTask(ITaskGroup *,ITaskItem *,SWITCHER_REMOVAL_REASON);
	void _DoPreemptiveDesktopSwitch(HWND__ *);
	void _EndTask(HWND__ * const,int);
	void _EnumExistingImmersiveApps();
	void _GetDefaultBrowserAppID(unsigned short * *);
	void _HandleAppResolverRenameItem(_ITEMIDLIST_ABSOLUTE *,_ITEMIDLIST_ABSOLUTE *);
	void _HandleAppResolverUpdateItem(_ITEMIDLIST_ABSOLUTE *);
	void _HandleChangeNotify(unsigned __int64,__int64);
	void _HandleCortanaAppVisibilityChange(HMONITOR__ *,bool);
	void _HandleDeletedPropChange(HWND__ *);
	void _HandleEdgeGestureChanged(HWND__ *);
	void _HandleGetMinRect(HWND__ *,tagPOINTS *);
	void _HandleItemResolved(RESOLVEDWINDOW *,ITaskListUI *,ITaskGroup *,ITaskItem *);
	void _HandleLauncherVisibilityChange(HMONITOR__ *,bool);
	void _HandleMonitorChanged(ITaskGroup *,ITaskItem *);
	void _HandleOtherWindowCreated(HWND__ *);
	void _HandleOtherWindowDestroyed(HWND__ *);
	void _HandleOverlayIcon(HWND__ *,HICON__ *);
	void _HandleOverlayIconDescription(HWND__ *,void *);
	void _HandleResendSecondaryStuckPlace();
	void _HandleSetSecondaryStuckPlace(unsigned long);
	void _HandleShellModeChanged();
	void _HandleStuckTrayChanged();
	void _HandleSyncDisplayChange(SyncDisplayChangeFlags);
	void _HandleSystemControlTurnedOnOrOff(SystemControl,bool);
	void _HandleTaskActivated(ITaskGroup *,ITaskItem *);
	void _HandleTaskViewVisibilityChange(bool);
	void _HandleThumbBar(unsigned int,HWND__ *,void *);
	void _HandleThumbnailToolTip(HWND__ *,void *);
	void _HandleWindowResolved(RESOLVEDWINDOW *);
	void _InitBadgeContainer();
	void _LoadSettings();
	void _LogEventForImmersiveAppIfNecessary(IImmersiveApplication *,CreativeFramework::Triggers::AppEventTrigger);
	void _MergeGroups(ITaskGroup *,ITaskGroup *);
	void _NotifyAppSwitcherNotificationService(IImmersiveApplication *,bool,SWITCHER_REMOVAL_REASON);
	void _OnAppsFolderItemUpdated(_ITEMIDLIST_ABSOLUTE const *);
	void _OnSetFocus();
	void _OnSetProgressState(HWND__ * const,TBPFLAG);
	void _OnSetProgressValue(HWND__ * const,unsigned long);
	void _OnWindowActivated(HWND__ *);
	void _OpenTheme();
	void _ProcessWindowDestroyed(HWND__ *);
	void _RealityCheck();
	void _RefreshSettings(int);
	void _RemoveImage(int);
	void _RestoreThreadPriority();
	void _SetActiveAlt(HWND__ *);
	void _SetThreadPriority(int,unsigned long);
	void _SetToolbarTheme();
	void _ShowAppsOnTaskbarChanged();
	void _SwitchToWindow(ITaskItem *);
	void _UpdateAllIcons();
	void _UpdateGroupIcons(ITaskGroup *);
	void _UpdateImmersiveIcons();
	void _UpdateItemIcon(ITaskGroup *,ITaskItem *);
	void _UpdatePinnedWebsiteIcons();
	void _UpdateRestartInfoFlags(RESTARTINFOFLAGS);
	void _UpdateTaskGroupInclusion(ITaskGroup *);
	void _UpdateTaskItemInclusion();
	void _VerifyButtonHeight();
	~CTaskBand();
public:
	virtual SyncDisplayChangeFlags SyncDisplayChange(SyncDisplayChangeFlags,CCoSimpleArray<unsigned int,4294967294,CSimpleArrayStandardCompareHelper<unsigned int> > &);
	virtual bool IsDesktopVisibleOnTrayMonitor();
	virtual int HitTestForSizeableBorder(int,int);
	virtual int IsFullHeightOfTray();
	virtual int IsHorizontal();
	virtual long AddGhostPinnedItem(IDataObject *,ITaskGroup * *,IShellItem * *);
	virtual long AppClosing(IImmersiveApplication *);
	virtual long ApplicationChanged(IImmersiveApplication *,IMM_APP_CHANGED,HWND__ *);
	virtual long BadgeDataUpdated(unsigned short const *,IBadgeData *);
	virtual long CanPinDestinationToTarget(IDataObject *,ITaskGroup *,IShellItem * *,IShellItem * *,unsigned short * *,int);
	virtual long CanRenderComposited(int *);
	virtual long CloseDW(unsigned long);
	virtual long ComputeTaskbarForNavigate(ITaskListUI *,int,ITaskListUI * *);
	virtual long ContextSensitiveHelp(int);
	virtual long CurrentVirtualDesktopChanged(IVirtualDesktop *,IVirtualDesktop *);
	virtual long CurrentVirtualDesktopChangedAnimated(IVirtualDesktop *,IVirtualDesktop *);
	virtual long Exec(_GUID const *,unsigned long,unsigned long,tagVARIANT *,tagVARIANT *);
	virtual long GetAccessibleStringForBadge(IBadgeData *,unsigned short * *);
	virtual long GetBandInfo(unsigned long,unsigned long,DESKBANDINFO *);
	virtual long GetClassID(_GUID *);
	virtual long GetCompositionState(int *);
	virtual long GetGroupByTime(unsigned long,eTIMEFLAGS,ITaskGroup * *,unsigned long *);
	virtual long GetIconId(ITaskGroup *,ITaskItem *,int,int *);
	virtual long GetImageList(unsigned int,_IMAGELIST * *);
	virtual long GetOrCreateBadgeVisualForApp(unsigned short const *,IBadgeVisualProperties *,unsigned int,HBITMAP__ * *);
	virtual long GetPearlRectFromMonitor(HMONITOR__ *,tagRECT *,unsigned long *);
	virtual long GetScrollInfo(int,tagSCROLLINFO *);
	virtual long GetSite(_GUID const &,void * *);
	virtual long GetSizeMax(_ULARGE_INTEGER *);
	virtual long GetStuckPlace(unsigned long *);
	virtual long GetTaskFromWindow(HWND__ *,ITaskGroup * *,ITaskItem * *);
	virtual long GetTaskListUITheme(unsigned short const * *);
	virtual long GetUserPreferences(unsigned long *);
	virtual long GetWindow(HWND__ * *);
	virtual long HandleContextMenuCommand(ITaskItemFilter *,ITaskGroup *,HWND__ *,IContextMenu *,int);
	virtual long HandleScroll(int,unsigned int,int);
	virtual long HasFocusIO();
	virtual long InsertPinnedItem(ITaskListUI *,IDataObject *,ITaskGroup *,int);
	virtual long IsDirty();
	virtual long IsWindowOwner(HWND__ *);
	virtual long Launch(ITaskGroup *,tagPOINT *,bool);
	virtual long Load(IStream *);
	virtual long MultitaskingViewDismissed(MULTITASKING_VIEW_TYPES);
	virtual long MultitaskingViewShown(MULTITASKING_VIEW_TYPES);
	virtual long OnWinEvent(HWND__ *,unsigned int,unsigned __int64,__int64,__int64 *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long QueryService(_GUID const &,_GUID const &,void * *);
	virtual long QueryStatus(_GUID const *,unsigned long,_tagOLECMD * const,_tagOLECMDTEXT *);
	virtual long RemoveGhostPinnedItem(ITaskGroup *);
	virtual long RemoveInvalidTabs(ITaskGroup *);
	virtual long RequestContextMenu(ITaskGroup *,ITaskItem *,int,IContextMenu * *,HMENU__ * *);
	virtual long ResizeBorderDW(tagRECT const *,IUnknown *,int);
	virtual long Save(IStream *,int);
	virtual long SendStateCaptureTelemetry(StateCapture::TelemetryStateCaptureType);
	virtual long ServiceAvailabilityChanged(IImmersiveApplication *,_GUID const &,IMM_APP_SERVICE_NOTIFY_FLAGS);
	virtual long SetCompositionState(int);
	virtual long SetScrollInfo(int,tagSCROLLINFO const &);
	virtual long SetSite(IUnknown *);
	virtual long ShowDW(int);
	virtual long SwitchTo(ITaskItem *,int);
	virtual long TranslateAcceleratorIO(tagMSG *);
	virtual long UIActivateIO(int,tagMSG *);
	virtual long UnhideTray();
	virtual long ViewTransitionedFromHolographic(IApplicationView *);
	virtual long ViewTransitionedToHolographic(IApplicationView *);
	virtual long ViewVirtualDesktopChanged(IApplicationView *);
	virtual unsigned long AddRef();
	virtual unsigned long GetMultimonStuckPlace();
	virtual unsigned long Release();
	virtual void BadgeProviderInitialized();
	virtual void BadgeVisualLoaded(unsigned short const *);
	virtual void CheckSize(int);
	virtual void CloseItem(ITaskItem *);
	virtual void CloseWnd(HWND__ *);
	virtual void GetIconSize(IconUtils::IconType,tagSIZE *);
	virtual void HandleCortanaAppVisibilityChange(HMONITOR__ *,bool);
	virtual void HandleImmersiveInvokeOnMonitor(HMONITOR__ *);
	virtual void HandleImmersiveLauncherVisibilityChange(HMONITOR__ *,bool);
	virtual void HandleJumpViewClose(JUMPVIEWCLOSEDATA const *);
	virtual void HandleJumpViewVisibilityChange(bool);
	virtual void HandleTaskViewVisibilityChange(bool);
	virtual void ImmersiveShow();
	virtual void PinnedWebsiteIconLoaded(_ITEMIDLIST_ABSOLUTE const *,int);
	virtual void RemoveGroupIcon(ITaskGroup *);
	virtual void RemoveIcon(ITaskItem *);
	virtual void StuckTrayMonitorChanged(HMONITOR__ *);
	virtual void TaskOrderChanged();
	virtual void TaskOrderChanged(ITaskGroup *,int);
	virtual void UpdateTheme();
	virtual void Win32AppIconLoaded(HWND__ *,void *,int);
	virtual void WinRTAppIconLoaded(unsigned short const *,IImmersiveApplication *,int);
};

struct CTaskBar
{
	CTaskBar(ITrayComponentHost *);
	virtual long CreateObject(_GUID const &,IUnknown *,_GUID const &,void * *);
	virtual long CreatePeopleDialButton(IPeopleBand *,IPeopleDialButton * *);
	virtual long Exec(_GUID const *,unsigned long,unsigned long,tagVARIANT *,tagVARIANT *);
	virtual long GetCommandString(unsigned __int64,unsigned int,unsigned int *,char *,unsigned int);
	virtual long InvokeCommand(_CMINVOKECOMMANDINFO *);
	virtual long IsRestricted(_GUID const *,unsigned long,tagVARIANT *,unsigned long *);
	virtual long OnPosRectChangeDB(tagRECT *);
	virtual long QueryContextMenu(HMENU__ *,unsigned int,unsigned int,unsigned int,unsigned int);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long QueryService(_GUID const &,_GUID const &,void * *);
	virtual long QueryStatus(_GUID const *,unsigned long,_tagOLECMD * const,_tagOLECMDTEXT *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CTaskBtnGroup
{
	BadgeVisualColors _GetBadgeVisualColors();
	CTaskBtnGroup(CTaskListWnd *,ITaskGroup *);
	ITaskButton * _GetTaskButtonFromIndex(int);
	ITaskButton * _GetTaskButtonFromTaskItem(ITaskItem const *);
	int _GetInsertionIndex(ITaskButton *);
	int _GetNormalizedButtonWidth(eTBGROUPTYPE,int);
	int _GetNumBtnsInRowCol(int);
	int _HasItemAnimation(int,eANIMTYPE,eTBGROUPTYPE,int *);
	int _IsPinned();
	long _GetAnimationItem(int,eTBGROUPTYPE,IUnknown * *);
	long _GetButtonRects(eTBGROUPTYPE,int,CDSA<tagRECT> *,int *,int *);
	tagRECT _GetProgressArea(BUTTONRENDERINFO const &);
	unsigned long _GetMirroredStuckPlace();
	virtual ~CTaskBtnGroup();
	void _ComputeRenderPropsBar(BUTTONRENDERINFO &);
	void _ComputeRenderPropsFromAnimation(BUTTONRENDERINFO &);
	void _ComputeRenderPropsIndicator(BUTTONRENDERINFO &);
	void _ConstrainToFlashOverlay(unsigned long,WTL::CRect *,WTL::CRect *,WTL::CRect *,WTL::CRect *);
	void _DestroyButton(ITaskButton *,int);
	void _DoOpenAnimation(eTBGROUPTYPE,ITaskButton *);
	void _DrawBar(HDC__ *,BUTTONRENDERINFO const &,BUTTONRENDERINFOSTATES const &);
	void _DrawBasePlate(HDC__ *,BUTTONRENDERINFO const &,BUTTONRENDERINFOSTATES const &);
	void _DrawIndeterminateProgress(HDC__ *,BUTTONRENDERINFO const &,BUTTONRENDERINFOSTATES const &,WTL::CRect const *);
	void _DrawIndicator(HDC__ *,BUTTONRENDERINFO const &,BUTTONRENDERINFOSTATES const &);
	void _DrawItemProgress(HDC__ *,BUTTONRENDERINFO const &,BUTTONRENDERINFOSTATES const &,WTL::CRect const *);
	void _DrawRegularButton(HDC__ *,BUTTONRENDERINFO const &);
	void _GetStatesFromRenderInfo(BUTTONRENDERINFO const &,bool,ITaskItem *,BUTTONRENDERINFOSTATES *);
public:
	virtual ITaskGroup * GetGroup();
	virtual ITaskItem * GetTaskItem(int);
	virtual eTBGROUPTYPE GetGroupType();
	virtual int CanGlom();
	virtual int CanUnglom();
	virtual int GetIdealSpan(int,int,int,int,int *);
	virtual int GetLastItemIndex();
	virtual int GetNumItems();
	virtual int GetNumStacks();
	virtual int GetOrdinalPosition();
	virtual int GetX(ITaskItem *);
	virtual int GetY(ITaskItem *);
	virtual int HasItemAnimation(int,eANIMTYPE,int *);
	virtual int HasLayout();
	virtual int HitTest(tagPOINT,eTBGROUPHITLOCATION *);
	virtual int IndexOfTaskItem(ITaskItem *);
	virtual int IsBeingDestroyed();
	virtual int IsFlashing();
	virtual int IsGroupIntersectingClipRect(tagRECT const *);
	virtual int IsItemBeingRemoved(ITaskItem *);
	virtual int IsSwitchingToLauncher();
	virtual int RemoveTaskItem(ITaskItem *);
	virtual int SetOrdinalPosition(int);
	virtual int ShouldShowToolTip(ITaskItem *);
	virtual long AnimateFromOffset(int);
	virtual long GetAccessibleObject(IAccessibleEx * *,int);
	virtual long GetAccessiblePropertyValue(int,tagVARIANT *);
	virtual long GetIAccessiblePair(IAccessible * *,long *);
	virtual long GetToolTipText(int,unsigned short *,int);
	virtual long GetToolTipText(unsigned short *,int);
	virtual long ItemProgressUpdate(ITaskItem *);
	virtual long OnStoryboardStatusChanged(IUIAnimationStoryboard *,__MIDL___MIDL_itf_UIAnimation_0000_0002_0001,__MIDL___MIDL_itf_UIAnimation_0000_0002_0001);
	virtual long OnStoryboardUpdated(IUIAnimationStoryboard *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SetLocation(int,int,tagRECT const *);
	virtual long StartFlashingAnimation(ITaskItem *,eANIMTYPE);
	virtual long StartItemAnimation(int,eANIMTYPE);
	virtual long UpdateOverlayIcon(ITaskItem *,HICON__ *,unsigned int);
	virtual unsigned long AddRef();
	virtual unsigned long GetFlags(ITaskItem const *);
	virtual unsigned long GetGroupProgress(_TBPSTATE *,int *);
	virtual unsigned long Release();
	virtual void AddTaskItem(ITaskItem *);
	virtual void CancelRemoveItem(ITaskItem *);
	virtual void GetLocation(ITaskItem *,tagRECT *);
	virtual void GetLocation(int,tagRECT *);
	virtual void GetRowColLocationFromIndex(int,tagRECT *);
	virtual void Glom(int);
	virtual void HandleMouseMove(tagPOINT);
	virtual void InvalidateDirtyItems(tagPOINT *);
	virtual void InvalidateGroupAll();
	virtual void NotifyFlashingChange(ITaskItem *);
	virtual void RealityCheck();
	virtual void RemoveIconForAllButtons();
	virtual void Render(HDC__ *,int,int,tagPOINT *);
	virtual void Shutdown();
	virtual void UpdateFlags(ITaskItem *,unsigned long,unsigned long);
	virtual void UpdateGroupType();
};

class CTaskButton
{
protected:
	virtual ~CTaskButton();
public:
	virtual HICON__ * GetAnimatedOverlayIcon();
	virtual ITaskItem * GetTaskItem();
	virtual int IsFlashing();
	virtual int ShouldShowToolTip();
	virtual long GetAccessibleObject(IAccessibleEx * *);
	virtual long GetAccessiblePropertyValue(int,tagVARIANT *);
	virtual long GetIAccessiblePair(IAccessible * *,long *);
	virtual long OnStoryboardStatusChanged(IUIAnimationStoryboard *,__MIDL___MIDL_itf_UIAnimation_0000_0002_0001,__MIDL___MIDL_itf_UIAnimation_0000_0002_0001);
	virtual long OnStoryboardUpdated(IUIAnimationStoryboard *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long GetFlags();
	virtual unsigned long Release();
	virtual void ClearOwner();
	virtual void DestroyAnimatedOverlayIcon();
	virtual void EnableShowToolTip(int);
	virtual void NotifyFlashingChange();
	virtual void SetAnimatedOverlayIcon(HICON__ *);
	virtual void UpdateFlags(unsigned long,unsigned long);
};

struct CTaskButtonAccessible
{
	static long Create(ITaskButtonAcc *,CTaskButtonAccessible * *);
	virtual long ConvertReturnedElement(IRawElementProviderSimple *,IAccessibleEx * *);
	virtual long GetIAccessiblePair(IAccessible * *,long *);
	virtual long GetObjectForChild(long,IAccessibleEx * *);
	virtual long GetPatternProvider(int,IUnknown * *);
	virtual long GetPropertyValue(int,tagVARIANT *);
	virtual long GetRuntimeId(tagSAFEARRAY * *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_HostRawElementProvider(IRawElementProviderSimple * *);
	virtual long get_ProviderOptions(ProviderOptions *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CTaskGroup
{
	CTaskGroup(IMockableApi *);
	ITaskItem * _GetItemForOverlay();
	long _GenerateShortcutFromAppID(_ITEMIDLIST_ABSOLUTE * *);
	long _GenerateShortcutFromFirstWindow(_ITEMIDLIST_ABSOLUTE * *);
	virtual ~CTaskGroup();
	void _UpdateUseExecutableGroupIcon();
public:
	virtual HICON__ * GetOverlayIcon();
	virtual _ITEMIDLIST_ABSOLUTE * GetApplicationIDList();
	virtual _ITEMIDLIST_ABSOLUTE const * GetShortcutIDList();
	virtual bool HasItemsOnCurrentDesktop();
	virtual bool IsImmersiveGroup();
	virtual int GetNumItems();
	virtual int GetVisualOrder();
	virtual int IsAppLaunchable();
	virtual int IsAppPinnable();
	virtual int ShouldLog();
	virtual long AddTaskItem(ITaskItem *,ITaskItem *);
	virtual long DoesWindowMatch(HWND__ *,_ITEMIDLIST_ABSOLUTE const *,unsigned short const *,WINDOWMATCHCONFIDENCE *,ITaskItem * *);
	virtual long EnumTaskItems(IEnumTaskItems * *);
	virtual long GetAccName(ITaskItem *,unsigned int,unsigned short * *);
	virtual long GetBadgeData(IBadgeData * *);
	virtual long GetCensoredAppId(unsigned short * *);
	virtual long GetIconId(ITaskItem *,int *);
	virtual long GetItemFromWindow(HWND__ *,ITaskItem * *);
	virtual long GetLastActiveItem(ITaskItem * *);
	virtual long GetLauncherName(unsigned short * *);
	virtual long GetNumTabs(int *,int *);
	virtual long GetTitleText(ITaskItem *,unsigned short *,int);
	virtual long GetToolTipText(ITaskItem *,unsigned short *,int);
	virtual long GroupMenuCommand(ITaskItemFilter *,int);
	virtual long Initialize(_ITEMIDLIST_ABSOLUTE const *,unsigned short const *,unsigned short const *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long RemoveTabs(ITaskItem *,int,void (*)(unsigned __int64,HWND__ *),unsigned __int64);
	virtual long RemoveTaskItem(ITaskItem *);
	virtual long SetAppID(unsigned short const *);
	virtual long SetBadgeDescription(unsigned short const *);
	virtual long SetExeName(unsigned short const *);
	virtual long SetIconId(ITaskItem *,int);
	virtual long SetPinnableAndLaunchable(int);
	virtual long SetShortcutIDList(_ITEMIDLIST_ABSOLUTE const *);
	virtual long SetTip(unsigned short const *);
	virtual long UpdateFlags(unsigned long,unsigned long);
	virtual unsigned long AddRef();
	virtual unsigned long GetFlags();
	virtual unsigned long Release();
	virtual unsigned short const * GetAppID();
	virtual unsigned short const * GetBadgeDescription();
	virtual unsigned short const * GetExeName();
	virtual unsigned short const * GetIconResource();
	virtual unsigned short const * GetOverlayIconDescription();
	virtual void SetBadgeData(IBadgeData *);
	virtual void SetVisualOrder(int);
};

class CTaskItem
{
protected:
	CTaskItem(IMockableApi *);
	HICON__ * _ScaleAndCopyIcon(HICON__ *,int);
	long _Initialize(ITrayComponentHost *);
	virtual ~CTaskItem();
	void _UpdateThumbButtonThemeParts();
public:
	virtual HICON__ * GetOverlayIcon();
	virtual HMONITOR__ * GetMonitor(ITrayComponentHost *);
	virtual ITaskItem * GetActiveTabItem();
	virtual ITaskItem * GetTabContainerItem();
	virtual _IMAGELIST * ThumbBarGetImageList();
	virtual _TBPSTATE GetProgressState();
	virtual bool IsVisibleOnCurrentVirtualDesktop();
	virtual int GetIconId();
	virtual int GetNumTabs();
	virtual int HasBeenInteracted();
	virtual int HasThumbBar(unsigned int *);
	virtual int IsActiveTab();
	virtual int ResetProgress();
	virtual int SetProgressState(_TBPSTATE);
	virtual int SetProgressValue(unsigned long);
	virtual long AddTab(ITaskItem *);
	virtual long GetThumbButtonById(unsigned int,tagTHUMBBUTTON32 *);
	virtual long GetThumbnailClip(tagRECT *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long RemoveTab(ITaskItem *);
	virtual long SetActiveTabItem(ITaskItem *);
	virtual long SetIconId(int);
	virtual long SetLastInteractiveStartTime(unsigned long);
	virtual long SetOverlayIcon(HICON__ *,unsigned int);
	virtual long SetOverlayIconDescription(unsigned short const *);
	virtual long SetTabContainerItem(ITaskItem *);
	virtual long SetTabProperties(STPFLAG);
	virtual long SetThumbnailClip(tagRECT *);
	virtual long SetThumbnailToolTip(unsigned short const *);
	virtual long ThumbBarAddButtons(tagTHUMBBUTTON32 *,unsigned long,unsigned int);
	virtual long ThumbBarSetImageList(_IMAGELIST *,unsigned int);
	virtual long ThumbBarUpdateButton(tagTHUMBBUTTON32 *);
	virtual long UpdateFlags(unsigned long,unsigned long);
	virtual tagTHUMBBUTTON32 * GetThumbButtons(int *);
	virtual unsigned int GetThumbButtonThemePartById(unsigned int);
	virtual unsigned long AddButtonRef();
	virtual unsigned long AddRef();
	virtual unsigned long GetButtonRef();
	virtual unsigned long GetFirstOpenedTime();
	virtual unsigned long GetFlags();
	virtual unsigned long GetLastActivatedTime();
	virtual unsigned long GetLastInteractiveStartTime();
	virtual unsigned long GetOverlayIconTime();
	virtual unsigned long GetProgressValue();
	virtual unsigned long Release();
	virtual unsigned long RemoveButtonRef();
	virtual unsigned short const * GetOverlayIconDescription();
	virtual unsigned short const * GetThumbnailToolTip();
	virtual void ClearOverlayIconNoDestroy();
	virtual void RemoveThumbBar();
	virtual void SetVisibleOnCurrentVirtualDesktop(bool);
};

class CTaskListThumbnailAccessible
{
	int _GetThumbIndexFromAccIndex(int,int *,int *);
public:
	static long Create(IExtendedUISwitcher *,CTaskListThumbnailAccessible * *);
	virtual long ContextSensitiveHelp(int);
	virtual long ConvertReturnedElement(IRawElementProviderSimple *,IAccessibleEx * *);
	virtual long GetIAccessiblePair(IAccessible * *,long *);
	virtual long GetIDsOfNames(_GUID const &,unsigned short * *,unsigned int,unsigned long,long *);
	virtual long GetObjectForChild(long,IAccessibleEx * *);
	virtual long GetRuntimeId(tagSAFEARRAY * *);
	virtual long GetTypeInfo(unsigned int,unsigned long,ITypeInfo * *);
	virtual long GetTypeInfoCount(unsigned int *);
	virtual long GetWindow(HWND__ * *);
	virtual long Invoke(long,_GUID const &,unsigned long,unsigned short,tagDISPPARAMS *,tagVARIANT *,tagEXCEPINFO *,unsigned int *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long QueryService(_GUID const &,_GUID const &,void * *);
	virtual long accDoDefaultAction(tagVARIANT);
	virtual long accHitTest(long,long,tagVARIANT *);
	virtual long accLocation(long *,long *,long *,long *,tagVARIANT);
	virtual long accNavigate(long,tagVARIANT,tagVARIANT *);
	virtual long accSelect(long,tagVARIANT);
	virtual long get_accChild(tagVARIANT,IDispatch * *);
	virtual long get_accChildCount(long *);
	virtual long get_accDefaultAction(tagVARIANT,unsigned short * *);
	virtual long get_accDescription(tagVARIANT,unsigned short * *);
	virtual long get_accFocus(tagVARIANT *);
	virtual long get_accHelp(tagVARIANT,unsigned short * *);
	virtual long get_accHelpTopic(unsigned short * *,tagVARIANT,long *);
	virtual long get_accKeyboardShortcut(tagVARIANT,unsigned short * *);
	virtual long get_accName(tagVARIANT,unsigned short * *);
	virtual long get_accParent(IDispatch * *);
	virtual long get_accRole(tagVARIANT,tagVARIANT *);
	virtual long get_accSelection(tagVARIANT *);
	virtual long get_accState(tagVARIANT,tagVARIANT *);
	virtual long get_accValue(tagVARIANT,unsigned short * *);
	virtual long put_accName(tagVARIANT,unsigned short *);
	virtual long put_accValue(tagVARIANT,unsigned short *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CTaskListThumbnailWnd
{
	ITaskItem * _GetTaskItem(int);
	ITaskThumbnail * _GetThumbnailFromThumbBarId(int);
	__int64 _HandleCreate();
	__int64 _HandleNcHitTest(HWND__ *,unsigned __int64,__int64);
	__int64 _HandleThumbBarCustomDraw(tagNMCUSTOMDRAWINFO *);
	__int64 _HandleThumbBarKeyDown(int,int);
	float _CalcThumbnailScale(CDPA<ITaskThumbnail,CTContainer_PolicyUnOwned<ITaskThumbnail> > const *,tagRECT const *,int,int,unsigned char,int *,int *,tagSIZE *);
	int _CalcBestSizeFromLayout();
	int _CalcIdealHeight(CDPA<ITaskThumbnail,CTContainer_PolicyUnOwned<ITaskThumbnail> > const *,int *,int *);
	int _CalcIdealWidth(CDPA<ITaskThumbnail,CTContainer_PolicyUnOwned<ITaskThumbnail> > const *,int *,int *,int *);
	int _CalcMenuWidth();
	int _CanShowThumbnails(CDPA<ITaskThumbnail,CTContainer_PolicyUnOwned<ITaskThumbnail> > const *,int,int);
	int _CancelAnimation(eANIMTYPE,IUIAnimationVariable * *);
	int _CancelAnimations(eANIMTYPE *,int);
	int _CreateOverlayWindow();
	int _FindHTHUMBNAIL(void *);
	int _FindHWND(HWND__ *);
	int _GetMaxVisibleMenuItemCount(long *);
	int _GetMinWidthWithThumbBar(ITaskThumbnail *);
	int _GetThumbRectFromIndexHelper(CDPA<ITaskThumbnail,CTContainer_PolicyUnOwned<ITaskThumbnail> > const *,int,tagSIZE const *,int,int,unsigned long,tagRECT *,tagRECT *,tagRECT *);
	int _HandleKeyDown(int);
	int _HasAnimation(eANIMTYPE,int *);
	int _InitTaskItems(CDPA<ITaskThumbnail,CTContainer_PolicyUnOwned<ITaskThumbnail> > *,ITaskBtnGroup *,int);
	int _IsHorizontal();
	int _NeedIgnoreMouseLeave();
	int _NeedScroll();
	int _NeedShowThumbBar(ITaskThumbnail *);
	int _ReplaceThumbnail(int,ITaskThumbnail *);
	int _ShouldCloseFromTaskDestroy();
	int _StartAnimation(eANIMTYPE);
	int _StartMorph();
	long _ComputeThumbnailSize(ITaskThumbnail *,tagRECT const *,tagRECT *);
	long _ComputeThumbnailsFromGroup(ITaskBtnGroup *,CDPA<ITaskThumbnail,CTContainer_PolicyUnOwned<ITaskThumbnail> > *,int *);
	long _InsertThumbnail(ITaskThumbnail *,int *);
	long _MoveFocus(EMoveFocus);
	long _SetFocus(int);
	long _SetIcon(HICON__ *,int,int);
	static HHOOK__ * s_hLLKeyboardHookHotKey;
	static HHOOK__ * s_hLLKeyboardHookHover;
	static __int64 s_LLKeyboardProcHotKey(int,unsigned __int64,__int64);
	static __int64 s_LLKeyboardProcHover(int,unsigned __int64,__int64);
	static __int64 s_OverlayWndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	static void s_IconAsyncProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	static void s_LoadImmersiveIcon(HWND__ *,IImmersiveApplication *,unsigned int,bool);
	unsigned long _GetPlateColor(int);
	virtual __int64 v_WndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	void _CleanUp();
	void _CleanupMorph();
	void _ClearThumbnails();
	void _DestroyOverlayWindow();
	void _DestroyThumbnail(int,int);
	void _DrawScrollArrow(int,HDC__ *);
	void _DrawText(HDC__ *,int,tagRECT const *,bool,bool,bool);
	void _EnableAccentBlur(ACCENT_STATE);
	void _FadeOut();
	void _FreeFonts();
	void _GetScrollingControlRect(int,tagRECT *);
	void _GetThemeMetricWithFallback(int,int,int,int,int *);
	void _GetThemePartSizeWithFallback(int,int,int,int,tagSIZE *);
	void _GetThumbnailStates(int,ThumbnailStates *);
	void _GetWindowIcon(HWND__ *,__int64,int,int);
	void _GetWorkAreaRect(tagRECT *);
	void _HandleContextMenu(tagPOINT,int);
	void _HandleDisplayChanged(bool);
	void _HandleImmersiveIconLoaded(IMMERSIVEICON *);
	void _HandleMouseButtonDown(tagPOINT);
	void _HandleMouseButtonUp(tagPOINT,int);
	void _HandleMouseMove(tagPOINT,int);
	void _HandleOverlayThemeChanged();
	void _HandlePaint(HDC__ *,tagRECT);
	void _HandleTimer(unsigned int);
	void _Hide(int);
	void _IgnoreCurPosHover();
	void _InvalidateThumb(int);
	void _PaintCloseButton(HDC__ *,int,int,int);
	void _PaintOverlay();
	void _RaiseWindowForLivePreviewIfNeeded(ImmersiveTray::RaiseWindowFlags);
	void _RefreshThumbnail(int);
	void _RegisterLLKeyboardHookHotKey();
	void _RegisterThumbBars();
	void _RegisterWindowClass(HINSTANCE__ *);
	void _Render(int,int);
	void _ScaleRectWithAspect(tagRECT *,tagRECT const *,int);
	void _ScrollIntoView();
	void _ScrollMenu(int);
	void _Show();
	void _ShowLivePreview(int,int);
	void _ShowThumbnailToolbars(int);
	void _SwitchToWindow(int);
	void _UpdateDwmBlurRegion();
	void _UpdateFonts();
	void _UpdateIcons();
	void _UpdateItemIcon(int);
	void _UpdateTheme();
	void _UpdateThumbnails(CDPA<ITaskThumbnail,CTContainer_PolicyUnOwned<ITaskThumbnail> > const *,tagSIZE const *,int,int,unsigned char);
public:
	CTaskListThumbnailWnd();
	virtual HWND__ * GetHWND();
	virtual HWND__ * GetHwnd();
	virtual HWND__ * GetThumbBarWindow(int);
	virtual ITaskGroup * GetTaskGroup();
	virtual int DisplayUI(ITaskBtnGroup *,ITaskItem *,ITaskItem *,unsigned long);
	virtual int GetFocusedIndex();
	virtual int GetHoverIndex();
	virtual int GetMargins(tagRECT *);
	virtual int GetMonitorDPI();
	virtual int GetNavigatedIndex(int,EMoveFocus);
	virtual int GetTextFromIndex(int,unsigned short *,int);
	virtual int GetThumbBarRectFromIndex(int,tagRECT *);
	virtual int GetThumbCloseButtonRectFromIndex(int,tagRECT *);
	virtual int GetThumbRectFromIndex(int,unsigned long,tagRECT *,tagRECT *);
	virtual int GetThumbsCount();
	virtual int GetToolTipRect(ITaskItem *,tagRECT *);
	virtual int GetWindowLocation(tagRECT *);
	virtual int IsClosingFromExtendedUI();
	virtual int IsInvokedFromHotKey();
	virtual int IsPopup();
	virtual int IsRTLMirrored(int *);
	virtual int IsThumbVisible(int);
	virtual int IsVisible();
	virtual int ShouldShowToolTip(ITaskItem *);
	virtual int ThumbIndexFromPoint(tagPOINT const &);
	virtual long DragEnter(IDataObject *,unsigned long,_POINTL,unsigned long *);
	virtual long DragLeave();
	virtual long DragOver(unsigned long,_POINTL,unsigned long *);
	virtual long Drop(IDataObject *,unsigned long,_POINTL,unsigned long *);
	virtual long GetAccThumbFromIndex(int,IAccessibleEx * *);
	virtual long GetAccessibleObject(IAccessible * *);
	virtual long GetSite(_GUID const &,void * *);
	virtual long GetTaskListAnimation(ITaskListAnimation * *);
	virtual long GetThumbnailIndex(ITaskThumbnail *,int *);
	virtual long OnStoryboardStatusChanged(IUIAnimationStoryboard *,__MIDL___MIDL_itf_UIAnimation_0000_0002_0001,__MIDL___MIDL_itf_UIAnimation_0000_0002_0001);
	virtual long OnStoryboardUpdated(IUIAnimationStoryboard *);
	virtual long SetFocusedIndex(int);
	virtual long SetSite(IUnknown *);
	virtual long UpdateThumbBarButton(ITaskItem *,unsigned int);
	virtual long UpdateThumbBarImageList(ITaskItem *);
	virtual void DestroyThumbnail(ITaskThumbnail *);
	virtual void Dismiss(int,int);
	virtual void HandleCloseThumbnail(int);
	virtual void HandleHotKeyNavigate(int);
	virtual void HandleMouseEnter(int);
	virtual void HandleMouseLeave(int);
	virtual void InvalidateThumbnailHostArea(ITaskThumbnail *);
	virtual void LayoutThumbnails();
	virtual void MakeSticky(int,int,int);
	virtual void MapScreenToVirtual(tagPOINT *);
	virtual void MapVirtualToScreen(tagPOINT *);
	virtual void MoveSizeAnimating(int);
	virtual void RedrawTask(ITaskItem *,unsigned long);
	virtual void RefreshHotItem();
	virtual void RefreshThumbnail(ITaskItem *);
	virtual void SelectAndClose(int);
	virtual void SetActiveItem(ITaskItem *);
	virtual void SetDPI(unsigned int);
	virtual void SetHotItem(ITaskItem *);
	virtual void SetParentInfo(HWND__ *);
	virtual void TaskCreated(ITaskItem *);
	virtual void TaskDestroyed(ITaskItem *);
	virtual void TaskReordered(ITaskItem *);
	virtual void UpdateEntryExitAnim();
	virtual ~CTaskListThumbnailWnd();
};

class CTaskListWnd
{
protected:
	CTaskListWnd(IObjectFactory *,ITaskListAnimation *);
	ITaskBtnGroup * _CreateTBGroup(ITaskGroup *,int);
	ITaskBtnGroup * _GetTBGroupFromGroup(ITaskGroup *,int *);
	ITaskBtnGroup * _HitTestForTBGroup(tagPOINT const &,int *,eTBGROUPHITLOCATION *);
	ITaskItem * _ExtendedTaskFromTopLevelTask(ITaskItem *);
	ITaskItem * _TopLevelTaskFromExtendedTask(ITaskItem *);
	__int64 _HandleCreate();
	__int64 _HandleMenuMessage(HWND__ *,unsigned int,unsigned __int64,__int64);
	__int64 _HandleMouseHover(int,int);
	__int64 _HandleNcHitTest(tagPOINT const &);
	int _CheckNeedScrollbars(int,tagRECT *,tagRECT *);
	int _ComputeItemForNavigate(ITaskBtnGroup *,int,int,unsigned int,int,ITaskBtnGroup * *,int *);
	int _ComputeSingleButtonWidth(eTBGROUPTYPE,int *);
	int _GetActiveItem(ITaskBtnGroup *);
	int _GetNumRowsFromHeight(int);
	int _GetPinnedOrder(ITaskGroup *);
	int _GetRequiredCols(int);
	int _GetRequiredRows(int,int);
	int _HitTestForEmptyArea(int,int);
	int _HitTestForRearrange(tagPOINT);
	int _IsHorizontal();
	int _IsTaskbandUnique();
	int _RecomputeLayout();
	int _RecomputeLayoutColumn(int,int,int,int,int,tagRECT *);
	int _RecomputeLayoutRow(int,int,int,int,int,tagRECT *);
	int _RegisterWindowClass();
	int _ShouldSwapPos(tagPOINT,tagRECT,int);
	int _UpdateDragTarget(unsigned long,_POINTL,unsigned long *,eTBGROUPHITLOCATION *);
	int _WillExtendedUIGlom(ITaskBtnGroup *);
	long _AddGhostPinnedItem(IDataObject *,ITaskGroup * *);
	long _ComputeJumpViewPosition(ITaskBtnGroup *,int,Windows::Foundation::Point &,Windows::UI::Xaml::HorizontalAlignment &,Windows::UI::Xaml::VerticalAlignment &);
	long _DisplayExtendedUI(ITaskBtnGroup *,int,unsigned long,int);
	long _EnsureJumpViewExperienceWrapper();
	long _GetImmersiveLivePreviewWindow(ITaskItem *,HWND__ * *,tagRECT *);
	long _GetJumpViewParams(ITaskBtnGroup *,ITaskItem *,int,bool,Windows::Internal::Shell::JumpView::IJumpViewParams * *);
	long _GetTask(ITaskBtnGroup *,int,ITaskGroup * *,ITaskItem * *);
	long _MoveTaskBtnGroup(int,int);
	long _PositionToolTip(ITaskBtnGroup *,int,tagPOINT *);
	long _TaskCreated(ITaskGroup *,ITaskItem *,int);
	static void FakeSystemMenuCB(HWND__ *,unsigned int,unsigned __int64,__int64);
	unsigned long _GetUserPreferences();
	virtual __int64 v_WndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	virtual ~CTaskListWnd();
	void _CancelDragGroup();
	void _ClearJumpViewBtnGroup();
	void _CreatePinnedTBGroupFromDrag(eTBGROUPHITLOCATION);
	void _DragActivateJumpView();
	void _DrawInsertionPoint(HDC__ *,int);
	void _FakeSystemMenu(HWND__ *,unsigned long);
	void _FinishDragGroup();
	void _FinishMenu();
	void _FixupTaskIndicies(ITaskBtnGroup *,int,int);
	void _GetValidRange(ITaskBtnGroup *,int *,int *);
	void _HandleClick(ITaskBtnGroup *,int,CTaskListWnd::eCLICKACTION,int,int);
	void _HandleContextMenu(int,int,int);
	void _HandleDestroy();
	void _HandleDragGroup(int,int);
	void _HandleKeyDown(int,__int64);
	void _HandleKillFocus(HWND__ *);
	void _HandleLastActiveClick(ITaskGroup *);
	void _HandleMouseButtonDown(unsigned __int64,tagPOINT const &,bool);
	void _HandleMouseButtonUp(unsigned __int64,tagPOINT const &,bool,bool);
	void _HandleMouseMove(tagPOINT const &);
	void _HandlePaint(HDC__ *);
	void _HandleSetFocus();
	void _HandleSettingChanged(unsigned __int64,__int64);
	void _HandleSingleRowRearrange(int,tagRECT,tagRECT);
	void _HandleThemeChanged();
	void _HandleTimer(unsigned __int64);
	void _HotTrackFromKeyboard(ITaskBtnGroup *,int,int);
	void _InitFonts();
	void _NotifyActiveItemChanged(ITaskBtnGroup *,int,ITaskBtnGroup *,int);
	void _NotifyGlom(ITaskBtnGroup *);
	void _NotifyItemCreated(ITaskBtnGroup *,ITaskItem *);
	void _NotifyItemDestroyed(ITaskBtnGroup *,ITaskItem *);
	void _OnJumpViewDismissed(HSTRING__ *);
	void _OnJumpViewShown(HSTRING__ *);
	void _PersistVisualOrder();
	void _ProcessMenuCloseWindowSync(HWND__ *,ITaskBtnGroup *);
	void _PurgeDragData();
	void _RefreshThumbnail(ITaskItem *);
	void _ResetLastActiveClick();
	void _ScrollIntoView(ITaskBtnGroup *,int);
	void _SetActiveItem(ITaskBtnGroup *,int);
	void _SetHotItem(ITaskBtnGroup *,int,ITaskItem *,SetHotItemFlags);
	void _ShowToolTip(int,int);
	void _StartDragGroup(int,int);
	void _TaskDestroyedFinal(ITaskBtnGroup *,int);
	void _TryToGlom(tagRECT const *,int,int,int);
	void _TryToUnglom(tagRECT const *,int,int,int);
	void _UpdateDragRect(int,int,tagRECT *,tagRECT *,tagPOINT *);
	void _UpdateDropToPinDescription(int,ITaskGroup *);
	void _UpdateDropToPinDescriptionFromDragOverGroup(IDataObject *,ITaskGroup *,unsigned long *);
	void _UpdateInnerDropTarget(unsigned long,_POINTL,unsigned long *);
public:
	virtual ANIMDATA const & GetAnimationData(eANIMTYPE);
	virtual COLORTHEME GetColorTheme();
	virtual HMONITOR__ * GetMonitor();
	virtual HWND__ * GetHWND();
	virtual HWND__ * GetTrayHWND();
	virtual HWND__ * GetWindow();
	virtual SyncDisplayChangeFlags SyncDisplayChange(SyncDisplayChangeFlags,CCoSimpleArray<unsigned int,4294967294,CSimpleArrayStandardCompareHelper<unsigned int> > &);
	virtual bool GetBtnGroupRectFromIndex(int,tagRECT *);
	virtual bool IsDesktopVisibleOnTrayMonitor();
	virtual bool IsTransparent();
	virtual eTBGROUPTYPE GetTBGroupType(ITaskGroup *);
	virtual int ContainsPinnedItems();
	virtual int GetButtonHeight(int *);
	virtual int GetCurrentTaskOrder(ITaskGroup *);
	virtual int GetFirstVisibleIndex();
	virtual int GetIconId(ITaskGroup *,ITaskItem *);
	virtual int GetItemCount();
	virtual int GetLastVisibleIndex();
	virtual int GetMinButtonWidth();
	virtual int GetNumRows();
	virtual int GetRelativeTaskOrder(ITaskGroup *);
	virtual int GetWindowCount();
	virtual int HasAnyAnimation(IUnknown *,eANIMTYPE);
	virtual int IsContextMenuActive();
	virtual int IsExtendedUIVisible();
	virtual int IsLivePreviewActive();
	virtual int IsOnPrimaryTaskband();
	virtual int IsTaskExtendedUI(ITaskBtnGroup *,ITaskItem *);
	virtual int IsTaskTopLevelUI(ITaskItem *);
	virtual int Navigate(int,int);
	virtual int PermitAutoHide();
	virtual int TaskIndexHitTest(tagPOINT const &);
	virtual long ActivateTask(ITaskGroup *,ITaskItem *);
	virtual long AddPostUpdateNotificationCallback(ITaskListAnimationNotificationSink *);
	virtual long AutoSize();
	virtual long CanAnimate(eANIMTYPE);
	virtual long CancelAnimation(IUnknown *,eANIMTYPE,IUIAnimationVariable * *);
	virtual long CancelAnimations(IUnknown *,eANIMTYPE *,int);
	virtual long DismissHoverUI(int);
	virtual long DismissJumpView(ITaskGroup *);
	virtual long DismissPopupMenu();
	virtual long DoDefaultAction(ITaskGroup *,int);
	virtual long DragEnter(IDataObject *,unsigned long,_POINTL,unsigned long *);
	virtual long DragLeave();
	virtual long DragOver(unsigned long,_POINTL,unsigned long *);
	virtual long Drop(IDataObject *,unsigned long,_POINTL,unsigned long *);
	virtual long FinishAnimation(IUnknown *,eANIMTYPE);
	virtual long GetAccTaskButtonGroupAtIndex(int,IAccessibleEx * *);
	virtual long GetAccessibleObject(IAccessible * *);
	virtual long GetAccessibleStringForBadge(IBadgeData *,unsigned short * *);
	virtual long GetActiveBtn(ITaskGroup * *,int *);
	virtual long GetActiveTask(ITaskGroup * *,ITaskItem * *);
	virtual long GetAnimationType(IUIAnimationStoryboard *,eANIMTYPE *);
	virtual long GetGroupLocation(ITaskGroup *,ITaskItem *,int,tagRECT *);
	virtual long GetHost(_GUID const &,void * *);
	virtual long GetIndexOfTask(ITaskGroup *,ITaskItem *,int *);
	virtual long GetIndexOfTaskBtn(ITaskGroup *,int,int *);
	virtual long GetMinRect(ITaskGroup *,ITaskItem *,tagRECT *);
	virtual long GetSite(_GUID const &,void * *);
	virtual long GetTaskAtIndex(int,ITaskGroup * *,ITaskItem * *,int *,bool *);
	virtual long GetTaskButtonGroupInfo(ITaskGroup *,unsigned int *,bool *);
	virtual long GetTaskListWndSite(ITaskListWndSite * *);
	virtual long GetTrackedBtn(ITaskGroup * *,int *);
	virtual long GetTrackedTask(ITaskGroup * *,ITaskItem * *);
	virtual long GetTrayMonitorRect(tagRECT *);
	virtual long HandleAccelerator(tagMSG *);
	virtual long HandleWinNumHotKey(short,unsigned short);
	virtual long HasAnimation(IUnknown *,eANIMTYPE,int *);
	virtual long Initialize(ITaskItemFilter *,HMONITOR__ *,unsigned short const *,ITrayComponentHost *);
	virtual long NavigateFromKey(int,int,unsigned int);
	virtual long OnAnimationUpdateNotify();
	virtual long ProcessDeferredAnimationActions();
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long RedrawExtendedTask(ITaskGroup *,ITaskItem *);
	virtual long RedrawTask(ITaskGroup *,ITaskItem *,unsigned long);
	virtual long RenderTaskbar(TrayBitmapForVDThumbnailData *);
	virtual long ReorderTaskGroup(ITaskGroup *,ITaskGroup *);
	virtual long ResetAnimationState();
	virtual long SendStateCaptureTelemetry(StateCapture::TelemetryStateCaptureType);
	virtual long SetDrag(int);
	virtual long SetRenderFlag(unsigned long);
	virtual long SetSite(IUnknown *);
	virtual long SetTrackedBtn(ITaskGroup *,int);
	virtual long SetUserPreferenceFlag(unsigned long,unsigned long);
	virtual long SettingsChanged();
	virtual long ShowJumpView(ITaskGroup *,ITaskItem *,bool);
	virtual long Shutdown();
	virtual long StartAnimation(IUnknown *,eANIMTYPE);
	virtual long StartAnimationEx(IUnknown *,eANIMTYPE,ANIMDATA const *);
	virtual long SwitchToTracked();
	virtual long TaskActiveTabUpdated(ITaskGroup *,ITaskItem *,ITaskItem *,ITaskItem *);
	virtual long TaskCreated(ITaskGroup *,ITaskItem *);
	virtual long TaskDestroyed(ITaskGroup *,ITaskItem *);
	virtual long TaskInclusionChanged(ITaskGroup *,ITaskItem *);
	virtual long TaskProgressUpdate(ITaskGroup *,ITaskItem *,int);
	virtual long TaskReordered(ITaskGroup *,ITaskItem *);
	virtual long UpdateOverlayIcon(ITaskGroup *,ITaskItem *,HICON__ *,unsigned int);
	virtual long UpdateTheme();
	virtual long UpdateThumbBarButton(ITaskGroup *,ITaskItem *,unsigned int);
	virtual long UpdateThumbBarImageList(ITaskGroup *,ITaskItem *);
	virtual unsigned int GetMonitorDPI();
	virtual unsigned long AddRef();
	virtual unsigned long GetStuckPlace();
	virtual unsigned long GetUserPreferences();
	virtual unsigned long Release();
	virtual void CloseItem(ITaskItem *);
	virtual void DisableToolTip(int);
	virtual void DismissAllSecondaryUI();
	virtual void ForceDesktopSwitch();
	virtual void GetButtonMargin(int *,int *);
	virtual void HandleCortanaAppVisibilityChange(HMONITOR__ *,bool);
	virtual void HandleDisplayChange();
	virtual void HandleImmersiveLauncherVisibilityChange(HMONITOR__ *,bool);
	virtual void HandleMouseEnter(int);
	virtual void HandleMouseLeave(int);
	virtual void HandleScrollToPosition(int);
	virtual void HandleTaskGroupPinned(ITaskGroup *);
	virtual void HandleTaskGroupUnpinned(ITaskGroup *);
	virtual void HandleTaskViewVisibilityChange(bool);
	virtual void ImmersiveShow();
	virtual void InvalidateTaskGroup(ITaskGroup *);
	virtual void NotifyExtendedUIDismissed(int,ITaskItem *);
	virtual void NotifySystemMenu();
	virtual void OnContextMenu(tagPOINT,HWND__ *,bool,ITaskGroup *,ITaskItem *);
	virtual void ProcessJumpViewCloseWindow(HWND__ *,ITaskGroup *,HMONITOR__ *);
	virtual void RealityCheck();
	virtual void RemoveIconForAllButtons();
	virtual void SetHotItem(ITaskItem *);
	virtual void SetMonitor(HMONITOR__ *,unsigned short const *);
	virtual void SetRelativeTaskOrder(ITaskGroup *,int);
	virtual void SetTaskFilter(ITaskItemFilter *);
	virtual void ShowLivePreview(ITaskItem *,unsigned long);
	virtual void SwitchToItem(ITaskItem *);
	virtual void TakeFocus(int);
	virtual void UpdateVisualTaskOrder();
};

class CTaskListWndAccessible
{
	CTaskListWndAccessible(ITaskListAcc *);
	int _GetTaskButtonState(ITaskGroup *,int,int);
	int _IsTaskFocused(ITaskGroup *,int);
	virtual ~CTaskListWndAccessible();
public:
	static long Create(ITaskListAcc *,_GUID const &,void * *);
	virtual long ContextSensitiveHelp(int);
	virtual long ConvertReturnedElement(IRawElementProviderSimple *,IAccessibleEx * *);
	virtual long GetIAccessiblePair(IAccessible * *,long *);
	virtual long GetIDsOfNames(_GUID const &,unsigned short * *,unsigned int,unsigned long,long *);
	virtual long GetObjectForChild(long,IAccessibleEx * *);
	virtual long GetRuntimeId(tagSAFEARRAY * *);
	virtual long GetTypeInfo(unsigned int,unsigned long,ITypeInfo * *);
	virtual long GetTypeInfoCount(unsigned int *);
	virtual long GetWindow(HWND__ * *);
	virtual long Invoke(long,_GUID const &,unsigned long,unsigned short,tagDISPPARAMS *,tagVARIANT *,tagEXCEPINFO *,unsigned int *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long QueryService(_GUID const &,_GUID const &,void * *);
	virtual long accDoDefaultAction(tagVARIANT);
	virtual long accHitTest(long,long,tagVARIANT *);
	virtual long accLocation(long *,long *,long *,long *,tagVARIANT);
	virtual long accNavigate(long,tagVARIANT,tagVARIANT *);
	virtual long accSelect(long,tagVARIANT);
	virtual long get_accChild(tagVARIANT,IDispatch * *);
	virtual long get_accChildCount(long *);
	virtual long get_accDefaultAction(tagVARIANT,unsigned short * *);
	virtual long get_accDescription(tagVARIANT,unsigned short * *);
	virtual long get_accFocus(tagVARIANT *);
	virtual long get_accHelp(tagVARIANT,unsigned short * *);
	virtual long get_accHelpTopic(unsigned short * *,tagVARIANT,long *);
	virtual long get_accKeyboardShortcut(tagVARIANT,unsigned short * *);
	virtual long get_accName(tagVARIANT,unsigned short * *);
	virtual long get_accParent(IDispatch * *);
	virtual long get_accRole(tagVARIANT,tagVARIANT *);
	virtual long get_accSelection(tagVARIANT *);
	virtual long get_accState(tagVARIANT,tagVARIANT *);
	virtual long get_accValue(tagVARIANT,unsigned short * *);
	virtual long put_accName(tagVARIANT,unsigned short *);
	virtual long put_accValue(tagVARIANT,unsigned short *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CTaskListWndMulti
{
protected:
	CTaskListWndMulti(IObjectFactory *,ITaskItemFilterFactory *,ITrayComponentHost *);
	ITaskListUI * _GetSecondaryTaskListWnd(HMONITOR__ *,tagRECT const *,unsigned short const *);
	ITaskListUI * _GetTaskListWnd(HMONITOR__ *);
	static int s_MonitorEnumProc(HMONITOR__ *,HDC__ *,tagRECT *,__int64);
	virtual ~CTaskListWndMulti();
	void _CreateSecondaryTaskListWnd(HMONITOR__ *,unsigned short const *);
	void _EnumDisplayMonitors();
	void _RefreshFilter(ITaskListUI *,bool);
public:
	virtual COLORTHEME GetColorTheme();
	virtual HMONITOR__ * GetMonitor();
	virtual HWND__ * GetHWND();
	virtual SyncDisplayChangeFlags SyncDisplayChange(SyncDisplayChangeFlags,CCoSimpleArray<unsigned int,4294967294,CSimpleArrayStandardCompareHelper<unsigned int> > &);
	virtual bool IsTransparent();
	virtual int ContainsPinnedItems();
	virtual int GetButtonHeight(int *);
	virtual int GetCurrentTaskOrder(ITaskGroup *);
	virtual int GetMinButtonWidth();
	virtual int GetNumRows();
	virtual int GetRelativeTaskOrder(ITaskGroup *);
	virtual int GetWindowCount();
	virtual int IsAnyTrayInSizeMove();
	virtual int IsExtendedUIVisible();
	virtual int IsOnPrimaryTaskband();
	virtual int PermitAutoHide();
	virtual long ActivateTask(ITaskGroup *,ITaskItem *);
	virtual long AutoSize();
	virtual long ComputeTaskbarForNavigate(ITaskListUI *,int,ITaskListUI * *);
	virtual long DismissHoverUI(int);
	virtual long DismissJumpView(ITaskGroup *);
	virtual long DismissPopupMenu();
	virtual long GetActiveTask(ITaskGroup * *,ITaskItem * *);
	virtual long GetMinRect(ITaskGroup *,ITaskItem *,tagRECT *);
	virtual long GetPearlRectFromMonitor(HMONITOR__ *,tagRECT *,unsigned long *);
	virtual long GetPrimaryDropTarget(_GUID const &,void * *);
	virtual long GetSite(_GUID const &,void * *);
	virtual long GetStuckRectFromMonitor(HMONITOR__ *,tagRECT *);
	virtual long GetTaskListWndSite(ITaskListWndSite * *);
	virtual long GetTrackedTask(ITaskGroup * *,ITaskItem * *);
	virtual long GetTrayMonitorRect(tagRECT *);
	virtual long HandleAccelerator(tagMSG *);
	virtual long HandleSystemControlTurnedOnOrOff(SystemControl,bool);
	virtual long HandleWinNumHotKey(short,unsigned short);
	virtual long Initialize(ITaskItemFilter *,HMONITOR__ *,unsigned short const *,ITrayComponentHost *);
	virtual long IsTrayWindow(HWND__ *);
	virtual long NavigateFromKey(int,int,unsigned int);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long QueryService(_GUID const &,_GUID const &,void * *);
	virtual long RedrawExtendedTask(ITaskGroup *,ITaskItem *);
	virtual long RedrawTask(ITaskGroup *,ITaskItem *,unsigned long);
	virtual long RenderTaskbar(TrayBitmapForVDThumbnailData *);
	virtual long ReorderTaskGroup(ITaskGroup *,ITaskGroup *);
	virtual long SendStateCaptureTelemetry(StateCapture::TelemetryStateCaptureType);
	virtual long SetDrag(int);
	virtual long SetSite(IUnknown *);
	virtual long SettingsChanged();
	virtual long ShowJumpView(ITaskGroup *,ITaskItem *,bool);
	virtual long Shutdown();
	virtual long SwitchToTracked();
	virtual long TaskActiveTabUpdated(ITaskGroup *,ITaskItem *,ITaskItem *,ITaskItem *);
	virtual long TaskCreated(ITaskGroup *,ITaskItem *);
	virtual long TaskDestroyed(ITaskGroup *,ITaskItem *);
	virtual long TaskInclusionChanged(ITaskGroup *,ITaskItem *);
	virtual long TaskProgressUpdate(ITaskGroup *,ITaskItem *,int);
	virtual long TaskReordered(ITaskGroup *,ITaskItem *);
	virtual long UpdateOverlayIcon(ITaskGroup *,ITaskItem *,HICON__ *,unsigned int);
	virtual long UpdateTheme();
	virtual long UpdateThumbBarButton(ITaskGroup *,ITaskItem *,unsigned int);
	virtual long UpdateThumbBarImageList(ITaskGroup *,ITaskItem *);
	virtual unsigned int GetMonitorDPI();
	virtual unsigned long AddRef();
	virtual unsigned long GetStuckPlace();
	virtual unsigned long Release();
	virtual void DismissAllSecondaryUI();
	virtual void ForceDesktopSwitch();
	virtual void ForceDesktopSwitchOnMonitor(HMONITOR__ *);
	virtual void GetButtonMargin(int *,int *);
	virtual void HandleCortanaAppVisibilityChange(HMONITOR__ *,bool);
	virtual void HandleDisplayChange();
	virtual void HandleImmersiveInvokeOnMonitor(HMONITOR__ *);
	virtual void HandleImmersiveLauncherVisibilityChange(HMONITOR__ *,bool);
	virtual void HandleScrollToPosition(int);
	virtual void HandleSearchSettingUpdateOnMonitor();
	virtual void HandleShellModeChanged();
	virtual void HandleTaskGroupPinned(ITaskGroup *);
	virtual void HandleTaskGroupUnpinned(ITaskGroup *);
	virtual void HandleTaskViewVisibilityChange(bool);
	virtual void ImmersiveShow();
	virtual void ImmersiveShow(HMONITOR__ *);
	virtual void InvalidateTaskGroup(ITaskGroup *);
	virtual void NotifySystemMenu();
	virtual void ProcessJumpViewCloseWindow(HWND__ *,ITaskGroup *,HMONITOR__ *);
	virtual void RealityCheck();
	virtual void RefreshTaskFilter();
	virtual void RemoveIconForAllButtons();
	virtual void ResendSecondaryStuckPlace();
	virtual void ResetAnimationState();
	virtual void SendMessageW(unsigned int,unsigned __int64,__int64);
	virtual void SetMonitor(HMONITOR__ *,unsigned short const *);
	virtual void SetRelativeTaskOrder(ITaskGroup *,int);
	virtual void SetSecondaryStuckPlace(unsigned long);
	virtual void SetTaskFilter(ITaskItemFilter *);
	virtual void StuckTrayMonitorChanged(HMONITOR__ *);
	virtual void TakeFocus(int);
	virtual void UpdateSecondaryUIPositions();
	virtual void UpdateTaskBandTheme();
	virtual void UpdateVisualTaskOrder();
};

class CTaskThumbnail
{
	long _SendNowPlayingSessionManagerClick(HWND__ *,unsigned int);
protected:
	CTaskThumbnail(HWND__ *,ITaskItem *,int,int,ITaskThumbnailHost *);
	static __int64 _SubToolbarWndProc(HWND__ *,unsigned int,unsigned __int64,__int64,unsigned __int64,unsigned __int64);
	virtual ~CTaskThumbnail();
	void SetDpiAwareImageList(_IMAGELIST *);
	void _GetThumbBarRect(tagRECT *);
public:
	virtual HICON__ * GetIcon();
	virtual HWND__ * GetHWND();
	virtual HWND__ * GetThumbBarWindow();
	virtual ITaskItem * GetTaskItem();
	virtual int CancelAnimations(eANIMTYPE *,int);
	virtual int GetCachedThumbnailSize(tagSIZE *);
	virtual int GetUniqueId();
	virtual int GetWindowTextW(unsigned short *,int);
	virtual int HasAnimation(eANIMTYPE,int *);
	virtual int HasPreview();
	virtual int IsFlashing();
	virtual int IsRectangular();
	virtual int IsThumbnailAvailable();
	virtual int ShouldShowToolTip();
	virtual int StartAnimation(eANIMTYPE);
	virtual int StartAnimationEx(eANIMTYPE,int);
	virtual long ApplyToVisual();
	virtual long GetAccessibleObject(IAccessibleEx * *);
	virtual long GetAccessiblePropertyValue(int,tagVARIANT *);
	virtual long GetIAccessiblePair(IAccessible * *,long *);
	virtual long GetThumbBarSize(tagSIZE *);
	virtual long InvalidateThumbBar();
	virtual long OnStoryboardStatusChanged(IUIAnimationStoryboard *,__MIDL___MIDL_itf_UIAnimation_0000_0002_0001,__MIDL___MIDL_itf_UIAnimation_0000_0002_0001);
	virtual long OnStoryboardUpdated(IUIAnimationStoryboard *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long RegisterThumbBar();
	virtual long RegisterThumbnail();
	virtual long SetIcon(HICON__ *,int);
	virtual long ShowThumbBar(int);
	virtual long ThumbBarClicked(unsigned int);
	virtual long UnregisterThumbBar();
	virtual long UnregisterThumbnail();
	virtual long UpdateRect(tagRECT const *,tagRECT const *,int,int,unsigned char);
	virtual long UpdateThumbBarButton(unsigned int);
	virtual long UpdateThumbBarImageList();
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual void * GetThumbnailHandle();
	virtual void EnableShowToolTip(int);
	virtual void GetDestRect(tagRECT *);
	virtual void GetThumbnailSize(tagSIZE *);
	virtual void NotifyFlashingChange();
	virtual void SetThumbBarButtonSize(tagSIZE,int);
};

struct CTaskUnknown
{
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~CTaskUnknown();
};

struct CThreadRefHost
{
	void WaitForRefs();
};

struct CThreadRefTaker
{
	virtual ~CThreadRefTaker();
};

class CThumbnailWindow
{
	__int64 _WndProc(unsigned int,unsigned __int64,__int64);
	static Geometry::CRect _GetCenteredRect(Geometry::CRect,Geometry::CSize);
	static __int64 s_WndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	static void s_RegisterWindowClass(HINSTANCE__ *);
public:
	long Release();
	static long CreateInstance(Geometry::CRect const &,Geometry::CRect const &,HWND__ *,Geometry::CRect const &,bool,ZBID,HINSTANCE__ *,CThumbnailWindow * *);
};

class CTray
{
	void _RecordMonitorInfo();
protected:
	APPBAR * _FindAppBar(HWND__ *);
	AUTOHIDEBARDATA * _FindAutoHideBarData(HMONITOR__ *);
	__int64 _HandleDesktopVisibilityChanged(int,void *);
	__int64 _HandleDestroy();
	__int64 _OnAppBarMessage(tagCOPYDATASTRUCT *);
	__int64 _OnCreate();
	__int64 _OnCreateAsync();
	__int64 _OnSessionChange(unsigned __int64,__int64);
	__int64 _RegisterHotkey(HWND__ *,int);
	__int64 _ShakeTriggered(_SHOWDESKTOPTRIGGER,HWND__ *);
	__int64 _ShortcutRegisterHotkey(HWND__ *,unsigned short,unsigned short);
	__int64 _ShortcutUnregisterHotkey(HWND__ *,unsigned short);
	__int64 _UpdateHotkey(HWND__ *,_ITEMIDLIST_ABSOLUTE const *,_ITEMIDLIST_ABSOLUTE const *);
	bool _StartParallelTasks(CTray::STARTUPTASK const *,int);
	int _AppBarNew(_TRAYAPPBARDATA *);
	int _AppBarOutsideOf(APPBAR const *,APPBAR const *);
	int _AppBarSetAutoHideBar(_TRAYAPPBARDATA *,HMONITOR__ *);
	int _DoExitExplorer(CTray::ExitExplorerReason);
	int _HotkeyAddCached(unsigned short,_ITEMIDLIST_ABSOLUTE *);
	int _HotkeyRemove(unsigned short);
	int _HotkeyRemoveCached(unsigned short);
	int _MinimizeAll(int,void *);
	int _RestoreWindowPositions(int,void *);
	long _ActivateWindowSwitcher();
	long _LoadInProc(void *,unsigned long);
	static CTray::STARTUPTASK const * const c_rgst;
	static __int64 RogueProgramFileDlgProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	static bool _IsDesktopInputContext();
	static bool _StartAfterDesktopSwitch(CTray *,unsigned long);
	static bool _StartDesktopApiSurface(CTray *,unsigned long);
	static bool _StartDesktopFinalTasks(CTray *,unsigned long);
	static bool _StartDesktopStartupApps(CTray *,unsigned long);
	static bool _StartFinalTasks(CTray *,unsigned long);
	static bool _StartImmersiveShell(CTray *,unsigned long);
	static bool _StartNothing(CTray *,unsigned long);
	static bool _StartNotifyApiSurfaceReady(CTray *,unsigned long);
	static bool _StartPrelaunchEdge(CTray *,unsigned long);
	static bool _StartSSO1(CTray *,unsigned long);
	static bool _StartSignalDesktopSwitch(CTray *,unsigned long);
	static bool _StartStartMenuShown(CTray *,unsigned long);
	static bool _StartTaskbarApiSurface(CTray *,unsigned long);
	static bool _StartWaitForDesktopVisuals(CTray *,unsigned long);
	static int CheckWndPosEnumProc(void *,void *);
	static int MonitorEnumProc(HMONITOR__ *,HDC__ *,tagRECT *,__int64);
	static int SavePosEnumProc(HWND__ *,__int64);
	static int TileEnumProc(HWND__ *,__int64);
	static int _SignalNamedEventOnce(void * *,unsigned short const *);
	static unsigned long MainThreadProc(void *);
	static unsigned long RunDlgThreadProc(void *);
	static unsigned long SyncThreadProc(void *);
	unsigned int _HotkeyGetFreeItemIndex();
	unsigned long _RunDlgThreadProc(tagRECT *);
	unsigned long _SyncThreadProc();
	virtual __int64 v_WndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	void _AppBarActivationChange(_TRAYAPPBARDATA *);
	void _AppBarGetTaskBarPos(_TRAYAPPBARDATA *);
	void _AppBarQueryPos(_TRAYAPPBARDATA *);
	void _AppBarRemove(_TRAYAPPBARDATA *);
	void _AppBarSetPos(_TRAYAPPBARDATA *);
	void _AppBarSubtractRect(APPBAR const *,tagRECT *);
	void _AppBarSubtractRects(HMONITOR__ *,tagRECT *);
	void _ApplyRemoteSettings(unsigned long);
	void _CheckForRogueProgramFile();
	void _CheckStagingAreaOnTimer();
	void _CreateTrayWindow();
	void _DeleteAppBar(int);
	void _DeleteHotkeyFromAllWindows(unsigned short);
	void _DoExitWindows(HWND__ *,int,unsigned long);
	void _EnumRudeWindowState();
	void _FireDesktopSwitchIfReady(DESKTOPSWITCHPREREQFLAGS);
	void _HandleChangeNotify(unsigned __int64,__int64);
	void _HandleCortanaSearchCommands(unsigned int);
	void _HandleDelayBootStuff();
	void _HandleDictationHotKey();
	void _HandleExpressiveInputHotKey();
	void _HandleGlobalHotkey(unsigned __int64,__int64);
	void _HandleHotKey(int);
	void _HandlePTPKeyboardAction(unsigned long,SETTING_IDENTIFIER);
	void _HandlePTPMouseAction(unsigned long);
	void _HandlePTPTap(SETTING_IDENTIFIER);
	void _HandlePowerStatus(unsigned int,unsigned __int64,__int64);
	void _HandlePrivateCommand(__int64);
	void _HandleSearchPaneHotkey(IMMERSIVE_HOT_KEY_ID);
	void _HandleStartupProgress(unsigned __int64,__int64);
	void _HandleToggleDesktop();
	void _HotkeyQueryCallback(HWND__ *,long,unsigned short);
	void _HotkeySearchFailed(long);
	void _InitializeStateTelemetry(bool,unsigned long);
	void _MessageLoop();
	void _OnDesktopState(__int64);
	void _PeekDesktop();
	void _RaiseDesktop(RAISEDESKTOPFLAGS);
	void _RegisterGlobalHotkeys();
	void _RunDlg();
	void _UnregisterForNotifications();
	void _UpdateDesktopAppRect(tagRECT const * const);
public:
	CTray();
	__int64 OnAppCommand(int);
	__int64 QueryUserNotificationState();
	bool _SkipNonKeyboardHotkey(unsigned __int64,__int64);
	int HotkeyAdd(unsigned short,_ITEMIDLIST_ABSOLUTE const *,_ITEMID_CHILD const *,int);
	int Init();
	int IsPresentationModeActive();
	long GetImmersiveShellServiceProvider(IServiceProvider * *,bool);
	long _HandleImmersiveHotKey(unsigned __int64,__int64);
	virtual CDSA<TrayCommon::TRAYMONITORINFO> const & GetMonitorInfos();
	virtual HWND__ * AppBarGetAutoHideBar(unsigned int,HMONITOR__ *);
	virtual HWND__ * GetWindow();
	virtual IServiceProvider * GetImmersiveShell();
	virtual TrayCommon::TRAYMONITORINFO * GetTrayMonitorInfo(HMONITOR__ *);
	virtual _DPA * GetAppBars();
	virtual bool IsDestroyed();
	virtual bool IsImmersiveShellStarted();
	virtual bool IsLauncherVisible();
	virtual bool IsModeImmersive();
	virtual bool IsProcessingDesktopRaise();
	virtual bool IsStuckRudeApp();
	virtual bool IsTabletModeEnabled();
	virtual bool IsTrayThreadStarting();
	virtual bool ShouldDeleteContextMenuUndo();
	virtual int AppBarSetAutoHideBar(HWND__ *,int,unsigned int,HMONITOR__ *);
	virtual int CanTileAnyWindows();
	virtual int RecomputeWorkArea(HWND__ *,HMONITOR__ *,tagRECT *);
	virtual long AddHotkey(unsigned short,_ITEMIDLIST_ABSOLUTE const *,_ITEMID_CHILD const *,int);
	virtual long DeskBandRegistrationChanged();
	virtual long EnsureImmersiveShellPointer();
	virtual long HideDeskBand(_GUID const &);
	virtual long IsDeskBandShown(_GUID const &);
	virtual long ModeChanged(IMM_SYSTEM_MODE);
	virtual long OnChangeNotify(long,_ITEMIDLIST_ABSOLUTE const *,_ITEMIDLIST_ABSOLUTE const *);
	virtual long OnRudeWindowStateChange(IImmersiveMonitor *,RudeWindowStateChangeFlags,HWND__ *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SendStateCaptureTelemetry(StateCapture::TelemetryStateCaptureType);
	virtual long ShowDeskBand(_GUID const &);
	virtual unsigned int GetContextMenuUndoResourceId();
	virtual unsigned long AddRef();
	virtual unsigned long HandleInComingCall(unsigned long,HTASK__ *,unsigned long,tagINTERFACEINFO *);
	virtual unsigned long MessagePending(HTASK__ *,unsigned long,unsigned long);
	virtual unsigned long Release();
	virtual unsigned long RetryRejectedCall(HTASK__ *,unsigned long,unsigned long);
	virtual void AppBarActivationChange2(HWND__ *,unsigned int);
	virtual void AppBarNotifyAll(HMONITOR__ *,unsigned int,HWND__ *,__int64);
	virtual void AsyncSaveSettings();
	virtual void CheckGDIHandleLimit();
	virtual void Command(unsigned int,__int64,tagRECT const *,bool);
	virtual void OnWaitCursorNotify(tagNMHDR const *);
	virtual void RecomputeAllWorkareas();
	virtual void RegisterForNotifications();
	virtual void RoamSettings();
	virtual void SaveTrayAndDesktop();
	virtual void SetIsLogoff(bool);
	virtual void SetWorkArea(tagRECT *,int);
	virtual void ShellInteractionComplete();
	virtual void StuckAppChange(HWND__ *,tagRECT const *,tagRECT const *,int);
	void CheckWindowPositions(unsigned __int64,__int64);
	void Cleanup();
	void HandleWindowDestroyed(HWND__ *);
	void SaveWindowPositions(unsigned int);
	void SendNavigationSettingsChange();
	void _HandleDisplayChange(HWND__ *,unsigned int,unsigned __int64,__int64);
};

struct CTrayAccessibilityPropertyServer
{
	static long ClearTrayItemManager(CTrayItemManager *);
	static long RegisterTrayItemManager(CTrayItemManager *);
	virtual long GetPropValue(unsigned char const *,unsigned long,_GUID,tagVARIANT *,int *);
};

class CTrayAnimationManager
{
	struct CUIAnimationVariablesDataBlock
	{
		long Unfreeze();
	};

	long _DestroyStoryboardFromAnimationVariable(IUIAnimationVariable *);
	long _StartAnimationHelper(IUnknown *,eANIMTYPE,ANIMDATA const *);
	long _StartCyclicAnimation(IUnknown *,eANIMTYPE,ANIMDATA const *);
	void _InitAnimationData();
public:
	CTrayAnimationManager();
	long RuntimeClassInitialize(ITrayComponentHost *);
	virtual ANIMDATA const & GetAnimationData(eANIMTYPE);
	virtual int HasAnyAnimation(IUnknown *,eANIMTYPE);
	virtual long AddPostUpdateNotificationCallback(ITaskListAnimationNotificationSink *);
	virtual long CanAnimate(eANIMTYPE);
	virtual long CancelAnimation(IUnknown *,eANIMTYPE,IUIAnimationVariable * *);
	virtual long CancelAnimations(IUnknown *,eANIMTYPE *,int);
	virtual long FinishAnimation(IUnknown *,eANIMTYPE);
	virtual long GetAnimationType(IUIAnimationStoryboard *,eANIMTYPE *);
	virtual long HasAnimation(IUnknown *,eANIMTYPE,int *);
	virtual long OnPostUpdate();
	virtual long OnPreUpdate();
	virtual long OnRenderingTooSlow(unsigned int);
	virtual long ProcessDeferredAnimationActions();
	virtual long ResetAnimationState();
	virtual long SetRenderFlag(unsigned long);
	virtual long SetUserPreferenceFlag(unsigned long,unsigned long);
	virtual long StartAnimation(IUnknown *,eANIMTYPE);
	virtual long StartAnimationEx(IUnknown *,eANIMTYPE,ANIMDATA const *);
};

class CTrayAppIdentity
{
	long WriteOptimalHIconToFile(unsigned short const *);
	long _DeleteAppIdentity();
	long _SetTitleFromAppExe(_GUID,unsigned short const *);
	virtual ~CTrayAppIdentity();
public:
	CTrayAppIdentity();
	long RuntimeClassInitialize(unsigned short const *,_GUID,unsigned short const *);
	virtual bool IsActivationEnabled();
	virtual long Create();
	virtual long Delete();
	virtual long GetAppId(unsigned short *,unsigned __int64);
	virtual long GetLogoFilePath(unsigned short *,unsigned long);
	virtual long SetActivationEnabled(bool);
	virtual long SetIcon(HICON__ *);
	virtual long SetTitle(unsigned short const *);
};

class CTrayAppIdentityResolver
{
	long _CreateTrayAppIdentity(CTrayItemIdentity const *,unsigned short const *,_GUID const &,void * *);
	long _OnTrayItemAdd(tagNOTIFYITEM const *);
	long _Register();
	long _Unregister();
	virtual ~CTrayAppIdentityResolver();
public:
	CTrayAppIdentityResolver();
	long GetAppIdentity(unsigned short const *,bool,ITrayAppIdentity * *);
	virtual long GetAppLogoFilePath(unsigned short const *,int,unsigned short *,unsigned long);
	virtual long Notify(unsigned long,tagNOTIFYITEM *);
};

class CTrayBalloonInfoTipManager
{
	__int64 _OnInfoTipMouseClick(int,int,int);
	__int64 _OnNotify(tagNMHDR *);
	__int64 _OnTimer(HWND__ *,unsigned int,unsigned __int64,__int64);
	bool _KillInfoTipTimer(unsigned __int64);
	bool _SetInfoTipTimer(unsigned __int64,unsigned int);
	int _CanShowBalloon(_TRAY_NOTIFICATION_BALLOON_BLOCKED_REASON *);
	static __int64 s_BalloonSubclassProc(HWND__ *,unsigned int,unsigned __int64,__int64,unsigned __int64,unsigned __int64);
	static int s_DeleteInfoItemCB(CTrayBalloonInfoTipManager::TNINFOITEM *,void *);
	unsigned int _GetQueueCount();
	unsigned long _GetBalloonWaitInterval(CTrayBalloonInfoTipManager::BALLOONEVENT);
	unsigned long _ShowBalloonTip(HICON__ *,unsigned long);
	void _DisableCurrentInfoTip(CTrayItem *,unsigned int,bool,bool);
	void _OnInfoTipSkipped(CTrayBalloonInfoTipManager::TNINFOITEM const *);
	void _OnInfoTipSkipped(CTrayItem *);
	void _OnTipClosed();
	void _OnWrenchClicked();
	void _PositionInfoTip();
	void _RemoveInfoTipFromQueue(CTrayItemIdentity &,int);
	void _SetInfoTip(CTrayItemIdentity &,unsigned short const *,unsigned short const *,unsigned long,bool,bool);
	void _ShowInfoTip(CTrayItemIdentity &,bool,bool,unsigned int);
public:
	CTrayBalloonInfoTipManager();
	long RuntimeClassInitialize(CTrayItemController *,ITrayInfoTipEvents *,HWND__ *,ITrayComponentHost *);
	virtual bool IsEnabled();
	virtual bool IsInfoTipShowing();
	virtual bool IsInfoTipShowing(CTrayItem const *);
	virtual long Close(CTrayItem *,unsigned int);
	virtual long GetInfoTip(CTrayItemIdentity *);
	virtual long Initialize();
	virtual long Invalidate();
	virtual long Open(CTrayItem *,unsigned short const *,unsigned short const *,unsigned long,unsigned long);
	virtual long SetEnabled(bool);
	virtual long SetUserBusy(bool);
	virtual unsigned int GetInfoTipCount();
	virtual ~CTrayBalloonInfoTipManager();
};

class CTrayBandSite
{
protected:
	CTrayBandSite(ITrayComponentHost *);
	long _AddPeopleBand();
	long _AddRequiredBands();
	virtual ~CTrayBandSite();
	void _BroadcastExec(_GUID const *,unsigned long,unsigned long,tagVARIANT *,tagVARIANT *);
public:
	ICatBandManager * GetCatBandManager();
	IContextMenu3 * GetContextMenu();
	int HandleMessage(HWND__ *,unsigned int,unsigned __int64,__int64,__int64 *);
	virtual long AddBand(IUnknown *);
	virtual long CreateInstance(IUnknown *,_GUID const &,void * *);
	virtual long EnumBands(unsigned int,unsigned long *);
	virtual long Exec(_GUID const *,unsigned long,unsigned long,tagVARIANT *,tagVARIANT *);
	virtual long GetBandObject(unsigned long,_GUID const &,void * *);
	virtual long GetBandSiteInfo(tagBANDSITEINFO *);
	virtual long LockServer(int);
	virtual long QueryBand(unsigned long,IDeskBand * *,unsigned long *,unsigned short *,int);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long QueryStatus(_GUID const *,unsigned long,_tagOLECMD * const,_tagOLECMDTEXT *);
	virtual long RemoveBand(unsigned long);
	virtual long SetBandSiteInfo(tagBANDSITEINFO const *);
	virtual long SetBandState(unsigned long,unsigned long,unsigned long);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CTrayButton
{
	__int64 _OnNotify(__int64);
	__int64 _PositionTooltip();
	bool _PointInClientRect(tagPOINT);
	long _CreateWindow(HWND__ *);
	long _OnContextMenu(ClickDevice,tagPOINT);
	long _OnKeyDown(unsigned __int64);
	long _OnKeyUp(unsigned __int64);
	virtual __int64 v_WndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	void _CloseTheme();
	void _ManageTooltip(CTrayButton::TrayButtonTooltipEvent);
	void _OnCreate();
	void _OnLButtonDown(ClickDevice);
	void _OnLButtonUp(__int64,ClickDevice,bool);
	void _OnMouseLeave();
	void _OnMouseMove(__int64);
	void _OnSetFocus(bool);
	void _OpenTheme();
	void _ShowTooltip(bool);
protected:
	ClickDevice _GetMessageDeviceType();
	virtual WTL::CSize v_AdjustSizeForPaint(WTL::CSize);
	virtual __int64 v_OnGetObject(unsigned __int64);
	virtual __int64 v_OnUserMessage(HWND__ *,unsigned int,unsigned __int64,__int64);
	virtual bool v_IsAllowedByPolicy();
	virtual bool v_IsEnabled();
	virtual bool v_IsPressed();
	virtual bool v_IsPressedOnKeyUp();
	virtual bool v_OnSize(unsigned __int64,tagSIZE);
	virtual int v_GetAccRole();
	virtual int v_GetAccState();
	virtual long v_CycleHotItem(int);
	virtual long v_GetTitleText(unsigned short *,unsigned __int64);
	virtual long v_GetTooltipText(HINSTANCE__ * *,unsigned short * *,unsigned short *,unsigned __int64);
	virtual long v_Initialize();
	virtual long v_OnClick(ClickDevice);
	virtual long v_OnContextMenu(ClickDevice,tagPOINT);
	virtual long v_PerformDelayedBootInit();
	virtual long v_PerformDelayedInit();
	virtual long v_Position(tagPOINT,bool);
	virtual long v_UpdateTheme();
	virtual void v_GetMinimumFitSize(tagSIZE *);
	virtual void v_OnAutoHideChange();
	virtual void v_OnCustomPressAndHold(ClickDevice);
	virtual void v_OnDisplayStateChange(bool);
	virtual void v_OnPointerEnter();
	virtual void v_OnPointerLeave();
	virtual void v_OnTimer(unsigned __int64);
	virtual void v_Paint(HDC__ *);
	virtual void v_ShowTooltip(bool);
	virtual void v_ShowWindow(int);
	virtual void v_UIStateChanged(bool);
	virtual void v_Uninitialize();
	void _GetAnimationStates(bool *,bool *);
public:
	CTrayButton(CTrayButtonImage *,ITrayComponentHost *,unsigned int,ButtonOptions,unsigned short const *);
	bool HasFocus();
	long Initialize(HWND__ *);
	long Position(unsigned int,tagPOINT,bool);
	long UpdateTheme();
	virtual long OnStoryboardStatusChanged(IUIAnimationStoryboard *,__MIDL___MIDL_itf_UIAnimation_0000_0002_0001,__MIDL___MIDL_itf_UIAnimation_0000_0002_0001);
	virtual long OnStoryboardUpdated(IUIAnimationStoryboard *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	void GetMinimumFitSize(tagSIZE *);
	void RecalculateEnabledState();
	void SetAutoHide(unsigned int);
	~CTrayButton();
};

struct CTrayButtonAccessibleWrapper
{
	virtual long accDoDefaultAction(tagVARIANT);
	virtual long get_accKeyboardShortcut(tagVARIANT,unsigned short * *);
	virtual long get_accRole(tagVARIANT,tagVARIANT *);
	virtual long get_accState(tagVARIANT,tagVARIANT *);
};

class CTrayButtonBitmap
{
	long _UpdateButtonBitmap();
public:
	CTrayButtonBitmap(TrayButtonResources const *,ITrayComponentHost *);
	virtual bool UseHighContrastPlate(HWND__ *);
	virtual long DrawImage(HDC__ *,tagSIZE,bool,bool);
	virtual long GetImageSize(tagSIZE *);
	virtual long OnWindowRectChanged(tagRECT *);
	~CTrayButtonBitmap();
};

class CTrayButtonIcon
{
	long _UpdateButtonIcon();
public:
	CTrayButtonIcon(HINSTANCE__ *,unsigned short const *,ITrayComponentHost *,bool);
	long SetIcon(HINSTANCE__ *,unsigned short const *);
	virtual bool UseHighContrastPlate(HWND__ *);
	virtual long DrawImage(HDC__ *,tagSIZE,bool,bool);
	virtual long GetImageSize(tagSIZE *);
	virtual long OnWindowRectChanged(tagRECT *);
	~CTrayButtonIcon();
};

struct CTrayButtonImage
{
	virtual bool UseHighContrastPlate(HWND__ *);
	virtual long GetImageSize(tagSIZE *);
	virtual long OnWindowRectChanged(tagRECT *);
	virtual void SetWindow(HWND__ *);
};

class CTrayChevron
{
	__int64 _ChevronButtonWndProc(HWND__ *,unsigned int,unsigned __int64,__int64,unsigned __int64);
	int _OnLButtonUp(__int64);
	int _OnMouseLeave();
	int _OnMouseMove(__int64);
	int _OnPaint(HWND__ *);
	long _EnsureTheme();
	static __int64 s_ChevronButtonWndProc(HWND__ *,unsigned int,unsigned __int64,__int64,unsigned __int64,unsigned __int64);
	void _CloseTheme();
	void _GetAnimationValues(int *);
	void _OnChevronFocus(bool);
	void _OnPaintInternal(HWND__ *,HDC__ *);
	void _SetPointerHover(bool);
public:
	CTrayChevron();
	__int64 HandleCustomDraw(tagNMCUSTOMDRAWINFO *);
	long RuntimeClassInitialize(HWND__ *,ITaskListAnimation *,ITrayComponentHost *);
	virtual long OnStoryboardStatusChanged(IUIAnimationStoryboard *,__MIDL___MIDL_itf_UIAnimation_0000_0002_0001,__MIDL___MIDL_itf_UIAnimation_0000_0002_0001);
	virtual long OnStoryboardUpdated(IUIAnimationStoryboard *);
	virtual ~CTrayChevron();
	void ActivateChevronTrackingTooltip(bool);
	void HandleChevronCommand(unsigned int);
	void MakeChevronButtonAccessible();
	void UpdateChevronState();
};

class CTrayDropTarget
{
	void _NotifyTaskBandDragEnter(_POINTL const &);
public:
	virtual long DragEnter(IDataObject *,unsigned long,_POINTL,unsigned long *);
	virtual long DragLeave();
	virtual long DragOver(unsigned long,_POINTL,unsigned long *);
};

struct CTrayIconImagelist
{
	bool CheckAndResizeImages(unsigned int);
	void AddItemManager(CTrayItemManager *);
	~CTrayIconImagelist();
};

class CTrayIconList
{
	unsigned int _InsertAt(CTrayIconListNode *,unsigned int);
public:
	unsigned int Find(CTrayItem const *,bool);
	unsigned int Find(TNPersistStreamData const *,bool);
	unsigned int InsertAt(CTrayItem const *,unsigned int);
	unsigned int InsertAt(TNPersistStreamData const *,unsigned int);
	unsigned int InsertDuringLoad(TNPersistStreamData const *);
	void RemoveAt(unsigned int);
	void UpdateIndices(int (*)(unsigned int,void const *,void *),void *,int (*)(unsigned int,void const *,void *),void *);
};

class CTrayInfoTipNotifyHandler
{
protected:
	virtual long _SendNotifyMessage(CTrayItemIdentity const *,unsigned int);
	virtual long _SendNotifyMessage(CTrayItemIdentity const *,unsigned int,int,int);
public:
	CTrayInfoTipNotifyHandler(ITrayComponentHost *);
	virtual long OnInfoTipActivated(CTrayItemIdentity const *,int,int);
	virtual long OnInfoTipClosed(CTrayItemIdentity const *);
	virtual long OnInfoTipClosing(CTrayItemIdentity const *);
	virtual long OnInfoTipShowing(CTrayItemIdentity const *);
	virtual long OnInfoTipTimeout(CTrayItemIdentity const *);
	virtual ~CTrayInfoTipNotifyHandler();
};

class CTrayInputIndicator
{
	CTrayInputIndicator(ITrayComponentHost *);
	HFONT__ * _CreateTextFont(CTrayInputIndicator::ACTIVEPROFILE_INFO *);
	HFONT__ * _GetSystemDefaultMsgFont();
	HWND__ * _CreateTooltip(HWND__ *);
	HWND__ * _GetTooltipWnd(HWND__ *);
	__int64 _IMEModeWndProc(HWND__ *,unsigned int,unsigned __int64,__int64,unsigned __int64);
	__int64 _InputIndicatorWndProc(HWND__ *,unsigned int,unsigned __int64,__int64,unsigned __int64);
	__int64 _OnCreate(HWND__ *,unsigned __int64,__int64);
	__int64 _OnIMEModeLButtonDown(HWND__ *,unsigned __int64,__int64);
	__int64 _OnIMEModeMouseLeave(HWND__ *,unsigned __int64,__int64);
	__int64 _OnIMEModeMouseMove(HWND__ *,unsigned __int64,__int64);
	__int64 _OnIMEModeRButtonUp(HWND__ *,unsigned __int64,__int64);
	__int64 _OnInitIndicatorShowState(HWND__ *,unsigned __int64,__int64);
	__int64 _OnInputIndicatorLButtonDown(HWND__ *,unsigned __int64,__int64);
	__int64 _OnInputIndicatorMouseLeave(HWND__ *,unsigned __int64,__int64);
	__int64 _OnInputIndicatorMouseMove(HWND__ *,unsigned __int64,__int64);
	__int64 _OnNCDestroy(HWND__ *,unsigned __int64,__int64);
	__int64 _OnPaintHostWnd(HWND__ *,unsigned int,unsigned __int64,__int64);
	__int64 _OnPaintIMEMode(HWND__ *,unsigned __int64,__int64);
	__int64 _OnPaintInputIndicator(HWND__ *,unsigned __int64,__int64);
	__int64 _OnThemeChanged();
	__int64 _OnTimer(HWND__ *,unsigned __int64,__int64);
	__int64 _PositionTooltip(HWND__ *);
	__int64 _ResizeChildWindows();
	bool _CopyProtectedString(unsigned short const *,unsigned short *,int);
	bool _IsFontChanged(CTrayInputIndicator::ACTIVEPROFILE_INFO *);
	bool _IsNoIMEModeIME(unsigned short const *,unsigned short const *);
	bool _IsSameIME(__MIDL___MIDL_itf_inputswitchserver_0000_0000_0002 const *);
	long LaunchTroubleshooter();
	long ShowModalPopupMenu(HWND__ *,tagPOINT const &);
	long _AdjustInputIndicatorShowState(bool);
	long _CreateChildWindows(HWND__ *);
	long _FormatInputIndicatorTooltipText(unsigned short const *,unsigned short const *);
	long _GetNoIMEModeIMEList();
	long _RegisterInputSwitch();
	long _SetAccessibilityString(HWND__ *,unsigned long,unsigned long,_GUID const *,unsigned short const *);
	long _UpdateImeModeItem(__MIDL___MIDL_itf_inputswitchserver_0000_0000_0003 const *);
	long _UpdateIndicatorInfo(__MIDL___MIDL_itf_inputswitchserver_0000_0000_0002 const *);
	static CTrayInputIndicator * s_pInstance;
	static __int64 s_IMEModeWndProc(HWND__ *,unsigned int,unsigned __int64,__int64,unsigned __int64,unsigned __int64);
	static __int64 s_InputIndicatorWndProc(HWND__ *,unsigned int,unsigned __int64,__int64,unsigned __int64,unsigned __int64);
	static void s_WinEventProc(HWINEVENTHOOK__ *,unsigned long,HWND__ *,long,long,unsigned long,unsigned long);
	tagSIZE _CalcChildWindowMinSize(TrayInputIndicatorChildWindowIdentity,bool);
	void _CleanUpIMEData(__MIDL___MIDL_itf_inputswitchserver_0000_0000_0003 *);
	void _CleanUpProfileData(CTrayInputIndicator::ACTIVEPROFILE_INFO *);
	void _DoPaintIMEMode(HDC__ *,tagRECT *);
	void _DoPaintInputIndicator(HDC__ *,tagRECT *);
	void _DrawIcon(HDC__ *,HICON__ *,int,int,tagRECT);
	void _DrawInputIndicator(HDC__ *,tagRECT);
	void _DrawText(CTrayInputIndicator::ACTIVEPROFILE_INFO,HDC__ *,tagRECT);
	void _GetAnchor(HWND__ *,tagPOINT *);
	void _GetExcludeRect(tagRECT *);
	void _GetTextExtent(HDC__ *,unsigned short const *,int,CTrayInputIndicator::TEXTTYPE,tagRECT *);
	void _OpenThemeData();
	void _SetAccessibilityStringForModeIcon(unsigned short const *);
	void _ShowDisableIconForNonactiveTSF();
	void _ShowIndicator(bool);
	void _ShowTooltip(HWND__ *,bool);
	void _UpdateIMEModeUIState(unsigned int);
	void _UpdateInputIndicatorUIState(unsigned int);
	void _UpdateTooltipText(HWND__ *,unsigned short *);
	void _WinEventProc(HWINEVENTHOOK__ *,unsigned long,HWND__ *,long,long,unsigned long,unsigned long);
	~CTrayInputIndicator();
protected:
	virtual __int64 v_WndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
public:
	bool IsChildFocused(TrayInputIndicatorChildWindowIdentity);
	bool IsChildVisible(TrayInputIndicatorChildWindowIdentity);
	static HWND__ * Create(HWND__ *,unsigned int,HINSTANCE__ *,ITrayComponentHost *,CTrayInputIndicator * *);
	static unsigned short const * const s_szTrayIndicator;
	virtual long OnContextFlagsChange(unsigned long);
	virtual long OnImeModeItemUpdate(__MIDL___MIDL_itf_inputswitchserver_0000_0000_0003 const *);
	virtual long OnModalitySelected(__MIDL___MIDL_itf_inputswitchserver_0000_0000_0005);
	virtual long OnProfileCountChange(unsigned int,int);
	virtual long OnShowHide(int,int,int);
	virtual long OnTouchKeyboardManualInvoke();
	virtual long OnUpdateProfile(__MIDL___MIDL_itf_inputswitchserver_0000_0000_0002 const *);
	virtual long OnUpdateTsfFloatingFlags(unsigned long);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	void ClearChildFocus();
	void DoChildClickAction(TrayInputIndicatorChildWindowIdentity);
};

struct CTrayInteractionHandler
{
	CTrayInteractionHandler();
	virtual long OnContextMenu(CTrayItemIdentity const *,int,int,tagINPUT_MESSAGE_DEVICE_TYPE);
	virtual long OnInvoke(CTrayItemIdentity const *,int,int,tagINPUT_MESSAGE_DEVICE_TYPE);
	virtual long OnTooltip(CTrayItemIdentity const *,bool,int,int);
};

class CTrayItem
{
	int _CheckIconState(ICONSTATEFLAG);
	unsigned long _GetStateFlag(ICONSTATEFLAG);
	void _SetIconState(ICONSTATEFLAG,int);
public:
	int IsDuplicate();
	int IsIdentityCached();
	int ShouldSaveIcon();
	long GetApplicationIdentity(unsigned short *,unsigned __int64,bool *);
	static bool IsScaGuid(_GUID const &);
	static long IsSystemAppIdentity(IApplicationResolver2 *,unsigned short const *,bool *);
	void AddLinkedSetting(CTrayItem *);
	void ApplyUserPreference();
	void GetItemGuidAsString(unsigned short *,int);
	void UnlinkSetting();
};

struct CTrayItemController
{
	__int64 FindItemManager(CTrayItemIdentity const *,CTrayItemManager * *);
	long GetTrayItemRect(CTrayItemIdentity *,tagRECT *);
	long LookupTrayItem(CTrayItemIdentity const *,CTrayItem * *);
	void SetItemManager(CTrayItemManager *,TrayItemManagerType);
};

struct CTrayItemIdentity
{
	CTrayItemIdentity(CTrayItem const *);
	CTrayItemIdentity(tagNOTIFYITEM const *);
	_GUID GetGuid();
	bool operator!=(CTrayItemIdentity const &);
	bool operator==(CTrayItemIdentity const &);
	long GetApplicationIdentity(unsigned short *,unsigned __int64,bool *);
	long GetExeName(unsigned short *,unsigned __int64);
	void Set(CTrayItem const *);
};

class CTrayItemManager
{
	CTrayItem * GetItemData(__int64,bool);
	__int64 _GetItemCountHelper(int,int);
	int _UpdateIndexCB(unsigned int,void const *);
public:
	HICON__ * GetIcon(__int64);
	__int64 FindItemAssociatedWithGuid(_GUID);
	__int64 FindItemAssociatedWithHwndUid(HWND__ *,unsigned int);
	__int64 GetToolbarFirstVisibleItem(int);
	__int64 MapUniqueIndexToItemIndex(__int64);
	int CreateToolbar(HWND__ *,HMENU__ *,HINSTANCE__ *,unsigned int,tagSIZE,ITrayComponentHost *);
	int GetTBBtnImage(__int64,int);
	int GetTrayItem(__int64,CNotificationItem *,int *);
	int HasTemporaryBlankButton();
	int SetTBBtnStateHelper(__int64,unsigned char,__int64);
	int UpdateImage(__int64,HICON__ *,int,int *);
	static __int64 TrayManagerSubclassProc(HWND__ *,unsigned int,unsigned __int64,__int64,unsigned __int64,unsigned __int64);
	static int s_UpdateIndexCB(unsigned int,void const *,void *);
	void InitOrderList();
	void InitTooltip(int);
	void InsertTemporaryBlankButton();
	void OnImageRemoved(int);
	void RebuildOrderList();
	void SetToolbarHotItem(unsigned int,int);
	void UpdateItemLastTouchedTime(__int64);
};

class CTrayItemRegistry
{
	SCA_OVERRIDE _PromoteOEMIcons(CTrayIconList *,unsigned short *,unsigned int);
	bool _IsIconLastUseValid(unsigned short,unsigned short);
	bool _IsLegacyExplorerIcon(TNPersistStreamData const * const);
	bool _SaveIconsToRegStream();
	int _FillPersistData(TNPersistStreamData *,CTrayItem *,HICON__ *);
	int _LoadIconsFromRegStream(unsigned long);
	int _UpdateIndexCB(unsigned int,void const *);
	long _LoadTrayItemStream(IStream *,int (*)(__int64,void *,TRAYCBARG,TRAYCBRET *),void *);
	long _SaveTrayItemStream(IStream *,int (*)(__int64,void *,TRAYCBARG,TRAYCBRET *),void *);
	static int _DestroyIconInfoCB(TNPersistStreamData *,void *);
	static int _IsIdentityCached(TNPersistStreamData const *);
	void UpdateImageIndices(__int64);
	void _DestroyPastItemsIconList();
	void _InitializeUserSettings(CTrayIconList *);
	void _QueryRegValue(HKEY__ *,unsigned short const *,unsigned __int64 *,unsigned __int64);
	void _QueryRegValue(HKEY__ *,unsigned short const *,unsigned long *,unsigned long);
	void _ReadPromotedIconCache();
	void _RestorePersistentIconSettings(TNPersistStreamData const *,CTrayItem *);
public:
	HICON__ * DuplicateAndSizeIcon(HICON__ *);
	__int64 CheckAndRestorePersistentIconSettings(CTrayItem *,unsigned short const *,HICON__ *);
	__int64 SetPastItemPreference(tagNOTIFYITEM const *,unsigned long,CTrayIconList *,CTrayIconList *);
	int AddToPastItems(CTrayItem *,HICON__ *,CTrayIconList *);
	int CheckPromotedIconCache(_GUID const &);
	int DoesGUIDIconMatchPathOrIdentity(CTrayItem *,__int64);
	int DoesIconExistFromPreviousSession(CTrayItem const *,unsigned short const *,HICON__ *);
	int GetTrayItem(__int64,unsigned __int64,CNotificationItem *,int *);
	int IsInQuietPeriod();
	int SetIsAutoTrayEnabledInRegistry(int);
	static int CompareTooltips(unsigned short const *,unsigned short const *);
	static int s_UpdateIndexCB(unsigned int,void const *,void *);
	static void _DecodeStreamData(TNPersistStreamData *);
	static void _EncodeStreamData(TNPersistStreamData *);
	unsigned int FindItemInOrderList(__int64,CTrayIconList const *,bool);
	void DeletePastItem(__int64,CTrayIconList *);
	void ForceUserStartTimeReload();
	void InitRegistryValues(unsigned int,int (*)(__int64,void *,TRAYCBARG,TRAYCBRET *),void *,CTrayIconList *);
	void InitTrayItemStream(unsigned long,int (*)(__int64,void *,TRAYCBARG,TRAYCBRET *),void *,CTrayIconList *);
	~CTrayItemRegistry();
};

class CTrayNotify
{
	bool _InferDragAndDropUserPreferences(CTrayItem *);
	int RegisterForPopups();
	long _EnsureTabletModeNotifications();
	static int _CompareNotifyCBNode(NOTIFYCBNODE *,NOTIFYCBNODE *,__int64 *);
	static unsigned long s_dwPopupCount;
	static void _ForceDragToToolbar(HWND__ *,tagPOINT *);
	static void s_WinEventProc(HWINEVENTHOOK__ *,unsigned long,HWND__ *,long,long,unsigned long,unsigned long);
	tagSIZE _HaveWindowCalculateMinSize(HWND__ *,int,int);
	unsigned __int64 _CalculateAnchorPointWPARAMIfNecessary(unsigned long,HWND__ * const,int);
	void _AddWaitThread(void *);
	void _CacheMousePacket(HWND__ *,unsigned int,unsigned __int64,__int64);
	void _CreateDragImage();
	void _FlushCachedMousePackets(bool);
	void _HandleNotifyIcon_Clicked(CTrayItem const *,unsigned long,bool,bool,HWND__ * const,int);
	void _HandleNotifyIcon_MouseEvent(CTrayItem const *,CTrayItemManager const *,HWND__ * const,int,unsigned int,tagPOINT,tagINPUT_MESSAGE_DEVICE_TYPE);
	void _HandleNotifyIcon_ShowContextMenu(CTrayItem const *,unsigned long,bool,HWND__ * const,int);
	void _HandleNotifyIcon_Tooltip(CTrayItem const *,CTrayItemManager const *,bool,HWND__ * const,int,tagPOINT *,tagINPUT_MESSAGE_DEVICE_TYPE);
	void _OnAbortDrag();
	void _OnDragContinue(tagPOINT,CTrayItemManager *);
	void _OnDragEnd();
	void _OnDragStart(tagPOINT);
	void _OnInfoTipClosed(CTrayItemIdentity const *);
	void _OnInfoTipShowing(CTrayItemIdentity const *);
	void _OnInfoTipTimeout(CTrayItemIdentity const *);
	void _SetDropLocation(CTrayItemManager *,__int64,int,TBINSERTMARK *);
	void _SetSystemIconForegroundColor(CTrayItemManager const *,unsigned int,CTrayItem const *,HICON__ *);
	void _SetSystemIconForegroundColor(CTrayItemManager const *,unsigned int,CTrayItem const *,HICON__ *,unsigned long);
	void _UpdateDragStartPosition();
	void _UpdateOverflowWindowButtonMetrics();
	void _UpdateTabletModeNotifications(bool);
protected:
	CTrayItem * _FindDuplicateIconInstance(CTrayItem const *,unsigned short const *,HICON__ *);
	CTrayItemManager * _GetItemManager(HWND__ *);
	CTrayItemManager * _GetItemManager(int);
	TRAYITEMPOS _TrayItemPos(CTrayItem *,TRAYEVENT,int *);
	__int64 _Destroy();
	__int64 _FindItemManager(CTrayItem const *,CTrayItemManager * *);
	__int64 _FindItemManager(_GUID const &,HWND__ *,unsigned int,CTrayItemManager * *);
	__int64 _HotItemAvailable(HOTITEM_ORDER,bool);
	__int64 _Notify(tagNMHDR *);
	__int64 _OnKeyDown(unsigned __int64,__int64);
	__int64 _OnNotifyIconToolbarMouseEvent(HWND__ * const,unsigned int,unsigned __int64,__int64);
	__int64 _OnTimer(unsigned __int64);
	__int64 _Paint(HDC__ *);
	__int64 _PostNotify(CTrayItem const *,unsigned int,unsigned long,HWND__ * const,int);
	__int64 _SendNotify(CTrayItem const *,unsigned int,unsigned long,HWND__ * const,int);
	__int64 _SetInfoTipData(_NOTIFYICONDATA32W *,CTrayItemManager *,CTrayItem *,__int64);
	__int64 _Size(int,int);
	__int64 _ToolbarWndProc(HWND__ *,unsigned int,unsigned __int64,__int64,unsigned __int64);
	__int64 _TrayNotifyInfo(_TRAYNOTIFYINFO *);
	bool _AllowPromotionOfTrayItemForInfoTip(CTrayItem *,CTrayItemManager *);
	bool _HotItemAdvance(HOTITEM_ORDER,bool);
	bool _HotItemChange(HOTITEM_ORDER,HOTITEM_ORDER,__int64);
	bool _HotItemNavigate(HWND__ *,bool);
	bool _Notify(unsigned int,CNotificationItem *,bool);
	int _AllowOverflowAutohide();
	int _GetTrayItemCB(__int64,TRAYCBARG,TRAYCBRET *);
	int _IsIconVisible(CTrayItemManager const *,__int64);
	int _PlaceItem(CTrayItem *,TRAYEVENT);
	int _SetRedraw(int);
	int _SystemPromoteIcon(CTrayItem *,int);
	int _TrayItemLoadedCB(__int64,TRAYCBARG,TRAYCBRET *);
	int _TrySystemPromoteIcon(CTrayItem *);
	int _UpdateChevronState(int,int);
	int _UpdateToolbarOwnership(CTrayItemManager *,__int64);
	long _Create(HWND__ *);
	long _DeleteNotify(CTrayItemManager *,_GUID const &,__int64,int,int,CTrayNotify::DELETE_REASON);
	long _InsertNotify(_TRAYNOTIFYDATAW * const);
	long _ModifyNotify(CTrayItemManager *,_NOTIFYICONDATA32W *,__int64,int);
	long _MoveItemToToolbar(CTrayItemManager *,CTrayItem *,__int64,CTrayItemManager *,__int64,int);
	long _TrayNotifyIcon(_TRAYNOTIFYDATAW *,int *);
	static __int64 s_ToolbarWndProc(HWND__ *,unsigned int,unsigned __int64,__int64,unsigned __int64,unsigned __int64);
	static bool GetHotItemNavigationDirection(unsigned __int64);
	static int s_GetTrayItemCB(__int64,void *,TRAYCBARG,TRAYCBRET *);
	static int s_TrayItemLoadedCB(__int64,void *,TRAYCBARG,TRAYCBRET *);
	unsigned int _GetAccumulatedTime(CTrayItem *);
	virtual __int64 OnOverflowCommand(HWND__ * const,int,HWND__ * const,unsigned int);
	virtual __int64 OnOverflowNotify(tagNMHDR * const);
	virtual __int64 v_WndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	virtual void OnOverflowEscapeKey();
	virtual void OnOverflowForceHide();
	virtual void OnOverflowKillFocus();
	void _ActivateTrayItemManagerTooltips(bool);
	void _CheckForHiddenSCAIcon(_NOTIFYICONDATA32W *,CTrayItem *);
	void _DeleteWaitThread(void *,bool);
	void _GetNotifyIconToolbarButtonMetrics(tagSIZE *,tagSIZE *);
	void _InitTrayIconImageList(unsigned int);
	void _NotifyCallback(CTrayItemManager const *,unsigned long,__int64,__int64);
	void _OnBusyStateChange(bool,bool);
	void _OnCommand(HWND__ * const,int,HWND__ * const,unsigned int);
	void _OnDisplayChange();
	void _OnSizeChanged(int);
	void _OnSysChange(unsigned int,unsigned __int64,__int64);
	void _OpenTheme();
	void _PostCloseItemMsg(tagNOTIFYITEM const *);
	void _RefreshIconsInImageListOnDPIChange();
	void _ResizeOnIconChange();
	void _ResizeOnIconChange(CTrayItemManager const *);
	void _SetChildControlsTheme();
	void _SetCursorPos(HWND__ *,__int64);
	void _SetUsedTime();
	void _SizeWindows(int,int,tagRECT *,bool,bool);
	void _TickleForTooltip(CNotificationItem *);
	void _ToggleDemotedMenu(int);
	void _ToggleTrayItems(int);
	void _UpdateLinkedIconSettings(CTrayItem const *);
	void _UpdatePastItemsOnAutoTraySettingChange(int);
	void _UpdateTaskbarLoc(unsigned int);
	void _UpdateWindowsOnTaskbar();
public:
	CTrayNotify(ITrayComponentHost *);
	HWND__ * TrayNotifyCreate(HWND__ *,unsigned int,HINSTANCE__ *);
	__int64 HandleScaIconMessage(SCAICONSTATEDATA const *);
	int CancelDrag();
	long Initialize();
	long LookupTrayItem(unsigned short const *,unsigned int,CTrayItem * *);
	virtual long DoAction(tagNOTIFYITEM const *,tagNOTIFYITEMACTION);
	virtual long DoNotifyIconEvent(tagNOTIFYITEM const *,__MIDL___MIDL_itf_shpriv_0000_0032_0001,unsigned long,tagPOINT,unsigned long);
	virtual long EnableAutoTray(int);
	virtual long OnInfoTipActivated(CTrayItemIdentity const *,int,int);
	virtual long OnInfoTipClosed(CTrayItemIdentity const *);
	virtual long OnInfoTipClosing(CTrayItemIdentity const *);
	virtual long OnInfoTipShowing(CTrayItemIdentity const *);
	virtual long OnInfoTipTimeout(CTrayItemIdentity const *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long RegisterCallback(INotificationCB *,unsigned long *);
	virtual long SendStateCaptureTelemetry(StateCapture::TelemetryStateCaptureType);
	virtual long SetPreference(tagNOTIFYITEM const *);
	virtual long UnregisterCallback(unsigned long);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual void OnArrowKeyNavigation(bool);
	virtual void OnMinimumSizeChanged();
	void OnDigitizerStatusChanged();
	void SetTouchpadButtonEnabled(int);
	~CTrayNotify();
};

class CTrayOverflow
{
	__int64 _OnPaint(HDC__ *);
	bool _GetMaxSize(tagSIZE *);
	static unsigned short const * const s_szClassName;
	tagSIZE _SizeToolbar(int,bool *);
	virtual __int64 v_WndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	void _CloseTheme();
	void _EnsureBorder(HWND__ *);
	void _MakeAccessible();
	void _PositionWindow();
	void _ShowClippedBalloonMsg(bool);
	void _UpdateColors();
	void _UpdateTheme();
public:
	CTrayOverflow();
	bool SizeWindows();
	int IsPointInWindow(tagPOINT);
	long RuntimeClassInitialize(HWND__ *,TrayOverflowEvents *,ITaskListAnimation *,ITrayComponentHost *);
	virtual long OnStoryboardStatusChanged(IUIAnimationStoryboard *,__MIDL___MIDL_itf_UIAnimation_0000_0002_0001,__MIDL___MIDL_itf_UIAnimation_0000_0002_0001);
	virtual long OnStoryboardUpdated(IUIAnimationStoryboard *);
	void GetButtonMetrics(tagSIZE *,tagSIZE *);
	void Show(int,int);
};

class CTraySearchControl
{
	HFONT__ * _LoadGlyphFont(HMONITOR__ *);
	SearchBoxGlyphResourceMap const * _ChooseGlyphResourceMap();
	__int64 _SubclassButtonWndProc(HWND__ *,unsigned int,unsigned __int64,__int64,unsigned __int64);
	__int64 _WndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	bool _IsTraySearchWidthSupported();
	long _IsTraySearchWide(bool *);
	long _ShowPane(unsigned short const *,unsigned short const *,unsigned short const *);
	long _UpdateButtonBitmap();
	static __int64 s_SubclassButtonWndProc(HWND__ *,unsigned int,unsigned __int64,__int64,unsigned __int64,unsigned __int64);
	static __int64 s_SubclassEditWndProc(HWND__ *,unsigned int,unsigned __int64,__int64,unsigned __int64,unsigned __int64);
	static __int64 s_SubclassToolBarWndProc(HWND__ *,unsigned int,unsigned __int64,__int64,unsigned __int64,unsigned __int64);
	void _AddButtonsToToolBar();
	void _GetCortanaGlyphSize(tagSIZE *);
	void _PositionChildWindows();
	void _SetToolbarImageLists();
	void _UpdateActualWindowVisibility();
	void _UpdateAndShowSpeechButton();
	void _UpdateFlightFeatureStates();
	void _UpdateTextFont(bool);
protected:
	static __int64 s_WndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
public:
	CTraySearchControl(ITrayComponentHost *,CRefCountedObject<CortanaEnabledState> *);
	bool CanShowSearchBoxContextMenuItem(unsigned long);
	bool HasMicFocus();
	bool HasSearchFocus();
	bool IsEnabled();
	bool IsMicEnabled();
	long Initialize(HWND__ *);
	long SetCueText();
	long UpdatePosition(tagPOINT);
	void GetDesiredSize(tagSIZE *);
	void HandleSearchSettingUpdate();
	void RecalculateEnabledState();
	void SetMicFocus();
	void ShowWindow(bool);
	~CTraySearchControl();
};

class CTraySendNotifyHandler
{
protected:
	virtual long _SendNotifyMessage(CTrayItemIdentity const *,unsigned int);
	virtual long _SendNotifyMessage(CTrayItemIdentity const *,unsigned int,int,int);
};

struct CTrayStatic
{
	CTrayStatic();
};

class CTrayToastActivator
{
	long ActivateTrayNotification(unsigned short const *);
public:
	virtual long Activate(unsigned short const *,unsigned short const *,NOTIFICATION_USER_INPUT_DATA const *,unsigned long);
};

class CTrayToastInfoTip
{
	long _CloseInfoTip(unsigned int);
	long _RegisterEvents();
	long _RemoveToastWithTag(unsigned long);
	long _SetNotificationLaunchArguments(Windows::Data::Xml::Dom::IXmlDocument *);
	long _SetToastTag(Windows::UI::Notifications::IToastNotification *,unsigned long);
	void _UnregisterEvents();
public:
	CTrayToastInfoTip();
	long RuntimeClassInitialize(CTrayItemIdentity const *,ITrayAppIdentity *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned long,ITrayInfoTipEvents *);
	virtual long Close(unsigned int);
	virtual long GetIdentity(CTrayItemIdentity *);
	virtual long Invoke(Windows::UI::Notifications::IToastNotification *,IInspectable *);
	virtual long Invoke(Windows::UI::Notifications::IToastNotification *,Windows::UI::Notifications::IToastDismissedEventArgs *);
	virtual long Invoke(Windows::UI::Notifications::IToastNotification *,Windows::UI::Notifications::IToastFailedEventArgs *);
	virtual long Open();
	virtual ~CTrayToastInfoTip();
};

class CTrayToastInfoTipManager
{
	long _AddMarginsToBitmap(_MARGINS,unsigned int,unsigned int,IWICBitmapSource *,IWICBitmap * *);
	long _AppendInfoTip(ITrayInfoTip *);
	long _GetTrayIconFileName(unsigned short *,unsigned __int64);
	long _WriteHIconToPngFile(HICON__ *,unsigned short const *);
	long _WriteToastIconToFile(HICON__ *,unsigned long,unsigned short const *);
public:
	CTrayToastInfoTipManager();
	virtual bool IsEnabled();
	virtual bool IsInfoTipShowing();
	virtual bool IsInfoTipShowing(CTrayItem const *);
	virtual long Close(CTrayItem *,unsigned int);
	virtual long GetInfoTip(CTrayItemIdentity *);
	virtual long GetTrayAppResolver(ITrayAppIdentityResolver * *);
	virtual long Initialize();
	virtual long Invalidate();
	virtual long Open(CTrayItem *,unsigned short const *,unsigned short const *,unsigned long,unsigned long);
	virtual long SetEnabled(bool);
	virtual long SetUserBusy(bool);
	virtual unsigned int GetInfoTipCount();
	virtual ~CTrayToastInfoTipManager();
};

class CWRLImpWndProc<CPearl>
{
protected:
	static __int64 s_WndProcBase(HWND__ *,unsigned int,unsigned __int64,__int64);
};

class CWRLImpWndProc<CShowDesktopButton>
{
protected:
	static __int64 s_WndProcBase(HWND__ *,unsigned int,unsigned __int64,__int64);
};

class CWRLImpWndProc<CTaskListThumbnailWnd>
{
protected:
	static __int64 s_WndProcBase(HWND__ *,unsigned int,unsigned __int64,__int64);
};

class CWRLImpWndProc<CTrayOverflow>
{
protected:
	static __int64 s_WndProcBase(HWND__ *,unsigned int,unsigned __int64,__int64);
};

class CWRLObjectWithGITSite
{
protected:
	Microsoft::WRL::ComPtr<IUnknown> _GetGITSitePtr();
	~CWRLObjectWithGITSite();
public:
	CWRLObjectWithGITSite();
	virtual long GetSite(_GUID const &,void * *);
	virtual long SetSite(IUnknown *);
};

struct CWaitOnRoamingEventTask
{
	static unsigned long s_Wait(void *);
};

class CWcmListener
{
protected:
	long _AddNetworkInterfaceMapEntry(_GUID const &,_WNF_STATE_NAME);
	long _GetWcmInterfaceProperty(_GUID const &,_INTERFACE_PROPERTIES *,WCM_INTERFACE_PROPERTIES *);
	long _NetworkInterfaceMapEntryMonitorSignalStrength(_GUID const &,_INTERFACE_PROPERTIES *,_WNF_STATE_NAME);
	long _SubscribeWnf(_WNF_CONTEXT *);
	static long s_WcmInterfaceChangeCallback(_WNF_STATE_NAME,unsigned long,_WNF_TYPE_ID *,void *,void const *,unsigned long);
	static unsigned long s_ProcessEvent(void *);
	static unsigned long s_WnfNotificationDeliveryThread(void *);
	void _DeliverWnfNotificationsForWcmInterfaceChange();
	void _EnqueueWnfNotificationForWcmInterfaceChange(unsigned long,_WCM_STATE_TYPE,_GUID const &,void const *,unsigned long);
	void _FireQueuedEvents();
	void _ProcessTetheringNotification(_TETHERING_AP_NOTIFICATION_DATA const &);
	void _ProcessWnfWcmInterfaceDetailChange(unsigned long,_WCM_WNF_INTERFACE_STATE *);
	void _ProcessWnfWcmInterfaceListChange(unsigned long,_WCM_WNF_INTERFACE_LIST *);
	void _ProcessWnfWcmSignalStrengthChange(unsigned long,_GUID const &,unsigned long);
	void _QueueEvent(EventType,_GUID const &,long);
	void _RemoveNetworkInterfaceMapEntry(std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const ,_INTERFACE_PROPERTIES> > > >);
	void _UpdateMap();
	void _UpdateNetworkInterfaceMapEntry(std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const ,_INTERFACE_PROPERTIES> > > >,_WCM_WNF_INTERFACE_STATE *);
	void _UpdateTetheringPartOfNetworkInterfaceMapEntry(_INTERFACE_PROPERTIES *,_TETHERING_AP_NOTIFICATION_DATA const &);
	void _WcmInterfaceChangeCallback(unsigned long,_WCM_STATE_TYPE,_GUID const &,void const *,unsigned long);
public:
	CWcmListener();
	static long CreateInstance(IWcmListenerEvents *,IWcmListener * *);
	virtual _GUID GetPreferredInterface();
	virtual _WCM_WNF_INTERFACE_CONNECTIVITY GetMachineConnectivity();
	virtual long GetInterfaceList(unsigned __int64 *,WCM_INTERFACE_PROPERTIES * *);
	virtual long LookupInterface(_GUID const &,WCM_INTERFACE_PROPERTIES *);
	virtual long Start(_WCM_MEDIA_TYPE,bool);
	virtual void Lock();
	virtual void Stop();
	virtual void Unlock();
	virtual ~CWcmListener();
};

struct CWinRTAppIconLoader
{
	long RuntimeClassInitialize(IWinRTIconLoadData *,IIconLoaderNotifications2 *);
	static long s_LoadIconSync(unsigned short const *,tagSIZE const &,tagSIZE const &,tagSIZE const &,tagSIZE const &,tagSIZE const &,unsigned int,unsigned int,CAsyncLoadResult *);
};

class CWindowTaskItem
{
protected:
	virtual void v_OnFlashingChange(bool);
public:
	virtual HWND__ * GetLivePreviewWindow();
	virtual HWND__ * GetThumbnailWindow();
	virtual HWND__ * GetWindow();
	virtual IImmersiveApplication * GetImmersiveApp();
	virtual bool IsImmersive();
	virtual long GetBadgeData(IBadgeData * *);
	virtual long SetWindow(HWND__ *);
	virtual long UpdateLastActivatedTime();
	virtual void SetBadgeData(IBadgeData *);
	virtual void SetLivePreviewWindow(HWND__ *);
	virtual void UpdateMonitor(ITrayComponentHost *);
};

class CWrlLightweightHandlerBase
{
protected:
	long _GetStdMarshaler(_GUID const &,void * *);
	virtual long v_GetAdditionalDataSizeMax(_GUID const &,void *,unsigned long,void *,unsigned long,unsigned long *);
	virtual long v_MarshalAdditionalData(IStream *,_GUID const &,void *,unsigned long,void *,unsigned long);
	virtual void v_OnAggregatedUnknownCreated();
public:
	virtual long DisconnectObject(unsigned long);
	virtual long GetMarshalSizeMax(_GUID const &,void *,unsigned long,void *,unsigned long,unsigned long *);
	virtual long GetUnmarshalClass(_GUID const &,void *,unsigned long,void *,unsigned long,_GUID *);
	virtual long MarshalInterface(IStream *,_GUID const &,void *,unsigned long,void *,unsigned long);
	virtual long ReleaseMarshalData(IStream *);
	virtual long UnmarshalInterface(IStream *,_GUID const &,void * *);
};

class CWrlLightweightHandlerServer
{
	virtual unsigned long v_GetHandlerType();
public:
	virtual long GetClassForHandler(unsigned long,void *,_GUID *);
};

class CXHHostAppManagerBase
{
	long _LaunchHostApp(bool);
	void _EndExistingTaskCompletion();
protected:
	virtual long v_OnExperienceExit();
	virtual long v_OnExperienceReady();
	virtual void v_OnActivation(long);
	virtual void v_OnLaunch(long);
	virtual ~CXHHostAppManagerBase();
public:
	long Initialize(_GUID const &,bool,unsigned short const *,unsigned short const *);
	virtual long LaunchHostApp(unsigned short const *);
	virtual long OnExperienceExit();
	virtual long OnExperienceReady();
	virtual long StartListeningForAppStateChanges();
	virtual long StopListeningForAppStateChanges();
	virtual long WaitForAppCompletion(unsigned long);
};

namespace CallerIdentity
{
	bool g_fRuntimeBrokerProcessIdInitialize;
	long FindApplication(HWND__ *,IImmersiveApplication * *);
	long FindApplication(IUnknown *,HWND__ *,IImmersiveApplication * *);
	long GetCallingProcessAppId(unsigned short * *);
	long GetCallingProcessHandle(unsigned long,RUNTIMEBROKER_CALLERIDENTITY_CHECK,void * *);
	long GetManifestedOrientationPreference(unsigned short const *,ORIENTATION_PREFERENCE *);
	long GetPackageFullNameFromAppId(unsigned short const *,unsigned short * *);
	long GetProcessAppId(void *,unsigned short * *);
	long GetSinglePackageFullNameFromPackageFamilyName(unsigned short const *,unsigned short * *);
	long GetStateRegKey(void *,unsigned short const *,unsigned long,HKEY__ * *);
	unsigned long g_dwRuntimeBrokerProcessId;
	void _EnsureRuntimeBrokerPID();
};

class ClockButton
{
	class ClockButtonImage
	{
		void DrawTextW(HDC__ *,unsigned short const *,int,int,int,int,int);
		void PaintOwner(HDC__ *,tagSIZE,bool,bool);
	public:
		virtual long DrawImage(HDC__ *,tagSIZE,bool,bool);
	};

	int GetTextSpacingForOrientation(bool,int,int,int,int);
	long AppendAdditionalClockDayOfWeekAbbreviationAndTime(unsigned short * const,int,ClockButton::ADDITIONAL_CLOCK *);
	long AppendDayOfWeekNameAndTime(unsigned short * const,int,_SYSTEMTIME * const,bool);
	long AppendParenthesizedClockNameWithSeparator(unsigned short * const,int,unsigned short const *);
	long EnsureFlyout();
	long GetAdditionalClock(unsigned int,ClockButton::ADDITIONAL_CLOCK * *);
	long GetDayOfWeekNameFromTime(_SYSTEMTIME,unsigned short * const,int,bool);
	long SetFlyoutVisibility(bool);
	static unsigned short const * const s_STRING_PADDING;
	tagSIZE CalculateMaxTextSize_Date(HDC__ *);
	tagSIZE CalculateMaxTextSize_DayOfWeek(HDC__ *);
	tagSIZE CalculateMaxTextSize_Time(HDC__ *);
	tagSIZE GetTextSize(HDC__ *,unsigned short const *);
	unsigned int UpdateTextStringsIfNecessary(bool *);
	unsigned long GetCalTypeForDayOfWeek(unsigned short,bool);
	void CalculateMaxTextSizes();
	void GetTimeString(_SYSTEMTIME const *,unsigned short *,int,bool);
	void ResetData();
	void UpdateAccessibilityDescription(bool,bool);
protected:
	virtual bool v_OnSize(unsigned __int64,tagSIZE);
	virtual int v_GetAccRole();
	virtual long v_CycleHotItem(int);
	virtual long v_GetTooltipText(HINSTANCE__ * *,unsigned short * *,unsigned short *,unsigned __int64);
	virtual long v_Initialize();
	virtual long v_OnClick(ClickDevice);
	virtual long v_UpdateTheme();
	virtual void v_GetMinimumFitSize(tagSIZE *);
	virtual void v_OnDisplayStateChange(bool);
	virtual void v_OnTimer(unsigned __int64);
	virtual void v_Uninitialize();
public:
	ClockButton(IClockButtonEventListener *,ITrayComponentHost *,bool);
	bool OnSettingChange(unsigned int,unsigned short const *);
	bool OnTimeChange();
	long ToggleFlyout();
	static bool s_IsSystemClockTurnedOn();
	tagSIZE CalculateMinimumSize(tagSIZE);
	void StartTicking();
	void StopTicking();
};

namespace ContentDeliveryManager
{
	namespace Background
	{
		struct ContentDeliveryManagerLogging
		{
			virtual void OnErrorReported(bool,wil::FailureInfo const &);
		};

	};

};

class ControlCenterButton
{
protected:
	virtual bool v_IsEnabled();
	virtual long v_CycleHotItem(int);
	virtual long v_Initialize();
	virtual long v_OnClick(ClickDevice);
	virtual long v_UpdateTheme();
	virtual void v_GetMinimumFitSize(tagSIZE *);
	virtual void v_Uninitialize();
public:
	ControlCenterButton(ITrayComponentHost *);
};

namespace CortanaCapabilities
{
	long HasCortanaCapabilities(CortanaCapabilities::CapabilityFlags,bool *,bool *);
};

class CortanaConversationButton
{
protected:
	virtual bool v_IsEnabled();
	virtual long v_CycleHotItem(int);
	virtual long v_Initialize();
	virtual long v_OnClick(ClickDevice);
	virtual long v_UpdateTheme();
	virtual void v_GetMinimumFitSize(tagSIZE *);
public:
	CortanaConversationButton(ITrayComponentHost *);
};

struct CortanaEnabledState
{
	bool ShouldShowMicrophone();
	long GetCueString(HINSTANCE__ *,unsigned short *,unsigned __int64);
	void Refresh();
};

namespace CortanaFeatureConfiguration
{
	CortanaFeatureConfiguration::FeatureBehaviorMap * getSharedFeatureTable();
	long GetDWORD(CortanaFeatureConfiguration::FeatureId,unsigned long *);
	long GetEnabled(CortanaFeatureConfiguration::FeatureId,unsigned char *);
	long GetFeatureValue(unsigned short const *,bool (*)(),unsigned long,CortanaFeatureConfiguration::FeatureValue &);
	long GetFlightedValue(unsigned short const *,CortanaFeatureConfiguration::FeatureValue &,unsigned char &);
	long GetOverrideValue(unsigned short const *,CortanaFeatureConfiguration::FeatureValue &,unsigned char &);
	unsigned long GetAlphaBlendedColor(unsigned long,unsigned long,unsigned int);
	void GetSearchBoxColors(bool,unsigned long,CortanaFeatureConfiguration::SearchBoxColors *);
};

namespace CortanaProactiveTelemetry
{
	class LaunchSearchHost
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(unsigned short const *,unsigned short const *);
		~LaunchSearchHost();
	};

};

struct CreationThreadDispatcher
{
	long RuntimeClassInitialize();
};

namespace CreativeFramework
{
	namespace ContentDeliveryManagerDebugSettings
	{
		long GetContentDeliveryAllowedOverride(ContentDeliveryManagerDebugSettings::ContentDeliveryAllowedOverride *);
		unsigned short const * const c_regKeyDebugSettings;
		unsigned short const * const c_regValueContentDeliveryAllowedOverride;
	};

	namespace ContentDeliveryManagerSettings
	{
		long DoesSettingExist(unsigned short const *,unsigned short const *,bool *);
		long GetBoolSetting(unsigned short const *,unsigned short const *,bool,bool *);
		unsigned short const * const c_regKeyContentDeliveryManagerSettings;
		unsigned short const * const c_regKeySuggestedAppEvents;
		unsigned short const * const c_regKeyUserIdleShowRegistrations;
		unsigned short const * const c_regValueContentDeliveryAllowed;
		unsigned short const * const c_userIdleTriggerRuleId;
	};

	namespace Logging
	{
		struct ShellPlacementTelemetry
		{
			class IsPolicyAllowedActivity
			{
			protected:
				virtual bool WasAlreadyReportedToTelemetry(long);
				virtual void StopActivity();
			public:
				void StartActivity(unsigned int);
				void Stop(bool);
				~IsPolicyAllowedActivity();
			};

			class SignInSuggestionsActivity
			{
			protected:
				virtual bool WasAlreadyReportedToTelemetry(long);
				virtual void StopActivity();
			public:
				void StartActivity();
				~SignInSuggestionsActivity();
			};

			class SignInSuggestionsGetContentActivity
			{
			protected:
				virtual bool WasAlreadyReportedToTelemetry(long);
				virtual void StopActivity();
			public:
				void StartActivity();
				void Stop(bool,bool,bool);
				~SignInSuggestionsGetContentActivity();
			};

			class SignInSuggestionsPerformActionActivity
			{
			protected:
				virtual bool WasAlreadyReportedToTelemetry(long);
				virtual void StopActivity();
			public:
				void StartActivity();
				~SignInSuggestionsPerformActionActivity();
			};

			static void AppCloseEventTriggered<unsigned short const * &>(unsigned short const * &);
			static void AppOpenEventTriggered<unsigned short const * &>(unsigned short const * &);
			static void EndCheckUserIdle();
			static void SignInSuggestionsTimeout<unsigned long &>(unsigned long &);
			static void SignInSuggestionsTimeout<unsigned long const &>(unsigned long const &);
			static void UserIdleTrigger<unsigned int &,bool const &>(unsigned int &,bool const &);
			static void WaitForCdmRegistrationToComplete<bool &>(bool &);
		};

	};

	namespace MobilityExperienceSettings
	{
		unsigned short const * const c_regKeyMobility;
		unsigned short const * const c_regValueLastResumeOnPCInteractionTime;
		unsigned short const * const c_regValueLastResumeOnPCTime;
	};

	namespace Policy
	{
		namespace Details
		{
			bool GetDomainName(unsigned short *,unsigned long);
		};

		bool IsAllowedByCloudContentPolicy(unsigned short const *,unsigned short const *,bool);
		bool IsAnyMicrosoftDomainAccount();
		bool IsContentDeliveryPolicyEnforced();
		bool IsContentDeliverySkuPolicyAllowed(bool);
		bool IsEducationEnvironment();
		bool IsMDMPolicyConfigured(unsigned short const *,unsigned short const *);
		bool IsPlacementPolicyAllowed(Policy::ContentDeliveryPolicy,Policy::StorePolicy,Policy::StorePolicy *);
		int GetMDMPolicyInt(unsigned short const *,unsigned short const *);
		unsigned long GetGroupPolicyDWORD(unsigned short const *,unsigned short const *,bool);
	};

	namespace Shared
	{
		unsigned short const * const c_ContentDeliveryManagerMaintenanceTask;
		unsigned short const * const c_ContentDeliveryManagerPackageFamilyName;
		unsigned short const * const c_ContentDeliveryManagerRegistrationTask;
	};

	namespace TargetedContent
	{
		namespace SubscriptionIds
		{
			unsigned short const * const c_minuteZeroOffers;
		};

	};

	namespace Triggers
	{
		long OnCommonTriggerEvent(Triggers::TriggerType);
		long TriggerProcessRule(_GUID const &,Triggers::RuleType);
		void LogEventForWin32IfNecessary(unsigned short const *,unsigned short const *,Triggers::AppEventTrigger);
		void LogEventIfNecessary(unsigned short const *,Triggers::AppEventTrigger,unsigned short const *);
	};

};

class CredentialResetHostAppManager
{
protected:
	virtual long v_OnExperienceExit();
public:
	CredentialResetHostAppManager();
	long RuntimeClassInitialize(unsigned short const *);
};

namespace D2DUtil
{
	_D3DCOLORVALUE ConvertColor(unsigned long,float);
};

namespace DPIToPPIHelpers
{
	int ScaleByPPI(int,HWND__ *,DPIToPPIHelpers::ScaleModifier);
	int ScaleBySpecificDPI(int,int,DPIToPPIHelpers::ScaleModifier);
	int ScaleByType(DPIToPPIHelpers::ScaleType,int,HWND__ *,int,DPIToPPIHelpers::ScaleModifier);
	long DrawThemeTextExPPI(HWND__ *,DPIToPPIHelpers::ScaleType,unsigned int *,void *,HDC__ *,int,int,unsigned short const *,int,unsigned long,tagRECT *,_DTTOPTS *);
	long GetThemeTextExtentPPI(HWND__ *,DPIToPPIHelpers::ScaleType,unsigned int *,void *,HDC__ *,int,int,unsigned short const *,int,unsigned long,_DTTOPTS *,tagRECT *,tagRECT *);
};

namespace DWriteUtil
{
	long GetMetricsForText(Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short> > const &,IDWriteFactory *,IDWriteTextFormat *,DWRITE_TEXT_METRICS *);
	long LoadDWriteTextFormat(IDWriteFactory *,unsigned short const *,DWRITE_FONT_WEIGHT,float,DWRITE_TEXT_ALIGNMENT,DWRITE_PARAGRAPH_ALIGNMENT,DWRITE_READING_DIRECTION,IDWriteTextFormat * *);
};

struct DefaultActivityContextStore
{
	virtual long DeleteContext(ActivityContext &);
	virtual long GetActivityContext(EntPlatStateMachine,_GUID const &,ActivityContext * *);
	virtual long GetActivityContextFromStore(_GUID const &,ActivityContext * *);
	virtual long MarkActivitiesContextForCleanup();
	virtual long StoreContext(ActivityContext &);
};

namespace DeskbandTelemetry
{
	class ShowDeskbandWithConsentContext
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(_GUID const &);
		~ShowDeskbandWithConsentContext();
	};

};

class EEDBManager
{
	static long OpenEnrollmentKey(_GUID,unsigned long,unsigned short const *,HKEY__ * *);
public:
	EEDBManager();
	long GetEnrollmentByKey(_GUID,Enrollment * *);
	long GetEnrollmentsOfState(EnrollmentStateTag,IEnrollmentInfoEnumerator * *);
	long UpdateEnrollment(Enrollment *);
	static long GetEnrollmentType(_GUID,EnrollmentEnrollType *);
	static long OpenHKEY(unsigned short const *,unsigned long,HKEY__ * *);
	virtual long DeleteEnrollment(_GUID);
	virtual long GetEnrollmentsByOpaqueID(unsigned short const *,IEnrollmentInfoEnumerator * *);
	virtual long GetEnrollmentsOfType(EnrollmentEnrollType,IEnrollmentInfoEnumerator * *);
	virtual long GetEnrollmentsOfTypes(unsigned __int64,IEnrollmentInfoEnumerator * *);
	virtual long GetEnrollmentsOfTypes(unsigned __int64,IEnrollmentInfoEnumerator * *,EnrollmentStateTag);
	~EEDBManager();
};

struct EndAccessibilityElement
{
	EndAccessibilityElement();
	virtual long ConvertReturnedElement(IRawElementProviderSimple *,IAccessibleEx * *);
	virtual long GetIAccessiblePair(IAccessible * *,long *);
	virtual long GetObjectForChild(long,IAccessibleEx * *);
	virtual long GetPatternProvider(int,IUnknown * *);
	virtual long GetPropertyValue(int,tagVARIANT *);
	virtual long GetRuntimeId(tagSAFEARRAY * *);
	virtual long get_HostRawElementProvider(IRawElementProviderSimple * *);
	virtual long get_ProviderOptions(ProviderOptions *);
	virtual void Disconnect();
};

struct Enrollment
{
	long set_ClientCertThumb(HKEY__ *,unsigned short *);
	long set_Discovery(HKEY__ *,unsigned short *);
	long set_IntermediateCertThumb(HKEY__ *,unsigned short *);
	long set_Key(_GUID const &);
	long set_RootCertThumb(HKEY__ *,unsigned short *);
	long set_SID(HKEY__ *,unsigned short *);
	long set_SspHyperLink(HKEY__ *,unsigned short *);
	long set_UPN(HKEY__ *,unsigned short *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_ClientCertThumb(unsigned short * *);
	virtual long get_Discovery(unsigned short * *);
	virtual long get_EnrollmentType(EnrollmentEnrollType *);
	virtual long get_IntermediateCertThumb(unsigned short * *);
	virtual long get_Key(_GUID *);
	virtual long get_KeyAsString(unsigned short * *);
	virtual long get_NotificationState(int *);
	virtual long get_RootCertThumb(unsigned short * *);
	virtual long get_SID(unsigned short * *);
	virtual long get_SspHyperLink(unsigned short * *);
	virtual long get_State(EnrollmentStateTag *);
	virtual long get_TraceId(unsigned short * *);
	virtual long get_UPN(unsigned short * *);
	virtual long set_NotificationState(int);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual void set_EnrollEngine(IEnrollEngine *);
	~Enrollment();
};

class EnrollmentInfoEnumerator
{
	long GetAllEnrollmentIDsFiltered(unsigned long *,unsigned short * * *,EnrollmentStateTag,EnrollmentStateTag,unsigned __int64,unsigned short const *);
public:
	long Initialize(EEDBManager *,EnrollmentStateTag,EnrollmentStateTag,unsigned __int64,unsigned short const *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_Next(IEnrollmentInfo * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual void set_EnrollEngine(IEnrollEngine *);
};

struct EnsureStartupTracker
{
	EnsureStartupTracker(IUnknown *);
};

class ExplorerTelemetry
{
	class ExplorerBoot
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void ExplorerBoot_ImmersiveWatermarkCreate();
		void ExplorerBoot_TrayAndDesktopInit();
		void StartActivity();
	};

	class SystemTrayInit
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		void SystemTrayInit_BeginLoadingNonShellIcons();
		void SystemTrayInit_CreateFirstPartyIcons();
		void SystemTrayInit_CreateOverflow();
		void SystemTrayInit_SystemTrayManagerInit();
		~SystemTrayInit();
	};

	class TaskBandDelayedInit
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		void TaskBandDelayedInit_InitializedBadging();
		~TaskBandDelayedInit();
	};

	class TaskBandInit
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		void TaskBandInit_AppUsageTrackerCreated();
		void TaskBandInit_IconAndBadgeContainerCreated();
		void TaskBandInit_ImmersiveShellControllerCreated();
		~TaskBandInit();
	};

	class TrayInit
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(bool,unsigned long,unsigned long);
		~TrayInit();
	};

	void DesktopReady_();
public:
	static void FallbackTelemetryCallback(bool,wil::FailureInfo const &);
	static void FireDesktopReady();
};

namespace FontHelpers
{
	bool LoadFontIndirectFromResource(tagLOGFONTW &,unsigned int,unsigned int,unsigned int,unsigned int,FontHelpers::FontSizeType);
};

namespace GDIHelpers
{
	Geometry::CRect GetDrawTextRectForCenteredGlyph(HDC__ *,unsigned short,Geometry::CRect const &);
	HBITMAP__ * ColorizeBitmap(HBITMAP__ *,unsigned long,unsigned long);
	HBITMAP__ * PremultiplyAlphaChannel(HBITMAP__ *,bool);
	long AddBackgroundForIcon(HBITMAP__ *,unsigned long const &,tagSIZE const &,tagSIZE const &,tagSIZE const &,HBITMAP__ * *);
	long LoadBitmapFromResource(HINSTANCE__ *,unsigned short const *,unsigned short const *,HBITMAP__ * *);
	void DrawRect(HDC__ *,tagRECT const &,unsigned char,unsigned long,int,GDIHelpers::DrawRectFlags);
	void FillRectARGB(HDC__ *,tagRECT const *,unsigned char,unsigned long,bool);
	void MakeWindowTransparent(HWND__ *,bool);
	void PreProcessDIB(int,int,tagRGBQUAD *,int);
	void RenderCenteredGlyph(HDC__ *,HFONT__ *,unsigned short,unsigned long,unsigned long,Geometry::CRect const &);
	void RenderTransparentCenteredGlyph(HDC__ *,HFONT__ *,unsigned short,unsigned long,Geometry::CRect const &);
};

namespace Geometry
{
	struct CRect
	{
		static CRect MulDiv(tagRECT const &,int,int);
	};

};

class GlobalInterfaceTable
{
	static IGlobalInterfaceTable * s_pGlobalInterfaceTable;
	static long s_Retrieve();
public:
	static void Revoke(unsigned long);
};

namespace HashAlgorithms
{
	class PatentHash
	{
		bool CS64_Reversible(unsigned int const *,unsigned int,unsigned int const *,unsigned int *);
		bool CS64_WordSwap(unsigned int const *,unsigned int,unsigned int const *,unsigned int *);
		virtual long BuildPatentHash(void const *,unsigned int,unsigned int const *,HASH_BUFFER *);
	};

	class PatentHashBase
	{
	protected:
		long EncodeBase64(void const *,unsigned long,unsigned short *,unsigned long,unsigned long *);
	public:
		long BuildHashStrings(void const *,unsigned int,HASH_RESULT *,HASH_RESULT *);
	};

};

namespace HolographicViewHelpers
{
	bool IsApplicationViewHolographic(IApplicationView *);
	bool IsImmersiveApplicationHolographic(IUnknown *,IImmersiveApplication *);
};

class HostAppBackground
{
	static __int64 s_WndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
public:
	long CreateBackgroundWindow();
};

class HostAppEnvironment
{
	long _SetupInputSwitchServer(void *);
	long _SetupVolumeControlServer(void *);
	static unsigned long const * const s_WinHotkeys;
public:
	long Setup();
	static HostAppEnvironment & GetInstance();
	static __int64 s_LowLevelKeyboardProc(int,unsigned __int64,__int64);
	void Cleanup(bool);
	~HostAppEnvironment();
};

namespace IMEConsentUXInvocation
{
	_GUID GetDefaultInputMethodFromConsentUX(unsigned short);
	bool IsOnlyOneEnableIME(unsigned short);
	bool IsSetDefaultInputMethodFromConsentUX(unsigned short,_GUID);
	bool ShouldShowConsentUX(unsigned short);
	void TsfInputProfileInstalledWinEventProc(HWINEVENTHOOK__ *,unsigned long,HWND__ *,long,long,unsigned long,unsigned long);
};

class IconContainer
{
	struct DPIData
	{
		~DPIData();
	};

	bool IsMatchingCurrentRequestPresent(IIconLoadData *,IconType,RequestMatchType,unsigned __int64 *);
	bool ShouldProcessIconLoadData(IIconLoadData *);
	long CreateNewShellIconLoadData(unsigned int,IconLoadPass,int,unsigned short const *,unsigned short const *,_ITEMIDLIST_ABSOLUTE const *,HWND__ *,HWND__ *,void *,IShellIconLoadData * *);
	long EnsureTaskScheduler();
	long GetDPIIndex(unsigned int,unsigned __int64 *);
	long LoadImmersiveIcon(unsigned int,IconLoadPass,int,unsigned short const *,IImmersiveApplication *);
	long LoadPinnedWebsiteIcon(unsigned int,IconLoadPass,int,_ITEMIDLIST_ABSOLUTE const *);
	long LoadShellAndWindowIconSecondary(IShellIconLoadData *,unsigned int);
	long OnSecondaryIconLoaded(IIconLoadData *);
	long RecreateStorage(CCoSimpleArray<unsigned int,4294967294,CSimpleArrayStandardCompareHelper<unsigned int> > const &,IconContainerFlags);
	long StoreDefaultIconInImageList(unsigned __int64,int *);
	long StoreIconInImageList(IImageList *,IIconLoadData *);
	unsigned int GetNewRequestId();
	void DiscardImageId(int);
	void IconLoaded(IPinnedWebsiteIconLoadData *);
	void IconLoaded(IShellIconLoadData *);
	void IconLoaded(IWinRTIconLoadData *);
	void RemoveMatchingPendingRequest(IIconLoadData *,IconType);
	void RemovePendingSecondaryPassRequests(int);
	void Reset();
	void UpdateTrackedImageEntryFromIconLoadData(TrackedImage *,IIconLoadData *);
public:
	IconContainer();
	long RuntimeClassInitialize(IIconContainerNotifications *);
	virtual bool IsStorageRecreationRequired(CCoSimpleArray<unsigned int,4294967294,CSimpleArrayStandardCompareHelper<unsigned int> > const &,IconContainerFlags);
	virtual long DPIChanged(CCoSimpleArray<unsigned int,4294967294,CSimpleArrayStandardCompareHelper<unsigned int> > const &,IconContainerFlags,bool *);
	virtual long GetReadOnlyImageList(_IMAGELIST * *);
	virtual long GetReadOnlyImageListForDPI(unsigned int,_IMAGELIST * *);
	virtual long TryLoadPinnedWebsiteIcon(int,_ITEMIDLIST_ABSOLUTE const *);
	virtual long TryLoadWin32Icon(int,unsigned short const *,unsigned short const *,_ITEMIDLIST_ABSOLUTE const *,HWND__ *,HWND__ *,void *);
	virtual long TryLoadWinRTIcon(int,unsigned short const *,IImmersiveApplication *);
	virtual unsigned int GetMaxDPI();
	virtual void IconLoaded(IIconLoadData *);
	virtual void RemoveImage(int);
	virtual void Shutdown();
	virtual ~IconContainer();
};

struct IconLoadDataBase
{
	virtual HICON__ * GetIcon();
	virtual IconLoadPass GetIconLoadPass();
	virtual IconQuality GetIconQuality();
	virtual IconType GetType();
	virtual bool IsSameRequest(IIconLoadData *,RequestMatchType);
	virtual bool IsSmallIconMode();
	virtual bool IsValid();
	virtual int GetImageId();
	virtual int GetPreferenceId();
	virtual int GetShellImageListId();
	virtual long SetDefaults(unsigned int,unsigned int,unsigned int,IconType,IconSizeMode,IconLoadPass,int);
	virtual unsigned int GetDPI();
	virtual unsigned int GetRequestId();
	virtual unsigned int GetStoreId();
	virtual void SetIcon(HICON__ *,int,IconQuality,int);
	virtual void SetIconQuality(IconQuality);
	virtual void SetPreferenceId(int);
};

struct IconLoadDataFinder
{
	~IconLoadDataFinder();
};

namespace IconUtils
{
	void GetIconSize(bool,IconUtils::IconType,tagSIZE *);
};

namespace ImmersiveContextMenuHelper
{
	CSimplePointerArrayNewMem<ContextMenuRenderingData,CSimpleArrayStandardCompareHelper<ContextMenuRenderingData *> > * _RetrieveParentArrayFromWindow(HWND__ *);
	ContextMenuRenderingData * GetContextMenuDataForItem(HWND__ *,unsigned __int64,unsigned int);
	bool CanApplyOwnerDrawToMenu(HMENU__ *,HWND__ *);
	long ApplyOwnerDrawToMenu(HMENU__ *,HWND__ *,tagPOINT *,ImmersiveContextMenuOptions,CSimplePointerArrayNewMem<ContextMenuRenderingData,CSimpleArrayStandardCompareHelper<ContextMenuRenderingData *> > &);
	long OverrideBackgroundColor(HMENU__ *,HWND__ *,ImmersiveContextMenuOptions);
	long StoreContextMenuDataForItem(HWND__ *,unsigned __int64,unsigned int,ContextMenuRenderingData *);
	long _GetRenderingDataForMenuItem(DPIToPPIHelpers::ScaleType,tagMENUITEMINFOW,unsigned short const *,tagPOINT *,CSimplePointerArrayNewMem<ContextMenuRenderingData,CSimpleArrayStandardCompareHelper<ContextMenuRenderingData *> > &,ContextMenuRenderingData *,ImmersiveContextMenuOptions,ContextMenuRenderingData * *);
	long _StoreParentArrayOnWindow(HWND__ *,CSimplePointerArrayNewMem<ContextMenuRenderingData,CSimpleArrayStandardCompareHelper<ContextMenuRenderingData *> > *);
	unsigned int _GetDpiForMonitorFromPoint(tagPOINT *);
	void HandleMergedMenus(HMENU__ *,HWND__ *);
	void RemoveContextMenuDataForItem(HWND__ *,unsigned __int64,unsigned int);
	void RemoveOwnerDrawFromMenu(HMENU__ *,HWND__ *);
	void _RemoveOwnerDrawFromMenuWorker(HMENU__ *,HWND__ *);
};

namespace ImmersiveIcons
{
	RESOURCE_CONTRAST GetMrtContrast();
	RESOURCE_SCALE DpiToMrtScale(unsigned int);
	bool IsHighContrast();
	long CreateIconBitmap(tagSIZE,tagSIZE,tagSIZE,bool,ImmersiveIcons::IconData2 const &,bool,HBITMAP__ * *);
	long GetIconData(unsigned short const *,ImmersiveIcons::IconLoadingInputs2,ImmersiveIcons::IconData2 *);
	long LoadImmersiveIcon(tagSIZE,tagSIZE,tagSIZE,unsigned int,bool,unsigned short const *,HBITMAP__ * *);
	long LoadPinnedWebsiteIcon(IShellItem *,tagSIZE,tagSIZE,unsigned long,bool,HBITMAP__ * *);
};

namespace ImmersiveIconsLoggingTelemetry
{
	class LoadIconW
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(unsigned short const *);
	};

};

namespace ImmersiveTray
{
	bool IsFullScreenViewVisibleOnMonitor(HMONITOR__ *);
	bool IsWindowRaised(HWND__ *);
	long AttachWindowToTray(HWND__ *,HWND__ *,bool);
	long GetTransitionRects(HWND__ *,unsigned int,bool,tagRECT *,tagRECT *,tagRECT *,tagRECT *);
	long HandleActiveZBandChanged(HWND__ *,unsigned int,ZBID);
	long HandleImmersiveModeChange(HWND__ *,unsigned int,ImmersiveTray::ModeChangeFlags);
	long HideWindow(HWND__ *,unsigned int,ImmersiveTray::ShowHideWindowFlags);
	long RaiseWindow(HWND__ *,HWND__ *,ImmersiveTray::RaiseWindowFlags);
	long RegisterForZBandChanges(IActiveZBandNotification *,ITrayComponentHost *,IActiveZBandNotificationService * *,unsigned long *);
	long StopInputObservation(HWND__ *);
	long SwitchToDesktop(ITrayComponentHost *);
	long SwitchToDesktopOnMonitor(HWND__ *,HMONITOR__ *);
	void NotifyAutohideImmuneWorkAreaMayHaveChanged(HMONITOR__ *,tagRECT);
	void NotifyPearlRectChanged(HMONITOR__ *,tagRECT);
	void NotifyTraySearchBoxVisibilityChanged(HMONITOR__ *,int);
	void NotifyTrayStuckPlaceChanged(HMONITOR__ *,unsigned int);
};

namespace Interpolators
{
	class CCubicBezierLinearInterpolator
	{
		long _SolveTForOffsetFraction(double,double *);
		virtual long _CalculateInterpolationValue(double,double *);
	public:
		CCubicBezierLinearInterpolator(double,double,double,double);
		CCubicBezierLinearInterpolator(double,double,double,double,double,double,double,double);
		virtual ~CCubicBezierLinearInterpolator();
	};

	struct CIncreasingCubicPolynomialSegment
	{
		double SolveRootUsingBisection(double,double,double);
		void Compute(double,double *,double *);
	};

	struct CTileAnimationInterpolator
	{
		long InterpolateValue(double,double *);
		virtual long GetTotalDuration(double *);
		virtual long Initialize(double,double);
		virtual long InitializeDuration(double,double);
	};

};

namespace LaunchHelpers
{
	void Launch(LaunchHelpers::LaunchEntity,bool,HWND__ *);
};

namespace LauncherNotifyHelper
{
	long NotifyAppResolverOfDestListChange(unsigned short const *);
};

namespace LoggingUtil
{
	class AppIdCensorUtility
	{
		static void CensorWebAppId(unsigned short const *,unsigned short const *,unsigned short * *);
	public:
		static long CensorAppIdBuffer(unsigned short const *,unsigned short * *);
		static unsigned short const * CensorAppId(unsigned short const *);
	};

};

struct LogonFrameworkSyncHelper
{
	LogonFrameworkSyncHelper();
	~LogonFrameworkSyncHelper();
};

namespace LogonFrameworkTelemetry
{
	class AllLogonTasks
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void AnimationWaitResult(unsigned long);
		void StartActivity(unsigned int,unsigned int,bool,bool,bool);
		void Stop(unsigned int,unsigned int,bool,bool,bool);
	};

	class AppResolverWork
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~AppResolverWork();
	};

	class LogonTask
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		LogonTask();
		void EnterpriseProvisioning();
		void StartActivity(unsigned short const *,int,int);
		void SwitchingToCloudExperience();
		void WaitResult<unsigned short const (&)[11],unsigned long const &>(unsigned short const (&)[11],unsigned long const &);
		void WaitResult<unsigned short const (&)[16],unsigned long const &>(unsigned short const (&)[16],unsigned long const &);
		void WaitResult<unsigned short const (&)[17],unsigned long const &>(unsigned short const (&)[17],unsigned long const &);
		void WaitResult<unsigned short const (&)[18],unsigned long const &>(unsigned short const (&)[18],unsigned long const &);
		void WaitResult<unsigned short const (&)[22],unsigned long &>(unsigned short const (&)[22],unsigned long &);
		void WaitResult<unsigned short const (&)[23],unsigned long &>(unsigned short const (&)[23],unsigned long &);
		void WaitResult<unsigned short const (&)[23],unsigned long const &>(unsigned short const (&)[23],unsigned long const &);
		void WriteDataForOemApp<bool &,bool &>(bool &,bool &);
		~LogonTask();
	};

	class RoamingBootstrapAndSyncPayload1
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void RoamingBootstrapComplete<long &,unsigned long &>(long &,unsigned long &);
		void StartActivity();
		void Stop(bool,long,unsigned long);
		~RoamingBootstrapAndSyncPayload1();
	};

	class RoamingSyncPayload2
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		void Stop(bool,long,unsigned long);
		~RoamingSyncPayload2();
	};

	class RunBeforePostStartTasks
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~RunBeforePostStartTasks();
	};

	class StartLayoutInitMigration
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~StartLayoutInitMigration();
	};

	class TerminateFirstSignInAnimation
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~TerminateFirstSignInAnimation();
	};

	class WaitOnShellStartup
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~WaitOnShellStartup();
	};

};

struct MFUITEM
{
	_ITEMIDLIST_ABSOLUTE * GetIdList(int);
};

struct MSMFUEnumerator
{
	virtual _ITEMIDLIST_ABSOLUTE * Next();
};

namespace Microsoft
{
	namespace WRL
	{
		struct ComPtr<AsyncResultHelpers::AsyncResult<NotificationCenterBadgeRenderResult> >
		{
			~ComPtr<AsyncResultHelpers::AsyncResult<NotificationCenterBadgeRenderResult> >();
		};

		struct ComPtr<AsyncResultHelpers::AsyncResult<SettingsBitmapLoadInfo> >
		{
			void Attach(AsyncResultHelpers::AsyncResult<SettingsBitmapLoadInfo> *);
			~ComPtr<AsyncResultHelpers::AsyncResult<SettingsBitmapLoadInfo> >();
		};

		struct ComPtr<AsyncResultHelpers::AsyncResult<TaskbarBadgeVisualRenderResult> >
		{
			~ComPtr<AsyncResultHelpers::AsyncResult<TaskbarBadgeVisualRenderResult> >();
		};

		class ComPtr<BadgeContainer>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<BadgeContainer>();
		};

		class ComPtr<BadgeData>
		{
		protected:
			unsigned long InternalRelease();
		};

		struct ComPtr<BadgeVisualFactory>
		{
			~ComPtr<BadgeVisualFactory>();
		};

		class ComPtr<BadgeVisualProperties>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<CAppReadinessTaskCompletionHelper>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<CAppReadinessTaskCompletionHelper>();
		};

		struct ComPtr<CAsyncLoadResult>
		{
			void Attach(CAsyncLoadResult *);
			~ComPtr<CAsyncLoadResult>();
		};

		class ComPtr<CIconLoadingFunctions>
		{
		protected:
			unsigned long InternalRelease();
		};

		struct ComPtr<CImmersiveWindowFactory>
		{
			~ComPtr<CImmersiveWindowFactory>();
		};

		class ComPtr<CInputIndicatorButtonAccessibleWrapper>
		{
		protected:
			unsigned long InternalRelease();
		public:
			void Attach(CInputIndicatorButtonAccessibleWrapper *);
			~ComPtr<CInputIndicatorButtonAccessibleWrapper>();
		};

		class ComPtr<CLaunchActivatedEventArgs>
		{
		protected:
			unsigned long InternalRelease();
		public:
			void Attach(CLaunchActivatedEventArgs *);
		};

		class ComPtr<CLaunchToMonitor>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<CLauncherUIMode>
		{
		protected:
			unsigned long InternalRelease();
		public:
			void Attach(CLauncherUIMode *);
		};

		class ComPtr<CLogonTaskFramework::CConnectedIdentityCallback>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<CLogonTaskFramework::CConnectedIdentityCallback>();
		};

		class ComPtr<CLogonTaskFramework::CConnectivityHelper>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<CLogonTaskFramework::CConnectivityHelper>();
		};

		class ComPtr<CLogonTaskFramework>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<CLogonTaskFramework>();
		};

		class ComPtr<CMarshaledInterface::CMarshalStream>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			void Attach(CMarshaledInterface::CMarshalStream *);
			~ComPtr<CMarshaledInterface::CMarshalStream>();
		};

		class ComPtr<CNotificationCenterButton>
		{
		protected:
			void InternalAddRef();
		public:
			~ComPtr<CNotificationCenterButton>();
		};

		class ComPtr<CPearl>
		{
		protected:
			unsigned long InternalRelease();
		public:
			void Attach(CPearl *);
			~ComPtr<CPearl>();
		};

		class ComPtr<CRefCountedObject<CFirstLogonAnimation> >
		{
		protected:
			void InternalAddRef();
		public:
			~ComPtr<CRefCountedObject<CFirstLogonAnimation> >();
		};

		struct ComPtr<CRefCountedObject<CortanaEnabledState> >
		{
			~ComPtr<CRefCountedObject<CortanaEnabledState> >();
		};

		struct ComPtr<CSecondaryTray>
		{
			~ComPtr<CSecondaryTray>();
		};

		struct ComPtr<CShowDesktopButton>
		{
			~ComPtr<CShowDesktopButton>();
		};

		class ComPtr<CSimpleEnumString>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<CSimpleEnumString>();
		};

		class ComPtr<CSyncAtLogonTask>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<CTaskListThumbnailWnd>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<CTaskListThumbnailWnd>();
		};

		struct ComPtr<CTrayAnimationManager>
		{
			~ComPtr<CTrayAnimationManager>();
		};

		struct ComPtr<CTrayAppIdentity>
		{
			~ComPtr<CTrayAppIdentity>();
		};

		class ComPtr<CTrayAppIdentityResolver>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<CTrayAppIdentityResolver>();
		};

		struct ComPtr<CTrayBalloonInfoTipManager>
		{
			~ComPtr<CTrayBalloonInfoTipManager>();
		};

		struct ComPtr<CTrayButton>
		{
			~ComPtr<CTrayButton>();
		};

		class ComPtr<CTrayChevron>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<CTrayChevron>();
		};

		class ComPtr<CTrayInputIndicator>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<CTrayInputIndicator>();
		};

		class ComPtr<CTrayOverflow>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<CTrayOverflow>();
		};

		class ComPtr<CTrayToastInfoTip>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<CTrayToastInfoTip>();
		};

		struct ComPtr<CWcmListener>
		{
			~ComPtr<CWcmListener>();
		};

		class ComPtr<CWinRTAppIconLoader>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<CWinRTAppIconLoader>();
		};

		class ComPtr<CreationThreadDispatcher>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<CreationThreadDispatcher>();
		};

		struct ComPtr<CredentialResetHostAppManager>
		{
			void Attach(CredentialResetHostAppManager *);
			~ComPtr<CredentialResetHostAppManager>();
		};

		class ComPtr<IAccPropServer>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IAccPropServer>();
		};

		class ComPtr<IAccPropServices>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IAccPropServices>();
		};

		class ComPtr<IAccessible>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IAccessible>();
		};

		struct ComPtr<IAccessibleEx>
		{
			~ComPtr<IAccessibleEx>();
		};

		class ComPtr<IAction>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IAction>();
		};

		class ComPtr<IActionCollection>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IActionCollection>();
		};

		class ComPtr<IActiveZBandNotificationService>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IActiveZBandNotificationService>();
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
		public:
			~ComPtr<IAgileReference>();
		};

		class ComPtr<IAllUpViewInvoker>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IAllUpViewInvoker>();
		};

		class ComPtr<IAppReadinessFirstLogonApps>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IAppReadinessFirstLogonApps>();
		};

		class ComPtr<IAppReadinessService>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IAppReadinessService>();
		};

		class ComPtr<IAppReadinessTask>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IAppReadinessTask>();
		};

		class ComPtr<IAppSwitcherNotificationService>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IAppSwitcherNotificationService>();
		};

		class ComPtr<IAppUriResolver>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IApplicationActivationManagerPriv>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IApplicationActivationManagerPriv>();
		};

		class ComPtr<IApplicationActivationPhonePriv>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IApplicationActivationPhonePriv>();
		};

		class ComPtr<IApplicationAssociationRegistrationInternal>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IApplicationAssociationRegistrationInternal>();
		};

		struct ComPtr<IApplicationDataPersistence>
		{
			~ComPtr<IApplicationDataPersistence>();
		};

		struct ComPtr<IApplicationIdentifier>
		{
			~ComPtr<IApplicationIdentifier>();
		};

		class ComPtr<IApplicationResolver2>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IApplicationResolver2>();
		};

		class ComPtr<IApplicationResolver>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IApplicationResolver>();
		};

		class ComPtr<IApplicationView>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IApplicationView>();
		};

		class ComPtr<IApplicationViewCollection>
		{
		protected:
			unsigned long InternalRelease();
		public:
			long As<IApplicationViewFlashingNotification>(Details::ComPtrRef<ComPtr<IApplicationViewFlashingNotification> >);
			~ComPtr<IApplicationViewCollection>();
		};

		class ComPtr<IApplicationViewCompatibilityManager>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IApplicationViewFlashingNotification>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IApplicationViewFlashingNotification>();
		};

		class ComPtr<IAssocHandler>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IAssocHandler>();
		};

		class ComPtr<IAssociationArray>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IAssociationElement>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IAssociationElement>();
		};

		struct ComPtr<IAsyncCallback>
		{
			~ComPtr<IAsyncCallback>();
		};

		class ComPtr<IAsyncCallbackDispatcher>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IAsyncCallbackDispatcher>();
		};

		struct ComPtr<IAsyncInfo>
		{
			~ComPtr<IAsyncInfo>();
		};

		class ComPtr<IAuthUIUserSettings>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IAuthUIUserSettings>();
		};

		class ComPtr<IAutomaticDestinationList2>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IAutomaticDestinationList2>();
		};

		class ComPtr<IAutomaticDestinationList>
		{
		protected:
			unsigned long InternalRelease();
		public:
			long As<IAutomaticDestinationList2>(Details::ComPtrRef<ComPtr<IAutomaticDestinationList2> >);
			~ComPtr<IAutomaticDestinationList>();
		};

		class ComPtr<IBackComponentService>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IBackComponentService>();
		};

		class ComPtr<IBackupSettings>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IBackupSettings>();
		};

		class ComPtr<IBadgeContainer>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IBadgeContainer>();
		};

		class ComPtr<IBadgeContainerNotifications>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IBadgeData>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			ComPtr<IBadgeData> & operator=(IBadgeData *);
			~ComPtr<IBadgeData>();
		};

		class ComPtr<IBadgeDataCallback>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IBadgeRenderNotifications>
		{
		protected:
			void InternalAddRef();
		public:
			~ComPtr<IBadgeRenderNotifications>();
		};

		class ComPtr<IBadgeVisualFactory>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IBadgeVisualFactory>();
		};

		class ComPtr<IBadgeVisualProperties>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			~ComPtr<IBadgeVisualProperties>();
		};

		class ComPtr<IBadgeVisualRenderRequest>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			ComPtr<IBadgeVisualRenderRequest> & operator=<BadgeVisualRenderRequest>(BadgeVisualRenderRequest *);
			~ComPtr<IBadgeVisualRenderRequest>();
		};

		class ComPtr<IBandSite>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IBandSite>();
		};

		class ComPtr<IBindCtx>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<ICallingProcessInfo>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IClassFactory>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IClassFactory>();
		};

		class ComPtr<IClassicWindowManager>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IClassicWindowManager>();
		};

		class ComPtr<IConnectedAccountServices>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IConnectedAccountServicesFactory>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IConnectedIdentityProvider>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IConnectedIdentityProvider>();
		};

		class ComPtr<IConnectionPoint>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IContextMenuForProgInvoke>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<ICreateObject>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<ID2D1Bitmap>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<ID2D1Factory>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<ID2D1RenderTarget>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<ID2D1RenderTarget>();
		};

		class ComPtr<ID2D1SolidColorBrush>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<ID2D1SolidColorBrush>();
		};

		class ComPtr<IDWriteFactory3>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IDWriteTextFormat>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IDWriteTextFormat>();
		};

		class ComPtr<IDWriteTextLayout>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IDWriteTextLayout>();
		};

		class ComPtr<IDataObject>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IDataObject>();
		};

		class ComPtr<IDeskBand>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IDeskBand>();
		};

		class ComPtr<IDesktopVisibilityService>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IDesktopVisibilityService>();
		};

		class ComPtr<IDropTarget>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IDropTarget>();
		};

		class ComPtr<IEdgeUiManager>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IEdgeUiManager>();
		};

		class ComPtr<IElevationBrokerManager>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IElevationBrokerManager>();
		};

		struct ComPtr<IEnrollmentInfo>
		{
			~ComPtr<IEnrollmentInfo>();
		};

		class ComPtr<IEnrollmentInfoEnumerator>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IEnrollmentInfoEnumerator>();
		};

		class ComPtr<IEnumFullIDList>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IEnumFullIDList>();
		};

		class ComPtr<IEnumString>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IEnumString>();
		};

		class ComPtr<IEnumTaskItems>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IEnumTaskItems>();
		};

		class ComPtr<IEnumTfInputProcessorProfiles>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IEnumTfInputProcessorProfiles>();
		};

		class ComPtr<IExecAction>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IExecAction>();
		};

		class ComPtr<IExtractIconW>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IFirstLogonSync>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IFirstLogonSync>();
		};

		class ComPtr<IFlexibleTaskbarPinnedList>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IFlexibleTaskbarPinnedList>();
		};

		class ComPtr<IFullScreenPositioner>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IFullScreenPositioner>();
		};

		class ComPtr<IFullscreenCloudExperienceManager>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IFullscreenCloudExperienceManager>();
		};

		class ComPtr<IGangImageList>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IGlobalInterfaceTable>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IGlobalRudeWindowNotificationService>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IGlobalRudeWindowNotificationService>();
		};

		class ComPtr<IHolographicViewTransitionNotificationService>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IHolographicViewTransitionNotificationService>();
		};

		struct ComPtr<IHostAppManager>
		{
			~ComPtr<IHostAppManager>();
		};

		class ComPtr<IHxHelpPane>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IHxHelpPane>();
		};

		class ComPtr<IIMEConsentUX>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IIMEConsentUX>();
		};

		class ComPtr<IIconContainer>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IIconContainer>();
		};

		class ComPtr<IIconLoadData>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			~ComPtr<IIconLoadData>();
		};

		struct ComPtr<IIconLoaderNotifications2>
		{
			~ComPtr<IIconLoaderNotifications2>();
		};

		class ComPtr<IIconLoadingFunctions>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IIconLoadingFunctions>();
		};

		class ComPtr<IIdentityProvider>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IIdentityProvider>();
		};

		class ComPtr<IIdentityStore2>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IIdentityStore2>();
		};

		class ComPtr<IImageList2>
		{
		protected:
			unsigned long InternalRelease();
		public:
			long As<IImageListContainer>(Details::ComPtrRef<ComPtr<IImageListContainer> >);
			~ComPtr<IImageList2>();
		};

		class ComPtr<IImageList>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			long As<IImageList>(Details::ComPtrRef<ComPtr<IImageList> >);
			~ComPtr<IImageList>();
		};

		class ComPtr<IImageListContainer>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IImageListContainer>();
		};

		class ComPtr<IImageSanitizationBroker>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IImageSanitizationBroker>();
		};

		class ComPtr<IImmersiveAppCrusherNotificationService>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IImmersiveAppCrusherNotificationService>();
		};

		class ComPtr<IImmersiveApplication>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			ComPtr<IImmersiveApplication> & operator=(IImmersiveApplication *);
			~ComPtr<IImmersiveApplication>();
		};

		class ComPtr<IImmersiveApplicationArrayService>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IImmersiveApplicationArrayService>();
		};

		struct ComPtr<IImmersiveApplicationManager>
		{
			~ComPtr<IImmersiveApplicationManager>();
		};

		class ComPtr<IImmersiveApplicationNotificationService>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IImmersiveApplicationNotificationService>();
		};

		class ComPtr<IImmersiveApplicationWindow>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IImmersiveApplicationWindow>();
		};

		class ComPtr<IImmersiveBackstackManager>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IImmersiveBackstackManager>();
		};

		class ComPtr<IImmersiveLauncher>
		{
		protected:
			unsigned long InternalRelease();
		public:
			long As<IImmersiveLauncherCortana>(Details::ComPtrRef<ComPtr<IImmersiveLauncherCortana> >);
			~ComPtr<IImmersiveLauncher>();
		};

		class ComPtr<IImmersiveLauncherCortana>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IImmersiveLauncherCortana>();
		};

		class ComPtr<IImmersiveLauncherTrayNotify>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IImmersiveLauncherTrayNotify>();
		};

		class ComPtr<IImmersiveLayout>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IImmersiveLayout>();
		};

		class ComPtr<IImmersiveMonitor>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IImmersiveMonitor>();
		};

		class ComPtr<IImmersiveMonitorManager>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IImmersiveMonitorManager>();
		};

		struct ComPtr<IImmersiveSettingsCache>
		{
			~ComPtr<IImmersiveSettingsCache>();
		};

		class ComPtr<IImmersiveShellBroker>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IImmersiveShellBroker>();
		};

		class ComPtr<IImmersiveShellBuilder>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IImmersiveShellBuilder>();
		};

		class ComPtr<IImmersiveShellController>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IImmersiveShellController>();
		};

		class ComPtr<IImmersiveShellHookService>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IImmersiveShellHookService>();
		};

		class ComPtr<IImmersiveSystemMode>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IImmersiveSystemMode>();
		};

		struct ComPtr<IImmersiveSystemModeNotificationService>
		{
			~ComPtr<IImmersiveSystemModeNotificationService>();
		};

		class ComPtr<IImmersiveTaskItem>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IImmersiveTaskItem>();
		};

		class ComPtr<IImmersiveWindowMessageService>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IImmersiveWindowMessageService>();
		};

		struct ComPtr<IInputSwitchControl>
		{
			~ComPtr<IInputSwitchControl>();
		};

		class ComPtr<IInspectable>
		{
		protected:
			unsigned long InternalRelease();
		public:
			long As<Windows::Foundation::IPropertyValue>(Details::ComPtrRef<ComPtr<Windows::Foundation::IPropertyValue> >);
			long As<Windows::Internal::Shell::Experience::IActionCenterExperienceManager>(Details::ComPtrRef<ComPtr<Windows::Internal::Shell::Experience::IActionCenterExperienceManager> >);
			~ComPtr<IInspectable>();
		};

		class ComPtr<IJumpViewExecuteHelper>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<ILambda>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<ILauncherTipContextMenu>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<ILauncherTipContextMenu>();
		};

		class ComPtr<ILauncherTipContextMenuSettingChangeListener>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<ILauncherTipContextMenuSettingChangeListener>();
		};

		class ComPtr<ILayerImageList>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<ILivePreviewWindow>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			~ComPtr<ILivePreviewWindow>();
		};

		class ComPtr<ILockScreenApplicationManager>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<ILockScreenApplicationManager>();
		};

		class ComPtr<ILockScreenCacheImageRestoreAgent>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<ILockScreenCacheImageRestoreAgent>();
		};

		struct ComPtr<IMFAttributes>
		{
			~ComPtr<IMFAttributes>();
		};

		class ComPtr<IMarshal>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IMediaPlaybackDataSource>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IMediaPlaybackDataSource>();
		};

		struct ComPtr<IMockableApi>
		{
			~ComPtr<IMockableApi>();
		};

		class ComPtr<IMrtResourceManager>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IMrtResourceManager>();
		};

		class ComPtr<IMultitaskingViewVisibilityService>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IMultitaskingViewVisibilityService>();
		};

		class ComPtr<IMyPeopleSettingsBroker>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IMyPeopleSettingsBroker>();
		};

		class ComPtr<INamedPropertyStore>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<INamedPropertyStore>();
		};

		class ComPtr<INamedResource>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<INamedResource>();
		};

		class ComPtr<INotificationCB>
		{
		protected:
			void InternalAddRef();
		public:
			ComPtr<INotificationCB> & operator=(INotificationCB *);
			~ComPtr<INotificationCB>();
		};

		class ComPtr<INotificationCenterStatus>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<INotificationCenterStatus>();
		};

		class ComPtr<INotificationController>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<INotificationController>();
		};

		class ComPtr<INotificationObjFactory>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<INotificationSettings>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<INotificationSettings>();
		};

		class ComPtr<INowPlayingSession>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<INowPlayingSession>();
		};

		class ComPtr<INowPlayingSessionManager>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<INowPlayingSessionManager>();
		};

		class ComPtr<IOSTaskCompletion>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IOSTaskCompletion>();
		};

		class ComPtr<IObjectArray>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IObjectArray>();
		};

		class ComPtr<IObjectCollection>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IObjectCollection>();
		};

		class ComPtr<IObjectFactory>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IObjectFactory>();
		};

		class ComPtr<IObjectWithAppUserModelID>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IObjectWithAppUserModelID>();
		};

		class ComPtr<IObjectWithSite>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IObjectWithSite>();
		};

		class ComPtr<IOleCommandTarget>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IOleCommandTarget>();
		};

		class ComPtr<IOleWindow>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IOleWindow>();
		};

		class ComPtr<IOpenWithLauncher>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IOpenWithLauncher>();
		};

		class ComPtr<IPackageDebugSettings>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IPackageDebugSettings>();
		};

		class ComPtr<IParentAndItem>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IPeopleBand>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IPeopleBand>();
		};

		class ComPtr<IPersistIDList>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IPersistIDList>();
		};

		class ComPtr<IPersistString2>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IPersistString2>();
		};

		class ComPtr<IPinnedList2>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IPinnedList2>();
		};

		class ComPtr<IPinnedList>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IPinnedList>();
		};

		class ComPtr<IPinnedWebsiteIconLoadData>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IPinnedWebsiteIconLoadData>();
		};

		class ComPtr<IPrincipal>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IPrincipal>();
		};

		class ComPtr<IProcessLifetimeManagerControl>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IProcessLifetimeManagerControl>();
		};

		class ComPtr<IProfileNotify>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IProfileNotify>();
		};

		class ComPtr<IPropertyBag2>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IPropertyStore>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IPropertyStore>();
		};

		class ComPtr<IQueryAssociations>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IQuerySource>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IQuerySource>();
		};

		class ComPtr<IRegisteredTask>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IRegisteredTask>();
		};

		class ComPtr<IRegistrationInfo>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IRegistrationInfo>();
		};

		class ComPtr<IRegistrationTrigger>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IRegistrationTrigger>();
		};

		class ComPtr<IRequestTrustedComponentForegroundControlInitialization>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IRequestTrustedComponentForegroundControlInitialization>();
		};

		class ComPtr<IResourceCandidate2>
		{
		protected:
			unsigned long InternalRelease();
		public:
			long As<IResourceCandidate>(Details::ComPtrRef<ComPtr<IResourceCandidate> >);
		};

		class ComPtr<IResourceCandidate>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IResourceCandidate>();
		};

		class ComPtr<IResourceContext>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IResourceContext>();
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
		public:
			~ComPtr<IResourceMap>();
		};

		class ComPtr<IRestrictedErrorInfo>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IRudeWindowManager>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IRudeWindowManager>();
		};

		struct ComPtr<IRunnableTask>
		{
			void Attach(IRunnableTask *);
			~ComPtr<IRunnableTask>();
		};

		class ComPtr<IRunningTask>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<ISecondaryTaskBand>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<ISecondaryTaskBand>();
		};

		class ComPtr<IServiceProvider>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IServiceProvider>();
		};

		class ComPtr<ISettingHandlerFactory>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<ISettingSyncCloudService>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<ISettingSyncCloudService>();
		};

		class ComPtr<ISettingSyncEngine>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<ISettingSyncEngine>();
		};

		class ComPtr<ISettingSyncTask>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<ISettingSyncTask>();
		};

		class ComPtr<ISharedBitmap>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IShellFolder>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IShellFolder>();
		};

		class ComPtr<IShellIconLoadData>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IShellIconLoadData>();
		};

		class ComPtr<IShellItem2>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IShellItem2>();
		};

		class ComPtr<IShellItem>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IShellItem>();
		};

		class ComPtr<IShellPositionerPriority>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IShellPositionerPriority>();
		};

		class ComPtr<IShellTaskScheduler>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IShellTaskScheduler>();
		};

		class ComPtr<IShellTaskSchedulerSettings>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IShellTaskSchedulerSettings>();
		};

		class ComPtr<IShellUserAssist2>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IShellUserAssist2>();
		};

		class ComPtr<IShellUserAssist>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			~ComPtr<IShellUserAssist>();
		};

		class ComPtr<ISplashScreen>
		{
		protected:
			void InternalAddRef();
		};

		class ComPtr<IStartMenuItemsCache>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IStartMenuItemsCache>();
		};

		class ComPtr<IStateCapture>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IStateCapture>();
		};

		class ComPtr<IStream>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			~ComPtr<IStream>();
		};

		class ComPtr<ISwitchController>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<ISwitchController>();
		};

		struct ComPtr<ITaskBtnGroup>
		{
			~ComPtr<ITaskBtnGroup>();
		};

		class ComPtr<ITaskDefinition>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<ITaskDefinition>();
		};

		class ComPtr<ITaskFolder>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<ITaskFolder>();
		};

		class ComPtr<ITaskGroup>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<ITaskGroup>();
		};

		class ComPtr<ITaskItem>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			ComPtr<ITaskItem> & operator=(ITaskItem *);
			~ComPtr<ITaskItem>();
		};

		class ComPtr<ITaskItemFilter>
		{
		protected:
			unsigned long InternalRelease();
		public:
			ComPtr<ITaskItemFilter> & operator=(ITaskItemFilter *);
			~ComPtr<ITaskItemFilter>();
		};

		class ComPtr<ITaskItemFilterFactory>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<ITaskItemFilterFactory>();
		};

		class ComPtr<ITaskListAnimation>
		{
		protected:
			unsigned long InternalRelease();
		public:
			ComPtr<ITaskListAnimation> & operator=(ITaskListAnimation *);
			~ComPtr<ITaskListAnimation>();
		};

		struct ComPtr<ITaskListAnimationNotificationSink>
		{
			~ComPtr<ITaskListAnimationNotificationSink>();
		};

		class ComPtr<ITaskListChangeListener>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<ITaskListChangeListener>();
		};

		class ComPtr<ITaskListExtendedUI>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<ITaskListExtendedUI>();
		};

		struct ComPtr<ITaskListUI>
		{
			~ComPtr<ITaskListUI>();
		};

		class ComPtr<ITaskListUIMulti>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<ITaskListUIMulti>();
		};

		class ComPtr<ITaskListWndSite>
		{
		protected:
			unsigned long InternalRelease();
		public:
			long As<ISecondaryTaskBand>(Details::ComPtrRef<ComPtr<ISecondaryTaskBand> >);
			~ComPtr<ITaskListWndSite>();
		};

		class ComPtr<ITaskService>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<ITaskService>();
		};

		class ComPtr<ITaskSettings2>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<ITaskSettings2>();
		};

		class ComPtr<ITaskSettings>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<ITaskSettings>();
		};

		class ComPtr<ITaskbarThumbnailHandler>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<ITaskbarThumbnailHandler>();
		};

		class ComPtr<ITfInputProcessorProfileMgr>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<ITfInputProcessorProfileMgr>();
		};

		class ComPtr<ITfInputProcessorProfiles>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<ITfInputProcessorProfiles>();
		};

		class ComPtr<IThreadRefWithEvent>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IThreadRefWithEvent>();
		};

		class ComPtr<IThumbnailCache>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<ITileBadgeProvider>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<ITileBadgeProvider>();
		};

		struct ComPtr<ITileDataLayerProvider>
		{
			~ComPtr<ITileDataLayerProvider>();
		};

		struct ComPtr<ITileInfo>
		{
			~ComPtr<ITileInfo>();
		};

		class ComPtr<ITipInvocation>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<ITipInvocation>();
		};

		class ComPtr<ITouchKeyboardExperienceManager>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<ITouchKeyboardExperienceManager>();
		};

		class ComPtr<ITransformerDataMigration>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<ITransformerDataMigration>();
		};

		class ComPtr<ITrayAppIdentity>
		{
		protected:
			unsigned long InternalRelease();
		public:
			ComPtr<ITrayAppIdentity> & operator=(ITrayAppIdentity *);
			~ComPtr<ITrayAppIdentity>();
		};

		class ComPtr<ITrayAppIdentityResolver>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<ITrayAppIdentityResolver>();
		};

		class ComPtr<ITrayComponentHost>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			ComPtr<ITrayComponentHost> & operator=(ITrayComponentHost *);
			~ComPtr<ITrayComponentHost>();
		};

		class ComPtr<ITrayDeskBand>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<ITrayDeskBand>();
		};

		class ComPtr<ITrayImmersiveShellProxy>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<ITrayImmersiveShellProxy>();
		};

		struct ComPtr<ITrayInfoTip>
		{
			~ComPtr<ITrayInfoTip>();
		};

		class ComPtr<ITrayInfoTipEvents>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<ITrayInfoTipEvents>();
		};

		class ComPtr<ITrayInfoTipManager>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<ITrayInfoTipManager>();
		};

		class ComPtr<ITrayInfoTipToastManager>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<ITrayInfoTipToastManager>();
		};

		class ComPtr<ITrayInteractionEvents>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			~ComPtr<ITrayInteractionEvents>();
		};

		class ComPtr<ITrayNotify>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<ITrayNotify>();
		};

		struct ComPtr<ITrayUI>
		{
			long As<ITrayComponentHost>(Details::ComPtrRef<ComPtr<ITrayComponentHost> >);
			long As<ITrayDeskBand>(Details::ComPtrRef<ComPtr<ITrayDeskBand> >);
			~ComPtr<ITrayUI>();
		};

		struct ComPtr<ITrayUIHost>
		{
			ComPtr<ITrayUIHost> & operator=(ITrayUIHost *);
			~ComPtr<ITrayUIHost>();
		};

		class ComPtr<ITrigger>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<ITrigger>();
		};

		class ComPtr<ITriggerCollection>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<ITriggerCollection>();
		};

		class ComPtr<IUIAnimationStoryboard>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IUIAnimationStoryboard>();
		};

		class ComPtr<IUIAnimationStoryboardEventHandler>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IUIAnimationStoryboardEventHandler>();
		};

		class ComPtr<IUIAnimationTimerUpdateHandler>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IUIAnimationTimerUpdateHandler>();
		};

		class ComPtr<IUIAnimationTransition>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IUIAnimationTransition>();
		};

		class ComPtr<IUIAnimationVariable>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IUIAnimationVariable>();
		};

		class ComPtr<IUnknown>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			ComPtr<IUnknown> & operator=(IUnknown *);
			~ComPtr<IUnknown>();
		};

		class ComPtr<IUserOOBEController>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IUserOOBEController>();
		};

		class ComPtr<IUserOOBEControllerAutoElevated>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IUserOOBEControllerAutoElevated>();
		};

		class ComPtr<IViewManagerControl>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IViewManagerControl>();
		};

		class ComPtr<IVirtualDesktop>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IVirtualDesktop>();
		};

		class ComPtr<IVirtualDesktopAnimationSyncNotificationService>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IVirtualDesktopAnimationSyncNotificationService>();
		};

		struct ComPtr<IVirtualDesktopManagerInternal>
		{
			~ComPtr<IVirtualDesktopManagerInternal>();
		};

		class ComPtr<IVirtualDesktopNotificationService>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IVirtualDesktopNotificationService>();
		};

		class ComPtr<IWICBitmap>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IWICBitmap>();
		};

		class ComPtr<IWICBitmapDecoder>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IWICBitmapDecoder>();
		};

		class ComPtr<IWICBitmapEncoder>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IWICBitmapFrameDecode>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IWICBitmapFrameDecode>();
		};

		class ComPtr<IWICBitmapFrameEncode>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IWICBitmapLock>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IWICBitmapLock>();
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
			void InternalAddRef();
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

		class ComPtr<IWcmListener>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IWcmListener>();
		};

		struct ComPtr<IWcmListenerEvents>
		{
			~ComPtr<IWcmListenerEvents>();
		};

		class ComPtr<IWcmTetheringEvents>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IWcmTetheringEvents>();
		};

		class ComPtr<IWin32ApplicationView>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IWin32ApplicationView>();
		};

		class ComPtr<IWinRTApplicationView>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IWinRTApplicationView>();
		};

		class ComPtr<IWinRTIconLoadData>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IWinRTIconLoadData>();
		};

		class ComPtr<IWpnPlatform>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IWpnPlatform>();
		};

		class ComPtr<IWpnPresentationEndpoint>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		};

		class ComPtr<IWpnRegistrationEndpoint>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IWpnRegistrationEndpoint>();
		};

		struct ComPtr<NotificationDataSink>
		{
			~ComPtr<NotificationDataSink>();
		};

		class ComPtr<PenWorkspaceButton>
		{
		protected:
			void InternalAddRef();
		public:
			~ComPtr<PenWorkspaceButton>();
		};

		class ComPtr<PinnedWebsiteIconLoader>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<PinnedWebsiteIconLoader>();
		};

		class ComPtr<ShellIconLoader>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			void Attach(ShellIconLoader *);
			~ComPtr<ShellIconLoader>();
		};

		class ComPtr<SpeechPlatform::Settings::ISpAudioOrchestratorPolicyKeyFilter>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<SpeechPlatform::Settings::ISpAudioOrchestratorPolicyKeyFilter>();
		};

		class ComPtr<StubImmersiveApplication>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<StubImmersiveApplication>();
		};

		class ComPtr<TaskItemFilter>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<TaskItemFilterFactory>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<TileBadgeProvider::WpnInitAsyncHelper>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<TileBadgeProvider>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<TrayButtonBitmapResource::Loader>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			~ComPtr<TrayButtonBitmapResource::Loader>();
		};

		class ComPtr<TrayNotificationCenterButtonImage>
		{
		protected:
			void InternalAddRef();
		public:
			~ComPtr<TrayNotificationCenterButtonImage>();
		};

		class ComPtr<TrayUI>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			~ComPtr<TrayUI>();
		};

		struct ComPtr<UserOobeHostAppManager>
		{
			void Attach(UserOobeHostAppManager *);
			~ComPtr<UserOobeHostAppManager>();
		};

		class ComPtr<Windows::ApplicationModel::Activation::IActivatedEventArgs>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::ApplicationModel::Activation::IActivatedEventArgs>();
		};

		class ComPtr<Windows::ApplicationModel::Core::ICoreApplicationPrivate>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::ApplicationModel::Internal::IStartupTaskActivator>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::ApplicationModel::Internal::IStartupTaskInternal>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::ApplicationModel::Internal::IStartupTaskInternalStatics>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::ApplicationModel::Resources::Core::IResourceManager>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::ApplicationModel::Resources::Core::IResourceManager>();
		};

		class ComPtr<Windows::ApplicationModel::Resources::Core::Internal::IResourceManagerStaticInternal>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::ApplicationModel::Resources::Core::Internal::IResourceManagerStaticInternal>();
		};

		class ComPtr<Windows::ApplicationModel::Resources::Core::Internal::ISystemResourceManagerExtensions>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::ApplicationModel::Resources::Core::Internal::ISystemResourceManagerExtensions>();
		};

		class ComPtr<Windows::Data::Xml::Dom::IXmlDocument>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Data::Xml::Dom::IXmlDocument>();
		};

		class ComPtr<Windows::Data::Xml::Dom::IXmlElement>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Data::Xml::Dom::IXmlElement>();
		};

		class ComPtr<Windows::Data::Xml::Dom::IXmlNamedNodeMap>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Data::Xml::Dom::IXmlNamedNodeMap>();
		};

		class ComPtr<Windows::Data::Xml::Dom::IXmlNode>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Data::Xml::Dom::IXmlNode>();
		};

		class ComPtr<Windows::Data::Xml::Dom::IXmlNodeList>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Data::Xml::Dom::IXmlNodeList>();
		};

		class ComPtr<Windows::Data::Xml::Dom::IXmlNodeSelector>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Data::Xml::Dom::IXmlNodeSelector>();
		};

		class ComPtr<Windows::Data::Xml::Dom::IXmlText>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Data::Xml::Dom::IXmlText>();
		};

		class ComPtr<Windows::Foundation::Collections::Detail::IPropertySetSerializer>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Foundation::Collections::Detail::IPropertySetSerializer>();
		};

		class ComPtr<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *> >
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *> >();
		};

		class ComPtr<Windows::Foundation::Collections::IMapView<HSTRING__ *,HSTRING__ *> >
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Foundation::Collections::IPropertySet>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Foundation::Collections::IPropertySet>();
		};

		class ComPtr<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Internal::StartupTaskInternal *> >
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount *> >
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

		struct ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>
		{
			~ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>();
		};

		class ComPtr<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Internal::StartupTaskInternal *> *> >
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount *> *> >
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Foundation::IAsyncOperation<Windows::Internal::Security::Authentication::Web::GetDefaultSignInAccountResult *> >
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Foundation::IAsyncOperation<Windows::Internal::Security::Authentication::Web::GetDefaultSignInAccountResult *> >();
		};

		class ComPtr<Windows::Foundation::IPropertyValue>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Foundation::IPropertyValue>();
		};

		class ComPtr<Windows::Foundation::IPropertyValueStatics>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Foundation::IPropertyValueStatics>();
		};

		class ComPtr<Windows::Foundation::IReference<Windows::Foundation::DateTime> >
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Foundation::IReference<Windows::Foundation::DateTime> >();
		};

		struct ComPtr<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::ActionCenterExperienceManager *,IInspectable *> >
		{
			~ComPtr<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::ActionCenterExperienceManager *,IInspectable *> >();
		};

		struct ComPtr<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::JumpView::JumpViewExperienceWrapper *,HSTRING__ *> >
		{
			~ComPtr<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::JumpView::JumpViewExperienceWrapper *,HSTRING__ *> >();
		};

		class ComPtr<Windows::Foundation::IUriRuntimeClass>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Foundation::IUriRuntimeClassFactory>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Globalization::NumberFormatting::INumeralSystemTranslator>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Globalization::NumberFormatting::INumeralSystemTranslator>();
		};

		class ComPtr<Windows::Internal::AssignedAccess::IAssignedAccessE3Utility>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Internal::AssignedAccess::IAssignedAccessE3Utility>();
		};

		class ComPtr<Windows::Internal::AssignedAccess::IAssignedAccessUserInfo>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Internal::ComTaskPool::CRemoteReleaseStub>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Internal::ComTaskPool::CRemoteTask>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Internal::ComTaskPool::CThread>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Internal::ComTaskPool::CThread>();
		};

		class ComPtr<Windows::Internal::IComPoolTask>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Internal::IComPoolTask>();
		};

		class ComPtr<Windows::Internal::Notifications::INotificationValueSet>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Internal::Security::Authentication::Web::IGetDefaultSignInAccountResult>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Internal::Security::Authentication::Web::IGetDefaultSignInAccountResult>();
		};

		class ComPtr<Windows::Internal::Security::Authentication::Web::ITokenBrokerInternalStatics>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Internal::Security::Authentication::Web::ITokenBrokerInternalStatics>();
		};

		class ComPtr<Windows::Internal::Security::Credentials::IWebAccountSystemInformation>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Internal::Shell::Experience::IActionCenterExperienceManager>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Internal::Shell::Experience::IActionCenterExperienceManager>();
		};

		class ComPtr<Windows::Internal::Shell::Experience::IInputDialExperienceManager>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Internal::Shell::Experience::IInputDialExperienceManager>();
		};

		class ComPtr<Windows::Internal::Shell::Experience::IPenWorkspaceExperienceManager>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Internal::Shell::Experience::IPenWorkspaceExperienceManager>();
		};

		class ComPtr<Windows::Internal::Shell::Experience::IShellExperienceManagerFactory>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Internal::Shell::Experience::IShellExperienceManagerFactory>();
		};

		class ComPtr<Windows::Internal::Shell::Experience::IVirtualTouchpadExperienceManager>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Internal::Shell::Experience::IVirtualTouchpadExperienceManager>();
		};

		class ComPtr<Windows::Internal::Shell::Holographic::IContextIdentifierStatics>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Internal::Shell::Holographic::IContextIdentifierStatics>();
		};

		struct ComPtr<Windows::Internal::Shell::JumpView::IJumpViewExperienceWrapper>
		{
			~ComPtr<Windows::Internal::Shell::JumpView::IJumpViewExperienceWrapper>();
		};

		class ComPtr<Windows::Internal::Shell::JumpView::IJumpViewParams>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Internal::Shell::JumpView::IJumpViewParams>();
		};

		class ComPtr<Windows::Management::Core::IApplicationDataManagerStatics>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Security::Credentials::IWebAccount2>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Security::Credentials::IWebAccount>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			long As<IInspectable>(Details::ComPtrRef<ComPtr<IInspectable> >);
		};

		class ComPtr<Windows::Security::Credentials::IWebAccountFactory>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Security::Credentials::IWebAccountProvider>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Security::Credentials::IWebAccountProviderFactory>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Services::TargetedContent::ITargetedContentItem>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Storage::IApplicationData>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Storage::IStorageFolder>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Storage::IStorageItem>
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

		class ComPtr<Windows::System::Internal::ISignInStateManager>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::System::Internal::IUserManagerStatics>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::UI::Notifications::IToastNotification2>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::UI::Notifications::IToastNotification2>();
		};

		class ComPtr<Windows::UI::Notifications::IToastNotification>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::UI::Notifications::IToastNotification>();
		};

		class ComPtr<Windows::UI::Notifications::IToastNotificationFactory>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::UI::Notifications::IToastNotificationFactory>();
		};

		class ComPtr<Windows::UI::Notifications::IToastNotificationHistory>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::UI::Notifications::IToastNotificationHistory>();
		};

		class ComPtr<Windows::UI::Notifications::IToastNotificationManagerStatics2>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::UI::Notifications::IToastNotificationManagerStatics2>();
		};

		class ComPtr<Windows::UI::Notifications::IToastNotificationManagerStatics>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::UI::Notifications::IToastNotificationManagerStatics>();
		};

		class ComPtr<Windows::UI::Notifications::IToastNotifier>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::UI::Notifications::IToastNotifier>();
		};

		class ComPtr<Windows::UI::ViewManagement::IActivationViewSwitcher>
		{
		protected:
			void InternalAddRef();
		};

		class ComPtr<wil::details::DummyUnknown>
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
			class ImplementsHelper<RuntimeClassFlags<1>,0,CActivatedEventArgsWithPrelaunchAndViewIdBase,IWeakReferenceSource,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2>
			{
			protected:
				long CanCastToHelper<1>(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,1,CActivatedEventArgsBase,Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs,Windows::ApplicationModel::Activation::IViewSwitcherProvider,CloakedIid<Windows::ApplicationModel::Activation::IInitializeApplicationViewActivatedEventArgs>,CloakedIid<Windows::ApplicationModel::Activation::IMultiviewActivationProperties> >
			{
			protected:
				long CanCastToHelper<1>(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,1,CloakedIid<Windows::ApplicationModel::Activation::IForegroundActivationMode>,CloakedIid<Windows::ApplicationModel::Activation::INavigationActivatedEventArgs>,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<2>,0,ITrayDeskBand,IStartButtonSite,IActiveZBandNotification,ITrayUI,ITrayComponentHost,IStateCapture>
			{
			protected:
				long CanCastToHelper<0>(_GUID const &,void * *,bool *);
			};

			struct ImplementsHelper<RuntimeClassFlags<2>,1,FtmBase>
			{
				ImplementsHelper<RuntimeClassFlags<2>,1,FtmBase>();
				~ImplementsHelper<RuntimeClassFlags<2>,1,FtmBase>();
			};

			class ImplementsHelper<RuntimeClassFlags<2>,1,ILayoutPreferencesOnAppLaunch,IExecuteCommandHost,ILocalCopyDownloadSettings,IWakeOnRPCCalls,ILaunchTargetMonitor,FtmBase>
			{
			protected:
				long CanCastToHelper<0>(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,CloakedIid<CWrlLightweightHandlerServer>,CloakedIid<IConfigureWindowFactory>,CloakedIid<ICoreWindowFactoryPriv> >
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			struct MakeAllocator<AsyncResultHelpers::AsyncResult<NotificationCenterBadgeRenderResult> >
			{
				~MakeAllocator<AsyncResultHelpers::AsyncResult<NotificationCenterBadgeRenderResult> >();
			};

			struct MakeAllocator<AsyncResultHelpers::AsyncResult<SettingsBitmapLoadInfo> >
			{
				~MakeAllocator<AsyncResultHelpers::AsyncResult<SettingsBitmapLoadInfo> >();
			};

			struct MakeAllocator<AsyncResultHelpers::AsyncResult<TaskbarBadgeVisualRenderResult> >
			{
				~MakeAllocator<AsyncResultHelpers::AsyncResult<TaskbarBadgeVisualRenderResult> >();
			};

			struct MakeAllocator<BadgeContainer>
			{
				~MakeAllocator<BadgeContainer>();
			};

			struct MakeAllocator<BadgeVisualFactory>
			{
				~MakeAllocator<BadgeVisualFactory>();
			};

			struct MakeAllocator<CAppReadinessTaskCompletionHelper>
			{
				~MakeAllocator<CAppReadinessTaskCompletionHelper>();
			};

			struct MakeAllocator<CLogonTaskFramework::CConnectedIdentityCallback>
			{
				~MakeAllocator<CLogonTaskFramework::CConnectedIdentityCallback>();
			};

			struct MakeAllocator<CLogonTaskFramework::CConnectivityHelper>
			{
				~MakeAllocator<CLogonTaskFramework::CConnectivityHelper>();
			};

			struct MakeAllocator<CLogonTaskFramework>
			{
				~MakeAllocator<CLogonTaskFramework>();
			};

			struct MakeAllocator<CSyncAtLogonTask>
			{
				~MakeAllocator<CSyncAtLogonTask>();
			};

			struct MakeAllocator<CTrayAnimationManager>
			{
				~MakeAllocator<CTrayAnimationManager>();
			};

			struct MakeAllocator<CTrayAppIdentity>
			{
				~MakeAllocator<CTrayAppIdentity>();
			};

			struct MakeAllocator<CTrayAppIdentityResolver>
			{
				~MakeAllocator<CTrayAppIdentityResolver>();
			};

			struct MakeAllocator<CTrayBalloonInfoTipManager>
			{
				~MakeAllocator<CTrayBalloonInfoTipManager>();
			};

			struct MakeAllocator<CTrayChevron>
			{
				~MakeAllocator<CTrayChevron>();
			};

			struct MakeAllocator<CTrayOverflow>
			{
				~MakeAllocator<CTrayOverflow>();
			};

			struct MakeAllocator<CWcmListener>
			{
				~MakeAllocator<CWcmListener>();
			};

			struct MakeAllocator<CWinRTAppIconLoader>
			{
				~MakeAllocator<CWinRTAppIconLoader>();
			};

			struct MakeAllocator<CredentialResetHostAppManager>
			{
				~MakeAllocator<CredentialResetHostAppManager>();
			};

			struct MakeAllocator<PinnedWebsiteIconLoader>
			{
				~MakeAllocator<PinnedWebsiteIconLoader>();
			};

			struct MakeAllocator<ShellIconLoader>
			{
				~MakeAllocator<ShellIconLoader>();
			};

			struct MakeAllocator<TrayUI>
			{
				~MakeAllocator<TrayUI>();
			};

			struct MakeAllocator<UserOobeHostAppManager>
			{
				~MakeAllocator<UserOobeHostAppManager>();
			};

			struct ModuleBase
			{
				static ModuleBase * module_;
			};

			class RuntimeClassBaseT<1>
			{
			protected:
				static long GetImplementedIIDS<RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,CActivatedEventArgsWithPrelaunchAndViewIdBase,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2> >(RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,CActivatedEventArgsWithPrelaunchAndViewIdBase,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2> *,unsigned long *,_GUID * *);
			};

			class RuntimeClassBaseT<2>
			{
			protected:
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,CWRLObjectWithGITSite,IServiceProvider,IShouldSwitchToDesktop,ILayoutPreferencesOnAppLaunch,IExecuteCommandHost,ILocalCopyDownloadSettings,IWakeOnRPCCalls,ILaunchTargetMonitor,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,CWRLObjectWithGITSite,IServiceProvider,IShouldSwitchToDesktop,ILayoutPreferencesOnAppLaunch,IExecuteCommandHost,ILocalCopyDownloadSettings,IWakeOnRPCCalls,ILaunchTargetMonitor,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,CXHHostAppManagerBase,IOOBEExperienceNotification> >(RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,CXHHostAppManagerBase,IOOBEExperienceNotification> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,CXHHostAppManagerBase> >(RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,CXHHostAppManagerBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ChainInterfaces<IEndAccessibilityElement,IAccessibleEx,Nil,Nil,Nil,Nil,Nil,Nil,Nil,Nil>,IRawElementProviderSimple> >(RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ChainInterfaces<IEndAccessibilityElement,IAccessibleEx,Nil,Nil,Nil,Nil,Nil,Nil,Nil,Nil>,IRawElementProviderSimple> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ITrayImmersiveShellProxy,IServiceProvider,IMultitaskingViewVisibilityService,IMultitaskingViewVisibilityNotification,IActiveZBandNotificationService,IActiveZBandNotification> >(RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ITrayImmersiveShellProxy,IServiceProvider,IMultitaskingViewVisibilityService,IMultitaskingViewVisibilityNotification,IActiveZBandNotificationService,IActiveZBandNotification> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ITrayInfoTip,Windows::Foundation::ITypedEventHandler<Windows::UI::Notifications::ToastNotification *,IInspectable *>,Windows::Foundation::ITypedEventHandler<Windows::UI::Notifications::ToastNotification *,Windows::UI::Notifications::ToastDismissedEventArgs *>,Windows::Foundation::ITypedEventHandler<Windows::UI::Notifications::ToastNotification *,Windows::UI::Notifications::ToastFailedEventArgs *> > >(RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ITrayInfoTip,Windows::Foundation::ITypedEventHandler<Windows::UI::Notifications::ToastNotification *,IInspectable *>,Windows::Foundation::ITypedEventHandler<Windows::UI::Notifications::ToastNotification *,Windows::UI::Notifications::ToastDismissedEventArgs *>,Windows::Foundation::ITypedEventHandler<Windows::UI::Notifications::ToastNotification *,Windows::UI::Notifications::ToastFailedEventArgs *> > *,_GUID const &,void * *);
			};

			class RuntimeClassBaseT<3>
			{
			protected:
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,CImmersiveWindowFactoryBase> >(RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,CImmersiveWindowFactoryBase> *,_GUID const &,void * *);
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,CActivatedEventArgsWithPrelaunchAndViewIdBase,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,CActivatedEventArgsWithPrelaunchAndViewIdBase,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Implements<RuntimeClassFlags<2>,IIconLoadingFunctions,FtmBase> >
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Implements<RuntimeClassFlags<2>,IIconLoadingFunctions,FtmBase> >();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,CWRLObjectWithGITSite,IServiceProvider,IShouldSwitchToDesktop,ILayoutPreferencesOnAppLaunch,IExecuteCommandHost,ILocalCopyDownloadSettings,IWakeOnRPCCalls,ILaunchTargetMonitor,FtmBase>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,CXHHostAppManagerBase,IOOBEExperienceNotification>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,CXHHostAppManagerBase>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ChainInterfaces<IEndAccessibilityElement,IAccessibleEx,Nil,Nil,Nil,Nil,Nil,Nil,Nil,Nil>,IRawElementProviderSimple>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,FtmBase>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IAccPropServer>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IAppReadinessTaskCallback,FtmBase>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IApplicationUsageTracker,IShellTelemetryHelper>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IAsyncCallback,FtmBase>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IBadgeContainer,IBadgeRenderNotifications>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IBadgeData>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IBadgeRenderNotifications,IUIAnimationStoryboardEventHandler>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IBadgeVisualFactory>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IBadgeVisualProperties>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IBadgeVisualRenderRequest>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IDropTarget,IUIAnimationStoryboardEventHandler>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IIconContainer,IIconLoaderNotifications2>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IIdentityAdvise>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IImmersiveApplication>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ILambda>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ILogonFramework>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,INotificationActivationCallback>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,INotificationCB,ITrayAppIdentityResolver>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,INotificationControllerDataSink>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IPersist,IOleWindow>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ITaskItemFilter>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ITaskItemFilterFactory>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ITaskListAnimation,IUIAnimationTimerEventHandler>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ITaskListExtendedUI,IObjectWithSite,IExtendedUISwitcher,IDropTarget,ITaskThumbnailHost,IUIAnimationStoryboardEventHandler>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ITileBadgeProvider,ITileBadgeProviderInternal,IWpnPresentationTileSink>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ITrayAppIdentity>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ITrayDeskBand,IStartButtonSite,IActiveZBandNotification,ITrayUI,ITrayComponentHost,IStateCapture>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ITrayImmersiveShellProxy,IServiceProvider,IMultitaskingViewVisibilityService,IMultitaskingViewVisibilityNotification,IActiveZBandNotificationService,IActiveZBandNotification>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ITrayInfoTip,Windows::Foundation::ITypedEventHandler<Windows::UI::Notifications::ToastNotification *,IInspectable *>,Windows::Foundation::ITypedEventHandler<Windows::UI::Notifications::ToastNotification *,Windows::UI::Notifications::ToastDismissedEventArgs *>,Windows::Foundation::ITypedEventHandler<Windows::UI::Notifications::ToastNotification *,Windows::UI::Notifications::ToastFailedEventArgs *> >
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ITrayInfoTipEvents>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ITrayInfoTipManager,ITrayInfoTipToastManager>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ITrayInfoTipManager>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ITrayInteractionEvents>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IUIAnimationStoryboardEventHandler>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IUnknown>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IWcmListener>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IWcmListenerEvents>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IWeakReference>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IconLoadDataBase,ChainInterfaces<IShellIconLoadData,IIconLoadData,Nil,Nil,Nil,Nil,Nil,Nil,Nil,Nil> >
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IconLoadDataBase,ChainInterfaces<IWinRTIconLoadData,IIconLoadData,Nil,Nil,Nil,Nil,Nil,Nil,Nil,Nil> >
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IconLoadDataBase,IPinnedWebsiteIconLoadData>
			{
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

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncActionCompletedHandler>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<HSTRING__ *> *>,FtmBase>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Internal::StartupTaskInternal *> *>,FtmBase>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount *> *>,FtmBase>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::Security::Authentication::Web::GetDefaultSignInAccountResult *>,FtmBase>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Services::TargetedContent::TargetedContentContainer *>,FtmBase>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Services::TargetedContent::TargetedContentSubscription *>,FtmBase>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::ActionCenterExperienceManager *,IInspectable *> >
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::JumpView::JumpViewExperienceWrapper *,HSTRING__ *> >
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

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,CImmersiveWindowFactoryBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,CImmersiveWindowFactoryBase>();
			};

			struct WeakReferenceImpl
			{
				WeakReferenceImpl(IUnknown *);
				virtual long Resolve(_GUID const &,IInspectable * *);
			};

			ComPtr<CAsyncLoadResult> Make<CAsyncLoadResult,IWinRTIconLoadData * &,IIconLoaderNotifications2 * &>(IWinRTIconLoadData * &,IIconLoaderNotifications2 * &);
			Details::WeakReferenceImpl * CreateWeakReference(IUnknown *);
			long MakeAndInitialize<BadgeContainer,BadgeContainer,IBadgeContainerNotifications * &>(BadgeContainer * *,IBadgeContainerNotifications * &);
			long MakeAndInitialize<BadgeVisualFactory,IBadgeVisualFactory,unsigned int &>(IBadgeVisualFactory * *,unsigned int &);
			long MakeAndInitialize<BadgeVisualProperties,BadgeVisualProperties,IBadgeData * &,BadgeVisualColors const &,float &,float &>(BadgeVisualProperties * *,IBadgeData * &,BadgeVisualColors const &,float &,float &);
			long MakeAndInitialize<CLaunchActivatedEventArgs,CLaunchActivatedEventArgs,HSTRING__ * &,HSTRING__ * &>(CLaunchActivatedEventArgs * *,HSTRING__ * &,HSTRING__ * &);
			long MakeAndInitialize<CStaticAppIdentity,ITrayAppIdentity,unsigned short const * &>(ITrayAppIdentity * *,unsigned short const * &);
			long MakeAndInitialize<CSyncAtLogonTask,CSyncAtLogonTask,unsigned long &,unsigned short const * &,unsigned long &,unsigned short const * &,unsigned long &,unsigned short const * &,_GUID const &,bool &,bool &>(CSyncAtLogonTask * *,unsigned long &,unsigned short const * &,unsigned long &,unsigned short const * &,unsigned long &,unsigned short const * &,_GUID const &,bool &,bool &);
			long MakeAndInitialize<CTaskListThumbnailWnd,CTaskListThumbnailWnd,HINSTANCE__ * &,unsigned int &,ITrayComponentHost * &>(CTaskListThumbnailWnd * *,HINSTANCE__ * &,unsigned int &,ITrayComponentHost * &);
			long MakeAndInitialize<CTrayAppIdentity,ITrayAppIdentity,unsigned short const * &,_GUID &,unsigned short (&)[2084]>(ITrayAppIdentity * *,unsigned short const * &,_GUID &,unsigned short (&)[2084]);
			long MakeAndInitialize<CTrayBalloonInfoTipManager,ITrayInfoTipManager,CTrayItemController * &,ITrayInfoTipEvents * &,HWND__ * &,ITrayComponentHost * &>(ITrayInfoTipManager * *,CTrayItemController * &,ITrayInfoTipEvents * &,HWND__ * &,ITrayComponentHost * &);
			long MakeAndInitialize<CTrayToastActivator,IUnknown,ITrayComponentHost * &>(IUnknown * *,ITrayComponentHost * &);
			long MakeAndInitialize<CTrayToastInfoTipManager,ITrayInfoTipManager,CTrayItemController * &,ITrayInfoTipEvents * &,ITrayComponentHost * &>(ITrayInfoTipManager * *,CTrayItemController * &,ITrayInfoTipEvents * &,ITrayComponentHost * &);
			long MakeAndInitialize<CWinRTAppIconLoader,CWinRTAppIconLoader,IWinRTIconLoadData * &,IIconLoaderNotifications2 * &>(CWinRTAppIconLoader * *,IWinRTIconLoadData * &,IIconLoaderNotifications2 * &);
			long MakeAndInitialize<CredentialResetHostAppManager,IHostAppManager,unsigned short * &>(IHostAppManager * *,unsigned short * &);
			long MakeAndInitialize<CredentialResetHostAppManager,IHostAppManager,unsigned short const * &>(IHostAppManager * *,unsigned short const * &);
			long MakeAndInitialize<EndAccessibilityElement,IAccessibleEx,ITaskListAcc * &>(IAccessibleEx * *,ITaskListAcc * &);
			long MakeAndInitialize<IconContainer,IIconContainer,IIconContainerNotifications * &>(IIconContainer * *,IIconContainerNotifications * &);
			long MakeAndInitialize<PinnedWebsiteIconLoadData,IUnknown,_ITEMIDLIST_ABSOLUTE const * &>(IUnknown * *,_ITEMIDLIST_ABSOLUTE const * &);
			long MakeAndInitialize<PinnedWebsiteIconLoader,PinnedWebsiteIconLoader,IPinnedWebsiteIconLoadData * &,IIconLoaderNotifications2 * &>(PinnedWebsiteIconLoader * *,IPinnedWebsiteIconLoadData * &,IIconLoaderNotifications2 * &);
			long MakeAndInitialize<ShellIconLoadData,IShellIconLoadData,HWND__ * &,HWND__ * &>(IShellIconLoadData * *,HWND__ * &,HWND__ * &);
			long MakeAndInitialize<ShellIconLoader,ShellIconLoader,IShellIconLoadData * &,IIconLoaderNotifications2 * &,IIconLoadingFunctions * &>(ShellIconLoader * *,IShellIconLoadData * &,IIconLoaderNotifications2 * &,IIconLoadingFunctions * &);
			long MakeAndInitialize<StubImmersiveApplication,StubImmersiveApplication,unsigned short const * &>(StubImmersiveApplication * *,unsigned short const * &);
			long MakeAndInitialize<TaskItemFilterFactory,TaskItemFilterFactory,unsigned long &,ITrayComponentHost * &>(TaskItemFilterFactory * *,unsigned long &,ITrayComponentHost * &);
			long MakeAndInitialize<TrayUI,TrayUI,ITrayUIHost * &>(TrayUI * *,ITrayUIHost * &);
			long MakeAndInitialize<UserOobeHostAppManager,IHostAppManager,unsigned short const * &>(IHostAppManager * *,unsigned short const * &);
			long MakeAndInitialize<WinRTIconLoadData,IWinRTIconLoadData,unsigned short const * &,IImmersiveApplication * &,unsigned int &>(IWinRTIconLoadData * *,unsigned short const * &,IImmersiveApplication * &,unsigned int &);
			long MakeAndInitialize<Windows::Internal::ComTaskPool::CRemoteTask,Windows::Internal::ComTaskPool::CRemoteTask,Windows::Internal::IComPoolTask * &>(Windows::Internal::ComTaskPool::CRemoteTask * *,Windows::Internal::IComPoolTask * &);
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
			~FtmBase();
		};

		struct Implements<RuntimeClassFlags<2>,HostAppManagerBase,IHostAppManager,IFullscreenCloudExperienceManagerNotification>
		{
			~Implements<RuntimeClassFlags<2>,HostAppManagerBase,IHostAppManager,IFullscreenCloudExperienceManagerNotification>();
		};

		struct RuntimeClass<CActivatedEventArgsWithPrelaunchAndViewIdBase,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2>
		{
			RuntimeClass<CActivatedEventArgsWithPrelaunchAndViewIdBase,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2>();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,CWRLObjectWithGITSite,IServiceProvider,IShouldSwitchToDesktop,ILayoutPreferencesOnAppLaunch,IExecuteCommandHost,ILocalCopyDownloadSettings,IWakeOnRPCCalls,ILaunchTargetMonitor,FtmBase>
		{
			RuntimeClass<RuntimeClassFlags<2>,CWRLObjectWithGITSite,IServiceProvider,IShouldSwitchToDesktop,ILayoutPreferencesOnAppLaunch,IExecuteCommandHost,ILocalCopyDownloadSettings,IWakeOnRPCCalls,ILaunchTargetMonitor,FtmBase>();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,CXHHostAppManagerBase,IOOBEExperienceNotification>
		{
			RuntimeClass<RuntimeClassFlags<2>,CXHHostAppManagerBase,IOOBEExperienceNotification>();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,CXHHostAppManagerBase>
		{
			RuntimeClass<RuntimeClassFlags<2>,CXHHostAppManagerBase>();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,FtmBase>
		{
			RuntimeClass<RuntimeClassFlags<2>,FtmBase>();
			virtual ~RuntimeClass<RuntimeClassFlags<2>,FtmBase>();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,IAppReadinessTaskCallback,FtmBase>
		{
			virtual ~RuntimeClass<RuntimeClassFlags<2>,IAppReadinessTaskCallback,FtmBase>();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,IApplicationUsageTracker,IShellTelemetryHelper>
		{
			virtual ~RuntimeClass<RuntimeClassFlags<2>,IApplicationUsageTracker,IShellTelemetryHelper>();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,IAsyncCallback,FtmBase>
		{
			RuntimeClass<RuntimeClassFlags<2>,IAsyncCallback,FtmBase>();
			virtual ~RuntimeClass<RuntimeClassFlags<2>,IAsyncCallback,FtmBase>();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,IBadgeContainer,IBadgeRenderNotifications>
		{
			virtual ~RuntimeClass<RuntimeClassFlags<2>,IBadgeContainer,IBadgeRenderNotifications>();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,IBadgeRenderNotifications,IUIAnimationStoryboardEventHandler>
		{
			virtual ~RuntimeClass<RuntimeClassFlags<2>,IBadgeRenderNotifications,IUIAnimationStoryboardEventHandler>();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,ILambda>
		{
			RuntimeClass<RuntimeClassFlags<2>,ILambda>();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,INotificationCB,ITrayAppIdentityResolver>
		{
			virtual ~RuntimeClass<RuntimeClassFlags<2>,INotificationCB,ITrayAppIdentityResolver>();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,ITaskListExtendedUI,IObjectWithSite,IExtendedUISwitcher,IDropTarget,ITaskThumbnailHost,IUIAnimationStoryboardEventHandler>
		{
			RuntimeClass<RuntimeClassFlags<2>,ITaskListExtendedUI,IObjectWithSite,IExtendedUISwitcher,IDropTarget,ITaskThumbnailHost,IUIAnimationStoryboardEventHandler>();
			virtual ~RuntimeClass<RuntimeClassFlags<2>,ITaskListExtendedUI,IObjectWithSite,IExtendedUISwitcher,IDropTarget,ITaskThumbnailHost,IUIAnimationStoryboardEventHandler>();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,ITrayAppIdentity>
		{
			RuntimeClass<RuntimeClassFlags<2>,ITrayAppIdentity>();
			virtual ~RuntimeClass<RuntimeClassFlags<2>,ITrayAppIdentity>();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,ITrayDeskBand,IStartButtonSite,IActiveZBandNotification,ITrayUI,ITrayComponentHost,IStateCapture>
		{
			virtual ~RuntimeClass<RuntimeClassFlags<2>,ITrayDeskBand,IStartButtonSite,IActiveZBandNotification,ITrayUI,ITrayComponentHost,IStateCapture>();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,ITrayImmersiveShellProxy,IServiceProvider,IMultitaskingViewVisibilityService,IMultitaskingViewVisibilityNotification,IActiveZBandNotificationService,IActiveZBandNotification>
		{
			virtual ~RuntimeClass<RuntimeClassFlags<2>,ITrayImmersiveShellProxy,IServiceProvider,IMultitaskingViewVisibilityService,IMultitaskingViewVisibilityNotification,IActiveZBandNotificationService,IActiveZBandNotification>();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,ITrayInfoTip,Windows::Foundation::ITypedEventHandler<Windows::UI::Notifications::ToastNotification *,IInspectable *>,Windows::Foundation::ITypedEventHandler<Windows::UI::Notifications::ToastNotification *,Windows::UI::Notifications::ToastDismissedEventArgs *>,Windows::Foundation::ITypedEventHandler<Windows::UI::Notifications::ToastNotification *,Windows::UI::Notifications::ToastFailedEventArgs *> >
		{
			virtual ~RuntimeClass<RuntimeClassFlags<2>,ITrayInfoTip,Windows::Foundation::ITypedEventHandler<Windows::UI::Notifications::ToastNotification *,IInspectable *>,Windows::Foundation::ITypedEventHandler<Windows::UI::Notifications::ToastNotification *,Windows::UI::Notifications::ToastDismissedEventArgs *>,Windows::Foundation::ITypedEventHandler<Windows::UI::Notifications::ToastNotification *,Windows::UI::Notifications::ToastFailedEventArgs *> >();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,ITrayInfoTipManager,ITrayInfoTipToastManager>
		{
			virtual ~RuntimeClass<RuntimeClassFlags<2>,ITrayInfoTipManager,ITrayInfoTipToastManager>();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,ITrayInfoTipManager>
		{
			virtual ~RuntimeClass<RuntimeClassFlags<2>,ITrayInfoTipManager>();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,IUIAnimationStoryboardEventHandler>
		{
			RuntimeClass<RuntimeClassFlags<2>,IUIAnimationStoryboardEventHandler>();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,IUnknown>
		{
			RuntimeClass<RuntimeClassFlags<2>,IUnknown>();
			virtual ~RuntimeClass<RuntimeClassFlags<2>,IUnknown>();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,IWcmListener>
		{
			virtual ~RuntimeClass<RuntimeClassFlags<2>,IWcmListener>();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,IWcmListenerEvents>
		{
			virtual ~RuntimeClass<RuntimeClassFlags<2>,IWcmListenerEvents>();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,Windows::Foundation::IAsyncActionCompletedHandler>
		{
			RuntimeClass<RuntimeClassFlags<2>,Windows::Foundation::IAsyncActionCompletedHandler>();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::ActionCenterExperienceManager *,IInspectable *> >
		{
			RuntimeClass<RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::ActionCenterExperienceManager *,IInspectable *> >();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::JumpView::JumpViewExperienceWrapper *,HSTRING__ *> >
		{
			RuntimeClass<RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::JumpView::JumpViewExperienceWrapper *,HSTRING__ *> >();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>
		{
			RuntimeClass<RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>();
			virtual ~RuntimeClass<RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>();
		};

		namespace Wrappers
		{
			struct AutoSelectObject<HBITMAP__ *>
			{
				~AutoSelectObject<HBITMAP__ *>();
			};

			struct AutoSelectObject<HFONT__ *>
			{
				~AutoSelectObject<HFONT__ *>();
			};

			class ClientDC
			{
			protected:
				virtual bool InternalClose();
			public:
				ClientDC(HWND__ *);
				~ClientDC();
			};

			class CompatibleDC
			{
			protected:
				virtual bool InternalClose();
			public:
				CompatibleDC(HDC__ *);
				~CompatibleDC();
			};

			struct CriticalSection
			{
				Details::SyncLockCriticalSection Lock();
				~CriticalSection();
			};

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

			struct Event
			{
				~Event();
			};

			struct HString
			{
				long Set(unsigned short const *,unsigned int);
				long Set<unsigned short *>(unsigned short * const &,Details::Dummy);
				long Set<unsigned short const *>(unsigned short const * const &,Details::Dummy);
				~HString();
			};

			class HStringReference
			{
				static unsigned int AddOne(unsigned int);
				void CreateReference(unsigned short const *,unsigned int,unsigned int);
			public:
				HStringReference<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short> > >(Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short> > const &,Details::Dummy);
				HStringReference<unsigned short const *>(unsigned short const * const &,Details::Dummy);
				~HStringReference();
			};

			class HandleT<HandleTraits::ClientDCTraits>
			{
			protected:
				virtual bool InternalClose();
			};

			class HandleT<HandleTraits::CompatibleDCTraits>
			{
			protected:
				virtual bool InternalClose();
			};

			class HandleT<HandleTraits::EventTraits>
			{
			protected:
				virtual bool InternalClose();
			public:
				void Close();
			};

			class HandleT<HandleTraits::HANDLENullTraits>
			{
			protected:
				virtual bool InternalClose();
			public:
				void Close();
			};

			class HandleT<HandleTraits::HBITMAPTraits>
			{
			protected:
				virtual bool InternalClose();
			};

			struct RoInitializeWrapper
			{
				~RoInitializeWrapper();
			};

			struct SRWLock
			{
				~SRWLock();
			};

		};

	};

};

namespace MobilityExperience
{
	namespace Triggers
	{
		long ReportUsageIfAppropriate(Triggers::MobilityExperienceUsageType);
	};

};

namespace Mockable
{
	CloudRampStatus GetRampStatus(CloudRampFeature);
	bool IsCurrentUserConnected();
};

struct NOTIFYCBNODE
{
	~NOTIFYCBNODE();
};

namespace NotificationCenterUITelemetry
{
	struct NotificationCenterTelemetry
	{
		class DismissActionCenter
		{
		protected:
			virtual bool WasAlreadyReportedToTelemetry(long);
			virtual void StopActivity();
		public:
			void StartActivity(DismissMethod,InputType);
			~DismissActionCenter();
		};

		class InitializeNotificationButtonExperience
		{
		protected:
			virtual bool WasAlreadyReportedToTelemetry(long);
			virtual void StopActivity();
		public:
			void StartActivity();
			~InitializeNotificationButtonExperience();
		};

		class InitializeNotificationButtonStatus
		{
		protected:
			virtual bool WasAlreadyReportedToTelemetry(long);
			virtual void StopActivity();
		public:
			void StartActivity();
			~InitializeNotificationButtonStatus();
		};

		class LaunchActionCenter
		{
		protected:
			virtual bool WasAlreadyReportedToTelemetry(long);
			virtual void StopActivity();
		public:
			void StartActivity(InvokeMethod,InputType);
			~LaunchActionCenter();
		};

		static void ClickIgnoredPreviousActionPending();
		void ActionCenterButtonStateOnShown_(__MIDL___MIDL_itf_notificationcenter_0000_0000_0001,__MIDL___MIDL_itf_notificationcenter_0000_0000_0002);
		void ContextMenuItemSelected_(tagINPUT_MESSAGE_DEVICE_TYPE,int);
	};

};

struct NotificationControllerInitializer
{
	void Initialize(HWND__ *);
	void Uninitialize();
};

struct NotificationDataSink
{
	virtual long NotificationsAdded(unsigned long,NOC_REFINED_NOTIFICATION const *,unsigned long);
	virtual long NotificationsDeleted(unsigned long,NOC_DELETED_NOTIFICATION const *,unsigned long);
	virtual long NotificationsUpdated(unsigned long,NOC_UPDATED_NOTIFICATION const *,unsigned long);
};

struct OEMMFUEnumerator
{
	OEMMFUEnumerator();
	virtual _ITEMIDLIST_ABSOLUTE * Next();
	~OEMMFUEnumerator();
};

namespace OOBE
{
	namespace Health
	{
		namespace details
		{
			struct HealthTrackingInfo
			{
				long ToString(unsigned short * *);
			};

			struct OOBEHealthTracker
			{
				OOBEHealthTracker();
				static void HandleEvent<13,long>(long);
				static void HandleEvent<14,bool>(bool);
				static void HandleEvent<16,bool>(bool);
				static void HandleEvent<17,long>(long);
				static void HandleEvent<23,bool>(bool);
				~OOBEHealthTracker();
			};

			class OOBEScenarioEvents
			{
				long Evaluate();
				long GetImageIdentifier(unsigned short * *);
				void ReadInfo(HealthInfoHeader &,int,bool &,bool &,unsigned short const *);
				void SetHealthEventValueMember<bool>(bool &,bool const &);
				void SetHealthEventValueMember<int>(int &,int const &);
				void SetHealthEventValueMember<long>(long &,long const &);
				void WriteInfo<CensusTrackingInfo>(HealthInfoHeader &,CensusTrackingInfo &,bool &,bool &,unsigned short const *);
				void WriteInfo<HealthEvaluationInfo>(HealthInfoHeader &,HealthEvaluationInfo &,bool &,bool &,unsigned short const *);
				void WriteInfo<HealthTrackingInfo>(HealthInfoHeader &,HealthTrackingInfo &,bool &,bool &,unsigned short const *);
			public:
				void SetEventValue<17,long>(long);
			};

		};

	};

};

struct ObjectArrayAdapter<IApplicationView>
{
	class Iterator
	{
		void GetCurrentObject();
	public:
		Iterator(ObjectArrayAdapter<IApplicationView> * const,unsigned int);
		~Iterator();
	};

	ObjectArrayAdapter<IApplicationView>(IObjectArray *);
	~ObjectArrayAdapter<IApplicationView>();
};

struct ObjectArrayAdapter<IImmersiveMonitor>
{
	class Iterator
	{
		void GetCurrentObject();
	public:
		Iterator(ObjectArrayAdapter<IImmersiveMonitor> * const,unsigned int);
		~Iterator();
	};

	ObjectArrayAdapter<IImmersiveMonitor>(IObjectArray *);
	~ObjectArrayAdapter<IImmersiveMonitor>();
};

class PenWorkspaceButton
{
	static Microsoft::WRL::Wrappers::SRWLock m_desiredVisibilityLock;
	static TRIBIT m_userDesiredVisibility;
	static bool HasIntegratedPenDigitizer();
	static void EnsureDesiredVisibility();
protected:
	long LaunchPenWorkspaceFromPoint(ClickDevice,tagPOINT const &);
	virtual bool v_IsEnabled();
	virtual bool v_OnSize(unsigned __int64,tagSIZE);
	virtual long v_CycleHotItem(int);
	virtual long v_Initialize();
	virtual long v_OnClick(ClickDevice);
	virtual long v_UpdateTheme();
	virtual void v_GetMinimumFitSize(tagSIZE *);
public:
	PenWorkspaceButton(ITrayComponentHost *);
	static bool IsAllowedByPolicy();
	void SetEnabledState(bool);
	~PenWorkspaceButton();
};

struct PenWorkspaceSecondaryMonitorButton
{
	virtual long v_OnClick(ClickDevice);
};

namespace PeopleBarPolicy
{
	bool IsPeopleBarDisabled();
};

class PeopleButton
{
	long _RefreshFont();
protected:
	virtual HWND__ * GetHwnd();
	virtual bool v_IsAllowedByPolicy();
	virtual bool v_IsEnabled();
	virtual int GetThickness();
	virtual long OnThemeChanged();
	virtual long PositionButton(tagPOINT,tagSIZE);
	virtual long Uninitialize();
	virtual long v_Initialize();
	virtual long v_OnClick(ClickDevice);
	virtual long v_UpdateTheme();
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual void v_Paint(HDC__ *);
public:
	PeopleButton(ITrayComponentHost *,IPeopleBand *);
	virtual long QueryInterface(_GUID const &,void * *);
};

namespace PerfTrack
{
	struct AppLaunchTelemetry
	{
		void AppLaunched_(Location,unsigned short const *);
	};

	struct AppSwitchTelemetry
	{
		void AppSwitched_(SwitchLocation,unsigned short const *,SwitchInvokeMethod,unsigned short const *);
	};

};

struct PinnedWebsiteIconLoadData
{
	PinnedWebsiteIconLoadData();
	long RuntimeClassInitialize(_ITEMIDLIST_ABSOLUTE const *);
	virtual _ITEMIDLIST_ABSOLUTE const * GetShortcutPidl();
	virtual bool IsSameRequest(IIconLoadData *,RequestMatchType);
};

struct PinnedWebsiteIconLoader
{
	long RuntimeClassInitialize(IPinnedWebsiteIconLoadData *,IIconLoaderNotifications2 *);
	static long s_LoadIconSync(_ITEMIDLIST_ABSOLUTE const *,tagSIZE const &,tagSIZE const &,CAsyncLoadResult *);
};

struct PrivacyConsentLogging
{
	static _TlgProvider_t const * Provider();
};

namespace PrivacyConsentTelemetry
{
	class PrivacyConsentPrep
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~PrivacyConsentPrep();
	};

};

class ResponseMonitor
{
	void UpdateParameters();
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

class SessionChangeNotificationHandler
{
	static HWND__ * m_messageWindow;
	static __int64 SessionChangeNotificationsWndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	static long Cleanup(HINSTANCE__ *);
	static unsigned long SessionChangeNotificationsThreadProc(void *);
	static unsigned long m_sessionId;
	static void * m_threadHandle;
public:
	static long Start(unsigned long,HINSTANCE__ *);
	static void TurnOnLockScreenOverRemoteIfNeeded();
};

namespace SettingSync
{
	namespace Account
	{
		long GetAccountProperty(Windows::Security::Credentials::IWebAccount *,unsigned short const * const,unsigned short * *);
		long GetAccountType(Windows::Security::Credentials::IWebAccount *,Account::AccountType *);
		long GetAccountUniqueId(Windows::Security::Credentials::IWebAccount *,unsigned short * *);
	};

	namespace WamCollectionId
	{
		struct WamCollectionIdInfo
		{
			static long FromWamCollectionId(unsigned short const *,WamCollectionIdInfo *);
		};

		long AccountMatchesWamCollectionId(Windows::Security::Credentials::IWebAccount *,WamCollectionId::WamCollectionIdInfo const &,bool *);
		long FindAccount(WamCollectionId::WamCollectionIdInfo const &,Windows::Security::Credentials::IWebAccount * *);
		long IsWamCollectionId(unsigned short const * const,bool *);
		long RemoveAccountInfo(unsigned short const *,unsigned short * *,Windows::Security::Credentials::IWebAccount * *);
	};

};

struct ShellCacheLoadInfo
{
	ShellCacheLoadInfo(unsigned short const *,unsigned short const *,_ITEMIDLIST_ABSOLUTE const *,void *);
};

struct ShellIconLoadData
{
	ShellIconLoadData();
	virtual HICON__ * GetIcon();
	virtual HWND__ * GetActualWindow();
	virtual HWND__ * GetQueryWindow();
	virtual IconLoadPass GetIconLoadPass();
	virtual IconQuality GetIconQuality();
	virtual IconType GetType();
	virtual ShellCacheLoadInfo * GetShellCacheIconData();
	virtual bool IsSameRequest(IIconLoadData *,RequestMatchType);
	virtual bool IsSmallIconMode();
	virtual bool IsValid();
	virtual int GetImageId();
	virtual int GetPreferenceId();
	virtual int GetShellImageListId();
	virtual long SetDefaults(unsigned int,unsigned int,unsigned int,IconType,IconSizeMode,IconLoadPass,int);
	virtual unsigned int GetDPI();
	virtual unsigned int GetRequestId();
	virtual unsigned int GetStoreId();
	virtual void * GetIdentifier();
	virtual void SetIcon(HICON__ *,int,IconQuality,int);
	virtual void SetIconQuality(IconQuality);
	virtual void SetImageId(int);
	virtual void SetPreferenceId(int);
};

class ShellIconLoader
{
	struct CLoadIconTask
	{
		virtual long InternalResumeRT();
	};

	bool LoadAsyncIcon(int);
	bool LoadShellIconCacheIcon(int);
	bool LoadSyncWindowIcon(int,HICON__ * *);
	static int s_GetShellIconSize(int);
	static long s_ForceImagePresent(int,int,HICON__ * *);
	static long s_LoadIconsFromResourceSync(unsigned short const *,unsigned short,int,HICON__ * *);
	static void s_SendMessageCallback(HWND__ *,unsigned int,unsigned __int64,__int64);
	static void s_SetIconAsync(void *,void *,int,int);
	void SendMessageCallbackW(ShellIconLoader::SendMessageCallbackInfo *,HICON__ *);
	void TriggerShellIconCacheBackgroundLoad(int,int);
	void TryLoadIconFromResourceIfNeeded();
	void UpdateMembers(IShellIconLoadData *,IIconLoaderNotifications2 *,IShellTaskScheduler *,IIconLoadingFunctions *);
public:
	ShellIconLoader();
	long RuntimeClassInitialize(IShellIconLoadData *,IIconLoaderNotifications2 *,IIconLoadingFunctions *);
	long RuntimeClassInitialize(IShellIconLoadData *,IIconLoaderNotifications2 *,IShellTaskScheduler *,IIconLoadingFunctions *,IconQuality);
};

namespace ShellManagedWindowHelper
{
	bool ShouldTreatShellManagedWindowAsNotShellManaged(HWND__ *);
};

namespace ShellVersion
{
	unsigned long GetShellVersion();
};

struct SoftLandingTelemetry
{
	static void SoftLandingTrigger<unsigned short const (&)[14]>(unsigned short const (&)[14]);
};

namespace SpeechPlatform
{
	namespace Settings
	{
		namespace Details
		{
			struct RegistryStorage<unsigned long>
			{
				static long GetValue(HKEY__ * const,unsigned short const * const,unsigned short const * const,unsigned long &);
			};

		};

		struct StringCoTaskMemFree
		{
			~StringCoTaskMemFree();
		};

		long GetUserAcceptedPrivacyPolicy(HKEY__ *,unsigned short const *,bool *,bool *);
		long GetUserAcceptedPrivacyPolicy(bool *,bool *);
	};

};

namespace StartupDB
{
	struct StartupApproval
	{
		long GetBlockedItemInfo(unsigned short const *,BLOCKEDITEMINFO *);
		long Initialize(HKEY__ *,unsigned short const *,unsigned long);
		void Uninitialize();
	};

};

namespace StateCapture
{
	class CStateTelemetryHandler
	{
		long SetupTimer();
		static unsigned long GetMillisecondsToNextRun(__int64,unsigned long);
		static void s_StateTelemetryCallback(_TP_CALLBACK_INSTANCE *,void *,_TP_TIMER *);
		void CleanUpTimer();
	public:
		static long UpdateRunTimeToRegistry();
	};

	struct QuickActionsStateTelemetry
	{
		void ActionCenterQuickActionsState_(TelemetryStateCaptureType);
	};

	class ShellStateTelemetry
	{
		static bool GetRegistryStringAndSetFlag(unsigned short const *,unsigned short const *,unsigned short *,unsigned long,GlobalStateValues *,GlobalStateValues);
		static bool GetScreenSaverValue(unsigned short const *,unsigned short *,unsigned long,GlobalStateValues *,GlobalStateValues *,GlobalStateValues);
		static unsigned long GetRegistryDWORDAndSetFlag(unsigned short const *,unsigned short const *,unsigned long,GlobalStateValues *,GlobalStateValues);
	public:
		void GlobalStateCapture_(TelemetryStateCaptureType);
	};

	struct SysTrayStateTelemetry
	{
		void SysTrayAppListAggregate_(TelemetryStateCaptureType,unsigned short const *,unsigned int,unsigned short const *,unsigned int);
	};

	class TaskbarStateTelemetry
	{
		static TrayCommon::TrayLocation ExtractTrayLocation(Microsoft::WRL::ComPtr<ITaskListUI>);
		static void ExtractToolbarCounts(ICatBandManager *,unsigned int *,unsigned int *,unsigned int *,unsigned short * *,unsigned short * *);
	public:
		void PinnedItemAggregate_(TelemetryStateCaptureType,IFlexibleTaskbarPinnedList *);
		void TaskListStateCapture_(TelemetryStateCaptureType,ITaskListUI *);
		void TrayStateCapture_(TelemetryStateCaptureType,ITrayComponentHost *,ICatBandManager *);
	};

};

namespace StateManager
{
	long GetHighestStateVersion(ISettingSyncCloudService *,unsigned short const *,StateManager::Locality,bool *,unsigned short * *);
	long GetVersionFromCollectionId(unsigned short const *,unsigned int *);
	long IsFQCidHigherVersion(unsigned short const *,unsigned short const *,bool *);
};

struct StubImmersiveApplication
{
	virtual SPLASHSCREEN_ORIENTATION_PREFERENCE GetManifestedOrientationPreference();
	virtual int IsQuirkEnabled(__MIDL___MIDL_itf_shpriv_core_0000_0316_0005);
	virtual long AddBehaviorFlags(__MIDL___MIDL_itf_shpriv_core_0000_0316_0003);
	virtual long AddGhostStatusFlag(__MIDL___MIDL_itf_shpriv_core_0000_0316_0004);
	virtual long BelongsToPackage(unsigned short const *,int *);
	virtual long ContainsStronglyNamedWindow(int *);
	virtual long GetApplicationId(unsigned short * *);
	virtual long GetBehaviorFlags(__MIDL___MIDL_itf_shpriv_core_0000_0316_0003 *);
	virtual long GetCanHandleCloseRequest(int *);
	virtual long GetDestinationInformation(IImmersiveApplicationWindow * *,tagRECT *);
	virtual long GetDisplayName(unsigned short * *);
	virtual long GetMonitor(IImmersiveMonitor * *);
	virtual long GetPackageId(int,unsigned short * *);
	virtual long GetRect(tagRECT *);
	virtual long GetTimestamps(tagIMMAPPTIMESTAMPS *);
	virtual long GetTitle(unsigned short * *);
	virtual long GetUniqueId(unsigned short * *);
	virtual long GetViewData(IMMAPP_APPLICATION_VIEW_DATA *);
	virtual long GetWindows(IMMERSIVE_APPLICATION_GET_WINDOWS_FILTER,_GUID const &,void * *);
	virtual long IncrementGhostAnimationWaitCount(unsigned int);
	virtual long InvokeCharms();
	virtual long IsApplicationWindowStronglyNamed(int *);
	virtual long IsEqualByApp(IImmersiveApplication *,int *);
	virtual long IsEqualByAppId(unsigned short const *,int *);
	virtual long IsEqualByHwnd(HWND__ *,int *);
	virtual long IsForeground(int *);
	virtual long IsInteractive(int *);
	virtual long IsRunning(int *);
	virtual long IsServiceAvailable(IMMERSIVE_APPLICATION_QUERY_SERVICE_OPTION,_GUID const &,int *);
	virtual long IsSplashScreenPresented(int *);
	virtual long IsTitleBarDrawnByApp(int *);
	virtual long IsViewForSameApp(IImmersiveApplication *,int *);
	virtual long IsVisible(int *);
	virtual long NotifyApplicationWindows(unsigned int,unsigned __int64,__int64,NOTIFY_IMMERSIVE_APPLICATION_WINDOWS_OPTION,NOTIFY_IMMERSIVE_APPLICATION_WINDOWS_DELIVERY_TYPE);
	virtual long OnMinSizePreferencesUpdated(HWND__ *);
	virtual long OpenPropertyStore(IMMAPPPROPERTYSTOREFLAGS,_GUID const &,void * *);
	virtual long QueryService(IMMERSIVE_APPLICATION_QUERY_SERVICE_OPTION,unsigned long,_GUID const &,_GUID const &,void * *);
	virtual long RemoveBehaviorFlags(__MIDL___MIDL_itf_shpriv_core_0000_0316_0003);
	virtual long RemoveGhostStatusFlag(__MIDL___MIDL_itf_shpriv_core_0000_0316_0004);
	virtual long RequestCloseAsync(_GUID const &,void * *);
	virtual long SetGhostVisualStyle(__MIDL___MIDL_itf_shpriv_core_0000_0316_0001);
	virtual long SetMonitor(IImmersiveMonitor *,__MIDL___MIDL_itf_shpriv_core_0000_0316_0002);
	virtual long SetPositionerMonitor(IImmersiveMonitor *);
	virtual long SetThumbnailPreviewState(IMMAPP_SETTHUMBNAIL_PREVIEW_STATE);
	virtual long TryInvokeBack(IAsyncCallback *);
};

struct TNIdentity
{
	int GetIdentity(unsigned short const *,int *);
	int GetIdentityFromCommonPath(unsigned short const *);
	int IsIdentityCached();
};

namespace TabletModeHelpers
{
	bool IsTabletModeAutoHideEnabled();
};

class TabletModeNotificationArea
{
	TrayNotifyButton * GetButtonForWindow(HWND__ *);
	long AddTabletModeNotifyButton(tagNOTIFYITEM const &);
	long RemoveTabletModeNotifyButton(tagNOTIFYITEM const &);
	long UpdateTabletModeNotifyButton(tagNOTIFYITEM const &);
	void LayoutButtons();
	wistd::unique_ptr<TrayNotifyButton,wistd::default_delete<TrayNotifyButton> > * GetButtonMemberForGuid(_GUID);
public:
	HWND__ * GetWindowOfLastButton();
	TabletModeNotificationArea(ITrayComponentHost *);
	long GetItemRect(_GUID,HWND__ *,unsigned int,tagRECT *);
	long Initialize(HWND__ *,ITrayNotify *);
	static bool CanUseTabletModeNotifications();
	static bool IsTabletModeItem(_GUID);
	static long SetCanUseTabletModeNotifications(bool);
	virtual long Notify(unsigned long,tagNOTIFYITEM *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	void CycleHotItem(HWND__ *,int);
	void SetPosition(WTL::CRect const &,unsigned int);
	~TabletModeNotificationArea();
};

struct TaskItemFilter
{
	virtual bool IsTaskAllowed(ITaskItem *);
};

struct TaskItemFilterFactory
{
	virtual long CreateFilter(bool,HMONITOR__ *,_GUID const &,void * *);
	virtual void SetTaskbarSettings(unsigned long);
};

struct TaskbandTelemetry
{
	class EnumPinnedItems
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(bool);
		~EnumPinnedItems();
	};

	class JumplistInvocation
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		JumplistInvocation Split();
		void StartActivity(unsigned short const *);
		~JumplistInvocation();
	};

	class LaunchApplication
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(unsigned short const *);
		~LaunchApplication();
	};

	static void ExtendUIShow();
	void LivePreview_(unsigned short const *);
	void TaskListSizeChanged_(bool,bool,int,int,int);
	void ThumbarAction_(unsigned short const *,unsigned short const *,unsigned int);
};

struct TaskbarBadgeVisualRenderResult
{
	TaskbarBadgeVisualRenderResult(TaskbarBadgeVisualRenderResult const &);
	~TaskbarBadgeVisualRenderResult();
};

namespace TaskbarPinningTelemetry
{
	class PinningActivity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~PinningActivity();
	};

};

class TileBadgeProvider
{
	struct WpnInitAsyncHelper
	{
		long RuntimeClassInitialize(ITileBadgeProviderInternal *);
	};

	long CreateBadgeDataFromTileNotification(__MIDL___MIDL_itf_wpnplatform_0000_0010_0003 const &,IBadgeData * *);
	long GetBadgeValueFromMap(Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *> *,unsigned short * *);
	long OnWpnTileNotification(__MIDL___MIDL_itf_wpnplatform_0000_0010_0003 const &);
	long ParseTileNotificationWithWpn(__MIDL___MIDL_itf_wpnplatform_0000_0010_0003 const &,unsigned short * *);
	void NotifyBadgeDataUpdated(unsigned short const *,IBadgeData *);
public:
	TileBadgeProvider();
	long RuntimeClassInitialize(IBadgeDataCallback *);
	virtual long CreateBadgeData(unsigned short const *,IBadgeData * *);
	virtual long EnsureAppRegisteredForBadges(unsigned short const *);
	virtual long Initialize();
	virtual long QueryBadgeDataForApplication(unsigned short const *);
	virtual long TileRequestNotificationCompleted(__MIDL___MIDL_itf_wpnplatform_0000_0010_0003 const *,unsigned long);
	virtual long TileRequestResourceCompleted(__MIDL___MIDL_itf_wpnplatform_0000_0010_0004 const *,unsigned long);
	virtual long TileSessionImageDownloadUpdated(unsigned long,int);
	virtual long TileSessionNotificationCleared(unsigned long,__MIDL___MIDL_itf_wpnplatform_0000_0010_0005 const *,unsigned long);
	virtual long TileSessionUpdated(unsigned long,__MIDL___MIDL_itf_wpnplatform_0000_0010_0003 const *,unsigned long);
	virtual long UnregisterAppForBadges(unsigned short const *);
	virtual long WpnInitialized(IWpnPresentationEndpoint *);
	virtual void Destroy();
};

namespace TileBadgeProviderTelemetry
{
	namespace TileBadgeProviderTelemetry
	{
		class WpnInitActivity
		{
		protected:
			virtual bool WasAlreadyReportedToTelemetry(long);
			virtual void StopActivity();
		public:
			void StartActivity();
			~WpnInitActivity();
		};

		class WpnTileNotificationActivity
		{
		protected:
			virtual bool WasAlreadyReportedToTelemetry(long);
			virtual void StopActivity();
		public:
			void StartActivity(unsigned short const *);
			~WpnTileNotificationActivity();
		};

	};

};

namespace TileDataLayerItemWrappers
{
	class MRTCacheManagerInternal
	{
		static Microsoft::WRL::Wrappers::SRWLock s_MRTCacheLock;
	};

};

namespace TileIconLoader
{
	long GetIconAsStream(IShellItem *,tagSIZE,Windows::Internal::Shell::StartUI::GetIconSizing,Windows::Internal::Shell::StartUI::GetIconOptions,IStream * *);
	long PadWicBitmapIfRequired(TileIconLoader::GetIconParamsPriv &,IWICBitmapSource *,IWICBitmapSource * *);
	long ResizeBitmapIfRequired(TileIconLoader::GetIconParamsPriv &,IWICBitmapSource *,IWICBitmapSource * *);
	long ScaleWicBitmapIfRequired(TileIconLoader::GetIconParamsPriv &,IWICBitmapSource *,bool,IWICBitmapSource * *);
};

namespace TileUtils
{
	long ConvertFileUriToFilePath(unsigned short const *,unsigned short * *);
};

namespace TokenBrokerHelpers
{
	bool ShouldUseDefaultUnconnectedAccount();
	long GetConnectedAccountProviderIdForProvider(Windows::Security::Credentials::IWebAccountProvider *,_GUID *);
	long GetConnectedAccountsEnum(wistd::function<long (Windows::Security::Credentials::IWebAccount *)>);
	long GetDefaultUnconnectedAccount(unsigned short const *,_GUID const &,void * *);
	long GetDefaultUnconnectedSyncProvider(_GUID *);
	long GetScope(Windows::Security::Credentials::IWebAccount *,Windows::Security::Authentication::Web::Provider::WebAccountScope *);
	long GetUserInfoFromWebAccount(Windows::Security::Credentials::IWebAccount *,unsigned short * *,unsigned short * *,unsigned short * *);
	long IsAccountConnected(Windows::Security::Credentials::IWebAccount *,bool *);
};

class TouchpadButton
{
	bool _HasDigitizer();
	void _EnsureDesiredVisibility();
protected:
	virtual bool v_IsEnabled();
	virtual long v_CycleHotItem(int);
	virtual long v_Initialize();
	virtual long v_OnClick(ClickDevice);
	virtual long v_UpdateTheme();
	virtual void v_GetMinimumFitSize(tagSIZE *);
public:
	TouchpadButton(ITrayComponentHost *);
};

class TrayButtonBitmapResource
{
	long _EnsureResourceLoader();
public:
	HBITMAP__ * GetHandle();
};

namespace TrayButtonHelpers
{
	TrayButtonResourceFlags GetTrayButtonResourceFlags(ITrayComponentHost *);
	int GetTrayButtonPadding(unsigned int);
	tagINPUT_MESSAGE_DEVICE_TYPE DeviceTypeToInputMessageDeviceType(ClickDevice);
	void PositionTrayButton(CTrayButton *,unsigned int,unsigned int,bool,tagPOINT *);
};

struct TrayButtonResources
{
	int CalcResourceSize(unsigned int,TrayButtonResourceFlags);
	unsigned __int64 GetResourceIndexBySize(int);
};

namespace TrayCommon
{
	TrayCommon::MultiMonTaskbarState GetMultiMonTaskbarState();
};

namespace TrayDPIHelpers
{
	int GetDPIMetrics(unsigned int,int);
	int ScaleByDPI(int,unsigned int,TrayDPIHelpers::ScaleModifier);
	int ScaleByPerMonitorDPI(int,HMONITOR__ *);
	int ScaleBySystemDPI(int);
	long DrawThemeTextExScaled(unsigned int,void *,HDC__ *,int,int,unsigned short const *,int,unsigned long,tagRECT *,_DTTOPTS *);
	long GetThemeMargins(void *,HDC__ *,int,int,int,tagRECT const *,_MARGINS *,unsigned int,TrayDPIHelpers::ScaleModifier);
	long GetThemeTextExtent(unsigned int,void *,HDC__ *,int,int,unsigned short const *,int,unsigned long,tagRECT *,tagRECT *);
	unsigned int GetDPIForMonitor(HMONITOR__ *);
	unsigned int GetDPIForMonitorWindow(HWND__ *);
	void ScaleByDPI(_MARGINS *,unsigned int,TrayDPIHelpers::ScaleModifier);
	void ScaleByDPI(tagSIZE *,unsigned int,TrayDPIHelpers::ScaleModifier);
};

struct TrayImmersiveShellProxy
{
	TrayImmersiveShellProxy();
	virtual long ActiveZbandChanged(unsigned long,unsigned long);
	virtual long GetNotificationProvider(_GUID const &,_GUID const &,void * *);
	virtual long Initialize(IServiceProvider *);
	virtual long IsViewVisible(MULTITASKING_VIEW_TYPES,MULTITASKING_VIEW_TYPES *);
	virtual long MultitaskingViewDismissed(MULTITASKING_VIEW_TYPES);
	virtual long MultitaskingViewShown(MULTITASKING_VIEW_TYPES);
	virtual long QueryService(_GUID const &,_GUID const &,void * *);
	virtual void Uninitialize();
	virtual ~TrayImmersiveShellProxy();
};

namespace TrayNotificationAreaTelemetry
{
	struct CTrayNotificationAreaTelemetry
	{
		class ActivateNotification
		{
		protected:
			virtual bool WasAlreadyReportedToTelemetry(long);
			virtual void StopActivity();
		public:
			void StartActivity(unsigned short const *);
			~ActivateNotification();
		};

		class CreateAppIdentity
		{
		protected:
			virtual bool WasAlreadyReportedToTelemetry(long);
			virtual void StopActivity();
		public:
			void StartActivity(unsigned short const *);
			~CreateAppIdentity();
		};

		class DeleteAppIdentity
		{
		protected:
			virtual bool WasAlreadyReportedToTelemetry(long);
			virtual void StopActivity();
		public:
			void StartActivity(unsigned short const *);
			~DeleteAppIdentity();
		};

		class NotifyTrayAppIdentity
		{
		protected:
			virtual bool WasAlreadyReportedToTelemetry(long);
			virtual void StopActivity();
		public:
			void StartActivity(unsigned short const *,unsigned long);
			~NotifyTrayAppIdentity();
		};

		class ShowInfoTip
		{
		protected:
			virtual bool WasAlreadyReportedToTelemetry(long);
			virtual void StopActivity();
		public:
			void StartActivity();
			~ShowInfoTip();
		};

		class TaskbarColorChange
		{
		protected:
			virtual bool WasAlreadyReportedToTelemetry(long);
			virtual void StopActivity();
		public:
			void StartActivity();
			~TaskbarColorChange();
		};

		static void ExtractTrayItemNameOrGuid(CTrayItem const *,unsigned short *,unsigned long);
		static void NotifyClientTimeoutExceeded<unsigned long &>(unsigned long &);
		static void OverflowInvoke();
		void DragDropIcon_(bool,bool,CTrayItem const *);
		void LogNotifyIconInputAction_(tagINPUT_MESSAGE_DEVICE_TYPE,CTrayItem const *,ActionOnNotifyIcons,unsigned long);
		void LogShowBalloon_(CTrayItemIdentity const *);
		void NotifyClientTimeoutExceeded_(unsigned long);
	};

};

class TrayNotificationCenterButtonImage
{
	BadgeVisualColors GetBadgeVisualColors();
	ITaskListAnimation * GetAnimationManager();
	bool HasAnimation(ITaskListAnimation *,eANIMTYPE,int *);
	bool IsGleamStoryboardActive();
	bool ShouldShowGleam();
	long BeginNextGleamStoryboard(bool);
	long GetRenderedBadge(BadgeRenderProperties,HBITMAP__ * *);
	long StartStoryboardAnimation(eANIMTYPE);
	std::function<long ()> NewGleamStoryboard(bool);
	std::function<long ()> NewStoryboardAnimation(eANIMTYPE);
	unsigned long IconPlateColorFromUINT32(unsigned int);
	void GetNotificationIconAnimationValues(tagSIZE &,int &,unsigned char &);
	void PaintBadge(HDC__ *,tagSIZE);
	void PaintNotificationCenterIcon(HDC__ *,tagSIZE,bool,bool);
public:
	TrayNotificationCenterButtonImage(CTrayButton *,ITrayComponentHost *);
	bool IsAppSpammingGleam(std::shared_ptr<GleamProperties>);
	long QueueGleamAnimation(std::shared_ptr<GleamProperties>);
	long SetIconAndBadgeCount(HINSTANCE__ *,unsigned short const *,unsigned short const *,unsigned __int64);
	virtual long BadgeVisualRendered(NotificationCenterBadgeRenderResult);
	virtual long DrawImage(HDC__ *,tagSIZE,bool,bool);
	virtual long OnStoryboardStatusChanged(IUIAnimationStoryboard *,__MIDL___MIDL_itf_UIAnimation_0000_0002_0001,__MIDL___MIDL_itf_UIAnimation_0000_0002_0001);
	virtual long OnStoryboardUpdated(IUIAnimationStoryboard *);
	virtual long OnWindowRectChanged(tagRECT *);
	virtual void SetWindow(HWND__ *);
	virtual ~TrayNotificationCenterButtonImage();
};

namespace TrayNotificationCenterButtonUtil
{
	RESOURCE_SCALE DpiToMrtScale(unsigned int);
	bool IsIconUri(unsigned short const *);
	long GetIconStream(unsigned short const *,IStream * *);
	long LoadGleamIcon(GleamProperties *,unsigned int);
	long ResolveMrtString(unsigned short const *,unsigned short const *,unsigned int,unsigned short * *);
	std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > ResolveFileUri(unsigned short const *,unsigned short const *,unsigned int);
	std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > StripIconScheme(unsigned short const *);
};

class TrayNotifyButton
{
	tagPOINT GetNotifyEventLocation(tagINPUT_MESSAGE_DEVICE_TYPE);
protected:
	virtual long v_CycleHotItem(int);
	virtual long v_GetTooltipText(HINSTANCE__ * *,unsigned short * *,unsigned short *,unsigned __int64);
	virtual long v_Initialize();
	virtual long v_OnClick(ClickDevice);
	virtual long v_OnContextMenu(ClickDevice,tagPOINT);
	virtual void v_GetMinimumFitSize(tagSIZE *);
	virtual void v_ShowTooltip(bool);
public:
	TrayNotifyButton(ITrayInteractionEvents *,tagNOTIFYITEM const &,TabletModeNotificationArea *,ITrayComponentHost *);
	long Update(tagNOTIFYITEM const &);
};

namespace TrayNotifyHelpers
{
	void GetNotifyButtonMetrics(TrayNotifyHelpers::NotifyButtonFlags,unsigned int,tagSIZE *,tagSIZE *);
};

struct TrayNotifyIconImage
{
	virtual long DrawImage(HDC__ *,tagSIZE,bool,bool);
	virtual long GetImageSize(tagSIZE *);
};

namespace TraySearchHelper
{
	bool InitiateSearchPaneHide(ITrayComponentHost *,HWND__ *,IImmersiveLauncher *);
	long GetImmersiveLauncher(IImmersiveLauncher * *);
	long GetSearchAppPositioningRects(HWND__ *,tagRECT *,tagRECT *);
	long SetSearchAppPositioningAnchor(HWND__ *);
};

struct TrayTelemetry
{
	class AeroShakeTriggered
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(_SHOWDESKTOPTRIGGER,bool);
		~AeroShakeTriggered();
	};

	class DesktopLivePreviewTriggered
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(InvocationType);
		~DesktopLivePreviewTriggered();
	};

	class GlobalHotkeyPressedTriggered
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(int);
		~GlobalHotkeyPressedTriggered();
	};

	class WindowArrangementContextMenu
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void CascadeWindows();
		void ShowWindowsStacked();
		void StartActivity(WindowArrangementContextMenuSource);
		void UndoWindowArrangement();
		void WindowsSideBySide();
		~WindowArrangementContextMenu();
	};

	static void ContextMenuInvoked();
	static void ContextMenuTaskManager();
	static void TabletModeNotificationAreaVisibility<bool &>(bool &);
	static void TaskbarSearchOptionChanged<unsigned long const &>(unsigned long const &);
	void SetPrimaryTrayMonitor_(TrayTelemetry::MonitorSwitchDerivation,HMONITOR__ * const,tagMONITORINFOEXW const *,HMONITOR__ * const);
	void UpdateTrayRects_(TrayTelemetry::TrayStuckUpdateType,tagRECT const *);
};

struct TrayUI
{
	TrayUI();
	__int64 _CreateWindows();
	__int64 _HandleScaIconMessage(SCAICONSTATEDATA const *);
	__int64 _HandleTrayPrivateSettingMessage(unsigned long,__int64);
	bool _FetchNotifyWindows();
	bool _HandleImmersiveInvoke(ImmersiveTray::ImmersiveInvokeFlags,ImmersiveTray::ShowHideWindowFlags);
	bool _ShouldAutoHideTray(AutoHideTelemetry::TaskbarAutoHideTelemetry::AutoHideOnTaskbarHide);
	bool _ShouldHideIndicator();
	int TrackMenu(HMENU__ *);
	int _HandleSizing(unsigned __int64,tagRECT *,unsigned int,bool);
	int _IsActive();
	int _ShouldClipTaskbar();
	int _UpdateBorderPadding();
	long SettingsBitmapLoaded(SettingsBitmapLoadInfo const &);
	long _EnsureAnimationManager();
	long _FindPeopleBand(IPeopleBand * *,unsigned long *);
	long _ToggleLanguageBand(__int64);
	static int PropagateEnumProc(HWND__ *,__int64);
	static int s_EnumTooltipWindowsProc(HWND__ *,__int64);
	static unsigned long s_ConsentDlgProc(void *);
	unsigned int _CalcDragPlace(tagPOINT);
	unsigned int _RecalcStuckPos(tagRECT *);
	virtual COLORTHEME GetColorTheme();
	virtual CTrayNotify * GetTrayNotify();
	virtual HBITMAP__ * GetSettingsIconBitmap();
	virtual HMENU__ * BuildContextMenu(TrayCommon::TrayContextMenuItemFlags);
	virtual HMONITOR__ * GetCortanaVisibleMonitor();
	virtual HMONITOR__ * GetLauncherVisibleMonitor();
	virtual HMONITOR__ * GetMonitorMovedFrom();
	virtual HMONITOR__ * GetStuckMonitor();
	virtual HWND__ * GetTaskbandHWND();
	virtual HWND__ * GetTrayTips();
	virtual Microsoft::WRL::ComPtr<IBandSite> GetBandSite();
	virtual TrayCommon::CortanaTaskbarState GetCortanaTaskbarState();
	virtual __int64 CalcHitTest(HWND__ *,unsigned __int64,__int64);
	virtual __int64 OnCreate();
	virtual __int64 WndProc(HWND__ *,unsigned int,unsigned __int64,__int64,bool *);
	virtual bool HandleCopyData(unsigned __int64,tagCOPYDATASTRUCT *,__int64 *);
	virtual bool HandleMessageFromMessageLoop(tagMSG);
	virtual bool HandlePrivateCommand(__int64);
	virtual bool IsDesktopVisibleOnTrayMonitor();
	virtual bool IsHiding();
	virtual bool IsInitialized();
	virtual bool IsSearchControlEnabled();
	virtual bool IsTabletModeAutoHideEnabled();
	virtual bool IsTaskViewEnabled();
	virtual int CanMinimizeAll();
	virtual int CanMove();
	virtual int CanShowAppsOnTaskbarTabletMode();
	virtual int CanSize();
	virtual int GetIsNoToolbarsOnTaskbarPolicyEnabled();
	virtual int GetRowCount(unsigned int);
	virtual int GetSizingBarHeight();
	virtual int GlassEnabled();
	virtual int HandleCommand(HWND__ *,unsigned int,unsigned __int64,__int64,__int64 *);
	virtual int IsDeferedPosRectChange();
	virtual int IsInQuietPeriod();
	virtual int IsMouseOverClassicTaskbar(HWND__ *,unsigned int);
	virtual int MinimizeAll(int,void *);
	virtual int ShouldUseSmallIcons();
	virtual long ActiveZbandChanged(unsigned long,unsigned long);
	virtual long ApplyRemoteSettings(unsigned long);
	virtual long BootImmersiveShell();
	virtual long CreateClassInstance(_GUID const &,IUnknown * *);
	virtual long DeskBandRegistrationChanged();
	virtual long GetPearlRectForMonitor(HMONITOR__ *,tagRECT *,unsigned long *);
	virtual long GetProxyImmersiveShellComponentProvider(_GUID const &,_GUID const &,void * *);
	virtual long GetProxyImmersiveShellRegistrationProvider(_GUID const &,_GUID const &,void * *);
	virtual long GetTaskListAnimation(ITaskListAnimation * *);
	virtual long HideDeskBand(_GUID const &);
	virtual long IsDeskBandShown(_GUID const &);
	virtual long SendStateCaptureTelemetry(StateCapture::TelemetryStateCaptureType);
	virtual long SetAutoHideState(int);
	virtual long ShowDeskBand(_GUID const &);
	virtual tagRECT GetStuckRectForMonitor(HMONITOR__ *);
	virtual tagSIZE GetStuckWidths();
	virtual unsigned int GetAutoHideFlags();
	virtual unsigned int GetDesktopModeAutoHide();
	virtual unsigned int GetDockedRect(tagRECT *,int);
	virtual unsigned int GetStuckPlace();
	virtual unsigned int GetTabletModeAutoHide();
	virtual unsigned long GetMultimonStuckPlace();
	virtual void AssocChanged(long,_ITEMIDLIST_ABSOLUTE * *);
	virtual void CheckGDIHandleLimit();
	virtual void Cleanup();
	virtual void ContextMenuInvoke(int,tagRECT const *);
	virtual void DesktopConnectedChanged(int);
	virtual void EnableGlass(int);
	virtual void EnableUserTrackedBalloonTips(unsigned __int64);
	virtual void FireLockTaskbarContextMenuTelemetry();
	virtual void GetDisplayRectFromRect(HWND__ *,tagRECT const *,tagRECT *);
	virtual void GetMinSize(HMONITOR__ *,tagSIZE *);
	virtual void GetStuckInfo(tagRECT *,unsigned int *);
	virtual void GetStuckRect(unsigned int,tagRECT *);
	virtual void GetTrayViewOpts(TRAYVIEWOPTS *,ICatBandManager *);
	virtual void HandleActionCenterHotKey();
	virtual void HandleControlCenterHotKey();
	virtual void HandleJumpViewVisibilityChange(bool);
	virtual void HandleMessageIdle();
	virtual void HandleTaskbarHotkey(unsigned __int64);
	virtual void HandleTrayNotifyHotkey();
	virtual void HandleWinNumHotKey(int,unsigned short);
	virtual void ImmersiveResize();
	virtual void Initialize();
	virtual void LoadPolicies();
	virtual void MakeStuckRect(tagRECT *,tagRECT const *,tagSIZE,unsigned int);
	virtual void OnAppResolverChangeNotify(long,_ITEMIDLIST_ABSOLUTE const *,_ITEMIDLIST_ABSOLUTE const *);
	virtual void OnDisplayChanged();
	virtual void OnDoExitWindows();
	virtual void OnImmersiveModeChange();
	virtual void OnLauncherVisibilityChange();
	virtual void OnNextCtl();
	virtual void OnPowerBroadcast(unsigned __int64,__int64);
	virtual void OnPowerMessage(HWND__ *,unsigned int,unsigned __int64,__int64);
	virtual void OnRaiseDesktop(bool,bool);
	virtual void OnRefresh();
	virtual void OnShellModeChanged();
	virtual void OnStartMenuDismissed();
	virtual void OnStartTaskbarApiSurface();
	virtual void OnTimer(unsigned __int64);
	virtual void OnTrayDestroyed();
	virtual void OnWtsConnect();
	virtual void PerformDelayedBootInit();
	virtual void RefreshSettings();
	virtual void ResizeStuckRects();
	virtual void RudenessChanged(int);
	virtual void SaveNotificationAreaState();
	virtual void SaveTrayStuff();
	virtual void ScreenSizeChange(TrayCommon::ScreenSizeChangeFlags,HWND__ *);
	virtual void SetAutoHideFlags(unsigned int);
	virtual void SetDeferredPosRectChange(int);
	virtual void SetFocusToTaskUI();
	virtual void SetLockState(TRIBIT);
	virtual void SetLockState(unsigned int);
	virtual void SetModalMode(unsigned int);
	virtual void SetSelfSizing(bool);
	virtual void SetStuckPlace(unsigned int);
	virtual void SetTrayViewOpts(TRAYVIEWOPTS const *,ICatBandManager *);
	virtual void SetUnhideTimer(long,long);
	virtual void ShowTaskbandOnly(int);
	virtual void ShowTrayProperties(tagRECT const *);
	virtual void SizeWindows();
	virtual void SlideWindow(HWND__ *,tagRECT const *,HMONITOR__ *,bool,bool);
	virtual void StartTaskbar();
	virtual void StartupAppsLaunched();
	virtual void ToggleKeyboardButton();
	virtual void ToggleLanguageSwitcher();
	virtual void ToggleNotificationIcons();
	virtual void TogglePenWorkspaceButton();
	virtual void TogglePeopleButton();
	virtual void ToggleTaskViewButton();
	virtual void ToggleTouchpadButton();
	virtual void Unhide(TrayCommon::TrayUnhideFlags,TrayCommon::UnhideRequest);
	virtual void UpdateBandSiteStyle();
	virtual void VerifySize(bool,bool);
	virtual void WorkAreaChanged();
	virtual ~TrayUI();
	void HandleTrayFlyoutVisibilityChange(bool);
	void InvisibleUnhide(int);
	void SetClockVisibility(bool);
	void SetNotificationCenterButtonVisibility(bool);
	void UpdateStuckRectOnMonitorChange(unsigned int,unsigned int);
	void _AccountAllBandsForTaskbarSizingBar();
	void _AttachWindow(HWND__ *,bool);
	void _AutoHideCollision();
	void _CalcClipCoords(tagRECT *,tagRECT const *,tagRECT const *);
	void _ClipInternal(HWND__ *,tagRECT const *);
	void _ClipWindow(int);
	void _ComputeHiddenRect(tagRECT *,unsigned int);
	void _ContextMenu(unsigned long,int);
	void _DoneMoving(tagWINDOWPOS *);
	void _GetDisplayRectFromPoint(HWND__ *,tagPOINT,tagRECT *);
	void _GetSaveStateAndInitRects();
	void _GetStuckDisplayRect(tagRECT *);
	void _GetUseableRect(HWND__ *,TrayCommon::TRAYMONITORINFO const * const,tagRECT *);
	void _GetWindowSizes(unsigned int,tagRECT const *,tagRECT *,tagRECT *);
	void _HandleEnterMenuLoop();
	void _HandleMonitorChanged();
	void _HandleMoving(unsigned __int64,tagRECT *);
	void _HandleSettingChange(HWND__ *,unsigned int,unsigned __int64,__int64);
	void _HandleSize();
	void _HandleTabletModeAutoHideChange();
	void _HandleWindowPosChanging(tagWINDOWPOS *);
	void _Hide();
	void _InitBandsite();
	void _InitRows();
	void _KickStartAutohide();
	void _LoadIconModeSetting();
	void _LoadSettingsBitmap();
	void _OnFocusMsg(unsigned int,unsigned __int64,__int64);
	void _OnNewSystemSizes();
	void _OnPeopleBandMoveFocus(bool);
	void _OnPeopleBandStarted(__int64);
	void _OnSettingChange(HWND__ *,unsigned __int64,__int64);
	void _OnTabNavigation(bool);
	void _OnThemeChanged();
	void _RefreshInputIndicatorVisibility();
	void _RefreshSettingsAndBandSite();
	void _RegisterDropTargets();
	void _ReportAutoHideStateToChildControls(unsigned int);
	void _ResetZorder(int);
	void _RestoreWindowPos();
	void _SetAutoHideTimer();
	void _SetBandSiteTheme();
	void _SetFocus(HWND__ *);
	void _SetRebarTheme();
	void _SetStuckMonitor(HMONITOR__ *);
	void _SetStuckMonitorState(TrayTelemetry::MonitorSwitchDerivation);
	void _SlideStep(HWND__ *,tagRECT const *,tagRECT const *,tagRECT const *);
	void _StuckTrayChange();
	void _UnhideNow(bool);
	void _UpdateAutoHideState(bool);
	void _UpdateDpiProperties(bool);
	void _UpdatePearlSize();
	void _UpdateStuckRectsForMonitor(HMONITOR__ *);
	void _UpdateStuckRectsForMonitorRect(tagRECT const *,TrayTelemetry::TrayStuckUpdateType);
	void _UpdateTaskbandVisibility();
	void _UpdateVertical(unsigned int,int);
};

namespace UserAssistImpl
{
	IShellUserAssist * GetUserAssistWorker(_GUID const &);
	IShellUserAssist * g_cachedUserAssist;
	long GetCachedUserAssist(IShellUserAssist * *);
};

class UserIdleDetector
{
	unsigned int GetMaxUserIdleTimeInterval();
public:
	UserIdleDetector(unsigned __int64);
	long BeginCheckUserIdle(UserIdleDetector::CheckUserIdleReason);
	long CheckUserIdle();
	long EndCheckUserIdle();
};

struct UserOOBERetryHandler
{
	long Retry();
	~UserOOBERetryHandler();
};

class UserOobeHostAppManager
{
protected:
	virtual long v_OnExperienceExit();
	virtual void v_OnActivation(long);
	virtual void v_OnLaunch(long);
public:
	UserOobeHostAppManager();
	long RuntimeClassInitialize(unsigned short const *,bool);
	virtual long OnDebuggingModeChanged(int);
};

struct VirtualDesktopNotificationForwarderHelper<VirtualDesktopNotificationBaseHelper<IVirtualDesktopNotification> >
{
	virtual long VirtualDesktopCreated(IVirtualDesktop *);
	virtual long VirtualDesktopDestroyBegin(IVirtualDesktop *,IVirtualDesktop *);
	virtual long VirtualDesktopDestroyFailed(IVirtualDesktop *,IVirtualDesktop *);
	virtual long VirtualDesktopDestroyed(IVirtualDesktop *,IVirtualDesktop *);
};

struct WinRTIconLoadData
{
	virtual HICON__ * GetIcon();
	virtual IImmersiveApplication * GetImmersiveApp();
	virtual IconLoadPass GetIconLoadPass();
	virtual IconQuality GetIconQuality();
	virtual IconType GetType();
	virtual bool IsSameRequest(IIconLoadData *,RequestMatchType);
	virtual bool IsSmallIconMode();
	virtual bool IsValid();
	virtual int GetImageId();
	virtual int GetPreferenceId();
	virtual int GetShellImageListId();
	virtual long SetDefaults(unsigned int,unsigned int,unsigned int,IconType,IconSizeMode,IconLoadPass,int);
	virtual unsigned int GetDPI();
	virtual unsigned int GetMaxTaskbarDPI();
	virtual unsigned int GetRequestId();
	virtual unsigned int GetStoreId();
	virtual unsigned short const * GetAppId();
	virtual void SetIcon(HICON__ *,int,IconQuality,int);
	virtual void SetIconQuality(IconQuality);
	virtual void SetPreferenceId(int);
};

namespace Windows
{
	namespace Foundation
	{
		namespace Collections
		{
			wil::VectorRange<Collections::IVectorView<HSTRING__ *>,wil::err_exception_policy>::VectorIterator end<HSTRING__ *>(Collections::IVectorView<HSTRING__ *> *);
			wil::VectorRange<Collections::IVectorView<Services::TargetedContent::TargetedContentItem *>,wil::err_exception_policy>::VectorIterator end<Services::TargetedContent::TargetedContentItem *>(Collections::IVectorView<Services::TargetedContent::TargetedContentItem *> *);
		};

		long ActivateInstance<Management::Provisioning::IPackageManager>(HSTRING__ *,Management::Provisioning::IPackageManager * *);
		long ActivateInstance<Microsoft::WRL::ComPtr<ApplicationModel::Internal::IStartupTaskActivator> >(HSTRING__ *,Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<ApplicationModel::Internal::IStartupTaskActivator> >);
		long ActivateInstance<Microsoft::WRL::ComPtr<Collections::IPropertySet> >(HSTRING__ *,Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Foundation::Collections::IPropertySet> >);
		long ActivateInstance<Microsoft::WRL::ComPtr<Globalization::NumberFormatting::INumeralSystemTranslator> >(HSTRING__ *,Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Globalization::NumberFormatting::INumeralSystemTranslator> >);
		long ActivateInstance<Microsoft::WRL::ComPtr<Internal::AssignedAccess::IAssignedAccessE3Utility> >(HSTRING__ *,Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Internal::AssignedAccess::IAssignedAccessE3Utility> >);
		long ActivateInstance<Microsoft::WRL::ComPtr<Internal::Notifications::IWpnClient> >(HSTRING__ *,Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Internal::Notifications::IWpnClient> >);
		long ActivateInstance<Microsoft::WRL::ComPtr<Internal::Shell::JumpView::IJumpViewExperienceWrapper> >(HSTRING__ *,Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Internal::Shell::JumpView::IJumpViewExperienceWrapper> >);
		long ActivateInstance<Microsoft::WRL::ComPtr<Internal::Shell::JumpView::IJumpViewParams> >(HSTRING__ *,Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Internal::Shell::JumpView::IJumpViewParams> >);
		long ActivateInstance<Services::TargetedContent::Internal::ITargetedContentSubscriptionInternal>(HSTRING__ *,Services::TargetedContent::Internal::ITargetedContentSubscriptionInternal * *);
		long GetActivationFactory<Microsoft::WRL::ComPtr<IPropertyValueStatics> >(HSTRING__ *,Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Foundation::IPropertyValueStatics> >);
		long GetActivationFactory<Microsoft::WRL::ComPtr<IUriRuntimeClassFactory> >(HSTRING__ *,Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Foundation::IUriRuntimeClassFactory> >);
		long GetActivationFactory<Microsoft::WRL::ComPtr<Internal::Security::Authentication::Web::ITokenBrokerInternalStatics> >(HSTRING__ *,Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Internal::Security::Authentication::Web::ITokenBrokerInternalStatics> >);
		long GetActivationFactory<Microsoft::WRL::ComPtr<Internal::Shell::Holographic::IContextIdentifierStatics> >(HSTRING__ *,Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Internal::Shell::Holographic::IContextIdentifierStatics> >);
		long GetActivationFactory<Microsoft::WRL::ComPtr<UI::Notifications::IToastNotificationManagerStatics2> >(HSTRING__ *,Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<UI::Notifications::IToastNotificationManagerStatics2> >);
	};

	namespace Internal
	{
		namespace AssignedAccess
		{
			class AAManagerHelper
			{
				long GetAssignedAccessConfiguration(IAssignedAccessConfiguration * *);
				long GetSingleAppInfo(unsigned char &,NativeString<CoTaskMemPolicy<unsigned short> > &,NativeString<CoTaskMemPolicy<unsigned short> > &,ConfigSource &);
			public:
				AAManagerHelper();
				long GetAssignedAccessTypeByUserSid(unsigned short const *,AssignedAccessType *);
				long GetSingleAppInfo(NativeString<CoTaskMemPolicy<unsigned short> > &,NativeString<CoTaskMemPolicy<unsigned short> > &);
				~AAManagerHelper();
			};

			class AssignedAccessConfigStoreHelper
			{
				unsigned long GetStoreVersion();
			public:
				bool DoesTargetProfileExist(unsigned short const *);
			};

			class AssignedAccessConfigStoreV0
			{
				bool IsValidProfile(HKEY__ *);
				virtual bool DoesProfileExistInStore(unsigned short const *);
				virtual unsigned long GetVersion();
			};

			class AssignedAccessConfigStoreV1
			{
				virtual bool DoesProfileExistInStore(unsigned short const *);
				virtual unsigned long GetVersion();
			};

			struct AssignedAccessUserInfoHelper
			{
				static long GetAumidForSingleAppUserInfo(IAssignedAccessUserInfo *,unsigned short * *);
				static long GetConfigSource(IAssignedAccessUserInfo *,ConfigSource *);
				static long GetSid(IAssignedAccessUserInfo *,unsigned short * *);
			};

		};

		class ComTaskPool
		{
			struct CRemoteReleaseStub
			{
				CRemoteReleaseStub(IComPoolTask *);
			};

			struct CRemoteTask
			{
				long RuntimeClassInitialize(IComPoolTask *);
				virtual void Run();
			};

			class CThread
			{
				long _WaitForThreadUpdate(unsigned long);
				static HINSTANCE__ * s_ExecuteThreadProc(void *);
				static unsigned long s_ThreadProc(void *);
				static void s_CheckForDeadlockTimerCallback(_TP_CALLBACK_INSTANCE *,void *,_TP_TIMER *);
				static void s_ThreadPoolCallback(_TP_CALLBACK_INSTANCE *,void *);
				void _DispatchMessage(tagMSG *);
				void _ThreadProc();
			public:
				bool Eligible(TaskApartment,TaskOptions);
				long StartThread();
				long StartThreadWithFallback();
				long WaitForThreadStart();
				long _StartThreadCommon();
				void CheckForDeadlock();
			};

			struct TaskData
			{
				TaskData(TaskApartment,TaskOptions,unsigned long,IComPoolTask *);
			};

			struct TaskList
			{
				void Clear();
			};

			static ComTaskPool::CThread * s_pThreadList;
			static ComTaskPool::TaskList s_taskFloodingList;
			static _RTL_SRWLOCK s_rwLock;
			static bool s_RunNested(TaskApartment,TaskOptions);
			static bool s_TryRemoveThread(ComTaskPool::CThread *,bool);
			static bool volatile s_fCanReuseThreads;
			static bool volatile s_fWaitForMoreTasks;
			static long s_AddThreadAffineWrapper(IComPoolTask *,IComPoolTask * *);
			static long s_GetTaskPoolTlsSlot(unsigned long *);
			static long s_QueuePoolTask(TaskApartment,TaskOptions,unsigned long,IComPoolTask *);
			static long s_QueuePoolTaskUnderLock(void *,TaskApartment,TaskOptions,unsigned long,IComPoolTask *,ComTaskPool::TaskList *,ComTaskPool::CThread * *);
			static unsigned long volatile s_cThreadsStarting;
			static unsigned long volatile s_dwThreadIdReuse;
			static unsigned long volatile s_dwUniqueCallingContext;
			static void * s_hEventCache;
			static void s_AttachAndRecoverTask(ComTaskPool::TaskData *);
		public:
			static long RunTask(TaskApartment,TaskOptions,unsigned long,unsigned long,IComPoolTask *,IUnknown * *);
		};

		struct MoveOnCopy<NativeString<CoTaskMemPolicy<unsigned short> > >
		{
			~MoveOnCopy<NativeString<CoTaskMemPolicy<unsigned short> > >();
		};

		class NativeString<CoTaskMemPolicy<unsigned short> >
		{
			long _Concat(unsigned short const *,unsigned __int64);
			long _EnsureCapacity(unsigned __int64);
			long _Initialize(unsigned short const *,unsigned __int64);
			void _EnsureCount();
			void _Free();
		public:
			int CompareOrdinal(unsigned short const *,unsigned __int64);
			long Concat(unsigned short const *);
			long CopyTo(unsigned short * *);
			long DetachInitializeIfEmpty(unsigned short * *);
			long Initialize(HKEY__ *,unsigned short const *);
			long Initialize(HKEY__ *,unsigned short const *,unsigned short const *);
			long Initialize(NativeString<CoTaskMemPolicy<unsigned short> > const &);
			long InitializeFormat(unsigned short const *,...);
			long InitializeResFormat(HINSTANCE__ *,int,...);
			unsigned __int64 GetCount();
			~NativeString<CoTaskMemPolicy<unsigned short> >();
		};

		class NativeString<LocalMemPolicy<unsigned short> >
		{
			long _EnsureCapacity(unsigned __int64);
			void _Free();
		public:
			long InitializeMessage(unsigned short const *,...);
			~NativeString<LocalMemPolicy<unsigned short> >();
		};

		struct ResourceString
		{
			static bool FindAndSize(HINSTANCE__ *,unsigned int,unsigned short,unsigned short const * *,unsigned short *);
		};

		namespace Shell
		{
			namespace Holographic
			{
				long GetUserDisplayContext(Holographic::UserDisplayContext *);
				long GetUserInputContext(Holographic::UserInputContext *);
			};

		};

		namespace ShellHelpers
		{
			class PropertySetHelper
			{
				long _GetPropertyValueFactory(Foundation::IPropertyValueStatics * *);
				long _SetPropVal(HSTRING__ *,Foundation::IPropertyValue *);
				long _SetValue<HSTRING__ *>(HSTRING__ *,long ( Foundation::IPropertyValueStatics::*)(HSTRING__ *,IInspectable * *),HSTRING__ *);
				long _SetValue<unsigned char>(HSTRING__ *,long ( Foundation::IPropertyValueStatics::*)(unsigned char,IInspectable * *),unsigned char);
			public:
				~PropertySetHelper();
			};

		};

		struct String
		{
			long Initialize(HSTRING__ * const &);
		};

		class StringReference
		{
			void _ConstructorHelper(unsigned short const *);
		public:
			StringReference<50>(unsigned short const (&)[50]);
			StringReference<5>(unsigned short const (&)[5]);
			StringReference<65>(unsigned short const (&)[65]);
			StringReference<6>(unsigned short const (&)[6]);
			StringReference<7>(unsigned short const (&)[7]);
		};

	};

	namespace Shell
	{
		class CImmersiveCursor
		{
			bool _EnableMouseInputForCursorSuppression(int);
		public:
			static void DisableCursorSuppression();
			~CImmersiveCursor();
		};

	};

};

namespace WindowsStoreHelpers
{
	bool CanPinStoreApp();
	bool IsAppStoreEnabled();
	bool IsStoreAppID(unsigned short const *);
	bool IsStorePidl(_ITEMIDLIST_ABSOLUTE *);
};

struct _INTERFACE_PROPERTIES
{
	_INTERFACE_PROPERTIES & operator=(_INTERFACE_PROPERTIES const &);
	_INTERFACE_PROPERTIES(_INTERFACE_PROPERTIES const &);
	bool operator==(_INTERFACE_PROPERTIES const &);
	~_INTERFACE_PROPERTIES();
};

struct exception
{
	exception();
	exception(char const * const &);
	exception(char const * const &,int);
	exception(exception const &);
	virtual char const * what();
	virtual ~exception();
};

namespace shell
{
	struct TaskScheduler
	{
		static long CreateInstance(_GUID const &,TaskScheduler * *);
		static long CreateInstance(_GUID const &,unsigned long,unsigned long,TaskScheduler * *);
	};

};

namespace std
{
	struct _Deque_val<_Deque_simple_types<shared_ptr<GleamProperties> > >
	{
		~_Deque_val<_Deque_simple_types<shared_ptr<GleamProperties> > >();
	};

	struct _Error_objects<int>
	{
		static _Generic_error_category _Generic_object;
		static _Iostream_error_category _Iostream_object;
		static _System_error_category _System_object;
	};

	class _Func_class<long,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>
	{
	protected:
		void _Tidy();
	};

	struct _Generic_error_category
	{
		virtual basic_string<char,char_traits<char>,allocator<char> > message(int);
		virtual char const * name();
	};

	struct _Init_locks
	{
		_Init_locks();
		~_Init_locks();
	};

	struct _Iostream_error_category
	{
		virtual basic_string<char,char_traits<char>,allocator<char> > message(int);
		virtual char const * name();
	};

	struct _Iterator_base12
	{
		void _Adopt(_Container_base12 const *);
	};

	struct _List_alloc<0,_List_base_types<CWcmListener::WNF_NOTIFICATION_WCM_INTERFACE_CHANGE,allocator<CWcmListener::WNF_NOTIFICATION_WCM_INTERFACE_CHANGE> > >
	{
		_List_node<CWcmListener::WNF_NOTIFICATION_WCM_INTERFACE_CHANGE,void *> * _Buynode0(_List_node<CWcmListener::WNF_NOTIFICATION_WCM_INTERFACE_CHANGE,void *> *,_List_node<CWcmListener::WNF_NOTIFICATION_WCM_INTERFACE_CHANGE,void *> *);
	};

	struct _List_alloc<0,_List_base_types<WCM_LISTENER_EVENT,allocator<WCM_LISTENER_EVENT> > >
	{
		_List_node<WCM_LISTENER_EVENT,void *> * _Buynode0(_List_node<WCM_LISTENER_EVENT,void *> *,_List_node<WCM_LISTENER_EVENT,void *> *);
	};

	struct _List_buy<CWcmListener::WNF_NOTIFICATION_WCM_INTERFACE_CHANGE,allocator<CWcmListener::WNF_NOTIFICATION_WCM_INTERFACE_CHANGE> >
	{
		_List_node<CWcmListener::WNF_NOTIFICATION_WCM_INTERFACE_CHANGE,void *> * _Buynode<CWcmListener::WNF_NOTIFICATION_WCM_INTERFACE_CHANGE const &>(_List_node<CWcmListener::WNF_NOTIFICATION_WCM_INTERFACE_CHANGE,void *> *,_List_node<CWcmListener::WNF_NOTIFICATION_WCM_INTERFACE_CHANGE,void *> *,CWcmListener::WNF_NOTIFICATION_WCM_INTERFACE_CHANGE const &);
	};

	struct _List_buy<WCM_LISTENER_EVENT,allocator<WCM_LISTENER_EVENT> >
	{
		_List_node<WCM_LISTENER_EVENT,void *> * _Buynode<WCM_LISTENER_EVENT const &>(_List_node<WCM_LISTENER_EVENT,void *> *,_List_node<WCM_LISTENER_EVENT,void *> *,WCM_LISTENER_EVENT const &);
	};

	struct _Lockit
	{
		_Lockit(int);
		~_Lockit();
	};

	struct _Ptr_base<GleamProperties>
	{
		void _Reset0(GleamProperties *,_Ref_count_base *);
	};

	class _Ref_count<GleamProperties>
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	struct _Ref_count_base
	{
		virtual void * _Get_deleter(type_info const &);
		void _Decref();
	};

	struct _System_error_category
	{
		virtual basic_string<char,char_traits<char>,allocator<char> > message(int);
		virtual char const * name();
		virtual error_condition default_error_condition(int);
	};

	class _Tree<_Tmap_traits<_GUID,_INTERFACE_PROPERTIES,less<_GUID>,allocator<pair<_GUID const ,_INTERFACE_PROPERTIES> >,0> >
	{
	protected:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,_INTERFACE_PROPERTIES> > > > _Insert_at<pair<_GUID const ,_INTERFACE_PROPERTIES> &,_Tree_node<pair<_GUID const ,_INTERFACE_PROPERTIES>,void *> *>(bool,_Tree_node<pair<_GUID const ,_INTERFACE_PROPERTIES>,void *> *,pair<_GUID const ,_INTERFACE_PROPERTIES> &,_Tree_node<pair<_GUID const ,_INTERFACE_PROPERTIES>,void *> *);
		pair<_Tree_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,_INTERFACE_PROPERTIES> > > >,bool> _Insert_nohint<pair<_GUID const ,_INTERFACE_PROPERTIES> &,_Tree_node<pair<_GUID const ,_INTERFACE_PROPERTIES>,void *> *>(bool,pair<_GUID const ,_INTERFACE_PROPERTIES> &,_Tree_node<pair<_GUID const ,_INTERFACE_PROPERTIES>,void *> *);
		void _Destroy_if_not_nil(_Tree_node<pair<_GUID const ,_INTERFACE_PROPERTIES>,void *> *);
		void _Erase(_Tree_node<pair<_GUID const ,_INTERFACE_PROPERTIES>,void *> *);
		void _Lrotate(_Tree_node<pair<_GUID const ,_INTERFACE_PROPERTIES>,void *> *);
		void _Rrotate(_Tree_node<pair<_GUID const ,_INTERFACE_PROPERTIES>,void *> *);
	public:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,_INTERFACE_PROPERTIES> > > > erase(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,_INTERFACE_PROPERTIES> > > >);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,_INTERFACE_PROPERTIES> > > > erase(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,_INTERFACE_PROPERTIES> > > >,_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,_INTERFACE_PROPERTIES> > > >);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,_INTERFACE_PROPERTIES> > > > find(_GUID const &);
	};

	class _Tree<_Tmap_traits<__int64,AutoHideTelemetry::TaskbarAutoHideTelemetry::WindowAutoHideState,less<__int64>,allocator<pair<__int64 const ,AutoHideTelemetry::TaskbarAutoHideTelemetry::WindowAutoHideState> >,0> >
	{
	protected:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<__int64 const ,AutoHideTelemetry::TaskbarAutoHideTelemetry::WindowAutoHideState> > > > _Insert_at<pair<__int64 const ,AutoHideTelemetry::TaskbarAutoHideTelemetry::WindowAutoHideState> &,_Tree_node<pair<__int64 const ,AutoHideTelemetry::TaskbarAutoHideTelemetry::WindowAutoHideState>,void *> *>(bool,_Tree_node<pair<__int64 const ,AutoHideTelemetry::TaskbarAutoHideTelemetry::WindowAutoHideState>,void *> *,pair<__int64 const ,AutoHideTelemetry::TaskbarAutoHideTelemetry::WindowAutoHideState> &,_Tree_node<pair<__int64 const ,AutoHideTelemetry::TaskbarAutoHideTelemetry::WindowAutoHideState>,void *> *);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<__int64 const ,AutoHideTelemetry::TaskbarAutoHideTelemetry::WindowAutoHideState> > > > _Insert_hint<pair<__int64 const ,AutoHideTelemetry::TaskbarAutoHideTelemetry::WindowAutoHideState> &,_Tree_node<pair<__int64 const ,AutoHideTelemetry::TaskbarAutoHideTelemetry::WindowAutoHideState>,void *> *>(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<__int64 const ,AutoHideTelemetry::TaskbarAutoHideTelemetry::WindowAutoHideState> > > >,pair<__int64 const ,AutoHideTelemetry::TaskbarAutoHideTelemetry::WindowAutoHideState> &,_Tree_node<pair<__int64 const ,AutoHideTelemetry::TaskbarAutoHideTelemetry::WindowAutoHideState>,void *> *);
		pair<_Tree_iterator<_Tree_val<_Tree_simple_types<pair<__int64 const ,AutoHideTelemetry::TaskbarAutoHideTelemetry::WindowAutoHideState> > > >,bool> _Insert_nohint<pair<__int64 const ,AutoHideTelemetry::TaskbarAutoHideTelemetry::WindowAutoHideState> &,_Tree_node<pair<__int64 const ,AutoHideTelemetry::TaskbarAutoHideTelemetry::WindowAutoHideState>,void *> *>(bool,pair<__int64 const ,AutoHideTelemetry::TaskbarAutoHideTelemetry::WindowAutoHideState> &,_Tree_node<pair<__int64 const ,AutoHideTelemetry::TaskbarAutoHideTelemetry::WindowAutoHideState>,void *> *);
		void _Erase(_Tree_node<pair<__int64 const ,AutoHideTelemetry::TaskbarAutoHideTelemetry::WindowAutoHideState>,void *> *);
		void _Lrotate(_Tree_node<pair<__int64 const ,AutoHideTelemetry::TaskbarAutoHideTelemetry::WindowAutoHideState>,void *> *);
		void _Rrotate(_Tree_node<pair<__int64 const ,AutoHideTelemetry::TaskbarAutoHideTelemetry::WindowAutoHideState>,void *> *);
	public:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<__int64 const ,AutoHideTelemetry::TaskbarAutoHideTelemetry::WindowAutoHideState> > > > erase(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<__int64 const ,AutoHideTelemetry::TaskbarAutoHideTelemetry::WindowAutoHideState> > > >);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<__int64 const ,AutoHideTelemetry::TaskbarAutoHideTelemetry::WindowAutoHideState> > > > erase(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<__int64 const ,AutoHideTelemetry::TaskbarAutoHideTelemetry::WindowAutoHideState> > > >,_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<__int64 const ,AutoHideTelemetry::TaskbarAutoHideTelemetry::WindowAutoHideState> > > >);
	};

	class _Tree<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,BadgeContainer::StoredBadgeVisualData,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,BadgeContainer::StoredBadgeVisualData> >,0> >
	{
	protected:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,BadgeContainer::StoredBadgeVisualData> > > > _Insert_at<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,BadgeContainer::StoredBadgeVisualData> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,BadgeContainer::StoredBadgeVisualData>,void *> *>(bool,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,BadgeContainer::StoredBadgeVisualData>,void *> *,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,BadgeContainer::StoredBadgeVisualData> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,BadgeContainer::StoredBadgeVisualData>,void *> *);
		pair<_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,BadgeContainer::StoredBadgeVisualData> > > >,_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,BadgeContainer::StoredBadgeVisualData> > > > > _Eqrange(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		pair<_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,BadgeContainer::StoredBadgeVisualData> > > >,bool> _Insert_nohint<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,BadgeContainer::StoredBadgeVisualData> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,BadgeContainer::StoredBadgeVisualData>,void *> *>(bool,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,BadgeContainer::StoredBadgeVisualData> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,BadgeContainer::StoredBadgeVisualData>,void *> *);
		void _Destroy_if_not_nil(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,BadgeContainer::StoredBadgeVisualData>,void *> *);
		void _Erase(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,BadgeContainer::StoredBadgeVisualData>,void *> *);
		void _Lrotate(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,BadgeContainer::StoredBadgeVisualData>,void *> *);
		void _Rrotate(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,BadgeContainer::StoredBadgeVisualData>,void *> *);
	public:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,BadgeContainer::StoredBadgeVisualData> > > > erase(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,BadgeContainer::StoredBadgeVisualData> > > >);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,BadgeContainer::StoredBadgeVisualData> > > > erase(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,BadgeContainer::StoredBadgeVisualData> > > >,_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,BadgeContainer::StoredBadgeVisualData> > > >);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,BadgeContainer::StoredBadgeVisualData> > > > find(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		unsigned __int64 erase(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		void clear();
	};

	class _Tree<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,_FILETIME,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_FILETIME> >,0> >
	{
	protected:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_FILETIME> > > > _Insert_at<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_FILETIME> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_FILETIME>,void *> *>(bool,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_FILETIME>,void *> *,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_FILETIME> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_FILETIME>,void *> *);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_FILETIME> > > > _Insert_hint<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_FILETIME> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_FILETIME>,void *> *>(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_FILETIME> > > >,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_FILETIME> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_FILETIME>,void *> *);
		pair<_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_FILETIME> > > >,bool> _Insert_nohint<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_FILETIME> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_FILETIME>,void *> *>(bool,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_FILETIME> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_FILETIME>,void *> *);
		void _Destroy_if_not_nil(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_FILETIME>,void *> *);
		void _Erase(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_FILETIME>,void *> *);
		void _Lrotate(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_FILETIME>,void *> *);
		void _Rrotate(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_FILETIME>,void *> *);
	public:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_FILETIME> > > > erase(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_FILETIME> > > >);
	};

	class _Tree<_Tset_traits<unsigned int,less<unsigned int>,allocator<unsigned int>,0> >
	{
	protected:
		_Tree_const_iterator<_Tree_val<_Tree_simple_types<unsigned int> > > _Insert_at<unsigned int &,_Tree_node<unsigned int,void *> *>(bool,_Tree_node<unsigned int,void *> *,unsigned int &,_Tree_node<unsigned int,void *> *);
		_Tree_const_iterator<_Tree_val<_Tree_simple_types<unsigned int> > > _Insert_at<unsigned int const &,_Nil>(bool,_Tree_node<unsigned int,void *> *,unsigned int const &,_Nil);
		pair<_Tree_const_iterator<_Tree_val<_Tree_simple_types<unsigned int> > >,bool> _Insert_nohint<unsigned int &,_Tree_node<unsigned int,void *> *>(bool,unsigned int &,_Tree_node<unsigned int,void *> *);
		pair<_Tree_const_iterator<_Tree_val<_Tree_simple_types<unsigned int> > >,bool> _Insert_nohint<unsigned int const &,_Nil>(bool,unsigned int const &,_Nil);
		void _Erase(_Tree_node<unsigned int,void *> *);
		void _Lrotate(_Tree_node<unsigned int,void *> *);
		void _Rrotate(_Tree_node<unsigned int,void *> *);
	public:
		void clear();
	};

	struct _Tree_alloc<0,_Tree_base_types<pair<_GUID const ,_INTERFACE_PROPERTIES>,allocator<pair<_GUID const ,_INTERFACE_PROPERTIES> > > >
	{
		_Tree_node<pair<_GUID const ,_INTERFACE_PROPERTIES>,void *> * _Buyheadnode();
	};

	struct _Tree_alloc<0,_Tree_base_types<pair<__int64 const ,AutoHideTelemetry::TaskbarAutoHideTelemetry::WindowAutoHideState>,allocator<pair<__int64 const ,AutoHideTelemetry::TaskbarAutoHideTelemetry::WindowAutoHideState> > > >
	{
		_Tree_node<pair<__int64 const ,AutoHideTelemetry::TaskbarAutoHideTelemetry::WindowAutoHideState>,void *> * _Buyheadnode();
	};

	struct _Tree_alloc<0,_Tree_base_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,BadgeContainer::StoredBadgeVisualData>,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,BadgeContainer::StoredBadgeVisualData> > > >
	{
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,BadgeContainer::StoredBadgeVisualData>,void *> * _Buyheadnode();
	};

	struct _Tree_alloc<0,_Tree_base_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_FILETIME>,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_FILETIME> > > >
	{
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_FILETIME>,void *> * _Buyheadnode();
	};

	struct _Tree_alloc<0,_Tree_base_types<unsigned int,allocator<unsigned int> > >
	{
		_Tree_node<unsigned int,void *> * _Buyheadnode();
	};

	struct _Tree_buy<pair<_GUID const ,_INTERFACE_PROPERTIES>,allocator<pair<_GUID const ,_INTERFACE_PROPERTIES> > >
	{
		_Tree_node<pair<_GUID const ,_INTERFACE_PROPERTIES>,void *> * _Buynode0();
	};

	struct _Tree_buy<pair<__int64 const ,AutoHideTelemetry::TaskbarAutoHideTelemetry::WindowAutoHideState>,allocator<pair<__int64 const ,AutoHideTelemetry::TaskbarAutoHideTelemetry::WindowAutoHideState> > >
	{
		_Tree_node<pair<__int64 const ,AutoHideTelemetry::TaskbarAutoHideTelemetry::WindowAutoHideState>,void *> * _Buynode0();
	};

	struct _Tree_buy<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,BadgeContainer::StoredBadgeVisualData>,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,BadgeContainer::StoredBadgeVisualData> > >
	{
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,BadgeContainer::StoredBadgeVisualData>,void *> * _Buynode0();
	};

	struct _Tree_buy<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_FILETIME>,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_FILETIME> > >
	{
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_FILETIME>,void *> * _Buynode0();
	};

	struct _Tree_buy<unsigned int,allocator<unsigned int> >
	{
		_Tree_node<unsigned int,void *> * _Buynode0();
		_Tree_node<unsigned int,void *> * _Buynode<unsigned int &>(unsigned int &);
		_Tree_node<unsigned int,void *> * _Buynode<unsigned int const &>(unsigned int const &);
	};

	struct _Tree_unchecked_const_iterator<_Tree_val<_Tree_simple_types<unsigned int> >,_Iterator_base0>
	{
		_Tree_unchecked_const_iterator<_Tree_val<_Tree_simple_types<unsigned int> >,_Iterator_base0> & operator++();
	};

	struct bad_alloc
	{
		bad_alloc();
		bad_alloc(bad_alloc const &);
		virtual ~bad_alloc();
	};

	struct bad_function_call
	{
		bad_function_call(bad_function_call const &);
		bad_function_call(char const *);
		virtual char const * what();
		virtual ~bad_function_call();
	};

	struct basic_string<char,char_traits<char>,allocator<char> >
	{
		basic_string<char,char_traits<char>,allocator<char> > & assign(basic_string<char,char_traits<char>,allocator<char> > const &,unsigned __int64,unsigned __int64);
		basic_string<char,char_traits<char>,allocator<char> > & assign(char const *);
		basic_string<char,char_traits<char>,allocator<char> > & assign(char const *,unsigned __int64);
		basic_string<char,char_traits<char>,allocator<char> > & erase(unsigned __int64);
		basic_string<char,char_traits<char>,allocator<char> > & erase(unsigned __int64,unsigned __int64);
		basic_string<char,char_traits<char>,allocator<char> >(char const *);
		bool _Grow(unsigned __int64,bool);
		bool _Inside(char const *);
		void _Copy(unsigned __int64,unsigned __int64);
		void _Tidy(bool,unsigned __int64);
	};

	struct basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >
	{
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & assign(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &,unsigned __int64,unsigned __int64);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & assign(unsigned short const *);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & assign(unsigned short const *,unsigned __int64);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & erase(unsigned __int64,unsigned __int64);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >(unsigned short const *);
		bool _Grow(unsigned __int64,bool);
		int compare(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		void _Copy(unsigned __int64,unsigned __int64);
		void _Tidy(bool,unsigned __int64);
		~basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >();
	};

	struct char_traits<char>
	{
		static unsigned __int64 length(char const *);
	};

	struct char_traits<unsigned short>
	{
		static unsigned __int64 length(unsigned short const *);
	};

	class deque<shared_ptr<GleamProperties>,allocator<shared_ptr<GleamProperties> > >
	{
	protected:
		void _Growmap(unsigned __int64);
	public:
		_Deque_iterator<_Deque_val<_Deque_simple_types<shared_ptr<GleamProperties> > > > end();
		void emplace_back<shared_ptr<GleamProperties> &>(shared_ptr<GleamProperties> &);
		~deque<shared_ptr<GleamProperties>,allocator<shared_ptr<GleamProperties> > >();
	};

	struct error_category
	{
		virtual bool equivalent(error_code const &,int);
		virtual bool equivalent(int,error_condition const &);
		virtual error_condition default_error_condition(int);
	};

	struct function<long ()>
	{
		~function<long ()>();
	};

	struct length_error
	{
		length_error(char const *);
		length_error(length_error const &);
		virtual ~length_error();
	};

	struct list<CWcmListener::WNF_NOTIFICATION_WCM_INTERFACE_CHANGE,allocator<CWcmListener::WNF_NOTIFICATION_WCM_INTERFACE_CHANGE> >
	{
		~list<CWcmListener::WNF_NOTIFICATION_WCM_INTERFACE_CHANGE,allocator<CWcmListener::WNF_NOTIFICATION_WCM_INTERFACE_CHANGE> >();
	};

	struct list<WCM_LISTENER_EVENT,allocator<WCM_LISTENER_EVENT> >
	{
		_List_iterator<_List_val<_List_simple_types<WCM_LISTENER_EVENT> > > erase(_List_const_iterator<_List_val<_List_simple_types<WCM_LISTENER_EVENT> > >);
		void clear();
	};

	struct logic_error
	{
		logic_error(logic_error const &);
	};

	struct map<_GUID,_INTERFACE_PROPERTIES,less<_GUID>,allocator<pair<_GUID const ,_INTERFACE_PROPERTIES> > >
	{
		~map<_GUID,_INTERFACE_PROPERTIES,less<_GUID>,allocator<pair<_GUID const ,_INTERFACE_PROPERTIES> > >();
	};

	struct map<__int64,AutoHideTelemetry::TaskbarAutoHideTelemetry::WindowAutoHideState,less<__int64>,allocator<pair<__int64 const ,AutoHideTelemetry::TaskbarAutoHideTelemetry::WindowAutoHideState> > >
	{
		AutoHideTelemetry::TaskbarAutoHideTelemetry::WindowAutoHideState & operator[](__int64 const &);
	};

	struct map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,BadgeContainer::StoredBadgeVisualData,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,BadgeContainer::StoredBadgeVisualData> > >
	{
		~map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,BadgeContainer::StoredBadgeVisualData,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,BadgeContainer::StoredBadgeVisualData> > >();
	};

	struct map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,_FILETIME,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_FILETIME> > >
	{
		_FILETIME & operator[](basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		~map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,_FILETIME,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_FILETIME> > >();
	};

	struct num_put<char,back_insert_iterator<basic_string<char,char_traits<char>,allocator<char> > > >
	{
		static locale::id id;
	};

	struct num_put<unsigned short,back_insert_iterator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >
	{
		static locale::id id;
	};

	struct num_put<wchar_t,back_insert_iterator<basic_string<wchar_t,char_traits<wchar_t>,allocator<wchar_t> > > >
	{
		static locale::id id;
	};

	struct numpunct<char>
	{
		static locale::id id;
	};

	struct numpunct<unsigned short>
	{
		static locale::id id;
	};

	struct numpunct<wchar_t>
	{
		static locale::id id;
	};

	struct out_of_range
	{
		out_of_range(char const *);
		out_of_range(out_of_range const &);
		virtual ~out_of_range();
	};

	struct pair<_GUID,_INTERFACE_PROPERTIES>
	{
		~pair<_GUID,_INTERFACE_PROPERTIES>();
	};

	struct pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,_FILETIME>
	{
		~pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,_FILETIME>();
	};

	struct set<unsigned int,less<unsigned int>,allocator<unsigned int> >
	{
		~set<unsigned int,less<unsigned int>,allocator<unsigned int> >();
	};

	class shared_ptr<GleamProperties>
	{
		void _Resetp<GleamProperties>(GleamProperties *);
	public:
		shared_ptr<GleamProperties>(shared_ptr<GleamProperties> const &);
		~shared_ptr<GleamProperties>();
	};

	class vector<Microsoft::WRL::ComPtr<IBadgeVisualRenderRequest>,allocator<Microsoft::WRL::ComPtr<IBadgeVisualRenderRequest> > >
	{
	protected:
		void _Reallocate(unsigned __int64);
		void _Reserve(unsigned __int64);
	public:
		_Vector_iterator<_Vector_val<_Simple_types<Microsoft::WRL::ComPtr<IBadgeVisualRenderRequest> > > > erase(_Vector_const_iterator<_Vector_val<_Simple_types<Microsoft::WRL::ComPtr<IBadgeVisualRenderRequest> > > >);
	};

	class vector<unsigned int,allocator<unsigned int> >
	{
	protected:
		void _Reallocate(unsigned __int64);
		void _Reserve(unsigned __int64);
	public:
		~vector<unsigned int,allocator<unsigned int> >();
	};

	Microsoft::WRL::ComPtr<IBadgeVisualRenderRequest> * _Uninit_move<Microsoft::WRL::ComPtr<IBadgeVisualRenderRequest> *,Microsoft::WRL::ComPtr<IBadgeVisualRenderRequest> *,allocator<Microsoft::WRL::ComPtr<IBadgeVisualRenderRequest> >,Microsoft::WRL::ComPtr<IBadgeVisualRenderRequest> >(Microsoft::WRL::ComPtr<IBadgeVisualRenderRequest> *,Microsoft::WRL::ComPtr<IBadgeVisualRenderRequest> *,Microsoft::WRL::ComPtr<IBadgeVisualRenderRequest> *,std::_Wrap_alloc<std::allocator<Microsoft::WRL::ComPtr<IBadgeVisualRenderRequest> > > &,Microsoft::WRL::ComPtr<IBadgeVisualRenderRequest> *,std::_Nonscalar_ptr_iterator_tag);
	char * _Allocate<char>(unsigned __int64,char *);
	char const * _Syserror_map(int);
	char const * _Winerror_map(int);
	nothrow_t const std::nothrow;
	std::shared_ptr<GleamProperties> * * _Uninitialized_copy<shared_ptr<GleamProperties> * *,shared_ptr<GleamProperties> * *,_Wrap_alloc<allocator<shared_ptr<GleamProperties> *> > >(std::shared_ptr<GleamProperties> * *,std::shared_ptr<GleamProperties> * *,std::shared_ptr<GleamProperties> * *,std::_Wrap_alloc<std::allocator<std::shared_ptr<GleamProperties> *> > &);
	void _Xbad_alloc();
	void _Xbad_function_call();
	void _Xlength_error(char const *);
	void _Xout_of_range(char const *);
};

namespace wil
{
	struct ActivityBase<CommonStartTelemetryLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>
	{
		struct ActivityData<CommonStartTelemetryLogging,_TlgReflectorTag_Param0IsProviderType>
		{
			bool SetStopResult(long,long *);
			~ActivityData<CommonStartTelemetryLogging,_TlgReflectorTag_Param0IsProviderType>();
		};

		ActivityBase<CommonStartTelemetryLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(char const *,bool);
		_GUID const * zInternalRelatedId();
		virtual bool NotifyFailure(FailureInfo const &);
		void Stop(long);
		void zInternalStop();
	};

	struct ActivityBase<CortanaProactiveLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>
	{
		struct ActivityData<CortanaProactiveLogging,_TlgReflectorTag_Param0IsProviderType>
		{
			bool SetStopResult(long,long *);
			~ActivityData<CortanaProactiveLogging,_TlgReflectorTag_Param0IsProviderType>();
		};

		ActivityBase<CortanaProactiveLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(char const *,bool);
		_GUID const * zInternalRelatedId();
		virtual bool NotifyFailure(FailureInfo const &);
		void Stop(long);
		void zInternalStop();
	};

	class ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>
	{
		struct ActivityData<CreativeFramework::Logging::ShellPlacementLogging,_TlgReflectorTag_Param0IsProviderType>
		{
			~ActivityData<CreativeFramework::Logging::ShellPlacementLogging,_TlgReflectorTag_Param0IsProviderType>();
		};

	protected:
		void Destroy();
	public:
		ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(char const *,bool);
		_GUID const * zInternalRelatedId();
		virtual bool NotifyFailure(FailureInfo const &);
		void zInternalStart();
		void zInternalStop();
		~ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>();
	};

	class ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>
	{
		struct ActivityData<CreativeFramework::Logging::ShellPlacementLogging,_TlgReflectorTag_Param0IsProviderType>
		{
			bool SetStopResult(long,long *);
			~ActivityData<CreativeFramework::Logging::ShellPlacementLogging,_TlgReflectorTag_Param0IsProviderType>();
		};

	protected:
		void Destroy();
	public:
		ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(char const *,bool);
		_GUID const * zInternalRelatedId();
		virtual bool NotifyFailure(FailureInfo const &);
		void Stop(long);
		void zInternalStart();
		void zInternalStop();
		~ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>();
	};

	class ActivityBase<ExplorerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>
	{
		struct ActivityData<ExplorerLogging,_TlgReflectorTag_Param0IsProviderType>
		{
			bool SetStopResult(long,long *);
			~ActivityData<ExplorerLogging,_TlgReflectorTag_Param0IsProviderType>();
		};

		void ReportStopActivity(long);
	protected:
		void Destroy();
	public:
		ActivityBase<ExplorerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(char const *,bool);
		_GUID const * zInternalRelatedId();
		virtual bool NotifyFailure(FailureInfo const &);
		void Stop(long);
		void zInternalStart();
		void zInternalStop();
		~ActivityBase<ExplorerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>();
	};

	class ActivityBase<ImmersiveIconsLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>
	{
		struct ActivityData<ImmersiveIconsLogging,_TlgReflectorTag_Param0IsProviderType>
		{
			bool SetStopResult(long,long *);
			~ActivityData<ImmersiveIconsLogging,_TlgReflectorTag_Param0IsProviderType>();
		};

		void ReportStopActivity(long);
	public:
		_GUID const * zInternalRelatedId();
		virtual bool NotifyFailure(FailureInfo const &);
		void Stop(long);
		void zInternalStop();
	};

	class ActivityBase<LogonFrameworkLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>
	{
		struct ActivityData<LogonFrameworkLogging,_TlgReflectorTag_Param0IsProviderType>
		{
			bool SetStopResult(long,long *);
			~ActivityData<LogonFrameworkLogging,_TlgReflectorTag_Param0IsProviderType>();
		};

	protected:
		void Destroy();
	public:
		ActivityBase<LogonFrameworkLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(char const *,bool);
		_GUID const * zInternalRelatedId();
		virtual bool NotifyFailure(FailureInfo const &);
		void SetRelatedActivity<LogonFrameworkTelemetry::AllLogonTasks>(LogonFrameworkTelemetry::AllLogonTasks const &);
		void Stop(long);
		void zInternalStart();
		void zInternalStop();
		~ActivityBase<LogonFrameworkLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>();
	};

	struct ActivityBase<LogonFrameworkLogging,1,140737488355328,5,_TlgReflectorTag_Param0IsProviderType>
	{
		struct ActivityData<LogonFrameworkLogging,_TlgReflectorTag_Param0IsProviderType>
		{
			~ActivityData<LogonFrameworkLogging,_TlgReflectorTag_Param0IsProviderType>();
		};

		ActivityBase<LogonFrameworkLogging,1,140737488355328,5,_TlgReflectorTag_Param0IsProviderType>(char const *,bool);
		_GUID const * zInternalRelatedId();
		virtual bool NotifyFailure(FailureInfo const &);
		void zInternalStop();
	};

	class ActivityBase<LogonFrameworkLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>
	{
		struct ActivityData<LogonFrameworkLogging,_TlgReflectorTag_Param0IsProviderType>
		{
			bool SetStopResult(long,long *);
			~ActivityData<LogonFrameworkLogging,_TlgReflectorTag_Param0IsProviderType>();
		};

		void ReportStopActivity(long);
	protected:
		void Destroy();
	public:
		ActivityBase<LogonFrameworkLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(char const *,bool);
		_GUID const * zInternalRelatedId();
		virtual bool NotifyFailure(FailureInfo const &);
		void SetRelatedActivity<LogonFrameworkTelemetry::AllLogonTasks>(LogonFrameworkTelemetry::AllLogonTasks const &);
		void Stop(long);
		void zInternalStart();
		void zInternalStop();
		~ActivityBase<LogonFrameworkLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>();
	};

	class ActivityBase<LogonFrameworkLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>
	{
		struct ActivityData<LogonFrameworkLogging,_TlgReflectorTag_Param0IsProviderType>
		{
			bool SetStopResult(long,long *);
			~ActivityData<LogonFrameworkLogging,_TlgReflectorTag_Param0IsProviderType>();
		};

		void ReportStopActivity(long);
	protected:
		void Destroy();
	public:
		ActivityBase<LogonFrameworkLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType> & operator=(ActivityBase<LogonFrameworkLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType> const &);
		ActivityBase<LogonFrameworkLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(ActivityBase<LogonFrameworkLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType> const &);
		ActivityBase<LogonFrameworkLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(char const *,bool);
		ActivityThreadWatcher ContinueOnCurrentThread();
		_GUID const * zInternalRelatedId();
		virtual bool NotifyFailure(FailureInfo const &);
		void SetRelatedActivity<LogonFrameworkTelemetry::AllLogonTasks>(LogonFrameworkTelemetry::AllLogonTasks const &);
		void SetRelatedActivityId(_GUID const &);
		void Stop(long);
		void zInternalStart();
		void zInternalStop();
		~ActivityBase<LogonFrameworkLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>();
	};

	class ActivityBase<NotificationCenterLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>
	{
		struct ActivityData<NotificationCenterLogging,_TlgReflectorTag_Param0IsProviderType>
		{
			bool SetStopResult(long,long *);
			~ActivityData<NotificationCenterLogging,_TlgReflectorTag_Param0IsProviderType>();
		};

		void ReportStopActivity(long);
	protected:
		void Destroy();
	public:
		ActivityBase<NotificationCenterLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(char const *,bool);
		_GUID const * zInternalRelatedId();
		virtual bool NotifyFailure(FailureInfo const &);
		void Stop(long);
		void zInternalStart();
		void zInternalStop();
		~ActivityBase<NotificationCenterLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>();
	};

	class ActivityBase<NotificationCenterLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>
	{
		struct ActivityData<NotificationCenterLogging,_TlgReflectorTag_Param0IsProviderType>
		{
			bool SetStopResult(long,long *);
			~ActivityData<NotificationCenterLogging,_TlgReflectorTag_Param0IsProviderType>();
		};

	protected:
		void Destroy();
	public:
		ActivityBase<NotificationCenterLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(char const *,bool);
		_GUID const * zInternalRelatedId();
		virtual bool NotifyFailure(FailureInfo const &);
		void Stop(long);
		void zInternalStart();
		void zInternalStop();
		~ActivityBase<NotificationCenterLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>();
	};

	class ActivityBase<PrivacyConsentLogging,1,140737488355328,5,_TlgReflectorTag_Param0IsProviderType>
	{
		struct ActivityData<PrivacyConsentLogging,_TlgReflectorTag_Param0IsProviderType>
		{
			bool SetStopResult(long,long *);
			~ActivityData<PrivacyConsentLogging,_TlgReflectorTag_Param0IsProviderType>();
		};

	protected:
		void Destroy();
	public:
		ActivityBase<PrivacyConsentLogging,1,140737488355328,5,_TlgReflectorTag_Param0IsProviderType>(char const *,bool);
		virtual bool NotifyFailure(FailureInfo const &);
		void Stop(long);
		void zInternalStop();
	};

	class ActivityBase<TaskbarLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>
	{
		struct ActivityData<TaskbarLogging,_TlgReflectorTag_Param0IsProviderType>
		{
			bool SetStopResult(long,long *);
			~ActivityData<TaskbarLogging,_TlgReflectorTag_Param0IsProviderType>();
		};

		void ReportStopActivity(long);
	protected:
		void Destroy();
	public:
		ActivityBase<TaskbarLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType> & operator=(ActivityBase<TaskbarLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType> const &);
		ActivityBase<TaskbarLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>(ActivityBase<TaskbarLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType> const &);
		ActivityBase<TaskbarLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>(char const *,bool);
		ActivityThreadWatcher ContinueOnCurrentThread();
		_GUID const * zInternalRelatedId();
		virtual bool NotifyFailure(FailureInfo const &);
		void Stop(long);
		void zInternalStart();
		void zInternalStop();
		~ActivityBase<TaskbarLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>();
	};

	class ActivityBase<TaskbarLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>
	{
		struct ActivityData<TaskbarLogging,_TlgReflectorTag_Param0IsProviderType>
		{
			bool SetStopResult(long,long *);
			~ActivityData<TaskbarLogging,_TlgReflectorTag_Param0IsProviderType>();
		};

	protected:
		void Destroy();
	public:
		ActivityBase<TaskbarLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(char const *,bool);
		_GUID const * zInternalRelatedId();
		virtual bool NotifyFailure(FailureInfo const &);
		void Stop(long);
		void zInternalStart();
		void zInternalStop();
		~ActivityBase<TaskbarLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>();
	};

	class ActivityBase<TileBadgeProviderLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>
	{
		struct ActivityData<TileBadgeProviderLogging,_TlgReflectorTag_Param0IsProviderType>
		{
			bool SetStopResult(long,long *);
			~ActivityData<TileBadgeProviderLogging,_TlgReflectorTag_Param0IsProviderType>();
		};

		void ReportStopActivity(long);
	protected:
		void Destroy();
	public:
		ActivityBase<TileBadgeProviderLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(char const *,bool);
		_GUID const * zInternalRelatedId();
		virtual bool NotifyFailure(FailureInfo const &);
		void Stop(long);
		void zInternalStart();
		void zInternalStop();
		~ActivityBase<TileBadgeProviderLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>();
	};

	class ActivityBase<TrayNotificationAreaLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>
	{
		struct ActivityData<TrayNotificationAreaLogging,_TlgReflectorTag_Param0IsProviderType>
		{
			bool SetStopResult(long,long *);
			~ActivityData<TrayNotificationAreaLogging,_TlgReflectorTag_Param0IsProviderType>();
		};

		void ReportStopActivity(long);
	protected:
		void Destroy();
	public:
		ActivityBase<TrayNotificationAreaLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType> & operator=(ActivityBase<TrayNotificationAreaLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType> const &);
		ActivityBase<TrayNotificationAreaLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(ActivityBase<TrayNotificationAreaLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType> const &);
		ActivityBase<TrayNotificationAreaLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(char const *,bool);
		ActivityThreadWatcher ContinueOnCurrentThread();
		_GUID const * zInternalRelatedId();
		virtual bool NotifyFailure(FailureInfo const &);
		void Stop(long);
		void zInternalStart();
		void zInternalStop();
		~ActivityBase<TrayNotificationAreaLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>();
	};

	struct ActivityBase<TrayNotificationAreaLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>
	{
		struct ActivityData<TrayNotificationAreaLogging,_TlgReflectorTag_Param0IsProviderType>
		{
			bool SetStopResult(long,long *);
			~ActivityData<TrayNotificationAreaLogging,_TlgReflectorTag_Param0IsProviderType>();
		};

		ActivityBase<TrayNotificationAreaLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(char const *,bool);
		_GUID const * zInternalRelatedId();
		virtual bool NotifyFailure(FailureInfo const &);
		void Stop(long);
		void zInternalStop();
	};

	struct ActivityThreadWatcher
	{
		ActivityThreadWatcher(details::IFailureCallback *,details::StoredCallContextInfo const &);
		~ActivityThreadWatcher();
	};

	class Feature<__WilFeatureTraits_Feature_AcrylicTaskbar>
	{
		static void ReportUsageToService(bool,ReportingKind,unsigned __int64);
		static wil_details_CachedFeatureEnabledState GetCachedFeatureEnabledState(bool);
	};

	class Feature<__WilFeatureTraits_Feature_ActivitiesInShell>
	{
		static void ReportUsageToService(bool,ReportingKind,unsigned __int64);
		static wil_details_CachedFeatureEnabledState GetCachedFeatureEnabledState(bool);
	};

	class Feature<__WilFeatureTraits_Feature_AppsFolderTaskbarIconLoading>
	{
		static void ReportUsageToService(bool,ReportingKind,unsigned __int64);
		static wil_details_CachedFeatureEnabledState GetCachedFeatureEnabledState(bool);
	};

	class Feature<__WilFeatureTraits_Feature_ConstraintIndexInDesktopSettings>
	{
		static void ReportUsageToService(bool,ReportingKind,unsigned __int64);
		static wil_details_CachedFeatureEnabledState GetCachedFeatureEnabledState(bool);
	};

	class Feature<__WilFeatureTraits_Feature_ContentDeliveryPolicyRestrictions>
	{
		static void ReportUsageToService(bool,ReportingKind,unsigned __int64);
		static wil_details_CachedFeatureEnabledState GetCachedFeatureEnabledState(bool);
	};

	class Feature<__WilFeatureTraits_Feature_CortanaConversationCanvas>
	{
		static void ReportUsageToService(bool,ReportingKind,unsigned __int64);
		static wil_details_CachedFeatureEnabledState GetCachedFeatureEnabledState(bool);
	};

	class Feature<__WilFeatureTraits_Feature_DesktopInclusiveOOBE>
	{
		static void ReportUsageToService(bool,ReportingKind,unsigned __int64);
		static wil_details_CachedFeatureEnabledState GetCachedFeatureEnabledState(bool);
	};

	class Feature<__WilFeatureTraits_Feature_DictationHotKey>
	{
		static void ReportUsageToService(bool,ReportingKind,unsigned __int64);
		static wil_details_CachedFeatureEnabledState GetCachedFeatureEnabledState(bool);
	};

	class Feature<__WilFeatureTraits_Feature_EdgeDesktopShortcut>
	{
		static Variant_EdgeDesktopShortcut GetCachedVariantState();
		static void ReportUsageToService(bool,ReportingKind,unsigned __int64);
		static void ReportVariantUsageToService(bool,Variant_EdgeDesktopShortcut,VariantReportingKind,unsigned __int64);
		static wil_details_CachedFeatureEnabledState GetCachedFeatureEnabledState(bool);
	public:
		static bool __private_IsVariantEqual(Variant_EdgeDesktopShortcut,VariantReportingKind,bool);
	};

	class Feature<__WilFeatureTraits_Feature_EducationCloudDefaultPins>
	{
		static void ReportUsageToService(bool,ReportingKind,unsigned __int64);
		static wil_details_CachedFeatureEnabledState GetCachedFeatureEnabledState(bool);
	public:
		static bool IsEnabled();
	};

	class Feature<__WilFeatureTraits_Feature_ExpressiveInput_ShellHotKey>
	{
		static void ReportUsageToService(bool,ReportingKind,unsigned __int64);
		static wil_details_CachedFeatureEnabledState GetCachedFeatureEnabledState(bool);
	};

	class Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>
	{
		static void ReportUsageToService(bool,ReportingKind,unsigned __int64);
		static wil_details_CachedFeatureEnabledState GetCachedFeatureEnabledState(bool);
	};

	class Feature<__WilFeatureTraits_Feature_HolographicDesktopHotkeyFunctionalityHiding>
	{
		static void ReportUsageToService(bool,ReportingKind,unsigned __int64);
		static wil_details_CachedFeatureEnabledState GetCachedFeatureEnabledState(bool);
		static wil_details_CachedFeatureEnabledState GetCurrentFeatureEnabledState(bool,wil_details_CachedHasNotificationState *);
	};

	class Feature<__WilFeatureTraits_Feature_HolographicDesktopMultitaskingUXHiding>
	{
		static void ReportUsageToService(bool,ReportingKind,unsigned __int64);
		static wil_details_CachedFeatureEnabledState GetCachedFeatureEnabledState(bool);
		static wil_details_CachedFeatureEnabledState GetCurrentFeatureEnabledState(bool,wil_details_CachedHasNotificationState *);
	};

	class Feature<__WilFeatureTraits_Feature_HolographicUserExperiences>
	{
		static void ReportUsageToService(bool,ReportingKind,unsigned __int64);
		static wil_details_CachedFeatureEnabledState GetCachedFeatureEnabledState(bool);
	};

	class Feature<__WilFeatureTraits_Feature_InclusiveRetailDemoOobe>
	{
		static void ReportUsageToService(bool,ReportingKind,unsigned __int64);
		static wil_details_CachedFeatureEnabledState GetCachedFeatureEnabledState(bool);
		static wil_details_CachedFeatureEnabledState GetCurrentFeatureEnabledState(bool,wil_details_CachedHasNotificationState *);
	};

	class Feature<__WilFeatureTraits_Feature_InitializeStartLayoutFromLogonFramework>
	{
		static void ReportUsageToService(bool,ReportingKind,unsigned __int64);
		static wil_details_CachedFeatureEnabledState GetCachedFeatureEnabledState(bool);
	};

	class Feature<__WilFeatureTraits_Feature_LockReliability_LongLiveLockApp>
	{
		static void ReportUsageToService(bool,ReportingKind,unsigned __int64);
		static wil_details_CachedFeatureEnabledState GetCachedFeatureEnabledState(bool);
	};

	class Feature<__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver>
	{
		static void ReportUsageToService(bool,ReportingKind,unsigned __int64);
		static wil_details_CachedFeatureEnabledState GetCachedFeatureEnabledState(bool);
	};

	class Feature<__WilFeatureTraits_Feature_MinuteZeroExperiences>
	{
		static void ReportUsageToService(bool,ReportingKind,unsigned __int64);
		static wil_details_CachedFeatureEnabledState GetCachedFeatureEnabledState(bool);
	};

	class Feature<__WilFeatureTraits_Feature_MobilityExperience>
	{
		static void ReportUsageToService(bool,ReportingKind,unsigned __int64);
		static wil_details_CachedFeatureEnabledState GetCachedFeatureEnabledState(bool);
	};

	class Feature<__WilFeatureTraits_Feature_PeopleBar>
	{
		static void ReportUsageToService(bool,ReportingKind,unsigned __int64);
		static wil_details_CachedFeatureEnabledState GetCachedFeatureEnabledState(bool);
	};

	class Feature<__WilFeatureTraits_Feature_PrelaunchEdgeLogon>
	{
		static void ReportUsageToService(bool,ReportingKind,unsigned __int64);
		static wil_details_CachedFeatureEnabledState GetCachedFeatureEnabledState(bool);
	};

	class Feature<__WilFeatureTraits_Feature_QuickActionTemplates>
	{
		static void ReportUsageToService(bool,ReportingKind,unsigned __int64);
		static wil_details_CachedFeatureEnabledState GetCachedFeatureEnabledState(bool);
	};

	class Feature<__WilFeatureTraits_Feature_RDX_SoftLanding>
	{
		static void ReportUsageToService(bool,ReportingKind,unsigned __int64);
		static wil_details_CachedFeatureEnabledState GetCachedFeatureEnabledState(bool);
	};

	class Feature<__WilFeatureTraits_Feature_SupportInfoTipInNotificationCenter>
	{
		static void ReportUsageToService(bool,ReportingKind,unsigned __int64);
		static wil_details_CachedFeatureEnabledState GetCachedFeatureEnabledState(bool);
	};

	class Feature<__WilFeatureTraits_Feature_TDL>
	{
		static void ReportUsageToService(bool,ReportingKind,unsigned __int64);
		static wil_details_CachedFeatureEnabledState GetCachedFeatureEnabledState(bool);
	};

	class Feature<__WilFeatureTraits_Feature_TaskbarBadgingTDLDeprecation>
	{
		static void ReportUsageToService(bool,ReportingKind,unsigned __int64);
		static wil_details_CachedFeatureEnabledState GetCachedFeatureEnabledState(bool);
	};

	class Feature<__WilFeatureTraits_Feature_TaskbarProgrammaticEdgeWebsitePinning>
	{
		static void ReportUsageToService(bool,ReportingKind,unsigned __int64);
		static wil_details_CachedFeatureEnabledState GetCachedFeatureEnabledState(bool);
	};

	class Feature<__WilFeatureTraits_Feature_TaskbarSuggestions>
	{
		static void ReportUsageToService(bool,ReportingKind,unsigned __int64);
		static wil_details_CachedFeatureEnabledState GetCachedFeatureEnabledState(bool);
	};

	class Feature<__WilFeatureTraits_Feature_TouchKeyboardExperienceManager>
	{
		static void ReportUsageToService(bool,ReportingKind,unsigned __int64);
		static wil_details_CachedFeatureEnabledState GetCachedFeatureEnabledState(bool);
	};

	class Feature<__WilFeatureTraits_Feature_TouchPadController>
	{
		static void ReportUsageToService(bool,ReportingKind,unsigned __int64);
		static wil_details_CachedFeatureEnabledState GetCachedFeatureEnabledState(bool);
	};

	class Feature<__WilFeatureTraits_Feature_TrayNotificationsWithoutTDL>
	{
		static void ReportUsageToService(bool,ReportingKind,unsigned __int64);
		static wil_details_CachedFeatureEnabledState GetCachedFeatureEnabledState(bool);
	};

	class Feature<__WilFeatureTraits_Feature_WindowsPlusC>
	{
		static void ReportUsageToService(bool,ReportingKind,unsigned __int64);
		static wil_details_CachedFeatureEnabledState GetCachedFeatureEnabledState(bool);
	};

	class Feature<__WilFeatureTraits_Feature_WindowsTips>
	{
		static void ReportUsageToService(bool,ReportingKind,unsigned __int64);
		static wil_details_CachedFeatureEnabledState GetCachedFeatureEnabledState(bool);
	};

	class Feature<__WilFeatureTraits_Feature_XAMLKeyboardDesktop>
	{
		static void ReportUsageToService(bool,ReportingKind,unsigned __int64);
		static wil_details_CachedFeatureEnabledState GetCachedFeatureEnabledState(bool);
		static wil_details_CachedFeatureEnabledState GetCurrentFeatureEnabledState(bool,wil_details_CachedHasNotificationState *);
	};

	class Feature<__WilFeatureTraits_Feature_XamlExplorerHost>
	{
		static void ReportUsageToService(bool,ReportingKind,unsigned __int64);
		static wil_details_CachedFeatureEnabledState GetCachedFeatureEnabledState(bool);
	};

	class Feature<__WilFeatureTraits_Feature_XamlTaskbar>
	{
		static void ReportUsageToService(bool,ReportingKind,unsigned __int64);
		static wil_details_CachedFeatureEnabledState GetCachedFeatureEnabledState(bool);
	};

	struct PropVariant
	{
		~PropVariant();
	};

	struct PropertyStoreHelper
	{
		PropertyStoreHelper(IPropertyStore *);
		~PropertyStoreHelper();
	};

	struct PropertyStoreHelperBase<IPropertyStore>
	{
		long GetAsUInt32<_tagpropertykey>(_tagpropertykey,unsigned long *);
		long GetBoolean<_tagpropertykey>(_tagpropertykey,bool *);
		long GetFailIfEmpty<_tagpropertykey>(_tagpropertykey,tagPROPVARIANT *);
		long GetString<_tagpropertykey>(_tagpropertykey,unsigned short * *);
		long GetUInt32<_tagpropertykey>(_tagpropertykey,unsigned long *);
		long InitFromItem(IUnknown *,GETPROPERTYSTOREFLAGS,_tagpropertykey const *,unsigned int);
	};

	struct ResultException
	{
		ResultException(ResultException const &);
		virtual char const * what();
		virtual ~ResultException();
	};

	struct ShellBindContextHelper
	{
		long SetNamedBoolean(unsigned short const *);
	};

	struct StoredFailureInfo
	{
		StoredFailureInfo();
		void SetFailureInfo(FailureInfo const &);
		~StoredFailureInfo();
	};

	struct ThreadErrorContext
	{
		ThreadErrorContext();
		bool GetCaughtExceptionError(FailureInfo &,DiagnosticsInfo const *,long);
		~ThreadErrorContext();
	};

	class TraceLoggingProvider
	{
		virtual bool NotifyFailure(FailureInfo const &);
	protected:
		virtual void Initialize();
		virtual void OnErrorReported(bool,FailureInfo const &);
		virtual ~TraceLoggingProvider();
		void Register(_TlgProvider_t const * const);
		void ReportTelemetryFailure(FailureInfo const &);
		void ReportTraceLoggingFailure(FailureInfo const &);
	};

	struct Variant
	{
		~Variant();
	};

	namespace VectorRange<Windows::Foundation::Collections::IVectorView<HSTRING__ *>,err_exception_policy>
	{
		struct VectorIterator
		{
			details::MapToSmartType<HSTRING__ *,void>::HStringWithRelease const & operator*();
			~VectorIterator();
		};

	};

	namespace VectorRange<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::TargetedContentItem *>,err_exception_policy>
	{
		struct VectorIterator
		{
			Microsoft::WRL::ComPtr<Windows::Services::TargetedContent::ITargetedContentItem> const & operator*();
			~VectorIterator();
		};

	};

	struct VectorRangeNoThrow<Windows::Foundation::Collections::IVectorView<Windows::Internal::AssignedAccess::AssignedAccessUserInfo *> >
	{
		void GetAtCurrent(unsigned int);
	};

	struct com_ptr_t<CLogonTaskFramework,err_returncode_policy>
	{
		~com_ptr_t<CLogonTaskFramework,err_returncode_policy>();
	};

	struct com_ptr_t<IDataObject,err_exception_policy>
	{
		~com_ptr_t<IDataObject,err_exception_policy>();
	};

	struct com_ptr_t<INetworkListManager,err_returncode_policy>
	{
		~com_ptr_t<INetworkListManager,err_returncode_policy>();
	};

	struct com_ptr_t<IObjectCollection,err_returncode_policy>
	{
		~com_ptr_t<IObjectCollection,err_returncode_policy>();
	};

	struct com_ptr_t<IProfileNotify,err_returncode_policy>
	{
		~com_ptr_t<IProfileNotify,err_returncode_policy>();
	};

	struct com_ptr_t<IShellItem,err_exception_policy>
	{
		~com_ptr_t<IShellItem,err_exception_policy>();
	};

	struct com_ptr_t<Windows::Foundation::Collections::IMap<HSTRING__ *,HSTRING__ *>,err_exception_policy>
	{
		~com_ptr_t<Windows::Foundation::Collections::IMap<HSTRING__ *,HSTRING__ *>,err_exception_policy>();
	};

	struct com_ptr_t<Windows::Foundation::Collections::IMapView<HSTRING__ *,Windows::Services::TargetedContent::TargetedContentValue *>,err_returncode_policy>
	{
		~com_ptr_t<Windows::Foundation::Collections::IMapView<HSTRING__ *,Windows::Services::TargetedContent::TargetedContentValue *>,err_returncode_policy>();
	};

	struct com_ptr_t<Windows::Foundation::Collections::IVectorView<HSTRING__ *>,err_returncode_policy>
	{
		~com_ptr_t<Windows::Foundation::Collections::IVectorView<HSTRING__ *>,err_returncode_policy>();
	};

	struct com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::AssignedAccess::AssignedAccessApplication *>,err_returncode_policy>
	{
		~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::AssignedAccess::AssignedAccessApplication *>,err_returncode_policy>();
	};

	struct com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::AssignedAccess::AssignedAccessUserInfo *>,err_returncode_policy>
	{
		~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::AssignedAccess::AssignedAccessUserInfo *>,err_returncode_policy>();
	};

	struct com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::TargetedContentItem *>,err_returncode_policy>
	{
		~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::TargetedContentItem *>,err_returncode_policy>();
	};

	struct com_ptr_t<Windows::Foundation::IAsyncAction,err_returncode_policy>
	{
		~com_ptr_t<Windows::Foundation::IAsyncAction,err_returncode_policy>();
	};

	struct com_ptr_t<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<HSTRING__ *> *>,err_returncode_policy>
	{
		~com_ptr_t<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<HSTRING__ *> *>,err_returncode_policy>();
	};

	struct com_ptr_t<Windows::Foundation::IAsyncOperation<Windows::Services::TargetedContent::TargetedContentContainer *>,err_returncode_policy>
	{
		~com_ptr_t<Windows::Foundation::IAsyncOperation<Windows::Services::TargetedContent::TargetedContentContainer *>,err_returncode_policy>();
	};

	struct com_ptr_t<Windows::Foundation::IAsyncOperation<Windows::Services::TargetedContent::TargetedContentSubscription *>,err_returncode_policy>
	{
		~com_ptr_t<Windows::Foundation::IAsyncOperation<Windows::Services::TargetedContent::TargetedContentSubscription *>,err_returncode_policy>();
	};

	struct com_ptr_t<Windows::Internal::AssignedAccess::IAssignedAccessApplication,err_returncode_policy>
	{
		~com_ptr_t<Windows::Internal::AssignedAccess::IAssignedAccessApplication,err_returncode_policy>();
	};

	struct com_ptr_t<Windows::Internal::AssignedAccess::IAssignedAccessConfiguration,err_returncode_policy>
	{
		~com_ptr_t<Windows::Internal::AssignedAccess::IAssignedAccessConfiguration,err_returncode_policy>();
	};

	struct com_ptr_t<Windows::Internal::AssignedAccess::IAssignedAccessController,err_returncode_policy>
	{
		~com_ptr_t<Windows::Internal::AssignedAccess::IAssignedAccessController,err_returncode_policy>();
	};

	struct com_ptr_t<Windows::Internal::AssignedAccess::IAssignedAccessProfile,err_returncode_policy>
	{
		~com_ptr_t<Windows::Internal::AssignedAccess::IAssignedAccessProfile,err_returncode_policy>();
	};

	struct com_ptr_t<Windows::Internal::AssignedAccess::IAssignedAccessUserInfo,err_returncode_policy>
	{
		~com_ptr_t<Windows::Internal::AssignedAccess::IAssignedAccessUserInfo,err_returncode_policy>();
	};

	struct com_ptr_t<Windows::Internal::Shell::AssignedAccess::IAssignedAccessControllerProxy,err_returncode_policy>
	{
		~com_ptr_t<Windows::Internal::Shell::AssignedAccess::IAssignedAccessControllerProxy,err_returncode_policy>();
	};

	struct com_ptr_t<Windows::Management::Provisioning::IPackageManager,err_returncode_policy>
	{
		~com_ptr_t<Windows::Management::Provisioning::IPackageManager,err_returncode_policy>();
	};

	struct com_ptr_t<Windows::Services::TargetedContent::ITargetedContentAction,err_returncode_policy>
	{
		~com_ptr_t<Windows::Services::TargetedContent::ITargetedContentAction,err_returncode_policy>();
	};

	struct com_ptr_t<Windows::Services::TargetedContent::ITargetedContentCollection,err_returncode_policy>
	{
		~com_ptr_t<Windows::Services::TargetedContent::ITargetedContentCollection,err_returncode_policy>();
	};

	struct com_ptr_t<Windows::Services::TargetedContent::ITargetedContentContainer,err_returncode_policy>
	{
		~com_ptr_t<Windows::Services::TargetedContent::ITargetedContentContainer,err_returncode_policy>();
	};

	struct com_ptr_t<Windows::Services::TargetedContent::ITargetedContentContainerStatics,err_returncode_policy>
	{
		~com_ptr_t<Windows::Services::TargetedContent::ITargetedContentContainerStatics,err_returncode_policy>();
	};

	struct com_ptr_t<Windows::Services::TargetedContent::ITargetedContentSubscription,err_returncode_policy>
	{
		~com_ptr_t<Windows::Services::TargetedContent::ITargetedContentSubscription,err_returncode_policy>();
	};

	struct com_ptr_t<Windows::Services::TargetedContent::ITargetedContentSubscriptionOptions,err_returncode_policy>
	{
		~com_ptr_t<Windows::Services::TargetedContent::ITargetedContentSubscriptionOptions,err_returncode_policy>();
	};

	struct com_ptr_t<Windows::Services::TargetedContent::ITargetedContentSubscriptionStatics,err_returncode_policy>
	{
		~com_ptr_t<Windows::Services::TargetedContent::ITargetedContentSubscriptionStatics,err_returncode_policy>();
	};

	struct com_ptr_t<Windows::Services::TargetedContent::ITargetedContentValue,err_returncode_policy>
	{
		~com_ptr_t<Windows::Services::TargetedContent::ITargetedContentValue,err_returncode_policy>();
	};

	struct com_ptr_t<Windows::Services::TargetedContent::Internal::ITargetedContentSubscriptionInternal,err_returncode_policy>
	{
		~com_ptr_t<Windows::Services::TargetedContent::Internal::ITargetedContentSubscriptionInternal,err_returncode_policy>();
	};

	struct com_ptr_t<Windows::System::Profile::IEducationSettingsStatics,err_exception_policy>
	{
		~com_ptr_t<Windows::System::Profile::IEducationSettingsStatics,err_exception_policy>();
	};

	namespace details
	{
		struct DestroyThreadPoolTimer<0>
		{
			static void Destroy(_TP_TIMER *);
		};

		struct DummyUnknown
		{
			DummyUnknown();
			virtual long ContextSensitiveHelp(int);
			virtual long GetClassID(_GUID *);
			virtual long GetWindow(HWND__ * *);
		};

		class EnabledStateManager
		{
			void RecordCachedUsageUnderLock();
		public:
			void OnStateChange();
			void OnTimer();
			void SubscribeFeaturePropertyCacheToEnabledStateChanges(wil_details_FeaturePropertyCache *,wil_FeatureChangeTime);
		};

		struct FeatureFunctorHost
		{
			FeatureFunctorHost(unsigned int,DiagnosticsInfo const &);
			virtual long ExceptionThrown(void *);
			virtual long Run(IFunctor &);
			~FeatureFunctorHost();
		};

		class FeatureStateManager
		{
			bool EnsureStateData();
			void EnsureSubscribedToProcessWideUsageFlushUnderLock();
		public:
			FeatureStateManager();
			void RecordFeatureError(unsigned int,FEATURE_ERROR const &);
			void SubscribeToEnabledStateChanges(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
			void SubscribeToUsageFlush(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *));
			~FeatureStateManager();
		};

		struct StagingFailureInformation
		{
			StagingFailureInformation(FailureInfo const &,DiagnosticsInfo const &,void *);
		};

		class StoredCallContextInfo
		{
			void AssignMessage(unsigned short const *);
		public:
			void ClearMessage();
		};

		class ThreadFailureCallbackHolder
		{
			static long volatile s_telemetryId;
		public:
			ThreadFailureCallbackHolder(IFailureCallback *,CallContextInfo *,bool);
			static bool GetThreadContext(FailureInfo *,ThreadFailureCallbackHolder *,char *,unsigned __int64);
			void StartWatching();
			void StopWatching();
		};

		namespace in1diag3
		{
			bool Log_HrIfMsg(void *,unsigned int,char const *,long,bool,char const *,...);
			long Log_CaughtException(void *,unsigned int,char const *);
			long Log_Hr(void *,unsigned int,char const *,long);
			long Log_HrMsg(void *,unsigned int,char const *,long,char const *,...);
			long Log_IfNtStatusFailedMsg(void *,unsigned int,char const *,long,char const *,...);
			long Return_CaughtException(void *,unsigned int,char const *);
			long Return_GetLastError(void *,unsigned int,char const *);
			long Return_NtStatus(void *,unsigned int,char const *,long);
			long Return_Win32(void *,unsigned int,char const *,unsigned long);
			unsigned long Log_Win32(void *,unsigned int,char const *,unsigned long);
			void FailFastImmediate_Unexpected();
			void FailFast_Unexpected(void *,unsigned int,char const *);
			void Return_Hr(void *,unsigned int,char const *,long);
			void Return_HrMsg(void *,unsigned int,char const *,long,char const *,...);
			void Return_HrMsg_NoOriginate(void *,unsigned int,char const *,long,char const *,...);
			void Return_Hr_NoOriginate(void *,unsigned int,char const *,long);
			void _FailFastImmediate_Unexpected();
			void _FailFast_GetLastError(void *,unsigned int,char const *);
			void _FailFast_Hr(void *,unsigned int,char const *,long);
			void _FailFast_Unexpected(void *,unsigned int,char const *);
			void _Log_GetLastError(void *,unsigned int,char const *);
			void _Log_Hr(void *,unsigned int,char const *,long);
			void _Log_NullAlloc(void *,unsigned int,char const *);
			void _Log_Win32(void *,unsigned int,char const *,unsigned long);
			void _Throw_Hr(void *,unsigned int,char const *,long);
			void _Throw_NtStatus(void *,unsigned int,char const *,long);
		};

		class shared_buffer
		{
			void assign(long *,unsigned __int64);
		public:
			bool create(void const *,unsigned __int64);
			void reset();
		};

		struct shared_object<ActivityBase<CommonStartTelemetryLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CommonStartTelemetryLogging,_TlgReflectorTag_Param0IsProviderType> >
		{
			void reset();
		};

		struct shared_object<ActivityBase<CortanaProactiveLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CortanaProactiveLogging,_TlgReflectorTag_Param0IsProviderType> >
		{
			void reset();
		};

		struct shared_object<ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CreativeFramework::Logging::ShellPlacementLogging,_TlgReflectorTag_Param0IsProviderType> >
		{
			void reset();
		};

		struct shared_object<ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CreativeFramework::Logging::ShellPlacementLogging,_TlgReflectorTag_Param0IsProviderType> >
		{
			void reset();
		};

		struct shared_object<ActivityBase<ExplorerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ExplorerLogging,_TlgReflectorTag_Param0IsProviderType> >
		{
			void reset();
		};

		struct shared_object<ActivityBase<ImmersiveIconsLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ImmersiveIconsLogging,_TlgReflectorTag_Param0IsProviderType> >
		{
			void reset();
		};

		struct shared_object<ActivityBase<LogonFrameworkLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<LogonFrameworkLogging,_TlgReflectorTag_Param0IsProviderType> >
		{
			void reset();
		};

		struct shared_object<ActivityBase<LogonFrameworkLogging,1,140737488355328,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<LogonFrameworkLogging,_TlgReflectorTag_Param0IsProviderType> >
		{
			void reset();
		};

		struct shared_object<ActivityBase<LogonFrameworkLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<LogonFrameworkLogging,_TlgReflectorTag_Param0IsProviderType> >
		{
			void reset();
		};

		struct shared_object<ActivityBase<LogonFrameworkLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<LogonFrameworkLogging,_TlgReflectorTag_Param0IsProviderType> >
		{
			shared_object<ActivityBase<LogonFrameworkLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<LogonFrameworkLogging,_TlgReflectorTag_Param0IsProviderType> > & operator=(shared_object<ActivityBase<LogonFrameworkLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<LogonFrameworkLogging,_TlgReflectorTag_Param0IsProviderType> > const &);
			void reset();
		};

		struct shared_object<ActivityBase<NotificationCenterLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<NotificationCenterLogging,_TlgReflectorTag_Param0IsProviderType> >
		{
			void reset();
		};

		struct shared_object<ActivityBase<NotificationCenterLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<NotificationCenterLogging,_TlgReflectorTag_Param0IsProviderType> >
		{
			void reset();
		};

		struct shared_object<ActivityBase<PrivacyConsentLogging,1,140737488355328,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<PrivacyConsentLogging,_TlgReflectorTag_Param0IsProviderType> >
		{
			void reset();
		};

		struct shared_object<ActivityBase<TaskbarLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TaskbarLogging,_TlgReflectorTag_Param0IsProviderType> >
		{
			shared_object<ActivityBase<TaskbarLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TaskbarLogging,_TlgReflectorTag_Param0IsProviderType> > & operator=(shared_object<ActivityBase<TaskbarLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TaskbarLogging,_TlgReflectorTag_Param0IsProviderType> > const &);
			void reset();
		};

		struct shared_object<ActivityBase<TaskbarLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TaskbarLogging,_TlgReflectorTag_Param0IsProviderType> >
		{
			void reset();
		};

		struct shared_object<ActivityBase<TileBadgeProviderLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TileBadgeProviderLogging,_TlgReflectorTag_Param0IsProviderType> >
		{
			void reset();
		};

		struct shared_object<ActivityBase<TrayNotificationAreaLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TrayNotificationAreaLogging,_TlgReflectorTag_Param0IsProviderType> >
		{
			shared_object<ActivityBase<TrayNotificationAreaLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TrayNotificationAreaLogging,_TlgReflectorTag_Param0IsProviderType> > & operator=(shared_object<ActivityBase<TrayNotificationAreaLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TrayNotificationAreaLogging,_TlgReflectorTag_Param0IsProviderType> > const &);
			void reset();
		};

		struct shared_object<ActivityBase<TrayNotificationAreaLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TrayNotificationAreaLogging,_TlgReflectorTag_Param0IsProviderType> >
		{
			void reset();
		};

		struct static_lazy<AutoHideTelemetry::TaskbarAutoHideTelemetry>
		{
			struct Completer
			{
				~Completer();
			};

			AutoHideTelemetry::TaskbarAutoHideTelemetry * get(void (*)());
			void cleanup();
		};

		struct static_lazy<ButtonTelemetry>
		{
			struct Completer
			{
				~Completer();
			};

			void cleanup();
		};

		struct static_lazy<CAppLifeCycle_UILogging>
		{
			CAppLifeCycle_UILogging * get(void (*)());
			void cleanup();
		};

		struct static_lazy<CLauncherTelemetry>
		{
			struct Completer
			{
				~Completer();
			};

			void cleanup();
		};

		struct static_lazy<CommonStartTelemetryLogging>
		{
			CommonStartTelemetryLogging * get(void (*)());
			void cleanup();
		};

		struct static_lazy<ContentDeliveryManager::Background::ContentDeliveryManagerLogging>
		{
			ContentDeliveryManager::Background::ContentDeliveryManagerLogging * get(void (*)());
		};

		struct static_lazy<CortanaProactiveLogging>
		{
			CortanaProactiveLogging * get(void (*)());
			void cleanup();
		};

		struct static_lazy<CreativeFramework::Logging::ShellPlacementLogging>
		{
			CreativeFramework::Logging::ShellPlacementLogging * get(void (*)());
			void cleanup();
		};

		struct static_lazy<ExplorerLogging>
		{
			ExplorerLogging * get(void (*)());
			void cleanup();
		};

		struct static_lazy<ExplorerTelemetry>
		{
			struct Completer
			{
				~Completer();
			};

			void cleanup();
		};

		struct static_lazy<FeatureLogging>
		{
			FeatureLogging * get(void (*)());
		};

		struct static_lazy<ImmersiveIconsLogging>
		{
			ImmersiveIconsLogging * get(void (*)());
			void cleanup();
		};

		struct static_lazy<LogonFrameworkLogging>
		{
			LogonFrameworkLogging * get(void (*)());
			void cleanup();
		};

		struct static_lazy<NotificationCenterLogging>
		{
			NotificationCenterLogging * get(void (*)());
		};

		namespace static_lazy<NotificationCenterUITelemetry::NotificationCenterTelemetry>
		{
			struct Completer
			{
				~Completer();
			};

		};

		struct static_lazy<OOBEHealthLogging>
		{
			OOBEHealthLogging * get(void (*)());
			void cleanup();
		};

		namespace static_lazy<PerfTrack::AppLaunchTelemetry>
		{
			struct Completer
			{
				~Completer();
			};

		};

		struct static_lazy<PerfTrack::AppSwitchTelemetry>
		{
			struct Completer
			{
				~Completer();
			};

			void cleanup();
		};

		struct static_lazy<PrivacyConsentLogging>
		{
			PrivacyConsentLogging * get(void (*)());
		};

		struct static_lazy<SoftLandingLogging>
		{
			SoftLandingLogging * get(void (*)());
		};

		namespace static_lazy<StateCapture::QuickActionsStateTelemetry>
		{
			struct Completer
			{
				~Completer();
			};

		};

		namespace static_lazy<StateCapture::ShellStateTelemetry>
		{
			struct Completer
			{
				~Completer();
			};

		};

		namespace static_lazy<StateCapture::SysTrayStateTelemetry>
		{
			struct Completer
			{
				~Completer();
			};

		};

		struct static_lazy<StateCapture::TaskbarStateTelemetry>
		{
			struct Completer
			{
				~Completer();
			};

			void cleanup();
		};

		struct static_lazy<StateCaptureLogging>
		{
			StateCaptureLogging * get(void (*)());
			void cleanup();
		};

		struct static_lazy<TaskbandTelemetry>
		{
			struct Completer
			{
				~Completer();
			};

			void cleanup();
		};

		struct static_lazy<TaskbarLogging>
		{
			TaskbarLogging * get(void (*)());
			void cleanup();
		};

		struct static_lazy<TileBadgeProviderLogging>
		{
			TileBadgeProviderLogging * get(void (*)());
		};

		struct static_lazy<TrayNotificationAreaLogging>
		{
			TrayNotificationAreaLogging * get(void (*)());
			void cleanup();
		};

		namespace static_lazy<TrayNotificationAreaTelemetry::CTrayNotificationAreaTelemetry>
		{
			struct Completer
			{
				~Completer();
			};

		};

		namespace static_lazy<TrayTelemetry>
		{
			struct Completer
			{
				~Completer();
			};

		};

		struct wnf_subscription_state<empty_wnf_state>
		{
			virtual ~wnf_subscription_state<empty_wnf_state>();
		};

		struct wnf_subscription_state_base
		{
			virtual ~wnf_subscription_state_base();
		};

		FEATURE_ENABLED_STATE WilApiImpl_GetFeatureEnabledState(unsigned int,FEATURE_CHANGE_TIME);
		FEATURE_ENABLED_STATE WilApi_GetFeatureEnabledState(unsigned int,FEATURE_CHANGE_TIME);
		bool (* g_pfnGetModuleInformation)(void *,unsigned int *,char *,unsigned __int64);
		bool GetModuleInformation(void *,unsigned int *,char *,unsigned __int64);
		bool GetModuleInformationFromAddress(void *,unsigned int *,char *,unsigned __int64);
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
		long (* g_pfnRunFunctorWithExceptionFilter)(details::IFunctor &,details::IFunctorHost &,void *);
		long GetLastErrorFailHr();
		long NtStatusToHr(long);
		long RecognizeCaughtExceptionFromCallback(unsigned short *,unsigned __int64);
		long ReportFailure_CaughtException(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,SupportedExceptions);
		long ReportFailure_CaughtExceptionCommon(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,unsigned short *,unsigned __int64,SupportedExceptions);
		long ReportFailure_GetLastErrorHr(void *,unsigned int,char const *,char const *,char const *,void *,FailureType);
		long ReportFailure_NtStatus(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long);
		long ReportFailure_NtStatusMsg(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long,char const *,char *);
		long ReportFailure_Win32(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,unsigned long);
		long ResultFromCaughtExceptionInternal(unsigned short *,unsigned __int64,bool *);
		long RunFunctor(details::IFunctor &,details::IFunctorHost &);
		long RunFunctorWithExceptionFilter(details::IFunctor &,details::IFunctorHost &,void *);
		long StringCchPrintfA(char *,unsigned __int64,char const *,...);
		long WaitForCompletion<Windows::Foundation::IAsyncAction *>(Windows::Foundation::IAsyncAction *,tagCOWAIT_FLAGS,unsigned long,bool *);
		long WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<HSTRING__ *> *> *>(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<HSTRING__ *> *> *,tagCOWAIT_FLAGS,unsigned long,bool *);
		long WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Services::TargetedContent::TargetedContentContainer *> *>(Windows::Foundation::IAsyncOperation<Windows::Services::TargetedContent::TargetedContentContainer *> *,tagCOWAIT_FLAGS,unsigned long,bool *);
		long WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Services::TargetedContent::TargetedContentSubscription *> *>(Windows::Foundation::IAsyncOperation<Windows::Services::TargetedContent::TargetedContentSubscription *> *,tagCOWAIT_FLAGS,unsigned long,bool *);
		shutdown_aware_object<details::EnabledStateManager> g_enabledStateManager;
		shutdown_aware_object<details::FeatureStateManager> g_featureStateManager;
		unsigned __int64 ResultStringSize(char const *);
		unsigned __int64 ResultStringSize(unsigned short const *);
		unsigned char (* g_pfnRtlDllShutdownInProgress)();
		unsigned char * WriteResultString<char const *>(unsigned char *,unsigned char *,char const *,char const * *);
		unsigned char * WriteResultString<unsigned short const *>(unsigned char *,unsigned char *,unsigned short const *,unsigned short const * *);
		unsigned char RtlDllShutdownInProgress();
		unsigned int WilApiImpl_GetFeatureVariant(unsigned int,FEATURE_CHANGE_TIME,unsigned int *,int *);
		unsigned int WilApi_GetFeatureVariant(unsigned int,FEATURE_CHANGE_TIME,unsigned int *,int *);
		unsigned long (* g_pfnRtlNtStatusToDosErrorNoTeb)(long);
		unsigned long GetLastErrorFail(void *,unsigned int,char const *,char const *,char const *,void *);
		unsigned long ReportFailure_GetLastError(void *,unsigned int,char const *,char const *,char const *,void *,FailureType);
		unsigned long RtlNtStatusToDosErrorNoTeb(long);
		unsigned short * LogStringPrintf(unsigned short *,unsigned short const *,unsigned short const *,...);
		void (* g_pfnDebugBreak)();
		void (* g_pfnGetContextAndNotifyFailure)(FailureInfo *,char *,unsigned __int64);
		void (* g_pfnLoggingCallback)(FailureInfo const &);
		void (* g_pfnOriginateCallback)(FailureType,long);
		void (* g_pfnRethrow)();
		void (* g_pfnTelemetryCallback)(bool,FailureInfo const &);
		void (* g_pfnThrowResultException)(FailureInfo const &);
		void CloseHandle(void *);
		void DebugBreak();
		void FeatureLoggingHook(unsigned int,FEATURE_LOGGED_TRAITS const *,FEATURE_ERROR const *,int,wil_ReportingKind const *,wil_VariantReportingKind const *,unsigned char,unsigned __int64);
		void FreeProcessHeap(void *);
		void GetContextAndNotifyFailure(FailureInfo *,char *,unsigned __int64);
		void LogFailure(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long,unsigned short const *,bool,unsigned short *,unsigned __int64,char *,unsigned __int64,FailureInfo *);
		void MaybeGetExceptionString(ResultException const &,unsigned short *,unsigned __int64);
		void MaybeGetExceptionString(exception const &,unsigned short *,unsigned __int64);
		void OriginateError(FailureType,long);
		void RecordFeatureUsageCallback(unsigned int,wil_details_FeaturePropertyCache *,wil_details_RecordUsageResult *);
		void ReleaseMutex(void *);
		void ReportFailure(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long,unsigned short const *,details::ReportFailureOptions);
		void ReportFailure_Hr(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long);
		void ReportFailure_HrMsg(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long,char const *,char *);
		void ReportFailure_Msg(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long,char const *,char *);
		void ReportFeatureCaughtException(ThreadErrorContext &,unsigned int,DiagnosticsInfo const &,void *);
		void ReportFeatureError(long,ThreadErrorContext &,unsigned int,DiagnosticsInfo const &);
		void ResetEvent(void *);
		void Rethrow();
		void SetEvent(void *);
		void ThrowResultExceptionInternal(FailureInfo const &);
		void WilApiImpl_RecordFeatureError(unsigned int,FEATURE_ERROR const *);
		void WilApiImpl_RecordFeatureUsage(unsigned int,unsigned int,unsigned int,char const *);
		void WilApiImpl_SubscribeFeatureStateChangeNotification(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
		void WilApiImpl_UnsubscribeFeatureStateChangeNotification(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
		void WilApi_RecordFeatureUsage(unsigned int,unsigned int,unsigned int,char const *);
		void WilApi_SubscribeFeatureStateChangeNotification(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
		void WilApi_UnsubscribeFeatureStateChangeNotification(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
		void delete_wnf_subscription_state(details::wnf_subscription_state_base *);
	};

	namespace details_abi
	{
		class FeatureStateData
		{
			void RetrieveUsageUnderLock(UsageIndexes &);
		public:
			bool RecordFeatureError(unsigned int,FEATURE_ERROR const &);
			void ProcessShutdown();
			void RecordUsage();
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
			static long TryGetPointer(unsigned short const *,void * *);
			void Destroy();
			~SemaphoreValue();
		};

		struct SerializedFailure
		{
			static bool Serialize(FEATURE_ERROR const &,unsigned __int64 *,void *,unsigned __int64);
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
			bool GetCaughtExceptionError(FailureInfo &,unsigned int,DiagnosticsInfo const *,long,void *);
			bool GetLastError(FailureInfo &,unsigned int,long);
			void SetLastError(FailureInfo const &);
		};

		struct ThreadLocalFailureInfo
		{
			void Get(FailureInfo &);
			void Set(FailureInfo const &,unsigned int);
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

	struct shutdown_aware_object<details::EnabledStateManager>
	{
		shutdown_aware_object<details::EnabledStateManager>();
		~shutdown_aware_object<details::EnabledStateManager>();
	};

	struct shutdown_aware_object<details::FeatureStateManager>
	{
		shutdown_aware_object<details::FeatureStateManager>();
		~shutdown_aware_object<details::FeatureStateManager>();
	};

	bool (* g_pfnIsDebuggerPresent)();
	bool ProcessShutdownInProgress();
	bool g_fBreakOnFailure;
	bool g_fIsDebuggerPresent;
	bool handle_wait(void *,unsigned long);
	long (* g_pfnResultFromCaughtException)();
	long GetFailureLogString(unsigned short *,unsigned __int64,wil::FailureInfo const &);
	long GetTokenInformationNoThrow<_TOKEN_USER>(wistd::unique_ptr<_TOKEN_USER,wistd::default_delete<_TOKEN_USER> > &,void *);
	long ResultFromCaughtException();
	long wnf_query_nothrow(_WNF_STATE_NAME const &,bool *,wil::WNF_CHANGE_STAMP_STRUCT *);
	void RethrowCaughtException();
	void SetLastError(wil::FailureInfo const &);
	wil::com_ptr_t<Windows::System::Profile::IEducationSettingsStatics,wil::err_exception_policy> GetActivationFactory<Windows::System::Profile::IEducationSettingsStatics>(unsigned short const *);
	wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)> > > OpenCurrentAccessToken(unsigned long,wil::OpenThreadTokenAs);
	wistd::unique_ptr<_TOKEN_USER,wistd::default_delete<_TOKEN_USER> > GetTokenInformation<_TOKEN_USER>(void *);
};

namespace wistd
{
	class _Func_class<bool,void *,unsigned __int64,void *,unsigned __int64,unsigned int,_Nil,_Nil>
	{
	protected:
		void _Tidy();
	};

	class _Func_class<long,NotificationCenterBadgeRenderResult,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>
	{
	protected:
		void _Tidy();
	};

	class _Func_class<long,SettingsBitmapLoadInfo,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>
	{
	protected:
		void _Tidy();
	};

	class _Func_class<long,TaskbarBadgeVisualRenderResult,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>
	{
	protected:
		void _Tidy();
	};

	class _Func_class<long,Windows::Security::Credentials::IWebAccount *,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>
	{
	protected:
		void _Tidy();
	public:
		long operator()(Windows::Security::Credentials::IWebAccount *);
	};

	class _Func_class<long,tagSIZE,HBITMAP__ * *,_Nil,_Nil,_Nil,_Nil,_Nil>
	{
	protected:
		void _Tidy();
	public:
		long operator()(tagSIZE,HBITMAP__ * *);
	};

	class _Func_class<void,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>
	{
	protected:
		void _Tidy();
	public:
		~_Func_class<void,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>();
	};

	struct function<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>
	{
		~function<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>();
	};

	struct function<long (NotificationCenterBadgeRenderResult)>
	{
		~function<long (NotificationCenterBadgeRenderResult)>();
	};

	struct function<long (SettingsBitmapLoadInfo)>
	{
		~function<long (SettingsBitmapLoadInfo)>();
	};

	struct function<long (TaskbarBadgeVisualRenderResult)>
	{
		~function<long (TaskbarBadgeVisualRenderResult)>();
	};

	struct unique_ptr<AssignedAccessLogonTask,default_delete<AssignedAccessLogonTask> >
	{
		~unique_ptr<AssignedAccessLogonTask,default_delete<AssignedAccessLogonTask> >();
	};

	class unique_ptr<AssignedAccessLogonTaskAgent,default_delete<AssignedAccessLogonTaskAgent> >
	{
		void _Delete();
	};

	struct unique_ptr<BackButton,default_delete<BackButton> >
	{
		~unique_ptr<BackButton,default_delete<BackButton> >();
	};

	struct unique_ptr<CKeyboardButton,default_delete<CKeyboardButton> >
	{
		~unique_ptr<CKeyboardButton,default_delete<CKeyboardButton> >();
	};

	struct unique_ptr<CMultitaskingButton,default_delete<CMultitaskingButton> >
	{
		~unique_ptr<CMultitaskingButton,default_delete<CMultitaskingButton> >();
	};

	struct unique_ptr<CNotificationCenterButton,default_delete<CNotificationCenterButton> >
	{
		~unique_ptr<CNotificationCenterButton,default_delete<CNotificationCenterButton> >();
	};

	struct unique_ptr<CSearchButton,default_delete<CSearchButton> >
	{
		~unique_ptr<CSearchButton,default_delete<CSearchButton> >();
	};

	struct unique_ptr<CTraySearchControl,default_delete<CTraySearchControl> >
	{
		~unique_ptr<CTraySearchControl,default_delete<CTraySearchControl> >();
	};

	struct unique_ptr<ClockButton,default_delete<ClockButton> >
	{
		~unique_ptr<ClockButton,default_delete<ClockButton> >();
	};

	struct unique_ptr<ControlCenterButton,default_delete<ControlCenterButton> >
	{
		~unique_ptr<ControlCenterButton,default_delete<ControlCenterButton> >();
	};

	struct unique_ptr<CortanaConversationButton,default_delete<CortanaConversationButton> >
	{
		~unique_ptr<CortanaConversationButton,default_delete<CortanaConversationButton> >();
	};

	struct unique_ptr<PenWorkspaceButton,default_delete<PenWorkspaceButton> >
	{
		~unique_ptr<PenWorkspaceButton,default_delete<PenWorkspaceButton> >();
	};

	struct unique_ptr<PenWorkspaceSecondaryMonitorButton,default_delete<PenWorkspaceSecondaryMonitorButton> >
	{
		~unique_ptr<PenWorkspaceSecondaryMonitorButton,default_delete<PenWorkspaceSecondaryMonitorButton> >();
	};

	struct unique_ptr<TabletModeNotificationArea,default_delete<TabletModeNotificationArea> >
	{
		~unique_ptr<TabletModeNotificationArea,default_delete<TabletModeNotificationArea> >();
	};

	struct unique_ptr<TouchpadButton,default_delete<TouchpadButton> >
	{
		~unique_ptr<TouchpadButton,default_delete<TouchpadButton> >();
	};

	struct unique_ptr<TrayNotifyButton,default_delete<TrayNotifyButton> >
	{
		~unique_ptr<TrayNotifyButton,default_delete<TrayNotifyButton> >();
	};

	struct unique_ptr<_TOKEN_USER,default_delete<_TOKEN_USER> >
	{
		~unique_ptr<_TOKEN_USER,default_delete<_TOKEN_USER> >();
	};

	struct unique_ptr<_WNF_CONTEXT,default_delete<_WNF_CONTEXT> >
	{
		~unique_ptr<_WNF_CONTEXT,default_delete<_WNF_CONTEXT> >();
	};

};

;
ATL::CComModule g_atlModule;
CDynamicClassFactory * * g_rgpcf;
CTrayStatic c_trayStatic;
CloudExperienceHostResult GetCloudExperienceHostResult();
CloudExperienceHostResult GetCloudExperienceHostResultFromString(unsigned short const *);
DPI_AWARENESS_CONTEXT__ * (* s_pfnGetWindowDpiAwarenessContext)(HWND__ *);
EXPLORERSERVER ShouldStartDesktopAndTray();
EntPlatStateMachineNameMap * g_rgStateMachineNameMap;
FEATURE_ENABLED_STATE (* g_wil_details_apiGetFeatureEnabledState)(unsigned int,FEATURE_CHANGE_TIME);
FEATURE_ENABLED_STATE (* g_wil_details_internalGetFeatureEnabledState)(unsigned int,FEATURE_CHANGE_TIME);
HBITMAP__ * CreateBitmapCompositionAware(HDC__ *,int,int);
HICON__ * CreateLanguageNameIcon(unsigned short *,unsigned long,int,int,HFONT__ *,int,int);
HICON__ * LoadBetterIconFromResource(HICON__ *,int,int,unsigned int);
HICON__ * ReplaceIconColor(HICON__ *,unsigned long,unsigned long);
HINSTANCE__ * g_wil_details_ntdllModuleHandle;
HINSTANCE__ * wil_details_GetNtDllModuleHandle();
HMENU__ * FakeGetSystemMenu(HWND__ *,HWND__ *);
HMENU__ * LoadMenuPopup(HINSTANCE__ *,unsigned short const *);
HWND__ * GetActiveTabFromContainer(HWND__ * const);
HWND__ * GetRootOwner(HWND__ *);
IBandSite * BandSite_CreateView(ITrayComponentHost *);
ICatBandManager * BandSite_GetCatBandManager(IUnknown *);
IStream * GetDesktopViewStream(unsigned long,unsigned short const *);
ITrustedComponentForegroundControl * g_pForegroundControl;
Microsoft::WRL::ComPtr<CRefCountedObject<CFirstLogonAnimation> > CreateRefCountedObj<CFirstLogonAnimation>();
Microsoft::WRL::ComPtr<CRefCountedObject<CortanaEnabledState> > CreateRefCountedObj<CortanaEnabledState>();
Microsoft::WRL::Wrappers::CriticalSection g_loggingFnCs;
PrivacyConsentState PrivacyConsentStatus();
SJpegQuantizationTable const * const JpegQuantizationTables;
SearchboxTaskbarMode GetSearchboxTaskbarMode();
UserOOBEExitReason GetUserOOBEExitReason();
Windows::UI::Notifications::ToastTemplateType GetToastTemplate(unsigned short const *,unsigned short const *,unsigned short const *);
_ACTIVITY_NAME_MAP * g_rgActivityNameMap;
_FILETIME GetExpirationAsFileTime(int);
_GUID GUIDFromCmdLine(unsigned short const *,int);
_GUID GetFirstRunTelemetryCorrelationId();
_GUID const SID_ViewEventDispatcher;
_GUID const g_SHSqmGlobalSession;
_HIDDENITEMID const * ILFindFirstHiddenID(_ITEMIDLIST const *);
_HIDDENITEMID const * ILFindFirstHiddenID(_ITEMIDLIST_RELATIVE const *);
_HIDDENITEMID const * ILFindHiddenIDOn(_ITEMIDLIST const *,IDLHID,int);
_HIDDENITEMID const * ILFindHiddenIDOn(_ITEMIDLIST_RELATIVE const *,IDLHID,int);
_ITEMIDLIST_ABSOLUTE * IDListFromCmdLine(unsigned short const *,int);
_ITEMIDLIST_ABSOLUTE * ILRootedCreateIDList(_GUID const *,_ITEMIDLIST_ABSOLUTE const *);
_ITEMIDLIST_RELATIVE * ILAppendHiddenStringW(_ITEMIDLIST_RELATIVE *,IDLHID,unsigned short const *);
_ITEMIDLIST_RELATIVE * ILCloneParent(_ITEMIDLIST_RELATIVE const *);
_NgcPinResetScenarioState GetPinResetPolicyFailureState();
_RTL_RUN_ONCE s_InitOnce;
_WIRELESS_SIGNAL_STRENGTH CalcSignalStrength(_WCM_MEDIA_TYPE,unsigned long);
__WIL_RTL_SRWLOCK g_wil_details_testFeatureStateLock;
__int64 RunDlgStaticSubclassWndProc(HWND__ *,unsigned int,unsigned __int64,__int64,unsigned __int64,unsigned __int64);
__int64 TabletButtonWndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
__int64 TaskbarSizingBarSubclassProc(HWND__ *,unsigned int,unsigned __int64,__int64,unsigned __int64,unsigned __int64);
bool AreSystemTimesEqual(_SYSTEMTIME const &,_SYSTEMTIME const &);
bool GetAppsUseLightTheme();
bool GetDesktopModeAutoInvokeEnabled();
bool IsAgile(IUnknown *);
bool IsAuditMode();
bool IsAutoLogonAfterCredentialReset();
bool IsCollectionBackupOnly(IStaticSettingHandlerHelper *,unsigned short const *);
bool IsCredentialReset();
bool IsCurrentComApartment(IUnknown *);
bool IsCursorSuppressed();
bool IsDefViewPlaceholder(HMENU__ *,int);
bool IsDefaultBrowserImmersiveAppUserModelId(unsigned short const *);
bool IsImmersivePidl(_ITEMIDLIST_ABSOLUTE const *);
bool IsOnUserDesktop();
bool IsPPIEdition();
bool IsPointerDeviceSupportedOnMonitor(HMONITOR__ *,tagPOINTER_DEVICE_TYPE);
bool IsPrimaryOrSecondaryTray(HWND__ *);
bool IsProcessShutdownInProgress();
bool IsRegisteredShellFileName(unsigned short const * const *,int);
bool IsStagingInProgress();
bool IsUserOOBE();
bool IsUserOOBEOrCredentialReset();
bool IsValidCommandItem(tagMENUITEMINFOW const &,unsigned int);
bool IsValidDesktopZOrderBand(HWND__ *,ValidWindowType);
bool IsVerbRegistered(IQueryAssociations *,unsigned short const *);
bool IsVerbRegistered(IShellItem *,unsigned short const *);
bool IsWindowNeedToBeRestored(CDSA<HWND__ *> const &,HWND__ *);
bool IsWindowNotDesktopOrTray(HWND__ *);
bool LogonOptimizationPermitted(LogonOptimizationFlags,bool);
bool NcHitTestForTraySizingBorder(HWND__ *,unsigned int,__int64,ITrayComponentHost *);
bool OpenWithIsDefaultVerb(unsigned short const *);
bool ShouldPinMail(IFlexibleTaskbarPinnedList *);
bool ShouldTaskbandBeHidden();
bool StartTabletInputService();
bool ToolBar_InsertButton(HWND__ *,int,_TBBUTTON *);
bool ToolBar_SetButtonSize(HWND__ *,int,int);
bool _GetNthMostDominantColorFromBits(tagRGBQUAD *,int,int,int,unsigned int,bool,bool,unsigned long *);
bool _IsAppAvailable(unsigned short const *);
bool _IsClickDown(unsigned int);
bool _IsCurrentUserLocalSystem();
bool _IsImmersiveAppWindow(HWND__ *);
bool _SetSessionEvent(unsigned short const *);
bool _ShouldCheckApartments(ApartmentCheckEnum);
bool _ShouldFireFamilySafetyEtwEventForSoftLanding();
bool _ShouldSyncSettingsAtLogonAndLogResult();
bool ocscpy_s(unsigned short *,unsigned __int64,unsigned short const *);
double _CalculateLuminosity(unsigned long);
double _ConvertRGBValueToLinearizedValue(double);
float GetFlashCurve(float);
int (* s_pfnAreDpiAwarenessContextsEqual)(DPI_AWARENESS_CONTEXT__ *,DPI_AWARENESS_CONTEXT__ *);
int (* s_pfnGetDpiForWindow)(HWND__ *);
int (* s_pfnGetSystemMetricsForDpi)(int,int);
int AppCommandTryRegistry(int,bool);
int BandSite_HandleMessage(IUnknown *,HWND__ *,unsigned int,unsigned __int64,__int64,__int64 *);
int BandSite_PermitAutoHide(IUnknown *);
int CCDrawEdge(HDC__ *,tagRECT *,unsigned int,unsigned int,tagCOLORSCHEME *);
int CanGlassifyTaskbar(ITrayComponentHost *);
int CompareLangIDs(void const *,void const *);
int CompareLangName(void const *,void const *);
int DPA_ReleaseCB<ITaskBtnGroup>(ITaskBtnGroup *,void *);
int DPA_ReleaseCB<ITaskGroup>(ITaskGroup *,void *);
int DPA_ReleaseCB<ITaskItem>(ITaskItem *,void *);
int DPA_ReleaseCB<ITaskListUI>(ITaskListUI *,void *);
int DPA_ReleaseCB<ITaskThumbnail>(ITaskThumbnail *,void *);
int DeferCallback(void *,void *);
int ExecStartupEnumProc(IShellFolder *,_ITEMID_CHILD *,IServiceProvider *,unsigned int,int *);
int ExplorerIsShell();
int GetMonitorRects(HMONITOR__ *,tagRECT *,int);
int GetRootFromRootClass(unsigned short const *,unsigned short *,int);
int GetSCAIndex(_GUID const &);
int HasCompositionAndAeroPeekEnabledRegKey();
int HasPerLogonActionBeenDone(unsigned short const *,TRIBIT *);
int HasRegion(HWND__ *);
int HashPathToGUID(unsigned short const *,_GUID *);
int ILGetHiddenStringAllocW(_ITEMIDLIST const *,IDLHID,unsigned short * *);
int ILGetHiddenStringAllocW(_ITEMIDLIST_RELATIVE const *,IDLHID,unsigned short * *);
int InitializeUserAPIs(_RTL_RUN_ONCE *,void *,void * *);
int InlineIsEqualGUID(_GUID const &,_GUID const &);
int IsAnimationAllowedInSku();
int IsBiDiLocale(unsigned long);
int IsDesktopWindowAlreadyPresent();
int IsGhostWindowClass(HWND__ * const);
int IsHighContrast();
int IsHighContrastWhite();
int IsKeyDown(int);
int IsMessageFromTouch();
int IsPosInHwnd(__int64,HWND__ *);
int IsShakeEnabled();
int IsShakedAllowedInSku();
int IsSizeMoveEnabled();
int IsSmallerThanScreen(HWND__ *);
int IsTaskbarBadgingEnabled();
int IsTouchAvailable();
int MonitorRectsEnumProc(HMONITOR__ *,HDC__ *,tagRECT *,__int64);
int Reg_GetStruct(HKEY__ *,unsigned short const *,unsigned short const *,void *,unsigned long *);
int Reg_SetStruct(HKEY__ *,unsigned short const *,unsigned short const *,void *,unsigned long);
int SHHasTimeoutElapsed(unsigned long,unsigned long);
int SHIsCurrentAccountBuiltInAdmin();
int SHProcessMessagesUpdateTimeout(unsigned long,unsigned long,unsigned long *);
int SafeCloseHandle(void * *);
int SetAnimation(int);
int ShouldAddWindowToTray(HWND__ *);
int ShouldRefreshSettings(unsigned __int64,__int64);
int ShouldTaskbarAnimate();
int ToolBar_IsVisible(HWND__ *,int);
int Toolbar_GetUniqueID(HWND__ *);
int TranslateArrowKey(int,unsigned long,int);
int TryCreateSessionSubKey(unsigned short const *);
int _AllowLockWorkStation();
int _DoTermsrvAppStuff(unsigned short const *,RRA_FLAGS *);
int _ExecItemByPidls(HWND__ *,_ITEMIDLIST_ABSOLUTE const *,_ITEMID_CHILD const *);
int _ExecuteOldEqualsLineWorker(unsigned short *,int,IUnknown *);
int _FixZorderEnumProc(HWND__ *,__int64);
int _IsSetupRunningAndNotOOBE();
int _LUAIsTokenAdmin(void *);
int _Restricted(HWND__ *,_GUID const &);
int _SHIsMenuSeparator2(HMENU__ *,int,int *);
int _SHKeyHasSubkeys(HKEY__ *,unsigned short const *,int);
int _SHKeyHasValues(HKEY__ *,unsigned short const *,int);
int _ShortcutHasExplicitAppID(IShellLinkW *);
int _private_ParseField(unsigned short const *,int,unsigned short *,int);
int g_fExitExplorer;
int g_fInSizeMove;
int g_wil_details_preventOnDemandStagingConfigReads;
int ocslen(unsigned short const *);
int wil_HasFeatureTestState(unsigned int,wil_FeatureEnabledState *);
int wil_QueryFeatureState(wil_FeatureState *,unsigned int,int,wil_FeatureStore,int *);
int wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(wil_details_FeaturePropertyCache *,unsigned int,wil_details_ServiceReportingKind,unsigned int,unsigned __int64);
int wil_details_HasTestState(unsigned int,wil_details_FeatureTestStateKind,wil_details_FeatureTestState *);
int wil_details_ModifyFeatureData(wil_details_FeaturePropertyCache *,int (*)(wil_details_FeaturePropertyCache *,void *),void *);
int wil_details_SetEnabledAndHasNotificationStateCallback(wil_details_FeaturePropertyCache *,void *);
int wil_details_SetHasNotificationStateCallback(wil_details_FeaturePropertyCache *,void *);
int wil_details_SetPropertyCacheOpportunityCallback(wil_details_FeaturePropertyCache *,void *);
int wil_details_SetPropertyCacheUsageCallback(wil_details_FeaturePropertyCache *,void *);
int wil_details_SetPropertyFlagCallback(wil_details_FeaturePropertyCache *,void *);
int wil_details_StagingConfigFeature_HasUniqueState(wil_details_StagingConfigFeature const *);
int wil_details_StagingConfig_AreAnyFeaturesConfigured(wil_details_StagingConfig *);
int wil_details_StagingConfig_QueryFeatureState(wil_details_StagingConfig *,wil_FeatureState *,unsigned int,int);
long (* g_wil_details_pfnNtQueryWnfStateData)(__WIL__WNF_STATE_NAME const *,__WIL__WNF_TYPE_ID const *,void const *,unsigned long *,void *,unsigned long *);
long (* g_wil_details_pfnNtUpdateWnfStateData)(__WIL__WNF_STATE_NAME const *,void const *,unsigned long,__WIL__WNF_TYPE_ID const *,void const *,unsigned long,unsigned long);
long (* g_wil_details_pfnRtlSubscribeWnfStateChangeNotification)(__WIL__WNF_USER_SUBSCRIPTION * *,__WIL__WNF_STATE_NAME,unsigned long,long (*)(__WIL__WNF_STATE_NAME,unsigned long,__WIL__WNF_TYPE_ID *,void *,void const *,unsigned long),void *,__WIL__WNF_TYPE_ID *,unsigned long,unsigned long);
long (* g_wil_details_pfnRtlUnsubscribeWnfNotificationWaitForCompletion)(__WIL__WNF_USER_SUBSCRIPTION *);
long ActivateApplicationForExperienceWithPropertySet(unsigned short const *,unsigned short const *,IInspectable *,unsigned short const *,Windows::Foundation::Collections::IPropertySet *,ActivateApplicationForExperienceOptions,unsigned long *);
long ActivateApplicationForExperienceWithPropertySet(unsigned short const *,unsigned short const *,unsigned short const *,Windows::Foundation::Collections::IPropertySet *,ActivateApplicationForExperienceOptions,unsigned long *);
long ActivateApplicationForLaunch(unsigned short const *,unsigned short const *,unsigned short const *,ACTIVATEOPTIONSINTERNAL,HMONITOR__ *,unsigned long *);
long AddAllowedSidACEIfNecessary(unsigned short const *,_SE_OBJECT_TYPE,void *);
long AddFrameToWICBitmap(IWICImagingFactory *,IWICBitmapEncoder *,IWICBitmapSource *,_GUID,EncodingOptions);
long AddTemporaryRegistration(unsigned short const * const,unsigned short const * const,unsigned long,bool);
long AllocAndCopySid(void *,void * *);
long AllocAndGetEnrollmentString(HKEY__ *,unsigned short const *,unsigned short * *);
long AllocDisplayNameOfShellLink(IShellLinkW *,unsigned short * *);
long AppReadinessTaskStart(unsigned short const *,APPREADINESS_USER_LOGON_PHASE);
long BadgeContainer_CreateInstance(IBadgeContainerNotifications *,_GUID const &,void * *);
long BadgeData_CreateInstance(BadgingData::BadgeType,unsigned int *,_GUID const &,void * *);
long BadgeVisualFactory_CreateInstance(unsigned int,_GUID const &,void * *);
long BadgeVisualProperties_CreateInstance(IBadgeData *,BadgeVisualColors const &,float,float,_GUID const &,void * *);
long BandSite_AddMenus(IUnknown *,HMENU__ *,unsigned int,unsigned int,unsigned int);
long BandSite_FindBand(IBandSite *,_GUID const &,_GUID const &,void * *,int *,unsigned long *);
long BandSite_RemoveAllBands(IBandSite *);
long BandSite_SetWindowTheme(IBandSite *,unsigned short const *);
long BandSite_TestBandCLSID(IBandSite *,unsigned long,_GUID const &);
long BlockOnCompletionAndGetResults<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount *> *,Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount *> >(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount *> *> *,Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount *> > >,tagCOWAIT_FLAGS,void *);
long CApi_CreateInstance(_GUID const &,void * *);
long CIconLoadingFunctions_CreateInstance(_GUID const &,void * *);
long CImmersiveTaskItem_CreateInstance(IMockableApi *,IImmersiveApplication *,IApplicationViewFlashingNotification *,ITrayComponentHost *,_GUID const &,void * *);
long CInitializeTrayForegroundControl_CreateInstance(IUnknown *,IUnknown * *);
long CObjectFactory_CreateInstance(_GUID const &,void * *);
long CSimpleEnumString_CreateInstance(int,CSimpleEnumString * *);
long CTaskBand_CreateInstance(ITrayComponentHost *,IUnknown *,IUnknown * *);
long CTaskGroup_CreateInstance(IMockableApi *,_ITEMIDLIST_ABSOLUTE const *,unsigned short const *,unsigned short const *,_GUID const &,void * *);
long CTaskGroup_CreateInstance_Pending(IMockableApi *,_GUID const &,void * *);
long CTaskListThumbnailWnd_CreateInstance(HINSTANCE__ *,unsigned int,ITrayComponentHost *,_GUID const &,void * *);
long CTaskListWndMulti_CreateInstance(IObjectFactory *,ITaskItemFilterFactory *,ITrayComponentHost *,ITaskListUI * *);
long CTaskListWnd_CreateInstance(IObjectFactory *,ITaskListAnimation *,ITaskListUI * *);
long CTaskThumbnail_CreateInstance(HWND__ *,ITaskItem *,int,int,ITaskThumbnailHost *,ITaskThumbnail * *);
long CTrayAppIdentityResolver_CreateInstance(IUnknown *,IUnknown * *);
long CTrayBandSiteService_CreateInstance(IUnknown *,IUnknown * *);
long CTrayDeskBand_CreateInstance(IUnknown *,IUnknown * *);
long CTrayInfoTipManagerFactory_CreateInstance(HWND__ *,CTrayItemController *,ITrayInfoTipEvents *,ITrayComponentHost *,_GUID const &,void * *);
long CTrayNotifyStub_CreateInstance(IUnknown *,IUnknown * *);
long CTrayToastActivator_CreateInstance(IUnknown *,IUnknown * *);
long CheckFileSyncGroupPolicy(FileSyncBlockedReason *);
long CheckFileSyncRampUpControls(FileSyncBlockedReason *);
long CleanupPrivacyKeysForCurrentUser();
long ClearAccOffScreen(HWND__ *);
long ClearNotificationsForApplication(unsigned short const *);
long CloudExperienceHostCreateElevatedObject(_GUID const &,_GUID const &,void * *);
long CoCreateActivationManagerAndSetProperties(Windows::Storage::Streams::IBuffer *,IApplicationActivationManagerPriv * *);
long ComputeHashFromString(Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short> > const &,unsigned short * *);
long ConcatenateFileTime(_SYSTEMTIME const &,Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short> > &);
long ContextMenu_GetCommandStringVerb(IContextMenu *,unsigned int,unsigned short *,int);
long Convert32bppIWICBitmapSourceToHBITMAP(IWICBitmapSource *,HBITMAP__ * *);
long Convert32bppWICBitmapSourceToHBITMAP(IWICBitmapSource *,HBITMAP__ * *);
long ConvertHBITMAPToWICBitmap(IWICImagingFactory *,HBITMAP__ *,WICBitmapAlphaChannelOption,IWICBitmapSource * *);
long ConvertHICONToWICBitmap(IWICImagingFactory *,HICON__ *,IWICBitmapSource * *);
long ConvertIWICBitmapSourceTo32bppHBITMAP(IWICBitmapSource *,IWICImagingFactory *,HBITMAP__ * *);
long ConvertWICBitmapPixelFormat(IWICImagingFactory *,IWICBitmapSource *,_GUID,WICBitmapDitherType,IWICBitmapSource * *);
long Create32BitHBITMAP(HDC__ *,tagSIZE const *,void * *,HBITMAP__ * *);
long CreateAndInitAutoDL(unsigned short const *,unsigned short const *,IAutomaticDestinationList * *);
long CreateAndInitCustomDL(unsigned short const *,ICustomDestinationList * *);
long CreateAppShellItemForExtOrProtocol(unsigned short const *,_GUID const &,void * *);
long CreateBitmapFromIconWithAlpha(HICON__ *,int,HBITMAP__ * *);
long CreateSecondaryTaskListWndSite(ITaskListUI *,HMONITOR__ *,unsigned short const *,ITrayComponentHost *,ITaskListWndSite * *);
long CreateSettingsWpnRegistration();
long CreateShellSessionKey(unsigned long,HKEY__ * *);
long CreateUserOOBEExitReasonRegKeyWithAppACL();
long CreateWICBitmap(IWICImagingFactory *,unsigned int,unsigned int,_GUID const &,WICBitmapCreateCacheOption,IWICBitmap * *);
long DataObj_GetIDList(IDataObject *,DATAOBJ_GET_ITEM_FLAGS,_ITEMIDLIST_ABSOLUTE * *);
long DataObj_GetPath(IDataObject *,unsigned short *,unsigned int);
long DataObj_SetBlob(IDataObject *,unsigned int,void const *,unsigned int);
long DisplayNameOfAsString(IShellFolder *,_ITEMIDLIST_RELATIVE const *,unsigned long,unsigned short * *);
long DrawIcon32bpp(HDC__ *,int,int,int,int,HICON__ *,unsigned char);
long DrawThemeBackgroundWithAlpha(void *,HDC__ *,int,int,tagRECT const *,tagRECT const *,unsigned char);
long EEDBTrimGuidBracket(unsigned short const *,unsigned short *);
long EndAccessibilityElement_CreateInstance(ITaskListAcc *,_GUID const &,void * *);
long EnsureTrayForegroundControl();
long ExitCredentialReset(UserOOBEExitReason);
long ExitUserOOBE(UserOOBEExitReason);
long FindMfuList(unsigned long,int,unsigned int *);
long FireOOBEMonitorEvent(OOBEMonitorEvent);
long GetAndIncrementLogonCount(unsigned long *);
long GetAppIDForPid(unsigned long,unsigned short * *);
long GetAppImageFileName(_GUID const &,unsigned short *,unsigned __int64);
long GetCollectionsForFactory(IStaticSettingHandlerHelper *,SETTING_INFO const &,CCoSimpleArray<FIRSTSYNCCOLLECTIONINFO,4294967294,CSimpleArrayStandardCompareHelper<FIRSTSYNCCOLLECTIONINFO> > *);
long GetCurrentUserConnectedState(bool *);
long GetCurrentUserSid(void * *);
long GetCurrentUserSidString(unsigned short * *);
long GetDefaultAppIdForExtension(unsigned short const *,unsigned short * *);
long GetDestinationItemFromDataObject(IDataObject *,_GUID const &,void * *);
long GetExperienceManager(unsigned short const *,_GUID const &,void * *);
long GetGenericCloudExperienceHostInfo(_CXH_SCENARIO_INFO * *);
long GetIconFromBitmap(HBITMAP__ *,HICON__ * *);
long GetIdentityProviderForConnectedUser(_GUID const &,_GUID const &,void * *);
long GetInfoFor32BitHBITMAP(HBITMAP__ *,int *,int *,tagRGBQUAD * *,int *);
long GetLocalizedTitle(unsigned short const *,unsigned short * *);
long GetMSACloudExperienceHostInfo(unsigned short * *,bool *);
long GetOEMWelcomeCenterAppID(unsigned short * *);
long GetPerUserHighContrastSettings(bool *,bool *);
long GetProductType(unsigned long *);
long GetSharedMemHandleFromCmdLine(unsigned short const *,int,void * *,unsigned long *);
long GetStreamOfWICBitmapSourceWithOptions(IWICImagingFactory *,IWICBitmapSource *,_GUID const &,_GUID,EncodingOptions,IStream * *);
long GetThreadThumbnailCache(_GUID const &,void * *);
long GetTruncatedSystemTimeFromRegKey(HKEY__ *,unsigned short const *,_SYSTEMTIME *);
long HRESULTFromLastErrorError();
long HashAppUrlAssociation(unsigned short const *,unsigned short const *,unsigned short const *,_SYSTEMTIME const &,unsigned char,unsigned short * *);
long HashAssociation(unsigned short const *,unsigned short const *,unsigned short const *,_SYSTEMTIME const &,unsigned short * *);
long IContextMenu_SetInvokeVerbs(IContextMenu *,unsigned short const * const * const,unsigned int);
long IExtractIcon_Extract(IExtractIconW *,unsigned short const *,unsigned int,HICON__ * *,HICON__ * *,unsigned int);
long ILCloneWithHiddenID(_ITEMIDLIST_RELATIVE const *,_HIDDENITEMID const *,_ITEMIDLIST_RELATIVE * *);
long IconContainer_CreateInstance(IIconContainerNotifications *,_GUID const &,void * *);
long ImmersiveLauncherStateWnfCallback(_WNF_STATE_NAME,unsigned long,_WNF_TYPE_ID *,void *,void const *,unsigned long);
long InitPropVariantFromString(unsigned short const *,tagPROPVARIANT *);
long InitVariantFromString(unsigned short const *,tagVARIANT *);
long InitializeSecurityToAllowAppContainerComUse();
long InsertExperienceIdAndSerialize(Windows::Foundation::Collections::IPropertySet *,unsigned short const *,Windows::Storage::Streams::IBuffer * *);
long LUApGetPromptSettingDWORD(unsigned short const *,unsigned short const *,unsigned long,SETTINGFLAG *,unsigned long *,unsigned long *);
long LaunchCloudExperienceHostForCredentialReset(unsigned short const *,bool);
long LaunchCloudExperienceHostForOOBE();
long LaunchFirstLogonAnimationProcess(LogonAnimationFlags,_PROCESS_INFORMATION *);
long LaunchNewInstanceWithOptionalElevate(HWND__ *,IShellFolder *,_ITEMID_CHILD const *,unsigned long,int,tagPOINT const *,SWITCH_APP_FLAGS);
long LoadImageWithWIC(IWICImagingFactory *,IStream *,LOAD_IMAGE_WITH_WIC_OPTION,IWICBitmapSource * *,IWICBitmapFrameDecode * *,_GUID *);
long LoadImageWithWIC(IWICImagingFactory *,unsigned short const *,LOAD_IMAGE_WITH_WIC_OPTION,IWICBitmapSource * *,_GUID *,IWICBitmapFrameDecode * *);
long LoadLinkFromFile(unsigned short const *,_GUID const &,void * *);
long LoadPinnedWebsiteIcon(IPinnedWebsiteIconLoadData *,IIconLoaderNotifications2 *);
long LoadShellIconCacheIconOnly(IShellIconLoadData *,IIconLoaderNotifications2 *,IShellTaskScheduler *,IIconLoadingFunctions *);
long LoadWinRTIcon(IWinRTIconLoadData *,IIconLoaderNotifications2 *);
long MakeIconicThumbnailSource(IImmersiveApplication *,HWND__ * *);
long OpenSystemDataRegistryPathForCurrentUser(unsigned short const *,HKEY__ * *);
long ParseAppUserModelId(unsigned short const *,unsigned short * *,unsigned short * *);
long ParseAppUserModelId(unsigned short const *,unsigned short *,unsigned __int64,unsigned short *,unsigned __int64);
long ParseDefaultBrowserImmersivAppUserModelId(unsigned short const *,unsigned short * *);
long PeopleBarPolicyChangedWnfCallback(_WNF_STATE_NAME,unsigned long,_WNF_TYPE_ID *,void *,void const *,unsigned long);
long PersistStreamLoad(IStream *,IUnknown *);
long PersistStreamSave(IStream *,int,IUnknown *);
long PinnedWebsiteIconLoadData_CreateInstance(_ITEMIDLIST_ABSOLUTE const *,_GUID const &,void * *);
long PreparePrivacyConsentKeys(unsigned short const *);
long ProcessPackagedStartupTask(IUnknown *,Windows::ApplicationModel::Internal::IStartupTaskInternal *);
long ProcessPackagedStartupTasks(IUnknown *);
long RegisterDefaultLockScreenApplications();
long RemoveTemporaryRegistration(unsigned short const * const);
long ResolveWindowWorker(IApplicationResolver *,HWND__ *,unsigned short *,unsigned int,unsigned short *,unsigned int,_ITEMIDLIST_ABSOLUTE * *,int *,int *);
long ResultFromKnownLastError();
long ResultFromWin32Handle(void *,void * *);
long RunExplorerUnelevated();
long RunTaskSchedulerTask(unsigned short const *);
long SHCoGetApartmentId(unsigned long *);
long SHCoInitialize();
long SHExePathFromHWND(HWND__ *,unsigned short *,unsigned int);
long SHExePathFromPid(unsigned long,unsigned short *,unsigned int);
long SHExtCoCreateLocalServerFromRegKey(unsigned short const *,unsigned short const *,_GUID const &,void * *);
long SHGetDefaultConnectedIdentityProvider(_GUID *);
long SHGetItemArrayFromDataObjEx(IDataObject *,unsigned short,tagSTGMEDIUM *,_IDA * *);
long SHGetLogonID(unsigned short * *);
long SHGetNameAndFlagsW(_ITEMIDLIST_ABSOLUTE const *,unsigned long,unsigned short *,unsigned int,unsigned long *);
long SHIsParentOwnerOrSelf(HWND__ *,HWND__ *);
long SHOpenControlPanel(unsigned short const *,unsigned short const *,IUnknown *);
long SHOpenEffectiveToken(unsigned long,int,void * *);
long SHQueryToken<_TOKEN_GROUPS>(void *,_TOKEN_INFORMATION_CLASS,int,_TOKEN_GROUPS * *);
long SHQueryToken<_TOKEN_USER>(void *,_TOKEN_INFORMATION_CLASS,int,_TOKEN_USER * *);
long SHRegGetBOOL(HKEY__ *,unsigned short const *,unsigned short const *,int *);
long SHRegGetDWORD(HKEY__ *,unsigned short const *,unsigned short const *,unsigned long *);
long SHRegGetFILETIME(HKEY__ *,unsigned short const *,unsigned short const *,_FILETIME *);
long SHRegGetGUID(HKEY__ *,unsigned short const *,unsigned short const *,_GUID *);
long SHRegGetStringEx(HKEY__ *,unsigned short const *,unsigned short const *,int,unsigned short *,unsigned long);
long SHRegSetBOOL(HKEY__ *,unsigned short const *,unsigned short const *,int);
long SHRegSetDWORD(HKEY__ *,unsigned short const *,unsigned short const *,unsigned long);
long SHRegSetString(HKEY__ *,unsigned short const *,unsigned short const *,unsigned short const *);
long SHSysAllocString(unsigned short const *,unsigned short * *);
long ScaleImageWithWIC(IWICImagingFactory *,IWICBitmapSource *,tagSIZE,bool,IWICBitmapSource * *);
long ScaleWICBitmapSource(IWICImagingFactory *,IWICBitmapSource *,WICBitmapInterpolationMode,tagSIZE,bool,IWICBitmapSource * *);
long SetAccOffScreen(HWND__ *);
long SetActivationPropertySet(IUnknown *,Windows::Storage::Streams::IBuffer *);
long SetAppUrlChoiceAndHash(HKEY__ *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned char);
long SetColorPreferenceForLogonUI(IMMERSIVE_COLOR_PREFERENCE const *,bool);
long SetExplicitIconLocation(IShellLinkW *);
long SetImageSrc(Windows::Data::Xml::Dom::IXmlDocument *,unsigned short const *);
long SetJpegQuantizationTableOptions(JpegQuantizationTableTypes,IPropertyBag2 *);
long SetLaunchArguments(Windows::Data::Xml::Dom::IXmlDocument *,unsigned short const *);
long SetNodeAttribute(Windows::Data::Xml::Dom::IXmlNode *,unsigned short const *,unsigned short const *);
long SetNodeValueString(HSTRING__ *,Windows::Data::Xml::Dom::IXmlNode *,Windows::Data::Xml::Dom::IXmlDocument *);
long SetTitleProperty(IShellLinkW *,unsigned short const *);
long SetUserColorPreferenceAndUpdateLogonUI(IMMERSIVE_COLOR_PREFERENCE const *,bool,bool);
long ShellIconLoadData_CreateInstance(HWND__ *,HWND__ *,_GUID const &,void * *);
long ShellModeStateWnfCallback(_WNF_STATE_NAME,unsigned long,_WNF_TYPE_ID *,void *,void const *,unsigned long);
long ShowOpenWithDialog(unsigned short const *);
long SplitActionAndServiceId(HSTRING__ *,HSTRING__ * *,HSTRING__ * *);
long StartLogging(_TRACE_INFO const *,unsigned short const *);
long StringCbLengthW(unsigned short const *,unsigned __int64,unsigned __int64 *);
long StringCchCatW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchCopyA(char *,unsigned __int64,char const *);
long StringCchCopyNExW(unsigned short *,unsigned __int64,unsigned short const *,unsigned __int64,unsigned short * *,unsigned __int64 *,unsigned long);
long StringCchCopyNW(unsigned short *,unsigned __int64,unsigned short const *,unsigned __int64);
long StringCchCopyW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchLengthW(unsigned short const *,unsigned __int64,unsigned __int64 *);
long StringCchPrintfW(unsigned short *,unsigned __int64,unsigned short const *,...);
long StringCchVPrintfW(unsigned short *,unsigned __int64,unsigned short const *,char *);
long SysAllocCb(unsigned __int64,unsigned short * *);
long TResourceStringAllocCopyEx<unsigned short *>(HINSTANCE__ *,unsigned int,unsigned short,long (*)(void *,unsigned __int64,unsigned short * *),void *,unsigned short * *);
long TaskItemFilterFactory_CreateInstance(unsigned long,ITrayComponentHost *,_GUID const &,void * *);
long TaskItemFilter_CreateInstance(HMONITOR__ *,TaskItemFilterFlags,ITrayComponentHost *,_GUID const &,void * *);
long TileBadgeProvider_CreateInstance(IBadgeDataCallback *,_GUID const &,void * *);
long TrayImmersiveShellProxy_CreateInstance(_GUID const &,void * *);
long TrayUI_CreateInstance(ITrayUIHost *,_GUID const &,void * *);
long UADeleteEntry(_GUID const *,unsigned short const *);
long UAFireEvent(_GUID const *,tagUAEVENT,unsigned short const *,unsigned long);
long UASetEntry(_GUID const *,unsigned short const *,tagUEMINFO *);
long UAUpdateLoggerState(unsigned int);
long UnregisterInvalidLockScreenApplications();
long UnregisterWpnApplication(unsigned short const *);
long UpdateAppUrlUserChoices(HKEY__ *,unsigned short const *);
long UpdateToastTemplateWithData(Windows::Data::Xml::Dom::IXmlDocument *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned long);
long WICCreateCachedOrientedBitmapSource(IWICImagingFactory *,IWICBitmapSource *,IWICMetadataQueryReader *,IWICBitmapSource * *);
long WICCreateOrientedBitmapSource(IWICImagingFactory *,IWICBitmapSource *,IWICMetadataQueryReader *,IWICBitmapSource * *);
long WICGetTransformOptionFromMetadata(IWICMetadataQueryReader *,WICBitmapTransformOptions *);
long WICOrientateFrame(IWICImagingFactory *,IWICBitmapDecoder *,IWICBitmapFrameDecode *,bool,IWICBitmapSource * *);
long WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Internal::StartupTaskInternal *> *>,Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Internal::StartupTaskInternal *> *> >(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Internal::StartupTaskInternal *> *> *,tagCOWAIT_FLAGS,void *);
long WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount *> *>,Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount *> *> >(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount *> *> *,tagCOWAIT_FLAGS,void *);
long WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::Security::Authentication::Web::GetDefaultSignInAccountResult *>,Windows::Foundation::IAsyncOperation<Windows::Internal::Security::Authentication::Web::GetDefaultSignInAccountResult *> >(Windows::Foundation::IAsyncOperation<Windows::Internal::Security::Authentication::Web::GetDefaultSignInAccountResult *> *,tagCOWAIT_FLAGS,void *);
long WaitForSCMToInitialize();
long WinRTIconLoadData_CreateInstance(unsigned short const *,IImmersiveApplication *,unsigned int,_GUID const &,void * *);
long WriteHIconToFile(HICON__ *,unsigned short const *,_GUID const &);
long WriteStringToRegistry(HKEY__ *,unsigned short const *,unsigned short const *);
long _ActivateApplicationForLaunchHelper(IApplicationActivationManagerPriv *,unsigned short const *,unsigned short const *,unsigned short const *,ACTIVATEOPTIONSINTERNAL,ISplashScreen *,HMONITOR__ *,unsigned long *);
long _ActivateApplicationForLaunchHelperWithWindowFactory(IApplicationActivationManagerPriv *,unsigned short const *,unsigned short const *,unsigned short const *,ACTIVATEOPTIONSINTERNAL,HMONITOR__ *,Windows::UI::Core::ICoreWindowFactory *,unsigned long *);
long _AllocArray<unsigned short,CTCoAllocPolicy>(void *,unsigned long,unsigned __int64,unsigned short * *);
long _AllocStringWorker<CTCoAllocPolicy>(void *,unsigned long,unsigned short const *,unsigned __int64,unsigned __int64,unsigned short * *);
long _AndLoadFromFile(IUnknown *,unsigned short const *,unsigned long,_GUID const &,void * *);
long _CacheShortcutDisplayName(IShellItem *,_ITEMIDLIST_ABSOLUTE *,_ITEMIDLIST_ABSOLUTE * *);
long _CanRegisterTypeWithLockScreen(LOCK_SCREEN_APPLICATION_CAPABILITIES,unsigned int,Microsoft::WRL::ComPtr<ILockScreenApplicationManager> const &,bool *,unsigned int *);
long _CheckForOpenSpot(LOCK_SCREEN_APPLICATION_CAPABILITIES,Microsoft::WRL::ComPtr<ILockScreenApplicationManager> const &,unsigned int,bool *,unsigned int *);
long _CreatePropertyBagBindCtx<unsigned long>(IBindCtx *,unsigned short const *,unsigned long,IBindCtx * *);
long _CreatePropertyBagBindCtx<unsigned short const *>(IBindCtx *,unsigned short const *,unsigned short const *,IBindCtx * *);
long _CreateSharedHandleACL(int,unsigned long,void * *);
long _CreateSharedHandleACLWorker(unsigned short const *,unsigned long,void * *);
long _DoesBitmapHaveAlpha(HBITMAP__ *,bool *);
long _GetAssociationPath(unsigned short const *,bool,unsigned short *,unsigned int);
long _GetDefaultApps(Microsoft::WRL::ComPtr<IObjectCollection> &);
long _GetFirstLogonAppList(IEnumString * *);
long _GetPinnabilityInfoForAppPidl(_ITEMIDLIST_ABSOLUTE const *,int *,int *);
long _LaunchCloudExperienceHostModal(IHostAppManager *,unsigned short const *,unsigned long);
long _LaunchCloudExperienceHostModalForCredentialReset(IHostAppManager *,unsigned short const *,unsigned long,bool);
long _MergeAppWithLockScreen(unsigned short const *,Microsoft::WRL::ComPtr<ILockScreenApplicationManager> const &,Microsoft::WRL::ComPtr<INamedPropertyStore> const &);
long _RegisterAppInLockScreenSlot(LOCK_SCREEN_APPLICATION_CAPABILITIES,unsigned short const *,Microsoft::WRL::ComPtr<ILockScreenApplicationManager> const &,unsigned int);
long _SaveImageWithWIC(IWICImagingFactory *,IWICBitmapSource *,_GUID const &,unsigned short const *,IStream *);
long _ScaleBitmap(HBITMAP__ *,unsigned int,HBITMAP__ * *);
long _SetAppEntry(IApplicationResolver *,_ITEMIDLIST_ABSOLUTE const *,bool,tagUEMINFO *);
long _SetShortcutEntry(_ITEMIDLIST_ABSOLUTE const *,tagUEMINFO *);
long _ShellExecuteRegAppWithJobObject(unsigned short const *,RRA_FLAGS,IUnknown *);
long _ShellExecuteRegAppWorker(unsigned short const *,RRA_FLAGS,IUnknown *);
long _ThunkICIX(_CMINVOKECOMMANDINFOEX *,void * *);
long _UpdateEntryIfUnused(_GUID const *,unsigned short const *,tagUEMINFO *);
long _UpdateImmersiveColorPreferenceForLogonUI(IMMERSIVE_COLOR_PREFERENCE const *);
long _VerifyId(unsigned short const *,unsigned int,bool);
long __CxxUnhandledExceptionFilter(_EXCEPTION_POINTERS *);
long g_fWinHomeListening;
long volatile g_fTabletButtonThreadRunning;
long wil_details_NtQueryWnfStateData(__WIL__WNF_STATE_NAME const *,__WIL__WNF_TYPE_ID const *,void const *,unsigned long *,void *,unsigned long *);
long wil_details_NtUpdateWnfStateData(__WIL__WNF_STATE_NAME const *,void const *,unsigned long,__WIL__WNF_TYPE_ID const *,void const *,unsigned long,unsigned long);
long wil_details_RtlSubscribeWnfStateChangeNotification(__WIL__WNF_USER_SUBSCRIPTION * *,__WIL__WNF_STATE_NAME,unsigned long,long (*)(__WIL__WNF_STATE_NAME,unsigned long,__WIL__WNF_TYPE_ID *,void *,void const *,unsigned long),void *,__WIL__WNF_TYPE_ID *,unsigned long,unsigned long);
long wil_details_StagingConfig_FireNotification(wil_details_StagingConfig *,unsigned int,unsigned short);
long wil_details_StagingConfig_Load(wil_details_StagingConfig *,wil_FeatureStore,unsigned __int64,void *,int);
unsigned char GetTaskbarOpacity();
unsigned int (* g_wil_details_apiGetFeatureVariant)(unsigned int,FEATURE_CHANGE_TIME,unsigned int *,int *);
unsigned int (* g_wil_details_internalGetFeatureVariant)(unsigned int,FEATURE_CHANGE_TIME,unsigned int *,int *);
unsigned int GetMenuIndexForCanonicalVerb(HMENU__ *,IContextMenu *,unsigned int,unsigned short const *);
unsigned int SHGetImageListFlags(HWND__ *);
unsigned long AicProcessRunOnce(_PROCESS_INFORMATION *);
unsigned long AicpCreateBindingHandle(unsigned short *,int,void * *);
unsigned long AicpGetCurrentDesktop(unsigned short const *,unsigned short * *);
unsigned long AicpStartAIS(unsigned long);
unsigned long AppReadinessTaskWait(unsigned short const *,unsigned long);
unsigned long ApplyColorHSBThreshold(unsigned long,int,int);
unsigned long BlendColorAlpha(unsigned long,unsigned char);
unsigned long BlendColors(unsigned long,unsigned long,int,int);
unsigned long GetRegDWORD(HKEY__ *,unsigned short const *,unsigned short const *,unsigned long);
unsigned long GetTaskbarColor();
unsigned long GetTaskbarGlomLevelFlags(unsigned short const *);
unsigned long GetTaskbarModeFlags();
unsigned long GetTrayFlyoutBackgroundColor();
unsigned long GetTrayIconBackgroundColor(bool,bool);
unsigned long HardErrorBalloonThreadProc(void *);
unsigned long RestoreWndPosThreadProc(void *);
unsigned long RunStartupAppsThreadProc(void *);
unsigned long SHProcessMessagesUntilEvent(HWND__ *,void *,unsigned long);
unsigned long SHProcessMessagesUntilEventsEx(HWND__ *,void * *,unsigned long,unsigned long,unsigned long,unsigned long);
unsigned long SHSetProtectedValue(HKEY__ *,unsigned short const *,unsigned short const *,unsigned long,void const *,unsigned long);
unsigned long _EjectThreadProc(void *);
unsigned long _GetTermsrCompatFlagsEx(unsigned short *,unsigned long *,_TERMSRV_COMPATIBILITY_CLASS);
unsigned long _JobObjectWaitingThreadProc(void *);
unsigned long _RegSetKeyValue(HKEY__ *,unsigned short const *,unsigned short const *,unsigned long,void const *,unsigned long);
unsigned short _MapGlobalHotkeyToHotkey(unsigned short);
unsigned short _MapHotkeyToGlobalHotkey(unsigned short);
unsigned short const * EncodeStringHelper(unsigned short const *,unsigned short *,unsigned int);
unsigned short const * RemovePathFromCommand(unsigned short const *);
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Activation_LaunchActivatedEventArgs;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Core_CoreApplication;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Internal_StartupTaskActivator;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Internal_StartupTaskInternal;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Resources_Core_ResourceManager;
unsigned short const * const RuntimeClass_Windows_Foundation_Collections_ValueSet;
unsigned short const * const RuntimeClass_Windows_Foundation_PropertyValue;
unsigned short const * const RuntimeClass_Windows_Foundation_Uri;
unsigned short const * const RuntimeClass_Windows_Globalization_NumberFormatting_NumeralSystemTranslator;
unsigned short const * const RuntimeClass_Windows_Internal_AssignedAccess_AssignedAccessController;
unsigned short const * const RuntimeClass_Windows_Internal_AssignedAccess_AssignedAccessManager;
unsigned short const * const RuntimeClass_Windows_Internal_Notifications_WpnClient;
unsigned short const * const RuntimeClass_Windows_Internal_Security_Authentication_Web_TokenBrokerInternal;
unsigned short const * const RuntimeClass_Windows_Internal_Shell_Holographic_ContextIdentifier;
unsigned short const * const RuntimeClass_Windows_Internal_Shell_JumpView_JumpViewExperienceWrapper;
unsigned short const * const RuntimeClass_Windows_Internal_Shell_JumpView_JumpViewParams;
unsigned short const * const RuntimeClass_Windows_Management_Core_ApplicationDataManager;
unsigned short const * const RuntimeClass_Windows_Management_Provisioning_PackageManager;
unsigned short const * const RuntimeClass_Windows_Security_Credentials_WebAccount;
unsigned short const * const RuntimeClass_Windows_Security_Credentials_WebAccountProvider;
unsigned short const * const RuntimeClass_Windows_Services_TargetedContent_Internal_TargetedContentSubscriptionInternal;
unsigned short const * const RuntimeClass_Windows_Services_TargetedContent_TargetedContentContainer;
unsigned short const * const RuntimeClass_Windows_Services_TargetedContent_TargetedContentSubscription;
unsigned short const * const RuntimeClass_Windows_System_Internal_UserManager;
unsigned short const * const RuntimeClass_Windows_System_Profile_EducationSettings;
unsigned short const * const RuntimeClass_Windows_UI_Core_ImmersiveCoreWindowFactory;
unsigned short const * const RuntimeClass_Windows_UI_Notifications_ToastNotification;
unsigned short const * const RuntimeClass_Windows_UI_Notifications_ToastNotificationManager;
unsigned short const * const c_retailDemoKeyOobeWrite;
unsigned short const * const c_retailDemoValueEnabled;
unsigned short const * const c_szActionServiceDelimiter;
unsigned short const * const c_szPCSettingsAppID;
unsigned short g_SecondaryTaskbarAtom;
unsigned short g_atomCabinetClass;
unsigned short g_cfAsyncFlag_Storage;
unsigned short g_cfEnterpriseId_Storage;
unsigned short g_cfHIDA_Storage;
unsigned short g_cfURL_Storage;
void (* g_fnLoggingCallback)(unsigned short *,FileSyncPolicyLogLevel);
void (* g_wil_details_apiRecordFeatureError)(unsigned int,FEATURE_ERROR const *);
void (* g_wil_details_apiRecordFeatureUsage)(unsigned int,unsigned int,unsigned int,char const *);
void (* g_wil_details_apiSubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
void (* g_wil_details_apiUnsubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
void (* g_wil_details_internalRecordFeatureError)(unsigned int,FEATURE_ERROR const *);
void (* g_wil_details_internalRecordFeatureUsage)(unsigned int,unsigned int,unsigned int,char const *);
void (* g_wil_details_internalSubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
void (* g_wil_details_internalUnsubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
void (* g_wil_details_pfnFeatureLoggingHook)(unsigned int,FEATURE_LOGGED_TRAITS const *,FEATURE_ERROR const *,int,wil_ReportingKind const *,wil_VariantReportingKind const *,unsigned char,unsigned __int64);
void (* g_wil_details_recordFeatureUsage)(unsigned int,wil_details_FeaturePropertyCache *,wil_details_RecordUsageResult *);
void * CreateDesktopAndTray();
void * DataObj_GetDataOfType(IDataObject *,unsigned int,tagSTGMEDIUM *);
void * DeferWindowPosUsingRECT(void *,HWND__ *,HWND__ *,tagRECT *,unsigned int);
void * MemoryAlloc(unsigned __int64);
void * _SetJobCompletionPort(void *);
void * operator new(unsigned __int64);
void * operator new(unsigned __int64,std::nothrow_t const &);
void * operator new[](unsigned __int64,std::nothrow_t const &);
void AddControlPanelDests();
void AddExplorerDests();
void AddOEMDests();
void BandSite_AccountAllBandsForTaskbarSizingBar(ITrayComponentHost *,IBandSite *,int);
void BandSite_AccountBandForTaskbarSizingBar(ITrayComponentHost *,IBandSite *,unsigned long,int);
void BandSite_FixUpComposition(ITrayComponentHost *,IBandSite *);
void BandSite_FixUpCompositionForBand(IUnknown *);
void BandSite_HandleDelayInitStuff(IUnknown *);
void BandSite_HandleMenuCommand(IUnknown *,unsigned int);
void BandSite_Initialize(ITrayComponentHost *,IBandSite *);
void BandSite_Load(ITrayComponentHost *);
void BandSite_SetMode(IUnknown *,unsigned long);
void BandSite_Update(IUnknown *,unsigned long *);
void BlendRectARGB(HDC__ *,tagRECT const *,unsigned char,unsigned long,HBITMAP__ *);
void ChangeUIfontsToNewDPI();
void CheckDefaultUIFonts();
void CheckForServerAdminUI();
void CheckHighContrast();
void CheckHighContrastAfterDesktopSwitch(HWINEVENTHOOK__ *,unsigned long,HWND__ *,long,long,unsigned long,unsigned long);
void ClassFactory_Start();
void ClearMRU();
void ComputeSystemDPI(int *,int *);
void CreateHklmLanguageProfileCache();
void CreateInitialMFU(bool);
void CreateLanguageProfileIfMissing();
void CreateShellDirectories();
void DADHelper_DragEnter(HWND__ *,_POINTL,IDataObject *);
void DADHelper_DragMove(HWND__ *,_POINTL);
void DisableBackup();
void DrawBlankButton(HDC__ *,tagRECT *,unsigned long);
void DrawChevron(HDC__ *,tagRECT const *,unsigned long);
void DrawPlateCentered(HWND__ *,HDC__ *,tagRECT,tagSIZE,unsigned long);
void EndLogging(_TRACE_INFO const *,unsigned short const *);
void EnsureTabletButtonThreadRunningIfNeeded();
void EnumFolder(_ITEMIDLIST_ABSOLUTE const *,unsigned long,IServiceProvider *,int (*)(IShellFolder *,_ITEMID_CHILD *,IServiceProvider *,unsigned int,int *),unsigned int);
void FillRectARGB(HDC__ *,tagRECT const *,unsigned char,unsigned long);
void FillRectClr(HDC__ *,tagRECT const *,unsigned long);
void FillRectWithOutlineARGB(HDC__ *,tagRECT const *,unsigned long,unsigned long,bool);
void FillRectWithOutlineARGB(HDC__ *,tagRECT const *,unsigned long,unsigned long,unsigned long,bool);
void Fire_Explorer_Startup_Run6432_Failed(unsigned short const *);
void FspLogHelper(FileSyncPolicyLogLevel,unsigned short *,unsigned short *,...);
void GetFlashInAnimation(ITaskListAnimation *,int,int *,bool *);
void GetFlashOpacity(ITaskListAnimation *,int,bool,unsigned char *);
void GetIconSize(ICONSIZE,tagSIZE *);
void GetIndeterminateProgress(ITaskListAnimation *,int,int *,unsigned char *);
void GetSystemThemeStyle(COLORTHEME *,bool *);
void GetTaskBandTheme(int,int,ITrayComponentHost *,unsigned short const * *);
void GiveDesktopFocus();
void HandleAssociationAppCommand(unsigned short const *,bool,bool *,unsigned short *,unsigned long,IShellItem2 * *);
void HandleFirstTime();
void HashTable_CoTaskMemFreeCB<unsigned short>(unsigned short *);
void MemoryFree(void *);
void PinAuxiliaryTaskbarItems();
void PinDefaultTaskbarItems();
void PinMfuItems(unsigned int,IPinnedList2 *,unsigned int *);
void PrintTextOnIcon(HDC__ *,unsigned short *,unsigned long,unsigned long,int,int,HFONT__ *,int,int);
void QSort<int>(int *,unsigned int,int);
void RedrawDesktop(tagRECT *);
void ReleaseStgMediumHGLOBAL(void const *,tagSTGMEDIUM *);
void RemoveDescriptionFromDataObject(IDataObject *,unsigned int);
void ReplacePinnedWin8StoreWithWin10();
void RunAllLogonTasks();
void RunSystemMonitor();
void SHCoFreeArray<unsigned short>(unsigned short * *,unsigned __int64);
void SHComputeDPI(HWND__ *,int *,int *);
void SHTraceSQMCreateStringStreamEntry(_SHSQM_STREAM_ENTRY *,unsigned short const *);
void SHTraceSQMStream(_EVENT_DESCRIPTOR const *,unsigned long,_SHSQM_STREAM_ENTRY *,unsigned long);
void SafeRelease<CTaskButtonAccessible>(CTaskButtonAccessible * *);
void SafeRelease<IApplicationUsageTracker>(IApplicationUsageTracker * *);
void SafeRelease<IContextMenu>(IContextMenu * *);
void SafeRelease<IDataObject>(IDataObject * *);
void SafeRelease<IDropTarget>(IDropTarget * *);
void SafeRelease<IShellItem2>(IShellItem2 * *);
void SafeRelease<IShellItem>(IShellItem * *);
void SafeRelease<IShellTaskScheduler>(IShellTaskScheduler * *);
void SafeRelease<ITaskBtnGroup>(ITaskBtnGroup * *);
void SafeRelease<ITaskGroup>(ITaskGroup * *);
void SafeRelease<ITaskItem>(ITaskItem * *);
void SafeRelease<ITaskListManager>(ITaskListManager * *);
void SafeRelease<ITaskListUI>(ITaskListUI * *);
void SafeRelease<ITaskListWndSite>(ITaskListWndSite * *);
void SafeRelease<ITaskThumbnail>(ITaskThumbnail * *);
void SafeRelease<IUnknown>(IUnknown * *);
void SetTrayForeground();
void SetWindowStyle(HWND__ *,unsigned long,int);
void TerminateShellApplications();
void TranslateFlashInToFlashOut(ITaskListAnimation *,int,int *);
void TranslateFlashOutToFlashIn(ITaskListAnimation *,int,int *);
void TryFallbackAppKeyCommands(int,bool,bool *,unsigned short *,unsigned __int64,unsigned short *,unsigned long,IShellItem2 * *);
void TryPinPidl(IPinnedList2 *,_ITEMIDLIST_ABSOLUTE const *,unsigned int *);
void UpdateWindowAccentProperties(HWND__ *);
void UpgradeTaskbandPinnedItems();
void _AutoRunTaskMan();
void _DestroySavedWindowPositions(WINDOWPOSITIONS *);
void _InitClipboardFormats();
void _InvokeVerbOnKnownFolder(HWND__ *,_GUID const &,unsigned short const *);
void _InvokeVerbOnParsingName(HWND__ *,unsigned short const *,unsigned short const *);
void _MakeBetterUniqueName(unsigned short *,int);
void _ProcessStartupGroup(IServiceProvider *);
void _RegisterIconicWndClass();
void _RunFileDlg(HWND__ *,unsigned int,_ITEMIDLIST_ABSOLUTE const *,unsigned int,unsigned int,unsigned long);
void _SHPrettyMenu(HMENU__ *);
void _TlgWriteActivityAutoStop<0,5>(_TlgProvider_t const *,_GUID const *);
void _TlgWriteActivityAutoStop<140737488355328,5>(_TlgProvider_t const *,_GUID const *);
void _TlgWriteActivityAutoStop<35184372088832,5>(_TlgProvider_t const *,_GUID const *);
void _TlgWriteActivityAutoStop<70368744177664,5>(_TlgProvider_t const *,_GUID const *);
void __ArrayUnwind(void *,unsigned __int64,int,void (*)(void *));
void operator delete(void *);
void operator delete(void *,std::nothrow_t const &);
void operator delete(void *,void *);
void wil_details_FeaturePropertyCache_ReportUsageToService(wil_details_FeaturePropertyCache *,unsigned int,FEATURE_LOGGED_TRAITS const *,int,wil_ReportingKind,unsigned __int64);
void wil_details_FeaturePropertyCache_ReportVariantUsageToService(wil_details_FeatureVariantPropertyCache *,unsigned int,FEATURE_LOGGED_TRAITS const *,int,unsigned char,wil_VariantReportingKind,unsigned __int64);
wil_StagingConfig * g_wil_details_stagingConfigForMachine;
wil_StagingConfig * g_wil_details_stagingConfigForUser;
wil_details_FeatureTestState * g_wil_details_testStates;
wil_details_RecordUsageResult wil_details_RecordUsageInPropertyCache(wil_details_FeaturePropertyCache *,wil_details_ServiceReportingKind,unsigned int,unsigned int);
