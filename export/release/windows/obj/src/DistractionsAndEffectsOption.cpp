// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_DistractionsAndEffectsOption
#include <DistractionsAndEffectsOption.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_bee9e2404fe2fe77_765_new,"DistractionsAndEffectsOption","new",0x025cdf63,"DistractionsAndEffectsOption.new","Options.hx",765,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_bee9e2404fe2fe77_774_left,"DistractionsAndEffectsOption","left",0x0d941ba4,"DistractionsAndEffectsOption.left","Options.hx",774,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_bee9e2404fe2fe77_783_right,"DistractionsAndEffectsOption","right",0x4b11219f,"DistractionsAndEffectsOption.right","Options.hx",783,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_bee9e2404fe2fe77_790_updateDisplay,"DistractionsAndEffectsOption","updateDisplay",0x58e59ffc,"DistractionsAndEffectsOption.updateDisplay","Options.hx",790,0x9d9a0240)

void DistractionsAndEffectsOption_obj::__construct(::String desc){
            	HX_STACKFRAME(&_hx_pos_bee9e2404fe2fe77_765_new)
HXLINE( 766)		super::__construct();
HXLINE( 767)		if (::OptionsMenu_obj::isInPause) {
HXLINE( 768)			this->description = HX_("This option cannot be toggled in the pause menu.",b4,21,dd,c9);
            		}
            		else {
HXLINE( 770)			this->description = desc;
            		}
            	}

Dynamic DistractionsAndEffectsOption_obj::__CreateEmpty() { return new DistractionsAndEffectsOption_obj; }

void *DistractionsAndEffectsOption_obj::_hx_vtable = 0;

Dynamic DistractionsAndEffectsOption_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DistractionsAndEffectsOption_obj > _hx_result = new DistractionsAndEffectsOption_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool DistractionsAndEffectsOption_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x055912dd) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x055912dd;
	} else {
		return inClassId==(int)0x27a70eb9;
	}
}

bool DistractionsAndEffectsOption_obj::left(){
            	HX_STACKFRAME(&_hx_pos_bee9e2404fe2fe77_774_left)
HXLINE( 775)		if (::OptionsMenu_obj::isInPause) {
HXLINE( 776)			return false;
            		}
HXLINE( 777)		::flixel::FlxG_obj::save->data->__SetField(HX_("distractions",31,13,7d,60),!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("distractions",31,13,7d,60),::hx::paccDynamic)) )),::hx::paccDynamic);
HXLINE( 778)		this->display = this->updateDisplay();
HXLINE( 779)		return true;
            	}


bool DistractionsAndEffectsOption_obj::right(){
            	HX_STACKFRAME(&_hx_pos_bee9e2404fe2fe77_783_right)
HXLINE( 784)		this->left();
HXLINE( 785)		return true;
            	}


::String DistractionsAndEffectsOption_obj::updateDisplay(){
            	HX_STACKFRAME(&_hx_pos_bee9e2404fe2fe77_790_updateDisplay)
HXDLIN( 790)		::String _hx_tmp;
HXDLIN( 790)		if (!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("distractions",31,13,7d,60),::hx::paccDynamic)) ))) {
HXDLIN( 790)			_hx_tmp = HX_("off",6f,93,54,00);
            		}
            		else {
HXDLIN( 790)			_hx_tmp = HX_("on",1f,61,00,00);
            		}
HXDLIN( 790)		return ((HX_("Distractions: < ",5b,b8,0e,f7) + _hx_tmp) + HX_(" >",1e,1c,00,00));
            	}



::hx::ObjectPtr< DistractionsAndEffectsOption_obj > DistractionsAndEffectsOption_obj::__new(::String desc) {
	::hx::ObjectPtr< DistractionsAndEffectsOption_obj > __this = new DistractionsAndEffectsOption_obj();
	__this->__construct(desc);
	return __this;
}

::hx::ObjectPtr< DistractionsAndEffectsOption_obj > DistractionsAndEffectsOption_obj::__alloc(::hx::Ctx *_hx_ctx,::String desc) {
	DistractionsAndEffectsOption_obj *__this = (DistractionsAndEffectsOption_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DistractionsAndEffectsOption_obj), true, "DistractionsAndEffectsOption"));
	*(void **)__this = DistractionsAndEffectsOption_obj::_hx_vtable;
	__this->__construct(desc);
	return __this;
}

DistractionsAndEffectsOption_obj::DistractionsAndEffectsOption_obj()
{
}

::hx::Val DistractionsAndEffectsOption_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *DistractionsAndEffectsOption_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *DistractionsAndEffectsOption_obj_sStaticStorageInfo = 0;
#endif

static ::String DistractionsAndEffectsOption_obj_sMemberFields[] = {
	HX_("left",07,08,b0,47),
	HX_("right",dc,0b,64,e9),
	HX_("updateDisplay",39,8f,b8,86),
	::String(null()) };

::hx::Class DistractionsAndEffectsOption_obj::__mClass;

void DistractionsAndEffectsOption_obj::__register()
{
	DistractionsAndEffectsOption_obj _hx_dummy;
	DistractionsAndEffectsOption_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("DistractionsAndEffectsOption",f1,f1,42,c5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DistractionsAndEffectsOption_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DistractionsAndEffectsOption_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DistractionsAndEffectsOption_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DistractionsAndEffectsOption_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

