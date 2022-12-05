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

class BehaviorEngineHelper
{
protected:
	long EnsureObject();
public:
	long CreateBehavior(unsigned short const *,unsigned short const *,DirectUI::Value *,IDuiBehavior * *);
	~BehaviorEngineHelper();
};

class CAccessibleBase
{
protected:
	int IsValidChildID(int);
	long _ValidateAccChild(tagVARIANT *);
	virtual long _GetChildCount();
public:
	virtual long ContextSensitiveHelp(int);
	virtual long GetIDsOfNames(_GUID const &,unsigned short * *,unsigned int,unsigned long,long *);
	virtual long GetTypeInfo(unsigned int,unsigned long,ITypeInfo * *);
	virtual long GetTypeInfoCount(unsigned int *);
	virtual long GetWindow(HWND__ * *);
	virtual long Invoke(long,_GUID const &,unsigned long,unsigned short,tagDISPPARAMS *,tagVARIANT *,tagEXCEPINFO *,unsigned int *);
	virtual long QueryInterface(_GUID const &,void * *);
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
	virtual long get_accParent(IDispatch * *);
	virtual long get_accRole(tagVARIANT,tagVARIANT *);
	virtual long get_accSelection(tagVARIANT *);
	virtual long get_accState(tagVARIANT,tagVARIANT *);
	virtual long get_accValue(tagVARIANT,unsigned short * *);
	virtual long put_accName(tagVARIANT,unsigned short *);
	virtual long put_accValue(tagVARIANT,unsigned short *);
};

class CAggregateImageList
{
	CAggregateImageList();
	long _Callback_ForceImagePresent(int);
	long _LoadV2RFromStream(IStream *);
	long _RemoveAll();
	long _ValidAggregate(int,int);
	virtual long v_GetImageInterface(int,int *,int *,unsigned long,_GUID const &,void * *);
	virtual ~CAggregateImageList();
public:
	virtual long AddAggregated(unsigned int,int,int *);
	virtual long Clone(_GUID const &,void * *);
	virtual long Copy(int,IUnknown *,int,unsigned int);
	virtual long DiscardImages(int,int,unsigned long);
	virtual long DumpContents(int,IDebugOutput *,unsigned __int64 *);
	virtual long ForceImagePresent(int,unsigned long);
	virtual long GetAggregated(int,unsigned int *,int *);
	virtual long GetClassID(_GUID *);
	virtual long GetIconSize(int *,int *);
	virtual long GetImageCount(int *);
	virtual long GetImageList(unsigned int,_GUID const &,void * *);
	virtual long GetOverlayImage(int,int *);
	virtual long Initialize(int,int,unsigned int,int,int);
	virtual long Load(IStream *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Remove(int);
	virtual long ReplaceAggregated(int,unsigned int,int);
	virtual long Save(IStream *,int);
	virtual long SetFlags(unsigned int);
	virtual long SetImageCount(unsigned int);
	virtual long SetImageLists(unsigned long,IImageList * *);
	virtual long SetOverlayImage(int,int);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CAnimate
{
protected:
	__int64 WndProc(unsigned int,unsigned __int64,__int64);
	int OnNCCreate(HWND__ *,tagCREATESTRUCTW *);
	int OnOpen(HINSTANCE__ *,unsigned short const *,int);
	int OnPlay(int,int,int);
	int OnStop();
	int OnTick();
	static __int64 AnimateWndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	void DoNotify(int);
	void OnFirstPaint();
	void OnPaint(HDC__ *);
};

class CAnimationData
{
	AnimationUpdateResults MoveToNextState();
	float CalculatePercentage();
	unsigned __int64 GetFrameDuration();
public:
	void GetDrawInformation(tagPOINT *,float *,tagPOINT *,float *);
	void Init(AnimationType);
	void SetDirection(AnimationDirection);
};

struct CAnimationEngine
{
	void GetDrawInformation(CAnimationData *,tagPOINT *,float *,tagPOINT *,float *);
};

struct CBitmapImgCtx
{
	int Initialize(HBITMAP__ *);
	virtual long Disconnect();
	virtual long Draw(HDC__ *,tagRECT *);
	virtual long GetPalette(HPALETTE__ * *);
	virtual long GetStateInfo(unsigned long *,tagSIZE *,int);
	virtual long GetUpdateRects(tagRECT *,tagRECT *,long *);
	virtual long Load(unsigned short const *,unsigned long);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SelectChanges(unsigned long,unsigned long,int);
	virtual long SetCallback(void (*)(void *,void *),void *);
	virtual long StretchBlt(HDC__ *,int,int,int,int,int,int,int,int,unsigned long);
	virtual long Tile(HDC__ *,tagPOINT *,tagRECT *,tagSIZE *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CByteStream
{
	bool GrowBuffer(int);
	void Align(CByteStream::AlignType,unsigned __int64);
public:
	int Write(void const *,int);
};

class CCalAcc
{
	long _GetChildDispatch(IDispatch * *);
	virtual int _IsClickableChild(long);
	virtual long _GetChildCount();
public:
	virtual long accHitTest(long,long,tagVARIANT *);
	virtual long accLocation(long *,long *,long *,long *,tagVARIANT);
	virtual long get_accChild(tagVARIANT,IDispatch * *);
	virtual long get_accName(tagVARIANT,unsigned short * *);
	virtual long get_accRole(tagVARIANT,tagVARIANT *);
	virtual long get_accState(tagVARIANT,tagVARIANT *);
};

class CCalCtlAcc
{
	long _GetChildDispatch(unsigned int,IDispatch * *);
	virtual HWND__ * v_GetWindow();
	virtual long _GetChildCount();
public:
	virtual long accDoDefaultAction(tagVARIANT);
	virtual long accHitTest(long,long,tagVARIANT *);
	virtual long accLocation(long *,long *,long *,long *,tagVARIANT);
	virtual long get_accChild(tagVARIANT,IDispatch * *);
	virtual long get_accDefaultAction(tagVARIANT,unsigned short * *);
	virtual long get_accDescription(tagVARIANT,unsigned short * *);
	virtual long get_accName(tagVARIANT,unsigned short * *);
	virtual long get_accRole(tagVARIANT,tagVARIANT *);
	virtual long get_accState(tagVARIANT,tagVARIANT *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CCalInfo
{
	int _ConstrainToMinMax(CALDATETIME *);
	int _EnumEraUnits(CALDATETIME const *,CALDATETIME const *,int (*)(unsigned int,int,CALDATETIME const *,int,CALDATETIME const *));
	int _IsValidCalendarInfoDPAs(_DPA *,_DPA *);
	long _ChangeCalendar(unsigned long,unsigned long);
	long _FindEraStart(int,CALDATETIME *);
	long _GetDoW(unsigned long,unsigned int,unsigned short *,unsigned __int64);
	long _LoadCalendarString(unsigned int,unsigned short * *);
	long _LoadErasInfo();
	unsigned int _GetValidYear(unsigned int,unsigned int);
	void _FreeAll();
	void _LoadCalendarStrings();
public:
	CCalInfo();
	int CalDateAdjust(CALDATETIME *,int,CALUNIT);
	int CalDateCompare(CALDATETIME const *,CALDATETIME const *,CALUNIT,CALUNIT);
	int CalDateConvert(CALDATETIME const *,CALDATETIME *,CALDATETIME const *);
	int CalDateCopyParts(CALDATETIME *,CALDATETIME const *,CALUNIT);
	int CalDateDefaultMinMax(CALDATETIME *,CALDATETIME *);
	int CalDateMinMax(CALDATETIME *,CALDATETIME *);
	int CalDateRange(CALDATETIME const *,CALDATETIME const *,CALUNIT);
	int CalDateSetEnd(CALDATETIME *,CALUNIT);
	int CalDateSetStart(CALDATETIME *,CALUNIT);
	int CalDateToday(CALDATETIME *);
	int CalDayStateConvert(CALDATETIME const *,CALDATETIME const *,unsigned long *,unsigned __int64,unsigned long);
	int GetNumGregMonthsDisplayed(CALDATETIME const *,CALDATETIME const *);
	int SYSTEMTIMEToCALDATETIME(_SYSTEMTIME const *,CALDATETIME *);
	int SetFirstDayOfWeek(int,int);
	long FormatCalDateTime(CALDATETIME const *,unsigned long,unsigned short const *,unsigned short *,unsigned __int64);
	long GetAbbrivMonthName(CALDATETIME const *,unsigned short *,unsigned __int64);
	long GetEraNameByIndex(int,unsigned short *,unsigned __int64);
	long GetEraRange(unsigned int,CALDATETIME *,CALDATETIME *);
	long GetEraYear(CALDATETIME const *,unsigned short *,unsigned __int64);
	long GetWeekNumber(CALDATETIME const *,unsigned short *,unsigned __int64);
	long GetYear(CALDATETIME const *,unsigned short *,unsigned __int64);
	long Reload();
	long SetCALID(int,unsigned long);
};

class CCalTableAcc
{
	long _GetChildDispatch(unsigned int,IDispatch * *);
	virtual long _GetChildCount();
	virtual long v_OnGetRole();
public:
	virtual long accHitTest(long,long,tagVARIANT *);
	virtual long accLocation(long *,long *,long *,long *,tagVARIANT);
	virtual long accNavigate(long,tagVARIANT,tagVARIANT *);
	virtual long get_accChild(tagVARIANT,IDispatch * *);
	virtual long get_accSelection(tagVARIANT *);
};

class CCalTableRowAcc
{
	int _GetRow();
	int _HasWeekNumbers();
	long _GetSelRange(_SYSTEMTIME *,_SYSTEMTIME *);
	long _GetSiblingDispatch(long,IDispatch * *);
	virtual int _IsClickableChild(long);
	virtual long _GetChildCount();
public:
	virtual long accHitTest(long,long,tagVARIANT *);
	virtual long accLocation(long *,long *,long *,long *,tagVARIANT);
	virtual long accNavigate(long,tagVARIANT,tagVARIANT *);
	virtual long accSelect(long,tagVARIANT);
	virtual long get_accChild(tagVARIANT,IDispatch * *);
	virtual long get_accDescription(tagVARIANT,unsigned short * *);
	virtual long get_accName(tagVARIANT,unsigned short * *);
	virtual long get_accRole(tagVARIANT,tagVARIANT *);
	virtual long get_accSelection(tagVARIANT *);
	virtual long get_accState(tagVARIANT,tagVARIANT *);
};

class CCalendar
{
	CALUNIT _GetCalendarUnit();
	CALUNIT _GetCellUnit();
	__int64 _ContextMenu(unsigned __int64,__int64);
	__int64 _CreateHandler(HWND__ *,tagCREATESTRUCTW *);
	__int64 _HandleTimer(unsigned __int64);
	__int64 _LButtonDown(unsigned __int64,__int64);
	__int64 _LButtonUp(unsigned __int64,__int64);
	__int64 _MonthCalWndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	__int64 _MouseLeave();
	__int64 _MouseMove(unsigned __int64,__int64);
	__int64 _OnKeydown(unsigned __int64,__int64);
	__int64 _OnStyleChanged(unsigned int,tagSTYLESTRUCT const *);
	int _CalcCalCtlRect(tagRECT *,unsigned int *,unsigned int *);
	int _ChangeView(CALDATETIME const *,unsigned long);
	int _ChangeViewNoEffect(CALDATETIME const *,unsigned long);
	int _DateAdjust(CALDATETIME *,int,CALUNIT);
	int _DateAdjustByStart(CALDATETIME *,int,CALUNIT);
	int _DateLimitMinMax(CALDATETIME *);
	int _DateSetEnd(CALDATETIME *,CALUNIT);
	int _DateSetStart(CALDATETIME *,CALUNIT);
	int _EndUserAction();
	int _ExtendSelection(CALDATETIME const *,int);
	int _GetCalendarGridInfo(tagMCGRIDINFO *);
	int _GetCalendarString(CALDATETIME const *,unsigned short *,unsigned __int64);
	int _GetCellDate(CALDATETIME *,int,int);
	int _GetCellString(CALDATETIME const *,unsigned short *,unsigned __int64);
	int _GetDateValue(CALDATETIME const *);
	int _GetDoWString(unsigned int,unsigned short *,unsigned __int64);
	int _GetEraRange(unsigned int,CALDATETIME *,CALDATETIME *);
	int _GetFooterString(unsigned short *,unsigned __int64);
	int _GetHeaderString(CALDATETIME const *,unsigned short *,unsigned __int64);
	int _GetOffsetForPoint(tagPOINT,int *);
	int _GetRectForDate(CALDATETIME const *,tagRECT *);
	int _GetRectForOffset(int,tagRECT *);
	int _HandleEraseBkgnd(HDC__ *);
	int _HasSelection(CALDATETIME const *);
	int _HasState(CALDATETIME const *);
	int _InRange(CALDATETIME const *);
	int _IncrStartCalendar(int);
	int _IncrStartCalendarNoEffect(int);
	int _InitSlideEffect(int);
	int _InitZoomEffect(int);
	int _InvalidateSelection(CALDATETIME const *,CALDATETIME const *);
	int _IsHot(tagRECT const *);
	int _IsHotPart(unsigned int);
	int _MoveCell(int,int);
	int _ScrollIntoView();
	int _SetDateCalStart(CALDATETIME const *,int);
	int _SetSelection(CALDATETIME const *,CALDATETIME const *,int);
	int _UpdateDateCalStart(CALDATETIME const *,int);
	int _UpdateLocaleInfo(tagLOCALEINFO *);
	static __int64 s_MonthCalWndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	unsigned int _GetCellHTState(CALDATETIME *,int,int,int);
	unsigned int _GetColCount();
	unsigned int _GetMaxCellCount();
	unsigned int _GetRowCount();
	unsigned int _GetStartCol(CALDATETIME const *);
	unsigned int _HitTest(MCHITTESTINFO *,CALDATETIME *);
	void OnFocusChange(int);
	void UpdateTheme();
	void _CalcGetTextExtent(HDC__ *,int,int,unsigned short const *,int,unsigned long,tagSIZE *);
	void _CalcOnSizeChange(tagRECT const *);
	void _CalcOnStyleChange();
	void _CalcOnViewChange();
	void _DrawCell(HDC__ *,tagRECT const *,CALDATETIME const *,int,int);
	void _DrawTodayCircle(HDC__ *,tagRECT const *,int);
	void _EndEffects();
	void _GetTodayBtnRect(tagRECT *);
	void _GotoToday();
	void _HandleSetFont(HFONT__ *);
	void _InvalidateDates(CALDATETIME const *,CALDATETIME const *);
	void _MoveSpecial(unsigned int);
	void _NcDestroyHandler(HWND__ *,unsigned __int64,__int64);
	void _NotifyFocusEvent();
	void _NotifySelChange(unsigned int);
	void _NotifySelEvent(int,CALDATETIME const *,CALDATETIME const *,CALDATETIME const *,CALDATETIME const *);
	void _OnPaint(HDC__ *);
	void _Paint(HDC__ *,int);
	void _PaintArrowBtn(HDC__ *,int,int);
	void _PaintBackground(HDC__ *);
	void _PaintCalHeader(HDC__ *,tagRECT const *,CALDATETIME const *);
	void _PaintCalendar(HDC__ *,tagRECT const *,int,CALDATETIME const *);
	void _PaintFooter(HDC__ *);
	void _SelectAll();
	void _SetToday(CALDATETIME const *);
	void _UpdateDayState();
};

class CCalendarAccBase
{
protected:
	virtual HWND__ * v_GetWindow();
	virtual int _IsClickableChild(long);
public:
	CCalendarAccBase(HWND__ *,IDispatch *);
	virtual long accDoDefaultAction(tagVARIANT);
	virtual long get_accDefaultAction(tagVARIANT,unsigned short * *);
	virtual long get_accParent(IDispatch * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~CCalendarAccBase();
};

struct CCloseButton
{
	CCloseButton::GLYPHSTATE GetState();
	void CalculateSize(void *,HDC__ *,DPISCALEINFO *);
	void Draw(void *,HDC__ *,tagRECT);
};

struct CComBSTR
{
	long Append(unsigned short const *,int);
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

struct CComPtr<IDuiBehavior>
{
	~CComPtr<IDuiBehavior>();
};

struct CComPtr<ITextSelection>
{
	~CComPtr<ITextSelection>();
};

struct CComPtr<IUnknown>
{
	~CComPtr<IUnknown>();
};

struct CComPtr<IXmlReader>
{
	~CComPtr<IXmlReader>();
};

struct CCompositedDraw
{
	HDC__ * BeginCompositedPaint(HWND__ *,HDC__ *,tagPAINTSTRUCT *,int);
	HDC__ * BeginDoubleBuffer(HDC__ *,tagRECT const *);
	int EndCompositedPaint(HWND__ *,tagPAINTSTRUCT const *);
	virtual void OnResize();
	virtual void OnThemeChanged(void *);
	virtual ~CCompositedDraw();
	void Clear(HDC__ *,tagRECT const *);
	void EndDoubleBuffer();
	void InitializeCompositedDraw(HWND__ *,void *);
	void MakeOpaque(tagRECT const *);
};

class CControl
{
protected:
	virtual __int64 v_OnCommand(unsigned __int64,__int64);
	virtual __int64 v_OnNotify(unsigned __int64,__int64);
	virtual __int64 v_WndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	virtual int v_OnNCCalcSize(unsigned __int64,__int64,__int64 *);
	virtual unsigned long v_OnStyleChanged(unsigned __int64,__int64);
	virtual unsigned short const * GetThemeClass();
	virtual void v_OnNCPaint();
	void _OnPaint(HDC__ *);
};

class CDIBImage
{
	int _Attach(HBITMAP__ *);
	int _ConvertToARGB();
	void _Destroy();
public:
	HDC__ * GetDC(HDC__ *);
	long BitBlt(int,int,int,int,CDIBImage const *,int,int);
};

class CDPA_Base<CGangImageList::RankEntry,CTContainer_PolicyUnOwned<CGangImageList::RankEntry> >
{
	static int _StandardDestroyCB(CGangImageList::RankEntry *,void *);
public:
	int Destroy();
};

class CDPA_Base<CLVFButton,CTContainer_PolicyUnOwned<CLVFButton> >
{
	static int _StandardDestroyCB(CLVFButton *,void *);
};

class CDPA_Base<CListGroup,CTContainer_PolicyUnOwned<CListGroup> >
{
	static int _StandardDestroyCB(CListGroup *,void *);
};

class CDPA_Base<IImageList2,CTContainer_PolicyUnOwned<IImageList2> >
{
	static int _StandardDestroyCB(IImageList2 *,void *);
};

class CDPA_Base<IImageListPriv2,CTContainer_PolicyUnOwned<IImageListPriv2> >
{
	static int _StandardDestroyCB(IImageListPriv2 *,void *);
};

class CDPA_Base<_LISTITEM,CTContainer_PolicyUnOwned<_LISTITEM> >
{
	static int _StandardDestroyCB(_LISTITEM *,void *);
public:
	int Create(int);
	int Destroy();
};

struct CDSA_Base<CAggregateImageList::VIRT2REAL>
{
	int Destroy();
};

struct CDSA_Base<CSparseImageList::REAL2VIRT>
{
	int Destroy();
};

struct CDSA_Base<CSparseImageList::VIRT2REAL>
{
	int Destroy();
};

struct CDSA_Base<LAYERINFO>
{
	int Destroy();
};

class CDatePicker
{
	__int64 _CDatePickerWndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	__int64 _CreateHandler(HWND__ *,tagCREATESTRUCTW *);
	__int64 _DTM_OnSetFormat(HWND__ *,unsigned short const *);
	__int64 _HandleChar(unsigned __int64,__int64);
	__int64 _HandleKeydown(unsigned __int64,__int64);
	__int64 _LButtonDown(unsigned __int64,__int64);
	__int64 _OnNotify(int,tagNMHDR *);
	__int64 _OnStyleChanged(HWND__ *,unsigned int,tagSTYLESTRUCT const *);
	int GetThemeIds(void * *,int *,int *);
	int _Edit(unsigned short *,int);
	int _GetDateTimePickerInfo(tagDATETIMEPICKERINFO *);
	int _GetIdealSize(tagSIZE *);
	int _HandleCharSEC(unsigned short);
	int _HandleKeydownSEC(unsigned __int64,__int64);
	int _IncrFocus(int);
	int _IncrementEra(SUBEDIT const *,int);
	int _IncrementSubedit(int);
	int _IsNumeric(SUBEDIT const *);
	int _ParseFormat(unsigned short const *,int,int *);
	int _SetDate(CALDATETIME const *,int);
	static __int64 s_CDatePickerWndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	unsigned int _AdjustByType(SUBEDIT const *,unsigned int);
	unsigned short * _FormatSubed(SUBEDIT *,unsigned short *,unsigned int);
	unsigned short const * _FindDelimiterEnd(unsigned short const *,unsigned short * *);
	unsigned short const * _FindQuoteEnd(unsigned short const *,unsigned short * *);
	void UpdateTheme(HWND__ *);
	void _CalcGetTextExtent(HDC__ *,int,int,unsigned short const *,int,unsigned long,tagSIZE *);
	void _CloseMonthCal(int);
	void _DestroyHandler(HWND__ *,unsigned __int64,__int64);
	void _DrawDropdownButton(HDC__ *);
	void _DrawSubedits(HDC__ *,int,int);
	void _GetTimeDateFormat(SUBEDIT const *,unsigned short *,unsigned long);
	void _GetYearMinMax(CALDATETIME const *,unsigned int *,unsigned int *);
	void _HandleLocaleChange(HWND__ *);
	void _HandleSECEdit();
	void _HandleSetFont(HFONT__ *,int);
	void _Invalidate(int);
	void _LBD_MonthCal(int);
	void _NotifyDateChange();
	void _OrderFields(HWND__ *);
	void _Paint(HDC__ *);
	void _ParseFormat(unsigned short const *);
	void _RecomputeMonthCalRect(tagRECT *,tagRECT const *);
	void _RecomputeSizing(tagRECT const *);
	void _RecomputeSizingSEC(tagRECT const *);
	void _SafeSetCurSubed(int);
	void _SaveResetSubeditEdit(int);
	void _SetCurSubed(int);
	void _SetSubeditValue(SUBEDIT *,unsigned int,int);
};

struct CDebugOutput
{
	virtual long PopIndent();
	virtual long PushIndent();
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long WriteLine(unsigned short const *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CDlgTemplateConverter
{
	int CopyStringW(CByteStream &,unsigned short const *,int);
	long DlgHdrToDlgEx(CByteStream &,unsigned short * *);
	long DlgItemToDlgEx(CByteStream &,unsigned short * *);
public:
	long DlgToDlgEx(DLGTEMPLATE *,tagDLGTEMPLATEEX * *);
};

class CDragProxy
{
	__int64 CallCB(unsigned int,unsigned __int64,__int64);
	void SetDropTarget(IDropTarget *);
	void SetTargetItem(int,unsigned long);
public:
	CDragProxy(HWND__ *,__int64 (*)(HWND__ *,unsigned int,unsigned __int64,__int64));
	virtual long DragEnter(IDataObject *,unsigned long,_POINTL,unsigned long *);
	virtual long DragLeave();
	virtual long DragOver(unsigned long,_POINTL,unsigned long *);
	virtual long Drop(IDataObject *,unsigned long,_POINTL,unsigned long *);
	virtual long QueryInterface(_GUID const &,void * *);
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

class CEffect
{
protected:
	static void s_TimerProc(HWND__ *,unsigned int,unsigned __int64,unsigned long);
	virtual long _InitNew(HDC__ *,HDC__ * *);
	virtual long _InitRunning(HDC__ *,HDC__ * *);
	virtual void _Paint(double);
	virtual void _TimerEnd();
	virtual void _TimerProc(HWND__ *,unsigned int,unsigned __int64,unsigned long);
	virtual void _TimerStart();
	virtual void v_InnerEndEffect();
public:
	virtual long InitPaint(HDC__ *,HDC__ * *);
	virtual long Initialize(HWND__ *,tagRECT const *,tagRECT const *);
	virtual void Cleanup();
	virtual void EndEffect();
	virtual void StartEffect();
};

class CElementWithProxy<DirectUI::Element>
{
protected:
	long _EnsureInitializedProxy();
public:
	virtual ~CElementWithProxy<DirectUI::Element>();
};

struct CExtractHistory
{
	long IsExtractedIcon(HICON__ *,int *);
};

class CGangImageList
{
	struct RankArray
	{
		int GetRankForSize(int);
	};

	struct RankEntry
	{
		static int s_CompareSize(RankEntry const *,RankEntry const *,__int64);
	};

	CGangImageList();
	int _GetRankForSize(int);
	int _RankHasImage(int,int);
	long _FixupAfterLoad();
	long _SortImagelistsBySize();
	virtual long v_AfterSetImageLists();
	virtual long v_CriticalSetImageLists(unsigned long,IImageList * *);
	virtual long v_GetImageInterface(int,int *,int *,unsigned long,_GUID const &,void * *);
public:
	virtual long Clone(_GUID const &,void * *);
	virtual long CopyDitherImage(unsigned short,int,int,IUnknown *,int,unsigned int);
	virtual long Draw(_IMAGELISTDRAWPARAMS *);
	virtual long DumpContents(int,IDebugOutput *,unsigned __int64 *);
	virtual long GetClassID(_GUID *);
	virtual long GetDrawOrder(int,int,int,unsigned int * const);
	virtual long GetIconSize(int *,int *);
	virtual long GetImageCount(int *);
	virtual long GetImageList(unsigned int,_GUID const &,void * *);
	virtual long GetOriginalSize(int,unsigned long,int *,int *);
	virtual long GetOverlayImage(int,int *);
	virtual long Initialize(int,int,unsigned int,int,int);
	virtual long Load(IStream *);
	virtual long Merge(int,IUnknown *,int,int,int,_GUID const &,void * *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Resize(int,int);
	virtual long Save(IStream *,int);
	virtual long SetFlags(unsigned int);
	virtual long SetImageLists(unsigned long,IImageList * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CHeaderAcc
{
	virtual HWND__ * v_GetWindow();
	virtual long _GetChildCount();
public:
	long _ValidateChild(tagVARIANT *,int *);
	static long s_CreateInstance(HWND__ *,_GUID const &,void * *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long QueryService(_GUID const &,_GUID const &,void * *);
	virtual long accDoDefaultAction(tagVARIANT);
	virtual long accHitTest(long,long,tagVARIANT *);
	virtual long accLocation(long *,long *,long *,long *,tagVARIANT);
	virtual long accNavigate(long,tagVARIANT,tagVARIANT *);
	virtual long get_accChild(tagVARIANT,IDispatch * *);
	virtual long get_accChildCount(long *);
	virtual long get_accDefaultAction(tagVARIANT,unsigned short * *);
	virtual long get_accDescription(tagVARIANT,unsigned short * *);
	virtual long get_accFocus(tagVARIANT *);
	virtual long get_accName(tagVARIANT,unsigned short * *);
	virtual long get_accRole(tagVARIANT,tagVARIANT *);
	virtual long get_accState(tagVARIANT,tagVARIANT *);
	virtual long get_accValue(tagVARIANT,unsigned short * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CHeaderAccAdaptor
{
	CHeaderAccAdaptor(CHeaderAcc *,long,bool);
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

class CHeaderItemAcc
{
	CHeaderItemAcc(CHeaderAcc *,HWND__ *,int);
	virtual HWND__ * v_GetWindow();
	virtual long _GetChildCount();
public:
	static long s_CreateInstance(CHeaderAcc *,HWND__ *,int,_GUID const &,void * *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long QueryService(_GUID const &,_GUID const &,void * *);
	virtual long accDoDefaultAction(tagVARIANT);
	virtual long accHitTest(long,long,tagVARIANT *);
	virtual long accLocation(long *,long *,long *,long *,tagVARIANT);
	virtual long accNavigate(long,tagVARIANT,tagVARIANT *);
	virtual long get_accChild(tagVARIANT,IDispatch * *);
	virtual long get_accChildCount(long *);
	virtual long get_accDefaultAction(tagVARIANT,unsigned short * *);
	virtual long get_accName(tagVARIANT,unsigned short * *);
	virtual long get_accParent(IDispatch * *);
	virtual long get_accRole(tagVARIANT,tagVARIANT *);
	virtual long get_accState(tagVARIANT,tagVARIANT *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CILRDecorator
{
protected:
	virtual long _GetOriginalContentSize(int *,int *);
	virtual long _RenderContent(tagRECT const *);
	virtual void _Render();
public:
	long Initialize(CImageList *,int,HBITMAP__ *,HBITMAP__ *,IUnknown *,unsigned long);
	~CILRDecorator();
};

class CILRILDecorator
{
protected:
	virtual int _ShouldProcessAlpha();
	virtual long _GetOriginalContentSize(int *,int *);
	virtual long _RenderContent(tagRECT const *);
};

class CILRMultiple
{
protected:
	virtual long _RenderContent(tagRECT const *);
public:
	virtual long DoWork();
};

class CILRSingle
{
protected:
	virtual int _ShouldProcessAlpha();
	virtual long _AcquireDCs();
	virtual long _ReleaseDCs();
	virtual void _Render();
	void _DownsampleForLowerBits();
	void _PostProcess();
public:
	long Initialize(CImageList *,int,HBITMAP__ *,HBITMAP__ *);
	virtual long DoWork();
	~CILRSingle();
};

class CImageList
{
	void _Destroy();
protected:
	CImageList(int);
	HBITMAP__ * _CopyBitmap(HBITMAP__ *,HDC__ *);
	HBITMAP__ * _CopyDIBBitmap(HBITMAP__ *,HDC__ *,tagRGBQUAD * *);
	HBITMAP__ * _CreateBitmap(int,int,tagRGBQUAD * *);
	HDC__ * _GetDragDC();
	int Blend(HDC__ *,int,int,int,int,int,unsigned long,unsigned int);
	int Blend32(HDC__ *,int,int,int,int,int,unsigned long,unsigned int);
	int _CreateDragBitmaps(int,int);
	int _CreateLayeredWindow();
	int _GetSpareImageRect(tagRECT *);
	int _GetSpareImageRectInverted(tagRECT *);
	int _HasAlpha(int);
	int _MaskStretchBlt(int,int,HDC__ *,int,int,int,int,HDC__ *,int,int,int,int,int,int,unsigned long);
	int _MergeDragImages(int,int);
	int _PreProcessImage(int);
	int _SetDragImage(CImageList *,int,int);
	int _UpdateLayeredWindow();
	long _Add(HBITMAP__ *,HBITMAP__ *,int,int,int,int *);
	long _AddMasked(HBITMAP__ *,unsigned long,int *);
	long _ApplyMaskToCDIB(HDC__ *,int,int,int,int,int,CDIBImage *);
	long _Clone(CImageList * *);
	long _CopyOneImage(IImageList *,int,unsigned long);
	long _DragMoveLayered(int,int);
	long _DragMoveLegacy(int,int);
	long _DragShowNolock(int);
	long _DrawGlow(tagIMAGELISTDRAWEFFECTPARAMS *);
	long _DrawInvert(tagIMAGELISTDRAWEFFECTPARAMS *);
	long _DrawReflect(tagIMAGELISTDRAWEFFECTPARAMS *);
	long _DrawSaturate(tagIMAGELISTDRAWEFFECTPARAMS *);
	long _DrawShadow(tagIMAGELISTDRAWEFFECTPARAMS *);
	long _GetContentBounds(int,tagRECT *,int *);
	long _GetOriginalSize(int,int *,int *);
	long _InitGlobals();
	long _Initialize(int,int,unsigned int,int,int);
	long _InternalGetImageRect(int,tagRECT *);
	long _InternalGetImageRectInverted(int,tagRECT *);
	long _InternalRemove(int);
	long _LoadWinCodecs();
	long _Merge(int,IUnknown *,int,int,int,CImageList::MERGEINFO *,CImageList * *);
	long _ReAllocBitmaps(int);
	long _Read(_ILFILEHEADER const *,HBITMAP__ *,void *,HBITMAP__ *);
	long _Remove(int);
	long _ReplaceIcon(int,HICON__ *,int *);
	long _ReplaceWithDecoration(int,HBITMAP__ *,HBITMAP__ *,IImageListImageDecorator *,unsigned long);
	long _Resize(int,int);
	long _ScanForAlpha();
	long _SetOriginalSize(int,int,int);
	long _SetOverlayImage(int,int);
	static HDC__ * _GetWorkDC(HDC__ *,int,int,int);
	static int _StretchBlt(int,int,HDC__ *,int,int,int,int,HDC__ *,int,int,int,int,unsigned long);
	static long CloneAttributes(IImageList *,ILCLONEATTRIBUTES const *,CImageList * *);
	static long Create(CImageList * *,int);
	static long GlobalInit();
	static long Recreate(CImageList * *);
	static long _CreateImageListFromImage(IImageList *,int,ILCLONEATTRIBUTES const *,unsigned long,CImageList * *);
	static void GlobalUninit();
	static void SelectDstBitmap(HBITMAP__ *);
	static void SelectSrcBitmap(HBITMAP__ *);
	static void _DeleteBitmap(HBITMAP__ *);
	unsigned long _GetItemFlags(int);
	unsigned long _SetBkColor(unsigned long);
	void Blend16(HDC__ *,int,int,int,int,int,unsigned long,unsigned int);
	void Blend16Helper(int,int,int,int,int,int,unsigned long,int);
	void BlendCT(HDC__ *,int,int,int,int,int,int,unsigned long,unsigned int);
	void BlendDither(HDC__ *,int,int,int,int,int,int,unsigned long,unsigned int);
	void _CreateMirrorImageZero();
	void _DeleteDragBitmaps();
	void _DragLeave();
	void _DragShowNolockLayered(int,int,int);
	void _DragShowNolockLegacy(int,int,int);
	void _FlipImageZero(HDC__ *,HDC__ *);
	void _FlushLayered();
	void _GenerateAlphaForImageUsingMask(int,int);
	void _MergeFrom(IImageList *,int,int,int,unsigned int);
	void _ReleaseDragDC(HDC__ *);
	void _RemoveItemBitmap(int);
	void _ResetBkColor(int,int,unsigned long);
	void _ResetDrag();
	void _SetItemMaskedFlags(int,unsigned long,unsigned long);
public:
	virtual long Add(HBITMAP__ *,HBITMAP__ *,int *);
	virtual long AddMasked(HBITMAP__ *,unsigned long,int *);
	virtual long AllocateImage(int);
	virtual long BeginDrag(int,int,int);
	virtual long Clone(_GUID const &,void * *);
	virtual long Copy(int,IUnknown *,int,unsigned int);
	virtual long CopyDitherImage(unsigned short,int,int,IUnknown *,int,unsigned int);
	virtual long DiscardImages(int,int,unsigned long);
	virtual long DragEnter(HWND__ *,int,int);
	virtual long DragLeave(HWND__ *);
	virtual long DragMove(int,int);
	virtual long DragShowNolock(int);
	virtual long Draw(_IMAGELISTDRAWPARAMS *);
	virtual long DumpContents(int,IDebugOutput *,unsigned __int64 *);
	virtual long EndDrag();
	virtual long ForceImagePresent(int,unsigned long);
	virtual long GetBkColor(unsigned long *);
	virtual long GetCallback(_GUID const &,void * *);
	virtual long GetClassID(_GUID *);
	virtual long GetDragImage(tagPOINT *,tagPOINT *,_GUID const &,void * *);
	virtual long GetFlags(unsigned int *);
	virtual long GetIcon(int,unsigned int,HICON__ * *);
	virtual long GetIconSize(int *,int *);
	virtual long GetImageCount(int *);
	virtual long GetImageInfo(int,_IMAGEINFO *);
	virtual long GetImageRect(int,tagRECT *);
	virtual long GetItemFlags(int,unsigned long *);
	virtual long GetMirror(_GUID const &,void * *);
	virtual long GetOriginalSize(int,unsigned long,int *,int *);
	virtual long GetOverlayImage(int,int *);
	virtual long GetPrivateGoo(HBITMAP__ * *,HDC__ * *,HBITMAP__ * *,HDC__ * *);
	virtual long GetSizeMax(_ULARGE_INTEGER *);
	virtual long GetStatistics(tagIMAGELISTSTATS *);
	virtual long Initialize(int,int,unsigned int,int,int);
	virtual long IsDirty();
	virtual long IsExtractedIcon(HICON__ *,int *);
	virtual long Load(IStream *);
	virtual long LoadEx(unsigned long,IStream *);
	virtual long LockList();
	virtual long Merge(int,IUnknown *,int,int,int,_GUID const &,void * *);
	virtual long PreloadImages(_IMAGELISTDRAWPARAMS *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Remove(int);
	virtual long Replace(int,HBITMAP__ *,HBITMAP__ *);
	virtual long Replace2(int,HBITMAP__ *,HBITMAP__ *,IUnknown *,unsigned long);
	virtual long ReplaceFromImageList(int,IImageList *,int,IUnknown *,unsigned long);
	virtual long ReplaceIcon(int,HICON__ *,int *);
	virtual long Resize(int,int);
	virtual long Save(IStream *,int);
	virtual long SaveEx(unsigned long,IStream *);
	virtual long SetBkColor(unsigned long,unsigned long *);
	virtual long SetCallback(IUnknown *);
	virtual long SetColorTable(int,int,tagRGBQUAD *,int *);
	virtual long SetDragCursorImage(IUnknown *,int,int,int);
	virtual long SetFlags(unsigned int);
	virtual long SetIconSize(int,int);
	virtual long SetImageCount(unsigned int);
	virtual long SetOriginalSize(int,int,int);
	virtual long SetOverlayImage(int,int);
	virtual long UnlockList();
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CImageListBase
{
protected:
	bool CopyAndValidateDrawParams(_IMAGELISTDRAWPARAMS *,_IMAGELISTDRAWPARAMSPRIV *,bool);
	void GetOverlayBoundingRect(tagRECT const *,unsigned long,tagRECT *);
	void GetOverlayBoundingRectForDPI(tagRECT const *,int,unsigned long,tagRECT *);
public:
	int IsValid();
};

class CImageListContainerBase
{
	struct InnerILList
	{
		long Copy(unsigned int,IImageList * *);
		long QueryInnerInterface(int,_GUID const &,void * *);
		void Free();
	};

protected:
	CImageListContainerBase();
	long _CloneTo(CImageListContainerBase *);
	long _GetImageInterface(int,int *,int *,unsigned long,_GUID const &,void * *);
	long _PimlDrag_Get(IImageList * *);
	long _PimlDrag_Get_WithCS(IImageList * *);
	long _SetInnerFlags(unsigned int);
	virtual long v_AfterSetImageLists();
	virtual long v_CriticalSetImageLists(unsigned long,IImageList * *);
	virtual ~CImageListContainerBase();
public:
	virtual long Add(HBITMAP__ *,HBITMAP__ *,int *);
	virtual long AddMasked(HBITMAP__ *,unsigned long,int *);
	virtual long AllocateImage(int);
	virtual long BeginDrag(int,int,int);
	virtual long Copy(int,IUnknown *,int,unsigned int);
	virtual long CopyDitherImage(unsigned short,int,int,IUnknown *,int,unsigned int);
	virtual long DiscardImages(int,int,unsigned long);
	virtual long DragEnter(HWND__ *,int,int);
	virtual long DragLeave(HWND__ *);
	virtual long DragMove(int,int);
	virtual long DragShowNolock(int);
	virtual long Draw(_IMAGELISTDRAWPARAMS *);
	virtual long DumpContents(int,IDebugOutput *,unsigned __int64 *);
	virtual long EndDrag();
	virtual long ForceImagePresent(int,unsigned long);
	virtual long GetBkColor(unsigned long *);
	virtual long GetCallback(_GUID const &,void * *);
	virtual long GetDragImage(tagPOINT *,tagPOINT *,_GUID const &,void * *);
	virtual long GetFlags(unsigned int *);
	virtual long GetIcon(int,unsigned int,HICON__ * *);
	virtual long GetImageInfo(int,_IMAGEINFO *);
	virtual long GetImageList(unsigned int,_GUID const &,void * *);
	virtual long GetImageRect(int,tagRECT *);
	virtual long GetItemFlags(int,unsigned long *);
	virtual long GetMirror(_GUID const &,void * *);
	virtual long GetOriginalSize(int,unsigned long,int *,int *);
	virtual long GetPrivateGoo(HBITMAP__ * *,HDC__ * *,HBITMAP__ * *,HDC__ * *);
	virtual long GetSizeMax(_ULARGE_INTEGER *);
	virtual long GetStatistics(tagIMAGELISTSTATS *);
	virtual long Initialize(int,int,unsigned int,int,int);
	virtual long IsDirty();
	virtual long IsExtractedIcon(HICON__ *,int *);
	virtual long LockList();
	virtual long Merge(int,IUnknown *,int,int,int,_GUID const &,void * *);
	virtual long PreloadImages(_IMAGELISTDRAWPARAMS *);
	virtual long Remove(int);
	virtual long Replace(int,HBITMAP__ *,HBITMAP__ *);
	virtual long Replace2(int,HBITMAP__ *,HBITMAP__ *,IUnknown *,unsigned long);
	virtual long ReplaceFromImageList(int,IImageList *,int,IUnknown *,unsigned long);
	virtual long ReplaceIcon(int,HICON__ *,int *);
	virtual long Resize(int,int);
	virtual long SetBkColor(unsigned long,unsigned long *);
	virtual long SetCallback(IUnknown *);
	virtual long SetColorTable(int,int,tagRGBQUAD *,int *);
	virtual long SetDragCursorImage(IUnknown *,int,int,int);
	virtual long SetIconSize(int,int);
	virtual long SetImageCount(unsigned int);
	virtual long SetImageLists(unsigned long,IImageList * *);
	virtual long SetOriginalSize(int,int,int);
	virtual long SetOverlayImage(int,int);
	virtual long UnlockList();
};

class CLVAccessibilityManager
{
protected:
	int _IsGroup(tagLVACCINDEX const *);
	int _IsItem(tagLVACCINDEX const *);
	int _IsSubItem(tagLVACCINDEX const *);
	int _IsValidAccIndex(tagLVACCINDEX const *);
	int _IsValidGroupIndex(int);
	int _IsValidItemIndex(int);
	int _IsValidSubItemIndex(int);
	unsigned int _GetAccSubItemCount();
	void _NotifyWinEventWorker(unsigned long,int,int,int);
public:
	int OnAccNavigate(tagLVACCNAVINFO const *,unsigned long);
	int OnGetFocusedObject();
	int OnGetObjectRect(int,tagRECT *);
	int OnHitTest(int,tagPOINT const *);
	int OnInvokeDefaultAction(int);
	int OnMapAccIdToAccIndex(int,tagLVACCINDEX *);
	int OnMapAccIndexToAccId(tagLVACCINDEX const *);
	unsigned int OnGetObjectCount(int);
	unsigned int OnGetObjectRole(int);
	unsigned int OnGetObjectState(int);
	void NotifyWinEvent(unsigned long,int,int,int);
};

class CLVBackgroundManager
{
protected:
	void _DrawColumnEdges(HDC__ *,tagRECT const *,tagPOINT const *);
public:
	int OnGetBkImage(tagLVBKIMAGEW *);
	int OnGetBkImageA(tagLVBKIMAGEA *);
	int OnSetBkImage(tagLVBKIMAGEW *);
	int OnSetBkImageA(tagLVBKIMAGEA const *);
	static void s_ImgCtxCallback(void *,void *);
	void DrawBackground(HDC__ *,tagRECT const *);
	void DrawSimpleBackground(HDC__ *,tagPOINT *,tagRECT const *);
	void Realize(HDC__ *,int,int);
	void ReleaseBkImage();
};

struct CLVComputeManager
{
	bool CommonArrange(unsigned int,_DPA *);
	int CommonArrangeGroup(int,_DPA *,short,int const * const);
	int OnArrange(unsigned int);
	static int s_ArrangeIconCompare(void const *,void const *,__int64);
	void ArrangeOrSnapToGrid();
};

class CLVDragDropManager
{
protected:
	void _DrawDragImage(tagLVITEMINDEX const *,tagRECT const *,tagRECT const *,LVDRAWITEM *);
public:
	_IMAGELIST * OnCreateDragImage(int,tagPOINT * const);
	__int64 LVGenerateDragImage(SHDRAGIMAGE *);
};

class CLVDrawItemManager
{
protected:
	void _UpdateTextAlpha(HDC__ *,int,int,_DTTOPTS *,unsigned short const *,tagRECT const *,int,unsigned int,int,int);
public:
	int ComputeTextWidth(int,int,int,LVFAKEDRAW *,tagLVITEMW *,unsigned short *,int);
	int DrawItem(LVDRAWITEM *);
	unsigned long BeginFakeItemDraw(LVFAKEDRAW *);
	void BeginFakeCustomDraw(CLVDrawState *,LVFAKEDRAW *,tagLVITEMW *);
	void DrawSubItemControl(HDC__ *,IDrawPropertyControl *,unsigned int,unsigned long,unsigned long,tagRECT const *,unsigned int,unsigned int,int,int);
	void DrawTextW(CLVDrawState *,HDC__ *,unsigned short const *,tagRECT const *,int,unsigned int,int,int,unsigned long,unsigned long);
	void EndFakeCustomDraw(LVFAKEDRAW *);
	void EndFakeItemDraw(LVFAKEDRAW *);
	void ThemeDrawText(CLVDrawState *,void *,HDC__ *,int,int,_DTTOPTS *,unsigned short const *,tagRECT const *,int,unsigned int,int,int,unsigned long,unsigned long);
};

class CLVDrawManager
{
	int _GetEmptyText();
	void _DrawOutlineRectAlpha(HDC__ *,HDC__ *,tagRECT * const);
	void _InvalidateItemWorker(CLVDrawState *,int,int,bool,unsigned int,unsigned int);
	void _LazyCreateObjects(int,int);
	void _LazyCreateObjectsInGroupView(int,int,int,int);
	void _LazyCreateWinEvents(tagLVITEMINDEX,tagLVITEMINDEX);
	void _OnPaint(HDC__ *);
	void _OnPaintWorkAreas(HDC__ *,tagRECT const *);
	void _PaintItems(HDC__ *,tagRECT const *);
	void _PaintMarquee(HDC__ *,void *,tagRECT const *);
	void _PaintOutsideWorkAreas(HDC__ *,tagRECT const *);
	void _PaintWorkArea(HDC__ *,tagRECT const *);
public:
	int GetStartEndIndex(tagRECT const *,int *,int *);
	int GetStartEndItemIndex(tagRECT const *,tagLVITEMINDEX *,tagLVITEMINDEX *);
	int OnRedrawItems(int,int);
	virtual long CustomDrawText(HDC__ *,unsigned short const *,int,tagRECT *,unsigned int,int);
	virtual long GetState(unsigned long,unsigned int);
	virtual long InvalidateRect(unsigned long,tagRECT const *);
	virtual long Notify(unsigned long,int,int);
	virtual long OnCustomDraw(unsigned long,HDC__ *,tagRECT const *,unsigned long,int,unsigned int,__int64 *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	void DeleteHrgnInval();
	void InvalidateItem(int,int,bool,unsigned int,unsigned int);
	void InvalidateItemPtr(int,_LISTITEM *,unsigned int);
	void InvalidateRegion(HRGN__ *);
	void InvalidateSelectedOrCutOwnerData(ILVRange *);
	void OnPaint(HDC__ *);
	void OnSetRedraw(int);
	void RedrawSelection();
};

struct CLVDrawState
{
	void OnDestroy();
	void SetLabelFont(HFONT__ *);
};

struct CLVExplorerDesktopWorkAreaDrawState
{
	CLVExplorerDesktopWorkAreaDrawState(CListView *,int);
	void RefreshIconSpacing();
};

struct CLVFButton
{
	long GetLParam(__int64 *);
	long SetButton(unsigned short const *,unsigned short const *,unsigned int,__int64);
};

struct CLVFocusManager
{
	int SetFocusSel(int,int,int,int,int);
	int SetFocusedItem(_LISTITEM const *);
	void ClearHotSubItem();
	void OnSetHotItem(int,int);
	void OnSetHotSubItem(int);
};

class CLVFooter
{
	long _ClearFooter(int);
	void _Execute(int);
	void _GetOffsetFooterRect(tagRECT *);
	void _OffsetForClientRect(tagRECT *);
	void _SizeFooter(HDC__ *);
public:
	__int64 OnGetItem(unsigned int,tagLVFOOTERITEM *);
	__int64 OnGetItemRect(unsigned int,tagRECT *);
	int CheckMouseClick(int,int);
	int GetHotButton();
	int Height();
	int HitTest(int,int,unsigned int *,int);
	int IsInClientRect();
	int NeedsViewColumn();
	int OnEnsureVisible();
	int OnKey(unsigned int,int,int,int *,int *,int *);
	long InsertButton(unsigned int,unsigned short const *,unsigned short const *,unsigned int,__int64);
	long Show(IListViewFooterCallback *);
	void ClearButtonHoverState();
	void InvalidateFooter();
	void OnNavigate(unsigned int);
	void Paint(HDC__ *,tagRECT const *);
	void SizeText(void *,HDC__ *,unsigned short const *,tagSIZE *);
	void UpdateViewRect(tagRECT *);
};

class CLVGroupManager
{
	int _EnsureGroupDPA();
	static CListGroup * _CreateGroup(int,CListView *);
	static int s_GroupSort(CListGroup const *,CListGroup const *,__int64);
public:
	CListGroup * FindNextVisibleGroup(int,int *);
	CListGroup * FindPrevVisibleGroup(int,int *);
	CListGroup * GetGroupFromItemIndex(tagLVITEMINDEX);
	CListGroup * GetOwnerDataItemGroup(int,int,int *);
	_LISTITEM * GetNextItem(_LISTITEM *,unsigned int);
	__int64 OnGetGroupInfo(int,tagLVGROUP *);
	__int64 OnGetGroupInfoByIndex(int,tagLVGROUP *);
	__int64 OnGetGroupMetrics(tagLVGROUPMETRICS *);
	__int64 OnGetGroupRect(int,int,int,tagRECT *);
	__int64 OnInsertGroup(int,tagLVGROUP const *);
	__int64 OnInsertGroupSorted(tagLVINSERTGROUPSORTED const *);
	__int64 OnRemoveGroup(int);
	__int64 OnSetGroupInfo(int,int,tagLVGROUP const *);
	__int64 OnSetGroupMetrics(tagLVGROUPMETRICS const *);
	int FindNearestIndex(int,int);
	int FixupGroupsAfterSorting();
	int GetGroupIndexFromItemIndex(tagLVITEMINDEX);
	int GetItemIndexFromGroupItem(int,int,tagLVITEMINDEX *);
	int GetNextItemOwnerData(int,int,unsigned int,int *);
	int GetOwnerDataItemGroupCount(int);
	int HitTestIndex(int,int,unsigned int *,int);
	int HitTestRect(int,tagRECT const *,int *,int *,int *,int *);
	int HitTestRectForItems(tagRECT const *,tagLVITEMINDEX *,tagLVITEMINDEX *);
	int IsFirstGroup(int,int);
	int IsItemVisible(int,int);
	int OnKey(unsigned int,int,int,int *,int *);
	int SortGroups(int (*)(int,int,void *),void *);
	long SetGroupInfo(int,tagLVGROUP const *);
	void ComputeGroups(int,int *,int *);
	void EnsureGroupIds();
	void Initialize();
	void OnNavigate(int,int,int,int,int);
	void Paint(HDC__ *,tagRECT const *);
	void RelayoutGroups();
	void SetFocusedGroup(int);
	void SetHotGroup(CListGroup *,unsigned long);
	void SetMetrics();
	void UpdateViewRect(tagRECT *);
};

class CLVHeaderControlManager
{
protected:
	int _ComputeAutoWidth(int,int);
	int _ComputeColumnWidthForItem(int,int,LVFAKEDRAW *,tagLVITEMW *);
	int _ForwardHeaderNotify(tagNMHEADERW *);
	int _GetAutoWidth(int,int);
	int _GetWidth(int,COLUMNWIDTHTYPE);
	int _InsertSubItemsForColumn(int);
	int _SetAdjustingColumns(int,int);
	int _SnapToWidth(int,int,COLUMNWIDTHTYPE,int *);
	int _ValidateMinWidth(int,int);
	void * _GetHDPtr();
	void _AdjustColumn(int);
	void _AutosizeDefault(int);
	void _AutosizeLeftToRight(int);
	void _RHeaderTrack(tagNMHEADERW const *);
	void _RedrawOrInvalidate(tagRECT const *,unsigned int);
	void _SetWidth(int,COLUMNWIDTHTYPE,int);
public:
	__int64 CreateHeader();
	__int64 HeaderNotify(tagNMHEADERW *);
	int GetItem(int,_HD_ITEMW *);
	int GetItemRect(int,tagRECT *);
	int GetTotalColumnWidth();
	int IndexToOrder(int);
	int OnDeleteColumn(int);
	int OnGetColumn(int,tagLVCOLUMNW *);
	int OnGetColumnA(int,tagLVCOLUMNA *);
	int OnGetColumnWidth(int);
	int OnInsertColumn(int,tagLVCOLUMNW const *);
	int OnInsertColumnA(int,tagLVCOLUMNA *);
	int OnSetColumn(int,tagLVCOLUMNW const *);
	int OnSetColumnA(int,tagLVCOLUMNA *);
	int OrderToIndex(int);
	int SetColumnWidth(int,int);
	int SetItem(int,_HD_ITEMW const *);
	int XHitTestColumnHeader(int);
	void AutosizeColumns(int);
	void ConstrainColWidth(int,_HD_ITEMW *);
	void OnSetBkgColor(unsigned long);
	void OnViewModeChange();
	void SetColumnCheckBox(int,int);
	void UpdateHeader(int,tagRECT *);
	void UpdateHeaderCheckbox();
};

struct CLVHitTestManager
{
	int OnHitTest(tagLVHITTESTINFO *,int,int);
};

class CLVIconView
{
protected:
	void _HitTestItemRect(CLVDrawState *,tagPOINT const *,tagPOINT const *,tagRECT const *,tagRECT const *,unsigned int *);
	void _RefoldLabelRect(CLVDrawState *,tagRECT *,_LISTITEM const *);
public:
	int GetUnfoldedRect(CLVDrawState *,int,int,tagRECT *,tagRECT *);
	int IsItemUnfolded(int,int);
	int IsItemUnfolded2(CLVDrawState *,int,int,int,unsigned short *,int);
	int IsItemUnfoldedPtr(_LISTITEM const *);
	int UnfoldRects(CLVDrawState *,int,int,tagRECT const *,tagRECT *,tagRECT *,tagRECT *);
	virtual int v_ItemHitTest(int,int,unsigned int *,int *,int *);
	void GetRects(CLVDrawState *,_LISTITEM *,unsigned long,tagRECT *,tagRECT *,tagRECT *);
	void GetRectsOwnerData(CLVDrawState *,int,int,unsigned long,tagRECT *,tagRECT *,_LISTITEM *,int);
	void InvalidateFoldedItem(int,int,int,unsigned int);
};

class CLVImageListManager
{
protected:
	long _PositionImageWithOriginalSize(LVDRAWASYNCPARAMS *);
	void _OnSetNormalImageList(CLVDrawState *,_IMAGELIST *,_IMAGELIST * *,bool *);
	void _OnSetResizableImageList(CLVDrawState *,_IMAGELIST *,_IMAGELIST * *,bool *);
	void _OnSetSmallImageList(CLVDrawState *,_IMAGELIST *,_IMAGELIST * *,bool *);
	void _OnSetStateImageList(CLVDrawState *,_IMAGELIST *,_IMAGELIST * *,bool *);
public:
	__int64 OnGetImageList(short,int);
	__int64 OnSetImageList(short,int,_IMAGELIST *);
	bool IsNormalImageListBkColorEqualToBkColor();
	int GetIconBufferX(CLVDrawState *);
	int GetIconBufferY(CLVDrawState *);
	int GetStateCX(CLVDrawState *);
	int OnSetImageSize(int,int);
	long DrawAsync(LVDRAWASYNCPARAMS *,int);
	long GetCurrentImageListAsHIML(CLVDrawState *,_IMAGELIST * *);
	long GetImageListAsHIML(CLVDrawState *,int,_IMAGELIST * *);
	unsigned int DrawImageEx2(CLVDrawState *,tagLVITEMW const *,HDC__ *,int,int,unsigned long,unsigned int,int,int,int);
	unsigned long OnSetIconSpacing(__int64);
	void InitCheckBoxes(int);
};

class CLVInPlaceEditingManager
{
	HWND__ * _CreateEditWnd(CLVDrawState *,unsigned short const *,int);
	HWND__ * _CreateEditWndSendNotify(CLVDrawState *,int,int,unsigned short const *);
	int _OnEditGroup(int,LV_EDIT_FLAGS);
	int _OnEditSubItem(int,int,int,LV_EDIT_FLAGS);
	int _OnFinishEditLabel(int);
	int _TryEditGroup(int);
	int _TryEditSubItem(CLVDrawState *,int,int,int);
	long _OnBeginEditByPropertyControl(IPropertyControl *,LV_EDIT_FLAGS,tagRECT const *);
	static __int64 s_EditWndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	void _GetNextItemOrGroup(int *,int *,int);
	void _OnFinishEditGroup(int);
	void _OnFinishEditSubItem(int);
public:
	HWND__ * OnEditLabel(CLVDrawState *,int,int,unsigned short const *);
	int CanEditSubItems();
	int CancelPendingEdit();
	int ComputeEditYPadding(CLVDrawState *);
	int DismissEdit(int);
	int EditItem(CLVDrawState *,int,int,int,int,LV_EDIT_FLAGS);
	int IsEditing(int,int,int);
	int IsEditingSubItem(int,int,int);
	int IsInEdit();
	int IsStuckInEdit();
	void EditNextSubItem(int);
	void ResizeSubItemControl();
	void SetEditSize(CLVDrawState *);
	void SetupPendingNameEdit();
	void TryEditHotItem();
};

struct CLVInsertionMarkManager
{
	__int64 OnSetInsertMark(LVINSERTMARK const *);
	int OnGetInsertMarkRect(tagRECT *);
	void InvalidateMark();
};

class CLVItemStore
{
	int _CompareString(int,unsigned short const *,unsigned int,int);
	int _DoLookupString(unsigned short const *,unsigned int,int,int);
	int _FindCachedItem(int,int);
	int _LookupString(unsigned short const *,unsigned int,int);
	int _SendChange(int,int,int,unsigned int,unsigned int,unsigned int,__int64);
	int _SortAllColumns(LVSortInfo *);
	static int s_ClearVisibleItem(VISIBLELISTITEM *,void *);
	static int s_SortCallback(void const *,void const *,__int64);
	void _TrimItemCache();
public:
	CLVDrawState * GetDrawStateForItem(int);
	_LISTITEM * CreateItem(tagLVITEMW const *);
	_LISTITEM * InsertItemInternal(tagLVITEMW const *,int *);
	__int64 OnDeleteAllItems();
	__int64 OnMapIdToIndex(unsigned int);
	__int64 OnMapIndexToID(unsigned int);
	int FreeItem(_LISTITEM *);
	int OnDeleteItem(int);
	int OnFindItem(int,int,tagLVFINDINFOW const *,int *);
	int OnFindItemA(int,tagLVFINDINFOA *);
	int OnGetItem(tagLVITEMW *);
	int OnGetItemA(tagLVITEMA *);
	int OnGetItemRect(int,int,int,tagRECT *);
	int OnGetItemText(int,tagLVITEMW *);
	int OnGetNextItem(int,int,unsigned int,int *);
	int OnInsertItemA(tagLVITEMA *);
	int OnSetItem(tagLVITEMW const *);
	int OnSetItemA(tagLVITEMA *);
	int OnSetItemCount(int,unsigned long);
	int OnSetItemState(int,int,unsigned int,unsigned int);
	int OnSetItemText(int,int,unsigned short const *);
	int OnSetItemTextA(int,int,char const *);
	int OnSortItems(__int64,int (*)(__int64,__int64,__int64),int);
	unsigned int OnGetItemState(int,int,unsigned int);
	void CacheItem(CLVDrawState *,unsigned short const *,_LISTITEM const *);
	void ComputeItemCenter(tagPOINT const *,short,int *,int *);
	void DeleteCachedItems();
	void HandleStateIconClick(int);
	void ResetCachedLabelSizes();
	void ResetCachedPositions();
};

class CLVKeyboardManager
{
protected:
	int _IncrementalSearch(int,tagNMLVFINDITEMW *,int *);
	int _NearestItemCommon(int,int,int,unsigned int,tagRECT *,int *,unsigned __int64 *,int *,int *,int *,int);
	static unsigned short const * const s_szIMECompPos;
public:
	int FindNearestItem(int,int,tagRECT,unsigned int,int *,int);
	int OnArrow(int,int,int,unsigned int,int *,int *);
	int OnImeComposition(unsigned __int64,__int64);
	void InsertComposition(HWND__ *,unsigned __int64,__int64);
	void OnChar(CListView *,unsigned int,int);
	void OnKey(unsigned int,int,int,unsigned int,int);
	void PaintComposition(CLVDrawState *,HWND__ *);
	void SizeIME(HWND__ *);
};

class CLVListView
{
protected:
	static int s_Scroll2_SmoothScroll(HWND__ *,int,int,tagRECT const *,tagRECT const *,HRGN__ *,tagRECT *,unsigned int);
	void _SetColumnWidthAndPreserveScrollPos(int);
public:
	int CalcViewItem(int,int);
	int GetNewColWidth(int,int);
	int MaybeResizeListColumns(int,int);
	int ResizeListColumns();
	int SetColumnWidthEx(int,int,int);
	virtual int v_DrawItem(LVDRAWITEM *);
	virtual int v_GetScrollUnitsPerLine(unsigned int);
	virtual int v_ItemHitTest(int,int,unsigned int *,int *,int *);
	virtual int v_OnInsertMarkHitTest(int,int,LVINSERTMARK *);
	virtual int v_RecomputeEx(int);
	virtual unsigned long v_ApproximateViewRect(int,int,int);
	virtual void v_AdjustRectForViewMargin(tagRECT *);
	virtual void v_OnScroll(unsigned int,int,unsigned int);
	virtual void v_Scroll2(int,int,unsigned int);
	virtual void v_UpdateScrollBars();
	void GetRects(CLVDrawState *,int,tagRECT *,tagRECT *,tagRECT *,tagRECT *);
};

struct CLVMouseManager
{
	int OnSetCursorMsg();
	int SetFocus(HWND__ *);
	void HandleMouse(int,int,int,unsigned int,int);
	void OnLButtonUp(int,int,unsigned int);
	void OnMouseHover(int,int,unsigned int);
	void OnMouseLeave();
	void OnMouseMove(HWND__ *,unsigned __int64,__int64);
};

class CLVRange
{
protected:
	int _FindValue(long,long *);
	int _InsertRange(long,long,long);
	long _RemoveRanges(long,long,long *);
public:
	virtual long Clear();
	virtual long CountIncluded(long *);
	virtual long ExcludeRange(long,long);
	virtual long IncludeRange(long,long);
	virtual long InsertItem(long);
	virtual long InvertRange(long,long);
	virtual long IsEmpty();
	virtual long IsSelected(long);
	virtual long NextSelected(long,long *);
	virtual long NextUnSelected(long,long *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long RemoveItem(long);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CLVReportView
{
protected:
	int _SubItemHitTest(int,int,int,unsigned int *);
	short _GetCXLabel(int,int,_LISTITEM *,HDC__ *,int);
	static int s_Scroll2_SmoothScroll(HWND__ *,int,int,tagRECT const *,tagRECT const *,HRGN__ *,tagRECT *,unsigned int);
public:
	int GetRects(CLVDrawState *,int,int,tagRECT *,tagRECT *,tagRECT *,tagRECT *);
	int OnEnsureVisible(int,int,int,unsigned long);
	int XHitTest(int);
	int YHitTest(int,int *);
	short GetCXLabelSubItem(unsigned short const *,HDC__ *);
	virtual int v_DrawItem(LVDRAWITEM *);
	virtual int v_GetScrollUnitsPerLine(unsigned int);
	virtual int v_ItemHitTest(int,int,unsigned int *,int *,int *);
	virtual int v_OnInsertMarkHitTest(int,int,LVINSERTMARK *);
	virtual int v_RecomputeEx(int);
	virtual unsigned long v_ApproximateViewRect(int,int,int);
	virtual void v_AdjustItemTextRect(int,tagRECT *,int);
	virtual void v_OnScroll(unsigned int,int,unsigned int);
	virtual void v_Scroll2(int,int,unsigned int);
	virtual void v_UpdateScrollBars();
	void AfterRedraw(HDC__ *);
	void GetRectsEx(int,int,int,tagRECT *,tagRECT *);
	void Initialize(int);
};

class CLVScrollingManager
{
protected:
	int _CanScroll(int,int);
	int _ValidateOneScrollParam(int,int);
public:
	int FixIScrollPositions(int,tagRECT const *);
	int OnGetOrigin(tagPOINT *);
	int OnScrollSelectSmooth(int,int,unsigned int);
	int SendScrollNotify(int,int,int);
	int SetScrollInfo(int,tagSCROLLINFO const *,int);
	int ShouldScroll(tagPOINT const *,tagRECT const *);
	int ValidateScrollParams(int *,int *);
	void CommonOnScroll(unsigned int,int,int,int,int);
	void GetBaseScrollDeltas(int *,int *);
	void LVSeeThruScroll(tagRECT const *);
	void OnHVScroll(unsigned int,int,int);
	void ScrollDetect(tagPOINT,int *,int *);
	void UpdateScrollBars();
};

class CLVSelectionManager
{
protected:
	void SendODChangeAndInvalidate(int,int,unsigned int,unsigned int);
	void _DragSelectItem(CLVDrawState *,int,int,tagMSG *,tagPOINT *,int *,tagRECT *,tagRECT *);
public:
	unsigned long OnSetRangeObject(int,ILVRange *);
	void ButtonSelect(int,int,unsigned int,int);
	void DeselectAll(int,int);
	void DragSelect(int,int);
	void SelectRangeTo(int,int,int);
	void ToggleSelection(int,int);
};

struct CLVSlotsManager
{
	int CalcHitSlot(tagPOINT,int,int,int);
	int FindFreeSlot(int,int,int,unsigned int,int *,int,HDC__ *,int,int);
	int FindItemInSlot(short,int);
	int GetSlotCountEx(int,short,int *,int *,int *,int *);
	int OnGetFrozenItem();
	int OnGetFrozenSlot(tagRECT *);
	int OnSetFrozenSlot(int,tagPOINT const *);
	void CalcItemSlotAndRect(_LISTITEM *,int *,tagRECT *);
	void CalcMinMaxIndex(tagRECT const *,int *,int *);
	void CalcSlotRect(_LISTITEM *,int,int,int,int,int,tagRECT *);
};

class CLVSmallIconView
{
protected:
	void _HitTestItemRect(_LISTITEM const *,tagPOINT const *,tagRECT const *,tagRECT const *,unsigned int *);
public:
	virtual int v_ItemHitTest(int,int,unsigned int *,int *,int *);
	void GetRects(CLVDrawState *,_LISTITEM *,tagRECT *,tagRECT *,tagRECT *);
	void GetRectsOwnerData(CLVDrawState *,int,int,tagRECT *,tagRECT *,_LISTITEM *,int);
};

class CLVSubitemStore
{
protected:
	_LISTSUBITEM * _FindSubItem(int,int,int,int);
	_LISTSUBITEM * _FindSubItemOwnerData(int,int,int,int);
	int _FindSubItemEntry(int,int);
	void _TrimItemCache();
public:
	int GetCachedSubItemRect(int,int,int,unsigned short const *,tagRECT *,tagRECT *);
	int GetCachedTotalRect(int,int,int,tagRECT *);
	int GetSubItemCount(tagLVITEMW *);
	int IsValidSubItemNumber(int);
	int OnGetSubItemRect(int,int,int,int,tagRECT *);
	int OnIndexToOrder(int,int);
	int OnOrderToIndex(int,int);
	int OnSetSubItem(tagLVITEMW const *);
	int OrderToSubItem(tagLVITEMW *,int);
	int SubItemToOrder(tagLVITEMW *,int);
	long GetSubItemControl(int,int,IDrawPropertyControl * *);
	static int s_FreeColumnData(void *,void *);
	static int s_FreeSubItemEntry(_SUBITEMENTRY *,void *);
	static void FreeSubItem(_LISTSUBITEM *);
	static void s_ClearSubItem(_LISTSUBITEM *);
	void ClearCachedSubItems();
	void OnGetSubItem(int,int,int,_LISTSUBITEM *);
	void SetCachedSubItemRect(int,int,int,unsigned short const *,tagRECT const *,tagRECT const *);
};

struct CLVThemesManager
{
	bool HasCustomTheme();
	int DrawCustomTheme(LVDRAWITEM *);
	void DrawThemedFocusRect(HDC__ *,tagRECT const *,tagRECT const *);
	void OnThemeChange();
	void OpenTheme();
};

class CLVTileView
{
protected:
	int _GetRoomForLabel();
	int _IsSubItemEmpty(tagLVITEMW *,int);
	void _CalculateSubItemRectWorker(int,int,int,int,unsigned short const *,HDC__ *,LVFAKEDRAW *,int,tagRECT *,tagRECT *);
	void _CalculateTileDimensions(tagSIZE,int,int *);
	void _DrawLabel(LVDRAWITEM *,tagLVITEMW const *,int,int,unsigned int *,tagRECT *,tagRECT const &,tagRECT const &,unsigned long,_LISTITEM *);
	void _DrawSubItems(LVTILECOLUMNSENUM *,LVDRAWITEM *,tagLVITEMW *,int,int,int,int,unsigned int,tagRECT *,tagRECT const &,unsigned long,LVTILECOLUMNINFO *,_LISTITEM *);
	void _DrawTitle(LVDRAWITEM *,int,tagRECT const &,unsigned long,unsigned long);
	void _DrawValue(LVDRAWITEM *,tagLVITEMW const *,IDrawPropertyControl *,int,tagRECT const &,unsigned long,int,int,int,unsigned long,unsigned int,unsigned short const *,EXTCOL const &,unsigned long);
	void _GetColumns(tagLVITEMW *,LVTILECOLUMNINFO *);
	void _GetRectsInternal(_LISTITEM *,int,int,HDC__ *,tagRECT *,tagRECT *,tagRECT *);
	void _GetRectsOwnerDataInternal(int,int,tagRECT *,tagRECT *,_LISTITEM *,int);
	void _HitTestItemRect(int,int,_LISTITEM const *,int,int,tagPOINT const *,tagPOINT const *,tagRECT const *,tagRECT const *,unsigned int *,int *);
	void _LayoutColumns(LVDRAWITEM *,LVTILECOLUMNINFO *,int,int);
	void _RecomputeLabelSizeInternal(_LISTITEM *,int,int,HDC__ *,int);
public:
	int OnGetTileInfo(tagLVTILEINFO *);
	int OnSetTileInfo(tagLVTILEINFO *);
	int OnSetTileViewInfo(tagLVTILEVIEWINFO *);
	int Tile_Set(unsigned int * *,int * *,unsigned int *,unsigned int const *,int const *,unsigned int,int,int);
	int _GetCurrentColFmt(LVTILECOLUMNSENUM const *,int,tagLVITEMW const *);
	int _GetNextColumn(LVTILECOLUMNSENUM *,int);
	virtual int v_DrawItem(LVDRAWITEM *);
	virtual int v_ItemHitTest(int,int,unsigned int *,int *,int *);
	virtual void v_AdjustItemTextRect(int,tagRECT *,int);
	virtual void v_RecomputeLabelSize(CLVDrawState *,_LISTITEM *,int,HDC__ *,int);
	void CalculateSubItemRect(int,int,int,int,int,_LISTITEM *,unsigned short *,HDC__ *,LVFAKEDRAW *,tagRECT *,int *,int *);
	void GetRects(CLVDrawState *,_LISTITEM *,tagRECT *,tagRECT *,tagRECT *);
	void GetRectsEx(int,int,int,tagRECT *,tagRECT *);
	void GetRectsOwnerData(CLVDrawState *,int,int,tagRECT *,tagRECT *,_LISTITEM *,int);
	void RecalcTileSize();
	void _InitTileColumnsEnum(LVTILECOLUMNSENUM *,CListView const *,unsigned int,unsigned int *,int);
};

struct CLVTooltipManager
{
	__int64 OnSetInfoTip(tagLVSETINFOTIP const *);
	int OnKeyboardSelected(int,int);
	void CancelTipTrack();
	void Initialize();
	void InvalidateTTLastHit(int);
	void PopBubble();
};

class CLVView
{
protected:
	int _EnsureVisibleCommon(tagRECT const *,tagRECT const *,int,int);
	int _GetItemPixelRow(_LISTITEM const *);
	int _GetMaxPlacedItem();
	void _AdjustViewRectByViewMargin(tagRECT *,int);
	void _ComputeLabelSizeWorker(CLVDrawState *,tagLVITEMW *,unsigned short const *,HDC__ *,tagRECT *,tagRECT *,tagRECT *);
	void _NearestSlot(_LISTITEM *,tagPOINT *,int,int,tagRECT const *);
	void _PrePositionItems();
public:
	int CalcViewRect(int,int,tagRECT *);
	int ComputeCXItemSize();
	int ComputeCYItemSize();
	int FastClipItem(CLVDrawState *,int,int,tagRECT const *);
	int GetRects(CLVDrawState *,int,int,unsigned long,tagRECT *,tagRECT *,tagRECT *,tagRECT *);
	int GetRectsFromItem(CLVDrawState *,int,_LISTITEM *,unsigned long,tagRECT *,tagRECT *,tagRECT *,tagRECT *);
	int GetRectsOwnerData(CLVDrawState *,int,int,unsigned long,tagRECT *,tagRECT *,tagRECT *,tagRECT *,_LISTITEM *);
	int IsCleanRect(tagRECT const *,int,unsigned long,int *,HDC__ *);
	int IsItemVisible(int,int);
	int IsViewMarginSet();
	int OnEnsureVisible(CLVDrawState *,int,int,unsigned long);
	int OnEnsureVisibleGroup(int);
	int OnEnsureVisibleSubItem(int,int,int);
	int OnGetCountPerPage();
	int OnGetItemPosition(int,int,tagPOINT *);
	int OnSetItemPosition(int,int,int);
	int OnSetViewMargins(tagRECT const *);
	int SetIconPos(_LISTITEM *,int,int);
	int SnapToGrid(_DPA *);
	int UnstackOverlaps(_DPA *,int,int *);
	static int s_Scroll2_SmoothScroll(HWND__ *,int,int,tagRECT const *,tagRECT const *,HRGN__ *,tagRECT *,unsigned int);
	unsigned int IsItemOnViewEdge(CLVDrawState *,_LISTITEM *);
	unsigned long GetClientRect(tagRECT *,int,tagRECT *);
	unsigned long GetStyleAndClientRectGivenViewRect(tagRECT const *,tagRECT *);
	unsigned long OnApproximateViewRect(int,int,int);
	virtual int v_CommonArrangeEx(unsigned int,_DPA *,short);
	virtual int v_DrawItem(LVDRAWITEM *);
	virtual int v_GetScrollUnitsPerLine(unsigned int);
	virtual int v_OnInsertMarkHitTest(int,int,LVINSERTMARK *);
	virtual int v_RecomputeEx(int);
	virtual unsigned long v_ApproximateViewRect(int,int,int);
	virtual void v_AdjustItemTextRect(int,tagRECT *,int);
	virtual void v_AdjustRectForViewMargin(tagRECT *);
	virtual void v_CalcEditControlColors(unsigned int,unsigned int,unsigned int,unsigned long *,unsigned long *);
	virtual void v_OnScroll(unsigned int,int,unsigned int);
	virtual void v_RecomputeLabelSize(CLVDrawState *,_LISTITEM *,int,HDC__ *,int);
	virtual void v_Scroll2(int,int,unsigned int);
	virtual void v_UpdateScrollBars();
	void AddViewRectBuffer(tagRECT *);
	void AdjustViewRectOnMove(CLVDrawState *,_LISTITEM *,int,int);
	void CalcBounds(CLVDrawState *,unsigned long,tagRECT const *,tagRECT const *,tagRECT *);
	void ComputePositionOwnerData(_LISTITEM *,int);
	void GetCurrentItemSize(CLVDrawState *,int *,int *);
	void GetOffsetItemPosition(_LISTITEM const *,tagPOINT *);
	void GetViewRect2(tagRECT *,int,int);
	void InvalidateBelow(int,int);
	void InvalidateCachedLabelSizes(bool);
	void OnUpdate(int,int);
	void ScrollFocusIntoView();
	void SetCYItem(int,bool);
};

class CLVWorkAreaManager
{
protected:
	static bool FindWorkAreaContainingXYInRectList(long,long,tagRECT *,short,short *);
	void _BullyIconsOnWorkarea(_DPA *);
public:
	CLVDrawState * GetDrawStateForWorkArea(short);
	bool FindWorkAreaForItemCenter(tagPOINT const *,_LISTITEM *,short *);
	bool IsPerWorkAreaDrawStateEnabled();
	void GetWorkAreaSlotCounts(bool,int * const);
	void OnGetWorkAreas(int,tagRECT *);
	void OnGetWorkAreasWithDpi(int,tagLVWORKAREAWITHDPI *);
	void OnSetWorkAreas(int,tagRECT const *);
	void OnSetWorkAreasWithDpi(int,tagLVWORKAREAWITHDPI const *);
};

class CLayerImageList
{
	CLayerImageList();
	long _FindImage(int,int,LAYERINFO *,IImageList2 * *,IImageList2 * *);
	long _GetLayerInfo(int,LAYERINFO *);
	long _Purge(int);
	long _SetLayered(int,int,int,LAYERINFO *);
	static int _PurgeRelatedImages(LAYERINFO *,void *);
	virtual ~CLayerImageList();
public:
	long Initialize();
	virtual long Clone(_GUID const &,void * *);
	virtual long DiscardImages(int,int,unsigned long);
	virtual long Draw(_IMAGELISTDRAWPARAMS *);
	virtual long DumpContents(int,IDebugOutput *,unsigned __int64 *);
	virtual long ForceImagePresent(int,unsigned long);
	virtual long GetClassID(_GUID *);
	virtual long GetIconSize(int *,int *);
	virtual long GetImageCount(int *);
	virtual long GetImageList(unsigned int,_GUID const &,void * *);
	virtual long GetItemFlags(int,unsigned long *);
	virtual long GetLayered(int,int *,int *);
	virtual long GetOverlayImage(int,int *);
	virtual long Load(IStream *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Remove(int);
	virtual long Save(IStream *,int);
	virtual long SetFlags(unsigned int);
	virtual long SetIconSize(int,int);
	virtual long SetImageCount(unsigned int);
	virtual long SetImageLists(unsigned long,IImageList * *);
	virtual long SetLayered(int,int,int);
	virtual long SetOverlayImage(int,int);
	virtual long v_GetImageInterface(int,int *,int *,unsigned long,_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CLink
{
	__int64 GetItem(tagLITEM *);
	__int64 SendNotify(unsigned int,int,int);
	__int64 SetItem(tagLITEM const *);
	long GetLinkText(tagVARIANT,unsigned int,unsigned short * *);
	static __int64 WndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	virtual long _GetChildCount();
	virtual unsigned int GetDefaultActionStringID();
	void Paint(HDC__ *,tagRECT const *,tagRECT const *);
	void UpdateTabstop();
public:
	CLink(HWND__ *);
	virtual long CustomDrawText(HDC__ *,unsigned short const *,int,tagRECT *,unsigned int,int);
	virtual long GetState(unsigned long,unsigned int);
	virtual long InvalidateRect(unsigned long,tagRECT const *);
	virtual long Notify(unsigned long,int,int);
	virtual long OnCustomDraw(unsigned long,HDC__ *,tagRECT const *,unsigned long,int,unsigned int,__int64 *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long accDoDefaultAction(tagVARIANT);
	virtual long accHitTest(long,long,tagVARIANT *);
	virtual long accLocation(long *,long *,long *,long *,tagVARIANT);
	virtual long accNavigate(long,tagVARIANT,tagVARIANT *);
	virtual long get_accChild(tagVARIANT,IDispatch * *);
	virtual long get_accDefaultAction(tagVARIANT,unsigned short * *);
	virtual long get_accFocus(tagVARIANT *);
	virtual long get_accName(tagVARIANT,unsigned short * *);
	virtual long get_accRole(tagVARIANT,tagVARIANT *);
	virtual long get_accState(tagVARIANT,tagVARIANT *);
	virtual long get_accValue(tagVARIANT,unsigned short * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~CLink();
};

class CListGroup
{
	int GetGroupInfo(int,tagLVGROUP *);
	int _ComputeSubsetItemCount();
	int _HitTestItemInternal(int,int,int);
	int _ShowSubset();
	long InsertItem(int,_LISTITEM *,int *);
	long _CreateMarkup(unsigned short const *,unsigned long,IControlMarkup * *);
	long _GetMarkup(unsigned long,IControlMarkup * *);
	void _GetThemePartState(int *,int *);
	void _MapClientToGroup(tagPOINT const *,tagPOINT *);
	void _NotifyGroupChanged(unsigned long,unsigned long);
	void _PaintCollapse(tagNMLVCUSTOMDRAW *);
	void _PaintFooter(unsigned long,tagNMLVCUSTOMDRAW *);
	void _PaintHeader(unsigned long,tagNMLVCUSTOMDRAW *);
	void _PaintItems(HDC__ *,int,tagRECT const *);
	void _SetFocusedGroupWorker(int,bool);
public:
	_LISTITEM * GetNextItem(_LISTITEM const *,unsigned int);
	int BodyHeight();
	int BottomHeight();
	int FindNearestItem(int,int,int);
	int FooterHeight();
	int GetGroupItemFromItem(int,int);
	int GetGroupRect(tagRECT *);
	int GetHeaderRect(tagRECT *);
	int GetLabelRect(tagRECT *);
	int GetListviewItemIndex(int,int);
	int GetMarkupRect(unsigned int,tagRECT *);
	int GetNextItemOwnerData(int,int,unsigned int,int *);
	int GetSubsetItemCount();
	int GetTrueItemCount();
	int HeaderHeight();
	int Height();
	int HitTest(int,int,unsigned int *,int);
	int HitTestItem(int,int,int);
	int HitTestListViewItem(int,int,int);
	int IsAnyMarkupFocused();
	int IsInClientRect();
	int IsMarkupFocused(unsigned int);
	int IsMarkupVisible(unsigned int);
	int LoseItems();
	int OnKeyDown(unsigned int);
	int Select(int,int,int,int);
	int SelectRange(int,int,int,int,int);
	int SetGroupInfo(tagLVGROUP const *,int);
	int SubsetHeight();
	int TopHeight();
	int Visible();
	int YHitTestListViewItem(int,int);
	long Initialize(int);
	long OnButtonDown(tagPOINT);
	long OnButtonUp(int,tagLVHITTESTINFO const *,unsigned int);
	virtual long CustomDrawText(HDC__ *,unsigned short const *,int,tagRECT *,unsigned int,int);
	virtual long GetState(unsigned long,unsigned int);
	virtual long InvalidateRect(unsigned long,tagRECT const *);
	virtual long Notify(unsigned long,int,int);
	virtual long OnCustomDraw(unsigned long,HDC__ *,tagRECT const *,unsigned long,int,unsigned int,__int64 *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	void Compute(int,int,int *,int *);
	void ComputeHeaders(int);
	void GetCollapseBox(tagRECT const *,tagRECT *,int,int);
	void GetStateBox(tagRECT const *,tagRECT *,int,int);
	void InvalidateGroupPart(unsigned int);
	void Paint(HDC__ *,int,tagRECT const *);
	void SelectAll();
	void SelectItem();
	void SetFocus(int,bool);
	void SetHotState(unsigned long);
	void SetItemPositionOwnerData(int,int,int,_LISTITEM *);
	void SetMarkupFocus(unsigned int,int);
	void ToggleCollaspe(int);
	void UnselectAll();
	void UnselectItem();
	~CListGroup();
};

class CListView
{
	CListView();
	virtual ~CListView();
protected:
	int _UpdateViewEffects();
	void _PreSwitchGroupsOff();
	void _PreSwitchGroupsOn();
	void _SwitchViewModeFromDetails(unsigned short,bool);
public:
	__int64 OnEnableGroupView(bool);
	__int64 OnGetEmptyText(unsigned short *,unsigned int);
	__int64 OnHelp(tagHELPINFO *);
	__int64 OnNotify(unsigned __int64,tagNMHDR *);
	__int64 OnTtnShow(tagNMTTSHOWINFO *);
	__int64 WndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	bool IsAutoArrangeView();
	bool IsDoubleBuffer();
	bool IsFullRowSelect();
	bool IsIScrollView();
	bool IsListViewFocused();
	bool IsRearrangeableView();
	bool IsShadowTextEnabled();
	bool IsSlotView();
	bool IsSubItemView();
	bool RestrictSelectToContents();
	bool ShowsHeader();
	int AreAllMonitorsAtLeast(unsigned int);
	int CancelPendingTimer(unsigned int,int);
	int GetClientRightMost();
	int GetRectFromGroup(int,tagRECT *);
	int IsEqualIndexes(tagLVITEMINDEX const &,tagLVITEMINDEX const &);
	int ItemToItemIndex(int,tagLVITEMINDEX *);
	int Notify(int,int,int);
	int OnCreate(tagCREATESTRUCTW *);
	int OnGetStringWidth(unsigned short const *,HDC__ *);
	int OnGetStringWidthA(char const *,HDC__ *);
	int OnSetBkColor(unsigned long);
	long SwitchViewMode(unsigned short,bool);
	static __int64 s_WndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	static unsigned int GetLVKeyFlags();
	unsigned int GetTextSelectionFlags(unsigned int,unsigned int);
	unsigned long ExtendedStyleChange(unsigned long,unsigned long);
	unsigned long GetSortColumnColor();
	unsigned long GetSubTextColor(unsigned long);
	virtual long ApproximateViewRect(int,int *,int *);
	virtual long ArrangeItems(int);
	virtual long Cancel();
	virtual long CancelEditLabel();
	virtual long Commit(int);
	virtual long ContextSensitiveHelp(int);
	virtual long CreateDragImage(int,tagPOINT const *,_IMAGELIST * *);
	virtual long DeleteAllItems();
	virtual long DeleteColumn(int);
	virtual long DeleteItem(int);
	virtual long EditGroupLabel(int);
	virtual long EditLabel(tagLVITEMINDEX,unsigned short const *,HWND__ * *);
	virtual long EditSubItem(tagLVITEMINDEX,int);
	virtual long EnableAlphaShadow(int);
	virtual long EnableGroupView(int);
	virtual long EnableIconBullying(int);
	virtual long EnsureItemVisible(tagLVITEMINDEX,int);
	virtual long EnsureSubItemVisible(tagLVITEMINDEX,int);
	virtual long FindItem(tagLVITEMINDEX,tagLVFINDINFOW const *,tagLVITEMINDEX *);
	virtual long GetBackgroundColor(unsigned long *);
	virtual long GetBackgroundImage(tagLVBKIMAGEW *);
	virtual long GetButtonLParam(int,__int64 *);
	virtual long GetCallbackMask(unsigned long *);
	virtual long GetClientRect(int,tagRECT *);
	virtual long GetColor(VPCOLORFLAGS,unsigned long *);
	virtual long GetColumn(int,tagLVCOLUMNW *);
	virtual long GetColumnMargin(tagRECT *);
	virtual long GetColumnOrderArray(int,int *);
	virtual long GetColumnWidth(int,int *);
	virtual long GetCountPerPage(int *);
	virtual long GetEditControl(HWND__ * *);
	virtual long GetEditItem(tagLVITEMINDEX *,int *);
	virtual long GetExtendedStyle(unsigned long *);
	virtual long GetFocusedColumn(int *);
	virtual long GetFocusedGroup(int *);
	virtual long GetFont(tagLOGFONTW *);
	virtual long GetFooterFocus(int *);
	virtual long GetFrozenItem(int *);
	virtual long GetFrozenSlot(tagRECT *);
	virtual long GetGroupCount(int *);
	virtual long GetGroupInfo(int,int,tagLVGROUP *);
	virtual long GetGroupMetrics(tagLVGROUPMETRICS *);
	virtual long GetGroupRect(int,int,int,tagRECT *);
	virtual long GetGroupState(int,unsigned long,unsigned long *);
	virtual long GetGroupSubsetCount(int *);
	virtual long GetHeaderControl(HWND__ * *);
	virtual long GetHotCursor(HICON__ * *);
	virtual long GetHotItem(tagLVITEMINDEX *);
	virtual long GetHotLightColor(unsigned long *);
	virtual long GetHoverTime(unsigned int *);
	virtual long GetImageList(int,_IMAGELIST * *);
	virtual long GetIncrSearchString(unsigned short *,int,int *);
	virtual long GetInsertMark(LVINSERTMARK *);
	virtual long GetInsertMarkColor(unsigned long *);
	virtual long GetInsertMarkRect(tagRECT *);
	virtual long GetItem(tagLVITEMW *);
	virtual long GetItemCount(int *);
	virtual long GetItemHeight(int *);
	virtual long GetItemPosition(tagLVITEMINDEX,tagPOINT *);
	virtual long GetItemRect(tagLVITEMINDEX,int,tagRECT *);
	virtual long GetItemSpacing(int,int *,int *);
	virtual long GetItemState(int,int,unsigned long,unsigned long *);
	virtual long GetItemText(int,int,unsigned short *,int);
	virtual long GetNextItem(tagLVITEMINDEX,unsigned long,tagLVITEMINDEX *);
	virtual long GetOrigin(tagPOINT *);
	virtual long GetOutlineColor(unsigned long *);
	virtual long GetSelectedColumn(int *);
	virtual long GetSelectedCount(int *);
	virtual long GetSelectionMark(tagLVITEMINDEX *);
	virtual long GetStringWidth(unsigned short const *,int *);
	virtual long GetSubItemRect(tagLVITEMINDEX,int,int,tagRECT *);
	virtual long GetTextBackgroundColor(unsigned long *);
	virtual long GetTextColor(unsigned long *);
	virtual long GetTileInfo(tagLVTILEINFO *);
	virtual long GetTileViewInfo(tagLVTILEVIEWINFO *);
	virtual long GetToolTip(HWND__ * *);
	virtual long GetTopIndex(int *);
	virtual long GetView(unsigned long *);
	virtual long GetViewMargin(tagRECT *);
	virtual long GetViewRect(tagRECT *);
	virtual long GetVisibleItemRange(tagLVITEMINDEX *,tagLVITEMINDEX *);
	virtual long GetVisibleSlotCount(int *);
	virtual long GetWindow(HWND__ * *);
	virtual long GetWorkAreaCount(int *);
	virtual long GetWorkAreaImageList(int,int,_IMAGELIST * *);
	virtual long GetWorkAreas(int,tagRECT *);
	virtual long GetWorkAreasWithDpi(int,tagLVWORKAREAWITHDPI *);
	virtual long HasGroup(int,int *);
	virtual long HitTest(tagLVHITTESTINFO *);
	virtual long HitTestInsertMark(tagPOINT const *,LVINSERTMARK *);
	virtual long HitTestSubItem(tagLVHITTESTINFO *);
	virtual long InsertButton(int,unsigned short const *,unsigned short const *,unsigned int,__int64);
	virtual long InsertColumn(int,tagLVCOLUMNW * const,int *);
	virtual long InsertGroup(int,tagLVGROUP * const,int *);
	virtual long InsertGroupSorted(tagLVINSERTGROUPSORTED const *,int *);
	virtual long InsertItem(tagLVITEMW * const,int *);
	virtual long IsGroupViewEnabled(int *);
	virtual long IsItemVisible(tagLVITEMINDEX,int *);
	virtual long IsVisible(int *);
	virtual long MapIdToIndex(int,int *);
	virtual long MapIndexToId(int,int *);
	virtual long NextControl(int);
	virtual long OnChanging(int);
	virtual long OnInvokeVerb(unsigned short const *);
	virtual long OnStateChange(int,int *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long RecomputeItems(int);
	virtual long RedrawItems(int,int);
	virtual long RemoveAllButtons();
	virtual long RemoveAllGroups();
	virtual long RemoveGroup(int);
	virtual long RequestResize();
	virtual long ResetEmptyText();
	virtual long ScrollView(int,int);
	virtual long SetBackgroundColor(unsigned long);
	virtual long SetBackgroundImage(tagLVBKIMAGEW * const);
	virtual long SetCallbackMask(unsigned long);
	virtual long SetColor(VPCOLORFLAGS,unsigned long);
	virtual long SetColumn(int,tagLVCOLUMNW * const);
	virtual long SetColumnOrderArray(int,int const *);
	virtual long SetColumnWidth(int,int);
	virtual long SetExtendedStyle(unsigned long,unsigned long,unsigned long *);
	virtual long SetFont(tagLOGFONTW const *,int);
	virtual long SetFooterFocus(int);
	virtual long SetFrozenItem(int,int);
	virtual long SetFrozenSlot(int,tagPOINT const *);
	virtual long SetGroupInfo(int,int,tagLVGROUP * const);
	virtual long SetGroupMetrics(tagLVGROUPMETRICS * const);
	virtual long SetGroupSubsetCount(int);
	virtual long SetHotCursor(HICON__ *,HICON__ * *);
	virtual long SetHotItem(tagLVITEMINDEX,tagLVITEMINDEX *);
	virtual long SetHotLightColor(unsigned long);
	virtual long SetHoverTime(unsigned int,unsigned int *);
	virtual long SetIconSpacing(int,int,int *,int *);
	virtual long SetImageList(int,_IMAGELIST *,_IMAGELIST * *);
	virtual long SetInfoTip(tagLVSETINFOTIP * const);
	virtual long SetInsertMark(LVINSERTMARK const *);
	virtual long SetInsertMarkColor(unsigned long,unsigned long *);
	virtual long SetIntroText(unsigned short const *);
	virtual long SetItem(tagLVITEMW * const);
	virtual long SetItemCount(int,unsigned long);
	virtual long SetItemHeight(int);
	virtual long SetItemPosition(int,tagPOINT const *);
	virtual long SetItemState(int,int,unsigned long,unsigned long);
	virtual long SetItemText(int,int,unsigned short const *);
	virtual long SetKeyboardSelected(tagLVITEMINDEX);
	virtual long SetOutlineColor(unsigned long,unsigned long *);
	virtual long SetOwnerDataCallback(IOwnerDataCallback *);
	virtual long SetRangeObject(int,ILVRange *);
	virtual long SetSelectedColumn(int);
	virtual long SetSelectionFlags(SELECTION_FLAGS,SELECTION_FLAGS);
	virtual long SetSelectionMark(tagLVITEMINDEX,tagLVITEMINDEX *);
	virtual long SetSubItemCallback(ISubItemCallback *);
	virtual long SetTextBackgroundColor(unsigned long);
	virtual long SetTextColor(unsigned long);
	virtual long SetTheme(unsigned short const *,unsigned short const *);
	virtual long SetTileInfo(tagLVTILEINFO * const);
	virtual long SetTileViewInfo(tagLVTILEVIEWINFO * const);
	virtual long SetToolTip(HWND__ *,HWND__ * *);
	virtual long SetTypeAheadFlags(TYPEAHEAD_FLAGS,TYPEAHEAD_FLAGS);
	virtual long SetView(unsigned long);
	virtual long SetViewMargin(tagRECT const *);
	virtual long SetWatermark(HBITMAP__ *,VPWATERMARKFLAGS);
	virtual long SetWorkAreaImageList(int,int,_IMAGELIST *,_IMAGELIST * *);
	virtual long SetWorkAreas(int,tagRECT const *);
	virtual long SetWorkAreasWithDpi(int,tagLVWORKAREAWITHDPI const *);
	virtual long Show(IListViewFooterCallback *);
	virtual long SortGroups(int (*)(int,int,void *),void *);
	virtual long SortItems(int,__int64,int (*)(__int64,__int64,__int64));
	virtual long UpdateItem(int);
	virtual long Validate(unsigned short * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	void ClearItemIndexes();
	void EnableWindow(int);
	void InvalidateWindow();
	void NotifyCacheHint(tagLVITEMINDEX,tagLVITEMINDEX);
	void NotifyFocusEvent();
	void NotifyItemActivate(tagNMITEMACTIVATE *);
	void NotifyRecreate();
	void OnCommand(CListView *,int,HWND__ *,unsigned int);
	void OnDestroy();
	void OnKillFocus(CListView *,HWND__ *);
	void OnNcDestroy();
	void OnSetFocus(CListView *,HWND__ *);
	void OnSetFont(CListView *,HFONT__ *,int);
	void OnSetSortColumnColor(unsigned long);
	void OnSettingChange(unsigned __int64,__int64);
	void OnShowWindow(int);
	void OnSize(int,int);
	void OnStyleChanged(unsigned int,tagSTYLESTRUCT const *);
	void OnSysColorChange();
	void OnTimer(CListView *,unsigned int);
	void OnWindowPosChanged(CListView *,tagWINDOWPOS const *);
	void _SetView(unsigned short);
};

class CMarkup
{
	TEXTBLOCK * FindLink(int);
	int Add(TEXTBLOCK *);
	int AssignTabFocus(int);
	int GetNextEnabledLink(int,int);
	int IsMarkupState(unsigned long);
	int ThemedDrawText(HDC__ *,unsigned short const *,int,tagRECT *,unsigned int,int);
	long _GetNextAnchorTag(unsigned short const * *,int *,unsigned short *,int,unsigned short *,int);
	static TEXTBLOCK * CreateBlock(unsigned short const *,unsigned short const *,int);
	static int IsStringAlphaNumeric(unsigned short const *);
	static int _AssignBit(unsigned long,unsigned long &,unsigned long);
	static int _IsLineBreakChar(unsigned short const *,int,unsigned short,int *);
	static long _GetNextValueDataPair(unsigned short const * *,unsigned short *,int,unsigned short *,int);
	static unsigned short const * SkipWhite(unsigned short const *);
	void FreeBlocks();
	void Paint(HDC__ *,tagRECT const *,int);
	void Parse(unsigned short const *);
public:
	virtual long CalcIdealSize(HDC__ *,unsigned int,tagRECT *);
	virtual long DrawTextW(HDC__ *,tagRECT const *);
	virtual long GetCallback(_GUID const &,void * *);
	virtual long GetControlRect(tagRECT *);
	virtual long GetFonts(HFONT__ * *,HFONT__ * *);
	virtual long GetId(unsigned long *);
	virtual long GetLinkCount(unsigned int *);
	virtual long GetLinkRect(int,tagRECT *);
	virtual long GetLinkText(int,unsigned int,unsigned short *,unsigned long *);
	virtual long GetRenderFlags(unsigned int *,void * *,int *,int *,int *);
	virtual long GetState(int,unsigned int,unsigned int *);
	virtual long GetText(int,unsigned short *,unsigned long *);
	virtual long HitTest(tagPOINT,int *);
	virtual long IsTabbable();
	virtual long KillFocus();
	virtual long OnButtonDown(tagPOINT);
	virtual long OnButtonUp(tagPOINT);
	virtual long OnKeyDown(unsigned int);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SetCallback(IUnknown *);
	virtual long SetFocus();
	virtual long SetFonts(HFONT__ *,HFONT__ *);
	virtual long SetId(unsigned long);
	virtual long SetLinkCursor();
	virtual long SetLinkText(int,unsigned int,unsigned short const *);
	virtual long SetRenderFlags(unsigned int);
	virtual long SetState(int,unsigned int,unsigned int);
	virtual long SetText(unsigned short const *);
	virtual long SetThemeRenderFlags(unsigned int,void *,int,int,int);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CMarkupManager
{
	static long AddMarkup(unsigned short const *,unsigned short *,unsigned int);
};

class CMultiImageList
{
	CMultiImageList();
	IImageList2 * MapRealToRealIL(int);
	long _Construct();
	long _GrowAnotherPhysicalIL(int);
	~CMultiImageList();
public:
	virtual long Add(HBITMAP__ *,HBITMAP__ *,int *);
	virtual long AddMasked(HBITMAP__ *,unsigned long,int *);
	virtual long AllocateImage(int);
	virtual long BeginDrag(int,int,int);
	virtual long Clone(_GUID const &,void * *);
	virtual long Copy(int,IUnknown *,int,unsigned int);
	virtual long CopyDitherImage(unsigned short,int,int,IUnknown *,int,unsigned int);
	virtual long DiscardImages(int,int,unsigned long);
	virtual long DragEnter(HWND__ *,int,int);
	virtual long DragLeave(HWND__ *);
	virtual long DragMove(int,int);
	virtual long DragShowNolock(int);
	virtual long Draw(_IMAGELISTDRAWPARAMS *);
	virtual long DumpContents(int,IDebugOutput *,unsigned __int64 *);
	virtual long EndDrag();
	virtual long ForceImagePresent(int,unsigned long);
	virtual long GetBkColor(unsigned long *);
	virtual long GetCallback(_GUID const &,void * *);
	virtual long GetDragImage(tagPOINT *,tagPOINT *,_GUID const &,void * *);
	virtual long GetFlags(unsigned int *);
	virtual long GetIcon(int,unsigned int,HICON__ * *);
	virtual long GetIconSize(int *,int *);
	virtual long GetImageCount(int *);
	virtual long GetImageInfo(int,_IMAGEINFO *);
	virtual long GetImageRect(int,tagRECT *);
	virtual long GetItemFlags(int,unsigned long *);
	virtual long GetMirror(_GUID const &,void * *);
	virtual long GetOriginalSize(int,unsigned long,int *,int *);
	virtual long GetOverlayImage(int,int *);
	virtual long GetPrivateGoo(HBITMAP__ * *,HDC__ * *,HBITMAP__ * *,HDC__ * *);
	virtual long GetStatistics(tagIMAGELISTSTATS *);
	virtual long Initialize(int,int,unsigned int,int,int);
	virtual long IsExtractedIcon(HICON__ *,int *);
	virtual long LockList();
	virtual long Merge(int,IUnknown *,int,int,int,_GUID const &,void * *);
	virtual long PreloadImages(_IMAGELISTDRAWPARAMS *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Remove(int);
	virtual long Replace(int,HBITMAP__ *,HBITMAP__ *);
	virtual long Replace2(int,HBITMAP__ *,HBITMAP__ *,IUnknown *,unsigned long);
	virtual long ReplaceFromImageList(int,IImageList *,int,IUnknown *,unsigned long);
	virtual long ReplaceIcon(int,HICON__ *,int *);
	virtual long Resize(int,int);
	virtual long SetBkColor(unsigned long,unsigned long *);
	virtual long SetCallback(IUnknown *);
	virtual long SetColorTable(int,int,tagRGBQUAD *,int *);
	virtual long SetDragCursorImage(IUnknown *,int,int,int);
	virtual long SetFlags(unsigned int);
	virtual long SetIconSize(int,int);
	virtual long SetImageCount(unsigned int);
	virtual long SetKeepAlive(int);
	virtual long SetOriginalSize(int,int,int);
	virtual long SetOverlayImage(int,int);
	virtual long UnlockList();
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CNotifyScrollWinEvent
{
	CNotifyScrollWinEvent(HWND__ *,long,long);
	~CNotifyScrollWinEvent();
};

class CPager
{
protected:
	CPager();
	__int64 _DragCallback(HWND__ *,unsigned int,unsigned __int64,__int64);
	int _HitTest(int,int);
	int _HitTestCursor();
	int _HitTestScreen(tagPOINT const *);
	int _OnPrint(HDC__ *,unsigned int);
	int _OnSetBorder(int);
	int _OnSetButtonSize(int);
	tagRECT _GetButtonRect(int);
	virtual __int64 v_OnCommand(unsigned __int64,__int64);
	virtual __int64 v_OnCreate();
	virtual __int64 v_OnDPIChanged(int,int);
	virtual __int64 v_OnNotify(unsigned __int64,__int64);
	virtual int v_OnNCCalcSize(unsigned __int64,__int64,__int64 *);
	virtual unsigned long v_OnStyleChanged(unsigned __int64,__int64);
	virtual unsigned short const * GetThemeClass();
	virtual void v_OnNCPaint();
	virtual void v_OnPaint(HDC__ *);
	virtual void v_OnSize(int,int);
	void _DrawBlank(HDC__ *,int);
	void _DrawButton(HDC__ *,int);
	void _GetChildSize();
	void _NeedScrollbars(tagRECT);
	void _OnHotItemChange(int,int);
	void _OnLButtonChange(unsigned int,__int64);
	void _OnMouseLeave();
	void _OnMouseMove(unsigned __int64,__int64);
	void _OnReCalcSize();
	void _OnSetChild(HWND__ *,HWND__ *);
	void _OnSetPos(int);
	void _OnTimer(unsigned int);
	void _Scroll(unsigned long);
	void _SetChildPos(tagRECT const *);
public:
	static __int64 PagerDragCallback(HWND__ *,unsigned int,unsigned __int64,__int64);
	static __int64 PagerWndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	virtual __int64 v_WndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
};

struct CPerformanceTimer
{
	long double GetElapsedTime();
};

class CReBar
{
	HPALETTE__ * _SetPalette(HPALETTE__ *);
	__int64 _GetBandBorders(int,tagRECT *);
	__int64 _SendNotify(unsigned int,int);
	__int64 _SizeBarToRect(unsigned long,tagRECT *);
	__int64 _WndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	int _AfterThemeMetricsChanged(int);
	int _BandCalcTextExtent(tagREBARBAND *,HDC__ *);
	int _BandsAtMinHeight();
	int _CanBandMove(tagREBARBAND const *);
	int _CountBands(unsigned int);
	int _DeleteBand(unsigned int);
	int _DrawGripper(tagREBARBAND const *,HDC__ *);
	int _EraseBkgnd(HDC__ *,int);
	int _FudgeWidth(tagREBARBAND const *,int);
	int _GetBandInfo(unsigned int,tagREBARBANDINFOW *);
	int _GetHeaderWidth(tagREBARBAND const *);
	int _GetLineHeight(unsigned int,unsigned int);
	int _GetRowHeight(unsigned int);
	int _GetRowHeightExtra(tagREBARBAND * *,tagREBARBAND const *);
	int _GrowBand(tagREBARBAND *,int,int,int);
	int _HitTest(_RB_HITTESTINFO *);
	int _InsertBand(unsigned int,tagREBARBANDINFOW *);
	int _InternalHitTest(_RB_HITTESTINFO *,int,int);
	int _InvalidateRect(tagRECT const *);
	int _IsBandStartOfRow(tagREBARBAND const *);
	int _MakeNewRow(tagREBARBAND *,int);
	int _MaxX(tagREBARBAND *);
	int _MaximizeBand(unsigned int,int,int);
	int _MinX(tagREBARBAND const *);
	int _MinimizeBand(unsigned int,int);
	int _MoveBand(unsigned int,unsigned int);
	int _OkayToChangeBreak(tagREBARBAND const *,unsigned int);
	int _OnDestroy();
	int _OnSetFont(HFONT__ *);
	int _ReallocBands(unsigned int);
	int _Recalc(tagRECT const *,int);
	int _RecalcFirst(int,tagREBARBAND *);
	int _ResizeBandWidth(unsigned int,int,int);
	int _RoomForBandVert(tagREBARBAND const *);
	int _SetBandInfo(unsigned int,tagREBARBANDINFOW *,int);
	int _SetBandPos(tagREBARBAND *,int);
	int _SetBandPosAnim(tagREBARBAND *,int);
	int _SetBarInfo(tagREBARINFO *);
	int _SetFont(unsigned __int64);
	int _SetRedraw(int);
	int _ShouldDrawGripper(tagREBARBAND const *);
	int _ShowBand(unsigned int,int);
	int _ShowText(tagREBARBAND const *);
	int _SizeBandsToRect(tagRECT const *);
	int _SizeDifference(tagRECT const *);
	int _UseChevron(tagREBARBAND const *);
	int _ValidateBandInfo(tagREBARBANDINFOW * *,tagREBARBANDINFOW *);
	static __int64 s_DragCallback(HWND__ *,unsigned int,unsigned __int64,__int64);
	static __int64 s_WndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	tagREBARBAND * _EnumBand(int,unsigned int);
	tagREBARBAND * _GetFirstInRow(tagREBARBAND *);
	tagREBARBAND * _GetLastBand();
	tagREBARBAND * _GetLastInRow(tagREBARBAND *,int);
	tagREBARBAND * _GetNext(tagREBARBAND *,unsigned int);
	tagREBARBAND * _GetPrev(tagREBARBAND *,unsigned int);
	tagRECT _GetBandRect(tagREBARBAND const *,int);
	unsigned int _GetRowCount();
	unsigned long _BandGetBkColor(tagREBARBAND const *);
	unsigned long _BandGetTextColor(tagREBARBAND const *);
	void ExpandBandsToRow(int,int,int,int,tagREBARBAND * &,tagREBARBAND *,int);
	void ShrinkBandsToRow(int,int,int,int &,tagREBARBAND * &,int);
	void _AutoSize();
	void _BandCalcMinWidth(tagREBARBAND *);
	void _BandRecalcChevron(tagREBARBAND *,int);
	void _BandTileBlt(tagREBARBAND *,int,int,int,int,HDC__ *,HDC__ *);
	void _CacheThemeInfo(int);
	void _DragBand(int,int);
	void _DragSplitter(int,int);
	void _DrawBand(tagREBARBAND const *,HDC__ *);
	void _DrawChevron(tagREBARBAND const *,HDC__ *);
	void _DrawSplitter(HDC__ *);
	void _GetClientRect(tagRECT *);
	void _GetGripperRect(tagREBARBAND const *,tagRECT *);
	void _GetSplitterRect(tagRECT *);
	void _InitPaletteHack();
	void _OnBeginDrag(unsigned int);
	void _OnCreate(HWND__ *,tagCREATESTRUCTW *);
	void _OnMouseMove(HWND__ *,unsigned int,unsigned __int64,__int64);
	void _OnPushChevron(HWND__ *,tagREBARBAND *,__int64);
	void _OnStyleChanged(unsigned __int64,tagSTYLESTRUCT const *);
	void _PassBreak(tagREBARBAND *,tagREBARBAND *);
	void _Realize(HDC__ *,int,int);
	void _Resize(int);
	void _ResizeChildren();
	void _ResizeNow();
	void _SetCursor(int);
	void _SizeBandToRowHeight(int,int);
	void _SizeBandsToRowHeight();
	void _ToggleBand(int);
	void _UpdateChevronState(tagREBARBAND *,unsigned short);
	void _UpdateSplitterState(unsigned short);
	void _UpdateTheme(int);
	void _VertMungeGripperRect(tagRECT *);
};

class CReBarAcc
{
	virtual HWND__ * v_GetWindow();
	virtual long _GetChildCount();
	virtual long v_OnGetName(unsigned short * *);
public:
	virtual long accHitTest(long,long,tagVARIANT *);
	virtual long get_accChild(tagVARIANT,IDispatch * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CReBarChevronAcc
{
	virtual HWND__ * v_GetWindow();
	virtual long v_OnGetName(unsigned short * *);
	virtual long v_OnGetRole();
public:
	virtual long accDoDefaultAction(tagVARIANT);
	virtual long accHitTest(long,long,tagVARIANT *);
	virtual long accLocation(long *,long *,long *,long *,tagVARIANT);
	virtual long get_accDefaultAction(tagVARIANT,unsigned short * *);
	virtual long get_accParent(IDispatch * *);
	virtual long get_accState(tagVARIANT,tagVARIANT *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CResolvedString
{
	long Resolve(HINSTANCE__ *,unsigned short const *);
};

class CSHAccessibleBase
{
	static long s_accLoadTypeInfo(ITypeInfo * *);
protected:
	long _ValidateAccChild(tagVARIANT *);
	virtual long _GetChildCount();
	virtual long v_OnGetDescription(unsigned short * *);
	virtual long v_OnGetHelp(unsigned short * *);
	virtual long v_OnGetName(unsigned short * *);
	virtual long v_OnGetRole();
	virtual long v_OnGetValue(unsigned short * *);
public:
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
	virtual ~CSHAccessibleBase();
};

struct CSHAccessibleHWNDBase
{
	virtual long accHitTest(long,long,tagVARIANT *);
	virtual long accLocation(long *,long *,long *,long *,tagVARIANT);
	virtual long accSelect(long,tagVARIANT);
	virtual long get_accFocus(tagVARIANT *);
	virtual long get_accParent(IDispatch * *);
	virtual long get_accSelection(tagVARIANT *);
	virtual long get_accState(tagVARIANT,tagVARIANT *);
	virtual ~CSHAccessibleHWNDBase();
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

class CSlideEffect
{
protected:
	virtual int v_InnerPaint(double,int);
	virtual void v_InnerEndEffect();
public:
	long InitSlide(unsigned long,SlideDirection,tagRECT *,_DSA *);
	long InitSourceHDC(HDC__ *,tagRECT const *,HDC__ * *);
};

class CSparseImageList
{
	CSparseImageList(_GUID);
	int _AddVirtAndReal();
	long _AddOrAddMasked(HBITMAP__ *,HBITMAP__ *,unsigned long);
	long _Callback_ForceImagePresent(int);
	long _CloneCallback(_GUID const &,void * *);
	long _Construct();
	long _CreateBlankImage(int,int *);
	long _FixupAfterLoad();
	long _GetPersistStream(IUnknown *,_GUID *,IPersistStream * *);
	long _InternalAdd(HBITMAP__ *,HBITMAP__ *,unsigned long,int *);
	long _LoadCallbackFromStream(IStream *);
	long _LoadIUnknownFromStream(IUnknown *,IStream *);
	long _LoadV2RFromStream(IStream *);
	long _RemoveOne(int);
	long _SaveCallbackToStream(IStream *);
	long _SaveIUnknownToStream(IUnknown *,IStream *);
	long _UnsafeRemoveAll(int);
	long _Virt2Real(int,int *,unsigned long);
	void _EnterCritical();
	void _LeaveCritical();
	~CSparseImageList();
public:
	virtual long Add(HBITMAP__ *,HBITMAP__ *,int *);
	virtual long AddMasked(HBITMAP__ *,unsigned long,int *);
	virtual long AllocateImage(int);
	virtual long BeginDrag(int,int,int);
	virtual long Clone(_GUID const &,void * *);
	virtual long Copy(int,IUnknown *,int,unsigned int);
	virtual long CopyDitherImage(unsigned short,int,int,IUnknown *,int,unsigned int);
	virtual long DiscardImages(int,int,unsigned long);
	virtual long DragEnter(HWND__ *,int,int);
	virtual long DragLeave(HWND__ *);
	virtual long DragMove(int,int);
	virtual long DragShowNolock(int);
	virtual long Draw(_IMAGELISTDRAWPARAMS *);
	virtual long DumpContents(int,IDebugOutput *,unsigned __int64 *);
	virtual long EndDrag();
	virtual long ForceImagePresent(int,unsigned long);
	virtual long GetBkColor(unsigned long *);
	virtual long GetCallback(_GUID const &,void * *);
	virtual long GetClassID(_GUID *);
	virtual long GetDragImage(tagPOINT *,tagPOINT *,_GUID const &,void * *);
	virtual long GetFlags(unsigned int *);
	virtual long GetIcon(int,unsigned int,HICON__ * *);
	virtual long GetIconSize(int *,int *);
	virtual long GetImageCount(int *);
	virtual long GetImageInfo(int,_IMAGEINFO *);
	virtual long GetImageRect(int,tagRECT *);
	virtual long GetItemFlags(int,unsigned long *);
	virtual long GetMirror(_GUID const &,void * *);
	virtual long GetOriginalSize(int,unsigned long,int *,int *);
	virtual long GetOverlayImage(int,int *);
	virtual long GetPrivateGoo(HBITMAP__ * *,HDC__ * *,HBITMAP__ * *,HDC__ * *);
	virtual long GetSizeMax(_ULARGE_INTEGER *);
	virtual long GetStatistics(tagIMAGELISTSTATS *);
	virtual long Initialize(int,int,unsigned int,int,int);
	virtual long IsDirty();
	virtual long IsExtractedIcon(HICON__ *,int *);
	virtual long Load(IStream *);
	virtual long LockList();
	virtual long Merge(int,IUnknown *,int,int,int,_GUID const &,void * *);
	virtual long PreloadImages(_IMAGELISTDRAWPARAMS *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Remove(int);
	virtual long Replace(int,HBITMAP__ *,HBITMAP__ *);
	virtual long Replace2(int,HBITMAP__ *,HBITMAP__ *,IUnknown *,unsigned long);
	virtual long ReplaceFromImageList(int,IImageList *,int,IUnknown *,unsigned long);
	virtual long ReplaceIcon(int,HICON__ *,int *);
	virtual long Resize(int,int);
	virtual long Save(IStream *,int);
	virtual long SetBkColor(unsigned long,unsigned long *);
	virtual long SetCallback(IUnknown *);
	virtual long SetColorTable(int,int,tagRGBQUAD *,int *);
	virtual long SetDragCursorImage(IUnknown *,int,int,int);
	virtual long SetFlags(unsigned int);
	virtual long SetIconSize(int,int);
	virtual long SetImageCount(unsigned int);
	virtual long SetKeepAlive(int);
	virtual long SetOriginalSize(int,int,int);
	virtual long SetOverlayImage(int,int);
	virtual long UnlockList();
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CStatic
{
	__int64 NotifyParent(HWND__ *,HWND__ *,int);
	__int64 WndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	int DrawStateCB(HDC__ *,int,int);
	static __int64 s_WndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	static int s_DrawStateCB(HDC__ *,__int64,unsigned __int64,int,int);
	void * SetImage(void *,int);
	void AniIconStep();
	void CopyText();
	void LoadImageW(unsigned short const *);
	void OnPaint(HDC__ *,int);
	void Repaint();
	void UpdateTheme();
};

class CSystemMetrics
{
	void EnsureValid();
	void EnsureValidRegistry();
};

struct CTLocalAllocPolicy
{
	static long Alloc(void *,unsigned long,unsigned __int64,void * *);
};

class CTaskDialog
{
	DirectUI::Element * FindButtonById(int);
	DirectUI::Element * FindRadioButtonById(int);
	DirectUI::Element * GetElement(DirectUI::Element *,unsigned short const *);
	__int64 DialogProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	bool FindButtonShortcutAndDoDefaultAction(unsigned short);
	bool FindShortcutAndDoDefaultAction(unsigned short,DirectUI::Element *);
	bool IsWindowMinimized();
	int CalculateDesiredWidth(DirectUI::DCSurface *,tagSIZE,tagSIZE);
	int GetDialogOuterPaddingWidth();
	long AddCommandButton(DirectUI::Element *,unsigned short const *,int);
	long AddLinkButton(DirectUI::Element *,unsigned short const *,int);
	long AddRadioButton(DirectUI::Element *,unsigned short const *,int,int);
	long AdjustScrollerHeightAsNeeded();
	long AssignUniqueIdToButton(DirectUI::Element *,int);
	long BuildButtonArea();
	long BuildContentArea();
	long BuildExpandoControl(DirectUI::Element *);
	long BuildFooterExpando();
	long BuildFootnoteArea();
	long BuildLinkArea();
	long BuildMainIconArea(bool);
	long BuildMainInstructionArea();
	long BuildOptionArea();
	long BuildProgressArea();
	long BuildRadioButtonArea();
	long BuildVerificationControl(DirectUI::Element *);
	long CalculateWindowPosition(tagSIZE,tagRECT,tagRECT *);
	long CallCallback(unsigned int,unsigned __int64,__int64);
	long CheckWindowPosition(int);
	long ComputeExpandHeight();
	long CreateHostedDuiContent(DirectUI::Element *,IUnknown *,DirectUI::XElement * *);
	long GetIcon(HINSTANCE__ *,unsigned short const *,HICON__ *,bool,bool,CTaskDialogIcon * *);
	long GetIdOfSelectedRadioButton(int *);
	long GetMinMaxSize(bool,tagRECT *,tagSIZE *,tagSIZE *);
	long InitializeButtons();
	long InsertArea(unsigned short const *,unsigned short const *,DirectUI::Element * *);
	long ReLayout(bool);
	long RevertToUnboundedLayout();
	long SetBasicLayout(bool,bool);
	long SetButtonText(DirectUI::Element *,unsigned short const *);
	long SetFooterIcon(unsigned short const *,HICON__ *);
	long SetIconContent(HINSTANCE__ *,DirectUI::Element *,unsigned short const *,HICON__ *,bool,bool,bool);
	long SetInitialExpandedState(tagSIZE *);
	long SetLinkContent(DirectUI::Element *,DirectUI::CCSysLink *,bool *);
	long SetMainIcon(unsigned short const *,HICON__ *,bool);
	long SetScrollBars(tagSIZE,tagSIZE *);
	long SetStringContent(DirectUI::Element *,unsigned short const *,bool);
	long SetWindowIcons(unsigned short const *,HICON__ *);
	long SetWindowPosition(tagRECT,bool);
	long Setup(HWND__ *,bool);
	long SetupWindowIcon(bool,unsigned short const *,HICON__ *,CTaskDialogIcon * *);
	long ToggleButtonEnabledState(int,bool,bool);
	long UpdateDimensionsOfAllContentHosts();
	long UpdateElementText(_TASKDIALOG_ELEMENTS,unsigned short const *,bool);
	long UpdateIcon(_TASKDIALOG_ICON_ELEMENTS,__int64);
	static __int64 s_DialogProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	static bool CanBeMinimized(_TASKDIALOGCONFIG const *);
	static int CCSysLinkNotifyHandler(unsigned int,unsigned __int64,__int64,__int64 *,void *);
	static long SetElementAccName(DirectUI::Element *,unsigned short const *);
	static unsigned int const s_uInternalSwapPageMsg;
	static unsigned int const s_uWindowAnimationDoneMsg;
	static void ChangeElementVisibility(DirectUI::Element *,bool);
	tagSIZE UpdateDialogWidth(DirectUI::DCSurface *,int);
	unsigned int ConvertDLUWidthToPixels(unsigned int);
	virtual long CreateStyleParser(DirectUI::DUIXmlParser * *);
	virtual void OnEvent(DirectUI::Event *);
	virtual void OnInput(DirectUI::InputEvent *);
	virtual void OnThemeChange();
	void AppendClipboardItem(DirectUI::Element *,int,int,bool,unsigned short *,unsigned __int64);
	void AppendClipboardText(unsigned short const *,int,unsigned short *,unsigned __int64);
	void CleanupChildrenPointers();
	void CloseDialog(long,int);
	void CopyToClipboard();
	void InitializeSysLinks();
	void OnVerificationCheckboxClicked(bool,bool);
	void PrepareForWindowResize(bool);
	void SendHelpMessage();
	void SetExpandedContentVisibility(bool);
	void SetExpandedInformation(bool,bool);
	void SetExpandoAccessibility(bool);
	void SwapLinkAreas();
	void SwapLinkElements(bool,DirectUI::Element *,DirectUI::Element *);
	void UpdateAfterWindowResize(bool);
public:
	CTaskDialog();
	static DirectUI::IClassInfo * Class;
	static long Create(DirectUI::Element * *,_TASKDIALOGCONFIG const *,int *,int *,int *);
	static long Show(_TASKDIALOGCONFIG const *,int *,int *,int *);
	virtual DirectUI::IClassInfo * GetClassInfoW();
	virtual long GetElementProviderImpl(DirectUI::InvokeHelper *,DirectUI::ElementProvider * *);
	virtual void CleanupListeners();
	virtual void OnDestroy();
	virtual void OnListenedPropertyChanged(DirectUI::Element *,DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual ~CTaskDialog();
};

class CTaskDialogIcon
{
protected:
	virtual long Initialize(HICON__ *);
	virtual long Initialize(HINSTANCE__ *,unsigned short const *,CTaskDialogIcon::TD_ICON_TYPE);
public:
	static long Create(HICON__ *,CTaskDialogIcon * *);
	static long Create(HINSTANCE__ *,unsigned short const *,CTaskDialogIcon::TD_ICON_TYPE,CTaskDialogIcon * *);
	static long ResolveDialogIconIdToImageresId(HINSTANCE__ * *,unsigned short const * *);
	virtual HICON__ * GetIconHandle();
	virtual void AbandonIconHandleOwnership();
	virtual void Destroy();
	virtual ~CTaskDialogIcon();
};

class CToolTipsMgr
{
	HRGN__ * CreateBalloonRgn(int,int,int,int,int,int,int);
	HRGN__ * CreateToolTipRgn();
	HWND__ * TTWindowFromPoint(tagPOINT *);
	IControlMarkup * GetCurToolBestMarkup();
	__int64 AddTool(tagTOOLINFOW *);
	__int64 AdjustRect(int,tagRECT *);
	int CreateTitleIconImageList(HICON__ *);
	int DecrementFadeState();
	int IncrementFadeState();
	int IsRTL();
	int OnGetTextA(unsigned __int64,__int64);
	int OnGetTextW(unsigned __int64,__int64);
	int Render(HDC__ *);
	int RenderTitledTip(HDC__ *,tagRECT *,unsigned int);
	int SetTitle(unsigned __int64,__int64);
	int ToolHasMoved();
	long DoGetDispInfo(tagTOOLINFOW *,tagTTDISPINFO *);
	long SetCurToolDispInfo();
	static int CopyToolInfo(tagTOOLINFOW const *,tagTOOLINFOW *);
	static int CopyToolInfoA(tagTOOLINFOW const *,tagTOOLINFOA *,unsigned int);
	static int PointInTool(tagTOOLINFOW const *,HWND__ *,int,int);
	static void SetTipText(tagTOOLINFOW *,unsigned short *);
	static void TTSubclassHwnd(tagTOOLINFOW const *,HWND__ *);
	tagTOOLINFOW * FindTool(tagTOOLINFOW const *);
	tagTOOLINFOW * GetToolAtPoint(HWND__ *,int,int,int,int);
	tagTOOLINFOW * ToolAtMessagePos();
	unsigned short * CopyString(unsigned short const *);
	unsigned short * GetToolText(tagTOOLINFOW *);
	unsigned short * LoadResString(HINSTANCE__ *,unsigned int);
	void AdjustMargins(tagRECT *);
	void BeforeFreeTool(tagTOOLINFOW *);
	void BeforeSetTool(tagTOOLINFOW *);
	void CalcTextSize(HDC__ *,tagRECT *,unsigned int *,int);
	void CheckCursorPos();
	void DeleteTool(tagTOOLINFOW const *);
	void DoShowBubble();
	void DrawTipBackground(HDC__ *,tagRECT);
	void GetPenOrTouchTipPosition(int,int,tagPOINT *,tagRECT *);
	void GetTipPosition(tagRECT *,int,int,tagPOINT *,int *,int *);
	void GetTipSize(tagTOOLINFOW *,tagPOINT *,int *,int *);
	void GetWorkAreaFromPoint(tagPOINT const &,tagRECT *);
	void HandleRelayedMessage(HWND__ *,unsigned int,unsigned __int64,__int64,unsigned __int64);
	void HandleTimer(unsigned __int64);
	void NewFont(HFONT__ *);
	void OnMouseLeave();
	void OnMouseMove(tagPOINT);
	void OnPaint();
	void OnTtmTrackActivate(unsigned __int64,tagTOOLINFOW const *);
	void PopBubble(int,unsigned __int64);
	void RestartPopBubble();
	void SetCurToolMarkup(unsigned short const *);
	void SetDelayTime(unsigned __int64,__int64);
	void SetFont(HFONT__ *,int);
	void SetThemeRenderFlags(unsigned long);
	void ShowBubbleForTool(tagTOOLINFOW *);
	void ShowVirtualBubble();
	void StripAccels(unsigned short *);
	void TTSetTimer(int);
	void TrackMouseLeave();
	void UpdateTheme();
	void UpdateTipText(tagTOOLINFOW *);
public:
	__int64 ToolTipsWndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	static __int64 s_ToolTipsWndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	static int ThunkToolInfoAtoW(tagTOOLINFOA const *,tagTOOLINFOW *,int,unsigned int);
	static int ThunkToolInfoWtoA(tagTOOLINFOW const *,tagTOOLINFOA *,unsigned int);
	static int ThunkToolTipTextAtoW(tagNMTTDISPINFOA const *,tagNMTTDISPINFOW *,unsigned int);
	virtual long CustomDrawText(HDC__ *,unsigned short const *,int,tagRECT *,unsigned int,int);
	virtual long GetState(unsigned long,unsigned int);
	virtual long InvalidateRect(unsigned long,tagRECT const *);
	virtual long Notify(unsigned long,int,int);
	virtual long OnCustomDraw(unsigned long,HDC__ *,tagRECT const *,unsigned long,int,unsigned int,__int64 *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	void CloseTheme();
	void Initialize(HWND__ *,tagCREATESTRUCTW *);
	void LoadTheme(int);
};

class CToolbar
{
	HBITMAP__ * _CopyBitmap(HBITMAP__ *,tagBITMAP *);
	_IMAGELIST * TBGetImageList(int,int);
	_IMAGELIST * TBSetImageList(int,int,_IMAGELIST *);
	__int64 AdjustDlgProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	__int64 SendItemNotify(int,int);
	__int64 TBGenerateDragImage(SHDRAGIMAGE *);
	__int64 TB_CreateToolbar(HWND__ *,tagCREATESTRUCTW *);
	__int64 TB_OnCalcSize(tagNMHDR *);
	__int64 TB_OnGetButtonInfo(int,TBBUTTONINFOW *);
	__int64 TB_OnGetButtonInfoA(int,TBBUTTONINFOA *);
	__int64 TB_OnScroll(tagNMHDR *);
	__int64 TB_OnSetButtonInfo(int,TBBUTTONINFOW const *);
	__int64 TB_OnSetButtonInfoA(int,TBBUTTONINFOA *);
	__int64 TB_OnSetImage(_TBBUTTONDATA *,int);
	__int64 ToolbarWndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	int AddBitmap(int,HINSTANCE__ *,unsigned __int64);
	int BTN_IS_AUTOSIZE(_TBBUTTONDATA const *);
	int BTN_NO_SHOW_TEXT(_TBBUTTONDATA const *);
	int BoxIt(int,int,tagRECT *);
	int CountRows();
	int DeleteButton(unsigned int);
	int GetAdjustInfo(int,_TBBUTTONDATA *,unsigned short *,int);
	int GetInsertMarkRect(tagRECT *,int);
	int GetNearestInsert(int,int,unsigned int);
	int GrowToolbar(int,int,unsigned int);
	int HandleDragMsg(HWND__ *,unsigned __int64,tagDRAGLISTINFO *);
	int HeightWithString(int);
	int InitAdjustDlg(HWND__ *);
	int InsertIndex(tagPOINT,int);
	int PositionFromID(__int64);
	int ReplaceBitmap(TBREPLACEBITMAP *);
	int SaveRestoreFromReg(int,HKEY__ *,unsigned short const *,unsigned short const *);
	int SetBitmapSize(int,int);
	int TBAddBitmapToImageList(TBBMINFO *,bool,int);
	int TBAddStrings(unsigned __int64,__int64);
	int TBChangeFont(unsigned __int64,HFONT__ *);
	int TBDDArrowAdjustment(_TBBUTTONDATA *);
	int TBGetInfoTip(tagNMTTDISPINFOW *,_TBBUTTONDATA const *);
	int TBGetSepHeight(_TBBUTTONDATA const *);
	int TBGetString(int,int,unsigned short *);
	int TBGetStringA(int,int,char *);
	int TBHasAccelerator(unsigned int);
	int TBHasDupChar(unsigned int);
	int TBHasStrings();
	int TBHitTest(int,int);
	int TBInsertButtons(unsigned int,unsigned int,_TBBUTTON *,int);
	int TBInsertMarkHitTest(int,int,TBINSERTMARK *);
	int TBIsHotTrack(_TBBUTTONDATA const *,unsigned int,CTBHotState const &);
	int TBIsRectClipped(tagRECT const *);
	int TBItemFromAccelerator(unsigned int,int *);
	int TBLoadImages(unsigned __int64,HINSTANCE__ *);
	int TBMixedButtonsHeight();
	int TBMoveButton(unsigned int,unsigned int);
	int TBOnChar(unsigned int);
	int TBOnKey(int,unsigned int);
	int TBOnMapAccelerator(unsigned int,unsigned int *);
	int TBReallocButtons(unsigned int);
	int TBRecalc();
	int TBShouldDrawButton(tagRECT const *,HDC__ *);
	int TBToggleDropDown(int,int);
	int TBWidthOfButton(_TBBUTTONDATA *,HDC__ *);
	int TB_CalcHeight();
	int TB_CalcWidth(int);
	int TB_GetIdealSize(tagSIZE *,int);
	int TB_GetItemDropDownRect(unsigned int,tagRECT *);
	int TB_GetItemRect(unsigned int,tagRECT *);
	int TB_HasSplitDDArrow(_TBBUTTONDATA const *);
	int TB_HasTopDDArrow(_TBBUTTONDATA *);
	int USE_MIXED_BUTTONS();
	int _AddCenteredImagelistToImageList(_IMAGELIST *,int,int,TBBMINFO *);
	static __int64 ToolbarDragCallback(HWND__ *,unsigned int,unsigned __int64,__int64);
	static __int64 s_AdjustDlgProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	static __int64 s_ToolbarWndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	static int GetUpdateRectEnumProc(HWND__ *,__int64);
	static int TB_TranslateAccelerator(HWND__ *,tagMSG const *);
	unsigned int TBButtonAccelerator(_TBBUTTONDATA *);
	unsigned int TBGetDrawTextFlags(unsigned int,_TBBUTTONDATA const *);
	unsigned int TBWidthOfString(_TBBUTTONDATA *,HDC__ *);
	unsigned int TB_GetListButtonDrawWidth(unsigned int);
	unsigned short * TB_StrForButton(_TBBUTTONDATA *);
	void CreateMask(tagRECT const *,int,int,int,int,int,CTBHotState const &,_TBDRAWITEM const *);
	void CustomizeTB(int);
	void DestroyStrings();
	void DrawBlankButton(HDC__ *,int,int,int,int,_TBDRAWITEM const *);
	void DrawButton(HDC__ *,int,int,_TBBUTTONDATA *,int,CTBHotState const &);
	void DrawFace(HDC__ *,tagRECT const *,int,int,int,int,int,int,_TBDRAWITEM const *,int,tagRECT *,CTBHotState const &);
	void DrawString(HDC__ *,int,int,int,int,unsigned short const *,int,CTBHotState const &,_TBDRAWITEM const *);
	void DrawToolbarH(HDC__ *,tagRECT *,CTBHotState const &);
	void DrawToolbarV(HDC__ *,tagRECT *,CTBHotState const &);
	void FlushToolTipsMgrNow();
	void InitTBDrawItem(_TBDRAWITEM *,_TBBUTTONDATA *,unsigned int,CTBHotState const &,int,int);
	void InvalidateButton(_TBBUTTONDATA const *,int);
	void LBMoveButton(unsigned int,int,unsigned int,int,int);
	void MakeGroupConsistant(int);
	void MapToStandardBitmaps(HINSTANCE__ * *,unsigned __int64 *,int *,int *);
	void MoveButton(int);
	void PaintAdjustLine(tagDRAWITEMSTRUCT *);
	void PatB(HDC__ *,int,int,int,int,unsigned long);
	void ReleaseMonoDC();
	void TBAutoSize();
	void TBBuildImageList();
	void TBCycleHotItem(int,int,unsigned int);
	void TBGetItem(_TBBUTTONDATA *,NMTBDISPINFOW *);
	void TBGetPartAndState(_TBBUTTONDATA const *,_TBDRAWITEM const *,CTBHotState const &,int *,int *);
	void TBHandleLButtonDown(__int64,int);
	void TBInitMetrics();
	void TBInputStruct(_TBBUTTONDATA *,_TBBUTTON const *);
	void TBInvalidateMark();
	void TBOnLButtonDown(HWND__ *,unsigned int,unsigned __int64,__int64);
	void TBOnLButtonUp(HWND__ *,unsigned int,unsigned __int64,__int64);
	void TBOnMouseMove(HWND__ *,unsigned int,unsigned __int64,__int64);
	void TBOutputStruct(_TBBUTTONDATA const *,_TBBUTTON *);
	void TBPaint(HDC__ *,tagRECT const &);
	void TBPaintImpl(HDC__ *,tagRECT const &,CTBHotState const &);
	void TBRelayToToolTips(unsigned int,unsigned __int64,__int64);
	void TBSendUpClick(int,__int64);
	void TBSetHotItem(int,unsigned long);
	void TBSetInsertMark(TBINSERTMARK const *);
	void TBSetStyle(unsigned long);
	void TBSetStyleEx(unsigned long,unsigned long);
	void TB_CalcItemRects();
	void TB_CancelTipTrack();
	void TB_DrawBackground(HDC__ *,_NMTBCUSTOMDRAW *,tagRECT const *);
	void TB_ForceCreateTooltips();
	void TB_OnDestroy();
	void TB_OnSetCmdID(_TBBUTTONDATA *,unsigned int);
	void TB_OnSetState(_TBBUTTONDATA *,unsigned char,int);
	void TB_OnSize(int,int);
	void TB_OnSysColorChange();
	void TB_OnTimer(unsigned int);
	void TB_UpdateTheme(int);
	void WrapToolbar(int,tagRECT *,int *);
	void WrapToolbarCol(int,tagRECT *,int *);
	void _EnsureCachedStringDimensions(_TBBUTTONDATA *,HDC__ *,unsigned int,tagRECT const *,int,tagRECT *);
};

class CUpDown
{
protected:
	__int64 ArrowKeyWndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	__int64 GetPos(int *);
	__int64 SetBuddy(HWND__ *);
	__int64 UpDownWndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	int Compare(int,int,unsigned int);
	int Nudge();
	int ThemeDrawEdge(void *,HDC__ *,tagRECT *,int,int,unsigned int);
	static __int64 s_ArrowKeyWndProc(HWND__ *,unsigned int,unsigned __int64,__int64,unsigned __int64,unsigned __int64);
	static __int64 s_UpDownWndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	unsigned int GetGrouping();
	unsigned int HitTest(int,int);
	unsigned long SoftFadeDuration(void *,int,int,int);
	void Anchor();
	void Bump();
	void GetThousands(unsigned short *);
	void Invalidate(unsigned int,int);
	void IsGoodBuddy();
	void OnMouseMove(unsigned long);
	void OnPaint(HDC__ *,int);
	void SetPos();
	void Squish(unsigned int,unsigned int);
	void UnAnchor();
	void UpdateTheme();
};

struct CUxScrollBar
{
	CUxScrollBar();
	static CUxScrollBar * Attach(HWND__ *,int);
	static CUxScrollBar * Calc(HWND__ *,tagSBCALC *,tagRECT const *,int);
	static CUxScrollBar * FromHwnd(HWND__ *);
	static int GetSBHotComponent(HWND__ *,int);
	static void ClearSBTrack(HWND__ *);
	static void Detach(HWND__ *);
	virtual int IsCtl();
	virtual void Calc2(tagSBCALC *,tagRECT *,tagSBDATA * const,int);
	virtual void ClearTrack();
	virtual void DoScroll(HWND__ *,int,int,int);
	void ChangeTheme();
	void CleanupTheme();
};

struct CUxScrollBarCtl
{
	CUxScrollBarCtl();
	static CUxScrollBarCtl * FromHwnd(HWND__ *);
	static __int64 WndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	static int AddRemoveDisableFlags(HWND__ *,unsigned int,unsigned int);
	virtual int IsCtl();
	void ResetHotComponent(int);
};

struct CValuePtr
{
	void AttachAndAddRef(DirectUI::Value *);
	void Release();
};

struct CWrenchButton
{
	CWrenchButton::GLYPHSTATE GetState();
	void CalculateSize(void *,HDC__ *,DPISCALEINFO *);
	void Draw(void *,HDC__ *,tagRECT,DPISCALEINFO *);
};

class CZoomEffect
{
protected:
	virtual int v_InnerPaint(double,int);
	virtual void v_InnerEndEffect();
public:
	long InitSourceHDC(HDC__ *,tagRECT const *,HDC__ * *);
	long InitZoom(unsigned long,int,tagRECT const *,tagRECT const *,tagRECT const *);
};

class ComCtlTelemetry
{
	static unsigned short const * EnumToString(tagTelemetryControlId);
public:
	static void DpiChanged(int,int,tagTelemetryControlId);
	static void TreeViewAnimationAnomaly(ComCtlTelemetry::TreeViewAnimationAnomalyTypes);
};

class ComboExStringMatcher
{
protected:
	virtual bool FindNonString(unsigned short const *,int,int);
	virtual bool HasData();
	virtual unsigned short const * GetStringAtIndex(int);
public:
	virtual bool HasStrings();
	virtual tagLBIV * GetListBox();
};

struct CommandLink
{
	static int GetThemeStateId(tagBUTN const *);
	unsigned long GetNote(tagBUTN const *,unsigned short *,unsigned long *);
	unsigned long SetNote(tagBUTN const *,unsigned short const *);
	void ComputeFonts(tagBUTN const *);
	void Create(HWND__ *,tagBUTN const *,tagCREATESTRUCTW const *);
	void DrawContent(tagBUTN const *,HDC__ *,tagRECT *,int,BTNTHEMEID const &);
	void DrawFocusRect(tagBUTN const *,HDC__ *,tagRECT const *);
	void DrawNote(tagBUTN const *,HDC__ *,unsigned long,unsigned long,BTNTHEMEID const &,int,tagRECT const &,tagRECT const &,int,tagRECT *);
	void GetIdealSize(tagBUTN const *,HDC__ *,tagSIZE const *,tagRECT *);
	void LoadStockGlyph();
	void Paint(tagBUTN *,HDC__ *,BTNTHEMEID const &);
};

struct DIBSectionUtil
{
	static int HasAlpha(unsigned int,unsigned int,tagRGBQUAD const *);
};

class DPISCALEINFO
{
	void EvaluateMagicNumberScaling();
	void Initialize(int,int,HWND__ *);
public:
	HFONT__ * CreateCaptionFont(long);
	HFONT__ * CreateIconTitleFont();
	HFONT__ * CreateMessageFont(long);
	HFONT__ * CreateStatusFont();
	HFONT__ * EnsureHotFont(HFONT__ *,HFONT__ * *);
	int GetIconSize(_IMAGELIST *,int *,int *);
	int GetLabelSpaceHeight();
	int GetLegacyScaledEdgeHeight();
	int GetScaledBorderHeight();
	int GetScaledBorderWidth();
	int GetScaledEdgeHeight();
	int GetScaledEdgeWidth();
	int HandleDPIChanged(HWND__ *,tagTelemetryControlId);
	int ScaleMagicX(int);
	int ScaleMagicY(int);
	void Initialize(HWND__ *);
	void InitializeAsSystemDPI();
	void InitializeForUxScrollBar(HWND__ *);
};

namespace DirectUI
{
	class AccessibleButton
	{
		static AccessibleButton::ACCESSIBLEROLE const * const c_rgar;
		static IClassInfo * s_pClassInfo;
	public:
		virtual IClassInfo * GetClassInfoW();
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
		void Recalc();
	};

	class AnimationStrip
	{
		long LoadCommonControlExports();
		long Start();
		static IClassInfo * s_pClassInfo;
		void Stop();
	protected:
		long LoadImagesIntoAnimationStrip();
		static void RawActionProc(GMA_ACTIONINFO *);
		virtual void OnDestroy();
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
		virtual void Paint(HDC__ *,tagRECT const *,tagRECT const *,tagRECT *,tagRECT *);
		void AdvanceFrame();
	public:
		bool GetPlay();
		int GetFrameIndex();
		int GetFrameWidth();
		long SetFrameWidth(int);
		static PropertyInfo const * FrameDurationProp();
		static PropertyInfo const * FrameIndexProp();
		static PropertyInfo const * FrameWidthProp();
		static PropertyInfo const * PlayProp();
		virtual IClassInfo * GetClassInfoW();
	};

	class AutoButton
	{
		static IClassInfo * s_pClassInfo;
	public:
		virtual IClassInfo * GetClassInfoW();
		virtual void OnEvent(Event *);
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
		long SetItem(HINSTANCE__ *,IClassInfo *,IClassInfo * *);
		long _Grow(unsigned int);
		static long Create(bool,BTreeLookup<HINSTANCE__ *,IClassInfo *> * *,unsigned int);
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
		long SetItem(PropertyInfo const *,Value *,Value * *);
		long _Grow(unsigned int);
		static long Create(bool,BTreeLookup<PropertyInfo const *,Value *> * *,unsigned int);
		void Enum(void (*)(PropertyInfo const *,Value *));
		void Remove(PropertyInfo const *);
	};

	struct BTreeLookup<unsigned short *,ByteCode>
	{
		ByteCode * GetItem(unsigned short *,unsigned int *);
		long SetItem(unsigned short *,ByteCode *);
		long _Grow(unsigned int);
		static long Create(bool,BTreeLookup<unsigned short *,ByteCode> * *,unsigned int);
	};

	struct BTreeLookup<unsigned short const *,CLocalClasses>
	{
		CLocalClasses * GetItem(unsigned short const *,unsigned int *);
		long SetItem(unsigned short const *,CLocalClasses,CLocalClasses *);
		long _Grow(unsigned int);
		static long Create(bool,BTreeLookup<unsigned short const *,CLocalClasses> * *,unsigned int);
		void Enum(void (*)(unsigned short const *,CLocalClasses));
	};

	struct BTreeLookup<unsigned short const *,IClassInfo *>
	{
		IClassInfo * * GetItem(unsigned short const *,unsigned int *);
		long SetItem(unsigned short const *,IClassInfo *,IClassInfo * *);
		long _Grow(unsigned int);
		static long Create(bool,BTreeLookup<unsigned short const *,IClassInfo *> * *,unsigned int);
		void Enum(void (*)(unsigned short const *,IClassInfo *));
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
	};

	class BaseScrollViewer
	{
		static IClassInfo * s_pClassInfo;
		void CheckScroll(BaseScrollBar *,int,int,int);
	protected:
		void FireAnimationChangeEvent(bool);
	public:
		bool GetXScrollable();
		bool GetYScrollable();
		int GetPinning();
		int GetXBarVisibility();
		int GetXOffset();
		int GetYBarVisibility();
		int GetYOffset();
		long Initialize(Element *,unsigned long *);
		long SetXBarVisibility(int);
		long SetXOffset(int);
		long SetXScrollable(bool);
		long SetYBarVisibility(int);
		long SetYOffset(int);
		long SetYScrollable(bool);
		static PropertyInfo const * PinningProp();
		static PropertyInfo const * XBarVisibilityProp();
		static PropertyInfo const * XOffsetProp();
		static PropertyInfo const * XScrollableProp();
		static PropertyInfo const * YBarVisibilityProp();
		static PropertyInfo const * YOffsetProp();
		static PropertyInfo const * YScrollableProp();
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
			BDXEntry const * GetNextEntry();
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
		static PropertyInfo const * ConnectProp();
		static PropertyInfo const * PropertyProp();
		virtual IClassInfo * GetClassInfoW();
	};

	struct BorderLayout
	{
		static long Create(int,int *,Value * *);
		virtual Element * GetAdjacent(Element *,Element *,int,NavReference const *,unsigned long);
		virtual tagSIZE UpdateDesiredSize(Element *,int,int,Surface *);
		virtual void DoLayout(Element *,int,int);
		virtual void OnAdd(Element *,Element * *,unsigned int);
		virtual void OnLayoutPosChanged(Element *,Element *,int,int);
		virtual void OnRemove(Element *,Element * *,unsigned int);
	};

	class Browser
	{
		int FireNavigate(unsigned short);
		static IClassInfo * s_pClassInfo;
	public:
		Pages * GetPages();
		static UID StartNavigate();
		virtual IClassInfo * GetClassInfoW();
		virtual void OnEvent(Event *);
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
	};

	class BrowserSelectionProxy
	{
	protected:
		virtual void Init(Element *);
	public:
		virtual long DoMethod(int,char *);
	};

	class Button
	{
		static IClassInfo * s_pClassInfo;
	public:
		bool GetCaptured();
		bool GetPressed();
		long Initialize(unsigned int,Element *,unsigned long *);
		long SetPressed(bool);
		static PropertyInfo const * CapturedProp();
		static PropertyInfo const * PressedProp();
		static UID Click();
		static UID Context();
		virtual IClassInfo * GetClassInfoW();
		virtual bool OnLostDialogFocus(IDialogElement *);
		virtual bool OnReceivedDialogFocus(IDialogElement *);
		virtual long DefaultAction();
		virtual void OnInput(InputEvent *);
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
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

	class CBinaryXmlReader
	{
		long _GetString(unsigned short,unsigned short const * *,unsigned int *);
	public:
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
	protected:
		virtual void PostCreate(HWND__ *);
	public:
		virtual IClassInfo * GetClassInfoW();
		void Play(HWND__ *);
	};

	class CCBase
	{
		static IClassInfo * s_pClassInfo;
	protected:
		virtual void PostCreate(HWND__ *);
	public:
		static PropertyInfo const * WinStyleProp();
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
	};

	class CCBaseCheckRadioButton
	{
		static IClassInfo * s_pClassInfo;
	protected:
		virtual void PostCreate(HWND__ *);
	public:
		virtual bool OnLostDialogFocus(IDialogElement *);
		virtual bool OnReceivedDialogFocus(IDialogElement *);
		virtual tagSIZE GetContentSize(int,int,Surface *);
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
	};

	class CCBaseScrollBar
	{
		static IClassInfo * s_pClassInfo;
	public:
		bool GetTracking();
		static PropertyInfo const * LineProp();
		static PropertyInfo const * MaximumProp();
		static PropertyInfo const * MinimumProp();
		static PropertyInfo const * PageProp();
		static PropertyInfo const * PositionProp();
		static PropertyInfo const * TrackingProp();
		virtual Element * GetElement();
		virtual HWND__ * CreateHWND(HWND__ *);
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
		void SyncScrollBar();
	};

	class CCCheckBox
	{
		static IClassInfo * s_pClassInfo;
	public:
		virtual IClassInfo * GetClassInfoW();
		virtual bool OnNotify(unsigned int,unsigned __int64,__int64,__int64 *);
		virtual void OnInput(InputEvent *);
	};

	class CCCommandLink
	{
		static IClassInfo * s_pClassInfo;
	protected:
		virtual void PostCreate(HWND__ *);
		void SyncNoteAndGlyph(HWND__ *);
	public:
		static PropertyInfo const * NoteProp();
		unsigned short const * GetNote(Value * *);
		virtual IClassInfo * GetClassInfoW();
		virtual tagSIZE GetContentSize(int,int,Surface *);
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
		virtual void OnSelectedPropertyChanged();
	};

	class CCHScrollBar
	{
		static IClassInfo * s_pClassInfo;
	public:
		virtual IClassInfo * GetClassInfoW();
		virtual tagSIZE GetContentSize(int,int,Surface *);
	};

	class CCListBox
	{
		static IClassInfo * s_pClassInfo;
	public:
		virtual IClassInfo * GetClassInfoW();
		virtual tagSIZE GetContentSize(int,int,Surface *);
	};

	class CCListView
	{
		static IClassInfo * s_pClassInfo;
	public:
		virtual IClassInfo * GetClassInfoW();
		virtual tagSIZE GetContentSize(int,int,Surface *);
	};

	class CCProgressBar
	{
		static IClassInfo * s_pClassInfo;
	public:
		long Initialize(unsigned int,Element *,unsigned long *);
		virtual IClassInfo * GetClassInfoW();
		virtual void OnInput(InputEvent *);
	};

	class CCPushButton
	{
		static IClassInfo * s_pClassInfo;
	protected:
		void SetDefaultState(unsigned long,unsigned long);
	public:
		static PropertyInfo const * HasShieldProp();
		static PropertyInfo const * OverrideButtonBackgroundProp();
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
	};

	class CCRadioButton
	{
		static IClassInfo * s_pClassInfo;
	public:
		static PropertyInfo const * AutoGroupingProp();
		virtual IClassInfo * GetClassInfoW();
		virtual bool OnNotify(unsigned int,unsigned __int64,__int64,__int64 *);
		virtual void OnInput(InputEvent *);
	};

	class CCSysLink
	{
		static IClassInfo * s_pClassInfo;
	public:
		virtual IClassInfo * GetClassInfoW();
		virtual bool OnLostDialogFocus(IDialogElement *);
		virtual bool OnReceivedDialogFocus(IDialogElement *);
		virtual tagSIZE GetContentSize(int,int,Surface *);
		virtual void OnInput(InputEvent *);
	};

	class CCTrackBar
	{
		static IClassInfo * s_pClassInfo;
	protected:
		virtual void PostCreate(HWND__ *);
	public:
		int GetLineSize();
		int GetRangeMax();
		int GetRangeMin();
		int GetThumbPosition();
		long SetThumbPosition(int);
		static PropertyInfo const * LineSizeProp();
		static PropertyInfo const * RangeMaxProp();
		static PropertyInfo const * RangeMinProp();
		static PropertyInfo const * ThumbPositionProp();
		virtual IClassInfo * GetClassInfoW();
		virtual bool OnMessage(unsigned int,unsigned __int64,__int64,__int64 *);
		virtual bool OnPropertyChanging(PropertyInfo const *,int,Value *,Value *);
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
	};

	class CCTreeView
	{
		static IClassInfo * s_pClassInfo;
	protected:
		virtual long _OnGetInfoTip(tagNMTVGETINFOTIPW const *);
		virtual long _OnItemChanged(tagTVITEMCHANGE const *);
	public:
		virtual IClassInfo * GetClassInfoW();
		virtual bool OnNotify(unsigned int,unsigned __int64,__int64,__int64 *);
		virtual tagSIZE GetContentSize(int,int,Surface *);
	};

	class CCVScrollBar
	{
		static IClassInfo * s_pClassInfo;
	public:
		virtual IClassInfo * GetClassInfoW();
		virtual tagSIZE GetContentSize(int,int,Surface *);
	};

	class CClassFactory
	{
		long _RegisterLocal(IClassInfo *);
		static unsigned long s_dwPciMapVersion;
	public:
		IClassInfo * Get(unsigned short const *,HINSTANCE__ *);
		IClassInfo * GetExact(bool,unsigned short const *,HINSTANCE__ *);
		int GetNextClassId();
		long Initialize();
		long ModuleAddRef(HINSTANCE__ *);
		long ModuleRelease(HINSTANCE__ *);
		long Register(IClassInfo *);
		static long Create(CClassFactory * *);
		void ReleaseClassId(int);
		void UnRegisterSet(HINSTANCE__ *);
		~CClassFactory();
	};

	class CIHMCallback
	{
		float _GetAnimationTime(int,int,float);
		void _TouchKeyboardHiding(TouchHWNDElement *);
	public:
		static long CreateInstance(Element *,CIHMCallback * *);
		virtual void TouchKeyboardHiding(bool);
		virtual void TouchKeyboardShowing(tagRECT,bool,bool);
		void Detach();
	};

	struct CLocalClasses
	{
		long Init(IClassInfo *);
		void Destroy();
	};

	class CStyleSheet
	{
		ClassData * GetClassData(IClassInfo *);
		bool _GetLocalValue(Element *,PropertyInfo const *,unsigned int *,Value * *);
		bool _HasBaseSheet();
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
		static int InitOnceCallback(_RTL_RUN_ONCE *,void *,void * *);
		static int InitializeDllInfo();
		static int IsCorrectImageHlpVersion();
		static unsigned __int64 (* s_pfnSymLoadModule64)(void *,void *,char const *,char const *,unsigned __int64,unsigned long);
		static unsigned long (* s_pfnSymSetOptions)(unsigned long);
		static unsigned short (* s_pfnRtlCaptureStackBackTrace)(unsigned long,unsigned long,void * *,unsigned long *);
		static void * s_hProcess;
		unsigned __int64 GetModuleBase(void *,unsigned __int64);
		void FillSymbolInfo(CallstackTracker::STACK_SYMBOL_INFO *,unsigned __int64);
	public:
		int CaptureCallstackFrames();
		int EnumCallstackFrames(void (*)(char const *,char const *,unsigned long,unsigned long));
		static void Uninit();
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
		virtual IClassInfo * GetClassInfoW();
		virtual bool OnLostDialogFocus(IDialogElement *);
		virtual bool OnReceivedDialogFocus(IDialogElement *);
	};

	struct ClassData
	{
		PropertyData * GetPropertyData(PropertyInfo const *);
		long AddPropertyData(PropertyData * *,PropertyInfo const *);
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

	class ClassInfo<CTaskDialog,DialogElement,EmptyCreator<CTaskDialog> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<CTaskDialog,DialogElement,EmptyCreator<CTaskDialog> > * *);
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

	class ClassInfo<PropSheetPageHost,HWNDHost,EmptyCreator<PropSheetPageHost> >
	{
		static long Create(HINSTANCE__ *,unsigned short const *,bool,PropertyInfo const * const *,unsigned int,ClassInfo<PropSheetPageHost,HWNDHost,EmptyCreator<PropSheetPageHost> > * *);
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
		virtual IClassInfo * GetClassInfoW();
		virtual tagSIZE _SelfLayoutUpdateDesiredSize(int,int,Surface *);
		virtual void _SelfLayoutDoLayout(int,int);
	};

	class Combobox
	{
		static IClassInfo * s_pClassInfo;
	public:
		static PropertyInfo const * SelectionProp();
		virtual HWND__ * CreateHWND(HWND__ *);
		virtual IClassInfo * GetClassInfoW();
		virtual bool OnNotify(unsigned int,unsigned __int64,__int64,__int64 *);
		virtual int OnAdjustWindowSize(int,int,unsigned int);
		virtual tagSIZE GetContentSize(int,int,Surface *);
		virtual void OnHosted(Element *);
		virtual void OnInput(InputEvent *);
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
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
		static long Create(IDuiBehavior * *);
		virtual long GetCallbackFilters(DuiBehaviorFilters::Flags *);
		virtual long Init(Value *);
		virtual long OnAttach(Element *);
		virtual long OnDetach(Element *);
		virtual long OnEvent(Element *,Event *);
		virtual long OnInput(Element *,InputEvent *);
	};

	struct DCSurface
	{
		virtual Surface::EType GetType();
	};

	class DUIBehaviorFactory
	{
	protected:
		static _GUID const * const * const s_rgpIID;
	public:
		virtual long CreateBehavior(unsigned short const *,IDuiBehavior * *);
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
		long _SetValue(LINEINFO,PropertyInfo const *,Value *);
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
		long ParseIntValue(ParserTools::ExprNode const *,Value * *);
		long ParseLayoutValue(ParserTools::ExprNode const *);
		long ParseLibrary(ParserTools::ExprNode const *,HINSTANCE__ * *);
		long ParseLiteralColor(unsigned short const *,unsigned long *);
		long ParseLiteralColorInt(unsigned short const *,int *);
		long ParseLiteralNumber(unsigned short const *,int *,bool *);
		long ParseMagnitude(unsigned short const *,int *,bool *);
		long ParseMagnitudeFloat(unsigned short const *,float *,bool *);
		long ParseNumber(ParserTools::ExprNode const *,int *,bool *);
		long ParsePointValue(ParserTools::ExprNode const *,Value * *);
		long ParseRGBColor(ParserTools::ExprNode const *,unsigned long *,bool *);
		long ParseRect(ParserTools::ExprNode const *,ScaledRECT *);
		long ParseRectRect(ParserTools::ExprNode const *,ScaledRECT *,bool *);
		long ParseRectValue(ParserTools::ExprNode const *,Value * *);
		long ParseResStr(ParserTools::ExprNode const *,Value * *,bool *);
		long ParseResid(ParserTools::ExprNode const *,unsigned short const * *);
		long ParseSGraphicGraphic(ParserTools::ExprNode const *,Value * *,bool *);
		long ParseSGraphicHelper(bool,ParserTools::ExprNode const *,Value * *);
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
		static long GetXmlLiteDll(HINSTANCE__ * *);
		unsigned short const * QuerySysMetricStr(int,unsigned short *,unsigned int);
		void SendParseError(unsigned short const *,unsigned short const *,IXmlReader *,long);
		void SendParseError(unsigned short const *,unsigned short const *,int,int,long);
		void _LeaveOnCurrentThread();
	public:
		DUIXmlParser();
		long CopySheets(DynamicArray<Value *,0> * *);
		long CreateElement(unsigned short const *,Element *,Element *,unsigned long *,Element * *);
		long GetSheet(unsigned short const *,Value * *);
		long LookupElement(LINEINFO,unsigned short const *,HINSTANCE__ *,IClassInfo * *);
		long SetPreprocessedXML(unsigned short const *,HINSTANCE__ *,HINSTANCE__ *);
		long SetXML(unsigned short const *,HINSTANCE__ *,HINSTANCE__ *);
		long SetXMLFromResource(unsigned short const *,unsigned short const *,HINSTANCE__ *,HINSTANCE__ *);
		long UpdateSheets(Element *);
		long _InitializeTables();
		static long Create(DUIXmlParser * *,Value * (*)(unsigned short const *,void *),void *,void (*)(unsigned short const *,unsigned short const *,int,void *),void *);
		virtual ~DUIXmlParser();
		void _DestroyTables();
	};

	struct DeferCycle
	{
		long Initialize();
		static long Create(DeferCycle * *);
		virtual ~DeferCycle();
		void Reset();
		void _EndDefer(Element *);
	};

	class DialogElement
	{
		static IClassInfo * s_pClassInfo;
	public:
		DialogElement();
		long SetRegisteredDefaultButton(Element *);
		static PropertyInfo const * ButtonClassAcceptsEnterKeyProp();
		static PropertyInfo const * DefaultButtonTrackingProp();
		static PropertyInfo const * HandleEnterKeyProp();
		static PropertyInfo const * RegisteredDefaultButtonProp();
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
	};

	class DialogElementCore
	{
	protected:
		static bool IsButtonEnabledAndVisible(Element *);
		void SetRegisteredDefaultButtonSelectedState(bool);
	public:
		Element * GetDefaultButton();
		bool ClickDefaultButton();
		bool OnChildLostFocus(Element *);
		bool OnChildReceivedFocus(Element *);
		void OnDefaultButtonTrackingChanged(Value *);
		void OnDestroy();
		void OnGetDlgCode(tagMSG *,__int64 *);
		void OnInput(InputEvent *);
		void OnKeyFocusMoved(Element *,Element *);
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
	};

	struct DuiNavigate
	{
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
		static long CHeapBuffer_Reserve(DynamicArrayBase<BehaviorFactoryStore::BehaviorFactoryEntry,DoubleAllocationPolicy<BehaviorFactoryStore::BehaviorFactoryEntry>,1,0> *,unsigned int);
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
		static long CHeapBuffer_Reserve(DynamicArrayBase<BinaryFile::CBinaryFile::ResourcePosition,DoubleAllocationPolicy<BinaryFile::CBinaryFile::ResourcePosition>,1,0> *,unsigned int);
	public:
		long InsertPtr(unsigned int,BinaryFile::CBinaryFile::ResourcePosition * *);
		static long Create(unsigned int,bool,DynamicArrayBase<BinaryFile::CBinaryFile::ResourcePosition,DoubleAllocationPolicy<BinaryFile::CBinaryFile::ResourcePosition>,1,0> * *);
	};

	class DynamicArrayBase<CBinaryXmlReader::ReaderState,DoubleAllocationPolicy<CBinaryXmlReader::ReaderState>,1,0>
	{
		long SwitchToHeap(unsigned int);
		static long CHeapBuffer_Reserve(DynamicArrayBase<CBinaryXmlReader::ReaderState,DoubleAllocationPolicy<CBinaryXmlReader::ReaderState>,1,0> *,unsigned int);
	public:
		long InsertPtr(unsigned int,CBinaryXmlReader::ReaderState * *);
		static long Create(unsigned int,bool,DynamicArrayBase<CBinaryXmlReader::ReaderState,DoubleAllocationPolicy<CBinaryXmlReader::ReaderState>,1,0> * *);
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
		static long CHeapBuffer_Reserve(DynamicArrayBase<ChildrenChange *,DoubleAllocationPolicy<ChildrenChange *>,1,0> *,unsigned int);
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
	public:
		long Initialize(unsigned int,bool);
		long InsertPtr(unsigned int,Cond * *);
		static long Create(unsigned int,bool,DynamicArrayBase<Cond,ChunkAllocationPolicy<Cond,1>,3,0> * *);
	};

	class DynamicArrayBase<Cond,DoubleAllocationPolicy<Cond>,1,0>
	{
		long SwitchToHeap(unsigned int);
		static long CHeapBuffer_Reserve(DynamicArrayBase<Cond,DoubleAllocationPolicy<Cond>,1,0> *,unsigned int);
	public:
		long InsertPtr(unsigned int,Cond * *);
		static long Create(unsigned int,bool,DynamicArrayBase<Cond,DoubleAllocationPolicy<Cond>,1,0> * *);
	};

	class DynamicArrayBase<CondMap,ChunkAllocationPolicy<CondMap,3>,1,0>
	{
		long SwitchToHeap(unsigned int);
		static long CHeapBuffer_Reserve(DynamicArrayBase<CondMap,ChunkAllocationPolicy<CondMap,3>,1,0> *,unsigned int);
	public:
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
		static long CHeapBuffer_Reserve(DynamicArrayBase<Decl,DoubleAllocationPolicy<Decl>,1,0> *,unsigned int);
	public:
		long InsertPtr(unsigned int,Decl * *);
		static long Create(unsigned int,bool,DynamicArrayBase<Decl,DoubleAllocationPolicy<Decl>,1,0> * *);
	};

	class DynamicArrayBase<DynamicArray<Impl::ParserCacheEntry,0> *,DoubleAllocationPolicy<DynamicArray<Impl::ParserCacheEntry,0> *>,1,0>
	{
		long SwitchToHeap(unsigned int);
		static long CHeapBuffer_Reserve(DynamicArrayBase<DynamicArray<Impl::ParserCacheEntry,0> *,DoubleAllocationPolicy<DynamicArray<Impl::ParserCacheEntry,0> *>,1,0> *,unsigned int);
	public:
		static long Create(unsigned int,bool,DynamicArrayBase<DynamicArray<Impl::ParserCacheEntry,0> *,DoubleAllocationPolicy<DynamicArray<Impl::ParserCacheEntry,0> *>,1,0> * *);
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
		static long CHeapBuffer_Reserve(DynamicArrayBase<DynamicArrayBase<Cond,ChunkAllocationPolicy<Cond,1>,3,0> *,DoubleAllocationPolicy<DynamicArrayBase<Cond,ChunkAllocationPolicy<Cond,1>,3,0> *>,1,0> *,unsigned int);
	public:
		long InsertPtr(unsigned int,DynamicArrayBase<Cond,ChunkAllocationPolicy<Cond,1>,3,0> * * *);
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
		static long Create(unsigned int,bool,DynamicArrayBase<Element *,DoubleAllocationPolicy<Element *>,1,0> * *);
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
		static long CHeapBuffer_Reserve(DynamicArrayBase<ElementRuntimeId,DoubleAllocationPolicy<ElementRuntimeId>,1,0> *,unsigned int);
	public:
		long InsertPtr(unsigned int,ElementRuntimeId * *);
	};

	class DynamicArrayBase<GCRecord,DoubleAllocationPolicy<GCRecord>,1,20>
	{
		long SwitchToHeap(unsigned int);
		static long CHeapBuffer_Reserve(DynamicArrayBase<GCRecord,DoubleAllocationPolicy<GCRecord>,1,20> *,unsigned int);
	public:
		long InsertPtr(unsigned int,GCRecord * *);
	};

	class DynamicArrayBase<HandleCache::HANDLEMAP,DoubleAllocationPolicy<HandleCache::HANDLEMAP>,1,0>
	{
		long SwitchToHeap(unsigned int);
		static long CHeapBuffer_Reserve(DynamicArrayBase<HandleCache::HANDLEMAP,DoubleAllocationPolicy<HandleCache::HANDLEMAP>,1,0> *,unsigned int);
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
		static long CHeapBuffer_Reserve(DynamicArrayBase<Impl::ParserCacheEntry,DoubleAllocationPolicy<Impl::ParserCacheEntry>,1,0> *,unsigned int);
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

	class DynamicArrayBase<PCRecord,DoubleAllocationPolicy<PCRecord>,1,20>
	{
		long SwitchToHeap(unsigned int);
		static long CHeapBuffer_Reserve(DynamicArrayBase<PCRecord,DoubleAllocationPolicy<PCRecord>,1,20> *,unsigned int);
	public:
		long InsertPtr(unsigned int,PCRecord * *);
	};

	class DynamicArrayBase<ParserTools::ExprNode,DoubleAllocationPolicy<ParserTools::ExprNode>,1,0>
	{
		long SwitchToHeap(unsigned int);
		static long CHeapBuffer_Reserve(DynamicArrayBase<ParserTools::ExprNode,DoubleAllocationPolicy<ParserTools::ExprNode>,1,0> *,unsigned int);
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
		static long CHeapBuffer_Reserve(DynamicArrayBase<PropertyInfo const *,ChunkAllocationPolicy<PropertyInfo const *,2>,1,0> *,unsigned int);
	public:
		long InsertPtr(unsigned int,PropertyInfo const * * *);
	};

	class DynamicArrayBase<PropertyInfo const *,ChunkAllocationPolicy<PropertyInfo const *,4>,1,0>
	{
		long SwitchToHeap(unsigned int);
		static long CHeapBuffer_Reserve(DynamicArrayBase<PropertyInfo const *,ChunkAllocationPolicy<PropertyInfo const *,4>,1,0> *,unsigned int);
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
		static long CHeapBuffer_Reserve(DynamicArrayBase<ReplayStackFrame,DoubleAllocationPolicy<ReplayStackFrame>,1,0> *,unsigned int);
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
		static long CHeapBuffer_Reserve(DynamicArrayBase<RowLayout *,DoubleAllocationPolicy<RowLayout *>,1,0> *,unsigned int);
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
		static long CHeapBuffer_Reserve(DynamicArrayBase<Value *,DoubleAllocationPolicy<Value *>,1,0> *,unsigned int);
	public:
		bool IsEqual(DynamicArrayBase<Value *,DoubleAllocationPolicy<Value *>,1,0> const *);
		long InsertPtr(unsigned int,Value * * *);
		static long Create(unsigned int,bool,DynamicArrayBase<Value *,DoubleAllocationPolicy<Value *>,1,0> * *);
	};

	class DynamicArrayBase<XMLParserCond,DoubleAllocationPolicy<XMLParserCond>,1,0>
	{
		long SwitchToHeap(unsigned int);
		static long CHeapBuffer_Reserve(DynamicArrayBase<XMLParserCond,DoubleAllocationPolicy<XMLParserCond>,1,0> *,unsigned int);
	public:
		long Clone(DynamicArrayBase<XMLParserCond,DoubleAllocationPolicy<XMLParserCond>,1,0> * *);
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
		static long CHeapBuffer_Reserve(DynamicArrayBase<unsigned int,DoubleAllocationPolicy<unsigned int>,1,0> *,unsigned int);
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
		static long Create(unsigned int,bool,DynamicArrayBase<unsigned short *,DoubleAllocationPolicy<unsigned short *>,1,0> * *);
	};

	class DynamicArrayBase<unsigned short const *,DoubleAllocationPolicy<unsigned short const *>,1,0>
	{
		long SwitchToHeap(unsigned int);
		static long CHeapBuffer_Reserve(DynamicArrayBase<unsigned short const *,DoubleAllocationPolicy<unsigned short const *>,1,0> *,unsigned int);
	public:
		long InsertPtr(unsigned int,unsigned short const * * *);
		static long Create(unsigned int,bool,DynamicArrayBase<unsigned short const *,DoubleAllocationPolicy<unsigned short const *>,1,0> * *);
		void Remove(unsigned int,unsigned int);
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
		bool GetMultiline();
		bool GetThemedBorder();
		bool GetWantTabs();
		int GetPasswordCharacter();
		long SetDirty(bool);
		static PropertyInfo const * DirtyProp();
		static PropertyInfo const * MaxLengthProp();
		static PropertyInfo const * MultilineProp();
		static PropertyInfo const * PasswordCharacterProp();
		static PropertyInfo const * ThemedBorderProp();
		static PropertyInfo const * WantTabsProp();
		virtual IClassInfo * GetClassInfoW();
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
		static IClassInfo * s_pClassInfo;
		static bool s_HandleDUIEventMessage(Element *,EventMsg *);
		static void _VoidPCNotifyTree(int,DeferCycle *);
		unsigned int GetCommonDrawTextFlags(int);
		unsigned short * RemoveShortcutFromName(unsigned short const *);
		void _BroadcastEventWorker(Event *);
		void _FlushDS(DeferCycle *);
		void _GetBuriedSheetDependencies(PropertyInfo const *,Element *,DepRecs *,DeferCycle *,long *);
		void _InheritProperties();
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
		void _Fill(HDC__ *,unsigned long,int,int,int,int,bool);
		void _OnFontPropChanged(Value *);
	public:
		DeferCycle * GetDeferObject();
		DeferCycle * TestDeferObject();
		DynamicArray<Element *,0> * GetChildren(Value * *);
		Element * FindDescendent(unsigned short);
		Element * GetImmediateChild(Element *);
		Element * GetRoot();
		Element * GetTopLevel();
		Layout * GetLayout(Value * *);
		Value * GetRawValue(PropertyInfo const *,int,UpdateCache *);
		Value * GetValue(PropertyInfo const * (*)(),int,UpdateCache *);
		Value * GetValue(PropertyInfo const *,int,UpdateCache *);
		bool EnsureVisible();
		bool GetAbsorbsShortcut();
		bool GetClickablePoint(tagPOINT *);
		bool GetOverhang();
		bool GetTooltip();
		bool GetWindowActive();
		bool IsBehaviorLayout();
		bool IsDescendent(Element *);
		float GetElementScaleFactor();
		int GetAccRole();
		int GetAccState();
		int GetAnimation();
		int GetBorderStyle();
		int GetContentAlign();
		int GetFontQuality();
		int GetFontSize();
		int GetFontStyle();
		int GetFontWeight();
		int GetShortcut();
		int GetTextGlowSize();
		int _SetNeedsLayout(unsigned int);
		long AddListener(IElementListener *);
		long Destroy(bool);
		long DestroyAll(bool);
		long GetRootRelativeBounds(tagRECT *);
		long Initialize(unsigned int,Element *,unsigned long *);
		long RemoveAll();
		long SetAbsorbsShortcut(bool);
		long SetAccDefAction(unsigned short const *);
		long SetAccName(unsigned short const *);
		long SetAccRole(int);
		long SetAccState(int);
		long SetAccValue(unsigned short const *);
		long SetAccessible(bool);
		long SetActive(int);
		long SetAlpha(int);
		long SetBackgroundColor(unsigned long);
		long SetBackgroundColor(unsigned long,unsigned long,unsigned char);
		long SetBorderThickness(int,int,int,int);
		long SetClass(unsigned short const *);
		long SetContentAlign(int);
		long SetContentString(unsigned short const *);
		long SetDirection(int);
		long SetEnabled(bool);
		long SetForegroundColor(unsigned long);
		long SetHeight(int);
		long SetID(unsigned short const *);
		long SetLayout(Layout *);
		long SetLayoutPos(int);
		long SetMinSize(int,int);
		long SetSelected(bool);
		long SetShortcut(int);
		long SetVisible(bool);
		long SetWidth(int);
		long SetWindowActive(bool);
		long SetX(int);
		long SetY(int);
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
		static PropertyInfo const * DesiredSizeProp();
		static PropertyInfo const * DirectionProp();
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
		static bool _SetGroupChanges(Element *,int,DeferCycle *);
		static int _MarkElementForDS(Element *);
		static int _MarkElementForLayout(Element *,unsigned int);
		static long _DisplayNodeCallback(HGADGET__ *,void *,EventMsg *);
		static void _AddDependency(Element *,PropertyInfo const *,int,DepRecs *,DeferCycle *,long *);
		static void _TransferGroupFlags(Element *,int);
		tagPOINT const * GetLocation(Value * *);
		tagRECT const * GetPadding(Value * *);
		tagSIZE _UpdateDesiredSize(int,int,Surface *);
		tagSIZE const * GetExtent(Value * *);
		unsigned short GetShortcutChar();
		unsigned short const * GetAccDesc(Value * *);
		unsigned short const * GetAccHelp(Value * *);
		unsigned short const * GetAccItemStatus(Value * *);
		unsigned short const * GetAccItemType(Value * *);
		unsigned short const * GetAccName(Value * *);
		unsigned short const * GetAccNameAsDisplayed(Value * *);
		unsigned short const * GetClass(Value * *);
		unsigned short const * GetContentString(Value * *);
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
		void Detach(DeferCycle *);
		void EndDefer(unsigned long);
		void FireEvent(Event *,bool,bool);
		void GetRenderBorderThickness(tagRECT *);
		void GetRenderMargin(tagRECT *);
		void GetRenderPadding(tagRECT *);
		void InvokeAnimation(int,unsigned int);
		void InvokeAnimation(unsigned int,unsigned int,float,float,bool);
		void MapElementPoint(Element *,tagPOINT const *,tagPOINT *);
		void PaintBackground(HDC__ *,Value *,tagRECT const &,tagRECT const &,tagRECT const &,tagRECT const &);
		void PaintBorder(HDC__ *,Value *,tagRECT *,tagRECT const &);
		void PaintContent(HDC__ *,tagRECT const *);
		void PaintEdgeHighlight(HDC__ *,tagRECT const &,tagRECT const &);
		void PaintFocusRect(HDC__ *,tagRECT const *,tagRECT const *);
		void PaintStringContent(HDC__ *,tagRECT const *,Value *,int);
		void RemoveListener(IElementListener *);
		void SetOverrideScaleFactor(float);
		void StartDefer(unsigned long *);
		void StopAnimation(unsigned int);
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
		ElementProvider();
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
	public:
		static ElementProvider * Find(Element *);
		static _RTL_CRITICAL_SECTION g_cs;
		static long Add(ElementProvider *);
		static long GetProvider<IRawElementProviderFragment>(Element *,IRawElementProviderFragment * *);
		static long GetProvider<IRawElementProviderFragment>(Element *,InvokeHelper *,IRawElementProviderFragment * *);
		static long GetProvider<IRawElementProviderFragmentRoot>(Element *,InvokeHelper *,IRawElementProviderFragmentRoot * *);
		static long GetProvider<IRawElementProviderSimple>(Element *,IRawElementProviderSimple * *);
		static long GetProvider<IRawElementProviderSimple>(Element *,InvokeHelper *,IRawElementProviderSimple * *);
		static long Init();
		static void Remove(ElementProvider *);
	};

	class ElementProxy
	{
		bool _IsSemanticZoomControl(int);
		bool _IsWindowHostUsingDoNotStealFocusFlag();
	protected:
		int _UsesUIAProxies();
		long GetAutomationId(tagVARIANT *);
		long GetBoundingRect(UiaRect *);
		long GetContent(tagVARIANT *,IAccessible *);
		long GetFragmentRoot(IRawElementProviderFragmentRoot * *);
		long GetProperty(tagVARIANT *,int);
		long GetProviderOptions(ProviderOptions *);
		long GetRuntimeId(tagSAFEARRAY * *);
		long IsPatternSupported(Schema::Pattern,bool *);
		long Navigate(NavigateDirection,IRawElementProviderFragment * *);
		long SetString(tagVARIANT *,unsigned short const * ( Element::*)(Value * *));
		virtual void Init(Element *);
		void GetControlType(tagVARIANT *,IAccessible *);
	public:
		static ElementProxy * Create(Element *);
		virtual long DoMethod(int,char *);
	};

	class ElementWithHWND
	{
		static IClassInfo * s_pClassInfo;
	};

	class EventManager
	{
		static UiaArray<int> * g_pArrayPropertyEvent;
		static _RTL_CRITICAL_SECTION g_cs;
		static bool WantEvent(Schema::Event,int);
		static bool g_fWantAnyEvent;
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
		static bool FWantAnyEvent(Element *);
		static long AdviseEventAdded(int,tagSAFEARRAY *);
		static long AdviseEventRemoved(int,tagSAFEARRAY *);
		static long EventListener(Element *,Event *);
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
		virtual ProviderProxy * (*GetProxyCreator())(Element *);
		virtual long Collapse();
		virtual long Expand();
		virtual long QueryInterface(_GUID const &,void * *);
		virtual long get_ExpandCollapseState(ExpandCollapseState *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
	};

	class ExpandCollapseProxy
	{
	protected:
		virtual void Init(Element *);
	public:
		static ExpandCollapseProxy * Create(Element *);
		static bool IsPatternSupported(Element *);
		virtual long DoMethod(int,char *);
	};

	class Expandable
	{
		static IClassInfo * s_pClassInfo;
	public:
		bool GetExpanded();
		long SetExpanded(bool);
		static PropertyInfo const * ExpandedProp();
		virtual IClassInfo * GetClassInfoW();
	};

	class Expando
	{
		static IClassInfo * s_pClassInfo;
		static unsigned short _atmArrow;
		static unsigned short _atmClipper;
	protected:
		void UpdateChildren(Value *);
	public:
		static long Register();
		virtual IClassInfo * GetClassInfoW();
		virtual long Add(Element * *,unsigned int);
		virtual void OnEvent(Event *);
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
	};

	class ExpandoButtonGlyph
	{
		static IClassInfo * s_pClassInfo;
	public:
		virtual IClassInfo * GetClassInfoW();
		virtual bool OnLostDialogFocus(IDialogElement *);
		virtual bool OnReceivedDialogFocus(IDialogElement *);
	};

	struct FillLayout
	{
		static long Create(Layout * *);
		static long Create(int,int *,Value * *);
		virtual Element * GetAdjacent(Element *,Element *,int,NavReference const *,unsigned long);
		virtual tagSIZE UpdateDesiredSize(Element *,int,int,Surface *);
		virtual void DoLayout(Element *,int,int);
	};

	class FlowLayout
	{
	protected:
		tagSIZE BuildCacheInfo(Element *,int,int,Surface *,bool);
	public:
		static long Create(bool,unsigned int,unsigned int,unsigned int,Layout * *);
		static long Create(int,int *,Value * *);
		virtual Element * GetAdjacent(Element *,Element *,int,NavReference const *,unsigned long);
		virtual tagSIZE UpdateDesiredSize(Element *,int,int,Surface *);
		virtual void DoLayout(Element *,int,int);
		virtual ~FlowLayout();
	};

	struct FontCache
	{
		static long InitThread();
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
		FontCheckOut(Element *,HDC__ *);
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
		virtual ProviderProxy * (*GetProxyCreator())(Element *);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual long get_Column(int *);
		virtual long get_ColumnSpan(int *);
		virtual long get_ContainingGrid(IRawElementProviderSimple * *);
		virtual long get_Row(int *);
		virtual long get_RowSpan(int *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
	};

	class GridItemProxy
	{
		long GetColumn(int *);
		long GetRow(int *);
	protected:
		virtual void Init(Element *);
	public:
		static GridItemProxy * Create(Element *);
		static bool IsPatternSupported(Element *);
		virtual long DoMethod(int,char *);
	};

	class GridLayout
	{
	protected:
		unsigned int GetCurrentCols(int);
		unsigned int GetCurrentRows(int);
	public:
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
		virtual ProviderProxy * (*GetProxyCreator())(Element *);
		virtual long GetItem(int,int,IRawElementProviderSimple * *);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual long get_ColumnCount(int *);
		virtual long get_RowCount(int *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
	};

	class GridProxy
	{
		long GetColumnCount(int *);
		long GetItem(unsigned int,unsigned int,IRawElementProviderSimple * *);
		long GetRowCount(int *);
	protected:
		virtual void Init(Element *);
	public:
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
	public:
		bool ShouldUseDesktopPerMonitorScaling();
		long Initialize(HWND__ *,bool,unsigned int,Element *,unsigned long *);
		static Element * GetKeyFocusedElement();
		static PropertyInfo const * WrapKeyboardNavigateProp();
		static UID ImmersiveColorSchemeChange();
		static UID ThemeChange();
		static __int64 StaticWndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
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
		void DelayActivateTooltip();
		void ShowUIState(bool,bool);
	};

	struct HWNDElementAccessible
	{
		long Initialize(HWNDElement *);
		static long Create(HWNDElement *,DuiAccessible * *);
		virtual long Disconnect();
		virtual long get_accParent(IDispatch * *);
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
	};

	class HWNDElementProxy
	{
	protected:
		long ElementFromPoint(double,double,IRawElementProviderFragment * *);
		long GetFocus(IRawElementProviderFragment * *);
	public:
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
		bool GetStaticColor(HDC__ *,HBRUSH__ * *);
		int VerifyParentage();
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
		void SyncRect(unsigned int,bool);
		void SyncText();
		void SyncVisible();
	public:
		bool GetTransparent();
		long Initialize(unsigned int,unsigned int,Element *,unsigned long *);
		long SetTransparent(bool);
		static PropertyInfo const * BackgroundOwnerIDProp();
		static PropertyInfo const * OptimizeMoveProp();
		static PropertyInfo const * ThemeChangedProp();
		static PropertyInfo const * TransparentProp();
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
	};

	struct HWNDHostClientAccessible
	{
		static long Create(Element *,IAccessible *,DuiAccessible * *);
		virtual long accNavigate(long,tagVARIANT,tagVARIANT *);
		virtual long get_accParent(IDispatch * *);
		virtual long get_accRole(tagVARIANT,tagVARIANT *);
	};

	struct HandleCache
	{
		long GetHandle(unsigned short const *,int,void * *);
		void FlushHandles();
	};

	namespace Impl
	{
		class CParserCache
		{
			ParserCacheEntry const * _FindEntry(ParserCacheEntryType,unsigned long);
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
		int Init(unsigned long);
		long DoInvoke(int,ElementProvider *,ProviderProxy * (*)(Element *),char *);
		void Uninit();
	};

	class InvokeManager
	{
		static InvokeHelper * FindInvokeHelper(unsigned int *);
		static UiaArray<InvokeHelper *> * g_pArrayInvokeHelper;
		static _RTL_CRITICAL_SECTION g_cs;
	public:
		static long GetInvokeHelper(InvokeHelper * *);
		static long Init();
		static void Close();
		static void CloseThread();
	};

	struct InvokeProvider
	{
		virtual ProviderProxy * (*GetProxyCreator())(Element *);
		virtual long Invoke();
		virtual long QueryInterface(_GUID const &,void * *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
	};

	class InvokeProxy
	{
	protected:
		virtual void Init(Element *);
	public:
		static InvokeProxy * Create(Element *);
		static bool IsPatternSupported(Element *);
		virtual long DoMethod(int,char *);
	};

	class ItemList
	{
		static IClassInfo * s_pClassInfo;
	public:
		virtual Element * GetAdjacent(Element *,int,NavReference const *,unsigned long);
		virtual IClassInfo * GetClassInfoW();
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
	};

	struct Layout
	{
		Element * GetChildFromLayoutIndex(Element *,int,DynamicArray<Element *,0> *);
		int GetLayoutIndexFromChild(Element *,Element *);
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

	class Macro
	{
		static IClassInfo * s_pClassInfo;
	protected:
		static Value * _LoadImage32BitsPerPixel(unsigned short const *);
		static void _BitAccurateFillRect(HDC__ *,int,int,int,int,unsigned char,unsigned char,unsigned char,unsigned char,unsigned long);
		virtual long BuildElement();
		void ResolveBindings();
	public:
		static PropertyInfo const * ExpandProp();
		unsigned short const * GetExpand(Value * *);
		virtual IClassInfo * GetClassInfoW();
		virtual long Add(Element * *,unsigned int);
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
	};

	class ManipulationHelper
	{
	protected:
		long EnsureInitialized();
	public:
		ContentTiler * GetContentTiler();
		IDirectManipulationManager * GetManagerNoAddref();
		long Activate(HWND__ *);
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
		static void _TimerProc(HWND__ *,unsigned int,unsigned __int64,unsigned long);
		void _AddLayeredRef();
		void _CreateDotVisuals();
		void _DestroyAnimationsAndVisuals();
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
		bool IsIndependentAnimations();
		bool IsSmoothFillAnimation();
		int GetMaximum();
		int GetMinimum();
		int GetPosition();
		long Initialize(unsigned int,Element *,unsigned long *);
		long SetPosition(int);
		long SetState(int);
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
		virtual IClassInfo * GetClassInfoW();
		virtual ~ModernProgressBar();
		void StopIndicatorAnimation();
	};

	class ModernProgressBarRangeValueProxy
	{
	protected:
		virtual void Init(Element *);
	public:
		virtual long DoMethod(int,char *);
	};

	class ModernProgressRing
	{
		static IClassInfo * s_pClassInfo;
		static ModernProgressRing::ANIMATIONTIMELINE const * const c_rgAnimationCurves;
		static ModernProgressRing::RING_DESIGN_VALUES const * const c_rgRingDesignValues;
		static float s_ComputeCircularFunc(float,ModernProgressRing::FUNCMODE);
		static void _TimerProc(HWND__ *,unsigned int,unsigned __int64,unsigned long);
		static void s_GetAngleEndpoint(float,float,float *,float *);
		void _Start();
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
		long Initialize(unsigned int,Element *,unsigned long *);
		static PropertyInfo const * ActivityOccuringProp();
		static PropertyInfo const * AddLayeredRefProp();
		virtual IClassInfo * GetClassInfoW();
	};

	struct NativeHWNDHost
	{
		long Initialize(unsigned short const *,unsigned short const *,HWND__ *,HICON__ *,int,int,int,int,int,int,HINSTANCE__ *,unsigned int);
		static __int64 WndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
		static unsigned int DestroyMsg();
		virtual HWND__ * CreateHostWindow(unsigned long,unsigned short const *,unsigned short const *,unsigned long,int,int,int,int,HWND__ *,HMENU__ *,HINSTANCE__ *,void *);
		virtual long OnMessage(unsigned int,unsigned __int64,__int64,__int64 *);
		virtual ~NativeHWNDHost();
		void DestroyWindow();
		void Host(Element *);
	};

	struct NavScoring
	{
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
		static PropertyInfo const * TargetPageProp();
		unsigned short const * GetTargetPage(Value * *);
		virtual IClassInfo * GetClassInfoW();
		virtual void OnEvent(Event *);
	};

	class NavigatorSelectionItemProxy
	{
		long GetIsSelected(Browser *,int *);
	protected:
		virtual void Init(Element *);
	public:
		virtual long DoMethod(int,char *);
	};

	class NineGridLayout
	{
		void _UpdateTileList(int,Element *);
	public:
		static long Create(Layout * *);
		static long Create(int,int *,Value * *);
		virtual Element * GetAdjacent(Element *,Element *,int,NavReference const *,unsigned long);
		virtual tagSIZE UpdateDesiredSize(Element *,int,int,Surface *);
		virtual void DoLayout(Element *,int,int);
		virtual void OnAdd(Element *,Element * *,unsigned int);
		virtual void OnLayoutPosChanged(Element *,Element *,int,int);
		virtual void OnRemove(Element *,Element * *,unsigned int);
	};

	class PText
	{
		static IClassInfo * s_pClassInfo;
	public:
		virtual IClassInfo * GetClassInfoW();
		virtual bool OnPropertyChanging(PropertyInfo const *,int,Value *,Value *);
	};

	struct PVLAnimation
	{
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
		virtual IClassInfo * GetClassInfoW();
	};

	class Pages
	{
		static IClassInfo * s_pClassInfo;
	public:
		Element * GetPage(unsigned int);
		Element * GetPage(unsigned short const *);
		unsigned int GetCount();
		virtual IClassInfo * GetClassInfoW();
		virtual long Add(Element * *,unsigned int);
	};

	namespace ParserTools
	{
		struct Tokenizer
		{
			TokenType Next();
			static bool IsLiteralChar(unsigned short);
			static bool IsWhiteSpace(unsigned short);
			unsigned short PeekChar();
			void SkipWhiteSpace();
		};

		class ValueParser
		{
			long FinishComplexNodeT(unsigned int);
			long InsertExprNodeT(ExprNodeType,int);
			long ParseFuncall();
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
		static long Create(ElementProvider *,IUnknown * *);
		virtual ProviderProxy * (*GetProxyCreator())(Element *);
		virtual void Init(ElementProvider *);
		virtual ~PatternProvider<ValueProvider,IValueProvider,12>();
	};

	class Progress
	{
		static IClassInfo * s_pClassInfo;
	public:
		int GetMaximum();
		int GetMinimum();
		int GetPosition();
		long SetPosition(int);
		static PropertyInfo const * MaximumProp();
		static PropertyInfo const * MinimumProp();
		static PropertyInfo const * PositionProp();
		virtual IClassInfo * GetClassInfoW();
		virtual tagSIZE GetContentSize(int,int,Surface *);
		virtual void Paint(HDC__ *,tagRECT const *,tagRECT const *,tagRECT *,tagRECT *);
	};

	class ProgressRangeValueProxy
	{
	protected:
		virtual void Init(Element *);
	public:
		virtual long DoMethod(int,char *);
	};

	struct PropNotify
	{
		bool IsEqual(PropertyInfo const * (*)());
		static bool IsEqual(PropertyInfo const *,int,PropertyInfo const * (*)());
	};

	struct PropertyData
	{
		long AddCondMapping(unsigned short,unsigned int,Value *);
		void Free();
	};

	class PushButton
	{
		static IClassInfo * s_pClassInfo;
		void FireHostEvent(Element *,bool);
	public:
		static PropertyInfo const * EnforceSizeProp();
		virtual IClassInfo * GetClassInfoW();
		virtual tagSIZE GetContentSize(int,int,Surface *);
		virtual void OnHosted(Element *);
		virtual void OnUnHosted(Element *);
	};

	class RadioButtonGlyph
	{
		static IClassInfo * s_pClassInfo;
	public:
		virtual IClassInfo * GetClassInfoW();
		virtual bool OnLostDialogFocus(IDialogElement *);
		virtual bool OnReceivedDialogFocus(IDialogElement *);
	};

	struct RangeValueProvider
	{
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
	};

	struct RangeValueProxy
	{
		static RangeValueProxy * Create(Element *);
		static bool IsPatternSupported(Element *);
	};

	class RefPointElement
	{
		static IClassInfo * s_pClassInfo;
	public:
		static PropertyInfo const * ActualReferencePointProp();
		static PropertyInfo const * ReferencePointProp();
		virtual IClassInfo * GetClassInfoW();
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
	};

	struct RefcountBase
	{
		long Release();
	};

	class RepeatButton
	{
		static IClassInfo * s_pClassInfo;
		static void _RepeatButtonActionCallback(GMA_ACTIONINFO *);
	public:
		virtual IClassInfo * GetClassInfoW();
		virtual void OnInput(InputEvent *);
	};

	class Repeater
	{
		static IClassInfo * s_pClassInfo;
	protected:
		virtual long BuildElement();
	public:
		virtual IClassInfo * GetClassInfoW();
	};

	struct ResourceHandleCache
	{
		virtual void * Open(unsigned short const *,int);
		virtual void Close(void *);
	};

	class ResourceModuleHandles
	{
		static long volatile g_cRefCount;
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
		RichText();
		bool GetVerticalScript();
		int GetColorFontPaletteIndex();
		int GetConstrainLayout();
		long Initialize(Element *,unsigned long *);
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
		unsigned long GetTrimmedLineCount();
		unsigned short const * GetFontColorRuns(Value * *);
		virtual IClassInfo * GetClassInfoW();
		virtual long GetForegroundColorRef(unsigned long *);
		virtual tagSIZE GetContentSize(int,int,Surface *);
		virtual void OnEvent(Event *);
		virtual void OnHosted(Element *);
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
		virtual void Paint(HDC__ *,tagRECT const *,tagRECT const *,tagRECT *,tagRECT *);
		virtual ~RichText();
	};

	class RichTextCache
	{
		long _EnsureEntry(unsigned long,RichTextCacheEntry * *);
		long _GetEntry(unsigned long,RichTextCacheEntry * *);
	public:
		long AddGlyphRun(unsigned long,float,float,DWRITE_GLYPH_RUN const &,DWRITE_MEASURING_MODE);
		long BeginGlyphRuns(unsigned long);
		long Draw(unsigned long,IDWriteTextRenderer *);
		long SetLayoutConstraints(unsigned long,int,int);
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
		long Initialize(int,unsigned int,unsigned int);
		static long Create(int,int *,Value * *);
		static long Create(int,unsigned int,unsigned int,Layout * *);
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
		long Access(tagSAFEARRAY *,unsigned short);
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
		static Schema::Event EventFromEventId(int);
		static Schema::Pattern PatternFromPatternId(int);
		static __int64 (* UiaReturnRawElementProvider)(HWND__ *,unsigned __int64,__int64,IRawElementProviderSimple *);
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
		bool GetVertical();
		int GetOrder();
		long Initialize(bool,Element *,unsigned long *);
		long SetVertical(bool);
		static PropertyInfo const * LineProp();
		static PropertyInfo const * MaximumProp();
		static PropertyInfo const * MinimumProp();
		static PropertyInfo const * OrderProp();
		static PropertyInfo const * PageProp();
		static PropertyInfo const * PositionProp();
		static PropertyInfo const * ProportionalProp();
		static PropertyInfo const * VerticalProp();
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
	};

	class ScrollBarRangeValueProxy
	{
	protected:
		virtual void Init(Element *);
	public:
		virtual long DoMethod(int,char *);
	};

	struct ScrollItemProvider
	{
		virtual ProviderProxy * (*GetProxyCreator())(Element *);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual long ScrollIntoView();
		virtual unsigned long AddRef();
		virtual unsigned long Release();
	};

	class ScrollItemProxy
	{
	protected:
		virtual void Init(Element *);
	public:
		static ScrollItemProxy * Create(Element *);
		static bool IsPatternSupported(Element *);
		virtual long DoMethod(int,char *);
	};

	struct ScrollProvider
	{
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
	};

	class ScrollProxy
	{
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
		virtual IClassInfo * GetClassInfoW();
		virtual void OnListenedPropertyChanged(Element *,PropertyInfo const *,int,Value *,Value *);
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
	};

	struct SelectionItemProvider
	{
		virtual ProviderProxy * (*GetProxyCreator())(Element *);
		virtual long AddToSelection();
		virtual long QueryInterface(_GUID const &,void * *);
		virtual long RemoveFromSelection();
		virtual long Select();
		virtual long get_IsSelected(int *);
		virtual long get_SelectionContainer(IRawElementProviderSimple * *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
	};

	class SelectionItemProxy
	{
	protected:
		Selector * GetAncestorAndChild<Selector>(Element * *);
	public:
		static SelectionItemProxy * Create(Element *);
		static bool IsPatternSupported(Element *);
	};

	struct SelectionProvider
	{
		virtual ProviderProxy * (*GetProxyCreator())(Element *);
		virtual long GetSelection(tagSAFEARRAY * *);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual long get_CanSelectMultiple(int *);
		virtual long get_IsSelectionRequired(int *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
	};

	struct SelectionProxy
	{
		static SelectionProxy * Create(Element *);
		static bool IsPatternSupported(Element *);
	};

	class Selector
	{
		static IClassInfo * s_pClassInfo;
	public:
		Element * GetSelection();
		static PropertyInfo const * SelectionProp();
		virtual Element * GetAdjacent(Element *,int,NavReference const *,unsigned long);
		virtual IClassInfo * GetClassInfoW();
		virtual long SetSelection(Element *);
		virtual void OnEvent(Event *);
		virtual void OnInput(InputEvent *);
		virtual void OnKeyFocusMoved(Element *,Element *);
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
	};

	class SelectorNoDefault
	{
		static IClassInfo * s_pClassInfo;
	public:
		virtual IClassInfo * GetClassInfoW();
		virtual long SetSelection(Element *);
		virtual void OnEvent(Event *);
		virtual void OnKeyFocusMoved(Element *,Element *);
	};

	class SelectorSelectionItemProxy
	{
		long AddToSelection();
		long Select();
	protected:
		virtual void Init(Element *);
	public:
		virtual long DoMethod(int,char *);
	};

	class SelectorSelectionProxy
	{
	protected:
		virtual void Init(Element *);
	public:
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
		long UpdateZoomLevels(float,float);
		void GetLastTarget(bool,bool,int,int,float *,float *);
	};

	class SemanticZoomToggle
	{
		static IClassInfo * s_pClassInfo;
	public:
		virtual IClassInfo * GetClassInfoW();
		virtual long DefaultAction();
	};

	class ShellBorderLayout
	{
		long _CalcTabOrder(Element *);
		void _Reset();
	public:
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
			void WaitForExit();
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
		virtual IClassInfo * GetClassInfoW();
		virtual void OnListenedPropertyChanged(Element *,PropertyInfo const *,int,Value *,Value *);
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
		virtual ProviderProxy * (*GetProxyCreator())(Element *);
		virtual long GetColumnHeaderItems(tagSAFEARRAY * *);
		virtual long GetRowHeaderItems(tagSAFEARRAY * *);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
	};

	class TableItemProxy
	{
	protected:
		virtual void Init(Element *);
	public:
		static TableItemProxy * Create(Element *);
		static bool IsPatternSupported(Element *);
		virtual long DoMethod(int,char *);
	};

	struct TableLayout
	{
		CellInfo * GetCellInfo(int);
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
		virtual ProviderProxy * (*GetProxyCreator())(Element *);
		virtual long GetColumnHeaders(tagSAFEARRAY * *);
		virtual long GetRowHeaders(tagSAFEARRAY * *);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual long get_RowOrColumnMajor(RowOrColumnMajor *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
	};

	class TableProxy
	{
	protected:
		virtual void Init(Element *);
	public:
		static TableProxy * Create(Element *);
		static bool IsPatternSupported(Element *);
		virtual long DoMethod(int,char *);
	};

	class TextGraphic
	{
		static IClassInfo * s_pClassInfo;
	public:
		long Initialize(Element *,unsigned long *);
		static PropertyInfo const * SideGraphicProp();
		virtual IClassInfo * GetClassInfoW();
		virtual bool OnPropertyChanging(PropertyInfo const *,int,Value *,Value *);
		virtual unsigned short const * GetContentStringAsDisplayed(Value * *);
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
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
		static UID Drag();
		virtual IClassInfo * GetClassInfoW();
		virtual void OnInput(InputEvent *);
	};

	struct ToggleProvider
	{
		virtual ProviderProxy * (*GetProxyCreator())(Element *);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual long Toggle();
		virtual long get_ToggleState(ToggleState *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
	};

	class ToggleProxy
	{
	protected:
		virtual void Init(Element *);
	public:
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
		bool CancelClick(TouchButton::ClickDevice);
		bool GetCaptured();
		bool GetPressed();
		long Initialize(unsigned int,Element *,unsigned long *);
		long SetCaptured(bool);
		long SetPressed(bool);
		long SetShowKeyFocus(bool);
		static PropertyInfo const * CapturedProp();
		static PropertyInfo const * HandleEnterProp();
		static PropertyInfo const * HandleGlobalEnterProp();
		static PropertyInfo const * PressedProp();
		static PropertyInfo const * ShowKeyFocusProp();
		static PropertyInfo const * TreatRightMouseButtonAsLeftProp();
		static UID Click();
		static UID MultipleClick();
		static UID RightClick();
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
		long Initialize(unsigned int,Element *,unsigned long *);
		long SetCheckedState(CheckedStateFlags);
		static PropertyInfo const * CheckedStateProp();
		static PropertyInfo const * ToggleOnClickProp();
		virtual IClassInfo * GetClassInfoW();
		virtual bool OnPropertyChanging(PropertyInfo const *,int,Value *,Value *);
		virtual long Insert(Element * *,unsigned int,unsigned int);
		virtual void GetImmersiveFocusRectOffsets(tagRECT *);
		virtual void OnEvent(Event *);
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
		virtual void Paint(HDC__ *,tagRECT const *,tagRECT const *,tagRECT *,tagRECT *);
	};

	class TouchCheckBoxGlyph
	{
		static IClassInfo * s_pClassInfo;
	public:
		virtual IClassInfo * GetClassInfoW();
		virtual bool OnPropertyChanging(PropertyInfo const *,int,Value *,Value *);
		virtual long Insert(Element * *,unsigned int,unsigned int);
		virtual void Paint(HDC__ *,tagRECT const *,tagRECT const *,tagRECT *,tagRECT *);
	};

	class TouchCommandButton
	{
		Element * _GetContentElement();
		Element * _GetSubContentElement();
		static IClassInfo * s_pClassInfo;
	public:
		long Initialize(unsigned int,Element *,unsigned long *);
		virtual IClassInfo * GetClassInfoW();
		virtual bool OnPropertyChanging(PropertyInfo const *,int,Value *,Value *);
		virtual long Insert(Element * *,unsigned int,unsigned int);
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
		virtual void Paint(HDC__ *,tagRECT const *,tagRECT const *,tagRECT *,tagRECT *);
	};

	class TouchDialogElement
	{
		static IClassInfo * s_pClassInfo;
	};

	struct TouchEditInner
	{
		long GetSelection(long *,long *);
		long SetPasswordReveal(TouchEditBase::PasswordReveal);
		long SetSelection(long,long);
	};

	class TouchHWNDElement
	{
		struct ElementWithTooltipListener
		{
			virtual void OnListenerDetach(Element *);
		};

		DEVICE_SCALE_FACTOR _UpdateImmersiveScaleFactor();
		Element * _TargetElementFromEventInfo(Element *,tagPOINT const *);
		bool _ShouldUseImmersivePerWindowScaling();
		static IClassInfo * s_pClassInfo;
		static bool _IsElementContentTruncated(Element *);
		void _FireScaleChangeEvent();
		void _HideFocusRect();
		void _OnIHMNotify(IHMState);
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
		long DismissIHMAsync();
		long GetIHMRect(tagRECT *);
		long Initialize(HWND__ *,bool,unsigned int,Element *,unsigned long *);
		long RegisterForIHMChanges();
		long SetFlags(TouchHWNDElementFlags,TouchHWNDElementFlags);
		static PropertyInfo const * FlagsProp();
		static PropertyInfo const * LightDismissIHMProp();
		static UID ProcessingKeyboardNavigation();
		static UID ScaleChanged();
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
		void UnregisterForIHMChanges();
	};

	class TouchHyperLink
	{
		static IClassInfo * s_pClassInfo;
		void _UpdateAccState(bool,bool);
	public:
		static PropertyInfo const * VisitedProp();
		virtual IClassInfo * GetClassInfoW();
		virtual void GetImmersiveFocusRectOffsets(tagRECT *);
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
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
		static PropertyInfo const * DisableMouseInRectCheckProp();
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
		TouchScrollBar();
		bool IsThumbActive();
		long CreateSecondaryContent(IDirectManipulationManager *,IDirectManipulationCompositor *,IDirectManipulationViewport *);
		long DeleteSecondaryContent();
		long Initialize(bool,Element *,unsigned long *);
		long SetOffsetDelta(float);
		static UID AnimateScroll();
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
		void _ResetManipulations(Element *);
	public:
		BaseScrollBar * GetHScroll();
		BaseScrollBar * GetVScroll();
		TouchScrollViewer();
		bool GetAllowArrowOut();
		bool GetMouseWithinHorizontalScrollRegion();
		bool IsManipulationConfigured();
		float GetInertiaEndpointZoomLevel(float);
		float GetZoomMaximum();
		float GetZoomMinimum();
		int GetInteractionMode();
		int GetManipulationHorizontalAlignment();
		int GetManipulationVerticalAlignment();
		int GetSnapMode();
		long CreateTile(tagRECT const *,unsigned __int64 *);
		long Initialize(Element *,unsigned long *);
		long RemoveTile(unsigned __int64);
		long ResetInputState();
		long SetContact(unsigned int,bool);
		long SetInteractionMode(int);
		long SetSnapMode(int);
		long SetSnapPointCollectionY(double const *,int);
		long ZoomToRect(tagRECT const *,bool);
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
		static UID MapContentVisuals();
		static UID ReleaseSnapshot();
		static UID SetContactNeeded();
		static UID SetContactNotify();
		static UID SnapshotTransformElement();
		static UID UpdateContentSize();
		static UID UpdateView();
		virtual IClassInfo * GetClassInfoW();
		virtual long OnContentUpdated(IDirectManipulationViewport *,IDirectManipulationContent *);
		virtual long OnViewportStatusChanged(IDirectManipulationViewport *,DIRECTMANIPULATION_STATUS,DIRECTMANIPULATION_STATUS);
		virtual long OnViewportUpdated(IDirectManipulationViewport *);
		virtual void OnInput(InputEvent *);
		virtual void OnListenedPropertyChanged(Element *,PropertyInfo const *,int,Value *,Value *);
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
		virtual ~TouchScrollViewer();
		void GetVisibleRect(tagRECT *);
		void InvalidateChangedChildElements();
		void InvalidateVirtualizedContainers();
		void ProcessAnimationEvent(AnimateScrollEvent *);
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
		long Initialize(Element *,unsigned long *);
		long SetSelection(Element *);
		long SetSelectionIndex(int);
		static PropertyInfo const * AnimatePopupOnDismissProp();
		static PropertyInfo const * PopupBoundsProp();
		static void FirePopupChangeEvent(Element *,POPUPCHANGEEVENTTYPE);
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
		static PropertyInfo const * TextContentOverrideProp();
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
		TouchSlider();
		bool GetIsContinuous();
		bool GetIsShowOnOffFeedback();
		bool GetIsVertical();
		bool GetShowTick();
		int GetBuffering();
		int GetThumbPosition();
		int GetTickCount();
		int TranslateThumbPositionToThumbValue(int);
		long Initialize(Element *,unsigned long *);
		long SetBuffering(int);
		long SetIsPressed(bool);
		long SetThumbPosition(int);
		static PropertyInfo const * BufferingProp();
		static PropertyInfo const * IsContinuousProp();
		static PropertyInfo const * IsPressedProp();
		static PropertyInfo const * IsShowOnOffFeedbackProp();
		static PropertyInfo const * IsVerticalProp();
		static PropertyInfo const * ShowTickProp();
		static PropertyInfo const * ThumbPositionProp();
		static PropertyInfo const * TickCountProp();
		static UID SliderUpdated();
		virtual IClassInfo * GetClassInfoW();
		virtual tagSIZE _SelfLayoutUpdateDesiredSize(int,int,Surface *);
		virtual void GetImmersiveFocusRectOffsets(tagRECT *);
		virtual void OnEvent(Event *);
		virtual void OnHosted(Element *);
		virtual void OnInput(InputEvent *);
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
		virtual void _SelfLayoutDoLayout(int,int);
		virtual ~TouchSlider();
		void EraseFeedback();
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
	public:
		long Initialize(Element *,unsigned long *);
		static PropertyInfo const * CurrentToggleValueProp();
		static PropertyInfo const * OffTextProp();
		static PropertyInfo const * OnTextProp();
		virtual IClassInfo * GetClassInfoW();
		virtual void OnEvent(Event *);
		virtual void OnInput(InputEvent *);
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
		void SetToggleValue(int,bool,bool);
	};

	class TouchSwitchToggleProxy
	{
	protected:
		virtual void Init(Element *);
	public:
		virtual long DoMethod(int,char *);
	};

	class TouchXBaby
	{
		static IClassInfo * s_pClassInfo;
	};

	class TransitionHandler
	{
		int _FindStoryboard(int);
	public:
		long ClearParentChanges(int);
		long UnlayerContainers(int);
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
		virtual IClassInfo * GetClassInfoW();
	};

	class Value
	{
		static HICON__ * ReloadIcon(Graphic *,float);
		static Value * CreateIconGraphicHelper(HICON__ *,bool,bool,bool);
		static long StrDupW(unsigned short const *,unsigned short * *);
		void _ZeroRelease();
	public:
		bool IsEqual(Value *);
		int GetScaledInt(float);
		static Value * CreateAtom(unsigned short const *);
		static Value * CreateAtom(unsigned short);
		static Value * CreateColor(unsigned long);
		static Value * CreateColor(unsigned long,unsigned long,unsigned char);
		static Value * CreateColor(unsigned long,unsigned long,unsigned long,unsigned char);
		static Value * CreateDFCFill(unsigned int,unsigned int);
		static Value * CreateDTBFill(unsigned short const *,int,int);
		static Value * CreateDoubleList(DynamicArray<double,0> *);
		static Value * CreateDoubleList(double const *,int);
		static Value * CreateElementList(DynamicArray<Element *,0> *);
		static Value * CreateElementRef(Element *);
		static Value * CreateElementScaledValue(Element *,Value *);
		static Value * CreateFill(Fill const &);
		static Value * CreateFloat(float,DynamicScaleValue);
		static Value * CreateGraphic(HBITMAP__ *,unsigned char,unsigned int,bool,bool,bool);
		static Value * CreateGraphic(unsigned short const *,ScaledSIZE,HINSTANCE__ *,bool,bool);
		static Value * CreateGraphic(unsigned short const *,unsigned char,unsigned int,unsigned short,unsigned short,HINSTANCE__ *,bool,bool);
		static Value * CreateInt(int,DynamicScaleValue);
		static Value * CreateLayout(Layout *);
		static Value * CreatePoint(int,int,DynamicScaleValue);
		static Value * CreateRect(int,int,int,int,DynamicScaleValue);
		static Value * CreateScaledValue(float,Value *);
		static Value * CreateSize(int,int,DynamicScaleValue);
		static Value * CreateString(unsigned short const *,HINSTANCE__ *);
		static Value * CreateStyleSheet(StyleSheet *);
		static Value * CreateValueList(DynamicArray<Value *,0> *);
		static Value * GetAtomZero();
		static Value * GetBoolFalse();
		static Value * GetBoolTrue();
		static Value * GetDblListEmpty();
		static Value * GetElListNull();
		static Value * GetElementNull();
		static Value * GetFloatOne();
		static Value * GetFloatZero();
		static Value * GetIntMinusOne();
		static Value * GetIntZero();
		static Value * GetLayoutNull();
		static Value * GetPointZero();
		static Value * GetRectZero();
		static Value * GetSheetNull();
		static Value * GetSizeZero();
		static Value * GetStringNull();
		static Value * GetUnset();
		unsigned short * ToString(unsigned short *,unsigned int);
		void * GetImage(bool,float);
		void AddRef();
		void GetScaledPoint(float,tagPOINT *);
		void GetScaledRect(float,tagRECT *);
		void GetScaledSize(float,tagSIZE *);
		void Release();
	};

	struct ValueMap<Element *,unsigned char>
	{
		Element * * GetFirstKey();
		long SetItem(Element *,unsigned char,bool);
		static long Create(unsigned int,ValueMap<Element *,unsigned char> * *);
		virtual ~ValueMap<Element *,unsigned char>();
		void Remove(Element *,bool,bool);
	};

	struct ValueMap<unsigned long,RichTextCacheEntry *>
	{
		RichTextCacheEntry * * GetItem(unsigned long,bool);
		long SetItem(unsigned long,RichTextCacheEntry *,bool);
	};

	struct ValueProvider
	{
		virtual ProviderProxy * (*GetProxyCreator())(Element *);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual long SetValue(unsigned short const *);
		virtual long get_IsReadOnly(int *);
		virtual long get_Value(unsigned short * *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
	};

	class ValueProxy
	{
		long GetValue(unsigned short * *);
		long SetValue(unsigned short const *);
	protected:
		virtual void Init(Element *);
	public:
		static ValueProxy * Create(Element *);
		static bool IsPatternSupported(Element *);
		virtual long DoMethod(int,char *);
	};

	class VerticalFlowLayout
	{
	protected:
		tagSIZE BuildCacheInfo(Element *,int,int,Surface *,bool);
	public:
		static long Create(bool,unsigned int,unsigned int,unsigned int,Layout * *);
		static long Create(int,int *,Value * *);
		virtual Element * GetAdjacent(Element *,Element *,int,NavReference const *,unsigned long);
		virtual tagSIZE UpdateDesiredSize(Element *,int,int,Surface *);
		virtual void DoLayout(Element *,int,int);
		virtual ~VerticalFlowLayout();
	};

	class Viewer
	{
		Element * _GetContent();
		bool _InternalEnsureVisible(int,int,int,int);
		static IClassInfo * s_pClassInfo;
	public:
		bool GetXScrollable();
		bool GetYScrollable();
		int GetXOffset();
		long SetXOffset(int);
		long SetYOffset(int);
		static PropertyInfo const * XOffsetProp();
		static PropertyInfo const * XScrollableProp();
		static PropertyInfo const * YOffsetProp();
		static PropertyInfo const * YScrollableProp();
		virtual IClassInfo * GetClassInfoW();
		virtual bool EnsureVisible(int,int,int,int);
		virtual bool OnPropertyChanging(PropertyInfo const *,int,Value *,Value *);
		virtual tagSIZE _SelfLayoutUpdateDesiredSize(int,int,Surface *);
		virtual void OnEvent(Event *);
		virtual void OnInput(InputEvent *);
		virtual void OnPropertyChanged(PropertyInfo const *,int,Value *,Value *);
		virtual void _SelfLayoutDoLayout(int,int);
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
	};

	class XElement
	{
		static IClassInfo * s_pClassInfo;
	public:
		long SetProvider(IUnknown *);
		static UID UnhandledSyschar();
		static unsigned int const s_uButtonFocusChangeMsg;
		static unsigned int const s_uNavigateOutMsg;
		static unsigned int const s_uUnhandledSyscharMsg;
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

	CCritSec g_csShared;
	CSafeElementPtr<DirectUI::Element> * HNew<CSafeElementPtr<Element> >();
	CTaskDialogIcon * HNew<CTaskDialogIcon>();
	DEVICE_SCALE_FACTOR _GetScaleFactorForWindow(HWND__ *);
	DirectUI::BaseScrollBar * GetBaseScrollBar(DirectUI::Element *);
	DirectUI::BaseScrollViewer * GetTypeAncestor<BaseScrollViewer>(DirectUI::Element *);
	DirectUI::Browser * GetTypeAncestor<Browser>(DirectUI::Element *);
	DirectUI::CClassFactory * g_pClassFactory;
	DirectUI::CcsPciMapInitializer g_InitCriticalSection;
	DirectUI::DynamicArrayBase<DirectUI::Cond,DirectUI::ChunkAllocationPolicy<DirectUI::Cond,1>,3,0> * _CopyConds(DirectUI::Cond *);
	DirectUI::Element * DUI_GetElementUnderCursor(DirectUI::HWNDElement *,tagPOINT *);
	DirectUI::Element * DUI_GetFirstChild(DirectUI::Element *);
	DirectUI::Element * GetVisibleAccessibleParent(DirectUI::Element *);
	DirectUI::Element * _FindDescendentElement(DirectUI::Element *,DirectUI::IClassInfo *);
	DirectUI::Element * _WalkChildElements(DirectUI::Element *,DirectUI::IClassInfo *);
	DirectUI::Event * HNew<Event>();
	DirectUI::Event * HNewAndZero<Event>();
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
	HBITMAP__ * LoadDDBitmap(unsigned short const *,HINSTANCE__ *,int,int);
	HBITMAP__ * _CreateHBITMAP(tagSIZE const *);
	HBRUSH__ * CreateDibBrush(HDC__ *,int,int,int,int,int);
	HBRUSH__ * CreateDibDirectBrush(HDC__ *,int,int,int,int,tagBITMAPINFOHEADER *,unsigned char *,DirectUI::BRUSHBUFF *,int);
	HICON__ * DUI_GetCursorHandle(DirectUI::Element *);
	HICON__ * GethIcon(DirectUI::Value *,DirectUI::Element *);
	HINSTANCE__ * g_hmoduleThis;
	HWND__ * GetHwndFromElement(DirectUI::Element *);
	bool AcceptAll(DirectUI::Element *);
	bool GetFullyVisible(DirectUI::Element *);
	bool GetSystemLogFont(DirectUI::SYSFONTID,float,tagLOGFONTW *);
	bool GetVerticalScrollBar(DirectUI::Element *,bool *);
	bool IsAccessible(DirectUI::Element *,bool);
	bool IsAccessibleAncestor(DirectUI::Element *,DirectUI::Element *);
	bool IsDesktopScalingMode();
	bool IsImmersiveScalingRestrictedToWin8Plateaus();
	bool IsPasswordRevealButton(DirectUI::Element *);
	bool OnlyAccessible(DirectUI::Element *);
	bool UnregisterClassW(HINSTANCE__ *,DirectUI::IClassInfo *,HINSTANCE__ *);
	bool UnregisterClassW(unsigned short const *,DirectUI::IClassInfo *,HINSTANCE__ *);
	bool UnregisterLocal(unsigned short const *,DirectUI::CLocalClasses,HINSTANCE__ *);
	bool _HasValueType(DirectUI::PropertyInfo const *,int);
	bool _OffsetAndIntersectRect(tagRECT const *,tagRECT const *,tagRECT *);
	bool _ReplaceValue(DirectUI::Value * *,DirectUI::Value *);
	bool _ShouldUpdatePropertyValue(DirectUI::PropertyInfo const *,DirectUI::Value *,DirectUI::Value *);
	bool g_fEnableUIAutomationProvider;
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
	int _SplitAndPadUnused(unsigned short *,unsigned short,unsigned short * * const,int);
	int const GetFadeStoryboardId(unsigned int);
	int g_RTLOS;
	int g_dDesktopDPIOverride;
	int g_fTraceElementLeaks;
	int g_nManualStoryboardId;
	long (* g_pfnLoadIconWithScaleDown)(HINSTANCE__ *,unsigned short const *,int,int,HICON__ * *);
	long AddDeps<DynamicArrayBase<PropertyInfo const *,ChunkAllocationPolicy<PropertyInfo const *,2>,1,0> >(DirectUI::DynamicArrayBase<DirectUI::PropertyInfo const *,DirectUI::ChunkAllocationPolicy<DirectUI::PropertyInfo const *,2>,1,0> *,DirectUI::Decl *);
	long AddDeps<DynamicArrayBase<PropertyInfo const *,ChunkAllocationPolicy<PropertyInfo const *,4>,1,0> >(DirectUI::DynamicArrayBase<DirectUI::PropertyInfo const *,DirectUI::ChunkAllocationPolicy<DirectUI::PropertyInfo const *,4>,1,0> *,DirectUI::Decl *);
	long AddElementToLeakedList(DirectUI::Element *);
	long ArrayToSafeArray<IRawElementProviderSimple *>(DirectUI::UiaArray<IRawElementProviderSimple *> *,unsigned short,tagSAFEARRAY * *);
	long ArrayToSafeArray<double>(DirectUI::UiaArray<double> *,unsigned short,tagSAFEARRAY * *);
	long ArrayToSafeArray<int>(DirectUI::UiaArray<int> *,unsigned short,tagSAFEARRAY * *);
	long BufferedPaintLazyInit();
	long BuildSelection(DirectUI::Element *,tagSAFEARRAY * *);
	long BuildShortcutString(unsigned short * *,unsigned short);
	long CheckAdviseArgs(int,tagSAFEARRAY *);
	long CloneArray<DWRITE_GLYPH_OFFSET>(DWRITE_GLYPH_OFFSET const *,unsigned __int64,DWRITE_GLYPH_OFFSET const * *);
	long CloneArray<float>(float const *,unsigned __int64,float const * *);
	long CloneArray<unsigned short>(unsigned short const *,unsigned __int64,unsigned short const * *);
	long CloneElementRectPairList(DirectUI::DynamicArray<DirectUI::ClipRectWithElement *,0> *,DirectUI::DynamicArray<DirectUI::ClipRectWithElement *,0> * *);
	long CloneListAndDiscardOriginal<tagPOINT>(DirectUI::DynamicArray<tagPOINT,0> * *);
	long ComputeMaxSurfaceSize(HGADGET__ *,tagSIZE *);
	long CreateAndInit<AccessibleButton>(DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<AnimationStrip,int>(int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<AutoButton>(DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<Bind>(DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<Browser>(DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<Button,unsigned int>(unsigned int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<CCAVI,unsigned int>(unsigned int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<CCBase,unsigned int>(unsigned int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<CCCheckBox,unsigned int>(unsigned int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<CCCommandLink,unsigned int>(unsigned int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<CCHScrollBar,unsigned int>(unsigned int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<CCListBox,unsigned int>(unsigned int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<CCListView,unsigned int>(unsigned int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<CCProgressBar,unsigned int>(unsigned int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<CCPushButton,unsigned int>(unsigned int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<CCRadioButton,unsigned int>(unsigned int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<CCSysLink,unsigned int>(unsigned int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<CCTrackBar,unsigned int>(unsigned int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<CCTreeView,unsigned int>(unsigned int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<CCVScrollBar,unsigned int>(unsigned int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
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
	long CreateAndInit<ModernProgressBar,int>(int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
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
	long CreateAndInit<TouchCheckBox,unsigned int>(unsigned int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<TouchCheckBoxGlyph>(DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<TouchCommandButton,unsigned int>(unsigned int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<TouchHyperLink,unsigned int>(unsigned int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<TouchRepeatButton,unsigned int>(unsigned int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<TouchSelectItem,int>(int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<TouchSelectPopup,HWND__ *,TouchSelect *>(HWND__ *,DirectUI::TouchSelect *,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<TouchSwitch>(DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<UnknownElement,unsigned int>(unsigned int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<Viewer>(DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<WizXElement,unsigned int>(unsigned int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<WrappingList>(DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	long CreateAndInit<XElement,unsigned int>(unsigned int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
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
	long UiaInit();
	long UiaInitThread(DirectUI::ElTls *);
	long VerifyBehaviorArgs(unsigned short const *,IDuiBehaviorFactory *);
	long VerifyManualStoryboard(DirectUI::Element *,DirectUI::PVLAnimationNotifyEvent *,bool);
	long _CalculateCarouselingRect(tagRECT const *,tagRECT const *,int,int,tagRECT *);
	long _CalculateNonScrollableRect(tagRECT const *,tagRECT const *,tagRECT const *,tagSIZE const *,tagRECT *);
	long _CalculateScrollingRect(tagRECT const *,tagRECT const *,int,int,int,int,tagRECT *);
	long _CreateAndSetLayout(DirectUI::Element *,long (*)(int,int *,DirectUI::Value * *),int,int *);
	long _GetForegroundAlphaColor(DirectUI::Element *,DirectUI::Value *,bool,unsigned long,unsigned long *);
	long _ParseSystemFont(unsigned short const *,float,DirectUI::Value * * const);
	long _TriggerRevealHide(bool,DirectUI::Element *,DirectUI::Element *,DirectUI::Element *,DirectUI::Element *,tagRECT const *,unsigned long *);
	long g_cAccObjects;
	long volatile g_cInitProcessDone;
	long volatile g_cInitProcessRef;
	tagSIZE DUI_GetExtent(DirectUI::Element *);
	unsigned __int64 FindResidInsertionPoint(unsigned short const *,unsigned __int64);
	unsigned char GetPreMultiAlpha(unsigned char,unsigned char);
	unsigned int DUI_GetChildCount(DirectUI::Element *);
	unsigned int _ComputeSpecif(DirectUI::Cond *,DirectUI::IClassInfo *,unsigned int);
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
	void * FindRawResource(HINSTANCE__ *,unsigned short const *,unsigned short const *,unsigned short,unsigned long *);
	void * GetPseudoThemeHandle(unsigned short const *);
	void * HAlloc(unsigned __int64);
	void * HAllocAndZero(unsigned __int64);
	void * HAllocArray(unsigned int,unsigned int);
	void * HReAlloc(void *,unsigned __int64);
	void * HReAllocAndZero(void *,unsigned __int64);
	void AccHFree(void *);
	void CacheCleaningProc(HWND__ *,unsigned int,unsigned __int64,unsigned long);
	void ClassMapCleanupCB(HINSTANCE__ *,DirectUI::IClassInfo *);
	void DUI_GetBorderAndPadding(DirectUI::Element *,tagRECT *);
	void DUI_GetElementRelativeRect(DirectUI::Element *,DirectUI::Element *,tagRECT *);
	void DUI_MapElementPoint(DirectUI::Element *,DirectUI::Element *,tagPOINT const *,tagPOINT *);
	void DUI_MapElementRect(DirectUI::Element *,DirectUI::Element *,tagRECT const *,tagRECT *);
	void DUI_PaintElementTreeToHDC(HDC__ *,tagPOINT const *,tagRECT const *,DirectUI::Element *);
	void DUI_ReduceRectByBorderAndPadding(DirectUI::Element *,tagRECT *);
	void DestroyByteCodeCB(unsigned short *,DirectUI::ByteCode);
	void DestroyLeakedElementList();
	void DestroyLeakedElementsDataCB(DirectUI::Element *,DirectUI::CallstackTracker *);
	void DynamicArray_DeleteItem<RowLayoutSharedInfo *>(DirectUI::DynamicArray<DirectUI::RowLayoutSharedInfo *,0> *,DirectUI::RowLayoutSharedInfo *);
	void ElementLeakTrace(char const *,...);
	void ElementSetValue(DirectUI::Element *,DirectUI::PropertyInfo const *,DirectUI::Value *,DirectUI::Element *);
	void EnumCallstackFramesCB(char const *,char const *,unsigned long,unsigned long);
	void FlipRgn(HRGN__ *,tagRECT const *);
	void GetAlignedRect(DirectUI::HALIGN,DirectUI::VALIGN,tagRECT const *,int,int,tagRECT *);
	void GetLocation(DirectUI::Element *,DirectUI::Element const *,tagPOINT * const);
	void GetRectHelper(DirectUI::Element *,DirectUI::PropertyInfo const *,tagRECT *,bool);
	void GetShortcutString(unsigned short,unsigned short *,unsigned int);
	void HDelete<ClassInfo<AccessibleButton,Button,StandardCreator<AccessibleButton> > >(DirectUI::ClassInfo<DirectUI::AccessibleButton,DirectUI::Button,DirectUI::StandardCreator<DirectUI::AccessibleButton> > *);
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
	void HDelete<ClassInfo<CTaskDialog,DialogElement,EmptyCreator<CTaskDialog> > >(DirectUI::ClassInfo<CTaskDialog,DirectUI::DialogElement,DirectUI::EmptyCreator<CTaskDialog> > *);
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
	void HDelete<ClassInfo<Navigator,PushButton,StandardCreator<Navigator> > >(DirectUI::ClassInfo<DirectUI::Navigator,DirectUI::PushButton,DirectUI::StandardCreator<DirectUI::Navigator> > *);
	void HDelete<ClassInfo<PText,TextGraphic,StandardCreator<PText> > >(DirectUI::ClassInfo<DirectUI::PText,DirectUI::TextGraphic,DirectUI::StandardCreator<DirectUI::PText> > *);
	void HDelete<ClassInfo<Page,Macro,StandardCreator<Page> > >(DirectUI::ClassInfo<DirectUI::Page,DirectUI::Macro,DirectUI::StandardCreator<DirectUI::Page> > *);
	void HDelete<ClassInfo<Pages,Element,StandardCreator<Pages> > >(DirectUI::ClassInfo<DirectUI::Pages,DirectUI::Element,DirectUI::StandardCreator<DirectUI::Pages> > *);
	void HDelete<ClassInfo<Progress,Element,StandardCreator<Progress> > >(DirectUI::ClassInfo<DirectUI::Progress,DirectUI::Element,DirectUI::StandardCreator<DirectUI::Progress> > *);
	void HDelete<ClassInfo<PropSheetPageHost,HWNDHost,EmptyCreator<PropSheetPageHost> > >(DirectUI::ClassInfo<PropSheetPageHost,DirectUI::HWNDHost,DirectUI::EmptyCreator<PropSheetPageHost> > *);
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
	void HDelete<Element>(DirectUI::Element *);
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
	void UnloadCommctlExports();
	void UpdateGadgetSurface(HGADGET__ *,tagSIZE,bool,tagSIZE const *);
	void UpdateLocation(DirectUI::Element *,DirectUI::Element const *,tagPOINT * const);
	void _FillWithAlpha(HDC__ *,tagRECT &,unsigned long,unsigned char);
	void _FireClickEvent(DirectUI::Button *,DirectUI::tagClickInfo *);
	void _ReduceBounds(tagRECT *,tagRECT const *);
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

class DuiWizardFrame
{
	int CenterWindow(HWND__ *);
	long Initialize(PROPDATA *);
	virtual long OnMessage(unsigned int,unsigned __int64,__int64,__int64 *);
public:
	int GetBackButtonRect(tagRECT *);
	int GetGlassRect(tagRECT *);
	static long AllocPropData(_PROPSHEETHEADERW_V2 const *,PROPDATA * *);
	static long Create(PROPDATA *,DuiWizardFrame * *);
	static long ReAllocPageArray(_PROPSHEETHEADERW_V2 *,unsigned int);
	static void FreePropData(PROPDATA *);
	void Run();
	void SetClientRect(tagRECT);
	void SetFrameRect(tagRECT);
	void UpdateGlass();
};

class DuiWizardMarkupHost
{
	DirectUI::Element * GetDefaultFrameButton();
	IPageHost * GetPageHost(ISP const *);
	int GetPageHWND(unsigned int,HWND__ * *);
	int IsAnyFrameButtonVisibleAndEnabled();
	int IsElementAFrameButton(DirectUI::Element *);
	int OnFrameButtonClicked(DirectUI::Element *);
	int OnKeyDown(tagMSG *,HWND__ *,int *);
	int OnSysChar(tagMSG *,HWND__ *);
	int PageChange(unsigned int,int);
	int PageChanging();
	int QueryCancel();
	int QueryFinish();
	int ShouldAllowControlToHandleMessage(tagMSG *,HWND__ *,__int64);
	long AddPageFromISP(unsigned int);
	long CalculatePageContentSize(tagSIZE *,unsigned int);
	long InitPropSheetDlg();
	long Initialize(PROPDATA *,DuiWizardFrame *);
	long LoadPropertySheetMarkup();
	long NextOrBackPressed(int,int *,unsigned int *);
	long OnPropertySheetMarkupLoaded();
	long QueryInitialFocusAndSetFrameButtonFocus(__int64,int *,__int64 *);
	long SetInitialFocus();
	static DirectUI::Value * StaticXMLGetSheetCB(unsigned short const *,void *);
	static int IsFrameButtonVisibleAndEnabled(DirectUI::Element *);
	static unsigned int const s_uFrameButtonClicked;
	static void StaticXMLParserErrorCB(unsigned short const *,unsigned short const *,int,void *);
	virtual __int64 WndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	virtual long CreateStyleParser(DirectUI::DUIXmlParser * *);
	virtual void OnEvent(DirectUI::Event *);
	virtual void OnKeyFocusMoved(DirectUI::Element *,DirectUI::Element *);
	virtual void OnThemeChanged(DirectUI::ThemeChangedEvent *);
	virtual void OnUnHosted(DirectUI::Element *);
	void AdjustFrameSize(unsigned int,tagSIZE,int,int);
	void CacheCurrentFrameSize();
	void DestroyPageHosts();
	void DestroyWizard(int,int);
	void InitWizardIcons();
	void InitializeButtons();
	void InvalidateCachedPageSizes();
	void MakeAccessible();
	void NormalizeCommandAreaButtonWidths();
	void OnEnteredPage(unsigned int);
	void OnNextDlgCtl(HWND__ *,unsigned __int64,__int64);
	void PreSetActive(unsigned int);
	void ResizeFrameSize(tagRECT,tagRECT,int);
	void SetButtonVisibility(int,bool);
	void SetFrameButtonFocus(DirectUI::Element *);
	void SetFrameButtonFocus(int);
	void SetSelectedFrameButton(DirectUI::Element *);
	void UpdateDefaultButtonAsNeeded(UPDATE_DEFAULT_BUTTON_ENUM);
	void UpdateFrameButtonFocusAsNeeded(UPDATE_FRAME_BUTTON_FOCUS_ENUM);
	void UpdateHeaderTitleColor();
	void UpdateWizardTitleColorMaxActive();
public:
	DirectUI::Element * ButtonIdToElement(int);
	DuiWizardMarkupHost();
	HWND__ * IndexToHwnd(unsigned int);
	__int64 QuerySiblings(unsigned __int64,__int64);
	int CanPressButton(DirectUI::Element *);
	int InsertPage(unsigned __int64,_PSP *);
	int IsDialogMessageW(tagMSG *,__int64 *);
	int PressButton(DirectUI::Element *);
	int RemovePage(unsigned int,_PSP *);
	int SendMessageToPage(unsigned int,unsigned int,unsigned __int64,__int64,__int64 *);
	int SendWMNotifyToPage(unsigned int,unsigned int,__int64,__int64 *);
	int SetCurSel(unsigned int,_PSP *);
	int ShortcutPressed(int);
	long InternalAddPage(DirectUI::Element *);
	long SetActivePage(DirectUI::Element *);
	long SetWizardIcon(HICON__ *);
	static long Create(PROPDATA *,DuiWizardFrame *,DirectUI::Element * *);
	tagSIZE CalculateFixedIdealPageSize();
	unsigned int HwndToIndex(HWND__ *);
	unsigned int IDToIndex(unsigned int);
	unsigned int PageToIndex(_PSP *);
	void CalculateClientRect(tagSIZE,tagRECT *);
	void EnableWizButtons(unsigned long,unsigned long);
	void SendMessageToAllPages(unsigned int,unsigned __int64,__int64);
	void SetButtonText(unsigned long,unsigned short const *);
	void SetDefaultFrameButton(unsigned long);
	void SetHeaderTitle(unsigned int,unsigned short const *);
	void SetWizButtons(unsigned long,unsigned long);
	void SetWizardBitmap();
	void SetWizardTitle(unsigned short const *);
	void ShowWizButtons(unsigned long,unsigned long);
	void UpdateButtonText(unsigned long,unsigned short const *);
	void UpdateTitleBar();
};

namespace GroupManagerHelpers
{
	int FindGroup(CLVGroupManager const &,CListGroup const &);
	int FindGroupFail(CLVGroupManager const &,int);
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

class ListBoxStringMatcher
{
protected:
	virtual bool FindNonString(unsigned short const *,int,int);
	virtual bool HasData();
	virtual unsigned short const * GetStringAtIndex(int);
public:
	virtual bool HasStrings();
	virtual tagLBIV * GetListBox();
};

struct ListStringMatcher
{
	int Find(unsigned short const *,int,int,int);
};

namespace Microsoft
{
	namespace WRL
	{
		class ComPtr<DirectUI::CBinaryXmlReader>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<DirectUI::Impl::CParserCache>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IAsyncInfo>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IInitializeWithWindow>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IRestrictedErrorInfo>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::ApplicationModel::DataTransfer::IClipboardStatics>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::ApplicationModel::DataTransfer::IDataPackageView3>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::ApplicationModel::DataTransfer::IDataPackageView>
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

class PropSheetPageHost
{
	HWND__ * _CreatePage();
	int HandleNavigationInsideContent(HWND__ *,tagMSG *,UPDATE_DEFAULT_BUTTON_ENUM *);
	int OnChangeParent(DirectUI::Value *,DirectUI::Value *);
	long Initialize(DirectUI::Element *,unsigned long *,PROPDATA const *,ISP const *);
	static int IsFocusLeavingHostedDialog(HWND__ *,HWND__ *,int,int);
	virtual HWND__ * CreateHWND(HWND__ *);
	virtual bool OnMessage(unsigned int,unsigned __int64,__int64,__int64 *);
	virtual void OnHosted(DirectUI::Element *);
	virtual void OnPropertyChanged(DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnUnHosted(DirectUI::Element *);
	virtual ~PropSheetPageHost();
	void ChangeDefaultButtonsToNormalButtons();
	void OnReceivedKeyboardFocus(DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	void Release();
	void _SyncVisible(bool);
public:
	__int64 SendWMNotify(unsigned int,__int64);
	static DirectUI::IClassInfo * Class;
	static long Create(DirectUI::Element * *,DirectUI::Element *,unsigned long *,PROPDATA const *,ISP const *);
	virtual DirectUI::IClassInfo * GetClassInfoW();
	virtual HWND__ * GetTabItem(TABITEM_ENUM);
	virtual int ContentAreaDefaultButtonExists();
	virtual int GetPageHWND(HWND__ * *);
	virtual int OnEnterKeyDown(tagMSG *,int *);
	virtual int OnNextDlgCtl(unsigned __int64,__int64,int,UPDATE_FRAME_BUTTON_FOCUS_ENUM *);
	virtual int OnSysChar(tagMSG *,int,UPDATE_DEFAULT_BUTTON_ENUM *);
	virtual int OnTabKeyDown(tagMSG *,int,int *,UPDATE_FRAME_BUTTON_FOCUS_ENUM *,UPDATE_DEFAULT_BUTTON_ENUM *);
	virtual long SetFocusInContent(__int64,int *,UPDATE_FRAME_BUTTON_FOCUS_ENUM *,UPDATE_DEFAULT_BUTTON_ENUM *);
	virtual tagSIZE CalculateContentSize(DPISCALEINFO *);
	virtual unsigned int GetPageID();
	virtual void EnsureCreated();
	virtual void MarkAsNotFocused();
	virtual void OnKeyFocusEntered(UPDATE_DEFAULT_BUTTON_ENUM *);
	virtual void OnKeyboardNavigateBubbled(DirectUI::KeyboardNavigateEvent *);
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

struct SmObjectT<ScrubBehavior,IDuiBehavior>
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct TEXTBLOCK
{
	void AddRect(tagRECT const &,unsigned int,unsigned int,unsigned int);
	void FreeRects();
};

struct WICStretchBltter
{
	long Blt(int,HDC__ *,WICRect *,HDC__ *,WICRect *);
};

namespace Windows
{
	namespace UI
	{
		namespace Immersive
		{
			Immersive::CConstraint ConstraintFromWindow(HWND__ *);
		};

	};

};

class WizXElement
{
	int OnChangeParent(DirectUI::Value *,DirectUI::Value *);
	virtual HWND__ * CreateHWND(HWND__ *);
	virtual bool OnMessage(unsigned int,unsigned __int64,__int64,__int64 *);
	virtual void OnPropertyChanged(DirectUI::PropertyInfo const *,int,DirectUI::Value *,DirectUI::Value *);
	virtual void OnUnHosted(DirectUI::Element *);
	virtual ~WizXElement();
	void Release();
public:
	static long Create(ISP *,unsigned int,DirectUI::Element *,unsigned long *,DirectUI::Element * *);
	virtual HWND__ * GetTabItem(TABITEM_ENUM);
	virtual int ContentAreaDefaultButtonExists();
	virtual int GetPageHWND(HWND__ * *);
	virtual int OnEnterKeyDown(tagMSG *,int *);
	virtual int OnNextDlgCtl(unsigned __int64,__int64,int,UPDATE_FRAME_BUTTON_FOCUS_ENUM *);
	virtual int OnSysChar(tagMSG *,int,UPDATE_DEFAULT_BUTTON_ENUM *);
	virtual int OnTabKeyDown(tagMSG *,int,int *,UPDATE_FRAME_BUTTON_FOCUS_ENUM *,UPDATE_DEFAULT_BUTTON_ENUM *);
	virtual long SetFocusInContent(__int64,int *,UPDATE_FRAME_BUTTON_FOCUS_ENUM *,UPDATE_DEFAULT_BUTTON_ENUM *);
	virtual tagSIZE CalculateContentSize(DPISCALEINFO *);
	virtual unsigned int GetPageID();
	virtual void EnsureCreated();
	virtual void MarkAsNotFocused();
	virtual void OnKeyFocusEntered(UPDATE_DEFAULT_BUTTON_ENUM *);
	virtual void OnKeyboardNavigateBubbled(DirectUI::KeyboardNavigateEvent *);
};

class _LISTITEM
{
	static tagPOINT const _ptRecompute;
	void _CachePosition();
public:
	bool IsPositionInRect(tagRECT const &);
	void InitOwnerData(CListView *,int,int);
};

namespace std
{
	nothrow_t const std::nothrow;
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
		void Register(_TlgProvider_t const * const);
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
		};

		struct static_lazy<ComCtlTelemetry>
		{
			ComCtlTelemetry * get(void (*)());
			void cleanup();
		};

		struct static_lazy<DuiTelemetry>
		{
			DuiTelemetry * get(void (*)());
		};

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
		long GetLastErrorFailHr();
		long ReportFailure_GetLastErrorHr(void *,unsigned int,char const *,char const *,char const *,void *,FailureType);
		unsigned __int64 ResultStringSize(char const *);
		unsigned __int64 ResultStringSize(unsigned short const *);
		unsigned char (* g_pfnRtlDllShutdownInProgress)();
		unsigned char * WriteResultString<char const *>(unsigned char *,unsigned char *,char const *,char const * *);
		unsigned char * WriteResultString<unsigned short const *>(unsigned char *,unsigned char *,unsigned short const *,unsigned short const * *);
		unsigned char RtlDllShutdownInProgress();
		unsigned long GetLastErrorFail(void *,unsigned int,char const *,char const *,char const *,void *);
		unsigned long ReportFailure_GetLastError(void *,unsigned int,char const *,char const *,char const *,void *,FailureType);
		unsigned short * LogStringPrintf(unsigned short *,unsigned short const *,unsigned short const *,...);
		void (* g_pfnDebugBreak)();
		void (* g_pfnGetContextAndNotifyFailure)(FailureInfo *,char *,unsigned __int64);
		void (* g_pfnLoggingCallback)(FailureInfo const &);
		void (* g_pfnOriginateCallback)(FailureType,long);
		void (* g_pfnTelemetryCallback)(bool,FailureInfo const &);
		void (* g_pfnThrowResultException)(FailureInfo const &);
		void CloseHandle(void *);
		void DebugBreak();
		void FreeProcessHeap(void *);
		void GetContextAndNotifyFailure(FailureInfo *,char *,unsigned __int64);
		void LogFailure(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long,unsigned short const *,bool,unsigned short *,unsigned __int64,char *,unsigned __int64,FailureInfo *);
		void ReleaseMutex(void *);
		void ReportFailure(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long,unsigned short const *,details::ReportFailureOptions);
		void ReportFailure_Hr(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long);
	};

	namespace details_abi
	{
		struct ProcessLocalStorage<ProcessLocalData>
		{
			ProcessLocalData * GetShared();
			~ProcessLocalStorage<ProcessLocalData>();
		};

		struct ProcessLocalStorageData<ProcessLocalData>
		{
			static long Acquire(char const *,ProcessLocalStorageData<ProcessLocalData> * *);
			void Release();
			~ProcessLocalStorageData<ProcessLocalData>();
		};

		class SemaphoreValue
		{
			long CreateFromValueInternal(unsigned short const *,bool,unsigned __int64);
			static long GetValueFromSemaphore(void *,long *);
			static long TryGetValueInternal(unsigned short const *,bool,unsigned __int64 *,bool *);
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

		details_abi::ProcessLocalStorage<details_abi::ProcessLocalData> * g_pProcessLocalData;
		details_abi::ThreadLocalData * GetThreadLocalDataCache(bool);
	};

	bool (* g_pfnIsDebuggerPresent)();
	bool g_fBreakOnFailure;
	bool g_fIsDebuggerPresent;
	long GetFailureLogString(unsigned short *,unsigned __int64,wil::FailureInfo const &);
};

CSystemMetrics g_systemMetrics;
CUxScrollBarCtl * SBCtlSetup(HWND__ *);
DPI_AWARENESS_CONTEXT__ * (* s_pfnGetWindowDpiAwarenessContext)(HWND__ *);
DirectUI::Button * element_cast<DirectUI::Button>(DirectUI::Element *);
DirectUI::Element * GetFirstKeyboardActiveChildFromPoint(DirectUI::Element *,tagPOINT *);
DirectUI::HWNDElement * element_cast<DirectUI::HWNDElement>(DirectUI::Element *);
DirectUI::ItemList * element_cast<DirectUI::ItemList>(DirectUI::Element *);
DirectUI::ScrollBar * element_cast<DirectUI::ScrollBar>(DirectUI::Element *);
DirectUI::Thumb * element_cast<DirectUI::Thumb>(DirectUI::Element *);
DirectUI::TouchButton * element_cast<DirectUI::TouchButton>(DirectUI::Element *);
DirectUI::TouchHWNDElement * element_cast<DirectUI::TouchHWNDElement>(DirectUI::Element *);
DirectUI::TouchScrollViewer * element_cast<DirectUI::TouchScrollViewer>(DirectUI::Element *);
DirectUI::TouchSelectItem * element_cast<DirectUI::TouchSelectItem>(DirectUI::Element *);
HBITMAP__ * CreateMirroredBitmap(HBITMAP__ *,int,int);
HBITMAP__ * _CreateMappedBitmap(tagBITMAPINFOHEADER *,unsigned char const *,unsigned long const *,unsigned int,unsigned int);
HBITMAP__ * g_hbmDcDeselect;
HBITMAP__ * g_hbmDst;
HBITMAP__ * g_hbmSrc;
HBITMAP__ * g_hbmWork;
HBRUSH__ * Button_InitDC(tagBUTN *,HDC__ *);
HBRUSH__ * Button_InitDCForPainting(tagBUTN *,HDC__ *,int *);
HBRUSH__ * DrawBackground(TRACKBAR *);
HBRUSH__ * Edit_GetBrush(tagED *,HDC__ *);
HBRUSH__ * Edit_GetControlBrush(tagED *,HDC__ *,long);
HBRUSH__ * ListBox_GetBrush(tagLBIV *,HBRUSH__ * *);
HBRUSH__ * ScrollBar_GetControlBrush(HWND__ *,HDC__ *,unsigned int,int *);
HBRUSH__ * ScrollBar_GetControlColor(HWND__ *,HWND__ *,HDC__ *,unsigned int,int *);
HDC__ * Button_GetDC(tagBUTN *,HBRUSH__ * *);
HDC__ * CCSoftFadeInitialize(tagCCSOFTFADE *,HWND__ *,HDC__ *,tagRECT const *,tagRECT const *,tagRECT const *,unsigned long);
HDC__ * Edit_GetDC(tagED *,int);
HDC__ * PrepBackgroundDIBSection(HDC__ *,tagRECT const *,void * *,HBITMAP__ * *);
HDC__ * g_hdcDst;
HDC__ * g_hdcSrc;
HDI const * Header_GetNextItem(HD *,int,int *);
HDI const * Header_GetPrevItem(HD *,int,int,int *);
HFONT__ * ComboEx_GetFont(COMBOEX *);
HICON__ * ConvertIconTo32bpp(HICON__ *,DPISCALEINFO const &);
HINSTANCE__ * g_wil_details_ntdllModuleHandle;
HINSTANCE__ * wil_details_GetNtDllModuleHandle();
HMENU__ * ScrollBar_GetMenu(int);
HPALETTE__ * PaletteFromBmp(HBITMAP__ *);
HWND__ * ComboEx_GetEditBox(COMBOEX *);
HWND__ * Edit_BalloonTipRemoveSubclasses(tagED *);
HWND__ * GetFirstDlgTabItem(HWND__ *);
HWND__ * TV_EditLabel(_TREE *,_TREEITEM *,unsigned short const *);
HWND__ * _CreatePage(PROPDATA *,ISP *,HWND__ *,unsigned short);
HWND__ * _CreatePageDialog(PROPDATA const *,ISP *,HWND__ *,DLGTEMPLATE * const);
HWND__ * _Ppd_GetPage(PROPDATA *,int);
IImageList * g_pimlImplicitDrag;
ISP * AllocPropertySheetPage(unsigned long);
PSPT_ACTION Prsht_GetAction(PROPDATA const *);
PSPT_ACTION Prsht_GetAction(PSPT_TYPE,PSPT_OVERRIDE);
PSPT_OVERRIDE Prsht_GetOverrideState(PROPDATA const *);
PSPT_TYPE Prsht_GetType(PROPDATA const *,unsigned short);
STRINGINFO * GetStringInfo(STATUSINFO *,unsigned int);
TABITEM * Tab_CreateItem(TC *,tagTCITEMW const *);
WICBitmapAlphaChannelOption DPIToWICAlphaOption(DPI_ALPHA_OPTION);
_DSA * Header_InitOrderArray(HD *);
_IMAGELIST * ComboEx_OnSetImageList(COMBOEX *,_IMAGELIST *);
_IMAGELIST * Header_OnCreateDragImage(HD *,int);
_IMAGELIST * TV_CreateDragImage(_TREE *,_TREEITEM *);
_IMAGELIST * TV_SetImageList(_TREE *,_IMAGELIST *,int,int);
_LV_ACC_VERSION _GetAccVersion();
_PSP * _CreatePropertySheetPage(_PROPSHEETPAGEW const *,int);
_RTL_RUN_ONCE s_InitOnce;
_TREEITEM * TV_CheckHit(_TREE *,int,int,unsigned int *);
_TREEITEM * TV_FindAccId(_TREEITEM *,unsigned long);
_TREEITEM * TV_GetNextItem(_TREE *,_TREEITEM *,unsigned __int64);
_TREEITEM * TV_GetNextVisItem(_TREEITEM *);
_TREEITEM * TV_GetPrevVisItem(_TREEITEM *);
_TREEITEM * TV_GetShownIndexItem(_TREEITEM *,unsigned int);
_TREEITEM * TV_GetVisibleParent(_TREEITEM *);
_TREEITEM * TV_InsertItem(_TREE *,tagTVINSERTSTRUCTW *);
_TREEITEM * TV_InsertItemA(_TREE *,tagTVINSERTSTRUCTA *);
_TREEITEM * TV_ItemAtCursor(_TREE *,tagRECT *);
_TREEITEM * TV_WalkToLevel(_TREEITEM *,int);
__int64 Button_ReloadShield(tagBUTN *,HWND__ *,int);
__int64 Button_ToggleDropDown(tagBUTN *,int);
__int64 Button_WndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
__int64 ComboBox_AddStringToList(tagCBox *,unsigned long,unsigned short const *);
__int64 ComboBox_CreateHandler(tagCBox *,HWND__ *);
__int64 ComboBox_DBCharHandler(tagCBox *,HWND__ *,unsigned int,unsigned __int64,__int64);
__int64 ComboBox_InsertStringToList(tagCBox *,unsigned long,unsigned short const *);
__int64 ComboBox_MessageItemHandler(tagCBox *,unsigned int,void *);
__int64 ComboBox_WndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
__int64 ComboExWndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
__int64 ComboEx_EndEdit(COMBOEX *,int);
__int64 ComboEx_GetLBText(COMBOEX *,unsigned int,unsigned __int64,__int64);
__int64 ComboEx_HandleCommand(COMBOEX *,unsigned __int64,__int64);
__int64 ComboEx_OnInsertItem(COMBOEX *,tagCOMBOBOXEXITEMW const *);
__int64 ComboSubclassProc(HWND__ *,unsigned int,unsigned __int64,__int64,unsigned __int64,unsigned __int64);
__int64 EditML_WndProc(tagED *,unsigned int,unsigned __int64,__int64);
__int64 EditSL_WndProc(tagED *,unsigned int,unsigned __int64,__int64);
__int64 EditSubclassProc(HWND__ *,unsigned int,unsigned __int64,__int64,unsigned __int64,unsigned __int64);
__int64 Edit_BalloonTipParentSubclassProc(HWND__ *,unsigned int,unsigned __int64,__int64,unsigned __int64,unsigned __int64);
__int64 Edit_BalloonTipSubclassParents(tagED *);
__int64 Edit_HideBalloonTipHandler(tagED *);
__int64 Edit_ImeComposition(tagED *,unsigned __int64,__int64);
__int64 Edit_RequestHandler(tagED *,unsigned __int64,__int64);
__int64 Edit_ShowBalloonTipHandler(tagED *,_tagEDITBALLOONTIP *);
__int64 Edit_ShowBalloonTipWrap(HWND__ *,unsigned long,unsigned long,unsigned long);
__int64 Edit_TrackBalloonTip(tagED *);
__int64 Edit_WndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
__int64 Header_EditWndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
__int64 Header_OnClearFilter(HD *,int);
__int64 Header_OnGetOrderArray(HD *,int,int *);
__int64 Header_OnSetHotDivider(HD *,int,__int64);
__int64 Header_OnSetOrderArray(HD *,int,int const *);
__int64 Header_WndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
__int64 ImageDragWndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
__int64 InitStatusWnd(HWND__ *,tagCREATESTRUCTW *);
__int64 ListBox_GetItemDataHandler(tagLBIV const *,int);
__int64 ListBox_WndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
__int64 Progress_OnNCCreate(HWND__ *,tagCREATESTRUCTW *);
__int64 Progress_Update(PRO_DATA *,int,int);
__int64 Progress_WndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
__int64 PropSheetDlgProc(HWND__ *,unsigned int,unsigned __int64,__int64);
__int64 Prsht_ButtonSubclassProc(HWND__ *,unsigned int,unsigned __int64,__int64,unsigned __int64,unsigned __int64);
__int64 QuerySiblings(PROPDATA *,unsigned __int64,__int64);
__int64 SBGetText(STATUSINFO const *,unsigned __int64,void *,int,unsigned int);
__int64 StatusWndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
__int64 TTSubclassProc(HWND__ *,unsigned int,unsigned __int64,__int64,unsigned __int64,unsigned __int64);
__int64 TV_EditWndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
__int64 TV_GenerateDragImage(_TREE *,SHDRAGIMAGE *);
__int64 TV_HandleTTCustomDraw(_TREE *,tagNMTTCUSTOMDRAW *);
__int64 TV_OnCreate(HWND__ *,tagCREATESTRUCTW *);
__int64 TV_OnScroll(_TREE *,tagNMHDR *);
__int64 TV_WndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
__int64 TabDragCallback(HWND__ *,unsigned int,unsigned __int64,__int64);
__int64 TrackBarWndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
__int64 TrackOnCreate(HWND__ *,tagCREATESTRUCTW *);
__int64 WizardWndProc(HWND__ *,unsigned int,unsigned __int64,__int64,unsigned __int64,unsigned __int64);
__int64 _AeroPropertySheet(_PROPSHEETHEADERW_V2 const *);
__int64 _Header_SetFocusedItem(HD *,int);
__int64 _Header_SetOverflowFocus(HD *);
__int64 _Header_WndProc(HD *,HWND__ *,unsigned int,unsigned __int64,__int64);
__int64 _Ppd_SendNotify(PROPDATA *,int,int,__int64);
__int64 _PropertySheet(_PROPSHEETHEADERW_V2 const *,int);
__int64 _RealPropertySheet(PROPDATA *);
bool ConstructItemAnimationData(_TREE *,_TREEITEM *,AnimationDirection);
bool FindShortcutRecursive(unsigned short,DirectUI::Element *,DirectUI::Element * *,bool *,bool *);
bool InitTreeviewToolTip();
bool IsMessageThatShouldBeForwardedFromFrameToPage(unsigned int);
bool IsProcessShutdownInProgress();
bool IsSafeFileAddress(_RLEFILE *,void *,unsigned __int64);
bool Progress_CheckHighlight(PRO_DATA const *);
bool Progress_PaintThemedHighlight(PRO_DATA const *,HDC__ *,tagRECT);
bool Progress_SetAnimateTimer(PRO_DATA *,int);
bool ShouldMessageBeForwarded(unsigned int);
bool TryForwardMessageToFrame(DirectUI::HWNDElement *,HWND__ *,unsigned int,unsigned __int64,__int64,__int64 *);
bool _CopyStringAorWtoAorW(unsigned short const *,unsigned short const * *,bool,bool);
bool operator==(UID (*const &)(),UID const &);
bool operator==(UID const &,UID (*const &)());
char * Edit_Lock(tagED *);
int (* s_pfnAreDpiAwarenessContextsEqual)(DPI_AWARENESS_CONTEXT__ *,DPI_AWARENESS_CONTEXT__ *);
int (* s_pfnGetDpiForWindow)(HWND__ *);
int (* s_pfnGetSystemMetricsForDpi)(int,int);
int BetweenItems(_TREE *,_TREEITEM *,_TREEITEM *,_TREEITEM *);
int BorrowOne(TC *,int,int,int);
int ButtonPushed(PROPDATA *,unsigned __int64);
int Button_CalculateIdealSize(tagBUTN *,HDC__ *,tagSIZE const *,tagRECT *,int,int);
int Button_IsSoftFadeCapable(tagBUTN *);
int Button_MultiDraw(HDC__ *,__int64,unsigned __int64,int,int);
int Button_OnGetIdealSize(tagBUTN *,tagSIZE *);
int Button_OnGetSplitInfo(tagBUTN *,tagBUTTON_SPLITINFO *);
int Button_OnSetImageList(tagBUTN *,BUTTON_IMAGELIST const *,int);
int Button_OnSetSplitInfo(tagBUTN *,tagBUTTON_SPLITINFO *);
int Button_SetCapture(tagBUTN *,unsigned int);
int Button_SetImage(tagBUTN *,HWND__ *,int,void *,int);
int Button_UpdateTheme(tagBUTN *,int);
int CBDir(tagCBox *,unsigned int,unsigned short const *);
int CCLoadStringEx(HINSTANCE__ *,unsigned int,unsigned short *,int,unsigned short);
int CalcDropDownRect(tagRECT const *,DROPDOWNSIDE,DROPDOWNALIGN,unsigned long,tagRECT *);
int CanBreakAtIndex(unsigned short const *,int);
int ClickOnTheRect(tagRECT const *,HWND__ *,int);
int ComboBox_GetInfo(tagCBox *,tagCOMBOBOXINFO *);
int ComboBox_HideListBoxWindow(tagCBox *,int,int);
int ComboBox_ListControlsHeight(tagCBox *);
int ComboBox_MsgOKInit(unsigned int,__int64 *);
int ComboBox_SetCueBanner(tagCBox *,unsigned short const *);
int ComboEx_BeginEdit(COMBOEX *);
int ComboEx_ComputeItemHeight(COMBOEX *,int);
int ComboEx_GetCurSelText(COMBOEX *,unsigned short *,int);
int ComboEx_OnCreate(HWND__ *,tagCREATESTRUCTW *);
int ComboEx_OnFindStringExact(COMBOEX *,int,unsigned short const *);
int ComboEx_OnGetItem(COMBOEX *,tagCOMBOBOXEXITEMW *);
int ComboEx_OnGetItemA(COMBOEX *,tagCOMBOBOXEXITEMA *);
int ComboEx_OnSetItem(COMBOEX *,tagCOMBOBOXEXITEMW const *);
int ComboEx_StrCmp(COMBOEX const *,unsigned short const *,unsigned short const *);
int ComboSubclass_HandleButton(COMBOEX *,unsigned int,unsigned __int64,__int64);
int ComboSubclass_HandleCommand(COMBOEX *,unsigned __int64,__int64);
int Combo_IsReadOnly(tagCBox *);
int CopyPropertyPageStrings(_PROPSHEETPAGEW *,bool,bool);
int CreateDownlevelBitmap(int,int,int,HDC__ *,HBITMAP__ *,HBITMAP__ * *);
int DPADestroyCallback(void *,void *);
int DPA_DeleteCB<CLVFButton>(CLVFButton *,void *);
int DPA_DeleteCB<CListGroup>(CListGroup *,void *);
int DPA_ReleaseCB<IImageList2>(IImageList2 *,void *);
int DPA_ReleaseCB<IImageListPriv2>(IImageListPriv2 *,void *);
int DiffMonths(unsigned int,int,CALDATETIME const *,int,CALDATETIME const *);
int DiffYearUnits<1000>(unsigned int,int,CALDATETIME const *,int,CALDATETIME const *);
int DiffYearUnits<100>(unsigned int,int,CALDATETIME const *,int,CALDATETIME const *);
int DiffYearUnits<10>(unsigned int,int,CALDATETIME const *,int,CALDATETIME const *);
int DiffYearUnits<1>(unsigned int,int,CALDATETIME const *,int,CALDATETIME const *);
int DrawTextCallback(HDC__ *,unsigned short *,int,tagRECT *,unsigned int,__int64);
int EditML_EnsureCaretVisible(tagED *);
int EditML_IchToLine(tagED const *,unsigned long);
int EditML_IchToYPos(tagED *,unsigned long,int);
int EditML_InsertCrCrLf(tagED *);
int EditML_InsertchLine(tagED *,unsigned long,unsigned long,int);
int EditML_SetTabStops(tagED *,int,int const *);
int EditML_Undo(tagED *);
int EditSL_IchToLeftXPos(tagED *,HDC__ *,unsigned long);
int EditSL_ScrollText(tagED *,HDC__ *);
int EditSL_SetCueBanner(tagED *,int,unsigned short const *);
int EditSL_Undo(tagED *);
int Edit_CalcChangeBlocks(unsigned long,unsigned long,unsigned long,unsigned long,tagSELBLOCK *,tagSELBLOCK *);
int Edit_ClientEdgePaint(tagED *,HRGN__ *);
int Edit_Create(tagED *,long);
int Edit_DoIMEMenuCommand(tagED *,int,HWND__ *);
int Edit_EnableFeature(tagED *,EDIT_CONTROL_FEATURE,int);
int Edit_EnumInputContextCB(HIMC__ *,__int64);
int Edit_GetBackgroundStateId(tagED const *);
int Edit_GetBorderThemeIds(tagED *,int *,int *);
int Edit_GetDBCSVector(tagED *,HDC__ *,unsigned char);
int Edit_GetModKeys(int);
int Edit_InsertText(tagED *,char *,unsigned long const *);
int Edit_IsAncestorActive(HWND__ *);
int Edit_IsCBDataNumeric(tagED *);
int Edit_IsCharNumeric(tagED *,unsigned long);
int Edit_IsCharSurrogate(tagED *,unsigned long);
int Edit_IsFullWidth(unsigned long,unsigned short);
int Edit_NcCreate(tagED *,HWND__ *,tagCREATESTRUCTW *);
int Edit_OnPasteMessage(tagED *);
int Edit_ResultStrHandler(tagED *);
int Edit_SetEditText(tagED *,char *);
int Edit_SetFont(tagED *,HFONT__ *,int);
int Edit_SetIMEMenu(HMENU__ *,HWND__ *,EditMenuItemState);
int EnumCalendarInfoDPAProc(unsigned short *,unsigned long,unsigned short *,__int64);
int EnumResLangProc(HINSTANCE__ *,unsigned short const *,unsigned short const *,unsigned short,__int64);
int EqualRects(tagRECT const *,tagRECT const *,int);
int FadeEnabled();
int FindItem(HWND__ *,HWND__ *,TC_ITEMEXTRA *);
int FindPageIndex(PROPDATA *,int,unsigned __int64,__int64);
int FindPageIndexByHpage(PROPDATA *,_PSP const *);
int FontEnumProc(tagENUMLOGFONTEXW *,tagNEWTEXTMETRICEXW *,int,__int64);
int GetBestJustifyPosition(int,int,int,int,unsigned long,int);
int GetBestSidePosition(int,int,int,int,int,int);
int GetBitmapSize(HBITMAP__ *,tagSIZE *);
int GetCalendarInfoDPA(unsigned long,unsigned long,unsigned long,_DPA * *);
int GetCalendarTimeFormat(unsigned long,unsigned long,CALDATETIME const *,unsigned short const *,unsigned short *,int);
int GetComboPartState(tagCBox *,int);
int GetMinScreenDepth();
int GetMonthsInYearMax(unsigned long,unsigned long);
int GetPageFontMetrics(PROPDATA *,PAGEFONTDATA const *);
int GetPageInfoEx(PROPDATA const *,ISP *,PAGEINFOEX *,unsigned short,unsigned long);
int GetRegIASetting(int *);
int GetSplitButtonDropDownAdjustX(tagBUTN *);
int GetThumbThemePart(TRACKBAR *);
int GetThumbThemeState(TRACKBAR *,int);
int HDDragFullWindows(HD const *);
int HandleHotkey(__int64);
int HanjaKeyHandler(tagED *);
int Header_BeginFilterEdit(HD *,int);
int Header_ComputeItemWidth(HD *,int,int);
int Header_DestroyItemCallback(void *,void *);
int Header_HasDropDown(HD *,int);
int Header_HitTest(HD *,int,int,unsigned int *);
int Header_IsTracking(HD *);
int Header_ItemOrderToIndex(HD *,int);
int Header_Notify(HD *,int,int,int);
int Header_OnCreate(HD *,tagCREATESTRUCTW *);
int Header_OnDeleteItem(HD *,int);
int Header_OnGetItem(HD *,int,_HD_ITEMW *);
int Header_OnGetItemA(HD *,int,_HD_ITEMA *);
int Header_OnGetItemDropDownRect(HD *,int,tagRECT *);
int Header_OnGetItemOrder(HD *,int);
int Header_OnGetItemRect(HD *,int,tagRECT *);
int Header_OnGetOverflowRect(HD *,tagRECT *);
int Header_OnInsertItem(HD *,int,_HD_ITEMW const *);
int Header_OnInsertItemA(HD *,int,_HD_ITEMA *);
int Header_OnLayout(HD const *,_HD_LAYOUT *);
int Header_OnSetCursor(HD *,HWND__ *,unsigned int,unsigned int);
int Header_OnSetItem(HD *,int,_HD_ITEMW const *);
int Header_OnSetItemA(HD *,int,_HD_ITEMA *);
int Header_SendChange(HD *,int,int,_HD_ITEMW const *);
int Header_TranslateAccelerator(HWND__ *,tagMSG const *);
int HitTestScrollBar(HWND__ *,int,tagPOINT);
int ITEM_OFFSET(_TREE *,_TREEITEM *);
int IndexFromPt(STATUSINFO *,tagPOINT);
int InitializeUserAPIs(_RTL_RUN_ONCE *,void *,void * *);
int InlineIsEqualGUID(_GUID const &,_GUID const &);
int InsertPropPage(PROPDATA *,_PSP const *,_PSP *);
int IsBiDiLocale(unsigned long);
int IsClippedByWindow(IAccessible *,tagVARIANT const &,HWND__ *);
int IsDBCSInputEnabled();
int IsDelimiter(unsigned short);
int IsEqualGUID(_GUID const &,_GUID const &);
int IsFEChar(unsigned short);
int IsFontInstalled(unsigned short,unsigned short const *);
int IsHostedControlAPushButton(HWND__ *);
int IsISearchTimedOut(ISEARCHINFO const *);
int IsInButtonList(HWND__ *,tagPOINT);
int IsKeyDown(int);
int IsScrollBarControl(HWND__ *);
int IsSubclassOf<DirectUI::TouchButton>(DirectUI::Element *);
int IsSubclassOf<DirectUI::TouchScrollViewer>(DirectUI::Element *);
int IsSystemProcess();
int IsValidCalendar(unsigned long,unsigned long);
int ListBox_BinarySearchString(tagLBIV *,unsigned short const *);
int ListBox_CItemInWindow(tagLBIV *,int);
int ListBox_CalcVarITopScrollAmt(tagLBIV *,int,int);
int ListBox_CharHandler(ListStringMatcher &,unsigned int,int);
int ListBox_Compare(unsigned short const *,unsigned short const *,unsigned long);
int ListBox_DeleteStringHandler(tagLBIV *,int);
int ListBox_DirHandler(tagLBIV *,unsigned int,unsigned short const *);
int ListBox_GetDC(tagLBIV *);
int ListBox_GetItemRectHandler(tagLBIV *,int,tagRECT *);
int ListBox_GetSelItemsHandler(tagLBIV *,int,int,int *);
int ListBox_GetSetItemHeightHandler(tagLBIV *,unsigned int,int,unsigned int);
int ListBox_GetTextHandler(tagLBIV const *,int,int,int,unsigned short *,unsigned int);
int ListBox_GetThemeIds(tagLBIV const *,int *,int *);
int ListBox_GetVarHeightItemHeight(tagLBIV const *,int);
int ListBox_GromMem(tagLBIV *,int);
int ListBox_ISelFromPt(tagLBIV *,tagPOINT,unsigned long *);
int ListBox_InsertFile(tagLBIV *,unsigned short const *);
int ListBox_InsertItem(tagLBIV *,unsigned short *,int,unsigned int);
int ListBox_InvalidateRect(tagLBIV *,tagRECT const *,int,int);
int ListBox_IsSelected(tagLBIV *,int,unsigned int);
int ListBox_LastFullVisible(tagLBIV *);
int ListBox_Page(tagLBIV *,int,int);
int ListBox_PrintCallback(HDC__ *,__int64,unsigned __int64,int,int);
int ListBox_ResetContentHandler(tagLBIV *);
int ListBox_SetCount(tagLBIV *,int);
int ListBox_SetCurSelHandler(tagLBIV *,int);
int ListBox_SetScrollParms(tagLBIV *,int);
int ListBox_SetTabStopsHandler(tagLBIV *,int,int const *);
int ListBox_VisibleItemsVarOwnerDraw(tagLBIV *,int);
int LoadFile(unsigned short const *,unsigned long *,void * *,void * *);
int MapRectInRTLMirroredWindow(tagRECT *,HWND__ *);
int MinScreenDepthEnumProc(HMONITOR__ *,HDC__ *,tagRECT *,__int64);
int NotifyBeforeMove(TRACKBAR *,unsigned long,int);
int PageChanging(PROPDATA *);
int PageSetSelection(PROPDATA *,int,_PSP const *,int);
int Progress_GetProgressScreenPos(PRO_DATA const *,int,tagRECT const *);
int Progress_UpdatePosition(PRO_DATA *,int,int);
int Prop_IsDialogMessage(PROPDATA *,tagMSG *);
int Prsht_EraseWizBkgnd(PROPDATA *,HDC__ *);
int Prsht_OnCommand(PROPDATA *,int,HWND__ *,unsigned int);
int Prsht_RecalcPageSizes(PROPDATA *);
int Prsht_ResizeDialog(PROPDATA *,int,int,int,int);
int ResetFocusAndSetNewDefID(PROPDATA *);
int SBSetParms(tagSBDATA *,tagSCROLLINFO *,int *,long *);
int SBSetText(STATUSINFO *,unsigned __int64,unsigned short const *);
int SHHasTimeoutElapsed(unsigned long,unsigned long);
int SendKey(int,int,unsigned short,unsigned short);
int SetStatusParts(STATUSINFO *,unsigned int,int const *);
int SetStatusText(STATUSINFO *,STRINGINFO *,unsigned int,unsigned short const *);
int ShellEditWordBreakProc(unsigned short const *,int,int,int);
int ShouldUseMSShellDlg2Font(PROPDATA const *);
int Status_GetRect(STATUSINFO *,unsigned int,tagRECT *);
int TBLogToPhys(TRACKBAR const *,unsigned long);
int TV_CalcScrollBars(_TREE *);
int TV_CheckForDragBegin(_TREE *,_TREEITEM *,int,int);
int TV_CompareItems(TVCOMPARE const *,TVCOMPARE const *,__int64);
int TV_CreateRoot(_TREE *);
int TV_DefCompare(TVCOMPARE const *,TVCOMPARE const *,__int64);
int TV_DeleteItem(_TREE *,_TREEITEM *,unsigned int);
int TV_DismissEdit(_TREE *,int);
int TV_DoExpandRecurse(_TREE *,_TREEITEM *,int);
int TV_EndWatch(_TREE *,TVWATCHEDITEM const *);
int TV_EnsureVisible(_TREE *,_TREEITEM *);
int TV_Expand(_TREE *,unsigned __int64,_TREEITEM *,int);
int TV_ExpandoFadeCreateDCs(_TREE *);
int TV_GetInfoTip(_TREE *,tagNMTTDISPINFOW *,_TREEITEM *,unsigned short *,int);
int TV_GetInsertMarkRect(_TREE *,tagRECT *);
int TV_GetItemHeight(_TREE *,_TREEITEM *);
int TV_GetItemPartRect(_TREE *,_TREEITEM *,_TVITEMPART,tagRECT *);
int TV_GetItemRect(_TREE *,_TREEITEM *,tagRECT *,unsigned int);
int TV_GetPlusSize(_TREE *,_TREEITEM *);
int TV_GetRealPlusSize(_TREE *,_TREEITEM *,HDC__ *,int,int);
int TV_HandleTTNShow(_TREE *,tagNMHDR *);
int TV_HasCheckBoxes(_TREE *);
int TV_HasFocus(_TREE const *);
int TV_HasTransparentImage(_TREE *,int);
int TV_HorzScroll(_TREE *,unsigned int,unsigned int);
int TV_IsItemTextTruncated(_TREE *,_TREEITEM *,tagRECT *);
int TV_IsShowing(_TREEITEM *);
int TV_KeyDown(_TREE *,unsigned __int64,__int64);
int TV_OnGetItem(_TREE *,tagTVITEMEXW *);
int TV_OnGetItemA(_TREE *,tagTVITEMEXA *);
int TV_OnImeComposition(_TREE *,unsigned __int64,__int64);
int TV_RealDrawPlusMinus(_TREE *,_TREEITEM *,HDC__ *,int,int,int,int,int,int,int);
int TV_ScrollBarsAfterAdd(_TREE *,_TREEITEM *);
int TV_ScrollBarsAfterExpandCollapse(_TREE *,_TREEITEM *,unsigned int);
int TV_ScrollBarsAfterRemove(_TREE *,_TREEITEM *);
int TV_ScrollIntoView(_TREE *,_TREEITEM *);
int TV_ScrollVertIntoView(_TREE *,_TREEITEM *);
int TV_SelectItem(_TREE *,unsigned __int64,_TREEITEM *,unsigned int,unsigned int);
int TV_SendBeginDrag(_TREE *,int,_TREEITEM *,int,int);
int TV_SendItemExpand(_TREE *,int,_TREEITEM *,unsigned __int64);
int TV_SendSelChange(_TREE *,int,_TREEITEM *,_TREEITEM *,unsigned int);
int TV_SetInsertMark(_TREE *,_TREEITEM *,int);
int TV_SetItem(_TREE *,tagTVITEMEXW const *);
int TV_SetItemA(_TREE *,tagTVITEMEXA *);
int TV_SetLeft(_TREE *,int);
int TV_SetToolTipTarget(_TREE *,_TREEITEM *);
int TV_ShouldAutoScroll(_TREE *,_TREEITEM *,int *);
int TV_ShouldItemDrawBlue(_TREE const *,tagTVITEMEXW const *,unsigned int);
int TV_SizeWnd(_TREE *,unsigned int,unsigned int);
int TV_SmoothSetTopItem(_TREE *,unsigned int,unsigned int);
int TV_SortCB(_TREE *,tagTVSORTCB *,int,int (*)(void *,void *,__int64));
int TV_StartAnimationTimer(_TREE *);
int TV_StartWatch(_TREE *,TVWATCHEDITEM *,_TREEITEM *);
int TV_TranslateAccelerator(HWND__ *,tagMSG const *);
int TV_UpdateToolTip(_TREE *);
int TV_UpdateToolTipTarget(_TREE *);
int TV_VertScroll(_TREE *,unsigned int,unsigned int);
int Tab_FindTab(TC *,int,unsigned int);
int Tab_InterButtonGap(TC const *);
int Tab_OnCreate(TC *);
int Tab_OnDeleteAllItems(TC *);
int Tab_OnDeleteItem(TC *,int);
int Tab_OnGetItemRect(TC *,int,tagRECT *);
int Tab_OnInsertItem(TC *,int,tagTCITEMW const *);
int Tab_OnSetItem(TC *,int,tagTCITEMW const *);
int ThunkPropSheetHeaderAtoW(_PROPSHEETHEADERA_V2 const *,_PROPSHEETHEADERW_V2 *);
int TrueMapWindowPoints(HWND__ *,HWND__ *,tagPOINT *,unsigned int);
int UserGetCharDimensionsEx(HDC__ *,HFONT__ *,tagTEXTMETRICW *,int *);
int ValidDate(_SYSTEMTIME const *,_SYSTEMTIME *);
int ValidateTreeItem(_TREEITEM *,unsigned int);
int WizNextBack(PROPDATA *,int);
int Wizard_GetRect(PROPDATA const *,_WIZARD_HEADER_COMPONENT,tagRECT *);
int _ClientToWindow(HWND__ *,tagPOINT *);
int _ComputeHeaderHeight(PROPDATA *);
int _DrawParentBackground(HWND__ *,HDC__ *,tagRECT const *,int);
int _GetScrollBarInfo(HWND__ *,tagSCROLLBARINFO *);
int _HasVertScroll(CListView *);
int _Header_DrawBitmap(HDC__ *,_IMAGELIST *,_HD_ITEMW *,tagRECT const *,int,unsigned int,tagRECT *,int,DPISCALEINFO *);
int _Ppd_IsPageHidden(PROPDATA *,int);
int _SBGetParms(HWND__ *,int,tagSBDATA const *,tagSCROLLINFO *);
int _SetHeaderFonts(HWND__ *,PROPDATA *);
int _WriteHeaderTitle(PROPDATA const *,HDC__ *,tagRECT * const,unsigned short const *,int,unsigned long);
int fShouldFirstClickActivate();
int g_dyButtonHack;
int g_iILRefCount;
int xxxEnableSBCtlArrows(HWND__ *,unsigned int);
int xxxEnableWndSBArrows(HWND__ *,unsigned int,unsigned int);
long Button_DrawGlyph(tagBUTN *,HDC__ *,tagRECT const *,unsigned int,int);
long Button_DrawThemed(tagBUTN *,HDC__ *,int,int);
long Button_GetThemeIds(tagBUTN const *,BTNTHEMEID *);
long CCDuiInitProcess();
long CCDuiUnInitProcess();
long CCv6s_HeapAllocArray<char>(void *,unsigned long,unsigned __int64,unsigned __int64,char * *);
long CCv6s_HeapAllocArray<unsigned short>(void *,unsigned long,unsigned __int64,unsigned __int64,unsigned short * *);
long CCv6s_HeapFree(void *,void *);
long CCv6s_HeapReallocArray<void *>(void *,unsigned long,void *,unsigned __int64,unsigned __int64,void * * *);
long CCv6s_HeapReallocArray<void>(void *,unsigned long,void *,unsigned __int64,unsigned __int64,void * *);
long CDebugOutput_CreateInstance(_GUID const &,void * *);
long CalculateBalloonStemRect(void *,_BALLOON_STEM_DIRECTION,int,tagPOINT,tagRECT *);
long CollectAllAccessibleChildrenCB(DirectUI::Element *,void *);
long ComboBox_CommandHandler(tagCBox *,unsigned long,HWND__ *);
long ComboBox_GetTextLengthHandler(tagCBox *);
long ComboBox_NcCreateHandler(tagCBox *,HWND__ *);
long ComboBox_SetEditItemHeight(tagCBox *,int);
long ConvertDIBSectionToARGB(tagDIBSECTION const *,tagDIBSECTION *,tagRGBQUAD const *);
long ConvertImageToIndexed(IWICImagingFactory *,IWICBitmapSource *,int,int,WICBitmapDitherType,WICBitmapPaletteType,IWICPalette * *,IWICBitmapSource * *);
long CreateDIBImage(int,int,CDIBImage * *);
long CreateDecoderFromResource(IWICImagingFactory *,unsigned short const *,HINSTANCE__ *,int,IWICBitmapDecoder * *);
long CreateHBITMAP(HDC__ *,unsigned short,tagSIZE const *,IWICPalette *,int,tagRGBQUAD,void * *,HBITMAP__ * *);
long CreateUplevelBitmap(int,int,int,int,int,HBITMAP__ * *,void * *);
long DoRebarHitTest(HWND__ *,int,long,long,IDispatch * *);
long DuiCreateObject(_GUID const &,_GUID const &,void * *);
long EditML_Create(tagED *,tagCREATESTRUCTW *);
long EditML_GetLine(tagED *,unsigned long,unsigned long,char *);
long EditML_Scroll(tagED *,int,int,int,int);
long EditSL_Create(tagED *,tagCREATESTRUCTW *);
long ForAllAccessibleChildren(DirectUI::Element *,long (*)(DirectUI::Element *,void *),void *);
long ForceUpdateDesiredSizeOnElement(DirectUI::Element *,tagSIZE *,int,int);
long FormatMsgString(HINSTANCE__ *,unsigned long,unsigned short *,unsigned int,...);
long GetAccessibleChildByIndexCB(DirectUI::Element *,void *);
long GetAccessibleChildCountCB(DirectUI::Element *,void *);
long GetButtonText(tagBUTN *,unsigned short * *,int *);
long GetChildIDispatchFromBandID(HWND__ *,int,int,IDispatch * *);
long GetFirstAccessibleChildCB(DirectUI::Element *,void *);
long GetGripSize(STATUSINFO *);
long GetIconSize(HICON__ *,tagSIZE *);
long GetLastAccessibleChildCB(DirectUI::Element *,void *);
long GetNextAccessibleChildCB(DirectUI::Element *,void *);
long GetPageLanguage(ISP *,unsigned short *);
long GetPixelFormatInfo(IWICBitmapSource *,tagSIZE *,int *,unsigned long *);
long GetPrevAccessibleChildCB(DirectUI::Element *,void *);
long GetTransparentColor(IWICImagingFactory *,IWICBitmapSource *,int *,tagRGBQUAD *);
long HBITMAP_DumpContents(HBITMAP__ *,int,IDebugOutput *,unsigned __int64 *);
long HRESULTFromLastErrorError();
long IDebugOutput_WriteLine(IDebugOutput *,unsigned short const *,...);
long IUnknown_DumpContents(IUnknown *,int,IDebugOutput *,unsigned __int64 *);
long InitVariantFromDispatch(IDispatch *,tagVARIANT *);
long IsWindowAnimationEnabled(bool *);
long ListBox_Create(tagLBIV *,HWND__ *,tagCREATESTRUCTW *);
long ListBox_InitStorage(tagLBIV *,int,int,int);
long ListBox_SetSelHandler(tagLBIV *,int,int);
long MirrorRectInClient(HWND__ *,tagRECT *);
long NormalizeDUIButtonWidths(DirectUI::Element * * const,int,DirectUI::DCSurface *,DPISCALEINFO const *);
long Prsht_GetObject(PROPDATA *,HWND__ *,int,_GUID const *,void * *);
long QuickBevelDIBImage(CDIBImage *,int,unsigned char,unsigned char);
long ReadAndConvertBitmap(IStream *,_ILFILEHEADER const *,unsigned long,int,HBITMAP__ * *,void * *);
long ResultFromKnownLastError();
long ResultFromWin32Handle(void *,void * *);
long SHSysAllocString(unsigned short const *,unsigned short * *);
long ScoreConsideredElement(tagRECT *,DirectUI::Element *,DirectUI::Element *,int);
long Stream_ReadBitmap(IStream *,int,int,int,HBITMAP__ * *,void * *);
long Stream_WriteBitmap(IStream *,HBITMAP__ *,unsigned int);
long StringCbCopyW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchCatW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchCopyA(char *,unsigned __int64,char const *);
long StringCchCopyExW(unsigned short *,unsigned __int64,unsigned short const *,unsigned short * *,unsigned __int64 *,unsigned long);
long StringCchCopyNExW(unsigned short *,unsigned __int64,unsigned short const *,unsigned __int64,unsigned short * *,unsigned __int64 *,unsigned long);
long StringCchCopyNW(unsigned short *,unsigned __int64,unsigned short const *,unsigned __int64);
long StringCchCopyW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchLengthW(unsigned short const *,unsigned __int64,unsigned __int64 *);
long StringCchPrintfA(char *,unsigned __int64,char const *,...);
long StringCchPrintfW(unsigned short *,unsigned __int64,unsigned short const *,...);
long StringCchVPrintfW(unsigned short *,unsigned __int64,unsigned short const *,char *);
long TLocalAllocArrayEx<unsigned char>(unsigned int,unsigned __int64,unsigned char * *);
long TResourceStringAllocCopyEx<unsigned short *>(HINSTANCE__ *,unsigned int,unsigned short,long (*)(void *,unsigned __int64,unsigned short * *),void *,unsigned short * *);
long VerifyCustomSplitRect(tagRECT const *,tagRECT const *);
long WimpyDraw(IImageList *,int,HDC__ *,int,int,unsigned int);
long WimpyDrawAlpha(IImageList *,int,HDC__ *,int,int,unsigned long);
long WimpyDrawEx(IImageList *,int,HDC__ *,int,int,int,int,unsigned long,unsigned long,unsigned int);
long _AllocStringWorker<CTLocalAllocPolicy>(void *,unsigned long,unsigned short const *,unsigned __int64,unsigned __int64,unsigned short * *);
short TV_TopMargin(_TREE *);
tagBITMAP g_bmWork;
tagLPKEDITCALLOUT * g_pLpkEditCallout;
unsigned __int64 PropPageActivateContext(PROPDATA const *,ISP *);
unsigned __int64 _GetDlgTemplateSize(DLGTEMPLATE const *);
unsigned __int64 _GetDlgTemplateSizeHelper(DLGTEMPLATE const *,int,unsigned long,unsigned long);
unsigned char * Skip_IDorString(void *);
unsigned char const * _SkipDlgTemplateString(unsigned char const *,unsigned short);
unsigned int CallPropertyPageCallback(PROPDATA const *,ISP *,unsigned int);
unsigned int Edit_TabTheTextOut(HDC__ *,int,int,int,int,char *,int,unsigned long,tagED *,int,int,STRIPINFO *);
unsigned int GetDefaultCharsetFromLang(unsigned short);
unsigned int IsPushButton(tagBUTN const *);
unsigned int ListBox_CalcAllocNeeded(tagLBIV const *,int);
unsigned int TV_CountVisibleDescendants(_TREEITEM *);
unsigned int TV_RecomputeMaxWidth(_TREE *);
unsigned int TV_ScrollBelow(_TREE *,_TREEITEM *,int,int);
unsigned int TV_SetItemState(_TREE *,_TREEITEM *,unsigned int,unsigned int);
unsigned int TV_UpdateShownIndexes(_TREE *,_TREEITEM *);
unsigned int _GetWndSBDisableFlags(HWND__ *,int);
unsigned long ButtonStateToCustomDrawState(tagBUTN const *);
unsigned long Button_GetTextFlags(tagBUTN const *);
unsigned long Button_SoftFadeDuration(void *,int,int,int);
unsigned long ComboBox_GetCueBannerFontColor(tagCBox *);
unsigned long ComboBox_GetTextHandler(tagCBox *,unsigned short *,unsigned long);
unsigned long ComboBox_SoftFadeDuration(void *,int,int,int);
unsigned long ComboEx_OnSetExStyle(COMBOEX *,unsigned long,unsigned long);
unsigned long EditML_DeleteText(tagED *);
unsigned long EditML_InsertText(tagED *,char *,unsigned long,int);
unsigned long EditML_Line(tagED *,unsigned long);
unsigned long EditML_LineLength(tagED *,unsigned long);
unsigned long EditML_MouseToIch(tagED *,HDC__ *,tagPOINT const *,unsigned long *);
unsigned long EditML_PasteText(tagED *);
unsigned long EditSL_InsertText(tagED *,char *,unsigned long);
unsigned long EditSL_MouseToIch(tagED *,HDC__ *,tagPOINT const *);
unsigned long EditSL_MoveSelectionRestricted(tagED *,unsigned long,int);
unsigned long EditSL_PasteText(tagED *);
unsigned long Edit_CchInWidth(tagED *,HDC__ *,char *,unsigned long,int,int);
unsigned long Edit_Copy(tagED *);
unsigned long Edit_DeleteText(tagED *);
unsigned long Edit_GetTextHandler(tagED *,unsigned short *,unsigned int,int);
unsigned long Edit_ImeGetDocFeedMax(tagED const *);
unsigned long Edit_MoveSelection(tagED *,unsigned long,int);
unsigned long Edit_MoveSelectionRestricted(tagED *,unsigned long,int);
unsigned long Edit_SoftFadeDuration(void *,int,int,int);
unsigned long GetDefaultCALID(unsigned long);
unsigned long GetNearestColor32(HDC__ *,unsigned long);
unsigned long ListBox_GetScrollFlags(tagLBIV *,unsigned long);
unsigned long Progress_AdjustedExStyle(PRO_DATA const *,unsigned long);
unsigned long ScrollBar_SoftFadeDuration(void *,int,int,int);
unsigned long TV_SetExtendedStyle(_TREE *,unsigned long,unsigned long);
unsigned long Tab_ExtendedStyleChange(TC *,unsigned long,unsigned long);
unsigned long TreeView_BeginFakeItemDraw(TVFAKEDRAW *,_TREEITEM *);
unsigned long _Header_Release(HD *);
unsigned short * GetLpszItem(tagLBIV const *,int);
unsigned short * c_szFormats;
unsigned short GetAlignment(tagBUTN const *);
unsigned short OurCharUpperW(unsigned short);
unsigned short TV_GetItemTextWidth(HDC__ *,_TREE *,_TREEITEM *);
unsigned short TV_GetItemWidth(_TREE *,_TREEITEM *);
unsigned short WTrackType(TRACKBAR const *,long);
unsigned short const * const AveCharWidthData;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_DataTransfer_Clipboard;
void * Button_GetTheme(tagBUTN *);
void * FindRawResource(HINSTANCE__ *,unsigned short const *,unsigned short const *,unsigned short,unsigned long *);
void * Prsht_RepositionControl(PROPDATA *,HWND__ *,void *,int,int,int,int);
void * operator new(unsigned __int64);
void * operator new(unsigned __int64,std::nothrow_t const &);
void BlendCTHelper(unsigned long *,unsigned long,unsigned int,unsigned int);
void Button_CalcRect(tagBUTN *,HDC__ *,tagRECT *,int,unsigned int);
void Button_DrawCheck(tagBUTN *,HDC__ *,HBRUSH__ *,BTNTHEMEID const &);
void Button_DrawGroupBox(tagBUTN *,HDC__ *,tagRECT *,HBRUSH__ *,BTNTHEMEID const &);
void Button_DrawIcon(tagBUTN const *,HDC__ *,tagRECT *,int,int);
void Button_DrawNewState(tagBUTN *,HDC__ *,HBRUSH__ *,unsigned int,BTNTHEMEID const &);
void Button_DrawPairedGlyph(tagBUTN *,HDC__ *,tagRECT *,int,int);
void Button_DrawPush(tagBUTN *,HDC__ *,unsigned int,BTNTHEMEID const &);
void Button_DrawTextAndGlyph(tagBUTN *,HDC__ *,unsigned long,int,BTNTHEMEID const &);
void Button_EraseOwnerDraw(tagBUTN *,HDC__ *);
void Button_FillBackground(tagBUTN *,HDC__ *,tagRECT const *,int,int);
void Button_GetImagePosition(tagBUTN const *,tagRECT *,int *,int *);
void Button_MultiExtent(unsigned short,HDC__ *,tagRECT const *,unsigned short *,int,DPISCALEINFO *,int *,int *);
void Button_NotifyParent(tagBUTN *,unsigned int);
void Button_OnCreate(HWND__ *,tagBUTN *,tagCREATESTRUCTW const *);
void Button_OwnerDraw(tagBUTN *,HDC__ *,unsigned int);
void Button_Paint(tagBUTN *,HDC__ *,int);
void Button_PaintComposite(tagBUTN *,HDC__ *);
void Button_PaintDirectly(tagBUTN *,HDC__ *,int);
void Button_PaintImpl(tagBUTN *,HDC__ *,int,BTNTHEMEID const &);
void Button_ReleaseCapture(tagBUTN *,int);
void Button_ReleaseDC(tagBUTN *,HDC__ *,HBRUSH__ * *);
void Button_Repaint(tagBUTN *);
void Button_SetHot(tagBUTN *,int,unsigned long);
void CCSoftFadeStart(tagCCSOFTFADE *);
void CalcTrackDragRect(tagSBTRACK *,DPISCALEINFO const *);
void ChangeChildrenLayeredRefsIfHosted(DirectUI::Element *,LayerOperation);
void ChangeElementListLayeredRefs(DirectUI::DynamicArray<DirectUI::Element *,0> *,LayerOperation);
void CleanupBackgroundDIBSection(HDC__ *,HBITMAP__ *);
void ComboBox_CalcControlRects(tagCBox *,tagRECT *);
void ComboBox_CompleteEditWindow(tagCBox *);
void ComboBox_GetFocusHandler(tagCBox *);
void ComboBox_HotTrack(tagCBox *,tagPOINT);
void ComboBox_InternalUpdateEditWindow(tagCBox *,HDC__ *);
void ComboBox_KillFocusHandler(tagCBox *);
void ComboBox_NcDestroyHandler(HWND__ *,tagCBox *);
void ComboBox_NotifyParent(tagCBox *,short);
void ComboBox_OnLButtonUp(tagCBox *,unsigned __int64,__int64);
void ComboBox_Paint(tagCBox *,HDC__ *,int);
void ComboBox_PaintComposite(tagCBox *,HDC__ *);
void ComboBox_PaintDirectly(tagCBox *,HDC__ *,int);
void ComboBox_PaintImpl(tagCBox *,HDC__ *,int,int);
void ComboBox_Position(tagCBox *);
void ComboBox_PressButton(tagCBox *,int);
void ComboBox_RedrawEdit(tagCBox *);
void ComboBox_ReleaseMouseCapture(tagCBox *);
void ComboBox_SetDroppedSize(tagCBox *,tagRECT const *);
void ComboBox_SetFontHandler(tagCBox *,void *,int);
void ComboBox_SetupThemeInfo(tagCBox *);
void ComboBox_ShowListBoxWindow(tagCBox *,int);
void ComboBox_SizeHandler(tagCBox *);
void ComboBox_UpdateListBoxWindow(tagCBox *,int);
void ComboBox_UpdateTheme(tagCBox *,HWND__ *);
void ComboEx_CheckIsThemed(COMBOEX *);
void ComboEx_GetComboClientRect(COMBOEX *,tagRECT *);
void ComboEx_HandleDeleteItem(COMBOEX *,tagDELETEITEMSTRUCT *);
void ComboEx_ISetItem(COMBOEX *,CEITEM *,tagCOMBOBOXEXITEMW const *);
void ComboEx_OnDestroy(COMBOEX *);
void ComboEx_OnDrawItem(COMBOEX *,tagDRAWITEMSTRUCT *);
void ComboEx_OnSetFont(COMBOEX *,HFONT__ *,int);
void ComboEx_OnWindowPosChanging(COMBOEX *,tagWINDOWPOS *);
void ComboEx_SizeEditBox(COMBOEX *);
void ComboEx_UpdateEditText(COMBOEX *,int);
void ComputeSystemDPI(int *,int *);
void CreateAndSendFakeInput<DirectUI::MouseClickEvent,DirectUI::MouseEvent>(DirectUI::MouseEvent const *,DirectUI::Element *,unsigned int,tagPOINT);
void CreateAndSendFakeInput<DirectUI::PointerEnterEvent,DirectUI::PointerEvent>(DirectUI::PointerEvent const *,DirectUI::Element *,unsigned int,tagPOINT);
void CreateAndSendFakeInput<DirectUI::PointerTapEvent,DirectUI::PointerEvent>(DirectUI::PointerEvent const *,DirectUI::Element *,unsigned int,tagPOINT);
void CreateImageListHelper(_IMAGELIST * *,int,int);
void DUIParserError(unsigned short const *,unsigned short const *,int,void *);
void DoAutoTics(TRACKBAR *);
void DoTrack(TRACKBAR *,int,unsigned long);
void DrawChannel(TRACKBAR *,tagRECT const *);
void DrawCharButton(HDC__ *,tagRECT const *,unsigned int,unsigned short,unsigned int,int,int,unsigned long,DPISCALEINFO *);
void DrawCompositionLine(HWND__ *,HDC__ *,HFONT__ *,unsigned short const *,unsigned char const *,unsigned int,unsigned int,unsigned int,int);
void DrawFocus(TRACKBAR *,HBRUSH__ *);
void DrawSizeBoxEx(HWND__ *,HDC__ *,int,int,DPISCALEINFO *);
void DrawStatusTextEx(STATUSINFO *,HDC__ *,tagRECT const *,unsigned short const *,STRINGINFO *,unsigned int,int);
void DrawThumb(TRACKBAR *,tagRECT const *,int);
void DrawThumb2(HWND__ *,tagSBCALC const *,HDC__ *,int,unsigned int,int);
void DrawTic(TRACKBAR *,int,int,int);
void DrawTicsOneLine(TRACKBAR *,int,int);
void EditML_BuildchLines(tagED *,unsigned long,int,TYPING_STATUS,long *,long *);
void EditML_ChangeSelection(tagED *,HDC__ *,unsigned long,unsigned long);
void EditML_Char(tagED *,unsigned long,int);
void EditML_DrawText(tagED *,HDC__ *,unsigned long,unsigned long,int);
void EditML_IchToXYPos(tagED *,HDC__ *,unsigned long,int,tagPOINT *);
void EditML_KeyDown(tagED *,unsigned int,int);
void EditML_KillFocus(tagED *);
void EditML_MouseMotion(tagED *,unsigned int,unsigned int,tagPOINT const *);
void EditML_Paint(tagED *,HDC__ *,tagRECT *);
void EditML_ReplaceSel(tagED *,char *);
void EditML_SetCaretPosition(tagED *,HDC__ *);
void EditML_SetFocus(tagED *);
void EditML_SetHandle(tagED *,void *);
void EditML_SetSelection(tagED *,int,unsigned long,unsigned long);
void EditML_ShiftchLines(tagED *,unsigned long,int);
void EditML_Size(tagED *,int);
void EditML_UpdateiCaretLine(tagED *);
void EditSL_ChangeHilite(tagED *,HDC__ *,unsigned long,unsigned long);
void EditSL_ChangeSelection(tagED *,HDC__ *,unsigned long,unsigned long);
void EditSL_Char(tagED *,unsigned long);
void EditSL_CheckCapsLock(tagED *);
void EditSL_DrawBackground(tagED *,HDC__ *,HBRUSH__ *,int);
void EditSL_DrawText(tagED *,HDC__ *,unsigned long);
void EditSL_KeyDown(tagED *,unsigned long,int);
void EditSL_KillFocus(tagED *,HWND__ *);
void EditSL_LpkDrawText(tagED *,HDC__ *);
void EditSL_LpkEditDrawText(tagED *,HDC__ *,char *);
void EditSL_MouseMotion(tagED *,unsigned int,unsigned int,tagPOINT const *);
void EditSL_Paint(tagED *,HDC__ *);
void EditSL_Paste(tagED *);
void EditSL_ReplaceSel(tagED *,char *);
void EditSL_SetCaretPosition(tagED *,HDC__ *);
void EditSL_SetFocus(tagED *);
void EditSL_SetHilite(tagED *,unsigned long,unsigned long);
void EditSL_SetSelection(tagED *,unsigned long,unsigned long);
void EditSL_TakeFocus(tagED *);
void Edit_CalcMarginForDBCSFont(tagED *,int);
void Edit_ClearText(tagED *);
void Edit_ClientEdgePaintImpl(tagED *,HDC__ *,HBRUSH__ *,tagRECT const &,int,int,int,int);
void Edit_CutText(tagED *);
void Edit_EmptyUndo(tagUNDO *);
void Edit_EnableDisableIME(tagED *);
void Edit_FindXORblks(tagSELBLOCK const *,tagSELBLOCK const *,tagSELBLOCK *,tagSELBLOCK *);
void Edit_ImmSetCompositionWindow(tagED *,long,long);
void Edit_InOutReconversionMode(tagED *,int);
void Edit_InitInsert(tagED *,HKL__ *);
void Edit_InvalidateClient(tagED *,int);
void Edit_Menu(HWND__ *,tagED *,tagPOINT const *);
void Edit_MergeUndoInsertInfo(tagUNDO *,unsigned long,unsigned long);
void Edit_NcDestroyHandler(HWND__ *,tagED *);
void Edit_NotifyAfterPaste(tagED *);
void Edit_NotifyParent(tagED *,int);
void Edit_ReleaseDC(tagED *,HDC__ *,int);
void Edit_ResetTextInfo(tagED *);
void Edit_SaveUndo(tagUNDO *,tagUNDO *,int);
void Edit_SelectAll(HWND__ *);
void Edit_SetCaretHandler(tagED *);
void Edit_SetClip(tagED *,HDC__ *,int);
void Edit_SetCompositionFont(tagED *);
void Edit_SetMargin(tagED *,unsigned int,long,int);
void Edit_SetPasswordCharHandler(tagED *,unsigned int);
void Edit_SetupThemeInfo(tagED *);
void Edit_Size(tagED *,tagRECT const *,int);
void Edit_Unlock(tagED *);
void Edit_UpdateFormat(tagED *,unsigned long,unsigned long);
void Edit_UpdateTheme(tagED *,HWND__ *);
void Edit_Word(tagED *,unsigned long,int,unsigned long *,unsigned long *);
void FillLastRow(TC *);
void FlushChanges(TRACKBAR *);
void FreePropSheetHeaderW(_PROPSHEETHEADERW_V2 *);
void FreePropertyPageStrings(_PROPSHEETPAGEW const *);
void FreePropertyPageStruct(ISP *);
void GetChannelRect(TRACKBAR const *,tagRECT *);
void GetCheckBoxSize(HDC__ *,tagBUTN *,bool,tagSIZE *);
void GetNewMetrics(STATUSINFO *,HDC__ *,HFONT__ *);
void GetRectInParent(HWND__ *,tagRECT *);
void GetSplitButtonRects(tagBUTN *,tagRECT const *,tagRECT *,tagRECT *);
void HandlePaletteChange(PROPDATA *,unsigned int,HWND__ *);
void Header_Draw(HD *,HDC__ *,tagRECT const *);
void Header_DrawButtonEdges(HD const *,HDC__ *,tagRECT *,int);
void Header_DrawDivider(HD *,int);
void Header_DrawFilterGlyph(HD *,HDC__ *,tagRECT const *,int);
void Header_DrawItem(HD *,HDC__ *,int,int,tagRECT const *,unsigned int,int);
void Header_EndDrag(HD *);
void Header_FilterChanged(HD *,int);
void Header_GetDividerRect(HD *,int,tagRECT *);
void Header_GetFilterRects(tagRECT const *,tagRECT *,tagRECT *,tagRECT *,DPISCALEINFO *);
void Header_InitCheckBoxes(HD *);
void Header_InvalidateDivider(HD *,int);
void Header_InvalidateItem(HD *,int,unsigned int);
void Header_InvalidateOverflow(HD *,unsigned int);
void Header_MoveDrag(HD *,int,int);
void Header_NewFont(HD *,HFONT__ *);
void Header_OnFilterButton(HD *,int);
void Header_OnLButtonDown(HD *,int,int,int,unsigned int);
void Header_OnLButtonUp(HD *,int,int,unsigned int);
void Header_OnMouseMove(HD *,int,int,unsigned int);
void Header_OnNCDestroy(HD *);
void Header_OnPaint(HD *,HDC__ *);
void Header_OnSetItemOrder(HD *,int,int);
void Header_SetHotItem(HD *,int,HOTTYPE);
void Header_ShiftItems(HD *,int,int);
void Header_StartDrag(HD *,int,int,int);
void Header_StopFilterEdit(HD *,int);
void InitColorArray(unsigned long *);
void InitPropSheetDlg(HWND__ *,PROPDATA *);
void InvalidateScrollRect(HWND__ *,tagRECT const *,int);
void InvertScrollHilite(HWND__ *,tagSBTRACK *);
void ListBox_AlterHilite(tagLBIV *,int,int,int,int,int);
void ListBox_BlockHilite(tagLBIV *,int,int);
void ListBox_ButtonUp(tagLBIV *,unsigned int);
void ListBox_CalcItemRowsAndColumns(tagLBIV *);
void ListBox_CareBlinker(HWND__ *,unsigned int,unsigned __int64,unsigned long);
void ListBox_CaretDestroy(tagLBIV *);
void ListBox_CheckRedraw(tagLBIV *,int,int);
void ListBox_CreateLine(_WIN32_FIND_DATAW *,unsigned short *,unsigned long);
void ListBox_DeleteItem(tagLBIV *,int);
void ListBox_Destroy(tagLBIV *,HWND__ *);
void ListBox_DoDeleteItems(tagLBIV *);
void ListBox_DrawItem(tagLBIV *,int,tagRECT const *,int,HBRUSH__ *);
void ListBox_Event(tagLBIV *,unsigned int,int);
void ListBox_FillDrawItem(tagLBIV *,int,unsigned int,unsigned int,tagRECT const *);
void ListBox_HScroll(tagLBIV *,int,int);
void ListBox_HSrollMultiColumn(tagLBIV *,int,int);
void ListBox_InitDC(tagLBIV *);
void ListBox_InitHStrings(tagLBIV *);
void ListBox_InsureVisible(tagLBIV *,int,int);
void ListBox_InvertItem(tagLBIV *,int,int);
void ListBox_KeyInput(tagLBIV *,unsigned int,unsigned int);
void ListBox_NewITopEx(tagLBIV *,int,unsigned long);
void ListBox_NotifyOwner(tagLBIV *,int);
void ListBox_Paint(tagLBIV *,HDC__ *,tagRECT *);
void ListBox_ReleaseDC(tagLBIV *);
void ListBox_ResetWorld(tagLBIV *,int,int,int);
void ListBox_SetCItemFullMax(tagLBIV *);
void ListBox_SetCaret(tagLBIV *,int);
void ListBox_SetFont(tagLBIV *,void *,int);
void ListBox_SetHot(tagLBIV *,int,unsigned long);
void ListBox_SetISelBase(tagLBIV *,int);
void ListBox_SetRange(tagLBIV *,int,int,int);
void ListBox_SetRedraw(tagLBIV *,int);
void ListBox_SetSelected(tagLBIV *,int,int,unsigned int);
void ListBox_ShowHideScrollBars(tagLBIV *);
void ListBox_Size(tagLBIV *,int,int,int);
void ListBox_TrackMouse(tagLBIV *,unsigned int,tagPOINT);
void ListBox_UpdateTheme(tagLBIV *);
void ListBox_VScroll(tagLBIV *,int,int);
void LoadAndAddToImagelist(_IMAGELIST *,int,int,int);
void MoveAllButtons(HWND__ *,int const *,int,int,int);
void MoveThumb(TRACKBAR *,long);
void NewFont(STATUSINFO *,HFONT__ *,int);
void NextWordCallBack(tagED *,unsigned long,int,unsigned long *,unsigned long *);
void NextWordLpkCallBack(tagED *,unsigned long,int,unsigned long *,unsigned long *);
void PageChange(PROPDATA *,int);
void PageInfoChange(PROPDATA *,HWND__ *);
void PageInfoUnChange(PROPDATA *,HWND__ *);
void PaintStatusWnd(STATUSINFO *,HDC__ *,STRINGINFO *,int,int);
void PaintWithPaletteBitmap(HDC__ *,PROPDATA const *,tagRECT const *,HPALETTE__ *,HBITMAP__ *);
void PaintWithPaletteBrush(HDC__ *,tagRECT const *,HPALETTE__ *,HBRUSH__ *);
void PatRect(HDC__ *,int,int,int,int,TRACKBAR const *);
void PixelComposeOver(unsigned long,unsigned long &);
void Progress_AnimateInitialize(PRO_DATA *);
void Progress_GetPaintMetrics(PRO_DATA const *,tagRECT *,tagRECT *);
void Progress_Paint(PRO_DATA *,HDC__ *);
void Progress_PaintThemed(PRO_DATA *,HDC__ *);
void Progress_PaintTraditional(PRO_DATA *,HDC__ *);
void Progress_ResetThemeData(PRO_DATA *);
void Progress_SetHighlightTimer(PRO_DATA *,bool);
void Progress_SetMarqueeTimer(PRO_DATA *,int);
void Progress_UpdateAnimation(PRO_DATA *);
void Progress_UpdateTheme(PRO_DATA *);
void PropSheetPaintHeader(PROPDATA *,ISP const *,HWND__ *,HDC__ *);
void Prsht_ComputeIdealPageSize(PROPDATA *,ISP *,PAGEINFOEX const *);
void Prsht_FreeTitle(PROPDATA *);
void Prsht_GetIdealPageSize(PROPDATA const *,tagSIZE *,unsigned int);
void Prsht_GetLang(PROPDATA const *,unsigned short *,unsigned short *);
void Prsht_OnSetTitle(PROPDATA *,unsigned __int64,__int64,bool);
void Prsht_PrepareTemplate(PROPDATA *,HINSTANCE__ *,void * *,HRSRC__ * *,char const *,HWND__ *,unsigned short *);
void Prsht_RecalcCachedPageMetrics(PROPDATA *);
void PutzRowToBottom(TC *,int);
void RecalcTooltipRects(STATUSINFO *);
void RecalcTrackRect(tagSBTRACK *);
void RemoveButton(HWND__ *,int,int const *);
void RemovePropPage(PROPDATA *,int,_PSP const *);
void RemovePropPageData(PROPDATA *,int);
void ResetWizButtons(PROPDATA *);
void RethunkShadowStrings(ISP *);
void RightJustify(TC *);
void RtlGetVersionResource(void *,unsigned __int64,unsigned long,_RTL_VERSION_RESOURCE *);
void SBSetFont(STATUSINFO *,HFONT__ *,int);
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
void SafeDestroyDeep<DirectUI::DynamicArray<CSafeElementPtr<DirectUI::Element> *,0> >(DirectUI::DynamicArray<CSafeElementPtr<DirectUI::Element> *,0> * *);
void SafeDestroyDeep<DirectUI::DynamicArray<DirectUI::ClipRectWithElement *,0> >(DirectUI::DynamicArray<DirectUI::ClipRectWithElement *,0> * *);
void SafeDestroyDeep<DirectUI::DynamicArray<DirectUI::SafeElementIndexPair *,0> >(DirectUI::DynamicArray<DirectUI::SafeElementIndexPair *,0> * *);
void SafeEnableWindow(HWND__ *,unsigned int,HWND__ *,int);
void SafeRelease<CImageList>(CImageList * *);
void SafeRelease<CScaledResourceFactory>(CScaledResourceFactory * *);
void SafeRelease<DirectUI::CIHMCallback>(DirectUI::CIHMCallback * *);
void SafeRelease<DirectUI::IDuiBinaryReader>(DirectUI::IDuiBinaryReader * *);
void SafeRelease<DirectUI::IDuiParserCache>(DirectUI::IDuiParserCache * *);
void SafeRelease<DirectUI::Value>(DirectUI::Value * *);
void SafeRelease<IControlMarkup>(IControlMarkup * *);
void SafeRelease<IDCompositionAnimation>(IDCompositionAnimation * *);
void SafeRelease<IDCompositionDevice>(IDCompositionDevice * *);
void SafeRelease<IDCompositionVisual>(IDCompositionVisual * *);
void SafeRelease<IDWriteInlineObject>(IDWriteInlineObject * *);
void SafeRelease<IDWriteTextFormat>(IDWriteTextFormat * *);
void SafeRelease<IDWriteTextLayout>(IDWriteTextLayout * *);
void SafeRelease<IDirectManipulationCompositor>(IDirectManipulationCompositor * *);
void SafeRelease<IDirectManipulationContent>(IDirectManipulationContent * *);
void SafeRelease<IDirectManipulationFrameInfoProvider>(IDirectManipulationFrameInfoProvider * *);
void SafeRelease<IDirectManipulationManager>(IDirectManipulationManager * *);
void SafeRelease<IDirectManipulationViewport>(IDirectManipulationViewport * *);
void SafeRelease<IDrawPropertyControl>(IDrawPropertyControl * *);
void SafeRelease<IDuiBehavior>(IDuiBehavior * *);
void SafeRelease<IImageList2>(IImageList2 * *);
void SafeRelease<IImageList>(IImageList * *);
void SafeRelease<IImageListImageDecorator>(IImageListImageDecorator * *);
void SafeRelease<IImageListPriv2>(IImageListPriv2 * *);
void SafeRelease<ILVRange>(ILVRange * *);
void SafeRelease<ITouchTooltip>(ITouchTooltip * *);
void SafeRelease<ITypeInfo>(ITypeInfo * *);
void SafeRelease<IUnknown>(IUnknown * *);
void SafeRelease<IWICImagingFactory>(IWICImagingFactory * *);
void SaturateDC(void *,int,tagRECT const *,tagRECT const *);
void SaturateSortColumn(CListView *,HDC__ *,void *,tagPOINT const *,tagRECT const *);
void ScaleAlpha(tagRGBQUAD *,tagRECT const *,int);
void ScrollBar_PaintTrack(HWND__ *,HDC__ *,HBRUSH__ *,tagRECT const *,int,int,int);
void SendLastChanceApply(PROPDATA *);
void SetNewDefID(PROPDATA *);
void SetWizButtons(PROPDATA *,__int64);
void StatusForceCreateTooltips(STATUSINFO *);
void StatusUpdateTheme(STATUSINFO *);
void StatusUpdateToolTips(STATUSINFO *);
void Status_ComputeGripperSize(STATUSINFO *);
void TBInvalidateAll(TRACKBAR *);
void TBNukeBuffer(TRACKBAR *);
void TBPositionBuddies(TRACKBAR *);
void TBRedrawThumb(TRACKBAR *);
void TBResize(TRACKBAR *);
void TBTrack(TRACKBAR *,__int64);
void TBTrackEnd(TRACKBAR *);
void TBTrackInit(TRACKBAR *,__int64);
void TBUpdateTheme(TRACKBAR *);
void TTUnsubclassHwnd(HWND__ *,HWND__ *,int);
void TV_AutoScroll(_TREE *);
void TV_AutoScrollEnd(_TREE *);
void TV_AutoScrollIntoView(_TREE *,_TREEITEM *,unsigned int,tagPOINT *);
void TV_AutoScrollStart(_TREE *,_TREEITEM *);
void TV_BuildAndSetCheckBoxStateImageList(_TREE *);
void TV_ButtonDown(_TREE *,unsigned int,unsigned int,int,int,unsigned int);
void TV_CalcTooltipSize(_TREE *,_TREEITEM *,tagRECT *,int *,int *);
void TV_CancelEditTimer(_TREE *);
void TV_Command(_TREE *,int,HWND__ *,unsigned int);
void TV_ComputeItemWidth(_TREE *,_TREEITEM *,HDC__ *);
void TV_CreateBoldFont(_TREE *);
void TV_CreateIndentBmps(_TREE *);
void TV_CreateToolTips(_TREE *);
void TV_DeleteHotFonts(_TREE *);
void TV_DeleteItemRecurse(_TREE *,_TREEITEM *,unsigned int);
void TV_DestroyTree(_TREE *);
void TV_DrawDescender(_TREE *,_TREEITEM *,HDC__ *,int,int);
void TV_DrawDottedLine(HDC__ *,int,int,int,int);
void TV_DrawH(_TREE *,_TREEITEM *,HDC__ *,int,int);
void TV_DrawHM(_TREE *,_TREEITEM *,HDC__ *,int,int,int);
void TV_DrawHP(_TREE *,_TREEITEM *,HDC__ *,int,int,int);
void TV_DrawItem(_TREE *,_TREEITEM *,HDC__ *,int,int,unsigned int);
void TV_DrawKinDescender(_TREE *,_TREEITEM *,HDC__ *,int,int,unsigned int);
void TV_DrawL(_TREE *,_TREEITEM *,HDC__ *,int,int,int);
void TV_DrawM(_TREE *,_TREEITEM *,HDC__ *,int,int,int);
void TV_DrawP(_TREE *,_TREEITEM *,HDC__ *,int,int,int);
void TV_DrawPML(_TREE *,_TREEITEM *,HDC__ *,int,int,int,int,int,int);
void TV_DrawPlusMinus(_TREE *,_TREEITEM *,HDC__ *,int,int,int,int,int,int,int);
void TV_DrawState2(_TREE *,_TREEITEM *,HDC__ *,int,int,int,int,int);
void TV_DrawT(_TREE *,_TREEITEM *,HDC__ *,int,int);
void TV_DrawTree(_TREE *,HDC__ *,int,tagRECT const *,int);
void TV_DrawV(_TREE *,_TREEITEM *,HDC__ *,int,int);
void TV_EraseDescender(_TREE *,_TREEITEM *,HDC__ *,int,int);
void TV_ExpandOnSelChange(_TREE *,_TREEITEM *,_TREEITEM *);
void TV_ExpandParents(_TREE *,_TREEITEM *,int);
void TV_ExpandRecurse(_TREE *,_TREEITEM *,int);
void TV_ExpandoFadeDestroyDCs(_TREE *);
void TV_ExpandoFadeStart(_TREE *,int);
void TV_FinishCheckDrag(_TREE *);
void TV_GetBackgroundBrush(_TREE *,HDC__ *);
void TV_GetDefaultColors(_TREE *,_TREEITEM *,tagTVITEMEXW *,unsigned int,unsigned long *,unsigned long *);
void TV_GetItem(_TREE *,_TREEITEM *,unsigned int,tagTVITEMEXW *);
void TV_HandleNeedText(_TREE *,tagNMTTDISPINFOW *);
void TV_HandleNeedTextA(_TREE *,tagNMTTDISPINFOA *);
void TV_HandleStateIconClick(_TREE *,_TREEITEM *);
void TV_InitCheckBoxes(_TREE *);
void TV_InitThemeMetrics(_TREE *,void *);
void TV_InvalidateInsertMarkRect(_TREE *,int);
void TV_InvalidateItem(_TREE *,_TREEITEM *,unsigned int);
void TV_OnChar(_TREE *,unsigned int,int);
void TV_OnMouseMove(_TREE *,unsigned long,unsigned __int64);
void TV_OnSetBkColor(_TREE *,unsigned long,int);
void TV_OnSetFont(_TREE *,HFONT__ *,int);
void TV_OnSetRedraw(_TREE *,int);
void TV_OnStyleChanged(_TREE *,unsigned __int64,tagSTYLESTRUCT const *);
void TV_Paint(_TREE *,HDC__ *,int);
void TV_PopBubble(_TREE *);
void TV_PreDrawTrackAnimation(_TREE *);
void TV_RecomputeItemWidths(_TREE *);
void TV_RemoveExpandoStateIcon(_TREE *,_TREEITEM *);
void TV_ScrollBarsAfterChangeWidthOrHeight(_TREE *,_TREEITEM *);
void TV_ScrollBarsAfterResize(_TREE *,_TREEITEM *,int,int,unsigned int);
void TV_ScrollItems(_TREE *,int,int,int);
void TV_SendRButtonDown(_TREE *,int,int);
void TV_SetEditSize(_TREE *);
void TV_SetIndent(_TREE *,unsigned __int64);
void TV_SetItemHeight(_TREE *);
void TV_SetItemRecurse(_TREE *,_TREEITEM *,tagTVITEMEXW *);
void TV_UnlockTree(_TREE *);
void Tab_CalcTabHeight(TC *,HDC__ *);
void Tab_DeselectAll(TC *,int);
void Tab_DoCorners(HDC__ *,tagRECT const *,TC *,int);
void Tab_DrawBody(HDC__ *,TC *,TABITEM *,tagRECT *,int,int,int,int);
void Tab_DrawEdge(HDC__ *,tagRECT const *,unsigned int,unsigned int,TC *);
void Tab_DrawFocusRect(HDC__ *,tagRECT const *,TC *);
void Tab_DrawItemFrame(TC *,HDC__ *,unsigned int,TABITEM const *,int);
void Tab_DrawTextEx(HDC__ *,unsigned short *,int,tagRECT const *,unsigned int,tagDRAWTEXTPARAMS *,TC *);
void Tab_ExtTextOut(HDC__ *,int,int,unsigned int,tagRECT const *,unsigned short const *,unsigned int,int const *,TC *);
void Tab_GetClientRect(TC *,tagRECT *);
void Tab_GetTabFontMetrics(TC *,HDC__ *,tagTEXTMETRICW *);
void Tab_GetTextExtentPoint(TC *,HDC__ *,unsigned short *,int,tagSIZE *);
void Tab_ImageList_Draw(TC *,int,HDC__ *,int,int,unsigned int);
void Tab_InvalidateRect(TC *,tagRECT const *,int);
void Tab_InvertRows(TC *);
void Tab_OnButtonUp(TC *,int,int,int);
void Tab_OnDestroy(TC *);
void Tab_OnKeyDown(TC *,unsigned int,int,int,unsigned int);
void Tab_OnLButtonDown(TC *,int,int,unsigned __int64);
void Tab_OnMouseMove(TC *,unsigned __int64,int,int);
void Tab_OnRButtonDown(TC *,int,int,unsigned __int64);
void Tab_OnRemoveImage(TC *,int);
void Tab_OnSetFont(TC *,HFONT__ *,int);
void Tab_Paint(TC *,HDC__ *);
void Tab_PatBlt(HDC__ *,int,int,int,int,unsigned int,TC *);
void Tab_RefreshTheme(TC *,int);
void Tab_Scroll(TC *,int,int);
void Tab_SetCurFocus(TC *,int);
void Tab_SmoothScrollWindow(TC *,int,int,tagRECT *,tagRECT *,HRGN__ *,tagRECT *,unsigned int,unsigned int);
void Tab_StyleChanged(TC *,unsigned int,tagSTYLESTRUCT const *);
void Tab_VFlipRect(TC *,tagRECT *);
void TrackOnNotify(TRACKBAR *,tagNMHDR *);
void TreeView_BeginFakeCustomDraw(_TREE *,TVFAKEDRAW *);
void TreeView_EndFakeCustomDraw(TVFAKEDRAW *);
void TreeView_EndFakeItemDraw(TVFAKEDRAW *);
void TrueSaturateBits(void *,int,int,int);
void ValidateThumbHeight(TRACKBAR *);
void VertDrawEdge(HDC__ *,tagRECT const *,unsigned int,unsigned int,int,void *,int,int);
void VertImageList_GetIconSize(_IMAGELIST *,int *,int *,int);
void VertInvalidateRect(HWND__ *,tagRECT const *,int,int);
void VertPatBlt(HDC__ *,int,int,int,int,unsigned long,int,void *,int,int);
void VertSmoothScrollWindow(HWND__ *,int,int,tagRECT const *,tagRECT const *,HRGN__ *,tagRECT *,unsigned int,int,unsigned int);
void WindowToNearestMonitor(HWND__ *);
void _DrawSizeBoxFromFrame(HWND__ *,HDC__ *,DPISCALEINFO *);
void _FormatDate(_SYSTEMTIME const *,unsigned short *,unsigned long,int);
void _GetCursorLowerLeft(int *,int *,int *,int *);
void _GetHcursorPdy3(int *,int *);
void _Header_ClearOldFocus(HD *,int,int,int *);
void _Header_DeleteInvalidateRegion(HD *);
void _Header_DrawSortArrow(HD *,HDC__ *,tagRECT const *,int);
void _Header_DrawThemedSortArrow(HD *,HDC__ *,tagRECT const *,int);
void _Header_InitTheme(HD *);
void _Header_SetHotDivider(HD *,int);
void _MapBitmapColors(tagBITMAPINFOHEADER *,_COLORMAP const *,int,unsigned long *,unsigned int,unsigned long);
void _SBTrackInit(HWND__ *,__int64,int,unsigned int);
void _SetHeaderTitles(HWND__ *,PROPDATA *,unsigned int,unsigned short const *,int);
void _SetTitle(HWND__ *,PROPDATA *);
void _SoftFadeEnd(tagCCSOFTFADE *);
void _TrackBox(HWND__ *,unsigned int,unsigned __int64,__int64,tagSBCALC *);
void _TrackThumb(HWND__ *,unsigned int,unsigned __int64,__int64,tagSBCALC *);
void _ZoomRect(tagRECT const *,tagRECT const *,double,int,tagRECT *);
void operator delete(void *);
void xxxContScroll(HWND__ *,unsigned int,unsigned __int64,unsigned long);
void xxxDoScroll(HWND__ *,HWND__ *,int,int,int);
void xxxDrawSB2(HWND__ *,tagSBCALC const *,HDC__ *,int,unsigned int);
void xxxEndScroll(HWND__ *,int);
void xxxMoveThumb(HWND__ *,tagSBCALC *,int);
void xxxSBTrackLoop(HWND__ *,__int64,tagSBCALC *);
void zzzDrawInvertScrollArea(HWND__ *,tagSBTRACK *,int,unsigned int);
void zzzSetSBCaretPos(HWND__ *);
