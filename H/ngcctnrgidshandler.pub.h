namespace ApduCommandResponse
{
	struct type
	{
		type(type const &);
		~type();
	};

};

struct ApplicationIdentifier
{
	struct type
	{
		~type();
	};

	static ApplicationIdentifier::type make(rangelib::range<unsigned char const *>);
};

struct Asn1Integer<2,1>
{
	struct type
	{
		~type();
	};

	static std::tuple<errorlib::scoped_error<ntstatus_error::tag>,Asn1Integer<2,1>::type,rangelib::range<unsigned char const *> > decode(rangelib::range<unsigned char const *>);
};

struct Asn1RsaPrivateKey
{
	struct type
	{
		type();
		~type();
	};

	static std::tuple<errorlib::scoped_error<ntstatus_error::tag>,Asn1RsaPrivateKey::type,rangelib::range<unsigned char const *> > decode(rangelib::range<unsigned char const *>);
};

struct Asn1Tag
{
	namespace detail
	{
		struct StaticTag1<135>
		{
			static type get();
		};

		struct StaticTag1<136>
		{
			static type get();
		};

		struct StaticTag1<2>
		{
			static type get();
		};

		struct StaticTag2<127,113>
		{
			static type get();
		};

		struct StaticTag2<127,114>
		{
			static type get();
		};

		struct StaticTag2<127,115>
		{
			static type get();
		};

	};

	static std::tuple<errorlib::scoped_error<ntstatus_error::tag>,Asn1Tag::type,rangelib::range<unsigned char const *> > decode(rangelib::range<unsigned char const *>);
	static std::tuple<errorlib::scoped_error<ntstatus_error::tag>,std::vector<unsigned char,wil::secure_allocator<unsigned char> > > encode(Asn1Tag::type const &);
	static std::tuple<rangelib::range<unsigned char const *>,Asn1Tag::type> Get<112>();
	static std::tuple<rangelib::range<unsigned char const *>,Asn1Tag::type> Get<128>();
	static std::tuple<rangelib::range<unsigned char const *>,Asn1Tag::type> Get<131>();
	static std::tuple<rangelib::range<unsigned char const *>,Asn1Tag::type> Get<132>();
	static std::tuple<rangelib::range<unsigned char const *>,Asn1Tag::type> Get<165>();
	static std::tuple<rangelib::range<unsigned char const *>,Asn1Tag::type> Get<48>();
	static std::tuple<rangelib::range<unsigned char const *>,Asn1Tag::type> Get<65>();
	static std::tuple<rangelib::range<unsigned char const *>,Asn1Tag::type> Get<66>();
};

struct Asn1Vector<Asn1Tag>
{
	struct type
	{
		~type();
	};

	static std::tuple<errorlib::scoped_error<ntstatus_error::tag>,Asn1Vector<Asn1Tag>::type,rangelib::range<unsigned char const *> > decode(rangelib::range<unsigned char const *>);
};

struct Asn1Vector<Crt>
{
	struct type
	{
		~type();
	};

	static std::tuple<errorlib::scoped_error<ntstatus_error::tag>,Asn1Vector<Crt>::type,rangelib::range<unsigned char const *> > decode(rangelib::range<unsigned char const *>);
	static std::tuple<errorlib::scoped_error<ntstatus_error::tag>,std::vector<unsigned char,wil::secure_allocator<unsigned char> > > encode(Asn1Vector<Crt>::type const &);
};

struct Asn1Vector<DataObject>
{
	struct type
	{
		~type();
	};

	static std::tuple<errorlib::scoped_error<ntstatus_error::tag>,Asn1Vector<DataObject>::type,rangelib::range<unsigned char const *> > decode(rangelib::range<unsigned char const *>);
};

struct BerTlvByte<Asn1Tag::detail::StaticTag1<147> >
{
	static std::tuple<errorlib::scoped_error<ntstatus_error::tag>,std::vector<unsigned char,wil::secure_allocator<unsigned char> > > encode(BerTlvByte<Asn1Tag::detail::StaticTag1<147> >::type const &);
};

struct BerTlvByte<Asn1Tag::detail::StaticTag1<151> >
{
	static std::tuple<errorlib::scoped_error<ntstatus_error::tag>,std::vector<unsigned char,wil::secure_allocator<unsigned char> > > encode(BerTlvByte<Asn1Tag::detail::StaticTag1<151> >::type const &);
};

struct CardApplication
{
	virtual ~CardApplication();
};

class Channel
{
	struct PostCommand
	{
		PostCommand(std::shared_ptr<std::vector<std::shared_ptr<CardApplication>,std::allocator<std::shared_ptr<CardApplication> > > >,std::shared_ptr<ChannelData>);
		Response::type CreateFileW(CommandHeader::type const &,DataObjectImplicit<ScardGidsModule,5>::type const &);
		Response::type PutData(CommandHeader::type const &,ElementaryFileIdentifier::type,Asn1Tag::type);
		Response::type PutData(CommandHeader::type const &,ElementaryFileIdentifier::type,DataObject::type const &);
		errorlib::scoped_error<apdustatus_error::tag> ExecuteCommand(Command::type const &);
		~PostCommand();
	};

	struct PreCommand
	{
		PreCommand(std::shared_ptr<std::vector<std::shared_ptr<CardApplication>,std::allocator<std::shared_ptr<CardApplication> > > >,std::shared_ptr<ChannelData>);
		Response::type GetData(CommandHeader::type const &,ElementaryFileIdentifier::type,Asn1Vector<Asn1Tag>::type const &);
		Response::type GetKey(CommandHeader::type const &,ElementaryFileIdentifier::type,GidsGetKeyPublicKeyReference::type const &);
		Response::type Select(CommandHeader::type const &,SelectorType::type,SelectOccurance::type,SelectResult::type,ApplicationIdentifier::type);
		Response::type Select(CommandHeader::type const &,SelectorType::type,SelectOccurance::type,SelectResult::type,ElementaryFileIdentifier::type);
		errorlib::scoped_error<apdustatus_error::tag> ExecuteCommand(Command::type const &);
		~PreCommand();
	};

	Response::type GetEfAtr(CommandHeader::type const &,ElementaryFileIdentifier::type);
public:
	Channel(std::shared_ptr<FileSystem>,std::shared_ptr<std::vector<std::shared_ptr<CardApplication>,std::allocator<std::shared_ptr<CardApplication> > > >,std::shared_ptr<Transaction>);
	Response::type ExecuteCommand(ApduCommandResponse::type);
};

struct ChannelData
{
	std::shared_ptr<CardApplication> Application();
	void SelectApplication(std::shared_ptr<CardApplication>);
	void SelectDf(std::shared_ptr<FileSystem::DedicatedFile>);
	void SelectEf(std::shared_ptr<FileSystem::ElementaryFile>);
};

struct Command
{
	struct type
	{
		~type();
	};

	static Command::type make(rangelib::range<unsigned char const *>);
};

struct CommandAdaptorSpecific<Channel,13>
{
	struct detail
	{
		static bool optionalEfDir<Channel>(Response::type *,Channel *,CommandHeader::type const &,ElementaryFileIdentifier::type);
		static void getdata(Response::type *,Channel *,CommandHeader::type const &,ElementaryFileIdentifier::type,std::vector<unsigned char,wil::secure_allocator<unsigned char> > const &);
		static void getkey(Response::type *,Channel *,CommandHeader::type const &,ElementaryFileIdentifier::type,GidsGetKeyPublicKeyReference::type const &);
	};

	virtual Response::type operator()(Command::type const &,Channel *);
};

struct CommandAdaptorSpecific<Channel,15>
{
	struct detail
	{
		static bool optionalGetResponse<Channel>(Response::type *,Channel *,CommandHeader::type const &);
	};

	virtual Response::type operator()(Command::type const &,Channel *);
};

struct CommandAdaptorSpecific<Channel::PostCommand,14>
{
	virtual Response::type operator()(Command::type const &,Channel::PostCommand *);
};

struct CommandAdaptorSpecific<Channel::PostCommand,2>
{
	virtual Response::type operator()(Command::type const &,Channel::PostCommand *);
};

struct CommandAdaptorSpecific<Channel::PostCommand,3>
{
	virtual Response::type operator()(Command::type const &,Channel::PostCommand *);
};

struct CommandAdaptorSpecific<Channel::PreCommand,13>
{
	struct detail
	{
		static void getdata(Response::type *,Channel::PreCommand *,CommandHeader::type const &,ElementaryFileIdentifier::type,std::vector<unsigned char,wil::secure_allocator<unsigned char> > const &);
		static void getkey(Response::type *,Channel::PreCommand *,CommandHeader::type const &,ElementaryFileIdentifier::type,GidsGetKeyPublicKeyReference::type const &);
	};

	virtual Response::type operator()(Command::type const &,Channel::PreCommand *);
};

struct CommandAdaptorSpecific<Channel::PreCommand,5>
{
	virtual Response::type operator()(Command::type const &,Channel::PreCommand *);
};

struct CommandAdaptorSpecific<GidsApplication,10>
{
	virtual Response::type operator()(Command::type const &,GidsApplication *);
};

struct CommandAdaptorSpecific<GidsApplication,11>
{
	virtual Response::type operator()(Command::type const &,GidsApplication *);
};

struct CommandAdaptorSpecific<GidsApplication,12>
{
	virtual Response::type operator()(Command::type const &,GidsApplication *);
};

struct CommandAdaptorSpecific<GidsApplication,13>
{
	struct detail
	{
		static void getdata(Response::type *,GidsApplication *,CommandHeader::type const &,ElementaryFileIdentifier::type,std::vector<unsigned char,wil::secure_allocator<unsigned char> > const &);
		static void getkey(Response::type *,GidsApplication *,CommandHeader::type const &,ElementaryFileIdentifier::type,GidsGetKeyPublicKeyReference::type const &);
	};

	virtual Response::type operator()(Command::type const &,GidsApplication *);
};

struct CommandAdaptorSpecific<GidsApplication,14>
{
	virtual Response::type operator()(Command::type const &,GidsApplication *);
};

struct CommandAdaptorSpecific<GidsApplication,15>
{
	virtual Response::type operator()(Command::type const &,GidsApplication *);
};

struct CommandAdaptorSpecific<GidsApplication,16>
{
	virtual Response::type operator()(Command::type const &,GidsApplication *);
};

struct CommandAdaptorSpecific<GidsApplication,17>
{
	virtual Response::type operator()(Command::type const &,GidsApplication *);
};

struct CommandAdaptorSpecific<GidsApplication,18>
{
	virtual Response::type operator()(Command::type const &,GidsApplication *);
};

struct CommandAdaptorSpecific<GidsApplication,1>
{
	virtual Response::type operator()(Command::type const &,GidsApplication *);
};

struct CommandAdaptorSpecific<GidsApplication,2>
{
	virtual Response::type operator()(Command::type const &,GidsApplication *);
};

struct CommandAdaptorSpecific<GidsApplication,3>
{
	virtual Response::type operator()(Command::type const &,GidsApplication *);
};

struct CommandAdaptorSpecific<GidsApplication,4>
{
	virtual Response::type operator()(Command::type const &,GidsApplication *);
};

struct CommandAdaptorSpecific<GidsApplication,5>
{
	virtual Response::type operator()(Command::type const &,GidsApplication *);
};

struct CommandAdaptorSpecific<GidsApplication,6>
{
	virtual Response::type operator()(Command::type const &,GidsApplication *);
};

struct CommandAdaptorSpecific<GidsApplication,7>
{
	virtual Response::type operator()(Command::type const &,GidsApplication *);
};

struct CommandAdaptorSpecific<GidsApplication,8>
{
	virtual Response::type operator()(Command::type const &,GidsApplication *);
};

struct CommandAdaptorSpecific<GidsApplication,9>
{
	virtual Response::type operator()(Command::type const &,GidsApplication *);
};

struct CommandHeader
{
	static std::tuple<CommandHeader::type,rangelib::range<unsigned char const *> > make(rangelib::range<unsigned char const *>);
};

struct Crt
{
	struct const_receiver
	{
		~const_receiver();
	};

	struct detail
	{
		static void encode<DataObjectImplicit<ScardGidsModule,15> >(std::tuple<errorlib::scoped_error<ntstatus_error::tag>,std::vector<unsigned char,wil::secure_allocator<unsigned char> > > *,GidsCrtDo<DataObjectImplicit<ScardGidsModule,15>,15,1>::type const &);
		static void encode<DataObjectImplicit<ScardGidsModule,16> >(std::tuple<errorlib::scoped_error<ntstatus_error::tag>,std::vector<unsigned char,wil::secure_allocator<unsigned char> > > *,GidsCrtDo<DataObjectImplicit<ScardGidsModule,16>,16,2>::type const &);
		static void encode<DataObjectImplicit<ScardGidsModule,17> >(std::tuple<errorlib::scoped_error<ntstatus_error::tag>,std::vector<unsigned char,wil::secure_allocator<unsigned char> > > *,GidsCrtDo<DataObjectImplicit<ScardGidsModule,17>,17,3>::type const &);
	};

	struct type
	{
		type(type const &);
		~type();
	};

	static std::tuple<errorlib::scoped_error<ntstatus_error::tag>,Crt::type,rangelib::range<unsigned char const *> > decode(rangelib::range<unsigned char const *>);
	static std::tuple<errorlib::scoped_error<ntstatus_error::tag>,std::vector<unsigned char,wil::secure_allocator<unsigned char> > > encode(Crt::type const &);
};

struct CrtFlags
{
	static void set(CrtFlags::type *,Crt::type const &);
};

struct CryptoAlgorithm
{
	static CryptoAlgorithm::type make(unsigned char);
};

struct CryptoMechanismReference
{
	struct const_receiver
	{
		~const_receiver();
	};

	struct detail
	{
		static void encode<AsymmetricMechanismIdentifier>(unsigned char *,AsymmetricMechanismIdentifier::type const &);
		static void encode<AuthMechanismIdentifier>(unsigned char *,AuthMechanismIdentifier::type const &);
		static void encode<SignatureMechanismIdentifier>(unsigned char *,SignatureMechanismIdentifier::type const &);
		static void encode<SymmetricMechanismIdentifier>(unsigned char *,SymmetricMechanismIdentifier::type const &);
	};

	struct type
	{
		type & operator=(type);
		type(type const &);
	};

	static CryptoMechanismReference::type make(CryptoReferenceTag::type,unsigned char);
	static unsigned char make(CryptoMechanismReference::type const &);
};

struct CryptoMechanismUsage
{
	static CryptoMechanismUsage::type make(CryptoReferenceTag::type,unsigned char);
};

struct DataObject
{
	struct type
	{
		~type();
	};

	static std::tuple<errorlib::scoped_error<ntstatus_error::tag>,DataObject::type,rangelib::range<unsigned char const *> > decode(rangelib::range<unsigned char const *>);
	static std::tuple<errorlib::scoped_error<ntstatus_error::tag>,std::vector<unsigned char,wil::secure_allocator<unsigned char> > > encode(DataObject::type const &);
};

struct DataObjectByteVector<Asn1Tag::detail::StaticTag1<135> >
{
	static std::tuple<errorlib::scoped_error<ntstatus_error::tag>,DataObjectByteVector<Asn1Tag::detail::StaticTag1<135> >::type,rangelib::range<unsigned char const *> > decode(rangelib::range<unsigned char const *>);
};

namespace DataObjectByteVector<Asn1Tag::detail::StaticTag1<67> >
{
	struct type
	{
		~type();
	};

};

struct DataObjectByteVector<Asn1Tag::detail::StaticTag1<70> >
{
	struct type
	{
		~type();
	};

	static std::tuple<errorlib::scoped_error<ntstatus_error::tag>,std::vector<unsigned char,wil::secure_allocator<unsigned char> > > encode(DataObjectByteVector<Asn1Tag::detail::StaticTag1<70> >::type const &);
};

struct DataObjectByteVector<Asn1Tag::detail::StaticTag1<71> >
{
	struct type
	{
		~type();
	};

	static std::tuple<errorlib::scoped_error<ntstatus_error::tag>,std::vector<unsigned char,wil::secure_allocator<unsigned char> > > encode(DataObjectByteVector<Asn1Tag::detail::StaticTag1<71> >::type const &);
};

struct DataObjectImplicit<ScardGidsModule,11>
{
	static std::tuple<errorlib::scoped_error<ntstatus_error::tag>,std::vector<unsigned char,wil::secure_allocator<unsigned char> > > decode(rangelib::range<unsigned char const *>);
};

struct DataObjectImplicit<ScardGidsModule,12>
{
	struct type
	{
		type & operator=(type);
		~type();
	};

	static DataObjectImplicit<ScardGidsModule,12>::type make(SCARDGIDS_GENERALAUTHENTICATE_DO *);
};

struct DataObjectImplicit<ScardGidsModule,13>
{
	struct type
	{
		~type();
	};

	static std::tuple<errorlib::scoped_error<ntstatus_error::tag>,DataObjectImplicit<ScardGidsModule,13>::type> decode(rangelib::range<unsigned char const *>);
};

struct DataObjectImplicit<ScardGidsModule,14>
{
	struct type
	{
		~type();
	};

	static std::tuple<errorlib::scoped_error<ntstatus_error::tag>,std::vector<unsigned char,wil::secure_allocator<unsigned char> > > encode(DataObjectImplicit<ScardGidsModule,14>::type const &);
};

struct DataObjectImplicit<ScardGidsModule,18>
{
	struct type
	{
		type & operator=(type);
		~type();
	};

	static DataObjectImplicit<ScardGidsModule,18>::type make(SCARDGIDS_TLV_PIN_BUFFER *);
	static std::tuple<errorlib::scoped_error<ntstatus_error::tag>,DataObjectImplicit<ScardGidsModule,18>::type> decode(rangelib::range<unsigned char const *>);
};

struct DataObjectImplicit<ScardGidsModule,19>
{
	struct type
	{
		~type();
	};

	static std::tuple<errorlib::scoped_error<ntstatus_error::tag>,DataObjectImplicit<ScardGidsModule,19>::type> decode(rangelib::range<unsigned char const *>);
};

struct DataObjectImplicit<ScardGidsModule,2>
{
	struct type
	{
		~type();
	};

	static DataObjectImplicit<ScardGidsModule,2>::type make(rangelib::range<unsigned char const *>,GidsDiscretionaryObj::type,rangelib::range<char const *>,rangelib::range<char const *>);
	static std::tuple<errorlib::scoped_error<ntstatus_error::tag>,std::vector<unsigned char,wil::secure_allocator<unsigned char> > > encode(DataObjectImplicit<ScardGidsModule,2>::type const &);
};

struct DataObjectImplicit<ScardGidsModule,3>
{
	struct type
	{
		~type();
	};

	static std::tuple<errorlib::scoped_error<ntstatus_error::tag>,std::vector<unsigned char,wil::secure_allocator<unsigned char> > > encode(DataObjectImplicit<ScardGidsModule,3>::type const &);
};

struct DataObjectImplicit<ScardGidsModule,4>
{
	struct type
	{
		type & operator=(type);
		type(type const &);
		~type();
	};

