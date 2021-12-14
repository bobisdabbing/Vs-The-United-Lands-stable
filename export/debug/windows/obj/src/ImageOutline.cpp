// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_ImageOutline
#include <ImageOutline.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
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
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_geom_Transform
#include <openfl/geom/Transform.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0e02aa014350d24e_20_new,"ImageOutline","new",0xad9f4df9,"ImageOutline.new","ImageOutline.hx",20,0xe2ee5397)
HX_LOCAL_STACK_FRAME(_hx_pos_0e02aa014350d24e_28_renderImage,"ImageOutline","renderImage",0xebf28abe,"ImageOutline.renderImage","ImageOutline.hx",28,0xe2ee5397)
HX_LOCAL_STACK_FRAME(_hx_pos_0e02aa014350d24e_66_outline,"ImageOutline","outline",0xbf5ad59b,"ImageOutline.outline","ImageOutline.hx",66,0xe2ee5397)
HX_LOCAL_STACK_FRAME(_hx_pos_0e02aa014350d24e_106__antialias,"ImageOutline","_antialias",0x0480a9f6,"ImageOutline._antialias","ImageOutline.hx",106,0xe2ee5397)
HX_LOCAL_STACK_FRAME(_hx_pos_0e02aa014350d24e_129__alias,"ImageOutline","_alias",0x95dae0d8,"ImageOutline._alias","ImageOutline.hx",129,0xe2ee5397)
HX_LOCAL_STACK_FRAME(_hx_pos_0e02aa014350d24e_140__parseARGB,"ImageOutline","_parseARGB",0x56994e47,"ImageOutline._parseARGB","ImageOutline.hx",140,0xe2ee5397)
HX_LOCAL_STACK_FRAME(_hx_pos_0e02aa014350d24e_147__toHexString,"ImageOutline","_toHexString",0xee1b9e59,"ImageOutline._toHexString","ImageOutline.hx",147,0xe2ee5397)
HX_LOCAL_STACK_FRAME(_hx_pos_0e02aa014350d24e_13_boot,"ImageOutline","boot",0x35ddec79,"ImageOutline.boot","ImageOutline.hx",13,0xe2ee5397)
HX_LOCAL_STACK_FRAME(_hx_pos_0e02aa014350d24e_14_boot,"ImageOutline","boot",0x35ddec79,"ImageOutline.boot","ImageOutline.hx",14,0xe2ee5397)
HX_LOCAL_STACK_FRAME(_hx_pos_0e02aa014350d24e_15_boot,"ImageOutline","boot",0x35ddec79,"ImageOutline.boot","ImageOutline.hx",15,0xe2ee5397)
HX_LOCAL_STACK_FRAME(_hx_pos_0e02aa014350d24e_16_boot,"ImageOutline","boot",0x35ddec79,"ImageOutline.boot","ImageOutline.hx",16,0xe2ee5397)

void ImageOutline_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_0e02aa014350d24e_20_new)
            	}

Dynamic ImageOutline_obj::__CreateEmpty() { return new ImageOutline_obj; }

void *ImageOutline_obj::_hx_vtable = 0;

Dynamic ImageOutline_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ImageOutline_obj > _hx_result = new ImageOutline_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ImageOutline_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x19596673;
}

int ImageOutline_obj::_color;

::String ImageOutline_obj::_hex;

Float ImageOutline_obj::_alpha;

Float ImageOutline_obj::_weight;

