// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_math__ColorMatrix_ColorMatrix_Impl_
#include <lime/math/_ColorMatrix/ColorMatrix_Impl_.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_855a2747f55db411_168_getAlphaTable,"lime.math._ColorMatrix.ColorMatrix_Impl_","getAlphaTable",0x456419e0,"lime.math._ColorMatrix.ColorMatrix_Impl_.getAlphaTable","lime/math/ColorMatrix.hx",168,0x337975c7)
HX_LOCAL_STACK_FRAME(_hx_pos_855a2747f55db411_209_getBlueTable,"lime.math._ColorMatrix.ColorMatrix_Impl_","getBlueTable",0x661a9b04,"lime.math._ColorMatrix.ColorMatrix_Impl_.getBlueTable","lime/math/ColorMatrix.hx",209,0x337975c7)
HX_LOCAL_STACK_FRAME(_hx_pos_855a2747f55db411_249_getGreenTable,"lime.math._ColorMatrix.ColorMatrix_Impl_","getGreenTable",0xf983c45b,"lime.math._ColorMatrix.ColorMatrix_Impl_.getGreenTable","lime/math/ColorMatrix.hx",249,0x337975c7)
HX_LOCAL_STACK_FRAME(_hx_pos_855a2747f55db411_289_getRedTable,"lime.math._ColorMatrix.ColorMatrix_Impl_","getRedTable",0x2b90530d,"lime.math._ColorMatrix.ColorMatrix_Impl_.getRedTable","lime/math/ColorMatrix.hx",289,0x337975c7)
HX_LOCAL_STACK_FRAME(_hx_pos_855a2747f55db411_313___toFlashColorTransform,"lime.math._ColorMatrix.ColorMatrix_Impl_","__toFlashColorTransform",0x02badfd8,"lime.math._ColorMatrix.ColorMatrix_Impl_.__toFlashColorTransform","lime/math/ColorMatrix.hx",313,0x337975c7)
namespace lime{
namespace math{
namespace _ColorMatrix{

void ColorMatrix_Impl__obj::__construct() { }

Dynamic ColorMatrix_Impl__obj::__CreateEmpty() { return new ColorMatrix_Impl__obj; }

void *ColorMatrix_Impl__obj::_hx_vtable = 0;

Dynamic ColorMatrix_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ColorMatrix_Impl__obj > _hx_result = new ColorMatrix_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ColorMatrix_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x42e0099e;
}

 ::lime::utils::ArrayBufferView ColorMatrix_Impl__obj::_hx___alphaTable;

 ::lime::utils::ArrayBufferView ColorMatrix_Impl__obj::_hx___blueTable;

 ::lime::utils::ArrayBufferView ColorMatrix_Impl__obj::_hx___greenTable;

 ::lime::utils::ArrayBufferView ColorMatrix_Impl__obj::_hx___redTable;

 ::lime::utils::ArrayBufferView ColorMatrix_Impl__obj::getAlphaTable( ::lime::utils::ArrayBufferView this1){
            	HX_GC_STACKFRAME(&_hx_pos_855a2747f55db411_168_getAlphaTable)
HXLINE( 169)		if (::hx::IsNull( ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::_hx___alphaTable )) {
HXLINE( 171)			 ::haxe::io::Bytes buffer = null();
HXDLIN( 171)			::cpp::VirtualArray array = null();
HXDLIN( 171)			 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 171)			 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 171)			 ::Dynamic len = null();
HXDLIN( 171)			 ::lime::utils::ArrayBufferView this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,256,4);
HXDLIN( 171)			::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::_hx___alphaTable = this1;
            		}
HXLINE( 174)		int value;
HXLINE( 175)		{
HXLINE( 175)			 ::lime::utils::ArrayBufferView this2 = ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::_hx___alphaTable;
HXDLIN( 175)			 ::__hxcpp_memory_set_byte(this2->buffer->b,this2->byteOffset,0);
            		}
HXLINE( 177)		{
HXLINE( 177)			int _g = 1;
HXDLIN( 177)			while((_g < 256)){
HXLINE( 177)				_g = (_g + 1);
HXDLIN( 177)				int i = (_g - 1);
HXLINE( 179)				Float value1 = (( (Float)(i) ) *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 72)));
HXDLIN( 179)				value = ::Math_obj::floor((value1 + ( ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 76)) * ( (Float)(255) ))));
HXLINE( 180)				if ((value > 255)) {
HXLINE( 180)					value = 255;
            				}
HXLINE( 181)				if ((value < 0)) {
HXLINE( 181)					value = 0;
            				}
HXLINE( 182)				{
HXLINE( 182)					 ::lime::utils::ArrayBufferView this2 = ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::_hx___alphaTable;
HXDLIN( 182)					 ::__hxcpp_memory_set_byte(this2->buffer->b,(this2->byteOffset + i),value);
            				}
            			}
            		}
