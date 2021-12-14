// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Debug
#include <Debug.h>
#endif
#ifndef INCLUDED_ImageOutline
#include <ImageOutline.h>
#endif
#ifndef INCLUDED_KadeEngineFPS
#include <KadeEngineFPS.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_ModCore
#include <ModCore.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_TitleState
#include <TitleState.h>
#endif
#ifndef INCLUDED_WebmHandler
#include <WebmHandler.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif
#ifndef INCLUDED_openfl_utils_IAssetCache
#include <openfl/utils/IAssetCache.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e47a9afac0942eb9_20_new,"Main","new",0x6616a5cb,"Main.new","Main.hx",20,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_64_init,"Main","init",0xea732345,"Main.init","Main.hx",64,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_74_setupGame,"Main","setupGame",0x7f7688ba,"Main.setupGame","Main.hx",74,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_140_toggleFPS,"Main","toggleFPS",0x9eefd060,"Main.toggleFPS","Main.hx",140,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_145_changeFPSColor,"Main","changeFPSColor",0xbde8c2bf,"Main.changeFPSColor","Main.hx",145,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_150_setFPSCap,"Main","setFPSCap",0x4fb5c496,"Main.setFPSCap","Main.hx",150,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_155_getFPSCap,"Main","getFPSCap",0x6c64d88a,"Main.getFPSCap","Main.hx",155,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_160_getFPS,"Main","getFPS",0xd3c70468,"Main.getFPS","Main.hx",160,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_42_main,"Main","main",0xed0e206e,"Main.main","Main.hx",42,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_122_dumpCache,"Main","dumpCache",0xbbc26819,"Main.dumpCache","Main.hx",122,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_34_boot,"Main","boot",0xe5d36c67,"Main.boot","Main.hx",34,0x087e5c05)

void Main_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_e47a9afac0942eb9_20_new)
HXLINE(  28)		this->startFullscreen = false;
HXLINE(  27)		this->skipSplash = true;
HXLINE(  26)		this->framerate = 120;
HXLINE(  25)		this->zoom = ((Float)-1);
HXLINE(  24)		this->initialState = ::hx::ClassOf< ::TitleState >();
HXLINE(  23)		this->gameHeight = 720;
HXLINE(  22)		this->gameWidth = 1280;
HXLINE(  47)		::Main_obj::instance = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  49)		super::__construct();
HXLINE(  51)		if (::hx::IsNotNull( this->stage )) {
HXLINE(  53)			this->init(null());
            		}
            		else {
HXLINE(  57)			this->addEventListener(HX_("addedToStage",63,22,55,0c),this->init_dyn(),null(),null(),null());
            		}
            	}

Dynamic Main_obj::__CreateEmpty() { return new Main_obj; }

void *Main_obj::_hx_vtable = 0;

Dynamic Main_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Main_obj > _hx_result = new Main_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Main_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		if (inClassId<=(int)0x07825a7d) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x07825a7d;
			}
		} else {
			return inClassId==(int)0x0c89e854;
		}
	} else {
		if (inClassId<=(int)0x4af7dd8e) {
			return inClassId==(int)0x1f4df417 || inClassId==(int)0x4af7dd8e;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

void Main_obj::init( ::openfl::events::Event E){
            	HX_STACKFRAME(&_hx_pos_e47a9afac0942eb9_64_init)
HXLINE(  65)		if (this->hasEventListener(HX_("addedToStage",63,22,55,0c))) {
HXLINE(  67)			this->removeEventListener(HX_("addedToStage",63,22,55,0c),this->init_dyn(),null());
            		}
HXLINE(  70)		this->setupGame();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,init,(void))

void Main_obj::setupGame(){
            	HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_74_setupGame)
HXLINE(  75)		int stageWidth = ::openfl::Lib_obj::get_current()->stage->stageWidth;
HXLINE(  76)		int stageHeight = ::openfl::Lib_obj::get_current()->stage->stageHeight;
HXLINE(  78)		if ((this->zoom == -1)) {
HXLINE(  80)			Float ratioX = (( (Float)(stageWidth) ) / ( (Float)(this->gameWidth) ));
HXLINE(  81)			Float ratioY = (( (Float)(stageHeight) ) / ( (Float)(this->gameHeight) ));
HXLINE(  82)			this->zoom = ::Math_obj::min(ratioX,ratioY);
HXLINE(  83)			this->gameWidth = ::Math_obj::ceil((( (Float)(stageWidth) ) / this->zoom));
HXLINE(  84)			this->gameHeight = ::Math_obj::ceil((( (Float)(stageHeight) ) / this->zoom));
            		}
HXLINE(  92)		::Debug_obj::onInitProgram();
HXLINE(  95)		::ModCore_obj::initialize();
HXLINE(  98)		this->fpsCounter =  ::KadeEngineFPS_obj::__alloc( HX_CTX ,10,3,16777215);
HXLINE(  99)		::Main_obj::bitmapFPS = ::ImageOutline_obj::renderImage(this->fpsCounter,1,0,null(),true,null());
HXLINE( 100)		::Main_obj::bitmapFPS->smoothing = true;
HXLINE( 103)		this->game =  ::flixel::FlxGame_obj::__alloc( HX_CTX ,this->gameWidth,this->gameHeight,this->initialState,this->zoom,this->framerate,this->framerate,this->skipSplash,this->startFullscreen);
HXLINE( 104)		this->addChild(this->game);
HXLINE( 107)		this->addChild(this->fpsCounter);
HXLINE( 108)		this->toggleFPS(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("fps",e9,c7,4d,00),::hx::paccDynamic)) ));
HXLINE( 112)		::Debug_obj::onGameStart();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,setupGame,(void))