Float ImageOutline_obj::_brush;

 ::openfl::geom::Matrix ImageOutline_obj::m;

 ::openfl::display::Bitmap ImageOutline_obj::renderImage(::Dynamic src,int weight,int color,::hx::Null< Float >  __o_alpha,::hx::Null< bool >  __o_antialias,::hx::Null< int >  __o_threshold){
            		Float alpha = __o_alpha.Default(1);
            		bool antialias = __o_antialias.Default(false);
            		int threshold = __o_threshold.Default(150);
            	HX_GC_STACKFRAME(&_hx_pos_0e02aa014350d24e_28_renderImage)
HXLINE(  29)		int w = 0;
HXLINE(  30)		int h = 0;
HXLINE(  34)		if (::Std_obj::isOfType(src,( ( ::Dynamic)(::hx::ClassOf< ::openfl::display::DisplayObject >()) ))) {
HXLINE(  36)			 ::openfl::display::DisplayObject dsp = ::hx::TCast<  ::openfl::display::DisplayObject >::cast(src);
HXLINE(  37)			::ImageOutline_obj::m = dsp->get_transform()->get_matrix();
HXLINE(  38)			w = ::Std_obj::_hx_int(dsp->get_width());
HXLINE(  39)			h = ::Std_obj::_hx_int(dsp->get_height());
            		}
            		else {
HXLINE(  41)			if (::Std_obj::isOfType(src,( ( ::Dynamic)(::hx::ClassOf< ::openfl::display::BitmapData >()) ))) {
HXLINE(  43)				 ::openfl::display::BitmapData bmp = ::hx::TCast<  ::openfl::display::BitmapData >::cast(src);
HXLINE(  44)				w = ::Std_obj::_hx_int(( (Float)(bmp->width) ));
HXLINE(  45)				h = ::Std_obj::_hx_int(( (Float)(bmp->height) ));
            			}
            		}
HXLINE(  48)		 ::openfl::display::BitmapData render =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,w,h,true,0);
HXLINE(  49)		render->draw(src,::ImageOutline_obj::m,null(),null(),null(),null());
HXLINE(  51)		return  ::openfl::display::Bitmap_obj::__alloc( HX_CTX ,::ImageOutline_obj::outline(render,weight,color,alpha,antialias,threshold),null(),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(ImageOutline_obj,renderImage,return )

 ::openfl::display::BitmapData ImageOutline_obj::outline( ::openfl::display::BitmapData src,int weight,int color,::hx::Null< Float >  __o_alpha,::hx::Null< bool >  __o_antialias,::hx::Null< int >  __o_threshold){
            		Float alpha = __o_alpha.Default(1);
            		bool antialias = __o_antialias.Default(false);
            		int threshold = __o_threshold.Default(150);
            	HX_GC_STACKFRAME(&_hx_pos_0e02aa014350d24e_66_outline)
HXLINE(  67)		::ImageOutline_obj::_color = color;
HXLINE(  68)		::ImageOutline_obj::_hex = ::ImageOutline_obj::_toHexString(color);
HXLINE(  69)		::ImageOutline_obj::_alpha = alpha;
HXLINE(  70)		::ImageOutline_obj::_weight = ( (Float)(weight) );
HXLINE(  71)		::ImageOutline_obj::_brush = ( (Float)(((weight * 2) + 1)) );
HXLINE(  73)		int copy = ::Std_obj::_hx_int((src->width + ::ImageOutline_obj::_brush));
HXDLIN(  73)		 ::openfl::display::BitmapData copy1 =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,copy,::Std_obj::_hx_int((src->height + ::ImageOutline_obj::_brush)),true,0);
HXLINE(  75)		{
HXLINE(  75)			int _g = 0;
HXDLIN(  75)			int _g1 = src->height;
HXDLIN(  75)			while((_g < _g1)){
HXLINE(  75)				_g = (_g + 1);
HXDLIN(  75)				int iy = (_g - 1);
HXLINE(  77)				{
HXLINE(  77)					int _g1 = 0;
HXDLIN(  77)					int _g2 = src->width;
HXDLIN(  77)					while((_g1 < _g2)){
HXLINE(  77)						_g1 = (_g1 + 1);
HXDLIN(  77)						int ix = (_g1 - 1);
HXLINE(  80)						Float a = ( (Float)(((src->getPixel32(ix,iy) >> 24) & 255)) );
HXLINE(  82)						if (antialias) {
HXLINE(  86)							::ImageOutline_obj::_antialias(copy1,ix,iy,::Std_obj::_hx_int(a));
            						}
            						else {
HXLINE(  88)							if ((a > threshold)) {
HXLINE(  92)								::ImageOutline_obj::_alias(copy1,ix,iy);
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE(  98)		 ::openfl::geom::Rectangle _hx_tmp =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,0,0,copy1->width,copy1->height);
HXDLIN(  98)		copy1->copyPixels(src,_hx_tmp, ::openfl::geom::Point_obj::__alloc( HX_CTX ,::ImageOutline_obj::_weight,::ImageOutline_obj::_weight),null(),null(),true);
HXLINE(  99)		return copy1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(ImageOutline_obj,outline,return )

 ::openfl::display::BitmapData ImageOutline_obj::_antialias( ::openfl::display::BitmapData copy,int x,int y,int a){
            	HX_STACKFRAME(&_hx_pos_0e02aa014350d24e_106__antialias)
HXLINE( 107)		if ((a > 0)) {
HXLINE( 109)			int _g = y;
HXDLIN( 109)			int _g1 = ::Std_obj::_hx_int((y + ::ImageOutline_obj::_brush));
HXDLIN( 109)			while((_g < _g1)){
HXLINE( 109)				_g = (_g + 1);
HXDLIN( 109)				int iy = (_g - 1);
HXLINE( 111)				{
HXLINE( 111)					int _g1 = x;
HXDLIN( 111)					int _g2 = ::Std_obj::_hx_int((x + ::ImageOutline_obj::_brush));
HXDLIN( 111)					while((_g1 < _g2)){
HXLINE( 111)						_g1 = (_g1 + 1);
HXDLIN( 111)						int ix = (_g1 - 1);
HXLINE( 114)						Float px = ( (Float)(((copy->getPixel32(ix,iy) >> 24) & 255)) );
HXLINE( 117)						if ((px < (( (Float)(a) ) * ::ImageOutline_obj::_alpha))) {
HXLINE( 118)							copy->setPixel32(ix,iy,::ImageOutline_obj::_parseARGB(::Std_obj::_hx_int((( (Float)(a) ) * ::ImageOutline_obj::_alpha))));
            						}
            					}
            				}
            			}
            		}
HXLINE( 122)		return copy;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ImageOutline_obj,_antialias,return )

 ::openfl::display::BitmapData ImageOutline_obj::_alias( ::openfl::display::BitmapData copy,int x,int y){
            	HX_GC_STACKFRAME(&_hx_pos_0e02aa014350d24e_129__alias)
HXLINE( 130)		 ::openfl::geom::Rectangle _hx_tmp =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,x,y,::ImageOutline_obj::_brush,::ImageOutline_obj::_brush);
HXDLIN( 130)		copy->fillRect(_hx_tmp,::ImageOutline_obj::_parseARGB(::Std_obj::_hx_int((::ImageOutline_obj::_alpha * ( (Float)(255) )))));
HXLINE( 131)		return copy;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageOutline_obj,_alias,return )

int ImageOutline_obj::_parseARGB(int a){
            	HX_STACKFRAME(&_hx_pos_0e02aa014350d24e_140__parseARGB)
HXDLIN( 140)		::String _hx_tmp = (HX_("0x",48,2a,00,00) + ::StringTools_obj::hex(a,null()));
HXDLIN( 140)		return ( (int)(::Std_obj::parseInt((_hx_tmp + ::ImageOutline_obj::_hex))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ImageOutline_obj,_parseARGB,return )

::String ImageOutline_obj::_toHexString(int hex){
            	HX_STACKFRAME(&_hx_pos_0e02aa014350d24e_147__toHexString)
HXLINE( 148)		int r = ::hx::UShr(hex,16);
HXLINE( 149)		int g = (::hx::UShr(hex,8) ^ (r << 8));
HXLINE( 150)		int b = (hex ^ ((r << 16) | (g << 8)));
HXLINE( 152)		::String red = ::StringTools_obj::hex(r,null());
HXLINE( 153)		::String green = ::StringTools_obj::hex(g,null());
HXLINE( 154)		::String blue = ::StringTools_obj::hex(b,null());
HXLINE( 156)		if ((red.length < 2)) {
HXLINE( 156)			red = (HX_("0",30,00,00,00) + red);
            		}
HXLINE( 157)		if ((green.length < 2)) {
HXLINE( 157)			green = (HX_("0",30,00,00,00) + green);
            		}
HXLINE( 158)		if ((blue.length < 2)) {
HXLINE( 158)			blue = (HX_("0",30,00,00,00) + blue);
            		}
HXLINE( 159)		return ((red + green) + blue).toUpperCase();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ImageOutline_obj,_toHexString,return )


ImageOutline_obj::ImageOutline_obj()
{
}

bool ImageOutline_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"m") ) { outValue = ( m ); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_hex") ) { outValue = ( _hex ); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_color") ) { outValue = ( _color ); return true; }
		if (HX_FIELD_EQ(inName,"_alpha") ) { outValue = ( _alpha ); return true; }
		if (HX_FIELD_EQ(inName,"_brush") ) { outValue = ( _brush ); return true; }
		if (HX_FIELD_EQ(inName,"_alias") ) { outValue = _alias_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_weight") ) { outValue = ( _weight ); return true; }
		if (HX_FIELD_EQ(inName,"outline") ) { outValue = outline_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_antialias") ) { outValue = _antialias_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"_parseARGB") ) { outValue = _parseARGB_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"renderImage") ) { outValue = renderImage_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_toHexString") ) { outValue = _toHexString_dyn(); return true; }
	}
	return false;
}

bool ImageOutline_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"m") ) { m=ioValue.Cast<  ::openfl::geom::Matrix >(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_hex") ) { _hex=ioValue.Cast< ::String >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_color") ) { _color=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"_alpha") ) { _alpha=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"_brush") ) { _brush=ioValue.Cast< Float >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_weight") ) { _weight=ioValue.Cast< Float >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ImageOutline_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo ImageOutline_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &ImageOutline_obj::_color,HX_("_color",a4,b8,43,46)},
	{::hx::fsString,(void *) &ImageOutline_obj::_hex,HX_("_hex",dc,87,1a,3f)},
	{::hx::fsFloat,(void *) &ImageOutline_obj::_alpha,HX_("_alpha",9f,ee,7d,1d)},
	{::hx::fsFloat,(void *) &ImageOutline_obj::_weight,HX_("_weight",17,83,1d,70)},
	{::hx::fsFloat,(void *) &ImageOutline_obj::_brush,HX_("_brush",bb,9f,df,b4)},
	{::hx::fsObject /*  ::openfl::geom::Matrix */ ,(void *) &ImageOutline_obj::m,HX_("m",6d,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void ImageOutline_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ImageOutline_obj::_color,"_color");
	HX_MARK_MEMBER_NAME(ImageOutline_obj::_hex,"_hex");
	HX_MARK_MEMBER_NAME(ImageOutline_obj::_alpha,"_alpha");
	HX_MARK_MEMBER_NAME(ImageOutline_obj::_weight,"_weight");
	HX_MARK_MEMBER_NAME(ImageOutline_obj::_brush,"_brush");
	HX_MARK_MEMBER_NAME(ImageOutline_obj::m,"m");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ImageOutline_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ImageOutline_obj::_color,"_color");
	HX_VISIT_MEMBER_NAME(ImageOutline_obj::_hex,"_hex");
	HX_VISIT_MEMBER_NAME(ImageOutline_obj::_alpha,"_alpha");
	HX_VISIT_MEMBER_NAME(ImageOutline_obj::_weight,"_weight");
	HX_VISIT_MEMBER_NAME(ImageOutline_obj::_brush,"_brush");
	HX_VISIT_MEMBER_NAME(ImageOutline_obj::m,"m");
};

