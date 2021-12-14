// Generated by Haxe 4.1.5
#ifndef INCLUDED_DiffOverview
#define INCLUDED_DiffOverview

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
HX_DECLARE_CLASS0(DiffOverview)
HX_DECLARE_CLASS0(Note)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,FlxSubState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,_hx_system,FlxSound)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES DiffOverview_obj : public  ::flixel::FlxSubState_obj
{
	public:
		typedef  ::flixel::FlxSubState_obj super;
		typedef DiffOverview_obj OBJ_;
		DiffOverview_obj();

	public:
		enum { _hx_ClassId = 0x0a4ec1be };

		void __construct( ::Dynamic BGColor);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="DiffOverview")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"DiffOverview"); }
		static ::hx::ObjectPtr< DiffOverview_obj > __new( ::Dynamic BGColor);
		static ::hx::ObjectPtr< DiffOverview_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic BGColor);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DiffOverview_obj();

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
		::String __ToString() const { return HX_("DiffOverview",fe,6e,6d,21); }

		static void __boot();
		static  ::flixel::group::FlxTypedGroup playerStrums;
		 ::flixel::FlxSprite blackBox;
		::Array< Float > handOne;
		::Array< Float > handTwo;
		 ::flixel::text::FlxText giantText;
		 ::Dynamic SONG;
		 ::flixel::FlxSprite strumLine;
		 ::flixel::FlxCamera camHUD;
		 ::flixel::text::FlxText offset;
		::Array< ::String > dataSuffix;
		::Array< ::String > dataColor;
		void create();

		void generateStaticArrows();
		::Dynamic generateStaticArrows_dyn();

		void endSong();
		::Dynamic endSong_dyn();

		void resyncVocals();
		::Dynamic resyncVocals_dyn();

		bool stopDoingShit;
		int currentStep;
		int oldStep;
		void updateCurStep();
		::Dynamic updateCurStep_dyn();

		void stepHit();
		::Dynamic stepHit_dyn();

		void offsetChange();
		::Dynamic offsetChange_dyn();

		int frames;
		void update(Float elapsed);

		void quit();
		::Dynamic quit_dyn();

		 ::flixel::_hx_system::FlxSound vocals;
		 ::flixel::group::FlxTypedGroup notes;
		::Array< ::Dynamic> unspawnNotes;
		void generateSong(::String dataPath);
		::Dynamic generateSong_dyn();

		int sortByShit( ::Note Obj1, ::Note Obj2);
		::Dynamic sortByShit_dyn();

};


#endif /* INCLUDED_DiffOverview */ 
