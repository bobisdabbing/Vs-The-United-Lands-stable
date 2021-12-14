// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_CoolUtil
#include <CoolUtil.h>
#endif
#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_FreeplaySongMetadata
#include <FreeplaySongMetadata.h>
#endif
#ifndef INCLUDED_LoadReplayState
#include <LoadReplayState.h>
#endif
#ifndef INCLUDED_LoadingState
#include <LoadingState.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_OptionsMenu
#include <OptionsMenu.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_Replay
#include <Replay.h>
#endif
#ifndef INCLUDED_Song
#include <Song.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxAction
#include <flixel/input/actions/FlxAction.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionDigital
#include <flixel/input/actions/FlxActionDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
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
#ifndef INCLUDED_smTools_SMFile
#include <smTools/SMFile.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_67c80871309dda48_24_new,"LoadReplayState","new",0x1e338fb6,"LoadReplayState.new","LoadReplayState.hx",24,0xb45e587a)
HX_LOCAL_STACK_FRAME(_hx_pos_67c80871309dda48_39_create,"LoadReplayState","create",0x8c296166,"LoadReplayState.create","LoadReplayState.hx",39,0xb45e587a)
static const ::String _hx_array_data_8a203cc4_4[] = {
	HX_("Bopeebo",90,29,16,da),HX_("Fresh",4e,f6,b3,99),HX_("Dadbattle",9f,4a,7c,48),
};
static const ::String _hx_array_data_8a203cc4_5[] = {
	HX_("dad",47,36,4c,00),
};
static const ::String _hx_array_data_8a203cc4_6[] = {
	HX_("Spookeez",2c,36,dd,4e),HX_("South",ed,01,fa,13),HX_("Monster",fa,7b,01,86),
};
static const ::String _hx_array_data_8a203cc4_7[] = {
	HX_("spooky",eb,bd,9e,c1),
};
static const ::String _hx_array_data_8a203cc4_8[] = {
	HX_("Pico",05,15,31,35),HX_("Philly",48,eb,f2,23),HX_("Blammed",76,2a,51,09),
};
static const ::String _hx_array_data_8a203cc4_9[] = {
	HX_("pico",e5,e8,57,4a),
};
static const ::String _hx_array_data_8a203cc4_10[] = {
	HX_("Satin-Panties",be,dc,41,e6),HX_("High",82,63,e7,2f),HX_("Milf",f6,78,35,33),
};
static const ::String _hx_array_data_8a203cc4_11[] = {
	HX_("mom",cb,16,53,00),
};
static const ::String _hx_array_data_8a203cc4_12[] = {
	HX_("Cocoa",e9,0c,83,dd),HX_("Eggnog",81,78,4e,29),HX_("Winter-Horrorland",9d,fd,2a,b7),
};
static const ::String _hx_array_data_8a203cc4_13[] = {
	HX_("parents-christmas",fe,94,c5,32),HX_("parents-christmas",fe,94,c5,32),HX_("monster-christmas",4f,88,85,27),
};
static const ::String _hx_array_data_8a203cc4_14[] = {
	HX_("Senpai",5c,53,22,a0),HX_("Roses",e4,db,91,80),HX_("Thorns",bc,33,5c,c1),
};
static const ::String _hx_array_data_8a203cc4_15[] = {
	HX_("senpai",3c,df,8d,6b),HX_("senpai",3c,df,8d,6b),HX_("spirit",31,bb,a9,bd),
};
HX_LOCAL_STACK_FRAME(_hx_pos_67c80871309dda48_106_sortByDate,"LoadReplayState","sortByDate",0x2aaffd0d,"LoadReplayState.sortByDate","LoadReplayState.hx",106,0xb45e587a)
HX_LOCAL_STACK_FRAME(_hx_pos_67c80871309dda48_114_getWeekNumbFromSong,"LoadReplayState","getWeekNumbFromSong",0x140b87fb,"LoadReplayState.getWeekNumbFromSong","LoadReplayState.hx",114,0xb45e587a)
HX_LOCAL_STACK_FRAME(_hx_pos_67c80871309dda48_127_addSong,"LoadReplayState","addSong",0x8f3688ec,"LoadReplayState.addSong","LoadReplayState.hx",127,0xb45e587a)
HX_LOCAL_STACK_FRAME(_hx_pos_67c80871309dda48_131_addWeek,"LoadReplayState","addWeek",0x91d3c50b,"LoadReplayState.addWeek","LoadReplayState.hx",131,0xb45e587a)
static const ::String _hx_array_data_8a203cc4_22[] = {
	HX_("bf",c4,55,00,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_67c80871309dda48_146_update,"LoadReplayState","update",0x971f8073,"LoadReplayState.update","LoadReplayState.hx",146,0xb45e587a)
static const ::String _hx_array_data_8a203cc4_25[] = {
	HX_("-easy",af,a6,14,2c),HX_("",00,00,00,00),HX_("-hard",98,49,10,2e),
};
HX_LOCAL_STACK_FRAME(_hx_pos_67c80871309dda48_255_changeSelection,"LoadReplayState","changeSelection",0x45620112,"LoadReplayState.changeSelection","LoadReplayState.hx",255,0xb45e587a)

void LoadReplayState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_67c80871309dda48_24_new)
HXLINE( 252)		this->isSettingControl = false;
HXLINE(  32)		this->actualNames = ::Array_obj< ::String >::__new(0);
HXLINE(  31)		this->controlsStrings = ::Array_obj< ::String >::__new(0);
HXLINE(  29)		this->songs = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  27)		this->curSelected = 0;
HXLINE(  24)		super::__construct(TransIn,TransOut);
            	}

