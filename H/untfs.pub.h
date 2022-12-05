struct DFileName
{
	virtual long Compare(OBJECT const *);
};

struct DP_DRIVE
{
	virtual BIG_INT QuerySectors();
	virtual long QueryDataRedundancyCount(unsigned long *,unsigned long *);
	virtual long QueryReadCacheSize(unsigned __int64 *);
	virtual long QueryTierCount(unsigned long *);
	virtual unsigned char QueryPartitionInfo(_PARTITION_INFORMATION_EX *);
	virtual unsigned long QuerySectorSize();
	virtual unsigned long QueryWriteBlockSize();
};

struct DSTRING
{
	virtual unsigned char NewBuf(unsigned long);
	virtual unsigned char Resize(unsigned long);
	virtual unsigned char SPrintf(unsigned short const *,...);
	virtual unsigned char SPrintfAppend(unsigned short const *,...);
};

struct DriverLogManagement
{
	virtual unsigned char CreateLogSubDirectory(WSTRING const *,_CANNED_SECURITY_TYPE *,unsigned long,unsigned char *);
	virtual unsigned char DeleteLogFile(FileDescriptor *);
	virtual unsigned char DumpToFile(WSTRING const *,HMEM *,unsigned long,_CANNED_SECURITY_TYPE,unsigned char *,unsigned char);
	virtual unsigned char EnumerateLogFiles(ARRAY *);
	virtual unsigned char Flush();
	virtual unsigned char Initialize(NTFS_CHKDSK_INFO *,MESSAGE *);
	virtual unsigned char LookupDirectory(WSTRING const *);
};

struct FileDescriptor
{
	static unsigned char RecognizeAndAdd(WSTRING const *,ARRAY *,BIG_INT,BIG_INT);
	static unsigned short const * const * const LogPrefixes;
	static unsigned short const * const LogSuffix;
	virtual long Compare(OBJECT const *);
};

class INDEX_TREE_BUFCACHE
{
	INDEX_TREE_BUFCACHE_ENTRY * Lookup(BIG_INT);
	unsigned char Initialize(unsigned short);
	void Remove(INDEX_TREE_BUFCACHE_ENTRY *);
};

class INDEX_TREE_BUFCACHE_ENTRY
{
	unsigned char Initialize(INDEX_TREE_BUFCACHE *,BIG_INT,unsigned long);
};

class NTFS_ATTRIBUTE
{
	unsigned char InsertMftDataIntoFile(NTFS_FILE_RECORD_SEGMENT *,NTFS_BITMAP *);
	void Destroy();
public:
	BIG_INT QueryAllocatedLength();
	BIG_INT QueryClustersAllocated();
	NTFS_ATTRIBUTE();
	unsigned char AddAttributeRecord(NTFS_ATTRIBUTE_RECORD const *,NTFS_EXTENT_LIST * *);
	unsigned char Fill(BIG_INT,char,unsigned long);
	unsigned char GetNextAllocationOffset(BIG_INT *,BIG_INT *);
	unsigned char Hotfix(BIG_INT,BIG_INT,NTFS_BITMAP *,NUMBER_SET *,unsigned char,unsigned char);
	unsigned char Initialize(LOG_IO_DP_DRIVE *,unsigned long,NTFS_ATTRIBUTE_RECORD const *,unsigned char);
	unsigned char Initialize(LOG_IO_DP_DRIVE *,unsigned long,NTFS_EXTENT_LIST const *,BIG_INT,BIG_INT,unsigned long,WSTRING const *,unsigned short);
	unsigned char Initialize(LOG_IO_DP_DRIVE *,unsigned long,void const *,unsigned long,unsigned long,WSTRING const *,unsigned short);
	unsigned char IsAllocationZeroed(unsigned char *);
	unsigned char MarkAsAllocated(NTFS_BITMAP *);
	unsigned char Prefetch(BIG_INT,unsigned long);
	unsigned char Read(void *,BIG_INT,unsigned long,unsigned long *);
	unsigned char RecoverAttribute(NTFS_BITMAP *,NUMBER_SET *,BIG_INT *,NTFS_CHKDSK_INFO *);
	unsigned char ReplaceVcns(BIG_INT,BIG_INT,BIG_INT);
	unsigned char VerifyAndFix(BIG_INT);
	virtual unsigned char InsertIntoFile(NTFS_FILE_RECORD_SEGMENT *,NTFS_BITMAP *);
	virtual unsigned char MakeNonresident(NTFS_BITMAP *);
	virtual unsigned char Resize(BIG_INT,NTFS_BITMAP *);
	virtual unsigned char SetSparse(BIG_INT,NTFS_BITMAP *,unsigned char);
	virtual unsigned char Write(void const *,BIG_INT,unsigned long,unsigned long *,NTFS_BITMAP *);
	virtual ~NTFS_ATTRIBUTE();
	void PrimeCache(BIG_INT,unsigned long);
};

class NTFS_ATTRIBUTE_COLUMNS
{
	void Destroy();
public:
	unsigned char QueryIndex(unsigned long,unsigned long *);
	virtual ~NTFS_ATTRIBUTE_COLUMNS();
};

struct NTFS_ATTRIBUTE_DEFINITION_TABLE
{
	NTFS_ATTRIBUTE_DEFINITION_TABLE();
	unsigned char Create(_STANDARD_INFORMATION const *,BIG_INT,NTFS_BITMAP *);
	unsigned char Initialize(FIX_LEVEL,NTFS_MASTER_FILE_TABLE *,unsigned char);
	unsigned char VerifyAndFix(NTFS_ATTRIBUTE_COLUMNS *,NTFS_BITMAP *,NUMBER_SET *,NTFS_INDEX_TREE *,unsigned char *,FIX_LEVEL,MESSAGE *,unsigned char);
	virtual ~NTFS_ATTRIBUTE_DEFINITION_TABLE();
};

class NTFS_ATTRIBUTE_LIST
{
	_ATTRIBUTE_LIST_ENTRY * FindEntry(unsigned long,WSTRING const *,BIG_INT,unsigned long *,unsigned long *);
	unsigned char Sort(unsigned char *);
public:
	NTFS_ATTRIBUTE_LIST();
	_ATTRIBUTE_LIST_ENTRY const * GetNextAttributeListEntry(_ATTRIBUTE_LIST_ENTRY const *);
	unsigned char AddEntry(unsigned long,BIG_INT,_MFT_SEGMENT_REFERENCE const *,unsigned short,WSTRING const *);
	unsigned char DeleteCurrentEntry(_ATTR_LIST_CURR_ENTRY *);
	unsigned char DeleteEntry(unsigned long);
	unsigned char DeleteEntry(unsigned long,BIG_INT,WSTRING const *,_MFT_SEGMENT_REFERENCE const *);
	unsigned char QueryAttributeRecord(void *,unsigned long,NTFS_ATTRIBUTE_RECORD *);
	unsigned char QueryExternalReference(unsigned long,_MFT_SEGMENT_REFERENCE *,unsigned long *,WSTRING const *,BIG_INT *,BIG_INT *);
	unsigned char QueryNextEntry(_ATTRIBUTE_LIST_ENTRY * *,unsigned long,WSTRING const *,_MFT_SEGMENT_REFERENCE *);
	unsigned char QueryNextEntry(_ATTR_LIST_CURR_ENTRY *,unsigned long *,BIG_INT *,_MFT_SEGMENT_REFERENCE *,unsigned short *,WSTRING *);
	unsigned char ReadList();
	unsigned char VerifyAndFix(FIX_LEVEL,NTFS_BITMAP *,MESSAGE *,BIG_INT,unsigned char *,unsigned char *);
	unsigned char WriteList(NTFS_BITMAP *);
	virtual ~NTFS_ATTRIBUTE_LIST();
};

class NTFS_ATTRIBUTE_RECORD
{
	void Destroy();
public:
	NTFS_ATTRIBUTE_RECORD();
	unsigned char CheckForUnUseClustersBootRelocations(NTFS_BITMAP *,NTFS_CHKDSK_INFO *);
	unsigned char CheckForUseClustersBootRelocations(NTFS_BITMAP *,BIG_INT,BIG_INT,BIG_INT,NTFS_CHKDSK_INFO *,unsigned char *);
	unsigned char CreateNonresidentRecord(NTFS_EXTENT_LIST const *,BIG_INT,BIG_INT,BIG_INT,unsigned long,WSTRING const *,unsigned short,unsigned short,unsigned long);
	unsigned char CreateResidentRecord(void const *,unsigned long,unsigned long,WSTRING const *,unsigned short,unsigned char);
	unsigned char Initialize(IO_DP_DRIVE *,void *);
	unsigned char Initialize(IO_DP_DRIVE *,void *,unsigned long,unsigned char);
	unsigned char IsMatch(unsigned long,WSTRING const *,void const *,unsigned long);
	unsigned char QueryExtentList(NTFS_EXTENT_LIST *);
	unsigned char QueryName(WSTRING *);
	unsigned char Truncate(BIG_INT,BIG_INT,BIG_INT);
	unsigned char UnUseClusters(NTFS_BITMAP *,NTFS_CHKDSK_INFO *);
	unsigned char UseClusters(NTFS_BITMAP *,BIG_INT *,unsigned char *,NTFS_CHKDSK_INFO *);
	unsigned char Verify(NTFS_ATTRIBUTE_COLUMNS const *,unsigned char,unsigned long,unsigned char);
	virtual ~NTFS_ATTRIBUTE_RECORD();
	void QueryValueLength(BIG_INT *,BIG_INT *,BIG_INT *,BIG_INT *);
};

struct NTFS_BAD_CLUSTER_FILE
{
	BIG_INT QueryNumBad();
	NTFS_BAD_CLUSTER_FILE();
	unsigned char Add(NUMBER_SET const *);
	unsigned char AddRun(BIG_INT,BIG_INT);
	unsigned char Create(_STANDARD_INFORMATION const *,NTFS_BITMAP *,NUMBER_SET const *);
	unsigned char Flush(NTFS_BITMAP *,NTFS_INDEX_TREE *);
	unsigned char Initialize(FIX_LEVEL,NTFS_MASTER_FILE_TABLE *);
	unsigned char ResetBadClusters(NTFS_BITMAP *);
	unsigned char VerifyAndFix(NTFS_BITMAP *,NTFS_INDEX_TREE *,unsigned char *,FIX_LEVEL,MESSAGE *);
	virtual ~NTFS_BAD_CLUSTER_FILE();
};

class NTFS_BITMAP
{
	void Destroy();
public:
	NTFS_BITMAP();
	unsigned char AllocateClusters(BIG_INT,BIG_INT,BIG_INT *,unsigned long);
	unsigned char Initialize(BIG_INT,unsigned char,LOG_IO_DP_DRIVE *,unsigned long,unsigned char);
	unsigned char IsAllocated(BIG_INT,BIG_INT);
	unsigned char IsFree(BIG_INT,BIG_INT);
	unsigned char Resize(BIG_INT);
	unsigned char Write(NTFS_ATTRIBUTE *,NTFS_BITMAP *);
	unsigned char WriteModified(NTFS_ATTRIBUTE *,NTFS_BITMAP *);
	virtual ~NTFS_BITMAP();
	void SetAllocated(BIG_INT,BIG_INT);
	void SetFree(BIG_INT,BIG_INT);
};

