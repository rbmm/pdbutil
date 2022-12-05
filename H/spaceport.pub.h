struct SC_BUFFER
{
	SC_BUFFER();
	long Copy(SC_BUFFER *,unsigned long,unsigned long,unsigned long);
	long Initialize(_SC_BUFFER_TYPE,void *,unsigned long);
	long Reinitialize(_SC_BUFFER_TYPE,void *,unsigned long);
	unsigned char * VirtualAddress();
	unsigned char IsStable();
	void Free();
	void Reference(SC_BUFFER *);
	~SC_BUFFER();
};

class SC_DEVICE
{
	long ExtractDeviceStrings();
protected:
	virtual long GetStoragePropertyPost(_STORAGE_PROPERTY_ID,_STORAGE_DESCRIPTOR_HEADER *);
	virtual long GetStoragePropertyPre(_STORAGE_PROPERTY_ID,unsigned long *);
	virtual void SaveStorageProperty(_STORAGE_PROPERTY_ID,_STORAGE_DESCRIPTOR_HEADER *);
public:
	long GetStorageProperty(_STORAGE_PROPERTY_ID,_STORAGE_DESCRIPTOR_HEADER * *);
	long UpdateStorageProperty(_STORAGE_PROPERTY_ID);
	virtual long Initialize();
	virtual ~SC_DEVICE();
};

class SC_DISK
{
	long ExtractFirmwareRevision();
protected:
	virtual long GetStoragePropertyPost(_STORAGE_PROPERTY_ID,_STORAGE_DESCRIPTOR_HEADER *);
	virtual long GetStoragePropertyPre(_STORAGE_PROPERTY_ID,unsigned long *);
	virtual void SaveStorageProperty(_STORAGE_PROPERTY_ID,_STORAGE_DESCRIPTOR_HEADER *);
public:
	SC_DISK();
	long ReadPartitionTableControl(SC_DISK_LAYOUT * *);
	long UpdateFirmwareInfo();
	unsigned __int64 FindLargestFreeRun(SC_DISK_LAYOUT *,unsigned __int64 *);
	virtual long Initialize();
	virtual ~SC_DISK();
};

class SC_DISK_LAYOUT
{
	unsigned __int64 FindLargestFreeRunGpt(unsigned __int64 *);
	unsigned __int64 FindLargestFreeRunMbr(unsigned __int64,unsigned long,unsigned __int64 *);
public:
	unsigned long NumberOfPartitions();
	void Sort();
};

struct SC_DISPATCH
{
	SC_DISPATCH();
	long DispatchInternal(SC_PACKET *,_SC_OPERATION,SC_SEQUENTIAL *);
	virtual SP_RESILIENCY_INFO * Resiliency();
	virtual _GUID * GetId();
	virtual long OnOperationCompletion(SC_PACKET *,_SC_OPERATION,unsigned char);
	virtual long OnPacketCompletion(SC_PACKET *);
	virtual unsigned long GetPriority();
	virtual void Io(SC_PACKET *);
	virtual ~SC_DISPATCH();
	void Dispatch(SC_PACKET *,_SC_OPERATION);
	void DispatchParallel(SC_PACKET *,_SC_OPERATION);
	void DispatchSequential(SC_PACKET *,_SC_OPERATION);
	void DispatchSynchronous(SC_PACKET *,_SC_OPERATION);
};

struct SC_DRIVE
{
	SC_DRIVE();
	long IsReadable();
	long ReadHeader(SC_DRIVE_HEADER *);
	long UpdateIdentity(_GUID *);
	long UpdateLayoutInfo(SC_DISK_LAYOUT *);
	long WriteHeader(SC_DRIVE_HEADER *);
	unsigned __int64 GetUserDataOffset();
	unsigned char HasSpacesPartition();
	unsigned char IsHeaderValid();
	virtual SIO_DRIVE_CONTEXT * IoContext();
	virtual long Initialize();
	virtual long Pnp(void *);
	virtual ~SC_DRIVE();
};

struct SC_DRIVE_HEADER
{
	long Unformat(unsigned char *,unsigned long);
	void Format(unsigned char * *,unsigned long);
};

struct SC_ENV
{
	static long CreateGuid(_GUID *);
	static long SendAsynchronousFsdRequest(void *,unsigned char,void *,unsigned long,__int64,long (*)(void *,void *,unsigned long,long,void *),void *);
	static long SendSynchronousFsdRequest(void *,unsigned char,void *,unsigned long,__int64);
	static unsigned __int64 CheckpointInterval();
	static unsigned __int64 InMemoryLogSizeLimit();
	static unsigned __int64 LogAdvanceInterval();
	static unsigned __int64 QueryPerformanceCounter(unsigned __int64 *);
	static void * Allocate(unsigned __int64);
	static void Free(void *);
	static void QuerySystemTime(_LARGE_INTEGER *);
};

struct SC_ENV_ALLOCATOR
{
	static void * operator new(unsigned __int64);
	static void * operator new[](unsigned __int64);
	static void operator delete(void *);
	static void operator delete[](void *);
};

struct SC_FINITE_FIELD
{
	long Initialize(unsigned char,unsigned long);
	unsigned long Divide(unsigned long,unsigned long);
	unsigned long Multiply(unsigned long,unsigned long);
	unsigned long Weight(unsigned long);
};

struct SC_LIST
{
	SC_LIST();
	_LIST_ENTRY * Remove();
	void Insert(_LIST_ENTRY *);
	void Remove(_LIST_ENTRY *);
	~SC_LIST();
};

struct SC_MATRIX
{
	long AppendWithProduct(SC_MATRIX *,unsigned long);
	long GenerateDecodeSchedule(unsigned long,unsigned long,SC_SCHEDULE * *);
	long GenerateSchedule(unsigned long,unsigned long,SC_SCHEDULE * *);
	long Initialize(SC_FINITE_FIELD *,unsigned long,unsigned long);
	long Invert();
	long Truncate(unsigned long,unsigned long);
	unsigned long GetRowDividedWeight(unsigned long,unsigned long);
	unsigned long GetRowMask(unsigned long);
	void FillWithCoefficients(unsigned long);
	void Optimize();
	void RowDivide(unsigned long,unsigned long);
	void RowSubtractMultiple(unsigned long,unsigned long,unsigned long);
	void RowSwap(unsigned long,unsigned long);
};

class SC_PACKET
{
	void OnCompletionParallel();
	void OnCompletionSequential();
	void OnCompletionTopLevel();
public:
	SC_PACKET();
	long Copy(SC_PACKET *,unsigned long,unsigned long);
	long Split(SC_PACKET *,unsigned long,unsigned long,unsigned char);
	static void * operator new(unsigned __int64);
	static void operator delete(void *);
	virtual ~SC_PACKET();
	void Attach(SC_PACKET *);
	void CopySequential(SC_PACKET *,unsigned long,unsigned long,SC_SEQUENTIAL *);
	void FreeAll();
	void OnCompletion();
	void UpdateStatus(long);
};

class SC_PARITY
{
	long GetDecodeSchedule(unsigned long,unsigned long,SC_SCHEDULE * *);
public:
	SC_PARITY();
	long Initialize(unsigned long,unsigned long,unsigned long,unsigned long);
	long InitializeContext(unsigned long,unsigned long,SC_PARITY_CONTEXT *);
	void Execute(SC_PARITY_CONTEXT *,unsigned long,unsigned char);
	void InitializeContext(unsigned long,SC_PARITY_CONTEXT *);
	~SC_PARITY();
};

struct SC_PART_ENTRY
{
	unsigned char IsUnused();
};

struct SC_SCHEDULE
{
	void Execute(void * *,unsigned long,unsigned long,unsigned char);
};

struct SC_SEQUENTIAL
{
	SC_SEQUENTIAL();
	long Initialize();
	~SC_SEQUENTIAL();
};

class SC_SLAB_ALLOCATOR
{
	SC_SLAB_HEADER * AllocateSlab(unsigned char);
public:
	static void FreeObject(void *);
	void * AllocateObject();
	~SC_SLAB_ALLOCATOR();
};

class SC_SPARSE
{
	SC_ARRAY * GetArray(unsigned __int64);
public:
	SC_SPARSE();
	long Copy(SC_SPARSE *,unsigned char);
	long Initialize(unsigned __int64);
	long SetObject(unsigned __int64,void *);
	void * FindFirstObject(unsigned __int64 *);
	void * FindLastObject(unsigned __int64 *);
	void * FindNextObject(unsigned __int64 *);
	void * FindPreviousObject(unsigned __int64 *);
	void * GetObject(unsigned __int64);
	void Reset();
};

struct SC_TABLE
{
	static unsigned char * Format(SC_FIELD const *,unsigned long,void *,unsigned char *);
	static unsigned long Unformat(SC_FIELD const *,unsigned long,void *,unsigned char *,unsigned long);
	static unsigned short Size(SC_FIELD const *,unsigned long,void *);
};

struct SDB_COLUMN
{
	virtual SDB_OBJECT * Clone();
	virtual long Associate();
	virtual long Initialize();
	virtual long IntegrityCheck();
	virtual long Unformat(SS_RECORD *);
	virtual unsigned long GetSize();
	virtual void CollectTelemetry(_SP_TELEMETRY_OPERATION);
	virtual void Format(SS_RECORD *);
};

struct SDB_CONFIG
{
	SDB_CONFIG();
	long CommitTransaction(unsigned char *);
	long CreateRecord(_SDB_RECORD_TYPE,SDB_RECORD * *);
	long DoubleIncrement();
	long FormatRecords(unsigned char *);
	long NewConfiguration(_GUID,_SC_VERSION,unsigned long);
	long NewPath(SC_DRIVE *,unsigned __int64);
	long Read(_GUID,SS_STORE *);
	long Synchronize();
	long UnformatRecord(SS_RECORD *);
	long UpgradeTransaction(_SC_VERSION);
	unsigned long NextRecordId();
	virtual SDB_RECORD * FindRecordByRecordId(_SDB_RECORD_TYPE,unsigned long);
	virtual SDB_RECORD * GetRecord(SDB_RECORD *);
	virtual SDB_RECORD * GetRecordByType(_SDB_RECORD_TYPE,SDB_RECORD *);
	virtual long CreateAssociations();
	virtual long Initialize();
	virtual long InsertRecord(SDB_RECORD *);
	virtual long IntegrityCheck();
	virtual long OnUpdate(_LIST_ENTRY *);
	virtual unsigned char NeedRecordId(_SDB_RECORD_TYPE);
	virtual void ExportRecords(_LIST_ENTRY *);
	virtual void ImportRecords(_LIST_ENTRY *);
	virtual void RemoveRecord(SDB_RECORD *);
	virtual ~SDB_CONFIG();
	void AbortRecords();
	void CommitRecords();
	void Reset();
};

struct SDB_DRIVE
{
	SC_DRIVE * GetDrive();
	SDB_RECORD * GetExtent(SDB_RECORD *,unsigned __int64 *);
	long InitializeSlabBitmap();
	long InsertExtentRecord(SDB_RECORD *);
	long RemoveExtentRecord(SDB_RECORD *);
	unsigned __int64 FindFreeSpace(unsigned __int64);
	unsigned __int64 GetConsumedCapacity();
	virtual SDB_OBJECT * Clone();
	virtual long Associate();
	virtual long Initialize();
	virtual long IntegrityCheck();
	virtual long Unformat(SS_RECORD *);
	virtual unsigned long GetSize();
	virtual void CollectTelemetry(_SP_TELEMETRY_OPERATION);
	virtual void Format(SS_RECORD *);
	virtual ~SDB_DRIVE();
	void ChangeSlabBitmap(unsigned __int64,unsigned __int64,unsigned char);
	void Connect(SC_DRIVE *);
};

struct SDB_EXTENT
{
	SDB_EXTENT();
	SDB_RECORD * GetDrive();
	SDB_RECORD * GetSpace();
	SDB_RECORD * GetTier();
	SP_RESILIENCY_INFO * Resiliency();
	_SP_PROVISIONING_INFO * Provisioning();
	unsigned char SupportsSafeReallocation();
	virtual SDB_OBJECT * Clone();
	virtual long Associate();
	virtual long Initialize();
	virtual long IntegrityCheck();
	virtual long Unformat(SS_RECORD *);
	virtual unsigned char ResidingOnDisk(SDB_RECORD *);
	virtual unsigned long GetSize();
	virtual void CollectTelemetry(_SP_TELEMETRY_OPERATION);
	virtual void Format(SS_RECORD *);
	virtual ~SDB_EXTENT();
};

