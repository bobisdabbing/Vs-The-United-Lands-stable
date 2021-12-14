// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_math__Matrix4_Matrix4_Impl_
#include <lime/math/_Matrix4/Matrix4_Impl_.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_a8b6e1b1a7c59cb4_27__new,"lime.math._Matrix4.Matrix4_Impl_","_new",0x84b003e9,"lime.math._Matrix4.Matrix4_Impl_._new","lime/math/Matrix4.hx",27,0xeb65dbd8)
HX_LOCAL_STACK_FRAME(_hx_pos_a8b6e1b1a7c59cb4_44_append,"lime.math._Matrix4.Matrix4_Impl_","append",0x0e638262,"lime.math._Matrix4.Matrix4_Impl_.append","lime/math/Matrix4.hx",44,0xeb65dbd8)
HX_LOCAL_STACK_FRAME(_hx_pos_a8b6e1b1a7c59cb4_356_createOrtho,"lime.math._Matrix4.Matrix4_Impl_","createOrtho",0x33fdc114,"lime.math._Matrix4.Matrix4_Impl_.createOrtho","lime/math/Matrix4.hx",356,0xeb65dbd8)
HX_LOCAL_STACK_FRAME(_hx_pos_a8b6e1b1a7c59cb4_506_identity,"lime.math._Matrix4.Matrix4_Impl_","identity",0xb34e17c6,"lime.math._Matrix4.Matrix4_Impl_.identity","lime/math/Matrix4.hx",506,0xeb65dbd8)
HX_LOCAL_STACK_FRAME(_hx_pos_a8b6e1b1a7c59cb4_981_get,"lime.math._Matrix4.Matrix4_Impl_","get",0x10b0bb0e,"lime.math._Matrix4.Matrix4_Impl_.get","lime/math/Matrix4.hx",981,0xeb65dbd8)
HX_LOCAL_STACK_FRAME(_hx_pos_a8b6e1b1a7c59cb4_985_set,"lime.math._Matrix4.Matrix4_Impl_","set",0x10b9d61a,"lime.math._Matrix4.Matrix4_Impl_.set","lime/math/Matrix4.hx",985,0xeb65dbd8)
HX_LOCAL_STACK_FRAME(_hx_pos_a8b6e1b1a7c59cb4_11_boot,"lime.math._Matrix4.Matrix4_Impl_","boot",0x86ac72ba,"lime.math._Matrix4.Matrix4_Impl_.boot","lime/math/Matrix4.hx",11,0xeb65dbd8)
static const Float _hx_array_data_cbf9fee6_7[] = {
	1.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,
};
namespace lime{
namespace math{
namespace _Matrix4{

void Matrix4_Impl__obj::__construct() { }

Dynamic Matrix4_Impl__obj::__CreateEmpty() { return new Matrix4_Impl__obj; }

void *Matrix4_Impl__obj::_hx_vtable = 0;

Dynamic Matrix4_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Matrix4_Impl__obj > _hx_result = new Matrix4_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Matrix4_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x329b7ea2;
}

::Array< Float > Matrix4_Impl__obj::_hx___identity;