	static DataObjectImplicit<ScardGidsModule,4>::type make(SCARDGIDS_FCP_TEMPLATE_DO_DF *);
	static std::tuple<errorlib::scoped_error<ntstatus_error::tag>,DataObjectImplicit<ScardGidsModule,4>::type> decode(rangelib::range<unsigned char const *>);
	static std::tuple<errorlib::scoped_error<ntstatus_error::tag>,std::vector<unsigned char,wil::secure_allocator<unsigned char> > > encode(DataObjectImplicit<ScardGidsModule,4>::type const &);
};

struct DataObjectImplicit<ScardGidsModule,5>
{
	struct type
	{
		type & operator=(type);
		type(type const &);
		~type();
	};

	static DataObjectImplicit<ScardGidsModule,5>::type make(SCARDGIDS_FCP_TEMPLATE_DO_BEF *);
	static std::tuple<errorlib::scoped_error<ntstatus_error::tag>,DataObjectImplicit<ScardGidsModule,5>::type> decode(rangelib::range<unsigned char const *>);
	static std::tuple<errorlib::scoped_error<ntstatus_error::tag>,std::vector<unsigned char,wil::secure_allocator<unsigned char> > > encode(DataObjectImplicit<ScardGidsModule,5>::type const &);
};

struct DataObjectImplicit<ScardGidsModule,7>
{
	struct type
	{
		~type();
	};

	static DataObjectImplicit<ScardGidsModule,7>::type make(SmartCardPinPolicy::type,rangelib::range<unsigned char const *>,std::vector<GidsTagAllocationAuthorityAid::type,std::allocator<GidsTagAllocationAuthorityAid::type> >);
	static std::tuple<errorlib::scoped_error<ntstatus_error::tag>,std::vector<unsigned char,wil::secure_allocator<unsigned char> > > encode(DataObjectImplicit<ScardGidsModule,7>::type const &);
};

struct ElementaryFileIdentifier
{
	static std::set<ElementaryFileIdentifier::type,std::less<ElementaryFileIdentifier::type>,std::allocator<ElementaryFileIdentifier::type> > isoReserved();
};

class FileSystem
{
	class DedicatedFile
	{
		errorlib::scoped_error<apdustatus_error::tag> WriteFcpToDisk();
		void ReadFromDisk(void * const &,std::shared_ptr<GidsLogicalData> const &);
	public:
		bool AccessCheck(AuthenticatedRoleStatus::type const &,CommandField::type const &);
		errorlib::scoped_error<apdustatus_error::tag> DeleteEf(AuthenticatedRoleStatus::type const &,ElementaryFileIdentifier::type);
		errorlib::scoped_error<apdustatus_error::tag> SetLifeCycleStatus(LifeCycleStatus::type);
		std::tuple<errorlib::scoped_error<apdustatus_error::tag>,bool,std::shared_ptr<ElementaryFile> > CreateEf(AuthenticatedRoleStatus::type const &,DataObjectImplicit<ScardGidsModule,5>::type,std::shared_ptr<GidsLogicalData> const &);
		std::tuple<errorlib::scoped_error<apdustatus_error::tag>,bool,std::shared_ptr<ElementaryFile> > FindEf(ElementaryFileIdentifier::type);
		std::tuple<errorlib::scoped_error<apdustatus_error::tag>,bool,std::vector<std::shared_ptr<ElementaryFile>,std::allocator<std::shared_ptr<ElementaryFile> > > > FindEfs(AuthenticatedRoleStatus::type const &,Asn1Tag::type);
		std::tuple<errorlib::scoped_error<apdustatus_error::tag>,bool,std::vector<std::shared_ptr<ElementaryFile>,std::allocator<std::shared_ptr<ElementaryFile> > > > GetOperationalEf();
		std::vector<std::shared_ptr<ElementaryFile>,std::allocator<std::shared_ptr<ElementaryFile> > > FindKeyEfs(AuthenticatedRoleStatus::type const &,CommandField::type const &,unsigned char);
		std::vector<std::shared_ptr<ElementaryFile>,std::allocator<std::shared_ptr<ElementaryFile> > > GetAllEfs();
	};

	struct DiskOperations
	{
		static errorlib::scoped_error<winerror_error::tag> CreateDirectoryOnDisk(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,void * const &);
		static errorlib::scoped_error<winerror_error::tag> DeleteDirectoryOnDisk(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,void * const &);
		static errorlib::scoped_error<winerror_error::tag> DeleteFilesInDirectory(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,void * const &);
		static errorlib::scoped_error<winerror_error::tag> WriteFileToDisk(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,rangelib::range<unsigned char const *>,void * const &);
		static std::set<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::less<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > >,std::allocator<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > specialDirectories();
		static std::tuple<errorlib::scoped_error<winerror_error::tag>,std::vector<unsigned char,std::allocator<unsigned char> > > ReadFileFromDisk(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,void * const &);
		static std::tuple<errorlib::scoped_error<winerror_error::tag>,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)> > > > CreateFilesystemTransaction();
	};

	class ElementaryFile
	{
		errorlib::scoped_error<apdustatus_error::tag> WriteDataObjectToDisk(DataObject::type const &);
		errorlib::scoped_error<apdustatus_error::tag> WriteFcpToDisk();
		static void CrtMatchesAlgorithm<DataObjectImplicit<ScardGidsModule,15> >(GidsCrtDo<DataObjectImplicit<ScardGidsModule,15>,15,1>::type const &,CryptoAlgorithm::type,bool *);
		static void CrtMatchesAlgorithm<DataObjectImplicit<ScardGidsModule,16> >(GidsCrtDo<DataObjectImplicit<ScardGidsModule,16>,16,2>::type const &,CryptoAlgorithm::type,bool *);
		static void CrtMatchesAlgorithm<DataObjectImplicit<ScardGidsModule,17> >(GidsCrtDo<DataObjectImplicit<ScardGidsModule,17>,17,3>::type const &,CryptoAlgorithm::type,bool *);
		static void CrtMatchesKeyReference<DataObjectImplicit<ScardGidsModule,15> >(GidsCrtDo<DataObjectImplicit<ScardGidsModule,15>,15,1>::type const &,unsigned char,bool *);
		static void CrtMatchesKeyReference<DataObjectImplicit<ScardGidsModule,16> >(GidsCrtDo<DataObjectImplicit<ScardGidsModule,16>,16,2>::type const &,unsigned char,bool *);
		static void CrtMatchesKeyReference<DataObjectImplicit<ScardGidsModule,17> >(GidsCrtDo<DataObjectImplicit<ScardGidsModule,17>,17,3>::type const &,unsigned char,bool *);
		void LoadKeyUsageLimit();
		void ReadFromDisk(void * const &);
	public:
		ElementaryFile(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,DataObjectImplicit<ScardGidsModule,5>::type const &,std::shared_ptr<GidsLogicalData> const &);
		ElementaryFile(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,void * const &,std::shared_ptr<GidsLogicalData> const &);
		bool AccessCheck(AuthenticatedRoleStatus::type const &,CommandField::type const &);
		errorlib::scoped_error<apdustatus_error::tag> PutDataObject(AuthenticatedRoleStatus::type const &,DataObject::type const &);
		errorlib::scoped_error<apdustatus_error::tag> SetLifeCycleStatus(LifeCycleStatus::type);
		std::tuple<errorlib::scoped_error<apdustatus_error::tag>,bool,DataObject::type> FindDataObject(AuthenticatedRoleStatus::type const &,Asn1Tag::type);
		std::tuple<errorlib::scoped_error<apdustatus_error::tag>,bool,std::vector<DataObject::type,std::allocator<DataObject::type> > > GetAllDataObjects(AuthenticatedRoleStatus::type const &);
	};

	void ReadFromDisk(std::shared_ptr<GidsLogicalData> const &);
public:
	FileSystem(unsigned short const *,bool,std::shared_ptr<GidsLogicalData> const &);
	errorlib::scoped_error<apdustatus_error::tag> DeleteDf(std::vector<unsigned char,std::allocator<unsigned char> > const &);
	static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > HexToString(rangelib::range<unsigned char const *>);
	std::tuple<errorlib::scoped_error<apdustatus_error::tag>,bool,std::shared_ptr<FileSystem::DedicatedFile> > CreateDf(DataObjectImplicit<ScardGidsModule,4>::type);
	std::tuple<errorlib::scoped_error<apdustatus_error::tag>,bool,std::shared_ptr<FileSystem::DedicatedFile> > FindDf(std::vector<unsigned char,std::allocator<unsigned char> > const &);
	void CreateFilesystem();
	void DestroyFilesystem();
};

class GidsApplication
{
	Response::type ActivateFile(CommandHeader::type const &);
	Response::type ChangeReferenceData(CommandHeader::type const &,ReferenceDataId::type,DataObjectImplicit<ScardGidsModule,18>::type const &);
	Response::type ChangeReferenceData(CommandHeader::type const &,ReferenceDataId::type,rangelib::range<unsigned char const *>);
	Response::type CreateFileW(CommandHeader::type const &,DataObjectImplicit<ScardGidsModule,5>::type const &);
	Response::type DeleteFileW(CommandHeader::type const &);
	Response::type GeneralAuthenticate(CommandHeader::type const &,DataObjectImplicit<ScardGidsModule,12>::type const &);
	Response::type GenerateAsymmetricKeyPair(CommandHeader::type const &,DataObjectImplicit<ScardGidsModule,13>::type const &);
	Response::type GetData(CommandHeader::type const &,ElementaryFileIdentifier::type,Asn1Vector<Asn1Tag>::type const &);
	Response::type GetKey(CommandHeader::type const &,ElementaryFileIdentifier::type,GidsGetKeyPublicKeyReference::type const &);
	Response::type MakeSelectResponseForDf(SelectResult::type);
	Response::type ManageSecurityEnvironment(CommandHeader::type const &,CryptoReferenceTag::type,CryptoMechanismUsage::type,SecEnvControlReference::type);
	Response::type PerformSecurityOperation(CommandHeader::type const &,SecurityOperation::type,rangelib::range<unsigned char const *>);
	Response::type PutKey(CommandHeader::type const &,ElementaryFileIdentifier::type,GidsPutKeyCommandField::type const &);
	Response::type ResetRetryCounter(CommandHeader::type const &,ResetRetryCounterDataFormat::type,ReferenceDataId::type,DataObjectImplicit<ScardGidsModule,18>::type const &);
	Response::type ResetRetryCounter(CommandHeader::type const &,ResetRetryCounterDataFormat::type,ReferenceDataId::type,rangelib::range<unsigned char const *>);
	Response::type Select(CommandHeader::type const &,SelectorType::type,SelectOccurance::type,SelectResult::type,ElementaryFileIdentifier::type);
	Response::type TerminateDF(CommandHeader::type const &);
	Response::type TranslateError(long,NgcCtnrProtectorId,errorlib::scoped_error<apdustatus_error::tag> *);
	Response::type Verify(CommandHeader::type const &,ReferenceDataQualifier::type);
	Response::type Verify(CommandHeader::type const &,ReferenceDataQualifier::type,rangelib::range<unsigned char const *>);
	bool IsNgcTicket(rangelib::range<unsigned char const *>,unsigned __int64 *);
	errorlib::scoped_error<apdustatus_error::tag> ComposeKeyName(unsigned char,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *);
	void ConstructorCommon();
	void DeauthenticateNgcTicket();
	void ResetKeyUsageCounters();
	void UpgradeFileSystem();
public:
	GidsApplication(std::shared_ptr<FileSystem>,Microsoft::WRL::ComPtr<INgcCtnrContainer> const &,_GUID const &,std::shared_ptr<GidsLogicalData> const &,bool);
	virtual ApplicationIdentifier::type ApplicationId();
	virtual AuthenticatedRoleStatus::type AuthStatus();
	virtual Response::type ExecuteCommand(ApduCommandResponse::type);
	virtual bool SupportsApplicationId(ApplicationIdentifier::type const &);
	virtual bool SupportsAttestation();
	virtual std::shared_ptr<FileSystem::DedicatedFile> GetRoot();
	virtual void NotifyDeselected();
	virtual void NotifySelected(std::shared_ptr<ChannelData>);
	virtual ~GidsApplication();
	void CreateApplication();
};

struct GidsCrtDo<DataObjectImplicit<ScardGidsModule,15>,15,1>
{
	struct type
	{
		type & operator=(type);
		type(type const &);
		~type();
	};

	static GidsCrtDo<DataObjectImplicit<ScardGidsModule,15>,15,1>::type make(SCARDGIDS_CRT *);
};

struct GidsCrtDo<DataObjectImplicit<ScardGidsModule,16>,16,2>
{
	struct type
	{
		type & operator=(type);
		~type();
	};

	static GidsCrtDo<DataObjectImplicit<ScardGidsModule,16>,16,2>::type make(SCARDGIDS_CRT *);
};

struct GidsCrtDo<DataObjectImplicit<ScardGidsModule,17>,17,3>
{
	struct type
	{
		type & operator=(type);
		~type();
	};

	static GidsCrtDo<DataObjectImplicit<ScardGidsModule,17>,17,3>::type make(SCARDGIDS_CRT *);
};

struct GidsDiscretionaryObj
{
	struct type
	{
		~type();
	};

	static std::tuple<errorlib::scoped_error<ntstatus_error::tag>,std::vector<unsigned char,wil::secure_allocator<unsigned char> > > encode(GidsDiscretionaryObj::type const &);
};

struct GidsGetDataCommandField
{
	struct receiver
	{
		~receiver();
	};

	struct type
	{
		~type();
	};

	static std::tuple<errorlib::scoped_error<ntstatus_error::tag>,GidsGetDataCommandField::type> decode(rangelib::range<unsigned char const *>);
};

struct GidsGetKeyPublicKeyReference
{
	static std::tuple<errorlib::scoped_error<ntstatus_error::tag>,GidsGetKeyPublicKeyReference::type> decode(rangelib::range<unsigned char const *>);
};

class GidsHandler
{
	long InitializeContainer(GidsContainer *,Microsoft::WRL::ComPtr<INgcCtnrContainer> const &,bool);
	static long CheckForCertificates(INgcCtnrContainer *,bool *);
	static long CreateContainerNode(INgcCtnrContainer *,std::thread *);
	static unsigned char const * const m_smartcardSW1SuccessValues;
	static void UninitializeContainer(GidsContainer *,bool);
public:
	long AcquireChannel(_GUID const *,void * *,unsigned char * *,unsigned long *);
	long AllocateRpcInterfaceTemplates(RPC_INTERFACE_TEMPLATEW * *,unsigned long *);
	long ReleaseChannel(void * *);
	long SendReceiveData(void *,unsigned char const *,unsigned long,unsigned char * *,unsigned long *);
	static GidsHandler & Instance();
	static long RpcInterfaceSecurityCallback(void *,void *);
};

class GidsLogicalData
{
	long GetCMapFile(std::vector<unsigned char,wil::secure_allocator<unsigned char> > *);
	long GetCardCacheFile(std::vector<unsigned char,wil::secure_allocator<unsigned char> > *);
	long GetCertificatesAndNgcKeyNames(std::vector<_CLMD_FILESYSTEM_ENTRY,std::allocator<_CLMD_FILESYSTEM_ENTRY> > *);
	long GetKeyCertificate(unsigned char,std::vector<unsigned char,wil::secure_allocator<unsigned char> > *);
	long GetKeyContainerTable(std::vector<unsigned char,wil::secure_allocator<unsigned char> > *);
	static long GenerateCertName(INgcCtnrContainer *,unsigned short const *,unsigned long,char *,unsigned long);
	static long GenerateShortKeyName(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,unsigned short *,unsigned long);
	static long GetKeyClassAndAlgIdFromKeyUsageAndKeySize(unsigned long,unsigned long,unsigned char *,unsigned char *);
	static std::map<std::pair<_GUID,unsigned char>,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::less<std::pair<_GUID,unsigned char> >,std::allocator<std::pair<std::pair<_GUID,unsigned char> const ,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > > m_keyMap;
	static unsigned long ReadFileGidsFileSystemTable(_SIMULATOR_PARAMS *,unsigned short,unsigned long,unsigned char * *,unsigned long *,int);
	static unsigned long WriteFileGidsFileSystemTable(_SIMULATOR_PARAMS *,unsigned short,unsigned long,unsigned char *,unsigned long,int);
	static void * AllocGidsFileSystem(unsigned __int64);
	static void FreeGidsFileSystem(void *);
public:
	GidsLogicalData(Microsoft::WRL::ComPtr<INgcCtnrContainer> const &);
	errorlib::scoped_error<apdustatus_error::tag> GetGidsLogicalDataInfoFromTags(Asn1Tag::type,DataObject::type &);
	static long GetKeyName(_GUID const *,unsigned char,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *);
};

struct GidsPutKeyCommandField
{
	struct type
	{
		~type();
	};

	static std::tuple<errorlib::scoped_error<ntstatus_error::tag>,GidsPutKeyCommandField::type,rangelib::range<unsigned char const *> > decode(rangelib::range<unsigned char const *>);
};

struct GidsTagAllocationAuthorityAid
{
	struct type
	{
		~type();
	};

	static GidsTagAllocationAuthorityAid::type make(rangelib::range<unsigned char const *>);
};

struct HandlerCallbackHelper<GidsHandler>
{
	static long AllocateRpcInterfaceTemplates(void *,RPC_INTERFACE_TEMPLATEW * *,unsigned long *);
	static long ProcessAfterCertificateEnrollment(void *,INgcCtnrContainer *);
	static long ProcessAfterContainerCreation(void *,INgcCtnrContainer *);
	static long ProcessAfterContainerLoad(void *,INgcCtnrContainer *);
	static long ProcessBeforeContainerDeletion(void *,INgcCtnrContainer *);
	static long ProcessBeforeContainerUnload(void *,INgcCtnrContainer *);
	static void FreeRpcInterfaceTemplates(void *,RPC_INTERFACE_TEMPLATEW *,unsigned long);
	static void Uninitialize(void *);
};

struct KeyReference
{
	static std::tuple<errorlib::scoped_error<ntstatus_error::tag>,KeyReference::type,rangelib::range<unsigned char const *> > decode(rangelib::range<unsigned char const *>);
};

struct KeyValueTemplate
{
	namespace detail
	{
		struct value_type
		{
			~value_type();
		};

	};

	static std::tuple<errorlib::scoped_error<ntstatus_error::tag>,optnllib::optional<KeyValueTemplate::detail::value_type>,rangelib::range<unsigned char const *> > decode(rangelib::range<unsigned char const *>);
};

struct KeyValueType
{
	static std::tuple<errorlib::scoped_error<ntstatus_error::tag>,KeyValueType::type,rangelib::range<unsigned char const *> > decode(rangelib::range<unsigned char const *>);
};

namespace Microsoft
{
	namespace WRL
	{
		struct ComPtr<INgcCtnrContainer>
		{
			~ComPtr<INgcCtnrContainer>();
		};

		namespace Wrappers
		{
			namespace Details
			{
				struct SyncLockCriticalSection
				{
					~SyncLockCriticalSection();
				};

				struct SyncLockExclusive
				{
					~SyncLockExclusive();
				};

			};