struct SDB_METADATA
{
	virtual SDB_OBJECT * Clone();
	virtual long Associate();
	virtual long Initialize();
	virtual long IntegrityCheck();
	virtual long Unformat(SS_RECORD *);
	virtual unsigned long GetSize();
	virtual void CollectTelemetry(_SP_TELEMETRY_OPERATION);
	virtual void Format(SS_RECORD *);
	virtual ~SDB_METADATA();
};

struct SDB_OBJECT
{
	SDB_OBJECT();
	virtual long IntegrityCheck();
	virtual long SanityCheck();
	virtual unsigned char ResidingOnDisk(SDB_RECORD *);
};

struct SDB_PATH
{
	long Read(unsigned __int64,unsigned long,unsigned char *);
};

struct SDB_POOL
{
	virtual SDB_OBJECT * Clone();
	virtual long Associate();
	virtual long Initialize();
	virtual long IntegrityCheck();
	virtual long SanityCheck();
	virtual long Unformat(SS_RECORD *);
	virtual unsigned long GetSize();
	virtual void CollectTelemetry(_SP_TELEMETRY_OPERATION);
	virtual void Format(SS_RECORD *);
	virtual ~SDB_POOL();
};

class SDB_POOL_CONFIG
{
protected:
	virtual unsigned char NeedRecordId(_SDB_RECORD_TYPE);
public:
	SDB_POOL_CONFIG();
	SDB_RECORD * FindConfigSpace();
	SDB_RECORD * FindDriveById(_GUID *);
	SDB_RECORD * FindExtent(_GUID *,unsigned __int64,unsigned long,unsigned long);
	SDB_RECORD * FindSpaceById(_GUID *);
	SDB_RECORD * FindTierById(_GUID *);
	SDB_RECORD * FindTopLevelSpace(SDB_RECORD *);
	long CreateDriveRecord(SDB_RECORD * *);
	long CreateExtentRecord(SDB_RECORD * *);
	long CreatePoolRecord(SDB_RECORD * *);
	long CreateSpaceRecord(_GUID *,SDB_RECORD * *);
	long CreateTierRecord(_GUID *,SDB_RECORD * *);
	long GetSpaceConfigSlotByDrive(unsigned long,SDB_RECORD *,unsigned __int64 *);
	long OnUpdate(SDB_POOL_CONFIG *);
	virtual SDB_RECORD * FindRecordByRecordId(_SDB_RECORD_TYPE,unsigned long);
	virtual SDB_RECORD * GetRecord(SDB_RECORD *);
	virtual SDB_RECORD * GetRecordByType(_SDB_RECORD_TYPE,SDB_RECORD *);
	virtual long CreateAssociations();
	virtual long Initialize();
	virtual long InsertRecord(SDB_RECORD *);
	virtual long IntegrityCheck();
	virtual void ExportRecords(_LIST_ENTRY *);
	virtual void ImportRecords(_LIST_ENTRY *);
	virtual void RemoveRecord(SDB_RECORD *);
	virtual ~SDB_POOL_CONFIG();
};

struct SDB_RECORD
{
	SDB_OBJECT * GetObject();
	long Delete();
	long Format();
	long Initialize(SDB_CONFIG *,SS_RECORD *);
	long PreTouch();
	long Unformat(SS_RECORD *);
	unsigned char IsPreTouched();
	void Abort();
	void Commit();
	void Format(SS_RECORD *,SDB_OBJECT *);
	void GetHeader(SS_RECORD_HEADER *,unsigned char);
	void Touch();
	~SDB_RECORD();
};

struct SDB_SPACE
{
	SDB_RECORD * FindExtent(unsigned __int64,unsigned long,unsigned long);
	SDB_RECORD * FindExtentByReplacement(SDB_EXTENT *);
	SDB_RECORD * FindFirstExtent(unsigned __int64);
	SDB_RECORD * FindNextExtent(SDB_RECORD *);
	SDB_RECORD * GetChild(_GUID *);
	SDB_RECORD * GetExtent(SDB_RECORD *,unsigned __int64 *);
	SDB_RECORD * GetTier(unsigned __int64);
	long InsertExtentRecord(SDB_RECORD *);
	long RemoveExtentRecord(SDB_RECORD *);
	unsigned __int64 GetAllocatedCapacity();
	unsigned char IsOffsetRebalancing(unsigned __int64);
	unsigned char NeedsInit();
	unsigned long GetNumberOfCopies(unsigned __int64);
	unsigned long GetUnusedCopyId(unsigned __int64,unsigned long);
	unsigned long NumberOfTiers();
	virtual SDB_OBJECT * Clone();
	virtual long Associate();
	virtual long Initialize();
	virtual long IntegrityCheck();
	virtual long SanityCheck();
	virtual long Unformat(SS_RECORD *);
	virtual unsigned long GetSize();
	virtual void CollectTelemetry(_SP_TELEMETRY_OPERATION);
	virtual void Format(SS_RECORD *);
	virtual ~SDB_SPACE();
	void InsertChild(SDB_RECORD *);
	void InsertTier(SDB_RECORD *);
	void RemoveChild(SDB_RECORD *);
};

class SDB_SPACE_CONFIG
{
	long CreateMetadataRecord(SDB_RECORD * *);
public:
	SDB_RECORD * FindColumnRecord(unsigned __int64,unsigned long,unsigned long);
	SDB_RECORD * GetMetadataRecord();
	long CreateColumnRecord(SDB_RECORD * *);
	long DeleteColumnRecords(unsigned __int64);
	long GetMetadataDrives(SDB_POOL_CONFIG *,unsigned long *,_GUID * * const);
	long Upgrade(SDB_POOL_CONFIG *);
	static long Create(SDB_POOL_CONFIG *,SDB_SPACE *);
	static long Load(SDB_POOL_CONFIG *,SDB_SPACE *,SDB_SPACE_CONFIG * *);
	unsigned char HasMetadata(_GUID *);
};

struct SDB_TIER
{
	long AppendRegion(unsigned __int64,unsigned __int64);
	unsigned __int64 GetCapacity();
	virtual SDB_OBJECT * Clone();
	virtual long Associate();
	virtual long Initialize();
	virtual long IntegrityCheck();
	virtual long Unformat(SS_RECORD *);
	virtual unsigned long GetSize();
	virtual void CollectTelemetry(_SP_TELEMETRY_OPERATION);
	virtual void Format(SS_RECORD *);
	virtual ~SDB_TIER();
};

struct SIO_BUCKET
{
	SIO_BUCKET();
	~SIO_BUCKET();
};

class SIO_CACHE
{
	long BuildChildPacketsIo(SC_PACKET *,SC_SEQUENTIAL *);
	long BuildChildPacketsIoInternal(_SL_OVERLAP_TYPE,_READ_CACHE_REQUEST *,unsigned long,unsigned __int64,SIO_OVERLAP_CONTEXT *);
	long BuildChildPacketsWrite(SC_PACKET *,SC_SEQUENTIAL *);
	long OnPacketCompletionIo(SC_PACKET *);
public:
	SIO_CACHE();
	long Initialize(SDB_SPACE *,SIO_SPACE *);
	virtual SC_SEQUENTIAL * GetSequential(_SC_OPERATION);
	virtual long BuildChildPackets(SC_PACKET *,_SC_OPERATION,SC_SEQUENTIAL *);
	virtual long OnPacketCompletion(SC_PACKET *);
	virtual void DispatchChildPacket(SC_PACKET *,_SC_OPERATION);
	virtual void Io(SC_PACKET *);
};

struct SIO_CACHE_PACKET
{
	SIO_CACHE_PACKET();
};

struct SIO_COLUMN
{
	unsigned char CanRegenerate(unsigned char);
	unsigned char IsReadable();
	unsigned char IsWritable();
};

struct SIO_COUNTERS
{
	SIO_COUNTERS();
	long Initialize(unsigned long,unsigned long);
	void * GetLocal();
	void * GetLocal(unsigned long);
	void * GetShared();
	~SIO_COUNTERS();
};

struct SIO_DESTAGE_PACKET
{
	SIO_DESTAGE_PACKET();
};

struct SIO_DRIVE_CONTEXT
{
	unsigned long InsertCandidate(SIO_DESTAGE_CANDIDATE *);
};

class SIO_DRT
{
	long BuildChildPacketsRead(SC_PACKET *,SC_SEQUENTIAL *);
	long OnOperationCompletionRead(SC_PACKET *);
public:
	long Clean();
	long Create();
	long Distribute();
	long FullWorker();
	long Initialize(SDB_SPACE *,SIO_SPACE *);
	long MarkDirtyWorker(_LIST_ENTRY *,_LIST_ENTRY *);
	long Read();
	long Trim();
	long Write();
	virtual SC_SEQUENTIAL * GetSequential(_SC_OPERATION);
	virtual _GUID * GetId();
	virtual long BuildChildPackets(SC_PACKET *,_SC_OPERATION,SC_SEQUENTIAL *);
	virtual long OnOperationCompletion(SC_PACKET *,_SC_OPERATION,unsigned char);
	virtual unsigned long GetPriority();
	virtual void DispatchChildPacket(SC_PACKET *,_SC_OPERATION);
	virtual ~SIO_DRT();
	void ComputeLimit();
	void Evict(unsigned int);
	void RemoveIndex(unsigned long);
};

struct SIO_DSM
{
	unsigned long GetSize(unsigned long);
};

struct SIO_DSM_INPUT
{
	_DEVICE_DATA_SET_RANGE * Ranges();
	void * Parameters();
	void Initialize(SIO_DSM *,unsigned __int64,unsigned __int64);
};

struct SIO_DSM_OUTPUT
{
	void * OutputBlock();
};

class SIO_LOG
{
	long BuildChildPacketsRead(SC_PACKET *,SC_SEQUENTIAL *);
	long BuildChildPacketsWrite(SC_PACKET *,SC_SEQUENTIAL *);
	long OnOperationCompletionRead(SC_PACKET *);
	long WriteSynchronous(SIO_LOG_PACKET *);
public:
	SIO_LOG();
	_SL_LSN UpdateCountersReclaimable(unsigned long);
	long Advance(_SL_LSN,unsigned char);
	long FlushSynchronous();
	long GetCheckpointDistance(unsigned __int64 *);
	long Initialize(SDB_SPACE *,SIO_SPACE *);
	long OnLogFlush();
	long Open(unsigned char,unsigned char,unsigned __int64,unsigned __int64,unsigned long);
	long ReadBitMaps(_SL_LSN,SIO_LOG_BITMAP_INFO *,unsigned long);
	long Reconcile(unsigned long);
	long ReconcileCheckpoint(_SL_LSN *,unsigned long *,unsigned long *);
	long WriteBitMaps(_SL_LSN *);
	long WriteCheckpoint(unsigned char);
	unsigned __int64 GetRecommendedBytes(unsigned long);
	unsigned __int64 ReclaimableBytes();
	virtual SC_SEQUENTIAL * GetSequential(_SC_OPERATION);
	virtual long BuildChildPackets(SC_PACKET *,_SC_OPERATION,SC_SEQUENTIAL *);
	virtual long OnOperationCompletion(SC_PACKET *,_SC_OPERATION,unsigned char);
	virtual long OnPacketCompletion(SC_PACKET *);
	virtual unsigned long GetPriority();
	virtual void DispatchChildPacket(SC_PACKET *,_SC_OPERATION);
	virtual ~SIO_LOG();
	void GetAmortizedUsage(unsigned long,unsigned __int64 *,unsigned __int64 *);
	void GetCounters(unsigned long,_SIO_LOG_COUNTERS *);
	void OnCommit(SIO_LOG *);
	void Read(SC_PACKET *);
	void UpdateCountersUsed(unsigned long);
	void Write(SC_PACKET *);
};

struct SIO_LOG_PACKET
{
	SIO_LOG_PACKET();
	virtual ~SIO_LOG_PACKET();
};

struct SIO_OBJECT
{
	virtual SIO_OBJECT * GetObjectByOffset(unsigned __int64);
	virtual _GUID * GetId();
	virtual long Control(_SIO_CONTROL_CODE,unsigned __int64,unsigned __int64,void *);
	virtual long Control(_SIO_CONTROL_CODE,unsigned __int64,unsigned __int64,void *,unsigned __int64 *);
	virtual unsigned long GetPriority();
};