 ::lime::utils::ArrayBufferView Matrix4_Impl__obj::_new( ::lime::utils::ArrayBufferView data){
            	HX_GC_STACKFRAME(&_hx_pos_a8b6e1b1a7c59cb4_27__new)
HXDLIN(  27)		 ::lime::utils::ArrayBufferView this1;
HXLINE(  29)		bool _hx_tmp;
HXDLIN(  29)		if (::hx::IsNotNull( data )) {
HXLINE(  29)			_hx_tmp = (data->length == 16);
            		}
            		else {
HXLINE(  29)			_hx_tmp = false;
            		}
HXDLIN(  29)		if (_hx_tmp) {
HXLINE(  31)			this1 = data;
            		}
            		else {
HXLINE(  35)			 ::Dynamic elements = null();
HXDLIN(  35)			 ::haxe::io::Bytes buffer = null();
HXDLIN(  35)			::cpp::VirtualArray array = ::lime::math::_Matrix4::Matrix4_Impl__obj::_hx___identity;
HXDLIN(  35)			 ::openfl::_Vector::FloatVector vector = null();
HXDLIN(  35)			 ::lime::utils::ArrayBufferView view = null();
HXDLIN(  35)			 ::Dynamic len = null();
HXDLIN(  35)			 ::lime::utils::ArrayBufferView this2;
HXDLIN(  35)			if (::hx::IsNotNull( elements )) {
HXLINE(  35)				this2 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,8);
            			}
            			else {
HXLINE(  35)				if (::hx::IsNotNull( array )) {
HXLINE(  35)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN(  35)					_this->byteOffset = 0;
HXDLIN(  35)					_this->length = array->get_length();
HXDLIN(  35)					_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN(  35)					 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN(  35)					_this->buffer = this1;
HXDLIN(  35)					_this->copyFromArray(array,null());
HXDLIN(  35)					this2 = _this;
            				}
            				else {
HXLINE(  35)					if (::hx::IsNotNull( vector )) {
HXLINE(  35)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN(  35)						::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN(  35)						_this->byteOffset = 0;
HXDLIN(  35)						_this->length = array->get_length();
HXDLIN(  35)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN(  35)						 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN(  35)						_this->buffer = this1;
HXDLIN(  35)						_this->copyFromArray(array,null());
HXDLIN(  35)						this2 = _this;
            					}
            					else {
HXLINE(  35)						if (::hx::IsNotNull( view )) {
HXLINE(  35)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN(  35)							 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN(  35)							int srcLength = view->length;
HXDLIN(  35)							int srcByteOffset = view->byteOffset;
HXDLIN(  35)							int srcElementSize = view->bytesPerElement;
HXDLIN(  35)							int elementSize = _this->bytesPerElement;
HXDLIN(  35)							if ((view->type == _this->type)) {
HXLINE(  35)								int srcLength = srcData->length;
HXDLIN(  35)								int cloneLength = (srcLength - srcByteOffset);
HXDLIN(  35)								 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN(  35)								_this->buffer = this1;
HXDLIN(  35)								_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            							}
            							else {
HXLINE(  35)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            							}
HXDLIN(  35)							_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN(  35)							_this->byteOffset = 0;
HXDLIN(  35)							_this->length = srcLength;
HXDLIN(  35)							this2 = _this;
            						}
            						else {
HXLINE(  35)							if (::hx::IsNotNull( buffer )) {
HXLINE(  35)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN(  35)								int in_byteOffset = 0;
HXDLIN(  35)								if ((in_byteOffset < 0)) {
HXLINE(  35)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN(  35)								if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE(  35)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN(  35)								int bufferByteLength = buffer->length;
HXDLIN(  35)								int elementSize = _this->bytesPerElement;
HXDLIN(  35)								int newByteLength = bufferByteLength;
HXDLIN(  35)								if (::hx::IsNull( len )) {
HXLINE(  35)									newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN(  35)									if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE(  35)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN(  35)									if ((newByteLength < 0)) {
HXLINE(  35)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
            								}
            								else {
HXLINE(  35)									newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN(  35)									int newRange = (in_byteOffset + newByteLength);
HXDLIN(  35)									if ((newRange > bufferByteLength)) {
HXLINE(  35)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
            								}
HXDLIN(  35)								_this->buffer = buffer;
HXDLIN(  35)								_this->byteOffset = in_byteOffset;
HXDLIN(  35)								_this->byteLength = newByteLength;
HXDLIN(  35)								_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN(  35)								this2 = _this;
            							}
            							else {
HXLINE(  35)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Float32Array",8e,c1,f4,d4)));
            							}
            						}
            					}
            				}
            			}
HXDLIN(  35)			this1 = this2;
            		}
HXLINE(  27)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Matrix4_Impl__obj,_new,return )

void Matrix4_Impl__obj::append( ::lime::utils::ArrayBufferView this1, ::lime::utils::ArrayBufferView lhs){
            	HX_STACKFRAME(&_hx_pos_a8b6e1b1a7c59cb4_44_append)
HXLINE(  45)		Float m111 =  ::__hxcpp_memory_get_float(this1->buffer->b,this1->byteOffset);
HXDLIN(  45)		Float m121 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 16));
HXDLIN(  45)		Float m131 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 32));
HXDLIN(  45)		Float m141 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 48));
HXDLIN(  45)		Float m112 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 4));
HXDLIN(  45)		Float m122 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 20));
HXDLIN(  45)		Float m132 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 36));
HXDLIN(  45)		Float m142 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 52));
HXDLIN(  45)		Float m113 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 8));
HXDLIN(  45)		Float m123 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 24));
HXDLIN(  45)		Float m133 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 40));
HXDLIN(  45)		Float m143 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 56));
HXDLIN(  45)		Float m114 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 12));
HXDLIN(  45)		Float m124 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 28));
HXDLIN(  45)		Float m134 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 44));
HXDLIN(  45)		Float m144 =  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + 60));
HXDLIN(  45)		Float m211 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(lhs,0);
HXDLIN(  45)		Float m221 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(lhs,4);
HXDLIN(  45)		Float m231 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(lhs,8);
HXDLIN(  45)		Float m241 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(lhs,12);
HXDLIN(  45)		Float m212 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(lhs,1);
HXDLIN(  45)		Float m222 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(lhs,5);
HXDLIN(  45)		Float m232 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(lhs,9);
HXDLIN(  45)		Float m242 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(lhs,13);
HXDLIN(  45)		Float m213 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(lhs,2);
HXDLIN(  45)		Float m223 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(lhs,6);
HXDLIN(  45)		Float m233 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(lhs,10);
HXDLIN(  45)		Float m243 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(lhs,14);
HXDLIN(  45)		Float m214 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(lhs,3);
HXDLIN(  45)		Float m224 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(lhs,7);
HXDLIN(  45)		Float m234 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(lhs,11);
HXDLIN(  45)		Float m244 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(lhs,15);
HXLINE(  78)		{
HXLINE(  78)			Float val = ((((m111 * m211) + (m112 * m221)) + (m113 * m231)) + (m114 * m241));
HXDLIN(  78)			 ::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,val);
            		}
