// Generated by Haxe 4.1.5
#ifndef INCLUDED_flixel_math_FlxPoint
#define INCLUDED_flixel_math_FlxPoint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,FlxPool_flixel_math_FlxPoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPool)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)

namespace flixel{
namespace math{


class HXCPP_CLASS_ATTRIBUTES FlxPoint_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxPoint_obj OBJ_;
		FlxPoint_obj();

	public:
		enum { _hx_ClassId = 0x523b7d02 };

		void __construct(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.math.FlxPoint")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.math.FlxPoint"); }
		static ::hx::ObjectPtr< FlxPoint_obj > __new(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y);
		static ::hx::ObjectPtr< FlxPoint_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxPoint_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxPoint",9e,be,69,83); }

		static void __boot();
		static  ::flixel::util::FlxPool_flixel_math_FlxPoint _pool;
		Float x;
		Float y;
		bool _weak;
		bool _inPool;
		virtual void put();
		::Dynamic put_dyn();

		virtual  ::flixel::math::FlxPoint set(::hx::Null< Float >  X,::hx::Null< Float >  Y);
		::Dynamic set_dyn();

		 ::flixel::math::FlxPoint addPoint( ::flixel::math::FlxPoint point);
		::Dynamic addPoint_dyn();

		 ::flixel::math::FlxPoint subtractPoint( ::flixel::math::FlxPoint point);
		::Dynamic subtractPoint_dyn();

		 ::flixel::math::FlxPoint copyTo( ::flixel::math::FlxPoint point);
		::Dynamic copyTo_dyn();

		Float distanceTo( ::flixel::math::FlxPoint point);
		::Dynamic distanceTo_dyn();

		 ::flixel::math::FlxPoint rotate( ::flixel::math::FlxPoint Pivot,Float Angle);
		::Dynamic rotate_dyn();

		Float angleBetween( ::flixel::math::FlxPoint point);
		::Dynamic angleBetween_dyn();

		virtual void destroy();
		::Dynamic destroy_dyn();

		virtual Float set_x(Float Value);
		::Dynamic set_x_dyn();

		virtual Float set_y(Float Value);
		::Dynamic set_y_dyn();

};

} // end namespace flixel
} // end namespace math

#endif /* INCLUDED_flixel_math_FlxPoint */ 