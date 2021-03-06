// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_ds_List
#include <haxe/ds/List.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesBuffer
#include <haxe/io/BytesBuffer.h>
#endif
#ifndef INCLUDED_haxe_io_Encoding
#include <haxe/io/Encoding.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_zip_ExtraField
#include <haxe/zip/ExtraField.h>
#endif
#ifndef INCLUDED_haxe_zip_InflateImpl
#include <haxe/zip/InflateImpl.h>
#endif
#ifndef INCLUDED_haxe_zip_Reader
#include <haxe/zip/Reader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c76307fb0f9c3e4f_34_new,"haxe.zip.Reader","new",0xf101338a,"haxe.zip.Reader.new","haxe/zip/Reader.hx",34,0x3164d664)
HX_LOCAL_STACK_FRAME(_hx_pos_c76307fb0f9c3e4f_38_readZipDate,"haxe.zip.Reader","readZipDate",0xa6a02623,"haxe.zip.Reader.readZipDate","haxe/zip/Reader.hx",38,0x3164d664)
HX_LOCAL_STACK_FRAME(_hx_pos_c76307fb0f9c3e4f_51_readExtraFields,"haxe.zip.Reader","readExtraFields",0x48ea639d,"haxe.zip.Reader.readExtraFields","haxe/zip/Reader.hx",51,0x3164d664)
HX_LOCAL_STACK_FRAME(_hx_pos_c76307fb0f9c3e4f_85_readEntryHeader,"haxe.zip.Reader","readEntryHeader",0x28765213,"haxe.zip.Reader.readEntryHeader","haxe/zip/Reader.hx",85,0x3164d664)
HX_LOCAL_STACK_FRAME(_hx_pos_c76307fb0f9c3e4f_122_read,"haxe.zip.Reader","read",0xf2b0acec,"haxe.zip.Reader.read","haxe/zip/Reader.hx",122,0x3164d664)
HX_LOCAL_STACK_FRAME(_hx_pos_c76307fb0f9c3e4f_193_readZip,"haxe.zip.Reader","readZip",0x2845d555,"haxe.zip.Reader.readZip","haxe/zip/Reader.hx",193,0x3164d664)
namespace haxe{
namespace zip{

void Reader_obj::__construct( ::haxe::io::Input i){
            	HX_STACKFRAME(&_hx_pos_c76307fb0f9c3e4f_34_new)
HXDLIN(  34)		this->i = i;
            	}

Dynamic Reader_obj::__CreateEmpty() { return new Reader_obj; }

void *Reader_obj::_hx_vtable = 0;

Dynamic Reader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Reader_obj > _hx_result = new Reader_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Reader_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x77d0ba9e;
}

 ::Date Reader_obj::readZipDate(){
            	HX_GC_STACKFRAME(&_hx_pos_c76307fb0f9c3e4f_38_readZipDate)
HXLINE(  39)		int t = this->i->readUInt16();
HXLINE(  40)		int hour = ((t >> 11) & 31);
HXLINE(  41)		int min = ((t >> 5) & 63);
HXLINE(  42)		int sec = (t & 31);
HXLINE(  43)		int d = this->i->readUInt16();
HXLINE(  44)		int year = (d >> 9);
HXLINE(  45)		int month = ((d >> 5) & 15);
HXLINE(  46)		int day = (d & 31);
HXLINE(  47)		return  ::Date_obj::__alloc( HX_CTX ,(year + 1980),(month - 1),day,hour,min,(sec << 1));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readZipDate,return )

