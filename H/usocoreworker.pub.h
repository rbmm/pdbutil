class ARTSmartBusyCheck
{
	static bool DidRebootTaskWakeUpDevice();
	static char const * const * const sc_updateOperationTypes;
	static long CallPredictionUnit(unsigned short const *,unsigned short const *,double,unsigned short const *,bool *);
	static long EvaluateSmartBusyCheckSignal(UpdateOperationType,unsigned long,bool,bool *);
	static unsigned short const * const sc_inboxModelPath;
	static unsigned short const * const sc_modelFileName;
	static unsigned short const * const sc_modelMetadataFileName;
	static void SendSmartBusyCheckTelemetry(UpdateOperationType,bool,double,bool,char const *);
public:
	static long BuildFilePath(unsigned short const *,unsigned short const *,unsigned short *,unsigned __int64);
	static long GetUserActivityPredictionEx(UpdateOperationType,unsigned short const *,unsigned short const *,double,bool,bool *);
	static long GetUserActivityPredictionWithThreshold(UpdateOperationType,unsigned long,bool,bool *);
	static unsigned short const * const sc_smartBusyCheckSignalCollectionId;
	static unsigned short const * const sc_smartBusyCheckSignalName;
};

namespace ATL
{
	struct CAtlBaseModule
	{
		static bool m_bInitFailed;
	};

	struct CAtlComModule
	{
		long UnregisterServer(int,_GUID const *);
	};

	struct CAtlException
	{
		CAtlException(long);
	};

	struct CAtlExeModuleT<CUSOCoreWorkerModule>
	{
		bool ParseCommandLine(unsigned short const *,long *);
		long Run(int);
		static unsigned long MonitorProc(void *);
		virtual long Unlock();
		virtual ~CAtlExeModuleT<CUSOCoreWorkerModule>();
	};

	struct CAtlModule
	{
		long UpdateRegistryFromResourceS(unsigned int,int,_ATL_REGMAP_ENTRY *);
		static _GUID m_libid;
		static int WordCmpI(unsigned short const *,unsigned short const *);
		virtual long GetGITPtr(IGlobalInterfaceTable * *);
		virtual long GetLockCount();
		virtual long Lock();
		void Term();
	};

	struct CAtlModuleT<CUSOCoreWorkerModule>
	{
		virtual long AddCommonRGSReplacements(IRegistrarBase *);
	};

	struct CAutoVectorPtr<unsigned short>
	{
		~CAutoVectorPtr<unsigned short>();
	};

	struct CComAutoCriticalSection
	{
		~CComAutoCriticalSection();
	};

	struct CComBSTR
	{
		~CComBSTR();
	};

	struct CComClassFactory
	{
		virtual long CreateInstance(IUnknown *,_GUID const &,void * *);
		virtual long LockServer(int);
	};

	struct CComCreator2<CComCreator<CComObject<UsoCoreWorker> >,CComFailCreator<-2147221232> >
	{
		static long CreateInstance(void *,_GUID const &,void * *);
	};

	struct CComCreator<CComObject<UsoCoreWorker> >
	{
		static long CreateInstance(void *,_GUID const &,void * *);
	};

	struct CComCreator<CComObjectNoLock<CComClassFactory> >
	{
		static long CreateInstance(void *,_GUID const &,void * *);
	};

	struct CComCritSecLock<CComAutoCriticalSection>
	{
		~CComCritSecLock<CComAutoCriticalSection>();
	};

	struct CComCritSecLock<CComCriticalSection>
	{
		~CComCritSecLock<CComCriticalSection>();
	};

	struct CComCriticalSection
	{
		long Init();
		~CComCriticalSection();
	};

	struct CComObject<UsoCoreWorker>
	{
		virtual long QueryInterface(_GUID const &,void * *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
		virtual ~CComObject<UsoCoreWorker>();
	};

	struct CComObject<UsoSessionCollection>
	{
		static long CreateInstance(CComObject<UsoSessionCollection> * *);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
	};

	struct CComObject<UsoSettingArray>
	{
		static long CreateInstance(CComObject<UsoSettingArray> * *);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
	};

	struct CComObject<UsoSettingObject>
	{
		static long CreateInstance(CComObject<UsoSettingObject> * *);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
	};

	struct CComObject<UsoUpdate>
	{
		static long CreateInstance(CComObject<UsoUpdate> * *);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
	};

	struct CComObject<UsoUpdateCollection>
	{
		static long CreateInstance(CComObject<UsoUpdateCollection> * *);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
	};

	struct CComObject<UsoUpdateHistoryEntry>
	{
		static long CreateInstance(CComObject<UsoUpdateHistoryEntry> * *);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
	};

	struct CComObject<UsoUpdateHistoryEntryCollection>
	{
		static long CreateInstance(CComObject<UsoUpdateHistoryEntryCollection> * *);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
	};

	struct CComObjectNoLock<CComClassFactory>
	{
		virtual long QueryInterface(_GUID const &,void * *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
	};

	struct CComObjectRootBase
	{
		static _ATL_CATMAP_ENTRY const * GetCategoryMap();
		static long InternalQueryInterface(void *,_ATL_INTMAP_ENTRY const *,_GUID const &,void * *);
		static void ObjectMain(bool);
	};

	struct CComPtr<CNotifyInterface>
	{
		~CComPtr<CNotifyInterface>();
	};

	struct CComPtr<IAction>
	{
		~CComPtr<IAction>();
	};

	struct CComPtr<IActionCollection>
	{
		~CComPtr<IActionCollection>();
	};

	struct CComPtr<IBackgroundCopyJob>
	{
		~CComPtr<IBackgroundCopyJob>();
	};

	struct CComPtr<IBackgroundCopyManager>
	{
		~CComPtr<IBackgroundCopyManager>();
	};

	struct CComPtr<ICategory>
	{
		~CComPtr<ICategory>();
	};

	struct CComPtr<ICategoryCollection>
	{
		~CComPtr<ICategoryCollection>();
	};

	struct CComPtr<IConfigManager2>
	{
		~CComPtr<IConfigManager2>();
	};

	struct CComPtr<IDeliveryOptimizationFile2>
	{
		~CComPtr<IDeliveryOptimizationFile2>();
	};

	struct CComPtr<IDeliveryOptimizationJob2>
	{
		~CComPtr<IDeliveryOptimizationJob2>();
	};

	struct CComPtr<IDeliveryOptimizationJob>
	{
		~CComPtr<IDeliveryOptimizationJob>();
	};

	struct CComPtr<IDeploymentDownloadRequest>
	{
		~CComPtr<IDeploymentDownloadRequest>();
	};

	struct CComPtr<IDeploymentFileRequestCollection>
	{
		~CComPtr<IDeploymentFileRequestCollection>();
	};

	struct CComPtr<IDeploymentSession>
	{
		~CComPtr<IDeploymentSession>();
	};

	struct CComPtr<IExecAction>
	{
		~CComPtr<IExecAction>();
	};

	struct CComPtr<IHashStream>
	{
		~CComPtr<IHashStream>();
	};

	struct CComPtr<IPersistStream>
	{
		~CComPtr<IPersistStream>();
	};

	struct CComPtr<IRegisteredTask>
	{
		~CComPtr<IRegisteredTask>();
	};

	struct CComPtr<IRegisteredTaskCollection>
	{
		~CComPtr<IRegisteredTaskCollection>();
	};

	struct CComPtr<IStream>
	{
		~CComPtr<IStream>();
	};

	struct CComPtr<ITaskDefinition>
	{
		~CComPtr<ITaskDefinition>();
	};

	struct CComPtr<ITaskFolder>
	{
		~CComPtr<ITaskFolder>();
	};

	struct CComPtr<ITaskService>
	{
		~CComPtr<ITaskService>();
	};

	struct CComPtr<IUpdateHistoryEntry>
	{
		~CComPtr<IUpdateHistoryEntry>();
	};

	struct CComPtr<IUpdateHistoryEntryCollection>
	{
		~CComPtr<IUpdateHistoryEntryCollection>();
	};

	struct CComPtr<IUpdateIdentity>
	{
		~CComPtr<IUpdateIdentity>();
	};

	struct CComPtr<IUpdateInternalProperty>
	{
		~CComPtr<IUpdateInternalProperty>();
	};

	struct CComPtr<IUsoSessionInternal>
	{
		~CComPtr<IUsoSessionInternal>();
	};

	struct CComPtr<IUsoUpdate>
	{
		~CComPtr<IUsoUpdate>();
	};

	struct CComPtr<IUsoUpdateCollection>
	{
		~CComPtr<IUsoUpdateCollection>();
	};

	struct CComPtr<IUsoUpdateCollectionInternal>
	{
		~CComPtr<IUsoUpdateCollectionInternal>();
	};

	struct CComPtr<IUsoUpdateInternal>
	{
		~CComPtr<IUsoUpdateInternal>();
	};

	struct CComPtr<IUsoUpdateSearcher>
	{
		~CComPtr<IUsoUpdateSearcher>();
	};

	struct CComPtr<IXmlReader>
	{
		~CComPtr<IXmlReader>();
	};

	struct CComPtr<IXmlWriter>
	{
		~CComPtr<IXmlWriter>();
	};

	struct CComSafeArray<unsigned char,17>
	{
		long SetAt(long,unsigned char const &,int);
		~CComSafeArray<unsigned char,17>();
	};

	struct CComVariant
	{
		unsigned long GetSize();
		~CComVariant();
	};

	struct CExpansionVector
	{
		int Add(unsigned short const *,unsigned short const *);
		long ClearReplacements();
	};

	struct CRegKey
	{
		long DeleteSubKey(unsigned short const *);
		long RecurseDeleteKey(unsigned short const *);
		~CRegKey();
	};

	class CRegObject
	{
	protected:
		long RegisterFromResource(unsigned short const *,unsigned short const *,unsigned short const *,int);
	public:
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
		long AddValue(CRegKey &,unsigned short const *,unsigned short *);
		long NextToken(unsigned short *);
		long RegisterSubkeys(unsigned short *,HKEY__ *,int,int);
		long SkipAssignment(unsigned short *);
		static unsigned short const * const * const rgszNeverDelete;
	public:
		long PreProcessBuffer(unsigned short *,unsigned short * *);
		long RegisterBuffer(unsigned short *,int);
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

	namespace Checked
	{
		void memcpy_s(void *,unsigned __int64,void const *,unsigned __int64);
	};

	namespace _ATL_SAFE_ALLOCA_IMPL
	{
		struct CAtlSafeAllocBufferManager<CCRTAllocator>
		{
			~CAtlSafeAllocBufferManager<CCRTAllocator>();
		};

	};

