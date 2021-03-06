// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeOpenGLRenderContext
#include <lime/_internal/backend/native/NativeOpenGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics__WebGL2RenderContext_WebGL2RenderContext_Impl_
#include <lime/graphics/_WebGL2RenderContext/WebGL2RenderContext_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_BytePointerData
#include <lime/utils/BytePointerData.h>
#endif
#ifndef INCLUDED_lime_utils__BytePointer_BytePointer_Impl_
#include <lime/utils/_BytePointer/BytePointer_Impl_.h>
#endif
#ifndef INCLUDED_lime_utils__DataPointer_DataPointer_Impl_
#include <lime/utils/_DataPointer/DataPointer_Impl_.h>
#endif
#ifndef INCLUDED_openfl_display__internal_SamplerState
#include <openfl/display/_internal/SamplerState.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_Texture
#include <openfl/display3D/textures/Texture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c910f1c2855eeb73_35_new,"openfl.display3D.textures.Texture","new",0xaee720f0,"openfl.display3D.textures.Texture.new","openfl/display3D/textures/Texture.hx",35,0x3ee19dbf)
HX_LOCAL_STACK_FRAME(_hx_pos_c910f1c2855eeb73_262___setSamplerState,"openfl.display3D.textures.Texture","__setSamplerState",0xb719141b,"openfl.display3D.textures.Texture.__setSamplerState","openfl/display3D/textures/Texture.hx",262,0x3ee19dbf)
namespace openfl{
namespace display3D{
namespace textures{

void Texture_obj::__construct( ::openfl::display3D::Context3D context,int width,int height, ::Dynamic format,bool optimizeForRenderToTexture,int streamingLevels){
            	HX_STACKFRAME(&_hx_pos_c910f1c2855eeb73_35_new)
HXLINE(  36)		super::__construct(context);
HXLINE(  38)		this->_hx___width = width;
HXLINE(  39)		this->_hx___height = height;
HXLINE(  41)		this->_hx___optimizeForRenderToTexture = optimizeForRenderToTexture;
HXLINE(  42)		this->_hx___streamingLevels = streamingLevels;
HXLINE(  44)		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = this->_hx___context->gl;
HXLINE(  46)		this->_hx___textureTarget = gl->TEXTURE_2D;
HXLINE(  48)		this->_hx___context->_hx___bindGLTexture2D(this->_hx___textureID);
HXLINE(  49)		{
HXLINE(  49)			int target = this->_hx___textureTarget;
HXDLIN(  49)			int internalformat = this->_hx___internalFormat;
HXDLIN(  49)			int width1 = this->_hx___width;
HXDLIN(  49)			int height1 = this->_hx___height;
HXDLIN(  49)			int format1 = this->_hx___format;
HXDLIN(  49)			int type = gl->UNSIGNED_BYTE;
HXDLIN(  49)			 ::lime::utils::ArrayBufferView srcData = null();
HXDLIN(  49)			{
HXLINE(  49)				::lime::utils::_BytePointer::BytePointer_Impl__obj::set(::lime::graphics::_WebGL2RenderContext::WebGL2RenderContext_Impl__obj::_hx___tempPointer,null(),srcData,null(),0);
HXDLIN(  49)				gl->texImage2D(target,0,internalformat,width1,height1,0,format1,type,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromBytesPointer(::lime::graphics::_WebGL2RenderContext::WebGL2RenderContext_Impl__obj::_hx___tempPointer));
            			}
            		}
HXLINE(  50)		this->_hx___context->_hx___bindGLTexture2D(null());
HXLINE(  52)		if (optimizeForRenderToTexture) {
HXLINE(  52)			this->_hx___getGLFramebuffer(true,0,0);
            		}
            	}

Dynamic Texture_obj::__CreateEmpty() { return new Texture_obj; }

void *Texture_obj::_hx_vtable = 0;

Dynamic Texture_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Texture_obj > _hx_result = new Texture_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool Texture_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3247d979) {
		if (inClassId<=(int)0x0c89e854) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
		} else {
			return inClassId==(int)0x3247d979;
		}
	} else {
		return inClassId==(int)0x6d550de4;
	}
}

