// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Waveform
#include <Waveform.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
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
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_media_AudioBuffer
#include <lime/media/AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3cf2bbe1eefeef3b_18_new,"Waveform","new",0x4fe6870f,"Waveform.new","Waveform.hx",18,0x53034f41)
HX_LOCAL_STACK_FRAME(_hx_pos_3cf2bbe1eefeef3b_49_drawWaveform,"Waveform","drawWaveform",0x59ac9f12,"Waveform.drawWaveform","Waveform.hx",49,0x53034f41)

void Waveform_obj::__construct(int x,int y,::String audioPath,int height){
            	HX_STACKFRAME(&_hx_pos_3cf2bbe1eefeef3b_18_new)
HXLINE(  19)		super::__construct(x,y,null());
HXLINE(  21)		::String path = ::StringTools_obj::replace(audioPath,HX_("songs:",7c,e7,88,2d),HX_("",00,00,00,00));
HXLINE(  23)		::haxe::Log_obj::trace((HX_("loading ",24,de,81,cb) + path),::hx::SourceInfo(HX_("source/Waveform.hx",cd,7c,cd,9e),23,HX_("Waveform",9d,53,1c,cb),HX_("new",60,d0,53,00)));
HXLINE(  25)		this->buffer = ::lime::media::AudioBuffer_obj::fromFile(path);
HXLINE(  27)		::haxe::Log_obj::trace((((HX_("BPS: ",ab,88,92,35) + this->buffer->bitsPerSample) + HX_(" - Channels: ",49,72,de,5c)) + this->buffer->channels),::hx::SourceInfo(HX_("source/Waveform.hx",cd,7c,cd,9e),27,HX_("Waveform",9d,53,1c,cb),HX_("new",60,d0,53,00)));
HXLINE(  29)		this->data = this->buffer->data->buffer;
HXLINE(  31)		int h = 0;
HXLINE(  33)		Float trackDurationSeconds = (((( (Float)(this->data->length) ) / (( (Float)(this->buffer->bitsPerSample) ) / ( (Float)(8) ))) / ( (Float)(this->buffer->channels) )) / ( (Float)(this->buffer->sampleRate) ));
HXLINE(  35)		int pixelsPerCollumn = ::Math_obj::floor((( (Float)(1280) ) / (trackDurationSeconds / ( (Float)(1000) ))));
HXLINE(  37)		Float totalSamples = ((( (Float)(this->data->length) ) / (( (Float)(this->buffer->bitsPerSample) ) / ( (Float)(8) ))) / ( (Float)(this->buffer->channels) ));
HXLINE(  39)		h = ::Math_obj::round((totalSamples / ( (Float)(pixelsPerCollumn) )));
HXLINE(  41)		::haxe::Log_obj::trace((h + HX_(" - calculated height",b6,de,c5,96)),::hx::SourceInfo(HX_("source/Waveform.hx",cd,7c,cd,9e),41,HX_("Waveform",9d,53,1c,cb),HX_("new",60,d0,53,00)));
HXLINE(  43)		this->length = h;
HXLINE(  45)		this->makeGraphic(h,720,0,null(),null());
            	}

Dynamic Waveform_obj::__CreateEmpty() { return new Waveform_obj; }

void *Waveform_obj::_hx_vtable = 0;