class SIO_RAID
{
	long AddElement(SIO_LOG_ADD_ELEMENT *);
	long AddElements(SIO_LOG_ELEMENTS_CONTEXT *);
	long BeginManualRepair();
	long BuildChildPacketsDestageRead(SC_PACKET *,SC_SEQUENTIAL *);
	long BuildChildPacketsDestageReadFull(SC_PACKET *,_SL_TABLE_NODE *);
	long BuildChildPacketsDestageReadPartial(SC_PACKET *,_SL_TABLE_NODE *);
	long BuildChildPacketsDestageWrite(SC_PACKET *,SC_SEQUENTIAL *);
	long BuildChildPacketsDsm(SC_PACKET *,SC_SEQUENTIAL *);
	long BuildChildPacketsFlushColumns(SC_PACKET *,SC_SEQUENTIAL *);
	long BuildChildPacketsRead(SC_PACKET *,SC_SEQUENTIAL *);
	long BuildChildPacketsReadUnit(SC_PACKET *,SC_SEQUENTIAL *);
	long BuildChildPacketsReplay(SC_PACKET *,SC_SEQUENTIAL *);
	long BuildChildPacketsWrite(SC_PACKET *,SC_SEQUENTIAL *);
	long BuildChildPacketsWriteLog(SC_PACKET *,SC_SEQUENTIAL *,unsigned long,unsigned __int64);
	long BuildChildPacketsWriteNormal(SC_PACKET *,SC_SEQUENTIAL *,unsigned long,unsigned __int64);
	long BuildChildPacketsWriteUnit(SC_PACKET *,SC_SEQUENTIAL *);
	long CommitColumnState(unsigned char);
	long CreateColumnRecord(unsigned long,unsigned long);
	long DestageGetCandidates(SIO_DESTAGE_CANDIDATES *);
	long GetElements(SIO_LOG_ELEMENTS_CONTEXT *);
	long GetExtent(_SP_EXTENT_INFO *);
	long GetHealth(_SIO_HEALTH_CONTEXT *);
	long GetMinActiveLsn(_SL_LSN *);
	long OnOperationCompletionDestageRead(SC_PACKET *,unsigned char);
	long OnOperationCompletionDestageWrite(SC_PACKET *,unsigned char);
	long OnOperationCompletionDsmAddresses(SC_PACKET *);
	long OnOperationCompletionReplay(SC_PACKET *,unsigned char);
	long OnPacketCompletionDsmAddresses(SC_PACKET *);
	long OnPacketCompletionRead(SC_PACKET *);
	long OnPacketCompletionReadUnit(SC_PACKET *);
	long OnPacketCompletionWrite(SC_PACKET *);
	long OnPacketCompletionWriteLog(SC_PACKET *);
	long OnPacketCompletionWriteUnit(SC_PACKET *);
	long PrepareRegenWork();
	long PrepareRepairMetadata();
	long RegenNotification(SIO_NOTIFICATION *);
	long RemoveElements(_SL_LSN *);
	long Reset(SC_DRIVE *);
	long ScopeRegenWork(unsigned __int64,unsigned __int64);
	long ScrubSynchronous(unsigned __int64,unsigned long,unsigned long);
	long SetColumnPendingStateInternal(unsigned long,unsigned long,_SC_COLUMN_STATE,_SC_COLUMN_REASON);
	long SetColumnState(SDB_COLUMN *);
	long TransitionColumnState(unsigned long,unsigned long,long);
	long UpdateColumnRecord(SDB_RECORD *);
	long UpdateColumnState(_SIO_UPDATE_COLUMN_CONTEXT *);
	void DispatchChildPacketDestageRead(SC_PACKET *);
	void DispatchChildPacketDestageWrite(SC_PACKET *);
	void DispatchChildPacketFlushColumns(SC_PACKET *);
	void DispatchChildPacketReplay(SC_PACKET *);
protected:
	long FlushNotification(SIO_NOTIFICATION *);
	long Scrub(unsigned __int64,unsigned __int64,SIO_DSM *);
	long SetColumnPendingState(unsigned long,unsigned long,_SC_COLUMN_STATE,_SC_COLUMN_REASON);
	unsigned char PropositionDrive(SC_DRIVE *,unsigned long);
	virtual void ReadUnit(SC_PACKET *);
	virtual void WriteUnit(SC_PACKET *);
	void SetColumnActiveState(unsigned long,unsigned long,_SC_COLUMN_STATE,_SC_COLUMN_REASON);
public:
	SIO_COLUMN * FindById(unsigned long,unsigned long);
	SIO_COLUMN * Get(unsigned long,unsigned long);
	long Dsm(unsigned __int64,unsigned __int64,SIO_DSM *);
	long GetDataLoss(_SP_RANGE_BITMAP *);
	long GetRepairBytes(_SIO_REPAIR_BYTES_CONTEXT *);
	long InvalidateColumn(unsigned long);
	long NeedsRepair(unsigned char *);
	long Trim(_SP_RANGE_BITMAP *);
	static unsigned char AreInSameGroup(SP_RESILIENCY_INFO *,unsigned long,unsigned long);
	static unsigned char IsGlobal(SP_RESILIENCY_INFO *,unsigned long);
	unsigned char CanInvalidateColumn(unsigned long);
	unsigned char CanInvalidateOffset(unsigned __int64);
	unsigned char IsFull(_SL_TABLE_NODE *);
	unsigned char IsReadable(unsigned long);
	unsigned char NeedsRepair(unsigned long,unsigned long,_SIO_REPAIR_BYTES_CONTEXT *);
	unsigned long IdToCopy(unsigned long,unsigned long);
	unsigned long PickCopyExternal(unsigned long,long,unsigned __int64);
	unsigned long PickCopyInternal(unsigned long,long,unsigned __int64);
	virtual SC_SEQUENTIAL * GetSequential(_SC_OPERATION);
	virtual SP_RESILIENCY_INFO * Resiliency();
	virtual _SP_PROVISIONING_INFO * Provisioning();
	virtual long BuildChildPackets(SC_PACKET *,_SC_OPERATION,SC_SEQUENTIAL *);
	virtual long Control(_SIO_CONTROL_CODE,unsigned __int64,unsigned __int64,void *);
	virtual long Initialize(SDB_SPACE *,unsigned __int64,unsigned __int64,SIO_SPACE *,SIO_TIER *);
	virtual long IsComplete();
	virtual long OnOperationCompletion(SC_PACKET *,_SC_OPERATION,unsigned char);
	virtual long OnPacketCompletion(SC_PACKET *);
	virtual unsigned char CanOptimizeDestage(_SL_TABLE_NODE *);
	virtual unsigned long PickCopy(unsigned long,long,unsigned __int64);
	virtual void DestageWrite(SC_PACKET *);
	virtual void DispatchChildPacket(SC_PACKET *,_SC_OPERATION);
	virtual void Io(SC_PACKET *);
	virtual void OnCommit(SIO_OBJECT *);
	virtual ~SIO_RAID();
	void AddLsn(_SL_TABLE_NODE *,_SL_LSN,unsigned char,unsigned char);
	void DispatchChildPacketAcquire(SC_PACKET *);
	void FreeAll(_SL_TABLE_NODE *);
	void ReleaseRegion(SC_PACKET *);
	void RetireLsns(_SL_TABLE_NODE *,_SL_LSN,unsigned char);
	void Transfer(SC_PACKET *);
	void UpdateCountersDestageComplete(SC_PACKET *);
	void UpdateCountersIoComplete(SC_PACKET *);
	void UpdateCountersIoStart(SC_PACKET *);
	void UpdateDestageQueueDepth(unsigned long,long);
};

struct SIO_RAID1
{
	SIO_RAID1();
	long BuildChildPacketsRegenerate(SC_PACKET *,SC_SEQUENTIAL *);
	long BuildChildPacketsScrub(SC_PACKET *,SC_SEQUENTIAL *);
	long BuildChildPacketsWriteUnit(SC_PACKET *,SC_SEQUENTIAL *);
	long DrtClear(unsigned __int64,unsigned __int64);
	long DrtEvict(unsigned long *);
	long FlushNotification(SIO_NOTIFICATION *);
	long OnOperationCompletionScrub(SC_PACKET *);
	long OnPacketCompletionRegenerate(SC_PACKET *);
	long OnPacketCompletionWriteUnit(SC_PACKET *);
	long Repair(unsigned __int64,unsigned __int64,SIO_DSM *);
	long RepairSynchronous(SC_PACKET *);
	unsigned char NeedsRegen(unsigned long,unsigned long *);
	virtual SC_SEQUENTIAL * GetSequential(_SC_OPERATION);
	virtual _SIO_DEGRADATION GetDegradation(unsigned long);
	virtual long BuildChildPackets(SC_PACKET *,_SC_OPERATION,SC_SEQUENTIAL *);
	virtual long Control(_SIO_CONTROL_CODE,unsigned __int64,unsigned __int64,void *);
	virtual long Initialize(SDB_SPACE *,unsigned __int64,unsigned __int64,SIO_SPACE *,SIO_TIER *);
	virtual long OnOperationCompletion(SC_PACKET *,_SC_OPERATION,unsigned char);
	virtual long OnPacketCompletion(SC_PACKET *);
	virtual long RegenPrepare();
	virtual long RegenPrepare(SIO_REGEN_PACKET *);
	virtual unsigned __int64 ColumnToObject(unsigned long,unsigned __int64);
	virtual unsigned __int64 ObjectToColumn(unsigned __int64,unsigned long *);
	virtual unsigned char HasResiliency(unsigned long,unsigned long);
	virtual unsigned char IsCritical(unsigned long,unsigned long);
	virtual unsigned char IsDirty();
	virtual unsigned char IsInUse(_SL_TABLE_NODE *,unsigned long);
	virtual unsigned long PickCopy(unsigned long,long,unsigned __int64);
	virtual void DispatchChildPacket(SC_PACKET *,_SC_OPERATION);
	virtual void OnCommit(SIO_OBJECT *);
	virtual void RegenComplete(SIO_REGEN_PACKET *);
	virtual void RegenSetup();
	virtual void WriteUnit(SC_PACKET *);
	void MarkDirty(SC_PACKET *);
	void OnMarkedDirty(long);
};

struct SIO_RAID5
{
	SIO_RAID5();
	long BuildChildPacketsDestageRead(SC_PACKET *,SC_SEQUENTIAL *);
	long BuildChildPacketsDestageWrite(SC_PACKET *,SC_SEQUENTIAL *);
	long BuildChildPacketsReadUnit(SC_PACKET *,SC_SEQUENTIAL *);
	long BuildChildPacketsReconstruct(SC_PACKET *,SC_SEQUENTIAL *);
	long BuildChildPacketsRegenerate(SC_PACKET *,SC_SEQUENTIAL *);
	long BuildChildPacketsScrub(SC_PACKET *,SC_SEQUENTIAL *);
	long BuildChildPacketsWriteMultiple(SC_PACKET *,SC_SEQUENTIAL *);
	long BuildChildPacketsWriteParity(SC_PACKET *,SC_SEQUENTIAL *);
	long GetBitMap(SIO_LOG_GET_BITMAP *);
	long OnOperationCompletionDestageReadFull(SC_PACKET *,unsigned char);
	long OnOperationCompletionDestageReadPartial(SC_PACKET *,unsigned char);
	long OnOperationCompletionDestageWrite(SC_PACKET *,unsigned char);
	long OnOperationCompletionReconstruct(SC_PACKET *,unsigned char);
	long OnOperationCompletionScrub(SC_PACKET *,unsigned char);
	long OnPacketCompletionDestageWrite(SC_PACKET *);
	long OnPacketCompletionReadUnit(SC_PACKET *);
	long OnPacketCompletionReconstruct(SC_PACKET *);
	long OnPacketCompletionRegenerate(SC_PACKET *);
	long OnPacketCompletionWriteParity(SC_PACKET *);
	long Repair(unsigned __int64,unsigned __int64,SIO_DSM *);
	long RepairParity(unsigned __int64,unsigned __int64,SIO_DSM *);
	long RepairSynchronous(SC_PACKET *);
	long SetBitMap(SIO_LOG_BITMAP *);
	static unsigned char AreInSameGroup(SP_RESILIENCY_INFO *,unsigned long,unsigned long);
	unsigned char IsRowStable(unsigned __int64);
	unsigned char NeedsRegen(unsigned long *);
	unsigned long Rotate(unsigned __int64,unsigned long);
	unsigned long UnRotate(unsigned __int64,unsigned long);
	virtual SC_SEQUENTIAL * GetSequential(_SC_OPERATION);
	virtual _SIO_DEGRADATION GetDegradation(unsigned long);
	virtual long BuildChildPackets(SC_PACKET *,_SC_OPERATION,SC_SEQUENTIAL *);
	virtual long Control(_SIO_CONTROL_CODE,unsigned __int64,unsigned __int64,void *);
	virtual long Initialize(SDB_SPACE *,unsigned __int64,unsigned __int64,SIO_SPACE *,SIO_TIER *);
	virtual long IsComplete();
	virtual long OnOperationCompletion(SC_PACKET *,_SC_OPERATION,unsigned char);
	virtual long OnPacketCompletion(SC_PACKET *);
	virtual long RegenPrepare();
	virtual long RegenPrepare(SIO_REGEN_PACKET *);
	virtual unsigned __int64 ColumnToObject(unsigned long,unsigned __int64);
	virtual unsigned __int64 ObjectToColumn(unsigned __int64,unsigned long *);
	virtual unsigned char CanOptimizeDestage(_SL_TABLE_NODE *);
	virtual unsigned char HasResiliency(unsigned long,unsigned long);
	virtual unsigned char IsCritical(unsigned long,unsigned long);
	virtual unsigned char IsDirty();
	virtual unsigned char IsInUse(_SL_TABLE_NODE *,unsigned long);
	virtual void DestageWrite(SC_PACKET *);
	virtual void DispatchChildPacket(SC_PACKET *,_SC_OPERATION);
	virtual void OnCommit(SIO_OBJECT *);
	virtual void ReadUnit(SC_PACKET *);
	virtual void RegenComplete(SIO_REGEN_PACKET *);
	virtual void RegenSetup();
	virtual ~SIO_RAID5();
	void DispatchChildPacketReadUnit(SC_PACKET *);
	void EncodeBitMap(SIO_LOG_BITMAP *);
};