bool Texture_obj::_hx___setSamplerState( ::openfl::display::_internal::SamplerState state){
            	HX_STACKFRAME(&_hx_pos_c910f1c2855eeb73_262___setSamplerState)
HXLINE( 263)		if (this->super::_hx___setSamplerState(state)) {
HXLINE( 265)			 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = this->_hx___context->gl;
HXLINE( 267)			bool _hx_tmp;
HXDLIN( 267)			if (::hx::IsNotEq( state->mipfilter,2 )) {
HXLINE( 267)				_hx_tmp = !(this->_hx___samplerState->mipmapGenerated);
            			}
            			else {
HXLINE( 267)				_hx_tmp = false;
            			}
HXDLIN( 267)			if (_hx_tmp) {
HXLINE( 269)				gl->generateMipmap(gl->TEXTURE_2D);
HXLINE( 270)				this->_hx___samplerState->mipmapGenerated = true;
            			}
HXLINE( 273)			if ((::openfl::display3D::Context3D_obj::_hx___glMaxTextureMaxAnisotropy != 0)) {
HXLINE( 275)				int aniso;
HXDLIN( 275)				 ::Dynamic _hx_switch_0 = state->filter;
            				if (  (_hx_switch_0==0) ){
HXLINE( 275)					aniso = 16;
HXDLIN( 275)					goto _hx_goto_1;
            				}
            				if (  (_hx_switch_0==1) ){
HXLINE( 275)					aniso = 2;
HXDLIN( 275)					goto _hx_goto_1;
            				}
            				if (  (_hx_switch_0==2) ){
HXLINE( 275)					aniso = 4;
HXDLIN( 275)					goto _hx_goto_1;
            				}
            				if (  (_hx_switch_0==3) ){
HXLINE( 275)					aniso = 8;
HXDLIN( 275)					goto _hx_goto_1;
            				}
            				/* default */{
HXLINE( 275)					aniso = 1;
            				}
            				_hx_goto_1:;
HXLINE( 284)				if ((aniso > ::openfl::display3D::Context3D_obj::_hx___glMaxTextureMaxAnisotropy)) {
HXLINE( 286)					aniso = ::openfl::display3D::Context3D_obj::_hx___glMaxTextureMaxAnisotropy;
            				}
HXLINE( 289)				gl->texParameterf(gl->TEXTURE_2D,::openfl::display3D::Context3D_obj::_hx___glTextureMaxAnisotropy,( (Float)(aniso) ));
            			}
HXLINE( 292)			return true;
            		}
HXLINE( 295)		return false;
            	}



::hx::ObjectPtr< Texture_obj > Texture_obj::__new( ::openfl::display3D::Context3D context,int width,int height, ::Dynamic format,bool optimizeForRenderToTexture,int streamingLevels) {
	::hx::ObjectPtr< Texture_obj > __this = new Texture_obj();
	__this->__construct(context,width,height,format,optimizeForRenderToTexture,streamingLevels);
	return __this;
}

::hx::ObjectPtr< Texture_obj > Texture_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::display3D::Context3D context,int width,int height, ::Dynamic format,bool optimizeForRenderToTexture,int streamingLevels) {
	Texture_obj *__this = (Texture_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Texture_obj), true, "openfl.display3D.textures.Texture"));
	*(void **)__this = Texture_obj::_hx_vtable;
	__this->__construct(context,width,height,format,optimizeForRenderToTexture,streamingLevels);
	return __this;
}

Texture_obj::Texture_obj()
{
}

::hx::Val Texture_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"__setSamplerState") ) { return ::hx::Val( _hx___setSamplerState_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Texture_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Texture_obj_sStaticStorageInfo = 0;
#endif

static ::String Texture_obj_sMemberFields[] = {
	HX_("__setSamplerState",8b,e7,cf,5d),
	::String(null()) };

::hx::Class Texture_obj::__mClass;

void Texture_obj::__register()
{
	Texture_obj _hx_dummy;
	Texture_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display3D.textures.Texture",fe,28,30,f1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Texture_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Texture_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Texture_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Texture_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display3D
} // end namespace textures
