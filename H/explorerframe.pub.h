namespace ATL
{
	struct CComBSTR
	{
		CComBSTR & operator=(unsigned short const *);
		bool LoadStringW(HINSTANCE__ *,unsigned int);
	};

	struct CComModule
	{
		long Init(_ATL_OBJMAP_ENTRY *,HINSTANCE__ *,_GUID const *);
	};

	struct CComPtr<CItemDevirtualizerInitialState>
	{
		~CComPtr<CItemDevirtualizerInitialState>();
	};

	struct CComPtr<IBindCtx>
	{
		~CComPtr<IBindCtx>();
	};

	struct CComPtr<IChildId>
	{
		~CComPtr<IChildId>();
	};

	struct CComPtr<ICollectionCache>
	{
		CComPtr<ICollectionCache>(ICollectionCache *);
		~CComPtr<ICollectionCache>();
	};

	struct CComPtr<ICondition>
	{
		~CComPtr<ICondition>();
	};

	struct CComPtr<IConnectionFactory>
	{
		~CComPtr<IConnectionFactory>();
	};

	struct CComPtr<IDataLayerVersion>
	{
		~CComPtr<IDataLayerVersion>();
	};

	struct CComPtr<IDispatch>
	{
		~CComPtr<IDispatch>();
	};

	struct CComPtr<IDrawPropertyControl>
	{
		~CComPtr<IDrawPropertyControl>();
	};

	struct CComPtr<IDropTarget>
	{
		~CComPtr<IDropTarget>();
	};

	struct CComPtr<IEnumExplorerCommand>
	{
		~CComPtr<IEnumExplorerCommand>();
	};

	struct CComPtr<IEnumObjects>
	{
		~CComPtr<IEnumObjects>();
	};

	struct CComPtr<IEventQueue>
	{
		~CComPtr<IEventQueue>();
	};

	struct CComPtr<IExplorerCommand>
	{
		~CComPtr<IExplorerCommand>();
	};

	struct CComPtr<IExplorerCommandWithBackgroundColor>
	{
		~CComPtr<IExplorerCommandWithBackgroundColor>();
	};

	struct CComPtr<IExplorerFrame>
	{
		~CComPtr<IExplorerFrame>();
	};

	struct CComPtr<IFilterCondition>
	{
		~CComPtr<IFilterCondition>();
	};

	struct CComPtr<IFilterView>
	{
		~CComPtr<IFilterView>();
	};

	struct CComPtr<IFirstPageResults>
	{
		~CComPtr<IFirstPageResults>();
	};

	struct CComPtr<IFocusManager>
	{
		void Release();
		~CComPtr<IFocusManager>();
	};

	struct CComPtr<IFolderTypeDescription>
	{
		~CComPtr<IFolderTypeDescription>();
	};

	struct CComPtr<IFolderView2>
	{
		~CComPtr<IFolderView2>();
	};

	struct CComPtr<IFolderView>
	{
		~CComPtr<IFolderView>();
	};

	struct CComPtr<IGhostingManager>
	{
		~CComPtr<IGhostingManager>();
	};

	struct CComPtr<IImageList>
	{
		~CComPtr<IImageList>();
	};

	struct CComPtr<IInplaceRename>
	{
		~CComPtr<IInplaceRename>();
	};

	struct CComPtr<IInputHandler>
	{
		~CComPtr<IInputHandler>();
	};

	struct CComPtr<IInputObject>
	{
		bool IsEqualObject(IUnknown *);
	};

	struct CComPtr<IInvocationLocation>
	{
		~CComPtr<IInvocationLocation>();
	};

	struct CComPtr<IItem>
	{
		CComPtr<IItem>(CComPtr<IItem> const &);
		CComPtr<IItem>(IItem *);
		~CComPtr<IItem>();
	};

	struct CComPtr<IItemActionsManager>
	{
		~CComPtr<IItemActionsManager>();
	};

	struct CComPtr<IItemCollection>
	{
		CComPtr<IItemCollection>(CComPtr<IItemCollection> const &);
		CComPtr<IItemCollection>(IItemCollection *);
		void Release();
		~CComPtr<IItemCollection>();
	};

	struct CComPtr<IItemDevirtualizerPriv>
	{
		~CComPtr<IItemDevirtualizerPriv>();
	};

	struct CComPtr<IItemsViewItemObjectCollection>
	{
		~CComPtr<IItemsViewItemObjectCollection>();
	};

	struct CComPtr<IItemsViewSpyClient>
	{
		~CComPtr<IItemsViewSpyClient>();
	};

	struct CComPtr<ILegacyExplorerBars>
	{
		~CComPtr<ILegacyExplorerBars>();
	};

	struct CComPtr<IListControlHost>
	{
		~CComPtr<IListControlHost>();
	};

	struct CComPtr<IMruDataList>
	{
		~CComPtr<IMruDataList>();
	};

	struct CComPtr<INscTreeTasksCallback>
	{
		~CComPtr<INscTreeTasksCallback>();
	};

	struct CComPtr<IObjectArray>
	{
		void Release();
		~CComPtr<IObjectArray>();
	};

	struct CComPtr<IObjectArrayPriv>
	{
		~CComPtr<IObjectArrayPriv>();
	};

	struct CComPtr<IObjectCollection>
	{
		~CComPtr<IObjectCollection>();
	};

	struct CComPtr<IOleCommandTarget>
	{
		~CComPtr<IOleCommandTarget>();
	};

	struct CComPtr<IPerCommandCachedState>
	{
		~CComPtr<IPerCommandCachedState>();
	};

	struct CComPtr<IPropertyBag>
	{
		~CComPtr<IPropertyBag>();
	};

	struct CComPtr<IPropertyDescription>
	{
		~CComPtr<IPropertyDescription>();
	};

	struct CComPtr<IPropertyDescriptionList>
	{
		~CComPtr<IPropertyDescriptionList>();
	};

	struct CComPtr<IPropertyDescriptionPriv>
	{
		~CComPtr<IPropertyDescriptionPriv>();
	};

	struct CComPtr<IPropertyStore>
	{
		~CComPtr<IPropertyStore>();
	};

	struct CComPtr<IQueryAssociations>
	{
		~CComPtr<IQueryAssociations>();
	};

	struct CComPtr<IRawElementProviderFragment>
	{
		~CComPtr<IRawElementProviderFragment>();
	};

	struct CComPtr<IRawElementProviderSimple>
	{
		~CComPtr<IRawElementProviderSimple>();
	};

	struct CComPtr<IResultShape>
	{
		~CComPtr<IResultShape>();
	};

	struct CComPtr<IRibbonTabsetCallBack>
	{
		~CComPtr<IRibbonTabsetCallBack>();
	};

	struct CComPtr<IRunnableTask>
	{
		~CComPtr<IRunnableTask>();
	};

	struct CComPtr<IScope>
	{
		~CComPtr<IScope>();
	};

	struct CComPtr<ISelectionManager>
	{
		~CComPtr<ISelectionManager>();
	};

	struct CComPtr<ISelectionStateCallback>
	{
		~CComPtr<ISelectionStateCallback>();
	};

	struct CComPtr<IShellBandProxy>
	{
		~CComPtr<IShellBandProxy>();
	};

	struct CComPtr<IShellBrowserService>
	{
		~CComPtr<IShellBrowserService>();
	};

	struct CComPtr<IShellFolder>
	{
		~CComPtr<IShellFolder>();
	};

	struct CComPtr<IShellItem2>
	{
		~CComPtr<IShellItem2>();
	};

	struct CComPtr<IShellItem>
	{
		CComPtr<IShellItem>(IShellItem *);
		~CComPtr<IShellItem>();
	};

	struct CComPtr<IShellItemBrowser>
	{
		~CComPtr<IShellItemBrowser>();
	};

	struct CComPtr<IShellNavigationBand>
	{
		~CComPtr<IShellNavigationBand>();
	};

	struct CComPtr<IShellSearchBand>
	{
		~CComPtr<IShellSearchBand>();
	};

	struct CComPtr<IShellSearchControl>
	{
		~CComPtr<IShellSearchControl>();
	};

	struct CComPtr<IShellSearchTarget>
	{
		~CComPtr<IShellSearchTarget>();
	};

	struct CComPtr<IShellTaskScheduler2>
	{
		~CComPtr<IShellTaskScheduler2>();
	};

	struct CComPtr<IShellView>
	{
		~CComPtr<IShellView>();
	};

	struct CComPtr<IShellViewProvider>
	{
		~CComPtr<IShellViewProvider>();
	};

	struct CComPtr<ISinkWrapper>
	{
		void Release();
	};

	struct CComPtr<ITextRange>
	{
		~CComPtr<ITextRange>();
	};

	struct CComPtr<ITravelEntry>
	{
		~CComPtr<ITravelEntry>();
	};

	struct CComPtr<ITravelLog>
	{
		~CComPtr<ITravelLog>();
	};

	struct CComPtr<ITryHarderItem>
	{
		~CComPtr<ITryHarderItem>();
	};

	struct CComPtr<IUICollection>
	{
		~CComPtr<IUICollection>();
	};

	struct CComPtr<IUICommandHandler>
	{
		~CComPtr<IUICommandHandler>();
	};

	struct CComPtr<IUIEventingManager>
	{
		~CComPtr<IUIEventingManager>();
	};

	struct CComPtr<IUIFramework>
	{
		~CComPtr<IUIFramework>();
	};

	struct CComPtr<IUIImage>
	{
		~CComPtr<IUIImage>();
	};

	struct CComPtr<IUIRibbon>
	{
		~CComPtr<IUIRibbon>();
	};

	struct CComPtr<IUISimplePropertySet>
	{
		~CComPtr<IUISimplePropertySet>();
	};

	struct CComPtr<IUnknown>
	{
		~CComPtr<IUnknown>();
	};

	struct CComPtr<IUri>
	{
		~CComPtr<IUri>();
	};

	struct CComPtr<IUserFocusAdviseSink>
	{
		~CComPtr<IUserFocusAdviseSink>();
	};

	struct CComPtr<IViewSettings>
	{
		~CComPtr<IViewSettings>();
	};

	struct CComPtr<IVirtualUIGroupItem>
	{
		~CComPtr<IVirtualUIGroupItem>();
	};

	struct CComPtr<IWaitCursorManager>
	{
		~CComPtr<IWaitCursorManager>();
	};

	struct CComPtr<IWebBrowser2>
	{
		~CComPtr<IWebBrowser2>();
	};

	struct CComVariant
	{
		long InternalClear();
	};

	struct CSimpleArray<AnimatingRect>
	{
		AnimatingRect & operator[](int);
		int Add(AnimatingRect &);
		void RemoveAll();
		void SetAtIndex(int,AnimatingRect &);
	};

	IUnknown * AtlComPtrAssign(IUnknown * *,IUnknown *);
	_GUID GUID_ATLVer30;
	long AtlModuleGetClassObject(ATL::_ATL_MODULE *,_GUID const &,_GUID const &,void * *);
	long AtlModuleInit(ATL::_ATL_MODULE *,ATL::_ATL_OBJMAP_ENTRY *,HINSTANCE__ *);
	long AtlModuleTerm(ATL::_ATL_MODULE *);
};

namespace AccessibilityHelpers
{
	bool IsScreenReaderEnabled();
};

struct AgileGitPtr
{
	long CopyLocal(_GUID const &,void * *);
};

struct BaseElementProvider<CSearchBoxProvider,CSearchBoxProxy,DirectUI::ElementProvider>
{
	static long Create(DirectUI::Element *,DirectUI::InvokeHelper *,DirectUI::ElementProvider * *);
	virtual DirectUI::ProviderProxy * (*GetProxyCreator())(DirectUI::Element *);
	virtual long GetPatternProvider(int,IUnknown * *);
	virtual long Init(DirectUI::Element *,DirectUI::InvokeHelper *);
	virtual ~BaseElementProvider<CSearchBoxProvider,CSearchBoxProxy,DirectUI::ElementProvider>();
};

struct BaseElementProvider<UIColumnHeaderProvider,UIColumnHeaderProxy,DirectUI::ElementProvider>
{
	virtual DirectUI::ProviderProxy * (*GetProxyCreator())(DirectUI::Element *);
	virtual long GetPatternProvider(int,IUnknown * *);
	virtual long Init(DirectUI::Element *,DirectUI::InvokeHelper *);
	virtual ~BaseElementProvider<UIColumnHeaderProvider,UIColumnHeaderProxy,DirectUI::ElementProvider>();
};

struct BaseElementProvider<UIGroupHeaderProvider,UIGroupHeaderProxy,DirectUI::ElementProvider>
{
	virtual DirectUI::ProviderProxy * (*GetProxyCreator())(DirectUI::Element *);
	virtual long GetPatternProvider(int,IUnknown * *);
	virtual long Init(DirectUI::Element *,DirectUI::InvokeHelper *);
	virtual ~BaseElementProvider<UIGroupHeaderProvider,UIGroupHeaderProxy,DirectUI::ElementProvider>();
};

struct BaseElementProvider<UIItemProvider,UIItemProxy,DirectUI::ElementProvider>
{
	virtual DirectUI::ProviderProxy * (*GetProxyCreator())(DirectUI::Element *);
	virtual long GetPatternProvider(int,IUnknown * *);
	virtual long Init(DirectUI::Element *,DirectUI::InvokeHelper *);
	virtual ~BaseElementProvider<UIItemProvider,UIItemProxy,DirectUI::ElementProvider>();
};

struct BaseElementProvider<UIItemsViewProvider,UIItemsViewProxy,DirectUI::HWNDElementProvider>
{
	virtual DirectUI::ProviderProxy * (*GetProxyCreator())(DirectUI::Element *);
	virtual long GetPatternProvider(int,IUnknown * *);
	virtual long Init(DirectUI::Element *,DirectUI::InvokeHelper *);
	virtual ~BaseElementProvider<UIItemsViewProvider,UIItemsViewProxy,DirectUI::HWNDElementProvider>();
};

struct BaseElementProvider<UIPropertyProvider,UIPropertyProxy,DirectUI::ElementProvider>
{
	virtual DirectUI::ProviderProxy * (*GetProxyCreator())(DirectUI::Element *);
	virtual long GetPatternProvider(int,IUnknown * *);
	virtual long Init(DirectUI::Element *,DirectUI::InvokeHelper *);
	virtual ~BaseElementProvider<UIPropertyProvider,UIPropertyProxy,DirectUI::ElementProvider>();
};

struct BaseElementProvider<VirtualElementProvider,VirtualElementProxy,DirectUI::ElementProvider>
{
	virtual DirectUI::ProviderProxy * (*GetProxyCreator())(DirectUI::Element *);
	virtual long GetPatternProvider(int,IUnknown * *);
	virtual long Init(DirectUI::Element *,DirectUI::InvokeHelper *);
	virtual ~BaseElementProvider<VirtualElementProvider,VirtualElementProxy,DirectUI::ElementProvider>();
};

class BaseElementProxy<CSearchBoxProxy,DirectUI::ElementProxy>
{
protected:
	virtual long _GetProperty(tagVARIANT *,int);
public:
	static CSearchBoxProxy * Create(DirectUI::Element *);
	virtual long DoMethod(int,char *);
	virtual void Init(DirectUI::Element *);
};

struct BaseElementProxy<UIColumnHeaderProxy,DirectUI::ElementProxy>
{
	long IsPatternSupported(int,bool *);
	static UIColumnHeaderProxy * Create(DirectUI::Element *);
	static long CreatePatternProvider(int,DirectUI::ElementProvider *,IUnknown * *);
	virtual long DoMethod(int,char *);
	virtual void Init(DirectUI::Element *);
};

struct BaseElementProxy<UIGroupHeaderProxy,DirectUI::ElementProxy>
{
	long IsPatternSupported(int,bool *);
	static UIGroupHeaderProxy * Create(DirectUI::Element *);
	static long CreatePatternProvider(int,DirectUI::ElementProvider *,IUnknown * *);
	virtual long DoMethod(int,char *);
	virtual void Init(DirectUI::Element *);
};

struct BaseElementProxy<UIItemProxy,DirectUI::ElementProxy>
{
	static UIItemProxy * Create(DirectUI::Element *);
	static long CreatePatternProvider(int,DirectUI::ElementProvider *,IUnknown * *);
	virtual long DoMethod(int,char *);
	virtual void Init(DirectUI::Element *);
};

struct BaseElementProxy<UIItemsViewProxy,DirectUI::HWNDElementProxy>
{
	static UIItemsViewProxy * Create(DirectUI::Element *);
	static long CreatePatternProvider(int,DirectUI::ElementProvider *,IUnknown * *);
	virtual long DoMethod(int,char *);
	virtual void Init(DirectUI::Element *);
};

struct BaseElementProxy<UIPropertyProxy,DirectUI::ElementProxy>
{
	long IsPatternSupported(int,bool *);
	static UIPropertyProxy * Create(DirectUI::Element *);
	static long CreatePatternProvider(int,DirectUI::ElementProvider *,IUnknown * *);
	virtual long DoMethod(int,char *);
	virtual void Init(DirectUI::Element *);
};

class BaseElementProxy<VirtualElementProxy,DirectUI::ElementProxy>
{
protected:
	virtual long _GetProperty(tagVARIANT *,int);
public:
	static VirtualElementProxy * Create(DirectUI::Element *);
	virtual long DoMethod(int,char *);
	virtual void Init(DirectUI::Element *);
};

struct BasePatternProvider<CSearchBoxTextProvider,ITextProvider,16,CSearchBoxTextProxy>
{
	long DoInvoke_RetVal<tagSAFEARRAY *>(int,tagSAFEARRAY * *,tagSAFEARRAY *);
	virtual DirectUI::ProviderProxy * (*GetProxyCreator())(DirectUI::Element *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~BasePatternProvider<CSearchBoxTextProvider,ITextProvider,16,CSearchBoxTextProxy>();
};

struct BasePatternProvider<CSearchBoxValueProvider,IValueProvider,12,CSearchBoxValueProxy>
{
	virtual DirectUI::ProviderProxy * (*GetProxyCreator())(DirectUI::Element *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~BasePatternProvider<CSearchBoxValueProvider,IValueProvider,12,CSearchBoxValueProxy>();
};

struct BasePatternProvider<IVGridProvider,IGridProvider,3,IVGridProxy>
{
	long DoInvoke_RetVal<int>(int,int *,int);
	virtual DirectUI::ProviderProxy * (*GetProxyCreator())(DirectUI::Element *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~BasePatternProvider<IVGridProvider,IGridProvider,3,IVGridProxy>();
};

struct BasePatternProvider<IVInvokeProvider,IInvokeProvider,0,IVInvokeProxy>
{
	virtual DirectUI::ProviderProxy * (*GetProxyCreator())(DirectUI::Element *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~BasePatternProvider<IVInvokeProvider,IInvokeProvider,0,IVInvokeProxy>();
};

struct BasePatternProvider<UIColumnHeaderExpandCollapseProvider,IExpandCollapseProvider,1,UIColumnHeaderExpandCollapseProxy>
{
	virtual DirectUI::ProviderProxy * (*GetProxyCreator())(DirectUI::Element *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~BasePatternProvider<UIColumnHeaderExpandCollapseProvider,IExpandCollapseProvider,1,UIColumnHeaderExpandCollapseProxy>();
};

struct BasePatternProvider<UIGroupHeaderExpandCollapseProvider,IExpandCollapseProvider,1,UIGroupHeaderExpandCollapseProxy>
{
	virtual DirectUI::ProviderProxy * (*GetProxyCreator())(DirectUI::Element *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~BasePatternProvider<UIGroupHeaderExpandCollapseProvider,IExpandCollapseProvider,1,UIGroupHeaderExpandCollapseProxy>();
};

struct BasePatternProvider<UIGroupItemExpandCollapseProvider,IExpandCollapseProvider,1,UIGroupItemExpandCollapseProxy>
{
	virtual DirectUI::ProviderProxy * (*GetProxyCreator())(DirectUI::Element *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~BasePatternProvider<UIGroupItemExpandCollapseProvider,IExpandCollapseProvider,1,UIGroupItemExpandCollapseProxy>();
};

struct BasePatternProvider<UIItemGridItemProvider,IGridItemProvider,2,UIItemGridItemProxy>
{
	long DoInvoke_RetVal<int>(int,int *,int);
	virtual DirectUI::ProviderProxy * (*GetProxyCreator())(DirectUI::Element *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~BasePatternProvider<UIItemGridItemProvider,IGridItemProvider,2,UIItemGridItemProxy>();
};

struct BasePatternProvider<UIItemScrollItemProvider,IScrollItemProvider,6,UIItemScrollItemProxy>
{
	virtual DirectUI::ProviderProxy * (*GetProxyCreator())(DirectUI::Element *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~BasePatternProvider<UIItemScrollItemProvider,IScrollItemProvider,6,UIItemScrollItemProxy>();
};

struct BasePatternProvider<UIItemSelectionItemProvider,ISelectionItemProvider,7,UIItemSelectionItemProxy>
{
	virtual DirectUI::ProviderProxy * (*GetProxyCreator())(DirectUI::Element *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~BasePatternProvider<UIItemSelectionItemProvider,ISelectionItemProvider,7,UIItemSelectionItemProxy>();
};

struct BasePatternProvider<UIItemToggleProvider,IToggleProvider,11,UIItemToggleProxy>
{
	virtual DirectUI::ProviderProxy * (*GetProxyCreator())(DirectUI::Element *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~BasePatternProvider<UIItemToggleProvider,IToggleProvider,11,UIItemToggleProxy>();
};

struct BasePatternProvider<UIItemValueProvider,IValueProvider,12,UIItemValueProxy>
{
	virtual DirectUI::ProviderProxy * (*GetProxyCreator())(DirectUI::Element *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~BasePatternProvider<UIItemValueProvider,IValueProvider,12,UIItemValueProxy>();
};

struct BasePatternProvider<UIItemsViewItemContainerProvider,IItemContainerProvider,19,UIItemsViewItemContainerProxy>
{
	virtual DirectUI::ProviderProxy * (*GetProxyCreator())(DirectUI::Element *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~BasePatternProvider<UIItemsViewItemContainerProvider,IItemContainerProvider,19,UIItemsViewItemContainerProxy>();
};

struct BasePatternProvider<UIItemsViewMultipleViewProvider,IMultipleViewProvider,15,UIItemsViewMultipleViewProxy>
{
	virtual DirectUI::ProviderProxy * (*GetProxyCreator())(DirectUI::Element *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~BasePatternProvider<UIItemsViewMultipleViewProvider,IMultipleViewProvider,15,UIItemsViewMultipleViewProxy>();
};

struct BasePatternProvider<UIItemsViewScrollProvider,IScrollProvider,5,UIItemsViewScrollProxy>
{
	long DoInvoke_RetVal<double>(int,double *,double);
	long DoInvoke_RetVal<int>(int,int *,int);
	virtual DirectUI::ProviderProxy * (*GetProxyCreator())(DirectUI::Element *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~BasePatternProvider<UIItemsViewScrollProvider,IScrollProvider,5,UIItemsViewScrollProxy>();
};

struct BasePatternProvider<UIItemsViewSelectionProvider,ISelectionProvider,8,UIItemsViewSelectionProxy>
{
	long DoInvoke_RetVal<int>(int,int *,int);
	virtual DirectUI::ProviderProxy * (*GetProxyCreator())(DirectUI::Element *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~BasePatternProvider<UIItemsViewSelectionProvider,ISelectionProvider,8,UIItemsViewSelectionProxy>();
};

struct BasePatternProvider<UIItemsViewTableProvider,ITableProvider,9,UIItemsViewTableProxy>
{
	virtual DirectUI::ProviderProxy * (*GetProxyCreator())(DirectUI::Element *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~BasePatternProvider<UIItemsViewTableProvider,ITableProvider,9,UIItemsViewTableProxy>();
};

struct BasePatternProvider<UIPropertyGridItemProvider,IGridItemProvider,2,UIPropertyGridItemProxy>
{
	long DoInvoke_RetVal<int>(int,int *,int);
	virtual DirectUI::ProviderProxy * (*GetProxyCreator())(DirectUI::Element *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~BasePatternProvider<UIPropertyGridItemProvider,IGridItemProvider,2,UIPropertyGridItemProxy>();
};

struct BasePatternProvider<UIPropertyTableItemProvider,ITableItemProvider,10,UIPropertyTableItemProxy>
{
	virtual DirectUI::ProviderProxy * (*GetProxyCreator())(DirectUI::Element *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~BasePatternProvider<UIPropertyTableItemProvider,ITableItemProvider,10,UIPropertyTableItemProxy>();
};

struct BasePatternProvider<UIPropertyValueProvider,IValueProvider,12,UIPropertyValueProxy>
{
	virtual DirectUI::ProviderProxy * (*GetProxyCreator())(DirectUI::Element *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~BasePatternProvider<UIPropertyValueProvider,IValueProvider,12,UIPropertyValueProxy>();
};

struct BaseProviderProxy<CSearchBoxTextProxy>
{
	static CSearchBoxTextProxy * Create(DirectUI::Element *);
};

struct BaseProviderProxy<CSearchBoxValueProxy>
{
	static CSearchBoxValueProxy * Create(DirectUI::Element *);
};

struct BaseProviderProxy<IVGridProxy>
{
	static IVGridProxy * Create(DirectUI::Element *);
};

struct BaseProviderProxy<IVInvokeProxy>
{
	static IVInvokeProxy * Create(DirectUI::Element *);
};

struct BaseProviderProxy<UIColumnHeaderExpandCollapseProxy>
{
	static UIColumnHeaderExpandCollapseProxy * Create(DirectUI::Element *);
};

struct BaseProviderProxy<UIGroupHeaderExpandCollapseProxy>
{
	static UIGroupHeaderExpandCollapseProxy * Create(DirectUI::Element *);
};

struct BaseProviderProxy<UIGroupItemExpandCollapseProxy>
{
	static UIGroupItemExpandCollapseProxy * Create(DirectUI::Element *);
};

struct BaseProviderProxy<UIItemGridItemProxy>
{
	static UIItemGridItemProxy * Create(DirectUI::Element *);
};

struct BaseProviderProxy<UIItemScrollItemProxy>
{
	static UIItemScrollItemProxy * Create(DirectUI::Element *);
};

struct BaseProviderProxy<UIItemSelectionItemProxy>
{
	static UIItemSelectionItemProxy * Create(DirectUI::Element *);
};

struct BaseProviderProxy<UIItemToggleProxy>
{
	static UIItemToggleProxy * Create(DirectUI::Element *);
};

struct BaseProviderProxy<UIItemValueProxy>
{
	static UIItemValueProxy * Create(DirectUI::Element *);
};

struct BaseProviderProxy<UIItemsViewItemContainerProxy>
{
	static UIItemsViewItemContainerProxy * Create(DirectUI::Element *);
};

struct BaseProviderProxy<UIItemsViewMultipleViewProxy>
{
	static UIItemsViewMultipleViewProxy * Create(DirectUI::Element *);
};

struct BaseProviderProxy<UIItemsViewScrollProxy>
{
	static UIItemsViewScrollProxy * Create(DirectUI::Element *);
};

struct BaseProviderProxy<UIItemsViewSelectionProxy>
{
	static UIItemsViewSelectionProxy * Create(DirectUI::Element *);
};

struct BaseProviderProxy<UIItemsViewTableProxy>
{
	static UIItemsViewTableProxy * Create(DirectUI::Element *);
};

struct BaseProviderProxy<UIPropertyGridItemProxy>
{
	static UIPropertyGridItemProxy * Create(DirectUI::Element *);
};

struct BaseProviderProxy<UIPropertyTableItemProxy>
{
	static UIPropertyTableItemProxy * Create(DirectUI::Element *);
};

struct BaseProviderProxy<UIPropertyValueProxy>
{
	static UIPropertyValueProxy * Create(DirectUI::Element *);
};

struct BaseProviderProxy<VirtualizedItemProxy>
{
	static VirtualizedItemProxy * Create(DirectUI::Element *);
};

struct BaselineLayout
{
	virtual tagSIZE UpdateDesiredSize(DirectUI::Element *,int,int,DirectUI::Surface *);
	virtual void DoLayout(DirectUI::Element *,int,int);
};

struct CAboutWindowsCommand
{
	virtual long Execute();
};

struct CAccessibleWrapperBase
{
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

class CActionIdCommand
{
	long _Initialize(HKEY__ *,unsigned short const *);
public:
	virtual long CancelPreview(IShellItemArray *);
	virtual long EnumSubCommands(IEnumExplorerCommand * *);
	virtual long GetCanonicalName(_GUID *);
	virtual long GetDescription(IShellItemArray *,unsigned short * *);
	virtual long GetFlags(unsigned long *);
	virtual long GetIcon(IShellItemArray *,unsigned short * *);
	virtual long GetIconAsBitmap(IShellItemArray *,tagSIZE,HBITMAP__ * *);
	virtual long GetKeyAndName(HKEY__ * *,unsigned short * *);
	virtual long GetPosition(CMDPOS *,_GUID *);
	virtual long GetSelection(_GUID const &,void * *);
	virtual long GetState(IShellItemArray *,int,unsigned long *);
	virtual long GetTitle(IShellItemArray *,unsigned short * *);
	virtual long GetToolTip(IShellItemArray *,unsigned short * *);
	virtual long GetToolTipTitle(IShellItemArray *,unsigned short * *);
	virtual long Invoke(IShellItemArray *,IBindCtx *);
	virtual long InvokeFromContextMenu(_CMINVOKECOMMANDINFOEX const *,IShellItemArray *);
	virtual long Preview(IShellItemArray *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SetInternalExtensionClasses(_GUID const *,unsigned long);
	virtual long SetKeyAndName(HKEY__ *,unsigned short const *);
	virtual long SetSelection(IShellItemArray *);
	virtual long SetSite(IUnknown *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CActionIdExecute
{
	CActionIdExecute();
	virtual long Execute();
	virtual long Initialize(unsigned short const *,IPropertyBag *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CAddressBand
{
	CAddressBand(ADRESSBANDFLAGS);
	ENUMBUTTONGROUP _GetButtonGroup(unsigned int);
	HMENU__ * _GetSystemMenu();
	__int64 _AddressBandWndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	__int64 _OnCommand(unsigned int,unsigned __int64,__int64);
	__int64 _OnThemeChanged();
	__int64 _ProgressWndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	int IndexForToolbarSettings(void *);
	long _CreateAddressBand(IUnknown *);
	long _CreateAddressToolbar();
	long _CreateProgressBar();
	long _EnsureAddressEditBox();
	long _EnsureBreadcrumbBar();
	long _SetNavigationTarget(IShellNavigationTarget *);
	static __int64 _ComboExEditProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	static __int64 s_AddressBandWndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	static __int64 s_ProgressWndProc(HWND__ *,unsigned int,unsigned __int64,__int64,unsigned __int64,unsigned __int64);
	static __int64 s_TBWndProc(HWND__ *,unsigned int,unsigned __int64,__int64,unsigned __int64,unsigned __int64);
	unsigned int CalculateBandHeight();
	virtual ~CAddressBand();
	void _ApplyStateBasedChildThemeChanges();
	void _ButtonSwitch(ENUMBUTTONTYPE);
	void _Cleanup();
	void _CleanupTabletPCContext();
	void _EndProgress();
	void _FormatToolbarTooltip(ENUMBUTTONTYPE,unsigned short *,int);
	void _InitTabletPCContext(HWND__ *);
	void _OnBackgroundStateChanged();
	void _OnGetInfoTip(tagNMTBGETINFOTIPW *);
	void _PositionChildWindows();
	void _SetFocusAndEditMode();
	void _SetNavBandNavigationState();
	void _SetReadOnly(int);
	void _SetToolbarImageLists();
	void _StartProgress();
	void _UpdateToolbar(int);
public:
	static long s_CreateInstance(ADRESSBANDFLAGS,_GUID const &,void * *);
	virtual long BandSizeChanged();
	virtual long CloseDW(unsigned long);
	virtual long Exec(_GUID const *,unsigned long,unsigned long,tagVARIANT *,tagVARIANT *);
	virtual long GetBandInfo(unsigned long,unsigned long,DESKBANDINFO *);
	virtual long GetClassID(_GUID *);
	virtual long GetText(unsigned short * *,int *);
	virtual long HasFocusIO();
	virtual long IsConnectedToBrowser(int *);
	virtual long IsDirty();
	virtual long IsWindowOwner(HWND__ *);
	virtual long Load(IStream *);
	virtual long NavigateToPidl(_ITEMIDLIST_ABSOLUTE const *,unsigned short const *);
	virtual long OnChange(long,_ITEMIDLIST_ABSOLUTE const *,_ITEMIDLIST_ABSOLUTE const *);
	virtual long OnFocusChangeIS(IUnknown *,int);
	virtual long OnWinEvent(HWND__ *,unsigned int,unsigned __int64,__int64,__int64 *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long QueryStatus(_GUID const *,unsigned long,_tagOLECMD * const,_tagOLECMDTEXT *);
	virtual long Refresh(tagVARIANT *);
	virtual long RevertEditChanges();
	virtual long Save(IStream *,int);
	virtual long SetEditMode(int);
	virtual long SetNavigationState(unsigned long);
	virtual long SetNavigationTarget(IShellNavigationTarget *);
	virtual long SetProgress(SHELL_NAVIGATION_BAND_PROGRESS_STATE,long,long);
	virtual long SetSite(IUnknown *);
	virtual long ShowDW(int);
	virtual long TranslateAcceleratorGlobal(tagMSG *);
	virtual long TranslateAcceleratorIO(tagMSG *);
	virtual long UIActivateIO(int,tagMSG *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CAddressEditAccessible
{
protected:
	virtual ~CAddressEditAccessible();
public:
	CAddressEditAccessible(HWND__ *,HWND__ *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_accName(tagVARIANT,unsigned short * *);
	virtual long get_accValue(tagVARIANT,unsigned short * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CAddressEditBox
{
protected:
	__int64 _EditWndProc(HWND__ *,unsigned int,unsigned __int64,__int64,unsigned __int64);
	__int64 _MsgHook(int,unsigned __int64,tagMOUSEHOOKSTRUCT *);
	__int64 _OnCommand(unsigned __int64,__int64);
	__int64 _OnEndEditA(NMCBEENDEDITA *);
	__int64 _OnEndEditW(NMCBEENDEDITW const *);
	__int64 _OnNotify(tagNMHDR *);
	int _CanStompCurrentText();
	int _IsDirty();
	long _ConnectToBrwsrWnd();
	long _EnsureShellUrl();
	long _FinishNavigate();
	long _GetTargetIDList(_ITEMIDLIST_ABSOLUTE * *);
	long _HandleNavigateError(_ITEMIDLIST_ABSOLUTE const *,long);
	long _HandleUserAction(unsigned short const *,int,int);
	long _NavigateAfterParse(IShellUrl *);
	long _NavigateToComboDropdownSelection(int);
	long _NavigationComplete(unsigned short const *,int,int);
	long _StartParse(ICancelMethodCalls * *);
	long _UpdateFromCurrentLocation();
	long _UseNewList(ENUMLISTTYPE);
	static __int64 _MsgHook(int,unsigned __int64,__int64);
	static __int64 s_ComboExSubclassWndProc(HWND__ *,unsigned int,unsigned __int64,__int64,unsigned __int64,unsigned __int64);
	static __int64 s_ComboSubclassWndProc(HWND__ *,unsigned int,unsigned __int64,__int64,unsigned __int64,unsigned __int64);
	static __int64 s_EditSubclassWndProc(HWND__ *,unsigned int,unsigned __int64,__int64,unsigned __int64,unsigned __int64);
	void _CancelPreviousParse();
	void _ClearDirtyFlag();
	void _GetUrlAndCache();
	void _HandleParseCompletion(unsigned __int64,__int64);
	void _InstallHookIfDirty();
	void _RemoveHook();
	void _SetAutocompleteOptions();
	void _TryLeaveEditMode(HWND__ *);
	~CAddressEditBox();
public:
	CAddressEditBox();
	virtual long BandSizeChanged();
	virtual long Exec(_GUID const *,unsigned long,unsigned long,tagVARIANT *,tagVARIANT *);
	virtual long Execute(unsigned long);
	virtual long GetClassID(_GUID *);
	virtual long GetSizeMax(_ULARGE_INTEGER *);
	virtual long GetText(unsigned short * *,int *);
	virtual long HasChanged(unsigned short const *,int *);
	virtual long Init(HWND__ *,HWND__ *,unsigned long,IUnknown *);
	virtual long IsConnectedToBrowser(int *);
	virtual long IsDirty();
	virtual long IsWindowOwner(HWND__ *);
	virtual long Load(IStream *);
	virtual long NavigateToPidl(_ITEMIDLIST_ABSOLUTE const *,unsigned short const *);
	virtual long OnChange(long,_ITEMIDLIST_ABSOLUTE const *,_ITEMIDLIST_ABSOLUTE const *);
	virtual long OnWinEvent(HWND__ *,unsigned int,unsigned __int64,__int64,__int64 *);
	virtual long ParseNow(unsigned long);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long QueryStatus(_GUID const *,unsigned long,_tagOLECMD * const,_tagOLECMDTEXT *);
	virtual long Refresh(tagVARIANT *);
	virtual long RevertEditChanges();
	virtual long Save(IStream *,int);
	virtual long Save(unsigned long);
	virtual long SetCurrentDir(unsigned short const *);
	virtual long SetEditMode(int);
	virtual long SetNavigationState(unsigned long);
	virtual long SetNavigationTarget(IShellNavigationTarget *);
	virtual long SetOwner(IUnknown *);
	virtual long SetProgress(SHELL_NAVIGATION_BAND_PROGRESS_STATE,long,long);
	virtual long SetReadOnly(int);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CAddressList
{
protected:
	__int64 _OnDragBeginA(NMCBEDRAGBEGINA *);
	__int64 _OnDragBeginW(NMCBEDRAGBEGINW *);
	int _MoveAddressToTopOfList(int);
	long _GetFastPathIcons(unsigned short const *,int *,int *);
	long _GetPidlIcon(_ITEMIDLIST_ABSOLUTE const *,int *,int *);
	long _GetUrlUI(IShellUrl *,unsigned short const *,int *,int *);
	long _UpdateIcon(_ITEMIDLIST_ABSOLUTE const *);
	virtual _ITEMIDLIST_ABSOLUTE * _GetDragDropPidl(NMCBEDRAGBEGINW *);
	virtual __int64 _OnCommand(unsigned __int64,__int64);
	virtual __int64 _OnNotify(tagNMHDR *);
	virtual void _InitCombobox();
	virtual void _PurgeComboBox();
	virtual ~CAddressList();
	void _ComboBoxInsertURL(unsigned short const *,int,int);
public:
	virtual long Connect(int,HWND__ *,IShellBandProxy *,IAutoComplete *);
	virtual long IsWindowOwner(HWND__ *);
	virtual long Load();
	virtual long NavigationComplete(IShellUrl *);
	virtual long OnChange(long,_ITEMIDLIST_ABSOLUTE const *,_ITEMIDLIST_ABSOLUTE const *);
	virtual long OnWinEvent(HWND__ *,unsigned int,unsigned __int64,__int64,__int64 *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Refresh(unsigned long);
	virtual long Save();
	virtual long SetToListIndex(int,IShellUrl *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CAggregatedUnknown
{
	struct CUnkInner
	{
		virtual long QueryInterface(_GUID const &,void * *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
	};

	IUnknown * _GetCanonicalOuter();
protected:
	virtual int v_HandleDelete(long *);
public:
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CAnimationManager
{
	double _GetAnimationSpeed(ANIMATIONTYPE,SPEEDBOUND);
	int _GetAnimationTime(ANIMATIONTYPE);
	int _IsSlowKeyPressed();
	long _AllocateHBITMAP(int,int,int *);
	long _CreateBackBuffer(int,int,HBITMAP__ * *);
	long _Initialize(UIItemsView *);
	long _PaintCurrentViewHBITMAP(int *);
	long _SetupNonViewAnimatingRect();
	long _StartTimer();
	static void s_AnimationTimeProc(GMA_ACTIONINFO *);
	void _AnimationTimeProc(GMA_ACTIONINFO *);
	void _CacheCurrentViewMode();
	void _ClearElementPositionChangeInfo();
	void _EndAnimation(ENDANIMATIONFLAGS);
	void _EnsureElementPositionChangeInfo();
	void _FinishAnimationSetup();
	void _FinishElementPositionChange(ATL::CSimpleArray<AnimatingRect> *,AnimatingRect *);
	void _FinishGroupCollapse(ATL::CSimpleArray<AnimatingRect> *,AnimatingRect *);
	void _FinishGroupExpand(ATL::CSimpleArray<AnimatingRect> *,AnimatingRect *);
	void _FinishScrollDown(ATL::CSimpleArray<AnimatingRect> *,AnimatingRect *);
	void _FinishScrollGeneral(AnimatingRect *,tagPOINT *,tagRECT *,tagRECT *);
	void _FinishScrollUp(ATL::CSimpleArray<AnimatingRect> *,AnimatingRect *);
	void _FreeAllHBITMAPS();
	void _GetItemsViewRect(tagRECT *);
	void _GetNonViewRect(tagRECT *);
	void _GetViewRect(tagRECT *);
	void _ResetAnimations();
	void _SetupElementPositionChange(DirectUI::Element *);
	void _SetupGroupCollapse(DirectUI::Element *);
	void _SetupGroupExpand(DirectUI::Element *);
	void _SetupScrollDown(DirectUI::Element *);
	void _SetupScrollGeneral(LineScroller *,CAnimationManager::SETUPSCROLLGENERALORIENTATION,ANIMATIONTYPE,DirectUI::Element *,tagRECT *,tagPOINT *);
	void _SetupScrollUp(DirectUI::Element *);
	void _UpdateAllAnimatingRects();
	~CAnimationManager();
public:
	virtual int IsAnimating();
	virtual long HandleVisualChangeEvent(VisualChangeEvent *);
	virtual long Paint(HDC__ *,tagRECT *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual void SetBackgroundColor(unsigned long);
};

struct CAnyGroupsSelected
{
	int Enum(ATL::CComPtr<IItem> const &,SelectionState const &);
};

struct CAnyItemEntriesInGroup
{
	CAnyItemEntriesInGroup(IItem *,ITEM_IS_SELECTED,ICollectionCache *);
	int Enum(ATL::CComPtr<IItem> const &,SelectionState const &);
};

class CApartmentLocalObject
{
	long _DelayAllocateTLS();
	long _GetApartmentObject(_GUID const &,void * *);
	long _GetInterfaceFromGIT(unsigned long,_GUID const &,void * *);
	long _RegisterInterfaceInGIT(unsigned long *,IUnknown *);
	void _EnterCriticalSection();
public:
	long GetApartmentObject(_GUID const &,void * *);
	long SetApartmentObject(IUnknown *);
};

class CAppCursorManager
{
protected:
	void _ShowHideAppStartingCursor(IUnknown *,bool,APPCURSORCONTEXT);
};

class CAppMenuHandler
{
	long _BrowseToFrequentPlaceByIndex(unsigned int);
public:
	virtual long Execute(unsigned int,UI_EXECUTIONVERB,_tagpropertykey const *,tagPROPVARIANT const *,IUISimplePropertySet *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long UpdateProperty(unsigned int,_tagpropertykey const &,tagPROPVARIANT const *,tagPROPVARIANT *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CAssociationList
{
protected:
	int FindEntry(unsigned long);
public:
	int Add(unsigned long,void *);
	long Find(unsigned long,void * *);
	void Delete(unsigned long);
	~CAssociationList();
};

class CAutoDestItemsList
{
protected:
	long _AddDestinationList(IAutomaticDestinationList *,DESTLISTTYPE,wistd::function<long (IShellItem2 *,DESTLISTTYPE,bool *)> const &);
	virtual long v_Initialize();
public:
	long CheckForDuplicateItem(IShellItem *);
	long GetItemByIndex(unsigned int,IShellItem * *);
	long GetValidatedItemByIndex(HWND__ *,unsigned int,IShellItem * *);
	long Refresh();
	long Refresh(wistd::function<long (IShellItem2 *,DESTLISTTYPE,bool *)> const &);
};

struct CAutoFont
{
	CAutoFont(DirectUI::Element *,HDC__ *);
	void Release();
};

struct CAutoWaitCursor
{
	CAutoWaitCursor(IUnknown *);
	~CAutoWaitCursor();
};

struct CBandDataObject
{
	CBandDataObject();
	long Init(IUnknown *,IBandSite *,unsigned long);
	virtual long DAdvise(tagFORMATETC *,unsigned long,IAdviseSink *,unsigned long *);
	virtual long DUnadvise(unsigned long);
	virtual long EnumDAdvise(IEnumSTATDATA * *);
	virtual long EnumFormatEtc(unsigned long,IEnumFORMATETC * *);
	virtual long GetCanonicalFormatEtc(tagFORMATETC *,tagFORMATETC *);
	virtual long GetData(tagFORMATETC *,tagSTGMEDIUM *);
	virtual long GetDataHere(tagFORMATETC *,tagSTGMEDIUM *);
	virtual long QueryGetData(tagFORMATETC *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SetData(tagFORMATETC *,tagSTGMEDIUM *,int);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CBandItemData
{
	unsigned long Release();
};

class CBandSite
{
protected:
	CBandItemData * _GetBandItem(int);
	CBandItemData * _GetBandItemDataStructByID(unsigned long);
	IDataObject * _DataObjForBand(unsigned long);
	IUnknown * _GetNextTabstopBand(IUnknown *,int);
	int _BandIDToIndex(unsigned long);
	int _BandIndexFromPunk(IUnknown *);
	int _GetBandItemCount();
	int _GetPeopleBandIndex();
	int _IsEnableTitle(CBandItemData const *);
	int _IsHeightReasonable(unsigned int);
	int _SendToToolband(HWND__ *,unsigned int,unsigned __int64,__int64,__int64 *);
	int _UpdateBandInfo(CBandItemData *,int);
	long _ActivateNextTabstopBand(IUnknown *,int,tagMSG *);
	long _AddBandByID(IUnknown *,unsigned long);
	long _IsRestricted(unsigned long,unsigned long,unsigned long);
	long _LoadBandInfo(IStream *,int,unsigned long,int);
	long _OnBSCommand(int,unsigned long,CBandItemData *);
	long _SaveBandInfo(IStream *,int);
	long _SetBandStateHelper(unsigned long,unsigned long,unsigned long);
	unsigned long _BandIDFromPunk(IUnknown *);
	unsigned long _GetAdminSettings(unsigned long);
	unsigned long _IndexToBandID(int);
	virtual HMENU__ * _LoadContextMenu();
	virtual IDropTarget * _WrapDropTargetForBand(IDropTarget *);
	virtual __int64 _OnBeginDrag(tagNMREBAR const *);
	virtual __int64 _OnNotify(tagNMHDR *);
	virtual int _AddBandItem(CBandItemData *);
	virtual int _ContextMenuHittest(__int64,tagPOINT *);
	virtual long _CycleFocusBS(tagMSG *);
	virtual long _Initialize(HWND__ *);
	virtual long _OnContextMenu(unsigned __int64,__int64);
	virtual long v_InternalQueryInterface(_GUID const &,void * *);
	virtual unsigned long _GetWindowStyle(unsigned long *);
	virtual void _BandInfoFromBandItem(tagREBARBANDINFOW *,CBandItemData *,int);
	virtual void _Close();
	virtual void _DeleteBandItem(int);
	virtual void _OnCloseBand(unsigned long);
	virtual void _ShowBand(CBandItemData *,int);
	virtual void _UpdateAllBands(int,int);
	virtual void v_SetTabstop(tagREBARBANDINFOW *);
	virtual ~CBandSite();
	void _BandItemEnumCallback(int,int (*)(CBandItemData *,void *),void *);
	void _CacheActiveBand(IUnknown *);
	void _CheckNotifyOnAddRemove(unsigned long,int);
	void _DeleteAllBandItems();
	void _DoDragDrop();
	void _GetBandInfo(CBandItemData *,DESKBANDINFO *);
	void _OnRBAutoSize(tagNMRBAUTOSIZE *);
	void _PreDragDrop();
	void _ReleaseBandItemData(CBandItemData *,int);
	void _SwitchToDesktopIfNecessary();
	void _UpdateBand(unsigned long);
public:
	CBandSite(IUnknown *);
	virtual long AddBand(IUnknown *);
	virtual long ContextSensitiveHelp(int);
	virtual long DragEnter(IDataObject *,unsigned long,_POINTL,unsigned long *);
	virtual long DragLeave();
	virtual long DragOver(unsigned long,_POINTL,unsigned long *);
	virtual long Drop(IDataObject *,unsigned long,_POINTL,unsigned long *);
	virtual long EnumBands(unsigned int,unsigned long *);
	virtual long Exec(_GUID const *,unsigned long,unsigned long,tagVARIANT *,tagVARIANT *);
	virtual long GetBandObject(unsigned long,_GUID const &,void * *);
	virtual long GetBandSiteInfo(tagBANDSITEINFO *);
	virtual long GetClassID(_GUID *);
	virtual long GetSize(unsigned long,tagRECT *);
	virtual long GetSizeMax(_ULARGE_INTEGER *);
	virtual long GetWindow(HWND__ * *);
	virtual long HasFocusIO();
	virtual long IsDirty();
	virtual long IsWindowOwner(HWND__ *);
	virtual long Load(IStream *);
	virtual long LoadFromStreamBS(IStream *,_GUID const &,void * *);
	virtual long OnFocusChangeIS(IUnknown *,int);
	virtual long OnWinEvent(HWND__ *,unsigned int,unsigned __int64,__int64,__int64 *);
	virtual long QueryBand(unsigned long,IDeskBand * *,unsigned long *,unsigned short *,int);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long QueryService(_GUID const &,_GUID const &,void * *);
	virtual long QueryStatus(_GUID const *,unsigned long,_tagOLECMD * const,_tagOLECMDTEXT *);
	virtual long RemoveBand(unsigned long);
	virtual long Save(IStream *,int);
	virtual long SaveToStreamBS(IUnknown *,IStream *);
	virtual long SetBandSiteInfo(tagBANDSITEINFO const *);
	virtual long SetBandState(unsigned long,unsigned long,unsigned long);
	virtual long SetDeskBarSite(IUnknown *);
	virtual long SetModeDBC(unsigned long);
	virtual long TranslateAcceleratorIO(tagMSG *);
	virtual long UIActivateDBC(unsigned long);
	virtual long UIActivateIO(int,tagMSG *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CBandSiteMenu
{
protected:
	int _CheckUnique(IDeskBand *,HMENU__ *);
	int _GetUniqueIDForGenericFolderBand();
	int _InitComCat(_GUID const *);
	int _LegacyBandWarning(_GUID const &);
	long _AddNewFSBand(_ITEMIDLIST_ABSOLUTE const *,int,int);
	long _BrowseForNewFolderBand();
	long _FindBand(_GUID const &,int,unsigned long *);
	long _GetBandIdentifiers(IUnknown *,_GUID *,int *);
	long _RemoveGenericFolderBand(int);
	long _ToggleCatBand(_GUID const &,int,unsigned long);
	long _ToggleComCatBand(_GUID const &,unsigned long);
	long _ToggleSpecialFolderBand(int,int,unsigned long);
	static int _DPA_FreeBandClassInfo(void *,void *);
	static int _DPA_FreeDeskBandItems(void *,void *);
	static long _BandClassEnum(_GUID const &,_GUID const &,__int64);
	void _AddMenuItemsForGenericFolderBands(HMENU__ *,int);
	void _GetComCatBandMenuText(BANDCLASSINFO const *,unsigned short *,unsigned int);
	void _LoadDeskBandItems();
	void _LoadDesktopFolderBandItem();
	void _PopulateSubmenu(HMENU__ *);
public:
	int CreateMergeMenu(HMENU__ *,unsigned int,unsigned int,unsigned int,unsigned int);
	int DeleteBandClass(_GUID const &);
	int GetBandClassCount(_GUID const *,int);
	int LoadFromComCat(_GUID const *,int);
	virtual long EnumNextCatBand(_GUID const &,_GUID *,int *,unsigned short *,unsigned int *,unsigned long *,int *);
	virtual long EnumReset(_GUID const &);
	virtual long GetCommandString(unsigned __int64,unsigned int,unsigned int *,char *,unsigned int);
	virtual long HandleMenuMsg(unsigned int,unsigned __int64,__int64);
	virtual long HandleMenuMsg2(unsigned int,unsigned __int64,__int64,__int64 *);
	virtual long HideCatBand(_GUID const &,_GUID const &,int);
	virtual long InvokeCommand(_CMINVOKECOMMANDINFO *);
	virtual long QueryCatBand(_GUID const &,_GUID const &,int,unsigned short *,unsigned int,unsigned long *,int *);
	virtual long QueryContextMenu(HMENU__ *,unsigned int,unsigned int,unsigned int,unsigned int);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long RefreshCatBandCache(_GUID const &);
	virtual long SetOwner(IUnknown *);
	virtual long ShowCatBand(_GUID const &,_GUID const &,int);
	virtual long ToggleCatBand(_GUID const &,_GUID const &,int);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CBaseBar
{
	void _CreateDeskBarWindow();
	void _RegisterDeskBarClass();
protected:
	CBaseBar();
	int _CheckForwardWinEvent(unsigned int,unsigned __int64,__int64,__int64 *);
	virtual __int64 _OnCommand(unsigned int,unsigned __int64,__int64);
	virtual __int64 _OnNotify(unsigned int,unsigned __int64,__int64);
	virtual __int64 v_WndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	virtual long CloseDW(unsigned long);
	virtual long ShowDW(int);
	virtual unsigned long _GetClassStyle();
	virtual unsigned long _GetExStyle();
	virtual void _NotifyModeChange(unsigned long);
	virtual void _OnCreate();
	virtual void _OnPostedPosRectChange();
	virtual void _OnSize();
public:
	virtual long ContextSensitiveHelp(int);
	virtual long Exec(_GUID const *,unsigned long,unsigned long,tagVARIANT *,tagVARIANT *);
	virtual long GetClient(IUnknown * *);
	virtual long GetWindow(HWND__ * *);
	virtual long HasFocusIO();
	virtual long OnFocusChangeIS(IUnknown *,int);
	virtual long OnPosRectChangeDB(tagRECT *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long QueryService(_GUID const &,_GUID const &,void * *);
	virtual long QueryStatus(_GUID const *,unsigned long,_tagOLECMD * const,_tagOLECMDTEXT *);
	virtual long SetClient(IUnknown *);
	virtual long TranslateAcceleratorGlobal(tagMSG *);
	virtual long TranslateAcceleratorIO(tagMSG *);
	virtual long UIActivateIO(int,tagMSG *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CBreadcrumbBar
{
	__int64 _OnButtonPressNavigate(unsigned short);
	__int64 _OnContextMenu(int,int);
	__int64 _OnDragOut(tagNMTOOLBARW *);
	__int64 _OnDropDown(int,tagRECT,int);
	__int64 _TBWndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	__int64 _WndProc(unsigned int,unsigned __int64,__int64);
	int ComputeIconIndexForPidl(IShellFolder *,_ITEMID_CHILD const *);
	int _IsFilterPidl(_ITEMIDLIST_ABSOLUTE const *);
	int _IsWordWheelLast(_ITEMID_CHILD const *,IShellFolder *);
	int _LastCrumbHasExpando();
	int _OnBreadcrumbBar(tagPOINT);
	long _AddButtonForIDList(_ITEMIDLIST_ABSOLUTE const *,_ITEMID_CHILD const *,IViewFilters *,int,int,int *);
	long _CreateFolderSet(_ITEMIDLIST_ABSOLUTE const *,_ITEMID_CHILD const *,IViewFilters *,int);
	long _GetDisplayNameForPidl(_ITEMIDLIST_ABSOLUTE const *,IShellItem *,unsigned short *,unsigned int);
	long _GetIDListForButtonID(unsigned int,_ITEMIDLIST_ABSOLUTE * *);
	long _GetViewFilters(IViewFilters * *);
	long _NavigateToIDList(_ITEMIDLIST_ABSOLUTE const *,FileExplorerTelemetryBase::NavigationSource);
	long _RebuildToolbar();
	long _UpdateIDLists(_ITEMIDLIST_ABSOLUTE const *,_ITEMIDLIST_ABSOLUTE const *);
	static __int64 s_BreadcrumbWndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	static __int64 s_TBWndProc(HWND__ *,unsigned int,unsigned __int64,__int64,unsigned __int64,unsigned __int64);
	static int s_KillEnumerationCB(IUpdatableItemSet *,void *);
	virtual long GetObjectDDT(unsigned __int64,_GUID const &,void * *);
	virtual long GetWindowsDDT(HWND__ * *,HWND__ * *);
	virtual long HitTestDDT(unsigned int,tagPOINT *,unsigned __int64 *,unsigned long *);
	virtual long OnDropDDT(IDropTarget *,IDataObject *,unsigned long *,_POINTL,unsigned long *);
	virtual ~CBreadcrumbBar();
	void RefreshImagelist();
	void _AddItemToPopup(LVPVIEWID,IUnknown *,unsigned int,unsigned int);
	void _AddItemsToPopup(LVPVIEWID,unsigned int,IUpdatableItemSet *);
	void _AddRootDropdownItems(LVPVIEWID);
	void _CopyToClipboard(int);
	void _EnsureNotifications();
	void _GoToEditMode(FileExplorerTelemetry::AddressBarEditState);
	void _HandleMenuSelection(unsigned int);
	void _KillEnumerationForDroppedIndex();
	void _OnFSNotify(unsigned long,_ITEMIDLIST_ABSOLUTE const *,_ITEMIDLIST_ABSOLUTE const *);
	void _OnTimer(unsigned int);
	void _RefreshBandInfo();
	void _RefreshTheme();
	void _ResetHotTracking(__int64);
	void _ShowHideTBButtons(int);
public:
	CBreadcrumbBar();
	static void s_DeleteHistory();
	virtual long ContextSensitiveHelp(int);
	virtual long GetClassID(_GUID *);
	virtual long GetIDList(_ITEMIDLIST_ABSOLUTE * *);
	virtual long GetItemState(LVPVIEWID,tagLVITEMW * const,int *);
	virtual long GetWindow(HWND__ * *);
	virtual long HasFocusIO();
	virtual long InitBreadcrumbBar(HWND__ *);
	virtual long OnCreated();
	virtual long OnDestroy();
	virtual long OnDismiss(int);
	virtual long OnGetSearchText(SEARCHTEXTTYPE,unsigned short *,unsigned int);
	virtual long OnItemChanged(LVPVIEWID,tagNMLISTVIEW const *,int);
	virtual long OnItemFocused(LVPVIEWID,tagLVITEMW * const,tagLVITEMW * const);
	virtual long OnItemInvoke(LVPVIEWID,tagLVITEMW * const);
	virtual long OnItemRemoved(REMOVEITEMTYPE,LVPVIEWID,tagLVITEMW * const);
	virtual long OnMouseLeave();
	virtual long OnPropCtrlInvoke(IFilterCondition *);
	virtual long OnRequestReposition(tagRECT const *);
	virtual long OnSetChanged(IUpdatableItemSet *,tagUISCB_FLAGS,__int64);
	virtual long OnSpinnerCancel(LVPVIEWID);
	virtual long OnToolBarItemInvoke(int);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long QueryService(_GUID const &,_GUID const &,void * *);
	virtual long SetFocus();
	virtual long SetIDList(_ITEMIDLIST_ABSOLUTE const *);
	virtual long SetNavigationState(unsigned long);
	virtual long SetNavigationTarget(IShellNavigationTarget *);
	virtual long SetProgress(SHELL_NAVIGATION_BAND_PROGRESS_STATE,long,long);
	virtual long SetSite(IUnknown *);
	virtual long SetTheme(unsigned short const *);
	virtual long SpecialCharacter(tagMSG const *,int);
	virtual long TranslateAcceleratorIO(tagMSG *);
	virtual long UIActivateIO(int,tagMSG *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CBrowserBandSite
{
protected:
	HFONT__ * _GetTitleFont(int);
	__int64 _OnCDNotify(tagNMCUSTOMDRAWINFO *);
	__int64 _OnHotItemChange(tagNMTBHOTITEM *);
	__int64 _OnNotifyBBS(tagNMHDR *);
	long _TrySetFocusTB(int);
	virtual HBITMAP__ * _CreateToolbarButtonBitmaps(int,int);
	virtual HMENU__ * _LoadContextMenu();
	virtual IDropTarget * _WrapDropTargetForBand(IDropTarget *);
	virtual __int64 _OnBeginDrag(tagNMREBAR const *);
	virtual __int64 _OnNotify(tagNMHDR *);
	virtual int _ContextMenuHittest(__int64,tagPOINT *);
	virtual long _CycleFocusBS(tagMSG *);
	virtual long _Initialize(HWND__ *);
	virtual long v_InternalQueryInterface(_GUID const &,void * *);
	virtual unsigned long _GetWindowStyle(unsigned long *);
	virtual void _BandInfoFromBandItem(tagREBARBANDINFOW *,CBandItemData *,int);
	virtual void _CalcHeights();
	virtual void _Close();
	virtual void _OnCloseBand(unsigned long);
	virtual void _PositionToolbars(tagPOINT *);
	virtual void _PrepareOptionsTB(int,int);
	virtual void _RefreshOptionsTBBitmaps();
	virtual void _ShowBand(CBandItemData *,int);
	virtual void _SizeOptionsTB();
	virtual void _UpdateAllBands(int,int);
	void _CreateOptionsTB();
	void _CreateTB();
	void _CreateTBRebar();
	void _DrawEtchline(HDC__ *,tagRECT const *,int,int);
	void _InitLayout();
	void _InsertToolbarBand();
	void _RemoveAllButtons();
	void _UpdateLayout();
	void _UpdateToolbarBand();
	void _UpdateToolbarFont();
public:
	CBrowserBandSite();
	virtual long AddBitmap(_GUID const *,unsigned int,unsigned int,tagTBADDBITMAP *,__int64 *,unsigned long);
	virtual long AddButtons(_GUID const *,unsigned int,_TBBUTTON const *);
	virtual long AddStdBrowserButtons();
	virtual long AddString(_GUID const *,HINSTANCE__ *,unsigned __int64,__int64 *);
	virtual long Exec(_GUID const *,unsigned long,unsigned long,tagVARIANT *,tagVARIANT *);
	virtual long GetBitmapSize(unsigned int *);
	virtual long GetButton(_GUID const *,unsigned int,_TBBUTTON *);
	virtual long GetState(_GUID const *,unsigned int,unsigned int *);
	virtual long HasFocusIO();
	virtual long HideBackForwardButton(_GUID const *,unsigned int);
	virtual long IsWindowOwner(HWND__ *);
	virtual long ModifyButton(_GUID const *,unsigned int,_TBBUTTON *);
	virtual long OnWinEvent(HWND__ *,unsigned int,unsigned __int64,__int64,__int64 *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SendToolbarMsg(_GUID const *,unsigned int,unsigned __int64,__int64,__int64 *);
	virtual long SetBandSiteInfo(tagBANDSITEINFO const *);
	virtual long SetCommandTarget(IUnknown *,_GUID const *,unsigned long);
	virtual long SetImageList(_GUID const *,_IMAGELIST *,_IMAGELIST *,_IMAGELIST *);
	virtual long SetModeDBC(unsigned long);
	virtual long SetState(_GUID const *,unsigned int,unsigned int);
	virtual long TranslateAcceleratorIO(tagMSG *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~CBrowserBandSite();
};

class CBrowserBar
{
protected:
	int _CheckForwardSizeEvent(unsigned int,unsigned __int64,__int64,__int64 *);
	virtual __int64 v_WndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	virtual void _GetChildPos(tagRECT *);
	virtual void _GetStyleForMode(unsigned int,long *,long *,HWND__ * *);
	virtual void _HandleWindowPosChanging(tagWINDOWPOS *);
public:
	CBrowserBar();
	unsigned int _PersistState(HWND__ *,int);
	virtual long Exec(_GUID const *,unsigned long,unsigned long,tagVARIANT *,tagVARIANT *);
	virtual long GetClassID(_GUID *);
};

class CBrowserHost
{
	long _Advise();
	void _Cleanup();
protected:
	CBrowserHost(CExplorerFrame *);
	virtual ~CBrowserHost();
	void _ActivateBrowser();
public:
	long Initialize(IETHREADPARAM *,unsigned long);
	long SetVisible(int);
	virtual long ContextSensitiveHelp(int);
	virtual long Exec(_GUID const *,unsigned long,unsigned long,tagVARIANT *,tagVARIANT *);
	virtual long ForwardMessageToBrowser(HWND__ *,unsigned int,unsigned __int64,__int64,__int64 *);
	virtual long FrameTranslateAccelerator(tagMSG *,unsigned long);
	virtual long GetBrowser(_GUID const &,void * *);
	virtual long GetIDsOfNames(_GUID const &,unsigned short * *,unsigned int,unsigned long,long *);
	virtual long GetLocationItem(_GUID const &,void * *);
	virtual long GetNavigationState(unsigned long *);
	virtual long GetProgress(SHELL_NAVIGATION_BAND_PROGRESS_STATE *,long *,long *);
	virtual long GetSearchState(SHELL_SEARCH_BAND_SEARCH_STATE *);
	virtual long GetTargetItem(_GUID const &,void * *);
	virtual long GetTypeInfo(unsigned int,unsigned long,ITypeInfo * *);
	virtual long GetTypeInfoCount(unsigned int *);
	virtual long GetWindow(HWND__ * *);
	virtual long GoBack();
	virtual long GoForward();
	virtual long HasFocusIO();
	virtual long Invoke(long,_GUID const &,unsigned long,unsigned short,tagDISPPARAMS *,tagVARIANT *,tagEXCEPINFO *,unsigned int *);
	virtual long NavigateToPidl(_ITEMIDLIST_ABSOLUTE const *,long);
	virtual long NavigateToUrl(unsigned short const *,long);
	virtual long OnBrowserActive();
	virtual long OnBrowserClosed();
	virtual long OnBrowserCreated(HWND__ *,IDispatch *,IShellItem *);
	virtual long OnClose();
	virtual long OnNavigationCompleted(long);
	virtual long OnSize();
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long QueryObject(_GUID const &,_GUID const &,void * *);
	virtual long QueryService(_GUID const &,_GUID const &,void * *);
	virtual long QueryStatus(_GUID const *,unsigned long,_tagOLECMD *,_tagOLECMDTEXT *);
	virtual long Refresh(long);
	virtual long RestoreFrame();
	virtual long SetIcon(HICON__ *,int);
	virtual long SetTitle(unsigned short const *);
	virtual long Stop();
	virtual long TranslateAcceleratorGlobal(tagMSG *);
	virtual long TranslateAcceleratorIO(tagMSG *);
	virtual long UIActivateIO(int,tagMSG *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CBrowserMenuCallback
{
	long _GetDefaultIcon(unsigned short *,int *);
	long _GetObject(tagSMDATA *,_GUID const &,void * *);
	long _Init(HMENU__ *,unsigned int,IUnknown *);
	long _SelectItem(_ITEMIDLIST_ABSOLUTE const *,_ITEMID_CHILD const *);
	virtual ~CBrowserMenuCallback();
public:
	virtual long CallbackSM(tagSMDATA *,unsigned int,unsigned __int64,__int64);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SetSite(IUnknown *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CBrowserThreadHandshake
{
	CBrowserThreadHandshake(void *,IStream *);
	virtual long GetEvent(void * *);
	virtual long GetResult();
	virtual long GetStream(IStream * *);
	virtual long PutResult(long);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CBufferedPaintManager
{
	long _BeginDxBitmapBufferedPaint(HDC__ *,tagRECT *,HDC__ * *);
	long _BeginGDIBufferedPaint(HDC__ *,tagRECT *,HDC__ * *);
	long _PrepareDxBitmap(HDC__ *,tagRECT *);
	void _DestroyDxBitmap();
	void _EndDxBitmapBufferedPaint();
};

struct CBuildUnmatchedItemAnimatingRects
{
	int Enum(CElementIdentifier const &,TaggedElement const &);
};

class CCachedSTAObject
{
	static HINSTANCE__ * s_hmod;
public:
	virtual long PostInitialize(long,unsigned long,unsigned long);
	virtual long PostUninitialize(unsigned long);
	virtual long PreInitialize(unsigned long,unsigned long);
	virtual long PreUninitialize(unsigned long);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CCancelWithBool
{
	virtual long Cancel(unsigned long);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long TestCancel();
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CChildrenList
{
	static long s_CreateInstance(DirectUI::Element *,_GUID const &,void * *);
	virtual long GetAt(unsigned int,_GUID const &,void * *);
	virtual long GetCount(unsigned int *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CCollectionCache
{
	long _GetEntry(IItem *,IItemCollection * *);
	long _Initialize(IItem *,IItemCollection *);
public:
	virtual long GetCollectionFromItem(tagREALIZE_MODE,IItem *,IItemCollection * *);
	virtual long MarkCollectionsUnused();
	virtual long PurgeUnusedCollections();
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CCollectionEventSinkWrapper
{
protected:
	long _PostEvent(CollectionEventParams &);
	virtual IUnknown * _GetSender();
public:
	virtual long OnCancelled();
	virtual long OnCollectionChanged(unsigned int,tagCOLLECTION_CHANGE_STATE);
	virtual long OnGetCountDone(unsigned int,tagCOUNT_TYPE,long);
	virtual long OnItemMoved(IItem *,IItem *);
	virtual long OnItemTranslated(IItem *,IItem *);
	virtual long OnItemsAdded(unsigned int,unsigned int,unsigned int,tagCHANGE_INDEX_TYPE);
	virtual long OnItemsDeleted(unsigned int,unsigned int,unsigned int,tagCHANGE_INDEX_TYPE);
	virtual long OnPrepareDone(unsigned int,long);
	virtual long OnUniqueLeafCountChanged();
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Unadvise();
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CComCatCacheTask
{
protected:
	virtual long InternalResumeRT();
public:
	long Initialize(unsigned long,_GUID * const,unsigned long,_GUID * const,int,void *);
	virtual ~CComCatCacheTask();
};

class CCommandGalleryOnExplorerCommand
{
	long _GetSubCommandHandlerForID(unsigned int,_GUID const &,void * *);
	virtual long _AddCommandToGallery(unsigned int,IExplorerCommand *,IShellItemArray *,IUICollection *);
	virtual ~CCommandGalleryOnExplorerCommand();
public:
	virtual long Execute(unsigned int,UI_EXECUTIONVERB,_tagpropertykey const *,tagPROPVARIANT const *,IUISimplePropertySet *);
	virtual long UpdatePerCommandCache(unsigned int,int);
	virtual long UpdateProperty(unsigned int,_tagpropertykey const &,tagPROPVARIANT const *,tagPROPVARIANT *);
};

class CCommonExplorerHost
{
	long _SetupIEThreadParam(_ITEMIDLIST_ABSOLUTE const *,LAUNCHEXPLORERFLAGS,int,IETHREADPARAM * *);
public:
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long ShowWindow(_ITEMIDLIST_ABSOLUTE const *,LAUNCHEXPLORERFLAGS,tagPOINT,int);
	virtual long ShowWindowAtRect(_ITEMIDLIST_ABSOLUTE const *,LAUNCHEXPLORERFLAGS,tagRECT const *,int);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CConnectionPoint
{
	virtual long Advise(IUnknown *,unsigned long *);
	virtual long EnumConnections(IEnumConnections * *);
	virtual long GetConnectionInterface(_GUID *);
	virtual long GetConnectionPointContainer(IConnectionPointContainer * *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Unadvise(unsigned long);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	~CConnectionPoint();
};

struct CConnectionPointEnum
{
	CConnectionPointEnum(CConnectionPoint *,int);
	virtual long Clone(IEnumConnections * *);
	virtual long Next(unsigned long,tagCONNECTDATA *,unsigned long *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Reset();
	virtual long Skip(unsigned long);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CContextMenuOnContextMenuArray
{
protected:
	virtual long _QueryNthContextMenu(unsigned int,HMENU__ *,unsigned int,unsigned int,unsigned int,unsigned int);
	virtual ~CContextMenuOnContextMenuArray();
public:
	long Initialize(IContextMenu * * const,unsigned int);
	virtual long GetCommandString(unsigned __int64,unsigned int,unsigned int *,char *,unsigned int);
	virtual long GetMenuRestrictions(DEFAULT_FOLDER_MENU_RESTRICTIONS,DEFAULT_FOLDER_MENU_RESTRICTIONS *);
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
	virtual long SetSite(IUnknown *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CContextMenuOnContextMenuArrayNoDuplicateVerbs
{
protected:
	CContextMenuOnContextMenuArrayNoDuplicateVerbs();
	long Initialize(IContextMenu * * const,unsigned int);
	virtual ~CContextMenuOnContextMenuArrayNoDuplicateVerbs();
public:
	virtual long QueryContextMenu(HMENU__ *,unsigned int,unsigned int,unsigned int,unsigned int);
};

struct CCountItemEntriesInGroup
{
	int Enum(ATL::CComPtr<IItem> const &,SelectionState const &);
};

class CDPA_Base<CSCParsedTerm,CTContainer_PolicyUnOwned<CSCParsedTerm> >
{
	static int _StandardDestroyCB(CSCParsedTerm *,void *);
};

class CDPA_Base<ICondition,CTContainer_PolicyUnOwned<ICondition> >
{
	static int _StandardDestroyCB(ICondition *,void *);
};

class CDPA_Base<IExplorerFrameCallback,CTContainer_PolicyUnOwned<IExplorerFrameCallback> >
{
	static int _StandardDestroyCB(IExplorerFrameCallback *,void *);
public:
	int Create(int);
	long AppendPtr(IExplorerFrameCallback *,int *);
};

class CDPA_Base<IFilterCondition,CTContainer_PolicyUnOwned<IFilterCondition> >
{
	static int _StandardDestroyCB(IFilterCondition *,void *);
};

class CDPA_Base<IFrameWorkItem,CTContainer_PolicyUnOwned<IFrameWorkItem> >
{
	static int _StandardDestroyCB(IFrameWorkItem *,void *);
};

class CDPA_Base<IItem,CTContainer_PolicyUnOwned<IItem> >
{
	static int _StandardDestroyCB(IItem *,void *);
public:
	int Create(int);
	long AppendPtr(IItem *,int *);
};

class CDPA_Base<IPropertyValue,CTContainer_PolicyRelease<IPropertyValue> >
{
	static int _StandardDestroyCB(IPropertyValue *,void *);
};

class CDPA_Base<IQueueItem2,CTContainer_PolicyRelease<IQueueItem2> >
{
	static int _StandardDestroyCB(IQueueItem2 *,void *);
};

class CDPA_Base<IUICommandHandler,CTContainer_PolicyReleaseObjectWithSite<IUICommandHandler> >
{
	static int _StandardDestroyCB(IUICommandHandler *,void *);
public:
	int Destroy();
};

class CDPA_Base<IUnknown,CTContainer_PolicyRelease<IUnknown> >
{
	static int _StandardDestroyCB(IUnknown *,void *);
public:
	int Create(int);
};

class CDPA_Base<IUpdatableItemSet,CTContainer_PolicyUnOwned<IUpdatableItemSet> >
{
	static int _StandardDestroyCB(IUpdatableItemSet *,void *);
};

class CDPA_Base<ORDERITEM,CTContainer_PolicyUnOwned<ORDERITEM> >
{
	static int _StandardDestroyCB(ORDERITEM *,void *);
public:
	int Create(int);
	int Destroy();
};

class CDPA_Base<UIViewHeader::ColumnElement,CTContainer_PolicyNewMem>
{
	static int _StandardDestroyCB(UIViewHeader::ColumnElement *,void *);
public:
	int Destroy();
	long InsertPtr(int,UIViewHeader::ColumnElement *,int *);
};

class CDPA_Base<_ITEMIDLIST_ABSOLUTE,CTContainer_PolicyUnOwned<_ITEMIDLIST_ABSOLUTE> >
{
	static int _StandardDestroyCB(_ITEMIDLIST_ABSOLUTE *,void *);
public:
	int Create(int);
	long AppendPtr(_ITEMIDLIST_ABSOLUTE *,int *);
};

class CDPA_Base<_ITEMID_CHILD,CTContainer_PolicyUnOwned<_ITEMID_CHILD> >
{
	static int _StandardDestroyCB(_ITEMID_CHILD *,void *);
public:
	int Create(int);
	long InsertPtr(int,_ITEMID_CHILD *,int *);
};

class CDPA_Base<unsigned short,CTContainer_PolicyUnOwned<unsigned short> >
{
	static int _StandardDestroyCB(unsigned short *,void *);
public:
	long AppendPtr(unsigned short *,int *);
};

struct CDSA<MENUIDMAP>
{
	~CDSA<MENUIDMAP>();
};

struct CDSA_Base<CNotifySubclassWndProc::NOTIFYREGISTERDATA>
{
	int Search(CNotifySubclassWndProc::NOTIFYREGISTERDATA const *,int,int (*)(CNotifySubclassWndProc::NOTIFYREGISTERDATA const *,CNotifySubclassWndProc::NOTIFYREGISTERDATA const *,__int64),__int64,unsigned int);
};

struct CDSA_Base<TRACKEDOPERATION>
{
	int Search(TRACKEDOPERATION const *,int,int (*)(TRACKEDOPERATION const *,TRACKEDOPERATION const *,__int64),__int64,unsigned int);
};

struct CDSA_Base<UISmartPropertyCollection::SmartRowInfo>
{
	int Destroy();
};

struct CDSA_Base<tagPROPVARIANT>
{
	int Create(int);
};

struct CDSA_Base<unsigned int>
{
	int Create(int);
	int Destroy();
	long AppendItem(unsigned int const *,int *);
};

class CDUIResourceManager
{
	CDUIResourceManager::REFCOUNTEDPARSER * _GetRefCountedParserForThread();
	long _InitParserForThread();
	long _RegisterElements();
	void _UnregisterElements(unsigned int);
public:
	long InitThread(unsigned int,DUI_RESOURCE_MANAGER_INIT_FLAGS);
	long ReloadParser(DEVICE_SCALE_FACTOR,DirectUI::DUIXmlParser * *);
	void UninitThread();
};

class CDelegateAccessibleImpl
{
protected:
	long _DefQueryInterface(_GUID const &,void * *);
	virtual ~CDelegateAccessibleImpl();
public:
	virtual long GetIDsOfNames(_GUID const &,unsigned short * *,unsigned int,unsigned long,long *);
	virtual long GetTypeInfo(unsigned int,unsigned long,ITypeInfo * *);
	virtual long GetTypeInfoCount(unsigned int *);
	virtual long Invoke(long,_GUID const &,unsigned long,unsigned short,tagDISPPARAMS *,tagVARIANT *,tagEXCEPINFO *,unsigned int *);
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
};

class CDelegateDropTarget
{
	void _ReleaseCurrentDropTarget();
protected:
	virtual ~CDelegateDropTarget();
public:
	long Init();
	virtual long DragEnter(IDataObject *,unsigned long,_POINTL,unsigned long *);
	virtual long DragLeave();
	virtual long DragOver(unsigned long,_POINTL,unsigned long *);
	virtual long Drop(IDataObject *,unsigned long,_POINTL,unsigned long *);
	virtual long IsEvaluatingEdpPolicy(int *);
	virtual long SetDropSourceEnterpriseId(unsigned short const *);
};

struct CDeleteAddressBarHistoryCommand
{
	virtual long Execute();
};

struct CDeskBar
{
	CDeskBar();
	virtual long IsRestricted(_GUID const *,unsigned long,tagVARIANT *,unsigned long *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long QueryService(_GUID const &,_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CDeskBarApp
{
protected:
	long _MergeSide(IBandSite *);
	virtual __int64 v_WndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	virtual int _OnCloseBar(int);
	virtual void _NotifyModeChange(unsigned long);
	virtual void _SetModeSide(unsigned int,unsigned int,HMONITOR__ *,int);
	virtual void _UpdateCaptionTitle();
	virtual ~CDeskBarApp();
	void _CreateBandSiteMenu();
	void _LeaveSide();
public:
	CDeskBarApp();
	virtual long Exec(_GUID const *,unsigned long,unsigned long,tagVARIANT *,tagVARIANT *);
	virtual long GetClassID(_GUID *);
	virtual long GetCommandString(unsigned __int64,unsigned int,unsigned int *,char *,unsigned int);
	virtual long GetSizeMax(_ULARGE_INTEGER *);
	virtual long HandleMenuMsg(unsigned int,unsigned __int64,__int64);
	virtual long HandleMenuMsg2(unsigned int,unsigned __int64,__int64,__int64 *);
	virtual long InitNew();
	virtual long InvokeCommand(_CMINVOKECOMMANDINFO *);
	virtual long IsDirty();
	virtual long Load(IPropertyBag *,IErrorLog *);
	virtual long Load(IStream *);
	virtual long QueryContextMenu(HMENU__ *,unsigned int,unsigned int,unsigned int,unsigned int);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long QueryService(_GUID const &,_GUID const &,void * *);
	virtual long Save(IStream *,int);
	virtual long TranslateAcceleratorIO(tagMSG *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CDesktopBrowserTarget
{
protected:
	virtual ~CDesktopBrowserTarget();
public:
	static long CreateInstance(IUnknown *,IShellNavigationTarget * *);
	virtual long NavigateToPidl(_ITEMIDLIST_ABSOLUTE const *,long);
	virtual long NavigateToUrl(unsigned short const *,long);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CDisabledCommandHandler
{
	virtual long UpdateProperty(unsigned int,_tagpropertykey const &,tagPROPVARIANT const *,tagPROPVARIANT *);
};

class CDockingBar
{
protected:
	CDockingBar();
	HMENU__ * _GetContextMenu();
	__int64 _CalcHitTest(unsigned __int64,__int64);
	__int64 _OnNCHitTest(unsigned __int64,__int64);
	int AppBarQueryPos(tagRECT *,unsigned int,HMONITOR__ *,tagRECT const *,_AppBarData *,int);
	int RectXform(tagRECT *,unsigned int,tagRECT const *,tagRECT *,int,unsigned int,HMONITOR__ *);
	long _NegotiateBorderRect(tagRECT *,tagRECT const *,int);
	long _TrackPopupMenu(tagPOINT const *);
	unsigned int _CalcDragPlace(tagPOINT &,HMONITOR__ * *);
	virtual __int64 _OnCommand(unsigned int,unsigned __int64,__int64);
	virtual __int64 v_WndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	virtual int _OnCloseBar(int);
	virtual void _GetChildPos(tagRECT *);
	virtual void _GetStyleForMode(unsigned int,long *,long *,HWND__ * *);
	virtual void _GrowShrinkBar(unsigned long);
	virtual void _HandleWindowPosChanging(tagWINDOWPOS *);
	virtual void _NotifyModeChange(unsigned long);
	virtual void _OnPostedPosRectChange();
	virtual void _OnRaise(unsigned int);
	virtual void _OnSize();
	virtual void _SetModeSide(unsigned int,unsigned int,HMONITOR__ *,int);
	virtual ~CDockingBar();
	void AppBarQuerySetPos(tagRECT *,unsigned int,HMONITOR__ *,tagRECT const *,_AppBarData *,int);
	void AppBarSetPos0(unsigned int,tagRECT const *,_AppBarData *);
	void _AdjustToChildSize();
	void _AppBarCallback(HWND__ *,unsigned int,unsigned __int64,__int64);
	void _AppBarOnCommand(unsigned int);
	void _AppBarOnPosChanged(_AppBarData *);
	void _AppBarOnWM(unsigned int,unsigned __int64,__int64);
	void _AppBarRegister(int);
	void _ChangeTopMost(unsigned int);
	void _ChangeWindowStateAndParent(unsigned int);
	void _DoHide(unsigned int);
	void _DragEnter(unsigned int,int,int,tagRECT *);
	void _DragLeave(int,int,int);
	void _DragTrack(unsigned int,int,int,tagRECT *,int);
	void _GetBorderRect(HMONITOR__ *,tagRECT *);
	void _HideRegister(int);
	void _InitPos4(int);
	void _Initialize();
	void _MoveSizeHelper(unsigned int,unsigned int,HMONITOR__ *,tagPOINT const *,tagRECT *,int,int);
	void _NegotiateRect(unsigned int,unsigned int,HMONITOR__ *,tagRECT *,int);
	void _OnActivate(unsigned __int64,__int64);
	void _ProtoRect(tagRECT *,unsigned int,unsigned int,HMONITOR__ *,tagPOINT const *);
	void _Recalc();
	void _RemoveToolbar(unsigned long);
	void _ResetZorder();
	void _SetVRect(tagRECT const *);
	void _SmoothDragPlace(unsigned int,unsigned int,HMONITOR__ *,tagPOINT *,tagRECT *);
	void _TrackSliding(int,int,tagRECT *,int,int);
public:
	virtual long CloseDW(unsigned long);
	virtual long ContextSensitiveHelp(int);
	virtual long Exec(_GUID const *,unsigned long,unsigned long,tagVARIANT *,tagVARIANT *);
	virtual long GetSite(_GUID const &,void * *);
	virtual long GetSizeMax(_ULARGE_INTEGER *);
	virtual long GetWindow(HWND__ * *);
	virtual long InitNew();
	virtual long IsDirty();
	virtual long Load(IPropertyBag *,IErrorLog *);
	virtual long Load(IStream *);
	virtual long OnFocusChangeIS(IUnknown *,int);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long QueryService(_GUID const &,_GUID const &,void * *);
	virtual long ResizeBorderDW(tagRECT const *,IUnknown *,int);
	virtual long Save(IPropertyBag *,int,int);
	virtual long Save(IStream *,int);
	virtual long SetSite(IUnknown *);
	virtual long ShowDW(int);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CDockingBarPropertyBag
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Read(unsigned short const *,tagVARIANT *,IErrorLog *);
	virtual long SetDataDWORD(ENUMPROPDATA,unsigned long);
	virtual long Write(unsigned short const *,tagVARIANT *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CDropDown
{
	HWND__ * _GetChildWindow();
	__int64 _HostSubclassProc(HWND__ *,unsigned int,unsigned __int64,__int64,unsigned __int64,unsigned __int64);
	__int64 _MouseProc(int,unsigned __int64,tagMOUSEHOOKSTRUCTEX *);
	__int64 _OnCreate(HWND__ *,tagCREATESTRUCTW *);
	__int64 _OnLButtonDown(__int64);
	__int64 _OnMouseMove(__int64);
	__int64 _OnPaint();
	__int64 _OnSize(unsigned int,int,int);
	__int64 _WndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	int _HookMouse(int);
	static CDropDown * s_pHookedDropDown;
	static HHOOK__ * s_hMouseHook;
	static _RTL_SRWLOCK s_srwMouseHookLock;
	static __int64 s_HostSubclassProc(HWND__ *,unsigned int,unsigned __int64,__int64,unsigned __int64,unsigned __int64);
	static __int64 s_MouseProc(int,unsigned __int64,__int64);
	static __int64 s_WndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	unsigned long _GetDropDownSizeSide(tagPOINT);
	void _HideDropDown(int);
	void _ShowDropDown();
	void _SubClassParent(int);
public:
	unsigned long Release();
};

struct CDropDummy
{
	virtual long DragEnter(IDataObject *,unsigned long,_POINTL,unsigned long *);
	virtual long DragLeave();
	virtual long DragOver(unsigned long,_POINTL,unsigned long *);
	virtual long Drop(IDataObject *,unsigned long,_POINTL,unsigned long *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CDropTargetWrap
{
	CDropTargetWrap(IDropTarget * *,unsigned int,HWND__ *);
	virtual long DragEnter(IDataObject *,unsigned long,_POINTL,unsigned long *);
	virtual long DragLeave();
	virtual long DragOver(unsigned long,_POINTL,unsigned long *);
	virtual long Drop(IDataObject *,unsigned long,_POINTL,unsigned long *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CDummyUnknown
{
	virtual long ContextSensitiveHelp(int);
	virtual long GetClassID(_GUID *);
	virtual long GetMode(FOLDER_ENUM_MODE *);
	virtual long GetWindow(HWND__ * *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SetMode(FOLDER_ENUM_MODE);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CEditAccessible
{
protected:
	virtual ~CEditAccessible();
public:
	CEditAccessible(HWND__ *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long accSelect(long,tagVARIANT);
	virtual long get_accKeyboardShortcut(tagVARIANT,unsigned short * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CElementIdentifier
{
	CElementIdentifier(CElementIdentifier const &);
	long Initialize(DirectUI::Element *);
};

struct CElementSpy
{
	static long s_CreateInstance(DirectUI::Element *,_GUID const &,void * *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CElementSpyBase
{
	long _GetDisplayName(unsigned short *,int);
public:
	virtual long GetChildren(IObjectArray * *);
	virtual long GetParent(IElementSpy * *);
	virtual long GetValue(ELEMENTSPYVALUE,tagVARIANT *);
};

struct CElementWithIUnknown
{
	static DirectUI::IClassInfo * Class;
};

class CElementWithSite
{
protected:
	virtual ~CElementWithSite();
public:
	static DirectUI::IClassInfo * Class;
	static long Register();
	virtual DirectUI::IClassInfo * GetClassInfoW();
	virtual long GetSite(_GUID const &,void * *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SetSite(IUnknown *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CEnumCommandBase
{
protected:
	long _AddSubCommand(IExplorerCommand *);
	virtual ~CEnumCommandBase();
public:
	virtual long Clone(IEnumExplorerCommand * *);
	virtual long Next(unsigned long,IExplorerCommand * *,unsigned long *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Reset();
	virtual long Skip(unsigned long);
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

struct CEventSource<IBrowserActivationEvent>
{
	long Advise(IBrowserActivationEvent *,unsigned long *);
};

struct CEventSource<IFocusAdviseSink>
{
	long Advise(IFocusAdviseSink *,unsigned long *);
	void CallSinks<DirectUI::Element *>(void (*)(IFocusAdviseSink *,DirectUI::Element *),DirectUI::Element *);
};

class CExecuteCommandBase
{
protected:
	long _GetQuerySource(_GUID const &,void * *);
	long _GetSelectedItem(unsigned long,_GUID const &,void * *);
	long _ShowFolder(_ITEMIDLIST_ABSOLUTE const *,int);
	unsigned long _SelectionCount();
	virtual ~CExecuteCommandBase();
public:
	CExecuteCommandBase();
	virtual long GetAssocElement(_GUID const &,void * *);
	virtual long GetSelection(_GUID const &,void * *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SetAssocElement(IAssociationElement *);
	virtual long SetDirectory(unsigned short const *);
	virtual long SetKeyState(unsigned long);
	virtual long SetNoShowUI(int);
	virtual long SetParameters(unsigned short const *);
	virtual long SetPosition(tagPOINT);
	virtual long SetSelection(IShellItemArray *);
	virtual long SetShowWindow(int);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CExecuteFolder
{
	void WriteExecuteTelemetry();
protected:
	virtual long _GetIDList(IShellItem *,_ITEMIDLIST_ABSOLUTE * *,int *);
public:
	virtual long Execute();
};

class CExecuteItem
{
	long _GetContextMenu(IContextMenu * *);
public:
	CExecuteItem(IShellItemArray *);
	long Execute();
	long SetAssociationOverride(unsigned long,unsigned short const *);
	~CExecuteItem();
};

class CExplorerCommandBase
{
protected:
	virtual ~CExplorerCommandBase();
public:
	virtual long CancelPreview(IShellItemArray *);
	virtual long EnumSubCommands(IEnumExplorerCommand * *);
	virtual long GetCanonicalName(_GUID *);
	virtual long GetDescription(IShellItemArray *,unsigned short * *);
	virtual long GetFlags(unsigned long *);
	virtual long GetIcon(IShellItemArray *,unsigned short * *);
	virtual long GetIconAsBitmap(IShellItemArray *,tagSIZE,HBITMAP__ * *);
	virtual long GetState(IShellItemArray *,int,unsigned long *);
	virtual long GetTitle(IShellItemArray *,unsigned short * *);
	virtual long GetToolTip(IShellItemArray *,unsigned short * *);
	virtual long GetToolTipTitle(IShellItemArray *,unsigned short * *);
	virtual long Invoke(IShellItemArray *,IBindCtx *);
	virtual long Preview(IShellItemArray *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CExplorerFrame
{
	int _FindEndOfGroup(unsigned long);
	int _FindToolbar(IUnknown *);
	int _FindToolbar(unsigned short const *);
	int _OnAppCommand(unsigned __int64,__int64);
	int _OnCreate(HWND__ *);
	long CreateFrameWindow(IETHREADPARAM *);
	long _CreateNavBar();
	long _GetDropTarget(IDropTarget * *);
	long _GetWarmScheduler(_GUID const &,void * *);
	long _InsertToolbar(FRAMETOOLBARITEM *);
	long _SetFrameMode(SHELL_BROWSER_FRAME_MODE,int);
	static int _DestroyFRAMETOOLBARITEM(FRAMETOOLBARITEM *,void *);
	virtual __int64 v_WndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	void ComputeInitialWindowLocation(_ITEMIDLIST_ABSOLUTE *,int *,int *,int *,int *);
	void ComputeMinimumFrameSize(int *,int *);
	void OnDPIChanged(HWND__ *,__int64);
	void PossiblyRestartInSecondaryProcessOnMove(bool);
	void _Cleanup();
	void _LoadFrameState(IETHREADPARAM *);
	void _NotifyFrameStateChanged();
	void _OnClose();
	void _OnCommand(unsigned __int64,__int64);
	void _OnDestroy();
	void _OnFSNotify(unsigned __int64,__int64);
	void _OnFrameShutdown();
	void _OnSize();
	void _SaveFrameState(PEFSAVEFLAGS,int);
	void _SendMessageToNavBar(unsigned int,unsigned __int64,__int64);
	void _SendMessageToToolbars(unsigned int,unsigned __int64,__int64);
	void _SyncInputObjects();
	void _UpdateFrameState();
	void _UpdateNavigationProgress(SHELL_NAVIGATION_BAND_PROGRESS_STATE,long,long);
	void _UpdateNavigationState(unsigned long);
	void _UpdateSearchState(SHELL_SEARCH_BAND_SEARCH_STATE);
	void _UpdateTargets(IBrowserHost *);
	void _UpdateToolbars();
protected:
	CExplorerFrame(IETHREADPARAM *);
	virtual void _SetDefaultFocus();
	virtual ~CExplorerFrame();
public:
	long Initialize(IETHREADPARAM *);
	static long CreateInstance(IETHREADPARAM *,CExplorerFrame * *);
	virtual long AddMessagePumpCallback(IExplorerFrameCallback *);
	virtual long AddMessagePumpOneTimeIdleCallback(IExplorerFrameCallback *);
	virtual long AddToolbar(IUnknown *,unsigned short const *,unsigned long);
	virtual long ContextSensitiveHelp(int);
	virtual long DragEnter(IDataObject *,unsigned long,_POINTL,unsigned long *);
	virtual long DragLeave();
	virtual long DragOver(unsigned long,_POINTL,unsigned long *);
	virtual long Drop(IDataObject *,unsigned long,_POINTL,unsigned long *);
	virtual long Exec(_GUID const *,unsigned long,unsigned long,tagVARIANT *,tagVARIANT *);
	virtual long FindToolbar(unsigned short const *,_GUID const &,void * *);
	virtual long GetBorderDW(IUnknown *,tagRECT *);
	virtual long GetBrowser(_GUID const &,void * *);
	virtual long GetFrameMode(SHELL_BROWSER_FRAME_MODE *);
	virtual long GetFrameOptions(unsigned long *);
	virtual long GetFrameRect(tagRECT *);
	virtual long GetPosition(long *,long *,long *,long *);
	virtual long GetWindow(HWND__ * *);
	virtual long HasFocusIO();
	virtual long IsEvaluatingEdpPolicy(int *);
	virtual long IsVisible();
	virtual long MakeVisible();
	virtual long OnBrowserClosed();
	virtual long OnBrowserCreated();
	virtual long OnBrowserStateChanged(unsigned long);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long QueryService(_GUID const &,_GUID const &,void * *);
	virtual long QueryStatus(_GUID const *,unsigned long,_tagOLECMD *,_tagOLECMDTEXT *);
	virtual long RemoveToolbar(IUnknown *,unsigned long);
	virtual long RequestBorderSpaceDW(IUnknown *,tagRECT const *);
	virtual long RestartInSeparateProcess(IShellItem *,int);
	virtual long SaveFrameState();
	virtual long SetBorderSpaceDW(IUnknown *,tagRECT const *);
	virtual long SetDropSourceEnterpriseId(unsigned short const *);
	virtual long SetFrameMode(SHELL_BROWSER_FRAME_MODE);
	virtual long SetFrameOptions(unsigned long);
	virtual long SetPosition(long,long,long,long,unsigned int);
	virtual long SetRibbonHeight(unsigned int);
	virtual long SetVisible(int);
	virtual long TranslateAcceleratorGlobal(tagMSG *);
	virtual long TranslateAcceleratorIO(tagMSG *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	void FrameMessagePump();
	void SetFrameTitle(unsigned short const *);
};

class CExplorerHostCreator
{
	void _CleanUp();
public:
	virtual long CreateHost(_GUID const &);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long RunHost();
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

// class __declspec(uuid("1f849cce-2546-4b9f-b03e-4004781bdc40")) ExplorerLauncher;
// IExplorerLauncher
// IExplorerHost = "50a87baa-5f79-4c31-b6b3-28f6f2d097e6"
class __declspec(uuid("5ac8c8f7-1cc7-46cb-8d7d-3cf14b64868c")) CExplorerLauncher : public IExplorerLauncher 
{
	void DetermineDefaultPolicyExplorerHost(_ITEMIDLIST_ABSOLUTE const *,_GUID *);
public:
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	//CLSID_DesktopExplorerHost = {682159d9-c321-47ca-b3f1-30e36b2ec8b9}
	// %SystemRoot%\explorer.exe /factory,{682159d9-c321-47ca-b3f1-30e36b2ec8b9}
	virtual long ShowWindowInHost(_GUID const &,_ITEMIDLIST_ABSOLUTE const *,LAUNCHEXPLORERFLAGS,tagPOINT,int);
	virtual long ShowWindowUsingDefaultPolicy(IUnknown *,_ITEMIDLIST_ABSOLUTE const *,LAUNCHEXPLORERFLAGS,tagPOINT,int);
	virtual long ShowWindowUsingDefaultPolicyAtRect(_ITEMIDLIST_ABSOLUTE const *,LAUNCHEXPLORERFLAGS,tagRECT const *,int);
};

class CExplorerRibbon
{
	bool ComputeCurrentSavedMinimizedState(bool);
	int _TestHookIsCommandEnabled(unsigned int,IUICommandHandler *);
	long LoadRibbonMinimizedState();
	long SaveRibbonMinimizedState();
	long UpdateRibbonHostWithHeight(IUIRibbon *);
	long _ConnectToView(bool);
	long _EnsureTaskScheduler();
	long _GetRibbonPropertyBool(_tagpropertykey const &,int *);
	long _GetRibbonPropertyStore(IPropertyStore * *);
	long _HookQATEvents(bool);
	long _SaveQATSettings();
	long _SetRibbonPropertyBool(_tagpropertykey const &,int);
	long _TestHookExecuteSubCommand(unsigned int,IUICommandHandler *,IUICollection *,unsigned int,UI_EXECUTIONVERB);
	virtual ~CExplorerRibbon();
	void MaybeMigrateMinimizedState();
	void _DoQATTelemetry(IUnknown *,QAT_CHANGED_ITEM);
	void _DoRibbonInvalidations(unsigned int,INVALIDATION_INFO const * const,unsigned __int64);
	void _InitializeRibbonBackgroundColor();
	void _ProfferToFrame(bool);
	void _SetInitialMinimizedState();
	void _SetModes(IShellItem *);
	void _SetRibbonVisibleProperty();
	void _UpdateHandlerCaches(unsigned int const * const,unsigned __int64);
	void _UpdateRibbon(INVALIDATION_INFO const * const,unsigned __int64,unsigned int const * const,unsigned __int64);
public:
	CExplorerRibbon();
	virtual long CreateRibbonUI(HWND__ *,IShellItem *);
	virtual long DestroyRibbonUI(int);
	virtual long GetIDsOfNames(_GUID const &,unsigned short * *,unsigned int,unsigned long,long *);
	virtual long GetRibbonAppMode(unsigned int *);
	virtual long GetRibbonBackgroundColor(unsigned long *);
	virtual long GetRibbonMinimized();
	virtual long GetRibbonVisible();
	virtual long GetTypeInfo(unsigned int,unsigned long,ITypeInfo * *);
	virtual long GetTypeInfoCount(unsigned int *);
	virtual long InvalidateCommands(COMMAND_SET);
	virtual long Invoke(long,_GUID const &,unsigned long,unsigned short,tagDISPPARAMS *,tagVARIANT *,tagEXCEPINFO *,unsigned int *);
	virtual long OnBrowserNavigated();
	virtual long OnChanged(UI_COLLECTIONCHANGE,unsigned int,IUnknown *,unsigned int,IUnknown *);
	virtual long OnCommandStateInvalidated();
	virtual long OnCreateUICommand(unsigned int,UI_COMMANDTYPE,IUICommandHandler * *);
	virtual long OnDestroyUICommand(unsigned int,UI_COMMANDTYPE,IUICommandHandler *);
	virtual long OnShellViewChanged();
	virtual long OnTabletModeChanged();
	virtual long OnViewChanged(unsigned int,UI_VIEWTYPE,IUnknown *,UI_VIEWVERB,int);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long QueryService(_GUID const &,_GUID const &,void * *);
	virtual long SetRibbonVisible(int);
	virtual long SetSite(IUnknown *);
	virtual long TestHookExecuteCommand(unsigned int);
	virtual long TestHookExecuteGalleryItem(unsigned int,unsigned int,RIBBONTESTVERB);
	virtual long TestHookGetCommandEnabled(unsigned int);
	virtual long TestHookGetCommandLabel(unsigned int,unsigned short * *);
	virtual long UpdateQuickAccessToolbar();
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CExplorerTask
{
	virtual long InternalResumeRT();
};

class CFSNotifyHelper
{
protected:
	long _CheckForReNavigateOrClose(IUnknown *,long,_ITEMIDLIST_ABSOLUTE const *,_ITEMIDLIST_ABSOLUTE const *);
	void _UnRegisterFSNotify();
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

class CFilterCondition
{
	~CFilterCondition();
public:
	static long s_CreateInstance(unsigned short const *,unsigned short const *,_tagpropertykey const &,FC_FLAGS,ICondition *,_GUID const &,void * *);
	virtual long AddFromArray(IObjectArray *);
	virtual long AddObject(IUnknown *);
	virtual long Clear();
	virtual long GetAt(unsigned int,_GUID const &,void * *);
	virtual long GetClassID(_GUID *);
	virtual long GetCondition(ICondition * *);
	virtual long GetCount(unsigned int *);
	virtual long GetFilterName(FC_FILTERNAME,unsigned short * *);
	virtual long GetPropertyKey(_tagpropertykey *);
	virtual long GetSizeMax(_ULARGE_INTEGER *);
	virtual long GetTypeFlags(FC_FLAGS *);
	virtual long IsDirty();
	virtual long Load(IStream *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long RemoveObjectAt(unsigned int);
	virtual long Save(IStream *,int);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CFilterGroupsByItem
{
	int Enum(ATL::CComPtr<IItem> const &,SelectionState const &);
};

struct CFilterItemsByGroup
{
	int Enum(ATL::CComPtr<IItem> const &,SelectionState const &);
};

class CFirstPageResults
{
	CFirstPageResults::CollectionIndirected * _MapToCollectionIndirected(IItemCollection *);
	int _DoRemoveOneFromIndirectedCollectionAtIndex(CFirstPageResults::CollectionIndirected *,unsigned int,int);
	int _RemoveLastAddedItem(IItemCollection *,int);
	int _UpdateCount(unsigned int,IItemCollection *,unsigned int,CFirstPageResults::SendNotificationFlag);
	long _CheckEnumerationDone();
	long _EnsureBackgroundThreadRunning();
	long _EnsureIndirection(IItemCollection *);
	unsigned int _CountLeafItems(IItemCollection *);
	void _CurtailOverallCountAt(IItemCollection *,unsigned int *);
	void _EnumerateCollection(IItemCollection *,unsigned int,int *);
	void _FirstPassComplete();
	void _KeepOnlyItemsThatFit(unsigned int);
public:
	virtual long Cancel();
	virtual long GetCountForCollection(IItemCollection *,tagCOUNT_TYPE,unsigned int *,tagVALUE_STATE *);
	virtual long Initialize(UIItemsView *);
	virtual long OnCancelled();
	virtual long OnCollectionChanged(unsigned int,tagCOLLECTION_CHANGE_STATE);
	virtual long OnGetCountDone(unsigned int,tagCOUNT_TYPE,long);
	virtual long OnItemMoved(IItem *,IItem *);
	virtual long OnItemTranslated(IItem *,IItem *);
	virtual long OnItemsAdded(unsigned int,unsigned int,unsigned int,tagCHANGE_INDEX_TYPE);
	virtual long OnItemsDeleted(unsigned int,unsigned int,unsigned int,tagCHANGE_INDEX_TYPE);
	virtual long OnPrepareDone(unsigned int,long);
	virtual long OnUniqueLeafCountChanged();
	virtual long QueryContinue();
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long RegisterGlobalSink(ICollectionEventSink *);
	virtual long RegisterSinkOnCollection(IItemCollection *,ICollectionEventSink *);
	virtual long RequiresGetCountTask();
	virtual long SetInitialSubsetAndMode(unsigned int,tagFIRSTPAGERESULTSMODE);
	virtual long SwitchOut();
	virtual long UnregisterSink(ICollectionEventSink *);
	virtual long ViewIsFull(unsigned int);
	virtual long ViewIsNotFull(unsigned int);
	virtual tagFIRSTPAGERESULTSSTATE GetFirstPageResultsState();
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	void RunBackgroundEnumeration();
	~CFirstPageResults();
};

class CFirstPageTask
{
	CFirstPageTask(CFirstPageResults *);
	virtual ~CFirstPageTask();
public:
	static long s_CreateInstance(CFirstPageResults *,_GUID const &,void * *);
	virtual long InternalResumeRT();
};

class CFloatingWindow
{
	__int64 _FloaterWndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	int _GetExitMargin();
	int _InterpolatePosition(int,int,float);
	int _MouseAtEdge(tagPOINT,int);
	static __int64 s_FloaterWndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	tagPOINT _GetFloaterPosition(float);
	void _MoveFloater(float);
	void _SizeFloater();
public:
	int ShouldHideFloater(tagPOINT);
	int ShouldShowFloater(tagPOINT);
	long AddToolbar(HWND__ *);
	long Create();
	void ReparentToolbars(int);
	void ShowFloater(int,unsigned long);
};

class CFocusManager
{
	CFocusManager();
	ItemIndex _GetGroupedItemIndex(UIItem *);
	~CFocusManager();
public:
	virtual long Advise(IFocusAdviseSink *,unsigned long *);
	virtual long GetFocusedElement(DirectUI::Element * *);
	virtual long GetFocusedItem(_GUID const &,void * *);
	virtual long GetFocusedSubItemIndex(int *);
	virtual long GetIdealFocusedItem(_GUID const &,void * *);
	virtual long GetIdealFocusedItemIndex(ItemIndex *);
	virtual long IsFocusedItemIdeal();
	virtual long OnCollectionEvent(IItemCollection *,CollectionEventParams const *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SetFocusedElement(DirectUI::Element *,__MIDL___MIDL_itf_itemsview_0000_0003_0001);
	virtual long SetUIItemsView(UIItemsView *);
	virtual long Unadvise(unsigned long);
	virtual long UpdateFocusedElement(DirectUI::Element *);
	virtual long UpdateFocusedSubItemIndex(DirectUI::Element *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual void OnListenerAttach(DirectUI::Element *);
	virtual void OnListenerDetach(DirectUI::Element *);
};

class CFolderNetworkDrive
{
	long _GetPath(IShellItemArray *,unsigned short * *);
public:
	virtual long Invoke(IShellItemArray *,IBindCtx *);
};

struct CFrameTask
{
	CFrameTask(IStream *,IFrameWorkItem *);
	virtual long InternalResumeRT();
};

class CFrameTaskManager
{
	long _EnsureWorkItemList();
	static int s_DispatchWorkItem(IFrameWorkItem *,void *);
	static int s_ReleaseWorkItemEntryCB(WORKITEMENTRY *,void *);
public:
	virtual long CancelAllWorkItems();
	virtual long DispatchCompletedWorkItems();
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SetSite(IUnknown *);
	virtual long StartWorkItem(IFrameWorkItem *,_GUID const &,int);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CFrameWorkItem
{
	virtual long GetDispatchable(int *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SetDispatchable(int);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CFrequentPlacesListWithUIProperties
{
protected:
	virtual long v_AddItemToDestItemCollection(IShellItem2 *,bool);
	virtual long v_Initialize();
	virtual void v_Clear();
public:
	long StorePinnedStatusForPlaces(tagSAFEARRAY *);
};

class CGalleryCommand<CSearchMRUEnumCommand>
{
protected:
	virtual ~CGalleryCommand<CSearchMRUEnumCommand>();
public:
	virtual long EnumSubCommands(IEnumExplorerCommand * *);
	virtual long GetCanonicalName(_GUID *);
	virtual long GetFlags(unsigned long *);
	virtual long GetIcon(IShellItemArray *,unsigned short * *);
	virtual long GetState(IShellItemArray *,int,unsigned long *);
	virtual long GetTitle(IShellItemArray *,unsigned short * *);
	virtual long GetToolTip(IShellItemArray *,unsigned short * *);
	virtual long Invoke(IShellItemArray *,IBindCtx *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CGalleryCommand<CSearchMorePropertiesEnum>
{
protected:
	virtual ~CGalleryCommand<CSearchMorePropertiesEnum>();
public:
	virtual long EnumSubCommands(IEnumExplorerCommand * *);
	virtual long GetCanonicalName(_GUID *);
	virtual long GetFlags(unsigned long *);
	virtual long GetIcon(IShellItemArray *,unsigned short * *);
	virtual long GetState(IShellItemArray *,int,unsigned long *);
	virtual long GetTitle(IShellItemArray *,unsigned short * *);
	virtual long GetToolTip(IShellItemArray *,unsigned short * *);
	virtual long Invoke(IShellItemArray *,IBindCtx *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CGalleryCommand<CSearchSendToEnumCommand>
{
protected:
	virtual ~CGalleryCommand<CSearchSendToEnumCommand>();
public:
	virtual long EnumSubCommands(IEnumExplorerCommand * *);
	virtual long GetCanonicalName(_GUID *);
	virtual long GetFlags(unsigned long *);
	virtual long GetIcon(IShellItemArray *,unsigned short * *);
	virtual long GetState(IShellItemArray *,int,unsigned long *);
	virtual long GetTitle(IShellItemArray *,unsigned short * *);
	virtual long GetToolTip(IShellItemArray *,unsigned short * *);
	virtual long Invoke(IShellItemArray *,IBindCtx *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CGalleryOnExplorerCommandBase
{
	long _BuildGallery(IUICollection *);
protected:
	CGalleryOnExplorerCommandBase(IExplorerCommand *,unsigned int,unsigned int);
	int _GetSubCommandHandlerCount();
	long _AddSubCommandHandler(IUICommandHandler *,int *);
	long _GetSubCommandHandler(int,_GUID const &,void * *);
	virtual bool _IsCommandSuitableForGallery(IExplorerCommand *,IShellItemArray *);
	virtual ~CGalleryOnExplorerCommandBase();
public:
	virtual long UpdateProperty(unsigned int,_tagpropertykey const &,tagPROPVARIANT const *,tagPROPVARIANT *);
};

struct CGalleryPropertySet
{
	CGalleryPropertySet(IUIImage *,int,int,UI_COMMANDTYPE);
	virtual long GetValue(_tagpropertykey const &,tagPROPVARIANT *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CGenericTabsetHandler
{
	long _GetTruncatedSelection(IFolderView2 *,IShellItemArray * *);
	static long s_AddSelectionTabset(IShellItemArray *,unsigned long,unsigned long,CSimpleHashTable<unsigned int,UI_CONTEXTAVAILABILITY,CDefaultHashPolicy<unsigned int>,CDefaultKeyCompare<unsigned int>,CDefaultResizePolicy,CDefaultRehashPolicy> *);
	static long s_PopulateTabsetsForItem(IShellItem *,unsigned long,DESIRED_TABSET_TYPE,CSimpleHashTable<unsigned int,UI_CONTEXTAVAILABILITY,CDefaultHashPolicy<unsigned int>,CDefaultKeyCompare<unsigned int>,CDefaultResizePolicy,CDefaultRehashPolicy> *);
	static void s_AddFolderTypeTabsetsForFolder(IShellFolder *,CSimpleHashTable<unsigned int,UI_CONTEXTAVAILABILITY,CDefaultHashPolicy<unsigned int>,CDefaultKeyCompare<unsigned int>,CDefaultResizePolicy,CDefaultRehashPolicy> *);
	static void s_AddTabsetFromKeyIfPresent(HKEY__ *,unsigned short const *,unsigned long,DESIRED_TABSET_TYPE,CSimpleHashTable<unsigned int,UI_CONTEXTAVAILABILITY,CDefaultHashPolicy<unsigned int>,CDefaultKeyCompare<unsigned int>,CDefaultResizePolicy,CDefaultRehashPolicy> *);
	static void s_UpdateLocationAsSelectionTabsets(IShellFolder *,CSimpleHashTable<unsigned int,UI_CONTEXTAVAILABILITY,CDefaultHashPolicy<unsigned int>,CDefaultKeyCompare<unsigned int>,CDefaultResizePolicy,CDefaultRehashPolicy> *);
	static void s_UpdateSelectionTabsets(IShellItemArray *,IShellFolder *,CSimpleHashTable<unsigned int,UI_CONTEXTAVAILABILITY,CDefaultHashPolicy<unsigned int>,CDefaultKeyCompare<unsigned int>,CDefaultResizePolicy,CDefaultRehashPolicy> *);
	void _UpdateLocationTabsets(IFolderView2 *);
	void _UpdateLocationTabsets(IFolderView2 *,IShellFolder *);
	void _UpdateSelectionTabsets(IFolderView2 *);
public:
	virtual long Execute(unsigned int,UI_EXECUTIONVERB,_tagpropertykey const *,tagPROPVARIANT const *,IUISimplePropertySet *);
	virtual long OnEnableSelectionTabset(unsigned int,UI_CONTEXTAVAILABILITY_CB,unsigned int);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long UpdatePerHandlerCache(int);
	virtual long UpdateProperty(unsigned int,_tagpropertykey const &,tagPROPVARIANT const *,tagPROPVARIANT *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CGetLastSelectedIndex
{
	int Enum(ATL::CComPtr<IItem> const &,SelectionState const &);
};

class CGhostingManager
{
	long _UpdateElementGhostingTreeFromItemsHost(DirectUI::Element *);
public:
	virtual int IsGhosted(IItem *);
	virtual long OnGroupByChanged();
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SetGhostedSelection(int);
	virtual long SetUIItemsView(UIItemsView *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CGlobalFolderSettings
{
	virtual long Get(DEFFOLDERSETTINGS *,int);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Set(DEFFOLDERSETTINGS const *,int,unsigned int);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CGlobalObject
{
	CGlobalObject(long (*)(_GUID const &,void * *));
	long GetCachedObject(_GUID const &,void * *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long QueryObject(_GUID const &,_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	void Uninitialize();
};

class CHsbRgbConversion
{
	static double s_HuetoRgb(double,double,double);
	static void s_HsbToHsl(unsigned long,float *,float *,float *);
	static void s_HslToRgb(float,float,float,unsigned char *,unsigned char *,unsigned char *);
public:
	CHsbRgbConversion(unsigned long);
};

class CIEFrameAuto
{
	static long s_cIEFrameAuto;
protected:
	CIEFrameAuto(IUnknown *);
	HWND__ * _GetHWND();
	int _IsNavigationPending();
	int _IsWindowMoveable();
	long _BrowseObject(_ITEMIDLIST_ABSOLUTE const *,unsigned int);
	long _NavigateHelper(IUri *,tagVARIANT *,tagVARIANT *,tagVARIANT *);
	long _PidlFromIUriEtc(unsigned int,IUri *,_ITEMIDLIST_ABSOLUTE * *);
	long _get_Location(unsigned short * *,unsigned int);
	virtual CConnectionPoint * _FindCConnectionPointNoRef(int,_GUID const &);
	virtual long v_InternalQueryInterface(_GUID const &,void * *);
	virtual ~CIEFrameAuto();
	void _ClearPropertyList();
public:
	virtual long ClientToWindow(int *,int *);
	virtual long EnumConnectionPoints(IEnumConnectionPoints * *);
	virtual long Exec(_GUID const *,unsigned long,unsigned long,tagVARIANT *,tagVARIANT *);
	virtual long ExecWB(OLECMDID,OLECMDEXECOPT,tagVARIANT *,tagVARIANT *);
	virtual long GetIDsOfNames(_GUID const &,unsigned short * *,unsigned int,unsigned long,long *);
	virtual long GetProperty(unsigned short *,tagVARIANT *);
	virtual long GetTypeInfo(unsigned int,unsigned long,ITypeInfo * *);
	virtual long GetTypeInfoCount(unsigned int *);
	virtual long GoBack();
	virtual long GoForward();
	virtual long GoHome();
	virtual long GoSearch();
	virtual long Invoke(long,_GUID const &,unsigned long,unsigned short,tagDISPPARAMS *,tagVARIANT *,tagEXCEPINFO *,unsigned int *);
	virtual long Navigate(unsigned short *,tagVARIANT *,tagVARIANT *,tagVARIANT *,tagVARIANT *);
	virtual long Navigate2(tagVARIANT *,tagVARIANT *,tagVARIANT *,tagVARIANT *,tagVARIANT *);
	virtual long OnInvoke(long,_GUID const &,unsigned long,unsigned short,tagDISPPARAMS *,tagVARIANT *,tagEXCEPINFO *,unsigned int *);
	virtual long PutProperty(unsigned short *,tagVARIANT);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long QueryService(_GUID const &,_GUID const &,void * *);
	virtual long QueryStatus(_GUID const *,unsigned long,_tagOLECMD * const,_tagOLECMDTEXT *);
	virtual long QueryStatusWB(OLECMDID,OLECMDF *);
	virtual long Quit();
	virtual long Refresh();
	virtual long Refresh2(tagVARIANT *);
	virtual long SetOwner(IUnknown *);
	virtual long ShowBrowserBar(tagVARIANT *,tagVARIANT *,tagVARIANT *);
	virtual long Stop();
	virtual long get_AddressBar(short *);
	virtual long get_Application(IDispatch * *);
	virtual long get_Busy(short *);
	virtual long get_Container(IDispatch * *);
	virtual long get_Document(IDispatch * *);
	virtual long get_FullName(unsigned short * *);
	virtual long get_FullScreen(short *);
	virtual long get_HWND(__int64 *);
	virtual long get_Height(long *);
	virtual long get_Left(long *);
	virtual long get_LocationName(unsigned short * *);
	virtual long get_LocationURL(unsigned short * *);
	virtual long get_MenuBar(short *);
	virtual long get_Name(unsigned short * *);
	virtual long get_Offline(short *);
	virtual long get_Parent(IDispatch * *);
	virtual long get_Path(unsigned short * *);
	virtual long get_ReadyState(tagREADYSTATE *);
	virtual long get_RegisterAsBrowser(short *);
	virtual long get_RegisterAsDropTarget(short *);
	virtual long get_Resizable(short *);
	virtual long get_Silent(short *);
	virtual long get_StatusBar(short *);
	virtual long get_StatusText(unsigned short * *);
	virtual long get_TheaterMode(short *);
	virtual long get_ToolBar(int *);
	virtual long get_Top(long *);
	virtual long get_TopLevelContainer(short *);
	virtual long get_Type(unsigned short * *);
	virtual long get_Visible(short *);
	virtual long get_Width(long *);
	virtual long put_AddressBar(short);
	virtual long put_FullScreen(short);
	virtual long put_Height(long);
	virtual long put_Left(long);
	virtual long put_MenuBar(short);
	virtual long put_Offline(short);
	virtual long put_RegisterAsBrowser(short);
	virtual long put_RegisterAsDropTarget(short);
	virtual long put_Resizable(short);
	virtual long put_Silent(short);
	virtual long put_StatusBar(short);
	virtual long put_StatusText(unsigned short *);
	virtual long put_TheaterMode(short);
	virtual long put_ToolBar(int);
	virtual long put_Top(long);
	virtual long put_Visible(short);
	virtual long put_Width(long);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CIEFrameAutoProp
{
	long SetValue(tagVARIANT *,IWebBrowser2 *);
	void _VariantClear();
};

struct CIItemCompare<0,1>
{
	static int CompareKey(ATL::CComPtr<IItem> const &,ATL::CComPtr<IItem> const &);
};

class CISFMenuCallback
{
	int _IsVisible(_ITEMID_CHILD const *);
	long _GetObject(tagSMDATA *,_GUID const &,void * *);
	long _GetSFInfo(tagSMDATA *,tagSMINFO *);
	long _SetObject(tagSMDATA *,_GUID const &,void * *);
	virtual ~CISFMenuCallback();
public:
	long Initialize(IUnknown *);
	virtual long CallbackSM(tagSMDATA *,unsigned int,unsigned __int64,__int64);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SetSite(IUnknown *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CImpIConnectionPointContainer
{
	virtual long FindConnectionPoint(_GUID const &,IConnectionPoint * *);
};

class CImpIDispatch
{
protected:
	long GetIDsOfNames(_GUID const &,unsigned short * *,unsigned int,unsigned long,long *);
	long GetTypeInfo(unsigned int,unsigned long,ITypeInfo * *);
	long Invoke(long,_GUID const &,unsigned long,unsigned short,tagDISPPARAMS *,tagVARIANT *,tagEXCEPINFO *,unsigned int *);
};

struct CImpIExpDispSupport
{
	virtual long FindConnectionPoint(_GUID const &,IConnectionPoint * *);
	virtual long OnTranslateAccelerator(tagMSG *,unsigned long);
};

class CImpWndProc
{
protected:
	static __int64 s_WndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
};

class CInplaceRename
{
	UIProperty * _FindNameProperty(DirectUI::Element *);
	__int64 _EditSubclassProc(HWND__ *,unsigned int,unsigned __int64,__int64,unsigned __int64,unsigned __int64);
	__int64 _MouseProc(int,unsigned __int64,tagMOUSEHOOKSTRUCTEX *);
	int _HookMouse(int);
	int _IsDBCSorIMEEnabled();
	int _IsRenamable(DirectUI::Element *);
	long _PlaceAndShowControl(UIProperty *);
	static CInplaceRename * s_pihCurrentRename;
	static HHOOK__ * s_hMouseHook;
	static _RTL_SRWLOCK s_srwHookLock;
	static __int64 s_EditSubclassProc(HWND__ *,unsigned int,unsigned __int64,__int64,unsigned __int64,unsigned __int64);
	static __int64 s_MouseProc(int,unsigned __int64,__int64);
	static unsigned short const * const s_szIMECompPos;
	static void s_TimerCallback(GMA_ACTIONINFO *);
	void _CleanupRenameFromState();
	void _DrawCompositionLine(HWND__ *,HDC__ *,HFONT__ *,unsigned short const *,unsigned char const *,unsigned int,unsigned int,unsigned int);
	void _EndComposition();
	void _EndEdit(ENDEDIT);
	void _IMEReplaceSelection(HWND__ *,unsigned short *);
	void _InsertComposition(HWND__ *,unsigned __int64,__int64);
	void _PaintComposition(HWND__ *);
	void _PostBeginRenameAsyncEvent();
	void _SetCurrentFont(DirectUI::Element *);
	void _SetInitialSelection();
	void _SizeIME(HWND__ *);
	void _TimerCallback();
	~CInplaceRename();
public:
	CInplaceRename(ISelectionManager *);
	long Initialize(UIItemsView *);
	static UID BeginRenameAsyncEvent;
	static UID EditPasteEvent;
	static UID ScrollToFocusedItem;
	virtual int HasUserBegunTyping();
	virtual int IsRenaming();
	virtual long BeginRename();
	virtual long EndRename();
	virtual long FocusChanged(DirectUI::Element *);
	virtual long HandleInputEvent(DirectUI::InputEvent *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SetSingleClickMode(int);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual void OnListenedEvent(DirectUI::Element *,DirectUI::Event *);
	virtual void OnListenedPropertyChanged(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnListenerDetach(DirectUI::Element *);
};

class CInputObjectContainer
{
	int _IndexOfChild(IInputObject *);
	static int INPUTOBJDATADestroyCallback(INPUTOBJ_CHILDDATA *,void *);
	void _FixUpActiveIO();
protected:
	long _ActivateNextChild(IInputObject *,int,int,tagMSG *);
	long _AddInputObject(IInputObject *,unsigned long);
	long _CycleFocus(tagMSG *);
	virtual void _SetDefaultFocus();
	virtual ~CInputObjectContainer();
	void RestoreLastFocus(SAVE_FOCUS_TARGET,HWND__ *);
	void SaveLastFocus(SAVE_FOCUS_TARGET);
	void _ReleaseInputObjects();
public:
	virtual long HasFocusIO();
	virtual long IsRestoringFocus();
	virtual long OnFocusChangeIS(IUnknown *,int);
	virtual long TranslateAcceleratorGlobal(tagMSG *);
	virtual long TranslateAcceleratorIO(tagMSG *);
	virtual long UIActivateIO(int,tagMSG *);
};

class CInternetToolbar
{
	class CITBandSite
	{
		CITBandSite();
		static __int64 s_RebarSubclassWndProc(HWND__ *,unsigned int,unsigned __int64,__int64,unsigned __int64,unsigned __int64);
		virtual long AddBand(IUnknown *);
		virtual long Exec(_GUID const *,unsigned long,unsigned long,tagVARIANT *,tagVARIANT *);
		virtual long HasFocusIO();
	protected:
		int _SetMinDimensions();
		virtual long _Initialize(HWND__ *);
		virtual long _OnContextMenu(unsigned __int64,__int64);
		virtual void _SetBorderStyles(int,int);
		virtual void v_SetTabstop(tagREBARBANDINFOW *);
	};

protected:
	CBandItemData * _AddNewBand(IDeskBand *,unsigned long);
	IStream * _GetITBarStream(unsigned long);
	int _FindBandByClsid(_GUID const &);
	int _IsBandVisible(unsigned int);
	int _ShowBands(unsigned int);
	long _CreateBands();
	long _DestroyBand(int);
	long _GetPersistedBand(_GUID const &,_GUID const &,void * *);
	long _LoadDefaultSettings();
	long _LoadStream(IStream *);
	long _LoadUpgradeSettings(unsigned long);
	long _RegLoadExternalBandInfo(_GUID const &,CInternetToolbar::EXTERNALBANDINFO *);
	long _ReloadLayout();
	long _SetBandAvailability(int,int);
	long _ShowExternalBand(tagBANDSAVE *,int,unsigned long);
	long _ShowLinks(tagBANDSAVE *);
	long _ShowMenu(tagBANDSAVE *);
	long _UpdateToolbarDisplay(unsigned int,int);
	static __int64 SizableWndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	unsigned long _EstimateMenuWidth(HMENU__ *);
	virtual ~CInternetToolbar();
	void _BuildSaveStruct(COOLBARSAVE *);
	void _EnsureAllBandsShown();
	void _InitThemeData();
	void _LoadExternalBandInfoWorker();
	void _MergeWithStandardIE7Bands(COOLBARSAVE *,COOLBARSAVE *);
	void _OnCommand(unsigned __int64,__int64);
	void _RestoreSaveStruct(COOLBARSAVE const *);
	void _SetBackground();
	void _ShowBandCommon(tagBANDSAVE *,CBandItemData *,int);
	void _ShowContextMenu(HWND__ *,__int64,tagRECT const *);
	void _ShowVisible(unsigned long,int);
	void _TrackSliding(tagRECT *);
	void _TryLoadIE3Settings();
	void _UpdateAutoExpandMenus();
	void _UpdateLocking();
	void _UpdateMenuStatusForExternalBands();
public:
	CInternetToolbar();
	virtual __int64 v_WndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	virtual long AddBitmap(_GUID const *,unsigned int,unsigned int,tagTBADDBITMAP *,__int64 *,unsigned long);
	virtual long AddButtons(_GUID const *,unsigned int,_TBBUTTON const *);
	virtual long AddStdBrowserButtons();
	virtual long AddString(_GUID const *,HINSTANCE__ *,unsigned __int64,__int64 *);
	virtual long CloseDW(unsigned long);
	virtual long ContextSensitiveHelp(int);
	virtual long CreateBand(_GUID const &,int,int,_GUID const &,void * *);
	virtual long DestroyBand(_GUID const &);
	virtual long Exec(_GUID const *,unsigned long,unsigned long,tagVARIANT *,tagVARIANT *);
	virtual long GetBitmapSize(unsigned int *);
	virtual long GetButton(_GUID const *,unsigned int,_TBBUTTON *);
	virtual long GetClassID(_GUID *);
	virtual long GetSite(_GUID const &,void * *);
	virtual long GetSizeMax(_ULARGE_INTEGER *);
	virtual long GetState(_GUID const *,unsigned int,unsigned int *);
	virtual long GetVisibleBandCount(unsigned int *);
	virtual long GetWindow(HWND__ * *);
	virtual long HideBackForwardButton(_GUID const *,unsigned int);
	virtual long InitNew();
	virtual long IsDirty();
	virtual long IsMenuBandVisible();
	virtual long Load(IStream *);
	virtual long ModifyButton(_GUID const *,unsigned int,_TBBUTTON *);
	virtual long OnFocusChangeIS(IUnknown *,int);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long QueryService(_GUID const &,_GUID const &,void * *);
	virtual long QueryStatus(_GUID const *,unsigned long,_tagOLECMD * const,_tagOLECMDTEXT *);
	virtual long ResizeBorderDW(tagRECT const *,IUnknown *,int);
	virtual long Save(IStream *,int);
	virtual long SendToolbarMsg(_GUID const *,unsigned int,unsigned __int64,__int64,__int64 *);
	virtual long SetBandAvailability(_GUID const &,int);
	virtual long SetCommandTarget(IUnknown *,_GUID const *,unsigned long);
	virtual long SetFolderTypeTheme(unsigned short const *);
	virtual long SetImageList(_GUID const *,_IMAGELIST *,_IMAGELIST *,_IMAGELIST *);
	virtual long SetSite(IUnknown *);
	virtual long SetState(_GUID const *,unsigned int,unsigned int);
	virtual long ShowDW(int);
	virtual long TranslateAcceleratorIO(tagMSG *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CItemActionsManager
{
	bool IsInSelectMode();
	bool IsSingleClickToActivateEnabled(DirectUI::InputEvent const *);
	bool _ItemActivate(DirectUI::InputEvent *);
	int _IsCheckboxTarget(DirectUI::MouseEvent *);
	void _BeginDragSource(DirectUI::MouseDragEvent *);
	void _ShowContextMenu(DirectUI::MouseEvent *);
public:
	CItemActionsManager(ISelectionManager *);
	virtual int GetMightBeShowingContextMenu();
	virtual long HandleInputEvent(DirectUI::InputEvent *);
	virtual long OnItemsReused();
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SetSingleClickMode(int);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual void SetContextMenuCleared();
};

class CItemDevirtualizer
{
	CItemDevirtualizer(CItemDevirtualizerInitialState *,IItem *,DEVIRTUALIZATION_TYPE);
	int _ShouldContinueDevirtualization();
	long _Devirtualize();
	long _DevirtualizeGroupItem(IItemCollection *,IItem *,ICollectionCache *,ItemIndex const *,ItemIndex const *,unsigned int);
	long _DevirtualizeWorker(ItemIndex const *);
	long _EnsureDevirtualized();
	long _FindIncludeArrayStartOffset(ItemIndex const *,unsigned __int64 *,ItemIndex *);
	long _GetIndex(IItem *,ItemIndex *);
	long _GetLeafCount(CCoSimpleArray<SelectionState,4294967294,CSimpleArrayStandardCompareHelper<SelectionState> > const &,int *,int);
	long _GetRootItemAndCollectionCache(IItem * *,ICollectionCache * *);
	long _GetSelectionStateIndexFromItem(IItem *,CCoSimpleArray<SelectionState,4294967294,CSimpleArrayStandardCompareHelper<SelectionState> > const *,int *);
	long _InitMVPEcludeArrayFromGroupItem(IItemCollection *,IItem *,ICollectionCache *);
	long _InitMVPExcludeArray(IItem *,ICollectionCache *);
public:
	static long s_Create(CItemDevirtualizerInitialState *,IItem *,DEVIRTUALIZATION_TYPE,_GUID const &,void * *);
	virtual int IsDevirtualized();
	virtual long GetAt(unsigned int,_GUID const &,void * *);
	virtual long GetCount(unsigned int *);
	virtual long GetElapsedFullDevirtualizationTime(unsigned long *);
	virtual long GetEstimatedCount(unsigned int *);
	virtual long GetValue(ITEMDEVIRTUALIZERVALUE,tagVARIANT *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CItemDevirtualizerInitialState
{
	CItemDevirtualizerInitialState(IItem *,int,ICollectionCache *);
	long _Initialize(CCoSimpleArray<SelectionState,4294967294,CSimpleArrayStandardCompareHelper<SelectionState> > const *);
public:
	static long s_Create(CCoSimpleArray<SelectionState,4294967294,CSimpleArrayStandardCompareHelper<SelectionState> > const *,IItem *,int,ICollectionCache *,CItemDevirtualizerInitialState * *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CItemEventSinkWrapper
{
protected:
	long _PostEvent(ItemEventParams const &);
	virtual IUnknown * _GetSender();
public:
	CItemEventSinkWrapper(IItem *,HWND__ *,IEventQueue *,void *,long (*)(void *,IUnknown *,int,void *,tagEVENTACTION *),long (*)(void *,IUnknown *,void *));
	long Advise();
	virtual long Dispatch(void *);
	virtual long OnCancelled(IItem *);
	virtual long OnItemChanged(ITEM_CHANGED_TYPE,IItem *,IPropertyKeyStore *);
	virtual long OnItemChanging(ITEM_CHANGED_TYPE,IItem *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Unadvise();
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CItemFinder
{
	long _DoesItemNameMatch(IItem *,unsigned short const *,IItem * *,int *);
	long _EnsureStart();
	long _FindMatchInCollection(IItemCollection *,unsigned int,int,tagVARIANT const &,IItem * *,unsigned int *);
	long _GetNextCollection();
	void _DoesItemIsSelectedMatch(IItem *,int,IItem * *,int *);
public:
	CItemFinder(IItemCollection *);
	long FindNextMatch(int,tagVARIANT const &,IItem * *,tagINDEX_AND_VERSION *,unsigned int,unsigned int *);
	long SetStart(IItem *);
};

class CItemGalleryOnExplorerCommand
{
	bool _IsCommandSelected(IExplorerCommand *,IShellItemArray *);
	long _GetSelectedItem(unsigned int *);
	virtual bool _IsCommandSuitableForGallery(IExplorerCommand *,IShellItemArray *);
	virtual long _AddCommandToGallery(unsigned int,IExplorerCommand *,IShellItemArray *,IUICollection *);
	virtual ~CItemGalleryOnExplorerCommand();
public:
	CItemGalleryOnExplorerCommand(IExplorerCommand *,unsigned int);
	virtual long Execute(unsigned int,UI_EXECUTIONVERB,_tagpropertykey const *,tagPROPVARIANT const *,IUISimplePropertySet *);
	virtual long UpdateProperty(unsigned int,_tagpropertykey const &,tagPROPVARIANT const *,tagPROPVARIANT *);
};

class CItemMap<SelectionState,CIItemHashPolicy,CIItemCompare<0,1>,CDefaultResizePolicy>
{
	long _FindUnrealizedItem(ATL::CComPtr<IItem>,unsigned __int64 *);
public:
	long AddItem(ATL::CComPtr<IItem> const &,SelectionState const &);
	long DeleteItem(ATL::CComPtr<IItem> const &);
	long GetItem(ATL::CComPtr<IItem> const &,SelectionState &);
	void EnumCallback<CAnyGroupsSelected>(CAnyGroupsSelected &);
	void EnumCallback<CAnyItemEntriesInGroup>(CAnyItemEntriesInGroup &);
	void EnumCallback<CAnyItemsSelected>(CAnyItemsSelected &);
	void EnumCallback<CCopyEntriesToArray>(CCopyEntriesToArray &);
	void EnumCallback<CCountExplicitGroupEntries>(CCountExplicitGroupEntries &);
	void EnumCallback<CCountItemEntriesInGroup>(CCountItemEntriesInGroup &);
	void EnumCallback<CFilterGroupsByItem>(CFilterGroupsByItem &);
	void EnumCallback<CFilterItemsByGroup>(CFilterItemsByGroup &);
	void EnumCallback<CGetLastSelectedIndex>(CGetLastSelectedIndex &);
	void EnumCallback<CLocateExplicitGroupStateForMemberItem>(CLocateExplicitGroupStateForMemberItem &);
	void EnumCallback<CSelectionState::CCopyEntriesToHashTable>(CSelectionState::CCopyEntriesToHashTable &);
	void EnumCallback<CSelectionState::CInvertStates>(CSelectionState::CInvertStates &);
};

class CItemsView
{
	class CItemObjectCollection
	{
		long _DevirtualizeCollection(IItemCollection *,unsigned int,unsigned int);
	protected:
		long _Initialize(IItemCollection *,ICollectionCache *,IFirstPageResults *);
		virtual long v_EnsureDevirtualized();
	public:
		static long s_Create(IItemCollection *,ICollectionCache *,IFirstPageResults *,_GUID const &,void * *);
		virtual IItemCollection * GetCollection();
		virtual int IsDevirtualized();
		virtual long AddFromArray(IObjectArray *);
		virtual long AddObject(IUnknown *);
		virtual long Clear();
		virtual long GetAt(unsigned int,_GUID const &,void * *);
		virtual long GetCount(unsigned int *);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual long RemoveObjectAt(unsigned int);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
		virtual ~CItemObjectCollection();
	};

	struct CItemsViewScroller
	{
		static long s_Create(UIItemsView *,_GUID const &,void * *);
		virtual long CanScroll(tagPOINT const *,int *);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual long ScrollLine(int,unsigned short);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
	};

	class COrderedItemObjectCollection
	{
		long _GetValidStartingItem(IItem *,IItem * *);
		long _Initialize(IItem *,IItemCollection *,ICollectionCache *,IItem *);
		virtual long v_EnsureDevirtualized();
	public:
		static long s_Create(IItem *,IItemCollection *,ICollectionCache *,IItem *,_GUID const &,void * *);
		virtual long GetAt(unsigned int,_GUID const &,void * *);
	};

	long _GetCachedItemObjectArray(_GUID const &,void * *);
	long _GetNextDefaultIndex(int,unsigned long,int *);
	long _GetNextFocusedIndex(int,int *);
	long _GetNextSelectedIndex(int,int *);
	long _GetNextSelectionMarkIndex(int *);
	long _GetSelectedItemCount(unsigned int *);
	long _GetSelectedItems(tagLC_ITEM_SET_ORDER,_GUID const &,void * *);
	long _Initialize(HWND__ *,IListControlHost *,IViewSettings *);
	long _OnGroupByChanged();
	long _RegisterViewSettings(IViewSettings *);
	long _UpdateViewsFolderFlags();
	void UpdateShowCheckboxes(FOLDERFLAGS);
	void _DestroyUIItemsView();
	void _DetectThemedMode();
	void _ReleaseViewSettings();
	void _UpdateSubsetStatus(FOLDERFLAGS);
public:
	CItemsView();
	virtual long AutoSizeColumn(_tagpropertykey const &,int);
	virtual long CanScroll(tagPOINT const *,int *);
	virtual long Cancel();
	virtual long CollapseAllGroups();
	virtual long ContextSensitiveHelp(int);
	virtual long CreateControl(HWND__ *,IListControlHost *,IViewSettings *);
	virtual long Destroy();
	virtual long DismissEdit();
	virtual long DragSelectItem(tagLCITEM const *);
	virtual long EditItemLabel(tagLCITEM const *,tagPOINT const *);
	virtual long EnableAlphaShadow(int);
	virtual long EnsureVisible(tagLCITEM const &);
	virtual long ExpandAllGroups();
	virtual long FindItem(IItem *,tagLCITEM *);
	virtual long FindItemAndIndex(IItem *,tagLCITEM *);
	virtual long GetAnchorItemAndCount(IItem * *,unsigned int *);
	virtual long GetClassID(_GUID *);
	virtual long GetColor(VPCOLORFLAGS,unsigned long *);
	virtual long GetFocusedItem(tagLCITEM *);
	virtual long GetFont(tagLOGFONTW *);
	virtual long GetIDList(_ITEMIDLIST_ABSOLUTE * *);
	virtual long GetInsertMark(tagLCITEM *);
	virtual long GetInsertMarkRect(tagRECT *);
	virtual long GetItem(int,IItem * *);
	virtual long GetItemCount(tagLC_ITEM_SET_TYPE,unsigned int *);
	virtual long GetItemHeight(int *);
	virtual long GetItemPosition(tagLCITEM const &,tagPOINT *);
	virtual long GetItemRect(int,tagRECT *);
	virtual long GetItemSize(int *,int *);
	virtual long GetItemSpacing(int *,int *);
	virtual long GetItemState(tagLCITEM const &,LC_ITEM_FLAGS *);
	virtual long GetItemToTranslate(IItem * *);
	virtual long GetItems(tagLC_ITEM_SET_TYPE,tagLC_ITEM_SET_ORDER,_GUID const &,void * *);
	virtual long GetNextIndex(int,tagLC_NEXT_INDEX_STATE,unsigned long,int *);
	virtual long GetScrollingWindow(_GUID const &,void * *);
	virtual long GetSite(_GUID const &,void * *);
	virtual long GetTransparentBackground(int *);
	virtual long GetVisibleItemCount(unsigned int *);
	virtual long GetWindow(HWND__ * *);
	virtual long GhostSelectedItems(int);
	virtual long HasFocusIO();
	virtual long HitTestInsertMark(tagPOINT const *,tagLCITEM *);
	virtual long HitTestItem(tagPOINT const *,int,tagLCITEM *);
	virtual long HitTestItem(tagPOINT,int *);
	virtual long InvalidateEmptyText();
	virtual long InvalidateTryHarder();
	virtual long InvokeSelectionContextMenu(int);
	virtual long MapPoint(tagLC_POINT_TYPE,tagPOINT const *,tagLC_POINT_TYPE,tagPOINT *);
	virtual long MapRect(int,HWND__ *,tagRECT *);
	virtual long MergeSelectionContextMenu(HMENU__ *,int,tagPOINT const *);
	virtual long OnExplorerWindowReady();
	virtual long OnSettingsChanged(unsigned long);
	virtual long OnSettingsLoad(IPropertyBag *);
	virtual long OnSettingsSave(IPropertyBag *);
	virtual long OnViewChanging(tagLC_VIEW_CHANGING);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long RedrawItem(tagLCITEM const &);
	virtual long RefreshSettings();
	virtual long RequiresGetCountTask();
	virtual long ScrollLine(int,unsigned short);
	virtual long Select(tagLC_SELECTION_MODE);
	virtual long SetColor(VPCOLORFLAGS,unsigned long);
	virtual long SetFont(tagLOGFONTW const *,int);
	virtual long SetIDList(_ITEMIDLIST_ABSOLUTE const *);
	virtual long SetInnerFocus(int);
	virtual long SetInsertMark(tagLCITEM const *);
	virtual long SetItemCollection(IItemCollection *);
	virtual long SetItemHeight(int);
	virtual long SetItemPosition(tagLCITEM const &,tagPOINT const *);
	virtual long SetItemState(tagLCITEM const &,LC_ITEM_FLAGS,LC_ITEM_FLAGS);
	virtual long SetSite(IUnknown *);
	virtual long SetTheme(unsigned short const *,unsigned short const *);
	virtual long SetTransparentBackground(int);
	virtual long SetWatermark(HBITMAP__ *,VPWATERMARKFLAGS);
	virtual long ShowContextMenu(tagPOINT const *);
	virtual long TranslateAcceleratorIO(tagMSG *);
	virtual long UIActivateIO(int,tagMSG *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~CItemsView();
};

class CItemsViewEventQueue
{
	unsigned int _FlushEventsPriorTo(unsigned __int64);
	void _PreProcessEventQueue(int *,int *,int *);
public:
	virtual long FilterOutCollectionEvents(int);
	virtual long PostEvent(QueuedEvent const &);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned __int64 GetSize();
	virtual unsigned int FlushAllEvents();
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual void PostponeQueue(int);
	virtual void PreProcessEventQueue(int *,int *,int *);
	virtual void SetTrackEvents(ITrackEvents *);
	virtual void Unadvise();
};

class CItemsViewPrefetcher
{
	CItemsViewPrefetcher::ViewInfo const * _GetNextViewInfo();
	long _DeterminePrefetchInfo(UIItemsView *,unsigned int,unsigned int,int,CItemsViewPrefetcher::ViewInfo * *);
	long _EnqueueRow(CItemsViewPrefetcher::ViewInfo *,RowInfo const &,int);
	long _EnqueueRowsInDirection(CItemsViewPrefetcher::ViewInfo *,LineScroller *,RowInfo &,SCROLLDIR,int,int);
	long _PrefetchRow(CItemsViewPrefetcher::ViewInfo const *,RowPrefetchInfo const &);
	long _QueueWork(CItemsViewPrefetcher::ViewInfo const *);
	long _TrackItem(IItem *);
	void _PrefetchDetailsProperties(CItemsViewPrefetcher::ViewInfo const *,IItem *);
	void _PrefetchImageProperties(CItemsViewPrefetcher::ViewInfo const *,IItem *);
	void _PrefetchItem(CItemsViewPrefetcher::ViewInfo const *,IItem *);
	void _PrefetchPropListProperties(CItemsViewPrefetcher::ViewInfo const *,IItem *,IPropertyDescriptionList *);
	void _PrefetchProperty(IItem *,_tagpropertykey const &);
	void _PrefetchSmartProperties(CItemsViewPrefetcher::ViewInfo const *,IItem *);
	void _PrefetchTilesProperties(CItemsViewPrefetcher::ViewInfo const *,IItem *);
	void _Unadvise();
	~CItemsViewPrefetcher();
public:
	CItemsViewPrefetcher();
	virtual long CancelPrefetching();
	virtual long QueryContinue();
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long StartPrefetching(UIItemsView *,unsigned int,unsigned int,int);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	void RunPrefetchTask();
};

class CItemsViewSpy
{
	long _FirstPageResults_GetState(unsigned short *,int);
	long _GetFocusedItem(_GUID const &,void * *);
public:
	static long s_CreateInstance(UIItemsView *,_GUID const &,void * *);
	virtual long AdviseIItemsViewSpyClient(IItemsViewSpyClient *);
	virtual long GetValue(ITEMSVIEWSPYVALUE,tagVARIANT *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CKnownFoldersFilter
{
	long EnsureManager();
	long GetThisPCRegItemCLSID(_ITEMIDLIST_ABSOLUTE const *,_GUID *);
public:
	_GUID GetKnownFolderTarget(_GUID const &);
	bool IsKnownFolderSetByPolicy(IKnownFolder *);
	long RedirectKnownFolder(_ITEMIDLIST_ABSOLUTE const *,_ITEMIDLIST_ABSOLUTE * *);
	long ShouldShowInstanceFolder(_GUID const &,bool *);
	long ShouldShowKnownFolder(IKnownFolder *,bool *);
};

class CLVMenuAcc
{
protected:
	virtual int v_GetHotItem();
public:
	static long s_CreateInstance(unsigned short const *,IAccessible *,HWND__ *,_GUID const &,void * *);
	virtual long get_accRole(tagVARIANT,tagVARIANT *);
};

class CLVPopupAccBase
{
protected:
	CLVPopupAccBase(IAccessible *,HWND__ *);
	virtual ~CLVPopupAccBase();
public:
	virtual long get_accFocus(tagVARIANT *);
	virtual long get_accName(tagVARIANT,unsigned short * *);
	virtual long get_accState(tagVARIANT,tagVARIANT *);
};

struct CLegacyBarsGalleryItem
{
	CLegacyBarsGalleryItem(tagMENUITEMINFOW *);
	virtual long GetFlags(unsigned long *);
	virtual long GetState(IShellItemArray *,int,unsigned long *);
	virtual long GetTitle(IShellItemArray *,unsigned short * *);
	virtual long Invoke(IShellItemArray *,IBindCtx *);
};

struct CLineScrollerSpy
{
	static long s_CreateInstance(LineScroller *,_GUID const &,void * *);
	virtual long GetValue(LINESCROLLERVALUE,tagVARIANT *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CListViewPopup
{
	LVPCONTROL _GetNextControl(LVPCONTROL,unsigned long);
	LVPHITTESTRESULT ClassicHitTestMenuItem(tagPOINT,tagRECT &,_IMAGELIST *);
	LVPHITTESTRESULT _HitProgressItem(tagPOINT,tagRECT const *);
	LVPHITTESTRESULT _HitTestItem(LVPCONTROL,int,tagPOINT);
	LVPHITTESTRESULT _HitTestRect(tagPOINT,tagRECT &);
	__int64 _LVSubProc(LVPCONTROL,HWND__ *,unsigned int,unsigned __int64,__int64);
	__int64 _MainWindowProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	__int64 _OnCheckboxLVNotify(tagNMLISTVIEW *);
	__int64 _OnCreate(HWND__ *);
	__int64 _OnDropDownTranslateMessage(tagMSG const *);
	__int64 _OnInvokeKey(unsigned long);
	__int64 _OnMovementKey(unsigned int,unsigned long);
	__int64 _OnNotify(tagNMHDR *);
	__int64 _OnProcessDeleteKey();
	__int64 _OnSimpleLVNotify(tagNMLISTVIEW *);
	__int64 _TBSubProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	int _CtrlToLVIndex(LVPCONTROL);
	int _EnsureSpinnerImageList();
	int _GetItemWidth(LVPCONTROL,IListView *,int);
	int _HasItemTheme();
	int _IsItemDisabled(LVPCONTROL,int);
	int _SetNextControlFocus(unsigned int,unsigned long,LVPCONTROL,int);
	int _TryMoveFocus(LVPCONTROL,unsigned long,int);
	long _CopyInitData(tagLVPINITSTRUCT const *);
	long _CreateListView(int,LVPCONTROL);
	long _CreatePropCtrl();
	long _CreateSearchBox();
	long _CreateToolBar(int);
	long _GetItemState(LVPCONTROL,int,int *);
	long _GetListView(LVPVIEWID,IListView * *);
	long _GetListViewWindow(LVPVIEWID,HWND__ * *);
	static __int64 s_LVSubClassProc(HWND__ *,unsigned int,unsigned __int64,__int64,unsigned __int64,unsigned __int64);
	static __int64 s_MainWindowProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	static __int64 s_TBSubClassProc(HWND__ *,unsigned int,unsigned __int64,__int64,unsigned __int64,unsigned __int64);
	tagLVPLISTVIEWTYPE _GetListViewType(int);
	unsigned int _GetItemHeight();
	unsigned long _HitTestResultToFlags(LVPHITTESTRESULT);
	void _AddRemoveSpinner(int,LVPVIEWID,int);
	void _AdjustItemRect(tagRECT *,int);
	void _CalcProgressRecs(tagRECT const *,tagRECT *,tagRECT *,tagRECT *,tagRECT *);
	void _CancelSpinner(LVPVIEWID);
	void _ClassicDrawMenuItem(tagDRAWITEMSTRUCT const *,unsigned short *,unsigned int,_IMAGELIST *,_IMAGELIST *,int,int);
	void _ClosePopup();
	void _DrawBackground(HDC__ *,tagRECT const *);
	void _DrawEmptyText(HDC__ *);
	void _DrawItem(tagDRAWITEMSTRUCT *,int,unsigned short *,unsigned int,int,int);
	void _DrawProgressItem(unsigned short const *,tagDRAWITEMSTRUCT *);
	void _DrawSeparator(HDC__ *,int);
	void _DrawToolbarPrompt(HDC__ *);
	void _EnsureThemeAndFont();
	void _GetListViewRequiredSize(tagSIZE *,tagSIZE *,tagSIZE *,tagSIZE *,tagSIZE *);
	void _GetPropCtrlRequiredSize(tagSIZE *);
	void _GetToolBarRequiredSize(tagSIZE *);
	void _LogMenuPopupEvent(unsigned long);
	void _MeasureMenu(tagMEASUREITEMSTRUCT *,unsigned short const *,int,int);
	void _OnDelayedSetVisible();
	void _OnGetInfoTip(tagNMLVGETINFOTIPW *);
	void _OnSelectItem(LVPCONTROL,unsigned int);
	void _PositionPropCtrl(int,int,int,int);
	void _PositionSearchBox(int,int,int,int);
	void _RegisterWindowClass();
	void _SetFocusToControl(LVPCONTROL,int);
	void _SetFocusToListViewItem(LVPVIEWID,int);
	void _SizeToContent();
	~CListViewPopup();
public:
	CListViewPopup();
	virtual long Cancel();
	virtual long ClearToolBar();
	virtual long Commit(int);
	virtual long ContextSensitiveHelp(int);
	virtual long CreateAndShow(HWND__ *,tagLVPINITSTRUCT const *,tagPOINT,tagSIZE,unsigned short *,IListViewPopupCallback *);
	virtual long DeselectAllItems(LVPVIEWID);
	virtual long Destroy(LVP_DESTROY_FLAGS);
	virtual long GetColor(VPCOLORFLAGS,unsigned long *);
	virtual long GetFont(tagLOGFONTW *);
	virtual long GetHotItem(LVPVIEWID,int *);
	virtual long GetItemCount(LVPVIEWID,int,unsigned int *);
	virtual long GetItemHeight(int *);
	virtual long GetItemState(LVPVIEWID,int,int,unsigned long,unsigned long *);
	virtual long GetSearchControl(IShellSearchControl * *);
	virtual long GetSelectedItems(LVPVIEWID,unsigned int *,tagLVITEMW * *);
	virtual long GetWindow(HWND__ * *);
	virtual long HasFocus();
	virtual long InsertItem(LVPVIEWID,int,tagLVITEMW * const);
	virtual long InsertToolBarItem(_TBBUTTON const *);
	virtual long IsVisible();
	virtual long KillFocus(LVPVIEWID);
	virtual long NextControl(int);
	virtual long OnChanging(int);
	virtual long OnInvokeVerb(unsigned short const *);
	virtual long OnStateChange(int,int *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long RemoveAllItems(LVPVIEWID);
	virtual long RemoveItem(LVPVIEWID,int);
	virtual long RequestResize();
	virtual long SetColor(VPCOLORFLAGS,unsigned long);
	virtual long SetEmptyText(unsigned short const *);
	virtual long SetFont(tagLOGFONTW const *,int);
	virtual long SetItemHeight(int);
	virtual long SetItemSelected(LVPVIEWID,int,int,int);
	virtual long SetListViewFocus(LVPVIEWID,int);
	virtual long SetMaxToolbarWidth(int);
	virtual long SetPosition(unsigned int,unsigned int);
	virtual long SetRedraw(LVPVIEWID,int);
	virtual long SetSearchState(SHELL_SEARCH_BAND_SEARCH_STATE);
	virtual long SetSearchTarget(IShellSearchTarget *);
	virtual long SetSearchText(unsigned short const *,tagSBSST_FLAGS);
	virtual long SetTheme(unsigned short const *,unsigned short const *);
	virtual long SetToolbarPrompt(unsigned short const *);
	virtual long SetVisible(unsigned int);
	virtual long SetWatermark(HBITMAP__ *,VPWATERMARKFLAGS);
	virtual long Validate(unsigned short * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CLocateExplicitGroupStateForMemberItem
{
	int Enum(ATL::CComPtr<IItem> const &,SelectionState const &);
	long Init(IItem *,IItem *,ICollectionCache *);
};

class CMRUList
{
protected:
	HKEY__ * _GetRegKey(int);
	int _FindInMRU(unsigned short const *);
	int _MoveAddressToTopOfMRU(int);
	long _LoadList();
	long _MRUMerge(HKEY__ *);
	long _SetTopItem();
	long _UpdateMRU();
	long _UpdateMRUEntry(unsigned short const *,int,int,int);
	virtual long _Populate();
	virtual void _InitCombobox();
	void SetImageList();
public:
	virtual long AddEntry(unsigned short const *);
	virtual long Connect(int,HWND__ *,IShellBandProxy *,IAutoComplete *);
	virtual long GetClassID(_GUID *);
	virtual long GetSizeMax(_ULARGE_INTEGER *);
	virtual long IsDirty();
	virtual long Load(IStream *);
	virtual long OnWinEvent(HWND__ *,unsigned int,unsigned __int64,__int64,__int64 *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Refresh(unsigned long);
	virtual long Save();
	virtual long Save(IStream *,int);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CMarshaledInterface
{
	struct CMarshalStream
	{
		CMarshalStream();
	};

	long _Unmarshal(_GUID const &,void * *,bool);
};

class CMultipleValues
{
	long _EnsureIndividualValuesArray();
	static int s_ClearPropVariant(tagPROPVARIANT *,void *);
public:
	virtual long AppendValue(tagPROPVARIANT const &);
	virtual long DeleteValue(tagPROPVARIANT const &);
	virtual long GetCount(int *);
	virtual long GetPropertyKey(_tagpropertykey *);
	virtual long GetValue(tagPROPVARIANT *);
	virtual long GetValueAt(int,tagPROPVARIANT *);
	virtual long HasValue(tagPROPVARIANT const &,int *);
	virtual long InitValue(tagPROPVARIANT const &);
	virtual long InsertValue(int,tagPROPVARIANT const &);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SetPropertyKey(_tagpropertykey const &);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CNavBar
{
	class CNavBandSite
	{
		long _GetWidthPropNameForBand(CBandItemData *,unsigned short *,unsigned int);
	protected:
		int GetBandSize(IPropertyBag *,int);
		long PersistSize(IPropertyBag *,int);
		virtual int _SetMinDimensions();
		virtual long _Initialize(HWND__ *);
		virtual void _SetBorderStyles(int,int);
	public:
		CNavBandSite();
		virtual long ContextSensitiveHelp(int);
	};

protected:
	__int64 _OnActivate(unsigned __int64,__int64);
	__int64 _OnSettingChange(unsigned __int64,__int64);
	int _GetAddressBandAvailable();
	int _GetAddressBandWidth();
	int _GetSearchBandLeftEdge(int);
	int _IsMouseInResizeRegion(__int64,int);
	int _OnDrag(int,CNavBar::NavBarDragOperation);
	long _AddSpacerBand(CNavBar::NavigationBands,unsigned long);
	long _CreateBands();
	long _CreateBar();
	long _HandleAppToAppBandToggle(short);
	static __int64 s_RebarSubclassWndProc(HWND__ *,unsigned int,unsigned __int64,__int64,unsigned __int64,unsigned __int64);
	static __int64 s_SizableWndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	virtual ~CNavBar();
	void _InitThemeData();
	void _MinNavBarNotifyBands();
	void _OnFrameStateChanged(unsigned long);
	void _SendMessageToBands(unsigned int,unsigned __int64,__int64);
	void _SetTheme();
public:
	CNavBar();
	virtual long CanYieldFocus();
	virtual long CloseDW(unsigned long);
	virtual long ContextSensitiveHelp(int);
	virtual long Exec(_GUID const *,unsigned long,unsigned long,tagVARIANT *,tagVARIANT *);
	virtual long GetClassID(_GUID *);
	virtual long GetSearchControl(IShellSearchControl * *);
	virtual long GetSite(_GUID const &,void * *);
	virtual long GetSizeMax(_ULARGE_INTEGER *);
	virtual long GetText(unsigned short * *,int *);
	virtual long GetWindow(HWND__ * *);
	virtual long InitNew();
	virtual long IsDirty();
	virtual long Load(IStream *);
	virtual long OnChange(long,_ITEMIDLIST_ABSOLUTE const *,_ITEMIDLIST_ABSOLUTE const *);
	virtual long OnFocusChangeIS(IUnknown *,int);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long QueryObject(_GUID const &,_GUID const &,void * *);
	virtual long QueryService(_GUID const &,_GUID const &,void * *);
	virtual long QueryStatus(_GUID const *,unsigned long,_tagOLECMD * const,_tagOLECMDTEXT *);
	virtual long ResizeBorderDW(tagRECT const *,IUnknown *,int);
	virtual long RevertEditChanges();
	virtual long Save(IStream *,int);
	virtual long SetBandDisplay(NAVIGATION_SUB_BAND,int);
	virtual long SetNavigationState(unsigned long);
	virtual long SetNavigationTarget(IShellNavigationTarget *);
	virtual long SetProgress(SHELL_NAVIGATION_BAND_PROGRESS_STATE,long,long);
	virtual long SetSearchState(SHELL_SEARCH_BAND_SEARCH_STATE);
	virtual long SetSearchTarget(IShellSearchTarget *);
	virtual long SetSearchText(unsigned short const *,tagSBSST_FLAGS);
	virtual long SetSite(IUnknown *);
	virtual long ShowDW(int);
	virtual long TranslateAcceleratorGlobal(tagMSG *);
	virtual long TranslateAcceleratorIO(tagMSG *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CNavBarDUI
{
	long Initialize();IPersistStreamInit
};

struct CNavigationSite
{
	CNavigationSite(IUnknown *);
	static long s_CreateInstance(IUnknown *,_GUID const &,void * *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long QueryObject(_GUID const &,_GUID const &,void * *);
	virtual long QueryService(_GUID const &,_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CNavigationTargetImpl
{
	struct CBrowserEventSink
	{
		long Connect(IServiceProvider *,IShellNavigationBand *,int);
	};

protected:
	long ChainNavigationTarget(IServiceProvider *,IShellNavigationBand *,int);
public:
	virtual long GetNavItemTitle(long,unsigned short *,unsigned long);
	virtual long GetTargetItem(_GUID const &,void * *);
	virtual long GetViewFilters(IViewFilters * *);
	virtual long GetViewItems(IItemStore * *);
	virtual long GoBack();
	virtual long GoForward();
	virtual long NavigateToPidl(_ITEMIDLIST_ABSOLUTE const *,long);
	virtual long NavigateToUrl(unsigned short const *,long);
	virtual long NavigateTravelLog(long);
	virtual long PopulateTravelLog(IShellTravelLogUI *);
	virtual long Refresh(long);
	virtual long RestoreFrame();
	virtual long Stop();
};

struct CNoOpCommandHandler
{
	virtual long Execute(unsigned int,UI_EXECUTIONVERB,_tagpropertykey const *,tagPROPVARIANT const *,IUISimplePropertySet *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long UpdateProperty(unsigned int,_tagpropertykey const &,tagPROPVARIANT const *,tagPROPVARIANT *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CNotifySubclassWndProc
{
	static __int64 s_SubclassWndProc(HWND__ *,unsigned int,unsigned __int64,__int64,unsigned __int64,unsigned __int64);
protected:
	virtual __int64 _DefWindowProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	virtual void _DestroyCustomData(__int64);
	void _FlushNotifyMessages(HWND__ *);
	void _RegisterWindow(HWND__ *,_ITEMIDLIST_ABSOLUTE const *,long,int,unsigned int,__int64,unsigned int *);
	void _UnregisterWindow(HWND__ *,_ITEMIDLIST_ABSOLUTE const *,unsigned int);
};

struct CNscAccessible
{
	long Initialize(HWND__ *,__int64);
	virtual long Clone(IEnumVARIANT * *);
	virtual long GetIDsOfNames(_GUID const &,unsigned short * *,unsigned int,unsigned long,long *);
	virtual long GetTypeInfo(unsigned int,unsigned long,ITypeInfo * *);
	virtual long GetTypeInfoCount(unsigned int *);
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
};

struct CNscChangeNotifyQueueItem
{
	long Initialize(_ITEMIDLIST_ABSOLUTE const *,long,_ITEMIDLIST_ABSOLUTE const *,_ITEMIDLIST_ABSOLUTE const *,_TREEITEM *,NSCITEMINFO *,CHANGENOTIFY_CALLBACK_FLAGS);
	virtual long Dispatch(IUnknown *);
};

class CNscChangeNotifyTask
{
protected:
	long _ConvertIDList(_ITEMIDLIST_ABSOLUTE const *,_ITEMIDLIST_ABSOLUTE * *);
	long _SHCNERealFromSHCNEReceived(_ITEMIDLIST_ABSOLUTE const *,long *);
	virtual ~CNscChangeNotifyTask();
public:
	long Initialize(_ITEMIDLIST_ABSOLUTE const *,long,_ITEMIDLIST_ABSOLUTE const *,_ITEMIDLIST_ABSOLUTE const *,_TREEITEM *,NSCITEMINFO *);
	virtual long InternalResumeRT();
};

struct CNscDropTargetWrapper
{
	CNscDropTargetWrapper(CNscTree *,IShellItem *,INameSpaceTreeControlDropHandler *,int,int);
	long Initialize();
	virtual long DragEnter(IDataObject *,unsigned long,_POINTL,unsigned long *);
	virtual long DragLeave();
	virtual long DragOver(unsigned long,_POINTL,unsigned long *);
	virtual long Drop(IDataObject *,unsigned long,_POINTL,unsigned long *);
	virtual long GetSite(_GUID const &,void * *);
	virtual long IsEvaluatingEdpPolicy(int *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SetDropSourceEnterpriseId(unsigned short const *);
	virtual long SetSite(IUnknown *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CNscEnumQueueItem
{
	virtual ~CNscEnumQueueItem();
public:
	long Initialize(_ITEMIDLIST_ABSOLUTE const *,_TREEITEM *,NSCITEMINFO *,unsigned long,CDPA<ORDERITEM,CTContainer_PolicyUnOwned<ORDERITEM> > *,_ITEMID_CHILD const *,unsigned long,unsigned int,int,int,int,int);
	virtual long Dispatch(IUnknown *);
};

class CNscEnumTask
{
	static unsigned long s_dwMaxItems;
	virtual ~CNscEnumTask();
public:
	CNscEnumTask(CNscLock *,_TREEITEM *,NSCITEMINFO *,unsigned long,unsigned long,CDPA<ORDERITEM,CTContainer_PolicyUnOwned<ORDERITEM> > *,unsigned long,unsigned int,NSCENUMTASKFLAGS);
	virtual long InternalResumeRT();
	virtual long RunInitRT();
};

struct CNscIconQueueItem
{
	virtual long Dispatch(IUnknown *);
};

class CNscIconTask
{
protected:
	virtual void _Extract(IShellFolder *,_ITEMID_CHILD const *);
};

class CNscInfoTipQueueItem
{
	virtual ~CNscInfoTipQueueItem();
public:
	virtual long Dispatch(IUnknown *);
};

class CNscInfoTipTask
{
protected:
	virtual ~CNscInfoTipTask();
public:
	CNscInfoTipTask(CNscLock *,_TREEITEM *,NSCITEMINFO *,unsigned int,unsigned long);
	virtual long InternalResumeRT();
};

class CNscLock
{
	virtual bool _PostMessage();
public:
	HWND__ * GetNscHwnd();
	virtual IUnknown * GetObjectW();
};

struct CNscOverlayQueueItem
{
	CNscOverlayQueueItem(_TREEITEM *,NSCITEMINFO *,int,unsigned int);
	virtual long Dispatch(IUnknown *);
};

class CNscOverlayTask
{
protected:
	virtual void _Extract(IShellFolder *,_ITEMID_CHILD const *);
public:
	CNscOverlayTask(CNscLock *,_TREEITEM *,NSCITEMINFO *,unsigned int);
	long Init(_ITEMIDLIST_ABSOLUTE const *,IUnknown *);
	virtual long InternalResumeRT();
};

struct CNscPlusQueueItem
{
	virtual long Dispatch(IUnknown *);
};

struct CNscPlusTask
{
	CNscPlusTask(CNscLock *,_TREEITEM *,NSCITEMINFO *,unsigned int,unsigned long);
	virtual long InternalResumeRT();
};

class CNscSortTask
{
protected:
	virtual ~CNscSortTask();
public:
	CNscSortTask(CNscLock *,_TREEITEM *,NSCITEMINFO *,unsigned long,unsigned long,CDPA<ORDERITEM,CTContainer_PolicyUnOwned<ORDERITEM> > *);
	virtual long InternalResumeRT();
	virtual long RunInitRT();
};

class CNscTree
{
	struct CNSCContextMenu
	{
		virtual long GetCommandString(unsigned __int64,unsigned int,unsigned int *,char *,unsigned int);
		virtual long InvokeCommand(_CMINVOKECOMMANDINFO *);
		virtual long QueryContextMenu(HMENU__ *,unsigned int,unsigned int,unsigned int,unsigned int);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
	};

	class CSelectionContextMenu
	{
	protected:
		virtual long GetCommandString(unsigned __int64,unsigned int,unsigned int *,char *,unsigned int);
		virtual long HandleMenuMsg(unsigned int,unsigned __int64,__int64);
		virtual long InvokeCommand(_CMINVOKECOMMANDINFO *);
		virtual long QueryContextMenu(HMENU__ *,unsigned int,unsigned int,unsigned int,unsigned int);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
	};

	HMENU__ * _CreateContextMenu(IContextMenu *,_TREEITEM *);
	HWND__ * _CreateAccName(HWND__ *);
	HWND__ * _CreateTreeview(HWND__ *);
	IStream * _GetOrderStream(_ITEMIDLIST_ABSOLUTE const *,unsigned long);
	NSCITEMINFO * _GetTreeItemInfo(HWND__ *,_TREEITEM *);
	_ITEMIDLIST_ABSOLUTE * _GetFirstRootPidl();
	_ITEMIDLIST_ABSOLUTE * _GetFullIDList(HWND__ *,_TREEITEM *);
	_ITEMIDLIST_RELATIVE const * _GetTreeItemIDList(HWND__ *,_TREEITEM *);
	_TREEITEM * _AddItemToTree(_TREEITEM *,IShellFolder *,_ITEMIDLIST_ABSOLUTE const *,_ITEMIDLIST_RELATIVE const *,int,unsigned long,IShellItemFilter *,int,_TREEITEM *,int,int,int,int);
	_TREEITEM * _ExpandToItem(_ITEMIDLIST_ABSOLUTE const *,int,int);
	_TREEITEM * _FindChild(IShellFolder *,_TREEITEM *,_ITEMID_CHILD const *);
	_TREEITEM * _FindChildTreeItem(_TREEITEM *,_ITEMIDLIST_ABSOLUTE const *,_ITEMIDLIST_ABSOLUTE const *);
	_TREEITEM * _FindFromRoot(_TREEITEM *,_ITEMIDLIST_ABSOLUTE const *,_ITEMIDLIST_ABSOLUTE const *,int);
	_TREEITEM * _FindRootForItem(_TREEITEM *,_ITEMIDLIST_ABSOLUTE const *);
	_TREEITEM * _GetNextTreeViewItemSkipEmpty(_TREEITEM *,unsigned long);
	_TREEITEM * _GetPreviousTopLevelTreeItem(_TREEITEM *);
	_TREEITEM * _SelectPidl(_ITEMIDLIST_ABSOLUTE const *,int,int);
	__int64 _OnBeginLabelEdit(tagTVDISPINFOW *);
	__int64 _OnCDNotify(tagNMCUSTOMDRAWINFO *);
	__int64 _OnCommand(unsigned __int64,__int64);
	__int64 _OnContextMenu(short,short);
	__int64 _OnEndLabelEdit(tagTVDISPINFOW *);
	__int64 _OnKeyboardInput(HWND__ *,unsigned int,unsigned __int64,__int64);
	__int64 _OnMenuSelect(unsigned int,unsigned int,HMENU__ *);
	__int64 _OnNotify(tagNMHDR *);
	__int64 _OnSetCursor(tagNMMOUSE *);
	__int64 _OnSubclassKeyboardInput(HWND__ *,unsigned int,unsigned __int64,__int64);
	__int64 _SubClassTreeWndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	bool _IsLastChild(_TREEITEM *);
	bool _ModeSupportsOrder(_TREEITEM *);
	int _DeleteItemWithBeforeDeleteEvent(_TREEITEM *);
	int _GetChildren(IShellFolder *,_ITEMID_CHILD const *,_TREEITEM *);
	int _GetIconsAndAddTaskIfRequired(IShellFolder *,_ITEMID_CHILD const *,_ITEMIDLIST_ABSOLUTE const *,_TREEITEM *,NSCITEMINFO *,IUnknown *,int *,int *);
	int _IsExpandable(_TREEITEM *);
	int _IsFlatNode(_TREEITEM *);
	int _IsItemExpanded(_TREEITEM *);
	int _IsItemNameInTree(_ITEMIDLIST_ABSOLUTE const *);
	int _IsOrdered(_TREEITEM *);
	int _IsTreeItemVisible(_TREEITEM *);
	int _LabelEditIsNewValueValid(tagTVDISPINFOW *);
	int _LoadOrder(_TREEITEM *,_ITEMIDLIST_ABSOLUTE const *,CDPA<ORDERITEM,CTContainer_PolicyUnOwned<ORDERITEM> > *);
	int _MouseInTree();
	int _MoveNode(int,int,_ITEMID_CHILD const *);
	int _OnItemExpanding(_TREEITEM *,unsigned int,int,int);
	int _OnItemExpandingMsg(tagNMTREEVIEWW *);
	int _OnSelChange();
	int _ShouldInsertChild(_TREEITEM *,IShellFolder *,_ITEMID_CHILD const *);
	int _ShouldInsertChildCheckPin(_TREEITEM *,IShellFolder *,_ITEMID_CHILD const *);
	int _ShouldShow(IShellFolder *,_ITEMIDLIST_ABSOLUTE const *,_ITEMID_CHILD const *);
	int _SupportsCustomNode();
	int _TreeItemIndexInDPA(CDPA<ORDERITEM,CTContainer_PolicyUnOwned<ORDERITEM> > *,IShellFolder *,unsigned long,_TREEITEM *,int,int *);
	int _UpdateItemDisplayInfo(unsigned long,IShellFolder *,_ITEMID_CHILD const *,_TREEITEM *,int *,int *);
	int _WasRenamed(IShellFolder *,_ITEMID_CHILD *);
	long ApplyTopMargin();
	long DoDefaultActionWithItem(_TREEITEM *);
	long MoveItemUpOrDown(bool);
	long SetCloudStateIcon(_TREEITEM *);
	long _CompareIDs(IShellFolder *,unsigned long,_ITEMID_CHILD const *,_ITEMID_CHILD const *);
	long _ConvertChildId(FOLDER_ENUM_MODE,_ITEMIDLIST_ABSOLUTE const *,IShellFolder *,_ITEMID_CHILD const *,IShellFolder * *,_ITEMID_CHILD * *);
	long _CreateNewFolder(_TREEITEM *);
	long _EnsureScheduler();
	long _EnterNewFolderEditMode(_ITEMIDLIST_ABSOLUTE const *);
	long _Expand(_ITEMIDLIST_ABSOLUTE const *,int);
	long _ExpandNode(_TREEITEM *,unsigned int,int);
	long _FindItem(IShellItem *,int,_TREEITEM * *,bool);
	long _FireClickEvent(_TREEITEM *,unsigned long,unsigned long);
	long _GetAccessible(__int64,IAccessible * *);
	long _GetContextMenuFromSelection(_TREEITEM *,int,IContextMenu * *,IShellItem * *);
	long _GetLock(CNscLock * *);
	long _GetSelectedItem(_ITEMIDLIST_ABSOLUTE * *,int);
	long _GetTreeItemFolder(_TREEITEM *,_GUID const &,void * *);
	long _GetTreeItemParentFolder(_TREEITEM *,_GUID const &,void * *,_ITEMID_CHILD const * *);
	long _HandleWinIniChange();
	long _InsertChild(_TREEITEM *,IShellFolder *,_ITEMID_CHILD const *,int,int,int,_TREEITEM * *);
	long _InsertRoot(_TREEITEM *,IShellItem *,unsigned long,unsigned long,IShellItemFilter *);
	long _InvokeContextMenuCommand(unsigned short const *);
	long _LoadSF(_TREEITEM *,_ITEMIDLIST_ABSOLUTE const *,int *,int);
	long _OnSHNotifyCreate(_TREEITEM *,_ITEMIDLIST_ABSOLUTE const *,_ITEMIDLIST_ABSOLUTE const *,_TREEITEM *);
	long _OnSHNotifyDelete(_TREEITEM *,_ITEMIDLIST_ABSOLUTE const *,_ITEMIDLIST_ABSOLUTE const *,_TREEITEM * *);
	long _OnSHNotifyRename(_TREEITEM *,_ITEMIDLIST_ABSOLUTE const *,_ITEMIDLIST_ABSOLUTE const *,_ITEMIDLIST_ABSOLUTE const *,CHANGENOTIFY_CALLBACK_FLAGS);
	long _OnSHNotifyUpdateDir(_TREEITEM *,_ITEMIDLIST_ABSOLUTE const *,_ITEMIDLIST_ABSOLUTE const *);
	long _OnWindowCleanup();
	long _QuerySelection(IContextMenu * *,_TREEITEM * *);
	long _Refresh();
	long _SetSelectedItem(IShellItem *);
	long _SetSelectedItemNoExpand(IShellItem *);
	long _ShellItemForTreeItem(int,_TREEITEM *,IShellItem * *);
	long _SortByName(_TREEITEM *);
	long _StartBackgroundEnum(_TREEITEM *,_ITEMIDLIST_ABSOLUTE const *,int *,int,int);
	long _TreeRemoveCutState();
	long _UpdateDir(_TREEITEM *,int);
	static __int64 s_SubClassTreeWndProc(HWND__ *,unsigned int,unsigned __int64,__int64,unsigned __int64,unsigned __int64);
	static int _TreeCompare(__int64,__int64,__int64);
	static int _TreeOrder(__int64,__int64,__int64);
	static int s_SFCDestroyCB(CNscTree::SFCITEM *,void *);
	unsigned long _GetAttributesFromSelection(unsigned long);
	unsigned long _GetEnumFlags(_TREEITEM *,IShellFolder *,_ITEMIDLIST_ABSOLUTE const *,HWND__ * *);
	unsigned long _GetSortColumn(IShellFolder *);
	unsigned long _SetExStyle(unsigned long);
	unsigned long _SetStyle(unsigned long);
	unsigned long _TVStateFromFlags(unsigned long);
	virtual __int64 v_WndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	void OnDPIChanged();
	void ScaleAndSetIndent();
	void ScaleAndSetRowHeight();
	void SetImageList();
	void SyncOrderItemWithTreeOrder(_TREEITEM *,CDPA<ORDERITEM,CTContainer_PolicyUnOwned<ORDERITEM> > *);
	void UpdateItemIntegrals(_TREEITEM *,int);
	void _AddEmptyTextItem(_TREEITEM *);
	void _AddOverlayTaskIfAllowed(_ITEMIDLIST_ABSOLUTE const *,_TREEITEM *,NSCITEMINFO *,IUnknown *);
	void _AddToExpandingIconsDSA(_TREEITEM *);
	void _AddToLegacySFC(_ITEMIDLIST_ABSOLUTE const *,IShellFolder *);
	void _ApplyCmd(_TREEITEM *,IContextMenu *,unsigned int);
	void _ApplyCmd(_TREEITEM *,IContextMenu *,unsigned int,unsigned short const *);
	void _AssignPidl(_TREEITEM *,NSCITEMINFO *,_ITEMID_CHILD const *,int);
	void _CollapseItems(_TREEITEM *);
	void _DeleteHotItem();
	void _DrawIcon(_TREEITEM *,HDC__ *,int,tagRECT const *,unsigned long);
	void _DrawItem(_TREEITEM *,unsigned short const *,HDC__ *,tagRECT const *,unsigned long,int,unsigned long,unsigned long);
	void _DtRegister();
	void _EnsureVisible(_TREEITEM *,ENSURE_VISIBLE_FLAGS);
	void _EnumBackgroundDone(NSC_BKGDENUMDONEDATA *);
	void _ExpandingIconsDSAUpdate();
	void _FlagsFromStyles(unsigned long,unsigned long *,unsigned long *);
	void _HideFloater(int);
	void _InitFloater();
	void _InvalidateImageIndex(_TREEITEM *,int);
	void _MaybeAddToLegacySFC(_ITEMIDLIST_ABSOLUTE const *,IShellFolder *);
	void _OnBeginDrag(tagNMTREEVIEWW *);
	void _OnChangeNotify(_TREEITEM *,_ITEMIDLIST_ABSOLUTE const *,long,_ITEMIDLIST_ABSOLUTE const *,_ITEMIDLIST_ABSOLUTE const *,CHANGENOTIFY_CALLBACK_FLAGS);
	void _OnGetDisplayInfo(tagTVDISPINFOEXW *);
	void _OnGetInfoTip(tagNMTVGETINFOTIPW *);
	void _OnSHNotifyUpdateItem(_TREEITEM *,_ITEMIDLIST_ABSOLUTE const *,_ITEMIDLIST_ABSOLUTE const *);
	void _OnSetSelection();
	void _PersistChildOrder(_TREEITEM *,bool);
	void _ReExtractIcon(tagNMTVASYNCDRAW *);
	void _RecursiveRegisterNotify(_TREEITEM *,_ITEMIDLIST_ABSOLUTE const *);
	void _RecursiveUnregisterNotify(_TREEITEM *,_ITEMIDLIST_ABSOLUTE const *);
	void _RedrawLastHotItem();
	void _RefreshHotItem();
	void _RegisterNotify(_TREEITEM *,NSCITEMINFO *,_ITEMIDLIST_ABSOLUTE const *);
	void _RemoveCustomNodeItem(_TREEITEM *);
	void _RemoveEmptyTextItem(_TREEITEM *);
	void _RemoveFromExpandingIconsDSA(_TREEITEM *,int);
	void _SetBkTaskCache(_TREEITEM *,IShellFolder *,_ITEMID_CHILD const *);
	void _SetPaddingToFirstTreeItem(_TREEITEM *,int);
	void _ShowFloater(tagRECT,_TREEITEM *,tagFLOATERTYPE);
	void _Sort(_TREEITEM *,IShellFolder *,int,unsigned long);
	void _StartAnimatingExpandingIcons();
	void _SubClass();
	void _TreeGhostCutItem(_TREEITEM *);
	void _TreeInvalidateItemInfo(_TREEITEM *,unsigned int);
	void _TreeSetItemState(_TREEITEM *,unsigned int,unsigned int);
	void _UnSubClass(HWND__ *);
	void _UnregisterNotify(_TREEITEM *,NSCITEMINFO *,_ITEMIDLIST_ABSOLUTE const *);
protected:
	virtual long _OnChange(_ITEMIDLIST_ABSOLUTE const *,long,_ITEMIDLIST_ABSOLUTE const *,_ITEMIDLIST_ABSOLUTE const *,__int64);
	virtual ~CNscTree();
public:
	CNscTree();
	long GetAccessibleName(tagVARIANT *,unsigned short * *);
	long OnGetAccDefaultAction(tagVARIANT *,unsigned short * *);
	long OnGetAccRole(tagVARIANT *,tagVARIANT *);
	static long s_ExpandIDList(CNscTree *,IShellItem *);
	static long s_SelectIDList(CNscTree *,IShellItem *);
	static long s_SelectIDListNoExpand(CNscTree *,IShellItem *);
	virtual long AppendRoot(IShellItem *,unsigned long,unsigned long,IShellItemFilter *);
	virtual long BrowseObject(_ITEMIDLIST_RELATIVE const *,unsigned int);
	virtual long CollapseAll();
	virtual long ContextSensitiveHelp(int);
	virtual long CreateNewFolder();
	virtual long Drop(IDataObject *,unsigned long,_POINTL,unsigned long *);
	virtual long EnableModelessSB(int);
	virtual long EnsureItemVisible(IShellItem *);
	virtual long GetColor(VPCOLORFLAGS,unsigned long *);
	virtual long GetControlStyle(unsigned long,unsigned long *);
	virtual long GetControlStyle2(NSTCSTYLE2,NSTCSTYLE2 *);
	virtual long GetControlWindow(unsigned int,HWND__ * *);
	virtual long GetFont(tagLOGFONTW *);
	virtual long GetItemCustomState(IShellItem *,int *);
	virtual long GetItemHeight(int *);
	virtual long GetItemRect(IShellItem *,tagRECT *);
	virtual long GetItemState(IShellItem *,unsigned long,unsigned long *);
	virtual long GetNextItem(IShellItem *,NSTCGNI,IShellItem * *);
	virtual long GetObjectDDT(unsigned __int64,_GUID const &,void * *);
	virtual long GetRootItems(IShellItemArray * *);
	virtual long GetSelectedItems(IShellItemArray * *);
	virtual long GetTopMargin(unsigned int *);
	virtual long GetViewStateStream(unsigned long,IStream * *);
	virtual long GetWindow(HWND__ * *);
	virtual long GetWindowsDDT(HWND__ * *,HWND__ * *);
	virtual long HitTest(tagPOINT *,IShellItem * *);
	virtual long HitTestDDT(unsigned int,tagPOINT *,unsigned __int64 *,unsigned long *);
	virtual long IncludeItems(int *);
	virtual long Initialize(HWND__ *,tagRECT *,unsigned long);
	virtual long InsertMenusSB(HMENU__ *,tagOleMenuGroupWidths *);
	virtual long InsertRoot(int,IShellItem *,unsigned long,unsigned long,IShellItemFilter *);
	virtual long NavigationFinished(_ITEMIDLIST_ABSOLUTE const *);
	virtual long NavigationStarted(_ITEMIDLIST_ABSOLUTE const *);
	virtual long NotifyWinEvent(IShellItem *,unsigned long);
	virtual long OnDropDDT(IDropTarget *,IDataObject *,unsigned long *,_POINTL,unsigned long *);
	virtual long OnQIUpdateChangeNotify(_ITEMIDLIST_ABSOLUTE const *,long,_ITEMIDLIST_ABSOLUTE const *,_ITEMIDLIST_ABSOLUTE const *,_TREEITEM *,NSCITEMINFO *,CHANGENOTIFY_CALLBACK_FLAGS);
	virtual long OnQIUpdateCloudStateIcon(_TREEITEM *,NSCITEMINFO *,NscVisibleCloudStates,unsigned int);
	virtual long OnQIUpdateEnumDone(NSC_BKGDENUMDONEDATA *);
	virtual long OnQIUpdateIcon(_TREEITEM *,NSCITEMINFO *,int,int,unsigned long,unsigned int);
	virtual long OnQIUpdateInfoTip(_TREEITEM *,NSCITEMINFO *,unsigned short const *,unsigned int);
	virtual long OnQIUpdateOverlay(_TREEITEM *,NSCITEMINFO *,int,unsigned int);
	virtual long OnQIUpdatePlus(_TREEITEM *,NSCITEMINFO *,int,unsigned int);
	virtual long OnQIUpdateValidation(_TREEITEM *,NSCITEMINFO *,int,unsigned int);
	virtual long OnViewWindowActive(IShellView *);
	virtual long QueryActiveShellView(IShellView * *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long QueryService(_GUID const &,_GUID const &,void * *);
	virtual long RemoveAllRoots();
	virtual long RemoveMenusSB(HMENU__ *);
	virtual long RemoveRoot(IShellItem *);
	virtual long SelectAndEditItem(_ITEMIDLIST_ABSOLUTE const *,int);
	virtual long SendControlMsg(unsigned int,unsigned int,unsigned __int64,__int64,__int64 *);
	virtual long SetColor(VPCOLORFLAGS,unsigned long);
	virtual long SetControlStyle(unsigned long,unsigned long);
	virtual long SetControlStyle2(NSTCSTYLE2,NSTCSTYLE2);
	virtual long SetDirectItemCustomState(IShellItem *,int);
	virtual long SetFilter(IUnknown *);
	virtual long SetFont(tagLOGFONTW const *,int);
	virtual long SetItemCustomState(IShellItem *,int);
	virtual long SetItemHeight(int);
	virtual long SetItemState(IShellItem *,unsigned long,unsigned long);
	virtual long SetMenuSB(HMENU__ *,void *,HWND__ *);
	virtual long SetPrivateFlags(NSTCFLAGSPRIVATE);
	virtual long SetStateImageList(_IMAGELIST *);
	virtual long SetStatusTextSB(unsigned short const *);
	virtual long SetTheme(unsigned short const *);
	virtual long SetTheme(unsigned short const *,unsigned short const *);
	virtual long SetToolbarItems(_TBBUTTON *,unsigned int,unsigned int);
	virtual long SetTopMargin(unsigned int);
	virtual long SetWatermark(HBITMAP__ *,VPWATERMARKFLAGS);
	virtual long TranslateAcceleratorSB(tagMSG *,unsigned short);
	virtual long TreeAdvise(IUnknown *,unsigned long *);
	virtual long TreeUnadvise(unsigned long);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual void Advise(IImmersiveContextMenuOwnerDrawHelper *);
	virtual void SetIndentValue(int);
	virtual void SetInsertionThresholdValue(int);
	virtual void SetIntegralValue(int);
	virtual void UnAdvise();
	void GetDropPosition(int *);
};

struct CNscValidateQueueItem
{
	CNscValidateQueueItem(_TREEITEM *,NSCITEMINFO *,int,unsigned int);
	virtual long Dispatch(IUnknown *);
};

class CNscValidateTask
{
protected:
	virtual ~CNscValidateTask();
public:
	CNscValidateTask(CNscLock *,_TREEITEM *,NSCITEMINFO *,unsigned int);
	virtual long InternalResumeRT();
};

struct COMMAND_HANDLER_INFO
{
	static int Destroy(COMMAND_HANDLER_INFO *,void *);
};

struct CObjectWithSite
{
	CObjectWithSite(IUnknown *);
	virtual long GetSite(_GUID const &,void * *);
	virtual long SetSite(IUnknown *);
};

struct COpenWithTypeOverride
{
	COpenWithTypeOverride();
	virtual long GetOpenWithTypeOverride(unsigned short * *);
	virtual long QueryService(_GUID const &,_GUID const &,void * *);
};

struct COrderList
{
	virtual long AllocOrderItem(ORDERITEM * *,_ITEMID_CHILD const *);
	virtual long FreeOrderItem(ORDERITEM *);
	virtual long FreeOrderList(_DPA *);
	virtual long GetClassID(_GUID *);
	virtual long GetOrderList(_DPA * *);
	virtual long Initialize(_ITEMIDLIST_ABSOLUTE const *);
	virtual long LoadFromStream(IStream *,_DPA * *,IShellFolder *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SaveToStream(IStream *,_DPA *);
	virtual long SetOrderList(_DPA *,IShellFolder *);
	virtual long SortOrderList(_DPA *,unsigned long);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class COwnerDrawPopupMenu
{
	struct POPUPMENUITEMINFO
	{
		static int Destroy(POPUPMENUITEMINFO *,void *);
	};

	HFONT__ * _GetItemFont(unsigned long);
	__int64 _MeasureMenuItem(tagMEASUREITEMSTRUCT *,unsigned short const *,unsigned short const *,unsigned long,int,int);
	__int64 _MenuProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	int _GetImageAreaHeight();
	int _GetImageAreaWidth();
	int _MeasureMenuItemText(unsigned short const *,unsigned long,tagSIZE *);
	long _FillItem(COwnerDrawPopupMenu::POPUPMENUITEMINFO *,unsigned short const *,unsigned __int64,unsigned int,unsigned long,int,int);
	static __int64 s_MenuProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	void _DestroyImageList();
	void _DrawCheckbox(HDC__ *,tagRECT *);
	void _DrawMenuItem(tagDRAWITEMSTRUCT *,unsigned short const *,unsigned short const *,unsigned long,int,int,int);
	void _InitThemes();
public:
	int Show(unsigned int,int,int,HWND__ *,tagRECT const *);
	long AppendItem(unsigned short const *,unsigned __int64,unsigned int,unsigned long,int,int);
	long AttachImageList(_IMAGELIST *);
	void Clear();
};

class CPendingNavigation
{
	long _Initialize(IConnectionFactory *,IShellItem *,unsigned int,unsigned long,unsigned long,IUnknown *,IUnknown *,_GUID const &,INavigationResult *);
public:
	static long s_CreateInstance(IConnectionFactory *,IShellItem *,unsigned int,unsigned long,unsigned long,IUnknown *,IUnknown *,_GUID const &,INavigationResult *,_GUID const &,void * *);
	virtual long CancelNavigation();
	virtual long GetLocation(_GUID const &,void * *);
	virtual long OnConnectionCreated(long,IUnknown *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long QueryObject(_GUID const &,_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CPerfTrackProvider
{
	bool _FireCplStopEvents(IShellItem *,unsigned int,unsigned int);
	bool _FireDeviceCenterStopEvents(IShellItem *,bool,unsigned int,unsigned int);
	bool _FireHomeGroupStopEvents(IShellItem *,bool,unsigned int,unsigned int);
	bool _FireKnownLibraryStopEvents(IShellItem *,bool,unsigned int,unsigned int);
	long _GetHomeGroupCLSID(IShellItem *,bool,bool *,_GUID *);
	long _GetKnownFolderLibraryType(IShellItem *,_GUID *,LIBRARY_SQM_TYPE *);
	long _GetNamespaceCLSID(IShellItem *,_GUID *);
	static unsigned int s_uBrowserId;
	virtual void _SendPerfInfo();
	void _FireNetworkDPIStopEvents(IShellItem *,unsigned int,unsigned int);
	void _FireSearchStopEvents(IShellItem *,PROVIDER_ATTRIBUTES,unsigned int,unsigned int);
	void _FireTopViewStopEvents(IShellItem *,unsigned int,unsigned int);
	void _LogEndEvent(bool);
public:
	CPerfTrackProvider();
	virtual long OperationEvent(unsigned short const *,TRACKOPERATIONTYPE,TRACKOPERATIONEVENT);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SetItemCount(unsigned int);
	virtual long SetProviderAttributes(PROVIDER_ATTRIBUTES);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	void LogStartEvent(IShellItem *);
};

class CPersistExplorerFrame
{
	int _CalcWindowPlacement(HWND__ *,IETHREADPARAM *);
	int _LoadShellNavBarSettings();
	int _SaveShellNavBarSettings();
	int _SaveShellWindowSettings(IShellItem *,HWND__ *,int);
	long _GetFrameStatePropertyBag(IShellItem *,_GUID const &,void * *);
	static int _GetDesktopRegionEnumProc(HMONITOR__ *,HDC__ *,tagRECT *,__int64);
	static int _PlacementEnumWindowsProc(HWND__ *,__int64);
	static tagRECT s_rcExplorerFrame;
	static void _CascadeWindowRect(tagRECT *);
	static void _EnsureWindowIsCompletelyOnScreen(tagRECT *);
	void _GetDefaultWindowPlacement(HWND__ *,HMONITOR__ *);
public:
	CPersistExplorerFrame(IUnknown *);
	int LoadShellWindowSettings(IShellItem *,tagWINDOWPLACEMENT *);
	void FillIEThreadParam(HWND__ *,IETHREADPARAM *,int *);
	void Load(IShellItem *,HMONITOR__ *,HWND__ *);
};

class CPrefetchTask
{
	CPrefetchTask(CItemsViewPrefetcher *);
	virtual ~CPrefetchTask();
public:
	static long s_CreateInstance(CItemsViewPrefetcher *,_GUID const &,void * *);
	virtual long InternalResumeRT();
};

struct CPrefetcherEventSink
{
	virtual long OnCancelled(IItem *);
	virtual long OnItemChanged(ITEM_CHANGED_TYPE,IItem *,IPropertyKeyStore *);
	virtual long OnItemChanging(ITEM_CHANGED_TYPE,IItem *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CPrintClientStruct
{
	CPrintClientStruct(HWND__ *,unsigned __int64);
};

class CProfferService
{
protected:
	~CProfferService();
public:
	virtual long ProfferService(_GUID const &,IServiceProvider *,unsigned long *);
	virtual long RevokeService(unsigned long);
};

struct CPropertyStoreHelperBase<IPropertyStore>
{
	long GetString<_tagpropertykey>(_tagpropertykey,unsigned short * *);
};

struct CPropertyValue
{
	virtual long GetPropertyKey(_tagpropertykey *);
	virtual long GetValue(tagPROPVARIANT *);
	virtual long InitValue(tagPROPVARIANT const &);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SetPropertyKey(_tagpropertykey const &);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CPublicTravelLog
{
	virtual long CreateEntry(unsigned short const *,unsigned short const *,ITravelLogEntry *,int,ITravelLogEntry * *);
	virtual long EnumEntries(unsigned long,IEnumTravelLogEntry * *);
	virtual long FindEntries(unsigned long,unsigned short const *,IEnumTravelLogEntry * *);
	virtual long GetCount(unsigned long,unsigned long *);
	virtual long GetRelativeEntry(int,ITravelLogEntry * *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long RemoveEntry(ITravelLogEntry *);
	virtual long TravelTo(ITravelLogEntry *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CPublicTravelLogCreateHelper
{
	CPublicTravelLogCreateHelper(IShellBrowserService *,unsigned short const *,unsigned short const *);
	virtual long FindWindowByIndex(unsigned long,IUnknown * *);
	virtual long GetClassID(_GUID *);
	virtual long GetPositionCookie(unsigned long *);
	virtual long GetWindowData(IStream *,_WINDOWDATA *);
	virtual long LoadHistory(IStream *,IBindCtx *);
	virtual long LoadHistoryPosition(unsigned short *,unsigned long);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SaveHistory(IStream *);
	virtual long SetPositionCookie(unsigned long);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CQueueItem
{
	virtual long AppliesTo(IUnknown *);
	virtual long IsDispatchable();
	virtual long QueryContinue();
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SetUndispatchable();
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CRGTypeSizes
{
	static unsigned short const * const m_ucTypeSizesA;
	static unsigned short const * const m_ucTypeSizesB;
public:
	unsigned short operator[](int);
};

struct CRecentItemPropertySet
{
	virtual long GetValue(_tagpropertykey const &,tagPROPVARIANT *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CRibbonCommandHandlerOnExplorerCommand
{
	long _StartGetStateTask(IShellItemArray *);
protected:
	HWND__ * _GetWindow();
	long _CreateDefaultBitmap(IExplorerCommand *,IShellItemArray *,tagSIZE const &,HBITMAP__ * *);
	long _GetSelection(IShellItemArray * *);
	long _GetStateNormalized(IExplorerCommand *,IShellItemArray *,int,unsigned long *);
	long _GetUIImageFromExplorerCommandWithSize(IExplorerCommand *,IShellItemArray *,tagSIZE,GetUIImageIconSource,IUIImage * *);
	virtual ~CRibbonCommandHandlerOnExplorerCommand();
public:
	CRibbonCommandHandlerOnExplorerCommand(IExplorerCommand *,unsigned int);
	virtual long Execute(unsigned int,UI_EXECUTIONVERB,_tagpropertykey const *,tagPROPVARIANT const *,IUISimplePropertySet *);
	virtual long OnTaskComplete(unsigned int,unsigned long);
	virtual long OnTaskStart();
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long QueryObject(_GUID const &,_GUID const &,void * *);
	virtual long UpdatePerCommandCache(unsigned int,int);
	virtual long UpdateProperty(unsigned int,_tagpropertykey const &,tagPROPVARIANT const *,tagPROPVARIANT *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CRibbonTelemetry
{
	bool _IsRibbonMinimized();
	void _Record(CRibbonTelemetry::RIBBON_EVENT,unsigned int);
	void _Record(CRibbonTelemetry::RIBBON_EVENT,unsigned int,int);
public:
	long AdviseUIEvents(IUIFramework *);
	virtual long Destroy(IUIFramework *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual void OnQATPinned(unsigned int);
	virtual void OnQATUnpinned(unsigned int);
	virtual void OnUIEvent(_UI_EVENTPARAMS *);
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

class CRunnableTaskWithActivatableKeyboard
{
protected:
	CRunnableTaskWithActivatableKeyboard(RUN_TASK_FLAGS);
public:
	virtual bool IsKeyboardNeededAndGlobalInputSwitchingOnThread();
	virtual void ActivateOriginalKeyboardLayout(HKL__ * *);
	virtual void ResetKeyboardLayout(HKL__ *);
};

class CSCParsedTerm
{
	virtual ~CSCParsedTerm();
public:
	int IsFormatted();
	long AddCondition(ICondition *);
	long GetCharRange(ITextDocument *,int *,int *);
	long GetConditionAt(unsigned int,_GUID const &,void * *);
	long GetRange(ITextDocument *,ITextRange * *);
	long SetText(unsigned short const *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CSDEnumWindows
{
	CSDEnumWindows(CSDWindows *,ShellWindowsEnumOptions);
	virtual long Clone(IEnumVARIANT * *);
	virtual long Next(unsigned long,tagVARIANT *,unsigned long *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Reset();
	virtual long Skip(unsigned long);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CSDWindows
{
	WindowData * _FindAndRemovePendingItem(HWND__ *,long);
	WindowData * _FindItem(long);
	int CSDEnumWindowsProc(HWND__ *,CSDWindows::TMW *);
	int _GetWindowDataAndPidl(_DPA *,int,WindowData * *,_ITEMIDLIST_ABSOLUTE * *);
	long _Item(tagVARIANT *,IDispatch * *,ShellWindowsEnumOptions,int *);
	static __int64 s_ThreadNotifyWndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	static int s_CSDEnumWindowsProc(HWND__ *,__int64);
	virtual ~CSDWindows();
	void _DoInvokeCookie(long,long,int);
public:
	CSDWindows();
	int Init();
	virtual long EnumConnectionPoints(IEnumConnectionPoints * *);
	virtual long FindConnectionPoint(_GUID const &,IConnectionPoint * *);
	virtual long FindWindowForChild(HWND__ *,_GUID const &,void * *);
	virtual long FindWindowSW(tagVARIANT *,tagVARIANT *,int,long *,int,IDispatch * *);
	virtual long GetIDsOfNames(_GUID const &,unsigned short * *,unsigned int,unsigned long,long *);
	virtual long GetTypeInfo(unsigned int,unsigned long,ITypeInfo * *);
	virtual long GetTypeInfoCount(unsigned int *);
	virtual long Invoke(long,_GUID const &,unsigned long,unsigned short,tagDISPPARAMS *,tagVARIANT *,tagEXCEPINFO *,unsigned int *);
	virtual long Item(tagVARIANT,IDispatch * *);
	virtual long OnActivated(long,short);
	virtual long OnCreated(long,IUnknown *);
	virtual long OnNavigate(long,tagVARIANT *);
	virtual long ProcessAttachDetach(short);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long QueryService(_GUID const &,_GUID const &,void * *);
	virtual long Register(IDispatch *,long,int,long *);
	virtual long RegisterPending(long,tagVARIANT *,tagVARIANT *,int,long *);
	virtual long Revoke(long);
	virtual long _NewEnum(IUnknown * *);
	virtual long get_Count(long *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
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

class CSafeElementListenerPtr<LineHScrollBar>
{
protected:
	virtual bool OnListenedPropertyChanging(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnListenedEvent(DirectUI::Element *,DirectUI::Event *);
	virtual void OnListenedInput(DirectUI::Element *,DirectUI::InputEvent *);
	virtual void OnListenedPropertyChanged(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnListenerAttach(DirectUI::Element *);
	virtual void OnListenerDetach(DirectUI::Element *);
public:
	void ReleaseListener();
};

class CSafeElementListenerPtr<LineScroller>
{
protected:
	virtual bool OnListenedPropertyChanging(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnListenedEvent(DirectUI::Element *,DirectUI::Event *);
	virtual void OnListenedInput(DirectUI::Element *,DirectUI::InputEvent *);
	virtual void OnListenedPropertyChanged(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnListenerAttach(DirectUI::Element *);
	virtual void OnListenerDetach(DirectUI::Element *);
public:
	long AssignListener(LineScroller *,CSafeElementListenerCB *);
	void ReleaseListener();
};

class CSafeElementListenerPtr<LineVScrollBar>
{
protected:
	virtual bool OnListenedPropertyChanging(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnListenedEvent(DirectUI::Element *,DirectUI::Event *);
	virtual void OnListenedInput(DirectUI::Element *,DirectUI::InputEvent *);
	virtual void OnListenedPropertyChanged(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnListenerAttach(DirectUI::Element *);
	virtual void OnListenerDetach(DirectUI::Element *);
public:
	void ReleaseListener();
};

class CSafeElementListenerPtr<LineViewer>
{
protected:
	virtual bool OnListenedPropertyChanging(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnListenedEvent(DirectUI::Element *,DirectUI::Event *);
	virtual void OnListenedInput(DirectUI::Element *,DirectUI::InputEvent *);
	virtual void OnListenedPropertyChanged(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnListenerAttach(DirectUI::Element *);
	virtual void OnListenerDetach(DirectUI::Element *);
public:
	void ReleaseListener();
};

class CSafeElementListenerPtr<LinkedViewer>
{
protected:
	virtual bool OnListenedPropertyChanging(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnListenedEvent(DirectUI::Element *,DirectUI::Event *);
	virtual void OnListenedInput(DirectUI::Element *,DirectUI::InputEvent *);
	virtual void OnListenedPropertyChanged(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnListenerAttach(DirectUI::Element *);
	virtual void OnListenerDetach(DirectUI::Element *);
public:
	long AssignListener(LinkedViewer *,CSafeElementListenerCB *);
	void ReleaseListener();
};

class CSafeElementListenerPtr<Resizer>
{
protected:
	virtual bool OnListenedPropertyChanging(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnListenedEvent(DirectUI::Element *,DirectUI::Event *);
	virtual void OnListenedInput(DirectUI::Element *,DirectUI::InputEvent *);
	virtual void OnListenedPropertyChanged(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnListenerAttach(DirectUI::Element *);
	virtual void OnListenerDetach(DirectUI::Element *);
public:
	void ReleaseListener();
};

class CSafeElementListenerPtr<UIBase>
{
protected:
	virtual bool OnListenedPropertyChanging(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnListenedEvent(DirectUI::Element *,DirectUI::Event *);
	virtual void OnListenedInput(DirectUI::Element *,DirectUI::InputEvent *);
	virtual void OnListenedPropertyChanged(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnListenerAttach(DirectUI::Element *);
	virtual void OnListenerDetach(DirectUI::Element *);
public:
	long AssignListener(UIBase *,CSafeElementListenerCB *);
	void ReleaseListener();
};

class CSafeElementListenerPtr<UIItem>
{
protected:
	virtual bool OnListenedPropertyChanging(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnListenedEvent(DirectUI::Element *,DirectUI::Event *);
	virtual void OnListenedInput(DirectUI::Element *,DirectUI::InputEvent *);
	virtual void OnListenedPropertyChanged(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnListenerAttach(DirectUI::Element *);
	virtual void OnListenerDetach(DirectUI::Element *);
public:
	long AssignListener(UIItem *,CSafeElementListenerCB *);
	void ReleaseListener();
};

class CSafeElementListenerPtr<UIItemsView>
{
protected:
	virtual bool OnListenedPropertyChanging(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnListenedEvent(DirectUI::Element *,DirectUI::Event *);
	virtual void OnListenedInput(DirectUI::Element *,DirectUI::InputEvent *);
	virtual void OnListenedPropertyChanged(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnListenerAttach(DirectUI::Element *);
	virtual void OnListenerDetach(DirectUI::Element *);
public:
	void ReleaseListener();
};

class CSafeElementListenerPtr<UIRenameTextElement>
{
protected:
	virtual bool OnListenedPropertyChanging(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnListenedEvent(DirectUI::Element *,DirectUI::Event *);
	virtual void OnListenedInput(DirectUI::Element *,DirectUI::InputEvent *);
	virtual void OnListenedPropertyChanged(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnListenerAttach(DirectUI::Element *);
	virtual void OnListenerDetach(DirectUI::Element *);
public:
	long AssignListener(UIRenameTextElement *,CSafeElementListenerCB *);
	void ReleaseListener();
};

struct CSafeElementPtr<DirectUI::Element>
{
	void Unassign();
};

struct CSafeElementPtr<ItemLayout>
{
	void Unassign();
};

struct CSafeElementPtr<ItemRowLayout>
{
	void Unassign();
};

struct CSafeElementPtr<LineScroller>
{
	void Unassign();
};

struct CSafeElementPtr<UICollection>
{
	void Unassign();
};

struct CSafeElementPtr<UIColumnHeader>
{
	void Unassign();
};

struct CSafeElementPtr<UIGroupItem>
{
	void Unassign();
};

struct CSafeElementPtr<UIItem>
{
	void Unassign();
};

struct CSafeElementPtr<UIItemsView>
{
	void Unassign();
};

struct CSafeElementPtr<UIMarqueeSelector>
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

class CSafeElementPtrBase<ItemLayout>
{
protected:
	virtual bool OnListenedPropertyChanging(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnListenedEvent(DirectUI::Element *,DirectUI::Event *);
	virtual void OnListenedInput(DirectUI::Element *,DirectUI::InputEvent *);
	virtual void OnListenedPropertyChanged(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnListenerAttach(DirectUI::Element *);
	virtual void OnListenerDetach(DirectUI::Element *);
};

class CSafeElementPtrBase<ItemRowLayout>
{
protected:
	virtual bool OnListenedPropertyChanging(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnListenedEvent(DirectUI::Element *,DirectUI::Event *);
	virtual void OnListenedInput(DirectUI::Element *,DirectUI::InputEvent *);
	virtual void OnListenedPropertyChanged(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnListenerAttach(DirectUI::Element *);
	virtual void OnListenerDetach(DirectUI::Element *);
};

class CSafeElementPtrBase<LineScroller>
{
protected:
	long _Assign(LineScroller *);
	virtual bool OnListenedPropertyChanging(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnListenedEvent(DirectUI::Element *,DirectUI::Event *);
	virtual void OnListenedInput(DirectUI::Element *,DirectUI::InputEvent *);
	virtual void OnListenedPropertyChanged(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnListenerAttach(DirectUI::Element *);
	virtual void OnListenerDetach(DirectUI::Element *);
};

class CSafeElementPtrBase<UICollection>
{
protected:
	virtual bool OnListenedPropertyChanging(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnListenedEvent(DirectUI::Element *,DirectUI::Event *);
	virtual void OnListenedInput(DirectUI::Element *,DirectUI::InputEvent *);
	virtual void OnListenedPropertyChanged(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnListenerAttach(DirectUI::Element *);
	virtual void OnListenerDetach(DirectUI::Element *);
};

class CSafeElementPtrBase<UIColumnHeader>
{
protected:
	virtual bool OnListenedPropertyChanging(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnListenedEvent(DirectUI::Element *,DirectUI::Event *);
	virtual void OnListenedInput(DirectUI::Element *,DirectUI::InputEvent *);
	virtual void OnListenedPropertyChanged(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnListenerAttach(DirectUI::Element *);
	virtual void OnListenerDetach(DirectUI::Element *);
};

class CSafeElementPtrBase<UIGroupItem>
{
protected:
	virtual bool OnListenedPropertyChanging(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnListenedEvent(DirectUI::Element *,DirectUI::Event *);
	virtual void OnListenedInput(DirectUI::Element *,DirectUI::InputEvent *);
	virtual void OnListenedPropertyChanged(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnListenerAttach(DirectUI::Element *);
	virtual void OnListenerDetach(DirectUI::Element *);
};

class CSafeElementPtrBase<UIItem>
{
protected:
	long _Assign(UIItem *);
	virtual bool OnListenedPropertyChanging(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnListenedEvent(DirectUI::Element *,DirectUI::Event *);
	virtual void OnListenedInput(DirectUI::Element *,DirectUI::InputEvent *);
	virtual void OnListenedPropertyChanged(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnListenerAttach(DirectUI::Element *);
	virtual void OnListenerDetach(DirectUI::Element *);
};

class CSafeElementPtrBase<UIItemsView>
{
protected:
	long _Assign(UIItemsView *);
	virtual bool OnListenedPropertyChanging(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnListenedEvent(DirectUI::Element *,DirectUI::Event *);
	virtual void OnListenedInput(DirectUI::Element *,DirectUI::InputEvent *);
	virtual void OnListenedPropertyChanged(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnListenerAttach(DirectUI::Element *);
	virtual void OnListenerDetach(DirectUI::Element *);
};

class CSafeElementPtrBase<UIMarqueeSelector>
{
protected:
	virtual bool OnListenedPropertyChanging(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnListenedEvent(DirectUI::Element *,DirectUI::Event *);
	virtual void OnListenedInput(DirectUI::Element *,DirectUI::InputEvent *);
	virtual void OnListenedPropertyChanged(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnListenerAttach(DirectUI::Element *);
	virtual void OnListenerDetach(DirectUI::Element *);
};

class CSearchBox
{
	long _CreateWrapperHwnd();
	void UpdateChildButtonPadding();
	void _CleanUpForDestroy();
	void _InitTabletTip(HWND__ *);
	void _Invalidate();
	void _OnEditChange();
	void _PositionChildWindows();
	void _RefreshTheme();
	void _SetClearButton(int);
protected:
	static __int64 s_WndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	static __int64 s_WrapperWndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
public:
	CSearchBox();
	virtual bool OnListenedPropertyChanging(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual long AppendOrReplaceFilter(_tagpropertykey const &,tagPROPVARIANT const *,IFilterCondition *);
	virtual long ContextSensitiveHelp(int);
	virtual long DoesEditBoxHaveFocus(int *);
	virtual long GetDesiredSize(tagSIZE *);
	virtual long GetFlags(SSCSTATEFLAGS *);
	virtual long GetSearchControl(IShellSearchControl * *);
	virtual long GetText(unsigned short *,unsigned int);
	virtual long GetWindow(HWND__ * *);
	virtual long HasFocusIO();
	virtual long HasSuggestions();
	virtual long HideSuggestions();
	virtual long Initialize(HWND__ *,tagRECT const *);
	virtual long IsWindowOwner(HWND__ *);
	virtual long KillSelection();
	virtual long OnWinEvent(HWND__ *,unsigned int,unsigned __int64,__int64,__int64 *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SetBorderPadding(_MARGINS const &);
	virtual long SetCueAndTooltipText(unsigned short const *,unsigned short const *);
	virtual long SetFlags(SSCSTATEFLAGS);
	virtual long SetLocation(IShellItem *);
	virtual long SetMRULocation(_GUID const &);
	virtual long SetPopupFlags(SEARCH_BOX_SUGGEST_POPUP_SETTING);
	virtual long SetSearchState(SHELL_SEARCH_BAND_SEARCH_STATE);
	virtual long SetSearchTarget(IShellSearchTarget *);
	virtual long SetSearchText(unsigned short const *,tagSBSST_FLAGS);
	virtual long SetSite(IUnknown *);
	virtual long SetText(unsigned short const *,SSCTEXTFLAGS);
	virtual long Show(int);
	virtual long TranslateAcceleratorIO(tagMSG *);
	virtual long UIActivateIO(int,tagMSG *);
	virtual long UpdatePendingText(unsigned short *);
	virtual long UpdateWidth(int,SSC_WIDTH_FLAGS);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual void OnListenedEvent(DirectUI::Element *,DirectUI::Event *);
	virtual void OnListenedInput(DirectUI::Element *,DirectUI::InputEvent *);
	virtual void OnListenedPropertyChanged(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnListenerAttach(DirectUI::Element *);
	virtual void OnListenerDetach(DirectUI::Element *);
	virtual ~CSearchBox();
};

class CSearchBoxDUIHost
{
	long _CreateFromResource();
	void _OnSize();
public:
	static DirectUI::IClassInfo * Class;
	static __int64 s_SubclassProc(HWND__ *,unsigned int,unsigned __int64,__int64,unsigned __int64,unsigned __int64);
	static long Create(HWND__ *,bool,unsigned int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	virtual DirectUI::IClassInfo * GetClassInfoW();
	virtual __int64 WndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	virtual long CreateStyleParser(DirectUI::DUIXmlParser * *);
	virtual void OnThemeChanged(DirectUI::ThemeChangedEvent *);
	virtual void Paint(HDC__ *,tagRECT const *,tagRECT const *,tagRECT *,tagRECT *);
};

struct CSearchBoxPopupCallback
{
	virtual long GetCurrentPropertyString(int,unsigned short * *);
	virtual long OnAppendKey(_tagpropertykey const &);
	virtual long OnCommitFilter(int,_tagpropertykey const &);
	virtual long OnGetLocation(tagPOINT *);
	virtual long OnGetWidth(int *);
	virtual long OnHostHasSelection();
	virtual long OnMouseLeave();
	virtual long OnReplaceFilter(int,_tagpropertykey const &,IFilterCondition *);
	virtual long OnReplaceQuery(unsigned short const *,int);
	virtual long OnRestoreQuery();
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CSearchBoxProvider
{
	CSearchBoxProvider();
};

struct CSearchBoxTextProvider
{
	CSearchBoxTextProvider();
	virtual long GetSelection(tagSAFEARRAY * *);
	virtual long GetVisibleRanges(tagSAFEARRAY * *);
	virtual long RangeFromChild(IRawElementProviderSimple *,ITextRangeProvider * *);
	virtual long RangeFromPoint(UiaPoint,ITextRangeProvider * *);
	virtual long get_DocumentRange(ITextRangeProvider * *);
	virtual long get_SupportedTextSelection(SupportedTextSelection *);
};

class CSearchBoxTextProxy
{
	long CreateTextRangeProvider(ITextRange *,ITextRangeProvider * *);
	long _GetDocumentRange(ITextRangeProvider * *);
	long _GetRangeFromPoint(UiaPoint,ITextRangeProvider * *);
	long _GetSelection(tagSAFEARRAY * *);
	long _GetVisibleRanges(tagSAFEARRAY * *);
public:
	virtual long DoMethod(int,char *);
};

class CSearchBoxTextRangeProvider
{
	int _MoveEndOneFormatUnit(int,ITextRange *);
	int _MoveStartOneFormatUnit(int,ITextRange *);
	long Initialize(ITextRange *,IRawElementProviderSimple *);
	long _GetAttributeValueFromRange(ITextRange *,int,tagVARIANT *);
	long _MoveEndFormatUnit(int,ITextRange *);
	long _MoveFormatUnit(int,ITextRange *);
	long _MoveStartFormatUnit(int,ITextRange *);
	long _TomUnitFromTextUnit(TextUnit);
	~CSearchBoxTextRangeProvider();
public:
	static long s_CreateInstance(ITextRange *,IRawElementProviderSimple *,_GUID const &,void * *);
	virtual long AddToSelection();
	virtual long Clone(ITextRangeProvider * *);
	virtual long Compare(ITextRangeProvider *,int *);
	virtual long CompareEndpoints(TextPatternRangeEndpoint,ITextRangeProvider *,TextPatternRangeEndpoint,int *);
	virtual long ExpandToEnclosingUnit(TextUnit);
	virtual long FindAttribute(int,tagVARIANT,int,ITextRangeProvider * *);
	virtual long FindTextW(unsigned short *,int,int,ITextRangeProvider * *);
	virtual long GetAttributeValue(int,tagVARIANT *);
	virtual long GetBoundingRectangles(tagSAFEARRAY * *);
	virtual long GetChildren(tagSAFEARRAY * *);
	virtual long GetEnclosingElement(IRawElementProviderSimple * *);
	virtual long GetText(int,unsigned short * *);
	virtual long GetTextRange(ITextRange * *);
	virtual long Move(TextUnit,int,int *);
	virtual long MoveEndpointByRange(TextPatternRangeEndpoint,ITextRangeProvider *,TextPatternRangeEndpoint);
	virtual long MoveEndpointByUnit(TextPatternRangeEndpoint,TextUnit,int,int *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long RemoveFromSelection();
	virtual long ScrollIntoView(int);
	virtual long Select();
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CSearchBoxValueProvider
{
	CSearchBoxValueProvider();
	virtual long SetValue(unsigned short const *);
	virtual long get_IsReadOnly(int *);
	virtual long get_Value(unsigned short * *);
};

struct CSearchBoxValueProxy
{
	virtual long DoMethod(int,char *);
};

struct CSearchClearMruCommand
{
	virtual long Invoke(IShellItemArray *,IBindCtx *);
};

struct CSearchCloseTabCommand
{
	virtual long GetState(IShellItemArray *,int,unsigned long *);
	virtual long Invoke(IShellItemArray *,IBindCtx *);
};

class CSearchCommandBase
{
protected:
	virtual ~CSearchCommandBase();
public:
	virtual long EnumSubCommands(IEnumExplorerCommand * *);
	virtual long GetCanonicalName(_GUID *);
	virtual long GetFlags(unsigned long *);
	virtual long GetIcon(IShellItemArray *,unsigned short * *);
	virtual long GetState(IShellItemArray *,int,unsigned long *);
	virtual long GetTitle(IShellItemArray *,unsigned short * *);
	virtual long GetToolTip(IShellItemArray *,unsigned short * *);
	virtual long Invoke(IShellItemArray *,IBindCtx *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CSearchControl
{
	__int64 _OnCommand(unsigned __int64,__int64);
	__int64 _OnCustomDraw(tagNMCUSTOMDRAWINFO *);
	__int64 _OnNotify(tagNMHDR *);
	__int64 _SubclassWndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	int _MouseOverSplitButton();
	long _GetSearchText(unsigned short *,unsigned int);
	long _OnKeyDown(tagMSG *);
	static __int64 s_SubclassWndProc(HWND__ *,unsigned int,unsigned __int64,__int64,unsigned __int64,unsigned __int64);
	void _CalcEditControlRect(tagRECT *);
	void _DestroyFont();
	void _OnBackgroundStateChanged();
	void _OnEditChange();
	void _PositionChildWindows();
	void _RefreshTheme(int);
	void _SetClearButton(int);
	void _SetToolbarImageLists();
	void _UpdateEditControlFont();
	void _UpdateFont();
protected:
	static __int64 s_WndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
public:
	virtual long ContextSensitiveHelp(int);
	virtual long DoesEditBoxHaveFocus(int *);
	virtual long GetDesiredSize(tagSIZE *);
	virtual long GetFlags(SSCSTATEFLAGS *);
	virtual long GetSearchControl(IShellSearchControl * *);
	virtual long GetText(unsigned short *,unsigned int);
	virtual long GetWindow(HWND__ * *);
	virtual long HasFocusIO();
	virtual long HasSuggestions();
	virtual long HideSuggestions();
	virtual long Initialize(HWND__ *,tagRECT const *);
	virtual long IsWindowOwner(HWND__ *);
	virtual long KillSelection();
	virtual long OnWinEvent(HWND__ *,unsigned int,unsigned __int64,__int64,__int64 *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SetCueAndTooltipText(unsigned short const *,unsigned short const *);
	virtual long SetFlags(SSCSTATEFLAGS);
	virtual long SetLocation(IShellItem *);
	virtual long SetMRULocation(_GUID const &);
	virtual long SetPopupFlags(SEARCH_BOX_SUGGEST_POPUP_SETTING);
	virtual long SetSearchState(SHELL_SEARCH_BAND_SEARCH_STATE);
	virtual long SetSearchTarget(IShellSearchTarget *);
	virtual long SetSearchText(unsigned short const *,tagSBSST_FLAGS);
	virtual long SetSite(IUnknown *);
	virtual long SetText(unsigned short const *,SSCTEXTFLAGS);
	virtual long TranslateAcceleratorIO(tagMSG *);
	virtual long UIActivateIO(int,tagMSG *);
	virtual long UpdateWidth(int,SSC_WIDTH_FLAGS);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~CSearchControl();
};

class CSearchDepthCommand
{
	long _Initialize();
public:
	virtual long GetState(IShellItemArray *,int,unsigned long *);
	virtual long Invoke(IShellItemArray *,IBindCtx *);
};

class CSearchEditBox
{
	UI_CONTEXTAVAILABILITY _GetSearchRibbonState();
	int _CreateFakeWindow();
	int _EnableFilterSuggestion();
	int _IsAlphaNumericRangedProperty(_tagpropertykey const &);
	int _IsRetrievableProperty(_tagpropertykey const &);
	int _PropertyValueFocus(IPropertyKeyStore *,int *,int *,_tagpropertykey *);
	int _ShouldShowFilter(IPropertyKeyStore *);
	int _ShouldShowPopup();
	int _WordWheelHasMeaningfullyChanged();
	long _AppendKeyToSearchText(_tagpropertykey const &,unsigned short * *);
	long _AutoHideSuggestions();
	long _ClearDanglingProperties();
	long _CreateTerms(unsigned short const *,ITokenCollection *,ICondition *,CDPA<CSCParsedTerm,CTContainer_PolicyUnOwned<CSCParsedTerm> > *);
	long _DoContextMenu(tagPOINT);
	long _DoKeyboardContextMenu();
	long _EnsurePopup();
	long _EnsurePopupCallback();
	long _ExtractCoveredString(unsigned short const *,ITokenCollection *,unsigned long,unsigned long,unsigned short * *);
	long _FormatText();
	long _GetDefaultKeyPhrase(_tagpropertykey const &,unsigned short * *);
	long _GetPropertiesInUse(IPropertyKeyStore *);
	long _InitParser();
	long _MatchTokensToConditions(unsigned short const *,ITokenCollection *,CDPA<CSCParsedTerm,CTContainer_PolicyUnOwned<CSCParsedTerm> > *,ICondition *);
	long _Parse(unsigned short const *);
	long _PropertyKeysFromKey(_tagpropertykey const &,PROPERTY_EXPANSION_FLAGS,IPropertyKeyStore *,_tagpropertykey *,int *);
	long _PropertyKeysFromTerm(CSCParsedTerm *,PROPERTY_EXPANSION_FLAGS,int,IPropertyKeyStore *,_tagpropertykey *,int *);
	long _QueryStringFromFilterCondition(IFilterCondition *,unsigned short * *);
	long _ReplaceTerm(int,unsigned short const *,int *,int *);
	long _SaveQueryText();
	long _SetTokenData(SCPTTYPE,IRichChunk *,unsigned short const *,ITokenCollection *,ICondition *,CDPA<CSCParsedTerm,CTContainer_PolicyUnOwned<CSCParsedTerm> > *);
	long _ShowSuggestionPopup(int);
	long _TextToTerms(unsigned short const *,CDPA<CSCParsedTerm,CTContainer_PolicyUnOwned<CSCParsedTerm> > *);
	long _TranslateInconvenientDateTime(unsigned short const *,tagPROPVARIANT *);
	long _UpdateTextAndReparse(unsigned short const *);
	static __int64 s_WrapperWndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	static int s_DrawThemeTextCB(HDC__ *,unsigned short *,int,tagRECT *,unsigned int,__int64);
	unsigned long _GetTextColor(CSearchEditBox::SEARCHEDITBOXTEXTCOLOR);
	virtual HWND__ * _GetClipboardWindow();
	virtual HWND__ * _GetSearchBoxWindow();
	virtual int _HandleKeyDown(unsigned int,unsigned __int64,__int64);
	virtual long _ReplaceSubStringAndUpdate(unsigned short const *,int,int,int,int *);
	virtual void _SetEmptyText();
	virtual void _SetText(unsigned short const *);
	virtual void _UpdateFont();
	void _Draw(HDC__ *,tagRECT *);
	void _WaitForNavigateOrShowPopup();
public:
	CSearchEditBox();
	bool IsPropertyAtIndex(int,_tagpropertykey const &);
	bool ParsingEnabled();
	int HasSuggestions();
	long AppendOrReplaceFilter(_tagpropertykey const &,tagPROPVARIANT const *,IFilterCondition *);
	long GetCurrentPropertyString(int,unsigned short * *);
	long GetStrippedSearchText(unsigned short * *);
	long HideSuggestions();
	long OnAppendKeyEx(_tagpropertykey const &,int);
	long OnGetLocation(tagPOINT *);
	long OnGetWidth(int *);
	long OnReplaceFilter(int,_tagpropertykey const &,IFilterCondition *);
	long OnReplaceQuery(unsigned short const *,int);
	long OnRestoreQuery();
	long SetLocation(IShellItem *);
	static DirectUI::IClassInfo * Class;
	virtual DirectUI::IClassInfo * GetClassInfoW();
	virtual long RECNotify(unsigned long,void *);
	virtual long SetSite(IUnknown *);
	virtual void CaretMoved();
	virtual void OnDestroy();
	virtual void OnInput(DirectUI::InputEvent *);
	virtual void OnPropertyChanged(DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void Paint(HDC__ *,tagRECT const *,tagRECT const *,tagRECT *,tagRECT *);
};

class CSearchEditBoxBase
{
protected:
	int _IsHighContrast();
	long _ClearTextIfSelected();
	long _CopyToClipboard();
	long _CreateTextServices(IUnknown *,ITextHost *,IUnknown * *);
	long _DeleteSelection();
	long _GetRECText(unsigned short * *);
	long _GetSelection(int *,int *);
	long _InitializeLinguisticAlternativeGenerator();
	long _RemoveCharRange(unsigned short *,long,long);
	long _ReplaceSubString(unsigned short const *,int,int,int,unsigned short * *,int *);
	static unsigned int const (* s_rgMouseMap)[3];
	static unsigned int const * const s_rgDblClickMap;
	virtual HWND__ * _GetClipboardWindow();
	virtual HWND__ * _GetSearchBoxWindow();
	virtual int _HandleKeyDown(unsigned int,unsigned __int64,__int64);
	virtual long _ReplaceSubStringAndUpdate(unsigned short const *,int,int,int,int *);
	virtual void _PostImeFinalizeEvent();
	virtual void _SetEmptyText();
	virtual void _SetText(unsigned short const *);
	virtual void _UpdateFont();
	void _ClearSearchText();
	void _HandleBackspace();
	void _HidePromptText();
	void _NotifyTextServices();
	void _SetCursorPosition(int);
	void _SetEmpty(bool);
	void _UpdateParagraphFormat();
public:
	CSearchEditBoxBase();
	bool HasSelection();
	bool IsProgrammaticChange();
	bool PromptWithCaretEnabled();
	long DUI_UiaRaiseAutomationEvent(DirectUI::Element *,DirectUI::Value *,DirectUI::Value *);
	long ForwardMessage(unsigned int,unsigned __int64,__int64,__int64 *);
	long GetClientRect(tagRECT *);
	long GetSearchText(unsigned short * *);
	long GetTextDocument(ITextDocument * *);
	long Initialize(int,unsigned int,DirectUI::Element *,unsigned long *);
	long SetProgrammaticChange(bool);
	static DirectUI::IClassInfo * Class;
	virtual DirectUI::IClassInfo * GetClassInfoW();
	virtual long GetElementProviderImpl(DirectUI::InvokeHelper *,DirectUI::ElementProvider * *);
	virtual long OnImeCompositionChanged(IQueryWithLinguisticAlternatives *,int);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long RECNotify(unsigned long,void *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual void CaretMoved();
	virtual void OnDestroy();
	virtual void OnHosted(DirectUI::Element *);
	virtual void OnKeyFocusMoved(DirectUI::Element *,DirectUI::Element *);
	void KillSelection();
	void SelectAll();
	void ShowPromptText();
};

class CSearchEditBoxHost
{
protected:
	virtual tagSIZE _SelfLayoutUpdateDesiredSize(int,int,DirectUI::Surface *);
	virtual void _SelfLayoutDoLayout(int,int);
public:
	static DirectUI::IClassInfo * Class;
	static long Create(DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	virtual DirectUI::IClassInfo * GetClassInfoW();
	virtual void Paint(HDC__ *,tagRECT const *,tagRECT const *,tagRECT *,tagRECT *);
};

class CSearchEditTextHost
{
	int _CacheHWNDHost();
public:
	CSearchEditTextHost(CSearchEditBoxBase *);
	virtual HDC__ * TxGetDC();
	virtual HICON__ * TxSetCursor2(HICON__ *,int);
	virtual HIMC__ * TxImmGetContext();
	virtual HPALETTE__ * TxGetPalette();
	virtual bool OnListenedPropertyChanging(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual int TxClientToScreen(tagPOINT *);
	virtual int TxCreateCaret(HBITMAP__ *,int,int);
	virtual int TxEnableScrollBar(int,int);
	virtual int TxIsDoubleClickPending();
	virtual int TxReleaseDC(HDC__ *);
	virtual int TxScreenToClient(tagPOINT *);
	virtual int TxSetCaretPos(int,int);
	virtual int TxSetScrollPos(int,int,int);
	virtual int TxSetScrollRange(int,long,int,int);
	virtual int TxSetTimer(unsigned int,unsigned int);
	virtual int TxShowCaret(int);
	virtual int TxShowScrollBar(int,int);
	virtual long ContextSensitiveHelp(int);
	virtual long DeleteObject(IOleObject *);
	virtual long GetClipboardData(_charrange *,unsigned long,IDataObject * *);
	virtual long GetContextMenu(unsigned short,IOleObject *,_charrange *,HMENU__ * *);
	virtual long GetDragDropEffect(int,unsigned long,unsigned long *);
	virtual long GetInPlaceContext(IOleInPlaceFrame * *,IOleInPlaceUIWindow * *,tagOIFI *);
	virtual long GetNewStorage(IStorage * *);
	virtual long OnTxCharFormatChange(_charformatw const *);
	virtual long OnTxParaFormatChange(_paraformat const *);
	virtual long QueryAcceptData(IDataObject *,unsigned short *,unsigned long,int,void *);
	virtual long QueryInsertObject(_GUID *,IStorage *,long);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long ShowContainerUI(int);
	virtual long TxActivate(long *);
	virtual long TxDeactivate(long);
	virtual long TxDestroyCaret();
	virtual long TxGetAcceleratorPos(long *);
	virtual long TxGetBackStyle(TXTBACKSTYLE *);
	virtual long TxGetCharFormat(_charformatw const * *);
	virtual long TxGetClientRect(tagRECT *);
	virtual long TxGetEastAsianFlags(long *);
	virtual long TxGetEditStyle(unsigned long,unsigned long *);
	virtual long TxGetExtent(tagSIZE *);
	virtual long TxGetHorzExtent(long *);
	virtual long TxGetMaxLength(unsigned long *);
	virtual long TxGetParaFormat(_paraformat const * *);
	virtual long TxGetPasswordChar(unsigned short *);
	virtual long TxGetPropertyBits(unsigned long,unsigned long *);
	virtual long TxGetScrollBars(unsigned long *);
	virtual long TxGetSelectionBarWidth(long *);
	virtual long TxGetViewInset(tagRECT *);
	virtual long TxGetWindow(HWND__ * *);
	virtual long TxGetWindowStyles(unsigned long *,unsigned long *);
	virtual long TxNotify(unsigned long,void *);
	virtual long TxSetForegroundWindow();
	virtual long TxShowDropCaret(int,HDC__ *,tagRECT const *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual unsigned long TxGetSysColor(int);
	virtual void OnListenedEvent(DirectUI::Element *,DirectUI::Event *);
	virtual void OnListenedInput(DirectUI::Element *,DirectUI::InputEvent *);
	virtual void OnListenedPropertyChanged(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnListenerAttach(DirectUI::Element *);
	virtual void OnListenerDetach(DirectUI::Element *);
	virtual void TxFreeTextServicesNotification();
	virtual void TxImmReleaseContext(HIMC__ *);
	virtual void TxInvalidateRect(tagRECT const *,int);
	virtual void TxKillTimer(unsigned int);
	virtual void TxScrollWindowEx(int,int,tagRECT const *,tagRECT const *,HRGN__ *,tagRECT *,unsigned int);
	virtual void TxSetCapture(int);
	virtual void TxSetCursor(HICON__ *,int);
	virtual void TxSetFocus();
	virtual void TxViewChange(int);
};

class CSearchFilterExplorerCommand
{
	long _Initialize();
public:
	virtual long GetTitle(IShellItemArray *,unsigned short * *);
	virtual long Invoke(IShellItemArray *,IBindCtx *);
};

class CSearchMRUEnumCommand
{
protected:
	virtual long _Initialize();
};

struct CSearchMRUGallery
{
	virtual long GetState(IShellItemArray *,int,unsigned long *);
};

class CSearchMSExecute
{
protected:
	virtual long _GetIDList(IShellItem *,_ITEMIDLIST_ABSOLUTE * *,int *);
public:
	virtual long Execute();
};

class CSearchManager
{
	long _SetMenu();
public:
	long OnFocus(int);
	long OnKeyDown(tagMSG *,unsigned short const *);
	long OnMenu(unsigned short const *);
	long OnSearchTextNotify(unsigned short const *,unsigned short const *,SHELLSEARCHNOTIFY);
	long SetSearchState(SHELL_SEARCH_BAND_SEARCH_STATE);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CSearchMorePropertiesCommand
{
	virtual long GetState(IShellItemArray *,int,unsigned long *);
};

class CSearchMorePropertiesEnum
{
protected:
	virtual long _Initialize();
};

struct CSearchMruCommand
{
	CSearchMruCommand(unsigned short const *);
	virtual long GetTitle(IShellItemArray *,unsigned short * *);
	virtual long Invoke(IShellItemArray *,IBindCtx *);
};

struct CSearchOptionCommand
{
	virtual long GetState(IShellItemArray *,int,unsigned long *);
	virtual long Invoke(IShellItemArray *,IBindCtx *);
};

struct CSearchSaveSearchCommand
{
	virtual long GetState(IShellItemArray *,int,unsigned long *);
	virtual long Invoke(IShellItemArray *,IBindCtx *);
};

class CSearchSendToCommand
{
	long _NewScope(IScope * *);
	long _ReplaceSearchIDListScope(_ITEMIDLIST_ABSOLUTE const *,AUTOLISTFLAGS,unsigned short const *,IScope *,_ITEMIDLIST_ABSOLUTE * *);
protected:
	virtual ~CSearchSendToCommand();
public:
	CSearchSendToCommand(IShellItem *);
	long InitFromKnownFolder(_GUID const &,EMPTY_SEARCH_INVOCATION);
	virtual long GetIcon(IShellItemArray *,unsigned short * *);
	virtual long GetState(IShellItemArray *,int,unsigned long *);
	virtual long GetTitle(IShellItemArray *,unsigned short * *);
	virtual long Invoke(IShellItemArray *,IBindCtx *);
};

struct CSearchSendToComputerCommand
{
	virtual long GetIcon(IShellItemArray *,unsigned short * *);
	virtual long GetTitle(IShellItemArray *,unsigned short * *);
};

class CSearchSendToEnumCommand
{
	bool _ShouldIncludeKnownFolder(_GUID const &);
protected:
	virtual long _Initialize();
};

struct CSearchSendToGalleryCommand
{
	virtual long GetState(IShellItemArray *,int,unsigned long *);
};

class CSearchSendToHistoryVaultCommand
{
	long _Initialize();
public:
	virtual long GetIcon(IShellItemArray *,unsigned short * *);
	virtual long GetTitle(IShellItemArray *,unsigned short * *);
	virtual long Invoke(IShellItemArray *,IBindCtx *);
};

class CSearchSendToInternetCommand
{
	long _Initialize();
public:
	virtual long GetIcon(IShellItemArray *,unsigned short * *);
	virtual long GetTitle(IShellItemArray *,unsigned short * *);
	virtual long Invoke(IShellItemArray *,IBindCtx *);
};

class CSearchStaticFilterEnum
{
protected:
	virtual long _Initialize();
};

struct CSearchStaticFilterExplorerCommand
{
	virtual long EnumSubCommands(IEnumExplorerCommand * *);
	virtual long GetState(IShellItemArray *,int,unsigned long *);
};

struct CSearchTabHandler
{
	virtual long Execute(unsigned int,UI_EXECUTIONVERB,_tagpropertykey const *,tagPROPVARIANT const *,IUISimplePropertySet *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long UpdateProperty(unsigned int,_tagpropertykey const &,tagPROPVARIANT const *,tagPROPVARIANT *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CSearchTryHarderCommand
{
	CSearchTryHarderCommand(ITryHarderItem *);
	virtual long GetIcon(IShellItemArray *,unsigned short * *);
	virtual long GetTitle(IShellItemArray *,unsigned short * *);
	virtual long Invoke(IShellItemArray *,IBindCtx *);
};

class CSelectionManager
{
	int _IsClickInItemWhitespace(DirectUI::MouseEvent *);
	long _CreateMarquee();
	long _GetSelectableItemFromElement(DirectUI::Element *,IItem * *,UIItem * *);
	long _HandleHoverSelect(DirectUI::MouseEvent *);
	long _HandleLeftMouseDown(DirectUI::MouseEvent *);
	long _HandleLeftMouseUp(DirectUI::MouseEvent *);
	long _HandleRightMouseDown(DirectUI::MouseEvent *);
	long _HandleSpaceKey(DirectUI::KeyboardEvent *);
	long _UpdateElementTreeFromItemsHost(DirectUI::Element *,__MIDL___MIDL_itf_itemsview_0000_0004_0001);
	long _UpdateElementTreeFromItemsHostWorker(DirectUI::Element *,__MIDL___MIDL_itf_itemsview_0000_0004_0001,CSelectionManager::SelectionEventChange *);
	void _CheckForWhitespaceInElementTree(DirectUI::Element *,CheckWhitespaceEvent *);
	void _ClearSelectionForBackgroundClick(DirectUI::MouseEvent *);
public:
	CSelectionManager(IFocusManager *);
	virtual int HasSelection();
	virtual int IsInSelectMode();
	virtual int IsMarqueeActive();
	virtual int IsSelectAll();
	virtual int IsSelected(IItem *);
	virtual long FocusChanged(DirectUI::Element *);
	virtual long GetFirstSelectedItem(IItem * *);
	virtual long GetLastExplicitlySelectedItem(IItem *,IItemCollection *,unsigned int *);
	virtual long GetNextSelectedIndex(int,int *);
	virtual long GetSelection(_GUID const &,void * *);
	virtual long GetSelectionManagerSpy(ISelectionManagerSpy * *);
	virtual long GetSelectionMarkedItem(IItem * *);
	virtual long GetSelectionModes(__MIDL___MIDL_itf_itemsview_0000_0005_0001 *);
	virtual long GetSelectionStartingWithItem(IItem *,_GUID const &,void * *);
	virtual long GetSelectionState(CSelectionState const * *);
	virtual long HandleInputEvent(DirectUI::InputEvent *);
	virtual long OnCollectionEvent(IItemCollection *,CollectionEventParams const *);
	virtual long OnGroupByChanged();
	virtual long OnSelectionChanged(__MIDL___MIDL_itf_itemsview_0000_0004_0001);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long RemoveBackReferences();
	virtual long SelectionChange(__MIDL___MIDL_itf_itemsview_0000_0004_0001,IItem *);
	virtual long SelectionChangeList(__MIDL___MIDL_itf_itemsview_0000_0004_0001,IItem * *,int);
	virtual long SetSelectionModes(FOLDERFLAGS);
	virtual long SetUIItemsView(UIItemsView *);
	virtual long UserMovedFocusWithKeyboard(DirectUI::Element *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual void OnSelectedItemsModified();
	virtual void SetSelectMode(int);
	virtual void UpdateSelectionStateIfNewer(IItem *);
};

struct CSelectionManagerSpy
{
	static long s_CreateInstance(CSelectionManager *,_GUID const &,void * *);
	virtual long GetValue(SELECTIONMANAGERVALUE,tagVARIANT *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CSelectionState
{
	struct CInvertStates
	{
		int Enum(ATL::CComPtr<IItem> const &,SelectionState &);
	};

	ITEM_IS_SELECTED _GetExplicitGroupSelection(IItem *);
	int _IsFocusFirstArrayInvalidated(IItem *);
	int _UseMVPAlgorithms();
	long _ApplySelectionChange(__MIDL___MIDL_itf_itemsview_0000_0004_0001,IItem * *,int,IItem *);
	long _BubbleImplicitSelectionToGroupOfItem(IItem *);
	long _ClearSelectionState(IItem *);
	long _CreateSelectionArrayWithStartingItem(IItem *,_GUID const &,void * *);
	long _CtrlSelectOrDeselect(IItem *);
	long _Deselect(IItem *);
	long _DeselectAll();
	long _DeselectGroup(IItem *);
	long _DeselectItem(IItem *);
	long _EnsureSharedItemDevirtualizerInitialState();
	long _FindFirstItemInCollection(IItemCollection *,int (*)(IItem *,CSelectionState *),IItem * *);
	long _GetSelectionState(IItem *,SelectionState *,CSelectionState::ISGROUP);
	long _InvertSelection();
	long _IsSelected(IItem *,int *,SELECTED_TYPE *,CSelectionState::ISGROUP);
	long _IsSelectedByParentChain(IItem *,ITEM_IS_SELECTED *,CSelectionState::ISGROUP);
	long _RemoveAllStaleGroupsContainingItem(IItem *);
	long _RemoveChildSelectionStates(IItem *);
	long _RemoveStaleGroup(IItem *);
	long _RemoveStaleRoot();
	long _Select(IItem *);
	long _SelectGroup(IItem *);
	long _SelectItem(IItem *);
	long _SelectItemsExclusive(IItemCollection *,IItem *,IItem *,int,int *);
	long _SelectItemsFromExclusive(IItemCollection *,IItem *,int);
	long _SelectItemsToExclusive(IItemCollection *,IItem *,int);
	long _SelectRange(IItemCollection *,unsigned int,unsigned int,unsigned int,int);
	long _SetAnchor(IItem *);
	long _SetSelectionState(IItem *,GROUPNESS_HINT,ITEM_IS_SELECTED,SELECTED_TYPE);
	long _ShiftSelect(IItem *,int);
	long _SingleSelect(IItem *);
	long _UnsetSelectionState(IItem *);
public:
	CSelectionState();
	int IsSelectAll();
	long CopySelectionState(CSelectionState const *);
	long GetFirstSelectedItem(IItem * *);
	long GetLastExplicitlySelectedItem(IItem *,IItemCollection *,unsigned int *);
	long GetNextSelectedIndex(int,int *);
	long GetSelection(_GUID const &,void * *);
	long GetSelectionStartingWithItem(IItem *,_GUID const &,void * *);
	long OnCollectionEvent(IItemCollection *,CollectionEventParams const *);
	long OnGroupByChanged();
	long SelectionChange(__MIDL___MIDL_itf_itemsview_0000_0004_0001,IItem *);
	long SetUIItemsView(UIItemsView *);
	void InvalidateSelectionArrays();
	~CSelectionState();
};

struct CSelectionStateList
{
	static long s_CreateInstance(CCoSimpleArray<SelectionState,4294967294,CSimpleArrayStandardCompareHelper<SelectionState> > *,_GUID const &,void * *);
	virtual long GetAt(unsigned int,_GUID const &,void * *);
	virtual long GetCount(unsigned int *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CSelectionStateSpy
{
	static long s_CreateInstance(SelectionState const &,_GUID const &,void * *);
	virtual long GetValue(SELECTIONSTATEVALUE,tagVARIANT *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CSeparatorBand
{
	CSeparatorBand();
	long _Initialize();
protected:
	static __int64 s_SeparatorWndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
public:
	virtual long CloseDW(unsigned long);
	virtual long GetBandInfo(unsigned long,unsigned long,DESKBANDINFO *);
	virtual long GetClassID(_GUID *);
	virtual long Load(IStream *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Save(IStream *,int);
	virtual long SetNavigationState(unsigned long);
	virtual long SetNavigationTarget(IShellNavigationTarget *);
	virtual long SetProgress(SHELL_NAVIGATION_BAND_PROGRESS_STATE,long,long);
	virtual long SetSite(IUnknown *);
	virtual long ShowDW(int);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CShallowContainerIterator
{
	bool Next(IShellItem2 * *);
};

class CShellBrowser
{
	struct CDefViewSink
	{
		virtual long GetIDsOfNames(_GUID const &,unsigned short * *,unsigned int,unsigned long,long *);
		virtual long GetTypeInfo(unsigned int,unsigned long,ITypeInfo * *);
		virtual long GetTypeInfoCount(unsigned int *);
		virtual long Invoke(long,_GUID const &,unsigned long,unsigned short,tagDISPPARAMS *,tagVARIANT *,tagEXCEPINFO *,unsigned int *);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
	};

	BANDCLASSINFO * _BandClassInfoFromCmdID(unsigned int);
	HMENU__ * _GetBrowserBarMenu();
	HMENU__ * _MenuTemplate(int,int);
	IMenuBand * _GetMenuBand(int);
	IStream * _GetViewStream(IShellItem *,unsigned long,unsigned short const *);
	_GUID const * _InfoIdmToCLSID(unsigned int);
	_GUID const * _ShowHideBrowserBar(int,_GUID const *,int,_ITEMIDLIST_ABSOLUTE const *);
	__int64 _OnCommand(unsigned __int64,__int64);
	__int64 _OnGoto();
	__int64 _OnInitMenuPopup(HMENU__ *,int,int);
	__int64 _OnMenuSelect(unsigned __int64,__int64,unsigned int);
	__int64 _OnNotify(tagNMHDR *);
	__int64 _OnViewCommand(unsigned __int64,__int64);
	__int64 _OnViewNotify(tagNMHDR *);
	__int64 _ThunkTTNotify(tagNMTTDISPINFOA *);
	bool _ChangeMenuContent(CShellBrowser::MENUCONTENT_OPTION);
	bool _IsRibbonVisible();
	bool _IsSaveStateAllowed();
	bool _SetMenu(HMENU__ *);
	bool _ShouldShowRibbon(IShellItem *);
	int _AllocToolbarItem();
	int _CanNavigate();
	int _ExplorerTreeHasFocus();
	int _FillIEThreadParamFromCabsh(CABSH *,IETHREADPARAM *);
	int _FillIEThreadParamWorker(_ITEMIDLIST_ABSOLUTE const *,IETHREADPARAM *);
	int _GetIconIndex();
	int _GetVID(_GUID *);
	int _HasToolbarFocus();
	int _IsCurrentDocobjCLSID(_GUID const &);
	int _IsExplorerBandVisible();
	int _IsExplorerFrameFocused();
	int _IsHWNDInPreviewPaneTree(HWND__ *);
	int _IsPreviewPaneFocused();
	int _IsSameToolbar(unsigned short const *,IUnknown *);
	int _LoadBrowserHelperObjects();
	int _OnContextMenu(unsigned __int64,__int64);
	int _OnSetCursor(__int64);
	int _OnSysMenuClick(int,unsigned __int64,__int64);
	int _OnTimer(unsigned __int64);
	int _QueryNewPalette();
	int _ReadSettingsFromPropertyBag(IPropertyBag *,IETHREADPARAM *);
	int _ShouldAllowNavigateParent();
	int _ShouldTranslateAccelerator(tagMSG const *);
	int _TBWindowHasFocus(unsigned int);
	int _TranslateMenuMessage(HWND__ *,unsigned int,unsigned __int64 *,__int64 *,__int64 *);
	long _ActivateNavigation(NAVIGATIONSTATE *);
	long _AddFolderOptionsSheets(unsigned long,int (*const)(_PSP *,__int64),_PROPSHEETHEADERW_V2 * const);
	long _AppStarted();
	long _BrowseObjectInternal(_ITEMIDLIST_RELATIVE const *,unsigned int);
	long _CancelPendingNavigation(int);
	long _CloseAndReleaseToolbars(int);
	long _CreateBrowserPropSheetExt(_GUID const &,void * *);
	long _CycleFocus(tagMSG *);
	long _CycleFocusHelper(tagMSG *,unsigned int);
	long _EnsureAndNavigateBand(IBandSite *,_GUID const &,_ITEMIDLIST_ABSOLUTE const *);
	long _EnsureShellWindows();
	long _EnsureTrackEvents();
	long _ExecChildren(IUnknown *,unsigned long,tagVARIANT *);
	long _FillCabinetStateHeader(IStream *,CABSH *);
	long _FillNavigationState(IShellItem *,IUnknown *,unsigned long,unsigned long,IUnknown *,IUnknown *,_GUID const &,NAVIGATIONSTATE *);
	long _FindActiveTarget(_GUID const &,void * *);
	long _FixToolbarFocus();
	long _GetBSForBar(unsigned short const *,IBandSite * *);
	long _GetBandSite(int,IBandSite * *,_GUID const *,int);
	long _GetBrowserBar(int,int,IBandSite * *,_GUID const *);
	long _GetBrowserByIndex(unsigned long,IUnknown * *);
	long _GetExplorerPaneStateAndStatusBarVisibility(IUnknown *,PANE_TRACKING_STATE *,SQMBROWSERBARFLAGS *);
	long _GetMenuBarVisibility(SQMBROWSERBARFLAGS *);
	long _GetNamespaceSite(IShellItem *,_GUID *,IUnknown * *);
	long _GetViewBorderRect(tagRECT *);
	long _GetViewStateItem(IShellItem * *);
	long _HandleFailedNavigation(long,char const *);
	long _Initialize(HWND__ *);
	long _InitializeBrowserState(_ITEMIDLIST_ABSOLUTE const *,IETHREADPARAM *);
	long _InitializeTravelLog(ITravelLog *,unsigned long);
	long _LoadHistory(IStream *,IBindCtx *);
	long _MayGetNextToolbarFocus(tagMSG *,unsigned int,int,SToolbarItem * *,HWND__ * *);
	long _MayTranslateAccelerator(tagMSG *,int);
	long _MayTranslateAcceleratorNoMenuband(tagMSG *);
	long _NavigateToPidl(_ITEMIDLIST_ABSOLUTE const *,unsigned long,unsigned long);
	long _NavigateWithinView(unsigned long,IStream *,IBindCtx *);
	long _OnConnectionCreated(IShellItem *,IUnknown *,unsigned long,unsigned long,IUnknown *,IUnknown *,_GUID const &);
	long _OnCreate(tagCREATESTRUCTW *);
	long _OnDestroy();
	long _OnFocusChange(unsigned int);
	long _OnFrameWindowActivateBS(int);
	long _OnSetFocus();
	long _OpenNewFrame(_ITEMIDLIST_ABSOLUTE *,unsigned int);
	long _PositionViewWindow(HWND__ *,tagRECT *);
	long _PrepareInternetToolbar(IETHREADPARAM *);
	long _ReleaseNavigationState();
	long _ResetFolderType();
	long _ResizeNextBorderHelper(unsigned int,int);
	long _SaveHistory(IStream *);
	long _SaveITbarLayout();
	long _SendChildren(HWND__ *,int,unsigned int,unsigned __int64,__int64);
	long _SetAcceleratorMenu(HACCEL__ *);
	long _SetFocus(SToolbarItem *,HWND__ *,tagMSG *);
	long _ShowHideChildWindows(int);
	long _ShowToolbar(IUnknown *,int);
	long _SwitchNavigationState(NAVIGATIONSTATE *);
	long _UIActivateView(unsigned int,VIEWREASONTOACTIVATE);
	long _UpdateBrowserPaletteInPlace(tagLOGPALETTE const *);
	long _UpdateFolderSettings(IShellItem *);
	long _UpdateFrame(IShellItem *,int,IShellView *,HWND__ *,IUnknown *,HWND__ * *);
	long _UpdateTravelLog(TRAVEL_LOG_OPTIONS_FLAGS);
	long _UpdateViewRectSize();
	long _setDescendentNavigate();
	long _updateNavigationUI();
	static _ITEMIDLIST_ABSOLUTE * _PidlFromUrl(unsigned short const *,int);
	static unsigned long s_SendWERForCancelledNavigation(void *);
	unsigned int _FindTBar(IUnknown *);
	unsigned int _InfoCLSIDToIdm(_GUID const *);
	unsigned long _ShowControl(unsigned int,int);
	void OnTabletModeChanged(unsigned __int64,__int64);
	void _AddBrowserBarMenuItems(HMENU__ *);
	void _CancelPendingNavigationNow();
	void _CleanupFrameIfNecessary();
	void _ClearNavigationState(NAVIGATIONSTATE *);
	void _CloseAllParents();
	void _ColorsDirty(CShellBrowser::BrowserPaletteType);
	void _CommonHandleFileSysChange(long,_ITEMIDLIST_ABSOLUTE const *,_ITEMIDLIST_ABSOLUTE const *);
	void _CreateRibbon(IShellItem *);
	void _CreateStatusBar();
	void _DefViewEventsSink(int);
	void _DestroyRibbon(CShellBrowser::DESTROYRIBBON_OPTION);
	void _DoOptions(unsigned long,tagVARIANT const *);
	void _EnableMenuItemsByAttribs(HMENU__ *);
	void _ExecAllBands(_GUID const *,unsigned long,unsigned long,tagVARIANT *,tagVARIANT *);
	void _FillIEThreadParam(_ITEMIDLIST_ABSOLUTE const *,IETHREADPARAM *);
	void _FireNavigateCompleteEvent(IUnknown *,IWebBrowser2 *,_ITEMIDLIST_ABSOLUTE const *);
	void _GetDefaultSettings(IETHREADPARAM *);
	void _HandleFileSysChange(long,_ITEMIDLIST_ABSOLUTE const *,_ITEMIDLIST_ABSOLUTE const *);
	void _HideToolbar(IUnknown *);
	void _InsertTravelLogItems(HMENU__ *,int);
	void _InvalidateRibbonCommandSet(COMMAND_SET);
	void _LaunchOptionsUsingView(unsigned short const *,unsigned long,unsigned long);
	void _MayUnblockAsyncOperation();
	void _NavigateRibbon(IShellItem *);
	void _NavigateToPidlAsync(_ITEMIDLIST_ABSOLUTE *,unsigned long,int);
	void _NotifyCommandStateChange();
	void _OnBrowserFrameActivate(unsigned __int64,__int64);
	void _OnConfirmedClose();
	void _OnEditMenuPopup(HMENU__ *);
	void _OnExplorerBarMenuPopup(HMENU__ *);
	void _OnFSNotify(unsigned __int64,__int64);
	void _OnFrameStateChanged(unsigned __int64,__int64);
	void _OnGoMenuPopup(HMENU__ *);
	void _OnRibbonVisibilityChange(CShellBrowser::ONRIBBONVISIBILITY_CHANGE);
	void _OnShellToolsMenuPopup(HMENU__ *);
	void _OnUIActivate(int,int,int);
	void _OnViewMenuPopup(HMENU__ *);
	void _PaletteChanged(unsigned __int64,__int64);
	void _PropertyBagSaveState(int);
	void _RealizeBrowserPalette(int);
	void _RefreshITBar();
	void _RegisterAsDropTarget();
	void _ReleaseToolbarItem(int,int);
	void _SQMExplorerFrameState(IUnknown *);
	void _SafeFlushClipboard();
	void _SaveCurrentViewState();
	void _SaveState(int);
	void _SaveTopView();
	void _SetBrowserBarMenuHelp(HMENU__ *,unsigned int);
	void _SetBrowserBarState(unsigned int,_GUID const *,int,_ITEMIDLIST_ABSOLUTE const *);
	void _SetExternalBandMenuHelp(HMENU__ *,unsigned int);
	void _SetITBarFolderType(unsigned short const *);
	void _SetIcon();
	void _SetMenuHelp(HMENU__ *,unsigned int,unsigned short const *);
	void _SetReadyState(unsigned long);
	void _SetTitle();
	void _SetWindowIcon(HWND__ *,HICON__ *,int);
	void _ShowHideProgress();
	void _SyncStatusBarVisibilityState();
	void _UnregisterAsDropTarget();
	void _UpdateBackForwardStateNow();
protected:
	CShellBrowser(unsigned int);
	virtual ~CShellBrowser();
public:
	__int64 WndProcBS(HWND__ *,unsigned int,unsigned __int64,__int64);
	long CreateBrowserWindow(IETHREADPARAM *);
	virtual long AddToolbar(IUnknown *,unsigned short const *,unsigned long);
	virtual long AdjustLayout(IUnknown *,IUnknown * *);
	virtual long AdviseActiveStateChanged(IBrowserActivationEvent *,unsigned long *);
	virtual long BrowseItem(IShellItem *,unsigned int);
	virtual long BrowseObject(_ITEMIDLIST_RELATIVE const *,unsigned int);
	virtual long ChooseBrowserLayout(BROWSERLAYOUTTYPE);
	virtual long ContextSensitiveHelp(int);
	virtual long CreateViewWindow(IShellItem *,IShellView *,IShellView *,tagRECT *,HWND__ * *);
	virtual long DisplayParseError(long,unsigned short const *);
	virtual long DragEnter(IDataObject *,unsigned long,_POINTL,unsigned long *);
	virtual long DragLeave();
	virtual long DragOver(unsigned long,_POINTL,unsigned long *);
	virtual long Drop(IDataObject *,unsigned long,_POINTL,unsigned long *);
	virtual long EnableModeless(int);
	virtual long EnableModelessSB(int);
	virtual long EnumObjects(unsigned long,IEnumUnknown * *);
	virtual long Exec(_GUID const *,unsigned long,unsigned long,tagVARIANT *,tagVARIANT *);
	virtual long FindToolbar(unsigned short const *,_GUID const &,void * *);
	virtual long FindWindowByIndex(unsigned long,IUnknown * *);
	virtual long FindWindowByIndex(unsigned long,_GUID *,IUnknown * *);
	virtual long GetBorder(tagRECT *);
	virtual long GetBorderDW(IUnknown *,tagRECT *);
	virtual long GetClassID(_GUID *);
	virtual long GetColumnPropertyList(_GUID const &,void * *);
	virtual long GetControlWindow(unsigned int,HWND__ * *);
	virtual long GetCurrentItem(_GUID const &,void * *);
	virtual long GetDummyWindowData(unsigned short const *,unsigned short const *,IStream *,_WINDOWDATA *);
	virtual long GetEnumerationTimeout(unsigned long *);
	virtual long GetFlags(unsigned long *);
	virtual long GetFolderFlags(FOLDERFLAGS *,FOLDERFLAGS *);
	virtual long GetFolderViewOptions(FOLDERVIEWOPTIONS *);
	virtual long GetGroupByProperty(_tagpropertykey *,int *);
	virtual long GetGroupSubsetCount(unsigned int *);
	virtual long GetHistoryObject(IOleObject * *,IStream * *,IBindCtx * *);
	virtual long GetIconSize(unsigned int *);
	virtual long GetLegacyBarsMenu(HMENU__ * *);
	virtual long GetNavigateState(tagBNSTATE *);
	virtual long GetPalette(HPALETTE__ * *);
	virtual long GetPaneState(_GUID const &,unsigned long *);
	virtual long GetPendingItem(_GUID const &,void * *);
	virtual long GetPidl(_ITEMIDLIST_ABSOLUTE * *);
	virtual long GetPositionCookie(unsigned long *);
	virtual long GetPropertyBag(unsigned long,_GUID const &,void * *);
	virtual long GetSearchBoxTimerDelay(unsigned int *);
	virtual long GetSortColumns(SORTCOLUMN *,unsigned int,unsigned int *);
	virtual long GetTitle(IShellView *,unsigned short *,unsigned long);
	virtual long GetTravelLog(ITravelLog * *);
	virtual long GetViewFlags(BROWSER_VIEW_FLAGS *);
	virtual long GetViewFrame(IViewFrame * *);
	virtual long GetViewMode(FOLDERLOGICALVIEWMODE *);
	virtual long GetViewStateStream(unsigned long,IStream * *);
	virtual long GetWindow(HWND__ * *);
	virtual long GetWindowData(IStream *,_WINDOWDATA *);
	virtual long HasFocusIO();
	virtual long InsertMenusSB(HMENU__ *,tagOleMenuGroupWidths *);
	virtual long InvokeLegacyBarsMenuCommand(unsigned int);
	virtual long IsActive();
	virtual long IsControlWindowShown(unsigned int,int *);
	virtual long IsEvaluatingEdpPolicy(int *);
	virtual long LoadHistory(IStream *,IBindCtx *);
	virtual long LoadHistoryPosition(unsigned short *,unsigned long);
	virtual long LockContainer(int);
	virtual long OnFocusChangeIS(IUnknown *,int);
	virtual long OnNavigationResult(unsigned int,long,IShellItem *,IUnknown *,unsigned long,unsigned long,IUnknown *,IUnknown *,_GUID const &);
	virtual long OnReadyStateChange(IShellView *,unsigned long);
	virtual long OnViewWindowActive(IShellView *);
	virtual long ParseDisplayName(IBindCtx *,unsigned short *,unsigned long *,IMoniker * *);
	virtual long Process();
	virtual long QueryActiveShellView(IShellView * *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long QueryService(_GUID const &,_GUID const &,void * *);
	virtual long QueryStatus(_GUID const *,unsigned long,_tagOLECMD * const,_tagOLECMDTEXT *);
	virtual long RefreshViewFrame();
	virtual long RegisterWindow(int,int);
	virtual long RemoveMenusSB(HMENU__ *);
	virtual long RemoveToolbar(IUnknown *,unsigned long);
	virtual long RequestBorderSpace(tagRECT const *);
	virtual long RequestBorderSpaceDW(IUnknown *,tagRECT const *);
	virtual long SaveHistory(IStream *);
	virtual long SaveHistoryEx(IStream *,IBindCtx *);
	virtual long SendControlMsg(unsigned int,unsigned int,unsigned __int64,__int64,__int64 *);
	virtual long SetActiveObject(IOleInPlaceActiveObject *,unsigned short const *);
	virtual long SetAsDefFolderSettings();
	virtual long SetBorderSpace(tagRECT const *);
	virtual long SetBorderSpaceDW(IUnknown *,tagRECT const *);
	virtual long SetDropSourceEnterpriseId(unsigned short const *);
	virtual long SetFlags(unsigned long,unsigned long);
	virtual long SetFolderViewOptions(FOLDERVIEWOPTIONS,FOLDERVIEWOPTIONS);
	virtual long SetMenuSB(HMENU__ *,void *,HWND__ *);
	virtual long SetNavigateState(tagBNSTATE);
	virtual long SetPositionCookie(unsigned long);
	virtual long SetStatusTextSB(unsigned short const *);
	virtual long SetToolbarItems(_TBBUTTON *,unsigned int,unsigned int);
	virtual long ShowControlWindow(unsigned int,int);
	virtual long TranslateAcceleratorIO(tagMSG *);
	virtual long TranslateAcceleratorSB(tagMSG *,unsigned short);
	virtual long UIActivateIO(int,tagMSG *);
	virtual long UnadviseActiveStateChanged(unsigned long);
	virtual long UpdateBackForwardState();
	virtual long UpdateWindowList();
	virtual long get_ReadyState(unsigned long *);
	virtual unsigned long AddRef();
	virtual unsigned long GetBrowserIndex();
	virtual unsigned long Release();
	virtual void OnClose();
	virtual void OnDataChange(tagFORMATETC *,tagSTGMEDIUM *);
	virtual void OnRename(IMoniker *);
	virtual void OnSave();
	virtual void OnViewChange(unsigned long,long);
	void AfterWindowCreated(IETHREADPARAM const *);
	void OnClose(int);
};

class CShellBrowserWindowClassFactory
{
	static unsigned long s_LaunchExplorerWindowThreadProc(void *);
public:
	virtual long CreateInstance(IUnknown *,_GUID const &,void * *);
	virtual long LockServer(int);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CShellViewFactory
{
	int _HandledDelegateNavigation(IShellView *,IShellItem *);
	long _CreateNewConnection(HWND__ *,IShellItem *,IUnknown *,IUnknown * *);
public:
	static long s_CreateInstance(_GUID const &,void * *);
	virtual long BeginCreateConnection(HWND__ *,IShellItem *,IUnknown *,IConnectionCreatedCallback *);
	virtual long CancelPendingConnection();
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CShellViewProvider
{
	static long s_CreateInstance(HWND__ *,IShellView *,_GUID const &,void * *);
	virtual long GetShellView(_GUID const &,void * *);
	virtual long GetViewWindow(HWND__ * *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CShellWindowListCF
{
	virtual long CreateInstance(IUnknown *,_GUID const &,void * *);
	virtual long LockServer(int);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CSimpleHashTable<ATL::CComPtr<IItem>,CCollectionCache::CacheEntry,CIItemHashPolicy,CIItemCompare<0,0>,CDefaultResizePolicy,CDefaultRehashPolicy>
{
	int _FreeBucket(CSimpleHashTable<ATL::CComPtr<IItem>,CCollectionCache::CacheEntry,CIItemHashPolicy,CIItemCompare<0,0>,CDefaultResizePolicy,CDefaultRehashPolicy>::HashBucket *);
	long _AddUpdateItem(int,ATL::CComPtr<IItem> const &,CCollectionCache::CacheEntry const &,CCollectionCache::CacheEntry *);
	long _RehashTable(unsigned int);
	static CSimpleHashTable<ATL::CComPtr<IItem>,CCollectionCache::CacheEntry,CIItemHashPolicy,CIItemCompare<0,0>,CDefaultResizePolicy,CDefaultRehashPolicy>::HashBucket & s_LookupEntry(CSimpleHashTable<ATL::CComPtr<IItem>,CCollectionCache::CacheEntry,CIItemHashPolicy,CIItemCompare<0,0>,CDefaultResizePolicy,CDefaultRehashPolicy>::HashBucket *,unsigned int,ATL::CComPtr<IItem> const &);
public:
	long GetItemPtr(ATL::CComPtr<IItem> const &,CCollectionCache::CacheEntry * *);
	void RemoveAll();
};

class CSimpleHashTable<ATL::CComPtr<IItem>,SelectionState,CIItemHashPolicy,CIItemCompare<0,1>,CDefaultResizePolicy,CDefaultRehashPolicy>
{
	int _FreeBucket(CSimpleHashTable<ATL::CComPtr<IItem>,SelectionState,CIItemHashPolicy,CIItemCompare<0,1>,CDefaultResizePolicy,CDefaultRehashPolicy>::HashBucket *);
	long _AddUpdateItem(int,ATL::CComPtr<IItem> const &,SelectionState const &,SelectionState *);
	long _EnsureSet();
	long _RehashTable(unsigned int);
	static CSimpleHashTable<ATL::CComPtr<IItem>,SelectionState,CIItemHashPolicy,CIItemCompare<0,1>,CDefaultResizePolicy,CDefaultRehashPolicy>::HashBucket & s_LookupEntry(CSimpleHashTable<ATL::CComPtr<IItem>,SelectionState,CIItemHashPolicy,CIItemCompare<0,1>,CDefaultResizePolicy,CDefaultRehashPolicy>::HashBucket *,unsigned int,ATL::CComPtr<IItem> const &);
public:
	long GetItem(ATL::CComPtr<IItem> const &,SelectionState &);
	void RemoveAll();
};

class CSimpleHashTable<ATL::CComPtr<IItemCollection>,SINKENTRY,CDefaultHashPolicy<ATL::CComPtr<IItemCollection> >,CDefaultKeyCompare<ATL::CComPtr<IItemCollection> >,CDefaultResizePolicy,CDefaultRehashPolicy>
{
	int _FreeBucket(CSimpleHashTable<ATL::CComPtr<IItemCollection>,SINKENTRY,CDefaultHashPolicy<ATL::CComPtr<IItemCollection> >,CDefaultKeyCompare<ATL::CComPtr<IItemCollection> >,CDefaultResizePolicy,CDefaultRehashPolicy>::HashBucket *);
	long _RehashTable(unsigned int);
	static CSimpleHashTable<ATL::CComPtr<IItemCollection>,SINKENTRY,CDefaultHashPolicy<ATL::CComPtr<IItemCollection> >,CDefaultKeyCompare<ATL::CComPtr<IItemCollection> >,CDefaultResizePolicy,CDefaultRehashPolicy>::HashBucket & s_LookupEntry(CSimpleHashTable<ATL::CComPtr<IItemCollection>,SINKENTRY,CDefaultHashPolicy<ATL::CComPtr<IItemCollection> >,CDefaultKeyCompare<ATL::CComPtr<IItemCollection> >,CDefaultResizePolicy,CDefaultRehashPolicy>::HashBucket *,unsigned int,ATL::CComPtr<IItemCollection> const &);
public:
	void RemoveAll();
};

class CSimpleHashTable<CElementIdentifier,TaggedElement,CElementIdentifier,CElementIdentifier,CDefaultResizePolicy,CDefaultRehashPolicy>
{
	long _AddUpdateItem(int,CElementIdentifier const &,TaggedElement const &,TaggedElement *);
	long _RehashTable(unsigned int);
	static CSimpleHashTable<CElementIdentifier,TaggedElement,CElementIdentifier,CElementIdentifier,CDefaultResizePolicy,CDefaultRehashPolicy>::HashBucket & s_LookupEntry(CSimpleHashTable<CElementIdentifier,TaggedElement,CElementIdentifier,CElementIdentifier,CDefaultResizePolicy,CDefaultRehashPolicy>::HashBucket *,unsigned int,CElementIdentifier const &);
public:
	long GetItemPtr(CElementIdentifier const &,TaggedElement * *);
	void RemoveAll();
};

struct CSimplePointerArray<IUnknown,CTContainer_PolicyRelease<IUnknown>,CSimpleArrayStandardCompareHelper<IUnknown *> >
{
	void RemoveAndReleaseAll();
};

struct CSinkWrapperBase
{
	virtual long Dispatch(void *);
	virtual long GetEventAction(void *,int,tagEVENTACTION *);
};

class CSiteWithNamespacePropertyBag
{
protected:
	virtual ~CSiteWithNamespacePropertyBag();
public:
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long QueryService(_GUID const &,_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CStandardEnum
{
	CStandardEnum(_GUID const &,int,int,int,void *,void (*)(void *,void const *,unsigned long));
	virtual long Clone(IEnumGeneric * *);
	virtual long Next(unsigned long,void *,unsigned long *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Reset();
	virtual long Skip(unsigned long);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~CStandardEnum();
};

class CSuggestMRUWorker
{
	long _GetMRUResults();
	virtual ~CSuggestMRUWorker();
public:
	CSuggestMRUWorker();
	static int s_CompareMRU(IPropertyValue *,IPropertyValue *,__int64);
	virtual long Dispatch();
	virtual long DoWork();
	virtual long GetDispatchable(int *);
	virtual long Init(unsigned long,unsigned int,unsigned long,unsigned short const *,IObjectCollection *,IShellItem *,ISuggestMRUCallback *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SetDispatchable(int);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CSuggestPopup
{
	int _GetPopupWidth();
	int _KeysMatch(IPropertyKeyStore *,IPropertyKeyStore *);
	int _MinimumWidth();
	long _AddDefaultSuggestedProperties(IPropertyKeyStore *);
	long _AddFilterConditionToCollection(IFilterCondition *,IObjectCollection *);
	long _AddMRUItems(IListViewPopup *,IObjectCollection *);
	long _AddPerFolderSuggestedProperties(IPropertyKeyStore *);
	long _AddPropertyButton(IPropertyDescription *,unsigned int);
	long _AddSuggestedPropertiesToPopup();
	long _AppendUnspecifiedFilterIfNeeded(IPropertyDescription *,IObjectCollection *);
	long _EnsureFilterControl(int);
	long _EnsureFrameTaskManager();
	long _EnsureMRUCache();
	long _EnsurePopup();
	long _EnsureSuggestedProperties();
	long _EnumerateStaticFilters();
	long _GatherFilterResults(unsigned int);
	long _GatherMRUResults(int);
	long _GetPropertyControlKey(_tagpropertykey *);
	long _IsSpecialCharacter(tagMSG *,int);
	long _NoResults(unsigned int);
	long _OnReplaceQuery(ISuggestPopupInfo *);
	long _PruneFilters();
	long _ShowPropertiesPopup();
	long _SplitFilteredItem(IShellItem *,IShellItem * *,ICondition * *);
	tagPOINT _GetPopupLocation();
	virtual ~CSuggestPopup();
	void _Reset();
public:
	CSuggestPopup();
	virtual long AutoHide();
	virtual long CancelPendingTasks();
	virtual long ClearMRU();
	virtual long GetColumnCount(CM_ENUM_FLAGS,unsigned int *);
	virtual long GetColumnInfo(_tagpropertykey const &,CM_COLUMNINFO *);
	virtual long GetColumns(CM_ENUM_FLAGS,_tagpropertykey *,unsigned int);
	virtual long GetItemState(LVPVIEWID,tagLVITEMW * const,int *);
	virtual long HasFocusIO();
	virtual long HidePopup();
	virtual long IsFilterVisible();
	virtual long IsMRUVisible();
	virtual long IsVisible();
	virtual long KillSelection();
	virtual long OnCancelAsyncFilters(unsigned int);
	virtual long OnClearFilterPreview(unsigned int);
	virtual long OnCommit(unsigned int,_tagpropertykey const &,tagARRANGE_MODE);
	virtual long OnCreated();
	virtual long OnDestroy();
	virtual long OnDestroyFilterControl(unsigned int);
	virtual long OnDismiss(int);
	virtual long OnFilterChanged(unsigned int,_tagpropertykey const &,IFilterCondition *);
	virtual long OnFiltersReady(unsigned long,SUGGESTFILTERFLAGS,IObjectCollection *);
	virtual long OnGetSearchText(SEARCHTEXTTYPE,unsigned short *,unsigned int);
	virtual long OnItemChanged(LVPVIEWID,tagNMLISTVIEW const *,int);
	virtual long OnItemFocused(LVPVIEWID,tagLVITEMW * const,tagLVITEMW * const);
	virtual long OnItemInvoke(LVPVIEWID,tagLVITEMW * const);
	virtual long OnItemRemoved(REMOVEITEMTYPE,LVPVIEWID,tagLVITEMW * const);
	virtual long OnMRUReady(unsigned long,IObjectCollection *);
	virtual long OnMouseLeave();
	virtual long OnPropCtrlInvoke(IFilterCondition *);
	virtual long OnRequestReposition(tagRECT const *);
	virtual long OnRequestReposition(unsigned int,tagRECT const *);
	virtual long OnSpinnerCancel(LVPVIEWID);
	virtual long OnToolBarItemInvoke(int);
	virtual long PruneFilters(unsigned short const *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Reset();
	virtual long SetColumnInfo(_tagpropertykey const &,CM_COLUMNINFO const *);
	virtual long SetColumns(_tagpropertykey const *,unsigned int);
	virtual long SetCustomMRU(_GUID const &);
	virtual long ShouldAutoHide();
	virtual long ShouldShowFilter(IPropertyKeyStore * *);
	virtual long ShowFilterPopup(HWND__ *,int,SUGGESTPOPUPFLAGS,FILTERWORKERFLAGS,IShellItem *,IPropertyKeyStore *,_tagpropertykey const &,unsigned short const *,ISuggestPopupCallback *);
	virtual long ShowMRUPopup(HWND__ *,SUGGESTPOPUPFLAGS,unsigned short const *,IPropertyKeyStore *,IShellItem *,ISuggestPopupCallback *);
	virtual long SpecialCharacter(tagMSG const *,int);
	virtual long TranslateAcceleratorIO(tagMSG *);
	virtual long UIActivateIO(int,tagMSG *);
	virtual long UpdateMRU(unsigned short const *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CSuggestPopupInfo
{
	virtual long GetFlags(SUGGESTPOPUPINFOFLAGS *);
	virtual long GetPropertyKey(_tagpropertykey *);
	virtual long GetPropvariant(tagPROPVARIANT *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CSyncCommandEnumerator
{
	long _SetNextSyncProviderKey();
	static bool _HasExtendedSubCommands(HKEY__ *,unsigned short const *,HKEY__ * *,HKEY__ * *);
public:
	long Initialize();
	virtual long Clone(IEnumExplorerCommand * *);
	virtual long Next(unsigned long,IExplorerCommand * *,unsigned long *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Reset();
	virtual long Skip(unsigned long);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CSyncCommandGallery
{
	virtual long EnumSubCommands(IEnumExplorerCommand * *);
	virtual long GetCanonicalName(_GUID *);
	virtual long GetFlags(unsigned long *);
	virtual long GetIcon(IShellItemArray *,unsigned short * *);
	virtual long GetState(IShellItemArray *,int,unsigned long *);
	virtual long GetTitle(IShellItemArray *,unsigned short * *);
	virtual long GetToolTip(IShellItemArray *,unsigned short * *);
	virtual long Invoke(IShellItemArray *,IBindCtx *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CSyncMappingsCommandStateHandler
{
	virtual long GetState(IShellItemArray *,int,unsigned long *);
	virtual long Initialize(unsigned short const *,IPropertyBag *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CTBMenuAcc
{
protected:
	virtual int v_GetHotItem();
public:
	static long s_CreateInstance(unsigned short const *,IAccessible *,HWND__ *,_GUID const &,void * *);
};

class CTCoAllocPolicy
{
	static unsigned __int64 _CoTaskMemSize(void *);
public:
	static long Alloc(void *,unsigned long,unsigned __int64,void * *);
	static long Realloc(void *,unsigned long,void *,unsigned __int64,void * *);
};

struct CTContainer_PolicyRelease<IUnknown>
{
	static void Destroy(IUnknown *);
};

struct CTGlobalAllocPolicy
{
	static long Alloc(void *,unsigned long,unsigned __int64,void * *);
};

struct CTLocalAllocPolicy
{
	static long Alloc(void *,unsigned long,unsigned __int64,void * *);
	static long Realloc(void *,unsigned long,void *,unsigned __int64,void * *);
};

struct CTSimpleArray<ATL::CComPtr<IChildId>,4294967294,CTPolicyCoTaskMem<ATL::CComPtr<IChildId> >,CSimpleArrayStandardCompareHelper<ATL::CComPtr<IChildId> >,CSimpleArrayStandardMergeHelper<ATL::CComPtr<IChildId> > >
{
	long _EnsureCapacity(unsigned __int64,unsigned __int64);
	void RemoveAll();
};

struct CTSimpleArray<ATL::CComPtr<IItem>,4294967294,CTPolicyCoTaskMem<ATL::CComPtr<IItem> >,CSimpleArrayStandardCompareHelper<ATL::CComPtr<IItem> >,CSimpleArrayStandardMergeHelper<ATL::CComPtr<IItem> > >
{
	long _EnsureCapacity(unsigned __int64,unsigned __int64);
	void RemoveAll();
};

struct CTSimpleArray<ATL::CComPtr<IItemCollection>,4294967294,CTPolicyCoTaskMem<ATL::CComPtr<IItemCollection> >,CSimpleArrayStandardCompareHelper<ATL::CComPtr<IItemCollection> >,CSimpleArrayStandardMergeHelper<ATL::CComPtr<IItemCollection> > >
{
	long _EnsureCapacity(unsigned __int64,unsigned __int64);
	void RemoveAll();
};

struct CTSimpleArray<ATL::CComPtr<IVirtualUIGroupItem>,4294967294,CTPolicyCoTaskMem<ATL::CComPtr<IVirtualUIGroupItem> >,CSimpleArrayStandardCompareHelper<ATL::CComPtr<IVirtualUIGroupItem> >,CSimpleArrayStandardMergeHelper<ATL::CComPtr<IVirtualUIGroupItem> > >
{
	long _EnsureCapacity(unsigned __int64,unsigned __int64);
	void RemoveAll();
};

struct CTSimpleArray<CElementIdentifier,4294967294,CTPolicyCoTaskMem<CElementIdentifier>,CSimpleArrayStandardCompareHelper<CElementIdentifier>,CSimpleArrayStandardMergeHelper<CElementIdentifier> >
{
	long _EnsureCapacity(unsigned __int64,unsigned __int64);
	void RemoveAll();
};

struct CTSimpleArray<CFirstPageResults::CollectionIndirected,4294967294,CTPolicyCoTaskMem<CFirstPageResults::CollectionIndirected>,CSimpleArrayStandardCompareHelper<CFirstPageResults::CollectionIndirected>,CSimpleArrayStandardMergeHelper<CFirstPageResults::CollectionIndirected> >
{
	long _Add<CFirstPageResults::CollectionIndirected const &>(CFirstPageResults::CollectionIndirected const &,unsigned __int64 *);
	long _EnsureCapacity(unsigned __int64,unsigned __int64);
};

struct CTSimpleArray<CItemMap<SelectionState,CIItemHashPolicy,CIItemCompare<0,1>,CDefaultResizePolicy>::TableEntry,4294967294,CTPolicyCoTaskMem<CItemMap<SelectionState,CIItemHashPolicy,CIItemCompare<0,1>,CDefaultResizePolicy>::TableEntry>,CSimpleArrayStandardCompareHelper<CItemMap<SelectionState,CIItemHashPolicy,CIItemCompare<0,1>,CDefaultResizePolicy>::TableEntry>,CSimpleArrayStandardMergeHelper<CItemMap<SelectionState,CIItemHashPolicy,CIItemCompare<0,1>,CDefaultResizePolicy>::TableEntry> >
{
	long RemoveAt(unsigned __int64);
	long _EnsureCapacity(unsigned __int64,unsigned __int64);
	void RemoveAll();
};

struct CTSimpleArray<ContextMenuRenderingData *,4294967294,CTPolicyCoTaskMem<ContextMenuRenderingData *>,CSimpleArrayStandardCompareHelper<ContextMenuRenderingData *>,CSimpleArrayStandardMergeHelper<ContextMenuRenderingData *> >
{
	long _EnsureCapacity(unsigned __int64,unsigned __int64);
	void RemoveAll();
};

struct CTSimpleArray<DirectUI::Element *,4294967294,CTPolicyLocalMem<DirectUI::Element *>,CSimpleArrayStandardCompareHelper<DirectUI::Element *>,CSimpleArrayStandardMergeHelper<DirectUI::Element *> >
{
	long _EnsureCapacity(unsigned __int64,unsigned __int64);
};

struct CTSimpleArray<DummyEventTrack,4294967294,CTPolicyLocalMem<DummyEventTrack>,CSimpleArrayStandardCompareHelper<DummyEventTrack>,CSimpleArrayStandardMergeHelper<DummyEventTrack> >
{
	long _EnsureCapacity(unsigned __int64,unsigned __int64);
	void RemoveAll();
};

struct CTSimpleArray<IBrowserActivationEvent *,4294967294,CTPolicyCoTaskMem<IBrowserActivationEvent *>,CSimpleArrayStandardCompareHelper<IBrowserActivationEvent *>,CSimpleArrayStandardMergeHelper<IBrowserActivationEvent *> >
{
	long _EnsureCapacity(unsigned __int64,unsigned __int64);
	void RemoveAll();
};

struct CTSimpleArray<IFocusAdviseSink *,4294967294,CTPolicyCoTaskMem<IFocusAdviseSink *>,CSimpleArrayStandardCompareHelper<IFocusAdviseSink *>,CSimpleArrayStandardMergeHelper<IFocusAdviseSink *> >
{
	long _EnsureCapacity(unsigned __int64,unsigned __int64);
	void RemoveAll();
};

struct CTSimpleArray<IUnknown *,4294967294,CTPolicyCoTaskMem<IUnknown *>,CSimpleArrayStandardCompareHelper<IUnknown *>,CSimpleArrayStandardMergeHelper<IUnknown *> >
{
	long _EnsureCapacity(unsigned __int64,unsigned __int64);
	void RemoveAll();
};

struct CTSimpleArray<QueuedEvent,4294967294,CTPolicyCoTaskMem<QueuedEvent>,CSimpleArrayStandardCompareHelper<QueuedEvent>,CSimpleArrayStandardMergeHelper<QueuedEvent> >
{
	void RemoveAll();
};

struct CTSimpleArray<RowPrefetchInfo,4294967294,CTPolicyLocalMem<RowPrefetchInfo>,CSimpleArrayStandardCompareHelper<RowPrefetchInfo>,CSimpleArrayStandardMergeHelper<RowPrefetchInfo> >
{
	long SortEx<PrefetchRowPriorityCompare>(PrefetchRowPriorityCompare const &);
	long _EnsureCapacity(unsigned __int64,unsigned __int64);
	void _MergeSort<PrefetchRowPriorityCompare>(PrefetchRowPriorityCompare const &,unsigned __int64,unsigned __int64);
	void _MergeThem<PrefetchRowPriorityCompare>(PrefetchRowPriorityCompare const &,unsigned __int64,unsigned __int64);
};

struct CTSimpleArray<SORTCOLUMN,4294967294,CTPolicyCoTaskMem<SORTCOLUMN>,CSimpleArrayStandardCompareHelper<SORTCOLUMN>,CSimpleArrayStandardMergeHelper<SORTCOLUMN> >
{
	long _EnsureCapacity(unsigned __int64,unsigned __int64);
	void RemoveAll();
};

struct CTSimpleArray<SelectionState,4294967294,CTPolicyCoTaskMem<SelectionState>,CSimpleArrayStandardCompareHelper<SelectionState>,CSimpleArrayStandardMergeHelper<SelectionState> >
{
	long _EnsureCapacity(unsigned __int64,unsigned __int64);
	void RemoveAll();
	void _MergeSort<CSelectionStateComparator>(CSelectionStateComparator const &,unsigned __int64,unsigned __int64);
	void _MergeThem<CSelectionStateComparator>(CSelectionStateComparator const &,unsigned __int64,unsigned __int64);
};

struct CTSimpleArray<UIItem *,4294967294,CTPolicyLocalMem<UIItem *>,CSimpleArrayStandardCompareHelper<UIItem *>,CSimpleArrayStandardMergeHelper<UIItem *> >
{
	long _EnsureCapacity(unsigned __int64,unsigned __int64);
};

struct CTSimpleArray<_ITEMID_CHILD const *,4294967294,CTPolicyCoTaskMem<_ITEMID_CHILD const *>,CSimpleArrayStandardCompareHelper<_ITEMID_CHILD const *>,CSimpleArrayStandardMergeHelper<_ITEMID_CHILD const *> >
{
	long _EnsureCapacity(unsigned __int64,unsigned __int64);
};

struct CTSimpleArray<_tagpropertykey,4294967294,CTPolicyCoTaskMem<_tagpropertykey>,CSimpleArrayStandardCompareHelper<_tagpropertykey>,CSimpleArrayStandardMergeHelper<_tagpropertykey> >
{
	long _EnsureCapacity(unsigned __int64,unsigned __int64);
};

struct CTSimpleArray<tagRECT,4294967294,CTPolicyCoTaskMem<tagRECT>,CSimpleArrayStandardCompareHelper<tagRECT>,CSimpleArrayStandardMergeHelper<tagRECT> >
{
	long _EnsureCapacity(unsigned __int64,unsigned __int64);
};

class CTabSearchTarget
{
protected:
	virtual ~CTabSearchTarget();
public:
	long ChainSearchTarget(IServiceProvider *);
	virtual long Enter(IShellSearchScope *);
	virtual long Exit();
	virtual long GetACEnumString(IEnumString * *);
	virtual long GetMenu(HMENU__ * *);
	virtual long GetPromptText(unsigned short *,unsigned int);
	virtual long GetSearchText(unsigned short *,unsigned int);
	virtual long InitMenuPopup(HMENU__ *);
	virtual long OnMenuCommand(unsigned long);
	virtual long OnSearchTextNotify(unsigned short const *,unsigned short const *,SHELLSEARCHNOTIFY);
	virtual long Search(unsigned short const *,unsigned long);
};

class CTaskLock
{
protected:
	virtual ~CTaskLock();
public:
	long Release();
	virtual long PostItem(IQueueItem2 *);
};

struct CTestabilityUICollection
{
	virtual long Add(IUnknown *);
	virtual long Clear();
	virtual long GetCount(unsigned int *);
	virtual long GetItem(unsigned int,IUnknown * *);
	virtual long Insert(unsigned int,IUnknown *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long RemoveAt(unsigned int);
	virtual long Replace(unsigned int,IUnknown *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CTheater
{
	static __int64 s_MouseHook(int,unsigned __int64,__int64);
	void _MouseHook(tagPOINT);
public:
	long Initialize();
	long UpdateToolbars(int,HWND__ *,HWND__ *);
	void ShowToolBars(unsigned long);
};

class CTheaterBand
{
	CTheaterBand();
	long _Initialize();
	static __int64 s_TheaterBandWndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	void _Cleanup();
	void _CreateTheaterButtons();
	void _SetTheaterBandImageList();
public:
	long OnWinEvent(HWND__ *,unsigned int,unsigned __int64,__int64,__int64 *);
	static long CreateInstance(IDeskBand * *);
	virtual long CloseDW(unsigned long);
	virtual long GetBandInfo(unsigned long,unsigned long,DESKBANDINFO *);
	virtual long GetClassID(_GUID *);
	virtual long Load(IStream *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Save(IStream *,int);
	virtual long SetNavigationState(unsigned long);
	virtual long SetNavigationTarget(IShellNavigationTarget *);
	virtual long SetProgress(SHELL_NAVIGATION_BAND_PROGRESS_STATE,long,long);
	virtual long SetSite(IUnknown *);
	virtual long ShowDW(int);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CToolBand
{
protected:
	CToolBand();
	long _BandInfoChanged();
	virtual ~CToolBand();
public:
	virtual long CanRenderComposited(int *);
	virtual long CloseDW(unsigned long);
	virtual long ContextSensitiveHelp(int);
	virtual long Exec(_GUID const *,unsigned long,unsigned long,tagVARIANT *,tagVARIANT *);
	virtual long GetCompositionState(int *);
	virtual long GetSizeMax(_ULARGE_INTEGER *);
	virtual long GetToolbar(HWND__ * *);
	virtual long GetWindow(HWND__ * *);
	virtual long HasFocusIO();
	virtual long IsDirty();
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long QueryService(_GUID const &,_GUID const &,void * *);
	virtual long QueryStatus(_GUID const *,unsigned long,_tagOLECMD * const,_tagOLECMDTEXT *);
	virtual long ResizeBorderDW(tagRECT const *,IUnknown *,int);
	virtual long SetCompositionState(int);
	virtual long SetSite(IUnknown *);
	virtual long ShowDW(int);
	virtual long TranslateAcceleratorGlobal(tagMSG *);
	virtual long TranslateAcceleratorIO(tagMSG *);
	virtual long UIActivateIO(int,tagMSG *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CToolTipManager
{
	DirectUI::Element * _TargetElementFromMouseEvent(DirectUI::MouseEvent *);
	__int64 _KeyboardHookProc(int,unsigned __int64,__int64);
	__int64 _MouseHookProc(int,unsigned __int64,__int64);
	__int64 _PropertyToolTipSubclassProc(HWND__ *,unsigned int,unsigned __int64,__int64,unsigned __int64);
	int _AdjustTooltipPaintingLocation(HWND__ *);
	int _IsContentClipped(DirectUI::Element *);
	int _IsContentTruncated(DirectUI::Element *);
	int _IsInfoTipRequested(DirectUI::Element *);
	int _IsToolTipRequested(DirectUI::Element *);
	long _CreateToolTipControl();
	long _GetEventActionCB(IUnknown *,int,ItemEventParams *,tagEVENTACTION *);
	long _OnItemEventCB(IUnknown *,ItemEventParams *);
	long _SetAsyncInfoTipItem(IItem *);
	static CToolTipManager::ToolTipMangerHookInfo s_ToolTipManagerHookInfo;
	static __int64 s_KeyboardHookProc(int,unsigned __int64,__int64);
	static __int64 s_MouseHookProc(int,unsigned __int64,__int64);
	static __int64 s_PropertyToolTipSubclassProc(HWND__ *,unsigned int,unsigned __int64,__int64,unsigned __int64,unsigned __int64);
	virtual ~CToolTipManager();
	void _ClearHooks();
	void _ClearToolTipState();
	void _DestroyCurrentFont();
	void _DisableHooks();
	void _EnableHooks();
	void _OnInfoTipReady();
	void _SetActiveToolTipElement(DirectUI::Element *,TOOLTIPINPUT);
	void _SetCurrentFont(DirectUI::Element *);
	void _SetPrefixText(DirectUI::Element *);
	void _SetToolTipControlText(unsigned short const *);
	void _SetToolTipMode(DirectUI::Element *,TOOLTIPINPUT);
	void _SetupInfoTipText(DirectUI::Element *);
	void _SetupToolTipText(DirectUI::Element *);
	void _ShowKeyboardToolTip();
public:
	virtual long HandleInputEvent(DirectUI::InputEvent *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long RemoveBackReferences();
	virtual long UserMovedFocusWithKeyboard(DirectUI::Element *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual void OnListenerDetach(DirectUI::Element *);
};

class CTrackEvents
{
	static int s_CompareOperationID(TRACKEDOPERATION const *,TRACKEDOPERATION const *,__int64);
public:
	virtual int IsTrackingEvents();
	virtual long OperationEvent(unsigned short const *,TRACKOPERATIONTYPE,TRACKOPERATIONEVENT);
	virtual long ResetReadyEvent();
	virtual long StartTimedOperation();
	virtual long StopTimedOperation(unsigned int *);
	virtual long TrySuspendReadyEvent();
	virtual ~CTrackEvents();
};

class CTravelBand
{
	__int64 _OnCustomDraw(tagNMCUSTOMDRAWINFO *);
	__int64 _OnNotify(unsigned __int64,__int64);
	long ClickCurrentButton();
	long TabToNextButton(int);
	long _Initialize();
	void _BuildDropDownImagesThemedMode();
	void _CleanupTravelBand();
	void _CreateTravelButtons();
	void _DrawTravelBackground(HDC__ *);
	void _OnCommand(unsigned __int64,__int64);
	void _OnToolTipNeeded(tagNMTTDISPINFOW *);
	void _SetAccessibilityButtonText(HWND__ *,unsigned int,unsigned int);
	void _SetButtonImagesClassicMode();
	void _SetButtonImagesThemedMode();
	void _SetButtonStates();
	void _SetControlState(int);
	void _ShowBackForwardMenu();
	void _ThemeTravelBand();
protected:
	static __int64 s_TravelWndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
public:
	CTravelBand();
	long OnWinEvent(HWND__ *,unsigned int,unsigned __int64,__int64,__int64 *);
	virtual long CloseDW(unsigned long);
	virtual long GetBandInfo(unsigned long,unsigned long,DESKBANDINFO *);
	virtual long GetClassID(_GUID *);
	virtual long HasFocusIO();
	virtual long Load(IStream *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Save(IStream *,int);
	virtual long SetNavigationState(unsigned long);
	virtual long SetNavigationTarget(IShellNavigationTarget *);
	virtual long SetProgress(SHELL_NAVIGATION_BAND_PROGRESS_STATE,long,long);
	virtual long SetSite(IUnknown *);
	virtual long ShowDW(int);
	virtual long TranslateAcceleratorIO(tagMSG *);
	virtual long UIActivateIO(int,tagMSG *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CTravelLogUI
{
	struct TRAVELLOGITEMINFO
	{
		static int Destroy(TRAVELLOGITEMINFO *,void *);
	};

protected:
	virtual ~CTravelLogUI();
public:
	static long CreateInstance(HWND__ *,IShellTravelLogUI * *);
	virtual long AddTravelLogItem(long,unsigned short const *,unsigned long);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Reset();
	virtual long ShowTravelLog(int,int,HWND__ *,tagRECT const *,long *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CTryHarderItem
{
protected:
	virtual ~CTryHarderItem();
public:
	virtual long Cancel();
	virtual long GetDisplayName(unsigned short * *);
	virtual long GetDisplayNameAlt(unsigned short * *);
	virtual long GetIDList(_ITEMIDLIST_ABSOLUTE * *);
	virtual long GetIconIndex(unsigned int *);
	virtual long GetScope(TRYHARDERSCOPES *);
	virtual long GetTooltip(unsigned short * *);
	virtual long OnInvoke(IUnknown *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CTryHarderItemHistoryVault
{
	long Init(TRYHARDERSCOPES,unsigned short const *,unsigned short const *);
	virtual long OnInvoke(IUnknown *);
};

class CTypeAhead
{
	int _HasSearchStringTimedOut();
	int _MatchStringWithItem(unsigned short const *,IItem *);
	long _FindItem(unsigned short const *,int,IItem * *,ItemIndex *);
	long _FindItemInCollection(unsigned short const *,int,ItemIndex *,unsigned int,IItemCollection *,IItem * *);
	long _GetFocusIndex(ItemIndex *);
	long _IncrementSearchString(unsigned short);
	long _SelectItem(IItem *,ItemIndex const &);
	static void s_TATimeoutCallback(GMA_ACTIONINFO *);
	void _HideVisual();
	void _RestartTypeAheadTimeout();
	void _StopTimer();
	~CTypeAhead();
public:
	CTypeAhead(IItemCollection *,ISelectionManager *,IFocusManager *,UIItemsView *,ICollectionCache *);
	virtual long HandleBackspace();
	virtual long HandleInputEvent(DirectUI::InputEvent *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CUString
{
	long Set(IUri *,__MIDL_IUri_0001);
};

class CUniversalSearchBand
{
	long _ApplySearchBoxSettings();
	long _GetSearchBoxText(unsigned short * *);
	long _Initialize();
	virtual ~CUniversalSearchBand();
	void _CleanupUniversalSearchBand();
protected:
	static __int64 sUniversalSearchWndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
public:
	CUniversalSearchBand();
	long OnWinEvent(HWND__ *,unsigned int,unsigned __int64,__int64,__int64 *);
	virtual long CanYieldFocus();
	virtual long CloseDW(unsigned long);
	virtual long Exec(_GUID const *,unsigned long,unsigned long,tagVARIANT *,tagVARIANT *);
	virtual long GetBandInfo(unsigned long,unsigned long,DESKBANDINFO *);
	virtual long GetClassID(_GUID *);
	virtual long GetCondition(_GUID const &,void * *);
	virtual long GetSearchControl(IShellSearchControl * *);
	virtual long GetText(unsigned short * *);
	virtual long HasFocusIO();
	virtual long Load(IStream *);
	virtual long OnFocusChangeIS(IUnknown *,int);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long QueryObject(_GUID const &,_GUID const &,void * *);
	virtual long QueryService(_GUID const &,_GUID const &,void * *);
	virtual long QueryStatus(_GUID const *,unsigned long,_tagOLECMD * const,_tagOLECMDTEXT *);
	virtual long Save(IStream *,int);
	virtual long SetNavigationState(unsigned long);
	virtual long SetNavigationTarget(IShellNavigationTarget *);
	virtual long SetProgress(SHELL_NAVIGATION_BAND_PROGRESS_STATE,long,long);
	virtual long SetSearchState(SHELL_SEARCH_BAND_SEARCH_STATE);
	virtual long SetSearchTarget(IShellSearchTarget *);
	virtual long SetSearchText(unsigned short const *,tagSBSST_FLAGS);
	virtual long SetSite(IUnknown *);
	virtual long ShowDW(int);
	virtual long TranslateAcceleratorGlobal(tagMSG *);
	virtual long TranslateAcceleratorIO(tagMSG *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CUpBand
{
	long _Initialize();
	virtual ~CUpBand();
	void CreateButtonImageList(int,_IMAGELIST * *);
	void OnDPIChanged();
	void ScaleAndSetPadding();
	void _CleanupUpBand();
	void _CreateUpButtons();
	void _SetButtonStates();
protected:
	__int64 _OnNotify(unsigned __int64,__int64);
	long _OnCommand(unsigned __int64,__int64);
	long _OnWinEvent(HWND__ *,unsigned int,unsigned __int64,__int64,__int64 *);
	static __int64 s_UpWndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	void _OnSize(int,int);
public:
	CUpBand();
	virtual long CloseDW(unsigned long);
	virtual long GetBandInfo(unsigned long,unsigned long,DESKBANDINFO *);
	virtual long GetClassID(_GUID *);
	virtual long HasFocusIO();
	virtual long Load(IStream *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Save(IStream *,int);
	virtual long SetNavigationState(unsigned long);
	virtual long SetNavigationTarget(IShellNavigationTarget *);
	virtual long SetProgress(SHELL_NAVIGATION_BAND_PROGRESS_STATE,long,long);
	virtual long SetSite(IUnknown *);
	virtual long ShowDW(int);
	virtual long TranslateAcceleratorIO(tagMSG *);
	virtual long UIActivateIO(int,tagMSG *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CValuePtr
{
	void Release();
};

class CViewOptionsGalleryCommand
{
	long _EnsureInitialized();
public:
	virtual long EnumSubCommands(IEnumExplorerCommand * *);
	virtual long GetFlags(unsigned long *);
	virtual long GetState(IShellItemArray *,int,unsigned long *);
	virtual long Invoke(IShellItemArray *,IBindCtx *);
};

class CViewOptionsGalleryEnum
{
	long _CreateSubCommandsFromHMENU(IObjectCollection *);
public:
	virtual long Clone(IEnumExplorerCommand * *);
	virtual long Next(unsigned long,IExplorerCommand * *,unsigned long *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Reset();
	virtual long Skip(unsigned long);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CVirtualUIGroupItem
{
	SECTIONTYPE _GetUICollectionRowType(int);
	int _GetUICollectionFirstLayoutSection();
	int _GetUICollectionLayoutRowCount();
	int _GetUICollectionLayoutScrollTickCount();
	int _GetUICollectionLayoutSectionCount();
	int _GetUICollectionRowCount();
	int _IsHeaderFloating();
	int _UICollectionExists();
	long _GetCollectionEventActionCB(IUnknown *,int,CollectionEventParams *,tagEVENTACTION *);
	long _GetItemEventActionCB(IUnknown *,int,ItemEventParams *,tagEVENTACTION *);
	long _Initialize(HWND__ *,IEventQueue *,IFirstPageResults *,ICollectionCache *,UIGroupItem *);
	long _OnCollectionEventCB(IUnknown *,CollectionEventParams *);
	long _OnItemEventCB(IUnknown *,ItemEventParams *);
	long _Update();
	long _UpdateCollectionFromItem();
	void _GetInfoForContainerRow(int,SectionInfo *);
	void _GetInfoForContainerScrollTick(int,SectionInfo *);
	void _GetInfoForHeaderSection(SectionInfo *);
	void _GetUICollectionHeaderFooterSectionInfo(SECTIONTYPE,SectionInfo *);
	void _MapContentSectionToGroupItemSection(SectionInfo *);
	void _MapLayoutSectionToCollectionSection(SectionInfo *);
	void _OnLayoutPropertyChanged();
	void _UpdateDisplayedItemCount();
	void _UpdateItemLayoutProperties(CVirtualUIGroupItem::UPDATEITEMLAYOUTPROPOPTIONS);
	void _UpdateUICollectionHeaderScrollTickCount();
	~CVirtualUIGroupItem();
public:
	virtual DirectUI::Element * ItemGetAdjacent(DirectUI::Element *,INAVDIR);
	virtual DirectUI::Element * SetFocusToItem(DirectUI::Element *,int,int);
	virtual IVirtualUIGroupItem * GetVirtualUIGroupItem();
	virtual IVirtualizedUI * GetParentVirtualizedUI();
	virtual IVirtualizedUI * GetVirtualizedUI();
	virtual SIZEV GetSectionDesiredSize(SectionInfo const &,SectionInfo const *);
	virtual UIBase * FindItem(unsigned int);
	virtual UIBase * GetElement();
	virtual int CanPageToSection(int);
	virtual int GetHeaderRowCount();
	virtual int GetHeaderScrollTickCount();
	virtual int GetRowCount();
	virtual int GetScrollTickCount();
	virtual int GetSectionCount();
	virtual int GetUICollectionFooterRowCount();
	virtual int GetUICollectionFooterScrollTickCount();
	virtual int GetUICollectionHeaderRowCount();
	virtual int GetUICollectionHeaderScrollTickCount();
	virtual long GetIItem(IItem * *);
	virtual long GetIItemCollection(IItemCollection * *);
	virtual long GetInfoForIItem(INDEX_OF_MODE,IItem *,unsigned int *,SectionInfo *);
	virtual long GetInfoForItem(unsigned int,SectionInfo *);
	virtual long GetInfoForTreeIndex(tagINDEX_AND_VERSION *,unsigned int,unsigned int *,SectionInfo *,IItem * *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long RealizeSection(SectionInfo *);
	virtual long SetItem(IItem *);
	virtual tagEXPANDOSTATE GetExpandoState();
	virtual tagVALUE_STATE GetRawItemCountValueState();
	virtual unsigned int GetCollectionVersion();
	virtual unsigned int GetItemCount();
	virtual unsigned int GetItemIndex();
	virtual unsigned int GetLastEmptyTextCheckItemCount(tagVALUE_STATE *);
	virtual unsigned int GetRawItemCount();
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual void DestroyDirection(REALIZEDIRECTION,int);
	virtual void GetGutterLocation(int,int,VerticalHitTest *);
	virtual void GetInfoForElement(DirectUI::Element *,SectionInfo *);
	virtual void GetInfoForIVirtualizedUI(IVirtualizedUI *,SectionInfo *);
	virtual void GetInfoForRow(int,SectionInfo *);
	virtual void GetInfoForScrollTick(int,SectionInfo *);
	virtual void GetInfoForSection(int,SectionInfo const *,SectionInfo *);
	virtual void OnItemGridLayoutColumnCountUpdate();
	virtual void SetExpandoState(tagEXPANDOSTATE);
	virtual void SetItemIndex(unsigned int);
	virtual void SetParentVirtualizedUI(IVirtualizedUI *);
	virtual void SetRealizedUIGroupItem(UIGroupItem *);
};

struct CVirtualUIGroupItemList
{
	static long s_CreateInstance(ItemRowLayout *,_GUID const &,void * *);
	virtual long GetAt(unsigned int,_GUID const &,void * *);
	virtual long GetCount(unsigned int *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CVirtualUIGroupItemSpy
{
	virtual long GetValue(VIRTUALUIGROUPITEMVALUE,tagVARIANT *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CVirtualizedSelectionObjectArray
{
	CVirtualizedSelectionObjectArray(CItemDevirtualizerInitialState *,IObjectArray *,DATALAYER_TYPE,IItem *);
	long _EnsureStartingItemIndex();
	long _GetAt(unsigned int,_GUID const &,void * *);
	long _Initialize();
	~CVirtualizedSelectionObjectArray();
public:
	static long s_Create(CItemDevirtualizerInitialState *,IObjectArray *,DATALAYER_TYPE,IItem *,_GUID const &,void * *);
	virtual int IsDevirtualized();
	virtual long AddFromArray(IObjectArray *);
	virtual long AddObject(IUnknown *);
	virtual long Clear();
	virtual long Create(IShellFolder *,_GUID const &,void * *);
	virtual long GetAt(unsigned int,_GUID const &,void * *);
	virtual long GetCount(unsigned int *);
	virtual long GetElapsedFullDevirtualizationTime(unsigned long *);
	virtual long GetEstimatedCount(unsigned int *);
	virtual long GetValue(VIRTUALIZEDSELECTIONARRAYVALUE,tagVARIANT *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long RemoveObjectAt(unsigned int);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CWRLObjectWithGITSite
{
	virtual long GetSite(_GUID const &,void * *);
	virtual long SetSite(IUnknown *);
};

struct CWRLObjectWithSite
{
	virtual long GetSite(_GUID const &,void * *);
	virtual long SetSite(IUnknown *);
};

struct CWaitCursorManager
{
	static long CreateInstance(_GUID const &,void * *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Restore();
	virtual long Start(CURSORID);
	virtual long Stop(CURSORID);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CWaitTask
{
	long _Init();
	static void s_WaitBeforeCursing(void *,unsigned char);
	void _StartWaitCursor();
public:
	long SetCursor(CURSORID);
	static long CreateInstance(CURSORID,CWaitTask * *);
	unsigned long Release();
};

struct CZeroInitNew
{
	static void operator delete(void *);
};

class CheckAndReNavigateToParentTask
{
	bool _IsLayoutSame(IUnknown *,IShellItem *);
	long _GetIDList(IUnknown *,_ITEMIDLIST_ABSOLUTE * *);
	void _Browse(IUnknown *,IShellItem *);
	void _RenavigateToParent();
public:
	long Initialize(IUnknown *,long,_ITEMIDLIST_ABSOLUTE const *,_ITEMIDLIST_ABSOLUTE const *);
	static unsigned long s_RenavigateToParent(void *);
};

struct CloudFilesTelemetry
{
	static void OnDemandFolder_NavPaneExpansion();
	static void OnDemandZip_NavPaneExpansion();
};

namespace DeskbandTelemetry
{
	class AddNewToolbarContext
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void AddNewToolbar();
		void StartActivity();
		~AddNewToolbarContext();
	};

	class RemoveToolbarContext
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void RemoveToolbar();
		void StartActivity();
	};

	class ToggleDeskbandContext
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(_GUID const &);
	};

	class ToggleSpecialFolderDeskbandContext
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(int);
		~ToggleSpecialFolderDeskbandContext();
	};

};

namespace DirectUI
{
	struct AutoDefer
	{
		void EndDefer();
	};

	struct AutoReleasePointer<ElementProvider>
	{
		~AutoReleasePointer<ElementProvider>();
	};

	struct BaseScrollBar
	{
		virtual void End();
		virtual void Home();
	};

	struct BorderLayout
	{
		static long Create(int,int *,Value * *);
	};

	struct Button
	{
		virtual bool OnLostDialogFocus(IDialogElement *);
		virtual bool OnReceivedDialogFocus(IDialogElement *);
		virtual long DefaultAction();
		virtual void OnInput(InputEvent *);
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
	};

	class CCBase
	{
	protected:
		virtual void PostCreate(HWND__ *);
	public:
		virtual bool OnCustomDraw(tagNMCUSTOMDRAWINFO *,__int64 *);
		virtual bool OnLostDialogFocus(IDialogElement *);
		virtual bool OnNotify(unsigned int,unsigned __int64,__int64,__int64 *);
		virtual bool OnReceivedDialogFocus(IDialogElement *);
		virtual long DefaultAction();
		virtual void OnInput(InputEvent *);
	};

	struct CCBaseScrollBar
	{
		virtual Element * GetElement();
		virtual HWND__ * CreateHWND(HWND__ *);
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
	};

	struct CenteringLayout
	{
		static long Create(int,int *,Value * *);
		virtual void DoLayout(Element *,int,int);
	};

	class ClassInfo<CElementWithIUnknown,Element,StandardCreator<CElementWithIUnknown> >
	{
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<CElementWithSite,CElementWithIUnknown,StandardCreator<CElementWithSite> >
	{
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<CSearchBoxDUIHost,TouchHWNDElement,StandardCreator<CSearchBoxDUIHost> >
	{
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<CSearchEditBox,CSearchEditBoxBase,StandardCreator<CSearchEditBox> >
	{
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<CSearchEditBoxBase,CElementWithSite,StandardCreator<CSearchEditBoxBase> >
	{
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<CSearchEditBoxHost,Element,StandardCreator<CSearchEditBoxHost> >
	{
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<FadeElement,Element,StandardCreator<FadeElement> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<FadeElement,Element,StandardCreator<FadeElement> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<ItemGridLayout,ItemLayout,StandardCreator<ItemGridLayout> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<ItemGridLayout,ItemLayout,StandardCreator<ItemGridLayout> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<ItemLayout,Element,StandardCreator<ItemLayout> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<ItemLayout,Element,StandardCreator<ItemLayout> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<ItemRowLayout,ItemLayout,StandardCreator<ItemRowLayout> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<ItemRowLayout,ItemLayout,StandardCreator<ItemRowLayout> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<LineHScrollBar,LineScrollbarBase,StandardCreator<LineHScrollBar> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<LineHScrollBar,LineScrollbarBase,StandardCreator<LineHScrollBar> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<LineScrollbarBase,CCBaseScrollBar,StandardCreator<LineScrollbarBase> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<LineScrollbarBase,CCBaseScrollBar,StandardCreator<LineScrollbarBase> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<LineScroller,UIBase,StandardCreator<LineScroller> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<LineScroller,UIBase,StandardCreator<LineScroller> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<LineVScrollBar,LineScrollbarBase,StandardCreator<LineVScrollBar> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<LineVScrollBar,LineScrollbarBase,StandardCreator<LineVScrollBar> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<LineViewer,Element,StandardCreator<LineViewer> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<LineViewer,Element,StandardCreator<LineViewer> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<LinkedViewer,Viewer,StandardCreator<LinkedViewer> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<LinkedViewer,Viewer,StandardCreator<LinkedViewer> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<PaintSurrogate,Element,StandardCreator<PaintSurrogate> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<PaintSurrogate,Element,StandardCreator<PaintSurrogate> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<Resizer,Thumb,StandardCreator<Resizer> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<Resizer,Thumb,StandardCreator<Resizer> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<UIBase,Element,StandardCreator<UIBase> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<UIBase,Element,StandardCreator<UIBase> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<UICheckbox,Element,StandardCreator<UICheckbox> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<UICheckbox,Element,StandardCreator<UICheckbox> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<UICollection,UIBase,StandardCreator<UICollection> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<UICollection,UIBase,StandardCreator<UICollection> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<UIColumnHeader,Button,StandardCreator<UIColumnHeader> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<UIColumnHeader,Button,StandardCreator<UIColumnHeader> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<UIColumnHeaderCheckbox,UICheckbox,StandardCreator<UIColumnHeaderCheckbox> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<UIColumnHeaderCheckbox,UICheckbox,StandardCreator<UIColumnHeaderCheckbox> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<UICount,Element,StandardCreator<UICount> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<UICount,Element,StandardCreator<UICount> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<UIDetailsPropertyCollection,Element,StandardCreator<UIDetailsPropertyCollection> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<UIDetailsPropertyCollection,Element,StandardCreator<UIDetailsPropertyCollection> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<UIExpandoButton,Button,StandardCreator<UIExpandoButton> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<UIExpandoButton,Button,StandardCreator<UIExpandoButton> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<UIGroupHeader,Element,StandardCreator<UIGroupHeader> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<UIGroupHeader,Element,StandardCreator<UIGroupHeader> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<UIGroupItem,UIItemCollectionBase,StandardCreator<UIGroupItem> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<UIGroupItem,UIItemCollectionBase,StandardCreator<UIGroupItem> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<UIImage,Element,StandardCreator<UIImage> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<UIImage,Element,StandardCreator<UIImage> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<UIItem,UIBase,StandardCreator<UIItem> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<UIItem,UIBase,StandardCreator<UIItem> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<UIItemsView,HWNDElement,StandardCreator<UIItemsView> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<UIItemsView,HWNDElement,StandardCreator<UIItemsView> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<UIMarqueeSelector,Element,StandardCreator<UIMarqueeSelector> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<UIMarqueeSelector,Element,StandardCreator<UIMarqueeSelector> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<UIProgressProperty,UIProperty,StandardCreator<UIProgressProperty> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<UIProgressProperty,UIProperty,StandardCreator<UIProgressProperty> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<UIProperty,Element,StandardCreator<UIProperty> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<UIProperty,Element,StandardCreator<UIProperty> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<UIRenameTextElement,Edit,StandardCreator<UIRenameTextElement> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<UIRenameTextElement,Edit,StandardCreator<UIRenameTextElement> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<UIRootItem,UIItemCollectionBase,StandardCreator<UIRootItem> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<UIRootItem,UIItemCollectionBase,StandardCreator<UIRootItem> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<UISmartProperty,UIProperty,StandardCreator<UISmartProperty> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<UISmartProperty,UIProperty,StandardCreator<UISmartProperty> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<UISmartPropertyCollection,Element,StandardCreator<UISmartPropertyCollection> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<UISmartPropertyCollection,Element,StandardCreator<UISmartPropertyCollection> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<UISubsetFooter,Element,StandardCreator<UISubsetFooter> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<UISubsetFooter,Element,StandardCreator<UISubsetFooter> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<UITilesPropertyCollection,Element,StandardCreator<UITilesPropertyCollection> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<UITilesPropertyCollection,Element,StandardCreator<UITilesPropertyCollection> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<UITryHarder,UIBase,StandardCreator<UITryHarder> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<UITryHarder,UIBase,StandardCreator<UITryHarder> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<UITryHarderButton,Button,StandardCreator<UITryHarderButton> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<UITryHarderButton,Button,StandardCreator<UITryHarderButton> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	class ClassInfo<UIViewHeader,Element,StandardCreator<UIViewHeader> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<UIViewHeader,Element,StandardCreator<UIViewHeader> > * *);
		static long Register(HINSTANCE__ *,unsigned short const *,PropertyInfo const * const *,unsigned int,bool);
	public:
		virtual IClassInfo * GetBaseClass();
		virtual long CreateInstance(Element *,unsigned long *,Element * *);
		virtual void Destroy();
	};

	struct ClassInfoBase
	{
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
		virtual void RemoveChild();
	};

	class DynamicArrayBase<IRawElementProviderSimple *,DoubleAllocationPolicy<IRawElementProviderSimple *>,1,0>
	{
		long SwitchToHeap(unsigned int);
		static long CHeapBuffer_Reserve(DynamicArrayBase<IRawElementProviderSimple *,DoubleAllocationPolicy<IRawElementProviderSimple *>,1,0> *,unsigned int);
	public:
		long InsertPtr(unsigned int,IRawElementProviderSimple * * *);
	};

	class Edit
	{
	protected:
		virtual HWND__ * CreateHWND(HWND__ *,bool);
	public:
		virtual bool IsContentProtected();
		virtual bool OnNotify(unsigned int,unsigned __int64,__int64,__int64 *);
		virtual tagSIZE GetContentSize(int,int,Surface *);
		virtual unsigned int MessageCallback(tagGMSG *);
		virtual unsigned short const * GetContentStringAsDisplayed(Value * *);
		virtual void OnInput(InputEvent *);
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
	};

	class Element
	{
	protected:
		virtual tagSIZE _SelfLayoutUpdateDesiredSize(int,int,Surface *);
		virtual void ActivateTooltip(Element *,unsigned long);
		virtual void OnHosted(Element *);
		virtual void OnUnHosted(Element *);
		virtual void RemoveTooltip(Element *);
		virtual void UpdateTooltip(Element *);
		virtual void _SelfLayoutDoLayout(int,int);
	public:
		virtual Element * GetAdjacent(Element *,int,NavReference const *,unsigned long);
		virtual Element * GetUiaFocusDelegate();
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
	};

	struct ElementProvider
	{
		virtual Element const volatile * GetElement();
		virtual long AdviseEventAdded(int,tagSAFEARRAY *);
		virtual long AdviseEventRemoved(int,tagSAFEARRAY *);
		virtual long GetEmbeddedFragmentRoots(tagSAFEARRAY * *);
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
	};

	struct ElementProviderManager
	{
		static long GetProvider<IRawElementProviderSimple>(Element *,IRawElementProviderSimple * *);
		static long GetProvider<IRawElementProviderSimple>(Element *,InvokeHelper *,IRawElementProviderSimple * *);
	};

	struct FillLayout
	{
		static long Create(int,int *,Value * *);
		virtual Element * GetAdjacent(Element *,Element *,int,NavReference const *,unsigned long);
		virtual tagSIZE UpdateDesiredSize(Element *,int,int,Surface *);
	};

	struct FlowLayout
	{
		static long Create(int,int *,Value * *);
	};

	struct GridLayout
	{
		static long Create(int,int *,Value * *);
	};

	class HWNDElement
	{
	protected:
		virtual void _OnUIStateChanged(unsigned short,unsigned short);
	public:
		virtual HWND__ * GetHWND();
		virtual bool CanSetFocus();
		virtual long CreateStyleParser(DUIXmlParser * *);
		virtual long GetAccessibleImpl(IAccessible * *);
		virtual void GetWindowClassNameAndStyle(unsigned short const * *,unsigned int *);
		virtual void OnCompositionChanged();
		virtual void OnGetDlgCode(tagMSG *,__int64 *);
		virtual void OnGroupChanged(int,bool);
		virtual void OnImmersiveColorSchemeChanged();
		virtual void OnNoChildWithShortcutFound(KeyboardEvent *);
		virtual void OnWmSettingChanged(unsigned __int64,__int64);
		virtual void OnWmThemeChanged(unsigned __int64,__int64);
	};

	class HWNDElementProvider
	{
	protected:
		virtual long Init(HWNDElement *,InvokeHelper *);
	public:
		virtual long ElementProviderFromPoint(double,double,IRawElementProviderFragment * *);
		virtual long GetFocus(IRawElementProviderFragment * *);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
	};

	struct HWNDElementProxy
	{
		virtual void Init(HWNDElement *);
	};

	class HWNDHost
	{
	protected:
		virtual bool EraseBkgnd(HDC__ *,__int64 *);
		virtual void OnHosted(Element *);
		virtual void OnUnHosted(Element *);
	public:
		virtual HWND__ * GetHWND();
		virtual bool GetKeyFocused();
		virtual bool OnCtrlThemeChanged(unsigned int,unsigned __int64,__int64,__int64 *);
		virtual bool OnMessage(unsigned int,unsigned __int64,__int64,__int64 *);
		virtual bool OnSinkThemeChanged(unsigned int,unsigned __int64,__int64,__int64 *);
		virtual bool OnSysChar(unsigned short);
		virtual int OnAdjustWindowSize(int,int,unsigned int);
		virtual long GetAccessibleImpl(IAccessible * *);
		virtual unsigned int MessageCallback(tagGMSG *);
		virtual void OnDestroy();
		virtual void OnEvent(Event *);
		virtual void OnWindowStyleChanged(unsigned __int64,tagSTYLESTRUCT const *);
		virtual void Paint(HDC__ *,tagRECT const *,tagRECT const *,tagRECT *,tagRECT *);
		virtual void SetKeyFocus();
		virtual void SetWindowDirection(HWND__ *);
	};

	struct Layout
	{
		virtual Element * GetAdjacent(Element *,Element *,int,NavReference const *,unsigned long);
		virtual void Attach(Element *);
		virtual void Detach(Element *);
		virtual void DoLayout(Element *,int,int);
		virtual void OnAdd(Element *,Element * *,unsigned int);
		virtual void OnLayoutPosChanged(Element *,Element *,int,int);
		virtual void OnRemove(Element *,Element * *,unsigned int);
	};

	struct NineGridLayout
	{
		static long Create(int,int *,Value * *);
	};

	class OverflowLayout
	{
		bool _PlaceInLayout(Element *,tagSIZE,Element *,MARGINFLAGS *,tagRECT *,tagRECT *,tagSIZE *,tagRECT const *);
	public:
		static long Create(int,int *,Value * *);
		virtual Element * GetAdjacent(Element *,Element *,int,NavReference const *,unsigned long);
		virtual tagSIZE UpdateDesiredSize(Element *,int,int,Surface *);
		virtual void DoLayout(Element *,int,int);
		virtual void OnAdd(Element *,Element * *,unsigned int);
		virtual void OnLayoutPosChanged(Element *,Element *,int,int);
		virtual void OnRemove(Element *,Element * *,unsigned int);
	};

	class PatternProvider<CSearchBoxTextProvider,ITextProvider,16>
	{
	protected:
		long DoInvoke(int,...);
	public:
		static long Create(ElementProvider *,IUnknown * *);
		virtual ProviderProxy * (*GetProxyCreator())(Element *);
		virtual void Init(ElementProvider *);
		virtual ~PatternProvider<CSearchBoxTextProvider,ITextProvider,16>();
	};

	class PatternProvider<CSearchBoxValueProvider,IValueProvider,12>
	{
	protected:
		long DoInvoke(int,...);
	public:
		static long Create(ElementProvider *,IUnknown * *);
		virtual ProviderProxy * (*GetProxyCreator())(Element *);
		virtual void Init(ElementProvider *);
		virtual ~PatternProvider<CSearchBoxValueProvider,IValueProvider,12>();
	};

	class PatternProvider<IVGridProvider,IGridProvider,3>
	{
	protected:
		long DoInvoke(int,...);
	public:
		virtual ProviderProxy * (*GetProxyCreator())(Element *);
		virtual void Init(ElementProvider *);
		virtual ~PatternProvider<IVGridProvider,IGridProvider,3>();
	};

	class PatternProvider<IVInvokeProvider,IInvokeProvider,0>
	{
	protected:
		long DoInvoke(int,...);
	public:
		virtual ProviderProxy * (*GetProxyCreator())(Element *);
		virtual void Init(ElementProvider *);
		virtual ~PatternProvider<IVInvokeProvider,IInvokeProvider,0>();
	};

	class PatternProvider<UIColumnHeaderExpandCollapseProvider,IExpandCollapseProvider,1>
	{
	protected:
		long DoInvoke(int,...);
	public:
		virtual ProviderProxy * (*GetProxyCreator())(Element *);
		virtual void Init(ElementProvider *);
		virtual ~PatternProvider<UIColumnHeaderExpandCollapseProvider,IExpandCollapseProvider,1>();
	};

	class PatternProvider<UIGroupHeaderExpandCollapseProvider,IExpandCollapseProvider,1>
	{
	protected:
		long DoInvoke(int,...);
	public:
		virtual ProviderProxy * (*GetProxyCreator())(Element *);
		virtual void Init(ElementProvider *);
		virtual ~PatternProvider<UIGroupHeaderExpandCollapseProvider,IExpandCollapseProvider,1>();
	};

	class PatternProvider<UIGroupItemExpandCollapseProvider,IExpandCollapseProvider,1>
	{
	protected:
		long DoInvoke(int,...);
	public:
		virtual ProviderProxy * (*GetProxyCreator())(Element *);
		virtual void Init(ElementProvider *);
		virtual ~PatternProvider<UIGroupItemExpandCollapseProvider,IExpandCollapseProvider,1>();
	};

	class PatternProvider<UIItemGridItemProvider,IGridItemProvider,2>
	{
	protected:
		long DoInvoke(int,...);
	public:
		virtual ProviderProxy * (*GetProxyCreator())(Element *);
		virtual void Init(ElementProvider *);
		virtual ~PatternProvider<UIItemGridItemProvider,IGridItemProvider,2>();
	};

	class PatternProvider<UIItemScrollItemProvider,IScrollItemProvider,6>
	{
	protected:
		long DoInvoke(int,...);
	public:
		virtual ProviderProxy * (*GetProxyCreator())(Element *);
		virtual void Init(ElementProvider *);
		virtual ~PatternProvider<UIItemScrollItemProvider,IScrollItemProvider,6>();
	};

	class PatternProvider<UIItemSelectionItemProvider,ISelectionItemProvider,7>
	{
	protected:
		long DoInvoke(int,...);
	public:
		virtual ProviderProxy * (*GetProxyCreator())(Element *);
		virtual void Init(ElementProvider *);
		virtual ~PatternProvider<UIItemSelectionItemProvider,ISelectionItemProvider,7>();
	};

	class PatternProvider<UIItemToggleProvider,IToggleProvider,11>
	{
	protected:
		long DoInvoke(int,...);
	public:
		virtual ProviderProxy * (*GetProxyCreator())(Element *);
		virtual void Init(ElementProvider *);
		virtual ~PatternProvider<UIItemToggleProvider,IToggleProvider,11>();
	};

	class PatternProvider<UIItemValueProvider,IValueProvider,12>
	{
	protected:
		long DoInvoke(int,...);
	public:
		virtual ProviderProxy * (*GetProxyCreator())(Element *);
		virtual void Init(ElementProvider *);
		virtual ~PatternProvider<UIItemValueProvider,IValueProvider,12>();
	};

	class PatternProvider<UIItemsViewItemContainerProvider,IItemContainerProvider,19>
	{
	protected:
		long DoInvoke(int,...);
	public:
		virtual ProviderProxy * (*GetProxyCreator())(Element *);
		virtual void Init(ElementProvider *);
		virtual ~PatternProvider<UIItemsViewItemContainerProvider,IItemContainerProvider,19>();
	};

	class PatternProvider<UIItemsViewMultipleViewProvider,IMultipleViewProvider,15>
	{
	protected:
		long DoInvoke(int,...);
	public:
		virtual ProviderProxy * (*GetProxyCreator())(Element *);
		virtual void Init(ElementProvider *);
		virtual ~PatternProvider<UIItemsViewMultipleViewProvider,IMultipleViewProvider,15>();
	};

	class PatternProvider<UIItemsViewScrollProvider,IScrollProvider,5>
	{
	protected:
		long DoInvoke(int,...);
	public:
		virtual ProviderProxy * (*GetProxyCreator())(Element *);
		virtual void Init(ElementProvider *);
		virtual ~PatternProvider<UIItemsViewScrollProvider,IScrollProvider,5>();
	};

	class PatternProvider<UIItemsViewSelectionProvider,ISelectionProvider,8>
	{
	protected:
		long DoInvoke(int,...);
	public:
		virtual ProviderProxy * (*GetProxyCreator())(Element *);
		virtual void Init(ElementProvider *);
		virtual ~PatternProvider<UIItemsViewSelectionProvider,ISelectionProvider,8>();
	};

	class PatternProvider<UIItemsViewTableProvider,ITableProvider,9>
	{
	protected:
		long DoInvoke(int,...);
	public:
		virtual ProviderProxy * (*GetProxyCreator())(Element *);
		virtual void Init(ElementProvider *);
		virtual ~PatternProvider<UIItemsViewTableProvider,ITableProvider,9>();
	};

	class PatternProvider<UIPropertyGridItemProvider,IGridItemProvider,2>
	{
	protected:
		long DoInvoke(int,...);
	public:
		virtual ProviderProxy * (*GetProxyCreator())(Element *);
		virtual void Init(ElementProvider *);
		virtual ~PatternProvider<UIPropertyGridItemProvider,IGridItemProvider,2>();
	};

	class PatternProvider<UIPropertyTableItemProvider,ITableItemProvider,10>
	{
	protected:
		long DoInvoke(int,...);
	public:
		virtual ProviderProxy * (*GetProxyCreator())(Element *);
		virtual void Init(ElementProvider *);
		virtual ~PatternProvider<UIPropertyTableItemProvider,ITableItemProvider,10>();
	};

	class PatternProvider<UIPropertyValueProvider,IValueProvider,12>
	{
	protected:
		long DoInvoke(int,...);
	public:
		virtual ProviderProxy * (*GetProxyCreator())(Element *);
		virtual void Init(ElementProvider *);
		virtual ~PatternProvider<UIPropertyValueProvider,IValueProvider,12>();
	};

	struct PropNotify
	{
		static bool IsEqual(PropertyInfo const *,int,PropertyInfo const * (*)());
	};

	class ProviderProxy
	{
	protected:
		virtual void Init(Element *);
	};

	struct RowLayout
	{
		static long Create(int,int *,Value * *);
	};

	struct ShellBorderLayout
	{
		static long Create(int,int *,Value * *);
	};

	struct TableLayout
	{
		static long Create(int,int *,Value * *);
	};

	class TouchHWNDElement
	{
	protected:
		virtual void _OnUIStateChanged(unsigned short,unsigned short);
	public:
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
	};

	struct Value
	{
		static Value * GetBoolFalse();
		static Value * GetBoolTrue();
		static Value * GetIntZero();
		static Value * GetRectZero();
		static Value * GetSizeZero();
		static Value * GetStringNull();
	};

	struct VerticalFlowLayout
	{
		static long Create(int,int *,Value * *);
	};

	struct Viewer
	{
		virtual bool OnPropertyChanging(PropertyInfo const *,int,Value *,Value *);
		virtual tagSIZE _SelfLayoutUpdateDesiredSize(int,int,Surface *);
		virtual void OnEvent(Event *);
		virtual void OnInput(InputEvent *);
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
	};

	DirectUI::Event * HNew<Event>();
	long CreateAndInit<FadeElement,int>(int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<ItemGridLayout,int>(int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<ItemRowLayout,int>(int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<LineHScrollBar,int>(int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<LineVScrollBar,int>(int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<PaintSurrogate,int>(int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<Resizer,int>(int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<UICount,int>(int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<UIDetailsPropertyCollection,int>(int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<UIGroupItem,int>(int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<UIRenameTextElement>(DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<UISmartProperty,int>(int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<UISmartPropertyCollection,int>(int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<UITryHarder,int>(int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<UITryHarderButton,int>(int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	void * AccHAllocAndZero(unsigned __int64);
	void * HAlloc(unsigned __int64);
	void * HAllocAndZero(unsigned __int64);
	void HDelete<ClassInfo<CElementWithIUnknown,Element,StandardCreator<CElementWithIUnknown> > >(DirectUI::ClassInfo<CElementWithIUnknown,DirectUI::Element,DirectUI::StandardCreator<CElementWithIUnknown> > *);
	void HDelete<ClassInfo<CElementWithSite,CElementWithIUnknown,StandardCreator<CElementWithSite> > >(DirectUI::ClassInfo<CElementWithSite,CElementWithIUnknown,DirectUI::StandardCreator<CElementWithSite> > *);
	void HDelete<ClassInfo<CSearchBoxDUIHost,TouchHWNDElement,StandardCreator<CSearchBoxDUIHost> > >(DirectUI::ClassInfo<CSearchBoxDUIHost,DirectUI::TouchHWNDElement,DirectUI::StandardCreator<CSearchBoxDUIHost> > *);
	void HDelete<ClassInfo<CSearchEditBox,CSearchEditBoxBase,StandardCreator<CSearchEditBox> > >(DirectUI::ClassInfo<CSearchEditBox,CSearchEditBoxBase,DirectUI::StandardCreator<CSearchEditBox> > *);
	void HDelete<ClassInfo<CSearchEditBoxBase,CElementWithSite,StandardCreator<CSearchEditBoxBase> > >(DirectUI::ClassInfo<CSearchEditBoxBase,CElementWithSite,DirectUI::StandardCreator<CSearchEditBoxBase> > *);
	void HDelete<ClassInfo<CSearchEditBoxHost,Element,StandardCreator<CSearchEditBoxHost> > >(DirectUI::ClassInfo<CSearchEditBoxHost,DirectUI::Element,DirectUI::StandardCreator<CSearchEditBoxHost> > *);
	void HDelete<ClassInfo<FadeElement,Element,StandardCreator<FadeElement> > >(DirectUI::ClassInfo<FadeElement,DirectUI::Element,DirectUI::StandardCreator<FadeElement> > *);
	void HDelete<ClassInfo<ItemGridLayout,ItemLayout,StandardCreator<ItemGridLayout> > >(DirectUI::ClassInfo<ItemGridLayout,ItemLayout,DirectUI::StandardCreator<ItemGridLayout> > *);
	void HDelete<ClassInfo<ItemLayout,Element,StandardCreator<ItemLayout> > >(DirectUI::ClassInfo<ItemLayout,DirectUI::Element,DirectUI::StandardCreator<ItemLayout> > *);
	void HDelete<ClassInfo<ItemRowLayout,ItemLayout,StandardCreator<ItemRowLayout> > >(DirectUI::ClassInfo<ItemRowLayout,ItemLayout,DirectUI::StandardCreator<ItemRowLayout> > *);
	void HDelete<ClassInfo<LineHScrollBar,LineScrollbarBase,StandardCreator<LineHScrollBar> > >(DirectUI::ClassInfo<LineHScrollBar,LineScrollbarBase,DirectUI::StandardCreator<LineHScrollBar> > *);
	void HDelete<ClassInfo<LineScrollbarBase,CCBaseScrollBar,StandardCreator<LineScrollbarBase> > >(DirectUI::ClassInfo<LineScrollbarBase,DirectUI::CCBaseScrollBar,DirectUI::StandardCreator<LineScrollbarBase> > *);
	void HDelete<ClassInfo<LineScroller,UIBase,StandardCreator<LineScroller> > >(DirectUI::ClassInfo<LineScroller,UIBase,DirectUI::StandardCreator<LineScroller> > *);
	void HDelete<ClassInfo<LineVScrollBar,LineScrollbarBase,StandardCreator<LineVScrollBar> > >(DirectUI::ClassInfo<LineVScrollBar,LineScrollbarBase,DirectUI::StandardCreator<LineVScrollBar> > *);
	void HDelete<ClassInfo<LineViewer,Element,StandardCreator<LineViewer> > >(DirectUI::ClassInfo<LineViewer,DirectUI::Element,DirectUI::StandardCreator<LineViewer> > *);
	void HDelete<ClassInfo<LinkedViewer,Viewer,StandardCreator<LinkedViewer> > >(DirectUI::ClassInfo<LinkedViewer,DirectUI::Viewer,DirectUI::StandardCreator<LinkedViewer> > *);
	void HDelete<ClassInfo<PaintSurrogate,Element,StandardCreator<PaintSurrogate> > >(DirectUI::ClassInfo<PaintSurrogate,DirectUI::Element,DirectUI::StandardCreator<PaintSurrogate> > *);
	void HDelete<ClassInfo<Resizer,Thumb,StandardCreator<Resizer> > >(DirectUI::ClassInfo<Resizer,DirectUI::Thumb,DirectUI::StandardCreator<Resizer> > *);
	void HDelete<ClassInfo<UIBase,Element,StandardCreator<UIBase> > >(DirectUI::ClassInfo<UIBase,DirectUI::Element,DirectUI::StandardCreator<UIBase> > *);
	void HDelete<ClassInfo<UICheckbox,Element,StandardCreator<UICheckbox> > >(DirectUI::ClassInfo<UICheckbox,DirectUI::Element,DirectUI::StandardCreator<UICheckbox> > *);
	void HDelete<ClassInfo<UICollection,UIBase,StandardCreator<UICollection> > >(DirectUI::ClassInfo<UICollection,UIBase,DirectUI::StandardCreator<UICollection> > *);
	void HDelete<ClassInfo<UIColumnHeader,Button,StandardCreator<UIColumnHeader> > >(DirectUI::ClassInfo<UIColumnHeader,DirectUI::Button,DirectUI::StandardCreator<UIColumnHeader> > *);
	void HDelete<ClassInfo<UIColumnHeaderCheckbox,UICheckbox,StandardCreator<UIColumnHeaderCheckbox> > >(DirectUI::ClassInfo<UIColumnHeaderCheckbox,UICheckbox,DirectUI::StandardCreator<UIColumnHeaderCheckbox> > *);
	void HDelete<ClassInfo<UICount,Element,StandardCreator<UICount> > >(DirectUI::ClassInfo<UICount,DirectUI::Element,DirectUI::StandardCreator<UICount> > *);
	void HDelete<ClassInfo<UIDetailsPropertyCollection,Element,StandardCreator<UIDetailsPropertyCollection> > >(DirectUI::ClassInfo<UIDetailsPropertyCollection,DirectUI::Element,DirectUI::StandardCreator<UIDetailsPropertyCollection> > *);
	void HDelete<ClassInfo<UIExpandoButton,Button,StandardCreator<UIExpandoButton> > >(DirectUI::ClassInfo<UIExpandoButton,DirectUI::Button,DirectUI::StandardCreator<UIExpandoButton> > *);
	void HDelete<ClassInfo<UIGroupHeader,Element,StandardCreator<UIGroupHeader> > >(DirectUI::ClassInfo<UIGroupHeader,DirectUI::Element,DirectUI::StandardCreator<UIGroupHeader> > *);
	void HDelete<ClassInfo<UIGroupItem,UIItemCollectionBase,StandardCreator<UIGroupItem> > >(DirectUI::ClassInfo<UIGroupItem,UIItemCollectionBase,DirectUI::StandardCreator<UIGroupItem> > *);
	void HDelete<ClassInfo<UIImage,Element,StandardCreator<UIImage> > >(DirectUI::ClassInfo<UIImage,DirectUI::Element,DirectUI::StandardCreator<UIImage> > *);
	void HDelete<ClassInfo<UIItem,UIBase,StandardCreator<UIItem> > >(DirectUI::ClassInfo<UIItem,UIBase,DirectUI::StandardCreator<UIItem> > *);
	void HDelete<ClassInfo<UIItemsView,HWNDElement,StandardCreator<UIItemsView> > >(DirectUI::ClassInfo<UIItemsView,DirectUI::HWNDElement,DirectUI::StandardCreator<UIItemsView> > *);
	void HDelete<ClassInfo<UIMarqueeSelector,Element,StandardCreator<UIMarqueeSelector> > >(DirectUI::ClassInfo<UIMarqueeSelector,DirectUI::Element,DirectUI::StandardCreator<UIMarqueeSelector> > *);
	void HDelete<ClassInfo<UIProgressProperty,UIProperty,StandardCreator<UIProgressProperty> > >(DirectUI::ClassInfo<UIProgressProperty,UIProperty,DirectUI::StandardCreator<UIProgressProperty> > *);
	void HDelete<ClassInfo<UIProperty,Element,StandardCreator<UIProperty> > >(DirectUI::ClassInfo<UIProperty,DirectUI::Element,DirectUI::StandardCreator<UIProperty> > *);
	void HDelete<ClassInfo<UIRenameTextElement,Edit,StandardCreator<UIRenameTextElement> > >(DirectUI::ClassInfo<UIRenameTextElement,DirectUI::Edit,DirectUI::StandardCreator<UIRenameTextElement> > *);
	void HDelete<ClassInfo<UIRootItem,UIItemCollectionBase,StandardCreator<UIRootItem> > >(DirectUI::ClassInfo<UIRootItem,UIItemCollectionBase,DirectUI::StandardCreator<UIRootItem> > *);
	void HDelete<ClassInfo<UISmartProperty,UIProperty,StandardCreator<UISmartProperty> > >(DirectUI::ClassInfo<UISmartProperty,UIProperty,DirectUI::StandardCreator<UISmartProperty> > *);
	void HDelete<ClassInfo<UISmartPropertyCollection,Element,StandardCreator<UISmartPropertyCollection> > >(DirectUI::ClassInfo<UISmartPropertyCollection,DirectUI::Element,DirectUI::StandardCreator<UISmartPropertyCollection> > *);
	void HDelete<ClassInfo<UISubsetFooter,Element,StandardCreator<UISubsetFooter> > >(DirectUI::ClassInfo<UISubsetFooter,DirectUI::Element,DirectUI::StandardCreator<UISubsetFooter> > *);
	void HDelete<ClassInfo<UITilesPropertyCollection,Element,StandardCreator<UITilesPropertyCollection> > >(DirectUI::ClassInfo<UITilesPropertyCollection,DirectUI::Element,DirectUI::StandardCreator<UITilesPropertyCollection> > *);
	void HDelete<ClassInfo<UITryHarder,UIBase,StandardCreator<UITryHarder> > >(DirectUI::ClassInfo<UITryHarder,UIBase,DirectUI::StandardCreator<UITryHarder> > *);
	void HDelete<ClassInfo<UITryHarderButton,Button,StandardCreator<UITryHarderButton> > >(DirectUI::ClassInfo<UITryHarderButton,DirectUI::Button,DirectUI::StandardCreator<UITryHarderButton> > *);
	void HDelete<ClassInfo<UIViewHeader,Element,StandardCreator<UIViewHeader> > >(DirectUI::ClassInfo<UIViewHeader,DirectUI::Element,DirectUI::StandardCreator<UIViewHeader> > *);
	void HFree(void *);
	void UpdateLayoutRectAndSetVisible(DirectUI::Element *,int,int,DirectUI::Element *,int,int,int,int);
};

namespace EdpHelpers
{
	long EvaluateEdpPolicyOnBehalfOfDropTargetIfNeeded(HWND__ *,IDropTarget *,IDataObject *,unsigned short const *);
	long ShowEdpPrompt(HWND__ *,IDataObject *,unsigned short const *,unsigned short const *,EDP_REQUEST_ACCESS_OPTIONS *,EDP_POLICY_RESULT *);
};

struct FadeElement
{
	static DirectUI::IClassInfo * Class;
	static DirectUI::PropertyInfo const * InitialBackgroundProp();
	static long Register();
	virtual DirectUI::IClassInfo * GetClassInfoW();
	virtual void OnEvent(DirectUI::Event *);
	virtual void OnHosted(DirectUI::Element *);
	virtual void Paint(HDC__ *,tagRECT const *,tagRECT const *,tagRECT *,tagRECT *);
};

class FeatureEnabledLayoutLayout
{
protected:
	tagSIZE _UpdateDesiredSizeWorker(DirectUI::Element *,int,int,DirectUI::Surface *);
public:
	long Initialize(LAYOUTPARAM const *,unsigned int);
	virtual tagSIZE UpdateDesiredSize(DirectUI::Element *,int,int,DirectUI::Surface *);
};

namespace FileExplorerPerf
{
	class ActionSourcePerf
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
	};

	class CommandHandlerInvokePerf
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~CommandHandlerInvokePerf();
	};

	class NavigateEndPerf
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
	};

};

class FileExplorerTelemetry
{
	class ActionDetails
	{
		void EnsureDataReadyForTelemetry();
	protected:
		virtual void ComputeTelemetryData();
	public:
		virtual ActionProperties GetActionProperties();
		virtual UI_EXECUTIONVERB GetRibbonUIExecutionVerb();
		virtual unsigned int GetRibbonCommandId();
		virtual unsigned short const * GetCommandString();
	};

	class AddressComboBoxNavigate
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivityWithCorrelationVector(char const *);
	};

	class AddressEditBoxNavigate
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivityWithCorrelationVector(char const *);
	};

	class BreadcrumbBarNavigate
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivityWithCorrelationVector(char const *);
	};

	class ContextMenuActionDetails
	{
	protected:
		virtual void ComputeTelemetryData();
	};

	class NavigateToPidl
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivityWithCorrelationVector(char const *);
		void Stop(_ITEMIDLIST_ABSOLUTE const *,bool);
	};

	class NavigateWithinView
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
	};

	class RenavigateTask
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(unsigned int);
	};

	class RibbonCommandInvoke
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivityWithCorrelationVector(char const *,int,UI_EXECUTIONVERB,IShellItemArray *);
	};

	class ShellBrowserCreate
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivityWithCorrelationVector(char const *);
		void Stop(HWND__ *,_ITEMIDLIST_ABSOLUTE const *,char const *);
	};

	class TravelBandBackNavigate
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivityWithCorrelationVector(char const *);
	};

	class TravelBandForwardNavigate
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivityWithCorrelationVector(char const *);
	};

	class TravelBandMenuNavigate
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivityWithCorrelationVector(char const *);
	};

	class UpBandNavigate
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivityWithCorrelationVector(char const *);
		~UpBandNavigate();
	};

	static long GetHomeGroupingFromShellItem(IShellItem *,FileExplorerTelemetry::HomeGrouping *);
protected:
	virtual void Initialize();
	void Create();
public:
	static void BreadcrumbBarButtonClicked<unsigned int const &>(unsigned int const &);
	static void BreadcrumbBarContextMenuItemSelected<int &>(int &);
	static void BreadcrumbButtonClicked<int &,int &>(int &,int &);
	void ActionSourceWithIDList_(FileExplorerTelemetryBase::NavigationSource,IUnknown *,_ITEMIDLIST_ABSOLUTE const *);
	void ActionSourceWithShellItemAndDetails_(FileExplorerTelemetryBase::NavigationSource,IUnknown *,IShellItem *,FileExplorerTelemetry::ActionDetails &);
	void ActionSourceWithShellItemArrayAndDetails_(FileExplorerTelemetryBase::NavigationSource,IUnknown *,IShellItemArray *,FileExplorerTelemetry::ActionDetails &);
	void ActionSourceWithShellItem_(FileExplorerTelemetryBase::NavigationSource,IUnknown *,IShellItem *);
	void CommandHandlerInvoke_(EXPLORER_COMMAND_SQM_ID,EXPLORER_COMMAND_SQM_INVOCATION_LOCATION,unsigned long,int,IShellItem *,IUnknown *,unsigned long);
	void NavigateEnd_(_GUID const &,_ITEMIDLIST_ABSOLUTE const *,FileExplorerTelemetryBase::NavigationEvent,long,char const *);
};

class FileExplorerTelemetryDesktop
{
protected:
	long GetBrowserSessionId(IUnknown *,_GUID *);
	long GetDpiInfo(HWND__ *,int *,int *,PROCESS_DPI_AWARENESS *);
	long GetItemAndFolderInViewName(IUnknown *,_SIGDN,unsigned short * *,IShellItem * *);
	long GetParsingName(_ITEMIDLIST_ABSOLUTE const *,unsigned short * *);
	virtual void Initialize();
};

class FirstVisibleElementOnlyLayout
{
protected:
	tagSIZE _UpdateDesiredSizeWorker(DirectUI::Element *,int,int,DirectUI::Surface *);
public:
	virtual tagSIZE UpdateDesiredSize(DirectUI::Element *,int,int,DirectUI::Surface *);
};

struct FloatingHeaderLayout
{
	FloatingHeaderLayout();
	virtual tagSIZE UpdateDesiredSize(DirectUI::Element *,int,int,DirectUI::Surface *);
	virtual void Attach(DirectUI::Element *);
	virtual void Detach(DirectUI::Element *);
	virtual void OnListenedEvent(DirectUI::Element *,DirectUI::Event *);
};

namespace GDIHelpers
{
	long AddBackgroundForIcon(HBITMAP__ *,unsigned long const &,tagSIZE const &,tagSIZE const &,tagSIZE const &,HBITMAP__ * *);
	void FillRectARGB(HDC__ *,tagRECT const *,unsigned char,unsigned long,bool);
};

class GlobalInterfaceTable
{
	static IGlobalInterfaceTable * s_pGlobalInterfaceTable;
	static long s_Retrieve();
public:
	static void Revoke(unsigned long);
};

struct GroupedViewLayoutWalker
{
	long Walk(ItemRowLayout *);
	long _GetDetailsItem(ItemRowLayout *);
};

class HorizontalBorderLayout
{
protected:
	tagSIZE _UpdateDesiredSizeWorker(DirectUI::Element *,int,int,DirectUI::Surface *);
	void _DoLayoutWorker(DirectUI::Element *,tagRECT const &);
public:
	virtual tagSIZE UpdateDesiredSize(DirectUI::Element *,int,int,DirectUI::Surface *);
	virtual void DoLayout(DirectUI::Element *,int,int);
};

struct IVGridProvider
{
	IVGridProvider();
	virtual long GetItem(int,int,IRawElementProviderSimple * *);
	virtual long get_ColumnCount(int *);
	virtual long get_RowCount(int *);
};

class IVGridProxy
{
	long _GetDetailsColumnCount(int *);
	long _GetDetailsItem(int,int,IRawElementProviderSimple * *);
	long _GetDetailsRowCount(int *);
	long _GetGridColumnCount(int *);
	long _GetGridItem(int,int,IRawElementProviderSimple * *);
	long _GetGridRowCount(int *);
	long _GetGroupedDetailsItem(int,int,IRawElementProviderSimple * *);
	long _GetGroupedDetailsRowCount(int *);
	long _GetItemGridLayout(ItemGridLayout * *);
	long _GetItemRowLayout(ItemRowLayout * *);
public:
	virtual long DoMethod(int,char *);
};

struct IVInvokeProvider
{
	IVInvokeProvider();
	virtual long Invoke();
};

struct IVInvokeProxy
{
	virtual long DoMethod(int,char *);
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

class ItemGridLayout
{
	DirectUI::Element * _RealizeItemByIndex(int);
	int _GetSectionRectangle(Interval const &,RECTV *);
	int _IsModel();
	void _AccumulateItems(int,int,int,int,GridHitTestParameters const &);
	void _DetermineColumnWidth();
	void _ExpandLineRect(VIRTUALRECT const &,RECTV *);
	void _GetItems(Interval const &,DirectUI::Value * *,DirectUI::DynamicArray<DirectUI::Element *,0> * *,unsigned int *);
	void _GetItemsForRow(SectionInfo const &,DirectUI::Value * *,DirectUI::DynamicArray<DirectUI::Element *,0> * *,unsigned int *);
	void _HorizontalHitTest(int,RECTV const *,int *,ITEMGUTTER *);
	void _OnItemNavigate(ItemNavigateEvent *);
	void _RecomputeSectionCount();
	void _VerticalHitTest(int,int,VerticalHitTest *);
public:
	ITEM_GRID_MODE GetAlignmentMode();
	bool GetInitialDSPass();
	int GetColumnWidth();
	int GetMinimumIconTextWidth();
	long SetColumnWidth(int);
	long SetInitialDSPass(bool);
	static DirectUI::IClassInfo * Class;
	static DirectUI::PropertyInfo const * AlignmentModeProp();
	static DirectUI::PropertyInfo const * ColumnWidthProp();
	static DirectUI::PropertyInfo const * InitialDSPassProp();
	static DirectUI::PropertyInfo const * ItemMaxSizeProp();
	static DirectUI::PropertyInfo const * ItemMinSizeProp();
	static DirectUI::PropertyInfo const * ItemSpacingProp();
	static DirectUI::PropertyInfo const * MinimumIconTextWidthProp();
	static DirectUI::PropertyInfo const * TabletModeProp();
	static UID DetermineColumnWidthEvent;
	static long Register();
	virtual DirectUI::Element * ItemGetAdjacent(DirectUI::Element *,INAVDIR);
	virtual DirectUI::IClassInfo * GetClassInfoW();
	virtual SIZEV GetSectionDesiredSize(int,SectionInfo const *);
	virtual UIBase * FindItem(int,int);
	virtual UIBase * FindItem(unsigned int);
	virtual bool OnPropertyChanging(DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual int CalculateRowCountFromItemCount(int);
	virtual int CalculateScrollTickCountFromItemCount(int);
	virtual int CalculateSectionCountFromItemCount(int);
	virtual int GetSectionRectangle(int,RECTV *);
	virtual long GetAnchorItemInRect(VIRTUALRECT const &,IItemCollection *,IItem * *);
	virtual tagSIZE _SelfLayoutUpdateDesiredSize(int,int,DirectUI::Surface *);
	virtual unsigned int GetKnownElementChildrenCount(DirectUI::DynamicArray<DirectUI::Element *,0> *);
	virtual unsigned int GetVerticalSpacing();
	virtual void GetContentInfoForRow(int,int,SectionInfo *);
	virtual void GetContentInfoForScrollTick(int,int,SectionInfo *);
	virtual void GetContentInfoForSection(int,int,SectionInfo *);
	virtual void GetGutterLocation(int,int,VerticalHitTest *);
	virtual void GetInfoForItem(int,SectionInfo *);
	virtual void GetInfoForItemFromModel(int,int,SectionInfo *);
	virtual void GetInfoForRow(int,SectionInfo *);
	virtual void GetInfoForScrollTick(int,SectionInfo *);
	virtual void GetInfoForSection(int,SectionInfo const *,SectionInfo *);
	virtual void GetItemsInRange(VIRTUALRECT const &,VIRTUALRECT const &,CDSA<unsigned int> *,CDSA<unsigned int> *,CDSA<unsigned int> *);
	virtual void MeasureItems(DirectUI::Element * *,int);
	virtual void OnEvent(DirectUI::Event *);
	virtual void OnItemsTicksChanged(UIBase *,int);
	virtual void OnPropertyChanged(DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void _SelfLayoutDoLayout(int,int);
};

struct ItemGridLayoutWalker
{
	long Walk(ItemGridLayout *);
};

struct ItemIndex
{
	void Set(tagINDEX_AND_VERSION const *,unsigned int);
};

class ItemLayout
{
protected:
	void _MeasureItemsImpl(DirectUI::Element * *,int);
public:
	VIRTUALDIRECTION GetVirtualDirection();
	bool GetVirtualizedGroups();
	int GetColumnCount();
	int GetItemCount();
	int GetRowCount();
	int GetScrollTickCount();
	int GetScrollTicksPerSection();
	int GetSectionCount();
	long SetColumnCount(int);
	long SetItemCount(int);
	long SetRowCount(int);
	long SetScrollTickCount(int);
	long SetSectionCount(int);
	long SetVirtualizedGroups(bool);
	static DirectUI::IClassInfo * Class;
	static DirectUI::PropertyInfo const * ColumnCountProp();
	static DirectUI::PropertyInfo const * ItemCountProp();
	static DirectUI::PropertyInfo const * RowCountProp();
	static DirectUI::PropertyInfo const * ScrollTickCountProp();
	static DirectUI::PropertyInfo const * ScrollTicksPerSectionProp();
	static DirectUI::PropertyInfo const * SectionCountProp();
	static DirectUI::PropertyInfo const * VirtualDirectionProp();
	static DirectUI::PropertyInfo const * VirtualizedGroupsProp();
};

class ItemRowLayout
{
	SIZEV _UpdateElementDesiredSize(DirectUI::Element *,int,int,DirectUI::Surface *);
	int _GetSectionSeparatorHeight(unsigned int,int *,int *);
	int _GetSeparatorHeight(int *,int *);
	int _IsExpandedGroup(SectionInfo const &);
	int _SearchForSectionInChildrenList(int (*)(SectionInfo const &,unsigned __int64),unsigned __int64,SectionInfo *);
	int _SearchForSectionInVirtualUIGroupItemList(int (*)(SectionInfo const &,unsigned __int64),unsigned __int64,SectionInfo *);
	void OnColumnLayoutChanged();
	void _AccumulateItems(int,int,CDSA<unsigned int> *,CDSA<unsigned int> *);
	void _ExpandLineRect(VIRTUALRECT const &,Interval *,ITEMGUTTER *);
	void _ExtrapolateSections(SectionInfo const &,int,SectionInfo *);
	void _GetNextSection(SectionInfo const *,int,SectionInfo *);
	void _HorizontalHitTest(int,int,ITEMGUTTER *);
	void _OnItemNavigate(ItemNavigateEvent *);
	void _RecomputeScrollTickCount();
public:
	bool GetUseItemWidth();
	int GetSeparatorLineHeight();
	long LoadVirtualUIGroupItems(CCoSimpleArray<ATL::CComPtr<IVirtualUIGroupItem>,4294967294,CSimpleArrayStandardCompareHelper<ATL::CComPtr<IVirtualUIGroupItem> > > *);
	static DirectUI::IClassInfo * Class;
	static DirectUI::PropertyInfo const * SeparatorLineHeightProp();
	static DirectUI::PropertyInfo const * SeparatorLineProp();
	static DirectUI::PropertyInfo const * SeparatorPaddingProp();
	static DirectUI::PropertyInfo const * UseItemWidthProp();
	static long Register();
	virtual DirectUI::Element * ItemGetAdjacent(DirectUI::Element *,INAVDIR);
	virtual DirectUI::IClassInfo * GetClassInfoW();
	virtual SIZEV GetSectionDesiredSize(int,SectionInfo const *);
	virtual UIBase * FindItem(int,int);
	virtual UIBase * FindItem(unsigned int);
	virtual int CalculateRowCountFromItemCount(int);
	virtual int CalculateScrollTickCountFromItemCount(int);
	virtual int CalculateSectionCountFromItemCount(int);
	virtual int GetSectionRectangle(int,RECTV *);
	virtual long GetAnchorItemInRect(VIRTUALRECT const &,IItemCollection *,IItem * *);
	virtual tagSIZE _SelfLayoutUpdateDesiredSize(int,int,DirectUI::Surface *);
	virtual unsigned int GetKnownElementChildrenCount(DirectUI::DynamicArray<DirectUI::Element *,0> *);
	virtual unsigned int GetVerticalSpacing();
	virtual void GetContentInfoForRow(int,int,SectionInfo *);
	virtual void GetContentInfoForScrollTick(int,int,SectionInfo *);
	virtual void GetContentInfoForSection(int,int,SectionInfo *);
	virtual void GetGutterLocation(int,int,VerticalHitTest *);
	virtual void GetInfoForItem(int,SectionInfo *);
	virtual void GetInfoForItemFromModel(int,int,SectionInfo *);
	virtual void GetInfoForRow(int,SectionInfo *);
	virtual void GetInfoForScrollTick(int,SectionInfo *);
	virtual void GetInfoForSection(int,SectionInfo const *,SectionInfo *);
	virtual void GetItemsInRange(VIRTUALRECT const &,VIRTUALRECT const &,CDSA<unsigned int> *,CDSA<unsigned int> *,CDSA<unsigned int> *);
	virtual void MeasureItems(DirectUI::Element * *,int);
	virtual void OnEvent(DirectUI::Event *);
	virtual void OnItemsTicksChanged(UIBase *,int);
	virtual void OnPropertyChanged(DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void Paint(HDC__ *,tagRECT const *,tagRECT const *,tagRECT *,tagRECT *);
	virtual void _SelfLayoutDoLayout(int,int);
	void ClearVirtualUIGroupItems();
	void SetAllExpandoStates(tagEXPANDOSTATE);
	void SuspendItemTicksChangeNotifications(int);
};

struct LineHScrollBar
{
	static DirectUI::IClassInfo * Class;
	static long Register();
	virtual DirectUI::IClassInfo * GetClassInfoW();
};

class LineScrollbarBase
{
	static UID DeferUpdateScrollbar;
	static __int64 s_ScrollHookProc(int,unsigned __int64,__int64);
public:
	int GetMaxScrollPosition();
	static DirectUI::IClassInfo * Class;
	virtual bool OnMessage(unsigned int,unsigned __int64,__int64,__int64 *);
	virtual tagSIZE GetContentSize(int,int,DirectUI::Surface *);
	virtual void LineDown(unsigned int);
	virtual void LineUp(unsigned int);
	virtual void OnDestroy();
	virtual void OnEvent(DirectUI::Event *);
	virtual void OnPropertyChanged(DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void PageDown(unsigned int);
	virtual void PageUp(unsigned int);
	void GetScrollbarInfo(tagSCROLLBARINFO *);
};

class LineScroller
{
	DirectUI::Element * _GetViewerContainer();
	DirectUI::Element * _GetViewerForElement(DirectUI::Element *);
	VIEWPOSITION _GetViewEdge(RowInfo const &,VIEWPOSITION);
	int _CheckScroll(LineScrollbarBase *,int,SCROLLBARVISIBILITY);
	int _GetIdealAnchorForScrolling(int,int,SCROLLDIR);
	int _GetOverlapLimitForScrolling(int,int,SIZEV const &,SCROLLDIR);
	int _GetScrollTickFromAnchor(int);
	int _HasScrollableHeader();
	int _IsOnlyRow(RowInfo const &);
	int _IsRowPageBottom(SCROLLDIR,int,int);
	long _GetForwardRow(VIEWPOSITION,RowInfo *);
	long _GetScrollTickRectangle(int,RECTV *,int);
	long _RealizeDirectionWorker(IVirtualizedUI *,int,REALIZEDIRECTION,int,int *,CRealizedIntervalHelper *);
	long _RealizeScrollTickWorker(IVirtualizedUI *,int);
	static UID DelayMakeVisibleEvent;
	static UID PaintAfterUpdate;
	void _DeferPaintAfterUpdate();
	void _EnsureRealizePass();
	void _FireAnimationChangeEvent(bool);
	void _GetMinMoveForScrolling(RowInfo const &,SIZEV const &,SCROLLDIR,int *,int *);
	void _GetScrollRow<DirectUI::Element *>(void ( IVirtualizedUI::*)(DirectUI::Element *,SectionInfo *),DirectUI::Element * (*)(SectionInfo const &,DirectUI::Element *),IVirtualizedUI *,DirectUI::Element *,RowInfo *);
	void _GetScrollRow<int>(void ( IVirtualizedUI::*)(int,SectionInfo *),int (*)(SectionInfo const &,int),IVirtualizedUI *,int,RowInfo *);
	void _GetScrollTipValue(UIItem *,unsigned short * *);
	void _LayoutContent(OFFSCREENCONTENT);
	void _MakeVisibleWorker(DirectUI::Element *,DirectUI::Element *);
	void _OnDelayMakeVisible();
	void _OnKeyPageUpDown(SCROLLDIR);
	void _OnScrollTickCountChanged();
	void _RealizeContent(OFFSCREENCONTENT);
	void _RecordMakeVisible(DirectUI::Element *);
	void _ScrollLineUpDown(int,SCROLLDIR);
	void _ScrollRowToEdge(RowInfo const &,VIEWPOSITION,SCROLLSYNC,int);
	void _ScrollRowToPositionWorker(RowInfo const &,int,VIEWPOSITION,SCROLLSYNC,int);
	void _ShowScrollTips(int);
	void _SyncHeaderToScrollbar();
	void _SyncScrollbarToHeader();
	void _UpdateAnchorFromScrollbar();
	void _UpdateScrollTips();
	void _UpdateScrollbarAfterLayout();
	void _UpdateScrollbarMetrics();
	void _Viewer_MakeVisibleWorker(DirectUI::Element *,tagRECT const &);
public:
	LineScroller();
	SCROLLBARVISIBILITY GetRealXBarVisibility();
	SCROLLBARVISIBILITY GetRealYBarVisibility();
	SIZEV GetViewerSize();
	VIRTUALDIRECTION GetVirtualDirection();
	bool GetRealXScrollable();
	bool GetRealYScrollable();
	int ElementIsCutOff(DirectUI::Element *);
	int GetContentYPosFromExtrapolatedScrollUnit(int);
	int GetContentYPosFromScrollUnit(int);
	int GetRealXAnchor();
	int GetRealXTarget();
	int GetRealYAnchor();
	int GetRealYTarget();
	int GetRowInfoForNextRow(RowInfo const &,SCROLLDIR,RowInfo *);
	int GetScrollableContentWidth();
	int GetXScrollable();
	int GetYScrollable();
	int IsRowCutOff(RowInfo const &,VIEWPOSITION);
	long GetRowFromYPosition(int,RowInfo *,int);
	long GetRowInfoForPosition(VIEWPOSITION,RowInfo *);
	long GetRowInfoForPositionOrNearest(VIEWPOSITION,RowInfo *);
	long GetRowRectangle(int,RECTV *);
	long GetScrollUnitFromViewerYPos(int,int *,GETSCROLLUNITFROMVIEWERYPOSFLAGS);
	long Initialize(DirectUI::Element *,unsigned long *);
	long SetRealXAnchor(int);
	long SetRealXTarget(int);
	long SetRealYAnchor(int);
	long SetRealYTarget(int);
	long SetVirtualizedContent(IVirtualizedUI *);
	static DirectUI::IClassInfo * Class;
	static DirectUI::PropertyInfo const * PinningProp();
	static DirectUI::PropertyInfo const * RealXAnchorProp();
	static DirectUI::PropertyInfo const * RealXBarVisibilityProp();
	static DirectUI::PropertyInfo const * RealXScrollableProp();
	static DirectUI::PropertyInfo const * RealXTargetProp();
	static DirectUI::PropertyInfo const * RealYAnchorProp();
	static DirectUI::PropertyInfo const * RealYBarVisibilityProp();
	static DirectUI::PropertyInfo const * RealYScrollableProp();
	static DirectUI::PropertyInfo const * RealYTargetProp();
	static DirectUI::PropertyInfo const * VirtualDirectionProp();
	static UID PostLayoutEvent;
	static long Register();
	tagSIZE GetViewableAreaOfDescendent(DirectUI::Element *,int,int);
	virtual DirectUI::IClassInfo * GetClassInfoW();
	virtual long Insert(DirectUI::Element * *,unsigned int,unsigned int);
	virtual void OnEvent(DirectUI::Event *);
	virtual void OnInput(DirectUI::InputEvent *);
	virtual void OnKeyFocusMoved(DirectUI::Element *,DirectUI::Element *);
	virtual void OnListenedPropertyChanged(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnListenerDetach(DirectUI::Element *);
	virtual void OnPropertyChanged(DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void Paint(HDC__ *,tagRECT const *,tagRECT const *,tagRECT *,tagRECT *);
	virtual ~LineScroller();
	void EndMakeVisibleBatch();
	void GetRowInfoForElement(DirectUI::Element *,RowInfo *);
	void GetRowInfoForRow(int,RowInfo *);
	void GetRowInfoForScrollTick(int,RowInfo *,int);
	void KeepRowAnchored(RowInfo);
	void MakeVisible(DirectUI::Element *);
	void MakeVisibleHorizontal(DirectUI::Element *);
	void MapLeafSectionToRow(SectionInfo const &,RowInfo *);
	void ScrollDelta(tagSIZE const &);
	void ScrollLeafSectionToPosition(SectionInfo const &,VIEWPOSITION,SCROLLSYNC,int);
	void ScrollPageDown(unsigned int);
	void ScrollPageUp(unsigned int);
	void ScrollPreciseDelta(tagSIZE const &,tagSIZE *);
	void ScrollRowToPosition(RowInfo const &,VIEWPOSITION,SCROLLSYNC,int);
	void ScrollTickToPosition(int,VIEWPOSITION,SCROLLSYNC,int);
	void ScrollToLeftEdge();
	void ScrollToPosition(VIEWPOSITION,SCROLLSYNC);
	void StartMakeVisibleBatch(DirectUI::Element *);
};

struct LineVScrollBar
{
	static DirectUI::IClassInfo * Class;
	static long Register();
	virtual DirectUI::IClassInfo * GetClassInfoW();
};

class LineViewer
{
	void _OnKeyboardNavigate(DirectUI::KeyboardNavigateEvent *);
public:
	int GetLayoutState();
	long Initialize(DirectUI::Element *,unsigned long *);
	long SetLayoutState(int);
	static DirectUI::IClassInfo * Class;
	static DirectUI::PropertyInfo const * LayoutStateProp();
	static long Register();
	virtual DirectUI::IClassInfo * GetClassInfoW();
	virtual bool EnsureVisible(int,int,int,int);
	virtual tagSIZE _SelfLayoutUpdateDesiredSize(int,int,DirectUI::Surface *);
	virtual void OnEvent(DirectUI::Event *);
	virtual void OnPropertyChanged(DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void _SelfLayoutDoLayout(int,int);
};

class LinkedViewer
{
	LineScroller * _GetScroller();
	bool _InternalEnsureVisible(int,int,int,int);
public:
	static DirectUI::IClassInfo * Class;
	static long Create(DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	static long Register();
	virtual DirectUI::IClassInfo * GetClassInfoW();
	virtual bool EnsureVisible(int,int,int,int);
	virtual void _SelfLayoutDoLayout(int,int);
};

namespace Microsoft
{
	namespace WRL
	{
		class ComPtr<CMarshaledInterface::CMarshalStream>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			void Attach(CMarshaledInterface::CMarshalStream *);
		};

		class ComPtr<CNscLock>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<CQueueItem>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IAgileObject>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IAgileReference>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IAssociationArray>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IAssociationList>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IAutomaticDestinationList>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IBindCtx>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IContextMenu>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IContextMenuForProgInvoke>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IDrawPropertyControl>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IDropTarget>
		{
		protected:
			unsigned long InternalRelease();
		public:
			long As<IEnterpriseDropTarget>(Details::ComPtrRef<ComPtr<IEnterpriseDropTarget> >);
		};

		class ComPtr<IEnterpriseDropTarget>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IExplorerFrame>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IExplorerLauncher>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IExplorerRibbonHost>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IFileOperation>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IFileOperationPriv>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IFilePlaceholder>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IFilterCondition>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IFolderView2>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IFolderView>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IFolderWithNavigationOptions>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IGlobalInterfaceTable>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IIconListControl>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IImmersiveApplicationManager>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IImmersiveMonitor>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IImmersiveMonitorManager>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IItem>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IItemActionsManager>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IKnownFolder>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IKnownFolderManager>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IKnownFolderProperties>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<ILinkTarget>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<ILoadFilter>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<ILocalCopy>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IMarshal>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<INameSpaceTreeAccessible2>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<INameSpaceTreeControlFolderCapabilities>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<INamedPropertyStore>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<INscTreeTasksCallback>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IObjectArray>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IObjectCollection>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IObjectWithAssociationList>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IOleWindow>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IPropertyDescription2>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IPropertyDescription>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IPropertyStore>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IQueryAssociations>
		{
		protected:
			unsigned long InternalRelease();
		};

		struct ComPtr<IRawElementProviderSimple>
		{
			ComPtr<IRawElementProviderSimple> & operator=(IRawElementProviderSimple *);
		};

		class ComPtr<IScope>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IScopeItem>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<ISelectionStateCallback>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IServiceProvider>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IShellBrowserService>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IShellFolder2>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IShellFolder>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IShellItem2>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IShellItem>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IShellItemArray>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IShellLinkW>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IShellNavigationBand>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IShellView>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IStorageProviderInfo>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IStream>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<ISyncRootManager>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IThreadRefWithEvent>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<ITravelLog>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IUnknown>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			ComPtr<IUnknown> & operator=(IUnknown *);
		};

		class ComPtr<IWICBitmap>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IWICBitmapScaler>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IWICBitmapSource>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IWICFormatConverter>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IWICImagingFactory>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IWaitCursorManager>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IWebBrowserApp>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Internal::ComTaskPool::CThread>
		{
		protected:
			unsigned long InternalRelease();
		public:
			void Attach(Windows::Internal::ComTaskPool::CThread *);
		};

		class ComPtr<Windows::Internal::IComPoolTask>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<wil::details::DummyUnknown>
		{
		protected:
			unsigned long InternalRelease();
		};

		namespace Details
		{
			struct ModuleBase
			{
				static ModuleBase * module_;
			};

			class RuntimeClassBaseT<2>
			{
			protected:
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,IServiceProvider,IOpenWithTypeOverride> >(RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,IServiceProvider,IOpenWithTypeOverride> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IPersist,IOleWindow> >(RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IPersist,IOleWindow> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IUnknown> >(RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IUnknown> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask> >(RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask> *,_GUID const &,void * *);
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,CWRLObjectWithGITSite,IServiceProvider,ITelemetryCorrelationVector,FtmBase>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,IServiceProvider,IOpenWithTypeOverride>
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

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IServiceProvider>
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

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			long MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,IStream * &>(CMarshaledInterface::CMarshalStream * *,IStream * &);
			long MakeAndInitialize<COpenWithTypeOverride,IServiceProvider,unsigned short (&)[32],IUnknown * &>(IServiceProvider * *,unsigned short (&)[32],IUnknown * &);
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

		struct RuntimeClass<RuntimeClassFlags<2>,CWRLObjectWithGITSite,IServiceProvider,ITelemetryCorrelationVector,FtmBase>
		{
			RuntimeClass<RuntimeClassFlags<2>,CWRLObjectWithGITSite,IServiceProvider,ITelemetryCorrelationVector,FtmBase>();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,IUnknown>
		{
			RuntimeClass<RuntimeClassFlags<2>,IUnknown>();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>
		{
			RuntimeClass<RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>();
		};

		namespace Wrappers
		{
			class HandleT<HandleTraits::HANDLENullTraits>
			{
			protected:
				virtual bool InternalClose();
			};

		};

	};

};

class NSCITEMINFO
{
	void _FreeData();
public:
	void Release(int);
};

class NamespaceRestrictionHelper
{
	bool IsNetworkOrURLItem(IShellItem *);
	bool IsURLItem(IShellItem *);
	long EnsureManager();
	long GetKnownFolderIdFromItem(IShellItem *,_GUID *);
	long GetKnownFolderIdNearestMatch(IShellItem *,_GUID *);
	long ShouldAllowAccessToFolder(IShellItem *,HKEY__ * *,bool *);
	long ShouldAllowAccessToKnownFolder(_GUID const *,HKEY__ * *,bool *);
	long ShouldAllowAccessToStorageLocation(IShellItem *,HKEY__ * *,bool *);
public:
	long ShouldNavigateToFolder(IShellItem *,bool *);
};

class NscCloudStateIconExtractor
{
	long Extract(unsigned __int64);
	long GetIconResourceString(unsigned __int64,unsigned short * *);
	long GetShellCachedImageIndex(unsigned short *,unsigned __int64);
	long SetCloudStateImageList(HWND__ *);
public:
	static NscVisibleCloudStates MapToCloudState(_tagpropertykey const &,unsigned long);
};

struct NscCloudStateIconManager
{
	long AddNscCloudStateIconTask(IShellTaskScheduler *,CNscLock *,_TREEITEM *,_ITEMIDLIST_ABSOLUTE *,NSCITEMINFO *,unsigned int);
	void SetCloudStateIcon(HWND__ *,_TREEITEM *,NscVisibleCloudStates);
};

class NscCloudStateIconQueueItem
{
	NscCloudStateIconQueueItem(_TREEITEM *,NSCITEMINFO *,NscVisibleCloudStates,unsigned int);
public:
	static long CreateInstance(_TREEITEM *,NSCITEMINFO *,NscVisibleCloudStates,unsigned int,CQueueItem * *);
	virtual long Dispatch(IUnknown *);
};

class NscCloudStateIconTask
{
	long GetShareStatus(IPropertyStore *,unsigned long *);
public:
	NscCloudStateIconTask(CNscLock *,_TREEITEM *,_ITEMIDLIST_ABSOLUTE *,NSCITEMINFO *,unsigned int);
	virtual long InternalResumeRT();
};

struct PaintSurrogate
{
	static DirectUI::IClassInfo * Class;
	static long Register();
	virtual DirectUI::IClassInfo * GetClassInfoW();
	virtual void Paint(HDC__ *,tagRECT const *,tagRECT const *,tagRECT *,tagRECT *);
};

struct PiiSafeKnownFolder
{
	PiiSafeKnownFolder();
};

struct PiiSafeKnownFolderList
{
	PiiSafeKnownFolder const * ReturnMatchingKnownFolder(unsigned short const * const);
	PiiSafeKnownFolderList();
	void Initialize();
};

class PiiSafeShellitemParsingName
{
	static ShellItemParsingNameType GetShellitemNameType(unsigned short const *);
	void EnsurePiiSafe();
public:
	PiiSafeShellitemParsingName(unsigned short const *);
	unsigned short const * Get();
};

struct PiiSafeShellitemParsingNameEvent
{
	PiiSafeShellitemParsingNameEvent(PiiSafeShellitemParsingName &);
	PiiSafeShellitemParsingNameEvent(PiiSafeShellitemParsingName &,PiiSafeShellitemParsingName &);
	unsigned short const * GetCorrelationId();
};

class PiiSafeShellitemParsingNameProperties
{
	PiiSafeShellitemParsingNameProperties(PiiSafeShellitemParsingName const &);
	static unsigned short const * LastInstanceOfChar(unsigned short const *,unsigned short);
	unsigned char CalculatePathDepth(unsigned short const *,bool);
	void PopulateBasicFields(IShellItem *);
public:
	PiiSafeShellitemParsingNameProperties(PiiSafeShellitemParsingName const &,IShellItem *);
	PiiSafeShellitemParsingNameProperties(PiiSafeShellitemParsingName const &,_ITEMIDLIST_ABSOLUTE const *);
};

struct QueuedEvent
{
	QueuedEvent(QueuedEvent const &);
};

struct Resizer
{
	static DirectUI::IClassInfo * Class;
	static UID Context;
	static UID DoubleClick;
	static UID DragDone;
	static long Create(DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	static long Register();
	virtual DirectUI::IClassInfo * GetClassInfoW();
	virtual void OnInput(DirectUI::InputEvent *);
};

namespace SQM
{
	int _IsKnownFolder(IShellItem *,_GUID const &,COMPARE_ITEMS_RESULT);
	long _GetCurrentTopView(IShellItem *,TOPVIEWKEY *);
	long _GetTopNodeCLSID(IShellItem *,_GUID *);
	unsigned int GetSQMIDForBrowserHost(IUnknown *);
	unsigned int GetSQMIDForFolderTypeKind(_GUID const &);
	unsigned int GetSQMIDForTopView(TOPVIEWKEY const &);
	unsigned int _GetSQMIDForFolderTypeContainerFromItem(IShellItem *);
	unsigned int _GetSQMIDForTopViewFromItem(IShellItem *);
	unsigned long _FireSqmEvent(void *);
	void _GetSQMIDForDetailsFavorites(IShellItem *,unsigned int *);
	void _GetSQMIDForDetailsLibraries(IShellItem *,unsigned int *);
	void _GetSQMIDForDetailsNavPane(IShellItem *,unsigned int *,unsigned int *);
};

struct SectionInfo
{
	UIBase * GetParentElement();
};

struct SelectionState
{
	SelectionState & operator=(SelectionState const &);
	SelectionState(SelectionState const &);
};

class ShStrW
{
	long _SetStr(char const *,unsigned long);
public:
	long SetSize(unsigned long);
	void Reset();
};

struct SyncProviderTelemetryHelpers
{
	static long GetProviderNameAndInfoFlags(IShellItem *,unsigned short * *,STORAGE_PROVIDER_INFO_FLAGS *);
	static long GetStorageProviderInfo(IShellItem *,IStorageProviderInfo * *);
};

namespace TLV
{
	std::nothrow_t const nothrow;
	void Base64Encode<129>(unsigned char const *,unsigned __int64,char (&)[129]);
};

namespace TabletModeHelpers
{
	bool IsTabletMode();
};

class TaskbarList
{
protected:
	HWND__ * _HwndGetTaskbarList();
	int _FindTab(tagPROPVARIANT const &,HWND__ *);
	int _IsWindowInCurrentProcess(HWND__ *);
	long _ReallocTabs(CComPropVariant &,unsigned int);
	long _RemoveInvalidTabs(HWND__ *);
	long _RemoveTab(HWND__ *,HWND__ *);
	long _ThumbBarUpdateButtons(HWND__ *,unsigned int,THUMBBUTTON *,unsigned int);
	void _CopyThumbButton(tagTHUMBBUTTON32 *,THUMBBUTTON * const);
	void _FreeThumbButtonIcons(void *,unsigned long);
	void _MoveNToM(unsigned long *,unsigned int,int,int);
public:
	TaskbarList();
	virtual long ActivateTab(HWND__ *);
	virtual long AddTab(HWND__ *);
	virtual long DeleteTab(HWND__ *);
	virtual long GetRestartInfoFlags(RESTARTINFOFLAGS *);
	virtual long HrInit();
	virtual long MarkFullscreenWindow(HWND__ *,int);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long RegisterTab(HWND__ *,HWND__ *);
	virtual long SetActiveAlt(HWND__ *);
	virtual long SetOverlayIcon(HWND__ *,HICON__ *,unsigned short const *);
	virtual long SetProgressState(HWND__ *,TBPFLAG);
	virtual long SetProgressValue(HWND__ *,unsigned __int64,unsigned __int64);
	virtual long SetTabActive(HWND__ *,HWND__ *,unsigned long);
	virtual long SetTabOrder(HWND__ *,HWND__ *);
	virtual long SetTabProperties(HWND__ *,STPFLAG);
	virtual long SetThumbnailClip(HWND__ *,tagRECT *);
	virtual long SetThumbnailTooltip(HWND__ *,unsigned short const *);
	virtual long ThumbBarAddButtons(HWND__ *,unsigned int,THUMBBUTTON *);
	virtual long ThumbBarSetImageList(HWND__ *,_IMAGELIST *);
	virtual long ThumbBarUpdateButtons(HWND__ *,unsigned int,THUMBBUTTON *);
	virtual long UnregisterTab(HWND__ *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct TelemetryCorrelationVector
{
	static wistd::unique_ptr<TraceLoggingCorrelationVector,wistd::default_delete<TraceLoggingCorrelationVector> > Make(char const *);
};

struct TelemetryCorrelationVectorServiceProvider
{
	static Microsoft::WRL::ComPtr<IUnknown> ChainSite(TelemetryCorrelationVectorServiceProvider *,IUnknown *);
	static Microsoft::WRL::ComPtr<IUnknown> InsertIntoSiteObject(TelemetryCorrelationVectorServiceProvider *,IUnknown *,IServiceProvider *);
	static Microsoft::WRL::ComPtr<TelemetryCorrelationVectorServiceProvider> Make(IUnknown *);
	static Microsoft::WRL::ComPtr<TelemetryCorrelationVectorServiceProvider> Make(IUnknown *,_GUID const &);
	virtual long Increment(char * *);
	virtual long QueryService(_GUID const &,_GUID const &,void * *);
	virtual long ToString(char * *);
};

class TraceLoggingCorrelationVector
{
	bool ToStringImpl(unsigned __int64,char *);
	static TraceLoggingCorrelationVector::CvVersion ValidateImpl(char const *,bool);
	unsigned __int64 IncrementImpl();
	void CreateCvFromGuid<12>(_GUID);
public:
	TraceLoggingCorrelationVector();
	TraceLoggingCorrelationVector(TraceLoggingCorrelationVectorV1_t);
	TraceLoggingCorrelationVector(TraceLoggingCorrelationVectorV2_t);
	static TraceLoggingCorrelationVector * Extend(char const *,bool);
};

namespace TrayHelpers
{
	bool IsPrimaryTray(HWND__ *);
	void AttachWindowToPrimaryTray(HWND__ *,bool,unsigned long);
};

class UIBase
{
protected:
	void FireUIChildChangedEvent(tagCOLLECTION_CHANGE_STATE,ITEM_CHANGED_TYPE);
public:
	UICapabilities GetCapabilities();
	bool GetInfoTipCallback();
	long GetCollectionCache(ICollectionCache * *);
	long SetCreationID(unsigned short const *);
	long SetDropHighlight(bool);
	static DirectUI::IClassInfo * Class;
	static DirectUI::PropertyInfo const * CapabilitiesProp();
	static DirectUI::PropertyInfo const * DropHighlightProp();
	static DirectUI::PropertyInfo const * InfoTipCallbackProp();
	static DirectUI::PropertyInfo const * VisibleMinSizeProp();
	static UID ItemNavigate;
	static UID LayoutChange;
	static UID UIChildChanged;
	static long Register();
	static void FireLayoutChangeEvent(DirectUI::Element *,LAYOUTCHANGEREASON);
	static void PostLayoutChangeEvent(DirectUI::Element *,LAYOUTCHANGEREASON);
	virtual DirectUI::IClassInfo * GetClassInfoW();
	virtual IVirtualizedUI * GetVirtualizedUI();
	virtual int GetBaselineOffset();
	virtual int GetDesiredBaselineOffset();
	virtual int GetDesiredFooterOverhang();
	virtual int ShouldKeepAlive();
	virtual void KeepAliveAddRef();
	virtual void KeepAliveRelease();
	virtual void OnPropertyChanged(DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void SetBaselineOffset(int);
	virtual void SetDesiredFooterOverhang(int);
};

class UICheckbox
{
protected:
	void _UpdateShowState();
public:
	long SetHoveredOver(bool);
	long SetSelectionMode(bool);
	long SetShowCheckboxes(bool);
	static DirectUI::IClassInfo * Class;
	static DirectUI::PropertyInfo const * AlwaysHideCheckboxProp();
	static DirectUI::PropertyInfo const * HoveredOverProp();
	static DirectUI::PropertyInfo const * SelectionModeProp();
	static DirectUI::PropertyInfo const * ShowCheckboxesProp();
	static DirectUI::PropertyInfo const * TabletModeProp();
	static long Register();
	virtual DirectUI::IClassInfo * GetClassInfoW();
	virtual void OnEvent(DirectUI::Event *);
	virtual void OnHosted(DirectUI::Element *);
	virtual void OnListenedInput(DirectUI::Element *,DirectUI::InputEvent *);
	virtual void OnUnHosted(DirectUI::Element *);
};

class UICollection
{
protected:
	DirectUI::Element * _GetHeaderFooterElement(SECTIONTYPE);
	IVirtualizedUI * _GetVirtualizedUIForSection(SectionInfo const &);
	SECTIONTYPE _GetElementSection(DirectUI::Element *);
	SECTIONTYPE _GetSectionType(int);
	int _GetFirstLayoutSection();
	int _GetFooterRowCount();
	int _GetHeaderRowCount();
	int _IsTopCollection();
	long _CreateAndInsertItems(ItemLayout *,unsigned int,unsigned int,unsigned int);
	long _CreateUIItemFromResId(unsigned short const *,unsigned int,IItem *,DirectUI::Element *,UIItem * *);
	long _CreateVirtualUIGroupItemFromIndex(unsigned int,HWND__ *,IEventQueue *,IFirstPageResults *,UIGroupItem *,IVirtualUIGroupItem * *);
	long _CreateVirtualUIGroupItems(unsigned int,unsigned int);
	long _EnsureUIGroupItemModel();
	long _GetBareSectionRectangle(int,RECTV *);
	long _GetInfoFromTreeIndexAndIVirtualUIGroupItem(IVirtualUIGroupItem *,tagINDEX_AND_VERSION *,unsigned int,unsigned int *,SectionInfo *,IItem * *);
	long _GetInfoFromTreeIndexAndUIGroupItem(UIGroupItem *,tagINDEX_AND_VERSION *,unsigned int,unsigned int *,SectionInfo *,IItem * *);
	long _GetSectionRectangle(int,RECTV *);
	long _GetUIItemResId(IItem *,unsigned short * *);
	long _RealizeItems(unsigned int,unsigned int);
	long _RecreateUIItem(UIItem *,IItem *,unsigned short const *);
	long _RestoreItemState(UIItem *,IItem *);
	long _Update(tagCOLLECTION_CHANGE_STATE);
	unsigned int _GetItemCountFromCollection();
	void _AddRowMarginsToSectionRectangle(int,RECTV *);
	void _DestroyItems(REALIZEDIRECTION,unsigned int);
	void _GetHeaderFooterSectionInfo(SECTIONTYPE,SectionInfo *);
	void _MapLayoutSectionToCollectionSection(SectionInfo *);
	void _OnItemNavigate(ItemNavigateEvent *);
	void _RequestRefreshViewIfStartMenu();
	void _ReuseAndDestroyExistingChildren(ItemLayout *);
	void _UnrealizeItem(UIItem *);
	void _UpdateItemCount();
	void _UpdateSubsetingOnColumnChange();
public:
	ItemLayout * GetItemLayout();
	UICollection();
	UIItem * TryToRealizeIndex(ItemIndex const &,unsigned int);
	UIItem * TryToRealizeItem(IItem *);
	VIRTUALDIRECTION GetVirtualDirection();
	int CalculateRowCountFromItemCount(int);
	int CalculateScrollTickCountFromItemCount(int);
	int GetFooterScrollTicks();
	int GetHeaderScrollTicks();
	int GetLayoutTickCount();
	int GetSubsetItemCountFromGroup(IItem *,IItemCollection *);
	long GetAnchorItemInRect(VIRTUALRECT const &,IItem * *);
	long GetEventActionCB(IUnknown *,int,CollectionEventParams *,tagEVENTACTION *);
	long GetIItemAtIndex(unsigned int,IItem * *);
	long GetItemCollection(_GUID const &,void * *);
	long OnCollectionEventCB(IUnknown *,CollectionEventParams *);
	long SetFooterScrollTicks(int);
	long SetHeaderScrollTicks(int);
	long SetItemCollection(IItemCollection *);
	long SetTopCollection(bool);
	long UpdateEmptyText();
	static DirectUI::IClassInfo * Class;
	static DirectUI::PropertyInfo const * DevirtualizeItemsProp();
	static DirectUI::PropertyInfo const * FooterScrollTicksProp();
	static DirectUI::PropertyInfo const * HeaderScrollTicksProp();
	static DirectUI::PropertyInfo const * LogicalImageSizeProp();
	static DirectUI::PropertyInfo const * TopCollectionProp();
	static DirectUI::PropertyInfo const * UIItemCreationPropMapProp();
	static DirectUI::PropertyInfo const * VirtualDirectionProp();
	static UID ColumnCountUpdate;
	static UID InvokeSubsetting;
	static UID RemoveSubsetting;
	static long Register();
	unsigned int CalculatePhysicalImageSize();
	virtual DirectUI::Element * ItemGetAdjacent(DirectUI::Element *,INAVDIR);
	virtual DirectUI::Element * SetFocusToItem(DirectUI::Element *,int,int);
	virtual DirectUI::IClassInfo * GetClassInfoW();
	virtual IVirtualUIGroupItem * GetVirtualUIGroupItem();
	virtual IVirtualizedUI * GetParentVirtualizedUI();
	virtual IVirtualizedUI * GetVirtualizedUI();
	virtual SIZEV GetSectionDesiredSize(SectionInfo const &,SectionInfo const *);
	virtual UIBase * FindItem(unsigned int);
	virtual UIBase * GetElement();
	virtual int CanPageToSection(int);
	virtual int GetRowCount();
	virtual int GetScrollTickCount();
	virtual int GetSectionCount();
	virtual long GetInfoForIItem(INDEX_OF_MODE,IItem *,unsigned int *,SectionInfo *);
	virtual long GetInfoForTreeIndex(tagINDEX_AND_VERSION *,unsigned int,unsigned int *,SectionInfo *,IItem * *);
	virtual long RealizeSection(SectionInfo *);
	virtual void DestroyDirection(REALIZEDIRECTION,int);
	virtual void GetGutterLocation(int,int,VerticalHitTest *);
	virtual void GetInfoForElement(DirectUI::Element *,SectionInfo *);
	virtual void GetInfoForIVirtualizedUI(IVirtualizedUI *,SectionInfo *);
	virtual void GetInfoForRow(int,SectionInfo *);
	virtual void GetInfoForScrollTick(int,SectionInfo *);
	virtual void GetInfoForSection(int,SectionInfo const *,SectionInfo *);
	virtual void OnEvent(DirectUI::Event *);
	virtual void OnHosted(DirectUI::Element *);
	virtual void OnPropertyChanged(DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnUnHosted(DirectUI::Element *);
	virtual ~UICollection();
	void GetInfoForItem(unsigned int,SectionInfo *);
	void GetItemsInRange(VIRTUALRECT const &,VIRTUALRECT const &,CDSA<unsigned int> *,CDSA<unsigned int> *,CDSA<unsigned int> *);
	void InvalidateTryHarder(IListControlHost *);
	void ScrollAndSelectOnlyItem();
	void ScrollLayoutSectionIntoView(SectionInfo const &);
	void UpdateSubsetFooter(unsigned int);
};

class UIColumnHeader
{
protected:
	void _ShowDropDown(int);
public:
	DirectUI::Value * GetNameValue();
	bool GetEnableActivation();
	bool GetSortedBy();
	int GetColumnIndex();
	int GetMinWidth();
	int GetSortDirection();
	long CollapseColumnFilterMenu();
	long GetExpandCollapseState(ExpandCollapseState *);
	long SetEnableActivation(bool);
	long SetMinWidth(int);
	long SetSortDirection(int);
	long SetSortedBy(bool);
	static DirectUI::IClassInfo * Class;
	static DirectUI::PropertyInfo const * ColumnIndexProp();
	static DirectUI::PropertyInfo const * EnableActivationProp();
	static DirectUI::PropertyInfo const * MaxWidthProp();
	static DirectUI::PropertyInfo const * MinWidthProp();
	static DirectUI::PropertyInfo const * SortDirectionProp();
	static DirectUI::PropertyInfo const * SortedByProp();
	static long Register();
	unsigned int GetNonClippedHeaderWidth(HDC__ *);
	virtual DirectUI::IClassInfo * GetClassInfoW();
	virtual long DefaultAction();
	virtual long GetElementProviderImpl(DirectUI::InvokeHelper *,DirectUI::ElementProvider * *);
	virtual void OnEvent(DirectUI::Event *);
	virtual void OnHosted(DirectUI::Element *);
	virtual void OnInput(DirectUI::InputEvent *);
	virtual void OnPropertyChanged(DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	void DoColumnContextMenu(tagPOINT const *);
	void DoColumnFilterMenu(tagPOINT const *);
	void HideCheckbox();
	void SetFiltered(int);
	void ShowCheckbox();
};

struct UIColumnHeaderCheckbox
{
	static DirectUI::IClassInfo * Class;
	static long Register();
	virtual DirectUI::IClassInfo * GetClassInfoW();
	virtual void OnInput(DirectUI::InputEvent *);
	void SelectionChanged();
};

struct UIColumnHeaderExpandCollapseProvider
{
	UIColumnHeaderExpandCollapseProvider();
	virtual long Collapse();
	virtual long Expand();
	virtual long get_ExpandCollapseState(ExpandCollapseState *);
};

struct UIColumnHeaderExpandCollapseProxy
{
	virtual long DoMethod(int,char *);
};

class UIColumnHeaderProxy
{
	virtual long _GetProperty(tagVARIANT *,int);
};

class UICount
{
	long _GetEventActionCB(IUnknown *,int,CollectionEventParams *,tagEVENTACTION *);
	long _SetItemCollection(IItemCollection *);
	long _Update();
public:
	static DirectUI::IClassInfo * Class;
	static DirectUI::PropertyInfo const * ZeroTextProp();
	static long Register();
	virtual DirectUI::IClassInfo * GetClassInfoW();
	virtual void HandleUiaPropertyChangingListener(DirectUI::PropertyInfo const *);
	virtual void HandleUiaPropertyListener(DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnEvent(DirectUI::Event *);
	virtual void OnUnHosted(DirectUI::Element *);
};

class UIDetailsPropertyCollection
{
	UIViewHeader * GetUIHeader();
	long _CreateUIProperty(ColumnInfo const *,unsigned short const *,DirectUI::Element * *);
	long _CreateUIProperty(_tagpropertykey const &,unsigned short const *,DirectUI::Element * *);
	long _Update(IItem *);
	virtual tagSIZE _SelfLayoutUpdateDesiredSize(int,int,DirectUI::Surface *);
	virtual void OnEvent(DirectUI::Event *);
	virtual void _SelfLayoutDoLayout(int,int);
	void _ComputeAndReportDesiredWidth(ColumnWidthRequestEvent *);
	void _OnItemNavigate(ItemNavigateEvent *);
public:
	static DirectUI::IClassInfo * Class;
	static long Register();
	virtual DirectUI::IClassInfo * GetClassInfoW();
};

struct UIExpandoButton
{
	static DirectUI::IClassInfo * Class;
	static long Register();
	virtual DirectUI::IClassInfo * GetClassInfoW();
};

class UIGroupHeader
{
	void _UpdateFontSize();
public:
	long SetShowSelectedHeader(bool);
	static DirectUI::IClassInfo * Class;
	static DirectUI::PropertyInfo const * ShowSelectedHeaderProp();
	static long Register();
	virtual DirectUI::IClassInfo * GetClassInfoW();
	virtual long GetElementProviderImpl(DirectUI::InvokeHelper *,DirectUI::ElementProvider * *);
	virtual void OnHosted(DirectUI::Element *);
	virtual void OnInput(DirectUI::InputEvent *);
	virtual void OnPropertyChanged(DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
};

struct UIGroupHeaderExpandCollapseProvider
{
	UIGroupHeaderExpandCollapseProvider();
	virtual long Collapse();
	virtual long Expand();
	virtual long get_ExpandCollapseState(ExpandCollapseState *);
};

struct UIGroupHeaderExpandCollapseProxy
{
	virtual long DoMethod(int,char *);
};

class UIGroupHeaderProxy
{
	virtual long _GetProperty(tagVARIANT *,int);
};

class UIGroupItem
{
protected:
	CATEGORYINFO_FLAGS _GetCatInfoFlagsFromItem(IItem *);
	IVirtualizedUI * _GetChildVirtualizedUI();
	SECTIONTYPE _GetSectionType(int);
	int _IsGroupedListMode();
	int _IsHeaderFloating();
	int _IsHeaderRow(int);
	long _UpdateCollection(DirectUI::Element *);
	virtual DirectUI::Element * _GetUICollectionHost();
	virtual long _Update(UPDATEUIITEMTYPE);
	virtual void _UpdateAccessibleProps();
	void _FireExpandoStateChangeEvent();
	void _GetInfoForSection(SECTIONTYPE,SectionInfo *);
	void _OnItemNavigate(ItemNavigateEvent *);
	void _UpdateChildren(DirectUI::Element *,DirectUI::Value *);
	void _UpdateHeaderVisuals(DirectUI::Element *,tagEXPANDOSTATE);
public:
	DirectUI::Element * GetUIItemsHost();
	UICollection * GetGroupCollection();
	VIRTUALDIRECTION GetVirtualDirection();
	int GetHeaderRowCount();
	int GetHeaderTickCount();
	int IsGroupExpanded();
	long SetExpandoState(tagEXPANDOSTATE);
	static DirectUI::IClassInfo * Class;
	static DirectUI::PropertyInfo const * ExpandoStateProp();
	static DirectUI::PropertyInfo const * VirtualDirectionProp();
	static UID DeferExpandGroup;
	static UID ExpandoStateChange;
	static long Register();
	static long s_CreateModel(unsigned short const *,VIRTUALDIRECTION,UIGroupItem * *);
	static void s_SaveExpandoState(IViewSettings *,IItem *,tagEXPANDOSTATE);
	tagEXPANDOSTATE GetDefaultExpandoState();
	tagEXPANDOSTATE GetDesiredExpandoStateFromItem(IItem *);
	tagEXPANDOSTATE GetExpandoState();
	virtual DirectUI::Element * GetFocusIndicator(int);
	virtual DirectUI::Element * ItemGetAdjacent(DirectUI::Element *,INAVDIR);
	virtual DirectUI::Element * SetFocusToItem(DirectUI::Element *,int,int);
	virtual DirectUI::IClassInfo * GetClassInfoW();
	virtual IVirtualUIGroupItem * GetVirtualUIGroupItem();
	virtual IVirtualizedUI * GetParentVirtualizedUI();
	virtual IVirtualizedUI * GetVirtualizedUI();
	virtual SIZEV GetSectionDesiredSize(SectionInfo const &,SectionInfo const *);
	virtual UIBase * FindItem(unsigned int);
	virtual UIBase * GetElement();
	virtual bool OnPropertyChanging(DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual int CanPageToSection(int);
	virtual int GetRowCount();
	virtual int GetScrollTickCount();
	virtual int GetSectionCount();
	virtual int ShouldKeepAlive();
	virtual long DefaultAction();
	virtual long GetInfoForIItem(INDEX_OF_MODE,IItem *,unsigned int *,SectionInfo *);
	virtual long GetInfoForTreeIndex(tagINDEX_AND_VERSION *,unsigned int,unsigned int *,SectionInfo *,IItem * *);
	virtual long Insert(DirectUI::Element * *,unsigned int,unsigned int);
	virtual long RealizeSection(SectionInfo *);
	virtual long SetItem(IItem *);
	virtual void DestroyDirection(REALIZEDIRECTION,int);
	virtual void GetGutterLocation(int,int,VerticalHitTest *);
	virtual void GetInfoForElement(DirectUI::Element *,SectionInfo *);
	virtual void GetInfoForIVirtualizedUI(IVirtualizedUI *,SectionInfo *);
	virtual void GetInfoForRow(int,SectionInfo *);
	virtual void GetInfoForScrollTick(int,SectionInfo *);
	virtual void GetInfoForSection(int,SectionInfo const *,SectionInfo *);
	virtual void KeepAliveRelease();
	virtual void OnEvent(DirectUI::Event *);
	virtual void OnPropertyChanged(DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	void DoGroupZoom();
	void SetAndSaveExpandoState(tagEXPANDOSTATE);
	void SynchronizeWithIVirtualUIGroupItem();
	void ToggleExpansion();
};

struct UIGroupItemExpandCollapseProvider
{
	UIGroupItemExpandCollapseProvider();
	virtual long Collapse();
	virtual long Expand();
	virtual long get_ExpandCollapseState(ExpandCollapseState *);
};

struct UIGroupItemExpandCollapseProxy
{
	virtual long DoMethod(int,char *);
};

class UIImage
{
	int _IsClickInWhiteSpace(tagPOINT);
	void _GetFormattedLocalContentRect(tagRECT const &,tagRECT *);
	void _UpdateImageSize(UPDATEIMAGESIZEFLAGS);
public:
	bool GetUseImageHeight();
	static DirectUI::IClassInfo * Class;
	static DirectUI::PropertyInfo const * UseImageHeightProp();
	static long Register();
	virtual DirectUI::IClassInfo * GetClassInfoW();
	virtual void HandleUiaPropertyChangingListener(DirectUI::PropertyInfo const *);
	virtual void HandleUiaPropertyListener(DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnEvent(DirectUI::Event *);
	virtual void OnPropertyChanged(DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void Paint(HDC__ *,tagRECT const *,tagRECT const *,tagRECT *,tagRECT *);
};

class UIItem
{
protected:
	virtual long _Update(UPDATEUIITEMTYPE);
	virtual void _UpdateAccessibleProps();
	virtual void v_UpdateSelectedProperty();
	void _OnItemNavigate(ItemNavigateEvent *);
	void _UpdateVisualsForWindowsClassic();
public:
	bool GetModel();
	long GetEventActionCB(IUnknown *,int,ItemEventParams *,tagEVENTACTION *);
	long OnItemEventCB(IUnknown *,ItemEventParams *);
	long SetCompressed(bool);
	long SetEncrypted(bool);
	long SetModel(bool);
	long SetShowFocusRect(bool);
	static DirectUI::IClassInfo * Class;
	static DirectUI::PropertyInfo const * CompressedProp();
	static DirectUI::PropertyInfo const * EncryptedProp();
	static DirectUI::PropertyInfo const * ModelProp();
	static DirectUI::PropertyInfo const * ShowFocusRectProp();
	static DirectUI::PropertyInfo const * TabletModeProp();
	static DirectUI::PropertyInfo const * UICollectionCreationPropMapProp();
	static DirectUI::PropertyInfo const * UnderlineModeProp();
	static UID GetSubItemIndex;
	static UID UpdateUIItem;
	static long Register();
	virtual DirectUI::Element * GetFocusIndicator(int);
	virtual DirectUI::IClassInfo * GetClassInfoW();
	virtual int GetBaselineOffset();
	virtual int GetDesiredBaselineOffset();
	virtual int GetDesiredFooterOverhang();
	virtual int GetIndexForSubItem(DirectUI::Element *);
	virtual long DefaultAction();
	virtual long GetCollection(IItemCollection * *);
	virtual long GetElementProviderImpl(DirectUI::InvokeHelper *,DirectUI::ElementProvider * *);
	virtual long GetItem(IItem * *);
	virtual long SetItem(IItem *);
	virtual void HandleUiaPropertyChangingListener(DirectUI::PropertyInfo const *);
	virtual void HandleUiaPropertyListener(DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnEvent(DirectUI::Event *);
	virtual void OnHosted(DirectUI::Element *);
	virtual void OnPropertyChanged(DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnUnHosted(DirectUI::Element *);
	virtual void SetBaselineOffset(int);
	virtual void SetDesiredFooterOverhang(int);
	void Update(ITEM_CHANGED_TYPE);
};

class UIItemCollectionBase
{
protected:
	long _CreateUICollection(IItemCollection *,UICollection * *);
	long _GetUICollectionResId(IItemCollection *,unsigned short * *);
	long _GetUICollectionResIdFromCreationMap(unsigned short const *,IItemCollection *,unsigned short * *);
	static unsigned short const * s_GetInheritedUICollectionCreationPropMapFromUIItem(UIItem *,DirectUI::Value * *);
	virtual DirectUI::Element * _GetUICollectionHost();
	virtual void _OnChildChanged(UICollection *,tagCOLLECTION_CHANGE_STATE,ITEM_CHANGED_TYPE);
public:
	UIItemCollectionBase();
	virtual long GetCollection(IItemCollection * *);
	virtual void OnEvent(DirectUI::Event *);
	virtual ~UIItemCollectionBase();
};

struct UIItemGridItemProvider
{
	UIItemGridItemProvider();
	virtual long get_Column(int *);
	virtual long get_ColumnSpan(int *);
	virtual long get_ContainingGrid(IRawElementProviderSimple * *);
	virtual long get_Row(int *);
	virtual long get_RowSpan(int *);
};

class UIItemGridItemProxy
{
	long _GetItemLocation(int *,int *);
public:
	virtual long DoMethod(int,char *);
};

struct UIItemProvider
{
	virtual long GetElement(DirectUI::Element * *);
	virtual long GetIndices(tagINDEX_AND_VERSION *,unsigned int,unsigned int *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class UIItemProxy
{
	long _GetCollectionCount(IItemCollection *,ICollectionCache *,unsigned int *);
	long _GetItemIndex(unsigned int *);
	long _GetViewItemCount(unsigned int *);
	virtual long _GetProperty(tagVARIANT *,int);
};

struct UIItemScrollItemProvider
{
	UIItemScrollItemProvider();
	virtual long ScrollIntoView();
};

struct UIItemScrollItemProxy
{
	virtual long DoMethod(int,char *);
};

struct UIItemSelectionItemProvider
{
	UIItemSelectionItemProvider();
	virtual long AddToSelection();
	virtual long RemoveFromSelection();
	virtual long Select();
	virtual long get_IsSelected(int *);
	virtual long get_SelectionContainer(IRawElementProviderSimple * *);
};

class UIItemSelectionItemProxy
{
protected:
	long SetSelection(UIItemsView *,UIItem *,__MIDL___MIDL_itf_itemsview_0000_0004_0001);
public:
	virtual long DoMethod(int,char *);
};

struct UIItemToggleProvider
{
	UIItemToggleProvider();
	virtual long Toggle();
	virtual long get_ToggleState(ToggleState *);
};

struct UIItemToggleProxy
{
	virtual long DoMethod(int,char *);
};

struct UIItemValueProvider
{
	UIItemValueProvider();
	virtual long SetValue(unsigned short const *);
	virtual long get_IsReadOnly(int *);
	virtual long get_Value(unsigned short * *);
};

struct UIItemValueProxy
{
	virtual long DoMethod(int,char *);
};

class UIItemsView
{
	FOLDERVIEWMODE _CalculateViewMode();
	UIItemsView::FOCUSPOSITION _GetFocusPosition(UIItemsView::TABDIRECTION,int,DirectUI::Element *);
	UIItemsView::FOCUSPOSITION _GetNextFocusPosition(UIItemsView::FOCUSPOSITION,UIItemsView::TABDIRECTION);
	__int64 _OnGesture(tagGESTUREINFO *,int *);
	__int64 _OnGestureNotify(tagGESTURENOTIFYSTRUCT *,int *);
	long _CreateFirstPageResults();
	long _EnsureBatching();
	long _EnsureFocusManager();
	long _EnsureGhostingManager();
	long _EnsureInplaceRename();
	long _EnsureItemActionsManager();
	long _EnsureQueryParser();
	long _EnsureSelectionManager();
	long _EnsureTypeAhead();
	long _EstablishSinks(IItemCollection *,UIItemsView::EstablishSinksOptions);
	long _GetFolderCondition(ICondition2 * *);
	long _OnCollectionEventCB(IUnknown *,CollectionEventParams *);
	long _ResetDUITree(UIItemsView::RESET_DUI_TREE_FLAGS);
	long _ResetRoot(IItem *,IItemCollection *);
	static void s_BatchTimerCallback(GMA_ACTIONINFO *);
	static void s_BlockRedrawTimeoutProc(GMA_ACTIONINFO *);
	static void s_FadeHitTimerCallback(GMA_ACTIONINFO *);
	static void s_GroupHeaderClickCallback(GMA_ACTIONINFO *);
	static void s_PrefetchTimerCallback(GMA_ACTIONINFO *);
	void * _Marshal(unsigned long);
	void _CancelFadeHitTimer();
	void _CancelPrefetch();
	void _ClearGroupHeaderClickAction();
	void _CreateFadeHitTimer();
	void _DestroyPerLocationObjects();
	void _DestroyPerShapeObjects();
	void _EnableAnimations();
	void _FireVisibleColumnsChangedEvent();
	void _FlushDeferContentsChanged();
	void _GetGroupByProperty(_tagpropertykey *);
	void _OnBatchTimer(GMA_ACTIONINFO *);
	void _OnStartPrefetch();
	void _PostUpdateFocus();
	void _RefreshView();
	void _ResetAnimations();
	void _ResetHighlightConditions();
	void _SchedulePrefetch(float);
public:
	HDC__ * GetHDC();
	ItemLayout * GetRootUIItemsHost();
	LineHScrollBar * GetLineHScrollBar();
	LineScroller * GetLineScroller();
	LineVScrollBar * GetLineVScrollBar();
	LineViewer * GetLineViewer();
	UICollection * GetRootUICollection();
	UIItemsView();
	UIItemsView::FOCUS_REGION GetCurrentFocusRegion();
	UIViewHeader * QueryUIHeader();
	__int64 _UIItemsViewSubclassProc(HWND__ *,unsigned int,unsigned __int64,__int64,unsigned __int64);
	bool IsInSelectMode();
	bool IsInstantNavigate(IItem *);
	int CanScroll(tagPOINT const *);
	int HideFileNames();
	int IsDraggableItem(DirectUI::Element *);
	int IsInRenameMode();
	long AdviseCollection(IItemCollection *,ADVISE_TYPE);
	long AutoSizeColumn(_tagpropertykey const &);
	long BeginRename();
	long EnsureVisible(IItem *);
	long EnumUIItems(long (*)(UIItem *,void *),void *);
	long GetCollectionCache(ICollectionCache * *);
	long GetFirstPageResults(IFirstPageResults * *);
	long GetFocusManager(_GUID const &,void * *);
	long GetGhostingManager(_GUID const &,void * *);
	long GetInputHandler(InputHandlersType,_GUID const &,void * *);
	long GetItemFromPoint(tagPOINT const *,IItem * *);
	long GetItemIndexFromPoint(tagPOINT const *,int *);
	long GetListControlHost(IListControlHost * *);
	long GetRootCollection(IItemCollection * *);
	long GetRootItem(IItem * *);
	long GetSite(IUnknown * *);
	long GetViewSettings(IViewSettings * *);
	long HandleTab(int);
	long Initialize(HWND__ *,bool,unsigned int,DirectUI::Element *,IUnknown *,unsigned long *);
	long RequiresGetCountTask();
	long RestoreListFocus();
	long ShowContextMenu(tagPOINT const *);
	long TranslateAcceleratorIO(tagMSG *);
	static DirectUI::IClassInfo * Class;
	static UID CheckWhitespace;
	static UID CheckboxesChanged;
	static UID EnteredSelectMode;
	static UID ExitedSelectMode;
	static UID HitFadeChange;
	static UID ImageSizeChanged;
	static UID InvalidateEmptyText;
	static UID SelectionChanged;
	static UID SortColumnsChanged;
	static UID VisibleColumnsChanged;
	static UID VisualChange;
	static __int64 s_UIItemsViewSubclassProc(HWND__ *,unsigned int,unsigned __int64,__int64,unsigned __int64,unsigned __int64);
	static long Create(HWND__ *,IUnknown *,IListControlHost *,IViewSettings *,bool,unsigned int,unsigned long *,UIItemsView * *);
	static long Register();
	tagEVENTACTION GetCollectionAction(int);
	virtual DirectUI::IClassInfo * GetClassInfoW();
	virtual __int64 WndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	virtual bool IsMSAAEnabled();
	virtual int DontForwardKeyboardNavigate();
	virtual long GetElementProviderImpl(DirectUI::InvokeHelper *,DirectUI::ElementProvider * *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual void ActivateTooltip(DirectUI::Element *,unsigned long);
	virtual void OnDestroy();
	virtual void OnEvent(DirectUI::Event *);
	virtual void OnInput(DirectUI::InputEvent *);
	virtual void OnKeyFocusMoved(DirectUI::Element *,DirectUI::Element *);
	virtual void OnPropertyChanged(DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnThemeChanged(DirectUI::ThemeChangedEvent *);
	virtual void RemoveTooltip(DirectUI::Element *);
	virtual void UpdateTooltip(DirectUI::Element *);
	virtual ~UIItemsView();
	void BlockRedrawWithTimeout(float);
	void BroadcastViewSettingsChanged(unsigned long);
	void CollapseAllGroups();
	void DeferContentsChanged(ChangeIncludesSelection);
	void DoColumnContextMenuAsync(_tagpropertykey const &,tagPOINT const *,int);
	void ExpandAllGroups();
	void FireVisualChangeEvent(DirectUI::Element *,VISUALCHANGETYPE);
	void ItemActivateAsync(unsigned long);
	void LayoutDone();
	void LocateFocusedItem(IItem *);
	void NotifySpyClient();
	void OnInitialEnumerationDoneAsync();
	void OnItemsInserted();
	void OnScrollThumbTracking(int);
	void PostVisualChangeEvent(DirectUI::Element *,VISUALCHANGETYPE);
	void PreProcessEventQueue();
	void RefreshViewAsync();
	void ReloadUnderlineStyles();
	void ScrollLine(int,unsigned short);
	void SetOuterInterfaces(IUnknown *,IListControlHost *,IViewSettings *);
	void SyncDestroy();
	void UnblockRedraw();
};

struct UIItemsViewItemContainerProvider
{
	UIItemsViewItemContainerProvider();
	virtual long FindItemByProperty(IRawElementProviderSimple *,int,tagVARIANT,IRawElementProviderSimple * *);
};

class UIItemsViewItemContainerProxy
{
	long _CreateVirtualElementProvider(IItem *,tagINDEX_AND_VERSION *,unsigned int,IRawElementProviderSimple * *);
	long _FindItemByProperty(IRawElementProviderSimple *,int,tagVARIANT const &,IRawElementProviderSimple * *);
	long _RunItemFinder(CItemFinder *,int,tagVARIANT const &,IRawElementProviderSimple * *);
public:
	virtual long DoMethod(int,char *);
};

struct UIItemsViewMultipleViewProvider
{
	UIItemsViewMultipleViewProvider();
	virtual long GetSupportedViews(tagSAFEARRAY * *);
	virtual long GetViewName(int,unsigned short * *);
	virtual long SetCurrentView(int);
	virtual long get_CurrentView(int *);
};

class UIItemsViewMultipleViewProxy
{
	static UIItemsViewMultipleViewProxy::ViewMap const * const s_rgViewMap;
public:
	virtual long DoMethod(int,char *);
};

class UIItemsViewProxy
{
	long _GetItemCount(int *,int *);
	virtual long _GetProperty(tagVARIANT *,int);
};

struct UIItemsViewScrollProvider
{
	UIItemsViewScrollProvider();
	virtual long Scroll(ScrollAmount,ScrollAmount);
	virtual long SetScrollPercent(double,double);
	virtual long get_HorizontalScrollPercent(double *);
	virtual long get_HorizontalViewSize(double *);
	virtual long get_HorizontallyScrollable(int *);
	virtual long get_VerticalScrollPercent(double *);
	virtual long get_VerticalViewSize(double *);
	virtual long get_VerticallyScrollable(int *);
};

class UIItemsViewScrollProxy
{
	long _GetScrollPercent(int,double *);
	long _GetScrollable(int,int *);
	long _GetViewSize(int,double *);
	long _Scroll(int,ScrollAmount);
	long _ScrollPercent(int,double);
public:
	virtual long DoMethod(int,char *);
};

struct UIItemsViewSelectionProvider
{
	UIItemsViewSelectionProvider();
	virtual long GetSelection(tagSAFEARRAY * *);
	virtual long get_CanSelectMultiple(int *);
	virtual long get_IsSelectionRequired(int *);
};

struct UIItemsViewSelectionProxy
{
	class CSelectionWalkCB
	{
		virtual long v_FoundUIItem(UIItem *);
	};

	virtual long DoMethod(int,char *);
};

struct UIItemsViewTableProvider
{
	UIItemsViewTableProvider();
	virtual long GetColumnHeaders(tagSAFEARRAY * *);
	virtual long GetRowHeaders(tagSAFEARRAY * *);
	virtual long get_RowOrColumnMajor(RowOrColumnMajor *);
};

struct UIItemsViewTableProxy
{
	virtual long DoMethod(int,char *);
};

class UIMarqueeSelector
{
	UICollection * _GetTopCollection();
	int _CompareWithAnchor(IItem *);
	long _GetVirtualPoint(POINTV const &,VIRTUALPOINT *);
	static void s_ScrollCallback(GMA_ACTIONINFO *);
	virtual ~UIMarqueeSelector();
	void _GetGutterLocation(IVirtualizedUI *,int,int,VerticalHitTest *);
	void _GetIItemsInMarquee(UICollection *,VIRTUALRECT const &,VIRTUALRECT const &,int *,int *,CDPA<IItem,CTContainer_PolicyUnOwned<IItem> > *,CDPA<IItem,CTContainer_PolicyUnOwned<IItem> > *);
	void _MapRowRectToChildCollection(SectionInfo const &,VIRTUALRECT *,int,int);
	void _PerformItemCompare(VIRTUALRECT const &,VIRTUALRECT const &,unsigned int);
	void _ScrollCallback();
	void _SetNewEndpoint(tagPOINT const &,unsigned int);
	void _SetScrollTimers(int,int,DirectUI::Element *);
	void _SetVisualLoc(VIRTUALPOINT const &,POINTV const &,VIRTUALPOINT const &);
public:
	UIMarqueeSelector();
	static DirectUI::IClassInfo * Class;
	static UID ScrollUpdateEvent;
	static long Register();
	virtual DirectUI::IClassInfo * GetClassInfoW();
	virtual void OnEvent(DirectUI::Event *);
	virtual void OnHosted(DirectUI::Element *);
	virtual void OnListenedEvent(DirectUI::Element *,DirectUI::Event *);
	virtual void OnListenerDetach(DirectUI::Element *);
	void EndMarquee();
	void OnMouseMoved(DirectUI::MouseDragEvent *);
	void StartMarquee(tagPOINT,DirectUI::Element *,INITIALSELECTION,CLICKBUTTON,__MIDL___MIDL_itf_itemsview_0000_0004_0001,UIItem *);
};

class UIProgressProperty
{
protected:
	virtual int _UsePropertyControl(IPropertyDescription *);
	virtual long v_UpdateFromItem(IItem *);
public:
	bool GetHideWhenZero();
	static DirectUI::IClassInfo * Class;
	static DirectUI::PropertyInfo const * HideWhenZeroProp();
	static long Create(DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	static long Register();
	virtual DirectUI::IClassInfo * GetClassInfoW();
	virtual int HasVisibleContent();
};

class UIProperty
{
protected:
	int _GetTextLineHeight(int,HDC__ *);
	int _UpdateTextService(unsigned short const *);
	int _UseHitHighlighting(IPropertyDescription *);
	long IsStorageProviderUIStatus(bool *);
	long _EnsurePropertyConfiguration();
	long _PrepareTextForRichEdit(unsigned short const *,tagRECT const *);
	long _SetupHitHighlighting(UIItemsView *);
	long _SetupPropertyControl(UIItemsView *);
	long _UpdatePropertyControlValue(tagPROPVARIANT const &);
	static HINSTANCE__ * s_hRichEditDll;
	tagSIZE _GetRichEditContentSize(int,int);
	virtual int _IsClickInWhiteSpace(tagPOINT,HDC__ *);
	virtual int _UsePropertyControl(IPropertyDescription *);
	virtual long v_UpdateFromItem(IItem *);
	virtual void OnDPIChanged();
	virtual ~UIProperty();
	void _AdjustHighlightPadding(ITextRange *,tagRECT *,HighlightPaddingFlags);
	void _CollectHitRectFromHitRange(tagHITRANGE,tagRECT const *,CCoSimpleArray<tagRECT,4294967294,CSimpleArrayStandardCompareHelper<tagRECT> > &);
	void _CollectHitRectFromTextRange(ITextRange *,tagRECT const *,HighlightPaddingFlags,CCoSimpleArray<tagRECT,4294967294,CSimpleArrayStandardCompareHelper<tagRECT> > &,HITCHARTYPE);
	void _CreateHitElementsFromRects(CCoSimpleArray<tagRECT,4294967294,CSimpleArrayStandardCompareHelper<tagRECT> > &);
	void _GetSharedDrawControl(IDrawPropertyControl * *);
	void _SetRichEditText(UIProperty::TextType);
	void _UpdateHitHighlightingFont();
	void _UpdatePARAFORMAT();
public:
	UIProperty();
	bool GetEnableHitHighlighting();
	int GetColumn();
	int GetColumnSpanCount();
	int GetLineHeight(DirectUI::Surface *);
	int GetMaxNumTextLines();
	int GetMaxPixelWidth();
	int GetRow();
	int GetRowSpanCount();
	int IsContentTruncated(HDC__ *,tagRECT const &);
	long SetCompressed(bool);
	long SetEnableHitHighlighting(bool);
	long SetEncrypted(bool);
	long SetPropertyCanonicalName(unsigned short const *);
	long SetPropertyKey(_tagpropertykey const &);
	long SetUseGroupZoom(bool);
	static DirectUI::IClassInfo * Class;
	static DirectUI::PropertyInfo const * ColumnProp();
	static DirectUI::PropertyInfo const * ColumnSpanCountProp();
	static DirectUI::PropertyInfo const * CompressedProp();
	static DirectUI::PropertyInfo const * EnableHitHighlightingProp();
	static DirectUI::PropertyInfo const * EncryptedProp();
	static DirectUI::PropertyInfo const * IconDisplayLimitProp();
	static DirectUI::PropertyInfo const * IconSizeProp();
	static DirectUI::PropertyInfo const * IsUnderSyncRootProp();
	static DirectUI::PropertyInfo const * MaxNumTextLinesProp();
	static DirectUI::PropertyInfo const * MaxPixelWidthProp();
	static DirectUI::PropertyInfo const * PropertyCanonicalNameProp();
	static DirectUI::PropertyInfo const * RowProp();
	static DirectUI::PropertyInfo const * RowSpanCountProp();
	static DirectUI::PropertyInfo const * UseGroupZoomProp();
	static DirectUI::PropertyInfo const * UseRootScopeProp();
	static DirectUI::PropertyInfo const * ValueChangeCountProp();
	static DirectUI::PropertyInfo const * WidthPatternProp();
	static long Register();
	tagSIZE GetNonClippedContentSize(HDC__ *,int,int);
	unsigned short const * GetPropertyCanonicalName(DirectUI::Value * *);
	virtual DirectUI::IClassInfo * GetClassInfoW();
	virtual HDC__ * TxGetDC();
	virtual HIMC__ * TxImmGetContext();
	virtual bool IsRTLReading();
	virtual int HasVisibleContent();
	virtual int TxClientToScreen(tagPOINT *);
	virtual int TxCreateCaret(HBITMAP__ *,int,int);
	virtual int TxEnableScrollBar(int,int);
	virtual int TxReleaseDC(HDC__ *);
	virtual int TxScreenToClient(tagPOINT *);
	virtual int TxSetCaretPos(int,int);
	virtual int TxSetScrollPos(int,int,int);
	virtual int TxSetScrollRange(int,long,int,int);
	virtual int TxSetTimer(unsigned int,unsigned int);
	virtual int TxShowCaret(int);
	virtual int TxShowScrollBar(int,int);
	virtual long DefaultAction();
	virtual long GetElementProviderImpl(DirectUI::InvokeHelper *,DirectUI::ElementProvider * *);
	virtual long OnTxCharFormatChange(_charformatw const *);
	virtual long OnTxParaFormatChange(_paraformat const *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long TxActivate(long *);
	virtual long TxDeactivate(long);
	virtual long TxGetAcceleratorPos(long *);
	virtual long TxGetBackStyle(TXTBACKSTYLE *);
	virtual long TxGetCharFormat(_charformatw const * *);
	virtual long TxGetClientRect(tagRECT *);
	virtual long TxGetExtent(tagSIZE *);
	virtual long TxGetMaxLength(unsigned long *);
	virtual long TxGetParaFormat(_paraformat const * *);
	virtual long TxGetPasswordChar(unsigned short *);
	virtual long TxGetPropertyBits(unsigned long,unsigned long *);
	virtual long TxGetScrollBars(unsigned long *);
	virtual long TxGetSelectionBarWidth(long *);
	virtual long TxGetViewInset(tagRECT *);
	virtual long TxNotify(unsigned long,void *);
	virtual tagSIZE GetContentSize(int,int,DirectUI::Surface *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual unsigned long TxGetSysColor(int);
	virtual void HandleUiaPropertyChangingListener(DirectUI::PropertyInfo const *);
	virtual void HandleUiaPropertyListener(DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnEvent(DirectUI::Event *);
	virtual void OnHosted(DirectUI::Element *);
	virtual void OnInput(DirectUI::InputEvent *);
	virtual void OnPropertyChanged(DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void Paint(HDC__ *,tagRECT const *,tagRECT const *,tagRECT *,tagRECT *);
	virtual void TxImmReleaseContext(HIMC__ *);
	virtual void TxInvalidateRect(tagRECT const *,int);
	virtual void TxKillTimer(unsigned int);
	virtual void TxScrollWindowEx(int,int,tagRECT const *,tagRECT const *,HRGN__ *,tagRECT *,unsigned int);
	virtual void TxSetCapture(int);
	virtual void TxSetCursor(HICON__ *,int);
	virtual void TxSetFocus();
	virtual void TxViewChange(int);
};

struct UIPropertyGridItemProvider
{
	UIPropertyGridItemProvider();
	virtual long get_Column(int *);
	virtual long get_ColumnSpan(int *);
	virtual long get_ContainingGrid(IRawElementProviderSimple * *);
	virtual long get_Row(int *);
	virtual long get_RowSpan(int *);
};

class UIPropertyGridItemProxy
{
	long _GetPropertyLocation(int *,int *);
public:
	virtual long DoMethod(int,char *);
};

class UIPropertyProxy
{
	virtual long _GetProperty(tagVARIANT *,int);
};

struct UIPropertyTableItemProvider
{
	UIPropertyTableItemProvider();
	virtual long GetColumnHeaderItems(tagSAFEARRAY * *);
	virtual long GetRowHeaderItems(tagSAFEARRAY * *);
};

struct UIPropertyTableItemProxy
{
	virtual long DoMethod(int,char *);
};

struct UIPropertyValueProvider
{
	UIPropertyValueProvider();
	virtual long SetValue(unsigned short const *);
	virtual long get_IsReadOnly(int *);
	virtual long get_Value(unsigned short * *);
};

class UIPropertyValueProxy
{
	int _IsReadOnly();
public:
	virtual long DoMethod(int,char *);
};

class UIRenameTextElement
{
protected:
	virtual HWND__ * CreateHWND(HWND__ *);
public:
	long Initialize(DirectUI::Element *,unsigned long *);
	static DirectUI::IClassInfo * Class;
	static long Register();
	virtual DirectUI::IClassInfo * GetClassInfoW();
	void AdjustEditControlPosition(int,int,int,HFONT__ *);
};

class UIRootItem
{
protected:
	virtual long _Update(UPDATEUIITEMTYPE);
	virtual void _UpdateAccessibleProps();
	virtual void v_UpdateSelectedProperty();
public:
	int GetColumnPadding();
	static DirectUI::IClassInfo * Class;
	static DirectUI::PropertyInfo const * ColumnPaddingProp();
	static long Register();
	virtual DirectUI::IClassInfo * GetClassInfoW();
	virtual int GetIndexForSubItem(DirectUI::Element *);
};

class UISmartProperty
{
protected:
	virtual int _IsClickInWhiteSpace(tagPOINT,HDC__ *);
	virtual long v_UpdateFromItem(IItem *);
	virtual void OnDPIChanged();
	void _UpdateFontSize();
public:
	bool GetIncreaseFontSize();
	bool GetShowLabel();
	int GetVisibleWidth();
	long SetPropertyIndex(int);
	static DirectUI::IClassInfo * Class;
	static DirectUI::PropertyInfo const * IncreaseFontSizeProp();
	static DirectUI::PropertyInfo const * MinVisibleWidthProp();
	static DirectUI::PropertyInfo const * PropertyIndexProp();
	static DirectUI::PropertyInfo const * ShowLabelProp();
	static long Register();
	virtual DirectUI::IClassInfo * GetClassInfoW();
	virtual int HasVisibleContent();
	virtual void OnEvent(DirectUI::Event *);
	virtual void OnHosted(DirectUI::Element *);
	virtual void OnPropertyChanged(DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
};

class UISmartPropertyCollection
{
	long AddTransferProgressControl();
	long _CreateUIProperty(IPropertyDescription *,int,DirectUI::Element * *);
	long _GetColumnsInfo(int,CDSA<UISmartPropertyCollection::SmartColumnInfo> &);
	long _GetWidthPatternForSize(int,unsigned short const *,unsigned short * *,int *,int *);
	long _Update(IItem *);
	virtual tagSIZE _SelfLayoutUpdateDesiredSize(int,int,DirectUI::Surface *);
	virtual void _SelfLayoutDoLayout(int,int);
	void _FillChildGrid(DirectUI::DynamicArray<DirectUI::Element *,0> *,CDSA<UISmartPropertyCollection::SmartColumnInfo> &,int *,int,int);
	void _UpdatePatternOnWidth(int);
	void _UpdateUIProperties();
public:
	int GetColumnCount();
	int GetRowCount();
	long SetPropWidthPattern(unsigned short const *);
	static DirectUI::IClassInfo * Class;
	static DirectUI::PropertyInfo const * ColumnCountProp();
	static DirectUI::PropertyInfo const * ColumnsMaxProp();
	static DirectUI::PropertyInfo const * ColumnsPercentProp();
	static DirectUI::PropertyInfo const * MaxWidthProp();
	static DirectUI::PropertyInfo const * PropWidthPatternProp();
	static DirectUI::PropertyInfo const * RowCountProp();
	static DirectUI::PropertyInfo const * WidthPatternMapProp();
	static long Register();
	unsigned short const * GetColumnsMax(DirectUI::Value * *);
	unsigned short const * GetColumnsPercent(DirectUI::Value * *);
	virtual DirectUI::IClassInfo * GetClassInfoW();
	virtual void OnEvent(DirectUI::Event *);
};

struct UISubsetFooter
{
	static DirectUI::IClassInfo * Class;
	static long Register();
	virtual DirectUI::IClassInfo * GetClassInfoW();
	virtual long DefaultAction();
	virtual void OnInput(DirectUI::InputEvent *);
};

class UITilesPropertyCollection
{
	void _UpdatePropertyLayoutPositions();
protected:
	long _CreateUIProperty(IPropertyDescription *,DirectUI::Element * *);
	long _Update(IItem *);
	virtual void OnEvent(DirectUI::Event *);
public:
	UITilesPropertyCollection();
	static DirectUI::IClassInfo * Class;
	static long Register();
	virtual DirectUI::IClassInfo * GetClassInfoW();
	virtual void OnListenedPropertyChanged(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
};

struct UITryHarder
{
	int GetScrollTicks();
	static DirectUI::IClassInfo * Class;
	static DirectUI::PropertyInfo const * ScrollTicksProp();
	static long Register();
	virtual DirectUI::IClassInfo * GetClassInfoW();
	void InvalidateTryHarder(IObjectArray *);
};

struct UITryHarderButton
{
	static DirectUI::IClassInfo * Class;
	static long Register();
	virtual DirectUI::IClassInfo * GetClassInfoW();
	virtual void OnEvent(DirectUI::Event *);
	virtual void OnInput(DirectUI::InputEvent *);
	void SetItem(ITryHarderItem *);
};

class UIViewHeader
{
protected:
	HBITMAP__ * _GetShellBitmapFromResourceIndex(int);
	UIColumnHeader * _GetColumnHeaderWithPropkey(_tagpropertykey const &);
	int _GetColumnIndex(UIColumnHeader *);
	int _ShouldInflateFirstColumn(int);
	int _ViewRequestsHeaders(IViewSettings *);
	long _AddColumn(unsigned int,_tagpropertykey const &,IViewSettings *,HDC__ *,int);
	long _AddResizer(UIColumnHeader *,Resizer * *);
	long _UpdateFromPropKeyStore(IPropertyKeyStore *,IViewSettings *);
	unsigned int _GetDragColumnIndex(long);
	virtual tagSIZE _SelfLayoutUpdateDesiredSize(int,int,DirectUI::Surface *);
	virtual void SetKeyFocus();
	virtual void _SelfLayoutDoLayout(int,int);
	void _AutoSizeColumn(UIColumnHeader *);
	void _BeginColumnHeaderDrag(UIColumnHeader *,DirectUI::MouseEvent const *);
	void _BroadcastColumnEvent(UID,unsigned int);
	void _EnableAnimations();
	void _EndColumnHeaderDrag(DirectUI::MouseEvent const *);
	void _MoveColumn(unsigned int,unsigned int);
	void _OnKeyboardEvent(DirectUI::KeyboardEvent *);
	void _OnKeyboardFocusMove(UIColumnHeader *,unsigned short);
	void _OnOverflowButtonClicked();
	void _RecalculateTotalWidth();
	void _ResizeColumnOnMove(unsigned int,unsigned int);
	void _SaveColumnOrder();
	void _SaveColumnWidth(UIColumnHeader *);
	void _SetColumnWidth(UIColumnHeader *,int);
	void _UpdateColumnHeaderLocations(UIColumnHeader *,DirectUI::MouseEvent const *);
	void _UpdateFromViewSettings();
	void _UpdateResizersPosition();
public:
	DirectUI::Value * GetColumnNameValue(unsigned int);
	UIColumnHeader * GetColumnHeader(unsigned int);
	bool GetResizable();
	long AreColumnHeadersVisible();
	long AutoSizeColumn(_tagpropertykey const &);
	long RestoreKeyFocus();
	static DirectUI::IClassInfo * Class;
	static DirectUI::PropertyInfo const * ResizableProp();
	static UID ColumnRefreshAll;
	static UID ColumnResize;
	static UID ColumnResizeDone;
	static UID ColumnWidthRequest;
	static long Register();
	virtual DirectUI::Element * GetAdjacent(DirectUI::Element *,int,DirectUI::NavReference const *,unsigned long);
	virtual DirectUI::IClassInfo * GetClassInfoW();
	virtual void OnEvent(DirectUI::Event *);
	virtual void OnHosted(DirectUI::Element *);
	virtual void OnInput(DirectUI::InputEvent *);
	virtual void OnKeyFocusMoved(DirectUI::Element *,DirectUI::Element *);
	virtual void OnListenedPropertyChanged(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnPropertyChanged(DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnUnHosted(DirectUI::Element *);
	void AutoSizeAllColumns();
	void SetKeyFocusedProperty(_tagpropertykey const &);
	void UpdateFilteredState();
};

struct ViewAreaAwareLayout
{
	virtual tagSIZE UpdateDesiredSize(DirectUI::Element *,int,int,DirectUI::Surface *);
	virtual void DoLayout(DirectUI::Element *,int,int);
};

class VirtualElementProvider
{
protected:
	long DoInvokePattern(int,DirectUI::ProviderProxy * (*)(DirectUI::Element *),...);
public:
	VirtualElementProvider();
	long Init(DirectUI::ElementProvider *,DirectUI::InvokeHelper *,tagINDEX_AND_VERSION const *,unsigned int,unsigned short const *);
	static long Create(DirectUI::ElementProvider *,DirectUI::InvokeHelper *,tagINDEX_AND_VERSION const *,unsigned int,unsigned short const *,DirectUI::ElementProvider * *);
	virtual DirectUI::Element const volatile * GetElement();
	virtual long GetElement(DirectUI::Element * *);
	virtual long GetEmbeddedFragmentRoots(tagSAFEARRAY * *);
	virtual long GetIndices(tagINDEX_AND_VERSION *,unsigned int,unsigned int *);
	virtual long GetPatternProvider(int,IUnknown * *);
	virtual long GetPropertyValue(int,tagVARIANT *);
	virtual long GetRuntimeId(tagSAFEARRAY * *);
	virtual long Navigate(NavigateDirection,IRawElementProviderFragment * *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Realize();
	virtual long SetFocus();
	virtual long get_BoundingRectangle(UiaRect *);
	virtual long get_FragmentRoot(IRawElementProviderFragmentRoot * *);
	virtual long get_HostRawElementProvider(IRawElementProviderSimple * *);
	virtual long get_ProviderOptions(ProviderOptions *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~VirtualElementProvider();
};

class VirtualizedItemProxy
{
	long ScrollItem(IItem *,IRawElementProviderSimple * *);
	long _FindRealizedItem(tagINDEX_AND_VERSION *,unsigned int,unsigned short const *,IItem * *);
public:
	virtual long DoMethod(int,char *);
};

struct WindowData
{
	unsigned long Release();
};

namespace Windows
{
	namespace Internal
	{
		class ComTaskPool
		{
			class CThread
			{
				long _CreateThreadRef(long *,IUnknown * *);
				long _WaitForThreadUpdate(unsigned long);
				static HINSTANCE__ * s_ExecuteThreadProc(void *);
				static unsigned long s_ThreadProc(void *);
				static void s_CheckForDeadlockTimerCallback(_TP_CALLBACK_INSTANCE *,void *,_TP_TIMER *);
				static void s_ThreadPoolCallback(_TP_CALLBACK_INSTANCE *,void *);
				void _DispatchMessage(tagMSG *);
				void _ThreadProc();
			public:
				CThread(TaskApartment,TaskOptions);
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
			static void s_ClearOrGetNextTask(ComTaskPool::CThread *);
		};

		class NativeString<CoTaskMemPolicy<unsigned short> >
		{
			long _EnsureCapacity(unsigned __int64);
			long _Initialize(unsigned short const *,unsigned __int64);
			void _EnsureCount();
			void _Free();
		public:
			long Concat(unsigned short const *);
			long InitializeFormat(unsigned short const *,...);
		};

		struct ResourceString
		{
			static bool FindAndSize(HINSTANCE__ *,unsigned int,unsigned short,unsigned short const * *,unsigned short *);
		};

	};

};

struct WrappingLayoutBase
{
	virtual DirectUI::Element * GetAdjacent(DirectUI::Element *,DirectUI::Element *,int,DirectUI::NavReference const *,unsigned long);
	virtual void Attach(DirectUI::Element *);
	virtual void Detach(DirectUI::Element *);
	virtual void OnAdd(DirectUI::Element *,DirectUI::Element * *,unsigned int);
	virtual void OnLayoutPosChanged(DirectUI::Element *,DirectUI::Element *,int,int);
	virtual void OnRemove(DirectUI::Element *,DirectUI::Element * *,unsigned int);
};

namespace std
{
	nothrow_t const std::nothrow;
};

namespace wil
{
	class ActivityBase<FileExplorerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>
	{
		struct ActivityData<FileExplorerLogging,_TlgReflectorTag_Param0IsProviderType>
		{
			bool SetStopResult(long,long *);
			~ActivityData<FileExplorerLogging,_TlgReflectorTag_Param0IsProviderType>();
		};

	protected:
		void Destroy();
	public:
		ActivityBase<FileExplorerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(char const *,bool);
		_GUID const * zInternalRelatedId();
		virtual bool NotifyFailure(FailureInfo const &);
		void Stop(long);
		void zInternalStart();
		void zInternalStop();
		~ActivityBase<FileExplorerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>();
	};

	class ActivityBase<FileExplorerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>
	{
		struct ActivityData<FileExplorerLogging,_TlgReflectorTag_Param0IsProviderType>
		{
			bool SetStopResult(long,long *);
			~ActivityData<FileExplorerLogging,_TlgReflectorTag_Param0IsProviderType>();
		};

	protected:
		void Destroy();
		void SetStopResult(long,long *);
	public:
		ActivityBase<FileExplorerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(char const *,bool);
		_GUID const * zInternalRelatedId();
		virtual bool NotifyFailure(FailureInfo const &);
		void Stop(long);
		void zInternalStart();
		void zInternalStop();
		~ActivityBase<FileExplorerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>();
	};

	class ActivityBase<FileExplorerPerf,1,0,5,_TlgReflectorTag_Param0IsProviderType>
	{
		struct ActivityData<FileExplorerPerf,_TlgReflectorTag_Param0IsProviderType>
		{
			bool SetStopResult(long,long *);
			~ActivityData<FileExplorerPerf,_TlgReflectorTag_Param0IsProviderType>();
		};

		void ReportStopActivity(long);
	protected:
		void Destroy();
	public:
		ActivityBase<FileExplorerPerf,1,0,5,_TlgReflectorTag_Param0IsProviderType>(char const *,bool);
		_GUID const * zInternalRelatedId();
		virtual bool NotifyFailure(FailureInfo const &);
		void Stop(long);
		void zInternalStart();
		void zInternalStop();
		~ActivityBase<FileExplorerPerf,1,0,5,_TlgReflectorTag_Param0IsProviderType>();
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
		ActivityBase<TaskbarLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>(char const *,bool);
		_GUID const * zInternalRelatedId();
		virtual bool NotifyFailure(FailureInfo const &);
		void Stop(long);
		void zInternalStart();
		void zInternalStop();
		~ActivityBase<TaskbarLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>();
	};

	class Feature<__WilFeatureTraits_Feature_CloudFileStateIcon>
	{
		static void ReportUsageToService(bool,ReportingKind,unsigned __int64);
		static wil_details_CachedFeatureEnabledState GetCachedFeatureEnabledState(bool);
	};

	class Feature<__WilFeatureTraits_Feature_NamespaceNavigationRestrictions>
	{
		static void ReportUsageToService(bool,ReportingKind,unsigned __int64);
		static wil_details_CachedFeatureEnabledState GetCachedFeatureEnabledState(bool);
	};

	class Feature<__WilFeatureTraits_Feature_PickerBackButton>
	{
		static void ReportUsageToService(bool,ReportingKind,unsigned __int64);
		static wil_details_CachedFeatureEnabledState GetCachedFeatureEnabledState(bool);
	};

	struct PropVariant
	{
		bool TryDetachString(unsigned short * *);
	};

	struct PropertyStoreHelperBase<IPropertyStore>
	{
		long GetAsBoolean<_tagpropertykey>(_tagpropertykey,bool *);
		long GetFailIfEmpty<_tagpropertykey>(_tagpropertykey,tagPROPVARIANT *);
		long GetString<_tagpropertykey>(_tagpropertykey,unsigned short * *);
		long InitFromItem(IUnknown *,GETPROPERTYSTOREFLAGS);
	};

	struct ShellBindContextHelper
	{
		ShellBindContextHelper(IBindCtx *);
		long SetNamedBoolean(unsigned short const *);
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
			void EnsureSubscribedToUsageFlush(void (*)(void *));
			void OnStateChange();
			void OnTimer();
			void QueueBackgroundUsageReporting(unsigned int,wil_details_FeaturePropertyCache &);
			void SubscribeFeaturePropertyCacheToEnabledStateChanges(wil_details_FeaturePropertyCache *,wil_FeatureChangeTime);
			~EnabledStateManager();
		};

		class FeatureStateManager
		{
			bool EnsureStateData();
			void EnsureSubscribedToProcessWideUsageFlushUnderLock();
		public:
			FeatureStateManager();
			void RecordFeatureError(unsigned int,FEATURE_ERROR const &);
			void RecordFeatureUsage(unsigned int,wil_details_ServiceReportingKind,unsigned __int64);
			void SubscribeToEnabledStateChanges(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
			void SubscribeToUsageFlush(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *));
			~FeatureStateManager();
		};

		struct StagingFailureInformation
		{
			StagingFailureInformation(FailureInfo const &,DiagnosticsInfo const &,void *);
		};

		class ThreadFailureCallbackHolder
		{
			static long volatile s_telemetryId;
		public:
			static bool GetThreadContext(FailureInfo *,ThreadFailureCallbackHolder *,char *,unsigned __int64);
			static void GetContextAndNotifyFailure(FailureInfo *,char *,unsigned __int64);
			void StartWatching();
			void StopWatching();
		};

		namespace in1diag3
		{
			long Log_Hr(void *,unsigned int,char const *,long);
			long Return_GetLastError(void *,unsigned int,char const *);
			void FailFast_Unexpected(void *,unsigned int,char const *);
			void Return_Hr(void *,unsigned int,char const *,long);
			void Return_Hr_NoOriginate(void *,unsigned int,char const *,long);
			void _FailFastImmediate_Unexpected();
			void _FailFast_GetLastError(void *,unsigned int,char const *);
			void _FailFast_Unexpected(void *,unsigned int,char const *);
			void _Log_GetLastError(void *,unsigned int,char const *);
			void _Log_Hr(void *,unsigned int,char const *,long);
		};

		struct shared_buffer
		{
			void reset();
		};

		struct shared_object<ActivityBase<FileExplorerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<FileExplorerLogging,_TlgReflectorTag_Param0IsProviderType> >
		{
			void reset();
		};

		struct shared_object<ActivityBase<FileExplorerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<FileExplorerLogging,_TlgReflectorTag_Param0IsProviderType> >
		{
			void reset();
		};

		struct shared_object<ActivityBase<FileExplorerPerf,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<FileExplorerPerf,_TlgReflectorTag_Param0IsProviderType> >
		{
			void reset();
		};

		struct shared_object<ActivityBase<TaskbarLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TaskbarLogging,_TlgReflectorTag_Param0IsProviderType> >
		{
			void reset();
		};

		struct static_lazy<CloudFileProvider>
		{
			CloudFileProvider * get(void (*)());
		};

		struct static_lazy<FeatureLogging>
		{
			FeatureLogging * get(void (*)());
		};

		struct static_lazy<FileExplorerLogging>
		{
			FileExplorerLogging * get(void (*)());
			void cleanup();
		};

		struct static_lazy<FileExplorerPerf>
		{
			FileExplorerPerf * get(void (*)());
			void cleanup();
		};

		struct static_lazy<FileExplorerTelemetry>
		{
			void cleanup();
		};

		struct static_lazy<PiiSafeKnownFolderList>
		{
			PiiSafeKnownFolderList * get(void (*)());
			void cleanup();
		};

		struct static_lazy<TaskbarLogging>
		{
			TaskbarLogging * get(void (*)());
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
		long GetLastErrorFailHr();
		long NtStatusToHr(long);
		long ReportFailure_GetLastErrorHr(void *,unsigned int,char const *,char const *,char const *,void *,FailureType);
		long StringCchPrintfA(char *,unsigned __int64,char const *,...);
		shutdown_aware_object<details::EnabledStateManager> g_enabledStateManager;
		shutdown_aware_object<details::FeatureStateManager> g_featureStateManager;
		unsigned __int64 ResultStringSize(char const *);
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
		void (* g_pfnTelemetryCallback)(bool,FailureInfo const &);
		void (* g_pfnThrowResultException)(FailureInfo const &);
		void CloseHandle(void *);
		void DebugBreak();
		void FeatureLoggingHook(unsigned int,FEATURE_LOGGED_TRAITS const *,FEATURE_ERROR const *,int,wil_ReportingKind const *,wil_VariantReportingKind const *,unsigned char,unsigned __int64);
		void FreeProcessHeap(void *);
		void GetContextAndNotifyFailure(FailureInfo *,char *,unsigned __int64);
		void LogFailure(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long,unsigned short const *,bool,unsigned short *,unsigned __int64,char *,unsigned __int64,FailureInfo *);
		void RecordFeatureUsageCallback(unsigned int,wil_details_FeaturePropertyCache *,wil_details_RecordUsageResult *);
		void ReleaseMutex(void *);
		void ReportFailure(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long,unsigned short const *,details::ReportFailureOptions);
		void ReportFailure_Hr(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long);
		void ReportFeatureError(long,ThreadErrorContext &,unsigned int,DiagnosticsInfo const &);
		void WilApiImpl_RecordFeatureError(unsigned int,FEATURE_ERROR const *);
		void WilApiImpl_RecordFeatureUsage(unsigned int,unsigned int,unsigned int,char const *);
		void WilApiImpl_SubscribeFeatureStateChangeNotification(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
		void WilApiImpl_UnsubscribeFeatureStateChangeNotification(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
		void WilApi_RecordFeatureUsage(unsigned int,unsigned int,unsigned int,char const *);
		void WilApi_SubscribeFeatureStateChangeNotification(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
		void WilApi_UnsubscribeFeatureStateChangeNotification(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
	};

	namespace details_abi
	{
		class FeatureStateData
		{
			void RetrieveUsageUnderLock(UsageIndexes &);
		public:
			bool RecordFeatureError(unsigned int,FEATURE_ERROR const &);
			bool RecordFeatureUsage(unsigned int,wil_details_ServiceReportingKind,unsigned __int64);
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
		};

		struct ThreadLocalData
		{
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
			bool reserve(unsigned __int64);
		};

		details_abi::ProcessLocalStorage<details_abi::ProcessLocalData> * g_pProcessLocalData;
		details_abi::ThreadLocalData * GetThreadLocalDataCache(bool);
		void RecordWnfUsageIndex(__WIL__WNF_STATE_NAME const *,unsigned __int64,details_abi::RawUsageIndex const &);
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
	long GetFailureLogString(unsigned short *,unsigned __int64,wil::FailureInfo const &);
	void SetLastError(wil::FailureInfo const &);
};

namespace wistd
{
	class _Func_class<bool,void *,unsigned __int64,void *,unsigned __int64,unsigned int,_Nil,_Nil>
	{
	protected:
		void _Tidy();
	};

	void swap_wil<wil::details_abi::heap_buffer>(wil::details_abi::heap_buffer &,wil::details_abi::heap_buffer &);
};

ATL::CComModule _Module;
CABINETSTATE g_CabState;
CAssociationList g_AssocList;
CDUIResourceManager g_resmgrItemsViewDUI;
CGlobalObject g_goExplorerScheduler;
CSearchEditBoxBase * element_cast<CSearchEditBoxBase>(DirectUI::Element *);
CTheater * g_pTheater;
CViewSet * CViewSet_New();
DPI_AWARENESS_CONTEXT__ * (* s_pfnGetWindowDpiAwarenessContext)(HWND__ *);
DeskBarsPerMonitor * GetDBPMWithMonitor(HMONITOR__ *,int);
DirectUI::Element * DUI_BubbleGetAdjacent(DirectUI::Element *,DirectUI::Element *,int);
DirectUI::Element * DUI_ElementFromPoint(DirectUI::Element *,DUI_COORDINATES_SYSTEM,tagPOINT *);
DirectUI::Element * DUI_ElementGetAdjacent(DirectUI::Element *,DirectUI::Element *,DirectUI::Element *,int);
DirectUI::Element * DUI_FindChildWithID(DirectUI::Element *,unsigned short);
DirectUI::Element * DUI_GetElementChild(DirectUI::Element *,int);
DirectUI::Element * DUI_GetKeyFocusedElement();
DirectUI::Element * ItemsView_FindNextItem(DirectUI::Element *,INAVDIR,int);
DirectUI::Element * _FindAncestorElement(DirectUI::Element *,DirectUI::IClassInfo *);
DirectUI::Element * _FindChildElement(DirectUI::Element *,DirectUI::IClassInfo *);
DirectUI::Element * _FindDescendentElement(DirectUI::Element *,DirectUI::IClassInfo *);
DirectUI::Element * _FindMouseActiveAncestor(DirectUI::Element *);
DirectUI::Element * s_StepInsideByElement(SectionInfo const &,DirectUI::Element *);
DirectUI::HWNDElement * element_cast<DirectUI::HWNDElement>(DirectUI::Element *);
DirectUI::Value * DUI_ShellStyleSheet_GetSheetCB(unsigned short const *,void *);
FEATURE_ENABLED_STATE (* g_wil_details_apiGetFeatureEnabledState)(unsigned int,FEATURE_CHANGE_TIME);
FEATURE_ENABLED_STATE (* g_wil_details_internalGetFeatureEnabledState)(unsigned int,FEATURE_CHANGE_TIME);
FOLDERVIEWMODE ViewModeFromLogicalViewMode(FOLDERLOGICALVIEWMODE);
HINSTANCE__ * GetShellStyleHInstance(unsigned short * *);
HINSTANCE__ * g_hinstImageRes;
HINSTANCE__ * g_hinstShell32;
HINSTANCE__ * g_wil_details_ntdllModuleHandle;
HINSTANCE__ * wil_details_GetNtDllModuleHandle();
HITCHARTYPE _GetHitDirection(unsigned short const *,unsigned long);
HMENU__ * SHLoadPopupMenu(HINSTANCE__ *,unsigned int);
HPALETTE__ * g_hpalHalftone;
IAddressList * CMRUList_Create();
IBandSite * _GetBandSite(IDeskBar *);
ICIVERBTOIDMAP const * _CmdIDToMap(unsigned __int64,int,ICIVERBTOIDMAP const *);
IDeskBand * _GetInfoBandBS(IBandSite *,_GUID const &);
IDropTarget * DropTargetWrap_CreateInstance(IDropTarget *,IDropTarget *,HWND__ *);
IERegCacheEntry * g_IERegPolicyKeyCache;
IGlobalInterfaceTable * g_pgit;
INAVDIR NavDirToVirtNavDir(VIRTUALDIRECTION,INAVDIR);
IStream * GetRegStream(unsigned short const *,unsigned long);
IStream * OpenPidlOrderStream(_ITEMIDLIST_ABSOLUTE const *,_ITEMIDLIST_ABSOLUTE const *,char const *,unsigned long);
ITEMGUTTER GetVerticalHitForItem(VerticalHitTest const &,int,int);
IUnknown * g_punkWarmScheduler;
IVirtualizedUI * GetParentVirtualizedUIFromElement(DirectUI::Element *);
ItemGridLayout * element_cast<ItemGridLayout>(DirectUI::Element *);
ItemRowLayout * element_cast<ItemRowLayout>(DirectUI::Element *);
LineHScrollBar * element_cast<LineHScrollBar>(DirectUI::Element *);
LineScroller * element_cast<LineScroller>(DirectUI::Element *);
LinkedViewer * element_cast<LinkedViewer>(DirectUI::Element *);
NONINDEXEDPROP GetUnsupportedPropFromLibrary(ILibraryDescription *);
NSTCFOLDERCAPABILITIES _GetTreeFolderCapabilities(INameSpaceTreeControlFolderCapabilities *,NSTCFOLDERCAPABILITIES);
NSTCFOLDERCAPABILITIES _GetTreeFolderCapabilities(IShellFolder *,NSTCFOLDERCAPABILITIES);
ORDERITEM * OrderItem_Create(_ITEMID_CHILD *,int);
POINTV VPointFromPoint(tagPOINT const &,VIRTUALDIRECTION);
RECTV VRectFromRect(tagRECT const &,VIRTUALDIRECTION);
REENTRANCYCHECKTHATFAILED volatile g_ReentrantCheck;
RIBBON_MODE GetRibbonModeForLocation(IShellItem *);
Resizer * element_cast<Resizer>(DirectUI::Element *);
SIZEV DUI_GetElementDesiredVSize(DirectUI::Element *,VIRTUALDIRECTION);
SIZEV VSizeFromSize(tagSIZE const &,VIRTUALDIRECTION);
TRIBIT g_tbOutputDebugFramerate;
TRIBIT g_tbSearchComponent;
TRIBIT g_tbSoftwareRendering;
UIBase * element_cast<UIBase>(DirectUI::Element *);
UICheckbox * element_cast<UICheckbox>(DirectUI::Element *);
UICollection * element_cast<UICollection>(DirectUI::Element *);
UIColumnHeader * element_cast<UIColumnHeader>(DirectUI::Element *);
UIColumnHeaderCheckbox * element_cast<UIColumnHeaderCheckbox>(DirectUI::Element *);
UID CountedScrollEventType;
UIGroupHeader * element_cast<UIGroupHeader>(DirectUI::Element *);
UIGroupItem * element_cast<UIGroupItem>(DirectUI::Element *);
UIItem * element_cast<UIItem>(DirectUI::Element *);
UIItemsView * element_cast<UIItemsView>(DirectUI::Element *);
UIProperty * element_cast<UIProperty>(DirectUI::Element *);
UIRootItem * element_cast<UIRootItem>(DirectUI::Element *);
UISmartProperty * element_cast<UISmartProperty>(DirectUI::Element *);
_DPA * g_hdpaHooks;
_DSA * g_hdsaDeskBars;
_GUID const * * c_rgSendSearchToFolders;
_GUID const g_SHSqmGlobalSession;
_HIDDENITEMID const * ILFindFirstHiddenID(_ITEMIDLIST_RELATIVE const *);
_HIDDENITEMID const * ILFindHiddenIDOn(_ITEMIDLIST_RELATIVE const *,IDLHID,int);
_IDREGITEM const * _SHIsRooted(_ITEMIDLIST_ABSOLUTE const *);
_IMAGELIST * ImageList_LoadImage_Scaled(HWND__ *,HINSTANCE__ *,int const * const,int,unsigned long,unsigned int,unsigned int);
_ITEMIDLIST_ABSOLUTE * _SimpleToReal(_ITEMIDLIST_ABSOLUTE const *);
_ITEMIDLIST_RELATIVE * ILCloneParent(_ITEMIDLIST_RELATIVE const *);
_RTL_CRITICAL_SECTION g_csToolTipHookLock;
_RTL_RUN_ONCE s_InitOnce;
_RTL_SRWLOCK g_srwInitUIA;
__WIL_RTL_SRWLOCK g_wil_details_testFeatureStateLock;
__int64 DrawTransparentBackground(HWND__ *,HDC__ *);
__int64 ForwardPrintClient(int,HWND__ *,HWND__ *,unsigned int,unsigned __int64,__int64);
__int64 IEFrameWndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
__int64 NSCEditBoxSubclassWndProc(HWND__ *,unsigned int,unsigned __int64,__int64,unsigned __int64,unsigned __int64);
_tagpropertykey const * * c_rgKeyDefaultMoreProps;
_tagpropertykey const * * c_rgKeyExcludeFromMoreProps;
_tagpropertykey const * * c_rgkeys;
bool AddToRestartList(_ITEMIDLIST_ABSOLUTE const *,tagRECT const *,unsigned long,bool);
bool CSearchBoxTextProvider_IsPatternSupported(DirectUI::Element *);
bool CSearchBoxValueProvider_IsPatternSupported(DirectUI::Element *);
bool GetCmdTabsetForCanonicalName(unsigned short const * const,unsigned int *);
bool IShellItem_IsApp(IShellItem *);
bool IShellItem_IsPartialCloudFilePlaceholder(IShellItem *);
bool IShellItem_IsPartialCloudFilePlaceholderFromFindData(IShellItem *);
bool IShellItem_IsPinnedToQuickAccess(IShellItem *);
bool IVGridProvider_IsPatternSupported(DirectUI::Element *);
bool IsAgile(IUnknown *);
bool IsDefViewPlaceholder(HMENU__ *,int);
bool IsDetailsView(DirectUI::Element *);
bool IsEncryptedFileOverlayEnabled();
bool IsFolderNotStreamItem(IShellItem *);
bool IsGroupOrRootItem(DirectUI::Element *);
bool IsHistoryVaultEnabled();
bool IsIDListUnderHomeGroup(_ITEMIDLIST_ABSOLUTE const *);
bool IsItemHome(IShellItem *);
bool IsItemUnderStorageProvider(IShellItem *,unsigned short const *);
bool IsNotifiedItemValid(_ITEMIDLIST_ABSOLUTE const *);
bool IsSecondTouchSelectEnabled();
bool IsTextInSearchBox(IUnknown *);
bool IsTouchSelect();
bool IsTouchSelectEnabled();
bool IsTouchableFileExplorerEnabled();
bool SHIsFileExplorerInTabletMode();
bool SHIsSettingsChangeTabletModeChange(__int64);
bool ShouldCommandOptionPromptBeVisible(IUnknown *);
bool ShouldDomainFeaturesShow(IUnknown *);
bool ShouldOpticalBurnFeaturesShow(IUnknown *);
bool ShouldPinItem(IShellFolder *,_ITEMID_CHILD const *,bool,bool);
bool ShouldPowerShellOptionPromptBeVisible(IUnknown *);
bool ShouldTranslateForNavigation(IShellItem *);
bool UIColumnHeaderExpandCollapseProvider_IsPatternSupported(DirectUI::Element *);
bool UIColumnHeaderInvokeProvider_IsPatternSupported(DirectUI::Element *);
bool UIGroupHeaderExpandCollapseProvider_IsPatternSupported(DirectUI::Element *);
bool UIGroupItemExpandCollapseProvider_IsPatternSupported(DirectUI::Element *);
bool UIItemGridItemProvider_IsPatternSupported(DirectUI::Element *);
bool UIItemInvokeProvider_IsPatternSupported(DirectUI::Element *);
bool UIItemScrollItemProvider_IsPatternSupported(DirectUI::Element *);
bool UIItemSelectionItemProvider_IsPatternSupported(DirectUI::Element *);
bool UIItemToggleProvider_IsPatternSupported(DirectUI::Element *);
bool UIItemValueProvider_IsPatternSupported(DirectUI::Element *);
bool UIItemsViewItemContainerProvider_IsPatternSupported(DirectUI::Element *);
bool UIItemsViewMultipleViewProvider_IsPatternSupported(DirectUI::Element *);
bool UIItemsViewScrollProvider_IsPatternSupported(DirectUI::Element *);
bool UIItemsViewSelectionProvider_IsPatternSupported(DirectUI::Element *);
bool UIItemsViewTableProvider_IsPatternSupported(DirectUI::Element *);
bool UIPropertyGridItemProvider_IsPatternSupported(DirectUI::Element *);
bool UIPropertyTableItemProvider_IsPatternSupported(DirectUI::Element *);
bool UIPropertyValueProvider_IsPatternSupported(DirectUI::Element *);
bool UseSeparateProcess(IShellItem *);
bool UseSeparateProcess(_ITEMIDLIST_ABSOLUTE const *);
bool _FireCountedScrollEvent(DirectUI::Element *,unsigned int,COUNTEDSCROLLEVENTTYPE);
bool _IsFilePlaceholder(IShellFolder *,_ITEMID_CHILD const *);
bool _ShouldProvideAutoIcons(IExplorerCommand *);
bool _TlgGuidIsZero(_GUID const &);
bool operator==(UID const &,UID (*const &)());
double DUI_GetScrollBarPercent(DirectUI::BaseScrollBar *,int);
double SHComputeSystemToMonitorDPIRatio(HWND__ *);
int (* s_pfnAreDpiAwarenessContextsEqual)(DPI_AWARENESS_CONTEXT__ *,DPI_AWARENESS_CONTEXT__ *);
int (* s_pfnGetDpiForWindow)(HWND__ *);
int (* s_pfnGetSystemMetricsForDpi)(int,int);
int AllowFullLibraryExperience();
int AreItemsEqualByLikeness(IItem *,IItem *,tagACCESS_MODE);
int AreItemsEqualByNode(IItem *,IItem *,tagACCESS_MODE);
int BindCtx_ContainsObject(IBindCtx *,unsigned short const *);
int CShellViews_Add(CShellViews *,CViewSet *,int *);
int CShellViews_Init(CShellViews *);
int CShellViews_IsViewSupported(CShellViews *,unsigned int,_GUID const *);
int CViewSet_IsViewSupported(CViewSet *,_GUID const *);
int CanDoNewFolderInFolder(IShellItem *);
int CanUseViewItemCollection(_ITEMIDLIST_ABSOLUTE const *);
int CanUseViewItemStore(IUnknown *);
int CheckForDragBegin(HWND__ *,int,int);
int ConfirmRemoveBand(HWND__ *,unsigned int,unsigned short const *);
int DPA_CViewSet_DeleteCallback(void *,void *);
int DPA_CoTaskMemFreeCB<unsigned short>(unsigned short *,void *);
int DPA_DestroyURLSearchHooksCallback(void *,void *);
int DPA_FreeOrderItem(ORDERITEM *,void *);
int DPA_ILFreeCB<_ITEMIDLIST_ABSOLUTE>(_ITEMIDLIST_ABSOLUTE *,void *);
int DPA_ILFreeCB<_ITEMID_CHILD>(_ITEMID_CHILD *,void *);
int DPA_OrderItemCompare(ORDERITEM *,ORDERITEM *,__int64);
int DPA_ReleaseCB<CSCParsedTerm>(CSCParsedTerm *,void *);
int DPA_ReleaseCB<ICondition>(ICondition *,void *);
int DPA_ReleaseCB<IExplorerFrameCallback>(IExplorerFrameCallback *,void *);
int DPA_ReleaseCB<IFilterCondition>(IFilterCondition *,void *);
int DPA_ReleaseCB<IFrameWorkItem>(IFrameWorkItem *,void *);
int DPA_ReleaseCB<IItem>(IItem *,void *);
int DPA_ReleaseCB<IUnknown>(IUnknown *,void *);
int DPA_ReleaseObjWithSiteCB<IUpdatableItemSet>(IUpdatableItemSet *,void *);
int DPA_SWindowsFree(void *,void *);
int DUI_GetContentAlign(DirectUI::Element *,DUI_COORDINATES_SYSTEM);
int DUI_GetElementFontPointSizeForDPI(DirectUI::Element *,int);
int DUI_GetLocalWidth(DirectUI::Element *);
int DUI_GetTextLineHeight(HDC__ *,DirectUI::Element *);
int DUI_IsDragDelta(DirectUI::MouseDragEvent *);
int DUI_IsElementExtentEmpty(DirectUI::Element *);
int DUI_IsSelfOrDescendent(DirectUI::Element *,DirectUI::Element *);
int DUI_MakeTreeInaccessibleCB(DirectUI::Element *,void *);
int DUI_TransformContentAlign(DirectUI::Element *,DUI_COORDINATES_SYSTEM,int,DUI_COORDINATES_SYSTEM);
int DoesTopViewSupportNewFolders(IShellItem *);
int EditBoxHasFocus();
int FPidlOnNonPersistentDrive(_ITEMIDLIST_ABSOLUTE const *);
int FailForceReturn(long);
int ForwardMessageToDirectChild(HWND__ *,__int64);
int GetEditFontHeight(HWND__ *);
int GetInfoTipEx(IShellFolder *,unsigned long,_ITEMID_CHILD const *,unsigned short *,int);
int GetLabelStringW(HWND__ *,unsigned short *,unsigned long);
int GetMaxLineHeight(DirectUI::Element *,DirectUI::Surface *);
int GetMonitorRects(HMONITOR__ *,tagRECT *,int);
int GetPosFlagsFromElement(DirectUI::Element *);
int GetSearchOptionValue(unsigned long);
int IERegGetBoolWithPoliciesW(unsigned short const *,unsigned short const *,unsigned short const *,int);
int IItemIndex_Compare(IItem *,IItem *,IItemCollection *);
int ILCompareHidden(_ITEMIDLIST_RELATIVE const *,_ITEMIDLIST_RELATIVE const *,IDLHID);
int ILCompareHiddenLibraryEnum(_ITEMIDLIST_RELATIVE const *,_ITEMIDLIST_RELATIVE const *,IDLHID);
int ILCompareHiddenStackData(_ITEMIDLIST_RELATIVE const *,_ITEMIDLIST_RELATIVE const *,IDLHID);
int ILCompareHiddenString(_ITEMIDLIST_RELATIVE const *,_ITEMIDLIST_RELATIVE const *,IDLHID);
int ILIsEqualIncludingHiddenEx(_ITEMIDLIST_ABSOLUTE const *,_ITEMIDLIST_ABSOLUTE const *,IIEIHE);
int ILIsHiddenEqual(_ITEMIDLIST_RELATIVE const *,_ITEMIDLIST_RELATIVE const *,IIEIHE);
int ILRootedCompare(_ITEMIDLIST_ABSOLUTE const *,_ITEMIDLIST_ABSOLUTE const *);
int IShellItem_IsContainerFile(IShellItem *);
int IShellItem_IsFolder(IShellItem *);
int InitializeUserAPIs(_RTL_RUN_ONCE *,void *,void * *);
int IsBasicLibrary(IShellItem *);
int IsBiDiLocale(unsigned long);
int IsClassOf<UIGroupItem>(DirectUI::Element *);
int IsClassOf<UIItem>(DirectUI::Element *);
int IsCollectionGrouped(IItemCollection *);
int IsCompatibleVarType(unsigned short,unsigned short);
int IsCurrentTravelEntryAutoNavigated(IUnknown *,ITravelEntry * *);
int IsEqualCondition(ICondition *,ICondition *,IPropertyKeyStore *);
int IsExpectedCLSID(_GUID const * const *,unsigned int,_GUID const &);
int IsFileDialog(IUnknown *);
int IsGlobalAcceleratorCandidate(tagMSG const *);
int IsGroupedRoot(DirectUI::Element *);
int IsHighContrast();
int IsInExcludeList(unsigned short const *);
int IsItemAGroup(IItem *);
int IsItemAGroupOrRoot(IItem *,IItem *);
int IsItemInsideVerticalRange(VerticalHitTest const &,VerticalHitTest const &,int,int);
int IsItemInsideVirtualRect(VIRTUALRECT const &,HorizontalHitRange const &,int,int);
int IsItemMemberOfGroup(IItem *,IItem *,ICollectionCache *);
int IsItemRealizedAndEqualByLikeness(IItem *,IItem *);
int IsItemRealizedAndEqualByNode(IItem *,IItem *);
int IsItemUnderHomegroup(IShellItem *);
int IsLibraryLocationOwnedByAnotherMachine(ILocationDescription *);
int IsMultiValueProperty(_tagpropertykey const &);
int IsNearPoint(tagPOINT *);
int IsOutputDebugFramerateOn();
int IsParentOfItem(HWND__ *,_TREEITEM *,_TREEITEM *);
int IsSearchConnector(IShellItem *);
int IsSearchHome(IShellItem *);
int IsSelectedCB(IItem *,CSelectionState *);
int IsSoftwareRenderingForced();
int IsSpecialUrlInTravelLogDisabled();
int IsSubclassOf<ItemRowLayout>(DirectUI::Element *);
int IsSubclassOf<LineScroller>(DirectUI::Element *);
int IsSubclassOf<LineVScrollBar>(DirectUI::Element *);
int IsSubclassOf<LinkedViewer>(DirectUI::Element *);
int IsSubclassOf<UICollection>(DirectUI::Element *);
int IsSubclassOf<UIGroupItem>(DirectUI::Element *);
int IsSubclassOf<UIItem>(DirectUI::Element *);
int IsSubclassOf<UIItemsView>(DirectUI::Element *);
int IsSubclassOf<UIMarqueeSelector>(DirectUI::Element *);
int IsSubclassOf<UIProperty>(DirectUI::Element *);
int IsSubclassOf<UIRootItem>(DirectUI::Element *);
int IsTreeViewItemTextTruncated(HWND__ *,_TREEITEM *);
int IsUNCItem(IShellItem *);
int IsUnsupportedLocation(ILocationDescription *);
int IsVK_CtlTABCycler(tagMSG *);
int IsVK_TABCycler(tagMSG *);
int IsWordWheelIDList(IShellFolder3 *,_ITEMID_CHILD const *);
int ItemCountProperty;
int ItemIndexProperty;
int ItemsView_AssertOnReentry(int,REENTRANCYCHECKTHATFAILED);
int LoadImageRes();
int LocationSupportsAQS(IUnknown *);
int MeasureMenuItemText(unsigned short const *,tagSIZE *);
int OrderItem_Compare(void *,void *,__int64);
int OrderItem_CompareByPropList(ORDERITEM const &,ORDERITEM const &,ORDERINFO const &);
int OrderItem_FreeItem(void *,void *);
int OrderList_Append(_DPA *,_ITEMID_CHILD *,int);
int PopulateItbarToolbarBands(HMENU__ *,IUnknown *);
int PropSheetCallback(HWND__ *,unsigned int,__int64);
int RemoveOverDelta(long *,long *);
int SHEnableMenuCheckMarkOrBmp(HMENU__ *,int);
int SHProcessMessagesUpdateTimeout(unsigned long,unsigned long,unsigned long *);
int SelectedItemCountProperty;
int TryBrowseInPlace(IUnknown *,_ITEMIDLIST_ABSOLUTE const *,unsigned int);
int _BezierInterpolation(int,int,int,unsigned long,unsigned long);
int _CompareSectionsByRow(SectionInfo const &,unsigned __int64);
int _CompareSectionsByScrollTicks(SectionInfo const &,unsigned __int64);
int _CompareSectionsBySectionIndex(SectionInfo const &,unsigned __int64);
int _CountBrowserWindowCallback(HWND__ *,__int64);
int _DidDropOnRecycleBin(IDataObject *);
int _ExecCallback(CBandItemData *,void *);
int _GetScrollBarRange(DirectUI::BaseScrollBar *);
int _IsAddressFocusKey(tagMSG *);
int _IsConditionFiltered(IQueryParser2 *,ICondition2 *);
int _IsDynamicFilterLocation(IShellItem *);
int _IsEqualAndOrCondition(ICondition *,ICondition *,IPropertyKeyStore *);
int _IsEqualLeafCondition(ICondition *,ICondition *,IPropertyKeyStore *);
int _IsEqualNotCondition(ICondition *,ICondition *,IPropertyKeyStore *);
int _IsParentOf(_ITEMIDLIST_ABSOLUTE const *,_ITEMIDLIST_ABSOLUTE const *);
int _IsStarQuery(ICondition *);
int _IsSummaryProperty(_tagpropertykey const &);
int _IsWindowOwnerCallback(CBandItemData *,void *);
int _NavigateOnUpdate(IShellItem *);
int _PropertyKeyStoreContainsCondition(ICondition *,IPropertyKeyStore *);
int _PropertyKeyStoreContainsConditionAndOrNot(ICondition *,IPropertyKeyStore *);
int _PropertyKeyStoreContainsConditionLeaf(ICondition *,IPropertyKeyStore *);
int _QITest(IUnknown *,_GUID const &);
int _SHIsMenuSeparator2(HMENU__ *,int,int *);
int const & within<int>(int const &,int const &,int const &);
int g_fInitUIA;
int g_wil_details_preventOnDemandStagingConfigReads;
int operator==(_tagpropertykey const &,_tagpropertykey const &);
int s_StepInsideByRow(SectionInfo const &,int);
int s_StepInsideByTick(SectionInfo const &,int);
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
long AddNscChangeNotifyTask(IShellTaskScheduler *,CNscLock *,_ITEMIDLIST_ABSOLUTE const *,long,_ITEMIDLIST_ABSOLUTE const *,_ITEMIDLIST_ABSOLUTE const *,_TREEITEM *,NSCITEMINFO *,int);
long AddNscIconTask(IShellTaskScheduler *,CNscLock *,_ITEMIDLIST_ABSOLUTE const *,_TREEITEM *,NSCITEMINFO *,IUnknown *,unsigned int);
long AddNscInfoTipTask(IShellTaskScheduler *,unsigned long,CNscLock *,_ITEMIDLIST_ABSOLUTE const *,_TREEITEM *,NSCITEMINFO *,unsigned int);
long AddNscOverlayTask(IShellTaskScheduler *,CNscLock *,_ITEMIDLIST_ABSOLUTE const *,_TREEITEM *,NSCITEMINFO *,IUnknown *,unsigned int);
long AddNscPlusTask(IShellTaskScheduler *,CNscLock *,_ITEMIDLIST_ABSOLUTE const *,_TREEITEM *,NSCITEMINFO *,unsigned int,unsigned long);
long AddNscSortTask(IShellTaskScheduler *,CNscLock *,_ITEMIDLIST_ABSOLUTE const *,_TREEITEM *,NSCITEMINFO *,unsigned long,CDPA<ORDERITEM,CTContainer_PolicyUnOwned<ORDERITEM> > *,_ITEMID_CHILD const *,unsigned long);
long AddNscValidateTask(IShellTaskScheduler *,CNscLock *,_ITEMIDLIST_ABSOLUTE const *,_TREEITEM *,NSCITEMINFO *,unsigned int);
long AdviseCollectionChangedEventsInternal(IItemCollection *,HWND__ *,IEventQueue *,IFirstPageResults *,ADVISE_TYPE,void *,long (*)(void *,IUnknown *,int,void *,tagEVENTACTION *),long (*)(void *,IUnknown *,void *),__int64 *);
long AdviseItemChangedEventsInternal(IItem *,DirectUI::Element *,void *,long (*)(void *,IUnknown *,int,void *,tagEVENTACTION *),long (*)(void *,IUnknown *,void *),__int64 *);
long AdviseItemChangedEventsInternal(IItem *,HWND__ *,IEventQueue *,void *,long (*)(void *,IUnknown *,int,void *,tagEVENTACTION *),long (*)(void *,IUnknown *,void *),__int64 *);
long AppendScreenResString(unsigned short const *,unsigned long,unsigned short *,unsigned long);
long ApplyURLSearch(unsigned short const *,unsigned short *,unsigned int,ISearchContext *);
long AreAnyStorageProvidersEnabledToShowState(bool *);
long ArrayToSafeArray<IRawElementProviderSimple *>(DirectUI::UiaArray<IRawElementProviderSimple *> *,unsigned short,tagSAFEARRAY * *);
long AssureFtpOptionsMenuItem(HMENU__ *);
long BaselineLayout_CreateInstance(LAYOUTPARAM const *,unsigned int,DirectUI::Value * *);
long BindCtx_RegisterObjectParams(IBindCtx *,BINDCTX_PARAM const *,unsigned int,IBindCtx * *);
long BindUpToInterface(IShellItem *,_ITEMIDLIST_RELATIVE * *,_GUID const &,void * *);
long BrowserBar_Init(CBrowserBar *,IUnknown * *,int);
long BuildSafeArray<IRawElementProviderSimple *>(unsigned short,IRawElementProviderSimple * *,int,tagSAFEARRAY * *);
long BuildSafeArray<int const >(unsigned short,int const *,int,tagSAFEARRAY * *);
long CCancelWithBool_CreateInstance(_GUID const &,void * *);
long CISFBand_CreateEx(IShellFolder *,_ITEMIDLIST_ABSOLUTE const *,_GUID const &,void * *);
long CItemsViewEventQueue_CreateInstance(HWND__ *,IEventQueue * *);
long CItemsViewPrefetcher_CreateInstance(IUnknown *,_GUID const &,void * *);
long CMultipleValues_CreateInstance(tagPROPVARIANT const *,_tagpropertykey const &,_GUID const &,void * *);
long CNscChangeNotifyQueueItem_CreateInstance(_ITEMIDLIST_ABSOLUTE const *,long,_ITEMIDLIST_ABSOLUTE const *,_ITEMIDLIST_ABSOLUTE const *,_TREEITEM *,NSCITEMINFO *,CHANGENOTIFY_CALLBACK_FLAGS,CQueueItem * *);
long CNscDropTargetWrapper_Create(CNscTree *,IShellItem *,INameSpaceTreeControlDropHandler *,int,int,_GUID const &,void * *);
long CNscEnumQueueItem_CreateInstance(_ITEMIDLIST_ABSOLUTE const *,_TREEITEM *,NSCITEMINFO *,unsigned long,CDPA<ORDERITEM,CTContainer_PolicyUnOwned<ORDERITEM> > *,_ITEMID_CHILD const *,unsigned long,unsigned int,int,int,int,int,CQueueItem * *);
long CNscInfoTipQueueItem_CreateInstance(_TREEITEM *,NSCITEMINFO *,unsigned short const *,unsigned int,CQueueItem * *);
long CNscLock_Create(CNscTree *,CNscLock * *);
long CNscOverlayQueueItem_CreateInstance(_TREEITEM *,NSCITEMINFO *,int,unsigned int,CQueueItem * *);
long COrderList_GetOrderList(_DPA * *,_ITEMIDLIST_ABSOLUTE const *,IShellFolder *);
long COrderList_SetOrderList(_DPA *,_ITEMIDLIST_ABSOLUTE const *,IShellFolder *);
long CPrefetcherEventSink_CreateInstance(_GUID const &,void * *);
long CPropertyValue_CreateInstance(tagPROPVARIANT const &,_tagpropertykey const &,_GUID const &,void * *);
long CSearchBoxTextProvider_Create(DirectUI::ElementProvider *,IUnknown * *);
long CSearchBoxValueProvider_Create(DirectUI::ElementProvider *,IUnknown * *);
long CSearchEditTextHost_CreateInstance(CSearchEditBoxBase *,_GUID const &,void * *);
long CVirtualUIGroupItemSpy_CreateInstance(IVirtualUIGroupItem *,_GUID const &,void * *);
long CachedSTAObject_SetObject(unsigned long,IUnknown *);
long CanShowPaneAux(unsigned short const *,_GUID const &,_GUID,_GUID const &,IUnknown *,int *);
long CenteringLayout_CreateInstance(LAYOUTPARAM const *,unsigned int,DirectUI::Value * *);
long CheckAndOpenRestrictionKey(HKEY__ *,unsigned short const *,unsigned short const *,HKEY__ * *);
long CheckForExpandOnce(HWND__ *,_TREEITEM *);
long CloneChildFilters(_ITEMIDLIST_ABSOLUTE const *,_ITEMIDLIST_ABSOLUTE const *,_ITEMIDLIST_ABSOLUTE * *);
long CommonAdjustLayout(BROWSERLAYOUTTYPE,IUnknown *,IUnknown * *);
long CompareItems(IShellItem *,IShellItem *,COMPARE_ITEMS_RESULT *);
long ContextMenu_DeleteCommandByName(IContextMenu *,HMENU__ *,unsigned int,unsigned short const *);
long ContextMenu_GetCommandStringVerb(IContextMenu *,unsigned int,unsigned short *,int);
long Convert32bppIWICBitmapSourceToHBITMAP(IWICBitmapSource *,HBITMAP__ * *);
long ConvertHBITMAPToWICBitmap(IWICImagingFactory *,HBITMAP__ *,WICBitmapAlphaChannelOption,IWICBitmapSource * *);
long ConvertIDListEnumMode(FOLDER_ENUM_MODE,_ITEMIDLIST_ABSOLUTE const *,_ITEMIDLIST_ABSOLUTE * *);
long ConvertIWICBitmapSourcePixelFormat(IWICBitmapSource *,_GUID,IWICImagingFactory *,IWICBitmapSource * *);
long ConvertIWICBitmapSourceTo32bppHBITMAP(IWICBitmapSource *,IWICImagingFactory *,HBITMAP__ * *);
long ConvertItemEnumMode(FOLDER_ENUM_MODE,IShellItem *,int,IShellItem * *);
long ConvertItemToUNCPath(IShellItem *,unsigned short * *);
long ConvertTopViewIDList(_ITEMIDLIST_ABSOLUTE const *,unsigned short const *,_ITEMIDLIST_ABSOLUTE * *);
long Create32BitHBITMAP(HDC__ *,tagSIZE const *,void * *,HBITMAP__ * *);
long CreateAndInitActive<UIExpandoButton>(unsigned int,DirectUI::Element *,unsigned long *,DirectUI::Element * *,int);
long CreateAndInitActive<UIGroupHeader>(unsigned int,DirectUI::Element *,unsigned long *,DirectUI::Element * *,int);
long CreateAndInitActive<UISubsetFooter>(unsigned int,DirectUI::Element *,unsigned long *,DirectUI::Element * *,int);
long CreateAndInitActive<UIViewHeader>(unsigned int,DirectUI::Element *,unsigned long *,DirectUI::Element * *,int);
long CreateCommandGalleryFromExplorerCommand(IExplorerCommand *,unsigned int,unsigned int,_GUID const &,void * *);
long CreateCommonFrame(IShellFolder *,tagLAYOUTTYPE,_GUID const &,void * *);
long CreateDUILayout(unsigned short const *,unsigned __int64,LAYOUTPARAM const *,unsigned int,DirectUI::Value * *);
long CreateDefaultTaskScheduler(_GUID const &,void * *);
long CreateDisabledCommandHandler(_GUID const &,void * *);
long CreateExplorerRibbon(_GUID const &,void * *);
long CreateFileSystemBindData(_GUID const &,void * *);
long CreateGenericTabsetHandler(_GUID const &,void * *);
long CreateInstance_IEnumConnectionPoints(IEnumConnectionPoints * *,unsigned long,...);
long CreateItemGalleryFromCommandStoreID(unsigned short const *,unsigned int,_GUID const &,void * *);
long CreateItemGalleryFromExplorerCommand(IExplorerCommand *,unsigned int,_GUID const &,void * *);
long CreateNoOpCommandHandler(_GUID const &,void * *);
long CreatePropertySetForCommand(int,int,UI_COMMANDTYPE,_GUID const &,void * *);
long CreatePropertySetForItem(int,unsigned short const *,IUIImage *,_GUID const &,void * *);
long CreatePropertySetForRecentItem(unsigned short const *,unsigned short const *,bool,_GUID const &,void * *);
long CreatePropertyValue(tagPROPVARIANT const &,_tagpropertykey const &,_GUID const &,void * *);
long CreatePublicTravelLog(IShellBrowserService *,ITravelLogEx *,ITravelLogStg * *);
long CreateRecentItemsPropertySetForShellItem(IShellItem2 *,bool,_GUID const &,void * *);
long CreateRibbonCommandHandlerFromExplorerCommand(IExplorerCommand *,unsigned int,_GUID const &,void * *);
long CreateRibbonTelemetry(IUIFramework *,_GUID const &,void * *);
long CreateSafeArrayFromObjectCollection(IObjectCollection *,tagSAFEARRAY * *);
long CreateSimpleIDListFromPath(unsigned short const *,_ITEMIDLIST_ABSOLUTE * *);
long CreateTestabilityUICollectionWithGrowBy(int,_GUID const &,void * *);
long CreateVerbStateTask(IUnknown *,IVerbStateTaskCallBack *,IShellItemArray *,HKEY__ *,unsigned short const *,unsigned int,_GUID const &,void * *);
long CreateViewFrame(IViewFrameHost *,tagRECT *,HWND__ * *,IViewFrame * *);
long DUI_AdviseCollectionChangedEventsInternal(IItemCollection *,DirectUI::Element *,IFirstPageResults *,ADVISE_TYPE,void *,long (*)(void *,IUnknown *,int,void *,tagEVENTACTION *),long (*)(void *,IUnknown *,void *),__int64 *);
long DUI_CreateParserFromResource(HINSTANCE__ *,unsigned int,DUI_PARSER_LOAD_FLAGS,DEVICE_SCALE_FACTOR,DirectUI::DUIXmlParser * *);
long DUI_CreateParserWithCallbackFromResource(HINSTANCE__ *,unsigned int,DEVICE_SCALE_FACTOR,DirectUI::DUIXmlParser * *,DirectUI::Value * (*)(unsigned short const *,void *),void *);
long DUI_GetElementRootHWNDElement(DirectUI::Element *,DirectUI::HWNDElement * *);
long DUI_GetRootRelativeBounds(DirectUI::Element *,DUI_COORDINATES_SYSTEM,tagRECT *);
long DUI_IncreaseFontPointSizeForDPI(DirectUI::Element *,int,int);
long DUI_SetElementIcon(DirectUI::Element *,HICON__ *,ImageRtlMode);
long DUI_SetLocation(DirectUI::Element *,DUI_COORDINATES_SYSTEM,int,int);
long DUI_UiaRaiseAutomationEvent(DirectUI::Element *,int);
long DUI_UiaRaiseExpandStateChangeEvent(DirectUI::Element *,bool,bool);
long DUI_UiaRaisePropertyChangeEvent(DirectUI::Element *,int,tagVARIANT const &,tagVARIANT const &);
long DUI_UiaRaiseScrollbarPosChangeEvent(LineScrollbarBase *,double,double);
long DataObj_GetBlob(IDataObject *,unsigned int,void *,unsigned int);
long DataObj_GetEnterpriseId(IDataObject *,unsigned short * *);
long DataObj_GetIDList(IDataObject *,DATAOBJ_GET_ITEM_FLAGS,_ITEMIDLIST_ABSOLUTE * *);
long DataObj_GetPath(IDataObject *,unsigned short *,unsigned int);
long DataObj_GetString(IDataObject *,unsigned short,unsigned short * *);
long DataObj_SetBlob(IDataObject *,unsigned int,void const *,unsigned int);
long DeskBarApp_Create(_GUID const &,void * *);
long DetectSpecialUrlHacks(unsigned short const *);
long DisplayNameOfAsString(IShellFolder *,_ITEMIDLIST_RELATIVE const *,unsigned long,unsigned short * *);
long DoISFBandStuff(ITrackShellMenu *,IUnknown *);
long DoInvokeParamHelper(IUnknown *,IConnectionPoint *,int *,void * *,long,unsigned int,...);
long DoesStorageProviderShowState(IStorageProviderInfo *,bool *);
long DownloadLocalCopies(LCFLAGS,HWND__ *,IShellItemArray *,IShellItemArray * *);
long ECFCreateInstance(IClassFactory *,IUnknown *,_GUID const &,void * *);
long ECFGetClassObject(EASYCLASSFACTORY const *,int,_GUID const &,_GUID const &,void * *);
long ECFLockServer(IClassFactory *,int);
long ECFQueryInterface(IClassFactory *,_GUID const &,void * *);
long ElementCast<UICollection>(DirectUI::Element *,UICollection * *);
long ElementCast<UIGroupItem>(DirectUI::Element *,UIGroupItem * *);
long ElementCast<UIItem>(DirectUI::Element *,UIItem * *);
long ElementCast<UIItemsView>(DirectUI::Element *,UIItemsView * *);
long ElementCast<UIRenameTextElement>(DirectUI::Element *,UIRenameTextElement * *);
long ElementCast<UITryHarder>(DirectUI::Element *,UITryHarder * *);
long ElementCast<UITryHarderButton>(DirectUI::Element *,UITryHarderButton * *);
long EnsureRealized(IItem *);
long ExpandAndResolveCondition(ICondition *,IPropertyKeyStore *,int,int,int,unsigned short const *,_GUID const &,void * *);
long FeatureEnabledLayout_CreateInstance(LAYOUTPARAM const *,unsigned int,DirectUI::Value * *);
long FileCabinet_CreateViewWindow2(IShellBrowser *,tagFolderSetDataBase *,IShellView *,IShellView *,tagRECT *,HWND__ * *);
long FirstVisibleElementOnlyLayout_CreateInstance(LAYOUTPARAM const *,unsigned int,DirectUI::Value * *);
long FloatingHeaderLayout_CreateInstance(LAYOUTPARAM const *,unsigned int,DirectUI::Value * *);
long ForceNSCOverlayPresent(IImageList2 *,int);
long GetBrowserSettingsPropertyBag(_ITEMIDLIST_ABSOLUTE const *,unsigned short const *,unsigned long,_GUID const &,void * *);
long GetCanonicalCommand(unsigned short const *,_GUID const &,void * *);
long GetContainingGrid(DirectUI::Element *,IRawElementProviderSimple * *);
long GetITBarStream(IUnknown *,unsigned long,IStream * *);
long GetIdentityFolder(IShellFolder *,IBindCtx *,_GUID const &,void * *);
long GetIdentityItemName(IShellItem *,_SIGDN,unsigned short * *);
long GetImageSizeForItemGallery(unsigned int,HWND__ *,tagSIZE *);
long GetInitializedDestinationList(DestListItemType,IAutomaticDestinationList * *,IStream *);
long GetItemFromTreeIndex(IItem *,ICollectionCache *,tagINDEX_AND_VERSION *,unsigned int,IItem * *);
long GetItemFromUIA(IRawElementProviderSimple *,IItem *,ICollectionCache *,IItem * *);
long GetItemNamespaceCLSID(IShellItem *,_GUID *);
long GetKeyArrayFromPropertyKeyStore(IPropertyKeyStore *,_tagpropertykey * *,unsigned int *);
long GetKnownFolderId(IShellItem *,_GUID *);
long GetKnownFolderIdFromPath(unsigned short const *,_GUID *);
long GetLayoutDefinitionFromItem(GETLAYOUTREASON,IShellItem *,HWND__ *,IFrameLayoutDefinition * *);
long GetLeafIndexFromItem(IItem *,ICollectionCache *,IFirstPageResults *,IItem *,unsigned int *);
long GetLibraryAncestor(IShellItem *,int,IShellItem * *);
long GetLocalCopyDownloadFileOperations(HWND__ *,LCFLAGS,IFileOperation * *);
long GetMRUEntry(HKEY__ *,unsigned long,unsigned short *,unsigned long);
long GetMatchedFilterFromIDList(IShellFolder3 *,_ITEMID_CHILD const *,FC_FLAGS,IFilterCondition * *);
long GetMostRecentNonSearchTravelIndex(IUnknown *,int *);
long GetNonFilteredRoot(_ITEMIDLIST_ABSOLUTE const *,int,_ITEMIDLIST_ABSOLUTE * *);
long GetParentItemsAndCollections(IItem *,ICollectionCache *,IItem *,CCoSimpleArray<ATL::CComPtr<IItem>,4294967294,CSimpleArrayStandardCompareHelper<ATL::CComPtr<IItem> > > *,CCoSimpleArray<ATL::CComPtr<IItemCollection>,4294967294,CSimpleArrayStandardCompareHelper<ATL::CComPtr<IItemCollection> > > *);
long GetParsingBindCtx(IShellFolder2 *,_ITEMID_CHILD const *,int,IBindCtx * *);
long GetPerceivedTypeFromItem(IShellItem *,tagPERCEIVED *);
long GetPersistedFrame(IStream *,PERSISTEDFRAME *,_ITEMIDLIST_ABSOLUTE * *);
long GetPidlArrayFromObjectArray(IObjectArray *,CCoSimpleArray<ATL::CComPtr<IChildId>,4294967294,CSimpleArrayStandardCompareHelper<ATL::CComPtr<IChildId> > > &,CCoSimpleArray<_ITEMID_CHILD const *,4294967294,CSimpleArrayStandardCompareHelper<_ITEMID_CHILD const *> > &);
long GetPinnedStateByIndex(tagSAFEARRAY *,unsigned int,bool *);
long GetPolicyShellFolderTypeFromItem(IShellItem *,_GUID *);
long GetProviderCLSID(ILocationDescription *,_GUID *);
long GetRealIDL(IBindCtx *,IShellFolder *,_ITEMID_CHILD const *,_ITEMID_CHILD * *);
long GetResIdFromPropMap(unsigned short const *,IItem *,unsigned short * *);
long GetRestrictionAccessHKEY(unsigned short const *,unsigned short const *,HKEY__ * *);
long GetScopeFromSearch(IShellItem *,IShellItem * *);
long GetScopeFromUnknown(IUnknown *,_GUID const &,void * *);
long GetScopesFromSearch(IShellItem *,IShellItemArray * *);
long GetSearchText(IUnknown *,unsigned short *,unsigned int);
long GetShellFolderType(_ITEMIDLIST_ABSOLUTE const *,_GUID *);
long GetShellFolderTypeFromItem(IShellItem *,_GUID *);
long GetShellFolderTypeFromRegistry(IShellFolder *,_GUID *);
long GetSmartDetailsPropList(IItem *,int,tagACCESS_MODE,IPropertyDescriptionList * *);
long GetSortColumnsFromPropertyDescriptionList(IPropertyDescriptionList *,SORTCOLUMN *,unsigned int,unsigned int *);
long GetSystemImageList(_GUID const &,void * *);
long GetTilesDetailsPropList(IItem *,tagACCESS_MODE,IPropertyDescriptionList * *);
long GetTopViewSubKey(_ITEMIDLIST_ABSOLUTE const *,unsigned short *,unsigned int,int *);
long GetTopWBConnectionPoints(IUnknown *,IConnectionPoint * *,IConnectionPoint * *);
long GetTrayIface(_GUID const &,void * *);
long GetValueFromMap(unsigned short const *,unsigned short const *,unsigned short * *);
long GetWBConnectionPoints(IUnknown *,IConnectionPoint * *,IConnectionPoint * *);
long GetWindowFromSite(IUnknown *,HWND__ * *);
long GetWordWheelFromTravelEntry(IUnknown *,unsigned short *,unsigned int);
long HRESULTFromLastErrorError();
long HorizontalBorderLayout_CreateInstance(LAYOUTPARAM const *,unsigned int,DirectUI::Value * *);
long IC_GetIndicesToLeafItemFromRoot(IItemCollection *,IItem *,tagINDEX_AND_VERSION *,unsigned int,unsigned int *,unsigned int *);
long IC_GetItem(IItemCollection *,unsigned int,unsigned int,_GUID const &,void * *,unsigned int *);
long IContextMenu_SetInvokeVerbs(IContextMenu *,unsigned short const * const * const,unsigned int);
long IECreateFromIUri(unsigned int,IUri *,_ITEMIDLIST_ABSOLUTE * *);
long IERegGetValue(unsigned int,unsigned long *,void *,unsigned long *,unsigned long *);
long IERegGetValueInternal(unsigned int,unsigned long *,void *,unsigned long *,unsigned long *,unsigned short const *,unsigned short const *);
long IERegQueryInfoKey(unsigned short const *,int,unsigned long *,unsigned long *);
long IERegValueToBoolW(unsigned long,unsigned short const *,int &);
long IItem_Compare(IItem *,IItem *,tagACCESS_MODE,ITEM_COMPARE_METHOD,int *);
long IItem_QIorBind(IItem *,_GUID const &,void * *);
long IShellExtInit_Initialize(IUnknown *,_ITEMIDLIST_ABSOLUTE const *,IDataObject *,HKEY__ *);
long IShellItem2_GetInfoTip(IShellItem2 *,unsigned short *,unsigned long);
long IShellItemArray_GetEstimatedCount(IShellItemArray *,unsigned long *);
long IShellItem_GetCachedFindData(IShellItem *,_WIN32_FIND_DATAW *);
long IShellItem_GetFilePlaceholderStatus(IShellItem *,unsigned long *);
long IURLQualifyWithContext(unsigned short const *,unsigned long,unsigned long,unsigned short *,int *,int *,ISearchContext *);
long IUnknown_GetAmbientProperty(IUnknown *,long,unsigned short,void *);
long IUnknown_GetClientDB(IUnknown *,IUnknown * *);
long IUnknown_GetCurrentItem(IUnknown *,IShellItem * *);
long IUnknown_GetExplorerPaneState(IUnknown *,_GUID,unsigned long *);
long IUnknown_GetSelection(IUnknown *,_GUID const &,void * *);
long IUnknown_LoadFromStream(IStream *,IUnknown *);
long IUnknown_LoadKnownImplFromStream(IStream *,_GUID const * const *,unsigned int,_GUID const &,void * *);
long IUnknown_PrepareForCaching(IUnknown *);
long IUnknown_QueryCurrentItem(IUnknown *,_GUID const &,void * *);
long IUnknown_QueryCurrentView(IUnknown *,_GUID const &,void * *);
long IUnknown_QueryObject(IUnknown *,_GUID const &,_GUID const &,void * *);
long IUnknown_QueryServiceObject(IUnknown *,_GUID const &,_GUID const &,_GUID const &,void * *);
long IUnknown_QueryShellBrowser(IUnknown *,_GUID const &,void * *);
long IUnknown_SaveKnownImplToStream(IStream *,_GUID const * const *,unsigned int,IUnknown *);
long IUnknown_SaveToStream(IStream *,int,IUnknown *);
long IUnknown_SeekToZero(IUnknown *);
long IUnknown_SetSelection(IUnknown *,IShellItemArray *);
long IVGridProvider_Create(DirectUI::ElementProvider *,IUnknown * *);
long IVInvokeProvider_Create(DirectUI::ElementProvider *,IUnknown * *);
long InitPropVariantFromPropVariantDSA(CDSA<tagPROPVARIANT> *,tagPROPVARIANT *);
long InitPropVariantFromString(unsigned short const *,tagPROPVARIANT *);
long InitVariantFromString(unsigned short const *,tagVARIANT *);
long InitVariantFromUnknown(IUnknown *,tagVARIANT *);
long InvokeURLSearchHook(IURLSearchHook *,unsigned short const *,unsigned short *,unsigned int,ISearchContext *);
long IsInSearchHomeFolder(IUnknown *,int *);
long ItemCollection_GetGroupByKey(IItemCollection *,_tagpropertykey *);
long ItemsView_ParserCreateElement<DirectUI::Element>(unsigned short const *,DirectUI::Element *,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
long ItemsView_ParserCreateElement<LineScroller>(unsigned short const *,DirectUI::Element *,DirectUI::Element *,unsigned long *,LineScroller * *);
long ItemsView_ParserCreateElement<UIBase>(unsigned short const *,DirectUI::Element *,DirectUI::Element *,unsigned long *,UIBase * *);
long ItemsView_ParserCreateElement<UIItem>(unsigned short const *,DirectUI::Element *,DirectUI::Element *,unsigned long *,UIItem * *);
long ItemsView_ParserCreateElement<UIItemsView>(unsigned short const *,DirectUI::Element *,DirectUI::Element *,unsigned long *,UIItemsView * *);
long ItemsView_ParserCreateElement<UIMarqueeSelector>(unsigned short const *,DirectUI::Element *,DirectUI::Element *,unsigned long *,UIMarqueeSelector * *);
long ItemsView_ParserCreateElement<UIProperty>(unsigned short const *,DirectUI::Element *,DirectUI::Element *,unsigned long *,UIProperty * *);
long ItemsView_ParserCreateElement<UIRenameTextElement>(unsigned short const *,DirectUI::Element *,DirectUI::Element *,unsigned long *,UIRenameTextElement * *);
long ItemsView_ParserCreateElement<UIRootItem>(unsigned short const *,DirectUI::Element *,DirectUI::Element *,unsigned long *,UIRootItem * *);
long ItemsView_ParserCreateElement<UISmartProperty>(unsigned short const *,DirectUI::Element *,DirectUI::Element *,unsigned long *,UISmartProperty * *);
long ItemsView_ParserCreateElement<UITryHarder>(unsigned short const *,DirectUI::Element *,DirectUI::Element *,unsigned long *,UITryHarder * *);
long ItemsView_ParserCreateElement<UITryHarderButton>(unsigned short const *,DirectUI::Element *,DirectUI::Element *,unsigned long *,UITryHarderButton * *);
long LaunchExplorerWindowAsync(IETHREADPARAM *);
long LoadConditionFromStream(IStream *,_GUID const &,void * *);
long LoadTopView(ITopViewAwareItem *,unsigned short const *,TOPVIEWKEY *);
long MarkItemAsSimple(IShellItem *);
long MarshalToGIT(IUnknown *,_GUID const &,unsigned long *);
long ModifyOrRemoveFilterHelper(_ITEMIDLIST_ABSOLUTE *,IFilterCondition *,CDPA<_ITEMID_CHILD,CTContainer_PolicyUnOwned<_ITEMID_CHILD> > *,_ITEMIDLIST_ABSOLUTE * *);
long OrderItem_LoadFromStream(_DPASTREAMINFO *,IStream *,void *);
long OrderItem_SaveToStream(_DPASTREAMINFO *,IStream *,void *);
long OrderItem_SaveToStreamWorker(ORDERITEM2 const *,tagOISTREAMITEM const *,IStream *,IShellFolder2 const *);
long OrderList_LoadFromStream(IStream *,_DPA * *,IShellFolder *);
long OrderList_SaveToStream(IStream *,_DPA *,IShellFolder *);
long OverflowLayout_CreateInstance(LAYOUTPARAM const *,unsigned int,DirectUI::Value * *);
long ParseCustomLayout(unsigned short const *,DirectUI::Value * *);
long PathConvertToUNC(unsigned short const *,unsigned short * *);
long PropVariantToPropVariantDSA(tagPROPVARIANT const &,CDSA<tagPROPVARIANT> *);
long RebuildMatchedFilterIDList(_ITEMIDLIST_ABSOLUTE const *,CDPA<_ITEMID_CHILD,CTContainer_PolicyUnOwned<_ITEMID_CHILD> > *,IFilterCondition *,_ITEMIDLIST_ABSOLUTE * *);
long ResolveInitialBrowserLocation(HWND__ *,IETHREADPARAM *,int *);
long ResultFromKnownLastError();
long SHCoInitialize();
long SHCompareIDs(IShellFolder *,__int64,_ITEMIDLIST_RELATIVE const *,_ITEMIDLIST_RELATIVE const *,int *);
long SHCopyItemArrayConvertLinksToTargets(IShellItemArray *,IUnknown *,bool,ARRAY_LINK_RESOLUTION_BEHAVIOR,IShellItemArray * *);
long SHCreateFileOperation(HWND__ *,unsigned long,_GUID const &,void * *);
long SHCreateLeafCondition(_tagpropertykey const &,tagCONDITION_OPERATION,tagPROPVARIANT const &,unsigned short const *,_GUID const &,void * *);
long SHCreateOriginalItemBindCtx(_ITEMIDLIST_ABSOLUTE const *,IShellFolder *,_ITEMID_CHILD const *,unsigned long,REPARSE_PARTIAL_IDLIST_MODE,IBindCtx * *);
long SHCreateSingleKindList(unsigned short const *,_GUID const &,void * *);
long SHDisplayNameFromScopeAndSubQueries(IScope *,IShellItemArray *,unsigned long,unsigned long,_SIGDN,unsigned short * *);
long SHDoesComCatCacheExist(_GUID const &,int);
long SHEnumClassesImplementingCATID(_GUID const &,long (*)(_GUID const &,_GUID const &,__int64),__int64);
long SHGetComparisonInfo(ICondition *,_tagpropertykey *,tagCONDITION_OPERATION *,tagPROPVARIANT *);
long SHGetFiltersFromIDList(_ITEMID_CHILD const *,IFilterCondition * * *,unsigned int *);
long SHGetItemArrayFromDataObj(IDataObject *,tagSTGMEDIUM *,_IDA * *);
long SHGetItemArrayFromDataObjEx(IDataObject *,unsigned short,tagSTGMEDIUM *,_IDA * *);
long SHGetItemArrayOfSelection(IUnknown *,IShellItemArray *,SHICOIA_FLAGS,IShellItemArray * *);
long SHGetMachineGUID(_GUID *,unsigned short *,unsigned int);
long SHGetNameAndFlagsW(_ITEMIDLIST_ABSOLUTE const *,unsigned long,unsigned short *,unsigned int,unsigned long *);
long SHGetTargetItem(IShellItem *,_GUID const &,void * *);
long SHILClone(_ITEMIDLIST_RELATIVE const *,_ITEMIDLIST_RELATIVE * *);
long SHILCloneFirst(_ITEMIDLIST_RELATIVE const *,_ITEMID_CHILD * *);
long SHILCombine(_ITEMIDLIST_ABSOLUTE const *,_ITEMIDLIST_RELATIVE const *,_ITEMIDLIST_ABSOLUTE * *);
long SHInvokeCommandOnSelection(IUnknown *,IShellItemArray *,SHICOIA_FLAGS,char const *);
long SHKeepDUIInitializedForThread(unsigned int);
long SHLoadFilterFromStream(IStream *,_GUID const &,void * *);
long SHMapCmdIDToVerb(unsigned __int64,unsigned int,ICIVERBTOIDMAP const *,char *,unsigned int);
long SHNextObjectFromEnumUnknown(IEnumUnknown *,_GUID const &,void * *);
long SHRegGetDWORD(HKEY__ *,unsigned short const *,unsigned short const *,unsigned long *);
long SHRegGetGUID(HKEY__ *,unsigned short const *,unsigned short const *,_GUID *);
long SHRegSetBOOL(HKEY__ *,unsigned short const *,unsigned short const *,int);
long SHResolveCondition(ICondition *,_GUID const &,void * *);
long SHResolveConditionEx(ICondition *,STRUCTURED_QUERY_RESOLVE_OPTION,_SYSTEMTIME const *,_GUID const &,void * *);
long SHSysAllocString(unsigned short const *,unsigned short * *);
long SHWriteImplementingClassesOfCategory(_GUID const &);
long SHWriteRequiringClassesOfCategory(_GUID const &);
long SaveTopView(IUnknown *,IShellItem *,unsigned short const *);
long SearchBoxHasFocus(IUnknown *,int *);
long SearchCommandWithParam_CreateInstance<CSearchStaticFilterExplorerCommand,_tagpropertykey>(IUnknown *,_GUID const &,void * *,_tagpropertykey);
long SearchCommand_CreateInstance<CSearchClearMruCommand>(IUnknown *,_GUID const &,void * *);
long SearchCommand_CreateInstance<CSearchCloseTabCommand>(IUnknown *,_GUID const &,void * *);
long SearchCommand_CreateInstance<CSearchMRUGallery>(IUnknown *,_GUID const &,void * *);
long SearchCommand_CreateInstance<CSearchMorePropertiesCommand>(IUnknown *,_GUID const &,void * *);
long SearchCommand_CreateInstance<CSearchSaveSearchCommand>(IUnknown *,_GUID const &,void * *);
long SearchCommand_CreateInstance<CSearchSendToGalleryCommand>(IUnknown *,_GUID const &,void * *);
long SendWindowsErrorReport(unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short * *,unsigned int);
long SetSafeArray<IRawElementProviderSimple *>(tagSAFEARRAY *,long,unsigned short,IRawElementProviderSimple * *);
long SetSearchOptionValue(unsigned long,int);
long SetSearchText(IUnknown *,unsigned short const *);
long SplitAtMatchedFilter(IShellItem *,_ITEMIDLIST_ABSOLUTE const *,unsigned int,CDPA<_ITEMID_CHILD,CTContainer_PolicyUnOwned<_ITEMID_CHILD> > *,_ITEMIDLIST_ABSOLUTE * *);
long StringCchCatExW(unsigned short *,unsigned __int64,unsigned short const *,unsigned short * *,unsigned __int64 *,unsigned long);
long StringCchCatW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchCopyA(char *,unsigned __int64,char const *);
long StringCchCopyExW(unsigned short *,unsigned __int64,unsigned short const *,unsigned short * *,unsigned __int64 *,unsigned long);
long StringCchCopyNExW(unsigned short *,unsigned __int64,unsigned short const *,unsigned __int64,unsigned short * *,unsigned __int64 *,unsigned long);
long StringCchCopyNW(unsigned short *,unsigned __int64,unsigned short const *,unsigned __int64);
long StringCchCopyW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchLengthW(unsigned short const *,unsigned __int64,unsigned __int64 *);
long StringCchPrintfW(unsigned short *,unsigned __int64,unsigned short const *,...);
long StringCchVPrintfW(unsigned short *,unsigned __int64,unsigned short const *,char *);
long TResourceStringAllocCopyEx<unsigned short *>(HINSTANCE__ *,unsigned int,unsigned short,long (*)(void *,unsigned __int64,unsigned short * *),void *,unsigned short * *);
long ToolbarMenu_Popup(HWND__ *,tagRECT *,IUnknown *,HWND__ *,int,unsigned long);
long TryURLSearchHooks(unsigned short const *,unsigned short *,unsigned int,ISearchContext *);
long UIColumnHeaderExpandCollapseProvider_Create(DirectUI::ElementProvider *,IUnknown * *);
long UIGroupHeaderExpandCollapseProvider_Create(DirectUI::ElementProvider *,IUnknown * *);
long UIGroupItemExpandCollapseProvider_Create(DirectUI::ElementProvider *,IUnknown * *);
long UIInitPropertyFromBoolean<_tagpropertykey>(_tagpropertykey const &,int,tagPROPVARIANT *);
long UIInitPropertyFromString<_tagpropertykey>(_tagpropertykey const &,unsigned short const *,tagPROPVARIANT *);
long UIInitPropertyFromUInt32<_tagpropertykey>(_tagpropertykey const &,unsigned int,tagPROPVARIANT *);
long UIItemGridItemProvider_Create(DirectUI::ElementProvider *,IUnknown * *);
long UIItemScrollItemProvider_Create(DirectUI::ElementProvider *,IUnknown * *);
long UIItemSelectionItemProvider_Create(DirectUI::ElementProvider *,IUnknown * *);
long UIItemToggleProvider_Create(DirectUI::ElementProvider *,IUnknown * *);
long UIItemValueProvider_Create(DirectUI::ElementProvider *,IUnknown * *);
long UIItemsViewItemContainerProvider_Create(DirectUI::ElementProvider *,IUnknown * *);
long UIItemsViewMultipleViewProvider_Create(DirectUI::ElementProvider *,IUnknown * *);
long UIItemsViewScrollProvider_Create(DirectUI::ElementProvider *,IUnknown * *);
long UIItemsViewSelectionProvider_Create(DirectUI::ElementProvider *,IUnknown * *);
long UIItemsViewTableProvider_Create(DirectUI::ElementProvider *,IUnknown * *);
long UIPropertyGridItemProvider_Create(DirectUI::ElementProvider *,IUnknown * *);
long UIPropertyTableItemProvider_Create(DirectUI::ElementProvider *,IUnknown * *);
long UIPropertyValueProvider_Create(DirectUI::ElementProvider *,IUnknown * *);
long UnMarshalFromGIT(unsigned long,_GUID const &,void * *);
long UnadviseDataItemEvents(__int64 *);
long UnadviseDataItemEventsWithFirstPage(IFirstPageResults *,__int64 *);
long ValidateItem(DestListItemType,HWND__ *,IShellItem *,IShellItem * *);
long ViewAreaAwareLayout_CreateInstance(LAYOUTPARAM const *,unsigned int,DirectUI::Value * *);
long _AllocArray<unsigned short,CTCoAllocPolicy>(void *,unsigned long,unsigned __int64,unsigned short * *);
long _AllocArray<unsigned short,CTLocalAllocPolicy>(void *,unsigned long,unsigned __int64,unsigned short * *);
long _AllocStringWorker<CTCoAllocPolicy>(void *,unsigned long,unsigned short const *,unsigned __int64,unsigned __int64,unsigned short * *);
long _AllocStringWorker<CTLocalAllocPolicy>(void *,unsigned long,unsigned short const *,unsigned __int64,unsigned __int64,unsigned short * *);
long _AppendNext(unsigned short const *,unsigned short const *,unsigned short *,unsigned __int64,int,unsigned long,unsigned short * *,unsigned __int64 *);
long _BindUntilInterfaceAndConvNeeded(_ITEMIDLIST_ABSOLUTE const *,FOLDER_ENUM_MODE,_ITEMIDLIST_RELATIVE * *,_GUID const &,void * *);
long _ComCatCacheFromDSA(_DSA *,unsigned char * *,unsigned long *);
long _ConvertMultiToNavigationItem(IShellItem *,int,_GUID const &,void * *);
long _ConvertToNavigationItem(IShellItem *,int,_GUID const &,void * *);
long _ConvertToViewResultItem(IShellItem *,int,_GUID const &,void * *);
long _CreateAndInitAutoComplete(HWND__ *,IAutoComplete2 * *);
long _CreateExplorerSchedulerCB(_GUID const &,void * *);
long _CreateFileSysBindCtx(IBindCtx *,_WIN32_FIND_DATAW const *,IBindCtx * *);
long _CreateMruDataList(IMruDataList * *);
long _CreatePropertyBagBindCtx<unsigned long>(IBindCtx *,unsigned short const *,unsigned long,IBindCtx * *);
long _DUI_CreateParserFromResourceNoCallback(HINSTANCE__ *,unsigned int,DEVICE_SCALE_FACTOR,DirectUI::DUIXmlParser * *);
long _ElementWalkWorker<CUIItemWalkCBWorker>(DirectUI::Element *,void *,CUIItemWalkCBWorker &);
long _ElementWalkWorker<UIItemsViewSelectionProxy::CSelectionWalkCB>(DirectUI::Element *,void *,UIItemsViewSelectionProxy::CSelectionWalkCB &);
long _EnumerateGuids(IEnumGUID *,_DSA * *);
long _GetAttributesFromFolderAndIDList(IShellFolder *,_ITEMIDLIST_RELATIVE const *,IBindCtx *,unsigned long,unsigned long *);
long _GetCachedSTAObject(unsigned long,int *,CCachedSTAObject * *);
long _GetContextMenuFromView(IUnknown *,SHICOIA_FLAGS,IContextMenu * *);
long _GetIDListFromObject(IUnknown *,_ITEMIDLIST_ABSOLUTE * *);
long _GetPropertyFilterFromIDList(_ITEMIDLIST_ABSOLUTE const *,_tagpropertykey const &,unsigned int *,IFilterCondition * *);
long _GetScopeItemName(IScopeItem *,_SIGDN,_tagpropertykey,unsigned short * *);
long _GetSortColumnsFromFolder(_ITEMIDLIST_ABSOLUTE const *,CCoSimpleArray<SORTCOLUMN,4294967294,CSimpleArrayStandardCompareHelper<SORTCOLUMN> > *,unsigned int *);
long _ILCombineAndFree(_ITEMIDLIST_RELATIVE *,_ITEMIDLIST_RELATIVE *,_ITEMIDLIST_RELATIVE * *);
long _InvokeCommandOnChildIDs(HWND__ *,IUnknown *,IShellFolder *,_ITEMID_CHILD const * const *,unsigned int,unsigned int,unsigned int,char const *,unsigned short const *);
long _IsSearchResultFolder(IShellFolder *,bool *);
long _MakeComCatCacheKey(_GUID const &,unsigned short *,unsigned long);
long _MergeBS(IDropTarget *,IBandSite *);
long _PostProcessLayoutDoneEnumCallback(UIItem *,void *);
long _SHEnumGUIDsWithCallback(IEnumGUID *,long (*)(_GUID const &,__int64),__int64);
long _ScaleBitmap(HBITMAP__ *,unsigned int,HBITMAP__ * *);
long _SetDropHighlightCallback(UIItem *,void *);
long _SetFocusCallback(UIItem *,void *);
long _TruncateShellItemArray(IShellItemArray *,unsigned long,IShellItemArray * *);
long _TryActivateOpenWindow(_ITEMIDLIST_ABSOLUTE const *);
long _UIItemsWalkCBWorker<CUIItemWalkCB>(CUIItemWalkCB &,DirectUI::Element *,void *,DirectUI::Element * *);
long _WriteClassesOfCategories(unsigned long,_GUID * const,unsigned long,_GUID * const,int);
long _WriteImplementingClassesOfCategory(_GUID const &,_DSA *);
long _WriteRequiringClassesOfCategory(_GUID const &,_DSA *);
long g_cRefThisDll;
long g_lCabStateCount;
long wil_details_NtQueryWnfStateData(__WIL__WNF_STATE_NAME const *,__WIL__WNF_TYPE_ID const *,void const *,unsigned long *,void *,unsigned long *);
long wil_details_NtUpdateWnfStateData(__WIL__WNF_STATE_NAME const *,void const *,unsigned long,__WIL__WNF_TYPE_ID const *,void const *,unsigned long,unsigned long);
long wil_details_StagingConfig_FireNotification(wil_details_StagingConfig *,unsigned int,unsigned short);
long wil_details_StagingConfig_Load(wil_details_StagingConfig *,wil_FeatureStore,unsigned __int64,void *,int);
tagPERCEIVED GetPerceivedType(IShellFolder *,_ITEMID_CHILD const *);
tagPOINT DUI_GetLocation(DirectUI::Element *,DUI_COORDINATES_SYSTEM);
tagPOINT DUI_TransformLocation(DirectUI::Element *,DUI_COORDINATES_SYSTEM,int,int,DUI_COORDINATES_SYSTEM);
tagPOINT DUI_TransformPoint(DirectUI::Element *,DUI_COORDINATES_SYSTEM,tagPOINT const *,DUI_COORDINATES_SYSTEM);
tagPOINT PointFromVPoint(POINTV const &);
tagRECT RectFromVRect(RECTV const &);
tagSIZE DUI_GetContentStringSize(HDC__ *,DirectUI::Element *);
tagSIZE DUI_GetElementExtent(DirectUI::Element *);
tagSIZE DUI_GetElementLastDSConst(DirectUI::Element *);
tagSIZE SizeFromVSize(SIZEV const &);
unsigned __int64 g_sysmenuTimer;
unsigned int CalculateHashKeyFromItem(IItem *,unsigned int);
unsigned int DUI_ContentAlignToDTFormat(DirectUI::Element *,CONTENTALIGNTODTOPTIONS,DUI_COORDINATES_SYSTEM);
unsigned int DUI_GetDTFormatFlags(DirectUI::Element *,CONTENTALIGNTODTOPTIONS,DUI_COORDINATES_SYSTEM);
unsigned int GetMenuIndexForCanonicalVerb(HMENU__ *,IContextMenu *,unsigned int,unsigned short const *);
unsigned int GetTraySide(HMONITOR__ * *);
unsigned int ILGetSizeAndDepth(_ITEMIDLIST_RELATIVE const *,unsigned long *);
unsigned int UpdateHashWithMoreData(unsigned int,void *,unsigned __int64);
unsigned int _AddSpeedBoundedLinearAnimation(AnimatingRect *,VALUETYPE,unsigned int,unsigned int,double,double,int,int);
unsigned int _GetFileFolderMatchForSQM(IShellItem *);
unsigned int _GetFontHeight(HFONT__ *);
unsigned int _GetKnownFolderMatchForSQMFromItem(IShellItem *);
unsigned int _GetSQMMatchFromScopeItem(IShellItem *);
unsigned int _StartMenuOrSearchConnectorSQMMatchFromItem(IShellItem *,IUnknown *);
unsigned int g_idMsgGetAuto;
unsigned int g_msgItemsviewMarshal;
unsigned int g_uMsgFileOpened;
unsigned long BlendColors(unsigned long,unsigned long,double);
unsigned long BrowserNewThreadProc(void *);
unsigned long ComputeStackHash();
unsigned long DUI_GetForegroundColor(DirectUI::Element *);
unsigned long DataObj_GetDWORD(IDataObject *,unsigned int,unsigned long);
unsigned long DoNetDisconnect(HWND__ *);
unsigned long DummyThreadProc(void *);
unsigned long ECFAddRef(IClassFactory *);
unsigned long ECFRelease(IClassFactory *);
unsigned long GetColorFromValue(DirectUI::Value *);
unsigned long GetConditionalRibbonModeMask(IUnknown *);
unsigned long GetFileAttributesFromSFGAOFlags(unsigned long);
unsigned long SHGetAttributesWithBindCtx(IShellFolder *,_ITEMIDLIST_RELATIVE const *,IBindCtx *,unsigned long);
unsigned long SHProcessMessagesUntilEventEx(HWND__ *,void *,unsigned long,unsigned long);
unsigned long SHProcessMessagesUntilEventsEx(HWND__ *,void * *,unsigned long,unsigned long,unsigned long,unsigned long);
unsigned long Template_BrowserStopData(unsigned __int64,_EVENT_DESCRIPTOR const *,unsigned int,unsigned int);
unsigned long _RegSetKeyValue(HKEY__ *,unsigned short const *,unsigned short const *,unsigned long,void const *,unsigned long);
unsigned long _SetDataListFlags(IUnknown *,unsigned long,unsigned long);
unsigned long g_dwProgressAlpha;
unsigned long g_dwProgressDelayUntilHide;
unsigned long g_dwProgressDelayUntilShow;
unsigned long g_dwProgressFadeInTime;
unsigned long g_dwProgressFadeOutTime;
unsigned long s_SendWERForReentrancy(void *);
unsigned long volatile g_dwReentrantThreadId;
unsigned short const * _GetNextValue(unsigned short const *,int *);
unsigned short const * _TreeView_GetItemText(HWND__ *,_TREEITEM *,unsigned short *,int);
unsigned short const * const c_szFileHistoryExe;
unsigned short g_atomCabinetClass;
unsigned short g_cfAsyncFlag_Storage;
unsigned short g_cfDeskBand;
unsigned short g_cfDeskBandState;
unsigned short g_cfEnterpriseId_Storage;
unsigned short g_cfHIDA_Storage;
unsigned short g_cfURL_Storage;
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
void * DataObj_GetDataOfType(IDataObject *,unsigned int,tagSTGMEDIUM *);
void * OrderItem_Merge(unsigned int,void *,void *,__int64);
void * operator new(unsigned __int64);
void * operator new(unsigned __int64,std::nothrow_t const &);
void BrowserThreadProc(IETHREADPARAM *);
void CShellViews_GetDefaultView(CShellViews *,unsigned int,_GUID *);
void CShellViews_SetDefaultView(CShellViews *,unsigned int,_GUID const *);
void CViewSet_Delete(CViewSet *);
void ClearViewSettingsForTopView(ITopViewAwareItem *,unsigned short const *,TOPVIEWKEY const &);
void ComputeSystemDPI(int *,int *);
void CopyAndAddRefObject(void *,void const *,unsigned long);
void CopyPropertyFromItemToPropStore(_tagpropertykey const &,IShellItem2 *,IPropertyStore *);
void CopyVirtualPoint(VIRTUALPOINT const &,VIRTUALPOINT *);
void DADHelper_DragEnter(HWND__ *,_POINTL,IDataObject *);
void DADHelper_DragMove(HWND__ *,_POINTL);
void DUI_ApplyAlignment(tagSIZE,DirectUI::Element *,DUI_COORDINATES_SYSTEM,tagRECT const &,tagRECT *);
void DUI_ExpandContentSize(DirectUI::Element *,tagSIZE *);
void DUI_GetBorderThickness(DirectUI::Element *,DUI_COORDINATES_SYSTEM,tagRECT *);
void DUI_GetContentRect(DirectUI::Element *,DUI_COORDINATES_SYSTEM,tagRECT *);
void DUI_GetContentStringRect(HDC__ *,DirectUI::Element *,DUI_COORDINATES_SYSTEM,tagRECT *);
void DUI_GetElementLayoutRect(DirectUI::Element *,DUI_COORDINATES_SYSTEM,tagRECT *);
void DUI_GetElementRect(DirectUI::Element *,DUI_COORDINATES_SYSTEM,tagRECT *);
void DUI_GetElementRelativeRect(DirectUI::Element *,DirectUI::Element *,DUI_COORDINATES_SYSTEM,tagRECT *);
void DUI_GetExtentToContentMargins(DirectUI::Element *,tagRECT *,int);
void DUI_GetLocalContentRect(DirectUI::Element *,DUI_COORDINATES_SYSTEM,tagRECT *);
void DUI_GetPadding(DirectUI::Element *,DUI_COORDINATES_SYSTEM,tagRECT *);
void DUI_GetRootContentRect(DirectUI::Element *,DUI_COORDINATES_SYSTEM,tagRECT *);
void DUI_GetRootContentStringRect(HDC__ *,DirectUI::Element *,DUI_COORDINATES_SYSTEM,tagRECT *);
void DUI_GetSeparatorPadding(ItemRowLayout *,DUI_COORDINATES_SYSTEM,tagRECT *);
void DUI_MapElementPoint(DirectUI::Element *,DirectUI::Element *,DUI_COORDINATES_SYSTEM,tagPOINT const *,tagPOINT *);
void DUI_MapElementPointV(DirectUI::Element *,DirectUI::Element *,POINTV const &,POINTV *);
void DUI_MapElementRect(DirectUI::Element *,DirectUI::Element *,DUI_COORDINATES_SYSTEM,tagRECT const *,tagRECT *);
void DUI_MapElementRectV(DirectUI::Element *,DirectUI::Element *,RECTV const &,RECTV *);
void DUI_OnCustomLayoutChanged(DirectUI::Element *,unsigned short const *);
void DUI_PaintElementTree(HDC__ *,tagPOINT const *,tagRECT const *,DirectUI::Element *);
void DUI_PaintElementTreeBackground(HDC__ *,tagPOINT const *,tagRECT const *,DirectUI::Element *);
void DUI_ParserErrorCallback(unsigned short const *,unsigned short const *,int,void *);
void DUI_ReduceBounds(tagRECT *,tagRECT const *);
void DUI_ReduceElementBounds(DirectUI::Element *,DUI_COORDINATES_SYSTEM,tagRECT *);
void DUI_ReduceElementBounds(DirectUI::Element *,tagSIZE *);
void DUI_ReduceRectByPaddingAndBorders(DirectUI::Element *,DUI_COORDINATES_SYSTEM,tagRECT *);
void DUI_SetShowFocusRect(DirectUI::Element *,int);
void DUI_SumElementPadding(DirectUI::Element *,DirectUI::Element *,DUI_COORDINATES_SYSTEM,tagRECT *);
void DUI_TransformRect(DirectUI::Element *,DUI_COORDINATES_SYSTEM,tagRECT const *,DUI_COORDINATES_SYSTEM,tagRECT *);
void DUI_WalkElements(DirectUI::Element *,int (*)(DirectUI::Element *,void *),void *);
void FirePerfTrackEventForStartMenu(LIBRARY_SQM_TYPE,_GUID const &);
void Fire_ExplorerTelemetryFromSiteWithShellItemArray(IUnknown *,EXPLORER_COMMAND_SQM_ID,EXPLORER_COMMAND_SQM_SELECTED_STATE,IShellItemArray *);
void FreeExplorerFrameState();
void FreeFilterArray(IFilterCondition * *,unsigned int);
void FreeVirtualRect(VIRTUALRECT *);
void GetEventURL(_ITEMIDLIST_ABSOLUTE const *,ATL::CComBSTR &);
void GetScrollTickRectFromRowRect(RECTV const &,int,int,RECTV *);
void InitURLSearchHooks();
void InitializeExplorerClass();
void ItemsView_ForceDSPass(DirectUI::Element *);
void ItemsView_NotifyUserMovedFocusWithKeyboard(DirectUI::Element *,int);
void MarkCurrentTravelEntryAutoNavigated(IUnknown *);
void OffsetVirtualRect(VIRTUALRECT *,int,int);
void OrderItem_Free(ORDERITEM *,int);
void OrderItem_FreeIconInfo(ORDERITEM *);
void OrderItem_SaveSubitemToStream(IStream *,void const *,unsigned long,long *);
void OrderList_Destroy(_DPA * *,int);
void OrderList_Merge(_DPA *,_DPA *,int,__int64,void (*)(void *,_ITEMID_CHILD const *),void *);
void OrderList_Reorder(_DPA *);
void PhysicalToLogicalRect(tagRECT const &,tagRECT *);
void PlayNavigationSound(unsigned short const *);
void ReleaseStgMediumHGLOBAL(void const *,tagSTGMEDIUM *);
void RtlGetVersionResource(void *,unsigned __int64,unsigned long,_RTL_VERSION_RESOURCE *);
void SHCleanupSeparators(HMENU__ *,unsigned int);
void SHComputeDPI(HWND__ *,int *,int *);
void SHLogicalToPhysicalDPI(HWND__ *,int *,int *);
void SHLogicalToPhysicalDPI(HWND__ *,tagSIZE *);
void SHLogicalToPhysicalDPIForImages(HWND__ *,int *);
void SHLogicalToPhysicalDPIMetric(HWND__ *,int,int *);
void SHPhysicalToLogicalDPI(HWND__ *,int *,int *);
void SHTraceSQMCount(_EVENT_DESCRIPTOR const *,unsigned long);
void SHTraceSQMStream(_EVENT_DESCRIPTOR const *,unsigned long,_SHSQM_STREAM_ENTRY *,unsigned long);
void SHTraceSQMStreamOne(_EVENT_DESCRIPTOR const *,unsigned long,unsigned long);
void SafeRelease<CDummyUnknown>(CDummyUnknown * *);
void SafeRelease<CSearchManager>(CSearchManager * *);
void SafeRelease<DirectUI::Value>(DirectUI::Value * *);
void SafeRelease<IAccessible>(IAccessible * *);
void SafeRelease<IAddressEditBox>(IAddressEditBox * *);
void SafeRelease<IAddressList>(IAddressList * *);
void SafeRelease<IBindCtx>(IBindCtx * *);
void SafeRelease<IBrowserProgressAggregator>(IBrowserProgressAggregator * *);
void SafeRelease<ICancelMethodCalls>(ICancelMethodCalls * *);
void SafeRelease<ICondition>(ICondition * *);
void SafeRelease<IConnectionPoint>(IConnectionPoint * *);
void SafeRelease<IContextMenu2>(IContextMenu2 * *);
void SafeRelease<IContextMenu3>(IContextMenu3 * *);
void SafeRelease<IContextMenu>(IContextMenu * *);
void SafeRelease<IDataObject>(IDataObject * *);
void SafeRelease<IDeskBand>(IDeskBand * *);
void SafeRelease<IDeskBar>(IDeskBar * *);
void SafeRelease<IDockingWindow>(IDockingWindow * *);
void SafeRelease<IDockingWindowSite>(IDockingWindowSite * *);
void SafeRelease<IDropTarget>(IDropTarget * *);
void SafeRelease<IEnumExplorerCommand>(IEnumExplorerCommand * *);
void SafeRelease<IEnumVARIANT>(IEnumVARIANT * *);
void SafeRelease<IFolderFilter>(IFolderFilter * *);
void SafeRelease<IImageList2>(IImageList2 * *);
void SafeRelease<IItem>(IItem * *);
void SafeRelease<IItemCollection>(IItemCollection * *);
void SafeRelease<ILinguisticAlternativeGenerator>(ILinguisticAlternativeGenerator * *);
void SafeRelease<IListViewPopup>(IListViewPopup * *);
void SafeRelease<IListViewPopupCallback>(IListViewPopupCallback * *);
void SafeRelease<IMenuBand>(IMenuBand * *);
void SafeRelease<INameSpaceTreeControlDropHandler>(INameSpaceTreeControlDropHandler * *);
void SafeRelease<IObjectCollection>(IObjectCollection * *);
void SafeRelease<IOleCommandTarget>(IOleCommandTarget * *);
void SafeRelease<IOleObject>(IOleObject * *);
void SafeRelease<IPendingNavigation>(IPendingNavigation * *);
void SafeRelease<IPersistHistory>(IPersistHistory * *);
void SafeRelease<IPropertyBag>(IPropertyBag * *);
void SafeRelease<IPropertyKeyStore>(IPropertyKeyStore * *);
void SafeRelease<IQueryAssociations>(IQueryAssociations * *);
void SafeRelease<IQuerySource>(IQuerySource * *);
void SafeRelease<IRawElementProviderSimple>(IRawElementProviderSimple * *);
void SafeRelease<IRichChunk>(IRichChunk * *);
void SafeRelease<IServiceProvider>(IServiceProvider * *);
void SafeRelease<IShellBandProxy>(IShellBandProxy * *);
void SafeRelease<IShellBrowser>(IShellBrowser * *);
void SafeRelease<IShellBrowserService>(IShellBrowserService * *);
void SafeRelease<IShellFolder2>(IShellFolder2 * *);
void SafeRelease<IShellFolder>(IShellFolder * *);
void SafeRelease<IShellItem>(IShellItem * *);
void SafeRelease<IShellItemArray>(IShellItemArray * *);
void SafeRelease<IShellNavigationBand>(IShellNavigationBand * *);
void SafeRelease<IShellNavigationTarget>(IShellNavigationTarget * *);
void SafeRelease<IShellSearchControl>(IShellSearchControl * *);
void SafeRelease<IShellView>(IShellView * *);
void SafeRelease<IStream>(IStream * *);
void SafeRelease<ITravelLog>(ITravelLog * *);
void SafeRelease<ITypeInfo>(ITypeInfo * *);
void SafeRelease<IUnknown>(IUnknown * *);
void SafeRelease<IViewFrame>(IViewFrame * *);
void SafeRelease<IViewObject>(IViewObject * *);
void SafeRelease<IViewSettings>(IViewSettings * *);
void SafeRelease<IWebBrowser2>(IWebBrowser2 * *);
void SafeRelease<IWinEventHandler>(IWinEventHandler * *);
void SetExplorerCommandInvocationLocation(IUnknown *,EXPLORER_COMMAND_SQM_INVOCATION_LOCATION);
void SetLCITEM(IItem *,int,tagLCITEM *);
void SetSiteNullAndRelease<IFilterControl>(IFilterControl * *);
void SetSiteNullAndRelease<IFrameTaskManager>(IFrameTaskManager * *);
void SetVirtualRect(VIRTUALPOINT const &,VIRTUALPOINT const &,DirectUI::Element *,VIRTUALRECT *);
void ShowSystemMenu(HMENU__ *,HWND__ *,HWND__ *,int,int);
void SlideWindow(HWND__ *,tagRECT const *,HMONITOR__ *,int);
void StartMenuAccFocusChangeOnSelected(DirectUI::Element *,int);
void TemporaryForThresholdBeta_ShowOneDriveFirstRunExperienceIfNeeded(IShellItem *);
void TrackOperation(IUnknown *,unsigned short const *,TRACKOPERATIONTYPE,TRACKOPERATIONEVENT);
void TreeView_DeleteChildren(HWND__ *,_TREEITEM *);
void TreeView_SetChildren(HWND__ *,_TREEITEM *,unsigned int);
void UpdateLayoutRectAndSetVisible(DirectUI::Element *,int,int,DirectUI::Element *,int,int,int,int);
void _Fire_CommandHandlerInvokeTelemetry(EXPLORER_COMMAND_SQM_ID,EXPLORER_COMMAND_SQM_INVOCATION_LOCATION,RIBBON_VISIBILITY,EXPLORER_COMMAND_SQM_SELECTED_STATE,IShellItem *,IUnknown *,unsigned long);
void _FreeWindowDataAndPidl(WindowData * *,_ITEMIDLIST_ABSOLUTE * *);
void _InitClipboardFormats();
void _InitDefaultFolderSettings();
void _SHPrettyMenu(HMENU__ *);
void _TlgWriteActivityAutoStop<0,5>(_TlgProvider_t const *,_GUID const *);
void _TlgWriteActivityAutoStop<35184372088832,5>(_TlgProvider_t const *,_GUID const *);
void _TlgWriteActivityAutoStop<70368744177664,5>(_TlgProvider_t const *,_GUID const *);
void operator delete(void *);
void wil_details_FeaturePropertyCache_ReportUsageToService(wil_details_FeaturePropertyCache *,unsigned int,FEATURE_LOGGED_TRAITS const *,int,wil_ReportingKind,unsigned __int64);
wil_StagingConfig * g_wil_details_stagingConfigForMachine;
wil_StagingConfig * g_wil_details_stagingConfigForUser;
wil_details_FeatureTestState * g_wil_details_testStates;
wil_details_RecordUsageResult wil_details_RecordUsageInPropertyCache(wil_details_FeaturePropertyCache *,wil_details_ServiceReportingKind,unsigned int,unsigned int);