struct NTFS_BITMAP_FILE
{
	NTFS_BITMAP_FILE();
	unsigned char Create(_STANDARD_INFORMATION const *,BIG_INT,unsigned long,NTFS_BITMAP *);
	unsigned char Initialize(FIX_LEVEL,NTFS_MASTER_FILE_TABLE *);
	virtual ~NTFS_BITMAP_FILE();
};

class NTFS_BOOT_FILE
{
	unsigned char CreateDataAttribute(unsigned long *);
public:
	NTFS_BOOT_FILE();
	unsigned char Initialize(FIX_LEVEL,NTFS_MASTER_FILE_TABLE *);
	unsigned char VerifyAndFix(NTFS_BITMAP *,NTFS_INDEX_TREE *,unsigned char *,FIX_LEVEL,MESSAGE *);
	virtual ~NTFS_BOOT_FILE();
};

struct NTFS_CHKDSK_INFO
{
	NTFS_CHKDSK_INFO();
	NTFS_CHKDSK_STATS * GetChkdskStats();
	unsigned char InitializeBandwidthEstimate(BIG_INT,unsigned long,unsigned long,BIG_INT,unsigned short,unsigned char,unsigned char,NTFS_SA const *);
	unsigned char PhaseProgressComplete(PHASE);
	unsigned char SqmExport(unsigned char (*)(void *,unsigned long,unsigned char,char *,...),void *);
	unsigned char UpdatePhaseProgress(PHASE,BIG_INT,BIG_INT);
	void PassUpdateEstimate(unsigned long);
	void UpdateStorageEstimate(BIG_INT,unsigned long);
	~NTFS_CHKDSK_INFO();
};

struct NTFS_CLUSTER_RUN
{
	NTFS_CLUSTER_RUN();
	unsigned char Initialize(MEM *,LOG_IO_DP_DRIVE *,BIG_INT,unsigned long,unsigned long);
	virtual unsigned char Write();
	virtual unsigned char Write(unsigned char);
	virtual ~NTFS_CLUSTER_RUN();
	void Relocate(BIG_INT);
};

struct NTFS_CORRUPT_RECORD
{
	virtual long Compare(OBJECT const *);
};

class NTFS_EXTENT_LIST
{
	static unsigned char ExpandMappingPairs(void const *,BIG_INT,unsigned long,unsigned long,_MAPPING_PAIR *,unsigned long *);
	void Destroy();
	void Truncate(BIG_INT,NTFS_BITMAP *);
public:
	BIG_INT QueryClustersAllocated();
	NTFS_EXTENT_LIST();
	unsigned char AddExtent(BIG_INT,BIG_INT,BIG_INT);
	unsigned char Initialize(BIG_INT,BIG_INT);
	unsigned char Initialize(BIG_INT,void const *,unsigned long,unsigned char *);
	unsigned char Initialize(NTFS_EXTENT_LIST const *);
	unsigned char IsSparse();
	unsigned char QueryCompressedMappingPairs(BIG_INT *,BIG_INT *,unsigned long *,unsigned long,void *,unsigned char *);
	unsigned char QueryExtent(unsigned long,BIG_INT *,BIG_INT *,BIG_INT *);
	unsigned char QueryLcnFromVcn(BIG_INT,BIG_INT *,BIG_INT *);
	unsigned char Resize(BIG_INT,NTFS_BITMAP *);
	unsigned long QueryNumberOfExtents();
	virtual ~NTFS_EXTENT_LIST();
	void DeleteExtent(unsigned long,unsigned char);
};

class NTFS_FILE_RECORD_SEGMENT
{
	NTFS_FILE_RECORD_SEGMENT * GetChild(BIG_INT);
	NTFS_FILE_RECORD_SEGMENT * SetupChild(BIG_INT);
	unsigned char AddChild(NTFS_FILE_RECORD_SEGMENT *);
	unsigned char BacktrackWorker(WSTRING *);
	unsigned char Create(unsigned short);
	unsigned char CreateAttributeList(NTFS_ATTRIBUTE_LIST *);
	unsigned char DeleteDuplicateFileNames(unsigned char *,FIX_LEVEL,MESSAGE *,NTFS_CHKDSK_INFO *);
	unsigned char InsertExternalAttributeRecord(NTFS_ATTRIBUTE_RECORD *);
	unsigned char SaveAttributeList(NTFS_BITMAP *);
	unsigned char SetupAttributeList();
	void Destroy();
protected:
	unsigned char Initialize(FIX_LEVEL,LOG_IO_DP_DRIVE *,BIG_INT,NTFS_MASTER_FILE_TABLE *);
public:
	NTFS_FILE_RECORD_SEGMENT();
	NTFS_QUOTA_CODE VerifyAndFixQuotaDefaultId(NTFS_BITMAP *,unsigned char);
	NTFS_SECURITY_CODE FindSecurityIndexEntryAndValidate(NTFS_INDEX_TREE *,void *,unsigned short,_SECURITY_DESCRIPTOR_HEADER *,NTFS_BITMAP *,unsigned char,unsigned char);
	NTFS_SORT_CODE SortIndex(WSTRING const *,BIG_INT,unsigned long,NTFS_BITMAP *,unsigned char,NTFS_CHKDSK_INFO *);
	NTFS_SORT_CODE SortIndex(WSTRING const *,NTFS_BITMAP *,unsigned char,NTFS_CHKDSK_INFO *);
	static unsigned char InitializeGenericSystemFrs(FIX_LEVEL,FRN,HMEM *,NTFS_MASTER_FILE_TABLE *,NTFS_BITMAP *);
	unsigned char AddAttribute(unsigned long,WSTRING const *,void const *,unsigned long,NTFS_BITMAP *,unsigned char);
	unsigned char AddEmptyAttribute(unsigned long,WSTRING const *);
	unsigned char AddFileNameAttribute(_FILE_NAME *);
	unsigned char AddSecurityDescriptor(_CANNED_SECURITY_TYPE,NTFS_BITMAP *);
	unsigned char AddSecurityDescriptorData(NTFS_ATTRIBUTE *,void *,_SECURITY_ENTRY * *,unsigned long,_CANNED_SECURITY_TYPE,NTFS_BITMAP *,FIX_LEVEL);
	unsigned char Backtrack(WSTRING *);
	unsigned char Create(_STANDARD_INFORMATION const *,unsigned short);
	unsigned char CreateExtendSystemFile(WSTRING const *,unsigned short,unsigned long);
	unsigned char CreateSystemFile(unsigned char,unsigned char);
	unsigned char Delete(NTFS_BITMAP *);
	unsigned char DeleteResidentAttribute(unsigned long,WSTRING const *,void const *,unsigned long,unsigned char *,unsigned char,_MFT_SEGMENT_REFERENCE,unsigned short);
	unsigned char DeleteResidentAttributeLocal(unsigned long,WSTRING const *,void const *,unsigned long,unsigned char *,unsigned char *,unsigned short *,unsigned short);
	unsigned char ExamineAllocations(NTFS_CHKDSK_INFO *);
	unsigned char FixIndexCycle(NTFS_INDEX_TREE *,_INDEX_ENTRY const *,_INDEX_ENTRY const *,unsigned long,unsigned char,NTFS_CHKDSK_INFO *);
	unsigned char FixIndexCycle(WSTRING const *,NTFS_BITMAP *,INTSTACK *,unsigned char,NTFS_CHKDSK_INFO *);
	unsigned char Flush(NTFS_BITMAP *,NTFS_INDEX_TREE *,unsigned char);
	unsigned char Initialize(FIX_LEVEL);
	unsigned char Initialize(FIX_LEVEL,BIG_INT,NTFS_MASTER_FILE_TABLE *);
	unsigned char Initialize(FIX_LEVEL,BIG_INT,NTFS_MFT_FILE *);
	unsigned char Initialize(FIX_LEVEL,BIG_INT,unsigned long,NTFS_MASTER_FILE_TABLE *);
	unsigned char Initialize(FIX_LEVEL,NTFS_FRS_STRUCTURE *,NTFS_MASTER_FILE_TABLE *);
	unsigned char IsAttributePresent(unsigned long,WSTRING const *,unsigned char);
	unsigned char MftEvictFromBaseRecord(unsigned long,NTFS_ATTRIBUTE_RECORD *,HMEM *,unsigned char *);
	unsigned char MftMakeNonResident(unsigned long,unsigned long,NTFS_BITMAP *,unsigned char *,unsigned char *,unsigned char *);
	unsigned char PurgeAttribute(unsigned long,WSTRING const *,unsigned char);
	unsigned char PurgeAttributeList();
	unsigned char QueryAttribute(NTFS_ATTRIBUTE *,unsigned char *,unsigned long,WSTRING const *);
	unsigned char QueryAttributeByOrdinal(NTFS_ATTRIBUTE *,unsigned char *,unsigned long,unsigned long);
	unsigned char QueryAttributeByTag(NTFS_ATTRIBUTE *,unsigned char *,unsigned long);
	unsigned char QueryAttributeListAttribute(NTFS_ATTRIBUTE *,unsigned char *);
	unsigned char QueryAttributeRecord(NTFS_ATTRIBUTE_RECORD *,unsigned long,WSTRING const *);
	unsigned char QueryDuplicatedInformation(_DUPLICATED_INFORMATION *);
	unsigned char QueryFileSizes(BIG_INT *,BIG_INT *,unsigned char *);
	unsigned char QueryNextAttribute(unsigned long *,WSTRING *);
	unsigned char QueryResidentAttribute(NTFS_ATTRIBUTE *,unsigned char *,unsigned long,void const *,unsigned long,unsigned long);
	unsigned char ReInitializeGenericSystemFrs(NTFS_BITMAP *);
	unsigned char RecoverFile(NTFS_BITMAP *,NUMBER_SET *,unsigned char,unsigned long *,BIG_INT *,BIG_INT *,NTFS_CHKDSK_INFO *);
	unsigned char TruncateAttribute(unsigned long,WSTRING const *,BIG_INT,BIG_INT,BIG_INT,unsigned char);
	unsigned char UpdateFileNames(_DUPLICATED_INFORMATION *,NTFS_INDEX_TREE *,unsigned char);
	unsigned char VerifyAndFixFileNames(NTFS_BITMAP *,NTFS_CHKDSK_INFO *,FIX_LEVEL,MESSAGE *,unsigned char *,unsigned char,unsigned char);
	virtual unsigned char InsertAttributeRecord(NTFS_ATTRIBUTE_RECORD *,unsigned char);
	virtual unsigned char Write();
	virtual ~NTFS_FILE_RECORD_SEGMENT();
	void SetLsn(BIG_INT);
};

