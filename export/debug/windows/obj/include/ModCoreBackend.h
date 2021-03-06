// Generated by Haxe 4.1.5
#ifndef INCLUDED_ModCoreBackend
#define INCLUDED_ModCoreBackend

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_polymod_backends_OpenFLBackend
#include <polymod/backends/OpenFLBackend.h>
#endif
HX_DECLARE_CLASS0(ModCoreBackend)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(polymod,backends,IBackend)
HX_DECLARE_CLASS2(polymod,backends,LimeBackend)
HX_DECLARE_CLASS2(polymod,backends,OpenFLBackend)



class HXCPP_CLASS_ATTRIBUTES ModCoreBackend_obj : public  ::polymod::backends::OpenFLBackend_obj
{
	public:
		typedef  ::polymod::backends::OpenFLBackend_obj super;
		typedef ModCoreBackend_obj OBJ_;
		ModCoreBackend_obj();

	public:
		enum { _hx_ClassId = 0x0f879c7b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="ModCoreBackend")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"ModCoreBackend"); }
		static ::hx::ObjectPtr< ModCoreBackend_obj > __new();
		static ::hx::ObjectPtr< ModCoreBackend_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ModCoreBackend_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ModCoreBackend",f3,08,20,df); }

		void clearCache();

		bool exists(::String id);

		 ::haxe::io::Bytes getBytes(::String id);

		::String getText(::String id);

		::Array< ::String > list(::String type);

};


#endif /* INCLUDED_ModCoreBackend */ 
