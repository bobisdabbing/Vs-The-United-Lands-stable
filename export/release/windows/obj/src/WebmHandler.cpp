// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_WebmHandler
#include <WebmHandler.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_webm_WebmIo
#include <webm/WebmIo.h>
#endif
#ifndef INCLUDED_webm_WebmIoFile
#include <webm/WebmIoFile.h>
#endif
#ifndef INCLUDED_webm_WebmPlayer
#include <webm/WebmPlayer.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b6d9a5cb8ab7eda1_9_new,"WebmHandler","new",0xe7cf7cc3,"WebmHandler.new","WebmHandler.hx",9,0x2dcf8c0d)
HX_LOCAL_STACK_FRAME(_hx_pos_b6d9a5cb8ab7eda1_23_source,"WebmHandler","source",0xdbb9a458,"WebmHandler.source","WebmHandler.hx",23,0x2dcf8c0d)
HX_LOCAL_STACK_FRAME(_hx_pos_b6d9a5cb8ab7eda1_36_makePlayer,"WebmHandler","makePlayer",0x5a9cb5ec,"WebmHandler.makePlayer","WebmHandler.hx",36,0x2dcf8c0d)
HX_LOCAL_STACK_FRAME(_hx_pos_b6d9a5cb8ab7eda1_40_makePlayer,"WebmHandler","makePlayer",0x5a9cb5ec,"WebmHandler.makePlayer","WebmHandler.hx",40,0x2dcf8c0d)
HX_LOCAL_STACK_FRAME(_hx_pos_b6d9a5cb8ab7eda1_44_makePlayer,"WebmHandler","makePlayer",0x5a9cb5ec,"WebmHandler.makePlayer","WebmHandler.hx",44,0x2dcf8c0d)
HX_LOCAL_STACK_FRAME(_hx_pos_b6d9a5cb8ab7eda1_48_makePlayer,"WebmHandler","makePlayer",0x5a9cb5ec,"WebmHandler.makePlayer","WebmHandler.hx",48,0x2dcf8c0d)
HX_LOCAL_STACK_FRAME(_hx_pos_b6d9a5cb8ab7eda1_30_makePlayer,"WebmHandler","makePlayer",0x5a9cb5ec,"WebmHandler.makePlayer","WebmHandler.hx",30,0x2dcf8c0d)
HX_LOCAL_STACK_FRAME(_hx_pos_b6d9a5cb8ab7eda1_99_pause,"WebmHandler","pause",0x3c61a219,"WebmHandler.pause","WebmHandler.hx",99,0x2dcf8c0d)
HX_LOCAL_STACK_FRAME(_hx_pos_b6d9a5cb8ab7eda1_105_resume,"WebmHandler","resume",0xb20c5d2a,"WebmHandler.resume","WebmHandler.hx",105,0x2dcf8c0d)
HX_LOCAL_STACK_FRAME(_hx_pos_b6d9a5cb8ab7eda1_130_onStop,"WebmHandler","onStop",0x986dec3e,"WebmHandler.onStop","WebmHandler.hx",130,0x2dcf8c0d)
HX_LOCAL_STACK_FRAME(_hx_pos_b6d9a5cb8ab7eda1_135_onRestart,"WebmHandler","onRestart",0xf8a21913,"WebmHandler.onRestart","WebmHandler.hx",135,0x2dcf8c0d)
HX_LOCAL_STACK_FRAME(_hx_pos_b6d9a5cb8ab7eda1_140_onPlay,"WebmHandler","onPlay",0x966c2a30,"WebmHandler.onPlay","WebmHandler.hx",140,0x2dcf8c0d)
HX_LOCAL_STACK_FRAME(_hx_pos_b6d9a5cb8ab7eda1_146_onEnd,"WebmHandler","onEnd",0xb16e631f,"WebmHandler.onEnd","WebmHandler.hx",146,0x2dcf8c0d)

