class AcceleratorBehavior
{
protected:
	static _GUID const * * s_rgpIID;
public:
	static long Create(IDuiBehavior * *);
	virtual long GetCallbackFilters(DuiBehaviorFilters::Flags *);
	virtual long Init(DirectUI::Value *);
	virtual long OnInput(DirectUI::Element *,DirectUI::InputEvent *);
};

class AnimationTrap
{
	long _CheckNotifyComplete(DirectUI::Element *,DirectUI::Event *);
	long _CheckNotifyImplicit(DirectUI::Element *,DirectUI::Event *);
	long _CheckNotifyStart(DirectUI::Element *,DirectUI::Event *);
	long _VerifyManualStoryboard(DirectUI::Event *);
protected:
	static _GUID const * * s_rgpIID;
public:
	virtual long GetCallbackFilters(DuiBehaviorFilters::Flags *);
	virtual long Init(DirectUI::Value *);
	virtual long OnAttach(DirectUI::Element *);
	virtual long OnDetach(DirectUI::Element *);
	virtual long OnDisplayNodeCallback(DirectUI::Element *,EventMsg *);
	virtual long OnEvent(DirectUI::Element *,DirectUI::Event *);
};

class BehaviorEngineHelper
{
protected:
	long EnsureObject();
public:
	long CreateBehavior(unsigned short const *,unsigned short const *,DirectUI::Value *,IDuiBehavior * *);
	long RegisterBehaviorFactory(unsigned short const *,IDuiBehaviorFactory *);
	~BehaviorEngineHelper();
};

class CAutoWnfNotification
{
	static long s_WnfCallback(_WNF_STATE_NAME,unsigned long,_WNF_TYPE_ID *,void *,void const *,unsigned long);
public:
	long Subscribe(_WNF_STATE_NAME,IAutoWnfNotificationCallback *);
	void Unsubscribe();
};

struct CComBSTR
{
	long Append(unsigned short const *,int);
};

struct CComPtr<DirectUI::RichTextCache>
{
	~CComPtr<DirectUI::RichTextCache>();
};

class CComPtr<IDCompositionDevice>
{
	static IUnknown * AtlComPtrAssign(IUnknown * *,IUnknown *);
public:
	~CComPtr<IDCompositionDevice>();
};

struct CComPtr<IDCompositionVisual>
{
	~CComPtr<IDCompositionVisual>();
};

class CComPtr<IDWriteBitmapRenderTarget>
{
	static IUnknown * AtlComPtrAssign(IUnknown * *,IUnknown *);
public:
	~CComPtr<IDWriteBitmapRenderTarget>();
};

struct CComPtr<IDWriteRenderingParams>
{
	long CopyTo(IDWriteRenderingParams * *);
	~CComPtr<IDWriteRenderingParams>();
};

struct CComPtr<IRawElementProviderSimple>
{
	~CComPtr<IRawElementProviderSimple>();
};

struct CComPtr<ITextSelection>
{
	~CComPtr<ITextSelection>();
};

struct CComPtr<ITextServices>
{
	~CComPtr<ITextServices>();
};

struct CComPtr<IUnknown>
{
	~CComPtr<IUnknown>();
};

struct CComPtr<IXmlReader>
{
	~CComPtr<IXmlReader>();
};

class CElementWithProxy<DirectUI::Element>
{
protected:
	long _EnsureInitializedProxy();
public:
	virtual ~CElementWithProxy<DirectUI::Element>();
};

struct CNotificationData
{
	static void s_UnpackKeyboardVisibility(void const *,tagRECT *,bool *,bool *,bool *);
};

struct CPerformanceTimer
{
	long double GetElapsedTime();
};

struct CSafeElementListenerCB
{
	virtual bool OnListenedPropertyChanging(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnListenedEvent(DirectUI::Element *,DirectUI::Event *);
	virtual void OnListenedInput(DirectUI::Element *,DirectUI::InputEvent *);
	virtual void OnListenedPropertyChanged(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnListenerAttach(DirectUI::Element *);
	virtual void OnListenerDetach(DirectUI::Element *);
};

class CSafeElementListenerPtr<DirectUI::Element>
{
protected:
	virtual bool OnListenedPropertyChanging(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnListenedEvent(DirectUI::Element *,DirectUI::Event *);
	virtual void OnListenedInput(DirectUI::Element *,DirectUI::InputEvent *);
	virtual void OnListenedPropertyChanged(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnListenerAttach(DirectUI::Element *);
	virtual void OnListenerDetach(DirectUI::Element *);
public:
	long AssignListener(DirectUI::Element *,CSafeElementListenerCB *);
	void ReleaseListener();
};

class CSafeElementListenerPtr<DirectUI::RichText>
{
protected:
	virtual bool OnListenedPropertyChanging(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnListenedEvent(DirectUI::Element *,DirectUI::Event *);
	virtual void OnListenedInput(DirectUI::Element *,DirectUI::InputEvent *);
	virtual void OnListenedPropertyChanged(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnListenerAttach(DirectUI::Element *);
	virtual void OnListenerDetach(DirectUI::Element *);
public:
	long AssignListener(DirectUI::RichText *,CSafeElementListenerCB *);
	void ReleaseListener();
};

class CSafeElementListenerPtr<DirectUI::TouchCarouselScrollBar>
{
protected:
	virtual bool OnListenedPropertyChanging(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnListenedEvent(DirectUI::Element *,DirectUI::Event *);
	virtual void OnListenedInput(DirectUI::Element *,DirectUI::InputEvent *);
	virtual void OnListenedPropertyChanged(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnListenerAttach(DirectUI::Element *);
	virtual void OnListenerDetach(DirectUI::Element *);
public:
	long AssignListener(DirectUI::TouchCarouselScrollBar *,CSafeElementListenerCB *);
	void ReleaseListener();
};

class CSafeElementListenerPtr<DirectUI::TouchHWNDElement>
{
protected:
	virtual bool OnListenedPropertyChanging(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnListenedEvent(DirectUI::Element *,DirectUI::Event *);
	virtual void OnListenedInput(DirectUI::Element *,DirectUI::InputEvent *);
	virtual void OnListenedPropertyChanged(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnListenerAttach(DirectUI::Element *);
	virtual void OnListenerDetach(DirectUI::Element *);
public:
	long AssignListener(DirectUI::TouchHWNDElement *,CSafeElementListenerCB *);
	void ReleaseListener();
};

class CSafeElementListenerPtr<DirectUI::TouchScrollViewer>
{
protected:
	virtual bool OnListenedPropertyChanging(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnListenedEvent(DirectUI::Element *,DirectUI::Event *);
	virtual void OnListenedInput(DirectUI::Element *,DirectUI::InputEvent *);
	virtual void OnListenedPropertyChanged(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnListenerAttach(DirectUI::Element *);
	virtual void OnListenerDetach(DirectUI::Element *);
public:
	long AssignListener(DirectUI::TouchScrollViewer *,CSafeElementListenerCB *);
	void ReleaseListener();
};

class CSafeElementListenerPtr<DirectUI::TouchTooltipContainer>
{
protected:
	virtual bool OnListenedPropertyChanging(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnListenedEvent(DirectUI::Element *,DirectUI::Event *);
	virtual void OnListenedInput(DirectUI::Element *,DirectUI::InputEvent *);
	virtual void OnListenedPropertyChanged(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnListenerAttach(DirectUI::Element *);
	virtual void OnListenerDetach(DirectUI::Element *);
public:
	long AssignListener(DirectUI::TouchTooltipContainer *,CSafeElementListenerCB *);
	void ReleaseListener();
};

class CSafeElementListenerPtr<DirectUI::Viewer>
{
protected:
	virtual bool OnListenedPropertyChanging(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnListenedEvent(DirectUI::Element *,DirectUI::Event *);
	virtual void OnListenedInput(DirectUI::Element *,DirectUI::InputEvent *);
	virtual void OnListenedPropertyChanged(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnListenerAttach(DirectUI::Element *);
	virtual void OnListenerDetach(DirectUI::Element *);
public:
	long AssignListener(DirectUI::Viewer *,CSafeElementListenerCB *);
	void ReleaseListener();
};

class CSafeElementListenerPtr<DirectUI::WrappingList>
{
protected:
	virtual bool OnListenedPropertyChanging(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnListenedEvent(DirectUI::Element *,DirectUI::Event *);
	virtual void OnListenedInput(DirectUI::Element *,DirectUI::InputEvent *);
	virtual void OnListenedPropertyChanged(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnListenerAttach(DirectUI::Element *);
	virtual void OnListenerDetach(DirectUI::Element *);
public:
	long AssignListener(DirectUI::WrappingList *,CSafeElementListenerCB *);
	void ReleaseListener();
};

class CSafeElementProxy
{
	long _InitDUserContext(HDCONTEXT__ * *);
protected:
	CSafeElementProxy();
	long Initialize(DirectUI::Element *);
	virtual ~CSafeElementProxy();
public:
	static long CreateInstance(DirectUI::Element *,CSafeElementProxy * *);
	static long s_SyncCallback(HGADGET__ *,void *,EventMsg *);
	unsigned long Release();
	void Detach();
};

struct CSafeElementPtr<DirectUI::Element>
{
	void Unassign();
};

struct CSafeElementPtr<DirectUI::TouchSelect>
{
	void Unassign();
};

class CSafeElementPtrBase<DirectUI::Element>
{
protected:
	long _Assign(DirectUI::Element *);
	virtual bool OnListenedPropertyChanging(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnListenedEvent(DirectUI::Element *,DirectUI::Event *);
	virtual void OnListenedInput(DirectUI::Element *,DirectUI::InputEvent *);
	virtual void OnListenedPropertyChanged(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnListenerAttach(DirectUI::Element *);
	virtual void OnListenerDetach(DirectUI::Element *);
};

class CSafeElementPtrBase<DirectUI::TouchSelect>
{
protected:
	virtual bool OnListenedPropertyChanging(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnListenedEvent(DirectUI::Element *,DirectUI::Event *);
	virtual void OnListenedInput(DirectUI::Element *,DirectUI::InputEvent *);
	virtual void OnListenedPropertyChanged(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnListenerAttach(DirectUI::Element *);
	virtual void OnListenerDetach(DirectUI::Element *);
};

class CScaledResourceFactory
{
	long _EnsureFactory();
	long _LoadAndScaleWIC(HBITMAP__ * *);
	long _LoadUsingUSER(unsigned int *,_GUID const &,void * *);
	long _LoadUsingWIC(unsigned int *,_GUID const &,void * *);
	long _ScaleSource(IWICBitmapSource *,int,int,HBITMAP__ * *);
	long _SelectFrameByDPI(IWICBitmapDecoder *,IWICBitmapFrameDecode * *,unsigned int *);
public:
	long LoadAndScale(HBITMAP__ * *);
	long SetResource(HINSTANCE__ *,unsigned short const *);
	static long s_CreateInstance(IWICImagingFactory *,CScaledResourceFactory * *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CSimpleArray<SWF::Shape::LineSegment>
{
	int Add(SWF::Shape::LineSegment &);
};

struct CTouchKeyboardNotificationBaseImpl
{
	virtual void OnNotificationEvent(_WNF_STATE_NAME,void const *,unsigned long);
	virtual ~CTouchKeyboardNotificationBaseImpl();
};

struct CTouchKeyboardNotificationImpl
{
	virtual void OnNotificationEvent(_WNF_STATE_NAME,void const *,unsigned long);
};

struct CTouchKeyboardNotifications
{
	long RefreshKeyboardState();
	long SubscribeToNotifications(ITouchKeyboardNotificationCallback *,TouchKeyboardNotificationsDesired);
};

struct CValuePtr
{
	void AttachAndAddRef(DirectUI::Value *);
	void Release();
};

namespace DirectUI
{
	class AccessibleButton
	{
		struct ACCESSIBLEROLE
		{
			ACCESSIBLEROLE & operator=(ACCESSIBLEROLE const &);
		};

		static AccessibleButton::ACCESSIBLEROLE const * FindAccessibleRole(int);
		static AccessibleButton::ACCESSIBLEROLE const * const c_rgar;
		static IClassInfo * s_pClassInfo;
	public:
		AccessibleButton & operator=(AccessibleButton const &);
		AccessibleButton();
		AccessibleButton(AccessibleButton const &);
		long Initialize(Element *,unsigned long *);
		static IClassInfo * GetClassInfoPtr();
		static long Create(Element *,unsigned long *,Element * *);
		static long Register();
		static void SetClassInfoPtr(IClassInfo *);
		virtual IClassInfo * GetClassInfoW();
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
		virtual ~AccessibleButton();
		void Recalc();
	};

	class AdaptorElement
	{
		static IClassInfo * s_pClassInfo;
	public:
		virtual IClassInfo * GetClassInfoW();
		virtual unsigned int MessageCallback(tagGMSG *);
	};

	class AnimationStrip
	{
		long LoadCommonControlExports();
		long Start();
		static IClassInfo * s_pClassInfo;
		void Stop();
		void UnloadCommonControlExports();
	protected:
		long LoadImagesIntoAnimationStrip();
		static void RawActionProc(GMA_ACTIONINFO *);
		virtual void OnDestroy();
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
		virtual void Paint(HDC__ *,tagRECT const *,tagRECT const *,tagRECT *,tagRECT *);
		void AdvanceFrame();
		void OnAction(GMA_ACTIONINFO *);
	public:
		AnimationStrip & operator=(AnimationStrip const &);
		AnimationStrip();
		AnimationStrip(AnimationStrip const &);
		bool GetPlay();
		int GetFrameDuration();
		int GetFrameIndex();
		int GetFrameWidth();
		long Initialize(unsigned int,Element *,unsigned long *);
		long SetFrameDuration(int);
		long SetFrameIndex(int);
		long SetFrameWidth(int);
		long SetPlay(bool);
		static IClassInfo * GetClassInfoPtr();
		static PropertyInfo const * FrameDurationProp();
		static PropertyInfo const * FrameIndexProp();
		static PropertyInfo const * FrameWidthProp();
		static PropertyInfo const * PlayProp();
		static long Create(Element *,unsigned long *,Element * *);
		static long Register();
		static void SetClassInfoPtr(IClassInfo *);
		virtual IClassInfo * GetClassInfoW();
		virtual ~AnimationStrip();
	};

	class AutoButton
	{
		static IClassInfo * s_pClassInfo;
	public:
		AutoButton & operator=(AutoButton const &);
		AutoButton();
		AutoButton(AutoButton const &);
		long Initialize(Element *,unsigned long *);
		static IClassInfo * GetClassInfoPtr();
		static UID Toggle();
		static long Create(Element *,unsigned long *,Element * *);
		static long Register();
		static void SetClassInfoPtr(IClassInfo *);
		virtual IClassInfo * GetClassInfoW();
		virtual void OnEvent(Event *);
		virtual ~AutoButton();
	};

	struct AutoClipRect
	{
		AutoClipRect(HDC__ *,tagRECT const *,tagRECT const *);
		~AutoClipRect();
	};

	struct AutoDefer
	{
		void EndDefer();
	};

	struct AutoLock
	{
		AutoLock & operator=(AutoLock const &);
		AutoLock(_RTL_CRITICAL_SECTION *);
		~AutoLock();
	};

	struct AutoReleaseArray<IRawElementProviderSimple *>
	{
		~AutoReleaseArray<IRawElementProviderSimple *>();
	};

	struct AutoReleasePointer<ElementProvider>
	{
		~AutoReleasePointer<ElementProvider>();
	};

	struct AutoReleasePointer<IAccessible>
	{
		~AutoReleasePointer<IAccessible>();
	};

	struct AutoReleasePointer<IRawElementProviderSimple>
	{
		~AutoReleasePointer<IRawElementProviderSimple>();
	};

	struct AutoReleasePointer<IUnknown>
	{
		~AutoReleasePointer<IUnknown>();
	};

	struct AutoThread
	{
		AutoThread & operator=(AutoThread const &);
		AutoThread();
		long Init();
		~AutoThread();
	};

	struct AutoVariant
	{
		AutoVariant & operator=(AutoVariant const &);
		AutoVariant();
		~AutoVariant();
	};

	struct BTreeLookup<Element *,CallstackTracker *>
	{
		CallstackTracker * * GetItem(Element *,unsigned int *);
		long SetItem(Element *,CallstackTracker *,CallstackTracker * *);
		long _Grow(unsigned int);
		static long Create(bool,BTreeLookup<Element *,CallstackTracker *> * *,unsigned int);
		void Enum(void (*)(Element *,CallstackTracker *));
	};

	struct BTreeLookup<HINSTANCE__ *,IClassInfo *>
	{
		IClassInfo * * GetItem(HINSTANCE__ *,unsigned int *);
		long _Grow(unsigned int);
		void Remove(unsigned int);
	};

	struct BTreeLookup<HINSTANCE__ *,ModuleInfo>
	{
		ModuleInfo * GetItem(HINSTANCE__ *,unsigned int *);
		long SetItem(HINSTANCE__ *,ModuleInfo,ModuleInfo *);
		long _Grow(unsigned int);
		static long Create(bool,BTreeLookup<HINSTANCE__ *,ModuleInfo> * *,unsigned int);
	};

	struct BTreeLookup<IUnknown *,ContentTiler::TILING_DATA *>
	{
		ContentTiler::TILING_DATA * * GetItem(IUnknown *,unsigned int *);
		long SetItem(IUnknown *,ContentTiler::TILING_DATA *,ContentTiler::TILING_DATA * *);
		long _Grow(unsigned int);
		static long Create(bool,BTreeLookup<IUnknown *,ContentTiler::TILING_DATA *> * *,unsigned int);
	};

	struct BTreeLookup<PropertyInfo const *,Value *>
	{
		Value * * GetItem(PropertyInfo const *,unsigned int *);
		long _Grow(unsigned int);
		void Remove(PropertyInfo const *);
	};

	struct BTreeLookup<unsigned short *,ByteCode>
	{
		ByteCode * GetItem(unsigned short *,unsigned int *);
		long SetItem(unsigned short *,ByteCode *);
		long _Grow(unsigned int);
		void Enum(void (*)(unsigned short *,ByteCode));
	};

	struct BTreeLookup<unsigned short const *,CLocalClasses>
	{
		CLocalClasses * GetItem(unsigned short const *,unsigned int *);
		long SetItem(unsigned short const *,CLocalClasses,CLocalClasses *);
		long _Grow(unsigned int);
		static long Create(bool,BTreeLookup<unsigned short const *,CLocalClasses> * *,unsigned int);
		void Enum(void (*)(unsigned short const *,CLocalClasses));
		void Remove(unsigned int);
	};

	struct BTreeLookup<unsigned short const *,IClassInfo *>
	{
		IClassInfo * * GetItem(unsigned short const *,unsigned int *);
		long SetItem(unsigned short const *,IClassInfo *,IClassInfo * *);
		long _Grow(unsigned int);
		void Enum(void (*)(unsigned short const *,IClassInfo *));
		void Remove(unsigned int);
	};

	struct BaseElementProvider<TouchSelectPopupProvider,TouchSelectPopupProxy,HWNDElementProvider>
	{
		virtual ProviderProxy * (*GetProxyCreator())(Element *);
		virtual long GetPatternProvider(int,IUnknown * *);
		virtual long Init(Element *,InvokeHelper *);
		virtual ~BaseElementProvider<TouchSelectPopupProvider,TouchSelectPopupProxy,HWNDElementProvider>();
	};

	struct BaseElementProvider<TouchSelectProvider,TouchSelectProxy,ElementProvider>
	{
		virtual ProviderProxy * (*GetProxyCreator())(Element *);
		virtual long GetPatternProvider(int,IUnknown * *);
		virtual long Init(Element *,InvokeHelper *);
		virtual ~BaseElementProvider<TouchSelectProvider,TouchSelectProxy,ElementProvider>();
	};

	class BaseElementProxy<TouchSelectPopupProxy,HWNDElementProxy>
	{
	protected:
		virtual long _GetProperty(tagVARIANT *,int);
	public:
		static TouchSelectPopupProxy * Create(Element *);
		virtual long DoMethod(int,char *);
		virtual void Init(Element *);
	};

	class BaseElementProxy<TouchSelectProxy,ElementProxy>
	{
	protected:
		virtual long _GetProperty(tagVARIANT *,int);
	public:
		static TouchSelectProxy * Create(Element *);
		virtual long DoMethod(int,char *);
		virtual void Init(Element *);
	};

	struct BaseScrollBar
	{
		BaseScrollBar & operator=(BaseScrollBar const &);
		BaseScrollBar();
		BaseScrollBar(BaseScrollBar const &);
		bool IsPinned();
		bool IsScrollable();
		bool OnPageChanging(Value *);
		bool OnPositionChanging(Value *);
		int GetPageInc();
		static UID Scroll();
		virtual void End();
		virtual void Home();
		virtual void LineDown(unsigned int);
		virtual void LineUp(unsigned int);
		virtual void PageDown(unsigned int);
		virtual void PageUp(unsigned int);
		void OnMaximumChanged(Value *);
		void OnMinimumChanged(Value *);
		void OnPageChanged(Value *);
		void OnPositionChanged(Value *);
		void SetPinned(bool);
	};

	class BaseScrollViewer
	{
		static IClassInfo * s_pClassInfo;
		void CheckScroll(BaseScrollBar *,int,int,int);
	protected:
		void FireAnimationChangeEvent(bool);
	public:
		BaseScrollViewer & operator=(BaseScrollViewer const &);
		BaseScrollViewer();
		BaseScrollViewer(BaseScrollViewer const &);
		bool GetXScrollable();
		bool GetYScrollable();
		int GetPinning();
		int GetXBarVisibility();
		int GetXOffset();
		int GetXScrollHeight();
		int GetYBarVisibility();
		int GetYOffset();
		int GetYScrollWidth();
		long Initialize(Element *,unsigned long *);
		long SetPinning(int);
		long SetXBarVisibility(int);
		long SetXOffset(int);
		long SetXScrollable(bool);
		long SetYBarVisibility(int);
		long SetYOffset(int);
		long SetYScrollable(bool);
		static IClassInfo * GetClassInfoPtr();
		static PropertyInfo const * PinningProp();
		static PropertyInfo const * XBarVisibilityProp();
		static PropertyInfo const * XOffsetProp();
		static PropertyInfo const * XScrollableProp();
		static PropertyInfo const * YBarVisibilityProp();
		static PropertyInfo const * YOffsetProp();
		static PropertyInfo const * YScrollableProp();
		static long Register();
		static void SetClassInfoPtr(IClassInfo *);
		virtual IClassInfo * GetClassInfoW();
		virtual bool OnListenedPropertyChanging(Element *,PropertyInfo const *,int,Value *,Value *);
		virtual bool OnPropertyChanging(PropertyInfo const *,int,Value *,Value *);
		virtual long Add(Element * *,unsigned int);
		virtual void OnEvent(Event *);
		virtual void OnInput(InputEvent *);
		virtual void OnListenedEvent(Element *,Event *);
		virtual void OnListenedInput(Element *,InputEvent *);
		virtual void OnListenedPropertyChanged(Element *,PropertyInfo const *,int,Value *,Value *);
		virtual void OnListenerAttach(Element *);
		virtual void OnListenerDetach(Element *);
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
		virtual ~BaseScrollViewer();
	};

	class BehaviorEngine
	{
		static BehaviorEngine * s_pInstance;
		virtual ~BehaviorEngine();
	public:
		static long Create();
		virtual long CreateBehavior(unsigned short const *,unsigned short const *,Value *,IDuiBehavior * *);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual long RegisterBehaviorFactory(unsigned short const *,IDuiBehaviorFactory *);
		virtual long UnregisterBehaviorFactory(unsigned short const *,IDuiBehaviorFactory *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
	};

	struct BehaviorFactoryStore
	{
		long Add(unsigned short const *,IDuiBehaviorFactory *);
		long Remove(unsigned short const *,IDuiBehaviorFactory *);
		~BehaviorFactoryStore();
	};

	class BehaviorStore
	{
		int GetIndexOf(IDuiBehavior const *);
	public:
		bool NotifyOnPropertyChanging(Element *,PropertyInfo const *,int,Value *,Value *);
		long Add(IDuiBehavior *,Element *);
		long NotifyOnDisplayNodeCallback(Element *,EventMsg *);
		long Remove(IDuiBehavior *,Element *);
		tagSIZE NotifyOnUpdateDesiredSize(Element *,int,int,Surface *);
		void DetachFromElementAndDestroy(Element *);
		void NotifyOnDoLayout(Element *,int,int);
		void NotifyOnEvent(Element *,Event *);
		void NotifyOnGetAdjacent(Element *,int,NavReference const *,unsigned long,Element * *);
		void NotifyOnHosted(Element *,Element *);
		void NotifyOnInput(Element *,InputEvent *);
		void NotifyOnKeyFocusMoved(Element *,Element *,Element *);
		void NotifyOnPaint(Element *,HDC__ *,tagRECT const *,tagRECT const *);
		void NotifyOnPropertyChanged(Element *,PropertyInfo const *,int,Value *,Value *);
		void NotifyOnUnHosted(Element *,Element *);
	};

	namespace BinaryFile
	{
		class CBinaryFile
		{
			long _Initialize(void const *,unsigned __int64);
			long _Verify();
		public:
			BDXEntry const * GetCurrentEntry();
			long GetResource(unsigned __int64,unsigned short const * *,unsigned __int64 *);
			long GetString(unsigned short,unsigned short const * *,unsigned __int64 *);
			long SeekToResource(unsigned __int64);
			long SetPosition(BinaryFilePosition const *);
			unsigned __int64 GetNumResources();
		};

		unsigned short const * * g_BDXCommonStringTable;
	};

	class Bind
	{
		static IClassInfo * s_pClassInfo;
	public:
		Bind & operator=(Bind const &);
		Bind();
		Bind(Bind const &);
		long Initialize(Element *,unsigned long *);
		long SetConnect(unsigned short const *);
		long SetProperty(unsigned short const *);
		static IClassInfo * GetClassInfoPtr();
		static PropertyInfo const * ConnectProp();
		static PropertyInfo const * PropertyProp();
		static long Create(Element *,unsigned long *,Element * *);
		static long Register();
		static void SetClassInfoPtr(IClassInfo *);
		unsigned short const * GetConnect(Value * *);
		unsigned short const * GetProperty(Value * *);
		virtual IClassInfo * GetClassInfoW();
		virtual ~Bind();
	};

	class BorderLayout
	{
		void SetClient(Element *);
	public:
		BorderLayout & operator=(BorderLayout const &);
		BorderLayout();
		BorderLayout(BorderLayout const &);
		static long Create(Layout * *);
		static long Create(int,int *,Value * *);
		virtual Element * GetAdjacent(Element *,Element *,int,NavReference const *,unsigned long);
		virtual tagSIZE UpdateDesiredSize(Element *,int,int,Surface *);
		virtual void DoLayout(Element *,int,int);
		virtual void OnAdd(Element *,Element * *,unsigned int);
		virtual void OnLayoutPosChanged(Element *,Element *,int,int);
		virtual void OnRemove(Element *,Element * *,unsigned int);
		virtual ~BorderLayout();
		void Initialize();
	};

	class Browser
	{
		int FireNavigate(unsigned short);
		static IClassInfo * s_pClassInfo;
	public:
		Browser & operator=(Browser const &);
		Browser();
		Browser(Browser const &);
		Element * GetCurrentPage();
		Pages * GetPages();
		long Initialize(Element *,unsigned long *);
		static IClassInfo * GetClassInfoPtr();
		static UID Entered();
		static UID Leaving();
		static UID StartNavigate();
		static long Create(Element *,unsigned long *,Element * *);
		static long Register();
		static void SetClassInfoPtr(IClassInfo *);
		unsigned short GetCurrentPageID();
		virtual IClassInfo * GetClassInfoW();
		virtual void OnEvent(Event *);
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
		virtual ~Browser();
	};

	class BrowserSelectionProxy
	{
		long GetIsSelectionRequired(int *);
		long GetSelection(tagSAFEARRAY * *);
	protected:
		virtual void Init(Element *);
	public:
		BrowserSelectionProxy & operator=(BrowserSelectionProxy const &);
		BrowserSelectionProxy();
		BrowserSelectionProxy(BrowserSelectionProxy const &);
		virtual long DoMethod(int,char *);
	};

	class Button
	{
		static IClassInfo * s_pClassInfo;
	public:
		Button & operator=(Button const &);
		Button();
		Button(Button const &);
		bool GetCaptured();
		bool GetPressed();
		long Initialize(unsigned int,Element *,unsigned long *);
		long SetCaptured(bool);
		long SetPressed(bool);
		static IClassInfo * GetClassInfoPtr();
		static PropertyInfo const * CapturedProp();
		static PropertyInfo const * PressedProp();
		static UID Click();
		static UID Context();
		static long Create(Element *,unsigned long *,Element * *);
		static long Create(unsigned int,Element *,unsigned long *,Element * *);
		static long Register();
		static void SetClassInfoPtr(IClassInfo *);
		virtual IClassInfo * GetClassInfoW();
		virtual bool OnLostDialogFocus(IDialogElement *);
		virtual bool OnReceivedDialogFocus(IDialogElement *);
		virtual long DefaultAction();
		virtual void OnInput(InputEvent *);
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
		virtual ~Button();
	};

	struct ByteCode
	{
		long Append(void *,unsigned int);
	};

	class CActivityOverlay
	{
		static CActivityOverlay::ANIMATIONTIMELINE const * const c_rgAnimationCurves;
		static CActivityOverlay::BAR_DESIGN_VALUES const * const c_rgBarDesignValues;
		static float s_ComputeSinFunc(float,CActivityOverlay::FUNCMODE);
	public:
		CActivityOverlay(ModernProgressBar *);
		void Paint(HDC__ *,tagRECT const *,tagRECT const *,unsigned int);
	};

	struct CAutoFont
	{
		CAutoFont(Element *,HDC__ *);
	};

	struct CBinaryXmlReader
	{
		CBinaryXmlReader();
		virtual int IsDefault();
		virtual int IsEOF();
		virtual int IsEmptyElement();
		virtual long GetAttributeCount(unsigned int *);
		virtual long GetBaseUri(unsigned short const * *,unsigned int *);
		virtual long GetDepth(unsigned int *);
		virtual long GetLineNumber(unsigned int *);
		virtual long GetLinePosition(unsigned int *);
		virtual long GetLocalName(unsigned short const * *,unsigned int *);
		virtual long GetNamespaceUri(unsigned short const * *,unsigned int *);
		virtual long GetNodeType(XmlNodeType *);
		virtual long GetPrefix(unsigned short const * *,unsigned int *);
		virtual long GetProperty(unsigned int,__int64 *);
		virtual long GetQualifiedName(unsigned short const * *,unsigned int *);
		virtual long GetResource(unsigned int,unsigned short const * *);
		virtual long GetValue(unsigned short const * *,unsigned int *);
		virtual long MoveToAttributeByName(unsigned short const *,unsigned short const *);
		virtual long MoveToElement();
		virtual long MoveToFirstAttribute();
		virtual long MoveToNextAttribute();
		virtual long PopState();
		virtual long PushState();
		virtual long Read(XmlNodeType *);
		virtual long ReadValueChunk(unsigned short *,unsigned int,unsigned int *);
		virtual long SeekToResource(unsigned short const *);
		virtual long SetInput(IUnknown *);
		virtual long SetProperty(unsigned int,__int64);
		virtual ~CBinaryXmlReader();
	};

	class CCAVI
	{
		static IClassInfo * s_pClassInfo;
		void OpenAnimation(HWND__ *);
	protected:
		virtual void PostCreate(HWND__ *);
	public:
		CCAVI & operator=(CCAVI const &);
		CCAVI();
		CCAVI(CCAVI const &);
		static IClassInfo * GetClassInfoPtr();
		static long Create(Element *,unsigned long *,Element * *);
		static long Create(unsigned int,Element *,unsigned long *,Element * *);
		static long Register();
		static void SetClassInfoPtr(IClassInfo *);
		virtual IClassInfo * GetClassInfoW();
		virtual ~CCAVI();
		void Play(HWND__ *);
		void Stop();
	};

	class CCBase
	{
		static IClassInfo * s_pClassInfo;
	protected:
		virtual void PostCreate(HWND__ *);
	public:
		CCBase & operator=(CCBase const &);
		CCBase(CCBase const &);
		CCBase(unsigned long,unsigned short const *);
		int GetWinStyle();
		long Initialize(unsigned int,Element *,unsigned long *);
		long SetWinStyle(int);
		static IClassInfo * GetClassInfoPtr();
		static PropertyInfo const * WinStyleProp();
		static long Create(Element *,unsigned long *,Element * *);
		static long Create(unsigned int,Element *,unsigned long *,Element * *);
		static long Register();
		static void SetClassInfoPtr(IClassInfo *);
		virtual HWND__ * CreateHWND(HWND__ *);
		virtual IClassInfo * GetClassInfoW();
		virtual bool OnCustomDraw(tagNMCUSTOMDRAWINFO *,__int64 *);
		virtual bool OnLostDialogFocus(IDialogElement *);
		virtual bool OnNotify(unsigned int,unsigned __int64,__int64,__int64 *);
		virtual bool OnReceivedDialogFocus(IDialogElement *);
		virtual long DefaultAction();
		virtual tagSIZE GetContentSize(int,int,Surface *);
		virtual void OnInput(InputEvent *);
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
		virtual ~CCBase();
		void SetNotifyHandler(int (*)(unsigned int,unsigned __int64,__int64,__int64 *,void *),void *);
	};

	class CCBaseCheckRadioButton
	{
		static IClassInfo * s_pClassInfo;
	protected:
		virtual void PostCreate(HWND__ *);
	public:
		CCBaseCheckRadioButton & operator=(CCBaseCheckRadioButton const &);
		CCBaseCheckRadioButton(CCBaseCheckRadioButton const &);
		CCBaseCheckRadioButton(unsigned long);
		static IClassInfo * GetClassInfoPtr();
		static long Register();
		static void SetClassInfoPtr(IClassInfo *);
		virtual IClassInfo * GetClassInfoW();
		virtual bool OnLostDialogFocus(IDialogElement *);
		virtual bool OnReceivedDialogFocus(IDialogElement *);
		virtual tagSIZE GetContentSize(int,int,Surface *);
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
		virtual ~CCBaseCheckRadioButton();
	};

	class CCBaseScrollBar
	{
		static IClassInfo * s_pClassInfo;
	public:
		CCBaseScrollBar & operator=(CCBaseScrollBar const &);
		CCBaseScrollBar(CCBaseScrollBar const &);
		CCBaseScrollBar(unsigned long);
		bool GetTracking();
		long Initialize(unsigned int,Element *,unsigned long *);
		long SetTracking(bool);
		static IClassInfo * GetClassInfoPtr();
		static PropertyInfo const * LineProp();
		static PropertyInfo const * MaximumProp();
		static PropertyInfo const * MinimumProp();
		static PropertyInfo const * PageProp();
		static PropertyInfo const * PositionProp();
		static PropertyInfo const * TrackingProp();
		static long Register();
		static void SetClassInfoPtr(IClassInfo *);
		virtual Element * GetElement();
		virtual HWND__ * CreateHWND(HWND__ *);
		virtual IClassInfo * GetClassInfoW();
		virtual bool GetProportional();
		virtual bool OnMessage(unsigned int,unsigned __int64,__int64,__int64 *);
		virtual bool OnPropertyChanging(PropertyInfo const *,int,Value *,Value *);
		virtual int GetLine();
		virtual int GetMaximum();
		virtual int GetMinimum();
		virtual int GetPage();
		virtual int GetPosition();
		virtual long SetLine(int);
		virtual long SetMaximum(int);
		virtual long SetMinimum(int);
		virtual long SetPage(int);
		virtual long SetPosition(int);
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
		virtual ~CCBaseScrollBar();
		void SyncScrollBar();
	};

	class CCCheckBox
	{
		static IClassInfo * s_pClassInfo;
	public:
		CCCheckBox & operator=(CCCheckBox const &);
		CCCheckBox(CCCheckBox const &);
		CCCheckBox(unsigned long);
		static IClassInfo * GetClassInfoPtr();
		static long Create(Element *,unsigned long *,Element * *);
		static long Create(unsigned int,Element *,unsigned long *,Element * *);
		static long Register();
		static void SetClassInfoPtr(IClassInfo *);
		virtual IClassInfo * GetClassInfoW();
		virtual bool OnNotify(unsigned int,unsigned __int64,__int64,__int64 *);
		virtual void OnInput(InputEvent *);
		virtual ~CCCheckBox();
	};

	class CCCommandLink
	{
		static IClassInfo * s_pClassInfo;
	protected:
		virtual void PostCreate(HWND__ *);
		void SyncNoteAndGlyph(HWND__ *);
	public:
		CCCommandLink & operator=(CCCommandLink const &);
		CCCommandLink(CCCommandLink const &);
		CCCommandLink(unsigned long);
		long SetNote(unsigned short const *);
		static IClassInfo * GetClassInfoPtr();
		static PropertyInfo const * NoteProp();
		static long Create(Element *,unsigned long *,Element * *);
		static long Create(unsigned int,Element *,unsigned long *,Element * *);
		static long Register();
		static void SetClassInfoPtr(IClassInfo *);
		unsigned short const * GetNote(Value * *);
		virtual IClassInfo * GetClassInfoW();
		virtual tagSIZE GetContentSize(int,int,Surface *);
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
		virtual void OnSelectedPropertyChanged();
		virtual ~CCCommandLink();
	};

	class CCHScrollBar
	{
		static IClassInfo * s_pClassInfo;
	public:
		CCHScrollBar & operator=(CCHScrollBar const &);
		CCHScrollBar();
		CCHScrollBar(CCHScrollBar const &);
		static IClassInfo * GetClassInfoPtr();
		static long Create(Element *,unsigned long *,Element * *);
		static long Create(unsigned int,Element *,unsigned long *,Element * *);
		static long Register();
		static void SetClassInfoPtr(IClassInfo *);
		virtual IClassInfo * GetClassInfoW();
		virtual tagSIZE GetContentSize(int,int,Surface *);
		virtual ~CCHScrollBar();
	};

	class CCListBox
	{
		static IClassInfo * s_pClassInfo;
	public:
		CCListBox & operator=(CCListBox const &);
		CCListBox();
		CCListBox(CCListBox const &);
		int AddString(unsigned short const *);
		int DeleteString(int);
		int GetCount();
		static IClassInfo * GetClassInfoPtr();
		static long Create(Element *,unsigned long *,Element * *);
		static long Create(unsigned int,Element *,unsigned long *,Element * *);
		static long Register();
		static void SetClassInfoPtr(IClassInfo *);
		virtual IClassInfo * GetClassInfoW();
		virtual tagSIZE GetContentSize(int,int,Surface *);
		virtual ~CCListBox();
	};

	class CCListView
	{
		static IClassInfo * s_pClassInfo;
	public:
		CCListView & operator=(CCListView const &);
		CCListView();
		CCListView(CCListView const &);
		long Initialize(unsigned int,Element *,unsigned long *);
		static IClassInfo * GetClassInfoPtr();
		static long Create(Element *,unsigned long *,Element * *);
		static long Create(unsigned int,Element *,unsigned long *,Element * *);
		static long Register();
		static void SetClassInfoPtr(IClassInfo *);
		virtual IClassInfo * GetClassInfoW();
		virtual tagSIZE GetContentSize(int,int,Surface *);
		virtual ~CCListView();
	};

	class CCProgressBar
	{
		static IClassInfo * s_pClassInfo;
	public:
		CCProgressBar & operator=(CCProgressBar const &);
		CCProgressBar();
		CCProgressBar(CCProgressBar const &);
		long Initialize(unsigned int,Element *,unsigned long *);
		static IClassInfo * GetClassInfoPtr();
		static long Create(Element *,unsigned long *,Element * *);
		static long Create(unsigned int,Element *,unsigned long *,Element * *);
		static long Register();
		static void SetClassInfoPtr(IClassInfo *);
		virtual IClassInfo * GetClassInfoW();
		virtual void OnInput(InputEvent *);
		virtual ~CCProgressBar();
	};

	class CCPushButton
	{
		static IClassInfo * s_pClassInfo;
	protected:
		void SetDefaultState(unsigned long,unsigned long);
	public:
		CCPushButton & operator=(CCPushButton const &);
		CCPushButton(CCPushButton const &);
		CCPushButton(unsigned long);
		bool GetHasShield();
		bool GetOverrideButtonBackground();
		long SetOverrideButtonBackground(bool);
		static IClassInfo * GetClassInfoPtr();
		static PropertyInfo const * HasShieldProp();
		static PropertyInfo const * OverrideButtonBackgroundProp();
		static long Create(Element *,unsigned long *,Element * *);
		static long Create(unsigned int,Element *,unsigned long *,Element * *);
		static long Register();
		static void SetClassInfoPtr(IClassInfo *);
		virtual IClassInfo * GetClassInfoW();
		virtual bool GetButtonColor(HDC__ *,HBRUSH__ * *);
		virtual bool OnLostDialogFocus(IDialogElement *);
		virtual bool OnMessage(unsigned int,unsigned __int64,__int64,__int64 *);
		virtual bool OnNotify(unsigned int,unsigned __int64,__int64,__int64 *);
		virtual bool OnReceivedDialogFocus(IDialogElement *);
		virtual long DefaultAction();
		virtual tagSIZE EstimateContentSize(int,int,Surface *);
		virtual tagSIZE GetContentSize(int,int,Surface *);
		virtual void OnInput(InputEvent *);
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
		virtual void OnSelectedPropertyChanged();
		virtual ~CCPushButton();
	};

	class CCRadioButton
	{
		static IClassInfo * s_pClassInfo;
	public:
		CCRadioButton & operator=(CCRadioButton const &);
		CCRadioButton();
		CCRadioButton(CCRadioButton const &);
		bool GetAutoGrouping();
		long SetAutoGrouping(bool);
		static IClassInfo * GetClassInfoPtr();
		static PropertyInfo const * AutoGroupingProp();
		static long Create(Element *,unsigned long *,Element * *);
		static long Create(unsigned int,Element *,unsigned long *,Element * *);
		static long Register();
		static void SetClassInfoPtr(IClassInfo *);
		virtual IClassInfo * GetClassInfoW();
		virtual bool OnNotify(unsigned int,unsigned __int64,__int64,__int64 *);
		virtual void OnInput(InputEvent *);
		virtual ~CCRadioButton();
	};

	class CCSysLink
	{
		static IClassInfo * s_pClassInfo;
	public:
		CCSysLink & operator=(CCSysLink const &);
		CCSysLink();
		CCSysLink(CCSysLink const &);
		static IClassInfo * GetClassInfoPtr();
		static long Create(Element *,unsigned long *,Element * *);
		static long Create(unsigned int,Element *,unsigned long *,Element * *);
		static long Register();
		static void SetClassInfoPtr(IClassInfo *);
		virtual IClassInfo * GetClassInfoW();
		virtual bool OnLostDialogFocus(IDialogElement *);
		virtual bool OnReceivedDialogFocus(IDialogElement *);
		virtual tagSIZE GetContentSize(int,int,Surface *);
		virtual void OnInput(InputEvent *);
		virtual ~CCSysLink();
	};

	class CCTrackBar
	{
		static IClassInfo * s_pClassInfo;
	protected:
		virtual void PostCreate(HWND__ *);
	public:
		CCTrackBar & operator=(CCTrackBar const &);
		CCTrackBar();
		CCTrackBar(CCTrackBar const &);
		int GetLineSize();
		int GetRangeMax();
		int GetRangeMin();
		int GetThumbPosition();
		long SetLineSize(int);
		long SetRangeMax(int);
		long SetRangeMin(int);
		long SetThumbPosition(int);
		static IClassInfo * GetClassInfoPtr();
		static PropertyInfo const * LineSizeProp();
		static PropertyInfo const * RangeMaxProp();
		static PropertyInfo const * RangeMinProp();
		static PropertyInfo const * ThumbPositionProp();
		static long Create(Element *,unsigned long *,Element * *);
		static long Create(unsigned int,Element *,unsigned long *,Element * *);
		static long Register();
		static void SetClassInfoPtr(IClassInfo *);
		virtual IClassInfo * GetClassInfoW();
		virtual bool OnMessage(unsigned int,unsigned __int64,__int64,__int64 *);
		virtual bool OnPropertyChanging(PropertyInfo const *,int,Value *,Value *);
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
		virtual ~CCTrackBar();
	};

	class CCTreeView
	{
		static IClassInfo * s_pClassInfo;
	protected:
		virtual long _OnGetInfoTip(tagNMTVGETINFOTIPW const *);
		virtual long _OnItemChanged(tagTVITEMCHANGE const *);
	public:
		CCTreeView & operator=(CCTreeView const &);
		CCTreeView(CCTreeView const &);
		CCTreeView(unsigned long);
		_TREEITEM * InsertItem(tagTVINSERTSTRUCTW const *);
		_TREEITEM * InsertItem(unsigned short *,unsigned int,_TREEITEM * const,_TREEITEM * const);
		static IClassInfo * GetClassInfoPtr();
		static long Create(Element *,unsigned long *,Element * *);
		static long Create(unsigned int,Element *,unsigned long *,Element * *);
		static long Register();
		static void SetClassInfoPtr(IClassInfo *);
		unsigned int GetItemState(_TREEITEM * const);
		unsigned long GetStyle();
		unsigned long SetStyle(unsigned long);
		virtual IClassInfo * GetClassInfoW();
		virtual bool OnNotify(unsigned int,unsigned __int64,__int64,__int64 *);
		virtual tagSIZE GetContentSize(int,int,Surface *);
		virtual ~CCTreeView();
		void SetItemState(_TREEITEM *,unsigned int);
	};

	class CCVScrollBar
	{
		static IClassInfo * s_pClassInfo;
	public:
		CCVScrollBar & operator=(CCVScrollBar const &);
		CCVScrollBar();
		CCVScrollBar(CCVScrollBar const &);
		static IClassInfo * GetClassInfoPtr();
		static long Create(Element *,unsigned long *,Element * *);
		static long Create(unsigned int,Element *,unsigned long *,Element * *);
		static long Register();
		static void SetClassInfoPtr(IClassInfo *);
		virtual IClassInfo * GetClassInfoW();
		virtual tagSIZE GetContentSize(int,int,Surface *);
		virtual ~CCVScrollBar();
	};

	class CClassFactory
	{
		long _RegisterLocal(IClassInfo *);
		long _UnRegisterLocal(IClassInfo *);
		static unsigned long s_dwPciMapVersion;
	public:
		IClassInfo * Get(unsigned short const *,HINSTANCE__ *);
		long Initialize();
		long ModuleAddRef(HINSTANCE__ *);
		long Register(IClassInfo *);
		long UnRegister(IClassInfo *);
		static long Create(CClassFactory * *);
		void ReleaseClassId(int);
		void UnRegisterSet(HINSTANCE__ *);
		~CClassFactory();
	};

	class CIHMCallback
	{
		float _GetAnimationTime(int,int,float);
		void _OnIHMTimer();
		void _StopTimer();
		void _TouchKeyboardHiding(TouchHWNDElement *);
		void _TouchKeyboardShowing(TouchHWNDElement *,tagRECT const *);
	public:
		CIHMCallback();
		static long CreateInstance(Element *,CIHMCallback * *);
		virtual void TouchKeyboardHiding(bool);
		virtual void TouchKeyboardShowing(tagRECT,bool,bool);
		virtual ~CIHMCallback();
		void Unsubscribe();
	};

	struct CLightDismissNotifier
	{
		static long Create(TouchSelect *,ILightDismissNotification * *);
		virtual long OnDismiss();
		virtual long QueryInterface(_GUID const &,void * *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
	};

	struct CLocalClasses
	{
		long Init(IClassInfo *);
		void Destroy();
	};

	class CStyleSheet
	{
		bool _GetLocalValue(Element *,PropertyInfo const *,unsigned int *,Value * *);
		long AddClassData(ClassData * *,IClassInfo *);
		void _GetSheetValue(Element *,PropertyInfo const *,unsigned int *,Value * *);
	public:
		virtual Value * GetSheetValue(Element *,PropertyInfo const *);
		virtual long AddRule(unsigned short const *,IClassInfo *,Cond *,Decl *);
		virtual long SetBaseSheet(Value *,unsigned int);
		virtual long SetSheetResid(unsigned short const *);
		virtual unsigned short const * GetSheetResid();
		virtual void Destroy();
		virtual void GetSheetDependencies(Element *,PropertyInfo const *,DepRecs *,DeferCycle *,long *);
		virtual void GetSheetScope(Element *,DepRecs *,DeferCycle *,long *);
		virtual void MakeImmutable();
		~CStyleSheet();
	};

	class CStyleSheetManager
	{
		Microsoft::WRL::Wrappers::CriticalSection * _GetLock();
		StyleSheetCache::CSheetEntry * _FindEntry(HINSTANCE__ *,unsigned short const *,DynamicScaleParsing,float);
		StyleSheetCache::CSheetEntry * _FindEntryById(unsigned int);
		float _GetScaleFactor();
		long _CreateEntry(HINSTANCE__ *,HINSTANCE__ *,unsigned short const *,DynamicScaleParsing,float,StyleSheetCache::CSheetEntry * *);
		long _Parse(StyleSheetCache::CSheetEntry *);
		static int s_OneTimeInit(_RTL_RUN_ONCE *,void *,void * *);
		void _Destroy(StyleSheetCache::CSheetEntry *);
		void _DestroyCache();
		void _RemoveEntryById(unsigned int);
	public:
		CStyleSheetManager();
		long Resolve(HINSTANCE__ *,HINSTANCE__ *,unsigned short const *,unsigned short const *,DynamicScaleParsing,float,Value * *,unsigned int *);
		static CStyleSheetManager * s_Get();
		static long s_GetThreadLanguage(unsigned short *,unsigned __int64);
		void ReleaseSheet(unsigned int);
		~CStyleSheetManager();
	};

	struct CTouchEditInnerTextHost
	{
		virtual HDC__ * TxGetDC();
		virtual HICON__ * TxSetCursor2(HICON__ *,int);
		virtual HIMC__ * TxImmGetContext();
		virtual int TxClientToScreen(tagPOINT *);
		virtual int TxCreateCaret(HBITMAP__ *,int,int);
		virtual int TxReleaseDC(HDC__ *);
		virtual int TxScreenToClient(tagPOINT *);
		virtual int TxSetCaretPos(int,int);
		virtual int TxShowCaret(int);
		virtual long GetClipboardData(_charrange *,unsigned long,IDataObject * *);
		virtual long GetContextMenu(unsigned short,IOleObject *,_charrange *,HMENU__ * *);
		virtual long QueryAcceptData(IDataObject *,unsigned short *,unsigned long,int,void *);
		virtual long QueryInsertObject(_GUID *,IStorage *,long);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual long TxActivate(long *);
		virtual long TxDeactivate(long);
		virtual long TxDestroyCaret();
		virtual long TxGetCharFormat(_charformatw const * *);
		virtual long TxGetClientRect(tagRECT *);
		virtual long TxGetExtent(tagSIZE *);
		virtual long TxGetMaxLength(unsigned long *);
		virtual long TxGetParaFormat(_paraformat const * *);
		virtual long TxGetPasswordChar(unsigned short *);
		virtual long TxGetPropertyBits(unsigned long,unsigned long *);
		virtual long TxGetScrollBars(unsigned long *);
		virtual long TxGetViewInset(tagRECT *);
		virtual long TxGetWindow(HWND__ * *);
		virtual long TxNotify(unsigned long,void *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
		virtual unsigned long TxGetSysColor(int);
		virtual void TxImmReleaseContext(HIMC__ *);
		virtual void TxInvalidateRect(tagRECT const *,int);
		virtual void TxSetCursor(HICON__ *,int);
		virtual void TxSetFocus();
	};

	struct CTouchEditInnerWindowlessSite
	{
		CTouchEditInnerWindowlessSite(ElementProvider *);
		static long Create(ElementProvider *,IRawElementProviderWindowlessSite * *);
		virtual long GetAdjacentFragment(NavigateDirection,IRawElementProviderFragment * *);
		virtual long GetPropertyOverrideValue(int,tagVARIANT *);
		virtual long GetRuntimeIdPrefix(tagSAFEARRAY * *);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
	};

	class CallstackTracker
	{
		static API_VERSION * (* s_pfnImagehlpApiVersionEx)(API_VERSION *);
		static CallstackTracker::IMGHLPFN_LOAD * s_ImageHlpFuncList;
		static HINSTANCE__ * s_hinstImageHlp;
		static HINSTANCE__ * s_hinstNtDll;
		static _RTL_RUN_ONCE s_initonceInit;
		static int (* s_pfnSymFromAddr)(void *,unsigned __int64,unsigned __int64 *,_SYMBOL_INFO *);
		static int (* s_pfnSymGetModuleInfo64)(void *,unsigned __int64,_IMAGEHLP_MODULE64 *);
		static int (* s_pfnSymInitialize)(void *,char const *,int);
		static int DllsLoaded();
		static int InitOnceCallback(_RTL_RUN_ONCE *,void *,void * *);
		static int InitializeDllInfo();
		static int InitializeSymbols();
		static int IsCorrectImageHlpVersion();
		static int const INITIALSTACKSKIP;
		static int const STACKDEPTH;
		static unsigned __int64 (* s_pfnSymLoadModule64)(void *,void *,char const *,char const *,unsigned __int64,unsigned long);
		static unsigned long (* s_pfnSymSetOptions)(unsigned long);
		static unsigned short (* s_pfnRtlCaptureStackBackTrace)(unsigned long,unsigned long,void * *,unsigned long *);
		static void * s_hProcess;
		unsigned __int64 GetModuleBase(void *,unsigned __int64);
		void FillSymbolInfo(CallstackTracker::STACK_SYMBOL_INFO *,unsigned __int64);
	public:
		CallstackTracker & operator=(CallstackTracker const &);
		CallstackTracker();
		int CaptureCallstackFrames();
		int EnumCallstackFrames(void (*)(char const *,char const *,unsigned long,unsigned long));
		static int Init();
		static void Uninit();
		~CallstackTracker();
	};

	class CaretElement
	{
		bool _HasAnimation();
		long _AddLinearAnimationSegmentToDCompBlinkAnimation(float,float,float,float);
		long _CreateAnimation();
		long _CreateAnimationEffect();
		long _StartAnimation();
		long _StopAnimation();
		static IClassInfo * s_pClassInfo;
	public:
		bool ShowCaret();
		long Initialize(Element *,unsigned long *);
		virtual IClassInfo * GetClassInfoW();
		virtual void OnEvent(Event *);
		void UpdateCaret(HBITMAP__ *,unsigned long,int,int);
	};

	struct CcsPciMapInitializer
	{
		CcsPciMapInitializer();
		~CcsPciMapInitializer();
	};

	class CheckBoxGlyph
	{
		static IClassInfo * s_pClassInfo;
	public:
		CheckBoxGlyph & operator=(CheckBoxGlyph const &);
		CheckBoxGlyph();
		CheckBoxGlyph(CheckBoxGlyph const &);
		long Initialize(unsigned int,Element *,unsigned long *);
		static IClassInfo * GetClassInfoPtr();
		static long Create(Element *,unsigned long *,Element * *);
		static long Create(unsigned int,Element *,unsigned long *,Element * *);
		static long Register();
		static void SetClassInfoPtr(IClassInfo *);
		virtual IClassInfo * GetClassInfoW();
		virtual bool OnLostDialogFocus(IDialogElement *);
		virtual bool OnReceivedDialogFocus(IDialogElement *);
		virtual ~CheckBoxGlyph();
	};

	struct ClassData
	{
		void Free();
	};

	class ClassInfo<AccessibleButton,Button,StandardCreator<AccessibleButton> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<AccessibleButton,Button,StandardCreator<AccessibleButton> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<AdaptorElement,Element,StandardCreator<AdaptorElement> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<AdaptorElement,Element,StandardCreator<AdaptorElement> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<AnimationStrip,Element,StandardCreator<AnimationStrip> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<AnimationStrip,Element,StandardCreator<AnimationStrip> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<AutoButton,AccessibleButton,StandardCreator<AutoButton> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<AutoButton,AccessibleButton,StandardCreator<AutoButton> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<BaseScrollViewer,Element,EmptyCreator<BaseScrollViewer> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<BaseScrollViewer,Element,EmptyCreator<BaseScrollViewer> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<Bind,Element,StandardCreator<Bind> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<Bind,Element,StandardCreator<Bind> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<Browser,Element,StandardCreator<Browser> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<Browser,Element,StandardCreator<Browser> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<Button,Element,StandardCreator<Button> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<Button,Element,StandardCreator<Button> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<CCAVI,CCBase,StandardCreator<CCAVI> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<CCAVI,CCBase,StandardCreator<CCAVI> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<CCBase,HWNDHost,StandardCreator<CCBase> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<CCBase,HWNDHost,StandardCreator<CCBase> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<CCBaseCheckRadioButton,CCPushButton,StandardCreator<CCBaseCheckRadioButton> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<CCBaseCheckRadioButton,CCPushButton,StandardCreator<CCBaseCheckRadioButton> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<CCBaseScrollBar,CCBase,StandardCreator<CCBaseScrollBar> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<CCBaseScrollBar,CCBase,StandardCreator<CCBaseScrollBar> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<CCCheckBox,CCBaseCheckRadioButton,StandardCreator<CCCheckBox> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<CCCheckBox,CCBaseCheckRadioButton,StandardCreator<CCCheckBox> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<CCCommandLink,CCPushButton,StandardCreator<CCCommandLink> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<CCCommandLink,CCPushButton,StandardCreator<CCCommandLink> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<CCHScrollBar,CCBaseScrollBar,StandardCreator<CCHScrollBar> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<CCHScrollBar,CCBaseScrollBar,StandardCreator<CCHScrollBar> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<CCListBox,CCBase,StandardCreator<CCListBox> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<CCListBox,CCBase,StandardCreator<CCListBox> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<CCListView,CCBase,StandardCreator<CCListView> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<CCListView,CCBase,StandardCreator<CCListView> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<CCProgressBar,CCBase,StandardCreator<CCProgressBar> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<CCProgressBar,CCBase,StandardCreator<CCProgressBar> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<CCPushButton,CCBase,StandardCreator<CCPushButton> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<CCPushButton,CCBase,StandardCreator<CCPushButton> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<CCRadioButton,CCBaseCheckRadioButton,StandardCreator<CCRadioButton> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<CCRadioButton,CCBaseCheckRadioButton,StandardCreator<CCRadioButton> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<CCSysLink,CCBase,StandardCreator<CCSysLink> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<CCSysLink,CCBase,StandardCreator<CCSysLink> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<CCTrackBar,CCBase,StandardCreator<CCTrackBar> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<CCTrackBar,CCBase,StandardCreator<CCTrackBar> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<CCTreeView,CCBase,StandardCreator<CCTreeView> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<CCTreeView,CCBase,StandardCreator<CCTreeView> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<CCVScrollBar,CCBaseScrollBar,StandardCreator<CCVScrollBar> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<CCVScrollBar,CCBaseScrollBar,StandardCreator<CCVScrollBar> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<CaretElement,Element,StandardCreator<CaretElement> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<CaretElement,Element,StandardCreator<CaretElement> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<CheckBoxGlyph,Button,StandardCreator<CheckBoxGlyph> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<CheckBoxGlyph,Button,StandardCreator<CheckBoxGlyph> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<Clipper,Expandable,StandardCreator<Clipper> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<Clipper,Expandable,StandardCreator<Clipper> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<Combobox,HWNDHost,StandardCreator<Combobox> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<Combobox,HWNDHost,StandardCreator<Combobox> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<DialogElement,HWNDElement,EmptyCreator<DialogElement> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<DialogElement,HWNDElement,EmptyCreator<DialogElement> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<Edit,HWNDHost,StandardCreator<Edit> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<Edit,HWNDHost,StandardCreator<Edit> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<ElementWithHWND,Element,EmptyCreator<ElementWithHWND> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<ElementWithHWND,Element,EmptyCreator<ElementWithHWND> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<Expandable,Element,StandardCreator<Expandable> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<Expandable,Element,StandardCreator<Expandable> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<Expando,Expandable,StandardCreator<Expando> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<Expando,Expandable,StandardCreator<Expando> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<ExpandoButtonGlyph,Button,StandardCreator<ExpandoButtonGlyph> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<ExpandoButtonGlyph,Button,StandardCreator<ExpandoButtonGlyph> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<HWNDElement,ElementWithHWND,EmptyCreator<HWNDElement> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<HWNDElement,ElementWithHWND,EmptyCreator<HWNDElement> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<HWNDHost,ElementWithHWND,StandardCreator<HWNDHost> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<HWNDHost,ElementWithHWND,StandardCreator<HWNDHost> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<InternalRichText,RichText,StandardCreator<InternalRichText> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<InternalRichText,RichText,StandardCreator<InternalRichText> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<ItemList,Selector,StandardCreator<ItemList> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<ItemList,Selector,StandardCreator<ItemList> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<Macro,Element,StandardCreator<Macro> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<Macro,Element,StandardCreator<Macro> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<ModernProgressBar,Element,StandardCreator<ModernProgressBar> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<ModernProgressBar,Element,StandardCreator<ModernProgressBar> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<ModernProgressRing,Element,StandardCreator<ModernProgressRing> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<ModernProgressRing,Element,StandardCreator<ModernProgressRing> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<Movie,Element,StandardCreator<Movie> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<Movie,Element,StandardCreator<Movie> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<Navigator,PushButton,StandardCreator<Navigator> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<Navigator,PushButton,StandardCreator<Navigator> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<PText,TextGraphic,StandardCreator<PText> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<PText,TextGraphic,StandardCreator<PText> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<Page,Macro,StandardCreator<Page> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<Page,Macro,StandardCreator<Page> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<Pages,Element,StandardCreator<Pages> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<Pages,Element,StandardCreator<Pages> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<Progress,Element,StandardCreator<Progress> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<Progress,Element,StandardCreator<Progress> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<PushButton,AutoButton,StandardCreator<PushButton> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<PushButton,AutoButton,StandardCreator<PushButton> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<RadioButtonGlyph,Button,StandardCreator<RadioButtonGlyph> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<RadioButtonGlyph,Button,StandardCreator<RadioButtonGlyph> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<RefPointElement,Element,StandardCreator<RefPointElement> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<RefPointElement,Element,StandardCreator<RefPointElement> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<RepeatButton,Button,StandardCreator<RepeatButton> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<RepeatButton,Button,StandardCreator<RepeatButton> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<Repeater,Macro,StandardCreator<Repeater> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<Repeater,Macro,StandardCreator<Repeater> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<RichText,Element,StandardCreator<RichText> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<RichText,Element,StandardCreator<RichText> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<ScrollBar,Element,StandardCreator<ScrollBar> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<ScrollBar,Element,StandardCreator<ScrollBar> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<ScrollViewer,BaseScrollViewer,StandardCreator<ScrollViewer> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<ScrollViewer,BaseScrollViewer,StandardCreator<ScrollViewer> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<Selector,Element,StandardCreator<Selector> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<Selector,Element,StandardCreator<Selector> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<SelectorNoDefault,Selector,StandardCreator<SelectorNoDefault> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<SelectorNoDefault,Selector,StandardCreator<SelectorNoDefault> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<SemanticZoomToggle,Element,StandardCreator<SemanticZoomToggle> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<SemanticZoomToggle,Element,StandardCreator<SemanticZoomToggle> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<SnapshotElement,Element,StandardCreator<SnapshotElement> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<SnapshotElement,Element,StandardCreator<SnapshotElement> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<StyledScrollViewer,BaseScrollViewer,StandardCreator<StyledScrollViewer> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<StyledScrollViewer,BaseScrollViewer,StandardCreator<StyledScrollViewer> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<TextGraphic,Element,StandardCreator<TextGraphic> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<TextGraphic,Element,StandardCreator<TextGraphic> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<Thumb,Button,StandardCreator<Thumb> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<Thumb,Button,StandardCreator<Thumb> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<TouchButton,RichText,StandardCreator<TouchButton> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<TouchButton,RichText,StandardCreator<TouchButton> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<TouchCarouselList,Element,StandardCreator<TouchCarouselList> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<TouchCarouselList,Element,StandardCreator<TouchCarouselList> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<TouchCarouselScrollBar,ScrollBar,StandardCreator<TouchCarouselScrollBar> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<TouchCarouselScrollBar,ScrollBar,StandardCreator<TouchCarouselScrollBar> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<TouchCheckBox,TouchButton,StandardCreator<TouchCheckBox> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<TouchCheckBox,TouchButton,StandardCreator<TouchCheckBox> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<TouchCheckBoxGlyph,TouchCheckBox,StandardCreator<TouchCheckBoxGlyph> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<TouchCheckBoxGlyph,TouchCheckBox,StandardCreator<TouchCheckBoxGlyph> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<TouchCommandButton,TouchButton,StandardCreator<TouchCommandButton> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<TouchCommandButton,TouchButton,StandardCreator<TouchCommandButton> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<TouchDialogElement,TouchHWNDElement,EmptyCreator<TouchDialogElement> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<TouchDialogElement,TouchHWNDElement,EmptyCreator<TouchDialogElement> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<TouchEdit2,TouchEditBase,StandardCreator<TouchEdit2> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<TouchEdit2,TouchEditBase,StandardCreator<TouchEdit2> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<TouchEditBase,Element,StandardCreator<TouchEditBase> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<TouchEditBase,Element,StandardCreator<TouchEditBase> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<TouchEditInner,TouchEditBase,StandardCreator<TouchEditInner> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<TouchEditInner,TouchEditBase,StandardCreator<TouchEditInner> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<TouchHWNDElement,HWNDElement,EmptyCreator<TouchHWNDElement> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<TouchHWNDElement,HWNDElement,EmptyCreator<TouchHWNDElement> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<TouchHyperLink,TouchButton,StandardCreator<TouchHyperLink> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<TouchHyperLink,TouchButton,StandardCreator<TouchHyperLink> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<TouchRepeatButton,TouchButton,StandardCreator<TouchRepeatButton> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<TouchRepeatButton,TouchButton,StandardCreator<TouchRepeatButton> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<TouchScrollBar,ScrollBar,StandardCreator<TouchScrollBar> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<TouchScrollBar,ScrollBar,StandardCreator<TouchScrollBar> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<TouchScrollViewer,BaseScrollViewer,StandardCreator<TouchScrollViewer> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<TouchScrollViewer,BaseScrollViewer,StandardCreator<TouchScrollViewer> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<TouchSelect,TouchButton,StandardCreator<TouchSelect> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<TouchSelect,TouchButton,StandardCreator<TouchSelect> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<TouchSelectItem,TouchButton,StandardCreator<TouchSelectItem> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<TouchSelectItem,TouchButton,StandardCreator<TouchSelectItem> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<TouchSelectPopup,TouchHWNDElement,EmptyCreator<TouchSelectPopup> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<TouchSelectPopup,TouchHWNDElement,EmptyCreator<TouchSelectPopup> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<TouchSlider,Element,StandardCreator<TouchSlider> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<TouchSlider,Element,StandardCreator<TouchSlider> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<TouchSwitch,Element,StandardCreator<TouchSwitch> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<TouchSwitch,Element,StandardCreator<TouchSwitch> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<TouchXBaby,TouchDialogElement,StandardCreator<TouchXBaby> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<TouchXBaby,TouchDialogElement,StandardCreator<TouchXBaby> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<UnknownElement,Element,StandardCreator<UnknownElement> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<UnknownElement,Element,StandardCreator<UnknownElement> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<Viewer,Element,StandardCreator<Viewer> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<Viewer,Element,StandardCreator<Viewer> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<WrappingList,ItemList,StandardCreator<WrappingList> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<WrappingList,ItemList,StandardCreator<WrappingList> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<XBaby,DialogElement,StandardCreator<XBaby> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<XBaby,DialogElement,StandardCreator<XBaby> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<XElement,HWNDHost,StandardCreator<XElement> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<XElement,HWNDHost,StandardCreator<XElement> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	struct ClassInfoBase
	{
		ClassInfoBase & operator=(ClassInfoBase const &);
		ClassInfoBase();
		ClassInfoBase(ClassInfoBase const &);
		long Initialize(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int);
		long Register();
		static bool ClassExist(IClassInfo * *,PropertyInfo const * const *,unsigned int,IClassInfo *,HINSTANCE__ *,unsigned short const *,bool);
		virtual HINSTANCE__ * GetModule();
		virtual PropertyInfo const * EnumPropertyInfo(unsigned int);
		virtual PropertyInfo const * GetByClassIndex(unsigned int);
		virtual bool IsGlobal();
		virtual bool IsSubclassOf(IClassInfo *);
		virtual bool IsValidProperty(PropertyInfo const *);
		virtual int GetChildren();
		virtual int Release();
		virtual unsigned int GetGlobalIndex();
		virtual unsigned int GetPICount();
		virtual unsigned short const * GetName();
		virtual void AddChild();
		virtual void AddRef();
		virtual void AssertPIZeroRef();
		virtual void Destroy();
		virtual void RemoveChild();
		virtual ~ClassInfoBase();
	};

	class Clipper
	{
		static IClassInfo * s_pClassInfo;
	public:
		Clipper & operator=(Clipper const &);
		Clipper();
		Clipper(Clipper const &);
		long Initialize(Element *,unsigned long *);
		static IClassInfo * GetClassInfoPtr();
		static long Create(Element *,unsigned long *,Element * *);
		static long Register();
		static void SetClassInfoPtr(IClassInfo *);
		virtual IClassInfo * GetClassInfoW();
		virtual tagSIZE _SelfLayoutUpdateDesiredSize(int,int,Surface *);
		virtual void _SelfLayoutDoLayout(int,int);
		virtual ~Clipper();
	};

	class Combobox
	{
		static IClassInfo * s_pClassInfo;
	public:
		Combobox & operator=(Combobox const &);
		Combobox();
		Combobox(Combobox const &);
		int AddString(unsigned short const *);
		int GetSelection();
		long Initialize(unsigned int,Element *,unsigned long *);
		long SetSelection(int);
		static IClassInfo * GetClassInfoPtr();
		static PropertyInfo const * SelectionProp();
		static UID SelectionChange();
		static long Create(Element *,unsigned long *,Element * *);
		static long Create(unsigned int,Element *,unsigned long *,Element * *);
		static long Register();
		static void SetClassInfoPtr(IClassInfo *);
		virtual HWND__ * CreateHWND(HWND__ *);
		virtual IClassInfo * GetClassInfoW();
		virtual bool OnNotify(unsigned int,unsigned __int64,__int64,__int64 *);
		virtual int OnAdjustWindowSize(int,int,unsigned int);
		virtual tagSIZE GetContentSize(int,int,Surface *);
		virtual void OnHosted(Element *);
		virtual void OnInput(InputEvent *);
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
		virtual ~Combobox();
	};

	struct ContentLayoutInvalidateBehavior
	{
		static long Create(TouchScrollViewer *,Element *,IDuiBehavior * *);
		virtual long OnDoLayout(Element *,int,int);
	};

	class ContentTiler
	{
		struct TILING_DATA
		{
			TILING_DATA();
			~TILING_DATA();
		};

		float _GetTileCreationTime(ContentTiler::TILING_DATA *);
		long _CalculatePredictedTransform(ContentTiler::TILING_DATA *,D2D1::Matrix3x2F const &,float,float,float,float,D2D1::Matrix3x2F *);
		long _ComputeThresholdRect(ContentTiler::TILING_DATA *,D2D1::Matrix3x2F const &,tagRECT *,tagRECT *);
		long _FillRectWithTiles(ContentTiler::TILING_DATA *,tagRECT *,tagRECT *);
		long _FillTileRect(ContentTiler::TILING_DATA *,tagRECT *,tagRECT *,bool *);
		long _HandleMiss(ContentTiler::TILING_DATA *,D2D1::Matrix3x2F const &,tagRECT *,tagRECT *);
		long _MakeCallbacks(ManipulationHelper *,ContentTiler::TILING_DATA *,IUnknown *,tagRECT *,tagRECT *);
		long _PredictFuturePosition(ContentTiler::TILING_DATA *,D2D1::Matrix3x2F const &,float,float,tagRECT *,tagRECT *);
		static tagSIZE s_defaultMaxTileSize;
		static tagSIZE s_defaultMinTileSize;
		static void _DestructionCallback(IUnknown *,ContentTiler::TILING_DATA *);
		void _ComputeTileSize(ContentTiler::TILING_DATA *);
	public:
		ContentTiler();
		long BeginTiling(IDirectManipulationContent *);
		long ComputeTilesForContent(IDirectManipulationContent *);
		long EndTiling(IDirectManipulationContent *);
		long GetTransform(IDirectManipulationContent *,float *,unsigned long);
		long SetParameters(TILING_PARAMETERS *);
	};

	class ContextMenuBehavior
	{
		void _FireContextMenuRequested(tagRECT const &,CONTEXT_MENU_DEVICE_ORIGIN);
		void _FireContextMenuRequestedFromKeyboard();
		void _FireContextMenuRequestedFromMouse(Element *,tagPOINT const &);
		void _OnMouseEvent(MouseEvent *);
		void _OnPointerEvent(PointerEvent *);
	protected:
		static _GUID const * const * const s_rgpIID;
	public:
		static UID ContextMenuHintShowing();
		static UID ContextMenuRequested();
		static long Create(IDuiBehavior * *);
		virtual long GetCallbackFilters(DuiBehaviorFilters::Flags *);
		virtual long Init(Value *);
		virtual long OnAttach(Element *);
		virtual long OnDetach(Element *);
		virtual long OnEvent(Element *,Event *);
		virtual long OnInput(Element *,InputEvent *);
	};

	struct CritSecLock
	{
		CritSecLock & operator=(CritSecLock const &);
		CritSecLock(_RTL_CRITICAL_SECTION *);
		void Unlock();
		~CritSecLock();
	};

	struct DCSurface
	{
		DCSurface & operator=(DCSurface const &);
		DCSurface(DCSurface const &);
		DCSurface(HDC__ *);
		HDC__ * GetHDC();
		virtual Surface::EType GetType();
		virtual ~DCSurface();
	};

	class DUIBehaviorFactory
	{
	protected:
		static _GUID const * const * const s_rgpIID;
	public:
		virtual long CreateBehavior(unsigned short const *,IDuiBehavior * *);
	};

	class DUIFactory
	{
		static void s_XMLParseError(unsigned short const *,unsigned short const *,int,void *);
		void ClearParser();
	public:
		DUIFactory & operator=(DUIFactory const &);
		DUIFactory(HWND__ *);
		DUIXmlParser * DetachParser();
		DUIXmlParser * GetParser();
		long CreateParser();
		long LoadFromBuffer(unsigned short const *,unsigned __int64,unsigned short const *,Element *,unsigned long *,Element * *);
		long LoadFromFile(unsigned short const *,unsigned short const *,Element *,unsigned long *,Element * *);
		long LoadFromResource(HINSTANCE__ *,unsigned short const *,unsigned short const *,Element *,unsigned long *,Element * *,unsigned short const *);
		void SetError(unsigned short const *,...);
		~DUIFactory();
	};

	class DUIParsePlayer
	{
		ReplayStackFrame * _GetCurrentFrame();
		long _AddArgs(LINEINFO);
		long _CreateBehavior(LINEINFO,unsigned short const *,unsigned short const *,Value *);
		long _CreateLayout(LINEINFO,long (*)(int,int *,Value * *),int,int *);
		long _InstantiateElement(LINEINFO,Element *,unsigned long *,IClassInfo *);
		long _PopToArgs(LINEINFO);
		long _SetComputedValue(LINEINFO,PropertyInfo const *);
		static long s_GetSheet(DUIXmlParser *,LINEINFO,unsigned short const *,int,Value * *);
	public:
		long CreateElement(DUIParseRecorder *,unsigned short const *,Element *,Element *,unsigned long *,Element * *);
		static long Create(DUIXmlParser *,DUIParsePlayer * *);
		static long SetElementStyleSheet(DUIXmlParser *,Element *,unsigned short const *,int);
	};

	class DUIParseRecorder
	{
		long _CreateByteCode(unsigned short const *,ByteCode * *);
	public:
		long CreateBehavior(LINEINFO,unsigned short const *,unsigned short const *,Value *);
		long SetValue(LINEINFO,unsigned short const *,unsigned short const *);
		static long Create(DUIXmlParser *,DUIParseRecorder * *);
		void Reset();
	};

	class DUIXmlParser
	{
		struct FunctionDefinition<ScaledRECT>
		{
			FunctionDefinition<ScaledRECT> & operator=(FunctionDefinition<ScaledRECT> const &);
		};

		struct FunctionDefinition<ScaledSIZE>
		{
			FunctionDefinition<ScaledSIZE> & operator=(FunctionDefinition<ScaledSIZE> const &);
		};

		struct FunctionDefinition<Value *>
		{
			FunctionDefinition<Value *> & operator=(FunctionDefinition<Value *> const &);
		};

		struct FunctionDefinition<int>
		{
			FunctionDefinition<int> & operator=(FunctionDefinition<int> const &);
		};

		struct FunctionDefinition<unsigned long>
		{
			FunctionDefinition<unsigned long> & operator=(FunctionDefinition<unsigned long> const &);
		};

		float _ScalePointsToPixels(float);
		float _ScaleRelativePixels(float);
		int _ScalePointsToPixels(int);
		int _ScaleRelativePixels(int);
		void SetParseState(_DUI_PARSE_STATE);
	protected:
		LINEINFO _GetLineInfo(IXmlReader *);
		int QuerySysMetric(int,bool *);
		long AddRulesToStyleSheet(IXmlReader *,StyleSheet *,unsigned short const *,DynamicArray<XMLParserCond,0> *,DynamicArray<unsigned short *,0> *);
		long CreateLayout(ParserTools::ExprNode const *,long (*)(int,int *,Value * *));
		long CreateStyleSheet(IXmlReader *,unsigned short const *,StyleSheet * *);
		long CreateXmlReader(IXmlReader * *);
		long CreateXmlReaderFromHGLOBAL(void *,IXmlReader * *);
		long CreateXmlReaderInputWithEncodingName(IStream *,unsigned short const *,IUnknown * *);
		long DispatchFuncall<ScaledRECT>(DUIXmlParser::FunctionDefinition<ScaledRECT> const *,ParserTools::ExprNode const *,ScaledRECT *,bool *);
		long DispatchFuncall<ScaledSIZE>(DUIXmlParser::FunctionDefinition<ScaledSIZE> const *,ParserTools::ExprNode const *,ScaledSIZE *,bool *);
		long DispatchFuncall<int>(DUIXmlParser::FunctionDefinition<int> const *,ParserTools::ExprNode const *,int *,bool *);
		long DispatchFuncall<unsigned long>(DUIXmlParser::FunctionDefinition<unsigned long> const *,ParserTools::ExprNode const *,unsigned long *,bool *);
		long GetParserCommon(DUIXmlParser * *);
		long GetPropValPairInfo(IXmlReader *,IClassInfo *,unsigned short const *,unsigned short const *,PropertyInfo const * *,Value * *);
		long GetPropValPairInfo(LINEINFO,IClassInfo *,unsigned short const *,unsigned short const *,PropertyInfo const * *,Value * *);
		long GetValueParser(ParserTools::ValueParser * *);
		long Initialize();
		long InitializeParserFromXmlReader(IXmlReader *,HINSTANCE__ *,HINSTANCE__ *);
		long MapPropertyEnumValue(EnumMap const *,unsigned short const *,int *);
		long MapPropertyNameToPropertyInfo(LINEINFO,IClassInfo *,unsigned short const *,PropertyInfo const * *);
		long ParseARGBColor(ParserTools::ExprNode const *,unsigned long *,bool *);
		long ParseArgs(ParserTools::ExprNode const *,DUIXmlParser::ParsedArg *,unsigned int,char const *);
		long ParseAtomValue(ParserTools::ExprNode const *,Value * *);
		long ParseBehavior(ParserTools::ExprNode const *);
		long ParseBehaviorArgValue(ParserTools::ExprNode const *,Value * *);
		long ParseBoolValue(ParserTools::ExprNode const *,Value * *);
		long ParseColor(ParserTools::ExprNode const *,unsigned long *);
		long ParseDFCFill(ParserTools::ExprNode const *,Value * *,bool *);
		long ParseDTBFill(ParserTools::ExprNode const *,Value * *,bool *);
		long ParseDoubleListValue(ParserTools::ExprNode const *,Value * *);
		long ParseFillValue(ParserTools::ExprNode const *,Value * *);
		long ParseFloat(ParserTools::ExprNode const *,float *,bool *);
		long ParseFloatValue(ParserTools::ExprNode const *,Value * *);
		long ParseFunction(unsigned short const *,ParserTools::ExprNode const *,DUIXmlParser::ParsedArg *,unsigned int,char const *);
		long ParseGTCColor(ParserTools::ExprNode const *,unsigned long *,bool *);
		long ParseGTFStr(ParserTools::ExprNode const *,Value * *,bool *);
		long ParseGTMarRect(ParserTools::ExprNode const *,ScaledRECT *,bool *);
		long ParseGTMetInt(ParserTools::ExprNode const *,int *,bool *);
		long ParseGTPartSize(ParserTools::ExprNode const *,ScaledSIZE *,bool *);
		long ParseGradientFill(ParserTools::ExprNode const *,Value * *,bool *);
		long ParseGraphicGraphic(ParserTools::ExprNode const *,Value * *,bool *);
		long ParseGraphicHelper(bool,ParserTools::ExprNode const *,Value * *);
		long ParseGraphicValue(ParserTools::ExprNode const *,Value * *);
		long ParseIconGraphic(ParserTools::ExprNode const *,Value * *,bool *);
		long ParseImageGraphic(ParserTools::ExprNode const *,Value * *,bool *);
		long ParseIntValue(ParserTools::ExprNode const *,Value * *);
		long ParseLayoutValue(ParserTools::ExprNode const *);
		long ParseLibrary(ParserTools::ExprNode const *,HINSTANCE__ * *);
		long ParseLiteral(ParserTools::ExprNode const *,unsigned short const * *);
		long ParseLiteralColor(unsigned short const *,unsigned long *);
		long ParseLiteralColorInt(unsigned short const *,int *);
		long ParseLiteralNumber(unsigned short const *,int *,bool *);
		long ParseMagnitude(unsigned short const *,int *,bool *);
		long ParseMagnitudeFloat(unsigned short const *,float *,bool *);
		long ParseNumber(ParserTools::ExprNode const *,int *,bool *);
		long ParsePointValue(ParserTools::ExprNode const *,Value * *);
		long ParseQuotedString(ParserTools::ExprNode const *,unsigned short const * *);
		long ParseRGBColor(ParserTools::ExprNode const *,unsigned long *,bool *);
		long ParseRect(ParserTools::ExprNode const *,ScaledRECT *);
		long ParseRectRect(ParserTools::ExprNode const *,ScaledRECT *,bool *);
		long ParseRectValue(ParserTools::ExprNode const *,Value * *);
		long ParseResStr(ParserTools::ExprNode const *,Value * *,bool *);
		long ParseResid(ParserTools::ExprNode const *,unsigned short const * *);
		long ParseSGraphicGraphic(ParserTools::ExprNode const *,Value * *,bool *);
		long ParseSGraphicHelper(bool,ParserTools::ExprNode const *,Value * *);
		long ParseSize(ParserTools::ExprNode const *,ScaledSIZE *);
		long ParseSizeSize(ParserTools::ExprNode const *,ScaledSIZE *,bool *);
		long ParseSizeValue(ParserTools::ExprNode const *,Value * *);
		long ParseStringValue(ParserTools::ExprNode const *,Value * *);
		long ParseStyleSheets(IXmlReader *);
		long ParseSysMetricInt(ParserTools::ExprNode const *,int *,bool *);
		long ParseSysMetricStr(ParserTools::ExprNode const *,Value * *,bool *);
		long ParseTheme(ParserTools::ExprNode const *,bool,void * *);
		long _BuildChildren(IXmlReader *,Element *);
		long _BuildElement(IXmlReader *,Element *,Element * *);
		long _BuildFromBinary(Element *,Element *,unsigned short const *,unsigned long *,Element * *);
		long _BuildStyles(IXmlReader *);
		long _CreateValue(unsigned short const *,PropertyInfo const *,Value * *);
		long _EnterOnCurrentThread();
		long _GetClassForElement(IXmlReader *,IClassInfo * *);
		long _GetClassForElementByName(unsigned short const *,IClassInfo * *);
		long _GetPropertyForAttribute(IXmlReader *,IClassInfo *,PropertyInfo const * *);
		long _GetValueForStyleSheet(IClassInfo *,unsigned short const *,unsigned short const *,PropertyInfo const * *,Value * *);
		long _ParseBehavior(Element *,unsigned short const *);
		long _ParseLayout(unsigned short const *,Value * *);
		long _ParseValue(PropertyInfo const *,unsigned short const *,Value * *);
		long _RecordElementBehaviors(IXmlReader *,unsigned short const *);
		long _RecordElementLayout(IXmlReader *,unsigned short const *);
		long _RecordElementStyleSheet(unsigned short const *,bool);
		long _RecordElementTrees(IXmlReader *);
		long _RecordElementWithChildren(IXmlReader *,bool,unsigned short * *);
		long _RecordInstantiateElement(IXmlReader *,unsigned short * *);
		long _RecordSetElementProperties(IXmlReader *);
		long _RecordSetValue(IXmlReader *,unsigned short const *,unsigned short const *);
		long _ResolveStyleSheet(unsigned short const *,Value * *,unsigned int *);
		long _SetBinaryXml(unsigned char const *,unsigned __int64,HINSTANCE__ *);
		long _SetProperties(IXmlReader *,IClassInfo *,Element *);
		long _SetXMLFromResource(unsigned short const *,unsigned short const *,HINSTANCE__ *,HINSTANCE__ *,HINSTANCE__ *);
		long _SetupParserState(HINSTANCE__ *,HINSTANCE__ *);
		static DUIXmlParser::FunctionDefinition<ScaledRECT> const * const s_fdRect;
		static DUIXmlParser::FunctionDefinition<ScaledSIZE> const * const s_fdSize;
		static DUIXmlParser::FunctionDefinition<Value *> const * const s_fdFill;
		static DUIXmlParser::FunctionDefinition<Value *> const * const s_fdGraphic;
		static DUIXmlParser::FunctionDefinition<Value *> const * const s_fdString;
		static DUIXmlParser::FunctionDefinition<int> const * const s_fdInt;
		static DUIXmlParser::FunctionDefinition<unsigned long> const * const s_fdClr;
		static bool IsThemeClassName(ParserTools::ExprNode const *);
		static long GetXmlLiteDll(HINSTANCE__ * *);
		unsigned short const * QuerySysMetricStr(int,unsigned short *,unsigned int);
		void ReturnValueParser(ParserTools::ValueParser *);
		void SendParseError(unsigned short const *,unsigned short const *,IXmlReader *,long);
		void SendParseError(unsigned short const *,unsigned short const *,int,int,long);
		void _LeaveOnCurrentThread();
	public:
		DUIXmlParser & operator=(DUIXmlParser const &);
		DUIXmlParser();
		DUIXmlParser(DUIXmlParser const &);
		HINSTANCE__ * GetHInstance();
		HINSTANCE__ * GetResourceHInstance();
		Value * (*GetGetSheetCallback())(unsigned short const *,void *);
		bool GetOverrideScaleFactor(float *);
		bool IsDynamicScaling();
		long CopySheets(DynamicArray<Value *,0> * *);
		long CreateElement(unsigned short const *,Element *,Element *,unsigned long *,Element * *);
		long GetSheet(unsigned short const *,Value * *);
		long LookupElement(IXmlReader *,unsigned short const *,HINSTANCE__ *,IClassInfo * *);
		long LookupElement(LINEINFO,unsigned short const *,HINSTANCE__ *,IClassInfo * *);
		long SetPreprocessedXML(unsigned short const *,HINSTANCE__ *,HINSTANCE__ *);
		long SetXML(unsigned short const *,HINSTANCE__ *,HINSTANCE__ *);
		long SetXMLFromResource(unsigned int,HINSTANCE__ *,HINSTANCE__ *);
		long SetXMLFromResource(unsigned int,unsigned short const *,HINSTANCE__ *,HINSTANCE__ *);
		long SetXMLFromResource(unsigned short const *,HINSTANCE__ *,HINSTANCE__ *);
		long SetXMLFromResource(unsigned short const *,unsigned short const *,HINSTANCE__ *,HINSTANCE__ *);
		long SetXMLFromResourceWithTheme(unsigned int,HINSTANCE__ *,HINSTANCE__ *,HINSTANCE__ *);
		long UpdateSheets(Element *);
		long _InitializeTables();
		static long Create(DUIXmlParser * *,Value * (*)(unsigned short const *,void *),void *,void (*)(unsigned short const *,unsigned short const *,int,void *),void *);
		virtual ~DUIXmlParser();
		void * GetSheetContext();
		void Destroy();
		void EnableDesignMode();
		void SetDefaultHInstance(HINSTANCE__ *);
		void SetDynamicScaling(DynamicScaleParsing);
		void SetGetSheetCallback(Value * (*)(unsigned short const *,void *),void *);
		void SetOverrideScaleFactor(float);
		void SetParseErrorCallback(void (*)(unsigned short const *,unsigned short const *,int,void *),void *);
		void SetScaleFactor(float);
		void SetUnavailableIcon(HICON__ *);
		void SetUnknownAttrCallback(bool (*)(unsigned short const *,void *),void *);
		void _DestroyTables();
	};

	struct DeferCycle
	{
		long Initialize();
		static long Create(DeferCycle * *);
		virtual ~DeferCycle();
		void _EndDefer(Element *);
	};

	class DialogElement
	{
		static IClassInfo * s_pClassInfo;
	public:
		DialogElement & operator=(DialogElement const &);
		DialogElement();
		DialogElement(DialogElement const &);
		long SetButtonClassAcceptsEnterKey(bool);
		long SetHandleEnterKey(bool);
		long SetRegisteredDefaultButton(Element *);
		static IClassInfo * GetClassInfoPtr();
		static PropertyInfo const * ButtonClassAcceptsEnterKeyProp();
		static PropertyInfo const * DefaultButtonTrackingProp();
		static PropertyInfo const * HandleEnterKeyProp();
		static PropertyInfo const * RegisteredDefaultButtonProp();
		static long Create(HWND__ *,bool,unsigned int,Element *,unsigned long *,Element * *);
		static long Register();
		static void SetClassInfoPtr(IClassInfo *);
		virtual Element * GetDefaultButton();
		virtual Element * GetKeyFocusedElement();
		virtual Element * GetRegisteredDefaultButton();
		virtual IClassInfo * GetClassInfoW();
		virtual bool ClickDefaultButton();
		virtual bool GetButtonClassAcceptsEnterKey();
		virtual bool GetDefaultButtonTracking();
		virtual bool GetHandleEnterKey();
		virtual bool OnChildLostFocus(Element *);
		virtual bool OnChildReceivedFocus(Element *);
		virtual bool OnListenedPropertyChanging(Element *,PropertyInfo const *,int,Value *,Value *);
		virtual long SetDefaultButtonTracking(bool);
		virtual void OnDestroy();
		virtual void OnGetDlgCode(tagMSG *,__int64 *);
		virtual void OnInput(InputEvent *);
		virtual void OnKeyFocusMoved(Element *,Element *);
		virtual void OnListenedEvent(Element *,Event *);
		virtual void OnListenedInput(Element *,InputEvent *);
		virtual void OnListenedPropertyChanged(Element *,PropertyInfo const *,int,Value *,Value *);
		virtual void OnListenerAttach(Element *);
		virtual void OnListenerDetach(Element *);
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
		virtual ~DialogElement();
	};

	class DialogElementCore
	{
	protected:
		static bool IsButtonEnabledAndVisible(Element *);
		void SetRegisteredDefaultButtonSelectedState(bool);
	public:
		DialogElementCore & operator=(DialogElementCore const &);
		Element * GetDefaultButton();
		bool ClickDefaultButton();
		bool OnChildLostFocus(Element *);
		bool OnChildReceivedFocus(Element *);
		void Initialize(IDialogElement *,IElementListener *);
		void OnDefaultButtonTrackingChanged(Value *);
		void OnDestroy();
		void OnGetDlgCode(tagMSG *,__int64 *);
		void OnInput(InputEvent *);
		void OnKeyFocusMoved(Element *,Element *);
		void OnListenerDetach(Element *);
		void OnRegisteredDefaultButtonChanged(Value *,Value *);
		void UpdateChildFocus(Element *,Element *);
	};

	class DuiAccessible
	{
	protected:
		long GetAccName(tagVARIANT,int,unsigned short * *);
		long GetAccNameFromContent(unsigned short * *);
		long GetDispatchFromElement(Element *,IDispatch * *);
	public:
		DuiAccessible();
		static Element * GetAccessibleParent(Element *);
		static long AccNavigate(Element *,long,Element * *);
		static long Create(Element *,DuiAccessible * *);
		virtual long Clone(IEnumVARIANT * *);
		virtual long ContextSensitiveHelp(int);
		virtual long Disconnect();
		virtual long GetIDsOfNames(_GUID const &,unsigned short * *,unsigned int,unsigned long,long *);
		virtual long GetIdentityString(unsigned long,unsigned char * *,unsigned long *);
		virtual long GetTypeInfo(unsigned int,unsigned long,ITypeInfo * *);
		virtual long GetTypeInfoCount(unsigned int *);
		virtual long GetWindow(HWND__ * *);
		virtual long Invoke(long,_GUID const &,unsigned long,unsigned short,tagDISPPARAMS *,tagVARIANT *,tagEXCEPINFO *,unsigned int *);
		virtual long Next(unsigned long,tagVARIANT *,unsigned long *);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual long QueryService(_GUID const &,_GUID const &,void * *);
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
		virtual ~DuiAccessible();
		void Initialize(Element *);
	};

	struct DuiNavigate
	{
		DuiNavigate & operator=(DuiNavigate const &);
		static Element * Navigate(Element *,DynamicArray<Element *,0> *,int);
	};

	class DuiPVLTrigger
	{
	protected:
		long EnsureObject();
	public:
		long TriggerCrossfade(Element *,Element *,bool,bool,bool,bool,unsigned long *);
		long TriggerFade(Element *,unsigned int,unsigned long *);
		~DuiPVLTrigger();
	};

	struct DynamicArray<BinaryFile::CBinaryFile::ResourcePosition,0>
	{
		static long Create(unsigned int,bool,DynamicArray<BinaryFile::CBinaryFile::ResourcePosition,0> * *);
	};

	struct DynamicArray<CBinaryXmlReader::ReaderState,0>
	{
		static long Create(unsigned int,bool,DynamicArray<CBinaryXmlReader::ReaderState,0> * *);
	};

	struct DynamicArray<CSafeElementPtr<Element> *,0>
	{
		static long Create(unsigned int,bool,DynamicArray<CSafeElementPtr<Element> *,0> * *);
	};

	struct DynamicArray<ContentTiler::TILE_INFO *,0>
	{
		static long Create(unsigned int,bool,DynamicArray<ContentTiler::TILE_INFO *,0> * *);
	};

	struct DynamicArray<DynamicArray<SafeElementIndexPair *,0> *,0>
	{
		static long Create(unsigned int,bool,DynamicArray<DynamicArray<SafeElementIndexPair *,0> *,0> * *);
	};

	struct DynamicArray<Element *,0>
	{
		long Clone(DynamicArray<Element *,0> * *);
		static long Create(unsigned int,bool,DynamicArray<Element *,0> * *);
	};

	struct DynamicArray<ElementGadgetTicketPair *,0>
	{
		static long Create(unsigned int,bool,DynamicArray<ElementGadgetTicketPair *,0> * *);
	};

	struct DynamicArray<GTRANS_DESC *,0>
	{
		static long Create(unsigned int,bool,DynamicArray<GTRANS_DESC *,0> * *);
	};

	struct DynamicArray<PVLAnimationNotifyCompleteEvent *,0>
	{
		static long Create(unsigned int,bool,DynamicArray<PVLAnimationNotifyCompleteEvent *,0> * *);
	};

	struct DynamicArray<PVLAnimationParentChangeEvent *,0>
	{
		static long Create(unsigned int,bool,DynamicArray<PVLAnimationParentChangeEvent *,0> * *);
	};

	struct DynamicArray<PVLAnimationRepositionEvent *,0>
	{
		static long Create(unsigned int,bool,DynamicArray<PVLAnimationRepositionEvent *,0> * *);
	};

	struct DynamicArray<ParserTools::ExprNode,0>
	{
		static long Create(unsigned int,bool,DynamicArray<ParserTools::ExprNode,0> * *);
	};

	struct DynamicArray<SafeElementIndexPair *,0>
	{
		static long Create(unsigned int,bool,DynamicArray<SafeElementIndexPair *,0> * *);
	};

	struct DynamicArray<StyleSheetCache::CSheetEntry *,0>
	{
		static long Create(unsigned int,bool,DynamicArray<StyleSheetCache::CSheetEntry *,0> * *);
	};

	struct DynamicArray<Value *,0>
	{
		static long Create(unsigned int,bool,DynamicArray<Value *,0> * *);
	};

	struct DynamicArray<XMLParserCond,0>
	{
		static long Create(unsigned int,bool,DynamicArray<XMLParserCond,0> * *);
	};

	struct DynamicArray<double,0>
	{
		static long Create(unsigned int,bool,DynamicArray<double,0> * *);
	};

	struct DynamicArray<int,0>
	{
		static long Create(unsigned int,bool,DynamicArray<int,0> * *);
	};

	struct DynamicArray<unsigned short *,0>
	{
		static long Create(unsigned int,bool,DynamicArray<unsigned short *,0> * *);
	};

	class DynamicArrayBase<BehaviorFactoryStore::BehaviorFactoryEntry,DoubleAllocationPolicy<BehaviorFactoryStore::BehaviorFactoryEntry>,1,0>
	{
		long SwitchToHeap(unsigned int);
	public:
		long InsertPtr(unsigned int,BehaviorFactoryStore::BehaviorFactoryEntry * *);
	};

	class DynamicArrayBase<BehaviorStore::BehaviorEntry,DoubleAllocationPolicy<BehaviorStore::BehaviorEntry>,1,0>
	{
		long SwitchToHeap(unsigned int);
		static long CHeapBuffer_Reserve(DynamicArrayBase<BehaviorStore::BehaviorEntry,DoubleAllocationPolicy<BehaviorStore::BehaviorEntry>,1,0> *,unsigned int);
	public:
		long InsertPtr(unsigned int,BehaviorStore::BehaviorEntry * *);
	};

	class DynamicArrayBase<BinaryFile::CBinaryFile::ResourcePosition,DoubleAllocationPolicy<BinaryFile::CBinaryFile::ResourcePosition>,1,0>
	{
		long SwitchToHeap(unsigned int);
		static long CHeapBuffer_InsertPtr(DynamicArrayBase<BinaryFile::CBinaryFile::ResourcePosition,DoubleAllocationPolicy<BinaryFile::CBinaryFile::ResourcePosition>,1,0> *,unsigned int,unsigned int,BinaryFile::CBinaryFile::ResourcePosition * *);
	public:
		long InsertPtr(unsigned int,BinaryFile::CBinaryFile::ResourcePosition * *);
	};

	class DynamicArrayBase<CBinaryXmlReader::ReaderState,DoubleAllocationPolicy<CBinaryXmlReader::ReaderState>,1,0>
	{
		long SwitchToHeap(unsigned int);
	public:
		long InsertPtr(unsigned int,CBinaryXmlReader::ReaderState * *);
	};

	class DynamicArrayBase<CSafeElementPtr<Element> *,DoubleAllocationPolicy<CSafeElementPtr<Element> *>,1,0>
	{
		long SwitchToHeap(unsigned int);
		static long CHeapBuffer_Reserve(DynamicArrayBase<CSafeElementPtr<Element> *,DoubleAllocationPolicy<CSafeElementPtr<Element> *>,1,0> *,unsigned int);
	public:
		long InsertPtr(unsigned int,CSafeElementPtr<Element> * * *);
		void DestroyDeep();
	};

	class DynamicArrayBase<ChildrenChange *,DoubleAllocationPolicy<ChildrenChange *>,1,0>
	{
		long SwitchToHeap(unsigned int);
		static long CHeapBuffer_InsertPtr(DynamicArrayBase<ChildrenChange *,DoubleAllocationPolicy<ChildrenChange *>,1,0> *,unsigned int,unsigned int,ChildrenChange * * *);
	public:
		long InsertPtr(unsigned int,ChildrenChange * * *);
	};

	class DynamicArrayBase<ClassData,ChunkAllocationPolicy<ClassData,3>,1,0>
	{
		long SwitchToHeap(unsigned int);
		static long CHeapBuffer_Reserve(DynamicArrayBase<ClassData,ChunkAllocationPolicy<ClassData,3>,1,0> *,unsigned int);
	public:
		long InsertPtr(unsigned int,ClassData * *);
	};

	class DynamicArrayBase<ClipRectWithElement *,DoubleAllocationPolicy<ClipRectWithElement *>,1,0>
	{
		long SwitchToHeap(unsigned int);
		static long CHeapBuffer_Reserve(DynamicArrayBase<ClipRectWithElement *,DoubleAllocationPolicy<ClipRectWithElement *>,1,0> *,unsigned int);
	public:
		long InsertPtr(unsigned int,ClipRectWithElement * * *);
		static long Create(unsigned int,bool,DynamicArrayBase<ClipRectWithElement *,DoubleAllocationPolicy<ClipRectWithElement *>,1,0> * *);
		void DestroyDeep();
	};

	class DynamicArrayBase<Cond,ChunkAllocationPolicy<Cond,1>,3,0>
	{
		long SwitchToHeap(unsigned int);
		static long CHeapBuffer_Reserve(DynamicArrayBase<Cond,ChunkAllocationPolicy<Cond,1>,3,0> *,unsigned int);
	};

	class DynamicArrayBase<Cond,DoubleAllocationPolicy<Cond>,1,0>
	{
		long SwitchToHeap(unsigned int);
	public:
		long InsertPtr(unsigned int,Cond * *);
	};

	struct DynamicArrayBase<CondMap,ChunkAllocationPolicy<CondMap,3>,1,0>
	{
		long InsertPtr(unsigned int,CondMap * *);
	};

	class DynamicArrayBase<ContentTiler::TILE_INFO *,DoubleAllocationPolicy<ContentTiler::TILE_INFO *>,1,0>
	{
		long SwitchToHeap(unsigned int);
		static long CHeapBuffer_Reserve(DynamicArrayBase<ContentTiler::TILE_INFO *,DoubleAllocationPolicy<ContentTiler::TILE_INFO *>,1,0> *,unsigned int);
	public:
		long InsertPtr(unsigned int,ContentTiler::TILE_INFO * * *);
	};

	class DynamicArrayBase<DUIParsePlayer *,DoubleAllocationPolicy<DUIParsePlayer *>,1,0>
	{
		long SwitchToHeap(unsigned int);
		static long CHeapBuffer_Reserve(DynamicArrayBase<DUIParsePlayer *,DoubleAllocationPolicy<DUIParsePlayer *>,1,0> *,unsigned int);
	public:
		long InsertPtr(unsigned int,DUIParsePlayer * * *);
	};

	class DynamicArrayBase<Decl,DoubleAllocationPolicy<Decl>,1,0>
	{
		long SwitchToHeap(unsigned int);
	public:
		long InsertPtr(unsigned int,Decl * *);
	};

	class DynamicArrayBase<DynamicArray<Impl::ParserCacheEntry,0> *,DoubleAllocationPolicy<DynamicArray<Impl::ParserCacheEntry,0> *>,1,0>
	{
		long SwitchToHeap(unsigned int);
	public:
		long SetSize(unsigned int);
		void Release();
	};

	class DynamicArrayBase<DynamicArray<SafeElementIndexPair *,0> *,DoubleAllocationPolicy<DynamicArray<SafeElementIndexPair *,0> *>,1,0>
	{
		long SwitchToHeap(unsigned int);
		static long CHeapBuffer_Reserve(DynamicArrayBase<DynamicArray<SafeElementIndexPair *,0> *,DoubleAllocationPolicy<DynamicArray<SafeElementIndexPair *,0> *>,1,0> *,unsigned int);
	public:
		long InsertPtr(unsigned int,DynamicArray<SafeElementIndexPair *,0> * * *);
		static long Create(unsigned int,bool,DynamicArrayBase<DynamicArray<SafeElementIndexPair *,0> *,DoubleAllocationPolicy<DynamicArray<SafeElementIndexPair *,0> *>,1,0> * *);
	};

	class DynamicArrayBase<DynamicArrayBase<Cond,ChunkAllocationPolicy<Cond,1>,3,0> *,DoubleAllocationPolicy<DynamicArrayBase<Cond,ChunkAllocationPolicy<Cond,1>,3,0> *>,1,0>
	{
		long SwitchToHeap(unsigned int);
	};

	class DynamicArrayBase<Element *,DoubleAllocationPolicy<Element *>,1,0>
	{
		long SwitchToHeap(unsigned int);
		static long CHeapBuffer_Reserve(DynamicArrayBase<Element *,DoubleAllocationPolicy<Element *>,1,0> *,unsigned int);
	public:
		bool IsEqual(DynamicArrayBase<Element *,DoubleAllocationPolicy<Element *>,1,0> const *);
		int GetIndexOf(Element *);
		long Clone(DynamicArrayBase<Element *,DoubleAllocationPolicy<Element *>,1,0> * *);
		long Initialize(unsigned int,bool);
		long InsertPtr(unsigned int,Element * * *);
		void Remove(unsigned int,unsigned int);
		void Sort(int (*)(void const *,void const *));
	};

	class DynamicArrayBase<ElementChildren *,DoubleAllocationPolicy<ElementChildren *>,1,0>
	{
		long SwitchToHeap(unsigned int);
		static long CHeapBuffer_Reserve(DynamicArrayBase<ElementChildren *,DoubleAllocationPolicy<ElementChildren *>,1,0> *,unsigned int);
	public:
		long InsertPtr(unsigned int,ElementChildren * * *);
	};

	class DynamicArrayBase<ElementGadgetTicketPair *,DoubleAllocationPolicy<ElementGadgetTicketPair *>,1,0>
	{
		long SwitchToHeap(unsigned int);
		static long CHeapBuffer_Reserve(DynamicArrayBase<ElementGadgetTicketPair *,DoubleAllocationPolicy<ElementGadgetTicketPair *>,1,0> *,unsigned int);
	public:
		long InsertPtr(unsigned int,ElementGadgetTicketPair * * *);
	};

	class DynamicArrayBase<ElementProvider *,DoubleAllocationPolicy<ElementProvider *>,1,0>
	{
		long SwitchToHeap(unsigned int);
		static long CHeapBuffer_Reserve(DynamicArrayBase<ElementProvider *,DoubleAllocationPolicy<ElementProvider *>,1,0> *,unsigned int);
	public:
		long InsertPtr(unsigned int,ElementProvider * * *);
	};

	class DynamicArrayBase<ElementRuntimeId,DoubleAllocationPolicy<ElementRuntimeId>,1,0>
	{
		long SwitchToHeap(unsigned int);
		static long CHeapBuffer_InsertPtr(DynamicArrayBase<ElementRuntimeId,DoubleAllocationPolicy<ElementRuntimeId>,1,0> *,unsigned int,unsigned int,ElementRuntimeId * *);
	public:
		long InsertPtr(unsigned int,ElementRuntimeId * *);
	};

	struct DynamicArrayBase<GCRecord,DoubleAllocationPolicy<GCRecord>,1,20>
	{
		long InsertPtr(unsigned int,GCRecord * *);
	};

	class DynamicArrayBase<GTRANS_DESC *,DoubleAllocationPolicy<GTRANS_DESC *>,1,0>
	{
		long SwitchToHeap(unsigned int);
		static long CHeapBuffer_Reserve(DynamicArrayBase<GTRANS_DESC *,DoubleAllocationPolicy<GTRANS_DESC *>,1,0> *,unsigned int);
	public:
		long InsertPtr(unsigned int,GTRANS_DESC * * *);
	};

	class DynamicArrayBase<HandleCache::HANDLEMAP,DoubleAllocationPolicy<HandleCache::HANDLEMAP>,1,0>
	{
		long SwitchToHeap(unsigned int);
		static long CHeapBuffer_InsertPtr(DynamicArrayBase<HandleCache::HANDLEMAP,DoubleAllocationPolicy<HandleCache::HANDLEMAP>,1,0> *,unsigned int,unsigned int,HandleCache::HANDLEMAP * *);
	public:
		long InsertPtr(unsigned int,HandleCache::HANDLEMAP * *);
	};

	class DynamicArrayBase<IDCompositionVisual *,DoubleAllocationPolicy<IDCompositionVisual *>,1,0>
	{
		long SwitchToHeap(unsigned int);
		static long CHeapBuffer_Reserve(DynamicArrayBase<IDCompositionVisual *,DoubleAllocationPolicy<IDCompositionVisual *>,1,0> *,unsigned int);
	public:
		long InsertPtr(unsigned int,IDCompositionVisual * * *);
		static long Create(unsigned int,bool,DynamicArrayBase<IDCompositionVisual *,DoubleAllocationPolicy<IDCompositionVisual *>,1,0> * *);
	};

	class DynamicArrayBase<IRawElementProviderSimple *,DoubleAllocationPolicy<IRawElementProviderSimple *>,1,0>
	{
		long SwitchToHeap(unsigned int);
		static long CHeapBuffer_Reserve(DynamicArrayBase<IRawElementProviderSimple *,DoubleAllocationPolicy<IRawElementProviderSimple *>,1,0> *,unsigned int);
	public:
		long InsertPtr(unsigned int,IRawElementProviderSimple * * *);
	};

	class DynamicArrayBase<Impl::ParserCacheEntry,DoubleAllocationPolicy<Impl::ParserCacheEntry>,1,0>
	{
		long SwitchToHeap(unsigned int);
	public:
		long InsertPtr(unsigned int,Impl::ParserCacheEntry * *);
	};

	class DynamicArrayBase<InvokeHelper *,DoubleAllocationPolicy<InvokeHelper *>,1,0>
	{
		long SwitchToHeap(unsigned int);
		static long CHeapBuffer_Reserve(DynamicArrayBase<InvokeHelper *,DoubleAllocationPolicy<InvokeHelper *>,1,0> *,unsigned int);
	public:
		long InsertPtr(unsigned int,InvokeHelper * * *);
	};

	struct DynamicArrayBase<PCRecord,DoubleAllocationPolicy<PCRecord>,1,20>
	{
		long InsertPtr(unsigned int,PCRecord * *);
	};

	class DynamicArrayBase<PVLAnimationNotifyCompleteEvent *,DoubleAllocationPolicy<PVLAnimationNotifyCompleteEvent *>,1,0>
	{
		long SwitchToHeap(unsigned int);
		static long CHeapBuffer_Reserve(DynamicArrayBase<PVLAnimationNotifyCompleteEvent *,DoubleAllocationPolicy<PVLAnimationNotifyCompleteEvent *>,1,0> *,unsigned int);
	public:
		long InsertPtr(unsigned int,PVLAnimationNotifyCompleteEvent * * *);
	};

	class DynamicArrayBase<PVLAnimationParentChangeEvent *,DoubleAllocationPolicy<PVLAnimationParentChangeEvent *>,1,0>
	{
		long SwitchToHeap(unsigned int);
		static long CHeapBuffer_Reserve(DynamicArrayBase<PVLAnimationParentChangeEvent *,DoubleAllocationPolicy<PVLAnimationParentChangeEvent *>,1,0> *,unsigned int);
	public:
		long InsertPtr(unsigned int,PVLAnimationParentChangeEvent * * *);
	};

	class DynamicArrayBase<PVLAnimationRepositionEvent *,DoubleAllocationPolicy<PVLAnimationRepositionEvent *>,1,0>
	{
		long SwitchToHeap(unsigned int);
		static long CHeapBuffer_Reserve(DynamicArrayBase<PVLAnimationRepositionEvent *,DoubleAllocationPolicy<PVLAnimationRepositionEvent *>,1,0> *,unsigned int);
	public:
		long InsertPtr(unsigned int,PVLAnimationRepositionEvent * * *);
	};

	class DynamicArrayBase<ParserTools::ExprNode,DoubleAllocationPolicy<ParserTools::ExprNode>,1,0>
	{
		long SwitchToHeap(unsigned int);
	public:
		long InsertPtr(unsigned int,ParserTools::ExprNode * *);
	};

	class DynamicArrayBase<PropertyData,ChunkAllocationPolicy<PropertyData,2>,2,0>
	{
		long SwitchToHeap(unsigned int);
		static long CHeapBuffer_Reserve(DynamicArrayBase<PropertyData,ChunkAllocationPolicy<PropertyData,2>,2,0> *,unsigned int);
	public:
		long InsertPtr(unsigned int,PropertyData * *);
	};

	class DynamicArrayBase<PropertyInfo const *,ChunkAllocationPolicy<PropertyInfo const *,2>,1,0>
	{
		long SwitchToHeap(unsigned int);
	public:
		long InsertPtr(unsigned int,PropertyInfo const * * *);
	};

	class DynamicArrayBase<PropertyInfo const *,ChunkAllocationPolicy<PropertyInfo const *,4>,1,0>
	{
		long SwitchToHeap(unsigned int);
	public:
		long InsertPtr(unsigned int,PropertyInfo const * * *);
	};

	class DynamicArrayBase<RectangleChange *,DoubleAllocationPolicy<RectangleChange *>,1,0>
	{
		long SwitchToHeap(unsigned int);
		static long CHeapBuffer_Reserve(DynamicArrayBase<RectangleChange *,DoubleAllocationPolicy<RectangleChange *>,1,0> *,unsigned int);
	public:
		long InsertPtr(unsigned int,RectangleChange * * *);
	};

	class DynamicArrayBase<ReplayStackFrame,DoubleAllocationPolicy<ReplayStackFrame>,1,0>
	{
		long SwitchToHeap(unsigned int);
	public:
		long InsertPtr(unsigned int,ReplayStackFrame * *);
	};

	class DynamicArrayBase<RichTextGlyphRun *,DoubleAllocationPolicy<RichTextGlyphRun *>,1,0>
	{
		long SwitchToHeap(unsigned int);
		static long CHeapBuffer_Reserve(DynamicArrayBase<RichTextGlyphRun *,DoubleAllocationPolicy<RichTextGlyphRun *>,1,0> *,unsigned int);
	public:
		long InsertPtr(unsigned int,RichTextGlyphRun * * *);
	};

	class DynamicArrayBase<RowLayout *,DoubleAllocationPolicy<RowLayout *>,1,0>
	{
		long SwitchToHeap(unsigned int);
		static long CHeapBuffer_InsertPtr(DynamicArrayBase<RowLayout *,DoubleAllocationPolicy<RowLayout *>,1,0> *,unsigned int,unsigned int,RowLayout * * *);
	public:
		int GetIndexOf(RowLayout *);
		long InsertPtr(unsigned int,RowLayout * * *);
	};

	class DynamicArrayBase<RowLayoutSharedInfo *,DoubleAllocationPolicy<RowLayoutSharedInfo *>,1,0>
	{
		long SwitchToHeap(unsigned int);
		static long CHeapBuffer_Reserve(DynamicArrayBase<RowLayoutSharedInfo *,DoubleAllocationPolicy<RowLayoutSharedInfo *>,1,0> *,unsigned int);
	public:
		long InsertPtr(unsigned int,RowLayoutSharedInfo * * *);
	};

	class DynamicArrayBase<SCHED_GTRANS *,DoubleAllocationPolicy<SCHED_GTRANS *>,1,0>
	{
		long SwitchToHeap(unsigned int);
		static long CHeapBuffer_Reserve(DynamicArrayBase<SCHED_GTRANS *,DoubleAllocationPolicy<SCHED_GTRANS *>,1,0> *,unsigned int);
	public:
		long InsertPtr(unsigned int,SCHED_GTRANS * * *);
	};

	class DynamicArrayBase<SafeElementIndexPair *,DoubleAllocationPolicy<SafeElementIndexPair *>,1,0>
	{
		long SwitchToHeap(unsigned int);
		static long CHeapBuffer_Reserve(DynamicArrayBase<SafeElementIndexPair *,DoubleAllocationPolicy<SafeElementIndexPair *>,1,0> *,unsigned int);
	public:
		long InsertPtr(unsigned int,SafeElementIndexPair * * *);
		static long Create(unsigned int,bool,DynamicArrayBase<SafeElementIndexPair *,DoubleAllocationPolicy<SafeElementIndexPair *>,1,0> * *);
		void DestroyDeep();
		void Sort(int (*)(void const *,void const *));
	};

	class DynamicArrayBase<StyleSheetCache::CSheetEntry *,DoubleAllocationPolicy<StyleSheetCache::CSheetEntry *>,1,0>
	{
		long SwitchToHeap(unsigned int);
		static long CHeapBuffer_Reserve(DynamicArrayBase<StyleSheetCache::CSheetEntry *,DoubleAllocationPolicy<StyleSheetCache::CSheetEntry *>,1,0> *,unsigned int);
	public:
		long InsertPtr(unsigned int,StyleSheetCache::CSheetEntry * * *);
	};

	class DynamicArrayBase<TILE *,DoubleAllocationPolicy<TILE *>,1,0>
	{
		long SwitchToHeap(unsigned int);
		static long CHeapBuffer_Reserve(DynamicArrayBase<TILE *,DoubleAllocationPolicy<TILE *>,1,0> *,unsigned int);
	public:
		long InsertPtr(unsigned int,TILE * * *);
	};

	class DynamicArrayBase<Value *,DoubleAllocationPolicy<Value *>,1,0>
	{
		long SwitchToHeap(unsigned int);
	public:
		bool IsEqual(DynamicArrayBase<Value *,DoubleAllocationPolicy<Value *>,1,0> const *);
		long InsertPtr(unsigned int,Value * * *);
	};

	class DynamicArrayBase<XMLParserCond,DoubleAllocationPolicy<XMLParserCond>,1,0>
	{
		long SwitchToHeap(unsigned int);
		static long CHeapBuffer_Reserve(DynamicArrayBase<XMLParserCond,DoubleAllocationPolicy<XMLParserCond>,1,0> *,unsigned int);
	public:
		long InsertPtr(unsigned int,XMLParserCond * *);
		static long Create(unsigned int,bool,DynamicArrayBase<XMLParserCond,DoubleAllocationPolicy<XMLParserCond>,1,0> * *);
	};

	class DynamicArrayBase<double,DoubleAllocationPolicy<double>,1,0>
	{
		long SwitchToHeap(unsigned int);
		static long CHeapBuffer_Reserve(DynamicArrayBase<double,DoubleAllocationPolicy<double>,1,0> *,unsigned int);
	public:
		bool IsEqual(DynamicArrayBase<double,DoubleAllocationPolicy<double>,1,0> const *);
		long Clone(DynamicArrayBase<double,DoubleAllocationPolicy<double>,1,0> * *);
		long Initialize(unsigned int,bool);
		long InsertPtr(unsigned int,double * *);
		void Sort(int (*)(void const *,void const *));
	};

	class DynamicArrayBase<int,DoubleAllocationPolicy<int>,1,0>
	{
		long SwitchToHeap(unsigned int);
		static long CHeapBuffer_Reserve(DynamicArrayBase<int,DoubleAllocationPolicy<int>,1,0> *,unsigned int);
	public:
		long Initialize(unsigned int,bool);
		long InsertPtr(unsigned int,int * *);
	};

	class DynamicArrayBase<tagPOINT,DoubleAllocationPolicy<tagPOINT>,1,0>
	{
		long SwitchToHeap(unsigned int);
		static long CHeapBuffer_Reserve(DynamicArrayBase<tagPOINT,DoubleAllocationPolicy<tagPOINT>,1,0> *,unsigned int);
	public:
		long Clone(DynamicArrayBase<tagPOINT,DoubleAllocationPolicy<tagPOINT>,1,0> * *);
	};

	class DynamicArrayBase<unsigned int,DoubleAllocationPolicy<unsigned int>,1,0>
	{
		long SwitchToHeap(unsigned int);
		static long CHeapBuffer_InsertPtr(DynamicArrayBase<unsigned int,DoubleAllocationPolicy<unsigned int>,1,0> *,unsigned int,unsigned int,unsigned int * *);
	public:
		long InsertPtr(unsigned int,unsigned int * *);
	};

	class DynamicArrayBase<unsigned long,DoubleAllocationPolicy<unsigned long>,1,0>
	{
		long SwitchToHeap(unsigned int);
		static long CHeapBuffer_Reserve(DynamicArrayBase<unsigned long,DoubleAllocationPolicy<unsigned long>,1,0> *,unsigned int);
	public:
		bool Find(unsigned long const &,unsigned int *);
		long InsertPtr(unsigned int,unsigned long * *);
	};

	class DynamicArrayBase<unsigned short *,DoubleAllocationPolicy<unsigned short *>,1,0>
	{
		long SwitchToHeap(unsigned int);
		static long CHeapBuffer_Reserve(DynamicArrayBase<unsigned short *,DoubleAllocationPolicy<unsigned short *>,1,0> *,unsigned int);
	public:
		long InsertPtr(unsigned int,unsigned short * * *);
	};

	class DynamicArrayBase<unsigned short const *,DoubleAllocationPolicy<unsigned short const *>,1,0>
	{
		long SwitchToHeap(unsigned int);
	public:
		long InsertPtr(unsigned int,unsigned short const * * *);
	};

	class Edit
	{
		static IClassInfo * s_pClassInfo;
		unsigned int GetTextHeight();
		void PropertyChangedCore(PropertyInfo const *,int,Value *,HWND__ *);
	protected:
		virtual HWND__ * CreateHWND(HWND__ *);
		virtual HWND__ * CreateHWND(HWND__ *,bool);
	public:
		Edit & operator=(Edit const &);
		Edit();
		Edit(Edit const &);
		bool GetDirty();
		bool GetMultiline();
		bool GetThemedBorder();
		bool GetWantTabs();
		int GetMaxLength();
		int GetPasswordCharacter();
		long Initialize(unsigned int,Element *,unsigned long *);
		long SetDirty(bool);
		long SetMaxLength(int);
		long SetMultiline(bool);
		long SetPasswordCharacter(int);
		long SetThemedBorder(bool);
		long SetWantTabs(bool);
		static IClassInfo * GetClassInfoPtr();
		static PropertyInfo const * DirtyProp();
		static PropertyInfo const * MaxLengthProp();
		static PropertyInfo const * MultilineProp();
		static PropertyInfo const * PasswordCharacterProp();
		static PropertyInfo const * ThemedBorderProp();
		static PropertyInfo const * WantTabsProp();
		static UID Enter();
		static long Create(Element *,unsigned long *,Element * *);
		static long Create(unsigned int,Element *,unsigned long *,Element * *);
		static long Register();
		static void SetClassInfoPtr(IClassInfo *);
		virtual IClassInfo * GetClassInfoW();
		virtual bool IsContentProtected();
		virtual bool OnNotify(unsigned int,unsigned __int64,__int64,__int64 *);
		virtual tagSIZE GetContentSize(int,int,Surface *);
		virtual unsigned int MessageCallback(tagGMSG *);
		virtual unsigned short const * GetContentStringAsDisplayed(Value * *);
		virtual void OnInput(InputEvent *);
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
		virtual ~Edit();
	};

	class Element
	{
		struct Impl
		{
			static _RTL_CRITICAL_SECTION s_csPciMap;
		};

		Element * FindDescendentWorker(unsigned short);
		Value * _GetComputedValue(PropertyInfo const *,UpdateCache *);
		Value * _GetLocalValue(PropertyInfo const *);
		Value * _GetLocalValueFromVM(PropertyInfo const *);
		Value * _GetSpecifiedValue(PropertyInfo const *,UpdateCache *);
		Value * _GetSpecifiedValueIgnoreCache(PropertyInfo const *);
		bool IsPointValid(double,double);
		bool TryLinePattern(tagPOINT *,tagRECT const &);
		bool TryPattern(double,double,tagPOINT *,tagRECT const &);
		bool TrySparsePattern(tagPOINT *,tagRECT const &);
		int _CachedValueIsEqual(PropertyInfo const *,Element *);
		long GetTheme(unsigned short const *,void * *);
		long _GetDependencies(PropertyInfo const *,int,DepRecs *,int,Value *,DeferCycle *);
		long _PostSourceChange();
		long _PreSourceChange(PropertyInfo const * (*)(),int,Value *,Value *);
		long _PreSourceChange(PropertyInfo const *,int,Value *,Value *);
		long _SetRelPixRect(PropertyInfo const *,int,int,int,int);
		long _SetRelPixValue(PropertyInfo const *,int);
		static IClassInfo * s_pClassInfo;
		static bool s_HandleDUIEventMessage(Element *,EventMsg *);
		static void _VoidPCNotifyTree(int,DeferCycle *);
		unsigned int GetCommonDrawTextFlags(int);
		unsigned short * RemoveShortcutFromName(unsigned short const *);
		void _BroadcastEventWorker(Event *);
		void _FlushDS(DeferCycle *);
		void _GetBuriedSheetDependencies(PropertyInfo const *,Element *,DepRecs *,DeferCycle *,long *);
		void _InheritProperties();
		void _PostEvent(Event *,int);
		void _SyncBackground();
		void _SyncRedrawStyle();
		void _SyncVisible();
		void _UpdatePropertyInCache(PropertyInfo const *);
	protected:
		long _RemoveLocalValue(PropertyInfo const * (*)(),bool);
		long _RemoveLocalValue(PropertyInfo const *,bool);
		long _SetValue(PropertyInfo const * (*)(),int,Value *,bool);
		long _SetValue(PropertyInfo const *,int,Value *,bool);
		static void _FlushLayout(Element *,DeferCycle *);
		static void _InvalidateCachedDSConstraints(Element *);
		virtual tagSIZE _SelfLayoutUpdateDesiredSize(int,int,Surface *);
		virtual void ActivateTooltip(Element *,unsigned long);
		virtual void OnHosted(Element *);
		virtual void OnUnHosted(Element *);
		virtual void RemoveTooltip(Element *);
		virtual void UpdateTooltip(Element *);
		virtual void _SelfLayoutDoLayout(int,int);
		void MarkHosted();
		void MarkSelfLayout();
		void _Fill(HDC__ *,unsigned long,int,int,int,int,bool);
		void _OnFontPropChanged(Value *);
	public:
		DeferCycle * GetDeferObject();
		DeferCycle * TestDeferObject();
		DynamicArray<Element *,0> * GetChildren(Value * *);
		Element & operator=(Element const &);
		Element * FindDescendent(unsigned short);
		Element * GetImmediateChild(Element *);
		Element * GetKeyWithinChild();
		Element * GetMouseWithinChild();
		Element * GetParent();
		Element * GetRoot();
		Element * GetTopLevel();
		Element();
		Element(Element const &);
		Fill const * GetBackgroundColor(Value * *);
		Fill const * GetBorderColor(Value * *);
		Fill const * GetEdgeHighlightColor(Value * *);
		Fill const * GetForegroundColor(Value * *);
		HGADGET__ * GetDisplayNode();
		Layout * GetLayout(Value * *);
		StyleSheet * GetSheet();
		Value * GetRawValue(PropertyInfo const *,int,UpdateCache *);
		Value * GetValue(PropertyInfo const * (*)(),int,UpdateCache *);
		Value * GetValue(PropertyInfo const *,int,UpdateCache *);
		bool EnsureVisible();
		bool EnsureVisible(unsigned int);
		bool GetAbsorbsShortcut();
		bool GetAccessible();
		bool GetClickablePoint(tagPOINT *);
		bool GetEnabled();
		bool GetHighDPI();
		bool GetKeyWithin();
		bool GetMouseFocused();
		bool GetMouseWithin();
		bool GetOverhang();
		bool GetPreserveAlphaChannel();
		bool GetSelected();
		bool GetTooltip();
		bool GetVisible();
		bool GetWindowActive();
		bool HasAnimation();
		bool HasBorder();
		bool HasChildren();
		bool HasContent();
		bool HasEdgeHighlight();
		bool HasLayout();
		bool HasMargin();
		bool HasPVLAnimationState(unsigned int);
		bool HasPadding();
		bool IsBehaviorLayout();
		bool IsCompositedText();
		bool IsDefaultCAlign();
		bool IsDefaultCursor();
		bool IsDescendent(Element *);
		bool IsDestroyed();
		bool IsHosted();
		bool IsRTL();
		bool IsSelfLayout();
		bool IsValidAccessor(PropertyInfo const *,int,bool);
		bool IsWordWrap();
		bool NeedsDSUpdate();
		bool UiaEvents();
		float GetElementScaleFactor();
		float GetTreeAlphaLevel();
		int GetAccRole();
		int GetAccState();
		int GetActive();
		int GetAlpha();
		int GetAnimation();
		int GetBackgroundStdColor();
		int GetBorderStdColor();
		int GetBorderStyle();
		int GetColorize();
		int GetContentAlign();
		int GetDPI();
		int GetDirection();
		int GetFontQuality();
		int GetFontSize();
		int GetFontStyle();
		int GetFontWeight();
		int GetForegroundStdColor();
		int GetHeight();
		int GetIndex();
		int GetLayoutPos();
		int GetPVLAnimationState();
		int GetShadowIntensity();
		int GetShortcut();
		int GetTextGlowSize();
		int GetTooltipMaxWidth();
		int GetWidth();
		int GetX();
		int GetY();
		int IsRoot();
		int _GetChangesUpdatePass();
		int _SetNeedsLayout(unsigned int);
		long Add(Element *);
		long Add(Element *,int (*)(void const *,void const *));
		long AddListener(IElementListener *);
		long Destroy(bool);
		long DestroyAll(bool);
		long GetEncodedContentString(unsigned short *,unsigned __int64);
		long GetRootRelativeBounds(tagRECT *);
		long Initialize(unsigned int,Element *,unsigned long *);
		long Insert(Element *,unsigned int);
		long QueueDefaultAction();
		long Remove(Element *);
		long RemoveAll();
		long RemoveLocalValue(PropertyInfo const * (*)());
		long RemoveLocalValue(PropertyInfo const *);
		long SetAbsorbsShortcut(bool);
		long SetAccDefAction(unsigned short const *);
		long SetAccDesc(unsigned short const *);
		long SetAccHelp(unsigned short const *);
		long SetAccItemStatus(unsigned short const *);
		long SetAccItemType(unsigned short const *);
		long SetAccName(unsigned short const *);
		long SetAccRole(int);
		long SetAccState(int);
		long SetAccValue(unsigned short const *);
		long SetAccessible(bool);
		long SetActive(int);
		long SetAlpha(int);
		long SetAnimation(int);
		long SetBackgroundColor(Fill const &);
		long SetBackgroundColor(unsigned long);
		long SetBackgroundColor(unsigned long,unsigned long,unsigned char);
		long SetBackgroundColor(unsigned long,unsigned long,unsigned long,unsigned char);
		long SetBackgroundColor(unsigned short const *,int,int);
		long SetBackgroundStdColor(int);
		long SetBorderColor(unsigned long);
		long SetBorderGradientColor(unsigned long,unsigned long,unsigned char);
		long SetBorderStdColor(int);
		long SetBorderStyle(int);
		long SetBorderThickness(int,int,int,int);
		long SetClass(unsigned short const *);
		long SetCompositedText(bool);
		long SetContentAlign(int);
		long SetContentGraphic(unsigned short const *,unsigned char,unsigned int);
		long SetContentGraphic(unsigned short const *,unsigned short,unsigned short);
		long SetContentString(unsigned short const *);
		long SetCursor(unsigned short const *);
		long SetCursorHandle(HICON__ *);
		long SetDirection(int);
		long SetEdgeHighlightColor(unsigned long);
		long SetEdgeHighlightThickness(int,int,int,int);
		long SetEnabled(bool);
		long SetEncodedContentString(unsigned short const *);
		long SetFont(unsigned short const *);
		long SetFontFace(unsigned short const *);
		long SetFontQuality(int);
		long SetFontSize(int);
		long SetFontStyle(int);
		long SetFontWeight(int);
		long SetForegroundColor(unsigned long);
		long SetForegroundColor(unsigned long,unsigned long,unsigned char);
		long SetForegroundColor(unsigned long,unsigned long,unsigned long,unsigned char);
		long SetForegroundStdColor(int);
		long SetHeight(int);
		long SetID(unsigned short const *);
		long SetLayout(Layout *);
		long SetLayoutPos(int);
		long SetMargin(int,int,int,int);
		long SetMinSize(int,int);
		long SetOverhang(bool);
		long SetPadding(int,int,int,int);
		long SetRelPixHeight(int);
		long SetRelPixMargin(int,int,int,int);
		long SetRelPixPadding(int,int,int,int);
		long SetRelPixWidth(int);
		long SetSelected(bool);
		long SetShadowIntensity(int);
		long SetSheet(StyleSheet *);
		long SetShortcut(int);
		long SetStdCursor(int);
		long SetTextGlowSize(int);
		long SetTooltip(bool);
		long SetTooltipMaxWidth(int);
		long SetValue(PropertyInfo const * (*)(),int,Value *);
		long SetValue(PropertyInfo const *,int,Value *);
		long SetVisible(bool);
		long SetWidth(int);
		long SetWindowActive(bool);
		long SetX(int);
		long SetY(int);
		long ShiftChild(unsigned int,unsigned int);
		long SortChildren(int (*)(void const *,void const *));
		static IClassInfo * GetClassInfoPtr();
		static PropertyInfo const * AbsorbsShortcutProp();
		static PropertyInfo const * AccDefActionProp();
		static PropertyInfo const * AccDescProp();
		static PropertyInfo const * AccHelpProp();
		static PropertyInfo const * AccItemStatusProp();
		static PropertyInfo const * AccItemTypeProp();
		static PropertyInfo const * AccNameProp();
		static PropertyInfo const * AccRoleProp();
		static PropertyInfo const * AccStateProp();
		static PropertyInfo const * AccValueProp();
		static PropertyInfo const * AccessibleProp();
		static PropertyInfo const * ActiveProp();
		static PropertyInfo const * AlphaProp();
		static PropertyInfo const * AnimationProp();
		static PropertyInfo const * BackgroundProp();
		static PropertyInfo const * BorderColorProp();
		static PropertyInfo const * BorderStyleProp();
		static PropertyInfo const * BorderThicknessProp();
		static PropertyInfo const * ChildrenProp();
		static PropertyInfo const * ClassProp();
		static PropertyInfo const * CompositedTextProp();
		static PropertyInfo const * ContentAlignProp();
		static PropertyInfo const * ContentProp();
		static PropertyInfo const * CursorProp();
		static PropertyInfo const * CustomProp();
		static PropertyInfo const * DPIProp();
		static PropertyInfo const * DesiredSizeProp();
		static PropertyInfo const * DirectionProp();
		static PropertyInfo const * EdgeHighlightColorProp();
		static PropertyInfo const * EdgeHighlightThicknessProp();
		static PropertyInfo const * EnabledProp();
		static PropertyInfo const * ExtentProp();
		static PropertyInfo const * FontFaceProp();
		static PropertyInfo const * FontProp();
		static PropertyInfo const * FontQualityProp();
		static PropertyInfo const * FontSizeProp();
		static PropertyInfo const * FontStyleProp();
		static PropertyInfo const * FontWeightProp();
		static PropertyInfo const * ForegroundProp();
		static PropertyInfo const * HeightProp();
		static PropertyInfo const * HighDPIProp();
		static PropertyInfo const * IDProp();
		static PropertyInfo const * KeyFocusedProp();
		static PropertyInfo const * KeyWithinProp();
		static PropertyInfo const * LastDSConstProp();
		static PropertyInfo const * LayoutPosProp();
		static PropertyInfo const * LayoutProp();
		static PropertyInfo const * LocationProp();
		static PropertyInfo const * MarginProp();
		static PropertyInfo const * MinSizeProp();
		static PropertyInfo const * MouseFocusedProp();
		static PropertyInfo const * MouseWithinProp();
		static PropertyInfo const * OverhangProp();
		static PropertyInfo const * PaddingProp();
		static PropertyInfo const * ParentProp();
		static PropertyInfo const * PosInLayoutProp();
		static PropertyInfo const * ScaleFactorProp();
		static PropertyInfo const * SelectedProp();
		static PropertyInfo const * ShadowIntensityProp();
		static PropertyInfo const * SheetProp();
		static PropertyInfo const * ShortcutProp();
		static PropertyInfo const * SizeInLayoutProp();
		static PropertyInfo const * TextGlowSizeProp();
		static PropertyInfo const * TooltipMaxWidthProp();
		static PropertyInfo const * TooltipProp();
		static PropertyInfo const * UsesDesktopPerMonitorScalingProp();
		static PropertyInfo const * VisibleProp();
		static PropertyInfo const * WidthProp();
		static PropertyInfo const * WindowActiveProp();
		static PropertyInfo const * XProp();
		static PropertyInfo const * YProp();
		static UID AnimationChange();
		static UID DCompDeviceRebuilt();
		static UID KeyboardNavigate();
		static _RTL_CRITICAL_SECTION * GetFactoryLock();
		static bool IsValidValue(PropertyInfo const *,Value *);
		static bool _SetGroupChanges(Element *,int,DeferCycle *);
		static int _MarkElementForDS(Element *);
		static int _MarkElementForLayout(Element *,unsigned int);
		static long Create(unsigned int,Element *,unsigned long *,Element * *);
		static long Register();
		static long UnRegister(IClassInfo * *);
		static long _DisplayNodeCallback(HGADGET__ *,void *,EventMsg *);
		static void SetClassInfoPtr(IClassInfo *);
		static void _AddDependency(Element *,PropertyInfo const *,int,DepRecs *,DeferCycle *,long *);
		static void _TransferGroupFlags(Element *,int);
		tagPOINT const * GetLocation(Value * *);
		tagRECT const * GetBorderThickness(Value * *);
		tagRECT const * GetEdgeHighlightThickness(Value * *);
		tagRECT const * GetMargin(Value * *);
		tagRECT const * GetPadding(Value * *);
		tagSIZE _UpdateDesiredSize(int,int,Surface *);
		tagSIZE const * GetDesiredSize();
		tagSIZE const * GetExtent(Value * *);
		tagSIZE const * GetMinSize(Value * *);
		unsigned __int64 GetEncodedContentStringLength();
		unsigned int _GetNeedsLayout();
		unsigned long AddRef();
		unsigned long Release();
		unsigned short GetID();
		unsigned short GetShortcutChar();
		unsigned short const * GetAccDefAction(Value * *);
		unsigned short const * GetAccDesc(Value * *);
		unsigned short const * GetAccHelp(Value * *);
		unsigned short const * GetAccItemStatus(Value * *);
		unsigned short const * GetAccItemType(Value * *);
		unsigned short const * GetAccName(Value * *);
		unsigned short const * GetAccNameAsDisplayed(Value * *);
		unsigned short const * GetAccValue(Value * *);
		unsigned short const * GetClass(Value * *);
		unsigned short const * GetContentString(Value * *);
		unsigned short const * GetFont(Value * *);
		unsigned short const * GetFontFace(Value * *);
		virtual Element * GetAdjacent(Element *,int,NavReference const *,unsigned long);
		virtual Element * GetUiaFocusDelegate();
		virtual IClassInfo * GetClassInfoW();
		virtual bool EnsureVisible(int,int,int,int);
		virtual bool GetKeyFocused();
		virtual bool IsContentProtected();
		virtual bool IsRTLReading();
		virtual bool OnPropertyChanging(PropertyInfo *,int,Value *,Value *);
		virtual bool OnPropertyChanging(PropertyInfo const *,int,Value *,Value *);
		virtual long Add(Element * *,unsigned int);
		virtual long AddBehavior(IDuiBehavior *);
		virtual long DefaultAction();
		virtual long GetAccessibleImpl(IAccessible * *);
		virtual long GetElementProviderImpl(InvokeHelper *,ElementProvider * *);
		virtual long GetUIAElementProvider(_GUID const &,void * *);
		virtual long Insert(Element * *,unsigned int,unsigned int);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual long Remove(Element * *,unsigned int);
		virtual long RemoveBehavior(IDuiBehavior *);
		virtual tagSIZE GetContentSize(int,int,Surface *);
		virtual unsigned int MessageCallback(tagGMSG *);
		virtual unsigned short const * GetContentStringAsDisplayed(Value * *);
		virtual void GetImmersiveFocusRectOffsets(tagRECT *);
		virtual void HandleUiaDestroyListener();
		virtual void HandleUiaEventListener(Event *);
		virtual void HandleUiaPropertyChangingListener(PropertyInfo const *);
		virtual void HandleUiaPropertyListener(PropertyInfo const *,int,Value *,Value *);
		virtual void OnDestroy();
		virtual void OnEvent(Event *);
		virtual void OnGroupChanged(int,bool);
		virtual void OnInput(InputEvent *);
		virtual void OnKeyFocusMoved(Element *,Element *);
		virtual void OnMouseFocusMoved(Element *,Element *);
		virtual void OnPropertyChanged(PropertyInfo *,int,Value *,Value *);
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
		virtual void Paint(HDC__ *,tagRECT const *,tagRECT const *,tagRECT *,tagRECT *);
		virtual void SetKeyFocus();
		virtual ~Element();
		void BroadcastEvent(Event *);
		void Detach(DeferCycle *);
		void DoubleBuffered(bool);
		void EnableUiaEvents(bool);
		void EndDefer(unsigned long);
		void FireEvent(Event *,bool,bool);
		void GetRenderBorderThickness(tagRECT *);
		void GetRenderEdgeHighlightThickness(tagRECT *);
		void GetRenderMargin(tagRECT *);
		void GetRenderMinSize(tagSIZE *);
		void GetRenderPadding(tagRECT *);
		void InvokeAnimation(int,unsigned int);
		void InvokeAnimation(unsigned int,unsigned int,float,float,bool);
		void MapElementPoint(Element *,tagPOINT const *,tagPOINT *);
		void MarkNeedsDSUpdate();
		void PaintBackground(HDC__ *,Value *,tagRECT const &,tagRECT const &,tagRECT const &,tagRECT const &);
		void PaintBorder(HDC__ *,Value *,tagRECT *,tagRECT const &);
		void PaintContent(HDC__ *,tagRECT const *);
		void PaintEdgeHighlight(HDC__ *,tagRECT const &,tagRECT const &);
		void PaintFocusRect(HDC__ *,tagRECT const *,tagRECT const *);
		void PaintStringContent(HDC__ *,tagRECT const *,Value *,int);
		void RemoveListener(IElementListener *);
		void SetLayoutCompletionNotify(bool);
		void SetOverrideScaleFactor(float);
		void SetPVLAnimationState(int);
		void SetPreserveAlphaChannel(bool);
		void StartDefer(unsigned long *);
		void StopAnimation(unsigned int);
		void UpdateLayout();
		void _ClearNeedsLayout();
		void _EndOptimizedLayoutQ();
		void _StartOptimizedLayoutQ();
		void _UpdateLayoutPosition(int,int);
		void _UpdateLayoutSize(int,int);
	};

	class ElementClassInfo
	{
		static long Create(PropertyInfo const * const *,unsigned int,IClassInfo * *);
	public:
		virtual HINSTANCE__ * GetModule();
		virtual IClassInfo * GetBaseClass();
		virtual PropertyInfo const * EnumPropertyInfo(unsigned int);
		virtual PropertyInfo const * GetByClassIndex(unsigned int);
		virtual bool IsGlobal();
		virtual bool IsSubclassOf(IClassInfo *);
		virtual bool IsValidProperty(PropertyInfo const *);
		virtual int GetChildren();
		virtual int Release();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual unsigned int GetGlobalIndex();
		virtual unsigned int GetPICount();
		virtual unsigned short const * GetName();
		virtual void AddChild();
		virtual void AddRef();
		virtual void AssertPIZeroRef();
		virtual void Destroy();
		virtual void RemoveChild();
	};

	class ElementProvider
	{
	protected:
		long DoInvoke(int,...);
		virtual long Init(Element *,InvokeHelper *);
	public:
		Element const * GetElementKey();
		ElementProvider();
		long DoInvokeArgs(int,ProviderProxy * (*)(Element *),char *);
		static long Create(Element *,InvokeHelper *,ElementProvider * *);
		virtual Element const volatile * GetElement();
		virtual ProviderProxy * (*GetProxyCreator())(Element *);
		virtual long AdviseEventAdded(int,tagSAFEARRAY *);
		virtual long AdviseEventRemoved(int,tagSAFEARRAY *);
		virtual long GetEmbeddedFragmentRoots(tagSAFEARRAY * *);
		virtual long GetPatternProvider(int,IUnknown * *);
		virtual long GetPropertyValue(int,tagVARIANT *);
		virtual long GetRuntimeId(tagSAFEARRAY * *);
		virtual long Navigate(NavigateDirection,IRawElementProviderFragment * *);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual long SetFocus();
		virtual long ShowContextMenu();
		virtual long get_BoundingRectangle(UiaRect *);
		virtual long get_FragmentRoot(IRawElementProviderFragmentRoot * *);
		virtual long get_HostRawElementProvider(IRawElementProviderSimple * *);
		virtual long get_ProviderOptions(ProviderOptions *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
		virtual void TossElement();
		virtual ~ElementProvider();
		void TossPatternProvider(Schema::Pattern);
	};

	class ElementProviderManager
	{
		static UiaArray<ElementProvider *> * g_pArrayPprv;
		static bool FindProviderCallback(ElementProvider *,void *);
	public:
		ElementProviderManager & operator=(ElementProviderManager const &);
		static ElementProvider * Find(Element *);
		static _RTL_CRITICAL_SECTION g_cs;
		static long Add(ElementProvider *);
		static long GetProvider<IRawElementProviderFragment>(Element *,IRawElementProviderFragment * *);
		static long GetProvider<IRawElementProviderFragment>(Element *,InvokeHelper *,IRawElementProviderFragment * *);
		static long GetProvider<IRawElementProviderFragmentRoot>(Element *,InvokeHelper *,IRawElementProviderFragmentRoot * *);
		static long GetProvider<IRawElementProviderSimple>(Element *,IRawElementProviderSimple * *);
		static long GetProvider<IRawElementProviderSimple>(Element *,InvokeHelper *,IRawElementProviderSimple * *);
		static long Init();
		static void Close();
		static void Remove(ElementProvider *);
	};

	class ElementProxy
	{
		bool _IsSemanticZoomControl(int);
		bool _IsWindowHostUsingDoNotStealFocusFlag();
	protected:
		ElementProxy();
		int _UsesUIAProxies();
		long GetAutomationId(tagVARIANT *);
		long GetBoundingRect(UiaRect *);
		long GetContent(tagVARIANT *,IAccessible *);
		long GetFragmentRoot(IRawElementProviderFragmentRoot * *);
		long GetHwnd(HWND__ * *);
		long GetLabel(tagVARIANT *);
		long GetProperty(tagVARIANT *,int);
		long GetProviderOptions(ProviderOptions *);
		long GetRuntimeId(tagSAFEARRAY * *);
		long IsPatternSupported(Schema::Pattern,bool *);
		long Navigate(NavigateDirection,IRawElementProviderFragment * *);
		long SetString(tagVARIANT *,unsigned short const * ( Element::*)(Value * *));
		virtual void Init(Element *);
		void GetControlType(tagVARIANT *,IAccessible *);
	public:
		ElementProxy & operator=(ElementProxy const &);
		ElementProxy(ElementProxy const &);
		static ElementProxy * Create(Element *);
		virtual long DoMethod(int,char *);
	};

	class ElementWithHWND
	{
		static IClassInfo * s_pClassInfo;
	public:
		ElementWithHWND & operator=(ElementWithHWND const &);
		ElementWithHWND();
		ElementWithHWND(ElementWithHWND const &);
		static IClassInfo * GetClassInfoPtr();
		static long Create(Element *,unsigned long *,Element * *);
		static long Register();
		static void SetClassInfoPtr(IClassInfo *);
		virtual IClassInfo * GetClassInfoW();
		virtual ~ElementWithHWND();
	};

	class EventManager
	{
		static UiaArray<int> * g_pArrayPropertyEvent;
		static _RTL_CRITICAL_SECTION g_cs;
		static bool WantEvent(Schema::Event,int);
		static bool g_fWantAnyEvent;
		static int const cChangeBulk;
		static long AddRectangleChange(Element *,bool,bool);
		static long GetBool(tagVARIANT *,Value *);
		static long GetInt(tagVARIANT *,Value *);
		static long GetString(tagVARIANT *,Value *);
		static long HandleAccChange(Element *,IRawElementProviderSimple *,Value *,Value *);
		static long HandleAccDesc(Element *,IRawElementProviderSimple *,Value *,Value *);
		static long HandleAccPatternChange(Element *,IRawElementProviderSimple *,unsigned int,unsigned int,int,tagVARIANT *,tagVARIANT *,void (*)(tagVARIANT *));
		static long HandleAccRoleEvent(IRawElementProviderSimple *,Value *,Value *);
		static long HandleAccStateChange(IRawElementProviderSimple *,unsigned int,unsigned int,int,tagVARIANT *,tagVARIANT *,bool);
		static long HandleBoolProp(Element *,bool (*)(Element *),IRawElementProviderSimple *,int,Value *,Value *);
		static long HandleChildrenEvent(Element *,Value *,Value *);
		static long HandleRangeValue(Element *,IRawElementProviderSimple *,Value *,Value *);
		static long HandleScrollPos(Element *,IRawElementProviderSimple *,Value *,Value *);
		static long HandleSelectedChange(IRawElementProviderSimple *,Value *);
		static long HandleStringProp(IRawElementProviderSimple *,int,Value *,Value *);
		static long HandleToggleValue(Element *,IRawElementProviderSimple *,Value *,Value *);
		static long HandleVisibilityChange(Element *,unsigned int);
		static long RaiseChildRemovedEvent(ElementRuntimeId const &,Element *);
		static long RaiseGeometryEventWorker(RectangleChange *,bool,bool,bool,bool);
		static long RaiseGeometryEvents();
		static long RaiseStructureChangedEvent(Element *,StructureChangeType);
		static long RaiseStructureEvents();
		static long RaiseVisibilityEvents();
		static unsigned int * g_eventRegisteredMap;
		static void GetExpandCollapseState(tagVARIANT *);
		static void GetToggleState(tagVARIANT *);
	public:
		EventManager & operator=(EventManager const &);
		static bool FWantAnyEvent(Element *);
		static bool WantEvent(Schema::Event);
		static bool WantPropertyEvent(int);
		static long AdviseEventAdded(int,tagSAFEARRAY *);
		static long AdviseEventRemoved(int,tagSAFEARRAY *);
		static long EndDefer(Element *);
		static long EventListener(Element *,Event *);
		static long FireStructureChangedEvent(Element *,StructureChangeType);
		static long Init();
		static long OnToolTip(Element *,unsigned long);
		static long PropertyChangingListener(Element *,PropertyInfo const *,bool *);
		static long PropertyListener(Element *,PropertyInfo const *,int,Value *,Value *);
		static void Close();
		static void DestroyListener(Element *);
	};

	class ExpandCollapseBehavior
	{
	protected:
		static _GUID const * const * const s_rgpIID;
	public:
		static long Create(IDuiBehavior * *);
		virtual long GetCallbackFilters(DuiBehaviorFilters::Flags *);
		virtual long Init(Value *);
		virtual long OnEvent(Element *,Event *);
		virtual long OnPropertyChanged(Element *,PropertyInfo const *,int,Value *,Value *);
	};

	struct ExpandCollapseProvider
	{
		ExpandCollapseProvider();
		virtual ProviderProxy * (*GetProxyCreator())(Element *);
		virtual long Collapse();
		virtual long Expand();
		virtual long QueryInterface(_GUID const &,void * *);
		virtual long get_ExpandCollapseState(ExpandCollapseState *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
		virtual ~ExpandCollapseProvider();
	};

	class ExpandCollapseProxy
	{
	protected:
		virtual void Init(Element *);
	public:
		ExpandCollapseProxy & operator=(ExpandCollapseProxy const &);
		ExpandCollapseProxy();
		ExpandCollapseProxy(ExpandCollapseProxy const &);
		static ExpandCollapseProxy * Create(Element *);
		static bool IsPatternSupported(Element *);
		virtual long DoMethod(int,char *);
	};

	class Expandable
	{
		static IClassInfo * s_pClassInfo;
	public:
		Expandable & operator=(Expandable const &);
		Expandable();
		Expandable(Expandable const &);
		bool GetExpanded();
		long SetExpanded(bool);
		static IClassInfo * GetClassInfoPtr();
		static PropertyInfo const * ExpandedProp();
		static long Create(Element *,unsigned long *,Element * *);
		static long Register();
		static void SetClassInfoPtr(IClassInfo *);
		virtual IClassInfo * GetClassInfoW();
		virtual ~Expandable();
	};

	class Expando
	{
		static IClassInfo * s_pClassInfo;
		static unsigned short _atmArrow;
		static unsigned short _atmClipper;
	protected:
		static unsigned short Arrow();
		static unsigned short Clipper();
		void UpdateChildren(Value *);
	public:
		Expando & operator=(Expando const &);
		Expando();
		Expando(Expando const &);
		long Initialize(Element *,unsigned long *);
		static IClassInfo * GetClassInfoPtr();
		static long Create(Element *,unsigned long *,Element * *);
		static long Register();
		static void SetClassInfoPtr(IClassInfo *);
		virtual IClassInfo * GetClassInfoW();
		virtual long Add(Element * *,unsigned int);
		virtual void OnEvent(Event *);
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
		virtual ~Expando();
	};

	class ExpandoButtonGlyph
	{
		static IClassInfo * s_pClassInfo;
	public:
		ExpandoButtonGlyph & operator=(ExpandoButtonGlyph const &);
		ExpandoButtonGlyph();
		ExpandoButtonGlyph(ExpandoButtonGlyph const &);
		long Initialize(unsigned int,Element *,unsigned long *);
		static IClassInfo * GetClassInfoPtr();
		static long Create(Element *,unsigned long *,Element * *);
		static long Create(unsigned int,Element *,unsigned long *,Element * *);
		static long Register();
		static void SetClassInfoPtr(IClassInfo *);
		virtual IClassInfo * GetClassInfoW();
		virtual bool OnLostDialogFocus(IDialogElement *);
		virtual bool OnReceivedDialogFocus(IDialogElement *);
		virtual ~ExpandoButtonGlyph();
	};

	struct Expression
	{
		Expression & operator=(Expression const &);
		void Destroy();
	};

	struct FillLayout
	{
		FillLayout & operator=(FillLayout const &);
		FillLayout();
		FillLayout(FillLayout const &);
		static long Create(Layout * *);
		static long Create(int,int *,Value * *);
		virtual Element * GetAdjacent(Element *,Element *,int,NavReference const *,unsigned long);
		virtual tagSIZE UpdateDesiredSize(Element *,int,int,Surface *);
		virtual void DoLayout(Element *,int,int);
		virtual ~FillLayout();
		void Initialize();
	};

	class FlowLayout
	{
	protected:
		static tagSIZE SizeZero();
		tagSIZE BuildCacheInfo(Element *,int,int,Surface *,bool);
	public:
		FlowLayout & operator=(FlowLayout const &);
		FlowLayout();
		FlowLayout(FlowLayout const &);
		int GetLine(Element *,Element *);
		static long Create(bool,unsigned int,unsigned int,unsigned int,Layout * *);
		static long Create(int,int *,Value * *);
		virtual Element * GetAdjacent(Element *,Element *,int,NavReference const *,unsigned long);
		virtual tagSIZE UpdateDesiredSize(Element *,int,int,Surface *);
		virtual void DoLayout(Element *,int,int);
		virtual ~FlowLayout();
		void Initialize(bool,unsigned int,unsigned int,unsigned int);
	};

	struct FontCache
	{
		FontCache & operator=(FontCache const &);
		FontCache();
		FontCache(FontCache const &);
		static long InitProcess();
		static long InitThread();
		static void UninitProcess();
		static void UninitThread();
	};

	struct FontCacheImpl
	{
		long Initialize();
		virtual HBRUSH__ * AcquireBrush(HBITMAP__ *,void *);
		virtual HFONT__ * CheckOutFont(unsigned short const *,int,int,int,int,int);
		virtual void CheckInFont();
		virtual void ReleaseBrush();
		void CleanCache();
		void ReleaseBrushes();
		void ReleaseFonts();
	};

	struct FontCheckOut
	{
		FontCheckOut & operator=(FontCheckOut const &);
		FontCheckOut(Element *,HDC__ *);
		~FontCheckOut();
	};

	class GdiTextRenderer
	{
		long _EnsureRenderTarget();
		void _DrawEffectRect(float,float,float,float,float,IUnknown *);
		void _InitDCBrush();
		void _UpdateDrawingEffects(IUnknown *);
	public:
		GdiTextRenderer(RichTextShared *);
		long Begin(HDC__ *,tagRECT const *,tagRECT const *,int,bool,unsigned long,RichTextCache *);
		virtual long DrawGlyphRun(void *,float,float,DWRITE_MEASURING_MODE,DWRITE_GLYPH_RUN const *,DWRITE_GLYPH_RUN_DESCRIPTION const *,IUnknown *);
		virtual long DrawInlineObject(void *,float,float,IDWriteInlineObject *,int,int,IUnknown *);
		virtual long DrawStrikethrough(void *,float,float,DWRITE_STRIKETHROUGH const *,IUnknown *);
		virtual long DrawUnderline(void *,float,float,DWRITE_UNDERLINE const *,IUnknown *);
		virtual long GetCurrentTransform(void *,DWRITE_MATRIX *);
		virtual long GetPixelsPerDip(void *,float *);
		virtual long IsPixelSnappingDisabled(void *,int *);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
		void End();
	};

	struct GridItemProvider
	{
		GridItemProvider();
		virtual ProviderProxy * (*GetProxyCreator())(Element *);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual long get_Column(int *);
		virtual long get_ColumnSpan(int *);
		virtual long get_ContainingGrid(IRawElementProviderSimple * *);
		virtual long get_Row(int *);
		virtual long get_RowSpan(int *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
		virtual ~GridItemProvider();
	};

	class GridItemProxy
	{
		long GetColumn(int *);
		long GetContainingGrid(IRawElementProviderSimple * *);
		long GetRow(int *);
	protected:
		virtual void Init(Element *);
	public:
		GridItemProxy & operator=(GridItemProxy const &);
		GridItemProxy();
		GridItemProxy(GridItemProxy const &);
		static GridItemProxy * Create(Element *);
		static bool IsPatternSupported(Element *);
		virtual long DoMethod(int,char *);
	};

	class GridLayout
	{
	protected:
		unsigned int GetCurrentCols(Element *);
		unsigned int GetCurrentCols(int);
		unsigned int GetCurrentRows(Element *);
		unsigned int GetCurrentRows(int);
	public:
		GridLayout & operator=(GridLayout const &);
		GridLayout();
		GridLayout(GridLayout const &);
		static long Create(int,int *,Value * *);
		static long Create(int,int,Layout * *);
		virtual Element * GetAdjacent(Element *,Element *,int,NavReference const *,unsigned long);
		virtual tagSIZE UpdateDesiredSize(Element *,int,int,Surface *);
		virtual void DoLayout(Element *,int,int);
		virtual ~GridLayout();
		void Initialize(int,int);
	};

	struct GridProvider
	{
		GridProvider();
		virtual ProviderProxy * (*GetProxyCreator())(Element *);
		virtual long GetItem(int,int,IRawElementProviderSimple * *);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual long get_ColumnCount(int *);
		virtual long get_RowCount(int *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
		virtual ~GridProvider();
	};

	class GridProxy
	{
		long GetColumnCount(int *);
		long GetItem(unsigned int,unsigned int,IRawElementProviderSimple * *);
		long GetRowCount(int *);
	protected:
		virtual void Init(Element *);
	public:
		GridProxy & operator=(GridProxy const &);
		GridProxy();
		GridProxy(GridProxy const &);
		static GridProxy * Create(Element *);
		static bool IsPatternSupported(Element *);
		virtual long DoMethod(int,char *);
	};

	class HWNDElement
	{
		int _UpdateDesktopScaleFactor();
		static IClassInfo * s_pClassInfo;
	protected:
		int _GetPerMonitorScaleFactorForDesktopWindow(HWND__ *);
		static bool FindShortcutRecursive(unsigned short,Element *,Element * *,int *,int *,int);
		virtual void _OnUIStateChanged(unsigned short,unsigned short);
		void UpdateStyleSheets();
		void _FireWindowDpiChangeEvent();
		void _HandleImmersiveColorSchemeChange();
	public:
		Element * ElementFromPoint(tagPOINT *);
		HWNDElement & operator=(HWNDElement const &);
		HWNDElement();
		HWNDElement(HWNDElement const &);
		bool GetWrapKeyboardNavigate();
		bool IsFirstElement(Element *);
		bool IsLastElement(Element *);
		bool ShouldUseDesktopPerMonitorScaling();
		bool ShowAccel();
		bool ShowFocus();
		long Initialize(HWND__ *,bool,unsigned int,Element *,unsigned long *);
		long SetWrapKeyboardNavigate(bool);
		static Element * GetKeyFocusedElement();
		static HWNDElement * GetFocusedHWNDElement();
		static IClassInfo * GetClassInfoPtr();
		static PropertyInfo const * WrapKeyboardNavigateProp();
		static UID CompositionChange();
		static UID ImmersiveColorSchemeChange();
		static UID ThemeChange();
		static UID WindowDpiChanged();
		static __int64 StaticWndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
		static bool FindShortcut(unsigned short,Element *,Element * *,int *,int *,int);
		static long Create(HWND__ *,bool,unsigned int,Element *,unsigned long *,Element * *);
		static long Register();
		static void SetClassInfoPtr(IClassInfo *);
		unsigned short GetUIState();
		virtual HWND__ * GetHWND();
		virtual IClassInfo * GetClassInfoW();
		virtual __int64 WndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
		virtual bool CanSetFocus();
		virtual bool IsMSAAEnabled();
		virtual long CreateStyleParser(DUIXmlParser * *);
		virtual long GetAccessibleImpl(IAccessible * *);
		virtual void ActivateTooltip(Element *,unsigned long);
		virtual void GetWindowClassNameAndStyle(unsigned short const * *,unsigned int *);
		virtual void OnCompositionChanged();
		virtual void OnDestroy();
		virtual void OnEvent(Event *);
		virtual void OnGetDlgCode(tagMSG *,__int64 *);
		virtual void OnGroupChanged(int,bool);
		virtual void OnImmersiveColorSchemeChanged();
		virtual void OnInput(InputEvent *);
		virtual void OnNoChildWithShortcutFound(KeyboardEvent *);
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
		virtual void OnThemeChanged(ThemeChangedEvent *);
		virtual void OnWmSettingChanged(unsigned __int64,__int64);
		virtual void OnWmThemeChanged(unsigned __int64,__int64);
		virtual void RemoveTooltip(Element *);
		virtual void UpdateTooltip(Element *);
		virtual ~HWNDElement();
		void DelayActivateTooltip();
		void FlushWorkingSet();
		void SetFocus(bool);
		void SetParentSizeControl(bool);
		void SetScreenCenter(bool);
		void ShowUIState(bool,bool);
		void ToggleUIState(bool,bool);
	};

	struct HWNDElementAccessible
	{
		HWNDElementAccessible();
		long Initialize(HWNDElement *);
		static long Create(HWNDElement *,DuiAccessible * *);
		virtual long Disconnect();
		virtual long get_accParent(IDispatch * *);
		virtual ~HWNDElementAccessible();
	};

	class HWNDElementProvider
	{
	protected:
		virtual long Init(HWNDElement *,InvokeHelper *);
	public:
		HWNDElementProvider();
		static long Create(HWNDElement *,InvokeHelper *,HWNDElementProvider * *);
		virtual ProviderProxy * (*GetProxyCreator())(Element *);
		virtual long ElementProviderFromPoint(double,double,IRawElementProviderFragment * *);
		virtual long GetFocus(IRawElementProviderFragment * *);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
		virtual ~HWNDElementProvider();
	};

	class HWNDElementProxy
	{
	protected:
		HWNDElementProxy();
		long ElementFromPoint(double,double,IRawElementProviderFragment * *);
		long GetFocus(IRawElementProviderFragment * *);
	public:
		HWNDElementProxy & operator=(HWNDElementProxy const &);
		HWNDElementProxy(HWNDElementProxy const &);
		static HWNDElementProxy * Create(HWNDElement *);
		virtual long DoMethod(int,char *);
		virtual void Init(HWNDElement *);
	};

	class HWNDHost
	{
		bool HaveWin32Focus();
		long GetAccessibleImpl(IAccessible * *,bool);
		static IClassInfo * s_pClassInfo;
		static int _CtrlWndProc(void *,HWND__ *,unsigned int,unsigned __int64,__int64,__int64 *);
		static int _SinkWndProc(void *,HWND__ *,unsigned int,unsigned __int64,__int64,__int64 *);
		static unsigned int const (* g_rgMouseMap)[3];
		void ApplySinkRegion(tagRECT const *,bool);
		void GetSinkRect(tagRECT const *,tagRECT *);
		void SyncColorsAndFonts();
		void UnvirtualizePosition();
		void _DeleteCtrlWnd();
	protected:
		Element * GetBackgroundOwner();
		HFONT__ * GetFont();
		HWND__ * CreateAccNameLabel(HWND__ *);
		bool GetStaticColor(HDC__ *,HBRUSH__ * *);
		bool IsMoveDeferred();
		int GetThemeChanged();
		int VerifyParentage();
		long SetThemeChanged(int);
		static __int64 CtrlSubclassProc(HWND__ *,unsigned int,unsigned __int64,__int64);
		static void AttachCtrlSubclassProc(HWND__ *);
		virtual HWND__ * CreateHWND(HWND__ *);
		virtual bool EraseBkgnd(HDC__ *,__int64 *);
		virtual void OnHosted(Element *);
		virtual void OnUnHosted(Element *);
		void PrintRTLControl(HDC__ *,HDC__ *,tagRECT const &);
		void SyncBackground();
		void SyncDirection();
		void SyncFont();
		void SyncForeground();
		void SyncParent();
		void SyncRect(unsigned int,bool);
		void SyncStyle();
		void SyncText();
		void SyncVisible();
	public:
		HWNDHost & operator=(HWNDHost const &);
		HWNDHost();
		HWNDHost(HWNDHost const &);
		HWND__ * GetHWNDParent();
		bool GetOptimizeMove();
		bool GetTransparent();
		long GetClientAccessibleImpl(IAccessible * *);
		long Initialize(unsigned int,unsigned int,Element *,unsigned long *);
		long SetBackgroundOwnerID(unsigned short const *);
		long SetOptimizeMove(bool);
		long SetTransparent(bool);
		static IClassInfo * GetClassInfoPtr();
		static PropertyInfo const * BackgroundOwnerIDProp();
		static PropertyInfo const * OptimizeMoveProp();
		static PropertyInfo const * ThemeChangedProp();
		static PropertyInfo const * TransparentProp();
		static long Create(Element *,unsigned long *,Element * *);
		static long Create(unsigned int,unsigned int,Element *,unsigned long *,Element * *);
		static long Register();
		static void SetClassInfoPtr(IClassInfo *);
		unsigned short GetBackgroundOwnerID();
		virtual HWND__ * GetHWND();
		virtual IClassInfo * GetClassInfoW();
		virtual bool GetKeyFocused();
		virtual bool OnCtrlThemeChanged(unsigned int,unsigned __int64,__int64,__int64 *);
		virtual bool OnMessage(unsigned int,unsigned __int64,__int64,__int64 *);
		virtual bool OnNotify(unsigned int,unsigned __int64,__int64,__int64 *);
		virtual bool OnSinkThemeChanged(unsigned int,unsigned __int64,__int64,__int64 *);
		virtual bool OnSysChar(unsigned short);
		virtual int OnAdjustWindowSize(int,int,unsigned int);
		virtual long GetAccessibleImpl(IAccessible * *);
		virtual unsigned int MessageCallback(tagGMSG *);
		virtual void OnDestroy();
		virtual void OnEvent(Event *);
		virtual void OnInput(InputEvent *);
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
		virtual void OnWindowStyleChanged(unsigned __int64,tagSTYLESTRUCT const *);
		virtual void Paint(HDC__ *,tagRECT const *,tagRECT const *,tagRECT *,tagRECT *);
		virtual void SetKeyFocus();
		virtual void SetWindowDirection(HWND__ *);
		virtual ~HWNDHost();
		void Detach();
	};

	struct HWNDHostAccessible
	{
		HWNDHostAccessible();
		long Initialize(Element *,IAccessible *);
		static long Create(Element *,IAccessible *,DuiAccessible * *);
		virtual long Clone(IEnumVARIANT * *);
		virtual long ContextSensitiveHelp(int);
		virtual long Disconnect();
		virtual long GetIdentityString(unsigned long,unsigned char * *,unsigned long *);
		virtual long GetWindow(HWND__ * *);
		virtual long Next(unsigned long,tagVARIANT *,unsigned long *);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual long QueryService(_GUID const &,_GUID const &,void * *);
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
		virtual ~HWNDHostAccessible();
	};

	struct HWNDHostClientAccessible
	{
		HWNDHostClientAccessible();
		static long Create(Element *,IAccessible *,DuiAccessible * *);
		virtual long accNavigate(long,tagVARIANT,tagVARIANT *);
		virtual long get_accParent(IDispatch * *);
		virtual long get_accRole(tagVARIANT,tagVARIANT *);
		virtual ~HWNDHostClientAccessible();
	};

	struct HandleCache
	{
		long GetHandle(unsigned short const *,int,void * *);
		void FlushHandles();
	};

	struct IDataEngine
	{
		IDataEngine & operator=(IDataEngine const &);
		IDataEngine();
		IDataEngine(IDataEngine const &);
		virtual ~IDataEngine();
	};

	struct IDataEntry
	{
		IDataEntry & operator=(IDataEntry const &);
		IDataEntry();
		IDataEntry(IDataEntry const &);
		virtual ~IDataEntry();
	};

	struct IProvider
	{
		IProvider & operator=(IProvider const &);
		IProvider();
		IProvider(IProvider const &);
	};

	struct ISBLeak
	{
		ISBLeak & operator=(ISBLeak const &);
		ISBLeak();
		ISBLeak(ISBLeak const &);
	};

	struct IXElementCP
	{
		IXElementCP & operator=(IXElementCP const &);
		IXElementCP();
		IXElementCP(IXElementCP const &);
	};

	struct IXProviderCP
	{
		IXProviderCP & operator=(IXProviderCP const &);
		IXProviderCP();
		IXProviderCP(IXProviderCP const &);
	};

	class ImmersiveColorInfo
	{
		void Clear();
	public:
		HBRUSH__ * GetBrush(int);
		unsigned long GetColor(int);
	};

	namespace Impl
	{
		class CParserCache
		{
			long _GetBucket(unsigned long,DynamicArray<ParserCacheEntry,0> * *);
		public:
			CParserCache();
			long RuntimeClassInitialize();
			virtual long AddLayout(unsigned long,long (*)(int,int *,Value * *),int,int *);
			virtual long ClearStoredClasses();
			virtual long CreateLayout(unsigned long,Value * *);
			virtual long Find(unsigned long,IClassInfo * *);
			virtual long Find(unsigned long,Value * *);
			virtual long Store(unsigned long,IClassInfo *);
			virtual long Store(unsigned long,Value *);
			virtual ~CParserCache();
		};

	};

	namespace Internal
	{
		class CElementListenerNop
		{
			virtual bool OnListenedPropertyChanging(Element *,PropertyInfo const *,int,Value *,Value *);
			virtual void OnListenedEvent(Element *,Event *);
			virtual void OnListenedInput(Element *,InputEvent *);
			virtual void OnListenedPropertyChanged(Element *,PropertyInfo const *,int,Value *,Value *);
			virtual void OnListenerAttach(Element *);
			virtual void OnListenerDetach(Element *);
		};

		struct ListenerFrame
		{
			~ListenerFrame();
		};

		void ListenerData_Compact(Internal::ListenerData * *,unsigned int);
	};

	class InternalRichText
	{
		static IClassInfo * s_pClassInfo;
	public:
		virtual IClassInfo * GetClassInfoW();
	};

	class InvokeHelper
	{
		static int _WndProc(void *,HWND__ *,unsigned int,unsigned __int64,__int64,__int64 *);
		static unsigned int const s_uInvokeHelperMsg;
		void OnInvoke(InvokeHelper::InvokeArgs *);
	public:
		InvokeHelper();
		int Init(unsigned long);
		long DoInvoke(int,ElementProvider *,ProviderProxy * (*)(Element *),char *);
		virtual ~InvokeHelper();
		void Uninit();
	};

	class InvokeManager
	{
		static InvokeHelper * FindInvokeHelper(unsigned int *);
		static UiaArray<InvokeHelper *> * g_pArrayInvokeHelper;
		static _RTL_CRITICAL_SECTION g_cs;
	public:
		InvokeManager & operator=(InvokeManager const &);
		static long GetInvokeHelper(InvokeHelper * *);
		static long Init();
		static void Close();
		static void CloseThread();
	};

	struct InvokeProvider
	{
		InvokeProvider();
		virtual ProviderProxy * (*GetProxyCreator())(Element *);
		virtual long Invoke();
		virtual long QueryInterface(_GUID const &,void * *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
		virtual ~InvokeProvider();
	};

	class InvokeProxy
	{
	protected:
		virtual void Init(Element *);
	public:
		InvokeProxy & operator=(InvokeProxy const &);
		InvokeProxy();
		InvokeProxy(InvokeProxy const &);
		static InvokeProxy * Create(Element *);
		static bool IsPatternSupported(Element *);
		virtual long DoMethod(int,char *);
	};

	class ItemList
	{
		static IClassInfo * s_pClassInfo;
	public:
		ItemList();
		bool IsReorderable();
		long SetReorderable(bool);
		static IClassInfo * GetClassInfoPtr();
		static PropertyInfo const * ReorderableProp();
		static long Create(Element *,unsigned long *,Element * *);
		static long Register();
		virtual Element * GetAdjacent(Element *,int,NavReference const *,unsigned long);
		virtual IClassInfo * GetClassInfoW();
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
		virtual ~ItemList();
	};

	class Layout
	{
	protected:
		bool IsCacheDirty();
		void ClearCacheDirty();
		void SetCacheDirty();
	public:
		Element * GetChildFromLayoutIndex(Element *,int,DynamicArray<Element *,0> *);
		Layout & operator=(Layout const &);
		Layout();
		Layout(Layout const &);
		int GetLayoutIndexFromChild(Element *,Element *);
		static long Create(Layout * *);
		static void UpdateLayoutRect(Element *,int,int,Element *,int,int,int,int);
		unsigned int GetLayoutChildCount(Element *);
		virtual Element * GetAdjacent(Element *,Element *,int,NavReference const *,unsigned long);
		virtual tagSIZE UpdateDesiredSize(Element *,int,int,Surface *);
		virtual void Attach(Element *);
		virtual void Detach(Element *);
		virtual void DoLayout(Element *,int,int);
		virtual void OnAdd(Element *,Element * *,unsigned int);
		virtual void OnLayoutPosChanged(Element *,Element *,int,int);
		virtual void OnRemove(Element *,Element * *,unsigned int);
		virtual ~Layout();
		void Destroy();
		void Initialize();
	};

	class LayoutInvalidateBehavior
	{
	protected:
		static _GUID const * * s_rgpIID;
	public:
		static long Create(TouchScrollViewer *,LayoutInvalidateBehavior * *);
		virtual long GetCallbackFilters(DuiBehaviorFilters::Flags *);
		virtual long OnDoLayout(Element *,int,int);
		virtual long OnUpdateDesiredSize(Element *,int,int,Surface *,tagSIZE *);
	};

	struct LinkedList
	{
		LinkedList & operator=(LinkedList const &);
		LinkedList();
		LinkedListNode * RemoveTail();
		void Add(LinkedListNode *);
		void Remove(LinkedListNode *);
		~LinkedList();
	};

	struct LinkedListNode
	{
		LinkedListNode & operator=(LinkedListNode const &);
	};

	class Macro
	{
		static IClassInfo * s_pClassInfo;
	protected:
		static Value * _LoadImage32BitsPerPixel(unsigned short const *);
		static bool _GetBitmapSize(HBITMAP__ *,tagSIZE *);
		static void _BitAccurateFillRect(HDC__ *,int,int,int,int,unsigned char,unsigned char,unsigned char,unsigned char,unsigned long);
		virtual long BuildElement();
		void ResolveBindings();
	public:
		IDataEntry * GetDataEntry();
		Macro & operator=(Macro const &);
		Macro();
		Macro(Macro const &);
		long Initialize(Element *,unsigned long *);
		long SetExpand(unsigned short const *);
		static IClassInfo * GetClassInfoPtr();
		static PropertyInfo const * ExpandProp();
		static long Create(Element *,unsigned long *,Element * *);
		static long Register();
		static void SetClassInfoPtr(IClassInfo *);
		unsigned short const * GetExpand(Value * *);
		virtual IClassInfo * GetClassInfoW();
		virtual long Add(Element * *,unsigned int);
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
		virtual ~Macro();
		void SetDataEntry(IDataEntry *,Element *);
		void SetDefaultGraphicType(unsigned char,bool);
		void SetParser(DUIXmlParser *);
	};

	class ManipulationHelper
	{
		void _RemoveDelegateEventHandler();
	protected:
		long EnsureInitialized();
	public:
		ContentTiler * GetContentTiler();
		IDirectManipulationManager * GetManagerNoAddref();
		long Activate(HWND__ *);
		long SetDelegateEventHandler(IUnknown *);
		long SetViewportAndOwner(IDirectManipulationViewport *,HWND__ *,TouchScrollViewer *);
		virtual long OnContentUpdated(IDirectManipulationViewport *,IDirectManipulationContent *);
		virtual long OnViewportStatusChanged(IDirectManipulationViewport *,DIRECTMANIPULATION_STATUS,DIRECTMANIPULATION_STATUS);
		virtual long OnViewportUpdated(IDirectManipulationViewport *);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
	};

	class MaxSizeBehavior
	{
	protected:
		static _GUID const * const * const s_rgpIID;
	public:
		static long Create(IDuiBehavior * *);
		virtual long GetCallbackFilters(DuiBehaviorFilters::Flags *);
		virtual long Init(Value *);
		virtual long OnDoLayout(Element *,int,int);
		virtual long OnUpdateDesiredSize(Element *,int,int,Surface *,tagSIZE *);
	};

	class ModernProgressBar
	{
		float _UpdateIndicatorPosition(int);
		long _GetProgressAnimation(IDCompositionDevice *,double,float,IDCompositionAnimation * *);
		long _StartIndicatorAnimation(ModernProgressBar::INDICATOR_ANIMATIONTYPE);
		long _UpdateAnimations(IDCompositionDevice *,IDCompositionVisual *);
		long _UpdateTimerState();
		static IClassInfo * s_pClassInfo;
		static float s_ComputeExpFunc(float);
		static unsigned long s_PowerNotifyCallback(void *,unsigned long,void *);
		static void _TimerProc(HWND__ *,unsigned int,unsigned __int64,unsigned long);
		void _AddLayeredRef();
		void _CreateDotVisuals();
		void _InitBarState(bool);
		void _InitIndicator();
		void _RenderPrimaryDot(HDC__ *,tagRECT const *);
		void _SetAccName(bool);
		void _SetAccValue();
		void _SetHeight();
	protected:
		virtual void OnDestroy();
		virtual void OnHosted(Element *);
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
		virtual void OnUnHosted(Element *);
		virtual void Paint(HDC__ *,tagRECT const *,tagRECT const *,tagRECT *,tagRECT *);
	public:
		ModernProgressBar();
		bool IsActivityOccuring();
		bool IsAddLayeredRef();
		bool IsAutoHeight();
		bool IsDeterminate();
		bool IsIndependentAnimations();
		bool IsSmoothFillAnimation();
		int GetMaximum();
		int GetMinimum();
		int GetPosition();
		int GetState();
		long Initialize(unsigned int,Element *,unsigned long *);
		long SetActivityOccuring(bool);
		long SetAddLayeredRef(bool);
		long SetAutoHeight(bool);
		long SetDeterminate(bool);
		long SetIndependentAnimations(bool);
		long SetMaximum(int);
		long SetMinimum(int);
		long SetPosition(int);
		long SetSmoothFillAnimation(bool);
		long SetState(int);
		static IClassInfo * GetClassInfoPtr();
		static PropertyInfo const * ActivityOccuringProp();
		static PropertyInfo const * AddLayeredRefProp();
		static PropertyInfo const * AutoHeightProp();
		static PropertyInfo const * DeterminateProp();
		static PropertyInfo const * IndependentAnimationsProp();
		static PropertyInfo const * MaximumProp();
		static PropertyInfo const * MinimumProp();
		static PropertyInfo const * PositionProp();
		static PropertyInfo const * SmoothFillAnimationProp();
		static PropertyInfo const * StateProp();
		static long Create(Element *,unsigned long *,Element * *);
		static long Register();
		virtual IClassInfo * GetClassInfoW();
		virtual ~ModernProgressBar();
		void StopIndicatorAnimation();
	};

	class ModernProgressBarRangeValueProxy
	{
	protected:
		virtual void Init(Element *);
	public:
		ModernProgressBarRangeValueProxy & operator=(ModernProgressBarRangeValueProxy const &);
		ModernProgressBarRangeValueProxy();
		ModernProgressBarRangeValueProxy(ModernProgressBarRangeValueProxy const &);
		virtual long DoMethod(int,char *);
	};

	class ModernProgressRing
	{
		static IClassInfo * s_pClassInfo;
		static ModernProgressRing::ANIMATIONTIMELINE const * const c_rgAnimationCurves;
		static ModernProgressRing::RING_DESIGN_VALUES const * const c_rgRingDesignValues;
		static float s_ComputeCircularFunc(float,ModernProgressRing::FUNCMODE);
		static unsigned long s_PowerNotifyCallback(void *,unsigned long,void *);
		static void _TimerProc(HWND__ *,unsigned int,unsigned __int64,unsigned long);
		static void s_GetAngleEndpoint(float,float,float *,float *);
		void _Start();
		void _Stop();
		void _UpdateTimerState();
	protected:
		virtual void OnDestroy();
		virtual void OnHosted(Element *);
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
		virtual void OnUnHosted(Element *);
		virtual void Paint(HDC__ *,tagRECT const *,tagRECT const *,tagRECT *,tagRECT *);
	public:
		ModernProgressRing();
		bool IsActivityOccuring();
		bool IsAddLayeredRef();
		long Initialize(unsigned int,Element *,unsigned long *);
		long SetActivityOccuring(bool);
		long SetAddLayeredRef(bool);
		static IClassInfo * GetClassInfoPtr();
		static PropertyInfo const * ActivityOccuringProp();
		static PropertyInfo const * AddLayeredRefProp();
		static long Create(Element *,unsigned long *,Element * *);
		static long Register();
		virtual IClassInfo * GetClassInfoW();
		virtual ~ModernProgressRing();
	};

	class Movie
	{
		static IClassInfo * s_pClassInfo;
		void advanceFrameActionStart();
		void advanceFrameActionStop();
	public:
		Movie & operator=(Movie const &);
		Movie();
		Movie(Movie const &);
		bool GetAutoStart();
		bool GetAutoStop();
		bool GetDrawOutlines();
		bool GetPlayAllFramesMode();
		bool GetRepeat();
		int GetCompositingQuality();
		int GetInterpolationMode();
		int GetPixelOffsetMode();
		int GetSmoothingMode();
		long LoadFromPath(unsigned short const *);
		long LoadFromResource(HINSTANCE__ *,int);
		long SetAutoStart(bool);
		long SetAutoStop(bool);
		long SetCompositingQuality(int);
		long SetDrawOutlines(bool);
		long SetInterpolationMode(int);
		long SetPath(unsigned short const *);
		long SetPixelOffsetMode(int);
		long SetPlayAllFramesMode(bool);
		long SetRepeat(bool);
		long SetSmoothingMode(int);
		static IClassInfo * GetClassInfoPtr();
		static PropertyInfo const * AutoStartProp();
		static PropertyInfo const * AutoStopProp();
		static PropertyInfo const * CompositingQualityProp();
		static PropertyInfo const * DrawOutlinesProp();
		static PropertyInfo const * InterpolationModeProp();
		static PropertyInfo const * PathProp();
		static PropertyInfo const * PixelOffsetModeProp();
		static PropertyInfo const * PlayAllFramesModeProp();
		static PropertyInfo const * RepeatProp();
		static PropertyInfo const * SmoothingModeProp();
		static UID AdvanceFrame();
		static long Create(Element *,unsigned long *,Element * *);
		static long Create(unsigned int,Element *,unsigned long *,Element * *);
		static long Register();
		static void RawActionProc(GMA_ACTIONINFO *);
		static void SetClassInfoPtr(IClassInfo *);
		unsigned short const * GetPath(Value * *);
		virtual IClassInfo * GetClassInfoW();
		virtual void OnDestroy();
		virtual void OnEvent(Event *);
		virtual void OnHosted(Element *);
		virtual void Paint(HDC__ *,tagRECT const *,tagRECT const *,tagRECT *,tagRECT *);
		virtual ~Movie();
		void Forward();
		void Pause();
		void Play();
		void Resume();
		void Rewind();
		void doAction(GMA_ACTIONINFO *);
	};

	struct NativeHWNDHost
	{
		Element * GetElement();
		HWND__ * GetHWND();
		NativeHWNDHost & operator=(NativeHWNDHost const &);
		NativeHWNDHost();
		NativeHWNDHost(NativeHWNDHost const &);
		int RestoreFocus();
		long Initialize(unsigned short const *,HWND__ *,HICON__ *,int,int,int,int,int,int,unsigned int);
		long Initialize(unsigned short const *,unsigned short const *,HWND__ *,HICON__ *,int,int,int,int,int,int,HINSTANCE__ *,unsigned int);
		static __int64 WndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
		static long Create(unsigned short const *,HWND__ *,HICON__ *,int,int,int,int,int,int,unsigned int,NativeHWNDHost * *);
		static long Create(unsigned short const *,unsigned short const *,HWND__ *,HICON__ *,int,int,int,int,int,int,HINSTANCE__ *,unsigned int,NativeHWNDHost * *);
		static unsigned int DestroyMsg();
		virtual HWND__ * CreateHostWindow(unsigned long,unsigned short const *,unsigned short const *,unsigned long,int,int,int,int,HWND__ *,HMENU__ *,HINSTANCE__ *,void *);
		virtual long OnMessage(unsigned int,unsigned __int64,__int64,__int64 *);
		virtual ~NativeHWNDHost();
		void Destroy();
		void DestroyWindow();
		void HideWindow();
		void Host(Element *);
		void SaveFocus();
		void SetDefaultFocusID(unsigned short const *);
		void ShowWindow(int);
		void SyncDestroyWindow();
	};

	struct NavReference
	{
		NavReference & operator=(NavReference const &);
		void Init(Element *,tagRECT *);
	};

	struct NavScoring
	{
		NavScoring & operator=(NavScoring const &);
		int TrackScore(Element *,Element *);
		int Try(Element *,int,NavReference const *,unsigned long);
		void Init(Element *,int,NavReference const *);
	};

	class Navigator
	{
		static IClassInfo * s_pClassInfo;
		void FireNavigationEvent();
	public:
		Browser * GetBrowser();
		Navigator & operator=(Navigator const &);
		Navigator();
		Navigator(Navigator const &);
		long Initialize(Element *,unsigned long *);
		long SetTargetPage(unsigned short const *);
		static IClassInfo * GetClassInfoPtr();
		static PropertyInfo const * TargetPageProp();
		static UID ActionInitiated();
		static long Create(Element *,unsigned long *,Element * *);
		static long Register();
		static void SetClassInfoPtr(IClassInfo *);
		unsigned short const * GetTargetPage(Value * *);
		virtual IClassInfo * GetClassInfoW();
		virtual void OnEvent(Event *);
		virtual ~Navigator();
	};

	class NavigatorSelectionItemProxy
	{
		long AddToSelection(Browser *);
		long GetIsSelected(Browser *,int *);
	protected:
		virtual void Init(Element *);
	public:
		NavigatorSelectionItemProxy & operator=(NavigatorSelectionItemProxy const &);
		NavigatorSelectionItemProxy();
		NavigatorSelectionItemProxy(NavigatorSelectionItemProxy const &);
		virtual long DoMethod(int,char *);
	};

	class NineGridLayout
	{
		void _UpdateTileList(int,Element *);
	public:
		NineGridLayout & operator=(NineGridLayout const &);
		NineGridLayout();
		NineGridLayout(NineGridLayout const &);
		static long Create(Layout * *);
		static long Create(int,int *,Value * *);
		virtual Element * GetAdjacent(Element *,Element *,int,NavReference const *,unsigned long);
		virtual tagSIZE UpdateDesiredSize(Element *,int,int,Surface *);
		virtual void DoLayout(Element *,int,int);
		virtual void OnAdd(Element *,Element * *,unsigned int);
		virtual void OnLayoutPosChanged(Element *,Element *,int,int);
		virtual void OnRemove(Element *,Element * *,unsigned int);
		virtual ~NineGridLayout();
		void Initialize();
	};

	class PText
	{
		static IClassInfo * s_pClassInfo;
	public:
		PText & operator=(PText const &);
		PText();
		PText(PText const &);
		long Initialize(Element *,unsigned long *);
		static IClassInfo * GetClassInfoPtr();
		static long Create(Element *,unsigned long *,Element * *);
		static long Register();
		static void SetClassInfoPtr(IClassInfo *);
		virtual IClassInfo * GetClassInfoW();
		virtual bool OnPropertyChanging(PropertyInfo const *,int,Value *,Value *);
		virtual ~PText();
		void SetDataEntry(IDataEntry *);
	};

	struct PVLAnimation
	{
		PVLAnimation & operator=(PVLAnimation const &);
		static UID AnimationStatusChange();
		static UID CustomDragDropScalingHint();
		static UID CustomReflowHint();
		static UID CustomTapHint();
		static UID ManualStoryboardVerify();
		static UID NotifyComplete();
		static UID NotifyImplicit();
		static UID NotifyStart();
		static UID NotifyStoryboardComplete();
		static UID ReflowStyle();
		static UID TriggeredAnimationComplete();
	};

	struct PVLAnimationAddEvent
	{
		~PVLAnimationAddEvent();
	};

	struct PVLAnimationDropEvent
	{
		~PVLAnimationDropEvent();
	};

	struct PVLAnimationLauncherEvent
	{
		~PVLAnimationLauncherEvent();
	};

	struct PVLAnimationParentChangeEvent
	{
		~PVLAnimationParentChangeEvent();
	};

	struct PVLAnimationRepositionEvent
	{
		~PVLAnimationRepositionEvent();
	};

	struct PVLAnimationSessionEvent
	{
		~PVLAnimationSessionEvent();
	};

	class PVLAnimationTriggers
	{
		static PVLAnimationTriggers * s_pInstance;
	protected:
		static _GUID const * * s_rgpIID;
	public:
		static long Startup();
		virtual long AddFade(int,Element *,unsigned int,int);
		virtual long AddInputPaneSlide(int,Element *,tagPOINT const *,tagPOINT const *,tagRECT const *,int,int);
		virtual long AddReposition(int,Element *,tagPOINT,int,bool,unsigned int,unsigned int);
		virtual long AddScale(int,Element *,_POINTFLOAT,_POINTFLOAT,int);
		virtual long TriggerAdd(Element *,Element *,unsigned int,int,unsigned long *);
		virtual long TriggerAddGroup(DynamicArray<Element *,0> *,Element *,DynamicArray<unsigned int,0> *,int,bool,unsigned long *);
		virtual long TriggerAddGroupMultiParent(DynamicArray<Element *,0> *,DynamicArray<DynamicArray<ElementIndexPair *,0> *,0> *,int,bool,unsigned long *);
		virtual long TriggerBadgeUpdate(Element *,Element *,tagPOINT,unsigned long *);
		virtual long TriggerBeginStoryboard(Element *,int *,unsigned long *);
		virtual long TriggerCancelStoryboard(Element *,int);
		virtual long TriggerCollapse(Element *,Element *,unsigned long *);
		virtual long TriggerContentTransition(DynamicArray<Element *,0> *,DynamicArray<Element *,0> *,Element *,tagPOINT,int,unsigned long *);
		virtual long TriggerCrossfade(Element *,Element *,bool,bool,bool,bool,unsigned long *);
		virtual long TriggerDelete(Element *,bool,unsigned long *);
		virtual long TriggerDeleteGroup(DynamicArray<Element *,0> *,bool,bool,unsigned long *);
		virtual long TriggerDrag(Element *,DynamicArray<Element *,0> *,unsigned int,tagPOINT,unsigned long *);
		virtual long TriggerDrop(Element *,DynamicArray<Element *,0> *,Element *,int,int,tagPOINT,bool,_POINTFLOAT,_POINTFLOAT,unsigned long *);
		virtual long TriggerEndStoryboard(Element *,int);
		virtual long TriggerEntrance(DynamicArray<Element *,0> *,DynamicArray<tagPOINT,0> *,unsigned long *);
		virtual long TriggerExpand(Element *,Element *,int,unsigned long *);
		virtual long TriggerFade(Element *,unsigned int,unsigned long *);
		virtual long TriggerFadeGroup(DynamicArray<Element *,0> *,unsigned int,unsigned long *);
		virtual long TriggerHide(Element *,Element *,Element *,Element *,tagRECT const *,unsigned long *);
		virtual long TriggerMove(Element *,Element *,int,bool,unsigned long *);
		virtual long TriggerNudge(DynamicArray<Element *,0> *,DynamicArray<tagPOINT,0> *,unsigned int,unsigned long *);
		virtual long TriggerPageTransition(DynamicArray<Element *,0> *,DynamicArray<Element *,0> *,Element *,tagPOINT,int,unsigned long *);
		virtual long TriggerPeekTileNotification(Element *,tagPOINT,unsigned long *);
		virtual long TriggerPop(Element *,Element *,unsigned int,tagPOINT,tagPOINT,bool,bool,unsigned long *);
		virtual long TriggerReflow(Element *,bool,tagSIZE *,unsigned long *);
		virtual long TriggerReposition(Element *,tagPOINT,bool,unsigned long *);
		virtual long TriggerResize(Element *,tagSIZE,unsigned long *);
		virtual long TriggerReveal(Element *,Element *,Element *,Element *,tagRECT const *,unsigned long *);
		virtual long TriggerShowTileNotification(Element *,tagPOINT,Element *,tagPOINT,unsigned int,Element *,Element *,unsigned long *);
		virtual long TriggerSlide(unsigned int,Element *,Element *,unsigned int,unsigned int,tagPOINT,bool,bool,unsigned long *);
		virtual long TriggerSwipe(Element *,unsigned int,tagPOINT,Element *,unsigned long *);
		virtual long TriggerTap(Element *,unsigned int,tagPOINT,unsigned long *);
	};

	class PVLLauncherAnimationTriggers
	{
		static PVLLauncherAnimationTriggers * s_pLauncherInstance;
	protected:
		static _GUID const * * s_rgpIID;
	public:
		static long Startup();
		virtual long AddScale(int,Element *,_POINTFLOAT,_POINTFLOAT,int,int);
		virtual long TriggerCrossfade(DynamicArray<Element *,0> *,DynamicArray<Element *,0> *,bool,bool,bool,bool,unsigned long *);
		virtual long TriggerDrag(Element *,DynamicArray<Element *,0> *,Element *,Element *,DynamicArray<ClipRectWithElement *,0> *,unsigned int,tagPOINT,unsigned long *);
		virtual long TriggerDrop(Element *,DynamicArray<Element *,0> *,Element *,Element *,DynamicArray<ClipRectWithElement *,0> *,Element *,int,int,tagPOINT,unsigned long *);
		virtual long TriggerLaunch(Element *,DynamicArray<Element *,0> *,unsigned long *);
		virtual long TriggerLogonEntrance(DynamicArray<Element *,0> *,DynamicArray<tagPOINT,0> *,unsigned long *);
		virtual long TriggerTap(Element *,unsigned int,tagPOINT,unsigned int,unsigned long *);
	};

	class Page
	{
		static IClassInfo * s_pClassInfo;
	public:
		Page & operator=(Page const &);
		Page();
		Page(Page const &);
		long Initialize(Element *,unsigned long *);
		static IClassInfo * GetClassInfoPtr();
		static long Create(Element *,unsigned long *,Element * *);
		static long Register();
		static void SetClassInfoPtr(IClassInfo *);
		virtual IClassInfo * GetClassInfoW();
		virtual ~Page();
	};

	class Pages
	{
		static IClassInfo * s_pClassInfo;
	public:
		Element * GetPage(unsigned int);
		Element * GetPage(unsigned short const *);
		Pages & operator=(Pages const &);
		Pages();
		Pages(Pages const &);
		long Initialize(Element *,unsigned long *);
		static IClassInfo * GetClassInfoPtr();
		static long Create(Element *,unsigned long *,Element * *);
		static long Register();
		static void SetClassInfoPtr(IClassInfo *);
		unsigned int GetCount();
		virtual IClassInfo * GetClassInfoW();
		virtual long Add(Element * *,unsigned int);
		virtual ~Pages();
		void SetNoBrowseOnFirstAdd();
	};

	namespace ParserTools
	{
		struct Tokenizer
		{
			static bool IsWhiteSpace(unsigned short);
			unsigned short PeekChar();
			void SkipWhiteSpace();
		};

		class ValueParser
		{
			long FinishComplexNodeT(unsigned int);
			long InsertExprNodeT(ExprNodeType,int);
			long ParseOr();
			long ParseWorker();
			long TransferNodes(unsigned int);
			void ResetBuf();
		public:
			long Parse(unsigned short const *,ExprNode const * *);
			static long Create(ValueParser * *);
			~ValueParser();
		};

	};

	class PasswordRevealToggleProxy
	{
	protected:
		virtual void Init(Element *);
	public:
		virtual long DoMethod(int,char *);
	};

	class PatternProvider<ExpandCollapseProvider,IExpandCollapseProvider,1>
	{
	protected:
		long DoInvoke(int,...);
	public:
		PatternProvider<ExpandCollapseProvider,IExpandCollapseProvider,1>();
		static long Create(ElementProvider *,IUnknown * *);
		virtual ProviderProxy * (*GetProxyCreator())(Element *);
		virtual void Init(ElementProvider *);
		virtual ~PatternProvider<ExpandCollapseProvider,IExpandCollapseProvider,1>();
	};

	class PatternProvider<GridItemProvider,IGridItemProvider,2>
	{
	protected:
		long DoInvoke(int,...);
	public:
		PatternProvider<GridItemProvider,IGridItemProvider,2>();
		static long Create(ElementProvider *,IUnknown * *);
		virtual ProviderProxy * (*GetProxyCreator())(Element *);
		virtual void Init(ElementProvider *);
		virtual ~PatternProvider<GridItemProvider,IGridItemProvider,2>();
	};

	class PatternProvider<GridProvider,IGridProvider,3>
	{
	protected:
		long DoInvoke(int,...);
	public:
		PatternProvider<GridProvider,IGridProvider,3>();
		static long Create(ElementProvider *,IUnknown * *);
		virtual ProviderProxy * (*GetProxyCreator())(Element *);
		virtual void Init(ElementProvider *);
		virtual ~PatternProvider<GridProvider,IGridProvider,3>();
	};

	class PatternProvider<InvokeProvider,IInvokeProvider,0>
	{
	protected:
		long DoInvoke(int,...);
	public:
		PatternProvider<InvokeProvider,IInvokeProvider,0>();
		static long Create(ElementProvider *,IUnknown * *);
		virtual ProviderProxy * (*GetProxyCreator())(Element *);
		virtual void Init(ElementProvider *);
		virtual ~PatternProvider<InvokeProvider,IInvokeProvider,0>();
	};

	class PatternProvider<RangeValueProvider,IRangeValueProvider,4>
	{
	protected:
		long DoInvoke(int,...);
	public:
		PatternProvider<RangeValueProvider,IRangeValueProvider,4>();
		static long Create(ElementProvider *,IUnknown * *);
		virtual ProviderProxy * (*GetProxyCreator())(Element *);
		virtual void Init(ElementProvider *);
		virtual ~PatternProvider<RangeValueProvider,IRangeValueProvider,4>();
	};

	class PatternProvider<ScrollItemProvider,IScrollItemProvider,6>
	{
	protected:
		long DoInvoke(int,...);
	public:
		PatternProvider<ScrollItemProvider,IScrollItemProvider,6>();
		static long Create(ElementProvider *,IUnknown * *);
		virtual ProviderProxy * (*GetProxyCreator())(Element *);
		virtual void Init(ElementProvider *);
		virtual ~PatternProvider<ScrollItemProvider,IScrollItemProvider,6>();
	};

	class PatternProvider<ScrollProvider,IScrollProvider,5>
	{
	protected:
		long DoInvoke(int,...);
	public:
		PatternProvider<ScrollProvider,IScrollProvider,5>();
		static long Create(ElementProvider *,IUnknown * *);
		virtual ProviderProxy * (*GetProxyCreator())(Element *);
		virtual void Init(ElementProvider *);
		virtual ~PatternProvider<ScrollProvider,IScrollProvider,5>();
	};

	class PatternProvider<SelectionItemProvider,ISelectionItemProvider,7>
	{
	protected:
		long DoInvoke(int,...);
	public:
		PatternProvider<SelectionItemProvider,ISelectionItemProvider,7>();
		static long Create(ElementProvider *,IUnknown * *);
		virtual ProviderProxy * (*GetProxyCreator())(Element *);
		virtual void Init(ElementProvider *);
		virtual ~PatternProvider<SelectionItemProvider,ISelectionItemProvider,7>();
	};

	class PatternProvider<SelectionProvider,ISelectionProvider,8>
	{
	protected:
		long DoInvoke(int,...);
	public:
		PatternProvider<SelectionProvider,ISelectionProvider,8>();
		static long Create(ElementProvider *,IUnknown * *);
		virtual ProviderProxy * (*GetProxyCreator())(Element *);
		virtual void Init(ElementProvider *);
		virtual ~PatternProvider<SelectionProvider,ISelectionProvider,8>();
	};

	class PatternProvider<TableItemProvider,ITableItemProvider,10>
	{
	protected:
		long DoInvoke(int,...);
	public:
		PatternProvider<TableItemProvider,ITableItemProvider,10>();
		static long Create(ElementProvider *,IUnknown * *);
		virtual ProviderProxy * (*GetProxyCreator())(Element *);
		virtual void Init(ElementProvider *);
		virtual ~PatternProvider<TableItemProvider,ITableItemProvider,10>();
	};

	class PatternProvider<TableProvider,ITableProvider,9>
	{
	protected:
		long DoInvoke(int,...);
	public:
		PatternProvider<TableProvider,ITableProvider,9>();
		static long Create(ElementProvider *,IUnknown * *);
		virtual ProviderProxy * (*GetProxyCreator())(Element *);
		virtual void Init(ElementProvider *);
		virtual ~PatternProvider<TableProvider,ITableProvider,9>();
	};

	class PatternProvider<ToggleProvider,IToggleProvider,11>
	{
	protected:
		long DoInvoke(int,...);
	public:
		PatternProvider<ToggleProvider,IToggleProvider,11>();
		static long Create(ElementProvider *,IUnknown * *);
		virtual ProviderProxy * (*GetProxyCreator())(Element *);
		virtual void Init(ElementProvider *);
		virtual ~PatternProvider<ToggleProvider,IToggleProvider,11>();
	};

	class PatternProvider<ValueProvider,IValueProvider,12>
	{
	protected:
		long DoInvoke(int,...);
	public:
		PatternProvider<ValueProvider,IValueProvider,12>();
		static long Create(ElementProvider *,IUnknown * *);
		virtual ProviderProxy * (*GetProxyCreator())(Element *);
		virtual void Init(ElementProvider *);
		virtual ~PatternProvider<ValueProvider,IValueProvider,12>();
	};

	class Progress
	{
		static IClassInfo * s_pClassInfo;
	public:
		Progress & operator=(Progress const &);
		Progress();
		Progress(Progress const &);
		int GetMaximum();
		int GetMinimum();
		int GetPosition();
		long Initialize(Element *,unsigned long *);
		long SetMaximum(int);
		long SetMinimum(int);
		long SetPosition(int);
		static IClassInfo * GetClassInfoPtr();
		static PropertyInfo const * MaximumProp();
		static PropertyInfo const * MinimumProp();
		static PropertyInfo const * PositionProp();
		static long Create(Element *,unsigned long *,Element * *);
		static long Register();
		static void SetClassInfoPtr(IClassInfo *);
		virtual IClassInfo * GetClassInfoW();
		virtual tagSIZE GetContentSize(int,int,Surface *);
		virtual void Paint(HDC__ *,tagRECT const *,tagRECT const *,tagRECT *,tagRECT *);
		virtual ~Progress();
	};

	class ProgressRangeValueProxy
	{
	protected:
		virtual void Init(Element *);
	public:
		ProgressRangeValueProxy & operator=(ProgressRangeValueProxy const &);
		ProgressRangeValueProxy();
		ProgressRangeValueProxy(ProgressRangeValueProxy const &);
		virtual long DoMethod(int,char *);
	};

	struct PromptText
	{
		virtual long GetForegroundColorRef(unsigned long *);
	};

	struct PropNotify
	{
		bool IsEqual(PropertyInfo const * (*)());
		static bool IsEqual(PropertyInfo const *,int,PropertyInfo const * (*)());
	};

	class ProviderProxy
	{
	protected:
		ProviderProxy();
		virtual void Init(Element *);
	public:
		ProviderProxy & operator=(ProviderProxy const &);
		ProviderProxy(ProviderProxy const &);
	};

	class Proxy
	{
	protected:
		virtual void OnInvoke(unsigned int,void *);
		void Invoke(unsigned int,void *);
	public:
		Proxy & operator=(Proxy const &);
		Proxy();
		Proxy(Proxy const &);
		static long SyncCallback(HGADGET__ *,void *,EventMsg *);
		virtual ~Proxy();
	};

	class PushButton
	{
		static IClassInfo * s_pClassInfo;
		void FireHostEvent(Element *,bool);
	public:
		PushButton & operator=(PushButton const &);
		PushButton();
		PushButton(PushButton const &);
		bool GetEnforceSize();
		long SetEnforceSize(bool);
		static IClassInfo * GetClassInfoPtr();
		static PropertyInfo const * EnforceSizeProp();
		static UID Hosted();
		static long Create(Element *,unsigned long *,Element * *);
		static long Register();
		static void SetClassInfoPtr(IClassInfo *);
		virtual IClassInfo * GetClassInfoW();
		virtual tagSIZE GetContentSize(int,int,Surface *);
		virtual void OnHosted(Element *);
		virtual void OnUnHosted(Element *);
		virtual ~PushButton();
	};

	class RadioButtonGlyph
	{
		static IClassInfo * s_pClassInfo;
	public:
		RadioButtonGlyph & operator=(RadioButtonGlyph const &);
		RadioButtonGlyph();
		RadioButtonGlyph(RadioButtonGlyph const &);
		long Initialize(unsigned int,Element *,unsigned long *);
		static IClassInfo * GetClassInfoPtr();
		static long Create(Element *,unsigned long *,Element * *);
		static long Create(unsigned int,Element *,unsigned long *,Element * *);
		static long Register();
		static void SetClassInfoPtr(IClassInfo *);
		virtual IClassInfo * GetClassInfoW();
		virtual bool OnLostDialogFocus(IDialogElement *);
		virtual bool OnReceivedDialogFocus(IDialogElement *);
		virtual ~RadioButtonGlyph();
	};

	struct RangeValueProvider
	{
		RangeValueProvider();
		virtual ProviderProxy * (*GetProxyCreator())(Element *);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual long SetValue(double);
		virtual long get_IsReadOnly(int *);
		virtual long get_LargeChange(double *);
		virtual long get_Maximum(double *);
		virtual long get_Minimum(double *);
		virtual long get_SmallChange(double *);
		virtual long get_Value(double *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
		virtual ~RangeValueProvider();
	};

	class RangeValueProxy
	{
	protected:
		RangeValueProxy();
		virtual void Init(Element *);
	public:
		RangeValueProxy & operator=(RangeValueProxy const &);
		RangeValueProxy(RangeValueProxy const &);
		static RangeValueProxy * Create(Element *);
		static bool IsPatternSupported(Element *);
		virtual long DoMethod(int,char *);
	};

	class RefPointElement
	{
		static IClassInfo * s_pClassInfo;
	public:
		RefPointElement & operator=(RefPointElement const &);
		RefPointElement();
		RefPointElement(RefPointElement const &);
		long Initialize(unsigned int,Element *,unsigned long *);
		long SetReferencePoint(int,int);
		static Element * FindRefPoint(Element *,tagPOINT *);
		static IClassInfo * GetClassInfoPtr();
		static PropertyInfo const * ActualReferencePointProp();
		static PropertyInfo const * ReferencePointProp();
		static RefPointElement * Locate(Element *);
		static long Create(Element *,unsigned long *,Element * *);
		static long Create(unsigned int,Element *,unsigned long *,Element * *);
		static long Register();
		static void SetClassInfoPtr(IClassInfo *);
		tagPOINT const * GetActualReferencePoint(Value * *);
		tagPOINT const * GetReferencePoint(Value * *);
		virtual IClassInfo * GetClassInfoW();
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
		virtual ~RefPointElement();
	};

	struct RefcountBase
	{
		RefcountBase();
		long AddRef();
		long Release();
		virtual ~RefcountBase();
	};

	class RepeatButton
	{
		static IClassInfo * s_pClassInfo;
		static void _RepeatButtonActionCallback(GMA_ACTIONINFO *);
	public:
		RepeatButton & operator=(RepeatButton const &);
		RepeatButton();
		RepeatButton(RepeatButton const &);
		long Initialize(unsigned int,Element *,unsigned long *);
		static IClassInfo * GetClassInfoPtr();
		static long Create(Element *,unsigned long *,Element * *);
		static long Create(unsigned int,Element *,unsigned long *,Element * *);
		static long Register();
		static void SetClassInfoPtr(IClassInfo *);
		virtual IClassInfo * GetClassInfoW();
		virtual void OnInput(InputEvent *);
		virtual ~RepeatButton();
		void SetStopThumbBehavior();
	};

	class Repeater
	{
		static IClassInfo * s_pClassInfo;
	protected:
		virtual long BuildElement();
	public:
		Repeater & operator=(Repeater const &);
		Repeater();
		Repeater(Repeater const &);
		long Initialize(Element *,unsigned long *);
		static IClassInfo * GetClassInfoPtr();
		static long Create(Element *,unsigned long *,Element * *);
		static long Register();
		static void SetClassInfoPtr(IClassInfo *);
		virtual IClassInfo * GetClassInfoW();
		virtual ~Repeater();
		void SetDataEngine(IDataEngine *);
		void SetGraphicType(unsigned char);
	};

	struct ResourceHandleCache
	{
		virtual void * Open(unsigned short const *,int);
		virtual void Close(void *);
	};

	class ResourceModuleHandles
	{
		static long volatile g_cRefCount;
	public:
		ResourceModuleHandles & operator=(ResourceModuleHandles const &);
		ResourceModuleHandles();
		long GetHandle(unsigned short const *,HINSTANCE__ * *);
		~ResourceModuleHandles();
	};

	class RichText
	{
		DWRITE_FONT_WEIGHT _GetDWFontWeight();
		float _GetDWFontSize(float,bool);
		int _GetDefaultOverhang();
		int _GetMinSizeWidth();
		int _GetScaledOverhangOffset();
		long _ApplyDrawTextFlags();
		long _ApplyIntratextFormatting();
		long _CreateDWriteLayout(tagRECT const *,Value *);
		long _EnsureTextFormat();
		long _GetDWMetrics(DWRITE_TEXT_METRICS *);
		long _GetDWOverhangMetrics(DWRITE_OVERHANG_METRICS *);
		long _InitDWrite();
		long _SetFontColorRun(unsigned short const *,DWRITE_TEXT_RANGE);
		long _SetFontSizeRun(unsigned short const *,DWRITE_TEXT_RANGE);
		long _SetFontSizeRunsInternal();
		long _SetFontWeightRun(unsigned short const *,DWRITE_TEXT_RANGE);
		long _SetFontWeightRunsInternal();
		long _SetLineSpacingInternal();
		long _SetRangedStringRunsWithValue(unsigned short const *,StringRunStyles);
		long _SetStrikethrough();
		long _SetTypographyInternal();
		long _SetTypographyRun(unsigned short const *,DWRITE_TEXT_RANGE);
		long _SetTypographyRunsInternal();
		long _SetUnderline();
		static IClassInfo * s_pClassInfo;
		unsigned short const * _BuildRenderStringForDWrite(unsigned short const *,unsigned short,bool);
		void _AdjustRangeForPathJoinCharacters(DWRITE_TEXT_RANGE *);
		void _EnsureLeadDrawOffsetIsSet();
		void _FlushDWrite();
		void _PaintStringContentDWrite(HDC__ *,tagRECT const *,tagRECT const *,Value *);
		void _PrepareTextRender();
		void _SetAcceleratorAccentIfAppropriate();
		void _UpdateRangeForClusterMetrics(DWRITE_TEXT_RANGE *);
	public:
		IDWriteFactory * GetFactory();
		RichText();
		bool GetVerticalScript();
		int GetColorFontPaletteIndex();
		int GetConstrainLayout();
		long Initialize(Element *,unsigned long *);
		long SetAliasedRendering(bool);
		long SetBaseline(int);
		long SetColorFontPaletteIndex(int);
		long SetConstrainLayout(int);
		long SetDisableAccTextExtend(bool);
		long SetFontColorRuns(unsigned short const *);
		long SetFontSizeRuns(unsigned short const *);
		long SetFontWeightRuns(unsigned short const *);
		long SetLineSpacing(int);
		long SetLocale(unsigned short const *);
		long SetMapRunsToClusters(bool);
		long SetOverhangOffset(int);
		long SetTypography(unsigned short const *);
		long SetTypographyRuns(unsigned short const *);
		long SetVerticalScript(bool);
		static IClassInfo * GetClassInfoPtr();
		static PropertyInfo const * AliasedRenderingProp();
		static PropertyInfo const * BaselineProp();
		static PropertyInfo const * ColorFontPaletteIndexProp();
		static PropertyInfo const * ConstrainLayoutProp();
		static PropertyInfo const * DisableAccTextExtendProp();
		static PropertyInfo const * FontColorRunsProp();
		static PropertyInfo const * FontSizeRunsProp();
		static PropertyInfo const * FontWeightRunsProp();
		static PropertyInfo const * LineSpacingProp();
		static PropertyInfo const * LocaleProp();
		static PropertyInfo const * MapRunsToClustersProp();
		static PropertyInfo const * OverhangOffsetProp();
		static PropertyInfo const * TypographyProp();
		static PropertyInfo const * TypographyRunsProp();
		static PropertyInfo const * VerticalScriptProp();
		static long Create(Element *,unsigned long *,Element * *);
		static long CreateCache(unsigned int,IDUIRichTextCache * *);
		static long Register();
		unsigned long GetLineCount();
		unsigned long GetTrimmedLineCount();
		unsigned short GetShortcutChar();
		unsigned short const * GetFontColorRuns(Value * *);
		virtual IClassInfo * GetClassInfoW();
		virtual long GetForegroundColorRef(unsigned long *);
		virtual tagSIZE GetContentSize(int,int,Surface *);
		virtual void OnEvent(Event *);
		virtual void OnHosted(Element *);
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
		virtual void Paint(HDC__ *,tagRECT const *,tagRECT const *,tagRECT *,tagRECT *);
		virtual ~RichText();
		void SetCache(unsigned long,IDUIRichTextCache *);
		void SetDWriteFontCollection(IDWriteFontCollection *);
		void SetDWriteTextLayout(IDWriteTextLayout *);
		void SetMaxLineCount(unsigned int);
		void StopUsingCache();
	};

	class RichTextCache
	{
		long _EnsureEntry(unsigned long,RichTextCacheEntry * *);
		long _GetEntry(unsigned long,RichTextCacheEntry * *);
		void _DestroyEntriesTable();
	public:
		long AddGlyphRun(unsigned long,float,float,DWRITE_GLYPH_RUN const &,DWRITE_MEASURING_MODE);
		long BeginGlyphRuns(unsigned long);
		long Draw(unsigned long,IDWriteTextRenderer *);
		long SetLayoutConstraints(unsigned long,int,int);
		long SetText(unsigned long,unsigned short const *);
		static long Create(unsigned int,RichTextCache * *);
		virtual long Clear();
		virtual long QueryInterface(_GUID const &,void * *);
		virtual long Remove(unsigned long);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
		virtual void CalculateMetrics(RichTextCacheMetrics *);
		virtual void Enumerate(void (*)(unsigned long,void *),void *);
	};

	class RichTextCacheEntry
	{
		void _ClearGlyphRuns();
	public:
		long AddGlyphRun(float,float,DWRITE_GLYPH_RUN const &,DWRITE_MEASURING_MODE);
		long Draw(IDWriteTextRenderer *);
		void SetText(unsigned short const *);
	};

	struct RichTextExtraFormatting
	{
		virtual long GetRenderingOffset(RenderOffset *);
		virtual long GetTextColor(unsigned long *);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
	};

	struct RichTextGlyphRun
	{
		long Initialize(DWRITE_GLYPH_RUN const &);
	};

	class RichTextShared
	{
		long _EnsureDWriteLoaded();
		static RichTextShared * s_pShared;
	public:
		long GetAliasedRenderingParams(IDWriteRenderingParams * *);
		long GetGdiNaturalRenderingParams(IDWriteRenderingParams * *);
		long Initialize();
		static long GetShared(RichTextShared * *);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
		virtual ~RichTextShared();
	};

	struct RowLayout
	{
		RowLayout & operator=(RowLayout const &);
		RowLayout();
		RowLayout(RowLayout const &);
		long Initialize(int,unsigned int,unsigned int);
		static long Create(int,int *,Value * *);
		static long Create(int,unsigned int,unsigned int,Layout * *);
		static long Create(unsigned int,unsigned int,Layout * *);
		virtual Element * GetAdjacent(Element *,Element *,int,NavReference const *,unsigned long);
		virtual tagSIZE UpdateDesiredSize(Element *,int,int,Surface *);
		virtual void DoLayout(Element *,int,int);
		virtual ~RowLayout();
	};

	struct RowLayoutSharedInfo
	{
		int SetNumCols(unsigned int);
		long Initialize(int);
		static long Create(int,RowLayoutSharedInfo * *);
		void UpdateDesiredSizes(int,Surface *);
		~RowLayoutSharedInfo();
	};

	class SBAlloc<32>
	{
		void _AllocSection();
	public:
		static long Create(unsigned int,ISBLeak *,SBAlloc<32> * *);
		virtual ~SBAlloc<32>();
		void * Alloc();
		void Free(void *);
	};

	struct SafeArrayAccessor<int>
	{
		SafeArrayAccessor<int>();
		int Count();
		long Access(tagSAFEARRAY *,unsigned short);
		operator int *();
		~SafeArrayAccessor<int>();
	};

	struct Scanner
	{
		int ScanAndCheckUCIdentifier(unsigned short const *);
		void SkipWhite();
	};

	class Schema
	{
		static Schema::ControlInfo const * const g_controlInfoTable;
		static Schema::EventInfo const * const g_eventInfoTable;
		static Schema::EventMap const * const g_eventMapping;
		static Schema::PatternInfo const * const g_patternInfoTable;
		static Schema::PatternMap const * const g_patternMapping;
		static Schema::PropertyInfo const * const g_propertyInfoTable;
		static Schema::RoleMap const * const _roleMapping;
		static bool g_fInited;
		static long GetProcs();
		static long LookupControlInfos();
		static long LookupEventInfos();
		static long LookupPatternInfos();
		static long LookupPropertyInfos();
	public:
		Schema & operator=(Schema const &);
		static Schema::Event EventFromEventId(int);
		static Schema::Pattern PatternFromPatternId(int);
		static __int64 (* UiaReturnRawElementProvider)(HWND__ *,unsigned __int64,__int64,IRawElementProviderSimple *);
		static bool (*PfnIsSupportedFromPattern(Schema::Pattern))(Element *);
		static int (* UiaLookupId)(AutomationIdentifierType,_GUID const *);
		static int AcceleratorKeyProperty;
		static int AccessKeyProperty;
		static int AsyncContentLoadedEvent;
		static int AutomationFocusChangedEvent;
		static int AutomationIdProperty;
		static int AutomationPropertyChangedEvent;
		static int BoundingRectangleProperty;
		static int ButtonControlType;
		static int CalendarControlType;
		static int CheckBoxControlType;
		static int ClassNameProperty;
		static int ClickablePointProperty;
		static int ComboBoxControlType;
		static int ControlTypeProperty;
		static int CultureProperty;
		static int CustomControlType;
		static int DataGridControlType;
		static int DataItemControlType;
		static int DockPattern;
		static int DocumentControlType;
		static int DragDragCancelEvent;
		static int DragDragCompleteEvent;
		static int DragDragStartEvent;
		static int DragPattern;
		static int Drag_DropEffect_Property;
		static int Drag_DropEffects_Property;
		static int Drag_IsGrabbed_Property;
		static int EditControlType;
		static int ExpandCollapsePattern;
		static int ExpandCollapse_ExpandCollapseState_Property;
		static int FrameworkId;
		static int GridItemPattern;
		static int GridItem_ColumnSpan_Property;
		static int GridItem_Column_Property;
		static int GridItem_Parent_Property;
		static int GridItem_RowSpan_Property;
		static int GridItem_Row_Property;
		static int GridPattern;
		static int Grid_ColumnCount_Property;
		static int Grid_RowCount_Property;
		static int GroupControlType;
		static int HasKeyboardFocusProperty;
		static int HeaderControlType;
		static int HeaderItemControlType;
		static int HelpTextProperty;
		static int HyperlinkControlType;
		static int ImageControlType;
		static int InvokeInvokedEvent;
		static int InvokePattern;
		static int IsContentElementProperty;
		static int IsControlElementProperty;
		static int IsEnabledProperty;
		static int IsKeyboardFocusableProperty;
		static int IsOffscreen;
		static int IsPasswordProperty;
		static int IsPeripheral;
		static int ItemContainerPattern;
		static int ItemStatusProperty;
		static int ItemTypeProperty;
		static int LabeledByProperty;
		static int LayoutInvalidatedEvent;
		static int ListControlType;
		static int ListItemControlType;
		static int LocalizedControlTypeProperty;
		static int LookupAccessibleRole(int,bool *);
		static int MenuBarControlType;
		static int MenuClosedEvent;
		static int MenuControlType;
		static int MenuItemControlType;
		static int MenuOpenedEvent;
		static int MultipleViewPattern;
		static int NameProperty;
		static int NewNativeWindowHandleProperty;
		static int NullControlType;
		static int Orientation;
		static int PaneControlType;
		static int ProcessIdProperty;
		static int ProgressBarControlType;
		static int RadioButtonControlType;
		static int RangeValuePattern;
		static int RangeValue_IsReadOnly_Property;
		static int RangeValue_LargeChange_Property;
		static int RangeValue_Maximum_Property;
		static int RangeValue_Minimum_Property;
		static int RangeValue_SmallChange_Property;
		static int RangeValue_Value_Property;
		static int RuntimeIdProperty;
		static int ScrollBarControlType;
		static int ScrollItemPattern;
		static int ScrollPattern;
		static int Scroll_HorizontalScrollPercent_Property;
		static int Scroll_HorizontalViewSize_Property;
		static int Scroll_HorizontallyScrollable_Property;
		static int Scroll_VerticalScrollPercent_Property;
		static int Scroll_VerticalViewSize_Property;
		static int Scroll_VerticallyScrollable_Property;
		static int SelectionInvalidatedEvent;
		static int SelectionItemElementAddedToSelectionEvent;
		static int SelectionItemElementRemovedFromSelectionEvent;
		static int SelectionItemElementSelectedEvent;
		static int SelectionItemPattern;
		static int SelectionItem_IsSelected_Property;
		static int SelectionItem_SelectionContainer_Property;
		static int SelectionPattern;
		static int Selection_CanSelectMultiple_Property;
		static int Selection_IsSelectionRequired_Property;
		static int Selection_Selection_Property;
		static int SemanticZoomControlType;
		static int SeparatorControlType;
		static int SliderControlType;
		static int SpinnerControlType;
		static int SplitButtonControlType;
		static int StatusBarControlType;
		static int StructureChangedEvent;
		static int SystemAlertEvent;
		static int TabControlType;
		static int TabItemControlType;
		static int TableControlType;
		static int TableItemPattern;
		static int TableItem_ColumnHeaderItems_Property;
		static int TableItem_RowHeaderItems_Property;
		static int TablePattern;
		static int Table_ColumnHeaders_Property;
		static int Table_RowHeaders_Property;
		static int Table_RowOrColumnMajor_Property;
		static int TextControlType;
		static int TextPattern;
		static int TextTextSelectionChangedEvent;
		static int ThumbControlType;
		static int TitleBarControlType;
		static int TogglePattern;
		static int Toggle_ToggleState_Property;
		static int ToolBarControlType;
		static int ToolTipClosedEvent;
		static int ToolTipControlType;
		static int ToolTipOpenedEvent;
		static int TransformPattern;
		static int TreeControlType;
		static int TreeItemControlType;
		static int ValuePattern;
		static int Value_IsReadOnly_Property;
		static int Value_Value_Property;
		static int VirtualizedItemPattern;
		static int WindowControlType;
		static int WindowPattern;
		static int WindowWindowClosedEvent;
		static int WindowWindowOpenedEvent;
		static long (* UiaHostProviderFromHwnd)(HWND__ *,IRawElementProviderSimple * *);
		static long (* UiaRaiseAutomationEvent)(IRawElementProviderSimple *,int);
		static long (* UiaRaiseAutomationPropertyChangedEvent)(IRawElementProviderSimple *,int,tagVARIANT,tagVARIANT);
		static long (* UiaRaiseStructureChangedEvent)(IRawElementProviderSimple *,StructureChangeType,int *,int);
		static long CreatePatternProvider(Schema::Pattern,ElementProvider *,IUnknown * *);
		static long Init();
	};

	class ScrollBar
	{
		static IClassInfo * s_pClassInfo;
	protected:
		virtual long CreateButtons();
	public:
		ScrollBar & operator=(ScrollBar const &);
		ScrollBar();
		ScrollBar(ScrollBar const &);
		bool GetVertical();
		int GetOrder();
		long Initialize(bool,Element *,unsigned long *);
		long SetOrder(int);
		long SetProportional(bool);
		long SetVertical(bool);
		static IClassInfo * GetClassInfoPtr();
		static PropertyInfo const * LineProp();
		static PropertyInfo const * MaximumProp();
		static PropertyInfo const * MinimumProp();
		static PropertyInfo const * OrderProp();
		static PropertyInfo const * PageProp();
		static PropertyInfo const * PositionProp();
		static PropertyInfo const * ProportionalProp();
		static PropertyInfo const * VerticalProp();
		static long Create(Element *,unsigned long *,Element * *);
		static long Create(bool,Element *,unsigned long *,Element * *);
		static long Register();
		static void SetClassInfoPtr(IClassInfo *);
		virtual Element * GetElement();
		virtual IClassInfo * GetClassInfoW();
		virtual bool GetProportional();
		virtual bool OnPropertyChanging(PropertyInfo const *,int,Value *,Value *);
		virtual int GetLine();
		virtual int GetMaximum();
		virtual int GetMinimum();
		virtual int GetPage();
		virtual int GetPosition();
		virtual long SetLine(int);
		virtual long SetMaximum(int);
		virtual long SetMinimum(int);
		virtual long SetPage(int);
		virtual long SetPosition(int);
		virtual tagSIZE _SelfLayoutUpdateDesiredSize(int,int,Surface *);
		virtual void OnEvent(Event *);
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
		virtual void _SelfLayoutDoLayout(int,int);
		virtual ~ScrollBar();
	};

	class ScrollBarRangeValueProxy
	{
	protected:
		virtual void Init(Element *);
	public:
		ScrollBarRangeValueProxy & operator=(ScrollBarRangeValueProxy const &);
		ScrollBarRangeValueProxy();
		ScrollBarRangeValueProxy(ScrollBarRangeValueProxy const &);
		virtual long DoMethod(int,char *);
	};

	struct ScrollItemProvider
	{
		ScrollItemProvider();
		virtual ProviderProxy * (*GetProxyCreator())(Element *);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual long ScrollIntoView();
		virtual unsigned long AddRef();
		virtual unsigned long Release();
		virtual ~ScrollItemProvider();
	};

	class ScrollItemProxy
	{
	protected:
		virtual void Init(Element *);
	public:
		ScrollItemProxy & operator=(ScrollItemProxy const &);
		ScrollItemProxy();
		ScrollItemProxy(ScrollItemProxy const &);
		static ScrollItemProxy * Create(Element *);
		static bool IsPatternSupported(Element *);
		virtual long DoMethod(int,char *);
	};

	struct ScrollProvider
	{
		ScrollProvider();
		virtual ProviderProxy * (*GetProxyCreator())(Element *);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual long Scroll(ScrollAmount,ScrollAmount);
		virtual long SetScrollPercent(double,double);
		virtual long get_HorizontalScrollPercent(double *);
		virtual long get_HorizontalViewSize(double *);
		virtual long get_HorizontallyScrollable(int *);
		virtual long get_VerticalScrollPercent(double *);
		virtual long get_VerticalViewSize(double *);
		virtual long get_VerticallyScrollable(int *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
		virtual ~ScrollProvider();
	};

	class ScrollProxy
	{
		BaseScrollBar * GetScrollBar(bool);
		BaseScrollBar * GetScrollBarHelper(Element *,bool);
		long GetScrollPercent(bool,double *);
		long GetScrollable(bool,int *);
		long GetViewSize(bool,double *);
		long GetViewer(Viewer * *);
		long Scroll(ScrollAmount,ScrollAmount);
		long ScrollLine(bool,bool);
		long ScrollPage(bool,bool);
		long ScrollToHorizontalPosition(int,bool);
		long ScrollToVerticalPosition(int,bool);
		long SetPercent(BaseScrollBar *,double);
		long SetScrollPercent(double,double);
	protected:
		virtual void Init(Element *);
	public:
		ScrollProxy & operator=(ScrollProxy const &);
		ScrollProxy();
		ScrollProxy(ScrollProxy const &);
		static ScrollProxy * Create(Element *);
		static bool IsPatternSupported(Element *);
		virtual long DoMethod(int,char *);
	};

	class ScrollViewer
	{
		static IClassInfo * s_pClassInfo;
	protected:
		virtual BaseScrollBar * GetHScroll();
		virtual BaseScrollBar * GetVScroll();
		virtual long AddChildren();
		virtual long CreateScrollBars();
	public:
		ScrollViewer & operator=(ScrollViewer const &);
		ScrollViewer();
		ScrollViewer(ScrollViewer const &);
		static IClassInfo * GetClassInfoPtr();
		static long Create(Element *,unsigned long *,Element * *);
		static long Register();
		static void SetClassInfoPtr(IClassInfo *);
		virtual IClassInfo * GetClassInfoW();
		virtual void OnListenedPropertyChanged(Element *,PropertyInfo const *,int,Value *,Value *);
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
		virtual ~ScrollViewer();
	};

	struct SelectionItemProvider
	{
		SelectionItemProvider();
		virtual ProviderProxy * (*GetProxyCreator())(Element *);
		virtual long AddToSelection();
		virtual long QueryInterface(_GUID const &,void * *);
		virtual long RemoveFromSelection();
		virtual long Select();
		virtual long get_IsSelected(int *);
		virtual long get_SelectionContainer(IRawElementProviderSimple * *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
		virtual ~SelectionItemProvider();
	};

	class SelectionItemProxy
	{
	protected:
		SelectionItemProxy();
		Selector * GetAncestorAndChild<Selector>(Element * *);
		virtual void Init(Element *);
	public:
		SelectionItemProxy & operator=(SelectionItemProxy const &);
		SelectionItemProxy(SelectionItemProxy const &);
		static SelectionItemProxy * Create(Element *);
		static bool IsPatternSupported(Element *);
		virtual long DoMethod(int,char *);
	};

	struct SelectionProvider
	{
		SelectionProvider();
		virtual ProviderProxy * (*GetProxyCreator())(Element *);
		virtual long GetSelection(tagSAFEARRAY * *);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual long get_CanSelectMultiple(int *);
		virtual long get_IsSelectionRequired(int *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
		virtual ~SelectionProvider();
	};

	class SelectionProxy
	{
	protected:
		SelectionProxy();
		virtual void Init(Element *);
	public:
		SelectionProxy & operator=(SelectionProxy const &);
		SelectionProxy(SelectionProxy const &);
		static SelectionProxy * Create(Element *);
		static bool IsPatternSupported(Element *);
		virtual long DoMethod(int,char *);
	};

	class Selector
	{
		static IClassInfo * s_pClassInfo;
	public:
		Element * GetSelection();
		Selector & operator=(Selector const &);
		Selector();
		Selector(Selector const &);
		long Initialize(Element *,unsigned long *);
		static IClassInfo * GetClassInfoPtr();
		static PropertyInfo const * SelectionProp();
		static UID SelectionChange();
		static long Create(Element *,unsigned long *,Element * *);
		static long Register();
		static void SetClassInfoPtr(IClassInfo *);
		virtual Element * GetAdjacent(Element *,int,NavReference const *,unsigned long);
		virtual IClassInfo * GetClassInfoW();
		virtual long SetSelection(Element *);
		virtual void OnEvent(Event *);
		virtual void OnInput(InputEvent *);
		virtual void OnKeyFocusMoved(Element *,Element *);
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
		virtual ~Selector();
	};

	class SelectorNoDefault
	{
		static IClassInfo * s_pClassInfo;
	public:
		SelectorNoDefault & operator=(SelectorNoDefault const &);
		SelectorNoDefault();
		SelectorNoDefault(SelectorNoDefault const &);
		long Initialize(Element *,unsigned long *);
		static IClassInfo * GetClassInfoPtr();
		static long Create(Element *,unsigned long *,Element * *);
		static long Register();
		static void SetClassInfoPtr(IClassInfo *);
		virtual IClassInfo * GetClassInfoW();
		virtual long SetSelection(Element *);
		virtual void OnEvent(Event *);
		virtual void OnKeyFocusMoved(Element *,Element *);
		virtual ~SelectorNoDefault();
	};

	class SelectorSelectionItemProxy
	{
		long AddToSelection();
		long GetSelectionContainer(IRawElementProviderSimple * *);
		long Select();
	protected:
		virtual void Init(Element *);
	public:
		SelectorSelectionItemProxy & operator=(SelectorSelectionItemProxy const &);
		SelectorSelectionItemProxy();
		SelectorSelectionItemProxy(SelectorSelectionItemProxy const &);
		virtual long DoMethod(int,char *);
	};

	class SelectorSelectionProxy
	{
		long GetIsSelectionRequired(int *);
	protected:
		virtual void Init(Element *);
	public:
		SelectorSelectionProxy & operator=(SelectorSelectionProxy const &);
		SelectorSelectionProxy();
		SelectorSelectionProxy(SelectorSelectionProxy const &);
		virtual long DoMethod(int,char *);
	};

	class SemanticController
	{
		void _OnRequestVisualSwap(float,float,float,float);
		void _OverrideTargetFromAlignment(bool,bool,int,int,long,long,float *,float *);
		void _ProcessScaleFactorChange(float,float,float,float,float);
		void _UpdateThresholds();
	public:
		SemanticController(float,float,Element *);
		bool IsZoomCompleteForManualSwap(float);
		long OverrideZoomThreshold(float,float,int);
		long UpdateZoomLevels(float,float);
		void GetLastTarget(bool,bool,int,int,float *,float *);
	};

	class SemanticZoomToggle
	{
		static IClassInfo * s_pClassInfo;
	public:
		long Initialize(Element *,unsigned long *);
		static IClassInfo * GetClassInfoPtr();
		static UID Toggle();
		static long Create(Element *,unsigned long *,Element * *);
		static long Register();
		virtual IClassInfo * GetClassInfoW();
		virtual long DefaultAction();
		void UpdateToggleState(SemanticZoomToggleState,bool);
	};

	class ShellBorderLayout
	{
		long _CalcTabOrder(Element *);
		void _Reset();
	public:
		ShellBorderLayout & operator=(ShellBorderLayout const &);
		ShellBorderLayout();
		ShellBorderLayout(ShellBorderLayout const &);
		static long Create(Layout * *);
		static long Create(int,int *,Value * *);
		virtual Element * GetAdjacent(Element *,Element *,int,NavReference const *,unsigned long);
		virtual void OnAdd(Element *,Element * *,unsigned int);
		virtual void OnLayoutPosChanged(Element *,Element *,int,int);
		virtual void OnRemove(Element *,Element * *,unsigned int);
		virtual ~ShellBorderLayout();
	};

	class SimpleTimer
	{
		static void s_ActionCallback(GMA_ACTIONINFO *);
	public:
		bool Stop();
		void DelayedStart(float);
	};

	struct SimulatedAlphaRichText
	{
		virtual long GetForegroundColorRef(unsigned long *);
	};

	struct SinkProvider
	{
		virtual long GetPatternProvider(int,IUnknown * *);
		virtual long GetPropertyValue(int,tagVARIANT *);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual long get_HostRawElementProvider(IRawElementProviderSimple * *);
		virtual long get_ProviderOptions(ProviderOptions *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
	};

	class SmoothDot
	{
		static int s_CalcDotPixelIntensity(float,float,float);
		static void s_SetPixel(SmoothDot::DRAW_PARAMS const *,int,int,int);
	public:
		static void s_CalculateDotPositions(HDC__ *,HGADGET__ *,unsigned long,__int64,__int64,unsigned long,int *,_LARGE_INTEGER *,__int64 *,__int64 *);
		static void s_DrawDot(SmoothDot::DRAW_PARAMS const *,float,float,float);
	};

	class SnapshotElement
	{
		static IClassInfo * s_pClassInfo;
	protected:
		static long _SetVisualContent(Element *,IUnknown *);
		static void StopPositionAndAlphaAnimations_recursive(Element *);
		virtual void OnHosted(Element *);
	public:
		static long Create(Element *,Element *,unsigned long *,Element * *);
		virtual IClassInfo * GetClassInfoW();
		virtual ~SnapshotElement();
	};

	struct StyleSheet
	{
		StyleSheet & operator=(StyleSheet const &);
		StyleSheet();
		StyleSheet(StyleSheet const &);
		static long Create(StyleSheet * *);
	};

	namespace StyleSheetCache
	{
		class CCacheThread
		{
			bool _IsThreadExitPending();
			long _EnsureThread();
			long _Execute(CCacheThread::Invoke const *);
			static unsigned long s_ThreadProc(void *);
			void _InvokeTarget();
		public:
			bool IsOn();
			long Initialize();
			long RegisterThread();
			long UnregisterThread(unsigned long);
			~CCacheThread();
		};

		class CSheetEntry
		{
			long Initialize(HINSTANCE__ *,HINSTANCE__ *,unsigned short const *,DynamicScaleParsing,float);
			static unsigned int s_SheetCacheId;
		public:
			bool Matches(HINSTANCE__ *,unsigned short const *,DynamicScaleParsing,float,unsigned short const *);
			long GetSheet(unsigned short const *,Value * *);
			long LoadSheet();
			static long s_Create(HINSTANCE__ *,HINSTANCE__ *,unsigned short const *,DynamicScaleParsing,float,CSheetEntry * *);
			~CSheetEntry();
		};

	};

	class StyledScrollViewer
	{
		static IClassInfo * s_pClassInfo;
	protected:
		virtual BaseScrollBar * GetHScroll();
		virtual BaseScrollBar * GetVScroll();
		virtual long AddChildren();
		virtual long CreateScrollBars();
	public:
		StyledScrollViewer & operator=(StyledScrollViewer const &);
		StyledScrollViewer();
		StyledScrollViewer(StyledScrollViewer const &);
		static IClassInfo * GetClassInfoPtr();
		static long Create(Element *,unsigned long *,Element * *);
		static long Register();
		static void SetClassInfoPtr(IClassInfo *);
		virtual IClassInfo * GetClassInfoW();
		virtual void OnListenedPropertyChanged(Element *,PropertyInfo const *,int,Value *,Value *);
		virtual ~StyledScrollViewer();
	};

	struct Surface
	{
		Surface & operator=(Surface const &);
		Surface();
		Surface(Surface const &);
		static Surface::EType GetSurfaceType(unsigned int);
		static unsigned int GetSurfaceType(Surface::EType);
		virtual ~Surface();
	};

	class TSVEnableVirtualizationBehavior
	{
	protected:
		static _GUID const * const * const s_rgpIID;
	public:
		static long Create(IDuiBehavior * *);
		virtual long GetCallbackFilters(DuiBehaviorFilters::Flags *);
		virtual long Init(Value *);
		virtual long OnAttach(Element *);
		virtual long OnDetach(Element *);
	};

	class TSVVirtualizedContainerBehavior
	{
	protected:
		static _GUID const * const * const s_rgpIID;
	public:
		static long Create(IDuiBehavior * *);
		virtual long GetCallbackFilters(DuiBehaviorFilters::Flags *);
		virtual long Init(Value *);
		virtual long OnHosted(Element *,Element *);
		virtual long OnPropertyChanged(Element *,PropertyInfo const *,int,Value *,Value *);
		virtual long OnUnHosted(Element *,Element *);
	};

	struct TableItemProvider
	{
		TableItemProvider();
		virtual ProviderProxy * (*GetProxyCreator())(Element *);
		virtual long GetColumnHeaderItems(tagSAFEARRAY * *);
		virtual long GetRowHeaderItems(tagSAFEARRAY * *);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
		virtual ~TableItemProvider();
	};

	class TableItemProxy
	{
	protected:
		virtual void Init(Element *);
	public:
		TableItemProxy & operator=(TableItemProxy const &);
		TableItemProxy();
		TableItemProxy(TableItemProxy const &);
		static TableItemProxy * Create(Element *);
		static bool IsPatternSupported(Element *);
		virtual long DoMethod(int,char *);
	};

	struct TableLayout
	{
		CellInfo * GetCellInfo(int);
		TableLayout & operator=(TableLayout const &);
		TableLayout();
		TableLayout(TableLayout const &);
		static long Create(int,int *,Value * *);
		static long InternalCreate(int,int,int,int *,Layout * *);
		virtual Element * GetAdjacent(Element *,Element *,int,NavReference const *,unsigned long);
		virtual tagSIZE UpdateDesiredSize(Element *,int,int,Surface *);
		virtual void DoLayout(Element *,int,int);
		virtual ~TableLayout();
		void Initialize(int,int,int,int *);
	};

	struct TableProvider
	{
		TableProvider();
		virtual ProviderProxy * (*GetProxyCreator())(Element *);
		virtual long GetColumnHeaders(tagSAFEARRAY * *);
		virtual long GetRowHeaders(tagSAFEARRAY * *);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual long get_RowOrColumnMajor(RowOrColumnMajor *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
		virtual ~TableProvider();
	};

	class TableProxy
	{
	protected:
		virtual void Init(Element *);
	public:
		TableProxy & operator=(TableProxy const &);
		TableProxy();
		TableProxy(TableProxy const &);
		static TableProxy * Create(Element *);
		static bool IsPatternSupported(Element *);
		virtual long DoMethod(int,char *);
	};

	class TaskPage
	{
		int OnWndMsg(unsigned int,unsigned __int64,__int64,__int64 *);
		long LoadComCtl32();
		long LoadPage(Element * *,Element *,DUIXmlParser * *);
		static __int64 StaticXHostSubclassProc(HWND__ *,unsigned int,unsigned __int64,__int64);
		static void StaticXmlParserError(unsigned short const *,unsigned short const *,int,void *);
		virtual long CreateDUICP(HWNDElement *,HWND__ *,HWND__ *,Element * *,DUIXmlParser * *);
		virtual long CreateParserCP(DUIXmlParser * *);
		virtual void DestroyCP();
		void FreeComCtl32();
	protected:
		Element * GetElement();
		__int64 PropSheet_SendMessage(unsigned int,unsigned __int64,__int64);
		virtual Element * OnQueryInitialFocus();
		virtual __int64 OnKillActive();
		virtual __int64 OnQueryCancel();
		virtual __int64 OnReset();
		virtual __int64 OnSetActive();
		virtual __int64 OnWizBack();
		virtual __int64 OnWizFinish();
		virtual __int64 OnWizNext();
		virtual bool OnListenedPropertyChanging(Element *,PropertyInfo const *,int,Value *,Value *);
		virtual bool OnMessage(unsigned int,unsigned __int64,__int64,__int64 *);
		virtual long LoadPage(HWNDElement *,HINSTANCE__ *,Element * *,DUIXmlParser * *);
		virtual long LoadParser(DUIXmlParser * *);
		virtual unsigned int GetPageRCID();
		virtual unsigned short const * GetPageResID();
		virtual void InitPropSheetPage(_PROPSHEETPAGEW *);
		virtual void OnListenedEvent(Element *,Event *);
		virtual void OnListenedInput(Element *,InputEvent *);
		virtual void OnListenedPropertyChanged(Element *,PropertyInfo const *,int,Value *,Value *);
		virtual void OnListenerAttach(Element *);
		virtual void OnListenerDetach(Element *);
	public:
		HWND__ * GetParentHWND();
		TaskPage & operator=(TaskPage const &);
		TaskPage();
		TaskPage(TaskPage const &);
		long DUICreatePropertySheetPage(HINSTANCE__ *);
		operator _PSP *();
		virtual ~TaskPage();
	};

	class TextGraphic
	{
		static IClassInfo * s_pClassInfo;
	public:
		TextGraphic & operator=(TextGraphic const &);
		TextGraphic();
		TextGraphic(TextGraphic const &);
		long Initialize(Element *,unsigned long *);
		static IClassInfo * GetClassInfoPtr();
		static PropertyInfo const * SideGraphicProp();
		static long Create(Element *,unsigned long *,Element * *);
		static long Register();
		static void SetClassInfoPtr(IClassInfo *);
		virtual IClassInfo * GetClassInfoW();
		virtual bool OnPropertyChanging(PropertyInfo const *,int,Value *,Value *);
		virtual unsigned short const * GetContentStringAsDisplayed(Value * *);
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
		virtual ~TextGraphic();
	};

	struct ThemeHandleCache
	{
		virtual void * Open(unsigned short const *,int);
		virtual void Close(void *);
		void FlushHandles(unsigned __int64);
	};

	class Thumb
	{
		static IClassInfo * s_pClassInfo;
	public:
		Thumb & operator=(Thumb const &);
		Thumb();
		Thumb(Thumb const &);
		long Initialize(unsigned int,Element *,unsigned long *);
		static IClassInfo * GetClassInfoPtr();
		static UID Drag();
		static long Create(Element *,unsigned long *,Element * *);
		static long Create(unsigned int,Element *,unsigned long *,Element * *);
		static long Register();
		static void SetClassInfoPtr(IClassInfo *);
		virtual IClassInfo * GetClassInfoW();
		virtual void OnInput(InputEvent *);
		virtual ~Thumb();
		void SupressRightButtonDrag(bool);
	};

	struct ToggleProvider
	{
		ToggleProvider();
		virtual ProviderProxy * (*GetProxyCreator())(Element *);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual long Toggle();
		virtual long get_ToggleState(ToggleState *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
		virtual ~ToggleProvider();
	};

	class ToggleProxy
	{
		long GetToggleState(ToggleState *);
	protected:
		virtual void Init(Element *);
	public:
		ToggleProxy & operator=(ToggleProxy const &);
		ToggleProxy();
		ToggleProxy(ToggleProxy const &);
		static ToggleProxy * Create(Element *);
		static bool IsPatternSupported(Element *);
		virtual long DoMethod(int,char *);
	};

	class TouchButton
	{
		struct TouchButtonListenerHelper
		{
			virtual void OnListenedInput(Element *,InputEvent *);
		};

		bool _FinishClick(TouchButton::ClickDevice,unsigned int,unsigned int,tagPOINT *);
		bool _StartClick(TouchButton::ClickDevice);
		bool _TriggerRightClick(unsigned int,tagPOINT *);
		bool _UpdateClick(TouchButton::ClickDevice,bool);
		static IClassInfo * s_pClassInfo;
		static UID _UpdateFocusVisibility();
		void _OnKeyboardEvent(KeyboardEvent *);
		void _OnMouseEvent(MouseEvent *);
		void _OnPointerEvent(PointerEvent *);
		void _SyncDefaultEnterHandling(TouchHWNDElement *);
		void _UpdateAccState(bool,bool);
	public:
		TouchButton();
		TouchButton::ClickDevice GetClickDevice();
		bool CancelClick(TouchButton::ClickDevice);
		bool GetCaptured();
		bool GetHandleEnter();
		bool GetHandleGlobalEnter();
		bool GetPressed();
		bool GetShowKeyFocus();
		bool GetTreatRightMouseButtonAsLeft();
		long Initialize(unsigned int,Element *,unsigned long *);
		long SetCaptured(bool);
		long SetHandleEnter(bool);
		long SetHandleGlobalEnter(bool);
		long SetPressed(bool);
		long SetShowKeyFocus(bool);
		long SetTreatRightMouseButtonAsLeft(bool);
		static IClassInfo * GetClassInfoPtr();
		static PropertyInfo const * CapturedProp();
		static PropertyInfo const * HandleEnterProp();
		static PropertyInfo const * HandleGlobalEnterProp();
		static PropertyInfo const * PressedProp();
		static PropertyInfo const * ShowKeyFocusProp();
		static PropertyInfo const * TreatRightMouseButtonAsLeftProp();
		static UID Click();
		static UID MultipleClick();
		static UID RightClick();
		static long Create(Element *,unsigned long *,Element * *);
		static long Create(unsigned int,Element *,unsigned long *,Element * *);
		static long Register();
		virtual IClassInfo * GetClassInfoW();
		virtual long DefaultAction();
		virtual long GetForegroundColorRef(unsigned long *);
		virtual void FireClickEvent(unsigned int,unsigned int,TouchButton::ClickDevice,tagPOINT *);
		virtual void FireRightClickEvent(unsigned int,tagPOINT *);
		virtual void GetImmersiveFocusRectOffsets(tagRECT *);
		virtual void OnEvent(Event *);
		virtual void OnHosted(Element *);
		virtual void OnInput(InputEvent *);
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
		virtual void OnUnHosted(Element *);
		virtual ~TouchButton();
	};

	class TouchCarouselList
	{
		bool _SetFirstItemOffset(int,int,int,int);
		int _GetNormalizedScrollBarPosition();
		static IClassInfo * s_pClassInfo;
		virtual void OnListenedPropertyChanged(Element *,PropertyInfo const *,int,Value *,Value *);
		void _DoSyncChanges();
		void _OnKeyboardEvent(KeyboardEvent *);
		void _OnListFirstItemOffsetChanged(int);
		void _OnYOffsetChanged(int);
		void _SyncChanges();
		void _UpdateSnapshots();
	public:
		TouchCarouselList();
		long Initialize(Element *,unsigned long *);
		long SetWrappingList(WrappingList *);
		virtual IClassInfo * GetClassInfoW();
		virtual long Add(Element * *,unsigned int);
		virtual long Insert(Element * *,unsigned int,unsigned int);
		virtual void OnEvent(Event *);
		virtual void OnHosted(Element *);
		virtual void OnInput(InputEvent *);
		void ScrollSelection(tagRECT const *);
	};

	class TouchCarouselScrollBar
	{
		bool _IsMouseCaptured();
		int _GetPositionRestricted(int);
		int _GetRange();
		long _CreateAndAddArrow(Element *,unsigned short const *,unsigned short const *);
		long _CreateAndAddParts();
		long _FadeAnimation(Element *,unsigned int);
		long _SetAccNames();
		long _SetButtonPart(Element *,unsigned short const *,unsigned short const *,int);
		static IClassInfo * s_pClassInfo;
		virtual void LineDown(unsigned int);
		virtual void LineUp(unsigned int);
		virtual void OnListenedEvent(Element *,Event *);
		virtual void OnListenedInput(Element *,InputEvent *);
		virtual void OnListenedPropertyChanged(Element *,PropertyInfo const *,int,Value *,Value *);
		virtual void PageDown(unsigned int);
		virtual void PageUp(unsigned int);
		void _SetActiveState(ActiveState);
		void _UpdateThumbPosition();
		void _UpdateVisualState();
	public:
		TouchCarouselScrollBar();
		long Initialize(Element *,unsigned long *);
		static UID EndThumbDrag();
		static UID StartThumbDrag();
		virtual IClassInfo * GetClassInfoW();
		virtual bool OnPropertyChanging(PropertyInfo const *,int,Value *,Value *);
		virtual void OnEvent(Event *);
		virtual void OnHosted(Element *);
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
	};

	class TouchCheckBox
	{
		Element * _GetLabel();
		long _CreateAndAddGlyph();
		long _CreateAndAddLabel();
		static IClassInfo * s_pClassInfo;
		void _UpdateAccState(bool,CheckedStateFlags);
	public:
		CheckedStateFlags GetCheckedState();
		TouchCheckBox();
		bool GetToggleOnClick();
		long Initialize(unsigned int,Element *,unsigned long *);
		long SetCheckedState(CheckedStateFlags);
		long SetToggleOnClick(bool);
		static IClassInfo * GetClassInfoPtr();
		static PropertyInfo const * CheckedStateProp();
		static PropertyInfo const * ToggleOnClickProp();
		static long Create(Element *,unsigned long *,Element * *);
		static long Create(unsigned int,Element *,unsigned long *,Element * *);
		static long Register();
		virtual IClassInfo * GetClassInfoW();
		virtual bool OnPropertyChanging(PropertyInfo const *,int,Value *,Value *);
		virtual long Insert(Element * *,unsigned int,unsigned int);
		virtual void GetImmersiveFocusRectOffsets(tagRECT *);
		virtual void OnEvent(Event *);
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
		virtual void Paint(HDC__ *,tagRECT const *,tagRECT const *,tagRECT *,tagRECT *);
		virtual ~TouchCheckBox();
	};

	class TouchCheckBoxGlyph
	{
		static IClassInfo * s_pClassInfo;
	public:
		TouchCheckBoxGlyph();
		long Initialize(Element *,unsigned long *);
		static IClassInfo * GetClassInfoPtr();
		static long Create(Element *,unsigned long *,Element * *);
		static long Register();
		virtual IClassInfo * GetClassInfoW();
		virtual bool OnPropertyChanging(PropertyInfo const *,int,Value *,Value *);
		virtual long Insert(Element * *,unsigned int,unsigned int);
		virtual void Paint(HDC__ *,tagRECT const *,tagRECT const *,tagRECT *,tagRECT *);
		virtual ~TouchCheckBoxGlyph();
	};

	class TouchCommandButton
	{
		Element * _GetContentElement();
		Element * _GetSubContentElement();
		static IClassInfo * s_pClassInfo;
	public:
		TouchCommandButton();
		long Initialize(unsigned int,Element *,unsigned long *);
		long SetSubContent(unsigned short const *);
		static IClassInfo * GetClassInfoPtr();
		static PropertyInfo const * SubContentProp();
		static long Create(Element *,unsigned long *,Element * *);
		static long Create(unsigned int,Element *,unsigned long *,Element * *);
		static long Register();
		unsigned short const * GetSubContent(Value * *);
		virtual IClassInfo * GetClassInfoW();
		virtual bool OnPropertyChanging(PropertyInfo const *,int,Value *,Value *);
		virtual long Insert(Element * *,unsigned int,unsigned int);
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
		virtual void Paint(HDC__ *,tagRECT const *,tagRECT const *,tagRECT *,tagRECT *);
	};

	class TouchDialogElement
	{
		static IClassInfo * s_pClassInfo;
	public:
		static PropertyInfo const * ButtonClassAcceptsEnterKeyProp();
		static PropertyInfo const * DefaultButtonTrackingProp();
		static PropertyInfo const * HandleEnterKeyProp();
		static PropertyInfo const * RegisteredDefaultButtonProp();
		virtual Element * GetDefaultButton();
		virtual Element * GetKeyFocusedElement();
		virtual Element * GetRegisteredDefaultButton();
		virtual bool GetButtonClassAcceptsEnterKey();
		virtual bool GetDefaultButtonTracking();
		virtual bool GetHandleEnterKey();
		virtual bool OnListenedPropertyChanging(Element *,PropertyInfo const *,int,Value *,Value *);
		virtual long SetDefaultButtonTracking(bool);
		virtual void OnDestroy();
		virtual void OnGetDlgCode(tagMSG *,__int64 *);
		virtual void OnInput(InputEvent *);
		virtual void OnKeyFocusMoved(Element *,Element *);
		virtual void OnListenedEvent(Element *,Event *);
		virtual void OnListenedInput(Element *,InputEvent *);
		virtual void OnListenedPropertyChanged(Element *,PropertyInfo const *,int,Value *,Value *);
		virtual void OnListenerAttach(Element *);
		virtual void OnListenerDetach(Element *);
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
	};

	class TouchEdit2
	{
		bool _IsRevealButtonActive();
		long _CreateDirectChildren();
		long _CreateTextElements();
		static IClassInfo * s_pClassInfo;
		virtual bool OnListenedPropertyChanging(Element *,PropertyInfo const *,int,Value *,Value *);
		virtual void OnListenedEvent(Element *,Event *);
		virtual void OnListenedInput(Element *,InputEvent *);
		virtual void OnListenedPropertyChanged(Element *,PropertyInfo const *,int,Value *,Value *);
		virtual void OnListenerAttach(Element *);
		virtual void OnListenerDetach(Element *);
		void _RevealPassword(TouchEditBase::PasswordReveal);
		void _UpdateButton();
		void _UpdatePrompt();
	public:
		TouchEdit2();
		TouchEditPasswordRevealMode GetPasswordRevealMode();
		__MIDL___MIDL_itf_inputscope_0000_0000_0001 GetInputScope();
		bool GetPromptWithCaret();
		bool GetSuppressClearButton();
		bool HasSelection();
		int GetShowClearButtonMinWidth();
		long GetSelection(long *,long *);
		long GetTextHost(ITextHost * *);
		long GetTextSelection(ITextSelection * *);
		long Initialize(Element *,unsigned long *);
		long PasteText(unsigned short const *);
		long SelectAll();
		long SelectNone();
		long SetCaretPosition(long);
		long SetInnerBorderThickness(int,int,int,int);
		long SetInputScope(__MIDL___MIDL_itf_inputscope_0000_0000_0001);
		long SetPasswordRevealMode(TouchEditPasswordRevealMode);
		long SetPromptText(unsigned short const *);
		long SetPromptWithCaret(bool);
		long SetSelection(long,long);
		long SetShowClearButtonMinWidth(int);
		long SetSuppressClearButton(bool);
		static IClassInfo * GetClassInfoPtr();
		static PropertyInfo const * InnerBorderThicknessProp();
		static PropertyInfo const * PasswordRevealModeProp();
		static PropertyInfo const * PromptTextProp();
		static PropertyInfo const * PromptWithCaretProp();
		static PropertyInfo const * ShowClearButtonMinWidthProp();
		static PropertyInfo const * SuppressClearButtonProp();
		static UID ClearButtonClicked();
		static UID ContextMenuRequested();
		static long Create(Element *,unsigned long *,Element * *);
		static long Register();
		tagRECT const * GetInnerBorderThickness(Value * *);
		unsigned short const * GetPromptText(Value * *);
		virtual Element * GetUiaFocusDelegate();
		virtual IClassInfo * GetClassInfoW();
		virtual bool OnPropertyChanging(PropertyInfo const *,int,Value *,Value *);
		virtual long Add(Element * *,unsigned int);
		virtual long FinalizeCurrentIMEComposition();
		virtual long GetAccessibleImpl(IAccessible * *);
		virtual long GetTextDocument(ITextDocument * *);
		virtual long GetTextServices(ITextServices * *);
		virtual long RefreshContent();
		virtual void OnEvent(Event *);
		virtual void OnHosted(Element *);
		virtual void OnInput(InputEvent *);
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
		virtual void Paint(HDC__ *,tagRECT const *,tagRECT const *,tagRECT *,tagRECT *);
		void DisableSelectionHandlesOnEmptyContent();
	};

	struct TouchEditAccessible
	{
		static long Create(Element *,DuiAccessible * *);
		virtual long get_accState(tagVARIANT,tagVARIANT *);
		virtual long put_accValue(tagVARIANT,unsigned short *);
	};

	class TouchEditBase
	{
		static IClassInfo * s_pClassInfo;
	protected:
		long _GetEncodedContentString(Value *,unsigned short * *,unsigned __int64 *);
		long _GetEncodedContentString(unsigned short * *,unsigned __int64 *);
		long _RestoreModified();
		long _SaveModified();
		void _SecureDelete(unsigned short *,unsigned __int64);
		void _SetPasswordReveal(TouchEditBase::PasswordReveal);
	public:
		TouchEditFilteredKeyComboFlags GetIgnoredKeyCombos();
		TouchEditKeyboardNavigationCapture GetKeyboardNavigationCapture();
		TouchEditTextMode GetTextMode();
		Value * GetSelectionBackgroundColor();
		Value * GetSelectionForegroundColor();
		bool GetElementMovesOnIHMNotify();
		bool GetFilterOnPaste();
		bool GetForceEditTextToLTR();
		bool GetIMEComposing();
		bool GetIntegrateIMECandidateList();
		bool GetMoveCaretToEndOnSyncContent();
		bool GetMultiline();
		bool GetPreventFormatChangeUpdatingModifiedState();
		bool GetReadOnly();
		bool GetSyncContentWhileIMEComposing();
		int GetMaxLength();
		int GetPasswordCharacter();
		long SetElementMovesOnIHMNotify(bool);
		long SetFilterOnPaste(bool);
		long SetForceEditTextToLTR(bool);
		long SetIMEComposing(bool);
		long SetIgnoredKeyCombos(TouchEditFilteredKeyComboFlags,TouchEditFilteredKeyComboFlags);
		long SetIntegrateIMECandidateList(bool);
		long SetKeyboardNavigationCapture(TouchEditKeyboardNavigationCapture);
		long SetMaxLength(int);
		long SetMoveCaretToEndOnSyncContent(bool);
		long SetMultiline(bool);
		long SetPasswordCharacter(int);
		long SetPreventFormatChangeUpdatingModifiedState(bool);
		long SetReadOnly(bool);
		long SetSelectionBackgroundColor(Value *);
		long SetSelectionForegroundColor(Value *);
		long SetSyncContentWhileIMEComposing(bool);
		long SetTextMode(TouchEditTextMode);
		static IClassInfo * GetClassInfoPtr();
		static PropertyInfo const * ElementMovesOnIHMNotifyProp();
		static PropertyInfo const * FilterOnPasteProp();
		static PropertyInfo const * ForceEditTextToLTRProp();
		static PropertyInfo const * IMEComposingProp();
		static PropertyInfo const * IgnoredKeyCombosProp();
		static PropertyInfo const * IntegrateIMECandidateListProp();
		static PropertyInfo const * KeyboardNavigationCaptureProp();
		static PropertyInfo const * MaxLengthProp();
		static PropertyInfo const * MoveCaretToEndOnSyncContentProp();
		static PropertyInfo const * MultilineProp();
		static PropertyInfo const * PasswordCharacterProp();
		static PropertyInfo const * PreventFormatChangeUpdatingModifiedStateProp();
		static PropertyInfo const * ReadOnlyProp();
		static PropertyInfo const * SelectionBackgroundColorProp();
		static PropertyInfo const * SelectionForegroundColorProp();
		static PropertyInfo const * SyncContentWhileIMEComposingProp();
		static PropertyInfo const * TextModeProp();
		static UID CaretMoved();
		static UID Cut();
		static UID Enter();
		static UID Paste();
		static UID UserTextChanged();
		static UID UserTextUpdateNoChange();
		static long Create(Element *,unsigned long *,Element * *);
		static long Register();
		virtual IClassInfo * GetClassInfoW();
		virtual bool IsContentProtected();
		virtual bool OnPropertyChanging(PropertyInfo const *,int,Value *,Value *);
		virtual long FinalizeCurrentIMEComposition();
		virtual long GetControllerFor(IUnknown * *);
		virtual long GetTextDocument(ITextDocument * *);
		virtual long GetTextServices(ITextServices * *);
		virtual long Insert(Element * *,unsigned int,unsigned int);
		virtual long RefreshContent();
		virtual unsigned short const * GetContentStringAsDisplayed(Value * *);
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
		virtual void SetKeyFocus();
	};

	class TouchEditInner
	{
		HWND__ * _GetHWND();
		bool _IsCaretPosValid();
		bool _ReservedKeyboardEvent(KeyboardEvent const *);
		bool _ShouldIgnoreKeyboardEvent(KeyboardEvent const *);
		long _CreateAndAddAdaptor();
		long _CreateTextServices(IUnknown *,ITextHost *,IUnknown * *);
		long _DisplayContextMenu(_getcontextmenuexex const * const);
		long _GetContextMenuSelectionRect(unsigned short,tagPOINT const &,tagRECT *,CONTEXT_MENU_DEVICE_ORIGIN *);
		long _GetRECText(unsigned short * *);
		long _GetTextHeight(HDC__ *);
		long _HandleContextMenu(unsigned short,_getcontextmenuexex const * const);
		long _RECNotify(unsigned long,void *);
		long _UpdateInputScope(bool);
		static IClassInfo * s_pClassInfo;
		virtual void OnListenedEvent(Element *,Event *);
		void _CreateCaret(HBITMAP__ *,int,int);
		void _DestroyCaret();
		void _FireUserTextChangedEvent();
		void _GetElementToCHARFORMAT2(CHARFORMAT2W *);
		void _GetElementToPARAFORMAT2(PARAFORMAT2 *);
		void _NotifyTextServices();
		void _OnKeyboardEvent(KeyboardEvent *);
		void _OnMouseEvent(MouseEvent *);
		void _OnPointerEvent(PointerEvent *);
		void _ScrollCaretIntoView();
		void _SetCaretPos(int,int);
		void _SyncContent();
		void _SyncContentAlign(bool);
		void _SyncDirection(bool);
		void _SyncFont(bool);
		void _SyncKeyFocused();
		void _SyncRect(bool);
		void _UpdateCaret();
		void _UpdateCharFormat(CHARFORMAT2W const *,bool);
		void _UpdateParaFormat(PARAFORMAT2 const *,int);
	public:
		TouchEditInner();
		bool HasSelection();
		long GetSelection(long *,long *);
		long Initialize(Element *,unsigned long *);
		long SetPasswordReveal(TouchEditBase::PasswordReveal);
		long SetSelection(long,long);
		virtual IClassInfo * GetClassInfoW();
		virtual bool OnPropertyChanging(PropertyInfo const *,int,Value *,Value *);
		virtual long FinalizeCurrentIMEComposition();
		virtual long GetControllerFor(IUnknown * *);
		virtual long GetElementProviderImpl(InvokeHelper *,ElementProvider * *);
		virtual long GetTextDocument(ITextDocument * *);
		virtual long GetTextServices(ITextServices * *);
		virtual long GetUIAElementProvider(_GUID const &,void * *);
		virtual long RefreshContent();
		virtual tagSIZE GetContentSize(int,int,Surface *);
		virtual void OnEvent(Event *);
		virtual void OnHosted(Element *);
		virtual void OnInput(InputEvent *);
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
		virtual void OnUnHosted(Element *);
		virtual void Paint(HDC__ *,tagRECT const *,tagRECT const *,tagRECT *,tagRECT *);
		virtual ~TouchEditInner();
		void ClearContent();
	};

	class TouchHWNDElement
	{
		struct ElementWithTooltipListener
		{
			virtual void OnListenerDetach(Element *);
		};

		class TooltipEventSink
		{
		protected:
			static _GUID const * * s_rgpIID;
		public:
			static long s_CreateInstance(TouchHWNDElement *,_GUID const &,void * *);
			virtual long OnTooltipHidden();
			virtual long OnTooltipTimerFired(TOUCHTOOLTIP_INPUT,TOUCHTOOLTIP_TYPE,TOUCHTOOLTIP_DELAY);
			virtual void OnListenerDetach(Element *);
		};

		DEVICE_SCALE_FACTOR _UpdateImmersiveScaleFactor();
		Element * _TargetElementFromEventInfo(Element *,tagPOINT const *);
		bool _ShouldUseImmersivePerWindowScaling();
		long _EnsureTooltip();
		long _ShowTooltipForElement(TOUCHTOOLTIP_INPUT,Element *);
		static IClassInfo * s_pClassInfo;
		static bool _IsElementContentTruncated(Element *);
		void _FireScaleChangeEvent();
		void _HideFocusRect();
		void _OnIHMNotify(IHMState);
		void _OnTooltipTimerFired(TOUCHTOOLTIP_INPUT,TOUCHTOOLTIP_TYPE,TOUCHTOOLTIP_DELAY);
		void _SetActiveTooltipElement(Element *,TOUCHTOOLTIP_INPUT);
		void _UpdateChildrenForAcceleratorDisplayChange(Element *);
		void _UpdateImmersiveScaleFactorAndMaybeFireScaleChangeEvent();
	protected:
		virtual void _OnUIStateChanged(unsigned short,unsigned short);
		void _ClearTooltipState();
		void _DestroyTooltip();
	public:
		IHMState GetIHMState();
		TouchHWNDElement();
		TouchHWNDElementFlags GetFlags();
		Value * GetWindowAccessGradientColor();
		bool GetLightDismissIHM();
		bool IsRegisteredForAnimationStatusChanges();
		bool ShouldUsePerMonitorScaling();
		int GetTooltipMaximumLineCount();
		long DismissIHMAsync();
		long GetIHMRect(tagRECT *);
		long HideTouchTooltip();
		long Initialize(HWND__ *,bool,unsigned int,Element *,unsigned long *);
		long RegisterForIHMChanges();
		long RegisterForMonitorPowerChanges();
		long SetFlags(TouchHWNDElementFlags,TouchHWNDElementFlags);
		long SetLightDismissIHM(bool);
		long SetTooltipMaximumLineCount(int);
		long SetWindowAccessGradientColor(Value *);
		long ShowRichTooltip(TOUCHTOOLTIP_INPUT,TOUCHTOOLTIP_OPTION_FLAGS,Element *);
		long StartRichTooltipTimer(TOUCHTOOLTIP_INPUT);
		long UnregisterForMonitorPowerChanges();
		static IClassInfo * GetClassInfoPtr();
		static PropertyInfo const * FlagsProp();
		static PropertyInfo const * LightDismissIHMProp();
		static PropertyInfo const * TooltipMaximumLineCountProp();
		static PropertyInfo const * WindowAccessGradientColorProp();
		static UID ForwardingWindowMessage();
		static UID IHMNotify();
		static UID MonitorPowerSettingsChange();
		static UID ProcessingKeyboardNavigation();
		static UID RichTooltipShowing();
		static UID ScaleChanged();
		static UID TextTooltipShowing();
		static UID TooltipTimerStarting();
		static long Create(HWND__ *,bool,unsigned int,Element *,unsigned long *,Element * *);
		static long Register();
		virtual IClassInfo * GetClassInfoW();
		virtual __int64 WndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
		virtual bool IsMSAAEnabled();
		virtual unsigned int MessageCallback(tagGMSG *);
		virtual void ActivateTooltip(Element *,unsigned long);
		virtual void OnDestroy();
		virtual void OnEvent(Event *);
		virtual void OnInput(InputEvent *);
		virtual void OnKeyFocusMoved(Element *,Element *);
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
		virtual void RemoveTooltip(Element *);
		virtual void UpdateTooltip(Element *);
		virtual ~TouchHWNDElement();
		void RegisterForAnimationStatusChanges();
		void UnregisterForAnimationStatusChanges();
		void UnregisterForIHMChanges();
		void UsePerMonitorScaling(HMONITOR__ *);
	};

	class TouchHyperLink
	{
		static IClassInfo * s_pClassInfo;
		void _UpdateAccState(bool,bool);
	public:
		TouchHyperLink();
		bool GetVisited();
		long SetVisited(bool);
		static IClassInfo * GetClassInfoPtr();
		static PropertyInfo const * VisitedProp();
		static long Create(Element *,unsigned long *,Element * *);
		static long Create(unsigned int,Element *,unsigned long *,Element * *);
		static long Register();
		virtual IClassInfo * GetClassInfoW();
		virtual void GetImmersiveFocusRectOffsets(tagRECT *);
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
		virtual ~TouchHyperLink();
	};

	class TouchRepeatButton
	{
		bool _ContinueRepeat();
		static IClassInfo * s_pClassInfo;
		void _FireRepeatClickEvent(unsigned int);
		void _OnRepeatClickTimer();
	public:
		TouchRepeatButton();
		bool GetDisableMouseInRectCheck();
		long Initialize(unsigned int,Element *,unsigned long *);
		long SetDisableMouseInRectCheck(bool);
		static IClassInfo * GetClassInfoPtr();
		static PropertyInfo const * DisableMouseInRectCheckProp();
		static UID RepeatClick();
		static long Create(Element *,unsigned long *,Element * *);
		static long Create(unsigned int,Element *,unsigned long *,Element * *);
		static long Register();
		virtual IClassInfo * GetClassInfoW();
		virtual long DefaultAction();
		virtual void FireClickEvent(unsigned int,unsigned int,TouchButton::ClickDevice,tagPOINT *);
		virtual void FireRightClickEvent(unsigned int,tagPOINT *);
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
	};

	class TouchScrollBar
	{
		struct InnerTouchScrollBarListener
		{
			virtual void OnListenedPropertyChanged(Element *,PropertyInfo const *,int,Value *,Value *);
		};

		bool _HasIndicatorTransformChanged(float);
		bool _HasViewportSizeChanged();
		long _CreateAndAddInnerRichText(Element *,unsigned short const *,unsigned short const *,Element * *);
		long _FadeAnimation(Element *,unsigned int);
		long _UpdateIndicatorTransforms(bool);
		long _UpdateIndicatorTransforms(float);
		static IClassInfo * s_pClassInfo;
		void _GetThumbSize(int,int *,int *);
		void _SetAccNames();
		void _SetPositionOrStop(int);
		void _UpdateVisualState();
	public:
		ActiveState GetActiveState();
		Element * GetThumb();
		TouchScrollBar();
		bool IsThumbActive();
		long CreateSecondaryContent(IDirectManipulationManager *,IDirectManipulationCompositor *,IDirectManipulationViewport *);
		long DeleteSecondaryContent();
		long Initialize(bool,Element *,unsigned long *);
		long SetOffsetDelta(float);
		static IClassInfo * GetClassInfoPtr();
		static UID ActiveStateChanged();
		static UID AnimateScroll();
		static UID InteractionEnd();
		static UID InteractionStart();
		static long Create(Element *,unsigned long *,Element * *);
		static long Register();
		virtual IClassInfo * GetClassInfoW();
		virtual long CreateButtons();
		virtual tagSIZE _SelfLayoutUpdateDesiredSize(int,int,Surface *);
		virtual void LineDown(unsigned int);
		virtual void LineUp(unsigned int);
		virtual void OnEvent(Event *);
		virtual void OnHosted(Element *);
		virtual void OnInput(InputEvent *);
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
		virtual void PageDown(unsigned int);
		virtual void PageUp(unsigned int);
		virtual void _SelfLayoutDoLayout(int,int);
		virtual ~TouchScrollBar();
		void SetActiveState(ActiveState,bool);
	};

	class TouchScrollViewer
	{
		DIRECTMANIPULATION_CONFIGURATION _GetManipulationConfiguration(int);
		bool _ElementExistsInRect(Element *,tagRECT const *);
		bool _GadgetExistsInRect(Element *,tagRECT const *);
		bool _SetElementContentVisualTransform(Element *,float,float,float,float,float,float);
		long _AddTileRect(tagRECT const *,TILE * *);
		long _CreateIndicatorContents();
		long _DeleteIndicatorContents();
		long _ExecuteZoomToRect(float,float,float,float,bool);
		long _GetMouseMovedDelta(MouseEvent *,tagPOINT &);
		long _GetTransformedContentRect(float const * const,tagRECT *);
		long _GoLayered();
		long _GoUnlayered();
		long _LayerContent();
		long _LayerViewer();
		long _PrepareZoomToRect(float,float,float,float,float const *,float const *,float const *,float const *,float const *,bool,float *,float *,float *,float *);
		long _ReinsertDManipIntoVisualTree();
		long _RemoveTileRect(unsigned __int64);
		long _SetManipulationHorizontalAlignment(DIRECTMANIPULATION_HORIZONTALALIGNMENT);
		long _SetManipulationVerticalAlignment(DIRECTMANIPULATION_VERTICALALIGNMENT);
		long _SetSnapPointBehavior(IDirectManipulationPrimaryContent *,DIRECTMANIPULATION_MOTION_TYPES,float,float);
		long _SetSnapPointCoordinate(IDirectManipulationPrimaryContent *,DIRECTMANIPULATION_MOTION_TYPES);
		long _UpdateContentSize();
		long _UpdateContentSnapInterval(DIRECTMANIPULATION_MOTION_TYPES,PropertyInfo const *,PropertyInfo const *);
		long _UpdateContentSnapPoints(DIRECTMANIPULATION_MOTION_TYPES,PropertyInfo const *);
		long _UpdateContentSnapPoints(DIRECTMANIPULATION_MOTION_TYPES,PropertyInfo const *,PropertyInfo const *);
		long _UpdateManipulationConfiguration(int,int);
		long _UpdateSnapType(DIRECTMANIPULATION_MOTION_TYPES,DIRECTMANIPULATION_SNAPPOINT_TYPE);
		long _UpdateTile(TILE *,DynamicArray<CSafeElementPtr<Element> *,0> *);
		long _UpdateTileCollectElements_Recursive(Element *,tagRECT const *,DynamicArray<CSafeElementPtr<Element> *,0> *,bool,int);
		long _UpdateTiles();
		long _UpdateViewportSize();
		long _UpdateZoomBoundaries(PropertyInfo const *,PropertyInfo const *);
		static IClassInfo * s_pClassInfo;
		static UID _InvalidateVirtualizedContainersEvent();
		tagPOINT _GetScreenPosition(MouseEvent *);
		void _CleanupSnapshotVisual();
		void _ClearTiles();
		void _CommitDCompDevice();
		void _DetectKeyboardInput();
		void _FakeDirectManipulationCallbacksToResync();
		void _FlushDeferList(DynamicArray<CSafeElementPtr<Element> *,0> * *);
		void _GetContentExtent(tagSIZE *);
		void _GetContentLocation(tagPOINT *);
		void _GetContentRectFromScrollBars(tagRECT *);
		void _GetSemanticZoomDeltasForDirectManipulation(float *,float *);
		void _HideScrollbarsForSemanticZoom();
		void _LayerList(DynamicArray<CSafeElementPtr<Element> *,0> *,bool,DynamicArray<CSafeElementPtr<Element> *,0> *);
		void _MapVisuals(float,float,float,float,bool);
		void _RecomputeTiles();
		void _RemoveOrRestoreSubpixelMappingOffset(bool);
		void _SetLayeredTiles(bool);
		void _SetScrollbarStates(ActiveState,bool);
		void _ShowScrollbars();
		void _SynchPendingDManipLayer();
		void _TelemetryUpdateViewportDescription();
		void _TranslateSnapPoints();
	protected:
		long EnableManipulations(bool);
		long InitializeManipulationHelper();
		long InitializeViewport();
		long SetMessage(tagMSG const *,bool *);
		virtual TouchScrollBar * GetHScroll();
		virtual TouchScrollBar * GetVScroll();
		virtual long AddChildren();
		virtual long CreateScrollBars();
		virtual unsigned int MessageCallback(tagGMSG *);
		virtual void OnDestroy();
		virtual void OnEvent(Event *);
		virtual void OnGroupChanged(int,bool);
		virtual void OnHosted(Element *);
		virtual void OnKeyFocusMoved(Element *,Element *);
		virtual void OnMouseFocusMoved(Element *,Element *);
		virtual void OnUnHosted(Element *);
		void ReleaseViewport();
		void _OnHideScrollbarTimer();
		void _OnManipulationComplete();
		void _OnManipulationDelta(float,float,float,float,float);
		void _OnManipulationStart();
		void _OnManualVisualSwapComplete();
		void _OnRequestManualVisualSwap(float,float,float,float,float);
		void _ResetManipulations(Element *);
	public:
		BaseScrollBar * GetHScroll();
		BaseScrollBar * GetVScroll();
		DynamicArray<double,0> * GetSnapPointCollectionX(Value * *);
		DynamicArray<double,0> * GetSnapPointCollectionY(Value * *);
		IDirectManipulationCompositor * GetManipulationCompositor();
		IDirectManipulationManager * GetManipulationManager();
		IDirectManipulationViewport * GetManipulationViewport(bool);
		TouchScrollViewer();
		bool CanPerformManualVisualSwap();
		bool GetAllowArrowOut();
		bool GetLinkIndicatorsToContent();
		bool GetMouseWithinHorizontalScrollRegion();
		bool IsCrossfadeInProgress();
		bool IsManipulationConfigured();
		bool IsManualVisualSwapInProgress();
		bool IsTileMember(unsigned int,Element *);
		float GetContentCrossfadeOpacity();
		float GetInertiaEndpointZoomLevel(float);
		float GetSnapIntervalX();
		float GetSnapIntervalY();
		float GetSnapOffsetX();
		float GetSnapOffsetY();
		float GetZoomMaximum();
		float GetZoomMinimum();
		int GetInteractionMode();
		int GetManipulationHorizontalAlignment();
		int GetManipulationVerticalAlignment();
		int GetSnapMode();
		long CreateTile(tagRECT const *,unsigned __int64 *);
		long ExecuteManualSwapDeferredZoomToRect(bool);
		long GetHScrollbar(Element * *);
		long GetVScrollbar(Element * *);
		long Initialize(Element *,unsigned long *);
		long OverrideZoomThreshold(float,float,int);
		long PrepareManualSwapDeferredZoomToRect(tagRECT const *,float const *,float const *,float *,float *,float);
		long RemoveTile(unsigned __int64);
		long ResetInputState();
		long ResetManipulations();
		long SetAllowArrowOut(bool);
		long SetContact(unsigned int,bool);
		long SetDelegateEventHandler(IUnknown *);
		long SetInteractionMode(int);
		long SetLinkIndicatorsToContent(bool);
		long SetManipulationHorizontalAlignment(int);
		long SetManipulationVerticalAlignment(int);
		long SetScrollControlHost(Element *);
		long SetScrollPadding(int,int,int,int);
		long SetSnapIntervalX(float);
		long SetSnapIntervalY(float);
		long SetSnapMode(int);
		long SetSnapOffsetX(float);
		long SetSnapOffsetY(float);
		long SetSnapPointCollectionX(DynamicArray<double,0> *);
		long SetSnapPointCollectionX(double const *,int);
		long SetSnapPointCollectionY(DynamicArray<double,0> *);
		long SetSnapPointCollectionY(double const *,int);
		long SetSuppressSetContact(bool);
		long SetVirtualizeElements(bool);
		long SetZoomMaximum(float);
		long SetZoomMinimum(float);
		long TelemetrySetDescription(unsigned short const *);
		long ZoomToRect(tagRECT const *,bool);
		long ZoomToRectManualVisualSwap(float,float,float,float,int const *,float,float,float,bool);
		static IClassInfo * GetClassInfoPtr();
		static PropertyInfo const * AllowArrowOutProp();
		static PropertyInfo const * InteractionModeProp();
		static PropertyInfo const * LinkIndicatorsToContentProp();
		static PropertyInfo const * ManipulationHorizontalAlignmentProp();
		static PropertyInfo const * ManipulationVerticalAlignmentProp();
		static PropertyInfo const * ScrollPaddingProp();
		static PropertyInfo const * SnapIntervalXProp();
		static PropertyInfo const * SnapIntervalYProp();
		static PropertyInfo const * SnapModeProp();
		static PropertyInfo const * SnapOffsetXProp();
		static PropertyInfo const * SnapOffsetYProp();
		static PropertyInfo const * SnapPointCollectionXProp();
		static PropertyInfo const * SnapPointCollectionYProp();
		static PropertyInfo const * ZoomMaximumProp();
		static PropertyInfo const * ZoomMinimumProp();
		static UID ManipulationCompleted();
		static UID ManipulationDelta();
		static UID ManipulationStarted();
		static UID ManipulationStarting();
		static UID MapContentVisuals();
		static UID ReleaseSnapshot();
		static UID SemanticChange();
		static UID SetContactNeeded();
		static UID SetContactNotify();
		static UID SnapshotTransformElement();
		static UID UpdateContentSize();
		static UID UpdateView();
		static long Create(Element *,unsigned long *,Element * *);
		tagRECT const * GetScrollPadding(Value * *);
		virtual IClassInfo * GetClassInfoW();
		virtual long OnContentUpdated(IDirectManipulationViewport *,IDirectManipulationContent *);
		virtual long OnViewportStatusChanged(IDirectManipulationViewport *,DIRECTMANIPULATION_STATUS,DIRECTMANIPULATION_STATUS);
		virtual long OnViewportUpdated(IDirectManipulationViewport *);
		virtual void OnInput(InputEvent *);
		virtual void OnListenedPropertyChanged(Element *,PropertyInfo const *,int,Value *,Value *);
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
		virtual ~TouchScrollViewer();
		void GetInertiaEndpointVisibleRect(tagRECT *);
		void GetPredictedVisibleRect(tagRECT *);
		void GetTranslatedTileRects(tagRECT *,unsigned int *,unsigned int);
		void GetVisibleRect(tagRECT *);
		void InvalidateChangedChildElements();
		void InvalidateVirtualizedContainers();
		void NewChildElementsAdded();
		void ProcessAnimationEvent(AnimateScrollEvent *);
		void SetDisableOffscreenCaching(bool);
	};

	class TouchSelect
	{
		struct TouchSelectListener
		{
			virtual void OnListenedEvent(Element *,Event *);
			virtual void OnListenerDetach(Element *);
		};

		Element * _FindNextItem(unsigned short);
		__int64 _KeyboardHookProc(int,unsigned __int64,__int64);
		int _GetItemIndex(Element *);
		long _AddTouchSelectItem(TouchSelectItem *);
		long _ClearLabel();
		long _ClearTouchSelectItem(TouchSelectItem *);
		long _CreateFaceplate();
		long _CreatePopup();
		long _EnableLightDismiss();
		long _GetAdjustedFaceplateAndSelectionRect(tagRECT *,tagRECT *);
		long _GetFaceplateFromScreenRect(tagRECT *);
		long _GetItemFromIndex(int,TouchSelectItem * *);
		long _GetPopupBounds(tagRECT *);
		long _IsScrollable(tagRECT const *,bool *);
		long _OpenPopup(TouchButton::ClickDevice);
		long _PositionCarouseling(tagRECT const *,tagRECT *);
		long _PositionNonScrollable(tagRECT const *);
		long _PositionScrolling(tagRECT const *,tagRECT *);
		long _PostCloseEvent();
		long _PostOpenEvent();
		long _PrepareCarouselingPopup(tagRECT const *);
		long _PrepareListForPopup();
		long _PrepareNonScrollablePopup(tagRECT const *);
		long _PreparePopup(TouchButton::ClickDevice);
		long _PrepareScrollingPopup(tagRECT const *);
		long _RestoreListToFaceplate();
		long _SetLabel(Element *);
		long _SetTouchSelectItem(TouchSelectItem *,Element *,unsigned short const *);
		long _SetTouchSelectItem(TouchSelectItem *,unsigned short const *);
		long _SyncLabel(Element *,Element *);
		static IClassInfo * s_pClassInfo;
		static TouchSelect * s_peActivePopup;
		static __int64 _FullScreenWndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
		static __int64 _StaticKeyboardHookProc(int,unsigned __int64,__int64);
		static bool s_ContentStartsWithChar(TouchSelectItem *,unsigned short);
		virtual tagSIZE _SelfLayoutUpdateDesiredSize(int,int,Surface *);
		virtual void _SelfLayoutDoLayout(int,int);
		void _AddPopupBorderHeight(tagRECT *);
		void _ClosePopup(TouchSelect::POPUPFIREEVENTTYPE);
		void _DestroyPopup();
		void _DisableLightDismiss();
		void _GetLabelContentFromFaceplateRect(tagRECT *);
		void _GetSelectionContentFromPopupRect(tagRECT *);
		void _OffsetByPopupBorderHeight(tagRECT *);
		void _OnListenedEvent(Element *,Event *);
		void _RealClosePopup(TouchSelect::POPUPFIREEVENTTYPE);
		void _UpdateClassPropForItems(Value *);
	public:
		Element * GetSelection();
		TouchSelect();
		bool GetAnimatePopupOnDismiss();
		bool IsPopupOpen();
		int GetItemHeightInPopup();
		int GetSelectionIndex();
		long AddElement(Element *,unsigned short const *);
		long AddString(unsigned short const *);
		long AddString(unsigned short const *,Element * *);
		long AddStringWithLabelOverride(unsigned short const *,unsigned short const *,Element * *);
		long GetItemData(int,IUnknown * *);
		long Initialize(Element *,unsigned long *);
		long OpenPopup();
		long RemoveItem(int);
		long SetAnimatePopupOnDismiss(bool);
		long SetItemData(int,IUnknown *);
		long SetItemHeightInPopup(int);
		long SetPopupBounds(int,int,int,int);
		long SetSelection(Element *);
		long SetSelectionIndex(int);
		long UpdateElement(int,Element *,unsigned short const *);
		long UpdateString(int,unsigned short const *);
		static IClassInfo * GetClassInfoPtr();
		static PropertyInfo const * AnimatePopupOnDismissProp();
		static PropertyInfo const * ItemHeightInPopupProp();
		static PropertyInfo const * PopupBoundsProp();
		static PropertyInfo const * SelectionProp();
		static UID PopupChange();
		static UID SelectionChange();
		static long Create(Element *,unsigned long *,Element * *);
		static long Register();
		static void FirePopupChangeEvent(Element *,POPUPCHANGEEVENTTYPE);
		tagRECT const * GetPopupBounds(Value * *);
		unsigned long GetItemCount();
		virtual IClassInfo * GetClassInfoW();
		virtual bool OnPropertyChanging(PropertyInfo const *,int,Value *,Value *);
		virtual long Add(Element * *,unsigned int);
		virtual long GetElementProviderImpl(InvokeHelper *,ElementProvider * *);
		virtual long Insert(Element * *,unsigned int,unsigned int);
		virtual void OnEvent(Event *);
		virtual void OnHosted(Element *);
		virtual void OnInput(InputEvent *);
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
		virtual void OnUnHosted(Element *);
		virtual ~TouchSelect();
		void ClosePopup();
		void RemoveAll();
	};

	struct TouchSelectHost
	{
		static long Create(HWND__ *,tagRECT const *,TouchSelectHost * *);
		virtual long OnMessage(unsigned int,unsigned __int64,__int64,__int64 *);
	};

	class TouchSelectItem
	{
		static IClassInfo * s_pClassInfo;
	public:
		TouchSelectItem();
		long GetItemData(IUnknown * *);
		long SetItemData(IUnknown *);
		long SetTextContentOverride(unsigned short const *);
		static IClassInfo * GetClassInfoPtr();
		static PropertyInfo const * TextContentOverrideProp();
		static long Create(Element *,unsigned long *,Element * *);
		static long Register();
		unsigned short const * GetTextContentOverride(Value * *);
		virtual IClassInfo * GetClassInfoW();
		virtual ~TouchSelectItem();
	};

	class TouchSelectPopup
	{
		static IClassInfo * s_pClassInfo;
	public:
		long Initialize(HWND__ *,TouchSelect *,Element *,unsigned long *);
		virtual IClassInfo * GetClassInfoW();
		virtual long GetElementProviderImpl(InvokeHelper *,ElementProvider * *);
		virtual void OnDestroy();
		virtual void OnEvent(Event *);
		virtual void OnInput(InputEvent *);
	};

	struct TouchSelectPopupProvider
	{
		TouchSelectPopupProvider();
	};

	struct TouchSelectPopupProxy
	{
		virtual long DoMethod(int,char *);
	};

	struct TouchSelectProvider
	{
		TouchSelectProvider();
	};

	struct TouchSelectProxy
	{
		virtual long DoMethod(int,char *);
	};

	class TouchSlider
	{
		int ConvertRawPositionToThumbPosition(int);
		int ExcludeTopPadding(int);
		int GetSnappedThumbPosition(int,double);
		int GetUserHandedness();
		int HandleMouseClickOrTouch(int,int,bool,bool);
		int SnapThumb(int);
		int SnapThumbValue(int);
		int TranslateThumbValueToThumbPosition(int);
		long InitializeDirectManipulation();
		long SetContact(unsigned int,bool);
		static IClassInfo * s_pClassInfo;
		static int (* _PPIPositionAdjustments)[24];
		void DoDecrement();
		void DoIncrement();
		void FireSliderUpdatedEvent(bool);
		void InternalSetThumbValue(int,bool);
		void SetElementCustomString(Element *,unsigned short const *);
		void SetThumbValueWithTriggeredByKeyboardFlag(int,bool,bool,bool);
		void TranslateThumbValueToFeedbackText(int);
	public:
		Button * GetThumbElement();
		Element * GetFillpartElement();
		Element * GetTrackElement();
		TouchSlider();
		bool GetIsContinuous();
		bool GetIsPressed();
		bool GetIsShowOnOffFeedback();
		bool GetIsVertical();
		bool GetShowTick();
		int GetBuffering();
		int GetMetering();
		int GetRangeMax();
		int GetRangeMin();
		int GetStepCount();
		int GetThumbPosition();
		int GetThumbValue();
		int GetTickCount();
		int GetVisualState();
		int TranslateThumbPositionToThumbValue(int);
		long Initialize(Element *,unsigned long *);
		long SetBuffering(int);
		long SetIsContinuous(bool);
		long SetIsPressed(bool);
		long SetIsShowOnOffFeedback(bool);
		long SetIsVertical(bool);
		long SetMetering(int);
		long SetShowTick(bool);
		long SetThumbPosition(int);
		long SetTickCount(int);
		static IClassInfo * GetClassInfoPtr();
		static PropertyInfo const * BufferingProp();
		static PropertyInfo const * IsContinuousProp();
		static PropertyInfo const * IsPressedProp();
		static PropertyInfo const * IsShowOnOffFeedbackProp();
		static PropertyInfo const * IsVerticalProp();
		static PropertyInfo const * MeteringProp();
		static PropertyInfo const * ShowTickProp();
		static PropertyInfo const * ThumbPositionProp();
		static PropertyInfo const * TickCountProp();
		static PropertyInfo const * VisualStateProp();
		static UID MouseOrPointerReleased();
		static UID SliderUpdated();
		static long Create(Element *,unsigned long *,Element * *);
		static long Register();
		virtual IClassInfo * GetClassInfoW();
		virtual tagSIZE _SelfLayoutUpdateDesiredSize(int,int,Surface *);
		virtual void GetImmersiveFocusRectOffsets(tagRECT *);
		virtual void OnEvent(Event *);
		virtual void OnHosted(Element *);
		virtual void OnInput(InputEvent *);
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
		virtual void _SelfLayoutDoLayout(int,int);
		virtual ~TouchSlider();
		void CancelCurrentDrag();
		void EraseFeedback();
		void FireEventOnMouseOrPointerRelease();
		void RemoveRichDuiTooltip();
		void SetFireContinuousSliderEvent(bool);
		void SetRangeMax(int);
		void SetRangeMin(int);
		void SetRangeMinAndRangeMax(int,int);
		void SetRespectLanguageDirection(bool);
		void SetRespondToMouseScroll(bool);
		void SetStepCount(int);
		void SetThumbValue(int,bool);
		void SetThumbValue(int,bool,bool);
		void SetTooltipText(unsigned short const *);
		void ShowTooltipOnRightForLTRBuild();
		void UseFixedTooltipOffset();
	};

	class TouchSliderRangeValueProxy
	{
	protected:
		virtual void Init(Element *);
	public:
		virtual long DoMethod(int,char *);
	};

	class TouchSwitch
	{
		static IClassInfo * s_pClassInfo;
		void SetElementCustomString(Element *,unsigned short const *);
		void SyncOnOffText();
		void _SetToggleValue(int);
	public:
		int GetToggleValue();
		long Initialize(Element *,unsigned long *);
		long SetOffText(unsigned short const *);
		long SetOnText(unsigned short const *);
		long SetTitleText(unsigned short const *);
		static IClassInfo * GetClassInfoPtr();
		static PropertyInfo const * CurrentToggleValueProp();
		static PropertyInfo const * OffTextProp();
		static PropertyInfo const * OnTextProp();
		static PropertyInfo const * TitleTextProp();
		static long Create(Element *,unsigned long *,Element * *);
		static long Register();
		unsigned short const * GetOffText(Value * *);
		unsigned short const * GetOnText(Value * *);
		unsigned short const * GetTitleText(Value * *);
		virtual IClassInfo * GetClassInfoW();
		virtual void OnEvent(Event *);
		virtual void OnInput(InputEvent *);
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
		void SetOnOffText(unsigned short const *,unsigned short const *);
		void SetToggleSwitchText(unsigned short const *);
		void SetToggleValue(int);
		void SetToggleValue(int,bool);
		void SetToggleValue(int,bool,bool);
	};

	class TouchSwitchToggleProxy
	{
	protected:
		virtual void Init(Element *);
	public:
		virtual long DoMethod(int,char *);
	};

	class TouchTooltip
	{
		__int64 _KeyboardHookProc(int,unsigned __int64,__int64);
		__int64 _MouseHookProc(int,unsigned __int64,__int64);
		int _ScaleRelativePixels(int);
		long _ApplyBaseTextProperties(RichText *);
		long _ApplyOptionAndContentDependentTextProperties(RichText *);
		long _ApplyOptionDependentTextProperties(RichText *);
		long _CreateTooltipContainer(Element *);
		long _EnsureSliderFont();
		long _EnsureTextElement();
		long _EnsureTextFont();
		long _SetTooltipContent(Element *,TOUCHTOOLTIP_TYPE);
		long _ShowWorker(TOUCHTOOLTIP_INPUT,tagRECT const *,TOUCHTOOLTIP_PLACEMENT);
		static TouchTooltip::TouchTooltipHookInfo s_TouchTooltipHookInfo;
		static __int64 s_KeyboardHookProc(int,unsigned __int64,__int64);
		static __int64 s_MouseHookProc(int,unsigned __int64,__int64);
		virtual ~TouchTooltip();
		void _ClearHooks();
		void _CreateOffsetRect(tagPOINT const &,tagSIZE const &,tagSIZE const &,tagRECT *);
		void _DoPositioning(tagSIZE const *,TOUCHTOOLTIP_INPUT,tagRECT const *,TOUCHTOOLTIP_PLACEMENT);
		void _EnsureHooksEnabled();
		void _SetScaleFactor();
	public:
		TouchTooltip(HWND__ *,TOUCHTOOLTIP_CREATE_FLAGS);
		long InitializeWindow();
		virtual long Advise(ITouchTooltipEventSink *);
		virtual long GetOptions(TOUCHTOOLTIP_OPTION_FLAGS *);
		virtual long Hide();
		virtual long IsVisible();
		virtual long OnMessage(unsigned int,unsigned __int64,__int64,__int64 *);
		virtual long SetDirection(TOUCHTOOLTIP_LAYOUT_DIRECTION);
		virtual long SetOptions(TOUCHTOOLTIP_OPTION_FLAGS);
		virtual long SetProgrammaticOffset(int);
		virtual long SetRichTooltip(Element *);
		virtual long SetText(unsigned short const *);
		virtual long SetTextWithMaxLines(unsigned short const *,unsigned int);
		virtual long Show(TOUCHTOOLTIP_INPUT,tagRECT const *,TOUCHTOOLTIP_PLACEMENT);
		virtual long ShowNearMousePoint(tagPOINT const *,TOUCHTOOLTIP_PLACEMENT);
		virtual long ShowNearTouchPoint(tagPOINT const *,TOUCHTOOLTIP_PLACEMENT);
		virtual long StartShowTimer(TOUCHTOOLTIP_INPUT,TOUCHTOOLTIP_TYPE);
		virtual long Unadvise();
		virtual void OnListenedEvent(Element *,Event *);
		virtual void OnListenedPropertyChanged(Element *,PropertyInfo const *,int,Value *,Value *);
	};

	class TouchTooltipConstraint
	{
		Windows::UI::Immersive::CConstraint _GetWorkspaceOrMonitorConstraint();
	public:
		Windows::UI::Immersive::CConstraint GetConstraint();
	};

	struct TouchTooltipContainer
	{
		long Initialize(TouchTooltipConstraint const *,Element *,unsigned long *);
		virtual tagSIZE _SelfLayoutUpdateDesiredSize(int,int,Surface *);
		virtual void _SelfLayoutDoLayout(int,int);
	};

	struct TouchTooltipHWNDElement
	{
		long Initialize(HWND__ *,bool,unsigned int,Element *,unsigned long *);
		static long Create(HWND__ *,unsigned long *,Element * *);
	};

	class TouchTooltipProxy
	{
	protected:
		static _GUID const * * s_rgpIID;
	public:
		static long s_CreateInstance(HWND__ *,_GUID const &,void * *);
		virtual long GetPatternProvider(int,IUnknown * *);
		virtual long GetPropertyValue(int,tagVARIANT *);
		virtual long get_HostRawElementProvider(IRawElementProviderSimple * *);
		virtual long get_ProviderOptions(ProviderOptions *);
	};

	class TouchTooltipTimings
	{
		static TouchTooltipTimings::BASE_TIMING const c_baseTimingHide;
		static TouchTooltipTimings::BASE_TIMING const c_baseTimingShow;
		static TouchTooltipTimings::TIMINGS const * const c_rgHideTimings;
		static TouchTooltipTimings::TIMINGS const * const c_rgReshowTimings;
		static TouchTooltipTimings::TIMINGS const * const c_rgShowTimings;
		static int s_GetTimingValue(TOUCHTOOLTIP_INPUT,TouchTooltipTimings::TIMINGS const * const);
	};

	class TouchXBaby
	{
		static IClassInfo * s_pClassInfo;
	public:
		TouchXBaby();
		static long Create(IXElementCP *,TouchXProvider *,HWND__ *,Element *,unsigned long *,Element * *);
		virtual Element * GetAdjacent(Element *,int,NavReference const *,unsigned long);
		virtual Element * GetFocusableElement();
		virtual HWNDElement * GetXBabyElement();
		virtual IClassInfo * GetClassInfoW();
		virtual bool CanSetFocus();
		virtual bool ClickDefaultButton();
		virtual bool GetDefaultButtonTracking();
		virtual bool OnChildLostFocus(Element *);
		virtual bool OnChildReceivedFocus(Element *);
		virtual long CreateStyleParser(DUIXmlParser * *);
		virtual long GetElementProviderImpl(InvokeHelper *,ElementProvider * *);
		virtual long GetHostedElementID(unsigned short *);
		virtual long SetButtonClassAcceptsEnterKey(bool);
		virtual long SetDefaultButtonTracking(bool);
		virtual long SetHandleEnterKey(bool);
		virtual long SetRegisteredDefaultButton(Element *);
		virtual long SetToHost(Element *);
		virtual tagSIZE GetContentDesiredSize(int,int);
		virtual void CacheParser(DUIXmlParser *);
		virtual void ForceThemeChange(unsigned __int64,__int64);
		virtual void OnEvent(Event *);
		virtual void OnNoChildWithShortcutFound(KeyboardEvent *);
		virtual void OnThemeChanged(ThemeChangedEvent *);
		virtual void OnWmThemeChanged(unsigned __int64,__int64);
		virtual void SetKeyFocus();
		virtual ~TouchXBaby();
	};

	struct TouchXProvider
	{
		virtual long CreateXBaby(IXElementCP *,HWND__ *,Element *,unsigned long *,IXBaby * *);
	};

	class TransitionHandler
	{
		int _CheckUniqueChangeInList(Element *,bool,int);
		int _FindStoryboard(int);
		long _AddTransition(int,GTRANS_DESC *);
		long _CloseStoryboard(int,unsigned int *,GTRANS_DESC * *);
		long _DumpStoryboard(DynamicArray<GTRANS_DESC *,0> *,unsigned int *,GTRANS_DESC * *);
		long _GetPreviousTotalDelay(int,float *);
		long _SetPreviousTotalDelay(int,float);
		void _ForceGadgetUpdate(HGADGET__ *,bool,unsigned long);
	public:
		PVLAnimationParentChangeEvent * GetParentChange(int,Element *);
		bool VerifyActiveStoryboard();
		int GetActiveStoryboardType();
		long AddLayeredContainer(int,Element *);
		long AddLocationPropChange(int,PVLAnimationRepositionEvent *);
		long AddManualCompletionEvent(int,PVLAnimationNotifyCompleteEvent *);
		long AddParentChange(int,PVLAnimationParentChangeEvent *);
		long AddTransition(int,GTRANS_DESC *);
		long ClearLocationPropChanges(int);
		long ClearLostStoryboards(Element *);
		long ClearParentChanges(int);
		long CloseStoryboard(int,unsigned int *,GTRANS_DESC * *);
		long CompleteStoryboard(int,bool,bool);
		long CreateStoryboard(int,bool,int *,unsigned long *,int);
		long FlagCancelStoryboard(int);
		long GetCookie(int,unsigned long *);
		long GetNextOrderNumber(int,int *);
		long GetPreviousTotalDelay(int,float *);
		long GetStoryboardLength(int,float *);
		long GetTriggerEvent(int,PVLAnimationNotifyEvent * *);
		long InsertTransition(int,GTRANS_DESC *,int);
		long InternalStoryboardSuccess(int);
		long ResetNextOrderNumberForActive();
		long RetrieveLocationPropChanges(int,DynamicArray<PVLAnimationRepositionEvent *,0> * *);
		long RetrieveStoryboardIdFromManualId(int,int *);
		long SetActiveStoryboard(int);
		long SetActiveStoryboardType(int);
		long SetClipInside(int,bool);
		long SetCompletionEvent(int,PVLAnimationNotifyCompleteEvent *);
		long SetPreviousTotalDelay(int,float);
		long SetPreviousTotalDelayInActive(float);
		long SetStoryboardLength(int,float);
		long SetTriggerEvent(int,PVLAnimationNotifyEvent *);
		long UnlayerContainers(int);
		long ValidateGadgetTicket(unsigned long,HGADGET__ *);
		static long EnsureInitialized();
		~TransitionHandler();
	};

	struct UiaArray<Element *>
	{
		bool FindRemove(Element * const &,bool);
	};

	struct UiaArray<ElementProvider *>
	{
		bool FindRemove(ElementProvider * const &,bool);
	};

	struct UiaArray<int>
	{
		bool FindRemove(int const &,bool);
	};

	class UnknownElement
	{
		static IClassInfo * s_pClassInfo;
	public:
		UnknownElement & operator=(UnknownElement const &);
		UnknownElement();
		UnknownElement(UnknownElement const &);
		long Initialize(unsigned int,Element *,unsigned long *);
		static IClassInfo * GetClassInfoPtr();
		static long Create(Element *,unsigned long *,Element * *);
		static long Create(unsigned int,Element *,unsigned long *,Element * *);
		static long Register();
		static void SetClassInfoPtr(IClassInfo *);
		virtual IClassInfo * GetClassInfoW();
		virtual ~UnknownElement();
	};

	class Value
	{
		static HICON__ * ReloadIcon(Graphic *,float);
		static Value * CreateIconGraphicHelper(HICON__ *,bool,bool,bool);
		static int const c_RefCountBitOffset;
		static long StrDupW(unsigned short const *,unsigned short * *);
		static long const c_RefCountMask;
		static long const c_SingleRefCount;
		void _ZeroRelease();
	public:
		Cursor * GetCursor();
		DynamicArray<Element *,0> * GetElementList();
		DynamicArray<Value *,0> * GetValueList();
		DynamicArray<double,0> * GetDoubleList();
		Element * GetElement();
		Expression * GetExpression();
		Fill const * GetFill();
		Graphic * GetGraphic();
		Layout * GetLayout();
		ScaledInt const * GetScaledInt();
		StyleSheet * GetStyleSheet();
		Value & operator=(Value const &);
		bool GetBool();
		bool IsDynamicScaled();
		bool IsEqual(Value *);
		float GetElementScaledFloat(Element *);
		float GetFloat();
		float GetScaledFloat(float);
		int GetElementScaledInt(Element *);
		int GetInt();
		int GetRefCount();
		int GetScaledInt(float);
		int GetType();
		long GetEncodedString(unsigned short *,unsigned __int64);
		static Value * CreateAtom(unsigned short const *);
		static Value * CreateAtom(unsigned short);
		static Value * CreateBool(bool);
		static Value * CreateColor(unsigned long);
		static Value * CreateColor(unsigned long,unsigned long,unsigned char);
		static Value * CreateColor(unsigned long,unsigned long,unsigned long,unsigned char);
		static Value * CreateCursor(HICON__ *);
		static Value * CreateCursor(unsigned short const *);
		static Value * CreateDFCFill(unsigned int,unsigned int);
		static Value * CreateDTBFill(unsigned short const *,int,int);
		static Value * CreateDoubleList(DynamicArray<double,0> *);
		static Value * CreateDoubleList(double const *,int);
		static Value * CreateElementList(DynamicArray<Element *,0> *);
		static Value * CreateElementRef(Element *);
		static Value * CreateElementScaledValue(Element *,Value *);
		static Value * CreateEncodedString(unsigned short const *);
		static Value * CreateExpression(Expression *);
		static Value * CreateFill(Fill const &);
		static Value * CreateFloat(float,DynamicScaleValue);
		static Value * CreateGraphic(HBITMAP__ *,unsigned char,unsigned int,bool,bool,bool);
		static Value * CreateGraphic(HENHMETAFILE__ *,HENHMETAFILE__ *);
		static Value * CreateGraphic(HICON__ *,bool,bool,bool);
		static Value * CreateGraphic(ISharedBitmap *,unsigned char,unsigned int);
		static Value * CreateGraphic(unsigned short const *,ScaledSIZE,HINSTANCE__ *,bool,bool);
		static Value * CreateGraphic(unsigned short const *,unsigned char,unsigned int,unsigned short,unsigned short,HINSTANCE__ *,bool,bool);
		static Value * CreateGraphic(unsigned short const *,unsigned short,unsigned short,HINSTANCE__ *,bool,bool);
		static Value * CreateInt(int,DynamicScaleValue);
		static Value * CreateLayout(Layout *);
		static Value * CreatePoint(int,int,DynamicScaleValue);
		static Value * CreateRect(int,int,int,int,DynamicScaleValue);
		static Value * CreateScaledValue(float,Value *);
		static Value * CreateSize(int,int,DynamicScaleValue);
		static Value * CreateString(unsigned short const *,HINSTANCE__ *);
		static Value * CreateStringRP(unsigned short const *,HINSTANCE__ *);
		static Value * CreateStyleSheet(StyleSheet *);
		static Value * CreateValueList(DynamicArray<Value *,0> *);
		static Value * CreateValueList(Value *);
		static Value * GetAtomZero();
		static Value * GetBoolFalse();
		static Value * GetBoolTrue();
		static Value * GetColorTrans();
		static Value * GetCursorNull();
		static Value * GetDblListEmpty();
		static Value * GetElListNull();
		static Value * GetElementNull();
		static Value * GetExprNull();
		static Value * GetFloatOne();
		static Value * GetFloatZero();
		static Value * GetIntMinusOne();
		static Value * GetIntZero();
		static Value * GetLayoutNull();
		static Value * GetNull();
		static Value * GetPointZero();
		static Value * GetRectZero();
		static Value * GetSheetNull();
		static Value * GetSizeZero();
		static Value * GetStringNull();
		static Value * GetStringRPNull();
		static Value * GetUnavailable();
		static Value * GetUnset();
		tagPOINT const * GetPoint();
		tagRECT const * GetRect();
		tagSIZE const * GetSize();
		unsigned __int64 GetEncodedStringLength();
		unsigned short * ToString(unsigned short *,unsigned int);
		unsigned short GetAtom();
		unsigned short const * GetString();
		unsigned short const * GetStringDynamicScaling();
		void * GetImage(bool,float);
		void AddRef();
		void GetElementScaledPoint(Element *,tagPOINT *);
		void GetElementScaledRect(Element *,tagRECT *);
		void GetElementScaledSize(Element *,tagSIZE *);
		void GetScaledPoint(float,tagPOINT *);
		void GetScaledRect(float,tagRECT *);
		void GetScaledSize(float,tagSIZE *);
		void Release();
		void SetLayoutPointerToNull();
	};

	struct ValueMap<Element *,unsigned char>
	{
		long SetItem(Element *,unsigned char,bool);
		static long Create(unsigned int,ValueMap<Element *,unsigned char> * *);
		virtual ~ValueMap<Element *,unsigned char>();
		void Remove(Element *,bool,bool);
	};

	class ValueMap<unsigned long,RichTextCacheEntry *>
	{
		static void s_EnumAdaptor<<lambda_1901a468c432abca1078ba397ee5c37e> >(unsigned long,RichTextCacheEntry *,void *);
		static void s_EnumAdaptor<<lambda_245b6695e6caee708ec62fe450b6872e> >(unsigned long,RichTextCacheEntry *,void *);
		static void s_EnumAdaptor<<lambda_f4045481a14394e04ec3a8405b7bea3d> >(unsigned long,RichTextCacheEntry *,void *);
	public:
		RichTextCacheEntry * * GetItem(unsigned long,bool);
		long SetItem(unsigned long,RichTextCacheEntry *,bool);
		virtual ~ValueMap<unsigned long,RichTextCacheEntry *>();
		void Enum(void (*)(unsigned long,RichTextCacheEntry *,void *),void *);
	};

	struct ValueProvider
	{
		ValueProvider();
		virtual ProviderProxy * (*GetProxyCreator())(Element *);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual long SetValue(unsigned short const *);
		virtual long get_IsReadOnly(int *);
		virtual long get_Value(unsigned short * *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
		virtual ~ValueProvider();
	};

	class ValueProxy
	{
		long GetIsReadOnly(int *);
		long GetValue(unsigned short * *);
		long SetValue(unsigned short const *);
	protected:
		virtual void Init(Element *);
	public:
		ValueProxy & operator=(ValueProxy const &);
		ValueProxy();
		ValueProxy(ValueProxy const &);
		static ValueProxy * Create(Element *);
		static bool IsPatternSupported(Element *);
		virtual long DoMethod(int,char *);
	};

	class VerticalFlowLayout
	{
	protected:
		static tagSIZE SizeZero();
		tagSIZE BuildCacheInfo(Element *,int,int,Surface *,bool);
	public:
		VerticalFlowLayout & operator=(VerticalFlowLayout const &);
		VerticalFlowLayout();
		VerticalFlowLayout(VerticalFlowLayout const &);
		int GetLine(Element *,Element *);
		static long Create(bool,unsigned int,unsigned int,unsigned int,Layout * *);
		static long Create(int,int *,Value * *);
		virtual Element * GetAdjacent(Element *,Element *,int,NavReference const *,unsigned long);
		virtual tagSIZE UpdateDesiredSize(Element *,int,int,Surface *);
		virtual void DoLayout(Element *,int,int);
		virtual ~VerticalFlowLayout();
		void Initialize(bool,unsigned int,unsigned int,unsigned int);
	};

	class Viewer
	{
		Element * _GetContent();
		bool _InternalEnsureVisible(int,int,int,int);
		static IClassInfo * s_pClassInfo;
	public:
		Viewer & operator=(Viewer const &);
		Viewer();
		Viewer(Viewer const &);
		bool GetXScrollable();
		bool GetYScrollable();
		int GetXOffset();
		int GetYOffset();
		long Initialize(Element *,unsigned long *);
		long SetXOffset(int);
		long SetXScrollable(bool);
		long SetYOffset(int);
		long SetYScrollable(bool);
		static IClassInfo * GetClassInfoPtr();
		static PropertyInfo const * XOffsetProp();
		static PropertyInfo const * XScrollableProp();
		static PropertyInfo const * YOffsetProp();
		static PropertyInfo const * YScrollableProp();
		static long Create(Element *,unsigned long *,Element * *);
		static long Register();
		static void SetClassInfoPtr(IClassInfo *);
		virtual IClassInfo * GetClassInfoW();
		virtual bool EnsureVisible(int,int,int,int);
		virtual bool OnPropertyChanging(PropertyInfo const *,int,Value *,Value *);
		virtual tagSIZE _SelfLayoutUpdateDesiredSize(int,int,Surface *);
		virtual void OnEvent(Event *);
		virtual void OnInput(InputEvent *);
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
		virtual void _SelfLayoutDoLayout(int,int);
		virtual ~Viewer();
		void SetEnsureVisibleUseLayoutCoordinates(bool);
	};

	class WrappingList
	{
		static IClassInfo * s_pClassInfo;
		virtual tagSIZE _SelfLayoutUpdateDesiredSize(int,int,Surface *);
		virtual void _SelfLayoutDoLayout(int,int);
	public:
		bool GetCircular();
		long SetSeparatorHeight(int);
		long SetTopIndex(int);
		static PropertyInfo const * CircularProp();
		static PropertyInfo const * FirstItemOffsetProp();
		static PropertyInfo const * SeparatorHeightProp();
		static PropertyInfo const * TopIndexProp();
		unsigned int CalculateTopIndex(WrappingList::MeasureDirection,int);
		virtual Element * GetAdjacent(Element *,int,NavReference const *,unsigned long);
		virtual IClassInfo * GetClassInfoW();
		virtual void OnEvent(Event *);
		virtual void OnInput(InputEvent *);
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
	};

	class XBaby
	{
		static IClassInfo * s_pClassInfo;
	protected:
		long Initialize(IXElementCP *,XProvider *,HWND__ *,Element *,unsigned long *);
	public:
		XBaby & operator=(XBaby const &);
		XBaby();
		XBaby(XBaby const &);
		static IClassInfo * GetClassInfoPtr();
		static long Create(Element *,unsigned long *,Element * *);
		static long Create(IXElementCP *,XProvider *,HWND__ *,Element *,unsigned long *,Element * *);
		static long Register();
		static void SetClassInfoPtr(IClassInfo *);
		virtual Element * GetAdjacent(Element *,int,NavReference const *,unsigned long);
		virtual Element * GetFocusableElement();
		virtual HWNDElement * GetXBabyElement();
		virtual IClassInfo * GetClassInfoW();
		virtual bool CanSetFocus();
		virtual bool ClickDefaultButton();
		virtual bool GetDefaultButtonTracking();
		virtual bool OnChildLostFocus(Element *);
		virtual bool OnChildReceivedFocus(Element *);
		virtual long CreateStyleParser(DUIXmlParser * *);
		virtual long GetElementProviderImpl(InvokeHelper *,ElementProvider * *);
		virtual long GetHostedElementID(unsigned short *);
		virtual long SetButtonClassAcceptsEnterKey(bool);
		virtual long SetDefaultButtonTracking(bool);
		virtual long SetHandleEnterKey(bool);
		virtual long SetRegisteredDefaultButton(Element *);
		virtual long SetToHost(Element *);
		virtual tagSIZE GetContentDesiredSize(int,int);
		virtual void CacheParser(DUIXmlParser *);
		virtual void ForceThemeChange(unsigned __int64,__int64);
		virtual void OnEvent(Event *);
		virtual void OnNoChildWithShortcutFound(KeyboardEvent *);
		virtual void OnThemeChanged(ThemeChangedEvent *);
		virtual void OnWmThemeChanged(unsigned __int64,__int64);
		virtual void SetKeyFocus();
		virtual ~XBaby();
	};

	struct XDummyProvider
	{
		virtual long CreateDUICP(HWNDElement *,HWND__ *,HWND__ *,Element * *,DUIXmlParser * *);
		virtual long CreateParserCP(DUIXmlParser * *);
		virtual void DestroyCP();
	};

	class XElement
	{
		static IClassInfo * s_pClassInfo;
	public:
		HWND__ * GetInnerHWND();
		IXProvider * GetProvider();
		XElement & operator=(XElement const &);
		XElement();
		XElement(XElement const &);
		bool IsDescendent(Element *);
		long Initialize(unsigned int,Element *,unsigned long *);
		long SetProvider(IUnknown *);
		static IClassInfo * GetClassInfoPtr();
		static UID UnhandledSyschar();
		static long Create(Element *,unsigned long *,Element * *);
		static long Create(unsigned int,Element *,unsigned long *,Element * *);
		static long Register();
		static unsigned int const s_uButtonFocusChangeMsg;
		static unsigned int const s_uNavigateOutMsg;
		static unsigned int const s_uUnhandledSyscharMsg;
		static void SetClassInfoPtr(IClassInfo *);
		virtual HWND__ * CreateHWND(HWND__ *);
		virtual HWND__ * GetNotificationSinkHWND();
		virtual IClassInfo * GetClassInfoW();
		virtual bool OnMessage(unsigned int,unsigned __int64,__int64,__int64 *);
		virtual bool OnSinkThemeChanged(unsigned int,unsigned __int64,__int64,__int64 *);
		virtual bool OnSysChar(unsigned short);
		virtual unsigned int GetCreationFlags();
		virtual void OnEvent(Event *);
		virtual void OnInput(InputEvent *);
		virtual void SetKeyFocus();
		virtual ~XElement();
		void FreeProvider();
	};

	struct XHost
	{
		Element * GetElement();
		HWND__ * GetHWND();
		XHost & operator=(XHost const &);
		XHost();
		long Initialize(IXElementCP *);
		static __int64 WndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
		static long Create(IXElementCP *,XHost * *);
		void Destroy();
		void DestroyWindow();
		void HideWindow();
		void Host(Element *);
		void ShowWindow(int);
		~XHost();
	};

	class XProvider
	{
	protected:
		Element * GetRoot();
		void SetHandleEnterKey(bool);
	public:
		XProvider & operator=(XProvider const &);
		XProvider();
		XProvider(XProvider const &);
		long CreateParser(DUIXmlParser * *);
		long Initialize(Element *,IXProviderCP *);
		static long Create(Element *,IXProviderCP *,XProvider * *);
		virtual int ClickDefaultButton();
		virtual int FindElementWithShortcutAndDoDefaultAction(unsigned short,int);
		virtual long CanSetFocus(bool *);
		virtual long CreateDUI(IXElementCP *,HWND__ * *);
		virtual long CreateXBaby(IXElementCP *,HWND__ *,Element *,unsigned long *,IXBaby * *);
		virtual long ForceThemeChange(unsigned __int64,__int64);
		virtual long GetDesiredSize(int,int,tagSIZE *);
		virtual long GetHostedElementID(unsigned short *);
		virtual long IsDescendent(Element *,bool *);
		virtual long Navigate(int,bool *);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual long SetButtonClassAcceptsEnterKey(bool);
		virtual long SetDefaultButtonTracking(bool);
		virtual long SetFocus(Element *);
		virtual long SetParameter(_GUID const &,void *);
		virtual long SetRegisteredDefaultButton(Element *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
		virtual ~XProvider();
	};

	struct XResourceProvider
	{
		XResourceProvider & operator=(XResourceProvider const &);
		XResourceProvider();
		XResourceProvider(XResourceProvider const &);
		long Initialize(HINSTANCE__ *,unsigned short const *,unsigned short const *,unsigned short const *);
		static long Create(HINSTANCE__ *,unsigned short const *,unsigned short const *,unsigned short const *,XResourceProvider * *);
		static long Create(XResourceProvider * *);
		virtual long CreateDUICP(HWNDElement *,HWND__ *,HWND__ *,Element * *,DUIXmlParser * *);
		virtual long CreateParserCP(DUIXmlParser * *);
		virtual void DestroyCP();
	};

	CCritSec g_csShared;
	CSafeElementPtr<DirectUI::Element> * HNew<CSafeElementPtr<Element> >();
	DEVICE_SCALE_FACTOR _GetScaleFactorForWindow(HWND__ *);
	DirectUI::BaseScrollBar * GetBaseScrollBar(DirectUI::Element *);
	DirectUI::BaseScrollViewer * GetTypeAncestor<BaseScrollViewer>(DirectUI::Element *);
	DirectUI::Browser * GetTypeAncestor<Browser>(DirectUI::Element *);
	DirectUI::CClassFactory * g_pClassFactory;
	DirectUI::CcsPciMapInitializer g_InitCriticalSection;
	DirectUI::Element * DUI_GetElementUnderCursor(DirectUI::HWNDElement *,tagPOINT *);
	DirectUI::Element * DUI_GetFirstChild(DirectUI::Element *);
	DirectUI::Element * GetVisibleAccessibleParent(DirectUI::Element *);
	DirectUI::Element * _FindDescendentElement(DirectUI::Element *,DirectUI::IClassInfo *);
	DirectUI::Element * _FindLeafElementWithHWNDFocus(DirectUI::Element *,HWND__ *);
	DirectUI::Element * _WalkChildElements(DirectUI::Element *,DirectUI::IClassInfo *);
	DirectUI::ElementGadgetTicketPair * HNew<ElementGadgetTicketPair>();
	DirectUI::Event * HNew<Event>();
	DirectUI::Event * HNewAndZero<Event>();
	DirectUI::IClassInfo * GetElementClass<HWNDElement>();
	DirectUI::PVLAnimationContentTransitionEvent * HNew<PVLAnimationContentTransitionEvent>();
	DirectUI::PVLAnimationCrossfadeEvent * HNew<PVLAnimationCrossfadeEvent>();
	DirectUI::PVLAnimationDeleteEvent * HNew<PVLAnimationDeleteEvent>();
	DirectUI::PVLAnimationExpandCollapseEvent * HNew<PVLAnimationExpandCollapseEvent>();
	DirectUI::PVLAnimationFadeEvent * HNew<PVLAnimationFadeEvent>();
	DirectUI::PVLAnimationManualStoryboard * HNew<PVLAnimationManualStoryboard>();
	DirectUI::PVLAnimationRepositionEvent * HNew<PVLAnimationRepositionEvent>();
	DirectUI::PVLAnimationScaleEvent * HNew<PVLAnimationScaleEvent>();
	DirectUI::PVLAnimationSlideEvent * HNew<PVLAnimationSlideEvent>();
	DirectUI::PVLAnimationTapEvent * HNew<PVLAnimationTapEvent>();
	DirectUI::PVLAnimationTileNotificationEvent * HNew<PVLAnimationTileNotificationEvent>();
	DirectUI::ResourceHandleCache g_hcResourceModule;
	DirectUI::RichTextExtraFormatting * HNew<RichTextExtraFormatting>();
	DirectUI::SBAlloc<32> * GetSBAllocator();
	DirectUI::SafeElementIndexPair * HNew<SafeElementIndexPair>();
	DirectUI::Selector * GetTypeAncestor<Selector>(DirectUI::Element *);
	DirectUI::SinkProvider * AccHNew<SinkProvider,HWND__ *>(HWND__ * const &);
	DirectUI::StyleSheetCache::CSheetEntry * HNew<StyleSheetCache::CSheetEntry>();
	DirectUI::THREAD_SCALING_MODE GetScalingMode();
	DirectUI::ThemeHandleCache g_hcThemeClass;
	DirectUI::Value * CreateSnapshotImage(DirectUI::Element *);
	DirectUI::Value * DefaultFontSize();
	DirectUI::Value * GetSimulatedBackgroundAlphaColor(DirectUI::Element *,DirectUI::Value *,unsigned long);
	HBITMAP__ * LoadDDBitmap(unsigned short const *,HINSTANCE__ *,int,int);
	HBITMAP__ * _CreateHBITMAP(tagSIZE const *);
	HBRUSH__ * CreateDibBrush(HDC__ *,int,int,int,int,int);
	HBRUSH__ * CreateDibDirectBrush(HDC__ *,int,int,int,int,tagBITMAPINFOHEADER *,unsigned char *,DirectUI::BRUSHBUFF *,int);
	HICON__ * DUI_GetCursorHandle(DirectUI::Element *);
	HICON__ * GethIcon(DirectUI::Value *,DirectUI::Element *);
	HINSTANCE__ * g_hmoduleThis;
	HWND__ * GetHwndFromElement(DirectUI::Element *);
	_RTL_CRITICAL_SECTION g_csTouchTooltipHookLock;
	bool AcceptAll(DirectUI::Element *);
	bool DUI_TranslateKeyboardEventToMSG(DirectUI::KeyboardEvent *,tagMSG *);
	bool DUI_TranslateMouseEventToMSG(DirectUI::MouseEvent *,tagMSG *);
	bool DUI_TranslatePointerEventToMSG(DirectUI::PointerEvent *,tagMSG *);
	bool GetDynamicScalingDefault();
	bool GetFullyVisible(DirectUI::Element *);
	bool GetSystemLogFont(DirectUI::SYSFONTID,float,tagLOGFONTW *);
	bool GetVerticalScrollBar(DirectUI::Element *,bool *);
	bool IsAccessible(DirectUI::Element *,bool);
	bool IsAccessibleAncestor(DirectUI::Element *,DirectUI::Element *);
	bool IsDesktopScalingMode();
	bool IsImmersiveScalingRestrictedToWin8Plateaus();
	bool IsInputScopeAlwaysLTR(__MIDL___MIDL_itf_inputscope_0000_0000_0001);
	bool IsPasswordRevealButton(DirectUI::Element *);
	bool IsStringEmpty(unsigned short const *);
	bool IsValidElementPointer(DirectUI::Element *);
	bool IsolationAwareUnregisterClassW(HINSTANCE__ *,DirectUI::IClassInfo *,HINSTANCE__ *);
	bool IsolationAwareUnregisterClassW(unsigned short const *,DirectUI::IClassInfo *,HINSTANCE__ *);
	bool OnlyAccessible(DirectUI::Element *);
	bool UnregisterLocal(unsigned short const *,DirectUI::CLocalClasses,HINSTANCE__ *);
	bool _HasValueType(DirectUI::PropertyInfo const *,int);
	bool _IsElementOffscreen(DirectUI::Element *);
	bool _OffsetAndIntersectRect(tagRECT const *,tagRECT const *,tagRECT *);
	bool _ReplaceValue(DirectUI::Value * *,DirectUI::Value *);
	bool g_fEnableUIAutomationProvider;
	bool g_fInitializedTouchTooltipHookLock;
	bool g_fRestrictImmersiveScalingToWin8Plateaus;
	double GetScrollBarPercent(DirectUI::BaseScrollBar *,int);
	int AdjustValueForLayoutConstraint(int,float);
	int CheckClick(DirectUI::Element *,DirectUI::InputEvent *,int,int *,int *,DirectUI::tagClickInfo *);
	int CheckContext(DirectUI::Element *,DirectUI::InputEvent *,int *,DirectUI::tagClickInfo *);
	int CheckRepeatClick(DirectUI::Element *,DirectUI::InputEvent *,int,int *,int *,HACTION__ * *,void (*)(GMA_ACTIONINFO *),DirectUI::tagClickInfo *);
	int DblSort(void const *,void const *);
	int FCSort(void const *,void const *);
	int FlipAlphaDIB(tagDIBSECTION const *,HBITMAP__ * *);
	int FlipBitmap(HBITMAP__ *,HBITMAP__ * *,unsigned char,unsigned long);
	int FlipBitmapDDB(HBITMAP__ *,HBITMAP__ * *);
	int FlipIcon(HICON__ *,HICON__ * *);
	int ForwardMessageToDirectChild(HWND__ *,__int64);
	int GetPixelHelper(DirectUI::Element *,DirectUI::PropertyInfo const *,bool);
	int MapAlign(DirectUI::Element *,int);
	int PointToPixel(int);
	int RelPixToPixel(int);
	int SafeElementIndexPairComparer(void const *,void const *);
	int _CalculateItemsForCarouselingSpace(int,int,int);
	int _CalculateItemsForScrollingSpace(int,int,int);
	int _CondMapCompare(void const *,void const *);
	int _IdxCompare(void const *,void const *);
	int _ShouldIgnoreSubTree(DirectUI::Element *);
	int const GetFadeStoryboardId(unsigned int);
	int g_RTLOS;
	int g_dDesktopDPIOverride;
	int g_fTraceElementLeaks;
	int g_nManualStoryboardId;
	long (* g_pfnLoadIconWithScaleDown)(HINSTANCE__ *,unsigned short const *,int,int,HICON__ * *);
	long AddElementToLeakedList(DirectUI::Element *);
	long ArrayToSafeArray<IRawElementProviderSimple *>(DirectUI::UiaArray<IRawElementProviderSimple *> *,unsigned short,tagSAFEARRAY * *);
	long ArrayToSafeArray<double>(DirectUI::UiaArray<double> *,unsigned short,tagSAFEARRAY * *);
	long ArrayToSafeArray<int>(DirectUI::UiaArray<int> *,unsigned short,tagSAFEARRAY * *);
	long BufferedPaintLazyInit();
	long BuildSelection(DirectUI::Element *,tagSAFEARRAY * *);
	long BuildShortcutString(unsigned short * *,unsigned short);
	long CTouchEditInnerTextHost_CreateInstance(DirectUI::TouchEditInner *,_GUID const &,void * *);
	long CheckAdviseArgs(int,tagSAFEARRAY *);
	long CloneArray<DWRITE_GLYPH_OFFSET>(DWRITE_GLYPH_OFFSET const *,unsigned __int64,DWRITE_GLYPH_OFFSET const * *);
	long CloneArray<float>(float const *,unsigned __int64,float const * *);
	long CloneArray<unsigned short>(unsigned short const *,unsigned __int64,unsigned short const * *);
	long CloneElementRectPairList(DirectUI::DynamicArray<DirectUI::ClipRectWithElement *,0> *,DirectUI::DynamicArray<DirectUI::ClipRectWithElement *,0> * *);
	long CloneListAndDiscardOriginal<tagPOINT>(DirectUI::DynamicArray<tagPOINT,0> * *);
	long ComputeMaxSurfaceSize(HGADGET__ *,tagSIZE *);
	long CreateAndInit<AccessibleButton>(DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<AdaptorElement>(DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<AnimationStrip,int>(int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<AutoButton>(DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<Bind>(DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<Browser>(DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<Button,unsigned int>(unsigned int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<CCAVI,unsigned int>(unsigned int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<CCBase,unsigned int>(unsigned int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<CCCheckBox,unsigned int>(unsigned int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<CCCommandLink,unsigned int>(unsigned int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<CCListBox,unsigned int>(unsigned int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<CCListView,unsigned int>(unsigned int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<CCProgressBar,unsigned int>(unsigned int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<CCPushButton,unsigned int>(unsigned int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<CCRadioButton,unsigned int>(unsigned int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<CCSysLink,unsigned int>(unsigned int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<CCTrackBar,unsigned int>(unsigned int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<CCTreeView,unsigned int>(unsigned int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<CaretElement>(DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<CheckBoxGlyph,unsigned int>(unsigned int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<Clipper>(DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<Combobox,unsigned int>(unsigned int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<Edit,unsigned int>(unsigned int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<Element,unsigned int>(unsigned int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<Expandable,int>(int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<Expando>(DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<ExpandoButtonGlyph,unsigned int>(unsigned int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<HWNDHost,unsigned int,unsigned int>(unsigned int,unsigned int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<ItemList>(DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<Macro>(DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<Movie,unsigned int>(unsigned int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<Navigator>(DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<PText>(DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<Page>(DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<Pages>(DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<Progress>(DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<PushButton>(DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<RadioButtonGlyph,unsigned int>(unsigned int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<RefPointElement,unsigned int>(unsigned int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<RepeatButton,unsigned int>(unsigned int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<Repeater>(DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<ScrollBar,bool>(bool,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<ScrollViewer>(DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<Selector>(DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<SelectorNoDefault>(DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<SemanticZoomToggle>(DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<SnapshotElement,int>(int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<StyledScrollViewer>(DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<TextGraphic>(DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<Thumb,unsigned int>(unsigned int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<TouchButton,unsigned int>(unsigned int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<TouchCheckBox,unsigned int>(unsigned int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<TouchCheckBoxGlyph>(DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<TouchCommandButton,unsigned int>(unsigned int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<TouchEditBase,int>(int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<TouchHyperLink,unsigned int>(unsigned int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<TouchRepeatButton,unsigned int>(unsigned int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<TouchSelectPopup,HWND__ *,TouchSelect *>(HWND__ *,DirectUI::TouchSelect *,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<TouchSwitch>(DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<TouchTooltipContainer,TouchTooltipConstraint const *>(DirectUI::TouchTooltipConstraint const *,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<UnknownElement,unsigned int>(unsigned int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<Viewer>(DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<WrappingList>(DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<XElement,unsigned int>(unsigned int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateDUIWrapperTouchEx(DirectUI::Element *,DirectUI::IXProviderCP *,IUnknown * *);
	long CreateSafeElementListFromElementList(DirectUI::DynamicArray<DirectUI::Element *,0> *,DirectUI::DynamicArray<CSafeElementPtr<DirectUI::Element> *,0> * *);
	long DUI_CopyProperties(DirectUI::Element *,DirectUI::Element *,DirectUI::PropertyInfo const * (*const *)(),int);
	long DUI_ForwardProperty(DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Element *,DirectUI::PropertyInfo const * (*const *)(),int);
	long DUI_PaintElementTreeToHBITMAP(HBITMAP__ *,tagPOINT const *,tagRECT const *,DirectUI::Element *);
	long DUI_TransferChild(DirectUI::Element *,DirectUI::Element *);
	long DeletePVLAnimationEvent(int,DirectUI::PVLAnimationNotifyEvent *);
	long DoAdd(DirectUI::DynamicArray<CSafeElementPtr<DirectUI::Element> *,0> *,DirectUI::DynamicArray<DirectUI::DynamicArray<DirectUI::SafeElementIndexPair *,0> *,0> *,int,bool,unsigned long *);
	long DoDefaultAction(DirectUI::Element *);
	long DoEntrance(bool,DirectUI::DynamicArray<DirectUI::Element *,0> *,DirectUI::DynamicArray<tagPOINT,0> *,unsigned long *);
	long DoPageOrContentTransition(DirectUI::PVLAnimationContentTransitionEvent *,int,unsigned long *);
	long DoTriggerDrag(DirectUI::Element *,DirectUI::DynamicArray<DirectUI::Element *,0> *,DirectUI::Element *,DirectUI::Element *,unsigned int,tagPOINT,DirectUI::DynamicArray<DirectUI::ClipRectWithElement *,0> *,unsigned long *,bool);
	long DoTriggerDrop(DirectUI::Element *,DirectUI::DynamicArray<DirectUI::Element *,0> *,DirectUI::Element *,DirectUI::Element *,DirectUI::Element *,int,int,tagPOINT,bool,_POINTFLOAT,_POINTFLOAT,DirectUI::DynamicArray<DirectUI::ClipRectWithElement *,0> *,unsigned long *,bool);
	long DrawNineGrid(DirectUI::NGINFO *);
	long DrawSampledBorders(DirectUI::NGINFO *,HDC__ *,int,int,int,int);
	long ElementOrKidsCanFocus(DirectUI::Element *,bool *);
	long EmulateDrawThemeBackground(void *,HDC__ *,int,int,tagRECT const *);
	long FireAnimationEvent(DirectUI::PVLAnimationNotifyEvent *,int,DirectUI::Element *,unsigned long *,bool,bool);
	long GetAccRect(DirectUI::Element *,tagRECT *);
	long GetAccRole(DirectUI::Element *,int *);
	long GetAccRole(IAccessible *,int *);
	long GetAccessibleChildren(DirectUI::Element *,DirectUI::UiaArray<DirectUI::Element *> *);
	long GetChildrenImpl<bool (Element *)>(DirectUI::Value *,DirectUI::UiaArray<DirectUI::Element *> *,bool (&)(DirectUI::Element *));
	long GetColorFromProperty(DirectUI::Element *,DirectUI::PropertyInfo const *,int,unsigned long *);
	long GetColorFromValue(DirectUI::Element *,DirectUI::Value *,unsigned long *);
	long GetElementLabel(DirectUI::Element *,DirectUI::Element * *);
	long GetImmersiveFocusRectBrush(HBRUSH__ * *);
	long GetInverse(D2D1::Matrix3x2F,D2D1::Matrix3x2F *);
	long GetNavigator(DirectUI::Browser *,DirectUI::Element *,DirectUI::Navigator * *,int *);
	long GetOffScreen(DirectUI::Element *,bool *);
	long GetRuntimeIdElement(DirectUI::Element *,DirectUI::UiaArray<int> *,bool);
	long GetRuntimeIdElement(DirectUI::ElementRuntimeId const &,DirectUI::UiaArray<int> *,bool);
	long InitCOM();
	long InitElementLeakTrace(DirectUI::BTreeLookup<DirectUI::Element *,DirectUI::CallstackTracker *> * *);
	long InitProcessNoRegisterPriv(bool,bool);
	long MapElementPointToScreen(DirectUI::Element *,tagPOINT const *,tagPOINT *);
	long MoveDA(DirectUI::DynamicArray<DirectUI::Element *,0> *,DirectUI::DynamicArray<DirectUI::Element *,0> *,unsigned int *);
	long MultiBlt(DirectUI::MBINFO *,DirectUI::MBSIZING,int,int,int,int,int,int,int,int);
	long MultiBltCopy(DirectUI::MBINFO *,int,int,int,int,int,int);
	long MultiBltStretch(DirectUI::MBINFO *,int,int,int,int,int,int,int,int);
	long MultiBltTile(DirectUI::MBINFO *,int,int,int,int,int,int,int,int);
	long ParserCache_Create(DirectUI::IDuiParserCache * *);
	long RegisterDUI70BehaviorFactory();
	long RetrieveTransform(void *,int,int,int,TA_TRANSFORM * *);
	long SafeArrayToArray<int>(tagSAFEARRAY *,DirectUI::UiaArray<int> *,unsigned short);
	long SetAccState(tagVARIANT *,IAccessible *,int,bool);
	long SetDifference(DirectUI::UiaArray<DirectUI::Element *> const &,DirectUI::UiaArray<DirectUI::Element *> const &,DirectUI::UiaArray<DirectUI::Element *> *);
	long SetPosition<BaseScrollBar>(DirectUI::BaseScrollBar *,double);
	long SetStringAcc(tagVARIANT *,IAccessible *,long ( IAccessible::*)(tagVARIANT,unsigned short * *));
	long SetStringSz(tagVARIANT *,unsigned short const *);
	long SetUiaPoint(tagVARIANT *,tagPOINT const &);
	long SetUiaRect(tagVARIANT *,tagRECT const &);
	long UiaInitThread(DirectUI::ElTls *);
	long VerifyBehaviorArgs(unsigned short const *,IDuiBehaviorFactory *);
	long VerifyManualStoryboard(DirectUI::Element *,DirectUI::PVLAnimationNotifyEvent *,bool);
	long _CalculateCarouselingRect(tagRECT const *,tagRECT const *,int,int,tagRECT *);
	long _CalculateNonScrollableRect(tagRECT const *,tagRECT const *,tagRECT const *,tagSIZE const *,tagRECT *);
	long _CalculateScrollingRect(tagRECT const *,tagRECT const *,int,int,int,int,tagRECT *);
	long _CreateAndSetLayout(DirectUI::Element *,long (*)(int,int *,DirectUI::Value * *),int,int *);
	long _GetCharacterHeight(DirectUI::Element *);
	long _GetForegroundAlphaColor(DirectUI::Element *,DirectUI::Value *,bool,unsigned long,unsigned long *);
	long _ParseSystemFont(unsigned short const *,float,DirectUI::Value * * const);
	long _TriggerRevealHide(bool,DirectUI::Element *,DirectUI::Element *,DirectUI::Element *,DirectUI::Element *,tagRECT const *,unsigned long *);
	long g_cAccObjects;
	long volatile g_cInitProcessDone;
	long volatile g_cInitProcessRef;
	tagSIZE DUI_GetElementExtent(DirectUI::Element *);
	tagSIZE DUI_GetExtent(DirectUI::Element *);
	unsigned __int64 FindResidInsertionPoint(unsigned short const *,unsigned __int64);
	unsigned char GetPreMultiAlpha(unsigned char,unsigned char);
	unsigned int DUI_GetChildCount(DirectUI::Element *);
	unsigned int g_iGlobalCI;
	unsigned int g_iGlobalPI;
	unsigned long AccModuleAddRef();
	unsigned long AccModuleRelease();
	unsigned long AlphaBlendBackgroundColorFromParents(DirectUI::Element *,unsigned long,bool *);
	unsigned long BlendAlphaColor(unsigned long,unsigned long,unsigned char);
	unsigned long FreeModuleThreadProc(void *);
	unsigned long _AdjustBrightness(unsigned long,double);
	unsigned long g_dwCookieInc;
	unsigned long g_dwElSlot;
	unsigned long g_dwFontCacheSlot;
	unsigned short * BuildRenderString(unsigned short const *,unsigned short);
	unsigned short * ConvertBufferToWideChar(unsigned char const *,unsigned long);
	unsigned short OurCharUpperW(unsigned short);
	void * AccHAllocAndZero(unsigned __int64);
	void * GetPseudoThemeHandle(unsigned short const *);
	void * HAlloc(unsigned __int64);
	void * HAllocAndZero(unsigned __int64);
	void * HAllocArray(unsigned int,unsigned int);
	void * HReAlloc(void *,unsigned __int64);
	void * HReAllocAndZero(void *,unsigned __int64);
	void AccHDelete<RefcountBase>(DirectUI::RefcountBase *);
	void AccHFree(void *);
	void CacheCleaningProc(HWND__ *,unsigned int,unsigned __int64,unsigned long);
	void ClassMapCleanupCB(HINSTANCE__ *,DirectUI::IClassInfo *);
	void DUI_GetBorderAndPadding(DirectUI::Element *,tagRECT *);
	void DUI_GetElementRelativeRect(DirectUI::Element *,DirectUI::Element *,tagRECT *);
	void DUI_GetExtentToContentMargins(DirectUI::Element *,tagRECT *,int);
	void DUI_MapElementPoint(DirectUI::Element *,DirectUI::Element *,DirectUI::DUI_COORDINATES_SYSTEM,tagPOINT const *,tagPOINT *);
	void DUI_MapElementPoint(DirectUI::Element *,DirectUI::Element *,tagPOINT const *,tagPOINT *);
	void DUI_MapElementRect(DirectUI::Element *,DirectUI::Element *,tagRECT const *,tagRECT *);
	void DUI_PaintElementTreeToHDC(HDC__ *,tagPOINT const *,tagRECT const *,DirectUI::Element *);
	void DUI_ReduceRectByBorderAndPadding(DirectUI::Element *,tagRECT *);
	void DUI_TransformRect(DirectUI::Element *,DirectUI::DUI_COORDINATES_SYSTEM,tagRECT const *,DirectUI::DUI_COORDINATES_SYSTEM,tagRECT *);
	void DestroyByteCodeCB(unsigned short *,DirectUI::ByteCode);
	void DestroyLeakedElementList();
	void DestroyLeakedElementsDataCB(DirectUI::Element *,DirectUI::CallstackTracker *);
	void DumpProperties(DirectUI::Element *,DirectUI::Element *,int,int);
	void DumpTree(DirectUI::Element *,DirectUI::Element *,int,int);
	void ElementLeakTrace(char const *,...);
	void ElementSetValue(DirectUI::Element *,DirectUI::PropertyInfo const *,DirectUI::Value *,DirectUI::Element *);
	void EnumCallstackFramesCB(char const *,char const *,unsigned long,unsigned long);
	void FlipRgn(HRGN__ *,tagRECT const *);
	void GetAlignedRect(DirectUI::HALIGN,DirectUI::VALIGN,tagRECT const *,int,int,tagRECT *);
	void GetLocation(DirectUI::Element *,DirectUI::Element const *,tagPOINT * const);
	void GetRectHelper(DirectUI::Element *,DirectUI::PropertyInfo const *,tagRECT *,bool);
	void GetShortcutString(unsigned short,unsigned short *,unsigned int);
	void HDelete<ClassInfo<AccessibleButton,Button,StandardCreator<AccessibleButton> > >(DirectUI::ClassInfo<DirectUI::AccessibleButton,DirectUI::Button,DirectUI::StandardCreator<DirectUI::AccessibleButton> > *);
	void HDelete<ClassInfo<AdaptorElement,Element,StandardCreator<AdaptorElement> > >(DirectUI::ClassInfo<DirectUI::AdaptorElement,DirectUI::Element,DirectUI::StandardCreator<DirectUI::AdaptorElement> > *);
	void HDelete<ClassInfo<AnimationStrip,Element,StandardCreator<AnimationStrip> > >(DirectUI::ClassInfo<DirectUI::AnimationStrip,DirectUI::Element,DirectUI::StandardCreator<DirectUI::AnimationStrip> > *);
	void HDelete<ClassInfo<AutoButton,AccessibleButton,StandardCreator<AutoButton> > >(DirectUI::ClassInfo<DirectUI::AutoButton,DirectUI::AccessibleButton,DirectUI::StandardCreator<DirectUI::AutoButton> > *);
	void HDelete<ClassInfo<BaseScrollViewer,Element,EmptyCreator<BaseScrollViewer> > >(DirectUI::ClassInfo<DirectUI::BaseScrollViewer,DirectUI::Element,DirectUI::EmptyCreator<DirectUI::BaseScrollViewer> > *);
	void HDelete<ClassInfo<Bind,Element,StandardCreator<Bind> > >(DirectUI::ClassInfo<DirectUI::Bind,DirectUI::Element,DirectUI::StandardCreator<DirectUI::Bind> > *);
	void HDelete<ClassInfo<Browser,Element,StandardCreator<Browser> > >(DirectUI::ClassInfo<DirectUI::Browser,DirectUI::Element,DirectUI::StandardCreator<DirectUI::Browser> > *);
	void HDelete<ClassInfo<Button,Element,StandardCreator<Button> > >(DirectUI::ClassInfo<DirectUI::Button,DirectUI::Element,DirectUI::StandardCreator<DirectUI::Button> > *);
	void HDelete<ClassInfo<CCAVI,CCBase,StandardCreator<CCAVI> > >(DirectUI::ClassInfo<DirectUI::CCAVI,DirectUI::CCBase,DirectUI::StandardCreator<DirectUI::CCAVI> > *);
	void HDelete<ClassInfo<CCBase,HWNDHost,StandardCreator<CCBase> > >(DirectUI::ClassInfo<DirectUI::CCBase,DirectUI::HWNDHost,DirectUI::StandardCreator<DirectUI::CCBase> > *);
	void HDelete<ClassInfo<CCBaseCheckRadioButton,CCPushButton,StandardCreator<CCBaseCheckRadioButton> > >(DirectUI::ClassInfo<DirectUI::CCBaseCheckRadioButton,DirectUI::CCPushButton,DirectUI::StandardCreator<DirectUI::CCBaseCheckRadioButton> > *);
	void HDelete<ClassInfo<CCBaseScrollBar,CCBase,StandardCreator<CCBaseScrollBar> > >(DirectUI::ClassInfo<DirectUI::CCBaseScrollBar,DirectUI::CCBase,DirectUI::StandardCreator<DirectUI::CCBaseScrollBar> > *);
	void HDelete<ClassInfo<CCCheckBox,CCBaseCheckRadioButton,StandardCreator<CCCheckBox> > >(DirectUI::ClassInfo<DirectUI::CCCheckBox,DirectUI::CCBaseCheckRadioButton,DirectUI::StandardCreator<DirectUI::CCCheckBox> > *);
	void HDelete<ClassInfo<CCCommandLink,CCPushButton,StandardCreator<CCCommandLink> > >(DirectUI::ClassInfo<DirectUI::CCCommandLink,DirectUI::CCPushButton,DirectUI::StandardCreator<DirectUI::CCCommandLink> > *);
	void HDelete<ClassInfo<CCHScrollBar,CCBaseScrollBar,StandardCreator<CCHScrollBar> > >(DirectUI::ClassInfo<DirectUI::CCHScrollBar,DirectUI::CCBaseScrollBar,DirectUI::StandardCreator<DirectUI::CCHScrollBar> > *);
	void HDelete<ClassInfo<CCListBox,CCBase,StandardCreator<CCListBox> > >(DirectUI::ClassInfo<DirectUI::CCListBox,DirectUI::CCBase,DirectUI::StandardCreator<DirectUI::CCListBox> > *);
	void HDelete<ClassInfo<CCListView,CCBase,StandardCreator<CCListView> > >(DirectUI::ClassInfo<DirectUI::CCListView,DirectUI::CCBase,DirectUI::StandardCreator<DirectUI::CCListView> > *);
	void HDelete<ClassInfo<CCProgressBar,CCBase,StandardCreator<CCProgressBar> > >(DirectUI::ClassInfo<DirectUI::CCProgressBar,DirectUI::CCBase,DirectUI::StandardCreator<DirectUI::CCProgressBar> > *);
	void HDelete<ClassInfo<CCPushButton,CCBase,StandardCreator<CCPushButton> > >(DirectUI::ClassInfo<DirectUI::CCPushButton,DirectUI::CCBase,DirectUI::StandardCreator<DirectUI::CCPushButton> > *);
	void HDelete<ClassInfo<CCRadioButton,CCBaseCheckRadioButton,StandardCreator<CCRadioButton> > >(DirectUI::ClassInfo<DirectUI::CCRadioButton,DirectUI::CCBaseCheckRadioButton,DirectUI::StandardCreator<DirectUI::CCRadioButton> > *);
	void HDelete<ClassInfo<CCSysLink,CCBase,StandardCreator<CCSysLink> > >(DirectUI::ClassInfo<DirectUI::CCSysLink,DirectUI::CCBase,DirectUI::StandardCreator<DirectUI::CCSysLink> > *);
	void HDelete<ClassInfo<CCTrackBar,CCBase,StandardCreator<CCTrackBar> > >(DirectUI::ClassInfo<DirectUI::CCTrackBar,DirectUI::CCBase,DirectUI::StandardCreator<DirectUI::CCTrackBar> > *);
	void HDelete<ClassInfo<CCTreeView,CCBase,StandardCreator<CCTreeView> > >(DirectUI::ClassInfo<DirectUI::CCTreeView,DirectUI::CCBase,DirectUI::StandardCreator<DirectUI::CCTreeView> > *);
	void HDelete<ClassInfo<CCVScrollBar,CCBaseScrollBar,StandardCreator<CCVScrollBar> > >(DirectUI::ClassInfo<DirectUI::CCVScrollBar,DirectUI::CCBaseScrollBar,DirectUI::StandardCreator<DirectUI::CCVScrollBar> > *);
	void HDelete<ClassInfo<CaretElement,Element,StandardCreator<CaretElement> > >(DirectUI::ClassInfo<DirectUI::CaretElement,DirectUI::Element,DirectUI::StandardCreator<DirectUI::CaretElement> > *);
	void HDelete<ClassInfo<CheckBoxGlyph,Button,StandardCreator<CheckBoxGlyph> > >(DirectUI::ClassInfo<DirectUI::CheckBoxGlyph,DirectUI::Button,DirectUI::StandardCreator<DirectUI::CheckBoxGlyph> > *);
	void HDelete<ClassInfo<Clipper,Expandable,StandardCreator<Clipper> > >(DirectUI::ClassInfo<DirectUI::Clipper,DirectUI::Expandable,DirectUI::StandardCreator<DirectUI::Clipper> > *);
	void HDelete<ClassInfo<Combobox,HWNDHost,StandardCreator<Combobox> > >(DirectUI::ClassInfo<DirectUI::Combobox,DirectUI::HWNDHost,DirectUI::StandardCreator<DirectUI::Combobox> > *);
	void HDelete<ClassInfo<DialogElement,HWNDElement,EmptyCreator<DialogElement> > >(DirectUI::ClassInfo<DirectUI::DialogElement,DirectUI::HWNDElement,DirectUI::EmptyCreator<DirectUI::DialogElement> > *);
	void HDelete<ClassInfo<Edit,HWNDHost,StandardCreator<Edit> > >(DirectUI::ClassInfo<DirectUI::Edit,DirectUI::HWNDHost,DirectUI::StandardCreator<DirectUI::Edit> > *);
	void HDelete<ClassInfo<ElementWithHWND,Element,EmptyCreator<ElementWithHWND> > >(DirectUI::ClassInfo<DirectUI::ElementWithHWND,DirectUI::Element,DirectUI::EmptyCreator<DirectUI::ElementWithHWND> > *);
	void HDelete<ClassInfo<Expandable,Element,StandardCreator<Expandable> > >(DirectUI::ClassInfo<DirectUI::Expandable,DirectUI::Element,DirectUI::StandardCreator<DirectUI::Expandable> > *);
	void HDelete<ClassInfo<Expando,Expandable,StandardCreator<Expando> > >(DirectUI::ClassInfo<DirectUI::Expando,DirectUI::Expandable,DirectUI::StandardCreator<DirectUI::Expando> > *);
	void HDelete<ClassInfo<ExpandoButtonGlyph,Button,StandardCreator<ExpandoButtonGlyph> > >(DirectUI::ClassInfo<DirectUI::ExpandoButtonGlyph,DirectUI::Button,DirectUI::StandardCreator<DirectUI::ExpandoButtonGlyph> > *);
	void HDelete<ClassInfo<HWNDElement,ElementWithHWND,EmptyCreator<HWNDElement> > >(DirectUI::ClassInfo<DirectUI::HWNDElement,DirectUI::ElementWithHWND,DirectUI::EmptyCreator<DirectUI::HWNDElement> > *);
	void HDelete<ClassInfo<HWNDHost,ElementWithHWND,StandardCreator<HWNDHost> > >(DirectUI::ClassInfo<DirectUI::HWNDHost,DirectUI::ElementWithHWND,DirectUI::StandardCreator<DirectUI::HWNDHost> > *);
	void HDelete<ClassInfo<InternalRichText,RichText,StandardCreator<InternalRichText> > >(DirectUI::ClassInfo<DirectUI::InternalRichText,DirectUI::RichText,DirectUI::StandardCreator<DirectUI::InternalRichText> > *);
	void HDelete<ClassInfo<ItemList,Selector,StandardCreator<ItemList> > >(DirectUI::ClassInfo<DirectUI::ItemList,DirectUI::Selector,DirectUI::StandardCreator<DirectUI::ItemList> > *);
	void HDelete<ClassInfo<Macro,Element,StandardCreator<Macro> > >(DirectUI::ClassInfo<DirectUI::Macro,DirectUI::Element,DirectUI::StandardCreator<DirectUI::Macro> > *);
	void HDelete<ClassInfo<ModernProgressBar,Element,StandardCreator<ModernProgressBar> > >(DirectUI::ClassInfo<DirectUI::ModernProgressBar,DirectUI::Element,DirectUI::StandardCreator<DirectUI::ModernProgressBar> > *);
	void HDelete<ClassInfo<ModernProgressRing,Element,StandardCreator<ModernProgressRing> > >(DirectUI::ClassInfo<DirectUI::ModernProgressRing,DirectUI::Element,DirectUI::StandardCreator<DirectUI::ModernProgressRing> > *);
	void HDelete<ClassInfo<Movie,Element,StandardCreator<Movie> > >(DirectUI::ClassInfo<DirectUI::Movie,DirectUI::Element,DirectUI::StandardCreator<DirectUI::Movie> > *);
	void HDelete<ClassInfo<Navigator,PushButton,StandardCreator<Navigator> > >(DirectUI::ClassInfo<DirectUI::Navigator,DirectUI::PushButton,DirectUI::StandardCreator<DirectUI::Navigator> > *);
	void HDelete<ClassInfo<PText,TextGraphic,StandardCreator<PText> > >(DirectUI::ClassInfo<DirectUI::PText,DirectUI::TextGraphic,DirectUI::StandardCreator<DirectUI::PText> > *);
	void HDelete<ClassInfo<Page,Macro,StandardCreator<Page> > >(DirectUI::ClassInfo<DirectUI::Page,DirectUI::Macro,DirectUI::StandardCreator<DirectUI::Page> > *);
	void HDelete<ClassInfo<Pages,Element,StandardCreator<Pages> > >(DirectUI::ClassInfo<DirectUI::Pages,DirectUI::Element,DirectUI::StandardCreator<DirectUI::Pages> > *);
	void HDelete<ClassInfo<Progress,Element,StandardCreator<Progress> > >(DirectUI::ClassInfo<DirectUI::Progress,DirectUI::Element,DirectUI::StandardCreator<DirectUI::Progress> > *);
	void HDelete<ClassInfo<PushButton,AutoButton,StandardCreator<PushButton> > >(DirectUI::ClassInfo<DirectUI::PushButton,DirectUI::AutoButton,DirectUI::StandardCreator<DirectUI::PushButton> > *);
	void HDelete<ClassInfo<RadioButtonGlyph,Button,StandardCreator<RadioButtonGlyph> > >(DirectUI::ClassInfo<DirectUI::RadioButtonGlyph,DirectUI::Button,DirectUI::StandardCreator<DirectUI::RadioButtonGlyph> > *);
	void HDelete<ClassInfo<RefPointElement,Element,StandardCreator<RefPointElement> > >(DirectUI::ClassInfo<DirectUI::RefPointElement,DirectUI::Element,DirectUI::StandardCreator<DirectUI::RefPointElement> > *);
	void HDelete<ClassInfo<RepeatButton,Button,StandardCreator<RepeatButton> > >(DirectUI::ClassInfo<DirectUI::RepeatButton,DirectUI::Button,DirectUI::StandardCreator<DirectUI::RepeatButton> > *);
	void HDelete<ClassInfo<Repeater,Macro,StandardCreator<Repeater> > >(DirectUI::ClassInfo<DirectUI::Repeater,DirectUI::Macro,DirectUI::StandardCreator<DirectUI::Repeater> > *);
	void HDelete<ClassInfo<RichText,Element,StandardCreator<RichText> > >(DirectUI::ClassInfo<DirectUI::RichText,DirectUI::Element,DirectUI::StandardCreator<DirectUI::RichText> > *);
	void HDelete<ClassInfo<ScrollBar,Element,StandardCreator<ScrollBar> > >(DirectUI::ClassInfo<DirectUI::ScrollBar,DirectUI::Element,DirectUI::StandardCreator<DirectUI::ScrollBar> > *);
	void HDelete<ClassInfo<ScrollViewer,BaseScrollViewer,StandardCreator<ScrollViewer> > >(DirectUI::ClassInfo<DirectUI::ScrollViewer,DirectUI::BaseScrollViewer,DirectUI::StandardCreator<DirectUI::ScrollViewer> > *);
	void HDelete<ClassInfo<Selector,Element,StandardCreator<Selector> > >(DirectUI::ClassInfo<DirectUI::Selector,DirectUI::Element,DirectUI::StandardCreator<DirectUI::Selector> > *);
	void HDelete<ClassInfo<SelectorNoDefault,Selector,StandardCreator<SelectorNoDefault> > >(DirectUI::ClassInfo<DirectUI::SelectorNoDefault,DirectUI::Selector,DirectUI::StandardCreator<DirectUI::SelectorNoDefault> > *);
	void HDelete<ClassInfo<SemanticZoomToggle,Element,StandardCreator<SemanticZoomToggle> > >(DirectUI::ClassInfo<DirectUI::SemanticZoomToggle,DirectUI::Element,DirectUI::StandardCreator<DirectUI::SemanticZoomToggle> > *);
	void HDelete<ClassInfo<SnapshotElement,Element,StandardCreator<SnapshotElement> > >(DirectUI::ClassInfo<DirectUI::SnapshotElement,DirectUI::Element,DirectUI::StandardCreator<DirectUI::SnapshotElement> > *);
	void HDelete<ClassInfo<StyledScrollViewer,BaseScrollViewer,StandardCreator<StyledScrollViewer> > >(DirectUI::ClassInfo<DirectUI::StyledScrollViewer,DirectUI::BaseScrollViewer,DirectUI::StandardCreator<DirectUI::StyledScrollViewer> > *);
	void HDelete<ClassInfo<TextGraphic,Element,StandardCreator<TextGraphic> > >(DirectUI::ClassInfo<DirectUI::TextGraphic,DirectUI::Element,DirectUI::StandardCreator<DirectUI::TextGraphic> > *);
	void HDelete<ClassInfo<Thumb,Button,StandardCreator<Thumb> > >(DirectUI::ClassInfo<DirectUI::Thumb,DirectUI::Button,DirectUI::StandardCreator<DirectUI::Thumb> > *);
	void HDelete<ClassInfo<TouchButton,RichText,StandardCreator<TouchButton> > >(DirectUI::ClassInfo<DirectUI::TouchButton,DirectUI::RichText,DirectUI::StandardCreator<DirectUI::TouchButton> > *);
	void HDelete<ClassInfo<TouchCarouselList,Element,StandardCreator<TouchCarouselList> > >(DirectUI::ClassInfo<DirectUI::TouchCarouselList,DirectUI::Element,DirectUI::StandardCreator<DirectUI::TouchCarouselList> > *);
	void HDelete<ClassInfo<TouchCarouselScrollBar,ScrollBar,StandardCreator<TouchCarouselScrollBar> > >(DirectUI::ClassInfo<DirectUI::TouchCarouselScrollBar,DirectUI::ScrollBar,DirectUI::StandardCreator<DirectUI::TouchCarouselScrollBar> > *);
	void HDelete<ClassInfo<TouchCheckBox,TouchButton,StandardCreator<TouchCheckBox> > >(DirectUI::ClassInfo<DirectUI::TouchCheckBox,DirectUI::TouchButton,DirectUI::StandardCreator<DirectUI::TouchCheckBox> > *);
	void HDelete<ClassInfo<TouchCheckBoxGlyph,TouchCheckBox,StandardCreator<TouchCheckBoxGlyph> > >(DirectUI::ClassInfo<DirectUI::TouchCheckBoxGlyph,DirectUI::TouchCheckBox,DirectUI::StandardCreator<DirectUI::TouchCheckBoxGlyph> > *);
	void HDelete<ClassInfo<TouchCommandButton,TouchButton,StandardCreator<TouchCommandButton> > >(DirectUI::ClassInfo<DirectUI::TouchCommandButton,DirectUI::TouchButton,DirectUI::StandardCreator<DirectUI::TouchCommandButton> > *);
	void HDelete<ClassInfo<TouchDialogElement,TouchHWNDElement,EmptyCreator<TouchDialogElement> > >(DirectUI::ClassInfo<DirectUI::TouchDialogElement,DirectUI::TouchHWNDElement,DirectUI::EmptyCreator<DirectUI::TouchDialogElement> > *);
	void HDelete<ClassInfo<TouchEdit2,TouchEditBase,StandardCreator<TouchEdit2> > >(DirectUI::ClassInfo<DirectUI::TouchEdit2,DirectUI::TouchEditBase,DirectUI::StandardCreator<DirectUI::TouchEdit2> > *);
	void HDelete<ClassInfo<TouchEditBase,Element,StandardCreator<TouchEditBase> > >(DirectUI::ClassInfo<DirectUI::TouchEditBase,DirectUI::Element,DirectUI::StandardCreator<DirectUI::TouchEditBase> > *);
	void HDelete<ClassInfo<TouchEditInner,TouchEditBase,StandardCreator<TouchEditInner> > >(DirectUI::ClassInfo<DirectUI::TouchEditInner,DirectUI::TouchEditBase,DirectUI::StandardCreator<DirectUI::TouchEditInner> > *);
	void HDelete<ClassInfo<TouchHWNDElement,HWNDElement,EmptyCreator<TouchHWNDElement> > >(DirectUI::ClassInfo<DirectUI::TouchHWNDElement,DirectUI::HWNDElement,DirectUI::EmptyCreator<DirectUI::TouchHWNDElement> > *);
	void HDelete<ClassInfo<TouchHyperLink,TouchButton,StandardCreator<TouchHyperLink> > >(DirectUI::ClassInfo<DirectUI::TouchHyperLink,DirectUI::TouchButton,DirectUI::StandardCreator<DirectUI::TouchHyperLink> > *);
	void HDelete<ClassInfo<TouchRepeatButton,TouchButton,StandardCreator<TouchRepeatButton> > >(DirectUI::ClassInfo<DirectUI::TouchRepeatButton,DirectUI::TouchButton,DirectUI::StandardCreator<DirectUI::TouchRepeatButton> > *);
	void HDelete<ClassInfo<TouchScrollBar,ScrollBar,StandardCreator<TouchScrollBar> > >(DirectUI::ClassInfo<DirectUI::TouchScrollBar,DirectUI::ScrollBar,DirectUI::StandardCreator<DirectUI::TouchScrollBar> > *);
	void HDelete<ClassInfo<TouchScrollViewer,BaseScrollViewer,StandardCreator<TouchScrollViewer> > >(DirectUI::ClassInfo<DirectUI::TouchScrollViewer,DirectUI::BaseScrollViewer,DirectUI::StandardCreator<DirectUI::TouchScrollViewer> > *);
	void HDelete<ClassInfo<TouchSelect,TouchButton,StandardCreator<TouchSelect> > >(DirectUI::ClassInfo<DirectUI::TouchSelect,DirectUI::TouchButton,DirectUI::StandardCreator<DirectUI::TouchSelect> > *);
	void HDelete<ClassInfo<TouchSelectItem,TouchButton,StandardCreator<TouchSelectItem> > >(DirectUI::ClassInfo<DirectUI::TouchSelectItem,DirectUI::TouchButton,DirectUI::StandardCreator<DirectUI::TouchSelectItem> > *);
	void HDelete<ClassInfo<TouchSelectPopup,TouchHWNDElement,EmptyCreator<TouchSelectPopup> > >(DirectUI::ClassInfo<DirectUI::TouchSelectPopup,DirectUI::TouchHWNDElement,DirectUI::EmptyCreator<DirectUI::TouchSelectPopup> > *);
	void HDelete<ClassInfo<TouchSlider,Element,StandardCreator<TouchSlider> > >(DirectUI::ClassInfo<DirectUI::TouchSlider,DirectUI::Element,DirectUI::StandardCreator<DirectUI::TouchSlider> > *);
	void HDelete<ClassInfo<TouchSwitch,Element,StandardCreator<TouchSwitch> > >(DirectUI::ClassInfo<DirectUI::TouchSwitch,DirectUI::Element,DirectUI::StandardCreator<DirectUI::TouchSwitch> > *);
	void HDelete<ClassInfo<TouchXBaby,TouchDialogElement,StandardCreator<TouchXBaby> > >(DirectUI::ClassInfo<DirectUI::TouchXBaby,DirectUI::TouchDialogElement,DirectUI::StandardCreator<DirectUI::TouchXBaby> > *);
	void HDelete<ClassInfo<UnknownElement,Element,StandardCreator<UnknownElement> > >(DirectUI::ClassInfo<DirectUI::UnknownElement,DirectUI::Element,DirectUI::StandardCreator<DirectUI::UnknownElement> > *);
	void HDelete<ClassInfo<Viewer,Element,StandardCreator<Viewer> > >(DirectUI::ClassInfo<DirectUI::Viewer,DirectUI::Element,DirectUI::StandardCreator<DirectUI::Viewer> > *);
	void HDelete<ClassInfo<WrappingList,ItemList,StandardCreator<WrappingList> > >(DirectUI::ClassInfo<DirectUI::WrappingList,DirectUI::ItemList,DirectUI::StandardCreator<DirectUI::WrappingList> > *);
	void HDelete<ClassInfo<XBaby,DialogElement,StandardCreator<XBaby> > >(DirectUI::ClassInfo<DirectUI::XBaby,DirectUI::DialogElement,DirectUI::StandardCreator<DirectUI::XBaby> > *);
	void HDelete<ClassInfo<XElement,HWNDHost,StandardCreator<XElement> > >(DirectUI::ClassInfo<DirectUI::XElement,DirectUI::HWNDHost,DirectUI::StandardCreator<DirectUI::XElement> > *);
	void HDelete<DUIXmlParser>(DirectUI::DUIXmlParser *);
	void HDelete<Element>(DirectUI::Element *);
	void HDelete<XProvider>(DirectUI::XProvider *);
	void HFree(void *);
	void LoadCommctlExports();
	void MakeOpaque(HDC__ *,tagRECT const &);
	void MapRect(DirectUI::Element *,tagRECT *);
	void OverwriteSolidRect(HDC__ *,unsigned long,tagRECT const &);
	void PaintImmersiveFocusRect(HDC__ *,tagRECT const &,unsigned int,bool);
	void RemoveElementFromLeakedList(DirectUI::Element *);
	void RenderTouchGesture(DirectUI::PointerEvent *,GESTURE_TYPE);
	void ReportLeakedElementsCB(DirectUI::Element *,DirectUI::CallstackTracker *);
	void SafeDestroyValueList(DirectUI::DynamicArray<DirectUI::Value *,0> *);
	void SetGadgetOpacity(HGADGET__ *,unsigned char);
	void SetTilingParameters(DirectUI::ContentTiler *);
	void SyncElementAlphaFromForegroundAlpha(DirectUI::Element *);
	void TiledStretchDIBits(HDC__ *,int,int,int,int,int,int,int,int,void const *,tagBITMAPINFO const *,unsigned int,unsigned long);
	void Trace(unsigned short const *,...);
	void UnloadCommctlExports();
	void UpdateGadgetSurface(HGADGET__ *,tagSIZE,bool,tagSIZE const *);
	void UpdateLocation(DirectUI::Element *,DirectUI::Element const *,tagPOINT * const);
	void _FillWithAlpha(HDC__ *,tagRECT &,unsigned long,unsigned char);
	void _FireClickEvent(DirectUI::Button *,DirectUI::tagClickInfo *);
	void _ReduceBounds(tagRECT *,tagRECT const *);
	void _ReleaseValue(DirectUI::PropertyInfo const *,DirectUI::Value *);
	void _ReplaceValueFromEnumMap(DirectUI::Value * *,unsigned short const *,DirectUI::PropertyInfo const *);
	void _TransformRect(D2D1::Matrix3x2F const &,tagRECT const *,tagRECT *);
};

struct DuiBehaviorArgs
{
	int GetInt(unsigned int,int);
};

struct DuiTelemetry
{
	static void DpiChanged(int);
};

class EnsureLayered
{
protected:
	static _GUID const * * s_rgpIID;
public:
	virtual long GetCallbackFilters(DuiBehaviorFilters::Flags *);
	virtual long Init(DirectUI::Value *);
	virtual long OnAttach(DirectUI::Element *);
	virtual long OnDetach(DirectUI::Element *);
	virtual long OnHosted(DirectUI::Element *,DirectUI::Element *);
	virtual long OnUnHosted(DirectUI::Element *,DirectUI::Element *);
};

namespace Gdiplus
{
	struct Bitmap
	{
		Bitmap(int,int,int);
		static Bitmap * FromStream(IStream *,int);
	};

	struct Brush
	{
		BrushType GetType();
		virtual Brush * Clone();
	};

	struct Color
	{
		Color();
	};

	struct Graphics
	{
		Graphics(Image *);
		Status DrawPath(Pen const *,GraphicsPath const *);
		Status GetTransform(Matrix *);
	};

	struct GraphicsPath
	{
		Status GetPathData(PathData *);
	};

	struct Image
	{
		unsigned int GetHeight();
		unsigned int GetWidth();
		virtual Image * Clone();
	};

	struct LinearGradientBrush
	{
		LinearGradientBrush(PointF const &,PointF const &,Color const &,Color const &);
		Status GetInterpolationColors(Color *,float *,int);
		Status GetTransform(Matrix *);
		Status SetInterpolationColors(Color const *,float const *,int);
		Status SetTransform(Matrix const *);
		int GetInterpolationColorCount();
	};

	struct Matrix
	{
		Matrix();
		Matrix(float,float,float,float,float,float);
		Status Reset();
		Status SetElements(float,float,float,float,float,float);
	};

	struct PathData
	{
		~PathData();
	};

	struct PathGradientBrush
	{
		PathGradientBrush(GraphicsPath const *);
		Status GetInterpolationColors(Color *,float *,int);
		Status GetTransform(Matrix *);
		Status SetInterpolationColors(Color const *,float const *,int);
		Status SetTransform(Matrix const *);
		int GetInterpolationColorCount();
	};

	struct Pen
	{
		Pen(Color const &,float);
		Status GetColor(Color *);
		Status SetColor(Color const &);
	};

	struct PointF
	{
		PointF();
	};

	struct SolidBrush
	{
		SolidBrush(Color const &);
		Status GetColor(Color *);
		Status SetColor(Color const &);
	};

	struct TextureBrush
	{
		Image * GetImage();
		Status SetTransform(Matrix const *);
		TextureBrush(Image *,WrapMode);
	};

};

class IDuiBehaviorImpl
{
	virtual long Init(DirectUI::Value *);
	virtual long OnAttach(DirectUI::Element *);
	virtual long OnDetach(DirectUI::Element *);
	virtual long OnDisplayNodeCallback(DirectUI::Element *,EventMsg *);
	virtual long OnDoLayout(DirectUI::Element *,int,int);
	virtual long OnEvent(DirectUI::Element *,DirectUI::Event *);
	virtual long OnGetAdjacent(DirectUI::Element *,int,DirectUI::NavReference const *,unsigned long,DirectUI::Element * *);
	virtual long OnHosted(DirectUI::Element *,DirectUI::Element *);
	virtual long OnInput(DirectUI::Element *,DirectUI::InputEvent *);
	virtual long OnKeyFocusMoved(DirectUI::Element *,DirectUI::Element *,DirectUI::Element *);
	virtual long OnPaint(DirectUI::Element *,HDC__ *,tagRECT const *,tagRECT const *);
	virtual long OnPropertyChanged(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual long OnPropertyChanging(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *,int *);
	virtual long OnUnHosted(DirectUI::Element *,DirectUI::Element *);
	virtual long OnUpdateDesiredSize(DirectUI::Element *,int,int,DirectUI::Surface *,tagSIZE *);
};

class IRichEditOleCallbackImpl
{
	virtual long ContextSensitiveHelp(int);
	virtual long DeleteObject(IOleObject *);
	virtual long GetDragDropEffect(int,unsigned long,unsigned long *);
	virtual long GetInPlaceContext(IOleInPlaceFrame * *,IOleInPlaceUIWindow * *,tagOIFI *);
	virtual long GetNewStorage(IStorage * *);
	virtual long ShowContainerUI(int);
};

struct ITextHost2Impl
{
	virtual HPALETTE__ * TxGetPalette();
	virtual int TxEnableScrollBar(int,int);
	virtual int TxIsDoubleClickPending();
	virtual int TxSetScrollPos(int,int,int);
	virtual int TxSetScrollRange(int,long,int,int);
	virtual int TxSetTimer(unsigned int,unsigned int);
	virtual int TxShowScrollBar(int,int);
	virtual long OnTxCharFormatChange(_charformatw const *);
	virtual long OnTxParaFormatChange(_paraformat const *);
	virtual long TxGetAcceleratorPos(long *);
	virtual long TxGetBackStyle(TXTBACKSTYLE *);
	virtual long TxGetEastAsianFlags(long *);
	virtual long TxGetEditStyle(unsigned long,unsigned long *);
	virtual long TxGetHorzExtent(long *);
	virtual long TxGetSelectionBarWidth(long *);
	virtual long TxGetWindowStyles(unsigned long *,unsigned long *);
	virtual long TxSetForegroundWindow();
	virtual long TxShowDropCaret(int,HDC__ *,tagRECT const *);
	virtual void TxFreeTextServicesNotification();
	virtual void TxKillTimer(unsigned int);
	virtual void TxScrollWindowEx(int,int,tagRECT const *,tagRECT const *,HRGN__ *,tagRECT *,unsigned int);
	virtual void TxSetCapture(int);
	virtual void TxViewChange(int);
};

class ImplicitAnimation
{
protected:
	static _GUID const * * s_rgpIID;
public:
	virtual long GetCallbackFilters(DuiBehaviorFilters::Flags *);
	virtual long Init(DirectUI::Value *);
	virtual long OnAttach(DirectUI::Element *);
	virtual long OnDetach(DirectUI::Element *);
	virtual long OnEvent(DirectUI::Element *,DirectUI::Event *);
	virtual long OnHosted(DirectUI::Element *,DirectUI::Element *);
	virtual long OnPropertyChanged(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual long OnPropertyChanging(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *,int *);
	virtual long OnUnHosted(DirectUI::Element *,DirectUI::Element *);
};

namespace Library
{
	struct BitmapLock
	{
		BitmapLock(Gdiplus::Bitmap * const,unsigned int const &,int const &);
	};

	struct Compression
	{
		static long decompress(SimpleVector<unsigned char> const &,unsigned char *,unsigned long const &);
	};

	struct ErrorHandling
	{
		static long convertStatus(Gdiplus::Status const &);
		static long convertWin32Result(int const &);
	};

	class File
	{
		long setFilePointer(long const &,unsigned long const &,unsigned long *);
	public:
		long open(unsigned short const * const,unsigned long const &,unsigned long const &,unsigned long const &);
		virtual long getPosition(unsigned long * const);
		virtual long getSize(unsigned long * const);
		virtual long read(void *,unsigned long const &);
		virtual long setPosition(unsigned long const &);
		virtual long skip(unsigned long const &);
		virtual long write(void const *,unsigned long const &);
	};

	struct GdiplusSession
	{
		GdiplusSession();
	};

	struct GlobalMemory
	{
		virtual ~GlobalMemory();
	};

	struct GlobalMemoryLock
	{
		virtual ~GlobalMemoryLock();
	};

	struct Graphics
	{
		static Gdiplus::Color apply(Gdiplus::Color const &,Gdiplus::ColorMatrix const *);
		static Gdiplus::ColorMatrix apply(Gdiplus::ColorMatrix const &,Gdiplus::ColorMatrix const &);
		static int GetEncoderClsid(unsigned short const *,_GUID *);
		static long addPath<Gdiplus::Point>(Gdiplus::GraphicsPath * const,Gdiplus::Point const &,Gdiplus::Point const &,Gdiplus::Point const &);
		static long convertPixelFormat(Gdiplus::Bitmap * const,int const &,Gdiplus::Bitmap * * const);
		static long makeBitmap(SimpleVector<unsigned char> const &,int const &,Gdiplus::Bitmap * * const);
		static long setScreenTransform(Gdiplus::Graphics * const,Gdiplus::RectF const &,Gdiplus::RectF const &,bool);
		static unsigned char clamp(float const &);
	};

	class PriorityQueue<SWF::Movie::DepthRange>
	{
		static int compare(void const *,void const *);
	public:
		long push(SWF::Movie::DepthRange const &);
	};

	struct Resource
	{
		long open(HINSTANCE__ * const &,unsigned int const &,unsigned short const * const);
		virtual long getPosition(unsigned long * const);
		virtual long getSize(unsigned long * const);
		virtual long read(void *,unsigned long const &);
		virtual long setPosition(unsigned long const &);
		virtual long skip(unsigned long const &);
		virtual long write(void const *,unsigned long const &);
	};

	struct SimpleVector<Gdiplus::ColorMatrix const *>
	{
		long resize(unsigned int const &,Gdiplus::ColorMatrix const * const &);
	};

	struct SimpleVector<Gdiplus::Matrix const *>
	{
		long resize(unsigned int const &,Gdiplus::Matrix const * const &);
	};

	struct SimpleVector<Gdiplus::PointF>
	{
		long reserve(unsigned int const &);
	};

	struct SimpleVector<SWF::Definition *>
	{
		long resize(unsigned int const &,SWF::Definition * const &);
	};

	struct SimpleVector<unsigned char>
	{
		long reserve(unsigned int const &);
		long resize(unsigned int const &,unsigned char const &);
	};

	struct SimpleVector<unsigned int>
	{
		long resize(unsigned int const &,unsigned int const &);
	};

	struct Stream
	{
		long getIsEOF(bool * const);
		long read<Gdiplus::Brush *>(Gdiplus::Brush * * const);
		long read<Gdiplus::Color>(Gdiplus::Color * const);
		long read<Gdiplus::GraphicsPath *>(Gdiplus::GraphicsPath * * const);
		long read<Gdiplus::Image *>(Gdiplus::Image * * const);
		long read<Gdiplus::Matrix *>(Gdiplus::Matrix * * const);
		long read<Gdiplus::Pen *>(Gdiplus::Pen * * const);
		long read<Gdiplus::Point>(Gdiplus::Point * const);
		long read<Gdiplus::PointF>(Gdiplus::PointF * const);
		long read<Gdiplus::Rect>(Gdiplus::Rect * const);
		long read<Gdiplus::Size>(Gdiplus::Size * const);
		long read<float>(float * const);
		long read<int>(int * const);
		long read<unsigned char>(unsigned char * const);
		long read<unsigned int>(unsigned int * const);
		long read<unsigned short>(unsigned short * const);
		long write<Gdiplus::Brush>(Gdiplus::Brush const &);
		long write<Gdiplus::Color>(Gdiplus::Color const &);
		long write<Gdiplus::ColorMatrix>(Gdiplus::ColorMatrix const &);
		long write<Gdiplus::GraphicsPath>(Gdiplus::GraphicsPath const &);
		long write<Gdiplus::Image>(Gdiplus::Image &);
		long write<bool>(bool const &);
		long write<float>(float const &);
		long write<int>(int const &);
		long write<unsigned char>(unsigned char const &);
		long write<unsigned int>(unsigned int const &);
		long write<unsigned short>(unsigned short const &);
	};

	struct Transform
	{
		Transform(Gdiplus::Graphics * const,Gdiplus::Matrix const * const);
		~Transform();
	};

	long readElements<Gdiplus::Brush *>(Library::Stream &,Library::SimpleVector<Gdiplus::Brush *> &);
	long readElements<Gdiplus::GraphicsPath *>(Library::Stream &,Library::SimpleVector<Gdiplus::GraphicsPath *> &);
	long readElements<SWF::Shape::Action>(Library::Stream &,Library::SimpleVector<SWF::Shape::Action> &);
	long readInterpolationColors<Gdiplus::LinearGradientBrush>(Library::Stream &,Gdiplus::LinearGradientBrush * const);
	long readInterpolationColors<Gdiplus::PathGradientBrush>(Library::Stream &,Gdiplus::PathGradientBrush * const);
	long readTransform<Gdiplus::LinearGradientBrush>(Library::Stream &,Gdiplus::LinearGradientBrush * const);
	long readTransform<Gdiplus::PathGradientBrush>(Library::Stream &,Gdiplus::PathGradientBrush * const);
	long readTransform<Gdiplus::TextureBrush>(Library::Stream &,Gdiplus::TextureBrush * const);
	long writeElements<SWF::Shape::Action>(Library::Stream &,Library::SimpleVector<SWF::Shape::Action> const &);
	long writeInterpolationColors<Gdiplus::LinearGradientBrush const >(Library::Stream &,Gdiplus::LinearGradientBrush const * const);
	long writeInterpolationColors<Gdiplus::PathGradientBrush const >(Library::Stream &,Gdiplus::PathGradientBrush const * const);
	long writePointers<Gdiplus::Brush>(Library::Stream &,Library::SimpleVector<Gdiplus::Brush *> const &);
	long writePointers<Gdiplus::GraphicsPath>(Library::Stream &,Library::SimpleVector<Gdiplus::GraphicsPath *> const &);
	long writePointers<Gdiplus::Pen>(Library::Stream &,Library::SimpleVector<Gdiplus::Pen *> const &);
	long writeTransform<Gdiplus::LinearGradientBrush const >(Library::Stream &,Gdiplus::LinearGradientBrush const * const);
	long writeTransform<Gdiplus::PathGradientBrush const >(Library::Stream &,Gdiplus::PathGradientBrush const * const);
	long writeTransform<Gdiplus::TextureBrush const >(Library::Stream &,Gdiplus::TextureBrush const * const);
	void safeDelete<SWF::Tag>(SWF::Tag * &);
};

namespace Microsoft
{
	namespace WRL
	{
		class ComPtr<DirectUI::CBinaryXmlReader>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<DirectUI::CBinaryXmlReader>();
		};

		class ComPtr<DirectUI::Impl::CParserCache>
		{
		protected:
			unsigned long InternalRelease();
		};

		namespace Details
		{
			struct MakeAllocator<DirectUI::CBinaryXmlReader>
			{
				~MakeAllocator<DirectUI::CBinaryXmlReader>();
			};

			struct ModuleBase
			{
				static ModuleBase * module_;
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,DirectUI::IDuiParserCache>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ITouchTooltip>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IXmlReader,DirectUI::IDuiBinaryReader>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			long MakeAndInitialize<DirectUI::CBinaryXmlReader,DirectUI::CBinaryXmlReader,unsigned char const * &,unsigned __int64 &>(DirectUI::CBinaryXmlReader * *,unsigned char const * &,unsigned __int64 &);
		};

		namespace Wrappers
		{
			class HandleT<DirectUI::StyleSheetCache::HANDLENullTraitsIgnoreCloseFailure>
			{
			protected:
				virtual bool InternalClose();
			public:
				void Close();
			};

			struct Semaphore
			{
				static Details::SyncLockWithStatusT<HandleTraits::SemaphoreTraits> Lock(void *,unsigned long);
			};

		};

	};

};

class PVLBehaviorFactory
{
protected:
	static _GUID const * * s_rgpIID;
public:
	virtual long CreateBehavior(unsigned short const *,IDuiBehavior * *);
};

namespace SWF
{
	struct Bits
	{
		long extract(unsigned __int64 const &,unsigned int * const);
		long extractFlag(bool * const);
		long extractSigned(unsigned __int64 const &,int * const);
		long flush();
		static int extendSign(unsigned int const &,unsigned __int64 const &);
	};

	struct ColorTransformGradientBrush<Gdiplus::LinearGradientBrush>
	{
		virtual ~ColorTransformGradientBrush<Gdiplus::LinearGradientBrush>();
	};

	struct ColorTransformGradientBrush<Gdiplus::PathGradientBrush>
	{
		virtual ~ColorTransformGradientBrush<Gdiplus::PathGradientBrush>();
	};

	struct ColorTransformPen
	{
		ColorTransformPen(Gdiplus::Pen * const,Gdiplus::ColorMatrix const * const);
	};

	struct ColorTransformSolidBrush
	{
		ColorTransformSolidBrush(Gdiplus::SolidBrush * const,Gdiplus::ColorMatrix const * const);
		virtual ~ColorTransformSolidBrush();
	};

	class DefineBitmap
	{
	protected:
		long assignBitmap(Gdiplus::Bitmap * const,int const &);
	public:
		virtual long render(Gdiplus::Graphics * const,Gdiplus::ColorMatrix const * const,bool);
	};

	struct DefineBits
	{
		virtual Tag::TagID tagID();
		virtual long parse(SWF const &,Library::Stream &,unsigned int const &);
	};

	struct DefineBitsJPEG2
	{
		virtual Tag::TagID tagID();
		virtual long parse(SWF const &,Library::Stream &,unsigned int const &);
	};

	struct DefineBitsJPEG3
	{
		virtual Tag::TagID tagID();
		virtual long parse(SWF const &,Library::Stream &,unsigned int const &);
	};

	struct DefineBitsLossless2
	{
		virtual Tag::TagID tagID();
		virtual long parse(SWF const &,Library::Stream &,unsigned int const &);
	};

	struct DefineFont
	{
		virtual Tag::TagID tagID();
		virtual long mask(Gdiplus::Graphics * const,Gdiplus::CombineMode const &);
		virtual long parse(SWF const &,Library::Stream &,unsigned int const &);
		virtual long render(Gdiplus::Graphics * const,Gdiplus::ColorMatrix const * const,bool);
	};

	class DefineJPEG
	{
	protected:
		long readBitmap(Library::Stream &,int const &,unsigned int const &);
		long readBitmap(Library::Stream &,int const &,unsigned int const &,Library::SimpleVector<unsigned char> &,unsigned int const &);
	};

	class DefineShape
	{
	protected:
		DefineShape();
	public:
		virtual long mask(Gdiplus::Graphics * const,Gdiplus::CombineMode const &);
		virtual long parse(SWF const &,Library::Stream &,unsigned int const &);
		virtual long read(Library::Stream &);
		virtual long render(Gdiplus::Graphics * const,Gdiplus::ColorMatrix const * const,bool);
		virtual long write(Library::Stream &);
		virtual ~DefineShape();
	};

	struct DefineShape1
	{
		virtual Tag::TagID tagID();
	};

	struct DefineShape2
	{
		virtual Tag::TagID tagID();
	};

	struct DefineShape3
	{
		DefineShape3();
		virtual Tag::TagID tagID();
	};

	struct DefineSprite
	{
		virtual Tag::TagID tagID();
		virtual long parse(SWF const &,Library::Stream &,unsigned int const &);
		virtual long read(Library::Stream &);
		virtual long render(Gdiplus::Graphics * const,Gdiplus::ColorMatrix const * const,bool);
		virtual long write(Library::Stream &);
		virtual ~DefineSprite();
	};

	struct DefineText
	{
		DefineText();
		virtual Tag::TagID tagID();
		virtual long mask(Gdiplus::Graphics * const,Gdiplus::CombineMode const &);
		virtual long parse(SWF const &,Library::Stream &,unsigned int const &);
		virtual long render(Gdiplus::Graphics * const,Gdiplus::ColorMatrix const * const,bool);
	};

	struct Definition
	{
		virtual long read(Library::Stream &);
		virtual long write(Library::Stream &);
	};

	struct DoAction
	{
		virtual Tag::TagID tagID();
		virtual bool execute(SWF &,Movie &);
		virtual long parse(SWF const &,Library::Stream &,unsigned int const &);
		virtual long read(Library::Stream &);
		virtual long write(Library::Stream &);
	};

	struct Fluster
	{
		static Fluster * makeInstance();
		static void releaseInstance(Fluster * &);
	};

	struct JPEGTables
	{
		virtual Tag::TagID tagID();
		virtual long parse(SWF const &,Library::Stream &,unsigned int const &);
	};

	class Movie
	{
		long renderDepth(Gdiplus::Graphics * const,Gdiplus::ColorMatrix const * const,Library::PriorityQueue<Movie::DepthRange> &,unsigned short const &,bool);
	protected:
		long addTag(Tag * const);
		long read(Library::Stream &);
		long write(Library::Stream &);
	public:
		bool advanceFrame(SWF &,bool const &,bool);
		long prepareDisplayList();
		long render(Gdiplus::Graphics * const,Gdiplus::ColorMatrix const * const,bool);
		void resetDisplayList();
		~Movie();
	};

	struct PlaceObject2
	{
		virtual Tag::TagID tagID();
		virtual bool execute(SWF &,Movie &);
		virtual long parse(SWF const &,Library::Stream &,unsigned int const &);
		virtual long read(Library::Stream &);
		virtual long write(Library::Stream &);
		virtual unsigned short findRequiredDepth();
	};

	struct RemoveObject2
	{
		virtual Tag::TagID tagID();
		virtual bool execute(SWF &,Movie &);
		virtual long parse(SWF const &,Library::Stream &,unsigned int const &);
		virtual long read(Library::Stream &);
		virtual long write(Library::Stream &);
	};

	class SWF
	{
		long addTag(Tag * const);
		long parseBody(Library::Stream &,unsigned long const &);
		long parseCompressed(Library::Stream &,unsigned long const &);
		long parseHeader(Library::Stream &);
		long read(Library::Stream &);
		long write(Library::Stream &);
	public:
		JPEGTables const * findJPEGTable();
		SWF();
		virtual Gdiplus::Rect size();
		virtual bool advanceFrame(bool);
		virtual long load(HINSTANCE__ * const &,unsigned int const &);
		virtual long measureLength(int const &,int const &,unsigned long * const,int * const);
		virtual long parse(unsigned short const * const,bool);
		virtual long read(unsigned short const * const);
		virtual long render(Gdiplus::Graphics * const,Gdiplus::Rect const &,bool,bool);
		virtual long write(unsigned short const * const);
		virtual unsigned long millisecondsPerFrame();
		virtual void restart();
		virtual void setIsPaused(bool const &);
		virtual ~SWF();
	};

	struct SetBackgroundColor
	{
		virtual Tag::TagID tagID();
		virtual bool execute(SWF &,Movie &);
		virtual long parse(SWF const &,Library::Stream &,unsigned int const &);
		virtual long read(Library::Stream &);
		virtual long write(Library::Stream &);
	};

	class Shape
	{
	protected:
		bool AdjustBrushTransform(Gdiplus::Graphics * const,Gdiplus::PathGradientBrush *,Gdiplus::Matrix &);
		long CreatePath(Shape::LineSegment &);
		long ReadCurve(Bits &,unsigned int,tagPOINT *,tagPOINT *);
		long ReadLine(Bits &,unsigned int,tagPOINT *);
		long ReadStateChange(Bits &,unsigned int const &,tagPOINT *,unsigned int * const,unsigned int * const,int *,int *,int *);
		virtual long readNewStyle();
		void AddLineSegment(Library::SimpleVector<Shape::LineSegment> &,tagPOINT const &,tagPOINT const *,tagPOINT const &,int,int,int);
		void ConvertToPaths(Library::SimpleVector<Shape::LineSegment> &);
		void PrintActionDetails();
		void PrintBrushDetails();
		void PrintPathDetails();
	public:
		long mask(Gdiplus::Graphics * const,Gdiplus::CombineMode const &);
		long parse(Library::Stream &);
		long read(Library::Stream &);
		long render(Gdiplus::Graphics * const,Gdiplus::ColorMatrix const * const,bool);
		long write(Library::Stream &);
		virtual ~Shape();
	};

	struct ShapeWithStyle
	{
		long parse(Library::Stream &,SWF const &,bool const &,bool const &);
		virtual long readNewStyle();
	};

	struct ShowFrame
	{
		virtual Tag::TagID tagID();
		virtual bool execute(SWF &,Movie &);
		virtual long parse(SWF const &,Library::Stream &,unsigned int const &);
	};

	struct Tag
	{
		virtual long parse(SWF const &,Library::Stream &,unsigned int const &);
		virtual long read(Library::Stream &);
		virtual long write(Library::Stream &);
		virtual unsigned short findRequiredDepth();
	};

	class TagFactory
	{
		static long makeTag(SWF const &,Library::Stream &,Tag::TagID const &,unsigned int const &,Tag * * const);
	public:
		static long makeTag(SWF const &,Library::Stream &,Tag * * const);
		static long write(Library::Stream &,Tag const * const,bool * const);
	};

	class Types
	{
		static long makeGradientBrush(Library::Stream &,bool const &,SWF const &,Types::BrushType const &,Gdiplus::Brush * * const);
		static long makeSolidBrush(Library::Stream &,bool const &,SWF const &,Gdiplus::Brush * * const);
		static long makeTextureBrush(Library::Stream &,bool const &,SWF const &,Types::BrushType const &,Gdiplus::Brush * * const);
		static long readComponents<Fixed<8,8> >(Bits &,unsigned int const &,bool const &,float * const,float * const,float * const,float * const);
		static long readComponents<int>(Bits &,unsigned int const &,bool const &,float * const,float * const,float * const,float * const);
	public:
		static Gdiplus::Color const INVALID_COLOR;
		static Gdiplus::ColorMatrix makeColorMatrix();
		static long makeBrush(Library::Stream &,bool const &,SWF const &,Gdiplus::Brush * * const);
		static long makeBrushes(Library::Stream &,Library::SimpleVector<Gdiplus::Brush *> &,bool const &,bool const &,SWF const &);
		static long makeColorRGB(Library::Stream &,Gdiplus::Color * const);
		static long makeColorRGBA(Library::Stream &,Gdiplus::Color * const);
		static long makeColorTransform(Library::Stream &,bool const &,Gdiplus::ColorMatrix * const);
		static long makeInvalidBrush(Gdiplus::Brush * * const);
		static long makeLinearGradientBrush(Gdiplus::LinearGradientBrush * * const);
		static long makeMatrix(Library::Stream &,Gdiplus::Matrix * const);
		static long makePathGradientBrush(Gdiplus::PathGradientBrush * * const);
		static long makePen(Library::Stream &,bool const &,Gdiplus::Pen * * const);
		static long makePens(Library::Stream &,Library::SimpleVector<Gdiplus::Pen *> &,bool const &,bool const &);
		static long makeRECT(Library::Stream &,Gdiplus::Rect * const);
		static long readLength(Library::Stream &,bool const &,unsigned short * const);
		static unsigned int const INVALID_DEPTH;
	};

	struct Unknown
	{
		virtual Tag::TagID tagID();
		virtual long parse(SWF const &,Library::Stream &,unsigned int const &);
	};

	bool g_fVerbose;
	long ReadCheckElements<Gdiplus::Brush *>(Library::Stream &,Library::SimpleVector<Gdiplus::Brush *> &);
	long ReadCheckElements<Gdiplus::GraphicsPath *>(Library::Stream &,Library::SimpleVector<Gdiplus::GraphicsPath *> &);
	long make(SWF::Tag::TagID const &,SWF::Tag * * const);
};

class ScrubBehavior
{
	void _OnMouseInput(DirectUI::Element *,DirectUI::MouseEvent *);
	void _OnPointerInput(DirectUI::Element *,DirectUI::PointerEvent *);
	void _SetSelectedItem(DirectUI::Element *,DirectUI::Element *);
protected:
	static _GUID const * * s_rgpIID;
public:
	static long Create(IDuiBehavior * *);
	virtual long GetCallbackFilters(DuiBehaviorFilters::Flags *);
	virtual long Init(DirectUI::Value *);
	virtual long OnAttach(DirectUI::Element *);
	virtual long OnDetach(DirectUI::Element *);
	virtual long OnHosted(DirectUI::Element *,DirectUI::Element *);
	virtual long OnInput(DirectUI::Element *,DirectUI::InputEvent *);
	virtual long OnPropertyChanged(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
};

struct SmObjectT<AcceleratorBehavior,IDuiBehavior>
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct SmObjectT<AnimationTrap,IDuiBehavior>
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct SmObjectT<DirectUI::ContentLayoutInvalidateBehavior,IDuiBehavior>
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct SmObjectT<DirectUI::ContextMenuBehavior,IDuiBehavior>
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct SmObjectT<DirectUI::DUIBehaviorFactory,IDuiBehaviorFactory>
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct SmObjectT<DirectUI::ExpandCollapseBehavior,IDuiBehavior>
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct SmObjectT<DirectUI::LayoutInvalidateBehavior,IDuiBehavior>
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct SmObjectT<DirectUI::MaxSizeBehavior,IDuiBehavior>
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct SmObjectT<DirectUI::PVLAnimationTriggers,DirectUI::IDuiAnimationTriggers>
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct SmObjectT<DirectUI::PVLLauncherAnimationTriggers,DirectUI::IDuiLauncherAnimationTriggers>
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct SmObjectT<DirectUI::TSVEnableVirtualizationBehavior,IDuiBehavior>
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct SmObjectT<DirectUI::TSVVirtualizedContainerBehavior,IDuiBehavior>
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct SmObjectT<DirectUI::TouchHWNDElement::TooltipEventSink,ITouchTooltipEventSink>
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct SmObjectT<DirectUI::TouchTooltipProxy,IRawElementProviderSimple>
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct SmObjectT<EnsureLayered,IDuiBehavior>
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct SmObjectT<ImplicitAnimation,IDuiBehavior>
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct SmObjectT<PVLBehaviorFactory,IDuiBehaviorFactory>
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct SmObjectT<ScrubBehavior,IDuiBehavior>
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct UID
{
	UID(UID (*)());
};

namespace Windows
{
	namespace UI
	{
		namespace Immersive
		{
			Immersive::CConstraint ConstraintFromWindow(HWND__ *);
			bool CanPositionRelativeOnSide(Immersive::CConstraint const &,tagRECT const &,FLYOUT_PLACEMENT,Immersive::CConstraint const &);
			tagRECT HorizontallyCenterRect(Immersive::CConstraint const &,tagRECT const &);
			tagRECT MoveNearRect(tagRECT const &,tagRECT const &,FLYOUT_PLACEMENT);
			tagRECT PositionRelativeOnSide(Immersive::CConstraint const &,tagRECT const &,FLYOUT_PLACEMENT,Immersive::CConstraint const &);
			tagRECT QueryRelativePosition(Immersive::CConstraint const &,tagSIZE const &,tagRECT const &,FLYOUT_PLACEMENT,FLYOUT_PLACEMENT *);
			tagRECT ShiftRectIntoContainer(Immersive::CConstraint const &,tagRECT const &);
			tagRECT VerticallyCenterRect(Immersive::CConstraint const &,tagRECT const &);
		};

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
		ResultException(FailureInfo const &);
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
		void Register(_TlgProvider_t const * const);
		void ReportTelemetryFailure(FailureInfo const &);
		void ReportTraceLoggingFailure(FailureInfo const &);
	};

	namespace details
	{
		struct DestroyThreadPoolTimer<0>
		{
			static void Destroy(_TP_TIMER *);
		};

		struct FeatureLogging
		{
			static _TlgProvider_t const * Provider();
		};

		class FeatureStateManager
		{
			bool EnsureStateData();
			void EnsureSubscribedToProcessWideUsageFlushUnderLock();
		public:
			FeatureStateManager();
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
			void _FailFast_Unexpected(void *,unsigned int,char const *);
		};

		class shared_buffer
		{
			void assign(long *,unsigned __int64);
		public:
			bool create(void const *,unsigned __int64);
			void reset();
		};

		struct static_lazy<DuiTelemetry>
		{
			DuiTelemetry * get(void (*)());
		};

		struct static_lazy<FeatureLogging>
		{
			FeatureLogging * get(void (*)());
		};

		bool GetModuleInformation(void *,unsigned int *,char *,unsigned __int64);
		bool IsDebuggerPresent();
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
		long ReportFailure_GetLastErrorHr(void *,unsigned int,char const *,char const *,char const *,void *,FailureType);
		long StringCchPrintfA(char *,unsigned __int64,char const *,...);
		shutdown_aware_object<details::FeatureStateManager> g_featureStateManager;
		unsigned __int64 ResultStringSize(char const *);
		unsigned __int64 ResultStringSize(unsigned short const *);
		unsigned char (* g_pfnRtlDllShutdownInProgress)();
		unsigned char * WriteResultString<char const *>(unsigned char *,unsigned char *,char const *,char const * *);
		unsigned char * WriteResultString<unsigned short const *>(unsigned char *,unsigned char *,unsigned short const *,unsigned short const * *);
		unsigned char RtlDllShutdownInProgress();
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
		void OriginateError(FailureType,long);
		void ReleaseMutex(void *);
		void ReportFailure(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long,unsigned short const *,details::ReportFailureOptions);
		void ReportFailure_Hr(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long);
		void Rethrow();
		void ThrowResultExceptionInternal(FailureInfo const &);
		void UnsubscribeProcessWideUsageFlush(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
		void WilApiImpl_RecordFeatureUsage(unsigned int,unsigned int,unsigned int,char const *);
		void WilApiImpl_SubscribeFeatureStateChangeNotification(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
		void WilApiImpl_UnsubscribeFeatureStateChangeNotification(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
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
			void SetLastError(FailureInfo const &);
		};

		struct ThreadLocalFailureInfo
		{
			void Set(FailureInfo const &,unsigned int);
		};

		struct ThreadLocalStorage<details::ThreadFailureCallbackHolder *>
		{
			~ThreadLocalStorage<details::ThreadFailureCallbackHolder *>();
		};

		struct UsageIndexProperty
		{
			bool AddToCount(unsigned int);
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
		last_error_context();
		~last_error_context();
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
	long GetFailureLogString(unsigned short *,unsigned __int64,wil::FailureInfo const &);
	void assign_to_opt_param<bool>(bool *,bool);
};

namespace wistd
{
	class _Func_class<bool,void *,unsigned __int64,void *,unsigned __int64,unsigned int,_Nil,_Nil>
	{
	protected:
		void _Tidy();
	};

	struct function<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>
	{
		~function<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>();
	};

	struct unique_ptr<void,wil::process_heap_deleter>
	{
		void reset(void *);
	};

	struct unique_ptr<wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>,wil::process_heap_deleter>
	{
		~unique_ptr<wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>,wil::process_heap_deleter>();
	};

	void _Xbad_function_call();
};

DEVICE_SCALE_FACTOR DUIGetScaleFactorForMonitor(HMONITOR__ *);
DirectUI::Button * element_cast<DirectUI::Button>(DirectUI::Element *);
DirectUI::Element * ComputeHorizontalPortalParentChange(int *,DirectUI::PVLAnimationRepositionEvent *,DirectUI::PVLAnimationRepositionEvent *,DirectUI::PVLAnimationCustomReflowHintEvent *);
DirectUI::Element * ComputeVerticalPortalParentChange(int *,DirectUI::PVLAnimationRepositionEvent *,DirectUI::PVLAnimationRepositionEvent *,DirectUI::PVLAnimationCustomReflowHintEvent *);
DirectUI::Element * GetFirstKeyboardActiveChildFromPoint(DirectUI::Element *,tagPOINT *);
DirectUI::HWNDElement * element_cast<DirectUI::HWNDElement>(DirectUI::Element *);
DirectUI::ItemList * element_cast<DirectUI::ItemList>(DirectUI::Element *);
DirectUI::ScrollBar * element_cast<DirectUI::ScrollBar>(DirectUI::Element *);
DirectUI::Thumb * element_cast<DirectUI::Thumb>(DirectUI::Element *);
DirectUI::TouchButton * element_cast<DirectUI::TouchButton>(DirectUI::Element *);
DirectUI::TouchEdit2 * element_cast<DirectUI::TouchEdit2>(DirectUI::Element *);
DirectUI::TouchEditBase * element_cast<DirectUI::TouchEditBase>(DirectUI::Element *);
DirectUI::TouchHWNDElement * element_cast<DirectUI::TouchHWNDElement>(DirectUI::Element *);
DirectUI::TouchScrollViewer * element_cast<DirectUI::TouchScrollViewer>(DirectUI::Element *);
DirectUI::TouchSelectItem * element_cast<DirectUI::TouchSelectItem>(DirectUI::Element *);
DirectUI::TouchTooltipContainer * element_cast<DirectUI::TouchTooltipContainer>(DirectUI::Element *);
HINSTANCE__ * g_wil_details_ntdllModuleHandle;
HINSTANCE__ * wil_details_GetNtDllModuleHandle();
WICBitmapAlphaChannelOption DPIToWICAlphaOption(DPI_ALPHA_OPTION);
bool BOOLIFY<unsigned long>(unsigned long const &);
bool CallingProcessIsDpiAware();
bool FindShortcutRecursive(unsigned short,DirectUI::Element *,DirectUI::Element * *,bool *,bool *);
bool IsIHMRunningAsUserSystem();
bool IsIHMRunningInLogin();
bool StartsOrStopsInWindow(DirectUI::Element *,GTRANS_DESC *);
bool operator==(UID (*const &)(),UID const &);
bool operator==(UID const &,UID (*const &)());
int InlineIsEqualGUID(_GUID const &,_GUID const &);
int IsSubclassOf<DirectUI::TouchButton>(DirectUI::Element *);
int IsSubclassOf<DirectUI::TouchScrollViewer>(DirectUI::Element *);
int g_wil_details_preventOnDemandStagingConfigReads;
long (* g_wil_details_pfnNtQueryWnfStateData)(__WIL__WNF_STATE_NAME const *,__WIL__WNF_TYPE_ID const *,void const *,unsigned long *,void *,unsigned long *);
long (* g_wil_details_pfnNtUpdateWnfStateData)(__WIL__WNF_STATE_NAME const *,void const *,unsigned long,__WIL__WNF_TYPE_ID const *,void const *,unsigned long,unsigned long);
long (* g_wil_details_pfnRtlSubscribeWnfStateChangeNotification)(__WIL__WNF_USER_SUBSCRIPTION * *,__WIL__WNF_STATE_NAME,unsigned long,long (*)(__WIL__WNF_STATE_NAME,unsigned long,__WIL__WNF_TYPE_ID *,void *,void const *,unsigned long),void *,__WIL__WNF_TYPE_ID *,unsigned long,unsigned long);
long (* g_wil_details_pfnRtlUnsubscribeWnfNotificationWaitForCompletion)(__WIL__WNF_USER_SUBSCRIPTION *);
long AddAnimationToStoryboard(int,int,int,DirectUI::Element *,DirectUI::PVLAnimationNotifyEvent *,bool,unsigned int,int *,DirectUI::Element *,bool,_POINTFLOAT *,_POINTFLOAT *);
long CalculateStaggerDelay(void *,int,int,int,float *,int *);
long CollectAllAccessibleChildrenCB(DirectUI::Element *,void *);
long ConvertImageToIndexed(IWICImagingFactory *,IWICBitmapSource *,int,int,WICBitmapDitherType,WICBitmapPaletteType,IWICPalette * *,IWICBitmapSource * *);
long CreateDecoderFromResource(IWICImagingFactory *,unsigned short const *,HINSTANCE__ *,int,IWICBitmapDecoder * *);
long CreateHBITMAP(HDC__ *,unsigned short,tagSIZE const *,IWICPalette *,int,tagRGBQUAD,void * *,HBITMAP__ * *);
long DuiCreateObject(_GUID const &,_GUID const &,void * *);
long ForAllAccessibleChildren(DirectUI::Element *,long (*)(DirectUI::Element *,void *),void *);
long GetAccessibleChildByIndexCB(DirectUI::Element *,void *);
long GetAccessibleChildCountCB(DirectUI::Element *,void *);
long GetFirstAccessibleChildCB(DirectUI::Element *,void *);
long GetLastAccessibleChildCB(DirectUI::Element *,void *);
long GetNextAccessibleChildCB(DirectUI::Element *,void *);
long GetPixelFormatInfo(IWICBitmapSource *,tagSIZE *,int *,unsigned long *);
long GetPrevAccessibleChildCB(DirectUI::Element *,void *);
long GetTransparentColor(IWICImagingFactory *,IWICBitmapSource *,int *,tagRGBQUAD *);
long HandleAdd(int,UID,DirectUI::Event *,DirectUI::Element * *,DirectUI::PVLAnimationNotifyEvent * *);
long HandleBadgeUpdate(int,UID,DirectUI::Event *,DirectUI::Element * *,DirectUI::PVLAnimationNotifyEvent * *);
long HandleCompletedStoryboard(int,int,DirectUI::Event *,int,DirectUI::Element *,bool,bool,bool,bool);
long HandleContentTransition(int,UID,DirectUI::Event *,DirectUI::Element * *,DirectUI::PVLAnimationNotifyEvent * *);
long HandleCrossfade(int,UID,DirectUI::Event *,DirectUI::Element * *,DirectUI::PVLAnimationNotifyEvent * *);
long HandleDelete(int,UID,DirectUI::Event *,DirectUI::Element * *,DirectUI::PVLAnimationNotifyEvent * *);
long HandleDrag(int,UID,DirectUI::Event *,DirectUI::Element * *,DirectUI::PVLAnimationNotifyEvent * *);
long HandleDrop(int,UID,DirectUI::Event *,DirectUI::Element * *,DirectUI::PVLAnimationNotifyEvent * *);
long HandleEntrance(int,UID,DirectUI::Event *,DirectUI::Element * *,DirectUI::PVLAnimationNotifyEvent * *);
long HandleExpandCollapse(int,UID,DirectUI::Event *,DirectUI::Element * *,DirectUI::PVLAnimationNotifyEvent * *);
long HandleFade(int,UID,DirectUI::Event *,DirectUI::Element * *,DirectUI::PVLAnimationNotifyEvent * *);
long HandleLaunch(int,UID,DirectUI::Event *,DirectUI::Element * *,DirectUI::PVLAnimationNotifyEvent * *);
long HandleLauncher(int,UID,DirectUI::Event *,DirectUI::Element * *,DirectUI::PVLAnimationNotifyEvent * *);
long HandleManualStoryboard(DirectUI::Event *,int *,int *,DirectUI::Element * *,DirectUI::PVLAnimationNotifyEvent * *);
long HandleMove(int,UID,DirectUI::Event *,DirectUI::Element * *,DirectUI::PVLAnimationNotifyEvent * *);
long HandleNudge(int,UID,DirectUI::Event *,DirectUI::Element * *,DirectUI::PVLAnimationNotifyEvent * *);
long HandleParentChange(int,UID,DirectUI::Event *,DirectUI::Element * *,DirectUI::PVLAnimationNotifyEvent * *);
long HandlePop(int,UID,DirectUI::Event *,DirectUI::Element * *,DirectUI::PVLAnimationNotifyEvent * *);
long HandleReflow(int,UID,DirectUI::Event *,DirectUI::Element * *,DirectUI::PVLAnimationNotifyEvent * *);
long HandleReposition(int,UID,DirectUI::Event *,DirectUI::Element * *,DirectUI::PVLAnimationNotifyEvent * *,int,bool,DirectUI::Element *);
long HandleResize(int,UID,DirectUI::Event *,DirectUI::Element * *,DirectUI::PVLAnimationNotifyEvent * *);
long HandleRevealHide(int,UID,DirectUI::Event *,DirectUI::Element * *,DirectUI::PVLAnimationNotifyEvent * *);
long HandleScale(int,UID,DirectUI::Event *,DirectUI::Element * *,DirectUI::PVLAnimationNotifyEvent * *);
long HandleSlide(int,UID,DirectUI::Event *,DirectUI::Element * *,DirectUI::PVLAnimationNotifyEvent * *);
long HandleSwipe(int,UID,DirectUI::Event *,DirectUI::Element * *,DirectUI::PVLAnimationNotifyEvent * *);
long HandleTap(int,UID,DirectUI::Event *,DirectUI::Element * *,DirectUI::PVLAnimationNotifyEvent * *);
long HandleTileNotification(int,UID,DirectUI::Event *,DirectUI::Element * *,DirectUI::PVLAnimationNotifyEvent * *);
long ProcessStoredLocationPropChanges(int,bool,int *);
long ResultFromKnownLastError();
long RetrieveAndStoreTimingCurve(void *,unsigned long,GTRANS_DESC *);
long ScoreConsideredElement(tagRECT *,DirectUI::Element *,DirectUI::Element *,int);
long StoreTrans2DParams(TA_TRANSFORM_2D *,GTRANS_DESC *,float,DirectUI::PVLAnimationNotifyEvent *);
long StoreTrans3DParams(TA_TRANSFORM_3D *,GTRANS_DESC *,float,DirectUI::PVLAnimationNotifyEvent *);
long StoreTransClipParams(TA_TRANSFORM_CLIP *,GTRANS_DESC *,float,DirectUI::PVLAnimationNotifyEvent *);
long StoreTransOpacityParams(TA_TRANSFORM_OPACITY *,GTRANS_DESC *,float,DirectUI::PVLAnimationNotifyEvent *);
long StringCchCatW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchCopyA(char *,unsigned __int64,char const *);
long StringCchCopyExW(unsigned short *,unsigned __int64,unsigned short const *,unsigned short * *,unsigned __int64 *,unsigned long);
long StringCchCopyNW(unsigned short *,unsigned __int64,unsigned short const *,unsigned __int64);
long StringCchCopyW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchLengthW(unsigned short const *,unsigned __int64,unsigned __int64 *);
long StringCchPrintfA(char *,unsigned __int64,char const *,...);
long StringCchPrintfW(unsigned short *,unsigned __int64,unsigned short const *,...);
long StringCchVPrintfW(unsigned short *,unsigned __int64,unsigned short const *,char *);
long wil_details_NtQueryWnfStateData(__WIL__WNF_STATE_NAME const *,__WIL__WNF_TYPE_ID const *,void const *,unsigned long *,void *,unsigned long *);
long wil_details_NtUpdateWnfStateData(__WIL__WNF_STATE_NAME const *,void const *,unsigned long,__WIL__WNF_TYPE_ID const *,void const *,unsigned long,unsigned long);
long wil_details_RtlSubscribeWnfStateChangeNotification(__WIL__WNF_USER_SUBSCRIPTION * *,__WIL__WNF_STATE_NAME,unsigned long,long (*)(__WIL__WNF_STATE_NAME,unsigned long,__WIL__WNF_TYPE_ID *,void *,void const *,unsigned long),void *,__WIL__WNF_TYPE_ID *,unsigned long,unsigned long);
long wil_details_StagingConfig_FireNotification(wil_details_StagingConfig *,unsigned int,unsigned short);
long wil_details_StagingConfig_Load(wil_details_StagingConfig *,wil_FeatureStore,unsigned __int64,void *,int);
unsigned short OurCharUpperW(unsigned short);
void (* g_wil_details_internalRecordFeatureUsage)(unsigned int,unsigned int,unsigned int,char const *);
void (* g_wil_details_internalSubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
void (* g_wil_details_internalUnsubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
void (* g_wil_details_pfnFeatureLoggingHook)(unsigned int,FEATURE_LOGGED_TRAITS const *,FEATURE_ERROR const *,int,wil_ReportingKind const *,wil_VariantReportingKind const *,unsigned char,unsigned __int64);
void * FindRawResource(HINSTANCE__ *,unsigned short const *,unsigned short const *,unsigned short,unsigned long *);
void * GetTransform(unsigned long,DirectUI::PVLAnimationNotifyEvent *);
void * operator new(unsigned __int64);
void * operator new(unsigned __int64,std::nothrow_t const &);
void AbsolutelyPositionElement(DirectUI::Element *,bool);
void ChangeChildrenLayeredRefsIfHosted(DirectUI::Element *,LayerOperation);
void ChangeElementListLayeredRefs(DirectUI::DynamicArray<DirectUI::Element *,0> *,LayerOperation);
void ClearPositionAnimatingFlag(DirectUI::Element *);
void ComputeHorizontalPortal(int *,DirectUI::PVLAnimationRepositionEvent *,DirectUI::PVLAnimationRepositionEvent *);
void ComputeLinearParentChange(DirectUI::PVLAnimationRepositionEvent *,DirectUI::PVLAnimationCustomReflowHintEvent *);
void ComputeVerticalPortal(int *,DirectUI::PVLAnimationRepositionEvent *,DirectUI::PVLAnimationRepositionEvent *);
void CreateAndSendFakeInput<DirectUI::MouseClickEvent,DirectUI::MouseEvent>(DirectUI::MouseEvent const *,DirectUI::Element *,unsigned int,tagPOINT);
void CreateAndSendFakeInput<DirectUI::PointerEnterEvent,DirectUI::PointerEvent>(DirectUI::PointerEvent const *,DirectUI::Element *,unsigned int,tagPOINT);
void CreateAndSendFakeInput<DirectUI::PointerTapEvent,DirectUI::PointerEvent>(DirectUI::PointerEvent const *,DirectUI::Element *,unsigned int,tagPOINT);
void DumpDuiProperties(DirectUI::Element *);
void DumpDuiTree(DirectUI::Element *,int);
void EulerRotationToAxisRotation(GTRANS_VALUE *);
void HandleEarlyCompletion(DirectUI::Element *,int,DirectUI::PVLAnimationNotifyCompleteEvent *);
void IUnknown_SetPriv(IUnknown * *,IUnknown *);
void PopulatePointWithElementLocation(tagPOINT *,DirectUI::Element *);
void PushTransitionToFinal(DirectUI::Element *,TA_TRANSFORM *,DirectUI::PVLAnimationNotifyEvent *,_POINTFLOAT *);
void SafeDestroy<DirectUI::CaretElement>(DirectUI::CaretElement * *);
void SafeDestroy<DirectUI::DynamicArray<DirectUI::DynamicArray<DirectUI::SafeElementIndexPair *,0> *,0> >(DirectUI::DynamicArray<DirectUI::DynamicArray<DirectUI::SafeElementIndexPair *,0> *,0> * *);
void SafeDestroy<DirectUI::DynamicArray<DirectUI::Element *,0> >(DirectUI::DynamicArray<DirectUI::Element *,0> * *);
void SafeDestroy<DirectUI::DynamicArray<DirectUI::SafeElementIndexPair *,0> >(DirectUI::DynamicArray<DirectUI::SafeElementIndexPair *,0> * *);
void SafeDestroy<DirectUI::DynamicArray<tagPOINT,0> >(DirectUI::DynamicArray<tagPOINT,0> * *);
void SafeDestroy<DirectUI::Element>(DirectUI::Element * *);
void SafeDestroy<DirectUI::InternalRichText>(DirectUI::InternalRichText * *);
void SafeDestroy<DirectUI::RichText>(DirectUI::RichText * *);
void SafeDestroy<DirectUI::SimulatedAlphaRichText>(DirectUI::SimulatedAlphaRichText * *);
void SafeDestroy<DirectUI::TouchButton>(DirectUI::TouchButton * *);
void SafeDestroy<DirectUI::TouchScrollViewer>(DirectUI::TouchScrollViewer * *);
void SafeDestroy<DirectUI::TouchSelectItem>(DirectUI::TouchSelectItem * *);
void SafeDestroyDeep<DirectUI::DynamicArray<CSafeElementPtr<DirectUI::Element> *,0> >(DirectUI::DynamicArray<CSafeElementPtr<DirectUI::Element> *,0> * *);
void SafeDestroyDeep<DirectUI::DynamicArray<DirectUI::ClipRectWithElement *,0> >(DirectUI::DynamicArray<DirectUI::ClipRectWithElement *,0> * *);
void SafeDestroyDeep<DirectUI::DynamicArray<DirectUI::SafeElementIndexPair *,0> >(DirectUI::DynamicArray<DirectUI::SafeElementIndexPair *,0> * *);
void SafeRelease<CScaledResourceFactory>(CScaledResourceFactory * *);
void SafeRelease<DirectUI::CIHMCallback>(DirectUI::CIHMCallback * *);
void SafeRelease<DirectUI::IDuiBinaryReader>(DirectUI::IDuiBinaryReader * *);
void SafeRelease<DirectUI::IDuiParserCache>(DirectUI::IDuiParserCache * *);
void SafeRelease<DirectUI::RichTextCache>(DirectUI::RichTextCache * *);
void SafeRelease<DirectUI::Value>(DirectUI::Value * *);
void SafeRelease<IDCompositionAnimation>(IDCompositionAnimation * *);
void SafeRelease<IDCompositionDevice>(IDCompositionDevice * *);
void SafeRelease<IDWriteFontCollection>(IDWriteFontCollection * *);
void SafeRelease<IDWriteInlineObject>(IDWriteInlineObject * *);
void SafeRelease<IDWriteTextFormat>(IDWriteTextFormat * *);
void SafeRelease<IDWriteTextLayout>(IDWriteTextLayout * *);
void SafeRelease<IDirectManipulationCompositor>(IDirectManipulationCompositor * *);
void SafeRelease<IDirectManipulationContent>(IDirectManipulationContent * *);
void SafeRelease<IDirectManipulationFrameInfoProvider>(IDirectManipulationFrameInfoProvider * *);
void SafeRelease<IDirectManipulationManager>(IDirectManipulationManager * *);
void SafeRelease<IDirectManipulationViewport>(IDirectManipulationViewport * *);
void SafeRelease<IDuiBehavior>(IDuiBehavior * *);
void SafeRelease<IUnknown>(IUnknown * *);
void UpdateOpacityForAnimationsDisabled(HGADGET__ *,unsigned char,unsigned char);
void UpdateZOrderForFirstLevelOfLayeredGadgets(DirectUI::Element *,unsigned long);
void operator delete(void *);
void operator delete(void *,void *);
void wil_details_StagingConfig_Free(wil_details_StagingConfig *);
