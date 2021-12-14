// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_lime__internal_graphics_ImageCanvasUtil
#include <lime/_internal/graphics/ImageCanvasUtil.h>
#endif
#ifndef INCLUDED_lime__internal_graphics_ImageDataUtil
#include <lime/_internal/graphics/ImageDataUtil.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageChannel
#include <lime/graphics/ImageChannel.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageType
#include <lime/graphics/ImageType.h>
#endif
#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_c961afc6e6a20fc0_23_colorTransform,"lime._internal.graphics.ImageCanvasUtil","colorTransform",0xe9ebc69a,"lime._internal.graphics.ImageCanvasUtil.colorTransform","lime/_internal/graphics/ImageCanvasUtil.hx",23,0x04a6dce0)
HX_LOCAL_STACK_FRAME(_hx_pos_c961afc6e6a20fc0_75_convertToCanvas,"lime._internal.graphics.ImageCanvasUtil","convertToCanvas",0xeeada195,"lime._internal.graphics.ImageCanvasUtil.convertToCanvas","lime/_internal/graphics/ImageCanvasUtil.hx",75,0x04a6dce0)
HX_LOCAL_STACK_FRAME(_hx_pos_c961afc6e6a20fc0_79_convertToData,"lime._internal.graphics.ImageCanvasUtil","convertToData",0xc05d09a7,"lime._internal.graphics.ImageCanvasUtil.convertToData","lime/_internal/graphics/ImageCanvasUtil.hx",79,0x04a6dce0)
HX_LOCAL_STACK_FRAME(_hx_pos_c961afc6e6a20fc0_120_copyChannel,"lime._internal.graphics.ImageCanvasUtil","copyChannel",0xf1dde9dd,"lime._internal.graphics.ImageCanvasUtil.copyChannel","lime/_internal/graphics/ImageCanvasUtil.hx",120,0x04a6dce0)
HX_LOCAL_STACK_FRAME(_hx_pos_c961afc6e6a20fc0_129_copyPixels,"lime._internal.graphics.ImageCanvasUtil","copyPixels",0xfc2f2753,"lime._internal.graphics.ImageCanvasUtil.copyPixels","lime/_internal/graphics/ImageCanvasUtil.hx",129,0x04a6dce0)
HX_LOCAL_STACK_FRAME(_hx_pos_c961afc6e6a20fc0_180_createCanvas,"lime._internal.graphics.ImageCanvasUtil","createCanvas",0x241eedc5,"lime._internal.graphics.ImageCanvasUtil.createCanvas","lime/_internal/graphics/ImageCanvasUtil.hx",180,0x04a6dce0)
HX_LOCAL_STACK_FRAME(_hx_pos_c961afc6e6a20fc0_226_fillRect,"lime._internal.graphics.ImageCanvasUtil","fillRect",0xcb6da198,"lime._internal.graphics.ImageCanvasUtil.fillRect","lime/_internal/graphics/ImageCanvasUtil.hx",226,0x04a6dce0)
HX_LOCAL_STACK_FRAME(_hx_pos_c961afc6e6a20fc0_285_getPixel32,"lime._internal.graphics.ImageCanvasUtil","getPixel32",0x91297940,"lime._internal.graphics.ImageCanvasUtil.getPixel32","lime/_internal/graphics/ImageCanvasUtil.hx",285,0x04a6dce0)
HX_LOCAL_STACK_FRAME(_hx_pos_c961afc6e6a20fc0_348_setPixel,"lime._internal.graphics.ImageCanvasUtil","setPixel",0x2f8c8bd5,"lime._internal.graphics.ImageCanvasUtil.setPixel","lime/_internal/graphics/ImageCanvasUtil.hx",348,0x04a6dce0)
HX_LOCAL_STACK_FRAME(_hx_pos_c961afc6e6a20fc0_355_setPixel32,"lime._internal.graphics.ImageCanvasUtil","setPixel32",0x94a717b4,"lime._internal.graphics.ImageCanvasUtil.setPixel32","lime/_internal/graphics/ImageCanvasUtil.hx",355,0x04a6dce0)
namespace lime{
namespace _internal{
namespace graphics{

void ImageCanvasUtil_obj::__construct() { }

Dynamic ImageCanvasUtil_obj::__CreateEmpty() { return new ImageCanvasUtil_obj; }

void *ImageCanvasUtil_obj::_hx_vtable = 0;

Dynamic ImageCanvasUtil_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ImageCanvasUtil_obj > _hx_result = new ImageCanvasUtil_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ImageCanvasUtil_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x608a0907;
}

void ImageCanvasUtil_obj::colorTransform( ::lime::graphics::Image image, ::lime::math::Rectangle rect, ::lime::utils::ArrayBufferView colorMatrix){
            	HX_STACKFRAME(&_hx_pos_c961afc6e6a20fc0_23_colorTransform)
HXLINE(  24)		::lime::_internal::graphics::ImageCanvasUtil_obj::convertToData(image,null());
HXLINE(  26)		::lime::_internal::graphics::ImageDataUtil_obj::colorTransform(image,rect,colorMatrix);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageCanvasUtil_obj,colorTransform,(void))

void ImageCanvasUtil_obj::convertToCanvas( ::lime::graphics::Image image,::hx::Null< bool >  __o_clear){
            		bool clear = __o_clear.Default(false);
            	HX_STACKFRAME(&_hx_pos_c961afc6e6a20fc0_75_convertToCanvas)
HXDLIN(  75)		image->type = ::lime::graphics::ImageType_obj::CANVAS_dyn();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ImageCanvasUtil_obj,convertToCanvas,(void))

void ImageCanvasUtil_obj::convertToData( ::lime::graphics::Image image,::hx::Null< bool >  __o_clear){
            		bool clear = __o_clear.Default(false);
            	HX_STACKFRAME(&_hx_pos_c961afc6e6a20fc0_79_convertToData)
HXLINE(  80)		 ::lime::graphics::ImageBuffer buffer = image->buffer;
HXLINE( 115)		image->type = ::lime::graphics::ImageType_obj::DATA_dyn();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ImageCanvasUtil_obj,convertToData,(void))

void ImageCanvasUtil_obj::copyChannel( ::lime::graphics::Image image, ::lime::graphics::Image sourceImage, ::lime::math::Rectangle sourceRect, ::lime::math::Vector2 destPoint, ::lime::graphics::ImageChannel sourceChannel, ::lime::graphics::ImageChannel destChannel){
            	HX_STACKFRAME(&_hx_pos_c961afc6e6a20fc0_120_copyChannel)
HXLINE( 121)		::lime::_internal::graphics::ImageCanvasUtil_obj::convertToData(sourceImage,null());
HXLINE( 122)		::lime::_internal::graphics::ImageCanvasUtil_obj::convertToData(image,null());
HXLINE( 124)		::lime::_internal::graphics::ImageDataUtil_obj::copyChannel(image,sourceImage,sourceRect,destPoint,sourceChannel,destChannel);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(ImageCanvasUtil_obj,copyChannel,(void))

void ImageCanvasUtil_obj::copyPixels( ::lime::graphics::Image image, ::lime::graphics::Image sourceImage, ::lime::math::Rectangle sourceRect, ::lime::math::Vector2 destPoint, ::lime::graphics::Image alphaImage, ::lime::math::Vector2 alphaPoint,::hx::Null< bool >  __o_mergeAlpha){
            		bool mergeAlpha = __o_mergeAlpha.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_c961afc6e6a20fc0_129_copyPixels)
HXLINE( 130)		bool _hx_tmp;
HXDLIN( 130)		bool _hx_tmp1;
HXDLIN( 130)		bool _hx_tmp2;
HXDLIN( 130)		bool _hx_tmp3;
HXDLIN( 130)		bool _hx_tmp4;
HXDLIN( 130)		if (::hx::IsNotNull( destPoint )) {
HXLINE( 130)			_hx_tmp4 = (destPoint->x >= image->width);
            		}
            		else {
HXLINE( 130)			_hx_tmp4 = true;
            		}
HXDLIN( 130)		if (!(_hx_tmp4)) {
HXLINE( 130)			_hx_tmp3 = (destPoint->y >= image->height);
            		}
            		else {
HXLINE( 130)			_hx_tmp3 = true;
            		}
HXDLIN( 130)		if (!(_hx_tmp3)) {
HXLINE( 130)			_hx_tmp2 = ::hx::IsNull( sourceRect );
            		}
            		else {
HXLINE( 130)			_hx_tmp2 = true;
            		}
HXDLIN( 130)		if (!(_hx_tmp2)) {
HXLINE( 130)			_hx_tmp1 = (sourceRect->width < 1);
            		}
            		else {
HXLINE( 130)			_hx_tmp1 = true;
            		}
HXDLIN( 130)		if (!(_hx_tmp1)) {
HXLINE( 130)			_hx_tmp = (sourceRect->height < 1);
            		}
            		else {
HXLINE( 130)			_hx_tmp = true;
            		}
HXDLIN( 130)		if (_hx_tmp) {
HXLINE( 133)			return;
            		}
HXLINE( 136)		bool _hx_tmp5;
HXDLIN( 136)		if (::hx::IsNotNull( alphaImage )) {
HXLINE( 136)			_hx_tmp5 = alphaImage->get_transparent();
            		}
            		else {
HXLINE( 136)			_hx_tmp5 = false;
            		}
HXDLIN( 136)		if (_hx_tmp5) {
HXLINE( 138)			if (::hx::IsNull( alphaPoint )) {
HXLINE( 138)				alphaPoint =  ::lime::math::Vector2_obj::__alloc( HX_CTX ,null(),null());
            			}
HXLINE( 142)			 ::lime::graphics::Image tempData = sourceImage->clone();
HXLINE( 143)			 ::lime::math::Rectangle _hx_tmp =  ::lime::math::Rectangle_obj::__alloc( HX_CTX ,(sourceRect->x + alphaPoint->x),(sourceRect->y + alphaPoint->y),sourceRect->width,sourceRect->height);
HXDLIN( 143)			tempData->copyChannel(alphaImage,_hx_tmp, ::lime::math::Vector2_obj::__alloc( HX_CTX ,sourceRect->x,sourceRect->y),::lime::graphics::ImageChannel_obj::ALPHA_dyn(),::lime::graphics::ImageChannel_obj::ALPHA_dyn());
HXLINE( 145)			sourceImage = tempData;
            		}
HXLINE( 148)		::lime::_internal::graphics::ImageCanvasUtil_obj::convertToCanvas(image,true);
HXLINE( 150)		if (!(mergeAlpha)) {
HXLINE( 152)			bool _hx_tmp;
HXDLIN( 152)			if (image->get_transparent()) {
HXLINE( 152)				_hx_tmp = sourceImage->get_transparent();
            			}
            			else {
HXLINE( 152)				_hx_tmp = false;
            			}
HXDLIN( 152)			if (_hx_tmp) {
HXLINE( 154)				image->buffer->_hx___srcContext->__Field(HX_("clearRect",51,35,68,bf),::hx::paccDynamic)((destPoint->x + image->offsetX),(destPoint->y + image->offsetY),(sourceRect->width + image->offsetX),(sourceRect->height + image->offsetY));
            			}
            		}
HXLINE( 163)		::lime::_internal::graphics::ImageCanvasUtil_obj::convertToCanvas(sourceImage,null());
HXLINE( 165)		if (::hx::IsNotNull( sourceImage->buffer->get_src() )) {
HXLINE( 168)			image->buffer->_hx___srcContext->__SetField(HX_("globalCompositeOperation",63,05,f9,c0),HX_("source-over",46,01,99,ce),::hx::paccDynamic);
HXLINE( 170)			 ::Dynamic image1 =  ::Dynamic(image->buffer->_hx___srcContext->__Field(HX_("drawImage",b7,54,74,85),::hx::paccDynamic));
HXDLIN( 170)			 ::Dynamic _hx_tmp = sourceImage->buffer->get_src();
HXDLIN( 170)			int _hx_tmp1 = ::Std_obj::_hx_int((sourceRect->x + sourceImage->offsetX));
HXLINE( 171)			int _hx_tmp2 = ::Std_obj::_hx_int((sourceRect->y + sourceImage->offsetY));
HXDLIN( 171)			int _hx_tmp3 = ::Std_obj::_hx_int(sourceRect->width);
HXDLIN( 171)			int _hx_tmp4 = ::Std_obj::_hx_int(sourceRect->height);
HXDLIN( 171)			int _hx_tmp5 = ::Std_obj::_hx_int((destPoint->x + image->offsetX));
HXLINE( 172)			int _hx_tmp6 = ::Std_obj::_hx_int((destPoint->y + image->offsetY));
HXDLIN( 172)			int _hx_tmp7 = ::Std_obj::_hx_int(sourceRect->width);
HXLINE( 170)			image1(_hx_tmp,_hx_tmp1,_hx_tmp2,_hx_tmp3,_hx_tmp4,_hx_tmp5,_hx_tmp6,_hx_tmp7,::Std_obj::_hx_int(sourceRect->height));
            		}
HXLINE( 175)		image->dirty = true;
HXLINE( 176)		image->version++;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(ImageCanvasUtil_obj,copyPixels,(void))

void ImageCanvasUtil_obj::createCanvas( ::lime::graphics::Image image,int width,int height){
            	HX_STACKFRAME(&_hx_pos_c961afc6e6a20fc0_180_createCanvas)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageCanvasUtil_obj,createCanvas,(void))

void ImageCanvasUtil_obj::fillRect( ::lime::graphics::Image image, ::lime::math::Rectangle rect,int color,int format){
            	HX_STACKFRAME(&_hx_pos_c961afc6e6a20fc0_226_fillRect)
HXLINE( 227)		::lime::_internal::graphics::ImageCanvasUtil_obj::convertToCanvas(image,null());
HXLINE( 229)		int r;
HXDLIN( 229)		int g;
HXDLIN( 229)		int b;
HXDLIN( 229)		int a;
HXLINE( 231)		if ((format == 1)) {
HXLINE( 233)			r = ((color >> 16) & 255);
HXLINE( 234)			g = ((color >> 8) & 255);
HXLINE( 235)			b = (color & 255);
HXLINE( 236)			if (image->get_transparent()) {
HXLINE( 236)				a = ((color >> 24) & 255);
            			}
            			else {
HXLINE( 236)				a = 255;
            			}
            		}
            		else {
HXLINE( 240)			r = ((color >> 24) & 255);
HXLINE( 241)			g = ((color >> 16) & 255);
HXLINE( 242)			b = ((color >> 8) & 255);
HXLINE( 243)			if (image->get_transparent()) {
HXLINE( 243)				a = (color & 255);
            			}
            			else {
HXLINE( 243)				a = 255;
            			}
            		}
HXLINE( 246)		bool _hx_tmp;
HXDLIN( 246)		bool _hx_tmp1;
HXDLIN( 246)		bool _hx_tmp2;
HXDLIN( 246)		if ((rect->x == 0)) {
HXLINE( 246)			_hx_tmp2 = (rect->y == 0);
            		}
            		else {
HXLINE( 246)			_hx_tmp2 = false;
            		}
HXDLIN( 246)		if (_hx_tmp2) {
HXLINE( 246)			_hx_tmp1 = (rect->width == image->width);
            		}
            		else {
HXLINE( 246)			_hx_tmp1 = false;
            		}
HXDLIN( 246)		if (_hx_tmp1) {
HXLINE( 246)			_hx_tmp = (rect->height == image->height);
            		}
            		else {
HXLINE( 246)			_hx_tmp = false;
            		}
HXDLIN( 246)		if (_hx_tmp) {
HXLINE( 248)			bool _hx_tmp;
HXDLIN( 248)			if (image->get_transparent()) {
HXLINE( 248)				_hx_tmp = (a == 0);
            			}
            			else {
HXLINE( 248)				_hx_tmp = false;
            			}
HXDLIN( 248)			if (_hx_tmp) {
HXLINE( 250)				image->buffer->_hx___srcCanvas->__SetField(HX_("width",06,b6,62,ca),image->buffer->width,::hx::paccDynamic);
HXLINE( 251)				return;
            			}
            		}
HXLINE( 255)		if ((a < 255)) {
HXLINE( 257)			image->buffer->_hx___srcContext->__Field(HX_("clearRect",51,35,68,bf),::hx::paccDynamic)((rect->x + image->offsetX),(rect->y + image->offsetY),(rect->width + image->offsetX),(rect->height + image->offsetY));
            		}
HXLINE( 260)		if ((a > 0)) {
HXLINE( 262)			image->buffer->_hx___srcContext->__SetField(HX_("fillStyle",ae,cb,c4,52),((((((((HX_("rgba(",f4,cc,0d,e8) + r) + HX_(", ",74,26,00,00)) + g) + HX_(", ",74,26,00,00)) + b) + HX_(", ",74,26,00,00)) + (( (Float)(a) ) / ( (Float)(255) ))) + HX_(")",29,00,00,00)),::hx::paccDynamic);
HXLINE( 263)			image->buffer->_hx___srcContext->__Field(HX_("fillRect",47,45,b9,6c),::hx::paccDynamic)((rect->x + image->offsetX),(rect->y + image->offsetY),(rect->width + image->offsetX),(rect->height + image->offsetY));
            		}
HXLINE( 266)		image->dirty = true;
HXLINE( 267)		image->version++;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ImageCanvasUtil_obj,fillRect,(void))

int ImageCanvasUtil_obj::getPixel32( ::lime::graphics::Image image,int x,int y,int format){
            	HX_STACKFRAME(&_hx_pos_c961afc6e6a20fc0_285_getPixel32)
HXLINE( 286)		::lime::_internal::graphics::ImageCanvasUtil_obj::convertToData(image,null());
HXLINE( 288)		return ::lime::_internal::graphics::ImageDataUtil_obj::getPixel32(image,x,y,format);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ImageCanvasUtil_obj,getPixel32,return )

void ImageCanvasUtil_obj::setPixel( ::lime::graphics::Image image,int x,int y,int color,int format){
            	HX_STACKFRAME(&_hx_pos_c961afc6e6a20fc0_348_setPixel)
HXLINE( 349)		::lime::_internal::graphics::ImageCanvasUtil_obj::convertToData(image,null());
HXLINE( 351)		::lime::_internal::graphics::ImageDataUtil_obj::setPixel(image,x,y,color,format);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ImageCanvasUtil_obj,setPixel,(void))

void ImageCanvasUtil_obj::setPixel32( ::lime::graphics::Image image,int x,int y,int color,int format){
            	HX_STACKFRAME(&_hx_pos_c961afc6e6a20fc0_355_setPixel32)
HXLINE( 356)		::lime::_internal::graphics::ImageCanvasUtil_obj::convertToData(image,null());
HXLINE( 358)		::lime::_internal::graphics::ImageDataUtil_obj::setPixel32(image,x,y,color,format);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ImageCanvasUtil_obj,setPixel32,(void))


ImageCanvasUtil_obj::ImageCanvasUtil_obj()
{
}

bool ImageCanvasUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"fillRect") ) { outValue = fillRect_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setPixel") ) { outValue = setPixel_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"copyPixels") ) { outValue = copyPixels_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getPixel32") ) { outValue = getPixel32_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setPixel32") ) { outValue = setPixel32_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"copyChannel") ) { outValue = copyChannel_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createCanvas") ) { outValue = createCanvas_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"convertToData") ) { outValue = convertToData_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { outValue = colorTransform_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"convertToCanvas") ) { outValue = convertToCanvas_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ImageCanvasUtil_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ImageCanvasUtil_obj_sStaticStorageInfo = 0;
#endif

::hx::Class ImageCanvasUtil_obj::__mClass;

static ::String ImageCanvasUtil_obj_sStaticFields[] = {
	HX_("colorTransform",89,d7,3f,ad),
	HX_("convertToCanvas",c6,61,e8,14),
	HX_("convertToData",98,ab,76,b3),
	HX_("copyChannel",8e,7d,e6,22),
	HX_("copyPixels",c2,54,6e,42),
	HX_("createCanvas",f4,94,97,da),
	HX_("fillRect",47,45,b9,6c),
	HX_("getPixel32",af,a6,68,d7),
	HX_("setPixel",84,2f,d8,d0),
	HX_("setPixel32",23,45,e6,da),
	::String(null())
};

void ImageCanvasUtil_obj::__register()
{
	ImageCanvasUtil_obj _hx_dummy;
	ImageCanvasUtil_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime._internal.graphics.ImageCanvasUtil",3d,d2,c0,58);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ImageCanvasUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ImageCanvasUtil_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ImageCanvasUtil_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ImageCanvasUtil_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ImageCanvasUtil_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace _internal
} // end namespace graphics