struct SIO_RAID5_PACKET
{
	SIO_RAID5_PACKET();
	virtual ~SIO_RAID5_PACKET();
};

struct SIO_REGEN_PACKET
{
	SIO_REGEN_PACKET();
	void OnResume(unsigned long,unsigned __int64);
};

struct SIO_REPLAY_PACKET
{
	virtual ~SIO_REPLAY_PACKET();
};

class SIO_SPACE
{
	long BuildChildPacketsDsm(SC_PACKET *,SC_SEQUENTIAL *);
	long BuildChildPacketsFlush(SC_PACKET *,SC_SEQUENTIAL *);
	long OnOperationCompletionFlush(SC_PACKET *,unsigned char);
	long OnPacketCompletionDsmZones(SC_PACKET *);
	void GetFlushTargets(unsigned char *,unsigned char *);
protected:
	long BuildDrives(SDB_SPACE *);
	long BuildIoTree(SDB_SPACE *);
	long BuildLog(SDB_SPACE *);
	long BuildParity(SDB_SPACE *);
	long DistributeLog();
public:
	SC_SPARSE * GetDrives();
	SIO_SPACE * GetChild(_GUID);
	SIO_SPACE * GetChild(_SC_SPACE_USAGE);
	long BuildRaidIoTree(SDB_SPACE *,unsigned __int64,unsigned __int64,SIO_OBJECT * *);
	long Dsm(SIO_DSM *);
	long FlushSynchronous();
	unsigned char NeedsRepair();
	virtual SC_SEQUENTIAL * GetSequential(_SC_OPERATION);
	virtual _GUID * GetId();
	virtual long BuildChildPackets(SC_PACKET *,_SC_OPERATION,SC_SEQUENTIAL *);
	virtual long OnOperationCompletion(SC_PACKET *,_SC_OPERATION,unsigned char);
	virtual long OnPacketCompletion(SC_PACKET *);
	virtual void DispatchChildPacket(SC_PACKET *,_SC_OPERATION);
	virtual ~SIO_SPACE();
	void Flush(SC_PACKET *);
	void GetCounters(_SIO_SPACE_COUNTERS *);
};

class SIO_SPAN
{
	long BuildChildPacketsIo(SC_PACKET *,SC_SEQUENTIAL *);
	long GetLbaStatus(unsigned __int64,unsigned __int64,_SCSI_REQUEST_BLOCK *);
public:
	SIO_SPAN();
	long Initialize(SDB_SPACE *,unsigned __int64,unsigned __int64,SIO_SPACE *);
	virtual SC_SEQUENTIAL * GetSequential(_SC_OPERATION);
	virtual SIO_OBJECT * GetObjectByOffset(unsigned __int64);
	virtual long BuildChildPackets(SC_PACKET *,_SC_OPERATION,SC_SEQUENTIAL *);
	virtual long Control(_SIO_CONTROL_CODE,unsigned __int64,unsigned __int64,void *,unsigned __int64 *);
	virtual long OnPacketCompletion(SC_PACKET *);
	virtual void DispatchChildPacket(SC_PACKET *,_SC_OPERATION);
	virtual void Io(SC_PACKET *);
};

struct SIO_SPARSE
{
	virtual long Control(_SIO_CONTROL_CODE,unsigned __int64,unsigned __int64,void *,unsigned __int64 *);
	virtual void OnCommit(SIO_OBJECT *);
	virtual ~SIO_SPARSE();
};

struct SIO_TIER
{
	long Initialize(SDB_TIER *);
	void GetCounters(_SIO_TIER_COUNTERS *);
	~SIO_TIER();
};

struct SIO_TIERS
{
	SIO_TIER * FindTier(_GUID *);
	SIO_TIER * FindTier(_SP_RESILIENCY_TYPE);
	long GetRegions(unsigned __int64,unsigned __int64,unsigned long,_STORAGE_TIER_REGION *);
	void OnCommit(SIO_TIERS *);
	void Reset();
};

struct SL_TABLE
{
	_SL_TABLE_ELEMENT * AllocateElement(_SL_TABLE_NODE *,unsigned long,unsigned __int64,unsigned __int64,unsigned long);
	_SL_TABLE_NODE * AllocateNode(unsigned __int64);
	long EnumerateOverlaps(unsigned long,unsigned __int64,unsigned __int64,unsigned long,long (*)(_SL_OVERLAP_TYPE,_SL_TABLE_NODE *,_SL_TABLE_ELEMENT *,unsigned long,unsigned __int64,void *),void *);
	void FreeNode(_SL_TABLE_NODE *);
};

struct SMBIOS_INFO
{
	SMBIOS_TABLE * FindNextTable(SMBIOS_TABLE *);
	long GetSystemStrings(char * *,char * *,char * *,char * *);
	unsigned char Validate(unsigned long);
};

struct SMBIOS_TABLE
{
	char * GetString(unsigned long);
	unsigned char Validate(unsigned long);
	unsigned long GetLength();
};

class SP_ATTRIBUTES
{
	static _RTL_GENERIC_COMPARE_RESULTS CompareRoutine(_RTL_AVL_TABLE *,void *,void *);
	static long Callback(_DEVICE_OBJECT *,_LIST_ENTRY *,_LIST_ENTRY *,void *);
	static long QueryRoutine(unsigned short *,unsigned long,void *,unsigned long,void *,void *);
	static void * AllocateRoutine(_RTL_AVL_TABLE *,unsigned long);
	static void FreeRoutine(_RTL_AVL_TABLE *,void *);
public:
	long Delete(_GUID *);
	long Get(_GUID *,unsigned __int64 *);
	long Initialize(_DEVICE_OBJECT *);
	long Set(_GUID *,unsigned __int64);
};

struct SP_CONTROL
{
	SP_CONTROL();
	long GetParameter(unsigned short *,_GUID *);
	long GetParameter(unsigned short *,unsigned long,void *);
	long GetPoolIds(_GUID * *,unsigned long *);
	long GetSanSettings(_DISK_SAN_SETTINGS *);
	long GetSmbiosStrings();
	long Initialize(_DRIVER_OBJECT *,_DEVICE_OBJECT *,_DEVICE_OBJECT *);
	long SetParameter(unsigned short *,_GUID);
	long Start();
	unsigned long GetRandom(unsigned long);
	void Census();
	void Remove();
	~SP_CONTROL();
};

class SP_CONTROL_WORK
{
	long GetInternal(_IRP *);
	static _IRP * PeekNextIrp(_IO_CSQ *,_IRP *,void *);
	static void AcquireLock(_IO_CSQ *,unsigned char *);
	static void CompleteCanceledIrp(_IO_CSQ *,_IRP *);
	static void InsertIrp(_IO_CSQ *,_IRP *);
	static void ReleaseLock(_IO_CSQ *,unsigned char);
	static void RemoveIrp(_IO_CSQ *,_IRP *);
public:
	long Execute(_SP_WORK_INFO *);
	long Get(_IRP *);
	long Initialize();
	long Run(SP_WORK *);
	long Set(_SP_WORK_INFO *);
};

class SP_DESTAGE
{
	void QueueCandidates(SIO_SPACE *,SIO_DESTAGE_CANDIDATES *);
	void ResetCandidates(SIO_SPACE *,SIO_DESTAGE_CANDIDATES *);
public:
	SP_DESTAGE();
	long OnPacketCompletionDestageRead(SC_PACKET *);
	long OnPacketCompletionDestageWrite(SC_PACKET *);
	long OnPacketCompletionReplay(SC_PACKET *);
	long OnPacketCompletionWriteParity(SC_PACKET *);
	virtual long OnPacketCompletion(SC_PACKET *);
	virtual long Run();
	void AttemptAdvance(SP_DESTAGE_CONTEXT *,unsigned char);
	void Phase2(_LIST_ENTRY *);
	void RefillDestage(SP_DESTAGE_CONTEXT *);
	void RefillReplay(SP_DESTAGE_CONTEXT *);
};

struct SP_DESTAGE_CONTEXT
{
	SP_DESTAGE_CONTEXT();
	virtual void Reset();
};

struct SP_DEVICE
{
	SP_DEVICE();
	long AcquireRundownShared(_IRP *);
	long AcquireRundownSharedNonQueued();
	long Initialize();
	unsigned char IsRundownInProgress();
	void AcquireMutex();
	void AcquireRundownExclusive();
	void ReleaseMutex();
	void ReleaseRundownExclusive();
	void ReleaseRundownShared();
	void ReleaseRundownSharedNonQueued();
	void RequeueForRundown(_LIST_ENTRY *);
};

class SP_DRIVE
{
	long GenerateId(_GUID *);
	static void OnCompletionCallout(void *);
	void OnCompletion(SC_PACKET *);
public:
	SP_DRIVE();
	long BuildChildPacketsIo(SC_PACKET *,SC_SEQUENTIAL *);
	long Initialize(_DEVICE_OBJECT *,_UNICODE_STRING *,_STORAGE_ENDPOINT *);
	long IoInternal(SC_PACKET *,SC_SEQUENTIAL *);
	long IsClustered(unsigned char *);
	long IsPoolable(unsigned char *,_SP_DRIVE_CANNOT_POOL_REASON *);
	long IsWritable();
	long QueryDependentDisk(unsigned long,_STORAGE_QUERY_DEPENDENT_DISK_RESPONSE * *);
	long Refresh(unsigned char *);
	long SetQos(unsigned char);
	long Shutdown();
	long UpdateDiskAttributes();
	long UpdateHeader();
	long UpdateMetadata();
	long UpdateProperties(unsigned char);
	static long OnCompletion(_DEVICE_OBJECT *,_IRP *,void *);
	unsigned char ValidateSlot();
	unsigned char WaitingForPool();
	virtual SIO_DRIVE_CONTEXT * IoContext();
	virtual long Control(unsigned long,void *,unsigned long,void *,unsigned long);
	virtual long GetPnpProperty(void *,void * *);
	virtual long Pnp(void *);
	virtual long Read(unsigned __int64,unsigned long,unsigned char *);
	virtual long Write(unsigned __int64,unsigned long,unsigned char *);
	virtual void Io(SC_PACKET *,unsigned __int64);
	virtual ~SP_DRIVE();
	void Connect(SDB_POOL_CONFIG *);
	void Disconnect(_SP_ID *);
	void DispatchChildPacketIo(SC_PACKET *);
	void GetCounters(_SIO_DRIVE_COUNTERS *);
	void GetHealth(_SP_HEALTH *,_SP_DRIVE_STATE *,unsigned long *,_SP_DRIVE_STATE_REASON *,unsigned long *);
	void GetIoSummary(_SIO_DRIVE_IO_SUMMARY *);
	void IoSequential(SC_PACKET *);
	void LookupSlot(SP_ENCLOSURE *);
	void ResetProperties();
	void ResetTempDefaults();
	void SetElement(SDB_DRIVE *);
};

