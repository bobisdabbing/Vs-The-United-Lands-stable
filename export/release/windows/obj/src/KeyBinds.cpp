// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_KeyBinds
#include <KeyBinds.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_256205a70c995989_42_keyCheck,"KeyBinds","keyCheck",0x95182fe0,"KeyBinds.keyCheck","KeyBinds.hx",42,0xfb6ef907)
HX_LOCAL_STACK_FRAME(_hx_pos_256205a70c995989_14_boot,"KeyBinds","boot",0xebe6cde9,"KeyBinds.boot","KeyBinds.hx",14,0xfb6ef907)

void KeyBinds_obj::__construct() { }

Dynamic KeyBinds_obj::__CreateEmpty() { return new KeyBinds_obj; }

void *KeyBinds_obj::_hx_vtable = 0;

Dynamic KeyBinds_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< KeyBinds_obj > _hx_result = new KeyBinds_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool KeyBinds_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2cac64d7;
}

bool KeyBinds_obj::gamepad;

void KeyBinds_obj::keyCheck(){
            	HX_STACKFRAME(&_hx_pos_256205a70c995989_42_keyCheck)
HXLINE(  43)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("upBind",b8,51,92,70),::hx::paccDynamic) )) {
HXLINE(  45)			::flixel::FlxG_obj::save->data->__SetField(HX_("upBind",b8,51,92,70),HX_("W",57,00,00,00),::hx::paccDynamic);
            		}
HXLINE(  48)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("downBind",3f,f3,fe,75),::hx::paccDynamic) )) {
HXLINE(  50)			::flixel::FlxG_obj::save->data->__SetField(HX_("downBind",3f,f3,fe,75),HX_("S",53,00,00,00),::hx::paccDynamic);
            		}
HXLINE(  53)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("leftBind",64,39,12,48),::hx::paccDynamic) )) {
HXLINE(  55)			::flixel::FlxG_obj::save->data->__SetField(HX_("leftBind",64,39,12,48),HX_("A",41,00,00,00),::hx::paccDynamic);
            		}
HXLINE(  58)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("rightBind",b9,4b,dd,ab),::hx::paccDynamic) )) {
HXLINE(  60)			::flixel::FlxG_obj::save->data->__SetField(HX_("rightBind",b9,4b,dd,ab),HX_("D",44,00,00,00),::hx::paccDynamic);
            		}
HXLINE(  64)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("gpupBind",a1,30,42,a5),::hx::paccDynamic) )) {
HXLINE(  66)			::flixel::FlxG_obj::save->data->__SetField(HX_("gpupBind",a1,30,42,a5),HX_("DPAD_UP",6b,00,87,a2),::hx::paccDynamic);
            		}
HXLINE(  69)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("gpdownBind",68,1e,93,1d),::hx::paccDynamic) )) {
HXLINE(  71)			::flixel::FlxG_obj::save->data->__SetField(HX_("gpdownBind",68,1e,93,1d),HX_("DPAD_DOWN",72,1a,5b,87),::hx::paccDynamic);
            		}
HXLINE(  74)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("gpleftBind",8d,64,a6,ef),::hx::paccDynamic) )) {
HXLINE(  76)			::flixel::FlxG_obj::save->data->__SetField(HX_("gpleftBind",8d,64,a6,ef),HX_("DPAD_LEFT",17,2a,9d,8c),::hx::paccDynamic);
            		}
HXLINE(  79)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("gprightBind",70,e4,ee,a5),::hx::paccDynamic) )) {
HXLINE(  81)			::flixel::FlxG_obj::save->data->__SetField(HX_("gprightBind",70,e4,ee,a5),HX_("DPAD_RIGHT",ac,b7,f4,f3),::hx::paccDynamic);
            		}
HXLINE(  84)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("pauseBind",d3,ab,7d,45),::hx::paccDynamic) )) {
HXLINE(  86)			::flixel::FlxG_obj::save->data->__SetField(HX_("pauseBind",d3,ab,7d,45),HX_("ENTER",f8,a4,74,ee),::hx::paccDynamic);
            		}