Dynamic LoadReplayState_obj::__CreateEmpty() { return new LoadReplayState_obj; }

void *LoadReplayState_obj::_hx_vtable = 0;

Dynamic LoadReplayState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LoadReplayState_obj > _hx_result = new LoadReplayState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool LoadReplayState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x56472204) {
		if (inClassId<=(int)0x2f064378) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x2f064378;
			}
		} else {
			return inClassId==(int)0x3f706236 || inClassId==(int)0x56472204;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void LoadReplayState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_67c80871309dda48_39_create)
HXLINE(  40)		 ::flixel::FlxSprite menuBG =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  40)		 ::flixel::FlxSprite menuBG1 = menuBG->loadGraphic(::Paths_obj::loadImage(HX_("menuDesat",26,91,04,72),null()),null(),null(),null(),null(),null());
HXLINE(  43)		this->controlsStrings = ::sys::FileSystem_obj::readDirectory((::Sys_obj::getCwd() + HX_("/assets/replays/",40,86,c0,57)));
HXLINE(  47)		this->controlsStrings->sort(this->sortByDate_dyn());
HXLINE(  49)		this->addWeek(::Array_obj< ::String >::fromData( _hx_array_data_8a203cc4_4,3),1,::Array_obj< ::String >::fromData( _hx_array_data_8a203cc4_5,1));
HXLINE(  50)		this->addWeek(::Array_obj< ::String >::fromData( _hx_array_data_8a203cc4_6,3),2,::Array_obj< ::String >::fromData( _hx_array_data_8a203cc4_7,1));
HXLINE(  51)		this->addWeek(::Array_obj< ::String >::fromData( _hx_array_data_8a203cc4_8,3),3,::Array_obj< ::String >::fromData( _hx_array_data_8a203cc4_9,1));
HXLINE(  53)		this->addWeek(::Array_obj< ::String >::fromData( _hx_array_data_8a203cc4_10,3),4,::Array_obj< ::String >::fromData( _hx_array_data_8a203cc4_11,1));
HXLINE(  54)		this->addWeek(::Array_obj< ::String >::fromData( _hx_array_data_8a203cc4_12,3),5,::Array_obj< ::String >::fromData( _hx_array_data_8a203cc4_13,3));
HXLINE(  56)		this->addWeek(::Array_obj< ::String >::fromData( _hx_array_data_8a203cc4_14,3),6,::Array_obj< ::String >::fromData( _hx_array_data_8a203cc4_15,3));
HXLINE(  58)		{
HXLINE(  58)			int _g = 0;
HXDLIN(  58)			int _g1 = this->controlsStrings->length;
HXDLIN(  58)			while((_g < _g1)){
HXLINE(  58)				_g = (_g + 1);
HXDLIN(  58)				int i = (_g - 1);
HXLINE(  60)				::String string = this->controlsStrings->__get(i);
HXLINE(  61)				this->actualNames[i] = string;
HXLINE(  62)				 ::Replay rep = ::Replay_obj::LoadReplay(string);
HXLINE(  63)				::Array< ::String > _hx_tmp = this->controlsStrings;
HXDLIN(  63)				::String _hx_tmp1 = (string.split(HX_("time",0d,cc,fc,4c))->__get(0) + HX_(" ",20,00,00,00));
HXDLIN(  63)				_hx_tmp[i] = (_hx_tmp1 + ::CoolUtil_obj::difficultyFromInt(( (int)(rep->replay->__Field(HX_("songDiff",7a,ba,41,30),::hx::paccDynamic)) )).toUpperCase());
            			}
            		}
