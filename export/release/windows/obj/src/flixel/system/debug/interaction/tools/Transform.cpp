// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroupIterator
#include <flixel/group/FlxTypedGroupIterator.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Tooltip
#include <flixel/system/debug/Tooltip.h>
#endif
#ifndef INCLUDED_flixel_system_debug_TooltipOverlay
#include <flixel/system/debug/TooltipOverlay.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_debug_interaction_Interaction
#include <flixel/system/debug/interaction/Interaction.h>
#endif
#ifndef INCLUDED_flixel_system_debug_interaction_tools_Tool
#include <flixel/system/debug/interaction/tools/Tool.h>
#endif
#ifndef INCLUDED_flixel_system_debug_interaction_tools_Transform
#include <flixel/system/debug/interaction/tools/Transform.h>
#endif
#ifndef INCLUDED_flixel_system_debug_interaction_tools__Transform_GraphicTransformCursorDefault
#include <flixel/system/debug/interaction/tools/_Transform/GraphicTransformCursorDefault.h>
#endif
#ifndef INCLUDED_flixel_system_debug_interaction_tools__Transform_GraphicTransformCursorRotate
#include <flixel/system/debug/interaction/tools/_Transform/GraphicTransformCursorRotate.h>
#endif
#ifndef INCLUDED_flixel_system_debug_interaction_tools__Transform_GraphicTransformCursorScaleX
#include <flixel/system/debug/interaction/tools/_Transform/GraphicTransformCursorScaleX.h>
#endif
#ifndef INCLUDED_flixel_system_debug_interaction_tools__Transform_GraphicTransformCursorScaleXY
#include <flixel/system/debug/interaction/tools/_Transform/GraphicTransformCursorScaleXY.h>
#endif
#ifndef INCLUDED_flixel_system_debug_interaction_tools__Transform_GraphicTransformCursorScaleY
#include <flixel/system/debug/interaction/tools/_Transform/GraphicTransformCursorScaleY.h>
#endif
#ifndef INCLUDED_flixel_system_debug_interaction_tools__Transform_GraphicTransformTool
#include <flixel/system/debug/interaction/tools/_Transform/GraphicTransformTool.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#include <flixel/system/frontEnds/SignalFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSpriteUtil
#include <flixel/util/FlxSpriteUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal0
#include <flixel/util/_FlxSignal/FlxSignal0.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_32e1ba20177d3a98_41_new,"flixel.system.debug.interaction.tools.Transform","new",0xc0c1ec87,"flixel.system.debug.interaction.tools.Transform.new","flixel/system/debug/interaction/tools/Transform.hx",41,0xb006466c)
HX_LOCAL_STACK_FRAME(_hx_pos_32e1ba20177d3a98_91_init,"flixel.system.debug.interaction.tools.Transform","init",0xe5a5c109,"flixel.system.debug.interaction.tools.Transform.init","flixel/system/debug/interaction/tools/Transform.hx",91,0xb006466c)
HX_LOCAL_STACK_FRAME(_hx_pos_32e1ba20177d3a98_71_init,"flixel.system.debug.interaction.tools.Transform","init",0xe5a5c109,"flixel.system.debug.interaction.tools.Transform.init","flixel/system/debug/interaction/tools/Transform.hx",71,0xb006466c)
HX_LOCAL_STACK_FRAME(_hx_pos_32e1ba20177d3a98_129_stopAction,"flixel.system.debug.interaction.tools.Transform","stopAction",0xc4725411,"flixel.system.debug.interaction.tools.Transform.stopAction","flixel/system/debug/interaction/tools/Transform.hx",129,0xb006466c)
HX_LOCAL_STACK_FRAME(_hx_pos_32e1ba20177d3a98_292_drawTargetAreaOutline,"flixel.system.debug.interaction.tools.Transform","drawTargetAreaOutline",0x781824e7,"flixel.system.debug.interaction.tools.Transform.drawTargetAreaOutline","flixel/system/debug/interaction/tools/Transform.hx",292,0xb006466c)
HX_LOCAL_STACK_FRAME(_hx_pos_32e1ba20177d3a98_303_drawMarkers,"flixel.system.debug.interaction.tools.Transform","drawMarkers",0x19efecfc,"flixel.system.debug.interaction.tools.Transform.drawMarkers","flixel/system/debug/interaction/tools/Transform.hx",303,0xb006466c)
HX_LOCAL_STACK_FRAME(_hx_pos_32e1ba20177d3a98_317_draw,"flixel.system.debug.interaction.tools.Transform","draw",0xe25ab1fd,"flixel.system.debug.interaction.tools.Transform.draw","flixel/system/debug/interaction/tools/Transform.hx",317,0xb006466c)
HX_LOCAL_STACK_FRAME(_hx_pos_32e1ba20177d3a98_332_activate,"flixel.system.debug.interaction.tools.Transform","activate",0x6c83922c,"flixel.system.debug.interaction.tools.Transform.activate","flixel/system/debug/interaction/tools/Transform.hx",332,0xb006466c)
HX_LOCAL_STACK_FRAME(_hx_pos_32e1ba20177d3a98_354_deactivate,"flixel.system.debug.interaction.tools.Transform","deactivate",0xc07e22ed,"flixel.system.debug.interaction.tools.Transform.deactivate","flixel/system/debug/interaction/tools/Transform.hx",354,0xb006466c)
namespace flixel{
namespace _hx_system{
namespace debug{
namespace interaction{
namespace tools{

void Transform_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_32e1ba20177d3a98_41_new)
HXLINE(  65)		this->_markers = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  41)		super::__construct();
            	}

Dynamic Transform_obj::__CreateEmpty() { return new Transform_obj; }

void *Transform_obj::_hx_vtable = 0;

Dynamic Transform_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Transform_obj > _hx_result = new Transform_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Transform_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1f4df417) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x1361d5a9 || inClassId==(int)0x1f4df417;
		}
	} else {
		if (inClassId<=(int)0x5020ad7b) {
			return inClassId==(int)0x4af7dd8e || inClassId==(int)0x5020ad7b;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

 ::flixel::_hx_system::debug::interaction::tools::Tool Transform_obj::init( ::flixel::_hx_system::debug::interaction::Interaction brain){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::flixel::_hx_system::debug::interaction::tools::Transform,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_32e1ba20177d3a98_91_init)
HXLINE(  91)			_gthis->_target = null();
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_GC_STACKFRAME(&_hx_pos_32e1ba20177d3a98_71_init)
HXLINE(  70)		 ::flixel::_hx_system::debug::interaction::tools::Transform _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  72)		this->super::init(brain);
HXLINE(  74)		this->_name = HX_("Transform",4c,0d,66,e7);
HXLINE(  75)		this->setButton(::hx::ClassOf< ::flixel::_hx_system::debug::interaction::tools::_Transform::GraphicTransformTool >());
HXLINE(  76)		this->setCursor( ::flixel::_hx_system::debug::interaction::tools::_Transform::GraphicTransformCursorDefault_obj::__alloc( HX_CTX ,0,0,null(),null()));
HXLINE(  78)		brain->registerCustomCursor(HX_("transformRotate",e7,c0,75,06), ::flixel::_hx_system::debug::interaction::tools::_Transform::GraphicTransformCursorRotate_obj::__alloc( HX_CTX ,0,0,null(),null()));
HXLINE(  79)		brain->registerCustomCursor(HX_("transformScaleX",1a,65,7b,77), ::flixel::_hx_system::debug::interaction::tools::_Transform::GraphicTransformCursorScaleX_obj::__alloc( HX_CTX ,0,0,null(),null()));
HXLINE(  80)		brain->registerCustomCursor(HX_("transformScaleY",1b,65,7b,77), ::flixel::_hx_system::debug::interaction::tools::_Transform::GraphicTransformCursorScaleY_obj::__alloc( HX_CTX ,0,0,null(),null()));
HXLINE(  81)		brain->registerCustomCursor(HX_("transformScaleXY",ff,11,7d,14), ::flixel::_hx_system::debug::interaction::tools::_Transform::GraphicTransformCursorScaleXY_obj::__alloc( HX_CTX ,0,0,null(),null()));
HXLINE(  83)		this->_tooltip = ::flixel::_hx_system::debug::Tooltip_obj::add(null(),HX_("",00,00,00,00));
HXLINE(  84)		this->_tooltip->textField->set_wordWrap(false);
HXLINE(  86)		{
HXLINE(  87)			::Array< ::Dynamic> _hx_tmp = this->_markers;
HXDLIN(  87)			_hx_tmp->push( ::flixel::math::FlxPoint_obj::__alloc( HX_CTX ,null(),null()));
HXDLIN(  87)			::Array< ::Dynamic> _hx_tmp1 = this->_markers;
HXDLIN(  87)			_hx_tmp1->push( ::flixel::math::FlxPoint_obj::__alloc( HX_CTX ,null(),null()));
HXDLIN(  87)			::Array< ::Dynamic> _hx_tmp2 = this->_markers;
HXDLIN(  87)			_hx_tmp2->push( ::flixel::math::FlxPoint_obj::__alloc( HX_CTX ,null(),null()));
HXDLIN(  87)			::Array< ::Dynamic> _hx_tmp3 = this->_markers;
HXDLIN(  87)			_hx_tmp3->push( ::flixel::math::FlxPoint_obj::__alloc( HX_CTX ,null(),null()));
            		}
HXLINE(  89)		this->stopAction();
HXLINE(  91)		::flixel::FlxG_obj::signals->preStateSwitch->add( ::Dynamic(new _hx_Closure_0(_gthis)));
HXLINE(  92)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


void Transform_obj::stopAction(){
            	HX_STACKFRAME(&_hx_pos_32e1ba20177d3a98_129_stopAction)
HXLINE( 130)		this->_actionHappening = false;
HXLINE( 131)		this->_actionMarker = -1;
HXLINE( 132)		this->_tooltip->setVisible(false);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,stopAction,(void))

void Transform_obj::drawTargetAreaOutline( ::openfl::display::Graphics gfx){
            	HX_STACKFRAME(&_hx_pos_32e1ba20177d3a98_292_drawTargetAreaOutline)
HXLINE( 293)		gfx->lineStyle(((Float)0.9),-65281,((Float)1.0),false,2,2,null(),null());
HXLINE( 295)		gfx->moveTo(this->_markers->__get(0).StaticCast<  ::flixel::math::FlxPoint >()->x,this->_markers->__get(0).StaticCast<  ::flixel::math::FlxPoint >()->y);
HXLINE( 296)		{
HXLINE( 296)			int _g = 0;
HXDLIN( 296)			int _g1 = this->_markers->length;
HXDLIN( 296)			while((_g < _g1)){
HXLINE( 296)				_g = (_g + 1);
HXDLIN( 296)				int i = (_g - 1);
HXLINE( 297)				gfx->lineTo(this->_markers->__get(i).StaticCast<  ::flixel::math::FlxPoint >()->x,this->_markers->__get(i).StaticCast<  ::flixel::math::FlxPoint >()->y);
            			}
            		}
HXLINE( 299)		gfx->lineTo(this->_markers->__get(0).StaticCast<  ::flixel::math::FlxPoint >()->x,this->_markers->__get(0).StaticCast<  ::flixel::math::FlxPoint >()->y);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,drawTargetAreaOutline,(void))

void Transform_obj::drawMarkers( ::openfl::display::Graphics gfx){
            	HX_STACKFRAME(&_hx_pos_32e1ba20177d3a98_303_drawMarkers)
HXLINE( 304)		gfx->lineStyle(((Float)0.9),-65281,((Float)1.0),false,2,2,null(),null());
HXLINE( 305)		gfx->beginFill(-65281,null());
HXLINE( 306)		{
HXLINE( 306)			int _g = 0;
HXDLIN( 306)			int _g1 = this->_markers->length;
HXDLIN( 306)			while((_g < _g1)){
HXLINE( 306)				_g = (_g + 1);
HXDLIN( 306)				int i = (_g - 1);
HXLINE( 307)				if ((i == 0)) {
HXLINE( 309)					gfx->drawCircle(this->_markers->__get(i).StaticCast<  ::flixel::math::FlxPoint >()->x,this->_markers->__get(i).StaticCast<  ::flixel::math::FlxPoint >()->y,((Float)2.7));
            				}
            				else {
HXLINE( 312)					gfx->drawRect((this->_markers->__get(i).StaticCast<  ::flixel::math::FlxPoint >()->x - ((Float)1.5)),(this->_markers->__get(i).StaticCast<  ::flixel::math::FlxPoint >()->y - ((Float)1.5)),((Float)3.0),((Float)3.0));
            				}
            			}
            		}
HXLINE( 313)		gfx->endFill();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,drawMarkers,(void))

void Transform_obj::draw(){
            	HX_STACKFRAME(&_hx_pos_32e1ba20177d3a98_317_draw)
HXLINE( 318)		 ::openfl::display::Graphics gfx = this->_brain->getDebugGraphics();
HXLINE( 320)		bool _hx_tmp;
HXDLIN( 320)		bool _hx_tmp1;
HXDLIN( 320)		if (::hx::IsNotNull( gfx )) {
HXLINE( 320)			_hx_tmp1 = ::hx::IsNull( this->_target );
            		}
            		else {
HXLINE( 320)			_hx_tmp1 = true;
            		}
HXDLIN( 320)		if (!(_hx_tmp1)) {
HXLINE( 320)			_hx_tmp = !(this->isActive());
            		}
            		else {
HXLINE( 320)			_hx_tmp = true;
            		}
HXDLIN( 320)		if (_hx_tmp) {
HXLINE( 321)			return;
            		}
HXLINE( 323)		this->drawTargetAreaOutline(gfx);
HXLINE( 324)		this->drawMarkers(gfx);
HXLINE( 327)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 328)			::flixel::FlxG_obj::camera->buffer->draw(::flixel::util::FlxSpriteUtil_obj::flashGfxSprite,null(),null(),null(),null(),null());
            		}
            	}


