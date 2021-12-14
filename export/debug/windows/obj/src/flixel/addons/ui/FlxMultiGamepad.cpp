// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_flixel_addons_ui_FlxBaseMultiInput
#include <flixel/addons/ui/FlxBaseMultiInput.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxMultiGamepad
#include <flixel/addons/ui/FlxMultiGamepad.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepad
#include <flixel/input/gamepad/FlxGamepad.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadButton
#include <flixel/input/gamepad/FlxGamepadButton.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8bad450b97371a8c_15_new,"flixel.addons.ui.FlxMultiGamepad","new",0x575cbdfb,"flixel.addons.ui.FlxMultiGamepad.new","flixel/addons/ui/FlxMultiGamepad.hx",15,0xf1b907f6)
HX_LOCAL_STACK_FRAME(_hx_pos_8bad450b97371a8c_24_destroy,"flixel.addons.ui.FlxMultiGamepad","destroy",0xd6258415,"flixel.addons.ui.FlxMultiGamepad.destroy","flixel/addons/ui/FlxMultiGamepad.hx",24,0xf1b907f6)
HX_LOCAL_STACK_FRAME(_hx_pos_8bad450b97371a8c_30_checkJustPressed,"flixel.addons.ui.FlxMultiGamepad","checkJustPressed",0xe0a01f73,"flixel.addons.ui.FlxMultiGamepad.checkJustPressed","flixel/addons/ui/FlxMultiGamepad.hx",30,0xf1b907f6)
HX_LOCAL_STACK_FRAME(_hx_pos_8bad450b97371a8c_37_checkJustReleased,"flixel.addons.ui.FlxMultiGamepad","checkJustReleased",0xb25172cc,"flixel.addons.ui.FlxMultiGamepad.checkJustReleased","flixel/addons/ui/FlxMultiGamepad.hx",37,0xf1b907f6)
HX_LOCAL_STACK_FRAME(_hx_pos_8bad450b97371a8c_44_checkPressed,"flixel.addons.ui.FlxMultiGamepad","checkPressed",0x0d7591bf,"flixel.addons.ui.FlxMultiGamepad.checkPressed","flixel/addons/ui/FlxMultiGamepad.hx",44,0xf1b907f6)
HX_LOCAL_STACK_FRAME(_hx_pos_8bad450b97371a8c_51_checkCombos,"flixel.addons.ui.FlxMultiGamepad","checkCombos",0x7ea06fe8,"flixel.addons.ui.FlxMultiGamepad.checkCombos","flixel/addons/ui/FlxMultiGamepad.hx",51,0xf1b907f6)
HX_LOCAL_STACK_FRAME(_hx_pos_8bad450b97371a8c_58_checkForbiddens,"flixel.addons.ui.FlxMultiGamepad","checkForbiddens",0xf615a25d,"flixel.addons.ui.FlxMultiGamepad.checkForbiddens","flixel/addons/ui/FlxMultiGamepad.hx",58,0xf1b907f6)
namespace flixel{
namespace addons{
namespace ui{

void FlxMultiGamepad_obj::__construct( ::flixel::input::gamepad::FlxGamepad Gamepad,int Input,::Array< int > Combos,::Array< int > Forbiddens){
            	HX_STACKFRAME(&_hx_pos_8bad450b97371a8c_15_new)
HXLINE(  16)		super::__construct();
HXLINE(  17)		this->input = Input;
HXLINE(  18)		this->gamepad = Gamepad;
HXLINE(  19)		this->combos = Combos;
HXLINE(  20)		this->forbiddens = Forbiddens;
            	}

Dynamic FlxMultiGamepad_obj::__CreateEmpty() { return new FlxMultiGamepad_obj; }

void *FlxMultiGamepad_obj::_hx_vtable = 0;

Dynamic FlxMultiGamepad_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxMultiGamepad_obj > _hx_result = new FlxMultiGamepad_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool FlxMultiGamepad_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c2c85f1) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2c2c85f1;
	} else {
		return inClassId==(int)0x60c98233;
	}
}

