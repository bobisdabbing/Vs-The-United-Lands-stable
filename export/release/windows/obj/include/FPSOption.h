// Generated by Haxe 4.1.5
#ifndef INCLUDED_FPSOption
#define INCLUDED_FPSOption

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Option
#include <Option.h>
#endif
HX_DECLARE_CLASS0(FPSOption)
HX_DECLARE_CLASS0(Option)



class HXCPP_CLASS_ATTRIBUTES FPSOption_obj : public  ::Option_obj
{
	public:
		typedef  ::Option_obj super;
		typedef FPSOption_obj OBJ_;
		FPSOption_obj();

	public:
		enum { _hx_ClassId = 0x2c8e9d5e };

		void __construct(::String desc);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="FPSOption")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"FPSOption"); }
		static ::hx::ObjectPtr< FPSOption_obj > __new(::String desc);
		static ::hx::ObjectPtr< FPSOption_obj > __alloc(::hx::Ctx *_hx_ctx,::String desc);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FPSOption_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FPSOption",1e,28,4b,69); }

		bool left();

		bool right();

		::String updateDisplay();

};


#endif /* INCLUDED_FPSOption */ 
