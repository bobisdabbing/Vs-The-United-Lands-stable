// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_HealthBarOption
#include <HealthBarOption.h>
#endif
#ifndef INCLUDED_Option
#include <Option.h>
#endif
#ifndef INCLUDED_OptionsMenu
#include <OptionsMenu.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_346d1b78e8f929a2_1598_new,"HealthBarOption","new",0xa4a09c3e,"HealthBarOption.new","Options.hx",1598,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_346d1b78e8f929a2_1607_left,"HealthBarOption","left",0x66959e69,"HealthBarOption.left","Options.hx",1607,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_346d1b78e8f929a2_1616_right,"HealthBarOption","right",0xd3620b3a,"HealthBarOption.right","Options.hx",1616,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_346d1b78e8f929a2_1623_updateDisplay,"HealthBarOption","updateDisplay",0x21f21c97,"HealthBarOption.updateDisplay","Options.hx",1623,0x9d9a0240)

void HealthBarOption_obj::__construct(::String desc){
            	HX_STACKFRAME(&_hx_pos_346d1b78e8f929a2_1598_new)
HXLINE(1599)		super::__construct();
HXLINE(1600)		if (::OptionsMenu_obj::isInPause) {
HXLINE(1601)			this->description = HX_("This option cannot be toggled in the pause menu.",b4,21,dd,c9);
            		}
            		else {
HXLINE(1603)			this->description = desc;
            		}
            	}

Dynamic HealthBarOption_obj::__CreateEmpty() { return new HealthBarOption_obj; }

void *HealthBarOption_obj::_hx_vtable = 0;

Dynamic HealthBarOption_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HealthBarOption_obj > _hx_result = new HealthBarOption_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool HealthBarOption_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x22014a8c) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x22014a8c;
	} else {
		return inClassId==(int)0x27a70eb9;
	}
}

bool HealthBarOption_obj::left(){
            	HX_STACKFRAME(&_hx_pos_346d1b78e8f929a2_1607_left)
HXLINE(1608)		if (::OptionsMenu_obj::isInPause) {
HXLINE(1609)			return false;
            		}
HXLINE(1610)		::flixel::FlxG_obj::save->data->__SetField(HX_("healthBar",97,8a,92,42),!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("healthBar",97,8a,92,42),::hx::paccDynamic)) )),::hx::paccDynamic);
HXLINE(1611)		this->display = this->updateDisplay();
HXLINE(1612)		return true;
            	}


bool HealthBarOption_obj::right(){
            	HX_STACKFRAME(&_hx_pos_346d1b78e8f929a2_1616_right)
HXLINE(1617)		this->left();
HXLINE(1618)		return true;
            	}


::String HealthBarOption_obj::updateDisplay(){
            	HX_STACKFRAME(&_hx_pos_346d1b78e8f929a2_1623_updateDisplay)
HXDLIN(1623)		::String _hx_tmp;
HXDLIN(1623)		if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("healthBar",97,8a,92,42),::hx::paccDynamic)) )) {
HXDLIN(1623)			_hx_tmp = HX_("Enabled",61,2c,82,4b);
            		}
            		else {
HXDLIN(1623)			_hx_tmp = HX_("Disabled",9c,fd,b5,55);
            		}
HXDLIN(1623)		return ((HX_("Health Bar: < ",59,98,71,d2) + _hx_tmp) + HX_(" >",1e,1c,00,00));
            	}



::hx::ObjectPtr< HealthBarOption_obj > HealthBarOption_obj::__new(::String desc) {
	::hx::ObjectPtr< HealthBarOption_obj > __this = new HealthBarOption_obj();
	__this->__construct(desc);
	return __this;
}

::hx::ObjectPtr< HealthBarOption_obj > HealthBarOption_obj::__alloc(::hx::Ctx *_hx_ctx,::String desc) {
	HealthBarOption_obj *__this = (HealthBarOption_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HealthBarOption_obj), true, "HealthBarOption"));
	*(void **)__this = HealthBarOption_obj::_hx_vtable;
	__this->__construct(desc);
	return __this;
}

HealthBarOption_obj::HealthBarOption_obj()
{
}

::hx::Val HealthBarOption_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *HealthBarOption_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *HealthBarOption_obj_sStaticStorageInfo = 0;
#endif

static ::String HealthBarOption_obj_sMemberFields[] = {
	HX_("left",07,08,b0,47),
	HX_("right",dc,0b,64,e9),
	HX_("updateDisplay",39,8f,b8,86),
	::String(null()) };

::hx::Class HealthBarOption_obj::__mClass;

void HealthBarOption_obj::__register()
{
	HealthBarOption_obj _hx_dummy;
	HealthBarOption_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("HealthBarOption",4c,65,da,55);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HealthBarOption_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HealthBarOption_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HealthBarOption_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HealthBarOption_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

