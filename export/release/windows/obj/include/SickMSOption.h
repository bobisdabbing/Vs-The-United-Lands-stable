// Generated by Haxe 4.1.5
#ifndef INCLUDED_SickMSOption
#define INCLUDED_SickMSOption

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Option
#include <Option.h>
#endif
HX_DECLARE_CLASS0(Option)
HX_DECLARE_CLASS0(SickMSOption)



class HXCPP_CLASS_ATTRIBUTES SickMSOption_obj : public  ::Option_obj
{
	public:
		typedef  ::Option_obj super;
		typedef SickMSOption_obj OBJ_;
		SickMSOption_obj();

	public:
		enum { _hx_ClassId = 0x112503e1 };

		void __construct(::String desc);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="SickMSOption")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"SickMSOption"); }
		static ::hx::ObjectPtr< SickMSOption_obj > __new(::String desc);
		static ::hx::ObjectPtr< SickMSOption_obj > __alloc(::hx::Ctx *_hx_ctx,::String desc);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SickMSOption_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SickMSOption",59,e2,ae,c3); }

		bool left();

		bool right();

		void onType(::String _hx_char);

		::String updateDisplay();

};


#endif /* INCLUDED_SickMSOption */ 