HXLINE( 185)		return ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::_hx___alphaTable;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,getAlphaTable,return )

 ::lime::utils::ArrayBufferView ColorMatrix_Impl__obj::getBlueTable( ::lime::utils::ArrayBufferView this1){
            	HX_GC_STACKFRAME(&_hx_pos_855a2747f55db411_209_getBlueTable)
HXLINE( 210)		if (::hx::IsNull( ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::_hx___blueTable )) {
HXLINE( 212)			 ::haxe::io::Bytes buffer = null();
HXDLIN( 212)			::cpp::VirtualArray array = null();
HXDLIN( 212)			 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 212)			 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 212)			 ::Dynamic len = null();
HXDLIN( 212)			 ::lime::utils::ArrayBufferView this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,256,4);
HXDLIN( 212)			::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::_hx___blueTable = this1;
            		}
HXLINE( 215)		int value;
HXLINE( 217)		{
HXLINE( 217)			int _g = 0;
HXDLIN( 217)			while((_g < 256)){
HXLINE( 217)				_g = (_g + 1);
HXDLIN( 217)				int i = (_g - 1);
HXLINE( 219)				Float value1 = (( (Float)(i) ) *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 48)));
HXDLIN( 219)				value = ::Math_obj::floor((value1 + ( ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 56)) * ( (Float)(255) ))));
HXLINE( 220)				if ((value > 255)) {
HXLINE( 220)					value = 255;
            				}
HXLINE( 221)				if ((value < 0)) {
HXLINE( 221)					value = 0;
            				}
HXLINE( 222)				{
HXLINE( 222)					 ::lime::utils::ArrayBufferView this2 = ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::_hx___blueTable;
HXDLIN( 222)					 ::__hxcpp_memory_set_byte(this2->buffer->b,(this2->byteOffset + i),value);
            				}
            			}
            		}
HXLINE( 225)		return ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::_hx___blueTable;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,getBlueTable,return )

 ::lime::utils::ArrayBufferView ColorMatrix_Impl__obj::getGreenTable( ::lime::utils::ArrayBufferView this1){
            	HX_GC_STACKFRAME(&_hx_pos_855a2747f55db411_249_getGreenTable)
HXLINE( 250)		if (::hx::IsNull( ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::_hx___greenTable )) {
HXLINE( 252)			 ::haxe::io::Bytes buffer = null();
HXDLIN( 252)			::cpp::VirtualArray array = null();
HXDLIN( 252)			 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 252)			 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 252)			 ::Dynamic len = null();
HXDLIN( 252)			 ::lime::utils::ArrayBufferView this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,256,4);
HXDLIN( 252)			::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::_hx___greenTable = this1;
            		}
HXLINE( 255)		int value;
HXLINE( 257)		{
HXLINE( 257)			int _g = 0;
HXDLIN( 257)			while((_g < 256)){
HXLINE( 257)				_g = (_g + 1);
HXDLIN( 257)				int i = (_g - 1);
HXLINE( 259)				Float value1 = (( (Float)(i) ) *  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 24)));
HXDLIN( 259)				value = ::Math_obj::floor((value1 + ( ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 36)) * ( (Float)(255) ))));
HXLINE( 260)				if ((value > 255)) {
HXLINE( 260)					value = 255;
            				}
HXLINE( 261)				if ((value < 0)) {
HXLINE( 261)					value = 0;
            				}
HXLINE( 262)				{
HXLINE( 262)					 ::lime::utils::ArrayBufferView this2 = ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::_hx___greenTable;
HXDLIN( 262)					 ::__hxcpp_memory_set_byte(this2->buffer->b,(this2->byteOffset + i),value);
            				}
            			}
            		}
HXLINE( 265)		return ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::_hx___greenTable;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,getGreenTable,return )

 ::lime::utils::ArrayBufferView ColorMatrix_Impl__obj::getRedTable( ::lime::utils::ArrayBufferView this1){
            	HX_GC_STACKFRAME(&_hx_pos_855a2747f55db411_289_getRedTable)
HXLINE( 290)		if (::hx::IsNull( ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::_hx___redTable )) {
HXLINE( 292)			 ::haxe::io::Bytes buffer = null();
HXDLIN( 292)			::cpp::VirtualArray array = null();
HXDLIN( 292)			 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 292)			 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 292)			 ::Dynamic len = null();
HXDLIN( 292)			 ::lime::utils::ArrayBufferView this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,256,4);
HXDLIN( 292)			::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::_hx___redTable = this1;
            		}
