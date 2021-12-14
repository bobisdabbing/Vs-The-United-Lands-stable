// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_CoolUtil
#include <CoolUtil.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_d6b1695b4ccb37a6_15_difficultyFromInt,"CoolUtil","difficultyFromInt",0xd0410307,"CoolUtil.difficultyFromInt","CoolUtil.hx",15,0x9f143813)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b1695b4ccb37a6_19_coolTextFile,"CoolUtil","coolTextFile",0xa6086875,"CoolUtil.coolTextFile","CoolUtil.hx",19,0x9f143813)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b1695b4ccb37a6_31_coolStringFile,"CoolUtil","coolStringFile",0xc0e9a999,"CoolUtil.coolStringFile","CoolUtil.hx",31,0x9f143813)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b1695b4ccb37a6_43_numberArray,"CoolUtil","numberArray",0x9e0008ad,"CoolUtil.numberArray","CoolUtil.hx",43,0x9f143813)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b1695b4ccb37a6_9_boot,"CoolUtil","boot",0xb2a2e7f5,"CoolUtil.boot","CoolUtil.hx",9,0x9f143813)
static const ::String _hx_array_data_c96d938b_8[] = {
	HX_("Easy",22,b8,e5,2d),HX_("Normal",47,e6,fd,64),HX_("Hard",0b,5b,e1,2f),
};
HX_LOCAL_STACK_FRAME(_hx_pos_d6b1695b4ccb37a6_11_boot,"CoolUtil","boot",0xb2a2e7f5,"CoolUtil.boot","CoolUtil.hx",11,0x9f143813)

void CoolUtil_obj::__construct() { }

Dynamic CoolUtil_obj::__CreateEmpty() { return new CoolUtil_obj; }

void *CoolUtil_obj::_hx_vtable = 0;

Dynamic CoolUtil_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CoolUtil_obj > _hx_result = new CoolUtil_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CoolUtil_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x24fe864b;
}

::Array< ::String > CoolUtil_obj::difficultyArray;

Float CoolUtil_obj::daPixelZoom;

::String CoolUtil_obj::difficultyFromInt(int difficulty){
            	HX_STACKFRAME(&_hx_pos_d6b1695b4ccb37a6_15_difficultyFromInt)
HXDLIN(  15)		return ::CoolUtil_obj::difficultyArray->__get(difficulty);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CoolUtil_obj,difficultyFromInt,return )

::Array< ::String > CoolUtil_obj::coolTextFile(::String path){
            	HX_STACKFRAME(&_hx_pos_d6b1695b4ccb37a6_19_coolTextFile)
HXLINE(  20)		::Array< ::String > daList = ::StringTools_obj::trim(::openfl::utils::Assets_obj::getText(path)).split(HX_("\n",0a,00,00,00));
HXLINE(  22)		{
HXLINE(  22)			int _g = 0;
HXDLIN(  22)			int _g1 = daList->length;
HXDLIN(  22)			while((_g < _g1)){
HXLINE(  22)				_g = (_g + 1);
HXDLIN(  22)				int i = (_g - 1);
HXLINE(  24)				daList[i] = ::StringTools_obj::trim(daList->__get(i));
            			}
            		}
HXLINE(  27)		return daList;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CoolUtil_obj,coolTextFile,return )

::Array< ::String > CoolUtil_obj::coolStringFile(::String path){
            	HX_STACKFRAME(&_hx_pos_d6b1695b4ccb37a6_31_coolStringFile)
HXLINE(  32)		::Array< ::String > daList = ::StringTools_obj::trim(path).split(HX_("\n",0a,00,00,00));
HXLINE(  34)		{
HXLINE(  34)			int _g = 0;
HXDLIN(  34)			int _g1 = daList->length;
HXDLIN(  34)			while((_g < _g1)){
HXLINE(  34)				_g = (_g + 1);
HXDLIN(  34)				int i = (_g - 1);
HXLINE(  36)				daList[i] = ::StringTools_obj::trim(daList->__get(i));
            			}
            		}
HXLINE(  39)		return daList;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CoolUtil_obj,coolStringFile,return )

::Array< int > CoolUtil_obj::numberArray(int max, ::Dynamic __o_min){
            		 ::Dynamic min = __o_min;
            		if (::hx::IsNull(__o_min)) min = 0;
            	HX_STACKFRAME(&_hx_pos_d6b1695b4ccb37a6_43_numberArray)
HXLINE(  44)		::Array< int > dumbArray = ::Array_obj< int >::__new(0);
HXLINE(  45)		{
HXLINE(  45)			int _g = ( (int)(min) );
HXDLIN(  45)			int _g1 = max;
HXDLIN(  45)			while((_g < _g1)){
HXLINE(  45)				_g = (_g + 1);
HXDLIN(  45)				int i = (_g - 1);
HXLINE(  47)				dumbArray->push(i);
            			}
            		}
HXLINE(  49)		return dumbArray;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CoolUtil_obj,numberArray,return )


CoolUtil_obj::CoolUtil_obj()
{
}

bool CoolUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"daPixelZoom") ) { outValue = ( daPixelZoom ); return true; }
		if (HX_FIELD_EQ(inName,"numberArray") ) { outValue = numberArray_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"coolTextFile") ) { outValue = coolTextFile_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"coolStringFile") ) { outValue = coolStringFile_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"difficultyArray") ) { outValue = ( difficultyArray ); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"difficultyFromInt") ) { outValue = difficultyFromInt_dyn(); return true; }
	}
	return false;
}

bool CoolUtil_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"daPixelZoom") ) { daPixelZoom=ioValue.Cast< Float >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"difficultyArray") ) { difficultyArray=ioValue.Cast< ::Array< ::String > >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CoolUtil_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo CoolUtil_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &CoolUtil_obj::difficultyArray,HX_("difficultyArray",5e,19,a2,bb)},
	{::hx::fsFloat,(void *) &CoolUtil_obj::daPixelZoom,HX_("daPixelZoom",7c,81,6e,df)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void CoolUtil_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CoolUtil_obj::difficultyArray,"difficultyArray");
	HX_MARK_MEMBER_NAME(CoolUtil_obj::daPixelZoom,"daPixelZoom");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CoolUtil_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CoolUtil_obj::difficultyArray,"difficultyArray");
	HX_VISIT_MEMBER_NAME(CoolUtil_obj::daPixelZoom,"daPixelZoom");
};

#endif

::hx::Class CoolUtil_obj::__mClass;

static ::String CoolUtil_obj_sStaticFields[] = {
	HX_("difficultyArray",5e,19,a2,bb),
	HX_("daPixelZoom",7c,81,6e,df),
	HX_("difficultyFromInt",aa,c4,e3,98),
	HX_("coolTextFile",b2,09,03,cc),
	HX_("coolStringFile",16,d4,bc,53),
	HX_("numberArray",10,1e,18,ad),
	::String(null())
};

void CoolUtil_obj::__register()
{
	CoolUtil_obj _hx_dummy;
	CoolUtil_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("CoolUtil",8b,93,6d,c9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CoolUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &CoolUtil_obj::__SetStatic;
	__mClass->mMarkFunc = CoolUtil_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CoolUtil_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CoolUtil_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CoolUtil_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CoolUtil_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CoolUtil_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CoolUtil_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_d6b1695b4ccb37a6_9_boot)
HXDLIN(   9)		difficultyArray = ::Array_obj< ::String >::fromData( _hx_array_data_c96d938b_8,3);
            	}
{
            	HX_STACKFRAME(&_hx_pos_d6b1695b4ccb37a6_11_boot)
HXDLIN(  11)		daPixelZoom = ((Float)6);
            	}
}

