// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_460ec5366bb20ab2_728_new,"openfl.events.Event","new",0x2731c6f5,"openfl.events.Event.new","openfl/events/Event.hx",728,0x7220a03b)
HX_LOCAL_STACK_FRAME(_hx_pos_460ec5366bb20ab2_813_isDefaultPrevented,"openfl.events.Event","isDefaultPrevented",0x5475e94b,"openfl.events.Event.isDefaultPrevented","openfl/events/Event.hx",813,0x7220a03b)
HX_LOCAL_STACK_FRAME(_hx_pos_460ec5366bb20ab2_824_preventDefault,"openfl.events.Event","preventDefault",0xdba9c454,"openfl.events.Event.preventDefault","openfl/events/Event.hx",824,0x7220a03b)
HX_LOCAL_STACK_FRAME(_hx_pos_460ec5366bb20ab2_842_stopImmediatePropagation,"openfl.events.Event","stopImmediatePropagation",0xa67252c8,"openfl.events.Event.stopImmediatePropagation","openfl/events/Event.hx",842,0x7220a03b)
HX_LOCAL_STACK_FRAME(_hx_pos_460ec5366bb20ab2_862_stopPropagation,"openfl.events.Event","stopPropagation",0xb07183ff,"openfl.events.Event.stopPropagation","openfl/events/Event.hx",862,0x7220a03b)
namespace openfl{
namespace events{

void Event_obj::__construct(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable){
            		bool bubbles = __o_bubbles.Default(false);
            		bool cancelable = __o_cancelable.Default(false);
            	HX_STACKFRAME(&_hx_pos_460ec5366bb20ab2_728_new)
HXLINE( 729)		this->type = type;
HXLINE( 730)		this->bubbles = bubbles;
HXLINE( 731)		this->cancelable = cancelable;
HXLINE( 732)		this->eventPhase = 2;
            	}

Dynamic Event_obj::__CreateEmpty() { return new Event_obj; }

void *Event_obj::_hx_vtable = 0;

Dynamic Event_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Event_obj > _hx_result = new Event_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Event_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x08ec4c31;
}

bool Event_obj::isDefaultPrevented(){
            	HX_STACKFRAME(&_hx_pos_460ec5366bb20ab2_813_isDefaultPrevented)
HXDLIN( 813)		return this->_hx___preventDefault;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Event_obj,isDefaultPrevented,return )

void Event_obj::preventDefault(){
            	HX_STACKFRAME(&_hx_pos_460ec5366bb20ab2_824_preventDefault)
HXDLIN( 824)		if (this->cancelable) {
HXLINE( 826)			this->_hx___preventDefault = true;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Event_obj,preventDefault,(void))

void Event_obj::stopImmediatePropagation(){
            	HX_STACKFRAME(&_hx_pos_460ec5366bb20ab2_842_stopImmediatePropagation)
HXLINE( 843)		this->_hx___isCanceled = true;
HXLINE( 844)		this->_hx___isCanceledNow = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Event_obj,stopImmediatePropagation,(void))

void Event_obj::stopPropagation(){
            	HX_STACKFRAME(&_hx_pos_460ec5366bb20ab2_862_stopPropagation)
HXDLIN( 862)		this->_hx___isCanceled = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Event_obj,stopPropagation,(void))


Event_obj::Event_obj()
{
}

void Event_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Event);
	HX_MARK_MEMBER_NAME(bubbles,"bubbles");
	HX_MARK_MEMBER_NAME(cancelable,"cancelable");
	HX_MARK_MEMBER_NAME(currentTarget,"currentTarget");
	HX_MARK_MEMBER_NAME(eventPhase,"eventPhase");
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(_hx___isCanceled,"__isCanceled");
	HX_MARK_MEMBER_NAME(_hx___isCanceledNow,"__isCanceledNow");
	HX_MARK_MEMBER_NAME(_hx___preventDefault,"__preventDefault");
	HX_MARK_END_CLASS();
}

void Event_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bubbles,"bubbles");
	HX_VISIT_MEMBER_NAME(cancelable,"cancelable");
	HX_VISIT_MEMBER_NAME(currentTarget,"currentTarget");
	HX_VISIT_MEMBER_NAME(eventPhase,"eventPhase");
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(_hx___isCanceled,"__isCanceled");
	HX_VISIT_MEMBER_NAME(_hx___isCanceledNow,"__isCanceledNow");
	HX_VISIT_MEMBER_NAME(_hx___preventDefault,"__preventDefault");
}