void Transform_obj::activate(){
            	HX_GC_STACKFRAME(&_hx_pos_32e1ba20177d3a98_332_activate)
HXLINE( 333)		this->_target = null();
HXLINE( 335)		if ((this->_brain->selectedItems->length == 0)) {
HXLINE( 336)			return;
            		}
HXLINE( 338)		{
HXLINE( 338)			 ::Dynamic filter = null();
HXDLIN( 338)			 ::flixel::group::FlxTypedGroupIterator member =  ::flixel::group::FlxTypedGroupIterator_obj::__alloc( HX_CTX ,this->_brain->selectedItems->members,filter);
HXDLIN( 338)			while(member->hasNext()){
HXLINE( 338)				 ::flixel::FlxObject member1 = member->next().StaticCast<  ::flixel::FlxObject >();
HXLINE( 340)				bool _hx_tmp;
HXDLIN( 340)				bool _hx_tmp1;
HXDLIN( 340)				if (::hx::IsNotNull( member1 )) {
HXLINE( 340)					_hx_tmp1 = ::hx::IsNotNull( member1->scrollFactor );
            				}
            				else {
HXLINE( 340)					_hx_tmp1 = false;
            				}
HXDLIN( 340)				if (_hx_tmp1) {
HXLINE( 340)					_hx_tmp = member1->isOnScreen(null());
            				}
            				else {
HXLINE( 340)					_hx_tmp = false;
            				}
HXDLIN( 340)				if (_hx_tmp) {
HXLINE( 344)					this->_target = ( ( ::flixel::FlxSprite)(member1) );
HXLINE( 345)					goto _hx_goto_9;
            				}
            			}
            			_hx_goto_9:;
            		}
HXLINE( 349)		this->_brain->shouldDrawItemsSelection = false;
            	}