struct SP_DSM
{
	long Acquire();
	long Dispatch();
	long DrtClear();
	long DrtDisable();
	long DrtQuery();
	long Dsm();
	long Initialize(SP_DEVICE *,_IRP *);
	long Map();
	long Repair();
	long ScopeRegen();
	long Scrub();
	long TieringQuery();
	long Trim();
	virtual unsigned char IsPaused();
};

struct SP_ENCLOSURE
{
	_SES_ELEMENT_TYPE GetType(unsigned long);
	_SES_STATUS_DESCRIPTOR * GetStatus(unsigned long);
	long Initialize(_DEVICE_OBJECT *,_UNICODE_STRING *,_UNICODE_STRING *,_STORAGE_ENDPOINT *);
	long InitializeControlPage(_SES_CONTROL_DIAGNOSTIC_PAGE * *);
	long SetIndications(_SP_ELEMENT_INFO *,unsigned long);
	long SetIndications(_SP_ELEMENT_INFO,unsigned long);
	long Start();
	long UpdatePage(unsigned char);
	long UpdateProperties(unsigned char);
	long UpdatePropertiesInternal(unsigned char);
	long ValidatePageAes(_SES_ADDITIONAL_ELEMENT_STATUS_DIAGNOSTIC_PAGE *);
	long ValidatePageConfig(_SES_CONFIGURATION_DIAGNOSTIC_PAGE *);
	unsigned long FindSlotById(unsigned char *,unsigned long,unsigned long *);
	unsigned long FindSlotByIdInternal(unsigned char *,unsigned long,unsigned long *);
	unsigned long GetBias(unsigned long);
	unsigned long GetIndications(_SES_ELEMENT_TYPE,unsigned long);
	unsigned long GetNumberOfSlots();
	void LogIoSummary();
	void Refresh();
	void Remove();
	void UpdateClock();
	void UpdateHealth();
	void UpdateRevision();
	~SP_ENCLOSURE();
};

struct SP_EXTENSION
{
	static void * operator new(unsigned __int64,void *,unsigned __int64);
};

class SP_ITERATOR_SPACE
{
	void Release();
public:
	SP_ITERATOR_SPACE(unsigned char);
	SP_SPACE * Next();
	~SP_ITERATOR_SPACE();
};

class SP_POOL
{
	long DeleteExtent(SDB_RECORD *,unsigned char);
	long DeleteSlabs(SDB_RECORD *,_SP_SPACE_INFO *);
	long DispatchTransaction(SP_POOL::TRANSACTION_CODE,void *,void *,void *);
	long ExecuteTransactionInternal(unsigned char,SP_POOL::TRANSACTION_CODE,void *,void *,void *);
	long PrepareCommit(unsigned char *,_SP_DEVICE_CHANGE * *,unsigned long *);
	long RetireDrive(SDB_RECORD *,_SC_COLUMN_REASON);
	long ZeroSubdisk(SDB_RECORD *);
	void AbortDevices(_SP_DEVICE_CHANGE *,unsigned long);
	void CommitDevices(_SP_DEVICE_CHANGE *,unsigned long);
	void PostCommitDevices(_SP_DEVICE_CHANGE *,unsigned long);
public:
	SDB_DRIVE * SelectRandomDrive(SC_LIST *);
	SP_POOL();
	long AddDriveTransactionInternal(unsigned long,SP_DRIVE * * const);
	long AddDrivesTransaction(unsigned long,SP_DRIVE * * const);
	long AddReplaceCopies(SDB_RECORD *,unsigned char);
	long AddReplaceCopiesTransaction(SDB_RECORD *,unsigned char *,unsigned __int64 *);
	long AllocateConfigSpaceSlot(unsigned long *);
	long AttachSpace(SDB_RECORD *);
	long CreateConfigSpaceTransaction();
	long CreateExtent(SDB_RECORD *,SDB_RECORD *,SDB_EXTENT *);
	long CreatePoolTransaction(_SP_POOL_INFO *,SP_DRIVE * * const);
	long CreateSlab(SDB_RECORD *,SDB_RECORD *,SDB_EXTENT *,unsigned long);
	long CreateSpaceTransaction(_SP_SPACE_INFO *,SDB_RECORD * *);
	long CreateTierTransaction(_SP_TIER_INFO *,SDB_RECORD *);
	long DeleteSpaceTransaction(SDB_RECORD *);
	long ExcludeDrivesForReallocation(SDB_RECORD *,SDB_RECORD *,_SP_PROVISIONING_INFO *,SP_RESILIENCY_INFO *,unsigned char,SDB_SPACE_CONFIG *);
	long ExtendSpace(SDB_SPACE *,SDB_TIER *,unsigned __int64,SP_PICK_CONTEXT *);
	long ExtendSpaceTransaction(SDB_SPACE *);
	long ExtendTierTransaction(SDB_TIER *);
	long FinalizeSpaceTransaction(SDB_RECORD *);
	long FreeConfigSpaceSlot(unsigned long);
	long GrowConfigSpaceTransaction();
	long GrowConfigSpaceTransaction(unsigned long,SP_DRIVE * * const);
	long GrowSpaceTransaction(SDB_RECORD *);
	long IncludeDrives(_SC_MEDIA_TYPE,_SC_FD_TYPE,unsigned long,_GUID *);
	long InitializeConfig(SP_DRIVE *);
	long LoadConfig(SP_DRIVE *);
	long MapExtents(SP_DEVICE *,SP_MAP_CONTEXT *,unsigned long);
	long MapExtentsTransaction(SP_MAP_CONTEXT *,unsigned long,SDB_RECORD *);
	long NewPool(_SP_POOL_INFO *,SP_DRIVE * *);
	long OnConfigUpdate();
	long Online();
	long PickDrive(unsigned __int64,unsigned __int64,_SP_PROVISIONING_INFO *,SDB_EXTENT *);
	long PickDrives(SP_PICK_CONTEXT *,SDB_EXTENT *);
	long PickDrivesRaid(SP_PICK_CONTEXT *,SDB_EXTENT *);
	long PickDrivesRaid1(SP_PICK_CONTEXT *,SDB_EXTENT *);
	long PickDrivesRaid5(SP_PICK_CONTEXT *,SDB_EXTENT *);
	long PickReplacementDrive(SDB_EXTENT *,unsigned char,SDB_EXTENT *);
	long ReallocateDrivesTransaction(_SP_IDS_EX *);
	long ReallocateExtent(SDB_RECORD *,_SC_COLUMN_REASON,unsigned char);
	long RebalanceCleanupTransaction(SDB_RECORD *,unsigned char *);
	long RebalancePhase1Transaction(unsigned __int64 *);
	long RebalancePhase2Transaction(SDB_RECORD *);
	long ReconcileConfig();
	long RemoveCopies(SDB_RECORD *,unsigned char);
	long RemoveCopiesTransaction(SDB_RECORD *);
	long RemoveDriveTransactionInternal(_GUID *);
	long RemoveDrivesEstimateTransaction(_SP_IDS_EX *);
	long RemoveDrivesTransaction(_SP_IDS_EX *);
	long ReplaceDrive(SDB_RECORD *);
	long RetireDrivesTransaction(_SP_IDS_EX *);
	long ScheduleRebalanceTransaction(unsigned char);
	long SelectDrives(SP_PICK_CONTEXT *,unsigned long,unsigned long,_LIST_ENTRY *);
	long SetDriveInfoTransaction(SDB_RECORD *,_SP_DRIVE_INFO *);
	long SetDriveMetadataTransaction(SDB_RECORD *,unsigned char);
	long SetPoolInfoTransaction(_SP_POOL_INFO *);
	long SetSpaceInfoTransaction(SDB_RECORD *,_SP_SPACE_INFO *);
	long SetTierInfoTransaction(SDB_RECORD *,_SP_TIER_INFO *);
	long ShrinkConfigSpaceTransaction(_SP_IDS_EX *);
	long ShrinkSpaceTransaction(SDB_RECORD *,_SP_SPACE_INFO *);
	long UpdateConfig(SP_DRIVE *,unsigned char *);
	long UpdateSpaces();
	long UpdateSpacesTransaction(_GUID *);
	long UpgradePoolTransaction();
	long UpgradeSpaces(unsigned char);
	unsigned __int64 GetDefaultPoolAttributes();
	unsigned __int64 GetDefaultSpaceAttributes();
	unsigned char CanReallocateInPlace(SDB_RECORD *,_SC_COLUMN_REASON,unsigned char);
	unsigned char IgnoreDrives(_SC_FD_TYPE,SDB_DRIVE *);
	unsigned char InsertTask(SP_TASK *);
	unsigned char IsBetterAllocation(SDB_EXTENT *,SDB_EXTENT *);
	unsigned char IsComplete();
	unsigned char IsSparseProvisionedSpaceAttached();
	unsigned char RetireMissingDrives();
	unsigned long GetNotifyFlags();
	unsigned long WhichBucket(SDB_DRIVE *,unsigned long);
	void CheckCapacityThreshold();
	void CollectDiskAllocationTelemetry(_SP_TELEMETRY_EVENT);
	void Commit();
	void DetachSpace(SDB_RECORD *,_SP_SPACE_DETACH_REASON,long);
	void DetachSpaces(_SP_SPACE_DETACH_REASON,long);
	void DiscardDrives(SC_LIST *,unsigned long,_SC_FD_TYPE,_GUID *);
	void ExcludeDrives(_SC_FD_TYPE,_GUID *);
	void LaunchTasks();
	void Offline(_SP_POOL_READ_ONLY_REASON,unsigned char);
	void OnlineDrive(SDB_RECORD *,unsigned char);
	void PauseTasks();
	void ResumeRepair();
	void ResumeTasks();
	void SendDriveTelemetry(SDB_DRIVE *,_SP_POOL_CENSUS *);
	void SendPoolTelemetry(SDB_POOL *,_SP_POOL_CENSUS *);
	void SendSpaceTelemetry(SDB_SPACE *,_SP_POOL_CENSUS *);
	void SendTierTelemetry(SDB_TIER *,_SP_POOL_CENSUS *);
	void TearDownSpace(SP_SPACE *);
	void UpdateRebalance();
	~SP_POOL();
};

struct SP_PRM
{
	long Initialize(_UNICODE_STRING *);
	long Notify(_GUID,_GUID,_PRM_NOTIFICATION_TYPE,SP_DRIVE *);
	long SendMessage(_SP_NOTIFICATION_INFO *,void *);
	~SP_PRM();
};

class SP_REGEN
{
	void CleanupWorkUnit(SIO_REGEN_PACKET *);
	void ClearWorkPriority(SP_REGEN_CONTEXT *);
	void CompleteWorkUnit(SIO_REGEN_PACKET *);
	void DispatchWorkUnit(SIO_REGEN_PACKET *);
	void Resume();
public:
	SP_REGEN();
	long BuildChildPacketsRegenerate(SC_PACKET *);
	long OnPacketCompletionPrepare(SC_PACKET *);
	long OnPacketCompletionRegenerate(SC_PACKET *);
	virtual long BuildChildPackets(SC_PACKET *,_SC_OPERATION,SC_SEQUENTIAL *);
	virtual long OnPacketCompletion(SC_PACKET *);
	virtual long Run();
	virtual void DispatchChildPacket(SC_PACKET *,_SC_OPERATION);
	virtual void GetProgress(SP_TASK_CONTEXT *,unsigned __int64 *,unsigned __int64 *,unsigned long *);
};

struct SP_REGEN_CONTEXT
{
	SP_REGEN_CONTEXT();
	virtual long Initialize(SP_SPACE *);
	virtual unsigned char IsInternal();
	virtual void Complete();
	virtual void Reset();
	virtual ~SP_REGEN_CONTEXT();
	void Free(SIO_REGEN_PACKET *);
	void Insert(SIO_REGEN_PACKET *);
	void QueueUpdateColumn(unsigned char);
};

struct SP_RESILIENCY_INFO
{
	long Validate(unsigned char);
};

