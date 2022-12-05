struct ATTACHOBJ
{
	ATTACHOBJ(PFFOBJ *);
	void Initialize(PDEVOBJ *);
	~ATTACHOBJ();
};

struct AutoSharedPushLock
{
	AutoSharedPushLock(_EX_PUSH_LOCK *);
};

struct AutoSharedUmfdFileViewLock
{
	AutoSharedUmfdFileViewLock();
	~AutoSharedUmfdFileViewLock();
};

struct BEZIER
{
	void vInit(_POINTFIX *,_RECTFX *,__int64 *);
};

struct BLTRECORD
{
	SURFACE * pSurfMskOut();
	int Msk(int,int,int,int);
	int Src(int,int,int,int);
	int Trg(int,int,int,int);
	int TrgPlg(int,int,int,int);
	int bBitBlt(DCOBJ &,DCOBJ &,unsigned long);
	int bBitBlt(DCOBJ &,DCOBJ &,unsigned long,long,long);
	int bCreateRegion(DCOBJ &,_POINTFIX *);
	int bEqualExtents();
	int bRotate(DCOBJ &,DCOBJ &,unsigned long,unsigned char);
	int bRotate(DCOBJ &,SURFMEM &,SURFMEM &,unsigned long,unsigned long);
	int bRotate(SURFMEM &,unsigned long);
	int bStretch(DCOBJ &,DCOBJ &,unsigned long,unsigned char);
	int bStretch(SURFMEM &,unsigned long);
	void vBound(ERECTL *);
	void vExtrema();
	void vMirror(ERECTL *);
	void vMirror(_POINTFIX *);
	void vOrder(ERECTL *);
	void vOrderStupid(ERECTL *);
	~BLTRECORD();
};

struct BMPDEVOPEN
{
	BMPDEVOPEN(_SURFOBJ *);
};

struct BOUNDCLIPRGNTOSURFACE
{
	BOUNDCLIPRGNTOSURFACE(_SURFOBJ *,_CLIPOBJ * *);
};

struct BRUSHMEMOBJ
{
	~BRUSHMEMOBJ();
};

struct BRUSHSELOBJ
{
	BRUSHSELOBJ(HBRUSH__ *);
	void vDecShareRefCntLazy0();
	~BRUSHSELOBJ();
};

struct CAutoDestroy<CEventPool::CEventPoolEntry>
{
	~CAutoDestroy<CEventPool::CEventPoolEntry>();
};

struct CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>
{
	~CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>();
};

struct CAutoPushLockEx
{
	CAutoPushLockEx(_EX_PUSH_LOCK *);
	~CAutoPushLockEx();
};

struct CAutoPushLockSh
{
	~CAutoPushLockSh();
};

class CDynamicArray<IInputQueue *,2003858261>
{
protected:
	long Grow(unsigned int);
public:
	void Reset(bool);
};

class CDynamicArray<tagWND *,2003858261>
{
protected:
	long Grow(unsigned int);
public:
	long Add(tagWND * const &);
};

struct CEtwTraceTranslateMessage
{
	~CEtwTraceTranslateMessage();
};

struct CEventPool
{
	struct CEventPoolEntry
	{
		static CEventPoolEntry * Create();
		static void Destroy(CEventPoolEntry * const);
	};

	static void Destroy(CEventPool * const);
};

class CHwndTargetProp
{
protected:
	virtual unsigned short GetAtom();
public:
	static void ReNotifyDwm(tagWND *);
	virtual void Delete();
};

class CInputQueueProp
{
protected:
	virtual unsigned short GetAtom();
public:
	long AttachInputQueue(IInputQueue *);
	static unsigned short s_atom;
	virtual void Delete();
	void DetachInputQueue(IInputQueue *);
	void ReferenceAndStoreUIOwnerPwnd(tagWND *);
};

class CLegacyRotationMgr
{
	int IsOrientationWithinPreferences(unsigned long);
	int RotationRequired(ORIENTATION_PREFERENCE,unsigned long *);
	long QueryDockedOrientationRegistrySetting(unsigned long *,unsigned long *);
	long UpdateAutoRotationRegistrySetting(unsigned long,unsigned short const *,unsigned long,unsigned short const *);
	long xxxRotateScreen(unsigned long,int,int *);
	long xxxSetAutoRotationStateInternal(int);
	long xxxSetSlateAutoRotationState(int);
	long xxxSmoothRotateScreen(DISPLAYCONFIG_PATH_INFO_INTERNAL *,int,_DXGK_DISPLAY_SCENARIO_CONTEXT *);
	unsigned long GetDockedOrientationValue(unsigned long *);
	unsigned long QueryAutoRotationRegistrySetting(unsigned short const *,unsigned long,unsigned short const *);
	void xxxApplyDockedOrientation();
	void xxxApplyOrientationPreference();
	void xxxRestoreSlateAutorotationPreferences();
	void xxxSetAutoRotationConvertible(int);
	void xxxSetAutoRotationDocked(int);
public:
	virtual long xxxAutoRotateScreen(unsigned long);
	virtual long xxxSetAutoRotationState(int);
	virtual tagAR_STATE QueryAutoRotationState();
	virtual void AutoRotationUpdateRegistry();
	virtual void CacheRotationInfo();
	virtual void RotationLockTogglePressed();
	virtual void xxxRefreshDisplayOrientation();
	virtual void xxxSetSensorPresence(int);
	virtual void xxxUserReinitializeAutoRotation();
};

struct CList<CPhysicalMonitorHandle>
{
	long AddElement(CPhysicalMonitorHandle *,unsigned long *);
	long GetElement(unsigned long,CPhysicalMonitorHandle * *);
	unsigned char GetNextElementIndex(unsigned long,unsigned long *);
};

struct CLockDomainExclusive<DLT_CLIENTLIB>
{
	CLockDomainExclusive<DLT_CLIENTLIB>();
	~CLockDomainExclusive<DLT_CLIENTLIB>();
};

struct CLockDomainExclusive<DLT_WINEVENT>
{
	CLockDomainExclusive<DLT_WINEVENT>();
};

struct CLockExclusive<DLT_QUEUE>
{
	CLockExclusive<DLT_QUEUE>(tagObjLock &);
	~CLockExclusive<DLT_QUEUE>();
};

struct CLockExclusiveUMCBA<DLT_THREADINFO>
{
	CLockExclusiveUMCBA<DLT_THREADINFO>(tagObjLock &);
	~CLockExclusiveUMCBA<DLT_THREADINFO>();
};

struct CManualResetEvent
{
	static CManualResetEvent * Create();
	static void Destroy(CManualResetEvent * const);
};

struct CMonitorAPI
{
	long CreatePhysicalMonitor(_LUID &,unsigned long,void * *);
	long DdcciGetCapabilitiesString(void *,char *,unsigned long);
	long DdcciGetCapabilitiesStringLength(void *,unsigned long *);
	long DdcciGetTimingReport(void *,_MC_TIMING_REPORT *);
	long DdcciGetVCPFeature(void *,unsigned long,_MC_VCP_CODE_TYPE *,unsigned long *,unsigned long *);
	long DestroyPhysicalMonitor(void *);
	long GetMonitorDescription(void *,unsigned long,unsigned short *);
};

class CMonitorHandleTable<CPhysicalMonitorHandle,void *>
{
	long DestroyHandleInternal(CPhysicalMonitorHandle *,unsigned long,CMutex *);
public:
	long AddHandleToTable(CPhysicalMonitorHandle *,void * *);
	long GetHandleObject(void *,CPhysicalMonitorHandle * *);
};

struct CMonitorPDO
{
	virtual unsigned char IsDestroyed();
};

struct CMultipleConsumerWorkQueue
{
	struct CWaitableWorkItem
	{
		void Cancel();
	};

	bool WaitForCompletionAndReleaseWorkItem(CMultipleConsumerWorkQueue::CWaitableWorkItem * const,unsigned int const *,bool *);
	static CMultipleConsumerWorkQueue * Create();
	static void Destroy(CMultipleConsumerWorkQueue * const);
};

struct COLORTRANSFORMOBJ
{
	int bDelete(XDCOBJ &,int);
	void * hCreate(XDCOBJ &,tagLOGCOLORSPACEW *,void *,unsigned long,void *,unsigned long,void *,unsigned long);
};

class CPhysicalMonitorHandle
{
	long ConvertUnicodeDDCCICapabilitiesStringToASCIIString(char *,unsigned long,unsigned short const *,unsigned long);
	long DdcciGetCapabilitiesStringFromMonitor();
	long DdcciGetCapabilitiesStringFromRegistry();
	long DdcciGetCapabilitiesStringInternal();
	long DdcciReceiveDataFromMonitorDevice(__int64,void *,unsigned long);
	long DdcciSendDataToMonitorDevice(__int64,void *,unsigned long);
	long DdcciSendIoctlToMonitorDevice(unsigned long,__int64,void *,unsigned long,void *,unsigned long);
	static long VerifyDDCCIMessageChecksum(unsigned char,unsigned char * const,unsigned long);
	static unsigned char ComputeDDCCIMessageChecksum(unsigned char,unsigned char * const,unsigned long);
	unsigned char IsDDCCICapabilitiesStringInitialized();
public:
	long DdcciGetCapabilitiesString(char *,unsigned long);
	long DdcciGetCapabilitiesStringLength(unsigned long *);
	long DdcciGetTimingReport(_MC_TIMING_REPORT *);
	long DdcciGetVCPFeature(unsigned long,_MC_VCP_CODE_TYPE *,unsigned long *,unsigned long *);
	long DdcciSaveCurrentSettings();
	long DdcciSetVCPFeature(unsigned long,unsigned long);
	long GetMonitorDescription(unsigned long,unsigned short *);
	virtual long Destroy();
};

struct CRotationMgr
{
	static ORIENTATION_PREFERENCE GetActivePpiPreference();
	static bool IsActivePpi(tagPROCESSINFO *);
};

class CSwapChainProp
{
protected:
	virtual unsigned short GetAtom();
public:
	int ClearCompositionSurfaceObj();
	int Init(CompositionSurfaceObject *);
	int NotifyDwm(tagWND * const);
	static int CreateSwapChainProp(CompositionSurfaceObject *,CSwapChainProp * *);
	static unsigned short s_atom;
	virtual void Delete();
};

struct CUnLockDomainExclusive<DLT_CLIENTLIB>
{
	CUnLockDomainExclusive<DLT_CLIENTLIB>();
};

struct CUnLockDomainExclusive<DLT_WINEVENT>
{
	CUnLockDomainExclusive<DLT_WINEVENT>();
};

class CUserPlaySound
{
	long Connect(void *);
	long Disconnect();
	long PlaySync(unsigned long);
	static CUserPlaySound * s_pUserPlaySound;
};

struct CWindowProp
{
	int SetProp(tagWND *);
	static int GetProp<CoreWindowProp>(tagWND * const,CoreWindowProp * *);
	static long CreateWindowProp<CHwndTargetProp>(CHwndTargetProp * *);
	static long CreateWindowProp<CInputQueueProp>(CInputQueueProp * *);
	static long CreateWindowProp<CoreWindowProp>(CoreWindowProp * *);
	void RemoveAndDeleteProp();
};

struct CWorkItemQueue
{
	bool QueueWorkItem(CWorkItemQueue::CWorkItem * const);
	static CWorkItemQueue * Create();
	static void Destroy(CWorkItemQueue * const);
};

struct CompositionInputObject
{
	long QueryTransform(tagINPUT_TRANSFORM *);
};

class CoreWindowProp
{
protected:
	static CoreWindowProp::Component * FindComponent(tagWND *,tagWND *,CoreWindowProp::Component * *);
	static long ChangeRole(tagWND *,COREWINDOWROLE,bool);
	static long RemoveComponentInternal(tagWND *,tagWND *);
	virtual unsigned short GetAtom();
	void UnlinkAndDestroyComponent(CoreWindowProp::Component *,CoreWindowProp::Component *);
public:
	static FOCUSDIRECTION GetFocusDirection(tagWND *);
	static int CompositeAppHasForeground(tagWND *);
	static int IsComponent(tagWND *);
	static int IsCompositeAppOrSelfDisabled(tagWND *);
	static int IsHost(tagWND *);
	static int IsHostOrComponentThreadOf(tagTHREADINFO *,tagWND *);
	static int IsHostThreadOf(tagTHREADINFO *,tagWND *);
	static int SetFocusDirection(tagWND *,FOCUSDIRECTION);
	static long AddComponent(tagWND *,tagWND *);
	static long RemoveComponent(tagWND *,tagWND *);
	static long SetHost(tagWND *,tagWND *);
	static tagWND * GetHost(tagWND *);
	static tagWND * GetNextComponentWindow(tagWND *,tagWND *);
	static tagWND * GetTopLevelHost(tagWND *);
	static unsigned short s_atom;
	virtual void Delete();
};

struct DC
{
	REGION * prgnRao();
	REGION * prgnVisSnap();
	int bDpiScaleTransform();
	int bDpiScaledSurface();
	int bInactive();
	int bIsCMYKColor();
	int bReset();
	int bTightenRao();
	int bUseMetaPtoD();
	int iSelect(REGION *,int);
	int iSelectTightenRao(REGION *,int);
	int iSetMapMode(int);
	int iSetMetaRgn();
	void MirrorWindowOrg();
	void vClearRendering();
	void vComputePageXform();
	void vGet_sizlWindow(tagSIZE *);
	void vInheritSurfaceDpiScale();
	void vMarkTransformDirty();
	void vSetDpiScaling(POINTFL);
};

struct DCOBJ
{
	DCOBJ();
	DCOBJ(HDC__ *);
	~DCOBJ();
};

struct DCOBJA
{
	DCOBJA(HDC__ *);
};

struct DCVISRGNSHARELOCK
{
	DCVISRGNSHARELOCK();
	~DCVISRGNSHARELOCK();
};

struct DDA_CLIPLINE
{
	int bInit(_POINTFIX *,_POINTFIX *);
	long yCompute(long);
	void vUnflip(long *,long *);
};

struct DEVEXCLUDERECT
{
	void vExclude(XDCOBJ &,_RECTL *);
	~DEVEXCLUDERECT();
};

struct DEVICE_PFTOBJ
{
	PFF * pPFFGet(HDEV__ *,PFF * * *);
	int bLoadFonts(PDEVOBJ *);
};

struct DEVLOCKBLTOBJ
{
	DEVLOCKBLTOBJ();
	int bDisposeSrcDco();
	int bDisposeTrgDco();
	int bLock(XDCOBJ &,XDCOBJ &,int);
	int bLock(XDCOBJ &,int);
	int bMapSrcSurfaceView(int);
	int bMapTrgSurfaceView();
	int bPrepareSrcDco(XDCOBJ *,int,int);
	int bPrepareTrgDco(XDCOBJ *,int);
	int bUnMapSrcSurfaceView();
	int bUnMapTrgSurfaceView();
	void vClearRenderState(XDCOBJ &);
	void vFlushSpriteUpdates();
	void vUnLock(int);
	void vUnMap();
	~DEVLOCKBLTOBJ();
};

struct DEVLOCKOBJ
{
	DEVLOCKOBJ();
	DEVLOCKOBJ(PDEVOBJ &);
	DEVLOCKOBJ(XDCOBJ &,int);
	int bDisposeTrgDcoWorker();
	int bMapTrgSurfaceView();
	int bTightBoundsToRegion();
	int bUnMapTrgSurfaceView();
	void vClearRenderState();
	void vDestructor();
	void vDestructorNULL();
	void vFlushSpriteUpdates(int);
	~DEVLOCKOBJ();
};

struct DEVLOCKOBJ_WNDOBJ
{
	DEVLOCKOBJ_WNDOBJ(XDCOBJ &,int);
	void vConstructor(XDCOBJ &);
	~DEVLOCKOBJ_WNDOBJ();
};

class DWMALTSPRITEREF
{
	void AltLockSpriteObj(HSPRITE__ *);
public:
	DWMALTSPRITEREF(HWND__ *);
	DWMALTSPRITEREF(HWND__ *,void *);
	static HSPRITE__ * hspLookupWindow(HWND__ *);
};

struct DWMSCREENREADMODIFYWRITEASSIST
{
	DWMSCREENREADMODIFYWRITEASSIST(XDCOBJ &);
	int bDWMDesktop();
	int bInPathBracket();
	int bReadBackRect(_RECTL const *);
	int bReadFromAccumulatedBounds();
	void vRestoreAccumBoundsAndEnableSpriteUpdates();
	void vSaveAccumBoundsAndDisableSpriteUpdates();
};

struct DWMSPRITE
{
	void SetLogicalSurface(HDEV__ *,SFMLOGICALSURFACE *);
	void vUpdateDpiScaling(unsigned short *);
};

struct DWMSPRITELOCK
{
	DWMSPRITELOCK(PDEVOBJ &,int,int);
	~DWMSPRITELOCK();
};

class DWMSPRITEREF
{
	void LockSpriteObj(HSPRITE__ *);
public:
	DWMSPRITEREF(HWND__ *);
	DWMSPRITEREF(HWND__ *,void *);
	static HSPRITE__ * hspLookupWindow(HWND__ *);
};

struct DYNAMICMODECHANGELOCK
{
	DYNAMICMODECHANGELOCK();
	~DYNAMICMODECHANGELOCK();
};

struct DYNAMICMODECHANGESHARELOCK
{
	DYNAMICMODECHANGESHARELOCK();
	~DYNAMICMODECHANGESHARELOCK();
};

struct DestroyFontRequest
{
	virtual FontDriverType GetDrvType();
	virtual bool Zombied();
	virtual long CreateUsermodeParameters(UmfdTls *,void * *);
	virtual unsigned __int64 Hff();
	virtual void CaptureUsermodeParameters(void *);
};

struct EBOX
{
	EBOX(DCOBJ &,_RECTL &,_LINEATTRS *,int);
	EBOX(ERECTL &,int);
	EBOX(EXFORMOBJ &,_RECTL &);
	_POINTL ptlXform(EPOINTFL &);
};

struct EBRUSHOBJ
{
	int bIsCMYKColor();
	unsigned long mixBest(unsigned char,unsigned char);
};

struct ECLIPOBJ
{
	ECLIPOBJ();
	ECLIPOBJ(REGION *,ERECTL &,int);
};

struct ECLIPOBJTMPIFNEEDED
{
	void vSetup(int,REGION *,ERECTL &,int);
	~ECLIPOBJTMPIFNEEDED();
};

struct EFLOAT
{
	int bIs1();
	int bIs16();
	int bIs1Over16();
	int bIsZero();
	void vAbs();
	void vSqrt();
};

struct EFSMEMOBJ
{
	EFSMEMOBJ(DCOBJ *,unsigned long,unsigned long,void *,unsigned long *);
	~EFSMEMOBJ();
};

struct EFSOBJ
{
	int bAdd(PFE *,_ENUMFONTSTYLE,unsigned long,unsigned long);
	int bGrow();
	void WriteEFE(_EFENTRY const &,PFEOBJ &);
};

struct ENUMAREAS
{
	ENUMAREAS(_SPRITESTATE *,_RECTL *,unsigned long,_RECTL *);
	int bAdvanceToTopMostOpaqueLayer(SPRITE * *);
	int bEnum(SPRITE * *,_RECTL *);
	int bEnumLayers(SPRITE * *);
	~ENUMAREAS();
};

struct ENUMFHOBJ
{
	PFE * ppfeFirst();
	PFE * ppfeNext();
};

struct ENUMUNCOVERED
{
	int bEnum(_RECTL *);
};

struct ENUMUNDERLAYS
{
	ENUMUNDERLAYS(_SURFOBJ *,_CLIPOBJ *,_RECTL *);
	int bEnum(_SURFOBJ * *,_POINTL *,_CLIPOBJ * *);
};

struct EPALOBJ
{
	EPALOBJ(HPALETTE__ *);
};

struct EPATHFONTOBJ
{
	void vInit(unsigned long);
};

struct EPATHOBJ
{
	_POINTFIX ptfxGetCurrent();
	int bAddPolygon(EXFORMOBJ *,_POINTL *,int);
	int bComputeWidenedBounds(EPATHOBJ &,_XFORMOBJ *,_LINEATTRS *);
	int bPreComputedFill();
	int bSimpleFill(unsigned long,PDEVOBJ *,SURFACE *,_CLIPOBJ *,_BRUSHOBJ *,_POINTL *,unsigned long,unsigned long);
	int bSimpleStroke(unsigned long,PDEVOBJ *,SURFACE *,_CLIPOBJ *,_XFORMOBJ *,_BRUSHOBJ *,_POINTL *,_LINEATTRS *,unsigned long);
	int bSimpleStrokeAndFill(unsigned long,PDEVOBJ *,SURFACE *,_CLIPOBJ *,_XFORMOBJ *,_BRUSHOBJ *,_LINEATTRS *,_BRUSHOBJ *,_POINTL *,unsigned long,unsigned long);
	int bStrokeAndOrFill(XDCOBJ &,_LINEATTRS *,EXFORMOBJ *,unsigned long);
	int bTextOutSimpleFill(XDCOBJ &,RFONTOBJ &,PDEVOBJ *,SURFACE *,_CLIPOBJ *,_BRUSHOBJ *,_POINTL *,unsigned long,unsigned long);
	int bTextOutSimpleStroke1(XDCOBJ &,RFONTOBJ &,PDEVOBJ *,SURFACE *,_CLIPOBJ *,_BRUSHOBJ *,_POINTL *,unsigned long);
	int bWiden(EPATHOBJ &,_XFORMOBJ *,_LINEATTRS *);
	void vLock(HPATH__ *);
	void vReComputeBounds();
	void vUpdateCosmeticStyleState(SURFACE *,_LINEATTRS *);
	void vWidenSetupForFrameRgn(XDCOBJ &,long,long,EXFORMOBJ *,_LINEATTRS *);
};

struct EPOINTFIX
{
	EPOINTFIX();
	~EPOINTFIX();
};

struct EPOINTFL
{
	int bToPOINTL(_POINTL &);
};

struct EPOINTQF
{
	void operator=(EPOINTFL &);
};

struct ERECTL
{
	ERECTL & operator*=(_RECTL &);
	int bContain(_RECTL &);
	int bEmpty();
	int bOffsetAdd(_POINTL &,int);
	int bOffsetSubtract(_POINTL &,int);
	int bWrapped();
	void operator+=(_RECTL &);
	void operator|=(_RECTL &);
	void vOrder();
	void vScale(POINTFL);
};

struct ESTROBJ
{
	RFONT * GetLinkedRfontOnIndex(long,RFONTOBJ &);
	int bExtraRectsToPath(EPATHOBJ &);
	int bLinkedTextToPath(EPATHOBJ &,XDCOBJ &);
	int bOpaqueArea(_POINTFIX *,_RECTL *);
	int bPartitionInit(unsigned long,unsigned int,int);
	int bTextExtent(RFONTOBJ &,long,tagSIZE *);
	int bTextToPathWorkhorse(EPATHOBJ &);
	void ptlBaseLineAdjustSet(_POINTL &);
	void vCharPos_G1(XDCOBJ &,RFONTOBJ &,long,long,long *,long *);
	void vCharPos_G2(XDCOBJ &,RFONTOBJ &,long,long,long,long,long,long *);
	void vCharPos_G3(XDCOBJ &,RFONTOBJ &,long,long,long,long,long,long *,long *);
	void vCharPos_G4(XDCOBJ &,RFONTOBJ &,long,long,long *);
	void vCharPos_H1(XDCOBJ &,RFONTOBJ &,long,long,long *,EFLOAT);
	void vCharPos_H3(XDCOBJ &,RFONTOBJ &,long,long,long,long,long,EFLOAT,int *);
	void vCharPos_H4(XDCOBJ &,RFONTOBJ &,long,long,long *,EFLOAT,EFLOAT);
	void vEudcOpaqueArea(_POINTFIX *,int);
	void vInit(unsigned short *,long,XDCOBJ &,RFONTOBJ &,EXFORMOBJ &,long *,int,long,long,long,long,long,long,unsigned long,long *,void *,unsigned long);
	void vInitSimple(unsigned short *,long,XDCOBJ &,RFONTOBJ &,long,long,void *);
	~ESTROBJ();
};

struct EWNDOBJ
{
	int bDelete();
	int bValid();
	void vOffset(long,long);
	void vSetClip(REGION *,ERECTL);
};

struct EXFORMOBJ
{
	EXFORMOBJ(MATRIX *,unsigned long);
	int bMultToWorld(MATRIX *,unsigned long);
	int bRotationOrMirroring();
	int bXform(ERECTL &);
	int bXform(_POINTL *,unsigned __int64);
	void vComputeWtoDAccelFlags();
	void vInitPageToDevice(XDCOBJ &,MATRIX *);
	void vQuickInit(XDCOBJ &,unsigned long);
};

struct EXLATEOBJ
{
	int bInitXlateObj(void *,long,XEPALOBJ,XEPALOBJ,XEPALOBJ,XEPALOBJ,unsigned long,unsigned long,unsigned long,unsigned long);
	int bMakeXlate(unsigned short *,XEPALOBJ,SURFACE *,unsigned long,unsigned long);
	void vAddToCache(XEPALOBJ,XEPALOBJ,XEPALOBJ,XEPALOBJ);
	void vAltUnlock();
};

namespace Edgy
{
	Edgy::tagARC_DATA _GetArcData(tagEDGY_DATA &,void * const);
	Edgy::tagHIT_TEST_RESULT _HitTestEdgyRegion(tagEDGY_DATA const &,void *,tagPOINT,tagPOINTER_DEVICE_TYPE,int);
	Edgy::tagSTATE_TRANSITION_DATA _OnInput(tagEDGY_DATA &,void *);
	int Enabled();
	int ProcessInput(void *,void * *);
	int _AddOrUpdateListener(tagDESKTOP *,void *,tagEDGY_LOCATION,HWND__ *);
	int _GetDWordFromRegistry(unsigned short const *,unsigned short const *,unsigned long *);
	int _GrowListeners(tagEDGY_DATA &);
	int _InertiaRegionIntersectsTopEdge(INERTIA_INFO_INTERNAL const *,tagRECT const *);
	int _IsLegacyDevice(void *);
	tagEDGY_DATA * _InitializeData(tagDESKTOP *);
	tagEDGY_LISTENER * _AllocListener(tagEDGY_DATA &,void *,tagEDGY_LOCATION);
	tagEDGY_LISTENER * _FindListener(tagEDGY_DATA &,void *,tagEDGY_LOCATION);
	tagPOINTER_INFO const * GetPointerInfo(tagPOINTERINPUTFRAME const *,unsigned long);
	tagRECT _GetRectForLocation(tagRECT const &,tagEDGY_LOCATION,unsigned long);
	unsigned long _GetDisambiguationArcData(tagEDGY_DATA const &,Edgy::tagARC_DATA const &);
	void * _OnStateTransition(tagEDGY_DATA &,tagEDGY_STATE,Edgy::tagARC_DATA const &);
	void OnDeviceRemoval(void *);
	void ProcessEdgyInertia(INERTIA_INFO_INTERNAL const *);
	void ResetCurrentFrame();
	void ResetEdgyDataFrames(void * const);
	void _AdjustEdgyFrameHwndWorker(void * const,tagINPUTDEST);
	void _AdjustFrameHwnd(void * const,HWND__ *);
	void _OnEnterActive(tagEDGY_DATA &,Edgy::tagARC_DATA const &);
	void _OnEnterDisambiguation(tagEDGY_DATA &,Edgy::tagARC_DATA const &);
	void _OnEnterIdle(tagEDGY_DATA &,Edgy::tagARC_DATA const &);
	void _PostEdgyInertia(HWND__ *,tagEDGY_LOCATION,unsigned long);
	void _RemoveListenerCore(tagEDGY_DATA &,tagEDGY_LISTENER *);
	void _SqmEdgy(tagEDGY_DATA const &,Edgy::tagARC_DATA const &,int);
	void _StoreLastUpDataAndPost(tagEDGY_DATA &,void * const);
};

struct EscapeRequest
{
	virtual FontDriverType GetDrvType();
	virtual bool Zombied();
	virtual long CreateUsermodeParameters(UmfdTls *,void * *);
	virtual unsigned __int64 Hff();
	virtual void CaptureUsermodeParameters(void *);
};

struct ExclusiveWinlognRequestLock
{
	ExclusiveWinlognRequestLock();
	~ExclusiveWinlognRequestLock();
};

struct FHMEMOBJ
{
	FHMEMOBJ(_FONTHASH * *,_FONTHASHTYPE,unsigned int);
};

struct FHOBJ
{
	_HASHBUCKET * pbktSearch(unsigned short const *,unsigned int *,_UNIVERSAL_FONT_ID *,int);
	int bAddPFELink(_HASHBUCKET *,unsigned int,unsigned short *,PFEOBJ &,int);
	int bInsert(PFEOBJ &);
	int bScanLists(EFSOBJ *,unsigned long,_EFFILTER_INFO *);
	int bScanLists(EFSOBJ *,unsigned short const *,unsigned long,_EFFILTER_INFO *);
	int bValid();
	unsigned short * pwszName(PFEOBJ &);
	void vDelete(PFEOBJ &);
	void vDeletePFELink(_HASHBUCKET *,unsigned int,PFEOBJ &);
	void vFree();
};

struct FLOODBM
{
	int bExtendScanline(STACKOBJ &,STACKOBJ &,long,unsigned char *,unsigned char *);
	int bSearchAllSpans(long,long,long &,long &,unsigned char *,STACKOBJ &,SCANLINE *);
	unsigned long iColorGet(long);
	void vFindExtent(long,long &,long &);
};

namespace Feedback
{
	_KEVENT * gpevtPointerCursorOperation;
	int GetWindowBarrelVisualizationSetting(tagPOINTER_INFO const &,int);
	int GetWindowVisualizationSetting(tagPOINTER_INFO const &,int,int,int,int *);
	int gfForceHidePenCursor;
	int gfInRange;
	int gfIntegratedPenActive;
	int gfUsingPenCursors;
	int gfUsingTouchCursors;
	tagPOINTERCURSORDATA * * gppcdFree;
	tagPOINTERCURSORDATA * gpcd;
	tagPOINTERCURSORDATA * gppcdLatest;
	unsigned long gdwPointerCursorOps;
	void ForceHidePenCursor(int);
	void MoveCursor(tagPOINT const &);
	void PointerEventIntToDigitizerContactInfo(tagPOINTEREVENTINT const *,int,int,int,tagDIGITIZER_CONTACT_INFO *);
	void xxxReplaceArrowWithNullCursor();
	void xxxReplaceMouseCursorsWithPenCursors();
	void xxxRestoreMouseCursors();
};

class FontDriverDdiRequest
{
protected:
	FontDriverDdiRequest(FontDriverDdiKind);
	static bool CaptureUsermodeFontObj(_FONTOBJ *,_FONTOBJ *);
};

struct FontManagementRequest
{
	virtual FontDriverType GetDrvType();
	virtual bool Zombied();
	virtual long CreateUsermodeParameters(UmfdTls *,void * *);
	virtual unsigned __int64 Hff();
	virtual void CaptureUsermodeParameters(void *);
};

struct FreeRequest
{
	virtual FontDriverType GetDrvType();
	virtual bool Zombied();
	virtual long CreateUsermodeParameters(UmfdTls *,void * *);
	virtual unsigned __int64 Hff();
	virtual void CaptureUsermodeParameters(void *);
};

struct GetTrueTypeFileRequest
{
	virtual FontDriverType GetDrvType();
	virtual bool Zombied();
	virtual long CreateUsermodeParameters(UmfdTls *,void * *);
	virtual unsigned __int64 Hff();
	virtual void CaptureUsermodeParameters(void *);
};

struct HTSEMOBJ
{
	void vRelease();
};

class HideInkCursorProvider
{
	long DoHideInkCursorStart(IFC_HIDE_INK_CURSOR_START_DATA const *);
	long DoHideInkCursorStop(IFC_HIDE_INK_CURSOR_STOP_DATA const *);
	long ValidatePointer(unsigned int);
public:
	virtual long ProcessInkFeedbackCommand(INK_FEEDBACK_COMMAND,void const *,unsigned int);
	virtual void TerminateActiveCommand(InkFeedbackProviderBase::ActiveCommand *);
};

struct HmgInsertObjectHelper
{
	HOBJ__ * Insert(OBJECT *,unsigned char,unsigned long);
};

struct IFIOBJ
{
	_POINTL * pptlBaseline();
	int bSimItalic();
	long lfOrientation();
	unsigned char lfOutPrecision();
	void * pvSimBold();
};

struct IFIOBJR
{
	IFIOBJR(_IFIMETRICS const *,RFONTOBJ &,DCOBJ &);
};

class InkDevice
{
	long DoSuperWetInkStart(IFC_SUPERWET_INK_START_DATA const *);
	long DoSuperWetInkStop(IFC_SUPERWET_INK_STOP_DATA const *);
	long GetDisplayScalingInfoAndCheckSupported(unsigned int,float *);
	long ValidateDeviceFeatures();
	long ValidatePointer(unsigned int);
	virtual long CreateAndSendSuperWetInkPayloadForCommand(INK_FEEDBACK_COMMAND,void const *,unsigned int,float);
	virtual long ProcessInkFeedbackCommand(INK_FEEDBACK_COMMAND,void const *,unsigned int);
	virtual void TerminateActiveCommand(InkFeedbackProviderBase::ActiveCommand *);
public:
	InkDevice();
	virtual long Initialize(RawInputManagerDeviceObject *);
	virtual void UnInitialize();
	virtual ~InkDevice();
};

struct InkDeviceParser
{
	struct DeviceFeaturesReport
	{
		static UsageDescriptor const * const Usages;
	};

	struct PayloadReport
	{
		static UsageDescriptor const * const Usages;
	};

	static long GetDeviceCaps(_HIDP_PREPARSED_DATA *,UsageValueInfo *,UsageValueInfo *,InkDevice::Capabilities *);
	static long GetDeviceFeatures(_HIDP_PREPARSED_DATA *,void const *,unsigned long,UsageValueInfo const *,InkDevice::Features *);
	static long PopulatePayloadReport(_HIDP_PREPARSED_DATA *,UsageValueInfo const *,void const *,unsigned long,void *,unsigned long);
};

class InkFeedbackProviderBase
{
protected:
	InkFeedbackProviderBase::ActiveCommand * FindActiveCommandByTargetPointerId(INK_FEEDBACK_COMMAND,unsigned int);
	void AddActiveCommand(InkFeedbackProviderBase::ActiveCommand *);
	void RemoveActiveCommand(InkFeedbackProviderBase::ActiveCommand *);
	void RemoveAndReleaseActiveCommand(InkFeedbackProviderBase::ActiveCommand * *);
public:
	virtual void EndActiveCommandsByOwnerThread(void const *);
	virtual void EndActiveCommandsByPointerId(unsigned int);
};

struct InkFeedbackServer
{
	long AddInkFeedbackProvider(InkFeedbackProviderBase *);
	long ProcessInkFeedbackCommand(INK_FEEDBACK_COMMAND,void const *,unsigned int);
	long RemoveInkFeedbackProvider(InkFeedbackProviderBase *);
	void OnPointerMessagePosted(unsigned int,unsigned __int64);
};

class InkProcessor
{
	InkDevice * FindInkDeviceByRimDeviceObject(RawInputManagerDeviceObject const *);
	InkProcessor();
	static InkProcessor * s_pInstance;
	void UnlinkAndReleaseInkDevice(InkDevice * *);
	~InkProcessor();
public:
	long OnDeviceAttached(RawInputManagerDeviceObject *);
	long ProcessInkFeedbackCommand(INK_FEEDBACK_COMMAND,void const *,unsigned int);
	void OnDeviceClosed(RawInputManagerDeviceObject *);
	void OnDeviceOpened(RawInputManagerDeviceObject *);
	void OnDeviceRemoved(RawInputManagerDeviceObject *);
	void OnPointerMessagePosted(unsigned int,unsigned __int64);
	void OnThreadExit(tagTHREADINFO const *);
	void ProcessInput(RawInputManagerDeviceObject *,void const *);
};

namespace InputTransform
{
	int GetTransformList(tagWND *,unsigned int,unsigned __int64 *,tagINPUT_TRANSFORM *,char);
	int OnInput(tagWND *,unsigned __int64,tagINPUT_TRANSFORM const *);
	int SetCompositionInput(tagWND *,void *);
	int StoreTransform(tagWND *,tagINPUT_TRANSFORM const *,unsigned __int64 *);
	void ClearTransforms(tagWND *);
};

class InteractiveControlDefaultScroller
{
	int SendZoomHotkey(short);
	long GenerateWheelDelta(short *);
	long GenerateWheelMessage(short,tagWND *);
	long UpdateBallistics();
	long UpdateTime(int *);
	static InteractiveControlDefaultScroller::BallisticsConfig * s_ballistics;
	static void SendZoomModifiers(unsigned char,int);
	void Reset(InteractiveControlDevice *,tagWND *);
	void SetBallisticsLevel(unsigned long,int);
public:
	long GenerateMessages(InteractiveControlDevice *,tagINTERACTIVECTRL_INFO *,tagINTERACTIVECTRL_PROMOTION_TYPE);
};

class InteractiveControlDevice
{
protected:
	void SetMessagePromotionType(tagINTERACTIVECTRL_PROMOTION_TYPE);
	void SetTargetWindow(tagWND *);
public:
	InteractiveControlDevice();
	int GetInputReport(unsigned long,InteractiveControlInput * *);
	int GetPreviousInputReport(_LIST_ENTRY *,InteractiveControlInput * *);
	long CreateDeadzone();
	long DestroyDeadzone();
	long Initialize(RawInputManagerDeviceObject *);
	long InitializeWaveformOrdinalForDevice();
	long OnTimerNotification();
	long QueueAndGenerateInput(void *,unsigned long);
	long SendHapticFeedbackOutput(_SIMPLEHAPTICCTRL_FEEDBACK_DATA const &);
	long SetComponentResolution(_INTERACTIVECTRL_COMPONENT_TYPE,long,tagINTERACTIVECTRL_HAPTICS_MODE *);
	long SetHapticsMode(tagINTERACTIVECTRL_HAPTICS_MODE);
	tagWND * UpdateInputTarget(unsigned int);
	unsigned int DetermineMessageCreationFlags(InteractiveControlInput *,InteractiveControlInput *);
	void CleanQueue(unsigned long);
	void Deinitialize();
	void DetectPressAndHoldGesture(InteractiveControlInput *,unsigned int);
	void FlushBufferedInput(unsigned int);
	void PerformInputActions(InteractiveControlInput *,unsigned int);
	void QueueInput(_LIST_ENTRY *,InteractiveControlInput *);
	void SetBackgroundAccessor(tagWND *,unsigned int);
	void SetFocus(tagWND *,tagINTERACTIVECTRL_PROMOTION_TYPE);
};

class InteractiveControlInput
{
protected:
	long GenerateCtrlInputMessages(tagWND *,unsigned int);
public:
	InteractiveControlInput(InteractiveControlDevice *);
	long GenerateMessages(tagWND *,tagINTERACTIVECTRL_PROMOTION_TYPE,unsigned int);
	long ParseInputReport(unsigned char *,unsigned long);
};

class InteractiveControlManager
{
	InteractiveControlManager();
	long FindDevice(unsigned long,void *,InteractiveControlDevice * *,unsigned long *);
	long InsertDevice(InteractiveControlDevice *);
	long RemoveDevice(InteractiveControlDevice *);
	static InteractiveControlManager * s_pInstance;
	void Deinitialize();
public:
	long AcquireDeviceBackgroundAccess(unsigned long,unsigned int,unsigned int,tagWND *);
	long ClearBackgroundAccessors(unsigned long);
	long ClearDeviceFocus(unsigned long);
	long GetDeviceInfo(unsigned long,tagINTERACTIVECTRL_DEVICE_INFO *);
	long GetDeviceSupportedWaveforms(unsigned long,_WAVEFORM_INFO * *,long *);
	long GetExternalParameters(tagINTERACTIVECTRL_PARAMETERS *);
	long GetReportExtendedUsage(unsigned long,unsigned long,unsigned short,unsigned short,unsigned short,long *);
	long GetReportInfo(unsigned long,unsigned long,tagINTERACTIVECTRL_INFO *);
	long OnDeviceAttach(RawInputManagerDeviceObject *);
	long OnDeviceRemoval(RawInputManagerDeviceObject *);
	long OnInputReport(RawInputManagerDeviceObject *,void *,unsigned long);
	long SendDeviceHapticsOutput(unsigned long,_SIMPLEHAPTICCTRL_FEEDBACK_DATA const &);
	long SetDeviceComponentResolution(unsigned long,_INTERACTIVECTRL_COMPONENT_TYPE,long,tagINTERACTIVECTRL_HAPTICS_MODE *);
	long SetDeviceFocus(unsigned long,tagINTERACTIVECTRL_PROMOTION_TYPE,tagWND *);
	long SetDeviceHapticsMode(unsigned long,tagINTERACTIVECTRL_HAPTICS_MODE);
	long SetExternalParameters(tagINTERACTIVECTRL_PARAMETERS *,int);
	static InteractiveControlManager * Instance();
};

class InteractiveControlParser
{
	static _INTERACTIVECTRL_COMPONENT_TYPE GetComponentType(unsigned short,unsigned short);
	static long BuildComponentInformation(_HIDP_PREPARSED_DATA *,unsigned short,_HIDP_LINK_COLLECTION_NODE *,InteractiveControlDevice *);
	static long BuildDeviceAttributes(_HIDP_PREPARSED_DATA *,unsigned short,_HIDP_LINK_COLLECTION_NODE *,_INTERACTIVECTRL_CAPABILITIES *,InteractiveControlDevice *);
	static long BuildDeviceShapeDescriptor(InteractiveControlDevice *,_HIDP_PREPARSED_DATA *);
	static long CreateAndLinkComponent(_HIDP_VALUE_CAPS *,int,_INTERACTIVECTRL_CAPABILITIES *,tagINTERACTIVECTRL_COMPONENT_ENTRY * *);
	static long FindDigitizerForDevice(InteractiveControlDevice *,_HIDP_PREPARSED_DATA *);
	static void FreeComponentInformation(_INTERACTIVECTRL_CAPABILITIES *);
public:
	static long BuildDeviceCapabilities(_HIDP_PREPARSED_DATA *,InteractiveControlDevice *);
	static long ExtractCustomUsage(_INTERACTIVECTRL_CAPABILITIES *,_HIDP_PREPARSED_DATA *,unsigned char *,unsigned long,unsigned short,unsigned short,unsigned short,long *);
	static long GetScaledComponentValue(tagINTERACTIVECTRL_COMPONENT_ENTRY *,long);
	static long ParseInputReport(InteractiveControlDevice *,unsigned char *,unsigned long,tagINTERACTIVECTRL_INFO *);
	static void FreeDeviceCapabilities(_INTERACTIVECTRL_CAPABILITIES *);
	static void GetComponentMultiplier(tagINTERACTIVECTRL_COMPONENT_ENTRY *,long *,long *);
};

class InteractiveControlSettings
{
protected:
	long _OpenDeviceKey(unsigned long,int,void * *);
	static InteractiveControlSettings::RegistryValue const * const m_Value;
public:
	long ReadSettings();
	long WriteSettings();
};

namespace Io
{
	struct DeviceObjectPointer
	{
		static long GetByObjectName(_UNICODE_STRING const *,unsigned long,unsigned long,DeviceObjectPointer *);
		~DeviceObjectPointer();
	};

};

class KeyboardInputTelemetry
{
	void _UpdateTelemetryBuffer(bool,unsigned long);
	void _UploadTelemetryData();
public:
	static unsigned long GetKeyboardInputLatency(unsigned __int64);
	static void LogHanging(tagTHREADINFO *);
	void BeginKeyboardEventProcessingByInputService(unsigned int);
	void EndKeyboardEventProcessingByInputService(unsigned int,bool);
};

struct LFONTOBJ
{
	LFONTOBJ(HLFONT__ *,PDEVOBJ *);
	PFE * ppfeMapFont(XDCOBJ &,unsigned long *,_POINTL *,unsigned long *,int);
	~LFONTOBJ();
};

class LINER
{
	void vNextPoint();
public:
	void vNextEvent();
};

struct LeaveEnterCritProperDisposition
{
	LeaveEnterCritProperDisposition();
	~LeaveEnterCritProperDisposition();
};

struct LegacyInputDispatcher
{
	virtual long PopulateCustomDipatcherObjectsArray(unsigned int,void * *);
	virtual long RegisterInputDispatcherObjects(void *,unsigned int,InputDispatcherObject *);
};

struct LoadFontFileRequest
{
	virtual FontDriverType GetDrvType();
	virtual bool Zombied();
	virtual long CreateUsermodeParameters(UmfdTls *,void * *);
	virtual unsigned __int64 Hff();
	virtual void CaptureUsermodeParameters(void *);
};

struct MALLOCOBJ
{
	MALLOCOBJ(unsigned long);
};

class MAPPER
{
	int bCalculateWishCell();
	int bGetFaceName();
public:
	MAPPER(XDCOBJ *,unsigned long *,_POINTL *,unsigned long *,tagENUMLOGFONTEXDVW const *,unsigned short const *,unsigned long,int,unsigned long);
	PFE * ppfeSynthesizeAMatch(unsigned long *,unsigned long *,_POINTL *);
	int bCalcOrientation();
	int bFindBitmapFont(unsigned short *);
	int bFoundExactMatch(_FONTHASH * *,int);
	int bFoundForcedMatch(_UNIVERSAL_FONT_ID *);
	int bNearMatch(PFEOBJ &,unsigned char *,int);
	int bNoMatch(PFE *);
	int bWin31BitmapHeightScaling(long,long,long *);
	int bWin31BitmapWidthScaling(long,long,long *);
	static unsigned char DefaultCharset;
	static unsigned long * SignatureTable;
	static unsigned short * FaceNameTable;
	void vAttemptDeviceMatch();
	void vEmergency();
	void vSetBest(PFE *,int,unsigned char);
};

struct MARK_ACCDRV_NOTIFICATION
{
	MARK_ACCDRV_NOTIFICATION(PDEVOBJ &,_SURFOBJ *);
};

struct MDCOBJ
{
	MDCOBJ(HDC__ *);
	~MDCOBJ();
};

struct MDCOBJA
{
	MDCOBJA(HDC__ *);
	~MDCOBJA();
};

class METAREGION
{
	int bIntersectMoveWithDirty(_RECTL *);
	int bTrimMoveWithRegion(REGION *,int);
	int vAddRectToMoveRegionHelper(_RECTL *);
	int vApplyMoveData(_RECTL *,_POINTL *,REGION *);
	void TraceMoveRemovedMoveRegions(_RECTL *);
	void vCalculateNoMoveDirty();
public:
	void vClearMoveData(int);
};

struct MSURF
{
	int bFindSurface(_SURFOBJ *,_CLIPOBJ *,_RECTL *);
	int bNextSurface();
};

struct MULTIBRUSH
{
	MULTIBRUSH(_BRUSHOBJ *,long,_VDEV *,_SURFOBJ *,int);
	void DestroyTable();
	void LoadElement(_DISPSURF *,SURFACE *);
	void StoreElement(long);
};

struct MULTIFONT
{
	MULTIFONT(_FONTOBJ *,long,_VDEV *);
	void DestroyTable();
	~MULTIFONT();
};

struct MULTIPANSURFLOCK
{
	MULTIPANSURFLOCK(_PANDEV *,_SURFOBJ * *,_SURFOBJ * *,_RECTL *,_RECTL *,int *,_CLIPOBJ *);
	int bTryLockShadowR(_RECTL *,_CLIPOBJ *);
	void vLockBmp1AndPrepareForPunt(int);
	void vLockBmp2AndPrepareForPunt(int);
	void vLockShadowW(_RECTL *,_CLIPOBJ *);
	void vUnLockBmp1AndRemovePunt();
	void vUnLockBmp2AndRemovePunt();
	void vUnLockShadowR();
	void vUnLockShadowW();
	~MULTIPANSURFLOCK();
};

struct MULTISORTBLTORDER
{
	MULTISORTBLTORDER(_VDEV *,long,long);
};

struct MULTISPRITEDDIACCESS
{
	MULTISPRITEDDIACCESS(PDEVOBJ &);
	~MULTISPRITEDDIACCESS();
};

class MULTISURF
{
	int bCreateDIB();
	int bLoadSourceNotMetaDEVBITMAP(HDEV__ *);
	void vInit(_SURFOBJ *,_RECTL *);
public:
	MULTISURF(_SURFOBJ *);
	int bLoadSource(HDEV__ *);
	int bLoadSource(_DISPSURF *);
	~MULTISURF();
};

struct MenuStateOwnerLockxxxUnlock
{
	MenuStateOwnerLockxxxUnlock(tagMENUSTATE *);
	~MenuStateOwnerLockxxxUnlock();
};

struct NEEDDDILOCK
{
	int bRender(_CLIPOBJ * *);
};

struct NEEDDYNAMICMODECHANGESHARELOCK
{
	NEEDDYNAMICMODECHANGESHARELOCK(int);
	~NEEDDYNAMICMODECHANGESHARELOCK();
};

namespace NSInstrumentation
{
	struct CBackTrace
	{
		unsigned __int64 ComputeHash();
	};

	struct CBackTraceBucket
	{
		CBackTraceStorageUnit * Insert(unsigned __int64,CBackTrace const * const);
		CBackTraceStorageUnit * Lookup(CBackTrace const * const,unsigned __int64);
		bool Remove(CBackTraceStorageUnit const * const);
	};

	struct CBackTraceStorageUnit
	{
		static CBackTraceStorageUnit * Create(unsigned __int64,CBackTrace const * const,CBackTraceStorageUnit *);
	};

	struct CBackTraceStoreEx
	{
		void * AcquireBackTrace(CBackTrace *,unsigned int *);
	};

	class CLeakTrackingAllocator
	{
		bool AssociateAllocationWithBacktrace<0>(void *,CBackTrace *);
		bool AssociateAllocationWithBacktrace<1>(void *,CBackTrace *);
		bool IsTagTracked(unsigned int);
		static void CleanupCallback(void *,void *,void *);
		void InitializeBackTraceStore(CBackTraceStoreEx * *);
		void InitializePointerHashTable(CPointerHashTable * *,bool);
		void InitializeSortedVector(CSortedVector<void *,void *> * *);
	public:
		bool Empty();
		static void Destroy(CLeakTrackingAllocator *);
		void * Allocate(_POOL_TYPE,unsigned __int64,unsigned int);
		void * AllocateFromPagedLookasideList(void *);
		void * AllocatePagedLookasideList(unsigned __int64,unsigned int,unsigned int,unsigned int);
		void * AllocatePriority(_POOL_TYPE,unsigned __int64,unsigned int,_EX_POOL_PRIORITY);
		void * AllocateQuota(_POOL_TYPE,unsigned __int64,unsigned int);
		void Dump(_DUMP_CONTEXT *);
		void Free(void *);
		void FreeAll();
		void FreePagedLookasideList(void *);
		void FreeToPagedLookasideList(void *,void *);
	};

	struct CPlatformSingleWatierSignal
	{
		void Wait();
	};

	class CPointerHashTable
	{
		CPointerHashTable::EInsertResult InsertInternal(void const *,void const *);
		bool Resize();
		void InsertWithHash(unsigned __int64,void const *,void const *);
	public:
		bool Insert(void const *,void const *);
		bool Lookup(void const *,void * *);
		bool Remove(void const *,void * *);
		static CPointerHashTable * Create(bool);
		static void Destroy(CPointerHashTable *);
		void Enumerate(void (*)(void *,void *,void *),void *);
	};

	struct CPrioritizedWriterLock
	{
		void ReleaseShared();
	};

	struct CSharedStorage<CBackTraceBucket,long volatile ,CBackTraceStorageUnit,CBackTrace>
	{
		CBackTraceStorageUnit * Insert(CBackTrace const * const);
		CBackTraceStorageUnit * Lookup(CBackTrace const * const);
		bool Initialize(unsigned int);
		bool Remove(CBackTraceStorageUnit const * const);
		void Enumerate<void (*)(void *,void *,void *)>(void (*)(void *,void *,void *),void *);
		void Uninitialize();
	};

	class CSortedVector<unsigned int,_FONTFILEVIEW *>
	{
		bool ReAllocate(unsigned __int64);
	public:
		bool Insert(unsigned int const &,_FONTFILEVIEW * const &);
		bool LookUp(unsigned int const &,_FONTFILEVIEW * *);
		bool Remove(unsigned int const &);
		static CSortedVector<unsigned int,_FONTFILEVIEW *> * Create();
		unsigned __int64 LowerBound(unsigned int const &);
	};

	class CSortedVector<void *,void *>
	{
		bool ReAllocate(unsigned __int64);
	public:
		bool Insert(void * const &,void * const &);
		bool LookUpAndRemove(void * const &,void * *);
		static void Destroy(CSortedVector<void *,void *> *);
		unsigned __int64 LowerBound(void * const &);
		void Enumerate(void (*)(void *,void *,void *),void *);
	};

	class UAFMitigationAllocator<Win32UAFMAllocatorCollection>
	{
		static unsigned __int64 AdjustSize(unsigned __int64);
		static unsigned int GenerateCookie();
	public:
		static void * AllocatePool(_POOL_TYPE,unsigned __int64,unsigned int,unsigned int *);
		static void FreeAssertPointerIsValid(void *,unsigned int);
	};

	void * PlatformAllocate(_POOL_TYPE,unsigned __int64,unsigned int);
	void PlatformFree(void *);
	void WriteAllocTableDumpBufferCallback(void *,void *,void *);
	void WriteBackTraceDumpBufferCallback(void *,void *,void *);
};

struct PALMEMOBJ
{
	int bCreateHTPalette(long,_GDIINFO *);
};

struct PANDEVLOCK
{
	void vUnLock();
};

struct PANSURFLOCK
{
	PANSURFLOCK(_PANDEV *,_SURFOBJ * *,_RECTL *,int *,_CLIPOBJ *);
	void vLockBmpAndPrepareForPunt();
	void vLockShadow(_RECTL *,_CLIPOBJ *,int);
	void vUnLockBmpAndRemovePunt();
	void vUnLockShadow();
	~PANSURFLOCK();
};

struct PATHSTACKOBJ
{
	PATHSTACKOBJ();
	PATHSTACKOBJ(XDCOBJ &,int);
	~PATHSTACKOBJ();
};

struct PDEVOBJ
{
	RFONT * prfntActive();
	RFONT * prfntActive(RFONT *);
	RFONT * prfntInactive();
	RFONT * prfntInactive(RFONT *);
	_IFIMETRICS * QueryFont(DHPDEV__ *,unsigned __int64,unsigned long,unsigned __int64 *);
	int UnloadFontFile(unsigned __int64);
	int bCreateDefaultBrushes();
	int bCreateHalftoneBrushes();
	int bDisableHalftone();
	int bEnableHalftone(tagCOLORADJUSTMENT *);
	int bGetDeviceFonts();
	int bLddmDriver();
	long QueryFontCaps(unsigned long,unsigned long *);
	long QueryFontFile(unsigned __int64,unsigned long,unsigned long,unsigned long *);
	tagSIZE sizl();
	unsigned __int64 LoadFontFile(unsigned long,unsigned __int64 *,void * *,unsigned long *,tagDESIGNVECTOR *,unsigned long,unsigned long);
	unsigned int cInactive();
	unsigned long Escape(_SURFOBJ *,unsigned long,unsigned long,void *,unsigned long,void *);
	unsigned long StateFlags();
	unsigned long ulLogPixelsX();
	unsigned long ulLogPixelsY();
	void * pDevHTInfo();
	void ComposeDeviceGammaRampsUnsafe();
	void DestroyFont(_FONTOBJ *);
	void Free(void *,unsigned __int64);
	void vProfileDriver();
};

struct PFEMEMOBJ
{
	int bInit(PFF *,unsigned long,_FD_GLYPHSET *,unsigned __int64,_IFIMETRICS *,unsigned __int64,int,_UNIVERSAL_FONT_ID *,int);
};

struct PFEOBJ
{
	_ENUMFONTSTYLE efstyCompute();
	_FD_GLYPHSET * pfdg();
	_LIST_ENTRY * pGetLinkedFontList();
	_QUICKLOOKUP * pql();
	int SameProccess();
	int bCheckFamilyName(unsigned short const *,int,int *);
	int bFilteredOut(_EFFILTER_INFO *);
	int bSetFontXform(XDCOBJ &,tagLOGFONTW *,_FD_XFORM *,unsigned long,unsigned long,_POINTL * const,IFIOBJ &,int);
	unsigned long cKernPairs(_FD_KERNINGPAIR * *);
	unsigned long dpNtmi();
	unsigned long flFontType();
	void vDelete();
	void vFreePql();
	void vFreepfdg();
};

class PFFMEMOBJ
{
	int bAllocPFEData(unsigned long);
public:
	PFFMEMOBJ(PFF *,unsigned long,unsigned long,PFT *);
	PFFMEMOBJ(unsigned int,unsigned short *,unsigned long,unsigned long,tagDESIGNVECTOR *,unsigned long,unsigned __int64,HDEV__ *,DHPDEV__ *,PFT *,unsigned long,unsigned long,_FNTCHECKSUM *,_FONTFILEVIEW * *,_UNIVERSAL_FONT_ID *);
	int bAddEntry(unsigned long,_FD_GLYPHSET *,unsigned __int64,_IFIMETRICS *,unsigned __int64,_UNIVERSAL_FONT_ID *,_EUDCLOAD *);
	int bLoadDeviceFontTable(PDEVOBJ *);
	int bLoadFontFileTable(unsigned short *,unsigned long,_UNIVERSAL_FONT_ID *,_EUDCLOAD *);
	void vKeepIt();
	~PFFMEMOBJ();
};

class PFFOBJ
{
	static unsigned int uGlobalUniqueness;
public:
	_FD_GLYPHATTR * QueryGlyphAttrs(_FONTOBJ *,unsigned long);
	int FontManagement(_SURFOBJ *,_FONTOBJ *,unsigned long,unsigned long,void *,unsigned long,void *);
	int bAddHash(int);
	int bAddPvtData(unsigned long);
	int bDeleteLoadRef(unsigned long,tagPvtData *,int *);
	int bRemovePvtData(tagPvtData *);
	long QueryFontData(DHPDEV__ *,_FONTOBJ *,unsigned long,unsigned long,_GLYPHDATA *,void *,unsigned long);
	long QueryTrueTypeOutline(DHPDEV__ *,_FONTOBJ *,unsigned long,int,_GLYPHDATA *,unsigned long,tagTTPOLYGONHEADER *);
	long QueryTrueTypeTable(unsigned __int64,unsigned long,unsigned long,long,unsigned long,unsigned char *,unsigned char * *,unsigned long *);
	tagPvtData * pPvtDataMatch();
	void * GetTrueTypeFile(unsigned __int64,unsigned long *);
	void * QueryFontTree(DHPDEV__ *,unsigned __int64,unsigned long,unsigned long,unsigned __int64 *);
	void vDeleteRFONTRef();
	void vGetEUDC(_EUDCLOAD *);
	void vKill();
	void vPFFC_Delete(PFFCLEANUP *);
	void vRemoveHash();
	void vSetUniqueness();
};

struct PFFREFOBJ
{
	PFFREFOBJ();
	~PFFREFOBJ();
};

struct PFTOBJ
{
	PFF * HFFToPPFF(unsigned __int64);
	int bUnloadAllButPermanentFonts(int);
	int bUnloadEUDCFont(unsigned short *);
	int bUnloadWorkhorse(PFF *,PFF * *,unsigned long);
	static _LARGE_INTEGER FontChangeTime;
	unsigned long chpfeIncrPFF(PFF *,int *,unsigned long,_EUDCLOAD *);
};

struct PIDLOCKSPRITEAREA
{
	void vLock(_SPRITESTATE *,_RECTL *);
	void vUnlock();
};

struct PRECOMPUTE
{
	int bAddPreComputedFastFillRects(EPATHOBJ &,_RECTL *,unsigned long);
	int bAddPreComputedFastStrokeRects(EPATHOBJ &,_RECTL *,unsigned long);
	int bPreComputeFast(EPATHOBJ &,EPATHOBJ &,_RECTL *,unsigned long);
	void vInit(SURFACE *,PDEVOBJ *,EPATHOBJ *,_CLIPOBJ *,_XFORMOBJ *,_LINEATTRS *,unsigned long,unsigned long,PRECOMPUTETYPE);
	~PRECOMPUTE();
};

struct PROXYPORT
{
	PROXYPORT(unsigned __int64);
	long SecureConnectPort(void * *,_UNICODE_STRING *,_SECURITY_QUALITY_OF_SERVICE *,_PORT_VIEW *,void *,_REMOTE_PORT_VIEW *,unsigned long *,void *,unsigned long *);
	long SendRequest(void *,unsigned long,void *,unsigned long);
	void Close();
};

struct PUBLIC_PFTOBJ
{
	PFF * pPFFGet(unsigned short *,unsigned long,unsigned long,tagDESIGNVECTOR *,unsigned long,PFF * * *,int);
	PUBLIC_PFTOBJ();
	PUBLIC_PFTOBJ(PFT *);
	int ChangeGhostFont(void *,int);
	int QueryFonts(_UNIVERSAL_FONT_ID *,unsigned long,_LARGE_INTEGER *);
	int VerifyPFF(PFF *);
	int bLoadAFont(unsigned short *,unsigned long *,unsigned long,PFF * *,_EUDCLOAD *);
	int bLoadFonts(unsigned short *,unsigned long,unsigned long,tagDESIGNVECTOR *,unsigned long,unsigned long *,unsigned long,PFF * *,unsigned long,int,_EUDCLOAD *);
	int bLoadRemoteFonts(XDCOBJ &,_FONTFILEVIEW * *,unsigned int,tagDESIGNVECTOR *,_UNIVERSAL_FONT_ID *,int *);
	static unsigned long ulMemoryUnique;
	static unsigned long ulRemoteUnique;
	unsigned long GetEmbedFonts();
	void * hLoadMemFonts(_FONTFILEVIEW * *,tagDESIGNVECTOR *,unsigned long,unsigned long *,int *);
};

struct PUSHLOCKEX
{
	PUSHLOCKEX(_EX_PUSH_LOCK *);
	~PUSHLOCKEX();
};

namespace PalmRejection
{
	int Enabled();
	int ProcessInput(void *);
	int _HitTestRejectionRegion(void *,tagPOINT);
	tagRECT _GetNonRejectionRegion(void *);
	void * DispatchFrameAndGetNext(void *);
	void * _SuppressDeadzoneContactsInFrameAndGetNext(tagPOINTERINPUTFRAME *,tagPOINTERINPUTFRAME *,tagPOINT);
	void DispatchBufferedInputFrames();
	void _PalmRejectTimerProc(tagWND *,unsigned int,unsigned __int64,__int64);
	void _ReadSettingsFromRegKey();
	void _SuppressDeadzoneContacts(tagPOINT);
};

struct PlaceHolderMonitor
{
	void Reset(tagMONITORPOS *);
};

namespace Pointer
{
	long GetPointerInfoByPointerId(unsigned int,tagPOINTER_INFO const * *);
	long GetPointerInfoByPointerMsgId(unsigned __int64,tagPOINTER_INFO const * *);
};

namespace PointerFrameList
{
	int DelegateCoalesceQFrame(tagPOINTERINPUTFRAME const *,unsigned long);
	int SetPointerInfoNodeMessagePosted(unsigned __int64,unsigned int,int);
	tagPOINTERINPUTFRAME * GetEarliestTPFrame(unsigned int *);
	tagPOINTERINPUTFRAME const * CommitAndReferenceFrame(void *,void *);
	tagPOINTERINPUTFRAME const * GetNextFrame(tagPOINTERINPUTFRAME const *,_LIST_ENTRY *);
	void FreePointerInfoNode(unsigned short,unsigned long,unsigned long);
	void ProcessPointerInfoNodeEnterLeave(tagPOINTERINPUTFRAME const *,unsigned long);
	void SetPointerInfoNodeDelegateAction(tagPOINTERINPUTFRAME const *,unsigned long,unsigned int,int,int);
	void SetPointerInfoNodeTarget(tagPOINTERINPUTFRAME const *,unsigned long,tagWND *,int,tagPOINT const *,int,int,int,int);
};

namespace PointerList
{
	int GetPointerOffset(unsigned short,tagPOINT *);
	int GetPointerVisualization(unsigned short,int *);
	int SetPointerCapture(unsigned __int64,tagWND *,tagPOINTER_CAPTURE_MODE,int,int);
	int SetPointerOffset(unsigned short,tagPOINT const *);
	int SetPointerVisualization(unsigned short,int,int *,int);
	tagWND * DelegateCapture(unsigned __int64,int,tagDELEGATEPOINTERMAP *);
	tagWND * DelegateCapture(unsigned short,unsigned long,int);
	unsigned __int64 CreateAndReferenceMsgData(unsigned short,unsigned long,unsigned long,unsigned int,int);
	unsigned __int64 GetPrevMsgId(unsigned __int64);
	unsigned short UpdateActivePointer(tagPOINTEREVENTINT const *,HWND__ *,unsigned long,tagWND * *,unsigned long *,unsigned short *,unsigned int *);
	void AddLostCaptureTarget(unsigned short,HWND__ *);
	void FreeMsgData(unsigned __int64);
	void GetPointerCapture(unsigned __int64,int,tagWND * *,int *);
	void UnreferenceMsgData(unsigned __int64,tagPOINTERMSGDATA_REFTYPE,void *);
};

namespace PointerPromotion
{
	int xxxPromotePointer(unsigned short,unsigned long,unsigned long);
	void OnPointerInputRetrieval(unsigned short,unsigned long,tagPOINT,int);
	void xxxProcessPointerInputAsMouse(tagPOINTER_INFO const &,unsigned short,unsigned short);
};

namespace Prediction
{
	struct CFixPred
	{
		CFixPred();
	};

	struct SquareMatrix<CFixPred,3>
	{
		SquareMatrix<CFixPred,3> & operator=(SquareMatrix<CFixPred,3> const &);
		SquareMatrix<CFixPred,3>();
		void diag(CFixPred const &);
	};

	struct Vector<CFixPred,3>
	{
		Vector<CFixPred,3> & operator=(Vector<CFixPred,3> const &);
		Vector<CFixPred,3>();
	};

	struct tagExpoSmoother
	{
		CFixPred Smooth(CFixPred);
	};

	struct tagRlsFilter
	{
		CFixPred Filter(CFixPred,CFixPred,int *);
		void vInit(CFixPred,CFixPred,CFixPred,CFixPred);
	};

	Prediction::CFixPred operator*<CFixPred,3>(Prediction::Vector<Prediction::CFixPred,3> const &,Prediction::Vector<Prediction::CFixPred,3> const &);
	Prediction::CFixPred operator/(Prediction::CFixPred const &,Prediction::CFixPred const &);
	Prediction::SquareMatrix<Prediction::CFixPred,3> Tri<CFixPred,3>(Prediction::SquareMatrix<Prediction::CFixPred,3> const &);
	Prediction::SquareMatrix<Prediction::CFixPred,3> operator*<CFixPred,3>(Prediction::SquareMatrix<Prediction::CFixPred,3> const &,Prediction::CFixPred const &);
	Prediction::SquareMatrix<Prediction::CFixPred,3> operator*<CFixPred,3>(Prediction::SquareMatrix<Prediction::CFixPred,3> const &,Prediction::SquareMatrix<Prediction::CFixPred,3> const &);
	Prediction::SquareMatrix<Prediction::CFixPred,3> operator-<CFixPred,3>(Prediction::SquareMatrix<Prediction::CFixPred,3> const &,Prediction::SquareMatrix<Prediction::CFixPred,3> const &);
	Prediction::SquareMatrix<Prediction::CFixPred,3> operator^<CFixPred,3>(Prediction::Vector<Prediction::CFixPred,3> const &,Prediction::Vector<Prediction::CFixPred,3> const &);
	Prediction::Vector<Prediction::CFixPred,3> operator*<CFixPred,3>(Prediction::SquareMatrix<Prediction::CFixPred,3> const &,Prediction::Vector<Prediction::CFixPred,3> const &);
	Prediction::Vector<Prediction::CFixPred,3> operator*<CFixPred,3>(Prediction::Vector<Prediction::CFixPred,3> const &,Prediction::CFixPred const &);
	Prediction::Vector<Prediction::CFixPred,3> operator+<CFixPred,3>(Prediction::Vector<Prediction::CFixPred,3> const &,Prediction::Vector<Prediction::CFixPred,3> const &);
	__int64 DeltaOvershootCompensation(__int64,__int64);
};

namespace Protocols
{
	namespace SuperWetInk
	{
		long PenTypeFromInkFeedbackPenType(INK_FEEDBACK_PEN_TYPE,SuperWetInk::PenType *);
		long PopulatePayloadV1(INK_FEEDBACK_COMMAND,void const *,unsigned int,float,SuperWetInk::PayloadV1 *);
	};

};

struct QueryAdvanceWidthsRequest
{
	virtual FontDriverType GetDrvType();
	virtual bool Zombied();
	virtual long CreateUsermodeParameters(UmfdTls *,void * *);
	virtual unsigned __int64 Hff();
	virtual void CaptureUsermodeParameters(void *);
};

struct QueryFontDataRequest
{
	virtual FontDriverType GetDrvType();
	virtual bool Zombied();
	virtual long CreateUsermodeParameters(UmfdTls *,void * *);
	virtual unsigned __int64 Hff();
	virtual void CaptureUsermodeParameters(void *);
};

struct QueryFontFileRequest
{
	virtual FontDriverType GetDrvType();
	virtual bool Zombied();
	virtual long CreateUsermodeParameters(UmfdTls *,void * *);
	virtual unsigned __int64 Hff();
	virtual void CaptureUsermodeParameters(void *);
};

struct QueryFontRequest
{
	virtual FontDriverType GetDrvType();
	virtual bool Zombied();
	virtual long CreateUsermodeParameters(UmfdTls *,void * *);
	virtual unsigned __int64 Hff();
	virtual void CaptureUsermodeParameters(void *);
};

class QueryFontTreeRequest
{
	bool TryProbeAndReadUserModeGlyphSet(unsigned long *,unsigned long *);
	static bool TryGlyphSetHasSameContent(void *,void *,unsigned int);
	void CaptureGlyphSet();
	void CaptureKerningPairs();
public:
	virtual FontDriverType GetDrvType();
	virtual bool Zombied();
	virtual long CreateUsermodeParameters(UmfdTls *,void * *);
	virtual unsigned __int64 Hff();
	virtual void CaptureUsermodeParameters(void *);
};

struct QueryGlyphAttrsRequest
{
	virtual FontDriverType GetDrvType();
	virtual bool Zombied();
	virtual long CreateUsermodeParameters(UmfdTls *,void * *);
	virtual unsigned __int64 Hff();
	virtual void CaptureUsermodeParameters(void *);
};

struct QueryTrueTypeOutlineRequest
{
	virtual FontDriverType GetDrvType();
	virtual bool Zombied();
	virtual long CreateUsermodeParameters(UmfdTls *,void * *);
	virtual unsigned __int64 Hff();
	virtual void CaptureUsermodeParameters(void *);
};

struct QueryTrueTypeTableRequest
{
	virtual FontDriverType GetDrvType();
	virtual bool Zombied();
	virtual long CreateUsermodeParameters(UmfdTls *,void * *);
	virtual unsigned __int64 Hff();
	virtual void CaptureUsermodeParameters(void *);
};

class READER
{
protected:
	int bNextFigure();
	int bNextPoint(_POINTFIX &);
};

struct RECTANGLEPATHOBJ
{
	void vInit(_RECTL *,int);
};

struct REDIROPEN
{
	REDIROPEN(_SURFOBJ *);
};

struct REGION
{
	void vDeleteREGION();
};

struct RESETFCOBJ
{
	RESETFCOBJ(DCOBJ &,RFONTOBJ &,_MAT2 *,int,unsigned long);
};

struct RESTORESAVEDCATTRS
{
	void vDone();
};

class RFONTOBJ
{
	struct AddressMap
	{
		static int Compare(void const *,void const *);
	};

	PFE * GetEUDCDefaultFontPFE(unsigned int);
	int bMatchRealization(_FD_XFORM *,unsigned long,unsigned long,EXFORMOBJ *,PFE *,int,int,int,unsigned long);
	void AddUFIToBuffer(PFE *,_UNIVERSAL_FONT_ID * &,int &,int);
	void UpdateFontLinksLockOrder();
public:
	GPRUN * gprunFindRun(unsigned short);
	_GLYPHDATA * FindLinkedGlyphDataPlus(XDCOBJ *,ESTROBJ *,unsigned short,unsigned long,unsigned long,int *,int,int);
	_GLYPHDATA * pgdDefault();
	_GLYPHDATA * pgdGetEudcMetrics(unsigned short,RFONTOBJ *);
	_GLYPHDATA * pgdGetEudcMetricsPlus(unsigned short,RFONTOBJ *);
	_GLYPHDATA * wpgdGetLinkMetricsPlus(XDCOBJ *,ESTROBJ *,unsigned short *,unsigned short *,unsigned long,int *,int);
	char * pchTranslate(char *);
	char * pchTranslateUMPD(char *,void * *);
	int GetLinkedFontUFIs(XDCOBJ &,_UNIVERSAL_FONT_ID *,int);
	int GetRealizationInfo(tagFONT_REALIZATION_INFO2 *);
	int bAllocateCache(RFONTOBJ *);
	int bCalcEscapementP(EXFORMOBJ &,long);
	int bCalcLayoutUnits(XDCOBJ *);
	int bCheckEudcFontCaps(IFIOBJ &);
	int bCheckMetricsCache();
	int bFindRFONT(_FD_XFORM *,unsigned long,unsigned long,PDEVOBJ &,EXFORMOBJ *,PFE *,int,int,int,unsigned long);
	int bGetDEVICEMETRICS(_FD_DEVICEMETRICS *);
	int bGetGlyphMetrics(unsigned long,_GLYPHPOS *,unsigned short *,XDCOBJ *,ESTROBJ *);
	int bGetGlyphMetricsPlus(unsigned long,_GLYPHPOS *,unsigned short *,int *,XDCOBJ *,ESTROBJ *);
	int bGetWidthData(_WIDTHDATA *,XDCOBJ &);
	int bGetWidthTable(XDCOBJ &,unsigned long,unsigned short *,unsigned long,unsigned short *);
	int bInit(XDCOBJ &,int,unsigned long);
	int bInitCache(unsigned long);
	int bInitSystemTT(XDCOBJ &);
	int bInsertGlyphbits(_GLYPHDATA *,unsigned long);
	int bInsertGlyphbitsLookaside(_GLYPHPOS *,unsigned long);
	int bInsertGlyphbitsPath(_GLYPHDATA *,unsigned long);
	int bInsertMetrics(_GLYPHDATA * *,unsigned short);
	int bInsertMetricsPlus(_GLYPHDATA * *,unsigned short);
	int bInsertMetricsPlusPath(_GLYPHDATA * *,unsigned short);
	int bInsertPathLookaside(_GLYPHPOS *);
	int bIsLinkedGlyph(unsigned short);
	int bMakeInactiveHelper(RFONT * *);
	int bRealizeFont(XDCOBJ *,PDEVOBJ *,tagENUMLOGFONTEXDVW *,PFE *,_FD_XFORM *,_POINTL * const,unsigned long,unsigned long,int,int,unsigned long);
	int bSetNewFDX(XDCOBJ &,_FD_XFORM &,unsigned long);
	int bTextExtent(XDCOBJ &,unsigned short *,int,long,long,long,long,unsigned int,tagSIZE *);
	long lOverhang();
	static unsigned char const (* gTables)[256];
	static unsigned char const * SelectStorageTable(RFONT *,unsigned char const *,unsigned char const *);
	unsigned char * pjTable(unsigned long,unsigned long *);
	unsigned long cGetGlyphDataCache(unsigned long,_GLYPHPOS *);
	unsigned long chglyGetAllHandles(unsigned long *);
	unsigned long ulSimpleOrientation(XDCOBJ *);
	void * pgbCheckGlyphCache(unsigned __int64);
	void * pvFile(unsigned long *);
	void * pvFileUMPD(unsigned long *,void * *);
	void ComputeEUDCLogfont(_EUDCLOGFONT *,XDCOBJ &);
	void PostTextOut(XDCOBJ &);
	void PreTextOut(XDCOBJ &);
	void dtHelper(int);
	void vDeleteCache();
	void vDeleteRFONT(PDEVOBJ *,PFFOBJ *,int);
	void vDestroyFont(int);
	void vFixUpGlyphIndices(unsigned short *,unsigned int);
	void vFlushCache();
	void vGetInfo(_FONTINFO *);
	void vInit(XDCOBJ &,PFE *,_EUDCLOGFONT *,int);
	void vInitEUDC(XDCOBJ &);
	void vInitEUDCRemote(XDCOBJ &);
	void vInsert(RFONT * *,_RFL_TYPE);
	void vMakeInactive();
	void vReleaseCache();
	void vRemove(RFONT * *,_RFL_TYPE);
	void vSetNotionalToDevice(EXFORMOBJ &);
	void vXlatGlyphArray(unsigned short *,unsigned int,unsigned long *,unsigned long,int);
	~RFONTOBJ();
};

struct RFONTTMPOBJ
{
	RFONTTMPOBJ(RFONT *);
	~RFONTTMPOBJ();
};

struct RGNMEMOBJ
{
	int bMergeScanline(STACKOBJ &);
};

struct RGNMEMOBJTMP
{
	RGNMEMOBJTMP();
	RGNMEMOBJTMP(EPATHOBJ &,unsigned long,_RECTL *);
	RGNMEMOBJTMP(int);
	~RGNMEMOBJTMP();
};

struct RGNMEMOBJTMPIFNEEDED
{
	RGNMEMOBJTMPIFNEEDED(EPATHOBJ &,PRECOMPUTETYPE,unsigned long,_RECTL *);
	~RGNMEMOBJTMPIFNEEDED();
};

struct RGNOBJ
{
	HRGN__ * hrgnAssociate();
	int bContain(_RECTL &);
	int bSubtractComplex(_RECTL *,_RECTL *,int);
	long iComplexity();
	void vComputeUncoveredSpriteRegion(PDEVOBJ &);
};

struct RGNOBJAPI
{
	int bSubtract(_RECTL *,_RECTL *,int);
	~RGNOBJAPI();
};

struct RIMLOCKExclusiveIfNeeded
{
	RIMLOCKExclusiveIfNeeded(RIMLOCK *);
	~RIMLOCKExclusiveIfNeeded();
};

class RTP_PATHMEMOBJ
{
	int bDiagonalizeSubPath();
	int bFetchNextPoint();
	int bWritePoint();
public:
	int bDiagonalizePath(EPATHOBJ *);
};

struct ReEnterLeaveCrit
{
	ReEnterLeaveCrit();
};

struct ReleaseAndReacquirePerObjectLocks
{
	ReleaseAndReacquirePerObjectLocks();
	~ReleaseAndReacquirePerObjectLocks();
};

namespace Rim
{
	struct RimBackedDeviceBase
	{
		long SendSynchronousIoControl(unsigned long,void *,unsigned long,void *,unsigned long,unsigned long *);
		virtual long Initialize(RawInputManagerDeviceObject *);
		virtual void OnDeviceClosed();
		virtual void OnDeviceOpened();
		virtual void UnInitialize();
	};

};

struct SEMOBJ
{
	void vUnlock();
};

struct SEMOBJEX
{
	SEMOBJEX(HSEMAPHORE__ *,unsigned long,HSEMAPHORE__ *,unsigned long,HSEMAPHORE__ *,unsigned long,HSEMAPHORE__ *,unsigned long,HSEMAPHORE__ *,unsigned long,HSEMAPHORE__ *,unsigned long,HSEMAPHORE__ *,unsigned long,HSEMAPHORE__ *,unsigned long);
	~SEMOBJEX();
};

struct SEMOBJEXORSHARED
{
	SEMOBJEXORSHARED(HSEMAPHORE__ *,int);
	~SEMOBJEXORSHARED();
};

struct SEMOBJSHARED
{
	SEMOBJSHARED(HSEMAPHORE__ *);
	~SEMOBJSHARED();
};

struct SEMOBJSHAREDSTARVEEX
{
	~SEMOBJSHAREDSTARVEEX();
};

struct SFMLOGICALSURFACE
{
	SURFACE * OwnsSurfaceCleanup(HLSURF__ *,int);
	_LUID AdapterLuid();
	int Initialize(HWND__ *,unsigned int,unsigned int,_LUID,_HLSURF_DISPOSITION);
	int SetShape(HDEV__ *,_SURFOBJ *);
	int bDeviceBitmap();
	long GetSoSurfaceData(tagDWMSURFACEDATA *);
	long SignalOnDirty(int);
	long StopSfmStateTracking(HDEV__ *,SfmState *);
	static HLSURF__ * CreateHLSURFClone(HDEV__ *,SFMLOGICALSURFACE *,int,int,int);
	unsigned int uiDxPresentFlags();
	void CleanupRegions();
	void CleanupShape(SURFACE *);
	void DeInitialize(HLSURF__ *,_CLEANUPTYPE);
	void GetRedirectionInfo(_HLSURF_REDIRECTIONSTYLE *,unsigned long *,unsigned long *,void * *,_LUID *);
	void StartSfmStateTracking(HDEV__ *,SfmState *,int);
};

class SFMLOGICALSURFACEREF
{
	void LockLogicalSurfaceObj(HLSURF__ *);
public:
	SFMLOGICALSURFACEREF(SFMLOGICALSURFACE *);
	~SFMLOGICALSURFACEREF();
};

struct SINGLEREADERLOCK
{
	void vLock();
	void vUnlock();
};

struct SPRITEDDIACCESS
{
	SPRITEDDIACCESS(PDEVOBJ &);
	~SPRITEDDIACCESS();
};

struct SPRITERANGELOCK
{
	void vLockExclusive();
	void vLockShared();
	void vUnlock();
};

struct STACKMEMOBJ
{
	STACKMEMOBJ(unsigned long,unsigned long,long,long,long);
	~STACKMEMOBJ();
};

struct STACKOBJ
{
	int bExpand(unsigned long);
	int bExpandScanline(unsigned long,unsigned long);
	int bPushMergeScrScan();
};

class STYLER
{
protected:
	EFLOAT efNextStyleLength();
	EFLOAT efWorldLength(EVECTORFX);
public:
	STYLER(EPATHOBJ &,_LINEATTRS *);
};

struct SURFACE
{
	int (*pfnBitBlt())(_SURFOBJ *,_SURFOBJ *,_SURFOBJ *,_CLIPOBJ *,_XLATEOBJ *,_RECTL *,_POINTL *,_POINTL *,_BRUSHOBJ *,_POINTL *,unsigned long);
	int (*pfnTextOut())(_SURFOBJ *,_STROBJ *,_FONTOBJ *,_CLIPOBJ *,_RECTL *,_RECTL *,_BRUSHOBJ *,_BRUSHOBJ *,_POINTL *,unsigned long);
	int bDIBSection();
	int bRedirHooked();
	int bRedirectionBitmap();
	int bStockSurface();
	void pdcoAA(XDCOBJ *);
	void vAppContainerOwner(_EPROCESS *);
	void vDec_cRef();
};

struct SURFREF
{
	~SURFREF();
};

namespace ShellWindowManagementProperty
{
	ShellWindowManagementProperty::tagSHELLWINDOWMANAGEMENTPROP * GetShellWndManagementProperty(tagWND *,int);
};

class SimpleHapticsController
{
protected:
	long CloseHapticsWriteDevice(int);
	long InitializeSupportedWaveformList();
	long IntializePreparssedData();
	long OpenHapticsDevice();
	long UpdateWaveformInfoList(unsigned short,unsigned short);
	static long HapticsDeviceNotify(_PLUGPLAY_NOTIFY_HDR *,void *);
public:
	long DeInitialize();
	long Initialize(_UNICODE_STRING *);
	long SendDeviceIOControl(unsigned long,void *,unsigned long,void *,unsigned long,unsigned long *);
	long SendHapticFeedbackOutput(_SIMPLEHAPTICCTRL_FEEDBACK_DATA const &);
	long SetAutoTriggerWaveform(unsigned short);
	long SetDevicePropertyData(_DEVPROPKEY const *,unsigned long,unsigned long,unsigned long,unsigned long,void *);
};

struct SmartObjStackRef<tagPOPUPMENU>
{
	SmartObjStackRef<tagPOPUPMENU>();
	SmartObjStackRef<tagPOPUPMENU>(SmartObjStackRef<tagPOPUPMENU> const &);
	SmartObjStackRef<tagPOPUPMENU>(tagPOPUPMENU *);
	~SmartObjStackRef<tagPOPUPMENU>();
};

class SmartObjStackRefBase<tagPOPUPMENU>
{
	void Init(tagPOPUPMENU *);
protected:
	SmartObjStackRefBase<tagPOPUPMENU> & operator=(tagPOPUPMENU * const);
};

class THREAD_GUARDED_EPATHOBJ
{
	static void vThreadCleanup(EPATHOBJ *);
};

struct TRACKOBJ
{
	void vUpdateDrvDelta(EWNDOBJ *,unsigned long);
};

struct TrueTypeFreeGlyphsetRequest
{
	virtual FontDriverType GetDrvType();
	virtual bool Zombied();
	virtual long CreateUsermodeParameters(UmfdTls *,void * *);
	virtual unsigned __int64 Hff();
	virtual void CaptureUsermodeParameters(void *);
};

class UMPDOBJ
{
	_UMPDHEAP * CreateUMPDHeap();
	int GrowUMPDHeap(_UMPDHEAP *,unsigned long);
	int ThunkDDIOBJ(_DDIOBJMAP *,void * *,unsigned long);
	int pso(_DDIOBJMAP *,_SURFOBJ * *,int);
	void * _AllocUserMem(unsigned long,int);
public:
	_BLENDOBJ * GetDDIOBJ<_BLENDOBJ>(_BLENDOBJ *);
	_BRUSHOBJ * GetDDIOBJ<_BRUSHOBJ>(_BRUSHOBJ *);
	_CLIPOBJ * CreateCLIPOBJ();
	_CLIPOBJ * GetDDIOBJ(_CLIPOBJ *,tagSIZE *);
	_CLIPOBJ * GetDDIOBJ<_CLIPOBJ>(_CLIPOBJ *);
	_FONTOBJ * GetDDIOBJ<_FONTOBJ>(_FONTOBJ *);
	_GLYPHBITS * CacheGlyphBits(_GLYPHBITS *);
	_PATHOBJ * CacheGlyphPath(_PATHOBJ *);
	_PATHOBJ * GetCLIPOBJPath(_CLIPOBJ *);
	_PATHOBJ * GetDDIOBJ<_PATHOBJ>(_PATHOBJ *);
	_STROBJ * GetDDIOBJ<_STROBJ>(_STROBJ *);
	_SURFOBJ * LockSurface(HSURF__ *);
	_XFORMOBJ * GetDDIOBJ<_XFORMOBJ>(_XFORMOBJ *);
	_XFORMOBJ * GetFONTOBJXform(_FONTOBJ *);
	_XLATEOBJ * GetDDIOBJ<_XLATEOBJ>(_XLATEOBJ *);
	bool bTryAcquireExclussiveAccess();
	int ThunkLINEATTRS(_LINEATTRS * *);
	int ThunkMemBlock(void * *,unsigned long);
	int ThunkStringW(unsigned short * *);
	int bAllocFontLinks(unsigned int);
	int bCleanupWorker();
	int bDeleteLargeBitmaps(_SURFOBJ *,_SURFOBJ *,_SURFOBJ *);
	int bInit();
	int bNeedThunk(void *);
	int bSandboxedClient();
	int bSendLargeBitmap(_SURFOBJ *,int *);
	int bThunkLargeBitmap(_SURFOBJ *,void * *,void * *,int *,int *,unsigned long *);
	int bThunkLargeBitmaps(_SURFOBJ *,_SURFOBJ *,_SURFOBJ *,void * *,void * *,void * *,void * *,void * *,void * *,int *,int *,int *,int *,int *,int *,unsigned long *);
	int pstro(_STROBJ * *);
	int pxlo(_XLATEOBJ * *);
	static UMPDOBJ * GetThreadCurrentObj(_W32THREAD *);
	static void vPushToCurrentThread(UMPDOBJ *);
	unsigned long Thunk(void *,unsigned long,void *,unsigned long);
	unsigned long ulGetMaxSize();
	void * GetKernelPtr(void *);
	void * UMPDAllocUserMem(unsigned long);
	void FreeNonCachedUserMem();
	void ResetHeap();
	void RestoreBitmaps(_SURFOBJ *,_SURFOBJ *,_SURFOBJ *,void *,void *,void *,void *,void *,void *,int,int,int,int,int,int);
	void UnlockSurface(_SURFOBJ *);
	void vClient(void *);
	void vServer(void *);
};

struct UMPDREF
{
	~UMPDREF();
};

struct UMPDReleaseAcquireRFONTSem
{
	UMPDReleaseAcquireRFONTSem(SURFACE *,_FONTOBJ *,int);
	~UMPDReleaseAcquireRFONTSem();
};

class UMPDSURFOBJ
{
	_SURFOBJ * GetLockedSURFOBJ(_SURFOBJ *);
public:
	UMPDSURFOBJ(_SURFOBJ *,UMPDOBJ *);
};

struct UNDODESKTOPCOORD
{
	UNDODESKTOPCOORD(EWNDOBJ *,_SPRITESTATE *);
	~UNDODESKTOPCOORD();
};

struct UNDOENGUPDATEDEVICESURFACE
{
	UNDOENGUPDATEDEVICESURFACE();
};

struct UNDORENDERLOCKCOUNTS
{
	UNDORENDERLOCKCOUNTS();
	~UNDORENDERLOCKCOUNTS();
};

struct UNDOW32THREADPIDLOCKS
{
	int bRedo();
	void vUndo();
};

struct UNDOWNDOBJSPRITEOVERLAPCLIP
{
	void vRedo();
	void vUndo();
};

class UmfdAllocation
{
	static NSInstrumentation::CPlatformReaderWriterLock * s_allocationLookupLock;
	static NSInstrumentation::CPointerHashTable * s_allocationLookup;
	static UmfdAllocation * _FindAndReferenceExistingKernelmodeAllocation(void *);
	static bool TryBufferHasSameContent(void *,void *,unsigned int);
	static bool _ValidateAllocationPair(FontDriverType,unsigned __int64,UmfdAllocation *,void *,unsigned int,bool (*)(void *,void *,unsigned int));
	static void _RemoveAllocationFromLookup(void *,void *,void *);
public:
	static bool Initialize();
	static bool UpdateKernelmodeAllocation(void *,void *);
	static void * ObtainKernelmodeAllocation(FontDriverType,unsigned __int64,void *,unsigned int,bool *,bool (*)(void *,void *,unsigned int));
	static void ReleaseKernelmodeAllocation(void *);
	static void Uninitialize();
};

struct UmfdFontCacheEntry
{
	static bool FntCacheAllocate(unsigned char *,unsigned int,unsigned int,FontDriverType);
};

class UmfdHostLifeTimeManager
{
	struct AutoAttachFonDrvProcess
	{
		AutoAttachFonDrvProcess();
		bool Attach(bool,unsigned __int64);
		~AutoAttachFonDrvProcess();
	};

	struct UmfdHostSharedReadyLock
	{
		~UmfdHostSharedReadyLock();
	};

	static _EPROCESS * s_UmfdHostProcess;
	static _ETHREAD * s_CsrssAddInitialFontsThread;
	static _ETHREAD * s_UmfdHostResurrectionThread;
	static _EX_PUSH_LOCK s_LaunchLock;
	static _EX_PUSH_LOCK s_ReadyLock;
	static _KEVENT * s_InitialFontsAddedEvent;
	static _KEVENT * s_SessionRasterizerInitializedEvent;
	static _KEVENT * s_SessionRasterizerOnHostReadyEvent;
	static _KEVENT * s_WinlogonCallbackEvent;
	static bool SessionInitialize();
	static bool TryResurrectHff(unsigned __int64,PFF *);
	static bool TryResurrectUmfdAllocations(unsigned __int64,PFF *);
	static bool s_Launched;
	static bool s_Ready;
	static bool s_SessionRasterizerInitialized;
	static unsigned __int64 s_UmfdHostGenerationId;
	static void ReleaseUmfdFileviewWithNoLock();
	static void TryResurrectPffApcKernelRoutine(_KAPC *,void (**)(void *,void *,void *),void * *,void * *,void * *);
	static void TryResurrectPffApcRoutine(void *,void *,void *);
	static void TryResurrectPffApcRunDownRoutine(_KAPC *);
	static void UnreferenceUmfdHostWithNoLock();
public:
	static bool AddInitialFonts();
	static bool EnsureUmfdHost();
	static bool IsCurrentProcessUmfdHost();
	static bool IsCurrentProcessUmfdHostNoLock();
	static int InitializeUmfdAndRegisterHost(void *);
	static long MmMapViewOfSection(void *,void * *,unsigned __int64,unsigned __int64,_LARGE_INTEGER *,unsigned __int64 *,_SECTION_INHERIT,unsigned long,unsigned long,unsigned __int64 *);
	static long MmUnmapViewOfSection(void *,unsigned __int64);
	static long WaitForSessionRasterizerInitialization();
	static unsigned int const TimeoutMS;
	static void * TerminateUmfdHostRetainHandle();
	static void OnHostReady();
	static void QueueTryResurrectPffApc(unsigned __int64);
	static void TerminateUmfdHost(bool);
	static void UninitializeProcess();
	static void UninitializeThread();
};

class UmfdTls
{
	static UmfdTls * Create();
	static void Destroy(UmfdTls *);
public:
	static UmfdTls * EnsureTls();
	static bool TryComputeAlignedFieldSizes(unsigned int,unsigned int *,unsigned int,unsigned int *,unsigned int,unsigned int *,unsigned int,unsigned int *);
	void * CommitUMBuffer(unsigned long,bool);
};

class UmfdUMBuffer
{
	bool AllocTemporaryBuffer(unsigned long);
	static bool AlignSizeTo(unsigned long,unsigned long,unsigned long *);
public:
	static UmfdUMBuffer * Create();
	static void Destroy(UmfdUMBuffer *);
};

struct UnloadFontFileRequest
{
	virtual FontDriverType GetDrvType();
	virtual bool Zombied();
	virtual long CreateUsermodeParameters(UmfdTls *,void * *);
	virtual unsigned __int64 Hff();
	virtual void CaptureUsermodeParameters(void *);
};

struct UserAtomicCheck
{
	UserAtomicCheck();
	void Detach();
	~UserAtomicCheck();
};

class WIDENER
{
	void vVecDrawCompute(LINEDATA &);
	void vVecPerpCompute(LINEDATA &);
	void vVecSquareCompute(LINEDATA &);
protected:
	EVECTORFX vecInDraw();
	EVECTORFX vecInPerp();
	EVECTORFX vecOutDraw();
	EVECTORFX vecOutPerp();
	int bMiterInLimit(EVECTORFX);
	int bWiden();
	void vAddEndCap();
	void vAddJoin(int);
	void vAddLeft(EVECTORFX &,int);
	void vAddLeftNice(EVECTORFX *,int);
	void vAddRoundJoin(int);
	void vAddStartCap();
public:
	WIDENER(EPATHOBJ &,EXFORMOBJ &,_LINEATTRS *);
	int bValid();
	void vMakeItWide(EPATHOBJ &);
};

class WIDEPATHOBJ
{
protected:
	int bGrowPath();
	void vGrowPathAndAddPoint(_POINTFIX *,EVECTORFX *,int);
public:
	int bBeginFigure();
	int bValid();
	void vAddPoint(_POINTFIX *,EVECTORFX *,int);
	void vAddPoint(_POINTFIX *,int);
	void vEndFigure();
	void vPrependBeforeFigure();
	void vPrependBeforeSubpath();
	void vReverseConcatenate(WIDEPATHOBJ &);
};

class WIDEPENOBJ
{
	int bHobbyize(EVECTORFX * const);
	int bPenFlatten(_POINTFIX *);
	int bThicken(_POINTFIX *);
	static _HOBBY * ahob;
	static _POINTFIX * aptfxHobby1;
	static _POINTFIX * aptfxHobby2;
	static _POINTFIX * aptfxHobby3;
	static _POINTFIX * aptfxHobby4;
	static _POINTFIX * aptfxHobby5;
	static _POINTFIX * aptfxHobby6;
public:
	int bPolygonizePen(EXFORMOBJ &,long);
	unsigned long cptAddRound(WIDENER &,LINEDATA &,LINEDATA &,int,int,int);
	void vAddRoundEndCap(WIDENER &,LINEDATA &,int,int);
	void vDetermineDrawVertex(EVECTORFX &,LINEDATA &);
};

struct WO_CLEANUP
{
	~WO_CLEANUP();
};

namespace WindowArrangementSequence
{
	int fWindowArrangementSequenceInProgress;
	void TestHotKey(tagHOTKEY const * const);
	void TestSequence(tagHOTKEY const * const,unsigned int,unsigned int,unsigned int,int);
};

class XCLIPOBJ
{
protected:
	int bFindFirstScan();
	int bFindFirstSegment();
	int bFindNextScan();
	int bFindNextSegment();
	int bGetLine(EPATHOBJ *,unsigned long *);
	int bGetMorePoints(EPATHOBJ *,unsigned long *);
	int bIntersectWall(long,_POINTL *,_POINTL *,long *);
	int bRecordRun(long &);
	int bSetup();
	void vIntersectScan(long,_POINTL *,_POINTL *,long *);
public:
	_PATHOBJ * ppoGetPath();
	int bEnum(unsigned long,void *,unsigned long *);
	int bEnumLine(unsigned long,_CLIPLINE *);
	int bEnumPath(_PATHOBJ *,unsigned long,_CLIPLINE *,int);
	int bEnumStartLine(unsigned long);
	unsigned long cEnumStart(int,unsigned long,unsigned long,unsigned long);
	void vEnumPathStart(_PATHOBJ *,SURFACE *,_LINEATTRS *);
	void vFindScan(_RECTL *,long);
	void vFindSegment(_RECTL *,long,long);
	void vUpdateStyleState();
};

class XDCOBJ
{
	int bSaveAttributes();
	void RestoreAttributes();
	void vRestoreAttributesAlways();
	void vSaveAttributesAlways();
public:
	REGION * prgnEffRao();
	SURFACE * pSurfaceEff();
	int bAddColorTransform(void *);
	int bAddRemoteFont(PFF *);
	int bFullScreen();
	int bModifyWorldTransform(_XFORML const *,unsigned long);
	int bRedirHooked();
	int bRemoveColorTransform(void *);
	int bRemoveMergeFont(_UNIVERSAL_FONT_ID);
	int bSetLinkedUFIs(_UNIVERSAL_FONT_ID *,unsigned int);
	int bSupportsJPEG();
	int bSupportsPassthroughImage(unsigned long);
	int bValidSurf();
	int ipfdDevMax();
	long ipfdDevMaxGet();
	void vAccumulate(ECLIPOBJ *,ERECTL &);
	void vAccumulate(ERECTL &);
	void vAccumulateTight(ECLIPOBJ *,ERECTL &);
	void vAccumulateTight(ERECTL &);
	void vAltUnlockFast();
	void vLock(HDC__ *);
	void vUnlockFast();
};

class XEBRUSHOBJ
{
protected:
	int bSaveAttributes();
	void RestoreAttributes();
};

struct XEPALOBJ
{
	int bEqualEntries(XEPALOBJ);
	int bGenColorXlate555();
	int bIsMonochrome();
	int bSwap(PALETTE * *,unsigned long,unsigned long);
	unsigned char * pGetRGBXlate();
	unsigned long ulAnimatePalette(unsigned long,unsigned long,tagPALETTEENTRY const *);
	unsigned long ulGetEntries(unsigned long,unsigned long,tagPALETTEENTRY *,int);
	unsigned long ulSetEntries(unsigned long,unsigned long,tagPALETTEENTRY const *);
	unsigned long ulTime();
	void CorrectColors(tagPALETTEENTRY *,unsigned long);
	void apalColorSet(PALETTE *);
	void vCopy_cmykquad(unsigned long *,unsigned long,unsigned long);
	void vCopy_rgbquad(tagRGBQUAD *,unsigned long,unsigned long);
	void vFill_rgbquads(tagRGBQUAD *,unsigned long,unsigned long);
	void vFill_triples(tagRGBTRIPLE *,unsigned long,unsigned long);
	void vGetEntriesFrom(XEPALOBJ,XEPALOBJ,unsigned short *,unsigned long);
	void vInit256Default();
	void vInit256Rainbow();
};

struct XEPATHOBJ
{
	XEPATHOBJ(HPATH__ *);
	XEPATHOBJ(XDCOBJ &);
	~XEPATHOBJ();
};

struct XFERDCOBJ
{
	static int bPrepareDCForXfer(HDC__ *,unsigned long);
	static void ThreadCleanup(void *);
};

struct XLATE
{
	unsigned long (*pfnXlateBetweenBitfields())(_XLATEOBJ *,unsigned long);
	void vCheckForICM(void *,unsigned long);
	void vCheckForTrivial();
	void vMapNewXlate(_TRANSLATE *);
};

struct XLATEMEMOBJ
{
	XLATEMEMOBJ(XEPALOBJ,XEPALOBJ);
};

struct XUMPDOBJ
{
	XUMPDOBJ();
	~XUMPDOBJ();
};

BITMAPV5HEADER * DIBtoDIBV5(tagBITMAPINFOHEADER *,unsigned long);
BltBitsResult zzzBltValidBits(tagSMWP *);
DHPDEV__ * PanEnablePDEV(_devicemodeW *,unsigned short *,unsigned long,HSURF__ * *,unsigned long,unsigned long *,unsigned long,tagDEVINFO *,HDEV__ *,unsigned short *,void *);
DHPDEV__ * UMPDDrvEnablePDEV(_devicemodeW *,unsigned short *,unsigned long,HSURF__ * *,unsigned long,unsigned long *,unsigned long,tagDEVINFO *,HDEV__ *,unsigned short *,void *);
DIT_INFO gMitInfo;
EFLOAT efHalfDiff(long,long);
HBITMAP__ * CreateScaledWindowShadowFromDIB(tagWND *,HDC__ *,long);
HBITMAP__ * CreateScreenBitmap(int,int,unsigned int);
HBITMAP__ * GenerateWindowShadow(tagWND *,HDC__ *);
HBITMAP__ * MulCreateDeviceBitmap(DHPDEV__ *,tagSIZE,unsigned long);
HBITMAP__ * MulCreateDeviceBitmapEx(DHPDEV__ *,tagSIZE,unsigned long,unsigned long,DHSURF__ *,unsigned long,unsigned long,void * *);
HBITMAP__ * ProcessAlphaBitmap(HBITMAP__ *);
HBITMAP__ * UMPDDrvCreateDeviceBitmap(DHPDEV__ *,tagSIZE,unsigned long);
HBITMAP__ * xxxDIBtoBMP(tagBITMAPINFOHEADER *,HPALETTE__ *,unsigned long);
HBRUSH__ * hCreateHatchBrushInternal(unsigned long,unsigned long,int);
HBRUSH__ * xxxGetColorObjects(tagWND *,HDC__ *);
HDC__ * CreateFadeInternal(tagWND *,tagRECT *,unsigned long,unsigned long,unsigned long);
HDC__ * GetTooltipDC(tagTOOLTIPWND *,tagMONITOR *);
HDEV__ * hdevFindDeviceHdev(HDEV__ *,_RECTL,EWNDOBJ *);
HICON__ * xxxDWP_SetIcon(tagWND *,unsigned __int64,HICON__ *);
HLSURF__ * hlsurfCreateLogicalSurfaceObject(HDEV__ * const,unsigned long,_CD_HLSURF_CREATIONCONTEXT *);
HRGN__ * GetMonitorRegionForDpi(tagMONITOR *,unsigned short);
HRGN__ * GetNCUpdateRgn(tagWND *,int);
HRGN__ * TransformRgn(HRGN__ *,tagXFORM *);
HSEMAPHORE__ * ghsemEUDC1;
HSEMAPHORE__ * ghsemEUDC2;
HSEMAPHORE__ * ghsemEnableEUDC;
HSPRITE__ * hspCreateDwmSpriteObj(HWND__ *,unsigned __int64,HDEV__ *,int);
HSPRITE__ * hspGetNeighborSprite(HSPRITE__ *,bool,bool);
HSURF__ * PanEnableSurface(DHPDEV__ *);
HSURF__ * UMPDDrvEnableSurface(DHPDEV__ *);
HSURF__ * hsurfSpCreateSurface(HDEV__ *,tagSIZE *);
HTOUCHINPUT__ * AllocTouchInputInfo(tagTHREADINFO *,unsigned int,tagTOUCHINPUT const *,unsigned int,unsigned long *);
HTOUCHINPUT__ * CreateValidTouchInputInfo(tagTHREADINFO *,unsigned int,unsigned int,tagTOUCHINPUT * const);
HWND__ * * NextPrevPhwnd(tagSwitchWndInfo *,HWND__ * *,int);
HWND__ * ghwndSoundSentry;
HWND__ * xxxDCEWindowHitTest2Internal(tagWND *,tagPOINT,tagDCE_WINDOW_HIT_TEST_ARGS *);
HWND__ * xxxMoveSwitchWndHilite(tagWND *,tagSwitchWndInfo *,int);
HWND__ * xxxTargetingHitTest(tagWND *,tagPOINT,tagPNTRWINDOWHITTTESTARGS *,int *,tagRECT,unsigned long,tagTARGETING_PROPERTY);
HWND__ * xxxWindowHitTestFromTargetingProperty(tagWND *,tagPOINT,tagPNTRWINDOWHITTTESTARGS *,int *,tagTARGETING_PROPERTY,tagRECT);
HWND__ * xxxWindowHitTestWithTargeting(tagWND *,tagPOINT,tagPNTRWINDOWHITTTESTARGS *,tagRECT,tagTARGETING_PROPERTY);
HWND__ * xxxWindowHitTestWithoutTargeting(tagTHREADINFO *,tagWND *,unsigned int,unsigned __int64,__int64,tagPOINT,int *,unsigned long,tagPOINTEREVENTINT const *,tagPOINT *);
INERTIA_INFO_INTERNAL gInertiaInfo;
INERTIA_MT_INFO gInertiaMTInfo;
KeyboardInputTelemetry gKeyboardInputTelemetry;
LA glaSimpleStroke;
LINKWINDOW_LOG * gpLinkWindowLog;
LONG_FLOAT * galeCosmeticDash;
LONG_FLOAT * galeCosmeticDashDot;
LONG_FLOAT * galeCosmeticDashDotDot;
LONG_FLOAT * galeCosmeticDot;
MILCMD_DWM_REDIRECTION_UPDATESPRITE * g_rgDelayedUpdateSpriteNotifications;
NSInstrumentation::CLeakTrackingAllocator * gpLeakTrackingAllocator;
NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *> * UmfdFileviewLookup;
PALETTE * DrvRealizeHalftonePalette(HDEV__ *,int);
PALETTE * ppalGetFromXlate(SURFACE *,SURFACE *,XLATE *,unsigned int,int);
PDEV * * gaFntPDev;
PDEV * gpBmpDev;
PDEV * gpRedirDev;
PFE * * gappfeSysEUDC;
PFE * * gappfeSystemDBCS;
PFE * gppfeMapperDefault;
PFE * ppfeFromUFI(_UNIVERSAL_FONT_ID *);
PFE * ppfeGetAMatch(XDCOBJ &,tagENUMLOGFONTEXDVW *,unsigned short const *,unsigned long,unsigned long,unsigned long *,_POINTL *,unsigned long *,int);
PFE * ppfeGetPFEFromUFI(_UNIVERSAL_FONT_ID *,int,int);
PFE * ppfeGetPFEFromUFIInternal(_UNIVERSAL_FONT_ID *,int,int);
PFF * GetPFFFromId(PFT *,unsigned int,PFF * * *);
PFT * gpPFTDevice;
PFT * gpPFTPublic;
PFT * pAllocateAndInitializePFT(unsigned int);
POWER_MONITOR_REQUEST_REASON MapInputToMonitorOnReason(_LINP_SOURCE);
PROCESS_DPI_AWARENESS gpdaHDCBITSCreation;
PTI_LIST * InAffectedThreadList(tagTHREADINFO const *);
QueueCompletionStatus xxxHandleQueueCompletion(tagTHREADINFO *,long,_FILE_IO_COMPLETION_INFORMATION * const,tagQUEUE_COMPLETION_DRAINER);
RAW_INPUT_PROCESSING_RESULT HandleRawInput(void *,_KEYBOARD_INPUT_DATA *,RAW_INPUT_SUPPLEMENTAL_INFO const *);
RECORDER_LOG__ * gFullLog;
SHELL_ARRANGEMENT_TYPE GetShellArrangedWindowType(_MOVESIZEDATA const * const,unsigned long);
SPRITE * pSpConvertSpriteFromMeta(HDEV__ *,HDEV__ *,_METASPRITE *);
SPRITE * pSpCreateSprite(HDEV__ *,_RECTL *,HWND__ *,_POINTL *);
SPRITE * pSpFindInZ(SPRITE *,_RECTL *);
SPRITE * pSpFindInZForPidLock(SPRITE *,_RECTL *);
SPRITE * pSpGetSprite(_SPRITESTATE *,HWND__ *,void *);
SPRITE * pSpGetSpriteDelayDelete(_SPRITESTATE *,HWND__ *,void *);
SPRITE * pSpMoveSpriteFromMeta(HDEV__ *,HDEV__ *,_METASPRITE *,unsigned long);
SPRITE * pSpReverseFindInZForPidLock(SPRITE *,_RECTL *);
SPRITE * pSpTransferSprite(HDEV__ *,SPRITE *);
SURFACE * psSetupDstSurface(SURFACE *,_RECTL *,SURFMEM &,int,int);
SURFACE * psSetupTransparentSrcSurface(SURFACE *,SURFACE *,_RECTL *,_XLATEOBJ *,_RECTL *,SURFMEM &,unsigned long,unsigned long);
SURFACE::SurfaceMapStatus vSpPIDLockSpriteArea(_SPRITESTATE *,_RECTL *,void *);
TIMER_DELIVERY_DISTRIBUTION (* gaTimerDeliveryDistribution)[8];
TRACKOBJ * gpto;
XLATE * CreateXlateObject(void *,long,XEPALOBJ,XEPALOBJ,XEPALOBJ,XEPALOBJ,unsigned long,unsigned long,unsigned long,unsigned long);
XLATE * pCreateXlate(unsigned long);
_BMINFO * gabminfo;
_BRUSHOBJ * CaptureAndFakeBRUSHOBJ(_BRUSHOBJ *,_BRUSHOBJ *);
_CACHEDMOVEPOINTERSTATE gCachedMovePointerState;
_CACHEDSETPOINTERSTATE gCachedSetPointerState;
_CHSET_SCRIPT * aScripts;
_CLIPILDEF * gaClipILDef;
_CLIPOBJ * CaptureAndMungeCLIPOBJ(_CLIPOBJ *,_CLIPOBJ *,tagSIZE *);
_CommitMousePosAndMoveResult xxxMoveEventAbsolute(long,long,unsigned __int64,void *,_MOUSE_INPUT_DATA *,unsigned __int64,unsigned __int64,int,int,int);
_DRVFN * UmfdDDIs;
_DRVFN * drvfnMulti;
_DRVFN * gadrvfnPanning;
_ENUMFONTSTYLE efstyCompute(int *,PFEOBJ &);
_EX_PUSH_LOCK UmfdFileViewPushLock;
_EX_PUSH_LOCK UmfdWinLogonRequestLock;
_EX_PUSH_LOCK nineGridPushLock;
_FAST_MUTEX * gMediaChangeMutex;
_FD_GLYPHSET * ProbeAndReadFD_GLYPHSET(_FD_GLYPHSET const *,int,unsigned long,__int64);
_FD_KERNINGPAIR * ProbeAndReadFD_KERNINGPAIR(_FD_KERNINGPAIR const *,int,unsigned __int64);
_FD_KERNINGPAIR gkpNothing;
_FILE_OBJECT * G_SaveRemoteConnectionFileObject;
_FILE_OBJECT * G_SaveRemoteVideoFileObject;
_FLENTRY * FindBaseFontEntry(unsigned short const *);
_FONTMAPPERFAMILYFALLBACK * gpfmffTable;
_FONTSUB * gpfsTable;
_FONTSUB * pfsubAlternateFacename(unsigned short const *);
_FONTVICTIM * gFntVict;
_FONT_ASSOC_SUB * pFontAssocSubs;
_FONT_DEFAULTASSOC * FontAssocDefaultTable;
_GUID ProcessGetAppSessionGuid(tagPROCESSINFO *);
_GUID gLastForegroundAppSessionGuid;
_GUID gLastTargetAppSessionGuid;
_IFIMETRICS * ProbeAndReadIFIMETRICS(_IFIMETRICS *,int,unsigned __int64);
_IFIMETRICS * UMPDDrvQueryFont(DHPDEV__ *,unsigned __int64,unsigned long,unsigned long *);
_LARGE_INTEGER GreBootTime;
_LDEV * UMPD_ldevLoadDriver(unsigned short *,_LDEVTYPE);
_LIST_ENTRY * GetRecalcHeadPtiListEntry();
_LIST_ENTRY NullListHead;
_LIST_ENTRY gCDROMNotifyList;
_LIST_ENTRY gFrameListHead;
_LIST_ENTRY gFrameTPListHead;
_LIST_ENTRY gIAMThreadList;
_LIST_ENTRY gListAffectedThreadsForQueueRecalc;
_LIST_ENTRY gMediaChangeList;
_LIST_ENTRY gPointerDeviceClients;
_LIST_ENTRY gPointerDeviceInfoList;
_LIST_ENTRY gShellFrameAppThreadsAssociationList;
_MAGN_COLOR_TRANSFORM gMagEffectIdentity;
_MAGN_DEST_TRANSFORM gMagOutTransformIdentity;
_MAG_LENS_CONTEXT * MagpFindLensContext(_MAG_THREAD_CONTEXT *,tagWND *,_MAG_LENS_CONTEXT_FILTER);
_MDSURF * pAllocateAndInitializeMDSURF(_VDEV *);
_METASPRITE * pSpConvertSpriteToMeta(HDEV__ *,HDEV__ *,SPRITE *);
_METASPRITE * pSpGetMetaSprite(_SPRITESTATE const *,HWND__ *,void *);
_METASPRITE * pSpGetMetaSpriteDelayDelete(_SPRITESTATE const *,HWND__ *,void *);
_METASPRITE * pSpTransferMetaSprite(HDEV__ *,HDEV__ *,_METASPRITE *);
_MOUSE_MOVE_OUTCOME ComputeMoveOutcome(tagPOINT,_MOVESIZEDATA const * const,tagMONITOR * *,eTHRESHOLD_MARGIN_DIRECTION *);
_MOUSE_SIZE_OUTCOME ComputeSizeOutcome(tagPOINT,_MOVESIZEDATA const * const,tagMONITOR * *,eTHRESHOLD_MARGIN_DIRECTION *);
_NEWPROCADDRESS * gaNewProcAddresses;
_PAL_ULONG * aPalHalftone;
_PAL_ULONG * aPalVGA;
_PFEDATA * FindLinkedFontEntry(_LIST_ENTRY *,unsigned short const *,unsigned short const *);
_PLGRUN * prunPlgRead1(_PLGDDA *,_PLGRUN *,unsigned char *,unsigned char *,_XLATEOBJ *,long,long,long);
_PLGRUN * prunPlgRead16(_PLGDDA *,_PLGRUN *,unsigned char *,unsigned char *,_XLATEOBJ *,long,long,long);
_PLGRUN * prunPlgRead24(_PLGDDA *,_PLGRUN *,unsigned char *,unsigned char *,_XLATEOBJ *,long,long,long);
_PLGRUN * prunPlgRead32(_PLGDDA *,_PLGRUN *,unsigned char *,unsigned char *,_XLATEOBJ *,long,long,long);
_PLGRUN * prunPlgRead4(_PLGDDA *,_PLGRUN *,unsigned char *,unsigned char *,_XLATEOBJ *,long,long,long);
_PLGRUN * prunPlgRead8(_PLGDDA *,_PLGRUN *,unsigned char *,unsigned char *,_XLATEOBJ *,long,long,long);
_PLGRUN * prunPlgReadError(_PLGDDA *,_PLGRUN *,unsigned char *,unsigned char *,_XLATEOBJ *,long,long,long);
_PLGRUN * prunPumpDDA(_PLGDDA *,_PLGRUN *);
_POINTFIX ptfxFraction(_POINTFIX,LINEDATA *,EFLOAT &,EFLOAT &);
_POINTL gptlZero;
_PRESENT * pSpCreatePresent(HDEV__ *,HWND__ *);
_PRESENT * pSpGetPresent(HDEV__ *,HWND__ *);
_QUICKLOOKUP gqlEUDC;
_QUICKLOOKUP gqlTTSystem;
_RECTL * pRect(_POINTL *,_RECTL *,unsigned long,unsigned long);
_RECTL grclEmpty;
_RECTL grclMax;
_RTL_BITMAP apsoNineGridBitmapHeader;
_RTL_GENERIC_COMPARE_RESULTS GDINetworkedFontFileNodeCompare(_RTL_AVL_TABLE *,void *,void *);
_RTL_GENERIC_COMPARE_RESULTS GDITrustedFontFileCompare(_RTL_AVL_TABLE *,void *,void *);
_RTL_GENERIC_COMPARE_RESULTS HwndLookupCompareTableData(_RTL_GENERIC_TABLE *,void *,void *);
_RTL_QUERY_REGISTRY_TABLE * SharedQueryTable;
_SCANSYSQUEUERESULT xxxScanSysQueue(tagTHREADINFO *,tagMSG *,tagWND *,unsigned int,unsigned int,unsigned long,unsigned long,tagQMSG * *);
_SPRITERANGE * pSpGrowRanges(_SPRITESTATE *,_SPRITERANGE *,_SPRITESCAN * *,_SPRITERANGE * *);
_SURFOBJ * * apsoNineGrid;
_SURFOBJ * GetDevBitmap(_DISPSURF *,_SURFOBJ *);
_SURFOBJ * psoSpCreateSurface(_SPRITESTATE *,unsigned long,long,long,int);
_SURFOBJ * psoSpGetComposite(_SPRITESTATE *,_RECTL *,unsigned long *);
_THREADSASSOCIATION * FindShellFrameAppThreadsAssociation(tagTHREADINFO *);
_TIMER_COALESCING_SPEC * gTimerCoalescingSpec;
_TRANSLATE * ptransMatchAPal(DC *,XEPALOBJ,XEPALOBJ,int,unsigned long *,unsigned long *);
_TRANSLATE20 defaultTranslate;
_UNICODE_STRING * gWatermarkStringArray;
_UNICODE_STRING * gpastrSetupExe;
_UNICODE_STRING szTHQAPolicyName;
_VERTEX_DATA * vComputeSubspaces(unsigned long,_VERTEX_DATA *);
_W32PROCESS * gpwpCalcFirst;
_XRUNLEN * pxrlStrRead01(_STRDDA *,_STRRUN *,unsigned char *,unsigned char *,_XLATEOBJ *,long,long,long);
_XRUNLEN * pxrlStrRead01AND(_STRDDA *,_STRRUN *,unsigned char *,unsigned char *,_XLATEOBJ *,long,long,long);
_XRUNLEN * pxrlStrRead01OR(_STRDDA *,_STRRUN *,unsigned char *,unsigned char *,_XLATEOBJ *,long,long,long);
_XRUNLEN * pxrlStrRead04(_STRDDA *,_STRRUN *,unsigned char *,unsigned char *,_XLATEOBJ *,long,long,long);
_XRUNLEN * pxrlStrRead04AND(_STRDDA *,_STRRUN *,unsigned char *,unsigned char *,_XLATEOBJ *,long,long,long);
_XRUNLEN * pxrlStrRead04OR(_STRDDA *,_STRRUN *,unsigned char *,unsigned char *,_XLATEOBJ *,long,long,long);
_XRUNLEN * pxrlStrRead08(_STRDDA *,_STRRUN *,unsigned char *,unsigned char *,_XLATEOBJ *,long,long,long);
_XRUNLEN * pxrlStrRead08AND(_STRDDA *,_STRRUN *,unsigned char *,unsigned char *,_XLATEOBJ *,long,long,long);
_XRUNLEN * pxrlStrRead08OR(_STRDDA *,_STRRUN *,unsigned char *,unsigned char *,_XLATEOBJ *,long,long,long);
_XRUNLEN * pxrlStrRead16(_STRDDA *,_STRRUN *,unsigned char *,unsigned char *,_XLATEOBJ *,long,long,long);
_XRUNLEN * pxrlStrRead16AND(_STRDDA *,_STRRUN *,unsigned char *,unsigned char *,_XLATEOBJ *,long,long,long);
_XRUNLEN * pxrlStrRead16OR(_STRDDA *,_STRRUN *,unsigned char *,unsigned char *,_XLATEOBJ *,long,long,long);
_XRUNLEN * pxrlStrRead24(_STRDDA *,_STRRUN *,unsigned char *,unsigned char *,_XLATEOBJ *,long,long,long);
_XRUNLEN * pxrlStrRead24AND(_STRDDA *,_STRRUN *,unsigned char *,unsigned char *,_XLATEOBJ *,long,long,long);
_XRUNLEN * pxrlStrRead24OR(_STRDDA *,_STRRUN *,unsigned char *,unsigned char *,_XLATEOBJ *,long,long,long);
_XRUNLEN * pxrlStrRead32(_STRDDA *,_STRRUN *,unsigned char *,unsigned char *,_XLATEOBJ *,long,long,long);
_XRUNLEN * pxrlStrRead32AND(_STRDDA *,_STRRUN *,unsigned char *,unsigned char *,_XLATEOBJ *,long,long,long);
_XRUNLEN * pxrlStrRead32OR(_STRDDA *,_STRRUN *,unsigned char *,unsigned char *,_XLATEOBJ *,long,long,long);
_XRUNLEN * pxrlStrReadError(_STRDDA *,_STRRUN *,unsigned char *,unsigned char *,_XLATEOBJ *,long,long,long);
__int64 (** gpUMDriverFunc)();
__int64 Div128by64(__int64,unsigned __int64,__int64,__int64 &);
__int64 GetWindowData(tagWND *,__int64,int);
__int64 MDiv64(__int64,__int64,__int64);
__int64 NtUserfnHkINLPCBTACTIVATESTRUCT(unsigned long,unsigned __int64,tagCBTACTIVATESTRUCT *);
__int64 NtUserfnHkINLPCBTCREATESTRUCT(unsigned int,unsigned __int64,tagCBT_CREATEWNDW *,int);
__int64 NtUserfnHkINLPDEBUGHOOKSTRUCT(unsigned long,unsigned __int64,tagDEBUGHOOKINFO *);
__int64 NtUserfnHkINLPKBDLLHOOKSTRUCT(unsigned long,unsigned __int64,tagKBDLLHOOKSTRUCT *);
__int64 NtUserfnHkINLPMOUSEHOOKSTRUCTEX(unsigned long,unsigned __int64,tagMOUSEHOOKSTRUCTEX *);
__int64 NtUserfnHkINLPMSG(int,unsigned long,unsigned __int64,tagMSG *);
__int64 NtUserfnHkINLPMSLLHOOKSTRUCT(unsigned long,unsigned __int64,tagMSLLHOOKSTRUCT *);
__int64 NtUserfnHkINLPRECT(unsigned long,unsigned __int64,tagRECT *);
__int64 NtUserfnHkOPTINLPEVENTMSG(unsigned long,unsigned __int64,tagEVENTMSG *);
__int64 _InBoxString(long,tagWND *,unsigned int,unsigned __int64,__int64,unsigned __int64,unsigned long,int);
__int64 _SfnINBOXSTRING(long,tagWND *,unsigned int,unsigned __int64,__int64,unsigned __int64,__int64 (*)(),unsigned long,tagSMS *);
__int64 g_cDWMWindowUniqueness;
__int64 xxxDesktopWndProcWorker(tagWND *,unsigned int,unsigned __int64,__int64);
__int64 xxxQueryLegacyActivation(tagWND *,tagWND *,short,tagPOINTEREVENTINT const *);
__int64 xxxSendMessageToUI(tagTHREADINFO *,tagIMEUI *,unsigned int,unsigned __int64,__int64);
__int64 xxxUnusedFunctionId(tagWND *,unsigned int,unsigned __int64,__int64,unsigned __int64);
__int64 xxxWrapCallWindowProc(tagWND *,unsigned int,unsigned __int64,__int64,unsigned __int64);
__int64 xxxWrapDesktopWndProc(tagWND *,unsigned int,unsigned __int64,__int64,unsigned __int64);
__int64 xxxWrapMenuWindowProc(tagWND *,unsigned int,unsigned __int64,__int64,unsigned __int64);
__int64 xxxWrapRealDefWindowProc(tagWND *,unsigned int,unsigned __int64,__int64,unsigned __int64);
__int64 xxxWrapSBWndProc(tagWND *,unsigned int,unsigned __int64,__int64,unsigned __int64);
__int64 xxxWrapSendMessage(tagWND *,unsigned int,unsigned __int64,__int64,unsigned __int64);
__int64 xxxWrapSendMessageCallback(tagWND *,unsigned int,unsigned __int64,__int64,unsigned __int64);
__int64 xxxWrapSendNotifyMessage(tagWND *,unsigned int,unsigned __int64,__int64,unsigned __int64);
__int64 xxxWrapSwitchWndProc(tagWND *,unsigned int,unsigned __int64,__int64,unsigned __int64);
_tagIMEHOTKEYOBJ * FindImeHotKeyByID(_tagIMEHOTKEYOBJ *,unsigned long);
_tagIMEHOTKEYOBJ * FindImeHotKeyByKey(_tagIMEHOTKEYOBJ *,unsigned int,unsigned int,unsigned int);
_tagIMEHOTKEYOBJ * FindImeHotKeyByKeyWithLang(_tagIMEHOTKEYOBJ *,unsigned int,unsigned int,unsigned int,unsigned short);
bool EnumDeviceAndEngine(unsigned short const *,unsigned long,unsigned long,_EFFILTER_INFO *,PUBLIC_PFTOBJ &,PUBLIC_PFTOBJ &,PFFOBJ &,PDEVOBJ &,DCOBJ *,unsigned long *,void *);
bool EnumEngineOnly(unsigned short const *,unsigned long,unsigned long,_EFFILTER_INFO *,PUBLIC_PFTOBJ &,PUBLIC_PFTOBJ &,DCOBJ *,unsigned long *,void *);
bool HKAddChildHotkey(tagTHREADINFO *,tagHOTKEY *,tagWND *,int,unsigned short);
bool HKRemoveHotkeyOrMakePlaceholder(tagHOTKEY * *);
bool HKRemoveMatchingChildHotkeys(tagHOTKEY *,tagTHREADINFO *,tagWND *,int,HotkeyQueryType);
bool HKRemoveMatchingHotkeys(tagTHREADINFO *,tagWND *,int,HotkeyQueryType);
bool IsClassAtomPinned(unsigned short);
bool IsClassAtomRegistered(tagPROCESSINFO *,unsigned short);
bool IsGpqForegroundAccessibleOnInputThread(bool,tagUIPI_INFO_INT const &);
bool IsSuperWetInkStartDataSupported(InkFeedbackCapabilities,IFC_SUPERWET_INK_START_DATA const *);
bool IsTrueTypeVariation(_IFIMETRICS *);
bool IsTrustedFontFilePath(unsigned short const *);
bool IsValidAXESLISTW(void const *,unsigned long,long);
bool IsValidDESIGNVECTOR(void const *,unsigned long,long);
bool IsValidFONTDIFF(void const *,unsigned long,long);
bool IsValidFONTSIM(void const *,unsigned long,long);
bool IsValidIFIMETRICS(_IFIMETRICS const *,unsigned long);
bool IsValidString(void const *,unsigned long,long);
bool IsWin32kRefreshed();
bool MapFontFiles(unsigned long,_FONTFILEVIEW * *,void * *,unsigned long *);
bool ParseFontLinkEntry(unsigned short *,FontLinkData *);
bool ParseFontScaleFactor(unsigned short const *,long *);
bool TrapAppContainerRenderingWorker(XDCOBJ &,HSURF__ * &,HSURF__ * &,unsigned long *);
bool TryCopyMemoryFromProbedPointer(void *,void *,unsigned int);
bool TryProbeForRead(void *,unsigned int,unsigned int);
bool UnblockDeferredInput(tagTHREADINFO *);
bool UnqueuePTPMouseEvent(tagPTPMOUSEEVENT *,tagPTPMOUSEEVENT *,bool *);
bool ValidateIFIMETRICS(_IFIMETRICS *);
bool bExtendGlyphSet(_FD_GLYPHSET * *,_FD_GLYPHSET * *);
bool bGetRegString(void *,unsigned short const *,unsigned short *,unsigned long);
bool bUnreferenceNetworkedFontFileNode(_NETWORKED_FONT_FONT_FILE_NODE *);
bool g_bHitTestDwmFirstForTouch;
bool gbAttemptedEnableEUDC;
bool gbFntCacheClosed;
bool isSorted(_SODISPSURF *,_SODISPSURF *,long,long);
bool operator!=(_FD_KERNINGPAIR const &,_FD_KERNINGPAIR const &);
double * gajCopyBuffer;
double gOneDouble;
int (* aiPlgConst)[6];
int (* aiPlgSort)[4];
int (*pfnGetRLESrcCopy(unsigned long,unsigned long))(BLTINFO *);
int * acatomSysDepends;
int * acatomSysUse;
int AddConvProp(tagWND *,tagWND *,unsigned long,tagDDECONV *,tagDDECONV *);
int AddEllipsisAndDrawLine(HDC__ *,int,unsigned short *,int,unsigned long,DRAWTEXTDATA *,int);
int AddMessageToFilter(void * * *,unsigned int,int *);
int AddPublicObject(unsigned int,void *,unsigned long);
int AddThreadPointerData(tagTHREADINPUTPOINTERLIST *,unsigned short,unsigned long,unsigned __int64,unsigned int,HWND__ *,int);
int AddThreadPointerHookData(tagTHREADINPUTPOINTERLIST *,unsigned short,unsigned long,unsigned __int64,unsigned int,HWND__ *);
int AlphaScanLineBlend(unsigned char *,_RECTL *,long,unsigned char *,long,_POINTL *,_XLATEOBJ *,_XLATEOBJ *,_XLATEOBJ *,XEPALOBJ,XEPALOBJ,_ALPHA_DISPATCH_FORMAT *);
int ApplyElasticDragModeDeltas(tagHID_POINTER_DEVICE_INFO *,tagTPCONTACTSTATE *,tagPOINTER_INFO *,tagPOINT *);
int AreTheseTwoContactsAGesture(tagPOINTERINPUTFRAME const *,tagTPSTATE *,tagTPCONTACTSTATE const *,tagTPCONTACTSTATE const *);
int ArrangeActionCompatibleWithStyle(tagWND *,_WARR_ACTIONS);
int BasicTargetingHitTest(tagWND *,tagTOUCHTARGETINGCONTACT *,tagPOINT,unsigned short *,tagPOINT *,int,tagRECT *,tagTARGETING_PROPERTY,int,unsigned long,int);
int BasicTargetingWindowHitTest(tagWND *,tagPOINT,tagPNTRWINDOWHITTTESTARGS const *,int *,tagRECT,int *,unsigned int *,tagPOINT *,tagTARGETING_PROPERTY,unsigned long);
int BltLnk(SURFACE *,SURFACE *,SURFACE *,ECLIPOBJ *,XLATE *,_RECTL *,_POINTL *,_POINTL *,_BRUSHOBJ *,_POINTL *,unsigned long);
int BltOldRedirectionBitsToNewBitmap(tagWND *,HBITMAP__ *,HBITMAP__ *,tagBITMAP const *,tagBITMAP const *,int,int);
int BltValidInit(tagSMWP *);
int BmpDevAlphaBlend(_SURFOBJ *,_SURFOBJ *,_CLIPOBJ *,_XLATEOBJ *,_RECTL *,_RECTL *,_BLENDOBJ *);
int BmpDevBitBlt(_SURFOBJ *,_SURFOBJ *,_SURFOBJ *,_CLIPOBJ *,_XLATEOBJ *,_RECTL *,_POINTL *,_POINTL *,_BRUSHOBJ *,_POINTL *,unsigned long);
int BmpDevCopyBits(_SURFOBJ *,_SURFOBJ *,_CLIPOBJ *,_XLATEOBJ *,_RECTL *,_POINTL *);
int BmpDevDrawStream(_SURFOBJ *,_SURFOBJ *,_CLIPOBJ *,_XLATEOBJ *,_RECTL *,_POINTL *,unsigned long,void *,_DSSTATE *);
int BmpDevFillPath(_SURFOBJ *,_PATHOBJ *,_CLIPOBJ *,_BRUSHOBJ *,_POINTL *,unsigned long,unsigned long);
int BmpDevGradientFill(_SURFOBJ *,_CLIPOBJ *,_XLATEOBJ *,_TRIVERTEX *,unsigned long,void *,unsigned long,_RECTL *,_POINTL *,unsigned long);
int BmpDevLineTo(_SURFOBJ *,_CLIPOBJ *,_BRUSHOBJ *,long,long,long,long,_RECTL *,unsigned long);
int BmpDevNineGrid(_SURFOBJ *,_SURFOBJ *,_CLIPOBJ *,_XLATEOBJ *,_RECTL *,_RECTL *,NINEGRID *,_BLENDOBJ *,void *);
int BmpDevPlgBlt(_SURFOBJ *,_SURFOBJ *,_SURFOBJ *,_CLIPOBJ *,_XLATEOBJ *,tagCOLORADJUSTMENT *,_POINTL *,_POINTFIX *,_RECTL *,_POINTL *,unsigned long);
int BmpDevStretchBlt(_SURFOBJ *,_SURFOBJ *,_SURFOBJ *,_CLIPOBJ *,_XLATEOBJ *,tagCOLORADJUSTMENT *,_POINTL *,_RECTL *,_RECTL *,_POINTL *,unsigned long);
int BmpDevStrokeAndFillPath(_SURFOBJ *,_PATHOBJ *,_CLIPOBJ *,_XFORMOBJ *,_BRUSHOBJ *,_LINEATTRS *,_BRUSHOBJ *,_POINTL *,unsigned long,unsigned long);
int BmpDevStrokePath(_SURFOBJ *,_PATHOBJ *,_CLIPOBJ *,_XFORMOBJ *,_BRUSHOBJ *,_POINTL *,_LINEATTRS *,unsigned long);
int BmpDevTextOut(_SURFOBJ *,_STROBJ *,_FONTOBJ *,_CLIPOBJ *,_RECTL *,_RECTL *,_BRUSHOBJ *,_BRUSHOBJ *,_POINTL *,unsigned long);
int BmpDevTransparentBlt(_SURFOBJ *,_SURFOBJ *,_CLIPOBJ *,_XLATEOBJ *,_RECTL *,_RECTL *,unsigned long,unsigned long);
int CalcVisRgnWorker(tagWND * const,HRGN__ * *,unsigned long);
int CanCoalesceIgnoreNode(tagPOINTERINPUTFRAME const *,tagPOINTERINFONODE const *,tagPOINTERCOALESCE *);
int CanCoalesceNodeWithPrevious(tagPOINTERINPUTFRAME const *,tagPOINTERINFONODE const *,tagQMSG *,tagPOINTERQFRAME *,tagPOINTERCOALESCE *);
int CanPointStartResize(tagWND *,tagTOUCHTARGETINGCONTACT *,tagPOINT);
int CaptureBroadcastString(_LARGE_UNICODE_STRING *,_LARGE_STRING *);
int ChangeWindowTreeProtection(tagWND *,int);
int CheckCrossThreadInput(tagWND * const,tagQMSG *,int *,int *,tagQMSG * *);
int CheckCursorClipAccess(CursorClipAccess,int);
int CheckDoubleTap(tagTPSTATE *,tagTPCONTACTSTATE *);
int CheckImmersiveForegroundAccess(tagPROCESSINFO *,tagWND *);
int CheckLegacyForegroundAccess();
int CheckOnTop(tagTHREADINFO *,tagWND *,unsigned int);
int CheckProcessIdentity(tagWND *,unsigned int,unsigned __int64,__int64);
int CheckTopmost(tagWINDOWPOS *);
int ClassicIsWindowHit(tagWND *,tagPOINT);
int CoalesceMousePromotionEntry(tagPOINTER_INFO const &,unsigned short);
int CoalesceQFrames(tagPOINTERINPUTFRAME const *,tagPOINTERQFRAME *,tagPOINTERINPUTFRAME *);
int CombineOldNewVis(HRGN__ *,HRGN__ *,HRGN__ *,unsigned int,unsigned int);
int CompareDeviceVIDPID(_UNICODE_STRING,_KEY_VALUE_FULL_INFORMATION *,unsigned long);
int CompareRoutine(unsigned short *,unsigned short *);
int ContactVisualizationWorker(unsigned long,void *,unsigned __int64,int,unsigned long);
int ConvertCoordinatesWithRounding(long,long,long,long,long,long *);
int CopyTouchInputListSorted(tagTOUCHINPUTLIST const *,tagTOUCHINPUTLIST *,int,unsigned int *,int *);
int CoreSignatureVerify(unsigned short,unsigned short,unsigned char *,unsigned long *);
int CreateDPIBitmapStrip(int);
int CreatePointerDeviceProcessEvent(unsigned long,int,unsigned char,unsigned short *,void * *);
int CreateTooltipBitmap(tagTOOLTIPWND *,unsigned int,unsigned int);
int CrossedTPButtonWarpBackThreshold(tagTPCONTACTSTATE *,tagPOINT);
int CrossedTPDragThreshold(tagTPCONTACTSTATE *,tagTPSTATE *,tagPOINT,tagHID_POINTER_DEVICE_INFO *);
int CrossedTPLiftWarpBackThreshold(tagTPCONTACTSTATE *,tagPOINT);
int CrossedTPTapWarpBackThreshold(tagTPCONTACTSTATE *,tagPOINT);
int D3DXMatrixDeterminant(float *,_D3DMATRIX const *);
int DCEIsWindowHit(tagWND *,tagPOINT *,_SUBPIXELS const *);
int DCEPointInTriangle(_D3DVERTEX *,float,float);
int DDEImpIncRefInit(tagWND *,tagDDEIMP *,_TL *);
int DNG_CopyMemory(_DNGINTERNALDATA *,void *,void *,long);
int DT_AdjustBreakForSurrogatesAndVariationSelectors(unsigned short const *,int,int);
int DT_DrawStr(HDC__ *,int,int,unsigned short const *,int,int,unsigned int,DRAWTEXTDATA *,int);
int DT_GetExtentMinusPrefixes(HDC__ *,unsigned short const *,int,unsigned int,int,DRAWTEXTDATA *,int);
int DT_InitDrawTextInfo(HDC__ *,tagRECT *,unsigned int,DRAWTEXTDATA *,tagDRAWTEXTPARAMS *);
int DeferNotifyDelegateCapture(tagTHREADINPUTPOINTERLIST *,unsigned short,unsigned long,tagWND *);
int DelegateCapturePointerImplicit(unsigned __int64);
int DelegateCapturePointersMitOff(unsigned int,unsigned int *,unsigned int *);
int DelegateCapturePointersMitOn(unsigned int,unsigned int *,unsigned int *);
int DestSurfaceAccessCheck(SURFACE *);
int DestroyAniIcon(tagACON *);
int DestroyDesktop(tagDESKTOP *);
int DeviceHasAQuickLaunchPen();
int DoesPointSnapToBorder(tagWND *,tagTOUCHTARGETINGCONTACT *,tagPOINT);
int DoesPointSnapToTopLevelWindow(tagWND *,tagWND *,tagTOUCHTARGETINGCONTACT *,tagPOINT);
int DoesQualifyForResizeOptimization(_MOVESIZEDATA *);
int DrawBox(HDC__ *,tagRECT *,unsigned int);
int DrawDiagonal(HDC__ *,tagRECT *,HBRUSH__ *,HBRUSH__ *,unsigned int);
int DrawGrip(HDC__ *,tagRECT *,unsigned int);
int DrawIt(HDC__ *,tagRECT *,unsigned int,unsigned short);
int DrawMenuItemCheckMark(HDC__ *,tagITEM *,int);
int DrawMenuMark(HDC__ *,tagRECT *,unsigned int,unsigned int);
int DrawScrollArrow(HDC__ *,tagRECT *,unsigned int);
int DrawWindowShadow(tagWND *,HDC__ *,int,int,int *);
int DwmNotifyChildrenLinkUnlink(tagDESKTOP const *,int);
int EditionMessageBeep(unsigned long);
int EditionSendCursorSuppressionUpdate(int,HMONITOR__ *);
int EditionUserBeep(unsigned long,unsigned long);
int EngMapFontFileInternal(unsigned __int64,unsigned long * *,unsigned long *);
int EngNineGridHelper(XDCOBJ &,PALETTE *,PALETTE *,_SURFOBJ *,_SURFOBJ *,_RECTL *,_RECTL *,_MARGINS *);
int EngRealizeBrush(_BRUSHOBJ *,_SURFOBJ *,_SURFOBJ *,_SURFOBJ *,_XLATEOBJ *,unsigned long);
int EngStretchBltNew(_SURFOBJ *,_SURFOBJ *,_SURFOBJ *,_CLIPOBJ *,_XLATEOBJ *,tagCOLORADJUSTMENT *,_POINTL *,_RECTL *,_RECTL *,_POINTL *,unsigned long);
int EngStretchBltOld(_SURFOBJ *,_SURFOBJ *,_SURFOBJ *,_CLIPOBJ *,_XLATEOBJ *,tagCOLORADJUSTMENT *,_POINTL *,_RECTL *,_RECTL *,_POINTL *,unsigned long,int *);
int EnsureQMsgLog();
int EqualMsg(tagQMSG *,tagQMSG *);
int ExcludeWindowRects(tagWND *,tagWND *,tagRECT *,_CalcVisRgnData *);
int ExtTextOutRect(XDCOBJ &,tagRECT *);
int FAllowForegroundActivate(tagQ *,tagWND *);
int FBitsTouch(tagWND *,tagRECT *,tagSPB *,unsigned long);
int FCursorShadowed(_CURSINFO *);
int FillTriangle(HDC__ *,tagRECT *,HBRUSH__ *,unsigned int);
int FilterMoveForStableContact(tagPOINT,tagTPSTATE *,tagTPCONTACTSTATE *);
int FindDefaultLinkedFontEntry(unsigned short const *,unsigned short const *);
int FindGID(tagGESTURECONFIGLIST * *,unsigned int,tagGESTURECONFIGLIST * *);
int FindGestureAndMarkGesturingContactsAsNonResting(tagPOINTERINPUTFRAME const *,tagTPSTATE *);
int FindHotKey(tagTHREADINFO *,tagWND *,int,unsigned int,unsigned int,tagHOTKEY * *);
int FindMousePromotionInContactRange(tagMOUSE_PROMOTION_QUEUE const &,unsigned long,tagMOUSE_PROMOTION_ENTRY * *,tagMOUSE_PROMOTION_ENTRY * *);
int FixupOverlayWindowAttributes(tagWND *);
int FlipUserTextOutW(HDC__ *,int,int,unsigned short const *,int);
int ForegroundInputOwnerMatch(tagTHREADINFO const *,int);
int FreeListAdd(tagDDECONV *,void *,unsigned long);
int GdiAdjustSpriteDirtyAccum(HDEV__ *,HWND__ *,_RECTL *,_RECTL *,_POINTL *,_POINTL *);
int GdiDeleteSpriteDelayDelete(HDEV__ *,HWND__ *,void *);
int GdiGetSpriteAttributes(HDEV__ *,HWND__ *,void *,unsigned long *,_BLENDFUNCTION *,unsigned long *);
int GdiGetSpriteClipRgns(HDEV__ *,HRGN__ *);
int GdiHintSpriteShape(HDEV__ *,HWND__ *,HBITMAP__ *,int,int);
int GdiHintSpriteShapeDelayDelete(HDEV__ *,HWND__ *,HBITMAP__ *,int);
int GdiPtInSprite(HDEV__ *,HWND__ *,int,int);
int GdiUpdateSprite(HDEV__ *,HWND__ *,void *,HDC__ *,tagPOINT *,tagSIZE *,HDC__ *,tagPOINT *,unsigned long,_BLENDFUNCTION *,unsigned long,tagRECT *);
int GdiUpdateSpriteDevLockEnd(XDCOBJ &);
int GeneratePointerMessage(tagPOINTERINFONODE const *,unsigned __int64,unsigned int,unsigned long,int,int,HWND__ *);
int GeneratePointerMessageFromMouse(tagQMSG *,unsigned int,tagQMSG *,tagWND *,int);
int GetCharDimensionsInternal(HDC__ *,tagTEXTMETRICW *,int *,int);
int GetCursorHeight();
int GetCustomFlick(tagCUSTOM_FLICK *);
int GetCustomFlickPath(_GUID const &,_UNICODE_STRING *);
int GetETMFontManagement(RFONTOBJ &,PDEVOBJ,_SURFOBJ *,_FONTOBJ *,unsigned long,unsigned long,void *,unsigned long,void *);
int GetFlickMap(tagFLICK_MAP *);
int GetFrameControlMetrics(unsigned int,int,int);
int GetLangIdMatchLevel(HKL__ *,unsigned short);
int GetLocalizedInt(unsigned int,int);
int GetPointerEventTarget(tagPOINTERINFONODE const *,HWND__ * *);
int GetPointerMessageInfo(unsigned __int64,int,HWND__ * *,int *,int *,unsigned long *,unsigned int *);
int GetRITWakeReason(unsigned long *);
int GetResizeBorderWidthForDpiWithAppCompat2(unsigned int,unsigned long);
int GetResizeDCompositionSynchronizationObject(HWND__ *,CompositionObject * *);
int GetTWIPSMetricById(_UNICODE_STRING *,unsigned int,int);
int GetTrueClipRgn(HDC__ *,HRGN__ *);
int GetWindowFrameMetricForDpiWithCompatFlags2(int,unsigned int,unsigned long);
int GiveObject(unsigned int,void *,unsigned long);
int GreAddSpriteOverlapPresent(HDEV__ *,HWND__ *);
int GreBatchTextOut(XDCOBJ &,_BATCHTEXTOUT *,unsigned long);
int GreBatchTextOutRect(XDCOBJ &,_BATCHTEXTOUTRECT *,unsigned long);
int GreCheckBitmapBits(HDC__ *,void *,_DEVBITMAPINFO *,void *,unsigned char *);
int GreDeleteColorTransform(HDC__ *,void *);
int GreDoBanding(HDC__ *,int,_POINTL *,tagSIZE *);
int GreExtEscapeInternal(DCOBJ &,int,int,char *,int,char *);
int GreExtSelectClipRgnLocked(XDCOBJ &,_RECTL *,int);
int GreExtTextOutWLocked(XDCOBJ &,int,int,unsigned int,tagRECT *,unsigned short *,int,int *,unsigned long,void *,unsigned long);
int GreGetBaseUFIBits(_UNIVERSAL_FONT_ID *,_FONTFILEVIEW *);
int GreGetDIBitsInternalWorker(unsigned long,DCOBJ &,PDEVOBJ &,SURFREF &,XEPALOBJ &,HDC__ *,HBITMAP__ *,unsigned int,unsigned int,unsigned char *,tagBITMAPINFO *,unsigned int,unsigned int,unsigned int);
int GreIcmQueryBrushBitmap(HDC__ *,HBRUSH__ *,tagBITMAPINFO *,void *,unsigned long *,unsigned long *,int *);
int GreIcmSetBrushBitmap(HDC__ *,HBRUSH__ *,tagBITMAPINFO *,void *);
int GreLineTo(HDC__ *,int,int);
int GrePatBltLockedDC(XDCOBJ &,EXFORMOBJ &,ERECTL *,unsigned long,SURFACE *,unsigned long,unsigned long,unsigned long,unsigned long);
int GrePolyBezierInternal(HDC__ *,tagPOINT *,unsigned long);
int GrePolyPatBltInternal(XDCOBJ &,unsigned long,_POLYPATBLT *,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long);
int GreRectBlt(DCOBJ &,ERECTL *);
int GreScaleValuesInternal(XDCOBJ &,long *,unsigned int);
int GreSetDeviceGammaRampInternal(HDEV__ *,void *,int,int,_SETGAMMARAMP_FAILED_REASON *,unsigned long *);
int GreSetICMMode(HDC__ *,unsigned long,unsigned long);
int GreStartDocInternal(HDC__ *,_DOCINFOW *,int *,int);
int GreTearDownSprites(HDEV__ *,_RECTL *,int);
int GreTransparentBltPS(_SURFOBJ *,_SURFOBJ *,_CLIPOBJ *,_XLATEOBJ *,_RECTL *,_RECTL *,unsigned long);
int GreUpdateSpriteDevLockEnd(XDCOBJ &,int);
int GreUpdateSpriteInternal(HDEV__ *,HWND__ *,void *,HDC__ *,tagPOINT *,tagSIZE *,HDC__ *,tagPOINT *,unsigned long,_BLENDFUNCTION *,unsigned long,tagRECT *,tagMINIWINDOWINFO *,int,int);
int HandleIAMHotKey(tagHOTKEY const * const);
int HandleLossOfPrimary(tagPOINTER_INFO &);
int HandleProcessSpinning();
int HasActiveContacts(tagTPSTATE const *);
int HasOwnedWindowInTree(tagWND *,tagWND *);
int HasRawKeyboardPerThreadRegistration(tagPROCESSINFO const *);
int HidRequestValidityCheck(tagRAWINPUTDEVICE * const,tagPROCESS_HID_TABLE const *,_REGISTER_RAW_INPUT_INTERNAL);
int HitTargetAndMonitorFromPoint(tagPOINT,_MOVESIZEDATA const * const,tagMONITOR * *,eTHRESHOLD_MARGIN_DIRECTION *);
int HitTestScrollBar(tagWND *,int,tagPOINT);
int InitiateWin32kCleanup();
int InsertProcRequest(tagPROCESSINFO *,tagRAWINPUTDEVICE const *,tagPROCESS_HID_REQUEST *,unsigned long,int,tagWND *,int);
int InternalInvalidate2(tagWND *,HRGN__ *,HRGN__ *,tagRECT *,unsigned long);
int InternalScrollDC(tagWND *,HDC__ *,int,int,tagRECT *,tagRECT *,HRGN__ *,HRGN__ *,tagRECT *,int);
int InternalSpritesCollision(HDEV__ *,HWND__ *,HRGN__ *);
int InvalidateWEFCOMPOSITEDWindow(tagWND *,tagRECT const *);
int IsAdjacentRect(tagRECT const *,tagRECT const *);
int IsAnyNodeMessageNonDelegated(tagPOINTERINFONODE const *);
int IsBitSet(unsigned char *,unsigned int);
int IsCandidateTransformOwner(tagWND *,tagWND *);
int IsCompositionInputWindow(tagWND *);
int IsCompositionInputWindowForHitTest(tagWND *);
int IsDeviceOnRegistryList(_UNICODE_STRING,_UNICODE_STRING,int);
int IsDraggingForegroundModernApp(tagWND *);
int IsEqualRectToArrangedWindow(tagWND *,tagRECT const * const);
int IsExtendTopology();
int IsFlicksDisabledByGroupPolicy();
int IsGenuineMouseInput(tagINPUT_MESSAGE_SOURCE const *);
int IsHIDMouse(DEVICEINFO *,_DEVICE_OBJECT *);
int IsHIDMouseDeviceRelative(DEVICEINFO *,_FILE_OBJECT *,_DEVICE_OBJECT *);
int IsLastTopMostWindow(tagWND const *);
int IsLegacyDevice(unsigned short,unsigned short);
int IsManipulationThreadNode(tagPOINTERINFONODE const *);
int IsMaxedRect(tagRECT *,tagSIZERECT const *);
int IsMessageAllowedAcrossILByReceiver(tagPROCESSINFO *,tagPROCESSINFO *,tagWND *,unsigned int,unsigned __int64,__int64,int);
int IsMessageAllowedByFilterEx(void * const *,unsigned int,void * * *,void * * *);
int IsMessageAlwaysAllowedAcrossIL(unsigned int);
int IsMetaDevBitmapForMirroring(_SURFOBJ *);
int IsMetaRedirectionBitmap(_SURFOBJ *);
int IsMiPMouseMessage(unsigned int);
int IsMinimizedSausageWindow(tagWND * const);
int IsMonitorConnectedToInternalPanel(tagMONITOR *);
int IsMouseDeviceOnWhiteList(_DEVICE_OBJECT *,int);
int IsNativeOrientationPortrait();
int IsNewMonitorRectMostOccupied(tagRECT const *,tagRECT const *,tagRECT const *);
int IsNodeFullyReleased(tagPOINTERINFONODE const *);
int IsNodeMessageDelegated(tagPOINTERINFONODE const *,unsigned int);
int IsOwnee(tagWND *,tagWND *);
int IsPTPRedirected(tagTHREADINFO *,tagMSG *);
int IsPointerInfoNodeValid(tagPOINTERINFONODE const *);
int IsPointerMessageTouchpad(tagTHREADINFO *,unsigned __int64,unsigned short);
int IsPointerMsgRedirected(unsigned __int64,int *);
int IsPointerQueuedMessageCoalescable(tagQ *,tagQMSG *,unsigned long,unsigned long,unsigned __int64,unsigned long);
int IsProcessUserService(_EPROCESS * const);
int IsProperRectForArrangement(tagRECT const * const,tagRECT const * const,eTHRESHOLD_MARGIN_DIRECTION);
int IsRectBogus(int,int,int,int);
int IsRectEmptyInl(tagRECT const *);
int IsSPIActionAllowedForFilteredProcess(unsigned int);
int IsStillWindowC(HWND__ *);
int IsTPRightClick(tagPOINTERINPUTFRAME const *,tagTPSTATE *,int,tagPOINT *);
int IsTargetSetForRetrieval(tagTHREADINFO *,tagPOINTERINFONODE const *);
int IsTopmostRealApp(tagWND *);
int IsVSlick(tagWND *);
int IsValidForHangTest(tagTHREADINFO const *);
int IsWindowComposedOnDesktop(tagWND * const,tagDESKTOP * const);
int ItemContainingSubMenu(tagMENU *,unsigned __int64);
int JobCalloutAddProcess(tagW32JOB *,tagPROCESSINFO *);
int JobCalloutTerminate(tagW32JOB *);
int LOADSTRING(void *,unsigned int,unsigned short *,int);
int LoadCPUserPreferences(_UNICODE_STRING *,unsigned long);
int LoadPointerDevicePenSettings();
int LoadPointerDeviceTouchSettings();
int LookUpFNTCacheTable(unsigned long,unsigned short *,unsigned long *,unsigned long *,PDEV * *,unsigned long *,_FONTFILEVIEW * *,unsigned long,tagDESIGNVECTOR *,unsigned long);
int LookUpWndobjs(DCOBJ *,DCOBJ *,HDC__ * *,int);
int MNCheckScroll(SmartObjStackRef<tagPOPUPMENU>,tagMENU *,tagMONITOR *);
int MNDrawHilite(tagMENU *,tagITEM *);
int MakeITable(unsigned char *,RGBX *,int);
int MakeITable256(unsigned char *);
int MakeITableMono(unsigned char *);
int MakeITableVGA(unsigned char *);
int MakePointerMessage(unsigned __int64,unsigned int,void *,unsigned __int64 *,__int64 *,unsigned short *,unsigned long *,int *,HWND__ * *);
int MakePointerMessageWorker(tagPOINTER_INFO const *,tagPOINT,int,int,int,unsigned int,void *,unsigned __int64 *,__int64 *,unsigned short *,unsigned long *,int *,HWND__ * *);
int MakeThreadPointerHookData(tagTHREADINPUTPOINTERLIST *,unsigned short);
int MiPCheckMsgFilter(tagQMSG *,unsigned int,unsigned int,unsigned int);
int MonitorCoordComp(void const *,void const *);
int MoveRect(_MOVESIZEDATA *,unsigned long,_MOVERECT_STYLE);
int MsgSQMAddTargetNode(tagPROCESSINFO *,tagMSGSQM_PROCESSPAIR *);
int MsgSQMUpdateMsgRecord(tagMSGSQM_MSGRECORD *,unsigned long,unsigned long);
int MulAccumulateD3DDirtyRect(_SURFOBJ *,tagCDDDXGK_REDIRBITMAPPRESENTINFO *);
int MulAlphaBlend(_SURFOBJ *,_SURFOBJ *,_CLIPOBJ *,_XLATEOBJ *,_RECTL *,_RECTL *,_BLENDOBJ *);
int MulAssociateSharedSurface(_SURFOBJ *,void *,void *,tagSIZE);
int MulBitBlt(_SURFOBJ *,_SURFOBJ *,_SURFOBJ *,_CLIPOBJ *,_XLATEOBJ *,_RECTL *,_POINTL *,_POINTL *,_BRUSHOBJ *,_POINTL *,unsigned long);
int MulCopyBits(_SURFOBJ *,_SURFOBJ *,_CLIPOBJ *,_XLATEOBJ *,_RECTL *,_POINTL *);
int MulCopyDeviceToDIB(_SURFOBJ *,SURFMEM *,_RECTL *);
int MulDrawStream(_SURFOBJ *,_SURFOBJ *,_CLIPOBJ *,_XLATEOBJ *,_RECTL *,_POINTL *,unsigned long,void *,_DSSTATE *);
int MulEndDxInterop(_SURFOBJ *,int,int *,void *);
int MulFillPath(_SURFOBJ *,_PATHOBJ *,_CLIPOBJ *,_BRUSHOBJ *,_POINTL *,unsigned long,unsigned long);
int MulGradientFill(_SURFOBJ *,_CLIPOBJ *,_XLATEOBJ *,_TRIVERTEX *,unsigned long,void *,unsigned long,_RECTL *,_POINTL *,unsigned long);
int MulLineTo(_SURFOBJ *,_CLIPOBJ *,_BRUSHOBJ *,long,long,long,long,_RECTL *,unsigned long);
int MulRealizeBrush(_BRUSHOBJ *,_SURFOBJ *,_SURFOBJ *,_SURFOBJ *,_XLATEOBJ *,unsigned long);
int MulStartDxInterop(_SURFOBJ *,int,void *);
int MulStretchBlt(_SURFOBJ *,_SURFOBJ *,_SURFOBJ *,_CLIPOBJ *,_XLATEOBJ *,tagCOLORADJUSTMENT *,_POINTL *,_RECTL *,_RECTL *,_POINTL *,unsigned long);
int MulStrokeAndFillPath(_SURFOBJ *,_PATHOBJ *,_CLIPOBJ *,_XFORMOBJ *,_BRUSHOBJ *,_LINEATTRS *,_BRUSHOBJ *,_POINTL *,unsigned long,unsigned long);
int MulStrokePath(_SURFOBJ *,_PATHOBJ *,_CLIPOBJ *,_XFORMOBJ *,_BRUSHOBJ *,_POINTL *,_LINEATTRS *,unsigned long);
int MulSurfaceComplete(DHPDEV__ *,void *);
int MulTextOut(_SURFOBJ *,_STROBJ *,_FONTOBJ *,_CLIPOBJ *,_RECTL *,_RECTL *,_BRUSHOBJ *,_BRUSHOBJ *,_POINTL *,unsigned long);
int MulTransparentBlt(_SURFOBJ *,_SURFOBJ *,_CLIPOBJ *,_XLATEOBJ *,_RECTL *,_RECTL *,unsigned long,unsigned long);
int MulUpdateColors(_SURFOBJ *,_CLIPOBJ *,_XLATEOBJ *);
int NeedsEndEllipsis(HDC__ *,unsigned short const *,int *,DRAWTEXTDATA *,unsigned int,DRAWTEXTDATA *,int);
int NewConversation(tagDDECONV * *,tagDDECONV * *,tagWND *,tagWND *);
int NextPrevTaskIndex(tagSwitchWndInfo *,int,int,int);
int NotifyLogon(unsigned long);
int NtGdiDrawStreamInternal(XDCOBJ &,EXFORMOBJ &,SURFACE *,_XLATEOBJ *,_RECTL *,_RECTL *,long,char *,_DRAWSTREAMINFO *);
int NtGdiInvertRgnInternal(HDC__ *,HRGN__ *);
int NtGdiSTROBJ_bEnumInternal(_STROBJ *,unsigned long *,_GLYPHPOS * *,int);
int NumberOfLeadingZeros(unsigned __int64);
int OffsetInContact(tagPOINT,tagTOUCHTARGETINGCONTACT const *,tagPOINT);
int OverlapCheck(HDEV__ *,HRGN__ *);
int PROBEDISPATBRUSH(_BRUSHOBJ *);
int PackFrameControls(int,int,int);
int PanAlphaBlend(_SURFOBJ *,_SURFOBJ *,_CLIPOBJ *,_XLATEOBJ *,_RECTL *,_RECTL *,_BLENDOBJ *);
int PanAssertMode(DHPDEV__ *,int);
int PanBitBlt(_SURFOBJ *,_SURFOBJ *,_SURFOBJ *,_CLIPOBJ *,_XLATEOBJ *,_RECTL *,_POINTL *,_POINTL *,_BRUSHOBJ *,_POINTL *,unsigned long);
int PanCopyBits(_SURFOBJ *,_SURFOBJ *,_CLIPOBJ *,_XLATEOBJ *,_RECTL *,_POINTL *);
int PanGradientFill(_SURFOBJ *,_CLIPOBJ *,_XLATEOBJ *,_TRIVERTEX *,unsigned long,void *,unsigned long,_RECTL *,_POINTL *,unsigned long);
int PanSetPalette(DHPDEV__ *,_PALOBJ *,unsigned long,unsigned long,unsigned long);
int PanStretchBlt(_SURFOBJ *,_SURFOBJ *,_SURFOBJ *,_CLIPOBJ *,_XLATEOBJ *,tagCOLORADJUSTMENT *,_POINTL *,_RECTL *,_RECTL *,_POINTL *,unsigned long);
int PanStrokeAndFillPath(_SURFOBJ *,_PATHOBJ *,_CLIPOBJ *,_XFORMOBJ *,_BRUSHOBJ *,_LINEATTRS *,_BRUSHOBJ *,_POINTL *,unsigned long,unsigned long);
int PanStrokePath(_SURFOBJ *,_PATHOBJ *,_CLIPOBJ *,_XFORMOBJ *,_BRUSHOBJ *,_POINTL *,_LINEATTRS *,unsigned long);
int PanTextOut(_SURFOBJ *,_STROBJ *,_FONTOBJ *,_CLIPOBJ *,_RECTL *,_RECTL *,_BRUSHOBJ *,_BRUSHOBJ *,_POINTL *,unsigned long);
int PanTransparentBlt(_SURFOBJ *,_SURFOBJ *,_CLIPOBJ *,_XLATEOBJ *,_RECTL *,_RECTL *,unsigned long,unsigned long);
int PassedCurtainMoveThresholds(unsigned __int64,unsigned __int64,tagTPSTATE *,tagTPCONTACTSTATE *);
int PassedHoldTime(unsigned long,unsigned __int64,unsigned __int64);
int PassedMultiFingerRestingTapThresholdTime(unsigned __int64,unsigned __int64,tagTPSTATE *,tagTPCONTACTSTATE *);
int PerformLegacyDpiUpgrade(_UNICODE_STRING *,unsigned long);
int PerformWin8DpiUpgrade(_UNICODE_STRING *,unsigned long);
int PointInsideCurtainRegion(tagPOINT,tagHID_POINTER_DEVICE_INFO *);
int PointInsideNonCurtainRegion(tagTPSTATE *,tagPOINTER_INFO *,tagHID_POINTER_DEVICE_INFO *);
int PointerDelegateGetClient(unsigned short,unsigned long,tagDELEGATEPOINTERMAP *);
int PopulatePointerInfoNode(tagPOINTERINPUTFRAME *,tagPOINTERINFONODE *);
int PostCOMPOSITEDInvalidateAPC(tagWND * const,tagRECT const *);
int PostHidInput(DEVICEINFO *,tagQ *,tagWND *,unsigned __int64);
int PostHidNotification(tagPROCESS_HID_REQUEST *,DEVICEINFO *,unsigned int,unsigned __int64);
int PostRawKeyboardInputToForeground(_RAW_INPUT_FOREGROUND_TARGET *,unsigned long,void *,_KEYBOARD_INPUT_DATA *,unsigned int,unsigned short);
int PostThreadRecalc(tagTHREADINFO *,tagMONITORRECTS *,tagWINDOWANDRECT *,int,unsigned long);
int PreserveShellArrangementDuringTopBottomSize(_MOVESIZEDATA const *);
int ProcessComplexCoalescence(unsigned int,unsigned int,unsigned __int64,__int64,unsigned __int64 *,__int64 *);
int ProcessWindowEnterLeave(tagPOINTERINPUTFRAME const *,tagPOINTERINFONODE *);
int PromotePointerInternal(unsigned short,unsigned long,tagMOUSE_PROMOTION_ENTRY *,tagMOUSE_PROMOTION_ENTRY *);
int ProtectWindowBitmap(tagWND *,int);
int PtInRectSpace(tagRECT const *,tagPOINT,eTHRESHOLD_MARGIN_DIRECTION);
int RawInputMouseRequestedByForeground();
int ReadLinearityData(tagHID_POINTER_DEVICE_INFO *,_UNICODE_STRING,void *);
int ReadLinearityDataImp(void *,_UNICODE_STRING,tagCALIBRATION_TYPE,unsigned long *,unsigned char * *);
int RealizePendingRecreateTouchInjectionDevices(tagPROCESSINFO *,int);
int RecheckPointerCapture(unsigned __int64,int,tagWND * *,int *);
int RedirAlphaBlend(_SURFOBJ *,_SURFOBJ *,_CLIPOBJ *,_XLATEOBJ *,_RECTL *,_RECTL *,_BLENDOBJ *);
int RedirBitBlt(_SURFOBJ *,_SURFOBJ *,_SURFOBJ *,_CLIPOBJ *,_XLATEOBJ *,_RECTL *,_POINTL *,_POINTL *,_BRUSHOBJ *,_POINTL *,unsigned long);
int RedirCopyBits(_SURFOBJ *,_SURFOBJ *,_CLIPOBJ *,_XLATEOBJ *,_RECTL *,_POINTL *);
int RedirDrawStream(_SURFOBJ *,_SURFOBJ *,_CLIPOBJ *,_XLATEOBJ *,_RECTL *,_POINTL *,unsigned long,void *,_DSSTATE *);
int RedirFillPath(_SURFOBJ *,_PATHOBJ *,_CLIPOBJ *,_BRUSHOBJ *,_POINTL *,unsigned long,unsigned long);
int RedirGradientFill(_SURFOBJ *,_CLIPOBJ *,_XLATEOBJ *,_TRIVERTEX *,unsigned long,void *,unsigned long,_RECTL *,_POINTL *,unsigned long);
int RedirLineTo(_SURFOBJ *,_CLIPOBJ *,_BRUSHOBJ *,long,long,long,long,_RECTL *,unsigned long);
int RedirNineGrid(_SURFOBJ *,_SURFOBJ *,_CLIPOBJ *,_XLATEOBJ *,_RECTL *,_RECTL *,NINEGRID *,_BLENDOBJ *,void *);
int RedirPlgBlt(_SURFOBJ *,_SURFOBJ *,_SURFOBJ *,_CLIPOBJ *,_XLATEOBJ *,tagCOLORADJUSTMENT *,_POINTL *,_POINTFIX *,_RECTL *,_POINTL *,unsigned long);
int RedirStretchBlt(_SURFOBJ *,_SURFOBJ *,_SURFOBJ *,_CLIPOBJ *,_XLATEOBJ *,tagCOLORADJUSTMENT *,_POINTL *,_RECTL *,_RECTL *,_POINTL *,unsigned long);
int RedirStretchBltROP(_SURFOBJ *,_SURFOBJ *,_SURFOBJ *,_CLIPOBJ *,_XLATEOBJ *,tagCOLORADJUSTMENT *,_POINTL *,_RECTL *,_RECTL *,_POINTL *,unsigned long,_BRUSHOBJ *,unsigned long);
int RedirStrokeAndFillPath(_SURFOBJ *,_PATHOBJ *,_CLIPOBJ *,_XFORMOBJ *,_BRUSHOBJ *,_LINEATTRS *,_BRUSHOBJ *,_POINTL *,unsigned long,unsigned long);
int RedirStrokePath(_SURFOBJ *,_PATHOBJ *,_CLIPOBJ *,_XFORMOBJ *,_BRUSHOBJ *,_POINTL *,_LINEATTRS *,unsigned long);
int RedirTextOut(_SURFOBJ *,_STROBJ *,_FONTOBJ *,_CLIPOBJ *,_RECTL *,_RECTL *,_BRUSHOBJ *,_BRUSHOBJ *,_POINTL *,unsigned long);
int RedirTransparentBlt(_SURFOBJ *,_SURFOBJ *,_CLIPOBJ *,_XLATEOBJ *,_RECTL *,_RECTL *,unsigned long,unsigned long);
int ReevaluateQFrameHasDelegation(tagPOINTERINPUTFRAME const *,unsigned long);
int RemoveEventMessage(tagQ *,unsigned long,unsigned long);
int RemoveMessageFromFilter(void * * *,unsigned int,int *);
int RemovePublicObject(unsigned int,void *);
int RequestModernAppClose();
int ResStrCmp(_UNICODE_STRING *,_UNICODE_STRING *);
int ResizeVisExcludeMemory(_CalcVisRgnData *);
int RestoreOldRedirectionBitmap(tagWND *,HBITMAP__ *);
int RetrieveAndVerifySignature(_DEVICE_OBJECT *,_FILE_OBJECT *,unsigned short,_HIDP_VALUE_CAPS *,_HIDP_CAPS *,_HIDP_PREPARSED_DATA *,_HID_COLLECTION_INFORMATION,unsigned short,unsigned long *);
int RevalidateFrameProcessing(tagTHREADINFO *,int,tagPOINTERINFONODE const *,int);
int SBSetParms(tagSBDATA *,tagSCROLLINFO *,int *,long *);
int SPISetIconMetrics(_UNICODE_STRING *,tagICONMETRICSW *,int);
int SPISetIconTitleFont(_UNICODE_STRING *,tagLOGFONTW *,int);
int STROBJ_bEnumCheckBounds(_STROBJ *,unsigned long *,_GLYPHPOS * *,_RECTL *);
int STROBJ_bEnumLinked(ESTROBJ *,unsigned long *,_GLYPHPOS * *);
int STROBJ_bEnumPositionsOnlyLinked(ESTROBJ *,unsigned long *,_GLYPHPOS * *);
int STROBJ_bGetAdvanceWidthsLinked(ESTROBJ *,unsigned long,unsigned long,_POINTQF *);
int SendAsyncSGHOSTINFO(_GHOSTINFO * const);
int SetCustomFlick(tagCUSTOM_FLICK *);
int SetFilterKeys(_UNICODE_STRING *,tagFILTERKEYS *);
int SetFlickMap(tagFLICK_MAP *,int);
int SetFrostProp(tagWND *,HWND__ *);
int SetGhostFNID(tagWND *,int);
int SetGhostProp(tagWND *,HWND__ *);
int SetGlobalDesktopPattern(HBITMAP__ *);
int SetGlobalWallpaperSettings(tagWALLPAPERSETTINGS const *);
int SetHighContrastWorker(tagINTERNALSETHIGHCONTRAST *,int,int *);
int SetLPITEMInfoNoRedraw(tagMENU *,tagITEM *,tagMENUITEMINFOW *,_UNICODE_STRING *,int *);
int SetMouseKeys(_UNICODE_STRING *,tagMOUSEKEYS *);
int SetNewValidState(unsigned int,tagINPUTPOINTERNODE *);
int SetPointerDataCaptureChanged(unsigned long,unsigned short);
int SetProcDeviceRequest(tagPROCESSINFO *,tagRAWINPUTDEVICE *,tagPROCESS_HID_REQUEST *,unsigned long,_REGISTER_RAW_INPUT_INTERNAL);
int SetRedirectionBitmap(tagWND *,HBITMAP__ * const,int);
int SetSoundSentry(_UNICODE_STRING *,tagSOUNDSENTRYW *);
int SetWindowCompositionInfo(tagWND *,WINDOWCOMPOSITIONINFO const *);
int SetWindowMetricInt(_UNICODE_STRING *,unsigned short,int);
int SetupQpcThresholdTimes(tagTPSTATE *);
int ShouldAddPointerWakeFlag(tagTHREADINFO const *,tagQMSG const *);
int ShouldApplyShellWindowingBehaviorToSysCommand(tagWND *,int);
int ShouldComposeWindow(tagWND * const,tagDESKTOP * const);
int ShouldSendCursorNotificationForExtensibility();
int ShouldSuppressClicks(tagTPSTATE const *);
int SizeRect(_MOVESIZEDATA *,unsigned long,tagMONITOR *,unsigned long *);
int SortGestureConfigArray(tagGESTURECONFIG *,int);
int SortTouchContacts(tagPOINTER_TOUCH_INFO *,unsigned int);
int SpAlphaBlend(_SURFOBJ *,_SURFOBJ *,_CLIPOBJ *,_XLATEOBJ *,_RECTL *,_RECTL *,_BLENDOBJ *);
int SpBitBlt(_SURFOBJ *,_SURFOBJ *,_SURFOBJ *,_CLIPOBJ *,_XLATEOBJ *,_RECTL *,_POINTL *,_POINTL *,_BRUSHOBJ *,_POINTL *,unsigned long);
int SpCopyBits(_SURFOBJ *,_SURFOBJ *,_CLIPOBJ *,_XLATEOBJ *,_RECTL *,_POINTL *);
int SpDrawStream(_SURFOBJ *,_SURFOBJ *,_CLIPOBJ *,_XLATEOBJ *,_RECTL *,_POINTL *,unsigned long,void *,_DSSTATE *);
int SpFillPath(_SURFOBJ *,_PATHOBJ *,_CLIPOBJ *,_BRUSHOBJ *,_POINTL *,unsigned long,unsigned long);
int SpGradientFill(_SURFOBJ *,_CLIPOBJ *,_XLATEOBJ *,_TRIVERTEX *,unsigned long,void *,unsigned long,_RECTL *,_POINTL *,unsigned long);
int SpLineTo(_SURFOBJ *,_CLIPOBJ *,_BRUSHOBJ *,long,long,long,long,_RECTL *,unsigned long);
int SpPlgBlt(_SURFOBJ *,_SURFOBJ *,_SURFOBJ *,_CLIPOBJ *,_XLATEOBJ *,tagCOLORADJUSTMENT *,_POINTL *,_POINTFIX *,_RECTL *,_POINTL *,unsigned long);
int SpStretchBlt(_SURFOBJ *,_SURFOBJ *,_SURFOBJ *,_CLIPOBJ *,_XLATEOBJ *,tagCOLORADJUSTMENT *,_POINTL *,_RECTL *,_RECTL *,_POINTL *,unsigned long);
int SpStretchBltROP(_SURFOBJ *,_SURFOBJ *,_SURFOBJ *,_CLIPOBJ *,_XLATEOBJ *,tagCOLORADJUSTMENT *,_POINTL *,_RECTL *,_RECTL *,_POINTL *,unsigned long,_BRUSHOBJ *,unsigned long);
int SpStrokeAndFillPath(_SURFOBJ *,_PATHOBJ *,_CLIPOBJ *,_XFORMOBJ *,_BRUSHOBJ *,_LINEATTRS *,_BRUSHOBJ *,_POINTL *,unsigned long,unsigned long);
int SpStrokePath(_SURFOBJ *,_PATHOBJ *,_CLIPOBJ *,_XFORMOBJ *,_BRUSHOBJ *,_POINTL *,_LINEATTRS *,unsigned long);
int SpTextOut(_SURFOBJ *,_STROBJ *,_FONTOBJ *,_CLIPOBJ *,_RECTL *,_RECTL *,_BRUSHOBJ *,_BRUSHOBJ *,_POINTL *,unsigned long);
int SpTransparentBlt(_SURFOBJ *,_SURFOBJ *,_CLIPOBJ *,_XLATEOBJ *,_RECTL *,_RECTL *,unsigned long,unsigned long);
int SpbCheckRect2(tagSPB *,tagWND *,tagRECT *,unsigned long);
int SpbTransfer(tagSPB *,tagWND *,int);
int SrcSurfaceAccessCheck(SURFACE *);
int StretchDIBDirect(void *,long,unsigned long,unsigned long,_RECTL *,void *,long,unsigned long,unsigned long,_RECTL *,_RECTL *,_RECTL *,unsigned long);
int SuppressContactForMultiFingerTap(tagTPCONTACTSTATE const *);
int SwpCalcVisRgn(tagWND *,HRGN__ *);
int TTBetterTarget(tagWND *,unsigned int,tagPNTRWINDOWHITTTESTARGS *,tagRECT *,unsigned long);
int TestRectBogus(tagRECT,int,int,int,int);
int TooltipAnimate(tagTOOLTIPWND *);
int TouchTargetingIsSpecialTarget(tagWND *,tagWND *);
int TouchTargetingLayerHitTest(tagWND *,tagPOINT,int,tagTOUCHTARGETINGCONTACT const *,tagRECT *,unsigned short *,tagPOINT *,tagTARGETING_PROPERTY);
int TraceLoggingSendMixedModeTelemetry();
int TrackBackground(tagWINDOWPOS *,tagWND *,tagWND *,tagWND *,tagWND *,tagWND *);
int TryRect(unsigned int,int,int,int,int,tagRECT *,tagPOINT *,tagMONITOR *);
int UMPDDrvAlphaBlend(_SURFOBJ *,_SURFOBJ *,_CLIPOBJ *,_XLATEOBJ *,_RECTL *,_RECTL *,_BLENDOBJ *);
int UMPDDrvBitBlt(_SURFOBJ *,_SURFOBJ *,_SURFOBJ *,_CLIPOBJ *,_XLATEOBJ *,_RECTL *,_POINTL *,_POINTL *,_BRUSHOBJ *,_POINTL *,unsigned long);
int UMPDDrvCopyBits(_SURFOBJ *,_SURFOBJ *,_CLIPOBJ *,_XLATEOBJ *,_RECTL *,_POINTL *);
int UMPDDrvDriverFn(void *,int *);
int UMPDDrvEnableDriver(unsigned short *,void * *);
int UMPDDrvEndDoc(_SURFOBJ *,unsigned long);
int UMPDDrvFillPath(_SURFOBJ *,_PATHOBJ *,_CLIPOBJ *,_BRUSHOBJ *,_POINTL *,unsigned long,unsigned long);
int UMPDDrvGradientFill(_SURFOBJ *,_CLIPOBJ *,_XLATEOBJ *,_TRIVERTEX *,unsigned long,void *,unsigned long,_RECTL *,_POINTL *,unsigned long);
int UMPDDrvIcmCheckBitmapBits(DHPDEV__ *,void *,_SURFOBJ *,unsigned char *);
int UMPDDrvIcmDeleteColorTransform(DHPDEV__ *,void *);
int UMPDDrvLineTo(_SURFOBJ *,_CLIPOBJ *,_BRUSHOBJ *,long,long,long,long,_RECTL *,unsigned long);
int UMPDDrvNextBand(_SURFOBJ *,_POINTL *);
int UMPDDrvPaint(_SURFOBJ *,_CLIPOBJ *,_BRUSHOBJ *,_POINTL *,unsigned long);
int UMPDDrvPlgBlt(_SURFOBJ *,_SURFOBJ *,_SURFOBJ *,_CLIPOBJ *,_XLATEOBJ *,tagCOLORADJUSTMENT *,_POINTL *,_POINTFIX *,_RECTL *,_POINTL *,unsigned long);
int UMPDDrvQueryAdvanceWidths(DHPDEV__ *,_FONTOBJ *,unsigned long,unsigned long *,void *,unsigned long);
int UMPDDrvQueryDeviceSupport(_SURFOBJ *,_XLATEOBJ *,_XFORMOBJ *,unsigned long,unsigned long,void *,unsigned long,void *);
int UMPDDrvQuerySpoolType(DHPDEV__ *,unsigned short *);
int UMPDDrvRealizeBrush(_BRUSHOBJ *,_SURFOBJ *,_SURFOBJ *,_SURFOBJ *,_XLATEOBJ *,unsigned long);
int UMPDDrvResetPDEV(DHPDEV__ *,DHPDEV__ *);
int UMPDDrvSendPage(_SURFOBJ *);
int UMPDDrvStartBanding(_SURFOBJ *,_POINTL *);
int UMPDDrvStartDoc(_SURFOBJ *,unsigned short *,unsigned long);
int UMPDDrvStartPage(_SURFOBJ *);
int UMPDDrvStretchBlt(_SURFOBJ *,_SURFOBJ *,_SURFOBJ *,_CLIPOBJ *,_XLATEOBJ *,tagCOLORADJUSTMENT *,_POINTL *,_RECTL *,_RECTL *,_POINTL *,unsigned long);
int UMPDDrvStretchBltROP(_SURFOBJ *,_SURFOBJ *,_SURFOBJ *,_CLIPOBJ *,_XLATEOBJ *,tagCOLORADJUSTMENT *,_POINTL *,_RECTL *,_RECTL *,_POINTL *,unsigned long,_BRUSHOBJ *,unsigned long);
int UMPDDrvStrokeAndFillPath(_SURFOBJ *,_PATHOBJ *,_CLIPOBJ *,_XFORMOBJ *,_BRUSHOBJ *,_LINEATTRS *,_BRUSHOBJ *,_POINTL *,unsigned long,unsigned long);
int UMPDDrvStrokePath(_SURFOBJ *,_PATHOBJ *,_CLIPOBJ *,_XFORMOBJ *,_BRUSHOBJ *,_POINTL *,_LINEATTRS *,unsigned long);
int UMPDDrvTextOut(_SURFOBJ *,_STROBJ *,_FONTOBJ *,_CLIPOBJ *,_RECTL *,_RECTL *,_BRUSHOBJ *,_BRUSHOBJ *,_POINTL *,unsigned long);
int UMPDDrvTransparentBlt(_SURFOBJ *,_SURFOBJ *,_CLIPOBJ *,_XLATEOBJ *,_RECTL *,_RECTL *,unsigned long,unsigned int);
int UMPDReleaseRFONTSem(RFONTOBJ &,UMPDOBJ *,unsigned long *,unsigned long *,int * *);
int UMPDServer(SURFACE *);
int UMPD_ldevFillTable(_LDEV *,int *);
int UT_CaretSet(tagWND *);
int UT_FindTopLevelMenuIndex(tagMENU *,unsigned int);
int UmfdEscPATHOBJ_bCommonTo(int (*)(_PATHOBJ *,_POINTFIX *,unsigned long),_PATHOBJ *,_POINTFIX *,unsigned long);
int UmfdInsertFontFileViewForLookup(_FONTFILEVIEW * *,unsigned int);
int UpdatePointerInfoTarget(unsigned __int64,tagWND *,int,int,tagPOINT *,tagPOINT *);
int UserTextOutWInternal(HDC__ *,int,int,unsigned short const *,unsigned int,unsigned long);
int VWPLAddBase(tagVWPL * *,unsigned __int64,tagWND *,unsigned long,int);
int VWPLRemoveBase(tagVWPL * *,unsigned __int64,tagWND *,int,unsigned __int64 *);
int ValidUmpdHdev(HDEV__ *);
int ValidUmpdHooks(PDEVOBJ *,unsigned long);
int ValidUmpdSizl(tagSIZE);
int ValidateAndLockCursor(tagCURSOR * *,int);
int ValidateChangeMessageFilter(tagPROCESSINFO *,unsigned int);
int ValidateDoubleClick(tagTAP_INFO const &,unsigned long,unsigned long,int);
int ValidateHWNDIA(HWND__ *,tagWND * *);
int ValidateHWNDND(HWND__ *,tagWND * *);
int ValidateInjectedTouchFrame(unsigned int,tagPOINTER_TOUCH_INFO *,tagINJECTED_CONTACT *,tagRECT *,unsigned int);
int ValidateParents(tagWND *,int);
int ValidatePointerPromotion(unsigned short,unsigned long,unsigned long *,tagMOUSE_PROMOTION_ENTRY * *,tagMOUSE_PROMOTION_ENTRY * *);
int ValidateSmwp(tagSMWP *,int *);
int ValidateState(unsigned long);
int ValidateWindowPos(tagCVR *,tagWND *);
int ValidateZorder(tagCVR *);
int VerifierRandomFailure(unsigned long);
int VerifyMagInputDimensions(_MAGN_INPUT_TRANSFORM *);
int VerticalSizeRectFromHitTarget(_MOVESIZEDATA *,tagMONITOR *,eTHRESHOLD_MARGIN_DIRECTION,tagMONITOR *,int,int);
int WantDirectPromotion(tagPOINTER_INFO const &,unsigned long *);
int WantImeWindow(tagWND *,tagWND *);
int WindowArrangementApplicable(tagWND *);
int WindowHasAnyCompositionTargetWithInputSink(tagWND *);
int WindowHasCompositionTarget(tagWND *,int);
int WindowMatchesDCE(tagWND * const,tagDCE const *);
int WriteAbsolute4(unsigned char *,unsigned char *,int,unsigned char *);
int WriteAbsolute8(unsigned char *,unsigned char *,int,unsigned char *);
int WriteEncoded4(unsigned char,unsigned char *,unsigned int,unsigned char *);
int WriteEncoded8(unsigned char,unsigned char *,unsigned int,unsigned char *);
int WriteFD_GLYPHSET(_FD_GLYPHSET *,_FD_GLYPHSET *,unsigned long);
int WritePredictionSettings(tagDEVICECONFIG_SETTING *,unsigned long,unsigned short const *,unsigned long);
int _CopyWindowCheckpoint(tagWND *,tagWND *);
int _DetachWindowCompositionTarget(tagWND *,int);
int _FindQMsgFromMsg(tagTHREADINFO * const,tagMSG * const,tagQMSG * *);
int _GetCurrentInputMessageSource(int,tagINPUT_MESSAGE_SOURCE *);
int _GhostOwnerWindowAndOwnees(tagWND *);
int _GhostWindow(tagWND *);
int _HandleDelegatedInput(tagTHREADINFO *,HDIOPTION,tagMSG * const);
int _HashTHQAText(unsigned char *,unsigned long,unsigned char * *,unsigned long *);
int _IsTaskWindow(tagWND *,tagWND *);
int _RemoveNonTaskWindows(tagBWL *,tagWND *,int *,HWND__ * * *);
int _ShouldFrostCrashedWindow(tagWND *);
int _ShouldFrostSiblingWindow(tagWND *);
int _ShouldGhostWindow(tagWND *);
int _ShouldMaximizeWindow(tagWND *);
int _StoreGestureConfig(tagWND *,unsigned int,tagGESTURECONFIG *);
int _SurfaceAccessCheck(SURFACE *);
int _TTCheckNCTarget(tagRECT,tagWND *,tagPNTRWINDOWHITTTESTARGS *,tagRECT *,unsigned short *,tagPOINT *,tagRECT *,unsigned long);
int _TTIntersectLine(tagPOINT,tagPOINT,tagTOUCHTARGETINGCONTACT const *,tagPOINT *,tagPOINT *);
int _TTIntersectSegmentAndLine(tagPOINT,tagPOINT,tagPOINT,tagPOINT,tagPOINT *);
int _ValidateInjectionQpcCount(unsigned __int64,unsigned __int64,unsigned __int64,int,int);
int _ValidateInjectionTime(unsigned long,unsigned long,unsigned long,int,int);
int bAddOverflow(__int64,__int64);
int bAddOverflow(long,long);
int bAddPgmToPath(EPATHOBJ &,long,long,long,long,long,long);
int bAddPrintKView(unsigned __int64,void *,unsigned long,unsigned __int64,_FONTFILE_PRINTKVIEW *);
int bAddRectToPath(EPATHOBJ &,_RECTL *);
int bAdjusBaseLine(RFONTOBJ &,RFONTOBJ &,_POINTL *);
int bAllowShareAccess(_SURFOBJ *);
int bAppendSysDirectory(unsigned short *,unsigned short const *,unsigned int);
int bBitBltFromScreen(_SURFOBJ *,_SURFOBJ *,_SURFOBJ *,_CLIPOBJ *,_XLATEOBJ *,_RECTL *,_POINTL *,_POINTL *,_BRUSHOBJ *,_POINTL *,unsigned long);
int bBitBltScreenToScreen(_SURFOBJ *,_SURFOBJ *,_CLIPOBJ *,_XLATEOBJ *,_RECTL *,_POINTL *,_POINTL *,_BRUSHOBJ *,_POINTL *,unsigned long);
int bBlurCursorShadow(_SURFOBJ *);
int bBmpMakeOpaque(SURFACE *);
int bBmpUndoMakeOpaque(SURFACE *);
int bBrushPath(SURFACE *,_PATHOBJ *,_RECTL *,_BRUSHOBJ *,_POINTL *,unsigned long,unsigned long);
int bBrushPathN_8x8(SURFACE *,_PATHOBJ *,_RECTL *,_BRUSHOBJ *,_POINTL *,unsigned long,unsigned long);
int bCachedMovePointerRefs;
int bCachedSetPointerRefs;
int bCalcGradientRectOffsets(_GRADIENTRECTDATA *);
int bCalcMeshExtent(_TRIVERTEX *,unsigned long,void *,unsigned long,unsigned long,_RECTL *);
int bCalculateAndDrawTriangle(SURFACE *,_TRIVERTEX *,_TRIVERTEX *,_TRIVERTEX *,_TRIANGLEDATA *,void (*)(SURFACE *,_TRIANGLEDATA *));
int bCalulateColorGradient(_TRIVERTEX *,_TRIVERTEX *,_TRIVERTEX *,_TRIANGLEDATA *);
int bCaptureLINEATTRS(_LINEATTRS * *,_LINEATTRS *);
int bCheckDestSurfaceOverlap(_SURFOBJ *,_RECTL *);
int bCheckSurfacePath(_SURFOBJ *,_PATHOBJ *,_CLIPOBJ *);
int bCheckSurfaceRect(_SURFOBJ *,_RECTL *,_CLIPOBJ *);
int bCheckSurfaceRectSize(_SURFOBJ *,_RECTL *,_CLIPOBJ *,unsigned long *,unsigned long *,int);
int bCheckXlate(_SURFOBJ *,_XLATEOBJ *);
int bCleanupFontHash(_FONTHASH * *);
int bCleanupFontTable(PFT * *);
int bCleanupSpriteStateRects(HDEV__ *,_SPRITESTATE *);
int bComputeGISET(_IFIMETRICS *,PFE *,_GISET * *);
int bComputeIntersect(EVECTORFX *,EVECTORFX *,EVECTORFX *,EVECTORFX *,EVECTORFX *);
int bComputeQuickLookup(_QUICKLOOKUP *,PFE *,int);
int bConcurrent(_SPRITESTATE *);
int bConvertDfbDcToDib(XDCOBJ *);
int bCopySection(void *,void *,unsigned __int64);
int bCopySurface(SURFMEM *,_SURFOBJ *);
int bCreateFontFileView(_FONTFILEVIEW const *,tagDOWNLOADFONTHEADER const *,unsigned long,_FONTFILEVIEW * * *,unsigned long);
int bCreateSection(unsigned short *,_FILEVIEW *,int,int *,unsigned char);
int bCreateSectionFromHandle(void *,unsigned short *,_FILEVIEW *,int,int *,unsigned char);
int bCreateSemaphores(_PANDEV *);
int bCurrentTlDriverCall(PDEVOBJ &);
int bDetermineAlphaBlendFunction(SURFACE *,SURFACE *,XEPALOBJ *,XEPALOBJ *,XLATE *,long,_ALPHA_DISPATCH_FORMAT *,int);
int bDetermineTriangleFillRoutine(SURFACE *,XEPALOBJ *,void (**)(SURFACE *,_TRIANGLEDATA *),void (**)(SURFACE *,_GRADIENTRECTDATA *));
int bDoGetSetBitmapBits(_SURFOBJ *,_SURFOBJ *,int);
int bDoGradient(__int64 *,__int64 *,__int64 *,long,long,long,_GRADSTRUCT *);
int bDwmDesktopOverlaysEnabled();
int bDwmDeviceBitmapsEnabled();
int bDwmDeviceBitmapsEnabledForMultiAdapter();
int bDwmOverlayTestMode();
int bDwmResizeOptimizationOverride(unsigned long *,unsigned long *,unsigned long *);
int bEllipse(EPATHOBJ &,EBOX &);
int bEndDocInternal(HDC__ *,unsigned long);
int bEngFastFillEnum(EPATHOBJ &,_RECTL *,unsigned long,void (*)(_RECTL *,unsigned long,void *),void (*)(long,_ROW *,unsigned long,void *),void *);
int bEqualRGB_In_Palette(XEPALOBJ,XEPALOBJ);
int bFastFill(long,_POINTFIX *,_RECTL *,void (*)(_RECTL *,unsigned long,void *),void (*)(long,_ROW *,unsigned long,void *),void *);
int bFill(EPATHOBJ &,_RECTL *,unsigned long,void (*)(_RECTL *,unsigned long,void *),void *);
int bFinallyInitializeFontAssocDefault;
int bFindPrintKView(unsigned __int64,unsigned long,_FONTFILE_PRINTKVIEW * *);
int bGIQtoIntegerLine(_POINTFIX *,_POINTFIX *,_RECTL *,_DDALINE *);
int bGetNtoD(_FD_XFORM *,tagLOGFONTW *,IFIOBJ &,DCOBJ *,_POINTL * const);
int bGetNtoD_Win31(_FD_XFORM *,tagLOGFONTW *,IFIOBJ &,DCOBJ *,unsigned long,_POINTL * const,int);
int bGetNtoWScale(EFLOAT *,DCOBJ &,RFONTOBJ &,PFEOBJ &);
int bGetNtoWScales(EPOINTFL *,XDCOBJ &,_FD_XFORM *,PFEOBJ &,int *);
int bGetNtoW_Win31(MATRIX *,tagLOGFONTW *,IFIOBJ &,DCOBJ *,unsigned long,int);
int bGetRealizedBrush(BRUSH *,EBRUSHOBJ *,int (*)(_BRUSHOBJ *,_SURFOBJ *,_SURFOBJ *,_SURFOBJ *,_XLATEOBJ *,unsigned long));
int bGlyphOutOfBounds(ESTROBJ *,_GLYPHPOS *,_RECTL *,unsigned long);
int bHookBmpDrv(XDCOBJ &);
int bHookRedir(XDCOBJ &);
int bIFIMetricsToLogFontW2(DCOBJ &,tagENUMLOGFONTEXW *,_IFIMETRICS *,EFLOATEXT);
int bIFIMetricsToTextMetricW2(DCOBJ &,_NTMW_INTERNAL *,PFEOBJ &,int,unsigned long,EFLOATEXT,long,long);
int bIgnoreDeviceSurfaceUpdates(_SURFOBJ *,_CLIPOBJ * *);
int bIgnoreMirrorUpdate(SPRITE *);
int bInitPlgDDA(_PLGDDA *,_RECTL *,_RECTL *,_POINTFIX *);
int bInitPrivatePFT();
int bInitializeEUDCInternal();
int bInsideDriverCall(_SPRITESTATE *);
int bIsCursorSprite(SPRITE *);
int bIsFileInSystemFontsDir(void *);
int bIsFreeHooked(DHPDEV__ *,UMPDOBJ *);
int bIsProcessLocalSystem(_EPROCESS *);
int bIsSourceBGRA(SURFACE *);
int bIsTriangleInBounds(_TRIVERTEX *,_TRIVERTEX *,_TRIVERTEX *,_TRIANGLEDATA *);
int bLines(_BMINFO *,_POINTFIX *,_POINTFIX *,_RUN *,unsigned long,_LINESTATE *,_RECTL *,void (**)(_STRIP *,_BMINFO *,_LINESTATE *),unsigned long,unsigned long *,long,_W32KCDD_ENG_CALLBACKS *);
int bMakeOpaque(SURFACE *);
int bMakePathRecords(_PATHRECORD *,unsigned long *,long,_POINTL *,unsigned long,long,long,_RECTFX *,_PATHRECORD * *);
int bMapFileRetainHandle(unsigned short *,_FILEVIEW *,int,int *);
int bMapRoutine(_FONTFILEVIEW *,_FILEVIEW *,_MAP_MODE,int);
int bMulOverflow(__int64,__int64);
int bNeedRenderHint(PDEVOBJ &);
int bOpenKey(unsigned short const *,void * *);
int bOrder(_RECTL *);
int bPaintPath(SURFACE *,_PATHOBJ *,_RECTL *,unsigned long,int,unsigned long);
int bParityViolatingXform(DCOBJ *);
int bPartialArc(PARTIALARC,EPATHOBJ &,EBOX &,EPOINTFL &,long,EFLOAT &,EPOINTFL &,long,EFLOAT &,long);
int bPartialQuadrantArc(PARTIALARC,EPATHOBJ &,EBOX &,EPOINTFL &,EFLOAT &,EPOINTFL &,EFLOAT &);
int bProxyDrvTextOut(XDCOBJ &,SURFACE *,ESTROBJ &,ECLIPOBJ &,_RECTL *,_RECTL *,_BRUSHOBJ *,_BRUSHOBJ *,_POINTL *,RFONTOBJ &,PDEVOBJ *,unsigned long,_RECTL *);
int bQueryValueKey(unsigned short *,void *,_KEY_VALUE_PARTIAL_INFORMATION *,unsigned long);
int bReadyToInitializeFontAssocDefault;
int bRectangleMesh(SURFACE *,_XLATEOBJ *,_TRIVERTEX *,unsigned long,_GRADIENT_RECT *,unsigned long,unsigned long,_RECTL *,_POINTL *);
int bRemoteDriverNeedsDeviceBitmaps(PDEVOBJ &);
int bRoundRect(EPATHOBJ &,EBOX &,long,long);
int bSafeCopyBits(void *,void *,unsigned long);
int bSafeReadBits(void *,void *,unsigned long);
int bSandboxedCurrentProcess();
int bSavePath(XDCOBJ &,long);
int bSaveRegion(DCOBJ &,long);
int bScanFamily(FHOBJ *,unsigned long,FHOBJ *,unsigned long,FHOBJ *,unsigned long,EFSOBJ *,unsigned long,_EFFILTER_INFO *,unsigned short const *);
int bScanFamilyAndFace(FHOBJ *,FHOBJ *,FHOBJ *,FHOBJ *,EFSOBJ *,unsigned long,_EFFILTER_INFO *,unsigned short const *);
int bScanTheList(FHOBJ *,unsigned long,EFSOBJ *,unsigned long,_EFFILTER_INFO *,unsigned short const *);
int bSecureBits(void *,unsigned long,void * *);
int bSetHTSrcSurfInfo(_SURFOBJ *,XEPALOBJ,_HTSURFACEINFO *,_XLATEOBJ *);
int bSetHTSurfInfo(_SURFOBJ *,_HTSURFACEINFO *,long);
int bSetPreviewRectContent(_SPRITESTATE *,_RECTL const *);
int bSetStockFont(void *,int,int);
int bSetupDefaultFlEntry();
int bShadowAlphaCursor(_SURFOBJ *,_SURFOBJ *,_SURFOBJ *,_XLATEOBJ *,_XLATEOBJ *,_RECTL *,int);
int bSpBltFromScreen(_SURFOBJ *,_SURFOBJ *,_SURFOBJ *,_CLIPOBJ *,_XLATEOBJ *,_RECTL *,_POINTL *,_POINTL *,_BRUSHOBJ *,_POINTL *,unsigned long);
int bSpBltScreenToScreen(_SURFOBJ *,_SURFOBJ *,_SURFOBJ *,_CLIPOBJ *,_XLATEOBJ *,_RECTL *,_POINTL *,_POINTL *,_BRUSHOBJ *,_POINTL *,unsigned long);
int bSpComputeScan(_SPRITESTATE *,SPRITE *,long,long,_SPRITESCAN * *,unsigned __int64 *);
int bSpCreateShape(SPRITE *,_POINTL *,_SURFOBJ *,_XLATEOBJ *,_RECTL *,PALETTE *,unsigned long,unsigned long,_RECTL *);
int bSpDwmCreateLogicalSurface(HDEV__ *,DWMSPRITE *,SFMLOGICALSURFACE *,tagSIZE *,SFMLOGICALSURFACE * *);
int bSpDwmNotifyDirty(HSPRITE__ *,SFMLOGICALSURFACE *,unsigned long,unsigned __int64);
int bSpDwmUpdateCursor(HSPRITE__ *,_SURFOBJ *,_SURFOBJ *,_XLATEOBJ *,_RECTL *,_BLENDFUNCTION *);
int bSpDwmUpdateDragRectShape(HDEV__ *,DWMSPRITE *,SFMLOGICALSURFACE *,tagPOINT *,tagSIZE *,unsigned long *,SFMLOGICALSURFACE * *);
int bSpDwmUpdateMaskCursor(HDEV__ *,DWMSPRITE *,SFMLOGICALSURFACE *,_SURFOBJ *,_SURFOBJ *,_RECTL *,unsigned long *,SFMLOGICALSURFACE * *);
int bSpDwmUpdateSpriteShape(HDEV__ *,DWMSPRITE *,SFMLOGICALSURFACE *,_SURFOBJ *,_RECTL *,PALETTE *,unsigned long *,_RECTL *,SFMLOGICALSURFACE * *);
int bSpDwmUpdateSurface(HWND__ *,unsigned int,unsigned __int64,XDCOBJ &,HSURF__ *,float,int,int,ERECTL &,REGION *);
int bSpDwmValidateSurface(XDCOBJ &,int,int,int,int);
int bSpGetSpriteClipRgns(HDEV__ *,RGNOBJAPI &);
int bSpPtInSprite(SPRITE *,int,int);
int bSpSpriteOnTopOfWndObjInZ(SPRITE *,EWNDOBJ *);
int bSpTearDownSprites(HDEV__ *,_RECTL *,int);
int bSpTransferShape(SPRITE *,SPRITE *);
int bSpUpdateAlpha(SPRITE *,_BLENDFUNCTION *,int);
int bSpUpdateCursor(SPRITE *,_SURFOBJ *,_SURFOBJ *,_XLATEOBJ *,_RECTL *);
int bSpUpdateDeviceSurface(_SURFOBJ *,_CLIPOBJ * *,RGNOBJ &,ECLIPOBJ *);
int bSpUpdatePosition(SPRITE *,_POINTL *,int,int);
int bSpUpdateShape(SPRITE *,unsigned long,HDC__ *,HDC__ *,unsigned long,_BLENDFUNCTION *,_POINTL *,tagSIZE *,_RECTL *);
int bSpUpdateSprite(SPRITE *,HDC__ *,_POINTL *,tagSIZE *,HDC__ *,_POINTL *,unsigned long,_BLENDFUNCTION *,unsigned long,_RECTL *);
int bSpUpdateSpriteDevLockEnd(HDEV__ *,XDCOBJ &,_RECTL *);
int bSpWndObjTrackedSprite(SPRITE *);
int bSplitTriangle(_TRIVERTEX *,unsigned long *,_GRADIENT_TRIANGLE *,unsigned long *,unsigned char *);
int bSrcCopySRLE4D1(BLTINFO *);
int bSrcCopySRLE4D16(BLTINFO *);
int bSrcCopySRLE4D24(BLTINFO *);
int bSrcCopySRLE4D32(BLTINFO *);
int bSrcCopySRLE4D4(BLTINFO *);
int bSrcCopySRLE4D8(BLTINFO *);
int bSrcCopySRLE8D1(BLTINFO *);
int bSrcCopySRLE8D16(BLTINFO *);
int bSrcCopySRLE8D24(BLTINFO *);
int bSrcCopySRLE8D32(BLTINFO *);
int bSrcCopySRLE8D4(BLTINFO *);
int bSrcCopySRLE8D8(BLTINFO *);
int bStrokeCosmetic(SURFACE *,_PATHOBJ *,_CLIPOBJ *,_BRUSHOBJ *,_LINEATTRS *,unsigned long);
int bSubOverflow(long,long);
int bSyncBrushObj(BRUSH *);
int bTriangleMesh(SURFACE *,_XLATEOBJ *,_TRIVERTEX *,unsigned long,_GRADIENT_TRIANGLE *,unsigned long,unsigned long,_RECTL *,_RECTL *,_POINTL *);
int bTurnLeftRandom(EVECTORFX *,EVECTORFX *);
int bUMPDSecurityGateEx();
int bUnHookBmpDrv(XDCOBJ &);
int bUnHookRedir(XDCOBJ &);
int bUndoMakeOpaque(SURFACE *);
int bValidVertexMeshData(_TRIVERTEX *,void *,unsigned long,unsigned long,unsigned long);
int bVerifyEngCopyParameters(_SURFOBJ *,_SURFOBJ *,_CLIPOBJ *,_RECTL *,_POINTL *,int);
int bWorldMatrixInRange(MATRIX *);
int bWorldXformIdentity(_XFORML const *);
int bhLSurfDestroyLogicalSurfaceObject(SFMLOGICALSURFACE *,int,_CLEANUPTYPE);
int catomSysTableEntries;
int cjGetLogicalColorSpace(void *,int,void *);
int const * const aiStart;
int fBlockExtEscape(DCOBJ &);
int gDpiAdjustedForLoggedOnUser;
int gIsButtonHeld;
int gPalmRejectInitialized;
int gSafeModeStrLen;
int g_bUseMoveHints;
int gbAnyLinkedFonts;
int gbFinishDefGUIFontInit;
int gbGreTextReady;
int gbNetworkFontsLoaded;
int gbNoHookBmpDev;
int gbNoHookRedir;
int gbPermanentFontsLoaded;
int gbPermanentT1FontsLoaded;
int gbShellFontCompatible;
int gbSystemDBCSFontEnabled;
int gbTapTimerFired;
int gbWndobjUpdate;
int gfDwmDeviceBitmapsEnabled;
int gfDwmDeviceBitmapsEnabledForMultiAdapter;
int gfDwmResizeOptimizationOverride;
int gfEnableDeviceBitmapsForNonHintedShapes;
int gfGdiEnabled;
int gfRedoFullScreenSwitch;
int gfUMPDDebug;
int gfWinMsgSQMIsOptedIn;
int giSetupExe;
int greenloop(int);
int iCheckPassthroughImage(DCOBJ &,PDEVOBJ &,int,int,void *,int,void *);
int iOpenGLExtEscape(DCOBJ &,int,int,void *,int,void *);
int iWndObjSetupExtEscape(DCOBJ &,int,int,void *,int,void *);
int pConvertDfbSurfaceToDibPostNKAPC(HSURF__ *);
int pSpHintSpriteShape(SPRITE *,HBITMAP__ *,int);
int redloop();
int wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(wil_details_FeaturePropertyCache *,unsigned int,wil_details_ServiceReportingKind,unsigned int,unsigned __int64);
int wil_details_ModifyFeatureData(wil_details_FeaturePropertyCache *,int (*)(wil_details_FeaturePropertyCache *,void *),void *);
int wil_details_SetPropertyCacheOpportunityCallback(wil_details_FeaturePropertyCache *,void *);
int wil_details_SetPropertyCacheUsageCallback(wil_details_FeaturePropertyCache *,void *);
int wil_details_SetPropertyFlagCallback(wil_details_FeaturePropertyCache *,void *);
int xxxActivateOnMinimize(tagWND *);
int xxxApplyArrangeAction(tagWND *,_WARR_STATES,_WARR_ACTIONS,long,_MOVESIZEDATA *);
int xxxCalcValidRects(tagSMWP *,HWND__ * *);
int xxxCallIAMWindowManagementHandler(_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO const * const);
int xxxCheckImeShowStatus(tagWND *,tagTHREADINFO *);
int xxxClientCopyDDEIn2(tagINTDDEINFO *);
int xxxCompositedTraverse(tagWND *);
int xxxCreateDisconnectDesktop(HWINSTA__ *,tagWINDOWSTATION *);
int xxxDWPPrint(tagWND *,HDC__ *,__int64);
int xxxDWP_SetCursor(tagWND *,HWND__ *,int,unsigned int);
int xxxDetermineTouchpadPointerTargetWindow(tagTHREADINFO *,tagPOINTERINPUTFRAME const *,tagPOINTERINFONODE const *,tagQ *,unsigned long,int,int *,tagPOINT *,tagWND * *);
int xxxDiscardPointerWindowFrameMessages(tagTHREADINFO *,unsigned __int64);
int xxxDoTPButtonProcessing(tagPOINTERINPUTFRAME const *,tagTPSTATE *,tagHID_POINTER_DEVICE_INFO *,int,unsigned long,int *);
int xxxDoTPDiscreteButtonProcessing(tagPOINTERINPUTFRAME const *,tagTPSTATE *,int *,int *);
int xxxEnableSBCtlArrows(tagWND *,unsigned int);
int xxxEnableWindowWorker(tagWND *,int);
int xxxEnableWndSBArrows(tagWND *,unsigned int,unsigned int);
int xxxEnumTurnOffCompositing(tagWND *,__int64);
int xxxForceSizeRecToDockTarget(_MOVESIZEDATA *,eTHRESHOLD_MARGIN_DIRECTION,tagMONITOR *,unsigned long *,tagRECT *,tagCHECKPOINT * *);
int xxxGetSizeRectFromShell(_MOVESIZEDATA *,tagMONITOR *,eTHRESHOLD_MARGIN_DIRECTION,tagRECT *);
int xxxHandleDesktopMessages(tagTHREADINFO *,tagTERMINAL *);
int xxxHotTrackMenu(tagWND *,unsigned int,int);
int xxxLoadPermanentFonts();
int xxxMNDoScroll(SmartObjStackRef<tagPOPUPMENU>,unsigned int,int);
int xxxMNGetBitmapSize(tagMENU *,tagITEM *,tagWND *,int,HDC__ *);
int xxxMNHideNextHierarchy(SmartObjStackRef<tagPOPUPMENU>);
int xxxMNItemSize(tagMENU *,tagWND *,int,HDC__ *,tagITEM *,int,tagPOINT *);
int xxxMNRemoveMessage(unsigned int,unsigned int);
int xxxMouseActivate(tagTHREADINFO *,tagWND *,tagQMSG const *,int);
int xxxMouseEventDirect(unsigned long,unsigned long,unsigned long,unsigned long,unsigned __int64,unsigned __int64,unsigned __int64,int);
int xxxNotifyCaptureChangeIfCaptured(unsigned __int64,tagWND *,int);
int xxxNotifyIAMWindowManagementEvent(_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO const * const);
int xxxNotifyShellOfWallpaperChange();
int xxxProcess2FingerTap(tagPOINTERINFONODE *,tagTPSTATE *,int,unsigned long);
int xxxProcessEdgyAndGeneratePointerMessages(void *,tagPOINTERINPUTFRAME const *,int,int);
int xxxProcessTapsFor3orMoreContacts(tagPOINTERINPUTFRAME const *,tagTPSTATE *,unsigned long,unsigned __int64,unsigned __int64);
int xxxProgrammaticSemiMaximize(_MOVESIZEDATA *,tagMONITOR *,eTHRESHOLD_MARGIN_DIRECTION);
int xxxReadPostMessage(tagTHREADINFO *,tagMSG *,tagWND *,unsigned int,unsigned int,_QMSG_POSTCHAR_FLAGS *,int);
int xxxRealSleepThread(unsigned int,unsigned long,int,int,SLEEP_STATUS *);
int xxxRemoveDeleteMenuHelper(tagMENU *,unsigned int,unsigned long,int);
int xxxRouteSyntheticTouchpadToMT(unsigned int,tagPOINT,tagPOINT,unsigned __int64);
int xxxSPISetMinMetrics(_UNICODE_STRING *,tagMINIMIZEDMETRICS *,int);
int xxxSPISetNCMetrics(_UNICODE_STRING *,tagNONCLIENTMETRICSW *,int);
int xxxSendBSMtoDesktop(tagWND *,unsigned int,unsigned __int64,__int64,tagBROADCASTSYSTEMMSGPARAMS *,int);
int xxxSendDpiChangedMessageToChildWindow(HWND__ *,int);
int xxxSendDpiChangedMessageToTopLevelWindow(tagWND *,tagRECT *,unsigned short);
int xxxSendDpiChangedMsgs(tagWND *,tagRECT *,tagBWL *,unsigned short);
int xxxSendGDIScaledDpiChangedMessage(HWND__ *);
int xxxSendGDIScaledDpiChangedMsgs(tagWND *,tagBWL *);
int xxxSendSyncGHOSTINFO(_GHOSTINFO *);
int xxxSetAndDrawMinMetrics(_UNICODE_STRING *,tagMINIMIZEDMETRICS *);
int xxxSetAndDrawNCMetrics(_UNICODE_STRING *,int,tagNONCLIENTMETRICSW *);
int xxxSetClassIconEnum(tagWND *,__int64);
int xxxSetConsoleCaretInfo(_CONSOLE_CARET_INFO *);
int xxxSetPointerFrameTargetWindows(tagTHREADINFO *,unsigned __int64,unsigned int,int *);
int xxxSetSPIMetrics(_UNICODE_STRING *,unsigned long,void *,int,int *);
int xxxShowSwitchWindow(tagWND *);
int xxxShowTooltip(tagTOOLTIPWND *);
int xxxSizeOrMoveRect(_MOVESIZEDATA *,unsigned long,unsigned long *,tagRECT *,tagCHECKPOINT * *);
int xxxSwpActivate(tagWND *);
int xxxTooltipGetSizeAndPosition(tagTOOLTIPWND *,tagSIZE *,tagPOINT *);
int xxxTooltipHandleTimer(tagTOOLTIPWND *,unsigned int);
int xxxTrackInitSize(tagWND *,unsigned int,unsigned __int64,__int64,_MOVESIZEDATA *);
int xxxUnlockMenuStateInternal(tagMENUSTATE *,int);
int xxxVolumeUpDownComboSupported();
int xxxbEnumerateRegistryFonts(unsigned long,unsigned int,unsigned short const *,unsigned short const *);
int xxxbEnumerateRegistryFontsInternal(void *,unsigned long);
int zzzApplyShadow(tagWND *,tagWND *);
int zzzJournalAttach(tagTHREADINFO *,int);
int zzzMNFadeSelection(tagMENU *,tagITEM *);
long * aiLineMix;
long * alAlpha;
long * alAlpha_255;
long * galBitsPerPixel;
long * galFloat;
long * galFloatNeg;
long * gaspAlternateStyle;
long AllocAndCopyRegistryEntries<_FONTMAPPERFAMILYFALLBACK,1179012423>(unsigned long *,_FONTMAPPERFAMILYFALLBACK * *,unsigned long *,_FONTMAPPERFAMILYFALLBACK const *);
long AllocAndCopyRegistryEntries<_FONTSUB,1651729991>(unsigned long *,_FONTSUB * *,unsigned long *,_FONTSUB const *);
long AllocateCallbackData(_CAPTUREBUF *,unsigned long,void * *);
long AttachInputQueueToWindow(tagWND *,IInputQueue *);
long AttachWindowCompositionTarget(HWND__ *,int,CompositionObject *);
long BuildSignatureFeatureReport(_HIDP_CAPS *,_HIDP_VALUE_CAPS *,_DEVICE_OBJECT *,_FILE_OBJECT *,char * *,char * *);
long CaptureAnsiCallbackData(_CAPTUREBUF *,void *,unsigned long,void * *);
long CaptureCallbackData(_CAPTUREBUF *,void *,unsigned long,void * *);
long CaptureUnicodeCallbackData(_CAPTUREBUF *,void *,unsigned long,void * *);
long CheckForSegmentedSignatureBlob(void *,unsigned short,_HIDP_VALUE_CAPS *,unsigned short *);
long CheckProcessForeground(tagTHREADINFO *);
long CleanupPlaySound();
long CreateDesktopNotificationEvent(void *);
long CreatePredictionSettings(tagDEVICECONFIG_SETTING *,unsigned long,unsigned short *,unsigned long);
long CreateShutdownEvent(unsigned short const *,unsigned long,void * *);
long DetachWindowCompositionTarget(HWND__ *,int);
long DeviceCDROMNotify(_TARGET_DEVICE_CUSTOM_NOTIFICATION *,_CDROM_NOTIFY *);
long DeviceClassCDROMNotify(_DEVICE_INTERFACE_CHANGE_NOTIFICATION *,void *);
long DxLddmSharedPrimaryLockNotification(_LUID,unsigned int,_RECTL const *);
long DxLddmSharedPrimaryUnLockNotification(_LUID,unsigned int);
long EngFastFill(_SURFOBJ *,_PATHOBJ *,_RECTL *,_BRUSHOBJ *,_POINTL *,unsigned long,unsigned long);
long ExtractReportUsages(_HIDP_REPORT_TYPE,_HIDP_PREPARSED_DATA *,UsageValueInfo const *,unsigned int,void const *,unsigned long,UsageValue *);
long FindMirrorDriver(unsigned short const *,_DISPLAY_DEVICEW *);
long GdiDeleteSprite(HDEV__ *,HWND__ *,void *);
long GetConsoleHostProcess(unsigned long,void * *);
long GetCurrentOrientation(unsigned long *);
long GetDeviceId(_UNICODE_STRING,unsigned short * *,unsigned short * *);
long GetGreRegKey(void * *,unsigned long,unsigned short const *);
long GetInstanceId(_UNICODE_STRING,unsigned short * *,unsigned short * *);
long GetPredictionSettings(tagDEVICECONFIG_SETTING *,unsigned long,unsigned short *,unsigned long);
long GetProcessSessionFonts(_EPROCESS *,unsigned int,unsigned int,unsigned int *,unsigned int *,void * *,unsigned short *);
long GetTiltKeyName(_UNICODE_STRING,unsigned short * *,int);
long GreDeleteSpriteInternal(HDEV__ *,HWND__ *,void *,int);
long GrepDwmCreateComposedEvent(DwmState *);
long GrepSfmGetDirtyRgn(SFMLOGICALSURFACE *,unsigned __int64,HRGN__ * *,HRGN__ * *,HRGN__ * *,HRGN__ * *,_POINTL *,int *,int *);
long InitMapSharedSection(_EPROCESS *,_USERCONNECT *);
long InitMitIocpSupport(int,void *,void *);
long InitPlaySound();
long InitiateShutdownW(_ETHREAD *,unsigned long *);
long InkProcessorOnInkDeviceAttached(RawInputManagerDeviceObject *);
long InkProcessorProcessInkFeedbackCommand(unsigned int,void *,unsigned int);
long IsGetDpiSettingSupported();
long IsGetDpiSettingWithNoDefaultSupported();
long IsGetWin8StyleDpiSettingFromRegistrySupported();
long IsSetDpiScalingSettingSupported();
long IsSetDpiSettingSupported();
long Is_MonitorFromPointSupported();
long Is_MonitorFromRectSupported();
long KeyboardDeviceSpecificCallout(void *,_UNICODE_STRING *,_INTERFACE_TYPE,unsigned long,_KEY_VALUE_FULL_INFORMATION * *,_CONFIGURATION_TYPE,unsigned long,_KEY_VALUE_FULL_INFORMATION * *,_CONFIGURATION_TYPE,unsigned long,_KEY_VALUE_FULL_INFORMATION * *);
long MagpUpdateInputTransfrom(_MAGN_INPUT_TRANSFORM *);
long MapFontFileInKernel(void *,void * *);
long MapViewOfSectionToFontDriverProcess(_FILEVIEW *);
long MulRenderHint(DHPDEV__ *,unsigned long,unsigned __int64,void *);
long MulSynchronizeRedirectionBitmaps(DHPDEV__ *,unsigned __int64 *);
long ObtainSectionForNetworkedFontFile(_UNICODE_STRING *,_FILEVIEW *,_OBJECT_ATTRIBUTES *,_LARGE_INTEGER *,bool);
long OnInteractiveControlInputReport(RawInputManagerDeviceObject *,void *,unsigned long);
long OpenDeviceCfgKey(unsigned long,unsigned short *,unsigned long,void * *,int);
long OpenUserProfileKeyForPTP(unsigned long,void * *);
long PffDuplicateFileHandle(PFF *,_EPROCESS *,_EPROCESS *,void * *);
long QueryNameStringFromHandle(void *,_OBJECT_NAME_INFORMATION *,unsigned long,char);
long ReadCalibrationDataImp(_UNICODE_STRING,_UNICODE_STRING,unsigned long *,unsigned char * *);
long ReadPointerDeviceCfgDWORDSetting(void *,tagDEVICECONFIG_SETTING *);
long ReadPointerDeviceCfgStringSetting(void *,unsigned short const *,unsigned short *,unsigned long);
long ReadTabletButtonConfig(unsigned int,unsigned short const * const,tagTABLET_BUTTON_DESK_CONFIG *);
long ReadTabletButtonIndex(unsigned int,unsigned long *);
long RegQueryValueCal(void *,_UNICODE_STRING,unsigned long,unsigned char *,unsigned long,unsigned long *);
long ReportHungExplorerToWer(tagDESKTOP *,tagTHREADINFO const *);
long ReserveCaptureBytes(_CAPTUREBUF *,unsigned long,void * *,void * *);
long RetrieveSegmentedBlob(_DEVICE_OBJECT *,_FILE_OBJECT *,char * *,char * *,_HIDP_CAPS *,_HIDP_PREPARSED_DATA *,_HIDP_VALUE_CAPS);
long RtlStringCbCopyA(char *,unsigned __int64,char const *);
long RtlStringCchCopyW(unsigned short *,unsigned __int64,unsigned short const *);
long RtlStringCchPrintfExW(unsigned short *,unsigned __int64,unsigned short * *,unsigned __int64 *,unsigned long,unsigned short const *,...);
long RtlStringCchPrintfW(unsigned short *,unsigned __int64,unsigned short const *,...);
long SafeDivide<long,long,long>(long,long,long *);
long SafeDivide<unsigned long,unsigned long,unsigned long>(unsigned long,unsigned long,unsigned long *);
long ScrutinizeFontLoad(_W32KFontSourceType,unsigned short const *);
long SendSyncOutputIrpRequest(unsigned long,char *,unsigned long,_FILE_OBJECT *,_DEVICE_OBJECT *);
long SetDisconnectDesktopSecurity(HDESK__ *);
long SpDdCreateFullscreenSprite(HDC__ *,unsigned long,void * *,HDC__ * *);
long SpDdDestroyFullscreenSprite(HDC__ *,void *);
long SpDdNotifyFullscreenSpriteUpdate(HDC__ *,void *);
long SpNotifyLSurface(HDEV__ *,HLSURF__ *,int,unsigned long,_CD_HLSURF_CREATIONCONTEXT *);
long SpNotifyLSurfaceRedirSurfAssoc(HDEV__ * const,HLSURF__ *,_SURFOBJ *,int);
long SpNotifyLSurfaceTracking(HDEV__ *,HLSURF__ *,int);
long SpRenderHint(PDEVOBJ &,_RENDERHINT_NOTIFY,unsigned __int64,void *);
long StringCchCatW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchCopyNW(unsigned short *,unsigned __int64,unsigned short const *,unsigned __int64);
long StringCchCopyW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchPrintfW(unsigned short *,unsigned __int64,unsigned short const *,...);
long SyncLpcCheckNtStatus(long,_PORT_MESSAGE *);
long TabletRetrieveDevMode(_devicemodeW *);
long TestWindowForCompositionTarget(HWND__ *,int);
long TryGetFileDeviceRemoteBit(void *,bool *);
long UMPDDrvQueryFontData(DHPDEV__ *,_FONTOBJ *,unsigned long,unsigned long,_GLYPHDATA *,void *,unsigned long);
long UmfdCallSessionInitialize();
long UmfdCancelServerOutstandingRequests(void *);
long UmfdClientSendAndWaitForCompletion(FontDriverType,FontDriverDdiRequest *);
long UmfdClientWaitForCompletion(void *,void *,unsigned int const *);
long UpdateWindowInputSinkHint(HWND__ *,int);
long ValidateAndAttachQueueToInputWindow(HWND__ *,IInputQueue *,tagWND * *);
long Win32kAddLeakTrackingSecondaryData(void *,long (*)(void *,_GUID const *,void *,unsigned long),_GUID const *);
long Win32kLeakTrackingLiveDumpCallback(void *,long (*)(void *,_GUID const *,void *,unsigned long),unsigned long,unsigned __int64,unsigned __int64,unsigned __int64,unsigned __int64,void *);
long WritePointerDeviceCfgSetting(void *,unsigned short const *,unsigned int,unsigned char *,unsigned int);
long _AttachWindowCompositionTarget(tagWND *,int,CompositionObject *);
long cjGetBrushOrPen(void *,int,void *);
long g_cTimerId;
long g_cVisibleComposited;
long gcEUDCCount;
long gcSynchronizeFlush;
long gcSynchronizeTimer;
long glInterSendMessage;
long glSendMessage;
long glpConvertDfbSurfaceToDibNKAPC;
long lCalculateTriangleArea(_TRIVERTEX *,_TRIVERTEX *,_TRIVERTEX *,_TRIANGLEDATA *);
long lGetDefaultWorldHeight(DCOBJ *);
long lGetQuadrant(EPOINTFL &);
long lSizeDDA(_PLGDDA *);
long pppUserModeCallback(unsigned long,void *,unsigned long,void *,unsigned long);
long xxxCallGenerateIAMKey(tagIAM_KKEY *);
long xxxClientShutdown2(tagBWL *,unsigned int,unsigned __int64);
long xxxCreateDesktopEx2(tagWINDOWSTATION *,_ACCESS_STATE *,char,_UNICODE_STRING *,unsigned long,void * *);
long xxxInitTerminal(tagTERMINAL *);
long xxxRemoteSetDisconnectDisplayMode(tagDESKTOP *,unsigned short,_DXGK_DISPLAY_SCENARIO_CONTEXT *);
long xxxUserNotifyConsoleApplication(_CONSOLE_PROCESS_INFO *);
long xxxUserNotifyProcessCreate(unsigned long,unsigned long,unsigned __int64,unsigned long);
long zzzChangeStates(tagWND *,tagSMWP *);
tagBITMAPINFOHEADER * xxxBMPtoDIB(HBITMAP__ *,HPALETTE__ *,unsigned long *);
tagBWL * InternalBuildHwndList(tagBWL *,tagWND *,unsigned int);
tagBWL * InternalRebuildHwndListForIMEClass(tagBWL *,int);
tagBWL * pbwlCache;
tagCHECKPOINT * GetOrUpdateCheckPointIfNotPresent(_MOVESIZEDATA *);
tagCLS * ClassUnlockWorker(tagCLS *);
tagCOLORADJUSTMENT gcaDefault;
tagCURSOR * GetCurrentCursorFrame(tagCURSOR *);
tagCURSOR * xxxQueryDropObject(tagWND *,tagDROPSTRUCT *);
tagDDECONV * FindDdeConv(tagWND *,tagWND *);
tagDDECONV * UnlinkConv(tagDDECONV *);
tagDEVICECONFIG_SETTING * gTouchPadThresholdSettings;
tagDEVICECONFIG_SETTING * gaModeSettings;
tagDEVICECONFIG_SETTING * gaPenParameters;
tagDEVICECONFIG_SETTING * gaPredictionSettings;
tagDEVICECONFIG_SETTING * gaTouchGestureSettings;
tagDEVICECONFIG_SETTING * gaTouchPadSettings;
tagDEVICECONFIG_SETTING gMultiTouchGetSettings;
tagDPIMETRICS const * GetDPIMETRICS(tagWND *);
tagDpiKMMetricsCacheNode * EnsureKMDpiMetricsCacheNode(int);
tagFLICKCONFIG_SETTING * gaflickMap;
tagFLICK_MONITOR gFlickMapMonitor;
tagFORCE_LEGACY_MODE gForceLegacyMode;
tagFPMDATA * gapFPMData;
tagHID_PAGEONLY_REQUEST * AllocateAndLinkHidPageOnlyRequest(unsigned short);
tagHOTKEY * * gphkHashTable;
tagHOTKEYSTRUCT * * HotKeyHelper(tagWND *);
tagHPD_ACTIVE_DEVICE_LIST gActivePointerDeviceList;
tagHPD_PRIMARY_POINTERDEVICE_INFO gPrimaryPointerDevice;
tagIAM_THREAD * FindIAMThread(tagTHREADINFO const * const);
tagINPUTMESSAGE_RETRIEVE_RETVAL DiscardPointerMessage(tagTHREADINFO *,tagQMSG *,tagWND *,tagPOINTERINPUTFRAME const *,tagMSG *);
tagINPUTPOINTERNODE * CreateNode(unsigned short,unsigned long,unsigned int);
tagINPUTPOINTERNODE * FindNodeById(unsigned short,int,int);
tagINPUTTRANSFORMENTRY * FindEntryByTime(tagINPUTTRANSFORMLIST *,tagINPUTTRANSFORMENTRY *,unsigned __int64);
tagINPUTTRANSFORMLIST * InitInputTransformList(tagWND *);
tagINTERACTIVECTRL_INFO gLastInputInfo;
tagINTOBJTELEMETRYSTATE * gIntObjTelemetryState;
tagLOGFONTW GetLogFontFromUserProfile(_UNICODE_STRING *,unsigned int);
tagMENU * InternalCreateMenu(int);
tagMENU * UnlockSubMenu(tagMENU *,tagMENU * *);
tagMENU * xxxGetInitMenuParam(tagWND *,int *);
tagMENU * xxxGetScrollMenu(tagWND *,int);
tagMONITOR * FindNewMonitor(tagRECT *);
tagMONITOR * NormalizeRect(tagWND *,tagRECT *,tagRECT *,tagMONITORRECTS *,int,int);
tagMONITOR * _MonitorFromWindowInternal(tagWND *,unsigned long,int);
tagMONITOR * xxxNormalizeRect(tagWND *,tagRECT *,tagRECT *,tagMONITORRECTS *,int,int,int);
tagMONITOR_COUNT * aMonitorCount;
tagMOUSE_PROMOTION_CACHE * FindCacheById(unsigned short,unsigned long *);
tagMOUSE_PROMOTION_ENTRY * CreateMousePromotionEntry(tagPOINTER_INFO const &,unsigned short,unsigned short);
tagMOUSE_PROMOTION_ENTRY * DequeueMousePromotionEntry(tagMOUSE_PROMOTION_QUEUE &);
tagMOUSE_PROMOTION_ENTRY * FindMousePromotionEntry(tagMOUSE_PROMOTION_QUEUE const &,unsigned long);
tagMSGSQM_CACHE * MsgSQMGetMsgCache(tagPROCESSINFO *,int);
tagMSGSQM_MSGRECORD * MsgSQMGetMsgRecord(tagMSGSQM_MSGRECORD * *,tagMSGSQM_MSGRECORD const *,unsigned long);
tagMSGSQM_PROCESSPAIR * MsgSQMGetSourceListProcessPair(tagPROCESSINFO *,tagPROCESSINFO *,int);
tagPALETTEENTRY * apal3BPP;
tagPALETTEENTRY * apalMono;
tagPALETTEENTRY * apalVGA;
tagPALMREJECT_DATA gPalmRejectData;
tagPOINT MiPConvertPoint(tagPOINT const *);
tagPOINT gptCursorFullScreen;
tagPOINTERCOALESCEINFO * GetCoalesceInfo(unsigned long);
tagPOINTERCOALESCEINFO gPointerCoalesceInfo;
tagPOINTERINFONODE * FindNodeInFrame(tagPOINTERINPUTFRAME const *,unsigned short,unsigned long *);
tagPOINTERINFONODE * FindOrAssignPrimary(tagPOINTERINPUTFRAME const *,tagTPSTATE *,tagHID_POINTER_DEVICE_INFO *);
tagPOINTERINFONODE * FindValidNodeInFrame(tagPOINTERINPUTFRAME const *,unsigned short,unsigned long *);
tagPOINTERINPUTFRAME * CommitHoldingFrame(void *);
tagPOINTERINPUTFRAME * CommitRimCompleteFrame(void *);
tagPOINTERINPUTFRAME * CommitTPInputFrame();
tagPOINTERINPUTFRAME * FindFrameById(unsigned long);
tagPOINTERQFRAME * AllocPointerQFrameList(unsigned long);
tagPOINTERQFRAME * SetupNewQFrame(tagPOINTERINPUTFRAME *,tagPOINTERQFRAME * *,unsigned __int64,int);
tagPOINTERQFRAME * SetupQFrame(tagPOINTERINPUTFRAME *,unsigned __int64,int);
tagPOINTERRAWDATA * CopyRawDataList(tagPOINTERINPUTFRAME const *);
tagPOINTER_BUTTON_CHANGE_TYPE GetButtonChange(unsigned long,unsigned long);
tagPOINTER_INFO const * PrepareMakePointerMessage(unsigned __int64,tagPOINT *,int *,int *,int *);
tagPROCESSINFO * GetInputProcessContext(void *);
tagPROCESS_HID_REQUEST * AllocateHidProcessRequest(unsigned short,unsigned short);
tagPROCESS_HID_REQUEST * HidIsRequestedByThisProcess(DEVICEINFO *,tagPROCESS_HID_TABLE *);
tagPROCESS_HID_REQUEST * InProcessDeviceTypeRequestTable(tagPROCESS_HID_TABLE *,unsigned short,unsigned short);
tagPROCESS_HID_REQUEST * SearchProcessHidRequest(tagPROCESSINFO *,unsigned short,unsigned short,unsigned long *);
tagPUBOBJ * IsObjectPublic(void *);
tagQ * GetNodeQueue(tagPOINTERINFONODE const *,int *);
tagQ * GetQueueForCurrentNode(tagTHREADINFO *,int,unsigned int,int,tagPOINTERINFONODE const *);
tagQMSG * AllocQEntryEx(tagMLIST *,tagQMSG *,bool);
tagQMSG * FindNodeQueuedMessage(tagPOINTERINFONODE const *,int,tagQ * *);
tagQMSG * FindNodeQueuedMessageWorker(tagQ *,unsigned __int64,int,tagQ * *);
tagQMSG * FindQMsgForCoalesce(tagMLIST *,unsigned int,HWND__ *,tagQMSG *);
tagQMSG * GetCoalesceableMouseMessage(unsigned int,unsigned __int64 *,tagQMSG *,tagINPUT_MESSAGE_SOURCE *);
tagQMSG * _HandleDelegatedInputWorker(tagTHREADINFO *,unsigned long,tagQMSG *);
tagQMSG * _PostTransformableMessageExtended(tagWND *,unsigned int,unsigned __int64,__int64,tagINPUT_MESSAGE_SOURCE *,int);
tagQMSG * xxxSkipSysMsgEx(tagTHREADINFO *,tagQMSG *,int);
tagQMSG_HISTORY * gpQmsgHistory;
tagQMSG_HISTORY * gpQmsgHistory2;
tagRECT GetMonitorMenuRectForDpi(tagMONITOR const *,unsigned short);
tagRECT GetScreenRect(int,_D3DMATRIX const *,tagRECT);
tagRECT grcScreenFlash;
tagREMOTE_CONTEXT gRemoteContext;
tagSASKEY * gSasKeyList;
tagSETTINGS_MONITOR gModeMonitor;
tagSETTINGS_MONITOR gMultiTouchMonitor;
tagSETTINGS_MONITOR gPenMonitor;
tagSETTINGS_MONITOR gPredictionMonitor;
tagSETTINGS_MONITOR gTouchMonitor;
tagSETTINGS_MONITOR gTouchPadMonitor;
tagSHADOW * FindShadow(tagWND *);
tagSHADOW * gpshadowFirst;
tagSIZE ComputeMaxTrackSize(tagRECT,unsigned short);
tagSMWP * AddSelfAndOwnees(tagSMWP *,tagWND *,tagWND *,tagWND *,int,unsigned int);
tagSMWP * ZOrderByOwner(tagSMWP *);
tagSMWP * ZOrderByOwner2(tagSMWP *,int);
tagSVR_INSTANCE_INFO * psiiList;
tagSwitchWndInfo * Getpswi(tagWND *);
tagSwitchWndInfo * gpswiFirst;
tagTABLET_BUTTON_ACTION * gpTabBtnAction;
tagTABLET_BUTTON_CONFIG * TabButtonConfig;
tagTHREADINFO * GetRecalcPtiFromListEntry(_LIST_ENTRY *);
tagTHREADINFO * OtherThreadsKeyboardInput(tagQ *,tagQMSG *);
tagTHREADPOINTERDATA * AllocAndLinkThreadPointerData(tagTHREADINPUTPOINTERLIST *);
tagTHREADPOINTERDATA * FindThreadPointerData(_LIST_ENTRY *,unsigned short);
tagTIMER_COALESCING_STATE gTimerCoalCurrentState;
tagTPAAPDEFAULTS * gAapDefaults;
tagTP_PROCESSING_MODE xxxDoTPMouseProcessing(tagPOINTERINPUTFRAME const *,unsigned long,tagTPSTATE *);
tagTP_PROCESSING_MODE xxxInternalTPProcessing(int,tagTPSTATE *,tagHID_POINTER_DEVICE_INFO *,tagPOINTERINPUTFRAME const *,void *);
tagVSTATE gvs;
tagVWPLGESTUREDATA * GetGCData(tagWND *);
tagW32JOB * CreateW32Job(_EJOB *);
tagWINDOWPOS * FindValidWindowPos(tagSMWP *);
tagWND * CallDCompHitTestHelper(unsigned long,DIT_HITTESTATTRIBUTES const &,unsigned __int64,tagPOINT const &,tagWND * &,HWND__ * &,tagINPUTDEST *,int *,unsigned int *,int *);
tagWND * CheckTopLevelOnly(tagWND *);
tagWND * ClassicChildTreeSpeedHitTest(tagWND *,tagPOINT);
tagWND * DCETopLevelSpeedHitTest(tagDESKTOP *,tagPOINT *,_SUBPIXELS const *);
tagWND * DelegateCaptureInt(tagPOINTERCAPTUREDATA *,int);
tagWND * FindFakeMDIChild(tagWND *);
tagWND * GNT_NextTopScan(tagTHREADINFO *,tagWND *,tagWND *);
tagWND * GetCompositionInputWindowUIOwner(tagWND *);
tagWND * GetImmersiveRealmFallbackWindow(tagWND const *);
tagWND * GetLastNonBottomMostWindow(tagWND *,int);
tagWND * GetLastTopMostWindowNoIME(tagWND *);
tagWND * GetMenuPwnd(tagWND *,tagMENU *);
tagWND * GetNextLayeredWindow(tagWND *);
tagWND * GetNextLayeredWindowSubtree(tagWND *);
tagWND * GetPointerCaptureInt(tagPOINTERCAPTUREINFO *,int *);
tagWND * GetPrevMTNodeTarget(tagPOINTERINFONODE *,tagPOINTERINPUTFRAME *);
tagWND * GetPwndFromPointerMsgId(unsigned __int64);
tagWND * GetRealOwner(tagWND *);
tagWND * GetRootOwner(tagWND *);
tagWND * InitSwitchWndInfo(tagSwitchWndInfo * *,tagWND *,int);
tagWND * NTW_GetNextTop(tagTHREADINFO *,tagWND *);
tagWND * PwndFromHDC(HDC__ * const);
tagWND * ResolveDCompInputHandleToPwnd(HWND__ *,void *,unsigned long,unsigned __int64,tagINPUT_TRANSFORM *);
tagWND * TopLevelSpeedHitTest(tagDESKTOP *,tagPOINT *,_SUBPIXELS const *);
tagWND * TopLevelTouchTarget(tagWND *,tagTOUCHTARGETINGCONTACT *,tagPOINT *,tagPOINT *,int,unsigned __int64,int *,unsigned int *,tagINPUTDEST *);
tagWND * TrackZorder(tagWINDOWPOS *,tagWND *,tagWND *,tagWND *,HWND__ * *,HWND__ * *);
tagWND * UpdateInputCaptureAndGetTarget(tagPOINTEREVENTINT const *,tagINPUTPOINTERNODE *,unsigned int,HWND__ *,unsigned long,unsigned short *,unsigned int *);
tagWND * xxxClassicChildTreeSpeedHitTestWithDComp(tagWND *,unsigned long,DIT_HITTESTATTRIBUTES,unsigned __int64,tagPOINT,tagPOINT,int *,unsigned int *,tagINPUTDEST *);
tagWND * xxxDeterminePointerTargetWindow(tagTHREADINFO *,tagPOINTERINFONODE const *,tagQ *,int,int *,tagPOINT *);
tagWND * xxxInternalDoPaint(tagWND *,tagTHREADINFO *);
tagXSTATE * Createpxs(unsigned long (*)(unsigned long *,__int64 *,tagDDECONV *),void *,void *,tagINTDDEINFO *,unsigned long);
unsigned __int64 CoalesceNodeWithPrevious(tagPOINTERINPUTFRAME const *,tagPOINTERINPUTFRAME const *,tagPOINTERINFONODE *,unsigned long,int);
unsigned __int64 GetMiPWindowFlags(tagWND *);
unsigned __int64 GetThreadPointerData(tagTHREADINPUTPOINTERLIST *,unsigned short,unsigned long *,int *,HWND__ * *);
unsigned __int64 MulSaveScreenBits(_SURFOBJ *,unsigned long,unsigned __int64,_RECTL *);
unsigned __int64 PopFirstPendingDelegateCapture(tagTHREADINPUTPOINTERLIST *);
unsigned __int64 SaveScreen(tagWND *,unsigned long,unsigned __int64,int,int,int,int);
unsigned __int64 SpSaveScreenBits(_SURFOBJ *,unsigned long,unsigned __int64,_RECTL *);
unsigned __int64 apsoNineGridBitmap;
unsigned __int64 gidSynchronizeTimer;
unsigned __int64 gidTapTimer;
unsigned __int64 gmsInputEndTime;
unsigned __int64 gmsInputStartTime;
unsigned __int64 gmsLastUsageTelemetrySentTime;
unsigned __int64 gnRITdemonTimerId;
unsigned __int64 gqpcAgeLimit;
unsigned __int64 gqwTimeLastTap;
unsigned __int64 gtmridSoundSentry;
unsigned __int64 gtmridTabletButtonTimer;
unsigned __int64 gtmridTouchpadInertiaTimer;
unsigned __int64 uDiv128by64(unsigned __int64,unsigned __int64,unsigned __int64,unsigned __int64 &);
unsigned __int64 ulSimulateSaveScreenBits(_SURFOBJ *,unsigned long,unsigned __int64,_RECTL *);
unsigned __int64 xxxSetClassCursor(tagWND *,tagCLS *,unsigned long,unsigned __int64);
unsigned char * DefaultSaturationTable;
unsigned char * EndMask;
unsigned char * G_SavePerformanceStatistics;
unsigned char * HalftoneSaturationTable;
unsigned char * PixelLineMask4;
unsigned char * Saturation16_5;
unsigned char * Saturation16_6;
unsigned char * StartMask;
unsigned char * StartPixel(unsigned char *,unsigned long,unsigned long);
unsigned char * XLATEOBJ_pGetXlate555(_XLATEOBJ *);
unsigned char * ajConvert;
unsigned char * ajGammaCT_10;
unsigned char * ajGammaCT_11;
unsigned char * ajGammaCT_12;
unsigned char * ajGammaCT_13;
unsigned char * ajGammaCT_14;
unsigned char * ajGammaCT_15;
unsigned char * ajGammaCT_16;
unsigned char * ajGammaCT_17;
unsigned char * ajGammaCT_18;
unsigned char * ajGammaCT_19;
unsigned char * ajGammaCT_20;
unsigned char * ajGammaCT_21;
unsigned char * ajGammaCT_22;
unsigned char * ajGammaInvCT_11;
unsigned char * ajGammaInvCT_12;
unsigned char * ajGammaInvCT_13;
unsigned char * ajGammaInvCT_14;
unsigned char * ajGammaInvCT_15;
unsigned char * ajGammaInvCT_16;
unsigned char * ajGammaInvCT_17;
unsigned char * ajGammaInvCT_18;
unsigned char * ajGammaInvCT_19;
unsigned char * ajGammaInvCT_20;
unsigned char * ajGammaInvCT_21;
unsigned char * ajGammaInvCT_22;
unsigned char * gDitherMatrix16x16Default;
unsigned char * gDitherMatrix16x16Halftone;
unsigned char * gajStorage1;
unsigned char * gajStorageTable;
unsigned char * gajStorageTableBloated;
unsigned char * gbOrientationTable;
unsigned char * gpDefITable;
unsigned char * jSwapSubSpace;
unsigned char * vTranslateIdentity;
unsigned char AreDockTargetsActive(_MOVESIZEDATA *);
unsigned char InitLookAsideRef<tagPOPUPMENU>(tagPOPUPMENU *);
unsigned char IsDockTargetActive(_MOVESIZEDATA *,tagMONITOR *,eTHRESHOLD_MARGIN_DIRECTION);
unsigned char IsLeftOrRightArranged(tagWND *);
unsigned char IsSizingLEFT(int);
unsigned char IsSizingRIGHT(int);
unsigned char MapVGA(unsigned char,unsigned char,unsigned char);
unsigned char ScaleUpAlpha(unsigned char,float);
unsigned char XLATEOBJ_BGR32ToPalSurf(_XLATEOBJ *,unsigned char *,unsigned long);
unsigned char XLATEOBJ_RGB16_555ToPalSurf(_XLATEOBJ *,unsigned char *,unsigned long);
unsigned char XLATEOBJ_RGB16_565ToPalSurf(_XLATEOBJ *,unsigned char *,unsigned long);
unsigned char XLATEOBJ_RGB32ToPalSurf(_XLATEOBJ *,unsigned char *,unsigned long);
unsigned char XLATEOBJ_ulIndexToPalSurf(_XLATEOBJ *,unsigned char *,unsigned long);
unsigned char bCalcBreakExtra(EFLOAT,long,long,long *);
unsigned char bShouldUseSfmTokenArray(_LOGSURF_FLAGS);
unsigned char const * const acBits;
unsigned char gCurrentOrientation;
unsigned char interpolatePixel_6x5(unsigned char,unsigned char,unsigned char,unsigned char,unsigned char);
unsigned char jMapCharset(unsigned char,PFEOBJ &);
unsigned int * g_xTimes04;
unsigned int * g_xTimes09;
unsigned int * g_xTimes10;
unsigned int * g_xTimes6DividedBy216RoundUp;
unsigned int DrvGetRemoteDeviceCount();
unsigned int GetClipILIndexFromName(unsigned short *,unsigned int);
unsigned int GetMenuAncestors(tagMENU *);
unsigned int GetMenuDepth(tagMENU *,unsigned int);
unsigned int GreGetStringBitmapW(HDC__ *,unsigned short *,unsigned int,STRINGBITMAP *,unsigned int);
unsigned int MNSetTimerToOpenHierarchy(SmartObjStackRef<tagPOPUPMENU>);
unsigned int PointerFlagsToMessage(unsigned int);
unsigned int SmartRectInRegion(HRGN__ *,tagRECT *);
unsigned int VKTOMODIFIERS(unsigned char);
unsigned int _TTWindowPenalty(tagWND *,tagPNTRWINDOWHITTTESTARGS *,unsigned int);
unsigned int cjOTMAWSize(_IFIMETRICS *,unsigned int *);
unsigned int fFontAssocStatus;
unsigned int gForceFontAssocCodePage;
unsigned int g_UmfdFileViewKey;
unsigned int g_cDelayedUpdateSpriteNotifications;
unsigned int gcFPMEntries;
unsigned int gcSmsHighWaterMark;
unsigned int gfsModOnlyCandidate;
unsigned int gfsModifiers;
unsigned int giLinkWindowLogIndex;
unsigned int guMouseUpPending;
unsigned int guiKeyboardCorrectionCalloutTimeout;
unsigned int guiLinkWindowLogSize;
unsigned int iHash(unsigned short const *,unsigned int);
unsigned int xxxKeyboardCorrectionCallout(tagMSG const *,_QMSG_POSTCHAR_FLAGS);
unsigned int xxxMNPositionHierarchy(SmartObjStackRef<tagPOPUPMENU>,tagITEM *,int,int,int *,int *,tagMONITOR * *);
unsigned int xxxTA_AccelerateMenu(tagWND * const,tagMENU * const,unsigned int,HMENU__ * * const);
unsigned long (* gaaulPat)[8];
unsigned long * aulCacheCT;
unsigned long * aulDither4bppOrder;
unsigned long * aulDither8bppOrder;
unsigned long * aulLeftMask;
unsigned long * aulMsk;
unsigned long * aulMulFormat;
unsigned long * aulShiftFormat;
unsigned long * gComposeEventCompiledSd;
unsigned long * gacPalEntries;
unsigned long * gaflHardwareRound;
unsigned long * gaflRound;
unsigned long * gaulGeometricDash;
unsigned long * gaulGeometricDashDot;
unsigned long * gaulGeometricDashDotDot;
unsigned long * gaulGeometricDot;
unsigned long * gaulHatchStyles;
unsigned long * gulDither32;
unsigned long * ulNibbleTo4bppDword;
unsigned long * ulNibbleTo8bppDword;
unsigned long AbnormalDDEPost(tagDDECONV *,unsigned long);
unsigned long CalcOutputStringSize(_CALLBACKSTATUS *,unsigned long,int,int);
unsigned long CheckTransferState(tagTHREADINFO *,tagQ *,long,int);
unsigned long CoalescableDueTime(tagTIMER const *);
unsigned long ColorMatch(XEPALOBJ,_PAL_ULONG,unsigned long *);
unsigned long ComputeFileviewCheckSumInFontDriverAddressSpace(_FONTFILEVIEW * *,unsigned int);
unsigned long ConvertDisplayConfigRotationToDMDO(DISPLAYCONFIG_ROTATION);
unsigned long DT_GetLongChar(unsigned short const *,int,int);
unsigned long DetectPromotionType(tagMOUSE_PROMOTION_ENTRY const *,tagMOUSE_PROMOTION_ENTRY const *);
unsigned long DoFontManagement(DCOBJ &,unsigned long,unsigned long,void *,unsigned long,void *);
unsigned long DrawDiagonalLine(HDC__ *,tagRECT *,int,int,unsigned int);
unsigned long DwmSetPointerShape(_SURFOBJ *,_SURFOBJ *,_SURFOBJ *,_XLATEOBJ *,long,long,long,long,_RECTL *,unsigned long);
unsigned long GdiSetPointerShape(_SURFOBJ *,_SURFOBJ *,_SURFOBJ *,_XLATEOBJ *,long,long,long,long,_RECTL *,unsigned long);
unsigned long GetCloakFlags(WINDOWCOMPOSITIONINFO const *);
unsigned long GetMenuInheritedContextHelpId(SmartObjStackRef<tagPOPUPMENU>);
unsigned long GetOverlapCoordinatesForArrangement(tagRECT const * const,tagRECT const * const,int);
unsigned long GetPointerFlagsFromMouse(unsigned int *,unsigned int,unsigned __int64,unsigned long *,tagPOINTER_BUTTON_CHANGE_TYPE *);
unsigned long GetTouchTimeFromCPLValue(unsigned long,unsigned long,unsigned long,int);
unsigned long GreGetPerBandInfo(HDC__ *,_PERBANDINFO *);
unsigned long MenuItemState(tagMENU *,unsigned int,unsigned long,unsigned long,tagMENU * *);
unsigned long MonitorFlags;
unsigned long MulEscape(_SURFOBJ *,unsigned long,unsigned long,void *,unsigned long,void *);
unsigned long MulIcmSetDeviceGammaRamp(DHPDEV__ *,unsigned long,void *);
unsigned long PanDitherColor(DHPDEV__ *,unsigned long,unsigned long,unsigned long *);
unsigned long ReadScanLine(unsigned char *,unsigned long,unsigned long,unsigned long,unsigned long);
unsigned long RedirDrawEscape(_SURFOBJ *,unsigned long,_CLIPOBJ *,_RECTL *,unsigned long,void *);
unsigned long SizeOfDibColorTable(tagBITMAPINFOHEADER *);
unsigned long SkipScanLine(unsigned char *,unsigned long,unsigned long,unsigned long,unsigned long);
unsigned long SpontaneousTerminate(unsigned long *,tagDDECONV *);
unsigned long UMPDDrvDitherColor(DHPDEV__ *,unsigned long,unsigned long,unsigned long *);
unsigned long UMPDDrvDrawEscape(_SURFOBJ *,unsigned long,_CLIPOBJ *,_RECTL *,unsigned long,void *);
unsigned long UMPDDrvEscape(_SURFOBJ *,unsigned long,unsigned long,void *,unsigned long,void *);
unsigned long UMPDDrvFontManagement(_SURFOBJ *,_FONTOBJ *,unsigned long,unsigned long,void *,unsigned long,void *);
unsigned long UMPDDrvGetGlyphMode(DHPDEV__ *,_FONTOBJ *);
unsigned long UMPDDrvQueryPerBandInfo(_SURFOBJ *,_PERBANDINFO *);
unsigned long UnreferenceFrameInt(tagPOINTERINPUTFRAME *);
unsigned long _GetDigitizerFlags();
unsigned long _GetQpcBasedTouchStackTime();
unsigned long cComputeGISET(unsigned short *,unsigned long,_GISET *,unsigned long);
unsigned long cSpSubtract(_RECTL const *,_RECTL const *,_RECTL *);
unsigned long crSpGetShapePixel(_SURFOBJ *,int,int,int);
unsigned long dwGetFontLanguageInfo(XDCOBJ &);
unsigned long gCurrentMaxCount;
unsigned long gCurrentTimerCoalescingTolerance;
unsigned long gPalmRejectDelayNonEdge;
unsigned long gPalmRejectDisableThr;
unsigned long gPalmRejectEnabled;
unsigned long gPalmRejectHEdgeThr;
unsigned long gPalmRejectLastLoggedTelemTime;
unsigned long gPalmRejectTimeThr;
unsigned long gPalmRejectTopEdgeThr;
unsigned long gPalmRejectVEdgeThr;
unsigned long gSqmPenDownCount;
unsigned long gcfmffTable;
unsigned long gcfsCharSetTable;
unsigned long gcfsTable;
unsigned long gdwCurrentEffect;
unsigned long gdwDitIgnoredWakeReasons;
unsigned long gdwDwmResizeOptimizationOptions;
unsigned long gdwDwmResizeTimeoutGdi;
unsigned long gdwDwmResizeTimeoutModern;
unsigned long gdwHardwareTypes;
unsigned long gdwLocks;
unsigned long gdwMaxRetries;
unsigned long gdwOffset;
unsigned long gdwRITdemonTimerPowerSaveCoalescing;
unsigned long gdwRITdemonTimerPowerSaveElapse;
unsigned long gdwRitIgnoredWakeReasons;
unsigned long gdwShutdownFlags;
unsigned long gdwSystemMetrics;
unsigned long gdwUMPDUnmatchedUMPointers;
unsigned long glcidSystem;
unsigned long gnThreadsAffectedForQueueRecalc;
unsigned long gulCachedPointerRefs;
unsigned long gulGamma;
unsigned long iUniqueStamp;
unsigned long iXlate555ToBGR(_XLATEOBJ *,unsigned long);
unsigned long iXlate565ToBGR(_XLATEOBJ *,unsigned long);
unsigned long iXlateBGRTo555(_XLATEOBJ *,unsigned long);
unsigned long iXlateBGRTo565(_XLATEOBJ *,unsigned long);
unsigned long iXlateBitfieldsToBitfields(_XLATEOBJ *,unsigned long);
unsigned long nCalcJustInArray(unsigned int * *,unsigned short,void *,int,unsigned int);
unsigned long uBCacheCT;
unsigned long uFCacheCT;
unsigned long uGammaCacheCT;
unsigned long ulCallAndConvertFontOutput(RFONT *,_FONTOBJ *,unsigned long,_GLYPHDATA *,void *,unsigned long);
unsigned long ulClearTypeFilter_6x1(_GLYPHBITS *,_GLYPHDATA *,RFONT *);
unsigned long ulClearTypeFilter_6x5(_GLYPHBITS *,_GLYPHDATA *,RFONT *);
unsigned long ulFontLinkControl;
unsigned long ulGetFontData2(DCOBJ &,unsigned long,unsigned long,void *,unsigned long);
unsigned long ulSimpleDeviceOrientation(RFONTOBJ &);
unsigned long xxxAdvise(unsigned long *,__int64 *,tagDDECONV *);
unsigned long xxxAdviseAck(unsigned long *,__int64 *,tagDDECONV *);
unsigned long xxxAdviseData(unsigned long *,__int64 *,tagDDECONV *);
unsigned long xxxAdviseDataAck(unsigned long *,__int64 *,tagDDECONV *);
unsigned long xxxClientCopyDDEOut2(tagINTDDEINFO *);
unsigned long xxxCopyAckIn(unsigned long *,__int64 *,tagDDECONV *,tagINTDDEINFO * *);
unsigned long xxxCopyDdeIn(void *,unsigned long *,void * *,tagINTDDEINFO * *);
unsigned long xxxDupConvTerminate(unsigned long *,__int64 *,tagDDECONV *);
unsigned long xxxExecute(unsigned long *,__int64 *,tagDDECONV *);
unsigned long xxxExecuteAck(unsigned long *,__int64 *,tagDDECONV *);
unsigned long xxxMNRecalcTabStrings(HDC__ *,tagMENU *,unsigned int,unsigned int,unsigned long,unsigned long);
unsigned long xxxPoke(unsigned long *,__int64 *,tagDDECONV *);
unsigned long xxxPokeAck(unsigned long *,__int64 *,tagDDECONV *);
unsigned long xxxPollAndWaitForSingleObject(_KEVENT *,void *,unsigned long);
unsigned long xxxRequestAck(unsigned long *,__int64 *,tagDDECONV *);
unsigned long xxxUnadviseAck(unsigned long *,__int64 *,tagDDECONV *);
unsigned long xxxUnexpectedClientPost(unsigned long *,__int64 *,tagDDECONV *);
unsigned long xxxUnexpectedServerPost(unsigned long *,__int64 *,tagDDECONV *);
unsigned short (* gWatermarkStrings)[128];
unsigned short (* gastrSystemCursorBuffers)[260];
unsigned short * * gpwszFamilyDefaultFonts;
unsigned short * FindFaceName(unsigned long);
unsigned short * IsTooltipHittest(tagWND *,unsigned int);
unsigned short * aatomSysLoaded;
unsigned short * gawcSystemDBCSFontPath;
unsigned short * glpSetupPrograms;
unsigned short * gpwszFontsDirectory;
unsigned short * gwszSafeModeStr;
unsigned short EudcDefaultChar;
unsigned short GetCaptionChar(unsigned int);
unsigned short GetCurrentThreadCompositedDpi();
unsigned short GetHotKeyLangID(unsigned long);
unsigned short GetWindowCompositedDpi(tagWND *);
unsigned short ValidateClassAtomForRegisterClass(tagPROCESSINFO *,unsigned short);
unsigned short const * * g_fntCacheRegistryPaths;
unsigned short gSystemAnsiCodePage;
unsigned short gSystemOemCodePage;
void (* g_wil_details_pfnFeatureLoggingHook)(unsigned int,FEATURE_LOGGED_TRAITS const *,FEATURE_ERROR const *,int,wil_ReportingKind const *,wil_VariantReportingKind const *,unsigned char,unsigned __int64);
void (* g_wil_details_recordFeatureUsage)(unsigned int,wil_details_FeaturePropertyCache *,wil_details_RecordUsageResult *);
void (*(* TransFunctionTable)[7])(BLTINFO *);
void (*(* apfnPatBlt)[3])(_PATBLTFRAME *);
void (*(* apfnPatRect)[3])(_PATBLTFRAME *);
void (*(* apfnPatRow)[3])(_PATBLTFRAME *,long,int);
void (*(* gapfnOctant)[8])(_DDALINE *,unsigned char *,long,unsigned long);
void (** RopFunctionTable)(unsigned long *,unsigned long *,unsigned long *,unsigned long);
void (** SrcCopyFunctionTable)(BLTINFO *);
void (** SrcCopyTextFunctionTable)(unsigned char *,long,long,unsigned char *,long,long,long,long,unsigned long,unsigned long,SURFACE *);
void (** apfnGray)(_GLYPHBITS *,unsigned int,unsigned char *,unsigned int);
void (** gapfnHorizontal)(unsigned char *,long,long,unsigned long);
void (** gapfnStrip)(_STRIP *,_BMINFO *,_LINESTATE *);
void (** gapfnStripCddCallback)(_STRIP *,_BMINFO *,_LINESTATE *);
void (** grpVisCompStyleChangeAction)(tagWND *);
void (** pfnStrArray)(_STR_BLT *);
void (*xxxGetEventProc(tagEVENTHOOK *))(HWINEVENTHOOK__ *,unsigned long,HWND__ *,long,long,unsigned long,unsigned long);
void * * GetWindowGCList(tagWND *);
void * * GetWindowMessageFilter(tagWND *);
void * * MastertextTypeTabel;
void * * g_pUmfdClientPort;
void * * g_pUmfdServerPort;
void * AllocCallbackMessage(unsigned long,unsigned long,unsigned __int64,unsigned char *,int,unsigned __int64);
void * AnticipatePost(tagDDECONV *,unsigned long (*)(unsigned long *,__int64 *,tagDDECONV *),void *,void *,tagINTDDEINFO *,unsigned long);
void * BRUSHOBJ_pvAllocRbrushUMPD(_BRUSHOBJ *,unsigned long);
void * BRUSHOBJ_pvGetRbrushUMPD(_BRUSHOBJ *);
void * ClassAlloc(tagDESKTOP *,unsigned long,unsigned long);
void * EngCreateFile(unsigned short const *);
void * FONTOBJ_pvTrueTypeFontFileUMPD(_FONTOBJ *,unsigned long *,void * *);
void * GDINetworkedFontFileNodeAlloc(_RTL_AVL_TABLE *,unsigned long);
void * GDITrustedFontFileAlloc(_RTL_AVL_TABLE *,unsigned long);
void * G_SaveRemoteConnectionChannel;
void * GdiCreateSprite(HDEV__ *,HWND__ *,tagRECT *);
void * GetModuleHandleAndIncrementRefcount(unsigned short *);
void * GreCreateColorTransform(HDC__ *,tagLOGCOLORSPACEW *,void *,unsigned long,void *,unsigned long,void *,unsigned long);
void * GreCreateSpriteInternal(HDEV__ *,HWND__ *,tagRECT *,tagMINIWINDOWINFO *,unsigned long,int,int,int,int,int,unsigned short *);
void * HwndLookupAllocTableData(_RTL_GENERIC_TABLE *,unsigned long);
void * LoadModuleWorkHorse(unsigned short *,int);
void * MsgLookupTableAlloc(unsigned int);
void * SMSLookaside;
void * UMPDDrvIcmCreateColorTransform(DHPDEV__ *,tagLOGCOLORSPACEW *,void *,unsigned long,void *,unsigned long,void *,unsigned long,unsigned long);
void * UMPDDrvQueryFontTree(DHPDEV__ *,unsigned __int64,unsigned long,unsigned long,unsigned long *);
void * UmfdCreateRequestContext();
void * UmfdGetServerPort(FontDriverType);
void * gCDROMClassRegistrationEntry;
void * ghPntrProcRequestEvent;
void * ghPntrProcRunningEvent;
void * ghSwitcher;
void * ghdevTouchpad;
void * ghkeyGreInitialize;
void * gpEventMediaChange;
void * gpidEndSession;
void * hCacheCT;
void * hGetHandleFromFilePath(unsigned short const *,int);
void * pvFillOpaqTable(unsigned long,unsigned long,unsigned long,SURFACE *);
void * pvFillOpaqTableCT(unsigned long,unsigned long,unsigned long,SURFACE *,_BLENDINFO *,int);
void * pvGetEngRbrush(_BRUSHOBJ *);
void * xxxGetDummyBitmap(tagWINDOWSTATION *,tagGETCLIPBDATA *);
void * xxxGetDummyDib(tagWINDOWSTATION *,tagGETCLIPBDATA *);
void * xxxGetDummyDibV5(tagWINDOWSTATION *,tagGETCLIPBDATA *);
void * xxxGetDummyPalette(tagWINDOWSTATION *,tagGETCLIPBDATA *);
void * xxxGetDummyText(tagWINDOWSTATION *,unsigned int,tagGETCLIPBDATA *);
void * xxxGetRenderData(tagWINDOWSTATION *,unsigned int);
void AdjustForCoalescing(tagMLIST *,HWND__ *,unsigned int);
void AdjustLegacyDeviceFlags(tagPROCESSINFO *);
void AdjustMouseCoordinates(tagWND *,__int64 *);
void AdjustProcessPriorityForDrag(_MOVESIZEDATA *);
void AdjustRITDelayableTimers(int);
void AllowDesktopDestruction(void *);
void AppendMousePromotionQueue(tagMOUSE_PROMOTION_QUEUE &,tagMOUSE_PROMOTION_ENTRY *,tagMOUSE_PROMOTION_ENTRY *);
void ApplyRimDevBackedDeviceSummaryInfomation(unsigned long);
void ApplyTimerDelay(tagTIMER *);
void ApplyWindowTransform(_D3DMATRIX const *,tagPOINT *,tagTOUCHTARGETINGCONTACT *,int);
void AssignPointerCaptureData(tagINPUTPOINTERNODE *,tagPOINTERMSGDATA *);
void AsyncWindowPos(tagSMWP *);
void BltLnkAccel6666(unsigned char *,unsigned char *,long,long,long,long);
void BltLnkAccel8888(unsigned char *,unsigned char *,long,long,long,long);
void BltLnkAccelEEEE(unsigned char *,unsigned char *,long,long,long,long);
void BltLnkPatMaskCopy16(BLTINFO *,unsigned long,unsigned long *,unsigned char);
void BltLnkPatMaskCopy24(BLTINFO *,unsigned long,unsigned long *,unsigned char);
void BltLnkPatMaskCopy32(BLTINFO *,unsigned long,unsigned long *,unsigned char);
void BltLnkPatMaskCopy8(BLTINFO *,unsigned long,unsigned long *,unsigned char);
void BltLnkReadPat(unsigned char *,unsigned long,unsigned char *,unsigned long,unsigned long,unsigned long,unsigned long);
void BltLnkReadPat1(unsigned char *,unsigned long,unsigned char *,unsigned long,unsigned long,unsigned long,unsigned long);
void BltLnkReadPat4(unsigned char *,unsigned long,unsigned char *,unsigned long,unsigned long,unsigned long,unsigned long);
void BltLnkRect(_BLTLNKINFO *,_RECTL *);
void BltLnkSrcCopyMsk1(BLTINFO *,_BLTLNK_MASKINFO *,unsigned long *,unsigned long *);
void BltLnkSrcCopyMsk16(BLTINFO *,_BLTLNK_MASKINFO *,unsigned long *,unsigned long *);
void BltLnkSrcCopyMsk24(BLTINFO *,_BLTLNK_MASKINFO *,unsigned long *,unsigned long *);
void BltLnkSrcCopyMsk32(BLTINFO *,_BLTLNK_MASKINFO *,unsigned long *,unsigned long *);
void BltLnkSrcCopyMsk4(BLTINFO *,_BLTLNK_MASKINFO *,unsigned long *,unsigned long *);
void BltLnkSrcCopyMsk8(BLTINFO *,_BLTLNK_MASKINFO *,unsigned long *,unsigned long *);
void BltMe4Times(tagOEMBITMAPINFO *,int,int,HDC__ *,tagCURSOR *,unsigned int);
void BroadcastCompositionChange(tagDESKTOP const *);
void CLIPOBJ_vOffset(_CLIPOBJ *,long,long);
void CacheGestureState(tagPOINTERINPUTFRAME const *,tagTPSTATE *,tagHID_POINTER_DEVICE_INFO *,void *);
void CacheInertiaInfo(tagTPSTATE *,tagHID_POINTER_DEVICE_INFO *,INERTIA_INFO_INTERNAL const *,void *);
void CalcTrackDragRect(tagSBTRACK *);
void CalcVirtualScreenClipRegion(HRGN__ *,tagWND *);
void CancelActivePointer(tagINPUTPOINTERNODE *);
void CancelAutoPromotion();
void CancelInputState(tagTHREADINFO *,unsigned long);
void CapturePOINTL(_POINTL * *,_POINTL *);
void CaptureRECTL(_RECTL * *,_RECTL *);
void CheckAndProcessWindowResizeComplete(DWMSPRITE *,int,int *);
void CheckCurrentInjectionConfiguration();
void CheckLegacyPadControlledStatus(_DEVICE_OBJECT *);
void CheckPlacementBounds(tagRECT *,tagPOINT *,tagPOINT *,tagMONITOR *);
void CheckRemoveHotkeyBit(tagTHREADINFO *,tagMLIST *);
void CheckWHFBits(tagTHREADINFO *,int);
void ClassFree(tagDESKTOP *,void *);
void CleanEventMessage(tagQMSG *);
void CleanUpEUDC();
void CleanUpPFF(PFF *);
void CleanupCursorObject(tagCURSOR *);
void CleanupDirtyDesktops();
void CleanupFreedTLCInfo();
void CleanupGestureCache(tagTPSTATE *,int);
void CleanupMitIocpSupport(int,int);
void CleanupPvtData(PFF *);
void CleanupSecurityDescriptor(void *);
void CleanupShellWindowManagement(tagDESKTOP *);
void ClearDPISERVERINFO(tagDPISERVERINFO *);
void ClearMousePromotionQueueUntil(tagMOUSE_PROMOTION_QUEUE &,tagMOUSE_PROMOTION_ENTRY *);
void ClearWFBeingActivated(HWND__ *);
void ClipContact(tagWND *,tagTOUCHTARGETINGCONTACT *,int,tagRECT const *);
void CloseClipboardToken(tagWINDOWSTATION *);
void ComputeMagnificationFactor(_MAGNIFICATION_INPUT_TRANSFORM *);
void ComputeSourceRectAndMonitorWithPrecision(_MOVESIZEDATA const * const,tagPOINT *,tagMONITOR * *,tagRECT *);
void ConvertPTPMouseEventToMouseInputData(tagPTPMOUSEEVENT const *,_MOUSE_INPUT_DATA *);
void CopyOutputString(_CALLBACKSTATUS *,_LARGE_STRING *,unsigned int,int);
void CopyPattern(unsigned long *,long,long,long);
void CreateCaretTimer(tagWND *,tagQ *);
void CreateShellGestureFrame(tagPOINTERINPUTFRAME const *,tagTPSTATE *,tagHID_POINTER_DEVICE_INFO *,void *);
void DDEImpDecRefInitWorker(HWND__ *);
void DT_DrawJustifiedLine(HDC__ *,int,unsigned short const *,int,unsigned int,DRAWTEXTDATA *,int);
void DeallocMousePromotionEntry(tagMOUSE_PROMOTION_ENTRY *);
void DecComposited(tagWND *);
void DecTimerCount(tagTIMER *);
void DeferMessage(tagMLIST *,tagQMSG *);
void DeferPointerCursorOperation(tagPOINTER_INFO const *,tagPOINTERCURSORDATA const &);
void DeferSysPeekMsg(tagTHREADINFO *,int);
void DelegateDiscardMessages(tagQ *,int,tagDELEGATEPOINTERMAP *);
void DelegateMoveSizeToShell(tagWND *,unsigned int);
void DerefExcludeRequest(tagPROCESS_HID_REQUEST *,int,int);
void DerefIncludeRequest(tagPROCESS_HID_REQUEST *,tagPROCESS_HID_TABLE *,int,int);
void DerefPageOnlyRequest(tagPROCESS_HID_REQUEST *,tagPROCESS_HID_TABLE *,int);
void DestroyClassBrush(tagCLS *);
void DestroyDpiMetricsCache();
void DestroyPendingDesktops(tagTHREADINFO *,tagTERMINAL *);
void DestroyTooltipBitmap(tagTOOLTIPWND *);
void DestroyUMPDHeap(_UMPDHEAP *);
void DisableTemporayMetricsOverrides(_MOVESIZEDATA *);
void DisplayDiagHotkeyCallback(unsigned __int64,__int64);
void DoQueuedSyncPaint(tagWND *,unsigned long,tagTHREADINFO *);
void DoTPButtonWarpBack(tagTPSTATE *,unsigned long);
void DrawCaptionButtons(int,int,int);
void DrawCaptionIcon(HDC__ *,tagRECT *,tagCURSOR *,HBRUSH__ *,unsigned int);
void DrawCtlThumb(tagSBWND *);
void DrawGroove(HDC__ *,HBRUSH__ *,tagRECT *,int);
void DrawIconCallBack(HWND__ *,unsigned int,unsigned __int64,__int64);
void DrawOutline(HDC__ *,int,int,int,int,int,HBRUSH__ *);
void DrawRegionalShadow(void *,long,long);
void DrawRoundedRectangularShadow(void *,long,long,int,long);
void DrawSonar(HDC__ *);
void DrawSwitchWndHilite(tagSwitchWndInfo *,HDC__ *,int,int,int);
void DwmMovePointer(_SURFOBJ *,long,long,_RECTL *,unsigned long);
void DwmNotifyChildrenCreateDestroy(tagDESKTOP const *,int);
void ENTER_GRE_DWM_CRIT(PDEVOBJ,int *);
void EditionHandleAltTab(unsigned char,unsigned short,short,unsigned long,unsigned __int64,tagINPUT_MESSAGE_SOURCE *,void *,unsigned short);
void EmptyMousePromotionQueue(tagMOUSE_PROMOTION_QUEUE &);
void EndQFrameNodeDeferment(tagPOINTERQFRAME *,tagPOINTERINFONODE *,tagPOINTERINPUTFRAME *,unsigned __int64);
void EndShutdown(long);
void EngTextOutBitBlt(SURFACE *,_FONTOBJ *,unsigned long,_SURFOBJ *,_SURFOBJ *,_CLIPOBJ *,_XLATEOBJ *,_RECTL *,_POINTL *,_POINTL *,_BRUSHOBJ *,_POINTL *,unsigned long);
void EnsureServerInfoForDpi(tagDPISERVERINFO *,int);
void ExtendArrangedRectangleByFrameMargin(tagWND *,tagSIZERECT *);
void ExtractRangeFromQueue(tagMOUSE_PROMOTION_QUEUE &,tagMOUSE_PROMOTION_QUEUE &,tagMOUSE_PROMOTION_ENTRY *,tagMOUSE_PROMOTION_ENTRY *);
void FillGradient(HDC__ *,tagRECT const *,unsigned long,unsigned long);
void FinalizeKoreanImeCompStrOnMouseClick(tagWND *);
void FinishStockFontInitInternal(unsigned short const *,int);
void FixBogusSWP(tagWND *,int *,int *,int,int,unsigned int);
void FixupCaptureDataOffsets(_CAPTUREBUF *,void * *,unsigned char *);
void FixupPrimaryGestureContact(tagPOINTERINFONODE *,unsigned int,tagTPSTATE *,tagHID_POINTER_DEVICE_INFO *,int);
void FixupSecondaryGestureContacts(tagPOINTERINFONODE *,unsigned int,tagTPSTATE *,tagHID_POINTER_DEVICE_INFO *,int);
void FixupTPPointerFlags(unsigned int *,int);
void FntCacheHDEV(PDEV *,unsigned long);
void ForceCompletePendingPromotion();
void FreeFrame(tagPOINTERINPUTFRAME *);
void FreeHistory(tagPOINTERINPUTFRAME const *,tagPOINTERINFONODE const *);
void FreeItemString(tagMENU *,tagITEM *);
void FreeListFree(tagFREELIST *);
void FreeMsgDataInt(tagPOINTERMSGDATA *);
void FreeNode(tagINPUTPOINTERNODE *);
void FreeThreadPointerHookData(tagTHREADPOINTERDATA *);
void FreeView(_EPROCESS *,tagDESKTOP *);
void FreeWindowGCList(tagGESTURECONFIGLIST * *);
void GCRemoveHashElement(tagGESTURECONFIGLIST * *,unsigned int);
void GDINetworkedFontFileNodeFree(_RTL_AVL_TABLE *,void *);
void GDITrustedFontFileFree(_RTL_AVL_TABLE *,void *);
void GdiMovePointer(_SURFOBJ *,long,long,_RECTL *,int);
void GdiZorderSprite(HDEV__ *,HWND__ *,HWND__ *);
void GenerateCaptureLostMessage(unsigned __int64,HWND__ *,unsigned long,int,int);
void GenerateWindowLeaveMessage(unsigned __int64,HWND__ *,unsigned long,int,int,int);
void GestureContactProcessing(tagPOINTERINPUTFRAME const *,tagPOINTERINFONODE *,tagTPSTATE *,tagHID_POINTER_DEVICE_INFO *,int,int,unsigned long,int *);
void GetBiosNumLockStatus();
void GetCoordFromRect(tagMONITOR_MARGIN *,tagRECT *,eTHRESHOLD_MARGIN_DIRECTION);
void GetDefaultWallpaperName(unsigned short *,unsigned int);
void GetPointerDeviceType(unsigned long &,tagHID_POINTER_DEVICE_INFO *);
void GreHidePointerInternal(HDEV__ *);
void GreSynchronizeTimer(void *,unsigned int,unsigned __int64,__int64);
void GreUnTearDownSprites(HDEV__ *,_RECTL *,int);
void GreUpdateSpriteCallout(void *);
void HandleDeferredInput(tagTHREADINFO *,int);
void HandleIntObjUsageTelemetry(RawInputManagerDeviceObject *,tagWND *,tagINTERACTIVECTRL_INFO,unsigned int,tagINTERACTIVECTRL_PROMOTION_TYPE);
void HandleNoTargetToDockTargetSizing(_MOVESIZEDATA *,tagMONITOR *,tagMONITOR *,eTHRESHOLD_MARGIN_DIRECTION,unsigned long *);
void HandlePointerCursorSideOp();
void HandleSizingAwayFromDockTarget(_MOVESIZEDATA *,tagCHECKPOINT const * const,unsigned long *);
void HidDeviceStartStop();
void HitTestTPPrimaryContact(tagPOINTERINFONODE *,tagTPSTATE *);
void HwndLookupFreeTableData(_RTL_GENERIC_TABLE *,void *);
void IncComposited(tagWND *);
void InitLogQMsg();
void InitTimerPowerSaving();
void InitTooltipAnimation(tagTOOLTIPWND *);
void InitializeContactPrediction(tagHID_POINTER_DEVICE_INFO *,tagPOINT,tagPOINT,tagHPD_PREDICTION_INFO *,tagPOINT *,tagPOINT *);
void InitializeMiniWinInfo(tagWND * const,tagMINIWINDOWINFO *);
void InitializeQFrameCoalesceState(tagPOINTERQFRAME *,int);
void InkProcessorOnInkDeviceClosed(RawInputManagerDeviceObject *);
void InkProcessorOnInkDeviceInputReport(RawInputManagerDeviceObject *,void *);
void InkProcessorOnInkDeviceOpened(RawInputManagerDeviceObject *);
void InkProcessorOnInkDeviceRemoved(RawInputManagerDeviceObject *);
void InternalSetCursorPos(int,int,unsigned long);
void InvertScrollHilite(tagWND *,tagSBTRACK *);
void JournalTimer(tagWND *,unsigned int,unsigned __int64,__int64);
void KeepMachineUp(POWER_MONITOR_REQUEST_REASON);
void KernelAPCInvalidateCOMPOSITEDWnd(_KAPC *,void (**)(void *,void *,void *),void * *,void * *,void * *);
void KillTooltipTimer(tagTOOLTIPWND *);
void LEAVE_GRE_DWM_CRIT(PDEVOBJ,int);
void LW_LoadResources(_UNICODE_STRING *);
void LoadWin32PoolTrackingSettings();
void LogFontLoadAttempt(void *,_W32KFontSourceType,unsigned short const *,int);
void MBC_RightJustifyMenu(tagMENU *);
void MNDeleteAdjustIndexes(tagMENUSTATE *,SmartObjStackRef<tagPOPUPMENU>,unsigned int);
void MNDrawInsertionBar(HDC__ *,tagITEM *);
void MNDrawMenu3DHotTracking(HDC__ *,tagMENU *,tagITEM *);
void MNGetPopupBoundsRect(SmartObjStackRef<tagPOPUPMENU>,tagMONITOR *,tagRECT *,int);
void MNInitDrawItemStruct(HDC__ *,unsigned int,tagMENU *,tagITEM *,int,int,tagDRAWITEMSTRUCT *);
void MNSetTimerToAutoDismiss(tagMENUSTATE *,tagWND *);
void MagnifyScreenLocation(tagPOINT *);
void MakeArrangedStateObservable(_MOVESIZEDATA const * const);
void MarkRecentlyDownedContactsAsNonResting(tagTPSTATE *);
void MergePattern(unsigned long *,long,long,long);
void MiPIdleTimerFunc(tagWND *,unsigned int,unsigned __int64,__int64);
void MsgLookupTableCleanUp(void * *);
void MsgSQMCleanupMsgCache(tagPROCESSINFO *);
void MsgSQMCleanupProcessPair(tagMSGSQM_PROCESSPAIR *);
void MsgSQMFlushMsgRecord(tagPROCESSINFO *,tagPROCESSINFO *,tagMSGSQM_MSGRECORD *);
void MsgSQMFreeMsgList(tagPROCESSINFO *,tagPROCESSINFO *,tagMSGSQM_MSGRECORD * *);
void MsgSQMFreeProcessPair(tagMSGSQM_PROCESSPAIR *);
void MsgSQMPopulateProcessSQMInfo(tagPROCESSINFO *,tagMSGSQM_PROCESSSQMINFO *);
void MsgSQMWriteOutMsgRecord(tagMSGSQM_PROCESSSQMINFO const *,tagMSGSQM_PROCESSSQMINFO const *,tagMSGSQM_BASERECORD *,unsigned long,unsigned long,unsigned __int64,unsigned short const *);
void MulDeleteDeviceOrRedirectionBitmap(DHSURF__ *);
void MulDestroyFont(_FONTOBJ *);
void MultiUserGreCleanupAllFonts();
void MungeClipData(tagWINDOWSTATION *);
void NNDeleteAdjustIndex(unsigned int *,unsigned int);
void NoChanges(tagWND *);
void NormalAPCInvalidateCOMPOSITEDWnd(void *,void *,void *);
void NtGdiFlushUserBatchInternal(void *);
void OrderRects(tagRECT *,int);
void PATHOBJ_vOffset(_PATHOBJ *,long,long);
void PackAffectedThreadList(tagTHREADINFO const *,tagTHREADINFO const *);
void PaintWatermark(HDC__ *,tagRECT const *);
void PanCompletePDEV(DHPDEV__ *,HDEV__ *);
void PanDisablePDEV(DHPDEV__ *);
void PanDisableSurface(DHPDEV__ *);
void PanLockDisplayArea(DHPDEV__ *,_RECTL *);
void PanMovePointer(_SURFOBJ *,long,long,_RECTL *);
void PanSynchronize(DHPDEV__ *,_RECTL *);
void PanUnlockDisplayArea(DHPDEV__ *,_RECTL *);
void PasteScreenPalette(tagWINDOWSTATION *);
void PixieHack(tagWND *,tagRECT *);
void PopState(tagDDECONV *);
void PopulateMousePromotionEntry(tagMOUSE_PROMOTION_ENTRY *,tagPOINTER_INFO const &,unsigned short,unsigned short);
void PostIAMPosChangedNotification(tagCVR *,tagWND *);
void PostMoveToPwnd(tagQ *,tagWND *,unsigned long);
void PostRawKeyboardInputToSinks(unsigned long,void *,_KEYBOARD_INPUT_DATA *,unsigned int,unsigned short,int);
void PostSpbApc(_KAPC *,tagWND *,unsigned __int64);
void PostUnownedNotification(tagWND *);
void PostWindowArrangementCheck(unsigned long);
void PreventInterMonitorBlts(tagCVR *);
void ProcessAndUnreferencePreviousInput(tagPOINTERINFONODE const *,unsigned __int64,unsigned long,int,int);
void ProcessDownOnly(tagMOUSE_PROMOTION_CACHE *,tagMOUSE_PROMOTION_ENTRY *,int,int);
void ProcessKeyboardInputViaRim(void *,unsigned long,unsigned long,void *);
void ProcessLostCaptureList(unsigned short,int,tagPOINTERINPUTFRAME const *,unsigned long,unsigned long);
void ProcessQFrameNode(tagPOINTERQFRAME *,tagPOINTERINPUTFRAME const *,tagPOINTERINFONODE *);
void ProcessRangeInCache(tagMOUSE_PROMOTION_CACHE *,tagMOUSE_PROMOTION_ENTRY *,tagMOUSE_PROMOTION_ENTRY *,int,int,int);
void PseudoDestroyClassWindows(tagWND *,tagCLS *);
void PublishFocusChange(tagWND *);
void PutFNTCacheCheckSum(unsigned long,unsigned long);
void PutFntCacheDrv(unsigned long,PDEV *,unsigned long);
void QueueMousePromotionEntry(tagMOUSE_PROMOTION_QUEUE &,tagMOUSE_PROMOTION_ENTRY *);
void QueueNotifyTransformableMessage(tagWND *,unsigned int,unsigned __int64,__int64,int,int);
void QueuePTPMouseEvent(void *,tagPOINT,unsigned long,unsigned __int64);
void ReadyTimer(tagTIMER *,unsigned long);
void ReassignInputMessage(tagTHREADINFO *,tagTHREADINFO *,tagQMSG *);
void RecalcDCVisRgn(HDC__ *);
void RecalcTrackRect(tagSBTRACK *);
void RedistributeInput(tagQMSG *,tagQ *,tagTHREADINFO *);
void ReduceFraction(unsigned long *,unsigned long *);
void ReferenceMsgData(unsigned __int64,tagPOINTERMSGDATA_REFTYPE,void *);
void RefreshDpiKMMetricsCacheNode(tagDpiKMMetricsCacheNode *);
void RefreshMiPIdleNotificationTimer(tagWND *);
void RegisterTabletButtonHandler();
void ReleasePointerCaptureInt(tagPOINTERCAPTUREINFO *);
void RemoveCaretTimer(tagWND *,tagQ *);
void RemoveNotify(tagNOTIFY * *);
void RemoveParentMenu(tagMENU *,tagMENU * *);
void RemoveProcRequest(tagPROCESSINFO *,tagPROCESS_HID_REQUEST *,unsigned long,int);
void RemoveQMsgFromDeferList(tagMLIST *,tagQMSG *);
void RemoveShadow(tagSHADOW *);
void RemoveThreadPointerHookData(tagTHREADINPUTPOINTERLIST *);
void RenderCursor(tagPOINTERCURSORDATA const &);
void ReorderChildrenSpriteList(tagWND *,tagWND *);
void RescaleIconMetrics(tagICONMETRICSW *);
void RescaleNonClientMetrics(tagNONCLIENTMETRICSW *);
void ResetMouseHover(tagDESKTOP *,tagPOINT);
void ResetMousePromotionInfo(unsigned short,unsigned short);
void ResetPendingPromotion();
void ResizeTimerFunc(tagWND *,unsigned int,unsigned __int64,__int64);
void RestartInactiveHelper(RFONT *);
void RevalidateHitTestResult(tagTPSTATE *);
void RotationLockCallback(unsigned __int64,__int64);
void RundownAPCInvalidateCOMPOSITEDWnd(_KAPC *);
void SETFLAG(int,unsigned long volatile &,unsigned long);
void STROBJ_vOffset(_STROBJ *,long,long);
void SafeCopyUnicodeString(_UNICODE_STRING *,_UNICODE_STRING * const);
void SelectFont(_SELECT_FONT *);
void SenderDied(tagSMS *);
void SetBitMask(tagWND *,unsigned int,int);
void SetContactRestingState(tagTPCONTACTSTATE *,tagTPSTATE *,int);
void SetCurrentHitTargetMonitor(_MOVESIZEDATA *,tagMONITOR *,int);
void SetDelayableTimer(unsigned long,unsigned long);
void SetDragInThresholdAlways(_MOVESIZEDATA *);
void SetDragInToDragOutThreshold(_MOVESIZEDATA *);
void SetDragOutThresholdAlways(_MOVESIZEDATA *);
void SetDragOutToDragInThreshold(_MOVESIZEDATA *);
void SetForegroundPriorityProcess(tagPROCESSINFO *,tagTHREADINFO *,_PROCESS_PRIORITY_BYCLASS);
void SetHidPOCountToTLCInfo(unsigned short,unsigned long,int);
void SetLegacyDeviceFlags(tagPROCESS_HID_TABLE *,tagRAWINPUTDEVICE const *);
void SetMiPWakeBit(tagTHREADINFO *);
void SetNCMetrics(tagNONCLIENTMETRICSW *);
void SetPointerInfoNodeTargetInt(tagPOINTERINFONODE *,tagWND *,int,tagPOINT const *,int,int,int,int);
void SetProcessFlags(tagW32JOB *,tagPROCESSINFO *);
void SetProcessPriorityByClass(tagPROCESSINFO *,_PROCESS_PRIORITY_BYCLASS);
void SetRedrawProp(tagWND *,int);
void SetTooltipTimer(tagTOOLTIPWND *,unsigned int,unsigned int);
void SetTopmost(tagWND *,int,int);
void SetTopmostEnum(tagWND *,int,int);
void SetWaitForWinstaRundown();
void SetWindowTreeBand(tagWND *,ZBID);
void SetWinlogonHotKeys();
void SetupDragRectsForContact(tagTPCONTACTSTATE *);
void SetupFakeMDIAppStuff(tagMENU *,tagITEM *);
void SeverWindowManagementConnectionToShell(tagDESKTOP *);
void ShadowUnLock(_PANDEV *);
void ShadowUnLockWait(_PANDEV *);
void SnapSizeRect(_MOVESIZEDATA *,tagCHECKPOINT *,tagMONITOR *,unsigned long *);
void SortRegisteredDevices(tagRAWINPUTDEVICE *,int);
void SoundSentryTimer(tagWND *,unsigned int,unsigned __int64,__int64);
void SpbApc(void *,void *,void *);
void SpbApcBegin(_KAPC *,void (**)(void *,void *,void *),void * *,void * *,void * *);
void SpbApcRundown(_KAPC *);
void StopMiPIdleNotificationTimer(tagWND *);
void StopWin32PoolTracking();
void SwapRect(tagRECT *,tagRECT *);
void SwitchMouseCursors(int,int,int);
void SwitchWndCleanup(tagSwitchWndInfo * *);
void TTSqm(tagPOINT,tagTOUCHTARGETINGCONTACT const *);
void TabletAdjustBrightness(int);
void TabletButtonHandler(DEVICEINFO *);
void TerminateDesktopThreads();
void TextOutBitBlt(SURFACE *,RFONTOBJ &,_SURFOBJ *,_SURFOBJ *,_CLIPOBJ *,_XLATEOBJ *,_RECTL *,_POINTL *,_POINTL *,_BRUSHOBJ *,_POINTL *,unsigned long);
void TimerStatistics(tagTIMER const *);
void TraceLoggingAutoRotationStateEvent();
void TraceLoggingBSDRRaceConditionEvent(int,int);
void TraceLoggingEdgePalmRejection(tagPOINT,tagPOINT);
void TraceLoggingGDIScaledAppEvent();
void TraceLoggingHidConfigEvent(unsigned long,unsigned short *,unsigned short *,unsigned long,unsigned long,tagRECT,tagRECT);
void TraceLoggingHitTestWindowTargeting(int,int,int,int,int,int,int);
void TraceLoggingIntObjUsageSummaryEvent(tagINTOBJTELEMETRYSTATE *,unsigned short,unsigned short,_GUID,_GUID,unsigned __int64);
void TraceLoggingMouseWheelRoutingModeChange(unsigned long);
void TraceLoggingMouseWheelRoutingValueAtStartup();
void TraceLoggingPTPGestureUsageEvent(tagTPTELEMSTATE const *);
void TraceLoggingPTPKeyToAATimeDeltas(__int64,__int64,__int64,__int64,tagPTP_ACTION,tagPTP_ACTION);
void TraceLoggingPTPKeyToGestureTiming(__int64,__int64,tagTPTELEMTIMINGS const *,__int64,__int64);
void TraceLoggingPTPSettingsConfigEvent(tagTPSETTINGS *,unsigned long,int,unsigned short *,unsigned short *,int,int,tagRECT,tagRECT);
void TraceLoggingPTPUsageDetailsEvent(tagTPTELEMSTATE const *,__int64);
void TraceLoggingProcessMonitorInfoUpdateHelper(tagWND * const,int);
void TraceLoggingProcessUsageDataAggregationHelper(tagWND * const);
void TraceLoggingProcessUsageOnTerminationEvent(tagPROCESSINFO * const);
void TraceLoggingRimHidDeviceArrivedEvent(unsigned short,unsigned int,unsigned int,unsigned long,unsigned long,int,_UNICODE_STRING *,_UNICODE_STRING *,int,int,unsigned int,unsigned int,unsigned int,unsigned long,unsigned long);
void TraceLoggingRimHidDeviceRemovedEvent(unsigned short,unsigned int,unsigned int,unsigned long,unsigned long,int,_UNICODE_STRING *,_UNICODE_STRING *,int,int,unsigned int,unsigned int,unsigned int,unsigned long,unsigned long);
void TraceLoggingSPISetDesktopDPIOverrideEvent(int,int);
void TraceLoggingSPISetMenuDropAlignmentEvent(int,int);
void TraceLoggingSPISetModernDPIOverrideEvent(int,int);
void TraceLoggingSPISetPenVisualizationEvent(unsigned long,unsigned long);
void TraceLoggingScreenOrientationArStateChangeEvent(unsigned long,arInitiatedBy,tagAR_STATE);
void TraceLoggingScreenOrientationChangeEvent(unsigned long,arInitiatedBy,int,arFailureReason);
void TraceLoggingShowWindowDPIAwarenessEvent(tagWND * const);
void TraceLoggingSuppressQuickLaunch();
void TraceLoggingSysQueueLockedRetryFailed(unsigned long,unsigned long);
void TraceLoggingTouchInjection(int,int,int,unsigned long);
void TraceLoggingUserIsActive(unsigned int,_LARGE_INTEGER);
void TraceLoggingWinPHotKeyEvent();
void TraceLoggingYieldedHotkey(unsigned int,unsigned int);
void TraceWindowResizeTelemetry(tagWND *);
void TransformHimetricDeltaToScreenDelta(tagHID_POINTER_DEVICE_INFO *,tagPOINT,tagPOINT *);
void TransformPTPLogicalUnitsToPhysical(tagHID_POINTER_DEVICE_INFO *,tagPOINT,tagPOINT *);
void TransformRect(_D3DMATRIX const *,tagRECT *,int);
void TransformRectAroundCursor(_MOVESIZEDATA *,tagRECT const *,unsigned short,tagRECT *,tagRECT *,unsigned short);
void TransformSWPCoords(tagWND *,int *,int *,int *,int *,unsigned int);
void TransformShellProvidedRectangles(_MOVESIZEDATA *,tagMONITOR *,eTHRESHOLD_MARGIN_DIRECTION,tagRECT *,tagRECT *,tagWND *,tagRECT *,tagRECT *);
void TransformTPScreenToHimetric(tagHID_POINTER_DEVICE_INFO *,tagPOINT,tagPOINT *);
void TryAttachShellFrame(tagTHREADINFO *,unsigned int);
void TryCoalesceQFrame(tagPOINTERINPUTFRAME *,tagPOINTERINPUTFRAME const *,tagPOINTERQFRAME const *);
void UMPDAcquireRFONTSem(RFONTOBJ &,UMPDOBJ *,unsigned long,unsigned long,int *);
void UMPDDrvCompletePDEV(DHPDEV__ *,HDEV__ *);
void UMPDDrvDestroyFont(_FONTOBJ *);
void UMPDDrvDisableDriver();
void UMPDDrvDisablePDEV(DHPDEV__ *);
void UMPDDrvDisableSurface(DHPDEV__ *);
void UMPDDrvFree(void *,unsigned long);
void UMPDMyDrvFree(UMPDOBJ *,DHPDEV__ *,void *,unsigned long);
void UT_FreeCBFormat(tagCLIP *);
void UT_InvertCaret();
void UmfdEscEngComputeGlyphSet(tagUMFD_ESCAPE_ARGUMENT *);
void UmfdEscEngCreateFile(tagUMFD_ESCAPE_ARGUMENT *);
void UmfdEscEngGetFileChangeTime(tagUMFD_ESCAPE_ARGUMENT *);
void UmfdEscEngGetFilePath(tagUMFD_ESCAPE_ARGUMENT *);
void UmfdEscEngMapFontFileFD(tagUMFD_ESCAPE_ARGUMENT *);
void UmfdEscEngUnmapFontFileFD(tagUMFD_ESCAPE_ARGUMENT *);
void UmfdEscGetFontGlobals(tagUMFD_ESCAPE_ARGUMENT *);
void UmfdEscParseFontResources(tagUMFD_ESCAPE_ARGUMENT *);
void UmfdEscSendCompleteWaitReceive(tagUMFD_ESCAPE_ARGUMENT *);
void UmfdEscXFORMOBJ_iGetXform(tagUMFD_ESCAPE_ARGUMENT *);
void UmfdZombifyAllUmfdFonts();
void UnlinkAndFreeHoldingFrame(tagPOINTERHOLDINGFRAME *);
void UnlinkAndFreeThreadPointerData(tagTHREADINPUTPOINTERLIST *,tagTHREADPOINTERDATA *);
void UnlinkCursor(tagCURSOR *);
void UnlinkHook(tagHOOK *);
void UnlockAndFreeCPDs(_CALLPROCDATA * *);
void UnlockDpiCursors(unsigned long);
void UnlockNotifyWindow(tagMENU *);
void UnlockPopupMenuWindow(tagMENU *,tagWND *);
void UnrefAndDestroySMWP(tagSMWP *);
void UnreferenceMsgData(unsigned __int64,tagPOINTERMSGDATA_REFTYPE,void *);
void UnreferenceUndispatchedFrameList();
void UntrapAppContainerRendering(HDC__ * &,HSURF__ * &,HSURF__ * &,unsigned long *);
void UpdateContactPrediction(tagHID_POINTER_DEVICE_INFO *,tagPOINT,tagPOINT,tagHPD_PREDICTION_INFO *,tagPOINT *,tagPOINT *);
void UpdateContactRestingState(tagPOINT,unsigned __int64,tagTPCONTACTSTATE *,tagTPSTATE *,tagHID_POINTER_DEVICE_INFO *);
void UpdateDesktopMonitorNavigationOrder(tagMONITOR_MARGIN *);
void UpdateDesktopThresholdsWorker(tagMONITOR_MARGIN *,eTHRESHOLD_MARGIN_DIRECTION,unsigned long *);
void UpdateHistoryWithTarget(tagPOINTERINPUTFRAME const *,tagPOINTERINFONODE const *,tagWND *,int,tagPOINT const *,int,int,int);
void UpdateInputTransformFromHitTest(tagWND *,tagWND *,void *,int,tagINPUT_TRANSFORM *,unsigned __int64 *);
void UpdateIntObjUsage(tagWND *,tagINTERACTIVECTRL_INFO,unsigned int,tagINTERACTIVECTRL_PROMOTION_TYPE,unsigned __int64);
void UpdateJob(tagW32JOB *);
void UpdateKeyState(tagQ *,unsigned int,int);
void UpdateKeyStateFlag();
void UpdateMoveSizeDataForCancelation(_MOVESIZEDATA *);
void UpdatePTPRightClickZone(tagTPSTATE *,tagHID_POINTER_DEVICE_INFO *,int);
void UpdateStateIndicator(tagINPUTPOINTERNODE *,unsigned int,unsigned __int64,tagPOINT);
void UpdateTPContactState(unsigned int,tagTPSTATE *,tagPOINTERINFONODE *);
void UpdateTPStateIndicator(tagTPCONTACTSTATE *,tagTPSTATE *,tagPOINTER_INFO *,tagHID_POINTER_DEVICE_INFO *,int *);
void UpdateThreadPointerList(tagTHREADINPUTPOINTERLIST *,unsigned short);
void UpdateThresholdFromMetric(int,int *,int *,unsigned int,unsigned char,_THRESHOLD_SELECTOR);
void UpdateWindowRects(tagWND *,tagPOINT const *,tagSIZE const *,int *,int *);
void UpdateWindowResizeTelemetry(DWMSPRITE *,int);
void UserReinitializeStockFonts(unsigned long,int,int);
void WaitForWinstaRundown(_KEVENT *);
void WakeInjectedFlushWaiter();
void WerSubmitReportWorker(void *);
void Win32ProbeForRead(void *,unsigned __int64,unsigned long);
void WinSqmCreateStringStreamEntryEx(_SQM_STREAM_ENTRY_EX *,unsigned short const *);
void WindowArrangementHotKeyCallback(unsigned __int64,__int64);
void WinlogonHotkeyCallback(unsigned __int64,__int64);
void WinlogonWinSpaceCallback(unsigned __int64,__int64);
void _LogLinkWindow(LogBeforeOrAfter,tagWND *,tagWND *,tagWND *);
void _PostShellHookMsgWorker(unsigned int,unsigned __int64,__int64,tagINPUT_MESSAGE_SOURCE *);
void _RemoveClipboardFormatListener(tagWND *);
void _SetCloseDefault(tagMENU *);
void _SqmTHQA(unsigned short,unsigned short,unsigned long);
void _TTAddLineAndSegmentIntersection(tagPOINT,tagPOINT,long,long,long,long,tagPOINT *,int *);
void _TTAdjustContactSide(long,long *,long *,long);
void _TTClip(tagTOUCHTARGETINGCONTACT *,long,tagCLIP_SIDE);
void _TTLimitDeepTargetingPoint(long,long,long *);
void _TTUpdateBestTarget(tagPNTRWINDOWHITTTESTARGS *,tagWND *,unsigned int,tagPOINT const *,tagRECT *,int,tagRECT,unsigned long);
void _TTUpdateRankWithSegment(long,long,long,long,tagPOINT *,unsigned short *,tagRECT,tagTOUCHTARGETINGCONTACT const *);
void _UpdateReportDescriptor(tagRECT,unsigned long,unsigned long);
void iOpenGLExtEscapeHelper(void *);
void inv_cmap(int,RGBX *,int,unsigned long *,unsigned char *);
void pConvertDfbSurfaceToDibNKAPC(void *,void *,void *);
void pConvertDfbSurfaceToDibNKAPCBegin(tagNKAPC *,void (**)(void *,void *,void *),void * *,void * *,void * *);
void pConvertDfbSurfaceToDibNKAPCRundown(tagNKAPC *);
void vAccNotify(_SURFOBJ *,unsigned long,void *);
void vAddNice(WIDEPATHOBJ &,_POINTFIX *,EVECTORFX *,int);
void vAdjustDelegatePriority(tagTHREADINFO *);
void vAdvXDDA(_PLGDDA *);
void vAdvYDDA(_PLGDDA *);
void vArctan(EFLOAT,EFLOAT,EFLOAT &,long &);
void vBrushPath4_8x8Enum(_RECTL *,unsigned long,void *);
void vBrushPath4_8x8EnumRow(long,_ROW *,unsigned long,void *);
void vBrushPath8_8x8Enum(_RECTL *,unsigned long,void *);
void vBrushPath8_8x8EnumRow(long,_ROW *,unsigned long,void *);
void vBrushPathEnum(_RECTL *,unsigned long,void *);
void vBrushPathEnumRow(long,_ROW *,unsigned long,void *);
void vCalculateCursorBounds(_SURFOBJ *,_SURFOBJ *,_RECTL *);
void vCalculateLine(_TRIVERTEX *,_TRIVERTEX *,_TRIANGLEDATA *);
void vCheckMMInstance(unsigned short *,tagDESIGNVECTOR *);
void vCleanUpFntCacheInternal();
void vCleanupFontFile(PFFCLEANUP *);
void vCleanupOwnedRedirectionDeviceBitmaps(PDEV *,_CLEANUPTYPE);
void vCleanupPathStackObj(PATHSTACKOBJ *);
void vClearTypeLookupTableLoop(unsigned long,SURFACE *,_BLENDINFO *,unsigned long,unsigned long);
void vClosePrintKView();
void vConvertAndSaveBGRATo1(unsigned char *,unsigned long *,long,long,_XLATEOBJ *,XEPALOBJ,XEPALOBJ);
void vConvertAndSaveBGRATo32Bitfields(unsigned char *,unsigned long *,long,long,_XLATEOBJ *,XEPALOBJ,XEPALOBJ);
void vConvertAndSaveBGRATo4(unsigned char *,unsigned long *,long,long,_XLATEOBJ *,XEPALOBJ,XEPALOBJ);
void vConvertAndSaveBGRATo8(unsigned char *,unsigned long *,long,long,_XLATEOBJ *,XEPALOBJ,XEPALOBJ);
void vConvertAndSaveBGRAToBGR24(unsigned char *,unsigned long *,long,long,_XLATEOBJ *,XEPALOBJ,XEPALOBJ);
void vConvertAndSaveBGRAToRGB16Bitfields(unsigned char *,unsigned long *,long,long,_XLATEOBJ *,XEPALOBJ,XEPALOBJ);
void vConvertAndSaveBGRAToRGB16_555(unsigned char *,unsigned long *,long,long,_XLATEOBJ *,XEPALOBJ,XEPALOBJ);
void vConvertAndSaveBGRAToRGB16_565(unsigned char *,unsigned long *,long,long,_XLATEOBJ *,XEPALOBJ,XEPALOBJ);
void vConvertAndSaveBGRAToRGB24(unsigned char *,unsigned long *,long,long,_XLATEOBJ *,XEPALOBJ,XEPALOBJ);
void vConvertAndSaveBGRAToRGB32(unsigned char *,unsigned long *,long,long,_XLATEOBJ *,XEPALOBJ,XEPALOBJ);
void vCopyAlphaBuffer16bpp(unsigned char *,unsigned char *,unsigned char *,long,unsigned short * *);
void vCosSin(EFLOAT,EFLOAT *,EFLOAT *);
void vCosSinPrecise(EFLOAT,EFLOAT *,EFLOAT *);
void vDIBPatBlt(SURFACE *,_CLIPOBJ *,_RECTL *,_BRUSHOBJ *,_POINTL *,unsigned long);
void vDIBPatBltSrccopy8x8(SURFACE *,_CLIPOBJ *,_RECTL *,_BRUSHOBJ *,_POINTL *,void (*)(_PATBLTFRAME *,int));
void vDIBSolidBlt(SURFACE *,_RECTL *,_CLIPOBJ *,unsigned long,int);
void vDIBnPatBltSrccopy6x6(SURFACE *,_CLIPOBJ *,_RECTL *,_BRUSHOBJ *,_POINTL *,void (*)(_PATBLTFRAME *,int));
void vDeletePFE(PFE *);
void vDeleteSemaphores(_PANDEV *);
void vDetermineSurfaceBounds(_SURFOBJ *,unsigned char,long,long,_RECTL *);
void vDirectStretch16(_STR_BLT *);
void vDirectStretch32(_STR_BLT *);
void vDirectStretch8Narrow(_STR_BLT *);
void vDirectStretchError(_STR_BLT *);
void vDisableSynchronizeNKAPC(void *,void *,void *);
void vDisableSynchronizeNKAPCBegin(tagNKAPC *,void (**)(void *,void *,void *),void * *,void * *,void * *);
void vDisableSynchronizeNKAPCRundown(tagNKAPC *);
void vDisableTimers(unsigned long);
void vDitherColor4bpp(unsigned long *,_VERTEX_DATA *,_VERTEX_DATA *,unsigned long);
void vDitherColor8bpp(unsigned long *,_VERTEX_DATA *,_VERTEX_DATA *,unsigned long);
void vDrawLine(_POINTFIX *,_POINTFIX *,unsigned char *,long,unsigned long,_RECTL *,unsigned long,_W32KCDD_ENG_CALLBACKS *);
void vEdgeDDA(_TRIANGLEDATA *,_TRIDDA *);
void vExpandAndCopyText(SURFACE *,_FONTOBJ *,_GLYPHPOS *,unsigned long,unsigned char *,unsigned long,unsigned long,SURFACE *,SURFACE *,_RECTL *,_RECTL *,int,int,unsigned long,_RECTL *,_RECTL *,unsigned long,_BRUSHOBJ *,_POINTL *);
void vFillGRectDIB1(SURFACE *,_GRADIENTRECTDATA *);
void vFillGRectDIB16Bitfields(SURFACE *,_GRADIENTRECTDATA *);
void vFillGRectDIB16_555(SURFACE *,_GRADIENTRECTDATA *);
void vFillGRectDIB16_565(SURFACE *,_GRADIENTRECTDATA *);
void vFillGRectDIB24BGR(SURFACE *,_GRADIENTRECTDATA *);
void vFillGRectDIB24Bitfields(SURFACE *,_GRADIENTRECTDATA *);
void vFillGRectDIB24RGB(SURFACE *,_GRADIENTRECTDATA *);
void vFillGRectDIB32BGRA(SURFACE *,_GRADIENTRECTDATA *);
void vFillGRectDIB32Bitfields(SURFACE *,_GRADIENTRECTDATA *);
void vFillGRectDIB32RGB(SURFACE *,_GRADIENTRECTDATA *);
void vFillGRectDIB4(SURFACE *,_GRADIENTRECTDATA *);
void vFillGRectDIB8(SURFACE *,_GRADIENTRECTDATA *);
void vFindAndReplaceRFONT(PDEVOBJ &,PDEVOBJ &,PDEVOBJ &);
void vFixupMetaSpriteList(PDEVOBJ &);
void vForceClientRgnUpdate();
void vGenWidths(long *,long *,EFLOAT &,EFLOAT &,long,long,long,long);
void vGetBlendInfo(unsigned long,SURFACE *,unsigned long,_BLENDINFO *);
void vGetNtoW(MATRIX *,tagLOGFONTW *,IFIOBJ &,DCOBJ *);
void vGetTextMetrics(RFONTOBJ &,DCOBJ &,_TMW_INTERNAL *);
void vGradientFill1(SURFACE *,_TRIANGLEDATA *);
void vGradientFill16Bitfields(SURFACE *,_TRIANGLEDATA *);
void vGradientFill16_555(SURFACE *,_TRIANGLEDATA *);
void vGradientFill16_565(SURFACE *,_TRIANGLEDATA *);
void vGradientFill24BGR(SURFACE *,_TRIANGLEDATA *);
void vGradientFill24Bitfields(SURFACE *,_TRIANGLEDATA *);
void vGradientFill24RGB(SURFACE *,_TRIANGLEDATA *);
void vGradientFill32BGRA(SURFACE *,_TRIANGLEDATA *);
void vGradientFill32Bitfields(SURFACE *,_TRIANGLEDATA *);
void vGradientFill32RGB(SURFACE *,_TRIANGLEDATA *);
void vGradientFill4(SURFACE *,_TRIANGLEDATA *);
void vGradientFill8(SURFACE *,_TRIANGLEDATA *);
void vHalve(EVECTORFX &);
void vHorizontalLine(_TRIVERTEX *,_TRIVERTEX *,_TRIANGLEDATA *,_TRIDDA *);
void vHorizontalLine1(unsigned char *,long,long,unsigned long);
void vHorizontalLine16(unsigned char *,long,long,unsigned long);
void vHorizontalLine24(unsigned char *,long,long,unsigned long);
void vHorizontalLine32(unsigned char *,long,long,unsigned long);
void vHorizontalLine4(unsigned char *,long,long,unsigned long);
void vHorizontalLine8(unsigned char *,long,long,unsigned long);
void vHorizontalLineCallback(unsigned char *,long,long,unsigned long);
void vIFIMetricsToETM(_EXTTEXTMETRIC *,RFONTOBJ &,DCOBJ &,_IFIMETRICS *);
void vIFIMetricsToEnumLogFontW(tagENUMLOGFONTW *,_IFIMETRICS *);
void vIFIMetricsToTextMetricW(RFONTOBJ &,DCOBJ &,_TMW_INTERNAL *,_IFIMETRICS *);
void vIFIMetricsToTextMetricWStrict(RFONTOBJ &,DCOBJ &,tagTEXTMETRICW *,_IFIMETRICS *);
void vInitBuffer(_STRRUN *,_RECTL *,unsigned long);
void vInitStrDDA(_STRDDA *,_RECTL *,_RECTL *,_RECTL *);
void vInitStrDDAClip(_RECTL *,_RECTL *,_RECTL *,_RECTL *,_RECTL *);
void vInitializeFontAssocStatus();
void vIntersectHorizontal(DDA_CLIPLINE *,long,_POINTL *,_POINTL *,long *);
void vIntersectVertical(DDA_CLIPLINE *,long,_POINTL *,_POINTL *,long *);
void vLine16Octant07(_DDALINE *,unsigned char *,long,unsigned long);
void vLine16Octant16(_DDALINE *,unsigned char *,long,unsigned long);
void vLine16Octant25(_DDALINE *,unsigned char *,long,unsigned long);
void vLine16Octant34(_DDALINE *,unsigned char *,long,unsigned long);
void vLine1Octant07(_DDALINE *,unsigned char *,long,unsigned long);
void vLine1Octant16(_DDALINE *,unsigned char *,long,unsigned long);
void vLine1Octant25(_DDALINE *,unsigned char *,long,unsigned long);
void vLine1Octant34(_DDALINE *,unsigned char *,long,unsigned long);
void vLine24Octant07(_DDALINE *,unsigned char *,long,unsigned long);
void vLine24Octant16(_DDALINE *,unsigned char *,long,unsigned long);
void vLine24Octant25(_DDALINE *,unsigned char *,long,unsigned long);
void vLine24Octant34(_DDALINE *,unsigned char *,long,unsigned long);
void vLine32Octant07(_DDALINE *,unsigned char *,long,unsigned long);
void vLine32Octant16(_DDALINE *,unsigned char *,long,unsigned long);
void vLine32Octant25(_DDALINE *,unsigned char *,long,unsigned long);
void vLine32Octant34(_DDALINE *,unsigned char *,long,unsigned long);
void vLine4Octant07(_DDALINE *,unsigned char *,long,unsigned long);
void vLine4Octant16(_DDALINE *,unsigned char *,long,unsigned long);
void vLine4Octant25(_DDALINE *,unsigned char *,long,unsigned long);
void vLine4Octant34(_DDALINE *,unsigned char *,long,unsigned long);
void vLineCallbackOctant07(_DDALINE *,unsigned char *,long,unsigned long);
void vLineCallbackOctant16(_DDALINE *,unsigned char *,long,unsigned long);
void vLineCallbackOctant25(_DDALINE *,unsigned char *,long,unsigned long);
void vLineCallbackOctant34(_DDALINE *,unsigned char *,long,unsigned long);
void vLoadAndConvert16BitfieldsToBGRA(unsigned long *,unsigned char *,long,long,_XLATEOBJ *);
void vLoadAndConvert1ToBGRA(unsigned long *,unsigned char *,long,long,_XLATEOBJ *);
void vLoadAndConvert32BitfieldsToBGRA(unsigned long *,unsigned char *,long,long,_XLATEOBJ *);
void vLoadAndConvert4ToBGRA(unsigned long *,unsigned char *,long,long,_XLATEOBJ *);
void vLoadAndConvert8ToBGRA(unsigned long *,unsigned char *,long,long,_XLATEOBJ *);
void vLoadAndConvertBGR24ToBGRA(unsigned long *,unsigned char *,long,long,_XLATEOBJ *);
void vLoadAndConvertRGB16_555ToBGRA(unsigned long *,unsigned char *,long,long,_XLATEOBJ *);
void vLoadAndConvertRGB16_565ToBGRA(unsigned long *,unsigned char *,long,long,_XLATEOBJ *);
void vLoadAndConvertRGB24ToBGRA(unsigned long *,unsigned char *,long,long,_XLATEOBJ *);
void vLoadAndConvertRGB32ToBGRA(unsigned long *,unsigned char *,long,long,_XLATEOBJ *);
void vLoadFontFileView(unsigned short *,unsigned long,_FONTFILEVIEW * *,unsigned long,void * *,unsigned long *,tagDESIGNVECTOR *,unsigned long,unsigned __int64 *,PDEV * *,_FNTCHECKSUM *);
void vLookupScript(unsigned long,unsigned short *,unsigned long);
void vMergeSpans(_SPAN *,_SPAN *,_SPAN *,_SPAN *,_SPAN *);
void vMirrorNotifyDrawing(PDEVOBJ &,SURFACE *,int);
void vMovePointer(HDEV__ *,int,int,long);
void vOrAlignedGrayGlyphEven(_GLYPHBITS *,unsigned int,unsigned char *,unsigned int);
void vOrClearTypeGlyph(_GLYPHBITS *,unsigned int,unsigned char *,unsigned int);
void vOrNonAlignedGrayGlyphEven(_GLYPHBITS *,unsigned int,unsigned char *,unsigned int);
void vOrNonAlignedGrayGlyphOdd(_GLYPHBITS *,unsigned int,unsigned char *,unsigned int);
void vPaintPathEnum(_RECTL *,unsigned long,void *);
void vPaintPathEnumRow(long,_ROW *,unsigned long,void *);
void vPanningUpdate(_PANDEV *,_RECTL *,_CLIPOBJ *);
void vPatCpyRect1_6x6(_PATBLTFRAME *,int);
void vPatCpyRect1_8x8(_PATBLTFRAME *,int);
void vPatCpyRect4_8x8(_PATBLTFRAME *,int);
void vPatCpyRect8(_PATBLTFRAME *);
void vPatCpyRect8_8x8(_PATBLTFRAME *,int);
void vPatCpyRow4_8x8(_PATBLTFRAME *,long,int);
void vPatCpyRow8(_PATBLTFRAME *,long,int);
void vPatCpyRow8_8x8(_PATBLTFRAME *,long,int);
void vPatNotRect8(_PATBLTFRAME *);
void vPatNotRow8(_PATBLTFRAME *,long,int);
void vPatXorRect8(_PATBLTFRAME *);
void vPatXorRow8(_PATBLTFRAME *,long,int);
void vPatternCopyLoop(_RECTL *,unsigned long *,_PATBLTFRAME *,int,unsigned long,unsigned long,unsigned long,unsigned long,long,long,long,unsigned long *,unsigned long *);
void vPatternCopyLoopRow(long,unsigned long *,_PATBLTFRAME *,int,unsigned long,unsigned long,unsigned long,unsigned long,long,unsigned long *);
void vPlgWrite1(_PLGRUN *,_PLGRUN *,SURFACE *,_CLIPOBJ *);
void vPlgWrite16(_PLGRUN *,_PLGRUN *,SURFACE *,_CLIPOBJ *);
void vPlgWrite24(_PLGRUN *,_PLGRUN *,SURFACE *,_CLIPOBJ *);
void vPlgWrite32(_PLGRUN *,_PLGRUN *,SURFACE *,_CLIPOBJ *);
void vPlgWrite4(_PLGRUN *,_PLGRUN *,SURFACE *,_CLIPOBJ *);
void vPlgWrite8(_PLGRUN *,_PLGRUN *,SURFACE *,_CLIPOBJ *);
void vPlgWriteAND(_PLGRUN *,_PLGRUN *,SURFACE *,_CLIPOBJ *);
void vPlgWriteError(_PLGRUN *,_PLGRUN *,SURFACE *,_CLIPOBJ *);
void vPlgWriteOR(_PLGRUN *,_PLGRUN *,SURFACE *,_CLIPOBJ *);
void vProcessCursorShape(HDEV__ *,int,int,_SURFOBJ *,_SURFOBJ *,PALETTE *,_RECTL *,HBITMAP__ * *);
void vRectBlt(unsigned char *,unsigned long,long,long,long,long);
void vRectBlt4(unsigned char *,unsigned long,long,long,long,long);
void vRectBlt8(unsigned char *,unsigned long,long,long,long,long);
void vRestartKillEudcRFONTs(RFONT *);
void vRestartKillRFONTList(RFONT *);
void vRestartRemoveAllInactiveRFONTs(RFONT * *);
void vRestartbRealizeFont(RFONT *);
void vRestorePath(XDCOBJ &,long);
void vRop2Function0(unsigned long *,unsigned long *,unsigned long *,unsigned long);
void vRop2Function1(unsigned long *,unsigned long *,unsigned long *,unsigned long);
void vRop2Function2(unsigned long *,unsigned long *,unsigned long *,unsigned long);
void vRop2Function3(unsigned long *,unsigned long *,unsigned long *,unsigned long);
void vRop2Function4(unsigned long *,unsigned long *,unsigned long *,unsigned long);
void vRop2Function5(unsigned long *,unsigned long *,unsigned long *,unsigned long);
void vRop2Function6(unsigned long *,unsigned long *,unsigned long *,unsigned long);
void vRop2Function7(unsigned long *,unsigned long *,unsigned long *,unsigned long);
void vRop2Function8(unsigned long *,unsigned long *,unsigned long *,unsigned long);
void vRop2Function9(unsigned long *,unsigned long *,unsigned long *,unsigned long);
void vRop2FunctionA(unsigned long *,unsigned long *,unsigned long *,unsigned long);
void vRop2FunctionB(unsigned long *,unsigned long *,unsigned long *,unsigned long);
void vRop2FunctionC(unsigned long *,unsigned long *,unsigned long *,unsigned long);
void vRop2FunctionD(unsigned long *,unsigned long *,unsigned long *,unsigned long);
void vRop2FunctionE(unsigned long *,unsigned long *,unsigned long *,unsigned long);
void vRop2FunctionF(unsigned long *,unsigned long *,unsigned long *,unsigned long);
void vSetPointer(HDEV__ *,_CURSINFO *,unsigned long,unsigned long,unsigned long);
void vSetupDevBitmap(PDEVOBJ *,SURFACE *);
void vSolidFillRect1(_RECTL *,unsigned long,unsigned char *,long,unsigned long,unsigned long);
void vSolidFillRect24(_RECTL *,unsigned long,unsigned char *,long,unsigned long,unsigned long);
void vSolidFillRectWithCallback(_RECTL *,unsigned long,unsigned char *,long,unsigned long,unsigned long);
void vSolidFillRow1(_ROW *,unsigned long,long,unsigned char *,unsigned long,long,unsigned long);
void vSolidFillRow24(_ROW *,unsigned long,long,unsigned char *,unsigned long,long,unsigned long);
void vSolidFillRowWithCallback(_ROW *,unsigned long,long,unsigned char *,unsigned long,long,unsigned long);
void vSolidLine(SURFACE *,_PATHOBJ *,_POINTFIX *,_CLIPOBJ *,unsigned long);
void vSolidXorRect1(_RECTL *,unsigned long,unsigned char *,long,unsigned long,unsigned long);
void vSolidXorRect24(_RECTL *,unsigned long,unsigned char *,long,unsigned long,unsigned long);
void vSolidXorRow1(_ROW *,unsigned long,long,unsigned char *,unsigned long,long,unsigned long);
void vSolidXorRow24(_ROW *,unsigned long,long,unsigned char *,unsigned long,long,unsigned long);
void vSortBltOrderWorker(_SODISPSURF * *,long,long);
void vSpAddAndCompactDirtyRect(SPRITE *,ERECTL);
void vSpAddAndCompactDirtyRegion(SPRITE *,REGION *);
void vSpAddOpaqueRects(long,long,long,long,long,long,RGNMEMOBJTMP &,RGNMEMOBJTMP &,RGNOBJ &);
void vSpAdjustSpriteDirtyAccum(SPRITE *,_RECTL *,_RECTL *,_POINTL *,_POINTL *);
void vSpBigUnderlayCopy(_SPRITESTATE *,_POINTL *,_SURFOBJ *,_RECTL *);
void vSpCheckForWndobjOverlap(_SPRITESTATE *,_RECTL *,_RECTL *);
void vSpComposite(SPRITE *,_POINTL *,_SURFOBJ *,_RECTL *);
void vSpComputeClipEffective(SPRITE *,RGNOBJ &);
void vSpComputeNoPresentRegion(_SPRITESTATE *,int);
void vSpComputeSpriteRanges(_SPRITESTATE *);
void vSpComputeUncoveredRegion(_SPRITESTATE *,int);
void vSpComputeUnlockedRegion(_SPRITESTATE *);
void vSpCorrectHdevReferences(_SPRITESTATE *,HDEV__ *);
void vSpCreateExMirror(HDEV__ *);
void vSpDeleteExMirror(HDEV__ *);
void vSpDeletePerPixelAlphaFromColorKey(_SURFOBJ *,unsigned long,_RECTL *,unsigned char *);
void vSpDeleteShape(SPRITE *);
void vSpDeleteSprite(SPRITE *);
void vSpDeleteSurface(_SURFOBJ *);
void vSpDeviceControlSprites(HDEV__ *,EWNDOBJ *,unsigned long);
void vSpDeviceWndobjChange(HDEV__ *,EWNDOBJ *);
void vSpDirectDriverAccess(_SPRITESTATE *,int);
void vSpDisableSprites(HDEV__ *,_CLEANUPTYPE);
void vSpDrawCursor(SPRITE *,_POINTL *,_SURFOBJ *,_RECTL *,_POINTL *);
void vSpDwmDestroyCursorSprites(HDEV__ *);
void vSpDwmFlushSpriteClipRgnChange(SFMLOGICALSURFACE *);
void vSpDwmMaskToARGB(_SURFOBJ *,_SURFOBJ *,int *);
void vSpDwmMigrateSpriteLSurfReference(HDEV__ *,SFMLOGICALSURFACE *,SURFACE *,SFMLOGICALSURFACE *);
void vSpDwmUpdateSpriteVisibility(DWMSPRITE *,bool);
void vSpDwmZorderSprite(HSPRITE__ *,HSPRITE__ *);
void vSpFreeClipResources(SPRITE *);
void vSpHideSprites(HDEV__ *,int);
void vSpHook(_SPRITESTATE *);
void vSpOrderInY(SPRITE *);
void vSpPIDUnlockSpriteArea(_SPRITESTATE *,_RECTL *,void *);
void vSpReadFromScreen(_SPRITESTATE *,_POINTL *,_SURFOBJ *,_RECTL *);
void vSpRedrawArea(_SPRITESTATE *,_RECTL *,int);
void vSpRedrawAreaExMirror(_SPRITESTATE *,_RECTL *);
void vSpRedrawSprite(SPRITE *);
void vSpRedrawSpriteOverlapPresent(HDEV__ *);
void vSpRedrawUncoveredArea(SPRITE *,_RECTL *);
void vSpRemoveAllSpriteOverlapPresents(HDEV__ *);
void vSpRemovePresent(HDEV__ *,_PRESENT *);
void vSpRemoveShapeHint(SPRITE *,int);
void vSpRenumberZOrder(_SPRITESTATE *);
void vSpSmallUnderlayCopy(SPRITE *,_POINTL *,_SURFOBJ *,_POINTL *,_SURFOBJ *,long,long,_RECTL *,_RECTL *);
void vSpTlSpriteStateDirectDriverAccess(_SPRITESTATE *,int);
void vSpUnhook(_SPRITESTATE *);
void vSpUpdateDirtyRgn(DWMSPRITE *,SFMLOGICALSURFACE *,HDC__ *,tagRECT *,unsigned long *,int);
void vSpUpdateLockedScreenAreas(_SPRITESTATE *,_POINTL *,_RECTL *,_CLIPOBJ *,int);
void vSpUpdatePerPixelAlphaFromColorKey(_SURFOBJ *,unsigned long,_RECTL *,unsigned char * *);
void vSpUpdateSpriteVisRgn(HDEV__ *,unsigned long);
void vSpUpdateWndobjOverlap(_SPRITESTATE *,EWNDOBJ *);
void vSpWndobjChange(HDEV__ *,EWNDOBJ *);
void vSpWriteToExMirror(_SPRITESTATE *,_POINTL *,_SURFOBJ *,_RECTL *);
void vSpWriteToScreen(_SPRITESTATE *,_POINTL *,_SURFOBJ *,_RECTL *);
void vSpZorderSprite(HDEV__ *,SPRITE *,SPRITE *);
void vSrcAlignCopyMemory(unsigned char *,unsigned char *,unsigned long);
void vSrcCopyDummy(BLTINFO *);
void vSrcCopyS16D1(BLTINFO *);
void vSrcCopyS16D16(BLTINFO *);
void vSrcCopyS16D16Identity(BLTINFO *);
void vSrcCopyS16D24(BLTINFO *);
void vSrcCopyS16D32(BLTINFO *);
void vSrcCopyS16D4(BLTINFO *);
void vSrcCopyS16D8(BLTINFO *);
void vSrcCopyS1D16(BLTINFO *);
void vSrcCopyS1D1LtoR(BLTINFO *);
void vSrcCopyS1D1RtoL(BLTINFO *);
void vSrcCopyS1D24(BLTINFO *);
void vSrcCopyS1D32(BLTINFO *);
void vSrcCopyS1D4(BLTINFO *);
void vSrcCopyS1D8(BLTINFO *);
void vSrcCopyS24D1(BLTINFO *);
void vSrcCopyS24D16(BLTINFO *);
void vSrcCopyS24D24(BLTINFO *);
void vSrcCopyS24D24Identity(BLTINFO *);
void vSrcCopyS24D32(BLTINFO *);
void vSrcCopyS24D4(BLTINFO *);
void vSrcCopyS24D8(BLTINFO *);
void vSrcCopyS32D1(BLTINFO *);
void vSrcCopyS32D16(BLTINFO *);
void vSrcCopyS32D24(BLTINFO *);
void vSrcCopyS32D32(BLTINFO *);
void vSrcCopyS32D32Identity(BLTINFO *);
void vSrcCopyS32D4(BLTINFO *);
void vSrcCopyS32D8(BLTINFO *);
void vSrcCopyS4D1(BLTINFO *);
void vSrcCopyS4D16(BLTINFO *);
void vSrcCopyS4D24(BLTINFO *);
void vSrcCopyS4D32(BLTINFO *);
void vSrcCopyS4D4(BLTINFO *);
void vSrcCopyS4D4Identity(BLTINFO *);
void vSrcCopyS4D8(BLTINFO *);
void vSrcCopyS8D1(BLTINFO *);
void vSrcCopyS8D16(BLTINFO *);
void vSrcCopyS8D24(BLTINFO *);
void vSrcCopyS8D32(BLTINFO *);
void vSrcCopyS8D4(BLTINFO *);
void vSrcCopyS8D8(BLTINFO *);
void vSrcCopyS8D8IdentityLtoR(BLTINFO *);
void vSrcCopyS8D8IdentityRtoL(BLTINFO *);
void vSrcTranCopyS8D16New(unsigned char *,long,long,unsigned char *,long,long,long,long,unsigned long,unsigned long,SURFACE *,void (*)(unsigned char *,unsigned char *,unsigned char *,long,unsigned short * *),unsigned char *);
void vStrMirror01(SURFACE *);
void vStrMirror04(SURFACE *);
void vStrMirror08(SURFACE *);
void vStrMirror16(SURFACE *);
void vStrMirror24(SURFACE *);
void vStrMirror32(SURFACE *);
void vStrMirrorError(SURFACE *);
void vStrWrite01(_STRRUN *,_XRUNLEN *,SURFACE *,_CLIPOBJ *);
void vStrWrite04(_STRRUN *,_XRUNLEN *,SURFACE *,_CLIPOBJ *);
void vStrWrite08(_STRRUN *,_XRUNLEN *,SURFACE *,_CLIPOBJ *);
void vStrWrite16(_STRRUN *,_XRUNLEN *,SURFACE *,_CLIPOBJ *);
void vStrWrite24(_STRRUN *,_XRUNLEN *,SURFACE *,_CLIPOBJ *);
void vStrWrite32(_STRRUN *,_XRUNLEN *,SURFACE *,_CLIPOBJ *);
void vStrWriteError(_STRRUN *,_XRUNLEN *,SURFACE *,_CLIPOBJ *);
void vStripSolidDiagonal(_STRIP *,_BMINFO *,_LINESTATE *);
void vStripSolidDiagonal24(_STRIP *,_BMINFO *,_LINESTATE *);
void vStripSolidDiagonalCddCallback(_STRIP *,_BMINFO *,_LINESTATE *);
void vStripSolidHorizontal(_STRIP *,_BMINFO *,_LINESTATE *);
void vStripSolidHorizontal24(_STRIP *,_BMINFO *,_LINESTATE *);
void vStripSolidHorizontalCddCallback(_STRIP *,_BMINFO *,_LINESTATE *);
void vStripSolidVertical(_STRIP *,_BMINFO *,_LINESTATE *);
void vStripSolidVertical24(_STRIP *,_BMINFO *,_LINESTATE *);
void vStripSolidVerticalCddCallback(_STRIP *,_BMINFO *,_LINESTATE *);
void vStripStyledDiagonal(_STRIP *,_BMINFO *,_LINESTATE *);
void vStripStyledDiagonal24(_STRIP *,_BMINFO *,_LINESTATE *);
void vStripStyledDiagonalCddCallback(_STRIP *,_BMINFO *,_LINESTATE *);
void vStripStyledHorizontal(_STRIP *,_BMINFO *,_LINESTATE *);
void vStripStyledHorizontal24(_STRIP *,_BMINFO *,_LINESTATE *);
void vStripStyledHorizontalCddCallback(_STRIP *,_BMINFO *,_LINESTATE *);
void vStripStyledVertical(_STRIP *,_BMINFO *,_LINESTATE *);
void vStripStyledVertical24(_STRIP *,_BMINFO *,_LINESTATE *);
void vStripStyledVerticalCddCallback(_STRIP *,_BMINFO *,_LINESTATE *);
void vSynchronizeDriver(unsigned long);
void vTransparentCopy(BLTINFO *);
void vTransparentCopyS16D16(BLTINFO *);
void vTransparentCopyS16D16Identity(BLTINFO *);
void vTransparentCopyS16D24(BLTINFO *);
void vTransparentCopyS16D32(BLTINFO *);
void vTransparentCopyS16D8(BLTINFO *);
void vTransparentCopyS24D16(BLTINFO *);
void vTransparentCopyS24D24(BLTINFO *);
void vTransparentCopyS24D24Identity(BLTINFO *);
void vTransparentCopyS24D32(BLTINFO *);
void vTransparentCopyS24D8(BLTINFO *);
void vTransparentCopyS32D16(BLTINFO *);
void vTransparentCopyS32D24(BLTINFO *);
void vTransparentCopyS32D32(BLTINFO *);
void vTransparentCopyS32D32Identity(BLTINFO *);
void vTransparentCopyS32D8(BLTINFO *);
void vTransparentCopyS4D16(BLTINFO *);
void vTransparentCopyS4D24(BLTINFO *);
void vTransparentCopyS4D32(BLTINFO *);
void vTransparentCopyS4D8(BLTINFO *);
void vTransparentCopyS8D16(BLTINFO *);
void vTransparentCopyS8D24(BLTINFO *);
void vTransparentCopyS8D32(BLTINFO *);
void vTransparentCopyS8D8(BLTINFO *);
void vTransparentCopyS8D8Identity(BLTINFO *);
void vTransparentScan(_SURFOBJ *,_SURFOBJ *,unsigned long,unsigned long,_XLATEOBJ *,_RECTL *,unsigned long);
void vTryToCacheRealization(EBRUSHOBJ *,RBRUSH *,BRUSH *,int);
void vUMPDCachedResourceCleanup(_W32THREAD *);
void vUnlinkAllEudcFromRFONTList(int,int);
void vUnmapFileFD(_FILEVIEW *,unsigned char);
void vUnreferenceFileviewSection(_FILEVIEW *);
void vUpdateClientRgnOnSpriteOverlap(EWNDOBJ *,RGNOBJ &);
void vspDestroyDwmSpriteObjInternal(HDEV__ *,bool,DWMSPRITE *);
void vspRemoveStateReferencesForSprite(DWMSPRITE *);
void wil_details_FeaturePropertyCache_ReportUsageToService(wil_details_FeaturePropertyCache *,unsigned int,FEATURE_LOGGED_TRAITS const *,int,wil_ReportingKind,unsigned __int64);
void xxxAnimateCaption(tagWND *,HDC__ *,tagRECT *,tagRECT *);
void xxxCleanupDdeConv(tagWND *);
void xxxCleanupManipulationThread(tagTHREADINFO *);
void xxxCommitMoveSize(tagWND *,_MOVESIZEDATA *);
void xxxCommonGetTitleBarInfo(tagWND *,tagTITLEBARINFO *);
void xxxContScroll(tagWND *,unsigned int,unsigned __int64,__int64);
void xxxDWP_DoCancelMode(tagWND *);
void xxxDWP_NCMouse(tagWND *,unsigned int,unsigned int,__int64);
void xxxDWP_Paint(tagWND *);
void xxxDWP_SetRedraw(tagWND *,int);
void xxxDoScroll(tagWND *,tagWND *,int,int,int);
void xxxDoTPGestureProcessing(tagPOINTERINPUTFRAME const *,tagTPSTATE *,tagHID_POINTER_DEVICE_INFO *,void *,int,unsigned long,int *);
void xxxDoTPShellProcessing(tagPOINTERINPUTFRAME const *,tagTPSTATE *,tagHID_POINTER_DEVICE_INFO *,void *,unsigned long,int *);
void xxxDrawClipboard(tagWINDOWSTATION *);
void xxxDrawItemUnderline(tagMENU *,tagITEM *,HDC__ *,int,int,unsigned short *,long);
void xxxDrawMenuItemText(tagMENU *,tagITEM *,HDC__ *,int,int,unsigned short *,int,int);
void xxxDrawSB2(tagWND *,tagSBCALC *,HDC__ *,int,unsigned int);
void xxxDrawThumb(tagWND *,tagSBCALC *,int);
void xxxFW_DestroyAllChildren(tagWND *);
void xxxForceUpdateWindowTreeDpiAwarenessContext(tagWND *,unsigned long,int);
void xxxFreeListFree(tagFREELIST *);
void xxxGetMinMaxTrackInfo(_MOVESIZEDATA *,int);
void xxxHandleCoreMessagingQueueCompletion(tagTHREADINFO *,_FILE_IO_COMPLETION_INFORMATION * const,tagQUEUE_COMPLETION_DRAINER);
void xxxHandleMTNodeTargetWindow(tagPOINTERINFONODE *);
void xxxHandleMenuPainting(tagWND *,tagMENU *);
void xxxHandleOwnerSwitch(tagWND *,tagWND *,tagWND *);
void xxxHandleVolumeUpDownCombo();
void xxxHideGhostWindow(tagWND *,tagWND *);
void xxxImeWindowPosChanged(tagSMWP *);
void xxxInertiaPTPTimerProc(tagWND *,unsigned int,unsigned __int64,__int64);
void xxxInertiaTimerProc(tagWND *,unsigned int,unsigned __int64,__int64);
void xxxInitializeMoveSizeDataProgrammaticArrangement(tagWND *,_WARR_ACTIONS,_WARR_STATES,_WINDOW_ARRANGEMENT_SCENARIO,_MOVESIZEDATA *,long *);
void xxxInternalUpdateWindow(tagWND *,unsigned long);
void xxxLoadSomeStrings();
void xxxLoadUserAndNetworkFonts();
void xxxMNDestroyHandler(tagMENUWND *);
void xxxMNDismissWithNotify(tagMENUSTATE *,SmartObjStackRef<tagPOPUPMENU>,tagITEM *,unsigned int,__int64);
void xxxMS_FlushWigglies();
void xxxMS_TrackMove(tagWND *,_WM_VALUE,unsigned __int64,__int64,_MOVESIZEDATA *);
void xxxMoveThumb(tagWND *,tagSBCALC *,int);
void xxxNotifyImeShowStatus(tagWND *);
void xxxNotifyShellOfWindowSwap(tagWND *,tagWND *);
void xxxNotifyShellPositioningChanged(tagWND *,tagCVR * const);
void xxxNotifyShellWindowPosChangedCommon(tagWND *,int,int,SHELL_WINDOWMANAGEMENT_NOTIFY_MSG_ID);
void xxxPaintIconsInSwitchWindow(tagWND *,tagSwitchWndInfo *,HDC__ *,int,int,int,int,int,tagCURSOR *);
void xxxPaintSwitchWindow(tagWND *);
void xxxPointerActivateInternal(tagWND *,int,short,unsigned __int64,tagPOINTEREVENTINT const *,int);
void xxxPointerInsideNCTargeting(tagWND *,tagPNTRWINDOWHITTTESTARGS *,tagRECT,unsigned long);
void xxxPointerParentNotify(tagWND *,tagPOINTERINFONODE const *);
void xxxProcessDesktopRecalc(tagASYNCDTOPRECALC *);
void xxxProcessMousePromotionQueue();
void xxxQueryShellForSizeCooperation(_MOVESIZEDATA *);
void xxxRedrawForSetLPITEMInfo(tagMENU *,tagITEM *);
void xxxReportMoveSizeCompletionToShell(_MOVESIZEDATA *);
void xxxResolvePendingUp(tagWND *,unsigned int,unsigned __int64,__int64);
void xxxSBTrackLoop(tagWND *,__int64,tagSBCALC *);
void xxxSend2FingerTap(tagTPSTATE *,unsigned __int64);
void xxxSend3FingerTapHotkey();
void xxxSend4FingerTapHotkey();
void xxxSendChangedMsgs(tagSMWP *);
void xxxSendClipboardMessage(tagWINDOWSTATION *,unsigned int);
void xxxSendLastFrameTouchUp(tagINJECTED_CONTACT *,DEVICEINFO *,unsigned int,unsigned long);
void xxxSendMenuDrawItemMessage(HDC__ *,unsigned int,tagMENU *,tagITEM *,int,int,tagWND *);
void xxxSendMessageToClient(tagWND *,unsigned int,unsigned __int64,__int64,tagSMS *,int,__int64 *);
void xxxSendMousePromotion(tagMOUSE_PROMOTION_ENTRY const &,int);
void xxxSendNCHitTest(tagWND *,tagPOINT,tagPOINT,tagPOINT *,int *,tagPNTRWINDOWHITTTESTARGS *);
void xxxSendNCPaint(tagWND *,HRGN__ *);
void xxxSendOpenStatusNotify(tagTHREADINFO *,tagIMEUI *,tagWND *,int);
void xxxSendToTouchStack(DEVICEINFO *,unsigned int,tagPOINTER_TOUCH_INFO *,unsigned long);
void xxxShowGhostWindow(tagWND *,tagWND *);
void xxxShowWindowViaMinMax(tagWND *,unsigned int,unsigned long);
void xxxSizeRectFromHitTarget(_MOVESIZEDATA *,tagMONITOR *,eTHRESHOLD_MARGIN_DIRECTION);
void xxxSwitchCursors(int);
void xxxSystemBroadcastMessage(unsigned int,unsigned __int64,__int64,unsigned int,tagBROADCASTMSG *,int,unsigned int);
void xxxTM_MoveDragRect(_MOVESIZEDATA *,__int64);
void xxxTabletButtonExecuteAction(tagTABLET_BUTTON_ACTION *,int,_devicemodeW *);
void xxxTabletButtonTimerCallback(tagWND *,unsigned int,unsigned __int64,__int64);
void xxxTabletSetDisplayOrientation(long,_devicemodeW *);
void xxxTooltipRender(tagTOOLTIPWND *,HDC__ *);
void xxxUpdateOtherThreadsWindows(tagWND *,HRGN__ *);
void xxxUpdateWindow2(tagWND *,unsigned long);
void zzzAddAttachment(tagTHREADINFO *,tagQ *,int *);
void zzzAnimateCursor(tagWND *,unsigned int,unsigned __int64,__int64);
void zzzCancelInertiaState(tagTPSTATE *,int);
void zzzDrawInvertScrollArea(tagWND *,tagSBTRACK *,int,unsigned int);
void zzzRecalc2(tagQ *);
void zzzRecalcThreadAttachment();
void zzzSendEndInertia(tagTPSTATE *,int);
void zzzSetSBCaretPos(tagSBWND *);
void zzzUpdateFade(tagPOINT *,tagSIZE *,HDC__ *,tagPOINT *,_BLENDFUNCTION *);
wil_details_FeaturePropertyCache Feature_BrokeredDisplays_RotMgr__private_propertyCache;
wil_details_FeaturePropertyCache Feature_ComponentUIAwareGetForegroundWindow__private_propertyCache;
wil_details_FeaturePropertyCache Feature_DWMTouchTargeting__private_propertyCache;
wil_details_FeaturePropertyCache Feature_InkProcessor__private_propertyCache;
wil_details_FeaturePropertyCache Feature_PerProcessSystemDpi__private_propertyCache;
wil_details_FeaturePropertyCache Feature_QuickLaunchInvocation__private_propertyCache;
wil_details_RecordUsageResult wil_details_RecordUsageInPropertyCache(wil_details_FeaturePropertyCache *,wil_details_ServiceReportingKind,unsigned int,unsigned int);