void Transform_obj::deactivate(){
            	HX_STACKFRAME(&_hx_pos_32e1ba20177d3a98_354_deactivate)
HXDLIN( 354)		this->_brain->shouldDrawItemsSelection = true;
            	}



::hx::ObjectPtr< Transform_obj > Transform_obj::__new() {
	::hx::ObjectPtr< Transform_obj > __this = new Transform_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Transform_obj > Transform_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Transform_obj *__this = (Transform_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Transform_obj), true, "flixel.system.debug.interaction.tools.Transform"));
	*(void **)__this = Transform_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Transform_obj::Transform_obj()
{
}

void Transform_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Transform);
	HX_MARK_MEMBER_NAME(_actionHappening,"_actionHappening");
	HX_MARK_MEMBER_NAME(_actionMarker,"_actionMarker");
	HX_MARK_MEMBER_NAME(_tooltip,"_tooltip");
	HX_MARK_MEMBER_NAME(_markers,"_markers");
	HX_MARK_MEMBER_NAME(_target,"_target");
	 ::flixel::_hx_system::debug::interaction::tools::Tool_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Transform_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_actionHappening,"_actionHappening");
	HX_VISIT_MEMBER_NAME(_actionMarker,"_actionMarker");
	HX_VISIT_MEMBER_NAME(_tooltip,"_tooltip");
	HX_VISIT_MEMBER_NAME(_markers,"_markers");
	HX_VISIT_MEMBER_NAME(_target,"_target");
	 ::flixel::_hx_system::debug::interaction::tools::Tool_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Transform_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return ::hx::Val( init_dyn() ); }
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_target") ) { return ::hx::Val( _target ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_tooltip") ) { return ::hx::Val( _tooltip ); }
		if (HX_FIELD_EQ(inName,"_markers") ) { return ::hx::Val( _markers ); }
		if (HX_FIELD_EQ(inName,"activate") ) { return ::hx::Val( activate_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"stopAction") ) { return ::hx::Val( stopAction_dyn() ); }
		if (HX_FIELD_EQ(inName,"deactivate") ) { return ::hx::Val( deactivate_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"drawMarkers") ) { return ::hx::Val( drawMarkers_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_actionMarker") ) { return ::hx::Val( _actionMarker ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_actionHappening") ) { return ::hx::Val( _actionHappening ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"drawTargetAreaOutline") ) { return ::hx::Val( drawTargetAreaOutline_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Transform_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_target") ) { _target=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_tooltip") ) { _tooltip=inValue.Cast<  ::flixel::_hx_system::debug::TooltipOverlay >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_markers") ) { _markers=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_actionMarker") ) { _actionMarker=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_actionHappening") ) { _actionHappening=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Transform_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_actionHappening",2b,20,48,24));
	outFields->push(HX_("_actionMarker",ef,64,da,e2));
	outFields->push(HX_("_tooltip",84,06,45,a4));
	outFields->push(HX_("_markers",fa,e6,ae,a1));
	outFields->push(HX_("_target",f0,04,64,f5));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Transform_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(Transform_obj,_actionHappening),HX_("_actionHappening",2b,20,48,24)},
	{::hx::fsInt,(int)offsetof(Transform_obj,_actionMarker),HX_("_actionMarker",ef,64,da,e2)},
	{::hx::fsObject /*  ::flixel::_hx_system::debug::TooltipOverlay */ ,(int)offsetof(Transform_obj,_tooltip),HX_("_tooltip",84,06,45,a4)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Transform_obj,_markers),HX_("_markers",fa,e6,ae,a1)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(Transform_obj,_target),HX_("_target",f0,04,64,f5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Transform_obj_sStaticStorageInfo = 0;
#endif

static ::String Transform_obj_sMemberFields[] = {
	HX_("_actionHappening",2b,20,48,24),
	HX_("_actionMarker",ef,64,da,e2),
	HX_("_tooltip",84,06,45,a4),
	HX_("_markers",fa,e6,ae,a1),
	HX_("_target",f0,04,64,f5),
	HX_("init",10,3b,bb,45),
	HX_("stopAction",58,8d,f5,3f),
	HX_("drawTargetAreaOutline",00,f3,f4,d0),
	HX_("drawMarkers",d5,d1,3e,b1),
	HX_("draw",04,2c,70,42),
	HX_("activate",b3,1b,ac,e5),
	HX_("deactivate",34,5c,01,3c),
	::String(null()) };

::hx::Class Transform_obj::__mClass;

void Transform_obj::__register()
{
	Transform_obj _hx_dummy;
	Transform_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.debug.interaction.tools.Transform",15,9d,09,e9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Transform_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Transform_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Transform_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Transform_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace interaction
} // end namespace tools