			class HandleT<ScDeviceEnum::RpcBindingHandleTraits>
			{
			protected:
				virtual bool InternalClose();
			public:
				~HandleT<ScDeviceEnum::RpcBindingHandleTraits>();
			};

			class HandleT<SecurityDescriptorTraits>
			{
			protected:
				virtual bool InternalClose();
			};

		};

	};

};

class NTASN1Allocator
{
	static void * Alloc(unsigned __int64);
	static void Free(void *);
};

namespace NgcPolicy
{
	struct NgcPolicy
	{
		long Initialize(std::vector<unsigned char,std::allocator<unsigned char> > const &);
	};

};

namespace NgcUtils
{
	struct CoInitializer
	{
		~CoInitializer();
	};

	namespace NgcContainerKeyName
	{
		long ParseKeyNameString(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *);
	};

	struct RpcCallerImpersonator
	{
		RpcCallerImpersonator(void * const);
		~RpcCallerImpersonator();
	};

	long ConvertMultiStringToStringVector<std::allocator<unsigned short> >(unsigned short const *,unsigned long,std::vector<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::allocator<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > *);
	long GetStringFromGuid(_GUID const &,unsigned short *,unsigned long);
	long ValidateStringPropertyData(unsigned char const *,unsigned long);
};

namespace PinPolicy
{
	struct PinPolicyRules
	{
		long Initialize(std::vector<unsigned char,std::allocator<unsigned char> > const &);
		long ValidateRules();
		static long ConvertFromSmartCardPinCharacterPolicyOption(Windows::Devices::SmartCards::SmartCardPinCharacterPolicyOption,_PIN_CHARACTER_POLICY_OPTION *);
	};

};

struct PinStatus<Asn1Tag::detail::StaticTag2<127,113> >
{
	static std::tuple<errorlib::scoped_error<ntstatus_error::tag>,std::vector<unsigned char,wil::secure_allocator<unsigned char> > > encode(PinStatus<Asn1Tag::detail::StaticTag2<127,113> >::type const &);
};

struct PinStatus<Asn1Tag::detail::StaticTag2<127,114> >
{
	static std::tuple<errorlib::scoped_error<ntstatus_error::tag>,std::vector<unsigned char,wil::secure_allocator<unsigned char> > > encode(PinStatus<Asn1Tag::detail::StaticTag2<127,114> >::type const &);
};

struct PinStatus<Asn1Tag::detail::StaticTag2<127,115> >
{
	static std::tuple<errorlib::scoped_error<ntstatus_error::tag>,std::vector<unsigned char,wil::secure_allocator<unsigned char> > > encode(PinStatus<Asn1Tag::detail::StaticTag2<127,115> >::type const &);
};

struct Response
{
	struct type
	{
		~type();
	};

	static Response::type make(StatusField::type,rangelib::range<unsigned char const *>);
	static Response::type make(StatusField::type,unsigned char,rangelib::range<unsigned char const *>);
	static std::vector<unsigned char,wil::secure_allocator<unsigned char> > make(Response::type const &);
};

struct SafeIntException
{
	SafeIntException(SafeIntError);
};

namespace SafeIntInternal
{
	struct SafeIntExceptionHandler<SafeIntException>
	{
		static void SafeIntOnOverflow();
	};

};

struct SecEnvControlReference
{
	struct type
	{
		type & operator=(type);
		~type();
	};

	static std::tuple<errorlib::scoped_error<ntstatus_error::tag>,SecEnvControlReference::type> decode(CryptoReferenceTag::type,rangelib::range<unsigned char const *>);
};

struct SecurityAttribute
{
	struct type
	{
		~type();
	};

	static SecurityAttribute::type make(rangelib::range<unsigned char const *>);
	static std::vector<unsigned char,wil::secure_allocator<unsigned char> > make(SecurityAttribute::type const &);
};

struct SecurityCondition
{
	static unsigned char make(SecurityCondition::type const &);
};

struct SecurityEnvironment
{
	void Clear();
};

struct SecurityRule
{
	struct type
	{
		type(type const &);
		~type();
	};

	static SecurityRule::type make_ElementaryFileRule(SecurityCondition::type,SecurityCondition::type);
	static std::tuple<bool,SecurityRule::type,rangelib::range<unsigned char const *> > make(rangelib::range<unsigned char const *>);
	static std::vector<unsigned char,wil::secure_allocator<unsigned char> > make(SecurityRule::type const &);
};

struct SymmetricKeyCheck
{
	static std::tuple<errorlib::scoped_error<ntstatus_error::tag>,SymmetricKeyCheck::type,rangelib::range<unsigned char const *> > decode(rangelib::range<unsigned char const *>);
};

struct Transaction
{
	TransactionResult::type Commit();
};

struct bits
{
	static bool get<unsigned char>(unsigned __int64,unsigned char);
	static unsigned char get<unsigned char>(unsigned __int64,unsigned __int64,unsigned char);
};

namespace detail
{
	struct CommandParseInfo
	{
		static std::tuple<CommandParseInfo::type,rangelib::range<unsigned char const *>,unsigned __int64> make(rangelib::range<unsigned char const *> const &);
	};

};

namespace errcntrctlib
{
	namespace detail
	{
		struct UnwinderErrorContractFunctor
		{
			void operator()();
		};

	};

};

namespace errorlib
{
	struct error_exception
	{
		error_exception(error_exception const &);
	};

	struct scoped_error<apdustatus_error::tag>
	{
		scoped_error<apdustatus_error::tag> & initiate<StatusField::type const &>(StatusField::type const &);
		scoped_error<apdustatus_error::tag> & operator=(scoped_error<apdustatus_error::tag>);
		scoped_error<apdustatus_error::tag> & propagate<StatusField::type &>(StatusField::type &);
		scoped_error<apdustatus_error::tag>();
		void throwfailed();
		~scoped_error<apdustatus_error::tag>();
	};

	struct scoped_error<hresult_error::tag>
	{
		scoped_error<hresult_error::tag> & operator=(scoped_error<hresult_error::tag>);
		~scoped_error<hresult_error::tag>();
	};

	class scoped_error<ntstatus_error::tag>
	{
		void report(ErrorSource::type);
	public:
		scoped_error<ntstatus_error::tag> & operator=(scoped_error<ntstatus_error::tag>);
		~scoped_error<ntstatus_error::tag>();
	};

	class scoped_error<winerror_error::tag>
	{
		void report(ErrorSource::type);
	public:
		scoped_error<winerror_error::tag> & operator=(scoped_error<winerror_error::tag>);
		void throwfailed();
		~scoped_error<winerror_error::tag>();
	};

	struct specific_error_exception<apdustatus_error::tag>
	{
		specific_error_exception<apdustatus_error::tag>(scoped_error<apdustatus_error::tag> const &);
		specific_error_exception<apdustatus_error::tag>(specific_error_exception<apdustatus_error::tag> const &);
		virtual ~specific_error_exception<apdustatus_error::tag>();
	};

	struct specific_error_exception<winerror_error::tag>
	{
		specific_error_exception<winerror_error::tag>(scoped_error<winerror_error::tag> const &);
		specific_error_exception<winerror_error::tag>(specific_error_exception<winerror_error::tag> const &);
		virtual ~specific_error_exception<winerror_error::tag>();
	};

	void error_initiated<scoped_error<apdustatus_error::tag> >(errorlib::scoped_error<apdustatus_error::tag> const &,apdustatus_error::tag const &);
	void error_initiated<scoped_error<hresult_error::tag> >(errorlib::scoped_error<hresult_error::tag> const &,hresult_error::tag const &);
	void error_initiated<scoped_error<ntstatus_error::tag> >(errorlib::scoped_error<ntstatus_error::tag> const &,ntstatus_error::tag const &);
	void error_initiated<scoped_error<winerror_error::tag> >(errorlib::scoped_error<winerror_error::tag> const &,winerror_error::tag const &);
	void error_propagated<scoped_error<apdustatus_error::tag> >(errorlib::scoped_error<apdustatus_error::tag> const &,apdustatus_error::tag const &);
	void error_propagated<scoped_error<ntstatus_error::tag> >(errorlib::scoped_error<ntstatus_error::tag> const &,ntstatus_error::tag const &);
	void error_propagated<scoped_error<winerror_error::tag> >(errorlib::scoped_error<winerror_error::tag> const &,winerror_error::tag const &);
	void error_received<scoped_error<hresult_error::tag> >(errorlib::scoped_error<hresult_error::tag> const &,hresult_error::tag const &);
	void error_received<scoped_error<ntstatus_error::tag> >(errorlib::scoped_error<ntstatus_error::tag> const &,ntstatus_error::tag const &);
	void error_received<scoped_error<winerror_error::tag> >(errorlib::scoped_error<winerror_error::tag> const &,winerror_error::tag const &);
	void initiate<apdustatus_error::tag,StatusField::type const &>(errorlib::scoped_error<apdustatus_error::tag> *,StatusField::type const &);
};

struct hresult_exception
{
	hresult_exception(hresult_exception const &);
	hresult_exception(long);
	virtual ~hresult_exception();
};

namespace metalib
{
	void FailFast(unsigned long);
};

namespace oneoflib
{
	struct one_of<typveclib::typevec<AuthMechanismIdentifier::type,SymmetricMechanismIdentifier::type,AsymmetricMechanismIdentifier::type,SignatureMechanismIdentifier::type,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil>,typbldlib::metavalue<0>,typbldlib::metavalue<4>,typbldlib::metavalue<4> >
	{
		void send<one_of<typveclib::typevec<AuthMechanismIdentifier::type,SymmetricMechanismIdentifier::type,AsymmetricMechanismIdentifier::type,SignatureMechanismIdentifier::type,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil>,typbldlib::metavalue<0>,typbldlib::metavalue<4>,typbldlib::metavalue<4> >::other_move_receiver &>(one_of<typveclib::typevec<AuthMechanismIdentifier::type,SymmetricMechanismIdentifier::type,AsymmetricMechanismIdentifier::type,SignatureMechanismIdentifier::type,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil>,typbldlib::metavalue<0>,typbldlib::metavalue<4>,typbldlib::metavalue<4> >::other_move_receiver &);
	};

	class one_of<typveclib::typevec<GidsCrtDo<DataObjectImplicit<ScardGidsModule,15>,15,1>::type,GidsCrtDo<DataObjectImplicit<ScardGidsModule,17>,17,3>::type,GidsCrtDo<DataObjectImplicit<ScardGidsModule,16>,16,2>::type,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil>,typbldlib::metavalue<0>,typbldlib::metavalue<3>,typbldlib::metavalue<1> >
	{
	protected:
		void re_send<one_of<typveclib::typevec<GidsCrtDo<DataObjectImplicit<ScardGidsModule,15>,15,1>::type,GidsCrtDo<DataObjectImplicit<ScardGidsModule,17>,17,3>::type,GidsCrtDo<DataObjectImplicit<ScardGidsModule,16>,16,2>::type,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil>,typbldlib::metavalue<0>,typbldlib::metavalue<3>,typbldlib::metavalue<3> >::other_reset_receiver &>(one_of<typveclib::typevec<GidsCrtDo<DataObjectImplicit<ScardGidsModule,15>,15,1>::type,GidsCrtDo<DataObjectImplicit<ScardGidsModule,17>,17,3>::type,GidsCrtDo<DataObjectImplicit<ScardGidsModule,16>,16,2>::type,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil>,typbldlib::metavalue<0>,typbldlib::metavalue<3>,typbldlib::metavalue<3> >::other_reset_receiver &);
		void re_swap(one_of<typveclib::typevec<GidsCrtDo<DataObjectImplicit<ScardGidsModule,15>,15,1>::type,GidsCrtDo<DataObjectImplicit<ScardGidsModule,17>,17,3>::type,GidsCrtDo<DataObjectImplicit<ScardGidsModule,16>,16,2>::type,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil>,typbldlib::metavalue<0>,typbldlib::metavalue<3>,typbldlib::metavalue<1> > &);
	};

	struct one_of<typveclib::typevec<GidsCrtDo<DataObjectImplicit<ScardGidsModule,15>,15,1>::type,GidsCrtDo<DataObjectImplicit<ScardGidsModule,17>,17,3>::type,GidsCrtDo<DataObjectImplicit<ScardGidsModule,16>,16,2>::type,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil>,typbldlib::metavalue<0>,typbldlib::metavalue<3>,typbldlib::metavalue<3> >
	{
		void reset();
		void send<one_of<typveclib::typevec<GidsCrtDo<DataObjectImplicit<ScardGidsModule,15>,15,1>::type,GidsCrtDo<DataObjectImplicit<ScardGidsModule,17>,17,3>::type,GidsCrtDo<DataObjectImplicit<ScardGidsModule,16>,16,2>::type,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil>,typbldlib::metavalue<0>,typbldlib::metavalue<3>,typbldlib::metavalue<3> >::other_move_receiver &>(one_of<typveclib::typevec<GidsCrtDo<DataObjectImplicit<ScardGidsModule,15>,15,1>::type,GidsCrtDo<DataObjectImplicit<ScardGidsModule,17>,17,3>::type,GidsCrtDo<DataObjectImplicit<ScardGidsModule,16>,16,2>::type,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil>,typbldlib::metavalue<0>,typbldlib::metavalue<3>,typbldlib::metavalue<3> >::other_move_receiver &);
	};

	struct one_of<typveclib::typevec<std::vector<unsigned char,wil::secure_allocator<unsigned char> >,GidsGetKeyPublicKeyReference::type,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil>,typbldlib::metavalue<0>,typbldlib::metavalue<2>,typbldlib::metavalue<2> >
	{
		void send<one_of<typveclib::typevec<std::vector<unsigned char,wil::secure_allocator<unsigned char> >,GidsGetKeyPublicKeyReference::type,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil>,typbldlib::metavalue<0>,typbldlib::metavalue<2>,typbldlib::metavalue<2> >::other_move_receiver &>(one_of<typveclib::typevec<std::vector<unsigned char,wil::secure_allocator<unsigned char> >,GidsGetKeyPublicKeyReference::type,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil,typbldlib::nil>,typbldlib::metavalue<0>,typbldlib::metavalue<2>,typbldlib::metavalue<2> >::other_move_receiver &);
	};

};

namespace optnllib
{
	struct optional<Asn1Vector<Crt>::type>
	{
		optional<Asn1Vector<Crt>::type> & operator=(optional<Asn1Vector<Crt>::type>);
	};

	struct optional<CryptoMechanismReference::type>
	{
		optional<CryptoMechanismReference::type> & operator=(optional<CryptoMechanismReference::type>);
	};

	struct optional<KeyValueTemplate::detail::value_type>
	{
		optional<KeyValueTemplate::detail::value_type> & operator=(optional<KeyValueTemplate::detail::value_type>);
	};

	struct optional<std::vector<DataObjectImplicit<ScardGidsModule,3>::type,std::allocator<DataObjectImplicit<ScardGidsModule,3>::type> > >
	{
		optional<std::vector<DataObjectImplicit<ScardGidsModule,3>::type,std::allocator<DataObjectImplicit<ScardGidsModule,3>::type> > > & operator=(optional<std::vector<DataObjectImplicit<ScardGidsModule,3>::type,std::allocator<DataObjectImplicit<ScardGidsModule,3>::type> > >);
	};

	struct optional<unsigned long>
	{
		~optional<unsigned long>();
	};

};

namespace rangelib
{
	rangelib::range<unsigned char const *> make_craw_range<_CRYPTOAPI_BLOB>(_CRYPTOAPI_BLOB const &);
	rangelib::range<unsigned char const *> make_craw_range<std::vector<unsigned char,wil::secure_allocator<unsigned char> > >(std::vector<unsigned char,wil::secure_allocator<unsigned char> > const &);
	std::vector<unsigned char,std::allocator<unsigned char> > copy_range<std::vector<unsigned char,std::allocator<unsigned char> >,_CRYPTOAPI_BLOB &>(_CRYPTOAPI_BLOB &);
	std::vector<unsigned char,wil::secure_allocator<unsigned char> > copy_range<std::vector<unsigned char,wil::secure_allocator<unsigned char> >,_CRYPTOAPI_BLOB &>(_CRYPTOAPI_BLOB &);
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

	struct _Func_class<void,GidsGetKeyPublicKeyReference::type &>
	{
		~_Func_class<void,GidsGetKeyPublicKeyReference::type &>();
	};

	struct _Func_class<void,vector<unsigned char,wil::secure_allocator<unsigned char> > &>
	{
		~_Func_class<void,vector<unsigned char,wil::secure_allocator<unsigned char> > &>();
	};

	class _Func_impl<_Binder<_Unforced,void (&)(GidsCrtDo<DataObjectImplicit<ScardGidsModule,15>,15,1>::type const &,unsigned char,bool *),_Ph<1> const &,unsigned char const &,bool *>,allocator<int>,void,GidsCrtDo<DataObjectImplicit<ScardGidsModule,15>,15,1>::type const &>
	{
		virtual _Func_base<void,GidsCrtDo<DataObjectImplicit<ScardGidsModule,15>,15,1>::type const &> * _Copy(void *);
		virtual _Func_base<void,GidsCrtDo<DataObjectImplicit<ScardGidsModule,15>,15,1>::type const &> * _Move(void *);
		virtual type_info const & _Target_type();
		virtual void _Delete_this(bool);
		virtual void _Do_call(GidsCrtDo<DataObjectImplicit<ScardGidsModule,15>,15,1>::type const &);
		virtual void const * _Get();
	};

	class _Func_impl<_Binder<_Unforced,void (&)(GidsCrtDo<DataObjectImplicit<ScardGidsModule,16>,16,2>::type const &,unsigned char,bool *),_Ph<1> const &,unsigned char const &,bool *>,allocator<int>,void,GidsCrtDo<DataObjectImplicit<ScardGidsModule,16>,16,2>::type const &>
	{
		virtual _Func_base<void,GidsCrtDo<DataObjectImplicit<ScardGidsModule,16>,16,2>::type const &> * _Copy(void *);
		virtual _Func_base<void,GidsCrtDo<DataObjectImplicit<ScardGidsModule,16>,16,2>::type const &> * _Move(void *);
		virtual type_info const & _Target_type();
		virtual void _Delete_this(bool);
		virtual void _Do_call(GidsCrtDo<DataObjectImplicit<ScardGidsModule,16>,16,2>::type const &);
		virtual void const * _Get();
	};

	class _Func_impl<_Binder<_Unforced,void (&)(GidsCrtDo<DataObjectImplicit<ScardGidsModule,17>,17,3>::type const &,unsigned char,bool *),_Ph<1> const &,unsigned char const &,bool *>,allocator<int>,void,GidsCrtDo<DataObjectImplicit<ScardGidsModule,17>,17,3>::type const &>
	{
		virtual _Func_base<void,GidsCrtDo<DataObjectImplicit<ScardGidsModule,17>,17,3>::type const &> * _Copy(void *);
		virtual _Func_base<void,GidsCrtDo<DataObjectImplicit<ScardGidsModule,17>,17,3>::type const &> * _Move(void *);
		virtual type_info const & _Target_type();
		virtual void _Delete_this(bool);
		virtual void _Do_call(GidsCrtDo<DataObjectImplicit<ScardGidsModule,17>,17,3>::type const &);
		virtual void const * _Get();
	};