void Main_obj::toggleFPS(bool fpsEnabled){
            	HX_STACKFRAME(&_hx_pos_e47a9afac0942eb9_140_toggleFPS)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,toggleFPS,(void))

void Main_obj::changeFPSColor(int color){
            	HX_STACKFRAME(&_hx_pos_e47a9afac0942eb9_145_changeFPSColor)
HXDLIN( 145)		this->fpsCounter->set_textColor(color);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,changeFPSColor,(void))

void Main_obj::setFPSCap(Float cap){
            	HX_STACKFRAME(&_hx_pos_e47a9afac0942eb9_150_setFPSCap)
HXDLIN( 150)		::openfl::Lib_obj::get_current()->stage->set_frameRate(cap);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,setFPSCap,(void))

Float Main_obj::getFPSCap(){
            	HX_STACKFRAME(&_hx_pos_e47a9afac0942eb9_155_getFPSCap)
HXDLIN( 155)		return ::openfl::Lib_obj::get_current()->stage->get_frameRate();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,getFPSCap,return )

Float Main_obj::getFPS(){
            	HX_STACKFRAME(&_hx_pos_e47a9afac0942eb9_160_getFPS)
HXDLIN( 160)		return ( (Float)(this->fpsCounter->currentFPS) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,getFPS,return )

 ::openfl::display::Bitmap Main_obj::bitmapFPS;

 ::Main Main_obj::instance;

bool Main_obj::watermarks;

void Main_obj::main(){
            	HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_42_main)
HXDLIN(  42)		 ::openfl::display::MovieClip _hx_tmp = ::openfl::Lib_obj::get_current();
HXDLIN(  42)		_hx_tmp->addChild( ::Main_obj::__alloc( HX_CTX ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,main,(void))

 ::WebmHandler Main_obj::webmHandler;

void Main_obj::dumpCache(){
            	HX_STACKFRAME(&_hx_pos_e47a9afac0942eb9_122_dumpCache)
HXLINE( 125)		{
HXLINE( 125)			 ::Dynamic key = ::flixel::FlxG_obj::bitmap->_cache->keys();
HXDLIN( 125)			while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 125)				::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 127)				 ::flixel::graphics::FlxGraphic obj = ( ( ::flixel::graphics::FlxGraphic)(::flixel::FlxG_obj::bitmap->_cache->get(key1)) );
HXLINE( 128)				if (::hx::IsNotNull( obj )) {
HXLINE( 130)					::openfl::utils::IAssetCache_obj::removeBitmapData(::openfl::utils::Assets_obj::cache,key1);
HXLINE( 131)					::flixel::FlxG_obj::bitmap->_cache->remove(key1);
HXLINE( 132)					obj->destroy();
            				}
            			}
            		}
HXLINE( 135)		::openfl::utils::IAssetCache_obj::clear(::openfl::utils::Assets_obj::cache,HX_("songs",fe,36,c7,80));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,dumpCache,(void))


::hx::ObjectPtr< Main_obj > Main_obj::__new() {
	::hx::ObjectPtr< Main_obj > __this = new Main_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Main_obj > Main_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Main_obj *__this = (Main_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Main_obj), true, "Main"));
	*(void **)__this = Main_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Main_obj::Main_obj()
{
}

