// Generated by Haxe 4.1.5
#ifndef INCLUDED_DebugMode
#define INCLUDED_DebugMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Option
#include <Option.h>
#endif
HX_DECLARE_CLASS0(DebugMode)
HX_DECLARE_CLASS0(Option)



class HXCPP_CLASS_ATTRIBUTES DebugMode_obj : public  ::Option_obj
{
	public:
		typedef  ::Option_obj super;
		typedef DebugMode_obj OBJ_;
		DebugMode_obj();

	public:
		enum { _hx_ClassId = 0x3f899e92 };

		void __construct(::String desc);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="DebugMode")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"DebugMode"); }
		static ::hx::ObjectPtr< DebugMode_obj > __new(::String desc);
		static ::hx::ObjectPtr< DebugMode_obj > __alloc(::hx::Ctx *_hx_ctx,::String desc);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DebugMode_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DebugMode",36,57,7f,cd); }

		bool press();

		::String updateDisplay();

};


#endif /* INCLUDED_DebugMode */ 