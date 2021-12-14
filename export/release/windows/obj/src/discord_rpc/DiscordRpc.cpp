// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_0f6f533a2f6f9a23
#define INCLUDED_0f6f533a2f6f9a23
#include "linc_discord_rpc.h"
#endif
#ifndef INCLUDED_discord_rpc_DiscordRpc
#include <discord_rpc/DiscordRpc.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_e073bb56c51b4de4_87_presence,"discord_rpc.DiscordRpc","presence",0x5ac349b4,"discord_rpc.DiscordRpc.presence","discord_rpc/DiscordRpc.hx",87,0x60965528)
namespace discord_rpc{

void DiscordRpc_obj::__construct() { }

Dynamic DiscordRpc_obj::__CreateEmpty() { return new DiscordRpc_obj; }

void *DiscordRpc_obj::_hx_vtable = 0;

Dynamic DiscordRpc_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DiscordRpc_obj > _hx_result = new DiscordRpc_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DiscordRpc_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x33678667;
}

void DiscordRpc_obj::presence( ::Dynamic _options){
            	HX_STACKFRAME(&_hx_pos_e073bb56c51b4de4_87_presence)
HXDLIN(  87)		linc::discord_rpc::update_presence(( (::String)(_options->__Field(HX_("state",11,76,0b,84),::hx::paccDynamic)) ),( (::String)(_options->__Field(HX_("details",c2,dc,56,ab),::hx::paccDynamic)) ),( (::cpp::Int64)(_options->__Field(HX_("startTimestamp",14,a4,09,c5),::hx::paccDynamic)) ),( (::cpp::Int64)(_options->__Field(HX_("endTimestamp",7b,dd,d0,b4),::hx::paccDynamic)) ),( (::String)(_options->__Field(HX_("largeImageKey",df,8f,e3,ae),::hx::paccDynamic)) ),( (::String)(_options->__Field(HX_("largeImageText",6d,3e,2d,5e),::hx::paccDynamic)) ),( (::String)(_options->__Field(HX_("smallImageKey",eb,38,69,a3),::hx::paccDynamic)) ),( (::String)(_options->__Field(HX_("smallImageText",e1,7f,9b,5e),::hx::paccDynamic)) ),( (::String)(_options->__Field(HX_("partyID",81,e6,b8,ea),::hx::paccDynamic)) ),( (int)(_options->__Field(HX_("partySize",07,e9,58,be),::hx::paccDynamic)) ),( (int)(_options->__Field(HX_("partyMax",1e,ed,13,77),::hx::paccDynamic)) ),( (::String)(_options->__Field(HX_("matchSecret",95,8d,67,ec),::hx::paccDynamic)) ),( (::String)(_options->__Field(HX_("joinSecret",fa,81,4a,02),::hx::paccDynamic)) ),( (::String)(_options->__Field(HX_("spectateSecret",29,43,86,b9),::hx::paccDynamic)) ),( (signed char)(_options->__Field(HX_("instance",95,1f,e1,59),::hx::paccDynamic)) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DiscordRpc_obj,presence,(void))


DiscordRpc_obj::DiscordRpc_obj()
{
}

bool DiscordRpc_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"presence") ) { outValue = presence_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *DiscordRpc_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *DiscordRpc_obj_sStaticStorageInfo = 0;
#endif

::hx::Class DiscordRpc_obj::__mClass;

static ::String DiscordRpc_obj_sStaticFields[] = {
	HX_("presence",3b,52,d7,66),
	::String(null())
};

void DiscordRpc_obj::__register()
{
	DiscordRpc_obj _hx_dummy;
	DiscordRpc_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("discord_rpc.DiscordRpc",15,3c,89,d4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DiscordRpc_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DiscordRpc_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< DiscordRpc_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DiscordRpc_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DiscordRpc_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace discord_rpc
