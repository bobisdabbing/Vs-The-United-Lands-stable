// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_Option
#include <Option.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1cce971975218b09_11_new,"Option","new",0x702ed707,"Option.new","Options.hx",11,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_1cce971975218b09_38_getDescription,"Option","getDescription",0xff3298bf,"Option.getDescription","Options.hx",38,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_1cce971975218b09_43_getValue,"Option","getValue",0xb1980af4,"Option.getValue","Options.hx",43,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_1cce971975218b09_47_onType,"Option","onType",0x00425732,"Option.onType","Options.hx",47,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_1cce971975218b09_53_press,"Option","press",0x2a2f91ea,"Option.press","Options.hx",53,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_1cce971975218b09_58_updateDisplay,"Option","updateDisplay",0xbdef0ca0,"Option.updateDisplay","Options.hx",58,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_1cce971975218b09_63_left,"Option","left",0xb77ad380,"Option.left","Options.hx",63,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_1cce971975218b09_68_right,"Option","right",0x4b0b4a43,"Option.right","Options.hx",68,0x9d9a0240)

void Option_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_1cce971975218b09_11_new)
HXLINE(  24)		this->waitingType = false;
HXLINE(  22)		this->acceptType = false;
HXLINE(  20)		this->acceptValues = false;
HXLINE(  18)		this->description = HX_("",00,00,00,00);
HXLINE(  15)		this->display = this->updateDisplay();
            	}

Dynamic Option_obj::__CreateEmpty() { return new Option_obj; }

void *Option_obj::_hx_vtable = 0;

Dynamic Option_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Option_obj > _hx_result = new Option_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Option_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x27a70eb9;
}

::String Option_obj::getDescription(){
            	HX_STACKFRAME(&_hx_pos_1cce971975218b09_38_getDescription)
HXDLIN(  38)		return this->description;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Option_obj,getDescription,return )

::String Option_obj::getValue(){
            	HX_STACKFRAME(&_hx_pos_1cce971975218b09_43_getValue)
HXDLIN(  43)		return this->updateDisplay();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Option_obj,getValue,return )

void Option_obj::onType(::String text){
            	HX_STACKFRAME(&_hx_pos_1cce971975218b09_47_onType)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Option_obj,onType,(void))

bool Option_obj::press(){
            	HX_STACKFRAME(&_hx_pos_1cce971975218b09_53_press)
HXDLIN(  53)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Option_obj,press,return )

::String Option_obj::updateDisplay(){
            	HX_STACKFRAME(&_hx_pos_1cce971975218b09_58_updateDisplay)
HXDLIN(  58)		return HX_("",00,00,00,00);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Option_obj,updateDisplay,return )

bool Option_obj::left(){
            	HX_STACKFRAME(&_hx_pos_1cce971975218b09_63_left)
HXDLIN(  63)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Option_obj,left,return )

bool Option_obj::right(){
            	HX_STACKFRAME(&_hx_pos_1cce971975218b09_68_right)
HXDLIN(  68)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Option_obj,right,return )


Option_obj::Option_obj()
{
}

void Option_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Option);
	HX_MARK_MEMBER_NAME(description,"description");
	HX_MARK_MEMBER_NAME(display,"display");
	HX_MARK_MEMBER_NAME(acceptValues,"acceptValues");
	HX_MARK_MEMBER_NAME(acceptType,"acceptType");
	HX_MARK_MEMBER_NAME(waitingType,"waitingType");
	HX_MARK_END_CLASS();
}

void Option_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(description,"description");
	HX_VISIT_MEMBER_NAME(display,"display");
	HX_VISIT_MEMBER_NAME(acceptValues,"acceptValues");
	HX_VISIT_MEMBER_NAME(acceptType,"acceptType");
	HX_VISIT_MEMBER_NAME(waitingType,"waitingType");
}

::hx::Val Option_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { return ::hx::Val( left_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"press") ) { return ::hx::Val( press_dyn() ); }
		if (HX_FIELD_EQ(inName,"right") ) { return ::hx::Val( right_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"onType") ) { return ::hx::Val( onType_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"display") ) { return ::hx::Val( display ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getValue") ) { return ::hx::Val( getValue_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"acceptType") ) { return ::hx::Val( acceptType ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"description") ) { return ::hx::Val( description ); }
		if (HX_FIELD_EQ(inName,"waitingType") ) { return ::hx::Val( waitingType ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"acceptValues") ) { return ::hx::Val( acceptValues ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"updateDisplay") ) { return ::hx::Val( updateDisplay_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getDescription") ) { return ::hx::Val( getDescription_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Option_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"display") ) { display=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"acceptType") ) { acceptType=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"description") ) { description=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"waitingType") ) { waitingType=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"acceptValues") ) { acceptValues=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Option_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("description",fc,08,1d,5f));
	outFields->push(HX_("display",42,2a,4a,bb));
	outFields->push(HX_("acceptValues",0a,01,ae,b7));
	outFields->push(HX_("acceptType",e2,d5,62,c0));
	outFields->push(HX_("waitingType",e7,52,32,c3));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Option_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(Option_obj,description),HX_("description",fc,08,1d,5f)},
	{::hx::fsString,(int)offsetof(Option_obj,display),HX_("display",42,2a,4a,bb)},
	{::hx::fsBool,(int)offsetof(Option_obj,acceptValues),HX_("acceptValues",0a,01,ae,b7)},
	{::hx::fsBool,(int)offsetof(Option_obj,acceptType),HX_("acceptType",e2,d5,62,c0)},
	{::hx::fsBool,(int)offsetof(Option_obj,waitingType),HX_("waitingType",e7,52,32,c3)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Option_obj_sStaticStorageInfo = 0;
#endif

static ::String Option_obj_sMemberFields[] = {
	HX_("description",fc,08,1d,5f),
	HX_("display",42,2a,4a,bb),
	HX_("acceptValues",0a,01,ae,b7),
	HX_("acceptType",e2,d5,62,c0),
	HX_("waitingType",e7,52,32,c3),
	HX_("getDescription",06,5c,bb,e6),
	HX_("getValue",fb,8e,8f,91),
	HX_("onType",79,fb,92,ef),
	HX_("press",83,53,88,c8),
	HX_("updateDisplay",39,8f,b8,86),
	HX_("left",07,08,b0,47),
	HX_("right",dc,0b,64,e9),
	::String(null()) };

::hx::Class Option_obj::__mClass;

void Option_obj::__register()
{
	Option_obj _hx_dummy;
	Option_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Option",95,47,0f,60);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Option_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Option_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Option_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Option_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