::hx::Val Event_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return ::hx::Val( type ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { return ::hx::Val( target ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bubbles") ) { return ::hx::Val( bubbles ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"cancelable") ) { return ::hx::Val( cancelable ); }
		if (HX_FIELD_EQ(inName,"eventPhase") ) { return ::hx::Val( eventPhase ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__isCanceled") ) { return ::hx::Val( _hx___isCanceled ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"currentTarget") ) { return ::hx::Val( currentTarget ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"preventDefault") ) { return ::hx::Val( preventDefault_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__isCanceledNow") ) { return ::hx::Val( _hx___isCanceledNow ); }
		if (HX_FIELD_EQ(inName,"stopPropagation") ) { return ::hx::Val( stopPropagation_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__preventDefault") ) { return ::hx::Val( _hx___preventDefault ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"isDefaultPrevented") ) { return ::hx::Val( isDefaultPrevented_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"stopImmediatePropagation") ) { return ::hx::Val( stopImmediatePropagation_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Event_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bubbles") ) { bubbles=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"cancelable") ) { cancelable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"eventPhase") ) { eventPhase=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__isCanceled") ) { _hx___isCanceled=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"currentTarget") ) { currentTarget=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__isCanceledNow") ) { _hx___isCanceledNow=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__preventDefault") ) { _hx___preventDefault=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Event_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bubbles",67,bb,56,61));
	outFields->push(HX_("cancelable",14,a0,79,c4));
	outFields->push(HX_("currentTarget",6a,74,49,6a));
	outFields->push(HX_("eventPhase",c1,31,44,3e));
	outFields->push(HX_("target",51,f3,ec,86));
	outFields->push(HX_("type",ba,f2,08,4d));
	outFields->push(HX_("__isCanceled",83,a5,68,d2));
	outFields->push(HX_("__isCanceledNow",53,ff,9e,05));
	outFields->push(HX_("__preventDefault",e9,b7,e4,9b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Event_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(Event_obj,bubbles),HX_("bubbles",67,bb,56,61)},
	{::hx::fsBool,(int)offsetof(Event_obj,cancelable),HX_("cancelable",14,a0,79,c4)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Event_obj,currentTarget),HX_("currentTarget",6a,74,49,6a)},
	{::hx::fsInt,(int)offsetof(Event_obj,eventPhase),HX_("eventPhase",c1,31,44,3e)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Event_obj,target),HX_("target",51,f3,ec,86)},
	{::hx::fsString,(int)offsetof(Event_obj,type),HX_("type",ba,f2,08,4d)},
	{::hx::fsBool,(int)offsetof(Event_obj,_hx___isCanceled),HX_("__isCanceled",83,a5,68,d2)},
	{::hx::fsBool,(int)offsetof(Event_obj,_hx___isCanceledNow),HX_("__isCanceledNow",53,ff,9e,05)},
	{::hx::fsBool,(int)offsetof(Event_obj,_hx___preventDefault),HX_("__preventDefault",e9,b7,e4,9b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Event_obj_sStaticStorageInfo = 0;
#endif

static ::String Event_obj_sMemberFields[] = {
	HX_("bubbles",67,bb,56,61),
	HX_("cancelable",14,a0,79,c4),
	HX_("currentTarget",6a,74,49,6a),
	HX_("eventPhase",c1,31,44,3e),
	HX_("target",51,f3,ec,86),
	HX_("type",ba,f2,08,4d),
	HX_("__isCanceled",83,a5,68,d2),
	HX_("__isCanceledNow",53,ff,9e,05),
	HX_("__preventDefault",e9,b7,e4,9b),
	HX_("isDefaultPrevented",40,30,27,04),
	HX_("preventDefault",c9,2c,a5,67),
	HX_("stopImmediatePropagation",7d,bf,66,5b),
	HX_("stopPropagation",ea,81,71,a0),
	::String(null()) };

::hx::Class Event_obj::__mClass;

void Event_obj::__register()
{
	Event_obj _hx_dummy;
	Event_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.events.Event",83,28,c4,61);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Event_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Event_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Event_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Event_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace events