void FlxMultiGamepad_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_8bad450b97371a8c_24_destroy)
HXLINE(  25)		this->super::destroy();
HXLINE(  26)		this->gamepad = null();
            	}


bool FlxMultiGamepad_obj::checkJustPressed(){
            	HX_STACKFRAME(&_hx_pos_8bad450b97371a8c_30_checkJustPressed)
HXLINE(  31)		if (::hx::IsNull( this->gamepad )) {
HXLINE(  32)			return false;
            		}
HXLINE(  33)		 ::flixel::input::gamepad::FlxGamepad _this = this->gamepad;
HXDLIN(  33)		int ID = this->input;
HXDLIN(  33)		int Status = 2;
HXDLIN(  33)		switch((int)(ID)){
            			case (int)-2: {
HXLINE(  33)				return _this->anyButton(Status);
            			}
            			break;
            			case (int)-1: {
HXLINE(  33)				return !(_this->anyButton(Status));
            			}
            			break;
            			default:{
HXLINE(  33)				int RawID = _this->mapping->getRawID(ID);
HXDLIN(  33)				 ::flixel::input::gamepad::FlxGamepadButton button = _this->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN(  33)				if (::hx::IsNotNull( button )) {
HXLINE(  33)					return button->hasState(Status);
            				}
            				else {
HXLINE(  33)					return false;
            				}
            			}
            		}
HXDLIN(  33)		return false;
            	}


bool FlxMultiGamepad_obj::checkJustReleased(){
            	HX_STACKFRAME(&_hx_pos_8bad450b97371a8c_37_checkJustReleased)
HXLINE(  38)		if (::hx::IsNull( this->gamepad )) {
HXLINE(  39)			return false;
            		}
HXLINE(  40)		 ::flixel::input::gamepad::FlxGamepad _this = this->gamepad;
HXDLIN(  40)		int ID = this->input;
HXDLIN(  40)		int Status = -1;
HXDLIN(  40)		switch((int)(ID)){
            			case (int)-2: {
HXLINE(  40)				return _this->anyButton(Status);
            			}
            			break;
            			case (int)-1: {
HXLINE(  40)				return !(_this->anyButton(Status));
            			}
            			break;
            			default:{
HXLINE(  40)				int RawID = _this->mapping->getRawID(ID);
HXDLIN(  40)				 ::flixel::input::gamepad::FlxGamepadButton button = _this->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN(  40)				if (::hx::IsNotNull( button )) {
HXLINE(  40)					return button->hasState(Status);
            				}
            				else {
HXLINE(  40)					return false;
            				}
            			}
            		}
HXDLIN(  40)		return false;
            	}


bool FlxMultiGamepad_obj::checkPressed(){
            	HX_STACKFRAME(&_hx_pos_8bad450b97371a8c_44_checkPressed)
HXLINE(  45)		if (::hx::IsNull( this->gamepad )) {
HXLINE(  46)			return false;
            		}
HXLINE(  47)		 ::flixel::input::gamepad::FlxGamepad _this = this->gamepad;
HXDLIN(  47)		int ID = this->input;
HXDLIN(  47)		int Status = 1;
HXDLIN(  47)		switch((int)(ID)){
            			case (int)-2: {
HXLINE(  47)				return _this->anyButton(Status);
            			}
            			break;
            			case (int)-1: {
HXLINE(  47)				return !(_this->anyButton(Status));
            			}
            			break;
            			default:{
HXLINE(  47)				int RawID = _this->mapping->getRawID(ID);
HXDLIN(  47)				 ::flixel::input::gamepad::FlxGamepadButton button = _this->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN(  47)				if (::hx::IsNotNull( button )) {
HXLINE(  47)					return button->hasState(Status);
            				}
            				else {
HXLINE(  47)					return false;
            				}
            			}
            		}
HXDLIN(  47)		return false;
            	}