HXLINE(  66)		if ((this->controlsStrings->length == 0)) {
HXLINE(  67)			this->controlsStrings->push(HX_("No Replays...",81,d1,ed,00));
            		}
HXLINE(  69)		menuBG1->set_color(-1412611);
HXLINE(  70)		menuBG1->setGraphicSize(::Std_obj::_hx_int((menuBG1->get_width() * ((Float)1.1))),null());
HXLINE(  71)		menuBG1->updateHitbox();
HXLINE(  72)		menuBG1->screenCenter(null());
HXLINE(  73)		menuBG1->set_antialiasing(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("antialiasing",f4,16,b3,48),::hx::paccDynamic)) ));
HXLINE(  74)		this->add(menuBG1);
HXLINE(  76)		this->grpControls =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  77)		this->add(this->grpControls);
HXLINE(  79)		{
HXLINE(  79)			int _g2 = 0;
HXDLIN(  79)			int _g3 = this->controlsStrings->length;
HXDLIN(  79)			while((_g2 < _g3)){
HXLINE(  79)				_g2 = (_g2 + 1);
HXDLIN(  79)				int i = (_g2 - 1);
HXLINE(  81)				 ::Alphabet controlLabel =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(((70 * i) + 30)) ),this->controlsStrings->__get(i),true,false,null(),null(),null());
HXLINE(  82)				controlLabel->isMenuItem = true;
HXLINE(  83)				controlLabel->targetY = ( (Float)(i) );
HXLINE(  84)				this->grpControls->add(controlLabel).StaticCast<  ::Alphabet >();
            			}
            		}
HXLINE(  88)		this->versionShit =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,5,(::flixel::FlxG_obj::height - 34),0,HX_("Replay Loader (ESCAPE TO GO BACK)\nNOTICE!!!! Replays are in a beta stage, and they are probably not 100% correct. expect misses and other stuff that isn't there!\n",52,06,06,66),12,null());
HXLINE(  91)		this->versionShit->scrollFactor->set(null(),null());
HXLINE(  92)		this->versionShit->setFormat(HX_("VCR OSD Mono",be,44,e4,b8),16,-1,HX_("left",07,08,b0,47),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE(  93)		this->add(this->versionShit);
HXLINE(  95)		this->poggerDetails =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,5,34,0,HX_("Replay Details - \nnone",38,c3,7c,19),12,null());
HXLINE(  96)		this->poggerDetails->scrollFactor->set(null(),null());
HXLINE(  97)		this->poggerDetails->setFormat(HX_("VCR OSD Mono",be,44,e4,b8),16,-1,HX_("left",07,08,b0,47),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE(  98)		this->add(this->poggerDetails);
HXLINE( 100)		this->changeSelection(0);
HXLINE( 102)		this->super::create();
            	}


int LoadReplayState_obj::sortByDate(::String a,::String b){
            	HX_STACKFRAME(&_hx_pos_67c80871309dda48_106_sortByDate)
HXLINE( 107)		Float aTime = (::Std_obj::parseFloat(a.split(HX_("time",0d,cc,fc,4c))->__get(1)) / ( (Float)(1000) ));
HXLINE( 108)		Float bTime = (::Std_obj::parseFloat(b.split(HX_("time",0d,cc,fc,4c))->__get(1)) / ( (Float)(1000) ));
HXLINE( 110)		return ::Std_obj::_hx_int((bTime - aTime));
            	}


HX_DEFINE_DYNAMIC_FUNC2(LoadReplayState_obj,sortByDate,return )

