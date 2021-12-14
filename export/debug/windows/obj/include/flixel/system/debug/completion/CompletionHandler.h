// Generated by Haxe 4.1.5
#ifndef INCLUDED_flixel_system_debug_completion_CompletionHandler
#define INCLUDED_flixel_system_debug_completion_CompletionHandler

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(flixel,_hx_system,debug,completion,CompletionHandler)
HX_DECLARE_CLASS4(flixel,_hx_system,debug,completion,CompletionList)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,KeyboardEvent)
HX_DECLARE_CLASS2(openfl,text,TextField)

namespace flixel{
namespace _hx_system{
namespace debug{
namespace completion{


class HXCPP_CLASS_ATTRIBUTES CompletionHandler_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef CompletionHandler_obj OBJ_;
		CompletionHandler_obj();

	public:
		enum { _hx_ClassId = 0x0b77950e };

		void __construct( ::flixel::_hx_system::debug::completion::CompletionList completionList, ::openfl::text::TextField input);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug.completion.CompletionHandler")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.system.debug.completion.CompletionHandler"); }
		static ::hx::ObjectPtr< CompletionHandler_obj > __new( ::flixel::_hx_system::debug::completion::CompletionList completionList, ::openfl::text::TextField input);
		static ::hx::ObjectPtr< CompletionHandler_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::_hx_system::debug::completion::CompletionList completionList, ::openfl::text::TextField input);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CompletionHandler_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CompletionHandler",ee,a7,38,fd); }

		static void __boot();
		static ::String ENTRY_VALUE;
		static ::String ENTRY_TYPE;
		 ::flixel::_hx_system::debug::completion::CompletionList completionList;
		 ::openfl::text::TextField input;
		bool watchingSelection;
		::String getTextUntilCaret();
		::Dynamic getTextUntilCaret_dyn();

		int getCaretIndex();
		::Dynamic getCaretIndex_dyn();

		void onKeyUp( ::openfl::events::KeyboardEvent e);
		::Dynamic onKeyUp_dyn();

		void invokeCompletion(::String path,bool isPeriod);
		::Dynamic invokeCompletion_dyn();

		::Array< ::String > getGlobals();
		::Dynamic getGlobals_dyn();

		Float getCharXPosition();
		::Dynamic getCharXPosition_dyn();

		::String getCompletedText(::String text,::String selectedItem);
		::Dynamic getCompletedText_dyn();

		void completed(::String selectedItem);
		::Dynamic completed_dyn();

		void selectionChanged(::String selectedItem);
		::Dynamic selectionChanged_dyn();

		::String getReadableType( ::Dynamic v);
		::Dynamic getReadableType_dyn();

		void completionClosed();
		::Dynamic completionClosed_dyn();

		::String getPathBeforeDot(::String text);
		::Dynamic getPathBeforeDot_dyn();

		::String getWordAfterDot(::String text);
		::Dynamic getWordAfterDot_dyn();

		::String getLastWord(::String text);
		::Dynamic getLastWord_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace completion

#endif /* INCLUDED_flixel_system_debug_completion_CompletionHandler */ 