	ATL::CAtlBaseModule _AtlBaseModule;
	ATL::CAtlComModule _AtlComModule;
	ATL::CAtlModule * _pAtlModule;
	ATL::CAtlWinModule _AtlWinModule;
	int Base64Encode(unsigned char const *,int,char *,int *,unsigned long);
	int Base64EncodeGetRequiredLength(int,unsigned long);
	long (* _pPerfRegFunc)(HINSTANCE__ *);
	long (* _pPerfUnRegFunc)();
	long AtlHresultFromLastError();
	long AtlHresultFromWin32(unsigned long);
	long AtlLoadTypeLib(HINSTANCE__ *,unsigned short const *,unsigned short * *,ITypeLib * *);
	long AtlRegisterClassCategoriesHelper(_GUID const &,ATL::_ATL_CATMAP_ENTRY const *,int);
	long AtlRegisterTypeLib(HINSTANCE__ *,unsigned short const *);
	void AtlThrowImpl(long);
	void _AtlRaiseException(unsigned long,unsigned long);
};

class ActiveHoursHelper
{
	static long GetActiveHoursEnd(unsigned long *);
	static long GetActiveHoursStart(unsigned long *);
	static long GetActiveHoursValue(unsigned short const *,unsigned long &);
	static long GetNextActiveHoursTime(bool,_SYSTEMTIME *,_TlgProvider_t const *);
public:
	static bool CurrentTimeIsInsideActiveHours(_TlgProvider_t const *);
	static bool IsActiveHoursConfigured(_TlgProvider_t const *);
	static long GetDeviceActiveHours(unsigned short *,unsigned short *,_TlgProvider_t const *);
};

struct AutoMoveToEndOfElement
{
	AutoMoveToEndOfElement(XmlReader *,bool);
	void MarkEndOfElementReached();
	~AutoMoveToEndOfElement();
};

struct BatteryUtil
{
	static bool IsBatteryPresent();
	static bool IsBatterySaverEnabled();
	static bool IsOnACPower();
	static unsigned long GetBatteryLevel();
};

struct BlackBoxHelper
{
	static long StoreStateInBlackBox(BlackBoxState);
};

struct CCoInit
{
	~CCoInit();
};

struct CNotifyInterface
{
	CNotifyInterface(unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,UsoUpdateEnhancedTraceLogging::ModelDownloadActivity,_GUID);
	virtual long JobError(IBackgroundCopyJob *,IBackgroundCopyError *);
	virtual long JobModification(IBackgroundCopyJob *,unsigned long);
	virtual long JobTransferred(IBackgroundCopyJob *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CTCoAllocPolicy
{
	static unsigned __int64 _CoTaskMemSize(void *);
public:
	static long Alloc(void *,unsigned long,unsigned __int64,void * *);
};

class CUSOCorrelationVector
{
	static unsigned short const * const sc_szProgressedRootCorrelationVector;
	static unsigned short const * const sc_szRootCorrelationVector;
	static unsigned short const * const sc_szUpdateCorrelationVector;
public:
	CUSOCorrelationVector();
	static void GetProgressedUpdateCorrelationVector(IUsoSessionInternal *,IUsoUpdateInternal *,char *,CorrelationVectorAction,bool);
	void GenerateRootCorrelationVector(IUsoSessionInternal *,char *);
	void GetRootCorrelationVector(IUsoSessionInternal *,char *);
	void ProgressRootCorrelationVector(IUsoSessionInternal *,CorrelationVectorAction,bool,char *);
	void ProgressUpdateCorrelationVector(IUsoSessionInternal *,IUsoUpdateInternal *,CorrelationVectorAction,bool,char *);
	void SetCorrelationVectorUpdateProperty(IUsoSessionInternal *,IUsoUpdateInternal *,bool);
	~CUSOCorrelationVector();
};

class CUpdateCspStore
{
	long Backup();
	long PopulateMap();
public:
	CUpdateCspStore();
	CUpdateObj * FindUpdate(_GUID);
	CUpdateObj * FindUpdate(unsigned short const *);
	long Initialize(unsigned short const *);
	long RemoveUpdate(CUpdateObj *);
	~CUpdateCspStore();
};

class CbsOfflineUtil
{
	HINSTANCE__ * LoadCopiedSsshimBinary(wchar_t const *);
	long CbsGetSsBinaryPathByCookie(wchar_t const *,_SSS_SERVICING_STACK_COOKIE,_SSS_BIND_SERVICING_STACK_INPUT_PARAMETERS *,wchar_t * *);
	long CbsLoadSssFromTargetImageEx(int,wchar_t const *,HINSTANCE__ * *);
	long CreateTemporyFolderForShimBinary();
public:
	long CbsCreateSessionFromCbsCorePath(wchar_t const *,ICbsSession * *);
	virtual long CbsCreateOfflineSession(wchar_t const *,ICbsSession * *);
	virtual long CbsCreateOfflineSessionFromExternalStack(wchar_t const *,ICbsSession * *);
	virtual long CbsCreateOfflineSessionFromStackInImage(int,wchar_t const *,ICbsSession * *);
	virtual long CbsGetSsBinaryPathFromTargetImage(int,wchar_t const *,wchar_t const *,wchar_t * *);
	virtual long CbsGetSsBinaryPathFromTargetImageEx(int,int,wchar_t const *,wchar_t const *,unsigned __int64 const *,wchar_t const *,wchar_t * *,wchar_t * *);
	virtual long CbsLoadSsBinaryFromTargetImage(int,wchar_t const *,wchar_t const *,HINSTANCE__ * *);
	virtual long CbsLoadSssFromTargetImage(wchar_t const *,HINSTANCE__ * *);
	virtual void CbsOfflineFinalize();
	virtual void CbsOfflineFinalizeNoShutdownImageStack();
	virtual void CbsShutdownImageStack();
	virtual void Release();
	~CbsOfflineUtil();
};

struct ContextSwitch
{
	~ContextSwitch();
};

struct CrmManager
{
	long Initialize();
};

class CspHelper
{
	static unsigned short const * const sc_szUpdateNodeType;
	static unsigned short const * const sc_szUpdateNodeValue;
public:
	static long CreateConfigMgr2(IConfigManager2 * *);
	static long ExecuteNode(unsigned short const *);
	static long GetBoolNodeValue(unsigned short const *,bool *);
	static long GetCspNode(IConfigManager2 *,unsigned short const *,IConfigNode * *);
	static long GetCspNodeValue(IConfigManager2 *,unsigned short const *,tagVARIANT *,ConfigDataType *);
	static long GetRegNodeValue(unsigned short const *,unsigned short const *,unsigned short const *,tagVARIANT *);
	static long SetBoolNodeValue(unsigned short const *,bool);
	static long SetCspNodeValue(IConfigManager2 *,unsigned short const *,ConfigDataType,tagVARIANT);
	static long SetRegNodeValue(unsigned short const *,unsigned short const *,unsigned short const *,tagVARIANT);
};

class DeferManager
{
protected:
	static bool IsDriverIgnorable(unsigned short const *,unsigned short);
	static bool IsPowerRequestIgnorable(_DIAGNOSTIC_BUFFER const &);
	static bool IsServiceIgnorable(unsigned long,unsigned long,unsigned short const *);
	static bool IsTaskIgnorable(unsigned short const *);
	static bool IsUserProcessIgnorable(unsigned short const *,unsigned short const *);
	static long CheckDeferReasons(unsigned long,DeferScenario,SmartBusyCheckData,unsigned long,DeferReasonData &);
	static long GetDetails(_DIAGNOSTIC_BUFFER const &,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
	static long GetDetails(_REASON_BUFFER const *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
	static long GetValidExecutionStateReasons(DeferReasonData &);
public:
	static long CanInstallDriverUpdates(unsigned long,SmartBusyCheckData,unsigned long,DeferReasonData &);
	static long GetPowerInformation(POWER_INFORMATION_LEVEL,std::vector<unsigned char,std::allocator<unsigned char> > &);
	static long IsRestartAcceptable(unsigned long,SmartBusyCheckData,unsigned long,DeferReasonData &);
};

struct DeferReasonData
{
	~DeferReasonData();
};

class DetectionHandler
{
	long AddApplicableUpdatesToActivityData(IUsoUpdateCollectionInternal *);
	long AddSeekerUpdatesToActivityData(IUsoUpdateCollectionInternal *);
	long AddServicesToActivityData(std::vector<DetectionHandler::DetectionResult,std::allocator<DetectionHandler::DetectionResult> > const &);
	long EvaluateMachineActivity(IUsoSessionInternal *);
	long RecordScanSuccess(IUsoSessionInternal *);
	long RunDetection(IUsoSessionInternal *,tagUpdateState *,DetectionProperties,bool,bool,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,char * const,bool);
	long RunPostScanTasks(IUsoSessionInternal *,bool &);
protected:
	virtual void LogAndClearScreenOnStudyEvent();
public:
	bool IsUUPOverrideSet(IUsoSessionInternal *);
	int IsNotNeededForPPI(IUsoUpdateInternal *);
	int IsUpdateApproved(IUsoUpdateInternal *,CUpdateCspStore *);
	long CheckForUpdates(IUsoSessionInternal *,DetectionProperties const &,_GUID const &,bool,bool);
	long CheckOneShotUpdateScanCount(IUsoSessionInternal *);
	long CheckPolicyUpdateApprovalList(IUsoSessionInternal *,IUsoUpdateCollectionInternal *);
	long CheckScanSla(IUsoSessionInternal *,bool &,bool &,unsigned long &,unsigned long &);
	long ConfigureBackupScanTask(IUsoSessionInternal *);
	long DetermineNextStateForFullServicingStack(IUsoSessionInternal *,_FILETIME,bool,tagUpdateState *);
	long DetermineNextStateForLiteServicingStack(IUsoSessionInternal *,_FILETIME,bool,tagUpdateState *);
	long GetRegisteredDetectionServices(IUsoSessionInternal *,std::vector<DetectionHandler::DetectionResult,std::allocator<DetectionHandler::DetectionResult> > *,bool,bool);
	long IncrementScanFailureRetryCount(IUsoSessionInternal *);
	long InitializeUnp(IUsoSessionInternal *);
	long InitiateDtu(IUsoSessionInternal *,char const * const,unsigned long,bool *,bool *);
	long IsAutoUpdateAllowed(IUsoSessionInternal *,bool *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
	long IsScanFailureRetryMaxExceeded(IUsoSessionInternal *,bool *);
	long IsSecurityOrCriticalUpdate(IUsoUpdateInternal *,int *);
	long MergeSeekerUpdates(IUsoUpdateCollectionInternal *,IUsoUpdateCollectionInternal *);
	long RefreshUpdateStatusOnPolicy(IUsoSessionInternal *,IUsoUpdateCollectionInternal *,bool);
	long RemoveUpdatesFromOutOfScopedServices(IUsoSessionInternal *,std::vector<DetectionHandler::DetectionResult,std::allocator<DetectionHandler::DetectionResult> > const &);
	long RunDetectionIfAllowed(IUsoSessionInternal *,long *,tagUpdateState *);
	long RunOtcDetection(IUsoSessionInternal *,tagUpdateState *);
	long ScheduleNextDeadlineUpdate(IUsoSessionInternal *);
	long SetDetectionProperties(IUsoSessionInternal *,IUsoUpdateSearcher *,DetectionProperties const &,_GUID const &);
	long VerifyDetectionResult(IUsoSessionInternal *,IUsoUpdateSearchResult *,_GUID const &,bool);
	static DetectionServiceInfo const * const sc_rgdsiServices;
	static SkuToSearchCriteria const * const sc_rgstsfSkuSearchFilterMap;
	static UpdateStateInfo const * const sc_rgusiAvailableStates;
	static long GetDUICSearchCriteria(unsigned short * *);
	static long GetProductList(std::vector<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::allocator<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > &);
	static long GetSearchCriteria(_GUID,unsigned short * *,unsigned long *,bool,IUsoSessionInternal *);
	static long MarkOobeUpdateStartedState(bool);
	static long MarkOobeUpdates(IUsoSessionInternal *,IUsoUpdateCollectionInternal *);
	static long ProjectUpdateAgentDetectionLogsToLogDirectory();
	static long RefreshSeekerSessionState(IUsoSessionInternal *,bool *);
	virtual long Completed();
	virtual long GetUpdateStateInfoArrayAtIndex(unsigned long,UpdateStateInfo *);
	virtual long ProgressChanged();
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long GetUpdateStateInfoArrayCount();
	virtual unsigned long Release();
	virtual void RunState(IUsoSessionInternal *,tagUpdateState,long *,tagUpdateState *);
	void GetNetworkStatus(long *);
	void SetDtuCommitEnabledToFalse(IUsoSessionInternal *);
	void SetupRetryTask(IUsoSessionInternal *,long,bool);
};

struct DiskSpaceHelper
{
	static long GetFreeDiskSpaceInMB(unsigned short const *,unsigned long &);
	static long GetFreeSystemDiskSpaceInMB(unsigned long &);
};

class DownloadHandler
{
	struct UsoDownloadList
	{
		~UsoDownloadList();
	};

protected:
	virtual void LogAndClearScreenOnStudyEvent();
public:
	bool AllowAutoDownloadOverMeteredNetwork(IUsoSessionInternal *);
	long AddUpdateToReserve(IUsoSessionInternal *,IUpdateReserveManager *,IUsoUpdateDownloader *,IUsoUpdateInternal *,bool);
	long BuildDownloader(IUsoSessionInternal *,DownloadHandler::DownloadProperties const &,IUsoUpdateDownloader * *);
	long ChangeDownloadNetworkCostPolicy(IUsoSessionInternal *,IUsoUpdateDownloader *,std::vector<DownloadHandler::UsoDownloadJob,std::allocator<DownloadHandler::UsoDownloadJob> > &,tagNetworkCostPolicy *);
	long CheckUpdateSerializationThreshold(IUsoSessionInternal *,bool &);
	long CreateDownloadJobs(IUsoSessionInternal *,IUsoUpdateDownloader *,DownloadHandler::UsoDownloadList const &,unsigned long,std::vector<DownloadHandler::UsoDownloadJob,std::allocator<DownloadHandler::UsoDownloadJob> > &);
	long CreateDownloadList(IUsoSessionInternal *,IUsoUpdateCollectionInternal *,DownloadHandler::UsoDownloadList *);
	long CreateDownloadListForFullServicingStack(IUsoSessionInternal *,IUsoUpdateCollectionInternal *,DownloadHandler::UsoDownloadList *);
	long CreateDownloadListForLiteServicingStack(IUsoSessionInternal *,IUsoUpdateCollectionInternal *,DownloadHandler::UsoDownloadList *);
	long DetermineNextStateForFullServicingStack(IUsoSessionInternal *,IUsoUpdateCollectionInternal *,tagUpdateState *);
	long DetermineNextStateForLiteServicingStack(IUsoSessionInternal *,IUsoUpdateCollectionInternal *,tagUpdateState *);
	long DownloadUpdates(IUsoSessionInternal *,DownloadHandler::UsoDownloadList const &,bool,UpdateHandlerState &);
	long EvaluateUpdateStickiness(IUsoSessionInternal *,DownloadHandler::UsoDownloadJob const &,bool);
	long FilterDownloadListToPrimaryOSProducts(IUsoSessionInternal *,DownloadHandler::UsoDownloadList const &,IUsoUpdateCollectionInternal *);
	long GetHighestPriorityUpdate(IUsoSessionInternal *,DownloadHandler::UsoDownloadList const &,bool,DownloadHandler::UsoDownloadList &,IUsoUpdateInternal * *,bool &);
	long IsBlockedBySchedule(IUsoSessionInternal *,IUsoUpdateCollectionInternal *,DownloadHandler::DownloadProperties const &,bool *);
	long IsDownloadBlocked(IUsoSessionInternal *,IUsoUpdateCollectionInternal *,DownloadHandler::DownloadProperties const &,bool,bool *);
	long IsReserveSpaceApplicable(IUsoSessionInternal *,IUsoUpdateCollectionInternal *,bool &);
	long IsUpdateSupportedByReserves(IUsoSessionInternal *,IUsoUpdateInternal *,bool &);
	long RecreateDownloadJob(IUsoSessionInternal *,IUsoUpdateDownloader *,DownloadHandler::UsoDownloadJob *);
	long RefreshPostDownloadTasks(IUsoSessionInternal *,DownloadHandler::UsoDownloadList const &,bool);
	long RunDownloadIfAllowed(IUsoSessionInternal *,long *,tagUpdateState *);
	long SetDownloadProperties(IUsoSessionInternal *,IUsoUpdateDownloader *,DownloadHandler::DownloadProperties const &);
	long ShouldInstallImmediately(IUsoSessionInternal *,IUsoUpdateInternal *,bool *);
	long StoreDownloadStartTime(IUsoSessionInternal *,IUsoUpdateInternal *,_FILETIME);
	long UpdateDownloadProgress(IUsoSessionInternal *,IUsoDownloadProgress *,tagNetworkCostPolicy,DownloadHandler::UsoDownloadJob *);
	long UpdateDownloadResult(IUsoSessionInternal *,IUsoUpdateDownloader *,DownloadHandler::UsoDownloadJob *);
	long UpdateOverallDownloadState(IUsoSessionInternal *,IUsoUpdateDownloader *,std::vector<DownloadHandler::UsoDownloadJob,std::allocator<DownloadHandler::UsoDownloadJob> > &,tagNetworkCostPolicy,UpdateHandlerState &,unsigned long &);
	long WaitForDownloads(IUsoSessionInternal *,IUsoUpdateDownloader *,std::vector<DownloadHandler::UsoDownloadJob,std::allocator<DownloadHandler::UsoDownloadJob> > &,tagNetworkCostPolicy,UpdateHandlerState &);
	static UpdateStateInfo const * const sc_rgusiAvailableStates;
	static int PolicyRequiresDownloadNotification(IUsoSessionInternal *);
	static unsigned short const * const sc_szAllowMeteredNetwork;
	virtual long Completed();
	virtual long GetUpdateStateInfoArrayAtIndex(unsigned long,UpdateStateInfo *);
	virtual long ProgressChanged();
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long GetUpdateStateInfoArrayCount();
	virtual unsigned long Release();
	virtual void RunState(IUsoSessionInternal *,tagUpdateState,long *,tagUpdateState *);
	void AbortDownloadRequests(std::vector<DownloadHandler::UsoDownloadJob,std::allocator<DownloadHandler::UsoDownloadJob> > &);
	void MarkUpdatesAsDeferred(IUsoSessionInternal *,std::vector<DownloadHandler::UsoDownloadJob,std::allocator<DownloadHandler::UsoDownloadJob> > &,long,StateDeferReason);
	void RunUpdateComplete(IUsoSessionInternal *,tagUpdateState *);
	void SendInstallImmediatelyTelemetry(IUsoSessionInternal *,IUsoUpdateInternal *,_GUID &);
};

class DownloadJob
{
	static long AddFileWithRanges(IBackgroundCopyJob *,unsigned short const *,unsigned short const *);
	static long CreateJob(IBackgroundCopyJob * *);
	static long SetupCallbackNotifications(IBackgroundCopyJob *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *);
	static long StartJobDownload(IBackgroundCopyJob *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *);
	static unsigned short const * const sc_copyJobName;
public:
	static long StartDownload(unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,_GUID *);
};

class DuMigration
{
	struct Impl
	{
		~Impl();
	};

	static wchar_t const * const c_szRegKeyMicrosoftSuffix;
	static wchar_t const * const c_szRegKeyMigrationManagerStatusSuffix;
	static wchar_t const * const c_szRegKeyMigratorStatusSuffix;
	static wchar_t const * const c_szRegKeyOEMSuffix;
	static wchar_t const * const c_szRegKeyPersistentStateNotStateSeparated;
	static wchar_t const * const c_szRegKeyPostUpdateUXSuffix;
	static wchar_t const * const c_szRegKeyProvisioningStatusSuffix;
public:
	DuMigration();
	long Initialize();
	static unsigned short const * const c_szRegValueComplete;
	static unsigned short const * const c_szRegValueCorrelationVectors;
	static unsigned short const * const c_szRegValueRestarts;
	static unsigned short const * const c_szRegValueResult;
	unsigned short const * GetRegKeyMigrationManagerStatusPCUSHORT();
	unsigned short const * GetRegKeyPostUpdateUXPCUSHORT();
	~DuMigration();
};

class EnterprisePolicyHelper
{
protected:
	static getCachedPolicyTemplateProperty const * const cachedPolicyTemplateMap;
public:
	static long IsEnterpriseAttributionEnabledViaPolicy(IUsoSessionCommon *,bool *);
};

struct EnterprisePolicyReader
{
	static long ReadPolicyWithFallback(tagEnterprisePolicy,tagEnterprisePolicyValue_V1 * *);
	static long ReleaseEnterprisePolicyValue(tagEnterprisePolicyValue_V1 * *);
};

struct EnvironmentUtil
{
	static bool IsServerSku();
};

class ExpeditedModeHelper
{
	static long CheckEntryConditions(IUsoSessionCommon *,ExpeditedMode &);
	static long CheckEntryConditionsForDeadline(IUsoSessionCommon *,ExpeditedMode &);
	static long CheckEntryConditionsForGetMeUpToDate(IUsoSessionCommon *,ExpeditedMode &);
	static long CheckErrorExitConditions(IUsoSessionCommon *,ExpeditedMode,bool *);
	static long EvaluateExpeditedMode(IUsoSessionCommon *,ExpeditedMode &);
	static long SetExpeditedMode(ExpeditedMode);
public:
	static bool ShouldBypassDeferPolicies(ExpeditedMode);
	static bool ShouldOverrideScanInterval(ExpeditedMode);
	static long ClearExpeditedMode(ExpeditedMode);
	static long GetComplianceDeadlineState(IUsoSessionCommon *,int *,unsigned long *,_FILETIME *,_TlgProvider_t const *);
	static long GetExpeditedMode(IUsoSessionCommon *,ExpeditedMode &);
};

struct FORMAT_STRUCT
{
	FORMAT_STRUCT();
};

class FileManager
{
	static long RecursiveScanDirectory(unsigned short const *,long (*const)(DIRECTORY_SCAN_STATE,unsigned short const *,_WIN32_FIND_DATAW const *,void const *),void *,bool);
	static long RemoveDirectoryTree(unsigned short const *,unsigned long);
	static unsigned short const * const * const c_rgpszDirectoryName;
	static unsigned short const * const * const c_rgpszFileName;
	static unsigned short const * const c_szDUSharedDirectory;
	static unsigned short const * const c_szUSOPrivateDirectory;
	static unsigned short const * const c_szUSOSharedDirectory;
public:
	static bool FileExists(unsigned short const *);
	static long BuildPath(unsigned short *,unsigned __int64,unsigned short const *,unsigned short const *);
	static long CatPath(unsigned short *,unsigned __int64,unsigned short const *);
	static long CreateDirectoryW(tagUSODirectory,unsigned short *,unsigned __int64,unsigned short const *,bool);
	static long Delete(DIRECTORY_SCAN_STATE,unsigned short const *,_WIN32_FIND_DATAW const *,void const *);
	static long GetFilePath(tagUSOFilePath,unsigned short *,unsigned __int64);
	static long GetFileSizeInKB(unsigned short const *,unsigned __int64 &);
	static long GetLastWriteTime(unsigned short const *,_FILETIME &);
	static long GetMatchingFiles(unsigned short const *,unsigned short const *,std::vector<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::allocator<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > *);
	static long GetRootDirectory(tagUSODirectory,unsigned short *,unsigned __int64);
	static long RecursiveCreateDirectory(unsigned short const *);
	static long RecursiveRemoveDirectoryEx(unsigned short const *,bool);
	static long RemoveDirectoryW(tagUSODirectory,unsigned short const *);
};

struct FileStream
{
	virtual long Clone(IStream * *);
	virtual long Commit(unsigned long);
	virtual long CopyTo(IStream *,_ULARGE_INTEGER,_ULARGE_INTEGER *,_ULARGE_INTEGER *);
	virtual long LockRegion(_ULARGE_INTEGER,_ULARGE_INTEGER,unsigned long);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Read(void *,unsigned long,unsigned long *);
	virtual long Revert();
	virtual long Seek(_LARGE_INTEGER,unsigned long,_ULARGE_INTEGER *);
	virtual long SetSize(_ULARGE_INTEGER);
	virtual long Stat(tagSTATSTG *,unsigned long);
	virtual long UnlockRegion(_ULARGE_INTEGER,_ULARGE_INTEGER,unsigned long);
	virtual long Write(void const *,unsigned long,unsigned long *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class FileSystemUtility
{
protected:
	long Initialize();
	static int FormatCallback(_FMIFS_PACKET_TYPE,unsigned long,void * const);
	static int ScanCallback(_FMIFS_PACKET_TYPE,unsigned long,void * const);
public:
	long FormatVolumeEx(wchar_t const *,wchar_t const *,unsigned long,unsigned long,wchar_t const *);
	long ScanVolume(unsigned long,wchar_t const *,wchar_t const *,unsigned char,unsigned long,unsigned long *);
	static long CreateFileSystemUtility(FileSystemUtility * *);
	virtual ~FileSystemUtility();
};

struct HashUtility
{
	HashUtility();
	long CloseAlgorithmProvider();
	long FinishHash(unsigned char *,unsigned long);
	long HashData(unsigned char *,unsigned long);
	long Initialize(unsigned short const *);
	long OpenAlgorithmProvider(unsigned short const *);
	long Release();
	static long Base64EncodeValue(unsigned char const *,unsigned long,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *);
	static long CalculateBufferHash(unsigned char *,unsigned long,unsigned short const *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *);
	static long CalculateBufferHash(unsigned char *,unsigned long,unsigned short const *,std::shared_ptr<unsigned char> *,unsigned long *);
	~HashUtility();
};

struct ImageLogger
{
	virtual ~ImageLogger();
	void Log(unsigned __int64,LogLevel,wchar_t const *,...);
};

class InstallationHandler
{
	struct UsoInstallList
	{
		~UsoInstallList();
	};

	bool DeferBasedOnPolicy(IUsoSessionInternal *);
	long AddCompletedUpdateToActivityData(IUsoUpdateInternal *,tagUpdateStatusInfo &);
	long AddRebootRequiredUpdateToActivityData(IUsoUpdateInternal *,tagUpdateStatusInfo &);
	long BuildInstaller(IUsoSessionInternal *,InstallationHandler::UsoInstallList const &,bool,IUsoUpdateInstaller * *);
	long CheckInstallPolicy(IUsoSessionInternal *,int *);
	long CheckInstallRetryCount(IUsoSessionInternal *,unsigned short const *);
	long CheckOsOrFirmwareVersionChanges(int *);
	long ConfigureDeferredInstall(IUsoSessionInternal *,bool const &,bool const &);
	long CreateInstallList(IUsoSessionInternal *,IUsoUpdateCollectionInternal *,std::list<InstallationHandler::UsoInstallList,std::allocator<InstallationHandler::UsoInstallList> > *,short,short);
	long CreateInstallListForFullServicingStack(IUsoSessionInternal *,IUsoUpdateCollectionInternal *,std::list<InstallationHandler::UsoInstallList,std::allocator<InstallationHandler::UsoInstallList> > *,short,short);
	long CreateInstallListForLiteServicingStack(IUsoSessionInternal *,IUsoUpdateCollectionInternal *,std::list<InstallationHandler::UsoInstallList,std::allocator<InstallationHandler::UsoInstallList> > *,short,short);
	long DetermineNextStateForFullServicingStack(IUsoSessionInternal *,IUsoUpdateCollectionInternal *,tagUpdateState *);
	long DetermineNextStateForLiteServicingStack(IUsoSessionInternal *,IUsoUpdateCollectionInternal *,tagUpdateState *);
	long FilterInstallBlockedPolicyUpdates(IUsoUpdateCollectionInternal *,IUsoUpdateCollectionInternal *,IUsoUpdateCollectionInternal *);
	long InstallListToString(std::list<InstallationHandler::UsoInstallList,std::allocator<InstallationHandler::UsoInstallList> > const &,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
	long InstallUpdatesWithActionList(IUsoSessionInternal *,unsigned short const *);
	long IsBlockedByBatteryLevel(IUsoSessionInternal *,IUsoUpdateCollectionInternal *,bool *);
	long IsBlockedByPolicy(IUsoSessionInternal *,IUsoUpdateCollectionInternal *,bool,bool *,IUsoUpdateCollectionInternal *);
	long IsInstallBlocked(IUsoSessionInternal *,IUsoUpdateCollectionInternal *,bool,bool,bool *,IUsoUpdateCollectionInternal *);
	long MarkInstallerFailure(IUsoSessionInternal *,InstallationHandler::UsoInstallList const &,long);
	long MarkUpdatesAsDeferred(IUsoSessionInternal *,IUsoUpdateCollectionInternal *,long);
	long RecordUpdateInstallErrCount(IUsoSessionInternal *,IUsoUpdateInternal *);
	long ReportToOmaDmServerIfNeeded(long);
	long RunInstallIfAllowed(IUsoSessionInternal *,long *,tagUpdateState *);
	long RunOtcInstall(IUsoSessionInternal *,tagUpdateState *);
	long RunPostInstall(IUsoSessionInternal *,tagUpdateState *);
	long ShouldSendOmaDmReport(long,int *);
	long StoreInstallStartTime(IUsoSessionInternal *,IUsoUpdateCollectionInternal *);
	long StoreUpdateInstallSize(IUsoSessionInternal *);
	long UpdateInstallProgress(IUsoSessionInternal *,IUsoUpdateInstallationJob *,unsigned long,unsigned long,UpdateHandlerState &);
	long UpdateInstallResultForFullServicingStack(IUsoSessionInternal *,IUsoUpdateCollectionInternal *,IUsoInstallationResult *);
	long UpdateInstallResultForLiteServicingStack(IUsoSessionInternal *,IUsoUpdateCollectionInternal *,IUsoInstallationResult *);
	long WaitForInstalls(IUsoSessionInternal *,IUsoUpdateInstallationJob *,InstallationHandler::UsoInstallList const &,unsigned long,unsigned long,UpdateHandlerState &);
	static UpdateStateInfo const * const sc_rgusiAvailableStates;
	static bool IsDeferredInstallDisabled();
	static long ProjectUpdateAgentInstallLogsToLogDirectory(unsigned short const *);
	static long RestartService(unsigned short const * const);
	static long StoreUpdateSessionType(_GUID const *);
	static void PopulatePreUpdateValue();
	static void UploadImgUpdTelemetry();
	virtual long GetUpdateStateInfoArrayAtIndex(unsigned long,UpdateStateInfo *);
	virtual unsigned long GetUpdateStateInfoArrayCount();
	void LogInstallationResults(IUsoUpdateCollectionInternal *,IUsoSessionInternal *);
protected:
	virtual void LogAndClearScreenOnStudyEvent();
public:
	long InstallUpdates(IUsoSessionInternal *,InstallationHandler::UsoInstallList const &,unsigned long,unsigned long,UpdateHandlerState &);
	static bool PolicyRequiresInstallNotification(IUsoSessionInternal *);
	static long GetDriverInstallDeferralReasons(IUsoSessionInternal *,unsigned long,DeferReasonData &);
	virtual long Completed();
	virtual long ProgressChanged();
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual void RunState(IUsoSessionInternal *,tagUpdateState,long *,tagUpdateState *);
};

struct InstallationHandlerTrace
{
	void TraceOnInstallationResult(tagUpdateStatusInfo,IUsoUpdateInternal *);
};

class IuProgressListener
{
	void ProgressCallback(IUProgressData const &);
public:
	IuProgressListener();
	long Initialize(IUsoSessionInternal *);
	~IuProgressListener();
};

namespace Microsoft
{
	namespace WRL
	{
		struct ComPtr<Windows::Data::Json::IJsonObject>
		{
			~ComPtr<Windows::Data::Json::IJsonObject>();
		};

		struct ComPtr<Windows::Data::Json::IJsonObjectStatics>
		{
			~ComPtr<Windows::Data::Json::IJsonObjectStatics>();
		};

		struct ComPtr<Windows::Data::Json::IJsonValue>
		{
			~ComPtr<Windows::Data::Json::IJsonValue>();
		};

		struct ComPtr<Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,Windows::Data::Json::IJsonValue *> *> >
		{
			~ComPtr<Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,Windows::Data::Json::IJsonValue *> *> >();
		};

		struct ComPtr<Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,Windows::Data::Json::IJsonValue *> *> >
		{
			~ComPtr<Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,Windows::Data::Json::IJsonValue *> *> >();
		};

		struct ComPtr<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,Windows::Data::Json::IJsonValue *> >
		{
			~ComPtr<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,Windows::Data::Json::IJsonValue *> >();
		};

		struct ComPtr<Windows::Internal::Flighting::IClientAttributes>
		{
			~ComPtr<Windows::Internal::Flighting::IClientAttributes>();
		};

		struct ComPtr<Windows::Internal::Flighting::ICommonTargetingAttributesFactory>
		{
			~ComPtr<Windows::Internal::Flighting::ICommonTargetingAttributesFactory>();
		};

		struct ComPtr<Windows::Internal::Flighting::OneSettings::IOneSettingsPayload>
		{
			~ComPtr<Windows::Internal::Flighting::OneSettings::IOneSettingsPayload>();
		};

		struct ComPtr<Windows::Internal::Flighting::OneSettings::IOneSettingsPayloadStatics>
		{
			~ComPtr<Windows::Internal::Flighting::OneSettings::IOneSettingsPayloadStatics>();
		};

		namespace Details
		{
			struct ImplementsHelper<RuntimeClassFlags<2>,1,ImplementsMarker<FtmBase> >
			{
				ImplementsHelper<RuntimeClassFlags<2>,1,ImplementsMarker<FtmBase> >();
			};

			struct ModuleBase
			{
				static ModuleBase * module_;
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ABI::Windows::Foundation::IAsyncOperationCompletedHandler<bool>,FtmBase>
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

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::PredictionUnit::BinaryClassificationResult>,FtmBase>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			void RaiseException(long,unsigned long);
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

		namespace Wrappers
		{
			struct HString
			{
				~HString();
			};

			struct HStringReference
			{
				HStringReference<unsigned short const *>(unsigned short const * const &,Details::Dummy);
				~HStringReference();
			};

		};

	};

};

class ModelUpdater
{
	static long AcknowledgePayload(unsigned short const *);
	static long ClearDirectory();
	static long GetMLModelPayload(Windows::Internal::Flighting::OneSettings::IOneSettingsPayload * *);
	static long ProcessModelUpdate(unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,bool *);
	static long RegisterSignals(wil::com_ptr_t<Windows::Data::Json::IJsonObject,wil::err_exception_policy>,unsigned short const *,unsigned short const *,unsigned short const *,bool);
	static long RegisterSignalsAfterModelDownload(unsigned short const *,unsigned short const *);
	static long StartDownload(unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,_GUID *);
	static long UpdateModelState(unsigned short const *,bool);
	static long VerifyFileDownloadState(unsigned short const *,unsigned short const *,bool *);
	static unsigned short const * const sc_modelCabKey;
	static unsigned short const * const sc_modelFileNameKey;
	static unsigned short const * const sc_modelIdKey;
	static unsigned short const * const sc_modelLocalFilePath;
	static unsigned short const * const sc_modelPayloadAppId;
	static unsigned short const * const sc_modelReplacedKeyName;
	static unsigned short const * const sc_modelSettingsObjectName;
	static unsigned short const * const sc_modelUrlKey;
	static unsigned short const * const sc_signalCollectIdKey;
	static unsigned short const * const sc_signalsKey;
public:
	static long HandleModelUpdates(unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,bool);
	static long StartModelUpdates();
	static long VerifyModelUpdateState(unsigned short const *,bool *);
};

namespace OOBE
{
	namespace CompleteTime
	{
		namespace details
		{
			long GetOOBECompleteKey(HKEY__ * *);
		};

	};

};

class PauseUpdatesUtility
{
	static unsigned short const * const msc_pauseFeatureUpdatesEndTime;
	static unsigned short const * const msc_pauseFeatureUpdatesStartTime;
	static unsigned short const * const msc_pauseQualityUpdatesEndTime;
	static unsigned short const * const msc_pauseQualityUpdatesStartTime;
	static unsigned short const * const msc_pauseUpdatesExpiryTime;
public:
	static bool AreUpdatesPaused();
	static long GetPauseUpdatesExpiryTimeRegValue(_FILETIME *);
	static long GetPauseUpdatesStartTimeRegValue(_FILETIME *);
	static long RemovePauseUpdatesRegValues();
};

class PersistList
{
	long ConnectObjectToList(PersistObject *);
	long FlushListOrder();
	long InternalAddTail(PersistObject *,int);
	long LoadList(IPersistStore *);
	long MakeRoom();
	static long DeleteObjectMemberWrapper(void *,PersistObject *,PersistObject::PERSIST_OBJECT_MEMBER_ID);
	static long FlushObjectMemberWrapper(void *,PersistObject *,PersistObject::PERSIST_OBJECT_MEMBER_ID);
public:
	PersistList();
	long Disconnect(PersistObject *);
	long GetObjectAtIndex(unsigned long,PersistObject * *);
	long Initialize(IPersistStore *);
	virtual ~PersistList();
};

class PersistObject
{
	long MakeRoom(unsigned long);
public:
	PersistObject();
	long Clear(PersistObject::PERSIST_OBJECT_MEMBER_ID);
	long CopyData(PersistObject *);
	long Set(PersistObject::PERSIST_OBJECT_MEMBER_ID,unsigned char * const,unsigned long);
	long Set(PersistObject::PERSIST_OBJECT_MEMBER_ID,unsigned long);
	long Set(PersistObject::PERSIST_OBJECT_MEMBER_ID,unsigned short const *);
	virtual ~PersistObject();
};

class PersistXmlStore
{
	long CreateItemFromElement(PersistObject *);
	long FindEntry(unsigned short const *,unsigned long *);
	long GetAttributeAsDword(unsigned short const *,unsigned long *);
	long InitializePersistXml();
	long PersistAll();
	long ReadXml();
	long WriteItem(PersistObject *);
	long WriteXmlRootElement(unsigned long);
public:
	static long CreatePersistXmlStore(unsigned short const *,IPersistStore * *);
	virtual int IsInitialized();
	virtual long DeleteObject(PersistObject *);
	virtual long DeleteObjectMember(PersistObject *,PersistObject::PERSIST_OBJECT_MEMBER_ID);
	virtual long FlushObject(PersistObject *);
	virtual long FlushObjectMember(PersistObject *,PersistObject::PERSIST_OBJECT_MEMBER_ID);
	virtual long GetAllObjects(PersistObject * *,unsigned long *);
	virtual long GetListLength(unsigned long *);
	virtual long GetListOrder(unsigned short * *,unsigned long *);
	virtual long SetListOrder(unsigned short * *,unsigned long);
};

struct PolicyHelpers
{
	static long GetEnterpriseCachedPolicy(unsigned long,tagVARIANT *,unsigned long *,unsigned long *);
};

class PowerStateManager
{
	long CreatePowerRequest(unsigned short *);
	long ReleasePowerRequest();
	static int s_pdcCount;
	static long CreatePDCTask();
	static long ReleasePDCTask();
	static std::map<unsigned long,std::weak_ptr<PowerStateManager>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const ,std::weak_ptr<PowerStateManager> > > > s_powerStateManagers;
	static std::shared_ptr<PowerStateManager> FindInstance(unsigned long);
	static unsigned long s_powerStateInstanceId;
	static void * s_pdcHandle;
	static wil::critical_section s_powerStateManagersLock;
	static wil::critical_section s_requestLock;
public:
	long AllowSystemSleep(PreventSleepState);
	long PreventSystemSleep(unsigned short *,int,bool,unsigned long,unsigned long,tagUpdateState,bool);
	static long CreateInstance(std::shared_ptr<PowerStateManager> &);
	~PowerStateManager();
};

struct PresenceUtil
{
	static int IsUserLoggedIn();
	static int IsUserSessionTypeRemoteAppOrMediaCenterExt(unsigned long);
	static int IsUserSessionUnlocked(unsigned long);
	static long GetMostPreferredLoggedOnSessionToken(void * *);
	static long IsPhoneCallOngoing(bool *);
	static long IsUserPresent(bool *);
	static long QueryPowerSetting(_GUID const *,void *,unsigned long);
};

class RebootHelper
{
	static long RebootWithFlags(unsigned long,unsigned long);
protected:
	static long ShellReboot();
public:
	static long AdjustProcessPrivilege(unsigned long,bool);
	static long GetShutdownFlyoutOptions(unsigned long &);
	static long RebootSystem();
	static long SetShutdownFlyoutOptions(unsigned long);
};

class RebootTimeUtility
{
	static unsigned short const * const c_szFlightCommitted;
	static unsigned short const * const c_szFlightPendingCommit;
	static unsigned short const * const c_szFlightRebootTime;
	static unsigned short const * const c_szUpdateRebootTime;
public:
	static bool IsFlightCommitted();
	static bool IsRebootPending();
	static int IsFlightPendingCommit();
	static long DeleteFirstOccurenceReadyToReboot();
	static long DeleteLastRebootMarkedTime(MarkedTimeType,_TlgProvider_t const * const);
	static long GetLastRebootMarkedTime(MarkedTimeType,_TlgProvider_t const * const,_FILETIME *);
	static long SetFlightCommitted(bool);
	static long SetLastRebootMarkedTime(MarkedTimeType,_TlgProvider_t const * const);
	static long UpdateLastMarkedTimesPostReboot(_TlgProvider_t const * const);
};

class RegistryManager
{
	static long CreateKeyInternal(HKEY__ * const,unsigned short const *,unsigned short const *,unsigned long,unsigned long,HKEY__ * *);
	static long DeleteChildrenInternal(HKEY__ * const,unsigned short const *,unsigned short const *);
	static long DeleteKeyInternal(HKEY__ * const,unsigned short const *,unsigned short const *);
	static long DeleteValueInternal(HKEY__ * const,unsigned short const *,unsigned short const *,unsigned short const *);
	static long GetValueInternal(HKEY__ * const,unsigned short const *,unsigned short const *,unsigned short const *,_FILETIME &);
	static long GetValueInternal(HKEY__ * const,unsigned short const *,unsigned short const *,unsigned short const *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
	static long GetValueInternal(HKEY__ * const,unsigned short const *,unsigned short const *,unsigned short const *,unsigned __int64 &);
	static long GetValueInternal(HKEY__ * const,unsigned short const *,unsigned short const *,unsigned short const *,unsigned char *,unsigned long &);
	static long GetValueInternal(HKEY__ * const,unsigned short const *,unsigned short const *,unsigned short const *,unsigned long &);
	static long GetValueInternal(HKEY__ * const,unsigned short const *,unsigned short const *,unsigned short const *,unsigned long &,unsigned char *,unsigned long &);
	static long GetValueInternal(HKEY__ * const,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short *,unsigned long &);
	static long KeyExistsInternal(HKEY__ * const,unsigned short const *,unsigned short const *,bool &);
	static long OpenKeyInternal(HKEY__ * const,unsigned short const *,unsigned short const *,unsigned long,bool,HKEY__ * *);
	static long SetValueInternal(HKEY__ * const,unsigned short const *,unsigned short const *,unsigned short const *,_FILETIME);
	static long SetValueInternal(HKEY__ * const,unsigned short const *,unsigned short const *,unsigned short const *,unsigned long,unsigned char const *,unsigned long);
	static long SetValueInternal(HKEY__ * const,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *);
	static long ValueExistsInternal(HKEY__ * const,unsigned short const *,unsigned short const *,unsigned short const *,bool &);
	static std::map<unsigned short const *,unsigned short const *,std::less<unsigned short const *>,std::allocator<std::pair<unsigned short const * const,unsigned short const *> > > CreateRedirectionMap();
	static std::map<unsigned short const *,unsigned short const *,std::less<unsigned short const *>,std::allocator<std::pair<unsigned short const * const,unsigned short const *> > > s_defaultRedirectionMap;
public:
	static long CreateHKLMKey(unsigned short const *,unsigned short const *,unsigned long,unsigned long,HKEY__ * *);
	static long DeleteHKLMChildren(unsigned short const *,unsigned short const *);
	static long DeleteHKLMKey(unsigned short const *,unsigned short const *);
	static long DeleteHKLMValue(unsigned short const *,unsigned short const *,unsigned short const *);
	static long DumpRegistryKey(_iobuf *,HKEY__ *,unsigned short const *,bool);
	static long GetHKLMValue(unsigned short const *,unsigned short const *,unsigned short const *,unsigned char *,unsigned long &);
	static long GetHKLMValue(unsigned short const *,unsigned short const *,unsigned short const *,unsigned short *,unsigned long &);
	static long GetHKLMValue<_FILETIME>(unsigned short const *,unsigned short const *,unsigned short const *,_FILETIME &);
	static long GetHKLMValue<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > >(unsigned short const *,unsigned short const *,unsigned short const *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
	static long GetHKLMValue<unsigned __int64>(unsigned short const *,unsigned short const *,unsigned short const *,unsigned __int64 &);
	static long GetHKLMValue<unsigned long>(unsigned short const *,unsigned short const *,unsigned short const *,unsigned long &);
	static long GetHKLMValueOrDefault<unsigned long>(unsigned short const *,unsigned short const *,unsigned short const *,unsigned long &,unsigned long);
	static long GetRedirectedRegistryKeyName(unsigned short const *,unsigned short const *,unsigned short *,unsigned __int64);
	static long GetSubkeyList(HKEY__ * const,unsigned short const *,unsigned short const *,std::vector<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::allocator<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > &);
	static long HKLMKeyExists(unsigned short const *,unsigned short const *,bool &);
	static long HKLMValueExists(unsigned short const *,unsigned short const *,unsigned short const *,bool &);
	static long OpenHKLMKey(unsigned short const *,unsigned short const *,unsigned long,bool,HKEY__ * *);
	static long SetHKLMValue(unsigned short const *,unsigned short const *,unsigned short const *,unsigned char const *,unsigned long);
	static long SetHKLMValue<_FILETIME>(unsigned short const *,unsigned short const *,unsigned short const *,_FILETIME);
	static long SetHKLMValue<unsigned __int64>(unsigned short const *,unsigned short const *,unsigned short const *,unsigned __int64);
	static long SetHKLMValue<unsigned long>(unsigned short const *,unsigned short const *,unsigned short const *,unsigned long);
	static long SetHKLMValue<unsigned short *>(unsigned short const *,unsigned short const *,unsigned short const *,unsigned short * const);
	static long SetHKLMValue<unsigned short const *>(unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const * const);
};

struct SH<void *,SH_HANDLE>
{
	void Reset();
};

struct SP<unsigned char,SP_HLOCAL<unsigned char> >
{
	void Reset();
};

struct SP<unsigned char,SP_MEM<unsigned char> >
{
	void Reset();
};

struct SP<unsigned long,SP_MEM<unsigned long> >
{
	void Reset();
};

struct SP<unsigned short *,SP_MEM<unsigned short *> >
{
	void Reset();
};

struct SP<unsigned short,SP_MEM<unsigned short> >
{
	void Reset();
};

struct SecurityHelper
{
	static bool IsAdminToken(void *);
	static bool IsLocalSystem();
	static long CreateSid(void * *,unsigned char,unsigned long,unsigned long);
	static long IsSidInToken(void *,void *,int *);
};

struct SignalHelper
{
	static long EvaluateSignal(HSTRING__ *,HSTRING__ *,HSTRING__ *,unsigned short,bool,bool *);
	static long RegisterSignal(HSTRING__ *,HSTRING__ *,HSTRING__ *,HSTRING__ *,HSTRING__ *);
	static long UnregisterAll(HSTRING__ *);
};

class StorageService
{
protected:
	static long CreateStorageService(StorageService * *,void (*const)(wchar_t const * const),unsigned long,STORE_ID const * const,bool);
	virtual long Initialize(unsigned long,STORE_ID const * const,bool);
public:
	virtual VolumeTrackerList * GetVolumeList();
	virtual ~StorageService();
};

namespace TLV
{
	void Base64Encode<129>(unsigned char const *,unsigned __int64,char (&)[129]);
};

class TaskManager
{
	static long AddLogonTrigger(ITaskDefinition *,unsigned short const *);
	static long CreateExecAction(ITaskDefinition *,IExecAction * *);
	static long CreateMonthlyDOWTaskHelper(unsigned short * const,_SYSTEMTIME,unsigned short * const,unsigned short * const,short,bool,unsigned long,unsigned long,short,short,short,short,short,short,short,short,_TlgProvider_t const * const,unsigned short * const);
	static long CreateMonthlyDOWTrigger(ITaskDefinition *,IMonthlyDOWTrigger * *);
	static long CreateTimeTaskHelper(unsigned short * const,_SYSTEMTIME,unsigned short * const,unsigned short * const,short,bool,unsigned long,unsigned long,short,short,_TlgProvider_t const * const,short);
	static long CreateTimeTrigger(ITaskDefinition *,ITimeTrigger * *);
	static long CreateWNFTrigger(ITriggerCollection *,unsigned char const *,unsigned long,unsigned char const *,unsigned long);
	static long DoesTaskExist(unsigned short const *,bool *);
	static long EnsureTaskFolderExists(ITaskService *,unsigned short const *);
	static long FindWnfTrigger(ITriggerCollection *,_WNF_STATE_NAME,std::vector<long,std::allocator<long> > &);
	static long GetTaskService(ITaskService * *);
	static long GetTaskXml(unsigned short const *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
	static long LogTaskModification(IRegisteredTask *,TaskModificationType,_TlgProvider_t const * const);
	static long RegisterTask(ITaskService *,ITaskDefinition *,unsigned short * const,_TlgProvider_t const * const);
	static long ReregisterTask(ITaskDefinition *,unsigned short * const,_TlgProvider_t const * const);
	static long SetMonthlyDOWTaskTrigger(ITaskDefinition *,_SYSTEMTIME,short,short,short,unsigned long,unsigned long,unsigned short *);
	static long SetMonthlyDOWTriggerSchd(ITrigger *,_SYSTEMTIME,short,short,short,unsigned long,unsigned long,unsigned short *);
	static long SetStartBoundary(ITrigger *,_SYSTEMTIME);
	static long SetTaskAction(ITaskDefinition *,unsigned short * const,unsigned short * const);
	static long SetTaskPrincipal(ITaskDefinition *);
	static long SetTaskSettings(ITaskDefinition *,short,short,bool,short,short,short,short,short);
	static long SetTaskTrigger(ITaskDefinition *,_SYSTEMTIME,unsigned long,unsigned long,unsigned short * const);
	static long SetTriggerRepetition(ITrigger *,unsigned long,unsigned long);
	static long UpdateTaskInterval(ITrigger *,unsigned long);
	static long UpdateTaskRandomDelay(ITrigger *,unsigned long);
	static long UpdateTaskTriggers(ITriggerCollection *,unsigned long);
	static unsigned char const * const c_wnfBatteryLevelFull;
	static unsigned char const * const c_wnfBatteryLevelHi;
	static unsigned char const * const c_wnfBatteryLevelMedium;
	static unsigned char const * const c_wnfBatteryLevelVeryHi;
	static unsigned char const * const c_wnfBatteryStrength;
	static unsigned char const * const c_wnfNetworkAvailability;
	static unsigned char const * const c_wnfNetworkAvailabilityData;
	static unsigned char const * const c_wnfNonCellNetAvailability;
	static unsigned char const * const c_wnfNonCellNetAvailableData;
	static unsigned char const * const c_wnfPowerSource;
	static unsigned char const * const c_wnfPowerSourceData;
	static unsigned short const * const c_szInteractiveId;
	static unsigned short const * const c_szLogonDelay;
	static unsigned short const * const c_szMusNotificationExePath;
	static unsigned short const * const c_szRootPath;
	static unsigned short const * const c_szSecDis;
	static unsigned short const * const c_szSystemId;
public:
	static long AddOneTimeTriggerToTask(unsigned short * const,_SYSTEMTIME,unsigned long,unsigned long,_TlgProvider_t const * const,unsigned short * const);
	static long CreateACPowerTask(unsigned short const *,unsigned short const *,_TlgProvider_t const * const);
	static long CreateBatteryThresholdTask(_TlgProvider_t const * const);
	static long CreateDriverInstallTask(unsigned long const &,_TlgProvider_t const * const);
	static long CreateMaintenanceTask(unsigned short * const,unsigned short * const,unsigned short * const,short,short,short,_TlgProvider_t const * const);
	static long CreatePolicyInstallTask(_TlgProvider_t const * const);
	static long CreateScanRetryTask(unsigned long,_TlgProvider_t const * const);
	static long CreateSingleExecTimeTask(unsigned short * const,_SYSTEMTIME,unsigned short * const,unsigned short * const,short,bool,short,_TlgProvider_t const * const,short,short);
	static long CreateStaticMaintenanceTask(_TlgProvider_t const * const);
	static long CreateTaskWithTimeTrigger(unsigned short *,_SYSTEMTIME const &,unsigned long,unsigned long,_TlgProvider_t const * const);
	static long CreateTimeBasedScanInstallTask(_SYSTEMTIME,_TlgProvider_t const * const,unsigned short * const);
	static long DeleteScanRetryTask(_TlgProvider_t const * const);
	static long DeleteUWFTask(_TlgProvider_t const * const);
	static long DoesScanRetryTaskExist(bool *);
	static long EnableTask(unsigned short const *,short,_TlgProvider_t const * const);
	static long GetMusNotificationExePath(unsigned short *,unsigned long);
	static long GetRegisteredTask(unsigned short * const,IRegisteredTask * *);
	static long ProtectTask(unsigned short const *);
	static long RemoveTask(unsigned short const *,_TlgProvider_t const * const);
	static long RemoveTimeTriggers(unsigned short *,_TlgProvider_t const * const);
	static long StartDiskCleanupTask();
	static long UpdateMonthlyDOWTriggerSchd(unsigned short * const,_SYSTEMTIME,short,short,short,unsigned long,unsigned long,_TlgProvider_t const * const);
	static long UpdateTask(unsigned short * const,_TlgProvider_t const * const,unsigned long,unsigned long,unsigned long,unsigned long,_SYSTEMTIME);
};

class TelMergeWrapper
{
	static TelMergeWrapper s_tmwSingleton;
};

class TelemetryManager
{
	long SetupLogFiles(unsigned short const *,unsigned short *,unsigned __int64 &);
	static unsigned long const sc_defaultMaxTraceFileSizeInKB;
public:
	TelemetryManager();
	long CleanupOldFiles(unsigned short const *);
	long EnableTracing(unsigned __int64);
	long FlushTraceW();
	long StartTracing(_GUID,unsigned short const *,unsigned short const *,unsigned __int64,bool,unsigned long);
	long StopTracing();
	~TelemetryManager();
};

class TestHookHelper
{
	static char const * const c_testModeFunc;
	static unsigned short const * const c_coreWorkerDebugKeyName;
	static unsigned short const * const c_expeditedModeOverrideKeyName;
	static unsigned short const * const c_selfHostBinaryPath;
	static unsigned short const * const c_testOfflineScanCabKeyName;
public:
	static TestLevel GetTestSettings();
	static bool CoreWorkerDebugEnabled();
	static bool ExpeditedModeOverride();
	static long GetCabServiceOverridePath(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
	static long IsServiceOverrideEnabled(bool &);
};

struct TimeHelper
{
	static _FILETIME ULongLongToFileTime(unsigned __int64);
	static _SYSTEMTIME ULongLongToSystemTime(unsigned __int64);
	static bool IsSameDate(double const &,double const &);
	static long AddDaysToFileTime(unsigned long,_FILETIME,_FILETIME *);
	static long AddDaysToSystemTime(unsigned long,_SYSTEMTIME,_SYSTEMTIME *);
	static long AddHoursToFileTime(unsigned long,_FILETIME,_FILETIME *);
	static long AddMinutesToSystemTime(unsigned long,_SYSTEMTIME,_SYSTEMTIME *);
	static long CompareSystemTime(_SYSTEMTIME const &,_SYSTEMTIME const &);
	static long ConvertLocalDateToUTC(double,_SYSTEMTIME *);
	static long GetDaysBetweenFileTimes(_FILETIME,_FILETIME,unsigned long *);
	static long GetDaysBetweenSystemTimes(_SYSTEMTIME,_SYSTEMTIME,unsigned long *);
	static long GetMillisecondsBetweenFileTimes(_FILETIME const &,_FILETIME const &,unsigned __int64 &);
	static long GetMinutesBetweenFileTimes(_FILETIME,_FILETIME,unsigned long *);
	static long GetMinutesBetweenSystemTimes(_SYSTEMTIME,_SYSTEMTIME,unsigned long *);
	static long IsPastSla(_FILETIME,unsigned long,bool &,unsigned long &);
	static long IsTargetTimeWithinBounds(_FILETIME,_FILETIME,_FILETIME,bool *);
	static long MinsSinceFileTime(_FILETIME,bool,unsigned long *);
	static long StringTimeToFileTime(unsigned short const *,_FILETIME *,bool);
	static long StringTimeToSystemTime(unsigned short const *,_SYSTEMTIME *,bool);
	static long SubtractMinutesFromSystemTime(unsigned long,_SYSTEMTIME,_SYSTEMTIME *);
	static long UnitsBetweenFileTimes(_FILETIME,_FILETIME,unsigned __int64,unsigned long *);
	static unsigned __int64 FileTimeToULongLong(_FILETIME);
	static unsigned __int64 SystemTimeToULongLong(_SYSTEMTIME);
};

class TraceLoggingCorrelationVector
{
	bool ToStringImpl(unsigned __int64,char *);
	static TraceLoggingCorrelationVector::CvVersion ValidateImpl(char const *,bool);
	unsigned __int64 IncrementImpl();
	void CreateCvFromGuid<12>(_GUID);
	void CreateCvFromGuid<16>(_GUID);
public:
	TraceLoggingCorrelationVector();
	static TraceLoggingCorrelationVector * Extend(char const *,bool);
	static TraceLoggingCorrelationVector * Set(char const *,bool);
};

class TrustHelper
{
	static long VerifyCertificateChain(_CERT_CHAIN_CONTEXT const *,unsigned long);
public:
	static long VerifyFile(unsigned short const *,bool);
};

struct UWFUtils
{
	static long DisableUWF(bool &,_TlgProvider_t const * const);
	static long EnableUWF(_TlgProvider_t const * const);
	static long GetUWFState(UWFSessionType,bool *,_TlgProvider_t const * const);
	static long IsUWFInstalled(bool &,_TlgProvider_t const * const);
	static long RestartSystem(_TlgProvider_t const * const);
	static long SetUWFState(bool,_TlgProvider_t const * const);
};

class UnpModuleHelper
{
	static unsigned short const * const campaignGuidRegValue;
public:
	static long UpdateCampaignGuid(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
};

class UpdateAgentWrapper
{
	static long CleanMetadataFolder();
public:
	UpdateAgentWrapper();
	long CommitActionList(unsigned short const *,unsigned short const *);
	long CreateActionList(unsigned short const *,unsigned short *,unsigned long);
	long Initialize();
	long InstallActionList(unsigned short const *);
	~UpdateAgentWrapper();
};

class UpdateEscalationManager
{
	void ClearCurrentSettings();
public:
	long GetVariableValue(unsigned short const *,tagVARIANT *);
	long Initialize(IUsoSessionInternal *);
	long RefreshFromSettings(IUsoSessionInternal *);
	long SetCurrentRiskLevels(IUsoSessionInternal *);
};

class UpdateHandlerBase
{
protected:
	long UpdateScreenOnStudyValues(IUsoUpdateCollectionInternal *,bool);
public:
	UpdateHandlerBase();
	bool DeadlineHasExpired(IUsoUpdateInternal *);
	bool IsOneShotUpdate(IUsoSessionInternal *);
	bool ShouldAttemptImmediateReboot(IUsoSessionInternal *,bool);
	long CalcUpdatePriority(_GUID &,std::map<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,unsigned long,std::less<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > >,std::allocator<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,unsigned long> > > &,unsigned long &);
	long CheckActivityRestrictionsDueToPolicy(IUsoSessionInternal *,bool *);
	long CheckUpdateHistoryStatusInfoAndLogEvent(IUsoSessionInternal *);
	long CheckUpdatesForStatuses(IUsoSessionInternal *,IUsoUpdateCollectionInternal *,tagUpdateStatus,bool,int *);
	long CurrentTimeIsInsideActiveHours(IUsoSessionInternal *,bool *);
	long EvaluateActivityRestrictions(IUsoSessionInternal *,unsigned short const *,bool *);
	long ExecuteRebootAfterInstall(IUsoSessionInternal *);
	long FindExistingPrioritizedUpdate(IUsoSessionInternal *,IUsoUpdateCollectionInternal *,bool,IUsoUpdateInternal * *);
	long FindUpdateWithHighestPriority(IUsoSessionInternal *,IUsoUpdateCollectionInternal *,bool,IUsoUpdateInternal * *);
	long GetBatteryLevelFromWNF(unsigned long *);
	long GetBatteryLevelThresholds(IUsoSessionInternal *,unsigned long *,unsigned long *);
	long GetPrimaryOsProduct(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
	long GetUpdateErrorMap(IUsoSessionInternal *,std::map<long,unsigned long,std::less<long>,std::allocator<std::pair<long const ,unsigned long> > > &);
	long GetUpdatePriority(IUsoSessionInternal *,IUsoUpdateInternal *,tagUsoUpdatePriority &);
	long GetUpdatePriorityMap(IUsoSessionInternal *,std::map<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,unsigned long,std::less<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > >,std::allocator<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,unsigned long> > > &);
	long IsUpdateForPrimaryOSProduct(unsigned short *,bool &);
	long LogUsoUpdateHistoryPostInstallTelemetryEvent(IUpdateHistoryEntry *,EventScenario,long,_GUID);
	long MarkUpdatesWithUpdateStatusInfo(IUsoSessionInternal *,IUsoUpdateCollectionInternal *,tagUpdateStatusInfo);
	long MarkUpdatesWithUpdateStatusInfoAndLogEvent(IUsoSessionInternal *,IUsoUpdateCollectionInternal *,tagUpdateStatusInfo);
	long SetUpWNFSubscribers(IUsoSessionInternal *);
	long SetUpdatePriority(IUsoSessionInternal *,IUsoUpdateInternal *,tagUsoUpdatePriority);
	long SetUpdatePriorityTime(IUsoSessionInternal *,IUsoUpdateInternal *,_FILETIME);
	long SetUpdateSerializedError(IUsoSessionInternal *,IUsoUpdateInternal *,long);
	long SetUpdatesWithNewUpdateStatusInfoAndLogEvent(IUsoSessionInternal *,IUsoUpdateCollectionInternal *,tagUpdateStatus,tagUpdateStatusInfo,UpdateEvent,StateDeferReason);
	long ShouldTrySerializationForUpdate(IUsoSessionInternal *,IUsoUpdateInternal *,bool &);
	static bool SessionHasUserApproval(IUsoSessionInternal *);
	static long IsScanSuccessTimeOverThreshold(IUsoSessionInternal *,bool *);
	static long SetUpdateFailedRecord(IUsoSessionInternal *,IUsoUpdateInternal *,long);
	static void StartDiskCleanupIfRequired(IUsoSessionInternal *);
	virtual long FreeStateArray(tagUpdateStateProperties *);
	virtual long GetIdleResumeState(tagUpdateState,tagUpdateState *);
	virtual long Initialize(unsigned long *,tagUpdateStateProperties * *);
	virtual long PrepForShutdown();
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Run(IUsoSessionInternal *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~UpdateHandlerBase();
	void LogDeferReasonTelemetryEvent(IUsoUpdateInternal *,IUsoSessionInternal *,DeferReasonData const &,unsigned long,char const *);
	void LogDeferredTelemetryEvent(IUsoUpdateInternal *,IUsoSessionInternal *,char const *,UpdateEvent,StateDeferReason,short,long);
	void LogProgressTelemetryEvent(IUsoUpdateInternal *,IUsoSessionInternal *,char const *,UpdateEvent,bool,tagUpdateStatusInfo,tagNetworkCostPolicy);
	void LogUpdateRebootRequiredTelemetryEvent(IUsoSessionInternal *,char const *,IUsoUpdateInternal *);
	void LogUpdatesDeferredTelemetryEvents(IUsoSessionInternal *,IUsoUpdateCollectionInternal *,UpdateEvent,StateDeferReason,short,long);
	void LogUsoUpdateStateTelemetryEvent(IUsoSessionInternal *,IUsoUpdateInternal *,UpdateEvent,EventScenario,long,_GUID);
	void LogUsoUpdateTerminatedByActiveHours(IUsoSessionInternal *,unsigned short const *);
	void SetOneShotUpdate(IUsoSessionInternal *,bool);
};

class UpdateHelper
{
	static bool CompatFailureTimeExceeded(IUsoSessionInternal *,IUsoUpdateInternal *);
	static bool HasCompatFailureTime(IUsoSessionInternal *,IUsoUpdateInternal *);
	static long GetCompatFailureTime(IUsoSessionInternal *,IUsoUpdateInternal *,_FILETIME &);
	static long SetCompatFailureTime(IUsoSessionInternal *,IUsoUpdateInternal *);
	static unsigned long GetFallbackFailureCount(IUsoSessionInternal *,IUsoUpdateInternal *);
public:
	static UpdateScenarioType GetScenarioType(IUsoSessionInternal *);
	static UpdateScenarioType GetScenarioTypeFromSessionGuid(_GUID);
	static bool AreUpdatesEqual(IUsoUpdateInternal *,IUsoUpdateInternal *);
	static bool IsDeserializationFailureSimulated();
	static bool IsDownloadNeeded(tagUpdateStatus);
	static bool IsFlightUpdate(IUsoUpdateInternal *);
	static bool IsInstallNeeded(tagUpdateStatus);
	static bool IsOobeUpdate(IUsoSessionInternal *,IUsoUpdateInternal *);
	static bool IsUUPFallBackError(IUsoSessionInternal *,long);
	static bool IsUUPFallBackExpired(IUsoSessionInternal *,unsigned long);
	static bool IsUUPFallBackSet();
	static bool IsWaaSUpToDateAssessmentThresholdExceeded(IUsoSessionInternal *,unsigned long);
	static int IsRebootRequired(IUsoUpdateInternal *);
	static long AreEntriesEqual(IUsoUpdateInternal *,IUpdateHistoryEntry *,bool *);
	static long BuildUpdateEntry(IUsoUpdateInternal *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
	static long BuildUpdateEntryWithResult(IUsoUpdateInternal *,tagUpdateStatusInfo const &,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
	static long BuildUpdateIdList(IUsoUpdateCollectionInternal *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
	static long BuildUpdateList(IUsoUpdateCollectionInternal *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
	static long CheckIfUUPFallBackNeeded(IUsoSessionInternal *,unsigned long,unsigned long,bool *);
	static long CollectionContainsFeatureUpdate(IUsoUpdateCollectionInternal *,bool &);
	static long GetAllUpdateCorrelationVectors(IUsoSessionInternal *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
	static long GetUpdateClassification(IUsoSessionInternal *,IUsoUpdateInternal *,_GUID *);
	static long GetUpdateIdentifier(IUpdateHistoryEntry *,tagUsoUpdateIdentifier *);
	static long GetUpdateIdentifier(IUsoUpdateInternal *,tagUsoUpdateIdentifier *);
	static long IncrementFallbackFailureCount(IUsoSessionInternal *,IUsoUpdateInternal *,long);
	static long IsUpdateSought(IUsoUpdateInternal *,bool &);
	static long IsWorkRequired(IUsoSessionInternal *,bool &);
	static long SetUUPFallBack(IUsoSessionInternal *);
	static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > GetFlightID(IUsoUpdateInternal *);
	static unsigned short const * const UUPFallBackRegistryKey;
	static unsigned short const * const sc_oobeUpdate;
};

struct UpdateInfo
{
	static long Copy(UpdateInfo &,UpdateInfo const &);
	~UpdateInfo();
};

class UpdateNode
{
	long ExtractExtendedProperties(XmlReader *);
	long ExtractUpdateAttributes(XmlReader *);
	long WriteExtendedProperties(XmlWriter *);
	long WriteUpdateAttributes(XmlWriter *);
public:
	long ExtractNode(XmlReader *);
	long GetNode(UpdateInfo *);
	long SetNode(UpdateInfo const &);
};

struct UpdatePolicyHelper
{
	long GetActiveHoursPolicyValue(tagUpdatePolicy,unsigned long &,bool &);
	long GetEnterprisePolicy(tagEnterprisePolicy,tagVARIANT &,bool &);
	long GetUpdatePolicy(tagUpdatePolicy,tagVARIANT &,bool &);
	static long GetUpdatePolicyHelper(std::unique_ptr<UpdatePolicyHelper,std::default_delete<UpdatePolicyHelper> > &);
};

struct UpdatePolicyReader
{
	static long ReadPolicy(tagUpdatePolicy,tagUpdatePolicyValue_V1 * *);
	static long ReleaseUpdatePolicyValue(tagUpdatePolicyValue_V1 * *);
};

struct UpdateReserveManagerLoader
{
	long LoadReserveManagerDll(wchar_t const * const);
	virtual HINSTANCE__ * GetReserveManagerHandle();
	virtual IUpdateReserveManager * GetReserveManager();
	virtual void Release();
};

class UpdateSessionManager
{
	long CleanupSessionMap();
	long CreateUpdateSession(_GUID const &,std::shared_ptr<UpdateSessionManager> &);
	long Initialize(std::shared_ptr<UpdateSessionManager> &);
	long LoadPersistedSessions(std::shared_ptr<UpdateSessionManager> &);
	long ScheduleLogCleanup();
	long ScheduleSessionMapCleanup();
	static long UpdatePersistSessionKey(_GUID,bool);
	static std::weak_ptr<UpdateSessionManager> s_updateSessionManager;
	static wil::critical_section s_sessionManagerLock;
public:
	long GetCurrentActiveUpdateSessions(std::vector<wil::com_ptr_t<IUsoSessionInternal,wil::err_returncode_policy>,std::allocator<wil::com_ptr_t<IUsoSessionInternal,wil::err_returncode_policy> > > &);
	long GetUpdateSession(_GUID const &,IUsoSessionInternal * *);
	long RegisterActiveSession(_GUID);
	long UnregisterActiveSession(_GUID);
	static long GetUpdateSessionManager(std::shared_ptr<UpdateSessionManager> &);
	virtual ~UpdateSessionManager();
};

class UpdateStateEngine
{
	bool HasStateProperty(tagUpdateState,unsigned long);
	long LoadHandlers();
	long RegisterHandler(IUpdateHandler *);
};

class UpdateStore
{
	long AddSessionVariable(tagSessionVariablePersistType,std::shared_ptr<VariantNode>);
	long AddUpdate(std::shared_ptr<UpdateNode>);
	long ExtractSessionVariablesTable(XmlReader *);
	long ExtractUpdateStore(unsigned short const *);
	long ExtractUpdatesTable(XmlReader *);
	long GenerateUpdateStoreFilePath(tagUSOFilePath,unsigned short *,unsigned __int64);
	long HasValidHash(unsigned short const *);
	long LoadUpdateStore();
	long ReadFromFile(unsigned short const *,std::basic_string<char,std::char_traits<char>,std::allocator<char> > *);
	long RestoreDefaultStore();
	long WriteLastSessionVariablesTable(XmlWriter *);
	long WriteSessionVariablesTable(XmlWriter *);
	long WriteUpdateStore(unsigned short const *);
	long WriteUpdatesTable(XmlWriter *);
	static long EnsureStoreDirCreated();
	void UnloadSessionVariablesTable(tagSessionVariablePersistType);
	void UnloadUpdatesTable();
public:
	long AddUpdateInfo(UpdateInfo const &);
	long DeleteAllUpdateInfo();
	long DeleteSessionVariable(unsigned short const *,tagSessionVariablePersistType);
	long DeleteUpdateInfo(UpdateIdentity const &);
	long FlushStore();
	long GetSessionVariable(unsigned short const *,tagSessionVariablePersistType,tagVARIANT *);
	long GetUpdateExProperty(UpdateIdentity const &,unsigned short const *,tagVARIANT *);
	long Initialize(_GUID);
	long RotateTransientSessionVariables();
	long SetSessionVariable(unsigned short const *,tagSessionVariablePersistType,tagVARIANT);
	long SetUpdateExProperty(UpdateIdentity const &,unsigned short const *,tagVARIANT);
};

struct UptimeHelper
{
	static long GetOOBECompleteTime(bool &,_SYSTEMTIME &);
	static long GetUptimeMinutes(unsigned long &);
	static long GetUptimeMinutes(unsigned long,unsigned long &);
};

class UsoConfiguration
{
	static unsigned long GetConfiguration(unsigned short const *,unsigned long,unsigned long,unsigned long);
	static unsigned short const * const c_szDataMigrationValueName;
	static unsigned short const * const c_szEnableEngagedReboot;
	static unsigned short const * const c_szIgnoreActiveUserBeforeRestart;
	static unsigned short const * const c_szMuServiceDefault;
	static unsigned short const * const c_szPPIUpdateValueName;
	static unsigned short const * const c_szRegValueEnableUUPScan;
	static unsigned short const * const c_szRequireACPowerCheckBeforeDownload;
	static unsigned short const * const c_szRequireACPowerCheckBeforeRestart;
	static unsigned short const * const c_szRequireACPowerCheckBeforeStaging;
	static unsigned short const * const c_szScanTypeValueName;
	static unsigned short const * const c_szServicingStackValueName;
	static unsigned short const * const c_szUseOneCoreOOBENotificationValueName;
public:
	static bool IsConfigurationSet(UsoConfigurations);
	static bool IsUUPRegKeySet();
};

struct UsoCoreWorker
{
	long FinalConstruct();
	static long UpdateRegistry(int);
	virtual long GetCurrentActiveUpdateSessions(IUsoSessionCollection * *);
	virtual long GetUpdateSession(_GUID,_GUID const &,void * *);
	virtual long HandlePreShutdown();
	~UsoCoreWorker();
};

struct UsoDownloadProgress
{
	virtual long GetCurrentUpdateSubPhase(tagDownloadSubPhase *,long *);
	virtual long GetDownloadStatus(DownloadStatusEx *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_PercentComplete(long *);
	virtual long get_TotalBytesToDownload(tagDEC *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct UsoDownloadResult
{
	static long CreateInstance(IDownloadResult *,IUsoDownloadResult * *);
	virtual long GetUpdateResult(long,IUsoUpdateDownloadResult * *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

namespace UsoFileStream
{
	class FileStream
	{
		FileStream(void *,int);
		~FileStream();
	public:
		static long CreateStreamOnFile(unsigned short const *,IStream * *,int);
		virtual long Clone(IStream * *);
		virtual long Commit(unsigned long);
		virtual long CopyTo(IStream *,_ULARGE_INTEGER,_ULARGE_INTEGER *,_ULARGE_INTEGER *);
		virtual long EndHash(unsigned short * *);
		virtual long FreeHash(unsigned short *);
		virtual long InitializeHash(unsigned short const *);
		virtual long LockRegion(_ULARGE_INTEGER,_ULARGE_INTEGER,unsigned long);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual long Read(void *,unsigned long,unsigned long *);
		virtual long Revert();
		virtual long Seek(_LARGE_INTEGER,unsigned long,_ULARGE_INTEGER *);
		virtual long SetSize(_ULARGE_INTEGER);
		virtual long StartHash();
		virtual long Stat(tagSTATSTG *,unsigned long);
		virtual long UnlockRegion(_ULARGE_INTEGER,_ULARGE_INTEGER,unsigned long);
		virtual long Write(void const *,unsigned long,unsigned long *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
	};

};

struct UsoInstallationResult
{
	static long CreateInstance(IInstallationResult *,IUsoInstallationResult * *);
	virtual long GetUpdateResult(long,IUsoUpdateInstallationResult * *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class UsoMedic
{
protected:
	static bool ReadBooleanSessionVariable(IUsoSessionCommon *,unsigned short const *);
	static unsigned __int64 ReadULongLongSessionVariable(IUsoSessionCommon *,unsigned short const *);
	static unsigned long ReadDWordSessionVariable(IUsoSessionCommon *,unsigned short const *);
	static unsigned long ReadULongSessionVariable(IUsoSessionCommon *,unsigned short const *);
public:
	static long SetMedicDeferred(IUsoSessionInternal *,UsoMedicState,unsigned int);
	static long SetMedicFailure(IUsoSessionInternal *,UsoMedicState,long);
	static long SetMedicSuccess(IUsoSessionInternal *,UsoMedicState);
	static long SetMedicSystemState(IUsoSessionInternal *,UsoMedicState);
	static void ReadAndUploadStoreDiagnostics(IUsoSessionCommon *);
};

class UsoScheduler
{
	long GetLastRunTime(_FILETIME &,bool &);
public:
	UsoScheduler();
	long ResetTimer(bool);
	long RunCallback();
	long SaveRunTime();
	~UsoScheduler();
};

class UsoSession
{
	struct UpdateStateExt
	{
		UpdateStateExt & operator=(UpdateStateExt const &);
		~UpdateStateExt();
	};

	long ClearUpdateReserve(IUpdateReserveManager::ScenarioId);
	long IsPolicyBlocked(unsigned long,bool,bool &);
	long IsUpdateFromService(UpdateIdentity const &,_GUID,bool &);
	static long CalculateMaxRepetitionInterval(_SYSTEMTIME,_SYSTEMTIME,unsigned long,unsigned long &);
	static long LogStartScanCaller(unsigned short const *);
protected:
	bool IsRebootOutsideActiveHours();
	bool IsRebootTriggeredByTask();
	long AcquireMutexForDUICRegistry();
	long AddUpdateDownloadSize(IUsoUpdateInternal *,unsigned __int64 *,unsigned __int64 *);
	long AddUpdateToStore(IUsoUpdateInternal *,_GUID,bool &);
	long AreUpdatesEqual(IUsoUpdateInternal *,IUsoUpdateInternal *,int *);
	long CachePolicyValue(tagEnterprisePolicy,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
	long CachePolicyValue(tagUpdatePolicy,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
	long CheckForPausedByPolicy(bool &);
	long CombineFeatureIdsToJsonString(std::vector<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::allocator<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > const &,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
	long CommitAndRebootForLiteServicingStack();
	long CommitUpdate(IUsoUpdateCollectionInternal *);
	long CreateUsoUpdateCollection(IUsoUpdateCollectionInternal *,IUsoUpdateCollection * *);
	long CreateWuaUpdateSession();
	long GetApplicableUpdatesInternal(IUsoUpdateCollectionInternal * *,bool);
	long GetRebootResultForFullServicingStack(long *);
	long GetSessionVariable(unsigned short const *,tagSessionVariablePersistType,bool &);
	long GetSessionVariable(unsigned short const *,tagSessionVariablePersistType,bool,bool &);
	long GetSessionVariable(unsigned short const *,tagSessionVariablePersistType,unsigned long &);
	long GetSessionVariable(unsigned short const *,tagSessionVariablePersistType,unsigned long,unsigned long &);
	long GetUpdatePriority(IUsoUpdateInternal *,tagUsoUpdatePriority &);
	long HandleScheduledScanTaskAction();
	long HandleSystemSleep(UsoSession::UpdateStateExt const &);
	long Initialize(_GUID const &,std::shared_ptr<UpdateSessionManager> &);
	long InitializeActiveSessionVariables();
	long InvokeWuApiOnNewThread(UsoSession::UsoSessionFunc);
	long LoadPersistedUpdate(UpdateInfo const &);
	long LogInitiatingRebootEvent();
	long NotifyTrayIcon(tagUpToDateStatus);
	long PreventSystemSleep(bool,bool,tagUpdateState);
	long RefreshUniversalSchedule(bool,UsoSession::UpdateStateExt const &,UsoSession::UpdateStateExt &);
	long RegisterServiceWithWU(_GUID,bool);
	long RemoveUpdateFromStoreForService(IUsoUpdateInternal *,_GUID,InapplicableReason);
	long ResumeBlockedUpdates();
	long RevertPendingUpdates();
	long SetDeserializationFailure(UpdateInfo const &);
	long SetNextState(UsoSession::UpdateStateExt const &);
	long SetSessionVariable(unsigned short const *,tagSessionVariablePersistType,_FILETIME);
	long SetSessionVariable(unsigned short const *,tagSessionVariablePersistType,bool);
	long SetSettingsVisibility(bool);
	long SetUpCombinedScanInstallTask();
	long StartAction(tagUpdateState,bool,bool,bool);
	long UpdateScanTask();
	static bool IsTimeToUploadDiagnostics();
	static long AddFeatureIdsToUserInstallableRegPath(unsigned short const * *,unsigned int,HKEY__ *);
	static long CommitAndRebootForFullServicingStack(bool);
	static long CommitAndRebootForFullServicingStackWithLoggedOnUser(bool,bool);
	static long CreateInstance(_GUID const &,std::shared_ptr<UpdateSessionManager> &,UsoSession * *);
	static long FlightingEnabled(bool *);
	static long GenerateCallerToken(void * *,bool);
	static long NotifyTrayIconUserProcess(tagUpToDateStatus);
	void CheckSessionTimeOut();
	void LoadPersistedInfo();
	void LoadPersistedUpdates();
	void LogDeferReasonTelemetryEventForAllUpdates(DeferReasonData const &,unsigned long);
	void RefreshUpdateCollection();
public:
	UsoSession();
	long CommitAtPreShutdown();
	long RunStateEngine();
	static long ExtractUpdateIdentity(IUsoUpdateInternal *,UpdateIdentity *);
	static long GetUpdateStatusInfo(IUsoUpdateInternal *,UpdateStore *,tagUpdateStatusInfo *);
	static unsigned long DtuCommitThreadProc(void *);
	static unsigned long RunStateEngineThreadProc(void *);
	static unsigned long WuApiThreadProc(void *);
	virtual long AbortSession();
	virtual long AddOptionalFeatures(unsigned short const * *,unsigned int,unsigned short const *);
	virtual long CleanUsoSharedDataFolder();
	virtual long ClearDownloadWaitEntered();
	virtual long ClearPauseUpdatesFlag();
	virtual long ClearUpdateAgentError();
	virtual long ClearUpdateReserve(IUsoUpdateInternal *);
	virtual long CompleteUpdateSession();
	virtual long CreateUpdateDownloader(IUsoUpdateDownloader * *);
	virtual long CreateUpdateInstaller(IUsoUpdateInstaller * *);
	virtual long CreateUpdateSearcher(IUsoUpdateSearcher * *);
	virtual long EnableUwf();
	virtual long ExtendDownloadExpirationTimes();
	virtual long FlushStore();
	virtual long FreeServiceArray(_GUID *);
	virtual long GetAllApplicableUpdates(IUsoUpdateCollectionInternal * *);
	virtual long GetAllUpdates(IUsoUpdateCollectionInternal * *);
	virtual long GetApplicableServices(unsigned long *,_GUID * *);
	virtual long GetApplicableUpdates(_GUID,IUsoUpdateCollectionInternal * *);
	virtual long GetCachedPolicy(unsigned long,tagVARIANT *,unsigned long *,unsigned long *);
	virtual long GetCachedPolicyValue(unsigned long,tagVARIANT *,unsigned long *);
	virtual long GetCachedSettingArray(unsigned long,IUsoSettingArray * *);
	virtual long GetCachedSettingBool(unsigned long,bool *);
	virtual long GetCachedSettingDword(unsigned long,unsigned long *);
	virtual long GetCachedSettingObject(unsigned long,IUsoSettingObject * *);
	virtual long GetCachedSettingValue(unsigned long,unsigned short,tagVARIANT *);
	virtual long GetComplianceDeadlineState(int *,unsigned long *,_FILETIME *);
	virtual long GetDownloadCompleteTime(IUsoUpdateInternal *,_FILETIME *);
	virtual long GetEnterpriseCachedPolicy(unsigned long,tagVARIANT *,unsigned long *,unsigned long *);
	virtual long GetEnterpriseCachedPolicyValue(unsigned long,tagVARIANT *,unsigned long *);
	virtual long GetEnterprisePolicy_IsWUfBEnabled(int *);
	virtual long GetEvent(tagUsoEventType,void * *);
	virtual long GetIsWaaSOutOfDate(int *);
	virtual long GetIsWaaSOutOfDateFromCache(int *);
	virtual long GetNextStateToRun(tagUpdateState *);
	virtual long GetPermanentSessionVariable(unsigned short const *,tagVARIANT *);
	virtual long GetRebootResult(long *);
	virtual long GetScheduledScanTaskInfo(unsigned long *,unsigned long *);
	virtual long GetSeekerUpdates(IUsoUpdateCollectionInternal * *);
	virtual long GetSessionCV(char *);
	virtual long GetSessionProperty(unsigned long,tagVARIANT *);
	virtual long GetSessionVariable(unsigned short const *,tagSessionVariablePersistType,tagVARIANT *);
	virtual long GetSessionVariable(unsigned short const *,tagVARIANT *);
	virtual long GetShutdownOptions(int,unsigned long *,unsigned long *);
	virtual long GetShutdownOptionsForFeatureUpdate(unsigned long,unsigned long *);
	virtual long GetShutdownOptionsForQualityUpdate(unsigned long,unsigned long *);
	virtual long GetTotalHistoryCount(unsigned long *);
	virtual long GetUXRebootState(tagUXRebootState *);
	virtual long GetUpdateExProperty(IUsoUpdateInternal *,unsigned short const *,tagVARIANT *);
	virtual long GetUpdateHistory(unsigned long,unsigned long,IUsoUpdateHistoryEntryCollection * *);
	virtual long GetUpdatePayloadSize(tagUsoUpdatePayloadType,unsigned __int64 *,unsigned __int64 *);
	virtual long GetUpdateStatusInfo(IUsoUpdateInternal *,tagUpdateStatusInfo *);
	virtual long GetUsoSharedDataFolder(unsigned short * *);
	virtual long GetWaaSDaysOutOfDate(int,unsigned long *);
	virtual long GetWaaSDaysOutOfDateFromCache(int,unsigned long *);
	virtual long HandlePreShutdown();
	virtual long HasUpdateInStore(IUsoUpdateInternal *,int *);
	virtual long IncrementSessionCV();
	virtual long InternalPauseUpdates(int);
	virtual long IsActivityRestrictedDuringActiveHoursByPolicy(int *);
	virtual long IsErrorTransient(long,int *);
	virtual long IsFlightRebootPending(int *);
	virtual long IsRestartAllowed(unsigned long,int,unsigned long,int *);
	virtual long IsUniversalOrchestratorRunning(int *);
	virtual long OptInToMuService();
	virtual long PauseUpdates();SHUTDOWN_RESTARTAPPS
	virtual long PrepareDUICSession();
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long RebootToCompleteInstall(unsigned long,int,unsigned long *,short,short,unsigned long);
	virtual long ReevaluateStickiness();
	virtual long RefreshPolicyCacheValuesAndConfiguration();
	virtual long RefreshSettings();
	virtual long RefreshShutdownFlyout(int);
	virtual long RegisterDynamicInstalledProducts();
	virtual long RegisterService(_GUID);
	virtual long RemoveApplicableUpdatesFromService(_GUID);
	virtual long RequestDtuCommitAtShutdown();
	virtual long ResetReserve();
	virtual long ResumeUpdates();
	virtual long SetApplicableUpdates(_GUID,IUsoUpdateCollectionInternal *);
	virtual long SetPermanentSessionVariable(unsigned short const *,tagVARIANT);
	virtual long SetSeekerUpdates(_GUID,IUsoUpdateCollectionInternal *);
	virtual long SetSessionProperty(unsigned long,tagVARIANT);
	virtual long SetSessionVariable(unsigned short const *,tagSessionVariablePersistType,tagVARIANT);
	virtual long SetSessionVariable(unsigned short const *,tagVARIANT);
	virtual long SetSessionVariableAndUpdateUXState(unsigned short const *,tagVARIANT);
	virtual long SetUpdateExProperty(IUsoUpdateInternal *,unsigned short const *,tagVARIANT);
	virtual long SetUpdateStatusInfo(IUsoUpdateInternal *,tagUpdateStatusInfo);
	virtual long StartDownload(short);
	virtual long StartInstall(short);
	virtual long StartModelUpdates(int);
	virtual long StartPostInstall();
	virtual long StartScan(short,short,unsigned short const *);
	virtual long StartScheduleTime();
	virtual long StoreDownloadCompleteTime(IUsoUpdateInternal *);
	virtual long SuspendSession();
	virtual long TransitionToNextState(tagUpdateState *);
	virtual long UnstickAllUpdates();
	virtual long UpdateDownloadWaitEntered();
	virtual long UsoCollectTroubleshootingFiles(unsigned long,unsigned short *,unsigned long);
	virtual long UsoDisableUserInstallableContent(unsigned short const *,unsigned short const *,unsigned short const *);
	virtual long UsoEnableUserInstallableContent(unsigned short const *,unsigned short const *,unsigned short const *);
	virtual long WaitUntilSessionThreadTerminates(unsigned long);
	virtual long get_ActionListFilePath(unsigned short * *);
	virtual long get_AllUpdates(IUsoUpdateCollection * *);
	virtual long get_ApplicableUpdates(unsigned long,IUsoUpdateCollection * *);
	virtual long get_AttentionRequiredReason(tagAttentionRequiredReason *);
	virtual long get_CallerToken(void * *);
	virtual long get_CanPause(int *);
	virtual long get_CurrentState(tagUpdateState *);
	virtual long get_FirstScanAttemptTime(_FILETIME *);
	virtual long get_IsExternalCaller(short *);
	virtual long get_IsInteractiveSession(short *);
	virtual long get_IsMsUpdateServiceOnly(short *);
	virtual long get_IsOobeTourniquet(int *);
	virtual long get_LastErrorInfo(tagUpdateErrorInfo *);
	virtual long get_LastScanAttemptTime(_FILETIME *);
	virtual long get_LastUpdateCheckTime(_FILETIME *);
	virtual long get_LastUpdateDownloadTime(_FILETIME *);
	virtual long get_LastUpdateInstallTime(_FILETIME *);
	virtual long get_LastWaasAssessmentCheckTime(_FILETIME *);
	virtual long get_OptInToMU(short *);
	virtual long get_RebootRequired(short *);
	virtual long get_RebootResult(long *);
	virtual long get_ScanTriggerSource(tagVARIANT *);
	virtual long get_SeekerUpdates(IUsoUpdateCollection * *);
	virtual long get_UpToDateStatus(tagUpToDateStatus *);
	virtual long get_UpdateAgentError(long *);
	virtual long get_UpdateProgress(tagUpdateProgress *);
	virtual long get_UpdateSessionType(_GUID *);
	virtual long get_UsoSharedDataFolder(unsigned short * *);
	virtual long put_AttentionRequiredReason(tagAttentionRequiredReason);
	virtual long put_FirstScanAttemptTime(_FILETIME);
	virtual long put_LastError(long);
	virtual long put_LastScanAttemptTime(_FILETIME);
	virtual long put_LastUpdateCheckTime(_FILETIME);
	virtual long put_LastUpdateDownloadTime(_FILETIME);
	virtual long put_LastUpdateInstallTime(_FILETIME);
	virtual long put_LastWaasAssessmentCheckTime(_FILETIME);
	virtual long put_NextState(tagUpdateState);
	virtual long put_OptInToMU(short);
	virtual long put_RebootRequired(short);
	virtual long put_ScanTriggerSource(unsigned short const *);
	virtual long put_UpToDateStatus(tagUpToDateStatus);
	virtual long put_UpdateProgress(tagUpdateProgress);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~UsoSession();
};

struct UsoSessionCollection
{
	static long CreateInstance(std::vector<wil::com_ptr_t<IUsoSessionInternal,wil::err_returncode_policy>,std::allocator<wil::com_ptr_t<IUsoSessionInternal,wil::err_returncode_policy> > > &,IUsoSessionCollection * *);
	virtual long get_Count(unsigned long *);
	virtual long get_Item(unsigned long,IUsoSession * *);
	virtual ~UsoSessionCollection();
};

struct UsoSettingArray
{
	static long CreateInstance(IJsonValueArray *,IUsoSettingArray * *);
	virtual long GetArray(unsigned long,IUsoSettingArray * *);
	virtual long GetObjectW(unsigned long,IUsoSettingObject * *);
	virtual long Item(unsigned long,tagVARIANT *);
	virtual long get_Count(unsigned long *);
	virtual ~UsoSettingArray();
};

struct UsoSettingObject
{
	static long CreateInstance(IJsonObject *,IUsoSettingObject * *);
	virtual long GetArray(unsigned short const *,IUsoSettingArray * *);
	virtual long GetField(unsigned short const *,tagVARIANT *);
	virtual long GetObjectW(unsigned short const *,IUsoSettingObject * *);
	virtual ~UsoSettingObject();
};

class UsoSettings
{
protected:
	static long GetCTACQueryString(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *);
	static long GetETag(bool,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *);
	static long GetQuery(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *);
	static long GetServerOverride(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *);
public:
	static long DownloadSettings(bool,unsigned long,std::map<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,_variant_t,std::less<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > >,std::allocator<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,_variant_t> > > &,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &,unsigned long &);
	static long GetSettingName(tagSetting_Value,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *);
	static long ParseJson(unsigned short const *,std::map<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,_variant_t,std::less<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > >,std::allocator<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,_variant_t> > > &);
	static long PersistETag(unsigned short const *);
	static long SaveNextDownloadTime(unsigned long);
	static long ShouldDownload(bool *);
	static unsigned short const * const * const c_rgszSettingName;
};

struct UsoSettingsUtil
{
	static long GetSetting(unsigned short const *,unsigned short,tagVARIANT *);
	static long PersistSetting(unsigned short const *,tagVARIANT);
};

class UsoTroubleshooting
{
	long CollectDataMigrationStateLogs(_iobuf *);
	long CollectRegistryDumps();
	long CopyFileCollectionIfExists(unsigned short const *,unsigned short const *,bool,bool,std::basic_ofstream<unsigned short,std::char_traits<unsigned short> > *,unsigned long *);
	long CopyFileIfExists(unsigned short const *,unsigned short const *,bool,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *);
	long CreateLogForTaskFolder(unsigned short const *,unsigned short const *);
	long DumpMetadata();
	long DumpRegKeyList(_iobuf *,HKEY__ *,HKEY__ *);
	long FlushEtwSessions(std::map<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,int,std::less<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > >,std::allocator<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,int> > >,bool);
	long GatherAllFilesInUSOFolder(tagUSODirectory);
	long GatherEtwSessionFiles(unsigned long);
	long GatherFilesToCollect();
	long GatherStaticFiles(unsigned long);
	static long CreateCabFile(unsigned long,unsigned short const *,unsigned short const *);
	static long DumpInstalledPackages();
};

class UsoUpdate
{
	long CalculateUpdateClassificationAndCategorization();
protected:
	long WuIdentityToUsoIdentity(IUpdateIdentity *,tagUsoUpdateIdentifier *);
public:
	virtual long AcceptEula();
	virtual long ApproveForOptionalInstall();
	virtual long GetContentTypes(int *,int *,int *);
	virtual long GetExProperty(unsigned short *,tagVARIANT *);
	virtual long GetInternalProperty(tagUpdatePropertyType,tagVARIANT *);
	virtual long SetExProperty(unsigned short *,tagVARIANT);
	virtual long get_Categorization(tagUpdateCategorization *);
	virtual long get_Classification(tagUpdateClassification *);
	virtual long get_Deadline(tagVARIANT *);
	virtual long get_Description(unsigned short * *);
	virtual long get_EulaAccepted(int *);
	virtual long get_EulaAccepted(short *);
	virtual long get_EulaText(unsigned short * *);
	virtual long get_InstallSize(unsigned __int64 *);
	virtual long get_LastDeploymentChangeTime(double *);
	virtual long get_MaxDownloadSize(unsigned __int64 *);
	virtual long get_MinDownloadSize(unsigned __int64 *);
	virtual long get_MoreInfoUrls(unsigned short * * *,long *);
	virtual long get_SupportUrl(unsigned short * *);
	virtual long get_Title(unsigned short * *);
	virtual long get_UpdateId(tagUsoUpdateIdentifier *);
	virtual long get_UpdateStatusInfo(tagUpdateStatusInfo *);
	virtual ~UsoUpdate();
};

struct UsoUpdateCollection
{
	long Add(IUsoUpdate *);
	virtual long Clear();
	virtual long Remove(unsigned long);
	virtual long get_Count(unsigned long *);
	virtual long get_Item(unsigned long,IMoUsoUpdate * *);
	virtual long get_Item(unsigned long,IUsoUpdate * *);
	virtual long get__NewEnum(IUnknown * *);
	virtual ~UsoUpdateCollection();
};

struct UsoUpdateCollectionInternal
{
	static long CreateInstance(IUpdateCollection *,IUsoUpdateCollectionInternal * *);
	static long CreateInstance(IUsoUpdateCollectionInternal * *);
	virtual long Add(IUsoUpdateInternal *);
	virtual long Clear();
	virtual long Copy(IUsoUpdateCollectionInternal * *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long RemoveAt(unsigned long);
	virtual long get_Count(unsigned long *);
	virtual long get_IUpdateCollection(IUpdateCollection * *);
	virtual long get_Item(unsigned long,IUsoUpdateInternal * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct UsoUpdateDeserializer
{
	virtual long DeserializeUpdate(unsigned short *,IUsoUpdateInternal * *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct UsoUpdateDownloadJob
{
	static long CreateInstance(IDownloadJob *,IUsoUpdateDownloadJob * *);
	virtual long GetProgress(IUsoDownloadProgress * *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long RequestAbort();
	virtual long get_IDownloadJob(IDownloadJob * *);
	virtual long get_IsCompleted(short *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct UsoUpdateDownloadResult
{
	static long CreateInstance(IUpdateDownloadResult *,IUsoUpdateDownloadResult * *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_HResult(long *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct UsoUpdateDownloader
{
	static long CreateInstance(IUpdateDownloader *,IUsoUpdateDownloader * *);
	virtual long Add(_GUID const &,unsigned long);
	virtual long BeginDownload(IUsoProgressCallback *,tagVARIANT,IUsoUpdateDownloadJob * *);
	virtual long EndDownload(IUsoUpdateDownloadJob *,IUsoDownloadResult * *);
	virtual long Invoke(IDownloadJob *,IDownloadCompletedCallbackArgs *);
	virtual long Invoke(IDownloadJob *,IDownloadProgressChangedCallbackArgs *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long put_InternalConfigurationProperty(unsigned long,tagVARIANT);
	virtual long put_Priority(tagDownloadPriority);
	virtual long put_Updates(IUsoUpdateCollectionInternal *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct UsoUpdateEnhancedTraceLogging
{
	class CheckForUpdatesActivity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(_GUID,char const * const);
		void Stop(unsigned short const * const,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &);
		~CheckForUpdatesActivity();
	};

	class CreateDownloadListActivity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(char const * const,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &);
		void Stop(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,unsigned short const * const,unsigned short const * const,bool,bool,bool);
		~CreateDownloadListActivity();
	};

	class CreateInstallListActivity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(char const * const,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,bool,bool);
		void Stop(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &);
		~CreateInstallListActivity();
	};

	class DownloadActivity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		long SetDownloadListProperties(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,unsigned short const * const,unsigned short const * const,bool,bool,bool);
		void StartActivity(char const * const,unsigned long,unsigned long,unsigned long);
		void Stop(unsigned short const * const,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,unsigned long,unsigned long);
		~DownloadActivity();
	};

	class DownloadUpdatesActivity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(char const * const,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,unsigned short const * const,unsigned short const * const);
		void Stop(unsigned short const * const,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &);
		~DownloadUpdatesActivity();
	};

	class InstallActivity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(char const * const,unsigned long,unsigned long,unsigned long);
		void Stop(unsigned short const * const,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,unsigned long,unsigned long);
		~InstallActivity();
	};

	class InstallUpdatesActivity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(char const * const,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,unsigned long,unsigned long);
		void Stop(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
		~InstallUpdatesActivity();
	};

	class ModelDownloadActivity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		ModelDownloadActivity(ModelDownloadActivity const &);
		void StartActivity(unsigned short const *,_GUID,unsigned short const *);
		void Stop(unsigned short const *,long,_GUID,unsigned short const *);
		~ModelDownloadActivity();
	};

	class ModelUpdateActivity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(unsigned short const *,unsigned short const *);
		void Stop(unsigned short const *,unsigned short const *,unsigned short const *);
		~ModelUpdateActivity();
	};

	class ModelVerificationActivity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(unsigned short const *,unsigned short const *);
		void Stop(unsigned short const *,unsigned short const *,unsigned short const *);
		~ModelVerificationActivity();
	};

	class OTCDetectionActivity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(char const * const);
		void Stop(bool);
		~OTCDetectionActivity();
	};

	class OTCInstallActivity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(char const * const);
		void Stop(bool);
		~OTCInstallActivity();
	};

	class PostInstallActivity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(char const * const);
		void Stop(bool);
		~PostInstallActivity();
	};

	class SignalJsonParsingActivityAfterModelDownload
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(unsigned short const *,unsigned short const *);
		void Stop(unsigned short const *,bool,unsigned short const *);
		~SignalJsonParsingActivityAfterModelDownload();
	};

	class SignalJsonParsingActivityBeforeModelDownload
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(unsigned short const *,unsigned short const *);
		void Stop(unsigned short const *,bool,unsigned short const *);
		~SignalJsonParsingActivityBeforeModelDownload();
	};

	class SignalPayloadDetectionActivity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(unsigned short const *);
		void Stop(unsigned short const *);
		~SignalPayloadDetectionActivity();
	};

	class SignalRegistrationActivity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,bool);
		void Stop(unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,bool);
		~SignalRegistrationActivity();
	};

	class UpdateCompleteActivity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(char const * const);
		void Stop(bool);
		~UpdateCompleteActivity();
	};

	class UsoCoreWorkerRunning
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
	};

	static void FallbackTelemetryCallback(bool,wil::FailureInfo const &);
	static void ModelDownloadSkipped<unsigned short const * &,unsigned short const (&)[28],unsigned short const * &>(unsigned short const * &,unsigned short const (&)[28],unsigned short const * &);
	static void ModelUpdateSkipped<unsigned short const * &,unsigned short const (&)[39],unsigned short const * &>(unsigned short const * &,unsigned short const (&)[39],unsigned short const * &);
};

class UsoUpdateHistoryEntry
{
	long WuIdentityToUsoIdentity(IUpdateIdentity *,tagUsoUpdateIdentifier *);
public:
	long Initialize(IUpdateHistoryEntry3 *);
	virtual long get_Classification(tagHistoryClassification *);
	virtual long get_ClientApplicationID(unsigned short * *);
	virtual long get_Count(unsigned long *);
	virtual long get_Date(double *);
	virtual long get_Description(unsigned short * *);
	virtual long get_HResult(long *);
	virtual long get_MoreInfoUrls(unsigned short * * *,long *);
	virtual long get_Operation(tagUsoUpdateOperation *);
	virtual long get_ResultCode(tagUsoOperationResultCode *);
	virtual long get_SupportUrl(unsigned short * *);
	virtual long get_Title(unsigned short * *);
	virtual long get_UpdateId(tagUsoUpdateIdentifier *);
	virtual ~UsoUpdateHistoryEntry();
};

class UsoUpdateHistoryEntryCollection
{
	static unsigned short const * * sc_allowedHistoryApplicationIds;
protected:
	static bool IsEntryAllowed(IUsoUpdateHistoryEntry *);
	static long FindMatchHistoryEntry(UsoUpdateHistoryEntryCollection *,IUsoUpdateHistoryEntry *,IUsoUpdateHistoryEntry * *);
public:
	static long CreateInstance(IUpdateHistoryEntryCollection *,IUsoUpdateHistoryEntryCollection * *);
	virtual long get_Count(unsigned long *);
	virtual long get_Item(unsigned long,IUsoUpdateHistoryEntry * *);
	virtual ~UsoUpdateHistoryEntryCollection();
};

struct UsoUpdateInstallationJob
{
	static long CreateInstance(IInstallationJob *,IUsoUpdateInstallationJob * *);
	virtual long GetProgress(long *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long RequestAbort();
	virtual long Resume();
	virtual long Suspend();
	virtual long get_IInstallationJob(IInstallationJob * *);
	virtual long get_IsCompleted(short *);
	virtual long get_Updates(IUsoUpdateCollectionInternal * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct UsoUpdateInstallationResult
{
	static long CreateInstance(IUpdateInstallationResult *,IUsoUpdateInstallationResult * *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_HResult(long *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct UsoUpdateInstaller
{
	virtual long BeginInstall(IUsoProgressCallback *,tagVARIANT,IUsoUpdateInstallationJob * *);
	virtual long BeginUninstall(IUsoProgressCallback *,tagVARIANT,IUsoUpdateInstallationJob * *);
	virtual long Commit(unsigned long);
	virtual long EndInstall(IUsoUpdateInstallationJob *,IUsoInstallationResult * *);
	virtual long EndUninstall(IUsoUpdateInstallationJob *,IUsoInstallationResult * *);
	virtual long Invoke(IInstallationJob *,IInstallationCompletedCallbackArgs *);
	virtual long Invoke(IInstallationJob *,IInstallationProgressChangedCallbackArgs *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Revert(IUsoInstallationResult * *);
	virtual long SetInstallToken(unsigned int);
	virtual long put_InternalConfigurationProperty(unsigned long,tagVARIANT);
	virtual long put_IsForced(short);
	virtual long put_Updates(IUsoUpdateCollectionInternal *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct UsoUpdateInternal
{
	static long CreateInstance(IUpdate *,IUsoUpdateInternal * *);
	virtual long AcceptEula();
	virtual long ApproveForOptionalInstall();
	virtual long CleanupDownloadData();
	virtual long GetContents(int *,int *,int *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SerializeUpdate(unsigned short * *);
	virtual long Stick();
	virtual long Unstick();
	virtual long get_CanRequestUserInput(short *);
	virtual long get_Categories(ICategoryCollection * *);
	virtual long get_Deadline(tagVARIANT *);
	virtual long get_DeploymentAction(tagDeploymentAction *);
	virtual long get_Description(unsigned short * *);
	virtual long get_DownloadPriority(tagDownloadPriority *);
	virtual long get_DriverClass(unsigned short * *);
	virtual long get_EulaAccepted(short *);
	virtual long get_EulaText(unsigned short * *);
	virtual long get_IUpdate(IUpdate * *);
	virtual long get_Identity(IUpdateIdentity * *);
	virtual long get_Impact(tagInstallationImpact *);
	virtual long get_InternalProperty(unsigned long,tagVARIANT *);
	virtual long get_IsDownloaded(short *);
	virtual long get_IsFlaggedBySRT(_GUID,short *);
	virtual long get_IsHidden(short *);
	virtual long get_IsInstalled(short *);
	virtual long get_LastDeploymentChangeTime(double *);
	virtual long get_MaxDownloadSize(tagDEC *);
	virtual long get_MinDownloadSize(tagDEC *);
	virtual long get_MoreInfoUrls(IStringCollection * *);
	virtual long get_RebootRequired(short *);
	virtual long get_RecommendedHardDiskSpace(long *);
	virtual long get_SupportUrl(unsigned short * *);
	virtual long get_Title(unsigned short * *);
	virtual long get_Type(tagUpdateType *);
	virtual long get_UpdateExpirationDate(double *);
	virtual long put_InternalProperty(unsigned long,tagVARIANT);
	virtual long put_UpdateExpirationDate(double);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class UsoUpdateSearchResult
{
	bool HasFederatedScanFailure();
public:
	static long CreateInstance(ISearchResult *,IUsoUpdateSearchResult * *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_HResult(int,long *);
	virtual long get_Updates(IUsoUpdateCollectionInternal * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct UsoUpdateSearcher
{
	static long CreateInstance(IUpdateSearcher *,IUsoUpdateSearcher * *);
	virtual long BeginSearch(unsigned short *,IUsoProgressCallback *,tagVARIANT);
	virtual long EndSearch(IUsoUpdateSearchResult * *);
	virtual long GetTotalHistoryCount(long *);
	virtual long Invoke(ISearchJob *,ISearchCompletedCallbackArgs *);
	virtual long QueryHistory(long,long,IUpdateHistoryEntryCollection * *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long RequestAbort();
	virtual long put_IncludeDriverSets(short);
	virtual long put_InternalConfigurationProperty(unsigned long,tagVARIANT);
	virtual long put_ServerSelection(tagServerSelection);
	virtual long put_ServiceID(unsigned short *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct UsoUpdateServiceManager
{
	static long CreateInstance(IUpdateServiceManager2 *,IUsoUpdateServiceManager * *);
	virtual long AddService(unsigned short *,long);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SetOption(unsigned short *,tagVARIANT);
	virtual long UnregisterServiceWithAU(unsigned short *);
	virtual long get_OptInToMU(short *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct UsoUpdateSession
{
	virtual long CreateUpdateDownloader(IUsoUpdateDownloader * *);
	virtual long CreateUpdateInstaller(IUsoUpdateInstaller * *);
	virtual long CreateUpdateSearcher(IUsoUpdateSearcher * *);
	virtual long CreateUpdateServiceManager(IUsoUpdateServiceManager * *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long put_ClientApplicationID(unsigned short *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class UsoUpdateTraceLogging
{
	class DetectionActivity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(char const * const,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,unsigned short const * const,unsigned long);
		void Stop(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &);
		void Stop(unsigned short const * const,unsigned short const * const);
		~DetectionActivity();
	};

protected:
	virtual void Initialize();
public:
	static void CommitFailed(_GUID,long);
	static void CompletingUpdateSession(_GUID,unsigned short const *);
	static void CorrelationVectorGeneration(unsigned short const *);
	static void CorrelationVectorProcessed(char const *);
	static void CorrelationVectorProgression(unsigned short const *);
	static void DetectionVerificationResultBlockedFlights(unsigned short const *);
	static void DetectionVerificationResultFlaggedBySRT(unsigned short const *);
	static void DetectionVerificationResultHiddenUpdates(unsigned short const *);
	static void DetectionVerificationResultOptionalUpdates(unsigned short const *);
	static void DisableMoReportAsUpdateResultFailed(long);
	static void DownloadFinished(unsigned short const *);
	static void DownloadTimedOut();
	static void InstallFinished(unsigned short const *);
	static void InstallNotNeeded(unsigned short const *);
	static void OtcUpdateAgentCabDoesNotExist();
	static void OtcUpdateAgentCabValidationFailed(long);
	static void PastDeadlineUpdateMandatory(unsigned short const *);
	static void RunningDownload(unsigned short const *,unsigned short const *);
	static void StartDownloadApiCalled(int);
	static void StartInstallApiCalled(int);
	static void StartModelUpdatesApiCalled(int);
	static void StartScanApiCalled(int,int);
	static void TokenCached(unsigned long);
	static void UpdateClassificationNotFoundInReserveSizeMap(_GUID);
	static void UpdateDownloadBlockedTransientError(long);
	static void UpdateDownloadPaused(long);
	static void UpdateRebootNotRequired(_GUID);
	static void UpdateStateTransition(unsigned short const *,unsigned short const *);
	void ConfigureDeferredInstall_(unsigned short const *,bool);
};

struct UxHelper
{
	static long LaunchNotificationProcess(unsigned short const *);
};

struct VariantNode
{
	long ExtractNode(XmlReader *);
	long SetNode(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,tagVARIANT);
	long WriteNode(XmlWriter *);
};

class VolumeTrackerList
{
	long AddVolume(wchar_t *,bool);
	long AddVolumes(wchar_t *,unsigned long,bool);
	long RemoveVolume(VolumeTrackerVolume *);
	long WaitForVolumeInternal(STORE_ID,VOLUME_IDENTIFICATION_TYPE,wchar_t const *,unsigned __int64);
	virtual ~VolumeTrackerList();
public:
	long AddDisk(STORE_ID const &);
	long FindFirstVolumeInList(VOLUME_INDEX * *,VolumeTrackerVolume * *);
	long GetVolume(STORE_ID,wchar_t const *,VolumeTrackerVolume * *,int);
	long GetVolume(unsigned long,VolumeTrackerVolume * *);
	long RefreshVolumes();
	long WaitForVolume(STORE_ID,wchar_t const *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class VolumeTrackerVolume
{
	VolumeTrackerVolume(ImageLogger const *);
	long InitializeFromPnpPath(wchar_t const *,bool,bool);
	virtual ~VolumeTrackerVolume();
protected:
	bool IsBasicVolume(void * const);
	bool IsValidDriveType(wchar_t const *);
	long CreateHiddenVolumePath();
	long GetDeviceObjectPath(void * const);
	long GetDeviceUniqueId(void * const);
	long GetGuidVolumePathFromNativePath();
	long GetMountPathsInternal(wchar_t * *,unsigned __int64 *,unsigned short);
	long GetPartitionInformation();
	long GetVolumeExtentInformation(void * const);
	long QueryDeviceInfo(void * const,bool);
	void LogMountPaths(wchar_t const *,unsigned __int64);
	void UpdateAttributes(PARTITION_ATTRIBUTES);
	void UpdateType(PARTITION_TYPE);
public:
	bool IsOnSameDisk(STORE_ID);
	long CancelChangeNotification(void * *);
	long CreatePartitionAttributeChangeNotification(PARTITION_ATTRIBUTES,void * *);
	long CreatePartitionTypeChangeNotification(PARTITION_TYPE,void * *);
	long CreateVolumeMountPointChangeNotification(wchar_t const *,void * *);
	long GetMountPath(wchar_t *,unsigned long);
	long GetPartitionName(wchar_t *,unsigned long);
	long GetVolumePath(wchar_t *,unsigned long,bool,bool);
	long GetWellKnownGuidPath(wchar_t *,unsigned long,bool,bool,bool);
	long OpenDisk(unsigned long,unsigned long,void * *);
	long OpenVolume(unsigned long,unsigned long,void * *);
	long WaitForNewMountPoint(void * *);
	long WaitForPartitionAttributeChange(PARTITION_ATTRIBUTES *,void * *);
	long WaitForPartitionTypeChange(PARTITION_TYPE *,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct WUUpdateHandlers
{
	static long CreateInstallationHandler(IUpdateHandler * *);
};

struct WaaSHelper
{
	static bool IsFeatureUpdatePending(IUsoSessionCommon *);
	static bool IsWaaSUXAllowedByUUP(IUsoSessionCommon *);
	static long DaysSinceUUPFallbackChanged(IUsoSessionCommon *,unsigned long *);
};

namespace Windows
{
	struct Auto<_LUNICODE_STRING>
	{
		~Auto<_LUNICODE_STRING>();
	};

	namespace Detail
	{
		void CloseWithDelete<DuMigration::Impl>(DuMigration::Impl *);
	};

	namespace Internal
	{
		namespace PredictionUnit
		{
			unsigned short const * const c_reportingBehaviorCritical;
		};

	};

	namespace StringUtil
	{
		namespace Rtl
		{
			long AppendString<Auto<_LUNICODE_STRING>,AutoOperatorAmpersandHelper<_LUNICODE_STRING,Auto<_LUNICODE_STRING> >,0>(Auto<_LUNICODE_STRING> const &,AutoOperatorAmpersandHelper<_LUNICODE_STRING,Auto<_LUNICODE_STRING> >);
			long AppendString<wchar_t [11],AutoOperatorAmpersandHelper<_LUNICODE_STRING,Auto<_LUNICODE_STRING> >,0>(wchar_t const (&)[11],AutoOperatorAmpersandHelper<_LUNICODE_STRING,Auto<_LUNICODE_STRING> >);
			long AppendString<wchar_t [14],AutoOperatorAmpersandHelper<_LUNICODE_STRING,Auto<_LUNICODE_STRING> >,0>(wchar_t const (&)[14],AutoOperatorAmpersandHelper<_LUNICODE_STRING,Auto<_LUNICODE_STRING> >);
			long AppendString<wchar_t [16],AutoOperatorAmpersandHelper<_LUNICODE_STRING,Auto<_LUNICODE_STRING> >,0>(wchar_t const (&)[16],AutoOperatorAmpersandHelper<_LUNICODE_STRING,Auto<_LUNICODE_STRING> >);
			long AppendString<wchar_t [20],AutoOperatorAmpersandHelper<_LUNICODE_STRING,Auto<_LUNICODE_STRING> >,0>(wchar_t const (&)[20],AutoOperatorAmpersandHelper<_LUNICODE_STRING,Auto<_LUNICODE_STRING> >);
			long AppendString<wchar_t [5],AutoOperatorAmpersandHelper<_LUNICODE_STRING,Auto<_LUNICODE_STRING> >,0>(wchar_t const (&)[5],AutoOperatorAmpersandHelper<_LUNICODE_STRING,Auto<_LUNICODE_STRING> >);
			long DuplicateString<wchar_t [262],AutoOperatorAmpersandHelper<_LUNICODE_STRING,Auto<_LUNICODE_STRING> > >(wchar_t const (&)[262],AutoOperatorAmpersandHelper<_LUNICODE_STRING,Auto<_LUNICODE_STRING> >);
			long EnsureNullTerminated<AutoOperatorAmpersandHelper<_LUNICODE_STRING,Auto<_LUNICODE_STRING> > >(AutoOperatorAmpersandHelper<_LUNICODE_STRING,Auto<_LUNICODE_STRING> >);
		};

	};

};

struct WnfPublisherT<char>
{
	virtual ~WnfPublisherT<char>();
};

class WnfSubscriberT<IUProgressData>
{
protected:
	static long CallbackWrapper(_WNF_STATE_NAME,unsigned long,_WNF_TYPE_ID *,void *,void const *,unsigned long);
public:
	WnfSubscriberT<IUProgressData>(_WNF_STATE_NAME const &);
	long AddCallback(std::function<void (IUProgressData const &)> const &,std::shared_ptr<std::function<void (IUProgressData const &)> > *);
	long Subscribe(unsigned long);
	virtual ~WnfSubscriberT<IUProgressData>();
};

class WnfSubscriberT<_WNF_PO_COMPOSITE_BATTERY_PAYLOAD>
{
protected:
	static long CallbackWrapper(_WNF_STATE_NAME,unsigned long,_WNF_TYPE_ID *,void *,void const *,unsigned long);
public:
	long Subscribe(unsigned long);
	virtual ~WnfSubscriberT<_WNF_PO_COMPOSITE_BATTERY_PAYLOAD>();
};

class WnfSubscriberT<_WNF_SCREENONSTUDY_SESSION_DATA>
{
protected:
	static long CallbackWrapper(_WNF_STATE_NAME,unsigned long,_WNF_TYPE_ID *,void *,void const *,unsigned long);
public:
	long AddCallback(std::function<void (_WNF_SCREENONSTUDY_SESSION_DATA const &)> const &,std::shared_ptr<std::function<void (_WNF_SCREENONSTUDY_SESSION_DATA const &)> > *);
	virtual ~WnfSubscriberT<_WNF_SCREENONSTUDY_SESSION_DATA>();
};

class WnfSubscriberT<char>
{
protected:
	static long CallbackWrapper(_WNF_STATE_NAME,unsigned long,_WNF_TYPE_ID *,void *,void const *,unsigned long);
public:
	long Subscribe(unsigned long);
	virtual ~WnfSubscriberT<char>();
};

class WritePriorityLock
{
	bool WaitOnEvent(void * const,long *);
	void EnterLock();
public:
	static long CreateWritePriorityLock(WritePriorityLock * *);
	virtual ~WritePriorityLock();
	void AcquireRead();
	void AcquireWrite();
	void ReleaseRead();
};

class XmlReader
{
	long DuplicateString(unsigned short const *,unsigned int,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
	long GetNextNode(XmlNodeType *);
public:
	XmlReader();
	bool IsEmptyElement();
	bool IsEndElement();
	long GetLocalName(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
	long GetLocalName(unsigned short const * *,unsigned int *);
	long GetNodeText(unsigned short const * *,unsigned int *);
	long GetValue(unsigned short const * *,unsigned int *);
	long GetValueAsDWORD(unsigned long *);
	long Init(IStream *);
	long MoveToEndOfCurrentElement(bool);
	long MoveToFirstAttribute();
	long MoveToNextAttribute();
	long ValidateCurrentLocalName(unsigned short const *,bool);
	long ValidateElement(bool);
	long ValidateElement(unsigned short const *,bool,bool);
	~XmlReader();
};

struct XmlWriter
{
	XmlWriter();
	long Flush();
	long Init(IStream *);
	long WriteAttribute(unsigned short const *,_GUID);
	long WriteAttribute(unsigned short const *,int);
	long WriteAttribute(unsigned short const *,unsigned long);
	long WriteAttribute(unsigned short const *,unsigned short const *);
	long WriteElement(unsigned short const *,unsigned short const *);
	long WriteEndDocument();
	long WriteEndElement();
	long WriteStartDocument();
	long WriteStartElement(unsigned short const *);
	long WriteString(unsigned short const *);
	~XmlWriter();
};

struct _bstr_t
{
	~_bstr_t();
};

struct _com_error
{
	_com_error(_com_error const &);
	_com_error(long,IErrorInfo *,bool);
	virtual ~_com_error();
};

namespace _com_util
{
	char * ConvertBSTRToString(unsigned short *);
	unsigned short * ConvertStringToBSTR(char const *);
};

struct _escalationObject
{
	~_escalationObject();
};

struct _variant_t
{
	operator bool();
	~_variant_t();
};

struct stateengine_abandoned_exception
{
	stateengine_abandoned_exception();
};

struct stateengine_hung_exception
{
	stateengine_hung_exception();
};

namespace std
{
	struct _Auto_cnd
	{
		~_Auto_cnd();
	};

	struct _Auto_mtx
	{
		~_Auto_mtx();
	};

	struct _Bt_state_t<unsigned short const *>
	{
		~_Bt_state_t<unsigned short const *>();
	};

	class _Builder<unsigned short const *,unsigned short,regex_traits<unsigned short> >
	{
		_Node_base * _New_node(_Node_type);
		void _Add_char_to_array(unsigned short);
		void _Char_to_elts(unsigned short const *,unsigned short const *,__int64,_Sequence<unsigned short> * *);
	public:
		_Node_base * _Begin_assert_group(bool);
		void _Add_char(unsigned short);
		void _Add_char_to_class(unsigned short);
		void _Add_class();
		void _Add_equiv(unsigned short const *,unsigned short const *,__int64);
		void _Add_named_class(short,bool);
		void _Add_range(unsigned short,unsigned short);
		void _Add_rep(int,int,bool);
		void _Discard_pattern();
		void _End_group(_Node_base *);
	};

	struct _Facetptr<codecvt<unsigned short,char,_Mbstatet> >
	{
		static locale::facet const * const _Psave;
	};

	struct _Facetptr<collate<unsigned short> >
	{
		static locale::facet const * const _Psave;
	};

	struct _Facetptr<ctype<unsigned short> >
	{
		static locale::facet const * const _Psave;
	};

	struct _Func_class<void,IUProgressData const &>
	{
		~_Func_class<void,IUProgressData const &>();
	};

	struct _Func_class<void,_WNF_SCREENONSTUDY_SESSION_DATA const &>
	{
		~_Func_class<void,_WNF_SCREENONSTUDY_SESSION_DATA const &>();
	};

	class _Func_impl_no_alloc<long (*)(unsigned short const *,unsigned short const *),long,unsigned short const *,unsigned short const *>
	{
		virtual _Func_base<long,unsigned short const *,unsigned short const *> * _Copy(void *);
		virtual _Func_base<long,unsigned short const *,unsigned short const *> * _Move(void *);
		virtual type_info const & _Target_type();
		virtual void _Delete_this(bool);
		virtual void const * _Get();
	};

	struct _List_alloc<_List_base_types<InstallationHandler::UsoInstallList,allocator<InstallationHandler::UsoInstallList> > >
	{
		_List_node<InstallationHandler::UsoInstallList,void *> * _Buynode0(_List_node<InstallationHandler::UsoInstallList,void *> *,_List_node<InstallationHandler::UsoInstallList,void *> *);
	};

	struct _List_alloc<_List_base_types<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >
	{
		_List_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> * _Buynode0(_List_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> *,_List_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> *);
	};

	struct _List_buy<InstallationHandler::UsoInstallList,allocator<InstallationHandler::UsoInstallList> >
	{
		_List_node<InstallationHandler::UsoInstallList,void *> * _Buynode<InstallationHandler::UsoInstallList const &>(_List_node<InstallationHandler::UsoInstallList,void *> *,_List_node<InstallationHandler::UsoInstallList,void *> *,InstallationHandler::UsoInstallList const &);
	};

	struct _List_buy<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >
	{
		_List_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> * _Buynode<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > &>(_List_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> *,_List_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> *,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > &);
	};

	class _Matcher<unsigned short const *,unsigned short,regex_traits<unsigned short>,unsigned short const *>
	{
		bool _Do_class(_Node_base *);
		bool _Do_if(_Node_if *);
		bool _Do_rep(_Node_rep *,bool,int);
		bool _Do_rep0(_Node_rep *,bool);
		bool _Match_pat(_Node_base *);
	public:
		~_Matcher<unsigned short const *,unsigned short,regex_traits<unsigned short>,unsigned short const *>();
	};

	class _Pad
	{
		static unsigned int _Call_func(void *);
	public:
		_Pad();
		void _Release();
	};

	class _Parser<unsigned short const *,unsigned short,regex_traits<unsigned short> >
	{
		_Prs_ret _ClassAtom();
		_Prs_ret _ClassEscape(bool);
		bool _Alternative();
		bool _CharacterClassEscape(bool);
		bool _CharacterEscape();
		bool _IdentityEscape();
		bool _Wrapped_disjunction();
		int _Do_digits(int,int);
		void _AtomEscape();
		void _CharacterClass();
		void _Disjunction();
		void _Do_ex_class(_Meta_type);
		void _Error(regex_constants::error_type);
		void _Quantifier();
		void _Trans();
	public:
		_Root_node * _Compile();
		~_Parser<unsigned short const *,unsigned short,regex_traits<unsigned short> >();
	};

	class _Ref_count<PowerStateManager>
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count<UpdateEscalationManager>
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count<UpdateNode>
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count<VariantNode>
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count<function<void (IUProgressData const &)> >
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count<function<void (_WNF_SCREENONSTUDY_SESSION_DATA const &)> >
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count<unsigned char>
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	struct _Ref_count_base
	{
		virtual void * _Get_deleter(type_info const &);
	};

	class _Ref_count_obj<CrmManager>
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count_obj<UpdateSessionManager>
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count_obj<UpdateStateEngine>
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count_obj<UpdateStore>
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	struct _Regex_traits<unsigned short>
	{
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > transform_primary<_String_iterator<_String_val<_Simple_types<unsigned short> > > >(_String_iterator<_String_val<_Simple_types<unsigned short> > >,_String_iterator<_String_val<_Simple_types<unsigned short> > >);
		short lookup_classname<unsigned short const *>(unsigned short const *,unsigned short const *,bool);
		unsigned short translate(unsigned short);
	};

	struct _String_val<_Simple_types<char> >
	{
		static void _Xran();
	};

	struct _String_val<_Simple_types<unsigned short> >
	{
		static void _Xran();
	};

	struct _Tgt_state_t<unsigned short const *>
	{
		_Tgt_state_t<unsigned short const *> & operator=(_Tgt_state_t<unsigned short const *> const &);
		~_Tgt_state_t<unsigned short const *>();
	};

	class _Tree<_Tmap_traits<UpdateIdentity,shared_ptr<UpdateNode>,less<UpdateIdentity>,allocator<pair<UpdateIdentity const ,shared_ptr<UpdateNode> > >,0> >
	{
	protected:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<UpdateIdentity const ,shared_ptr<UpdateNode> > > > > _Insert_at<pair<UpdateIdentity const ,shared_ptr<UpdateNode> > &,_Tree_node<pair<UpdateIdentity const ,shared_ptr<UpdateNode> >,void *> *>(bool,_Tree_node<pair<UpdateIdentity const ,shared_ptr<UpdateNode> >,void *> *,pair<UpdateIdentity const ,shared_ptr<UpdateNode> > &,_Tree_node<pair<UpdateIdentity const ,shared_ptr<UpdateNode> >,void *> *);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<UpdateIdentity const ,shared_ptr<UpdateNode> > > > > _Insert_hint<pair<UpdateIdentity const ,shared_ptr<UpdateNode> > &,_Tree_node<pair<UpdateIdentity const ,shared_ptr<UpdateNode> >,void *> *>(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<UpdateIdentity const ,shared_ptr<UpdateNode> > > > >,pair<UpdateIdentity const ,shared_ptr<UpdateNode> > &,_Tree_node<pair<UpdateIdentity const ,shared_ptr<UpdateNode> >,void *> *);
		pair<_Tree_iterator<_Tree_val<_Tree_simple_types<pair<UpdateIdentity const ,shared_ptr<UpdateNode> > > > >,bool> _Insert_nohint<pair<UpdateIdentity const ,shared_ptr<UpdateNode> > &,_Tree_node<pair<UpdateIdentity const ,shared_ptr<UpdateNode> >,void *> *>(bool,pair<UpdateIdentity const ,shared_ptr<UpdateNode> > &,_Tree_node<pair<UpdateIdentity const ,shared_ptr<UpdateNode> >,void *> *);
		void _Destroy_if_node(_Tree_node<pair<UpdateIdentity const ,shared_ptr<UpdateNode> >,void *> *);
		void _Erase(_Tree_node<pair<UpdateIdentity const ,shared_ptr<UpdateNode> >,void *> *);
	public:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<UpdateIdentity const ,shared_ptr<UpdateNode> > > > > erase(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<UpdateIdentity const ,shared_ptr<UpdateNode> > > > >,_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<UpdateIdentity const ,shared_ptr<UpdateNode> > > > >);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<UpdateIdentity const ,shared_ptr<UpdateNode> > > > > find(UpdateIdentity const &);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<UpdateIdentity const ,shared_ptr<UpdateNode> > > > > lower_bound(UpdateIdentity const &);
	};

	class _Tree<_Tmap_traits<_GUID,ATL::CComPtr<IUsoUpdateCollectionInternal>,less<_GUID>,allocator<pair<_GUID const ,ATL::CComPtr<IUsoUpdateCollectionInternal> > >,0> >
	{
	protected:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,ATL::CComPtr<IUsoUpdateCollectionInternal> > > > > _Insert_at<pair<_GUID const ,ATL::CComPtr<IUsoUpdateCollectionInternal> > &,_Tree_node<pair<_GUID const ,ATL::CComPtr<IUsoUpdateCollectionInternal> >,void *> *>(bool,_Tree_node<pair<_GUID const ,ATL::CComPtr<IUsoUpdateCollectionInternal> >,void *> *,pair<_GUID const ,ATL::CComPtr<IUsoUpdateCollectionInternal> > &,_Tree_node<pair<_GUID const ,ATL::CComPtr<IUsoUpdateCollectionInternal> >,void *> *);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,ATL::CComPtr<IUsoUpdateCollectionInternal> > > > > _Insert_hint<pair<_GUID const ,ATL::CComPtr<IUsoUpdateCollectionInternal> > &,_Tree_node<pair<_GUID const ,ATL::CComPtr<IUsoUpdateCollectionInternal> >,void *> *>(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,ATL::CComPtr<IUsoUpdateCollectionInternal> > > > >,pair<_GUID const ,ATL::CComPtr<IUsoUpdateCollectionInternal> > &,_Tree_node<pair<_GUID const ,ATL::CComPtr<IUsoUpdateCollectionInternal> >,void *> *);
		pair<_Tree_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,ATL::CComPtr<IUsoUpdateCollectionInternal> > > > >,bool> _Insert_nohint<pair<_GUID const ,ATL::CComPtr<IUsoUpdateCollectionInternal> > &,_Tree_node<pair<_GUID const ,ATL::CComPtr<IUsoUpdateCollectionInternal> >,void *> *>(bool,pair<_GUID const ,ATL::CComPtr<IUsoUpdateCollectionInternal> > &,_Tree_node<pair<_GUID const ,ATL::CComPtr<IUsoUpdateCollectionInternal> >,void *> *);
		void _Destroy_if_node(_Tree_node<pair<_GUID const ,ATL::CComPtr<IUsoUpdateCollectionInternal> >,void *> *);
		void _Erase(_Tree_node<pair<_GUID const ,ATL::CComPtr<IUsoUpdateCollectionInternal> >,void *> *);
	public:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,ATL::CComPtr<IUsoUpdateCollectionInternal> > > > > erase(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,ATL::CComPtr<IUsoUpdateCollectionInternal> > > > >,_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,ATL::CComPtr<IUsoUpdateCollectionInternal> > > > >);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,ATL::CComPtr<IUsoUpdateCollectionInternal> > > > > find(_GUID const &);
		void clear();
	};

	class _Tree<_Tmap_traits<_GUID,CUpdateObj *,less<_GUID>,allocator<pair<_GUID const ,CUpdateObj *> >,0> >
	{
	protected:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,CUpdateObj *> > > > _Insert_at<pair<_GUID const ,CUpdateObj *> &,_Tree_node<pair<_GUID const ,CUpdateObj *>,void *> *>(bool,_Tree_node<pair<_GUID const ,CUpdateObj *>,void *> *,pair<_GUID const ,CUpdateObj *> &,_Tree_node<pair<_GUID const ,CUpdateObj *>,void *> *);
		pair<_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,CUpdateObj *> > > >,_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,CUpdateObj *> > > > > _Eqrange<_GUID>(_GUID const &);
		pair<_Tree_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,CUpdateObj *> > > >,bool> _Insert_nohint<pair<_GUID const ,CUpdateObj *> &,_Tree_node<pair<_GUID const ,CUpdateObj *>,void *> *>(bool,pair<_GUID const ,CUpdateObj *> &,_Tree_node<pair<_GUID const ,CUpdateObj *>,void *> *);
		void _Destroy_if_node(_Tree_node<pair<_GUID const ,CUpdateObj *>,void *> *);
		void _Erase(_Tree_node<pair<_GUID const ,CUpdateObj *>,void *> *);
	public:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,CUpdateObj *> > > > erase(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,CUpdateObj *> > > >);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,CUpdateObj *> > > > erase(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,CUpdateObj *> > > >,_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,CUpdateObj *> > > >);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,CUpdateObj *> > > > find(_GUID const &);
		unsigned __int64 erase(_GUID const &);
		void clear();
	};

	class _Tree<_Tmap_traits<_GUID,weak_ptr<UpdateStore>,less<_GUID>,allocator<pair<_GUID const ,weak_ptr<UpdateStore> > >,0> >
	{
	protected:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,weak_ptr<UpdateStore> > > > > _Insert_at<pair<_GUID const ,weak_ptr<UpdateStore> > &,_Tree_node<pair<_GUID const ,weak_ptr<UpdateStore> >,void *> *>(bool,_Tree_node<pair<_GUID const ,weak_ptr<UpdateStore> >,void *> *,pair<_GUID const ,weak_ptr<UpdateStore> > &,_Tree_node<pair<_GUID const ,weak_ptr<UpdateStore> >,void *> *);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,weak_ptr<UpdateStore> > > > > _Insert_hint<pair<_GUID const ,weak_ptr<UpdateStore> > &,_Tree_node<pair<_GUID const ,weak_ptr<UpdateStore> >,void *> *>(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,weak_ptr<UpdateStore> > > > >,pair<_GUID const ,weak_ptr<UpdateStore> > &,_Tree_node<pair<_GUID const ,weak_ptr<UpdateStore> >,void *> *);
		pair<_Tree_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,weak_ptr<UpdateStore> > > > >,bool> _Insert_nohint<pair<_GUID const ,weak_ptr<UpdateStore> > &,_Tree_node<pair<_GUID const ,weak_ptr<UpdateStore> >,void *> *>(bool,pair<_GUID const ,weak_ptr<UpdateStore> > &,_Tree_node<pair<_GUID const ,weak_ptr<UpdateStore> >,void *> *);
		void _Destroy_if_node(_Tree_node<pair<_GUID const ,weak_ptr<UpdateStore> >,void *> *);
		void _Erase(_Tree_node<pair<_GUID const ,weak_ptr<UpdateStore> >,void *> *);
	public:
		~_Tree<_Tmap_traits<_GUID,weak_ptr<UpdateStore>,less<_GUID>,allocator<pair<_GUID const ,weak_ptr<UpdateStore> > >,0> >();
	};

	class _Tree<_Tmap_traits<_GUID,wil::com_ptr_t<UsoSession,wil::err_returncode_policy>,less<_GUID>,allocator<pair<_GUID const ,wil::com_ptr_t<UsoSession,wil::err_returncode_policy> > >,0> >
	{
	protected:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,wil::com_ptr_t<UsoSession,wil::err_returncode_policy> > > > > _Insert_at<pair<_GUID const ,wil::com_ptr_t<UsoSession,wil::err_returncode_policy> > &,_Tree_node<pair<_GUID const ,wil::com_ptr_t<UsoSession,wil::err_returncode_policy> >,void *> *>(bool,_Tree_node<pair<_GUID const ,wil::com_ptr_t<UsoSession,wil::err_returncode_policy> >,void *> *,pair<_GUID const ,wil::com_ptr_t<UsoSession,wil::err_returncode_policy> > &,_Tree_node<pair<_GUID const ,wil::com_ptr_t<UsoSession,wil::err_returncode_policy> >,void *> *);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,wil::com_ptr_t<UsoSession,wil::err_returncode_policy> > > > > _Insert_hint<pair<_GUID const ,wil::com_ptr_t<UsoSession,wil::err_returncode_policy> > &,_Tree_node<pair<_GUID const ,wil::com_ptr_t<UsoSession,wil::err_returncode_policy> >,void *> *>(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,wil::com_ptr_t<UsoSession,wil::err_returncode_policy> > > > >,pair<_GUID const ,wil::com_ptr_t<UsoSession,wil::err_returncode_policy> > &,_Tree_node<pair<_GUID const ,wil::com_ptr_t<UsoSession,wil::err_returncode_policy> >,void *> *);
		pair<_Tree_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,wil::com_ptr_t<UsoSession,wil::err_returncode_policy> > > > >,bool> _Insert_nohint<pair<_GUID const ,wil::com_ptr_t<UsoSession,wil::err_returncode_policy> > &,_Tree_node<pair<_GUID const ,wil::com_ptr_t<UsoSession,wil::err_returncode_policy> >,void *> *>(bool,pair<_GUID const ,wil::com_ptr_t<UsoSession,wil::err_returncode_policy> > &,_Tree_node<pair<_GUID const ,wil::com_ptr_t<UsoSession,wil::err_returncode_policy> >,void *> *);
		void _Destroy_if_node(_Tree_node<pair<_GUID const ,wil::com_ptr_t<UsoSession,wil::err_returncode_policy> >,void *> *);
		void _Erase(_Tree_node<pair<_GUID const ,wil::com_ptr_t<UsoSession,wil::err_returncode_policy> >,void *> *);
	public:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,wil::com_ptr_t<UsoSession,wil::err_returncode_policy> > > > > erase(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,wil::com_ptr_t<UsoSession,wil::err_returncode_policy> > > > >);
		~_Tree<_Tmap_traits<_GUID,wil::com_ptr_t<UsoSession,wil::err_returncode_policy>,less<_GUID>,allocator<pair<_GUID const ,wil::com_ptr_t<UsoSession,wil::err_returncode_policy> > >,0> >();
	};

	class _Tree<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,_variant_t,case_insensitve_less,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t> >,0> >
	{
	protected:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t> > > > _Insert_at<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t>,void *> *>(bool,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t>,void *> *,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t>,void *> *);
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t>,void *> * _Copy_nodes<_Copy_tag>(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t>,void *> *,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t>,void *> *,_Tree<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,_variant_t,case_insensitve_less,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t> >,0> >::_Copy_tag);
		pair<_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t> > > >,bool> _Insert_nohint<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t>,void *> *>(bool,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t>,void *> *);
		void _Destroy_if_node(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t>,void *> *);
		void _Erase(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t>,void *> *);
		void _Tidy();
	};

	class _Tree<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,_variant_t,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t> >,0> >
	{
	protected:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t> > > > _Insert_at<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t>,void *> *>(bool,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t>,void *> *,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t>,void *> *);
		pair<_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t> > > >,bool> _Insert_nohint<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t>,void *> *>(bool,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t>,void *> *);
		void _Destroy_if_node(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t>,void *> *);
		void _Erase(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t>,void *> *);
	public:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t> > > > erase(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t> > > >,_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t> > > >);
		void clear();
	};

	class _Tree<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,int,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> >,0> >
	{
	protected:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> > > > _Insert_at<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int>,void *> *>(bool,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int>,void *> *,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int>,void *> *);
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int>,void *> * _Copy_nodes<_Copy_tag>(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int>,void *> *,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int>,void *> *,_Tree<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,int,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> >,0> >::_Copy_tag);
		pair<_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> > > >,bool> _Insert_nohint<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int>,void *> *>(bool,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int>,void *> *);
		void _Destroy_if_node(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int>,void *> *);
		void _Erase(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int>,void *> *);
		void _Tidy();
	};

	class _Tree<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,shared_ptr<VariantNode>,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> > >,0> >
	{
	protected:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> > > > > _Insert_at<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> > &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> >,void *> *>(bool,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> >,void *> *,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> > &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> >,void *> *);
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> >,void *> * _Copy_nodes<_Copy_tag>(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> >,void *> *,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> >,void *> *,_Tree<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,shared_ptr<VariantNode>,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> > >,0> >::_Copy_tag);
		pair<_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> > > > >,bool> _Insert_nohint<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> > &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> >,void *> *>(bool,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> > &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> >,void *> *);
		void _Destroy_if_node(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> >,void *> *);
		void _Erase(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> >,void *> *);
	public:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> > > > > erase(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> > > > >);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> > > > > erase(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> > > > >,_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> > > > >);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> > > > > find(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		unsigned __int64 erase(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
	};

	class _Tree<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,unsigned long,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long> >,0> >
	{
	protected:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long> > > > _Insert_at<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long>,void *> *>(bool,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long>,void *> *,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long>,void *> *);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long> > > > _Insert_hint<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long>,void *> *>(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long> > > >,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long>,void *> *);
		pair<_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long> > > >,bool> _Insert_nohint<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long>,void *> *>(bool,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long>,void *> *);
		void _Destroy_if_node(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long>,void *> *);
		void _Erase(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long>,void *> *);
	public:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long> > > > erase(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long> > > >,_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long> > > >);
		void clear();
	};

	class _Tree<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,vector<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > >,0> >
	{
	protected:
		void _Erase(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >,void *> *);
	public:
		~_Tree<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,vector<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > >,0> >();
	};

	class _Tree<_Tmap_traits<long,unsigned long,less<long>,allocator<pair<long const ,unsigned long> >,0> >
	{
	protected:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<long const ,unsigned long> > > > _Insert_at<pair<long const ,unsigned long> &,_Tree_node<pair<long const ,unsigned long>,void *> *>(bool,_Tree_node<pair<long const ,unsigned long>,void *> *,pair<long const ,unsigned long> &,_Tree_node<pair<long const ,unsigned long>,void *> *);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<long const ,unsigned long> > > > _Insert_hint<pair<long const ,unsigned long> &,_Tree_node<pair<long const ,unsigned long>,void *> *>(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<long const ,unsigned long> > > >,pair<long const ,unsigned long> &,_Tree_node<pair<long const ,unsigned long>,void *> *);
		pair<_Tree_iterator<_Tree_val<_Tree_simple_types<pair<long const ,unsigned long> > > >,bool> _Insert_nohint<pair<long const ,unsigned long> &,_Tree_node<pair<long const ,unsigned long>,void *> *>(bool,pair<long const ,unsigned long> &,_Tree_node<pair<long const ,unsigned long>,void *> *);
		void _Destroy_if_node(_Tree_node<pair<long const ,unsigned long>,void *> *);
		void _Erase(_Tree_node<pair<long const ,unsigned long>,void *> *);
	public:
		void clear();
	};

	class _Tree<_Tmap_traits<unsigned long,weak_ptr<PowerStateManager>,less<unsigned long>,allocator<pair<unsigned long const ,weak_ptr<PowerStateManager> > >,0> >
	{
	protected:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<unsigned long const ,weak_ptr<PowerStateManager> > > > > _Insert_at<pair<unsigned long const ,weak_ptr<PowerStateManager> > &,_Tree_node<pair<unsigned long const ,weak_ptr<PowerStateManager> >,void *> *>(bool,_Tree_node<pair<unsigned long const ,weak_ptr<PowerStateManager> >,void *> *,pair<unsigned long const ,weak_ptr<PowerStateManager> > &,_Tree_node<pair<unsigned long const ,weak_ptr<PowerStateManager> >,void *> *);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<unsigned long const ,weak_ptr<PowerStateManager> > > > > _Insert_hint<pair<unsigned long const ,weak_ptr<PowerStateManager> > &,_Tree_node<pair<unsigned long const ,weak_ptr<PowerStateManager> >,void *> *>(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<unsigned long const ,weak_ptr<PowerStateManager> > > > >,pair<unsigned long const ,weak_ptr<PowerStateManager> > &,_Tree_node<pair<unsigned long const ,weak_ptr<PowerStateManager> >,void *> *);
		pair<_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<unsigned long const ,weak_ptr<PowerStateManager> > > > >,_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<unsigned long const ,weak_ptr<PowerStateManager> > > > > > _Eqrange<unsigned long>(unsigned long const &);
		pair<_Tree_iterator<_Tree_val<_Tree_simple_types<pair<unsigned long const ,weak_ptr<PowerStateManager> > > > >,bool> _Insert_nohint<pair<unsigned long const ,weak_ptr<PowerStateManager> > &,_Tree_node<pair<unsigned long const ,weak_ptr<PowerStateManager> >,void *> *>(bool,pair<unsigned long const ,weak_ptr<PowerStateManager> > &,_Tree_node<pair<unsigned long const ,weak_ptr<PowerStateManager> >,void *> *);
		void _Destroy_if_node(_Tree_node<pair<unsigned long const ,weak_ptr<PowerStateManager> >,void *> *);
		void _Erase(_Tree_node<pair<unsigned long const ,weak_ptr<PowerStateManager> >,void *> *);
	public:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<unsigned long const ,weak_ptr<PowerStateManager> > > > > erase(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<unsigned long const ,weak_ptr<PowerStateManager> > > > >);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<unsigned long const ,weak_ptr<PowerStateManager> > > > > erase(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<unsigned long const ,weak_ptr<PowerStateManager> > > > >,_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<unsigned long const ,weak_ptr<PowerStateManager> > > > >);
		unsigned __int64 erase(unsigned long const &);
	};

	class _Tree<_Tmap_traits<unsigned short const *,unsigned short const *,less<unsigned short const *>,allocator<pair<unsigned short const * const,unsigned short const *> >,0> >
	{
	protected:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<unsigned short const * const,unsigned short const *> > > > _Insert_at<pair<unsigned short const * const,unsigned short const *> &,_Tree_node<pair<unsigned short const * const,unsigned short const *>,void *> *>(bool,_Tree_node<pair<unsigned short const * const,unsigned short const *>,void *> *,pair<unsigned short const * const,unsigned short const *> &,_Tree_node<pair<unsigned short const * const,unsigned short const *>,void *> *);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<unsigned short const * const,unsigned short const *> > > > _Insert_hint<pair<unsigned short const * const,unsigned short const *> &,_Tree_node<pair<unsigned short const * const,unsigned short const *>,void *> *>(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<unsigned short const * const,unsigned short const *> > > >,pair<unsigned short const * const,unsigned short const *> &,_Tree_node<pair<unsigned short const * const,unsigned short const *>,void *> *);
		pair<_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<unsigned short const * const,unsigned short const *> > > >,_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<unsigned short const * const,unsigned short const *> > > > > _Eqrange<unsigned short const *>(unsigned short const * const &);
		pair<_Tree_iterator<_Tree_val<_Tree_simple_types<pair<unsigned short const * const,unsigned short const *> > > >,bool> _Insert_nohint<pair<unsigned short const * const,unsigned short const *> &,_Tree_node<pair<unsigned short const * const,unsigned short const *>,void *> *>(bool,pair<unsigned short const * const,unsigned short const *> &,_Tree_node<pair<unsigned short const * const,unsigned short const *>,void *> *);
		void _Destroy_if_node(_Tree_node<pair<unsigned short const * const,unsigned short const *>,void *> *);
		void _Erase(_Tree_node<pair<unsigned short const * const,unsigned short const *>,void *> *);
	public:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<unsigned short const * const,unsigned short const *> > > > erase(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<unsigned short const * const,unsigned short const *> > > >);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<unsigned short const * const,unsigned short const *> > > > erase(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<unsigned short const * const,unsigned short const *> > > >,_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<unsigned short const * const,unsigned short const *> > > >);
		unsigned __int64 count(unsigned short const * const &);
		void clear();
	};

	class _Tree<_Tset_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,0> >
	{
	protected:
		_Tree_const_iterator<_Tree_val<_Tree_simple_types<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > _Insert_at<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &,_Not_a_node_tag>(bool,_Tree_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> *,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &,_Not_a_node_tag);
		pair<_Tree_const_iterator<_Tree_val<_Tree_simple_types<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >,bool> _Insert_nohint<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &,_Not_a_node_tag>(bool,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &,_Not_a_node_tag);
		void _Erase(_Tree_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> *);
	public:
		void clear();
	};

	class _Tree<_Tset_traits<shared_ptr<function<void (IUProgressData const &)> >,less<shared_ptr<function<void (IUProgressData const &)> > >,allocator<shared_ptr<function<void (IUProgressData const &)> > >,0> >
	{
	protected:
		_Tree_const_iterator<_Tree_val<_Tree_simple_types<shared_ptr<function<void (IUProgressData const &)> > > > > _Insert_at<shared_ptr<function<void (IUProgressData const &)> > const &,_Not_a_node_tag>(bool,_Tree_node<shared_ptr<function<void (IUProgressData const &)> >,void *> *,shared_ptr<function<void (IUProgressData const &)> > const &,_Not_a_node_tag);
		pair<_Tree_const_iterator<_Tree_val<_Tree_simple_types<shared_ptr<function<void (IUProgressData const &)> > > > >,bool> _Insert_nohint<shared_ptr<function<void (IUProgressData const &)> > const &,_Not_a_node_tag>(bool,shared_ptr<function<void (IUProgressData const &)> > const &,_Not_a_node_tag);
		void _Erase(_Tree_node<shared_ptr<function<void (IUProgressData const &)> >,void *> *);
	public:
		_Tree_const_iterator<_Tree_val<_Tree_simple_types<shared_ptr<function<void (IUProgressData const &)> > > > > erase(_Tree_const_iterator<_Tree_val<_Tree_simple_types<shared_ptr<function<void (IUProgressData const &)> > > > >);
		_Tree_const_iterator<_Tree_val<_Tree_simple_types<shared_ptr<function<void (IUProgressData const &)> > > > > erase(_Tree_const_iterator<_Tree_val<_Tree_simple_types<shared_ptr<function<void (IUProgressData const &)> > > > >,_Tree_const_iterator<_Tree_val<_Tree_simple_types<shared_ptr<function<void (IUProgressData const &)> > > > >);
		void clear();
	};

	class _Tree<_Tset_traits<shared_ptr<function<void (_WNF_PO_COMPOSITE_BATTERY_PAYLOAD const &)> >,less<shared_ptr<function<void (_WNF_PO_COMPOSITE_BATTERY_PAYLOAD const &)> > >,allocator<shared_ptr<function<void (_WNF_PO_COMPOSITE_BATTERY_PAYLOAD const &)> > >,0> >
	{
	protected:
		void _Erase(_Tree_node<shared_ptr<function<void (_WNF_PO_COMPOSITE_BATTERY_PAYLOAD const &)> >,void *> *);
	};

	class _Tree<_Tset_traits<shared_ptr<function<void (_WNF_SCREENONSTUDY_SESSION_DATA const &)> >,less<shared_ptr<function<void (_WNF_SCREENONSTUDY_SESSION_DATA const &)> > >,allocator<shared_ptr<function<void (_WNF_SCREENONSTUDY_SESSION_DATA const &)> > >,0> >
	{
	protected:
		_Tree_const_iterator<_Tree_val<_Tree_simple_types<shared_ptr<function<void (_WNF_SCREENONSTUDY_SESSION_DATA const &)> > > > > _Insert_at<shared_ptr<function<void (_WNF_SCREENONSTUDY_SESSION_DATA const &)> > const &,_Not_a_node_tag>(bool,_Tree_node<shared_ptr<function<void (_WNF_SCREENONSTUDY_SESSION_DATA const &)> >,void *> *,shared_ptr<function<void (_WNF_SCREENONSTUDY_SESSION_DATA const &)> > const &,_Not_a_node_tag);
		pair<_Tree_const_iterator<_Tree_val<_Tree_simple_types<shared_ptr<function<void (_WNF_SCREENONSTUDY_SESSION_DATA const &)> > > > >,bool> _Insert_nohint<shared_ptr<function<void (_WNF_SCREENONSTUDY_SESSION_DATA const &)> > const &,_Not_a_node_tag>(bool,shared_ptr<function<void (_WNF_SCREENONSTUDY_SESSION_DATA const &)> > const &,_Not_a_node_tag);
		void _Erase(_Tree_node<shared_ptr<function<void (_WNF_SCREENONSTUDY_SESSION_DATA const &)> >,void *> *);
	};

	class _Tree<_Tset_traits<shared_ptr<function<void (char const &)> >,less<shared_ptr<function<void (char const &)> > >,allocator<shared_ptr<function<void (char const &)> > >,0> >
	{
	protected:
		void _Erase(_Tree_node<shared_ptr<function<void (char const &)> >,void *> *);
	};

	struct _Tree_comp_alloc<_Tmap_traits<UpdateIdentity,shared_ptr<UpdateNode>,less<UpdateIdentity>,allocator<pair<UpdateIdentity const ,shared_ptr<UpdateNode> > >,0> >
	{
		_Tree_node<pair<UpdateIdentity const ,shared_ptr<UpdateNode> >,void *> * _Buyheadnode();
		_Tree_node<pair<UpdateIdentity const ,shared_ptr<UpdateNode> >,void *> * _Buynode0();
		void _Freenode0(_Tree_node<pair<UpdateIdentity const ,shared_ptr<UpdateNode> >,void *> *);
	};

	struct _Tree_comp_alloc<_Tmap_traits<_GUID,ATL::CComPtr<IUsoUpdateCollectionInternal>,less<_GUID>,allocator<pair<_GUID const ,ATL::CComPtr<IUsoUpdateCollectionInternal> > >,0> >
	{
		_Tree_node<pair<_GUID const ,ATL::CComPtr<IUsoUpdateCollectionInternal> >,void *> * _Buyheadnode();
		_Tree_node<pair<_GUID const ,ATL::CComPtr<IUsoUpdateCollectionInternal> >,void *> * _Buynode0();
		void _Freenode0(_Tree_node<pair<_GUID const ,ATL::CComPtr<IUsoUpdateCollectionInternal> >,void *> *);
	};

	struct _Tree_comp_alloc<_Tmap_traits<_GUID,CUpdateObj *,less<_GUID>,allocator<pair<_GUID const ,CUpdateObj *> >,0> >
	{
		_Tree_node<pair<_GUID const ,CUpdateObj *>,void *> * _Buyheadnode();
		_Tree_node<pair<_GUID const ,CUpdateObj *>,void *> * _Buynode0();
		void _Freenode0(_Tree_node<pair<_GUID const ,CUpdateObj *>,void *> *);
	};

	struct _Tree_comp_alloc<_Tmap_traits<_GUID,weak_ptr<UpdateStore>,less<_GUID>,allocator<pair<_GUID const ,weak_ptr<UpdateStore> > >,0> >
	{
		_Tree_node<pair<_GUID const ,weak_ptr<UpdateStore> >,void *> * _Buyheadnode();
		_Tree_node<pair<_GUID const ,weak_ptr<UpdateStore> >,void *> * _Buynode0();
		void _Freenode0(_Tree_node<pair<_GUID const ,weak_ptr<UpdateStore> >,void *> *);
	};

	struct _Tree_comp_alloc<_Tmap_traits<_GUID,wil::com_ptr_t<UsoSession,wil::err_returncode_policy>,less<_GUID>,allocator<pair<_GUID const ,wil::com_ptr_t<UsoSession,wil::err_returncode_policy> > >,0> >
	{
		_Tree_node<pair<_GUID const ,wil::com_ptr_t<UsoSession,wil::err_returncode_policy> >,void *> * _Buyheadnode();
		_Tree_node<pair<_GUID const ,wil::com_ptr_t<UsoSession,wil::err_returncode_policy> >,void *> * _Buynode0();
		void _Freenode0(_Tree_node<pair<_GUID const ,wil::com_ptr_t<UsoSession,wil::err_returncode_policy> >,void *> *);
	};

	struct _Tree_comp_alloc<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,_variant_t,case_insensitve_less,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t> >,0> >
	{
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t>,void *> * _Buyheadnode();
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t>,void *> * _Buynode0();
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t>,void *> * _Buynode<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t> &>(pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t> &);
		void _Freenode0(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t>,void *> *);
		~_Tree_comp_alloc<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,_variant_t,case_insensitve_less,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t> >,0> >();
	};

	struct _Tree_comp_alloc<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,_variant_t,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t> >,0> >
	{
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t>,void *> * _Buyheadnode();
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t>,void *> * _Buynode0();
		void _Freenode0(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t>,void *> *);
	};

	struct _Tree_comp_alloc<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,int,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> >,0> >
	{
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int>,void *> * _Buyheadnode();
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int>,void *> * _Buynode0();
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int>,void *> * _Buynode<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> &>(pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> &);
		void _Freenode0(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int>,void *> *);
		~_Tree_comp_alloc<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,int,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> >,0> >();
	};

	struct _Tree_comp_alloc<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,shared_ptr<VariantNode>,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> > >,0> >
	{
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> >,void *> * _Buyheadnode();
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> >,void *> * _Buynode0();
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> >,void *> * _Buynode<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> > &>(pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> > &);
		void _Freenode0(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> >,void *> *);
	};

	struct _Tree_comp_alloc<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,unsigned long,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long> >,0> >
	{
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long>,void *> * _Buyheadnode();
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long>,void *> * _Buynode0();
		void _Freenode0(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long>,void *> *);
	};

	struct _Tree_comp_alloc<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,vector<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > >,0> >
	{
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >,void *> * _Buyheadnode();
	};

	struct _Tree_comp_alloc<_Tmap_traits<long,unsigned long,less<long>,allocator<pair<long const ,unsigned long> >,0> >
	{
		_Tree_node<pair<long const ,unsigned long>,void *> * _Buyheadnode();
		_Tree_node<pair<long const ,unsigned long>,void *> * _Buynode0();
		void _Freenode0(_Tree_node<pair<long const ,unsigned long>,void *> *);
	};

	struct _Tree_comp_alloc<_Tmap_traits<unsigned long,weak_ptr<PowerStateManager>,less<unsigned long>,allocator<pair<unsigned long const ,weak_ptr<PowerStateManager> > >,0> >
	{
		_Tree_node<pair<unsigned long const ,weak_ptr<PowerStateManager> >,void *> * _Buyheadnode();
		_Tree_node<pair<unsigned long const ,weak_ptr<PowerStateManager> >,void *> * _Buynode0();
		void _Freenode0(_Tree_node<pair<unsigned long const ,weak_ptr<PowerStateManager> >,void *> *);
	};

	struct _Tree_comp_alloc<_Tmap_traits<unsigned short const *,unsigned short const *,less<unsigned short const *>,allocator<pair<unsigned short const * const,unsigned short const *> >,0> >
	{
		_Tree_node<pair<unsigned short const * const,unsigned short const *>,void *> * _Buyheadnode();
		_Tree_node<pair<unsigned short const * const,unsigned short const *>,void *> * _Buynode0();
		void _Freenode0(_Tree_node<pair<unsigned short const * const,unsigned short const *>,void *> *);
	};

	struct _Tree_comp_alloc<_Tset_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,0> >
	{
		_Tree_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> * _Buyheadnode();
		_Tree_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> * _Buynode0();
		_Tree_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> * _Buynode<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &>(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		void _Freenode0(_Tree_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> *);
	};

	struct _Tree_comp_alloc<_Tset_traits<shared_ptr<function<void (IUProgressData const &)> >,less<shared_ptr<function<void (IUProgressData const &)> > >,allocator<shared_ptr<function<void (IUProgressData const &)> > >,0> >
	{
		_Tree_node<shared_ptr<function<void (IUProgressData const &)> >,void *> * _Buyheadnode();
		_Tree_node<shared_ptr<function<void (IUProgressData const &)> >,void *> * _Buynode0();
		_Tree_node<shared_ptr<function<void (IUProgressData const &)> >,void *> * _Buynode<shared_ptr<function<void (IUProgressData const &)> > const &>(shared_ptr<function<void (IUProgressData const &)> > const &);
		void _Freenode0(_Tree_node<shared_ptr<function<void (IUProgressData const &)> >,void *> *);
	};

	struct _Tree_comp_alloc<_Tset_traits<shared_ptr<function<void (_WNF_PO_COMPOSITE_BATTERY_PAYLOAD const &)> >,less<shared_ptr<function<void (_WNF_PO_COMPOSITE_BATTERY_PAYLOAD const &)> > >,allocator<shared_ptr<function<void (_WNF_PO_COMPOSITE_BATTERY_PAYLOAD const &)> > >,0> >
	{
		_Tree_node<shared_ptr<function<void (_WNF_PO_COMPOSITE_BATTERY_PAYLOAD const &)> >,void *> * _Buyheadnode();
	};

	struct _Tree_comp_alloc<_Tset_traits<shared_ptr<function<void (_WNF_SCREENONSTUDY_SESSION_DATA const &)> >,less<shared_ptr<function<void (_WNF_SCREENONSTUDY_SESSION_DATA const &)> > >,allocator<shared_ptr<function<void (_WNF_SCREENONSTUDY_SESSION_DATA const &)> > >,0> >
	{
		_Tree_node<shared_ptr<function<void (_WNF_SCREENONSTUDY_SESSION_DATA const &)> >,void *> * _Buyheadnode();
		_Tree_node<shared_ptr<function<void (_WNF_SCREENONSTUDY_SESSION_DATA const &)> >,void *> * _Buynode0();
		_Tree_node<shared_ptr<function<void (_WNF_SCREENONSTUDY_SESSION_DATA const &)> >,void *> * _Buynode<shared_ptr<function<void (_WNF_SCREENONSTUDY_SESSION_DATA const &)> > const &>(shared_ptr<function<void (_WNF_SCREENONSTUDY_SESSION_DATA const &)> > const &);
		void _Freenode0(_Tree_node<shared_ptr<function<void (_WNF_SCREENONSTUDY_SESSION_DATA const &)> >,void *> *);
	};

	struct _Tree_comp_alloc<_Tset_traits<shared_ptr<function<void (char const &)> >,less<shared_ptr<function<void (char const &)> > >,allocator<shared_ptr<function<void (char const &)> > >,0> >
	{
		_Tree_node<shared_ptr<function<void (char const &)> >,void *> * _Buyheadnode();
	};

	struct _Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<UpdateIdentity const ,shared_ptr<UpdateNode> > > > >
	{
		_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<UpdateIdentity const ,shared_ptr<UpdateNode> > > > > & operator--();
	};

	struct _Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,ATL::CComPtr<IUsoUpdateCollectionInternal> > > > >
	{
		_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,ATL::CComPtr<IUsoUpdateCollectionInternal> > > > > & operator--();
	};

	struct _Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,weak_ptr<UpdateStore> > > > >
	{
		_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,weak_ptr<UpdateStore> > > > > & operator--();
	};

	struct _Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,wil::com_ptr_t<UsoSession,wil::err_returncode_policy> > > > >
	{
		_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,wil::com_ptr_t<UsoSession,wil::err_returncode_policy> > > > > & operator--();
	};

	struct _Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t> > > >
	{
		_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t> > > > & operator++();
	};

	struct _Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long> > > >
	{
		_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long> > > > & operator--();
	};

	struct _Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<long const ,unsigned long> > > >
	{
		_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<long const ,unsigned long> > > > & operator--();
	};

	struct _Tree_unchecked_const_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,CUpdateObj *> > >,_Iterator_base0>
	{
		_Tree_unchecked_const_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,CUpdateObj *> > >,_Iterator_base0> & operator--();
	};

	struct _Tree_unchecked_const_iterator<_Tree_val<_Tree_simple_types<pair<unsigned long const ,weak_ptr<PowerStateManager> > > >,_Iterator_base0>
	{
		_Tree_unchecked_const_iterator<_Tree_val<_Tree_simple_types<pair<unsigned long const ,weak_ptr<PowerStateManager> > > >,_Iterator_base0> & operator--();
	};

	struct _Tree_unchecked_const_iterator<_Tree_val<_Tree_simple_types<pair<unsigned short const * const,unsigned short const *> > >,_Iterator_base0>
	{
		_Tree_unchecked_const_iterator<_Tree_val<_Tree_simple_types<pair<unsigned short const * const,unsigned short const *> > >,_Iterator_base0> & operator--();
	};

	struct _Tree_unchecked_const_iterator<_Tree_val<_Tree_simple_types<shared_ptr<function<void (IUProgressData const &)> > > >,_Iterator_base0>
	{
		_Tree_unchecked_const_iterator<_Tree_val<_Tree_simple_types<shared_ptr<function<void (IUProgressData const &)> > > >,_Iterator_base0> & operator--();
	};

	struct _Tree_val<_Tree_simple_types<pair<UpdateIdentity const ,shared_ptr<UpdateNode> > > >
	{
		_Tree_node<pair<UpdateIdentity const ,shared_ptr<UpdateNode> >,void *> * _Extract(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<UpdateIdentity const ,shared_ptr<UpdateNode> > > > >);
	};

	struct _Tree_val<_Tree_simple_types<pair<_GUID const ,ATL::CComPtr<IUsoUpdateCollectionInternal> > > >
	{
		_Tree_node<pair<_GUID const ,ATL::CComPtr<IUsoUpdateCollectionInternal> >,void *> * _Extract(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,ATL::CComPtr<IUsoUpdateCollectionInternal> > > > >);
	};

	struct _Tree_val<_Tree_simple_types<pair<_GUID const ,CUpdateObj *> > >
	{
		_Tree_node<pair<_GUID const ,CUpdateObj *>,void *> * _Extract(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,CUpdateObj *> > > >);
	};

	struct _Tree_val<_Tree_simple_types<pair<_GUID const ,wil::com_ptr_t<UsoSession,wil::err_returncode_policy> > > >
	{
		_Tree_node<pair<_GUID const ,wil::com_ptr_t<UsoSession,wil::err_returncode_policy> >,void *> * _Extract(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,wil::com_ptr_t<UsoSession,wil::err_returncode_policy> > > > >);
	};

	struct _Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t> > >
	{
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t>,void *> * _Extract(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t> > > >);
	};

	struct _Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> > > >
	{
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> >,void *> * _Extract(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> > > > >);
	};

	struct _Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long> > >
	{
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long>,void *> * _Extract(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long> > > >);
	};

	struct _Tree_val<_Tree_simple_types<pair<unsigned long const ,weak_ptr<PowerStateManager> > > >
	{
		_Tree_node<pair<unsigned long const ,weak_ptr<PowerStateManager> >,void *> * _Extract(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<unsigned long const ,weak_ptr<PowerStateManager> > > > >);
	};

	struct _Tree_val<_Tree_simple_types<pair<unsigned short const * const,unsigned short const *> > >
	{
		_Tree_node<pair<unsigned short const * const,unsigned short const *>,void *> * _Extract(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<unsigned short const * const,unsigned short const *> > > >);
	};

	struct _Tree_val<_Tree_simple_types<shared_ptr<function<void (IUProgressData const &)> > > >
	{
		_Tree_node<shared_ptr<function<void (IUProgressData const &)> >,void *> * _Extract(_Tree_const_iterator<_Tree_val<_Tree_simple_types<shared_ptr<function<void (IUProgressData const &)> > > > >);
	};

	struct _Uninitialized_backout_al<_escalationObject *,allocator<_escalationObject> >
	{
		~_Uninitialized_backout_al<_escalationObject *,allocator<_escalationObject> >();
	};

	struct _Vb_iterator<_Wrap_alloc<allocator<unsigned int> > >
	{
		_Vb_iterator<_Wrap_alloc<allocator<unsigned int> > > operator+(__int64);
	};

	struct _Vb_val<allocator<bool> >
	{
		~_Vb_val<allocator<bool> >();
	};

	struct _Vector_alloc<_Vec_base_types<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >
	{
		allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > & _Getal();
	};

	struct _Vector_alloc<_Vec_base_types<unsigned char,allocator<unsigned char> > >
	{
		allocator<unsigned char> & _Getal();
	};

	struct allocator<DetectionHandler::DetectionResult>
	{
		void deallocate(DetectionHandler::DetectionResult * const,unsigned __int64);
	};

	struct allocator<DownloadHandler::UsoDownloadJob>
	{
		void deallocate(DownloadHandler::UsoDownloadJob * const,unsigned __int64);
	};

	struct allocator<PersistObject *>
	{
		void deallocate(PersistObject * * const,unsigned __int64);
	};

	struct allocator<_GUID>
	{
		void deallocate(_GUID * const,unsigned __int64);
	};

	struct allocator<_List_node<InstallationHandler::UsoInstallList,void *> >
	{
		void deallocate(_List_node<InstallationHandler::UsoInstallList,void *> * const,unsigned __int64);
	};

	struct allocator<_List_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> >
	{
		void deallocate(_List_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> * const,unsigned __int64);
	};

	struct allocator<_Loop_vals_t>
	{
		void deallocate(_Loop_vals_t * const,unsigned __int64);
	};

	struct allocator<_Tgt_state_t<unsigned short const *>::_Grp_t>
	{
		void deallocate(_Tgt_state_t<unsigned short const *>::_Grp_t * const,unsigned __int64);
	};

	struct allocator<_Tree_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> >
	{
		void deallocate(_Tree_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> * const,unsigned __int64);
	};

	struct allocator<_Tree_node<pair<UpdateIdentity const ,shared_ptr<UpdateNode> >,void *> >
	{
		void deallocate(_Tree_node<pair<UpdateIdentity const ,shared_ptr<UpdateNode> >,void *> * const,unsigned __int64);
	};

	struct allocator<_Tree_node<pair<_GUID const ,ATL::CComPtr<IUsoUpdateCollectionInternal> >,void *> >
	{
		void deallocate(_Tree_node<pair<_GUID const ,ATL::CComPtr<IUsoUpdateCollectionInternal> >,void *> * const,unsigned __int64);
	};

	struct allocator<_Tree_node<pair<_GUID const ,CUpdateObj *>,void *> >
	{
		void deallocate(_Tree_node<pair<_GUID const ,CUpdateObj *>,void *> * const,unsigned __int64);
	};

	struct allocator<_Tree_node<pair<_GUID const ,weak_ptr<UpdateStore> >,void *> >
	{
		void deallocate(_Tree_node<pair<_GUID const ,weak_ptr<UpdateStore> >,void *> * const,unsigned __int64);
	};

	struct allocator<_Tree_node<pair<_GUID const ,wil::com_ptr_t<UsoSession,wil::err_returncode_policy> >,void *> >
	{
		void deallocate(_Tree_node<pair<_GUID const ,wil::com_ptr_t<UsoSession,wil::err_returncode_policy> >,void *> * const,unsigned __int64);
	};

	struct allocator<_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t>,void *> >
	{
		void deallocate(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t>,void *> * const,unsigned __int64);
	};

	struct allocator<_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int>,void *> >
	{
		void deallocate(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int>,void *> * const,unsigned __int64);
	};

	struct allocator<_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> >,void *> >
	{
		void deallocate(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> >,void *> * const,unsigned __int64);
	};

	struct allocator<_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long>,void *> >
	{
		void deallocate(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long>,void *> * const,unsigned __int64);
	};

	struct allocator<_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >,void *> >
	{
		void deallocate(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >,void *> * const,unsigned __int64);
	};

	struct allocator<_Tree_node<pair<long const ,unsigned long>,void *> >
	{
		void deallocate(_Tree_node<pair<long const ,unsigned long>,void *> * const,unsigned __int64);
	};

	struct allocator<_Tree_node<pair<unsigned long const ,weak_ptr<PowerStateManager> >,void *> >
	{
		void deallocate(_Tree_node<pair<unsigned long const ,weak_ptr<PowerStateManager> >,void *> * const,unsigned __int64);
	};

	struct allocator<_Tree_node<pair<unsigned short const * const,unsigned short const *>,void *> >
	{
		void deallocate(_Tree_node<pair<unsigned short const * const,unsigned short const *>,void *> * const,unsigned __int64);
	};

	struct allocator<_Tree_node<shared_ptr<function<void (IUProgressData const &)> >,void *> >
	{
		void deallocate(_Tree_node<shared_ptr<function<void (IUProgressData const &)> >,void *> * const,unsigned __int64);
	};

	struct allocator<_Tree_node<shared_ptr<function<void (_WNF_PO_COMPOSITE_BATTERY_PAYLOAD const &)> >,void *> >
	{
		void deallocate(_Tree_node<shared_ptr<function<void (_WNF_PO_COMPOSITE_BATTERY_PAYLOAD const &)> >,void *> * const,unsigned __int64);
	};

	struct allocator<_Tree_node<shared_ptr<function<void (_WNF_SCREENONSTUDY_SESSION_DATA const &)> >,void *> >
	{
		void deallocate(_Tree_node<shared_ptr<function<void (_WNF_SCREENONSTUDY_SESSION_DATA const &)> >,void *> * const,unsigned __int64);
	};

	struct allocator<_Tree_node<shared_ptr<function<void (char const &)> >,void *> >
	{
		void deallocate(_Tree_node<shared_ptr<function<void (char const &)> >,void *> * const,unsigned __int64);
	};

	struct allocator<_WIN32_FIND_DATAW>
	{
		_WIN32_FIND_DATAW * allocate(unsigned __int64);
		void deallocate(_WIN32_FIND_DATAW * const,unsigned __int64);
	};

	struct allocator<_escalationObject>
	{
		void deallocate(_escalationObject * const,unsigned __int64);
	};

	struct allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >
	{
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > * allocate(unsigned __int64);
		void deallocate(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > * const,unsigned __int64);
	};

	struct allocator<long>
	{
		long * allocate(unsigned __int64);
		void deallocate(long * const,unsigned __int64);
	};

	struct allocator<unsigned char>
	{
		void deallocate(unsigned char * const,unsigned __int64);
	};

	struct allocator<unsigned int>
	{
		void deallocate(unsigned int * const,unsigned __int64);
	};

	struct allocator<unsigned short const *>
	{
		void deallocate(unsigned short const * * const,unsigned __int64);
	};

	struct allocator<unsigned short>
	{
		unsigned short * allocate(unsigned __int64);
	};

	struct allocator<void *>
	{
		void deallocate(void * * const,unsigned __int64);
	};

	struct allocator<wil::com_ptr_t<IUsoUpdate,wil::err_returncode_policy> >
	{
		void deallocate(wil::com_ptr_t<IUsoUpdate,wil::err_returncode_policy> * const,unsigned __int64);
	};

	struct allocator<wil::com_ptr_t<IUsoUpdateHistoryEntry,wil::err_returncode_policy> >
	{
		void deallocate(wil::com_ptr_t<IUsoUpdateHistoryEntry,wil::err_returncode_policy> * const,unsigned __int64);
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

	struct bad_cast
	{
		bad_cast();
		bad_cast(bad_cast const &);
		virtual ~bad_cast();
	};

	class basic_filebuf<unsigned short,char_traits<unsigned short> >
	{
	protected:
		bool _Endwrite();
		virtual __int64 xsgetn(unsigned short *,__int64);
		virtual __int64 xsputn(unsigned short const *,__int64);
		virtual basic_streambuf<unsigned short,char_traits<unsigned short> > * setbuf(unsigned short *,__int64);
		virtual fpos<_Mbstatet> seekoff(__int64,int,int);
		virtual fpos<_Mbstatet> seekpos(fpos<_Mbstatet>,int);
		virtual int sync();
		virtual unsigned short overflow(unsigned short);
		virtual unsigned short pbackfail(unsigned short);
		virtual unsigned short uflow();
		virtual unsigned short underflow();
		virtual void imbue(locale const &);
	public:
		virtual void _Lock();
		virtual void _Unlock();
		virtual ~basic_filebuf<unsigned short,char_traits<unsigned short> >();
	};

	namespace basic_ostream<unsigned short,char_traits<unsigned short> >
	{
		struct _Sentry_base
		{
			~_Sentry_base();
		};

		struct sentry
		{
			sentry(basic_ostream<unsigned short,char_traits<unsigned short> > &);
			~sentry();
		};

	};

	struct basic_ostringstream<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >
	{
		basic_ostringstream<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &,int);
		basic_ostringstream<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >(int);
		virtual ~basic_ostringstream<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >();
	};

	struct basic_regex<unsigned short,regex_traits<unsigned short> >
	{
		basic_regex<unsigned short,regex_traits<unsigned short> >(unsigned short const *,regex_constants::syntax_option_type);
		~basic_regex<unsigned short,regex_traits<unsigned short> >();
	};

	class basic_streambuf<unsigned short,char_traits<unsigned short> >
	{
	protected:
		virtual __int64 showmanyc();
		virtual __int64 xsgetn(unsigned short *,__int64);
		virtual __int64 xsputn(unsigned short const *,__int64);
		virtual basic_streambuf<unsigned short,char_traits<unsigned short> > * setbuf(unsigned short *,__int64);
		virtual int sync();
		virtual unsigned short uflow();
		virtual void imbue(locale const &);
	public:
		virtual void _Lock();
		virtual void _Unlock();
	};

	struct basic_string<char,char_traits<char>,allocator<char> >
	{
		basic_string<char,char_traits<char>,allocator<char> > & assign(char const * const);
		basic_string<char,char_traits<char>,allocator<char> > substr(unsigned __int64,unsigned __int64);
		basic_string<char,char_traits<char>,allocator<char> >(char const * const);
		static void _Xlen();
		unsigned __int64 find(char const * const,unsigned __int64);
		~basic_string<char,char_traits<char>,allocator<char> >();
	};

	struct basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >
	{
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & append(unsigned __int64,unsigned short);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & append(unsigned short const * const,unsigned __int64);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & assign(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &,unsigned __int64,unsigned __int64);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & assign(unsigned short const * const);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & assign(unsigned short const * const,unsigned __int64);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & insert(unsigned __int64,unsigned short const * const);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & operator=(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		int compare(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		static void _Xlen();
		void _Become_small();
		void _Construct_lv_contents(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		void _Tidy_deallocate();
		~basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >();
	};

	class basic_stringbuf<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >
	{
	protected:
		virtual fpos<_Mbstatet> seekoff(__int64,int,int);
		virtual fpos<_Mbstatet> seekpos(fpos<_Mbstatet>,int);
		virtual unsigned short overflow(unsigned short);
		virtual unsigned short pbackfail(unsigned short);
		virtual unsigned short underflow();
		void _Init(unsigned short const *,unsigned __int64,int);
		void _Tidy();
	public:
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > str();
		basic_stringbuf<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &,int);
	};

	struct basic_stringstream<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >
	{
		basic_stringstream<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >(int);
		virtual ~basic_stringstream<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >();
	};

	class collate<unsigned short>
	{
	protected:
		virtual basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > do_transform(unsigned short const *,unsigned short const *);
		virtual int do_compare(unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *);
		virtual long do_hash(unsigned short const *,unsigned short const *);
	public:
		static unsigned __int64 _Getcat(locale::facet const * *,locale const *);
	};

	struct exception
	{
		exception(exception const &);
		virtual char const * what();
	};

	struct function<long (unsigned short const *,unsigned short const *)>
	{
		~function<long (unsigned short const *,unsigned short const *)>();
	};

	struct function<void (IUProgressData const &)>
	{
		~function<void (IUProgressData const &)>();
	};

	struct function<void (_WNF_SCREENONSTUDY_SESSION_DATA const &)>
	{
		~function<void (_WNF_SCREENONSTUDY_SESSION_DATA const &)>();
	};

	struct list<InstallationHandler::UsoInstallList,allocator<InstallationHandler::UsoInstallList> >
	{
		void clear();
		~list<InstallationHandler::UsoInstallList,allocator<InstallationHandler::UsoInstallList> >();
	};

	struct list<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >
	{
		~list<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >();
	};

	struct locale
	{
		struct facet
		{
			virtual _Facet_base * _Decref();
			virtual void _Incref();
		};

		basic_string<char,char_traits<char>,allocator<char> > name();
		~locale();
	};

	struct map<UpdateIdentity,shared_ptr<UpdateNode>,less<UpdateIdentity>,allocator<pair<UpdateIdentity const ,shared_ptr<UpdateNode> > > >
	{
		~map<UpdateIdentity,shared_ptr<UpdateNode>,less<UpdateIdentity>,allocator<pair<UpdateIdentity const ,shared_ptr<UpdateNode> > > >();
	};

	struct map<_GUID,ATL::CComPtr<IUsoUpdateCollectionInternal>,less<_GUID>,allocator<pair<_GUID const ,ATL::CComPtr<IUsoUpdateCollectionInternal> > > >
	{
		ATL::CComPtr<IUsoUpdateCollectionInternal> & operator[](_GUID const &);
	};

	struct map<_GUID,wil::com_ptr_t<UsoSession,wil::err_returncode_policy>,less<_GUID>,allocator<pair<_GUID const ,wil::com_ptr_t<UsoSession,wil::err_returncode_policy> > > >
	{
		wil::com_ptr_t<UsoSession,wil::err_returncode_policy> & operator[](_GUID const &);
	};

	struct map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,_variant_t,case_insensitve_less,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t> > >
	{
		~map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,_variant_t,case_insensitve_less,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t> > >();
	};

	struct map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,_variant_t,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t> > >
	{
		~map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,_variant_t,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t> > >();
	};

	struct map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,int,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> > >
	{
		~map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,int,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> > >();
	};

	struct map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,shared_ptr<VariantNode>,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> > > >
	{
		map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,shared_ptr<VariantNode>,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> > > >();
		~map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,shared_ptr<VariantNode>,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> > > >();
	};

	struct map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,unsigned long,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long> > >
	{
		~map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,unsigned long,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long> > >();
	};

	struct map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,vector<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > > >
	{
		~map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,vector<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > > >();
	};

	struct map<long,unsigned long,less<long>,allocator<pair<long const ,unsigned long> > >
	{
		~map<long,unsigned long,less<long>,allocator<pair<long const ,unsigned long> > >();
	};

	struct map<unsigned short const *,unsigned short const *,less<unsigned short const *>,allocator<pair<unsigned short const * const,unsigned short const *> > >
	{
		~map<unsigned short const *,unsigned short const *,less<unsigned short const *>,allocator<pair<unsigned short const * const,unsigned short const *> > >();
	};

	struct pair<UpdateIdentity,shared_ptr<UpdateNode> >
	{
		~pair<UpdateIdentity,shared_ptr<UpdateNode> >();
	};

	struct pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,_variant_t>
	{
		~pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,_variant_t>();
	};

	struct pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,int>
	{
		~pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,int>();
	};

	struct pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,shared_ptr<VariantNode> >
	{
		~pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,shared_ptr<VariantNode> >();
	};

	struct regex_traits<unsigned short>
	{
		~regex_traits<unsigned short>();
	};

	class shared_ptr<PowerStateManager>
	{
		void _Setp<PowerStateManager>(PowerStateManager *,integral_constant<bool,0>);
	public:
		~shared_ptr<PowerStateManager>();
	};

	class shared_ptr<UpdateEscalationManager>
	{
		void _Setp<UpdateEscalationManager>(UpdateEscalationManager *,integral_constant<bool,0>);
	};

	class shared_ptr<UpdateNode>
	{
		void _Setp<UpdateNode>(UpdateNode *,integral_constant<bool,0>);
	public:
		~shared_ptr<UpdateNode>();
	};

	struct shared_ptr<UpdateSessionManager>
	{
		~shared_ptr<UpdateSessionManager>();
	};

	struct shared_ptr<UpdateStateEngine>
	{
		~shared_ptr<UpdateStateEngine>();
	};

	struct shared_ptr<UpdateStore>
	{
		~shared_ptr<UpdateStore>();
	};

	class shared_ptr<VariantNode>
	{
		void _Setp<VariantNode>(VariantNode *,integral_constant<bool,0>);
	public:
		~shared_ptr<VariantNode>();
	};

	class shared_ptr<function<void (IUProgressData const &)> >
	{
		void _Setp<function<void (IUProgressData const &)> >(function<void (IUProgressData const &)> *,integral_constant<bool,0>);
	public:
		shared_ptr<function<void (IUProgressData const &)> > & operator=(shared_ptr<function<void (IUProgressData const &)> > const &);
		~shared_ptr<function<void (IUProgressData const &)> >();
	};

	class shared_ptr<function<void (_WNF_SCREENONSTUDY_SESSION_DATA const &)> >
	{
		void _Setp<function<void (_WNF_SCREENONSTUDY_SESSION_DATA const &)> >(function<void (_WNF_SCREENONSTUDY_SESSION_DATA const &)> *,integral_constant<bool,0>);
	public:
		~shared_ptr<function<void (_WNF_SCREENONSTUDY_SESSION_DATA const &)> >();
	};

	class shared_ptr<unsigned char>
	{
		void _Setp<unsigned char>(unsigned char *,integral_constant<bool,0>);
	public:
		shared_ptr<unsigned char> & operator=(shared_ptr<unsigned char> const &);
		~shared_ptr<unsigned char>();
	};

	struct thread
	{
		~thread();
	};

	struct unique_ptr<CUpdateCspStore,default_delete<CUpdateCspStore> >
	{
		~unique_ptr<CUpdateCspStore,default_delete<CUpdateCspStore> >();
	};

	struct unique_ptr<TraceLoggingCorrelationVector,default_delete<TraceLoggingCorrelationVector> >
	{
		~unique_ptr<TraceLoggingCorrelationVector,default_delete<TraceLoggingCorrelationVector> >();
	};

	struct unique_ptr<UpdatePolicyHelper,default_delete<UpdatePolicyHelper> >
	{
		~unique_ptr<UpdatePolicyHelper,default_delete<UpdatePolicyHelper> >();
	};

	struct unique_ptr<_Facet_base,default_delete<_Facet_base> >
	{
		~unique_ptr<_Facet_base,default_delete<_Facet_base> >();
	};

	struct unique_ptr<char [0],default_delete<char [0]> >
	{
		~unique_ptr<char [0],default_delete<char [0]> >();
	};

	struct unique_ptr<char,default_delete<char> >
	{
		~unique_ptr<char,default_delete<char> >();
	};

	struct unique_ptr<unsigned char [0],default_delete<unsigned char [0]> >
	{
		~unique_ptr<unsigned char [0],default_delete<unsigned char [0]> >();
	};

	struct unique_ptr<unsigned short [0],default_delete<unsigned short [0]> >
	{
		~unique_ptr<unsigned short [0],default_delete<unsigned short [0]> >();
	};

	struct unique_ptr<void *,WnfSubscriberT<IUProgressData>::HandleDeleter>
	{
		~unique_ptr<void *,WnfSubscriberT<IUProgressData>::HandleDeleter>();
	};

	struct unique_ptr<void *,WnfSubscriberT<_WNF_PO_COMPOSITE_BATTERY_PAYLOAD>::HandleDeleter>
	{
		~unique_ptr<void *,WnfSubscriberT<_WNF_PO_COMPOSITE_BATTERY_PAYLOAD>::HandleDeleter>();
	};

	struct unique_ptr<void *,WnfSubscriberT<_WNF_SCREENONSTUDY_SESSION_DATA>::HandleDeleter>
	{
		~unique_ptr<void *,WnfSubscriberT<_WNF_SCREENONSTUDY_SESSION_DATA>::HandleDeleter>();
	};

	struct unique_ptr<void *,WnfSubscriberT<char>::HandleDeleter>
	{
		~unique_ptr<void *,WnfSubscriberT<char>::HandleDeleter>();
	};

	class vector<DetectionHandler::DetectionResult,allocator<DetectionHandler::DetectionResult> >
	{
		static void _Xlength();
	public:
		DetectionHandler::DetectionResult * _Emplace_reallocate<DetectionHandler::DetectionResult const &>(DetectionHandler::DetectionResult * const,DetectionHandler::DetectionResult const &);
		~vector<DetectionHandler::DetectionResult,allocator<DetectionHandler::DetectionResult> >();
	};

	class vector<DownloadHandler::UsoDownloadJob,allocator<DownloadHandler::UsoDownloadJob> >
	{
		static void _Xlength();
		void _Change_array(DownloadHandler::UsoDownloadJob * const,unsigned __int64,unsigned __int64);
		void _Destroy(DownloadHandler::UsoDownloadJob *,DownloadHandler::UsoDownloadJob *);
	public:
		~vector<DownloadHandler::UsoDownloadJob,allocator<DownloadHandler::UsoDownloadJob> >();
	};

	class vector<PersistObject *,allocator<PersistObject *> >
	{
		static void _Xlength();
	public:
		PersistObject * * _Emplace_reallocate<PersistObject * const &>(PersistObject * * const,PersistObject * const &);
		~vector<PersistObject *,allocator<PersistObject *> >();
	};

	class vector<_GUID,allocator<_GUID> >
	{
		static void _Xlength();
	public:
		_GUID * _Emplace_reallocate<_GUID const &>(_GUID * const,_GUID const &);
	};

	class vector<_Loop_vals_t,allocator<_Loop_vals_t> >
	{
		static void _Xlength();
	public:
		~vector<_Loop_vals_t,allocator<_Loop_vals_t> >();
	};

	class vector<_Tgt_state_t<unsigned short const *>::_Grp_t,allocator<_Tgt_state_t<unsigned short const *>::_Grp_t> >
	{
		bool _Buy(unsigned __int64);
		static void _Xlength();
		void _Tidy();
	public:
		vector<_Tgt_state_t<unsigned short const *>::_Grp_t,allocator<_Tgt_state_t<unsigned short const *>::_Grp_t> >(vector<_Tgt_state_t<unsigned short const *>::_Grp_t,allocator<_Tgt_state_t<unsigned short const *>::_Grp_t> > const &);
		void assign<_Tgt_state_t<unsigned short const *>::_Grp_t *,void>(_Tgt_state_t<unsigned short const *>::_Grp_t *,_Tgt_state_t<unsigned short const *>::_Grp_t *);
	};

	class vector<_WIN32_FIND_DATAW,allocator<_WIN32_FIND_DATAW> >
	{
		static void _Xlength();
		void _Change_array(_WIN32_FIND_DATAW * const,unsigned __int64,unsigned __int64);
		void _Tidy();
	public:
		_WIN32_FIND_DATAW & emplace_back<_WIN32_FIND_DATAW const &>(_WIN32_FIND_DATAW const &);
		_WIN32_FIND_DATAW * _Emplace_reallocate<_WIN32_FIND_DATAW const &>(_WIN32_FIND_DATAW * const,_WIN32_FIND_DATAW const &);
		~vector<_WIN32_FIND_DATAW,allocator<_WIN32_FIND_DATAW> >();
	};

	class vector<_escalationObject,allocator<_escalationObject> >
	{
		_escalationObject * _Umove(_escalationObject *,_escalationObject *,_escalationObject *);
		static void _Xlength();
		void _Destroy(_escalationObject *,_escalationObject *);
		void _Tidy();
	public:
		~vector<_escalationObject,allocator<_escalationObject> >();
	};

	class vector<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >
	{
		static void _Xlength();
		void _Change_array(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > * const,unsigned __int64,unsigned __int64);
		void _Destroy(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *);
		void _Reallocate_exactly(unsigned __int64);
		void _Tidy();
	public:
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > * _Emplace_reallocate<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > &>(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > * const,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > &);
		~vector<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >();
	};

	struct vector<bool,allocator<bool> >
	{
		_Vb_iterator<_Wrap_alloc<allocator<unsigned int> > > _Insert_n(_Vb_const_iterator<_Wrap_alloc<allocator<unsigned int> > >,unsigned __int64,bool const &);
		_Vb_iterator<_Wrap_alloc<allocator<unsigned int> > > erase(_Vb_const_iterator<_Wrap_alloc<allocator<unsigned int> > >,_Vb_const_iterator<_Wrap_alloc<allocator<unsigned int> > >);
		void _Xlen();
		void resize(unsigned __int64,bool);
		~vector<bool,allocator<bool> >();
	};

	class vector<char,allocator<char> >
	{
		static void _Xlength();
		void _Tidy();
	public:
		vector<char,allocator<char> >(unsigned __int64,allocator<char> const &);
		~vector<char,allocator<char> >();
	};

	class vector<long,allocator<long> >
	{
		static void _Xlength();
		void _Change_array(long * const,unsigned __int64,unsigned __int64);
	public:
		long * _Emplace_reallocate<long const &>(long * const,long const &);
		~vector<long,allocator<long> >();
	};

	class vector<unsigned char,allocator<unsigned char> >
	{
		static void _Xlength();
		void _Change_array(unsigned char * const,unsigned __int64,unsigned __int64);
		void _Tidy();
	public:
		vector<unsigned char,allocator<unsigned char> >(unsigned __int64,allocator<unsigned char> const &);
		~vector<unsigned char,allocator<unsigned char> >();
	};

	class vector<unsigned int,allocator<unsigned int> >
	{
		bool _Buy(unsigned __int64);
		static void _Xlength();
		void _Tidy();
	public:
		vector<unsigned int,allocator<unsigned int> >(unsigned __int64,unsigned int const &,allocator<unsigned int> const &);
		vector<unsigned int,allocator<unsigned int> >(vector<unsigned int,allocator<unsigned int> > const &);
		void assign<unsigned int *,void>(unsigned int *,unsigned int *);
	};

	class vector<unsigned short const *,allocator<unsigned short const *> >
	{
		static void _Xlength();
		void _Change_array(unsigned short const * * const,unsigned __int64,unsigned __int64);
	public:
		~vector<unsigned short const *,allocator<unsigned short const *> >();
	};

	class vector<unsigned short,allocator<unsigned short> >
	{
		static void _Xlength();
		void _Range_construct_or_tidy<unsigned short *>(unsigned short *,unsigned short *,forward_iterator_tag);
		void _Range_construct_or_tidy<unsigned short const *>(unsigned short const *,unsigned short const *,forward_iterator_tag);
		void _Tidy();
	public:
		~vector<unsigned short,allocator<unsigned short> >();
	};

	class vector<void *,allocator<void *> >
	{
		static void _Xlength();
	public:
		void * * _Emplace_reallocate<void * const &>(void * * const,void * const &);
		~vector<void *,allocator<void *> >();
	};

	class vector<wil::com_ptr_t<IUsoSession,wil::err_exception_policy>,allocator<wil::com_ptr_t<IUsoSession,wil::err_exception_policy> > >
	{
		static void _Xlength();
		void _Tidy();
	public:
		vector<wil::com_ptr_t<IUsoSession,wil::err_exception_policy>,allocator<wil::com_ptr_t<IUsoSession,wil::err_exception_policy> > >(unsigned __int64,allocator<wil::com_ptr_t<IUsoSession,wil::err_exception_policy> > const &);
		~vector<wil::com_ptr_t<IUsoSession,wil::err_exception_policy>,allocator<wil::com_ptr_t<IUsoSession,wil::err_exception_policy> > >();
	};

	class vector<wil::com_ptr_t<IUsoSessionInternal,wil::err_returncode_policy>,allocator<wil::com_ptr_t<IUsoSessionInternal,wil::err_returncode_policy> > >
	{
		static void _Xlength();
		void _Tidy();
	public:
		vector<wil::com_ptr_t<IUsoSessionInternal,wil::err_returncode_policy>,allocator<wil::com_ptr_t<IUsoSessionInternal,wil::err_returncode_policy> > >(unsigned __int64,allocator<wil::com_ptr_t<IUsoSessionInternal,wil::err_returncode_policy> > const &);
		~vector<wil::com_ptr_t<IUsoSessionInternal,wil::err_returncode_policy>,allocator<wil::com_ptr_t<IUsoSessionInternal,wil::err_returncode_policy> > >();
	};

	class vector<wil::com_ptr_t<IUsoUpdate,wil::err_returncode_policy>,allocator<wil::com_ptr_t<IUsoUpdate,wil::err_returncode_policy> > >
	{
		static void _Xlength();
		void _Destroy(wil::com_ptr_t<IUsoUpdate,wil::err_returncode_policy> *,wil::com_ptr_t<IUsoUpdate,wil::err_returncode_policy> *);
	public:
		~vector<wil::com_ptr_t<IUsoUpdate,wil::err_returncode_policy>,allocator<wil::com_ptr_t<IUsoUpdate,wil::err_returncode_policy> > >();
	};

	class vector<wil::com_ptr_t<IUsoUpdateHistoryEntry,wil::err_returncode_policy>,allocator<wil::com_ptr_t<IUsoUpdateHistoryEntry,wil::err_returncode_policy> > >
	{
		static void _Xlength();
		void _Destroy(wil::com_ptr_t<IUsoUpdateHistoryEntry,wil::err_returncode_policy> *,wil::com_ptr_t<IUsoUpdateHistoryEntry,wil::err_returncode_policy> *);
	public:
		~vector<wil::com_ptr_t<IUsoUpdateHistoryEntry,wil::err_returncode_policy>,allocator<wil::com_ptr_t<IUsoUpdateHistoryEntry,wil::err_returncode_policy> > >();
	};

	bool _Lookup_equiv<unsigned short,regex_traits<unsigned short> >(unsigned short,std::_Sequence<unsigned short> const *,std::regex_traits<unsigned short> const &);
	bool operator==<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &);
	nothrow_t const std::nothrow;
	piecewise_construct_t const std::piecewise_construct;
	std::_Really_trivial_ptr_iterator_tag _Ptr_copy_cat<_Tgt_state_t<unsigned short const *>::_Grp_t,_Tgt_state_t<unsigned short const *>::_Grp_t>(std::_Tgt_state_t<unsigned short const *>::_Grp_t * const &,std::_Tgt_state_t<unsigned short const *>::_Grp_t * const &);
	std::_Really_trivial_ptr_iterator_tag _Ptr_copy_cat<unsigned int,unsigned int>(unsigned int * const &,unsigned int * const &);
	std::_Really_trivial_ptr_iterator_tag _Ptr_copy_cat<unsigned short const ,unsigned short>(unsigned short const * const &,unsigned short * const &);
	std::_Really_trivial_ptr_iterator_tag _Ptr_copy_cat<unsigned short,unsigned short>(unsigned short * const &,unsigned short * const &);
	std::_Really_trivial_ptr_iterator_tag _Ptr_move_cat<DetectionHandler::DetectionResult,DetectionHandler::DetectionResult>(DetectionHandler::DetectionResult * const &,DetectionHandler::DetectionResult * const &);
	std::_Really_trivial_ptr_iterator_tag _Ptr_move_cat<_GUID,_GUID>(_GUID * const &,_GUID * const &);
	std::_Really_trivial_ptr_iterator_tag _Ptr_move_cat<_Loop_vals_t,_Loop_vals_t>(std::_Loop_vals_t * const &,std::_Loop_vals_t * const &);
	std::_Really_trivial_ptr_iterator_tag _Ptr_move_cat<_Tgt_state_t<unsigned short const *>::_Grp_t,_Tgt_state_t<unsigned short const *>::_Grp_t>(std::_Tgt_state_t<unsigned short const *>::_Grp_t * const &,std::_Tgt_state_t<unsigned short const *>::_Grp_t * const &);
	std::_Really_trivial_ptr_iterator_tag _Ptr_move_cat<_WIN32_FIND_DATAW,_WIN32_FIND_DATAW>(_WIN32_FIND_DATAW * const &,_WIN32_FIND_DATAW * const &);
	std::_Really_trivial_ptr_iterator_tag _Ptr_move_cat<long,long>(long * const &,long * const &);
	std::_Really_trivial_ptr_iterator_tag _Ptr_move_cat<unsigned char,unsigned char>(unsigned char * const &,unsigned char * const &);
	std::_Really_trivial_ptr_iterator_tag _Ptr_move_cat<unsigned int,unsigned int>(unsigned int * const &,unsigned int * const &);
	std::_Really_trivial_ptr_iterator_tag _Ptr_move_cat<unsigned short const *,unsigned short const *>(unsigned short const * * const &,unsigned short const * * const &);
	std::_Really_trivial_ptr_iterator_tag _Ptr_move_cat<void *,void *>(void * * const &,void * * const &);
	std::_String_iterator<std::_String_val<std::_Simple_types<unsigned short> > > transform<_String_iterator<_String_val<_Simple_types<unsigned short> > >,_String_iterator<_String_val<_Simple_types<unsigned short> > >,unsigned short (*)(unsigned short)>(std::_String_iterator<std::_String_val<std::_Simple_types<unsigned short> > >,std::_String_iterator<std::_String_val<std::_Simple_types<unsigned short> > >,std::_String_iterator<std::_String_val<std::_Simple_types<unsigned short> > >,unsigned short (*)(unsigned short));
	std::basic_ostream<unsigned short,std::char_traits<unsigned short> > & _Insert_string<unsigned short,char_traits<unsigned short>,unsigned __int64>(std::basic_ostream<unsigned short,std::char_traits<unsigned short> > &,unsigned short const * const,unsigned __int64);
	std::basic_ostream<unsigned short,std::char_traits<unsigned short> > & endl<unsigned short,char_traits<unsigned short> >(std::basic_ostream<unsigned short,std::char_traits<unsigned short> > &);
	std::basic_ostream<unsigned short,std::char_traits<unsigned short> > & operator<<<unsigned short,char_traits<unsigned short> >(std::basic_ostream<unsigned short,std::char_traits<unsigned short> > &,char const *);
	std::basic_ostream<unsigned short,std::char_traits<unsigned short> > & operator<<<unsigned short,char_traits<unsigned short> >(std::basic_ostream<unsigned short,std::char_traits<unsigned short> > &,unsigned short const *);
	std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > * _Move_unchecked1<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *>(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::_General_ptr_iterator_tag);
	std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > _Integral_to_string<unsigned short,long>(long);
	std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > operator+<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,unsigned short const * const);
	std::codecvt<unsigned short,char,_Mbstatet> const & use_facet<codecvt<unsigned short,char,_Mbstatet> >(std::locale const &);
	std::ctype<unsigned short> const & use_facet<ctype<unsigned short> >(std::locale const &);
	unsigned __int64 _Traits_find<char_traits<unsigned short> >(unsigned short const * const,unsigned __int64,unsigned __int64,unsigned short const * const,unsigned __int64);
	unsigned short const * _Compare<unsigned short const *,unsigned short const *,regex_traits<unsigned short> >(unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,std::regex_traits<unsigned short> const &,std::regex_constants::syntax_option_type);
	void _Calculate_loop_simplicity(std::_Node_base *,std::_Node_base *,std::_Node_rep *);
	void _Facet_Register(std::_Facet_base *);
	void _Throw_C_error(int);
	void _Throw_Cpp_error(int);
	void _Xbad_alloc();
	void _Xbad_function_call();
	void _Xlength_error(char const *);
	void swap<_WIN32_FIND_DATAW,void>(_WIN32_FIND_DATAW &,_WIN32_FIND_DATAW &);
};

namespace wil
{
	class ActivityBase<UsoUpdateEnhancedTelemetry,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>
	{
		struct ActivityData<UsoUpdateEnhancedTelemetry,_TlgReflectorTag_Param0IsProviderType>
		{
			~ActivityData<UsoUpdateEnhancedTelemetry,_TlgReflectorTag_Param0IsProviderType>();
		};

		void ReportStopActivity(long);
	protected:
		void Destroy();
		void EnsureWatchingCurrentThread();
	public:
		virtual bool NotifyFailure(FailureInfo const &);
		void IgnoreCurrentThread();
		void zInternalStart();
		~ActivityBase<UsoUpdateEnhancedTelemetry,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>();
	};

	class ActivityBase<UsoUpdateEnhancedTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>
	{
		struct ActivityData<UsoUpdateEnhancedTelemetry,_TlgReflectorTag_Param0IsProviderType>
		{
			~ActivityData<UsoUpdateEnhancedTelemetry,_TlgReflectorTag_Param0IsProviderType>();
		};

	protected:
		void Destroy();
		void EnsureWatchingCurrentThread();
	public:
		ActivityBase<UsoUpdateEnhancedTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType> & operator=(ActivityBase<UsoUpdateEnhancedTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType> const &);
		virtual bool NotifyFailure(FailureInfo const &);
		void IgnoreCurrentThread();
		void Stop(long);
		void zInternalStart();
		~ActivityBase<UsoUpdateEnhancedTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>();
	};

	struct ActivityBase<UsoUpdateTraceLogging,1,140737488355328,5,16777216,_TlgReflectorTag_Param0IsProviderType>
	{
		struct ActivityData<UsoUpdateTraceLogging,_TlgReflectorTag_Param0IsProviderType>
		{
			~ActivityData<UsoUpdateTraceLogging,_TlgReflectorTag_Param0IsProviderType>();
		};

		virtual bool NotifyFailure(FailureInfo const &);
	};

	struct ActivityThreadWatcher
	{
		ActivityThreadWatcher(details::IFailureCallback *,details::StoredCallContextInfo const &);
		~ActivityThreadWatcher();
	};

	class Feature<__WilFeatureTraits_Feature_SmartSignalRegistration>
	{
		static wil_details_CachedFeatureEnabledState GetCachedFeatureEnabledState(bool);
	};

	class Feature<__WilFeatureTraits_Feature_UPExperimentation>
	{
		static Variant_UPExperimentation GetCachedVariantState();
	public:
		static Variant_UPExperimentation __private_GetVariant(VariantReportingKind,bool);
	};

	class Feature<__WilFeatureTraits_Feature_UsoPolicyDisable>
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
		StoredFailureInfo(StoredFailureInfo const &);
		void SetFailureInfo(FailureInfo const &);
	};

	class TraceLoggingProvider
	{
		virtual bool NotifyFailure(FailureInfo const &);
	protected:
		virtual void Initialize();
		virtual void OnErrorReported(bool,FailureInfo const &);
		void ReportTelemetryFailure(FailureInfo const &);
		void ReportTraceLoggingFailure(FailureInfo const &);
	};

	struct com_ptr_t<ABI::Windows::Data::Json::IJsonObject,err_exception_policy>
	{
		~com_ptr_t<ABI::Windows::Data::Json::IJsonObject,err_exception_policy>();
	};

	struct com_ptr_t<ABI::Windows::Data::Json::IJsonObjectStatics,err_exception_policy>
	{
		~com_ptr_t<ABI::Windows::Data::Json::IJsonObjectStatics,err_exception_policy>();
	};

	struct com_ptr_t<ABI::Windows::Foundation::IAsyncOperation<bool>,err_exception_policy>
	{
		~com_ptr_t<ABI::Windows::Foundation::IAsyncOperation<bool>,err_exception_policy>();
	};

	struct com_ptr_t<ABI::Windows::Internal::Signals::ISignalEvaluator,err_exception_policy>
	{
		~com_ptr_t<ABI::Windows::Internal::Signals::ISignalEvaluator,err_exception_policy>();
	};

	struct com_ptr_t<ABI::Windows::Internal::Signals::ISignalRegistrationManager,err_exception_policy>
	{
		~com_ptr_t<ABI::Windows::Internal::Signals::ISignalRegistrationManager,err_exception_policy>();
	};

	struct com_ptr_t<IAction,err_returncode_policy>
	{
		~com_ptr_t<IAction,err_returncode_policy>();
	};

	struct com_ptr_t<IActionCollection,err_returncode_policy>
	{
		~com_ptr_t<IActionCollection,err_returncode_policy>();
	};

	struct com_ptr_t<IAttribute,err_returncode_policy>
	{
		~com_ptr_t<IAttribute,err_returncode_policy>();
	};

	struct com_ptr_t<ICategory,err_returncode_policy>
	{
		~com_ptr_t<ICategory,err_returncode_policy>();
	};

	struct com_ptr_t<ICategoryCollection,err_returncode_policy>
	{
		~com_ptr_t<ICategoryCollection,err_returncode_policy>();
	};

	struct com_ptr_t<IConfigManager2,err_returncode_policy>
	{
		~com_ptr_t<IConfigManager2,err_returncode_policy>();
	};

	struct com_ptr_t<IConfigNode,err_returncode_policy>
	{
		~com_ptr_t<IConfigNode,err_returncode_policy>();
	};

	struct com_ptr_t<IDTUHandler,err_returncode_policy>
	{
		~com_ptr_t<IDTUHandler,err_returncode_policy>();
	};

	struct com_ptr_t<IExecAction,err_returncode_policy>
	{
		~com_ptr_t<IExecAction,err_returncode_policy>();
	};

	struct com_ptr_t<IFlightSettingsAPIBroker,err_returncode_policy>
	{
		~com_ptr_t<IFlightSettingsAPIBroker,err_returncode_policy>();
	};

	struct com_ptr_t<IIdleSettings,err_returncode_policy>
	{
		~com_ptr_t<IIdleSettings,err_returncode_policy>();
	};

	struct com_ptr_t<IInspectable,err_exception_policy>
	{
		~com_ptr_t<IInspectable,err_exception_policy>();
	};

	struct com_ptr_t<IJsonObject,err_returncode_policy>
	{
		~com_ptr_t<IJsonObject,err_returncode_policy>();
	};

	struct com_ptr_t<IJsonObjectItem,err_returncode_policy>
	{
		~com_ptr_t<IJsonObjectItem,err_returncode_policy>();
	};

	struct com_ptr_t<IJsonValue,err_returncode_policy>
	{
		~com_ptr_t<IJsonValue,err_returncode_policy>();
	};

	struct com_ptr_t<ILogonTrigger,err_returncode_policy>
	{
		~com_ptr_t<ILogonTrigger,err_returncode_policy>();
	};

	struct com_ptr_t<IMaintenanceSettings,err_returncode_policy>
	{
		~com_ptr_t<IMaintenanceSettings,err_returncode_policy>();
	};

	struct com_ptr_t<IMonthlyDOWTrigger,err_returncode_policy>
	{
		~com_ptr_t<IMonthlyDOWTrigger,err_returncode_policy>();
	};

	struct com_ptr_t<INetworkListManager,err_returncode_policy>
	{
		~com_ptr_t<INetworkListManager,err_returncode_policy>();
	};

	struct com_ptr_t<IPrincipal,err_returncode_policy>
	{
		~com_ptr_t<IPrincipal,err_returncode_policy>();
	};

	struct com_ptr_t<IProduct,err_returncode_policy>
	{
		~com_ptr_t<IProduct,err_returncode_policy>();
	};

	struct com_ptr_t<IProductCollection,err_returncode_policy>
	{
		~com_ptr_t<IProductCollection,err_returncode_policy>();
	};

	struct com_ptr_t<IProductEnumerator,err_returncode_policy>
	{
		~com_ptr_t<IProductEnumerator,err_returncode_policy>();
	};

	struct com_ptr_t<IRegisteredTask,err_returncode_policy>
	{
		~com_ptr_t<IRegisteredTask,err_returncode_policy>();
	};

	struct com_ptr_t<IRepetitionPattern,err_returncode_policy>
	{
		~com_ptr_t<IRepetitionPattern,err_returncode_policy>();
	};

	struct com_ptr_t<ITaskDefinition,err_returncode_policy>
	{
		~com_ptr_t<ITaskDefinition,err_returncode_policy>();
	};

	struct com_ptr_t<ITaskFolder,err_returncode_policy>
	{
		~com_ptr_t<ITaskFolder,err_returncode_policy>();
	};

	struct com_ptr_t<ITaskService,err_returncode_policy>
	{
		~com_ptr_t<ITaskService,err_returncode_policy>();
	};

	struct com_ptr_t<ITaskSettings,err_returncode_policy>
	{
		~com_ptr_t<ITaskSettings,err_returncode_policy>();
	};

	struct com_ptr_t<ITaskSettings2,err_returncode_policy>
	{
		~com_ptr_t<ITaskSettings2,err_returncode_policy>();
	};

	struct com_ptr_t<ITaskSettings3,err_returncode_policy>
	{
		~com_ptr_t<ITaskSettings3,err_returncode_policy>();
	};

	struct com_ptr_t<ITimeTrigger,err_returncode_policy>
	{
		~com_ptr_t<ITimeTrigger,err_returncode_policy>();
	};

	struct com_ptr_t<ITrigger,err_returncode_policy>
	{
		~com_ptr_t<ITrigger,err_returncode_policy>();
	};

	struct com_ptr_t<ITriggerCollection,err_returncode_policy>
	{
		~com_ptr_t<ITriggerCollection,err_returncode_policy>();
	};

	struct com_ptr_t<IUniversalOrchestrator,err_returncode_policy>
	{
		~com_ptr_t<IUniversalOrchestrator,err_returncode_policy>();
	};

	struct com_ptr_t<IUpdateDownloadCache,err_exception_policy>
	{
		~com_ptr_t<IUpdateDownloadCache,err_exception_policy>();
	};

	struct com_ptr_t<IUpdateException,err_returncode_policy>
	{
		~com_ptr_t<IUpdateException,err_returncode_policy>();
	};

	struct com_ptr_t<IUpdateExceptionCollection,err_returncode_policy>
	{
		~com_ptr_t<IUpdateExceptionCollection,err_returncode_policy>();
	};

	struct com_ptr_t<IUpdateHandler,err_returncode_policy>
	{
		~com_ptr_t<IUpdateHandler,err_returncode_policy>();
	};

	struct com_ptr_t<IUpdateHistoryEntry,err_returncode_policy>
	{
		~com_ptr_t<IUpdateHistoryEntry,err_returncode_policy>();
	};

	struct com_ptr_t<IUpdateHistoryEntry3,err_returncode_policy>
	{
		~com_ptr_t<IUpdateHistoryEntry3,err_returncode_policy>();
	};

	struct com_ptr_t<IUpdateHistoryEntryCollection,err_returncode_policy>
	{
		~com_ptr_t<IUpdateHistoryEntryCollection,err_returncode_policy>();
	};

	struct com_ptr_t<IUpdateIdentity,err_returncode_policy>
	{
		~com_ptr_t<IUpdateIdentity,err_returncode_policy>();
	};

	struct com_ptr_t<IUpdateReserveManagerLoader,err_returncode_policy>
	{
		~com_ptr_t<IUpdateReserveManagerLoader,err_returncode_policy>();
	};

	struct com_ptr_t<IUpdateSessionOrchestrator,err_returncode_policy>
	{
		~com_ptr_t<IUpdateSessionOrchestrator,err_returncode_policy>();
	};

	struct com_ptr_t<IUsoDownloadProgress,err_returncode_policy>
	{
		~com_ptr_t<IUsoDownloadProgress,err_returncode_policy>();
	};

	struct com_ptr_t<IUsoDownloadResult,err_returncode_policy>
	{
		~com_ptr_t<IUsoDownloadResult,err_returncode_policy>();
	};

	struct com_ptr_t<IUsoInstallationResult,err_returncode_policy>
	{
		~com_ptr_t<IUsoInstallationResult,err_returncode_policy>();
	};

	struct com_ptr_t<IUsoSession,err_exception_policy>
	{
		~com_ptr_t<IUsoSession,err_exception_policy>();
	};

	struct com_ptr_t<IUsoSession,err_returncode_policy>
	{
		~com_ptr_t<IUsoSession,err_returncode_policy>();
	};

	struct com_ptr_t<IUsoSessionCommon,err_exception_policy>
	{
		~com_ptr_t<IUsoSessionCommon,err_exception_policy>();
	};

	struct com_ptr_t<IUsoSessionCommon,err_returncode_policy>
	{
		~com_ptr_t<IUsoSessionCommon,err_returncode_policy>();
	};

	struct com_ptr_t<IUsoSessionInternal,err_returncode_policy>
	{
		~com_ptr_t<IUsoSessionInternal,err_returncode_policy>();
	};

	struct com_ptr_t<IUsoSettingArray,err_exception_policy>
	{
		~com_ptr_t<IUsoSettingArray,err_exception_policy>();
	};

	struct com_ptr_t<IUsoSettingArray,err_returncode_policy>
	{
		~com_ptr_t<IUsoSettingArray,err_returncode_policy>();
	};

	struct com_ptr_t<IUsoSettingObject,err_exception_policy>
	{
		~com_ptr_t<IUsoSettingObject,err_exception_policy>();
	};

	struct com_ptr_t<IUsoSettingObject,err_returncode_policy>
	{
		~com_ptr_t<IUsoSettingObject,err_returncode_policy>();
	};

	struct com_ptr_t<IUsoSvc,err_returncode_policy>
	{
		~com_ptr_t<IUsoSvc,err_returncode_policy>();
	};

	struct com_ptr_t<IUsoUpdate,err_returncode_policy>
	{
		~com_ptr_t<IUsoUpdate,err_returncode_policy>();
	};

	struct com_ptr_t<IUsoUpdateCollectionInternal,err_exception_policy>
	{
		~com_ptr_t<IUsoUpdateCollectionInternal,err_exception_policy>();
	};

	struct com_ptr_t<IUsoUpdateCollectionInternal,err_returncode_policy>
	{
		~com_ptr_t<IUsoUpdateCollectionInternal,err_returncode_policy>();
	};

	struct com_ptr_t<IUsoUpdateDeserializer,err_returncode_policy>
	{
		~com_ptr_t<IUsoUpdateDeserializer,err_returncode_policy>();
	};

	struct com_ptr_t<IUsoUpdateDownloadResult,err_returncode_policy>
	{
		~com_ptr_t<IUsoUpdateDownloadResult,err_returncode_policy>();
	};

	struct com_ptr_t<IUsoUpdateDownloader,err_returncode_policy>
	{
		~com_ptr_t<IUsoUpdateDownloader,err_returncode_policy>();
	};

	struct com_ptr_t<IUsoUpdateHistoryEntry,err_returncode_policy>
	{
		~com_ptr_t<IUsoUpdateHistoryEntry,err_returncode_policy>();
	};

	struct com_ptr_t<IUsoUpdateInstallationJob,err_returncode_policy>
	{
		~com_ptr_t<IUsoUpdateInstallationJob,err_returncode_policy>();
	};

	struct com_ptr_t<IUsoUpdateInstallationResult,err_returncode_policy>
	{
		~com_ptr_t<IUsoUpdateInstallationResult,err_returncode_policy>();
	};

	struct com_ptr_t<IUsoUpdateInstaller,err_returncode_policy>
	{
		~com_ptr_t<IUsoUpdateInstaller,err_returncode_policy>();
	};

	struct com_ptr_t<IUsoUpdateInternal,err_exception_policy>
	{
		~com_ptr_t<IUsoUpdateInternal,err_exception_policy>();
	};

	struct com_ptr_t<IUsoUpdateInternal,err_returncode_policy>
	{
		~com_ptr_t<IUsoUpdateInternal,err_returncode_policy>();
	};

	struct com_ptr_t<IUsoUpdateSearchResult,err_returncode_policy>
	{
		~com_ptr_t<IUsoUpdateSearchResult,err_returncode_policy>();
	};

	struct com_ptr_t<IUsoUpdateSearcher,err_returncode_policy>
	{
		~com_ptr_t<IUsoUpdateSearcher,err_returncode_policy>();
	};

	struct com_ptr_t<IUsoUpdateServiceManager,err_returncode_policy>
	{
		~com_ptr_t<IUsoUpdateServiceManager,err_returncode_policy>();
	};

	struct com_ptr_t<IUsoUpdateSession,err_returncode_policy>
	{
		~com_ptr_t<IUsoUpdateSession,err_returncode_policy>();
	};

	struct com_ptr_t<IUxUpdateManager,err_returncode_policy>
	{
		~com_ptr_t<IUxUpdateManager,err_returncode_policy>();
	};

	struct com_ptr_t<IWaaSAssessorInternal,err_returncode_policy>
	{
		~com_ptr_t<IWaaSAssessorInternal,err_returncode_policy>();
	};

	struct com_ptr_t<IWaaSProtectedSettingsProvider,err_returncode_policy>
	{
		~com_ptr_t<IWaaSProtectedSettingsProvider,err_returncode_policy>();
	};

	struct com_ptr_t<IWnfStateChangeTrigger,err_returncode_policy>
	{
		~com_ptr_t<IWnfStateChangeTrigger,err_returncode_policy>();
	};

	struct com_ptr_t<UsoSession,err_exception_policy>
	{
		~com_ptr_t<UsoSession,err_exception_policy>();
	};

	struct com_ptr_t<UsoSession,err_returncode_policy>
	{
		~com_ptr_t<UsoSession,err_returncode_policy>();
	};

	struct com_ptr_t<UsoSessionCollection,err_returncode_policy>
	{
		~com_ptr_t<UsoSessionCollection,err_returncode_policy>();
	};

	struct com_ptr_t<UsoSettingArray,err_returncode_policy>
	{
		~com_ptr_t<UsoSettingArray,err_returncode_policy>();
	};

	struct com_ptr_t<UsoSettingObject,err_returncode_policy>
	{
		~com_ptr_t<UsoSettingObject,err_returncode_policy>();
	};

	struct com_ptr_t<UsoUpdate,err_returncode_policy>
	{
		~com_ptr_t<UsoUpdate,err_returncode_policy>();
	};

	struct com_ptr_t<UsoUpdateCollection,err_returncode_policy>
	{
		~com_ptr_t<UsoUpdateCollection,err_returncode_policy>();
	};

	struct com_ptr_t<UsoUpdateHistoryEntryCollection,err_returncode_policy>
	{
		~com_ptr_t<UsoUpdateHistoryEntryCollection,err_returncode_policy>();
	};

	struct com_ptr_t<Windows::Data::Json::IJsonObject,err_exception_policy>
	{
		~com_ptr_t<Windows::Data::Json::IJsonObject,err_exception_policy>();
	};

	struct com_ptr_t<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>,err_exception_policy>
	{
		~com_ptr_t<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>,err_exception_policy>();
	};

	struct com_ptr_t<Windows::Foundation::Collections::IPropertySet,err_exception_policy>
	{
		~com_ptr_t<Windows::Foundation::Collections::IPropertySet,err_exception_policy>();
	};

	struct com_ptr_t<Windows::Foundation::IAsyncAction,err_exception_policy>
	{
		~com_ptr_t<Windows::Foundation::IAsyncAction,err_exception_policy>();
	};

	struct com_ptr_t<Windows::Foundation::IAsyncOperation<Windows::Internal::PredictionUnit::BinaryClassificationResult>,err_exception_policy>
	{
		~com_ptr_t<Windows::Foundation::IAsyncOperation<Windows::Internal::PredictionUnit::BinaryClassificationResult>,err_exception_policy>();
	};

	struct com_ptr_t<Windows::Foundation::IPropertyValueStatics,err_exception_policy>
	{
		~com_ptr_t<Windows::Foundation::IPropertyValueStatics,err_exception_policy>();
	};

	struct com_ptr_t<Windows::Internal::PredictionUnit::IPredictionEngine,err_exception_policy>
	{
		~com_ptr_t<Windows::Internal::PredictionUnit::IPredictionEngine,err_exception_policy>();
	};

	struct com_ptr_t<Windows::Storage::Streams::IRandomAccessStream,err_exception_policy>
	{
		~com_ptr_t<Windows::Storage::Streams::IRandomAccessStream,err_exception_policy>();
	};

	struct com_ptr_t<Windows::Storage::Streams::IRandomAccessStreamReference,err_exception_policy>
	{
		~com_ptr_t<Windows::Storage::Streams::IRandomAccessStreamReference,err_exception_policy>();
	};

	struct com_ptr_t<Windows::Storage::Streams::IRandomAccessStreamReferenceStatics,err_exception_policy>
	{
		~com_ptr_t<Windows::Storage::Streams::IRandomAccessStreamReferenceStatics,err_exception_policy>();
	};

	struct critical_section
	{
		~critical_section();
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

		class FeatureLogging
		{
		protected:
			static FeatureLogging * Instance();
		};

		class FeatureStateManager
		{
			bool EnsureStateData();
		public:
			void QueueBackgroundSRUMUsageReporting(unsigned int,unsigned short,unsigned int);
			void RecordFeatureUsage(unsigned int,wil_details_ServiceReportingKind,unsigned __int64);
		};

		class ThreadFailureCallbackHolder
		{
			static long volatile s_telemetryId;
		public:
			static bool GetThreadContext(FailureInfo *,ThreadFailureCallbackHolder *,char *,unsigned __int64);
			static void GetContextAndNotifyFailure(FailureInfo *,char *,unsigned __int64);
			~ThreadFailureCallbackHolder();
		};

		namespace in1diag3
		{
			bool Log_HrIfMsg(void *,unsigned int,char const *,long,bool,char const *,...);
			long Log_CaughtException(void *,unsigned int,char const *);
			long Log_Hr(void *,unsigned int,char const *,long);
			long Log_HrMsg(void *,unsigned int,char const *,long,char const *,...);
			long Log_IfFailedMsg(void *,unsigned int,char const *,long,char const *,...);
			long Return_CaughtException(void *,unsigned int,char const *);
			long Return_GetLastError(void *,unsigned int,char const *);
			long Return_NtStatus(void *,unsigned int,char const *,long);
			long Return_Win32(void *,unsigned int,char const *,unsigned long);
			unsigned long Log_GetLastError(void *,unsigned int,char const *);
			void FailFast_Unexpected(void *,unsigned int,char const *);
			void Return_Hr(void *,unsigned int,char const *,long);
			void Return_HrMsg(void *,unsigned int,char const *,long,char const *,...);
			void Throw_GetLastError(void *,unsigned int,char const *);
			void _FailFastImmediate_Unexpected();
			void _FailFast_GetLastError(void *,unsigned int,char const *);
			void _FailFast_Unexpected(void *,unsigned int,char const *);
			void _Log_GetLastError(void *,unsigned int,char const *);
			void _Log_Hr(void *,unsigned int,char const *,long);
			void _Log_NtStatus(void *,unsigned int,char const *,long);
			void _Log_Win32(void *,unsigned int,char const *,unsigned long);
			void _Throw_Hr(void *,unsigned int,char const *,long);
		};

		struct shared_buffer
		{
			bool create(void const *,unsigned __int64);
		};

		struct static_lazy<UsoUpdateEnhancedTelemetry>
		{
			struct Completer
			{
				~Completer();
			};

			UsoUpdateEnhancedTelemetry * get(void (*)());
		};

		struct static_lazy<UsoUpdateEnhancedTraceLogging>
		{
			struct Completer
			{
				~Completer();
			};

			UsoUpdateEnhancedTraceLogging * get(void (*)());
			void cleanup();
		};

		struct static_lazy<UsoUpdateTraceLogging>
		{
			struct Completer
			{
				~Completer();
			};

			UsoUpdateTraceLogging * get(void (*)());
			void cleanup();
		};

		struct wnf_subscription_state<_RM_QUIET_MODE_DATA>
		{
			virtual ~wnf_subscription_state<_RM_QUIET_MODE_DATA>();
		};

		struct wnf_subscription_state<_SEB_EVENT_HEADER>
		{
			virtual ~wnf_subscription_state<_SEB_EVENT_HEADER>();
		};

		struct wnf_subscription_state<_WNF_SCREENONSTUDY_SESSION_DATA>
		{
			virtual ~wnf_subscription_state<_WNF_SCREENONSTUDY_SESSION_DATA>();
		};

		FEATURE_ENABLED_STATE WilApiImpl_GetFeatureEnabledState(unsigned int,FEATURE_CHANGE_TIME);
		bool (* g_pfnGetModuleInformation)(void *,unsigned int *,char *,unsigned __int64);
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
		long (* g_pfnRunFunctorWithExceptionFilter)(details::IFunctor &,details::IFunctorHost &,void *);
		long GetLastErrorFailHr();
		long GetLastErrorFailHr(void *,unsigned int,char const *,char const *,char const *,void *);
		long NtStatusToHr(long);
		long RecognizeCaughtExceptionFromCallback(unsigned short *,unsigned __int64);
		long ReportFailure_CaughtException(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,SupportedExceptions);
		long ReportFailure_CaughtExceptionCommon(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,unsigned short *,unsigned __int64,SupportedExceptions);
		long ReportFailure_GetLastErrorHr(void *,unsigned int,char const *,char const *,char const *,void *,FailureType);
		long ReportFailure_NtStatus(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long);
		long ReportFailure_Win32(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,unsigned long);
		long ResultFromCaughtExceptionInternal(unsigned short *,unsigned __int64,bool *);
		long RunFunctorWithExceptionFilter(details::IFunctor &,details::IFunctorHost &,void *);
		long StringCchPrintfA(char *,unsigned __int64,char const *,...);
		long WaitForCompletion<ABI::Windows::Foundation::IAsyncOperation<bool> *>(ABI::Windows::Foundation::IAsyncOperation<bool> *,tagCOWAIT_FLAGS,unsigned long,bool *);
		long WaitForCompletion<Windows::Foundation::IAsyncAction *>(Windows::Foundation::IAsyncAction *,tagCOWAIT_FLAGS,unsigned long,bool *);
		long WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Internal::PredictionUnit::BinaryClassificationResult> *>(Windows::Foundation::IAsyncOperation<Windows::Internal::PredictionUnit::BinaryClassificationResult> *,tagCOWAIT_FLAGS,unsigned long,bool *);
		shutdown_aware_object<details::EnabledStateManager> g_enabledStateManager;
		shutdown_aware_object<details::FeatureStateManager> g_featureStateManager;
		unsigned char (* g_pfnRtlDllShutdownInProgress)();
		unsigned char * WriteResultString<char const *>(unsigned char *,unsigned char *,char const *,char const * *);
		unsigned char * WriteResultString<unsigned short const *>(unsigned char *,unsigned char *,unsigned short const *,unsigned short const * *);
		unsigned char RtlDllShutdownInProgress();
		unsigned int WilApiImpl_GetFeatureVariant(unsigned int,FEATURE_CHANGE_TIME,unsigned int *,int *);
		unsigned long (* g_pfnRtlNtStatusToDosErrorNoTeb)(long);
		unsigned long ReportFailure_GetLastError(void *,unsigned int,char const *,char const *,char const *,void *,FailureType);
		unsigned long RtlNtStatusToDosErrorNoTeb(long);
		unsigned short * LogStringPrintf(unsigned short *,unsigned short const *,unsigned short const *,...);
		void (* g_pfnDebugBreak)();
		void (* g_pfnFailFastInLoaderCallout)();
		void (* g_pfnGetContextAndNotifyFailure)(FailureInfo *,char *,unsigned __int64);
		void (* g_pfnLoggingCallback)(FailureInfo const &);
		void (* g_pfnOriginateCallback)(FailureInfo const &);
		void (* g_pfnRaiseFailFastException)(_EXCEPTION_RECORD *,_CONTEXT *,unsigned long);
		void (* g_pfnRethrow)();
		void (* g_pfnTelemetryCallback)(bool,FailureInfo const &);
		void (* g_pfnThrowResultException)(FailureInfo const &);
		void CloseProcessInformation(_PROCESS_INFORMATION *);
		void DebugBreak();
		void FailFastInLoaderCallout();
		void FeatureLoggingHook(unsigned int,FEATURE_LOGGED_TRAITS const *,FEATURE_ERROR const *,int,wil_ReportingKind const *,wil_VariantReportingKind const *,unsigned char,unsigned __int64);
		void GetContextAndNotifyFailure(FailureInfo *,char *,unsigned __int64);
		void LogFailure(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long,unsigned short const *,bool,unsigned short *,unsigned __int64,char *,unsigned __int64,FailureInfo *);
		void PrintLoggingMessage(unsigned short *,unsigned __int64,char const *,char *);
		void RecordFeatureUsageCallback(unsigned int,wil_details_ServiceReportingKind,unsigned int,wil_details_FeaturePropertyCache *,wil_details_RecordUsageResult *);
		void RecordSRUMFeatureUsage(unsigned int,unsigned int,unsigned int);
		void ReportFailure(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long,unsigned short const *,details::ReportFailureOptions);
		void ReportFailure_Hr(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long);
		void ReportFailure_HrMsg(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long,char const *,char *);
		void ReportFailure_Msg(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long,char const *,char *);
		void Rethrow();
		void ThrowResultExceptionInternal(FailureInfo const &);
		void WilApiImpl_RecordFeatureUsage(unsigned int,unsigned int,unsigned int,char const *);
		void WilApiImpl_SubscribeFeatureStateChangeNotification(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
		void WilApiImpl_UnsubscribeFeatureStateChangeNotification(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
		void WilDynamicLoadRaiseFailFastException(_EXCEPTION_RECORD *,_CONTEXT *,unsigned long);
		void WilFailFast(FailureInfo const &);
		void WilRaiseFailFastException(_EXCEPTION_RECORD *,_CONTEXT *,unsigned long);
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
			long CreateFromValueInternal(unsigned short const *,bool,unsigned __int64);
			static long GetValueFromSemaphore(void *,long *);
			static long TryGetValueInternal(unsigned short const *,bool,unsigned __int64 *,bool *);
		public:
			static long TryGetPointer(unsigned short const *,void * *);
			~SemaphoreValue();
		};

		struct SubscriptionList
		{
			void OnSignaled(srwlock &);
			void SubscribeUnderLock(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
			void Unsubscribe(srwlock &,FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
		};

		struct ThreadLocalData
		{
			bool EnsureAllocated(bool);
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
	bool (* g_pfnWilFailFast)(wil::FailureInfo const &);
	bool g_fBreakOnFailure;
	bool g_fIsDebuggerPresent;
	bool g_fResultFailFastUnknownExceptions;
	bool g_fResultOutputDebugString;
	bool g_fResultThrowPlatformException;
	long (* g_pfnResultFromCaughtException)();
	long GetFailureLogString(unsigned short *,unsigned __int64,wil::FailureInfo const &);
	long wnf_query_nothrow(_WNF_STATE_NAME const &,bool *,wil::WNF_CHANGE_STAMP_STRUCT *);
	long wnf_query_nothrow<_RM_QUIET_MODE_DATA>(_WNF_STATE_NAME const &,bool *,_RM_QUIET_MODE_DATA *,wil::WNF_CHANGE_STAMP_STRUCT *);
	long wnf_query_nothrow<unsigned long>(_WNF_STATE_NAME const &,bool *,unsigned long *,wil::WNF_CHANGE_STAMP_STRUCT *);
	void RethrowCaughtException();
	void SetLastError(wil::FailureInfo const &);
	void ThrowResultException(wil::FailureInfo const &);
	wil::com_ptr_t<ABI::Windows::Data::Json::IJsonObject,wil::err_exception_policy> ActivateInstance<ABI::Windows::Data::Json::IJsonObject>(unsigned short const *);
	wil::com_ptr_t<ABI::Windows::Data::Json::IJsonObjectStatics,wil::err_exception_policy> GetActivationFactory<ABI::Windows::Data::Json::IJsonObjectStatics>(unsigned short const *);
	wil::com_ptr_t<ABI::Windows::Internal::Signals::ISignalEvaluator,wil::err_exception_policy> ActivateInstance<ABI::Windows::Internal::Signals::ISignalEvaluator>(unsigned short const *);
	wil::com_ptr_t<ABI::Windows::Internal::Signals::ISignalRegistrationManager,wil::err_exception_policy> ActivateInstance<ABI::Windows::Internal::Signals::ISignalRegistrationManager>(unsigned short const *);
	wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_exception_policy> ActivateInstance<Windows::Foundation::Collections::IPropertySet>(unsigned short const *);
	wil::com_ptr_t<Windows::Foundation::IPropertyValueStatics,wil::err_exception_policy> GetActivationFactory<Windows::Foundation::IPropertyValueStatics>(unsigned short const *);
	wil::com_ptr_t<Windows::Internal::PredictionUnit::IPredictionEngine,wil::err_exception_policy> ActivateInstance<Windows::Internal::PredictionUnit::IPredictionEngine>(unsigned short const *);
};

namespace wistd
{
	struct function<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>
	{
		~function<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>();
	};

	struct function<void ()>
	{
		~function<void ()>();
	};

	struct function<void (_RM_QUIET_MODE_DATA const &)>
	{
		~function<void (_RM_QUIET_MODE_DATA const &)>();
	};

	struct function<void (_SEB_EVENT_HEADER const &)>
	{
		~function<void (_SEB_EVENT_HEADER const &)>();
	};

	void __throw_bad_function_call();
};

ATL::_ATL_OBJMAP_ENTRY30 __objMap_UsoCoreWorker;
CUSOCoreWorkerModule _AtlModule;
CbsOfflineUtil vCbsOfflineUtil;
FEATURE_ENABLED_STATE (* g_wil_details_apiGetFeatureEnabledState)(unsigned int,FEATURE_CHANGE_TIME);
FEATURE_ENABLED_STATE (* g_wil_details_internalGetFeatureEnabledState)(unsigned int,FEATURE_CHANGE_TIME);
HINSTANCE__ * g_wil_details_ntdllModuleHandle;
IStream * CreateFileStream(unsigned short const *,bool);
ImageLogger g_DefaultLogger;
TelemetryManager g_TelemetryManager;
_EVENT_TRACE_PROPERTIES * g_pSessionProperties;
_GUID const GUID_OTAOS;
_GUID const GUID_OTAUserInstallable;
_GUID const GUID_OTCOS;
_GUID const MicrosoftWindowsUpdateOrchestratorControlGuid;
_GUID const PARTITION_BASIC_DATA_GUID;
_GUID const USO_SERVICE_DEFAULT;
_GUID const USO_SERVICE_FLIGHT;
_GUID const USO_SERVICE_GUID_TO_DTU;
_GUID const USO_SERVICE_MANAGED;
_GUID const USO_SERVICE_MU;
_GUID const USO_SERVICE_WU;
_RTL_RUN_ONCE g_initOnce;
_RTL_RUN_ONCE g_initOnceFS;
_RTL_SRWLOCK g_formatVolumeLock;
_RTL_SRWLOCK g_scanVolumeLock;
_RTL_SRWLOCK g_serviceCountLock;
__type_info_node __type_info_root_node;
_variant_t vtMissing;
bool IsEmptyOrNullString(unsigned short const *);
bool IsEqualString(unsigned short const *,unsigned short const *);
bool IsTargetTimeWithinBounds(tagVARIANT const &,tagVARIANT const &,_FILETIME);
bool PartitionIsNormalVolume(STORE_ID,PARTITION_TYPE,PARTITION_ATTRIBUTES);
bool PartitionIsNormalVolume(_GUID,unsigned __int64);
bool ValidMbrMetadataPartitionExists(void * const);
char * c_szUpdateStoreHashTagEnd;
char * c_szUpdateStoreHashTagStart;
char * gc_aszTemplateStoreXml;
int GetRiskLevel(std::vector<_escalationObject,std::allocator<_escalationObject> > const &,unsigned long);
int InvStrCmpW(unsigned short const *,unsigned short const *);
int g_wil_details_preventOnDemandStagingConfigReads;
int wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(wil_details_FeaturePropertyCache *,unsigned int,wil_details_ServiceReportingKind,unsigned int,unsigned __int64);
int wil_details_SetEnabledAndHasNotificationStateCallback(wil_details_FeaturePropertyCache *,void *);
int wil_details_SetPropertyCacheOpportunityCallback(wil_details_FeaturePropertyCache *,void *);
int wil_details_SetPropertyCacheUsageCallback(wil_details_FeaturePropertyCache *,void *);
int wil_details_StagingConfig_AreAnyFeaturesConfigured(wil_details_StagingConfig *);
int wil_details_StagingConfig_QueryFeatureState(wil_details_StagingConfig *,wil_FeatureState *,unsigned int,int);
long (* g_wil_details_pfnNtQueryWnfStateData)(__WIL__WNF_STATE_NAME const *,__WIL__WNF_TYPE_ID const *,void const *,unsigned long *,void *,unsigned long *);
long (* g_wil_details_pfnNtUpdateWnfStateData)(__WIL__WNF_STATE_NAME const *,void const *,unsigned long,__WIL__WNF_TYPE_ID const *,void const *,unsigned long,unsigned long);
long (* g_wil_details_pfnRtlSubscribeWnfStateChangeNotification)(__WIL__WNF_USER_SUBSCRIPTION * *,__WIL__WNF_STATE_NAME,unsigned long,long (*)(__WIL__WNF_STATE_NAME,unsigned long,__WIL__WNF_TYPE_ID *,void *,void const *,unsigned long),void *,__WIL__WNF_TYPE_ID *,unsigned long,unsigned long);
long (* g_wil_details_pfnRtlUnsubscribeWnfNotificationWaitForCompletion)(__WIL__WNF_USER_SUBSCRIPTION *);
long AppendString(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &,unsigned short const * const);
long AssignString(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &);
long AssignString(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &,unsigned short const * const);
long ByteArrayToSafeArray(unsigned char *,unsigned long,tagSAFEARRAY * *);
long CheckDriverUpdate(unsigned short *,bool &);
long CheckQualityUpdate(unsigned short *,unsigned __int64,bool &);
long ContainsString(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,bool &,bool);
long CopyString(unsigned short const *,unsigned long,unsigned short * *);
long CopyVariant(_variant_t const &,_variant_t &);
long CreateVolumeArrivalNotification(StorageService *,STORE_ID,wchar_t const * const);
long EncodeBase64W(unsigned char const *,int,unsigned short * *);
long EnumerateUninstalledUpdates();
long GetAllFilesFromFolder(unsigned short const *,std::vector<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::allocator<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > &);
long GetDeviceInterfaceList(_GUID,wchar_t * *,unsigned long *);
long GetDeviceInterfaceProperty(wchar_t const * const,_DEVPROPKEY const *,wchar_t * *,unsigned long *);
long GetDiskGeometry(void * const,_DISK_GEOMETRY_EX * *,unsigned long *);
long GetDiskLayoutInternal(void * const,_DRIVE_LAYOUT_INFORMATION_EX * *,unsigned long *);
long GetDiskNumber(void * const,unsigned long *);
long GetDiskPath(STORE_ID,wchar_t *,unsigned long);
long GetPartitionAttributes(ImageLogger const *,STORE_ID,VolumeTrackerVolume *,PARTITION_ATTRIBUTES *);
long GetPartitionType(ImageLogger const *,STORE_ID,VolumeTrackerVolume *,PARTITION_TYPE *);
long GetRedirectionKeyPath(unsigned short const *,unsigned short const *,unsigned short * *);
long GetRefreshIntervalFromETag(unsigned short const *,unsigned long &);
long GetStoreId(void * const,STORE_ID *);
long GetStoreIdString(STORE_ID,wchar_t * const,unsigned long);
long GetUniversalOrchestrator(IUniversalOrchestrator * *);
long GetUpdateReserveManagerLoader(unsigned short const * const,unsigned short const * const,char const * const,IUpdateReserveManagerLoader * *);
long GetUpdateStore(_GUID const &,std::shared_ptr<UpdateStore> &);
long GetUsoSvc(IUsoSvc * *);
long GetVariableValueFromEscalations(unsigned short const *,int,std::vector<_escalationObject,std::allocator<_escalationObject> > const &,tagVARIANT *);
long GetVolumeFromPartitionName(StorageService *,STORE_ID,wchar_t const * const,VolumeTrackerVolume * *,bool);
long GetWUDeviceID(_GUID *);
long GuidToBSTR(unsigned short * *,_GUID const *);
long GuidToString(unsigned short *,unsigned __int64,_GUID const *);
long IsQualityUpdateForPrimaryOSProduct(unsigned short *,bool &);
long IsUpdateHiddenFromScanResults(unsigned short *,unsigned short *,unsigned __int64,_GUID,bool &);
long MbrMetaGetPartitionName(void * const,unsigned __int64,wchar_t *,unsigned long);
long OpenDisk(ImageLogger const *,STORE_ID,unsigned long,unsigned long,void * *);
long OpenDisk(STORE_ID,unsigned long,unsigned long,void * *);
long OpenVolume(wchar_t const *,unsigned long,unsigned long,void * *);
long OtaUpdatesPerSkuGetUpdateResults(_TlgProvider_t const *,long *,bool *);
long OtcUpdatesPerSkuInstallUpdates(unsigned short const *,unsigned short const *,IUsoSessionInternal *,_TlgProvider_t const *);
long ParseEscalationsArrayFromJson(IUsoSettingArray *,std::vector<_escalationObject,std::allocator<_escalationObject> > &);
long ParseVariablesFromJsonArray(IUsoSettingArray *,std::map<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,_variant_t,case_insensitve_less,std::allocator<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,_variant_t> > > &);
long ReadMbrMetadataPartition(void * const,MBR_META_HEADER * *);
long RemoveJunction(void const * const,wchar_t const * const);
long SafeArrayToByteArray(tagSAFEARRAY *,unsigned char * *,unsigned long *);
long SafeStringToDword(unsigned short const *,int,int,unsigned long *);
long ScheduleMigration(unsigned short const *);
long SetDiskLayout(void * const,_DRIVE_LAYOUT_INFORMATION_EX *,unsigned long);
long SetPostUpdateUXCompleteFlag(bool);
long SetUninstallTimeIfFirstBoot(unsigned short *,bool &,_FILETIME &);
long StringCbLengthW(unsigned short const *,unsigned __int64,unsigned __int64 *);
long StringCchCatW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchCatW(wchar_t *,unsigned __int64,wchar_t const *);
long StringCchCopyA(char *,unsigned __int64,char const *);
long StringCchCopyNExW(unsigned short *,unsigned __int64,unsigned short const *,unsigned __int64,unsigned short * *,unsigned __int64 *,unsigned long);
long StringCchCopyW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchCopyW(wchar_t *,unsigned __int64,wchar_t const *);
long StringCchPrintfExW(unsigned short *,unsigned __int64,unsigned short * *,unsigned __int64 *,unsigned long,unsigned short const *,...);
long StringCchPrintfW(unsigned short *,unsigned __int64,unsigned short const *,...);
long StringCchPrintfW(wchar_t *,unsigned __int64,wchar_t const *,...);
long StringCchVPrintfW(unsigned short *,unsigned __int64,unsigned short const *,char *);
long StringToBSTR(unsigned short const *,unsigned short * *);
long StringToFileTime(unsigned short const *,_FILETIME *);
long StringToGuid(unsigned short const *,_GUID *);
long StringToVariantBSTR(unsigned short const *,tagVARIANT *);
long StringToWString(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *);
long TokenizeWString(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,unsigned short const *,std::vector<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::allocator<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > &);
long TroubleshootingPerSkuCollectFiles(unsigned long,unsigned short *,unsigned long,_TlgProvider_t const *);
long WStringToString(unsigned short const *,std::basic_string<char,std::char_traits<char>,std::allocator<char> > *);
long _AllocStringWorker<CTCoAllocPolicy>(void *,unsigned long,unsigned short const *,unsigned __int64,unsigned __int64,unsigned short * *);
long wil_details_NtQueryWnfStateData(__WIL__WNF_STATE_NAME const *,__WIL__WNF_TYPE_ID const *,void const *,unsigned long *,void *,unsigned long *);
long wil_details_NtUpdateWnfStateData(__WIL__WNF_STATE_NAME const *,void const *,unsigned long,__WIL__WNF_TYPE_ID const *,void const *,unsigned long,unsigned long);
long wil_details_StagingConfig_FireNotification(wil_details_StagingConfig *,unsigned int,unsigned short,int);
long wil_details_StagingConfig_Load(wil_details_StagingConfig *,wil_FeatureStore,unsigned __int64,void *,int);
long wil_details_WriteSRUMWnfUsageBuffer(wil::details_abi::heap_vector<wil_details_FeatureUsageSRUM> *);
std::map<_GUID,std::weak_ptr<UpdateStore>,std::less<_GUID>,std::allocator<std::pair<_GUID const ,std::weak_ptr<UpdateStore> > > > s_updateStoreMap;
unsigned __int64 g_sessionHandle;
unsigned int (* g_wil_details_apiGetFeatureVariant)(unsigned int,FEATURE_CHANGE_TIME,unsigned int *,int *);
unsigned int (* g_wil_details_internalGetFeatureVariant)(unsigned int,FEATURE_CHANGE_TIME,unsigned int *,int *);
unsigned long FormatThread(void *);
unsigned long g_dwFormatTlsIndex;
unsigned long g_dwScanTlsIndex;
unsigned long g_ulServiceCount;
unsigned short const * const RuntimeClass_Windows_Data_Json_JsonObject;
unsigned short const * const RuntimeClass_Windows_Foundation_Collections_PropertySet;
unsigned short const * const RuntimeClass_Windows_Foundation_PropertyValue;
unsigned short const * const RuntimeClass_Windows_Internal_Flighting_ClientAttributes;
unsigned short const * const RuntimeClass_Windows_Internal_Flighting_OneSettings_OneSettingsPayload;
unsigned short const * const RuntimeClass_Windows_Internal_PredictionUnit_PredictionEngine;
unsigned short const * const RuntimeClass_Windows_Internal_Signals_SignalEvaluator;
unsigned short const * const RuntimeClass_Windows_Internal_Signals_SignalRegistrationManager;
unsigned short const * const RuntimeClass_Windows_Storage_Streams_RandomAccessStreamReference;
unsigned short const * const c_szWindowsUpdateEnrollmentId;
unsigned short const * const gc_szIconArgNotifyTrayIcon;
unsigned short const * const gc_szSessionVariableActionListFilePath;
unsigned short const * const gc_szSessionVariableUpdateAgentError;
unsigned short const * const gc_szUxArgReboot;
unsigned short const * const gc_szUxArgRebootForceOthers;
void (* g_wil_details_RecordSRUMFeatureUsage)(unsigned int,unsigned int,unsigned int);
void (* g_wil_details_apiRecordFeatureUsage)(unsigned int,unsigned int,unsigned int,char const *);
void (* g_wil_details_apiSubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
void (* g_wil_details_apiUnsubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
void (* g_wil_details_internalRecordFeatureUsage)(unsigned int,unsigned int,unsigned int,char const *);
void (* g_wil_details_internalSubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
void (* g_wil_details_internalUnsubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
void (* g_wil_details_pfnFeatureLoggingHook)(unsigned int,FEATURE_LOGGED_TRAITS const *,FEATURE_ERROR const *,int,wil_ReportingKind const *,wil_VariantReportingKind const *,unsigned char,unsigned __int64);
void (* g_wil_details_recordFeatureUsage)(unsigned int,wil_details_ServiceReportingKind,unsigned int,wil_details_FeaturePropertyCache *,wil_details_RecordUsageResult *);
void * operator new(unsigned __int64);
void * operator new(unsigned __int64,std::nothrow_t const &);
void * operator new[](unsigned __int64);
void * operator new[](unsigned __int64,std::nothrow_t const &);
void AddNamesToMap(EscalationPhase,std::vector<_escalationObject,std::allocator<_escalationObject> > const &,std::map<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,EscalationPhase,case_insensitve_less,std::allocator<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,EscalationPhase> > > &);
void CompleteMigration();
void DumpRegByte(_iobuf *,unsigned short const *,unsigned long,unsigned char const *,unsigned long);
void DumpRegMultiSz(_iobuf *,unsigned short const *,unsigned short const *,unsigned long);
void DumpRegQword(_iobuf *,unsigned short const *,_ULARGE_INTEGER);
void PutLastScanAttemptTime(IUsoSessionInternal *);
void ThreadPoolTimerCallback(_TP_CALLBACK_INSTANCE *,void *,_TP_TIMER * const);
void UsoLogActiveHoursRestrictionPolicyEnabled(unsigned short,unsigned short);
void UsoLogActivityBlockedByActiveHours(unsigned short,unsigned short,unsigned short const * const,char const * const);
void UsoLogActivityBlockedByBatteryLevel(unsigned long,unsigned long,unsigned short const * const,char const * const);
void UsoLogActivityTerminatedByActiveHours(unsigned short,unsigned short,unsigned short const * const,char const * const);
void UsoLogActivityTerminatedByBatteryLevel(unsigned long,unsigned long,unsigned short const * const,char const * const);
void UsoLogAllowSleepTelemetryEvent(bool,unsigned long,PreventSleepState);
void UsoLogAttemptImmediateReboot(unsigned short const * const,bool);
void UsoLogBypassDownloadWaitEvent(unsigned long,char const *,_GUID,_GUID);
void UsoLogCommitFailedTelemetryEvent(long);
void UsoLogCommitScreenOnEvent(_GUID,unsigned long,_FILETIME,unsigned short const *);
void UsoLogDTUEnabled(char const *);
void UsoLogDTUInitiated(char const *,long,bool,bool);
void UsoLogDTURequestedRebootWhenWuFlightWasPendingCommit();
void UsoLogDeferReasonTelemetryEvent(UpdateScenarioType,_GUID,long,unsigned long,unsigned long,unsigned long,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,char const *);
void UsoLogDetectionBlockedTelemetryEvent(EventScenario,UpdateScenarioType,StateBlockReason,unsigned short const *,bool,char const *,unsigned short const *);
void UsoLogDetectionFailedTelemetryEvent(EventScenario,UpdateScenarioType,StateBlockReason,int,char const *,long,bool,unsigned short const *,long);
void UsoLogDetectionSLABlockedEvent(UpdateScenarioType,unsigned short const *,bool,unsigned long,bool,unsigned long);
void UsoLogDetectionScreenOnEvent(_GUID,unsigned long,unsigned long,_FILETIME,bool,unsigned short const *);
void UsoLogDetectionTriggeredEvent(UpdateScenarioType,bool,unsigned short const *,bool,unsigned long,bool,unsigned long,bool);
void UsoLogDisableUWFFailureEvent(long);
void UsoLogDisableUWFSucceededEvent();
void UsoLogDisplayNeededReasonTelemetryEvent(EventScenario,UpdateScenarioType,_GUID,long,unsigned short const *,char const *,bool,tagUXRebootState);
void UsoLogDownloadScreenOnEvent(_GUID,unsigned long,unsigned long,_FILETIME,bool,unsigned short const *);
void UsoLogEnableEnterpriseAttributionEvent(bool);
void UsoLogEnableUWFBlockedByRebootRequired();
void UsoLogEnableUWFFailureEvent(long);
void UsoLogEnableUWFSucceededEvent();
void UsoLogEscalationRefreshFromSettingsFailedEvent(unsigned int,long);
void UsoLogEscalationRiskLevelsTelemetryEvent(unsigned int,int,unsigned long,int,unsigned long,int,unsigned long,bool);
void UsoLogFlightInapplicableTelemetryEvent(_GUID,UpdateScenarioType,long,long,char const *,bool,unsigned short const *,long);
void UsoLogInitiatingRebootTelemetryEvent(_GUID,UpdateScenarioType,long,char const *,unsigned short const *,bool,bool,tagUXRebootState);
void UsoLogInstallCommitFailedTelemetryEvent(EventScenario,UpdateScenarioType,_GUID,long,long,int,unsigned long,char const *,unsigned short const *,bool,bool,tagUXRebootState);
void UsoLogInstallRebootDeferredTelemetryEvent(EventScenario,UpdateScenarioType,unsigned long,unsigned long,int,unsigned long,char const *,bool,tagUXRebootState);
void UsoLogInstallRebootStartedTelemetryEvent(EventScenario,UpdateScenarioType,_GUID,long,int,unsigned long,int,unsigned long,char const *,unsigned short const *,bool,bool,tagUXRebootState);
void UsoLogInstallScreenOnEvent(_GUID,unsigned long,unsigned long,_FILETIME,bool,unsigned short const *);
void UsoLogLowUptimeTelemetryEvent(unsigned long,unsigned long,unsigned long,unsigned long,bool);
void UsoLogOneshotUpdateTelemetryEvent(int,int,int);
void UsoLogOobeUpdateTelemetryEvent(_GUID,UpdateScenarioType,long,unsigned short const *);
void UsoLogPauseStartTelemetryEvent(_SYSTEMTIME,long,long);
void UsoLogPauseStopTelemetryEvent(unsigned long,long);
void UsoLogPolicyBlockedTelemetryEvent(unsigned short const *);
void UsoLogPostInstallTelemetryEventCV(EventScenario,UpdateScenarioType,_GUID,long,long,_GUID,unsigned long,char const *,unsigned short const *);
void UsoLogPowerMenuOptionsChangedEvent(unsigned long,unsigned long,unsigned long);
void UsoLogPreShutdownStartTelemetryEvent();
void UsoLogPreventSleepTelemetryEvent(bool,unsigned long,unsigned long,unsigned long,bool);
void UsoLogProgressTelemetryEvent(UpdateEvent,UpdateScenarioType,_GUID,long,bool,char const *,unsigned short const *,long,long,long,long);
void UsoLogRebootFailedTelemetryEvent(_GUID,UpdateScenarioType,long,long,unsigned long,unsigned long,char const *,unsigned short const *,bool,tagUXRebootState);
void UsoLogRebootRequiredDeniedByDtuRequest();
void UsoLogRefreshPolicyCacheValuesTelemetryEvent(unsigned short const *,long);
void UsoLogRefreshSettingsTelemetryEvent(unsigned short const *,long);
void UsoLogSeekUpdateEvent(_GUID,long,bool,unsigned short const *);
void UsoLogSeekerUpdateAvailableEvent(_GUID,long,bool,unsigned short const *);
void UsoLogStickUpdateEvent(_GUID);
void UsoLogStoreDiagnosticsTelemetryEvent(USODiagnosticsFields const *);
void UsoLogSystemNeededReasonTelemetryEvent(EventScenario,UpdateScenarioType,_GUID,long,unsigned short const *,char const *,bool,tagUXRebootState);
void UsoLogTrace(unsigned short const *,...);
void UsoLogUUPFallBackStatus(bool,long,unsigned short const *);
void UsoLogUnstickUpdateEvent(_GUID);
void UsoLogUpdateCacheFlushFailed(long);
void UsoLogUpdateCacheLoadFailed(long);
void UsoLogUpdateDeferredTelemetryEvent(UpdateEvent,EventScenario,UpdateScenarioType,StateDeferReason,_GUID,long,int,char const *,unsigned short const *,long);
void UsoLogUpdateDownloadExpireTelemetryEvent(_GUID,char const *);
void UsoLogUpdateInstallPausedTelemetryEvent(_GUID,_GUID);
void UsoLogUpdateNotSupportedByReserves(_GUID);
void UsoLogUpdateRebootRequiredTelemetryEvent(_GUID,UpdateScenarioType,long,char const *,unsigned short const *,bool,tagUXRebootState);
void UsoLogUpdateSerializationEvent(bool,_GUID);
void UsoLogUsoSessionTelemetryEvent(EventScenario,UpdateScenarioType,long,long,_GUID,_GUID,int);
void _TlgWriteActivityAutoStop<0,5>(_TlgProvider_t const *,_GUID const *);
void _TlgWriteActivityAutoStop<140737488355328,5>(_TlgProvider_t const *,_GUID const *);
void _TlgWriteActivityAutoStop<70368744177664,5>(_TlgProvider_t const *,_GUID const *);
void __ArrayUnwind(void *,unsigned __int64,unsigned __int64,void (*)(void *));
void __scrt_initialize_type_info();
void __scrt_throw_std_bad_alloc();
void __scrt_throw_std_bad_array_new_length();
void _com_issue_error(long);
void operator delete(void *);
void operator delete(void *,std::nothrow_t const &);
void operator delete(void *,unsigned __int64);
void operator delete[](void *);
void operator delete[](void *,unsigned __int64);
void wil_details_FeaturePropertyCache_ReportUsageToService(wil_details_FeaturePropertyCache *,unsigned int,FEATURE_LOGGED_TRAITS const *,int,wil_ReportingKind,unsigned __int64);
wchar_t * GetNextInterfaceElement(wchar_t *,unsigned long,wchar_t *);
wchar_t const * * modulesToCache;
wil::critical_section s_updateStoreMapLock;
