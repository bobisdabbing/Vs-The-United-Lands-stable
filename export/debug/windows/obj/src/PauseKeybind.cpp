// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_Debug
#include <Debug.h>
#endif
#ifndef INCLUDED_Option
#include <Option.h>
#endif
#ifndef INCLUDED_PauseKeybind
#include <PauseKeybind.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_a9c04b395b89cda8_224_new,"PauseKeybind","new",0xe5ec2e98,"PauseKeybind.new","Options.hx",224,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_a9c04b395b89cda8_232_onType,"PauseKeybind","onType",0xe00d5041,"PauseKeybind.onType","Options.hx",232,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_a9c04b395b89cda8_240_press,"PauseKeybind","press",0x8b9eafbb,"PauseKeybind.press","Options.hx",240,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_a9c04b395b89cda8_249_updateDisplay,"PauseKeybind","updateDisplay",0x3659e371,"PauseKeybind.updateDisplay","Options.hx",249,0x9d9a0240)

void PauseKeybind_obj::__construct(::String desc){
            	HX_STACKFRAME(&_hx_pos_a9c04b395b89cda8_224_new)
HXLINE( 225)		super::__construct();
HXLINE( 226)		this->description = desc;
HXLINE( 227)		this->acceptType = true;
            	}

Dynamic PauseKeybind_obj::__CreateEmpty() { return new PauseKeybind_obj; }

void *PauseKeybind_obj::_hx_vtable = 0;

Dynamic PauseKeybind_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PauseKeybind_obj > _hx_result = new PauseKeybind_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool PauseKeybind_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x27a70eb9) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x27a70eb9;
	} else {
		return inClassId==(int)0x2e0efcca;
	}
}

void PauseKeybind_obj::onType(::String text){
            	HX_STACKFRAME(&_hx_pos_a9c04b395b89cda8_232_onType)
HXDLIN( 232)		if (this->waitingType) {
HXLINE( 234)			::flixel::FlxG_obj::save->data->__SetField(HX_("pauseBind",d3,ab,7d,45),text,::hx::paccDynamic);
HXLINE( 235)			this->waitingType = false;
            		}
            	}


bool PauseKeybind_obj::press(){
            	HX_STACKFRAME(&_hx_pos_a9c04b395b89cda8_240_press)
HXLINE( 241)		::Debug_obj::logTrace(HX_("keybind change",34,82,1f,10),::hx::SourceInfo(HX_("source/Options.hx",34,ca,fe,29),241,HX_("PauseKeybind",a6,42,e3,12),HX_("press",83,53,88,c8)));
HXLINE( 242)		this->waitingType = !(this->waitingType);
HXLINE( 244)		return true;
            	}


::String PauseKeybind_obj::updateDisplay(){
            	HX_STACKFRAME(&_hx_pos_a9c04b395b89cda8_249_updateDisplay)
HXDLIN( 249)		::String _hx_tmp;
HXDLIN( 249)		if (this->waitingType) {
HXDLIN( 249)			_hx_tmp = ((HX_("> ",22,36,00,00) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("pauseBind",d3,ab,7d,45),::hx::paccDynamic)))) + HX_(" <",1c,1c,00,00));
            		}
            		else {
HXDLIN( 249)			_hx_tmp = ( (::String)(::flixel::FlxG_obj::save->data->__Field(HX_("pauseBind",d3,ab,7d,45),::hx::paccDynamic)) );
            		}
HXDLIN( 249)		return ((HX_("PAUSE: ",fc,22,08,24) + _hx_tmp) + HX_("",00,00,00,00));
            	}



::hx::ObjectPtr< PauseKeybind_obj > PauseKeybind_obj::__new(::String desc) {
	::hx::ObjectPtr< PauseKeybind_obj > __this = new PauseKeybind_obj();
	__this->__construct(desc);
	return __this;
}

::hx::ObjectPtr< PauseKeybind_obj > PauseKeybind_obj::__alloc(::hx::Ctx *_hx_ctx,::String desc) {
	PauseKeybind_obj *__this = (PauseKeybind_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PauseKeybind_obj), true, "PauseKeybind"));
	*(void **)__this = PauseKeybind_obj::_hx_vtable;
	__this->__construct(desc);
	return __this;
}

PauseKeybind_obj::PauseKeybind_obj()
{
}

::hx::Val PauseKeybind_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *PauseKeybind_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *PauseKeybind_obj_sStaticStorageInfo = 0;
#endif

static ::String PauseKeybind_obj_sMemberFields[] = {
	HX_("onType",79,fb,92,ef),
	HX_("press",83,53,88,c8),
	HX_("updateDisplay",39,8f,b8,86),
	::String(null()) };

::hx::Class PauseKeybind_obj::__mClass;

void PauseKeybind_obj::__register()
{
	PauseKeybind_obj _hx_dummy;
	PauseKeybind_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("PauseKeybind",a6,42,e3,12);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PauseKeybind_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PauseKeybind_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PauseKeybind_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PauseKeybind_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

