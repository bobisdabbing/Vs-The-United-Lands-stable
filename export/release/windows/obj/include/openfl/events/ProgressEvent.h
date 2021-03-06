// Generated by Haxe 4.1.5
#ifndef INCLUDED_openfl_events_ProgressEvent
#define INCLUDED_openfl_events_ProgressEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
HX_DECLARE_STACK_FRAME(_hx_pos_b09527e17bebd012_89_new)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,ProgressEvent)

namespace openfl{
namespace events{


class HXCPP_CLASS_ATTRIBUTES ProgressEvent_obj : public  ::openfl::events::Event_obj
{
	public:
		typedef  ::openfl::events::Event_obj super;
		typedef ProgressEvent_obj OBJ_;
		ProgressEvent_obj();

	public:
		enum { _hx_ClassId = 0x3c614044 };

		void __construct(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable,::hx::Null< Float >  __o_bytesLoaded,::hx::Null< Float >  __o_bytesTotal);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.events.ProgressEvent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.events.ProgressEvent"); }

		inline static ::hx::ObjectPtr< ProgressEvent_obj > __new(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable,::hx::Null< Float >  __o_bytesLoaded,::hx::Null< Float >  __o_bytesTotal) {
			::hx::ObjectPtr< ProgressEvent_obj > __this = new ProgressEvent_obj();
			__this->__construct(type,__o_bubbles,__o_cancelable,__o_bytesLoaded,__o_bytesTotal);
			return __this;
		}

		inline static ::hx::ObjectPtr< ProgressEvent_obj > __alloc(::hx::Ctx *_hx_ctx,::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable,::hx::Null< Float >  __o_bytesLoaded,::hx::Null< Float >  __o_bytesTotal) {
			ProgressEvent_obj *__this = (ProgressEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ProgressEvent_obj), true, "openfl.events.ProgressEvent"));
			*(void **)__this = ProgressEvent_obj::_hx_vtable;
{
            		bool bubbles = __o_bubbles.Default(false);
            		bool cancelable = __o_cancelable.Default(false);
            		Float bytesLoaded = __o_bytesLoaded.Default(0);
            		Float bytesTotal = __o_bytesTotal.Default(0);
            	HX_STACKFRAME(&_hx_pos_b09527e17bebd012_89_new)
HXLINE(  90)		__this->super::__construct(type,bubbles,cancelable);
HXLINE(  92)		( ( ::openfl::events::ProgressEvent)(__this) )->bytesLoaded = bytesLoaded;
HXLINE(  93)		( ( ::openfl::events::ProgressEvent)(__this) )->bytesTotal = bytesTotal;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ProgressEvent_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ProgressEvent",0d,9d,55,84); }

		Float bytesLoaded;
		Float bytesTotal;
};

} // end namespace openfl
} // end namespace events

#endif /* INCLUDED_openfl_events_ProgressEvent */ 
