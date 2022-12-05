
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
	BusQueryDeviceSerialNumber = 0x4,
	BusQueryContainerID = 0x5
};

enum DEVICE_TEXT_TYPE {
	DeviceTextDescription = 0x0,
	DeviceTextLocationInformation = 0x1
};

enum DISPLAYCONFIG_SCANLINE_ORDERING {
	DISPLAYCONFIG_SCANLINE_ORDERING_UNSPECIFIED = 0x0,
	DISPLAYCONFIG_SCANLINE_ORDERING_PROGRESSIVE = 0x1,
	DISPLAYCONFIG_SCANLINE_ORDERING_INTERLACED = 0x2,
	DISPLAYCONFIG_SCANLINE_ORDERING_INTERLACED_UPPERFIELDFIRST = 0x2,
	DISPLAYCONFIG_SCANLINE_ORDERING_INTERLACED_LOWERFIELDFIRST = 0x3,
	DISPLAYCONFIG_SCANLINE_ORDERING_FORCE_UINT32 = 0xffffffff
};

enum JOB_OBJECT_IO_RATE_CONTROL_FLAGS {
	JOB_OBJECT_IO_RATE_CONTROL_ENABLE = 0x1,
	JOB_OBJECT_IO_RATE_CONTROL_STANDALONE_VOLUME = 0x2,
	JOB_OBJECT_IO_RATE_CONTROL_VALID_FLAGS = 0x3
};

enum JOB_OBJECT_NET_RATE_CONTROL_FLAGS {
	JOB_OBJECT_NET_RATE_CONTROL_ENABLE = 0x1,
	JOB_OBJECT_NET_RATE_CONTROL_MAX_BANDWIDTH = 0x2,
	JOB_OBJECT_NET_RATE_CONTROL_DSCP_TAG = 0x4,
	JOB_OBJECT_NET_RATE_CONTROL_VALID_FLAGS = 0x7
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

enum MCA_EXCEPTION_TYPE {
	HAL_MCE_RECORD = 0x0,
	HAL_MCA_RECORD = 0x1
};

enum POWER_ACTION {
	PowerActionNone = 0x0,
	PowerActionReserved = 0x1,
	PowerActionSleep = 0x2,
	PowerActionHibernate = 0x3,
	PowerActionShutdown = 0x4,
	PowerActionShutdownReset = 0x5,
	PowerActionShutdownOff = 0x6,
	PowerActionWarmEject = 0x7,
	PowerActionDisplayOff = 0x8
};

enum PPM_IDLE_BUCKET_TIME_TYPE {
	PpmIdleBucketTimeInQpc = 0x0,
	PpmIdleBucketTimeIn100ns = 0x1,
	PpmIdleBucketTimeMaximum = 0x2
};

enum PS_CREATE_STATE {
	PsCreateInitialState = 0x0,
	PsCreateFailOnFileOpen = 0x1,
	PsCreateFailOnSectionCreate = 0x2,
	PsCreateFailExeFormat = 0x3,
	PsCreateFailMachineMismatch = 0x4,
	PsCreateFailExeName = 0x5,
	PsCreateSuccess = 0x6,
	PsCreateMaximumStates = 0x7
};

union RTLP_HP_LFH_PERF_FLAGS {
	/*0000*/ ULONG HotspotDetection : 01; // 0x00000001;
	/*0000*/ ULONG HotspotFullCommit : 01; // 0x00000002;
	/*0000*/ ULONG ActiveSubsegment : 01; // 0x00000004;
	/*0000*/ ULONG SmallerSubsegment : 01; // 0x00000008;
	/*0000*/ ULONG SingleAffinitySlot : 01; // 0x00000010;
	/*0000*/ ULONG ApplyLfhDecommitPolicy : 01; // 0x00000020;
	/*0000*/ ULONG EnableGarbageCollection : 01; // 0x00000040;
	/*0000*/ ULONG AllFlags;
	/*0004*/
};

enum ReplacesCorHdrNumericDefines {
	COMIMAGE_FLAGS_ILONLY = 0x1,
	COMIMAGE_FLAGS_32BITREQUIRED = 0x2,
	COMIMAGE_FLAGS_IL_LIBRARY = 0x4,
	COMIMAGE_FLAGS_STRONGNAMESIGNED = 0x8,
	COMIMAGE_FLAGS_NATIVE_ENTRYPOINT = 0x10,
	COMIMAGE_FLAGS_TRACKDEBUGDATA = 0x10000,
	COMIMAGE_FLAGS_32BITPREFERRED = 0x20000,
	COR_VERSION_MAJOR_V2 = 0x2,
	COR_VERSION_MAJOR = 0x2,
	COR_VERSION_MINOR = 0x5,
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
	COR_VTABLE_FROM_UNMANAGED_RETAIN_APPDOMAIN = 0x8,
	COR_VTABLE_CALL_MOST_DERIVED = 0x10,
	IMAGE_COR_EATJ_THUNK_SIZE = 0x20,
	MAX_CLASS_NAME = 0x400,
	MAX_PACKAGE_NAME = 0x400
};

enum SE_WS_APPX_SIGNATURE_ORIGIN {
	SE_WS_APPX_SIGNATURE_ORIGIN_NOT_VALIDATED = 0x0,
	SE_WS_APPX_SIGNATURE_ORIGIN_UNKNOWN = 0x1,
	SE_WS_APPX_SIGNATURE_ORIGIN_APPSTORE = 0x2,
	SE_WS_APPX_SIGNATURE_ORIGIN_WINDOWS = 0x3,
	SE_WS_APPX_SIGNATURE_ORIGIN_ENTERPRISE = 0x4
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
	/*0011*/ UCHAR FastSystemS4;
	/*0012*/ UCHAR Hiberboot;
	/*0013*/ UCHAR WakeAlarmPresent;
	/*0014*/ UCHAR AoAc;
	/*0015*/ UCHAR DiskSpinDown;
	/*0016*/ UCHAR HiberFileType;
	/*0017*/ UCHAR AoAcConnectivitySupported;
	/*0018*/ UCHAR spare3[0x6];
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

struct _ACCESS_REASONS {
	/*0000*/ ULONG Data[0x20];
	/*0080*/
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
	/*0020*/ _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext;
	/*0040*/ void * SecurityDescriptor;
	/*0048*/ void * AuxData;
	union {
		/*0050*/ _INITIAL_PRIVILEGE_SET InitialPrivilegeSet;
		/*0050*/ _PRIVILEGE_SET PrivilegeSet;
		/*007c*/
	} Privileges;
	/*007c*/ UCHAR AuditPrivileges;
	/*0080*/ _UNICODE_STRING ObjectName;
	/*0090*/ _UNICODE_STRING ObjectTypeName;
	/*00a0*/
};

struct _ACL {
	/*0000*/ UCHAR AclRevision;
	/*0001*/ UCHAR Sbz1;
	/*0002*/ USHORT AclSize;
	/*0004*/ USHORT AceCount;
	/*0006*/ USHORT Sbz2;
	/*0008*/
};

struct _ACTIVATION_CONTEXT;

struct _ACTIVATION_CONTEXT_DATA;

struct _ACTIVATION_CONTEXT_STACK {
	/*0000*/ _RTL_ACTIVATION_CONTEXT_STACK_FRAME * ActiveFrame;
	/*0008*/ _LIST_ENTRY FrameListCache;
	/*0018*/ ULONG Flags;
	/*001c*/ ULONG NextCookieSequenceNumber;
	/*0020*/ ULONG StackId;
	/*0028*/
};

struct _ACTIVATION_CONTEXT_STACK32 {
	/*0000*/ ULONG ActiveFrame;
	/*0004*/ LIST_ENTRY32 FrameListCache;
	/*000c*/ ULONG Flags;
	/*0010*/ ULONG NextCookieSequenceNumber;
	/*0014*/ ULONG StackId;
	/*0018*/
};

struct _ACTIVATION_CONTEXT_STACK64 {
	/*0000*/ ULONGLONG ActiveFrame;
	/*0008*/ LIST_ENTRY64 FrameListCache;
	/*0018*/ ULONG Flags;
	/*001c*/ ULONG NextCookieSequenceNumber;
	/*0020*/ ULONG StackId;
	/*0028*/
};

struct _ALPC_PROCESS_CONTEXT {
	/*0000*/ _EX_PUSH_LOCK Lock;
	/*0008*/ _LIST_ENTRY ViewListHead;
	/*0018*/ ULONGLONG volatile PagedPoolQuotaCache;
	/*0020*/
};

enum _ALTERNATIVE_ARCHITECTURE_TYPE {
	StandardDesign = 0x0,
	NEC98x86 = 0x1,
	EndAlternatives = 0x2
};

struct _ASSEMBLY_STORAGE_MAP;

struct _AUX_ACCESS_DATA {
	/*0000*/ _PRIVILEGE_SET * PrivilegesUsed;
	/*0008*/ _GENERIC_MAPPING GenericMapping;
	/*0018*/ ULONG AccessesToAudit;
	/*001c*/ ULONG MaximumAuditMask;
	/*0020*/ _GUID TransactionId;
	/*0030*/ void * NewSecurityDescriptor;
	/*0038*/ void * ExistingSecurityDescriptor;
	/*0040*/ void * ParentSecurityDescriptor;
	/*0048*/ void (* DeRefSecurityDescriptor)( void * , void * );
	/*0050*/ void * SDLock;
	/*0058*/ _ACCESS_REASONS AccessReasons;
	/*00d8*/ UCHAR GenerateStagingEvents;
	/*00e0*/
};

struct _CACHE_DESCRIPTOR {
	/*0000*/ UCHAR Level;
	/*0001*/ UCHAR Associativity;
	/*0002*/ USHORT LineSize;
	/*0004*/ ULONG Size;
	/*0008*/ _PROCESSOR_CACHE_TYPE Type;
	/*000c*/
};

struct _CI_NGEN_PATHS;

struct _CLIENT_ID {
	/*0000*/ void * UniqueProcess;
	/*0008*/ void * UniqueThread;
	/*0010*/
};

struct _CLIENT_ID32 {
	/*0000*/ ULONG UniqueProcess;
	/*0004*/ ULONG UniqueThread;
	/*0008*/
};

struct _CLIENT_ID64 {
	/*0000*/ ULONGLONG UniqueProcess;
	/*0008*/ ULONGLONG UniqueThread;
	/*0010*/
};

struct _CM_FULL_RESOURCE_DESCRIPTOR {
	/*0000*/ _INTERFACE_TYPE InterfaceType;
	/*0004*/ ULONG BusNumber;
	/*0008*/ _CM_PARTIAL_RESOURCE_LIST PartialResourceList;
	/*0024*/
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
			/*0004*/ USHORT Level;
			/*0006*/ USHORT Group;
			/*0008*/ ULONG Vector;
			/*000c*/ ULONGLONG Affinity;
			/*0014*/
		} Interrupt;
		struct {
			struct {
				/*0004*/ USHORT Group;
				/*0006*/ USHORT MessageCount;
				/*0008*/ ULONG Vector;
				/*000c*/ ULONGLONG Affinity;
				/*0014*/
			} Raw;
			struct {
				/*0004*/ USHORT Level;
				/*0006*/ USHORT Group;
				/*0008*/ ULONG Vector;
				/*000c*/ ULONGLONG Affinity;
				/*0014*/
			} Translated;
			/*0014*/
		} MessageInterrupt;
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
			/*0004*/ ULONG Channel;
			/*0008*/ ULONG RequestLine;
			/*000c*/ UCHAR TransferWidth;
			/*000d*/ UCHAR Reserved1;
			/*000e*/ UCHAR Reserved2;
			/*000f*/ UCHAR Reserved3;
			/*0010*/
		} DmaV3;
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
		struct {
			/*0004*/ _LARGE_INTEGER Start;
			/*000c*/ ULONG Length40;
			/*0010*/
		} Memory40;
		struct {
			/*0004*/ _LARGE_INTEGER Start;
			/*000c*/ ULONG Length48;
			/*0010*/
		} Memory48;
		struct {
			/*0004*/ _LARGE_INTEGER Start;
			/*000c*/ ULONG Length64;
			/*0010*/
		} Memory64;
		struct {
			/*0004*/ UCHAR Class;
			/*0005*/ UCHAR Type;
			/*0006*/ UCHAR Reserved1;
			/*0007*/ UCHAR Reserved2;
			/*0008*/ ULONG IdLowPart;
			/*000c*/ ULONG IdHighPart;
			/*0010*/
		} Connection;
		/*0014*/
	} u;
	/*0014*/
};

struct _CM_PARTIAL_RESOURCE_LIST {
	/*0000*/ USHORT Version;
	/*0002*/ USHORT Revision;
	/*0004*/ ULONG Count;
	/*0008*/ _CM_PARTIAL_RESOURCE_DESCRIPTOR PartialDescriptors[0x1];
	/*001c*/
};

struct _CM_RESOURCE_LIST {
	/*0000*/ ULONG Count;
	/*0004*/ _CM_FULL_RESOURCE_DESCRIPTOR List[0x1];
	/*0028*/
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
	/*0000*/ ULONGLONG P1Home;
	/*0008*/ ULONGLONG P2Home;
	/*0010*/ ULONGLONG P3Home;
	/*0018*/ ULONGLONG P4Home;
	/*0020*/ ULONGLONG P5Home;
	/*0028*/ ULONGLONG P6Home;
	/*0030*/ ULONG ContextFlags;
	/*0034*/ ULONG MxCsr;
	/*0038*/ USHORT SegCs;
	/*003a*/ USHORT SegDs;
	/*003c*/ USHORT SegEs;
	/*003e*/ USHORT SegFs;
	/*0040*/ USHORT SegGs;
	/*0042*/ USHORT SegSs;
	/*0044*/ ULONG EFlags;
	/*0048*/ ULONGLONG Dr0;
	/*0050*/ ULONGLONG Dr1;
	/*0058*/ ULONGLONG Dr2;
	/*0060*/ ULONGLONG Dr3;
	/*0068*/ ULONGLONG Dr6;
	/*0070*/ ULONGLONG Dr7;
	/*0078*/ ULONGLONG Rax;
	/*0080*/ ULONGLONG Rcx;
	/*0088*/ ULONGLONG Rdx;
	/*0090*/ ULONGLONG Rbx;
	/*0098*/ ULONGLONG Rsp;
	/*00a0*/ ULONGLONG Rbp;
	/*00a8*/ ULONGLONG Rsi;
	/*00b0*/ ULONGLONG Rdi;
	/*00b8*/ ULONGLONG R8;
	/*00c0*/ ULONGLONG R9;
	/*00c8*/ ULONGLONG R10;
	/*00d0*/ ULONGLONG R11;
	/*00d8*/ ULONGLONG R12;
	/*00e0*/ ULONGLONG R13;
	/*00e8*/ ULONGLONG R14;
	/*00f0*/ ULONGLONG R15;
	/*00f8*/ ULONGLONG Rip;
	/*0100*/ _XSAVE_FORMAT FltSave;
	/*0100*/ _M128A Header[0x2];
	/*0120*/ _M128A Legacy[0x8];
	/*01a0*/ _M128A Xmm0;
	/*01b0*/ _M128A Xmm1;
	/*01c0*/ _M128A Xmm2;
	/*01d0*/ _M128A Xmm3;
	/*01e0*/ _M128A Xmm4;
	/*01f0*/ _M128A Xmm5;
	/*0200*/ _M128A Xmm6;
	/*0210*/ _M128A Xmm7;
	/*0220*/ _M128A Xmm8;
	/*0230*/ _M128A Xmm9;
	/*0240*/ _M128A Xmm10;
	/*0250*/ _M128A Xmm11;
	/*0260*/ _M128A Xmm12;
	/*0270*/ _M128A Xmm13;
	/*0280*/ _M128A Xmm14;
	/*0290*/ _M128A Xmm15;
	/*0300*/ _M128A VectorRegister[0x1a];
	/*04a0*/ ULONGLONG VectorControl;
	/*04a8*/ ULONGLONG DebugControl;
	/*04b0*/ ULONGLONG LastBranchToRip;
	/*04b8*/ ULONGLONG LastBranchFromRip;
	/*04c0*/ ULONGLONG LastExceptionToRip;
	/*04c8*/ ULONGLONG LastExceptionFromRip;
	/*04d0*/
};

struct _COUNTER_READING {
	/*0000*/ _HARDWARE_COUNTER_TYPE Type;
	/*0004*/ ULONG Index;
	/*0008*/ ULONGLONG Start;
	/*0010*/ ULONGLONG Total;
	/*0018*/
};

struct _CURDIR {
	/*0000*/ _UNICODE_STRING DosPath;
	/*0010*/ void * Handle;
	/*0018*/
};

struct _DBGKP_ERROR_PORT;

struct _DBGK_SILOSTATE {
	/*0000*/ _EX_PUSH_LOCK ErrorPortLock;
	/*0008*/ _DBGKP_ERROR_PORT * ErrorPort;
	/*0010*/ _EPROCESS * ErrorProcess;
	/*0018*/ _KEVENT * ErrorPortRegisteredEvent;
	/*0020*/
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
	/*0004*/ ULONG Reserved1 : 01; // 0x00040000;
	/*0004*/ ULONG WakeFromInterrupt : 01; // 0x00080000;
	/*0004*/ ULONG SecureDevice : 01; // 0x00100000;
	/*0004*/ ULONG Reserved : 11; // 0xffe00000;
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
	/*0008*/ _OBJECT_DIRECTORY * GlobalDosDevicesDirectory;
	/*0010*/ void * DosDevicesDirectoryHandle;
	/*0018*/ LONG volatile ReferenceCount;
	/*001c*/ ULONG DriveMap;
	/*0020*/ UCHAR DriveType[0x20];
	/*0040*/ _EJOB * ServerSilo;
	/*0048*/
};

struct _DEVICE_OBJECT {
	/*0000*/ SHORT Type;
	/*0002*/ USHORT Size;
	/*0004*/ LONG ReferenceCount;
	/*0008*/ _DRIVER_OBJECT * DriverObject;
	/*0010*/ _DEVICE_OBJECT * NextDevice;
	/*0018*/ _DEVICE_OBJECT * AttachedDevice;
	/*0020*/ _IRP * CurrentIrp;
	/*0028*/ _IO_TIMER * Timer;
	/*0030*/ ULONG Flags;
	/*0034*/ ULONG Characteristics;
	/*0038*/ _VPB * Vpb;
	/*0040*/ void * DeviceExtension;
	/*0048*/ ULONG DeviceType;
	/*004c*/ CHAR StackSize;
	union {
		/*0050*/ _LIST_ENTRY ListEntry;
		/*0050*/ _WAIT_CONTEXT_BLOCK Wcb;
		/*0098*/
	} Queue;
	/*0098*/ ULONG AlignmentRequirement;
	/*00a0*/ _KDEVICE_QUEUE DeviceQueue;
	/*00c8*/ _KDPC Dpc;
	/*0108*/ ULONG ActiveThreadCount;
	/*0110*/ void * SecurityDescriptor;
	/*0118*/ _KEVENT DeviceLock;
	/*0130*/ USHORT SectorSize;
	/*0132*/ USHORT Spare1;
	/*0138*/ _DEVOBJ_EXTENSION * DeviceObjectExtension;
	/*0140*/ void * Reserved;
	/*0150*/
};

struct _DEVICE_OBJECT_POWER_EXTENSION;

enum _DEVICE_POWER_STATE {
	PowerDeviceUnspecified = 0x0,
	PowerDeviceD0 = 0x1,
	PowerDeviceD1 = 0x2,
	PowerDeviceD2 = 0x3,
	PowerDeviceD3 = 0x4,
	PowerDeviceMaximum = 0x5
};

enum _DEVICE_RELATION_TYPE {
	BusRelations = 0x0,
	EjectionRelations = 0x1,
	PowerRelations = 0x2,
	RemovalRelations = 0x3,
	TargetDeviceRelation = 0x4,
	SingleBusRelations = 0x5,
	TransportRelations = 0x6
};

enum _DEVICE_USAGE_NOTIFICATION_TYPE {
	DeviceUsageTypeUndefined = 0x0,
	DeviceUsageTypePaging = 0x1,
	DeviceUsageTypeHibernation = 0x2,
	DeviceUsageTypeDumpFile = 0x3,
	DeviceUsageTypeBoot = 0x4,
	DeviceUsageTypePostDisplay = 0x5
};

enum _DEVICE_WAKE_DEPTH {
	DeviceWakeDepthNotWakeable = 0x0,
	DeviceWakeDepthD0 = 0x1,
	DeviceWakeDepthD1 = 0x2,
	DeviceWakeDepthD2 = 0x3,
	DeviceWakeDepthD3hot = 0x4,
	DeviceWakeDepthD3cold = 0x5,
	DeviceWakeDepthMaximum = 0x6
};

struct _DEVOBJ_EXTENSION {
	/*0000*/ SHORT Type;
	/*0002*/ USHORT Size;
	/*0008*/ _DEVICE_OBJECT * DeviceObject;
	/*0010*/ ULONG PowerFlags;
	/*0018*/ _DEVICE_OBJECT_POWER_EXTENSION * Dope;
	/*0020*/ ULONG ExtensionFlags;
	/*0028*/ void * DeviceNode;
	/*0030*/ _DEVICE_OBJECT * AttachedTo;
	/*0038*/ LONG StartIoCount;
	/*003c*/ LONG StartIoKey;
	/*0040*/ ULONG StartIoFlags;
	/*0048*/ _VPB * Vpb;
	/*0050*/ void * DependencyNode;
	/*0058*/ void * InterruptContext;
	/*0060*/ void * VerifierContext;
	/*0068*/
};

enum _DIRECTORY_NOTIFY_INFORMATION_CLASS {
	DirectoryNotifyInformation = 0x1,
	DirectoryNotifyExtendedInformation = 0x2
};

struct _DISPATCHER_HEADER {
	/*0000*/ LONG volatile Lock;
	/*0000*/ LONG LockNV;
	/*0000*/ UCHAR Type;
	/*0001*/ UCHAR Signalling;
	/*0002*/ UCHAR Size;
	/*0003*/ UCHAR Reserved1;
	/*0000*/ UCHAR TimerType;
	/*0001*/ UCHAR TimerControlFlags;
	/*0001*/ UCHAR Absolute : 01; // 0x01;
	/*0001*/ UCHAR Wake : 01; // 0x02;
	/*0001*/ UCHAR EncodedTolerableDelay : 06; // 0xfc;
	/*0002*/ UCHAR Hand;
	/*0003*/ UCHAR TimerMiscFlags;
	/*0003*/ UCHAR Index : 06; // 0x3f;
	/*0003*/ UCHAR Inserted : 01; // 0x40;
	/*0003*/ UCHAR volatile Expired : 01; // 0x80;
	/*0000*/ UCHAR Timer2Type;
	/*0001*/ UCHAR Timer2Flags;
	/*0001*/ UCHAR Timer2Inserted : 01; // 0x01;
	/*0001*/ UCHAR Timer2Expiring : 01; // 0x02;
	/*0001*/ UCHAR Timer2CancelPending : 01; // 0x04;
	/*0001*/ UCHAR Timer2SetPending : 01; // 0x08;
	/*0001*/ UCHAR Timer2Running : 01; // 0x10;
	/*0001*/ UCHAR Timer2Disabled : 01; // 0x20;
	/*0001*/ UCHAR Timer2ReservedFlags : 02; // 0xc0;
	/*0002*/ UCHAR Timer2ComponentId;
	/*0003*/ UCHAR Timer2RelativeId;
	/*0000*/ UCHAR QueueType;
	/*0001*/ UCHAR QueueControlFlags;
	/*0001*/ UCHAR Abandoned : 01; // 0x01;
	/*0001*/ UCHAR DisableIncrement : 01; // 0x02;
	/*0001*/ UCHAR QueueReservedControlFlags : 06; // 0xfc;
	/*0002*/ UCHAR QueueSize;
	/*0003*/ UCHAR QueueReserved;
	/*0000*/ UCHAR ThreadType;
	/*0001*/ UCHAR ThreadReserved;
	/*0002*/ UCHAR ThreadControlFlags;
	/*0002*/ UCHAR CycleProfiling : 01; // 0x01;
	/*0002*/ UCHAR CounterProfiling : 01; // 0x02;
	/*0002*/ UCHAR GroupScheduling : 01; // 0x04;
	/*0002*/ UCHAR AffinitySet : 01; // 0x08;
	/*0002*/ UCHAR Tagged : 01; // 0x10;
	/*0002*/ UCHAR EnergyProfiling : 01; // 0x20;
	/*0002*/ UCHAR ThreadReservedControlFlags : 02; // 0xc0;
	/*0003*/ UCHAR DebugActive;
	/*0003*/ UCHAR ActiveDR7 : 01; // 0x01;
	/*0003*/ UCHAR Instrumented : 01; // 0x02;
	/*0003*/ UCHAR Minimal : 01; // 0x04;
	/*0003*/ UCHAR Reserved4 : 03; // 0x38;
	/*0003*/ UCHAR UmsScheduled : 01; // 0x40;
	/*0003*/ UCHAR UmsPrimary : 01; // 0x80;
	/*0000*/ UCHAR MutantType;
	/*0001*/ UCHAR MutantSize;
	/*0002*/ UCHAR DpcActive;
	/*0003*/ UCHAR MutantReserved;
	/*0004*/ LONG SignalState;
	/*0008*/ _LIST_ENTRY WaitListHead;
	/*0018*/
};

struct _DPH_BLOCK_INFORMATION {
	/*0000*/ ULONG StartStamp;
	/*0008*/ void * Heap;
	/*0010*/ ULONGLONG RequestedSize;
	/*0018*/ ULONGLONG ActualSize;
	/*0020*/ _LIST_ENTRY FreeQueue;
	/*0020*/ _SLIST_ENTRY FreePushList;
	/*0020*/ USHORT TraceIndex;
	/*0030*/ void * StackTrace;
	/*0038*/ ULONG Padding;
	/*003c*/ ULONG EndStamp;
	/*0040*/
};

struct _DPH_HEAP_BLOCK {
	/*0000*/ _DPH_HEAP_BLOCK * pNextAlloc;
	/*0000*/ _LIST_ENTRY AvailableEntry;
	/*0000*/ _RTL_BALANCED_LINKS TableLinks;
	/*0020*/ UCHAR * pUserAllocation;
	/*0028*/ UCHAR * pVirtualBlock;
	/*0030*/ ULONGLONG nVirtualBlockSize;
	/*0038*/ ULONGLONG nVirtualAccessSize;
	/*0040*/ ULONGLONG nUserRequestedSize;
	/*0048*/ ULONGLONG nUserActualSize;
	/*0050*/ void * UserValue;
	/*0058*/ ULONG UserFlags;
	/*0060*/ _RTL_TRACE_BLOCK * StackTrace;
	/*0068*/ _LIST_ENTRY AdjacencyEntry;
	/*0078*/ UCHAR * pVirtualRegion;
	/*0080*/
};

struct _DPH_HEAP_ROOT {
	/*0000*/ ULONG Signature;
	/*0004*/ ULONG HeapFlags;
	/*0008*/ _RTL_CRITICAL_SECTION * HeapCritSect;
	/*0010*/ ULONG nRemoteLockAcquired;
	/*0018*/ _DPH_HEAP_BLOCK * pVirtualStorageListHead;
	/*0020*/ _DPH_HEAP_BLOCK * pVirtualStorageListTail;
	/*0028*/ ULONG nVirtualStorageRanges;
	/*0030*/ ULONGLONG nVirtualStorageBytes;
	/*0038*/ _RTL_AVL_TABLE BusyNodesTable;
	/*00a0*/ _DPH_HEAP_BLOCK * NodeToAllocate;
	/*00a8*/ ULONG nBusyAllocations;
	/*00b0*/ ULONGLONG nBusyAllocationBytesCommitted;
	/*00b8*/ _DPH_HEAP_BLOCK * pFreeAllocationListHead;
	/*00c0*/ _DPH_HEAP_BLOCK * pFreeAllocationListTail;
	/*00c8*/ ULONG nFreeAllocations;
	/*00d0*/ ULONGLONG nFreeAllocationBytesCommitted;
	/*00d8*/ _LIST_ENTRY AvailableAllocationHead;
	/*00e8*/ ULONG nAvailableAllocations;
	/*00f0*/ ULONGLONG nAvailableAllocationBytesCommitted;
	/*00f8*/ _DPH_HEAP_BLOCK * pUnusedNodeListHead;
	/*0100*/ _DPH_HEAP_BLOCK * pUnusedNodeListTail;
	/*0108*/ ULONG nUnusedNodes;
	/*0110*/ ULONGLONG nBusyAllocationBytesAccessible;
	/*0118*/ _DPH_HEAP_BLOCK * pNodePoolListHead;
	/*0120*/ _DPH_HEAP_BLOCK * pNodePoolListTail;
	/*0128*/ ULONG nNodePools;
	/*0130*/ ULONGLONG nNodePoolBytes;
	/*0138*/ _LIST_ENTRY NextHeap;
	/*0148*/ ULONG ExtraFlags;
	/*014c*/ ULONG Seed;
	/*0150*/ void * NormalHeap;
	/*0158*/ _RTL_TRACE_BLOCK * CreateStackTrace;
	/*0160*/ void * FirstThread;
	/*0168*/
};

struct _DRIVER_EXTENSION {
	/*0000*/ _DRIVER_OBJECT * DriverObject;
	/*0008*/ LONG (* AddDevice)( _DRIVER_OBJECT * , _DEVICE_OBJECT * );
	/*0010*/ ULONG Count;
	/*0018*/ _UNICODE_STRING ServiceKeyName;
	/*0028*/ _IO_CLIENT_EXTENSION * ClientDriverExtension;
	/*0030*/ _FS_FILTER_CALLBACKS * FsFilterCallbacks;
	/*0038*/ void * KseCallbacks;
	/*0040*/ void * DvCallbacks;
	/*0048*/ void * VerifierContext;
	/*0050*/
};

struct _DRIVER_OBJECT {
	/*0000*/ SHORT Type;
	/*0002*/ SHORT Size;
	/*0008*/ _DEVICE_OBJECT * DeviceObject;
	/*0010*/ ULONG Flags;
	/*0018*/ void * DriverStart;
	/*0020*/ ULONG DriverSize;
	/*0028*/ void * DriverSection;
	/*0030*/ _DRIVER_EXTENSION * DriverExtension;
	/*0038*/ _UNICODE_STRING DriverName;
	/*0048*/ _UNICODE_STRING * HardwareDatabase;
	/*0050*/ _FAST_IO_DISPATCH * FastIoDispatch;
	/*0058*/ LONG (* DriverInit)( _DRIVER_OBJECT * , _UNICODE_STRING * );
	/*0060*/ void (* DriverStartIo)( _DEVICE_OBJECT * , _IRP * );
	/*0068*/ void (* DriverUnload)( _DRIVER_OBJECT * );
	/*0070*/ LONG (* MajorFunction[0x1c])( _DEVICE_OBJECT * , _IRP * );
	/*0150*/
};

struct _DYNAMIC_FUNCTION_TABLE {
	/*0000*/ _LIST_ENTRY ListEntry;
	/*0010*/ _IMAGE_RUNTIME_FUNCTION_ENTRY * FunctionTable;
	/*0018*/ _LARGE_INTEGER TimeStamp;
	/*0020*/ ULONGLONG MinimumAddress;
	/*0028*/ ULONGLONG MaximumAddress;
	/*0030*/ ULONGLONG BaseAddress;
	/*0038*/ _IMAGE_RUNTIME_FUNCTION_ENTRY * (* Callback)( ULONGLONG , void * );
	/*0040*/ void * Context;
	/*0048*/ WCHAR * OutOfProcessCallbackDll;
	/*0050*/ _FUNCTION_TABLE_TYPE Type;
	/*0054*/ ULONG EntryCount;
	/*0058*/ _RTL_BALANCED_NODE TreeNode;
	/*0070*/
};

struct _ECP_LIST;

struct _EJOB {
	/*0000*/ _KEVENT Event;
	/*0018*/ _LIST_ENTRY JobLinks;
	/*0028*/ _LIST_ENTRY ProcessListHead;
	/*0038*/ _ERESOURCE JobLock;
	/*00a0*/ _LARGE_INTEGER TotalUserTime;
	/*00a8*/ _LARGE_INTEGER TotalKernelTime;
	/*00b0*/ _LARGE_INTEGER TotalCycleTime;
	/*00b8*/ _LARGE_INTEGER ThisPeriodTotalUserTime;
	/*00c0*/ _LARGE_INTEGER ThisPeriodTotalKernelTime;
	/*00c8*/ ULONGLONG TotalContextSwitches;
	/*00d0*/ ULONG TotalPageFaultCount;
	/*00d4*/ ULONG TotalProcesses;
	/*00d8*/ ULONG ActiveProcesses;
	/*00dc*/ ULONG TotalTerminatedProcesses;
	/*00e0*/ _LARGE_INTEGER PerProcessUserTimeLimit;
	/*00e8*/ _LARGE_INTEGER PerJobUserTimeLimit;
	/*00f0*/ ULONGLONG MinimumWorkingSetSize;
	/*00f8*/ ULONGLONG MaximumWorkingSetSize;
	/*0100*/ ULONG LimitFlags;
	/*0104*/ ULONG ActiveProcessLimit;
	/*0108*/ _KAFFINITY_EX Affinity;
	/*01b0*/ _JOB_ACCESS_STATE * AccessState;
	/*01b8*/ void * AccessStateQuotaReference;
	/*01c0*/ ULONG UIRestrictionsClass;
	/*01c4*/ ULONG EndOfJobTimeAction;
	/*01c8*/ void * CompletionPort;
	/*01d0*/ void * CompletionKey;
	/*01d8*/ ULONGLONG CompletionCount;
	/*01e0*/ ULONG SessionId;
	/*01e4*/ ULONG SchedulingClass;
	/*01e8*/ ULONGLONG ReadOperationCount;
	/*01f0*/ ULONGLONG WriteOperationCount;
	/*01f8*/ ULONGLONG OtherOperationCount;
	/*0200*/ ULONGLONG ReadTransferCount;
	/*0208*/ ULONGLONG WriteTransferCount;
	/*0210*/ ULONGLONG OtherTransferCount;
	/*0218*/ _PROCESS_DISK_COUNTERS DiskIoInfo;
	/*0240*/ ULONGLONG ProcessMemoryLimit;
	/*0248*/ ULONGLONG JobMemoryLimit;
	/*0250*/ ULONGLONG JobTotalMemoryLimit;
	/*0258*/ ULONGLONG PeakProcessMemoryUsed;
	/*0260*/ ULONGLONG PeakJobMemoryUsed;
	/*0268*/ _KAFFINITY_EX EffectiveAffinity;
	/*0310*/ _LARGE_INTEGER EffectivePerProcessUserTimeLimit;
	/*0318*/ ULONGLONG EffectiveMinimumWorkingSetSize;
	/*0320*/ ULONGLONG EffectiveMaximumWorkingSetSize;
	/*0328*/ ULONGLONG EffectiveProcessMemoryLimit;
	/*0330*/ _EJOB * EffectiveProcessMemoryLimitJob;
	/*0338*/ _EJOB * EffectivePerProcessUserTimeLimitJob;
	/*0340*/ _EJOB * EffectiveNetIoRateLimitJob;
	/*0348*/ _EJOB * EffectiveHeapAttributionJob;
	/*0350*/ ULONG EffectiveLimitFlags;
	/*0354*/ ULONG EffectiveSchedulingClass;
	/*0358*/ ULONG EffectiveFreezeCount;
	/*035c*/ ULONG EffectiveBackgroundCount;
	/*0360*/ ULONG EffectiveSwapCount;
	/*0364*/ ULONG EffectiveNotificationLimitCount;
	/*0368*/ UCHAR EffectivePriorityClass;
	/*0369*/ UCHAR PriorityClass;
	/*036a*/ UCHAR NestingDepth;
	/*036b*/ UCHAR Reserved1[0x1];
	/*036c*/ ULONG CompletionFilter;
	/*0370*/ _WNF_STATE_NAME WakeChannel;
	/*0370*/ _PS_JOB_WAKE_INFORMATION WakeInfo;
	/*03b8*/ _JOBOBJECT_WAKE_FILTER WakeFilter;
	/*03c0*/ ULONG LowEdgeLatchFilter;
	/*03c8*/ _EJOB * NotificationLink;
	/*03d0*/ ULONGLONG CurrentJobMemoryUsed;
	/*03d8*/ _JOB_NOTIFICATION_INFORMATION * NotificationInfo;
	/*03e0*/ void * NotificationInfoQuotaReference;
	/*03e8*/ _IO_MINI_COMPLETION_PACKET_USER * NotificationPacket;
	/*03f0*/ _JOB_CPU_RATE_CONTROL * CpuRateControl;
	/*03f8*/ void * EffectiveSchedulingGroup;
	/*0400*/ ULONGLONG ReadyTime;
	/*0408*/ _EX_PUSH_LOCK MemoryLimitsLock;
	/*0410*/ _LIST_ENTRY SiblingJobLinks;
	/*0420*/ _LIST_ENTRY ChildJobListHead;
	/*0430*/ _EJOB * ParentJob;
	/*0438*/ _EJOB * volatile RootJob;
	/*0440*/ _LIST_ENTRY IteratorListHead;
	/*0450*/ ULONGLONG AncestorCount;
	/*0458*/ _EJOB * * Ancestors;
	/*0458*/ void * SessionObject;
	/*0460*/ _EPROCESS_VALUES Accounting;
	/*04b8*/ ULONG ShadowActiveProcessCount;
	/*04bc*/ ULONG ActiveAuxiliaryProcessCount;
	/*04c0*/ ULONG SequenceNumber;
	/*04c4*/ ULONG JobId;
	/*04c8*/ _GUID ContainerId;
	/*04d8*/ _GUID ContainerTelemetryId;
	/*04e8*/ _ESERVERSILO_GLOBALS * ServerSiloGlobals;
	/*04f0*/ _PS_PROPERTY_SET PropertySet;
	/*0508*/ _PSP_STORAGE * Storage;
	/*0510*/ _JOB_NET_RATE_CONTROL * NetRateControl;
	/*0518*/ ULONG JobFlags;
	/*0518*/ ULONG CloseDone : 01; // 0x00000001;
	/*0518*/ ULONG MultiGroup : 01; // 0x00000002;
	/*0518*/ ULONG OutstandingNotification : 01; // 0x00000004;
	/*0518*/ ULONG NotificationInProgress : 01; // 0x00000008;
	/*0518*/ ULONG UILimits : 01; // 0x00000010;
	/*0518*/ ULONG CpuRateControlActive : 01; // 0x00000020;
	/*0518*/ ULONG OwnCpuRateControl : 01; // 0x00000040;
	/*0518*/ ULONG Terminating : 01; // 0x00000080;
	/*0518*/ ULONG WorkingSetLock : 01; // 0x00000100;
	/*0518*/ ULONG JobFrozen : 01; // 0x00000200;
	/*0518*/ ULONG Background : 01; // 0x00000400;
	/*0518*/ ULONG WakeNotificationAllocated : 01; // 0x00000800;
	/*0518*/ ULONG WakeNotificationEnabled : 01; // 0x00001000;
	/*0518*/ ULONG WakeNotificationPending : 01; // 0x00002000;
	/*0518*/ ULONG LimitNotificationRequired : 01; // 0x00004000;
	/*0518*/ ULONG ZeroCountNotificationRequired : 01; // 0x00008000;
	/*0518*/ ULONG CycleTimeNotificationRequired : 01; // 0x00010000;
	/*0518*/ ULONG CycleTimeNotificationPending : 01; // 0x00020000;
	/*0518*/ ULONG TimersVirtualized : 01; // 0x00040000;
	/*0518*/ ULONG JobSwapped : 01; // 0x00080000;
	/*0518*/ ULONG ViolationDetected : 01; // 0x00100000;
	/*0518*/ ULONG EmptyJobNotified : 01; // 0x00200000;
	/*0518*/ ULONG NoSystemCharge : 01; // 0x00400000;
	/*0518*/ ULONG DropNoWakeCharges : 01; // 0x00800000;
	/*0518*/ ULONG NoWakeChargePolicyDecided : 01; // 0x01000000;
	/*0518*/ ULONG NetRateControlActive : 01; // 0x02000000;
	/*0518*/ ULONG OwnNetRateControl : 01; // 0x04000000;
	/*0518*/ ULONG IoRateControlActive : 01; // 0x08000000;
	/*0518*/ ULONG OwnIoRateControl : 01; // 0x10000000;
	/*0518*/ ULONG DisallowNewProcesses : 01; // 0x20000000;
	/*0518*/ ULONG Silo : 01; // 0x40000000;
	/*0518*/ ULONG ContainerTelemetryIdSet : 01; // 0x80000000;
	/*051c*/ ULONG JobFlags2;
	/*051c*/ ULONG ParentLocked : 01; // 0x00000001;
	/*051c*/ ULONG EnableUsermodeSiloThreadImpersonation : 01; // 0x00000002;
	/*051c*/ ULONG DisallowUsermodeSiloThreadImpersonation : 01; // 0x00000004;
	/*0520*/ _PROCESS_EXTENDED_ENERGY_VALUES * EnergyValues;
	/*0528*/ ULONGLONG volatile SharedCommitCharge;
	/*0530*/ ULONG DiskIoAttributionUserRefCount;
	/*0534*/ ULONG DiskIoAttributionRefCount;
	/*0538*/ void * DiskIoAttributionContext;
	/*0538*/ _EJOB * DiskIoAttributionOwnerJob;
	/*0540*/ _JOB_RATE_CONTROL_HEADER IoRateControlHeader;
	/*0568*/ _PS_IO_CONTROL_ENTRY GlobalIoControl;
	/*05a0*/ LONG volatile IoControlStateLock;
	/*05a8*/ _RTL_RB_TREE VolumeIoControlTree;
	/*05b8*/ ULONGLONG IoRateOverQuotaHistory;
	/*05c0*/ ULONG IoRateCurrentGeneration;
	/*05c4*/ ULONG IoRateLastQueryGeneration;
	/*05c8*/ ULONG IoRateGenerationLength;
	/*05cc*/ ULONG IoRateOverQuotaNotifySequenceId;
	/*05d0*/ ULONGLONG LastThrottledIoTime;
	/*05d8*/ _EX_PUSH_LOCK IoControlLock;
	/*05e0*/ ULONGLONG SiloHardReferenceCount;
	/*05e8*/ _WORK_QUEUE_ITEM RundownWorkItem;
	/*0608*/ void * PartitionObject;
	/*0610*/ _EJOB * PartitionOwnerJob;
	/*0618*/ _JOBOBJECT_ENERGY_TRACKING_STATE EnergyTrackingState;
	/*0620*/
};

union _ENERGY_STATE_DURATION {
	/*0000*/ ULONGLONG Value;
	/*0000*/ ULONG LastChangeTime;
	/*0004*/ ULONG Duration : 31; // 0x7fffffff;
	/*0004*/ ULONG IsInState : 01; // 0x80000000;
	/*0008*/
};

struct _ENODE {
	/*0000*/ _KNODE Ncb;
	/*0140*/ _WORK_QUEUE_ITEM HotAddProcessorWorkItem;
	/*0180*/
};

struct _EPROCESS {
	/*0000*/ _KPROCESS Pcb;
	/*02d8*/ _EX_PUSH_LOCK ProcessLock;
	/*02e0*/ void * UniqueProcessId;
	/*02e8*/ _LIST_ENTRY ActiveProcessLinks;
	/*02f8*/ _EX_RUNDOWN_REF RundownProtect;
	/*0300*/ ULONG Flags2;
	/*0300*/ ULONG JobNotReallyActive : 01; // 0x00000001;
	/*0300*/ ULONG AccountingFolded : 01; // 0x00000002;
	/*0300*/ ULONG NewProcessReported : 01; // 0x00000004;
	/*0300*/ ULONG ExitProcessReported : 01; // 0x00000008;
	/*0300*/ ULONG ReportCommitChanges : 01; // 0x00000010;
	/*0300*/ ULONG LastReportMemory : 01; // 0x00000020;
	/*0300*/ ULONG ForceWakeCharge : 01; // 0x00000040;
	/*0300*/ ULONG CrossSessionCreate : 01; // 0x00000080;
	/*0300*/ ULONG NeedsHandleRundown : 01; // 0x00000100;
	/*0300*/ ULONG RefTraceEnabled : 01; // 0x00000200;
	/*0300*/ ULONG PicoCreated : 01; // 0x00000400;
	/*0300*/ ULONG EmptyJobEvaluated : 01; // 0x00000800;
	/*0300*/ ULONG DefaultPagePriority : 03; // 0x00007000;
	/*0300*/ ULONG PrimaryTokenFrozen : 01; // 0x00008000;
	/*0300*/ ULONG ProcessVerifierTarget : 01; // 0x00010000;
	/*0300*/ ULONG RestrictSetThreadContext : 01; // 0x00020000;
	/*0300*/ ULONG AffinityPermanent : 01; // 0x00040000;
	/*0300*/ ULONG AffinityUpdateEnable : 01; // 0x00080000;
	/*0300*/ ULONG PropagateNode : 01; // 0x00100000;
	/*0300*/ ULONG ExplicitAffinity : 01; // 0x00200000;
	/*0300*/ ULONG ProcessExecutionState : 02; // 0x00c00000;
	/*0300*/ ULONG EnableReadVmLogging : 01; // 0x01000000;
	/*0300*/ ULONG EnableWriteVmLogging : 01; // 0x02000000;
	/*0300*/ ULONG FatalAccessTerminationRequested : 01; // 0x04000000;
	/*0300*/ ULONG DisableSystemAllowedCpuSet : 01; // 0x08000000;
	/*0300*/ ULONG ProcessStateChangeRequest : 02; // 0x30000000;
	/*0300*/ ULONG ProcessStateChangeInProgress : 01; // 0x40000000;
	/*0300*/ ULONG InPrivate : 01; // 0x80000000;
	/*0304*/ ULONG Flags;
	/*0304*/ ULONG CreateReported : 01; // 0x00000001;
	/*0304*/ ULONG NoDebugInherit : 01; // 0x00000002;
	/*0304*/ ULONG ProcessExiting : 01; // 0x00000004;
	/*0304*/ ULONG ProcessDelete : 01; // 0x00000008;
	/*0304*/ ULONG ManageExecutableMemoryWrites : 01; // 0x00000010;
	/*0304*/ ULONG VmDeleted : 01; // 0x00000020;
	/*0304*/ ULONG OutswapEnabled : 01; // 0x00000040;
	/*0304*/ ULONG Outswapped : 01; // 0x00000080;
	/*0304*/ ULONG FailFastOnCommitFail : 01; // 0x00000100;
	/*0304*/ ULONG Wow64VaSpace4Gb : 01; // 0x00000200;
	/*0304*/ ULONG AddressSpaceInitialized : 02; // 0x00000c00;
	/*0304*/ ULONG SetTimerResolution : 01; // 0x00001000;
	/*0304*/ ULONG BreakOnTermination : 01; // 0x00002000;
	/*0304*/ ULONG DeprioritizeViews : 01; // 0x00004000;
	/*0304*/ ULONG WriteWatch : 01; // 0x00008000;
	/*0304*/ ULONG ProcessInSession : 01; // 0x00010000;
	/*0304*/ ULONG OverrideAddressSpace : 01; // 0x00020000;
	/*0304*/ ULONG HasAddressSpace : 01; // 0x00040000;
	/*0304*/ ULONG LaunchPrefetched : 01; // 0x00080000;
	/*0304*/ ULONG Background : 01; // 0x00100000;
	/*0304*/ ULONG VmTopDown : 01; // 0x00200000;
	/*0304*/ ULONG ImageNotifyDone : 01; // 0x00400000;
	/*0304*/ ULONG PdeUpdateNeeded : 01; // 0x00800000;
	/*0304*/ ULONG VdmAllowed : 01; // 0x01000000;
	/*0304*/ ULONG ProcessRundown : 01; // 0x02000000;
	/*0304*/ ULONG ProcessInserted : 01; // 0x04000000;
	/*0304*/ ULONG DefaultIoPriority : 03; // 0x38000000;
	/*0304*/ ULONG ProcessSelfDelete : 01; // 0x40000000;
	/*0304*/ ULONG SetTimerResolutionLink : 01; // 0x80000000;
	/*0308*/ _LARGE_INTEGER CreateTime;
	/*0310*/ ULONGLONG ProcessQuotaUsage[0x2];
	/*0320*/ ULONGLONG ProcessQuotaPeak[0x2];
	/*0330*/ ULONGLONG PeakVirtualSize;
	/*0338*/ ULONGLONG VirtualSize;
	/*0340*/ _LIST_ENTRY SessionProcessLinks;
	/*0350*/ void * ExceptionPortData;
	/*0350*/ ULONGLONG ExceptionPortValue;
	/*0350*/ ULONGLONG ExceptionPortState : 03; // 0x0000000000000007;
	/*0358*/ _EX_FAST_REF Token;
	/*0360*/ ULONGLONG MmReserved;
	/*0368*/ _EX_PUSH_LOCK AddressCreationLock;
	/*0370*/ _EX_PUSH_LOCK PageTableCommitmentLock;
	/*0378*/ _ETHREAD * RotateInProgress;
	/*0380*/ _ETHREAD * ForkInProgress;
	/*0388*/ _EJOB * volatile CommitChargeJob;
	/*0390*/ _RTL_AVL_TREE CloneRoot;
	/*0398*/ ULONGLONG volatile NumberOfPrivatePages;
	/*03a0*/ ULONGLONG volatile NumberOfLockedPages;
	/*03a8*/ void * Win32Process;
	/*03b0*/ _EJOB * volatile Job;
	/*03b8*/ void * SectionObject;
	/*03c0*/ void * SectionBaseAddress;
	/*03c8*/ ULONG Cookie;
	/*03d0*/ _PAGEFAULT_HISTORY * WorkingSetWatch;
	/*03d8*/ void * Win32WindowStation;
	/*03e0*/ void * InheritedFromUniqueProcessId;
	/*03e8*/ void * LdtInformation;
	/*03f0*/ ULONGLONG volatile OwnerProcessId;
	/*03f8*/ _PEB * Peb;
	/*0400*/ _MM_SESSION_SPACE * Session;
	/*0408*/ void * AweInfo;
	/*0410*/ _EPROCESS_QUOTA_BLOCK * QuotaBlock;
	/*0418*/ _HANDLE_TABLE * ObjectTable;
	/*0420*/ void * DebugPort;
	/*0428*/ _EWOW64PROCESS * WoW64Process;
	/*0430*/ void * DeviceMap;
	/*0438*/ void * EtwDataSource;
	/*0440*/ ULONGLONG PageDirectoryPte;
	/*0448*/ _FILE_OBJECT * ImageFilePointer;
	/*0450*/ UCHAR ImageFileName[0xf];
	/*045f*/ UCHAR PriorityClass;
	/*0460*/ void * SecurityPort;
	/*0468*/ _SE_AUDIT_PROCESS_CREATION_INFO SeAuditProcessCreationInfo;
	/*0470*/ _LIST_ENTRY JobLinks;
	/*0480*/ void * HighestUserAddress;
	/*0488*/ _LIST_ENTRY ThreadListHead;
	/*0498*/ ULONG volatile ActiveThreads;
	/*049c*/ ULONG ImagePathHash;
	/*04a0*/ ULONG DefaultHardErrorProcessing;
	/*04a4*/ LONG LastThreadExitStatus;
	/*04a8*/ _EX_FAST_REF PrefetchTrace;
	/*04b0*/ void * LockedPagesList;
	/*04b8*/ _LARGE_INTEGER ReadOperationCount;
	/*04c0*/ _LARGE_INTEGER WriteOperationCount;
	/*04c8*/ _LARGE_INTEGER OtherOperationCount;
	/*04d0*/ _LARGE_INTEGER ReadTransferCount;
	/*04d8*/ _LARGE_INTEGER WriteTransferCount;
	/*04e0*/ _LARGE_INTEGER OtherTransferCount;
	/*04e8*/ ULONGLONG CommitChargeLimit;
	/*04f0*/ ULONGLONG volatile CommitCharge;
	/*04f8*/ ULONGLONG volatile CommitChargePeak;
	/*0500*/ _MMSUPPORT_FULL Vm;
	/*0610*/ _LIST_ENTRY MmProcessLinks;
	/*0620*/ ULONG ModifiedPageCount;
	/*0624*/ LONG ExitStatus;
	/*0628*/ _RTL_AVL_TREE VadRoot;
	/*0630*/ void * VadHint;
	/*0638*/ ULONGLONG VadCount;
	/*0640*/ ULONGLONG volatile VadPhysicalPages;
	/*0648*/ ULONGLONG VadPhysicalPagesLimit;
	/*0650*/ _ALPC_PROCESS_CONTEXT AlpcContext;
	/*0670*/ _LIST_ENTRY TimerResolutionLink;
	/*0680*/ _PO_DIAG_STACK_RECORD * TimerResolutionStackRecord;
	/*0688*/ ULONG RequestedTimerResolution;
	/*068c*/ ULONG SmallestTimerResolution;
	/*0690*/ _LARGE_INTEGER ExitTime;
	/*0698*/ _INVERTED_FUNCTION_TABLE * InvertedFunctionTable;
	/*06a0*/ _EX_PUSH_LOCK InvertedFunctionTableLock;
	/*06a8*/ ULONG ActiveThreadsHighWatermark;
	/*06ac*/ ULONG LargePrivateVadCount;
	/*06b0*/ _EX_PUSH_LOCK ThreadListLock;
	/*06b8*/ void * WnfContext;
	/*06c0*/ _EJOB * ServerSilo;
	/*06c8*/ UCHAR SignatureLevel;
	/*06c9*/ UCHAR SectionSignatureLevel;
	/*06ca*/ _PS_PROTECTION Protection;
	/*06cb*/ UCHAR HangCount : 04; // 0x0f;
	/*06cb*/ UCHAR GhostCount : 04; // 0xf0;
	/*06cc*/ ULONG Flags3;
	/*06cc*/ ULONG Minimal : 01; // 0x00000001;
	/*06cc*/ ULONG ReplacingPageRoot : 01; // 0x00000002;
	/*06cc*/ ULONG Crashed : 01; // 0x00000004;
	/*06cc*/ ULONG JobVadsAreTracked : 01; // 0x00000008;
	/*06cc*/ ULONG VadTrackingDisabled : 01; // 0x00000010;
	/*06cc*/ ULONG AuxiliaryProcess : 01; // 0x00000020;
	/*06cc*/ ULONG SubsystemProcess : 01; // 0x00000040;
	/*06cc*/ ULONG IndirectCpuSets : 01; // 0x00000080;
	/*06cc*/ ULONG RelinquishedCommit : 01; // 0x00000100;
	/*06cc*/ ULONG HighGraphicsPriority : 01; // 0x00000200;
	/*06cc*/ ULONG CommitFailLogged : 01; // 0x00000400;
	/*06cc*/ ULONG ReserveFailLogged : 01; // 0x00000800;
	/*06cc*/ ULONG SystemProcess : 01; // 0x00001000;
	/*06cc*/ ULONG HideImageBaseAddresses : 01; // 0x00002000;
	/*06d0*/ LONG DeviceAsid;
	/*06d8*/ void * SvmData;
	/*06e0*/ _EX_PUSH_LOCK SvmProcessLock;
	/*06e8*/ ULONGLONG SvmLock;
	/*06f0*/ _LIST_ENTRY SvmProcessDeviceListHead;
	/*0700*/ ULONGLONG LastFreezeInterruptTime;
	/*0708*/ _PROCESS_DISK_COUNTERS * DiskCounters;
	/*0710*/ void * PicoContext;
	/*0718*/ ULONGLONG TrustletIdentity;
	/*0720*/ void * EnclaveTable;
	/*0728*/ ULONGLONG EnclaveNumber;
	/*0730*/ _EX_PUSH_LOCK EnclaveLock;
	/*0738*/ ULONG HighPriorityFaultsAllowed;
	/*0740*/ _PO_PROCESS_ENERGY_CONTEXT * EnergyContext;
	/*0748*/ void * VmContext;
	/*0750*/ ULONGLONG SequenceNumber;
	/*0758*/ ULONGLONG CreateInterruptTime;
	/*0760*/ ULONGLONG CreateUnbiasedInterruptTime;
	/*0768*/ ULONGLONG TotalUnbiasedFrozenTime;
	/*0770*/ ULONGLONG LastAppStateUpdateTime;
	/*0778*/ ULONGLONG LastAppStateUptime : 61; // 0x1fffffffffffffff;
	/*0778*/ ULONGLONG LastAppState : 03; // 0xe000000000000000;
	/*0780*/ ULONGLONG volatile SharedCommitCharge;
	/*0788*/ _EX_PUSH_LOCK SharedCommitLock;
	/*0790*/ _LIST_ENTRY SharedCommitLinks;
	/*07a0*/ ULONGLONG AllowedCpuSets;
	/*07a8*/ ULONGLONG DefaultCpuSets;
	/*07a0*/ ULONGLONG * AllowedCpuSetsIndirect;
	/*07a8*/ ULONGLONG * DefaultCpuSetsIndirect;
	/*07b0*/ void * DiskIoAttribution;
	/*07b8*/ void * DxgProcess;
	/*07c0*/ ULONG Win32KFilterSet;
	/*07c8*/ _PS_INTERLOCKED_TIMER_DELAY_VALUES volatile ProcessTimerDelay;
	/*07d0*/ ULONG volatile KTimerSets;
	/*07d4*/ ULONG volatile KTimer2Sets;
	/*07d8*/ ULONG volatile ThreadTimerSets;
	/*07e0*/ ULONGLONG VirtualTimerListLock;
	/*07e8*/ _LIST_ENTRY VirtualTimerListHead;
	/*07f8*/ _WNF_STATE_NAME WakeChannel;
	/*07f8*/ _PS_PROCESS_WAKE_INFORMATION WakeInfo;
	/*0828*/ ULONG MitigationFlags;
	struct {
		/*0828*/ ULONG ControlFlowGuardEnabled : 01; // 0x00000001;
		/*0828*/ ULONG ControlFlowGuardExportSuppressionEnabled : 01; // 0x00000002;
		/*0828*/ ULONG ControlFlowGuardStrict : 01; // 0x00000004;
		/*0828*/ ULONG DisallowStrippedImages : 01; // 0x00000008;
		/*0828*/ ULONG ForceRelocateImages : 01; // 0x00000010;
		/*0828*/ ULONG HighEntropyASLREnabled : 01; // 0x00000020;
		/*0828*/ ULONG StackRandomizationDisabled : 01; // 0x00000040;
		/*0828*/ ULONG ExtensionPointDisable : 01; // 0x00000080;
		/*0828*/ ULONG DisableDynamicCode : 01; // 0x00000100;
		/*0828*/ ULONG DisableDynamicCodeAllowOptOut : 01; // 0x00000200;
		/*0828*/ ULONG DisableDynamicCodeAllowRemoteDowngrade : 01; // 0x00000400;
		/*0828*/ ULONG AuditDisableDynamicCode : 01; // 0x00000800;
		/*0828*/ ULONG DisallowWin32kSystemCalls : 01; // 0x00001000;
		/*0828*/ ULONG AuditDisallowWin32kSystemCalls : 01; // 0x00002000;
		/*0828*/ ULONG EnableFilteredWin32kAPIs : 01; // 0x00004000;
		/*0828*/ ULONG AuditFilteredWin32kAPIs : 01; // 0x00008000;
		/*0828*/ ULONG DisableNonSystemFonts : 01; // 0x00010000;
		/*0828*/ ULONG AuditNonSystemFontLoading : 01; // 0x00020000;
		/*0828*/ ULONG PreferSystem32Images : 01; // 0x00040000;
		/*0828*/ ULONG ProhibitRemoteImageMap : 01; // 0x00080000;
		/*0828*/ ULONG AuditProhibitRemoteImageMap : 01; // 0x00100000;
		/*0828*/ ULONG ProhibitLowILImageMap : 01; // 0x00200000;
		/*0828*/ ULONG AuditProhibitLowILImageMap : 01; // 0x00400000;
		/*0828*/ ULONG SignatureMitigationOptIn : 01; // 0x00800000;
		/*0828*/ ULONG AuditBlockNonMicrosoftBinaries : 01; // 0x01000000;
		/*0828*/ ULONG AuditBlockNonMicrosoftBinariesAllowStore : 01; // 0x02000000;
		/*0828*/ ULONG LoaderIntegrityContinuityEnabled : 01; // 0x04000000;
		/*0828*/ ULONG AuditLoaderIntegrityContinuity : 01; // 0x08000000;
		/*0828*/ ULONG EnableModuleTamperingProtection : 01; // 0x10000000;
		/*0828*/ ULONG EnableModuleTamperingProtectionNoInherit : 01; // 0x20000000;
		/*082c*/
	} MitigationFlagsValues;
	/*082c*/ ULONG MitigationFlags2;
	struct {
		/*082c*/ ULONG EnableExportAddressFilter : 01; // 0x00000001;
		/*082c*/ ULONG AuditExportAddressFilter : 01; // 0x00000002;
		/*082c*/ ULONG EnableExportAddressFilterPlus : 01; // 0x00000004;
		/*082c*/ ULONG AuditExportAddressFilterPlus : 01; // 0x00000008;
		/*082c*/ ULONG EnableRopStackPivot : 01; // 0x00000010;
		/*082c*/ ULONG AuditRopStackPivot : 01; // 0x00000020;
		/*082c*/ ULONG EnableRopCallerCheck : 01; // 0x00000040;
		/*082c*/ ULONG AuditRopCallerCheck : 01; // 0x00000080;
		/*082c*/ ULONG EnableRopSimExec : 01; // 0x00000100;
		/*082c*/ ULONG AuditRopSimExec : 01; // 0x00000200;
		/*082c*/ ULONG EnableImportAddressFilter : 01; // 0x00000400;
		/*082c*/ ULONG AuditImportAddressFilter : 01; // 0x00000800;
		/*0830*/
	} MitigationFlags2Values;
	/*0830*/ void * PartitionObject;
	/*0838*/
};

struct _EPROCESS_QUOTA_BLOCK;

struct _EPROCESS_VALUES {
	/*0000*/ ULONGLONG KernelTime;
	/*0008*/ ULONGLONG UserTime;
	/*0010*/ ULONGLONG ReadyTime;
	/*0018*/ ULONGLONG CycleTime;
	/*0020*/ ULONGLONG ContextSwitches;
	/*0028*/ LONGLONG ReadOperationCount;
	/*0030*/ LONGLONG WriteOperationCount;
	/*0038*/ LONGLONG OtherOperationCount;
	/*0040*/ LONGLONG ReadTransferCount;
	/*0048*/ LONGLONG WriteTransferCount;
	/*0050*/ LONGLONG OtherTransferCount;
	/*0058*/
};

struct _ERESOURCE {
	/*0000*/ _LIST_ENTRY SystemResourcesList;
	/*0010*/ _OWNER_ENTRY * OwnerTable;
	/*0018*/ SHORT ActiveCount;
	/*001a*/ USHORT Flag;
	/*001a*/ UCHAR ReservedLowFlags;
	/*001b*/ UCHAR WaiterPriority;
	/*0020*/ void * SharedWaiters;
	/*0028*/ void * ExclusiveWaiters;
	/*0030*/ _OWNER_ENTRY OwnerEntry;
	/*0040*/ ULONG ActiveEntries;
	/*0044*/ ULONG ContentionCount;
	/*0048*/ ULONG NumberOfSharedWaiters;
	/*004c*/ ULONG NumberOfExclusiveWaiters;
	/*0050*/ void * Reserved2;
	/*0058*/ void * Address;
	/*0058*/ ULONGLONG CreatorBackTraceIndex;
	/*0060*/ ULONGLONG SpinLock;
	/*0068*/
};

struct _ESERVERSILO_GLOBALS {
	/*0000*/ _OBP_SILODRIVERSTATE ObSiloState;
	/*02e0*/ _SEP_SILOSTATE SeSiloState;
	/*0310*/ _SEP_RM_LSA_CONNECTION_STATE SeRmSiloState;
	/*0360*/ _ETW_SILODRIVERSTATE * EtwSiloState;
	/*0368*/ _EPROCESS * MiSessionLeaderProcess;
	/*0370*/ _EPROCESS * ExpDefaultErrorPortProcess;
	/*0378*/ void * ExpDefaultErrorPort;
	/*0380*/ ULONG HardErrorState;
	/*0388*/ _WNF_SILODRIVERSTATE WnfSiloState;
	/*03c0*/ _DBGK_SILOSTATE DbgkSiloState;
	/*03e0*/ _UNICODE_STRING PsProtectedCurrentDirectory;
	/*03f0*/ _UNICODE_STRING PsProtectedEnvironment;
	/*0400*/ void * ApiSetSection;
	/*0408*/ void * ApiSetSchema;
	/*0410*/ UCHAR OneCoreForwardersEnabled;
	/*0418*/ _UNICODE_STRING NtSystemRoot;
	/*0428*/ _UNICODE_STRING SiloRootDirectoryName;
	/*0438*/ _PSP_STORAGE * Storage;
	/*0440*/ _SERVERSILO_STATE State;
	/*0444*/ LONG ExitStatus;
	/*0448*/ _KEVENT * DeleteEvent;
	/*0450*/ _SILO_USER_SHARED_DATA * UserSharedData;
	/*0458*/ void * UserSharedSection;
	/*0460*/ _WORK_QUEUE_ITEM TerminateWorkItem;
	/*0480*/
};

struct _ETHREAD {
	/*0000*/ _KTHREAD Tcb;
	/*05f0*/ _LARGE_INTEGER CreateTime;
	/*05f8*/ _LARGE_INTEGER ExitTime;
	/*05f8*/ _LIST_ENTRY KeyedWaitChain;
	/*0608*/ _LIST_ENTRY PostBlockList;
	/*0608*/ void * ForwardLinkShadow;
	/*0610*/ void * StartAddress;
	/*0618*/ _TERMINATION_PORT * TerminationPort;
	/*0618*/ _ETHREAD * ReaperLink;
	/*0618*/ void * KeyedWaitValue;
	/*0620*/ ULONGLONG ActiveTimerListLock;
	/*0628*/ _LIST_ENTRY ActiveTimerListHead;
	/*0638*/ _CLIENT_ID Cid;
	/*0648*/ _KSEMAPHORE KeyedWaitSemaphore;
	/*0648*/ _KSEMAPHORE AlpcWaitSemaphore;
	/*0668*/ _PS_CLIENT_SECURITY_CONTEXT ClientSecurity;
	/*0670*/ _LIST_ENTRY IrpList;
	/*0680*/ ULONGLONG TopLevelIrp;
	/*0688*/ _DEVICE_OBJECT * DeviceToVerify;
	/*0690*/ void * Win32StartAddress;
	/*0698*/ void * ChargeOnlySession;
	/*06a0*/ void * LegacyPowerObject;
	/*06a8*/ _LIST_ENTRY ThreadListEntry;
	/*06b8*/ _EX_RUNDOWN_REF RundownProtect;
	/*06c0*/ _EX_PUSH_LOCK ThreadLock;
	/*06c8*/ ULONG ReadClusterSize;
	/*06cc*/ LONG volatile MmLockOrdering;
	/*06d0*/ ULONG CrossThreadFlags;
	/*06d0*/ ULONG Terminated : 01; // 0x00000001;
	/*06d0*/ ULONG ThreadInserted : 01; // 0x00000002;
	/*06d0*/ ULONG HideFromDebugger : 01; // 0x00000004;
	/*06d0*/ ULONG ActiveImpersonationInfo : 01; // 0x00000008;
	/*06d0*/ ULONG HardErrorsAreDisabled : 01; // 0x00000010;
	/*06d0*/ ULONG BreakOnTermination : 01; // 0x00000020;
	/*06d0*/ ULONG SkipCreationMsg : 01; // 0x00000040;
	/*06d0*/ ULONG SkipTerminationMsg : 01; // 0x00000080;
	/*06d0*/ ULONG CopyTokenOnOpen : 01; // 0x00000100;
	/*06d0*/ ULONG ThreadIoPriority : 03; // 0x00000e00;
	/*06d0*/ ULONG ThreadPagePriority : 03; // 0x00007000;
	/*06d0*/ ULONG RundownFail : 01; // 0x00008000;
	/*06d0*/ ULONG UmsForceQueueTermination : 01; // 0x00010000;
	/*06d0*/ ULONG IndirectCpuSets : 01; // 0x00020000;
	/*06d0*/ ULONG DisableDynamicCodeOptOut : 01; // 0x00040000;
	/*06d0*/ ULONG ExplicitCaseSensitivity : 01; // 0x00080000;
	/*06d0*/ ULONG PicoNotifyExit : 01; // 0x00100000;
	/*06d0*/ ULONG DbgWerUserReportActive : 01; // 0x00200000;
	/*06d0*/ ULONG ForcedSelfTrimActive : 01; // 0x00400000;
	/*06d0*/ ULONG ReservedCrossThreadFlags : 09; // 0xff800000;
	/*06d4*/ ULONG SameThreadPassiveFlags;
	/*06d4*/ ULONG ActiveExWorker : 01; // 0x00000001;
	/*06d4*/ ULONG MemoryMaker : 01; // 0x00000002;
	/*06d4*/ ULONG StoreLockThread : 02; // 0x0000000c;
	/*06d4*/ ULONG ClonedThread : 01; // 0x00000010;
	/*06d4*/ ULONG KeyedEventInUse : 01; // 0x00000020;
	/*06d4*/ ULONG SelfTerminate : 01; // 0x00000040;
	/*06d4*/ ULONG RespectIoPriority : 01; // 0x00000080;
	/*06d4*/ ULONG ActivePageLists : 01; // 0x00000100;
	/*06d4*/ ULONG SecureContext : 01; // 0x00000200;
	/*06d4*/ ULONG ZeroPageThread : 01; // 0x00000400;
	/*06d4*/ ULONG ReservedSameThreadPassiveFlags : 21; // 0xfffff800;
	/*06d8*/ ULONG SameThreadApcFlags;
	/*06d8*/ UCHAR OwnsProcessAddressSpaceExclusive : 01; // 0x01;
	/*06d8*/ UCHAR OwnsProcessAddressSpaceShared : 01; // 0x02;
	/*06d8*/ UCHAR HardFaultBehavior : 01; // 0x04;
	/*06d8*/ UCHAR volatile StartAddressInvalid : 01; // 0x08;
	/*06d8*/ UCHAR EtwCalloutActive : 01; // 0x10;
	/*06d8*/ UCHAR SuppressSymbolLoad : 01; // 0x20;
	/*06d8*/ UCHAR Prefetching : 01; // 0x40;
	/*06d8*/ UCHAR OwnsVadExclusive : 01; // 0x80;
	/*06d9*/ UCHAR SystemPagePriorityActive : 01; // 0x01;
	/*06d9*/ UCHAR SystemPagePriority : 03; // 0x0e;
	/*06d9*/ UCHAR AllowWritesToExecutableMemory : 01; // 0x10;
	/*06dc*/ UCHAR CacheManagerActive;
	/*06dd*/ UCHAR DisablePageFaultClustering;
	/*06de*/ UCHAR ActiveFaultCount;
	/*06df*/ UCHAR LockOrderState;
	/*06e0*/ ULONGLONG AlpcMessageId;
	/*06e8*/ void * AlpcMessage;
	/*06e8*/ ULONG AlpcReceiveAttributeSet;
	/*06f0*/ _LIST_ENTRY AlpcWaitListEntry;
	/*0700*/ LONG ExitStatus;
	/*0704*/ ULONG CacheManagerCount;
	/*0708*/ ULONG IoBoostCount;
	/*070c*/ ULONG IoQoSBoostCount;
	/*0710*/ ULONG IoQoSThrottleCount;
	/*0718*/ _LIST_ENTRY BoostList;
	/*0728*/ _LIST_ENTRY DeboostList;
	/*0738*/ ULONGLONG BoostListLock;
	/*0740*/ ULONGLONG IrpListLock;
	/*0748*/ void * ReservedForSynchTracking;
	/*0750*/ _SINGLE_LIST_ENTRY CmCallbackListHead;
	/*0758*/ _GUID const * ActivityId;
	/*0760*/ _SINGLE_LIST_ENTRY SeLearningModeListHead;
	/*0768*/ void * VerifierContext;
	/*0770*/ ULONG KernelStackReference;
	/*0778*/ void * AdjustedClientToken;
	/*0780*/ void * WorkOnBehalfThread;
	/*0788*/ _PS_PROPERTY_SET PropertySet;
	/*07a0*/ void * PicoContext;
	/*07a8*/ ULONGLONG UserFsBase;
	/*07b0*/ ULONGLONG UserGsBase;
	/*07b8*/ _THREAD_ENERGY_VALUES * EnergyValues;
	/*07c0*/ void * CmDbgInfo;
	/*07c8*/ ULONGLONG SelectedCpuSets;
	/*07c8*/ ULONGLONG * SelectedCpuSetsIndirect;
	/*07d0*/ _EJOB * Silo;
	/*07d8*/ _UNICODE_STRING * ThreadName;
	/*07e0*/ _CONTEXT * SetContextState;
	/*07e8*/ ULONG LastExpectedRunTime;
	/*07f0*/ _LIST_ENTRY OwnerEntryListHead;
	/*0800*/ ULONGLONG DisownedOwnerEntryListLock;
	/*0808*/ _LIST_ENTRY DisownedOwnerEntryListHead;
	/*0818*/
};

struct _ETW_BUFFER_CONTEXT {
	/*0000*/ UCHAR ProcessorNumber;
	/*0001*/ UCHAR Alignment;
	/*0000*/ USHORT ProcessorIndex;
	/*0002*/ USHORT LoggerId;
	/*0004*/
};

struct _ETW_SILODRIVERSTATE;

struct _EVENT_DATA_DESCRIPTOR {
	/*0000*/ ULONGLONG Ptr;
	/*0008*/ ULONG Size;
	/*000c*/ ULONG Reserved;
	/*000c*/ UCHAR Type;
	/*000d*/ UCHAR Reserved1;
	/*000e*/ USHORT Reserved2;
	/*0010*/
};

struct _EVENT_DESCRIPTOR {
	/*0000*/ USHORT Id;
	/*0002*/ UCHAR Version;
	/*0003*/ UCHAR Channel;
	/*0004*/ UCHAR Level;
	/*0005*/ UCHAR Opcode;
	/*0006*/ USHORT Task;
	/*0008*/ ULONGLONG Keyword;
	/*0010*/
};

struct _EVENT_HEADER {
	/*0000*/ USHORT Size;
	/*0002*/ USHORT HeaderType;
	/*0004*/ USHORT Flags;
	/*0006*/ USHORT EventProperty;
	/*0008*/ ULONG ThreadId;
	/*000c*/ ULONG ProcessId;
	/*0010*/ _LARGE_INTEGER TimeStamp;
	/*0018*/ _GUID ProviderId;
	/*0028*/ _EVENT_DESCRIPTOR EventDescriptor;
	/*0038*/ ULONG KernelTime;
	/*003c*/ ULONG UserTime;
	/*0038*/ ULONGLONG ProcessorTime;
	/*0040*/ _GUID ActivityId;
	/*0050*/
};

struct _EVENT_HEADER_EXTENDED_DATA_ITEM {
	/*0000*/ USHORT Reserved1;
	/*0002*/ USHORT ExtType;
	/*0004*/ USHORT Linkage : 01; // 0x0001;
	/*0004*/ USHORT Reserved2 : 15; // 0xfffe;
	/*0006*/ USHORT DataSize;
	/*0008*/ ULONGLONG DataPtr;
	/*0010*/
};

struct _EVENT_RECORD {
	/*0000*/ _EVENT_HEADER EventHeader;
	/*0050*/ _ETW_BUFFER_CONTEXT BufferContext;
	/*0054*/ USHORT ExtendedDataCount;
	/*0056*/ USHORT UserDataLength;
	/*0058*/ _EVENT_HEADER_EXTENDED_DATA_ITEM * ExtendedData;
	/*0060*/ void * UserData;
	/*0068*/ void * UserContext;
	/*0070*/
};

enum _EVENT_TYPE {
	NotificationEvent = 0x0,
	SynchronizationEvent = 0x1
};

struct _EWOW64PROCESS {
	/*0000*/ void * Peb;
	/*0008*/ USHORT Machine;
	/*000c*/ _SYSTEM_DLL_TYPE NtdllType;
	/*0010*/
};

enum _EXCEPTION_DISPOSITION {
	ExceptionContinueExecution = 0x0,
	ExceptionContinueSearch = 0x1,
	ExceptionNestedException = 0x2,
	ExceptionCollidedUnwind = 0x3
};

struct _EXCEPTION_RECORD {
	/*0000*/ LONG ExceptionCode;
	/*0004*/ ULONG ExceptionFlags;
	/*0008*/ _EXCEPTION_RECORD * ExceptionRecord;
	/*0010*/ void * ExceptionAddress;
	/*0018*/ ULONG NumberParameters;
	/*0020*/ ULONGLONG ExceptionInformation[0xf];
	/*0098*/
};

struct _EXCEPTION_REGISTRATION_RECORD {
	/*0000*/ _EXCEPTION_REGISTRATION_RECORD * Next;
	/*0008*/ _EXCEPTION_DISPOSITION (* Handler)( _EXCEPTION_RECORD * , void * , _CONTEXT * , void * );
	/*0010*/
};

struct _EXHANDLE {
	/*0000*/ ULONG TagBits : 02; // 0x00000003;
	/*0000*/ ULONG Index : 30; // 0xfffffffc;
	/*0000*/ void * GenericHandleOverlay;
	/*0000*/ ULONGLONG Value;
	/*0008*/
};

enum _EXQUEUEINDEX {
	ExPoolUntrusted = 0x0,
	IoPoolUntrusted = 0x1,
	ExPoolMax = 0x8
};

struct _EXT_DELETE_PARAMETERS {
	/*0000*/ ULONG Version;
	/*0004*/ ULONG Reserved;
	/*0008*/ void (* DeleteCallback)( void * );
	/*0010*/ void * DeleteContext;
	/*0018*/
};

struct _EXT_SET_PARAMETERS_V0 {
	/*0000*/ ULONG Version;
	/*0004*/ ULONG Reserved;
	/*0008*/ LONGLONG NoWakeTolerance;
	/*0010*/
};

struct _EX_FAST_REF {
	/*0000*/ void * Object;
	/*0000*/ ULONGLONG RefCnt : 04; // 0x000000000000000f;
	/*0000*/ ULONGLONG Value;
	/*0008*/
};

enum _EX_GEN_RANDOM_DOMAIN {
	ExGenRandomDomainKernel = 0x0,
	ExGenRandomDomainFirst = 0x0,
	ExGenRandomDomainUserVisible = 0x1,
	ExGenRandomDomainMax = 0x2
};

struct _EX_PUSH_LOCK {
	/*0000*/ ULONGLONG Locked : 01; // 0x0000000000000001;
	/*0000*/ ULONGLONG Waiting : 01; // 0x0000000000000002;
	/*0000*/ ULONGLONG Waking : 01; // 0x0000000000000004;
	/*0000*/ ULONGLONG MultipleShared : 01; // 0x0000000000000008;
	/*0000*/ ULONGLONG Shared : 60; // 0xfffffffffffffff0;
	/*0000*/ ULONGLONG Value;
	/*0000*/ void * Ptr;
	/*0008*/
};

struct _EX_RUNDOWN_REF {
	/*0000*/ ULONGLONG Count;
	/*0000*/ void * Ptr;
	/*0008*/
};

struct _FAST_IO_DISPATCH {
	/*0000*/ ULONG SizeOfFastIoDispatch;
	/*0008*/ UCHAR (* FastIoCheckIfPossible)( _FILE_OBJECT * , _LARGE_INTEGER * , ULONG , UCHAR , ULONG , UCHAR , _IO_STATUS_BLOCK * , _DEVICE_OBJECT * );
	/*0010*/ UCHAR (* FastIoRead)( _FILE_OBJECT * , _LARGE_INTEGER * , ULONG , UCHAR , ULONG , void * , _IO_STATUS_BLOCK * , _DEVICE_OBJECT * );
	/*0018*/ UCHAR (* FastIoWrite)( _FILE_OBJECT * , _LARGE_INTEGER * , ULONG , UCHAR , ULONG , void * , _IO_STATUS_BLOCK * , _DEVICE_OBJECT * );
	/*0020*/ UCHAR (* FastIoQueryBasicInfo)( _FILE_OBJECT * , UCHAR , _FILE_BASIC_INFORMATION * , _IO_STATUS_BLOCK * , _DEVICE_OBJECT * );
	/*0028*/ UCHAR (* FastIoQueryStandardInfo)( _FILE_OBJECT * , UCHAR , _FILE_STANDARD_INFORMATION * , _IO_STATUS_BLOCK * , _DEVICE_OBJECT * );
	/*0030*/ UCHAR (* FastIoLock)( _FILE_OBJECT * , _LARGE_INTEGER * , _LARGE_INTEGER * , _EPROCESS * , ULONG , UCHAR , UCHAR , _IO_STATUS_BLOCK * , _DEVICE_OBJECT * );
	/*0038*/ UCHAR (* FastIoUnlockSingle)( _FILE_OBJECT * , _LARGE_INTEGER * , _LARGE_INTEGER * , _EPROCESS * , ULONG , _IO_STATUS_BLOCK * , _DEVICE_OBJECT * );
	/*0040*/ UCHAR (* FastIoUnlockAll)( _FILE_OBJECT * , _EPROCESS * , _IO_STATUS_BLOCK * , _DEVICE_OBJECT * );
	/*0048*/ UCHAR (* FastIoUnlockAllByKey)( _FILE_OBJECT * , void * , ULONG , _IO_STATUS_BLOCK * , _DEVICE_OBJECT * );
	/*0050*/ UCHAR (* FastIoDeviceControl)( _FILE_OBJECT * , UCHAR , void * , ULONG , void * , ULONG , ULONG , _IO_STATUS_BLOCK * , _DEVICE_OBJECT * );
	/*0058*/ void (* AcquireFileForNtCreateSection)( _FILE_OBJECT * );
	/*0060*/ void (* ReleaseFileForNtCreateSection)( _FILE_OBJECT * );
	/*0068*/ void (* FastIoDetachDevice)( _DEVICE_OBJECT * , _DEVICE_OBJECT * );
	/*0070*/ UCHAR (* FastIoQueryNetworkOpenInfo)( _FILE_OBJECT * , UCHAR , _FILE_NETWORK_OPEN_INFORMATION * , _IO_STATUS_BLOCK * , _DEVICE_OBJECT * );
	/*0078*/ LONG (* AcquireForModWrite)( _FILE_OBJECT * , _LARGE_INTEGER * , _ERESOURCE * * , _DEVICE_OBJECT * );
	/*0080*/ UCHAR (* MdlRead)( _FILE_OBJECT * , _LARGE_INTEGER * , ULONG , ULONG , _MDL * * , _IO_STATUS_BLOCK * , _DEVICE_OBJECT * );
	/*0088*/ UCHAR (* MdlReadComplete)( _FILE_OBJECT * , _MDL * , _DEVICE_OBJECT * );
	/*0090*/ UCHAR (* PrepareMdlWrite)( _FILE_OBJECT * , _LARGE_INTEGER * , ULONG , ULONG , _MDL * * , _IO_STATUS_BLOCK * , _DEVICE_OBJECT * );
	/*0098*/ UCHAR (* MdlWriteComplete)( _FILE_OBJECT * , _LARGE_INTEGER * , _MDL * , _DEVICE_OBJECT * );
	/*00a0*/ UCHAR (* FastIoReadCompressed)( _FILE_OBJECT * , _LARGE_INTEGER * , ULONG , ULONG , void * , _MDL * * , _IO_STATUS_BLOCK * , _COMPRESSED_DATA_INFO * , ULONG , _DEVICE_OBJECT * );
	/*00a8*/ UCHAR (* FastIoWriteCompressed)( _FILE_OBJECT * , _LARGE_INTEGER * , ULONG , ULONG , void * , _MDL * * , _IO_STATUS_BLOCK * , _COMPRESSED_DATA_INFO * , ULONG , _DEVICE_OBJECT * );
	/*00b0*/ UCHAR (* MdlReadCompleteCompressed)( _FILE_OBJECT * , _MDL * , _DEVICE_OBJECT * );
	/*00b8*/ UCHAR (* MdlWriteCompleteCompressed)( _FILE_OBJECT * , _LARGE_INTEGER * , _MDL * , _DEVICE_OBJECT * );
	/*00c0*/ UCHAR (* FastIoQueryOpen)( _IRP * , _FILE_NETWORK_OPEN_INFORMATION * , _DEVICE_OBJECT * );
	/*00c8*/ LONG (* ReleaseForModWrite)( _FILE_OBJECT * , _ERESOURCE * , _DEVICE_OBJECT * );
	/*00d0*/ LONG (* AcquireForCcFlush)( _FILE_OBJECT * , _DEVICE_OBJECT * );
	/*00d8*/ LONG (* ReleaseForCcFlush)( _FILE_OBJECT * , _DEVICE_OBJECT * );
	/*00e0*/
};

struct _FAST_MUTEX {
	/*0000*/ LONG Count;
	/*0008*/ void * Owner;
	/*0010*/ ULONG Contention;
	/*0018*/ _KEVENT Event;
	/*0030*/ ULONG OldIrql;
	/*0038*/
};

struct _FILESYSTEM_DISK_COUNTERS {
	/*0000*/ ULONGLONG FsBytesRead;
	/*0008*/ ULONGLONG FsBytesWritten;
	/*0010*/
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
	FileIoCompletionNotificationInformation = 0x29,
	FileIoStatusBlockRangeInformation = 0x2a,
	FileIoPriorityHintInformation = 0x2b,
	FileSfioReserveInformation = 0x2c,
	FileSfioVolumeInformation = 0x2d,
	FileHardLinkInformation = 0x2e,
	FileProcessIdsUsingFileInformation = 0x2f,
	FileNormalizedNameInformation = 0x30,
	FileNetworkPhysicalNameInformation = 0x31,
	FileIdGlobalTxDirectoryInformation = 0x32,
	FileIsRemoteDeviceInformation = 0x33,
	FileUnusedInformation = 0x34,
	FileNumaNodeInformation = 0x35,
	FileStandardLinkInformation = 0x36,
	FileRemoteProtocolInformation = 0x37,
	FileRenameInformationBypassAccessCheck = 0x38,
	FileLinkInformationBypassAccessCheck = 0x39,
	FileVolumeNameInformation = 0x3a,
	FileIdInformation = 0x3b,
	FileIdExtdDirectoryInformation = 0x3c,
	FileReplaceCompletionInformation = 0x3d,
	FileHardLinkFullIdInformation = 0x3e,
	FileIdExtdBothDirectoryInformation = 0x3f,
	FileDispositionInformationEx = 0x40,
	FileRenameInformationEx = 0x41,
	FileRenameInformationExBypassAccessCheck = 0x42,
	FileDesiredStorageClassInformation = 0x43,
	FileStatInformation = 0x44,
	FileMemoryPartitionInformation = 0x45,
	FileMaximumInformation = 0x46
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
	/*0008*/ _DEVICE_OBJECT * DeviceObject;
	/*0010*/ _VPB * Vpb;
	/*0018*/ void * FsContext;
	/*0020*/ void * FsContext2;
	/*0028*/ _SECTION_OBJECT_POINTERS * SectionObjectPointer;
	/*0030*/ void * PrivateCacheMap;
	/*0038*/ LONG FinalStatus;
	/*0040*/ _FILE_OBJECT * RelatedFileObject;
	/*0048*/ UCHAR LockOperation;
	/*0049*/ UCHAR DeletePending;
	/*004a*/ UCHAR ReadAccess;
	/*004b*/ UCHAR WriteAccess;
	/*004c*/ UCHAR DeleteAccess;
	/*004d*/ UCHAR SharedRead;
	/*004e*/ UCHAR SharedWrite;
	/*004f*/ UCHAR SharedDelete;
	/*0050*/ ULONG Flags;
	/*0058*/ _UNICODE_STRING FileName;
	/*0068*/ _LARGE_INTEGER CurrentByteOffset;
	/*0070*/ ULONG Waiters;
	/*0074*/ ULONG Busy;
	/*0078*/ void * LastLock;
	/*0080*/ _KEVENT Lock;
	/*0098*/ _KEVENT Event;
	/*00b0*/ _IO_COMPLETION_CONTEXT * CompletionContext;
	/*00b8*/ ULONGLONG IrpListLock;
	/*00c0*/ _LIST_ENTRY IrpList;
	/*00d0*/ void * FileObjectExtension;
	/*00d8*/
};

struct _FILE_STANDARD_INFORMATION {
	/*0000*/ _LARGE_INTEGER AllocationSize;
	/*0008*/ _LARGE_INTEGER EndOfFile;
	/*0010*/ ULONG NumberOfLinks;
	/*0014*/ UCHAR DeletePending;
	/*0015*/ UCHAR Directory;
	/*0018*/
};

struct _FLS_CALLBACK_INFO;

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
	FileFsVolumeFlagsInformation = 0xa,
	FileFsSectorSizeInformation = 0xb,
	FileFsDataCopyInformation = 0xc,
	FileFsMetadataSizeInformation = 0xd,
	FileFsMaximumInformation = 0xe
};

struct _FS_FILTER_CALLBACKS {
	/*0000*/ ULONG SizeOfFsFilterCallbacks;
	/*0004*/ ULONG Reserved;
	/*0008*/ LONG (* PreAcquireForSectionSynchronization)( _FS_FILTER_CALLBACK_DATA * , void * * );
	/*0010*/ void (* PostAcquireForSectionSynchronization)( _FS_FILTER_CALLBACK_DATA * , LONG , void * );
	/*0018*/ LONG (* PreReleaseForSectionSynchronization)( _FS_FILTER_CALLBACK_DATA * , void * * );
	/*0020*/ void (* PostReleaseForSectionSynchronization)( _FS_FILTER_CALLBACK_DATA * , LONG , void * );
	/*0028*/ LONG (* PreAcquireForCcFlush)( _FS_FILTER_CALLBACK_DATA * , void * * );
	/*0030*/ void (* PostAcquireForCcFlush)( _FS_FILTER_CALLBACK_DATA * , LONG , void * );
	/*0038*/ LONG (* PreReleaseForCcFlush)( _FS_FILTER_CALLBACK_DATA * , void * * );
	/*0040*/ void (* PostReleaseForCcFlush)( _FS_FILTER_CALLBACK_DATA * , LONG , void * );
	/*0048*/ LONG (* PreAcquireForModifiedPageWriter)( _FS_FILTER_CALLBACK_DATA * , void * * );
	/*0050*/ void (* PostAcquireForModifiedPageWriter)( _FS_FILTER_CALLBACK_DATA * , LONG , void * );
	/*0058*/ LONG (* PreReleaseForModifiedPageWriter)( _FS_FILTER_CALLBACK_DATA * , void * * );
	/*0060*/ void (* PostReleaseForModifiedPageWriter)( _FS_FILTER_CALLBACK_DATA * , LONG , void * );
	/*0068*/ LONG (* PreQueryOpen)( _FS_FILTER_CALLBACK_DATA * , void * * );
	/*0070*/ void (* PostQueryOpen)( _FS_FILTER_CALLBACK_DATA * , LONG , void * );
	/*0078*/
};

struct _FS_FILTER_CALLBACK_DATA {
	/*0000*/ ULONG SizeOfFsFilterCallbackData;
	/*0004*/ UCHAR Operation;
	/*0005*/ UCHAR Reserved;
	/*0008*/ _DEVICE_OBJECT * DeviceObject;
	/*0010*/ _FILE_OBJECT * FileObject;
	/*0018*/ _FS_FILTER_PARAMETERS Parameters;
	/*0040*/
};

union _FS_FILTER_PARAMETERS {
	struct {
		/*0000*/ _LARGE_INTEGER * EndingOffset;
		/*0008*/ _ERESOURCE * * ResourceToRelease;
		/*0010*/
	} AcquireForModifiedPageWriter;
	struct {
		/*0000*/ _ERESOURCE * ResourceToRelease;
		/*0008*/
	} ReleaseForModifiedPageWriter;
	struct {
		/*0000*/ _FS_FILTER_SECTION_SYNC_TYPE SyncType;
		/*0004*/ ULONG PageProtection;
		/*0008*/ _FS_FILTER_SECTION_SYNC_OUTPUT * OutputInformation;
		/*0010*/
	} AcquireForSectionSynchronization;
	struct {
		/*0000*/ _FS_FILTER_STREAM_FO_NOTIFICATION_TYPE NotificationType;
		/*0008*/ UCHAR SafeToRecurse;
		/*0010*/
	} NotifyStreamFileObject;
	struct {
		/*0000*/ _IRP * Irp;
		/*0008*/ void * FileInformation;
		/*0010*/ ULONG * Length;
		/*0018*/ _FILE_INFORMATION_CLASS FileInformationClass;
		/*001c*/ LONG CompletionStatus;
		/*0020*/
	} QueryOpen;
	struct {
		/*0000*/ void * Argument1;
		/*0008*/ void * Argument2;
		/*0010*/ void * Argument3;
		/*0018*/ void * Argument4;
		/*0020*/ void * Argument5;
		/*0028*/
	} Others;
	/*0028*/
};

struct _FS_FILTER_SECTION_SYNC_OUTPUT {
	/*0000*/ ULONG StructureSize;
	/*0004*/ ULONG SizeReturned;
	/*0008*/ ULONG Flags;
	/*000c*/ ULONG DesiredReadAlignment;
	/*0010*/
};

enum _FS_FILTER_SECTION_SYNC_TYPE {
	SyncTypeOther = 0x0,
	SyncTypeCreateSection = 0x1
};

enum _FS_FILTER_STREAM_FO_NOTIFICATION_TYPE {
	NotifyTypeCreate = 0x0,
	NotifyTypeRetired = 0x1
};

enum _FUNCTION_TABLE_TYPE {
	RF_SORTED = 0x0,
	RF_UNSORTED = 0x1,
	RF_CALLBACK = 0x2,
	RF_KERNEL_DYNAMIC = 0x3
};

struct _GDI_TEB_BATCH {
	/*0000*/ ULONG Offset : 31; // 0x7fffffff;
	/*0000*/ ULONG HasRenderingCommand : 01; // 0x80000000;
	/*0008*/ ULONGLONG HDC;
	/*0010*/ ULONG Buffer[0x136];
	/*04e8*/
};

struct _GDI_TEB_BATCH32 {
	/*0000*/ ULONG Offset : 31; // 0x7fffffff;
	/*0000*/ ULONG HasRenderingCommand : 01; // 0x80000000;
	/*0004*/ ULONG HDC;
	/*0008*/ ULONG Buffer[0x136];
	/*04e0*/
};

struct _GDI_TEB_BATCH64 {
	/*0000*/ ULONG Offset : 31; // 0x7fffffff;
	/*0000*/ ULONG HasRenderingCommand : 01; // 0x80000000;
	/*0008*/ ULONGLONG HDC;
	/*0010*/ ULONG Buffer[0x136];
	/*04e8*/
};

struct _GENERAL_LOOKASIDE {
	/*0000*/ _SLIST_HEADER ListHead;
	/*0000*/ _SINGLE_LIST_ENTRY SingleListHead;
	/*0010*/ USHORT Depth;
	/*0012*/ USHORT MaximumDepth;
	/*0014*/ ULONG TotalAllocates;
	/*0018*/ ULONG AllocateMisses;
	/*0018*/ ULONG AllocateHits;
	/*001c*/ ULONG TotalFrees;
	/*0020*/ ULONG FreeMisses;
	/*0020*/ ULONG FreeHits;
	/*0024*/ _POOL_TYPE Type;
	/*0028*/ ULONG Tag;
	/*002c*/ ULONG Size;
	/*0030*/ void * (* AllocateEx)( _POOL_TYPE , ULONGLONG , ULONG , _LOOKASIDE_LIST_EX * );
	/*0030*/ void * (* Allocate)( _POOL_TYPE , ULONGLONG , ULONG );
	/*0038*/ void (* FreeEx)( void * , _LOOKASIDE_LIST_EX * );
	/*0038*/ void (* Free)( void * );
	/*0040*/ _LIST_ENTRY ListEntry;
	/*0050*/ ULONG LastTotalAllocates;
	/*0054*/ ULONG LastAllocateMisses;
	/*0054*/ ULONG LastAllocateHits;
	/*0058*/ ULONG Future[0x2];
	/*0080*/
};

struct _GENERAL_LOOKASIDE_POOL {
	/*0000*/ _SLIST_HEADER ListHead;
	/*0000*/ _SINGLE_LIST_ENTRY SingleListHead;
	/*0010*/ USHORT Depth;
	/*0012*/ USHORT MaximumDepth;
	/*0014*/ ULONG TotalAllocates;
	/*0018*/ ULONG AllocateMisses;
	/*0018*/ ULONG AllocateHits;
	/*001c*/ ULONG TotalFrees;
	/*0020*/ ULONG FreeMisses;
	/*0020*/ ULONG FreeHits;
	/*0024*/ _POOL_TYPE Type;
	/*0028*/ ULONG Tag;
	/*002c*/ ULONG Size;
	/*0030*/ void * (* AllocateEx)( _POOL_TYPE , ULONGLONG , ULONG , _LOOKASIDE_LIST_EX * );
	/*0030*/ void * (* Allocate)( _POOL_TYPE , ULONGLONG , ULONG );
	/*0038*/ void (* FreeEx)( void * , _LOOKASIDE_LIST_EX * );
	/*0038*/ void (* Free)( void * );
	/*0040*/ _LIST_ENTRY ListEntry;
	/*0050*/ ULONG LastTotalAllocates;
	/*0054*/ ULONG LastAllocateMisses;
	/*0054*/ ULONG LastAllocateHits;
	/*0058*/ ULONG Future[0x2];
	/*0060*/
};

struct _GENERIC_MAPPING {
	/*0000*/ ULONG GenericRead;
	/*0004*/ ULONG GenericWrite;
	/*0008*/ ULONG GenericExecute;
	/*000c*/ ULONG GenericAll;
	/*0010*/
};

struct _GROUP_AFFINITY {
	/*0000*/ ULONGLONG Mask;
	/*0008*/ USHORT Group;
	/*000a*/ USHORT Reserved[0x3];
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
	/*0000*/ ULONG NextHandleNeedingPool;
	/*0004*/ LONG ExtraInfoPages;
	/*0008*/ ULONGLONG volatile TableCode;
	/*0010*/ _EPROCESS * QuotaProcess;
	/*0018*/ _LIST_ENTRY HandleTableList;
	/*0028*/ ULONG UniqueProcessId;
	/*002c*/ ULONG Flags;
	/*002c*/ UCHAR StrictFIFO : 01; // 0x01;
	/*002c*/ UCHAR EnableHandleExceptions : 01; // 0x02;
	/*002c*/ UCHAR Rundown : 01; // 0x04;
	/*002c*/ UCHAR Duplicated : 01; // 0x08;
	/*002c*/ UCHAR RaiseUMExceptionOnInvalidHandleClose : 01; // 0x10;
	/*0030*/ _EX_PUSH_LOCK HandleContentionEvent;
	/*0038*/ _EX_PUSH_LOCK HandleTableLock;
	/*0040*/ _HANDLE_TABLE_FREE_LIST FreeLists[0x1];
	/*0040*/ UCHAR ActualEntry[0x20];
	/*0060*/ _HANDLE_TRACE_DEBUG_INFO * DebugInfo;
	/*0080*/
};

union _HANDLE_TABLE_ENTRY {
	/*0000*/ LONGLONG volatile VolatileLowValue;
	/*0000*/ LONGLONG LowValue;
	/*0000*/ _HANDLE_TABLE_ENTRY_INFO * volatile InfoTable;
	/*0008*/ LONGLONG HighValue;
	/*0008*/ _HANDLE_TABLE_ENTRY * NextFreeHandleEntry;
	/*0008*/ _EXHANDLE LeafHandleValue;
	/*0000*/ LONGLONG RefCountField;
	/*0000*/ ULONGLONG Unlocked : 01; // 0x0000000000000001;
	/*0000*/ ULONGLONG RefCnt : 16; // 0x000000000001fffe;
	/*0000*/ ULONGLONG Attributes : 03; // 0x00000000000e0000;
	/*0000*/ ULONGLONG ObjectPointerBits : 44; // 0xfffffffffff00000;
	/*0008*/ ULONG GrantedAccessBits : 25; // 0x01ffffff;
	/*0008*/ ULONG NoRightsUpgrade : 01; // 0x02000000;
	/*0008*/ ULONG Spare1 : 06; // 0xfc000000;
	/*000c*/ ULONG Spare2;
	/*0010*/
};

struct _HANDLE_TABLE_ENTRY_INFO {
	/*0000*/ ULONG AuditMask;
	/*0004*/ ULONG MaxRelativeAccessMask;
	/*0008*/
};

struct _HANDLE_TABLE_FREE_LIST {
	/*0000*/ _EX_PUSH_LOCK FreeListLock;
	/*0008*/ _HANDLE_TABLE_ENTRY * FirstFreeHandleEntry;
	/*0010*/ _HANDLE_TABLE_ENTRY * LastFreeHandleEntry;
	/*0018*/ LONG HandleCount;
	/*001c*/ ULONG HighWaterMark;
	/*0040*/
};

struct _HANDLE_TRACE_DB_ENTRY {
	/*0000*/ _CLIENT_ID ClientId;
	/*0010*/ void * Handle;
	/*0018*/ ULONG Type;
	/*0020*/ void * StackTrace[0x10];
	/*00a0*/
};

struct _HANDLE_TRACE_DEBUG_INFO {
	/*0000*/ LONG RefCount;
	/*0004*/ ULONG TableSize;
	/*0008*/ ULONG BitMaskFlags;
	/*0010*/ _FAST_MUTEX CloseCompactionLock;
	/*0048*/ ULONG CurrentStackIndex;
	/*0050*/ _HANDLE_TRACE_DB_ENTRY TraceDb[0x1];
	/*00f0*/
};

enum _HARDWARE_COUNTER_TYPE {
	PMCCounter = 0x0,
	MaxHardwareCounterType = 0x1
};

struct _HEAP {
	/*0000*/ _HEAP_SEGMENT Segment;
	/*0000*/ _HEAP_ENTRY Entry;
	/*0010*/ ULONG SegmentSignature;
	/*0014*/ ULONG SegmentFlags;
	/*0018*/ _LIST_ENTRY SegmentListEntry;
	/*0028*/ _HEAP * Heap;
	/*0030*/ void * BaseAddress;
	/*0038*/ ULONG NumberOfPages;
	/*0040*/ _HEAP_ENTRY * FirstEntry;
	/*0048*/ _HEAP_ENTRY * LastValidEntry;
	/*0050*/ ULONG NumberOfUnCommittedPages;
	/*0054*/ ULONG NumberOfUnCommittedRanges;
	/*0058*/ USHORT SegmentAllocatorBackTraceIndex;
	/*005a*/ USHORT Reserved;
	/*0060*/ _LIST_ENTRY UCRSegmentList;
	/*0070*/ ULONG Flags;
	/*0074*/ ULONG ForceFlags;
	/*0078*/ ULONG CompatibilityFlags;
	/*007c*/ ULONG EncodeFlagMask;
	/*0080*/ _HEAP_ENTRY Encoding;
	/*0090*/ ULONG Interceptor;
	/*0094*/ ULONG VirtualMemoryThreshold;
	/*0098*/ ULONG Signature;
	/*00a0*/ ULONGLONG SegmentReserve;
	/*00a8*/ ULONGLONG SegmentCommit;
	/*00b0*/ ULONGLONG DeCommitFreeBlockThreshold;
	/*00b8*/ ULONGLONG DeCommitTotalFreeThreshold;
	/*00c0*/ ULONGLONG TotalFreeSize;
	/*00c8*/ ULONGLONG MaximumAllocationSize;
	/*00d0*/ USHORT ProcessHeapsListIndex;
	/*00d2*/ USHORT HeaderValidateLength;
	/*00d8*/ void * HeaderValidateCopy;
	/*00e0*/ USHORT NextAvailableTagIndex;
	/*00e2*/ USHORT MaximumTagIndex;
	/*00e8*/ _HEAP_TAG_ENTRY * TagEntries;
	/*00f0*/ _LIST_ENTRY UCRList;
	/*0100*/ ULONGLONG AlignRound;
	/*0108*/ ULONGLONG AlignMask;
	/*0110*/ _LIST_ENTRY VirtualAllocdBlocks;
	/*0120*/ _LIST_ENTRY SegmentList;
	/*0130*/ USHORT AllocatorBackTraceIndex;
	/*0134*/ ULONG NonDedicatedListLength;
	/*0138*/ void * BlocksIndex;
	/*0140*/ void * UCRIndex;
	/*0148*/ _HEAP_PSEUDO_TAG_ENTRY * PseudoTagEntries;
	/*0150*/ _LIST_ENTRY FreeLists;
	/*0160*/ _HEAP_LOCK * LockVariable;
	/*0168*/ LONG (* CommitRoutine)( void * , void * * , ULONGLONG * );
	/*0170*/ _RTL_RUN_ONCE StackTraceInitVar;
	/*0178*/ void * FrontEndHeap;
	/*0180*/ USHORT FrontHeapLockCount;
	/*0182*/ UCHAR FrontEndHeapType;
	/*0183*/ UCHAR RequestedFrontEndHeapType;
	/*0188*/ USHORT * FrontEndHeapUsageData;
	/*0190*/ USHORT FrontEndHeapMaximumIndex;
	/*0192*/ UCHAR volatile FrontEndHeapStatusBitmap[0x81];
	/*0218*/ _HEAP_COUNTERS Counters;
	/*0290*/ _HEAP_TUNING_PARAMETERS TuningParameters;
	/*02a0*/
};

struct _HEAP_BUCKET {
	/*0000*/ USHORT BlockUnits;
	/*0002*/ UCHAR SizeIndex;
	/*0003*/ UCHAR UseAffinity : 01; // 0x01;
	/*0003*/ UCHAR DebugFlags : 02; // 0x06;
	/*0003*/ UCHAR volatile Flags;
	/*0004*/
};

union _HEAP_BUCKET_COUNTERS {
	/*0000*/ ULONG TotalBlocks;
	/*0004*/ ULONG SubSegmentCounts;
	/*0000*/ LONGLONG Aggregate64;
	/*0008*/
};

union _HEAP_BUCKET_RUN_INFO {
	/*0000*/ ULONG Bucket;
	/*0004*/ ULONG RunLength;
	/*0000*/ LONGLONG Aggregate64;
	/*0008*/
};

struct _HEAP_COUNTERS {
	/*0000*/ ULONGLONG TotalMemoryReserved;
	/*0008*/ ULONGLONG TotalMemoryCommitted;
	/*0010*/ ULONGLONG TotalMemoryLargeUCR;
	/*0018*/ ULONGLONG TotalSizeInVirtualBlocks;
	/*0020*/ ULONG TotalSegments;
	/*0024*/ ULONG TotalUCRs;
	/*0028*/ ULONG CommittOps;
	/*002c*/ ULONG DeCommitOps;
	/*0030*/ ULONG LockAcquires;
	/*0034*/ ULONG LockCollisions;
	/*0038*/ ULONG CommitRate;
	/*003c*/ ULONG DecommittRate;
	/*0040*/ ULONG CommitFailures;
	/*0044*/ ULONG InBlockCommitFailures;
	/*0048*/ ULONG PollIntervalCounter;
	/*004c*/ ULONG DecommitsSinceLastCheck;
	/*0050*/ ULONG HeapPollInterval;
	/*0054*/ ULONG AllocAndFreeOps;
	/*0058*/ ULONG AllocationIndicesActive;
	/*005c*/ ULONG InBlockDeccommits;
	/*0060*/ ULONGLONG InBlockDeccomitSize;
	/*0068*/ ULONGLONG HighWatermarkSize;
	/*0070*/ ULONGLONG LastPolledSize;
	/*0078*/
};

struct _HEAP_DESCRIPTOR_KEY {
	/*0000*/ ULONG Key;
	/*0000*/ ULONG Ignore : 08; // 0x000000ff;
	/*0000*/ ULONG EncodedCommittedPageCount : 16; // 0x00ffff00;
	/*0000*/ ULONG UnitCount : 08; // 0xff000000;
	/*0004*/
};

struct _HEAP_ENTRY {
	/*0000*/ _HEAP_UNPACKED_ENTRY UnpackedEntry;
	/*0000*/ void * PreviousBlockPrivateData;
	/*0008*/ USHORT Size;
	/*000a*/ UCHAR Flags;
	/*000b*/ UCHAR SmallTagIndex;
	/*0008*/ ULONG SubSegmentCode;
	/*000c*/ USHORT PreviousSize;
	/*000e*/ UCHAR SegmentOffset;
	/*000e*/ UCHAR LFHFlags;
	/*000f*/ UCHAR UnusedBytes;
	/*0008*/ ULONGLONG CompactHeader;
	/*0000*/ _HEAP_EXTENDED_ENTRY ExtendedEntry;
	/*0000*/ void * Reserved;
	/*0008*/ USHORT FunctionIndex;
	/*000a*/ USHORT ContextValue;
	/*0008*/ ULONG InterceptorValue;
	/*000c*/ USHORT UnusedBytesLength;
	/*000e*/ UCHAR EntryOffset;
	/*000f*/ UCHAR ExtendedBlockSignature;
	/*0000*/ void * ReservedForAlignment;
	/*0008*/ ULONG Code1;
	/*000c*/ USHORT Code2;
	/*000e*/ UCHAR Code3;
	/*000f*/ UCHAR Code4;
	/*000c*/ ULONG Code234;
	/*0008*/ ULONGLONG AgregateCode;
	/*0010*/
};

struct _HEAP_ENTRY_EXTRA {
	/*0000*/ USHORT AllocatorBackTraceIndex;
	/*0002*/ USHORT TagIndex;
	/*0008*/ ULONGLONG Settable;
	/*0000*/ ULONGLONG ZeroInit;
	/*0008*/ ULONGLONG ZeroInit1;
	/*0010*/
};

struct _HEAP_EXTENDED_ENTRY {
	/*0000*/ void * Reserved;
	/*0008*/ USHORT FunctionIndex;
	/*000a*/ USHORT ContextValue;
	/*0008*/ ULONG InterceptorValue;
	/*000c*/ USHORT UnusedBytesLength;
	/*000e*/ UCHAR EntryOffset;
	/*000f*/ UCHAR ExtendedBlockSignature;
	/*0010*/
};

struct _HEAP_FAILURE_INFORMATION {
	/*0000*/ ULONG Version;
	/*0004*/ ULONG StructureSize;
	/*0008*/ _HEAP_FAILURE_TYPE FailureType;
	/*0010*/ void * HeapAddress;
	/*0018*/ void * Address;
	/*0020*/ void * Param1;
	/*0028*/ void * Param2;
	/*0030*/ void * Param3;
	/*0038*/ _HEAP_ENTRY * PreviousBlock;
	/*0040*/ _HEAP_ENTRY * NextBlock;
	/*0048*/ _HEAP_ENTRY ExpectedEncodedEntry;
	/*0058*/ _HEAP_ENTRY ExpectedDecodedEntry;
	/*0068*/ void * StackTrace[0x20];
	/*0168*/ UCHAR HeapMajorVersion;
	/*0169*/ UCHAR HeapMinorVersion;
	/*0170*/ _EXCEPTION_RECORD ExceptionRecord;
	/*0210*/ _CONTEXT ContextRecord;
	/*06e0*/
};

enum _HEAP_FAILURE_TYPE {
	heap_failure_internal = 0x0,
	heap_failure_unknown = 0x1,
	heap_failure_generic = 0x2,
	heap_failure_entry_corruption = 0x3,
	heap_failure_multiple_entries_corruption = 0x4,
	heap_failure_virtual_block_corruption = 0x5,
	heap_failure_buffer_overrun = 0x6,
	heap_failure_buffer_underrun = 0x7,
	heap_failure_block_not_busy = 0x8,
	heap_failure_invalid_argument = 0x9,
	heap_failure_usage_after_free = 0xa,
	heap_failure_cross_heap_operation = 0xb,
	heap_failure_freelists_corruption = 0xc,
	heap_failure_listentry_corruption = 0xd,
	heap_failure_lfh_bitmap_mismatch = 0xe,
	heap_failure_segment_lfh_bitmap_corruption = 0xf,
	heap_failure_segment_lfh_double_free = 0x10,
	heap_failure_vs_subsegment_corruption = 0x11,
	heap_failure_null_heap = 0x12
};

struct _HEAP_FREE_ENTRY {
	/*0000*/ _HEAP_ENTRY HeapEntry;
	/*0000*/ _HEAP_UNPACKED_ENTRY UnpackedEntry;
	/*0000*/ void * PreviousBlockPrivateData;
	/*0008*/ USHORT Size;
	/*000a*/ UCHAR Flags;
	/*000b*/ UCHAR SmallTagIndex;
	/*0008*/ ULONG SubSegmentCode;
	/*000c*/ USHORT PreviousSize;
	/*000e*/ UCHAR SegmentOffset;
	/*000e*/ UCHAR LFHFlags;
	/*000f*/ UCHAR UnusedBytes;
	/*0008*/ ULONGLONG CompactHeader;
	/*0000*/ _HEAP_EXTENDED_ENTRY ExtendedEntry;
	/*0000*/ void * Reserved;
	/*0008*/ USHORT FunctionIndex;
	/*000a*/ USHORT ContextValue;
	/*0008*/ ULONG InterceptorValue;
	/*000c*/ USHORT UnusedBytesLength;
	/*000e*/ UCHAR EntryOffset;
	/*000f*/ UCHAR ExtendedBlockSignature;
	/*0000*/ void * ReservedForAlignment;
	/*0008*/ ULONG Code1;
	/*000c*/ USHORT Code2;
	/*000e*/ UCHAR Code3;
	/*000f*/ UCHAR Code4;
	/*000c*/ ULONG Code234;
	/*0008*/ ULONGLONG AgregateCode;
	/*0010*/ _LIST_ENTRY FreeList;
	/*0020*/
};

struct _HEAP_GLOBAL_APPCOMPAT_FLAGS {
	/*0000*/ ULONG SafeInputValidation : 01; // 0x00000001;
	/*0000*/ ULONG Padding : 01; // 0x00000002;
	/*0000*/ ULONG CommitLFHSubsegments : 01; // 0x00000004;
	/*0004*/
};

struct _HEAP_LARGE_ALLOC_DATA {
	/*0000*/ _RTL_BALANCED_NODE TreeNode;
	/*0018*/ ULONGLONG VirtualAddress;
	/*0018*/ ULONGLONG UnusedBytes : 16; // 0x000000000000ffff;
	/*0020*/ ULONGLONG ExtraPresent : 01; // 0x0000000000000001;
	/*0020*/ ULONGLONG Spare : 11; // 0x0000000000000ffe;
	/*0020*/ ULONGLONG AllocatedPages : 52; // 0xfffffffffffff000;
	/*0028*/
};

struct _HEAP_LFH_AFFINITY_SLOT {
	/*0000*/ _HEAP_LFH_SUBSEGMENT_OWNER State;
	/*0038*/ _HEAP_LFH_FAST_REF ActiveSubsegment;
	/*0040*/
};

struct _HEAP_LFH_BUCKET {
	/*0000*/ _HEAP_LFH_SUBSEGMENT_OWNER State;
	/*0038*/ ULONGLONG TotalBlockCount;
	/*0040*/ ULONGLONG TotalSubsegmentCount;
	/*0048*/ ULONG ReciprocalBlockSize;
	/*004c*/ UCHAR Shift;
	/*004d*/ UCHAR ContentionCount;
	/*0050*/ _RTL_SRWLOCK AffinityMappingLock;
	/*0058*/ UCHAR * ProcAffinityMapping;
	/*0060*/ _HEAP_LFH_AFFINITY_SLOT * * AffinitySlots;
	/*0068*/
};

struct _HEAP_LFH_CONTEXT {
	/*0000*/ void * BackendCtx;
	/*0008*/ _HEAP_SUBALLOCATOR_CALLBACKS Callbacks;
	/*0030*/ UCHAR MaxAffinity;
	/*0038*/ UCHAR const * AffinityModArray;
	/*0040*/ _HEAP_RUNTIME_MEMORY_STATS * MemStats;
	/*0048*/ _RTL_SRWLOCK SubsegmentCreationLock;
	/*0050*/ _HEAP_LFH_SUBSEGMENT_STATS BucketStats;
	/*0060*/ _HEAP_LFH_SUBSEGMENT_CACHE SubsegmentCache;
	/*00d0*/ _HEAP_LFH_BUCKET * Buckets[0x81];
	/*04e0*/
};

struct _HEAP_LFH_FAST_REF {
	/*0000*/ void * Target;
	/*0000*/ ULONGLONG Value;
	/*0000*/ ULONGLONG RefCount : 12; // 0x0000000000000fff;
	/*0008*/
};

enum _HEAP_LFH_LOCKMODE {
	HeapLockNotHeld = 0x0,
	HeapLockShared = 0x1,
	HeapLockExclusive = 0x2
};

struct _HEAP_LFH_MEM_POLICIES {
	/*0000*/ ULONG DisableAffinity : 01; // 0x00000001;
	/*0000*/ ULONG SlowSubsegmentGrowth : 01; // 0x00000002;
	/*0000*/ ULONG Spare : 30; // 0xfffffffc;
	/*0000*/ ULONG AllPolicies;
	/*0004*/
};

union _HEAP_LFH_ONDEMAND_POINTER {
	/*0000*/ USHORT Invalid : 01; // 0x0001;
	/*0000*/ USHORT AllocationInProgress : 01; // 0x0002;
	/*0000*/ USHORT Spare0 : 14; // 0xfffc;
	/*0002*/ USHORT UsageData;
	/*0000*/ void * AllBits;
	/*0008*/
};

union _HEAP_LFH_PACKED_SLOT {
	/*0000*/ USHORT Index : 08; // 0x00ff;
	/*0000*/ USHORT Start : 08; // 0xff00;
	/*0000*/ USHORT Data;
	/*0002*/
};

struct _HEAP_LFH_SUBSEGMENT {
	/*0000*/ _LIST_ENTRY ListEntry;
	/*0000*/ _SLIST_ENTRY Link;
	/*0010*/ _HEAP_LFH_SUBSEGMENT_OWNER * Owner;
	/*0010*/ _HEAP_LFH_SUBSEGMENT_DELAY_FREE DelayFree;
	/*0018*/ _RTL_SRWLOCK CommitLock;
	/*0020*/ USHORT FreeCount;
	/*0022*/ USHORT BlockCount;
	/*0020*/ SHORT volatile InterlockedShort;
	/*0020*/ LONG volatile InterlockedLong;
	/*0024*/ USHORT FreeHint;
	/*0026*/ UCHAR Location;
	/*0027*/ UCHAR Spare;
	/*0028*/ _HEAP_LFH_SUBSEGMENT_ENCODED_OFFSETS BlockOffsets;
	/*002c*/ UCHAR CommitUnitShift;
	/*002d*/ UCHAR CommitUnitCount;
	/*002e*/ USHORT CommitStateOffset;
	/*0030*/ ULONGLONG BlockBitmap[0x1];
	/*0040*/
};

struct _HEAP_LFH_SUBSEGMENT_CACHE {
	/*0000*/ _SLIST_HEADER SLists[0x7];
	/*0070*/
};

union _HEAP_LFH_SUBSEGMENT_DELAY_FREE {
	/*0000*/ ULONGLONG DelayFree : 01; // 0x0000000000000001;
	/*0000*/ ULONGLONG Count : 63; // 0xfffffffffffffffe;
	/*0000*/ void * AllBits;
	/*0008*/
};

struct _HEAP_LFH_SUBSEGMENT_ENCODED_OFFSETS {
	/*0000*/ USHORT BlockSize;
	/*0002*/ USHORT FirstBlockOffset;
	/*0000*/ ULONG EncodedData;
	/*0004*/
};

struct _HEAP_LFH_SUBSEGMENT_OWNER {
	/*0000*/ UCHAR IsBucket : 01; // 0x01;
	/*0000*/ UCHAR Spare0 : 07; // 0xfe;
	/*0001*/ UCHAR BucketIndex;
	/*0002*/ UCHAR SlotCount;
	/*0002*/ UCHAR SlotIndex;
	/*0003*/ UCHAR Spare1;
	/*0008*/ ULONGLONG AvailableSubsegmentCount;
	/*0010*/ _RTL_SRWLOCK Lock;
	/*0018*/ _LIST_ENTRY AvailableSubsegmentList;
	/*0028*/ _LIST_ENTRY FullSubsegmentList;
	/*0038*/
};

struct _HEAP_LFH_SUBSEGMENT_STAT {
	/*0000*/ UCHAR Index;
	/*0001*/ UCHAR Count;
	/*0002*/
};

union _HEAP_LFH_SUBSEGMENT_STATS {
	/*0000*/ _HEAP_LFH_SUBSEGMENT_STAT Buckets[0x4];
	/*0000*/ void * AllStats;
	/*0008*/
};

struct _HEAP_LFH_UNUSED_BYTES_INFO {
	/*0000*/ USHORT UnusedBytes : 14; // 0x3fff;
	/*0000*/ USHORT ExtraPresent : 01; // 0x4000;
	/*0000*/ USHORT OneByteUnused : 01; // 0x8000;
	/*0000*/ UCHAR Bytes[0x2];
	/*0002*/
};

struct _HEAP_LIST_LOOKUP {
	/*0000*/ _HEAP_LIST_LOOKUP * ExtendedLookup;
	/*0008*/ ULONG ArraySize;
	/*000c*/ ULONG ExtraItem;
	/*0010*/ ULONG ItemCount;
	/*0014*/ ULONG OutOfRangeItems;
	/*0018*/ ULONG BaseIndex;
	/*0020*/ _LIST_ENTRY * ListHead;
	/*0028*/ ULONG * ListsInUseUlong;
	/*0030*/ _LIST_ENTRY * * ListHints;
	/*0038*/
};

struct _HEAP_LOCAL_DATA {
	/*0000*/ _SLIST_HEADER DeletedSubSegments;
	/*0010*/ _LFH_BLOCK_ZONE * volatile CrtZone;
	/*0018*/ _LFH_HEAP * LowFragHeap;
	/*0020*/ ULONG Sequence;
	/*0024*/ ULONG DeleteRateThreshold;
	/*0030*/
};

struct _HEAP_LOCAL_SEGMENT_INFO {
	/*0000*/ _HEAP_LOCAL_DATA * LocalData;
	/*0008*/ _HEAP_SUBSEGMENT * volatile ActiveSubsegment;
	/*0010*/ _HEAP_SUBSEGMENT * volatile CachedItems[0x10];
	/*0090*/ _SLIST_HEADER SListHeader;
	/*00a0*/ _HEAP_BUCKET_COUNTERS volatile Counters;
	/*00a8*/ ULONG LastOpSequence;
	/*00ac*/ USHORT BucketIndex;
	/*00ae*/ USHORT LastUsed;
	/*00b0*/ USHORT NoThrashCount;
	/*00c0*/
};

struct _HEAP_LOCK {
	union {
		/*0000*/ _RTL_CRITICAL_SECTION CriticalSection;
		/*0028*/
	} Lock;
	/*0028*/
};

struct _HEAP_PAGE_RANGE_DESCRIPTOR {
	/*0000*/ _RTL_BALANCED_NODE TreeNode;
	/*0000*/ ULONG TreeSignature;
	/*0004*/ ULONG UnusedBytes;
	/*0008*/ USHORT ExtraPresent : 01; // 0x0001;
	/*0008*/ USHORT Spare0 : 15; // 0xfffe;
	/*0018*/ UCHAR volatile RangeFlags;
	/*0019*/ UCHAR CommittedPageCount;
	/*001a*/ USHORT Spare;
	/*001c*/ _HEAP_DESCRIPTOR_KEY Key;
	/*001c*/ UCHAR Align[0x3];
	/*001f*/ UCHAR UnitOffset;
	/*001f*/ UCHAR UnitSize;
	/*0020*/
};

union _HEAP_PAGE_SEGMENT {
	/*0000*/ _LIST_ENTRY ListEntry;
	/*0010*/ ULONGLONG Signature;
	/*0018*/ UCHAR UnusedWatermark;
	/*0000*/ _HEAP_PAGE_RANGE_DESCRIPTOR DescArray[0x100];
	/*2000*/
};

struct _HEAP_PSEUDO_TAG_ENTRY {
	/*0000*/ ULONG Allocs;
	/*0004*/ ULONG Frees;
	/*0008*/ ULONGLONG Size;
	/*0010*/
};

struct _HEAP_RUNTIME_MEMORY_STATS {
	/*0000*/ ULONGLONG volatile TotalReservedPages;
	/*0008*/ ULONGLONG volatile TotalCommittedPages;
	/*0010*/ ULONGLONG FreeCommittedPages;
	/*0018*/ ULONGLONG LfhFreeCommittedPages;
	/*0020*/
};

struct _HEAP_SEGMENT {
	/*0000*/ _HEAP_ENTRY Entry;
	/*0010*/ ULONG SegmentSignature;
	/*0014*/ ULONG SegmentFlags;
	/*0018*/ _LIST_ENTRY SegmentListEntry;
	/*0028*/ _HEAP * Heap;
	/*0030*/ void * BaseAddress;
	/*0038*/ ULONG NumberOfPages;
	/*0040*/ _HEAP_ENTRY * FirstEntry;
	/*0048*/ _HEAP_ENTRY * LastValidEntry;
	/*0050*/ ULONG NumberOfUnCommittedPages;
	/*0054*/ ULONG NumberOfUnCommittedRanges;
	/*0058*/ USHORT SegmentAllocatorBackTraceIndex;
	/*005a*/ USHORT Reserved;
	/*0060*/ _LIST_ENTRY UCRSegmentList;
	/*0070*/
};

struct _HEAP_SEG_CONTEXT {
	/*0000*/ ULONGLONG SegmentMask;
	/*0008*/ UCHAR UnitShift;
	/*0009*/ UCHAR PagesPerUnitShift;
	/*000a*/ UCHAR FirstDescriptorIndex;
	/*000b*/ UCHAR CachedCommitSoftShift;
	/*000c*/ UCHAR CachedCommitHighShift;
	/*0010*/ ULONG MaxAllocationSize;
	/*0018*/ _RTL_SRWLOCK SegmentLock;
	/*0020*/ _LIST_ENTRY SegmentListHead;
	/*0030*/ ULONGLONG SegmentCount;
	/*0038*/ _RTL_RB_TREE FreePageRanges;
	/*0048*/ _HEAP_RUNTIME_MEMORY_STATS * MemStats;
	/*0050*/ void * LfhContext;
	/*0058*/ void * VsContext;
	/*0060*/ void * Heap;
	/*0068*/
};

struct _HEAP_SUBALLOCATOR_CALLBACKS {
	/*0000*/ ULONGLONG Allocate;
	/*0008*/ ULONGLONG Free;
	/*0010*/ ULONGLONG Commit;
	/*0018*/ ULONGLONG Decommit;
	/*0020*/ ULONGLONG ExtendContext;
	/*0028*/
};

struct _HEAP_SUBSEGMENT {
	/*0000*/ _HEAP_LOCAL_SEGMENT_INFO * LocalInfo;
	/*0008*/ _HEAP_USERDATA_HEADER * UserBlocks;
	/*0010*/ _SLIST_HEADER DelayFreeList;
	/*0020*/ _INTERLOCK_SEQ volatile AggregateExchg;
	/*0024*/ USHORT volatile BlockSize;
	/*0026*/ USHORT Flags;
	/*0028*/ USHORT BlockCount;
	/*002a*/ UCHAR SizeIndex;
	/*002b*/ UCHAR AffinityIndex;
	/*0024*/ ULONG Alignment[0x2];
	/*002c*/ ULONG volatile Lock;
	/*0030*/ _SINGLE_LIST_ENTRY SFreeListEntry;
	/*0040*/
};

struct _HEAP_TAG_ENTRY {
	/*0000*/ ULONG Allocs;
	/*0004*/ ULONG Frees;
	/*0008*/ ULONGLONG Size;
	/*0010*/ USHORT TagIndex;
	/*0012*/ USHORT CreatorBackTraceIndex;
	/*0014*/ WCHAR TagName[0x18];
	/*0048*/
};

struct _HEAP_TUNING_PARAMETERS {
	/*0000*/ ULONG CommittThresholdShift;
	/*0008*/ ULONGLONG MaxPreCommittThreshold;
	/*0010*/
};

struct _HEAP_UCR_DESCRIPTOR {
	/*0000*/ _LIST_ENTRY ListEntry;
	/*0010*/ _LIST_ENTRY SegmentEntry;
	/*0020*/ void * Address;
	/*0028*/ ULONGLONG Size;
	/*0030*/
};

struct _HEAP_UNPACKED_ENTRY {
	/*0000*/ void * PreviousBlockPrivateData;
	/*0008*/ USHORT Size;
	/*000a*/ UCHAR Flags;
	/*000b*/ UCHAR SmallTagIndex;
	/*0008*/ ULONG SubSegmentCode;
	/*000c*/ USHORT PreviousSize;
	/*000e*/ UCHAR SegmentOffset;
	/*000e*/ UCHAR LFHFlags;
	/*000f*/ UCHAR UnusedBytes;
	/*0008*/ ULONGLONG CompactHeader;
	/*0010*/
};

struct _HEAP_USERDATA_HEADER {
	/*0000*/ _SINGLE_LIST_ENTRY SFreeListEntry;
	/*0000*/ _HEAP_SUBSEGMENT * SubSegment;
	/*0008*/ void * Reserved;
	/*0010*/ ULONG SizeIndexAndPadding;
	/*0010*/ UCHAR SizeIndex;
	/*0011*/ UCHAR GuardPagePresent;
	/*0012*/ USHORT PaddingBytes;
	/*0014*/ ULONG Signature;
	/*0018*/ _HEAP_USERDATA_OFFSETS EncodedOffsets;
	/*0020*/ _RTL_BITMAP_EX BusyBitmap;
	/*0030*/ ULONGLONG BitmapData[0x1];
	/*0038*/
};

struct _HEAP_USERDATA_OFFSETS {
	/*0000*/ USHORT FirstAllocationOffset;
	/*0002*/ USHORT BlockStride;
	/*0000*/ ULONG StrideAndOffset;
	/*0004*/
};

struct _HEAP_VIRTUAL_ALLOC_ENTRY {
	/*0000*/ _LIST_ENTRY Entry;
	/*0010*/ _HEAP_ENTRY_EXTRA ExtraStuff;
	/*0020*/ ULONGLONG CommitSize;
	/*0028*/ ULONGLONG ReserveSize;
	/*0030*/ _HEAP_ENTRY BusyBlock;
	/*0040*/
};

struct _HEAP_VS_CHUNK_FREE_HEADER {
	/*0000*/ _HEAP_VS_CHUNK_HEADER Header;
	/*0000*/ ULONGLONG OverlapsHeader;
	/*0008*/ _RTL_BALANCED_NODE Node;
	/*0020*/
};

struct _HEAP_VS_CHUNK_HEADER {
	/*0000*/ _HEAP_VS_CHUNK_HEADER_SIZE Sizes;
	/*0008*/ ULONG EncodedSegmentPageOffset : 08; // 0x000000ff;
	/*0008*/ ULONG UnusedBytes : 01; // 0x00000100;
	/*0008*/ ULONG SkipDuringWalk : 01; // 0x00000200;
	/*0008*/ ULONG Spare : 22; // 0xfffffc00;
	/*0008*/ ULONG AllocatedChunkBits;
	/*0010*/
};

union _HEAP_VS_CHUNK_HEADER_SIZE {
	/*0000*/ ULONG MemoryCost : 16; // 0x0000ffff;
	/*0000*/ ULONG UnsafeSize : 16; // 0xffff0000;
	/*0004*/ ULONG UnsafePrevSize : 16; // 0x0000ffff;
	/*0004*/ ULONG Allocated : 08; // 0x00ff0000;
	/*0000*/ USHORT KeyUShort;
	/*0000*/ ULONG KeyULong;
	/*0000*/ ULONGLONG HeaderBits;
	/*0008*/
};

struct _HEAP_VS_CONTEXT {
	/*0000*/ _RTL_SRWLOCK Lock;
	/*0008*/ _RTL_RB_TREE FreeChunkTree;
	/*0018*/ _LIST_ENTRY SubsegmentList;
	/*0028*/ ULONGLONG TotalCommittedUnits;
	/*0030*/ ULONGLONG FreeCommittedUnits;
	/*0038*/ void * BackendCtx;
	/*0040*/ _HEAP_SUBALLOCATOR_CALLBACKS Callbacks;
	/*0068*/ ULONG Flags;
	/*0070*/
};

struct _HEAP_VS_SUBSEGMENT {
	/*0000*/ _LIST_ENTRY ListEntry;
	/*0010*/ ULONGLONG CommitBitmap;
	/*0018*/ _RTL_SRWLOCK CommitLock;
	/*0020*/ USHORT Size;
	/*0022*/ USHORT Signature;
	/*0028*/
};

struct _HEAP_VS_UNUSED_BYTES_INFO {
	/*0000*/ USHORT UnusedBytes : 13; // 0x1fff;
	/*0000*/ USHORT LfhSubsegment : 01; // 0x2000;
	/*0000*/ USHORT ExtraPresent : 01; // 0x4000;
	/*0000*/ USHORT OneByteUnused : 01; // 0x8000;
	/*0000*/ UCHAR Bytes[0x2];
	/*0002*/
};

struct _IMAGE_DATA_DIRECTORY {
	/*0000*/ ULONG VirtualAddress;
	/*0004*/ ULONG Size;
	/*0008*/
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

struct _IMAGE_NT_HEADERS64 {
	/*0000*/ ULONG Signature;
	/*0004*/ _IMAGE_FILE_HEADER FileHeader;
	/*0018*/ _IMAGE_OPTIONAL_HEADER64 OptionalHeader;
	/*0108*/
};

struct _IMAGE_OPTIONAL_HEADER64 {
	/*0000*/ USHORT Magic;
	/*0002*/ UCHAR MajorLinkerVersion;
	/*0003*/ UCHAR MinorLinkerVersion;
	/*0004*/ ULONG SizeOfCode;
	/*0008*/ ULONG SizeOfInitializedData;
	/*000c*/ ULONG SizeOfUninitializedData;
	/*0010*/ ULONG AddressOfEntryPoint;
	/*0014*/ ULONG BaseOfCode;
	/*0018*/ ULONGLONG ImageBase;
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
	/*0048*/ ULONGLONG SizeOfStackReserve;
	/*0050*/ ULONGLONG SizeOfStackCommit;
	/*0058*/ ULONGLONG SizeOfHeapReserve;
	/*0060*/ ULONGLONG SizeOfHeapCommit;
	/*0068*/ ULONG LoaderFlags;
	/*006c*/ ULONG NumberOfRvaAndSizes;
	/*0070*/ _IMAGE_DATA_DIRECTORY DataDirectory[0x10];
	/*00f0*/
};

struct _IMAGE_RUNTIME_FUNCTION_ENTRY {
	/*0000*/ ULONG BeginAddress;
	/*0004*/ ULONG EndAddress;
	/*0008*/ ULONG UnwindInfoAddress;
	/*0008*/ ULONG UnwindData;
	/*000c*/
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
	/*0008*/ void * Context;
	/*0010*/ void (* InterfaceReference)( void * );
	/*0018*/ void (* InterfaceDereference)( void * );
	/*0020*/
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
	Vmcs = 0x10,
	ACPIBus = 0x11,
	MaximumInterfaceType = 0x12
};

enum _INTERLOCKED_RESULT {
	ResultNegative = 0x1,
	ResultZero = 0x0,
	ResultPositive = 0x2
};

struct _INTERLOCK_SEQ {
	/*0000*/ USHORT Depth;
	/*0002*/ USHORT Hint : 15; // 0x7fff;
	/*0002*/ USHORT Lock : 01; // 0x8000;
	/*0002*/ USHORT Hint16;
	/*0000*/ LONG Exchg;
	/*0004*/
};

struct _INVERTED_FUNCTION_TABLE {
	/*0000*/ ULONG CurrentSize;
	/*0004*/ ULONG MaximumSize;
	/*0008*/ ULONG volatile Epoch;
	/*000c*/ UCHAR Overflow;
	/*0010*/ _INVERTED_FUNCTION_TABLE_ENTRY TableEntry[0x200];
	/*3010*/
};

struct _INVERTED_FUNCTION_TABLE_ENTRY {
	/*0000*/ _IMAGE_RUNTIME_FUNCTION_ENTRY * FunctionTable;
	/*0000*/ _DYNAMIC_FUNCTION_TABLE * DynamicTable;
	/*0008*/ void * ImageBase;
	/*0010*/ ULONG SizeOfImage;
	/*0014*/ ULONG SizeOfTable;
	/*0018*/
};

struct _IOP_IRP_STACK_PROFILER {
	/*0000*/ ULONG Profile[0x14];
	/*0050*/ ULONG TotalIrps;
	/*0054*/
};

enum _IO_ALLOCATION_ACTION {
	KeepObject = 0x1,
	DeallocateObject = 0x2,
	DeallocateObjectKeepRegisters = 0x3
};

struct _IO_CLIENT_EXTENSION {
	/*0000*/ _IO_CLIENT_EXTENSION * NextExtension;
	/*0008*/ void * ClientIdentificationAddress;
	/*0010*/
};

struct _IO_COMPLETION_CONTEXT {
	/*0000*/ void * Port;
	/*0008*/ void * Key;
	/*0010*/
};

struct _IO_DRIVER_CREATE_CONTEXT {
	/*0000*/ SHORT Size;
	/*0008*/ _ECP_LIST * ExtraCreateParameter;
	/*0010*/ void * DeviceObjectHint;
	/*0018*/ _TXN_PARAMETER_BLOCK * TxnParameters;
	/*0020*/ _EJOB * SiloContext;
	/*0028*/
};

struct _IO_MINI_COMPLETION_PACKET_USER {
	/*0000*/ _LIST_ENTRY ListEntry;
	/*0010*/ ULONG PacketType;
	/*0018*/ void * KeyContext;
	/*0020*/ void * ApcContext;
	/*0028*/ LONG IoStatus;
	/*0030*/ ULONGLONG IoStatusInformation;
	/*0038*/ void (* MiniPacketCallback)( _IO_MINI_COMPLETION_PACKET_USER * , void * );
	/*0040*/ void * Context;
	/*0048*/ UCHAR Allocated;
	/*0050*/
};

enum _IO_PRIORITY_HINT {
	IoPriorityVeryLow = 0x0,
	IoPriorityLow = 0x1,
	IoPriorityNormal = 0x2,
	IoPriorityHigh = 0x3,
	IoPriorityCritical = 0x4,
	MaxIoPriorityTypes = 0x5
};

struct _IO_PRIORITY_INFO {
	/*0000*/ ULONG Size;
	/*0004*/ ULONG ThreadPriority;
	/*0008*/ ULONG PagePriority;
	/*000c*/ _IO_PRIORITY_HINT IoPriority;
	/*0010*/
};

enum _IO_RATE_CONTROL_TYPE {
	IoRateControlTypeCapMin = 0x0,
	IoRateControlTypeIopsCap = 0x0,
	IoRateControlTypeBandwidthCap = 0x1,
	IoRateControlTypeTimePercentCap = 0x2,
	IoRateControlTypeCapMax = 0x2,
	IoRateControlTypeReservationMin = 0x3,
	IoRateControlTypeIopsReservation = 0x3,
	IoRateControlTypeBandwidthReservation = 0x4,
	IoRateControlTypeTimePercentReservation = 0x5,
	IoRateControlTypeReservationMax = 0x5,
	IoRateControlTypeCriticalReservationMin = 0x6,
	IoRateControlTypeIopsCriticalReservation = 0x6,
	IoRateControlTypeBandwidthCriticalReservation = 0x7,
	IoRateControlTypeTimePercentCriticalReservation = 0x8,
	IoRateControlTypeCriticalReservationMax = 0x8,
	IoRateControlTypeSoftCapMin = 0x9,
	IoRateControlTypeIopsSoftCap = 0x9,
	IoRateControlTypeBandwidthSoftCap = 0xa,
	IoRateControlTypeTimePercentSoftCap = 0xb,
	IoRateControlTypeSoftCapMax = 0xb,
	IoRateControlTypeLimitExcessNotifyMin = 0xc,
	IoRateControlTypeIopsLimitExcessNotify = 0xc,
	IoRateControlTypeBandwidthLimitExcessNotify = 0xd,
	IoRateControlTypeTimePercentLimitExcessNotify = 0xe,
	IoRateControlTypeLimitExcessNotifyMax = 0xe,
	IoRateControlTypeMax = 0xf
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
			/*0010*/ USHORT AffinityPolicy;
			/*0012*/ USHORT Group;
			/*0014*/ _IRQ_PRIORITY PriorityPolicy;
			/*0018*/ ULONGLONG TargetedProcessors;
			/*0020*/
		} Interrupt;
		struct {
			/*0008*/ ULONG MinimumChannel;
			/*000c*/ ULONG MaximumChannel;
			/*0010*/
		} Dma;
		struct {
			/*0008*/ ULONG RequestLine;
			/*000c*/ ULONG Reserved;
			/*0010*/ ULONG Channel;
			/*0014*/ ULONG TransferWidth;
			/*0018*/
		} DmaV3;
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
		struct {
			/*0008*/ ULONG Length40;
			/*000c*/ ULONG Alignment40;
			/*0010*/ _LARGE_INTEGER MinimumAddress;
			/*0018*/ _LARGE_INTEGER MaximumAddress;
			/*0020*/
		} Memory40;
		struct {
			/*0008*/ ULONG Length48;
			/*000c*/ ULONG Alignment48;
			/*0010*/ _LARGE_INTEGER MinimumAddress;
			/*0018*/ _LARGE_INTEGER MaximumAddress;
			/*0020*/
		} Memory48;
		struct {
			/*0008*/ ULONG Length64;
			/*000c*/ ULONG Alignment64;
			/*0010*/ _LARGE_INTEGER MinimumAddress;
			/*0018*/ _LARGE_INTEGER MaximumAddress;
			/*0020*/
		} Memory64;
		struct {
			/*0008*/ UCHAR Class;
			/*0009*/ UCHAR Type;
			/*000a*/ UCHAR Reserved1;
			/*000b*/ UCHAR Reserved2;
			/*000c*/ ULONG IdLowPart;
			/*0010*/ ULONG IdHighPart;
			/*0014*/
		} Connection;
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
	/*0008*/ _ACCESS_STATE * AccessState;
	/*0010*/ ULONG DesiredAccess;
	/*0014*/ ULONG FullCreateOptions;
	/*0018*/
};

struct _IO_STACK_LOCATION {
	/*0000*/ UCHAR MajorFunction;
	/*0001*/ UCHAR MinorFunction;
	/*0002*/ UCHAR Flags;
	/*0003*/ UCHAR Control;
	union {
		struct {
			/*0008*/ _IO_SECURITY_CONTEXT * SecurityContext;
			/*0010*/ ULONG Options;
			/*0018*/ USHORT FileAttributes;
			/*001a*/ USHORT ShareAccess;
			/*0020*/ ULONG EaLength;
			/*0028*/
		} Create;
		struct {
			/*0008*/ _IO_SECURITY_CONTEXT * SecurityContext;
			/*0010*/ ULONG Options;
			/*0018*/ USHORT Reserved;
			/*001a*/ USHORT ShareAccess;
			/*0020*/ _NAMED_PIPE_CREATE_PARAMETERS * Parameters;
			/*0028*/
		} CreatePipe;
		struct {
			/*0008*/ _IO_SECURITY_CONTEXT * SecurityContext;
			/*0010*/ ULONG Options;
			/*0018*/ USHORT Reserved;
			/*001a*/ USHORT ShareAccess;
			/*0020*/ _MAILSLOT_CREATE_PARAMETERS * Parameters;
			/*0028*/
		} CreateMailslot;
		struct {
			/*0008*/ ULONG Length;
			/*0010*/ ULONG Key;
			/*0018*/ _LARGE_INTEGER ByteOffset;
			/*0020*/
		} Read;
		struct {
			/*0008*/ ULONG Length;
			/*0010*/ ULONG Key;
			/*0018*/ _LARGE_INTEGER ByteOffset;
			/*0020*/
		} Write;
		struct {
			/*0008*/ ULONG Length;
			/*0010*/ _UNICODE_STRING * FileName;
			/*0018*/ _FILE_INFORMATION_CLASS FileInformationClass;
			/*0020*/ ULONG FileIndex;
			/*0028*/
		} QueryDirectory;
		struct {
			/*0008*/ ULONG Length;
			/*0010*/ ULONG CompletionFilter;
			/*0018*/
		} NotifyDirectory;
		struct {
			/*0008*/ ULONG Length;
			/*0010*/ ULONG CompletionFilter;
			/*0018*/ _DIRECTORY_NOTIFY_INFORMATION_CLASS DirectoryNotifyInformationClass;
			/*0020*/
		} NotifyDirectoryEx;
		struct {
			/*0008*/ ULONG Length;
			/*0010*/ _FILE_INFORMATION_CLASS FileInformationClass;
			/*0018*/
		} QueryFile;
		struct {
			/*0008*/ ULONG Length;
			/*0010*/ _FILE_INFORMATION_CLASS FileInformationClass;
			/*0018*/ _FILE_OBJECT * FileObject;
			/*0020*/ UCHAR ReplaceIfExists;
			/*0021*/ UCHAR AdvanceOnly;
			/*0020*/ ULONG ClusterCount;
			/*0020*/ void * DeleteHandle;
			/*0028*/
		} SetFile;
		struct {
			/*0008*/ ULONG Length;
			/*0010*/ void * EaList;
			/*0018*/ ULONG EaListLength;
			/*0020*/ ULONG EaIndex;
			/*0028*/
		} QueryEa;
		struct {
			/*0008*/ ULONG Length;
			/*000c*/
		} SetEa;
		struct {
			/*0008*/ ULONG Length;
			/*0010*/ _FSINFOCLASS FsInformationClass;
			/*0018*/
		} QueryVolume;
		struct {
			/*0008*/ ULONG Length;
			/*0010*/ _FSINFOCLASS FsInformationClass;
			/*0018*/
		} SetVolume;
		struct {
			/*0008*/ ULONG OutputBufferLength;
			/*0010*/ ULONG InputBufferLength;
			/*0018*/ ULONG FsControlCode;
			/*0020*/ void * Type3InputBuffer;
			/*0028*/
		} FileSystemControl;
		struct {
			/*0008*/ _LARGE_INTEGER * Length;
			/*0010*/ ULONG Key;
			/*0018*/ _LARGE_INTEGER ByteOffset;
			/*0020*/
		} LockControl;
		struct {
			/*0008*/ ULONG OutputBufferLength;
			/*0010*/ ULONG InputBufferLength;
			/*0018*/ ULONG IoControlCode;
			/*0020*/ void * Type3InputBuffer;
			/*0028*/
		} DeviceIoControl;
		struct {
			/*0008*/ ULONG SecurityInformation;
			/*0010*/ ULONG Length;
			/*0018*/
		} QuerySecurity;
		struct {
			/*0008*/ ULONG SecurityInformation;
			/*0010*/ void * SecurityDescriptor;
			/*0018*/
		} SetSecurity;
		struct {
			/*0008*/ _VPB * Vpb;
			/*0010*/ _DEVICE_OBJECT * DeviceObject;
			/*0018*/
		} MountVolume;
		struct {
			/*0008*/ _VPB * Vpb;
			/*0010*/ _DEVICE_OBJECT * DeviceObject;
			/*0018*/
		} VerifyVolume;
		struct {
			/*0008*/ _SCSI_REQUEST_BLOCK * Srb;
			/*0010*/
		} Scsi;
		struct {
			/*0008*/ ULONG Length;
			/*0010*/ void * StartSid;
			/*0018*/ _FILE_GET_QUOTA_INFORMATION * SidList;
			/*0020*/ ULONG SidListLength;
			/*0028*/
		} QueryQuota;
		struct {
			/*0008*/ ULONG Length;
			/*000c*/
		} SetQuota;
		struct {
			/*0008*/ _DEVICE_RELATION_TYPE Type;
			/*000c*/
		} QueryDeviceRelations;
		struct {
			/*0008*/ _GUID const * InterfaceType;
			/*0010*/ USHORT Size;
			/*0012*/ USHORT Version;
			/*0018*/ _INTERFACE * Interface;
			/*0020*/ void * InterfaceSpecificData;
			/*0028*/
		} QueryInterface;
		struct {
			/*0008*/ _DEVICE_CAPABILITIES * Capabilities;
			/*0010*/
		} DeviceCapabilities;
		struct {
			/*0008*/ _IO_RESOURCE_REQUIREMENTS_LIST * IoResourceRequirementList;
			/*0010*/
		} FilterResourceRequirements;
		struct {
			/*0008*/ ULONG WhichSpace;
			/*0010*/ void * Buffer;
			/*0018*/ ULONG Offset;
			/*0020*/ ULONG Length;
			/*0028*/
		} ReadWriteConfig;
		struct {
			/*0008*/ UCHAR Lock;
			/*0009*/
		} SetLock;
		struct {
			/*0008*/ BUS_QUERY_ID_TYPE IdType;
			/*000c*/
		} QueryId;
		struct {
			/*0008*/ DEVICE_TEXT_TYPE DeviceTextType;
			/*0010*/ ULONG LocaleId;
			/*0018*/
		} QueryDeviceText;
		struct {
			/*0008*/ UCHAR InPath;
			/*0009*/ UCHAR Reserved[0x3];
			/*0010*/ _DEVICE_USAGE_NOTIFICATION_TYPE Type;
			/*0018*/
		} UsageNotification;
		struct {
			/*0008*/ _SYSTEM_POWER_STATE PowerState;
			/*000c*/
		} WaitWake;
		struct {
			/*0008*/ _POWER_SEQUENCE * PowerSequence;
			/*0010*/
		} PowerSequence;
		struct {
			/*0008*/ ULONG SystemContext;
			/*0008*/ _SYSTEM_POWER_STATE_CONTEXT SystemPowerStateContext;
			/*0010*/ _POWER_STATE_TYPE Type;
			/*0018*/ _POWER_STATE State;
			/*0020*/ POWER_ACTION ShutdownType;
			/*0028*/
		} Power;
		struct {
			/*0008*/ _CM_RESOURCE_LIST * AllocatedResources;
			/*0010*/ _CM_RESOURCE_LIST * AllocatedResourcesTranslated;
			/*0018*/
		} StartDevice;
		struct {
			/*0008*/ ULONGLONG ProviderId;
			/*0010*/ void * DataPath;
			/*0018*/ ULONG BufferSize;
			/*0020*/ void * Buffer;
			/*0028*/
		} WMI;
		struct {
			/*0008*/ void * Argument1;
			/*0010*/ void * Argument2;
			/*0018*/ void * Argument3;
			/*0020*/ void * Argument4;
			/*0028*/
		} Others;
		/*0028*/
	} Parameters;
	/*0028*/ _DEVICE_OBJECT * DeviceObject;
	/*0030*/ _FILE_OBJECT * FileObject;
	/*0038*/ LONG (* CompletionRoutine)( _DEVICE_OBJECT * , _IRP * , void * );
	/*0040*/ void * Context;
	/*0048*/
};

struct _IO_STATUS_BLOCK {
	/*0000*/ LONG Status;
	/*0000*/ void * Pointer;
	/*0008*/ ULONGLONG Information;
	/*0010*/
};

struct _IO_TIMER {
	/*0000*/ SHORT Type;
	/*0002*/ SHORT TimerFlag;
	/*0008*/ _LIST_ENTRY TimerList;
	/*0018*/ void (* TimerRoutine)( _DEVICE_OBJECT * , void * );
	/*0020*/ void * Context;
	/*0028*/ _DEVICE_OBJECT * DeviceObject;
	/*0030*/
};

struct _IRP {
	/*0000*/ SHORT Type;
	/*0002*/ USHORT Size;
	/*0004*/ USHORT AllocationProcessorNumber;
	/*0006*/ USHORT Reserved;
	/*0008*/ _MDL * MdlAddress;
	/*0010*/ ULONG Flags;
	union {
		/*0018*/ _IRP * MasterIrp;
		/*0018*/ LONG IrpCount;
		/*0018*/ void * SystemBuffer;
		/*0020*/
	} AssociatedIrp;
	/*0020*/ _LIST_ENTRY ThreadListEntry;
	/*0030*/ _IO_STATUS_BLOCK IoStatus;
	/*0040*/ CHAR RequestorMode;
	/*0041*/ UCHAR PendingReturned;
	/*0042*/ CHAR StackCount;
	/*0043*/ CHAR CurrentLocation;
	/*0044*/ UCHAR Cancel;
	/*0045*/ UCHAR CancelIrql;
	/*0046*/ CHAR ApcEnvironment;
	/*0047*/ UCHAR AllocationFlags;
	/*0048*/ _IO_STATUS_BLOCK * UserIosb;
	/*0050*/ _KEVENT * UserEvent;
	union {
		struct {
			/*0058*/ void (* UserApcRoutine)( void * , _IO_STATUS_BLOCK * , ULONG );
			/*0058*/ void * IssuingProcess;
			/*0060*/ void * UserApcContext;
			/*0068*/
		} AsynchronousParameters;
		/*0058*/ _LARGE_INTEGER AllocationSize;
		/*0068*/
	} Overlay;
	/*0068*/ void (* CancelRoutine)( _DEVICE_OBJECT * , _IRP * );
	/*0070*/ void * UserBuffer;
	union {
		struct {
			/*0078*/ _KDEVICE_QUEUE_ENTRY DeviceQueueEntry;
			/*0078*/ void * DriverContext[0x4];
			/*0098*/ _ETHREAD * Thread;
			/*00a0*/ CHAR * AuxiliaryBuffer;
			/*00a8*/ _LIST_ENTRY ListEntry;
			/*00b8*/ _IO_STACK_LOCATION * CurrentStackLocation;
			/*00b8*/ ULONG PacketType;
			/*00c0*/ _FILE_OBJECT * OriginalFileObject;
			/*00c8*/ void * IrpExtension;
			/*00d0*/
		} Overlay;
		/*0078*/ _KAPC Apc;
		/*0078*/ void * CompletionKey;
		/*00d0*/
	} Tail;
	/*00d0*/
};

enum _IRQ_PRIORITY {
	IrqPriorityUndefined = 0x0,
	IrqPriorityLow = 0x1,
	IrqPriorityNormal = 0x2,
	IrqPriorityHigh = 0x3
};

enum _JOBOBJECTINFOCLASS {
	JobObjectBasicAccountingInformation = 0x1,
	JobObjectBasicLimitInformation = 0x2,
	JobObjectBasicProcessIdList = 0x3,
	JobObjectBasicUIRestrictions = 0x4,
	JobObjectSecurityLimitInformation = 0x5,
	JobObjectEndOfJobTimeInformation = 0x6,
	JobObjectAssociateCompletionPortInformation = 0x7,
	JobObjectBasicAndIoAccountingInformation = 0x8,
	JobObjectExtendedLimitInformation = 0x9,
	JobObjectJobSetInformation = 0xa,
	JobObjectGroupInformation = 0xb,
	JobObjectNotificationLimitInformation = 0xc,
	JobObjectLimitViolationInformation = 0xd,
	JobObjectGroupInformationEx = 0xe,
	JobObjectCpuRateControlInformation = 0xf,
	JobObjectCompletionFilter = 0x10,
	JobObjectCompletionCounter = 0x11,
	JobObjectFreezeInformation = 0x12,
	JobObjectExtendedAccountingInformation = 0x13,
	JobObjectWakeInformation = 0x14,
	JobObjectBackgroundInformation = 0x15,
	JobObjectSchedulingRankBiasInformation = 0x16,
	JobObjectTimerVirtualizationInformation = 0x17,
	JobObjectCycleTimeNotification = 0x18,
	JobObjectClearEvent = 0x19,
	JobObjectInterferenceInformation = 0x1a,
	JobObjectClearPeakJobMemoryUsed = 0x1b,
	JobObjectMemoryUsageInformation = 0x1c,
	JobObjectSharedCommit = 0x1d,
	JobObjectContainerId = 0x1e,
	JobObjectIoRateControlInformation = 0x1f,
	JobObjectSiloRootDirectory = 0x25,
	JobObjectServerSiloBasicInformation = 0x26,
	JobObjectServerSiloUserSharedData = 0x27,
	JobObjectServerSiloInitialize = 0x28,
	JobObjectServerSiloRunningState = 0x29,
	JobObjectIoAttribution = 0x2a,
	JobObjectMemoryPartitionInformation = 0x2b,
	JobObjectContainerTelemetryId = 0x2c,
	JobObjectSiloSystemRoot = 0x2d,
	JobObjectEnergyTrackingState = 0x2e,
	JobObjectThreadImpersonationInformation = 0x2f,
	JobObjectReserved1Information = 0x12,
	JobObjectReserved2Information = 0x13,
	JobObjectReserved3Information = 0x14,
	JobObjectReserved4Information = 0x15,
	JobObjectReserved5Information = 0x16,
	JobObjectReserved6Information = 0x17,
	JobObjectReserved7Information = 0x18,
	JobObjectReserved8Information = 0x19,
	JobObjectReserved9Information = 0x1a,
	JobObjectReserved10Information = 0x1b,
	JobObjectReserved11Information = 0x1c,
	JobObjectReserved12Information = 0x1d,
	JobObjectReserved13Information = 0x1e,
	JobObjectReserved14Information = 0x1f,
	JobObjectNetRateControlInformation = 0x20,
	JobObjectNotificationLimitInformation2 = 0x21,
	JobObjectLimitViolationInformation2 = 0x22,
	JobObjectCreateSilo = 0x23,
	JobObjectSiloBasicInformation = 0x24,
	JobObjectReserved15Information = 0x25,
	JobObjectReserved16Information = 0x26,
	JobObjectReserved17Information = 0x27,
	JobObjectReserved18Information = 0x28,
	JobObjectReserved19Information = 0x29,
	JobObjectReserved20Information = 0x2a,
	JobObjectReserved21Information = 0x2b,
	JobObjectReserved22Information = 0x2c,
	JobObjectReserved23Information = 0x2d,
	JobObjectReserved24Information = 0x2e,
	JobObjectReserved25Information = 0x2f,
	MaxJobObjectInfoClass = 0x30
};

union _JOBOBJECT_ENERGY_TRACKING_STATE {
	/*0000*/ ULONGLONG Value;
	/*0000*/ ULONG UpdateMask;
	/*0004*/ ULONG DesiredState;
	/*0008*/
};

struct _JOBOBJECT_WAKE_FILTER {
	/*0000*/ ULONG HighEdgeFilter;
	/*0004*/ ULONG LowEdgeFilter;
	/*0008*/
};

struct _JOB_ACCESS_STATE;

struct _JOB_CPU_RATE_CONTROL;

struct _JOB_NET_RATE_CONTROL;

struct _JOB_NOTIFICATION_INFORMATION;

struct _JOB_RATE_CONTROL_HEADER {
	/*0000*/ void * RateControlQuotaReference;
	/*0008*/ _RTL_BITMAP OverQuotaHistory;
	/*0018*/ UCHAR * BitMapBuffer;
	/*0020*/ ULONGLONG BitMapBufferSize;
	/*0028*/
};

struct _KAFFINITY_EX {
	/*0000*/ USHORT Count;
	/*0002*/ USHORT Size;
	/*0004*/ ULONG Reserved;
	/*0008*/ ULONGLONG Bitmap[0x14];
	/*00a8*/
};

struct _KAPC {
	/*0000*/ UCHAR Type;
	/*0001*/ UCHAR SpareByte0;
	/*0002*/ UCHAR Size;
	/*0003*/ UCHAR SpareByte1;
	/*0004*/ ULONG SpareLong0;
	/*0008*/ _KTHREAD * Thread;
	/*0010*/ _LIST_ENTRY ApcListEntry;
	/*0020*/ void (* KernelRoutine)( _KAPC * , void (* * )( void * , void * , void * ), void * * , void * * , void * * );
	/*0028*/ void (* RundownRoutine)( _KAPC * );
	/*0030*/ void (* NormalRoutine)( void * , void * , void * );
	/*0020*/ void * Reserved[0x3];
	/*0038*/ void * NormalContext;
	/*0040*/ void * SystemArgument1;
	/*0048*/ void * SystemArgument2;
	/*0050*/ CHAR ApcStateIndex;
	/*0051*/ CHAR ApcMode;
	/*0052*/ UCHAR Inserted;
	/*0058*/
};

struct _KAPC_STATE {
	/*0000*/ _LIST_ENTRY ApcListHead[0x2];
	/*0020*/ _KPROCESS * Process;
	/*0028*/ UCHAR InProgressFlags;
	/*0028*/ UCHAR KernelApcInProgress : 01; // 0x01;
	/*0028*/ UCHAR SpecialApcInProgress : 01; // 0x02;
	/*0029*/ UCHAR KernelApcPending;
	/*002a*/ UCHAR UserApcPending;
	/*0030*/
};

struct _KDESCRIPTOR {
	/*0000*/ USHORT Pad[0x3];
	/*0006*/ USHORT Limit;
	/*0008*/ void * Base;
	/*0010*/
};

struct _KDEVICE_QUEUE {
	/*0000*/ SHORT Type;
	/*0002*/ SHORT Size;
	/*0008*/ _LIST_ENTRY DeviceListHead;
	/*0018*/ ULONGLONG Lock;
	/*0020*/ UCHAR Busy;
	/*0020*/ LONGLONG Reserved : 08; // 0x00000000000000ff;
	/*0020*/ LONGLONG Hint : 56; // 0xffffffffffffff00;
	/*0028*/
};

struct _KDEVICE_QUEUE_ENTRY {
	/*0000*/ _LIST_ENTRY DeviceListEntry;
	/*0010*/ ULONG SortKey;
	/*0014*/ UCHAR Inserted;
	/*0018*/
};

struct _KDPC {
	/*0000*/ ULONG TargetInfoAsUlong;
	/*0000*/ UCHAR Type;
	/*0001*/ UCHAR Importance;
	/*0002*/ USHORT volatile Number;
	/*0008*/ _SINGLE_LIST_ENTRY DpcListEntry;
	/*0010*/ ULONGLONG ProcessorHistory;
	/*0018*/ void (* DeferredRoutine)( _KDPC * , void * , void * , void * );
	/*0020*/ void * DeferredContext;
	/*0028*/ void * SystemArgument1;
	/*0030*/ void * SystemArgument2;
	/*0038*/ void * DpcData;
	/*0040*/
};

struct _KDPC_DATA {
	/*0000*/ _KDPC_LIST DpcList;
	/*0010*/ ULONGLONG DpcLock;
	/*0018*/ LONG volatile DpcQueueDepth;
	/*001c*/ ULONG DpcCount;
	/*0020*/ _KDPC * volatile ActiveDpc;
	/*0028*/
};

struct _KDPC_LIST {
	/*0000*/ _SINGLE_LIST_ENTRY ListHead;
	/*0008*/ _SINGLE_LIST_ENTRY * LastEntry;
	/*0010*/
};

struct _KENTROPY_TIMING_STATE {
	/*0000*/ ULONG EntropyCount;
	/*0004*/ ULONG Buffer[0x40];
	/*0108*/ _KDPC Dpc;
	/*0148*/ ULONG LastDeliveredBuffer;
	/*0150*/
};

struct _KERNEL_STACK_SEGMENT {
	/*0000*/ ULONGLONG StackBase;
	/*0008*/ ULONGLONG StackLimit;
	/*0010*/ ULONGLONG KernelStack;
	/*0018*/ ULONGLONG InitialStack;
	/*0020*/
};

struct _KEVENT {
	/*0000*/ _DISPATCHER_HEADER Header;
	/*0018*/
};

struct _KEXCEPTION_FRAME {
	/*0000*/ ULONGLONG P1Home;
	/*0008*/ ULONGLONG P2Home;
	/*0010*/ ULONGLONG P3Home;
	/*0018*/ ULONGLONG P4Home;
	/*0020*/ ULONGLONG P5;
	/*0028*/ ULONGLONG Spare1;
	/*0030*/ _M128A Xmm6;
	/*0040*/ _M128A Xmm7;
	/*0050*/ _M128A Xmm8;
	/*0060*/ _M128A Xmm9;
	/*0070*/ _M128A Xmm10;
	/*0080*/ _M128A Xmm11;
	/*0090*/ _M128A Xmm12;
	/*00a0*/ _M128A Xmm13;
	/*00b0*/ _M128A Xmm14;
	/*00c0*/ _M128A Xmm15;
	/*00d0*/ ULONGLONG TrapFrame;
	/*00d8*/ ULONGLONG OutputBuffer;
	/*00e0*/ ULONGLONG OutputLength;
	/*00e8*/ ULONGLONG Spare2;
	/*00f0*/ ULONGLONG MxCsr;
	/*00f8*/ ULONGLONG Rbp;
	/*0100*/ ULONGLONG Rbx;
	/*0108*/ ULONGLONG Rdi;
	/*0110*/ ULONGLONG Rsi;
	/*0118*/ ULONGLONG R12;
	/*0120*/ ULONGLONG R13;
	/*0128*/ ULONGLONG R14;
	/*0130*/ ULONGLONG R15;
	/*0138*/ ULONGLONG Return;
	/*0140*/
};

union _KEXECUTE_OPTIONS {
	/*0000*/ UCHAR ExecuteDisable : 01; // 0x01;
	/*0000*/ UCHAR ExecuteEnable : 01; // 0x02;
	/*0000*/ UCHAR DisableThunkEmulation : 01; // 0x04;
	/*0000*/ UCHAR Permanent : 01; // 0x08;
	/*0000*/ UCHAR ExecuteDispatchEnable : 01; // 0x10;
	/*0000*/ UCHAR ImageDispatchEnable : 01; // 0x20;
	/*0000*/ UCHAR DisableExceptionChainValidation : 01; // 0x40;
	/*0000*/ UCHAR Spare : 01; // 0x80;
	/*0000*/ UCHAR volatile ExecuteOptions;
	/*0000*/ UCHAR ExecuteOptionsNV;
	/*0001*/
};

struct _KFLOATING_SAVE {
	/*0000*/ ULONG Dummy;
	/*0004*/
};

struct _KGATE {
	/*0000*/ _DISPATCHER_HEADER Header;
	/*0018*/
};

union _KGDTENTRY64 {
	/*0000*/ USHORT LimitLow;
	/*0002*/ USHORT BaseLow;
	struct {
		/*0004*/ UCHAR BaseMiddle;
		/*0005*/ UCHAR Flags1;
		/*0006*/ UCHAR Flags2;
		/*0007*/ UCHAR BaseHigh;
		/*0008*/
	} Bytes;
	struct {
		/*0004*/ ULONG BaseMiddle : 08; // 0x000000ff;
		/*0004*/ ULONG Type : 05; // 0x00001f00;
		/*0004*/ ULONG Dpl : 02; // 0x00006000;
		/*0004*/ ULONG Present : 01; // 0x00008000;
		/*0004*/ ULONG LimitHigh : 04; // 0x000f0000;
		/*0004*/ ULONG System : 01; // 0x00100000;
		/*0004*/ ULONG LongMode : 01; // 0x00200000;
		/*0004*/ ULONG DefaultBig : 01; // 0x00400000;
		/*0004*/ ULONG Granularity : 01; // 0x00800000;
		/*0004*/ ULONG BaseHigh : 08; // 0xff000000;
		/*0008*/
	} Bits;
	/*0008*/ ULONG BaseUpper;
	/*000c*/ ULONG MustBeZero;
	/*0000*/ LONGLONG DataLow;
	/*0008*/ LONGLONG DataHigh;
	/*0010*/
};

enum _KHETERO_CPU_POLICY {
	KHeteroCpuPolicyAll = 0x0,
	KHeteroCpuPolicyLarge = 0x1,
	KHeteroCpuPolicyLargeOrIdle = 0x2,
	KHeteroCpuPolicySmall = 0x3,
	KHeteroCpuPolicySmallOrIdle = 0x4,
	KHeteroCpuPolicyDynamic = 0x5,
	KHeteroCpuPolicyStaticMax = 0x5,
	KHeteroCpuPolicyBiasedSmall = 0x6,
	KHeteroCpuPolicyBiasedLarge = 0x7,
	KHeteroCpuPolicyDefault = 0x8,
	KHeteroCpuPolicyMax = 0x9
};

enum _KHETERO_CPU_QOS {
	KHeteroCpuQosDefault = 0x0,
	KHeteroCpuQosHigh = 0x0,
	KHeteroCpuQosMedium = 0x1,
	KHeteroCpuQosLow = 0x2,
	KHeteroCpuQosDynamic = 0x3,
	KHeteroCpuQosMax = 0x3
};

struct _KHETERO_PROCESSOR_SET {
	/*0000*/ ULONGLONG IdealMask;
	/*0008*/ ULONGLONG PreferredMask;
	/*0010*/ ULONGLONG AvailableMask;
	/*0018*/
};

enum _KHETERO_RUNNING_TYPE {
	KHeteroShortRunning = 0x0,
	KHeteroLongRunning = 0x1,
	KHeteroRunningTypeMax = 0x2
};

union _KIDTENTRY64 {
	/*0000*/ USHORT OffsetLow;
	/*0002*/ USHORT Selector;
	/*0004*/ USHORT IstIndex : 03; // 0x0007;
	/*0004*/ USHORT Reserved0 : 05; // 0x00f8;
	/*0004*/ USHORT Type : 05; // 0x1f00;
	/*0004*/ USHORT Dpl : 02; // 0x6000;
	/*0004*/ USHORT Present : 01; // 0x8000;
	/*0006*/ USHORT OffsetMiddle;
	/*0008*/ ULONG OffsetHigh;
	/*000c*/ ULONG Reserved1;
	/*0000*/ ULONGLONG Alignment;
	/*0010*/
};

enum _KINTERRUPT_POLARITY {
	InterruptPolarityUnknown = 0x0,
	InterruptActiveHigh = 0x1,
	InterruptRisingEdge = 0x1,
	InterruptActiveLow = 0x2,
	InterruptFallingEdge = 0x2,
	InterruptActiveBoth = 0x3,
	InterruptActiveBothTriggerLow = 0x3,
	InterruptActiveBothTriggerHigh = 0x4
};

struct _KLOCK_ENTRY {
	/*0000*/ _RTL_BALANCED_NODE TreeNode;
	/*0000*/ _SINGLE_LIST_ENTRY FreeListEntry;
	/*0018*/ ULONG EntryFlags;
	/*0018*/ UCHAR EntryOffset;
	/*0019*/ UCHAR ThreadLocalFlags;
	/*0019*/ UCHAR WaitingBit : 01; // 0x01;
	/*0019*/ UCHAR Spare0 : 07; // 0xfe;
	/*001a*/ UCHAR AcquiredByte;
	/*001a*/ UCHAR AcquiredBit : 01; // 0x01;
	/*001b*/ UCHAR CrossThreadFlags;
	/*001b*/ UCHAR HeadNodeBit : 01; // 0x01;
	/*001b*/ UCHAR IoPriorityBit : 01; // 0x02;
	/*001b*/ UCHAR IoQoSWaiter : 01; // 0x04;
	/*001b*/ UCHAR Spare1 : 05; // 0xf8;
	/*0018*/ ULONG StaticState : 08; // 0x000000ff;
	/*0018*/ ULONG AllFlags : 24; // 0xffffff00;
	/*001c*/ ULONG SpareFlags;
	/*0020*/ _KLOCK_ENTRY_LOCK_STATE LockState;
	/*0020*/ void * volatile LockUnsafe;
	/*0020*/ UCHAR volatile CrossThreadReleasableAndBusyByte;
	/*0021*/ UCHAR Reserved[0x6];
	/*0027*/ UCHAR volatile InTreeByte;
	/*0028*/ void * SessionState;
	/*0028*/ ULONG SessionId;
	/*002c*/ ULONG SessionPad;
	/*0030*/ _RTL_RB_TREE OwnerTree;
	/*0040*/ _RTL_RB_TREE WaiterTree;
	/*0030*/ CHAR CpuPriorityKey;
	/*0050*/ ULONGLONG EntryLock;
	/*0058*/ _KLOCK_ENTRY_BOOST_BITMAP BoostBitmap;
	/*005c*/ ULONG SparePad;
	/*0060*/
};

union _KLOCK_ENTRY_BOOST_BITMAP {
	/*0000*/ ULONG AllFields;
	/*0000*/ ULONG AllBoosts : 17; // 0x0001ffff;
	/*0000*/ ULONG Reserved : 15; // 0xfffe0000;
	/*0000*/ USHORT CpuBoostsBitmap : 15; // 0x7fff;
	/*0000*/ USHORT IoBoost : 01; // 0x8000;
	/*0002*/ USHORT IoQoSBoost : 01; // 0x0001;
	/*0002*/ USHORT IoNormalPriorityWaiterCount : 08; // 0x01fe;
	/*0002*/ USHORT IoQoSWaiterCount : 07; // 0xfe00;
	/*0004*/
};

struct _KLOCK_ENTRY_LOCK_STATE {
	/*0000*/ ULONGLONG CrossThreadReleasable : 01; // 0x0000000000000001;
	/*0000*/ ULONGLONG Busy : 01; // 0x0000000000000002;
	/*0000*/ ULONGLONG Reserved : 61; // 0x7ffffffffffffffc;
	/*0000*/ ULONGLONG InTree : 01; // 0x8000000000000000;
	/*0000*/ void * LockState;
	/*0008*/ void * SessionState;
	/*0008*/ ULONG SessionId;
	/*000c*/ ULONG SessionPad;
	/*0010*/
};

struct _KNODE {
	/*0000*/ ULONGLONG IdleNonParkedCpuSet;
	/*0008*/ ULONGLONG IdleSmtSet;
	/*0010*/ ULONGLONG IdleCpuSet;
	/*0040*/ ULONGLONG DeepIdleSet;
	/*0048*/ ULONGLONG IdleConstrainedSet;
	/*0050*/ ULONGLONG NonParkedSet;
	/*0058*/ LONG ParkLock;
	/*005c*/ ULONG Seed;
	/*0080*/ ULONG SiblingMask;
	/*0088*/ _GROUP_AFFINITY Affinity;
	/*0088*/ UCHAR AffinityFill[0xa];
	/*0092*/ USHORT NodeNumber;
	/*0094*/ USHORT PrimaryNodeNumber;
	/*0096*/ UCHAR Stride;
	/*0097*/ UCHAR Spare0;
	/*0098*/ ULONGLONG SharedReadyQueueLeaders;
	/*00a0*/ ULONG ProximityId;
	/*00a4*/ ULONG Lowest;
	/*00a8*/ ULONG Highest;
	/*00ac*/ UCHAR MaximumProcessors;
	/*00ad*/ _flags Flags;
	/*00ae*/ UCHAR Spare10;
	/*00b0*/ _KHETERO_PROCESSOR_SET HeteroSets[0x5];
	/*0128*/ ULONGLONG PpmConfiguredQosSets[0x3];
	/*0140*/
};

enum _KOBJECTS {
	EventNotificationObject = 0x0,
	EventSynchronizationObject = 0x1,
	MutantObject = 0x2,
	ProcessObject = 0x3,
	QueueObject = 0x4,
	SemaphoreObject = 0x5,
	ThreadObject = 0x6,
	GateObject = 0x7,
	TimerNotificationObject = 0x8,
	TimerSynchronizationObject = 0x9,
	Spare2Object = 0xa,
	Spare3Object = 0xb,
	Spare4Object = 0xc,
	Spare5Object = 0xd,
	Spare6Object = 0xe,
	Spare7Object = 0xf,
	Spare8Object = 0x10,
	ProfileCallbackObject = 0x11,
	ApcObject = 0x12,
	DpcObject = 0x13,
	DeviceQueueObject = 0x14,
	PriQueueObject = 0x15,
	InterruptObject = 0x16,
	ProfileObject = 0x17,
	Timer2NotificationObject = 0x18,
	Timer2SynchronizationObject = 0x19,
	ThreadedDpcObject = 0x1a,
	MaximumKernelObject = 0x1b
};

struct _KPCR {
	/*0000*/ _NT_TIB NtTib;
	/*0000*/ _KGDTENTRY64 * GdtBase;
	/*0008*/ _KTSS64 * TssBase;
	/*0010*/ ULONGLONG UserRsp;
	/*0018*/ _KPCR * Self;
	/*0020*/ _KPRCB * CurrentPrcb;
	/*0028*/ _KSPIN_LOCK_QUEUE * LockArray;
	/*0030*/ void * Used_Self;
	/*0038*/ _KIDTENTRY64 * IdtBase;
	/*0040*/ ULONGLONG Unused[0x2];
	/*0050*/ UCHAR Irql;
	/*0051*/ UCHAR SecondLevelCacheAssociativity;
	/*0052*/ UCHAR ObsoleteNumber;
	/*0053*/ UCHAR Fill0;
	/*0054*/ ULONG Unused0[0x3];
	/*0060*/ USHORT MajorVersion;
	/*0062*/ USHORT MinorVersion;
	/*0064*/ ULONG StallScaleFactor;
	/*0068*/ void * Unused1[0x3];
	/*0080*/ ULONG KernelReserved[0xf];
	/*00bc*/ ULONG SecondLevelCacheSize;
	/*00c0*/ ULONG HalReserved[0x10];
	/*0100*/ ULONG Unused2;
	/*0108*/ void * KdVersionBlock;
	/*0110*/ void * Unused3;
	/*0118*/ ULONG PcrAlign1[0x18];
	/*0180*/ _KPRCB Prcb;
	/*6b00*/
};

struct _KPRCB {
	/*0000*/ ULONG MxCsr;
	/*0004*/ UCHAR LegacyNumber;
	/*0005*/ UCHAR ReservedMustBeZero;
	/*0006*/ UCHAR InterruptRequest;
	/*0007*/ UCHAR IdleHalt;
	/*0008*/ _KTHREAD * CurrentThread;
	/*0010*/ _KTHREAD * NextThread;
	/*0018*/ _KTHREAD * IdleThread;
	/*0020*/ UCHAR NestingLevel;
	/*0021*/ UCHAR ClockOwner;
	/*0022*/ UCHAR PendingTickFlags;
	/*0022*/ UCHAR PendingTick : 01; // 0x01;
	/*0022*/ UCHAR PendingBackupTick : 01; // 0x02;
	/*0023*/ UCHAR IdleState;
	/*0024*/ ULONG Number;
	/*0028*/ ULONGLONG RspBase;
	/*0030*/ ULONGLONG PrcbLock;
	/*0038*/ CHAR * PriorityState;
	/*0040*/ CHAR CpuType;
	/*0041*/ CHAR CpuID;
	/*0042*/ USHORT CpuStep;
	/*0042*/ UCHAR CpuStepping;
	/*0043*/ UCHAR CpuModel;
	/*0044*/ ULONG MHz;
	/*0048*/ ULONGLONG HalReserved[0x8];
	/*0088*/ USHORT MinorVersion;
	/*008a*/ USHORT MajorVersion;
	/*008c*/ UCHAR BuildType;
	/*008d*/ UCHAR CpuVendor;
	/*008e*/ UCHAR CoresPerPhysicalProcessor;
	/*008f*/ UCHAR LogicalProcessorsPerCore;
	/*0090*/ ULONGLONG PrcbPad04[0x6];
	/*00c0*/ _KNODE * ParentNode;
	/*00c8*/ ULONGLONG GroupSetMember;
	/*00d0*/ UCHAR Group;
	/*00d1*/ UCHAR GroupIndex;
	/*00d2*/ UCHAR PrcbPad05[0x2];
	/*00d4*/ ULONG InitialApicId;
	/*00d8*/ ULONG ScbOffset;
	/*00dc*/ ULONG ApicMask;
	/*00e0*/ void * AcpiReserved;
	/*00e8*/ ULONG CFlushSize;
	/*00ec*/ LONG volatile BamFlags;
	/*00ec*/ ULONG BamQosLevel : 02; // 0x00000003;
	/*00ec*/ ULONG PendingQosUpdate : 02; // 0x0000000c;
	/*00ec*/ ULONG BamFlagsReserved : 28; // 0xfffffff0;
	/*00f0*/ ULONGLONG PrcbPad11[0x2];
	/*0100*/ _KPROCESSOR_STATE ProcessorState;
	/*06c0*/ ULONGLONG PrcbPad12[0x6];
	/*06f0*/ _KSPIN_LOCK_QUEUE LockQueue[0x11];
	/*0800*/ _PP_LOOKASIDE_LIST PPLookasideList[0x10];
	/*0900*/ _GENERAL_LOOKASIDE_POOL PPNxPagedLookasideList[0x20];
	/*1500*/ _GENERAL_LOOKASIDE_POOL PPNPagedLookasideList[0x20];
	/*2100*/ _GENERAL_LOOKASIDE_POOL PPPagedLookasideList[0x20];
	/*2d00*/ ULONGLONG PrcbPad20;
	/*2d08*/ _SINGLE_LIST_ENTRY DeferredReadyListHead;
	/*2d10*/ LONG volatile MmPageFaultCount;
	/*2d14*/ LONG volatile MmCopyOnWriteCount;
	/*2d18*/ LONG volatile MmTransitionCount;
	/*2d1c*/ LONG volatile MmDemandZeroCount;
	/*2d20*/ LONG volatile MmPageReadCount;
	/*2d24*/ LONG volatile MmPageReadIoCount;
	/*2d28*/ LONG volatile MmDirtyPagesWriteCount;
	/*2d2c*/ LONG volatile MmDirtyWriteIoCount;
	/*2d30*/ LONG volatile MmMappedPagesWriteCount;
	/*2d34*/ LONG volatile MmMappedWriteIoCount;
	/*2d38*/ ULONG KeSystemCalls;
	/*2d3c*/ ULONG KeContextSwitches;
	/*2d40*/ ULONG PrcbPad40;
	/*2d44*/ ULONG CcFastReadNoWait;
	/*2d48*/ ULONG CcFastReadWait;
	/*2d4c*/ ULONG CcFastReadNotPossible;
	/*2d50*/ ULONG CcCopyReadNoWait;
	/*2d54*/ ULONG CcCopyReadWait;
	/*2d58*/ ULONG CcCopyReadNoWaitMiss;
	/*2d5c*/ LONG volatile IoReadOperationCount;
	/*2d60*/ LONG volatile IoWriteOperationCount;
	/*2d64*/ LONG volatile IoOtherOperationCount;
	/*2d68*/ _LARGE_INTEGER IoReadTransferCount;
	/*2d70*/ _LARGE_INTEGER IoWriteTransferCount;
	/*2d78*/ _LARGE_INTEGER IoOtherTransferCount;
	/*2d80*/ LONG volatile PacketBarrier;
	/*2d84*/ LONG volatile TargetCount;
	/*2d88*/ ULONG volatile IpiFrozen;
	/*2d8c*/ ULONG PrcbPad30;
	/*2d90*/ void * IsrDpcStats;
	/*2d98*/ ULONG DeviceInterrupts;
	/*2d9c*/ LONG LookasideIrpFloat;
	/*2da0*/ ULONG InterruptLastCount;
	/*2da4*/ ULONG InterruptRate;
	/*2da8*/ ULONGLONG LastNonHrTimerExpiration;
	/*2db0*/ ULONGLONG PrcbPad35[0x2];
	/*2dc0*/ _SLIST_HEADER InterruptObjectPool;
	/*2dd0*/ ULONGLONG PrcbPad41[0x6];
	/*2e00*/ _KDPC_DATA DpcData[0x2];
	/*2e50*/ void * DpcStack;
	/*2e58*/ LONG MaximumDpcQueueDepth;
	/*2e5c*/ ULONG DpcRequestRate;
	/*2e60*/ ULONG MinimumDpcRate;
	/*2e64*/ ULONG DpcLastCount;
	/*2e68*/ UCHAR ThreadDpcEnable;
	/*2e69*/ UCHAR volatile QuantumEnd;
	/*2e6a*/ UCHAR volatile DpcRoutineActive;
	/*2e6b*/ UCHAR volatile IdleSchedule;
	/*2e6c*/ LONG volatile DpcRequestSummary;
	/*2e6c*/ SHORT DpcRequestSlot[0x2];
	/*2e6c*/ SHORT NormalDpcState;
	/*2e6e*/ SHORT ThreadDpcState;
	/*2e6c*/ ULONG DpcNormalProcessingActive : 01; // 0x00000001;
	/*2e6c*/ ULONG DpcNormalProcessingRequested : 01; // 0x00000002;
	/*2e6c*/ ULONG DpcNormalThreadSignal : 01; // 0x00000004;
	/*2e6c*/ ULONG DpcNormalTimerExpiration : 01; // 0x00000008;
	/*2e6c*/ ULONG DpcNormalDpcPresent : 01; // 0x00000010;
	/*2e6c*/ ULONG DpcNormalLocalInterrupt : 01; // 0x00000020;
	/*2e6c*/ ULONG DpcNormalSpare : 10; // 0x0000ffc0;
	/*2e6c*/ ULONG DpcThreadActive : 01; // 0x00010000;
	/*2e6c*/ ULONG DpcThreadRequested : 01; // 0x00020000;
	/*2e6c*/ ULONG DpcThreadSpare : 14; // 0xfffc0000;
	/*2e70*/ ULONG LastTimerHand;
	/*2e74*/ ULONG LastTick;
	/*2e78*/ ULONG ClockInterrupts;
	/*2e7c*/ ULONG ReadyScanTick;
	/*2e80*/ void * InterruptObject[0x100];
	/*3680*/ _KTIMER_TABLE TimerTable;
	/*5880*/ _KGATE DpcGate;
	/*5898*/ void * PrcbPad52;
	/*58a0*/ _KDPC CallDpc;
	/*58e0*/ LONG ClockKeepAlive;
	/*58e4*/ UCHAR PrcbPad60[0x2];
	/*58e6*/ USHORT NmiActive;
	/*58e8*/ LONG DpcWatchdogPeriod;
	/*58ec*/ LONG DpcWatchdogCount;
	/*58f0*/ LONG volatile KeSpinLockOrdering;
	/*58f4*/ ULONG DpcWatchdogProfileCumulativeDpcThreshold;
	/*58f8*/ void * CachedPtes;
	/*5900*/ _LIST_ENTRY WaitListHead;
	/*5910*/ ULONGLONG WaitLock;
	/*5918*/ ULONG ReadySummary;
	/*591c*/ LONG AffinitizedSelectionMask;
	/*5920*/ ULONG QueueIndex;
	/*5924*/ ULONG PrcbPad75[0x3];
	/*5930*/ _KDPC TimerExpirationDpc;
	/*5970*/ _RTL_RB_TREE ScbQueue;
	/*5980*/ _LIST_ENTRY DispatcherReadyListHead[0x20];
	/*5b80*/ ULONG InterruptCount;
	/*5b84*/ ULONG KernelTime;
	/*5b88*/ ULONG UserTime;
	/*5b8c*/ ULONG DpcTime;
	/*5b90*/ ULONG InterruptTime;
	/*5b94*/ ULONG AdjustDpcThreshold;
	/*5b98*/ UCHAR DebuggerSavedIRQL;
	/*5b99*/ UCHAR GroupSchedulingOverQuota;
	/*5b9a*/ UCHAR volatile DeepSleep;
	/*5b9b*/ UCHAR PrcbPad80;
	/*5b9c*/ ULONG DpcTimeCount;
	/*5ba0*/ ULONG DpcTimeLimit;
	/*5ba4*/ ULONG PeriodicCount;
	/*5ba8*/ ULONG PeriodicBias;
	/*5bac*/ ULONG AvailableTime;
	/*5bb0*/ ULONG KeExceptionDispatchCount;
	/*5bb4*/ ULONG ReadyThreadCount;
	/*5bb8*/ ULONGLONG ReadyQueueExpectedRunTime;
	/*5bc0*/ ULONGLONG StartCycles;
	/*5bc8*/ ULONGLONG TaggedCyclesStart;
	/*5bd0*/ ULONGLONG TaggedCycles[0x2];
	/*5be0*/ ULONGLONG GenerationTarget;
	/*5be8*/ ULONGLONG AffinitizedCycles;
	/*5bf0*/ ULONGLONG ImportantCycles;
	/*5bf8*/ ULONGLONG UnimportantCycles;
	/*5c00*/ ULONG DpcWatchdogProfileSingleDpcThreshold;
	/*5c04*/ LONG volatile MmSpinLockOrdering;
	/*5c08*/ void * volatile CachedStack;
	/*5c10*/ ULONG PageColor;
	/*5c14*/ ULONG NodeColor;
	/*5c18*/ ULONG NodeShiftedColor;
	/*5c1c*/ ULONG SecondaryColorMask;
	/*5c20*/ ULONGLONG PrcbPad81[0x3];
	/*5c38*/ ULONGLONG CycleTime;
	/*5c40*/ ULONGLONG Cycles[0x4][0x2];
	/*5c80*/ ULONG CcFastMdlReadNoWait;
	/*5c84*/ ULONG CcFastMdlReadWait;
	/*5c88*/ ULONG CcFastMdlReadNotPossible;
	/*5c8c*/ ULONG CcMapDataNoWait;
	/*5c90*/ ULONG CcMapDataWait;
	/*5c94*/ ULONG CcPinMappedDataCount;
	/*5c98*/ ULONG CcPinReadNoWait;
	/*5c9c*/ ULONG CcPinReadWait;
	/*5ca0*/ ULONG CcMdlReadNoWait;
	/*5ca4*/ ULONG CcMdlReadWait;
	/*5ca8*/ ULONG CcLazyWriteHotSpots;
	/*5cac*/ ULONG CcLazyWriteIos;
	/*5cb0*/ ULONG CcLazyWritePages;
	/*5cb4*/ ULONG CcDataFlushes;
	/*5cb8*/ ULONG CcDataPages;
	/*5cbc*/ ULONG CcLostDelayedWrites;
	/*5cc0*/ ULONG CcFastReadResourceMiss;
	/*5cc4*/ ULONG CcCopyReadWaitMiss;
	/*5cc8*/ ULONG CcFastMdlReadResourceMiss;
	/*5ccc*/ ULONG CcMapDataNoWaitMiss;
	/*5cd0*/ ULONG CcMapDataWaitMiss;
	/*5cd4*/ ULONG CcPinReadNoWaitMiss;
	/*5cd8*/ ULONG CcPinReadWaitMiss;
	/*5cdc*/ ULONG CcMdlReadNoWaitMiss;
	/*5ce0*/ ULONG CcMdlReadWaitMiss;
	/*5ce4*/ ULONG CcReadAheadIos;
	/*5ce8*/ LONG volatile MmCacheTransitionCount;
	/*5cec*/ LONG volatile MmCacheReadCount;
	/*5cf0*/ LONG volatile MmCacheIoCount;
	/*5cf4*/ ULONG PrcbPad91[0x3];
	/*5d00*/ _PROCESSOR_POWER_STATE PowerState;
	/*5f00*/ void * HyperPte;
	/*5f08*/ _LIST_ENTRY ScbList;
	/*5f18*/ _KDPC ForceIdleDpc;
	/*5f58*/ _KDPC DpcWatchdogDpc;
	/*5f98*/ _KTIMER DpcWatchdogTimer;
	/*5fd8*/ _CACHE_DESCRIPTOR Cache[0x5];
	/*6014*/ ULONG CacheCount;
	/*6018*/ ULONG volatile CachedCommit;
	/*601c*/ ULONG volatile CachedResidentAvailable;
	/*6020*/ void * WheaInfo;
	/*6028*/ void * EtwSupport;
	/*6030*/ void * ExSaPageArray;
	/*6038*/ ULONG KeAlignmentFixupCount;
	/*603c*/ ULONG PrcbPad95;
	/*6040*/ _SLIST_HEADER HypercallPageList;
	/*6050*/ ULONGLONG * StatisticsPage;
	/*6058*/ ULONGLONG PrcbPad85[0x5];
	/*6080*/ void * HypercallCachedPages;
	/*6088*/ void * VirtualApicAssist;
	/*6090*/ _KAFFINITY_EX PackageProcessorSet;
	/*6138*/ ULONGLONG PrcbPad86;
	/*6140*/ ULONGLONG SharedReadyQueueMask;
	/*6148*/ _KSHARED_READY_QUEUE * SharedReadyQueue;
	/*6150*/ ULONG SharedQueueScanOwner;
	/*6154*/ ULONG ScanSiblingIndex;
	/*6158*/ ULONGLONG CoreProcessorSet;
	/*6160*/ ULONGLONG ScanSiblingMask;
	/*6168*/ ULONGLONG LLCMask;
	/*6170*/ ULONGLONG CacheProcessorMask[0x5];
	/*6198*/ _PROCESSOR_PROFILE_CONTROL_AREA * ProcessorProfileControlArea;
	/*61a0*/ void * ProfileEventIndexAddress;
	/*61a8*/ void * * DpcWatchdogProfile;
	/*61b0*/ void * * DpcWatchdogProfileCurrentEmptyCapture;
	/*61b8*/ void * SchedulerAssist;
	/*61c0*/ _SYNCH_COUNTERS SynchCounters;
	/*6278*/ ULONGLONG PrcbPad94;
	/*6280*/ _FILESYSTEM_DISK_COUNTERS FsCounters;
	/*6290*/ UCHAR VendorString[0xd];
	/*629d*/ UCHAR PrcbPad100[0x3];
	/*62a0*/ ULONGLONG FeatureBits;
	/*62a8*/ _LARGE_INTEGER UpdateSignature;
	/*62b0*/ ULONGLONG PteBitCache;
	/*62b8*/ ULONG PteBitOffset;
	/*62bc*/ ULONG PrcbPad105;
	/*62c0*/ _CONTEXT * Context;
	/*62c8*/ ULONG ContextFlagsInit;
	/*62cc*/ ULONG PrcbPad115;
	/*62d0*/ _XSAVE_AREA * ExtendedState;
	/*62d8*/ void * IsrStack;
	/*62e0*/ _KENTROPY_TIMING_STATE EntropyTimingState;
	/*6430*/ _SINGLE_LIST_ENTRY AbSelfIoBoostsList;
	/*6438*/ _SINGLE_LIST_ENTRY AbPropagateBoostsList;
	/*6440*/ _KDPC AbDpc;
	/*6480*/ _IOP_IRP_STACK_PROFILER IoIrpStackProfilerCurrent;
	/*64d4*/ _IOP_IRP_STACK_PROFILER IoIrpStackProfilerPrevious;
	/*6528*/ _KSECURE_FAULT_INFORMATION SecureFault;
	/*6538*/ ULONGLONG PrcbPad120;
	/*6540*/ _KSHARED_READY_QUEUE LocalSharedReadyQueue;
	/*67b0*/ ULONGLONG PrcbPad125[0x2];
	/*67c0*/ ULONG TimerExpirationTraceCount;
	/*67c4*/ ULONG PrcbPad127;
	/*67c8*/ _KTIMER_EXPIRATION_TRACE TimerExpirationTrace[0x10];
	/*68c8*/ ULONGLONG PrcbPad128[0x7];
	/*6900*/ _REQUEST_MAILBOX * Mailbox;
	/*6908*/ ULONGLONG PrcbPad130[0x7];
	/*6940*/ _REQUEST_MAILBOX RequestMailbox[0x1];
	/*6980*/
};

struct _KPROCESS {
	/*0000*/ _DISPATCHER_HEADER Header;
	/*0018*/ _LIST_ENTRY ProfileListHead;
	/*0028*/ ULONGLONG DirectoryTableBase;
	/*0030*/ _LIST_ENTRY ThreadListHead;
	/*0040*/ ULONG ProcessLock;
	/*0044*/ ULONG ProcessTimerDelay;
	/*0048*/ ULONGLONG DeepFreezeStartTime;
	/*0050*/ _KAFFINITY_EX Affinity;
	/*00f8*/ _LIST_ENTRY ReadyListHead;
	/*0108*/ _SINGLE_LIST_ENTRY SwapListEntry;
	/*0110*/ _KAFFINITY_EX volatile ActiveProcessors;
	/*01b8*/ LONG AutoAlignment : 01; // 0x00000001;
	/*01b8*/ LONG DisableBoost : 01; // 0x00000002;
	/*01b8*/ LONG DisableQuantum : 01; // 0x00000004;
	/*01b8*/ ULONG DeepFreeze : 01; // 0x00000008;
	/*01b8*/ ULONG TimerVirtualization : 01; // 0x00000010;
	/*01b8*/ ULONG CheckStackExtents : 01; // 0x00000020;
	/*01b8*/ ULONG PpmPolicy : 03; // 0x000001c0;
	/*01b8*/ ULONG ActiveGroupsMask : 20; // 0x1ffffe00;
	/*01b8*/ LONG ReservedFlags : 03; // 0xe0000000;
	/*01b8*/ LONG volatile ProcessFlags;
	/*01bc*/ CHAR BasePriority;
	/*01bd*/ CHAR QuantumReset;
	/*01be*/ UCHAR Visited;
	/*01bf*/ _KEXECUTE_OPTIONS Flags;
	/*01c0*/ ULONG ThreadSeed[0x14];
	/*0210*/ USHORT IdealNode[0x14];
	/*0238*/ USHORT IdealGlobalNode;
	/*023a*/ USHORT Spare1;
	/*023c*/ _KSTACK_COUNT volatile StackCount;
	/*0240*/ _LIST_ENTRY ProcessListEntry;
	/*0250*/ ULONGLONG CycleTime;
	/*0258*/ ULONGLONG ContextSwitches;
	/*0260*/ _KSCHEDULING_GROUP * SchedulingGroup;
	/*0268*/ ULONG FreezeCount;
	/*026c*/ ULONG KernelTime;
	/*0270*/ ULONG UserTime;
	/*0274*/ ULONG ReadyTime;
	/*0278*/ UCHAR Spare2[0x50];
	/*02c8*/ void * InstrumentationCallback;
	union {
		/*02d0*/ ULONGLONG SecureHandle;
		struct {
			/*02d0*/ ULONGLONG SecureProcess : 01; // 0x0000000000000001;
			/*02d0*/ ULONGLONG Unused : 01; // 0x0000000000000002;
			/*02d8*/
		} Flags;
		/*02d8*/
	} SecureState;
	/*02d8*/
};

struct _KPROCESSOR_STATE {
	/*0000*/ _KSPECIAL_REGISTERS SpecialRegisters;
	/*00f0*/ _CONTEXT ContextFrame;
	/*05c0*/
};

enum _KPROCESS_PPM_POLICY {
	ProcessPpmDefault = 0x0,
	ProcessPpmThrottle = 0x1,
	ProcessPpmSemiThrottle = 0x2,
	ProcessPpmNoThrottle = 0x3,
	ProcessPpmWindowMinimized = 0x4,
	ProcessPpmWindowOccluded = 0x5,
	ProcessPpmWindowVisible = 0x6,
	ProcessPpmWindowInFocus = 0x7,
	MaxProcessPpmPolicy = 0x8
};

enum _KPROCESS_STATE {
	ProcessInMemory = 0x0,
	ProcessOutOfMemory = 0x1,
	ProcessInTransition = 0x2,
	ProcessOutTransition = 0x3,
	ProcessInSwap = 0x4,
	ProcessOutSwap = 0x5,
	ProcessRetryOutSwap = 0x6,
	ProcessAllSwapStates = 0x7
};

struct _KQUEUE {
	/*0000*/ _DISPATCHER_HEADER Header;
	/*0018*/ _LIST_ENTRY EntryListHead;
	/*0028*/ ULONG volatile CurrentCount;
	/*002c*/ ULONG MaximumCount;
	/*0030*/ _LIST_ENTRY ThreadListHead;
	/*0040*/
};

struct _KREQUEST_PACKET {
	/*0000*/ void * CurrentPacket[0x3];
	/*0018*/ void (* WorkerRoutine)( void * , void * , void * , void * );
	/*0020*/
};

struct _KSCB {
	/*0000*/ ULONGLONG GenerationCycles;
	/*0008*/ ULONGLONG MinQuotaCycleTarget;
	/*0010*/ ULONGLONG MaxQuotaCycleTarget;
	/*0018*/ ULONGLONG RankCycleTarget;
	/*0020*/ ULONGLONG LongTermCycles;
	/*0028*/ ULONGLONG LastReportedCycles;
	/*0030*/ ULONGLONG volatile OverQuotaHistory;
	/*0038*/ ULONGLONG ReadyTime;
	/*0040*/ ULONGLONG InsertTime;
	/*0048*/ _LIST_ENTRY PerProcessorList;
	/*0058*/ _RTL_BALANCED_NODE QueueNode;
	/*0070*/ UCHAR Inserted : 01; // 0x01;
	/*0070*/ UCHAR MaxOverQuota : 01; // 0x02;
	/*0070*/ UCHAR MinOverQuota : 01; // 0x04;
	/*0070*/ UCHAR RankBias : 01; // 0x08;
	/*0070*/ UCHAR SoftCap : 01; // 0x10;
	/*0070*/ UCHAR ShareRankOwner : 01; // 0x20;
	/*0070*/ UCHAR Spare1 : 02; // 0xc0;
	/*0071*/ UCHAR Depth;
	/*0072*/ USHORT ReadySummary;
	/*0074*/ ULONG Rank;
	/*0078*/ ULONG volatile * ShareRank;
	/*0080*/ ULONG volatile OwnerShareRank;
	/*0088*/ _LIST_ENTRY ReadyListHead[0x10];
	/*0188*/ _RTL_RB_TREE ChildScbQueue;
	/*0198*/ _KSCB * Parent;
	/*01a0*/ _KSCB * Root;
	/*01a8*/
};

struct _KSCHEDULING_GROUP {
	/*0000*/ _KSCHEDULING_GROUP_POLICY Policy;
	/*0008*/ ULONG RelativeWeight;
	/*000c*/ ULONG ChildMinRate;
	/*0010*/ ULONG ChildMinWeight;
	/*0014*/ ULONG ChildTotalWeight;
	/*0018*/ ULONGLONG QueryHistoryTimeStamp;
	/*0020*/ LONGLONG NotificationCycles;
	/*0028*/ LONGLONG MaxQuotaLimitCycles;
	/*0030*/ LONGLONG volatile MaxQuotaCyclesRemaining;
	/*0038*/ _LIST_ENTRY SchedulingGroupList;
	/*0038*/ _LIST_ENTRY Sibling;
	/*0048*/ _KDPC * NotificationDpc;
	/*0050*/ _LIST_ENTRY ChildList;
	/*0060*/ _KSCHEDULING_GROUP * Parent;
	/*0080*/ _KSCB PerProcessor[0x1];
	/*0240*/
};

struct _KSCHEDULING_GROUP_POLICY {
	/*0000*/ ULONG Value;
	/*0000*/ USHORT Weight;
	/*0000*/ USHORT MinRate;
	/*0002*/ USHORT MaxRate;
	/*0004*/ ULONG AllFlags;
	/*0004*/ ULONG Type : 01; // 0x00000001;
	/*0004*/ ULONG Disabled : 01; // 0x00000002;
	/*0004*/ ULONG RankBias : 01; // 0x00000004;
	/*0004*/ ULONG Spare1 : 29; // 0xfffffff8;
	/*0008*/
};

struct _KSECURE_FAULT_INFORMATION {
	/*0000*/ ULONGLONG FaultCode;
	/*0008*/ ULONGLONG FaultVa;
	/*0010*/
};

struct _KSEMAPHORE {
	/*0000*/ _DISPATCHER_HEADER Header;
	/*0018*/ LONG Limit;
	/*0020*/
};

struct _KSHARED_READY_QUEUE {
	/*0000*/ ULONGLONG Lock;
	/*0008*/ ULONG ReadySummary;
	/*0010*/ _LIST_ENTRY ReadyListHead[0x20];
	/*0210*/ CHAR RunningSummary[0x40];
	/*0250*/ UCHAR Span;
	/*0251*/ UCHAR LowProcIndex;
	/*0252*/ UCHAR QueueIndex;
	/*0253*/ UCHAR ProcCount;
	/*0254*/ UCHAR ScanOwner;
	/*0255*/ UCHAR Spare[0x3];
	/*0258*/ ULONGLONG Affinity;
	/*0260*/ ULONG ReadyThreadCount;
	/*0268*/ ULONGLONG ReadyQueueExpectedRunTime;
	/*0270*/
};

struct _KSPECIAL_REGISTERS {
	/*0000*/ ULONGLONG Cr0;
	/*0008*/ ULONGLONG Cr2;
	/*0010*/ ULONGLONG Cr3;
	/*0018*/ ULONGLONG Cr4;
	/*0020*/ ULONGLONG KernelDr0;
	/*0028*/ ULONGLONG KernelDr1;
	/*0030*/ ULONGLONG KernelDr2;
	/*0038*/ ULONGLONG KernelDr3;
	/*0040*/ ULONGLONG KernelDr6;
	/*0048*/ ULONGLONG KernelDr7;
	/*0050*/ _KDESCRIPTOR Gdtr;
	/*0060*/ _KDESCRIPTOR Idtr;
	/*0070*/ USHORT Tr;
	/*0072*/ USHORT Ldtr;
	/*0074*/ ULONG MxCsr;
	/*0078*/ ULONGLONG DebugControl;
	/*0080*/ ULONGLONG LastBranchToRip;
	/*0088*/ ULONGLONG LastBranchFromRip;
	/*0090*/ ULONGLONG LastExceptionToRip;
	/*0098*/ ULONGLONG LastExceptionFromRip;
	/*00a0*/ ULONGLONG Cr8;
	/*00a8*/ ULONGLONG MsrGsBase;
	/*00b0*/ ULONGLONG MsrGsSwap;
	/*00b8*/ ULONGLONG MsrStar;
	/*00c0*/ ULONGLONG MsrLStar;
	/*00c8*/ ULONGLONG MsrCStar;
	/*00d0*/ ULONGLONG MsrSyscallMask;
	/*00d8*/ ULONGLONG Xcr0;
	/*00e0*/ ULONGLONG MsrFsBase;
	/*00e8*/ ULONGLONG SpecialPadding0;
	/*00f0*/
};

struct _KSPIN_LOCK_QUEUE {
	/*0000*/ _KSPIN_LOCK_QUEUE * volatile Next;
	/*0008*/ ULONGLONG * volatile Lock;
	/*0010*/
};

struct _KSTACK_CONTROL {
	/*0000*/ ULONGLONG StackBase;
	/*0008*/ ULONGLONG ActualLimit;
	/*0008*/ ULONGLONG StackExpansion : 01; // 0x0000000000000001;
	/*0010*/ _KERNEL_STACK_SEGMENT Previous;
	/*0030*/
};

union _KSTACK_COUNT {
	/*0000*/ LONG Value;
	/*0000*/ ULONG State : 03; // 0x00000007;
	/*0000*/ ULONG StackCount : 29; // 0xfffffff8;
	/*0004*/
};

struct _KSYSTEM_TIME {
	/*0000*/ ULONG LowPart;
	/*0004*/ LONG High1Time;
	/*0008*/ LONG High2Time;
	/*000c*/
};

struct _KTHREAD {
	/*0000*/ _DISPATCHER_HEADER Header;
	/*0018*/ void * SListFaultAddress;
	/*0020*/ ULONGLONG QuantumTarget;
	/*0028*/ void * InitialStack;
	/*0030*/ void * volatile StackLimit;
	/*0038*/ void * StackBase;
	/*0040*/ ULONGLONG ThreadLock;
	/*0048*/ ULONGLONG volatile CycleTime;
	/*0050*/ ULONG CurrentRunTime;
	/*0054*/ ULONG ExpectedRunTime;
	/*0058*/ void * KernelStack;
	/*0060*/ _XSAVE_FORMAT * StateSaveArea;
	/*0068*/ _KSCHEDULING_GROUP * volatile SchedulingGroup;
	/*0070*/ _KWAIT_STATUS_REGISTER WaitRegister;
	/*0071*/ UCHAR volatile Running;
	/*0072*/ UCHAR Alerted[0x2];
	/*0074*/ ULONG AutoBoostActive : 01; // 0x00000001;
	/*0074*/ ULONG ReadyTransition : 01; // 0x00000002;
	/*0074*/ ULONG WaitNext : 01; // 0x00000004;
	/*0074*/ ULONG SystemAffinityActive : 01; // 0x00000008;
	/*0074*/ ULONG Alertable : 01; // 0x00000010;
	/*0074*/ ULONG UserStackWalkActive : 01; // 0x00000020;
	/*0074*/ ULONG ApcInterruptRequest : 01; // 0x00000040;
	/*0074*/ ULONG QuantumEndMigrate : 01; // 0x00000080;
	/*0074*/ ULONG UmsDirectedSwitchEnable : 01; // 0x00000100;
	/*0074*/ ULONG TimerActive : 01; // 0x00000200;
	/*0074*/ ULONG SystemThread : 01; // 0x00000400;
	/*0074*/ ULONG ProcessDetachActive : 01; // 0x00000800;
	/*0074*/ ULONG CalloutActive : 01; // 0x00001000;
	/*0074*/ ULONG ScbReadyQueue : 01; // 0x00002000;
	/*0074*/ ULONG ApcQueueable : 01; // 0x00004000;
	/*0074*/ ULONG ReservedStackInUse : 01; // 0x00008000;
	/*0074*/ ULONG UmsPerformingSyscall : 01; // 0x00010000;
	/*0074*/ ULONG TimerSuspended : 01; // 0x00020000;
	/*0074*/ ULONG SuspendedWaitMode : 01; // 0x00040000;
	/*0074*/ ULONG SuspendSchedulerApcWait : 01; // 0x00080000;
	/*0074*/ ULONG Reserved : 12; // 0xfff00000;
	/*0074*/ LONG MiscFlags;
	/*0078*/ ULONG BamQosLevel : 02; // 0x00000003;
	/*0078*/ ULONG AutoAlignment : 01; // 0x00000004;
	/*0078*/ ULONG DisableBoost : 01; // 0x00000008;
	/*0078*/ ULONG AlertedByThreadId : 01; // 0x00000010;
	/*0078*/ ULONG QuantumDonation : 01; // 0x00000020;
	/*0078*/ ULONG EnableStackSwap : 01; // 0x00000040;
	/*0078*/ ULONG GuiThread : 01; // 0x00000080;
	/*0078*/ ULONG DisableQuantum : 01; // 0x00000100;
	/*0078*/ ULONG ChargeOnlySchedulingGroup : 01; // 0x00000200;
	/*0078*/ ULONG DeferPreemption : 01; // 0x00000400;
	/*0078*/ ULONG QueueDeferPreemption : 01; // 0x00000800;
	/*0078*/ ULONG ForceDeferSchedule : 01; // 0x00001000;
	/*0078*/ ULONG SharedReadyQueueAffinity : 01; // 0x00002000;
	/*0078*/ ULONG FreezeCount : 01; // 0x00004000;
	/*0078*/ ULONG TerminationApcRequest : 01; // 0x00008000;
	/*0078*/ ULONG AutoBoostEntriesExhausted : 01; // 0x00010000;
	/*0078*/ ULONG KernelStackResident : 01; // 0x00020000;
	/*0078*/ ULONG TerminateRequestReason : 02; // 0x000c0000;
	/*0078*/ ULONG ProcessStackCountDecremented : 01; // 0x00100000;
	/*0078*/ ULONG RestrictedGuiThread : 01; // 0x00200000;
	/*0078*/ ULONG VpBackingThread : 01; // 0x00400000;
	/*0078*/ ULONG ThreadFlagsSpare : 01; // 0x00800000;
	/*0078*/ ULONG EtwStackTraceApcInserted : 08; // 0xff000000;
	/*0078*/ LONG volatile ThreadFlags;
	/*007c*/ UCHAR volatile Tag;
	/*007d*/ UCHAR SystemHeteroCpuPolicy;
	/*007e*/ UCHAR UserHeteroCpuPolicy : 07; // 0x7f;
	/*007e*/ UCHAR ExplicitSystemHeteroCpuPolicy : 01; // 0x80;
	/*007f*/ UCHAR Spare0;
	/*0080*/ ULONG SystemCallNumber;
	/*0084*/ ULONG ReadyTime;
	/*0088*/ void * FirstArgument;
	/*0090*/ _KTRAP_FRAME * TrapFrame;
	/*0098*/ _KAPC_STATE ApcState;
	/*0098*/ UCHAR ApcStateFill[0x2b];
	/*00c3*/ CHAR Priority;
	/*00c4*/ ULONG UserIdealProcessor;
	/*00c8*/ LONGLONG volatile WaitStatus;
	/*00d0*/ _KWAIT_BLOCK * WaitBlockList;
	/*00d8*/ _LIST_ENTRY WaitListEntry;
	/*00d8*/ _SINGLE_LIST_ENTRY SwapListEntry;
	/*00e8*/ _DISPATCHER_HEADER * volatile Queue;
	/*00f0*/ void * Teb;
	/*00f8*/ ULONGLONG RelativeTimerBias;
	/*0100*/ _KTIMER Timer;
	/*0140*/ _KWAIT_BLOCK WaitBlock[0x4];
	/*0140*/ UCHAR WaitBlockFill4[0x14];
	/*0154*/ ULONG ContextSwitches;
	/*0140*/ UCHAR WaitBlockFill5[0x44];
	/*0184*/ UCHAR volatile State;
	/*0185*/ CHAR Spare13;
	/*0186*/ UCHAR WaitIrql;
	/*0187*/ CHAR WaitMode;
	/*0140*/ UCHAR WaitBlockFill6[0x74];
	/*01b4*/ ULONG WaitTime;
	/*0140*/ UCHAR WaitBlockFill7[0xa4];
	/*01e4*/ SHORT KernelApcDisable;
	/*01e6*/ SHORT SpecialApcDisable;
	/*01e4*/ ULONG CombinedApcDisable;
	/*0140*/ UCHAR WaitBlockFill8[0x28];
	/*0168*/ _KTHREAD_COUNTERS * ThreadCounters;
	/*0140*/ UCHAR WaitBlockFill9[0x58];
	/*0198*/ _XSTATE_SAVE * XStateSave;
	/*0140*/ UCHAR WaitBlockFill10[0x88];
	/*01c8*/ void * volatile Win32Thread;
	/*0140*/ UCHAR WaitBlockFill11[0xb0];
	/*01f0*/ _UMS_CONTROL_BLOCK * Ucb;
	/*01f8*/ _KUMS_CONTEXT_HEADER * volatile Uch;
	/*0200*/ void * Spare21;
	/*0208*/ _LIST_ENTRY QueueListEntry;
	/*0218*/ ULONG volatile NextProcessor;
	/*0218*/ ULONG NextProcessorNumber : 31; // 0x7fffffff;
	/*0218*/ ULONG SharedReadyQueue : 01; // 0x80000000;
	/*021c*/ LONG QueuePriority;
	/*0220*/ _KPROCESS * Process;
	/*0228*/ _GROUP_AFFINITY UserAffinity;
	/*0228*/ UCHAR UserAffinityFill[0xa];
	/*0232*/ CHAR PreviousMode;
	/*0233*/ CHAR BasePriority;
	/*0234*/ CHAR PriorityDecrement;
	/*0234*/ UCHAR ForegroundBoost : 04; // 0x0f;
	/*0234*/ UCHAR UnusualBoost : 04; // 0xf0;
	/*0235*/ UCHAR Preempted;
	/*0236*/ UCHAR AdjustReason;
	/*0237*/ CHAR AdjustIncrement;
	/*0238*/ ULONGLONG AffinityVersion;
	/*0240*/ _GROUP_AFFINITY Affinity;
	/*0240*/ UCHAR AffinityFill[0xa];
	/*024a*/ UCHAR ApcStateIndex;
	/*024b*/ UCHAR WaitBlockCount;
	/*024c*/ ULONG IdealProcessor;
	/*0250*/ ULONGLONG NpxState;
	/*0258*/ _KAPC_STATE SavedApcState;
	/*0258*/ UCHAR SavedApcStateFill[0x2b];
	/*0283*/ UCHAR WaitReason;
	/*0284*/ CHAR SuspendCount;
	/*0285*/ CHAR Saturation;
	/*0286*/ USHORT SListFaultCount;
	/*0288*/ _KAPC SchedulerApc;
	/*0288*/ UCHAR SchedulerApcFill0[0x1];
	/*0289*/ UCHAR ResourceIndex;
	/*0288*/ UCHAR SchedulerApcFill1[0x3];
	/*028b*/ UCHAR QuantumReset;
	/*0288*/ UCHAR SchedulerApcFill2[0x4];
	/*028c*/ ULONG KernelTime;
	/*0288*/ UCHAR SchedulerApcFill3[0x40];
	/*02c8*/ _KPRCB * volatile WaitPrcb;
	/*0288*/ UCHAR SchedulerApcFill4[0x48];
	/*02d0*/ void * LegoData;
	/*0288*/ UCHAR SchedulerApcFill5[0x53];
	/*02db*/ UCHAR CallbackNestingLevel;
	/*02dc*/ ULONG UserTime;
	/*02e0*/ _KEVENT SuspendEvent;
	/*02f8*/ _LIST_ENTRY ThreadListEntry;
	/*0308*/ _LIST_ENTRY MutantListHead;
	/*0318*/ UCHAR AbEntrySummary;
	/*0319*/ UCHAR AbWaitEntryCount;
	/*031a*/ UCHAR AbAllocationRegionCount;
	/*031b*/ UCHAR Spare20;
	/*031c*/ ULONG SecureThreadCookie;
	/*0320*/ _KLOCK_ENTRY LockEntries[0x6];
	/*0560*/ _SINGLE_LIST_ENTRY PropagateBoostsEntry;
	/*0568*/ _SINGLE_LIST_ENTRY IoSelfBoostsEntry;
	/*0570*/ UCHAR PriorityFloorCounts[0x10];
	/*0580*/ ULONG PriorityFloorSummary;
	/*0584*/ LONG volatile AbCompletedIoBoostCount;
	/*0588*/ LONG volatile AbCompletedIoQoSBoostCount;
	/*058c*/ SHORT volatile KeReferenceCount;
	/*058e*/ UCHAR AbOrphanedEntrySummary;
	/*058f*/ UCHAR AbOwnedEntryCount;
	/*0590*/ ULONG ForegroundLossTime;
	/*0598*/ _LIST_ENTRY GlobalForegroundListEntry;
	/*0598*/ _SINGLE_LIST_ENTRY ForegroundDpcStackListEntry;
	/*05a0*/ ULONGLONG InGlobalForegroundList;
	/*05a8*/ LONGLONG ReadOperationCount;
	/*05b0*/ LONGLONG WriteOperationCount;
	/*05b8*/ LONGLONG OtherOperationCount;
	/*05c0*/ LONGLONG ReadTransferCount;
	/*05c8*/ LONGLONG WriteTransferCount;
	/*05d0*/ LONGLONG OtherTransferCount;
	/*05d8*/ _KSCB * QueuedScb;
	/*05e0*/ ULONG volatile ThreadTimerDelay;
	/*05e4*/ LONG volatile ThreadFlags2;
	/*05e4*/ ULONG PpmPolicy : 02; // 0x00000003;
	/*05e4*/ ULONG ThreadFlags2Reserved : 30; // 0xfffffffc;
	/*05e8*/ void * SchedulerAssist;
	/*05f0*/
};

struct _KTHREAD_COUNTERS {
	/*0000*/ ULONGLONG WaitReasonBitMap;
	/*0008*/ _THREAD_PERFORMANCE_DATA * UserData;
	/*0010*/ ULONG Flags;
	/*0014*/ ULONG ContextSwitches;
	/*0018*/ ULONGLONG CycleTimeBias;
	/*0020*/ ULONGLONG HardwareCounters;
	/*0028*/ _COUNTER_READING HwCounter[0x10];
	/*01a8*/
};

enum _KTHREAD_PPM_POLICY {
	ThreadPpmDefault = 0x0,
	ThreadPpmThrottle = 0x1,
	ThreadPpmSemiThrottle = 0x2,
	ThreadPpmNoThrottle = 0x3,
	MaxThreadPpmPolicy = 0x4
};

enum _KTHREAD_TAG {
	KThreadTagNone = 0x0,
	KThreadTagMediaBuffering = 0x1,
	KThreadTagMax = 0x2
};

struct _KTIMER {
	/*0000*/ _DISPATCHER_HEADER Header;
	/*0018*/ _ULARGE_INTEGER DueTime;
	/*0020*/ _LIST_ENTRY TimerListEntry;
	/*0030*/ _KDPC * Dpc;
	/*0038*/ ULONG Processor;
	/*003c*/ ULONG Period;
	/*0040*/
};

struct _KTIMER_EXPIRATION_TRACE {
	/*0000*/ ULONGLONG InterruptTime;
	/*0008*/ _LARGE_INTEGER PerformanceCounter;
	/*0010*/
};

struct _KTIMER_TABLE {
	/*0000*/ _KTIMER * TimerExpiry[0x40];
	/*0200*/ _KTIMER_TABLE_ENTRY TimerEntries[0x100];
	/*2200*/
};

struct _KTIMER_TABLE_ENTRY {
	/*0000*/ ULONGLONG Lock;
	/*0008*/ _LIST_ENTRY Entry;
	/*0018*/ _ULARGE_INTEGER Time;
	/*0020*/
};

struct _KTRAP_FRAME {
	/*0000*/ ULONGLONG P1Home;
	/*0008*/ ULONGLONG P2Home;
	/*0010*/ ULONGLONG P3Home;
	/*0018*/ ULONGLONG P4Home;
	/*0020*/ ULONGLONG P5;
	/*0028*/ CHAR PreviousMode;
	/*0029*/ UCHAR PreviousIrql;
	/*002a*/ UCHAR FaultIndicator;
	/*002b*/ UCHAR ExceptionActive;
	/*002c*/ ULONG MxCsr;
	/*0030*/ ULONGLONG Rax;
	/*0038*/ ULONGLONG Rcx;
	/*0040*/ ULONGLONG Rdx;
	/*0048*/ ULONGLONG R8;
	/*0050*/ ULONGLONG R9;
	/*0058*/ ULONGLONG R10;
	/*0060*/ ULONGLONG R11;
	/*0068*/ ULONGLONG GsBase;
	/*0068*/ ULONGLONG GsSwap;
	/*0070*/ _M128A Xmm0;
	/*0080*/ _M128A Xmm1;
	/*0090*/ _M128A Xmm2;
	/*00a0*/ _M128A Xmm3;
	/*00b0*/ _M128A Xmm4;
	/*00c0*/ _M128A Xmm5;
	/*00d0*/ ULONGLONG FaultAddress;
	/*00d0*/ ULONGLONG ContextRecord;
	/*00d8*/ ULONGLONG Dr0;
	/*00e0*/ ULONGLONG Dr1;
	/*00e8*/ ULONGLONG Dr2;
	/*00f0*/ ULONGLONG Dr3;
	/*00f8*/ ULONGLONG Dr6;
	/*0100*/ ULONGLONG Dr7;
	/*0108*/ ULONGLONG DebugControl;
	/*0110*/ ULONGLONG LastBranchToRip;
	/*0118*/ ULONGLONG LastBranchFromRip;
	/*0120*/ ULONGLONG LastExceptionToRip;
	/*0128*/ ULONGLONG LastExceptionFromRip;
	/*0130*/ USHORT SegDs;
	/*0132*/ USHORT SegEs;
	/*0134*/ USHORT SegFs;
	/*0136*/ USHORT SegGs;
	/*0138*/ ULONGLONG TrapFrame;
	/*0140*/ ULONGLONG Rbx;
	/*0148*/ ULONGLONG Rdi;
	/*0150*/ ULONGLONG Rsi;
	/*0158*/ ULONGLONG Rbp;
	/*0160*/ ULONGLONG ErrorCode;
	/*0160*/ ULONGLONG ExceptionFrame;
	/*0168*/ ULONGLONG Rip;
	/*0170*/ USHORT SegCs;
	/*0172*/ UCHAR Fill0;
	/*0173*/ UCHAR Logging;
	/*0174*/ USHORT Fill1[0x2];
	/*0178*/ ULONG EFlags;
	/*017c*/ ULONG Fill2;
	/*0180*/ ULONGLONG Rsp;
	/*0188*/ USHORT SegSs;
	/*018a*/ USHORT Fill3;
	/*018c*/ ULONG Fill4;
	/*0190*/
};

struct _KTSS64 {
	/*0000*/ ULONG Reserved0;
	/*0004*/ ULONGLONG Rsp0;
	/*000c*/ ULONGLONG Rsp1;
	/*0014*/ ULONGLONG Rsp2;
	/*001c*/ ULONGLONG Ist[0x8];
	/*005c*/ ULONGLONG Reserved1;
	/*0064*/ USHORT Reserved2;
	/*0066*/ USHORT IoMapBase;
	/*0068*/
};

struct _KUMS_CONTEXT_HEADER {
	/*0000*/ ULONGLONG P1Home;
	/*0008*/ ULONGLONG P2Home;
	/*0010*/ ULONGLONG P3Home;
	/*0018*/ ULONGLONG P4Home;
	/*0020*/ void * StackTop;
	/*0028*/ ULONGLONG StackSize;
	/*0030*/ ULONGLONG RspOffset;
	/*0038*/ ULONGLONG Rip;
	/*0040*/ _XSAVE_FORMAT * FltSave;
	/*0048*/ ULONGLONG Volatile : 01; // 0x0000000000000001;
	/*0048*/ ULONGLONG Reserved : 63; // 0xfffffffffffffffe;
	/*0048*/ ULONGLONG Flags;
	/*0050*/ _KTRAP_FRAME * TrapFrame;
	/*0058*/ _KEXCEPTION_FRAME * ExceptionFrame;
	/*0060*/ _KTHREAD * SourceThread;
	/*0068*/ ULONGLONG Return;
	/*0070*/
};

struct _KUSER_SHARED_DATA {
	/*0000*/ ULONG TickCountLowDeprecated;
	/*0004*/ ULONG TickCountMultiplier;
	/*0008*/ _KSYSTEM_TIME volatile InterruptTime;
	/*0014*/ _KSYSTEM_TIME volatile SystemTime;
	/*0020*/ _KSYSTEM_TIME volatile TimeZoneBias;
	/*002c*/ USHORT ImageNumberLow;
	/*002e*/ USHORT ImageNumberHigh;
	/*0030*/ WCHAR NtSystemRoot[0x104];
	/*0238*/ ULONG MaxStackTraceDepth;
	/*023c*/ ULONG CryptoExponent;
	/*0240*/ ULONG TimeZoneId;
	/*0244*/ ULONG LargePageMinimum;
	/*0248*/ ULONG AitSamplingValue;
	/*024c*/ ULONG AppCompatFlag;
	/*0250*/ ULONGLONG RNGSeedVersion;
	/*0258*/ ULONG GlobalValidationRunlevel;
	/*025c*/ LONG volatile TimeZoneBiasStamp;
	/*0260*/ ULONG NtBuildNumber;
	/*0264*/ _NT_PRODUCT_TYPE NtProductType;
	/*0268*/ UCHAR ProductTypeIsValid;
	/*0269*/ UCHAR Reserved0[0x1];
	/*026a*/ USHORT NativeProcessorArchitecture;
	/*026c*/ ULONG NtMajorVersion;
	/*0270*/ ULONG NtMinorVersion;
	/*0274*/ UCHAR ProcessorFeatures[0x40];
	/*02b4*/ ULONG Reserved1;
	/*02b8*/ ULONG Reserved3;
	/*02bc*/ ULONG volatile TimeSlip;
	/*02c0*/ _ALTERNATIVE_ARCHITECTURE_TYPE AlternativeArchitecture;
	/*02c4*/ ULONG BootId;
	/*02c8*/ _LARGE_INTEGER SystemExpirationDate;
	/*02d0*/ ULONG SuiteMask;
	/*02d4*/ UCHAR KdDebuggerEnabled;
	/*02d5*/ UCHAR MitigationPolicies;
	/*02d5*/ UCHAR NXSupportPolicy : 02; // 0x03;
	/*02d5*/ UCHAR SEHValidationPolicy : 02; // 0x0c;
	/*02d5*/ UCHAR CurDirDevicesSkippedForDlls : 02; // 0x30;
	/*02d5*/ UCHAR Reserved : 02; // 0xc0;
	/*02d6*/ UCHAR Reserved6[0x2];
	/*02d8*/ ULONG volatile ActiveConsoleId;
	/*02dc*/ ULONG volatile DismountCount;
	/*02e0*/ ULONG ComPlusPackage;
	/*02e4*/ ULONG LastSystemRITEventTickCount;
	/*02e8*/ ULONG NumberOfPhysicalPages;
	/*02ec*/ UCHAR SafeBootMode;
	/*02ed*/ UCHAR VirtualizationFlags;
	/*02ee*/ UCHAR Reserved12[0x2];
	/*02f0*/ ULONG SharedDataFlags;
	/*02f0*/ ULONG DbgErrorPortPresent : 01; // 0x00000001;
	/*02f0*/ ULONG DbgElevationEnabled : 01; // 0x00000002;
	/*02f0*/ ULONG DbgVirtEnabled : 01; // 0x00000004;
	/*02f0*/ ULONG DbgInstallerDetectEnabled : 01; // 0x00000008;
	/*02f0*/ ULONG DbgLkgEnabled : 01; // 0x00000010;
	/*02f0*/ ULONG DbgDynProcessorEnabled : 01; // 0x00000020;
	/*02f0*/ ULONG DbgConsoleBrokerEnabled : 01; // 0x00000040;
	/*02f0*/ ULONG DbgSecureBootEnabled : 01; // 0x00000080;
	/*02f0*/ ULONG DbgMultiSessionSku : 01; // 0x00000100;
	/*02f0*/ ULONG DbgMultiUsersInSessionSku : 01; // 0x00000200;
	/*02f0*/ ULONG DbgStateSeparationEnabled : 01; // 0x00000400;
	/*02f0*/ ULONG SpareBits : 21; // 0xfffff800;
	/*02f4*/ ULONG DataFlagsPad[0x1];
	/*02f8*/ ULONGLONG TestRetInstruction;
	/*0300*/ LONGLONG QpcFrequency;
	/*0308*/ ULONG SystemCall;
	/*030c*/ ULONG SystemCallPad0;
	/*0310*/ ULONGLONG SystemCallPad[0x2];
	/*0320*/ _KSYSTEM_TIME volatile TickCount;
	/*0320*/ ULONGLONG volatile TickCountQuad;
	/*0320*/ ULONG ReservedTickCountOverlay[0x3];
	/*032c*/ ULONG TickCountPad[0x1];
	/*0330*/ ULONG Cookie;
	/*0334*/ ULONG CookiePad[0x1];
	/*0338*/ LONGLONG ConsoleSessionForegroundProcessId;
	/*0340*/ ULONGLONG TimeUpdateLock;
	/*0348*/ ULONGLONG BaselineSystemTimeQpc;
	/*0350*/ ULONGLONG BaselineInterruptTimeQpc;
	/*0358*/ ULONGLONG QpcSystemTimeIncrement;
	/*0360*/ ULONGLONG QpcInterruptTimeIncrement;
	/*0368*/ UCHAR QpcSystemTimeIncrementShift;
	/*0369*/ UCHAR QpcInterruptTimeIncrementShift;
	/*036a*/ USHORT UnparkedProcessorCount;
	/*036c*/ ULONG EnclaveFeatureMask[0x4];
	/*037c*/ ULONG TelemetryCoverageRound;
	/*0380*/ USHORT UserModeGlobalLogger[0x10];
	/*03a0*/ ULONG ImageFileExecutionOptions;
	/*03a4*/ ULONG LangGenerationCount;
	/*03a8*/ ULONGLONG Reserved4;
	/*03b0*/ ULONGLONG volatile InterruptTimeBias;
	/*03b8*/ ULONGLONG volatile QpcBias;
	/*03c0*/ ULONG ActiveProcessorCount;
	/*03c4*/ UCHAR volatile ActiveGroupCount;
	/*03c5*/ UCHAR Reserved9;
	/*03c6*/ USHORT QpcData;
	/*03c6*/ UCHAR volatile QpcBypassEnabled;
	/*03c7*/ UCHAR QpcShift;
	/*03c8*/ _LARGE_INTEGER TimeZoneBiasEffectiveStart;
	/*03d0*/ _LARGE_INTEGER TimeZoneBiasEffectiveEnd;
	/*03d8*/ _XSTATE_CONFIGURATION XState;
	/*0708*/
};

struct _KWAIT_BLOCK {
	/*0000*/ _LIST_ENTRY WaitListEntry;
	/*0010*/ UCHAR WaitType;
	/*0011*/ UCHAR volatile BlockState;
	/*0012*/ USHORT WaitKey;
	/*0014*/ LONG SpareLong;
	/*0018*/ _KTHREAD * Thread;
	/*0018*/ _KQUEUE * NotificationQueue;
	/*0020*/ void * Object;
	/*0028*/ void * SparePtr;
	/*0030*/
};

enum _KWAIT_BLOCK_STATE {
	WaitBlockBypassStart = 0x0,
	WaitBlockBypassComplete = 0x1,
	WaitBlockSuspendBypassStart = 0x2,
	WaitBlockSuspendBypassComplete = 0x3,
	WaitBlockActive = 0x4,
	WaitBlockInactive = 0x5,
	WaitBlockSuspended = 0x6,
	WaitBlockAllStates = 0x7
};

enum _KWAIT_STATE {
	WaitInProgress = 0x0,
	WaitCommitted = 0x1,
	WaitAborted = 0x2,
	WaitSuspendInProgress = 0x3,
	WaitSuspended = 0x4,
	WaitResumeInProgress = 0x5,
	WaitResumeAborted = 0x6,
	WaitFirstSuspendState = 0x3,
	WaitLastSuspendState = 0x6,
	MaximumWaitState = 0x7
};

union _KWAIT_STATUS_REGISTER {
	/*0000*/ UCHAR Flags;
	/*0000*/ UCHAR State : 03; // 0x07;
	/*0000*/ UCHAR Affinity : 01; // 0x08;
	/*0000*/ UCHAR Priority : 01; // 0x10;
	/*0000*/ UCHAR Apc : 01; // 0x20;
	/*0000*/ UCHAR UserApc : 01; // 0x40;
	/*0000*/ UCHAR Alert : 01; // 0x80;
	/*0001*/
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

struct _LDRP_CSLIST {
	/*0000*/ _SINGLE_LIST_ENTRY * Tail;
	/*0008*/
};

struct _LDRP_LOAD_CONTEXT;

struct _LDR_DATA_TABLE_ENTRY {
	/*0000*/ _LIST_ENTRY InLoadOrderLinks;
	/*0010*/ _LIST_ENTRY InMemoryOrderLinks;
	/*0020*/ _LIST_ENTRY InInitializationOrderLinks;
	/*0030*/ void * DllBase;
	/*0038*/ void * EntryPoint;
	/*0040*/ ULONG SizeOfImage;
	/*0048*/ _UNICODE_STRING FullDllName;
	/*0058*/ _UNICODE_STRING BaseDllName;
	/*0068*/ UCHAR FlagGroup[0x4];
	/*0068*/ ULONG Flags;
	/*0068*/ ULONG PackagedBinary : 01; // 0x00000001;
	/*0068*/ ULONG MarkedForRemoval : 01; // 0x00000002;
	/*0068*/ ULONG ImageDll : 01; // 0x00000004;
	/*0068*/ ULONG LoadNotificationsSent : 01; // 0x00000008;
	/*0068*/ ULONG TelemetryEntryProcessed : 01; // 0x00000010;
	/*0068*/ ULONG ProcessStaticImport : 01; // 0x00000020;
	/*0068*/ ULONG InLegacyLists : 01; // 0x00000040;
	/*0068*/ ULONG InIndexes : 01; // 0x00000080;
	/*0068*/ ULONG ShimDll : 01; // 0x00000100;
	/*0068*/ ULONG InExceptionTable : 01; // 0x00000200;
	/*0068*/ ULONG ReservedFlags1 : 02; // 0x00000c00;
	/*0068*/ ULONG LoadInProgress : 01; // 0x00001000;
	/*0068*/ ULONG LoadConfigProcessed : 01; // 0x00002000;
	/*0068*/ ULONG EntryProcessed : 01; // 0x00004000;
	/*0068*/ ULONG ProtectDelayLoad : 01; // 0x00008000;
	/*0068*/ ULONG ReservedFlags3 : 02; // 0x00030000;
	/*0068*/ ULONG DontCallForThreads : 01; // 0x00040000;
	/*0068*/ ULONG ProcessAttachCalled : 01; // 0x00080000;
	/*0068*/ ULONG ProcessAttachFailed : 01; // 0x00100000;
	/*0068*/ ULONG CorDeferredValidate : 01; // 0x00200000;
	/*0068*/ ULONG CorImage : 01; // 0x00400000;
	/*0068*/ ULONG DontRelocate : 01; // 0x00800000;
	/*0068*/ ULONG CorILOnly : 01; // 0x01000000;
	/*0068*/ ULONG ReservedFlags5 : 03; // 0x0e000000;
	/*0068*/ ULONG Redirected : 01; // 0x10000000;
	/*0068*/ ULONG ReservedFlags6 : 02; // 0x60000000;
	/*0068*/ ULONG CompatDatabaseProcessed : 01; // 0x80000000;
	/*006c*/ USHORT ObsoleteLoadCount;
	/*006e*/ USHORT TlsIndex;
	/*0070*/ _LIST_ENTRY HashLinks;
	/*0080*/ ULONG TimeDateStamp;
	/*0088*/ _ACTIVATION_CONTEXT * EntryPointActivationContext;
	/*0090*/ void * Lock;
	/*0098*/ _LDR_DDAG_NODE * DdagNode;
	/*00a0*/ _LIST_ENTRY NodeModuleLink;
	/*00b0*/ _LDRP_LOAD_CONTEXT * LoadContext;
	/*00b8*/ void * ParentDllBase;
	/*00c0*/ void * SwitchBackContext;
	/*00c8*/ _RTL_BALANCED_NODE BaseAddressIndexNode;
	/*00e0*/ _RTL_BALANCED_NODE MappingInfoIndexNode;
	/*00f8*/ ULONGLONG OriginalBase;
	/*0100*/ _LARGE_INTEGER LoadTime;
	/*0108*/ ULONG BaseNameHashValue;
	/*010c*/ _LDR_DLL_LOAD_REASON LoadReason;
	/*0110*/ ULONG ImplicitPathOptions;
	/*0114*/ ULONG ReferenceCount;
	/*0118*/ ULONG DependentLoadFlags;
	/*011c*/ UCHAR SigningLevel;
	/*0120*/
};

struct _LDR_DDAG_NODE {
	/*0000*/ _LIST_ENTRY Modules;
	/*0010*/ _LDR_SERVICE_TAG_RECORD * ServiceTagList;
	/*0018*/ ULONG LoadCount;
	/*001c*/ ULONG LoadWhileUnloadingCount;
	/*0020*/ ULONG LowestLink;
	/*0028*/ _LDRP_CSLIST Dependencies;
	/*0030*/ _LDRP_CSLIST IncomingDependencies;
	/*0038*/ _LDR_DDAG_STATE State;
	/*0040*/ _SINGLE_LIST_ENTRY CondenseLink;
	/*0048*/ ULONG PreorderNumber;
	/*0050*/
};

enum _LDR_DDAG_STATE {
	LdrModulesMerged = 0xfffffffb,
	LdrModulesInitError = 0xfffffffc,
	LdrModulesSnapError = 0xfffffffd,
	LdrModulesUnloaded = 0xfffffffe,
	LdrModulesUnloading = 0xffffffff,
	LdrModulesPlaceHolder = 0x0,
	LdrModulesMapping = 0x1,
	LdrModulesMapped = 0x2,
	LdrModulesWaitingForDependencies = 0x3,
	LdrModulesSnapping = 0x4,
	LdrModulesSnapped = 0x5,
	LdrModulesCondensed = 0x6,
	LdrModulesReadyToInit = 0x7,
	LdrModulesInitializing = 0x8,
	LdrModulesReadyToRun = 0x9
};

enum _LDR_DLL_LOAD_REASON {
	LoadReasonStaticDependency = 0x0,
	LoadReasonStaticForwarderDependency = 0x1,
	LoadReasonDynamicForwarderDependency = 0x2,
	LoadReasonDelayloadDependency = 0x3,
	LoadReasonDynamicLoad = 0x4,
	LoadReasonAsImageLoad = 0x5,
	LoadReasonAsDataLoad = 0x6,
	LoadReasonEnclavePrimary = 0x7,
	LoadReasonEnclaveDependency = 0x8,
	LoadReasonUnknown = 0xffffffff
};

struct _LDR_SERVICE_TAG_RECORD {
	/*0000*/ _LDR_SERVICE_TAG_RECORD * Next;
	/*0008*/ ULONG ServiceTag;
	/*0010*/
};

struct _LFH_BLOCK_ZONE {
	/*0000*/ _LIST_ENTRY ListEntry;
	/*0010*/ LONG volatile NextIndex;
	/*0018*/
};

struct _LFH_HEAP {
	/*0000*/ _RTL_SRWLOCK Lock;
	/*0008*/ _LIST_ENTRY SubSegmentZones;
	/*0018*/ void * Heap;
	/*0020*/ void * NextSegmentInfoArrayAddress;
	/*0028*/ void * FirstUncommittedAddress;
	/*0030*/ void * ReservedAddressLimit;
	/*0038*/ ULONG SegmentCreate;
	/*003c*/ ULONG SegmentDelete;
	/*0040*/ ULONG volatile MinimumCacheDepth;
	/*0044*/ ULONG volatile CacheShiftThreshold;
	/*0048*/ ULONGLONG volatile SizeInCache;
	/*0050*/ _HEAP_BUCKET_RUN_INFO volatile RunInfo;
	/*0060*/ _USER_MEMORY_CACHE_ENTRY UserBlockCache[0xc];
	/*02a0*/ _HEAP_LFH_MEM_POLICIES MemoryPolicies;
	/*02a4*/ _HEAP_BUCKET Buckets[0x81];
	/*04a8*/ _HEAP_LOCAL_SEGMENT_INFO * SegmentInfoArrays[0x81];
	/*08b0*/ _HEAP_LOCAL_SEGMENT_INFO * AffinitizedInfoArrays[0x81];
	/*0cb8*/ _SEGMENT_HEAP * SegmentAllocator;
	/*0cc0*/ _HEAP_LOCAL_DATA LocalData[0x1];
	/*0cf0*/
};

union _LFH_RANDOM_DATA {
	/*0000*/ UCHAR Bytes[0x100];
	/*0000*/ USHORT Words[0x80];
	/*0000*/ ULONGLONG Quadwords[0x20];
	/*0100*/
};

struct _LIST_ENTRY {
	/*0000*/ _LIST_ENTRY * Flink;
	/*0008*/ _LIST_ENTRY * Blink;
	/*0010*/
};

struct _LOOKASIDE_LIST_EX {
	/*0000*/ _GENERAL_LOOKASIDE_POOL L;
	/*0060*/
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

struct _M128A {
	/*0000*/ ULONGLONG Low;
	/*0008*/ LONGLONG High;
	/*0010*/
};

struct _MAILSLOT_CREATE_PARAMETERS {
	/*0000*/ ULONG MailslotQuota;
	/*0004*/ ULONG MaximumMessageSize;
	/*0008*/ _LARGE_INTEGER ReadTimeout;
	/*0010*/ UCHAR TimeoutSpecified;
	/*0018*/
};

struct _MCA_EXCEPTION {
	/*0000*/ ULONG VersionNumber;
	/*0004*/ MCA_EXCEPTION_TYPE ExceptionType;
	/*0008*/ _LARGE_INTEGER TimeStamp;
	/*0010*/ ULONG ProcessorNumber;
	/*0014*/ ULONG Reserved1;
	union {
		struct {
			/*0018*/ UCHAR BankNumber;
			/*0019*/ UCHAR Reserved2[0x7];
			/*0020*/ _MCI_STATS Status;
			/*0028*/ _MCI_ADDR Address;
			/*0030*/ ULONGLONG Misc;
			/*0038*/
		} Mca;
		struct {
			/*0018*/ ULONGLONG Address;
			/*0020*/ ULONGLONG Type;
			/*0028*/
		} Mce;
		/*0038*/
	} u;
	/*0038*/ ULONG ExtCnt;
	/*003c*/ ULONG Reserved3;
	/*0040*/ ULONGLONG ExtReg[0x18];
	/*0100*/
};

union _MCI_ADDR {
	/*0000*/ ULONG Address;
	/*0004*/ ULONG Reserved;
	/*0000*/ ULONGLONG QuadPart;
	/*0008*/
};

union _MCI_STATS {
	struct {
		/*0000*/ USHORT McaErrorCode;
		/*0002*/ USHORT ModelErrorCode;
		/*0004*/ ULONG OtherInformation : 25; // 0x01ffffff;
		/*0004*/ ULONG ContextCorrupt : 01; // 0x02000000;
		/*0004*/ ULONG AddressValid : 01; // 0x04000000;
		/*0004*/ ULONG MiscValid : 01; // 0x08000000;
		/*0004*/ ULONG ErrorEnabled : 01; // 0x10000000;
		/*0004*/ ULONG UncorrectedError : 01; // 0x20000000;
		/*0004*/ ULONG StatusOverFlow : 01; // 0x40000000;
		/*0004*/ ULONG Valid : 01; // 0x80000000;
		/*0008*/
	} MciStatus;
	/*0000*/ ULONGLONG QuadPart;
	/*0008*/
};

struct _MDL {
	/*0000*/ _MDL * Next;
	/*0008*/ SHORT Size;
	/*000a*/ SHORT MdlFlags;
	/*000c*/ USHORT AllocationProcessorNumber;
	/*000e*/ USHORT Reserved;
	/*0010*/ _EPROCESS * Process;
	/*0018*/ void * MappedSystemVa;
	/*0020*/ void * StartVa;
	/*0028*/ ULONG ByteCount;
	/*002c*/ ULONG ByteOffset;
	/*0030*/
};

enum _MEMORY_CACHING_TYPE {
	MmNonCached = 0x0,
	MmCached = 0x1,
	MmWriteCombined = 0x2,
	MmHardwareCoherentCached = 0x3,
	MmNonCachedUnordered = 0x4,
	MmUSWCCached = 0x5,
	MmMaximumCacheType = 0x6,
	MmNotMapped = 0xffffffff
};

enum _MEMORY_CACHING_TYPE_ORIG {
	MmFrameBufferCached = 0x2
};

struct _MMSUPPORT_FLAGS {
	/*0000*/ UCHAR WorkingSetType : 03; // 0x07;
	/*0000*/ UCHAR Reserved0 : 03; // 0x38;
	/*0000*/ UCHAR MaximumWorkingSetHard : 01; // 0x40;
	/*0000*/ UCHAR MinimumWorkingSetHard : 01; // 0x80;
	/*0001*/ UCHAR SessionMaster : 01; // 0x01;
	/*0001*/ UCHAR TrimmerState : 02; // 0x06;
	/*0001*/ UCHAR Reserved : 01; // 0x08;
	/*0001*/ UCHAR PageStealers : 04; // 0xf0;
	/*0000*/ USHORT u1;
	/*0002*/ UCHAR MemoryPriority;
	/*0003*/ UCHAR WsleDeleted : 01; // 0x01;
	/*0003*/ UCHAR SvmEnabled : 01; // 0x02;
	/*0003*/ UCHAR ForceAge : 01; // 0x04;
	/*0003*/ UCHAR ForceTrim : 01; // 0x08;
	/*0003*/ UCHAR NewMaximum : 01; // 0x10;
	/*0003*/ UCHAR CommitReleaseState : 02; // 0x60;
	/*0003*/ UCHAR u2;
	/*0004*/
};

struct _MMSUPPORT_FULL {
	/*0000*/ _MMSUPPORT_INSTANCE Instance;
	/*00c8*/ _MMSUPPORT_SHARED Shared;
	/*0110*/
};

struct _MMSUPPORT_INSTANCE {
	/*0000*/ USHORT NextPageColor;
	/*0002*/ USHORT LastTrimStamp;
	/*0004*/ ULONG PageFaultCount;
	/*0008*/ ULONGLONG TrimmedPageCount;
	/*0010*/ _MMWSL_INSTANCE * VmWorkingSetList;
	/*0018*/ _LIST_ENTRY WorkingSetExpansionLinks;
	/*0028*/ ULONGLONG AgeDistribution[0x8];
	/*0068*/ _KGATE * ExitOutswapGate;
	/*0070*/ ULONGLONG MinimumWorkingSetSize;
	/*0078*/ ULONGLONG WorkingSetLeafSize;
	/*0080*/ ULONGLONG WorkingSetLeafPrivateSize;
	/*0088*/ ULONGLONG WorkingSetSize;
	/*0090*/ ULONGLONG WorkingSetPrivateSize;
	/*0098*/ ULONGLONG MaximumWorkingSetSize;
	/*00a0*/ ULONGLONG PeakWorkingSetSize;
	/*00a8*/ ULONG HardFaultCount;
	/*00ac*/ USHORT PartitionId;
	/*00ae*/ USHORT Pad0;
	union {
		/*00b0*/ void * InstancedWorkingSet;
		/*00b8*/
	} u1;
	/*00b8*/ ULONGLONG Reserved0;
	/*00c0*/ _MMSUPPORT_FLAGS Flags;
	/*00c8*/
};

struct _MMSUPPORT_SHARED {
	/*0000*/ LONG volatile WorkingSetLock;
	/*0004*/ LONG GoodCitizenWaiting;
	/*0008*/ ULONGLONG ReleasedCommitDebt;
	/*0010*/ ULONGLONG ResetPagesRepurposedCount;
	/*0018*/ void * WsSwapSupport;
	/*0020*/ void * CommitReleaseContext;
	/*0028*/ void * AccessLog;
	/*0030*/ ULONGLONG volatile ChargedWslePages;
	/*0038*/ ULONGLONG ActualWslePages;
	/*0040*/ ULONGLONG Reserved0;
	/*0048*/
};

struct _MMWSL_INSTANCE;

struct _MM_DRIVER_VERIFIER_DATA {
	/*0000*/ ULONG Level;
	/*0004*/ ULONG volatile RaiseIrqls;
	/*0008*/ ULONG volatile AcquireSpinLocks;
	/*000c*/ ULONG volatile SynchronizeExecutions;
	/*0010*/ ULONG volatile AllocationsAttempted;
	/*0014*/ ULONG volatile AllocationsSucceeded;
	/*0018*/ ULONG volatile AllocationsSucceededSpecialPool;
	/*001c*/ ULONG AllocationsWithNoTag;
	/*0020*/ ULONG TrimRequests;
	/*0024*/ ULONG Trims;
	/*0028*/ ULONG AllocationsFailed;
	/*002c*/ ULONG volatile AllocationsFailedDeliberately;
	/*0030*/ ULONG volatile Loads;
	/*0034*/ ULONG volatile Unloads;
	/*0038*/ ULONG UnTrackedPool;
	/*003c*/ ULONG UserTrims;
	/*0040*/ ULONG volatile CurrentPagedPoolAllocations;
	/*0044*/ ULONG volatile CurrentNonPagedPoolAllocations;
	/*0048*/ ULONG PeakPagedPoolAllocations;
	/*004c*/ ULONG PeakNonPagedPoolAllocations;
	/*0050*/ ULONGLONG volatile PagedBytes;
	/*0058*/ ULONGLONG volatile NonPagedBytes;
	/*0060*/ ULONGLONG PeakPagedBytes;
	/*0068*/ ULONGLONG PeakNonPagedBytes;
	/*0070*/ ULONG volatile BurstAllocationsFailedDeliberately;
	/*0074*/ ULONG SessionTrims;
	/*0078*/ ULONG volatile OptionChanges;
	/*007c*/ ULONG volatile VerifyMode;
	/*0080*/ _UNICODE_STRING PreviousBucketName;
	/*0090*/ ULONG volatile ExecutePoolTypes;
	/*0094*/ ULONG volatile ExecutePageProtections;
	/*0098*/ ULONG volatile ExecutePageMappings;
	/*009c*/ ULONG volatile ExecuteWriteSections;
	/*00a0*/ ULONG volatile SectionAlignmentFailures;
	/*00a4*/ ULONG volatile UnsupportedRelocs;
	/*00a8*/ ULONG volatile IATInExecutableSection;
	/*00b0*/
};

struct _MM_PAGE_ACCESS_INFO {
	/*0000*/ _MM_PAGE_ACCESS_INFO_FLAGS Flags;
	/*0000*/ ULONGLONG FileOffset;
	/*0000*/ void * VirtualAddress;
	/*0000*/ void * PointerProtoPte;
	/*0008*/
};

union _MM_PAGE_ACCESS_INFO_FLAGS {
	struct {
		/*0000*/ ULONG FilePointerIndex : 09; // 0x000001ff;
		/*0000*/ ULONG HardFault : 01; // 0x00000200;
		/*0000*/ ULONG Image : 01; // 0x00000400;
		/*0000*/ ULONG Spare0 : 01; // 0x00000800;
		/*0004*/
	} File;
	struct {
		/*0000*/ ULONG FilePointerIndex : 09; // 0x000001ff;
		/*0000*/ ULONG HardFault : 01; // 0x00000200;
		/*0000*/ ULONG Spare1 : 02; // 0x00000c00;
		/*0004*/
	} Private;
	/*0004*/
};

struct _MM_PAGE_ACCESS_INFO_HEADER {
	/*0000*/ _SINGLE_LIST_ENTRY Link;
	/*0008*/ _MM_PAGE_ACCESS_TYPE Type;
	/*000c*/ ULONG EmptySequenceNumber;
	/*000c*/ ULONG CurrentFileIndex;
	/*0010*/ ULONGLONG CreateTime;
	/*0018*/ ULONGLONG EmptyTime;
	/*0018*/ _MM_PAGE_ACCESS_INFO * TempEntry;
	/*0020*/ _MM_PAGE_ACCESS_INFO * PageEntry;
	/*0028*/ ULONGLONG * FileEntry;
	/*0030*/ ULONGLONG * FirstFileEntry;
	/*0038*/ _EPROCESS * Process;
	/*0040*/ ULONG SessionId;
	/*0020*/ ULONGLONG * PageFrameEntry;
	/*0028*/ ULONGLONG * LastPageFrameEntry;
	/*0048*/
};

enum _MM_PAGE_ACCESS_TYPE {
	MmPteAccessType = 0x0,
	MmCcReadAheadType = 0x1,
	MmPfnRepurposeType = 0x2,
	MmMaximumPageAccessType = 0x3
};

struct _MM_SESSION_SPACE;

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
	/*0080*/
};

enum _NT_PRODUCT_TYPE {
	NtProductWinNt = 0x1,
	NtProductLanManNt = 0x2,
	NtProductServer = 0x3
};

struct _NT_TIB {
	/*0000*/ _EXCEPTION_REGISTRATION_RECORD * ExceptionList;
	/*0008*/ void * StackBase;
	/*0010*/ void * StackLimit;
	/*0018*/ void * SubSystemTib;
	/*0020*/ void * FiberData;
	/*0020*/ ULONG Version;
	/*0028*/ void * ArbitraryUserPointer;
	/*0030*/ _NT_TIB * Self;
	/*0038*/
};

struct _NT_TIB32 {
	/*0000*/ ULONG ExceptionList;
	/*0004*/ ULONG StackBase;
	/*0008*/ ULONG StackLimit;
	/*000c*/ ULONG SubSystemTib;
	/*0010*/ ULONG FiberData;
	/*0010*/ ULONG Version;
	/*0014*/ ULONG ArbitraryUserPointer;
	/*0018*/ ULONG Self;
	/*001c*/
};

struct _NT_TIB64 {
	/*0000*/ ULONGLONG ExceptionList;
	/*0008*/ ULONGLONG StackBase;
	/*0010*/ ULONGLONG StackLimit;
	/*0018*/ ULONGLONG SubSystemTib;
	/*0020*/ ULONGLONG FiberData;
	/*0020*/ ULONG Version;
	/*0028*/ ULONGLONG ArbitraryUserPointer;
	/*0030*/ ULONGLONG Self;
	/*0038*/
};

struct _OBJECT_DIRECTORY {
	/*0000*/ _OBJECT_DIRECTORY_ENTRY * HashBuckets[0x25];
	/*0128*/ _EX_PUSH_LOCK Lock;
	/*0130*/ _DEVICE_MAP * DeviceMap;
	/*0138*/ _OBJECT_DIRECTORY * ShadowDirectory;
	/*0140*/ void * NamespaceEntry;
	/*0148*/ void * SessionObject;
	/*0150*/ ULONG Flags;
	/*0154*/ ULONG SessionId;
	/*0158*/
};

struct _OBJECT_DIRECTORY_ENTRY {
	/*0000*/ _OBJECT_DIRECTORY_ENTRY * ChainLink;
	/*0008*/ void * Object;
	/*0010*/ ULONG HashValue;
	/*0018*/
};

struct _OBJECT_DUMP_CONTROL {
	/*0000*/ void * Stream;
	/*0008*/ ULONG Detail;
	/*0010*/
};

struct _OBJECT_HANDLE_INFORMATION {
	/*0000*/ ULONG HandleAttributes;
	/*0004*/ ULONG GrantedAccess;
	/*0008*/
};

struct _OBJECT_NAMESPACE_LOOKUPTABLE {
	/*0000*/ _LIST_ENTRY HashBuckets[0x25];
	/*0250*/ _EX_PUSH_LOCK Lock;
	/*0258*/ ULONG NumberOfPrivateSpaces;
	/*0260*/
};

struct _OBJECT_NAME_INFORMATION {
	/*0000*/ _UNICODE_STRING Name;
	/*0010*/
};

struct _OBJECT_TYPE {
	/*0000*/ _LIST_ENTRY TypeList;
	/*0010*/ _UNICODE_STRING Name;
	/*0020*/ void * DefaultObject;
	/*0028*/ UCHAR Index;
	/*002c*/ ULONG TotalNumberOfObjects;
	/*0030*/ ULONG TotalNumberOfHandles;
	/*0034*/ ULONG HighWaterNumberOfObjects;
	/*0038*/ ULONG HighWaterNumberOfHandles;
	/*0040*/ _OBJECT_TYPE_INITIALIZER TypeInfo;
	/*00b8*/ _EX_PUSH_LOCK TypeLock;
	/*00c0*/ ULONG Key;
	/*00c8*/ _LIST_ENTRY CallbackList;
	/*00d8*/
};

struct _OBJECT_TYPE_INITIALIZER {
	/*0000*/ USHORT Length;
	/*0002*/ USHORT ObjectTypeFlags;
	/*0002*/ UCHAR CaseInsensitive : 01; // 0x01;
	/*0002*/ UCHAR UnnamedObjectsOnly : 01; // 0x02;
	/*0002*/ UCHAR UseDefaultObject : 01; // 0x04;
	/*0002*/ UCHAR SecurityRequired : 01; // 0x08;
	/*0002*/ UCHAR MaintainHandleCount : 01; // 0x10;
	/*0002*/ UCHAR MaintainTypeList : 01; // 0x20;
	/*0002*/ UCHAR SupportsObjectCallbacks : 01; // 0x40;
	/*0002*/ UCHAR CacheAligned : 01; // 0x80;
	/*0003*/ UCHAR UseExtendedParameters : 01; // 0x01;
	/*0003*/ UCHAR Reserved : 07; // 0xfe;
	/*0004*/ ULONG ObjectTypeCode;
	/*0008*/ ULONG InvalidAttributes;
	/*000c*/ _GENERIC_MAPPING GenericMapping;
	/*001c*/ ULONG ValidAccessMask;
	/*0020*/ ULONG RetainAccess;
	/*0024*/ _POOL_TYPE PoolType;
	/*0028*/ ULONG DefaultPagedPoolCharge;
	/*002c*/ ULONG DefaultNonPagedPoolCharge;
	/*0030*/ void (* DumpProcedure)( void * , _OBJECT_DUMP_CONTROL * );
	/*0038*/ LONG (* OpenProcedure)( _OB_OPEN_REASON , CHAR , _EPROCESS * , void * , ULONG * , ULONG );
	/*0040*/ void (* CloseProcedure)( _EPROCESS * , void * , ULONGLONG , ULONGLONG );
	/*0048*/ void (* DeleteProcedure)( void * );
	/*0050*/ LONG (* ParseProcedure)( void * , void * , _ACCESS_STATE * , CHAR , ULONG , _UNICODE_STRING * , _UNICODE_STRING * , void * , _SECURITY_QUALITY_OF_SERVICE * , void * * );
	/*0050*/ LONG (* ParseProcedureEx)( void * , void * , _ACCESS_STATE * , CHAR , ULONG , _UNICODE_STRING * , _UNICODE_STRING * , void * , _SECURITY_QUALITY_OF_SERVICE * , _OB_EXTENDED_PARSE_PARAMETERS * , void * * );
	/*0058*/ LONG (* SecurityProcedure)( void * , _SECURITY_OPERATION_CODE , ULONG * , void * , ULONG * , void * * , _POOL_TYPE , _GENERIC_MAPPING * , CHAR );
	/*0060*/ LONG (* QueryNameProcedure)( void * , UCHAR , _OBJECT_NAME_INFORMATION * , ULONG , ULONG * , CHAR );
	/*0068*/ UCHAR (* OkayToCloseProcedure)( _EPROCESS * , void * , void * , CHAR );
	/*0070*/ ULONG WaitObjectFlagMask;
	/*0074*/ USHORT WaitObjectFlagOffset;
	/*0076*/ USHORT WaitObjectPointerOffset;
	/*0078*/
};

struct _OBP_SILODRIVERSTATE {
	/*0000*/ _DEVICE_MAP * SystemDeviceMap;
	/*0008*/ _OBP_SYSTEM_DOS_DEVICE_STATE SystemDosDeviceState;
	/*0078*/ _EX_PUSH_LOCK DeviceMapLock;
	/*0080*/ _OBJECT_NAMESPACE_LOOKUPTABLE PrivateNamespaceLookupTable;
	/*02e0*/
};

struct _OBP_SYSTEM_DOS_DEVICE_STATE {
	/*0000*/ ULONG GlobalDeviceMap;
	/*0004*/ ULONG LocalDeviceCount[0x1a];
	/*006c*/
};

struct _OB_EXTENDED_PARSE_PARAMETERS {
	/*0000*/ USHORT Length;
	/*0004*/ ULONG RestrictedAccessMask;
	/*0008*/ _EJOB * Silo;
	/*0010*/
};

enum _OB_OPEN_REASON {
	ObCreateHandle = 0x0,
	ObOpenHandle = 0x1,
	ObDuplicateHandle = 0x2,
	ObInheritHandle = 0x3,
	ObMaxOpenReason = 0x4
};

struct _OWNER_ENTRY {
	/*0000*/ ULONGLONG OwnerThread;
	/*0008*/ ULONG IoPriorityBoosted : 01; // 0x00000001;
	/*0008*/ ULONG OwnerReferenced : 01; // 0x00000002;
	/*0008*/ ULONG IoQoSPriorityBoosted : 01; // 0x00000004;
	/*0008*/ ULONG OwnerCount : 29; // 0xfffffff8;
	/*0008*/ ULONG TableSize;
	/*0010*/
};

struct _PAGED_LOOKASIDE_LIST {
	/*0000*/ _GENERAL_LOOKASIDE L;
	/*0080*/
};

struct _PAGEFAULT_HISTORY;

struct _PEB {
	/*0000*/ UCHAR InheritedAddressSpace;
	/*0001*/ UCHAR ReadImageFileExecOptions;
	/*0002*/ UCHAR BeingDebugged;
	/*0003*/ UCHAR BitField;
	/*0003*/ UCHAR ImageUsesLargePages : 01; // 0x01;
	/*0003*/ UCHAR IsProtectedProcess : 01; // 0x02;
	/*0003*/ UCHAR IsImageDynamicallyRelocated : 01; // 0x04;
	/*0003*/ UCHAR SkipPatchingUser32Forwarders : 01; // 0x08;
	/*0003*/ UCHAR IsPackagedProcess : 01; // 0x10;
	/*0003*/ UCHAR IsAppContainer : 01; // 0x20;
	/*0003*/ UCHAR IsProtectedProcessLight : 01; // 0x40;
	/*0003*/ UCHAR IsLongPathAwareProcess : 01; // 0x80;
	/*0004*/ UCHAR Padding0[0x4];
	/*0008*/ void * Mutant;
	/*0010*/ void * ImageBaseAddress;
	/*0018*/ _PEB_LDR_DATA * Ldr;
	/*0020*/ _RTL_USER_PROCESS_PARAMETERS * ProcessParameters;
	/*0028*/ void * SubSystemData;
	/*0030*/ void * ProcessHeap;
	/*0038*/ _RTL_CRITICAL_SECTION * FastPebLock;
	/*0040*/ _SLIST_HEADER * volatile AtlThunkSListPtr;
	/*0048*/ void * IFEOKey;
	/*0050*/ ULONG CrossProcessFlags;
	/*0050*/ ULONG ProcessInJob : 01; // 0x00000001;
	/*0050*/ ULONG ProcessInitializing : 01; // 0x00000002;
	/*0050*/ ULONG ProcessUsingVEH : 01; // 0x00000004;
	/*0050*/ ULONG ProcessUsingVCH : 01; // 0x00000008;
	/*0050*/ ULONG ProcessUsingFTH : 01; // 0x00000010;
	/*0050*/ ULONG ProcessPreviouslyThrottled : 01; // 0x00000020;
	/*0050*/ ULONG ProcessCurrentlyThrottled : 01; // 0x00000040;
	/*0050*/ ULONG ReservedBits0 : 25; // 0xffffff80;
	/*0054*/ UCHAR Padding1[0x4];
	/*0058*/ void * KernelCallbackTable;
	/*0058*/ void * UserSharedInfoPtr;
	/*0060*/ ULONG SystemReserved;
	/*0064*/ ULONG AtlThunkSListPtr32;
	/*0068*/ void * ApiSetMap;
	/*0070*/ ULONG TlsExpansionCounter;
	/*0074*/ UCHAR Padding2[0x4];
	/*0078*/ void * TlsBitmap;
	/*0080*/ ULONG TlsBitmapBits[0x2];
	/*0088*/ void * ReadOnlySharedMemoryBase;
	/*0090*/ void * SharedData;
	/*0098*/ void * * ReadOnlyStaticServerData;
	/*00a0*/ void * AnsiCodePageData;
	/*00a8*/ void * OemCodePageData;
	/*00b0*/ void * UnicodeCaseTableData;
	/*00b8*/ ULONG NumberOfProcessors;
	/*00bc*/ ULONG NtGlobalFlag;
	/*00c0*/ _LARGE_INTEGER CriticalSectionTimeout;
	/*00c8*/ ULONGLONG HeapSegmentReserve;
	/*00d0*/ ULONGLONG HeapSegmentCommit;
	/*00d8*/ ULONGLONG HeapDeCommitTotalFreeThreshold;
	/*00e0*/ ULONGLONG HeapDeCommitFreeBlockThreshold;
	/*00e8*/ ULONG NumberOfHeaps;
	/*00ec*/ ULONG MaximumNumberOfHeaps;
	/*00f0*/ void * * ProcessHeaps;
	/*00f8*/ void * GdiSharedHandleTable;
	/*0100*/ void * ProcessStarterHelper;
	/*0108*/ ULONG GdiDCAttributeList;
	/*010c*/ UCHAR Padding3[0x4];
	/*0110*/ _RTL_CRITICAL_SECTION * LoaderLock;
	/*0118*/ ULONG OSMajorVersion;
	/*011c*/ ULONG OSMinorVersion;
	/*0120*/ USHORT OSBuildNumber;
	/*0122*/ USHORT OSCSDVersion;
	/*0124*/ ULONG OSPlatformId;
	/*0128*/ ULONG ImageSubsystem;
	/*012c*/ ULONG ImageSubsystemMajorVersion;
	/*0130*/ ULONG ImageSubsystemMinorVersion;
	/*0134*/ UCHAR Padding4[0x4];
	/*0138*/ ULONGLONG ActiveProcessAffinityMask;
	/*0140*/ ULONG GdiHandleBuffer[0x3c];
	/*0230*/ void (* PostProcessInitRoutine)();
	/*0238*/ void * TlsExpansionBitmap;
	/*0240*/ ULONG TlsExpansionBitmapBits[0x20];
	/*02c0*/ ULONG SessionId;
	/*02c4*/ UCHAR Padding5[0x4];
	/*02c8*/ _ULARGE_INTEGER AppCompatFlags;
	/*02d0*/ _ULARGE_INTEGER AppCompatFlagsUser;
	/*02d8*/ void * pShimData;
	/*02e0*/ void * AppCompatInfo;
	/*02e8*/ _UNICODE_STRING CSDVersion;
	/*02f8*/ _ACTIVATION_CONTEXT_DATA const * ActivationContextData;
	/*0300*/ _ASSEMBLY_STORAGE_MAP * ProcessAssemblyStorageMap;
	/*0308*/ _ACTIVATION_CONTEXT_DATA const * SystemDefaultActivationContextData;
	/*0310*/ _ASSEMBLY_STORAGE_MAP * SystemAssemblyStorageMap;
	/*0318*/ ULONGLONG MinimumStackCommit;
	/*0320*/ _FLS_CALLBACK_INFO * FlsCallback;
	/*0328*/ _LIST_ENTRY FlsListHead;
	/*0338*/ void * FlsBitmap;
	/*0340*/ ULONG FlsBitmapBits[0x4];
	/*0350*/ ULONG FlsHighIndex;
	/*0358*/ void * WerRegistrationData;
	/*0360*/ void * WerShipAssertPtr;
	/*0368*/ void * pUnused;
	/*0370*/ void * pImageHeaderHash;
	/*0378*/ ULONG TracingFlags;
	/*0378*/ ULONG HeapTracingEnabled : 01; // 0x00000001;
	/*0378*/ ULONG CritSecTracingEnabled : 01; // 0x00000002;
	/*0378*/ ULONG LibLoaderTracingEnabled : 01; // 0x00000004;
	/*0378*/ ULONG SpareTracingBits : 29; // 0xfffffff8;
	/*037c*/ UCHAR Padding6[0x4];
	/*0380*/ ULONGLONG CsrServerReadOnlySharedMemoryBase;
	/*0388*/ ULONGLONG TppWorkerpListLock;
	/*0390*/ _LIST_ENTRY TppWorkerpList;
	/*03a0*/ void * WaitOnAddressHashTable[0x80];
	/*07a0*/ void * TelemetryCoverageHeader;
	/*07a8*/ ULONG CloudFileFlags;
	/*07b0*/
};

struct _PEB32 {
	/*0000*/ UCHAR InheritedAddressSpace;
	/*0001*/ UCHAR ReadImageFileExecOptions;
	/*0002*/ UCHAR BeingDebugged;
	/*0003*/ UCHAR BitField;
	/*0003*/ UCHAR ImageUsesLargePages : 01; // 0x01;
	/*0003*/ UCHAR IsProtectedProcess : 01; // 0x02;
	/*0003*/ UCHAR IsImageDynamicallyRelocated : 01; // 0x04;
	/*0003*/ UCHAR SkipPatchingUser32Forwarders : 01; // 0x08;
	/*0003*/ UCHAR IsPackagedProcess : 01; // 0x10;
	/*0003*/ UCHAR IsAppContainer : 01; // 0x20;
	/*0003*/ UCHAR IsProtectedProcessLight : 01; // 0x40;
	/*0003*/ UCHAR IsLongPathAwareProcess : 01; // 0x80;
	/*0004*/ ULONG Mutant;
	/*0008*/ ULONG ImageBaseAddress;
	/*000c*/ ULONG Ldr;
	/*0010*/ ULONG ProcessParameters;
	/*0014*/ ULONG SubSystemData;
	/*0018*/ ULONG ProcessHeap;
	/*001c*/ ULONG FastPebLock;
	/*0020*/ ULONG AtlThunkSListPtr;
	/*0024*/ ULONG IFEOKey;
	/*0028*/ ULONG CrossProcessFlags;
	/*0028*/ ULONG ProcessInJob : 01; // 0x00000001;
	/*0028*/ ULONG ProcessInitializing : 01; // 0x00000002;
	/*0028*/ ULONG ProcessUsingVEH : 01; // 0x00000004;
	/*0028*/ ULONG ProcessUsingVCH : 01; // 0x00000008;
	/*0028*/ ULONG ProcessUsingFTH : 01; // 0x00000010;
	/*0028*/ ULONG ProcessPreviouslyThrottled : 01; // 0x00000020;
	/*0028*/ ULONG ProcessCurrentlyThrottled : 01; // 0x00000040;
	/*0028*/ ULONG ReservedBits0 : 25; // 0xffffff80;
	/*002c*/ ULONG KernelCallbackTable;
	/*002c*/ ULONG UserSharedInfoPtr;
	/*0030*/ ULONG SystemReserved;
	/*0034*/ ULONG AtlThunkSListPtr32;
	/*0038*/ ULONG ApiSetMap;
	/*003c*/ ULONG TlsExpansionCounter;
	/*0040*/ ULONG TlsBitmap;
	/*0044*/ ULONG TlsBitmapBits[0x2];
	/*004c*/ ULONG ReadOnlySharedMemoryBase;
	/*0050*/ ULONG SharedData;
	/*0054*/ ULONG ReadOnlyStaticServerData;
	/*0058*/ ULONG AnsiCodePageData;
	/*005c*/ ULONG OemCodePageData;
	/*0060*/ ULONG UnicodeCaseTableData;
	/*0064*/ ULONG NumberOfProcessors;
	/*0068*/ ULONG NtGlobalFlag;
	/*0070*/ _LARGE_INTEGER CriticalSectionTimeout;
	/*0078*/ ULONG HeapSegmentReserve;
	/*007c*/ ULONG HeapSegmentCommit;
	/*0080*/ ULONG HeapDeCommitTotalFreeThreshold;
	/*0084*/ ULONG HeapDeCommitFreeBlockThreshold;
	/*0088*/ ULONG NumberOfHeaps;
	/*008c*/ ULONG MaximumNumberOfHeaps;
	/*0090*/ ULONG ProcessHeaps;
	/*0094*/ ULONG GdiSharedHandleTable;
	/*0098*/ ULONG ProcessStarterHelper;
	/*009c*/ ULONG GdiDCAttributeList;
	/*00a0*/ ULONG LoaderLock;
	/*00a4*/ ULONG OSMajorVersion;
	/*00a8*/ ULONG OSMinorVersion;
	/*00ac*/ USHORT OSBuildNumber;
	/*00ae*/ USHORT OSCSDVersion;
	/*00b0*/ ULONG OSPlatformId;
	/*00b4*/ ULONG ImageSubsystem;
	/*00b8*/ ULONG ImageSubsystemMajorVersion;
	/*00bc*/ ULONG ImageSubsystemMinorVersion;
	/*00c0*/ ULONG ActiveProcessAffinityMask;
	/*00c4*/ ULONG GdiHandleBuffer[0x22];
	/*014c*/ ULONG PostProcessInitRoutine;
	/*0150*/ ULONG TlsExpansionBitmap;
	/*0154*/ ULONG TlsExpansionBitmapBits[0x20];
	/*01d4*/ ULONG SessionId;
	/*01d8*/ _ULARGE_INTEGER AppCompatFlags;
	/*01e0*/ _ULARGE_INTEGER AppCompatFlagsUser;
	/*01e8*/ ULONG pShimData;
	/*01ec*/ ULONG AppCompatInfo;
	/*01f0*/ _STRING32 CSDVersion;
	/*01f8*/ ULONG ActivationContextData;
	/*01fc*/ ULONG ProcessAssemblyStorageMap;
	/*0200*/ ULONG SystemDefaultActivationContextData;
	/*0204*/ ULONG SystemAssemblyStorageMap;
	/*0208*/ ULONG MinimumStackCommit;
	/*020c*/ ULONG FlsCallback;
	/*0210*/ LIST_ENTRY32 FlsListHead;
	/*0218*/ ULONG FlsBitmap;
	/*021c*/ ULONG FlsBitmapBits[0x4];
	/*022c*/ ULONG FlsHighIndex;
	/*0230*/ ULONG WerRegistrationData;
	/*0234*/ ULONG WerShipAssertPtr;
	/*0238*/ ULONG pUnused;
	/*023c*/ ULONG pImageHeaderHash;
	/*0240*/ ULONG TracingFlags;
	/*0240*/ ULONG HeapTracingEnabled : 01; // 0x00000001;
	/*0240*/ ULONG CritSecTracingEnabled : 01; // 0x00000002;
	/*0240*/ ULONG LibLoaderTracingEnabled : 01; // 0x00000004;
	/*0240*/ ULONG SpareTracingBits : 29; // 0xfffffff8;
	/*0248*/ ULONGLONG CsrServerReadOnlySharedMemoryBase;
	/*0250*/ ULONG TppWorkerpListLock;
	/*0254*/ LIST_ENTRY32 TppWorkerpList;
	/*025c*/ ULONG WaitOnAddressHashTable[0x80];
	/*045c*/ ULONG TelemetryCoverageHeader;
	/*0460*/ ULONG CloudFileFlags;
	/*0468*/
};

struct _PEBS_DS_SAVE_AREA {
	/*0000*/ ULONGLONG BtsBufferBase;
	/*0008*/ ULONGLONG BtsIndex;
	/*0010*/ ULONGLONG BtsAbsoluteMaximum;
	/*0018*/ ULONGLONG BtsInterruptThreshold;
	/*0020*/ ULONGLONG PebsBufferBase;
	/*0028*/ ULONGLONG PebsIndex;
	/*0030*/ ULONGLONG PebsAbsoluteMaximum;
	/*0038*/ ULONGLONG PebsInterruptThreshold;
	/*0040*/ ULONGLONG PebsCounterReset0;
	/*0048*/ ULONGLONG PebsCounterReset1;
	/*0050*/ ULONGLONG PebsCounterReset2;
	/*0058*/ ULONGLONG PebsCounterReset3;
	/*0060*/
};

struct _PEB_LDR_DATA {
	/*0000*/ ULONG Length;
	/*0004*/ UCHAR Initialized;
	/*0008*/ void * SsHandle;
	/*0010*/ _LIST_ENTRY InLoadOrderModuleList;
	/*0020*/ _LIST_ENTRY InMemoryOrderModuleList;
	/*0030*/ _LIST_ENTRY InInitializationOrderModuleList;
	/*0040*/ void * EntryInProgress;
	/*0048*/ UCHAR ShutdownInProgress;
	/*0050*/ void * ShutdownThreadId;
	/*0058*/
};

struct _PERFINFO_GROUPMASK {
	/*0000*/ ULONG Masks[0x8];
	/*0020*/
};

enum _PERFINFO_KERNELMEMORY_USAGE_TYPE {
	PerfInfoMemUsagePfnMetadata = 0x0,
	PerfInfoMemUsageMax = 0x1
};

enum _PERFINFO_MM_STAT {
	PerfInfoMMStatNotUsed = 0x0,
	PerfInfoMMStatAggregatePageCombine = 0x1,
	PerfInfoMMStatIterationPageCombine = 0x2,
	PerfInfoMMStatMax = 0x3
};

struct _PERFINFO_PPM_STATE_SELECTION {
	/*0000*/ ULONG SelectedState;
	/*0004*/ ULONG VetoedStates;
	/*0008*/ ULONG VetoReason[0x1];
	/*000c*/
};

struct _PERF_CONTROL_STATE_SELECTION {
	/*0000*/ ULONGLONG SelectedState;
	/*0008*/ ULONG SelectedPercent;
	/*000c*/ ULONG SelectedFrequency;
	/*0010*/ ULONG MinPercent;
	/*0014*/ ULONG MaxPercent;
	/*0018*/ ULONG TolerancePercent;
	/*001c*/ ULONG EppPercent;
	/*0020*/ ULONG AutonomousActivityWindow;
	/*0024*/ UCHAR Autonomous;
	/*0025*/ UCHAR InheritFromDomain;
	/*0028*/
};

enum _PF_FILE_ACCESS_TYPE {
	PfFileAccessTypeRead = 0x0,
	PfFileAccessTypeWrite = 0x1,
	PfFileAccessTypeMax = 0x2
};

struct _PF_KERNEL_GLOBALS {
	/*0000*/ ULONGLONG AccessBufferAgeThreshold;
	/*0008*/ _EX_RUNDOWN_REF AccessBufferRef;
	/*0010*/ _KEVENT AccessBufferExistsEvent;
	/*0028*/ ULONG AccessBufferMax;
	/*0040*/ _SLIST_HEADER AccessBufferList;
	/*0050*/ LONG StreamSequenceNumber;
	/*0054*/ ULONG Flags;
	/*0058*/ LONG ScenarioPrefetchCount;
	/*0060*/
};

enum _POOL_TYPE {
	NonPagedPool = 0x0,
	NonPagedPoolExecute = 0x0,
	PagedPool = 0x1,
	NonPagedPoolMustSucceed = 0x2,
	DontUseThisType = 0x3,
	NonPagedPoolCacheAligned = 0x4,
	PagedPoolCacheAligned = 0x5,
	NonPagedPoolCacheAlignedMustS = 0x6,
	MaxPoolType = 0x7,
	NonPagedPoolBase = 0x0,
	NonPagedPoolBaseMustSucceed = 0x2,
	NonPagedPoolBaseCacheAligned = 0x4,
	NonPagedPoolBaseCacheAlignedMustS = 0x6,
	NonPagedPoolSession = 0x20,
	PagedPoolSession = 0x21,
	NonPagedPoolMustSucceedSession = 0x22,
	DontUseThisTypeSession = 0x23,
	NonPagedPoolCacheAlignedSession = 0x24,
	PagedPoolCacheAlignedSession = 0x25,
	NonPagedPoolCacheAlignedMustSSession = 0x26,
	NonPagedPoolNx = 0x200,
	NonPagedPoolNxCacheAligned = 0x204,
	NonPagedPoolSessionNx = 0x220
};

struct _POP_FX_DEVICE;

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

struct _PO_DIAG_STACK_RECORD {
	/*0000*/ ULONG StackDepth;
	/*0008*/ void * Stack[0x1];
	/*0010*/
};

struct _PO_PROCESS_ENERGY_CONTEXT;

struct _PPM_CONCURRENCY_ACCOUNTING {
	/*0000*/ ULONGLONG Lock;
	/*0008*/ ULONG Processors;
	/*000c*/ ULONG ActiveProcessors;
	/*0010*/ ULONGLONG LastUpdateTime;
	/*0018*/ ULONGLONG TotalTime;
	/*0020*/ ULONGLONG AccumulatedTime[0x1];
	/*0028*/
};

struct _PPM_COORDINATED_SELECTION {
	/*0000*/ ULONG MaximumStates;
	/*0004*/ ULONG SelectedStates;
	/*0008*/ ULONG DefaultSelection;
	/*0010*/ ULONG * Selection;
	/*0018*/
};

struct _PPM_FFH_THROTTLE_STATE_INFO {
	/*0000*/ UCHAR EnableLogging;
	/*0004*/ ULONG MismatchCount;
	/*0008*/ UCHAR Initialized;
	/*0010*/ ULONGLONG LastValue;
	/*0018*/ _LARGE_INTEGER LastLogTickCount;
	/*0020*/
};

struct _PPM_IDLE_STATE {
	/*0000*/ _KAFFINITY_EX DomainMembers;
	/*00a8*/ _UNICODE_STRING Name;
	/*00b8*/ ULONG Latency;
	/*00bc*/ ULONG BreakEvenDuration;
	/*00c0*/ ULONG Power;
	/*00c4*/ ULONG StateFlags;
	/*00c8*/ _PPM_VETO_ACCOUNTING VetoAccounting;
	/*00f0*/ UCHAR StateType;
	/*00f1*/ UCHAR InterruptsEnabled;
	/*00f2*/ UCHAR Interruptible;
	/*00f3*/ UCHAR ContextRetained;
	/*00f4*/ UCHAR CacheCoherent;
	/*00f5*/ UCHAR WakesSpuriously;
	/*00f6*/ UCHAR PlatformOnly;
	/*00f7*/ UCHAR NoCState;
	/*00f8*/
};

struct _PPM_IDLE_STATES {
	/*0000*/ UCHAR InterfaceVersion;
	/*0001*/ UCHAR IdleOverride;
	/*0002*/ UCHAR EstimateIdleDuration;
	/*0003*/ UCHAR ExitLatencyTraceEnabled;
	/*0004*/ UCHAR NonInterruptibleTransition;
	/*0005*/ UCHAR UnaccountedTransition;
	/*0006*/ UCHAR IdleDurationLimited;
	/*0007*/ UCHAR IdleCheckLimited;
	/*0008*/ ULONG ExitLatencyCountdown;
	/*000c*/ ULONG TargetState;
	/*0010*/ ULONG ActualState;
	/*0014*/ ULONG OldState;
	/*0018*/ ULONG OverrideIndex;
	/*001c*/ ULONG ProcessorIdleCount;
	/*0020*/ ULONG Type;
	/*0028*/ ULONGLONG LevelId;
	/*0030*/ USHORT ReasonFlags;
	/*0038*/ ULONGLONG volatile InitiateWakeStamp;
	/*0040*/ LONG PreviousStatus;
	/*0044*/ ULONG PreviousCancelReason;
	/*0048*/ _KAFFINITY_EX PrimaryProcessorMask;
	/*00f0*/ _KAFFINITY_EX SecondaryProcessorMask;
	/*0198*/ void (* IdlePrepare)( _PROCESSOR_IDLE_PREPARE_INFO * );
	/*01a0*/ LONG (* IdlePreExecute)( void * , ULONG , ULONG , ULONG , ULONG * );
	/*01a8*/ LONG (* IdleExecute)( void * , ULONGLONG , ULONG , ULONG , ULONG , ULONG * );
	/*01b0*/ ULONG (* IdlePreselect)( void * , _PROCESSOR_IDLE_CONSTRAINTS * );
	/*01b8*/ ULONG (* IdleTest)( void * , ULONG , ULONG );
	/*01c0*/ ULONG (* IdleAvailabilityCheck)( void * , ULONG );
	/*01c8*/ void (* IdleComplete)( void * , ULONG , ULONG , ULONG , ULONG * );
	/*01d0*/ void (* IdleCancel)( void * , ULONG );
	/*01d8*/ UCHAR (* IdleIsHalted)( void * );
	/*01e0*/ UCHAR (* IdleInitiateWake)( void * );
	/*01e8*/ _PROCESSOR_IDLE_PREPARE_INFO PrepareInfo;
	/*0240*/ _KAFFINITY_EX DeepIdleSnapshot;
	/*02e8*/ _PERFINFO_PPM_STATE_SELECTION * Tracing;
	/*02f0*/ _PERFINFO_PPM_STATE_SELECTION * CoordinatedTracing;
	/*02f8*/ _PPM_SELECTION_MENU ProcessorMenu;
	/*0308*/ _PPM_SELECTION_MENU CoordinatedMenu;
	/*0318*/ _PPM_COORDINATED_SELECTION CoordinatedSelection;
	/*0330*/ _PPM_IDLE_STATE State[0x1];
	/*0428*/
};

union _PPM_IDLE_SYNCHRONIZATION_STATE {
	/*0000*/ LONG AsLong;
	/*0000*/ LONG RefCount : 24; // 0x00ffffff;
	/*0000*/ ULONG State : 08; // 0xff000000;
	/*0004*/
};

struct _PPM_SELECTION_DEPENDENCY {
	/*0000*/ ULONG Processor;
	/*0008*/ _PPM_SELECTION_MENU Menu;
	/*0018*/
};

struct _PPM_SELECTION_MENU {
	/*0000*/ ULONG Count;
	/*0008*/ _PPM_SELECTION_MENU_ENTRY * Entries;
	/*0010*/
};

struct _PPM_SELECTION_MENU_ENTRY {
	/*0000*/ UCHAR StrictDependency;
	/*0001*/ UCHAR InitiatingState;
	/*0002*/ UCHAR DependentState;
	/*0004*/ ULONG StateIndex;
	/*0008*/ ULONG Dependencies;
	/*0010*/ _PPM_SELECTION_DEPENDENCY * DependencyList;
	/*0018*/
};

struct _PPM_SELECTION_STATISTICS {
	/*0000*/ ULONGLONG SelectedCount;
	/*0008*/ ULONGLONG VetoCount;
	/*0010*/ ULONGLONG PreVetoCount;
	/*0018*/ ULONGLONG WrongProcessorCount;
	/*0020*/ ULONGLONG LatencyCount;
	/*0028*/ ULONGLONG IdleDurationCount;
	/*0030*/ ULONGLONG DeviceDependencyCount;
	/*0038*/ ULONGLONG ProcessorDependencyCount;
	/*0040*/ ULONGLONG PlatformOnlyCount;
	/*0048*/ ULONGLONG InterruptibleCount;
	/*0050*/ ULONGLONG LegacyOverrideCount;
	/*0058*/ ULONGLONG CstateCheckCount;
	/*0060*/ ULONGLONG NoCStateCount;
	/*0068*/ ULONGLONG CoordinatedDependencyCount;
	/*0070*/ ULONGLONG NotClockOwnerCount;
	/*0078*/ _PPM_VETO_ACCOUNTING * PreVetoAccounting;
	/*0080*/
};

struct _PPM_VETO_ACCOUNTING {
	/*0000*/ LONG volatile VetoPresent;
	/*0008*/ _LIST_ENTRY VetoListHead;
	/*0018*/ UCHAR CsAccountingBlocks;
	/*0019*/ UCHAR BlocksDrips;
	/*001c*/ ULONG PreallocatedVetoCount;
	/*0020*/ _PPM_VETO_ENTRY * PreallocatedVetoList;
	/*0028*/
};

struct _PPM_VETO_ENTRY {
	/*0000*/ _LIST_ENTRY Link;
	/*0010*/ ULONG VetoReason;
	/*0014*/ ULONG ReferenceCount;
	/*0018*/ ULONGLONG HitCount;
	/*0020*/ ULONGLONG LastActivationTime;
	/*0028*/ ULONGLONG TotalActiveTime;
	/*0030*/ ULONGLONG CsActivationTime;
	/*0038*/ ULONGLONG CsActiveTime;
	/*0040*/
};

struct _PP_LOOKASIDE_LIST {
	/*0000*/ _GENERAL_LOOKASIDE * P;
	/*0008*/ _GENERAL_LOOKASIDE * L;
	/*0010*/
};

enum _PP_NPAGED_LOOKASIDE_NUMBER {
	LookasideSmallIrpList = 0x0,
	LookasideMediumIrpList = 0x1,
	LookasideLargeIrpList = 0x2,
	LookasideMdlList = 0x3,
	LookasideCreateInfoList = 0x4,
	LookasideNameBufferList = 0x5,
	LookasideTwilightList = 0x6,
	LookasideCompletionList = 0x7,
	LookasideScratchBufferList = 0x8,
	LookasideMaximumList = 0x9
};

struct _PRIVILEGE_SET {
	/*0000*/ ULONG PrivilegeCount;
	/*0004*/ ULONG Control;
	/*0008*/ _LUID_AND_ATTRIBUTES Privilege[0x1];
	/*0014*/
};

enum _PROCESSOR_CACHE_TYPE {
	CacheUnified = 0x0,
	CacheInstruction = 0x1,
	CacheData = 0x2,
	CacheTrace = 0x3
};

struct _PROCESSOR_IDLE_CONSTRAINTS {
	/*0000*/ ULONGLONG TotalTime;
	/*0008*/ ULONGLONG IdleTime;
	/*0010*/ ULONGLONG ExpectedIdleDuration;
	/*0018*/ ULONGLONG MaxIdleDuration;
	/*0020*/ ULONG OverrideState;
	/*0024*/ ULONG TimeCheck;
	/*0028*/ UCHAR PromotePercent;
	/*0029*/ UCHAR DemotePercent;
	/*002a*/ UCHAR Parked;
	/*002b*/ UCHAR Interruptible;
	/*002c*/ UCHAR PlatformIdle;
	/*002d*/ UCHAR ExpectedWakeReason;
	/*0030*/
};

struct _PROCESSOR_IDLE_DEPENDENCY {
	/*0000*/ ULONG ProcessorIndex;
	/*0004*/ UCHAR ExpectedState;
	/*0005*/ UCHAR AllowDeeperStates;
	/*0006*/ UCHAR LooseDependency;
	/*0008*/
};

struct _PROCESSOR_IDLE_PREPARE_INFO {
	/*0000*/ void * Context;
	/*0008*/ _PROCESSOR_IDLE_CONSTRAINTS Constraints;
	/*0038*/ ULONG DependencyCount;
	/*003c*/ ULONG DependencyUsed;
	/*0040*/ _PROCESSOR_IDLE_DEPENDENCY * DependencyArray;
	/*0048*/ ULONG PlatformIdleStateIndex;
	/*004c*/ ULONG ProcessorIdleStateIndex;
	/*0050*/ ULONG IdleSelectFailureMask;
	/*0058*/
};

struct _PROCESSOR_NUMBER {
	/*0000*/ USHORT Group;
	/*0002*/ UCHAR Number;
	/*0003*/ UCHAR Reserved;
	/*0004*/
};

struct _PROCESSOR_POWER_STATE {
	/*0000*/ _PPM_IDLE_STATES * IdleStates;
	/*0008*/ _PROC_IDLE_ACCOUNTING * IdleAccounting;
	/*0010*/ ULONGLONG IdleTimeLast;
	/*0018*/ ULONGLONG IdleTimeTotal;
	/*0020*/ ULONGLONG volatile IdleTimeEntry;
	/*0028*/ ULONGLONG IdleTimeExpiration;
	/*0030*/ UCHAR NonInterruptibleTransition;
	/*0031*/ UCHAR PepWokenTransition;
	/*0032*/ UCHAR EfficiencyClass;
	/*0033*/ UCHAR SchedulingClass;
	/*0034*/ ULONG TargetIdleState;
	/*0038*/ _PROC_IDLE_POLICY IdlePolicy;
	/*0040*/ _PPM_IDLE_SYNCHRONIZATION_STATE volatile Synchronization;
	/*0048*/ _PROC_FEEDBACK PerfFeedback;
	/*00d8*/ _PROC_HYPERVISOR_STATE Hypervisor;
	/*00dc*/ ULONG LastSysTime;
	/*00e0*/ ULONGLONG WmiDispatchPtr;
	/*00e8*/ LONG WmiInterfaceEnabled;
	/*00f0*/ _PPM_FFH_THROTTLE_STATE_INFO FFHThrottleStateInfo;
	/*0110*/ _KDPC PerfActionDpc;
	/*0150*/ LONG volatile PerfActionMask;
	/*0158*/ _PROC_IDLE_SNAP HvIdleCheck;
	/*0168*/ _PROC_PERF_CHECK * PerfCheck;
	/*0170*/ _PROC_PERF_DOMAIN * Domain;
	/*0178*/ _PROC_PERF_CONSTRAINT * PerfConstraint;
	/*0180*/ _PPM_CONCURRENCY_ACCOUNTING * Concurrency;
	/*0188*/ _PPM_CONCURRENCY_ACCOUNTING * ClassConcurrency;
	/*0190*/ _PROC_PERF_LOAD * Load;
	/*0198*/ _PROC_PERF_HISTORY * PerfHistory;
	/*01a0*/ UCHAR GuaranteedPerformancePercent;
	/*01a1*/ UCHAR HvTargetState;
	/*01a2*/ UCHAR Parked;
	/*01a3*/ UCHAR LongPriorQosPeriod;
	/*01a4*/ ULONG LatestPerformancePercent;
	/*01a8*/ ULONG AveragePerformancePercent;
	/*01ac*/ ULONG LatestAffinitizedPercent;
	/*01b0*/ ULONG RelativePerformance;
	/*01b4*/ ULONG Utility;
	/*01b8*/ ULONG AffinitizedUtility;
	/*01c0*/ ULONGLONG SnapTimeLast;
	/*01c0*/ ULONGLONG EnergyConsumed;
	/*01c8*/ ULONGLONG ActiveTime;
	/*01d0*/ ULONGLONG TotalTime;
	/*01d8*/ _POP_FX_DEVICE * FxDevice;
	/*01e0*/ ULONGLONG LastQosTranstionTsc;
	/*01e8*/ ULONGLONG QosTransitionHysteresis;
	/*01f0*/ _KHETERO_CPU_QOS RequestedQosClass;
	/*01f4*/ _KHETERO_CPU_QOS ResolvedQosClass;
	/*01f8*/ ULONG QosEquivalencyMask;
	/*0200*/
};

struct _PROCESSOR_PROFILE_CONTROL_AREA {
	/*0000*/ _PEBS_DS_SAVE_AREA PebsDsSaveArea;
	/*0060*/
};

struct _PROCESS_DISK_COUNTERS {
	/*0000*/ ULONGLONG BytesRead;
	/*0008*/ ULONGLONG BytesWritten;
	/*0010*/ ULONGLONG ReadOperationCount;
	/*0018*/ ULONGLONG WriteOperationCount;
	/*0020*/ ULONGLONG FlushOperationCount;
	/*0028*/
};

struct _PROCESS_ENERGY_VALUES {
	/*0000*/ ULONGLONG Cycles[0x4][0x2];
	/*0040*/ ULONGLONG DiskEnergy;
	/*0048*/ ULONGLONG NetworkTailEnergy;
	/*0050*/ ULONGLONG MBBTailEnergy;
	/*0058*/ ULONGLONG NetworkTxRxBytes;
	/*0060*/ ULONGLONG MBBTxRxBytes;
	/*0068*/ _ENERGY_STATE_DURATION Durations[0x3];
	/*0068*/ _ENERGY_STATE_DURATION ForegroundDuration;
	/*0070*/ _ENERGY_STATE_DURATION DesktopVisibleDuration;
	/*0078*/ _ENERGY_STATE_DURATION PSMForegroundDuration;
	/*0080*/ ULONG CompositionRendered;
	/*0084*/ ULONG CompositionDirtyGenerated;
	/*0088*/ ULONG CompositionDirtyPropagated;
	/*008c*/ ULONG Reserved1;
	/*0090*/ ULONGLONG AttributedCycles[0x4][0x2];
	/*00d0*/ ULONGLONG WorkOnBehalfCycles[0x4][0x2];
	/*0110*/
};

struct _PROCESS_ENERGY_VALUES_EXTENSION {
	/*0000*/ _TIMELINE_BITMAP Timelines[0xe];
	/*0000*/ _TIMELINE_BITMAP CpuTimeline;
	/*0008*/ _TIMELINE_BITMAP DiskTimeline;
	/*0010*/ _TIMELINE_BITMAP NetworkTimeline;
	/*0018*/ _TIMELINE_BITMAP MBBTimeline;
	/*0020*/ _TIMELINE_BITMAP ForegroundTimeline;
	/*0028*/ _TIMELINE_BITMAP DesktopVisibleTimeline;
	/*0030*/ _TIMELINE_BITMAP CompositionRenderedTimeline;
	/*0038*/ _TIMELINE_BITMAP CompositionDirtyGeneratedTimeline;
	/*0040*/ _TIMELINE_BITMAP CompositionDirtyPropagatedTimeline;
	/*0048*/ _TIMELINE_BITMAP InputTimeline;
	/*0050*/ _TIMELINE_BITMAP AudioInTimeline;
	/*0058*/ _TIMELINE_BITMAP AudioOutTimeline;
	/*0060*/ _TIMELINE_BITMAP DisplayRequiredTimeline;
	/*0068*/ _TIMELINE_BITMAP KeyboardInputTimeline;
	/*0070*/ _ENERGY_STATE_DURATION Durations[0x5];
	/*0070*/ _ENERGY_STATE_DURATION InputDuration;
	/*0078*/ _ENERGY_STATE_DURATION AudioInDuration;
	/*0080*/ _ENERGY_STATE_DURATION AudioOutDuration;
	/*0088*/ _ENERGY_STATE_DURATION DisplayRequiredDuration;
	/*0090*/ _ENERGY_STATE_DURATION PSMBackgroundDuration;
	/*0098*/ ULONG KeyboardInput;
	/*009c*/ ULONG MouseInput;
	/*00a0*/
};

struct _PROCESS_EXTENDED_ENERGY_VALUES {
	/*0000*/ _PROCESS_ENERGY_VALUES Base;
	/*0110*/ _PROCESS_ENERGY_VALUES_EXTENSION Extension;
	/*01b0*/
};

enum _PROCESS_SECTION_TYPE {
	ProcessSectionData = 0x0,
	ProcessSectionImage = 0x1,
	ProcessSectionImageNx = 0x2,
	ProcessSectionPagefileBacked = 0x3,
	ProcessSectionMax = 0x4
};

enum _PROCESS_TERMINATE_REQUEST_REASON {
	ProcessTerminateRequestReasonNone = 0x0,
	ProcessTerminateCommitFail = 0x1,
	ProcessTerminateWriteToExecuteMemory = 0x2,
	ProcessTerminateAttachedWriteToExecuteMemory = 0x3,
	ProcessTerminateRequestReasonMax = 0x4
};

enum _PROCESS_VA_TYPE {
	ProcessVAImage = 0x0,
	ProcessVASection = 0x1,
	ProcessVAPrivate = 0x2,
	ProcessVAMax = 0x3
};

struct _PROC_FEEDBACK {
	/*0000*/ ULONGLONG Lock;
	/*0008*/ ULONGLONG CyclesLast;
	/*0010*/ ULONGLONG CyclesActive;
	/*0018*/ _PROC_FEEDBACK_COUNTER * Counters[0x2];
	/*0028*/ ULONGLONG LastUpdateTime;
	/*0030*/ ULONGLONG UnscaledTime;
	/*0038*/ LONGLONG volatile UnaccountedTime;
	/*0040*/ ULONGLONG ScaledTime[0x2];
	/*0050*/ ULONGLONG UnaccountedKernelTime;
	/*0058*/ ULONGLONG PerformanceScaledKernelTime;
	/*0060*/ ULONG UserTimeLast;
	/*0064*/ ULONG KernelTimeLast;
	/*0068*/ ULONGLONG IdleGenerationNumberLast;
	/*0070*/ ULONGLONG HvActiveTimeLast;
	/*0078*/ ULONGLONG StallCyclesLast;
	/*0080*/ ULONGLONG StallTime;
	/*0088*/ UCHAR KernelTimesIndex;
	/*0089*/ UCHAR CounterDiscardsIdleTime;
	/*0090*/
};

struct _PROC_FEEDBACK_COUNTER {
	/*0000*/ void (* InstantaneousRead)( ULONGLONG , ULONG * );
	/*0000*/ void (* DifferentialRead)( ULONGLONG , UCHAR , ULONGLONG * , ULONGLONG * );
	/*0008*/ ULONGLONG LastActualCount;
	/*0010*/ ULONGLONG LastReferenceCount;
	/*0018*/ ULONG CachedValue;
	/*0020*/ UCHAR Affinitized;
	/*0021*/ UCHAR Differential;
	/*0022*/ UCHAR DiscardIdleTime;
	/*0023*/ UCHAR Scaling;
	/*0028*/ ULONGLONG Context;
	/*0030*/
};

enum _PROC_HYPERVISOR_STATE {
	ProcHypervisorNone = 0x0,
	ProcHypervisorPresent = 0x1,
	ProcHypervisorPower = 0x2,
	ProcHypervisorHvCounters = 0x3
};

struct _PROC_IDLE_ACCOUNTING {
	/*0000*/ ULONG StateCount;
	/*0004*/ ULONG TotalTransitions;
	/*0008*/ ULONG ResetCount;
	/*000c*/ ULONG AbortCount;
	/*0010*/ ULONGLONG StartTime;
	/*0018*/ ULONGLONG PriorIdleTime;
	/*0020*/ PPM_IDLE_BUCKET_TIME_TYPE TimeUnit;
	/*0028*/ _PROC_IDLE_STATE_ACCOUNTING State[0x1];
	/*0410*/
};

struct _PROC_IDLE_POLICY {
	/*0000*/ UCHAR PromotePercent;
	/*0001*/ UCHAR DemotePercent;
	/*0002*/ UCHAR PromotePercentBase;
	/*0003*/ UCHAR DemotePercentBase;
	/*0004*/ UCHAR AllowScaling;
	/*0005*/ UCHAR ForceLightIdle;
	/*0006*/
};

struct _PROC_IDLE_SNAP {
	/*0000*/ ULONGLONG Time;
	/*0008*/ ULONGLONG Idle;
	/*0010*/
};

struct _PROC_IDLE_STATE_ACCOUNTING {
	/*0000*/ ULONGLONG TotalTime;
	/*0008*/ ULONG CancelCount;
	/*000c*/ ULONG FailureCount;
	/*0010*/ ULONG SuccessCount;
	/*0014*/ ULONG InvalidBucketIndex;
	/*0018*/ ULONGLONG MinTime;
	/*0020*/ ULONGLONG MaxTime;
	/*0028*/ _PPM_SELECTION_STATISTICS SelectionStatistics;
	/*00a8*/ _PROC_IDLE_STATE_BUCKET IdleTimeBuckets[0x1a];
	/*03e8*/
};

struct _PROC_IDLE_STATE_BUCKET {
	/*0000*/ ULONGLONG TotalTime;
	/*0008*/ ULONGLONG MinTime;
	/*0010*/ ULONGLONG MaxTime;
	/*0018*/ ULONG Count;
	/*0020*/
};

struct _PROC_PERF_CHECK {
	/*0000*/ ULONGLONG LastActive;
	/*0008*/ ULONGLONG LastTime;
	/*0010*/ ULONGLONG LastStall;
	/*0018*/ _PROC_PERF_CHECK_SNAP LastPerfCheckSnap;
	/*0068*/ _PROC_PERF_CHECK_SNAP CurrentSnap;
	/*00b8*/ _PROC_PERF_CHECK_SNAP LastDeliveredSnap;
	/*0108*/ ULONG LastDeliveredPerformance;
	/*010c*/ ULONG LastDeliveredFrequency;
	/*0110*/ UCHAR TaggedThreadPercent[0x2];
	/*0118*/
};

struct _PROC_PERF_CHECK_SNAP {
	/*0000*/ ULONGLONG Time;
	/*0008*/ ULONGLONG Active;
	/*0010*/ ULONGLONG Stall;
	/*0018*/ ULONGLONG FrequencyScaledActive;
	/*0020*/ ULONGLONG PerformanceScaledActive;
	/*0028*/ ULONGLONG PerformanceScaledKernelActive;
	/*0030*/ ULONGLONG CyclesActive;
	/*0038*/ ULONGLONG CyclesAffinitized;
	/*0040*/ ULONGLONG TaggedThreadCycles[0x2];
	/*0050*/
};

struct _PROC_PERF_CONSTRAINT {
	/*0000*/ _KPRCB * Prcb;
	/*0008*/ ULONGLONG PerfContext;
	/*0010*/ ULONG PlatformCap;
	/*0014*/ ULONG ThermalCap;
	/*0018*/ ULONG LimitReasons;
	/*0020*/ ULONGLONG PlatformCapStartTime;
	/*0028*/ ULONG ProcCap;
	/*002c*/ ULONG ProcFloor;
	/*0030*/ ULONG TargetPercent;
	/*0038*/ _PERF_CONTROL_STATE_SELECTION Selection;
	/*0060*/ ULONG DomainSelectionGeneration;
	/*0064*/ ULONG PreviousFrequency;
	/*0068*/ ULONG PreviousPercent;
	/*006c*/ ULONG LatestFrequencyPercent;
	/*0070*/ UCHAR Force;
	/*0078*/
};

struct _PROC_PERF_DOMAIN {
	/*0000*/ _LIST_ENTRY Link;
	/*0010*/ _KPRCB * Master;
	/*0018*/ _KAFFINITY_EX Members;
	/*00c0*/ ULONGLONG DomainContext;
	/*00c8*/ ULONG ProcessorCount;
	/*00cc*/ UCHAR EfficiencyClass;
	/*00cd*/ UCHAR NominalPerformanceClass;
	/*00ce*/ UCHAR HighestPerformanceClass;
	/*00cf*/ UCHAR Spare;
	/*00d0*/ _PROC_PERF_CONSTRAINT * Processors;
	/*00d8*/ void (* GetFFHThrottleState)( ULONGLONG * );
	/*00e0*/ void (* TimeWindowHandler)( ULONGLONG , ULONG );
	/*00e8*/ void (* BoostPolicyHandler)( ULONGLONG , ULONG );
	/*00f0*/ void (* BoostModeHandler)( ULONGLONG , ULONG );
	/*00f8*/ void (* EnergyPerfPreferenceHandler)( ULONGLONG , ULONG );
	/*0100*/ void (* AutonomousActivityWindowHandler)( ULONGLONG , ULONG );
	/*0108*/ void (* AutonomousModeHandler)( ULONGLONG , ULONG );
	/*0110*/ void (* ReinitializeHandler)( ULONGLONG );
	/*0118*/ ULONG (* PerfSelectionHandler)( ULONGLONG , ULONG , ULONG , ULONG , ULONG , ULONG , ULONG , ULONG * , ULONGLONG * );
	/*0120*/ void (* PerfControlHandler)( ULONGLONG , _PERF_CONTROL_STATE_SELECTION * , UCHAR , UCHAR );
	/*0128*/ void (* DomainPerfControlHandler)( ULONGLONG , _PERF_CONTROL_STATE_SELECTION * , UCHAR , UCHAR );
	/*0130*/ ULONG MaxFrequency;
	/*0134*/ ULONG NominalFrequency;
	/*0138*/ ULONG MaxPercent;
	/*013c*/ ULONG MinPerfPercent;
	/*0140*/ ULONG MinThrottlePercent;
	/*0148*/ ULONGLONG MinimumRelativePerformance;
	/*0150*/ ULONGLONG NominalRelativePerformance;
	/*0158*/ UCHAR NominalRelativePerformancePercent;
	/*0159*/ UCHAR Coordination;
	/*015a*/ UCHAR HardPlatformCap;
	/*015b*/ UCHAR AffinitizeControl;
	/*015c*/ UCHAR EfficientThrottle;
	/*015d*/ UCHAR AllowSchedulerDirectedPerfStates;
	/*015e*/ UCHAR InitiateAllProcessors;
	/*015f*/ UCHAR AutonomousMode;
	/*0160*/ UCHAR ProvideGuidance;
	/*0164*/ ULONG DesiredPercent;
	/*0168*/ ULONG GuaranteedPercent;
	/*016c*/ _PROC_PERF_QOS_CLASS_POLICY QosPolicies[0x3];
	/*01b4*/ ULONG QosDisableReasons[0x3];
	/*01c0*/ ULONG QosEquivalencyMasks[0x3];
	/*01cc*/ UCHAR QosSupported;
	/*01d0*/ ULONG SelectionGeneration;
	/*01d8*/ _PERF_CONTROL_STATE_SELECTION QosSelection[0x3];
	/*0250*/ ULONGLONG PerfChangeTime;
	/*0258*/ ULONG PerfChangeIntervalCount;
	/*025c*/ UCHAR Force;
	/*0260*/
};

struct _PROC_PERF_HISTORY {
	/*0000*/ ULONG Count;
	/*0004*/ ULONG Slot;
	/*0008*/ ULONG UtilityTotal;
	/*000c*/ ULONG AffinitizedUtilityTotal;
	/*0010*/ ULONG FrequencyTotal;
	/*0014*/ ULONG TaggedPercentTotal[0x2];
	/*001c*/ _PROC_PERF_HISTORY_ENTRY HistoryList[0x1];
	/*0024*/
};

struct _PROC_PERF_HISTORY_ENTRY {
	/*0000*/ USHORT Utility;
	/*0002*/ USHORT AffinitizedUtility;
	/*0004*/ UCHAR Frequency;
	/*0005*/ UCHAR TaggedPercent[0x2];
	/*0008*/
};

struct _PROC_PERF_LOAD {
	/*0000*/ UCHAR BusyPercentage;
	/*0001*/ UCHAR FrequencyPercentage;
	/*0002*/
};

struct _PROC_PERF_QOS_CLASS_POLICY {
	/*0000*/ ULONG MaxPolicyPercent;
	/*0004*/ ULONG MaxEquivalentFrequencyPercent;
	/*0008*/ ULONG MinPolicyPercent;
	/*000c*/ ULONG AutonomousActivityWindow;
	/*0010*/ ULONG EnergyPerfPreference;
	/*0014*/ UCHAR ProvideGuidance;
	/*0015*/ UCHAR AllowThrottling;
	/*0016*/ UCHAR PerfBoostMode;
	/*0017*/ UCHAR LatencyHintPerf;
	/*0018*/
};

struct _PSP_STORAGE;

enum _PS_ATTRIBUTE_NUM {
	PsAttributeParentProcess = 0x0,
	PsAttributeDebugObject = 0x1,
	PsAttributeToken = 0x2,
	PsAttributeClientId = 0x3,
	PsAttributeTebAddress = 0x4,
	PsAttributeImageName = 0x5,
	PsAttributeImageInfo = 0x6,
	PsAttributeMemoryReserve = 0x7,
	PsAttributePriorityClass = 0x8,
	PsAttributeErrorMode = 0x9,
	PsAttributeStdHandleInfo = 0xa,
	PsAttributeHandleList = 0xb,
	PsAttributeGroupAffinity = 0xc,
	PsAttributePreferredNode = 0xd,
	PsAttributeIdealProcessor = 0xe,
	PsAttributeUmsThread = 0xf,
	PsAttributeMitigationOptions = 0x10,
	PsAttributeProtectionLevel = 0x11,
	PsAttributeSecureProcess = 0x12,
	PsAttributeJobList = 0x13,
	PsAttributeChildProcessPolicy = 0x14,
	PsAttributeAllApplicationPackagesPolicy = 0x15,
	PsAttributeWin32kFilter = 0x16,
	PsAttributeSafeOpenPromptOriginClaim = 0x17,
	PsAttributeBnoIsolation = 0x18,
	PsAttributeDesktopAppPolicy = 0x19,
	PsAttributeChpe = 0x1a,
	PsAttributeMax = 0x1b
};

union _PS_CLIENT_SECURITY_CONTEXT {
	/*0000*/ ULONGLONG ImpersonationData;
	/*0000*/ void * ImpersonationToken;
	/*0000*/ ULONGLONG ImpersonationLevel : 02; // 0x0000000000000003;
	/*0000*/ ULONGLONG EffectiveOnly : 01; // 0x0000000000000004;
	/*0008*/
};

union _PS_INTERLOCKED_TIMER_DELAY_VALUES {
	/*0000*/ ULONGLONG DelayMs : 30; // 0x000000003fffffff;
	/*0000*/ ULONGLONG CoalescingWindowMs : 30; // 0x0fffffffc0000000;
	/*0000*/ ULONGLONG Reserved : 01; // 0x1000000000000000;
	/*0000*/ ULONGLONG NewTimerWheel : 01; // 0x2000000000000000;
	/*0000*/ ULONGLONG Retry : 01; // 0x4000000000000000;
	/*0000*/ ULONGLONG Locked : 01; // 0x8000000000000000;
	/*0000*/ ULONGLONG All;
	/*0008*/
};

struct _PS_IO_CONTROL_ENTRY {
	/*0000*/ _RTL_BALANCED_NODE VolumeTreeNode;
	/*0000*/ _LIST_ENTRY FreeListEntry;
	/*0010*/ ULONGLONG ReservedForParentValue;
	/*0018*/ ULONGLONG VolumeKey;
	/*0020*/ _EX_RUNDOWN_REF Rundown;
	/*0028*/ void * IoControl;
	/*0030*/ void * VolumeIoAttribution;
	/*0038*/
};

struct _PS_JOB_WAKE_INFORMATION {
	/*0000*/ ULONGLONG NotificationChannel;
	/*0008*/ ULONGLONG WakeCounters[0x7];
	/*0040*/ ULONGLONG NoWakeCounter;
	/*0048*/
};

struct _PS_MITIGATION_AUDIT_OPTIONS_MAP {
	/*0000*/ ULONGLONG Map[0x2];
	/*0010*/
};

enum _PS_MITIGATION_OPTION {
	PS_MITIGATION_OPTION_NX = 0x0,
	PS_MITIGATION_OPTION_SEHOP = 0x1,
	PS_MITIGATION_OPTION_FORCE_RELOCATE_IMAGES = 0x2,
	PS_MITIGATION_OPTION_HEAP_TERMINATE = 0x3,
	PS_MITIGATION_OPTION_BOTTOM_UP_ASLR = 0x4,
	PS_MITIGATION_OPTION_HIGH_ENTROPY_ASLR = 0x5,
	PS_MITIGATION_OPTION_STRICT_HANDLE_CHECKS = 0x6,
	PS_MITIGATION_OPTION_WIN32K_SYSTEM_CALL_DISABLE = 0x7,
	PS_MITIGATION_OPTION_EXTENSION_POINT_DISABLE = 0x8,
	PS_MITIGATION_OPTION_PROHIBIT_DYNAMIC_CODE = 0x9,
	PS_MITIGATION_OPTION_CONTROL_FLOW_GUARD = 0xa,
	PS_MITIGATION_OPTION_BLOCK_NON_MICROSOFT_BINARIES = 0xb,
	PS_MITIGATION_OPTION_FONT_DISABLE = 0xc,
	PS_MITIGATION_OPTION_IMAGE_LOAD_NO_REMOTE = 0xd,
	PS_MITIGATION_OPTION_IMAGE_LOAD_NO_LOW_LABEL = 0xe,
	PS_MITIGATION_OPTION_IMAGE_LOAD_PREFER_SYSTEM32 = 0xf,
	PS_MITIGATION_OPTION_RETURN_FLOW_GUARD = 0x10,
	PS_MITIGATION_OPTION_LOADER_INTEGRITY_CONTINUITY = 0x11,
	PS_MITIGATION_OPTION_STRICT_CONTROL_FLOW_GUARD = 0x12,
	PS_MITIGATION_OPTION_RESTRICT_SET_THREAD_CONTEXT = 0x13,
	PS_MITIGATION_OPTION_ROP_STACKPIVOT = 0x14,
	PS_MITIGATION_OPTION_ROP_CALLER_CHECK = 0x15,
	PS_MITIGATION_OPTION_ROP_SIMEXEC = 0x16,
	PS_MITIGATION_OPTION_EXPORT_ADDRESS_FILTER = 0x17,
	PS_MITIGATION_OPTION_EXPORT_ADDRESS_FILTER_PLUS = 0x18,
	PS_MITIGATION_OPTION_RESTRICT_CHILD_PROCESS_CREATION = 0x19,
	PS_MITIGATION_OPTION_IMPORT_ADDRESS_FILTER = 0x1a,
	PS_MITIGATION_OPTION_MODULE_TAMPERING_PROTECTION = 0x1b
};

struct _PS_MITIGATION_OPTIONS_MAP {
	/*0000*/ ULONGLONG Map[0x2];
	/*0010*/
};

struct _PS_PROCESS_WAKE_INFORMATION {
	/*0000*/ ULONGLONG NotificationChannel;
	/*0008*/ ULONG WakeCounters[0x7];
	/*0024*/ _JOBOBJECT_WAKE_FILTER WakeFilter;
	/*002c*/ ULONG NoWakeCounter;
	/*0030*/
};

struct _PS_PROPERTY_SET {
	/*0000*/ _LIST_ENTRY ListHead;
	/*0010*/ ULONGLONG Lock;
	/*0018*/
};

enum _PS_PROTECTED_SIGNER {
	PsProtectedSignerNone = 0x0,
	PsProtectedSignerAuthenticode = 0x1,
	PsProtectedSignerCodeGen = 0x2,
	PsProtectedSignerAntimalware = 0x3,
	PsProtectedSignerLsa = 0x4,
	PsProtectedSignerWindows = 0x5,
	PsProtectedSignerWinTcb = 0x6,
	PsProtectedSignerWinSystem = 0x7,
	PsProtectedSignerApp = 0x8,
	PsProtectedSignerMax = 0x9
};

enum _PS_PROTECTED_TYPE {
	PsProtectedTypeNone = 0x0,
	PsProtectedTypeProtectedLight = 0x1,
	PsProtectedTypeProtected = 0x2,
	PsProtectedTypeMax = 0x3
};

struct _PS_PROTECTION {
	/*0000*/ UCHAR Level;
	/*0000*/ UCHAR Type : 03; // 0x07;
	/*0000*/ UCHAR Audit : 01; // 0x08;
	/*0000*/ UCHAR Signer : 04; // 0xf0;
	/*0001*/
};

enum _PS_RESOURCE_TYPE {
	PsResourceNonPagedPool = 0x0,
	PsResourcePagedPool = 0x1,
	PsResourcePageFile = 0x2,
	PsResourceWorkingSet = 0x3,
	PsResourceMax = 0x4
};

enum _PS_STD_HANDLE_STATE {
	PsNeverDuplicate = 0x0,
	PsRequestDuplicate = 0x1,
	PsAlwaysDuplicate = 0x2,
	PsMaxStdHandleStates = 0x3
};

union _PS_TRUSTLET_ATTRIBUTE_ACCESSRIGHTS {
	/*0000*/ UCHAR Trustlet : 01; // 0x01;
	/*0000*/ UCHAR Ntos : 01; // 0x02;
	/*0000*/ UCHAR WriteHandle : 01; // 0x04;
	/*0000*/ UCHAR ReadHandle : 01; // 0x08;
	/*0000*/ UCHAR Reserved : 04; // 0xf0;
	/*0000*/ UCHAR AccessRights;
	/*0001*/
};

struct _PS_TRUSTLET_ATTRIBUTE_DATA {
	/*0000*/ _PS_TRUSTLET_ATTRIBUTE_HEADER Header;
	/*0008*/ ULONGLONG Data[0x1];
	/*0010*/
};

struct _PS_TRUSTLET_ATTRIBUTE_HEADER {
	/*0000*/ _PS_TRUSTLET_ATTRIBUTE_TYPE AttributeType;
	/*0004*/ ULONG InstanceNumber : 08; // 0x000000ff;
	/*0004*/ ULONG Reserved : 24; // 0xffffff00;
	/*0008*/
};

struct _PS_TRUSTLET_ATTRIBUTE_TYPE {
	/*0000*/ UCHAR Version;
	/*0001*/ UCHAR DataCount;
	/*0002*/ UCHAR SemanticType;
	/*0003*/ _PS_TRUSTLET_ATTRIBUTE_ACCESSRIGHTS AccessRights;
	/*0000*/ ULONG AttributeType;
	/*0004*/
};

struct _PS_TRUSTLET_CREATE_ATTRIBUTES {
	/*0000*/ ULONGLONG TrustletIdentity;
	/*0008*/ _PS_TRUSTLET_ATTRIBUTE_DATA Attributes[0x1];
	/*0018*/
};

struct _PS_TRUSTLET_TKSESSION_ID {
	/*0000*/ ULONGLONG SessionId[0x4];
	/*0020*/
};

enum _PS_WAKE_REASON {
	PsWakeReasonUser = 0x0,
	PsWakeReasonExecutionRequired = 0x1,
	PsWakeReasonKernel = 0x2,
	PsWakeReasonInstrumentation = 0x3,
	PsWakeReasonPreserveProcess = 0x4,
	PsWakeReasonActivityReference = 0x5,
	PsWakeReasonWorkOnBehalf = 0x6,
	PsMaxWakeReasons = 0x7
};

struct _QUAD {
	/*0000*/ LONGLONG UseThisFieldToCopy;
	/*0000*/ double DoNotUseThisField;
	/*0008*/
};

enum _REG_NOTIFY_CLASS {
	RegNtDeleteKey = 0x0,
	RegNtPreDeleteKey = 0x0,
	RegNtSetValueKey = 0x1,
	RegNtPreSetValueKey = 0x1,
	RegNtDeleteValueKey = 0x2,
	RegNtPreDeleteValueKey = 0x2,
	RegNtSetInformationKey = 0x3,
	RegNtPreSetInformationKey = 0x3,
	RegNtRenameKey = 0x4,
	RegNtPreRenameKey = 0x4,
	RegNtEnumerateKey = 0x5,
	RegNtPreEnumerateKey = 0x5,
	RegNtEnumerateValueKey = 0x6,
	RegNtPreEnumerateValueKey = 0x6,
	RegNtQueryKey = 0x7,
	RegNtPreQueryKey = 0x7,
	RegNtQueryValueKey = 0x8,
	RegNtPreQueryValueKey = 0x8,
	RegNtQueryMultipleValueKey = 0x9,
	RegNtPreQueryMultipleValueKey = 0x9,
	RegNtPreCreateKey = 0xa,
	RegNtPostCreateKey = 0xb,
	RegNtPreOpenKey = 0xc,
	RegNtPostOpenKey = 0xd,
	RegNtKeyHandleClose = 0xe,
	RegNtPreKeyHandleClose = 0xe,
	RegNtPostDeleteKey = 0xf,
	RegNtPostSetValueKey = 0x10,
	RegNtPostDeleteValueKey = 0x11,
	RegNtPostSetInformationKey = 0x12,
	RegNtPostRenameKey = 0x13,
	RegNtPostEnumerateKey = 0x14,
	RegNtPostEnumerateValueKey = 0x15,
	RegNtPostQueryKey = 0x16,
	RegNtPostQueryValueKey = 0x17,
	RegNtPostQueryMultipleValueKey = 0x18,
	RegNtPostKeyHandleClose = 0x19,
	RegNtPreCreateKeyEx = 0x1a,
	RegNtPostCreateKeyEx = 0x1b,
	RegNtPreOpenKeyEx = 0x1c,
	RegNtPostOpenKeyEx = 0x1d,
	RegNtPreFlushKey = 0x1e,
	RegNtPostFlushKey = 0x1f,
	RegNtPreLoadKey = 0x20,
	RegNtPostLoadKey = 0x21,
	RegNtPreUnLoadKey = 0x22,
	RegNtPostUnLoadKey = 0x23,
	RegNtPreQueryKeySecurity = 0x24,
	RegNtPostQueryKeySecurity = 0x25,
	RegNtPreSetKeySecurity = 0x26,
	RegNtPostSetKeySecurity = 0x27,
	RegNtCallbackObjectContextCleanup = 0x28,
	RegNtPreRestoreKey = 0x29,
	RegNtPostRestoreKey = 0x2a,
	RegNtPreSaveKey = 0x2b,
	RegNtPostSaveKey = 0x2c,
	RegNtPreReplaceKey = 0x2d,
	RegNtPostReplaceKey = 0x2e,
	RegNtPreQueryKeyName = 0x2f,
	RegNtPostQueryKeyName = 0x30,
	MaxRegNtNotifyClass = 0x31
};

struct _REQUEST_MAILBOX {
	/*0000*/ _REQUEST_MAILBOX * Next;
	/*0008*/ ULONGLONG RequestSummary;
	/*0010*/ _KREQUEST_PACKET RequestPacket;
	/*0030*/ LONG volatile * NodeTargetCountAddr;
	/*0038*/ LONG volatile NodeTargetCount;
	/*0040*/
};

enum _RTLP_CSB_LOCKMODE {
	BitmapLockNotHeld = 0x0,
	BitmapLockShared = 0x1,
	BitmapLockExclusive = 0x2
};

struct _RTLP_HEAP_FEATURES {
	/*0000*/ UCHAR UseSegmentHeap : 01; // 0x01;
	/*0000*/ UCHAR EnableTagging : 01; // 0x02;
	/*0000*/ UCHAR DisableDbgBreakOnCorruption : 01; // 0x04;
	/*0000*/ UCHAR TraceLoggingEnabled : 01; // 0x08;
	/*0001*/
};

enum _RTLP_HP_ALLOCATOR {
	RtlpHpSegmentSm = 0x0,
	RtlpHpSegmentLg = 0x1,
	RtlpHpSegmentTypes = 0x2,
	RtlpHpHugeAllocator = 0x2,
	RtlpHpAllocatorMax = 0x3
};

struct _RTLP_HP_STACKTRACKING_CONTEXT {
	/*0000*/ _RTL_SRWLOCK Lock;
	/*0008*/ ULONG Flags;
	/*0010*/ _RTL_STACKDB_CONTEXT StackDbContext;
	/*0058*/
};

struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME {
	/*0000*/ _RTL_ACTIVATION_CONTEXT_STACK_FRAME * Previous;
	/*0008*/ _ACTIVATION_CONTEXT * ActivationContext;
	/*0010*/ ULONG Flags;
	/*0018*/
};

struct _RTL_AVL_TABLE {
	/*0000*/ _RTL_BALANCED_LINKS BalancedRoot;
	/*0020*/ void * OrderedPointer;
	/*0028*/ ULONG WhichOrderedElement;
	/*002c*/ ULONG NumberGenericTableElements;
	/*0030*/ ULONG DepthOfTree;
	/*0038*/ _RTL_BALANCED_LINKS * RestartKey;
	/*0040*/ ULONG DeleteCount;
	/*0048*/ _RTL_GENERIC_COMPARE_RESULTS (* CompareRoutine)( _RTL_AVL_TABLE * , void * , void * );
	/*0050*/ void * (* AllocateRoutine)( _RTL_AVL_TABLE * , ULONG );
	/*0058*/ void (* FreeRoutine)( _RTL_AVL_TABLE * , void * );
	/*0060*/ void * TableContext;
	/*0068*/
};

struct _RTL_AVL_TREE {
	/*0000*/ _RTL_BALANCED_NODE * Root;
	/*0008*/
};

struct _RTL_BALANCED_LINKS {
	/*0000*/ _RTL_BALANCED_LINKS * Parent;
	/*0008*/ _RTL_BALANCED_LINKS * LeftChild;
	/*0010*/ _RTL_BALANCED_LINKS * RightChild;
	/*0018*/ CHAR Balance;
	/*0019*/ UCHAR Reserved[0x3];
	/*0020*/
};

struct _RTL_BALANCED_NODE {
	/*0000*/ _RTL_BALANCED_NODE * Children[0x2];
	/*0000*/ _RTL_BALANCED_NODE * Left;
	/*0008*/ _RTL_BALANCED_NODE * Right;
	/*0010*/ UCHAR Red : 01; // 0x01;
	/*0010*/ UCHAR Balance : 02; // 0x03;
	/*0010*/ ULONGLONG ParentValue;
	/*0018*/
};

struct _RTL_BITMAP {
	/*0000*/ ULONG SizeOfBitMap;
	/*0008*/ ULONG * Buffer;
	/*0010*/
};

struct _RTL_BITMAP_EX {
	/*0000*/ ULONGLONG SizeOfBitMap;
	/*0008*/ ULONGLONG * Buffer;
	/*0010*/
};

struct _RTL_CHASH_ENTRY {
	/*0000*/ ULONGLONG Key;
	/*0008*/
};

struct _RTL_CHASH_TABLE {
	/*0000*/ _RTL_CHASH_ENTRY * Table;
	/*0008*/ ULONG EntrySizeShift;
	/*000c*/ ULONG EntryMax;
	/*0010*/ ULONG EntryCount;
	/*0018*/
};

struct _RTL_CRITICAL_SECTION {
	/*0000*/ _RTL_CRITICAL_SECTION_DEBUG * DebugInfo;
	/*0008*/ LONG LockCount;
	/*000c*/ LONG RecursionCount;
	/*0010*/ void * OwningThread;
	/*0018*/ void * LockSemaphore;
	/*0020*/ ULONGLONG SpinCount;
	/*0028*/
};

struct _RTL_CRITICAL_SECTION_DEBUG {
	/*0000*/ USHORT Type;
	/*0002*/ USHORT CreatorBackTraceIndex;
	/*0008*/ _RTL_CRITICAL_SECTION * CriticalSection;
	/*0010*/ _LIST_ENTRY ProcessLocksList;
	/*0020*/ ULONG EntryCount;
	/*0024*/ ULONG ContentionCount;
	/*0028*/ ULONG Flags;
	/*002c*/ USHORT CreatorBackTraceIndexHigh;
	/*002e*/ USHORT SpareUSHORT;
	/*0030*/
};

struct _RTL_CSPARSE_BITMAP {
	/*0000*/ ULONGLONG * CommitBitmap;
	/*0008*/ ULONGLONG * UserBitmap;
	/*0010*/ ULONGLONG BitCount;
	/*0018*/ _RTL_SRWLOCK BitmapLock;
	/*0020*/ ULONGLONG DecommitPageIndex;
	/*0028*/
};

struct _RTL_DRIVE_LETTER_CURDIR {
	/*0000*/ USHORT Flags;
	/*0002*/ USHORT Length;
	/*0004*/ ULONG TimeStamp;
	/*0008*/ _STRING DosPath;
	/*0018*/
};

struct _RTL_DYNAMIC_HASH_TABLE {
	/*0000*/ ULONG Flags;
	/*0004*/ ULONG Shift;
	/*0008*/ ULONG TableSize;
	/*000c*/ ULONG Pivot;
	/*0010*/ ULONG DivisorMask;
	/*0014*/ ULONG NumEntries;
	/*0018*/ ULONG NonEmptyBuckets;
	/*001c*/ ULONG NumEnumerators;
	/*0020*/ void * Directory;
	/*0028*/
};

struct _RTL_DYNAMIC_HASH_TABLE_CONTEXT {
	/*0000*/ _LIST_ENTRY * ChainHead;
	/*0008*/ _LIST_ENTRY * PrevLinkage;
	/*0010*/ ULONGLONG Signature;
	/*0018*/
};

struct _RTL_DYNAMIC_HASH_TABLE_ENTRY {
	/*0000*/ _LIST_ENTRY Linkage;
	/*0010*/ ULONGLONG Signature;
	/*0018*/
};

struct _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR {
	/*0000*/ _RTL_DYNAMIC_HASH_TABLE_ENTRY HashEntry;
	/*0000*/ _LIST_ENTRY * CurEntry;
	/*0018*/ _LIST_ENTRY * ChainHead;
	/*0020*/ ULONG BucketIndex;
	/*0028*/
};

enum _RTL_GENERIC_COMPARE_RESULTS {
	GenericLessThan = 0x0,
	GenericGreaterThan = 0x1,
	GenericEqual = 0x2
};

struct _RTL_HASH_ENTRY {
	/*0000*/ _SINGLE_LIST_ENTRY BucketLink;
	/*0008*/ ULONGLONG Key;
	/*0010*/
};

struct _RTL_HASH_TABLE {
	/*0000*/ ULONG EntryCount;
	/*0004*/ ULONG MaskBitCount : 05; // 0x0000001f;
	/*0004*/ ULONG BucketCount : 27; // 0xffffffe0;
	/*0008*/ _SINGLE_LIST_ENTRY * Buckets;
	/*0010*/
};

struct _RTL_HASH_TABLE_ITERATOR {
	/*0000*/ _RTL_HASH_TABLE * Hash;
	/*0008*/ _RTL_HASH_ENTRY * HashEntry;
	/*0010*/ _SINGLE_LIST_ENTRY * Bucket;
	/*0018*/
};

struct _RTL_RB_TREE {
	/*0000*/ _RTL_BALANCED_NODE * Root;
	/*0008*/ UCHAR Encoded : 01; // 0x01;
	/*0008*/ _RTL_BALANCED_NODE * Min;
	/*0010*/
};

union _RTL_RUN_ONCE {
	/*0000*/ void * Ptr;
	/*0000*/ ULONGLONG Value;
	/*0000*/ ULONGLONG State : 02; // 0x0000000000000003;
	/*0008*/
};

struct _RTL_SPLAY_LINKS {
	/*0000*/ _RTL_SPLAY_LINKS * Parent;
	/*0008*/ _RTL_SPLAY_LINKS * LeftChild;
	/*0010*/ _RTL_SPLAY_LINKS * RightChild;
	/*0018*/
};

struct _RTL_SRWLOCK {
	/*0000*/ ULONGLONG Locked : 01; // 0x0000000000000001;
	/*0000*/ ULONGLONG Waiting : 01; // 0x0000000000000002;
	/*0000*/ ULONGLONG Waking : 01; // 0x0000000000000004;
	/*0000*/ ULONGLONG MultipleShared : 01; // 0x0000000000000008;
	/*0000*/ ULONGLONG Shared : 60; // 0xfffffffffffffff0;
	/*0000*/ ULONGLONG Value;
	/*0000*/ void * Ptr;
	/*0008*/
};

struct _RTL_STACKDB_CONTEXT {
	/*0000*/ _RTL_HASH_TABLE StackSegmentTable;
	/*0010*/ _RTL_HASH_TABLE StackEntryTable;
	/*0020*/ _RTL_SRWLOCK StackEntryTableLock;
	/*0028*/ _RTL_SRWLOCK SegmentTableLock;
	/*0030*/ void * (* Allocate)( ULONGLONG , void * );
	/*0038*/ void (* Free)( void * , void * );
	/*0040*/ void * AllocatorContext;
	/*0048*/
};

struct _RTL_STACK_DATABASE_LOCK {
	/*0000*/ _RTL_SRWLOCK Lock;
	/*0008*/
};

struct _RTL_STACK_TRACE_ENTRY {
	/*0000*/ _RTL_STD_LIST_ENTRY HashChain;
	/*0008*/ USHORT TraceCount : 11; // 0x07ff;
	/*0008*/ USHORT BlockDepth : 05; // 0xf800;
	/*000a*/ USHORT IndexHigh;
	/*000c*/ USHORT Index;
	/*000e*/ USHORT Depth;
	/*0010*/ void * BackTrace[0x20];
	/*0010*/ _SLIST_ENTRY FreeChain;
	/*0110*/
};

struct _RTL_STD_LIST_ENTRY {
	/*0000*/ _RTL_STD_LIST_ENTRY * Next;
	/*0008*/
};

struct _RTL_STD_LIST_HEAD {
	/*0000*/ _RTL_STD_LIST_ENTRY * Next;
	/*0008*/ _RTL_STACK_DATABASE_LOCK Lock;
	/*0010*/
};

struct _RTL_TRACE_BLOCK {
	/*0000*/ ULONG Magic;
	/*0004*/ ULONG Count;
	/*0008*/ ULONG Size;
	/*0010*/ ULONGLONG UserCount;
	/*0018*/ ULONGLONG UserSize;
	/*0020*/ void * UserContext;
	/*0028*/ _RTL_TRACE_BLOCK * Next;
	/*0030*/ void * * Trace;
	/*0038*/
};

struct _RTL_TRACE_DATABASE {
	/*0000*/ ULONG Magic;
	/*0004*/ ULONG Flags;
	/*0008*/ ULONG Tag;
	/*0010*/ _RTL_TRACE_SEGMENT * SegmentList;
	/*0018*/ ULONGLONG MaximumSize;
	/*0020*/ ULONGLONG CurrentSize;
	/*0028*/ void * Owner;
	/*0030*/ _RTL_CRITICAL_SECTION Lock;
	/*0058*/ ULONG NoOfBuckets;
	/*0060*/ _RTL_TRACE_BLOCK * * Buckets;
	/*0068*/ ULONG (* HashFunction)( ULONG , void * * );
	/*0070*/ ULONGLONG NoOfTraces;
	/*0078*/ ULONGLONG NoOfHits;
	/*0080*/ ULONG HashCounter[0x10];
	/*00c0*/
};

struct _RTL_TRACE_SEGMENT {
	/*0000*/ ULONG Magic;
	/*0008*/ _RTL_TRACE_DATABASE * Database;
	/*0010*/ _RTL_TRACE_SEGMENT * NextSegment;
	/*0018*/ ULONGLONG TotalSize;
	/*0020*/ CHAR * SegmentStart;
	/*0028*/ CHAR * SegmentEnd;
	/*0030*/ CHAR * SegmentFree;
	/*0038*/
};

struct _RTL_UMS_CONTEXT {
	/*0000*/ _SINGLE_LIST_ENTRY Link;
	/*0010*/ _CONTEXT Context;
	/*04e0*/ void * Teb;
	/*04e8*/ void * UserContext;
	/*04f0*/ ULONG volatile ScheduledThread : 01; // 0x00000001;
	/*04f0*/ ULONG volatile Suspended : 01; // 0x00000002;
	/*04f0*/ ULONG volatile VolatileContext : 01; // 0x00000004;
	/*04f0*/ ULONG volatile Terminated : 01; // 0x00000008;
	/*04f0*/ ULONG volatile DebugActive : 01; // 0x00000010;
	/*04f0*/ ULONG volatile RunningOnSelfThread : 01; // 0x00000020;
	/*04f0*/ ULONG volatile DenyRunningOnSelfThread : 01; // 0x00000040;
	/*04f0*/ LONG volatile Flags;
	/*04f8*/ ULONGLONG volatile KernelUpdateLock : 02; // 0x0000000000000003;
	/*04f8*/ ULONGLONG volatile PrimaryClientID : 62; // 0xfffffffffffffffc;
	/*04f8*/ ULONGLONG volatile ContextLock;
	/*0500*/ _RTL_UMS_CONTEXT * PrimaryUmsContext;
	/*0508*/ ULONG SwitchCount;
	/*050c*/ ULONG KernelYieldCount;
	/*0510*/ ULONG MixedYieldCount;
	/*0514*/ ULONG YieldCount;
	/*0520*/
};

struct _RTL_USER_PROCESS_PARAMETERS {
	/*0000*/ ULONG MaximumLength;
	/*0004*/ ULONG Length;
	/*0008*/ ULONG Flags;
	/*000c*/ ULONG DebugFlags;
	/*0010*/ void * ConsoleHandle;
	/*0018*/ ULONG ConsoleFlags;
	/*0020*/ void * StandardInput;
	/*0028*/ void * StandardOutput;
	/*0030*/ void * StandardError;
	/*0038*/ _CURDIR CurrentDirectory;
	/*0050*/ _UNICODE_STRING DllPath;
	/*0060*/ _UNICODE_STRING ImagePathName;
	/*0070*/ _UNICODE_STRING CommandLine;
	/*0080*/ void * Environment;
	/*0088*/ ULONG StartingX;
	/*008c*/ ULONG StartingY;
	/*0090*/ ULONG CountX;
	/*0094*/ ULONG CountY;
	/*0098*/ ULONG CountCharsX;
	/*009c*/ ULONG CountCharsY;
	/*00a0*/ ULONG FillAttribute;
	/*00a4*/ ULONG WindowFlags;
	/*00a8*/ ULONG ShowWindowFlags;
	/*00b0*/ _UNICODE_STRING WindowTitle;
	/*00c0*/ _UNICODE_STRING DesktopInfo;
	/*00d0*/ _UNICODE_STRING ShellInfo;
	/*00e0*/ _UNICODE_STRING RuntimeData;
	/*00f0*/ _RTL_DRIVE_LETTER_CURDIR CurrentDirectores[0x20];
	/*03f0*/ ULONGLONG EnvironmentSize;
	/*03f8*/ ULONGLONG EnvironmentVersion;
	/*0400*/ void * PackageDependencyData;
	/*0408*/ ULONG ProcessGroupId;
	/*040c*/ ULONG LoaderThreads;
	/*0410*/
};

struct _SCSI_REQUEST_BLOCK;

struct _SECTION_OBJECT_POINTERS {
	/*0000*/ void * DataSectionObject;
	/*0008*/ void * SharedCacheMap;
	/*0010*/ void * ImageSectionObject;
	/*0018*/
};

struct _SECURITY_DESCRIPTOR {
	/*0000*/ UCHAR Revision;
	/*0001*/ UCHAR Sbz1;
	/*0002*/ USHORT Control;
	/*0008*/ void * Owner;
	/*0010*/ void * Group;
	/*0018*/ _ACL * Sacl;
	/*0020*/ _ACL * Dacl;
	/*0028*/
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
	/*0008*/ _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
	/*0010*/ void * PrimaryToken;
	/*0018*/ void * ProcessAuditId;
	/*0020*/
};

struct _SEGMENT_HEAP {
	/*0000*/ void * Padding[0x2];
	/*0010*/ ULONG Signature;
	/*0014*/ ULONG GlobalFlags;
	/*0018*/ _HEAP_RUNTIME_MEMORY_STATS MemStats;
	/*0038*/ ULONG Interceptor;
	/*003c*/ USHORT ProcessHeapListIndex;
	/*003e*/ USHORT GlobalLockCount;
	/*0040*/ ULONG GlobalLockOwner;
	/*0048*/ _RTL_SRWLOCK LargeMetadataLock;
	/*0050*/ _RTL_RB_TREE LargeAllocMetadata;
	/*0060*/ ULONGLONG volatile LargeReservedPages;
	/*0068*/ ULONGLONG volatile LargeCommittedPages;
	/*0070*/ _HEAP_SEG_CONTEXT SegContexts[0x2];
	/*0140*/ _RTL_RUN_ONCE StackTraceInitVar;
	/*0148*/ _RTL_SRWLOCK ContextExtendLock;
	/*0150*/ UCHAR * AllocatedBase;
	/*0158*/ UCHAR * UncommittedBase;
	/*0160*/ UCHAR * ReservedLimit;
	/*0168*/ _HEAP_VS_CONTEXT VsContext;
	/*01e0*/ _HEAP_LFH_CONTEXT LfhContext;
	/*06c0*/
};

struct _SEGMENT_HEAP_EXTRA {
	/*0000*/ USHORT AllocationTag;
	/*0002*/ UCHAR InterceptorIndex : 04; // 0x0f;
	/*0002*/ UCHAR UserFlags : 04; // 0xf0;
	/*0003*/ UCHAR ExtraSizeInUnits;
	/*0008*/ void * Settable;
	/*0010*/
};

struct _SEP_LOGON_SESSION_REFERENCES;

struct _SEP_RM_LSA_CONNECTION_STATE {
	/*0000*/ void * LsaProcessHandle;
	/*0008*/ void * LsaCommandPortHandle;
	/*0010*/ void * SepRmThreadHandle;
	/*0018*/ void * RmCommandPortHandle;
	/*0020*/ void * RmCommandServerPortHandle;
	/*0028*/ void * LsaCommandPortSectionHandle;
	/*0030*/ _LARGE_INTEGER LsaCommandPortSectionSize;
	/*0038*/ void * LsaViewPortMemory;
	/*0040*/ void * RmViewPortMemory;
	/*0048*/ LONG LsaCommandPortMemoryDelta;
	/*004c*/ UCHAR LsaCommandPortActive;
	/*0050*/
};

struct _SEP_SILOSTATE {
	/*0000*/ _SEP_LOGON_SESSION_REFERENCES * SystemLogonSession;
	/*0008*/ _SEP_LOGON_SESSION_REFERENCES * AnonymousLogonSession;
	/*0010*/ void * AnonymousLogonToken;
	/*0018*/ void * AnonymousLogonTokenNoEveryone;
	/*0020*/ _UNICODE_STRING * UncSystemPaths;
	/*0028*/ _CI_NGEN_PATHS * NgenPaths;
	/*0030*/
};

enum _SERVERSILO_STATE {
	SERVERSILO_INITING = 0x0,
	SERVERSILO_STARTED = 0x1,
	SERVERSILO_SHUTTING_DOWN = 0x2,
	SERVERSILO_TERMINATING = 0x3,
	SERVERSILO_TERMINATED = 0x4
};

struct _SE_AUDIT_PROCESS_CREATION_INFO {
	/*0000*/ _OBJECT_NAME_INFORMATION * ImageFileName;
	/*0008*/
};

struct _SID {
	/*0000*/ UCHAR Revision;
	/*0001*/ UCHAR SubAuthorityCount;
	/*0002*/ _SID_IDENTIFIER_AUTHORITY IdentifierAuthority;
	/*0008*/ ULONG SubAuthority[0x1];
	/*000c*/
};

struct _SID_IDENTIFIER_AUTHORITY {
	/*0000*/ UCHAR Value[0x6];
	/*0006*/
};

struct _SILO_USER_SHARED_DATA {
	/*0000*/ ULONG ServiceSessionId;
	/*0004*/ ULONG ActiveConsoleId;
	/*0008*/ LONGLONG ConsoleSessionForegroundProcessId;
	/*0010*/ _NT_PRODUCT_TYPE NtProductType;
	/*0014*/ ULONG SuiteMask;
	/*0018*/ ULONG SharedUserSessionId;
	/*001c*/ UCHAR IsMultiSessionSku;
	/*001e*/ WCHAR NtSystemRoot[0x104];
	/*0226*/ USHORT UserModeGlobalLogger[0x10];
	/*0248*/
};

struct _SINGLE_LIST_ENTRY {
	/*0000*/ _SINGLE_LIST_ENTRY * Next;
	/*0008*/
};

struct _SINGLE_LIST_ENTRY32 {
	/*0000*/ ULONG Next;
	/*0004*/
};

struct _SLIST_ENTRY {
	/*0000*/ _SLIST_ENTRY * Next;
	/*0010*/
};

union _SLIST_HEADER {
	/*0000*/ ULONGLONG Alignment;
	/*0008*/ ULONGLONG Region;
	struct {
		/*0000*/ ULONGLONG Depth : 16; // 0x000000000000ffff;
		/*0000*/ ULONGLONG Sequence : 48; // 0xffffffffffff0000;
		/*0008*/ ULONGLONG Reserved : 04; // 0x000000000000000f;
		/*0008*/ ULONGLONG NextEntry : 60; // 0xfffffffffffffff0;
		/*0010*/
	} HeaderX64;
	/*0010*/
};

struct _STACK_TRACE_DATABASE {
	/*0000*/ CHAR Reserved[0x68];
	/*0000*/ _RTL_STACK_DATABASE_LOCK Lock;
	/*0068*/ void * Reserved2;
	/*0070*/ ULONGLONG PeakHashCollisionListLength;
	/*0078*/ void * LowerMemoryStart;
	/*0080*/ UCHAR PreCommitted;
	/*0081*/ UCHAR DumpInProgress;
	/*0088*/ void * CommitBase;
	/*0090*/ void * CurrentLowerCommitLimit;
	/*0098*/ void * CurrentUpperCommitLimit;
	/*00a0*/ CHAR * NextFreeLowerMemory;
	/*00a8*/ CHAR * NextFreeUpperMemory;
	/*00b0*/ ULONG NumberOfEntriesLookedUp;
	/*00b4*/ ULONG NumberOfEntriesAdded;
	/*00b8*/ _RTL_STACK_TRACE_ENTRY * * EntryIndexArray;
	/*00c0*/ ULONG NumberOfEntriesAllocated;
	/*00c4*/ ULONG NumberOfEntriesAvailable;
	/*00c8*/ ULONG NumberOfAllocationFailures;
	/*00d0*/ _SLIST_HEADER FreeLists[0x20];
	/*02d0*/ ULONG NumberOfBuckets;
	/*02d8*/ _RTL_STD_LIST_HEAD Buckets[0x1];
	/*02f0*/
};

struct _STRING {
	/*0000*/ USHORT Length;
	/*0002*/ USHORT MaximumLength;
	/*0008*/ CHAR * Buffer;
	/*0010*/
};

struct _STRING32 {
	/*0000*/ USHORT Length;
	/*0002*/ USHORT MaximumLength;
	/*0004*/ ULONG Buffer;
	/*0008*/
};

struct _STRING64 {
	/*0000*/ USHORT Length;
	/*0002*/ USHORT MaximumLength;
	/*0008*/ ULONGLONG Buffer;
	/*0010*/
};

struct _SYNCH_COUNTERS {
	/*0000*/ ULONG SpinLockAcquireCount;
	/*0004*/ ULONG SpinLockContentionCount;
	/*0008*/ ULONG SpinLockSpinCount;
	/*000c*/ ULONG IpiSendRequestBroadcastCount;
	/*0010*/ ULONG IpiSendRequestRoutineCount;
	/*0014*/ ULONG IpiSendSoftwareInterruptCount;
	/*0018*/ ULONG ExInitializeResourceCount;
	/*001c*/ ULONG ExReInitializeResourceCount;
	/*0020*/ ULONG ExDeleteResourceCount;
	/*0024*/ ULONG ExecutiveResourceAcquiresCount;
	/*0028*/ ULONG ExecutiveResourceContentionsCount;
	/*002c*/ ULONG ExecutiveResourceReleaseExclusiveCount;
	/*0030*/ ULONG ExecutiveResourceReleaseSharedCount;
	/*0034*/ ULONG ExecutiveResourceConvertsCount;
	/*0038*/ ULONG ExAcqResExclusiveAttempts;
	/*003c*/ ULONG ExAcqResExclusiveAcquiresExclusive;
	/*0040*/ ULONG ExAcqResExclusiveAcquiresExclusiveRecursive;
	/*0044*/ ULONG ExAcqResExclusiveWaits;
	/*0048*/ ULONG ExAcqResExclusiveNotAcquires;
	/*004c*/ ULONG ExAcqResSharedAttempts;
	/*0050*/ ULONG ExAcqResSharedAcquiresExclusive;
	/*0054*/ ULONG ExAcqResSharedAcquiresShared;
	/*0058*/ ULONG ExAcqResSharedAcquiresSharedRecursive;
	/*005c*/ ULONG ExAcqResSharedWaits;
	/*0060*/ ULONG ExAcqResSharedNotAcquires;
	/*0064*/ ULONG ExAcqResSharedStarveExclusiveAttempts;
	/*0068*/ ULONG ExAcqResSharedStarveExclusiveAcquiresExclusive;
	/*006c*/ ULONG ExAcqResSharedStarveExclusiveAcquiresShared;
	/*0070*/ ULONG ExAcqResSharedStarveExclusiveAcquiresSharedRecursive;
	/*0074*/ ULONG ExAcqResSharedStarveExclusiveWaits;
	/*0078*/ ULONG ExAcqResSharedStarveExclusiveNotAcquires;
	/*007c*/ ULONG ExAcqResSharedWaitForExclusiveAttempts;
	/*0080*/ ULONG ExAcqResSharedWaitForExclusiveAcquiresExclusive;
	/*0084*/ ULONG ExAcqResSharedWaitForExclusiveAcquiresShared;
	/*0088*/ ULONG ExAcqResSharedWaitForExclusiveAcquiresSharedRecursive;
	/*008c*/ ULONG ExAcqResSharedWaitForExclusiveWaits;
	/*0090*/ ULONG ExAcqResSharedWaitForExclusiveNotAcquires;
	/*0094*/ ULONG ExSetResOwnerPointerExclusive;
	/*0098*/ ULONG ExSetResOwnerPointerSharedNew;
	/*009c*/ ULONG ExSetResOwnerPointerSharedOld;
	/*00a0*/ ULONG ExTryToAcqExclusiveAttempts;
	/*00a4*/ ULONG ExTryToAcqExclusiveAcquires;
	/*00a8*/ ULONG ExBoostExclusiveOwner;
	/*00ac*/ ULONG ExBoostSharedOwners;
	/*00b0*/ ULONG ExEtwSynchTrackingNotificationsCount;
	/*00b4*/ ULONG ExEtwSynchTrackingNotificationsAccountedCount;
	/*00b8*/
};

enum _SYSTEM_DLL_TYPE {
	PsNativeSystemDll = 0x0,
	PsWowX86SystemDll = 0x1,
	PsWowArm32SystemDll = 0x2,
	PsWowAmd64SystemDll = 0x3,
	PsWowChpeX86SystemDll = 0x4,
	PsVsmEnclaveRuntimeDll = 0x5,
	PsSystemDllTotalTypes = 0x6
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

struct _SYSTEM_POWER_STATE_CONTEXT {
	/*0000*/ ULONG Reserved1 : 08; // 0x000000ff;
	/*0000*/ ULONG TargetSystemState : 04; // 0x00000f00;
	/*0000*/ ULONG EffectiveSystemState : 04; // 0x0000f000;
	/*0000*/ ULONG CurrentSystemState : 04; // 0x000f0000;
	/*0000*/ ULONG IgnoreHibernationPath : 01; // 0x00100000;
	/*0000*/ ULONG PseudoTransition : 01; // 0x00200000;
	/*0000*/ ULONG KernelSoftReboot : 01; // 0x00400000;
	/*0000*/ ULONG Reserved2 : 09; // 0xff800000;
	/*0000*/ ULONG ContextAsUlong;
	/*0004*/
};

struct _TEB {
	/*0000*/ _NT_TIB NtTib;
	/*0038*/ void * EnvironmentPointer;
	/*0040*/ _CLIENT_ID ClientId;
	/*0050*/ void * ActiveRpcHandle;
	/*0058*/ void * ThreadLocalStoragePointer;
	/*0060*/ _PEB * ProcessEnvironmentBlock;
	/*0068*/ ULONG LastErrorValue;
	/*006c*/ ULONG CountOfOwnedCriticalSections;
	/*0070*/ void * CsrClientThread;
	/*0078*/ void * Win32ThreadInfo;
	/*0080*/ ULONG User32Reserved[0x1a];
	/*00e8*/ ULONG UserReserved[0x5];
	/*0100*/ void * WOW32Reserved;
	/*0108*/ ULONG CurrentLocale;
	/*010c*/ ULONG FpSoftwareStatusRegister;
	/*0110*/ void * ReservedForDebuggerInstrumentation[0x10];
	/*0190*/ void * SystemReserved1[0x1e];
	/*0280*/ CHAR PlaceholderCompatibilityMode;
	/*0281*/ CHAR PlaceholderReserved[0xb];
	/*028c*/ ULONG ProxiedProcessId;
	/*0290*/ _ACTIVATION_CONTEXT_STACK _ActivationStack;
	/*02b8*/ UCHAR WorkingOnBehalfTicket[0x8];
	/*02c0*/ LONG ExceptionCode;
	/*02c4*/ UCHAR Padding0[0x4];
	/*02c8*/ _ACTIVATION_CONTEXT_STACK * ActivationContextStackPointer;
	/*02d0*/ ULONGLONG InstrumentationCallbackSp;
	/*02d8*/ ULONGLONG InstrumentationCallbackPreviousPc;
	/*02e0*/ ULONGLONG InstrumentationCallbackPreviousSp;
	/*02e8*/ ULONG TxFsContext;
	/*02ec*/ UCHAR InstrumentationCallbackDisabled;
	/*02ed*/ UCHAR Padding1[0x3];
	/*02f0*/ _GDI_TEB_BATCH GdiTebBatch;
	/*07d8*/ _CLIENT_ID RealClientId;
	/*07e8*/ void * GdiCachedProcessHandle;
	/*07f0*/ ULONG GdiClientPID;
	/*07f4*/ ULONG GdiClientTID;
	/*07f8*/ void * GdiThreadLocalInfo;
	/*0800*/ ULONGLONG Win32ClientInfo[0x3e];
	/*09f0*/ void * glDispatchTable[0xe9];
	/*1138*/ ULONGLONG glReserved1[0x1d];
	/*1220*/ void * glReserved2;
	/*1228*/ void * glSectionInfo;
	/*1230*/ void * glSection;
	/*1238*/ void * glTable;
	/*1240*/ void * glCurrentRC;
	/*1248*/ void * glContext;
	/*1250*/ ULONG LastStatusValue;
	/*1254*/ UCHAR Padding2[0x4];
	/*1258*/ _UNICODE_STRING StaticUnicodeString;
	/*1268*/ WCHAR StaticUnicodeBuffer[0x105];
	/*1472*/ UCHAR Padding3[0x6];
	/*1478*/ void * DeallocationStack;
	/*1480*/ void * TlsSlots[0x40];
	/*1680*/ _LIST_ENTRY TlsLinks;
	/*1690*/ void * Vdm;
	/*1698*/ void * ReservedForNtRpc;
	/*16a0*/ void * DbgSsReserved[0x2];
	/*16b0*/ ULONG HardErrorMode;
	/*16b4*/ UCHAR Padding4[0x4];
	/*16b8*/ void * Instrumentation[0xb];
	/*1710*/ _GUID ActivityId;
	/*1720*/ void * SubProcessTag;
	/*1728*/ void * PerflibData;
	/*1730*/ void * EtwTraceData;
	/*1738*/ void * WinSockData;
	/*1740*/ ULONG GdiBatchCount;
	/*1744*/ _PROCESSOR_NUMBER CurrentIdealProcessor;
	/*1744*/ ULONG IdealProcessorValue;
	/*1744*/ UCHAR ReservedPad0;
	/*1745*/ UCHAR ReservedPad1;
	/*1746*/ UCHAR ReservedPad2;
	/*1747*/ UCHAR IdealProcessor;
	/*1748*/ ULONG GuaranteedStackBytes;
	/*174c*/ UCHAR Padding5[0x4];
	/*1750*/ void * ReservedForPerf;
	/*1758*/ void * ReservedForOle;
	/*1760*/ ULONG WaitingOnLoaderLock;
	/*1764*/ UCHAR Padding6[0x4];
	/*1768*/ void * SavedPriorityState;
	/*1770*/ ULONGLONG ReservedForCodeCoverage;
	/*1778*/ void * ThreadPoolData;
	/*1780*/ void * * TlsExpansionSlots;
	/*1788*/ void * DeallocationBStore;
	/*1790*/ void * BStoreLimit;
	/*1798*/ ULONG MuiGeneration;
	/*179c*/ ULONG IsImpersonating;
	/*17a0*/ void * NlsCache;
	/*17a8*/ void * pShimData;
	/*17b0*/ USHORT HeapVirtualAffinity;
	/*17b2*/ USHORT LowFragHeapDataSlot;
	/*17b4*/ UCHAR Padding7[0x4];
	/*17b8*/ void * CurrentTransactionHandle;
	/*17c0*/ _TEB_ACTIVE_FRAME * ActiveFrame;
	/*17c8*/ void * FlsData;
	/*17d0*/ void * PreferredLanguages;
	/*17d8*/ void * UserPrefLanguages;
	/*17e0*/ void * MergedPrefLanguages;
	/*17e8*/ ULONG MuiImpersonation;
	/*17ec*/ USHORT volatile CrossTebFlags;
	/*17ec*/ USHORT SpareCrossTebBits : 16; // 0xffff;
	/*17ee*/ USHORT SameTebFlags;
	/*17ee*/ USHORT SafeThunkCall : 01; // 0x0001;
	/*17ee*/ USHORT InDebugPrint : 01; // 0x0002;
	/*17ee*/ USHORT HasFiberData : 01; // 0x0004;
	/*17ee*/ USHORT SkipThreadAttach : 01; // 0x0008;
	/*17ee*/ USHORT WerInShipAssertCode : 01; // 0x0010;
	/*17ee*/ USHORT RanProcessInit : 01; // 0x0020;
	/*17ee*/ USHORT ClonedThread : 01; // 0x0040;
	/*17ee*/ USHORT SuppressDebugMsg : 01; // 0x0080;
	/*17ee*/ USHORT DisableUserStackWalk : 01; // 0x0100;
	/*17ee*/ USHORT RtlExceptionAttached : 01; // 0x0200;
	/*17ee*/ USHORT InitialThread : 01; // 0x0400;
	/*17ee*/ USHORT SessionAware : 01; // 0x0800;
	/*17ee*/ USHORT LoadOwner : 01; // 0x1000;
	/*17ee*/ USHORT LoaderWorker : 01; // 0x2000;
	/*17ee*/ USHORT SkipLoaderInit : 01; // 0x4000;
	/*17ee*/ USHORT SpareSameTebBits : 01; // 0x8000;
	/*17f0*/ void * TxnScopeEnterCallback;
	/*17f8*/ void * TxnScopeExitCallback;
	/*1800*/ void * TxnScopeContext;
	/*1808*/ ULONG LockCount;
	/*180c*/ LONG WowTebOffset;
	/*1810*/ void * ResourceRetValue;
	/*1818*/ void * ReservedForWdf;
	/*1820*/ ULONGLONG ReservedForCrt;
	/*1828*/ _GUID EffectiveContainerId;
	/*1838*/
};

struct _TEB32 {
	/*0000*/ _NT_TIB32 NtTib;
	/*001c*/ ULONG EnvironmentPointer;
	/*0020*/ _CLIENT_ID32 ClientId;
	/*0028*/ ULONG ActiveRpcHandle;
	/*002c*/ ULONG ThreadLocalStoragePointer;
	/*0030*/ ULONG ProcessEnvironmentBlock;
	/*0034*/ ULONG LastErrorValue;
	/*0038*/ ULONG CountOfOwnedCriticalSections;
	/*003c*/ ULONG CsrClientThread;
	/*0040*/ ULONG Win32ThreadInfo;
	/*0044*/ ULONG User32Reserved[0x1a];
	/*00ac*/ ULONG UserReserved[0x5];
	/*00c0*/ ULONG WOW32Reserved;
	/*00c4*/ ULONG CurrentLocale;
	/*00c8*/ ULONG FpSoftwareStatusRegister;
	/*00cc*/ ULONG ReservedForDebuggerInstrumentation[0x10];
	/*010c*/ ULONG SystemReserved1[0x1a];
	/*0174*/ CHAR PlaceholderCompatibilityMode;
	/*0175*/ CHAR PlaceholderReserved[0xb];
	/*0180*/ ULONG ProxiedProcessId;
	/*0184*/ _ACTIVATION_CONTEXT_STACK32 _ActivationStack;
	/*019c*/ UCHAR WorkingOnBehalfTicket[0x8];
	/*01a4*/ LONG ExceptionCode;
	/*01a8*/ ULONG ActivationContextStackPointer;
	/*01ac*/ ULONG InstrumentationCallbackSp;
	/*01b0*/ ULONG InstrumentationCallbackPreviousPc;
	/*01b4*/ ULONG InstrumentationCallbackPreviousSp;
	/*01b8*/ UCHAR InstrumentationCallbackDisabled;
	/*01b9*/ UCHAR SpareBytes[0x17];
	/*01d0*/ ULONG TxFsContext;
	/*01d4*/ _GDI_TEB_BATCH32 GdiTebBatch;
	/*06b4*/ _CLIENT_ID32 RealClientId;
	/*06bc*/ ULONG GdiCachedProcessHandle;
	/*06c0*/ ULONG GdiClientPID;
	/*06c4*/ ULONG GdiClientTID;
	/*06c8*/ ULONG GdiThreadLocalInfo;
	/*06cc*/ ULONG Win32ClientInfo[0x3e];
	/*07c4*/ ULONG glDispatchTable[0xe9];
	/*0b68*/ ULONG glReserved1[0x1d];
	/*0bdc*/ ULONG glReserved2;
	/*0be0*/ ULONG glSectionInfo;
	/*0be4*/ ULONG glSection;
	/*0be8*/ ULONG glTable;
	/*0bec*/ ULONG glCurrentRC;
	/*0bf0*/ ULONG glContext;
	/*0bf4*/ ULONG LastStatusValue;
	/*0bf8*/ _STRING32 StaticUnicodeString;
	/*0c00*/ WCHAR StaticUnicodeBuffer[0x105];
	/*0e0c*/ ULONG DeallocationStack;
	/*0e10*/ ULONG TlsSlots[0x40];
	/*0f10*/ LIST_ENTRY32 TlsLinks;
	/*0f18*/ ULONG Vdm;
	/*0f1c*/ ULONG ReservedForNtRpc;
	/*0f20*/ ULONG DbgSsReserved[0x2];
	/*0f28*/ ULONG HardErrorMode;
	/*0f2c*/ ULONG Instrumentation[0x9];
	/*0f50*/ _GUID ActivityId;
	/*0f60*/ ULONG SubProcessTag;
	/*0f64*/ ULONG PerflibData;
	/*0f68*/ ULONG EtwTraceData;
	/*0f6c*/ ULONG WinSockData;
	/*0f70*/ ULONG GdiBatchCount;
	/*0f74*/ _PROCESSOR_NUMBER CurrentIdealProcessor;
	/*0f74*/ ULONG IdealProcessorValue;
	/*0f74*/ UCHAR ReservedPad0;
	/*0f75*/ UCHAR ReservedPad1;
	/*0f76*/ UCHAR ReservedPad2;
	/*0f77*/ UCHAR IdealProcessor;
	/*0f78*/ ULONG GuaranteedStackBytes;
	/*0f7c*/ ULONG ReservedForPerf;
	/*0f80*/ ULONG ReservedForOle;
	/*0f84*/ ULONG WaitingOnLoaderLock;
	/*0f88*/ ULONG SavedPriorityState;
	/*0f8c*/ ULONG ReservedForCodeCoverage;
	/*0f90*/ ULONG ThreadPoolData;
	/*0f94*/ ULONG TlsExpansionSlots;
	/*0f98*/ ULONG MuiGeneration;
	/*0f9c*/ ULONG IsImpersonating;
	/*0fa0*/ ULONG NlsCache;
	/*0fa4*/ ULONG pShimData;
	/*0fa8*/ USHORT HeapVirtualAffinity;
	/*0faa*/ USHORT LowFragHeapDataSlot;
	/*0fac*/ ULONG CurrentTransactionHandle;
	/*0fb0*/ ULONG ActiveFrame;
	/*0fb4*/ ULONG FlsData;
	/*0fb8*/ ULONG PreferredLanguages;
	/*0fbc*/ ULONG UserPrefLanguages;
	/*0fc0*/ ULONG MergedPrefLanguages;
	/*0fc4*/ ULONG MuiImpersonation;
	/*0fc8*/ USHORT volatile CrossTebFlags;
	/*0fc8*/ USHORT SpareCrossTebBits : 16; // 0xffff;
	/*0fca*/ USHORT SameTebFlags;
	/*0fca*/ USHORT SafeThunkCall : 01; // 0x0001;
	/*0fca*/ USHORT InDebugPrint : 01; // 0x0002;
	/*0fca*/ USHORT HasFiberData : 01; // 0x0004;
	/*0fca*/ USHORT SkipThreadAttach : 01; // 0x0008;
	/*0fca*/ USHORT WerInShipAssertCode : 01; // 0x0010;
	/*0fca*/ USHORT RanProcessInit : 01; // 0x0020;
	/*0fca*/ USHORT ClonedThread : 01; // 0x0040;
	/*0fca*/ USHORT SuppressDebugMsg : 01; // 0x0080;
	/*0fca*/ USHORT DisableUserStackWalk : 01; // 0x0100;
	/*0fca*/ USHORT RtlExceptionAttached : 01; // 0x0200;
	/*0fca*/ USHORT InitialThread : 01; // 0x0400;
	/*0fca*/ USHORT SessionAware : 01; // 0x0800;
	/*0fca*/ USHORT LoadOwner : 01; // 0x1000;
	/*0fca*/ USHORT LoaderWorker : 01; // 0x2000;
	/*0fca*/ USHORT SkipLoaderInit : 01; // 0x4000;
	/*0fca*/ USHORT SpareSameTebBits : 01; // 0x8000;
	/*0fcc*/ ULONG TxnScopeEnterCallback;
	/*0fd0*/ ULONG TxnScopeExitCallback;
	/*0fd4*/ ULONG TxnScopeContext;
	/*0fd8*/ ULONG LockCount;
	/*0fdc*/ LONG WowTebOffset;
	/*0fe0*/ ULONG ResourceRetValue;
	/*0fe4*/ ULONG ReservedForWdf;
	/*0fe8*/ ULONGLONG ReservedForCrt;
	/*0ff0*/ _GUID EffectiveContainerId;
	/*1000*/
};

struct _TEB64 {
	/*0000*/ _NT_TIB64 NtTib;
	/*0038*/ ULONGLONG EnvironmentPointer;
	/*0040*/ _CLIENT_ID64 ClientId;
	/*0050*/ ULONGLONG ActiveRpcHandle;
	/*0058*/ ULONGLONG ThreadLocalStoragePointer;
	/*0060*/ ULONGLONG ProcessEnvironmentBlock;
	/*0068*/ ULONG LastErrorValue;
	/*006c*/ ULONG CountOfOwnedCriticalSections;
	/*0070*/ ULONGLONG CsrClientThread;
	/*0078*/ ULONGLONG Win32ThreadInfo;
	/*0080*/ ULONG User32Reserved[0x1a];
	/*00e8*/ ULONG UserReserved[0x5];
	/*0100*/ ULONGLONG WOW32Reserved;
	/*0108*/ ULONG CurrentLocale;
	/*010c*/ ULONG FpSoftwareStatusRegister;
	/*0110*/ ULONGLONG ReservedForDebuggerInstrumentation[0x10];
	/*0190*/ ULONGLONG SystemReserved1[0x1e];
	/*0280*/ CHAR PlaceholderCompatibilityMode;
	/*0281*/ CHAR PlaceholderReserved[0xb];
	/*028c*/ ULONG ProxiedProcessId;
	/*0290*/ _ACTIVATION_CONTEXT_STACK64 _ActivationStack;
	/*02b8*/ UCHAR WorkingOnBehalfTicket[0x8];
	/*02c0*/ LONG ExceptionCode;
	/*02c4*/ UCHAR Padding0[0x4];
	/*02c8*/ ULONGLONG ActivationContextStackPointer;
	/*02d0*/ ULONGLONG InstrumentationCallbackSp;
	/*02d8*/ ULONGLONG InstrumentationCallbackPreviousPc;
	/*02e0*/ ULONGLONG InstrumentationCallbackPreviousSp;
	/*02e8*/ ULONG TxFsContext;
	/*02ec*/ UCHAR InstrumentationCallbackDisabled;
	/*02ed*/ UCHAR Padding1[0x3];
	/*02f0*/ _GDI_TEB_BATCH64 GdiTebBatch;
	/*07d8*/ _CLIENT_ID64 RealClientId;
	/*07e8*/ ULONGLONG GdiCachedProcessHandle;
	/*07f0*/ ULONG GdiClientPID;
	/*07f4*/ ULONG GdiClientTID;
	/*07f8*/ ULONGLONG GdiThreadLocalInfo;
	/*0800*/ ULONGLONG Win32ClientInfo[0x3e];
	/*09f0*/ ULONGLONG glDispatchTable[0xe9];
	/*1138*/ ULONGLONG glReserved1[0x1d];
	/*1220*/ ULONGLONG glReserved2;
	/*1228*/ ULONGLONG glSectionInfo;
	/*1230*/ ULONGLONG glSection;
	/*1238*/ ULONGLONG glTable;
	/*1240*/ ULONGLONG glCurrentRC;
	/*1248*/ ULONGLONG glContext;
	/*1250*/ ULONG LastStatusValue;
	/*1254*/ UCHAR Padding2[0x4];
	/*1258*/ _STRING64 StaticUnicodeString;
	/*1268*/ WCHAR StaticUnicodeBuffer[0x105];
	/*1472*/ UCHAR Padding3[0x6];
	/*1478*/ ULONGLONG DeallocationStack;
	/*1480*/ ULONGLONG TlsSlots[0x40];
	/*1680*/ LIST_ENTRY64 TlsLinks;
	/*1690*/ ULONGLONG Vdm;
	/*1698*/ ULONGLONG ReservedForNtRpc;
	/*16a0*/ ULONGLONG DbgSsReserved[0x2];
	/*16b0*/ ULONG HardErrorMode;
	/*16b4*/ UCHAR Padding4[0x4];
	/*16b8*/ ULONGLONG Instrumentation[0xb];
	/*1710*/ _GUID ActivityId;
	/*1720*/ ULONGLONG SubProcessTag;
	/*1728*/ ULONGLONG PerflibData;
	/*1730*/ ULONGLONG EtwTraceData;
	/*1738*/ ULONGLONG WinSockData;
	/*1740*/ ULONG GdiBatchCount;
	/*1744*/ _PROCESSOR_NUMBER CurrentIdealProcessor;
	/*1744*/ ULONG IdealProcessorValue;
	/*1744*/ UCHAR ReservedPad0;
	/*1745*/ UCHAR ReservedPad1;
	/*1746*/ UCHAR ReservedPad2;
	/*1747*/ UCHAR IdealProcessor;
	/*1748*/ ULONG GuaranteedStackBytes;
	/*174c*/ UCHAR Padding5[0x4];
	/*1750*/ ULONGLONG ReservedForPerf;
	/*1758*/ ULONGLONG ReservedForOle;
	/*1760*/ ULONG WaitingOnLoaderLock;
	/*1764*/ UCHAR Padding6[0x4];
	/*1768*/ ULONGLONG SavedPriorityState;
	/*1770*/ ULONGLONG ReservedForCodeCoverage;
	/*1778*/ ULONGLONG ThreadPoolData;
	/*1780*/ ULONGLONG TlsExpansionSlots;
	/*1788*/ ULONGLONG DeallocationBStore;
	/*1790*/ ULONGLONG BStoreLimit;
	/*1798*/ ULONG MuiGeneration;
	/*179c*/ ULONG IsImpersonating;
	/*17a0*/ ULONGLONG NlsCache;
	/*17a8*/ ULONGLONG pShimData;
	/*17b0*/ USHORT HeapVirtualAffinity;
	/*17b2*/ USHORT LowFragHeapDataSlot;
	/*17b4*/ UCHAR Padding7[0x4];
	/*17b8*/ ULONGLONG CurrentTransactionHandle;
	/*17c0*/ ULONGLONG ActiveFrame;
	/*17c8*/ ULONGLONG FlsData;
	/*17d0*/ ULONGLONG PreferredLanguages;
	/*17d8*/ ULONGLONG UserPrefLanguages;
	/*17e0*/ ULONGLONG MergedPrefLanguages;
	/*17e8*/ ULONG MuiImpersonation;
	/*17ec*/ USHORT volatile CrossTebFlags;
	/*17ec*/ USHORT SpareCrossTebBits : 16; // 0xffff;
	/*17ee*/ USHORT SameTebFlags;
	/*17ee*/ USHORT SafeThunkCall : 01; // 0x0001;
	/*17ee*/ USHORT InDebugPrint : 01; // 0x0002;
	/*17ee*/ USHORT HasFiberData : 01; // 0x0004;
	/*17ee*/ USHORT SkipThreadAttach : 01; // 0x0008;
	/*17ee*/ USHORT WerInShipAssertCode : 01; // 0x0010;
	/*17ee*/ USHORT RanProcessInit : 01; // 0x0020;
	/*17ee*/ USHORT ClonedThread : 01; // 0x0040;
	/*17ee*/ USHORT SuppressDebugMsg : 01; // 0x0080;
	/*17ee*/ USHORT DisableUserStackWalk : 01; // 0x0100;
	/*17ee*/ USHORT RtlExceptionAttached : 01; // 0x0200;
	/*17ee*/ USHORT InitialThread : 01; // 0x0400;
	/*17ee*/ USHORT SessionAware : 01; // 0x0800;
	/*17ee*/ USHORT LoadOwner : 01; // 0x1000;
	/*17ee*/ USHORT LoaderWorker : 01; // 0x2000;
	/*17ee*/ USHORT SkipLoaderInit : 01; // 0x4000;
	/*17ee*/ USHORT SpareSameTebBits : 01; // 0x8000;
	/*17f0*/ ULONGLONG TxnScopeEnterCallback;
	/*17f8*/ ULONGLONG TxnScopeExitCallback;
	/*1800*/ ULONGLONG TxnScopeContext;
	/*1808*/ ULONG LockCount;
	/*180c*/ LONG WowTebOffset;
	/*1810*/ ULONGLONG ResourceRetValue;
	/*1818*/ ULONGLONG ReservedForWdf;
	/*1820*/ ULONGLONG ReservedForCrt;
	/*1828*/ _GUID EffectiveContainerId;
	/*1838*/
};

struct _TEB_ACTIVE_FRAME {
	/*0000*/ ULONG Flags;
	/*0008*/ _TEB_ACTIVE_FRAME * Previous;
	/*0010*/ _TEB_ACTIVE_FRAME_CONTEXT const * Context;
	/*0018*/
};

struct _TEB_ACTIVE_FRAME_CONTEXT {
	/*0000*/ ULONG Flags;
	/*0008*/ CHAR const * FrameName;
	/*0010*/
};

struct _TERMINATION_PORT {
	/*0000*/ _TERMINATION_PORT * Next;
	/*0008*/ void * Port;
	/*0010*/
};

struct _THREAD_ENERGY_VALUES {
	/*0000*/ ULONGLONG Cycles[0x4][0x2];
	/*0040*/ ULONGLONG AttributedCycles[0x4][0x2];
	/*0080*/ ULONGLONG WorkOnBehalfCycles[0x4][0x2];
	/*00c0*/ _TIMELINE_BITMAP CpuTimeline;
	/*00c8*/
};

struct _THREAD_PERFORMANCE_DATA {
	/*0000*/ USHORT Size;
	/*0002*/ USHORT Version;
	/*0004*/ _PROCESSOR_NUMBER ProcessorNumber;
	/*0008*/ ULONG ContextSwitches;
	/*000c*/ ULONG HwCountersCount;
	/*0010*/ ULONGLONG volatile UpdateCount;
	/*0018*/ ULONGLONG WaitReasonBitMap;
	/*0020*/ ULONGLONG HardwareCounters;
	/*0028*/ _COUNTER_READING CycleTime;
	/*0040*/ _COUNTER_READING HwCounters[0x10];
	/*01c0*/
};

union _TIMELINE_BITMAP {
	/*0000*/ ULONGLONG Value;
	/*0000*/ ULONG EndTime;
	/*0004*/ ULONG Bitmap;
	/*0008*/
};

struct _TP_CALLBACK_ENVIRON_V3 {
	/*0000*/ ULONG Version;
	/*0008*/ _TP_POOL * Pool;
	/*0010*/ _TP_CLEANUP_GROUP * CleanupGroup;
	/*0018*/ void (* CleanupGroupCancelCallback)( void * , void * );
	/*0020*/ void * RaceDll;
	/*0028*/ _ACTIVATION_CONTEXT * ActivationContext;
	/*0030*/ void (* FinalizationCallback)( _TP_CALLBACK_INSTANCE * , void * );
	union {
		/*0038*/ ULONG Flags;
		struct {
			/*0038*/ ULONG LongFunction : 01; // 0x00000001;
			/*0038*/ ULONG Persistent : 01; // 0x00000002;
			/*0038*/ ULONG Private : 30; // 0xfffffffc;
			/*003c*/
		} s;
		/*003c*/
	} u;
	/*003c*/ _TP_CALLBACK_PRIORITY CallbackPriority;
	/*0040*/ ULONG Size;
	/*0048*/
};

struct _TP_CALLBACK_INSTANCE;

enum _TP_CALLBACK_PRIORITY {
	TP_CALLBACK_PRIORITY_HIGH = 0x0,
	TP_CALLBACK_PRIORITY_NORMAL = 0x1,
	TP_CALLBACK_PRIORITY_LOW = 0x2,
	TP_CALLBACK_PRIORITY_INVALID = 0x3,
	TP_CALLBACK_PRIORITY_COUNT = 0x3
};

struct _TP_CLEANUP_GROUP;

struct _TP_POOL;

enum _TRACE_INFORMATION_CLASS {
	TraceIdClass = 0x0,
	TraceHandleClass = 0x1,
	TraceEnableFlagsClass = 0x2,
	TraceEnableLevelClass = 0x3,
	GlobalLoggerHandleClass = 0x4,
	EventLoggerHandleClass = 0x5,
	AllLoggerHandlesClass = 0x6,
	TraceHandleByNameClass = 0x7,
	LoggerEventsLostClass = 0x8,
	TraceSessionSettingsClass = 0x9,
	LoggerEventsLoggedClass = 0xa,
	DiskIoNotifyRoutinesClass = 0xb,
	TraceInformationClassReserved1 = 0xc,
	AllPossibleNotifyRoutinesClass = 0xc,
	FltIoNotifyRoutinesClass = 0xd,
	TraceInformationClassReserved2 = 0xe,
	WdfNotifyRoutinesClass = 0xf,
	MaxTraceInformationClass = 0x10
};

struct _TRUSTLET_COLLABORATION_ID {
	/*0000*/ ULONGLONG Value[0x2];
	/*0010*/
};

struct _TRUSTLET_MAILBOX_KEY {
	/*0000*/ ULONGLONG SecretValue[0x2];
	/*0010*/
};

struct _TXN_PARAMETER_BLOCK {
	/*0000*/ USHORT Length;
	/*0002*/ USHORT TxFsContext;
	/*0008*/ void * TransactionObject;
	/*0010*/
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

struct _UMS_CONTROL_BLOCK {
	/*0000*/ _RTL_UMS_CONTEXT * UmsContext;
	/*0008*/ _SINGLE_LIST_ENTRY * CompletionListEntry;
	/*0010*/ _KEVENT * CompletionListEvent;
	/*0018*/ ULONG ServiceSequenceNumber;
	/*0020*/ _KQUEUE UmsQueue;
	/*0060*/ _LIST_ENTRY QueueEntry;
	/*0070*/ _RTL_UMS_CONTEXT * YieldingUmsContext;
	/*0078*/ void * YieldingParam;
	/*0080*/ void * UmsTeb;
	/*0020*/ _KQUEUE * UmsAssociatedQueue;
	/*0028*/ _LIST_ENTRY * UmsQueueListEntry;
	/*0030*/ _KEVENT UmsWaitEvent;
	/*0048*/ void * StagingArea;
	/*0050*/ ULONG UmsPrimaryDeliveredContext : 01; // 0x00000001;
	/*0050*/ ULONG UmsAssociatedQueueUsed : 01; // 0x00000002;
	/*0050*/ ULONG UmsThreadParked : 01; // 0x00000004;
	/*0050*/ ULONG UmsFlags;
	/*0088*/
};

struct _UNICODE_STRING {
	/*0000*/ USHORT Length;
	/*0002*/ USHORT MaximumLength;
	/*0008*/ WCHAR * Buffer;
	/*0010*/
};

enum _USER_ACTIVITY_PRESENCE {
	PowerUserPresent = 0x0,
	PowerUserNotPresent = 0x1,
	PowerUserInactive = 0x2,
	PowerUserMaximum = 0x3,
	PowerUserInvalid = 0x3
};

struct _USER_MEMORY_CACHE_ENTRY {
	/*0000*/ _SLIST_HEADER UserBlocks;
	/*0010*/ ULONG volatile AvailableBlocks;
	/*0014*/ ULONG volatile MinimumDepth;
	/*0018*/ ULONG volatile CacheShiftThreshold;
	/*001c*/ USHORT volatile Allocations;
	/*001e*/ USHORT volatile Frees;
	/*0020*/ USHORT volatile CacheHits;
	/*0030*/
};

struct _VPB {
	/*0000*/ SHORT Type;
	/*0002*/ SHORT Size;
	/*0004*/ USHORT Flags;
	/*0006*/ USHORT VolumeLabelLength;
	/*0008*/ _DEVICE_OBJECT * DeviceObject;
	/*0010*/ _DEVICE_OBJECT * RealDevice;
	/*0018*/ ULONG SerialNumber;
	/*001c*/ ULONG ReferenceCount;
	/*0020*/ WCHAR VolumeLabel[0x20];
	/*0060*/
};

struct _WAIT_CONTEXT_BLOCK {
	/*0000*/ _KDEVICE_QUEUE_ENTRY WaitQueueEntry;
	/*0000*/ _LIST_ENTRY DmaWaitEntry;
	/*0010*/ ULONG NumberOfChannels;
	/*0014*/ ULONG SyncCallback : 01; // 0x00000001;
	/*0014*/ ULONG DmaContext : 01; // 0x00000002;
	/*0014*/ ULONG ZeroMapRegisters : 01; // 0x00000004;
	/*0014*/ ULONG Reserved : 29; // 0xfffffff8;
	/*0018*/ _IO_ALLOCATION_ACTION (* DeviceRoutine)( _DEVICE_OBJECT * , _IRP * , void * , void * );
	/*0020*/ void * DeviceContext;
	/*0028*/ ULONG NumberOfMapRegisters;
	/*0030*/ void * DeviceObject;
	/*0038*/ void * CurrentIrp;
	/*0040*/ _KDPC * BufferChainingDpc;
	/*0048*/
};

enum _WHEA_ERROR_PACKET_DATA_FORMAT {
	WheaDataFormatIPFSalRecord = 0x0,
	WheaDataFormatXPFMCA = 0x1,
	WheaDataFormatMemory = 0x2,
	WheaDataFormatPCIExpress = 0x3,
	WheaDataFormatNMIPort = 0x4,
	WheaDataFormatPCIXBus = 0x5,
	WheaDataFormatPCIXDevice = 0x6,
	WheaDataFormatGeneric = 0x7,
	WheaDataFormatMax = 0x8
};

union _WHEA_ERROR_PACKET_FLAGS {
	/*0000*/ ULONG PreviousError : 01; // 0x00000001;
	/*0000*/ ULONG Reserved1 : 01; // 0x00000002;
	/*0000*/ ULONG HypervisorError : 01; // 0x00000004;
	/*0000*/ ULONG Simulated : 01; // 0x00000008;
	/*0000*/ ULONG PlatformPfaControl : 01; // 0x00000010;
	/*0000*/ ULONG PlatformDirectedOffline : 01; // 0x00000020;
	/*0000*/ ULONG Reserved2 : 26; // 0xffffffc0;
	/*0000*/ ULONG AsULONG;
	/*0004*/
};

struct _WHEA_ERROR_PACKET_V2 {
	/*0000*/ ULONG Signature;
	/*0004*/ ULONG Version;
	/*0008*/ ULONG Length;
	/*000c*/ _WHEA_ERROR_PACKET_FLAGS Flags;
	/*0010*/ _WHEA_ERROR_TYPE ErrorType;
	/*0014*/ _WHEA_ERROR_SEVERITY ErrorSeverity;
	/*0018*/ ULONG ErrorSourceId;
	/*001c*/ _WHEA_ERROR_SOURCE_TYPE ErrorSourceType;
	/*0020*/ _GUID NotifyType;
	/*0030*/ ULONGLONG Context;
	/*0038*/ _WHEA_ERROR_PACKET_DATA_FORMAT DataFormat;
	/*003c*/ ULONG Reserved1;
	/*0040*/ ULONG DataOffset;
	/*0044*/ ULONG DataLength;
	/*0048*/ ULONG PshedDataOffset;
	/*004c*/ ULONG PshedDataLength;
	/*0050*/
};

struct _WHEA_ERROR_RECORD {
	/*0000*/ _WHEA_ERROR_RECORD_HEADER Header;
	/*0080*/ _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR SectionDescriptor[0x1];
	/*00c8*/
};

struct _WHEA_ERROR_RECORD_HEADER {
	/*0000*/ ULONG Signature;
	/*0004*/ _WHEA_REVISION Revision;
	/*0006*/ ULONG SignatureEnd;
	/*000a*/ USHORT SectionCount;
	/*000c*/ _WHEA_ERROR_SEVERITY Severity;
	/*0010*/ _WHEA_ERROR_RECORD_HEADER_VALIDBITS ValidBits;
	/*0014*/ ULONG Length;
	/*0018*/ _WHEA_TIMESTAMP Timestamp;
	/*0020*/ _GUID PlatformId;
	/*0030*/ _GUID PartitionId;
	/*0040*/ _GUID CreatorId;
	/*0050*/ _GUID NotifyType;
	/*0060*/ ULONGLONG RecordId;
	/*0068*/ _WHEA_ERROR_RECORD_HEADER_FLAGS Flags;
	/*006c*/ _WHEA_PERSISTENCE_INFO PersistenceInfo;
	/*0074*/ UCHAR Reserved[0xc];
	/*0080*/
};

union _WHEA_ERROR_RECORD_HEADER_FLAGS {
	/*0000*/ ULONG Recovered : 01; // 0x00000001;
	/*0000*/ ULONG PreviousError : 01; // 0x00000002;
	/*0000*/ ULONG Simulated : 01; // 0x00000004;
	/*0000*/ ULONG Reserved : 29; // 0xfffffff8;
	/*0000*/ ULONG AsULONG;
	/*0004*/
};

union _WHEA_ERROR_RECORD_HEADER_VALIDBITS {
	/*0000*/ ULONG PlatformId : 01; // 0x00000001;
	/*0000*/ ULONG Timestamp : 01; // 0x00000002;
	/*0000*/ ULONG PartitionId : 01; // 0x00000004;
	/*0000*/ ULONG Reserved : 29; // 0xfffffff8;
	/*0000*/ ULONG AsULONG;
	/*0004*/
};

struct _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR {
	/*0000*/ ULONG SectionOffset;
	/*0004*/ ULONG SectionLength;
	/*0008*/ _WHEA_REVISION Revision;
	/*000a*/ _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS ValidBits;
	/*000b*/ UCHAR Reserved;
	/*000c*/ _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS Flags;
	/*0010*/ _GUID SectionType;
	/*0020*/ _GUID FRUId;
	/*0030*/ _WHEA_ERROR_SEVERITY SectionSeverity;
	/*0034*/ CHAR FRUText[0x14];
	/*0048*/
};

union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS {
	/*0000*/ ULONG Primary : 01; // 0x00000001;
	/*0000*/ ULONG ContainmentWarning : 01; // 0x00000002;
	/*0000*/ ULONG Reset : 01; // 0x00000004;
	/*0000*/ ULONG ThresholdExceeded : 01; // 0x00000008;
	/*0000*/ ULONG ResourceNotAvailable : 01; // 0x00000010;
	/*0000*/ ULONG LatentError : 01; // 0x00000020;
	/*0000*/ ULONG Propagated : 01; // 0x00000040;
	/*0000*/ ULONG Reserved : 25; // 0xffffff80;
	/*0000*/ ULONG AsULONG;
	/*0004*/
};

union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS {
	/*0000*/ UCHAR FRUId : 01; // 0x01;
	/*0000*/ UCHAR FRUText : 01; // 0x02;
	/*0000*/ UCHAR Reserved : 06; // 0xfc;
	/*0000*/ UCHAR AsUCHAR;
	/*0001*/
};

enum _WHEA_ERROR_SEVERITY {
	WheaErrSevRecoverable = 0x0,
	WheaErrSevFatal = 0x1,
	WheaErrSevCorrected = 0x2,
	WheaErrSevInformational = 0x3
};

enum _WHEA_ERROR_SOURCE_TYPE {
	WheaErrSrcTypeMCE = 0x0,
	WheaErrSrcTypeCMC = 0x1,
	WheaErrSrcTypeCPE = 0x2,
	WheaErrSrcTypeNMI = 0x3,
	WheaErrSrcTypePCIe = 0x4,
	WheaErrSrcTypeGeneric = 0x5,
	WheaErrSrcTypeINIT = 0x6,
	WheaErrSrcTypeBOOT = 0x7,
	WheaErrSrcTypeSCIGeneric = 0x8,
	WheaErrSrcTypeIPFMCA = 0x9,
	WheaErrSrcTypeIPFCMC = 0xa,
	WheaErrSrcTypeIPFCPE = 0xb,
	WheaErrSrcTypeGenericV2 = 0xc,
	WheaErrSrcTypeSCIGenericV2 = 0xd,
	WheaErrSrcTypeMax = 0xe
};

enum _WHEA_ERROR_TYPE {
	WheaErrTypeProcessor = 0x0,
	WheaErrTypeMemory = 0x1,
	WheaErrTypePCIExpress = 0x2,
	WheaErrTypeNMI = 0x3,
	WheaErrTypePCIXBus = 0x4,
	WheaErrTypePCIXDevice = 0x5,
	WheaErrTypeGeneric = 0x6
};

union _WHEA_PERSISTENCE_INFO {
	/*0000*/ ULONGLONG Signature : 16; // 0x000000000000ffff;
	/*0000*/ ULONGLONG Length : 24; // 0x000000ffffff0000;
	/*0000*/ ULONGLONG Identifier : 16; // 0x00ffff0000000000;
	/*0000*/ ULONGLONG Attributes : 02; // 0x0300000000000000;
	/*0000*/ ULONGLONG DoNotLog : 01; // 0x0400000000000000;
	/*0000*/ ULONGLONG Reserved : 05; // 0xf800000000000000;
	/*0000*/ ULONGLONG AsULONGLONG;
	/*0008*/
};

union _WHEA_REVISION {
	/*0000*/ UCHAR MinorRevision;
	/*0001*/ UCHAR MajorRevision;
	/*0000*/ USHORT AsUSHORT;
	/*0002*/
};

union _WHEA_TIMESTAMP {
	/*0000*/ ULONGLONG Seconds : 08; // 0x00000000000000ff;
	/*0000*/ ULONGLONG Minutes : 08; // 0x000000000000ff00;
	/*0000*/ ULONGLONG Hours : 08; // 0x0000000000ff0000;
	/*0000*/ ULONGLONG Precise : 01; // 0x0000000001000000;
	/*0000*/ ULONGLONG Reserved : 07; // 0x00000000fe000000;
	/*0000*/ ULONGLONG Day : 08; // 0x000000ff00000000;
	/*0000*/ ULONGLONG Month : 08; // 0x0000ff0000000000;
	/*0000*/ ULONGLONG Year : 08; // 0x00ff000000000000;
	/*0000*/ ULONGLONG Century : 08; // 0xff00000000000000;
	/*0000*/ _LARGE_INTEGER AsLARGE_INTEGER;
	/*0008*/
};

struct _WNF_LOCK {
	/*0000*/ _EX_PUSH_LOCK PushLock;
	/*0008*/
};

struct _WNF_SCOPE_MAP;

struct _WNF_SILODRIVERSTATE {
	/*0000*/ _WNF_SCOPE_MAP * ScopeMap;
	/*0008*/ void * volatile PermanentNameStoreRootKey;
	/*0010*/ void * volatile PersistentNameStoreRootKey;
	/*0018*/ LONGLONG volatile PermanentNameSequenceNumber;
	/*0020*/ _WNF_LOCK PermanentNameSequenceNumberLock;
	/*0028*/ LONGLONG volatile PermanentNameSequenceNumberPool;
	/*0030*/ LONGLONG volatile RuntimeNameSequenceNumber;
	/*0038*/
};

struct _WNF_STATE_NAME {
	/*0000*/ ULONG Data[0x2];
	/*0008*/
};

enum _WORKING_SET_TYPE {
	WorkingSetTypeUser = 0x0,
	WorkingSetTypeSession = 0x1,
	WorkingSetTypeSystemTypes = 0x2,
	WorkingSetTypeSystemCache = 0x2,
	WorkingSetTypePagedPool = 0x3,
	WorkingSetTypeSystemPtes = 0x4,
	WorkingSetTypeMaximum = 0x5
};

struct _WORK_QUEUE_ITEM {
	/*0000*/ _LIST_ENTRY List;
	/*0010*/ void (* WorkerRoutine)( void * );
	/*0018*/ void * Parameter;
	/*0020*/
};

enum _WOW64_SHARED_INFORMATION {
	SharedNtdll32LdrInitializeThunk = 0x0,
	SharedNtdll32KiUserExceptionDispatcher = 0x1,
	SharedNtdll32KiUserApcDispatcher = 0x2,
	SharedNtdll32KiUserCallbackDispatcher = 0x3,
	SharedNtdll32RtlUserThreadStart = 0x4,
	SharedNtdll32pQueryProcessDebugInformationRemote = 0x5,
	SharedNtdll32BaseAddress = 0x6,
	SharedNtdll32LdrSystemDllInitBlock = 0x7,
	SharedNtdll32RtlpFreezeTimeBias = 0x8,
	Wow64SharedPageEntriesCount = 0x9
};

struct _XSAVE_AREA {
	/*0000*/ _XSAVE_FORMAT LegacyState;
	/*0200*/ _XSAVE_AREA_HEADER Header;
	/*0240*/
};

struct _XSAVE_AREA_HEADER {
	/*0000*/ ULONGLONG Mask;
	/*0008*/ ULONGLONG CompactionMask;
	/*0010*/ ULONGLONG Reserved2[0x6];
	/*0040*/
};

struct _XSAVE_FORMAT {
	/*0000*/ USHORT ControlWord;
	/*0002*/ USHORT StatusWord;
	/*0004*/ UCHAR TagWord;
	/*0005*/ UCHAR Reserved1;
	/*0006*/ USHORT ErrorOpcode;
	/*0008*/ ULONG ErrorOffset;
	/*000c*/ USHORT ErrorSelector;
	/*000e*/ USHORT Reserved2;
	/*0010*/ ULONG DataOffset;
	/*0014*/ USHORT DataSelector;
	/*0016*/ USHORT Reserved3;
	/*0018*/ ULONG MxCsr;
	/*001c*/ ULONG MxCsr_Mask;
	/*0020*/ _M128A FloatRegisters[0x8];
	/*00a0*/ _M128A XmmRegisters[0x10];
	/*01a0*/ UCHAR Reserved4[0x60];
	/*0200*/
};

struct _XSTATE_CONFIGURATION {
	/*0000*/ ULONGLONG EnabledFeatures;
	/*0008*/ ULONGLONG EnabledVolatileFeatures;
	/*0010*/ ULONG Size;
	/*0014*/ ULONG ControlFlags;
	/*0014*/ ULONG OptimizedSave : 01; // 0x00000001;
	/*0014*/ ULONG CompactionEnabled : 01; // 0x00000002;
	/*0018*/ _XSTATE_FEATURE Features[0x40];
	/*0218*/ ULONGLONG EnabledSupervisorFeatures;
	/*0220*/ ULONGLONG AlignedFeatures;
	/*0228*/ ULONG AllFeatureSize;
	/*022c*/ ULONG AllFeatures[0x40];
	/*0330*/
};

struct _XSTATE_CONTEXT {
	/*0000*/ ULONGLONG Mask;
	/*0008*/ ULONG Length;
	/*000c*/ ULONG Reserved1;
	/*0010*/ _XSAVE_AREA * Area;
	/*0018*/ void * Buffer;
	/*0020*/
};

struct _XSTATE_FEATURE {
	/*0000*/ ULONG Offset;
	/*0004*/ ULONG Size;
	/*0008*/
};

struct _XSTATE_SAVE {
	/*0000*/ _XSTATE_SAVE * Prev;
	/*0008*/ _KTHREAD * Thread;
	/*0010*/ UCHAR Level;
	/*0018*/ _XSTATE_CONTEXT XStateContext;
	/*0038*/
};

struct _flags {
	/*0000*/ UCHAR Removable : 01; // 0x01;
	/*0000*/ UCHAR GroupAssigned : 01; // 0x02;
	/*0000*/ UCHAR GroupCommitted : 01; // 0x04;
	/*0000*/ UCHAR GroupAssignmentFixed : 01; // 0x08;
	/*0000*/ UCHAR Fill : 04; // 0xf0;
	/*0001*/
};