class SP_SPACE
{
	long AddMetadataDriveTransaction(_GUID *);
	long CleanUpRepairMetadataTransaction();
	long DispatchTransaction(SP_SPACE::TRANSACTION_CODE,void *,void *);
	long MapExtentsTransaction(unsigned long,SP_MAP_CONTEXT *);
	long RemoveMetadataDriveTransaction(_GUID *);
public:
	SP_SPACE * GetChild(_GUID);
	SP_SPACE();
	long BeginManualRepair(unsigned char);
	long BuildChildPacketsPrepare(SC_PACKET *,SC_SEQUENTIAL *);
	long BuildChildren(SDB_SPACE *);
	long BuildConfig(SDB_SPACE *);
	long BuildDrt(SDB_SPACE *);
	long BuildIoTree(SDB_SPACE *);
	long BuildSequential(SDB_SPACE *);
	long BuildTaskContexts();
	long CleanUpRepairMetadata(unsigned char);
	long DistributeConfig();
	long ExecuteTransaction(SP_SPACE::TRANSACTION_CODE,void *,void *);
	long GetHealth(_SIO_HEALTH_CONTEXT *);
	long GetHealth(_SIO_HEALTH_CONTEXT *,_SP_SPACE_STATE *,unsigned long *);
	long Initialize(SDB_SPACE *,SP_POOL *,SP_DEVICE *,SP_SPACE *);
	long Pnp(_IRP *);
	long Prepare(_IRP *,_SC_OPERATION);
	long PrepareInternal(_IRP *,_SC_OPERATION,SC_SEQUENTIAL *);
	long PrepareRegenWork(unsigned char);
	long PrepareRepairMetadata(unsigned char);
	long ResetDrive(SP_POOL *,SDB_RECORD *);
	long UpdateColumnState(_SIO_UPDATE_COLUMN_CONTEXT *);
	long UpdateConfig(SDB_SPACE *);
	virtual SC_SEQUENTIAL * GetSequential(_SC_OPERATION);
	virtual SDB_POOL_CONFIG * GetPoolConfig();
	virtual SDB_RECORD * FindColumnRecord(unsigned __int64,unsigned long,unsigned long);
	virtual SDB_RECORD * FindExtentRecord(unsigned __int64,unsigned long,unsigned long);
	virtual _SC_VERSION GetVersion();
	virtual long BuildChildPackets(SC_PACKET *,_SC_OPERATION,SC_SEQUENTIAL *);
	virtual long CreateColumnRecord(SDB_RECORD * *);
	virtual long FlushDestage(SIO_SPACE *);
	virtual long GetDestageQueueDepth();
	virtual long OnOperationCompletion(SC_PACKET *,_SC_OPERATION,unsigned char);
	virtual long OnPacketCompletion(SC_PACKET *);
	virtual long OnPacketCompletionPrepare(SC_PACKET *);
	virtual void DispatchChildPacket(SC_PACKET *,_SC_OPERATION);
	virtual void DispatchChildPacketPrepare(SC_PACKET *);
	virtual void QueueDestagePacket(SC_PACKET *);
	virtual void QueueRegenPacket(SC_PACKET *);
	virtual void ResumeDestage();
	virtual void ResumeLogWrite();
	virtual void RunDestage();
	virtual void RunLogAdvance();
	virtual void RunLogReady();
	virtual void RunLogWrite();
	virtual void RunMarkDirty(_LIST_ENTRY *,unsigned char);
	virtual void RunUpdateColumn(unsigned long);
	virtual ~SP_SPACE();
	void AbortDevices();
	void CommitDevices();
	void GetRegenBytes(_SIO_REPAIR_BYTES_CONTEXT *);
	void GetRepairBytes(unsigned __int64 *,unsigned __int64 *,unsigned char *);
	void PrepareSequential(_IRP *,_SC_OPERATION);
	void Shutdown();
	void StartRegenWork(unsigned char);
};

struct SP_TASK
{
	SP_TASK();
	unsigned char GetInfo(_SP_TASK_INFO *);
	virtual SC_SEQUENTIAL * GetSequential(_SC_OPERATION);
	virtual long BuildChildPackets(SC_PACKET *,_SC_OPERATION,SC_SEQUENTIAL *);
	virtual void DispatchChildPacket(SC_PACKET *,_SC_OPERATION);
	virtual void GetProgress(SP_TASK_CONTEXT *,unsigned __int64 *,unsigned __int64 *,unsigned long *);
	void GetIds(_GUID,_GUID * const,unsigned long,unsigned long *);
	void Insert(SP_TASK_CONTEXT *);
	void Remove(SP_TASK_CONTEXT *,unsigned char);
};

struct SP_TASK_CONTEXT
{
	virtual long Initialize(SP_SPACE *);
	virtual unsigned char IsInternal();
	virtual void Complete();
};

struct SP_WORK
{
	SP_WORK();
	long ReadWitness(_GUID *,void *,unsigned long);
	long RebalanceMetadata(_SP_ID *);
	long RepairSpace(_SP_ID *,_SC_REPAIR_PHASE);
	long ScopeRegeneration(_SP_ID *);
	long WriteWitness(_GUID *,void *,unsigned long);
};

struct SP_WORKITEM
{
	SP_WORKITEM();
	long Initialize(_DEVICE_OBJECT *,long (*)(_DEVICE_OBJECT *,_LIST_ENTRY *,_LIST_ENTRY *,void *),void *);
	unsigned char Cancel(unsigned char);
	unsigned char IsTimeout();
	unsigned char RemoveAll(_LIST_ENTRY *);
	void Insert(_LIST_ENTRY *,unsigned long);
	void InsertList(_LIST_ENTRY *,unsigned char,unsigned long);
	void Schedule(unsigned long);
	~SP_WORKITEM();
};

struct SS_BLOCK
{
	SS_BLOCK();
};

struct SS_BLOCK_HEADER
{
	long Unformat(unsigned char *,unsigned long);
};

struct SS_RECORD
{
	long Format(SC_FIELD const *,unsigned long,void *);
	long Unformat(SC_FIELD const *,unsigned long,void *);
	unsigned char IsComplete();
	void CopyFrom(unsigned char *,unsigned short,unsigned long);
	void CopyTo(unsigned char *,unsigned short,unsigned long);
};

struct SS_RECORD_HEADER
{
	SS_RECORD_HEADER();
};

class SS_STORE
{
	SS_BLOCK * AllocateBlock(unsigned __int64);
	SS_BLOCK * GetBlock(unsigned long);
	long BuildChildPacketsIo(SC_PACKET *,SC_SEQUENTIAL *);
	long BuildChildPacketsIoInternal(SC_PACKET *,SDB_PATH *);
	long Flush(SDB_PATH *);
	long Initialize();
	long Load(SDB_PATH *,_LIST_ENTRY *);
	long UnformatRecords(unsigned char *,unsigned long,unsigned __int64,_LIST_ENTRY *);
	long Write(unsigned __int64,unsigned long,SDB_PATH *);
	long WriteHeader(_SS_STORE_STATUS,SDB_PATH *);
	long WriteSectors(SDB_PATH *);
	unsigned char PrepareSector(unsigned long,unsigned char *);
	virtual SC_SEQUENTIAL * GetSequential(_SC_OPERATION);
	virtual _GUID * GetId();
	virtual long BuildChildPackets(SC_PACKET *,_SC_OPERATION,SC_SEQUENTIAL *);
	virtual long OnPacketCompletion(SC_PACKET *);
	virtual void DispatchChildPacket(SC_PACKET *,_SC_OPERATION);
	virtual void Io(SC_PACKET *);
	void FreeBlock(unsigned __int64);
public:
	SDB_PATH * FindPath(SC_DRIVE *);
	SDB_PATH * FindPath(_GUID *);
	SS_STORE();
	long Abort();
	long AddPath(SC_DRIVE *,unsigned __int64);
	long BeginOperation();
	long Commit();
	long CommitTransaction();
	long Create(_GUID,unsigned long);
	long CreateRecord(SS_RECORD_HEADER *,SS_RECORD * *);
	long DeleteRecord(unsigned long,SS_RECORD_HEADER *,SS_RECORD * *);
	long GetAdditionalKeys(unsigned long * *,unsigned long *);
	long GetRecord(unsigned long,SS_RECORD_HEADER *,SS_RECORD * *);
	long Load(_GUID,_LIST_ENTRY *);
	long NewPath(SC_DRIVE *,unsigned __int64);
	long ReadWitness(_GUID *,void *,unsigned long);
	long Split();
	long Synchronize(SDB_PATH *);
	long Unsplit();
	long WriteWitness(_GUID *,void *,unsigned long);
	unsigned __int64 Sequence();
	unsigned char IsHealthy();
	unsigned char IsQuorate(unsigned long);
	unsigned char IsReadable();
	unsigned char IsWritable();
	unsigned long WritableCount();
	virtual ~SS_STORE();
	void AbortPaths();
	void Clean();
	void CleanupRecords(unsigned char);
	void CommitPaths();
	void DoubleIncrement();
	void EndOperation();
	void RemovePath(SC_DRIVE *);
	void Reset();
	void Synchronize();
};

struct SS_STORE_HEADER
{
	SS_STORE_HEADER();
	long Initialize(SDB_PATH *);
	long Unformat(unsigned char *,unsigned long);
	unsigned __int64 Sequence();
	void Format(unsigned char * *,unsigned long);
};

