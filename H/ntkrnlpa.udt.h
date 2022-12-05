
struct BATTERY_REPORTING_SCALE {
	/*0000*/ ULONG Granularity;
	/*0004*/ ULONG Capacity;
	/*0008*/
};

enum BUS_QUERY_ID_TYPE {
	BusQueryDeviceID = 0x0,
	BusQueryHardwareIDs = 0x1,
	BusQueryCompatibleIDs = 0x2,
	BusQueryInstanceID = 0x3,
	BusQueryDeviceSerialNumber = 0x4
};

struct CMP_OFFSET_ARRAY {
	/*0000*/ ULONG FileOffset;
	/*0004*/ void * DataBuffer;
	/*0008*/ ULONG DataLength;
	/*000c*/
};

enum CPU_VENDORS {
	CPU_NONE = 0x0,
	CPU_INTEL = 0x1,
	CPU_AMD = 0x2,
	CPU_CYRIX = 0x3,
	CPU_TRANSMETA = 0x4,
	CPU_CENTAUR = 0x5,
	CPU_RISE = 0x6,
	CPU_UNKNOWN = 0x7
};

enum DEVICE_TEXT_TYPE {
	DeviceTextDescription = 0x0,
	DeviceTextLocationInformation = 0x1
};

union EX_QUEUE_WORKER_INFO {
	/*0000*/ ULONG QueueDisabled : 01; // 0x00000001;
	/*0000*/ ULONG MakeThreadsAsNecessary : 01; // 0x00000002;
	/*0000*/ ULONG WaitMode : 01; // 0x00000004;
	/*0000*/ ULONG WorkerCount : 29; // 0xfffffff8;
	/*0000*/ LONG QueueWorkerInfo;
	/*0004*/
};

struct LIST_ENTRY32 {
	/*0000*/ ULONG Flink;
	/*0004*/ ULONG Blink;
	/*0008*/
};

struct LIST_ENTRY64 {
	/*0000*/ ULONGLONG Flink;
	/*0008*/ ULONGLONG Blink;
	/*0010*/
};

enum LSA_FOREST_TRUST_RECORD_TYPE {
	ForestTrustTopLevelName = 0x0,
	ForestTrustTopLevelNameEx = 0x1,
	ForestTrustDomainInfo = 0x2,
	ForestTrustRecordTypeLast = 0x2
};

struct PCI_FUNCTION_RESOURCES {
	/*0000*/ _IO_RESOURCE_DESCRIPTOR Limit[0x7];
	/*00e0*/ _CM_PARTIAL_RESOURCE_DESCRIPTOR Current[0x7];
	/*0150*/
};

union PCI_HEADER_TYPE_DEPENDENT {
	struct {
		/*0000*/ UCHAR Spare[0x4];
		/*0004*/
	} type0;
	struct {
		/*0000*/ UCHAR PrimaryBus;
		/*0001*/ UCHAR SecondaryBus;
		/*0002*/ UCHAR SubordinateBus;
		/*0003*/ UCHAR SubtractiveDecode : 01; // 0x01;
		/*0003*/ UCHAR IsaBitSet : 01; // 0x02;
		/*0003*/ UCHAR VgaBitSet : 01; // 0x04;
		/*0003*/ UCHAR WeChangedBusNumbers : 01; // 0x08;
		/*0003*/ UCHAR IsaBitRequired : 01; // 0x10;
		/*0004*/
	} type1;
	struct {
		/*0000*/ UCHAR PrimaryBus;
		/*0001*/ UCHAR SecondaryBus;
		/*0002*/ UCHAR SubordinateBus;
		/*0003*/ UCHAR SubtractiveDecode : 01; // 0x01;
		/*0003*/ UCHAR IsaBitSet : 01; // 0x02;
		/*0003*/ UCHAR VgaBitSet : 01; // 0x04;
		/*0003*/ UCHAR WeChangedBusNumbers : 01; // 0x08;
		/*0003*/ UCHAR IsaBitRequired : 01; // 0x10;
		/*0004*/
	} type2;
	/*0004*/
};

struct PCI_POWER_STATE {
	/*0000*/ _SYSTEM_POWER_STATE CurrentSystemState;
	/*0004*/ _DEVICE_POWER_STATE CurrentDeviceState;
	/*0008*/ _SYSTEM_POWER_STATE SystemWakeLevel;
	/*000c*/ _DEVICE_POWER_STATE DeviceWakeLevel;
	/*0010*/ _DEVICE_POWER_STATE SystemStateMapping[0x7];
	/*002c*/ _IRP * WaitWakeIrp;
	/*0030*/ void (* SavedCancelRoutine)( _DEVICE_OBJECT * , _IRP * );
	/*0034*/ LONG Paging;
	/*0038*/ LONG Hibernate;
	/*003c*/ LONG CrashDump;
	/*0040*/
};

struct PCI_SECONDARY_EXTENSION {
	/*0000*/ _SINGLE_LIST_ENTRY List;
	/*0004*/ PCI_SIGNATURE ExtensionType;
	/*0008*/ void (* Destructor)( void * );
	/*000c*/
};

enum PCI_SIGNATURE {
	PciPdoExtensionType = 0x69635030,
	PciFdoExtensionType = 0x69635031,
	PciArb_Io = 0x69635032,
	PciArb_Memory = 0x69635033,
	PciArb_Interrupt = 0x69635034,
	PciArb_BusNumber = 0x69635035,
	PciTrans_Interrupt = 0x69635036,
	PciInterface_BusHandler = 0x69635037,
	PciInterface_IntRouteHandler = 0x69635038,
	PciInterface_PciCb = 0x69635039,
	PciInterface_LegacyDeviceDetection = 0x6963503a,
	PciInterface_PmeHandler = 0x6963503b,
	PciInterface_DevicePresent = 0x6963503c,
	PciInterface_NativeIde = 0x6963503d,
	PciInterface_AgpTarget = 0x6963503e
};

enum POP_POLICY_DEVICE_TYPE {
	PolicyDeviceSystemButton = 0x0,
	PolicyDeviceThermalZone = 0x1,
	PolicyDeviceBattery = 0x2,
	PolicyInitiatePowerActionAPI = 0x3,
	PolicySetPowerStateAPI = 0x4,
	PolicyImmediateDozeS4 = 0x5,
	PolicySystemIdle = 0x6
};

enum POWER_ACTION {
	PowerActionNone = 0x0,
	PowerActionReserved = 0x1,
	PowerActionSleep = 0x2,
	PowerActionHibernate = 0x3,
	PowerActionShutdown = 0x4,
	PowerActionShutdownReset = 0x5,
	PowerActionShutdownOff = 0x6,
	PowerActionWarmEject = 0x7
};

struct POWER_ACTION_POLICY {
	/*0000*/ POWER_ACTION Action;
	/*0004*/ ULONG Flags;
	/*0008*/ ULONG EventCode;
	/*000c*/
};

struct PO_MEMORY_IMAGE {
	/*0000*/ ULONG Signature;
	/*0004*/ ULONG Version;
	/*0008*/ ULONG CheckSum;
	/*000c*/ ULONG LengthSelf;
	/*0010*/ ULONG PageSelf;
	/*0014*/ ULONG PageSize;
	/*0018*/ ULONG ImageType;
	/*0020*/ _LARGE_INTEGER SystemTime;
	/*0028*/ ULONGLONG InterruptTime;
	/*0030*/ ULONG FeatureFlags;
	/*0034*/ UCHAR HiberFlags;
	/*0035*/ UCHAR spare[0x3];
	/*0038*/ ULONG NoHiberPtes;
	/*003c*/ ULONG HiberVa;
	/*0040*/ _LARGE_INTEGER HiberPte;
	/*0048*/ ULONG NoFreePages;
	/*004c*/ ULONG FreeMapCheck;
	/*0050*/ ULONG WakeCheck;
	/*0054*/ ULONG TotalPages;
	/*0058*/ ULONG FirstTablePage;
	/*005c*/ ULONG LastFilePage;
	/*0060*/ _PO_HIBER_PERF PerfInfo;
	/*00a8*/
};

struct PROCESSOR_IDLE_TIMES {
	/*0000*/ ULONGLONG StartTime;
	/*0008*/ ULONGLONG EndTime;
	/*0010*/ ULONG IdleHandlerReserved[0x4];
	/*0020*/
};

struct PROCESSOR_PERF_STATE {
	/*0000*/ UCHAR PercentFrequency;
	/*0001*/ UCHAR MinCapacity;
	/*0002*/ USHORT Power;
	/*0004*/ UCHAR IncreaseLevel;
	/*0005*/ UCHAR DecreaseLevel;
	/*0006*/ USHORT Flags;
	/*0008*/ ULONG IncreaseTime;
	/*000c*/ ULONG DecreaseTime;
	/*0010*/ ULONG IncreaseCount;
	/*0014*/ ULONG DecreaseCount;
	/*0018*/ ULONGLONG PerformanceTime;
	/*0020*/
};

enum PROFILE_STATUS {
	DOCK_NOTDOCKDEVICE = 0x0,
	DOCK_QUIESCENT = 0x1,
	DOCK_ARRIVING = 0x2,
	DOCK_DEPARTING = 0x3,
	DOCK_EJECTIRP_COMPLETED = 0x4
};

enum ReplacesCorHdrNumericDefines {
	COMIMAGE_FLAGS_ILONLY = 0x1,
	COMIMAGE_FLAGS_32BITREQUIRED = 0x2,
	COMIMAGE_FLAGS_IL_LIBRARY = 0x4,
	COMIMAGE_FLAGS_STRONGNAMESIGNED = 0x8,
	COMIMAGE_FLAGS_TRACKDEBUGDATA = 0x10000,
	COR_VERSION_MAJOR_V2 = 0x2,
	COR_VERSION_MAJOR = 0x2,
	COR_VERSION_MINOR = 0x0,
	COR_DELETED_NAME_LENGTH = 0x8,
	COR_VTABLEGAP_NAME_LENGTH = 0x8,
	NATIVE_TYPE_MAX_CB = 0x1,
	COR_ILMETHOD_SECT_SMALL_MAX_DATASIZE = 0xff,
	IMAGE_COR_MIH_METHODRVA = 0x1,
	IMAGE_COR_MIH_EHRVA = 0x2,
	IMAGE_COR_MIH_BASICBLOCK = 0x8,
	COR_VTABLE_32BIT = 0x1,
	COR_VTABLE_64BIT = 0x2,
	COR_VTABLE_FROM_UNMANAGED = 0x4,
	COR_VTABLE_CALL_MOST_DERIVED = 0x10,
	IMAGE_COR_EATJ_THUNK_SIZE = 0x20,
	MAX_CLASS_NAME = 0x400,
	MAX_PACKAGE_NAME = 0x400
};

struct SYSTEM_POWER_CAPABILITIES {
	/*0000*/ UCHAR PowerButtonPresent;
	/*0001*/ UCHAR SleepButtonPresent;
	/*0002*/ UCHAR LidPresent;
	/*0003*/ UCHAR SystemS1;
	/*0004*/ UCHAR SystemS2;
	/*0005*/ UCHAR SystemS3;
	/*0006*/ UCHAR SystemS4;
	/*0007*/ UCHAR SystemS5;
	/*0008*/ UCHAR HiberFilePresent;
	/*0009*/ UCHAR FullWake;
	/*000a*/ UCHAR VideoDimPresent;
	/*000b*/ UCHAR ApmPresent;
	/*000c*/ UCHAR UpsPresent;
	/*000d*/ UCHAR ThermalControl;
	/*000e*/ UCHAR ProcessorThrottle;
	/*000f*/ UCHAR ProcessorMinThrottle;
	/*0010*/ UCHAR ProcessorMaxThrottle;
	/*0011*/ UCHAR spare2[0x4];
	/*0015*/ UCHAR DiskSpinDown;
	/*0016*/ UCHAR spare3[0x8];
	/*001e*/ UCHAR SystemBatteriesPresent;
	/*001f*/ UCHAR BatteriesAreShortTerm;
	/*0020*/ BATTERY_REPORTING_SCALE BatteryScale[0x3];
	/*0038*/ _SYSTEM_POWER_STATE AcOnLineWake;
	/*003c*/ _SYSTEM_POWER_STATE SoftLidWake;
	/*0040*/ _SYSTEM_POWER_STATE RtcWake;
	/*0044*/ _SYSTEM_POWER_STATE MinDeviceWakeState;
	/*0048*/ _SYSTEM_POWER_STATE DefaultLowLatencyWake;
	/*004c*/
};

struct SYSTEM_POWER_LEVEL {
	/*0000*/ UCHAR Enable;
	/*0001*/ UCHAR Spare[0x3];
	/*0004*/ ULONG BatteryLevel;
	/*0008*/ POWER_ACTION_POLICY PowerPolicy;
	/*0014*/ _SYSTEM_POWER_STATE MinSystemState;
	/*0018*/
};

struct _ACCESS_STATE {
	/*0000*/ _LUID OperationID;
	/*0008*/ UCHAR SecurityEvaluated;
	/*0009*/ UCHAR GenerateAudit;
	/*000a*/ UCHAR GenerateOnClose;
	/*000b*/ UCHAR PrivilegesAllocated;
	/*000c*/ ULONG Flags;
	/*0010*/ ULONG RemainingDesiredAccess;
	/*0014*/ ULONG PreviouslyGrantedAccess;
	/*0018*/ ULONG OriginalDesiredAccess;
	/*001c*/ _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext;
	/*002c*/ void * SecurityDescriptor;
	/*0030*/ void * AuxData;
	union {
		/*0034*/ _INITIAL_PRIVILEGE_SET InitialPrivilegeSet;
		/*0034*/ _PRIVILEGE_SET PrivilegeSet;
		/*0060*/
	} Privileges;
	/*0060*/ UCHAR AuditPrivileges;
	/*0064*/ _UNICODE_STRING ObjectName;
	/*006c*/ _UNICODE_STRING ObjectTypeName;
	/*0074*/
};

struct _ACL {
	/*0000*/ UCHAR AclRevision;
	/*0001*/ UCHAR Sbz1;
	/*0002*/ USHORT AclSize;
	/*0004*/ USHORT AceCount;
	/*0006*/ USHORT Sbz2;
	/*0008*/
};

struct _ACTIVATION_CONTEXT_STACK {
	/*0000*/ ULONG Flags;
	/*0004*/ ULONG NextCookieSequenceNumber;
	/*0008*/ void * ActiveFrame;
	/*000c*/ _LIST_ENTRY FrameListCache;
	/*0014*/
};

struct _ADAPTER_OBJECT;

enum _ALTERNATIVE_ARCHITECTURE_TYPE {
	StandardDesign = 0x0,
	NEC98x86 = 0x1,
	EndAlternatives = 0x2
};

struct _AMD64_DBGKD_CONTROL_SET {
	/*0000*/ ULONG TraceFlag;
	/*0004*/ ULONGLONG Dr7;
	/*000c*/ ULONGLONG CurrentSymbolStart;
	/*0014*/ ULONGLONG CurrentSymbolEnd;
	/*001c*/
};

enum _ARBITER_ACTION {
	ArbiterActionTestAllocation = 0x0,
	ArbiterActionRetestAllocation = 0x1,
	ArbiterActionCommitAllocation = 0x2,
	ArbiterActionRollbackAllocation = 0x3,
	ArbiterActionQueryAllocatedResources = 0x4,
	ArbiterActionWriteReservedResources = 0x5,
	ArbiterActionQueryConflict = 0x6,
	ArbiterActionQueryArbitrate = 0x7,
	ArbiterActionAddReserved = 0x8,
	ArbiterActionBootAllocation = 0x9
};

struct _ARBITER_ALLOCATION_STATE {
	/*0000*/ ULONGLONG Start;
	/*0008*/ ULONGLONG End;
	/*0010*/ ULONGLONG CurrentMinimum;
	/*0018*/ ULONGLONG CurrentMaximum;
	/*0020*/ _ARBITER_LIST_ENTRY * Entry;
	/*0024*/ _ARBITER_ALTERNATIVE * CurrentAlternative;
	/*0028*/ ULONG AlternativeCount;
	/*002c*/ _ARBITER_ALTERNATIVE * Alternatives;
	/*0030*/ USHORT Flags;
	/*0032*/ UCHAR RangeAttributes;
	/*0033*/ UCHAR RangeAvailableAttributes;
	/*0034*/ ULONG WorkSpace;
	/*0038*/
};

struct _ARBITER_ALTERNATIVE {
	/*0000*/ ULONGLONG Minimum;
	/*0008*/ ULONGLONG Maximum;
	/*0010*/ ULONG Length;
	/*0014*/ ULONG Alignment;
	/*0018*/ LONG Priority;
	/*001c*/ ULONG Flags;
	/*0020*/ _IO_RESOURCE_DESCRIPTOR * Descriptor;
	/*0024*/ ULONG Reserved[0x3];
	/*0030*/
};

struct _ARBITER_CONFLICT_INFO {
	/*0000*/ _DEVICE_OBJECT * OwningObject;
	/*0008*/ ULONGLONG Start;
	/*0010*/ ULONGLONG End;
	/*0018*/
};

struct _ARBITER_INSTANCE {
	/*0000*/ ULONG Signature;
	/*0004*/ _KEVENT * MutexEvent;
	/*0008*/ USHORT * Name;
	/*000c*/ INT ResourceType;
	/*0010*/ _RTL_RANGE_LIST * Allocation;
	/*0014*/ _RTL_RANGE_LIST * PossibleAllocation;
	/*0018*/ _ARBITER_ORDERING_LIST OrderingList;
	/*0020*/ _ARBITER_ORDERING_LIST ReservedList;
	/*0028*/ LONG ReferenceCount;
	/*002c*/ _ARBITER_INTERFACE * Interface;
	/*0030*/ ULONG AllocationStackMaxSize;
	/*0034*/ _ARBITER_ALLOCATION_STATE * AllocationStack;
	/*0038*/ LONG (* UnpackRequirement)( _IO_RESOURCE_DESCRIPTOR * , ULONGLONG * , ULONGLONG * , ULONG * , ULONG * );
	/*003c*/ LONG (* PackResource)( _IO_RESOURCE_DESCRIPTOR * , ULONGLONG , _CM_PARTIAL_RESOURCE_DESCRIPTOR * );
	/*0040*/ LONG (* UnpackResource)( _CM_PARTIAL_RESOURCE_DESCRIPTOR * , ULONGLONG * , ULONG * );
	/*0044*/ LONG (* ScoreRequirement)( _IO_RESOURCE_DESCRIPTOR * );
	/*0048*/ LONG (* TestAllocation)( _ARBITER_INSTANCE * , _LIST_ENTRY * );
	/*004c*/ LONG (* RetestAllocation)( _ARBITER_INSTANCE * , _LIST_ENTRY * );
	/*0050*/ LONG (* CommitAllocation)( _ARBITER_INSTANCE * );
	/*0054*/ LONG (* RollbackAllocation)( _ARBITER_INSTANCE * );
	/*0058*/ LONG (* BootAllocation)( _ARBITER_INSTANCE * , _LIST_ENTRY * );
	/*005c*/ LONG (* QueryArbitrate)( _ARBITER_INSTANCE * , _LIST_ENTRY * );
	/*0060*/ LONG (* QueryConflict)( _ARBITER_INSTANCE * , _DEVICE_OBJECT * , _IO_RESOURCE_DESCRIPTOR * , ULONG * , _ARBITER_CONFLICT_INFO * * );
	/*0064*/ LONG (* AddReserved)( _ARBITER_INSTANCE * , _IO_RESOURCE_DESCRIPTOR * , _CM_PARTIAL_RESOURCE_DESCRIPTOR * );
	/*0068*/ LONG (* StartArbiter)( _ARBITER_INSTANCE * , _CM_RESOURCE_LIST * );
	/*006c*/ LONG (* PreprocessEntry)( _ARBITER_INSTANCE * , _ARBITER_ALLOCATION_STATE * );
	/*0070*/ LONG (* AllocateEntry)( _ARBITER_INSTANCE * , _ARBITER_ALLOCATION_STATE * );
	/*0074*/ UCHAR (* GetNextAllocationRange)( _ARBITER_INSTANCE * , _ARBITER_ALLOCATION_STATE * );
	/*0078*/ UCHAR (* FindSuitableRange)( _ARBITER_INSTANCE * , _ARBITER_ALLOCATION_STATE * );
	/*007c*/ void (* AddAllocation)( _ARBITER_INSTANCE * , _ARBITER_ALLOCATION_STATE * );
	/*0080*/ void (* BacktrackAllocation)( _ARBITER_INSTANCE * , _ARBITER_ALLOCATION_STATE * );
	/*0084*/ UCHAR (* OverrideConflict)( _ARBITER_INSTANCE * , _ARBITER_ALLOCATION_STATE * );
	/*0088*/ UCHAR TransactionInProgress;
	/*008c*/ void * Extension;
	/*0090*/ _DEVICE_OBJECT * BusDeviceObject;
	/*0094*/ void * ConflictCallbackContext;
	/*0098*/ UCHAR (* ConflictCallback)( void * , _RTL_RANGE * );
	/*009c*/
};

struct _ARBITER_INTERFACE {
	/*0000*/ USHORT Size;
	/*0002*/ USHORT Version;
	/*0004*/ void * Context;
	/*0008*/ void (* InterfaceReference)( void * );
	/*000c*/ void (* InterfaceDereference)( void * );
	/*0010*/ LONG (* ArbiterHandler)( void * , _ARBITER_ACTION , _ARBITER_PARAMETERS * );
	/*0014*/ ULONG Flags;
	/*0018*/
};

struct _ARBITER_LIST_ENTRY {
	/*0000*/ _LIST_ENTRY ListEntry;
	/*0008*/ ULONG AlternativeCount;
	/*000c*/ _IO_RESOURCE_DESCRIPTOR * Alternatives;
	/*0010*/ _DEVICE_OBJECT * PhysicalDeviceObject;
	/*0014*/ _ARBITER_REQUEST_SOURCE RequestSource;
	/*0018*/ ULONG Flags;
	/*001c*/ LONG WorkSpace;
	/*0020*/ _INTERFACE_TYPE InterfaceType;
	/*0024*/ ULONG SlotNumber;
	/*0028*/ ULONG BusNumber;
	/*002c*/ _CM_PARTIAL_RESOURCE_DESCRIPTOR * Assignment;
	/*0030*/ _IO_RESOURCE_DESCRIPTOR * SelectedAlternative;
	/*0034*/ _ARBITER_RESULT Result;
	/*0038*/
};

struct _ARBITER_ORDERING {
	/*0000*/ ULONGLONG Start;
	/*0008*/ ULONGLONG End;
	/*0010*/
};

struct _ARBITER_ORDERING_LIST {
	/*0000*/ USHORT Count;
	/*0002*/ USHORT Maximum;
	/*0004*/ _ARBITER_ORDERING * Orderings;
	/*0008*/
};

struct _ARBITER_PARAMETERS {
	union {
		struct {
			/*0000*/ _LIST_ENTRY * ArbitrationList;
			/*0004*/ ULONG AllocateFromCount;
			/*0008*/ _CM_PARTIAL_RESOURCE_DESCRIPTOR * AllocateFrom;
			/*000c*/
		} TestAllocation;
		struct {
			/*0000*/ _LIST_ENTRY * ArbitrationList;
			/*0004*/ ULONG AllocateFromCount;
			/*0008*/ _CM_PARTIAL_RESOURCE_DESCRIPTOR * AllocateFrom;
			/*000c*/
		} RetestAllocation;
		struct {
			/*0000*/ _LIST_ENTRY * ArbitrationList;
			/*0004*/
		} BootAllocation;
		struct {
			/*0000*/ _CM_PARTIAL_RESOURCE_LIST * * AllocatedResources;
			/*0004*/
		} QueryAllocatedResources;
		struct {
			/*0000*/ _DEVICE_OBJECT * PhysicalDeviceObject;
			/*0004*/ _IO_RESOURCE_DESCRIPTOR * ConflictingResource;
			/*0008*/ ULONG * ConflictCount;
			/*000c*/ _ARBITER_CONFLICT_INFO * * Conflicts;
			/*0010*/
		} QueryConflict;
		struct {
			/*0000*/ _LIST_ENTRY * ArbitrationList;
			/*0004*/
		} QueryArbitrate;
		struct {
			/*0000*/ _DEVICE_OBJECT * ReserveDevice;
			/*0004*/
		} AddReserved;
		/*0010*/
	} Parameters;
	/*0010*/
};

enum _ARBITER_REQUEST_SOURCE {
	ArbiterRequestUndefined = 0xffffffff,
	ArbiterRequestLegacyReported = 0x0,
	ArbiterRequestHalReported = 0x1,
	ArbiterRequestLegacyAssigned = 0x2,
	ArbiterRequestPnpDetected = 0x3,
	ArbiterRequestPnpEnumerated = 0x4
};

enum _ARBITER_RESULT {
	ArbiterResultUndefined = 0xffffffff,
	ArbiterResultSuccess = 0x0,
	ArbiterResultExternalConflict = 0x1,
	ArbiterResultNullRequest = 0x2
};

struct _BITMAP_RANGE {
	/*0000*/ _LIST_ENTRY Links;
	/*0008*/ LONGLONG BasePage;
	/*0010*/ ULONG FirstDirtyPage;
	/*0014*/ ULONG LastDirtyPage;
	/*0018*/ ULONG DirtyPages;
	/*001c*/ ULONG * Bitmap;
	/*0020*/
};

enum _BUS_DATA_TYPE {
	ConfigurationSpaceUndefined = 0xffffffff,
	Cmos = 0x0,
	EisaConfiguration = 0x1,
	Pos = 0x2,
	CbusConfiguration = 0x3,
	PCIConfiguration = 0x4,
	VMEConfiguration = 0x5,
	NuBusConfiguration = 0x6,
	PCMCIAConfiguration = 0x7,
	MPIConfiguration = 0x8,
	MPSAConfiguration = 0x9,
	PNPISAConfiguration = 0xa,
	SgiInternalConfiguration = 0xb,
	MaximumBusDataType = 0xc
};

struct _BUS_EXTENSION_LIST {
	/*0000*/ void * Next;
	/*0004*/ _PI_BUS_EXTENSION * BusExtension;
	/*0008*/
};

struct _BUS_HANDLER {
	/*0000*/ ULONG Version;
	/*0004*/ _INTERFACE_TYPE InterfaceType;
	/*0008*/ _BUS_DATA_TYPE ConfigurationType;
	/*000c*/ ULONG BusNumber;
	/*0010*/ _DEVICE_OBJECT * DeviceObject;
	/*0014*/ _BUS_HANDLER * ParentHandler;
	/*0018*/ void * BusData;
	/*001c*/ ULONG DeviceControlExtensionSize;
	/*0020*/ _SUPPORTED_RANGES * BusAddresses;
	/*0024*/ ULONG Reserved[0x4];
	/*0034*/ ULONG (* GetBusData)( _BUS_HANDLER * , _BUS_HANDLER * , ULONG , void * , ULONG , ULONG );
	/*0038*/ ULONG (* SetBusData)( _BUS_HANDLER * , _BUS_HANDLER * , ULONG , void * , ULONG , ULONG );
	/*003c*/ LONG (* AdjustResourceList)( _BUS_HANDLER * , _BUS_HANDLER * , _IO_RESOURCE_REQUIREMENTS_LIST * * );
	/*0040*/ LONG (* AssignSlotResources)( _BUS_HANDLER * , _BUS_HANDLER * , _UNICODE_STRING * , _UNICODE_STRING * , _DRIVER_OBJECT * , _DEVICE_OBJECT * , ULONG , _CM_RESOURCE_LIST * * );
	/*0044*/ ULONG (* GetInterruptVector)( _BUS_HANDLER * , _BUS_HANDLER * , ULONG , ULONG , UCHAR * , ULONG * );
	/*0048*/ UCHAR (* TranslateBusAddress)( _BUS_HANDLER * , _BUS_HANDLER * , _LARGE_INTEGER , ULONG * , _LARGE_INTEGER * );
	/*004c*/ void * Spare1;
	/*0050*/ void * Spare2;
	/*0054*/ void * Spare3;
	/*0058*/ void * Spare4;
	/*005c*/ void * Spare5;
	/*0060*/ void * Spare6;
	/*0064*/ void * Spare7;
	/*0068*/ void * Spare8;
	/*006c*/
};

struct _CACHED_CHILD_LIST {
	/*0000*/ ULONG Count;
	/*0004*/ ULONG ValueList;
	/*0004*/ _CM_KEY_CONTROL_BLOCK * RealKcb;
	/*0008*/
};

struct _CACHE_MANAGER_CALLBACKS {
	/*0000*/ UCHAR (* AcquireForLazyWrite)( void * , UCHAR );
	/*0004*/ void (* ReleaseFromLazyWrite)( void * );
	/*0008*/ UCHAR (* AcquireForReadAhead)( void * , UCHAR );
	/*000c*/ void (* ReleaseFromReadAhead)( void * );
	/*0010*/
};

struct _CACHE_UNINITIALIZE_EVENT {
	/*0000*/ _CACHE_UNINITIALIZE_EVENT * Next;
	/*0004*/ _KEVENT Event;
	/*0014*/
};

struct _CALL_HASH_ENTRY {
	/*0000*/ _LIST_ENTRY ListEntry;
	/*0008*/ void * CallersAddress;
	/*000c*/ void * CallersCaller;
	/*0010*/ ULONG CallCount;
	/*0014*/
};

struct _CALL_PERFORMANCE_DATA {
	/*0000*/ ULONG SpinLock;
	/*0004*/ _LIST_ENTRY HashTable[0x40];
	/*0204*/
};

struct _CELL_DATA {
	/*0000*/ _u u;
	/*0050*/
};

struct _CHILD_LIST {
	/*0000*/ ULONG Count;
	/*0004*/ ULONG List;
	/*0008*/
};

struct _CLIENT_ID {
	/*0000*/ void * UniqueProcess;
	/*0004*/ void * UniqueThread;
	/*0008*/
};

struct _CMHIVE {
	/*0000*/ _HHIVE Hive;
	/*0210*/ void * FileHandles[0x3];
	/*021c*/ _LIST_ENTRY NotifyList;
	/*0224*/ _LIST_ENTRY HiveList;
	/*022c*/ _FAST_MUTEX * HiveLock;
	/*0230*/ _FAST_MUTEX * ViewLock;
	/*0234*/ _LIST_ENTRY LRUViewListHead;
	/*023c*/ _LIST_ENTRY PinViewListHead;
	/*0244*/ _FILE_OBJECT * FileObject;
	/*0248*/ _UNICODE_STRING FileFullPath;
	/*0250*/ _UNICODE_STRING FileUserName;
	/*0258*/ USHORT MappedViews;
	/*025a*/ USHORT PinnedViews;
	/*025c*/ ULONG UseCount;
	/*0260*/ ULONG SecurityCount;
	/*0264*/ ULONG SecurityCacheSize;
	/*0268*/ LONG SecurityHitHint;
	/*026c*/ _CM_KEY_SECURITY_CACHE_ENTRY * SecurityCache;
	/*0270*/ _LIST_ENTRY SecurityHash[0x40];
	/*0470*/ _KEVENT * UnloadEvent;
	/*0474*/ _CM_KEY_CONTROL_BLOCK * RootKcb;
	/*0478*/ UCHAR Frozen;
	/*047c*/ _WORK_QUEUE_ITEM * UnloadWorkItem;
	/*0480*/ UCHAR GrowOnlyMode;
	/*0484*/ ULONG GrowOffset;
	/*0488*/ _LIST_ENTRY KcbConvertListHead;
	/*0490*/ _LIST_ENTRY KnodeConvertListHead;
	/*0498*/ _CM_CELL_REMAP_BLOCK * CellRemapArray;
	/*049c*/ ULONG Flags;
	/*04a0*/
};

struct _CM_BIG_DATA {
	/*0000*/ USHORT Signature;
	/*0002*/ USHORT Count;
	/*0004*/ ULONG List;
	/*0008*/
};

struct _CM_CACHED_VALUE_INDEX {
	/*0000*/ ULONG CellIndex;
	union {
		/*0004*/ _CELL_DATA CellData;
		/*0004*/ ULONG List[0x1];
		/*0054*/
	} Data;
	/*0054*/
};

struct _CM_CELL_REMAP_BLOCK {
	/*0000*/ ULONG OldCell;
	/*0004*/ ULONG NewCell;
	/*0008*/
};

struct _CM_FULL_RESOURCE_DESCRIPTOR {
	/*0000*/ _INTERFACE_TYPE InterfaceType;
	/*0004*/ ULONG BusNumber;
	/*0008*/ _CM_PARTIAL_RESOURCE_LIST PartialResourceList;
	/*0020*/
};

struct _CM_INDEX_HINT_BLOCK {
	/*0000*/ ULONG Count;
	/*0004*/ ULONG HashKey[0x1];
	/*0008*/
};

struct _CM_KEY_BODY {
	/*0000*/ ULONG Type;
	/*0004*/ _CM_KEY_CONTROL_BLOCK * KeyControlBlock;
	/*0008*/ _CM_NOTIFY_BLOCK * NotifyBlock;
	/*000c*/ void * ProcessID;
	/*0010*/ ULONG Callers;
	/*0014*/ void * CallerAddress[0xa];
	/*003c*/ _LIST_ENTRY KeyBodyList;
	/*0044*/
};

struct _CM_KEY_CONTROL_BLOCK {
	/*0000*/ ULONG RefCount;
	/*0004*/ ULONG ExtFlags : 08; // 0x000000ff;
	/*0004*/ ULONG PrivateAlloc : 01; // 0x00000100;
	/*0004*/ ULONG Delete : 01; // 0x00000200;
	/*0004*/ ULONG DelayedCloseIndex : 12; // 0x003ffc00;
	/*0004*/ ULONG TotalLevels : 10; // 0xffc00000;
	/*0008*/ _CM_KEY_HASH KeyHash;
	/*0008*/ ULONG ConvKey;
	/*000c*/ _CM_KEY_HASH * NextHash;
	/*0010*/ _HHIVE * KeyHive;
	/*0014*/ ULONG KeyCell;
	/*0018*/ _CM_KEY_CONTROL_BLOCK * ParentKcb;
	/*001c*/ _CM_NAME_CONTROL_BLOCK * NameBlock;
	/*0020*/ _CM_KEY_SECURITY_CACHE * CachedSecurity;
	/*0024*/ _CACHED_CHILD_LIST ValueCache;
	/*002c*/ _CM_INDEX_HINT_BLOCK * IndexHint;
	/*002c*/ ULONG HashKey;
	/*002c*/ ULONG SubKeyCount;
	/*0030*/ _LIST_ENTRY KeyBodyListHead;
	/*0030*/ _LIST_ENTRY FreeListEntry;
	/*0038*/ _LARGE_INTEGER KcbLastWriteTime;
	/*0040*/ USHORT KcbMaxNameLen;
	/*0042*/ USHORT KcbMaxValueNameLen;
	/*0044*/ ULONG KcbMaxValueDataLen;
	/*0048*/ ULONG KcbUserFlags : 04; // 0x0000000f;
	/*0048*/ ULONG KcbVirtControlFlags : 04; // 0x000000f0;
	/*0048*/ ULONG KcbDebug : 08; // 0x0000ff00;
	/*0048*/ ULONG Flags : 16; // 0xffff0000;
	/*0050*/
};

struct _CM_KEY_HASH {
	/*0000*/ ULONG ConvKey;
	/*0004*/ _CM_KEY_HASH * NextHash;
	/*0008*/ _HHIVE * KeyHive;
	/*000c*/ ULONG KeyCell;
	/*0010*/
};

struct _CM_KEY_INDEX {
	/*0000*/ USHORT Signature;
	/*0002*/ USHORT Count;
	/*0004*/ ULONG List[0x1];
	/*0008*/
};

struct _CM_KEY_NODE {
	/*0000*/ USHORT Signature;
	/*0002*/ USHORT Flags;
	/*0004*/ _LARGE_INTEGER LastWriteTime;
	/*000c*/ ULONG Spare;
	/*0010*/ ULONG Parent;
	/*0014*/ ULONG SubKeyCounts[0x2];
	/*001c*/ ULONG SubKeyLists[0x2];
	/*0024*/ _CHILD_LIST ValueList;
	/*001c*/ _CM_KEY_REFERENCE ChildHiveReference;
	/*002c*/ ULONG Security;
	/*0030*/ ULONG Class;
	/*0034*/ ULONG MaxNameLen : 16; // 0x0000ffff;
	/*0034*/ ULONG UserFlags : 04; // 0x000f0000;
	/*0034*/ ULONG VirtControlFlags : 04; // 0x00f00000;
	/*0034*/ ULONG Debug : 08; // 0xff000000;
	/*0038*/ ULONG MaxClassLen;
	/*003c*/ ULONG MaxValueNameLen;
	/*0040*/ ULONG MaxValueDataLen;
	/*0044*/ ULONG WorkVar;
	/*0048*/ USHORT NameLength;
	/*004a*/ USHORT ClassLength;
	/*004c*/ USHORT Name[0x1];
	/*0050*/
};

struct _CM_KEY_REFERENCE {
	/*0000*/ ULONG KeyCell;
	/*0004*/ _HHIVE * KeyHive;
	/*0008*/
};

struct _CM_KEY_SECURITY {
	/*0000*/ USHORT Signature;
	/*0002*/ USHORT Reserved;
	/*0004*/ ULONG Flink;
	/*0008*/ ULONG Blink;
	/*000c*/ ULONG ReferenceCount;
	/*0010*/ ULONG DescriptorLength;
	/*0014*/ _SECURITY_DESCRIPTOR_RELATIVE Descriptor;
	/*0028*/
};

struct _CM_KEY_SECURITY_CACHE {
	/*0000*/ ULONG Cell;
	/*0004*/ ULONG ConvKey;
	/*0008*/ _LIST_ENTRY List;
	/*0010*/ ULONG DescriptorLength;
	/*0014*/ _SECURITY_DESCRIPTOR_RELATIVE Descriptor;
	/*0028*/
};

struct _CM_KEY_SECURITY_CACHE_ENTRY {
	/*0000*/ ULONG Cell;
	/*0004*/ _CM_KEY_SECURITY_CACHE * CachedSecurity;
	/*0008*/
};

struct _CM_KEY_VALUE {
	/*0000*/ USHORT Signature;
	/*0002*/ USHORT NameLength;
	/*0004*/ ULONG DataLength;
	/*0008*/ ULONG Data;
	/*000c*/ ULONG Type;
	/*0010*/ USHORT Flags;
	/*0012*/ USHORT Spare;
	/*0014*/ USHORT Name[0x1];
	/*0018*/
};

struct _CM_NAME_CONTROL_BLOCK {
	/*0000*/ UCHAR Compressed;
	/*0002*/ USHORT RefCount;
	/*0004*/ _CM_NAME_HASH NameHash;
	/*0004*/ ULONG ConvKey;
	/*0008*/ _CM_KEY_HASH * NextHash;
	/*000c*/ USHORT NameLength;
	/*000e*/ USHORT Name[0x1];
	/*0010*/
};

struct _CM_NAME_HASH {
	/*0000*/ ULONG ConvKey;
	/*0004*/ _CM_NAME_HASH * NextHash;
	/*0008*/ USHORT NameLength;
	/*000a*/ USHORT Name[0x1];
	/*000c*/
};

struct _CM_NOTIFY_BLOCK {
	/*0000*/ _LIST_ENTRY HiveList;
	/*0008*/ _LIST_ENTRY PostList;
	/*0010*/ _CM_KEY_CONTROL_BLOCK * KeyControlBlock;
	/*0014*/ _CM_KEY_BODY * KeyBody;
	/*0018*/ ULONG Filter : 30; // 0x3fffffff;
	/*0018*/ ULONG WatchTree : 01; // 0x40000000;
	/*0018*/ ULONG NotifyPending : 01; // 0x80000000;
	/*001c*/ _SECURITY_SUBJECT_CONTEXT SubjectContext;
	/*002c*/
};

struct _CM_PARTIAL_RESOURCE_DESCRIPTOR {
	/*0000*/ UCHAR Type;
	/*0001*/ UCHAR ShareDisposition;
	/*0002*/ USHORT Flags;
	union {
		struct {
			/*0004*/ _LARGE_INTEGER Start;
			/*000c*/ ULONG Length;
			/*0010*/
		} Generic;
		struct {
			/*0004*/ _LARGE_INTEGER Start;
			/*000c*/ ULONG Length;
			/*0010*/
		} Port;
		struct {
			/*0004*/ ULONG Level;
			/*0008*/ ULONG Vector;
			/*000c*/ ULONG Affinity;
			/*0010*/
		} Interrupt;
		struct {
			/*0004*/ _LARGE_INTEGER Start;
			/*000c*/ ULONG Length;
			/*0010*/
		} Memory;
		struct {
			/*0004*/ ULONG Channel;
			/*0008*/ ULONG Port;
			/*000c*/ ULONG Reserved1;
			/*0010*/
		} Dma;
		struct {
			/*0004*/ ULONG Data[0x3];
			/*0010*/
		} DevicePrivate;
		struct {
			/*0004*/ ULONG Start;
			/*0008*/ ULONG Length;
			/*000c*/ ULONG Reserved;
			/*0010*/
		} BusNumber;
		struct {
			/*0004*/ ULONG DataSize;
			/*0008*/ ULONG Reserved1;
			/*000c*/ ULONG Reserved2;
			/*0010*/
		} DeviceSpecificData;
		/*0010*/
	} u;
	/*0010*/
};

struct _CM_PARTIAL_RESOURCE_LIST {
	/*0000*/ USHORT Version;
	/*0002*/ USHORT Revision;
	/*0004*/ ULONG Count;
	/*0008*/ _CM_PARTIAL_RESOURCE_DESCRIPTOR PartialDescriptors[0x1];
	/*0018*/
};

struct _CM_RESOURCE_LIST {
	/*0000*/ ULONG Count;
	/*0004*/ _CM_FULL_RESOURCE_DESCRIPTOR List[0x1];
	/*0024*/
};

struct _CM_VIEW_OF_FILE {
	/*0000*/ _LIST_ENTRY LRUViewList;
	/*0008*/ _LIST_ENTRY PinViewList;
	/*0010*/ ULONG FileOffset;
	/*0014*/ ULONG Size;
	/*0018*/ ULONG * ViewAddress;
	/*001c*/ void * Bcb;
	/*0020*/ ULONG UseCount;
	/*0024*/
};

struct _COMPRESSED_DATA_INFO {
	/*0000*/ USHORT CompressionFormatAndEngine;
	/*0002*/ UCHAR CompressionUnitShift;
	/*0003*/ UCHAR ChunkShift;
	/*0004*/ UCHAR ClusterShift;
	/*0005*/ UCHAR Reserved;
	/*0006*/ USHORT NumberOfChunks;
	/*0008*/ ULONG CompressedChunkSizes[0x1];
	/*000c*/
};

struct _CONTEXT {
	/*0000*/ ULONG ContextFlags;
	/*0004*/ ULONG Dr0;
	/*0008*/ ULONG Dr1;
	/*000c*/ ULONG Dr2;
	/*0010*/ ULONG Dr3;
	/*0014*/ ULONG Dr6;
	/*0018*/ ULONG Dr7;
	/*001c*/ _FLOATING_SAVE_AREA FloatSave;
	/*008c*/ ULONG SegGs;
	/*0090*/ ULONG SegFs;
	/*0094*/ ULONG SegEs;
	/*0098*/ ULONG SegDs;
	/*009c*/ ULONG Edi;
	/*00a0*/ ULONG Esi;
	/*00a4*/ ULONG Ebx;
	/*00a8*/ ULONG Edx;
	/*00ac*/ ULONG Ecx;
	/*00b0*/ ULONG Eax;
	/*00b4*/ ULONG Ebp;
	/*00b8*/ ULONG Eip;
	/*00bc*/ ULONG SegCs;
	/*00c0*/ ULONG EFlags;
	/*00c4*/ ULONG Esp;
	/*00c8*/ ULONG SegSs;
	/*00cc*/ UCHAR ExtendedRegisters[0x200];
	/*02cc*/
};

struct _CONTROL_AREA {
	/*0000*/ _SEGMENT * Segment;
	/*0004*/ _LIST_ENTRY DereferenceList;
	/*000c*/ ULONG NumberOfSectionReferences;
	/*0010*/ ULONG NumberOfPfnReferences;
	/*0014*/ ULONG NumberOfMappedViews;
	/*0018*/ USHORT NumberOfSubsections;
	/*001a*/ USHORT FlushInProgressCount;
	/*001c*/ ULONG NumberOfUserReferences;
	union {
		/*0020*/ ULONG LongFlags;
		/*0020*/ _MMSECTION_FLAGS Flags;
		/*0024*/
	} u;
	/*0024*/ _FILE_OBJECT * FilePointer;
	/*0028*/ _EVENT_COUNTER * WaitingForDeletion;
	/*002c*/ USHORT ModifiedWriteCount;
	/*002e*/ USHORT NumberOfSystemCacheViews;
	/*0030*/
};

struct _CURDIR {
	/*0000*/ _UNICODE_STRING DosPath;
	/*0008*/ void * Handle;
	/*000c*/
};

struct _DBGKD_ANY_CONTROL_SET {
	/*0000*/ _X86_DBGKD_CONTROL_SET X86ControlSet;
	/*0000*/ ULONG AlphaControlSet;
	/*0000*/ _IA64_DBGKD_CONTROL_SET IA64ControlSet;
	/*0000*/ _AMD64_DBGKD_CONTROL_SET Amd64ControlSet;
	/*001c*/
};

struct _DBGKD_BREAKPOINTEX {
	/*0000*/ ULONG BreakPointCount;
	/*0004*/ LONG ContinueStatus;
	/*0008*/
};

struct _DBGKD_CONTINUE {
	/*0000*/ LONG ContinueStatus;
	/*0004*/
};

struct _DBGKD_CONTINUE2 {
	/*0000*/ LONG ContinueStatus;
	/*0004*/ _X86_DBGKD_CONTROL_SET ControlSet;
	/*0004*/ _DBGKD_ANY_CONTROL_SET AnyControlSet;
	/*0020*/
};

struct _DBGKD_FILL_MEMORY {
	/*0000*/ ULONGLONG Address;
	/*0008*/ ULONG Length;
	/*000c*/ USHORT Flags;
	/*000e*/ USHORT PatternLength;
	/*0010*/
};

struct _DBGKD_GET_CONTEXT {
	/*0000*/ ULONG Unused;
	/*0004*/
};

struct _DBGKD_GET_INTERNAL_BREAKPOINT32 {
	/*0000*/ ULONG BreakpointAddress;
	/*0004*/ ULONG Flags;
	/*0008*/ ULONG Calls;
	/*000c*/ ULONG MaxCallsPerPeriod;
	/*0010*/ ULONG MinInstructions;
	/*0014*/ ULONG MaxInstructions;
	/*0018*/ ULONG TotalInstructions;
	/*001c*/
};

struct _DBGKD_GET_INTERNAL_BREAKPOINT64 {
	/*0000*/ ULONGLONG BreakpointAddress;
	/*0008*/ ULONG Flags;
	/*000c*/ ULONG Calls;
	/*0010*/ ULONG MaxCallsPerPeriod;
	/*0014*/ ULONG MinInstructions;
	/*0018*/ ULONG MaxInstructions;
	/*001c*/ ULONG TotalInstructions;
	/*0020*/
};

struct _DBGKD_GET_SET_BUS_DATA {
	/*0000*/ ULONG BusDataType;
	/*0004*/ ULONG BusNumber;
	/*0008*/ ULONG SlotNumber;
	/*000c*/ ULONG Offset;
	/*0010*/ ULONG Length;
	/*0014*/
};

struct _DBGKD_GET_VERSION32 {
	/*0000*/ USHORT MajorVersion;
	/*0002*/ USHORT MinorVersion;
	/*0004*/ USHORT ProtocolVersion;
	/*0006*/ USHORT Flags;
	/*0008*/ ULONG KernBase;
	/*000c*/ ULONG PsLoadedModuleList;
	/*0010*/ USHORT MachineType;
	/*0012*/ USHORT ThCallbackStack;
	/*0014*/ USHORT NextCallback;
	/*0016*/ USHORT FramePointer;
	/*0018*/ ULONG KiCallUserMode;
	/*001c*/ ULONG KeUserCallbackDispatcher;
	/*0020*/ ULONG BreakpointWithStatus;
	/*0024*/ ULONG DebuggerDataList;
	/*0028*/
};

struct _DBGKD_GET_VERSION64 {
	/*0000*/ USHORT MajorVersion;
	/*0002*/ USHORT MinorVersion;
	/*0004*/ USHORT ProtocolVersion;
	/*0006*/ USHORT Flags;
	/*0008*/ USHORT MachineType;
	/*000a*/ UCHAR MaxPacketType;
	/*000b*/ UCHAR MaxStateChange;
	/*000c*/ UCHAR MaxManipulate;
	/*000d*/ UCHAR Simulation;
	/*000e*/ USHORT Unused[0x1];
	/*0010*/ ULONGLONG KernBase;
	/*0018*/ ULONGLONG PsLoadedModuleList;
	/*0020*/ ULONGLONG DebuggerDataList;
	/*0028*/
};

struct _DBGKD_LOAD_SYMBOLS32 {
	/*0000*/ ULONG PathNameLength;
	/*0004*/ ULONG BaseOfDll;
	/*0008*/ ULONG ProcessId;
	/*000c*/ ULONG CheckSum;
	/*0010*/ ULONG SizeOfImage;
	/*0014*/ UCHAR UnloadSymbols;
	/*0018*/
};

struct _DBGKD_LOAD_SYMBOLS64 {
	/*0000*/ ULONG PathNameLength;
	/*0008*/ ULONGLONG BaseOfDll;
	/*0010*/ ULONGLONG ProcessId;
	/*0018*/ ULONG CheckSum;
	/*001c*/ ULONG SizeOfImage;
	/*0020*/ UCHAR UnloadSymbols;
	/*0028*/
};

struct _DBGKD_MANIPULATE_STATE32 {
	/*0000*/ ULONG ApiNumber;
	/*0004*/ USHORT ProcessorLevel;
	/*0006*/ USHORT Processor;
	/*0008*/ LONG ReturnStatus;
	union {
		/*000c*/ _DBGKD_READ_MEMORY32 ReadMemory;
		/*000c*/ _DBGKD_WRITE_MEMORY32 WriteMemory;
		/*000c*/ _DBGKD_READ_MEMORY64 ReadMemory64;
		/*000c*/ _DBGKD_WRITE_MEMORY64 WriteMemory64;
		/*000c*/ _DBGKD_GET_CONTEXT GetContext;
		/*000c*/ _DBGKD_SET_CONTEXT SetContext;
		/*000c*/ _DBGKD_WRITE_BREAKPOINT32 WriteBreakPoint;
		/*000c*/ _DBGKD_RESTORE_BREAKPOINT RestoreBreakPoint;
		/*000c*/ _DBGKD_CONTINUE Continue;
		/*000c*/ _DBGKD_CONTINUE2 Continue2;
		/*000c*/ _DBGKD_READ_WRITE_IO32 ReadWriteIo;
		/*000c*/ _DBGKD_READ_WRITE_IO_EXTENDED32 ReadWriteIoExtended;
		/*000c*/ _DBGKD_QUERY_SPECIAL_CALLS QuerySpecialCalls;
		/*000c*/ _DBGKD_SET_SPECIAL_CALL32 SetSpecialCall;
		/*000c*/ _DBGKD_SET_INTERNAL_BREAKPOINT32 SetInternalBreakpoint;
		/*000c*/ _DBGKD_GET_INTERNAL_BREAKPOINT32 GetInternalBreakpoint;
		/*000c*/ _DBGKD_GET_VERSION32 GetVersion32;
		/*000c*/ _DBGKD_BREAKPOINTEX BreakPointEx;
		/*000c*/ _DBGKD_READ_WRITE_MSR ReadWriteMsr;
		/*000c*/ _DBGKD_SEARCH_MEMORY SearchMemory;
		/*0034*/
	} u;
	/*0034*/
};

struct _DBGKD_MANIPULATE_STATE64 {
	/*0000*/ ULONG ApiNumber;
	/*0004*/ USHORT ProcessorLevel;
	/*0006*/ USHORT Processor;
	/*0008*/ LONG ReturnStatus;
	union {
		/*0010*/ _DBGKD_READ_MEMORY64 ReadMemory;
		/*0010*/ _DBGKD_WRITE_MEMORY64 WriteMemory;
		/*0010*/ _DBGKD_GET_CONTEXT GetContext;
		/*0010*/ _DBGKD_SET_CONTEXT SetContext;
		/*0010*/ _DBGKD_WRITE_BREAKPOINT64 WriteBreakPoint;
		/*0010*/ _DBGKD_RESTORE_BREAKPOINT RestoreBreakPoint;
		/*0010*/ _DBGKD_CONTINUE Continue;
		/*0010*/ _DBGKD_CONTINUE2 Continue2;
		/*0010*/ _DBGKD_READ_WRITE_IO64 ReadWriteIo;
		/*0010*/ _DBGKD_READ_WRITE_IO_EXTENDED64 ReadWriteIoExtended;
		/*0010*/ _DBGKD_QUERY_SPECIAL_CALLS QuerySpecialCalls;
		/*0010*/ _DBGKD_SET_SPECIAL_CALL64 SetSpecialCall;
		/*0010*/ _DBGKD_SET_INTERNAL_BREAKPOINT64 SetInternalBreakpoint;
		/*0010*/ _DBGKD_GET_INTERNAL_BREAKPOINT64 GetInternalBreakpoint;
		/*0010*/ _DBGKD_GET_VERSION64 GetVersion64;
		/*0010*/ _DBGKD_BREAKPOINTEX BreakPointEx;
		/*0010*/ _DBGKD_READ_WRITE_MSR ReadWriteMsr;
		/*0010*/ _DBGKD_SEARCH_MEMORY SearchMemory;
		/*0010*/ _DBGKD_GET_SET_BUS_DATA GetSetBusData;
		/*0010*/ _DBGKD_FILL_MEMORY FillMemory;
		/*0010*/ _DBGKD_QUERY_MEMORY QueryMemory;
		/*0038*/
	} u;
	/*0038*/
};

struct _DBGKD_QUERY_MEMORY {
	/*0000*/ ULONGLONG Address;
	/*0008*/ ULONGLONG Reserved;
	/*0010*/ ULONG AddressSpace;
	/*0014*/ ULONG Flags;
	/*0018*/
};

struct _DBGKD_QUERY_SPECIAL_CALLS {
	/*0000*/ ULONG NumberOfSpecialCalls;
	/*0004*/
};

struct _DBGKD_READ_MEMORY32 {
	/*0000*/ ULONG TargetBaseAddress;
	/*0004*/ ULONG TransferCount;
	/*0008*/ ULONG ActualBytesRead;
	/*000c*/
};

struct _DBGKD_READ_MEMORY64 {
	/*0000*/ ULONGLONG TargetBaseAddress;
	/*0008*/ ULONG TransferCount;
	/*000c*/ ULONG ActualBytesRead;
	/*0010*/
};

struct _DBGKD_READ_WRITE_IO32 {
	/*0000*/ ULONG DataSize;
	/*0004*/ ULONG IoAddress;
	/*0008*/ ULONG DataValue;
	/*000c*/
};

struct _DBGKD_READ_WRITE_IO64 {
	/*0000*/ ULONGLONG IoAddress;
	/*0008*/ ULONG DataSize;
	/*000c*/ ULONG DataValue;
	/*0010*/
};

struct _DBGKD_READ_WRITE_IO_EXTENDED32 {
	/*0000*/ ULONG DataSize;
	/*0004*/ ULONG InterfaceType;
	/*0008*/ ULONG BusNumber;
	/*000c*/ ULONG AddressSpace;
	/*0010*/ ULONG IoAddress;
	/*0014*/ ULONG DataValue;
	/*0018*/
};

struct _DBGKD_READ_WRITE_IO_EXTENDED64 {
	/*0000*/ ULONG DataSize;
	/*0004*/ ULONG InterfaceType;
	/*0008*/ ULONG BusNumber;
	/*000c*/ ULONG AddressSpace;
	/*0010*/ ULONGLONG IoAddress;
	/*0018*/ ULONG DataValue;
	/*0020*/
};

struct _DBGKD_READ_WRITE_MSR {
	/*0000*/ ULONG Msr;
	/*0004*/ ULONG DataValueLow;
	/*0008*/ ULONG DataValueHigh;
	/*000c*/
};

struct _DBGKD_RESTORE_BREAKPOINT {
	/*0000*/ ULONG BreakPointHandle;
	/*0004*/
};

struct _DBGKD_SEARCH_MEMORY {
	/*0000*/ ULONGLONG SearchAddress;
	/*0000*/ ULONGLONG FoundAddress;
	/*0008*/ ULONGLONG SearchLength;
	/*0010*/ ULONG PatternLength;
	/*0018*/
};

struct _DBGKD_SET_CONTEXT {
	/*0000*/ ULONG ContextFlags;
	/*0004*/
};

struct _DBGKD_SET_INTERNAL_BREAKPOINT32 {
	/*0000*/ ULONG BreakpointAddress;
	/*0004*/ ULONG Flags;
	/*0008*/
};

struct _DBGKD_SET_INTERNAL_BREAKPOINT64 {
	/*0000*/ ULONGLONG BreakpointAddress;
	/*0008*/ ULONG Flags;
	/*0010*/
};

struct _DBGKD_SET_SPECIAL_CALL32 {
	/*0000*/ ULONG SpecialCall;
	/*0004*/
};

struct _DBGKD_SET_SPECIAL_CALL64 {
	/*0000*/ ULONGLONG SpecialCall;
	/*0008*/
};

struct _DBGKD_WRITE_BREAKPOINT32 {
	/*0000*/ ULONG BreakPointAddress;
	/*0004*/ ULONG BreakPointHandle;
	/*0008*/
};

struct _DBGKD_WRITE_BREAKPOINT64 {
	/*0000*/ ULONGLONG BreakPointAddress;
	/*0008*/ ULONG BreakPointHandle;
	/*0010*/
};

struct _DBGKD_WRITE_MEMORY32 {
	/*0000*/ ULONG TargetBaseAddress;
	/*0004*/ ULONG TransferCount;
	/*0008*/ ULONG ActualBytesWritten;
	/*000c*/
};

struct _DBGKD_WRITE_MEMORY64 {
	/*0000*/ ULONGLONG TargetBaseAddress;
	/*0008*/ ULONG TransferCount;
	/*000c*/ ULONG ActualBytesWritten;
	/*0010*/
};

struct _DBGKM_EXCEPTION32 {
	/*0000*/ _EXCEPTION_RECORD32 ExceptionRecord;
	/*0050*/ ULONG FirstChance;
	/*0054*/
};

struct _DBGKM_EXCEPTION64 {
	/*0000*/ _EXCEPTION_RECORD64 ExceptionRecord;
	/*0098*/ ULONG FirstChance;
	/*00a0*/
};

struct _DEFERRED_WRITE {
	/*0000*/ SHORT NodeTypeCode;
	/*0002*/ SHORT NodeByteSize;
	/*0004*/ _FILE_OBJECT * FileObject;
	/*0008*/ ULONG BytesToWrite;
	/*000c*/ _LIST_ENTRY DeferredWriteLinks;
	/*0014*/ _KEVENT * Event;
	/*0018*/ void (* PostRoutine)( void * , void * );
	/*001c*/ void * Context1;
	/*0020*/ void * Context2;
	/*0024*/ UCHAR LimitModifiedPages;
	/*0028*/
};

struct _DESCRIPTOR {
	/*0000*/ USHORT Pad;
	/*0002*/ USHORT Limit;
	/*0004*/ ULONG Base;
	/*0008*/
};

struct _DEVICE_CAPABILITIES {
	/*0000*/ USHORT Size;
	/*0002*/ USHORT Version;
	/*0004*/ ULONG DeviceD1 : 01; // 0x00000001;
	/*0004*/ ULONG DeviceD2 : 01; // 0x00000002;
	/*0004*/ ULONG LockSupported : 01; // 0x00000004;
	/*0004*/ ULONG EjectSupported : 01; // 0x00000008;
	/*0004*/ ULONG Removable : 01; // 0x00000010;
	/*0004*/ ULONG DockDevice : 01; // 0x00000020;
	/*0004*/ ULONG UniqueID : 01; // 0x00000040;
	/*0004*/ ULONG SilentInstall : 01; // 0x00000080;
	/*0004*/ ULONG RawDeviceOK : 01; // 0x00000100;
	/*0004*/ ULONG SurpriseRemovalOK : 01; // 0x00000200;
	/*0004*/ ULONG WakeFromD0 : 01; // 0x00000400;
	/*0004*/ ULONG WakeFromD1 : 01; // 0x00000800;
	/*0004*/ ULONG WakeFromD2 : 01; // 0x00001000;
	/*0004*/ ULONG WakeFromD3 : 01; // 0x00002000;
	/*0004*/ ULONG HardwareDisabled : 01; // 0x00004000;
	/*0004*/ ULONG NonDynamic : 01; // 0x00008000;
	/*0004*/ ULONG WarmEjectSupported : 01; // 0x00010000;
	/*0004*/ ULONG NoDisplayInUI : 01; // 0x00020000;
	/*0004*/ ULONG Reserved : 14; // 0xfffc0000;
	/*0008*/ ULONG Address;
	/*000c*/ ULONG UINumber;
	/*0010*/ _DEVICE_POWER_STATE DeviceState[0x7];
	/*002c*/ _SYSTEM_POWER_STATE SystemWake;
	/*0030*/ _DEVICE_POWER_STATE DeviceWake;
	/*0034*/ ULONG D1Latency;
	/*0038*/ ULONG D2Latency;
	/*003c*/ ULONG D3Latency;
	/*0040*/
};

struct _DEVICE_MAP {
	/*0000*/ _OBJECT_DIRECTORY * DosDevicesDirectory;
	/*0004*/ _OBJECT_DIRECTORY * GlobalDosDevicesDirectory;
	/*0008*/ ULONG ReferenceCount;
	/*000c*/ ULONG DriveMap;
	/*0010*/ UCHAR DriveType[0x20];
	/*0030*/
};

struct _DEVICE_NODE {
	/*0000*/ _DEVICE_NODE * Sibling;
	/*0004*/ _DEVICE_NODE * Child;
	/*0008*/ _DEVICE_NODE * Parent;
	/*000c*/ _DEVICE_NODE * LastChild;
	/*0010*/ ULONG Level;
	/*0014*/ _PO_DEVICE_NOTIFY * Notify;
	/*0018*/ _PNP_DEVNODE_STATE State;
	/*001c*/ _PNP_DEVNODE_STATE PreviousState;
	/*0020*/ _PNP_DEVNODE_STATE StateHistory[0x14];
	/*0070*/ ULONG StateHistoryEntry;
	/*0074*/ LONG CompletionStatus;
	/*0078*/ _IRP * PendingIrp;
	/*007c*/ ULONG Flags;
	/*0080*/ ULONG UserFlags;
	/*0084*/ ULONG Problem;
	/*0088*/ _DEVICE_OBJECT * PhysicalDeviceObject;
	/*008c*/ _CM_RESOURCE_LIST * ResourceList;
	/*0090*/ _CM_RESOURCE_LIST * ResourceListTranslated;
	/*0094*/ _UNICODE_STRING InstancePath;
	/*009c*/ _UNICODE_STRING ServiceName;
	/*00a4*/ _DEVICE_OBJECT * DuplicatePDO;
	/*00a8*/ _IO_RESOURCE_REQUIREMENTS_LIST * ResourceRequirements;
	/*00ac*/ _INTERFACE_TYPE InterfaceType;
	/*00b0*/ ULONG BusNumber;
	/*00b4*/ _INTERFACE_TYPE ChildInterfaceType;
	/*00b8*/ ULONG ChildBusNumber;
	/*00bc*/ USHORT ChildBusTypeIndex;
	/*00be*/ UCHAR RemovalPolicy;
	/*00bf*/ UCHAR HardwareRemovalPolicy;
	/*00c0*/ _LIST_ENTRY TargetDeviceNotify;
	/*00c8*/ _LIST_ENTRY DeviceArbiterList;
	/*00d0*/ _LIST_ENTRY DeviceTranslatorList;
	/*00d8*/ USHORT NoTranslatorMask;
	/*00da*/ USHORT QueryTranslatorMask;
	/*00dc*/ USHORT NoArbiterMask;
	/*00de*/ USHORT QueryArbiterMask;
	union {
		/*00e0*/ _DEVICE_NODE * LegacyDeviceNode;
		/*00e0*/ _DEVICE_RELATIONS * PendingDeviceRelations;
		/*00e4*/
	} OverUsed1;
	union {
		/*00e4*/ _DEVICE_NODE * NextResourceDeviceNode;
		/*00e8*/
	} OverUsed2;
	/*00e8*/ _CM_RESOURCE_LIST * BootResources;
	/*00ec*/ ULONG CapabilityFlags;
	struct {
		/*00f0*/ PROFILE_STATUS DockStatus;
		/*00f4*/ _LIST_ENTRY ListEntry;
		/*00fc*/ USHORT * SerialNumber;
		/*0100*/
	} DockInfo;
	/*0100*/ ULONG DisableableDepends;
	/*0104*/ _LIST_ENTRY PendedSetInterfaceState;
	/*010c*/ _LIST_ENTRY LegacyBusListEntry;
	/*0114*/ ULONG DriverUnloadRetryCount;
	/*0118*/
};

struct _DEVICE_OBJECT {
	/*0000*/ SHORT Type;
	/*0002*/ USHORT Size;
	/*0004*/ LONG ReferenceCount;
	/*0008*/ _DRIVER_OBJECT * DriverObject;
	/*000c*/ _DEVICE_OBJECT * NextDevice;
	/*0010*/ _DEVICE_OBJECT * AttachedDevice;
	/*0014*/ _IRP * CurrentIrp;
	/*0018*/ _IO_TIMER * Timer;
	/*001c*/ ULONG Flags;
	/*0020*/ ULONG Characteristics;
	/*0024*/ _VPB * Vpb;
	/*0028*/ void * DeviceExtension;
	/*002c*/ ULONG DeviceType;
	/*0030*/ CHAR StackSize;
	union {
		/*0034*/ _LIST_ENTRY ListEntry;
		/*0034*/ _WAIT_CONTEXT_BLOCK Wcb;
		/*005c*/
	} Queue;
	/*005c*/ ULONG AlignmentRequirement;
	/*0060*/ _KDEVICE_QUEUE DeviceQueue;
	/*0074*/ _KDPC Dpc;
	/*0094*/ ULONG ActiveThreadCount;
	/*0098*/ void * SecurityDescriptor;
	/*009c*/ _KEVENT DeviceLock;
	/*00ac*/ USHORT SectorSize;
	/*00ae*/ USHORT Spare1;
	/*00b0*/ _DEVOBJ_EXTENSION * DeviceObjectExtension;
	/*00b4*/ void * Reserved;
	/*00b8*/
};

struct _DEVICE_OBJECT_POWER_EXTENSION {
	/*0000*/ ULONG IdleCount;
	/*0004*/ ULONG ConservationIdleTime;
	/*0008*/ ULONG PerformanceIdleTime;
	/*000c*/ _DEVICE_OBJECT * DeviceObject;
	/*0010*/ _LIST_ENTRY IdleList;
	/*0018*/ UCHAR DeviceType;
	/*001c*/ _DEVICE_POWER_STATE State;
	/*0020*/ _LIST_ENTRY NotifySourceList;
	/*0028*/ _LIST_ENTRY NotifyTargetList;
	/*0030*/ _POWER_CHANNEL_SUMMARY PowerChannelSummary;
	/*0044*/ _LIST_ENTRY Volume;
	/*004c*/
};

enum _DEVICE_POWER_STATE {
	PowerDeviceUnspecified = 0x0,
	PowerDeviceD0 = 0x1,
	PowerDeviceD1 = 0x2,
	PowerDeviceD2 = 0x3,
	PowerDeviceD3 = 0x4,
	PowerDeviceMaximum = 0x5
};

struct _DEVICE_RELATIONS {
	/*0000*/ ULONG Count;
	/*0004*/ _DEVICE_OBJECT * Objects[0x1];
	/*0008*/
};

enum _DEVICE_RELATION_TYPE {
	BusRelations = 0x0,
	EjectionRelations = 0x1,
	PowerRelations = 0x2,
	RemovalRelations = 0x3,
	TargetDeviceRelation = 0x4,
	SingleBusRelations = 0x5
};

enum _DEVICE_USAGE_NOTIFICATION_TYPE {
	DeviceUsageTypeUndefined = 0x0,
	DeviceUsageTypePaging = 0x1,
	DeviceUsageTypeHibernation = 0x2,
	DeviceUsageTypeDumpFile = 0x3
};

struct _DEVOBJ_EXTENSION {
	/*0000*/ SHORT Type;
	/*0002*/ USHORT Size;
	/*0004*/ _DEVICE_OBJECT * DeviceObject;
	/*0008*/ ULONG PowerFlags;
	/*000c*/ _DEVICE_OBJECT_POWER_EXTENSION * Dope;
	/*0010*/ ULONG ExtensionFlags;
	/*0014*/ void * DeviceNode;
	/*0018*/ _DEVICE_OBJECT * AttachedTo;
	/*001c*/ LONG StartIoCount;
	/*0020*/ LONG StartIoKey;
	/*0024*/ ULONG StartIoFlags;
	/*0028*/ _VPB * Vpb;
	/*002c*/
};

struct _DISPATCHER_HEADER {
	/*0000*/ UCHAR Type;
	/*0001*/ UCHAR Absolute;
	/*0002*/ UCHAR Size;
	/*0003*/ UCHAR Inserted;
	/*0004*/ LONG SignalState;
	/*0008*/ _LIST_ENTRY WaitListHead;
	/*0010*/
};

struct _DRIVER_EXTENSION {
	/*0000*/ _DRIVER_OBJECT * DriverObject;
	/*0004*/ LONG (* AddDevice)( _DRIVER_OBJECT * , _DEVICE_OBJECT * );
	/*0008*/ ULONG Count;
	/*000c*/ _UNICODE_STRING ServiceKeyName;
	/*0014*/ _IO_CLIENT_EXTENSION * ClientDriverExtension;
	/*0018*/ _FS_FILTER_CALLBACKS * FsFilterCallbacks;
	/*001c*/
};

struct _DRIVER_OBJECT {
	/*0000*/ SHORT Type;
	/*0002*/ SHORT Size;
	/*0004*/ _DEVICE_OBJECT * DeviceObject;
	/*0008*/ ULONG Flags;
	/*000c*/ void * DriverStart;
	/*0010*/ ULONG DriverSize;
	/*0014*/ void * DriverSection;
	/*0018*/ _DRIVER_EXTENSION * DriverExtension;
	/*001c*/ _UNICODE_STRING DriverName;
	/*0024*/ _UNICODE_STRING * HardwareDatabase;
	/*0028*/ _FAST_IO_DISPATCH * FastIoDispatch;
	/*002c*/ LONG (* DriverInit)( _DRIVER_OBJECT * , _UNICODE_STRING * );
	/*0030*/ void (* DriverStartIo)( _DEVICE_OBJECT * , _IRP * );
	/*0034*/ void (* DriverUnload)( _DRIVER_OBJECT * );
	/*0038*/ LONG (* MajorFunction[0x1c])( _DEVICE_OBJECT * , _IRP * );
	/*00a8*/
};

struct _DUAL {
	/*0000*/ ULONG Length;
	/*0004*/ _HMAP_DIRECTORY * Map;
	/*0008*/ _HMAP_TABLE * SmallDir;
	/*000c*/ ULONG Guard;
	/*0010*/ _RTL_BITMAP FreeDisplay[0x18];
	/*00d0*/ ULONG FreeSummary;
	/*00d4*/ _LIST_ENTRY FreeBins;
	/*00dc*/
};

struct _DUMP_INITIALIZATION_CONTEXT {
	/*0000*/ ULONG Length;
	/*0004*/ ULONG Reserved;
	/*0008*/ void * MemoryBlock;
	/*000c*/ void * CommonBuffer[0x2];
	/*0018*/ _LARGE_INTEGER PhysicalAddress[0x2];
	/*0028*/ void (* StallRoutine)( ULONG );
	/*002c*/ UCHAR (* OpenRoutine)( _LARGE_INTEGER );
	/*0030*/ LONG (* WriteRoutine)( _LARGE_INTEGER * , _MDL * );
	/*0034*/ void (* FinishRoutine)();
	/*0038*/ _ADAPTER_OBJECT * AdapterObject;
	/*003c*/ void * MappedRegisterBase;
	/*0040*/ void * PortConfiguration;
	/*0044*/ UCHAR CrashDump;
	/*0048*/ ULONG MaximumTransferSize;
	/*004c*/ ULONG CommonBufferSize;
	/*0050*/ void * TargetAddress;
	/*0054*/ LONG (* WritePendingRoutine)( LONG , _LARGE_INTEGER * , _MDL * , void * );
	/*0058*/ ULONG PartitionStyle;
	union {
		struct {
			/*005c*/ ULONG Signature;
			/*0060*/ ULONG CheckSum;
			/*0064*/
		} Mbr;
		struct {
			/*005c*/ _GUID DiskId;
			/*006c*/
		} Gpt;
		/*006c*/
	} DiskInfo;
	/*0070*/
};

struct _DUMP_STACK_CONTEXT {
	/*0000*/ _DUMP_INITIALIZATION_CONTEXT Init;
	/*0070*/ _LARGE_INTEGER PartitionOffset;
	/*0078*/ void * DumpPointers;
	/*007c*/ ULONG PointersLength;
	/*0080*/ USHORT * ModulePrefix;
	/*0084*/ _LIST_ENTRY DriverList;
	/*008c*/ _STRING InitMsg;
	/*0094*/ _STRING ProgMsg;
	/*009c*/ _STRING DoneMsg;
	/*00a4*/ void * FileObject;
	/*00a8*/ _DEVICE_USAGE_NOTIFICATION_TYPE UsageType;
	/*00b0*/
};

struct _EJOB {
	/*0000*/ _KEVENT Event;
	/*0010*/ _LIST_ENTRY JobLinks;
	/*0018*/ _LIST_ENTRY ProcessListHead;
	/*0020*/ _ERESOURCE JobLock;
	/*0058*/ _LARGE_INTEGER TotalUserTime;
	/*0060*/ _LARGE_INTEGER TotalKernelTime;
	/*0068*/ _LARGE_INTEGER ThisPeriodTotalUserTime;
	/*0070*/ _LARGE_INTEGER ThisPeriodTotalKernelTime;
	/*0078*/ ULONG TotalPageFaultCount;
	/*007c*/ ULONG TotalProcesses;
	/*0080*/ ULONG ActiveProcesses;
	/*0084*/ ULONG TotalTerminatedProcesses;
	/*0088*/ _LARGE_INTEGER PerProcessUserTimeLimit;
	/*0090*/ _LARGE_INTEGER PerJobUserTimeLimit;
	/*0098*/ ULONG LimitFlags;
	/*009c*/ ULONG MinimumWorkingSetSize;
	/*00a0*/ ULONG MaximumWorkingSetSize;
	/*00a4*/ ULONG ActiveProcessLimit;
	/*00a8*/ ULONG Affinity;
	/*00ac*/ UCHAR PriorityClass;
	/*00b0*/ ULONG UIRestrictionsClass;
	/*00b4*/ ULONG SecurityLimitFlags;
	/*00b8*/ void * Token;
	/*00bc*/ _PS_JOB_TOKEN_FILTER * Filter;
	/*00c0*/ ULONG EndOfJobTimeAction;
	/*00c4*/ void * CompletionPort;
	/*00c8*/ void * CompletionKey;
	/*00cc*/ ULONG SessionId;
	/*00d0*/ ULONG SchedulingClass;
	/*00d8*/ ULONGLONG ReadOperationCount;
	/*00e0*/ ULONGLONG WriteOperationCount;
	/*00e8*/ ULONGLONG OtherOperationCount;
	/*00f0*/ ULONGLONG ReadTransferCount;
	/*00f8*/ ULONGLONG WriteTransferCount;
	/*0100*/ ULONGLONG OtherTransferCount;
	/*0108*/ _IO_COUNTERS IoInfo;
	/*0138*/ ULONG ProcessMemoryLimit;
	/*013c*/ ULONG JobMemoryLimit;
	/*0140*/ ULONG PeakProcessMemoryUsed;
	/*0144*/ ULONG PeakJobMemoryUsed;
	/*0148*/ ULONG CurrentJobMemoryUsed;
	/*014c*/ _FAST_MUTEX MemoryLimitsLock;
	/*016c*/ _LIST_ENTRY JobSetLinks;
	/*0174*/ ULONG MemberLevel;
	/*0178*/ ULONG JobFlags;
	/*0180*/
};

struct _EPROCESS {
	/*0000*/ _KPROCESS Pcb;
	/*006c*/ _EX_PUSH_LOCK ProcessLock;
	/*0070*/ _LARGE_INTEGER CreateTime;
	/*0078*/ _LARGE_INTEGER ExitTime;
	/*0080*/ _EX_RUNDOWN_REF RundownProtect;
	/*0084*/ void * UniqueProcessId;
	/*0088*/ _LIST_ENTRY ActiveProcessLinks;
	/*0090*/ ULONG QuotaUsage[0x3];
	/*009c*/ ULONG QuotaPeak[0x3];
	/*00a8*/ ULONG CommitCharge;
	/*00ac*/ ULONG PeakVirtualSize;
	/*00b0*/ ULONG VirtualSize;
	/*00b4*/ _LIST_ENTRY SessionProcessLinks;
	/*00bc*/ void * DebugPort;
	/*00c0*/ void * ExceptionPort;
	/*00c4*/ _HANDLE_TABLE * ObjectTable;
	/*00c8*/ _EX_FAST_REF Token;
	/*00cc*/ _FAST_MUTEX WorkingSetLock;
	/*00ec*/ ULONG WorkingSetPage;
	/*00f0*/ _FAST_MUTEX AddressCreationLock;
	/*0110*/ ULONG HyperSpaceLock;
	/*0114*/ _ETHREAD * ForkInProgress;
	/*0118*/ ULONG HardwareTrigger;
	/*011c*/ void * VadRoot;
	/*0120*/ void * VadHint;
	/*0124*/ void * CloneRoot;
	/*0128*/ ULONG NumberOfPrivatePages;
	/*012c*/ ULONG NumberOfLockedPages;
	/*0130*/ void * Win32Process;
	/*0134*/ _EJOB * Job;
	/*0138*/ void * SectionObject;
	/*013c*/ void * SectionBaseAddress;
	/*0140*/ _EPROCESS_QUOTA_BLOCK * QuotaBlock;
	/*0144*/ _PAGEFAULT_HISTORY * WorkingSetWatch;
	/*0148*/ void * Win32WindowStation;
	/*014c*/ void * InheritedFromUniqueProcessId;
	/*0150*/ void * LdtInformation;
	/*0154*/ void * VadFreeHint;
	/*0158*/ void * VdmObjects;
	/*015c*/ void * DeviceMap;
	/*0160*/ _LIST_ENTRY PhysicalVadList;
	/*0168*/ _HARDWARE_PTE PageDirectoryPte;
	/*0168*/ ULONGLONG Filler;
	/*0170*/ void * Session;
	/*0174*/ UCHAR ImageFileName[0x10];
	/*0184*/ _LIST_ENTRY JobLinks;
	/*018c*/ void * LockedPagesList;
	/*0190*/ _LIST_ENTRY ThreadListHead;
	/*0198*/ void * SecurityPort;
	/*019c*/ void * PaeTop;
	/*01a0*/ ULONG ActiveThreads;
	/*01a4*/ ULONG GrantedAccess;
	/*01a8*/ ULONG DefaultHardErrorProcessing;
	/*01ac*/ LONG LastThreadExitStatus;
	/*01b0*/ _PEB * Peb;
	/*01b4*/ _EX_FAST_REF PrefetchTrace;
	/*01b8*/ _LARGE_INTEGER ReadOperationCount;
	/*01c0*/ _LARGE_INTEGER WriteOperationCount;
	/*01c8*/ _LARGE_INTEGER OtherOperationCount;
	/*01d0*/ _LARGE_INTEGER ReadTransferCount;
	/*01d8*/ _LARGE_INTEGER WriteTransferCount;
	/*01e0*/ _LARGE_INTEGER OtherTransferCount;
	/*01e8*/ ULONG CommitChargeLimit;
	/*01ec*/ ULONG CommitChargePeak;
	/*01f0*/ void * AweInfo;
	/*01f4*/ _SE_AUDIT_PROCESS_CREATION_INFO SeAuditProcessCreationInfo;
	/*01f8*/ _MMSUPPORT Vm;
	/*0238*/ ULONG LastFaultCount;
	/*023c*/ ULONG ModifiedPageCount;
	/*0240*/ ULONG NumberOfVads;
	/*0244*/ ULONG JobStatus;
	/*0248*/ ULONG Flags;
	/*0248*/ ULONG CreateReported : 01; // 0x00000001;
	/*0248*/ ULONG NoDebugInherit : 01; // 0x00000002;
	/*0248*/ ULONG ProcessExiting : 01; // 0x00000004;
	/*0248*/ ULONG ProcessDelete : 01; // 0x00000008;
	/*0248*/ ULONG Wow64SplitPages : 01; // 0x00000010;
	/*0248*/ ULONG VmDeleted : 01; // 0x00000020;
	/*0248*/ ULONG OutswapEnabled : 01; // 0x00000040;
	/*0248*/ ULONG Outswapped : 01; // 0x00000080;
	/*0248*/ ULONG ForkFailed : 01; // 0x00000100;
	/*0248*/ ULONG HasPhysicalVad : 01; // 0x00000200;
	/*0248*/ ULONG AddressSpaceInitialized : 02; // 0x00000c00;
	/*0248*/ ULONG SetTimerResolution : 01; // 0x00001000;
	/*0248*/ ULONG BreakOnTermination : 01; // 0x00002000;
	/*0248*/ ULONG SessionCreationUnderway : 01; // 0x00004000;
	/*0248*/ ULONG WriteWatch : 01; // 0x00008000;
	/*0248*/ ULONG ProcessInSession : 01; // 0x00010000;
	/*0248*/ ULONG OverrideAddressSpace : 01; // 0x00020000;
	/*0248*/ ULONG HasAddressSpace : 01; // 0x00040000;
	/*0248*/ ULONG LaunchPrefetched : 01; // 0x00080000;
	/*0248*/ ULONG InjectInpageErrors : 01; // 0x00100000;
	/*0248*/ ULONG VmTopDown : 01; // 0x00200000;
	/*0248*/ ULONG Unused3 : 01; // 0x00400000;
	/*0248*/ ULONG Unused4 : 01; // 0x00800000;
	/*0248*/ ULONG VdmAllowed : 01; // 0x01000000;
	/*0248*/ ULONG Unused : 05; // 0x3e000000;
	/*0248*/ ULONG Unused1 : 01; // 0x40000000;
	/*0248*/ ULONG Unused2 : 01; // 0x80000000;
	/*024c*/ LONG ExitStatus;
	/*0250*/ USHORT NextPageColor;
	/*0252*/ UCHAR SubSystemMinorVersion;
	/*0253*/ UCHAR SubSystemMajorVersion;
	/*0252*/ USHORT SubSystemVersion;
	/*0254*/ UCHAR PriorityClass;
	/*0255*/ UCHAR WorkingSetAcquiredUnsafe;
	/*0258*/ ULONG Cookie;
	/*0260*/
};

struct _EPROCESS_QUOTA_BLOCK {
	/*0000*/ _EPROCESS_QUOTA_ENTRY QuotaEntry[0x3];
	/*0030*/ _LIST_ENTRY QuotaList;
	/*0038*/ ULONG ReferenceCount;
	/*003c*/ ULONG ProcessCount;
	/*0040*/
};

struct _EPROCESS_QUOTA_ENTRY {
	/*0000*/ ULONG Usage;
	/*0004*/ ULONG Limit;
	/*0008*/ ULONG Peak;
	/*000c*/ ULONG Return;
	/*0010*/
};

struct _ERESOURCE {
	/*0000*/ _LIST_ENTRY SystemResourcesList;
	/*0008*/ _OWNER_ENTRY * OwnerTable;
	/*000c*/ SHORT ActiveCount;
	/*000e*/ USHORT Flag;
	/*0010*/ _KSEMAPHORE * SharedWaiters;
	/*0014*/ _KEVENT * ExclusiveWaiters;
	/*0018*/ _OWNER_ENTRY OwnerThreads[0x2];
	/*0028*/ ULONG ContentionCount;
	/*002c*/ USHORT NumberOfSharedWaiters;
	/*002e*/ USHORT NumberOfExclusiveWaiters;
	/*0030*/ void * Address;
	/*0030*/ ULONG CreatorBackTraceIndex;
	/*0034*/ ULONG SpinLock;
	/*0038*/
};

struct _ETHREAD {
	/*0000*/ _KTHREAD Tcb;
	/*01c0*/ _LARGE_INTEGER CreateTime;
	/*01c0*/ UINT NestedFaultCount : 02; // 0x00000003;
	/*01c0*/ UINT ApcNeeded : 01; // 0x00000004;
	/*01c8*/ _LARGE_INTEGER ExitTime;
	/*01c8*/ _LIST_ENTRY LpcReplyChain;
	/*01c8*/ _LIST_ENTRY KeyedWaitChain;
	/*01d0*/ LONG ExitStatus;
	/*01d0*/ void * OfsChain;
	/*01d4*/ _LIST_ENTRY PostBlockList;
	/*01dc*/ _TERMINATION_PORT * TerminationPort;
	/*01dc*/ _ETHREAD * ReaperLink;
	/*01dc*/ void * KeyedWaitValue;
	/*01e0*/ ULONG ActiveTimerListLock;
	/*01e4*/ _LIST_ENTRY ActiveTimerListHead;
	/*01ec*/ _CLIENT_ID Cid;
	/*01f4*/ _KSEMAPHORE LpcReplySemaphore;
	/*01f4*/ _KSEMAPHORE KeyedWaitSemaphore;
	/*0208*/ void * LpcReplyMessage;
	/*0208*/ void * LpcWaitingOnPort;
	/*020c*/ _PS_IMPERSONATION_INFORMATION * ImpersonationInfo;
	/*0210*/ _LIST_ENTRY IrpList;
	/*0218*/ ULONG TopLevelIrp;
	/*021c*/ _DEVICE_OBJECT * DeviceToVerify;
	/*0220*/ _EPROCESS * ThreadsProcess;
	/*0224*/ void * StartAddress;
	/*0228*/ void * Win32StartAddress;
	/*0228*/ ULONG LpcReceivedMessageId;
	/*022c*/ _LIST_ENTRY ThreadListEntry;
	/*0234*/ _EX_RUNDOWN_REF RundownProtect;
	/*0238*/ _EX_PUSH_LOCK ThreadLock;
	/*023c*/ ULONG LpcReplyMessageId;
	/*0240*/ ULONG ReadClusterSize;
	/*0244*/ ULONG GrantedAccess;
	/*0248*/ ULONG CrossThreadFlags;
	/*0248*/ ULONG Terminated : 01; // 0x00000001;
	/*0248*/ ULONG DeadThread : 01; // 0x00000002;
	/*0248*/ ULONG HideFromDebugger : 01; // 0x00000004;
	/*0248*/ ULONG ActiveImpersonationInfo : 01; // 0x00000008;
	/*0248*/ ULONG SystemThread : 01; // 0x00000010;
	/*0248*/ ULONG HardErrorsAreDisabled : 01; // 0x00000020;
	/*0248*/ ULONG BreakOnTermination : 01; // 0x00000040;
	/*0248*/ ULONG SkipCreationMsg : 01; // 0x00000080;
	/*0248*/ ULONG SkipTerminationMsg : 01; // 0x00000100;
	/*024c*/ ULONG SameThreadPassiveFlags;
	/*024c*/ ULONG ActiveExWorker : 01; // 0x00000001;
	/*024c*/ ULONG ExWorkerCanWaitUser : 01; // 0x00000002;
	/*024c*/ ULONG MemoryMaker : 01; // 0x00000004;
	/*0250*/ ULONG SameThreadApcFlags;
	/*0250*/ UCHAR LpcReceivedMsgIdValid : 01; // 0x01;
	/*0250*/ UCHAR LpcExitThreadCalled : 01; // 0x02;
	/*0250*/ UCHAR AddressSpaceOwner : 01; // 0x04;
	/*0254*/ UCHAR ForwardClusterOnly;
	/*0255*/ UCHAR DisablePageFaultClustering;
	/*0258*/ ULONG KernelStackReference;
	/*0260*/
};

struct _ETIMER {
	/*0000*/ _KTIMER KeTimer;
	/*0028*/ _KAPC TimerApc;
	/*0058*/ _KDPC TimerDpc;
	/*0078*/ _LIST_ENTRY ActiveTimerListEntry;
	/*0080*/ ULONG Lock;
	/*0084*/ LONG Period;
	/*0088*/ UCHAR ApcAssociated;
	/*0089*/ UCHAR WakeTimer;
	/*008c*/ _LIST_ENTRY WakeTimerListEntry;
	/*0098*/
};

struct _EVENT_COUNTER {
	/*0000*/ _SINGLE_LIST_ENTRY ListEntry;
	/*0004*/ ULONG RefCount;
	/*0008*/ _KEVENT Event;
	/*0018*/
};

enum _EXCEPTION_DISPOSITION {
	ExceptionContinueExecution = 0x0,
	ExceptionContinueSearch = 0x1,
	ExceptionNestedException = 0x2,
	ExceptionCollidedUnwind = 0x3
};

struct _EXCEPTION_POINTERS {
	/*0000*/ _EXCEPTION_RECORD * ExceptionRecord;
	/*0004*/ _CONTEXT * ContextRecord;
	/*0008*/
};

struct _EXCEPTION_RECORD {
	/*0000*/ LONG ExceptionCode;
	/*0004*/ ULONG ExceptionFlags;
	/*0008*/ _EXCEPTION_RECORD * ExceptionRecord;
	/*000c*/ void * ExceptionAddress;
	/*0010*/ ULONG NumberParameters;
	/*0014*/ ULONG ExceptionInformation[0xf];
	/*0050*/
};

struct _EXCEPTION_RECORD32 {
	/*0000*/ LONG ExceptionCode;
	/*0004*/ ULONG ExceptionFlags;
	/*0008*/ ULONG ExceptionRecord;
	/*000c*/ ULONG ExceptionAddress;
	/*0010*/ ULONG NumberParameters;
	/*0014*/ ULONG ExceptionInformation[0xf];
	/*0050*/
};

struct _EXCEPTION_RECORD64 {
	/*0000*/ LONG ExceptionCode;
	/*0004*/ ULONG ExceptionFlags;
	/*0008*/ ULONGLONG ExceptionRecord;
	/*0010*/ ULONGLONG ExceptionAddress;
	/*0018*/ ULONG NumberParameters;
	/*001c*/ ULONG __unusedAlignment;
	/*0020*/ ULONGLONG ExceptionInformation[0xf];
	/*0098*/
};

struct _EXCEPTION_REGISTRATION_RECORD {
	/*0000*/ _EXCEPTION_REGISTRATION_RECORD * Next;
	/*0004*/ _EXCEPTION_DISPOSITION (* Handler)( _EXCEPTION_RECORD * , void * , _CONTEXT * , void * );
	/*0008*/
};

struct _EX_FAST_REF {
	/*0000*/ void * Object;
	/*0000*/ ULONG RefCnt : 03; // 0x00000007;
	/*0000*/ ULONG Value;
	/*0004*/
};

struct _EX_PUSH_LOCK {
	/*0000*/ ULONG Waiting : 01; // 0x00000001;
	/*0000*/ ULONG Exclusive : 01; // 0x00000002;
	/*0000*/ ULONG Shared : 30; // 0xfffffffc;
	/*0000*/ ULONG Value;
	/*0000*/ void * Ptr;
	/*0004*/
};

struct _EX_PUSH_LOCK_CACHE_AWARE {
	/*0000*/ _EX_PUSH_LOCK * Locks[0x20];
	/*0080*/
};

struct _EX_PUSH_LOCK_WAIT_BLOCK {
	/*0000*/ _KEVENT WakeEvent;
	/*0010*/ _EX_PUSH_LOCK_WAIT_BLOCK * Next;
	/*0014*/ ULONG ShareCount;
	/*0018*/ UCHAR Exclusive;
	/*001c*/
};

struct _EX_RUNDOWN_REF {
	/*0000*/ ULONG Count;
	/*0000*/ void * Ptr;
	/*0004*/
};

struct _EX_WORK_QUEUE {
	/*0000*/ _KQUEUE WorkerQueue;
	/*0028*/ ULONG DynamicThreadCount;
	/*002c*/ ULONG WorkItemsProcessed;
	/*0030*/ ULONG WorkItemsProcessedLastPass;
	/*0034*/ ULONG QueueDepthLastPass;
	/*0038*/ EX_QUEUE_WORKER_INFO Info;
	/*003c*/
};

struct _FAST_IO_DISPATCH {
	/*0000*/ ULONG SizeOfFastIoDispatch;
	/*0004*/ UCHAR (* FastIoCheckIfPossible)( _FILE_OBJECT * , _LARGE_INTEGER * , ULONG , UCHAR , ULONG , UCHAR , _IO_STATUS_BLOCK * , _DEVICE_OBJECT * );
	/*0008*/ UCHAR (* FastIoRead)( _FILE_OBJECT * , _LARGE_INTEGER * , ULONG , UCHAR , ULONG , void * , _IO_STATUS_BLOCK * , _DEVICE_OBJECT * );
	/*000c*/ UCHAR (* FastIoWrite)( _FILE_OBJECT * , _LARGE_INTEGER * , ULONG , UCHAR , ULONG , void * , _IO_STATUS_BLOCK * , _DEVICE_OBJECT * );
	/*0010*/ UCHAR (* FastIoQueryBasicInfo)( _FILE_OBJECT * , UCHAR , _FILE_BASIC_INFORMATION * , _IO_STATUS_BLOCK * , _DEVICE_OBJECT * );
	/*0014*/ UCHAR (* FastIoQueryStandardInfo)( _FILE_OBJECT * , UCHAR , _FILE_STANDARD_INFORMATION * , _IO_STATUS_BLOCK * , _DEVICE_OBJECT * );
	/*0018*/ UCHAR (* FastIoLock)( _FILE_OBJECT * , _LARGE_INTEGER * , _LARGE_INTEGER * , _EPROCESS * , ULONG , UCHAR , UCHAR , _IO_STATUS_BLOCK * , _DEVICE_OBJECT * );
	/*001c*/ UCHAR (* FastIoUnlockSingle)( _FILE_OBJECT * , _LARGE_INTEGER * , _LARGE_INTEGER * , _EPROCESS * , ULONG , _IO_STATUS_BLOCK * , _DEVICE_OBJECT * );
	/*0020*/ UCHAR (* FastIoUnlockAll)( _FILE_OBJECT * , _EPROCESS * , _IO_STATUS_BLOCK * , _DEVICE_OBJECT * );
	/*0024*/ UCHAR (* FastIoUnlockAllByKey)( _FILE_OBJECT * , void * , ULONG , _IO_STATUS_BLOCK * , _DEVICE_OBJECT * );
	/*0028*/ UCHAR (* FastIoDeviceControl)( _FILE_OBJECT * , UCHAR , void * , ULONG , void * , ULONG , ULONG , _IO_STATUS_BLOCK * , _DEVICE_OBJECT * );
	/*002c*/ void (* AcquireFileForNtCreateSection)( _FILE_OBJECT * );
	/*0030*/ void (* ReleaseFileForNtCreateSection)( _FILE_OBJECT * );
	/*0034*/ void (* FastIoDetachDevice)( _DEVICE_OBJECT * , _DEVICE_OBJECT * );
	/*0038*/ UCHAR (* FastIoQueryNetworkOpenInfo)( _FILE_OBJECT * , UCHAR , _FILE_NETWORK_OPEN_INFORMATION * , _IO_STATUS_BLOCK * , _DEVICE_OBJECT * );
	/*003c*/ LONG (* AcquireForModWrite)( _FILE_OBJECT * , _LARGE_INTEGER * , _ERESOURCE * * , _DEVICE_OBJECT * );
	/*0040*/ UCHAR (* MdlRead)( _FILE_OBJECT * , _LARGE_INTEGER * , ULONG , ULONG , _MDL * * , _IO_STATUS_BLOCK * , _DEVICE_OBJECT * );
	/*0044*/ UCHAR (* MdlReadComplete)( _FILE_OBJECT * , _MDL * , _DEVICE_OBJECT * );
	/*0048*/ UCHAR (* PrepareMdlWrite)( _FILE_OBJECT * , _LARGE_INTEGER * , ULONG , ULONG , _MDL * * , _IO_STATUS_BLOCK * , _DEVICE_OBJECT * );
	/*004c*/ UCHAR (* MdlWriteComplete)( _FILE_OBJECT * , _LARGE_INTEGER * , _MDL * , _DEVICE_OBJECT * );
	/*0050*/ UCHAR (* FastIoReadCompressed)( _FILE_OBJECT * , _LARGE_INTEGER * , ULONG , ULONG , void * , _MDL * * , _IO_STATUS_BLOCK * , _COMPRESSED_DATA_INFO * , ULONG , _DEVICE_OBJECT * );
	/*0054*/ UCHAR (* FastIoWriteCompressed)( _FILE_OBJECT * , _LARGE_INTEGER * , ULONG , ULONG , void * , _MDL * * , _IO_STATUS_BLOCK * , _COMPRESSED_DATA_INFO * , ULONG , _DEVICE_OBJECT * );
	/*0058*/ UCHAR (* MdlReadCompleteCompressed)( _FILE_OBJECT * , _MDL * , _DEVICE_OBJECT * );
	/*005c*/ UCHAR (* MdlWriteCompleteCompressed)( _FILE_OBJECT * , _LARGE_INTEGER * , _MDL * , _DEVICE_OBJECT * );
	/*0060*/ UCHAR (* FastIoQueryOpen)( _IRP * , _FILE_NETWORK_OPEN_INFORMATION * , _DEVICE_OBJECT * );
	/*0064*/ LONG (* ReleaseForModWrite)( _FILE_OBJECT * , _ERESOURCE * , _DEVICE_OBJECT * );
	/*0068*/ LONG (* AcquireForCcFlush)( _FILE_OBJECT * , _DEVICE_OBJECT * );
	/*006c*/ LONG (* ReleaseForCcFlush)( _FILE_OBJECT * , _DEVICE_OBJECT * );
	/*0070*/
};

struct _FAST_MUTEX {
	/*0000*/ LONG Count;
	/*0004*/ _KTHREAD * Owner;
	/*0008*/ ULONG Contention;
	/*000c*/ _KEVENT Event;
	/*001c*/ ULONG OldIrql;
	/*0020*/
};

struct _FILE_BASIC_INFORMATION {
	/*0000*/ _LARGE_INTEGER CreationTime;
	/*0008*/ _LARGE_INTEGER LastAccessTime;
	/*0010*/ _LARGE_INTEGER LastWriteTime;
	/*0018*/ _LARGE_INTEGER ChangeTime;
	/*0020*/ ULONG FileAttributes;
	/*0028*/
};

struct _FILE_GET_QUOTA_INFORMATION {
	/*0000*/ ULONG NextEntryOffset;
	/*0004*/ ULONG SidLength;
	/*0008*/ _SID Sid;
	/*0014*/
};

enum _FILE_INFORMATION_CLASS {
	FileDirectoryInformation = 0x1,
	FileFullDirectoryInformation = 0x2,
	FileBothDirectoryInformation = 0x3,
	FileBasicInformation = 0x4,
	FileStandardInformation = 0x5,
	FileInternalInformation = 0x6,
	FileEaInformation = 0x7,
	FileAccessInformation = 0x8,
	FileNameInformation = 0x9,
	FileRenameInformation = 0xa,
	FileLinkInformation = 0xb,
	FileNamesInformation = 0xc,
	FileDispositionInformation = 0xd,
	FilePositionInformation = 0xe,
	FileFullEaInformation = 0xf,
	FileModeInformation = 0x10,
	FileAlignmentInformation = 0x11,
	FileAllInformation = 0x12,
	FileAllocationInformation = 0x13,
	FileEndOfFileInformation = 0x14,
	FileAlternateNameInformation = 0x15,
	FileStreamInformation = 0x16,
	FilePipeInformation = 0x17,
	FilePipeLocalInformation = 0x18,
	FilePipeRemoteInformation = 0x19,
	FileMailslotQueryInformation = 0x1a,
	FileMailslotSetInformation = 0x1b,
	FileCompressionInformation = 0x1c,
	FileObjectIdInformation = 0x1d,
	FileCompletionInformation = 0x1e,
	FileMoveClusterInformation = 0x1f,
	FileQuotaInformation = 0x20,
	FileReparsePointInformation = 0x21,
	FileNetworkOpenInformation = 0x22,
	FileAttributeTagInformation = 0x23,
	FileTrackingInformation = 0x24,
	FileIdBothDirectoryInformation = 0x25,
	FileIdFullDirectoryInformation = 0x26,
	FileValidDataLengthInformation = 0x27,
	FileShortNameInformation = 0x28,
	FileMaximumInformation = 0x29
};

struct _FILE_NETWORK_OPEN_INFORMATION {
	/*0000*/ _LARGE_INTEGER CreationTime;
	/*0008*/ _LARGE_INTEGER LastAccessTime;
	/*0010*/ _LARGE_INTEGER LastWriteTime;
	/*0018*/ _LARGE_INTEGER ChangeTime;
	/*0020*/ _LARGE_INTEGER AllocationSize;
	/*0028*/ _LARGE_INTEGER EndOfFile;
	/*0030*/ ULONG FileAttributes;
	/*0038*/
};

struct _FILE_OBJECT {
	/*0000*/ SHORT Type;
	/*0002*/ SHORT Size;
	/*0004*/ _DEVICE_OBJECT * DeviceObject;
	/*0008*/ _VPB * Vpb;
	/*000c*/ void * FsContext;
	/*0010*/ void * FsContext2;
	/*0014*/ _SECTION_OBJECT_POINTERS * SectionObjectPointer;
	/*0018*/ void * PrivateCacheMap;
	/*001c*/ LONG FinalStatus;
	/*0020*/ _FILE_OBJECT * RelatedFileObject;
	/*0024*/ UCHAR LockOperation;
	/*0025*/ UCHAR DeletePending;
	/*0026*/ UCHAR ReadAccess;
	/*0027*/ UCHAR WriteAccess;
	/*0028*/ UCHAR DeleteAccess;
	/*0029*/ UCHAR SharedRead;
	/*002a*/ UCHAR SharedWrite;
	/*002b*/ UCHAR SharedDelete;
	/*002c*/ ULONG Flags;
	/*0030*/ _UNICODE_STRING FileName;
	/*0038*/ _LARGE_INTEGER CurrentByteOffset;
	/*0040*/ ULONG Waiters;
	/*0044*/ ULONG Busy;
	/*0048*/ void * LastLock;
	/*004c*/ _KEVENT Lock;
	/*005c*/ _KEVENT Event;
	/*006c*/ _IO_COMPLETION_CONTEXT * CompletionContext;
	/*0070*/
};

struct _FILE_STANDARD_INFORMATION {
	/*0000*/ _LARGE_INTEGER AllocationSize;
	/*0008*/ _LARGE_INTEGER EndOfFile;
	/*0010*/ ULONG NumberOfLinks;
	/*0014*/ UCHAR DeletePending;
	/*0015*/ UCHAR Directory;
	/*0018*/
};

struct _FLOATING_SAVE_AREA {
	/*0000*/ ULONG ControlWord;
	/*0004*/ ULONG StatusWord;
	/*0008*/ ULONG TagWord;
	/*000c*/ ULONG ErrorOffset;
	/*0010*/ ULONG ErrorSelector;
	/*0014*/ ULONG DataOffset;
	/*0018*/ ULONG DataSelector;
	/*001c*/ UCHAR RegisterArea[0x50];
	/*006c*/ ULONG Cr0NpxState;
	/*0070*/
};

struct _FNSAVE_FORMAT {
	/*0000*/ ULONG ControlWord;
	/*0004*/ ULONG StatusWord;
	/*0008*/ ULONG TagWord;
	/*000c*/ ULONG ErrorOffset;
	/*0010*/ ULONG ErrorSelector;
	/*0014*/ ULONG DataOffset;
	/*0018*/ ULONG DataSelector;
	/*001c*/ UCHAR RegisterArea[0x50];
	/*006c*/
};

enum _FSINFOCLASS {
	FileFsVolumeInformation = 0x1,
	FileFsLabelInformation = 0x2,
	FileFsSizeInformation = 0x3,
	FileFsDeviceInformation = 0x4,
	FileFsAttributeInformation = 0x5,
	FileFsControlInformation = 0x6,
	FileFsFullSizeInformation = 0x7,
	FileFsObjectIdInformation = 0x8,
	FileFsDriverPathInformation = 0x9,
	FileFsMaximumInformation = 0xa
};

struct _FS_FILTER_CALLBACKS {
	/*0000*/ ULONG SizeOfFsFilterCallbacks;
	/*0004*/ ULONG Reserved;
	/*0008*/ LONG (* PreAcquireForSectionSynchronization)( _FS_FILTER_CALLBACK_DATA * , void * * );
	/*000c*/ void (* PostAcquireForSectionSynchronization)( _FS_FILTER_CALLBACK_DATA * , LONG , void * );
	/*0010*/ LONG (* PreReleaseForSectionSynchronization)( _FS_FILTER_CALLBACK_DATA * , void * * );
	/*0014*/ void (* PostReleaseForSectionSynchronization)( _FS_FILTER_CALLBACK_DATA * , LONG , void * );
	/*0018*/ LONG (* PreAcquireForCcFlush)( _FS_FILTER_CALLBACK_DATA * , void * * );
	/*001c*/ void (* PostAcquireForCcFlush)( _FS_FILTER_CALLBACK_DATA * , LONG , void * );
	/*0020*/ LONG (* PreReleaseForCcFlush)( _FS_FILTER_CALLBACK_DATA * , void * * );
	/*0024*/ void (* PostReleaseForCcFlush)( _FS_FILTER_CALLBACK_DATA * , LONG , void * );
	/*0028*/ LONG (* PreAcquireForModifiedPageWriter)( _FS_FILTER_CALLBACK_DATA * , void * * );
	/*002c*/ void (* PostAcquireForModifiedPageWriter)( _FS_FILTER_CALLBACK_DATA * , LONG , void * );
	/*0030*/ LONG (* PreReleaseForModifiedPageWriter)( _FS_FILTER_CALLBACK_DATA * , void * * );
	/*0034*/ void (* PostReleaseForModifiedPageWriter)( _FS_FILTER_CALLBACK_DATA * , LONG , void * );
	/*0038*/
};

struct _FS_FILTER_CALLBACK_DATA {
	/*0000*/ ULONG SizeOfFsFilterCallbackData;
	/*0004*/ UCHAR Operation;
	/*0005*/ UCHAR Reserved;
	/*0008*/ _DEVICE_OBJECT * DeviceObject;
	/*000c*/ _FILE_OBJECT * FileObject;
	/*0010*/ _FS_FILTER_PARAMETERS Parameters;
	/*0024*/
};

union _FS_FILTER_PARAMETERS {
	struct {
		/*0000*/ _LARGE_INTEGER * EndingOffset;
		/*0004*/ _ERESOURCE * * ResourceToRelease;
		/*0008*/
	} AcquireForModifiedPageWriter;
	struct {
		/*0000*/ _ERESOURCE * ResourceToRelease;
		/*0004*/
	} ReleaseForModifiedPageWriter;
	struct {
		/*0000*/ _FS_FILTER_SECTION_SYNC_TYPE SyncType;
		/*0004*/ ULONG PageProtection;
		/*0008*/
	} AcquireForSectionSynchronization;
	struct {
		/*0000*/ void * Argument1;
		/*0004*/ void * Argument2;
		/*0008*/ void * Argument3;
		/*000c*/ void * Argument4;
		/*0010*/ void * Argument5;
		/*0014*/
	} Others;
	/*0014*/
};

enum _FS_FILTER_SECTION_SYNC_TYPE {
	SyncTypeOther = 0x0,
	SyncTypeCreateSection = 0x1
};

struct _FXSAVE_FORMAT {
	/*0000*/ USHORT ControlWord;
	/*0002*/ USHORT StatusWord;
	/*0004*/ USHORT TagWord;
	/*0006*/ USHORT ErrorOpcode;
	/*0008*/ ULONG ErrorOffset;
	/*000c*/ ULONG ErrorSelector;
	/*0010*/ ULONG DataOffset;
	/*0014*/ ULONG DataSelector;
	/*0018*/ ULONG MXCsr;
	/*001c*/ ULONG MXCsrMask;
	/*0020*/ UCHAR RegisterArea[0x80];
	/*00a0*/ UCHAR Reserved3[0x80];
	/*0120*/ UCHAR Reserved4[0xe0];
	/*0200*/ UCHAR Align16Byte[0x8];
	/*0208*/
};

struct _FX_SAVE_AREA {
	union {
		/*0000*/ _FNSAVE_FORMAT FnArea;
		/*0000*/ _FXSAVE_FORMAT FxArea;
		/*0208*/
	} U;
	/*0208*/ ULONG NpxSavedCpu;
	/*020c*/ ULONG Cr0NpxState;
	/*0210*/
};

struct _GDI_TEB_BATCH {
	/*0000*/ ULONG Offset;
	/*0004*/ ULONG HDC;
	/*0008*/ ULONG Buffer[0x136];
	/*04e0*/
};

struct _GENERAL_LOOKASIDE {
	/*0000*/ _SLIST_HEADER ListHead;
	/*0008*/ USHORT Depth;
	/*000a*/ USHORT MaximumDepth;
	/*000c*/ ULONG TotalAllocates;
	/*0010*/ ULONG AllocateMisses;
	/*0010*/ ULONG AllocateHits;
	/*0014*/ ULONG TotalFrees;
	/*0018*/ ULONG FreeMisses;
	/*0018*/ ULONG FreeHits;
	/*001c*/ _POOL_TYPE Type;
	/*0020*/ ULONG Tag;
	/*0024*/ ULONG Size;
	/*0028*/ void * (* Allocate)( _POOL_TYPE , ULONG , ULONG );
	/*002c*/ void (* Free)( void * );
	/*0030*/ _LIST_ENTRY ListEntry;
	/*0038*/ ULONG LastTotalAllocates;
	/*003c*/ ULONG LastAllocateMisses;
	/*003c*/ ULONG LastAllocateHits;
	/*0040*/ ULONG Future[0x2];
	/*0080*/
};

struct _GENERIC_MAPPING {
	/*0000*/ ULONG GenericRead;
	/*0004*/ ULONG GenericWrite;
	/*0008*/ ULONG GenericExecute;
	/*000c*/ ULONG GenericAll;
	/*0010*/
};

struct _GUID {
	/*0000*/ ULONG Data1;
	/*0004*/ USHORT Data2;
	/*0006*/ USHORT Data3;
	/*0008*/ UCHAR Data4[0x8];
	/*0010*/
};

struct _HANDLE_TABLE {
	/*0000*/ ULONG TableCode;
	/*0004*/ _EPROCESS * QuotaProcess;
	/*0008*/ void * UniqueProcessId;
	/*000c*/ _EX_PUSH_LOCK HandleTableLock[0x4];
	/*001c*/ _LIST_ENTRY HandleTableList;
	/*0024*/ _EX_PUSH_LOCK HandleContentionEvent;
	/*0028*/ _HANDLE_TRACE_DEBUG_INFO * DebugInfo;
	/*002c*/ LONG ExtraInfoPages;
	/*0030*/ ULONG FirstFree;
	/*0034*/ ULONG LastFree;
	/*0038*/ ULONG NextHandleNeedingPool;
	/*003c*/ LONG HandleCount;
	/*0040*/ ULONG Flags;
	/*0040*/ UCHAR StrictFIFO : 01; // 0x01;
	/*0044*/
};

struct _HANDLE_TABLE_ENTRY {
	/*0000*/ void * Object;
	/*0000*/ ULONG ObAttributes;
	/*0000*/ _HANDLE_TABLE_ENTRY_INFO * InfoTable;
	/*0000*/ ULONG Value;
	/*0004*/ ULONG GrantedAccess;
	/*0004*/ USHORT GrantedAccessIndex;
	/*0006*/ USHORT CreatorBackTraceIndex;
	/*0004*/ LONG NextFreeTableEntry;
	/*0008*/
};

struct _HANDLE_TABLE_ENTRY_INFO {
	/*0000*/ ULONG AuditMask;
	/*0004*/
};

struct _HANDLE_TRACE_DB_ENTRY {
	/*0000*/ _CLIENT_ID ClientId;
	/*0008*/ void * Handle;
	/*000c*/ ULONG Type;
	/*0010*/ void * StackTrace[0x10];
	/*0050*/
};

struct _HANDLE_TRACE_DEBUG_INFO {
	/*0000*/ ULONG CurrentStackIndex;
	/*0004*/ _HANDLE_TRACE_DB_ENTRY TraceDb[0x1000];
	/*50004*/
};

struct _HARDWARE_PTE {
	/*0000*/ ULONGLONG Valid : 01; // 0x0000000000000001;
	/*0000*/ ULONGLONG Write : 01; // 0x0000000000000002;
	/*0000*/ ULONGLONG Owner : 01; // 0x0000000000000004;
	/*0000*/ ULONGLONG WriteThrough : 01; // 0x0000000000000008;
	/*0000*/ ULONGLONG CacheDisable : 01; // 0x0000000000000010;
	/*0000*/ ULONGLONG Accessed : 01; // 0x0000000000000020;
	/*0000*/ ULONGLONG Dirty : 01; // 0x0000000000000040;
	/*0000*/ ULONGLONG LargePage : 01; // 0x0000000000000080;
	/*0000*/ ULONGLONG Global : 01; // 0x0000000000000100;
	/*0000*/ ULONGLONG CopyOnWrite : 01; // 0x0000000000000200;
	/*0000*/ ULONGLONG Prototype : 01; // 0x0000000000000400;
	/*0000*/ ULONGLONG reserved0 : 01; // 0x0000000000000800;
	/*0000*/ ULONGLONG PageFrameNumber : 26; // 0x0000003ffffff000;
	/*0000*/ ULONGLONG reserved1 : 26; // 0xffffffc000000000;
	/*0000*/ ULONG LowPart;
	/*0004*/ ULONG HighPart;
	/*0008*/
};

struct _HBASE_BLOCK {
	/*0000*/ ULONG Signature;
	/*0004*/ ULONG Sequence1;
	/*0008*/ ULONG Sequence2;
	/*000c*/ _LARGE_INTEGER TimeStamp;
	/*0014*/ ULONG Major;
	/*0018*/ ULONG Minor;
	/*001c*/ ULONG Type;
	/*0020*/ ULONG Format;
	/*0024*/ ULONG RootCell;
	/*0028*/ ULONG Length;
	/*002c*/ ULONG Cluster;
	/*0030*/ UCHAR FileName[0x40];
	/*0070*/ ULONG Reserved1[0x63];
	/*01fc*/ ULONG CheckSum;
	/*0200*/ ULONG Reserved2[0x37e];
	/*0ff8*/ ULONG BootType;
	/*0ffc*/ ULONG BootRecover;
	/*1000*/
};

struct _HEAP {
	/*0000*/ _HEAP_ENTRY Entry;
	/*0008*/ ULONG Signature;
	/*000c*/ ULONG Flags;
	/*0010*/ ULONG ForceFlags;
	/*0014*/ ULONG VirtualMemoryThreshold;
	/*0018*/ ULONG SegmentReserve;
	/*001c*/ ULONG SegmentCommit;
	/*0020*/ ULONG DeCommitFreeBlockThreshold;
	/*0024*/ ULONG DeCommitTotalFreeThreshold;
	/*0028*/ ULONG TotalFreeSize;
	/*002c*/ ULONG MaximumAllocationSize;
	/*0030*/ USHORT ProcessHeapsListIndex;
	/*0032*/ USHORT HeaderValidateLength;
	/*0034*/ void * HeaderValidateCopy;
	/*0038*/ USHORT NextAvailableTagIndex;
	/*003a*/ USHORT MaximumTagIndex;
	/*003c*/ _HEAP_TAG_ENTRY * TagEntries;
	/*0040*/ _HEAP_UCR_SEGMENT * UCRSegments;
	/*0044*/ _HEAP_UNCOMMMTTED_RANGE * UnusedUnCommittedRanges;
	/*0048*/ ULONG AlignRound;
	/*004c*/ ULONG AlignMask;
	/*0050*/ _LIST_ENTRY VirtualAllocdBlocks;
	/*0058*/ _HEAP_SEGMENT * Segments[0x40];
	union {
		/*0158*/ ULONG FreeListsInUseUlong[0x4];
		/*0158*/ UCHAR FreeListsInUseBytes[0x10];
		/*0168*/
	} u;
	union {
		/*0168*/ USHORT FreeListsInUseTerminate;
		/*0168*/ USHORT DecommitCount;
		/*016a*/
	} u2;
	/*016a*/ USHORT AllocatorBackTraceIndex;
	/*016c*/ ULONG NonDedicatedListLength;
	/*0170*/ void * LargeBlocksIndex;
	/*0174*/ _HEAP_PSEUDO_TAG_ENTRY * PseudoTagEntries;
	/*0178*/ _LIST_ENTRY FreeLists[0x80];
	/*0578*/ _HEAP_LOCK * LockVariable;
	/*057c*/ LONG (* CommitRoutine)( void * , void * * , ULONG * );
	/*0580*/ void * FrontEndHeap;
	/*0584*/ USHORT FrontHeapLockCount;
	/*0586*/ UCHAR FrontEndHeapType;
	/*0587*/ UCHAR LastSegmentIndex;
	/*0588*/
};

struct _HEAP_ENTRY {
	/*0000*/ USHORT Size;
	/*0002*/ USHORT PreviousSize;
	/*0000*/ void * volatile SubSegmentCode;
	/*0004*/ UCHAR SmallTagIndex;
	/*0005*/ UCHAR Flags;
	/*0006*/ UCHAR UnusedBytes;
	/*0007*/ UCHAR volatile SegmentIndex;
	/*0008*/
};

struct _HEAP_ENTRY_EXTRA {
	/*0000*/ USHORT AllocatorBackTraceIndex;
	/*0002*/ USHORT TagIndex;
	/*0004*/ ULONG Settable;
	/*0000*/ ULONGLONG ZeroInit;
	/*0008*/
};

struct _HEAP_FREE_ENTRY {
	/*0000*/ USHORT Size;
	/*0002*/ USHORT PreviousSize;
	/*0000*/ void * volatile SubSegmentCode;
	/*0004*/ UCHAR SmallTagIndex;
	/*0005*/ UCHAR Flags;
	/*0006*/ UCHAR UnusedBytes;
	/*0007*/ UCHAR volatile SegmentIndex;
	/*0008*/ _LIST_ENTRY FreeList;
	/*0010*/
};

struct _HEAP_FREE_ENTRY_EXTRA {
	/*0000*/ USHORT TagIndex;
	/*0002*/ USHORT FreeBackTraceIndex;
	/*0004*/
};

struct _HEAP_LOCK {
	union {
		/*0000*/ _RTL_CRITICAL_SECTION CriticalSection;
		/*0000*/ _ERESOURCE Resource;
		/*0038*/
	} Lock;
	/*0038*/
};

struct _HEAP_LOOKASIDE {
	/*0000*/ _SLIST_HEADER ListHead;
	/*0008*/ USHORT Depth;
	/*000a*/ USHORT MaximumDepth;
	/*000c*/ ULONG TotalAllocates;
	/*0010*/ ULONG AllocateMisses;
	/*0014*/ ULONG TotalFrees;
	/*0018*/ ULONG FreeMisses;
	/*001c*/ ULONG LastTotalAllocates;
	/*0020*/ ULONG LastAllocateMisses;
	/*0024*/ ULONG Counters[0x2];
	/*0030*/
};

struct _HEAP_PSEUDO_TAG_ENTRY {
	/*0000*/ ULONG Allocs;
	/*0004*/ ULONG Frees;
	/*0008*/ ULONG Size;
	/*000c*/
};

struct _HEAP_SEGMENT {
	/*0000*/ _HEAP_ENTRY Entry;
	/*0008*/ ULONG Signature;
	/*000c*/ ULONG Flags;
	/*0010*/ _HEAP * Heap;
	/*0014*/ ULONG LargestUnCommittedRange;
	/*0018*/ void * BaseAddress;
	/*001c*/ ULONG NumberOfPages;
	/*0020*/ _HEAP_ENTRY * FirstEntry;
	/*0024*/ _HEAP_ENTRY * LastValidEntry;
	/*0028*/ ULONG NumberOfUnCommittedPages;
	/*002c*/ ULONG NumberOfUnCommittedRanges;
	/*0030*/ _HEAP_UNCOMMMTTED_RANGE * UnCommittedRanges;
	/*0034*/ USHORT AllocatorBackTraceIndex;
	/*0036*/ USHORT Reserved;
	/*0038*/ _HEAP_ENTRY * LastEntryInSegment;
	/*003c*/
};

struct _HEAP_STOP_ON_TAG {
	/*0000*/ ULONG HeapAndTagIndex;
	/*0000*/ USHORT TagIndex;
	/*0002*/ USHORT HeapIndex;
	/*0004*/
};

struct _HEAP_STOP_ON_VALUES {
	/*0000*/ ULONG AllocAddress;
	/*0004*/ _HEAP_STOP_ON_TAG AllocTag;
	/*0008*/ ULONG ReAllocAddress;
	/*000c*/ _HEAP_STOP_ON_TAG ReAllocTag;
	/*0010*/ ULONG FreeAddress;
	/*0014*/ _HEAP_STOP_ON_TAG FreeTag;
	/*0018*/
};

struct _HEAP_SUBSEGMENT {
	/*0000*/ void * Bucket;
	/*0004*/ _HEAP_USERDATA_HEADER volatile * UserBlocks;
	/*0008*/ _INTERLOCK_SEQ AggregateExchg;
	/*0010*/ USHORT BlockSize;
	/*0012*/ USHORT FreeThreshold;
	/*0014*/ USHORT BlockCount;
	/*0016*/ UCHAR SizeIndex;
	/*0017*/ UCHAR AffinityIndex;
	/*0010*/ ULONG Alignment[0x2];
	/*0018*/ _SINGLE_LIST_ENTRY SFreeListEntry;
	/*001c*/ ULONG volatile Lock;
	/*0020*/
};

struct _HEAP_TAG_ENTRY {
	/*0000*/ ULONG Allocs;
	/*0004*/ ULONG Frees;
	/*0008*/ ULONG Size;
	/*000c*/ USHORT TagIndex;
	/*000e*/ USHORT CreatorBackTraceIndex;
	/*0010*/ USHORT TagName[0x18];
	/*0040*/
};

struct _HEAP_UCR_SEGMENT {
	/*0000*/ _HEAP_UCR_SEGMENT * Next;
	/*0004*/ ULONG ReservedSize;
	/*0008*/ ULONG CommittedSize;
	/*000c*/ ULONG filler;
	/*0010*/
};

struct _HEAP_UNCOMMMTTED_RANGE {
	/*0000*/ _HEAP_UNCOMMMTTED_RANGE * Next;
	/*0004*/ ULONG Address;
	/*0008*/ ULONG Size;
	/*000c*/ ULONG filler;
	/*0010*/
};

struct _HEAP_USERDATA_HEADER {
	/*0000*/ _SINGLE_LIST_ENTRY SFreeListEntry;
	/*0000*/ _HEAP_SUBSEGMENT * SubSegment;
	/*0004*/ void * HeapHandle;
	/*0008*/ ULONG SizeIndex;
	/*000c*/ ULONG Signature;
	/*0010*/
};

struct _HEAP_VIRTUAL_ALLOC_ENTRY {
	/*0000*/ _LIST_ENTRY Entry;
	/*0008*/ _HEAP_ENTRY_EXTRA ExtraStuff;
	/*0010*/ ULONG CommitSize;
	/*0014*/ ULONG ReserveSize;
	/*0018*/ _HEAP_ENTRY BusyBlock;
	/*0020*/
};

struct _HHIVE {
	/*0000*/ ULONG Signature;
	/*0004*/ _CELL_DATA * (* GetCellRoutine)( _HHIVE * , ULONG );
	/*0008*/ void (* ReleaseCellRoutine)( _HHIVE * , ULONG );
	/*000c*/ void * (* Allocate)( ULONG , UCHAR , ULONG );
	/*0010*/ void (* Free)( void * , ULONG );
	/*0014*/ UCHAR (* FileSetSize)( _HHIVE * , ULONG , ULONG , ULONG );
	/*0018*/ UCHAR (* FileWrite)( _HHIVE * , ULONG , CMP_OFFSET_ARRAY * , ULONG , ULONG * );
	/*001c*/ UCHAR (* FileRead)( _HHIVE * , ULONG , ULONG * , void * , ULONG );
	/*0020*/ UCHAR (* FileFlush)( _HHIVE * , ULONG , _LARGE_INTEGER * , ULONG );
	/*0024*/ _HBASE_BLOCK * BaseBlock;
	/*0028*/ _RTL_BITMAP DirtyVector;
	/*0030*/ ULONG DirtyCount;
	/*0034*/ ULONG DirtyAlloc;
	/*0038*/ UCHAR RealWrites;
	/*003c*/ ULONG Cluster;
	/*0040*/ UCHAR Flat;
	/*0041*/ UCHAR ReadOnly;
	/*0042*/ UCHAR Log;
	/*0044*/ ULONG HiveFlags;
	/*0048*/ ULONG LogSize;
	/*004c*/ ULONG RefreshCount;
	/*0050*/ ULONG StorageTypeCount;
	/*0054*/ ULONG Version;
	/*0058*/ _DUAL Storage[0x2];
	/*0210*/
};

struct _HIVE_LIST_ENTRY {
	/*0000*/ USHORT * Name;
	/*0004*/ USHORT * BaseName;
	/*0008*/ _CMHIVE * CmHive;
	/*000c*/ ULONG HHiveFlags;
	/*0010*/ ULONG CmHiveFlags;
	/*0014*/ _CMHIVE * CmHive2;
	/*0018*/ UCHAR ThreadFinished;
	/*0019*/ UCHAR ThreadStarted;
	/*001a*/ UCHAR Allocate;
	/*001c*/
};

struct _HMAP_DIRECTORY {
	/*0000*/ _HMAP_TABLE * Directory[0x400];
	/*1000*/
};

struct _HMAP_ENTRY {
	/*0000*/ ULONG BlockAddress;
	/*0004*/ ULONG BinAddress;
	/*0008*/ _CM_VIEW_OF_FILE * CmView;
	/*000c*/ ULONG MemAlloc;
	/*0010*/
};

struct _HMAP_TABLE {
	/*0000*/ _HMAP_ENTRY Table[0x200];
	/*2000*/
};

struct _IA64_DBGKD_CONTROL_SET {
	/*0000*/ ULONG Continue;
	/*0004*/ ULONGLONG CurrentSymbolStart;
	/*000c*/ ULONGLONG CurrentSymbolEnd;
	/*0014*/
};

struct _IMAGE_DATA_DIRECTORY {
	/*0000*/ ULONG VirtualAddress;
	/*0004*/ ULONG Size;
	/*0008*/
};

struct _IMAGE_DEBUG_DIRECTORY {
	/*0000*/ ULONG Characteristics;
	/*0004*/ ULONG TimeDateStamp;
	/*0008*/ USHORT MajorVersion;
	/*000a*/ USHORT MinorVersion;
	/*000c*/ ULONG Type;
	/*0010*/ ULONG SizeOfData;
	/*0014*/ ULONG AddressOfRawData;
	/*0018*/ ULONG PointerToRawData;
	/*001c*/
};

struct _IMAGE_DOS_HEADER {
	/*0000*/ USHORT e_magic;
	/*0002*/ USHORT e_cblp;
	/*0004*/ USHORT e_cp;
	/*0006*/ USHORT e_crlc;
	/*0008*/ USHORT e_cparhdr;
	/*000a*/ USHORT e_minalloc;
	/*000c*/ USHORT e_maxalloc;
	/*000e*/ USHORT e_ss;
	/*0010*/ USHORT e_sp;
	/*0012*/ USHORT e_csum;
	/*0014*/ USHORT e_ip;
	/*0016*/ USHORT e_cs;
	/*0018*/ USHORT e_lfarlc;
	/*001a*/ USHORT e_ovno;
	/*001c*/ USHORT e_res[0x4];
	/*0024*/ USHORT e_oemid;
	/*0026*/ USHORT e_oeminfo;
	/*0028*/ USHORT e_res2[0xa];
	/*003c*/ LONG e_lfanew;
	/*0040*/
};

struct _IMAGE_FILE_HEADER {
	/*0000*/ USHORT Machine;
	/*0002*/ USHORT NumberOfSections;
	/*0004*/ ULONG TimeDateStamp;
	/*0008*/ ULONG PointerToSymbolTable;
	/*000c*/ ULONG NumberOfSymbols;
	/*0010*/ USHORT SizeOfOptionalHeader;
	/*0012*/ USHORT Characteristics;
	/*0014*/
};

struct _IMAGE_NT_HEADERS {
	/*0000*/ ULONG Signature;
	/*0004*/ _IMAGE_FILE_HEADER FileHeader;
	/*0018*/ _IMAGE_OPTIONAL_HEADER OptionalHeader;
	/*00f8*/
};

struct _IMAGE_OPTIONAL_HEADER {
	/*0000*/ USHORT Magic;
	/*0002*/ UCHAR MajorLinkerVersion;
	/*0003*/ UCHAR MinorLinkerVersion;
	/*0004*/ ULONG SizeOfCode;
	/*0008*/ ULONG SizeOfInitializedData;
	/*000c*/ ULONG SizeOfUninitializedData;
	/*0010*/ ULONG AddressOfEntryPoint;
	/*0014*/ ULONG BaseOfCode;
	/*0018*/ ULONG BaseOfData;
	/*001c*/ ULONG ImageBase;
	/*0020*/ ULONG SectionAlignment;
	/*0024*/ ULONG FileAlignment;
	/*0028*/ USHORT MajorOperatingSystemVersion;
	/*002a*/ USHORT MinorOperatingSystemVersion;
	/*002c*/ USHORT MajorImageVersion;
	/*002e*/ USHORT MinorImageVersion;
	/*0030*/ USHORT MajorSubsystemVersion;
	/*0032*/ USHORT MinorSubsystemVersion;
	/*0034*/ ULONG Win32VersionValue;
	/*0038*/ ULONG SizeOfImage;
	/*003c*/ ULONG SizeOfHeaders;
	/*0040*/ ULONG CheckSum;
	/*0044*/ USHORT Subsystem;
	/*0046*/ USHORT DllCharacteristics;
	/*0048*/ ULONG SizeOfStackReserve;
	/*004c*/ ULONG SizeOfStackCommit;
	/*0050*/ ULONG SizeOfHeapReserve;
	/*0054*/ ULONG SizeOfHeapCommit;
	/*0058*/ ULONG LoaderFlags;
	/*005c*/ ULONG NumberOfRvaAndSizes;
	/*0060*/ _IMAGE_DATA_DIRECTORY DataDirectory[0x10];
	/*00e0*/
};

struct _IMAGE_ROM_OPTIONAL_HEADER {
	/*0000*/ USHORT Magic;
	/*0002*/ UCHAR MajorLinkerVersion;
	/*0003*/ UCHAR MinorLinkerVersion;
	/*0004*/ ULONG SizeOfCode;
	/*0008*/ ULONG SizeOfInitializedData;
	/*000c*/ ULONG SizeOfUninitializedData;
	/*0010*/ ULONG AddressOfEntryPoint;
	/*0014*/ ULONG BaseOfCode;
	/*0018*/ ULONG BaseOfData;
	/*001c*/ ULONG BaseOfBss;
	/*0020*/ ULONG GprMask;
	/*0024*/ ULONG CprMask[0x4];
	/*0034*/ ULONG GpValue;
	/*0038*/
};

struct _IMAGE_SECTION_HEADER {
	/*0000*/ UCHAR Name[0x8];
	union {
		/*0008*/ ULONG PhysicalAddress;
		/*0008*/ ULONG VirtualSize;
		/*000c*/
	} Misc;
	/*000c*/ ULONG VirtualAddress;
	/*0010*/ ULONG SizeOfRawData;
	/*0014*/ ULONG PointerToRawData;
	/*0018*/ ULONG PointerToRelocations;
	/*001c*/ ULONG PointerToLinenumbers;
	/*0020*/ USHORT NumberOfRelocations;
	/*0022*/ USHORT NumberOfLinenumbers;
	/*0024*/ ULONG Characteristics;
	/*0028*/
};

struct _INITIAL_PRIVILEGE_SET {
	/*0000*/ ULONG PrivilegeCount;
	/*0004*/ ULONG Control;
	/*0008*/ _LUID_AND_ATTRIBUTES Privilege[0x3];
	/*002c*/
};

struct _INTERFACE {
	/*0000*/ USHORT Size;
	/*0002*/ USHORT Version;
	/*0004*/ void * Context;
	/*0008*/ void (* InterfaceReference)( void * );
	/*000c*/ void (* InterfaceDereference)( void * );
	/*0010*/
};

enum _INTERFACE_TYPE {
	InterfaceTypeUndefined = 0xffffffff,
	Internal = 0x0,
	Isa = 0x1,
	Eisa = 0x2,
	MicroChannel = 0x3,
	TurboChannel = 0x4,
	PCIBus = 0x5,
	VMEBus = 0x6,
	NuBus = 0x7,
	PCMCIABus = 0x8,
	CBus = 0x9,
	MPIBus = 0xa,
	MPSABus = 0xb,
	ProcessorInternal = 0xc,
	InternalPowerBus = 0xd,
	PNPISABus = 0xe,
	PNPBus = 0xf,
	MaximumInterfaceType = 0x10
};

struct _INTERLOCK_SEQ {
	/*0000*/ USHORT Depth;
	/*0002*/ USHORT FreeEntryOffset;
	/*0000*/ ULONG volatile OffsetAndDepth;
	/*0004*/ ULONG volatile Sequence;
	/*0000*/ LONGLONG volatile Exchg;
	/*0008*/
};

enum _IO_ALLOCATION_ACTION {
	KeepObject = 0x1,
	DeallocateObject = 0x2,
	DeallocateObjectKeepRegisters = 0x3
};

struct _IO_CLIENT_EXTENSION {
	/*0000*/ _IO_CLIENT_EXTENSION * NextExtension;
	/*0004*/ void * ClientIdentificationAddress;
	/*0008*/
};

struct _IO_COMPLETION_CONTEXT {
	/*0000*/ void * Port;
	/*0004*/ void * Key;
	/*0008*/
};

struct _IO_COUNTERS {
	/*0000*/ ULONGLONG ReadOperationCount;
	/*0008*/ ULONGLONG WriteOperationCount;
	/*0010*/ ULONGLONG OtherOperationCount;
	/*0018*/ ULONGLONG ReadTransferCount;
	/*0020*/ ULONGLONG WriteTransferCount;
	/*0028*/ ULONGLONG OtherTransferCount;
	/*0030*/
};

struct _IO_RESOURCE_DESCRIPTOR {
	/*0000*/ UCHAR Option;
	/*0001*/ UCHAR Type;
	/*0002*/ UCHAR ShareDisposition;
	/*0003*/ UCHAR Spare1;
	/*0004*/ USHORT Flags;
	/*0006*/ USHORT Spare2;
	union {
		struct {
			/*0008*/ ULONG Length;
			/*000c*/ ULONG Alignment;
			/*0010*/ _LARGE_INTEGER MinimumAddress;
			/*0018*/ _LARGE_INTEGER MaximumAddress;
			/*0020*/
		} Port;
		struct {
			/*0008*/ ULONG Length;
			/*000c*/ ULONG Alignment;
			/*0010*/ _LARGE_INTEGER MinimumAddress;
			/*0018*/ _LARGE_INTEGER MaximumAddress;
			/*0020*/
		} Memory;
		struct {
			/*0008*/ ULONG MinimumVector;
			/*000c*/ ULONG MaximumVector;
			/*0010*/
		} Interrupt;
		struct {
			/*0008*/ ULONG MinimumChannel;
			/*000c*/ ULONG MaximumChannel;
			/*0010*/
		} Dma;
		struct {
			/*0008*/ ULONG Length;
			/*000c*/ ULONG Alignment;
			/*0010*/ _LARGE_INTEGER MinimumAddress;
			/*0018*/ _LARGE_INTEGER MaximumAddress;
			/*0020*/
		} Generic;
		struct {
			/*0008*/ ULONG Data[0x3];
			/*0014*/
		} DevicePrivate;
		struct {
			/*0008*/ ULONG Length;
			/*000c*/ ULONG MinBusNumber;
			/*0010*/ ULONG MaxBusNumber;
			/*0014*/ ULONG Reserved;
			/*0018*/
		} BusNumber;
		struct {
			/*0008*/ ULONG Priority;
			/*000c*/ ULONG Reserved1;
			/*0010*/ ULONG Reserved2;
			/*0014*/
		} ConfigData;
		/*0020*/
	} u;
	/*0020*/
};

struct _IO_RESOURCE_LIST {
	/*0000*/ USHORT Version;
	/*0002*/ USHORT Revision;
	/*0004*/ ULONG Count;
	/*0008*/ _IO_RESOURCE_DESCRIPTOR Descriptors[0x1];
	/*0028*/
};

struct _IO_RESOURCE_REQUIREMENTS_LIST {
	/*0000*/ ULONG ListSize;
	/*0004*/ _INTERFACE_TYPE InterfaceType;
	/*0008*/ ULONG BusNumber;
	/*000c*/ ULONG SlotNumber;
	/*0010*/ ULONG Reserved[0x3];
	/*001c*/ ULONG AlternativeLists;
	/*0020*/ _IO_RESOURCE_LIST List[0x1];
	/*0048*/
};

struct _IO_SECURITY_CONTEXT {
	/*0000*/ _SECURITY_QUALITY_OF_SERVICE * SecurityQos;
	/*0004*/ _ACCESS_STATE * AccessState;
	/*0008*/ ULONG DesiredAccess;
	/*000c*/ ULONG FullCreateOptions;
	/*0010*/
};

struct _IO_STACK_LOCATION {
	/*0000*/ UCHAR MajorFunction;
	/*0001*/ UCHAR MinorFunction;
	/*0002*/ UCHAR Flags;
	/*0003*/ UCHAR Control;
	union {
		struct {
			/*0004*/ _IO_SECURITY_CONTEXT * SecurityContext;
			/*0008*/ ULONG Options;
			/*000c*/ USHORT FileAttributes;
			/*000e*/ USHORT ShareAccess;
			/*0010*/ ULONG EaLength;
			/*0014*/
		} Create;
		struct {
			/*0004*/ _IO_SECURITY_CONTEXT * SecurityContext;
			/*0008*/ ULONG Options;
			/*000c*/ USHORT Reserved;
			/*000e*/ USHORT ShareAccess;
			/*0010*/ _NAMED_PIPE_CREATE_PARAMETERS * Parameters;
			/*0014*/
		} CreatePipe;
		struct {
			/*0004*/ _IO_SECURITY_CONTEXT * SecurityContext;
			/*0008*/ ULONG Options;
			/*000c*/ USHORT Reserved;
			/*000e*/ USHORT ShareAccess;
			/*0010*/ _MAILSLOT_CREATE_PARAMETERS * Parameters;
			/*0014*/
		} CreateMailslot;
		struct {
			/*0004*/ ULONG Length;
			/*0008*/ ULONG Key;
			/*000c*/ _LARGE_INTEGER ByteOffset;
			/*0014*/
		} Read;
		struct {
			/*0004*/ ULONG Length;
			/*0008*/ ULONG Key;
			/*000c*/ _LARGE_INTEGER ByteOffset;
			/*0014*/
		} Write;
		struct {
			/*0004*/ ULONG Length;
			/*0008*/ _STRING * FileName;
			/*000c*/ _FILE_INFORMATION_CLASS FileInformationClass;
			/*0010*/ ULONG FileIndex;
			/*0014*/
		} QueryDirectory;
		struct {
			/*0004*/ ULONG Length;
			/*0008*/ ULONG CompletionFilter;
			/*000c*/
		} NotifyDirectory;
		struct {
			/*0004*/ ULONG Length;
			/*0008*/ _FILE_INFORMATION_CLASS FileInformationClass;
			/*000c*/
		} QueryFile;
		struct {
			/*0004*/ ULONG Length;
			/*0008*/ _FILE_INFORMATION_CLASS FileInformationClass;
			/*000c*/ _FILE_OBJECT * FileObject;
			/*0010*/ UCHAR ReplaceIfExists;
			/*0011*/ UCHAR AdvanceOnly;
			/*0010*/ ULONG ClusterCount;
			/*0010*/ void * DeleteHandle;
			/*0014*/
		} SetFile;
		struct {
			/*0004*/ ULONG Length;
			/*0008*/ void * EaList;
			/*000c*/ ULONG EaListLength;
			/*0010*/ ULONG EaIndex;
			/*0014*/
		} QueryEa;
		struct {
			/*0004*/ ULONG Length;
			/*0008*/
		} SetEa;
		struct {
			/*0004*/ ULONG Length;
			/*0008*/ _FSINFOCLASS FsInformationClass;
			/*000c*/
		} QueryVolume;
		struct {
			/*0004*/ ULONG Length;
			/*0008*/ _FSINFOCLASS FsInformationClass;
			/*000c*/
		} SetVolume;
		struct {
			/*0004*/ ULONG OutputBufferLength;
			/*0008*/ ULONG InputBufferLength;
			/*000c*/ ULONG FsControlCode;
			/*0010*/ void * Type3InputBuffer;
			/*0014*/
		} FileSystemControl;
		struct {
			/*0004*/ _LARGE_INTEGER * Length;
			/*0008*/ ULONG Key;
			/*000c*/ _LARGE_INTEGER ByteOffset;
			/*0014*/
		} LockControl;
		struct {
			/*0004*/ ULONG OutputBufferLength;
			/*0008*/ ULONG InputBufferLength;
			/*000c*/ ULONG IoControlCode;
			/*0010*/ void * Type3InputBuffer;
			/*0014*/
		} DeviceIoControl;
		struct {
			/*0004*/ ULONG SecurityInformation;
			/*0008*/ ULONG Length;
			/*000c*/
		} QuerySecurity;
		struct {
			/*0004*/ ULONG SecurityInformation;
			/*0008*/ void * SecurityDescriptor;
			/*000c*/
		} SetSecurity;
		struct {
			/*0004*/ _VPB * Vpb;
			/*0008*/ _DEVICE_OBJECT * DeviceObject;
			/*000c*/
		} MountVolume;
		struct {
			/*0004*/ _VPB * Vpb;
			/*0008*/ _DEVICE_OBJECT * DeviceObject;
			/*000c*/
		} VerifyVolume;
		struct {
			/*0004*/ _SCSI_REQUEST_BLOCK * Srb;
			/*0008*/
		} Scsi;
		struct {
			/*0004*/ ULONG Length;
			/*0008*/ void * StartSid;
			/*000c*/ _FILE_GET_QUOTA_INFORMATION * SidList;
			/*0010*/ ULONG SidListLength;
			/*0014*/
		} QueryQuota;
		struct {
			/*0004*/ ULONG Length;
			/*0008*/
		} SetQuota;
		struct {
			/*0004*/ _DEVICE_RELATION_TYPE Type;
			/*0008*/
		} QueryDeviceRelations;
		struct {
			/*0004*/ _GUID const * InterfaceType;
			/*0008*/ USHORT Size;
			/*000a*/ USHORT Version;
			/*000c*/ _INTERFACE * Interface;
			/*0010*/ void * InterfaceSpecificData;
			/*0014*/
		} QueryInterface;
		struct {
			/*0004*/ _DEVICE_CAPABILITIES * Capabilities;
			/*0008*/
		} DeviceCapabilities;
		struct {
			/*0004*/ _IO_RESOURCE_REQUIREMENTS_LIST * IoResourceRequirementList;
			/*0008*/
		} FilterResourceRequirements;
		struct {
			/*0004*/ ULONG WhichSpace;
			/*0008*/ void * Buffer;
			/*000c*/ ULONG Offset;
			/*0010*/ ULONG Length;
			/*0014*/
		} ReadWriteConfig;
		struct {
			/*0004*/ UCHAR Lock;
			/*0005*/
		} SetLock;
		struct {
			/*0004*/ BUS_QUERY_ID_TYPE IdType;
			/*0008*/
		} QueryId;
		struct {
			/*0004*/ DEVICE_TEXT_TYPE DeviceTextType;
			/*0008*/ ULONG LocaleId;
			/*000c*/
		} QueryDeviceText;
		struct {
			/*0004*/ UCHAR InPath;
			/*0005*/ UCHAR Reserved[0x3];
			/*0008*/ _DEVICE_USAGE_NOTIFICATION_TYPE Type;
			/*000c*/
		} UsageNotification;
		struct {
			/*0004*/ _SYSTEM_POWER_STATE PowerState;
			/*0008*/
		} WaitWake;
		struct {
			/*0004*/ _POWER_SEQUENCE * PowerSequence;
			/*0008*/
		} PowerSequence;
		struct {
			/*0004*/ ULONG SystemContext;
			/*0008*/ _POWER_STATE_TYPE Type;
			/*000c*/ _POWER_STATE State;
			/*0010*/ POWER_ACTION ShutdownType;
			/*0014*/
		} Power;
		struct {
			/*0004*/ _CM_RESOURCE_LIST * AllocatedResources;
			/*0008*/ _CM_RESOURCE_LIST * AllocatedResourcesTranslated;
			/*000c*/
		} StartDevice;
		struct {
			/*0004*/ ULONG ProviderId;
			/*0008*/ void * DataPath;
			/*000c*/ ULONG BufferSize;
			/*0010*/ void * Buffer;
			/*0014*/
		} WMI;
		struct {
			/*0004*/ void * Argument1;
			/*0008*/ void * Argument2;
			/*000c*/ void * Argument3;
			/*0010*/ void * Argument4;
			/*0014*/
		} Others;
		/*0014*/
	} Parameters;
	/*0014*/ _DEVICE_OBJECT * DeviceObject;
	/*0018*/ _FILE_OBJECT * FileObject;
	/*001c*/ LONG (* CompletionRoutine)( _DEVICE_OBJECT * , _IRP * , void * );
	/*0020*/ void * Context;
	/*0024*/
};

struct _IO_STATUS_BLOCK {
	/*0000*/ LONG Status;
	/*0000*/ void * Pointer;
	/*0004*/ ULONG Information;
	/*0008*/
};

struct _IO_TIMER {
	/*0000*/ SHORT Type;
	/*0002*/ SHORT TimerFlag;
	/*0004*/ _LIST_ENTRY TimerList;
	/*000c*/ void (* TimerRoutine)( _DEVICE_OBJECT * , void * );
	/*0010*/ void * Context;
	/*0014*/ _DEVICE_OBJECT * DeviceObject;
	/*0018*/
};

struct _IRP {
	/*0000*/ SHORT Type;
	/*0002*/ USHORT Size;
	/*0004*/ _MDL * MdlAddress;
	/*0008*/ ULONG Flags;
	union {
		/*000c*/ _IRP * MasterIrp;
		/*000c*/ LONG IrpCount;
		/*000c*/ void * SystemBuffer;
		/*0010*/
	} AssociatedIrp;
	/*0010*/ _LIST_ENTRY ThreadListEntry;
	/*0018*/ _IO_STATUS_BLOCK IoStatus;
	/*0020*/ CHAR RequestorMode;
	/*0021*/ UCHAR PendingReturned;
	/*0022*/ CHAR StackCount;
	/*0023*/ CHAR CurrentLocation;
	/*0024*/ UCHAR Cancel;
	/*0025*/ UCHAR CancelIrql;
	/*0026*/ CHAR ApcEnvironment;
	/*0027*/ UCHAR AllocationFlags;
	/*0028*/ _IO_STATUS_BLOCK * UserIosb;
	/*002c*/ _KEVENT * UserEvent;
	union {
		struct {
			/*0030*/ void (* UserApcRoutine)( void * , _IO_STATUS_BLOCK * , ULONG );
			/*0034*/ void * UserApcContext;
			/*0038*/
		} AsynchronousParameters;
		/*0030*/ _LARGE_INTEGER AllocationSize;
		/*0038*/
	} Overlay;
	/*0038*/ void (* CancelRoutine)( _DEVICE_OBJECT * , _IRP * );
	/*003c*/ void * UserBuffer;
	union {
		struct {
			/*0040*/ _KDEVICE_QUEUE_ENTRY DeviceQueueEntry;
			/*0040*/ void * DriverContext[0x4];
			/*0050*/ _ETHREAD * Thread;
			/*0054*/ CHAR * AuxiliaryBuffer;
			/*0058*/ _LIST_ENTRY ListEntry;
			/*0060*/ _IO_STACK_LOCATION * CurrentStackLocation;
			/*0060*/ ULONG PacketType;
			/*0064*/ _FILE_OBJECT * OriginalFileObject;
			/*0068*/
		} Overlay;
		/*0040*/ _KAPC Apc;
		/*0040*/ void * CompletionKey;
		/*0070*/
	} Tail;
	/*0070*/
};

struct _KAPC {
	/*0000*/ SHORT Type;
	/*0002*/ SHORT Size;
	/*0004*/ ULONG Spare0;
	/*0008*/ _KTHREAD * Thread;
	/*000c*/ _LIST_ENTRY ApcListEntry;
	/*0014*/ void (* KernelRoutine)( _KAPC * , void (* * )( void * , void * , void * ), void * * , void * * , void * * );
	/*0018*/ void (* RundownRoutine)( _KAPC * );
	/*001c*/ void (* NormalRoutine)( void * , void * , void * );
	/*0020*/ void * NormalContext;
	/*0024*/ void * SystemArgument1;
	/*0028*/ void * SystemArgument2;
	/*002c*/ CHAR ApcStateIndex;
	/*002d*/ CHAR ApcMode;
	/*002e*/ UCHAR Inserted;
	/*0030*/
};

struct _KAPC_STATE {
	/*0000*/ _LIST_ENTRY ApcListHead[0x2];
	/*0010*/ _KPROCESS * Process;
	/*0014*/ UCHAR KernelApcInProgress;
	/*0015*/ UCHAR KernelApcPending;
	/*0016*/ UCHAR UserApcPending;
	/*0018*/
};

struct _KDEVICE_QUEUE {
	/*0000*/ SHORT Type;
	/*0002*/ SHORT Size;
	/*0004*/ _LIST_ENTRY DeviceListHead;
	/*000c*/ ULONG Lock;
	/*0010*/ UCHAR Busy;
	/*0014*/
};

struct _KDEVICE_QUEUE_ENTRY {
	/*0000*/ _LIST_ENTRY DeviceListEntry;
	/*0008*/ ULONG SortKey;
	/*000c*/ UCHAR Inserted;
	/*0010*/
};

struct _KDPC {
	/*0000*/ SHORT Type;
	/*0002*/ UCHAR Number;
	/*0003*/ UCHAR Importance;
	/*0004*/ _LIST_ENTRY DpcListEntry;
	/*000c*/ void (* DeferredRoutine)( _KDPC * , void * , void * , void * );
	/*0010*/ void * DeferredContext;
	/*0014*/ void * SystemArgument1;
	/*0018*/ void * SystemArgument2;
	/*001c*/ ULONG * Lock;
	/*0020*/
};

struct _KEVENT {
	/*0000*/ _DISPATCHER_HEADER Header;
	/*0010*/
};

struct _KEXECUTE_OPTIONS {
	/*0000*/ UCHAR ExecuteDisable : 01; // 0x01;
	/*0000*/ UCHAR ExecuteEnable : 01; // 0x02;
	/*0000*/ UCHAR DisableThunkEmulation : 01; // 0x04;
	/*0000*/ UCHAR Permanent : 01; // 0x08;
	/*0000*/ UCHAR ExecuteDispatchEnable : 01; // 0x10;
	/*0000*/ UCHAR ImageDispatchEnable : 01; // 0x20;
	/*0000*/ UCHAR Spare : 02; // 0xc0;
	/*0001*/
};

struct _KGDTENTRY {
	/*0000*/ USHORT LimitLow;
	/*0002*/ USHORT BaseLow;
	union {
		struct {
			/*0004*/ UCHAR BaseMid;
			/*0005*/ UCHAR Flags1;
			/*0006*/ UCHAR Flags2;
			/*0007*/ UCHAR BaseHi;
			/*0008*/
		} Bytes;
		struct {
			/*0004*/ ULONG BaseMid : 08; // 0x000000ff;
			/*0004*/ ULONG Type : 05; // 0x00001f00;
			/*0004*/ ULONG Dpl : 02; // 0x00006000;
			/*0004*/ ULONG Pres : 01; // 0x00008000;
			/*0004*/ ULONG LimitHi : 04; // 0x000f0000;
			/*0004*/ ULONG Sys : 01; // 0x00100000;
			/*0004*/ ULONG Reserved_0 : 01; // 0x00200000;
			/*0004*/ ULONG Default_Big : 01; // 0x00400000;
			/*0004*/ ULONG Granularity : 01; // 0x00800000;
			/*0004*/ ULONG BaseHi : 08; // 0xff000000;
			/*0008*/
		} Bits;
		/*0008*/
	} HighWord;
	/*0008*/
};

struct _KIDTENTRY {
	/*0000*/ USHORT Offset;
	/*0002*/ USHORT Selector;
	/*0004*/ USHORT Access;
	/*0006*/ USHORT ExtendedOffset;
	/*0008*/
};

struct _KINTERRUPT {
	/*0000*/ SHORT Type;
	/*0002*/ SHORT Size;
	/*0004*/ _LIST_ENTRY InterruptListEntry;
	/*000c*/ UCHAR (* ServiceRoutine)( _KINTERRUPT * , void * );
	/*0010*/ void * ServiceContext;
	/*0014*/ ULONG SpinLock;
	/*0018*/ ULONG TickCount;
	/*001c*/ ULONG * ActualLock;
	/*0020*/ void (* DispatchAddress)();
	/*0024*/ ULONG Vector;
	/*0028*/ UCHAR Irql;
	/*0029*/ UCHAR SynchronizeIrql;
	/*002a*/ UCHAR FloatingSave;
	/*002b*/ UCHAR Connected;
	/*002c*/ CHAR Number;
	/*002d*/ UCHAR ShareVector;
	/*0030*/ _KINTERRUPT_MODE Mode;
	/*0034*/ ULONG ServiceCount;
	/*0038*/ ULONG DispatchCount;
	/*003c*/ ULONG DispatchCode[0x6a];
	/*01e4*/
};

enum _KINTERRUPT_MODE {
	LevelSensitive = 0x0,
	Latched = 0x1
};

struct _KLOCK_QUEUE_HANDLE {
	/*0000*/ _KSPIN_LOCK_QUEUE LockQueue;
	/*0008*/ UCHAR OldIrql;
	/*000c*/
};

struct _KMUTANT {
	/*0000*/ _DISPATCHER_HEADER Header;
	/*0010*/ _LIST_ENTRY MutantListEntry;
	/*0018*/ _KTHREAD * OwnerThread;
	/*001c*/ UCHAR Abandoned;
	/*001d*/ UCHAR ApcDisable;
	/*0020*/
};

struct _KNODE {
	/*0000*/ ULONG ProcessorMask;
	/*0004*/ ULONG Color;
	/*0008*/ ULONG MmShiftedColor;
	/*000c*/ ULONG FreeCount[0x2];
	/*0018*/ _SLIST_HEADER DeadStackList;
	/*0020*/ _SLIST_HEADER PfnDereferenceSListHead;
	/*0028*/ _SINGLE_LIST_ENTRY * PfnDeferredList;
	/*002c*/ UCHAR Seed;
	/*002d*/ _flags Flags;
	/*0030*/
};

struct _KPCR {
	/*0000*/ _NT_TIB NtTib;
	/*001c*/ _KPCR * SelfPcr;
	/*0020*/ _KPRCB * Prcb;
	/*0024*/ UCHAR Irql;
	/*0028*/ ULONG IRR;
	/*002c*/ ULONG IrrActive;
	/*0030*/ ULONG IDR;
	/*0034*/ void * KdVersionBlock;
	/*0038*/ _KIDTENTRY * IDT;
	/*003c*/ _KGDTENTRY * GDT;
	/*0040*/ _KTSS * TSS;
	/*0044*/ USHORT MajorVersion;
	/*0046*/ USHORT MinorVersion;
	/*0048*/ ULONG SetMember;
	/*004c*/ ULONG StallScaleFactor;
	/*0050*/ UCHAR DebugActive;
	/*0051*/ UCHAR Number;
	/*0052*/ UCHAR Spare0;
	/*0053*/ UCHAR SecondLevelCacheAssociativity;
	/*0054*/ ULONG VdmAlert;
	/*0058*/ ULONG KernelReserved[0xe];
	/*0090*/ ULONG SecondLevelCacheSize;
	/*0094*/ ULONG HalReserved[0x10];
	/*00d4*/ ULONG InterruptMode;
	/*00d8*/ UCHAR Spare1;
	/*00dc*/ ULONG KernelReserved2[0x11];
	/*0120*/ _KPRCB PrcbData;
	/*0d70*/
};

struct _KPRCB {
	/*0000*/ USHORT MinorVersion;
	/*0002*/ USHORT MajorVersion;
	/*0004*/ _KTHREAD * CurrentThread;
	/*0008*/ _KTHREAD * NextThread;
	/*000c*/ _KTHREAD * IdleThread;
	/*0010*/ CHAR Number;
	/*0011*/ CHAR Reserved;
	/*0012*/ USHORT BuildType;
	/*0014*/ ULONG SetMember;
	/*0018*/ CHAR CpuType;
	/*0019*/ CHAR CpuID;
	/*001a*/ USHORT CpuStep;
	/*001c*/ _KPROCESSOR_STATE ProcessorState;
	/*033c*/ ULONG KernelReserved[0x10];
	/*037c*/ ULONG HalReserved[0x10];
	/*03bc*/ UCHAR PrcbPad0[0x5c];
	/*0418*/ _KSPIN_LOCK_QUEUE LockQueue[0x10];
	/*0498*/ UCHAR PrcbPad1[0x8];
	/*04a0*/ _KTHREAD * NpxThread;
	/*04a4*/ ULONG InterruptCount;
	/*04a8*/ ULONG KernelTime;
	/*04ac*/ ULONG UserTime;
	/*04b0*/ ULONG DpcTime;
	/*04b4*/ ULONG DebugDpcTime;
	/*04b8*/ ULONG InterruptTime;
	/*04bc*/ ULONG AdjustDpcThreshold;
	/*04c0*/ ULONG PageColor;
	/*04c4*/ ULONG SkipTick;
	/*04c8*/ UCHAR MultiThreadSetBusy;
	/*04c9*/ UCHAR Spare2[0x3];
	/*04cc*/ _KNODE * ParentNode;
	/*04d0*/ ULONG MultiThreadProcessorSet;
	/*04d4*/ _KPRCB * MultiThreadSetMaster;
	/*04d8*/ ULONG ThreadStartCount[0x2];
	/*04e0*/ ULONG CcFastReadNoWait;
	/*04e4*/ ULONG CcFastReadWait;
	/*04e8*/ ULONG CcFastReadNotPossible;
	/*04ec*/ ULONG CcCopyReadNoWait;
	/*04f0*/ ULONG CcCopyReadWait;
	/*04f4*/ ULONG CcCopyReadNoWaitMiss;
	/*04f8*/ ULONG KeAlignmentFixupCount;
	/*04fc*/ ULONG KeContextSwitches;
	/*0500*/ ULONG KeDcacheFlushCount;
	/*0504*/ ULONG KeExceptionDispatchCount;
	/*0508*/ ULONG KeFirstLevelTbFills;
	/*050c*/ ULONG KeFloatingEmulationCount;
	/*0510*/ ULONG KeIcacheFlushCount;
	/*0514*/ ULONG KeSecondLevelTbFills;
	/*0518*/ ULONG KeSystemCalls;
	/*051c*/ ULONG SpareCounter0[0x1];
	/*0520*/ _PP_LOOKASIDE_LIST PPLookasideList[0x10];
	/*05a0*/ _PP_LOOKASIDE_LIST PPNPagedLookasideList[0x20];
	/*06a0*/ _PP_LOOKASIDE_LIST PPPagedLookasideList[0x20];
	/*07a0*/ ULONG volatile PacketBarrier;
	/*07a4*/ ULONG volatile ReverseStall;
	/*07a8*/ void * IpiFrame;
	/*07ac*/ UCHAR PrcbPad2[0x34];
	/*07e0*/ void * volatile CurrentPacket[0x3];
	/*07ec*/ ULONG volatile TargetSet;
	/*07f0*/ void (* volatile WorkerRoutine)( void * , void * , void * , void * );
	/*07f4*/ ULONG volatile IpiFrozen;
	/*07f8*/ UCHAR PrcbPad3[0x28];
	/*0820*/ ULONG volatile RequestSummary;
	/*0824*/ _KPRCB volatile * SignalDone;
	/*0828*/ UCHAR PrcbPad4[0x38];
	/*0860*/ _LIST_ENTRY DpcListHead;
	/*0868*/ void * DpcStack;
	/*086c*/ ULONG DpcCount;
	/*0870*/ ULONG volatile DpcQueueDepth;
	/*0874*/ ULONG volatile DpcRoutineActive;
	/*0878*/ ULONG volatile DpcInterruptRequested;
	/*087c*/ ULONG DpcLastCount;
	/*0880*/ ULONG DpcRequestRate;
	/*0884*/ ULONG MaximumDpcQueueDepth;
	/*0888*/ ULONG MinimumDpcRate;
	/*088c*/ ULONG QuantumEnd;
	/*0890*/ UCHAR PrcbPad5[0x10];
	/*08a0*/ ULONG DpcLock;
	/*08a4*/ UCHAR PrcbPad6[0x1c];
	/*08c0*/ _KDPC CallDpc;
	/*08e0*/ void * ChainedInterruptList;
	/*08e4*/ LONG LookasideIrpFloat;
	/*08e8*/ ULONG SpareFields0[0x6];
	/*0900*/ UCHAR VendorString[0xd];
	/*090d*/ UCHAR InitialApicId;
	/*090e*/ UCHAR LogicalProcessorsPerPhysicalProcessor;
	/*0910*/ ULONG MHz;
	/*0914*/ ULONG FeatureBits;
	/*0918*/ _LARGE_INTEGER UpdateSignature;
	/*0920*/ _FX_SAVE_AREA NpxSaveArea;
	/*0b30*/ _PROCESSOR_POWER_STATE PowerState;
	/*0c50*/
};

struct _KPROCESS {
	/*0000*/ _DISPATCHER_HEADER Header;
	/*0010*/ _LIST_ENTRY ProfileListHead;
	/*0018*/ ULONG DirectoryTableBase[0x2];
	/*0020*/ _KGDTENTRY LdtDescriptor;
	/*0028*/ _KIDTENTRY Int21Descriptor;
	/*0030*/ USHORT IopmOffset;
	/*0032*/ UCHAR Iopl;
	/*0033*/ UCHAR Unused;
	/*0034*/ ULONG ActiveProcessors;
	/*0038*/ ULONG KernelTime;
	/*003c*/ ULONG UserTime;
	/*0040*/ _LIST_ENTRY ReadyListHead;
	/*0048*/ _SINGLE_LIST_ENTRY SwapListEntry;
	/*004c*/ void * VdmTrapcHandler;
	/*0050*/ _LIST_ENTRY ThreadListHead;
	/*0058*/ ULONG ProcessLock;
	/*005c*/ ULONG Affinity;
	/*0060*/ USHORT StackCount;
	/*0062*/ CHAR BasePriority;
	/*0063*/ CHAR ThreadQuantum;
	/*0064*/ UCHAR AutoAlignment;
	/*0065*/ UCHAR State;
	/*0066*/ UCHAR ThreadSeed;
	/*0067*/ UCHAR DisableBoost;
	/*0068*/ UCHAR PowerState;
	/*0069*/ UCHAR DisableQuantum;
	/*006a*/ UCHAR IdealNode;
	/*006b*/ _KEXECUTE_OPTIONS Flags;
	/*006b*/ UCHAR ExecuteOptions;
	/*006c*/
};

struct _KPROCESSOR_STATE {
	/*0000*/ _CONTEXT ContextFrame;
	/*02cc*/ _KSPECIAL_REGISTERS SpecialRegisters;
	/*0320*/
};

struct _KQUEUE {
	/*0000*/ _DISPATCHER_HEADER Header;
	/*0010*/ _LIST_ENTRY EntryListHead;
	/*0018*/ ULONG CurrentCount;
	/*001c*/ ULONG MaximumCount;
	/*0020*/ _LIST_ENTRY ThreadListHead;
	/*0028*/
};

struct _KSEMAPHORE {
	/*0000*/ _DISPATCHER_HEADER Header;
	/*0010*/ LONG Limit;
	/*0014*/
};

struct _KSPECIAL_REGISTERS {
	/*0000*/ ULONG Cr0;
	/*0004*/ ULONG Cr2;
	/*0008*/ ULONG Cr3;
	/*000c*/ ULONG Cr4;
	/*0010*/ ULONG KernelDr0;
	/*0014*/ ULONG KernelDr1;
	/*0018*/ ULONG KernelDr2;
	/*001c*/ ULONG KernelDr3;
	/*0020*/ ULONG KernelDr6;
	/*0024*/ ULONG KernelDr7;
	/*0028*/ _DESCRIPTOR Gdtr;
	/*0030*/ _DESCRIPTOR Idtr;
	/*0038*/ USHORT Tr;
	/*003a*/ USHORT Ldtr;
	/*003c*/ ULONG Reserved[0x6];
	/*0054*/
};

struct _KSPIN_LOCK_QUEUE {
	/*0000*/ _KSPIN_LOCK_QUEUE * volatile Next;
	/*0004*/ ULONG * volatile Lock;
	/*0008*/
};

enum _KSPIN_LOCK_QUEUE_NUMBER {
	LockQueueDispatcherLock = 0x0,
	LockQueueContextSwapLock = 0x1,
	LockQueuePfnLock = 0x2,
	LockQueueSystemSpaceLock = 0x3,
	LockQueueVacbLock = 0x4,
	LockQueueMasterLock = 0x5,
	LockQueueNonPagedPoolLock = 0x6,
	LockQueueIoCancelLock = 0x7,
	LockQueueWorkQueueLock = 0x8,
	LockQueueIoVpbLock = 0x9,
	LockQueueIoDatabaseLock = 0xa,
	LockQueueIoCompletionLock = 0xb,
	LockQueueNtfsStructLock = 0xc,
	LockQueueAfdWorkQueueLock = 0xd,
	LockQueueBcbLock = 0xe,
	LockQueueMaximumLock = 0xf
};

struct _KSYSTEM_TIME {
	/*0000*/ ULONG LowPart;
	/*0004*/ LONG High1Time;
	/*0008*/ LONG High2Time;
	/*000c*/
};

struct _KTHREAD {
	/*0000*/ _DISPATCHER_HEADER Header;
	/*0010*/ _LIST_ENTRY MutantListHead;
	/*0018*/ void * InitialStack;
	/*001c*/ void * StackLimit;
	/*0020*/ void * Teb;
	/*0024*/ void * TlsArray;
	/*0028*/ void * KernelStack;
	/*002c*/ UCHAR DebugActive;
	/*002d*/ UCHAR State;
	/*002e*/ UCHAR Alerted[0x2];
	/*0030*/ UCHAR Iopl;
	/*0031*/ UCHAR NpxState;
	/*0032*/ CHAR Saturation;
	/*0033*/ CHAR Priority;
	/*0034*/ _KAPC_STATE ApcState;
	/*004c*/ ULONG ContextSwitches;
	/*0050*/ UCHAR IdleSwapBlock;
	/*0051*/ UCHAR VdmSafe;
	/*0052*/ UCHAR Spare0[0x2];
	/*0054*/ LONG WaitStatus;
	/*0058*/ UCHAR WaitIrql;
	/*0059*/ CHAR WaitMode;
	/*005a*/ UCHAR WaitNext;
	/*005b*/ UCHAR WaitReason;
	/*005c*/ _KWAIT_BLOCK * WaitBlockList;
	/*0060*/ _LIST_ENTRY WaitListEntry;
	/*0060*/ _SINGLE_LIST_ENTRY SwapListEntry;
	/*0068*/ ULONG WaitTime;
	/*006c*/ CHAR BasePriority;
	/*006d*/ UCHAR DecrementCount;
	/*006e*/ CHAR PriorityDecrement;
	/*006f*/ CHAR Quantum;
	/*0070*/ _KWAIT_BLOCK WaitBlock[0x4];
	/*00d0*/ void * LegoData;
	/*00d4*/ ULONG KernelApcDisable;
	/*00d8*/ ULONG UserAffinity;
	/*00dc*/ UCHAR SystemAffinityActive;
	/*00dd*/ UCHAR PowerState;
	/*00de*/ UCHAR NpxIrql;
	/*00df*/ UCHAR InitialNode;
	/*00e0*/ void * ServiceTable;
	/*00e4*/ _KQUEUE * Queue;
	/*00e8*/ ULONG ApcQueueLock;
	/*00f0*/ _KTIMER Timer;
	/*0118*/ _LIST_ENTRY QueueListEntry;
	/*0120*/ ULONG SoftAffinity;
	/*0124*/ ULONG Affinity;
	/*0128*/ UCHAR Preempted;
	/*0129*/ UCHAR ProcessReadyQueue;
	/*012a*/ UCHAR KernelStackResident;
	/*012b*/ UCHAR NextProcessor;
	/*012c*/ void * CallbackStack;
	/*0130*/ void * Win32Thread;
	/*0134*/ _KTRAP_FRAME * TrapFrame;
	/*0138*/ _KAPC_STATE * ApcStatePointer[0x2];
	/*0140*/ CHAR PreviousMode;
	/*0141*/ UCHAR EnableStackSwap;
	/*0142*/ UCHAR LargeStack;
	/*0143*/ UCHAR ResourceIndex;
	/*0144*/ ULONG KernelTime;
	/*0148*/ ULONG UserTime;
	/*014c*/ _KAPC_STATE SavedApcState;
	/*0164*/ UCHAR Alertable;
	/*0165*/ UCHAR ApcStateIndex;
	/*0166*/ UCHAR ApcQueueable;
	/*0167*/ UCHAR AutoAlignment;
	/*0168*/ void * StackBase;
	/*016c*/ _KAPC SuspendApc;
	/*019c*/ _KSEMAPHORE SuspendSemaphore;
	/*01b0*/ _LIST_ENTRY ThreadListEntry;
	/*01b8*/ CHAR FreezeCount;
	/*01b9*/ CHAR SuspendCount;
	/*01ba*/ UCHAR IdealProcessor;
	/*01bb*/ UCHAR DisableBoost;
	/*01c0*/
};

struct _KTIMER {
	/*0000*/ _DISPATCHER_HEADER Header;
	/*0010*/ _ULARGE_INTEGER DueTime;
	/*0018*/ _LIST_ENTRY TimerListEntry;
	/*0020*/ _KDPC * Dpc;
	/*0024*/ LONG Period;
	/*0028*/
};

struct _KTRAP_FRAME {
	/*0000*/ ULONG DbgEbp;
	/*0004*/ ULONG DbgEip;
	/*0008*/ ULONG DbgArgMark;
	/*000c*/ ULONG DbgArgPointer;
	/*0010*/ ULONG TempSegCs;
	/*0014*/ ULONG TempEsp;
	/*0018*/ ULONG Dr0;
	/*001c*/ ULONG Dr1;
	/*0020*/ ULONG Dr2;
	/*0024*/ ULONG Dr3;
	/*0028*/ ULONG Dr6;
	/*002c*/ ULONG Dr7;
	/*0030*/ ULONG SegGs;
	/*0034*/ ULONG SegEs;
	/*0038*/ ULONG SegDs;
	/*003c*/ ULONG Edx;
	/*0040*/ ULONG Ecx;
	/*0044*/ ULONG Eax;
	/*0048*/ ULONG PreviousPreviousMode;
	/*004c*/ _EXCEPTION_REGISTRATION_RECORD * ExceptionList;
	/*0050*/ ULONG SegFs;
	/*0054*/ ULONG Edi;
	/*0058*/ ULONG Esi;
	/*005c*/ ULONG Ebx;
	/*0060*/ ULONG Ebp;
	/*0064*/ ULONG ErrCode;
	/*0068*/ ULONG Eip;
	/*006c*/ ULONG SegCs;
	/*0070*/ ULONG EFlags;
	/*0074*/ ULONG HardwareEsp;
	/*0078*/ ULONG HardwareSegSs;
	/*007c*/ ULONG V86Es;
	/*0080*/ ULONG V86Ds;
	/*0084*/ ULONG V86Fs;
	/*0088*/ ULONG V86Gs;
	/*008c*/
};

struct _KTSS {
	/*0000*/ USHORT Backlink;
	/*0002*/ USHORT Reserved0;
	/*0004*/ ULONG Esp0;
	/*0008*/ USHORT Ss0;
	/*000a*/ USHORT Reserved1;
	/*000c*/ ULONG NotUsed1[0x4];
	/*001c*/ ULONG CR3;
	/*0020*/ ULONG Eip;
	/*0024*/ ULONG EFlags;
	/*0028*/ ULONG Eax;
	/*002c*/ ULONG Ecx;
	/*0030*/ ULONG Edx;
	/*0034*/ ULONG Ebx;
	/*0038*/ ULONG Esp;
	/*003c*/ ULONG Ebp;
	/*0040*/ ULONG Esi;
	/*0044*/ ULONG Edi;
	/*0048*/ USHORT Es;
	/*004a*/ USHORT Reserved2;
	/*004c*/ USHORT Cs;
	/*004e*/ USHORT Reserved3;
	/*0050*/ USHORT Ss;
	/*0052*/ USHORT Reserved4;
	/*0054*/ USHORT Ds;
	/*0056*/ USHORT Reserved5;
	/*0058*/ USHORT Fs;
	/*005a*/ USHORT Reserved6;
	/*005c*/ USHORT Gs;
	/*005e*/ USHORT Reserved7;
	/*0060*/ USHORT LDT;
	/*0062*/ USHORT Reserved8;
	/*0064*/ USHORT Flags;
	/*0066*/ USHORT IoMapBase;
	/*0068*/ _KiIoAccessMap IoMaps[0x1];
	/*208c*/ UCHAR IntDirectionMap[0x20];
	/*20ac*/
};

struct _KUSER_SHARED_DATA {
	/*0000*/ ULONG volatile TickCountLow;
	/*0004*/ ULONG TickCountMultiplier;
	/*0008*/ _KSYSTEM_TIME volatile InterruptTime;
	/*0014*/ _KSYSTEM_TIME volatile SystemTime;
	/*0020*/ _KSYSTEM_TIME volatile TimeZoneBias;
	/*002c*/ USHORT ImageNumberLow;
	/*002e*/ USHORT ImageNumberHigh;
	/*0030*/ USHORT NtSystemRoot[0x104];
	/*0238*/ ULONG MaxStackTraceDepth;
	/*023c*/ ULONG CryptoExponent;
	/*0240*/ ULONG TimeZoneId;
	/*0244*/ ULONG Reserved2[0x8];
	/*0264*/ _NT_PRODUCT_TYPE NtProductType;
	/*0268*/ UCHAR ProductTypeIsValid;
	/*026c*/ ULONG NtMajorVersion;
	/*0270*/ ULONG NtMinorVersion;
	/*0274*/ UCHAR ProcessorFeatures[0x40];
	/*02b4*/ ULONG Reserved1;
	/*02b8*/ ULONG Reserved3;
	/*02bc*/ ULONG volatile TimeSlip;
	/*02c0*/ _ALTERNATIVE_ARCHITECTURE_TYPE AlternativeArchitecture;
	/*02c8*/ _LARGE_INTEGER SystemExpirationDate;
	/*02d0*/ ULONG SuiteMask;
	/*02d4*/ UCHAR KdDebuggerEnabled;
	/*02d5*/ UCHAR NXSupportPolicy;
	/*02d8*/ ULONG volatile ActiveConsoleId;
	/*02dc*/ ULONG volatile DismountCount;
	/*02e0*/ ULONG ComPlusPackage;
	/*02e4*/ ULONG LastSystemRITEventTickCount;
	/*02e8*/ ULONG NumberOfPhysicalPages;
	/*02ec*/ UCHAR SafeBootMode;
	/*02f0*/ ULONG TraceLogging;
	/*02f8*/ ULONGLONG TestRetInstruction;
	/*0300*/ ULONG SystemCall;
	/*0304*/ ULONG SystemCallReturn;
	/*0308*/ ULONGLONG SystemCallPad[0x3];
	/*0320*/ _KSYSTEM_TIME volatile TickCount;
	/*0320*/ ULONGLONG volatile TickCountQuad;
	/*0330*/ ULONG Cookie;
	/*0338*/
};

struct _KWAIT_BLOCK {
	/*0000*/ _LIST_ENTRY WaitListEntry;
	/*0008*/ _KTHREAD * Thread;
	/*000c*/ void * Object;
	/*0010*/ _KWAIT_BLOCK * NextWaitBlock;
	/*0014*/ USHORT WaitKey;
	/*0016*/ USHORT WaitType;
	/*0018*/
};

enum _KWAIT_REASON {
	Executive = 0x0,
	FreePage = 0x1,
	PageIn = 0x2,
	PoolAllocation = 0x3,
	DelayExecution = 0x4,
	Suspended = 0x5,
	UserRequest = 0x6,
	WrExecutive = 0x7,
	WrFreePage = 0x8,
	WrPageIn = 0x9,
	WrPoolAllocation = 0xa,
	WrDelayExecution = 0xb,
	WrSuspended = 0xc,
	WrUserRequest = 0xd,
	WrEventPair = 0xe,
	WrQueue = 0xf,
	WrLpcReceive = 0x10,
	WrLpcReply = 0x11,
	WrVirtualMemory = 0x12,
	WrPageOut = 0x13,
	WrRendezvous = 0x14,
	Spare2 = 0x15,
	Spare3 = 0x16,
	Spare4 = 0x17,
	Spare5 = 0x18,
	Spare6 = 0x19,
	WrKernel = 0x1a,
	MaximumWaitReason = 0x1b
};

struct _KiIoAccessMap {
	/*0000*/ UCHAR DirectionMap[0x20];
	/*0020*/ UCHAR IoMap[0x2004];
	/*2024*/
};

struct _LARGE_CONTROL_AREA {
	/*0000*/ _SEGMENT * Segment;
	/*0004*/ _LIST_ENTRY DereferenceList;
	/*000c*/ ULONG NumberOfSectionReferences;
	/*0010*/ ULONG NumberOfPfnReferences;
	/*0014*/ ULONG NumberOfMappedViews;
	/*0018*/ USHORT NumberOfSubsections;
	/*001a*/ USHORT FlushInProgressCount;
	/*001c*/ ULONG NumberOfUserReferences;
	union {
		/*0020*/ ULONG LongFlags;
		/*0020*/ _MMSECTION_FLAGS Flags;
		/*0024*/
	} u;
	/*0024*/ _FILE_OBJECT * FilePointer;
	/*0028*/ _EVENT_COUNTER * WaitingForDeletion;
	/*002c*/ USHORT ModifiedWriteCount;
	/*002e*/ USHORT NumberOfSystemCacheViews;
	/*0030*/ ULONG StartingFrame;
	/*0034*/ _LIST_ENTRY UserGlobalList;
	/*003c*/ ULONG SessionId;
	/*0040*/
};

union _LARGE_INTEGER {
	/*0000*/ ULONG LowPart;
	/*0004*/ LONG HighPart;
	struct {
		/*0000*/ ULONG LowPart;
		/*0004*/ LONG HighPart;
		/*0008*/
	} u;
	/*0000*/ LONGLONG QuadPart;
	/*0008*/
};

struct _LDR_DATA_TABLE_ENTRY {
	/*0000*/ _LIST_ENTRY InLoadOrderLinks;
	/*0008*/ _LIST_ENTRY InMemoryOrderLinks;
	/*0010*/ _LIST_ENTRY InInitializationOrderLinks;
	/*0018*/ void * DllBase;
	/*001c*/ void * EntryPoint;
	/*0020*/ ULONG SizeOfImage;
	/*0024*/ _UNICODE_STRING FullDllName;
	/*002c*/ _UNICODE_STRING BaseDllName;
	/*0034*/ ULONG Flags;
	/*0038*/ USHORT LoadCount;
	/*003a*/ USHORT TlsIndex;
	/*003c*/ _LIST_ENTRY HashLinks;
	/*003c*/ void * SectionPointer;
	/*0040*/ ULONG CheckSum;
	/*0044*/ ULONG TimeDateStamp;
	/*0044*/ void * LoadedImports;
	/*0048*/ void * EntryPointActivationContext;
	/*004c*/ void * PatchInformation;
	/*0050*/
};

struct _LIST_ENTRY {
	/*0000*/ _LIST_ENTRY * Flink;
	/*0004*/ _LIST_ENTRY * Blink;
	/*0008*/
};

struct _LPCP_MESSAGE {
	/*0000*/ _LIST_ENTRY Entry;
	/*0000*/ _SINGLE_LIST_ENTRY FreeEntry;
	/*0004*/ ULONG Reserved0;
	/*0008*/ void * SenderPort;
	/*000c*/ _ETHREAD * RepliedToThread;
	/*0010*/ void * PortContext;
	/*0018*/ _PORT_MESSAGE Request;
	/*0030*/
};

struct _LPCP_NONPAGED_PORT_QUEUE {
	/*0000*/ _KSEMAPHORE Semaphore;
	/*0014*/ _LPCP_PORT_OBJECT * BackPointer;
	/*0018*/
};

struct _LPCP_PORT_OBJECT {
	/*0000*/ _LPCP_PORT_OBJECT * ConnectionPort;
	/*0004*/ _LPCP_PORT_OBJECT * ConnectedPort;
	/*0008*/ _LPCP_PORT_QUEUE MsgQueue;
	/*0018*/ _CLIENT_ID Creator;
	/*0020*/ void * ClientSectionBase;
	/*0024*/ void * ServerSectionBase;
	/*0028*/ void * PortContext;
	/*002c*/ _ETHREAD * ClientThread;
	/*0030*/ _SECURITY_QUALITY_OF_SERVICE SecurityQos;
	/*003c*/ _SECURITY_CLIENT_CONTEXT StaticSecurity;
	/*0078*/ _LIST_ENTRY LpcReplyChainHead;
	/*0080*/ _LIST_ENTRY LpcDataInfoChainHead;
	/*0088*/ _EPROCESS * ServerProcess;
	/*0088*/ _EPROCESS * MappingProcess;
	/*008c*/ USHORT MaxMessageLength;
	/*008e*/ USHORT MaxConnectionInfoLength;
	/*0090*/ ULONG Flags;
	/*0094*/ _KEVENT WaitEvent;
	/*00a4*/
};

struct _LPCP_PORT_QUEUE {
	/*0000*/ _LPCP_NONPAGED_PORT_QUEUE * NonPagedPortQueue;
	/*0004*/ _KSEMAPHORE * Semaphore;
	/*0008*/ _LIST_ENTRY ReceiveHead;
	/*0010*/
};

struct _LUID {
	/*0000*/ ULONG LowPart;
	/*0004*/ LONG HighPart;
	/*0008*/
};

struct _LUID_AND_ATTRIBUTES {
	/*0000*/ _LUID Luid;
	/*0008*/ ULONG Attributes;
	/*000c*/
};

struct _MAILSLOT_CREATE_PARAMETERS {
	/*0000*/ ULONG MailslotQuota;
	/*0004*/ ULONG MaximumMessageSize;
	/*0008*/ _LARGE_INTEGER ReadTimeout;
	/*0010*/ UCHAR TimeoutSpecified;
	/*0018*/
};

struct _MBCB {
	/*0000*/ SHORT NodeTypeCode;
	/*0002*/ SHORT NodeIsInZone;
	/*0004*/ ULONG PagesToWrite;
	/*0008*/ ULONG DirtyPages;
	/*000c*/ ULONG Reserved;
	/*0010*/ _LIST_ENTRY BitmapRanges;
	/*0018*/ LONGLONG ResumeWritePage;
	/*0020*/ _BITMAP_RANGE BitmapRange1;
	/*0040*/ _BITMAP_RANGE BitmapRange2;
	/*0060*/ _BITMAP_RANGE BitmapRange3;
	/*0080*/
};

struct _MDL {
	/*0000*/ _MDL * Next;
	/*0004*/ SHORT Size;
	/*0006*/ SHORT MdlFlags;
	/*0008*/ _EPROCESS * Process;
	/*000c*/ void * MappedSystemVa;
	/*0010*/ void * StartVa;
	/*0014*/ ULONG ByteCount;
	/*0018*/ ULONG ByteOffset;
	/*001c*/
};

enum _MEMORY_CACHING_TYPE {
	MmNonCached = 0x0,
	MmCached = 0x1,
	MmWriteCombined = 0x2,
	MmHardwareCoherentCached = 0x3,
	MmNonCachedUnordered = 0x4,
	MmUSWCCached = 0x5,
	MmMaximumCacheType = 0x6
};

enum _MEMORY_CACHING_TYPE_ORIG {
	MmFrameBufferCached = 0x2
};

enum _MEMORY_TYPE {
	MemoryExceptionBlock = 0x0,
	MemorySystemBlock = 0x1,
	MemoryFree = 0x2,
	MemoryBad = 0x3,
	MemoryLoadedProgram = 0x4,
	MemoryFirmwareTemporary = 0x5,
	MemoryFirmwarePermanent = 0x6,
	MemoryFreeContiguous = 0x7,
	MemorySpecialMemory = 0x8,
	MemoryMaximum = 0x9
};

enum _MI_PFN_CACHE_ATTRIBUTE {
	MiNonCached = 0x0,
	MiCached = 0x1,
	MiWriteCombined = 0x2,
	MiNotMapped = 0x3
};

struct _MI_VERIFIER_DRIVER_ENTRY {
	/*0000*/ _LIST_ENTRY Links;
	/*0008*/ ULONG Loads;
	/*000c*/ ULONG Unloads;
	/*0010*/ _UNICODE_STRING BaseName;
	/*0018*/ void * StartAddress;
	/*001c*/ void * EndAddress;
	/*0020*/ ULONG Flags;
	/*0024*/ ULONG Signature;
	/*0028*/ ULONG Reserved;
	/*002c*/ ULONG VerifierPoolLock;
	/*0030*/ _VI_POOL_ENTRY * PoolHash;
	/*0034*/ ULONG PoolHashSize;
	/*0038*/ ULONG PoolHashFree;
	/*003c*/ ULONG PoolHashReserved;
	/*0040*/ ULONG CurrentPagedPoolAllocations;
	/*0044*/ ULONG CurrentNonPagedPoolAllocations;
	/*0048*/ ULONG PeakPagedPoolAllocations;
	/*004c*/ ULONG PeakNonPagedPoolAllocations;
	/*0050*/ ULONG PagedBytes;
	/*0054*/ ULONG NonPagedBytes;
	/*0058*/ ULONG PeakPagedBytes;
	/*005c*/ ULONG PeakNonPagedBytes;
	/*0060*/
};

struct _MI_VERIFIER_POOL_HEADER {
	/*0000*/ ULONG ListIndex;
	/*0004*/ _MI_VERIFIER_DRIVER_ENTRY * Verifier;
	/*0008*/
};

struct _MMADDRESS_LIST {
	/*0000*/ ULONG StartVpn;
	/*0004*/ ULONG EndVpn;
	/*0008*/
};

struct _MMBANKED_SECTION {
	/*0000*/ ULONG BasePhysicalPage;
	/*0004*/ _MMPTE * BasedPte;
	/*0008*/ ULONG BankSize;
	/*000c*/ ULONG BankShift;
	/*0010*/ void (* BankedRoutine)( ULONG , ULONG , void * );
	/*0014*/ void * Context;
	/*0018*/ _MMPTE * CurrentMappedPte;
	/*0020*/ _MMPTE BankTemplate[0x1];
	/*0028*/
};

struct _MMCOLOR_TABLES {
	/*0000*/ ULONG Flink;
	/*0004*/ void * Blink;
	/*0008*/ ULONG Count;
	/*000c*/
};

struct _MMEXTEND_INFO {
	/*0000*/ ULONGLONG CommittedSize;
	/*0008*/ ULONG ReferenceCount;
	/*0010*/
};

struct _MMFREE_POOL_ENTRY {
	/*0000*/ _LIST_ENTRY List;
	/*0008*/ ULONG Size;
	/*000c*/ ULONG Signature;
	/*0010*/ _MMFREE_POOL_ENTRY * Owner;
	/*0014*/
};

enum _MMLISTS {
	ZeroedPageList = 0x0,
	FreePageList = 0x1,
	StandbyPageList = 0x2,
	ModifiedPageList = 0x3,
	ModifiedNoWritePageList = 0x4,
	BadPageList = 0x5,
	ActiveAndValid = 0x6,
	TransitionPage = 0x7
};

struct _MMMOD_WRITER_LISTHEAD {
	/*0000*/ _LIST_ENTRY ListHead;
	/*0008*/ _KEVENT Event;
	/*0018*/
};

struct _MMMOD_WRITER_MDL_ENTRY {
	/*0000*/ _LIST_ENTRY Links;
	/*0008*/ _LARGE_INTEGER WriteOffset;
	union {
		/*0010*/ _IO_STATUS_BLOCK IoStatus;
		/*0010*/ _LARGE_INTEGER LastByte;
		/*0018*/
	} u;
	/*0018*/ _IRP * Irp;
	/*001c*/ ULONG LastPageToWrite;
	/*0020*/ _MMMOD_WRITER_LISTHEAD * PagingListHead;
	/*0024*/ _LIST_ENTRY * CurrentList;
	/*0028*/ _MMPAGING_FILE * PagingFile;
	/*002c*/ _FILE_OBJECT * File;
	/*0030*/ _CONTROL_AREA * ControlArea;
	/*0034*/ _ERESOURCE * FileResource;
	/*0038*/ _MDL Mdl;
	/*0054*/ ULONG Page[0x1];
	/*0058*/
};

struct _MMPAGING_FILE {
	/*0000*/ ULONG Size;
	/*0004*/ ULONG MaximumSize;
	/*0008*/ ULONG MinimumSize;
	/*000c*/ ULONG FreeSpace;
	/*0010*/ ULONG CurrentUsage;
	/*0014*/ ULONG PeakUsage;
	/*0018*/ ULONG Hint;
	/*001c*/ ULONG HighestPage;
	/*0020*/ _MMMOD_WRITER_MDL_ENTRY * Entry[0x2];
	/*0028*/ _RTL_BITMAP * Bitmap;
	/*002c*/ _FILE_OBJECT * File;
	/*0030*/ _UNICODE_STRING PageFileName;
	/*0038*/ ULONG PageFileNumber;
	/*003c*/ UCHAR Extended;
	/*003d*/ UCHAR HintSetToZero;
	/*003e*/ UCHAR BootPartition;
	/*0040*/ void * FileHandle;
	/*0044*/
};

struct _MMPFN {
	union {
		/*0000*/ ULONG Flink;
		/*0000*/ ULONG WsIndex;
		/*0000*/ _KEVENT * Event;
		/*0000*/ LONG ReadStatus;
		/*0000*/ _SINGLE_LIST_ENTRY NextStackPfn;
		/*0004*/
	} u1;
	/*0004*/ _MMPTE * PteAddress;
	union {
		/*0008*/ ULONG Blink;
		/*0008*/ ULONG ShareCount;
		/*000c*/
	} u2;
	union {
		/*000c*/ _MMPFNENTRY e1;
		struct {
			/*000c*/ USHORT ShortFlags;
			/*000e*/ USHORT ReferenceCount;
			/*0010*/
		} e2;
		/*0010*/
	} u3;
	/*0010*/ _MMPTE OriginalPte;
	union {
		/*0018*/ ULONG EntireFrame;
		/*0018*/ ULONG PteFrame : 26; // 0x03ffffff;
		/*0018*/ ULONG InPageError : 01; // 0x04000000;
		/*0018*/ ULONG VerifierAllocation : 01; // 0x08000000;
		/*0018*/ ULONG AweAllocation : 01; // 0x10000000;
		/*0018*/ ULONG LockCharged : 01; // 0x20000000;
		/*0018*/ ULONG KernelStack : 01; // 0x40000000;
		/*0018*/ ULONG Reserved : 01; // 0x80000000;
		/*001c*/
	} u4;
	/*001c*/
};

struct _MMPFNENTRY {
	/*0000*/ ULONG Modified : 01; // 0x00000001;
	/*0000*/ ULONG ReadInProgress : 01; // 0x00000002;
	/*0000*/ ULONG WriteInProgress : 01; // 0x00000004;
	/*0000*/ ULONG PrototypePte : 01; // 0x00000008;
	/*0000*/ ULONG PageColor : 03; // 0x00000070;
	/*0000*/ ULONG ParityError : 01; // 0x00000080;
	/*0000*/ ULONG PageLocation : 03; // 0x00000700;
	/*0000*/ ULONG RemovalRequested : 01; // 0x00000800;
	/*0000*/ ULONG CacheAttribute : 02; // 0x00003000;
	/*0000*/ ULONG Rom : 01; // 0x00004000;
	/*0000*/ ULONG LockCharged : 01; // 0x00008000;
	/*0000*/ ULONG DontUse : 16; // 0xffff0000;
	/*0004*/
};

struct _MMPFNLIST {
	/*0000*/ ULONG Total;
	/*0004*/ _MMLISTS ListName;
	/*0008*/ ULONG Flink;
	/*000c*/ ULONG Blink;
	/*0010*/
};

struct _MMPTE {
	union {
		/*0000*/ ULONGLONG Long;
		/*0000*/ _MMPTE_HIGHLOW HighLow;
		/*0000*/ _MMPTE_HARDWARE Hard;
		/*0000*/ _HARDWARE_PTE Flush;
		/*0000*/ _MMPTE_PROTOTYPE Proto;
		/*0000*/ _MMPTE_SOFTWARE Soft;
		/*0000*/ _MMPTE_TRANSITION Trans;
		/*0000*/ _MMPTE_SUBSECTION Subsect;
		/*0000*/ _MMPTE_LIST List;
		/*0008*/
	} u;
	/*0008*/
};

struct _MMPTE_HARDWARE {
	/*0000*/ ULONGLONG Valid : 01; // 0x0000000000000001;
	/*0000*/ ULONGLONG Writable : 01; // 0x0000000000000002;
	/*0000*/ ULONGLONG Owner : 01; // 0x0000000000000004;
	/*0000*/ ULONGLONG WriteThrough : 01; // 0x0000000000000008;
	/*0000*/ ULONGLONG CacheDisable : 01; // 0x0000000000000010;
	/*0000*/ ULONGLONG Accessed : 01; // 0x0000000000000020;
	/*0000*/ ULONGLONG Dirty : 01; // 0x0000000000000040;
	/*0000*/ ULONGLONG LargePage : 01; // 0x0000000000000080;
	/*0000*/ ULONGLONG Global : 01; // 0x0000000000000100;
	/*0000*/ ULONGLONG CopyOnWrite : 01; // 0x0000000000000200;
	/*0000*/ ULONGLONG Prototype : 01; // 0x0000000000000400;
	/*0000*/ ULONGLONG Write : 01; // 0x0000000000000800;
	/*0000*/ ULONGLONG PageFrameNumber : 26; // 0x0000003ffffff000;
	/*0000*/ ULONGLONG reserved1 : 26; // 0xffffffc000000000;
	/*0008*/
};

struct _MMPTE_HIGHLOW {
	/*0000*/ ULONG LowPart;
	/*0004*/ ULONG HighPart;
	/*0008*/
};

struct _MMPTE_LIST {
	/*0000*/ ULONGLONG Valid : 01; // 0x0000000000000001;
	/*0000*/ ULONGLONG OneEntry : 01; // 0x0000000000000002;
	/*0000*/ ULONGLONG filler0 : 08; // 0x00000000000003fc;
	/*0000*/ ULONGLONG Prototype : 01; // 0x0000000000000400;
	/*0000*/ ULONGLONG filler1 : 21; // 0x00000000fffff800;
	/*0000*/ ULONGLONG NextEntry : 32; // 0xffffffff00000000;
	/*0008*/
};

struct _MMPTE_PROTOTYPE {
	/*0000*/ ULONGLONG Valid : 01; // 0x0000000000000001;
	/*0000*/ ULONGLONG Unused0 : 07; // 0x00000000000000fe;
	/*0000*/ ULONGLONG ReadOnly : 01; // 0x0000000000000100;
	/*0000*/ ULONGLONG Unused1 : 01; // 0x0000000000000200;
	/*0000*/ ULONGLONG Prototype : 01; // 0x0000000000000400;
	/*0000*/ ULONGLONG Protection : 05; // 0x000000000000f800;
	/*0000*/ ULONGLONG Unused : 16; // 0x00000000ffff0000;
	/*0000*/ ULONGLONG ProtoAddress : 32; // 0xffffffff00000000;
	/*0008*/
};

struct _MMPTE_SOFTWARE {
	/*0000*/ ULONGLONG Valid : 01; // 0x0000000000000001;
	/*0000*/ ULONGLONG PageFileLow : 04; // 0x000000000000001e;
	/*0000*/ ULONGLONG Protection : 05; // 0x00000000000003e0;
	/*0000*/ ULONGLONG Prototype : 01; // 0x0000000000000400;
	/*0000*/ ULONGLONG Transition : 01; // 0x0000000000000800;
	/*0000*/ ULONGLONG Unused : 20; // 0x00000000fffff000;
	/*0000*/ ULONGLONG PageFileHigh : 32; // 0xffffffff00000000;
	/*0008*/
};

struct _MMPTE_SUBSECTION {
	/*0000*/ ULONGLONG Valid : 01; // 0x0000000000000001;
	/*0000*/ ULONGLONG Unused0 : 04; // 0x000000000000001e;
	/*0000*/ ULONGLONG Protection : 05; // 0x00000000000003e0;
	/*0000*/ ULONGLONG Prototype : 01; // 0x0000000000000400;
	/*0000*/ ULONGLONG Unused1 : 21; // 0x00000000fffff800;
	/*0000*/ ULONGLONG SubsectionAddress : 32; // 0xffffffff00000000;
	/*0008*/
};

struct _MMPTE_TRANSITION {
	/*0000*/ ULONGLONG Valid : 01; // 0x0000000000000001;
	/*0000*/ ULONGLONG Write : 01; // 0x0000000000000002;
	/*0000*/ ULONGLONG Owner : 01; // 0x0000000000000004;
	/*0000*/ ULONGLONG WriteThrough : 01; // 0x0000000000000008;
	/*0000*/ ULONGLONG CacheDisable : 01; // 0x0000000000000010;
	/*0000*/ ULONGLONG Protection : 05; // 0x00000000000003e0;
	/*0000*/ ULONGLONG Prototype : 01; // 0x0000000000000400;
	/*0000*/ ULONGLONG Transition : 01; // 0x0000000000000800;
	/*0000*/ ULONGLONG PageFrameNumber : 26; // 0x0000003ffffff000;
	/*0000*/ ULONGLONG Unused : 26; // 0xffffffc000000000;
	/*0008*/
};

struct _MMSECTION_FLAGS {
	/*0000*/ UINT BeingDeleted : 01; // 0x00000001;
	/*0000*/ UINT BeingCreated : 01; // 0x00000002;
	/*0000*/ UINT BeingPurged : 01; // 0x00000004;
	/*0000*/ UINT NoModifiedWriting : 01; // 0x00000008;
	/*0000*/ UINT FailAllIo : 01; // 0x00000010;
	/*0000*/ UINT Image : 01; // 0x00000020;
	/*0000*/ UINT Based : 01; // 0x00000040;
	/*0000*/ UINT File : 01; // 0x00000080;
	/*0000*/ UINT Networked : 01; // 0x00000100;
	/*0000*/ UINT NoCache : 01; // 0x00000200;
	/*0000*/ UINT PhysicalMemory : 01; // 0x00000400;
	/*0000*/ UINT CopyOnWrite : 01; // 0x00000800;
	/*0000*/ UINT Reserve : 01; // 0x00001000;
	/*0000*/ UINT Commit : 01; // 0x00002000;
	/*0000*/ UINT FloppyMedia : 01; // 0x00004000;
	/*0000*/ UINT WasPurged : 01; // 0x00008000;
	/*0000*/ UINT UserReference : 01; // 0x00010000;
	/*0000*/ UINT GlobalMemory : 01; // 0x00020000;
	/*0000*/ UINT DeleteOnClose : 01; // 0x00040000;
	/*0000*/ UINT FilePointerNull : 01; // 0x00080000;
	/*0000*/ UINT DebugSymbolsLoaded : 01; // 0x00100000;
	/*0000*/ UINT SetMappedFileIoComplete : 01; // 0x00200000;
	/*0000*/ UINT CollidedFlush : 01; // 0x00400000;
	/*0000*/ UINT NoChange : 01; // 0x00800000;
	/*0000*/ UINT HadUserReference : 01; // 0x01000000;
	/*0000*/ UINT ImageMappedInSystemSpace : 01; // 0x02000000;
	/*0000*/ UINT UserWritable : 01; // 0x04000000;
	/*0000*/ UINT Accessed : 01; // 0x08000000;
	/*0000*/ UINT GlobalOnlyPerSession : 01; // 0x10000000;
	/*0000*/ UINT Rom : 01; // 0x20000000;
	/*0000*/ UINT filler : 02; // 0xc0000000;
	/*0004*/
};

struct _MMSESSION {
	/*0000*/ _FAST_MUTEX SystemSpaceViewLock;
	/*0020*/ _FAST_MUTEX * SystemSpaceViewLockPointer;
	/*0024*/ CHAR * SystemSpaceViewStart;
	/*0028*/ _MMVIEW * SystemSpaceViewTable;
	/*002c*/ ULONG SystemSpaceHashSize;
	/*0030*/ ULONG SystemSpaceHashEntries;
	/*0034*/ ULONG SystemSpaceHashKey;
	/*0038*/ _RTL_BITMAP * SystemSpaceBitMap;
	/*003c*/
};

struct _MMSUBSECTION_FLAGS {
	/*0000*/ UINT ReadOnly : 01; // 0x00000001;
	/*0000*/ UINT ReadWrite : 01; // 0x00000002;
	/*0000*/ UINT SubsectionStatic : 01; // 0x00000004;
	/*0000*/ UINT GlobalMemory : 01; // 0x00000008;
	/*0000*/ UINT Protection : 05; // 0x000001f0;
	/*0000*/ UINT LargePages : 01; // 0x00000200;
	/*0000*/ UINT StartingSector4132 : 10; // 0x000ffc00;
	/*0000*/ UINT SectorEndOffset : 12; // 0xfff00000;
	/*0004*/
};

struct _MMSUPPORT {
	/*0000*/ _LARGE_INTEGER LastTrimTime;
	/*0008*/ _MMSUPPORT_FLAGS Flags;
	/*000c*/ ULONG PageFaultCount;
	/*0010*/ ULONG PeakWorkingSetSize;
	/*0014*/ ULONG WorkingSetSize;
	/*0018*/ ULONG MinimumWorkingSetSize;
	/*001c*/ ULONG MaximumWorkingSetSize;
	/*0020*/ _MMWSL * VmWorkingSetList;
	/*0024*/ _LIST_ENTRY WorkingSetExpansionLinks;
	/*002c*/ ULONG Claim;
	/*0030*/ ULONG NextEstimationSlot;
	/*0034*/ ULONG NextAgingSlot;
	/*0038*/ ULONG EstimatedAvailable;
	/*003c*/ ULONG GrowthSinceLastEstimate;
	/*0040*/
};

struct _MMSUPPORT_FLAGS {
	/*0000*/ UINT SessionSpace : 01; // 0x00000001;
	/*0000*/ UINT BeingTrimmed : 01; // 0x00000002;
	/*0000*/ UINT SessionLeader : 01; // 0x00000004;
	/*0000*/ UINT TrimHard : 01; // 0x00000008;
	/*0000*/ UINT WorkingSetHard : 01; // 0x00000010;
	/*0000*/ UINT AddressSpaceBeingDeleted : 01; // 0x00000020;
	/*0000*/ UINT Available : 10; // 0x0000ffc0;
	/*0000*/ UINT AllowWorkingSetAdjustment : 08; // 0x00ff0000;
	/*0000*/ UINT MemoryPriority : 08; // 0xff000000;
	/*0004*/
};

enum _MMSYSTEM_PTE_POOL_TYPE {
	SystemPteSpace = 0x0,
	NonPagedPoolExpansion = 0x1,
	MaximumPtePoolTypes = 0x2
};

struct _MMVAD {
	/*0000*/ ULONG StartingVpn;
	/*0004*/ ULONG EndingVpn;
	/*0008*/ _MMVAD * Parent;
	/*000c*/ _MMVAD * LeftChild;
	/*0010*/ _MMVAD * RightChild;
	union {
		/*0014*/ ULONG LongFlags;
		/*0014*/ _MMVAD_FLAGS VadFlags;
		/*0018*/
	} u;
	/*0018*/ _CONTROL_AREA * ControlArea;
	/*001c*/ _MMPTE * FirstPrototypePte;
	/*0020*/ _MMPTE * LastContiguousPte;
	union {
		/*0024*/ ULONG LongFlags2;
		/*0024*/ _MMVAD_FLAGS2 VadFlags2;
		/*0028*/
	} u2;
	/*0028*/
};

struct _MMVAD_FLAGS {
	/*0000*/ ULONG CommitCharge : 19; // 0x0007ffff;
	/*0000*/ ULONG PhysicalMapping : 01; // 0x00080000;
	/*0000*/ ULONG ImageMap : 01; // 0x00100000;
	/*0000*/ ULONG UserPhysicalPages : 01; // 0x00200000;
	/*0000*/ ULONG NoChange : 01; // 0x00400000;
	/*0000*/ ULONG WriteWatch : 01; // 0x00800000;
	/*0000*/ ULONG Protection : 05; // 0x1f000000;
	/*0000*/ ULONG LargePages : 01; // 0x20000000;
	/*0000*/ ULONG MemCommit : 01; // 0x40000000;
	/*0000*/ ULONG PrivateMemory : 01; // 0x80000000;
	/*0004*/
};

struct _MMVAD_FLAGS2 {
	/*0000*/ UINT FileOffset : 24; // 0x00ffffff;
	/*0000*/ UINT SecNoChange : 01; // 0x01000000;
	/*0000*/ UINT OneSecured : 01; // 0x02000000;
	/*0000*/ UINT MultipleSecured : 01; // 0x04000000;
	/*0000*/ UINT ReadOnly : 01; // 0x08000000;
	/*0000*/ UINT LongVad : 01; // 0x10000000;
	/*0000*/ UINT ExtendableFile : 01; // 0x20000000;
	/*0000*/ UINT Inherit : 01; // 0x40000000;
	/*0000*/ UINT CopyOnWrite : 01; // 0x80000000;
	/*0004*/
};

struct _MMVAD_LONG {
	/*0000*/ ULONG StartingVpn;
	/*0004*/ ULONG EndingVpn;
	/*0008*/ _MMVAD * Parent;
	/*000c*/ _MMVAD * LeftChild;
	/*0010*/ _MMVAD * RightChild;
	union {
		/*0014*/ ULONG LongFlags;
		/*0014*/ _MMVAD_FLAGS VadFlags;
		/*0018*/
	} u;
	/*0018*/ _CONTROL_AREA * ControlArea;
	/*001c*/ _MMPTE * FirstPrototypePte;
	/*0020*/ _MMPTE * LastContiguousPte;
	union {
		/*0024*/ ULONG LongFlags2;
		/*0024*/ _MMVAD_FLAGS2 VadFlags2;
		/*0028*/
	} u2;
	union {
		/*0028*/ _LIST_ENTRY List;
		/*0028*/ _MMADDRESS_LIST Secured;
		/*0030*/
	} u3;
	union {
		/*0030*/ _MMBANKED_SECTION * Banked;
		/*0030*/ _MMEXTEND_INFO * ExtendedInfo;
		/*0034*/
	} u4;
	/*0034*/
};

struct _MMVAD_SHORT {
	/*0000*/ ULONG StartingVpn;
	/*0004*/ ULONG EndingVpn;
	/*0008*/ _MMVAD * Parent;
	/*000c*/ _MMVAD * LeftChild;
	/*0010*/ _MMVAD * RightChild;
	union {
		/*0014*/ ULONG LongFlags;
		/*0014*/ _MMVAD_FLAGS VadFlags;
		/*0018*/
	} u;
	/*0018*/
};

struct _MMVIEW {
	/*0000*/ ULONG Entry;
	/*0004*/ _CONTROL_AREA * ControlArea;
	/*0008*/
};

struct _MMWSL {
	/*0000*/ ULONG Quota;
	/*0004*/ ULONG FirstFree;
	/*0008*/ ULONG FirstDynamic;
	/*000c*/ ULONG LastEntry;
	/*0010*/ ULONG NextSlot;
	/*0014*/ _MMWSLE * Wsle;
	/*0018*/ ULONG LastInitializedWsle;
	/*001c*/ ULONG NonDirectCount;
	/*0020*/ _MMWSLE_HASH * HashTable;
	/*0024*/ ULONG HashTableSize;
	/*0028*/ ULONG NumberOfCommittedPageTables;
	/*002c*/ void * HashTableStart;
	/*0030*/ void * HighestPermittedHashAddress;
	/*0034*/ ULONG NumberOfImageWaiters;
	/*0038*/ ULONG VadBitMapHint;
	/*003c*/ USHORT UsedPageTableEntries[0x600];
	/*0c3c*/ ULONG CommittedPageTables[0x30];
	/*0cfc*/
};

struct _MMWSLE {
	union {
		/*0000*/ void * VirtualAddress;
		/*0000*/ ULONG Long;
		/*0000*/ _MMWSLENTRY e1;
		/*0004*/
	} u1;
	/*0004*/
};

struct _MMWSLENTRY {
	/*0000*/ ULONG Valid : 01; // 0x00000001;
	/*0000*/ ULONG LockedInWs : 01; // 0x00000002;
	/*0000*/ ULONG LockedInMemory : 01; // 0x00000004;
	/*0000*/ ULONG Protection : 05; // 0x000000f8;
	/*0000*/ ULONG Hashed : 01; // 0x00000100;
	/*0000*/ ULONG Direct : 01; // 0x00000200;
	/*0000*/ ULONG Age : 02; // 0x00000c00;
	/*0000*/ ULONG VirtualPageNumber : 20; // 0xfffff000;
	/*0004*/
};

struct _MMWSLE_HASH {
	/*0000*/ void * Key;
	/*0004*/ ULONG Index;
	/*0008*/
};

struct _MM_DRIVER_VERIFIER_DATA {
	/*0000*/ ULONG Level;
	/*0004*/ ULONG RaiseIrqls;
	/*0008*/ ULONG AcquireSpinLocks;
	/*000c*/ ULONG SynchronizeExecutions;
	/*0010*/ ULONG AllocationsAttempted;
	/*0014*/ ULONG AllocationsSucceeded;
	/*0018*/ ULONG AllocationsSucceededSpecialPool;
	/*001c*/ ULONG AllocationsWithNoTag;
	/*0020*/ ULONG TrimRequests;
	/*0024*/ ULONG Trims;
	/*0028*/ ULONG AllocationsFailed;
	/*002c*/ ULONG AllocationsFailedDeliberately;
	/*0030*/ ULONG Loads;
	/*0034*/ ULONG Unloads;
	/*0038*/ ULONG UnTrackedPool;
	/*003c*/ ULONG UserTrims;
	/*0040*/ ULONG CurrentPagedPoolAllocations;
	/*0044*/ ULONG CurrentNonPagedPoolAllocations;
	/*0048*/ ULONG PeakPagedPoolAllocations;
	/*004c*/ ULONG PeakNonPagedPoolAllocations;
	/*0050*/ ULONG PagedBytes;
	/*0054*/ ULONG NonPagedBytes;
	/*0058*/ ULONG PeakPagedBytes;
	/*005c*/ ULONG PeakNonPagedBytes;
	/*0060*/ ULONG BurstAllocationsFailedDeliberately;
	/*0064*/ ULONG SessionTrims;
	/*0068*/ ULONG Reserved[0x2];
	/*0070*/
};

struct _MM_PAGED_POOL_INFO {
	/*0000*/ _RTL_BITMAP * PagedPoolAllocationMap;
	/*0004*/ _RTL_BITMAP * EndOfPagedPoolBitmap;
	/*0008*/ _RTL_BITMAP * PagedPoolLargeSessionAllocationMap;
	/*000c*/ _MMPTE * FirstPteForPagedPool;
	/*0010*/ _MMPTE * LastPteForPagedPool;
	/*0014*/ _MMPTE * NextPdeForPagedPoolExpansion;
	/*0018*/ ULONG PagedPoolHint;
	/*001c*/ ULONG PagedPoolCommit;
	/*0020*/ ULONG AllocatedPagedPool;
	/*0024*/
};

struct _MM_SESSION_SPACE {
	/*0000*/ ULONG ReferenceCount;
	union {
		/*0004*/ ULONG LongFlags;
		/*0004*/ _MM_SESSION_SPACE_FLAGS Flags;
		/*0008*/
	} u;
	/*0008*/ ULONG SessionId;
	/*000c*/ ULONG SessionPageDirectoryIndex;
	/*0010*/ _MM_SESSION_SPACE * GlobalVirtualAddress;
	/*0014*/ _LIST_ENTRY ProcessList;
	/*001c*/ ULONG NonPagedPoolBytes;
	/*0020*/ ULONG PagedPoolBytes;
	/*0024*/ ULONG NonPagedPoolAllocations;
	/*0028*/ ULONG PagedPoolAllocations;
	/*002c*/ ULONG NonPagablePages;
	/*0030*/ ULONG CommittedPages;
	/*0038*/ _LARGE_INTEGER LastProcessSwappedOutTime;
	/*0040*/ _MMPTE * PageTables;
	/*0044*/ _FAST_MUTEX PagedPoolMutex;
	/*0064*/ void * PagedPoolStart;
	/*0068*/ void * PagedPoolEnd;
	/*006c*/ _MMPTE * PagedPoolBasePde;
	/*0070*/ _MM_PAGED_POOL_INFO PagedPoolInfo;
	/*0094*/ ULONG Color;
	/*0098*/ ULONG ProcessOutSwapCount;
	/*009c*/ _LIST_ENTRY ImageList;
	/*00a4*/ _MMPTE * GlobalPteEntry;
	/*00a8*/ ULONG CopyOnWriteCount;
	/*00ac*/ ULONG SessionPoolAllocationFailures[0x4];
	/*00bc*/ ULONG AttachCount;
	/*00c0*/ _KEVENT AttachEvent;
	/*00d0*/ _EPROCESS * LastProcess;
	/*00d8*/ _MMSUPPORT Vm;
	/*0118*/ _MMWSLE * Wsle;
	/*011c*/ _ERESOURCE WsLock;
	/*0154*/ _LIST_ENTRY WsListEntry;
	/*015c*/ _MMSESSION Session;
	/*0198*/ _DRIVER_OBJECT Win32KDriverObject;
	/*0240*/ _ETHREAD * WorkingSetLockOwner;
	/*0244*/ _POOL_DESCRIPTOR PagedPool;
	/*126c*/ LONG ProcessReferenceToSession;
	/*1270*/ ULONG LocaleId;
	/*1278*/
};

struct _MM_SESSION_SPACE_FLAGS {
	/*0000*/ ULONG Initialized : 01; // 0x00000001;
	/*0000*/ ULONG Filler0 : 03; // 0x0000000e;
	/*0000*/ ULONG HasWsLock : 01; // 0x00000010;
	/*0000*/ ULONG DeletePending : 01; // 0x00000020;
	/*0000*/ ULONG Filler : 26; // 0xffffffc0;
	/*0004*/
};

enum _MODE {
	KernelMode = 0x0,
	UserMode = 0x1,
	MaximumMode = 0x2
};

struct _NAMED_PIPE_CREATE_PARAMETERS {
	/*0000*/ ULONG NamedPipeType;
	/*0004*/ ULONG ReadMode;
	/*0008*/ ULONG CompletionMode;
	/*000c*/ ULONG MaximumInstances;
	/*0010*/ ULONG InboundQuota;
	/*0014*/ ULONG OutboundQuota;
	/*0018*/ _LARGE_INTEGER DefaultTimeout;
	/*0020*/ UCHAR TimeoutSpecified;
	/*0028*/
};

struct _NPAGED_LOOKASIDE_LIST {
	/*0000*/ _GENERAL_LOOKASIDE L;
	/*0080*/ ULONG Lock__ObsoleteButDoNotDelete;
	/*0100*/
};

enum _NT_PRODUCT_TYPE {
	NtProductWinNt = 0x1,
	NtProductLanManNt = 0x2,
	NtProductServer = 0x3
};

struct _NT_TIB {
	/*0000*/ _EXCEPTION_REGISTRATION_RECORD * ExceptionList;
	/*0004*/ void * StackBase;
	/*0008*/ void * StackLimit;
	/*000c*/ void * SubSystemTib;
	/*0010*/ void * FiberData;
	/*0010*/ ULONG Version;
	/*0014*/ void * ArbitraryUserPointer;
	/*0018*/ _NT_TIB * Self;
	/*001c*/
};

struct _OBJECT_ATTRIBUTES {
	/*0000*/ ULONG Length;
	/*0004*/ void * RootDirectory;
	/*0008*/ _UNICODE_STRING * ObjectName;
	/*000c*/ ULONG Attributes;
	/*0010*/ void * SecurityDescriptor;
	/*0014*/ void * SecurityQualityOfService;
	/*0018*/
};

struct _OBJECT_CREATE_INFORMATION {
	/*0000*/ ULONG Attributes;
	/*0004*/ void * RootDirectory;
	/*0008*/ void * ParseContext;
	/*000c*/ CHAR ProbeMode;
	/*0010*/ ULONG PagedPoolCharge;
	/*0014*/ ULONG NonPagedPoolCharge;
	/*0018*/ ULONG SecurityDescriptorCharge;
	/*001c*/ void * SecurityDescriptor;
	/*0020*/ _SECURITY_QUALITY_OF_SERVICE * SecurityQos;
	/*0024*/ _SECURITY_QUALITY_OF_SERVICE SecurityQualityOfService;
	/*0030*/
};

struct _OBJECT_DIRECTORY {
	/*0000*/ _OBJECT_DIRECTORY_ENTRY * HashBuckets[0x25];
	/*0094*/ _EX_PUSH_LOCK Lock;
	/*0098*/ _DEVICE_MAP * DeviceMap;
	/*009c*/ ULONG SessionId;
	/*00a0*/ USHORT Reserved;
	/*00a2*/ USHORT SymbolicLinkUsageCount;
	/*00a4*/
};

struct _OBJECT_DIRECTORY_ENTRY {
	/*0000*/ _OBJECT_DIRECTORY_ENTRY * ChainLink;
	/*0004*/ void * Object;
	/*0008*/
};

struct _OBJECT_DUMP_CONTROL {
	/*0000*/ void * Stream;
	/*0004*/ ULONG Detail;
	/*0008*/
};

struct _OBJECT_HANDLE_INFORMATION {
	/*0000*/ ULONG HandleAttributes;
	/*0004*/ ULONG GrantedAccess;
	/*0008*/
};

struct _OBJECT_HEADER {
	/*0000*/ LONG PointerCount;
	/*0004*/ LONG HandleCount;
	/*0004*/ void * NextToFree;
	/*0008*/ _OBJECT_TYPE * Type;
	/*000c*/ UCHAR NameInfoOffset;
	/*000d*/ UCHAR HandleInfoOffset;
	/*000e*/ UCHAR QuotaInfoOffset;
	/*000f*/ UCHAR Flags;
	/*0010*/ _OBJECT_CREATE_INFORMATION * ObjectCreateInfo;
	/*0010*/ void * QuotaBlockCharged;
	/*0014*/ void * SecurityDescriptor;
	/*0018*/ _QUAD Body;
	/*0020*/
};

struct _OBJECT_HEADER_CREATOR_INFO {
	/*0000*/ _LIST_ENTRY TypeList;
	/*0008*/ void * CreatorUniqueProcess;
	/*000c*/ USHORT CreatorBackTraceIndex;
	/*000e*/ USHORT Reserved;
	/*0010*/
};

struct _OBJECT_HEADER_NAME_INFO {
	/*0000*/ _OBJECT_DIRECTORY * Directory;
	/*0004*/ _UNICODE_STRING Name;
	/*000c*/ ULONG QueryReferences;
	/*0010*/
};

struct _OBJECT_NAME_INFORMATION {
	/*0000*/ _UNICODE_STRING Name;
	/*0008*/
};

struct _OBJECT_SYMBOLIC_LINK {
	/*0000*/ _LARGE_INTEGER CreationTime;
	/*0008*/ _UNICODE_STRING LinkTarget;
	/*0010*/ _UNICODE_STRING LinkTargetRemaining;
	/*0018*/ void * LinkTargetObject;
	/*001c*/ ULONG DosDeviceDriveIndex;
	/*0020*/
};

struct _OBJECT_TYPE {
	/*0000*/ _ERESOURCE Mutex;
	/*0038*/ _LIST_ENTRY TypeList;
	/*0040*/ _UNICODE_STRING Name;
	/*0048*/ void * DefaultObject;
	/*004c*/ ULONG Index;
	/*0050*/ ULONG TotalNumberOfObjects;
	/*0054*/ ULONG TotalNumberOfHandles;
	/*0058*/ ULONG HighWaterNumberOfObjects;
	/*005c*/ ULONG HighWaterNumberOfHandles;
	/*0060*/ _OBJECT_TYPE_INITIALIZER TypeInfo;
	/*00ac*/ ULONG Key;
	/*00b0*/ _ERESOURCE ObjectLocks[0x4];
	/*0190*/
};

struct _OBJECT_TYPE_INITIALIZER {
	/*0000*/ USHORT Length;
	/*0002*/ UCHAR UseDefaultObject;
	/*0003*/ UCHAR CaseInsensitive;
	/*0004*/ ULONG InvalidAttributes;
	/*0008*/ _GENERIC_MAPPING GenericMapping;
	/*0018*/ ULONG ValidAccessMask;
	/*001c*/ UCHAR SecurityRequired;
	/*001d*/ UCHAR MaintainHandleCount;
	/*001e*/ UCHAR MaintainTypeList;
	/*0020*/ _POOL_TYPE PoolType;
	/*0024*/ ULONG DefaultPagedPoolCharge;
	/*0028*/ ULONG DefaultNonPagedPoolCharge;
	/*002c*/ void (* DumpProcedure)( void * , _OBJECT_DUMP_CONTROL * );
	/*0030*/ LONG (* OpenProcedure)( _OB_OPEN_REASON , _EPROCESS * , void * , ULONG , ULONG );
	/*0034*/ void (* CloseProcedure)( _EPROCESS * , void * , ULONG , ULONG , ULONG );
	/*0038*/ void (* DeleteProcedure)( void * );
	/*003c*/ LONG (* ParseProcedure)( void * , void * , _ACCESS_STATE * , CHAR , ULONG , _UNICODE_STRING * , _UNICODE_STRING * , void * , _SECURITY_QUALITY_OF_SERVICE * , void * * );
	/*0040*/ LONG (* SecurityProcedure)( void * , _SECURITY_OPERATION_CODE , ULONG * , void * , ULONG * , void * * , _POOL_TYPE , _GENERIC_MAPPING * , CHAR );
	/*0044*/ LONG (* QueryNameProcedure)( void * , UCHAR , _OBJECT_NAME_INFORMATION * , ULONG , ULONG * );
	/*0048*/ UCHAR (* OkayToCloseProcedure)( _EPROCESS * , void * , void * , CHAR );
	/*004c*/
};

enum _OB_OPEN_REASON {
	ObCreateHandle = 0x0,
	ObOpenHandle = 0x1,
	ObDuplicateHandle = 0x2,
	ObInheritHandle = 0x3,
	ObMaxOpenReason = 0x4
};

struct _OWNER_ENTRY {
	/*0000*/ ULONG OwnerThread;
	/*0004*/ LONG OwnerCount;
	/*0004*/ ULONG TableSize;
	/*0008*/
};

struct _PAGED_LOOKASIDE_LIST {
	/*0000*/ _GENERAL_LOOKASIDE L;
	/*0080*/ _FAST_MUTEX Lock__ObsoleteButDoNotDelete;
	/*0100*/
};

struct _PAGEFAULT_HISTORY {
	/*0000*/ ULONG CurrentIndex;
	/*0004*/ ULONG MaxIndex;
	/*0008*/ ULONG SpinLock;
	/*000c*/ void * Reserved;
	/*0010*/ _PROCESS_WS_WATCH_INFORMATION WatchInfo[0x1];
	/*0018*/
};

struct _PCI_ARBITER_INSTANCE {
	/*0000*/ PCI_SECONDARY_EXTENSION Header;
	/*000c*/ _PCI_INTERFACE * Interface;
	/*0010*/ _PCI_FDO_EXTENSION * BusFdoExtension;
	/*0014*/ USHORT InstanceName[0x18];
	/*0044*/ _ARBITER_INSTANCE CommonInstance;
	/*00e0*/
};

struct _PCI_BUS_INTERFACE_STANDARD {
	/*0000*/ USHORT Size;
	/*0002*/ USHORT Version;
	/*0004*/ void * Context;
	/*0008*/ void (* InterfaceReference)( void * );
	/*000c*/ void (* InterfaceDereference)( void * );
	/*0010*/ ULONG (* ReadConfig)( void * , UCHAR , ULONG , void * , ULONG , ULONG );
	/*0014*/ ULONG (* WriteConfig)( void * , UCHAR , ULONG , void * , ULONG , ULONG );
	/*0018*/ void (* PinToLine)( void * , _PCI_COMMON_CONFIG * );
	/*001c*/ void (* LineToPin)( void * , _PCI_COMMON_CONFIG * , _PCI_COMMON_CONFIG * );
	/*0020*/
};

struct _PCI_COMMON_CONFIG {
	/*0000*/ USHORT VendorID;
	/*0002*/ USHORT DeviceID;
	/*0004*/ USHORT Command;
	/*0006*/ USHORT Status;
	/*0008*/ UCHAR RevisionID;
	/*0009*/ UCHAR ProgIf;
	/*000a*/ UCHAR SubClass;
	/*000b*/ UCHAR BaseClass;
	/*000c*/ UCHAR CacheLineSize;
	/*000d*/ UCHAR LatencyTimer;
	/*000e*/ UCHAR HeaderType;
	/*000f*/ UCHAR BIST;
	union {
		/*0010*/ _PCI_HEADER_TYPE_0 type0;
		/*0010*/ _PCI_HEADER_TYPE_1 type1;
		/*0010*/ _PCI_HEADER_TYPE_2 type2;
		/*0040*/
	} u;
	/*0040*/ UCHAR DeviceSpecific[0xc0];
	/*0100*/
};

struct _PCI_COMMON_EXTENSION {
	/*0000*/ void * Next;
	/*0004*/ PCI_SIGNATURE ExtensionType;
	/*0008*/ _PCI_MJ_DISPATCH_TABLE * IrpDispatchTable;
	/*000c*/ UCHAR DeviceState;
	/*000d*/ UCHAR TentativeNextState;
	/*0010*/ _KEVENT SecondaryExtLock;
	/*0020*/
};

enum _PCI_DISPATCH_STYLE {
	IRP_COMPLETE = 0x0,
	IRP_DOWNWARD = 0x1,
	IRP_UPWARD = 0x2,
	IRP_DISPATCH = 0x3
};

struct _PCI_FDO_EXTENSION {
	/*0000*/ _SINGLE_LIST_ENTRY List;
	/*0004*/ PCI_SIGNATURE ExtensionType;
	/*0008*/ _PCI_MJ_DISPATCH_TABLE * IrpDispatchTable;
	/*000c*/ UCHAR DeviceState;
	/*000d*/ UCHAR TentativeNextState;
	/*0010*/ _KEVENT SecondaryExtLock;
	/*0020*/ _DEVICE_OBJECT * PhysicalDeviceObject;
	/*0024*/ _DEVICE_OBJECT * FunctionalDeviceObject;
	/*0028*/ _DEVICE_OBJECT * AttachedDeviceObject;
	/*002c*/ _KEVENT ChildListLock;
	/*003c*/ _PCI_PDO_EXTENSION * ChildPdoList;
	/*0040*/ _PCI_FDO_EXTENSION * BusRootFdoExtension;
	/*0044*/ _PCI_FDO_EXTENSION * ParentFdoExtension;
	/*0048*/ _PCI_PDO_EXTENSION * ChildBridgePdoList;
	/*004c*/ _PCI_BUS_INTERFACE_STANDARD * PciBusInterface;
	/*0050*/ UCHAR MaxSubordinateBus;
	/*0054*/ _BUS_HANDLER * BusHandler;
	/*0058*/ UCHAR BaseBus;
	/*0059*/ UCHAR Fake;
	/*005a*/ UCHAR ChildDelete;
	/*005b*/ UCHAR Scanned;
	/*005c*/ UCHAR ArbitersInitialized;
	/*005d*/ UCHAR BrokenVideoHackApplied;
	/*005e*/ UCHAR Hibernated;
	/*0060*/ PCI_POWER_STATE PowerState;
	/*00a0*/ _SINGLE_LIST_ENTRY SecondaryExtension;
	/*00a4*/ ULONG ChildWaitWakeCount;
	/*00a8*/ _PCI_COMMON_CONFIG * PreservedConfig;
	/*00ac*/ _PCI_LOCK Lock;
	struct {
		/*00b4*/ UCHAR Acquired;
		/*00b5*/ UCHAR CacheLineSize;
		/*00b6*/ UCHAR LatencyTimer;
		/*00b7*/ UCHAR EnablePERR;
		/*00b8*/ UCHAR EnableSERR;
		/*00b9*/
	} HotPlugParameters;
	/*00bc*/ ULONG BusHackFlags;
	/*00c0*/
};

struct _PCI_HEADER_TYPE_0 {
	/*0000*/ ULONG BaseAddresses[0x6];
	/*0018*/ ULONG CIS;
	/*001c*/ USHORT SubVendorID;
	/*001e*/ USHORT SubSystemID;
	/*0020*/ ULONG ROMBaseAddress;
	/*0024*/ UCHAR CapabilitiesPtr;
	/*0025*/ UCHAR Reserved1[0x3];
	/*0028*/ ULONG Reserved2;
	/*002c*/ UCHAR InterruptLine;
	/*002d*/ UCHAR InterruptPin;
	/*002e*/ UCHAR MinimumGrant;
	/*002f*/ UCHAR MaximumLatency;
	/*0030*/
};

struct _PCI_HEADER_TYPE_1 {
	/*0000*/ ULONG BaseAddresses[0x2];
	/*0008*/ UCHAR PrimaryBus;
	/*0009*/ UCHAR SecondaryBus;
	/*000a*/ UCHAR SubordinateBus;
	/*000b*/ UCHAR SecondaryLatency;
	/*000c*/ UCHAR IOBase;
	/*000d*/ UCHAR IOLimit;
	/*000e*/ USHORT SecondaryStatus;
	/*0010*/ USHORT MemoryBase;
	/*0012*/ USHORT MemoryLimit;
	/*0014*/ USHORT PrefetchBase;
	/*0016*/ USHORT PrefetchLimit;
	/*0018*/ ULONG PrefetchBaseUpper32;
	/*001c*/ ULONG PrefetchLimitUpper32;
	/*0020*/ USHORT IOBaseUpper16;
	/*0022*/ USHORT IOLimitUpper16;
	/*0024*/ UCHAR CapabilitiesPtr;
	/*0025*/ UCHAR Reserved1[0x3];
	/*0028*/ ULONG ROMBaseAddress;
	/*002c*/ UCHAR InterruptLine;
	/*002d*/ UCHAR InterruptPin;
	/*002e*/ USHORT BridgeControl;
	/*0030*/
};

struct _PCI_HEADER_TYPE_2 {
	/*0000*/ ULONG SocketRegistersBaseAddress;
	/*0004*/ UCHAR CapabilitiesPtr;
	/*0005*/ UCHAR Reserved;
	/*0006*/ USHORT SecondaryStatus;
	/*0008*/ UCHAR PrimaryBus;
	/*0009*/ UCHAR SecondaryBus;
	/*000a*/ UCHAR SubordinateBus;
	/*000b*/ UCHAR SecondaryLatency;
	struct {
		/*0000*/ ULONG Base;
		/*0004*/ ULONG Limit;
		/*0008*/
	} Range[0x4];
	/*002c*/ UCHAR InterruptLine;
	/*002d*/ UCHAR InterruptPin;
	/*002e*/ USHORT BridgeControl;
	/*0030*/
};

struct _PCI_INTERFACE {
	/*0000*/ _GUID const * InterfaceType;
	/*0004*/ USHORT MinSize;
	/*0006*/ USHORT MinVersion;
	/*0008*/ USHORT MaxVersion;
	/*000a*/ USHORT Flags;
	/*000c*/ LONG ReferenceCount;
	/*0010*/ PCI_SIGNATURE Signature;
	/*0014*/ LONG (* Constructor)( void * , void * , void * , USHORT , USHORT , _INTERFACE * );
	/*0018*/ LONG (* Initializer)( _PCI_ARBITER_INSTANCE * );
	/*001c*/
};

struct _PCI_LOCK {
	/*0000*/ ULONG Atom;
	/*0004*/ UCHAR OldIrql;
	/*0008*/
};

struct _PCI_MJ_DISPATCH_TABLE {
	/*0000*/ ULONG PnpIrpMaximumMinorFunction;
	/*0004*/ _PCI_MN_DISPATCH_TABLE * PnpIrpDispatchTable;
	/*0008*/ ULONG PowerIrpMaximumMinorFunction;
	/*000c*/ _PCI_MN_DISPATCH_TABLE * PowerIrpDispatchTable;
	/*0010*/ _PCI_DISPATCH_STYLE SystemControlIrpDispatchStyle;
	/*0014*/ LONG (* SystemControlIrpDispatchFunction)( _IRP * , _IO_STACK_LOCATION * , _PCI_COMMON_EXTENSION * );
	/*0018*/ _PCI_DISPATCH_STYLE OtherIrpDispatchStyle;
	/*001c*/ LONG (* OtherIrpDispatchFunction)( _IRP * , _IO_STACK_LOCATION * , _PCI_COMMON_EXTENSION * );
	/*0020*/
};

struct _PCI_MN_DISPATCH_TABLE {
	/*0000*/ _PCI_DISPATCH_STYLE DispatchStyle;
	/*0004*/ LONG (* DispatchFunction)( _IRP * , _IO_STACK_LOCATION * , _PCI_COMMON_EXTENSION * );
	/*0008*/
};

struct _PCI_PDO_EXTENSION {
	/*0000*/ _PCI_PDO_EXTENSION * Next;
	/*0004*/ PCI_SIGNATURE ExtensionType;
	/*0008*/ _PCI_MJ_DISPATCH_TABLE * IrpDispatchTable;
	/*000c*/ UCHAR DeviceState;
	/*000d*/ UCHAR TentativeNextState;
	/*0010*/ _KEVENT SecondaryExtLock;
	/*0020*/ _PCI_SLOT_NUMBER Slot;
	/*0024*/ _DEVICE_OBJECT * PhysicalDeviceObject;
	/*0028*/ _PCI_FDO_EXTENSION * ParentFdoExtension;
	/*002c*/ _SINGLE_LIST_ENTRY SecondaryExtension;
	/*0030*/ ULONG BusInterfaceReferenceCount;
	/*0034*/ ULONG AgpInterfaceReferenceCount;
	/*0038*/ USHORT VendorId;
	/*003a*/ USHORT DeviceId;
	/*003c*/ USHORT SubsystemVendorId;
	/*003e*/ USHORT SubsystemId;
	/*0040*/ UCHAR RevisionId;
	/*0041*/ UCHAR ProgIf;
	/*0042*/ UCHAR SubClass;
	/*0043*/ UCHAR BaseClass;
	/*0044*/ UCHAR AdditionalResourceCount;
	/*0045*/ UCHAR AdjustedInterruptLine;
	/*0046*/ UCHAR InterruptPin;
	/*0047*/ UCHAR RawInterruptLine;
	/*0048*/ UCHAR CapabilitiesPtr;
	/*0049*/ UCHAR SavedLatencyTimer;
	/*004a*/ UCHAR SavedCacheLineSize;
	/*004b*/ UCHAR HeaderType;
	/*004c*/ UCHAR NotPresent;
	/*004d*/ UCHAR ReportedMissing;
	/*004e*/ UCHAR ExpectedWritebackFailure;
	/*004f*/ UCHAR NoTouchPmeEnable;
	/*0050*/ UCHAR LegacyDriver;
	/*0051*/ UCHAR UpdateHardware;
	/*0052*/ UCHAR MovedDevice;
	/*0053*/ UCHAR DisablePowerDown;
	/*0054*/ UCHAR NeedsHotPlugConfiguration;
	/*0055*/ UCHAR SwitchedIDEToNativeMode;
	/*0056*/ UCHAR BIOSAllowsIDESwitchToNativeMode;
	/*0057*/ UCHAR IoSpaceUnderNativeIdeControl;
	/*0058*/ UCHAR OnDebugPath;
	/*005c*/ PCI_POWER_STATE PowerState;
	/*009c*/ PCI_HEADER_TYPE_DEPENDENT Dependent;
	/*00a0*/ ULONGLONG HackFlags;
	/*00a8*/ PCI_FUNCTION_RESOURCES * Resources;
	/*00ac*/ _PCI_FDO_EXTENSION * BridgeFdoExtension;
	/*00b0*/ _PCI_PDO_EXTENSION * NextBridge;
	/*00b4*/ _PCI_PDO_EXTENSION * NextHashEntry;
	/*00b8*/ _PCI_LOCK Lock;
	/*00c0*/ _PCI_PMC PowerCapabilities;
	/*00c2*/ UCHAR TargetAgpCapabilityId;
	/*00c4*/ USHORT CommandEnables;
	/*00c6*/ USHORT InitialCommand;
	/*00c8*/
};

struct _PCI_PMC {
	/*0000*/ UCHAR Version : 03; // 0x07;
	/*0000*/ UCHAR PMEClock : 01; // 0x08;
	/*0000*/ UCHAR Rsvd1 : 01; // 0x10;
	/*0000*/ UCHAR DeviceSpecificInitialization : 01; // 0x20;
	/*0000*/ UCHAR Rsvd2 : 02; // 0xc0;
	/*0001*/ _PM_SUPPORT Support;
	/*0002*/
};

struct _PCI_SLOT_NUMBER {
	union {
		struct {
			/*0000*/ ULONG DeviceNumber : 05; // 0x0000001f;
			/*0000*/ ULONG FunctionNumber : 03; // 0x000000e0;
			/*0000*/ ULONG Reserved : 24; // 0xffffff00;
			/*0004*/
		} bits;
		/*0000*/ ULONG AsULONG;
		/*0004*/
	} u;
	/*0004*/
};

struct _PEB {
	/*0000*/ UCHAR InheritedAddressSpace;
	/*0001*/ UCHAR ReadImageFileExecOptions;
	/*0002*/ UCHAR BeingDebugged;
	/*0003*/ UCHAR SpareBool;
	/*0004*/ void * Mutant;
	/*0008*/ void * ImageBaseAddress;
	/*000c*/ _PEB_LDR_DATA * Ldr;
	/*0010*/ _RTL_USER_PROCESS_PARAMETERS * ProcessParameters;
	/*0014*/ void * SubSystemData;
	/*0018*/ void * ProcessHeap;
	/*001c*/ _RTL_CRITICAL_SECTION * FastPebLock;
	/*0020*/ void * FastPebLockRoutine;
	/*0024*/ void * FastPebUnlockRoutine;
	/*0028*/ ULONG EnvironmentUpdateCount;
	/*002c*/ void * KernelCallbackTable;
	/*0030*/ ULONG SystemReserved[0x1];
	/*0034*/ ULONG AtlThunkSListPtr32;
	/*0038*/ _PEB_FREE_BLOCK * FreeList;
	/*003c*/ ULONG TlsExpansionCounter;
	/*0040*/ void * TlsBitmap;
	/*0044*/ ULONG TlsBitmapBits[0x2];
	/*004c*/ void * ReadOnlySharedMemoryBase;
	/*0050*/ void * ReadOnlySharedMemoryHeap;
	/*0054*/ void * * ReadOnlyStaticServerData;
	/*0058*/ void * AnsiCodePageData;
	/*005c*/ void * OemCodePageData;
	/*0060*/ void * UnicodeCaseTableData;
	/*0064*/ ULONG NumberOfProcessors;
	/*0068*/ ULONG NtGlobalFlag;
	/*0070*/ _LARGE_INTEGER CriticalSectionTimeout;
	/*0078*/ ULONG HeapSegmentReserve;
	/*007c*/ ULONG HeapSegmentCommit;
	/*0080*/ ULONG HeapDeCommitTotalFreeThreshold;
	/*0084*/ ULONG HeapDeCommitFreeBlockThreshold;
	/*0088*/ ULONG NumberOfHeaps;
	/*008c*/ ULONG MaximumNumberOfHeaps;
	/*0090*/ void * * ProcessHeaps;
	/*0094*/ void * GdiSharedHandleTable;
	/*0098*/ void * ProcessStarterHelper;
	/*009c*/ ULONG GdiDCAttributeList;
	/*00a0*/ void * LoaderLock;
	/*00a4*/ ULONG OSMajorVersion;
	/*00a8*/ ULONG OSMinorVersion;
	/*00ac*/ USHORT OSBuildNumber;
	/*00ae*/ USHORT OSCSDVersion;
	/*00b0*/ ULONG OSPlatformId;
	/*00b4*/ ULONG ImageSubsystem;
	/*00b8*/ ULONG ImageSubsystemMajorVersion;
	/*00bc*/ ULONG ImageSubsystemMinorVersion;
	/*00c0*/ ULONG ImageProcessAffinityMask;
	/*00c4*/ ULONG GdiHandleBuffer[0x22];
	/*014c*/ void (* PostProcessInitRoutine)();
	/*0150*/ void * TlsExpansionBitmap;
	/*0154*/ ULONG TlsExpansionBitmapBits[0x20];
	/*01d4*/ ULONG SessionId;
	/*01d8*/ _ULARGE_INTEGER AppCompatFlags;
	/*01e0*/ _ULARGE_INTEGER AppCompatFlagsUser;
	/*01e8*/ void * pShimData;
	/*01ec*/ void * AppCompatInfo;
	/*01f0*/ _UNICODE_STRING CSDVersion;
	/*01f8*/ void * ActivationContextData;
	/*01fc*/ void * ProcessAssemblyStorageMap;
	/*0200*/ void * SystemDefaultActivationContextData;
	/*0204*/ void * SystemAssemblyStorageMap;
	/*0208*/ ULONG MinimumStackCommit;
	/*0210*/
};

struct _PEB_FREE_BLOCK {
	/*0000*/ _PEB_FREE_BLOCK * Next;
	/*0004*/ ULONG Size;
	/*0008*/
};

struct _PEB_LDR_DATA {
	/*0000*/ ULONG Length;
	/*0004*/ UCHAR Initialized;
	/*0008*/ void * SsHandle;
	/*000c*/ _LIST_ENTRY InLoadOrderModuleList;
	/*0014*/ _LIST_ENTRY InMemoryOrderModuleList;
	/*001c*/ _LIST_ENTRY InInitializationOrderModuleList;
	/*0024*/ void * EntryInProgress;
	/*0028*/
};

enum _PF_SCENARIO_TYPE {
	PfApplicationLaunchScenarioType = 0x0,
	PfSystemBootScenarioType = 0x1,
	PfMaxScenarioType = 0x2
};

struct _PHYSICAL_MEMORY_DESCRIPTOR {
	/*0000*/ ULONG NumberOfRuns;
	/*0004*/ ULONG NumberOfPages;
	/*0008*/ _PHYSICAL_MEMORY_RUN Run[0x1];
	/*0010*/
};

struct _PHYSICAL_MEMORY_RUN {
	/*0000*/ ULONG BasePage;
	/*0004*/ ULONG PageCount;
	/*0008*/
};

struct _PI_BUS_EXTENSION {
	/*0000*/ ULONG Flags;
	/*0004*/ ULONG NumberCSNs;
	/*0008*/ UCHAR * ReadDataPort;
	/*000c*/ UCHAR DataPortMapped;
	/*0010*/ UCHAR * AddressPort;
	/*0014*/ UCHAR AddrPortMapped;
	/*0018*/ UCHAR * CommandPort;
	/*001c*/ UCHAR CmdPortMapped;
	/*0020*/ ULONG NextSlotNumber;
	/*0024*/ _SINGLE_LIST_ENTRY DeviceList;
	/*0028*/ _SINGLE_LIST_ENTRY CardList;
	/*002c*/ _DEVICE_OBJECT * PhysicalBusDevice;
	/*0030*/ _DEVICE_OBJECT * FunctionalBusDevice;
	/*0034*/ _DEVICE_OBJECT * AttachedDevice;
	/*0038*/ ULONG BusNumber;
	/*003c*/ _SYSTEM_POWER_STATE SystemPowerState;
	/*0040*/ _DEVICE_POWER_STATE DevicePowerState;
	/*0044*/
};

struct _PI_RESOURCE_ARBITER_ENTRY {
	/*0000*/ _LIST_ENTRY DeviceArbiterList;
	/*0008*/ UCHAR ResourceType;
	/*000c*/ _ARBITER_INTERFACE * ArbiterInterface;
	/*0010*/ ULONG Level;
	/*0014*/ _LIST_ENTRY ResourceList;
	/*001c*/ _LIST_ENTRY BestResourceList;
	/*0024*/ _LIST_ENTRY BestConfig;
	/*002c*/ _LIST_ENTRY ActiveArbiterList;
	/*0034*/ UCHAR State;
	/*0035*/ UCHAR ResourcesChanged;
	/*0038*/
};

struct _PLUGPLAY_EVENT_BLOCK {
	/*0000*/ _GUID EventGuid;
	/*0010*/ _PLUGPLAY_EVENT_CATEGORY EventCategory;
	/*0014*/ ULONG * Result;
	/*0018*/ ULONG Flags;
	/*001c*/ ULONG TotalSize;
	/*0020*/ void * DeviceObject;
	union {
		struct {
			/*0024*/ _GUID ClassGuid;
			/*0034*/ USHORT SymbolicLinkName[0x1];
			/*0038*/
		} DeviceClass;
		struct {
			/*0024*/ USHORT DeviceIds[0x1];
			/*0026*/
		} TargetDevice;
		struct {
			/*0024*/ USHORT DeviceId[0x1];
			/*0026*/
		} InstallDevice;
		struct {
			/*0024*/ void * NotificationStructure;
			/*0028*/ USHORT DeviceIds[0x1];
			/*002c*/
		} CustomNotification;
		struct {
			/*0024*/ void * Notification;
			/*0028*/
		} ProfileNotification;
		struct {
			/*0024*/ ULONG NotificationCode;
			/*0028*/ ULONG NotificationData;
			/*002c*/
		} PowerNotification;
		struct {
			/*0024*/ _PNP_VETO_TYPE VetoType;
			/*0028*/ USHORT DeviceIdVetoNameBuffer[0x1];
			/*002c*/
		} VetoNotification;
		struct {
			/*0024*/ _GUID BlockedDriverGuid;
			/*0034*/
		} BlockedDriverNotification;
		/*0038*/
	} u;
	/*0038*/
};

enum _PLUGPLAY_EVENT_CATEGORY {
	HardwareProfileChangeEvent = 0x0,
	TargetDeviceChangeEvent = 0x1,
	DeviceClassChangeEvent = 0x2,
	CustomDeviceEvent = 0x3,
	DeviceInstallEvent = 0x4,
	DeviceArrivalEvent = 0x5,
	PowerEvent = 0x6,
	VetoEvent = 0x7,
	BlockedDriverEvent = 0x8,
	MaxPlugEventCategory = 0x9
};

struct _PM_SUPPORT {
	/*0000*/ UCHAR Rsvd2 : 01; // 0x01;
	/*0000*/ UCHAR D1 : 01; // 0x02;
	/*0000*/ UCHAR D2 : 01; // 0x04;
	/*0000*/ UCHAR PMED0 : 01; // 0x08;
	/*0000*/ UCHAR PMED1 : 01; // 0x10;
	/*0000*/ UCHAR PMED2 : 01; // 0x20;
	/*0000*/ UCHAR PMED3Hot : 01; // 0x40;
	/*0000*/ UCHAR PMED3Cold : 01; // 0x80;
	/*0001*/
};

struct _PNP_DEVICE_EVENT_ENTRY {
	/*0000*/ _LIST_ENTRY ListEntry;
	/*0008*/ ULONG Argument;
	/*000c*/ _KEVENT * CallerEvent;
	/*0010*/ void (* Callback)( void * );
	/*0014*/ void * Context;
	/*0018*/ _PNP_VETO_TYPE * VetoType;
	/*001c*/ _UNICODE_STRING * VetoName;
	/*0020*/ _PLUGPLAY_EVENT_BLOCK Data;
	/*0058*/
};

struct _PNP_DEVICE_EVENT_LIST {
	/*0000*/ LONG Status;
	/*0004*/ _KMUTANT EventQueueMutex;
	/*0024*/ _FAST_MUTEX Lock;
	/*0044*/ _LIST_ENTRY List;
	/*004c*/
};

enum _PNP_DEVNODE_STATE {
	DeviceNodeUnspecified = 0x300,
	DeviceNodeUninitialized = 0x301,
	DeviceNodeInitialized = 0x302,
	DeviceNodeDriversAdded = 0x303,
	DeviceNodeResourcesAssigned = 0x304,
	DeviceNodeStartPending = 0x305,
	DeviceNodeStartCompletion = 0x306,
	DeviceNodeStartPostWork = 0x307,
	DeviceNodeStarted = 0x308,
	DeviceNodeQueryStopped = 0x309,
	DeviceNodeStopped = 0x30a,
	DeviceNodeRestartCompletion = 0x30b,
	DeviceNodeEnumeratePending = 0x30c,
	DeviceNodeEnumerateCompletion = 0x30d,
	DeviceNodeAwaitingQueuedDeletion = 0x30e,
	DeviceNodeAwaitingQueuedRemoval = 0x30f,
	DeviceNodeQueryRemoved = 0x310,
	DeviceNodeRemovePendingCloses = 0x311,
	DeviceNodeRemoved = 0x312,
	DeviceNodeDeletePendingCloses = 0x313,
	DeviceNodeDeleted = 0x314
};

enum _PNP_VETO_TYPE {
	PNP_VetoTypeUnknown = 0x0,
	PNP_VetoLegacyDevice = 0x1,
	PNP_VetoPendingClose = 0x2,
	PNP_VetoWindowsApp = 0x3,
	PNP_VetoWindowsService = 0x4,
	PNP_VetoOutstandingOpen = 0x5,
	PNP_VetoDevice = 0x6,
	PNP_VetoDriver = 0x7,
	PNP_VetoIllegalDeviceRequest = 0x8,
	PNP_VetoInsufficientPower = 0x9,
	PNP_VetoNonDisableable = 0xa,
	PNP_VetoLegacyDriver = 0xb,
	PNP_VetoInsufficientRights = 0xc
};

enum _POLICY_AUDIT_EVENT_TYPE {
	AuditCategorySystem = 0x0,
	AuditCategoryLogon = 0x1,
	AuditCategoryObjectAccess = 0x2,
	AuditCategoryPrivilegeUse = 0x3,
	AuditCategoryDetailedTracking = 0x4,
	AuditCategoryPolicyChange = 0x5,
	AuditCategoryAccountManagement = 0x6,
	AuditCategoryDirectoryServiceAccess = 0x7,
	AuditCategoryAccountLogon = 0x8
};

struct _POOL_BLOCK_HEAD {
	/*0000*/ _POOL_HEADER Header;
	/*0008*/ _LIST_ENTRY List;
	/*0010*/
};

struct _POOL_DESCRIPTOR {
	/*0000*/ _POOL_TYPE PoolType;
	/*0004*/ ULONG PoolIndex;
	/*0008*/ ULONG RunningAllocs;
	/*000c*/ ULONG RunningDeAllocs;
	/*0010*/ ULONG TotalPages;
	/*0014*/ ULONG TotalBigPages;
	/*0018*/ ULONG Threshold;
	/*001c*/ void * LockAddress;
	/*0020*/ void * PendingFrees;
	/*0024*/ LONG PendingFreeDepth;
	/*0028*/ _LIST_ENTRY ListHeads[0x200];
	/*1028*/
};

struct _POOL_HACKER {
	/*0000*/ _POOL_HEADER Header;
	/*0008*/ ULONG Contents[0x8];
	/*0028*/
};

struct _POOL_HEADER {
	/*0000*/ USHORT PreviousSize : 09; // 0x01ff;
	/*0000*/ USHORT PoolIndex : 07; // 0xfe00;
	/*0002*/ USHORT BlockSize : 09; // 0x01ff;
	/*0002*/ USHORT PoolType : 07; // 0xfe00;
	/*0000*/ ULONG Ulong1;
	/*0004*/ _EPROCESS * ProcessBilled;
	/*0004*/ ULONG PoolTag;
	/*0004*/ USHORT AllocatorBackTraceIndex;
	/*0006*/ USHORT PoolTagHash;
	/*0008*/
};

struct _POOL_TRACKER_BIG_PAGES {
	/*0000*/ void * Va;
	/*0004*/ ULONG Key;
	/*0008*/ ULONG NumberOfPages;
	/*000c*/
};

struct _POOL_TRACKER_TABLE {
	/*0000*/ ULONG Key;
	/*0004*/ ULONG NonPagedAllocs;
	/*0008*/ ULONG NonPagedFrees;
	/*000c*/ ULONG NonPagedBytes;
	/*0010*/ ULONG PagedAllocs;
	/*0014*/ ULONG PagedFrees;
	/*0018*/ ULONG PagedBytes;
	/*001c*/
};

enum _POOL_TYPE {
	NonPagedPool = 0x0,
	PagedPool = 0x1,
	NonPagedPoolMustSucceed = 0x2,
	DontUseThisType = 0x3,
	NonPagedPoolCacheAligned = 0x4,
	PagedPoolCacheAligned = 0x5,
	NonPagedPoolCacheAlignedMustS = 0x6,
	MaxPoolType = 0x7,
	NonPagedPoolSession = 0x20,
	PagedPoolSession = 0x21,
	NonPagedPoolMustSucceedSession = 0x22,
	DontUseThisTypeSession = 0x23,
	NonPagedPoolCacheAlignedSession = 0x24,
	PagedPoolCacheAlignedSession = 0x25,
	NonPagedPoolCacheAlignedMustSSession = 0x26
};

struct _POP_ACTION_TRIGGER {
	/*0000*/ POP_POLICY_DEVICE_TYPE Type;
	/*0004*/ UCHAR Flags;
	/*0005*/ UCHAR Spare[0x3];
	struct {
		/*0008*/ ULONG Level;
		/*000c*/
	} Battery;
	/*0008*/ _POP_TRIGGER_WAIT * Wait;
	/*000c*/
};

struct _POP_DEVICE_POWER_IRP {
	/*0000*/ _SINGLE_LIST_ENTRY Free;
	/*0004*/ _IRP * Irp;
	/*0008*/ _PO_DEVICE_NOTIFY * Notify;
	/*000c*/ _LIST_ENTRY Pending;
	/*0014*/ _LIST_ENTRY Complete;
	/*001c*/ _LIST_ENTRY Abort;
	/*0024*/ _LIST_ENTRY Failed;
	/*002c*/
};

struct _POP_DEVICE_SYS_STATE {
	/*0000*/ UCHAR IrpMinor;
	/*0004*/ _SYSTEM_POWER_STATE SystemState;
	/*0008*/ _KEVENT Event;
	/*0018*/ ULONG SpinLock;
	/*001c*/ _KTHREAD * Thread;
	/*0020*/ UCHAR GetNewDeviceList;
	/*0024*/ _PO_DEVICE_NOTIFY_ORDER Order;
	/*026c*/ LONG Status;
	/*0270*/ _DEVICE_OBJECT * FailedDevice;
	/*0274*/ UCHAR Waking;
	/*0275*/ UCHAR Cancelled;
	/*0276*/ UCHAR IgnoreErrors;
	/*0277*/ UCHAR IgnoreNotImplemented;
	/*0278*/ UCHAR WaitAny;
	/*0279*/ UCHAR WaitAll;
	/*027c*/ _LIST_ENTRY PresentIrpQueue;
	/*0284*/ _POP_DEVICE_POWER_IRP Head;
	/*02b0*/ _POP_DEVICE_POWER_IRP PowerIrpState[0x14];
	/*0620*/
};

struct _POP_HIBER_CONTEXT {
	/*0000*/ UCHAR WriteToFile;
	/*0001*/ UCHAR ReserveLoaderMemory;
	/*0002*/ UCHAR ReserveFreeMemory;
	/*0003*/ UCHAR VerifyOnWake;
	/*0004*/ UCHAR Reset;
	/*0005*/ UCHAR HiberFlags;
	/*0006*/ UCHAR LinkFile;
	/*0008*/ void * LinkFileHandle;
	/*000c*/ ULONG Lock;
	/*0010*/ UCHAR MapFrozen;
	/*0014*/ _RTL_BITMAP MemoryMap;
	/*001c*/ _LIST_ENTRY ClonedRanges;
	/*0024*/ ULONG ClonedRangeCount;
	/*0028*/ _LIST_ENTRY * NextCloneRange;
	/*002c*/ ULONG NextPreserve;
	/*0030*/ _MDL * LoaderMdl;
	/*0034*/ _MDL * Clones;
	/*0038*/ UCHAR * NextClone;
	/*003c*/ ULONG NoClones;
	/*0040*/ _MDL * Spares;
	/*0048*/ ULONGLONG PagesOut;
	/*0050*/ void * IoPage;
	/*0054*/ void * CurrentMcb;
	/*0058*/ _DUMP_STACK_CONTEXT * DumpStack;
	/*005c*/ _KPROCESSOR_STATE * WakeState;
	/*0060*/ ULONG NoRanges;
	/*0064*/ ULONG HiberVa;
	/*0068*/ _LARGE_INTEGER HiberPte;
	/*0070*/ LONG Status;
	/*0074*/ PO_MEMORY_IMAGE * MemoryImage;
	/*0078*/ _PO_MEMORY_RANGE_ARRAY * TableHead;
	/*007c*/ UCHAR * CompressionWorkspace;
	/*0080*/ UCHAR * CompressedWriteBuffer;
	/*0084*/ ULONG * PerformanceStats;
	/*0088*/ void * CompressionBlock;
	/*008c*/ void * DmaIO;
	/*0090*/ void * TemporaryHeap;
	/*0098*/ _PO_HIBER_PERF PerfInfo;
	/*00e0*/
};

struct _POP_IDLE_HANDLER {
	/*0000*/ ULONG Latency;
	/*0004*/ ULONG TimeCheck;
	/*0008*/ ULONG DemoteLimit;
	/*000c*/ ULONG PromoteLimit;
	/*0010*/ ULONG PromoteCount;
	/*0014*/ UCHAR Demote;
	/*0015*/ UCHAR Promote;
	/*0016*/ UCHAR PromotePercent;
	/*0017*/ UCHAR DemotePercent;
	/*0018*/ UCHAR State;
	/*0019*/ UCHAR Spare[0x3];
	/*001c*/ UCHAR (* IdleFunction)( PROCESSOR_IDLE_TIMES * );
	/*0020*/
};

struct _POP_POWER_ACTION {
	/*0000*/ UCHAR Updates;
	/*0001*/ UCHAR State;
	/*0002*/ UCHAR Shutdown;
	/*0004*/ POWER_ACTION Action;
	/*0008*/ _SYSTEM_POWER_STATE LightestState;
	/*000c*/ ULONG Flags;
	/*0010*/ LONG Status;
	/*0014*/ UCHAR IrpMinor;
	/*0018*/ _SYSTEM_POWER_STATE SystemState;
	/*001c*/ _SYSTEM_POWER_STATE NextSystemState;
	/*0020*/ _POP_SHUTDOWN_BUG_CHECK * ShutdownBugCode;
	/*0024*/ _POP_DEVICE_SYS_STATE * DevState;
	/*0028*/ _POP_HIBER_CONTEXT * HiberContext;
	/*002c*/ _SYSTEM_POWER_STATE LastWakeState;
	/*0030*/ ULONGLONG WakeTime;
	/*0038*/ ULONGLONG SleepTime;
	/*0040*/
};

struct _POP_SHUTDOWN_BUG_CHECK {
	/*0000*/ ULONG Code;
	/*0004*/ ULONG Parameter1;
	/*0008*/ ULONG Parameter2;
	/*000c*/ ULONG Parameter3;
	/*0010*/ ULONG Parameter4;
	/*0014*/
};

struct _POP_THERMAL_ZONE {
	/*0000*/ _LIST_ENTRY Link;
	/*0008*/ UCHAR State;
	/*0009*/ UCHAR Flags;
	/*000a*/ UCHAR Mode;
	/*000b*/ UCHAR PendingMode;
	/*000c*/ UCHAR ActivePoint;
	/*000d*/ UCHAR PendingActivePoint;
	/*0010*/ LONG Throttle;
	/*0018*/ ULONGLONG LastTime;
	/*0020*/ ULONG SampleRate;
	/*0024*/ ULONG LastTemp;
	/*0028*/ _KTIMER PassiveTimer;
	/*0050*/ _KDPC PassiveDpc;
	/*0070*/ _POP_ACTION_TRIGGER OverThrottled;
	/*007c*/ _IRP * Irp;
	/*0080*/ _THERMAL_INFORMATION Info;
	/*00d0*/
};

struct _POP_TRIGGER_WAIT {
	/*0000*/ _KEVENT Event;
	/*0010*/ LONG Status;
	/*0014*/ _LIST_ENTRY Link;
	/*001c*/ _POP_ACTION_TRIGGER * Trigger;
	/*0020*/
};

struct _PORT_MESSAGE {
	union {
		struct {
			/*0000*/ SHORT DataLength;
			/*0002*/ SHORT TotalLength;
			/*0004*/
		} s1;
		/*0000*/ ULONG Length;
		/*0004*/
	} u1;
	union {
		struct {
			/*0004*/ SHORT Type;
			/*0006*/ SHORT DataInfoOffset;
			/*0008*/
		} s2;
		/*0004*/ ULONG ZeroInit;
		/*0008*/
	} u2;
	/*0008*/ _CLIENT_ID ClientId;
	/*0008*/ double DoNotUseThisField;
	/*0010*/ ULONG MessageId;
	/*0014*/ ULONG ClientViewSize;
	/*0014*/ ULONG CallbackId;
	/*0018*/
};

struct _POWER_CHANNEL_SUMMARY {
	/*0000*/ ULONG Signature;
	/*0004*/ ULONG TotalCount;
	/*0008*/ ULONG D0Count;
	/*000c*/ _LIST_ENTRY NotifyList;
	/*0014*/
};

struct _POWER_SEQUENCE {
	/*0000*/ ULONG SequenceD1;
	/*0004*/ ULONG SequenceD2;
	/*0008*/ ULONG SequenceD3;
	/*000c*/
};

union _POWER_STATE {
	/*0000*/ _SYSTEM_POWER_STATE SystemState;
	/*0000*/ _DEVICE_POWER_STATE DeviceState;
	/*0004*/
};

enum _POWER_STATE_TYPE {
	SystemPowerState = 0x0,
	DevicePowerState = 0x1
};

struct _PO_DEVICE_NOTIFY {
	/*0000*/ _LIST_ENTRY Link;
	/*0008*/ _DEVICE_OBJECT * TargetDevice;
	/*000c*/ UCHAR WakeNeeded;
	/*000d*/ UCHAR OrderLevel;
	/*0010*/ _DEVICE_OBJECT * DeviceObject;
	/*0014*/ void * Node;
	/*0018*/ USHORT * DeviceName;
	/*001c*/ USHORT * DriverName;
	/*0020*/ ULONG ChildCount;
	/*0024*/ ULONG ActiveChild;
	/*0028*/
};

struct _PO_DEVICE_NOTIFY_ORDER {
	/*0000*/ ULONG DevNodeSequence;
	/*0004*/ _DEVICE_OBJECT * * WarmEjectPdoPointer;
	/*0008*/ _PO_NOTIFY_ORDER_LEVEL OrderLevel[0x8];
	/*0248*/
};

struct _PO_HIBER_PERF {
	/*0000*/ ULONGLONG IoTicks;
	/*0008*/ ULONGLONG InitTicks;
	/*0010*/ ULONGLONG CopyTicks;
	/*0018*/ ULONGLONG StartCount;
	/*0020*/ ULONG ElapsedTime;
	/*0024*/ ULONG IoTime;
	/*0028*/ ULONG CopyTime;
	/*002c*/ ULONG InitTime;
	/*0030*/ ULONG PagesWritten;
	/*0034*/ ULONG PagesProcessed;
	/*0038*/ ULONG BytesCopied;
	/*003c*/ ULONG DumpCount;
	/*0040*/ ULONG FileRuns;
	/*0048*/
};

struct _PO_MEMORY_RANGE_ARRAY {
	struct {
		/*0000*/ ULONG PageNo;
		/*0004*/ ULONG StartPage;
		/*0008*/ ULONG EndPage;
		/*000c*/ ULONG CheckSum;
		/*0010*/
	} Range;
	struct {
		/*0000*/ _PO_MEMORY_RANGE_ARRAY * Next;
		/*0004*/ ULONG NextTable;
		/*0008*/ ULONG CheckSum;
		/*000c*/ ULONG EntryCount;
		/*0010*/
	} Link;
	/*0010*/
};

struct _PO_NOTIFY_ORDER_LEVEL {
	/*0000*/ _KEVENT LevelReady;
	/*0010*/ ULONG DeviceCount;
	/*0014*/ ULONG ActiveCount;
	/*0018*/ _LIST_ENTRY WaitSleep;
	/*0020*/ _LIST_ENTRY ReadySleep;
	/*0028*/ _LIST_ENTRY Pending;
	/*0030*/ _LIST_ENTRY Complete;
	/*0038*/ _LIST_ENTRY ReadyS0;
	/*0040*/ _LIST_ENTRY WaitS0;
	/*0048*/
};

struct _PP_LOOKASIDE_LIST {
	/*0000*/ _GENERAL_LOOKASIDE * P;
	/*0004*/ _GENERAL_LOOKASIDE * L;
	/*0008*/
};

enum _PP_NPAGED_LOOKASIDE_NUMBER {
	LookasideSmallIrpList = 0x0,
	LookasideLargeIrpList = 0x1,
	LookasideMdlList = 0x2,
	LookasideCreateInfoList = 0x3,
	LookasideNameBufferList = 0x4,
	LookasideTwilightList = 0x5,
	LookasideCompletionList = 0x6,
	LookasideMaximumList = 0x7
};

struct _PRIVATE_CACHE_MAP {
	/*0000*/ SHORT NodeTypeCode;
	/*0000*/ _PRIVATE_CACHE_MAP_FLAGS Flags;
	/*0000*/ ULONG UlongFlags;
	/*0004*/ ULONG ReadAheadMask;
	/*0008*/ _FILE_OBJECT * FileObject;
	/*0010*/ _LARGE_INTEGER FileOffset1;
	/*0018*/ _LARGE_INTEGER BeyondLastByte1;
	/*0020*/ _LARGE_INTEGER FileOffset2;
	/*0028*/ _LARGE_INTEGER BeyondLastByte2;
	/*0030*/ _LARGE_INTEGER ReadAheadOffset[0x2];
	/*0040*/ ULONG ReadAheadLength[0x2];
	/*0048*/ ULONG ReadAheadSpinLock;
	/*004c*/ _LIST_ENTRY PrivateLinks;
	/*0058*/
};

struct _PRIVATE_CACHE_MAP_FLAGS {
	/*0000*/ ULONG DontUse : 16; // 0x0000ffff;
	/*0000*/ ULONG ReadAheadActive : 01; // 0x00010000;
	/*0000*/ ULONG ReadAheadEnabled : 01; // 0x00020000;
	/*0000*/ ULONG Available : 14; // 0xfffc0000;
	/*0004*/
};

struct _PRIVILEGE_SET {
	/*0000*/ ULONG PrivilegeCount;
	/*0004*/ ULONG Control;
	/*0008*/ _LUID_AND_ATTRIBUTES Privilege[0x1];
	/*0014*/
};

struct _PROCESSOR_POWER_POLICY {
	/*0000*/ ULONG Revision;
	/*0004*/ UCHAR DynamicThrottle;
	/*0005*/ UCHAR Spare[0x3];
	/*0008*/ ULONG DisableCStates : 01; // 0x00000001;
	/*0008*/ ULONG Reserved : 31; // 0xfffffffe;
	/*000c*/ ULONG PolicyCount;
	/*0010*/ _PROCESSOR_POWER_POLICY_INFO Policy[0x3];
	/*004c*/
};

struct _PROCESSOR_POWER_POLICY_INFO {
	/*0000*/ ULONG TimeCheck;
	/*0004*/ ULONG DemoteLimit;
	/*0008*/ ULONG PromoteLimit;
	/*000c*/ UCHAR DemotePercent;
	/*000d*/ UCHAR PromotePercent;
	/*000e*/ UCHAR Spare[0x2];
	/*0010*/ ULONG AllowDemotion : 01; // 0x00000001;
	/*0010*/ ULONG AllowPromotion : 01; // 0x00000002;
	/*0010*/ ULONG Reserved : 30; // 0xfffffffc;
	/*0014*/
};

struct _PROCESSOR_POWER_STATE {
	/*0000*/ void (* IdleFunction)( _PROCESSOR_POWER_STATE * );
	/*0004*/ ULONG Idle0KernelTimeLimit;
	/*0008*/ ULONG Idle0LastTime;
	/*000c*/ void * IdleHandlers;
	/*0010*/ void * IdleState;
	/*0014*/ ULONG IdleHandlersCount;
	/*0018*/ ULONGLONG LastCheck;
	/*0020*/ PROCESSOR_IDLE_TIMES IdleTimes;
	/*0040*/ ULONG IdleTime1;
	/*0044*/ ULONG PromotionCheck;
	/*0048*/ ULONG IdleTime2;
	/*004c*/ UCHAR CurrentThrottle;
	/*004d*/ UCHAR ThermalThrottleLimit;
	/*004e*/ UCHAR CurrentThrottleIndex;
	/*004f*/ UCHAR ThermalThrottleIndex;
	/*0050*/ ULONG LastKernelUserTime;
	/*0054*/ ULONG LastIdleThreadKernelTime;
	/*0058*/ ULONG PackageIdleStartTime;
	/*005c*/ ULONG PackageIdleTime;
	/*0060*/ ULONG DebugCount;
	/*0064*/ ULONG LastSysTime;
	/*0068*/ ULONGLONG TotalIdleStateTime[0x3];
	/*0080*/ ULONG TotalIdleTransitions[0x3];
	/*0090*/ ULONGLONG PreviousC3StateTime;
	/*0098*/ UCHAR KneeThrottleIndex;
	/*0099*/ UCHAR ThrottleLimitIndex;
	/*009a*/ UCHAR PerfStatesCount;
	/*009b*/ UCHAR ProcessorMinThrottle;
	/*009c*/ UCHAR ProcessorMaxThrottle;
	/*009d*/ UCHAR EnableIdleAccounting;
	/*009e*/ UCHAR LastC3Percentage;
	/*009f*/ UCHAR LastAdjustedBusyPercentage;
	/*00a0*/ ULONG PromotionCount;
	/*00a4*/ ULONG DemotionCount;
	/*00a8*/ ULONG ErrorCount;
	/*00ac*/ ULONG RetryCount;
	/*00b0*/ ULONG Flags;
	/*00b8*/ _LARGE_INTEGER PerfCounterFrequency;
	/*00c0*/ ULONG PerfTickCount;
	/*00c8*/ _KTIMER PerfTimer;
	/*00f0*/ _KDPC PerfDpc;
	/*0110*/ PROCESSOR_PERF_STATE * PerfStates;
	/*0114*/ LONG (* PerfSetThrottle)( UCHAR );
	/*0118*/ ULONG LastC3KernelUserTime;
	/*011c*/ ULONG LastPackageIdleTime;
	/*0120*/
};

struct _PROCESS_WS_WATCH_INFORMATION {
	/*0000*/ void * FaultingPc;
	/*0004*/ void * FaultingVa;
	/*0008*/
};

enum _PROXY_CLASS {
	ProxyFull = 0x0,
	ProxyService = 0x1,
	ProxyTree = 0x2,
	ProxyDirectory = 0x3
};

struct _PS_IMPERSONATION_INFORMATION {
	/*0000*/ void * Token;
	/*0004*/ UCHAR CopyOnOpen;
	/*0005*/ UCHAR EffectiveOnly;
	/*0008*/ _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
	/*000c*/
};

struct _PS_JOB_TOKEN_FILTER {
	/*0000*/ ULONG CapturedSidCount;
	/*0004*/ _SID_AND_ATTRIBUTES * CapturedSids;
	/*0008*/ ULONG CapturedSidsLength;
	/*000c*/ ULONG CapturedGroupCount;
	/*0010*/ _SID_AND_ATTRIBUTES * CapturedGroups;
	/*0014*/ ULONG CapturedGroupsLength;
	/*0018*/ ULONG CapturedPrivilegeCount;
	/*001c*/ _LUID_AND_ATTRIBUTES * CapturedPrivileges;
	/*0020*/ ULONG CapturedPrivilegesLength;
	/*0024*/
};

enum _PS_QUOTA_TYPE {
	PsNonPagedPool = 0x0,
	PsPagedPool = 0x1,
	PsPageFile = 0x2,
	PsQuotaTypes = 0x3
};

struct _QUAD {
	/*0000*/ double DoNotUseThisField;
	/*0008*/
};

struct _RTLP_RANGE_LIST_ENTRY {
	/*0000*/ ULONGLONG Start;
	/*0008*/ ULONGLONG End;
	struct {
		/*0010*/ void * UserData;
		/*0014*/ void * Owner;
		/*0018*/
	} Allocated;
	struct {
		/*0010*/ _LIST_ENTRY ListHead;
		/*0018*/
	} Merged;
	/*0018*/ UCHAR Attributes;
	/*0019*/ UCHAR PublicFlags;
	/*001a*/ USHORT PrivateFlags;
	/*001c*/ _LIST_ENTRY ListEntry;
	/*0028*/
};

struct _RTL_ATOM_TABLE {
	/*0000*/ ULONG Signature;
	/*0004*/ _RTL_CRITICAL_SECTION CriticalSection;
	/*001c*/ _RTL_HANDLE_TABLE RtlHandleTable;
	/*003c*/ ULONG NumberOfBuckets;
	/*0040*/ _RTL_ATOM_TABLE_ENTRY * Buckets[0x1];
	/*0044*/
};

struct _RTL_ATOM_TABLE_ENTRY {
	/*0000*/ _RTL_ATOM_TABLE_ENTRY * HashLink;
	/*0004*/ USHORT HandleIndex;
	/*0006*/ USHORT Atom;
	/*0008*/ USHORT ReferenceCount;
	/*000a*/ UCHAR Flags;
	/*000b*/ UCHAR NameLength;
	/*000c*/ USHORT Name[0x1];
	/*0010*/
};

struct _RTL_BITMAP {
	/*0000*/ ULONG SizeOfBitMap;
	/*0004*/ ULONG * Buffer;
	/*0008*/
};

struct _RTL_CRITICAL_SECTION {
	/*0000*/ _RTL_CRITICAL_SECTION_DEBUG * DebugInfo;
	/*0004*/ LONG LockCount;
	/*0008*/ LONG RecursionCount;
	/*000c*/ void * OwningThread;
	/*0010*/ void * LockSemaphore;
	/*0014*/ ULONG SpinCount;
	/*0018*/
};

struct _RTL_CRITICAL_SECTION_DEBUG {
	/*0000*/ USHORT Type;
	/*0002*/ USHORT CreatorBackTraceIndex;
	/*0004*/ _RTL_CRITICAL_SECTION * CriticalSection;
	/*0008*/ _LIST_ENTRY ProcessLocksList;
	/*0010*/ ULONG EntryCount;
	/*0014*/ ULONG ContentionCount;
	/*0018*/ ULONG Spare[0x2];
	/*0020*/
};

struct _RTL_DRIVE_LETTER_CURDIR {
	/*0000*/ USHORT Flags;
	/*0002*/ USHORT Length;
	/*0004*/ ULONG TimeStamp;
	/*0008*/ _STRING DosPath;
	/*0010*/
};

struct _RTL_HANDLE_TABLE {
	/*0000*/ ULONG MaximumNumberOfHandles;
	/*0004*/ ULONG SizeOfHandleTableEntry;
	/*0008*/ ULONG Reserved[0x2];
	/*0010*/ _RTL_HANDLE_TABLE_ENTRY * FreeHandles;
	/*0014*/ _RTL_HANDLE_TABLE_ENTRY * CommittedHandles;
	/*0018*/ _RTL_HANDLE_TABLE_ENTRY * UnCommittedHandles;
	/*001c*/ _RTL_HANDLE_TABLE_ENTRY * MaxReservedHandles;
	/*0020*/
};

struct _RTL_HANDLE_TABLE_ENTRY {
	/*0000*/ ULONG Flags;
	/*0000*/ _RTL_HANDLE_TABLE_ENTRY * NextFree;
	/*0004*/
};

struct _RTL_RANGE {
	/*0000*/ ULONGLONG Start;
	/*0008*/ ULONGLONG End;
	/*0010*/ void * UserData;
	/*0014*/ void * Owner;
	/*0018*/ UCHAR Attributes;
	/*0019*/ UCHAR Flags;
	/*0020*/
};

struct _RTL_RANGE_LIST {
	/*0000*/ _LIST_ENTRY ListHead;
	/*0008*/ ULONG Flags;
	/*000c*/ ULONG Count;
	/*0010*/ ULONG Stamp;
	/*0014*/
};

struct _RTL_USER_PROCESS_PARAMETERS {
	/*0000*/ ULONG MaximumLength;
	/*0004*/ ULONG Length;
	/*0008*/ ULONG Flags;
	/*000c*/ ULONG DebugFlags;
	/*0010*/ void * ConsoleHandle;
	/*0014*/ ULONG ConsoleFlags;
	/*0018*/ void * StandardInput;
	/*001c*/ void * StandardOutput;
	/*0020*/ void * StandardError;
	/*0024*/ _CURDIR CurrentDirectory;
	/*0030*/ _UNICODE_STRING DllPath;
	/*0038*/ _UNICODE_STRING ImagePathName;
	/*0040*/ _UNICODE_STRING CommandLine;
	/*0048*/ void * Environment;
	/*004c*/ ULONG StartingX;
	/*0050*/ ULONG StartingY;
	/*0054*/ ULONG CountX;
	/*0058*/ ULONG CountY;
	/*005c*/ ULONG CountCharsX;
	/*0060*/ ULONG CountCharsY;
	/*0064*/ ULONG FillAttribute;
	/*0068*/ ULONG WindowFlags;
	/*006c*/ ULONG ShowWindowFlags;
	/*0070*/ _UNICODE_STRING WindowTitle;
	/*0078*/ _UNICODE_STRING DesktopInfo;
	/*0080*/ _UNICODE_STRING ShellInfo;
	/*0088*/ _UNICODE_STRING RuntimeData;
	/*0090*/ _RTL_DRIVE_LETTER_CURDIR CurrentDirectores[0x20];
	/*0290*/
};

struct _SCSI_REQUEST_BLOCK;

struct _SECTION_IMAGE_INFORMATION {
	/*0000*/ void * TransferAddress;
	/*0004*/ ULONG ZeroBits;
	/*0008*/ ULONG MaximumStackSize;
	/*000c*/ ULONG CommittedStackSize;
	/*0010*/ ULONG SubSystemType;
	/*0014*/ USHORT SubSystemMinorVersion;
	/*0016*/ USHORT SubSystemMajorVersion;
	/*0014*/ ULONG SubSystemVersion;
	/*0018*/ ULONG GpValue;
	/*001c*/ USHORT ImageCharacteristics;
	/*001e*/ USHORT DllCharacteristics;
	/*0020*/ USHORT Machine;
	/*0022*/ UCHAR ImageContainsCode;
	/*0023*/ UCHAR Spare1;
	/*0024*/ ULONG LoaderFlags;
	/*0028*/ ULONG ImageFileSize;
	/*002c*/ ULONG Reserved[0x1];
	/*0030*/
};

struct _SECTION_OBJECT {
	/*0000*/ void * StartingVa;
	/*0004*/ void * EndingVa;
	/*0008*/ void * Parent;
	/*000c*/ void * LeftChild;
	/*0010*/ void * RightChild;
	/*0014*/ _SEGMENT_OBJECT * Segment;
	/*0018*/
};

struct _SECTION_OBJECT_POINTERS {
	/*0000*/ void * DataSectionObject;
	/*0004*/ void * SharedCacheMap;
	/*0008*/ void * ImageSectionObject;
	/*000c*/
};

struct _SECURITY_CLIENT_CONTEXT {
	/*0000*/ _SECURITY_QUALITY_OF_SERVICE SecurityQos;
	/*000c*/ void * ClientToken;
	/*0010*/ UCHAR DirectlyAccessClientToken;
	/*0011*/ UCHAR DirectAccessEffectiveOnly;
	/*0012*/ UCHAR ServerIsRemote;
	/*0014*/ _TOKEN_CONTROL ClientTokenControl;
	/*003c*/
};

struct _SECURITY_DESCRIPTOR {
	/*0000*/ UCHAR Revision;
	/*0001*/ UCHAR Sbz1;
	/*0002*/ USHORT Control;
	/*0004*/ void * Owner;
	/*0008*/ void * Group;
	/*000c*/ _ACL * Sacl;
	/*0010*/ _ACL * Dacl;
	/*0014*/
};

struct _SECURITY_DESCRIPTOR_RELATIVE {
	/*0000*/ UCHAR Revision;
	/*0001*/ UCHAR Sbz1;
	/*0002*/ USHORT Control;
	/*0004*/ ULONG Owner;
	/*0008*/ ULONG Group;
	/*000c*/ ULONG Sacl;
	/*0010*/ ULONG Dacl;
	/*0014*/
};

enum _SECURITY_IMPERSONATION_LEVEL {
	SecurityAnonymous = 0x0,
	SecurityIdentification = 0x1,
	SecurityImpersonation = 0x2,
	SecurityDelegation = 0x3
};

enum _SECURITY_OPERATION_CODE {
	SetSecurityDescriptor = 0x0,
	QuerySecurityDescriptor = 0x1,
	DeleteSecurityDescriptor = 0x2,
	AssignSecurityDescriptor = 0x3
};

struct _SECURITY_QUALITY_OF_SERVICE {
	/*0000*/ ULONG Length;
	/*0004*/ _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
	/*0008*/ UCHAR ContextTrackingMode;
	/*0009*/ UCHAR EffectiveOnly;
	/*000c*/
};

struct _SECURITY_SUBJECT_CONTEXT {
	/*0000*/ void * ClientToken;
	/*0004*/ _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
	/*0008*/ void * PrimaryToken;
	/*000c*/ void * ProcessAuditId;
	/*0010*/
};

struct _SECURITY_TOKEN_AUDIT_DATA {
	/*0000*/ ULONG Length;
	/*0004*/ ULONG GrantMask;
	/*0008*/ ULONG DenyMask;
	/*000c*/
};

struct _SECURITY_TOKEN_PROXY_DATA {
	/*0000*/ ULONG Length;
	/*0004*/ _PROXY_CLASS ProxyClass;
	/*0008*/ _UNICODE_STRING PathInfo;
	/*0010*/ ULONG ContainerMask;
	/*0014*/ ULONG ObjectMask;
	/*0018*/
};

struct _SEGMENT {
	/*0000*/ _CONTROL_AREA * ControlArea;
	/*0004*/ ULONG TotalNumberOfPtes;
	/*0008*/ ULONG NonExtendedPtes;
	/*000c*/ ULONG WritableUserReferences;
	/*0010*/ ULONGLONG SizeOfSegment;
	/*0018*/ _MMPTE SegmentPteTemplate;
	/*0020*/ ULONG NumberOfCommittedPages;
	/*0024*/ _MMEXTEND_INFO * ExtendInfo;
	/*0028*/ void * SystemImageBase;
	/*002c*/ void * BasedAddress;
	union {
		/*0030*/ ULONG ImageCommitment;
		/*0030*/ _EPROCESS * CreatingProcess;
		/*0034*/
	} u1;
	union {
		/*0034*/ _SECTION_IMAGE_INFORMATION * ImageInformation;
		/*0034*/ void * FirstMappedVa;
		/*0038*/
	} u2;
	/*0038*/ _MMPTE * PrototypePte;
	/*0040*/ _MMPTE ThePtes[0x1];
	/*0048*/
};

struct _SEGMENT_OBJECT {
	/*0000*/ void * BaseAddress;
	/*0004*/ ULONG TotalNumberOfPtes;
	/*0008*/ _LARGE_INTEGER SizeOfSegment;
	/*0010*/ ULONG NonExtendedPtes;
	/*0014*/ ULONG ImageCommitment;
	/*0018*/ _CONTROL_AREA * ControlArea;
	/*001c*/ _SUBSECTION * Subsection;
	/*0020*/ _LARGE_CONTROL_AREA * LargeControlArea;
	/*0024*/ _MMSECTION_FLAGS * MmSectionFlags;
	/*0028*/ _MMSUBSECTION_FLAGS * MmSubSectionFlags;
	/*0030*/
};

struct _SEP_AUDIT_POLICY {
	/*0000*/ _SEP_AUDIT_POLICY_CATEGORIES PolicyElements;
	/*0000*/ _SEP_AUDIT_POLICY_OVERLAY PolicyOverlay;
	/*0000*/ ULONGLONG Overlay;
	/*0008*/
};

struct _SEP_AUDIT_POLICY_CATEGORIES {
	/*0000*/ ULONG System : 04; // 0x0000000f;
	/*0000*/ ULONG Logon : 04; // 0x000000f0;
	/*0000*/ ULONG ObjectAccess : 04; // 0x00000f00;
	/*0000*/ ULONG PrivilegeUse : 04; // 0x0000f000;
	/*0000*/ ULONG DetailedTracking : 04; // 0x000f0000;
	/*0000*/ ULONG PolicyChange : 04; // 0x00f00000;
	/*0000*/ ULONG AccountManagement : 04; // 0x0f000000;
	/*0000*/ ULONG DirectoryServiceAccess : 04; // 0xf0000000;
	/*0004*/ ULONG AccountLogon : 04; // 0x0000000f;
	/*0008*/
};

struct _SEP_AUDIT_POLICY_OVERLAY {
	/*0000*/ ULONGLONG PolicyBits : 36; // 0x0000000fffffffff;
	/*0000*/ ULONGLONG SetBit : 01; // 0x0000001000000000;
	/*0008*/
};

struct _SE_AUDIT_PROCESS_CREATION_INFO {
	/*0000*/ _OBJECT_NAME_INFORMATION * ImageFileName;
	/*0004*/
};

struct _SHARED_CACHE_MAP {
	/*0000*/ SHORT NodeTypeCode;
	/*0002*/ SHORT NodeByteSize;
	/*0004*/ ULONG OpenCount;
	/*0008*/ _LARGE_INTEGER FileSize;
	/*0010*/ _LIST_ENTRY BcbList;
	/*0018*/ _LARGE_INTEGER SectionSize;
	/*0020*/ _LARGE_INTEGER ValidDataLength;
	/*0028*/ _LARGE_INTEGER ValidDataGoal;
	/*0030*/ _VACB * InitialVacbs[0x4];
	/*0040*/ _VACB * * Vacbs;
	/*0044*/ _FILE_OBJECT * FileObject;
	/*0048*/ _VACB * volatile ActiveVacb;
	/*004c*/ void * volatile NeedToZero;
	/*0050*/ ULONG ActivePage;
	/*0054*/ ULONG NeedToZeroPage;
	/*0058*/ ULONG ActiveVacbSpinLock;
	/*005c*/ ULONG VacbActiveCount;
	/*0060*/ ULONG DirtyPages;
	/*0064*/ _LIST_ENTRY SharedCacheMapLinks;
	/*006c*/ ULONG Flags;
	/*0070*/ LONG Status;
	/*0074*/ _MBCB * Mbcb;
	/*0078*/ void * Section;
	/*007c*/ _KEVENT * CreateEvent;
	/*0080*/ _KEVENT * WaitOnActiveCount;
	/*0084*/ ULONG PagesToWrite;
	/*0088*/ LONGLONG BeyondLastFlush;
	/*0090*/ _CACHE_MANAGER_CALLBACKS * Callbacks;
	/*0094*/ void * LazyWriteContext;
	/*0098*/ _LIST_ENTRY PrivateList;
	/*00a0*/ void * LogHandle;
	/*00a4*/ void (* FlushToLsnRoutine)( void * , _LARGE_INTEGER );
	/*00a8*/ ULONG DirtyPageThreshold;
	/*00ac*/ ULONG LazyWritePassCount;
	/*00b0*/ _CACHE_UNINITIALIZE_EVENT * UninitializeEvent;
	/*00b4*/ _VACB * NeedToZeroVacb;
	/*00b8*/ ULONG BcbSpinLock;
	/*00bc*/ void * Reserved;
	/*00c0*/ _KEVENT Event;
	/*00d0*/ _EX_PUSH_LOCK VacbPushLock;
	/*00d8*/ _PRIVATE_CACHE_MAP PrivateCacheMap;
	/*0130*/
};

struct _SID {
	/*0000*/ UCHAR Revision;
	/*0001*/ UCHAR SubAuthorityCount;
	/*0002*/ _SID_IDENTIFIER_AUTHORITY IdentifierAuthority;
	/*0008*/ ULONG SubAuthority[0x1];
	/*000c*/
};

struct _SID_AND_ATTRIBUTES {
	/*0000*/ void * Sid;
	/*0004*/ ULONG Attributes;
	/*0008*/
};

struct _SID_IDENTIFIER_AUTHORITY {
	/*0000*/ UCHAR Value[0x6];
	/*0006*/
};

struct _SINGLE_LIST_ENTRY {
	/*0000*/ _SINGLE_LIST_ENTRY * Next;
	/*0004*/
};

union _SLIST_HEADER {
	/*0000*/ ULONGLONG Alignment;
	/*0000*/ _SINGLE_LIST_ENTRY Next;
	/*0004*/ USHORT Depth;
	/*0006*/ USHORT Sequence;
	/*0008*/
};

struct _STRING {
	/*0000*/ USHORT Length;
	/*0002*/ USHORT MaximumLength;
	/*0004*/ CHAR * Buffer;
	/*0008*/
};

struct _SUBSECTION {
	/*0000*/ _CONTROL_AREA * ControlArea;
	union {
		/*0004*/ ULONG LongFlags;
		/*0004*/ _MMSUBSECTION_FLAGS SubsectionFlags;
		/*0008*/
	} u;
	/*0008*/ ULONG StartingSector;
	/*000c*/ ULONG NumberOfFullSectors;
	/*0010*/ _MMPTE * SubsectionBase;
	/*0014*/ ULONG UnusedPtes;
	/*0018*/ ULONG PtesInSubsection;
	/*001c*/ _SUBSECTION * NextSubsection;
	/*0020*/
};

struct _SUPPORTED_RANGE {
	/*0000*/ _SUPPORTED_RANGE * Next;
	/*0004*/ ULONG SystemAddressSpace;
	/*0008*/ LONGLONG SystemBase;
	/*0010*/ LONGLONG Base;
	/*0018*/ LONGLONG Limit;
	/*0020*/
};

struct _SUPPORTED_RANGES {
	/*0000*/ USHORT Version;
	/*0002*/ UCHAR Sorted;
	/*0003*/ UCHAR Reserved;
	/*0004*/ ULONG NoIO;
	/*0008*/ _SUPPORTED_RANGE IO;
	/*0028*/ ULONG NoMemory;
	/*0030*/ _SUPPORTED_RANGE Memory;
	/*0050*/ ULONG NoPrefetchMemory;
	/*0058*/ _SUPPORTED_RANGE PrefetchMemory;
	/*0078*/ ULONG NoDma;
	/*0080*/ _SUPPORTED_RANGE Dma;
	/*00a0*/
};

struct _SYSPTES_HEADER {
	/*0000*/ _LIST_ENTRY ListHead;
	/*0008*/ ULONG Count;
	/*000c*/
};

struct _SYSTEM_POWER_POLICY {
	/*0000*/ ULONG Revision;
	/*0004*/ POWER_ACTION_POLICY PowerButton;
	/*0010*/ POWER_ACTION_POLICY SleepButton;
	/*001c*/ POWER_ACTION_POLICY LidClose;
	/*0028*/ _SYSTEM_POWER_STATE LidOpenWake;
	/*002c*/ ULONG Reserved;
	/*0030*/ POWER_ACTION_POLICY Idle;
	/*003c*/ ULONG IdleTimeout;
	/*0040*/ UCHAR IdleSensitivity;
	/*0041*/ UCHAR DynamicThrottle;
	/*0042*/ UCHAR Spare2[0x2];
	/*0044*/ _SYSTEM_POWER_STATE MinSleep;
	/*0048*/ _SYSTEM_POWER_STATE MaxSleep;
	/*004c*/ _SYSTEM_POWER_STATE ReducedLatencySleep;
	/*0050*/ ULONG WinLogonFlags;
	/*0054*/ ULONG Spare3;
	/*0058*/ ULONG DozeS4Timeout;
	/*005c*/ ULONG BroadcastCapacityResolution;
	/*0060*/ SYSTEM_POWER_LEVEL DischargePolicy[0x4];
	/*00c0*/ ULONG VideoTimeout;
	/*00c4*/ UCHAR VideoDimDisplay;
	/*00c8*/ ULONG VideoReserved[0x3];
	/*00d4*/ ULONG SpindownTimeout;
	/*00d8*/ UCHAR OptimizeForPower;
	/*00d9*/ UCHAR FanThrottleTolerance;
	/*00da*/ UCHAR ForcedThrottle;
	/*00db*/ UCHAR MinThrottle;
	/*00dc*/ POWER_ACTION_POLICY OverThrottled;
	/*00e8*/
};

enum _SYSTEM_POWER_STATE {
	PowerSystemUnspecified = 0x0,
	PowerSystemWorking = 0x1,
	PowerSystemSleeping1 = 0x2,
	PowerSystemSleeping2 = 0x3,
	PowerSystemSleeping3 = 0x4,
	PowerSystemHibernate = 0x5,
	PowerSystemShutdown = 0x6,
	PowerSystemMaximum = 0x7
};

struct _TEB {
	/*0000*/ _NT_TIB NtTib;
	/*001c*/ void * EnvironmentPointer;
	/*0020*/ _CLIENT_ID ClientId;
	/*0028*/ void * ActiveRpcHandle;
	/*002c*/ void * ThreadLocalStoragePointer;
	/*0030*/ _PEB * ProcessEnvironmentBlock;
	/*0034*/ ULONG LastErrorValue;
	/*0038*/ ULONG CountOfOwnedCriticalSections;
	/*003c*/ void * CsrClientThread;
	/*0040*/ void * Win32ThreadInfo;
	/*0044*/ ULONG User32Reserved[0x1a];
	/*00ac*/ ULONG UserReserved[0x5];
	/*00c0*/ void * WOW32Reserved;
	/*00c4*/ ULONG CurrentLocale;
	/*00c8*/ ULONG FpSoftwareStatusRegister;
	/*00cc*/ void * SystemReserved1[0x36];
	/*01a4*/ LONG ExceptionCode;
	/*01a8*/ _ACTIVATION_CONTEXT_STACK ActivationContextStack;
	/*01bc*/ UCHAR SpareBytes1[0x18];
	/*01d4*/ _GDI_TEB_BATCH GdiTebBatch;
	/*06b4*/ _CLIENT_ID RealClientId;
	/*06bc*/ void * GdiCachedProcessHandle;
	/*06c0*/ ULONG GdiClientPID;
	/*06c4*/ ULONG GdiClientTID;
	/*06c8*/ void * GdiThreadLocalInfo;
	/*06cc*/ ULONG Win32ClientInfo[0x3e];
	/*07c4*/ void * glDispatchTable[0xe9];
	/*0b68*/ ULONG glReserved1[0x1d];
	/*0bdc*/ void * glReserved2;
	/*0be0*/ void * glSectionInfo;
	/*0be4*/ void * glSection;
	/*0be8*/ void * glTable;
	/*0bec*/ void * glCurrentRC;
	/*0bf0*/ void * glContext;
	/*0bf4*/ ULONG LastStatusValue;
	/*0bf8*/ _UNICODE_STRING StaticUnicodeString;
	/*0c00*/ USHORT StaticUnicodeBuffer[0x105];
	/*0e0c*/ void * DeallocationStack;
	/*0e10*/ void * TlsSlots[0x40];
	/*0f10*/ _LIST_ENTRY TlsLinks;
	/*0f18*/ void * Vdm;
	/*0f1c*/ void * ReservedForNtRpc;
	/*0f20*/ void * DbgSsReserved[0x2];
	/*0f28*/ ULONG HardErrorsAreDisabled;
	/*0f2c*/ void * Instrumentation[0x10];
	/*0f6c*/ void * WinSockData;
	/*0f70*/ ULONG GdiBatchCount;
	/*0f74*/ UCHAR InDbgPrint;
	/*0f75*/ UCHAR FreeStackOnTermination;
	/*0f76*/ UCHAR HasFiberData;
	/*0f77*/ UCHAR IdealProcessor;
	/*0f78*/ ULONG Spare3;
	/*0f7c*/ void * ReservedForPerf;
	/*0f80*/ void * ReservedForOle;
	/*0f84*/ ULONG WaitingOnLoaderLock;
	/*0f88*/ _Wx86ThreadState Wx86Thread;
	/*0f94*/ void * * TlsExpansionSlots;
	/*0f98*/ ULONG ImpersonationLocale;
	/*0f9c*/ ULONG IsImpersonating;
	/*0fa0*/ void * NlsCache;
	/*0fa4*/ void * pShimData;
	/*0fa8*/ ULONG HeapVirtualAffinity;
	/*0fac*/ void * CurrentTransactionHandle;
	/*0fb0*/ _TEB_ACTIVE_FRAME * ActiveFrame;
	/*0fb4*/ UCHAR SafeThunkCall;
	/*0fb5*/ UCHAR BooleanSpare[0x3];
	/*0fb8*/
};

struct _TEB_ACTIVE_FRAME {
	/*0000*/ ULONG Flags;
	/*0004*/ _TEB_ACTIVE_FRAME * Previous;
	/*0008*/ _TEB_ACTIVE_FRAME_CONTEXT const * Context;
	/*000c*/
};

struct _TEB_ACTIVE_FRAME_CONTEXT {
	/*0000*/ ULONG Flags;
	/*0004*/ CHAR const * FrameName;
	/*0008*/
};

struct _TERMINATION_PORT {
	/*0000*/ _TERMINATION_PORT * Next;
	/*0004*/ void * Port;
	/*0008*/
};

struct _THERMAL_INFORMATION {
	/*0000*/ ULONG ThermalStamp;
	/*0004*/ ULONG ThermalConstant1;
	/*0008*/ ULONG ThermalConstant2;
	/*000c*/ ULONG Processors;
	/*0010*/ ULONG SamplingPeriod;
	/*0014*/ ULONG CurrentTemperature;
	/*0018*/ ULONG PassiveTripPoint;
	/*001c*/ ULONG CriticalTripPoint;
	/*0020*/ UCHAR ActiveTripPointCount;
	/*0024*/ ULONG ActiveTripPoint[0xa];
	/*004c*/
};

struct _TOKEN {
	/*0000*/ _TOKEN_SOURCE TokenSource;
	/*0010*/ _LUID TokenId;
	/*0018*/ _LUID AuthenticationId;
	/*0020*/ _LUID ParentTokenId;
	/*0028*/ _LARGE_INTEGER ExpirationTime;
	/*0030*/ _ERESOURCE * TokenLock;
	/*0038*/ _SEP_AUDIT_POLICY AuditPolicy;
	/*0040*/ _LUID ModifiedId;
	/*0048*/ ULONG SessionId;
	/*004c*/ ULONG UserAndGroupCount;
	/*0050*/ ULONG RestrictedSidCount;
	/*0054*/ ULONG PrivilegeCount;
	/*0058*/ ULONG VariableLength;
	/*005c*/ ULONG DynamicCharged;
	/*0060*/ ULONG DynamicAvailable;
	/*0064*/ ULONG DefaultOwnerIndex;
	/*0068*/ _SID_AND_ATTRIBUTES * UserAndGroups;
	/*006c*/ _SID_AND_ATTRIBUTES * RestrictedSids;
	/*0070*/ void * PrimaryGroup;
	/*0074*/ _LUID_AND_ATTRIBUTES * Privileges;
	/*0078*/ ULONG * DynamicPart;
	/*007c*/ _ACL * DefaultDacl;
	/*0080*/ _TOKEN_TYPE TokenType;
	/*0084*/ _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
	/*0088*/ ULONG TokenFlags;
	/*008c*/ UCHAR TokenInUse;
	/*0090*/ _SECURITY_TOKEN_PROXY_DATA * ProxyData;
	/*0094*/ _SECURITY_TOKEN_AUDIT_DATA * AuditData;
	/*0098*/ _LUID OriginatingLogonSession;
	/*00a0*/ ULONG VariablePart;
	/*00a8*/
};

struct _TOKEN_CONTROL {
	/*0000*/ _LUID TokenId;
	/*0008*/ _LUID AuthenticationId;
	/*0010*/ _LUID ModifiedId;
	/*0018*/ _TOKEN_SOURCE TokenSource;
	/*0028*/
};

struct _TOKEN_SOURCE {
	/*0000*/ CHAR SourceName[0x8];
	/*0008*/ _LUID SourceIdentifier;
	/*0010*/
};

enum _TOKEN_TYPE {
	TokenPrimary = 0x1,
	TokenImpersonation = 0x2
};

struct _TRACE_ENABLE_FLAG_EXTENSION {
	/*0000*/ USHORT Offset;
	/*0002*/ UCHAR Length;
	/*0003*/ UCHAR Flag;
	/*0004*/
};

union _ULARGE_INTEGER {
	/*0000*/ ULONG LowPart;
	/*0004*/ ULONG HighPart;
	struct {
		/*0000*/ ULONG LowPart;
		/*0004*/ ULONG HighPart;
		/*0008*/
	} u;
	/*0000*/ ULONGLONG QuadPart;
	/*0008*/
};

struct _UNICODE_STRING {
	/*0000*/ USHORT Length;
	/*0002*/ USHORT MaximumLength;
	/*0004*/ USHORT * Buffer;
	/*0008*/
};

struct _VACB {
	/*0000*/ void * BaseAddress;
	/*0004*/ _SHARED_CACHE_MAP * SharedCacheMap;
	union {
		/*0008*/ _LARGE_INTEGER FileOffset;
		/*0008*/ USHORT ActiveCount;
		/*0010*/
	} Overlay;
	/*0010*/ _LIST_ENTRY LruList;
	/*0018*/
};

struct _VACB_LEVEL_REFERENCE {
	/*0000*/ LONG Reference;
	/*0004*/ LONG SpecialReference;
	/*0008*/
};

struct _VI_DEADLOCK_GLOBALS {
	/*0000*/ ULONG Nodes[0x2];
	/*0008*/ ULONG Resources[0x2];
	/*0010*/ ULONG Threads[0x2];
	/*0018*/ LONGLONG TimeAcquire;
	/*0020*/ LONGLONG TimeRelease;
	/*0028*/ ULONG BytesAllocated;
	/*002c*/ _LIST_ENTRY * ResourceDatabase;
	/*0030*/ _LIST_ENTRY * ThreadDatabase;
	/*0034*/ ULONG AllocationFailures;
	/*0038*/ ULONG NodesTrimmedBasedOnAge;
	/*003c*/ ULONG NodesTrimmedBasedOnCount;
	/*0040*/ ULONG NodesSearched;
	/*0044*/ ULONG MaxNodesSearched;
	/*0048*/ ULONG SequenceNumber;
	/*004c*/ ULONG RecursionDepthLimit;
	/*0050*/ ULONG SearchedNodesLimit;
	/*0054*/ ULONG DepthLimitHits;
	/*0058*/ ULONG SearchLimitHits;
	/*005c*/ ULONG ABC_ACB_Skipped;
	/*0060*/ _LIST_ENTRY FreeResourceList;
	/*0068*/ _LIST_ENTRY FreeThreadList;
	/*0070*/ _LIST_ENTRY FreeNodeList;
	/*0078*/ ULONG FreeResourceCount;
	/*007c*/ ULONG FreeThreadCount;
	/*0080*/ ULONG FreeNodeCount;
	/*0084*/ void * Instigator;
	/*0088*/ ULONG NumberOfParticipants;
	/*008c*/ _VI_DEADLOCK_NODE * Participant[0x20];
	/*010c*/ ULONG CacheReductionInProgress;
	/*0110*/
};

struct _VI_DEADLOCK_NODE {
	/*0000*/ _VI_DEADLOCK_NODE * Parent;
	/*0004*/ _LIST_ENTRY ChildrenList;
	/*000c*/ _LIST_ENTRY SiblingsList;
	/*0014*/ _LIST_ENTRY ResourceList;
	/*0014*/ _LIST_ENTRY FreeListEntry;
	/*001c*/ _VI_DEADLOCK_RESOURCE * Root;
	/*0020*/ _VI_DEADLOCK_THREAD * ThreadEntry;
	/*0024*/ ULONG Active : 01; // 0x00000001;
	/*0024*/ ULONG OnlyTryAcquireUsed : 01; // 0x00000002;
	/*0024*/ ULONG SequenceNumber : 30; // 0xfffffffc;
	/*0028*/ void * StackTrace[0x8];
	/*0048*/ void * ParentStackTrace[0x8];
	/*0068*/
};

struct _VI_DEADLOCK_RESOURCE {
	/*0000*/ _VI_DEADLOCK_RESOURCE_TYPE Type;
	/*0004*/ ULONG NodeCount : 16; // 0x0000ffff;
	/*0004*/ ULONG RecursionCount : 16; // 0xffff0000;
	/*0008*/ void * ResourceAddress;
	/*000c*/ _VI_DEADLOCK_THREAD * ThreadOwner;
	/*0010*/ _LIST_ENTRY ResourceList;
	/*0018*/ _LIST_ENTRY HashChainList;
	/*0018*/ _LIST_ENTRY FreeListEntry;
	/*0020*/ void * StackTrace[0x8];
	/*0040*/ void * LastAcquireTrace[0x8];
	/*0060*/ void * LastReleaseTrace[0x8];
	/*0080*/
};

enum _VI_DEADLOCK_RESOURCE_TYPE {
	VfDeadlockUnknown = 0x0,
	VfDeadlockMutex = 0x1,
	VfDeadlockFastMutex = 0x2,
	VfDeadlockFastMutexUnsafe = 0x3,
	VfDeadlockSpinLock = 0x4,
	VfDeadlockQueuedSpinLock = 0x5,
	VfDeadlockTypeMaximum = 0x6
};

struct _VI_DEADLOCK_THREAD {
	/*0000*/ _KTHREAD * Thread;
	/*0004*/ _VI_DEADLOCK_NODE * CurrentSpinNode;
	/*0008*/ _VI_DEADLOCK_NODE * CurrentOtherNode;
	/*000c*/ _LIST_ENTRY ListEntry;
	/*000c*/ _LIST_ENTRY FreeListEntry;
	/*0014*/ ULONG NodeCount;
	/*0018*/ ULONG PagingCount;
	/*001c*/
};

struct _VI_POOL_ENTRY {
	/*0000*/ _VI_POOL_ENTRY_INUSE InUse;
	/*0000*/ ULONG FreeListNext;
	/*0010*/
};

struct _VI_POOL_ENTRY_INUSE {
	/*0000*/ void * VirtualAddress;
	/*0004*/ void * CallingAddress;
	/*0008*/ ULONG NumberOfBytes;
	/*000c*/ ULONG Tag;
	/*0010*/
};

struct _VPB {
	/*0000*/ SHORT Type;
	/*0002*/ SHORT Size;
	/*0004*/ USHORT Flags;
	/*0006*/ USHORT VolumeLabelLength;
	/*0008*/ _DEVICE_OBJECT * DeviceObject;
	/*000c*/ _DEVICE_OBJECT * RealDevice;
	/*0010*/ ULONG SerialNumber;
	/*0014*/ ULONG ReferenceCount;
	/*0018*/ USHORT VolumeLabel[0x20];
	/*0058*/
};

struct _WAIT_CONTEXT_BLOCK {
	/*0000*/ _KDEVICE_QUEUE_ENTRY WaitQueueEntry;
	/*0010*/ _IO_ALLOCATION_ACTION (* DeviceRoutine)( _DEVICE_OBJECT * , _IRP * , void * , void * );
	/*0014*/ void * DeviceContext;
	/*0018*/ ULONG NumberOfMapRegisters;
	/*001c*/ void * DeviceObject;
	/*0020*/ void * CurrentIrp;
	/*0024*/ _KDPC * BufferChainingDpc;
	/*0028*/
};

struct _WMI_BUFFER_HEADER {
	/*0000*/ _WNODE_HEADER Wnode;
	/*0000*/ ULONGLONG Reserved1;
	/*0008*/ ULONGLONG Reserved2;
	/*0010*/ _LARGE_INTEGER Reserved3;
	/*0018*/ void * Alignment;
	/*001c*/ _SINGLE_LIST_ENTRY SlistEntry;
	/*0018*/ _LIST_ENTRY Entry;
	/*0000*/ LONG ReferenceCount;
	/*0004*/ ULONG SavedOffset;
	/*0008*/ ULONG CurrentOffset;
	/*000c*/ ULONG UsePerfClock;
	/*0010*/ _LARGE_INTEGER TimeStamp;
	/*0018*/ _GUID Guid;
	/*0028*/ _WMI_CLIENT_CONTEXT ClientContext;
	/*002c*/ _WMI_BUFFER_STATE State;
	/*002c*/ ULONG Flags;
	/*0030*/ ULONG Offset;
	/*0034*/ ULONG EventsLost;
	/*0038*/ _GUID InstanceGuid;
	/*0038*/ void * LoggerContext;
	/*003c*/ _SINGLE_LIST_ENTRY GlobalEntry;
	/*0048*/
};

struct _WMI_BUFFER_STATE {
	/*0000*/ ULONG Free : 01; // 0x00000001;
	/*0000*/ ULONG InUse : 01; // 0x00000002;
	/*0000*/ ULONG Flush : 01; // 0x00000004;
	/*0000*/ ULONG Unused : 29; // 0xfffffff8;
	/*0004*/
};

struct _WMI_CLIENT_CONTEXT {
	/*0000*/ UCHAR ProcessorNumber;
	/*0001*/ UCHAR Alignment;
	/*0002*/ USHORT LoggerId;
	/*0004*/
};

struct _WMI_LOGGER_CONTEXT {
	/*0000*/ ULONG BufferSpinLock;
	/*0008*/ _LARGE_INTEGER StartTime;
	/*0010*/ void * LogFileHandle;
	/*0014*/ _KSEMAPHORE LoggerSemaphore;
	/*0028*/ _ETHREAD * LoggerThread;
	/*002c*/ _KEVENT LoggerEvent;
	/*003c*/ _KEVENT FlushEvent;
	/*004c*/ LONG LoggerStatus;
	/*0050*/ ULONG LoggerId;
	/*0054*/ LONG BuffersAvailable;
	/*0058*/ ULONG UsePerfClock;
	/*005c*/ ULONG WriteFailureLimit;
	/*0060*/ ULONG BuffersDirty;
	/*0064*/ ULONG BuffersInUse;
	/*0068*/ ULONG SwitchingInProgress;
	/*0070*/ _SLIST_HEADER FreeList;
	/*0078*/ _SLIST_HEADER FlushList;
	/*0080*/ _SLIST_HEADER GlobalList;
	/*0088*/ _SLIST_HEADER * ProcessorBuffers;
	/*008c*/ _UNICODE_STRING LoggerName;
	/*0094*/ _UNICODE_STRING LogFileName;
	/*009c*/ _UNICODE_STRING LogFilePattern;
	/*00a4*/ _UNICODE_STRING NewLogFileName;
	/*00ac*/ UCHAR * EndPageMarker;
	/*00b0*/ LONG CollectionOn;
	/*00b4*/ ULONG KernelTraceOn;
	/*00b8*/ LONG PerfLogInTransition;
	/*00bc*/ ULONG RequestFlag;
	/*00c0*/ ULONG EnableFlags;
	/*00c4*/ ULONG MaximumFileSize;
	/*00c8*/ ULONG LoggerMode;
	/*00c8*/ _WMI_LOGGER_MODE LoggerModeFlags;
	/*00cc*/ ULONG LastFlushedBuffer;
	/*00d0*/ ULONG RefCount;
	/*00d4*/ ULONG FlushTimer;
	/*00d8*/ _LARGE_INTEGER FirstBufferOffset;
	/*00e0*/ _LARGE_INTEGER ByteOffset;
	/*00e8*/ _LARGE_INTEGER BufferAgeLimit;
	/*00f0*/ ULONG MaximumBuffers;
	/*00f4*/ ULONG MinimumBuffers;
	/*00f8*/ ULONG EventsLost;
	/*00fc*/ ULONG BuffersWritten;
	/*0100*/ ULONG LogBuffersLost;
	/*0104*/ ULONG RealTimeBuffersLost;
	/*0108*/ ULONG BufferSize;
	/*010c*/ LONG NumberOfBuffers;
	/*0110*/ LONG * SequencePtr;
	/*0114*/ _GUID InstanceGuid;
	/*0124*/ void * LoggerHeader;
	/*0128*/ LONGLONG (* GetCpuClock)();
	/*012c*/ _SECURITY_CLIENT_CONTEXT ClientSecurityContext;
	/*0168*/ void * LoggerExtension;
	/*016c*/ LONG ReleaseQueue;
	/*0170*/ _TRACE_ENABLE_FLAG_EXTENSION EnableFlagExtension;
	/*0174*/ ULONG LocalSequence;
	/*0178*/ ULONG MaximumIrql;
	/*017c*/ ULONG * EnableFlagArray;
	/*0180*/ _KMUTANT LoggerMutex;
	/*01a0*/ LONG MutexCount;
	/*01a4*/ ULONG FileCounter;
	/*01a8*/ void (* BufferCallback)( _WMI_BUFFER_HEADER * , void * );
	/*01ac*/ void * CallbackContext;
	/*01b0*/ _POOL_TYPE PoolType;
	/*01b8*/ _LARGE_INTEGER ReferenceSystemTime;
	/*01c0*/ _LARGE_INTEGER ReferenceTimeStamp;
	/*01c8*/
};

struct _WMI_LOGGER_MODE {
	/*0000*/ ULONG SequentialFile : 01; // 0x00000001;
	/*0000*/ ULONG CircularFile : 01; // 0x00000002;
	/*0000*/ ULONG AppendFile : 01; // 0x00000004;
	/*0000*/ ULONG Unused1 : 05; // 0x000000f8;
	/*0000*/ ULONG RealTime : 01; // 0x00000100;
	/*0000*/ ULONG DelayOpenFile : 01; // 0x00000200;
	/*0000*/ ULONG BufferOnly : 01; // 0x00000400;
	/*0000*/ ULONG PrivateLogger : 01; // 0x00000800;
	/*0000*/ ULONG AddHeader : 01; // 0x00001000;
	/*0000*/ ULONG UseExisting : 01; // 0x00002000;
	/*0000*/ ULONG UseGlobalSequence : 01; // 0x00004000;
	/*0000*/ ULONG UseLocalSequence : 01; // 0x00008000;
	/*0000*/ ULONG Unused2 : 16; // 0xffff0000;
	/*0004*/
};

struct _WNODE_HEADER {
	/*0000*/ ULONG BufferSize;
	/*0004*/ ULONG ProviderId;
	/*0008*/ ULONGLONG HistoricalContext;
	/*0008*/ ULONG Version;
	/*000c*/ ULONG Linkage;
	/*0010*/ ULONG CountLost;
	/*0010*/ void * KernelHandle;
	/*0010*/ _LARGE_INTEGER TimeStamp;
	/*0018*/ _GUID Guid;
	/*0028*/ ULONG ClientContext;
	/*002c*/ ULONG Flags;
	/*0030*/
};

struct _WORK_QUEUE_ITEM {
	/*0000*/ _LIST_ENTRY List;
	/*0008*/ void (* WorkerRoutine)( void * );
	/*000c*/ void * Parameter;
	/*0010*/
};

struct _Wx86ThreadState {
	/*0000*/ ULONG * CallBx86Eip;
	/*0004*/ void * DeallocationCpu;
	/*0008*/ UCHAR UseKnownWx86Dll;
	/*0009*/ CHAR OleStubInvoked;
	/*000c*/
};

struct _X86_DBGKD_CONTROL_SET {
	/*0000*/ ULONG TraceFlag;
	/*0004*/ ULONG Dr7;
	/*0008*/ ULONG CurrentSymbolStart;
	/*000c*/ ULONG CurrentSymbolEnd;
	/*0010*/
};

struct _flags {
	/*0000*/ UCHAR Removable;
	/*0001*/
};

union _u {
	/*0000*/ _CM_KEY_NODE KeyNode;
	/*0000*/ _CM_KEY_VALUE KeyValue;
	/*0000*/ _CM_KEY_SECURITY KeySecurity;
	/*0000*/ _CM_KEY_INDEX KeyIndex;
	/*0000*/ _CM_BIG_DATA ValueData;
	/*0000*/ ULONG KeyList[0x1];
	/*0000*/ USHORT KeyString[0x1];
	/*0050*/
};
