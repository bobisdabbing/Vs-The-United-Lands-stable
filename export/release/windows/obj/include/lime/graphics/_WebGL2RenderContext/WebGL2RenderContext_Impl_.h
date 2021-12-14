// Generated by Haxe 4.1.5
#ifndef INCLUDED_lime_graphics__WebGL2RenderContext_WebGL2RenderContext_Impl_
#define INCLUDED_lime_graphics__WebGL2RenderContext_WebGL2RenderContext_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,_internal,backend,native,NativeOpenGLRenderContext)
HX_DECLARE_CLASS3(lime,graphics,_WebGL2RenderContext,WebGL2RenderContext_Impl_)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
HX_DECLARE_CLASS2(lime,utils,BytePointerData)

namespace lime{
namespace graphics{
namespace _WebGL2RenderContext{


class HXCPP_CLASS_ATTRIBUTES WebGL2RenderContext_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef WebGL2RenderContext_Impl__obj OBJ_;
		WebGL2RenderContext_Impl__obj();

	public:
		enum { _hx_ClassId = 0x73fcf61f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics._WebGL2RenderContext.WebGL2RenderContext_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics._WebGL2RenderContext.WebGL2RenderContext_Impl_"); }

		inline static ::hx::ObjectPtr< WebGL2RenderContext_Impl__obj > __new() {
			::hx::ObjectPtr< WebGL2RenderContext_Impl__obj > __this = new WebGL2RenderContext_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< WebGL2RenderContext_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			WebGL2RenderContext_Impl__obj *__this = (WebGL2RenderContext_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(WebGL2RenderContext_Impl__obj), false, "lime.graphics._WebGL2RenderContext.WebGL2RenderContext_Impl_"));
			*(void **)__this = WebGL2RenderContext_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~WebGL2RenderContext_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("WebGL2RenderContext_Impl_",a0,77,ab,a6); }

		static void __boot();
		static  ::lime::utils::BytePointerData _hx___tempPointer;
		static void bufferData( ::lime::_internal::backend::native::NativeOpenGLRenderContext this1,int target, ::lime::utils::ArrayBufferView srcData,int usage,::hx::Null< int >  srcOffset,::hx::Null< int >  length);
		static ::Dynamic bufferData_dyn();

		static void uniformMatrix2fv( ::lime::_internal::backend::native::NativeOpenGLRenderContext this1,int location,bool transpose, ::lime::utils::ArrayBufferView v,::hx::Null< int >  srcOffset, ::Dynamic srcLength);
		static ::Dynamic uniformMatrix2fv_dyn();

		static void uniformMatrix3fv( ::lime::_internal::backend::native::NativeOpenGLRenderContext this1,int location,bool transpose, ::lime::utils::ArrayBufferView v,::hx::Null< int >  srcOffset, ::Dynamic srcLength);
		static ::Dynamic uniformMatrix3fv_dyn();

		static void uniformMatrix4fv( ::lime::_internal::backend::native::NativeOpenGLRenderContext this1,int location,bool transpose, ::lime::utils::ArrayBufferView v,::hx::Null< int >  srcOffset, ::Dynamic srcLength);
		static ::Dynamic uniformMatrix4fv_dyn();

		static  ::lime::_internal::backend::native::NativeOpenGLRenderContext fromOpenGLES3RenderContext( ::lime::_internal::backend::native::NativeOpenGLRenderContext gl);
		static ::Dynamic fromOpenGLES3RenderContext_dyn();

};

} // end namespace lime
} // end namespace graphics
} // end namespace _WebGL2RenderContext

#endif /* INCLUDED_lime_graphics__WebGL2RenderContext_WebGL2RenderContext_Impl_ */ 