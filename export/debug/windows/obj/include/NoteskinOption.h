// Generated by Haxe 4.1.5
#ifndef INCLUDED_NoteskinOption
#define INCLUDED_NoteskinOption

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Option
#include <Option.h>
#endif
HX_DECLARE_CLASS0(NoteskinOption)
HX_DECLARE_CLASS0(Option)



class HXCPP_CLASS_ATTRIBUTES NoteskinOption_obj : public  ::Option_obj
{
	public:
		typedef  ::Option_obj super;
		typedef NoteskinOption_obj OBJ_;
		NoteskinOption_obj();

	public:
		enum { _hx_ClassId = 0x54032b24 };

		void __construct(::String desc);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="NoteskinOption")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"NoteskinOption"); }
		static ::hx::ObjectPtr< NoteskinOption_obj > __new(::String desc);
		static ::hx::ObjectPtr< NoteskinOption_obj > __alloc(::hx::Ctx *_hx_ctx,::String desc);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NoteskinOption_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NoteskinOption",64,a8,17,72); }

		bool left();

		bool right();

		::String getValue();

};


#endif /* INCLUDED_NoteskinOption */ 