void Main_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Main);
	HX_MARK_MEMBER_NAME(gameWidth,"gameWidth");
	HX_MARK_MEMBER_NAME(gameHeight,"gameHeight");
	HX_MARK_MEMBER_NAME(initialState,"initialState");
	HX_MARK_MEMBER_NAME(zoom,"zoom");
	HX_MARK_MEMBER_NAME(framerate,"framerate");
	HX_MARK_MEMBER_NAME(skipSplash,"skipSplash");
	HX_MARK_MEMBER_NAME(startFullscreen,"startFullscreen");
	HX_MARK_MEMBER_NAME(game,"game");
	HX_MARK_MEMBER_NAME(fpsCounter,"fpsCounter");
	 ::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gameWidth,"gameWidth");
	HX_VISIT_MEMBER_NAME(gameHeight,"gameHeight");
	HX_VISIT_MEMBER_NAME(initialState,"initialState");
	HX_VISIT_MEMBER_NAME(zoom,"zoom");
	HX_VISIT_MEMBER_NAME(framerate,"framerate");
	HX_VISIT_MEMBER_NAME(skipSplash,"skipSplash");
	HX_VISIT_MEMBER_NAME(startFullscreen,"startFullscreen");
	HX_VISIT_MEMBER_NAME(game,"game");
	HX_VISIT_MEMBER_NAME(fpsCounter,"fpsCounter");
	 ::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Main_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"zoom") ) { return ::hx::Val( zoom ); }
		if (HX_FIELD_EQ(inName,"init") ) { return ::hx::Val( init_dyn() ); }
		if (HX_FIELD_EQ(inName,"game") ) { return ::hx::Val( game ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"getFPS") ) { return ::hx::Val( getFPS_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"gameWidth") ) { return ::hx::Val( gameWidth ); }
		if (HX_FIELD_EQ(inName,"framerate") ) { return ::hx::Val( framerate ); }
		if (HX_FIELD_EQ(inName,"setupGame") ) { return ::hx::Val( setupGame_dyn() ); }
		if (HX_FIELD_EQ(inName,"toggleFPS") ) { return ::hx::Val( toggleFPS_dyn() ); }
		if (HX_FIELD_EQ(inName,"setFPSCap") ) { return ::hx::Val( setFPSCap_dyn() ); }
		if (HX_FIELD_EQ(inName,"getFPSCap") ) { return ::hx::Val( getFPSCap_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"gameHeight") ) { return ::hx::Val( gameHeight ); }
		if (HX_FIELD_EQ(inName,"skipSplash") ) { return ::hx::Val( skipSplash ); }
		if (HX_FIELD_EQ(inName,"fpsCounter") ) { return ::hx::Val( fpsCounter ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"initialState") ) { return ::hx::Val( initialState ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"changeFPSColor") ) { return ::hx::Val( changeFPSColor_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"startFullscreen") ) { return ::hx::Val( startFullscreen ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Main_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { outValue = main_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = ( instance ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"bitmapFPS") ) { outValue = ( bitmapFPS ); return true; }
		if (HX_FIELD_EQ(inName,"dumpCache") ) { outValue = dumpCache_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"watermarks") ) { outValue = ( watermarks ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"webmHandler") ) { outValue = ( webmHandler ); return true; }
	}
	return false;
}