bool FlxMultiGamepad_obj::checkCombos(bool value){
            	HX_STACKFRAME(&_hx_pos_8bad450b97371a8c_51_checkCombos)
HXLINE(  52)		if (::hx::IsNull( this->gamepad )) {
HXLINE(  53)			return false;
            		}
HXLINE(  54)		return (this->gamepad->checkButtonArrayState(this->combos,1) == value);
            	}


bool FlxMultiGamepad_obj::checkForbiddens(bool value){
            	HX_STACKFRAME(&_hx_pos_8bad450b97371a8c_58_checkForbiddens)
HXLINE(  59)		if (::hx::IsNull( this->gamepad )) {
HXLINE(  60)			return false;
            		}
HXLINE(  61)		return (this->gamepad->checkButtonArrayState(this->forbiddens,1) == value);
            	}



::hx::ObjectPtr< FlxMultiGamepad_obj > FlxMultiGamepad_obj::__new( ::flixel::input::gamepad::FlxGamepad Gamepad,int Input,::Array< int > Combos,::Array< int > Forbiddens) {
	::hx::ObjectPtr< FlxMultiGamepad_obj > __this = new FlxMultiGamepad_obj();
	__this->__construct(Gamepad,Input,Combos,Forbiddens);
	return __this;
}

::hx::ObjectPtr< FlxMultiGamepad_obj > FlxMultiGamepad_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::input::gamepad::FlxGamepad Gamepad,int Input,::Array< int > Combos,::Array< int > Forbiddens) {
	FlxMultiGamepad_obj *__this = (FlxMultiGamepad_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxMultiGamepad_obj), true, "flixel.addons.ui.FlxMultiGamepad"));
	*(void **)__this = FlxMultiGamepad_obj::_hx_vtable;
	__this->__construct(Gamepad,Input,Combos,Forbiddens);
	return __this;
}

FlxMultiGamepad_obj::FlxMultiGamepad_obj()
{
}

void FlxMultiGamepad_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxMultiGamepad);
	HX_MARK_MEMBER_NAME(gamepad,"gamepad");
	 ::flixel::addons::ui::FlxBaseMultiInput_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxMultiGamepad_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gamepad,"gamepad");
	 ::flixel::addons::ui::FlxBaseMultiInput_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxMultiGamepad_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"gamepad") ) { return ::hx::Val( gamepad ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"checkCombos") ) { return ::hx::Val( checkCombos_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"checkPressed") ) { return ::hx::Val( checkPressed_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"checkForbiddens") ) { return ::hx::Val( checkForbiddens_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"checkJustPressed") ) { return ::hx::Val( checkJustPressed_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"checkJustReleased") ) { return ::hx::Val( checkJustReleased_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxMultiGamepad_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"gamepad") ) { gamepad=inValue.Cast<  ::flixel::input::gamepad::FlxGamepad >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxMultiGamepad_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("gamepad",a1,e0,85,89));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxMultiGamepad_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::input::gamepad::FlxGamepad */ ,(int)offsetof(FlxMultiGamepad_obj,gamepad),HX_("gamepad",a1,e0,85,89)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxMultiGamepad_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxMultiGamepad_obj_sMemberFields[] = {
	HX_("gamepad",a1,e0,85,89),
	HX_("destroy",fa,2c,86,24),
	HX_("checkJustPressed",ee,b1,87,a7),
	HX_("checkJustReleased",f1,0b,0a,f6),
	HX_("checkPressed",ba,8a,6d,27),
	HX_("checkCombos",4d,ef,37,a9),
	HX_("checkForbiddens",42,38,51,c3),
	::String(null()) };

::hx::Class FlxMultiGamepad_obj::__mClass;

void FlxMultiGamepad_obj::__register()
{
	FlxMultiGamepad_obj _hx_dummy;
	FlxMultiGamepad_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.ui.FlxMultiGamepad",89,a4,19,9f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxMultiGamepad_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxMultiGamepad_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxMultiGamepad_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxMultiGamepad_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