 ::haxe::ds::List Reader_obj::readExtraFields(int length){
            	HX_GC_STACKFRAME(&_hx_pos_c76307fb0f9c3e4f_51_readExtraFields)
HXLINE(  52)		 ::haxe::ds::List fields =  ::haxe::ds::List_obj::__alloc( HX_CTX );
HXLINE(  53)		while((length > 0)){
HXLINE(  55)			if ((length < 4)) {
HXLINE(  55)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid extra fields data",18,88,a4,23)));
            			}
HXLINE(  56)			int tag = this->i->readUInt16();
HXLINE(  57)			int len = this->i->readUInt16();
HXLINE(  58)			if ((length < len)) {
HXLINE(  58)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid extra fields data",18,88,a4,23)));
            			}
HXLINE(  59)			if ((tag == 28789)) {
HXLINE(  62)				int version = this->i->readByte();
HXLINE(  63)				if ((version != 1)) {
HXLINE(  65)					 ::haxe::io::BytesBuffer data =  ::haxe::io::BytesBuffer_obj::__alloc( HX_CTX );
HXLINE(  66)					data->b->push(version);
HXLINE(  67)					{
HXLINE(  67)						 ::haxe::io::Bytes src = this->i->read((len - 1));
HXDLIN(  67)						::Array< unsigned char > b1 = data->b;
HXDLIN(  67)						::Array< unsigned char > b2 = src->b;
HXDLIN(  67)						{
HXLINE(  67)							int _g = 0;
HXDLIN(  67)							int _g1 = src->length;
HXDLIN(  67)							while((_g < _g1)){
HXLINE(  67)								_g = (_g + 1);
HXDLIN(  67)								int i = (_g - 1);
HXDLIN(  67)								data->b->push(b2->__get(i));
            							}
            						}
            					}
HXLINE(  68)					fields->add(::haxe::zip::ExtraField_obj::FUnknown(tag,data->getBytes()));
            				}
            				else {
HXLINE(  72)					int crc = this->i->readInt32();
HXLINE(  73)					::String name = this->i->read((len - 5))->toString();
HXLINE(  74)					fields->add(::haxe::zip::ExtraField_obj::FInfoZipUnicodePath(name,crc));
            				}
            			}
            			else {
HXLINE(  77)				fields->add(::haxe::zip::ExtraField_obj::FUnknown(tag,this->i->read(len)));
            			}
HXLINE(  79)			length = (length - (4 + len));
            		}
HXLINE(  81)		return fields;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Reader_obj,readExtraFields,return )

 ::Dynamic Reader_obj::readEntryHeader(){
            	HX_STACKFRAME(&_hx_pos_c76307fb0f9c3e4f_85_readEntryHeader)
HXLINE(  86)		 ::haxe::io::Input i = this->i;
HXLINE(  87)		int h = i->readInt32();
HXLINE(  88)		bool _hx_tmp;
HXDLIN(  88)		if ((h != 33639248)) {
HXLINE(  88)			_hx_tmp = (h == 101010256);
            		}
            		else {
HXLINE(  88)			_hx_tmp = true;
            		}
HXDLIN(  88)		if (_hx_tmp) {
HXLINE(  88)			return null();
            		}
HXLINE(  89)		if ((h != 67324752)) {
HXLINE(  89)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid Zip Data",72,da,ff,99)));
            		}
HXLINE(  90)		int version = i->readUInt16();
HXLINE(  91)		int flags = i->readUInt16();
HXLINE(  92)		bool utf8 = ((flags & 2048) != 0);
HXLINE(  95)		int compression = i->readUInt16();
HXLINE(  96)		bool compressed = (compression != 0);
HXLINE(  97)		bool _hx_tmp1;
HXDLIN(  97)		if (compressed) {
HXLINE(  97)			_hx_tmp1 = (compression != 8);
            		}
            		else {
HXLINE(  97)			_hx_tmp1 = false;
            		}
HXDLIN(  97)		if (_hx_tmp1) {
HXLINE(  97)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Unsupported compression ",65,94,24,90) + compression)));
            		}
HXLINE(  98)		 ::Date mtime = this->readZipDate();
HXLINE(  99)		int crc32 = i->readInt32();
HXLINE( 100)		int csize = i->readInt32();
HXLINE( 101)		int usize = i->readInt32();
HXLINE( 102)		int fnamelen = i->readInt16();
HXLINE( 103)		int elen = i->readInt16();
HXLINE( 104)		::String fname = i->readString(fnamelen,null());
HXLINE( 105)		 ::haxe::ds::List fields = this->readExtraFields(elen);
HXLINE( 106)		if (utf8) {
HXLINE( 106)			fields->push(::haxe::zip::ExtraField_obj::FUtf8_dyn());
            		}
HXLINE( 107)		 ::haxe::io::Bytes data = null();
HXLINE( 108)		if (((flags & 8) != 0)) {
HXLINE( 108)			csize = -1;
            		}
HXLINE( 109)		return  ::Dynamic(::hx::Anon_obj::Create(8)
            			->setFixed(0,HX_("dataSize",0b,80,c7,8b),csize)
            			->setFixed(1,HX_("data",2a,56,63,42),data)
            			->setFixed(2,HX_("crc32",73,0c,51,4c),crc32)
            			->setFixed(3,HX_("fileName",e7,5a,43,62),fname)
            			->setFixed(4,HX_("fileSize",5d,89,97,65),usize)
            			->setFixed(5,HX_("fileTime",a9,b4,40,66),mtime)
            			->setFixed(6,HX_("compressed",81,4c,da,67),compressed)
            			->setFixed(7,HX_("extraFields",29,e9,47,7f),fields));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readEntryHeader,return )

