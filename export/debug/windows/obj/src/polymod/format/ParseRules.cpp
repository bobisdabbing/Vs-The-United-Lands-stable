// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_polymod_format_BaseParseFormat
#include <polymod/format/BaseParseFormat.h>
#endif
#ifndef INCLUDED_polymod_format_CSVParseFormat
#include <polymod/format/CSVParseFormat.h>
#endif
#ifndef INCLUDED_polymod_format_EndLineType
#include <polymod/format/EndLineType.h>
#endif
#ifndef INCLUDED_polymod_format_JSONParseFormat
#include <polymod/format/JSONParseFormat.h>
#endif
#ifndef INCLUDED_polymod_format_LinesParseFormat
#include <polymod/format/LinesParseFormat.h>
#endif
#ifndef INCLUDED_polymod_format_ParseRules
#include <polymod/format/ParseRules.h>
#endif
#ifndef INCLUDED_polymod_format_PlainTextParseFormat
#include <polymod/format/PlainTextParseFormat.h>
#endif
#ifndef INCLUDED_polymod_format_TSVParseFormat
#include <polymod/format/TSVParseFormat.h>
#endif
#ifndef INCLUDED_polymod_format_TextFileFormat
#include <polymod/format/TextFileFormat.h>
#endif
#ifndef INCLUDED_polymod_format_XMLParseFormat
#include <polymod/format/XMLParseFormat.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_64f3b369f4c9efe8_42_new,"polymod.format.ParseRules","new",0x6e0082b5,"polymod.format.ParseRules.new","polymod/format/ParseRules.hx",42,0xc5c5c43b)
HX_LOCAL_STACK_FRAME(_hx_pos_64f3b369f4c9efe8_46_addType,"polymod.format.ParseRules","addType",0x81433650,"polymod.format.ParseRules.addType","polymod/format/ParseRules.hx",46,0xc5c5c43b)
HX_LOCAL_STACK_FRAME(_hx_pos_64f3b369f4c9efe8_62_get,"polymod.format.ParseRules","get",0x6dfb32eb,"polymod.format.ParseRules.get","polymod/format/ParseRules.hx",62,0xc5c5c43b)
HX_LOCAL_STACK_FRAME(_hx_pos_64f3b369f4c9efe8_67_addFormat,"polymod.format.ParseRules","addFormat",0x6791644d,"polymod.format.ParseRules.addFormat","polymod/format/ParseRules.hx",67,0xc5c5c43b)
HX_LOCAL_STACK_FRAME(_hx_pos_64f3b369f4c9efe8_72_addFile,"polymod.format.ParseRules","addFile",0x77f61212,"polymod.format.ParseRules.addFile","polymod/format/ParseRules.hx",72,0xc5c5c43b)
HX_LOCAL_STACK_FRAME(_hx_pos_64f3b369f4c9efe8_76_getDefault,"polymod.format.ParseRules","getDefault",0xdc12d116,"polymod.format.ParseRules.getDefault","polymod/format/ParseRules.hx",76,0xc5c5c43b)
namespace polymod{
namespace format{

void ParseRules_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_64f3b369f4c9efe8_42_new)
HXDLIN(  42)		this->formats =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}

Dynamic ParseRules_obj::__CreateEmpty() { return new ParseRules_obj; }

void *ParseRules_obj::_hx_vtable = 0;

Dynamic ParseRules_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ParseRules_obj > _hx_result = new ParseRules_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ParseRules_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x60090e51;
}

void ParseRules_obj::addType(::String extension, ::polymod::format::TextFileFormat type){
            	HX_GC_STACKFRAME(&_hx_pos_64f3b369f4c9efe8_46_addType)
HXLINE(  47)		::Dynamic format;
HXDLIN(  47)		switch((int)(type->_hx_getIndex())){
            			case (int)0: {
HXLINE(  47)				format =  ::polymod::format::PlainTextParseFormat_obj::__alloc( HX_CTX );
            			}
            			break;
            			case (int)1: {
HXLINE(  47)				format =  ::polymod::format::LinesParseFormat_obj::__alloc( HX_CTX ,::polymod::format::EndLineType_obj::LF_dyn());
            			}
            			break;
            			case (int)2: {
HXLINE(  47)				format =  ::polymod::format::CSVParseFormat_obj::__alloc( HX_CTX ,HX_(",",2c,00,00,00),true);
            			}
            			break;
            			case (int)3: {
HXLINE(  47)				format =  ::polymod::format::TSVParseFormat_obj::__alloc( HX_CTX );
            			}
            			break;
            			case (int)4: {
HXLINE(  47)				format =  ::polymod::format::XMLParseFormat_obj::__alloc( HX_CTX ,null(),null(),null());
            			}
            			break;
            			case (int)5: {
HXLINE(  47)				format =  ::polymod::format::JSONParseFormat_obj::__alloc( HX_CTX ,null(),null());
            			}
            			break;
            		}
HXLINE(  57)		this->formats->set(extension,format);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ParseRules_obj,addType,(void))