int LoadReplayState_obj::getWeekNumbFromSong(::String songName){
            	HX_STACKFRAME(&_hx_pos_67c80871309dda48_114_getWeekNumbFromSong)
HXLINE( 115)		int week = 0;
HXLINE( 116)		{
HXLINE( 116)			int _g = 0;
HXDLIN( 116)			int _g1 = this->songs->length;
HXDLIN( 116)			while((_g < _g1)){
HXLINE( 116)				_g = (_g + 1);
HXDLIN( 116)				int i = (_g - 1);
HXLINE( 118)				 ::FreeplaySongMetadata pog = this->songs->__get(i).StaticCast<  ::FreeplaySongMetadata >();
HXLINE( 119)				if ((pog->songName == songName)) {
HXLINE( 120)					week = pog->week;
            				}
            			}
            		}
HXLINE( 122)		return week;
            	}


HX_DEFINE_DYNAMIC_FUNC1(LoadReplayState_obj,getWeekNumbFromSong,return )

void LoadReplayState_obj::addSong(::String songName,int weekNum,::String songCharacter){
            	HX_GC_STACKFRAME(&_hx_pos_67c80871309dda48_127_addSong)
HXDLIN( 127)		::Array< ::Dynamic> _hx_tmp = this->songs;
HXDLIN( 127)		_hx_tmp->push( ::FreeplaySongMetadata_obj::__alloc( HX_CTX ,songName,weekNum,songCharacter,null(),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC3(LoadReplayState_obj,addSong,(void))

void LoadReplayState_obj::addWeek(::Array< ::String > songs,int weekNum,::Array< ::String > songCharacters){
            	HX_STACKFRAME(&_hx_pos_67c80871309dda48_131_addWeek)
HXLINE( 132)		if (::hx::IsNull( songCharacters )) {
HXLINE( 133)			songCharacters = ::Array_obj< ::String >::fromData( _hx_array_data_8a203cc4_22,1);
            		}
HXLINE( 135)		int num = 0;
HXLINE( 136)		{
HXLINE( 136)			int _g = 0;
HXDLIN( 136)			while((_g < songs->length)){
HXLINE( 136)				::String song = songs->__get(_g);
HXDLIN( 136)				_g = (_g + 1);
HXLINE( 138)				this->addSong(song,weekNum,songCharacters->__get(num));
HXLINE( 140)				if ((songCharacters->length != 1)) {
HXLINE( 141)					num = (num + 1);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(LoadReplayState_obj,addWeek,(void))

void LoadReplayState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_67c80871309dda48_146_update)
HXLINE( 147)		this->super::update(elapsed);
HXLINE( 149)		if (::PlayerSettings_obj::player1->controls->_back->check()) {
HXLINE( 150)			 ::flixel::FlxState nextState =  ::OptionsMenu_obj::__alloc( HX_CTX ,null());
HXDLIN( 150)			if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 150)				::flixel::FlxG_obj::game->_requestedState = nextState;
            			}
            		}
HXLINE( 151)		if (::PlayerSettings_obj::player1->controls->_upP->check()) {
HXLINE( 152)			this->changeSelection(-1);
            		}
HXLINE( 153)		if (::PlayerSettings_obj::player1->controls->_downP->check()) {
HXLINE( 154)			this->changeSelection(1);
            		}
HXLINE( 156)		bool _hx_tmp;
HXDLIN( 156)		if (::PlayerSettings_obj::player1->controls->_accept->check()) {
HXLINE( 156)			_hx_tmp = (Dynamic( this->grpControls->members->__get(this->curSelected)).StaticCast<  ::Alphabet >()->text != HX_("No Replays...",81,d1,ed,00));
            		}
            		else {
HXLINE( 156)			_hx_tmp = false;
            		}
HXDLIN( 156)		if (_hx_tmp) {
HXLINE( 159)			::PlayState_obj::rep = ::Replay_obj::LoadReplay(this->actualNames->__get(this->curSelected));
HXLINE( 161)			::PlayState_obj::loadRep = true;
HXLINE( 163)			if (::hx::IsEq( ::PlayState_obj::rep->replay->__Field(HX_("replayGameVer",2a,ad,0b,ce),::hx::paccDynamic),::Replay_obj::version )) {
HXLINE( 166)				::String songFormat = ::StringTools_obj::replace(( (::String)(::PlayState_obj::rep->replay->__Field(HX_("songName",c0,d0,d7,36),::hx::paccDynamic)) ),HX_(" ",20,00,00,00),HX_("-",2d,00,00,00));
HXLINE( 167)				::String _hx_switch_0 = songFormat;
            				if (  (_hx_switch_0==HX_("Dad-Battle",fe,4d,ac,32)) ){
HXLINE( 170)					songFormat = HX_("dadbattle",bf,6a,a9,a6);
HXDLIN( 170)					goto _hx_goto_23;
            				}
            				if (  (_hx_switch_0==HX_("M.I.L.F",1e,4e,41,0d)) ){
HXLINE( 174)					songFormat = HX_("milf",d6,4c,5c,48);
HXDLIN( 174)					goto _hx_goto_23;
            				}
            				if (  (_hx_switch_0==HX_("Philly-Nice",22,f2,31,13)) ){
HXLINE( 172)					songFormat = HX_("philly",28,77,5e,ef);
HXDLIN( 172)					goto _hx_goto_23;
            				}
            				if (  (_hx_switch_0==HX_("dad-battle",be,d5,66,07)) ){
HXLINE( 177)					songFormat = HX_("dadbattle",bf,6a,a9,a6);
HXDLIN( 177)					goto _hx_goto_23;
            				}
            				if (  (_hx_switch_0==HX_("m.i.l.f",9e,fe,da,ac)) ){
HXLINE( 181)					songFormat = HX_("milf",d6,4c,5c,48);
HXDLIN( 181)					goto _hx_goto_23;
            				}
            				if (  (_hx_switch_0==HX_("philly-nice",22,2e,26,44)) ){
HXLINE( 179)					songFormat = HX_("philly",28,77,5e,ef);
HXDLIN( 179)					goto _hx_goto_23;
            				}
            				_hx_goto_23:;
HXLINE( 184)				::String songPath = HX_("",00,00,00,00);
HXLINE( 187)				if (( (bool)(::PlayState_obj::rep->replay->__Field(HX_("sm",9a,64,00,00),::hx::paccDynamic)) )) {
HXLINE( 188)					if (!(::sys::FileSystem_obj::exists(::StringTools_obj::replace(( (::String)(::PlayState_obj::rep->replay->__Field(HX_("chartPath",a3,75,d1,25),::hx::paccDynamic)) ),HX_("converted.json",04,d7,80,0c),HX_("",00,00,00,00))))) {
HXLINE( 190)						::lime::app::Application_obj::current->_hx___window->alert(HX_("The SM file in this replay does not exist!",59,ef,e9,5a),HX_("SM Replays",c6,39,89,69));
HXLINE( 191)						return;
            					}
            				}
HXLINE( 195)				::PlayState_obj::isSM = ( (bool)(::PlayState_obj::rep->replay->__Field(HX_("sm",9a,64,00,00),::hx::paccDynamic)) );
HXLINE( 197)				if (::PlayState_obj::isSM) {
HXLINE( 198)					::PlayState_obj::pathToSm = ::StringTools_obj::replace(( (::String)(::PlayState_obj::rep->replay->__Field(HX_("chartPath",a3,75,d1,25),::hx::paccDynamic)) ),HX_("converted.json",04,d7,80,0c),HX_("",00,00,00,00));
            				}
HXLINE( 202)				if (::PlayState_obj::isSM) {
HXLINE( 204)					songPath = ::sys::io::File_obj::getContent(( (::String)(::PlayState_obj::rep->replay->__Field(HX_("chartPath",a3,75,d1,25),::hx::paccDynamic)) ));
HXLINE( 205)					try {
            						HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 207)						::String _hx_tmp = (::PlayState_obj::pathToSm + HX_("/",2f,00,00,00));
HXDLIN( 207)						::PlayState_obj::sm = ::smTools::SMFile_obj::loadFile(((_hx_tmp + ::StringTools_obj::replace(( (::String)(::PlayState_obj::rep->replay->__Field(HX_("songName",c0,d0,d7,36),::hx::paccDynamic)) ),HX_(" ",20,00,00,00),HX_("_",5f,00,00,00))) + HX_(".sm",48,4c,23,00)));
            					} catch( ::Dynamic _hx_e) {
            						if (_hx_e.IsClass<  ::Dynamic >() ){
            							HX_STACK_BEGIN_CATCH
            							 ::Dynamic _g = _hx_e;
HXLINE( 211)							 ::lime::ui::Window _hx_tmp = ::lime::app::Application_obj::current->_hx___window;
HXDLIN( 211)							::String _hx_tmp1 = ((HX_("Make sure that the SM file is called ",da,1a,ee,3a) + ::PlayState_obj::pathToSm) + HX_("/",2f,00,00,00));
HXDLIN( 211)							_hx_tmp->alert(((_hx_tmp1 + ::StringTools_obj::replace(( (::String)(::PlayState_obj::rep->replay->__Field(HX_("songName",c0,d0,d7,36),::hx::paccDynamic)) ),HX_(" ",20,00,00,00),HX_("_",5f,00,00,00))) + HX_(".sm!\nAs I couldn't read it.",2b,7b,52,56)),HX_("SM Replays",c6,39,89,69));
HXLINE( 217)							return;
            						}
            						else {
            							HX_STACK_DO_THROW(_hx_e);
            						}
            					}
            				}
HXLINE( 222)				try {
            					HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 224)					if (::PlayState_obj::isSM) {
HXLINE( 226)						::PlayState_obj::SONG = ::Song_obj::loadFromJsonRAW(songPath);
            					}
            					else {
HXLINE( 230)						::String diff = ::Array_obj< ::String >::fromData( _hx_array_data_8a203cc4_25,3)->__get(( (int)(::PlayState_obj::rep->replay->__Field(HX_("songDiff",7a,ba,41,30),::hx::paccDynamic)) ));
HXLINE( 231)						::PlayState_obj::SONG = ::Song_obj::loadFromJson(( (::String)(::PlayState_obj::rep->replay->__Field(HX_("songName",c0,d0,d7,36),::hx::paccDynamic)) ),diff);
            					}
            				} catch( ::Dynamic _hx_e) {
            					if (_hx_e.IsClass<  ::Dynamic >() ){
            						HX_STACK_BEGIN_CATCH
            						 ::Dynamic _g = _hx_e;
HXLINE( 236)						::lime::app::Application_obj::current->_hx___window->alert(HX_("Failed to load the song! Does the JSON exist?",e5,1b,ba,fe),HX_("Replays",4c,83,79,78));
HXLINE( 237)						return;
            					}
            					else {
            						HX_STACK_DO_THROW(_hx_e);
            					}
            				}
HXLINE( 239)				::PlayState_obj::isStoryMode = false;
HXLINE( 240)				::PlayState_obj::storyDifficulty = ( (int)(::PlayState_obj::rep->replay->__Field(HX_("songDiff",7a,ba,41,30),::hx::paccDynamic)) );
HXLINE( 241)				::PlayState_obj::storyWeek = this->getWeekNumbFromSong(( (::String)(::PlayState_obj::rep->replay->__Field(HX_("songName",c0,d0,d7,36),::hx::paccDynamic)) ));
HXLINE( 242)				{
HXLINE( 242)					 ::flixel::FlxState nextState = ::LoadingState_obj::getNextState(( ( ::flixel::FlxState)( ::PlayState_obj::__alloc( HX_CTX ,null(),null())) ),false);
HXDLIN( 242)					if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 242)						::flixel::FlxG_obj::game->_requestedState = nextState;
            					}
            				}
            			}
            			else {
HXLINE( 246)				::PlayState_obj::rep = null();
HXLINE( 247)				::PlayState_obj::loadRep = false;
            			}
            		}
            	}