::hx::Val Main_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"zoom") ) { zoom=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"game") ) { game=inValue.Cast<  ::flixel::FlxGame >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"gameWidth") ) { gameWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"framerate") ) { framerate=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"gameHeight") ) { gameHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"skipSplash") ) { skipSplash=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fpsCounter") ) { fpsCounter=inValue.Cast<  ::KadeEngineFPS >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"initialState") ) { initialState=inValue.Cast< ::hx::Class >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"startFullscreen") ) { startFullscreen=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Main_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast<  ::Main >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"bitmapFPS") ) { bitmapFPS=ioValue.Cast<  ::openfl::display::Bitmap >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"watermarks") ) { watermarks=ioValue.Cast< bool >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"webmHandler") ) { webmHandler=ioValue.Cast<  ::WebmHandler >(); return true; }
	}
	return false;
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("gameWidth",b4,a4,7d,ff));
	outFields->push(HX_("gameHeight",79,f1,c1,44));
	outFields->push(HX_("initialState",ed,76,1b,48));
	outFields->push(HX_("zoom",13,a3,f8,50));
	outFields->push(HX_("framerate",8d,e5,4b,4e));
	outFields->push(HX_("skipSplash",46,75,9c,27));
	outFields->push(HX_("startFullscreen",3d,c1,ee,2d));
	outFields->push(HX_("game",f2,f3,5e,44));
	outFields->push(HX_("fpsCounter",13,ce,9d,83));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Main_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Main_obj,gameWidth),HX_("gameWidth",b4,a4,7d,ff)},
	{::hx::fsInt,(int)offsetof(Main_obj,gameHeight),HX_("gameHeight",79,f1,c1,44)},
	{::hx::fsObject /* ::hx::Class */ ,(int)offsetof(Main_obj,initialState),HX_("initialState",ed,76,1b,48)},
	{::hx::fsFloat,(int)offsetof(Main_obj,zoom),HX_("zoom",13,a3,f8,50)},
	{::hx::fsInt,(int)offsetof(Main_obj,framerate),HX_("framerate",8d,e5,4b,4e)},
	{::hx::fsBool,(int)offsetof(Main_obj,skipSplash),HX_("skipSplash",46,75,9c,27)},
	{::hx::fsBool,(int)offsetof(Main_obj,startFullscreen),HX_("startFullscreen",3d,c1,ee,2d)},
	{::hx::fsObject /*  ::flixel::FlxGame */ ,(int)offsetof(Main_obj,game),HX_("game",f2,f3,5e,44)},
	{::hx::fsObject /*  ::KadeEngineFPS */ ,(int)offsetof(Main_obj,fpsCounter),HX_("fpsCounter",13,ce,9d,83)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Main_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::Bitmap */ ,(void *) &Main_obj::bitmapFPS,HX_("bitmapFPS",3a,b3,d6,c6)},
	{::hx::fsObject /*  ::Main */ ,(void *) &Main_obj::instance,HX_("instance",95,1f,e1,59)},
	{::hx::fsBool,(void *) &Main_obj::watermarks,HX_("watermarks",4f,00,bb,3a)},
	{::hx::fsObject /*  ::WebmHandler */ ,(void *) &Main_obj::webmHandler,HX_("webmHandler",71,c7,d0,f2)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Main_obj_sMemberFields[] = {
	HX_("gameWidth",b4,a4,7d,ff),
	HX_("gameHeight",79,f1,c1,44),
	HX_("initialState",ed,76,1b,48),
	HX_("zoom",13,a3,f8,50),
	HX_("framerate",8d,e5,4b,4e),
	HX_("skipSplash",46,75,9c,27),
	HX_("startFullscreen",3d,c1,ee,2d),
	HX_("init",10,3b,bb,45),
	HX_("setupGame",0f,51,ed,9e),
	HX_("game",f2,f3,5e,44),
	HX_("fpsCounter",13,ce,9d,83),
	HX_("toggleFPS",b5,98,66,be),
	HX_("changeFPSColor",4a,a6,32,2f),
	HX_("setFPSCap",eb,8c,2c,6f),
	HX_("getFPSCap",df,a0,db,8b),
	HX_("getFPS",f3,e4,1c,a3),
	::String(null()) };

static void Main_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::bitmapFPS,"bitmapFPS");
	HX_MARK_MEMBER_NAME(Main_obj::instance,"instance");
	HX_MARK_MEMBER_NAME(Main_obj::watermarks,"watermarks");
	HX_MARK_MEMBER_NAME(Main_obj::webmHandler,"webmHandler");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Main_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::bitmapFPS,"bitmapFPS");
	HX_VISIT_MEMBER_NAME(Main_obj::instance,"instance");
	HX_VISIT_MEMBER_NAME(Main_obj::watermarks,"watermarks");
	HX_VISIT_MEMBER_NAME(Main_obj::webmHandler,"webmHandler");
};

#endif

::hx::Class Main_obj::__mClass;

static ::String Main_obj_sStaticFields[] = {
	HX_("bitmapFPS",3a,b3,d6,c6),
	HX_("instance",95,1f,e1,59),
	HX_("watermarks",4f,00,bb,3a),
	HX_("main",39,38,56,48),
	HX_("webmHandler",71,c7,d0,f2),
	HX_("dumpCache",6e,30,39,db),
	::String(null())
};

void Main_obj::__register()
{
	Main_obj _hx_dummy;
	Main_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Main",59,64,2f,33);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Main_obj::__GetStatic;
	__mClass->mSetStaticField = &Main_obj::__SetStatic;
	__mClass->mMarkFunc = Main_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Main_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Main_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Main_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Main_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Main_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Main_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Main_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_e47a9afac0942eb9_34_boot)
HXDLIN(  34)		watermarks = true;
            	}
}