Dynamic Waveform_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Waveform_obj > _hx_result = new Waveform_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool Waveform_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x26ad465d) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x26ad465d;
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void Waveform_obj::drawWaveform(){
            	HX_GC_STACKFRAME(&_hx_pos_3cf2bbe1eefeef3b_49_drawWaveform)
HXLINE(  50)		int index = 0;
HXLINE(  51)		int drawIndex = 0;
HXLINE(  53)		Float totalSamples = ((( (Float)(this->data->length) ) / (( (Float)(this->buffer->bitsPerSample) ) / ( (Float)(8) ))) / ( (Float)(this->buffer->channels) ));
HXLINE(  55)		Float min = ( (Float)(0) );
HXLINE(  56)		Float max = ( (Float)(0) );
HXLINE(  58)		{
HXLINE(  58)			int _g = 0;
HXDLIN(  58)			int _g1 = ::Math_obj::round(totalSamples);
HXDLIN(  58)			while((_g < _g1)){
HXLINE(  58)				_g = (_g + 1);
HXDLIN(  58)				int index = (_g - 1);
HXLINE(  60)				 ::haxe::io::Bytes _this = this->data;
HXDLIN(  60)				int byte = (( (int)(_this->b->__get(index)) ) | (( (int)(_this->b->__get((index + 1))) ) << 8));
HXLINE(  62)				if ((byte > ((Float)32767.5))) {
HXLINE(  63)					byte = (byte - 65535);
            				}
HXLINE(  65)				Float sample = (( (Float)(byte) ) / ( (Float)(65535) ));
HXLINE(  67)				if ((sample > 0)) {
HXLINE(  69)					if ((sample > max)) {
HXLINE(  70)						max = sample;
            					}
            				}
            				else {
HXLINE(  72)					if ((sample < 0)) {
HXLINE(  74)						if ((sample < min)) {
HXLINE(  75)							min = sample;
            						}
            					}
            				}
HXLINE(  78)				::haxe::Log_obj::trace((HX_("sample ",b6,c4,c9,83) + index),::hx::SourceInfo(HX_("source/Waveform.hx",cd,7c,cd,9e),78,HX_("Waveform",9d,53,1c,cb),HX_("drawWaveform",a1,23,5e,c7)));
HXLINE(  80)				Float pixelsMin = ::Math_obj::abs((min * ( (Float)(300) )));
HXLINE(  81)				Float pixelsMax = (max * ( (Float)(300) ));
HXLINE(  83)				 ::openfl::display::BitmapData _hx_tmp = this->get_pixels();
HXDLIN(  83)				_hx_tmp->fillRect( ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,drawIndex,0,1,720),-16777216);
HXLINE(  84)				 ::openfl::display::BitmapData _hx_tmp1 = this->get_pixels();
HXDLIN(  84)				_hx_tmp1->fillRect( ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,drawIndex,((( (Float)(::flixel::FlxG_obj::height) ) / ( (Float)(2) )) - pixelsMin),1,(pixelsMin + pixelsMax)),-8355712);
HXLINE(  85)				 ::openfl::display::BitmapData _hx_tmp2 = this->get_pixels();
HXDLIN(  85)				_hx_tmp2->fillRect( ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,drawIndex,((( (Float)(::flixel::FlxG_obj::height) ) / ( (Float)(2) )) - pixelsMin),1,-((pixelsMin + pixelsMax))),-8355712);
HXLINE(  86)				drawIndex = (drawIndex + 1);
HXLINE(  88)				min = ( (Float)(0) );
HXLINE(  89)				max = ( (Float)(0) );
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Waveform_obj,drawWaveform,(void))


::hx::ObjectPtr< Waveform_obj > Waveform_obj::__new(int x,int y,::String audioPath,int height) {
	::hx::ObjectPtr< Waveform_obj > __this = new Waveform_obj();
	__this->__construct(x,y,audioPath,height);
	return __this;
}

::hx::ObjectPtr< Waveform_obj > Waveform_obj::__alloc(::hx::Ctx *_hx_ctx,int x,int y,::String audioPath,int height) {
	Waveform_obj *__this = (Waveform_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Waveform_obj), true, "Waveform"));
	*(void **)__this = Waveform_obj::_hx_vtable;
	__this->__construct(x,y,audioPath,height);
	return __this;
}

Waveform_obj::Waveform_obj()
{
}

void Waveform_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Waveform);
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(length,"length");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Waveform_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buffer,"buffer");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(length,"length");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Waveform_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return ::hx::Val( data ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { return ::hx::Val( buffer ); }
		if (HX_FIELD_EQ(inName,"length") ) { return ::hx::Val( length ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"drawWaveform") ) { return ::hx::Val( drawWaveform_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Waveform_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast<  ::haxe::io::Bytes >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast<  ::lime::media::AudioBuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Waveform_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("buffer",00,bd,94,d0));
	outFields->push(HX_("data",2a,56,63,42));
	outFields->push(HX_("length",e6,94,07,9f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Waveform_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::lime::media::AudioBuffer */ ,(int)offsetof(Waveform_obj,buffer),HX_("buffer",00,bd,94,d0)},
	{::hx::fsObject /*  ::haxe::io::Bytes */ ,(int)offsetof(Waveform_obj,data),HX_("data",2a,56,63,42)},
	{::hx::fsInt,(int)offsetof(Waveform_obj,length),HX_("length",e6,94,07,9f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Waveform_obj_sStaticStorageInfo = 0;
#endif

static ::String Waveform_obj_sMemberFields[] = {
	HX_("buffer",00,bd,94,d0),
	HX_("data",2a,56,63,42),
	HX_("length",e6,94,07,9f),
	HX_("drawWaveform",a1,23,5e,c7),
	::String(null()) };

::hx::Class Waveform_obj::__mClass;

void Waveform_obj::__register()
{
	Waveform_obj _hx_dummy;
	Waveform_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Waveform",9d,53,1c,cb);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Waveform_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Waveform_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Waveform_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Waveform_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