HXLINE( 295)		int value;
HXLINE( 297)		{
HXLINE( 297)			int _g = 0;
HXDLIN( 297)			while((_g < 256)){
HXLINE( 297)				_g = (_g + 1);
HXDLIN( 297)				int i = (_g - 1);
HXLINE( 299)				Float value1 = (( (Float)(i) ) *  ::__hxcpp_memory_get_float(this1->buffer->b,this1->byteOffset));
HXDLIN( 299)				value = ::Math_obj::floor((value1 + ( ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 16)) * ( (Float)(255) ))));
HXLINE( 300)				if ((value > 255)) {
HXLINE( 300)					value = 255;
            				}
HXLINE( 301)				if ((value < 0)) {
HXLINE( 301)					value = 0;
            				}
HXLINE( 302)				{
HXLINE( 302)					 ::lime::utils::ArrayBufferView this2 = ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::_hx___redTable;
HXDLIN( 302)					 ::__hxcpp_memory_set_byte(this2->buffer->b,(this2->byteOffset + i),value);
            				}
            			}
            		}
HXLINE( 305)		return ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::_hx___redTable;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,getRedTable,return )

 ::Dynamic ColorMatrix_Impl__obj::_hx___toFlashColorTransform( ::lime::utils::ArrayBufferView this1){
            	HX_STACKFRAME(&_hx_pos_855a2747f55db411_313___toFlashColorTransform)
HXDLIN( 313)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,_hx___toFlashColorTransform,return )


ColorMatrix_Impl__obj::ColorMatrix_Impl__obj()
{
}

bool ColorMatrix_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"getRedTable") ) { outValue = getRedTable_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getBlueTable") ) { outValue = getBlueTable_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getAlphaTable") ) { outValue = getAlphaTable_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getGreenTable") ) { outValue = getGreenTable_dyn(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__toFlashColorTransform") ) { outValue = _hx___toFlashColorTransform_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ColorMatrix_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo ColorMatrix_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::lime::utils::ArrayBufferView */ ,(void *) &ColorMatrix_Impl__obj::_hx___alphaTable,HX_("__alphaTable",f0,86,1c,64)},
	{::hx::fsObject /*  ::lime::utils::ArrayBufferView */ ,(void *) &ColorMatrix_Impl__obj::_hx___blueTable,HX_("__blueTable",f4,7f,4a,11)},
	{::hx::fsObject /*  ::lime::utils::ArrayBufferView */ ,(void *) &ColorMatrix_Impl__obj::_hx___greenTable,HX_("__greenTable",6b,31,3c,18)},
	{::hx::fsObject /*  ::lime::utils::ArrayBufferView */ ,(void *) &ColorMatrix_Impl__obj::_hx___redTable,HX_("__redTable",1d,5c,68,1d)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void ColorMatrix_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ColorMatrix_Impl__obj::_hx___alphaTable,"__alphaTable");
	HX_MARK_MEMBER_NAME(ColorMatrix_Impl__obj::_hx___blueTable,"__blueTable");
	HX_MARK_MEMBER_NAME(ColorMatrix_Impl__obj::_hx___greenTable,"__greenTable");
	HX_MARK_MEMBER_NAME(ColorMatrix_Impl__obj::_hx___redTable,"__redTable");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ColorMatrix_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ColorMatrix_Impl__obj::_hx___alphaTable,"__alphaTable");
	HX_VISIT_MEMBER_NAME(ColorMatrix_Impl__obj::_hx___blueTable,"__blueTable");
	HX_VISIT_MEMBER_NAME(ColorMatrix_Impl__obj::_hx___greenTable,"__greenTable");
	HX_VISIT_MEMBER_NAME(ColorMatrix_Impl__obj::_hx___redTable,"__redTable");
};

#endif

::hx::Class ColorMatrix_Impl__obj::__mClass;

static ::String ColorMatrix_Impl__obj_sStaticFields[] = {
	HX_("__alphaTable",f0,86,1c,64),
	HX_("__blueTable",f4,7f,4a,11),
	HX_("__greenTable",6b,31,3c,18),
	HX_("__redTable",1d,5c,68,1d),
	HX_("getAlphaTable",06,68,fb,87),
	HX_("getBlueTable",9e,d3,74,f2),
	HX_("getGreenTable",81,12,1b,3c),
	HX_("getRedTable",b3,ab,23,a0),
	HX_("__toFlashColorTransform",7e,99,c3,ed),
	::String(null())
};

void ColorMatrix_Impl__obj::__register()
{
	ColorMatrix_Impl__obj _hx_dummy;
	ColorMatrix_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.math._ColorMatrix.ColorMatrix_Impl_",c8,e8,e8,0e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ColorMatrix_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ColorMatrix_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ColorMatrix_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ColorMatrix_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ColorMatrix_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ColorMatrix_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ColorMatrix_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace math
} // end namespace _ColorMatrix