class NTFS_FRS_STRUCTURE
{
	unsigned char Sort(unsigned char *,unsigned char *);
	void Destroy();
public:
	NTFS_FRS_STRUCTURE();
	unsigned char CheckInstanceTags(FIX_LEVEL,unsigned char,MESSAGE *,unsigned char *,NTFS_ATTRIBUTE_LIST *);
	unsigned char Initialize(MEM *,LOG_IO_DP_DRIVE *,BIG_INT,unsigned long,BIG_INT,unsigned long,NTFS_UPCASE_TABLE *,unsigned long);
	unsigned char Initialize(MEM *,NTFS_ATTRIBUTE *,BIG_INT,unsigned long,BIG_INT,unsigned long,NTFS_UPCASE_TABLE *);
	unsigned char Initialize(MEM *,NTFS_ATTRIBUTE *,BIG_INT,unsigned long,unsigned long,BIG_INT,unsigned long,NTFS_UPCASE_TABLE *);
	unsigned char Initialize(_FILE_RECORD_SEGMENT_HEADER *,NTFS_ATTRIBUTE *,BIG_INT,unsigned long,unsigned long,BIG_INT,unsigned long,NTFS_UPCASE_TABLE *);
	unsigned char LoneFrsAllocationCheck2(NTFS_BITMAP *,NTFS_CHKDSK_REPORT *,NTFS_CHKDSK_INFO *,FIX_LEVEL,MESSAGE *,NTFS_FRS_STRUCTURE::LoneFrsAllocationCheckDiskErrorFlags &);
	unsigned char Prefetch(BIG_INT,BIG_INT);
	unsigned char QueryAttributeList(NTFS_ATTRIBUTE_LIST *);
	unsigned char Read(BIG_INT);
	unsigned char ReadAgain(BIG_INT);
	unsigned char ReadAt(BIG_INT);
	unsigned char ReadNext(BIG_INT);
	unsigned char SafeQueryAttribute(unsigned long,NTFS_ATTRIBUTE *,NTFS_ATTRIBUTE *,WSTRING *);
	unsigned char UpdateAttributeList(NTFS_ATTRIBUTE_LIST const *,unsigned char);
	unsigned char VerifyAndFix(FIX_LEVEL,MESSAGE *,NTFS_ATTRIBUTE_COLUMNS const *,unsigned char *,NTFS_CHKDSK_INFO *);
	unsigned char Write();
	virtual unsigned char Read();
	virtual ~NTFS_FRS_STRUCTURE();
	void * GetAttribute(unsigned long);
	void * GetNextAttributeRecord(void const *,MESSAGE *,unsigned char *);
	void DeleteAttributeRecord(void *);
};

class NTFS_INDEX_BUFFER
{
	void InsertClump(unsigned long,void const *);
public:
	NTFS_INDEX_BUFFER();
	static unsigned char WriteBack(NTFS_ATTRIBUTE *,BIG_INT,_INDEX_ALLOCATION_BUFFER *,unsigned long,unsigned long);
	unsigned char Copy(NTFS_INDEX_BUFFER *,LOG_IO_DP_DRIVE const *);
	unsigned char FindEntry(_INDEX_ENTRY const *,unsigned long *,_INDEX_ENTRY * *);
	unsigned char Initialize(LOG_IO_DP_DRIVE const *,BIG_INT,unsigned long,unsigned long,unsigned long,unsigned long,NTFS_UPCASE_TABLE *,NTFS_INDEX_TREE *);
	unsigned char InsertEntry(_INDEX_ENTRY const *,_INDEX_ENTRY *);
	unsigned char Read(NTFS_ATTRIBUTE *);
	unsigned char Write(NTFS_ATTRIBUTE *);
	virtual ~NTFS_INDEX_BUFFER();
	void Create(unsigned char,BIG_INT);
	void RemoveEntry(_INDEX_ENTRY *);
};

class NTFS_INDEX_ROOT
{
	void Destroy();
public:
	unsigned char FindEntry(_INDEX_ENTRY const *,unsigned long *,_INDEX_ENTRY * *);
	unsigned char Initialize(NTFS_ATTRIBUTE *,NTFS_UPCASE_TABLE *,unsigned long);
	unsigned char Initialize(unsigned long,unsigned long,NTFS_UPCASE_TABLE *,unsigned long,unsigned long,unsigned long);
	virtual ~NTFS_INDEX_ROOT();
	void Recreate(unsigned char,BIG_INT);
	void RemoveEntry(_INDEX_ENTRY *);
};

class NTFS_INDEX_TREE
{
	_INDEX_ENTRY const * GetNextUnfiltered(unsigned long *,unsigned char *);
	unsigned char AllocateIndexBuffer(BIG_INT *);
	unsigned char CreateAllocationAttribute();
	unsigned char FindBuffer(BIG_INT,NTFS_INDEX_BUFFER *,NTFS_INDEX_BUFFER *,INTSTACK *,unsigned char *);
	unsigned char FindEntry(unsigned long,void *,unsigned long,_INDEX_ENTRY * *,NTFS_INDEX_BUFFER * *,INTSTACK *);
	unsigned char FixupEmptyLeaf(BIG_INT);
	unsigned char GetNextLeafEntry();
	unsigned char GetNextParent();
	unsigned char InsertIntoBuffer(NTFS_INDEX_BUFFER *,INTSTACK *,_INDEX_ENTRY const *,_INDEX_ENTRY *);
	unsigned char InsertIntoRoot(_INDEX_ENTRY const *,_INDEX_ENTRY *);
	unsigned char QueryReplacementEntry(_INDEX_ENTRY *,_INDEX_ENTRY *,unsigned char *,unsigned char *,BIG_INT *);
	unsigned char RemoveEntry(_INDEX_ENTRY *,NTFS_INDEX_BUFFER *,INTSTACK *);
	void Destroy();
	void FreeChildren(_INDEX_ENTRY *);
	void SaveCurrentKey();
	void UpdateOrdinal();
public:
	NTFS_INDEX_TREE();
	_INDEX_ENTRY const * GetNext(unsigned long *,unsigned char *,unsigned char);
	static unsigned char IsIndexEntryCorrupt(_INDEX_ENTRY const *,unsigned long,MESSAGE *,INDEX_ENTRY_TYPE);
	unsigned char CopyIterator(NTFS_INDEX_TREE *);
	unsigned char DeleteCurrentEntry();
	unsigned char DeleteEntry(unsigned long,void *,unsigned long);
	unsigned char Initialize(LOG_IO_DP_DRIVE *,unsigned long,NTFS_BITMAP *,NTFS_UPCASE_TABLE *,unsigned long,NTFS_FILE_RECORD_SEGMENT *,WSTRING const *);
	unsigned char Initialize(unsigned long,LOG_IO_DP_DRIVE *,unsigned long,NTFS_BITMAP *,NTFS_UPCASE_TABLE *,unsigned long,unsigned long,unsigned long,WSTRING const *);
	unsigned char InsertEntry(_INDEX_ENTRY const *,unsigned char,unsigned char *);
	unsigned char InsertEntry(unsigned long,void *,_MFT_SEGMENT_REFERENCE,unsigned char);
	unsigned char IsBadlyOrdered(BIG_INT,unsigned long,unsigned char *,unsigned char,unsigned char);
	unsigned char IsBadlyOrdered(unsigned char *,unsigned char,unsigned char);
	unsigned char QueryEntry(unsigned long,void *,unsigned long,_INDEX_ENTRY * *,NTFS_INDEX_BUFFER * *,unsigned char *);
	unsigned char QueryFileReference(unsigned long,void *,unsigned long,_MFT_SEGMENT_REFERENCE *,unsigned char *);
	unsigned char ResetIterator(_INDEX_ENTRY const *,unsigned char);
	unsigned char ResetIterator(unsigned char);
	unsigned char ResetLsns(MESSAGE *);
	unsigned char Save(NTFS_FILE_RECORD_SEGMENT *);
	unsigned char SetCache();
	unsigned char UpdateFileName(_FILE_NAME const *,_MFT_SEGMENT_REFERENCE);
	unsigned char WriteCache(BIG_INT,void *,unsigned char *);
	virtual ~NTFS_INDEX_TREE();
	void FreeIndexBuffer(BIG_INT);
};

struct NTFS_LOG_FILE
{
	NTFS_LOG_FILE();
	static unsigned long QueryDefaultSize(DP_DRIVE const *,BIG_INT);
	unsigned char CreateDataAttribute(BIG_INT,unsigned long,NTFS_BITMAP *);
	unsigned char EnsureCleanShutdown(_LARGE_INTEGER *);
	unsigned char Initialize(FIX_LEVEL,NTFS_MASTER_FILE_TABLE *);
	unsigned char MarkVolumeChecked(unsigned char,_LARGE_INTEGER);
	unsigned char Reset(MESSAGE *);
	unsigned char Resize(BIG_INT,NTFS_BITMAP *,unsigned char,unsigned char *,unsigned char *,MESSAGE *);
	unsigned char VerifyAndFix(NTFS_BITMAP *,NTFS_INDEX_TREE *,unsigned char *,NTFS_CHKDSK_REPORT *,FIX_LEVEL,unsigned char,unsigned long,NUMBER_SET *,MESSAGE *);
	virtual ~NTFS_LOG_FILE();
};

struct NTFS_MASTER_FILE_TABLE
{
	NTFS_MASTER_FILE_TABLE();
	unsigned char AllocateFileRecordSegment(BIG_INT *,unsigned char);
	unsigned char Extend(unsigned long);
	virtual ~NTFS_MASTER_FILE_TABLE();
};

class NTFS_MFT_FILE
{
	unsigned char CheckMirrorSize(NTFS_ATTRIBUTE *,unsigned char,NTFS_BITMAP *,BIG_INT *);
public:
	NTFS_MFT_FILE();
	unsigned char Create(unsigned long,_STANDARD_INFORMATION const *,NTFS_BITMAP *);
	unsigned char Flush();
	unsigned char Initialize(FIX_LEVEL,LOG_IO_DP_DRIVE *,BIG_INT,unsigned long,unsigned long,BIG_INT,NTFS_BITMAP *,NTFS_UPCASE_TABLE *,NTFS_ATTRIBUTE *);
	virtual unsigned char Read();
	virtual ~NTFS_MFT_FILE();
};

class NTFS_MFT_INFO
{
	static unsigned char _major;
	static unsigned char _minor;
	static void ComputeDupInfoSignature(_DUPLICATED_INFORMATION *,unsigned char * const);
	static void ComputeFileNameSignature(unsigned long,_FILE_NAME *,unsigned char * const);
	void Destroy();
public:
	NTFS_MFT_INFO();
	static _MFT_SEGMENT_REFERENCE QuerySegmentReference(void *);
	static unsigned char CompareDupInfo(void *,_FILE_NAME *);
	static unsigned char CompareFileName(void *,unsigned long,_FILE_NAME *,unsigned short *);
	static unsigned char QueryFlags(void *,unsigned short);
	unsigned char ExtractIndexEntryInfo(NTFS_FILE_RECORD_SEGMENT *,MESSAGE *,unsigned char,unsigned char *);
	unsigned char Initialize();
	unsigned char Initialize(BIG_INT,NTFS_UPCASE_TABLE *,unsigned char,unsigned char,unsigned __int64);
	virtual ~NTFS_MFT_INFO();
};

