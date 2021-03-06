// Generated by Haxe 4.1.5
#ifndef INCLUDED_ModchartState
#define INCLUDED_ModchartState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_cc9afe4755847ade
#define INCLUDED_cc9afe4755847ade
#include "linc_lua.h"
#endif
HX_DECLARE_CLASS0(ModchartState)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)



class HXCPP_CLASS_ATTRIBUTES ModchartState_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ModchartState_obj OBJ_;
		ModchartState_obj();

	public:
		enum { _hx_ClassId = 0x683926b5 };

		void __construct( ::Dynamic __o_isStoryMode);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="ModchartState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"ModchartState"); }
		static ::hx::ObjectPtr< ModchartState_obj > __new( ::Dynamic __o_isStoryMode);
		static ::hx::ObjectPtr< ModchartState_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic __o_isStoryMode);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ModchartState_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ModchartState",75,11,f2,8b); }

		static void __boot();
		static  cpp::Reference<lua_State> lua;
		static  ::haxe::ds::StringMap luaSprites;
		static  ::ModchartState createModchartState( ::Dynamic isStoryMode);
		static ::Dynamic createModchartState_dyn();

		 ::Dynamic callLua(::String func_name,::cpp::VirtualArray args,::String type);
		::Dynamic callLua_dyn();

		 ::Dynamic convert( ::Dynamic v,::String type);
		::Dynamic convert_dyn();

		::String getLuaErrorMessage( cpp::Reference<lua_State> l);
		::Dynamic getLuaErrorMessage_dyn();

		void setVar(::String var_name, ::Dynamic object);
		::Dynamic setVar_dyn();

		 ::Dynamic getVar(::String var_name,::String type);
		::Dynamic getVar_dyn();

		::String makeLuaSprite(::String spritePath,::String toBeCalled,bool drawBehind);
		::Dynamic makeLuaSprite_dyn();

		void die();
		::Dynamic die_dyn();

		 ::haxe::ds::StringMap luaWiggles;
		::String executeState(::String name,::cpp::VirtualArray args);
		::Dynamic executeState_dyn();

};


#endif /* INCLUDED_ModchartState */ 
