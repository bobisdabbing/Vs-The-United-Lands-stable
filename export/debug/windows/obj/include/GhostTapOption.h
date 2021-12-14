// Generated by Haxe 4.1.5
#ifndef INCLUDED_GhostTapOption
#define INCLUDED_GhostTapOption

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Option
#include <Option.h>
#endif
HX_DECLARE_CLASS0(GhostTapOption)
HX_DECLARE_CLASS0(Option)



class HXCPP_CLASS_ATTRIBUTES GhostTapOption_obj : public  ::Option_obj
{
	public:
		typedef  ::Option_obj super;
		typedef GhostTapOption_obj OBJ_;
		GhostTapOption_obj();

	public:
		enum { _hx_ClassId = 0x32a093c9 };

		void __construct(::String desc);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="GhostTapOption")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"GhostTapOption"); }
		static ::hx::ObjectPtr< GhostTapOption_obj > __new(::String desc);
		static ::hx::ObjectPtr< GhostTapOption_obj > __alloc(::hx::Ctx *_hx_ctx,::String desc);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GhostTapOption_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GhostTapOption",09,11,b5,50); }

		bool left();

		bool right();

		::String updateDisplay();

};


#endif /* INCLUDED_GhostTapOption */ 
