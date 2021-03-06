// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSpriteUtil
#include <flixel/util/FlxSpriteUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
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
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_323_drawRect,"flixel.util.FlxSpriteUtil","drawRect",0x2790fe97,"flixel.util.FlxSpriteUtil.drawRect","flixel/util/FlxSpriteUtil.hx",323,0xc647097f)
HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_534_updateSpriteGraphic,"flixel.util.FlxSpriteUtil","updateSpriteGraphic",0x448b866b,"flixel.util.FlxSpriteUtil.updateSpriteGraphic","flixel/util/FlxSpriteUtil.hx",534,0xc647097f)
HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_38_boot,"flixel.util.FlxSpriteUtil","boot",0x77f3f801,"flixel.util.FlxSpriteUtil.boot","flixel/util/FlxSpriteUtil.hx",38,0xc647097f)
HX_LOCAL_STACK_FRAME(_hx_pos_aff86ac70b6ed09e_40_boot,"flixel.util.FlxSpriteUtil","boot",0x77f3f801,"flixel.util.FlxSpriteUtil.boot","flixel/util/FlxSpriteUtil.hx",40,0xc647097f)
namespace flixel{
namespace util{

void FlxSpriteUtil_obj::__construct() { }

Dynamic FlxSpriteUtil_obj::__CreateEmpty() { return new FlxSpriteUtil_obj; }

void *FlxSpriteUtil_obj::_hx_vtable = 0;

Dynamic FlxSpriteUtil_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxSpriteUtil_obj > _hx_result = new FlxSpriteUtil_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxSpriteUtil_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0a1ec5f3;
}

 ::openfl::display::Sprite FlxSpriteUtil_obj::flashGfxSprite;

 ::openfl::display::Graphics FlxSpriteUtil_obj::flashGfx;

 ::flixel::FlxSprite FlxSpriteUtil_obj::drawRect( ::flixel::FlxSprite sprite,Float X,Float Y,Float Width,Float Height,::hx::Null< int >  __o_FillColor, ::Dynamic lineStyle, ::Dynamic drawStyle){
            		int FillColor = __o_FillColor.Default(-1);
            	HX_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_323_drawRect)
HXLINE( 324)		{
HXLINE( 324)			::flixel::util::FlxSpriteUtil_obj::flashGfx->clear();
HXDLIN( 324)			if (::hx::IsNotNull( lineStyle )) {
HXLINE( 324)				 ::Dynamic color;
HXDLIN( 324)				if (::hx::IsNull( lineStyle->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic) )) {
HXLINE( 324)					color = -16777216;
            				}
            				else {
HXLINE( 324)					color = lineStyle->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic);
            				}
HXDLIN( 324)				if (::hx::IsNull( lineStyle->__Field(HX_("thickness",74,f1,66,5a),::hx::paccDynamic) )) {
HXLINE( 324)					lineStyle->__SetField(HX_("thickness",74,f1,66,5a),1,::hx::paccDynamic);
            				}
HXDLIN( 324)				if (::hx::IsNull( lineStyle->__Field(HX_("pixelHinting",d5,9b,fb,6c),::hx::paccDynamic) )) {
HXLINE( 324)					lineStyle->__SetField(HX_("pixelHinting",d5,9b,fb,6c),false,::hx::paccDynamic);
            				}
HXDLIN( 324)				if (::hx::IsNull( lineStyle->__Field(HX_("miterLimit",f6,5c,6a,54),::hx::paccDynamic) )) {
HXLINE( 324)					lineStyle->__SetField(HX_("miterLimit",f6,5c,6a,54),3,::hx::paccDynamic);
            				}
HXDLIN( 324)				::flixel::util::FlxSpriteUtil_obj::flashGfx->lineStyle(lineStyle->__Field(HX_("thickness",74,f1,66,5a),::hx::paccDynamic),(( (int)(color) ) & 16777215),(( (Float)(((( (int)(color) ) >> 24) & 255)) ) / ( (Float)(255) )),lineStyle->__Field(HX_("pixelHinting",d5,9b,fb,6c),::hx::paccDynamic),lineStyle->__Field(HX_("scaleMode",0d,db,d3,2b),::hx::paccDynamic),lineStyle->__Field(HX_("capsStyle",50,61,32,83),::hx::paccDynamic),lineStyle->__Field(HX_("jointStyle",87,ef,1c,e2),::hx::paccDynamic),lineStyle->__Field(HX_("miterLimit",f6,5c,6a,54),::hx::paccDynamic));
            			}
HXDLIN( 324)			if ((FillColor != 0)) {
HXLINE( 324)				::flixel::util::FlxSpriteUtil_obj::flashGfx->beginFill((FillColor & 16777215),(( (Float)(((FillColor >> 24) & 255)) ) / ( (Float)(255) )));
            			}
            		}
