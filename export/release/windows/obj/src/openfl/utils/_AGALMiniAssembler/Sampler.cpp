// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_openfl_utils__AGALMiniAssembler_Sampler
#include <openfl/utils/_AGALMiniAssembler/Sampler.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f9a9f6c797ee2962_867_new,"openfl.utils._AGALMiniAssembler.Sampler","new",0x5dee1f60,"openfl.utils._AGALMiniAssembler.Sampler.new","openfl/utils/AGALMiniAssembler.hx",867,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_f9a9f6c797ee2962_860_boot,"openfl.utils._AGALMiniAssembler.Sampler","boot",0xca865532,"openfl.utils._AGALMiniAssembler.Sampler.boot","openfl/utils/AGALMiniAssembler.hx",860,0x125eff83)
namespace openfl{
namespace utils{
namespace _AGALMiniAssembler{

void Sampler_obj::__construct(::String name,int flag,int mask){
            	HX_STACKFRAME(&_hx_pos_f9a9f6c797ee2962_867_new)
HXLINE( 868)		this->name = name;
HXLINE( 869)		this->flag = flag;
HXLINE( 870)		this->mask = mask;
            	}

Dynamic Sampler_obj::__CreateEmpty() { return new Sampler_obj; }

void *Sampler_obj::_hx_vtable = 0;

Dynamic Sampler_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Sampler_obj > _hx_result = new Sampler_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Sampler_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x313f9cb2;
}


Sampler_obj::Sampler_obj()
{
}

void Sampler_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Sampler);
	HX_MARK_MEMBER_NAME(flag,"flag");
	HX_MARK_MEMBER_NAME(mask,"mask");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_END_CLASS();
}

void Sampler_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(flag,"flag");
	HX_VISIT_MEMBER_NAME(mask,"mask");
	HX_VISIT_MEMBER_NAME(name,"name");
}

::hx::Val Sampler_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"flag") ) { return ::hx::Val( flag ); }
		if (HX_FIELD_EQ(inName,"mask") ) { return ::hx::Val( mask ); }
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Sampler_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"flag") ) { flag=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mask") ) { mask=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Sampler_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("flag",ac,0b,be,43));
	outFields->push(HX_("mask",ec,40,56,48));
	outFields->push(HX_("name",4b,72,ff,48));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Sampler_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Sampler_obj,flag),HX_("flag",ac,0b,be,43)},
	{::hx::fsInt,(int)offsetof(Sampler_obj,mask),HX_("mask",ec,40,56,48)},
	{::hx::fsString,(int)offsetof(Sampler_obj,name),HX_("name",4b,72,ff,48)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Sampler_obj_sStaticStorageInfo = 0;
#endif

static ::String Sampler_obj_sMemberFields[] = {
	HX_("flag",ac,0b,be,43),
	HX_("mask",ec,40,56,48),
	HX_("name",4b,72,ff,48),
	::String(null()) };

::hx::Class Sampler_obj::__mClass;

void Sampler_obj::__register()
{
	Sampler_obj _hx_dummy;
	Sampler_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.utils._AGALMiniAssembler.Sampler",6e,2f,5b,4a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Sampler_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Sampler_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Sampler_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Sampler_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Sampler_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_f9a9f6c797ee2962_860_boot)
HXDLIN( 860)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace utils
} // end namespace _AGALMiniAssembler
