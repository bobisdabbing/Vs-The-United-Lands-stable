// Generated by Haxe 4.1.5
#ifndef INCLUDED_PauseKeybind
#define INCLUDED_PauseKeybind

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Option
#include <Option.h>
#endif
HX_DECLARE_CLASS0(Option)
HX_DECLARE_CLASS0(PauseKeybind)



class HXCPP_CLASS_ATTRIBUTES PauseKeybind_obj : public  ::Option_obj
{
	public:
		typedef  ::Option_obj super;
		typedef PauseKeybind_obj OBJ_;
		PauseKeybind_obj();

	public:
		enum { _hx_ClassId = 0x2e0efcca };

		void __construct(::String desc);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="PauseKeybind")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"PauseKeybind"); }
		static ::hx::ObjectPtr< PauseKeybind_obj > __new(::String desc);
		static ::hx::ObjectPtr< PauseKeybind_obj > __alloc(::hx::Ctx *_hx_ctx,::String desc);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PauseKeybind_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PauseKeybind",a6,42,e3,12); }

		void onType(::String text);

		bool press();

		::String updateDisplay();

};


#endif /* INCLUDED_PauseKeybind */ 
