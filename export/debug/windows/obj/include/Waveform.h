// Generated by Haxe 4.1.5
#ifndef INCLUDED_Waveform
#define INCLUDED_Waveform

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(Waveform)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,media,AudioBuffer)



class HXCPP_CLASS_ATTRIBUTES Waveform_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef Waveform_obj OBJ_;
		Waveform_obj();

	public:
		enum { _hx_ClassId = 0x26ad465d };

		void __construct(int x,int y,::String audioPath,int height);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Waveform")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"Waveform"); }
		static ::hx::ObjectPtr< Waveform_obj > __new(int x,int y,::String audioPath,int height);
		static ::hx::ObjectPtr< Waveform_obj > __alloc(::hx::Ctx *_hx_ctx,int x,int y,::String audioPath,int height);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Waveform_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Waveform",9d,53,1c,cb); }

		 ::lime::media::AudioBuffer buffer;
		 ::haxe::io::Bytes data;
		int length;
		void drawWaveform();
		::Dynamic drawWaveform_dyn();

};


#endif /* INCLUDED_Waveform */ 