HXLINE( 325)		::flixel::util::FlxSpriteUtil_obj::flashGfx->drawRect(X,Y,Width,Height);
HXLINE( 326)		{
HXLINE( 326)			::flixel::util::FlxSpriteUtil_obj::flashGfx->endFill();
HXDLIN( 326)			::flixel::util::FlxSpriteUtil_obj::updateSpriteGraphic(sprite,drawStyle);
            		}
HXLINE( 327)		return sprite;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(FlxSpriteUtil_obj,drawRect,return )

 ::flixel::FlxSprite FlxSpriteUtil_obj::updateSpriteGraphic( ::flixel::FlxSprite sprite, ::Dynamic drawStyle){
            	HX_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_534_updateSpriteGraphic)
HXLINE( 535)		if (::hx::IsNull( drawStyle )) {
HXLINE( 537)			drawStyle =  ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("smoothing",74,d5,e1,95),false));
            		}
            		else {
HXLINE( 539)			if (::hx::IsNull( drawStyle->__Field(HX_("smoothing",74,d5,e1,95),::hx::paccDynamic) )) {
HXLINE( 541)				drawStyle->__SetField(HX_("smoothing",74,d5,e1,95),false,::hx::paccDynamic);
            			}
            		}
HXLINE( 544)		sprite->get_pixels()->draw(::flixel::util::FlxSpriteUtil_obj::flashGfxSprite,( ( ::openfl::geom::Matrix)(drawStyle->__Field(HX_("matrix",41,36,c8,bb),::hx::paccDynamic)) ),( ( ::openfl::geom::ColorTransform)(drawStyle->__Field(HX_("colorTransform",89,d7,3f,ad),::hx::paccDynamic)) ),drawStyle->__Field(HX_("blendMode",54,e4,37,0c),::hx::paccDynamic),( ( ::openfl::geom::Rectangle)(drawStyle->__Field(HX_("clipRect",14,90,6a,58),::hx::paccDynamic)) ),drawStyle->__Field(HX_("smoothing",74,d5,e1,95),::hx::paccDynamic));
HXLINE( 545)		sprite->dirty = true;
HXLINE( 546)		return sprite;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxSpriteUtil_obj,updateSpriteGraphic,return )


FlxSpriteUtil_obj::FlxSpriteUtil_obj()
{
}

bool FlxSpriteUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"flashGfx") ) { outValue = ( flashGfx ); return true; }
		if (HX_FIELD_EQ(inName,"drawRect") ) { outValue = drawRect_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"flashGfxSprite") ) { outValue = ( flashGfxSprite ); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"updateSpriteGraphic") ) { outValue = updateSpriteGraphic_dyn(); return true; }
	}
	return false;
}

bool FlxSpriteUtil_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"flashGfx") ) { flashGfx=ioValue.Cast<  ::openfl::display::Graphics >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"flashGfxSprite") ) { flashGfxSprite=ioValue.Cast<  ::openfl::display::Sprite >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxSpriteUtil_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo FlxSpriteUtil_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::Sprite */ ,(void *) &FlxSpriteUtil_obj::flashGfxSprite,HX_("flashGfxSprite",8e,26,3f,ab)},
	{::hx::fsObject /*  ::openfl::display::Graphics */ ,(void *) &FlxSpriteUtil_obj::flashGfx,HX_("flashGfx",a9,b1,ce,99)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void FlxSpriteUtil_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSpriteUtil_obj::flashGfxSprite,"flashGfxSprite");
	HX_MARK_MEMBER_NAME(FlxSpriteUtil_obj::flashGfx,"flashGfx");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxSpriteUtil_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSpriteUtil_obj::flashGfxSprite,"flashGfxSprite");
	HX_VISIT_MEMBER_NAME(FlxSpriteUtil_obj::flashGfx,"flashGfx");
};

#endif

::hx::Class FlxSpriteUtil_obj::__mClass;

static ::String FlxSpriteUtil_obj_sStaticFields[] = {
	HX_("flashGfxSprite",8e,26,3f,ab),
	HX_("flashGfx",a9,b1,ce,99),
	HX_("drawRect",48,f7,10,60),
	HX_("updateSpriteGraphic",5a,59,f9,55),
	::String(null())
};

void FlxSpriteUtil_obj::__register()
{
	FlxSpriteUtil_obj _hx_dummy;
	FlxSpriteUtil_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.util.FlxSpriteUtil",ff,7e,4e,f7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxSpriteUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxSpriteUtil_obj::__SetStatic;
	__mClass->mMarkFunc = FlxSpriteUtil_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxSpriteUtil_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FlxSpriteUtil_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxSpriteUtil_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxSpriteUtil_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxSpriteUtil_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxSpriteUtil_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_38_boot)
HXDLIN(  38)		flashGfxSprite =  ::openfl::display::Sprite_obj::__alloc( HX_CTX );
            	}
{
            	HX_STACKFRAME(&_hx_pos_aff86ac70b6ed09e_40_boot)
HXDLIN(  40)		flashGfx = ::flixel::util::FlxSpriteUtil_obj::flashGfxSprite->get_graphics();
            	}
}

} // end namespace flixel
} // end namespace util