class NTFS_PROSCAN_COMMANDS
{
	_MFT_SEGMENT_REFERENCE GetCorruptionTarget(_CORRUPTION_RECORD *);
	static _RTL_QUERY_REGISTRY_TABLE * PutCommandOverrideTable;
	static long CheckForPutCommandOverride(unsigned short *,unsigned long,void *,unsigned long,void *,void *);
	unsigned char FlushConnectHash(PROSCAN_CONNECT *,NTFS_CHKDSK_INFO *);
	unsigned char PutCommand(_CORRUPTION_VERB,void *,unsigned long,unsigned long,void *,_CORRUPTION_OUTCOME *,unsigned long,unsigned __int64);
	unsigned char TargetIdRedirected(unsigned __int64);
	unsigned char WasIdRedirected(unsigned __int64);
	virtual unsigned char Acknowledge(_CORRUPTION_OUTCOME,void *);
	virtual unsigned char GetRecord(_CORRUPTION_RECORD * *,unsigned long *,unsigned char *,void *);
public:
	static unsigned long MapOutComeMessage(_CORRUPTION_OUTCOME,unsigned char);
	unsigned char AcknowledgeSuccess();
	unsigned char AddCrookedLink(NTFS_FILE_RECORD_SEGMENT *,unsigned long,NTFS_CHKDSK_INFO *,unsigned long);
	unsigned char BadClusters(_MFT_SEGMENT_REFERENCE,unsigned long,WSTRING const *,BIG_INT,unsigned long,unsigned long,void *,unsigned long);
	unsigned char BreakCycle(_MFT_SEGMENT_REFERENCE,_MFT_SEGMENT_REFERENCE,unsigned long,void *,unsigned long);
	unsigned char Connect(_MFT_SEGMENT_REFERENCE,WSTRING const *,unsigned char,_MFT_SEGMENT_REFERENCE,unsigned long,_MFT_SEGMENT_REFERENCE *,unsigned long,void *,_CORRUPTION_OUTCOME *,unsigned long);
	unsigned char CorruptSDEntry(unsigned __int64,unsigned long,void *,unsigned long);
	unsigned char CrossLink(_MFT_SEGMENT_REFERENCE,unsigned long,WSTRING const *,BIG_INT,BIG_INT,_MFT_SEGMENT_REFERENCE,unsigned long,WSTRING const *,BIG_INT,BIG_INT,unsigned long,unsigned long,void *,unsigned long);
	unsigned char ExamineAllocation(FRN,unsigned long,WSTRING const *,BIG_INT,BIG_INT,BIG_INT,NTFS_CHKDSK_INFO *);
	unsigned char FRS(_MFT_SEGMENT_REFERENCE,unsigned long,void *,unsigned long);
	unsigned char FRSAllocate(_MFT_SEGMENT_REFERENCE,unsigned long,WSTRING const *,BIG_INT,BIG_INT,BIG_INT,unsigned long,void *,unsigned long);
	unsigned char FlushInvalidSid(NTFS_CHKDSK_INFO *);
	unsigned char IndexAttribute(_MFT_SEGMENT_REFERENCE,WSTRING const *,unsigned long,void *,unsigned long);
	unsigned char IndexCycle(_MFT_SEGMENT_REFERENCE,WSTRING const *,unsigned long,BIG_INT *,unsigned long,void *,unsigned long);
	unsigned char IndexEntry(_MFT_SEGMENT_REFERENCE,WSTRING const *,unsigned long,void *,unsigned long,_MFT_SEGMENT_REFERENCE,void *,unsigned long);
	unsigned char IndexOffset(_MFT_SEGMENT_REFERENCE,WSTRING const *,BIG_INT,BIG_INT,unsigned long,unsigned long,void *,unsigned long);
	unsigned char IndexOrder(_MFT_SEGMENT_REFERENCE,WSTRING const *,unsigned long,void *,unsigned long);
	unsigned char IndexSort(_MFT_SEGMENT_REFERENCE,WSTRING const *,BIG_INT,unsigned long,unsigned long,void *,unsigned long);
	unsigned char IndexSubTree(_MFT_SEGMENT_REFERENCE,WSTRING const *,unsigned long,void *,unsigned long,void *,unsigned long);
	unsigned char Initialize(WSTRING const *,void *,unsigned char,NTFS_CHKDSK_INFO *);
	unsigned char InitializeConnect(NTFS_CHKDSK_INFO *);
	unsigned char InitializeInvalidSid(NTFS_CHKDSK_INFO *);
	unsigned char InterpretPayload(FRN,WSTRING const *,unsigned long,void *,NTFS_CHKDSK_INFO *,WSTRING *);
	unsigned char InvalidSid(unsigned long,unsigned long,_MFT_SEGMENT_REFERENCE *,unsigned long,void *,_CORRUPTION_OUTCOME *,unsigned long);
	unsigned char OrphanChildFrs(unsigned long,_MFT_SEGMENT_REFERENCE *,_MFT_SEGMENT_REFERENCE *,unsigned long,void *,_CORRUPTION_OUTCOME *,unsigned long);
	unsigned char SaveCrossLinkRun(FRN,unsigned long,WSTRING const *,BIG_INT,BIG_INT,BIG_INT,NTFS_CHKDSK_INFO *);
};

struct NTFS_REFLECTED_MASTER_FILE_TABLE
{
	BIG_INT QueryFirstLcn();
	NTFS_REFLECTED_MASTER_FILE_TABLE();
	unsigned char Create(_STANDARD_INFORMATION const *,BIG_INT,unsigned long,NTFS_BITMAP *);
	unsigned char Initialize(FIX_LEVEL,NTFS_MASTER_FILE_TABLE *);
	unsigned char VerifyAndFix(NTFS_ATTRIBUTE *,NTFS_BITMAP *,NUMBER_SET *,NTFS_INDEX_TREE *,unsigned char *,FIX_LEVEL,MESSAGE *);
	virtual ~NTFS_REFLECTED_MASTER_FILE_TABLE();
};

class NTFS_SA
{
	struct CProblemSid
	{
		static unsigned char AddProblemSid(ARRAY *,void *,unsigned short,_SECURITY_DESCRIPTOR_HEADER *);
	};

