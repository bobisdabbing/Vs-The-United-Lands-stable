// Generated by Haxe 4.1.5
#ifndef INCLUDED_OptionsMenu
#define INCLUDED_OptionsMenu

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
HX_DECLARE_CLASS0(Option)
HX_DECLARE_CLASS0(OptionCata)
HX_DECLARE_CLASS0(OptionsMenu)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,FlxSubState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES OptionsMenu_obj : public  ::flixel::FlxSubState_obj
{
	public:
		typedef  ::flixel::FlxSubState_obj super;
		typedef OptionsMenu_obj OBJ_;
		OptionsMenu_obj();

	public:
		enum { _hx_ClassId = 0x109e893d };

		void __construct(::hx::Null< bool >  __o_pauseMenu);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="OptionsMenu")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"OptionsMenu"); }
		static ::hx::ObjectPtr< OptionsMenu_obj > __new(::hx::Null< bool >  __o_pauseMenu);
		static ::hx::ObjectPtr< OptionsMenu_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< bool >  __o_pauseMenu);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~OptionsMenu_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("OptionsMenu",fd,43,a3,5d); }

		static void __boot();
		static  ::OptionsMenu instance;
		static bool isInPause;
		static ::Array< int > visibleRange;
		 ::flixel::FlxSprite background;
		 ::OptionCata selectedCat;
		 ::Option selectedOption;
		int selectedCatIndex;
		int selectedOptionIndex;
		bool isInCat;
		::Array< ::Dynamic> options;
		 ::flixel::group::FlxTypedGroup shownStuff;
		 ::flixel::group::FlxTypedGroup menu;
		 ::flixel::text::FlxText descText;
		 ::flixel::FlxSprite descBack;
		void create();

		void switchCat( ::OptionCata cat,::hx::Null< bool >  checkForOutOfBounds);
		::Dynamic switchCat_dyn();

		void selectOption( ::Option option);
		::Dynamic selectOption_dyn();

		void update(Float elapsed);

};


#endif /* INCLUDED_OptionsMenu */ 
