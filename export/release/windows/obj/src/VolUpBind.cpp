// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_Debug
#include <Debug.h>
#endif
#ifndef INCLUDED_Option
#include <Option.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_VolUpBind
#include <VolUpBind.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_14ea9da3fb59a285_320_new,"VolUpBind","new",0xec36237d,"VolUpBind.new","Options.hx",320,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_14ea9da3fb59a285_328_onType,"VolUpBind","onType",0x0cd1b87c,"VolUpBind.onType","Options.hx",328,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_14ea9da3fb59a285_336_press,"VolUpBind","press",0x2ffb67e0,"VolUpBind.press","Options.hx",336,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_14ea9da3fb59a285_345_updateDisplay,"VolUpBind","updateDisplay",0x9712c896,"VolUpBind.updateDisplay","Options.hx",345,0x9d9a0240)

void VolUpBind_obj::__construct(::String desc){
            	HX_STACKFRAME(&_hx_pos_14ea9da3fb59a285_320_new)
HXLINE( 321)		super::__construct();
HXLINE( 322)		this->description = desc;
HXLINE( 323)		this->acceptType = true;
            	}

Dynamic VolUpBind_obj::__CreateEmpty() { return new VolUpBind_obj; }

void *VolUpBind_obj::_hx_vtable = 0;

Dynamic VolUpBind_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< VolUpBind_obj > _hx_result = new VolUpBind_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool VolUpBind_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x27a70eb9) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x27a70eb9;
	} else {
		return inClassId==(int)0x4c37e867;
	}
}

void VolUpBind_obj::onType(::String text){
            	HX_STACKFRAME(&_hx_pos_14ea9da3fb59a285_328_onType)
HXDLIN( 328)		if (this->waitingType) {
HXLINE( 330)			::flixel::FlxG_obj::save->data->__SetField(HX_("volUpBind",2b,c1,5a,38),text,::hx::paccDynamic);
HXLINE( 331)			this->waitingType = false;
            		}
            	}


bool VolUpBind_obj::press(){
            	HX_STACKFRAME(&_hx_pos_14ea9da3fb59a285_336_press)
HXLINE( 337)		::Debug_obj::logTrace(HX_("keybind change",34,82,1f,10),::hx::SourceInfo(HX_("source/Options.hx",34,ca,fe,29),337,HX_("VolUpBind",0b,a1,2d,da),HX_("press",83,53,88,c8)));
HXLINE( 338)		this->waitingType = !(this->waitingType);
HXLINE( 340)		return true;
            	}


::String VolUpBind_obj::updateDisplay(){
            	HX_STACKFRAME(&_hx_pos_14ea9da3fb59a285_345_updateDisplay)
HXDLIN( 345)		::String _hx_tmp;
HXDLIN( 345)		if (this->waitingType) {
HXDLIN( 345)			_hx_tmp = ((HX_("> ",22,36,00,00) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("volUpBind",2b,c1,5a,38),::hx::paccDynamic)))) + HX_(" <",1c,1c,00,00));
            		}
            		else {
HXDLIN( 345)			_hx_tmp = ( (::String)(::flixel::FlxG_obj::save->data->__Field(HX_("volUpBind",2b,c1,5a,38),::hx::paccDynamic)) );
            		}
HXDLIN( 345)		return ((HX_("VOLUME UP: ",c7,4d,f1,fc) + _hx_tmp) + HX_("",00,00,00,00));
            	}



::hx::ObjectPtr< VolUpBind_obj > VolUpBind_obj::__new(::String desc) {
	::hx::ObjectPtr< VolUpBind_obj > __this = new VolUpBind_obj();
	__this->__construct(desc);
	return __this;
}

::hx::ObjectPtr< VolUpBind_obj > VolUpBind_obj::__alloc(::hx::Ctx *_hx_ctx,::String desc) {
	VolUpBind_obj *__this = (VolUpBind_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(VolUpBind_obj), true, "VolUpBind"));
	*(void **)__this = VolUpBind_obj::_hx_vtable;
	__this->__construct(desc);
	return __this;
}

VolUpBind_obj::VolUpBind_obj()
{
}

::hx::Val VolUpBind_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"press") ) { return ::hx::Val( press_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"onType") ) { return ::hx::Val( onType_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"updateDisplay") ) { return ::hx::Val( updateDisplay_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *VolUpBind_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *VolUpBind_obj_sStaticStorageInfo = 0;
#endif

static ::String VolUpBind_obj_sMemberFields[] = {
	HX_("onType",79,fb,92,ef),
	HX_("press",83,53,88,c8),
	HX_("updateDisplay",39,8f,b8,86),
	::String(null()) };

::hx::Class VolUpBind_obj::__mClass;

void VolUpBind_obj::__register()
{
	VolUpBind_obj _hx_dummy;
	VolUpBind_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("VolUpBind",0b,a1,2d,da);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(VolUpBind_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< VolUpBind_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VolUpBind_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VolUpBind_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}