	static unsigned char AreBitmapsEqual(NTFS_ATTRIBUTE *,NTFS_BITMAP *,BIG_INT,MESSAGE *,unsigned char *,unsigned char *,unsigned char *);
	unsigned char AdvanceUsnJournal(NTFS_FILE_RECORD_SEGMENT *,NTFS_ATTRIBUTE *,NTFS_ATTRIBUTE *,NTFS_MASTER_FILE_TABLE *,FIX_LEVEL,NTFS_CHKDSK_INFO *,MESSAGE *);
	unsigned char AdvanceUsnJournal(NTFS_MASTER_FILE_TABLE *,FIX_LEVEL,NTFS_CHKDSK_INFO *,MESSAGE *);
	unsigned char CheckAllForData(NTFS_CHKDSK_INFO *,NTFS_MASTER_FILE_TABLE *,FIX_LEVEL,MESSAGE *);
	unsigned char CheckExtendSystemFiles(NTFS_CHKDSK_INFO *,NTFS_CHKDSK_REPORT *,NTFS_MASTER_FILE_TABLE *,FIX_LEVEL,MESSAGE *);
	unsigned char ClearVerifyCorruptStreams(NTFS_MASTER_FILE_TABLE *,NTFS_BITMAP *,NTFS_ATTRIBUTE *,NTFS_UPCASE_TABLE *,NTFS_CHKDSK_INFO *);
	unsigned char EnsureSurjectiveAttrList(NTFS_FRS_STRUCTURE *,NTFS_ATTRIBUTE_LIST const *,SEQUENTIAL_CONTAINER *,FIX_LEVEL,MESSAGE *,unsigned char *);
	unsigned char EnsureWellDefinedAttrList(NTFS_FRS_STRUCTURE *,NTFS_ATTRIBUTE_LIST *,SEQUENTIAL_CONTAINER *,NTFS_BITMAP *,NTFS_CHKDSK_REPORT *,NTFS_CHKDSK_INFO *,FIX_LEVEL,MESSAGE *,unsigned char *);
	unsigned char FetchAttributeDefinitionTable(NTFS_ATTRIBUTE *,MESSAGE *,NTFS_ATTRIBUTE_COLUMNS *);
	unsigned char FetchIndex(NTFS_FILE_RECORD_SEGMENT *,WSTRING *,NTFS_ATTRIBUTE * *,NTFS_ATTRIBUTE * *,NTFS_ATTRIBUTE * *,NTFS_INDEX_TREE *,NTFS_BITMAP *,NTFS_ATTRIBUTE *,NTFS_UPCASE_TABLE *,NTFS_CHKDSK_INFO *);
	unsigned char FetchMftDataAttribute(MESSAGE *,NTFS_ATTRIBUTE *);
	unsigned char FetchUpcaseTable(NTFS_ATTRIBUTE *,MESSAGE *,NTFS_UPCASE_TABLE *,FIX_LEVEL,unsigned char *);
	unsigned char FixProblemSids(NTFS_FILE_RECORD_SEGMENT *,NTFS_MASTER_FILE_TABLE *,NTFS_INDEX_TREE *,DSTRING *,ARRAY *,NTFS_SA::CResizeParams *,NTFS_CHKDSK_INFO *);
	unsigned char GarbageCollectSDS(NTFS_CHKDSK_INFO *,NTFS_CHKDSK_REPORT *,NTFS_MASTER_FILE_TABLE *,NTFS_FILE_RECORD_SEGMENT *,NTFS_ATTRIBUTE *,NUMBER_SET *,MESSAGE *);
	unsigned char GenerateInvalidSid(NTFS_CHKDSK_INFO *,NTFS_FILE_RECORD_SEGMENT *,unsigned long *,NUMBER_SET *,MESSAGE *);
	unsigned char HotFixMftDataGenerateFrs(HMEM *,NTFS_FRS_STRUCTURE *,BIG_INT,NTFS_ATTRIBUTE *,NTFS_BITMAP *,NTFS_BITMAP *,NTFS_UPCASE_TABLE *,NTFS_MASTER_FILE_TABLE *,unsigned char *,FIX_LEVEL);
	unsigned char LogFileMayNeedResize();
	unsigned char Lookup$VCStream(WSTRING *,NTFS_FILE_RECORD_SEGMENT *,NTFS_ATTRIBUTE *,NTFS_MASTER_FILE_TABLE *,NTFS_BITMAP *,NTFS_ATTRIBUTE *,NTFS_UPCASE_TABLE *,unsigned char *,NTFS_CHKDSK_INFO *);
	unsigned char OldOrphanRecovery(NUMBER_SET *,NTFS_CHKDSK_INFO *,NTFS_CHKDSK_REPORT *,NTFS_FILE_RECORD_SEGMENT *,NTFS_INDEX_TREE *,NTFS_MASTER_FILE_TABLE *,FIX_LEVEL,MESSAGE *,WSTRING *);
	unsigned char OrphanChildFrs(NTFS_CHKDSK_INFO *,NUMBER_SET *,unsigned long);
	unsigned char ProbeAndRepairDescriptorsSegment(NTFS_FILE_RECORD_SEGMENT *,NTFS_MASTER_FILE_TABLE *,NTFS_ATTRIBUTE *,unsigned __int64,void *,unsigned long,FIX_LEVEL,unsigned char *,NUMBER_SET *,MESSAGE *,NTFS_CHKDSK_INFO *);
	unsigned char ProcessFiles(BIG_INT,BIG_INT *,unsigned long *,unsigned char *,NTFS_FRS_STRUCTURE *,FIX_LEVEL,NTFS_ATTRIBUTE *,NTFS_BITMAP *,NTFS_BITMAP *,NTFS_UPCASE_TABLE *,NTFS_ATTRIBUTE_COLUMNS *,NUMBER_SET *,NTFS_CHKDSK_REPORT *,NTFS_CHKDSK_INFO *,MESSAGE *);
	unsigned char ProperOrphanRecovery(NUMBER_SET *,NTFS_MASTER_FILE_TABLE *,DIGRAPH *,unsigned char,NTFS_CHKDSK_INFO *,NTFS_CHKDSK_REPORT *,FIX_LEVEL,MESSAGE *);
	unsigned char QueryListOfFrs(NTFS_FRS_STRUCTURE *,NTFS_ATTRIBUTE_LIST const *,NTFS_ATTRIBUTE *,NUMBER_SET *,MESSAGE *);
	unsigned char RecoverMftDataAttribute(MESSAGE *,NTFS_ATTRIBUTE *);
	unsigned char RecoverOrphans(NTFS_CHKDSK_INFO *,NTFS_CHKDSK_REPORT *,DIGRAPH *,NTFS_MASTER_FILE_TABLE *,unsigned char,FIX_LEVEL,MESSAGE *);
	unsigned char ReportIndexAllocation(NTFS_CHKDSK_REPORT *,NTFS_FILE_RECORD_SEGMENT *,char const *,unsigned char);
	unsigned char ResetLsns(MESSAGE *,NTFS_MASTER_FILE_TABLE *,unsigned char);
	unsigned char ResetUsns(NTFS_CHKDSK_INFO *,FIX_LEVEL,MESSAGE *,NTFS_MASTER_FILE_TABLE *);
	unsigned char ScanAndValidateIndexes(NTFS_CHKDSK_INFO *,DIGRAPH *,NTFS_MASTER_FILE_TABLE *,NTFS_ATTRIBUTE_COLUMNS const *,NTFS_CHKDSK_REPORT *,NUMBER_SET *,unsigned long *,unsigned char,unsigned char,unsigned char,unsigned char *);
	unsigned char SendTelemetry(WSTRING const *,NTFS_CHKDSK_REPORT *,NTFS_CHKDSK_INFO *,long,_VOLUME_CORRUPTION_STATE *);
	unsigned char SqmExport(WSTRING const *,NTFS_CHKDSK_REPORT *,NTFS_CHKDSK_INFO *,MESSAGE *,HMEM *,unsigned char);
	unsigned char StartProcessingFiles(BIG_INT,unsigned char *,FIX_LEVEL,NTFS_ATTRIBUTE *,NTFS_BITMAP *,NTFS_BITMAP *,NTFS_UPCASE_TABLE *,NTFS_ATTRIBUTE_COLUMNS *,NUMBER_SET *,NTFS_CHKDSK_REPORT *,NTFS_CHKDSK_INFO *,MESSAGE *);
	unsigned char SynchronizeMft(NTFS_INDEX_TREE *,NTFS_MASTER_FILE_TABLE *,unsigned char *,unsigned char *,FIX_LEVEL,MESSAGE *,MessageMode);
	unsigned char TraverseIndexTree(_INDEX_HEADER *,unsigned long,NTFS_ATTRIBUTE *,NTFS_BITMAP *,unsigned long,unsigned char *,unsigned char *,BIG_INT,WSTRING const *,INDEX_ENTRY_TYPE,unsigned char *,NTFS_MASTER_FILE_TABLE *,NUMBER_SET *,_INDEX_ENTRY *,_INDEX_ENTRY *,_INDEX_ENTRY *,_INDEX_ENTRY *,long *,unsigned long,FIX_LEVEL,MESSAGE *,unsigned char *,unsigned char,NTFS_CHKDSK_INFO *,unsigned char *,INTSTACK *,LIST *,INTSTACK *,INTSTACK *,INTSTACK *);
	unsigned char ValidateAndAddExtent(BIG_INT,BIG_INT,BIG_INT,NTFS_EXTENT_LIST *);
	unsigned char ValidateCriticalFrs(NTFS_ATTRIBUTE *,MESSAGE *,FIX_LEVEL);
	unsigned char ValidateEntriesInIndex(NTFS_INDEX_TREE *,NTFS_FILE_RECORD_SEGMENT *,NTFS_CHKDSK_INFO *,DIGRAPH *,unsigned char *,unsigned char *,NTFS_MASTER_FILE_TABLE *,unsigned char,unsigned char,FIX_LEVEL,MESSAGE *,unsigned char *);
	unsigned char ValidateEntriesInIndex2(NTFS_INDEX_TREE *,NTFS_FILE_RECORD_SEGMENT *,NTFS_CHKDSK_INFO *,DIGRAPH *,unsigned char *,unsigned char *,NTFS_MASTER_FILE_TABLE *,unsigned char,FIX_LEVEL,MESSAGE *,unsigned char *);
	unsigned char ValidateEntriesInIndexUsingMftInfo(NTFS_INDEX_TREE *,NTFS_FILE_RECORD_SEGMENT *,NTFS_CHKDSK_INFO *,NTFS_MFT_INFO *,DIGRAPH *,unsigned char *,unsigned char *,NTFS_MASTER_FILE_TABLE *,unsigned char,FIX_LEVEL,MESSAGE *,unsigned char *);
	unsigned char ValidateEntriesInObjIdIndex2(MESSAGE *,NTFS_SA::IndexEntriesValidationCtxt &);
	unsigned char ValidateEntriesInReparseIndex2(MESSAGE *,NTFS_SA::IndexEntriesValidationCtxt &);
	unsigned char ValidateIndices(NTFS_CHKDSK_INFO *,DIGRAPH *,NTFS_MASTER_FILE_TABLE *,NTFS_ATTRIBUTE_COLUMNS const *,NTFS_CHKDSK_REPORT *,NUMBER_SET *,unsigned short,unsigned char,unsigned char *,unsigned char *,unsigned char);
	unsigned char ValidateSDSStream(NTFS_CHKDSK_INFO *,NTFS_CHKDSK_REPORT *,NTFS_MASTER_FILE_TABLE *,NTFS_FILE_RECORD_SEGMENT *,NTFS_ATTRIBUTE *,NTFS_INDEX_TREE *,NTFS_INDEX_TREE *,void *,BIG_INT,BIG_INT,BIG_INT,SPARSE_SET *,NUMBER_SET *,FIX_LEVEL,unsigned long *,unsigned char *,unsigned char *,unsigned char *,unsigned __int64 *,NUMBER_SET *,MESSAGE *);
	unsigned char ValidateSecurityDescriptors(NTFS_CHKDSK_INFO *,NTFS_CHKDSK_REPORT *,NTFS_MASTER_FILE_TABLE *,NUMBER_SET *,unsigned char,FIX_LEVEL,MESSAGE *,unsigned char);
	unsigned char ValidateUsnJournal(NTFS_CHKDSK_INFO *,NTFS_CHKDSK_REPORT *,NTFS_MASTER_FILE_TABLE *,NUMBER_SET *,FIX_LEVEL,MESSAGE *);
	unsigned char VerifyAndFixAttribute(LIST const *,NTFS_ATTRIBUTE_LIST *,NTFS_BITMAP *,NTFS_FRS_STRUCTURE *,SEQUENTIAL_CONTAINER *,unsigned char *,NTFS_CHKDSK_REPORT *,NTFS_CHKDSK_INFO *,MESSAGE *);
	unsigned char VerifyAndFixChildFrs(unsigned long,NUMBER_SET const *,NTFS_ATTRIBUTE *,NTFS_ATTRIBUTE_COLUMNS const *,NTFS_UPCASE_TABLE *,HMEM * *,CONTAINER *,FIX_LEVEL,MESSAGE *,unsigned char *,NTFS_CHKDSK_INFO *);
	unsigned char VerifyIndexesInFileRecord(NTFS_CHKDSK_INFO *,DIGRAPH *,NTFS_MASTER_FILE_TABLE *,unsigned long,NTFS_FILE_RECORD_SEGMENT *,NTFS_ATTRIBUTE_COLUMNS const *,NTFS_CHKDSK_REPORT *,NUMBER_SET *,unsigned long *,unsigned char,unsigned char,unsigned char,unsigned char *);
	unsigned char VerifySecurityDescriptorBlock(NTFS_FILE_RECORD_SEGMENT *,BIG_INT,void *,NTFS_MASTER_FILE_TABLE *,NTFS_INDEX_TREE *,NTFS_INDEX_TREE *,BIG_INT,NUMBER_SET *,NUMBER_SET *,SPARSE_SET *,SPARSE_SET *,NTFS_SA::CResizeParams *,FIX_LEVEL,MESSAGE *,NTFS_CHKDSK_INFO *);
public:
	NTFS_SA();
	long QueryVolumeCorruptionState(void *,_VOLUME_CORRUPTION_STATE *,unsigned __int64);
	static long NtfsChkdskIsRunning;
	static unsigned char ArePhysicalSectorsSupportedByClusterSize(DP_DRIVE *,unsigned long);
	static unsigned char GetRootFrsIndex(FIX_LEVEL,NTFS_MFT_FILE *,NTFS_FILE_RECORD_SEGMENT *,NTFS_INDEX_TREE *);
	static unsigned char IsClusterAlignedByPhysicalSectorSize(DP_DRIVE *,unsigned long);
	static unsigned char IsClusterAlignmentByPhysicalSectorSizeSupported(DP_DRIVE *);
	static unsigned char IsDosName(_FILE_NAME const *);
	static unsigned char IsNtfsName(_FILE_NAME const *);
	static unsigned char PostReadMultiSectorFixup(void *,unsigned long,IO_DP_DRIVE *,unsigned long);
	static unsigned char QueryFileNameFromIndex(_FILE_NAME const *,unsigned long,WSTRING *);
	static unsigned char _MajorVersion;
	static unsigned char _MinorVersion;
	static unsigned long QueryDefaultClusterFactor(DP_DRIVE *);
	static unsigned long QueryDefaultClustersPerIndexBuffer(DP_DRIVE const *,unsigned long);
	static unsigned long QuerySectorsInElementaryStructures(DP_DRIVE *,unsigned long,unsigned long,unsigned long,unsigned long,unsigned char);
	static void PreWriteMultiSectorFixup(void *,unsigned long);
	unsigned char AddNewSdAttributes(NTFS_CHKDSK_INFO *,NTFS_MASTER_FILE_TABLE *,MESSAGE *);
	unsigned char ArchiveMessageLog(NTFS_MFT_FILE *,HMEM *,unsigned long,NTFS_CHKDSK_INFO *,MESSAGE *);
	unsigned char ClearVolumeFlag(unsigned short,NTFS_LOG_FILE *,unsigned char,_LARGE_INTEGER,unsigned char *,unsigned char);
	unsigned char CreateElementaryStructures(NTFS_BITMAP *,unsigned long,unsigned long,unsigned long,unsigned long,NUMBER_SET const *,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned long,MESSAGE *,BIOS_PARAMETER_BLOCK *,WSTRING const *,unsigned char);
	unsigned char DeleteAttribute(NTFS_MASTER_FILE_TABLE *,NTFS_FILE_RECORD_SEGMENT *,unsigned long,WSTRING const *,unsigned char);
	unsigned char DeleteAttribute(NTFS_MASTER_FILE_TABLE *,NTFS_FILE_RECORD_SEGMENT *,unsigned long,char const *,unsigned char);
	unsigned char EstimateIndexBandwidth(unsigned long,long,BIG_INT,BIG_INT,BIG_INT,BIG_INT,unsigned short,unsigned char *,unsigned __int64 *,NTFS_CHKDSK_INFO *);
	unsigned char GenerateUsedNotFoundEntries(NUMBER_SET *,NTFS_FILE_RECORD_SEGMENT *,NTFS_ATTRIBUTE *,NTFS_INDEX_TREE *,NTFS_INDEX_TREE *,NTFS_CHKDSK_INFO *,NTFS_MASTER_FILE_TABLE *,MESSAGE *);
	unsigned char GetIndexAttributes(BIG_INT,WSTRING const *,unsigned char *,unsigned long *,INDEX_ENTRY_TYPE *,unsigned long *,unsigned long *,unsigned char *,NTFS_CHKDSK_INFO *);
	unsigned char HotfixMftData(NTFS_CHKDSK_INFO *,NTFS_ATTRIBUTE *,NTFS_BITMAP *,NTFS_BITMAP *,NTFS_UPCASE_TABLE *,NUMBER_SET *,NUMBER_SET *,FIX_LEVEL,MESSAGE *);
	unsigned char Initialize(LOG_IO_DP_DRIVE *,MESSAGE *,BIG_INT,BIG_INT,unsigned long,unsigned char);
	unsigned char InvalidateFrsSid(NUMBER_SET *,NTFS_MASTER_FILE_TABLE *,NTFS_CHKDSK_INFO *,MESSAGE *);
	unsigned char PostEventLogMessage(MESSAGE *,FIX_LEVEL);
	unsigned char QueryFileReference(WSTRING const *,NTFS_FILE_RECORD_SEGMENT *,NTFS_INDEX_TREE *,_MFT_SEGMENT_REFERENCE *);
	unsigned char QueryFrsFromPath(FIX_LEVEL,WSTRING const *,NTFS_MASTER_FILE_TABLE *,NTFS_BITMAP *,NTFS_FILE_RECORD_SEGMENT *,unsigned char *,unsigned char *);
	unsigned char Read(MESSAGE *);
	unsigned char ResizeCleanLogFile(MESSAGE *,unsigned char,unsigned long);
	unsigned char SDSEntryCorrupt(NTFS_FILE_RECORD_SEGMENT *,unsigned __int64,NTFS_ATTRIBUTE *,NTFS_INDEX_TREE *,NTFS_INDEX_TREE *,NUMBER_SET *,NTFS_CHKDSK_INFO *,unsigned char *,unsigned char *);
	unsigned char SetVolumeFlag(unsigned short,unsigned char *);
	unsigned char TakeCensus(NTFS_MASTER_FILE_TABLE *,unsigned long,NTFS_CENSUS_INFO *);
	unsigned char ValidateIndexBufferHeader(_INDEX_ALLOCATION_BUFFER *,INDEX_ENTRY_TYPE,unsigned long,unsigned char *,BIG_INT,WSTRING const *,unsigned long,BIG_INT,NTFS_CHKDSK_INFO *);
	unsigned char ValidateIndexHeader(char *,unsigned long,unsigned long,INDEX_ENTRY_TYPE,NTFS_ATTRIBUTE *,NTFS_BITMAP *,unsigned long,unsigned char *,unsigned char *,BIG_INT,WSTRING const *,unsigned long,NTFS_CHKDSK_INFO *);
	unsigned char VerifyAndFixFrsSd(NTFS_FILE_RECORD_SEGMENT *,NTFS_MASTER_FILE_TABLE *,FIX_LEVEL,MESSAGE *,unsigned char *,NTFS_CHKDSK_INFO *);
	unsigned char VerifyAndFixIndex(NTFS_CHKDSK_INFO *,NTFS_ATTRIBUTE *,NTFS_ATTRIBUTE *,NTFS_BITMAP *,BIG_INT,NUMBER_SET *,NTFS_MASTER_FILE_TABLE *,NTFS_ATTRIBUTE_COLUMNS const *,unsigned char *,long *,FIX_LEVEL,MESSAGE *,unsigned char *,LIST *,INTSTACK *,INTSTACK *,INTSTACK *,unsigned char);
	unsigned char VerifyAndFixMultiFrsFile(NTFS_FRS_STRUCTURE *,NTFS_ATTRIBUTE_LIST *,NTFS_ATTRIBUTE *,NTFS_ATTRIBUTE_COLUMNS const *,NTFS_BITMAP *,NTFS_BITMAP *,NTFS_CHKDSK_REPORT *,NTFS_CHKDSK_INFO *,FIX_LEVEL,MESSAGE *,unsigned char *);
	unsigned char VerifyOneSdEntry(_SECURITY_DESCRIPTOR_HEADER *,NTFS_ATTRIBUTE *,NTFS_INDEX_TREE *,NTFS_INDEX_TREE *,NTFS_CHKDSK_INFO *,unsigned char *,unsigned char *);
	unsigned char WriteRemainingBootCode();
	unsigned long QueryClusterFactor();
	unsigned short QueryVolumeFlagsAndLabel(unsigned char *,unsigned char *,unsigned char *,WSTRING *);
	virtual unsigned char Create(NUMBER_SET const *,MESSAGE *,WSTRING const *,unsigned long,unsigned long,unsigned long);
	virtual unsigned char Create(NUMBER_SET const *,unsigned long,unsigned long,unsigned long,unsigned long,unsigned char,unsigned char,unsigned char,unsigned char,unsigned long,MESSAGE *,WSTRING const *,unsigned char);
	virtual unsigned char QuerySystemId();
	virtual unsigned char Read();
	virtual unsigned char RecoverFile(WSTRING const *,MESSAGE *);
	virtual unsigned char SpotFixVerify(FIX_LEVEL,MESSAGE *,unsigned long,unsigned long *,WSTRING const *);
	virtual unsigned char VerifyAndFix(FIX_LEVEL,MESSAGE *,unsigned long,unsigned long,unsigned short,unsigned long *,WSTRING const *);
	virtual unsigned char Write();
	virtual unsigned char Write(MESSAGE *);
	virtual void * GetBuf();
	virtual void PrintFormatReport(MESSAGE *,_FILE_FS_SIZE_INFORMATION *,_FILE_FS_VOLUME_INFORMATION *);
	virtual ~NTFS_SA();
};

