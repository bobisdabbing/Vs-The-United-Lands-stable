// Generated by Haxe 4.1.5
#ifndef INCLUDED_flixel_math_FlxRandom
#define INCLUDED_flixel_math_FlxRandom

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS2(flixel,math,FlxRandom)
HX_DECLARE_CLASS2(flixel,_hx_system,FlxSound)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace math{


class HXCPP_CLASS_ATTRIBUTES FlxRandom_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxRandom_obj OBJ_;
		FlxRandom_obj();

	public:
		enum { _hx_ClassId = 0x6232f511 };

		void __construct( ::Dynamic InitialSeed);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.math.FlxRandom")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.math.FlxRandom"); }
		static ::hx::ObjectPtr< FlxRandom_obj > __new( ::Dynamic InitialSeed);
		static ::hx::ObjectPtr< FlxRandom_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic InitialSeed);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxRandom_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxRandom",f5,1b,7e,39); }

		static void __boot();
		static ::Array< Float > _arrayFloatHelper;
		::Array< ::String > getObject_Array_String(::Array< ::Dynamic> Objects,::Array< Float > WeightsArray,::hx::Null< int >  StartIndex, ::Dynamic EndIndex);
		::Dynamic getObject_Array_String_dyn();

		 ::flixel::_hx_system::FlxSound getObject_flixel_system_FlxSound(::Array< ::Dynamic> Objects,::Array< Float > WeightsArray,::hx::Null< int >  StartIndex, ::Dynamic EndIndex);
		::Dynamic getObject_flixel_system_FlxSound_dyn();

		int initialSeed;
		int _hx_int(::hx::Null< int >  Min,::hx::Null< int >  Max,::Array< int > Excludes);
		::Dynamic _hx_int_dyn();

		Float _hx_float(::hx::Null< Float >  Min,::hx::Null< Float >  Max,::Array< Float > Excludes);
		::Dynamic _hx_float_dyn();

		int weightedPick(::Array< Float > WeightsArray);
		::Dynamic weightedPick_dyn();

		Float internalSeed;
};

} // end namespace flixel
} // end namespace math

#endif /* INCLUDED_flixel_math_FlxRandom */ 