	class _Func_impl<_Binder<_Unforced,void (&)(Response::type *,Channel *,CommandHeader::type const &,ElementaryFileIdentifier::type,GidsGetKeyPublicKeyReference::type const &),Response::type *,Channel * &,reference_wrapper<CommandHeader::type const >,ElementaryFileIdentifier::type &,_Ph<1> const &>,allocator<int>,void,GidsGetKeyPublicKeyReference::type &>
	{
		_Func_base<void,GidsGetKeyPublicKeyReference::type &> * _Clone<void>(void *,integral_constant<bool,1>);
		virtual _Func_base<void,GidsGetKeyPublicKeyReference::type &> * _Copy(void *);
		virtual _Func_base<void,GidsGetKeyPublicKeyReference::type &> * _Move(void *);
		virtual type_info const & _Target_type();
		virtual void _Delete_this(bool);
		virtual void _Do_call(GidsGetKeyPublicKeyReference::type &);
		virtual void const * _Get();
	};

	class _Func_impl<_Binder<_Unforced,void (&)(Response::type *,Channel *,CommandHeader::type const &,ElementaryFileIdentifier::type,vector<unsigned char,wil::secure_allocator<unsigned char> > const &),Response::type *,Channel * &,reference_wrapper<CommandHeader::type const >,ElementaryFileIdentifier::type &,_Ph<1> const &>,allocator<int>,void,vector<unsigned char,wil::secure_allocator<unsigned char> > &>
	{
		_Func_base<void,vector<unsigned char,wil::secure_allocator<unsigned char> > &> * _Clone<void>(void *,integral_constant<bool,1>);
		virtual _Func_base<void,vector<unsigned char,wil::secure_allocator<unsigned char> > &> * _Copy(void *);
		virtual _Func_base<void,vector<unsigned char,wil::secure_allocator<unsigned char> > &> * _Move(void *);
		virtual type_info const & _Target_type();
		virtual void _Delete_this(bool);
		virtual void _Do_call(vector<unsigned char,wil::secure_allocator<unsigned char> > &);
		virtual void const * _Get();
	};

	class _Func_impl<_Binder<_Unforced,void (&)(Response::type *,Channel::PreCommand *,CommandHeader::type const &,ElementaryFileIdentifier::type,GidsGetKeyPublicKeyReference::type const &),Response::type *,Channel::PreCommand * &,reference_wrapper<CommandHeader::type const >,ElementaryFileIdentifier::type &,_Ph<1> const &>,allocator<int>,void,GidsGetKeyPublicKeyReference::type &>
	{
		_Func_base<void,GidsGetKeyPublicKeyReference::type &> * _Clone<void>(void *,integral_constant<bool,1>);
		virtual _Func_base<void,GidsGetKeyPublicKeyReference::type &> * _Copy(void *);
		virtual _Func_base<void,GidsGetKeyPublicKeyReference::type &> * _Move(void *);
		virtual type_info const & _Target_type();
		virtual void _Delete_this(bool);
		virtual void _Do_call(GidsGetKeyPublicKeyReference::type &);
		virtual void const * _Get();
	};

	class _Func_impl<_Binder<_Unforced,void (&)(Response::type *,Channel::PreCommand *,CommandHeader::type const &,ElementaryFileIdentifier::type,vector<unsigned char,wil::secure_allocator<unsigned char> > const &),Response::type *,Channel::PreCommand * &,reference_wrapper<CommandHeader::type const >,ElementaryFileIdentifier::type &,_Ph<1> const &>,allocator<int>,void,vector<unsigned char,wil::secure_allocator<unsigned char> > &>
	{
		_Func_base<void,vector<unsigned char,wil::secure_allocator<unsigned char> > &> * _Clone<void>(void *,integral_constant<bool,1>);
		virtual _Func_base<void,vector<unsigned char,wil::secure_allocator<unsigned char> > &> * _Copy(void *);
		virtual _Func_base<void,vector<unsigned char,wil::secure_allocator<unsigned char> > &> * _Move(void *);
		virtual type_info const & _Target_type();
		virtual void _Delete_this(bool);
		virtual void _Do_call(vector<unsigned char,wil::secure_allocator<unsigned char> > &);
		virtual void const * _Get();
	};

	class _Func_impl<_Binder<_Unforced,void (&)(Response::type *,GidsApplication *,CommandHeader::type const &,ElementaryFileIdentifier::type,GidsGetKeyPublicKeyReference::type const &),Response::type *,GidsApplication * &,reference_wrapper<CommandHeader::type const >,ElementaryFileIdentifier::type &,_Ph<1> const &>,allocator<int>,void,GidsGetKeyPublicKeyReference::type &>
	{
		_Func_base<void,GidsGetKeyPublicKeyReference::type &> * _Clone<void>(void *,integral_constant<bool,1>);
		virtual _Func_base<void,GidsGetKeyPublicKeyReference::type &> * _Copy(void *);
		virtual _Func_base<void,GidsGetKeyPublicKeyReference::type &> * _Move(void *);
		virtual type_info const & _Target_type();
		virtual void _Delete_this(bool);
		virtual void _Do_call(GidsGetKeyPublicKeyReference::type &);
		virtual void const * _Get();
	};

	class _Func_impl<_Binder<_Unforced,void (&)(Response::type *,GidsApplication *,CommandHeader::type const &,ElementaryFileIdentifier::type,vector<unsigned char,wil::secure_allocator<unsigned char> > const &),Response::type *,GidsApplication * &,reference_wrapper<CommandHeader::type const >,ElementaryFileIdentifier::type &,_Ph<1> const &>,allocator<int>,void,vector<unsigned char,wil::secure_allocator<unsigned char> > &>
	{
		_Func_base<void,vector<unsigned char,wil::secure_allocator<unsigned char> > &> * _Clone<void>(void *,integral_constant<bool,1>);
		virtual _Func_base<void,vector<unsigned char,wil::secure_allocator<unsigned char> > &> * _Copy(void *);
		virtual _Func_base<void,vector<unsigned char,wil::secure_allocator<unsigned char> > &> * _Move(void *);
		virtual type_info const & _Target_type();
		virtual void _Delete_this(bool);
		virtual void _Do_call(vector<unsigned char,wil::secure_allocator<unsigned char> > &);
		virtual void const * _Get();
	};

	class _Func_impl<_Binder<_Unforced,void (&)(tuple<errorlib::scoped_error<ntstatus_error::tag>,vector<unsigned char,wil::secure_allocator<unsigned char> > > *,GidsCrtDo<DataObjectImplicit<ScardGidsModule,15>,15,1>::type const &),tuple<errorlib::scoped_error<ntstatus_error::tag>,vector<unsigned char,wil::secure_allocator<unsigned char> > > *,_Ph<1> const &>,allocator<int>,void,GidsCrtDo<DataObjectImplicit<ScardGidsModule,15>,15,1>::type const &>
	{
		virtual _Func_base<void,GidsCrtDo<DataObjectImplicit<ScardGidsModule,15>,15,1>::type const &> * _Copy(void *);
		virtual _Func_base<void,GidsCrtDo<DataObjectImplicit<ScardGidsModule,15>,15,1>::type const &> * _Move(void *);
		virtual type_info const & _Target_type();
		virtual void _Delete_this(bool);
		virtual void _Do_call(GidsCrtDo<DataObjectImplicit<ScardGidsModule,15>,15,1>::type const &);
		virtual void const * _Get();
	};

	class _Func_impl<_Binder<_Unforced,void (&)(tuple<errorlib::scoped_error<ntstatus_error::tag>,vector<unsigned char,wil::secure_allocator<unsigned char> > > *,GidsCrtDo<DataObjectImplicit<ScardGidsModule,16>,16,2>::type const &),tuple<errorlib::scoped_error<ntstatus_error::tag>,vector<unsigned char,wil::secure_allocator<unsigned char> > > *,_Ph<1> const &>,allocator<int>,void,GidsCrtDo<DataObjectImplicit<ScardGidsModule,16>,16,2>::type const &>
	{
		virtual _Func_base<void,GidsCrtDo<DataObjectImplicit<ScardGidsModule,16>,16,2>::type const &> * _Copy(void *);
		virtual _Func_base<void,GidsCrtDo<DataObjectImplicit<ScardGidsModule,16>,16,2>::type const &> * _Move(void *);
		virtual type_info const & _Target_type();
		virtual void _Delete_this(bool);
		virtual void _Do_call(GidsCrtDo<DataObjectImplicit<ScardGidsModule,16>,16,2>::type const &);
		virtual void const * _Get();
	};

	class _Func_impl<_Binder<_Unforced,void (&)(tuple<errorlib::scoped_error<ntstatus_error::tag>,vector<unsigned char,wil::secure_allocator<unsigned char> > > *,GidsCrtDo<DataObjectImplicit<ScardGidsModule,17>,17,3>::type const &),tuple<errorlib::scoped_error<ntstatus_error::tag>,vector<unsigned char,wil::secure_allocator<unsigned char> > > *,_Ph<1> const &>,allocator<int>,void,GidsCrtDo<DataObjectImplicit<ScardGidsModule,17>,17,3>::type const &>
	{
		virtual _Func_base<void,GidsCrtDo<DataObjectImplicit<ScardGidsModule,17>,17,3>::type const &> * _Copy(void *);
		virtual _Func_base<void,GidsCrtDo<DataObjectImplicit<ScardGidsModule,17>,17,3>::type const &> * _Move(void *);
		virtual type_info const & _Target_type();
		virtual void _Delete_this(bool);
		virtual void _Do_call(GidsCrtDo<DataObjectImplicit<ScardGidsModule,17>,17,3>::type const &);
		virtual void const * _Get();
	};

	class _Func_impl<_Binder<_Unforced,void (&)(unsigned char *,AsymmetricMechanismIdentifier::type const &),unsigned char *,_Ph<1> const &>,allocator<int>,void,AsymmetricMechanismIdentifier::type const &>
	{
		virtual _Func_base<void,AsymmetricMechanismIdentifier::type const &> * _Copy(void *);
		virtual _Func_base<void,AsymmetricMechanismIdentifier::type const &> * _Move(void *);
		virtual type_info const & _Target_type();
		virtual void _Delete_this(bool);
		virtual void _Do_call(AsymmetricMechanismIdentifier::type const &);
		virtual void const * _Get();
	};

	class _Func_impl<_Binder<_Unforced,void (&)(unsigned char *,AuthMechanismIdentifier::type const &),unsigned char *,_Ph<1> const &>,allocator<int>,void,AuthMechanismIdentifier::type const &>
	{
		virtual _Func_base<void,AuthMechanismIdentifier::type const &> * _Copy(void *);
		virtual _Func_base<void,AuthMechanismIdentifier::type const &> * _Move(void *);
		virtual type_info const & _Target_type();
		virtual void _Delete_this(bool);
		virtual void _Do_call(AuthMechanismIdentifier::type const &);
		virtual void const * _Get();
	};

	class _Func_impl<_Binder<_Unforced,void (&)(unsigned char *,SignatureMechanismIdentifier::type const &),unsigned char *,_Ph<1> const &>,allocator<int>,void,SignatureMechanismIdentifier::type const &>
	{
		virtual _Func_base<void,SignatureMechanismIdentifier::type const &> * _Copy(void *);
		virtual _Func_base<void,SignatureMechanismIdentifier::type const &> * _Move(void *);
		virtual type_info const & _Target_type();
		virtual void _Delete_this(bool);
		virtual void _Do_call(SignatureMechanismIdentifier::type const &);
		virtual void const * _Get();
	};

	class _Func_impl<_Binder<_Unforced,void (&)(unsigned char *,SymmetricMechanismIdentifier::type const &),unsigned char *,_Ph<1> const &>,allocator<int>,void,SymmetricMechanismIdentifier::type const &>
	{
		virtual _Func_base<void,SymmetricMechanismIdentifier::type const &> * _Copy(void *);
		virtual _Func_base<void,SymmetricMechanismIdentifier::type const &> * _Move(void *);
		virtual type_info const & _Target_type();
		virtual void _Delete_this(bool);
		virtual void _Do_call(SymmetricMechanismIdentifier::type const &);
		virtual void const * _Get();
	};

	class _Pad
	{
		static unsigned int _Call_func(void *);
	};

	struct _Ptr_base<ChannelData>
	{
		void _Reset0(ChannelData *,_Ref_count_base *);
	};

	struct _Ref_count_base
	{
		virtual void * _Get_deleter(type_info const &);
		virtual ~_Ref_count_base();
	};

	class _Ref_count_obj<Channel>
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count_obj<ChannelData>
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count_obj<FileSystem::DedicatedFile>
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count_obj<FileSystem::ElementaryFile>
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count_obj<FileSystem>
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count_obj<GidsApplication>
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count_obj<GidsContainer>
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count_obj<GidsLogicalData>
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count_obj<SecurityEnvironment>
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count_obj<Transaction>
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count_obj<vector<shared_ptr<CardApplication>,allocator<shared_ptr<CardApplication> > > >
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	struct _String_val<_Simple_types<unsigned short> >
	{
		static void _Xran();
	};

	class _Tree<_Tmap_traits<Asn1Tag::type,DataObject::type,less<Asn1Tag::type>,allocator<pair<Asn1Tag::type const ,DataObject::type> >,0> >
	{
	protected:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<Asn1Tag::type const ,DataObject::type> > > > _Insert_at<pair<Asn1Tag::type const ,DataObject::type> &,_Tree_node<pair<Asn1Tag::type const ,DataObject::type>,void *> *>(bool,_Tree_node<pair<Asn1Tag::type const ,DataObject::type>,void *> *,pair<Asn1Tag::type const ,DataObject::type> &,_Tree_node<pair<Asn1Tag::type const ,DataObject::type>,void *> *);
		pair<_Tree_iterator<_Tree_val<_Tree_simple_types<pair<Asn1Tag::type const ,DataObject::type> > > >,bool> _Insert_nohint<pair<Asn1Tag::type const ,DataObject::type> &,_Tree_node<pair<Asn1Tag::type const ,DataObject::type>,void *> *>(bool,pair<Asn1Tag::type const ,DataObject::type> &,_Tree_node<pair<Asn1Tag::type const ,DataObject::type>,void *> *);
		void _Destroy_if_not_nil(_Tree_node<pair<Asn1Tag::type const ,DataObject::type>,void *> *);
		void _Erase(_Tree_node<pair<Asn1Tag::type const ,DataObject::type>,void *> *);
	public:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<Asn1Tag::type const ,DataObject::type> > > > erase(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<Asn1Tag::type const ,DataObject::type> > > >);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<Asn1Tag::type const ,DataObject::type> > > > erase(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<Asn1Tag::type const ,DataObject::type> > > >,_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<Asn1Tag::type const ,DataObject::type> > > >);
	};

	class _Tree<_Tmap_traits<ElementaryFileIdentifier::type,shared_ptr<FileSystem::ElementaryFile>,less<ElementaryFileIdentifier::type>,allocator<pair<ElementaryFileIdentifier::type const ,shared_ptr<FileSystem::ElementaryFile> > >,0> >
	{
	protected:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<ElementaryFileIdentifier::type const ,shared_ptr<FileSystem::ElementaryFile> > > > > _Insert_at<pair<ElementaryFileIdentifier::type const ,shared_ptr<FileSystem::ElementaryFile> > &,_Tree_node<pair<ElementaryFileIdentifier::type const ,shared_ptr<FileSystem::ElementaryFile> >,void *> *>(bool,_Tree_node<pair<ElementaryFileIdentifier::type const ,shared_ptr<FileSystem::ElementaryFile> >,void *> *,pair<ElementaryFileIdentifier::type const ,shared_ptr<FileSystem::ElementaryFile> > &,_Tree_node<pair<ElementaryFileIdentifier::type const ,shared_ptr<FileSystem::ElementaryFile> >,void *> *);
		pair<_Tree_iterator<_Tree_val<_Tree_simple_types<pair<ElementaryFileIdentifier::type const ,shared_ptr<FileSystem::ElementaryFile> > > > >,bool> _Insert_nohint<pair<ElementaryFileIdentifier::type const ,shared_ptr<FileSystem::ElementaryFile> > &,_Tree_node<pair<ElementaryFileIdentifier::type const ,shared_ptr<FileSystem::ElementaryFile> >,void *> *>(bool,pair<ElementaryFileIdentifier::type const ,shared_ptr<FileSystem::ElementaryFile> > &,_Tree_node<pair<ElementaryFileIdentifier::type const ,shared_ptr<FileSystem::ElementaryFile> >,void *> *);
		void _Destroy_if_not_nil(_Tree_node<pair<ElementaryFileIdentifier::type const ,shared_ptr<FileSystem::ElementaryFile> >,void *> *);
		void _Erase(_Tree_node<pair<ElementaryFileIdentifier::type const ,shared_ptr<FileSystem::ElementaryFile> >,void *> *);
	public:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<ElementaryFileIdentifier::type const ,shared_ptr<FileSystem::ElementaryFile> > > > > erase(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<ElementaryFileIdentifier::type const ,shared_ptr<FileSystem::ElementaryFile> > > > >);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<ElementaryFileIdentifier::type const ,shared_ptr<FileSystem::ElementaryFile> > > > > erase(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<ElementaryFileIdentifier::type const ,shared_ptr<FileSystem::ElementaryFile> > > > >,_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<ElementaryFileIdentifier::type const ,shared_ptr<FileSystem::ElementaryFile> > > > >);
		unsigned __int64 erase(ElementaryFileIdentifier::type const &);
	};

	class _Tree<_Tmap_traits<_GUID,shared_ptr<GidsContainer>,less<_GUID>,allocator<pair<_GUID const ,shared_ptr<GidsContainer> > >,0> >
	{
	protected:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,shared_ptr<GidsContainer> > > > > _Insert_at<pair<_GUID const ,shared_ptr<GidsContainer> > &,_Tree_node<pair<_GUID const ,shared_ptr<GidsContainer> >,void *> *>(bool,_Tree_node<pair<_GUID const ,shared_ptr<GidsContainer> >,void *> *,pair<_GUID const ,shared_ptr<GidsContainer> > &,_Tree_node<pair<_GUID const ,shared_ptr<GidsContainer> >,void *> *);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,shared_ptr<GidsContainer> > > > > _Insert_hint<pair<_GUID const ,shared_ptr<GidsContainer> > &,_Tree_node<pair<_GUID const ,shared_ptr<GidsContainer> >,void *> *>(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,shared_ptr<GidsContainer> > > > >,pair<_GUID const ,shared_ptr<GidsContainer> > &,_Tree_node<pair<_GUID const ,shared_ptr<GidsContainer> >,void *> *);
		pair<_Tree_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,shared_ptr<GidsContainer> > > > >,bool> _Insert_nohint<pair<_GUID const ,shared_ptr<GidsContainer> > &,_Tree_node<pair<_GUID const ,shared_ptr<GidsContainer> >,void *> *>(bool,pair<_GUID const ,shared_ptr<GidsContainer> > &,_Tree_node<pair<_GUID const ,shared_ptr<GidsContainer> >,void *> *);
		void _Destroy_if_not_nil(_Tree_node<pair<_GUID const ,shared_ptr<GidsContainer> >,void *> *);
		void _Erase(_Tree_node<pair<_GUID const ,shared_ptr<GidsContainer> >,void *> *);
	public:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,shared_ptr<GidsContainer> > > > > erase(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,shared_ptr<GidsContainer> > > > >);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,shared_ptr<GidsContainer> > > > > erase(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,shared_ptr<GidsContainer> > > > >,_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,shared_ptr<GidsContainer> > > > >);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,shared_ptr<GidsContainer> > > > > find(_GUID const &);
		unsigned __int64 erase(_GUID const &);
	};

