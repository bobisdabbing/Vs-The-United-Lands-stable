// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_ChartingBox
#include <ChartingBox.h>
#endif
#ifndef INCLUDED_Note
#include <Note.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ab6c2d928b430d4c_10_new,"ChartingBox","new",0x04c4c1f9,"ChartingBox.new","ChartingBox.hx",10,0x28335f97)

void ChartingBox_obj::__construct( ::Dynamic x, ::Dynamic y, ::Note originalNote){
            	HX_STACKFRAME(&_hx_pos_ab6c2d928b430d4c_10_new)
HXLINE(  11)		super::__construct(x,y,null());
HXLINE(  12)		this->connectedNote = originalNote;
HXLINE(  14)		int Alpha = 255;
HXDLIN(  14)		int color = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXDLIN(  14)		{
HXLINE(  14)			color = (color & -16711681);
HXDLIN(  14)			color = (color | 11337728);
            		}
HXDLIN(  14)		{
HXLINE(  14)			color = (color & -65281);
HXDLIN(  14)			color = (color | 55296);
            		}
HXDLIN(  14)		{
HXLINE(  14)			color = (color & -256);
HXDLIN(  14)			color = (color | 230);
            		}
HXDLIN(  14)		{
HXLINE(  14)			color = (color & 16777215);
HXDLIN(  14)			int color1;
HXDLIN(  14)			if ((Alpha > 255)) {
HXLINE(  14)				color1 = 255;
            			}
            			else {
HXLINE(  14)				if ((Alpha < 0)) {
HXLINE(  14)					color1 = 0;
            				}
            				else {
HXLINE(  14)					color1 = Alpha;
            				}
            			}
HXDLIN(  14)			color = (color | (color1 << 24));
            		}
HXDLIN(  14)		this->makeGraphic(40,40,color,null(),null());
HXLINE(  15)		this->set_alpha(((Float)0.4));
            	}

Dynamic ChartingBox_obj::__CreateEmpty() { return new ChartingBox_obj; }

void *ChartingBox_obj::_hx_vtable = 0;

Dynamic ChartingBox_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ChartingBox_obj > _hx_result = new ChartingBox_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool ChartingBox_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x5eef96c7) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x5eef96c7;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}


::hx::ObjectPtr< ChartingBox_obj > ChartingBox_obj::__new( ::Dynamic x, ::Dynamic y, ::Note originalNote) {
	::hx::ObjectPtr< ChartingBox_obj > __this = new ChartingBox_obj();
	__this->__construct(x,y,originalNote);
	return __this;
}

::hx::ObjectPtr< ChartingBox_obj > ChartingBox_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic x, ::Dynamic y, ::Note originalNote) {
	ChartingBox_obj *__this = (ChartingBox_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ChartingBox_obj), true, "ChartingBox"));
	*(void **)__this = ChartingBox_obj::_hx_vtable;
	__this->__construct(x,y,originalNote);
	return __this;
}

ChartingBox_obj::ChartingBox_obj()
{
}

void ChartingBox_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ChartingBox);
	HX_MARK_MEMBER_NAME(connectedNote,"connectedNote");
	HX_MARK_MEMBER_NAME(connectedNoteData,"connectedNoteData");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ChartingBox_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(connectedNote,"connectedNote");
	HX_VISIT_MEMBER_NAME(connectedNoteData,"connectedNoteData");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ChartingBox_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"connectedNote") ) { return ::hx::Val( connectedNote ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"connectedNoteData") ) { return ::hx::Val( connectedNoteData ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ChartingBox_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"connectedNote") ) { connectedNote=inValue.Cast<  ::Note >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"connectedNoteData") ) { connectedNoteData=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ChartingBox_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("connectedNote",5b,bf,7d,d4));
	outFields->push(HX_("connectedNoteData",25,8b,7c,72));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ChartingBox_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Note */ ,(int)offsetof(ChartingBox_obj,connectedNote),HX_("connectedNote",5b,bf,7d,d4)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(ChartingBox_obj,connectedNoteData),HX_("connectedNoteData",25,8b,7c,72)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ChartingBox_obj_sStaticStorageInfo = 0;
#endif

static ::String ChartingBox_obj_sMemberFields[] = {
	HX_("connectedNote",5b,bf,7d,d4),
	HX_("connectedNoteData",25,8b,7c,72),
	::String(null()) };

::hx::Class ChartingBox_obj::__mClass;

void ChartingBox_obj::__register()
{
	ChartingBox_obj _hx_dummy;
	ChartingBox_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("ChartingBox",87,51,f4,ab);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ChartingBox_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ChartingBox_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ChartingBox_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ChartingBox_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}
