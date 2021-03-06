// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAnalogStick
#include <flixel/input/gamepad/FlxGamepadAnalogStick.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_id_SwitchJoyconRightID
#include <flixel/input/gamepad/id/SwitchJoyconRightID.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_d91f72a2ea0c0e7b_61_boot,"flixel.input.gamepad.id.SwitchJoyconRightID","boot",0xa4bf82fb,"flixel.input.gamepad.id.SwitchJoyconRightID.boot","flixel/input/gamepad/id/SwitchJoyconRightID.hx",61,0x5c4c3f37)
namespace flixel{
namespace input{
namespace gamepad{
namespace id{

void SwitchJoyconRightID_obj::__construct() { }

Dynamic SwitchJoyconRightID_obj::__CreateEmpty() { return new SwitchJoyconRightID_obj; }

void *SwitchJoyconRightID_obj::_hx_vtable = 0;

Dynamic SwitchJoyconRightID_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SwitchJoyconRightID_obj > _hx_result = new SwitchJoyconRightID_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SwitchJoyconRightID_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x44d8f6e7;
}

 ::flixel::input::gamepad::FlxGamepadAnalogStick SwitchJoyconRightID_obj::LEFT_ANALOG_STICK;


SwitchJoyconRightID_obj::SwitchJoyconRightID_obj()
{
}

bool SwitchJoyconRightID_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"LEFT_ANALOG_STICK") ) { outValue = ( LEFT_ANALOG_STICK ); return true; }
	}
	return false;
}

bool SwitchJoyconRightID_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"LEFT_ANALOG_STICK") ) { LEFT_ANALOG_STICK=ioValue.Cast<  ::flixel::input::gamepad::FlxGamepadAnalogStick >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SwitchJoyconRightID_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo SwitchJoyconRightID_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::input::gamepad::FlxGamepadAnalogStick */ ,(void *) &SwitchJoyconRightID_obj::LEFT_ANALOG_STICK,HX_("LEFT_ANALOG_STICK",19,49,58,a5)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void SwitchJoyconRightID_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SwitchJoyconRightID_obj::LEFT_ANALOG_STICK,"LEFT_ANALOG_STICK");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SwitchJoyconRightID_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SwitchJoyconRightID_obj::LEFT_ANALOG_STICK,"LEFT_ANALOG_STICK");
};

#endif

::hx::Class SwitchJoyconRightID_obj::__mClass;

static ::String SwitchJoyconRightID_obj_sStaticFields[] = {
	HX_("LEFT_ANALOG_STICK",19,49,58,a5),
	::String(null())
};

void SwitchJoyconRightID_obj::__register()
{
	SwitchJoyconRightID_obj _hx_dummy;
	SwitchJoyconRightID_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.gamepad.id.SwitchJoyconRightID",45,d6,62,8b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SwitchJoyconRightID_obj::__GetStatic;
	__mClass->mSetStaticField = &SwitchJoyconRightID_obj::__SetStatic;
	__mClass->mMarkFunc = SwitchJoyconRightID_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(SwitchJoyconRightID_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< SwitchJoyconRightID_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SwitchJoyconRightID_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SwitchJoyconRightID_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SwitchJoyconRightID_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void SwitchJoyconRightID_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_d91f72a2ea0c0e7b_61_boot)
HXDLIN(  61)		LEFT_ANALOG_STICK =  ::flixel::input::gamepad::FlxGamepadAnalogStick_obj::__alloc( HX_CTX ,0,1, ::Dynamic(::hx::Anon_obj::Create(4)
            			->setFixed(0,HX_("right",dc,0b,64,e9),25)
            			->setFixed(1,HX_("up",5b,66,00,00),22)
            			->setFixed(2,HX_("down",62,f8,6d,42),23)
            			->setFixed(3,HX_("left",07,08,b0,47),24)));
            	}
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace id