	class _Tree<_Tmap_traits<pair<_GUID,unsigned char>,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,less<pair<_GUID,unsigned char> >,allocator<pair<pair<_GUID,unsigned char> const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,0> >
	{
	protected:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<pair<_GUID,unsigned char> const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > > _Insert_at<pair<pair<_GUID,unsigned char> const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > &,_Tree_node<pair<pair<_GUID,unsigned char> const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *>(bool,_Tree_node<pair<pair<_GUID,unsigned char> const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *,pair<pair<_GUID,unsigned char> const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > &,_Tree_node<pair<pair<_GUID,unsigned char> const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<pair<_GUID,unsigned char> const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > > _Insert_hint<pair<pair<_GUID,unsigned char> const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > &,_Tree_node<pair<pair<_GUID,unsigned char> const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *>(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<pair<_GUID,unsigned char> const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > >,pair<pair<_GUID,unsigned char> const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > &,_Tree_node<pair<pair<_GUID,unsigned char> const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *);
		pair<_Tree_iterator<_Tree_val<_Tree_simple_types<pair<pair<_GUID,unsigned char> const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > >,bool> _Insert_nohint<pair<pair<_GUID,unsigned char> const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > &,_Tree_node<pair<pair<_GUID,unsigned char> const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *>(bool,pair<pair<_GUID,unsigned char> const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > &,_Tree_node<pair<pair<_GUID,unsigned char> const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *);
		void _Destroy_if_not_nil(_Tree_node<pair<pair<_GUID,unsigned char> const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *);
		void _Erase(_Tree_node<pair<pair<_GUID,unsigned char> const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *);
	public:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<pair<_GUID,unsigned char> const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > > find(pair<_GUID,unsigned char> const &);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<pair<_GUID,unsigned char> const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > > lower_bound(pair<_GUID,unsigned char> const &);
		~_Tree<_Tmap_traits<pair<_GUID,unsigned char>,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,less<pair<_GUID,unsigned char> >,allocator<pair<pair<_GUID,unsigned char> const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,0> >();
	};

	class _Tree<_Tmap_traits<vector<unsigned char,allocator<unsigned char> >,shared_ptr<FileSystem::DedicatedFile>,less<vector<unsigned char,allocator<unsigned char> > >,allocator<pair<vector<unsigned char,allocator<unsigned char> > const ,shared_ptr<FileSystem::DedicatedFile> > >,0> >
	{
	protected:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<vector<unsigned char,allocator<unsigned char> > const ,shared_ptr<FileSystem::DedicatedFile> > > > > _Insert_at<pair<vector<unsigned char,allocator<unsigned char> > const ,shared_ptr<FileSystem::DedicatedFile> > &,_Tree_node<pair<vector<unsigned char,allocator<unsigned char> > const ,shared_ptr<FileSystem::DedicatedFile> >,void *> *>(bool,_Tree_node<pair<vector<unsigned char,allocator<unsigned char> > const ,shared_ptr<FileSystem::DedicatedFile> >,void *> *,pair<vector<unsigned char,allocator<unsigned char> > const ,shared_ptr<FileSystem::DedicatedFile> > &,_Tree_node<pair<vector<unsigned char,allocator<unsigned char> > const ,shared_ptr<FileSystem::DedicatedFile> >,void *> *);
		pair<_Tree_iterator<_Tree_val<_Tree_simple_types<pair<vector<unsigned char,allocator<unsigned char> > const ,shared_ptr<FileSystem::DedicatedFile> > > > >,bool> _Insert_nohint<pair<vector<unsigned char,allocator<unsigned char> > const ,shared_ptr<FileSystem::DedicatedFile> > &,_Tree_node<pair<vector<unsigned char,allocator<unsigned char> > const ,shared_ptr<FileSystem::DedicatedFile> >,void *> *>(bool,pair<vector<unsigned char,allocator<unsigned char> > const ,shared_ptr<FileSystem::DedicatedFile> > &,_Tree_node<pair<vector<unsigned char,allocator<unsigned char> > const ,shared_ptr<FileSystem::DedicatedFile> >,void *> *);
		void _Destroy_if_not_nil(_Tree_node<pair<vector<unsigned char,allocator<unsigned char> > const ,shared_ptr<FileSystem::DedicatedFile> >,void *> *);
		void _Erase(_Tree_node<pair<vector<unsigned char,allocator<unsigned char> > const ,shared_ptr<FileSystem::DedicatedFile> >,void *> *);
	public:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<vector<unsigned char,allocator<unsigned char> > const ,shared_ptr<FileSystem::DedicatedFile> > > > > erase(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<vector<unsigned char,allocator<unsigned char> > const ,shared_ptr<FileSystem::DedicatedFile> > > > >);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<vector<unsigned char,allocator<unsigned char> > const ,shared_ptr<FileSystem::DedicatedFile> > > > > erase(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<vector<unsigned char,allocator<unsigned char> > const ,shared_ptr<FileSystem::DedicatedFile> > > > >,_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<vector<unsigned char,allocator<unsigned char> > const ,shared_ptr<FileSystem::DedicatedFile> > > > >);
		unsigned __int64 erase(vector<unsigned char,allocator<unsigned char> > const &);
	};

	class _Tree<_Tset_traits<ElementaryFileIdentifier::type,less<ElementaryFileIdentifier::type>,allocator<ElementaryFileIdentifier::type>,0> >
	{
	protected:
		void _Erase(_Tree_node<ElementaryFileIdentifier::type,void *> *);
	public:
		~_Tree<_Tset_traits<ElementaryFileIdentifier::type,less<ElementaryFileIdentifier::type>,allocator<ElementaryFileIdentifier::type>,0> >();
	};

	class _Tree<_Tset_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,0> >
	{
	protected:
		void _Erase(_Tree_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> *);
	public:
		_Tree_const_iterator<_Tree_val<_Tree_simple_types<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > find(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		~_Tree<_Tset_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,0> >();
	};

	struct _Tree_comp_alloc<_Tmap_traits<Asn1Tag::type,DataObject::type,less<Asn1Tag::type>,allocator<pair<Asn1Tag::type const ,DataObject::type> >,0> >
	{
		_Tree_node<pair<Asn1Tag::type const ,DataObject::type>,void *> * _Buyheadnode();
		_Tree_node<pair<Asn1Tag::type const ,DataObject::type>,void *> * _Buynode0();
		void _Freenode0(_Tree_node<pair<Asn1Tag::type const ,DataObject::type>,void *> *);
	};

	struct _Tree_comp_alloc<_Tmap_traits<ElementaryFileIdentifier::type,shared_ptr<FileSystem::ElementaryFile>,less<ElementaryFileIdentifier::type>,allocator<pair<ElementaryFileIdentifier::type const ,shared_ptr<FileSystem::ElementaryFile> > >,0> >
	{
		_Tree_node<pair<ElementaryFileIdentifier::type const ,shared_ptr<FileSystem::ElementaryFile> >,void *> * _Buyheadnode();
		_Tree_node<pair<ElementaryFileIdentifier::type const ,shared_ptr<FileSystem::ElementaryFile> >,void *> * _Buynode0();
		void _Freenode0(_Tree_node<pair<ElementaryFileIdentifier::type const ,shared_ptr<FileSystem::ElementaryFile> >,void *> *);
	};

	struct _Tree_comp_alloc<_Tmap_traits<_GUID,shared_ptr<GidsContainer>,less<_GUID>,allocator<pair<_GUID const ,shared_ptr<GidsContainer> > >,0> >
	{
		_Tree_node<pair<_GUID const ,shared_ptr<GidsContainer> >,void *> * _Buyheadnode();
		_Tree_node<pair<_GUID const ,shared_ptr<GidsContainer> >,void *> * _Buynode0();
		void _Freenode0(_Tree_node<pair<_GUID const ,shared_ptr<GidsContainer> >,void *> *);
	};

	struct _Tree_comp_alloc<_Tmap_traits<pair<_GUID,unsigned char>,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,less<pair<_GUID,unsigned char> >,allocator<pair<pair<_GUID,unsigned char> const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,0> >
	{
		_Tree_node<pair<pair<_GUID,unsigned char> const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> * _Buyheadnode();
		_Tree_node<pair<pair<_GUID,unsigned char> const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> * _Buynode0();
		void _Freenode0(_Tree_node<pair<pair<_GUID,unsigned char> const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *);
	};

	struct _Tree_comp_alloc<_Tmap_traits<vector<unsigned char,allocator<unsigned char> >,shared_ptr<FileSystem::DedicatedFile>,less<vector<unsigned char,allocator<unsigned char> > >,allocator<pair<vector<unsigned char,allocator<unsigned char> > const ,shared_ptr<FileSystem::DedicatedFile> > >,0> >
	{
		_Tree_node<pair<vector<unsigned char,allocator<unsigned char> > const ,shared_ptr<FileSystem::DedicatedFile> >,void *> * _Buyheadnode();
		_Tree_node<pair<vector<unsigned char,allocator<unsigned char> > const ,shared_ptr<FileSystem::DedicatedFile> >,void *> * _Buynode0();
		void _Freenode0(_Tree_node<pair<vector<unsigned char,allocator<unsigned char> > const ,shared_ptr<FileSystem::DedicatedFile> >,void *> *);
	};

	struct _Tree_comp_alloc<_Tset_traits<ElementaryFileIdentifier::type,less<ElementaryFileIdentifier::type>,allocator<ElementaryFileIdentifier::type>,0> >
	{
		_Tree_node<ElementaryFileIdentifier::type,void *> * _Buyheadnode();
		_Tree_node<ElementaryFileIdentifier::type,void *> * _Buynode0();
		void _Freenode0(_Tree_node<ElementaryFileIdentifier::type,void *> *);
	};

	struct _Tree_comp_alloc<_Tset_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,0> >
	{
		_Tree_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> * _Buyheadnode();
		_Tree_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> * _Buynode0();
		void _Freenode0(_Tree_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> *);
	};

	struct _Vector_alloc<_Vec_base_types<_CLMD_FILESYSTEM_ENTRY,allocator<_CLMD_FILESYSTEM_ENTRY> > >
	{
		_CLMD_FILESYSTEM_ENTRY * & _Mylast();
	};

	struct _Vector_alloc<_Vec_base_types<unsigned char,allocator<unsigned char> > >
	{
		unsigned char * & _Mylast();
	};

	struct _Vector_alloc<_Vec_base_types<unsigned char,wil::secure_allocator<unsigned char> > >
	{
		unsigned char * & _Mylast();
	};

	struct _Wrap_alloc<allocator<DataObject::type> >
	{
		void deallocate(DataObject::type *,unsigned __int64);
		void destroy<DataObject::type>(DataObject::type *);
	};

	struct _Wrap_alloc<allocator<DataObjectImplicit<ScardGidsModule,3>::type> >
	{
		void deallocate(DataObjectImplicit<ScardGidsModule,3>::type *,unsigned __int64);
		void destroy<DataObjectImplicit<ScardGidsModule,3>::type>(DataObjectImplicit<ScardGidsModule,3>::type *);
	};

	struct _Wrap_alloc<allocator<GidsTagAllocationAuthorityAid::type> >
	{
		void deallocate(GidsTagAllocationAuthorityAid::type *,unsigned __int64);
		void destroy<GidsTagAllocationAuthorityAid::type>(GidsTagAllocationAuthorityAid::type *);
	};

