// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_polymod_PolymodConfig
#include <polymod/PolymodConfig.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_cae42745e4bfdcf9_116_get_appendFolder,"polymod.PolymodConfig","get_appendFolder",0xb5fda81f,"polymod.PolymodConfig.get_appendFolder","polymod/PolymodConfig.hx",116,0x8e4837ff)
HX_LOCAL_STACK_FRAME(_hx_pos_cae42745e4bfdcf9_134_get_mergeFolder,"polymod.PolymodConfig","get_mergeFolder",0x3871576f,"polymod.PolymodConfig.get_mergeFolder","polymod/PolymodConfig.hx",134,0x8e4837ff)
HX_LOCAL_STACK_FRAME(_hx_pos_cae42745e4bfdcf9_152_get_modPackFile,"polymod.PolymodConfig","get_modPackFile",0x99ed06c0,"polymod.PolymodConfig.get_modPackFile","polymod/PolymodConfig.hx",152,0x8e4837ff)
HX_LOCAL_STACK_FRAME(_hx_pos_cae42745e4bfdcf9_170_get_modMetadataFile,"polymod.PolymodConfig","get_modMetadataFile",0xc9a9dbd6,"polymod.PolymodConfig.get_modMetadataFile","polymod/PolymodConfig.hx",170,0x8e4837ff)
HX_LOCAL_STACK_FRAME(_hx_pos_cae42745e4bfdcf9_188_get_modIconFile,"polymod.PolymodConfig","get_modIconFile",0xe332e760,"polymod.PolymodConfig.get_modIconFile","polymod/PolymodConfig.hx",188,0x8e4837ff)
HX_LOCAL_STACK_FRAME(_hx_pos_cae42745e4bfdcf9_207_get_modIgnoreFiles,"polymod.PolymodConfig","get_modIgnoreFiles",0xad36f01a,"polymod.PolymodConfig.get_modIgnoreFiles","polymod/PolymodConfig.hx",207,0x8e4837ff)
static const ::String _hx_array_data_a82454c0_6[] = {
	HX_("LICENSE.txt",e3,aa,9a,6b),HX_("ASSET_LICENSE.txt",b4,72,9f,4f),HX_("CODE_LICENSE.txt",91,61,d1,6f),
};
namespace polymod{

void PolymodConfig_obj::__construct() { }

Dynamic PolymodConfig_obj::__CreateEmpty() { return new PolymodConfig_obj; }

void *PolymodConfig_obj::_hx_vtable = 0;

Dynamic PolymodConfig_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PolymodConfig_obj > _hx_result = new PolymodConfig_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PolymodConfig_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x48534066;
}

::String PolymodConfig_obj::appendFolder;

::String PolymodConfig_obj::get_appendFolder(){
            	HX_STACKFRAME(&_hx_pos_cae42745e4bfdcf9_116_get_appendFolder)
HXLINE( 118)		if (::hx::IsNull( ::polymod::PolymodConfig_obj::appendFolder )) {
HXLINE( 119)			::polymod::PolymodConfig_obj::appendFolder = HX_("_append",79,f3,4a,fe);
            		}
HXLINE( 120)		return ::polymod::PolymodConfig_obj::appendFolder;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PolymodConfig_obj,get_appendFolder,return )

::String PolymodConfig_obj::mergeFolder;

::String PolymodConfig_obj::get_mergeFolder(){
            	HX_STACKFRAME(&_hx_pos_cae42745e4bfdcf9_134_get_mergeFolder)
HXLINE( 136)		if (::hx::IsNull( ::polymod::PolymodConfig_obj::mergeFolder )) {
HXLINE( 137)			::polymod::PolymodConfig_obj::mergeFolder = HX_("_merge",f9,e9,ad,01);
            		}
HXLINE( 138)		return ::polymod::PolymodConfig_obj::mergeFolder;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PolymodConfig_obj,get_mergeFolder,return )

::String PolymodConfig_obj::modPackFile;