class NTFS_SPOTCHECKING_COMMANDS
{
protected:
	unsigned char ProcessInput(void *,unsigned char *);
};

struct NTFS_SPOTCHECKING_UTILS
{
	static unsigned char SendForceFullChkdskVerb(void *,void *,unsigned long);
	unsigned char AssureHasDataAttribute(NTFS_FILE_RECORD_SEGMENT *,NTFS_CHKDSK_INFO *);
	unsigned char ConstructFileName(_MFT_SEGMENT_REFERENCE,DSTRING *,void *);
	unsigned char ConstructPathName(_MFT_SEGMENT_REFERENCE,DSTRING *,void *);
	unsigned char FindFrsFileName(NTFS_FRS_STRUCTURE *,ARRAY *,NTFS_CHKDSK_INFO *,unsigned char *);
	unsigned char FindIndexFileName(NTFS_FILE_RECORD_SEGMENT *,ARRAY *,NTFS_CHKDSK_INFO *,unsigned char *);
	unsigned char FrsVerify(_MFT_SEGMENT_REFERENCE,HMEM *,NTFS_FRS_STRUCTURE *,unsigned long,NTFS_CHKDSK_INFO *,unsigned char,unsigned char *);
	unsigned char GetFileNameFrn(WSTRING *,FRN *,NTFS_CHKDSK_INFO *);
	unsigned char GetFileNumber(unsigned short *,BIG_INT *,NTFS_CHKDSK_INFO *);
	unsigned char IndexVerify(NTFS_FILE_RECORD_SEGMENT *,WSTRING const *,NTFS_ATTRIBUTE * *,NTFS_ATTRIBUTE * *,NTFS_ATTRIBUTE * *,NTFS_INDEX_TREE *,unsigned char,NTFS_CHKDSK_INFO *);
	unsigned char VerifyParent(FRN,_FILE_NAME *,unsigned char *,unsigned char *,NTFS_CHKDSK_INFO *);
};

