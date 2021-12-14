// Generated by Haxe 4.1.5
#ifndef INCLUDED_lime_ui_Window
#define INCLUDED_lime_ui_Window

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,_internal,backend,native,NativeWindow)
HX_DECLARE_CLASS2(lime,app,Application)
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(lime,app,Module)
HX_DECLARE_CLASS2(lime,app,_Event_Float_Float_Int_Void)
HX_DECLARE_CLASS2(lime,app,_Event_Float_Float_Void)
HX_DECLARE_CLASS2(lime,app,_Event_Float_Float_lime_ui_MouseButton_Void)
HX_DECLARE_CLASS2(lime,app,_Event_Float_Float_lime_ui_MouseWheelMode_Void)
HX_DECLARE_CLASS2(lime,app,_Event_Int_Int_Void)
HX_DECLARE_CLASS2(lime,app,_Event_String_Int_Int_Void)
HX_DECLARE_CLASS2(lime,app,_Event_String_Void)
HX_DECLARE_CLASS2(lime,app,_Event_Void_Void)
HX_DECLARE_CLASS2(lime,app,_Event_lime_graphics_RenderContext_Void)
HX_DECLARE_CLASS2(lime,app,_Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void)
HX_DECLARE_CLASS2(lime,graphics,RenderContext)
HX_DECLARE_CLASS2(lime,_hx_system,DisplayMode)
HX_DECLARE_CLASS2(lime,ui,MouseCursor)
HX_DECLARE_CLASS2(lime,ui,Window)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Stage)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace lime{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES Window_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Window_obj OBJ_;
		Window_obj();

	public:
		enum { _hx_ClassId = 0x7d946485 };

		void __construct( ::lime::app::Application application, ::Dynamic attributes);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime.ui.Window")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"lime.ui.Window"); }
		static ::hx::ObjectPtr< Window_obj > __new( ::lime::app::Application application, ::Dynamic attributes);
		static ::hx::ObjectPtr< Window_obj > __alloc(::hx::Ctx *_hx_ctx, ::lime::app::Application application, ::Dynamic attributes);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Window_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Window",10,08,21,87); }

		 ::lime::app::Application application;
		 ::lime::graphics::RenderContext context;
		int id;
		 ::lime::app::_Event_Void_Void onActivate;
		 ::lime::app::_Event_Void_Void onClose;
		 ::lime::app::_Event_Void_Void onDeactivate;
		 ::lime::app::_Event_String_Void onDropFile;
		 ::lime::app::_Event_Void_Void onEnter;
		 ::lime::app::_Event_Void_Void onExpose;
		 ::lime::app::_Event_Void_Void onFocusIn;
		 ::lime::app::_Event_Void_Void onFocusOut;
		 ::lime::app::_Event_Void_Void onFullscreen;
		 ::lime::app::_Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void onKeyDown;
		 ::lime::app::_Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void onKeyUp;
		 ::lime::app::_Event_Void_Void onLeave;
		 ::lime::app::_Event_Void_Void onMaximize;
		 ::lime::app::_Event_Void_Void onMinimize;
		 ::lime::app::_Event_Float_Float_lime_ui_MouseButton_Void onMouseDown;
		 ::lime::app::_Event_Float_Float_Void onMouseMove;
		 ::lime::app::_Event_Float_Float_Void onMouseMoveRelative;
		 ::lime::app::_Event_Float_Float_Int_Void onMouseUp;
		 ::lime::app::_Event_Float_Float_lime_ui_MouseWheelMode_Void onMouseWheel;
		 ::lime::app::_Event_Float_Float_Void onMove;
		 ::lime::app::_Event_lime_graphics_RenderContext_Void onRender;
		 ::lime::app::_Event_Void_Void onRenderContextLost;
		 ::lime::app::_Event_lime_graphics_RenderContext_Void onRenderContextRestored;
		 ::lime::app::_Event_Int_Int_Void onResize;
		 ::lime::app::_Event_Void_Void onRestore;
		 ::lime::app::_Event_String_Int_Int_Void onTextEdit;
		 ::lime::app::_Event_String_Void onTextInput;
		 ::Dynamic parameters;
		 ::openfl::display::Stage stage;
		 ::Dynamic _hx___attributes;
		 ::lime::_internal::backend::native::NativeWindow _hx___backend;
		bool _hx___fullscreen;
		int _hx___height;
		bool _hx___hidden;
		bool _hx___maximized;
		bool _hx___minimized;
		Float _hx___scale;
		::String _hx___title;
		int _hx___width;
		int _hx___x;
		int _hx___y;
		void alert(::String message,::String title);
		::Dynamic alert_dyn();

		void close();
		::Dynamic close_dyn();

		 ::lime::ui::MouseCursor set_cursor( ::lime::ui::MouseCursor value);
		::Dynamic set_cursor_dyn();

		 ::lime::_hx_system::DisplayMode get_displayMode();
		::Dynamic get_displayMode_dyn();

		bool set_fullscreen(bool value);
		::Dynamic set_fullscreen_dyn();

};

} // end namespace lime
} // end namespace ui

#endif /* INCLUDED_lime_ui_Window */ 
