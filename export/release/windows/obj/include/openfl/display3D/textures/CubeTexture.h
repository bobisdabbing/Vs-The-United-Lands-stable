// Generated by Haxe 4.1.5
#ifndef INCLUDED_openfl_display3D_textures_CubeTexture
#define INCLUDED_openfl_display3D_textures_CubeTexture

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
HX_DECLARE_CLASS3(lime,graphics,opengl,GLObject)
HX_DECLARE_CLASS3(openfl,display,_internal,SamplerState)
HX_DECLARE_CLASS2(openfl,display3D,Context3D)
HX_DECLARE_CLASS3(openfl,display3D,textures,CubeTexture)
HX_DECLARE_CLASS3(openfl,display3D,textures,TextureBase)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace openfl{
namespace display3D{
namespace textures{


class HXCPP_CLASS_ATTRIBUTES CubeTexture_obj : public  ::openfl::display3D::textures::TextureBase_obj
{
	public:
		typedef  ::openfl::display3D::textures::TextureBase_obj super;
		typedef CubeTexture_obj OBJ_;
		CubeTexture_obj();

	public:
		enum { _hx_ClassId = 0x1503748b };

		void __construct( ::openfl::display3D::Context3D context,int size, ::Dynamic format,bool optimizeForRenderToTexture,int streamingLevels);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display3D.textures.CubeTexture")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.display3D.textures.CubeTexture"); }
		static ::hx::ObjectPtr< CubeTexture_obj > __new( ::openfl::display3D::Context3D context,int size, ::Dynamic format,bool optimizeForRenderToTexture,int streamingLevels);
		static ::hx::ObjectPtr< CubeTexture_obj > __alloc(::hx::Ctx *_hx_ctx, ::openfl::display3D::Context3D context,int size, ::Dynamic format,bool optimizeForRenderToTexture,int streamingLevels);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CubeTexture_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CubeTexture",46,04,c2,59); }

		int _hx___framebufferSurface;
		int _hx___size;
		int _hx___uploadedSides;
		 ::lime::graphics::opengl::GLObject _hx___getGLFramebuffer(bool enableDepthAndStencil,int antiAlias,int surfaceSelector);

		bool _hx___setSamplerState( ::openfl::display::_internal::SamplerState state);

};

} // end namespace openfl
} // end namespace display3D
} // end namespace textures

#endif /* INCLUDED_openfl_display3D_textures_CubeTexture */ 