	struct _Wrap_alloc<allocator<_CLMD_FILESYSTEM_ENTRY> >
	{
		void deallocate(_CLMD_FILESYSTEM_ENTRY *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<_CLMD_KEY_CONTAINER_ENTRY> >
	{
		void deallocate(_CLMD_KEY_CONTAINER_ENTRY *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<_CONTAINER_MAP_RECORD> >
	{
		void deallocate(_CONTAINER_MAP_RECORD *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<_CRYPTOAPI_BLOB> >
	{
		void deallocate(_CRYPTOAPI_BLOB *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<_Func_impl<_Binder<_Unforced,void (&)(Response::type *,Channel *,CommandHeader::type const &,ElementaryFileIdentifier::type,GidsGetKeyPublicKeyReference::type const &),Response::type *,Channel * &,reference_wrapper<CommandHeader::type const >,ElementaryFileIdentifier::type &,_Ph<1> const &>,allocator<int>,void,GidsGetKeyPublicKeyReference::type &> > >
	{
		void deallocate(_Func_impl<_Binder<_Unforced,void (&)(Response::type *,Channel *,CommandHeader::type const &,ElementaryFileIdentifier::type,GidsGetKeyPublicKeyReference::type const &),Response::type *,Channel * &,reference_wrapper<CommandHeader::type const >,ElementaryFileIdentifier::type &,_Ph<1> const &>,allocator<int>,void,GidsGetKeyPublicKeyReference::type &> *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<_Func_impl<_Binder<_Unforced,void (&)(Response::type *,Channel *,CommandHeader::type const &,ElementaryFileIdentifier::type,vector<unsigned char,wil::secure_allocator<unsigned char> > const &),Response::type *,Channel * &,reference_wrapper<CommandHeader::type const >,ElementaryFileIdentifier::type &,_Ph<1> const &>,allocator<int>,void,vector<unsigned char,wil::secure_allocator<unsigned char> > &> > >
	{
		void deallocate(_Func_impl<_Binder<_Unforced,void (&)(Response::type *,Channel *,CommandHeader::type const &,ElementaryFileIdentifier::type,vector<unsigned char,wil::secure_allocator<unsigned char> > const &),Response::type *,Channel * &,reference_wrapper<CommandHeader::type const >,ElementaryFileIdentifier::type &,_Ph<1> const &>,allocator<int>,void,vector<unsigned char,wil::secure_allocator<unsigned char> > &> *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<_Func_impl<_Binder<_Unforced,void (&)(Response::type *,Channel::PreCommand *,CommandHeader::type const &,ElementaryFileIdentifier::type,GidsGetKeyPublicKeyReference::type const &),Response::type *,Channel::PreCommand * &,reference_wrapper<CommandHeader::type const >,ElementaryFileIdentifier::type &,_Ph<1> const &>,allocator<int>,void,GidsGetKeyPublicKeyReference::type &> > >
	{
		void deallocate(_Func_impl<_Binder<_Unforced,void (&)(Response::type *,Channel::PreCommand *,CommandHeader::type const &,ElementaryFileIdentifier::type,GidsGetKeyPublicKeyReference::type const &),Response::type *,Channel::PreCommand * &,reference_wrapper<CommandHeader::type const >,ElementaryFileIdentifier::type &,_Ph<1> const &>,allocator<int>,void,GidsGetKeyPublicKeyReference::type &> *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<_Func_impl<_Binder<_Unforced,void (&)(Response::type *,Channel::PreCommand *,CommandHeader::type const &,ElementaryFileIdentifier::type,vector<unsigned char,wil::secure_allocator<unsigned char> > const &),Response::type *,Channel::PreCommand * &,reference_wrapper<CommandHeader::type const >,ElementaryFileIdentifier::type &,_Ph<1> const &>,allocator<int>,void,vector<unsigned char,wil::secure_allocator<unsigned char> > &> > >
	{
		void deallocate(_Func_impl<_Binder<_Unforced,void (&)(Response::type *,Channel::PreCommand *,CommandHeader::type const &,ElementaryFileIdentifier::type,vector<unsigned char,wil::secure_allocator<unsigned char> > const &),Response::type *,Channel::PreCommand * &,reference_wrapper<CommandHeader::type const >,ElementaryFileIdentifier::type &,_Ph<1> const &>,allocator<int>,void,vector<unsigned char,wil::secure_allocator<unsigned char> > &> *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<_Func_impl<_Binder<_Unforced,void (&)(Response::type *,GidsApplication *,CommandHeader::type const &,ElementaryFileIdentifier::type,GidsGetKeyPublicKeyReference::type const &),Response::type *,GidsApplication * &,reference_wrapper<CommandHeader::type const >,ElementaryFileIdentifier::type &,_Ph<1> const &>,allocator<int>,void,GidsGetKeyPublicKeyReference::type &> > >
	{
		void deallocate(_Func_impl<_Binder<_Unforced,void (&)(Response::type *,GidsApplication *,CommandHeader::type const &,ElementaryFileIdentifier::type,GidsGetKeyPublicKeyReference::type const &),Response::type *,GidsApplication * &,reference_wrapper<CommandHeader::type const >,ElementaryFileIdentifier::type &,_Ph<1> const &>,allocator<int>,void,GidsGetKeyPublicKeyReference::type &> *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<_Func_impl<_Binder<_Unforced,void (&)(Response::type *,GidsApplication *,CommandHeader::type const &,ElementaryFileIdentifier::type,vector<unsigned char,wil::secure_allocator<unsigned char> > const &),Response::type *,GidsApplication * &,reference_wrapper<CommandHeader::type const >,ElementaryFileIdentifier::type &,_Ph<1> const &>,allocator<int>,void,vector<unsigned char,wil::secure_allocator<unsigned char> > &> > >
	{
		void deallocate(_Func_impl<_Binder<_Unforced,void (&)(Response::type *,GidsApplication *,CommandHeader::type const &,ElementaryFileIdentifier::type,vector<unsigned char,wil::secure_allocator<unsigned char> > const &),Response::type *,GidsApplication * &,reference_wrapper<CommandHeader::type const >,ElementaryFileIdentifier::type &,_Ph<1> const &>,allocator<int>,void,vector<unsigned char,wil::secure_allocator<unsigned char> > &> *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<_Tree_node<ElementaryFileIdentifier::type,void *> > >
	{
		void deallocate(_Tree_node<ElementaryFileIdentifier::type,void *> *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<_Tree_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> > >
	{
		void deallocate(_Tree_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<_Tree_node<pair<Asn1Tag::type const ,DataObject::type>,void *> > >
	{
		void deallocate(_Tree_node<pair<Asn1Tag::type const ,DataObject::type>,void *> *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<_Tree_node<pair<ElementaryFileIdentifier::type const ,shared_ptr<FileSystem::ElementaryFile> >,void *> > >
	{
		void deallocate(_Tree_node<pair<ElementaryFileIdentifier::type const ,shared_ptr<FileSystem::ElementaryFile> >,void *> *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<_Tree_node<pair<_GUID const ,shared_ptr<GidsContainer> >,void *> > >
	{
		void deallocate(_Tree_node<pair<_GUID const ,shared_ptr<GidsContainer> >,void *> *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<_Tree_node<pair<pair<_GUID,unsigned char> const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> > >
	{
		void deallocate(_Tree_node<pair<pair<_GUID,unsigned char> const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<_Tree_node<pair<vector<unsigned char,allocator<unsigned char> > const ,shared_ptr<FileSystem::DedicatedFile> >,void *> > >
	{
		void deallocate(_Tree_node<pair<vector<unsigned char,allocator<unsigned char> > const ,shared_ptr<FileSystem::DedicatedFile> >,void *> *,unsigned __int64);
		void destroy<pair<vector<unsigned char,allocator<unsigned char> > const ,shared_ptr<FileSystem::DedicatedFile> > >(pair<vector<unsigned char,allocator<unsigned char> > const ,shared_ptr<FileSystem::DedicatedFile> > *);
	};

	struct _Wrap_alloc<allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >
	{
		void deallocate(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *,unsigned __int64);
		void destroy<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *);
	};

	struct _Wrap_alloc<allocator<shared_ptr<CardApplication> > >
	{
		void deallocate(shared_ptr<CardApplication> *,unsigned __int64);
		void destroy<shared_ptr<CardApplication> >(shared_ptr<CardApplication> *);
	};

	struct _Wrap_alloc<allocator<shared_ptr<FileSystem::ElementaryFile> > >
	{
		void deallocate(shared_ptr<FileSystem::ElementaryFile> *,unsigned __int64);
		void destroy<shared_ptr<FileSystem::ElementaryFile> >(shared_ptr<FileSystem::ElementaryFile> *);
	};

	struct _Wrap_alloc<allocator<unsigned char> >
	{
		void deallocate(unsigned char *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<vector<unsigned char,allocator<unsigned char> > > >
	{
		void deallocate(vector<unsigned char,allocator<unsigned char> > *,unsigned __int64);
		void destroy<vector<unsigned char,allocator<unsigned char> > >(vector<unsigned char,allocator<unsigned char> > *);
	};

	struct _Wrap_alloc<allocator<vector<unsigned char,wil::secure_allocator<unsigned char> > > >
	{
		void deallocate(vector<unsigned char,wil::secure_allocator<unsigned char> > *,unsigned __int64);
		void destroy<vector<unsigned char,wil::secure_allocator<unsigned char> > >(vector<unsigned char,wil::secure_allocator<unsigned char> > *);
	};

	struct _Wrap_alloc<wil::secure_allocator<Asn1Tag::type> >
	{
		void deallocate(Asn1Tag::type *,unsigned __int64);
	};

	struct _Wrap_alloc<wil::secure_allocator<Crt::type> >
	{
		void deallocate(Crt::type *,unsigned __int64);
		void destroy<Crt::type>(Crt::type *);
	};

	struct _Wrap_alloc<wil::secure_allocator<DataObject::type> >
	{
		void deallocate(DataObject::type *,unsigned __int64);
		void destroy<DataObject::type>(DataObject::type *);
	};

	struct _Wrap_alloc<wil::secure_allocator<SecurityRule::type> >
	{
		void deallocate(SecurityRule::type *,unsigned __int64);
		void destroy<SecurityRule::type>(SecurityRule::type *);
	};

	struct _Wrap_alloc<wil::secure_allocator<unsigned char> >
	{
		void deallocate(unsigned char *,unsigned __int64);
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

	struct bad_weak_ptr
	{
		bad_weak_ptr();
		bad_weak_ptr(bad_weak_ptr const &);
		virtual char const * what();
		virtual ~bad_weak_ptr();
	};

	struct basic_string<char,char_traits<char>,allocator<char> >
	{
		static void _Xlen();
		~basic_string<char,char_traits<char>,allocator<char> >();
	};

	struct basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >
	{
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & append(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & append(unsigned short const * const);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & insert(unsigned __int64,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & operator=(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & operator=(unsigned short const * const);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > substr(unsigned __int64,unsigned __int64);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >(unsigned short const * const);
		static void _Xlen();
		void _Tidy_deallocate();
		void reserve(unsigned __int64);
		~basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >();
	};

	struct exception
	{
		exception(exception const &);
		virtual char const * what();
	};

	struct function<void ()>
	{
		~function<void ()>();
	};

	struct function<void (AsymmetricMechanismIdentifier::type const &)>
	{
		void swap(function<void (AsymmetricMechanismIdentifier::type const &)> &);
	};

	struct function<void (AuthMechanismIdentifier::type const &)>
	{
		void swap(function<void (AuthMechanismIdentifier::type const &)> &);
	};

	struct function<void (GidsCrtDo<DataObjectImplicit<ScardGidsModule,15>,15,1>::type const &)>
	{
		void swap(function<void (GidsCrtDo<DataObjectImplicit<ScardGidsModule,15>,15,1>::type const &)> &);
	};

	struct function<void (GidsCrtDo<DataObjectImplicit<ScardGidsModule,16>,16,2>::type const &)>
	{
		void swap(function<void (GidsCrtDo<DataObjectImplicit<ScardGidsModule,16>,16,2>::type const &)> &);
	};

	struct function<void (GidsCrtDo<DataObjectImplicit<ScardGidsModule,17>,17,3>::type const &)>
	{
		void swap(function<void (GidsCrtDo<DataObjectImplicit<ScardGidsModule,17>,17,3>::type const &)> &);
	};

	struct function<void (GidsGetKeyPublicKeyReference::type &)>
	{
		void swap(function<void (GidsGetKeyPublicKeyReference::type &)> &);
	};

	struct function<void (SignatureMechanismIdentifier::type const &)>
	{
		void swap(function<void (SignatureMechanismIdentifier::type const &)> &);
	};

	struct function<void (SymmetricMechanismIdentifier::type const &)>
	{
		void swap(function<void (SymmetricMechanismIdentifier::type const &)> &);
	};

	struct function<void (vector<unsigned char,wil::secure_allocator<unsigned char> > &)>
	{
		void swap(function<void (vector<unsigned char,wil::secure_allocator<unsigned char> > &)> &);
	};

	struct less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >
	{
		bool operator()(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
	};

	struct map<Asn1Tag::type,DataObject::type,less<Asn1Tag::type>,allocator<pair<Asn1Tag::type const ,DataObject::type> > >
	{
		~map<Asn1Tag::type,DataObject::type,less<Asn1Tag::type>,allocator<pair<Asn1Tag::type const ,DataObject::type> > >();
	};

	struct map<ElementaryFileIdentifier::type,shared_ptr<FileSystem::ElementaryFile>,less<ElementaryFileIdentifier::type>,allocator<pair<ElementaryFileIdentifier::type const ,shared_ptr<FileSystem::ElementaryFile> > > >
	{
		~map<ElementaryFileIdentifier::type,shared_ptr<FileSystem::ElementaryFile>,less<ElementaryFileIdentifier::type>,allocator<pair<ElementaryFileIdentifier::type const ,shared_ptr<FileSystem::ElementaryFile> > > >();
	};

	struct map<_GUID,shared_ptr<GidsContainer>,less<_GUID>,allocator<pair<_GUID const ,shared_ptr<GidsContainer> > > >
	{
		shared_ptr<GidsContainer> & operator[](_GUID const &);
		~map<_GUID,shared_ptr<GidsContainer>,less<_GUID>,allocator<pair<_GUID const ,shared_ptr<GidsContainer> > > >();
	};

	struct map<vector<unsigned char,allocator<unsigned char> >,shared_ptr<FileSystem::DedicatedFile>,less<vector<unsigned char,allocator<unsigned char> > >,allocator<pair<vector<unsigned char,allocator<unsigned char> > const ,shared_ptr<FileSystem::DedicatedFile> > > >
	{
		~map<vector<unsigned char,allocator<unsigned char> >,shared_ptr<FileSystem::DedicatedFile>,less<vector<unsigned char,allocator<unsigned char> > >,allocator<pair<vector<unsigned char,allocator<unsigned char> > const ,shared_ptr<FileSystem::DedicatedFile> > > >();
	};

	struct pair<Asn1Tag::type,DataObject::type>
	{
		~pair<Asn1Tag::type,DataObject::type>();
	};

	struct pair<ElementaryFileIdentifier::type,shared_ptr<FileSystem::ElementaryFile> >
	{
		~pair<ElementaryFileIdentifier::type,shared_ptr<FileSystem::ElementaryFile> >();
	};

	struct pair<vector<unsigned char,allocator<unsigned char> >,shared_ptr<FileSystem::DedicatedFile> >
	{
		~pair<vector<unsigned char,allocator<unsigned char> >,shared_ptr<FileSystem::DedicatedFile> >();
	};

	struct runtime_error
	{
		runtime_error(runtime_error const &);
	};

	struct set<ElementaryFileIdentifier::type,less<ElementaryFileIdentifier::type>,allocator<ElementaryFileIdentifier::type> >
	{
		~set<ElementaryFileIdentifier::type,less<ElementaryFileIdentifier::type>,allocator<ElementaryFileIdentifier::type> >();
	};

	struct set<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >
	{
		~set<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >();
	};

	struct shared_ptr<CardApplication>
	{
		shared_ptr<CardApplication>(shared_ptr<CardApplication> const &);
		~shared_ptr<CardApplication>();
	};

	struct shared_ptr<Channel>
	{
		shared_ptr<Channel>(shared_ptr<Channel> const &);
		~shared_ptr<Channel>();
	};

	struct shared_ptr<ChannelData>
	{
		~shared_ptr<ChannelData>();
	};

	struct shared_ptr<FileSystem::DedicatedFile>
	{
		shared_ptr<FileSystem::DedicatedFile>(shared_ptr<FileSystem::DedicatedFile> const &);
		~shared_ptr<FileSystem::DedicatedFile>();
	};

	struct shared_ptr<FileSystem::ElementaryFile>
	{
		shared_ptr<FileSystem::ElementaryFile> & operator=(shared_ptr<FileSystem::ElementaryFile> const &);
		shared_ptr<FileSystem::ElementaryFile>(shared_ptr<FileSystem::ElementaryFile> const &);
		~shared_ptr<FileSystem::ElementaryFile>();
	};

	struct shared_ptr<FileSystem>
	{
		shared_ptr<FileSystem>(shared_ptr<FileSystem> const &);
		~shared_ptr<FileSystem>();
	};

	struct shared_ptr<GidsApplication>
	{
		~shared_ptr<GidsApplication>();
	};

	struct shared_ptr<GidsContainer>
	{
		shared_ptr<GidsContainer> & operator=(shared_ptr<GidsContainer> const &);
		~shared_ptr<GidsContainer>();
	};

	struct shared_ptr<GidsLogicalData>
	{
		shared_ptr<GidsLogicalData>(shared_ptr<GidsLogicalData> const &);
		~shared_ptr<GidsLogicalData>();
	};

	struct shared_ptr<SecurityEnvironment>
	{
		~shared_ptr<SecurityEnvironment>();
	};

	struct shared_ptr<Transaction>
	{
		shared_ptr<Transaction>(shared_ptr<Transaction> const &);
		~shared_ptr<Transaction>();
	};

	struct shared_ptr<vector<shared_ptr<CardApplication>,allocator<shared_ptr<CardApplication> > > >
	{
		shared_ptr<vector<shared_ptr<CardApplication>,allocator<shared_ptr<CardApplication> > > >(shared_ptr<vector<shared_ptr<CardApplication>,allocator<shared_ptr<CardApplication> > > > const &);
		~shared_ptr<vector<shared_ptr<CardApplication>,allocator<shared_ptr<CardApplication> > > >();
	};

	struct thread
	{
		~thread();
	};

	struct tuple<Crt::type &,rangelib::range<unsigned char const *> &>
	{
		tuple<rangelib::range<unsigned char const *> &> & _Get_rest();
	};

	struct tuple<Crt::type,rangelib::range<unsigned char const *> >
	{
		tuple<rangelib::range<unsigned char const *> > & _Get_rest();
	};

	struct tuple<errorlib::scoped_error<apdustatus_error::tag>,bool,shared_ptr<FileSystem::ElementaryFile> >
	{
		~tuple<errorlib::scoped_error<apdustatus_error::tag>,bool,shared_ptr<FileSystem::ElementaryFile> >();
	};

	struct tuple<errorlib::scoped_error<ntstatus_error::tag>,Asn1RsaPrivateKey::type,rangelib::range<unsigned char const *> >
	{
		~tuple<errorlib::scoped_error<ntstatus_error::tag>,Asn1RsaPrivateKey::type,rangelib::range<unsigned char const *> >();
	};

	struct tuple<errorlib::scoped_error<ntstatus_error::tag>,Asn1Tag::type,rangelib::range<unsigned char const *> >
	{
		~tuple<errorlib::scoped_error<ntstatus_error::tag>,Asn1Tag::type,rangelib::range<unsigned char const *> >();
	};

	struct tuple<errorlib::scoped_error<ntstatus_error::tag>,GidsCrtDo<DataObjectImplicit<ScardGidsModule,16>,16,2>::type,rangelib::range<unsigned char const *> >
	{
		~tuple<errorlib::scoped_error<ntstatus_error::tag>,GidsCrtDo<DataObjectImplicit<ScardGidsModule,16>,16,2>::type,rangelib::range<unsigned char const *> >();
	};

	struct tuple<errorlib::scoped_error<ntstatus_error::tag>,GidsCrtDo<DataObjectImplicit<ScardGidsModule,17>,17,3>::type,rangelib::range<unsigned char const *> >
	{
		~tuple<errorlib::scoped_error<ntstatus_error::tag>,GidsCrtDo<DataObjectImplicit<ScardGidsModule,17>,17,3>::type,rangelib::range<unsigned char const *> >();
	};

	struct tuple<errorlib::scoped_error<ntstatus_error::tag>,vector<unsigned char,wil::secure_allocator<unsigned char> > >
	{
		~tuple<errorlib::scoped_error<ntstatus_error::tag>,vector<unsigned char,wil::secure_allocator<unsigned char> > >();
	};

	struct tuple<errorlib::scoped_error<winerror_error::tag>,vector<unsigned char,allocator<unsigned char> > >
	{
		~tuple<errorlib::scoped_error<winerror_error::tag>,vector<unsigned char,allocator<unsigned char> > >();
	};

	struct unique_ptr<CommandAdaptor<Channel::PostCommand>,default_delete<CommandAdaptor<Channel::PostCommand> > >
	{
		~unique_ptr<CommandAdaptor<Channel::PostCommand>,default_delete<CommandAdaptor<Channel::PostCommand> > >();
	};

	struct unique_ptr<CommandAdaptor<Channel::PreCommand>,default_delete<CommandAdaptor<Channel::PreCommand> > >
	{
		~unique_ptr<CommandAdaptor<Channel::PreCommand>,default_delete<CommandAdaptor<Channel::PreCommand> > >();
	};

	struct unique_ptr<CommandAdaptor<Channel>,default_delete<CommandAdaptor<Channel> > >
	{
		~unique_ptr<CommandAdaptor<Channel>,default_delete<CommandAdaptor<Channel> > >();
	};

	struct unique_ptr<CommandAdaptor<GidsApplication>,default_delete<CommandAdaptor<GidsApplication> > >
	{
		~unique_ptr<CommandAdaptor<GidsApplication>,default_delete<CommandAdaptor<GidsApplication> > >();
	};

	struct unique_ptr<GidsFileSystem<_SIMULATOR_PARAMS *>,default_delete<GidsFileSystem<_SIMULATOR_PARAMS *> > >
	{
		~unique_ptr<GidsFileSystem<_SIMULATOR_PARAMS *>,default_delete<GidsFileSystem<_SIMULATOR_PARAMS *> > >();
	};

	struct unique_ptr<unsigned char,rpcmem_delete<unsigned char> >
	{
		~unique_ptr<unsigned char,rpcmem_delete<unsigned char> >();
	};

	class vector<Asn1Tag::type,wil::secure_allocator<Asn1Tag::type> >
	{
		static void _Xlength();
	public:
		~vector<Asn1Tag::type,wil::secure_allocator<Asn1Tag::type> >();
	};

	class vector<Crt::type,wil::secure_allocator<Crt::type> >
	{
		static void _Xlength();
		void _Change_array(Crt::type * const,unsigned __int64,unsigned __int64);
		void _Tidy();
	public:
		vector<Crt::type,wil::secure_allocator<Crt::type> >(vector<Crt::type,wil::secure_allocator<Crt::type> > const &);
		void emplace_back<Crt::type const &>(Crt::type const &);
	};

	class vector<DataObject::type,allocator<DataObject::type> >
	{
		static void _Xlength();
		void _Change_array(DataObject::type * const,unsigned __int64,unsigned __int64);
		void _Tidy();
	public:
		void emplace_back<DataObject::type const &>(DataObject::type const &);
		~vector<DataObject::type,allocator<DataObject::type> >();
	};

	class vector<DataObject::type,wil::secure_allocator<DataObject::type> >
	{
		static void _Xlength();
	public:
		~vector<DataObject::type,wil::secure_allocator<DataObject::type> >();
	};

	class vector<DataObjectImplicit<ScardGidsModule,3>::type,allocator<DataObjectImplicit<ScardGidsModule,3>::type> >
	{
		static void _Xlength();
		void _Change_array(DataObjectImplicit<ScardGidsModule,3>::type * const,unsigned __int64,unsigned __int64);
		void _Tidy();
	public:
		vector<DataObjectImplicit<ScardGidsModule,3>::type,allocator<DataObjectImplicit<ScardGidsModule,3>::type> >(vector<DataObjectImplicit<ScardGidsModule,3>::type,allocator<DataObjectImplicit<ScardGidsModule,3>::type> > const &);
		~vector<DataObjectImplicit<ScardGidsModule,3>::type,allocator<DataObjectImplicit<ScardGidsModule,3>::type> >();
	};

	class vector<GidsTagAllocationAuthorityAid::type,allocator<GidsTagAllocationAuthorityAid::type> >
	{
		static void _Xlength();
		void _Assign_range<GidsTagAllocationAuthorityAid::type *>(GidsTagAllocationAuthorityAid::type *,GidsTagAllocationAuthorityAid::type *,forward_iterator_tag);
		void _Tidy();
	public:
		vector<GidsTagAllocationAuthorityAid::type,allocator<GidsTagAllocationAuthorityAid::type> >(vector<GidsTagAllocationAuthorityAid::type,allocator<GidsTagAllocationAuthorityAid::type> > const &);
		void emplace_back<GidsTagAllocationAuthorityAid::type const &>(GidsTagAllocationAuthorityAid::type const &);
		~vector<GidsTagAllocationAuthorityAid::type,allocator<GidsTagAllocationAuthorityAid::type> >();
	};

	class vector<SecurityRule::type,wil::secure_allocator<SecurityRule::type> >
	{
		static void _Xlength();
		void _Change_array(SecurityRule::type * const,unsigned __int64,unsigned __int64);
		void _Tidy();
	public:
		vector<SecurityRule::type,wil::secure_allocator<SecurityRule::type> >(vector<SecurityRule::type,wil::secure_allocator<SecurityRule::type> > const &);
		void emplace_back<SecurityRule::type const &>(SecurityRule::type const &);
	};

	class vector<_CLMD_FILESYSTEM_ENTRY,allocator<_CLMD_FILESYSTEM_ENTRY> >
	{
		_CLMD_FILESYSTEM_ENTRY * _Umove(_CLMD_FILESYSTEM_ENTRY *,_CLMD_FILESYSTEM_ENTRY *,_CLMD_FILESYSTEM_ENTRY *);
		static void _Xlength();
		void _Change_array(_CLMD_FILESYSTEM_ENTRY * const,unsigned __int64,unsigned __int64);
		void _Insert_range<_CLMD_FILESYSTEM_ENTRY *>(_Vector_const_iterator<_Vector_val<_Simple_types<_CLMD_FILESYSTEM_ENTRY> > >,_CLMD_FILESYSTEM_ENTRY *,_CLMD_FILESYSTEM_ENTRY *,forward_iterator_tag);
		void _Insert_range<move_iterator<_Vector_iterator<_Vector_val<_Simple_types<_CLMD_FILESYSTEM_ENTRY> > > > >(_Vector_const_iterator<_Vector_val<_Simple_types<_CLMD_FILESYSTEM_ENTRY> > >,move_iterator<_Vector_iterator<_Vector_val<_Simple_types<_CLMD_FILESYSTEM_ENTRY> > > >,move_iterator<_Vector_iterator<_Vector_val<_Simple_types<_CLMD_FILESYSTEM_ENTRY> > > >,forward_iterator_tag);
	public:
		void emplace_back<_CLMD_FILESYSTEM_ENTRY const &>(_CLMD_FILESYSTEM_ENTRY const &);
		~vector<_CLMD_FILESYSTEM_ENTRY,allocator<_CLMD_FILESYSTEM_ENTRY> >();
	};

	class vector<_CLMD_KEY_CONTAINER_ENTRY,allocator<_CLMD_KEY_CONTAINER_ENTRY> >
	{
		static void _Xlength();
		void _Tidy();
	public:
		vector<_CLMD_KEY_CONTAINER_ENTRY,allocator<_CLMD_KEY_CONTAINER_ENTRY> >(unsigned __int64,allocator<_CLMD_KEY_CONTAINER_ENTRY> const &);
		~vector<_CLMD_KEY_CONTAINER_ENTRY,allocator<_CLMD_KEY_CONTAINER_ENTRY> >();
	};

	class vector<_CONTAINER_MAP_RECORD,allocator<_CONTAINER_MAP_RECORD> >
	{
		static void _Xlength();
		void _Tidy();
	public:
		vector<_CONTAINER_MAP_RECORD,allocator<_CONTAINER_MAP_RECORD> >(unsigned __int64,allocator<_CONTAINER_MAP_RECORD> const &);
		~vector<_CONTAINER_MAP_RECORD,allocator<_CONTAINER_MAP_RECORD> >();
	};

	class vector<_CRYPTOAPI_BLOB,allocator<_CRYPTOAPI_BLOB> >
	{
		static void _Xlength();
	public:
		~vector<_CRYPTOAPI_BLOB,allocator<_CRYPTOAPI_BLOB> >();
	};

	class vector<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >
	{
		static void _Xlength();
		void _Tidy();
	public:
		~vector<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >();
	};

	class vector<shared_ptr<CardApplication>,allocator<shared_ptr<CardApplication> > >
	{
		static void _Xlength();
		void _Change_array(shared_ptr<CardApplication> * const,unsigned __int64,unsigned __int64);
	};

	class vector<shared_ptr<FileSystem::ElementaryFile>,allocator<shared_ptr<FileSystem::ElementaryFile> > >
	{
		static void _Xlength();
		void _Change_array(shared_ptr<FileSystem::ElementaryFile> * const,unsigned __int64,unsigned __int64);
		void _Tidy();
	public:
		void emplace_back<shared_ptr<FileSystem::ElementaryFile> const &>(shared_ptr<FileSystem::ElementaryFile> const &);
		~vector<shared_ptr<FileSystem::ElementaryFile>,allocator<shared_ptr<FileSystem::ElementaryFile> > >();
	};

	class vector<unsigned char,allocator<unsigned char> >
	{
		static void _Xlength();
		unsigned char * _Umove(unsigned char *,unsigned char *,unsigned char *);
		void _Change_array(unsigned char * const,unsigned __int64,unsigned __int64);
		void _Insert_range<unsigned char *>(_Vector_const_iterator<_Vector_val<_Simple_types<unsigned char> > >,unsigned char *,unsigned char *,forward_iterator_tag);
		void _Insert_range<unsigned char const *>(_Vector_const_iterator<_Vector_val<_Simple_types<unsigned char> > >,unsigned char const *,unsigned char const *,forward_iterator_tag);
		void _Range_construct_or_tidy<char *>(char *,char *,forward_iterator_tag);
		void _Range_construct_or_tidy<unsigned char *>(unsigned char *,unsigned char *,forward_iterator_tag);
		void _Range_construct_or_tidy<unsigned char const *>(unsigned char const *,unsigned char const *,forward_iterator_tag);
		void _Tidy();
	public:
		vector<unsigned char,allocator<unsigned char> >(unsigned __int64,allocator<unsigned char> const &);
		vector<unsigned char,allocator<unsigned char> >(vector<unsigned char,allocator<unsigned char> > const &);
		void assign<unsigned char *,void>(unsigned char *,unsigned char *);
		void assign<unsigned char const *,void>(unsigned char const *,unsigned char const *);
		~vector<unsigned char,allocator<unsigned char> >();
	};

	class vector<unsigned char,wil::secure_allocator<unsigned char> >
	{
		static void _Xlength();
		unsigned char * _Umove(unsigned char *,unsigned char *,unsigned char *);
		void _Assign_range<unsigned char const *>(unsigned char const *,unsigned char const *,forward_iterator_tag);
		void _Change_array(unsigned char * const,unsigned __int64,unsigned __int64);
		void _Insert_range<unsigned char *>(_Vector_const_iterator<_Vector_val<_Simple_types<unsigned char> > >,unsigned char *,unsigned char *,forward_iterator_tag);
		void _Range_construct_or_tidy<unsigned char *>(unsigned char *,unsigned char *,forward_iterator_tag);
		void _Range_construct_or_tidy<unsigned char const *>(unsigned char const *,unsigned char const *,forward_iterator_tag);
		void _Tidy();
	public:
		_Vector_iterator<_Vector_val<_Simple_types<unsigned char> > > insert<_Vector_iterator<_Vector_val<_Simple_types<unsigned char> > >,void>(_Vector_const_iterator<_Vector_val<_Simple_types<unsigned char> > >,_Vector_iterator<_Vector_val<_Simple_types<unsigned char> > >,_Vector_iterator<_Vector_val<_Simple_types<unsigned char> > >);
		vector<unsigned char,wil::secure_allocator<unsigned char> >(vector<unsigned char,wil::secure_allocator<unsigned char> > const &);
		void assign<char const *,void>(char const *,char const *);
		void assign<move_iterator<_Vector_iterator<_Vector_val<_Simple_types<unsigned char> > > >,void>(move_iterator<_Vector_iterator<_Vector_val<_Simple_types<unsigned char> > > >,move_iterator<_Vector_iterator<_Vector_val<_Simple_types<unsigned char> > > >);
		void assign<move_iterator<unsigned char *>,void>(move_iterator<unsigned char *>,move_iterator<unsigned char *>);
		void assign<unsigned char *,void>(unsigned char *,unsigned char *);
		void emplace_back<unsigned char const &>(unsigned char const &);
		~vector<unsigned char,wil::secure_allocator<unsigned char> >();
	};

	class vector<vector<unsigned char,allocator<unsigned char> >,allocator<vector<unsigned char,allocator<unsigned char> > > >
	{
		static void _Xlength();
		void _Change_array(vector<unsigned char,allocator<unsigned char> > * const,unsigned __int64,unsigned __int64);
		void _Tidy();
	public:
		vector<vector<unsigned char,allocator<unsigned char> >,allocator<vector<unsigned char,allocator<unsigned char> > > >(vector<vector<unsigned char,allocator<unsigned char> >,allocator<vector<unsigned char,allocator<unsigned char> > > > const &);
	};

	class vector<vector<unsigned char,wil::secure_allocator<unsigned char> >,allocator<vector<unsigned char,wil::secure_allocator<unsigned char> > > >
	{
		static void _Xlength();
	public:
		~vector<vector<unsigned char,wil::secure_allocator<unsigned char> >,allocator<vector<unsigned char,wil::secure_allocator<unsigned char> > > >();
	};

	Asn1Tag::type * _Uninitialized_move_al_unchecked<Asn1Tag::type *,Asn1Tag::type *,wil::secure_allocator<Asn1Tag::type> >(Asn1Tag::type *,Asn1Tag::type *,Asn1Tag::type *,std::_Wrap_alloc<wil::secure_allocator<Asn1Tag::type> > &,std::_General_ptr_iterator_tag,std::_Any_tag);
	Crt::type * _Unfancy<Crt::type>(Crt::type *);
	Crt::type * _Uninitialized_copy_al_unchecked<Crt::type *,Crt::type *,wil::secure_allocator<Crt::type> >(Crt::type *,Crt::type *,Crt::type *,std::_Wrap_alloc<wil::secure_allocator<Crt::type> > &,std::_General_ptr_iterator_tag,std::_Any_tag);
	DataObject::type * _Unfancy<DataObject::type>(DataObject::type *);
	DataObject::type * _Uninitialized_copy_al_unchecked<DataObject::type *,DataObject::type *,allocator<DataObject::type> >(DataObject::type *,DataObject::type *,DataObject::type *,std::_Wrap_alloc<std::allocator<DataObject::type> > &,std::_General_ptr_iterator_tag,std::_Any_tag);
	DataObject::type * _Uninitialized_copy_al_unchecked<DataObject::type *,DataObject::type *,wil::secure_allocator<DataObject::type> >(DataObject::type *,DataObject::type *,DataObject::type *,std::_Wrap_alloc<wil::secure_allocator<DataObject::type> > &,std::_General_ptr_iterator_tag,std::_Any_tag);
	DataObjectImplicit<ScardGidsModule,3>::type * _Unfancy<DataObjectImplicit<ScardGidsModule,3>::type>(DataObjectImplicit<ScardGidsModule,3>::type *);
	DataObjectImplicit<ScardGidsModule,3>::type * _Uninitialized_copy_al_unchecked<DataObjectImplicit<ScardGidsModule,3>::type *,DataObjectImplicit<ScardGidsModule,3>::type *,allocator<DataObjectImplicit<ScardGidsModule,3>::type> >(DataObjectImplicit<ScardGidsModule,3>::type *,DataObjectImplicit<ScardGidsModule,3>::type *,DataObjectImplicit<ScardGidsModule,3>::type *,std::_Wrap_alloc<std::allocator<DataObjectImplicit<ScardGidsModule,3>::type> > &,std::_General_ptr_iterator_tag,std::_Any_tag);
	GidsTagAllocationAuthorityAid::type * _Copy_unchecked<GidsTagAllocationAuthorityAid::type *,GidsTagAllocationAuthorityAid::type *>(GidsTagAllocationAuthorityAid::type *,GidsTagAllocationAuthorityAid::type *,GidsTagAllocationAuthorityAid::type *);
	GidsTagAllocationAuthorityAid::type * _Unfancy<GidsTagAllocationAuthorityAid::type>(GidsTagAllocationAuthorityAid::type *);
	GidsTagAllocationAuthorityAid::type * _Uninitialized_copy_al_unchecked<GidsTagAllocationAuthorityAid::type *,GidsTagAllocationAuthorityAid::type *,allocator<GidsTagAllocationAuthorityAid::type> >(GidsTagAllocationAuthorityAid::type *,GidsTagAllocationAuthorityAid::type *,GidsTagAllocationAuthorityAid::type *,std::_Wrap_alloc<std::allocator<GidsTagAllocationAuthorityAid::type> > &,std::_General_ptr_iterator_tag,std::_Any_tag);
	SecurityRule::type * _Unfancy<SecurityRule::type>(SecurityRule::type *);
	SecurityRule::type * _Uninitialized_copy_al_unchecked<SecurityRule::type *,SecurityRule::type *,wil::secure_allocator<SecurityRule::type> >(SecurityRule::type *,SecurityRule::type *,SecurityRule::type *,std::_Wrap_alloc<wil::secure_allocator<SecurityRule::type> > &,std::_General_ptr_iterator_tag,std::_Any_tag);
	_CLMD_FILESYSTEM_ENTRY * _Move_unchecked<_CLMD_FILESYSTEM_ENTRY *,_CLMD_FILESYSTEM_ENTRY *>(_CLMD_FILESYSTEM_ENTRY *,_CLMD_FILESYSTEM_ENTRY *,_CLMD_FILESYSTEM_ENTRY *);
	_CLMD_FILESYSTEM_ENTRY * _Uninitialized_copy_al_unchecked<move_iterator<_Vector_iterator<_Vector_val<_Simple_types<_CLMD_FILESYSTEM_ENTRY> > > >,_CLMD_FILESYSTEM_ENTRY *,allocator<_CLMD_FILESYSTEM_ENTRY> >(std::move_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<_CLMD_FILESYSTEM_ENTRY> > > >,std::move_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<_CLMD_FILESYSTEM_ENTRY> > > >,_CLMD_FILESYSTEM_ENTRY *,std::_Wrap_alloc<std::allocator<_CLMD_FILESYSTEM_ENTRY> > &,std::_General_ptr_iterator_tag,std::_Any_tag);
	_CLMD_KEY_CONTAINER_ENTRY * _Uninitialized_value_construct_n1<_CLMD_KEY_CONTAINER_ENTRY *,unsigned __int64,allocator<_CLMD_KEY_CONTAINER_ENTRY> >(_CLMD_KEY_CONTAINER_ENTRY *,unsigned __int64,std::_Wrap_alloc<std::allocator<_CLMD_KEY_CONTAINER_ENTRY> > &,std::integral_constant<bool,0>);
	_CONTAINER_MAP_RECORD * _Uninitialized_value_construct_n1<_CONTAINER_MAP_RECORD *,unsigned __int64,allocator<_CONTAINER_MAP_RECORD> >(_CONTAINER_MAP_RECORD *,unsigned __int64,std::_Wrap_alloc<std::allocator<_CONTAINER_MAP_RECORD> > &,std::integral_constant<bool,0>);
	std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > * _Unfancy<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *);
	std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > * _Uninitialized_move_al_unchecked<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::_Wrap_alloc<std::allocator<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > &,std::_General_ptr_iterator_tag,std::_Any_tag);
	std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > operator+<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,unsigned short const * const);
	std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > operator+<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,unsigned short);
	std::shared_ptr<CardApplication> * _Unfancy<shared_ptr<CardApplication> >(std::shared_ptr<CardApplication> *);
	std::shared_ptr<CardApplication> * _Uninitialized_move_al_unchecked<shared_ptr<CardApplication> *,shared_ptr<CardApplication> *,allocator<shared_ptr<CardApplication> > >(std::shared_ptr<CardApplication> *,std::shared_ptr<CardApplication> *,std::shared_ptr<CardApplication> *,std::_Wrap_alloc<std::allocator<std::shared_ptr<CardApplication> > > &,std::_General_ptr_iterator_tag,std::_Any_tag);
	std::shared_ptr<FileSystem::ElementaryFile> * _Unfancy<shared_ptr<FileSystem::ElementaryFile> >(std::shared_ptr<FileSystem::ElementaryFile> *);
	std::shared_ptr<FileSystem::ElementaryFile> * _Uninitialized_move_al_unchecked<shared_ptr<FileSystem::ElementaryFile> *,shared_ptr<FileSystem::ElementaryFile> *,allocator<shared_ptr<FileSystem::ElementaryFile> > >(std::shared_ptr<FileSystem::ElementaryFile> *,std::shared_ptr<FileSystem::ElementaryFile> *,std::shared_ptr<FileSystem::ElementaryFile> *,std::_Wrap_alloc<std::allocator<std::shared_ptr<FileSystem::ElementaryFile> > > &,std::_General_ptr_iterator_tag,std::_Any_tag);
	std::vector<unsigned char,std::allocator<unsigned char> > * _Unfancy<vector<unsigned char,allocator<unsigned char> > >(std::vector<unsigned char,std::allocator<unsigned char> > *);
	std::vector<unsigned char,std::allocator<unsigned char> > * _Uninitialized_copy_al_unchecked<vector<unsigned char,allocator<unsigned char> > *,vector<unsigned char,allocator<unsigned char> > *,allocator<vector<unsigned char,allocator<unsigned char> > > >(std::vector<unsigned char,std::allocator<unsigned char> > *,std::vector<unsigned char,std::allocator<unsigned char> > *,std::vector<unsigned char,std::allocator<unsigned char> > *,std::_Wrap_alloc<std::allocator<std::vector<unsigned char,std::allocator<unsigned char> > > > &,std::_General_ptr_iterator_tag,std::_Any_tag);
	std::vector<unsigned char,std::allocator<unsigned char> > * _Uninitialized_move_al_unchecked<vector<unsigned char,allocator<unsigned char> > *,vector<unsigned char,allocator<unsigned char> > *,allocator<vector<unsigned char,allocator<unsigned char> > > >(std::vector<unsigned char,std::allocator<unsigned char> > *,std::vector<unsigned char,std::allocator<unsigned char> > *,std::vector<unsigned char,std::allocator<unsigned char> > *,std::_Wrap_alloc<std::allocator<std::vector<unsigned char,std::allocator<unsigned char> > > > &,std::_General_ptr_iterator_tag,std::_Any_tag);
	std::vector<unsigned char,wil::secure_allocator<unsigned char> > * _Unfancy<vector<unsigned char,wil::secure_allocator<unsigned char> > >(std::vector<unsigned char,wil::secure_allocator<unsigned char> > *);
	std::vector<unsigned char,wil::secure_allocator<unsigned char> > * _Uninitialized_move_al_unchecked<vector<unsigned char,wil::secure_allocator<unsigned char> > *,vector<unsigned char,wil::secure_allocator<unsigned char> > *,allocator<vector<unsigned char,wil::secure_allocator<unsigned char> > > >(std::vector<unsigned char,wil::secure_allocator<unsigned char> > *,std::vector<unsigned char,wil::secure_allocator<unsigned char> > *,std::vector<unsigned char,wil::secure_allocator<unsigned char> > *,std::_Wrap_alloc<std::allocator<std::vector<unsigned char,wil::secure_allocator<unsigned char> > > > &,std::_General_ptr_iterator_tag,std::_Any_tag);
	unsigned char * _Move_unchecked<unsigned char *,unsigned char *>(unsigned char *,unsigned char *,unsigned char *);
	unsigned char * _Uninitialized_copy_al_unchecked<char const *,unsigned char *,wil::secure_allocator<unsigned char> >(char const *,char const *,unsigned char *,std::_Wrap_alloc<wil::secure_allocator<unsigned char> > &,std::_General_ptr_iterator_tag,std::_Any_tag);
	unsigned char * _Uninitialized_copy_al_unchecked<move_iterator<_Vector_iterator<_Vector_val<_Simple_types<unsigned char> > > >,unsigned char *,wil::secure_allocator<unsigned char> >(std::move_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > >,std::move_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > >,unsigned char *,std::_Wrap_alloc<wil::secure_allocator<unsigned char> > &,std::_General_ptr_iterator_tag,std::_Any_tag);
	unsigned char * _Uninitialized_copy_al_unchecked<move_iterator<unsigned char *>,unsigned char *,wil::secure_allocator<unsigned char> >(std::move_iterator<unsigned char *>,std::move_iterator<unsigned char *>,unsigned char *,std::_Wrap_alloc<wil::secure_allocator<unsigned char> > &,std::_General_ptr_iterator_tag,std::_Any_tag);
	unsigned char * _Uninitialized_copy_al_unchecked<unsigned char *,unsigned char *,wil::secure_allocator<unsigned char> >(unsigned char *,unsigned char *,unsigned char *,std::_Wrap_alloc<wil::secure_allocator<unsigned char> > &,std::_General_ptr_iterator_tag,std::_Any_tag);
	unsigned char * _Uninitialized_copy_al_unchecked<unsigned char const *,unsigned char *,wil::secure_allocator<unsigned char> >(unsigned char const *,unsigned char const *,unsigned char *,std::_Wrap_alloc<wil::secure_allocator<unsigned char> > &,std::_General_ptr_iterator_tag,std::_Any_tag);
	unsigned char * _Uninitialized_move_al_unchecked<unsigned char *,unsigned char *,wil::secure_allocator<unsigned char> >(unsigned char *,unsigned char *,unsigned char *,std::_Wrap_alloc<wil::secure_allocator<unsigned char> > &,std::_General_ptr_iterator_tag,std::_Any_tag);
	unsigned char * _Uninitialized_value_construct_n1<unsigned char *,unsigned __int64,wil::secure_allocator<unsigned char> >(unsigned char *,unsigned __int64,std::_Wrap_alloc<wil::secure_allocator<unsigned char> > &,std::integral_constant<bool,0>);
	void * _Allocate(unsigned __int64,unsigned __int64,bool);
	void _Deallocate(void *,unsigned __int64,unsigned __int64);
	void _Destroy_range<allocator<DataObject::type>,DataObject::type *>(DataObject::type *,DataObject::type *,std::_Wrap_alloc<std::allocator<DataObject::type> > &);
	void _Destroy_range<allocator<DataObjectImplicit<ScardGidsModule,3>::type>,DataObjectImplicit<ScardGidsModule,3>::type *>(DataObjectImplicit<ScardGidsModule,3>::type *,DataObjectImplicit<ScardGidsModule,3>::type *,std::_Wrap_alloc<std::allocator<DataObjectImplicit<ScardGidsModule,3>::type> > &);
	void _Destroy_range<allocator<GidsTagAllocationAuthorityAid::type>,GidsTagAllocationAuthorityAid::type *>(GidsTagAllocationAuthorityAid::type *,GidsTagAllocationAuthorityAid::type *,std::_Wrap_alloc<std::allocator<GidsTagAllocationAuthorityAid::type> > &);
	void _Destroy_range<allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *>(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::_Wrap_alloc<std::allocator<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > &);
	void _Destroy_range<allocator<shared_ptr<CardApplication> >,shared_ptr<CardApplication> *>(std::shared_ptr<CardApplication> *,std::shared_ptr<CardApplication> *,std::_Wrap_alloc<std::allocator<std::shared_ptr<CardApplication> > > &);
	void _Destroy_range<allocator<shared_ptr<FileSystem::ElementaryFile> >,shared_ptr<FileSystem::ElementaryFile> *>(std::shared_ptr<FileSystem::ElementaryFile> *,std::shared_ptr<FileSystem::ElementaryFile> *,std::_Wrap_alloc<std::allocator<std::shared_ptr<FileSystem::ElementaryFile> > > &);
	void _Destroy_range<allocator<vector<unsigned char,allocator<unsigned char> > >,vector<unsigned char,allocator<unsigned char> > *>(std::vector<unsigned char,std::allocator<unsigned char> > *,std::vector<unsigned char,std::allocator<unsigned char> > *,std::_Wrap_alloc<std::allocator<std::vector<unsigned char,std::allocator<unsigned char> > > > &);
	void _Destroy_range<allocator<vector<unsigned char,wil::secure_allocator<unsigned char> > >,vector<unsigned char,wil::secure_allocator<unsigned char> > *>(std::vector<unsigned char,wil::secure_allocator<unsigned char> > *,std::vector<unsigned char,wil::secure_allocator<unsigned char> > *,std::_Wrap_alloc<std::allocator<std::vector<unsigned char,wil::secure_allocator<unsigned char> > > > &);
	void _Destroy_range<wil::secure_allocator<Crt::type>,Crt::type *>(Crt::type *,Crt::type *,std::_Wrap_alloc<wil::secure_allocator<Crt::type> > &);
	void _Destroy_range<wil::secure_allocator<DataObject::type>,DataObject::type *>(DataObject::type *,DataObject::type *,std::_Wrap_alloc<wil::secure_allocator<DataObject::type> > &);
	void _Destroy_range<wil::secure_allocator<SecurityRule::type>,SecurityRule::type *>(SecurityRule::type *,SecurityRule::type *,std::_Wrap_alloc<wil::secure_allocator<SecurityRule::type> > &);
	void swap<Asn1Integer<2,1>::type,void>(Asn1Integer<2,1>::type &,Asn1Integer<2,1>::type &);
	void swap<CryptoMechanismReference::type,void>(CryptoMechanismReference::type &,CryptoMechanismReference::type &);
	void swap<SecurityAttribute::type,void>(SecurityAttribute::type &,SecurityAttribute::type &);
	void swap<optnllib::optional<KeyReference::type>,void>(optnllib::optional<KeyReference::type> &,optnllib::optional<KeyReference::type> &);
	void swap<optnllib::optional<KeyUsageTemplate::type>,void>(optnllib::optional<KeyUsageTemplate::type> &,optnllib::optional<KeyUsageTemplate::type> &);
	void swap<optnllib::optional<PrivateKeyReference::type>,void>(optnllib::optional<PrivateKeyReference::type> &,optnllib::optional<PrivateKeyReference::type> &);
	void swap<optnllib::optional<SecurityCondition::type>,void>(optnllib::optional<SecurityCondition::type> &,optnllib::optional<SecurityCondition::type> &);
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

	namespace details
	{
		struct ScopeExitFnGuard<errcntrctlib::detail::UnwinderErrorContractFunctor>
		{
			void operator()();
			~ScopeExitFnGuard<errcntrctlib::detail::UnwinderErrorContractFunctor>();
		};

		class ThreadFailureCallbackHolder
		{
			static long volatile s_telemetryId;
		public:
			static bool GetThreadContext(FailureInfo *,ThreadFailureCallbackHolder *,char *,unsigned __int64);
		};

		namespace in1diag3
		{
			long Log_Hr(void *,unsigned int,char const *,long);
			long Return_GetLastError(void *,unsigned int,char const *);
			void FailFast_CaughtException(void *,unsigned int,char const *);
			void FailFast_Hr(void *,unsigned int,char const *,long);
			void FailFast_Unexpected(void *,unsigned int,char const *);
			void Return_Hr(void *,unsigned int,char const *,long);
			void Return_Hr_NoOriginate(void *,unsigned int,char const *,long);
			void _FailFastImmediate_Unexpected();
			void _FailFast_GetLastError(void *,unsigned int,char const *);
			void _FailFast_Hr(void *,unsigned int,char const *,long);
			void _Throw_NullAlloc(void *,unsigned int,char const *);
		};

		struct out_param_t<wistd::unique_ptr<unsigned char,cotaskmem_secure_deleter> >
		{
			~out_param_t<wistd::unique_ptr<unsigned char,cotaskmem_secure_deleter> >();
		};

		struct out_param_t<wistd::unique_ptr<unsigned char,process_heap_deleter> >
		{
			~out_param_t<wistd::unique_ptr<unsigned char,process_heap_deleter> >();
		};

		struct shared_buffer
		{
			bool create(void const *,unsigned __int64);
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
		long RecognizeCaughtExceptionFromCallback(unsigned short *,unsigned __int64);
		long ReportFailure_CaughtException(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,SupportedExceptions);
		long ReportFailure_GetLastErrorHr(void *,unsigned int,char const *,char const *,char const *,void *,FailureType);
		long ResultFromCaughtExceptionInternal(unsigned short *,unsigned __int64,bool *);
		long StringCchPrintfA(char *,unsigned __int64,char const *,...);
		unsigned char (* g_pfnRtlDllShutdownInProgress)();
		unsigned char * WriteResultString<char const *>(unsigned char *,unsigned char *,char const *,char const * *);
		unsigned char * WriteResultString<unsigned short const *>(unsigned char *,unsigned char *,unsigned short const *,unsigned short const * *);
		unsigned char RtlDllShutdownInProgress();
		unsigned long ReportFailure_GetLastError(void *,unsigned int,char const *,char const *,char const *,void *,FailureType);
		unsigned short * LogStringPrintf(unsigned short *,unsigned short const *,unsigned short const *,...);
		void (* g_pfnDebugBreak)();
		void (* g_pfnGetContextAndNotifyFailure)(FailureInfo *,char *,unsigned __int64);
		void (* g_pfnLoggingCallback)(FailureInfo const &);
		void (* g_pfnOriginateCallback)(FailureType,long);
		void (* g_pfnRethrow)();
		void (* g_pfnTelemetryCallback)(bool,FailureInfo const &);
		void (* g_pfnThrowResultException)(FailureInfo const &);
		void DebugBreak();
		void GetContextAndNotifyFailure(FailureInfo *,char *,unsigned __int64);
		void LogFailure(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long,unsigned short const *,bool,unsigned short *,unsigned __int64,char *,unsigned __int64,FailureInfo *);
		void ReportFailure(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long,unsigned short const *,details::ReportFailureOptions);
		void ReportFailure_Hr(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long);
		void Rethrow();
		void ThrowResultExceptionInternal(FailureInfo const &);
	};

	namespace details_abi
	{
		struct ProcessLocalStorageData<ProcessLocalData>
		{
			static long Acquire(char const *,ProcessLocalStorageData<ProcessLocalData> * *);
			void Release();
		};

		class SemaphoreValue
		{
			static long GetValueFromSemaphore(void *,long *);
			static long TryGetValueInternal(unsigned short const *,bool,unsigned __int64 *,bool *);
		};

		struct ThreadLocalData
		{
			void SetLastError(FailureInfo const &);
			~ThreadLocalData();
		};

		details_abi::ProcessLocalStorage<details_abi::ProcessLocalData> * g_pProcessLocalData;
		details_abi::ThreadLocalData * GetThreadLocalDataCache(bool);
	};

	bool (* g_pfnIsDebuggerPresent)();
	bool g_fBreakOnFailure;
	bool g_fIsDebuggerPresent;
	long (* g_pfnResultFromCaughtException)();
	long GetFailureLogString(unsigned short *,unsigned __int64,wil::FailureInfo const &);
	long ResultFromCaughtException();
	long verify_hresult<long>(long);
};

namespace wistd
{
	struct unique_ptr<unsigned char,wil::cotaskmem_secure_deleter>
	{
		~unique_ptr<unsigned char,wil::cotaskmem_secure_deleter>();
	};

	struct unique_ptr<unsigned char,wil::process_heap_deleter>
	{
		~unique_ptr<unsigned char,wil::process_heap_deleter>();
	};

};

ASN1_MODULE const * * ans1Modules;
HINSTANCE__ * g_wil_details_ntdllModuleHandle;
__type_info_node __type_info_root_node;
bool check_condition(AuthenticatedRoleStatus::type const &,SecurityCondition::type const &);
char * WPP_pszIndent;
long InitializeGidsHandler(CtnrHandlerInputs const *,_GUID *,CtnrHandlerCallbacks *);
long NgcCtnrEnumCreateNode(_GUID const *,unsigned short const *,unsigned short const *,unsigned short const *);
long NgcCtnrEnumCreateNodeRpc(void *,_GUID const *,unsigned short const *,unsigned short const *,unsigned short const *);
long NgcCtnrEnumDeleteNode(_GUID const *);
long NgcCtnrEnumDeleteNodeRpc(void *,_GUID const *);
long StringCbCatA(char *,unsigned __int64,char const *);
long StringCchCatW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchPrintfW(unsigned short *,unsigned __int64,unsigned short const *,...);
std::tuple<errorlib::scoped_error<ntstatus_error::tag>,DataObjectImplicit<ScardGidsModule,12>::type,rangelib::range<unsigned char const *> > decode_data_object_in_list<DataObjectImplicit<ScardGidsModule,12> >(rangelib::range<unsigned char const *>);
std::tuple<errorlib::scoped_error<ntstatus_error::tag>,DataObjectImplicit<ScardGidsModule,12>::type> decode_data_object<DataObjectImplicit<ScardGidsModule,12> >(rangelib::range<unsigned char const *>);
std::tuple<errorlib::scoped_error<ntstatus_error::tag>,DataObjectImplicit<ScardGidsModule,13>::type,rangelib::range<unsigned char const *> > decode_data_object_in_list<DataObjectImplicit<ScardGidsModule,13> >(rangelib::range<unsigned char const *>);
std::tuple<errorlib::scoped_error<ntstatus_error::tag>,DataObjectImplicit<ScardGidsModule,18>::type,rangelib::range<unsigned char const *> > decode_data_object_in_list<DataObjectImplicit<ScardGidsModule,18> >(rangelib::range<unsigned char const *>);
std::tuple<errorlib::scoped_error<ntstatus_error::tag>,DataObjectImplicit<ScardGidsModule,19>::type,rangelib::range<unsigned char const *> > decode_data_object_in_list<DataObjectImplicit<ScardGidsModule,19> >(rangelib::range<unsigned char const *>);
std::tuple<errorlib::scoped_error<ntstatus_error::tag>,DataObjectImplicit<ScardGidsModule,4>::type,rangelib::range<unsigned char const *> > decode_data_object_in_list<DataObjectImplicit<ScardGidsModule,4> >(rangelib::range<unsigned char const *>);
std::tuple<errorlib::scoped_error<ntstatus_error::tag>,DataObjectImplicit<ScardGidsModule,5>::type,rangelib::range<unsigned char const *> > decode_data_object_in_list<DataObjectImplicit<ScardGidsModule,5> >(rangelib::range<unsigned char const *>);
std::tuple<errorlib::scoped_error<ntstatus_error::tag>,GidsCrtDo<DataObjectImplicit<ScardGidsModule,15>,15,1>::type,rangelib::range<unsigned char const *> > decode_data_object_in_list<DataObjectImplicit<ScardGidsModule,15> >(rangelib::range<unsigned char const *>);
std::tuple<errorlib::scoped_error<ntstatus_error::tag>,GidsCrtDo<DataObjectImplicit<ScardGidsModule,16>,16,2>::type,rangelib::range<unsigned char const *> > decode_data_object_in_list<DataObjectImplicit<ScardGidsModule,16> >(rangelib::range<unsigned char const *>);
std::tuple<errorlib::scoped_error<ntstatus_error::tag>,GidsCrtDo<DataObjectImplicit<ScardGidsModule,17>,17,3>::type,rangelib::range<unsigned char const *> > decode_data_object_in_list<DataObjectImplicit<ScardGidsModule,17> >(rangelib::range<unsigned char const *>);
std::tuple<errorlib::scoped_error<ntstatus_error::tag>,std::vector<unsigned char,wil::secure_allocator<unsigned char> > > encode_data_object<DataObjectImplicit<ScardGidsModule,14> >(SCARDGIDS_GENERATEASYMMETRICKEYPAIR_PUBLICKEY_DO *);
std::tuple<errorlib::scoped_error<ntstatus_error::tag>,std::vector<unsigned char,wil::secure_allocator<unsigned char> > > encode_data_object<DataObjectImplicit<ScardGidsModule,15> >(SCARDGIDS_CRT *);
std::tuple<errorlib::scoped_error<ntstatus_error::tag>,std::vector<unsigned char,wil::secure_allocator<unsigned char> > > encode_data_object<DataObjectImplicit<ScardGidsModule,16> >(SCARDGIDS_CRT *);
std::tuple<errorlib::scoped_error<ntstatus_error::tag>,std::vector<unsigned char,wil::secure_allocator<unsigned char> > > encode_data_object<DataObjectImplicit<ScardGidsModule,17> >(SCARDGIDS_CRT *);
std::tuple<errorlib::scoped_error<ntstatus_error::tag>,std::vector<unsigned char,wil::secure_allocator<unsigned char> > > encode_data_object<DataObjectImplicit<ScardGidsModule,2> >(SCARDGIDS_APP_TEMPLATE_DO *);
std::tuple<errorlib::scoped_error<ntstatus_error::tag>,std::vector<unsigned char,wil::secure_allocator<unsigned char> > > encode_data_object<DataObjectImplicit<ScardGidsModule,3> >(SCARDGIDS_CMIT *);
std::tuple<errorlib::scoped_error<ntstatus_error::tag>,std::vector<unsigned char,wil::secure_allocator<unsigned char> > > encode_data_object<DataObjectImplicit<ScardGidsModule,4> >(SCARDGIDS_FCP_TEMPLATE_DO_DF *);
std::tuple<errorlib::scoped_error<ntstatus_error::tag>,std::vector<unsigned char,wil::secure_allocator<unsigned char> > > encode_data_object<DataObjectImplicit<ScardGidsModule,5> >(SCARDGIDS_FCP_TEMPLATE_DO_BEF *);
std::tuple<errorlib::scoped_error<ntstatus_error::tag>,std::vector<unsigned char,wil::secure_allocator<unsigned char> > > encode_data_object<DataObjectImplicit<ScardGidsModule,7> >(SCARDGIDS_FMD_TEMPLATE_DO_ADF *);
std::tuple<errorlib::scoped_error<ntstatus_error::tag>,std::vector<unsigned char,wil::secure_allocator<unsigned char> >,rangelib::range<unsigned char const *> > decode_data_object_in_list<DataObjectImplicit<ScardGidsModule,11> >(rangelib::range<unsigned char const *>);
unsigned char const * operator+=<unsigned char const ,unsigned long,SafeIntInternal::SafeIntExceptionHandler<SafeIntException> >(unsigned char const * &,SafeInt<unsigned long,SafeIntInternal::SafeIntExceptionHandler<SafeIntException> >);
unsigned long I_FsGetFilesystemTable<_SIMULATOR_PARAMS *>(GidsFileSystem<_SIMULATOR_PARAMS *> *,_CLMD_FILESYSTEM_ENTRY * *,unsigned long *);
void * operator new(unsigned __int64);
void WppTraceIndent(char * *,_WppTraceIndentType);
void _TlgWriteActivityAutoStop<70368744177664,5>(_TlgProvider_t const *,_GUID const *);
void __scrt_initialize_type_info();
void __scrt_throw_std_bad_alloc();
void __scrt_throw_std_bad_array_new_length();
void __scrt_uninitialize_type_info();
void operator delete(void *);
void operator delete(void *,unsigned __int64);
void operator delete(void *,void *);
