#include <hxcpp.h>

#ifndef INCLUDED_MenuState
#include <MenuState.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxInput
#include <flixel/interfaces/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_AngleTween
#include <flixel/tweens/misc/AngleTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_ColorTween
#include <flixel/tweens/misc/ColorTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif

Void MenuState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("MenuState","new",0xe563b1c4,"MenuState.new","MenuState.hx",16,0xdfbcb22c)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(24)
	this->startTimer = (int)3;
	HX_STACK_LINE(19)
	this->p2Ready = false;
	HX_STACK_LINE(18)
	this->p1Ready = false;
	HX_STACK_LINE(16)
	super::__construct(MaxSize);
}
;
	return null();
}

//MenuState_obj::~MenuState_obj() { }

Dynamic MenuState_obj::__CreateEmpty() { return  new MenuState_obj; }
hx::ObjectPtr< MenuState_obj > MenuState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< MenuState_obj > result = new MenuState_obj();
	result->__construct(MaxSize);
	return result;}

Dynamic MenuState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MenuState_obj > result = new MenuState_obj();
	result->__construct(inArgs[0]);
	return result;}

Void MenuState_obj::create( ){
{
		HX_STACK_FRAME("MenuState","create",0xe57b7c18,"MenuState.create","MenuState.hx",32,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(33)
		this->super::create();
		HX_STACK_LINE(35)
		::flixel::FlxG_obj::mouse->set_visible(false);
		HX_STACK_LINE(37)
		::flixel::text::FlxText titleText = ::flixel::text::FlxText_obj::__new((int)0,(int)100,::flixel::FlxG_obj::width,HX_CSTRING("Why did the grandpa cross the road?"),null(),null());		HX_STACK_VAR(titleText,"titleText");
		HX_STACK_LINE(38)
		titleText->setFormat(null(),(int)50,(int)-16776961,HX_CSTRING("center"),null(),null(),null());
		HX_STACK_LINE(40)
		this->add(titleText);
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","MenuState.hx",42,0xdfbcb22c)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("x") , 1.2,false);
					__result->Add(HX_CSTRING("y") , 1.7,false);
					return __result;
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","MenuState.hx",42,0xdfbcb22c)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("type") , (int)4,false);
					__result->Add(HX_CSTRING("ease") , ::flixel::tweens::FlxEase_obj::bounceInOut_dyn(),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(42)
		::flixel::tweens::FlxTween_obj::tween(titleText->scale,_Function_1_1::Block(),.5,_Function_1_2::Block());
		struct _Function_1_3{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","MenuState.hx",43,0xdfbcb22c)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("type") , (int)4,false);
					__result->Add(HX_CSTRING("ease") , ::flixel::tweens::FlxEase_obj::sineInOut_dyn(),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(43)
		::flixel::tweens::FlxTween_obj::angle(titleText,(int)-10,(int)10,.4,_Function_1_3::Block());
		struct _Function_1_4{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","MenuState.hx",44,0xdfbcb22c)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("type") , (int)4,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(44)
		::flixel::tweens::FlxTween_obj::color(titleText,.2,(int)-16776961,(int)-65536,null(),null(),_Function_1_4::Block());
		HX_STACK_LINE(46)
		::flixel::system::FlxSound _g = ::flixel::FlxG_obj::sound->load(HX_CSTRING("assets/sounds/ready.wav"),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(46)
		this->_sndReady = _g;
		HX_STACK_LINE(48)
		::flixel::text::FlxText _g1 = ::flixel::text::FlxText_obj::__new((int)0,(int)380,::flixel::FlxG_obj::width,HX_CSTRING("Player 1 Ready"),null(),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(48)
		this->p1ReadyTxt = _g1;
		HX_STACK_LINE(49)
		this->p1ReadyTxt->setFormat(null(),(int)30,(int)-16776961,HX_CSTRING("center"),null(),null(),null());
		struct _Function_1_5{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","MenuState.hx",50,0xdfbcb22c)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("alpha") , (int)0,false);
					return __result;
				}
				return null();
			}
		};
		struct _Function_1_6{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","MenuState.hx",50,0xdfbcb22c)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("type") , (int)4,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(50)
		::flixel::tweens::FlxTween_obj::tween(this->p1ReadyTxt,_Function_1_5::Block(),.3,_Function_1_6::Block());
		HX_STACK_LINE(51)
		this->add(this->p1ReadyTxt);
		HX_STACK_LINE(52)
		::flixel::text::FlxText _g2 = ::flixel::text::FlxText_obj::__new((int)0,(int)430,::flixel::FlxG_obj::width,HX_CSTRING("Player 2 Ready"),null(),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(52)
		this->p2ReadyTxt = _g2;
		HX_STACK_LINE(53)
		this->p2ReadyTxt->setFormat(null(),(int)30,(int)-65536,HX_CSTRING("center"),null(),null(),null());
		struct _Function_1_7{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","MenuState.hx",54,0xdfbcb22c)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("alpha") , (int)0,false);
					return __result;
				}
				return null();
			}
		};
		struct _Function_1_8{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","MenuState.hx",54,0xdfbcb22c)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("type") , (int)4,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(54)
		::flixel::tweens::FlxTween_obj::tween(this->p2ReadyTxt,_Function_1_7::Block(),.3,_Function_1_8::Block());
		HX_STACK_LINE(55)
		this->add(this->p2ReadyTxt);
		HX_STACK_LINE(56)
		::flixel::text::FlxText _g3 = ::flixel::text::FlxText_obj::__new((int)0,(int)300,::flixel::FlxG_obj::width,null(),null(),null());		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(56)
		this->timerTxt = _g3;
		HX_STACK_LINE(57)
		this->timerTxt->setFormat(null(),(int)46,(int)-8388864,HX_CSTRING("center"),null(),null(),null());
		HX_STACK_LINE(58)
		this->add(this->timerTxt);
		HX_STACK_LINE(59)
		::flixel::text::FlxText _g4 = ::flixel::text::FlxText_obj::__new((int)0,(int)455,::flixel::FlxG_obj::width,HX_CSTRING("Sanju (2015)"),null(),null());		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(59)
		this->sanjuTxt = _g4;
		HX_STACK_LINE(60)
		this->sanjuTxt->setFormat(null(),(int)8,(int)-10496,null(),null(),null(),null());
		HX_STACK_LINE(61)
		this->add(this->sanjuTxt);
		HX_STACK_LINE(63)
		::flixel::FlxSprite playerBlue = ::flixel::FlxSprite_obj::__new((int)30,(int)300,null());		HX_STACK_VAR(playerBlue,"playerBlue");
		HX_STACK_LINE(64)
		playerBlue->loadGraphic(HX_CSTRING("assets/images/portadaP1.png"),null(),null(),null(),null(),null());
		struct _Function_1_9{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","MenuState.hx",65,0xdfbcb22c)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("type") , (int)4,false);
					__result->Add(HX_CSTRING("ease") , ::flixel::tweens::FlxEase_obj::sineInOut_dyn(),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(65)
		::flixel::tweens::FlxTween_obj::angle(playerBlue,(int)-10,(int)10,.4,_Function_1_9::Block());
		HX_STACK_LINE(66)
		this->add(playerBlue);
		HX_STACK_LINE(67)
		::flixel::FlxSprite playerRed = ::flixel::FlxSprite_obj::__new((int)586,(int)300,null());		HX_STACK_VAR(playerRed,"playerRed");
		HX_STACK_LINE(68)
		playerRed->loadGraphic(HX_CSTRING("assets/images/portadaP2.png"),null(),null(),null(),null(),null());
		struct _Function_1_10{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","MenuState.hx",69,0xdfbcb22c)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("type") , (int)4,false);
					__result->Add(HX_CSTRING("ease") , ::flixel::tweens::FlxEase_obj::sineInOut_dyn(),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(69)
		::flixel::tweens::FlxTween_obj::angle(playerRed,(int)-10,(int)10,.4,_Function_1_10::Block());
		HX_STACK_LINE(70)
		this->add(playerRed);
	}
return null();
}


Void MenuState_obj::destroy( ){
{
		HX_STACK_FRAME("MenuState","destroy",0xf9ac905e,"MenuState.destroy","MenuState.hx",78,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(79)
		this->super::destroy();
		HX_STACK_LINE(80)
		::flixel::text::FlxText _g = ::flixel::util::FlxDestroyUtil_obj::destroy(this->p1ReadyTxt);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(80)
		this->p1ReadyTxt = _g;
		HX_STACK_LINE(81)
		::flixel::text::FlxText _g1 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->p2ReadyTxt);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(81)
		this->p2ReadyTxt = _g1;
		HX_STACK_LINE(82)
		::flixel::text::FlxText _g2 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->timerTxt);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(82)
		this->timerTxt = _g2;
		HX_STACK_LINE(83)
		::flixel::system::FlxSound _g3 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_sndReady);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(83)
		this->_sndReady = _g3;
	}
return null();
}


Void MenuState_obj::update( ){
{
		HX_STACK_FRAME("MenuState","update",0xf0719b25,"MenuState.update","MenuState.hx",90,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(91)
		this->super::update();
		HX_STACK_LINE(93)
		if ((::flixel::FlxG_obj::keys->checkKeyStatus(Array_obj< ::String >::__new().Add(HX_CSTRING("SPACE")),(int)2))){
			HX_STACK_LINE(95)
			this->p1Ready = true;
			HX_STACK_LINE(96)
			this->_sndReady->play(true);
		}
		HX_STACK_LINE(99)
		if ((::flixel::FlxG_obj::keys->checkKeyStatus(Array_obj< ::String >::__new().Add(HX_CSTRING("ENTER")),(int)2))){
			HX_STACK_LINE(101)
			this->p2Ready = true;
			HX_STACK_LINE(102)
			this->_sndReady->play(true);
		}
		HX_STACK_LINE(105)
		this->p1ReadyTxt->set_visible(this->p1Ready);
		HX_STACK_LINE(106)
		this->p2ReadyTxt->set_visible(this->p2Ready);
		HX_STACK_LINE(108)
		if (((bool(this->p1Ready) && bool(this->p2Ready)))){
			HX_STACK_LINE(110)
			hx::SubEq(this->startTimer,::flixel::FlxG_obj::elapsed);
			HX_STACK_LINE(111)
			if (((this->startTimer <= (int)0))){
				HX_STACK_LINE(113)
				::flixel::FlxG_obj::sound->destroy(true);
				HX_STACK_LINE(114)
				::flixel::FlxG_obj::sound->playMusic(HX_CSTRING("assets/music/loop.wav"),(int)1,true);
				HX_STACK_LINE(115)
				{
					HX_STACK_LINE(115)
					::flixel::FlxState State = ::PlayState_obj::__new(null());		HX_STACK_VAR(State,"State");
					HX_STACK_LINE(115)
					::flixel::FlxG_obj::game->_requestedState = State;
				}
			}
			else{
				HX_STACK_LINE(119)
				int _g = ::Math_obj::ceil(this->startTimer);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(119)
				::String _g1 = ::Std_obj::string(_g);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(119)
				this->timerTxt->set_text(_g1);
			}
		}
	}
return null();
}



MenuState_obj::MenuState_obj()
{
}

void MenuState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MenuState);
	HX_MARK_MEMBER_NAME(p1Ready,"p1Ready");
	HX_MARK_MEMBER_NAME(p2Ready,"p2Ready");
	HX_MARK_MEMBER_NAME(p1ReadyTxt,"p1ReadyTxt");
	HX_MARK_MEMBER_NAME(p2ReadyTxt,"p2ReadyTxt");
	HX_MARK_MEMBER_NAME(timerTxt,"timerTxt");
	HX_MARK_MEMBER_NAME(sanjuTxt,"sanjuTxt");
	HX_MARK_MEMBER_NAME(startTimer,"startTimer");
	HX_MARK_MEMBER_NAME(_sndReady,"_sndReady");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MenuState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(p1Ready,"p1Ready");
	HX_VISIT_MEMBER_NAME(p2Ready,"p2Ready");
	HX_VISIT_MEMBER_NAME(p1ReadyTxt,"p1ReadyTxt");
	HX_VISIT_MEMBER_NAME(p2ReadyTxt,"p2ReadyTxt");
	HX_VISIT_MEMBER_NAME(timerTxt,"timerTxt");
	HX_VISIT_MEMBER_NAME(sanjuTxt,"sanjuTxt");
	HX_VISIT_MEMBER_NAME(startTimer,"startTimer");
	HX_VISIT_MEMBER_NAME(_sndReady,"_sndReady");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic MenuState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"p1Ready") ) { return p1Ready; }
		if (HX_FIELD_EQ(inName,"p2Ready") ) { return p2Ready; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"timerTxt") ) { return timerTxt; }
		if (HX_FIELD_EQ(inName,"sanjuTxt") ) { return sanjuTxt; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_sndReady") ) { return _sndReady; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"p1ReadyTxt") ) { return p1ReadyTxt; }
		if (HX_FIELD_EQ(inName,"p2ReadyTxt") ) { return p2ReadyTxt; }
		if (HX_FIELD_EQ(inName,"startTimer") ) { return startTimer; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MenuState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"p1Ready") ) { p1Ready=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"p2Ready") ) { p2Ready=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"timerTxt") ) { timerTxt=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sanjuTxt") ) { sanjuTxt=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_sndReady") ) { _sndReady=inValue.Cast< ::flixel::system::FlxSound >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"p1ReadyTxt") ) { p1ReadyTxt=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"p2ReadyTxt") ) { p2ReadyTxt=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startTimer") ) { startTimer=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MenuState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("p1Ready"));
	outFields->push(HX_CSTRING("p2Ready"));
	outFields->push(HX_CSTRING("p1ReadyTxt"));
	outFields->push(HX_CSTRING("p2ReadyTxt"));
	outFields->push(HX_CSTRING("timerTxt"));
	outFields->push(HX_CSTRING("sanjuTxt"));
	outFields->push(HX_CSTRING("startTimer"));
	outFields->push(HX_CSTRING("_sndReady"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(MenuState_obj,p1Ready),HX_CSTRING("p1Ready")},
	{hx::fsBool,(int)offsetof(MenuState_obj,p2Ready),HX_CSTRING("p2Ready")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(MenuState_obj,p1ReadyTxt),HX_CSTRING("p1ReadyTxt")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(MenuState_obj,p2ReadyTxt),HX_CSTRING("p2ReadyTxt")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(MenuState_obj,timerTxt),HX_CSTRING("timerTxt")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(MenuState_obj,sanjuTxt),HX_CSTRING("sanjuTxt")},
	{hx::fsFloat,(int)offsetof(MenuState_obj,startTimer),HX_CSTRING("startTimer")},
	{hx::fsObject /*::flixel::system::FlxSound*/ ,(int)offsetof(MenuState_obj,_sndReady),HX_CSTRING("_sndReady")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("p1Ready"),
	HX_CSTRING("p2Ready"),
	HX_CSTRING("p1ReadyTxt"),
	HX_CSTRING("p2ReadyTxt"),
	HX_CSTRING("timerTxt"),
	HX_CSTRING("sanjuTxt"),
	HX_CSTRING("startTimer"),
	HX_CSTRING("_sndReady"),
	HX_CSTRING("create"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MenuState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MenuState_obj::__mClass,"__mClass");
};

#endif

Class MenuState_obj::__mClass;

void MenuState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("MenuState"), hx::TCanCast< MenuState_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void MenuState_obj::__boot()
{
}

