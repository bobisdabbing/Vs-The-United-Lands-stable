// Generated by Haxe 4.1.5
#ifndef INCLUDED_GoodMsOption
#define INCLUDED_GoodMsOption

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Option
#include <Option.h>
#endif
HX_DECLARE_CLASS0(GoodMsOption)
HX_DECLARE_CLASS0(Option)



class HXCPP_CLASS_ATTRIBUTES GoodMsOption_obj : public  ::Option_obj
{
	public:
		typedef  ::Option_obj super;
		typedef GoodMsOption_obj OBJ_;
		GoodMsOption_obj();

	public:
		enum { _hx_ClassId = 0x0e602cb8 };

		void __construct(::String desc);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="GoodMsOption")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"GoodMsOption"); }
		static ::hx::ObjectPtr< GoodMsOption_obj > __new(::String desc);
		static ::hx::ObjectPtr< GoodMsOption_obj > __alloc(::hx::Ctx *_hx_ctx,::String desc);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GoodMsOption_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GoodMsOption",f8,d9,7e,25); }

		bool left();

		bool right();

		void onType(::String _hx_char);

		::String updateDisplay();

};


#endif /* INCLUDED_GoodMsOption */ 