::String PolymodConfig_obj::get_modPackFile(){
            	HX_STACKFRAME(&_hx_pos_cae42745e4bfdcf9_152_get_modPackFile)
HXLINE( 154)		if (::hx::IsNull( ::polymod::PolymodConfig_obj::modPackFile )) {
HXLINE( 155)			::polymod::PolymodConfig_obj::modPackFile = HX_("_polymod_pack.txt",63,9d,09,cb);
            		}
HXLINE( 156)		return ::polymod::PolymodConfig_obj::modPackFile;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PolymodConfig_obj,get_modPackFile,return )

::String PolymodConfig_obj::modMetadataFile;

::String PolymodConfig_obj::get_modMetadataFile(){
            	HX_STACKFRAME(&_hx_pos_cae42745e4bfdcf9_170_get_modMetadataFile)
HXLINE( 172)		if (::hx::IsNull( ::polymod::PolymodConfig_obj::modMetadataFile )) {
HXLINE( 173)			::polymod::PolymodConfig_obj::modMetadataFile = HX_("_polymod_meta.json",69,fc,10,06);
            		}
HXLINE( 174)		return ::polymod::PolymodConfig_obj::modMetadataFile;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PolymodConfig_obj,get_modMetadataFile,return )

::String PolymodConfig_obj::modIconFile;

::String PolymodConfig_obj::get_modIconFile(){
            	HX_STACKFRAME(&_hx_pos_cae42745e4bfdcf9_188_get_modIconFile)
HXLINE( 190)		if (::hx::IsNull( ::polymod::PolymodConfig_obj::modIconFile )) {
HXLINE( 191)			::polymod::PolymodConfig_obj::modIconFile = HX_("_polymod_icon.png",3c,6c,4c,14);
            		}
HXLINE( 192)		return ::polymod::PolymodConfig_obj::modIconFile;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PolymodConfig_obj,get_modIconFile,return )

::Array< ::String > PolymodConfig_obj::modIgnoreFiles;

::Array< ::String > PolymodConfig_obj::get_modIgnoreFiles(){
            	HX_STACKFRAME(&_hx_pos_cae42745e4bfdcf9_207_get_modIgnoreFiles)
HXLINE( 209)		if (::hx::IsNull( ::polymod::PolymodConfig_obj::modIgnoreFiles )) {
HXLINE( 210)			::polymod::PolymodConfig_obj::modIgnoreFiles = ::Array_obj< ::String >::fromData( _hx_array_data_a82454c0_6,3);
            		}
HXLINE( 211)		return ::polymod::PolymodConfig_obj::modIgnoreFiles;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PolymodConfig_obj,get_modIgnoreFiles,return )


PolymodConfig_obj::PolymodConfig_obj()
{
}

bool PolymodConfig_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"mergeFolder") ) { outValue = ( inCallProp == ::hx::paccAlways ? get_mergeFolder() : mergeFolder ); return true; }
		if (HX_FIELD_EQ(inName,"modPackFile") ) { outValue = ( inCallProp == ::hx::paccAlways ? get_modPackFile() : modPackFile ); return true; }
		if (HX_FIELD_EQ(inName,"modIconFile") ) { outValue = ( inCallProp == ::hx::paccAlways ? get_modIconFile() : modIconFile ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"appendFolder") ) { outValue = ( inCallProp == ::hx::paccAlways ? get_appendFolder() : appendFolder ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"modIgnoreFiles") ) { outValue = ( inCallProp == ::hx::paccAlways ? get_modIgnoreFiles() : modIgnoreFiles ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_mergeFolder") ) { outValue = get_mergeFolder_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_modPackFile") ) { outValue = get_modPackFile_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"modMetadataFile") ) { outValue = ( inCallProp == ::hx::paccAlways ? get_modMetadataFile() : modMetadataFile ); return true; }
		if (HX_FIELD_EQ(inName,"get_modIconFile") ) { outValue = get_modIconFile_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_appendFolder") ) { outValue = get_appendFolder_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_modIgnoreFiles") ) { outValue = get_modIgnoreFiles_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_modMetadataFile") ) { outValue = get_modMetadataFile_dyn(); return true; }
	}
	return false;
}