HXLINE(  79)		{
HXLINE(  79)			Float val1 = ((((m111 * m212) + (m112 * m222)) + (m113 * m232)) + (m114 * m242));
HXDLIN(  79)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 4),val1);
            		}
HXLINE(  80)		{
HXLINE(  80)			Float val2 = ((((m111 * m213) + (m112 * m223)) + (m113 * m233)) + (m114 * m243));
HXDLIN(  80)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 8),val2);
            		}
HXLINE(  81)		{
HXLINE(  81)			Float val3 = ((((m111 * m214) + (m112 * m224)) + (m113 * m234)) + (m114 * m244));
HXDLIN(  81)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 12),val3);
            		}
HXLINE(  83)		{
HXLINE(  83)			Float val4 = ((((m121 * m211) + (m122 * m221)) + (m123 * m231)) + (m124 * m241));
HXDLIN(  83)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 16),val4);
            		}
HXLINE(  84)		{
HXLINE(  84)			Float val5 = ((((m121 * m212) + (m122 * m222)) + (m123 * m232)) + (m124 * m242));
HXDLIN(  84)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 20),val5);
            		}
HXLINE(  85)		{
HXLINE(  85)			Float val6 = ((((m121 * m213) + (m122 * m223)) + (m123 * m233)) + (m124 * m243));
HXDLIN(  85)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 24),val6);
            		}
HXLINE(  86)		{
HXLINE(  86)			Float val7 = ((((m121 * m214) + (m122 * m224)) + (m123 * m234)) + (m124 * m244));
HXDLIN(  86)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 28),val7);
            		}
HXLINE(  88)		{
HXLINE(  88)			Float val8 = ((((m131 * m211) + (m132 * m221)) + (m133 * m231)) + (m134 * m241));
HXDLIN(  88)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 32),val8);
            		}
HXLINE(  89)		{
HXLINE(  89)			Float val9 = ((((m131 * m212) + (m132 * m222)) + (m133 * m232)) + (m134 * m242));
HXDLIN(  89)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 36),val9);
            		}
HXLINE(  90)		{
HXLINE(  90)			Float val10 = ((((m131 * m213) + (m132 * m223)) + (m133 * m233)) + (m134 * m243));
HXDLIN(  90)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 40),val10);
            		}
HXLINE(  91)		{
HXLINE(  91)			Float val11 = ((((m131 * m214) + (m132 * m224)) + (m133 * m234)) + (m134 * m244));
HXDLIN(  91)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 44),val11);
            		}
HXLINE(  93)		{
HXLINE(  93)			Float val12 = ((((m141 * m211) + (m142 * m221)) + (m143 * m231)) + (m144 * m241));
HXDLIN(  93)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 48),val12);
            		}
HXLINE(  94)		{
HXLINE(  94)			Float val13 = ((((m141 * m212) + (m142 * m222)) + (m143 * m232)) + (m144 * m242));
HXDLIN(  94)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 52),val13);
            		}
HXLINE(  95)		{
HXLINE(  95)			Float val14 = ((((m141 * m213) + (m142 * m223)) + (m143 * m233)) + (m144 * m243));
HXDLIN(  95)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 56),val14);
            		}
HXLINE(  96)		{
HXLINE(  96)			Float val15 = ((((m141 * m214) + (m142 * m224)) + (m143 * m234)) + (m144 * m244));
HXDLIN(  96)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 60),val15);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix4_Impl__obj,append,(void))

void Matrix4_Impl__obj::createOrtho( ::lime::utils::ArrayBufferView this1,Float left,Float right,Float bottom,Float top,Float zNear,Float zFar){
            	HX_STACKFRAME(&_hx_pos_a8b6e1b1a7c59cb4_356_createOrtho)
HXLINE( 357)		Float sx = (((Float)1.0) / (right - left));
HXLINE( 358)		Float sy = (((Float)1.0) / (top - bottom));
HXLINE( 359)		Float sz = (((Float)1.0) / (zFar - zNear));
HXLINE( 361)		{
HXLINE( 361)			Float val = (( (Float)(2) ) * sx);
HXDLIN( 361)			 ::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,val);
            		}