class NTFS_SPOTFIX_COMMANDS
{
	unsigned char CheckForFileNameCorruption(NTFS_INDEX_TREE *,unsigned long,void *,unsigned char *,NTFS_CHKDSK_INFO *);
	unsigned char DeleteIndexFileName(NTFS_FILE_RECORD_SEGMENT *,ARRAY *,FRN,NTFS_CHKDSK_INFO *,unsigned char *);
	unsigned char FillBuffer(NTFS_ATTRIBUTE *,HMEM *,unsigned long,unsigned long,unsigned __int64,unsigned __int64,unsigned __int64 *,char *,unsigned long *,unsigned long *,unsigned long);
	unsigned char FindChildFrsReference(NTFS_ATTRIBUTE_LIST *,_MFT_SEGMENT_REFERENCE);
	unsigned char FrsVerifyChild(_MFT_SEGMENT_REFERENCE,HMEM *,NTFS_FRS_STRUCTURE *,unsigned long,NTFS_CHKDSK_INFO *,unsigned char);
	unsigned char GetBadClusters(NTFS_ATTRIBUTE *,BIG_INT,unsigned long,ARRAY *,NTFS_CHKDSK_INFO *);
	unsigned char GetCorruptDataStream(NTFS_FILE_RECORD_SEGMENT *,NTFS_ATTRIBUTE *,NTFS_CHKDSK_INFO *);
	unsigned char GetValueParameters(FRN,WSTRING const *,unsigned long,void *,unsigned long *,void * *,FRN *,unsigned char *,NTFS_CHKDSK_INFO *);
	unsigned char IndexSearchBuffer(_INDEX_HEADER *,void *,unsigned long,unsigned long,INDEX_ENTRY_TYPE,_INDEX_ENTRY *,_INDEX_ENTRY * *,unsigned char *,unsigned char *,NTFS_CHKDSK_INFO *);
	unsigned char MapIndexNameToAttributeType(WSTRING const *,unsigned long *);
	unsigned char Reconnect(FRN,WSTRING const *,NTFS_INDEX_TREE *,FRN,FRN,unsigned char *,unsigned char *,unsigned char *,NTFS_CHKDSK_INFO *);
	unsigned char ReconnectFileName(FRN,NTFS_INDEX_TREE *,FRN,FRN,unsigned char *,unsigned char *,unsigned char *,NTFS_CHKDSK_INFO *);
	unsigned char ReconnectObjId(FRN,NTFS_INDEX_TREE *,FRN,FRN,unsigned char *,unsigned char *,unsigned char *,NTFS_CHKDSK_INFO *);
	unsigned char ReconnectReparsePoint(FRN,NTFS_INDEX_TREE *,FRN,FRN,unsigned char *,unsigned char *,unsigned char *,NTFS_CHKDSK_INFO *);
	virtual unsigned char Acknowledge(_CORRUPTION_OUTCOME,void *);
	virtual unsigned char GetRecord(_CORRUPTION_RECORD * *,unsigned long *,unsigned char *,void *);
public:
	static unsigned char AddToBadClustersFile(NUMBER_SET *,NTFS_CHKDSK_INFO *);
	static unsigned char HotFixFrsEntry(_MFT_SEGMENT_REFERENCE,NTFS_CHKDSK_INFO *);
	unsigned char IndexOffsetIndexRoot(_INDEX_ROOT *,NTFS_ATTRIBUTE *,NTFS_ATTRIBUTE *,FRN,unsigned char *,unsigned char *,NTFS_CHKDSK_INFO *);
	unsigned char SpotFixCommandLoop(NTFS_CHKDSK_INFO *,unsigned long *);
	virtual unsigned char BadClusters(_MFT_SEGMENT_REFERENCE,unsigned long,WSTRING const *,BIG_INT,unsigned long,unsigned long,void *);
	virtual unsigned char BadFreeClusters(BIG_INT,unsigned long,unsigned long,void *);
	virtual unsigned char BreakCycle(_MFT_SEGMENT_REFERENCE,_MFT_SEGMENT_REFERENCE,unsigned long,void *);
	virtual unsigned char Connect(_MFT_SEGMENT_REFERENCE,WSTRING const *,unsigned char,_MFT_SEGMENT_REFERENCE,unsigned long,_MFT_SEGMENT_REFERENCE *,unsigned long,void *);
	virtual unsigned char CorruptSDEntry(unsigned __int64,unsigned long,void *);
	virtual unsigned char CrossLink(_MFT_SEGMENT_REFERENCE,unsigned long,WSTRING const *,BIG_INT,BIG_INT,_MFT_SEGMENT_REFERENCE,unsigned long,WSTRING const *,BIG_INT,BIG_INT,unsigned long,unsigned long,void *);
	virtual unsigned char FRS(_MFT_SEGMENT_REFERENCE,unsigned long,void *);
	virtual unsigned char FRSAllocate(_MFT_SEGMENT_REFERENCE,unsigned long,WSTRING const *,BIG_INT,BIG_INT,BIG_INT,unsigned long,void *);
	virtual unsigned char ForceFullChkdsk(NTFS_CHKDSK_INFO *,unsigned long);
	virtual unsigned char ForceFullChkdsk(unsigned long,void *);
	virtual unsigned char ForceProactiveScan(unsigned long,void *);
	virtual unsigned char GetNumberRecords(unsigned long *,void *);
	virtual unsigned char IndexAttribute(_MFT_SEGMENT_REFERENCE,WSTRING const *,unsigned long,void *);
	virtual unsigned char IndexCycle(_MFT_SEGMENT_REFERENCE,WSTRING const *,unsigned long,BIG_INT *,unsigned long,void *);
	virtual unsigned char IndexEntry(_MFT_SEGMENT_REFERENCE,WSTRING const *,unsigned long,void *,unsigned long,void *);
	virtual unsigned char IndexOffset(_MFT_SEGMENT_REFERENCE,WSTRING const *,BIG_INT,BIG_INT,unsigned long,unsigned long,void *);
	virtual unsigned char IndexOrder(_MFT_SEGMENT_REFERENCE,WSTRING const *,unsigned long,void *);
	virtual unsigned char IndexSort(_MFT_SEGMENT_REFERENCE,WSTRING const *,BIG_INT,unsigned long,unsigned long,void *);
	virtual unsigned char IndexSubTree(_MFT_SEGMENT_REFERENCE,WSTRING const *,unsigned long,void *,unsigned long,void *);
	virtual unsigned char InvalidSid(unsigned long,unsigned long,_MFT_SEGMENT_REFERENCE *,unsigned long,void *);
	virtual unsigned char OrphanChildFrs(unsigned long,_MFT_SEGMENT_REFERENCE *,unsigned long,void *);
	virtual unsigned char UpdateState(NTFS_CHKDSK_INFO *);
	virtual unsigned long MajorTag();
};

class NTFS_SPOTVERIFY_COMMANDS
{
protected:
	virtual unsigned char Acknowledge(_CORRUPTION_OUTCOME,void *);
	virtual unsigned char GetNumberRecords(unsigned long *,void *);
	virtual unsigned char GetRecord(_CORRUPTION_RECORD * *,unsigned long *,unsigned char *,void *);
public:
	static unsigned char Purge(void *,CORRUPTION_LOG_FILE_ID,unsigned __int64,_CORRUPTION_OUTCOME);
	static unsigned char QueryCorruptVerifyFile(void *,CORRUPTION_LOG_FILE_ID,unsigned long *,unsigned __int64 *,unsigned __int64 *,unsigned __int64 *);
	virtual unsigned char ForceFullChkdsk(NTFS_CHKDSK_INFO *,unsigned long);
	virtual unsigned char Initialize(WSTRING const *,WSTRING const *);
	virtual unsigned long MajorTag();
};

struct NTFS_UPCASE_FILE
{
	NTFS_UPCASE_FILE();
	unsigned char Create(_STANDARD_INFORMATION const *,BIG_INT,NTFS_UPCASE_TABLE *,NTFS_BITMAP *);
	unsigned char Initialize(FIX_LEVEL,NTFS_MASTER_FILE_TABLE *);
	unsigned char VerifyAndFix(NTFS_UPCASE_TABLE *,NTFS_BITMAP *,NUMBER_SET *,NTFS_INDEX_TREE *,unsigned char *,unsigned char *,FIX_LEVEL,MESSAGE *);
	virtual ~NTFS_UPCASE_FILE();
};

class NTFS_UPCASE_TABLE
{
	void Destroy();
public:
	NTFS_UPCASE_TABLE();
	static void InitializeInfo(_UPCASE_INFORMATION *,void const *,unsigned long);
	unsigned char Initialize();
	unsigned char Initialize(NTFS_ATTRIBUTE *,unsigned __int64 *);
	unsigned char Initialize(unsigned short *,unsigned long);
	virtual ~NTFS_UPCASE_TABLE();
};

struct NTFS_VOL
{
	FORMAT_ERROR_CODE Initialize(WSTRING const *,MESSAGE *,unsigned char,unsigned char,_MEDIA_TYPE,unsigned char,unsigned int,unsigned char,unsigned long,unsigned char);
	NTFS_VOL();
	unsigned char Extend(MESSAGE *,unsigned char,BIG_INT);
	virtual VOL_LIODPDRV * QueryDupVolume(WSTRING const *,MESSAGE *,unsigned char,unsigned char,_MEDIA_TYPE);
	virtual ~NTFS_VOL();
};

class NTFS_VOLUME_FILE
{
	unsigned char Create();
	unsigned char CreateFileName();
	unsigned char CreateStandardInformation();
	unsigned char CreateVolumeInformation();
	unsigned char CreateVolumeName();
	unsigned char DeleteAttribute(unsigned long,char const *);
	unsigned char DeleteFromIndex(_FILE_NAME *);
	unsigned char GetParentFrsIndex(BIG_INT,NTFS_FILE_RECORD_SEGMENT *,NTFS_INDEX_TREE *);
public:
	NTFS_VOLUME_FILE();
	unsigned char Initialize(LOG_IO_DP_DRIVE *,NTFS_MASTER_FILE_TABLE *,NTFS_FILE_RECORD_SEGMENT *,NTFS_INDEX_TREE *,_VOLUME_INFORMATION *,WSTRING *,FIX_LEVEL);
	unsigned char VerifyAndFix(unsigned char *,MESSAGE *);
	virtual ~NTFS_VOLUME_FILE();
};

struct NonDriverLogManagement
{
	virtual unsigned char CreateLogSubDirectory(WSTRING const *,_CANNED_SECURITY_TYPE *,unsigned long,unsigned char *);
	virtual unsigned char DeleteLogFile(FileDescriptor *);
	virtual unsigned char DumpToFile(WSTRING const *,HMEM *,unsigned long,_CANNED_SECURITY_TYPE,unsigned char *,unsigned char);
	virtual unsigned char EnumerateLogFiles(ARRAY *);
	virtual unsigned char Flush();
	virtual unsigned char Initialize(NTFS_CHKDSK_INFO *,MESSAGE *);
	virtual unsigned char LookupDirectory(WSTRING const *);
};

struct OBJECT
{
	virtual long Compare(OBJECT const *);
	virtual void DebugDump(unsigned char);
};

struct PROSCAN_CHILD_ENTRY
{
	static int Compare(void const *,void const *);
	static int SortCompare(void const *,void const *);
	virtual unsigned long HashValue(PROSCAN_HASH_ENTRY *);
};

struct PROSCAN_CONNECT
{
	static int Compare(void const *,void const *);
	unsigned char AddConnect(FRN,FRN,WSTRING const *,FRN,unsigned long,NTFS_CHKDSK_INFO *);
	unsigned char CreateRecoverDirectory(WSTRING const *,PROSCAN_CONNECT_ENTRY *,NTFS_CHKDSK_INFO *);
	virtual unsigned long HashValue(PROSCAN_HASH_ENTRY *);
};

struct PROSCAN_CONNECT_ENTRY
{
	PROSCAN_CONNECT_ENTRY();
};

struct PROSCAN_CROSSLINK
{
	static int SortCompare(void *,void *);
	unsigned char IssueCrossLinkCommand(FRN,unsigned long,WSTRING const *,BIG_INT,BIG_INT,BIG_INT,NTFS_CHKDSK_INFO *);
};

