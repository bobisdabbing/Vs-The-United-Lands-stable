// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_LuaCamera
#include <LuaCamera.h>
#endif
#ifndef INCLUDED_LuaClass
#include <LuaClass.h>
#endif
#ifndef INCLUDED_LuaStorage
#include <LuaStorage.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_8dd0ba9feb9a8366_33_boot,"LuaStorage","boot",0x2e539ffd,"LuaStorage.boot","LuaClass.hx",33,0xe0a4e33e)
HX_LOCAL_STACK_FRAME(_hx_pos_8dd0ba9feb9a8366_34_boot,"LuaStorage","boot",0x2e539ffd,"LuaStorage.boot","LuaClass.hx",34,0xe0a4e33e)
HX_LOCAL_STACK_FRAME(_hx_pos_8dd0ba9feb9a8366_35_boot,"LuaStorage","boot",0x2e539ffd,"LuaStorage.boot","LuaClass.hx",35,0xe0a4e33e)

void LuaStorage_obj::__construct() { }

Dynamic LuaStorage_obj::__CreateEmpty() { return new LuaStorage_obj; }

void *LuaStorage_obj::_hx_vtable = 0;

Dynamic LuaStorage_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LuaStorage_obj > _hx_result = new LuaStorage_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool LuaStorage_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x544afb43;
}

::Array< ::Dynamic> LuaStorage_obj::ListOfCameras;

 ::haxe::ds::StringMap LuaStorage_obj::objectProperties;

 ::haxe::ds::StringMap LuaStorage_obj::objects;


LuaStorage_obj::LuaStorage_obj()
{
}

bool LuaStorage_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"objects") ) { outValue = ( objects ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"ListOfCameras") ) { outValue = ( ListOfCameras ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"objectProperties") ) { outValue = ( objectProperties ); return true; }
	}
	return false;
}

bool LuaStorage_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"objects") ) { objects=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"ListOfCameras") ) { ListOfCameras=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"objectProperties") ) { objectProperties=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *LuaStorage_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo LuaStorage_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &LuaStorage_obj::ListOfCameras,HX_("ListOfCameras",79,49,6d,45)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &LuaStorage_obj::objectProperties,HX_("objectProperties",92,03,7b,b0)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &LuaStorage_obj::objects,HX_("objects",d4,68,4f,82)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void LuaStorage_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LuaStorage_obj::ListOfCameras,"ListOfCameras");
	HX_MARK_MEMBER_NAME(LuaStorage_obj::objectProperties,"objectProperties");
	HX_MARK_MEMBER_NAME(LuaStorage_obj::objects,"objects");
};

#ifdef HXCPP_VISIT_ALLOCS
static void LuaStorage_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LuaStorage_obj::ListOfCameras,"ListOfCameras");
	HX_VISIT_MEMBER_NAME(LuaStorage_obj::objectProperties,"objectProperties");
	HX_VISIT_MEMBER_NAME(LuaStorage_obj::objects,"objects");
};

#endif

::hx::Class LuaStorage_obj::__mClass;

static ::String LuaStorage_obj_sStaticFields[] = {
	HX_("ListOfCameras",79,49,6d,45),
	HX_("objectProperties",92,03,7b,b0),
	HX_("objects",d4,68,4f,82),
	::String(null())
};

void LuaStorage_obj::__register()
{
	LuaStorage_obj _hx_dummy;
	LuaStorage_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("LuaStorage",83,d8,87,3c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LuaStorage_obj::__GetStatic;
	__mClass->mSetStaticField = &LuaStorage_obj::__SetStatic;
	__mClass->mMarkFunc = LuaStorage_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(LuaStorage_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< LuaStorage_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = LuaStorage_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LuaStorage_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LuaStorage_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void LuaStorage_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_8dd0ba9feb9a8366_33_boot)
HXDLIN(  33)		ListOfCameras = ::Array_obj< ::Dynamic>::__new(0);
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_8dd0ba9feb9a8366_34_boot)
HXDLIN(  34)		objectProperties =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_8dd0ba9feb9a8366_35_boot)
HXDLIN(  35)		objects =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
}