#endif

::hx::Class ImageOutline_obj::__mClass;

static ::String ImageOutline_obj_sStaticFields[] = {
	HX_("_color",a4,b8,43,46),
	HX_("_hex",dc,87,1a,3f),
	HX_("_alpha",9f,ee,7d,1d),
	HX_("_weight",17,83,1d,70),
	HX_("_brush",bb,9f,df,b4),
	HX_("m",6d,00,00,00),
	HX_("renderImage",25,4c,1a,89),
	HX_("outline",82,17,be,e1),
	HX_("_antialias",6f,52,8c,d1),
	HX_("_alias",d1,98,78,1d),
	HX_("_parseARGB",c0,f6,a4,23),
	HX_("_toHexString",12,17,bd,d3),
	::String(null())
};

void ImageOutline_obj::__register()
{
	ImageOutline_obj _hx_dummy;
	ImageOutline_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("ImageOutline",87,dd,98,99);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ImageOutline_obj::__GetStatic;
	__mClass->mSetStaticField = &ImageOutline_obj::__SetStatic;
	__mClass->mMarkFunc = ImageOutline_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ImageOutline_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ImageOutline_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ImageOutline_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ImageOutline_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ImageOutline_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ImageOutline_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_0e02aa014350d24e_13_boot)
HXDLIN(  13)		_hex = HX_("",00,00,00,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_0e02aa014350d24e_14_boot)
HXDLIN(  14)		_alpha = ((Float)1);
            	}
{
            	HX_STACKFRAME(&_hx_pos_0e02aa014350d24e_15_boot)
HXDLIN(  15)		_weight = ((Float)2);
            	}
{
            	HX_STACKFRAME(&_hx_pos_0e02aa014350d24e_16_boot)
HXDLIN(  16)		_brush = ((Float)4);
            	}
}

