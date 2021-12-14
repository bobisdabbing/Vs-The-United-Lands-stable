// Generated by Haxe 4.1.5
#ifndef INCLUDED_motion_actuators_MotionPathActuator
#define INCLUDED_motion_actuators_MotionPathActuator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_motion_actuators_SimpleActuator
#include <motion/actuators/SimpleActuator.h>
#endif
HX_DECLARE_CLASS2(motion,actuators,GenericActuator)
HX_DECLARE_CLASS2(motion,actuators,IGenericActuator)
HX_DECLARE_CLASS2(motion,actuators,MotionPathActuator)
HX_DECLARE_CLASS2(motion,actuators,SimpleActuator)

namespace motion{
namespace actuators{


class HXCPP_CLASS_ATTRIBUTES MotionPathActuator_obj : public  ::motion::actuators::SimpleActuator_obj
{
	public:
		typedef  ::motion::actuators::SimpleActuator_obj super;
		typedef MotionPathActuator_obj OBJ_;
		MotionPathActuator_obj();

	public:
		enum { _hx_ClassId = 0x0e532574 };

		void __construct( ::Dynamic target,Float duration, ::Dynamic properties);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="motion.actuators.MotionPathActuator")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"motion.actuators.MotionPathActuator"); }
		static ::hx::ObjectPtr< MotionPathActuator_obj > __new( ::Dynamic target,Float duration, ::Dynamic properties);
		static ::hx::ObjectPtr< MotionPathActuator_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic target,Float duration, ::Dynamic properties);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MotionPathActuator_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MotionPathActuator",74,bb,ee,dc); }

		void apply();

		void initialize();

		void update(Float currentTime);

};

} // end namespace motion
} // end namespace actuators

#endif /* INCLUDED_motion_actuators_MotionPathActuator */ 
