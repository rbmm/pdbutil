
struct CUMBusDeviceInterface
{
	static long GetDeviceInfoData(_GUID,unsigned short const *,void * *,_SP_DEVINFO_DATA *);
	static long GetDeviceInfoDataByInterface(_GUID,unsigned short *,void * *,_SP_DEVINFO_DATA *);
	static long GetDeviceInfoDataByPath(_GUID const &,unsigned short const *,int *,void * *,_SP_DEVINFO_DATA *);
	static long OpenRootUmBusEnumerator(void * *);
	static long UnInstallDevice(void *,_SP_DEVINFO_DATA *);
};

class CUMBusDriver
{
	long CreateLocalInstance(_GUID,unsigned short *,IUMBusPDO * *);
	long FindEnumByIdentityLocally(unsigned short *,IUMBusPDO * *);
	long GetChildNodeIdentity(_GUID,unsigned short *,unsigned __int64);
	long GetEnumeratorDeviceDetailsAndMarkPresent(_GUID,CUMBusPDO *);
	long GetLocalCount(unsigned long *);
	long LocalItem(unsigned long,IUMBusPDO * *);
	long RemoveEnumByLocalIndex(unsigned long);
	long SetPreCommitDeviceProperties(_GUID,IPropertyStore *);
	long SetPropertyValue(_GUID,_tagpropertykey,unsigned long,void *,unsigned __int64);
protected:
	long CreateBusEnumerator(unsigned short *,_GUID *,unsigned long *);
	long GetRootUmBusEnumerator();
public:
	CUMBusDriver();
	static long UpdateRegistry(int);
	virtual IUnknown * GetControllingUnknown();
	virtual long AddBusEnumerator(unsigned short *,IPropertyStore *,IPropertyStore *,IUMBusPDO * *);
	virtual long DeleteBusEnumerator(IUMBusPDO *);
	virtual long FindEnumByIdentity(unsigned short *,IUMBusPDO * *);
	virtual long GetCount(unsigned long *);
	virtual long Item(unsigned long,IUMBusPDO * *);
	virtual long RemoveBusEnumerator(IUMBusPDO *);
	~CUMBusDriver();
};

class CUMBusPDO
{
	long CreateLocalInstance(_GUID,unsigned short *,IUMBusPDO * *);
	long FindChildByIdentityLocally(unsigned short *,IUMBusPDO * *);
	long GetChildDeviceDetailsAndMarkPresent(_GUID,CUMBusPDO *);
	long GetChildNodeIdentity(_GUID,unsigned short *,unsigned __int64);
	long GetLocalCount(unsigned long *);
	long GetSelfDetailsAndMarkPresent();
	long LocalItem(unsigned long,IUMBusPDO * *);
	long RemoveChildByLocalIndex(unsigned long);
	long SetPreCommitDeviceProperties(_GUID,IPropertyStore *);
	long SetPropertyValue(_GUID,_tagpropertykey,unsigned long,void *,unsigned __int64);
protected:
	long CreateChild(unsigned short *,unsigned long,_GUID *,unsigned long *);
public:
	long DeleteChildNodes();
	virtual IUnknown * GetControllingUnknown();
	virtual long AddChild(unsigned short *,IPropertyStore *,IPropertyStore *,unsigned long,IUMBusPDO * *);
	virtual long Commit();
	virtual long DeleteChild(IUMBusPDO *);
	virtual long FindChildByIdentity(unsigned short *,IUMBusPDO * *);
	virtual long GetAt(unsigned long,_tagpropertykey *);
	virtual long GetChildCount(unsigned long *);
	virtual long GetCount(unsigned long *);
	virtual long GetDynamicPropertyStore(IPropertyStore * *);
	virtual long GetValue(_tagpropertykey const &,tagPROPVARIANT *);
	virtual long Item(unsigned long,IUMBusPDO * *);
	virtual long RemoveChild(IUMBusPDO *);
	virtual long SetDevicePath(unsigned short const *);
	virtual long SetValue(_tagpropertykey const &,tagPROPVARIANT const &);
	~CUMBusPDO();
};

ATL::CComModule _Module;
PROPERTYINFO * MandatoryDeviceProperties;
int GetBinaryEncodedPropVar(unsigned char *,unsigned long *,unsigned short *);
int IsBinaryEncodedPropVarType(unsigned short);
long AllocCoMemString(unsigned short const *,unsigned short * *);
long HrSerializeBinaryEncodedPropVar(tagPROPVARIANT const *,SERIALIZEDPROPVARIANT *,unsigned long *);
long SHCoAlloc<char>(unsigned __int64,char * *,void const *);
long SHCoAlloc<unsigned char>(unsigned __int64,unsigned char * *,void const *);
long SHCoAlloc<unsigned short>(unsigned __int64,unsigned short * *,void const *);
long StringCbCopyW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCbLengthA(char const *,unsigned __int64,unsigned __int64 *);
long StringCbLengthW(unsigned short const *,unsigned __int64,unsigned __int64 *);
long StringCchCopyW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchLengthW(unsigned short const *,unsigned __int64,unsigned __int64 *);
long ULongLongMult(unsigned __int64,unsigned __int64,unsigned __int64 *);
long UnserializePropVariant(SERIALIZEDPROPVARIANT const *,tagPROPVARIANT *,unsigned int);
long UnserializePropVariant(tagPROPVARIANT *,unsigned char *,unsigned int);
unsigned int CloneBlob(SERIALIZEDPROPVARIANT *,unsigned int *,void const *,unsigned int,unsigned int *);
unsigned int SerializeBinaryEncodedPropVar(tagPROPVARIANT const *,SERIALIZEDPROPVARIANT *,unsigned int);
unsigned int SerializePropVariant(tagPROPVARIANT const *,SERIALIZEDPROPVARIANT *,unsigned int);
unsigned int _SizeOfVectorVartype(unsigned short);
unsigned short * g_vtBinaryEncodedPropVarTypes;
unsigned short * g_wszModuleFileName;
unsigned short * ualSysAllocString(unsigned short const *);
void * operator new(unsigned __int64);
void operator delete(void *);
