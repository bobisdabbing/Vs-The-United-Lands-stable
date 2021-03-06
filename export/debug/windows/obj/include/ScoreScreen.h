// Generated by Haxe 4.1.5
#ifndef INCLUDED_ScoreScreen
#define INCLUDED_ScoreScreen

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Option
#include <Option.h>
#endif
HX_DECLARE_CLASS0(Option)
HX_DECLARE_CLASS0(ScoreScreen)



class HXCPP_CLASS_ATTRIBUTES ScoreScreen_obj : public  ::Option_obj
{
	public:
		typedef  ::Option_obj super;
		typedef ScoreScreen_obj OBJ_;
		ScoreScreen_obj();

	public:
		enum { _hx_ClassId = 0x0895d25e };

		void __construct(::String desc);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="ScoreScreen")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"ScoreScreen"); }
		static ::hx::ObjectPtr< ScoreScreen_obj > __new(::String desc);
		static ::hx::ObjectPtr< ScoreScreen_obj > __alloc(::hx::Ctx *_hx_ctx,::String desc);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ScoreScreen_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ScoreScreen",3e,04,f6,f7); }

		bool press();

		::String updateDisplay();

};


#endif /* INCLUDED_ScoreScreen */ 