 ::haxe::ds::List Reader_obj::read(){
            	HX_GC_STACKFRAME(&_hx_pos_c76307fb0f9c3e4f_122_read)
HXLINE( 123)		 ::haxe::ds::List l =  ::haxe::ds::List_obj::__alloc( HX_CTX );
HXLINE( 124)		 ::Dynamic buf = null();
HXLINE( 125)		 ::haxe::io::Bytes tmp = null();
HXLINE( 126)		while(true){
HXLINE( 128)			 ::Dynamic e = this->readEntryHeader();
HXLINE( 129)			if (::hx::IsNull( e )) {
HXLINE( 129)				goto _hx_goto_6;
            			}
HXLINE( 130)			if (::hx::IsLess( e->__Field(HX_("dataSize",0b,80,c7,8b),::hx::paccDynamic),0 )) {
HXLINE( 165)				int bufSize = 65536;
HXLINE( 166)				if (::hx::IsNull( tmp )) {
HXLINE( 166)					tmp = ::haxe::io::Bytes_obj::alloc(bufSize);
            				}
HXLINE( 167)				 ::haxe::io::BytesBuffer out =  ::haxe::io::BytesBuffer_obj::__alloc( HX_CTX );
HXLINE( 168)				 ::haxe::zip::InflateImpl z =  ::haxe::zip::InflateImpl_obj::__alloc( HX_CTX ,this->i,false,false);
HXLINE( 169)				while(true){
HXLINE( 171)					int n = z->readBytes(tmp,0,bufSize);
HXLINE( 172)					{
HXLINE( 172)						bool _hx_tmp;
HXDLIN( 172)						if ((n >= 0)) {
HXLINE( 172)							_hx_tmp = (n > tmp->length);
            						}
            						else {
HXLINE( 172)							_hx_tmp = true;
            						}
HXDLIN( 172)						if (_hx_tmp) {
HXLINE( 172)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::OutsideBounds_dyn()));
            						}
HXDLIN( 172)						::Array< unsigned char > b1 = out->b;
HXDLIN( 172)						::Array< unsigned char > b2 = tmp->b;
HXDLIN( 172)						{
HXLINE( 172)							int _g = 0;
HXDLIN( 172)							int _g1 = n;
HXDLIN( 172)							while((_g < _g1)){
HXLINE( 172)								_g = (_g + 1);
HXDLIN( 172)								int i = (_g - 1);
HXDLIN( 172)								out->b->push(b2->__get(i));
            							}
            						}
            					}
HXLINE( 173)					if ((n < bufSize)) {
HXLINE( 173)						goto _hx_goto_7;
            					}
            				}
            				_hx_goto_7:;
HXLINE( 175)				e->__SetField(HX_("data",2a,56,63,42),out->getBytes(),::hx::paccDynamic);
HXLINE( 177)				e->__SetField(HX_("crc32",73,0c,51,4c),this->i->readInt32(),::hx::paccDynamic);
HXLINE( 178)				if (::hx::IsEq( e->__Field(HX_("crc32",73,0c,51,4c),::hx::paccDynamic),134695760 )) {
HXLINE( 178)					e->__SetField(HX_("crc32",73,0c,51,4c),this->i->readInt32(),::hx::paccDynamic);
            				}
HXLINE( 179)				e->__SetField(HX_("dataSize",0b,80,c7,8b),this->i->readInt32(),::hx::paccDynamic);
HXLINE( 180)				e->__SetField(HX_("fileSize",5d,89,97,65),this->i->readInt32(),::hx::paccDynamic);
HXLINE( 182)				e->__SetField(HX_("dataSize",0b,80,c7,8b),e->__Field(HX_("fileSize",5d,89,97,65),::hx::paccDynamic),::hx::paccDynamic);
HXLINE( 183)				e->__SetField(HX_("compressed",81,4c,da,67),false,::hx::paccDynamic);
            			}
            			else {
HXLINE( 186)				e->__SetField(HX_("data",2a,56,63,42),this->i->read(( (int)(e->__Field(HX_("dataSize",0b,80,c7,8b),::hx::paccDynamic)) )),::hx::paccDynamic);
            			}
HXLINE( 187)			l->add(e);
            		}
            		_hx_goto_6:;