bool PolymodConfig_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"mergeFolder") ) { mergeFolder=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"modPackFile") ) { modPackFile=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"modIconFile") ) { modIconFile=ioValue.Cast< ::String >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"appendFolder") ) { appendFolder=ioValue.Cast< ::String >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"modIgnoreFiles") ) { modIgnoreFiles=ioValue.Cast< ::Array< ::String > >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"modMetadataFile") ) { modMetadataFile=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *PolymodConfig_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo PolymodConfig_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &PolymodConfig_obj::appendFolder,HX_("appendFolder",28,ac,de,a4)},
	{::hx::fsString,(void *) &PolymodConfig_obj::mergeFolder,HX_("mergeFolder",86,67,fe,44)},
	{::hx::fsString,(void *) &PolymodConfig_obj::modPackFile,HX_("modPackFile",d7,16,7a,a6)},
	{::hx::fsString,(void *) &PolymodConfig_obj::modMetadataFile,HX_("modMetadataFile",6d,43,36,48)},
	{::hx::fsString,(void *) &PolymodConfig_obj::modIconFile,HX_("modIconFile",77,f7,bf,ef)},
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &PolymodConfig_obj::modIgnoreFiles,HX_("modIgnoreFiles",63,c8,67,d9)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void PolymodConfig_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PolymodConfig_obj::appendFolder,"appendFolder");
	HX_MARK_MEMBER_NAME(PolymodConfig_obj::mergeFolder,"mergeFolder");
	HX_MARK_MEMBER_NAME(PolymodConfig_obj::modPackFile,"modPackFile");
	HX_MARK_MEMBER_NAME(PolymodConfig_obj::modMetadataFile,"modMetadataFile");
	HX_MARK_MEMBER_NAME(PolymodConfig_obj::modIconFile,"modIconFile");
	HX_MARK_MEMBER_NAME(PolymodConfig_obj::modIgnoreFiles,"modIgnoreFiles");
};

#ifdef HXCPP_VISIT_ALLOCS
static void PolymodConfig_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PolymodConfig_obj::appendFolder,"appendFolder");
	HX_VISIT_MEMBER_NAME(PolymodConfig_obj::mergeFolder,"mergeFolder");
	HX_VISIT_MEMBER_NAME(PolymodConfig_obj::modPackFile,"modPackFile");
	HX_VISIT_MEMBER_NAME(PolymodConfig_obj::modMetadataFile,"modMetadataFile");
	HX_VISIT_MEMBER_NAME(PolymodConfig_obj::modIconFile,"modIconFile");
	HX_VISIT_MEMBER_NAME(PolymodConfig_obj::modIgnoreFiles,"modIgnoreFiles");
};

#endif

::hx::Class PolymodConfig_obj::__mClass;

static ::String PolymodConfig_obj_sStaticFields[] = {
	HX_("appendFolder",28,ac,de,a4),
	HX_("get_appendFolder",b1,98,7d,a9),
	HX_("mergeFolder",86,67,fe,44),
	HX_("get_mergeFolder",1d,1f,e0,05),
	HX_("modPackFile",d7,16,7a,a6),
	HX_("get_modPackFile",6e,ce,5b,67),
	HX_("modMetadataFile",6d,43,36,48),
	HX_("get_modMetadataFile",84,12,41,d3),
	HX_("modIconFile",77,f7,bf,ef),
	HX_("get_modIconFile",0e,af,a1,b0),
	HX_("modIgnoreFiles",63,c8,67,d9),
	HX_("get_modIgnoreFiles",2c,a9,01,75),
	::String(null())
};

void PolymodConfig_obj::__register()
{
	PolymodConfig_obj _hx_dummy;
	PolymodConfig_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("polymod.PolymodConfig",c0,54,24,a8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PolymodConfig_obj::__GetStatic;
	__mClass->mSetStaticField = &PolymodConfig_obj::__SetStatic;
	__mClass->mMarkFunc = PolymodConfig_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(PolymodConfig_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< PolymodConfig_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = PolymodConfig_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PolymodConfig_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PolymodConfig_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace polymod
