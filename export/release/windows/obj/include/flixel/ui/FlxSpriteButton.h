// Generated by Haxe 4.1.5
#ifndef INCLUDED_flixel_ui_FlxSpriteButton
#define INCLUDED_flixel_ui_FlxSpriteButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_ui_FlxTypedButton_flixel_FlxSprite
#include <flixel/ui/FlxTypedButton_flixel_FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,input,IFlxInput)
HX_DECLARE_CLASS2(flixel,ui,FlxSpriteButton)
HX_DECLARE_CLASS2(flixel,ui,FlxTypedButton_flixel_FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES FlxSpriteButton_obj : public  ::flixel::ui::FlxTypedButton_flixel_FlxSprite_obj
{
	public:
		typedef  ::flixel::ui::FlxTypedButton_flixel_FlxSprite_obj super;
		typedef FlxSpriteButton_obj OBJ_;
		FlxSpriteButton_obj();

	public:
		enum { _hx_ClassId = 0x19c9b491 };

		void __construct(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y, ::flixel::FlxSprite Label, ::Dynamic OnClick);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.ui.FlxSpriteButton")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.ui.FlxSpriteButton"); }
		static ::hx::ObjectPtr< FlxSpriteButton_obj > __new(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y, ::flixel::FlxSprite Label, ::Dynamic OnClick);
		static ::hx::ObjectPtr< FlxSpriteButton_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y, ::flixel::FlxSprite Label, ::Dynamic OnClick);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxSpriteButton_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxSpriteButton",49,ff,fc,c9); }

};

} // end namespace flixel
} // end namespace ui

#endif /* INCLUDED_flixel_ui_FlxSpriteButton */ 
