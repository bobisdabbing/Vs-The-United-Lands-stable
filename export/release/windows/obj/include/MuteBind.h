// Generated by Haxe 4.1.5
#ifndef INCLUDED_MuteBind
#define INCLUDED_MuteBind

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Option
#include <Option.h>
#endif
HX_DECLARE_CLASS0(MuteBind)
HX_DECLARE_CLASS0(Option)



class HXCPP_CLASS_ATTRIBUTES MuteBind_obj : public  ::Option_obj
{
	public:
		typedef  ::Option_obj super;
		typedef MuteBind_obj OBJ_;
		MuteBind_obj();

	public:
		enum { _hx_ClassId = 0x45db2016 };

		void __construct(::String desc);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="MuteBind")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"MuteBind"); }
		static ::hx::ObjectPtr< MuteBind_obj > __new(::String desc);
		static ::hx::ObjectPtr< MuteBind_obj > __alloc(::hx::Ctx *_hx_ctx,::String desc);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MuteBind_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MuteBind",56,2d,4a,ea); }

		void onType(::String text);

		bool press();

		::String updateDisplay();

};


#endif /* INCLUDED_MuteBind */ 