void LoadReplayState_obj::changeSelection(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_67c80871309dda48_255_changeSelection)
HXLINE( 256)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 256)		_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),((Float)0.4),null(),null(),null(),null());
HXLINE( 258)		 ::LoadReplayState _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 258)		_hx_tmp1->curSelected = (_hx_tmp1->curSelected + change);
HXLINE( 260)		if ((this->curSelected < 0)) {
HXLINE( 261)			this->curSelected = (this->grpControls->length - 1);
            		}
HXLINE( 262)		if ((this->curSelected >= this->grpControls->length)) {
HXLINE( 263)			this->curSelected = 0;
            		}
HXLINE( 265)		 ::Replay rep = ::Replay_obj::LoadReplay(this->actualNames->__get(this->curSelected));
HXLINE( 267)		 ::flixel::text::FlxText _hx_tmp2 = this->poggerDetails;
HXDLIN( 267)		::String _hx_tmp3 = ((HX_("Replay Details - \nDate Created: ",9c,0e,70,a7) + ::Std_obj::string( ::Dynamic(rep->replay->__Field(HX_("timestamp",d6,d4,ce,a5),::hx::paccDynamic)))) + HX_("\nSong: ",65,cd,f3,01));
HXLINE( 274)		::String _hx_tmp4;
HXDLIN( 274)		if (::hx::IsNotEq( rep->replay->__Field(HX_("replayGameVer",2a,ad,0b,ce),::hx::paccDynamic),::Replay_obj::version )) {
HXLINE( 274)			_hx_tmp4 = HX_("OUTDATED not useable!",45,90,99,ff);
            		}
            		else {
HXLINE( 274)			_hx_tmp4 = HX_("Latest",67,79,f7,89);
            		}
