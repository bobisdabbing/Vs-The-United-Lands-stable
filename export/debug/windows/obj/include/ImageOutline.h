// Generated by Haxe 4.1.5
#ifndef INCLUDED_ImageOutline
#define INCLUDED_ImageOutline

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_0e02aa014350d24e_20_new)
HX_DECLARE_CLASS0(ImageOutline)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix)



class HXCPP_CLASS_ATTRIBUTES ImageOutline_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ImageOutline_obj OBJ_;
		ImageOutline_obj();

	public:
		enum { _hx_ClassId = 0x19596673 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="ImageOutline")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"ImageOutline"); }

		inline static ::hx::ObjectPtr< ImageOutline_obj > __new() {
			::hx::ObjectPtr< ImageOutline_obj > __this = new ImageOutline_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ImageOutline_obj > __alloc(::hx::Ctx *_hx_ctx) {
			ImageOutline_obj *__this = (ImageOutline_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ImageOutline_obj), false, "ImageOutline"));
			*(void **)__this = ImageOutline_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_0e02aa014350d24e_20_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ImageOutline_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ImageOutline",87,dd,98,99); }

		static void __boot();
		static int _color;
		static ::String _hex;
		static Float _alpha;
		static Float _weight;
		static Float _brush;
		static  ::openfl::geom::Matrix m;
		static  ::openfl::display::Bitmap renderImage(::Dynamic src,int weight,int color,::hx::Null< Float >  alpha,::hx::Null< bool >  antialias,::hx::Null< int >  threshold);
		static ::Dynamic renderImage_dyn();

		static  ::openfl::display::BitmapData outline( ::openfl::display::BitmapData src,int weight,int color,::hx::Null< Float >  alpha,::hx::Null< bool >  antialias,::hx::Null< int >  threshold);
		static ::Dynamic outline_dyn();

		static  ::openfl::display::BitmapData _antialias( ::openfl::display::BitmapData copy,int x,int y,int a);
		static ::Dynamic _antialias_dyn();

		static  ::openfl::display::BitmapData _alias( ::openfl::display::BitmapData copy,int x,int y);
		static ::Dynamic _alias_dyn();

		static int _parseARGB(int a);
		static ::Dynamic _parseARGB_dyn();

		static ::String _toHexString(int hex);
		static ::Dynamic _toHexString_dyn();

};


#endif /* INCLUDED_ImageOutline */ 