class PROSCAN_HASH
{
	static unsigned long * Primes;
	static unsigned long * Strides;
public:
	unsigned char AddEntry(PROSCAN_HASH_ENTRY *,PROSCAN_HASH_ENTRY * *);
	unsigned char AllocateEntrySlot(PROSCAN_HASH_ENTRY *,PROSCAN_HASH_SEGMENT * *,PROSCAN_HASH_ENTRY * *);
	unsigned char AllocateNewHash(unsigned long,PROSCAN_HASH_ENTRY * *,unsigned long *,unsigned long *,unsigned long *);
	unsigned char Delete(PROSCAN_HASH_ENTRY *,unsigned char *);
	unsigned char ExportSorted();
	unsigned char Initialize(unsigned long);
	unsigned char Lookup(PROSCAN_HASH_ENTRY *,PROSCAN_HASH_ENTRY * *);
	unsigned char Lookup(PROSCAN_HASH_ENTRY *,unsigned char *,PROSCAN_HASH_SEGMENT * *,PROSCAN_HASH_ENTRY * *);
};

class PROSCAN_HASH_SEGMENT
{
	unsigned char GrowHash(PROSCAN_HASH *,unsigned long);
	unsigned char Lookup(PROSCAN_HASH *,PROSCAN_HASH_ENTRY *,unsigned char *,PROSCAN_HASH_ENTRY * *);
};

struct PROSCAN_INVALIDSID
{
	static int Compare(void const *,void const *);
	unsigned char AddInvalidSid(unsigned long,FRN,unsigned long);
	virtual unsigned long HashValue(PROSCAN_HASH_ENTRY *);
};

struct SECRUN
{
	virtual unsigned char Read();
	virtual unsigned char VerifyRead(unsigned char *);
};

class SIDTAB
{
	static _RTL_GENERIC_COMPARE_RESULTS CompareSidTabEntry(_RTL_AVL_TABLE *,void *,void *);
	static void * AllocateSidTabEntry(_RTL_AVL_TABLE *,unsigned long);
	static void FreeSidTabEntry(_RTL_AVL_TABLE *,void *);
public:
	unsigned char Add(unsigned long,FRN,unsigned long *);
};

struct SQM_UTIL_START_END
{
	unsigned char Initialize(unsigned long,ARRAY *);
};

struct VOL_LIODPDRV
{
	virtual FORMAT_ERROR_CODE WriteEntireDrive(MESSAGE *,void *,unsigned long,unsigned int,unsigned int);
};

CLASS_DESCRIPTOR const * const NTFS_ATTRIBUTE_COLUMNS_cd;
CLASS_DESCRIPTOR const * const NTFS_ATTRIBUTE_DEFINITION_TABLE_cd;
CLASS_DESCRIPTOR const * const NTFS_ATTRIBUTE_LIST_cd;
CLASS_DESCRIPTOR const * const NTFS_ATTRIBUTE_RECORD_cd;
CLASS_DESCRIPTOR const * const NTFS_ATTRIBUTE_cd;
CLASS_DESCRIPTOR const * const NTFS_BAD_CLUSTER_FILE_cd;
CLASS_DESCRIPTOR const * const NTFS_BITMAP_FILE_cd;
CLASS_DESCRIPTOR const * const NTFS_BITMAP_cd;
CLASS_DESCRIPTOR const * const NTFS_BOOT_FILE_cd;
CLASS_DESCRIPTOR const * const NTFS_CLUSTER_RUN_cd;
CLASS_DESCRIPTOR const * const NTFS_EXTENT_LIST_cd;
CLASS_DESCRIPTOR const * const NTFS_EXTENT_cd;
CLASS_DESCRIPTOR const * const NTFS_FILE_RECORD_SEGMENT_cd;
CLASS_DESCRIPTOR const * const NTFS_FRS_STRUCTURE_cd;
CLASS_DESCRIPTOR const * const NTFS_INDEX_BUFFER_cd;
CLASS_DESCRIPTOR const * const NTFS_INDEX_ROOT_cd;
CLASS_DESCRIPTOR const * const NTFS_INDEX_TREE_cd;
CLASS_DESCRIPTOR const * const NTFS_LOG_FILE_cd;
CLASS_DESCRIPTOR const * const NTFS_MASTER_FILE_TABLE_cd;
CLASS_DESCRIPTOR const * const NTFS_MFT_FILE_cd;
CLASS_DESCRIPTOR const * const NTFS_MFT_INFO_cd;
CLASS_DESCRIPTOR const * const NTFS_REFLECTED_MASTER_FILE_TABLE_cd;
CLASS_DESCRIPTOR const * const NTFS_SA_cd;
CLASS_DESCRIPTOR const * const NTFS_UPCASE_FILE_cd;
CLASS_DESCRIPTOR const * const NTFS_UPCASE_TABLE_cd;
CLASS_DESCRIPTOR const * const NTFS_VOLUME_FILE_cd;
CLASS_DESCRIPTOR const * const NTFS_VOL_cd;
DSTRING * InvokerTag;
_ATTRIBUTE_DEFINITION_COLUMNS const * const NtfsAttributeDefinitions_1;
_ATTRIBUTE_DEFINITION_COLUMNS const * const NtfsAttributeDefinitions_2;
_GUID _OldAid;
_LARGE_INTEGER LargestLsnEncountered;
_LARGE_INTEGER LargestUsnEncountered;
_msg_translate * TranslateTable;
long CompareAttributeRecords(NTFS_ATTRIBUTE_RECORD const *,NTFS_ATTRIBUTE_RECORD const *,NTFS_UPCASE_TABLE const *);
long NtfsCollate(void const *,unsigned long,void const *,unsigned long,unsigned long,NTFS_UPCASE_TABLE *);
long StringCchPrintfA(char *,unsigned __int64,char const *,...);
long TraceLoggingStatus;
unsigned __int64 FrsOfLargestUsnEncountered;
unsigned char AccountForBadClusters(BIG_INT,BIG_INT,NTFS_BITMAP *,LOG_IO_DP_DRIVE *,unsigned long,unsigned char *,NUMBER_SET *);
unsigned char BuildOrphanSubDir(unsigned long,NTFS_CHKDSK_INFO *,NTFS_CHKDSK_REPORT *,unsigned long,NUMBER_SET *,NTFS_MASTER_FILE_TABLE *,NTFS_INDEX_TREE *,NTFS_FILE_RECORD_SEGMENT *,FIX_LEVEL,MESSAGE *,unsigned char *);
unsigned char ConnectFile(NTFS_FILE_RECORD_SEGMENT *,DIGRAPH *,unsigned char *,unsigned char,unsigned char,NTFS_CHKDSK_INFO *,NTFS_CHKDSK_REPORT *,NTFS_MASTER_FILE_TABLE *,FIX_LEVEL,MESSAGE *);
unsigned char CreateNtfsDirectory(NTFS_CHKDSK_INFO *,NTFS_INDEX_TREE *,NTFS_FILE_RECORD_SEGMENT *,WSTRING const *,unsigned long,NTFS_INDEX_TREE *,NTFS_FILE_RECORD_SEGMENT *,NTFS_MASTER_FILE_TABLE *,FIX_LEVEL,MESSAGE *,unsigned char *);
unsigned char EnsureSystemFilesInUse(NTFS_CHKDSK_INFO *,NTFS_MASTER_FILE_TABLE *,FIX_LEVEL,MESSAGE *);
unsigned char EnsureValidFileAttributes(NTFS_FILE_RECORD_SEGMENT *,NTFS_INDEX_TREE *,unsigned char *,unsigned long,NTFS_CHKDSK_INFO *,NTFS_MASTER_FILE_TABLE *,FIX_LEVEL,MESSAGE *);
unsigned char EnsureValidParentFileName(NTFS_CHKDSK_INFO *,NTFS_FILE_RECORD_SEGMENT *,_MFT_SEGMENT_REFERENCE,unsigned char *);
unsigned char ExtractExtendInfo(NTFS_INDEX_TREE *,NTFS_CHKDSK_INFO *,MESSAGE *);
unsigned char FetchUpcaseInfoChecksum(NTFS_FRS_STRUCTURE *,NTFS_ATTRIBUTE *,unsigned char *,unsigned __int64 *);
unsigned char GetAllocationVcnLcnOffset(NTFS_INDEX_TREE const *,BIG_INT *,BIG_INT *,unsigned long *);
unsigned char GetSystemFileName(unsigned char,BIG_INT,WSTRING *,unsigned char *);
unsigned char MarkQuotaOutOfDate(NTFS_CHKDSK_INFO *,NTFS_MASTER_FILE_TABLE *,FIX_LEVEL,MESSAGE *);
unsigned char PartitionExtentList(NTFS_EXTENT_LIST const *,unsigned long,NTFS_EXTENT_LIST *,NTFS_EXTENT_LIST *);
unsigned char PatchNtfsBootCodeMessages();
unsigned char PerformBootRelocation(NTFS_CHKDSK_INFO const *,NTFS_MASTER_FILE_TABLE *,NUMBER_SET *,FIX_LEVEL,MESSAGE *);
unsigned char RecordParentPointers(NUMBER_SET const *,NTFS_CHKDSK_INFO const *,NTFS_MASTER_FILE_TABLE *,DIGRAPH *);
unsigned char RecoverAllUserFiles(NTFS_CHKDSK_INFO *,unsigned char,NTFS_MASTER_FILE_TABLE *,NUMBER_SET *,MESSAGE *);
unsigned char RecoverFreeSpace(NTFS_CHKDSK_INFO *,NTFS_MASTER_FILE_TABLE *,NUMBER_SET *,MESSAGE *);
unsigned char RemoveBadLink(NTFS_CHKDSK_INFO *,NUMBER_SET *,unsigned long,unsigned long,NTFS_MASTER_FILE_TABLE *,FIX_LEVEL,MESSAGE *);
unsigned char ScopeSnapshot(void *,NTFS_CHKDSK_INFO *,unsigned long);
unsigned char SetInvokerTag(WSTRING *);
unsigned char SetOriginalVolumeName(WSTRING *);
unsigned char SetWriteViewCacheVolumeName(WSTRING *);
unsigned char StartScoping(void *,unsigned long);
unsigned char SwapAttributeListEntries(void *);
unsigned char SwapAttributeRecords(void *);
unsigned char UpdateChkdskInfo(NTFS_FRS_STRUCTURE *,NTFS_CHKDSK_INFO *,MESSAGE *);
unsigned char ValidateEa(NTFS_FILE_RECORD_SEGMENT *,NTFS_CHKDSK_REPORT *,unsigned char *,NTFS_BITMAP *,FIX_LEVEL,MESSAGE *);
unsigned char ValidateReparsePoint(NTFS_FILE_RECORD_SEGMENT *,NTFS_CHKDSK_INFO *,NTFS_MASTER_FILE_TABLE *,FIX_LEVEL,unsigned char *,MESSAGE *);
unsigned char VerifyExtendedSpace(NTFS_MASTER_FILE_TABLE *,BIG_INT,BIG_INT,NUMBER_SET *,MESSAGE *);
unsigned char operator==(NTFS_ATTRIBUTE const &,NTFS_ATTRIBUTE const &);
unsigned long TranslateMessage(unsigned long,FIX_LEVEL);
void DeleteAllAttributes(SEQUENTIAL_CONTAINER *);
void EstimateCostToTraverseDirs(BIG_INT,BIG_INT,BIG_INT,unsigned __int64,unsigned long,unsigned __int64 *);