void WebmHandler_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_b6d9a5cb8ab7eda1_9_new)
HXLINE(  96)		this->paused = false;
HXLINE(  95)		this->ended = false;
HXLINE(  94)		this->played = false;
HXLINE(  93)		this->restarted = false;
HXLINE(  92)		this->stopped = false;
HXLINE(  15)		this->initialized = false;
HXLINE(  13)		this->vidPath = HX_("",00,00,00,00);
            	}

Dynamic WebmHandler_obj::__CreateEmpty() { return new WebmHandler_obj; }

void *WebmHandler_obj::_hx_vtable = 0;

Dynamic WebmHandler_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< WebmHandler_obj > _hx_result = new WebmHandler_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool WebmHandler_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0ac0e0c5;
}

void WebmHandler_obj::source(::String vPath){
            	HX_STACKFRAME(&_hx_pos_b6d9a5cb8ab7eda1_23_source)
HXDLIN(  23)		bool _hx_tmp;
HXDLIN(  23)		if (::hx::IsNotNull( vPath )) {
HXDLIN(  23)			_hx_tmp = (vPath.length > 0);
            		}
            		else {
HXDLIN(  23)			_hx_tmp = false;
            		}
HXDLIN(  23)		if (_hx_tmp) {
HXLINE(  25)			this->vidPath = vPath;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(WebmHandler_obj,source,(void))

void WebmHandler_obj::makePlayer(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::WebmHandler,_gthis) HXARGC(1)
            		void _hx_run( ::Dynamic e){
            			HX_GC_STACKFRAME(&_hx_pos_b6d9a5cb8ab7eda1_36_makePlayer)
HXLINE(  36)			_gthis->onPlay();
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::WebmHandler,_gthis) HXARGC(1)
            		void _hx_run( ::Dynamic e){
            			HX_GC_STACKFRAME(&_hx_pos_b6d9a5cb8ab7eda1_40_makePlayer)
HXLINE(  40)			_gthis->onEnd();
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2, ::WebmHandler,_gthis) HXARGC(1)
            		void _hx_run( ::Dynamic e){
            			HX_GC_STACKFRAME(&_hx_pos_b6d9a5cb8ab7eda1_44_makePlayer)
HXLINE(  44)			_gthis->onStop();
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_3, ::WebmHandler,_gthis) HXARGC(1)
            		void _hx_run( ::Dynamic e){
            			HX_GC_STACKFRAME(&_hx_pos_b6d9a5cb8ab7eda1_48_makePlayer)
HXLINE(  48)			_gthis->onRestart();
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_b6d9a5cb8ab7eda1_30_makePlayer)
HXLINE(  29)		 ::WebmHandler _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  31)		this->io =  ::webm::WebmIoFile_obj::__alloc( HX_CTX ,this->vidPath);
HXLINE(  32)		this->webm =  ::webm::WebmPlayer_obj::__alloc( HX_CTX );
HXLINE(  33)		this->webm->fuck(this->io,false);
HXLINE(  34)		this->webm->addEventListener(HX_("play",f4,2d,5a,4a), ::Dynamic(new _hx_Closure_0(_gthis)),null(),null(),null());
HXLINE(  38)		this->webm->addEventListener(HX_("complete",b9,00,c8,7f), ::Dynamic(new _hx_Closure_1(_gthis)),null(),null(),null());
HXLINE(  42)		this->webm->addEventListener(HX_("stop",02,f0,5b,4c), ::Dynamic(new _hx_Closure_2(_gthis)),null(),null(),null());
HXLINE(  46)		this->webm->addEventListener(HX_("restart",cf,c7,a5,6a), ::Dynamic(new _hx_Closure_3(_gthis)),null(),null(),null());
HXLINE(  50)		this->webm->set_visible(false);
HXLINE(  51)		this->initialized = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(WebmHandler_obj,makePlayer,(void))

void WebmHandler_obj::pause(){
            	HX_STACKFRAME(&_hx_pos_b6d9a5cb8ab7eda1_99_pause)
HXLINE( 100)		this->webm->changePlaying(false);
HXLINE( 101)		this->paused = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(WebmHandler_obj,pause,(void))

void WebmHandler_obj::resume(){
            	HX_STACKFRAME(&_hx_pos_b6d9a5cb8ab7eda1_105_resume)
HXLINE( 106)		this->webm->changePlaying(true);
HXLINE( 107)		this->paused = false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(WebmHandler_obj,resume,(void))

void WebmHandler_obj::onStop(){
            	HX_STACKFRAME(&_hx_pos_b6d9a5cb8ab7eda1_130_onStop)
HXDLIN( 130)		this->stopped = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(WebmHandler_obj,onStop,(void))

void WebmHandler_obj::onRestart(){
            	HX_STACKFRAME(&_hx_pos_b6d9a5cb8ab7eda1_135_onRestart)
HXDLIN( 135)		this->restarted = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(WebmHandler_obj,onRestart,(void))

void WebmHandler_obj::onPlay(){
            	HX_STACKFRAME(&_hx_pos_b6d9a5cb8ab7eda1_140_onPlay)
HXDLIN( 140)		this->played = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(WebmHandler_obj,onPlay,(void))

void WebmHandler_obj::onEnd(){
            	HX_STACKFRAME(&_hx_pos_b6d9a5cb8ab7eda1_146_onEnd)
HXDLIN( 146)		this->ended = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(WebmHandler_obj,onEnd,(void))


::hx::ObjectPtr< WebmHandler_obj > WebmHandler_obj::__new() {
	::hx::ObjectPtr< WebmHandler_obj > __this = new WebmHandler_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< WebmHandler_obj > WebmHandler_obj::__alloc(::hx::Ctx *_hx_ctx) {
	WebmHandler_obj *__this = (WebmHandler_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(WebmHandler_obj), true, "WebmHandler"));
	*(void **)__this = WebmHandler_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

WebmHandler_obj::WebmHandler_obj()
{
}

void WebmHandler_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(WebmHandler);
	HX_MARK_MEMBER_NAME(webm,"webm");
	HX_MARK_MEMBER_NAME(vidPath,"vidPath");
	HX_MARK_MEMBER_NAME(io,"io");
	HX_MARK_MEMBER_NAME(initialized,"initialized");
	HX_MARK_MEMBER_NAME(stopped,"stopped");
	HX_MARK_MEMBER_NAME(restarted,"restarted");
	HX_MARK_MEMBER_NAME(played,"played");
	HX_MARK_MEMBER_NAME(ended,"ended");
	HX_MARK_MEMBER_NAME(paused,"paused");
	HX_MARK_END_CLASS();
}

void WebmHandler_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(webm,"webm");
	HX_VISIT_MEMBER_NAME(vidPath,"vidPath");
	HX_VISIT_MEMBER_NAME(io,"io");
	HX_VISIT_MEMBER_NAME(initialized,"initialized");
	HX_VISIT_MEMBER_NAME(stopped,"stopped");
	HX_VISIT_MEMBER_NAME(restarted,"restarted");
	HX_VISIT_MEMBER_NAME(played,"played");
	HX_VISIT_MEMBER_NAME(ended,"ended");
	HX_VISIT_MEMBER_NAME(paused,"paused");
}

::hx::Val WebmHandler_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"io") ) { return ::hx::Val( io ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"webm") ) { return ::hx::Val( webm ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ended") ) { return ::hx::Val( ended ); }
		if (HX_FIELD_EQ(inName,"pause") ) { return ::hx::Val( pause_dyn() ); }
		if (HX_FIELD_EQ(inName,"onEnd") ) { return ::hx::Val( onEnd_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"source") ) { return ::hx::Val( source_dyn() ); }
		if (HX_FIELD_EQ(inName,"played") ) { return ::hx::Val( played ); }
		if (HX_FIELD_EQ(inName,"paused") ) { return ::hx::Val( paused ); }
		if (HX_FIELD_EQ(inName,"resume") ) { return ::hx::Val( resume_dyn() ); }
		if (HX_FIELD_EQ(inName,"onStop") ) { return ::hx::Val( onStop_dyn() ); }
		if (HX_FIELD_EQ(inName,"onPlay") ) { return ::hx::Val( onPlay_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"vidPath") ) { return ::hx::Val( vidPath ); }
		if (HX_FIELD_EQ(inName,"stopped") ) { return ::hx::Val( stopped ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"restarted") ) { return ::hx::Val( restarted ); }
		if (HX_FIELD_EQ(inName,"onRestart") ) { return ::hx::Val( onRestart_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"makePlayer") ) { return ::hx::Val( makePlayer_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { return ::hx::Val( initialized ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val WebmHandler_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"io") ) { io=inValue.Cast<  ::webm::WebmIo >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"webm") ) { webm=inValue.Cast<  ::webm::WebmPlayer >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ended") ) { ended=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"played") ) { played=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paused") ) { paused=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"vidPath") ) { vidPath=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stopped") ) { stopped=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"restarted") ) { restarted=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void WebmHandler_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("webm",59,5d,f5,4e));
	outFields->push(HX_("vidPath",16,b4,9a,ef));
	outFields->push(HX_("io",e6,5b,00,00));
	outFields->push(HX_("initialized",14,f5,0f,37));
	outFields->push(HX_("stopped",0d,d2,61,43));
	outFields->push(HX_("restarted",ee,f1,82,b5));
	outFields->push(HX_("played",53,eb,b8,37));
	outFields->push(HX_("ended",fa,48,7a,70));
	outFields->push(HX_("paused",ae,40,84,ef));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo WebmHandler_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::webm::WebmPlayer */ ,(int)offsetof(WebmHandler_obj,webm),HX_("webm",59,5d,f5,4e)},
	{::hx::fsString,(int)offsetof(WebmHandler_obj,vidPath),HX_("vidPath",16,b4,9a,ef)},
	{::hx::fsObject /*  ::webm::WebmIo */ ,(int)offsetof(WebmHandler_obj,io),HX_("io",e6,5b,00,00)},
	{::hx::fsBool,(int)offsetof(WebmHandler_obj,initialized),HX_("initialized",14,f5,0f,37)},
	{::hx::fsBool,(int)offsetof(WebmHandler_obj,stopped),HX_("stopped",0d,d2,61,43)},
	{::hx::fsBool,(int)offsetof(WebmHandler_obj,restarted),HX_("restarted",ee,f1,82,b5)},
	{::hx::fsBool,(int)offsetof(WebmHandler_obj,played),HX_("played",53,eb,b8,37)},
	{::hx::fsBool,(int)offsetof(WebmHandler_obj,ended),HX_("ended",fa,48,7a,70)},
	{::hx::fsBool,(int)offsetof(WebmHandler_obj,paused),HX_("paused",ae,40,84,ef)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *WebmHandler_obj_sStaticStorageInfo = 0;
#endif

static ::String WebmHandler_obj_sMemberFields[] = {
	HX_("webm",59,5d,f5,4e),
	HX_("vidPath",16,b4,9a,ef),
	HX_("io",e6,5b,00,00),
	HX_("initialized",14,f5,0f,37),
	HX_("source",db,b0,31,32),
	HX_("makePlayer",ef,bf,88,89),
	HX_("stopped",0d,d2,61,43),
	HX_("restarted",ee,f1,82,b5),
	HX_("played",53,eb,b8,37),
	HX_("ended",fa,48,7a,70),
	HX_("paused",ae,40,84,ef),
	HX_("pause",f6,d6,57,bd),
	HX_("resume",ad,69,84,08),
	HX_("onStop",c1,f8,e5,ee),
	HX_("onRestart",70,80,50,42),
	HX_("onPlay",b3,36,e4,ec),
	HX_("onEnd",fc,97,64,32),
	::String(null()) };

::hx::Class WebmHandler_obj::__mClass;

void WebmHandler_obj::__register()
{
	WebmHandler_obj _hx_dummy;
	WebmHandler_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("WebmHandler",51,5f,03,d7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(WebmHandler_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< WebmHandler_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = WebmHandler_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = WebmHandler_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

