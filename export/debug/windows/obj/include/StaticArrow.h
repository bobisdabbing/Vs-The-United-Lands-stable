// Generated by Haxe 4.1.5
#ifndef INCLUDED_StaticArrow
#define INCLUDED_StaticArrow

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(StaticArrow)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES StaticArrow_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef StaticArrow_obj OBJ_;
		StaticArrow_obj();

	public:
		enum { _hx_ClassId = 0x005c77cb };

		void __construct(Float xx,Float yy);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="StaticArrow")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"StaticArrow"); }
		static ::hx::ObjectPtr< StaticArrow_obj > __new(Float xx,Float yy);
		static ::hx::ObjectPtr< StaticArrow_obj > __alloc(::hx::Ctx *_hx_ctx,Float xx,Float yy);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~StaticArrow_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("StaticArrow",1b,ee,8e,1e); }

		bool modifiedByLua;
		Float modAngle;
		Float localAngle;
		void update(Float elapsed);

		void playAnim(::String AnimName, ::Dynamic force);
		::Dynamic playAnim_dyn();

};


#endif /* INCLUDED_StaticArrow */ 
