// Generated by Haxe 4.1.5
#ifndef INCLUDED_UpKeybind
#define INCLUDED_UpKeybind

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Option
#include <Option.h>
#endif
HX_DECLARE_CLASS0(Option)
HX_DECLARE_CLASS0(UpKeybind)



class HXCPP_CLASS_ATTRIBUTES UpKeybind_obj : public  ::Option_obj
{
	public:
		typedef  ::Option_obj super;
		typedef UpKeybind_obj OBJ_;
		UpKeybind_obj();

	public:
		enum { _hx_ClassId = 0x50e5a2e1 };

		void __construct(::String desc);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="UpKeybind")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"UpKeybind"); }
		static ::hx::ObjectPtr< UpKeybind_obj > __new(::String desc);
		static ::hx::ObjectPtr< UpKeybind_obj > __alloc(::hx::Ctx *_hx_ctx,::String desc);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~UpKeybind_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("UpKeybind",a1,2d,a2,8d); }

		void onType(::String text);

		bool press();

		::String updateDisplay();

};


#endif /* INCLUDED_UpKeybind */ 
