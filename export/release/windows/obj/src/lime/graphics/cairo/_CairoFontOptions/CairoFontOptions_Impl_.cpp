// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_lime__internal_backend_native_NativeCFFI
#include <lime/_internal/backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoFontOptions_CairoFontOptions_Impl_
#include <lime/graphics/cairo/_CairoFontOptions/CairoFontOptions_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_5b07771aa33dd9a4_16__new,"lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_","_new",0x3ba81ab0,"lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_._new","lime/graphics/cairo/CairoFontOptions.hx",16,0x355ba586)
HX_LOCAL_STACK_FRAME(_hx_pos_5b07771aa33dd9a4_36_set_antialias,"lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_","set_antialias",0xf1fce562,"lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_.set_antialias","lime/graphics/cairo/CairoFontOptions.hx",36,0x355ba586)
HX_LOCAL_STACK_FRAME(_hx_pos_5b07771aa33dd9a4_54_set_hintMetrics,"lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_","set_hintMetrics",0xb39e7f30,"lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_.set_hintMetrics","lime/graphics/cairo/CairoFontOptions.hx",54,0x355ba586)
HX_LOCAL_STACK_FRAME(_hx_pos_5b07771aa33dd9a4_72_set_hintStyle,"lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_","set_hintStyle",0xfac07cde,"lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_.set_hintStyle","lime/graphics/cairo/CairoFontOptions.hx",72,0x355ba586)
namespace lime{
namespace graphics{
namespace cairo{
namespace _CairoFontOptions{

void CairoFontOptions_Impl__obj::__construct() { }

Dynamic CairoFontOptions_Impl__obj::__CreateEmpty() { return new CairoFontOptions_Impl__obj; }

void *CairoFontOptions_Impl__obj::_hx_vtable = 0;

Dynamic CairoFontOptions_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CairoFontOptions_Impl__obj > _hx_result = new CairoFontOptions_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CairoFontOptions_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5be09b6d;
}

 ::Dynamic CairoFontOptions_Impl__obj::_new(){
            	HX_STACKFRAME(&_hx_pos_5b07771aa33dd9a4_16__new)
HXDLIN(  16)		 ::Dynamic this1 = ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_cairo_font_options_create()) );
HXDLIN(  16)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CairoFontOptions_Impl__obj,_new,return )

int CairoFontOptions_Impl__obj::set_antialias( ::Dynamic this1,int value){
            	HX_STACKFRAME(&_hx_pos_5b07771aa33dd9a4_36_set_antialias)
HXLINE(  38)		::lime::_internal::backend::native::NativeCFFI_obj::lime_cairo_font_options_set_antialias(::hx::DynamicPtr(this1),value);
HXLINE(  41)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoFontOptions_Impl__obj,set_antialias,return )

int CairoFontOptions_Impl__obj::set_hintMetrics( ::Dynamic this1,int value){
            	HX_STACKFRAME(&_hx_pos_5b07771aa33dd9a4_54_set_hintMetrics)
HXLINE(  56)		::lime::_internal::backend::native::NativeCFFI_obj::lime_cairo_font_options_set_hint_metrics(::hx::DynamicPtr(this1),value);
HXLINE(  59)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoFontOptions_Impl__obj,set_hintMetrics,return )

int CairoFontOptions_Impl__obj::set_hintStyle( ::Dynamic this1,int value){
            	HX_STACKFRAME(&_hx_pos_5b07771aa33dd9a4_72_set_hintStyle)
HXLINE(  74)		::lime::_internal::backend::native::NativeCFFI_obj::lime_cairo_font_options_set_hint_style(::hx::DynamicPtr(this1),value);
HXLINE(  77)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoFontOptions_Impl__obj,set_hintStyle,return )


CairoFontOptions_Impl__obj::CairoFontOptions_Impl__obj()
{
}

bool CairoFontOptions_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_antialias") ) { outValue = set_antialias_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_hintStyle") ) { outValue = set_hintStyle_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"set_hintMetrics") ) { outValue = set_hintMetrics_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CairoFontOptions_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *CairoFontOptions_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class CairoFontOptions_Impl__obj::__mClass;

static ::String CairoFontOptions_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("set_antialias",91,8c,53,7c),
	HX_("set_hintMetrics",1f,90,50,7e),
	HX_("set_hintStyle",0d,24,17,85),
	::String(null())
};

void CairoFontOptions_Impl__obj::__register()
{
	CairoFontOptions_Impl__obj _hx_dummy;
	CairoFontOptions_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_",7f,5d,67,62);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoFontOptions_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CairoFontOptions_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CairoFontOptions_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CairoFontOptions_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CairoFontOptions_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace cairo
} // end namespace _CairoFontOptions
