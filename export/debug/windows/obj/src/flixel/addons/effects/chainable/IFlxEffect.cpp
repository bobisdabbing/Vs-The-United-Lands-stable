// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_flixel_addons_effects_chainable_IFlxEffect
#include <flixel/addons/effects/chainable/IFlxEffect.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif

namespace flixel{
namespace addons{
namespace effects{
namespace chainable{


static ::String IFlxEffect_obj_sMemberFields[] = {
	HX_("active",c6,41,46,16),
	HX_("offset",93,97,3f,60),
	HX_("update",09,86,05,87),
	HX_("apply",6e,85,3b,24),
	::String(null()) };

::hx::Class IFlxEffect_obj::__mClass;

void IFlxEffect_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.effects.chainable.IFlxEffect",02,12,39,be);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IFlxEffect_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x4a1f9502 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace effects
} // end namespace chainable