HXLINE( 362)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 4),0);
HXLINE( 363)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 8),0);
HXLINE( 364)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 12),0);
HXLINE( 366)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 16),0);
HXLINE( 367)		{
HXLINE( 367)			Float val1 = (( (Float)(2) ) * sy);
HXDLIN( 367)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 20),val1);
            		}
HXLINE( 368)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 24),0);
HXLINE( 369)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 28),0);
HXLINE( 371)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 32),0);
HXLINE( 372)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 36),0);
HXLINE( 373)		{
HXLINE( 373)			Float val2 = (( (Float)(-2) ) * sz);
HXDLIN( 373)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 40),val2);
            		}
HXLINE( 374)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 44),0);
HXLINE( 376)		{
HXLINE( 376)			Float val3 = (-((left + right)) * sx);
HXDLIN( 376)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 48),val3);
            		}
HXLINE( 377)		{
HXLINE( 377)			Float val4 = (-((bottom + top)) * sy);
HXDLIN( 377)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 52),val4);
            		}
HXLINE( 378)		{
HXLINE( 378)			Float val5 = (-((zNear + zFar)) * sz);
HXDLIN( 378)			 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 56),val5);
            		}
HXLINE( 379)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 60),1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(Matrix4_Impl__obj,createOrtho,(void))

void Matrix4_Impl__obj::identity( ::lime::utils::ArrayBufferView this1){
            	HX_STACKFRAME(&_hx_pos_a8b6e1b1a7c59cb4_506_identity)
HXLINE( 507)		 ::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,1);
HXLINE( 508)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 4),0);
HXLINE( 509)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 8),0);
HXLINE( 510)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 12),0);
HXLINE( 511)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 16),0);
HXLINE( 512)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 20),1);
HXLINE( 513)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 24),0);
HXLINE( 514)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 28),0);
HXLINE( 515)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 32),0);
HXLINE( 516)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 36),0);
HXLINE( 517)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 40),1);
HXLINE( 518)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 44),0);
HXLINE( 519)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 48),0);
HXLINE( 520)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 52),0);
HXLINE( 521)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 56),0);
HXLINE( 522)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + 60),1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Matrix4_Impl__obj,identity,(void))

Float Matrix4_Impl__obj::get( ::lime::utils::ArrayBufferView this1,int index){
            	HX_STACKFRAME(&_hx_pos_a8b6e1b1a7c59cb4_981_get)
HXDLIN( 981)		return  ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (index * 4)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix4_Impl__obj,get,return )

Float Matrix4_Impl__obj::set( ::lime::utils::ArrayBufferView this1,int index,Float value){
            	HX_STACKFRAME(&_hx_pos_a8b6e1b1a7c59cb4_985_set)
HXLINE( 986)		 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (index * 4)),value);
HXLINE( 987)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix4_Impl__obj,set,return )


Matrix4_Impl__obj::Matrix4_Impl__obj()
{
}

bool Matrix4_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set") ) { outValue = set_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"append") ) { outValue = append_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"identity") ) { outValue = identity_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"createOrtho") ) { outValue = createOrtho_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Matrix4_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Matrix4_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< Float > */ ,(void *) &Matrix4_Impl__obj::_hx___identity,HX_("__identity",5e,b8,67,5c)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Matrix4_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Matrix4_Impl__obj::_hx___identity,"__identity");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Matrix4_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Matrix4_Impl__obj::_hx___identity,"__identity");
};

#endif

::hx::Class Matrix4_Impl__obj::__mClass;

static ::String Matrix4_Impl__obj_sStaticFields[] = {
	HX_("__identity",5e,b8,67,5c),
	HX_("_new",61,15,1f,3f),
	HX_("append",da,e1,d3,8f),
	HX_("createOrtho",9c,4e,a8,5e),
	HX_("identity",3e,45,2f,b9),
	HX_("get",96,80,4e,00),
	HX_("set",a2,9b,57,00),
	::String(null())
};

void Matrix4_Impl__obj::__register()
{
	Matrix4_Impl__obj _hx_dummy;
	Matrix4_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.math._Matrix4.Matrix4_Impl_",e6,fe,f9,cb);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Matrix4_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Matrix4_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Matrix4_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Matrix4_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Matrix4_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Matrix4_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Matrix4_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Matrix4_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_a8b6e1b1a7c59cb4_11_boot)
HXDLIN(  11)		_hx___identity = ::Array_obj< Float >::fromData( _hx_array_data_cbf9fee6_7,16);
            	}
}

} // end namespace lime
} // end namespace math
} // end namespace _Matrix4