::Dynamic ParseRules_obj::get(::String extension){
            	HX_STACKFRAME(&_hx_pos_64f3b369f4c9efe8_62_get)
HXDLIN(  62)		return this->formats->get(extension);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ParseRules_obj,get,return )

void ParseRules_obj::addFormat(::String extension,::Dynamic format){
            	HX_STACKFRAME(&_hx_pos_64f3b369f4c9efe8_67_addFormat)
HXDLIN(  67)		this->formats->set(extension,format);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ParseRules_obj,addFormat,(void))

void ParseRules_obj::addFile(::String path,::Dynamic format){
            	HX_STACKFRAME(&_hx_pos_64f3b369f4c9efe8_72_addFile)
HXDLIN(  72)		this->formats->set(path,format);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ParseRules_obj,addFile,(void))

 ::polymod::format::ParseRules ParseRules_obj::getDefault(){
            	HX_GC_STACKFRAME(&_hx_pos_64f3b369f4c9efe8_76_getDefault)
HXLINE(  77)		 ::polymod::format::ParseRules rules =  ::polymod::format::ParseRules_obj::__alloc( HX_CTX );
HXLINE(  78)		rules->addFormat(HX_("csv",c6,83,4b,00), ::polymod::format::CSVParseFormat_obj::__alloc( HX_CTX ,HX_(",",2c,00,00,00),true));
HXLINE(  79)		rules->addFormat(HX_("tsv",17,6a,58,00), ::polymod::format::TSVParseFormat_obj::__alloc( HX_CTX ));
HXLINE(  80)		rules->addFormat(HX_("xml",d7,6d,5b,00), ::polymod::format::XMLParseFormat_obj::__alloc( HX_CTX ,null(),null(),null()));
HXLINE(  81)		rules->addFormat(HX_("json",28,42,68,46), ::polymod::format::JSONParseFormat_obj::__alloc( HX_CTX ,null(),null()));
HXLINE(  82)		rules->addFormat(HX_("txt",70,6e,58,00), ::polymod::format::PlainTextParseFormat_obj::__alloc( HX_CTX ));
HXLINE(  83)		return rules;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ParseRules_obj,getDefault,return )


::hx::ObjectPtr< ParseRules_obj > ParseRules_obj::__new() {
	::hx::ObjectPtr< ParseRules_obj > __this = new ParseRules_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ParseRules_obj > ParseRules_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ParseRules_obj *__this = (ParseRules_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ParseRules_obj), true, "polymod.format.ParseRules"));
	*(void **)__this = ParseRules_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ParseRules_obj::ParseRules_obj()
{
}

void ParseRules_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ParseRules);
	HX_MARK_MEMBER_NAME(formats,"formats");
	HX_MARK_END_CLASS();
}

void ParseRules_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(formats,"formats");
}

::hx::Val ParseRules_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"formats") ) { return ::hx::Val( formats ); }
		if (HX_FIELD_EQ(inName,"addType") ) { return ::hx::Val( addType_dyn() ); }
		if (HX_FIELD_EQ(inName,"addFile") ) { return ::hx::Val( addFile_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addFormat") ) { return ::hx::Val( addFormat_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ParseRules_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"getDefault") ) { outValue = getDefault_dyn(); return true; }
	}
	return false;
}

::hx::Val ParseRules_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"formats") ) { formats=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ParseRules_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("formats",5c,c1,2e,df));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ParseRules_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(ParseRules_obj,formats),HX_("formats",5c,c1,2e,df)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ParseRules_obj_sStaticStorageInfo = 0;
#endif

static ::String ParseRules_obj_sMemberFields[] = {
	HX_("formats",5c,c1,2e,df),
	HX_("addType",7b,35,46,89),
	HX_("get",96,80,4e,00),
	HX_("addFormat",38,c4,b2,b5),
	HX_("addFile",3d,11,f9,7f),
	::String(null()) };

::hx::Class ParseRules_obj::__mClass;

static ::String ParseRules_obj_sStaticFields[] = {
	HX_("getDefault",cb,5e,25,eb),
	::String(null())
};

void ParseRules_obj::__register()
{
	ParseRules_obj _hx_dummy;
	ParseRules_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("polymod.format.ParseRules",43,04,1a,0c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ParseRules_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ParseRules_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ParseRules_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ParseRules_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ParseRules_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ParseRules_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace polymod
} // end namespace format