HXLINE(  89)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("gppauseBind",8a,44,8f,3f),::hx::paccDynamic) )) {
HXLINE(  91)			::flixel::FlxG_obj::save->data->__SetField(HX_("gppauseBind",8a,44,8f,3f),HX_("START",42,ac,f9,01),::hx::paccDynamic);
            		}
HXLINE(  94)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("resetBind",2c,ff,02,87),::hx::paccDynamic) )) {
HXLINE(  96)			::flixel::FlxG_obj::save->data->__SetField(HX_("resetBind",2c,ff,02,87),HX_("R",52,00,00,00),::hx::paccDynamic);
            		}
HXLINE(  99)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("gpresetBind",e3,97,14,81),::hx::paccDynamic) )) {
HXLINE( 101)			::flixel::FlxG_obj::save->data->__SetField(HX_("gpresetBind",e3,97,14,81),HX_("SELECT",fc,c6,b5,1c),::hx::paccDynamic);
            		}
HXLINE( 105)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("muteBind",36,71,98,10),::hx::paccDynamic) )) {
HXLINE( 107)			::flixel::FlxG_obj::save->data->__SetField(HX_("muteBind",36,71,98,10),HX_("ZERO",28,d7,b1,3b),::hx::paccDynamic);
            		}
HXLINE( 110)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("volumeUpKeys",69,bb,f5,23),::hx::paccDynamic) )) {
HXLINE( 112)			::flixel::FlxG_obj::save->data->__SetField(HX_("volumeUpKeys",69,bb,f5,23),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("PLUS",5a,07,1b,35)),::hx::paccDynamic);
            		}
HXLINE( 115)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("volumeDownKeys",70,2f,58,0b),::hx::paccDynamic) )) {
HXLINE( 117)			::flixel::FlxG_obj::save->data->__SetField(HX_("volumeDownKeys",70,2f,58,0b),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("MINUS",50,b8,56,86)),::hx::paccDynamic);
            		}
HXLINE( 120)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("fullscreenBind",98,95,ed,45),::hx::paccDynamic) )) {
HXLINE( 122)			::flixel::FlxG_obj::save->data->__SetField(HX_("fullscreenBind",98,95,ed,45),HX_("F",46,00,00,00),::hx::paccDynamic);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(KeyBinds_obj,keyCheck,(void))


KeyBinds_obj::KeyBinds_obj()
{
}

bool KeyBinds_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"gamepad") ) { outValue = ( gamepad ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"keyCheck") ) { outValue = keyCheck_dyn(); return true; }
	}
	return false;
}

bool KeyBinds_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"gamepad") ) { gamepad=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *KeyBinds_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo KeyBinds_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &KeyBinds_obj::gamepad,HX_("gamepad",a1,e0,85,89)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void KeyBinds_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(KeyBinds_obj::gamepad,"gamepad");
};

#ifdef HXCPP_VISIT_ALLOCS
static void KeyBinds_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(KeyBinds_obj::gamepad,"gamepad");
};

#endif

::hx::Class KeyBinds_obj::__mClass;

static ::String KeyBinds_obj_sStaticFields[] = {
	HX_("gamepad",a1,e0,85,89),
	HX_("keyCheck",a9,3e,20,8a),
	::String(null())
};

void KeyBinds_obj::__register()
{
	KeyBinds_obj _hx_dummy;
	KeyBinds_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("KeyBinds",17,72,1b,d1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &KeyBinds_obj::__GetStatic;
	__mClass->mSetStaticField = &KeyBinds_obj::__SetStatic;
	__mClass->mMarkFunc = KeyBinds_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(KeyBinds_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< KeyBinds_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = KeyBinds_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = KeyBinds_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = KeyBinds_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void KeyBinds_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_256205a70c995989_14_boot)
HXDLIN(  14)		gamepad = false;
            	}
}