HXLINE( 267)		_hx_tmp2->set_text(( (::String)(((((((_hx_tmp3 + rep->replay->__Field(HX_("songName",c0,d0,d7,36),::hx::paccDynamic)) + HX_("\nReplay Version: ",8f,f9,99,d3)) + rep->replay->__Field(HX_("replayGameVer",2a,ad,0b,ce),::hx::paccDynamic)) + HX_(" (",08,1c,00,00)) + _hx_tmp4) + HX_(")\n",c1,23,00,00))) ));
HXLINE( 279)		int bullShit = 0;
HXLINE( 281)		{
HXLINE( 281)			int _g = 0;
HXDLIN( 281)			::Array< ::Dynamic> _g1 = this->grpControls->members;
HXDLIN( 281)			while((_g < _g1->length)){
HXLINE( 281)				 ::Alphabet item = _g1->__get(_g).StaticCast<  ::Alphabet >();
HXDLIN( 281)				_g = (_g + 1);
HXLINE( 283)				item->targetY = ( (Float)((bullShit - this->curSelected)) );
HXLINE( 284)				bullShit = (bullShit + 1);
HXLINE( 286)				item->set_alpha(((Float)0.6));
HXLINE( 289)				if ((item->targetY == 0)) {
HXLINE( 291)					item->set_alpha(( (Float)(1) ));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(LoadReplayState_obj,changeSelection,(void))


::hx::ObjectPtr< LoadReplayState_obj > LoadReplayState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< LoadReplayState_obj > __this = new LoadReplayState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< LoadReplayState_obj > LoadReplayState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	LoadReplayState_obj *__this = (LoadReplayState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LoadReplayState_obj), true, "LoadReplayState"));
	*(void **)__this = LoadReplayState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

LoadReplayState_obj::LoadReplayState_obj()
{
}

void LoadReplayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LoadReplayState);
	HX_MARK_MEMBER_NAME(selector,"selector");
	HX_MARK_MEMBER_NAME(curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(songs,"songs");
	HX_MARK_MEMBER_NAME(controlsStrings,"controlsStrings");
	HX_MARK_MEMBER_NAME(actualNames,"actualNames");
	HX_MARK_MEMBER_NAME(grpControls,"grpControls");
	HX_MARK_MEMBER_NAME(versionShit,"versionShit");
	HX_MARK_MEMBER_NAME(poggerDetails,"poggerDetails");
	HX_MARK_MEMBER_NAME(isSettingControl,"isSettingControl");
	 ::MusicBeatState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LoadReplayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(selector,"selector");
	HX_VISIT_MEMBER_NAME(curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(songs,"songs");
	HX_VISIT_MEMBER_NAME(controlsStrings,"controlsStrings");
	HX_VISIT_MEMBER_NAME(actualNames,"actualNames");
	HX_VISIT_MEMBER_NAME(grpControls,"grpControls");
	HX_VISIT_MEMBER_NAME(versionShit,"versionShit");
	HX_VISIT_MEMBER_NAME(poggerDetails,"poggerDetails");
	HX_VISIT_MEMBER_NAME(isSettingControl,"isSettingControl");
	 ::MusicBeatState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val LoadReplayState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"songs") ) { return ::hx::Val( songs ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addSong") ) { return ::hx::Val( addSong_dyn() ); }
		if (HX_FIELD_EQ(inName,"addWeek") ) { return ::hx::Val( addWeek_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"selector") ) { return ::hx::Val( selector ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sortByDate") ) { return ::hx::Val( sortByDate_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { return ::hx::Val( curSelected ); }
		if (HX_FIELD_EQ(inName,"actualNames") ) { return ::hx::Val( actualNames ); }
		if (HX_FIELD_EQ(inName,"grpControls") ) { return ::hx::Val( grpControls ); }
		if (HX_FIELD_EQ(inName,"versionShit") ) { return ::hx::Val( versionShit ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"poggerDetails") ) { return ::hx::Val( poggerDetails ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"controlsStrings") ) { return ::hx::Val( controlsStrings ); }
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"isSettingControl") ) { return ::hx::Val( isSettingControl ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getWeekNumbFromSong") ) { return ::hx::Val( getWeekNumbFromSong_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val LoadReplayState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"songs") ) { songs=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"selector") ) { selector=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"actualNames") ) { actualNames=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"grpControls") ) { grpControls=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"versionShit") ) { versionShit=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"poggerDetails") ) { poggerDetails=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"controlsStrings") ) { controlsStrings=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"isSettingControl") ) { isSettingControl=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LoadReplayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("selector",1f,33,6d,b1));
	outFields->push(HX_("curSelected",fb,eb,ab,32));
	outFields->push(HX_("songs",fe,36,c7,80));
	outFields->push(HX_("controlsStrings",ac,8a,05,03));
	outFields->push(HX_("actualNames",5a,b2,63,04));
	outFields->push(HX_("grpControls",7b,bb,b2,d5));
	outFields->push(HX_("versionShit",f8,4e,3b,e2));
	outFields->push(HX_("poggerDetails",16,16,08,68));
	outFields->push(HX_("isSettingControl",37,39,d8,de));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo LoadReplayState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(LoadReplayState_obj,selector),HX_("selector",1f,33,6d,b1)},
	{::hx::fsInt,(int)offsetof(LoadReplayState_obj,curSelected),HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(LoadReplayState_obj,songs),HX_("songs",fe,36,c7,80)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(LoadReplayState_obj,controlsStrings),HX_("controlsStrings",ac,8a,05,03)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(LoadReplayState_obj,actualNames),HX_("actualNames",5a,b2,63,04)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(LoadReplayState_obj,grpControls),HX_("grpControls",7b,bb,b2,d5)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(LoadReplayState_obj,versionShit),HX_("versionShit",f8,4e,3b,e2)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(LoadReplayState_obj,poggerDetails),HX_("poggerDetails",16,16,08,68)},
	{::hx::fsBool,(int)offsetof(LoadReplayState_obj,isSettingControl),HX_("isSettingControl",37,39,d8,de)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *LoadReplayState_obj_sStaticStorageInfo = 0;
#endif

static ::String LoadReplayState_obj_sMemberFields[] = {
	HX_("selector",1f,33,6d,b1),
	HX_("curSelected",fb,eb,ab,32),
	HX_("songs",fe,36,c7,80),
	HX_("controlsStrings",ac,8a,05,03),
	HX_("actualNames",5a,b2,63,04),
	HX_("grpControls",7b,bb,b2,d5),
	HX_("versionShit",f8,4e,3b,e2),
	HX_("poggerDetails",16,16,08,68),
	HX_("create",fc,66,0f,7c),
	HX_("sortByDate",a3,85,97,64),
	HX_("getWeekNumbFromSong",a5,3c,95,20),
	HX_("addSong",96,66,95,88),
	HX_("addWeek",b5,a2,32,8b),
	HX_("update",09,86,05,87),
	HX_("isSettingControl",37,39,d8,de),
	HX_("changeSelection",bc,98,b5,48),
	::String(null()) };

::hx::Class LoadReplayState_obj::__mClass;

void LoadReplayState_obj::__register()
{
	LoadReplayState_obj _hx_dummy;
	LoadReplayState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("LoadReplayState",c4,3c,20,8a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LoadReplayState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LoadReplayState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LoadReplayState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LoadReplayState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