SDB_RECORD * SpFindRecordByDriveId(_GUID *,SP_POOL * *);
SP_CONTROL * SpControlExt;
SP_DEVICE * SpAcquireReference(_GUID);
SP_DEVICE * SpAcquireReferenceExclusive(_GUID);
SP_DEVICE * SpAcquireReferenceShared(_GUID);
SP_DRIVE * SpFindDriveByBaseObject(_DEVICE_OBJECT *);
SP_DRIVE * SpFindDriveByDriveId(_GUID *);
SP_DRIVE * SpFindDriveByStorageId(_STORAGE_IDENTIFIER *);
SP_DRIVE * SpFindDriveByTempId(_GUID *);
SP_ENCLOSURE * SpFindEnclosureById(_GUID *);
SP_ENCLOSURE * SpFindEnclosureByStorageId(_STORAGE_IDENTIFIER *);
SP_POOL * SpFindPoolById(_GUID *);
_GUID * SioGetActivityId(_IRP *,_GUID *);
_GUID * SpGetFaultDomainId(SDB_DRIVE *,_SC_FD_TYPE);
_RTL_GENERIC_COMPARE_RESULTS SlTableCompareRoutine(_RTL_AVL_TABLE *,void *,void *);
_SL_LSN LogGetNextRecordLsn(_LOG_HANDLE *,_SL_LSN,unsigned long);
_SL_LSN const SL_LSN_INVALID;
_SL_LSN const SL_LSN_NULL;
_SP_DRIVE_STATE SpGetDriveState(_STORAGE_DISK_OPERATIONAL_STATUS);
_SP_DRIVE_STATE_REASON SpGetDriveStateReason(_STORAGE_OPERATIONAL_STATUS_REASON);
_STORAGE_IDENTIFIER * SpFindStorageId(_STORAGE_DEVICE_ID_DESCRIPTOR *);
int IsEqualGUID(_GUID const &,_GUID const &);
long (** SpControlDispatchTable)(_DEVICE_OBJECT *,_IRP *);
long (** SpSpaceDispatchTable)(_DEVICE_OBJECT *,_IRP *);
long LogAllocateSpace(_LOG_HANDLE *,void *,unsigned long,_SL_LSN *);
long LogCoreFetchDataRecord(_LOG_HANDLE *,void *,_SL_LSN,void *,unsigned long,_SL_LOG_SCAN_CONTEXT *,void * *,unsigned long *);
long LogCoreReadControlArea(_LOG_HANDLE *,void *,_SL_LOG_CONTROL_AREA *);
long LogCoreReadDataRecord(_LOG_HANDLE *,void *,_SL_LSN,unsigned long,void *,unsigned long,void *,unsigned long,__int64);
long LogCoreScanDataRecord(_LOG_HANDLE *,void *,_SL_LSN,void *,unsigned long,_SL_LOG_SCAN_CONTEXT *,void *,unsigned long,unsigned char,_SL_LSN *);
long LogCoreWriteControlArea(_LOG_HANDLE *,void *);
long LogCoreWriteDataRecord(_LOG_HANDLE *,void *,void *,unsigned long,void *,unsigned long,void *,unsigned long,_SL_LSN *);
long LogDecodeEntryHeader(_LOG_HANDLE *,_LOG_ENTRY_HEADER *);
long LogDecodeEntryPayload(_LOG_HANDLE *,_LOG_ENTRY_HEADER *,unsigned long,void *,unsigned long);
long LogEncodeEntryHeader(_LOG_HANDLE *,_LOG_ENTRY_HEADER *);
long LogEncodeEntryPayload(_LOG_HANDLE *,_LOG_ENTRY_HEADER *,void *,unsigned long);
long LogReadCommonCompletion(void *,long,_LOG_READ_IO_CONTEXT *);
long LogReadControlRecord(_LOG_HANDLE *,void *,_SL_LSN,_SL_LOG_CONTROL_AREA *);
long LogReadHeaderCompletion(void *,void *,unsigned long,long,_LOG_READ_IO_CONTEXT *);
long LogReadPayloadCompletion(void *,void *,unsigned long,long,_LOG_READ_IO_CONTEXT *);
long LogReadRecordComplete(_LOG_READ_IO_CONTEXT *);
long LogValidateEntryHeader(_LOG_HANDLE *,_SL_LSN,_LOG_ENTRY_HEADER *,unsigned long,unsigned char);
long LogValidateEntryPayload(_LOG_HANDLE *,_LOG_ENTRY_HEADER *,unsigned long,void *,unsigned long);
long LogValidateSector(_LOG_HANDLE *,unsigned char *,_LOG_SECTOR_SIGNATURE);
long LogWriteControlRecord(_LOG_HANDLE *,void *,_SL_LSN,_SL_LOG_CONTROL_AREA *);
long LogWriteEntryCompletion(void *,void *,unsigned long,long,_LOG_WRITE_IO_CONTEXT *);
long RtlStringCchCopyW(unsigned short *,unsigned __int64,unsigned short const *);
long ScAnsiToUnicodeString(char *,_UNICODE_STRING *);
long ScValidatePerformance(_SP_PERFORMANCE_INFO *,unsigned char);
long ScValidateProvisioning(_SP_PROVISIONING_INFO *,unsigned char);
long ScValidateResiliencyTemplates(SP_RESILIENCY_INFO * const);
long SioRaidOverlapRoutineFind(_SL_OVERLAP_TYPE,_SL_TABLE_NODE *,_SL_TABLE_ELEMENT *,unsigned long,unsigned __int64,void *);
long SioRaidOverlapRoutineInsert(_SL_OVERLAP_TYPE,_SL_TABLE_NODE *,_SL_TABLE_ELEMENT *,unsigned long,unsigned __int64,void *);
long SioRaidOverlapRoutineRead(_SL_OVERLAP_TYPE,_SL_TABLE_NODE *,_SL_TABLE_ELEMENT *,unsigned long,unsigned __int64,void *);
long SlLogAdvanceLogStart(void *,void *,_SL_LSN,_SL_LSN *,unsigned long *);
long SlLogFlushLog(void *,void *);
long SlLogGetHostInfo(void *,void *,unsigned long);
long SlLogGetLogInfo(void *,_SL_LSN *,_SL_LSN *,_SL_LSN *,unsigned __int64 *,unsigned __int64 *);
long SlLogOnLogFlush(void *);
long SlLogOnRecordCommit(void *,_SL_LSN);
long SlLogOpenLog(void *,unsigned char,unsigned char,unsigned long,__int64,__int64,void * *);
long SlLogReadLogRecord(void *,void *,_SL_LSN,unsigned long,void *,unsigned long,void *,unsigned long,__int64);
long SlLogScanLogRecord(void *,void *,_SL_LSN,void *,unsigned long,_SL_LOG_SCAN_CONTEXT *,void *,unsigned long,unsigned char,_SL_LSN *);
long SlLogSetEndOfLog(void *,_SL_LSN,_SL_LSN *,unsigned long *);
long SlLogSetHostInfo(void *,void *,void *,unsigned long,unsigned char);
long SlLogWriteLogRecord(void *,void *,void *,unsigned long,void *,unsigned long,void *,unsigned long,_SL_LSN *);
long SpAccessCheck(void *,_IRP *);
long SpAccessCheckPool(SP_POOL *,_IRP *);
long SpAccessCheckSpace(SP_POOL *,SDB_SPACE *,_IRP *);
long SpAddDevice(_DRIVER_OBJECT *,_DEVICE_OBJECT *);
long SpCensusCallback(_DEVICE_OBJECT *,_LIST_ENTRY *,_LIST_ENTRY *,void *);
long SpCompletionCallback(_DEVICE_OBJECT *,_LIST_ENTRY *,_LIST_ENTRY *,void *);
long SpControlCompletionRoutine(_DEVICE_OBJECT *,_IRP *,void *);
long SpControlDeviceControl(_DEVICE_OBJECT *,_IRP *);
long SpControlPnp(_DEVICE_OBJECT *,_IRP *);
long SpControlScsi(_DEVICE_OBJECT *,_IRP *);
long SpControlShutdown(_DEVICE_OBJECT *,_IRP *);
long SpControlSkip(_DEVICE_OBJECT *,_IRP *);
long SpCreateDevice(_GUID,_GUID,SP_DEVICE * *);
long SpDeleteMissingDrive(SP_POOL *,_GUID);
long SpDeletePresentDriveFromPool(SP_POOL *,SP_DRIVE *);
long SpDeviceUsageNotification(SP_DEVICE *,_IRP *);
long SpDiskVolumesAreReady(SP_DEVICE *,_IRP *);
long SpDispatch(_DEVICE_OBJECT *,_IRP *);
long SpDriveArrived(_DEVICE_OBJECT *,_UNICODE_STRING *,_STORAGE_ENDPOINT *);
long SpDriveReadyCallback(_DEVICE_OBJECT *,_LIST_ENTRY *,_LIST_ENTRY *,void *);
long SpDriveRemoved(_DEVICE_OBJECT *);
long SpDriveRequestRepairCallback(_DEVICE_OBJECT *,_LIST_ENTRY *,_LIST_ENTRY *,void *);
long SpDrtCallback(_DEVICE_OBJECT *,_LIST_ENTRY *,_LIST_ENTRY *,void *);
long SpDrtFullCallback(_DEVICE_OBJECT *,_LIST_ENTRY *,_LIST_ENTRY *,void *);
long SpEnclosureArrival(_DEVICE_OBJECT *,_UNICODE_STRING *,_UNICODE_STRING *,_STORAGE_ENDPOINT *);
long SpEnclosureCallback(_DEVICE_OBJECT *,_LIST_ENTRY *,_LIST_ENTRY *,void *);
long SpEnclosureNotification(void *,void *);
long SpEnclosureRemoval(_DEVICE_OBJECT *,_UNICODE_STRING *);
long SpExtractDeviceStrings(_STORAGE_DEVICE_DESCRIPTOR *,_UNICODE_STRING *,_UNICODE_STRING *,_UNICODE_STRING *,_UNICODE_STRING *);
long SpFreeDumpInfo(SP_DEVICE *,_IRP *);
long SpGenerateIdByStorageId(_STORAGE_DEVICE_ID_DESCRIPTOR *,_GUID *);
long SpGetAddress(SP_DEVICE *,_IRP *);
long SpGetDataLoss(SP_DEVICE *,_IRP *);
long SpGetDeviceProperty(_DEVICE_OBJECT *,_DEVPROPKEY const *,void * *);
long SpGetDumpInfo(SP_DEVICE *,_IRP *);
long SpGetStreamParameters(SP_DEVICE *,_IRP *);
long SpGetSystemAddressFromSrb(_IRP *,void * *);
long SpIdsCopyHelper(_GUID *,unsigned long,_GUID * *);
long SpIoCompletionRoutine(_DEVICE_OBJECT *,_IRP *,void *);
long SpIoctlAddDrives(_IRP *);
long SpIoctlAddDrivesInternal(SP_POOL *,unsigned long,SP_DRIVE * *);
long SpIoctlAddDrivesLegacy(SP_POOL *,unsigned long,SP_DRIVE * *);
long SpIoctlAttachSpace(_IRP *);
long SpIoctlCreatePool(_IRP *);
long SpIoctlCreateSpace(_IRP *);
long SpIoctlCreateTier(_IRP *);
long SpIoctlDeletePool(_IRP *);
long SpIoctlDeleteSpace(_IRP *);
long SpIoctlDeleteTier(_IRP *);
long SpIoctlDetachSpace(_IRP *);
long SpIoctlDiskArrived(_IRP *);
long SpIoctlDiskRemoved(_IRP *);
long SpIoctlExecuteControlWork(_IRP *);
long SpIoctlFinalizeSpace(_IRP *);
long SpIoctlGetControlInfo(_IRP *);
long SpIoctlGetControlWork(_IRP *);
long SpIoctlGetDriveInfo(_IRP *);
long SpIoctlGetDrives(_IRP *);
long SpIoctlGetEnclosureInfo(_IRP *);
long SpIoctlGetEnclosures(_IRP *);
long SpIoctlGetPoolInfo(_IRP *);
long SpIoctlGetPools(_IRP *);
long SpIoctlGetReallocationTaskInfo(SP_POOL *,_GUID *,_SP_TASK_INFO *);
long SpIoctlGetRebalanceTaskInfo(SP_POOL *,_GUID *,_SP_TASK_INFO *);
long SpIoctlGetRepairTaskInfo(SP_POOL *,_GUID *,_SP_TASK_INFO *);
long SpIoctlGetSpaceInfo(_IRP *);
long SpIoctlGetSpaces(_IRP *);
long SpIoctlGetTaskInfo(_IRP *);
long SpIoctlGetTasks(_IRP *);
long SpIoctlGetTierInfo(_IRP *);
long SpIoctlGetTiers(_IRP *);
long SpIoctlGrowSpace(_IRP *);
long SpIoctlIsRedirectionSupported(_IRP *);
long SpIoctlPartitionArrived(_IRP *);
long SpIoctlPartitionRemoved(_IRP *);
long SpIoctlReallocateDrives(_IRP *);
long SpIoctlRebalancePool(_IRP *);
long SpIoctlRedirectRequest(_IRP *);
long SpIoctlReferenceDependantVolumes(_IRP *);
long SpIoctlRefreshDrive(_IRP *);
long SpIoctlRefreshEnclosure(_IRP *);
long SpIoctlRemoveDrives(_IRP *);
long SpIoctlRemoveDrivesEstimate(_IRP *);
long SpIoctlRemoveDrivesInternal(SP_POOL *,_SP_IDS_EX *);
long SpIoctlRemoveDrivesLegacy(SP_POOL *,_SP_IDS_EX *);
long SpIoctlRepairSpace(_IRP *);
long SpIoctlResetDrive(_IRP *);
long SpIoctlResetFailedDrive(SP_DRIVE *);
long SpIoctlResetSplitDrive(SP_POOL *,SDB_RECORD *);
long SpIoctlRetireDrives(_IRP *);
long SpIoctlSemRegister(_IRP *);
long SpIoctlSetControlInfo(_IRP *);
long SpIoctlSetControlWork(_IRP *);
long SpIoctlSetDriveInfo(_IRP *);
long SpIoctlSetEnclosureInfo(_IRP *);
long SpIoctlSetMaintenanceMode(_IRP *);
long SpIoctlSetMetadataDrives(_IRP *);
long SpIoctlSetPoolAttributes(_IRP *);
long SpIoctlSetPoolInfo(_IRP *);
long SpIoctlSetPoolMetadataDrives(SP_POOL *,_SP_IDS_EX *);
long SpIoctlSetSpaceAttributes(_IRP *);
long SpIoctlSetSpaceInfo(_IRP *);
long SpIoctlSetSpaceMetadataDrives(SP_POOL *,SP_SPACE *,_SP_IDS_EX *);
long SpIoctlSetSpacePriority(_IRP *);
long SpIoctlSetTierInfo(_IRP *);
long SpIoctlStopTask(_IRP *);
long SpIoctlUpdateSpaces(_IRP *);
long SpIoctlUpgradePool(_IRP *);
long SpLibOnPacketCompletion(SC_PACKET *);
long SpLogAdvanceCallback(_DEVICE_OBJECT *,_LIST_ENTRY *,_LIST_ENTRY *,void *);
long SpLogCounterSetCallback(_PCW_CALLBACK_TYPE,_PCW_CALLBACK_INFORMATION *,void *);
long SpLogReadyCallback(_DEVICE_OBJECT *,_LIST_ENTRY *,_LIST_ENTRY *,void *);
long SpLogWriteCallback(_DEVICE_OBJECT *,_LIST_ENTRY *,_LIST_ENTRY *,void *);
long SpManageDataSetAttributes(SP_DEVICE *,_IRP *);
long SpMapCallback(_DEVICE_OBJECT *,_LIST_ENTRY *,_LIST_ENTRY *,void *);
long SpMarkDeleted(_DEVICE_OBJECT *,unsigned char);
long SpPartitionArrived(_DEVICE_OBJECT *);
long SpPartitionRemoved(_DEVICE_OBJECT *);
long SpPersistAttributes(_SP_ATTRIBUTES_INFO *,unsigned __int64,unsigned __int64 *);
long SpPrmArrival(_UNICODE_STRING *);
long SpPrmCallback(_DEVICE_OBJECT *,_LIST_ENTRY *,_LIST_ENTRY *,void *);
long SpPrmDisableDrive(_DEVICE_OBJECT *);
long SpPrmEnableDrive(_DEVICE_OBJECT *);
long SpPrmGetNumberOfDrives(_GUID *,unsigned long *,unsigned long *);
long SpPrmNotification(void *,void *);
long SpPrmNotify(_GUID,_GUID,_PRM_NOTIFICATION_TYPE,SP_DRIVE *);
long SpPrmReceiveMessage(void *,unsigned long);
long SpPrmRemoval(_UNICODE_STRING *);
long SpQueryAccessAlignmentProperty(SP_DEVICE *,_IRP *);
long SpQueryAdapterProperty(SP_DEVICE *,_IRP *);
long SpQueryDependentDisk(SP_DEVICE *,_IRP *);
long SpQueryDependentDiskQos(SP_DEVICE *,_IRP *);
long SpQueryDeviceAttributesProperty(SP_DEVICE *,_IRP *);
long SpQueryDeviceIdProperty(SP_DEVICE *,_IRP *);
long SpQueryDeviceProperty(SP_DEVICE *,_IRP *);
long SpQueryDeviceResiliencyProperty(SP_DEVICE *,_IRP *);
long SpQueryDeviceText(SP_DEVICE *,_IRP *);
long SpQueryDeviceTieringProperty(SP_DEVICE *,_IRP *);
long SpQueryId(SP_DEVICE *,_IRP *);
long SpQueryMiniportProperty(SP_DEVICE *,_IRP *);
long SpQueryPowerRelations(SP_DEVICE *,_DEVICE_RELATIONS * *);
long SpQueryProperty(SP_DEVICE *,_IRP *);
long SpQueryProperty(_DEVICE_OBJECT *,_STORAGE_PROPERTY_ID,unsigned long,void * *);
long SpQueryRootId(SP_CONTROL *,_IRP *);
long SpReadyCallback(_DEVICE_OBJECT *,_LIST_ENTRY *,_LIST_ENTRY *,void *);
long SpRebalanceCallback(_DEVICE_OBJECT *,_LIST_ENTRY *,_LIST_ENTRY *,void *);
long SpReceiveDiagnostic(_DEVICE_OBJECT *,unsigned char,_SES_DIAGNOSTIC_PAGE * *);
long SpRefreshDrive(SP_DRIVE *,unsigned char);
long SpRefreshPool(_GUID,unsigned char,unsigned char);
long SpRefreshSlot(SP_DRIVE *);
long SpReissueCallback(_DEVICE_OBJECT *,_LIST_ENTRY *,_LIST_ENTRY *,void *);
long SpReleaseStreamId(SP_DEVICE *,_IRP *);
long SpRepairCallback(_DEVICE_OBJECT *,_LIST_ENTRY *,_LIST_ENTRY *,void *);
long SpRepairSpace(_SP_ID *,_SC_REPAIR_PHASE,_GUID,unsigned char);
long SpRepairSpaceCallback(_DEVICE_OBJECT *,_LIST_ENTRY *,_LIST_ENTRY *,void *);
long SpReportTimestamp(_DEVICE_OBJECT *,unsigned __int64 *);
long SpScsiGetLbaStatus(SP_DEVICE *,_IRP *);
long SpScsiInquiry(SP_DEVICE *,_IRP *);
long SpScsiInquiryData(SP_DEVICE *,_IRP *);
long SpScsiModeSense(SP_DEVICE *,_IRP *);
long SpScsiPassThrough(SP_DEVICE *,_IRP *);
long SpScsiPassThroughDirect(SP_DEVICE *,_IRP *);
long SpScsiReadCapacity(SP_DEVICE *,_IRP *);
long SpScsiReadWrite(SP_DEVICE *,_IRP *);
long SpScsiSynchronizeCache(SP_DEVICE *,_IRP *);
long SpScsiVPDBlockDeviceCharacteristics(SP_DEVICE *,_IRP *);
long SpScsiVPDBlockLimits(SP_DEVICE *,_IRP *);
long SpScsiVPDDeviceIdentifier(SP_DEVICE *,_IRP *);
long SpScsiVPDLogicalBlockProvisioning(SP_DEVICE *,_IRP *);
long SpScsiVPDSupportedPages(SP_DEVICE *,_IRP *);
long SpScsiVPDVirtualDeviceProperties(SP_DEVICE *,_IRP *);
long SpSdCopyHelper(void *,unsigned long,void * *,unsigned short *);
long SpSeArrived(_STORAGE_ENDPOINT *);
long SpSeChanged(_STORAGE_ENDPOINT *);
long SpSeNotification(_STORAGE_ENDPOINT *,_SE_NOTIFICATION_TYPE);
long SpSeRemoved(_STORAGE_ENDPOINT *);
long SpSendDeviceControl(_DEVICE_OBJECT *,unsigned long,void *,unsigned long,void *,unsigned long);
long SpSendDiagnostic(_DEVICE_OBJECT *,_SES_DIAGNOSTIC_PAGE *);
long SpSendScsiRequest(_DEVICE_OBJECT *,_SCSI_REQUEST_BLOCK *);
long SpSetTimestamp(_DEVICE_OBJECT *,unsigned __int64);
long SpSignalCompletionRoutine(_DEVICE_OBJECT *,_IRP *,void *);
long SpSpaceCounterSetCallback(_PCW_CALLBACK_TYPE,_PCW_CALLBACK_INFORMATION *,void *);
long SpSpaceDeviceControl(_DEVICE_OBJECT *,_IRP *);
long SpSpaceFlush(_DEVICE_OBJECT *,_IRP *);
long SpSpacePnp(_DEVICE_OBJECT *,_IRP *);
long SpSpacePower(_DEVICE_OBJECT *,_IRP *);
long SpSpaceReadWrite(_DEVICE_OBJECT *,_IRP *);
long SpSpaceScsi(_DEVICE_OBJECT *,_IRP *);
long SpSpaceWmi(_DEVICE_OBJECT *,_IRP *);
long SpSrbCompletionRoutine(_DEVICE_OBJECT *,_IRP *,void *);
long SpStartDevice(SP_DEVICE *,_IRP *);
long SpStringCchCopyHelper(unsigned short *,unsigned long,unsigned short * *);
long SpSuccess(_DEVICE_OBJECT *,_IRP *);
long SpTierCounterSetCallback(_PCW_CALLBACK_TYPE,_PCW_CALLBACK_INFORMATION *,void *);
long SpTransferCallback(_DEVICE_OBJECT *,_LIST_ENTRY *,_LIST_ENTRY *,void *);
long SpTrim(SP_DEVICE *,_IRP *);
long SpUnmapExtents(_SP_ID *,_DEVICE_DATA_SET_RANGE *,unsigned long);
long SpUpdateColumn(SP_DEVICE *);
long SpUpdateColumnCallback(_DEVICE_OBJECT *,_LIST_ENTRY *,_LIST_ENTRY *,void *);
long SpWnfCallback(_DEVICE_OBJECT *,_LIST_ENTRY *,_LIST_ENTRY *,void *);
long SpWorkItemCompletionRoutine(_DEVICE_OBJECT *,_IRP *,void *);
long UnformatField(void * *,unsigned long,unsigned long,unsigned char * &,unsigned long &);
long UnformatField(void *,unsigned long,unsigned char * &,unsigned long &);
long UnformatGuid(_GUID *,unsigned char * &,unsigned long &);
unsigned __int64 ScCalculateSlabSize(_SP_PROVISIONING_INFO *,SP_RESILIENCY_INFO *);
unsigned __int64 SlLogGetLength(void *,_SL_LSN *,_SL_LSN *);
unsigned char (* ConfigVersionInfo)[8];
unsigned char LogIsValidDataLsnLogOffset(_LOG_HANDLE *,_SL_LSN);
unsigned char ScIsHardwareError(long);
unsigned char ScIsMediaError(long);
unsigned char ScIsReservationConflict(long);
unsigned char SpAcquireResourceExclusiveNonBlocking(_ERESOURCE *);
unsigned char SpGetSlotState(SDB_DRIVE *,long *);
unsigned char SpIsDriveConnected(SDB_DRIVE *);
unsigned char SpIsEqualStorageId(_STORAGE_IDENTIFIER *,_STORAGE_IDENTIFIER *);
unsigned char SpLookupDevice(_DEVICE_OBJECT *);
unsigned char SpLookupStorageId(_STORAGE_DEVICE_ID_DESCRIPTOR *,_STORAGE_IDENTIFIER *);
unsigned long LogGetLogUsedPercentage(_LOG_HANDLE *);
unsigned long SP_TL_DEFAULT;
unsigned long ScGetRelativeMediaSpeed(_SC_MEDIA_TYPE);
unsigned long SlLogGetLogRecordHeaderLength(void *,unsigned long,unsigned long);
unsigned short * SpIdsToString(_SP_IDS_EX *);
void * SlTableAllocateRoutine(_RTL_AVL_TABLE *,unsigned long);
void * operator new(unsigned __int64);
void LogInitializeEntryHeader(_LOG_ENTRY_HEADER *,_LOG_HANDLE *,_SL_LSN,unsigned long,unsigned long);
void ScFreeLists(_LIST_ENTRY *);
void ScSortLists(_LIST_ENTRY *);
void ScTrimString(char *);
void SioTaskWorkerRoutine(void *);
void SlLogCloseLog(void *);
void SlTableFreeRoutine(_RTL_AVL_TABLE *,void *);
void SpAcquireResourceExclusive(_ERESOURCE *);
void SpAcquireResourceShared(_ERESOURCE *);
void SpCancelAttach(_DEVICE_OBJECT *,_IRP *);
void SpCommitSpace(SP_DEVICE *,SP_SPACE *);
void SpCommitSpaceInternal(SP_SPACE *,SP_SPACE *);
void SpDeleteDevice(SP_DEVICE *);
void SpDriveRemovedHelper(SP_DRIVE *);
void SpDriveRequestRepair(_SP_TELEMETRY_REPAIR_REASON);
void SpGetIndications(_SES_STATUS_DESCRIPTOR *,_SES_ELEMENT_TYPE,unsigned char *,unsigned char *,unsigned char *);
void SpIdToString(_GUID *,unsigned short *);
void SpLogStatus(SP_DEVICE *,_IRP *);
void SpNotify(_GUID,_GUID,_GUID,_SP_NOTIFICATION_TYPE,unsigned long,SP_POOL *,void *);
void SpNtStatusToSrbStatus(_IRP *);
void SpOfflineDrive(SP_DRIVE *,_SP_ID);
void SpPoolRemove(SP_POOL *);
void SpReleaseReferenceShared(SP_DEVICE *);
void SpReleaseResourceExclusive(_ERESOURCE *);
void SpReleaseResourceExclusiveNonBlocking(_ERESOURCE *);
void SpReleaseResourceShared(_ERESOURCE *);
void SpSetIndications(_SES_CONTROL_DESCRIPTOR *,_SES_ELEMENT_TYPE,unsigned char,unsigned char,unsigned char);
void SpSpaceRequestRepair(_SP_TELEMETRY_REPAIR_REASON,_SP_ID *);
void SpTaskIdToPoolId(_GUID *,_SP_TASK_TYPE,_GUID *);
void SpTaskIdToSpaceId(_GUID *,_SP_TASK_TYPE,_GUID *);
void SpUnload(_DRIVER_OBJECT *);
void SpWnfNotify(_SP_NOTIFICATION_INFO *);
void SpWorkItemDpcRoutine(_KDPC *,void *,void *,void *);
void SpWorkItemWorkerRoutine(_DEVICE_OBJECT *,void *);