HXLINE( 189)		return l;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,read,return )

 ::haxe::ds::List Reader_obj::readZip( ::haxe::io::Input i){
            	HX_GC_STACKFRAME(&_hx_pos_c76307fb0f9c3e4f_193_readZip)
HXLINE( 194)		 ::haxe::zip::Reader r =  ::haxe::zip::Reader_obj::__alloc( HX_CTX ,i);
HXLINE( 195)		return r->read();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Reader_obj,readZip,return )


::hx::ObjectPtr< Reader_obj > Reader_obj::__new( ::haxe::io::Input i) {
	::hx::ObjectPtr< Reader_obj > __this = new Reader_obj();
	__this->__construct(i);
	return __this;
}

::hx::ObjectPtr< Reader_obj > Reader_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::io::Input i) {
	Reader_obj *__this = (Reader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Reader_obj), true, "haxe.zip.Reader"));
	*(void **)__this = Reader_obj::_hx_vtable;
	__this->__construct(i);
	return __this;
}

Reader_obj::Reader_obj()
{
}

void Reader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Reader);
	HX_MARK_MEMBER_NAME(i,"i");
	HX_MARK_END_CLASS();
}

void Reader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(i,"i");
}

::hx::Val Reader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { return ::hx::Val( i ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"read") ) { return ::hx::Val( read_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"readZipDate") ) { return ::hx::Val( readZipDate_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"readExtraFields") ) { return ::hx::Val( readExtraFields_dyn() ); }
		if (HX_FIELD_EQ(inName,"readEntryHeader") ) { return ::hx::Val( readEntryHeader_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Reader_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"readZip") ) { outValue = readZip_dyn(); return true; }
	}
	return false;
}

::hx::Val Reader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { i=inValue.Cast<  ::haxe::io::Input >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Reader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("i",69,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Reader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::io::Input */ ,(int)offsetof(Reader_obj,i),HX_("i",69,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Reader_obj_sStaticStorageInfo = 0;
#endif

static ::String Reader_obj_sMemberFields[] = {
	HX_("i",69,00,00,00),
	HX_("readZipDate",f9,88,bc,c9),
	HX_("readExtraFields",73,e9,9f,a6),
	HX_("readEntryHeader",e9,d7,2b,86),
	HX_("read",56,4b,a7,4b),
	::String(null()) };

::hx::Class Reader_obj::__mClass;

static ::String Reader_obj_sStaticFields[] = {
	HX_("readZip",2b,95,d6,02),
	::String(null())
};

void Reader_obj::__register()
{
	Reader_obj _hx_dummy;
	Reader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.zip.Reader",98,66,32,ed);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Reader_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Reader_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Reader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Reader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Reader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Reader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace zip
