// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Option
#include <Option.h>
#endif
#ifndef INCLUDED_RainbowFPSOption
#include <RainbowFPSOption.h>
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
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7861c1e414cf422e_1203_new,"RainbowFPSOption","new",0xb4ce913a,"RainbowFPSOption.new","Options.hx",1203,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_7861c1e414cf422e_1209_left,"RainbowFPSOption","left",0x7e9e05ed,"RainbowFPSOption.left","Options.hx",1209,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_7861c1e414cf422e_1216_right,"RainbowFPSOption","right",0xc2b43736,"RainbowFPSOption.right","Options.hx",1216,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_7861c1e414cf422e_1223_updateDisplay,"RainbowFPSOption","updateDisplay",0xe58aa493,"RainbowFPSOption.updateDisplay","Options.hx",1223,0x9d9a0240)

void RainbowFPSOption_obj::__construct(::String desc){
            	HX_STACKFRAME(&_hx_pos_7861c1e414cf422e_1203_new)
HXLINE(1204)		super::__construct();
HXLINE(1205)		this->description = desc;
            	}

Dynamic RainbowFPSOption_obj::__CreateEmpty() { return new RainbowFPSOption_obj; }

void *RainbowFPSOption_obj::_hx_vtable = 0;

Dynamic RainbowFPSOption_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< RainbowFPSOption_obj > _hx_result = new RainbowFPSOption_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool RainbowFPSOption_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x27a70eb9) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x27a70eb9;
	} else {
		return inClassId==(int)0x7b2bfcf0;
	}
}

bool RainbowFPSOption_obj::left(){
            	HX_STACKFRAME(&_hx_pos_7861c1e414cf422e_1209_left)
HXLINE(1210)		::flixel::FlxG_obj::save->data->__SetField(HX_("fpsRain",dd,e5,17,c7),!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("fpsRain",dd,e5,17,c7),::hx::paccDynamic)) )),::hx::paccDynamic);
HXLINE(1211)		::hx::TCast<  ::Main >::cast(::openfl::Lib_obj::get_current()->getChildAt(0))->changeFPSColor(-1);
HXLINE(1212)		return true;
            	}


bool RainbowFPSOption_obj::right(){
            	HX_STACKFRAME(&_hx_pos_7861c1e414cf422e_1216_right)
HXLINE(1217)		this->left();
HXLINE(1218)		return true;
            	}


::String RainbowFPSOption_obj::updateDisplay(){
            	HX_STACKFRAME(&_hx_pos_7861c1e414cf422e_1223_updateDisplay)
HXDLIN(1223)		::String _hx_tmp;
HXDLIN(1223)		if (!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("fpsRain",dd,e5,17,c7),::hx::paccDynamic)) ))) {
HXDLIN(1223)			_hx_tmp = HX_("off",6f,93,54,00);
            		}
            		else {
HXDLIN(1223)			_hx_tmp = HX_("on",1f,61,00,00);
            		}
HXDLIN(1223)		return ((HX_("FPS Rainbow: < ",c9,69,67,9c) + _hx_tmp) + HX_(" >",1e,1c,00,00));
            	}



::hx::ObjectPtr< RainbowFPSOption_obj > RainbowFPSOption_obj::__new(::String desc) {
	::hx::ObjectPtr< RainbowFPSOption_obj > __this = new RainbowFPSOption_obj();
	__this->__construct(desc);
	return __this;
}

::hx::ObjectPtr< RainbowFPSOption_obj > RainbowFPSOption_obj::__alloc(::hx::Ctx *_hx_ctx,::String desc) {
	RainbowFPSOption_obj *__this = (RainbowFPSOption_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RainbowFPSOption_obj), true, "RainbowFPSOption"));
	*(void **)__this = RainbowFPSOption_obj::_hx_vtable;
	__this->__construct(desc);
	return __this;
}

RainbowFPSOption_obj::RainbowFPSOption_obj()
{
}

::hx::Val RainbowFPSOption_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { return ::hx::Val( left_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { return ::hx::Val( right_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"updateDisplay") ) { return ::hx::Val( updateDisplay_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *RainbowFPSOption_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *RainbowFPSOption_obj_sStaticStorageInfo = 0;
#endif

static ::String RainbowFPSOption_obj_sMemberFields[] = {
	HX_("left",07,08,b0,47),
	HX_("right",dc,0b,64,e9),
	HX_("updateDisplay",39,8f,b8,86),
	::String(null()) };

::hx::Class RainbowFPSOption_obj::__mClass;

void RainbowFPSOption_obj::__register()
{
	RainbowFPSOption_obj _hx_dummy;
	RainbowFPSOption_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("RainbowFPSOption",48,2c,33,ea);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(RainbowFPSOption_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< RainbowFPSOption_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RainbowFPSOption_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RainbowFPSOption_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

