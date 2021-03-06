// Generated by Haxe 4.1.5
#ifndef INCLUDED_GlobalVideo
#define INCLUDED_GlobalVideo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(GlobalVideo)
HX_DECLARE_CLASS0(VideoHandler)
HX_DECLARE_CLASS0(WebmHandler)



class HXCPP_CLASS_ATTRIBUTES GlobalVideo_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef GlobalVideo_obj OBJ_;
		GlobalVideo_obj();

	public:
		enum { _hx_ClassId = 0x040cd218 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="GlobalVideo")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"GlobalVideo"); }

		inline static ::hx::ObjectPtr< GlobalVideo_obj > __new() {
			::hx::ObjectPtr< GlobalVideo_obj > __this = new GlobalVideo_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< GlobalVideo_obj > __alloc(::hx::Ctx *_hx_ctx) {
			GlobalVideo_obj *__this = (GlobalVideo_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GlobalVideo_obj), false, "GlobalVideo"));
			*(void **)__this = GlobalVideo_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GlobalVideo_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GlobalVideo",f8,03,6d,f3); }

		static void __boot();
		static  ::VideoHandler video;
		static  ::WebmHandler webm;
		static bool isWebm;
		static  ::VideoHandler getVid();
		static ::Dynamic getVid_dyn();

		static void setWebm( ::WebmHandler vid);
		static ::Dynamic setWebm_dyn();

		static  ::WebmHandler getWebm();
		static ::Dynamic getWebm_dyn();

		static  ::Dynamic get();
		static ::Dynamic get_dyn();

};


#endif /* INCLUDED_GlobalVideo */ 
