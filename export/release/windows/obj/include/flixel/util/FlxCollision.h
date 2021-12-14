// Generated by Haxe 4.1.5
#ifndef INCLUDED_flixel_util_FlxCollision
#define INCLUDED_flixel_util_FlxCollision

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,FlxCollision)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES FlxCollision_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxCollision_obj OBJ_;
		FlxCollision_obj();

	public:
		enum { _hx_ClassId = 0x192d8842 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.util.FlxCollision")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.util.FlxCollision"); }

		inline static ::hx::ObjectPtr< FlxCollision_obj > __new() {
			::hx::ObjectPtr< FlxCollision_obj > __this = new FlxCollision_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< FlxCollision_obj > __alloc(::hx::Ctx *_hx_ctx) {
			FlxCollision_obj *__this = (FlxCollision_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxCollision_obj), false, "flixel.util.FlxCollision"));
			*(void **)__this = FlxCollision_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxCollision_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxCollision",c0,f1,22,f8); }

		static bool pixelPerfectPointCheck(int PointX,int PointY, ::flixel::FlxSprite Target,::hx::Null< int >  AlphaTolerance);
		static ::Dynamic pixelPerfectPointCheck_dyn();

};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxCollision */ 
