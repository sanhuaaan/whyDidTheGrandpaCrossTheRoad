#include <hxcpp.h>

#ifndef INCLUDED_AttackCollider
#include <AttackCollider.h>
#endif
#ifndef INCLUDED_Car
#include <Car.h>
#endif
#ifndef INCLUDED_Dead
#include <Dead.h>
#endif
#ifndef INCLUDED_Hit
#include <Hit.h>
#endif
#ifndef INCLUDED_PlOne
#include <PlOne.h>
#endif
#ifndef INCLUDED_PlTwo
#include <PlTwo.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
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
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
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
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
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
#ifndef INCLUDED_openfl__legacy_system_System
#include <openfl/_legacy/system/System.h>
#endif

Void PlayState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("PlayState","new",0xf8bf96cf,"PlayState.new","PlayState.hx",20,0xb30d7781)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(35)
	this->closeTimer = (int)4;
	HX_STACK_LINE(34)
	this->respawnTimerP2 = (int)1;
	HX_STACK_LINE(33)
	this->respawnTimerP1 = (int)1;
	HX_STACK_LINE(26)
	this->timer = (int)30;
	HX_STACK_LINE(20)
	super::__construct(MaxSize);
}
;
	return null();
}

//PlayState_obj::~PlayState_obj() { }

Dynamic PlayState_obj::__CreateEmpty() { return  new PlayState_obj; }
hx::ObjectPtr< PlayState_obj > PlayState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< PlayState_obj > result = new PlayState_obj();
	result->__construct(MaxSize);
	return result;}

Dynamic PlayState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlayState_obj > result = new PlayState_obj();
	result->__construct(inArgs[0]);
	return result;}

Void PlayState_obj::create( ){
{
		HX_STACK_FRAME("PlayState","create",0x82220fed,"PlayState.create","PlayState.hx",46,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(48)
		::flixel::FlxSprite background = ::flixel::FlxSprite_obj::__new((int)0,(int)0,null());		HX_STACK_VAR(background,"background");
		HX_STACK_LINE(49)
		background->loadGraphic(HX_CSTRING("assets/images/fondo.png"),null(),null(),null(),null(),null());
		HX_STACK_LINE(50)
		this->add(background);
		HX_STACK_LINE(52)
		::PlOne _g = ::PlOne_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(52)
		this->_playerOne = _g;
		HX_STACK_LINE(53)
		::PlTwo _g1 = ::PlTwo_obj::__new();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(53)
		this->_playerTwo = _g1;
		HX_STACK_LINE(54)
		this->add(this->_playerOne);
		HX_STACK_LINE(55)
		this->add(this->_playerTwo);
		HX_STACK_LINE(57)
		Array< int > _g2 = Array_obj< int >::__new();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(57)
		this->arrayIntervalCalles = _g2;
		HX_STACK_LINE(58)
		{
			HX_STACK_LINE(58)
			int _g3 = (int)1;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(58)
			while((true)){
				HX_STACK_LINE(58)
				if ((!(((_g3 < (int)5))))){
					HX_STACK_LINE(58)
					break;
				}
				HX_STACK_LINE(58)
				int calle = (_g3)++;		HX_STACK_VAR(calle,"calle");
				HX_STACK_LINE(60)
				Float _g31 = ::Math_obj::random();		HX_STACK_VAR(_g31,"_g31");
				HX_STACK_LINE(60)
				Float _g4 = (_g31 * (int)50);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(60)
				this->arrayIntervalCalles[calle] = ::Math_obj::round(_g4);
			}
		}
		HX_STACK_LINE(63)
		this->super::create();
		HX_STACK_LINE(65)
		::flixel::system::FlxSound _g5 = ::flixel::FlxG_obj::sound->load(HX_CSTRING("assets/sounds/start.wav"),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(65)
		this->_sndStart = _g5;
		HX_STACK_LINE(66)
		this->_sndStart->play(true);
		HX_STACK_LINE(68)
		::flixel::system::FlxSound _g6 = ::flixel::FlxG_obj::sound->load(HX_CSTRING("assets/sounds/end.wav"),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(68)
		this->_sndEnd = _g6;
		HX_STACK_LINE(69)
		::flixel::system::FlxSound _g7 = ::flixel::FlxG_obj::sound->load(HX_CSTRING("assets/sounds/attack.wav"),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(69)
		this->_sndAttack = _g7;
		HX_STACK_LINE(70)
		::flixel::system::FlxSound _g8 = ::flixel::FlxG_obj::sound->load(HX_CSTRING("assets/sounds/hit.wav"),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(70)
		this->_sndHit = _g8;
		HX_STACK_LINE(71)
		::flixel::system::FlxSound _g9 = ::flixel::FlxG_obj::sound->load(HX_CSTRING("assets/sounds/death.wav"),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(71)
		this->_sndDeath = _g9;
		HX_STACK_LINE(73)
		::flixel::group::FlxTypedGroup _g10 = ::flixel::group::FlxTypedGroup_obj::__new(null());		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(73)
		this->_grpCoches = _g10;
		HX_STACK_LINE(74)
		this->add(this->_grpCoches);
		HX_STACK_LINE(76)
		::flixel::text::FlxText _g11 = ::flixel::text::FlxText_obj::__new((int)0,(int)0,::flixel::FlxG_obj::width,null(),null(),null());		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(76)
		this->timerText = _g11;
		HX_STACK_LINE(77)
		this->timerText->setFormat(null(),(int)50,(int)-4194560,HX_CSTRING("center"),null(),null(),null());
		HX_STACK_LINE(78)
		{
			HX_STACK_LINE(78)
			::flixel::text::FlxText _this = this->timerText;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(78)
			Float Quality = (int)1;		HX_STACK_VAR(Quality,"Quality");
			HX_STACK_LINE(78)
			_this->set_borderStyle((int)2);
			HX_STACK_LINE(78)
			_this->set_borderColor((int)-16777216);
			HX_STACK_LINE(78)
			_this->set_borderSize((int)2);
			HX_STACK_LINE(78)
			_this->set_borderQuality(Quality);
		}
		HX_STACK_LINE(79)
		this->add(this->timerText);
		HX_STACK_LINE(81)
		::flixel::text::FlxText _g12 = ::flixel::text::FlxText_obj::__new((int)10,(int)5,::flixel::FlxG_obj::width,null(),null(),null());		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(81)
		this->p1Punttext = _g12;
		HX_STACK_LINE(82)
		this->p1Punttext->setFormat(null(),(int)48,(int)-16776961,null(),null(),null(),null());
		HX_STACK_LINE(83)
		{
			HX_STACK_LINE(83)
			::flixel::text::FlxText _this = this->p1Punttext;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(83)
			Float Quality = (int)1;		HX_STACK_VAR(Quality,"Quality");
			HX_STACK_LINE(83)
			_this->set_borderStyle((int)2);
			HX_STACK_LINE(83)
			_this->set_borderColor((int)-1);
			HX_STACK_LINE(83)
			_this->set_borderSize((int)2);
			HX_STACK_LINE(83)
			_this->set_borderQuality(Quality);
		}
		HX_STACK_LINE(84)
		this->add(this->p1Punttext);
		HX_STACK_LINE(86)
		::flixel::text::FlxText _g13 = ::flixel::text::FlxText_obj::__new((int)650,(int)5,::flixel::FlxG_obj::width,null(),null(),null());		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(86)
		this->p2Punttext = _g13;
		HX_STACK_LINE(87)
		this->p2Punttext->setFormat(null(),(int)48,(int)-65536,null(),null(),null(),null());
		HX_STACK_LINE(88)
		{
			HX_STACK_LINE(88)
			::flixel::text::FlxText _this = this->p2Punttext;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(88)
			Float Quality = (int)1;		HX_STACK_VAR(Quality,"Quality");
			HX_STACK_LINE(88)
			_this->set_borderStyle((int)2);
			HX_STACK_LINE(88)
			_this->set_borderColor((int)-1);
			HX_STACK_LINE(88)
			_this->set_borderSize((int)2);
			HX_STACK_LINE(88)
			_this->set_borderQuality(Quality);
		}
		HX_STACK_LINE(89)
		this->add(this->p2Punttext);
		HX_STACK_LINE(91)
		::flixel::text::FlxText _g14 = ::flixel::text::FlxText_obj::__new((int)0,(int)200,::flixel::FlxG_obj::width,HX_CSTRING("TOADDER!!!"),null(),null());		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(91)
		this->toadderTxt = _g14;
		HX_STACK_LINE(92)
		this->toadderTxt->setFormat(null(),(int)50,(int)-8388864,HX_CSTRING("center"),null(),null(),null());
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","PlayState.hx",94,0xb30d7781)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("alpha") , (int)0,false);
					return __result;
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static Dynamic Block( hx::ObjectPtr< ::PlayState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","PlayState.hx",94,0xb30d7781)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("type") , (int)8,false);
					__result->Add(HX_CSTRING("complete") , __this->finishKillToadder_dyn(),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(94)
		::flixel::tweens::FlxTween_obj::tween(this->toadderTxt,_Function_1_1::Block(),(int)1,_Function_1_2::Block(this));
		struct _Function_1_3{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","PlayState.hx",95,0xb30d7781)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("x") , (int)2,false);
					__result->Add(HX_CSTRING("y") , (int)4,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(95)
		::flixel::tweens::FlxTween_obj::tween(this->toadderTxt->scale,_Function_1_3::Block(),(int)1,null());
		struct _Function_1_4{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","PlayState.hx",96,0xb30d7781)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("type") , (int)4,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(96)
		::flixel::tweens::FlxTween_obj::color(this->toadderTxt,.2,(int)-8388864,(int)-256,null(),null(),_Function_1_4::Block());
		HX_STACK_LINE(98)
		this->add(this->toadderTxt);
		HX_STACK_LINE(101)
		::flixel::text::FlxText _g15 = ::flixel::text::FlxText_obj::__new((int)0,(int)200,::flixel::FlxG_obj::width,HX_CSTRING("You both lose"),null(),null());		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(101)
		this->winnerTxt = _g15;
		HX_STACK_LINE(102)
		this->winnerTxt->setFormat(null(),(int)70,(int)-8388864,HX_CSTRING("center"),null(),null(),null());
		HX_STACK_LINE(103)
		{
			HX_STACK_LINE(103)
			::flixel::text::FlxText _this = this->winnerTxt;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(103)
			Float Quality = (int)1;		HX_STACK_VAR(Quality,"Quality");
			HX_STACK_LINE(103)
			_this->set_borderStyle((int)2);
			HX_STACK_LINE(103)
			_this->set_borderColor((int)-16777216);
			HX_STACK_LINE(103)
			_this->set_borderSize((int)3);
			HX_STACK_LINE(103)
			_this->set_borderQuality(Quality);
		}
		struct _Function_1_5{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","PlayState.hx",104,0xb30d7781)
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
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","PlayState.hx",104,0xb30d7781)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("type") , (int)4,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(104)
		::flixel::tweens::FlxTween_obj::tween(this->winnerTxt,_Function_1_5::Block(),.3,_Function_1_6::Block());
	}
return null();
}


Void PlayState_obj::destroy( ){
{
		HX_STACK_FRAME("PlayState","destroy",0x6ec756e9,"PlayState.destroy","PlayState.hx",129,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(130)
		this->super::destroy();
		HX_STACK_LINE(131)
		::flixel::system::FlxSound _g = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_sndStart);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(131)
		this->_sndStart = _g;
		HX_STACK_LINE(132)
		::flixel::system::FlxSound _g1 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_sndEnd);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(132)
		this->_sndEnd = _g1;
		HX_STACK_LINE(133)
		::flixel::system::FlxSound _g2 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_sndAttack);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(133)
		this->_sndAttack = _g2;
		HX_STACK_LINE(134)
		::flixel::system::FlxSound _g3 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_sndHit);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(134)
		this->_sndHit = _g3;
		HX_STACK_LINE(135)
		::flixel::system::FlxSound _g4 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_sndDeath);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(135)
		this->_sndDeath = _g4;
	}
return null();
}


Void PlayState_obj::update( ){
{
		HX_STACK_FRAME("PlayState","update",0x8d182efa,"PlayState.update","PlayState.hx",142,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(143)
		this->super::update();
		HX_STACK_LINE(145)
		::flixel::FlxG_obj::overlap(this->_playerOne,this->_playerTwo,null(),::flixel::FlxObject_obj::separate_dyn());
		HX_STACK_LINE(146)
		::flixel::FlxG_obj::overlap(this->_playerOne,this->_grpCoches,this->playerTouchCar_dyn(),null());
		HX_STACK_LINE(147)
		::flixel::FlxG_obj::overlap(this->_playerTwo,this->_grpCoches,this->playerTouchCar_dyn(),null());
		HX_STACK_LINE(150)
		::String _g = ::Std_obj::string(this->_playerOne->puntos);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(150)
		this->p1Punttext->set_text(_g);
		HX_STACK_LINE(151)
		::String _g1 = ::Std_obj::string(this->_playerTwo->puntos);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(151)
		this->p2Punttext->set_text(_g1);
		HX_STACK_LINE(153)
		{
			HX_STACK_LINE(153)
			int _g2 = (int)1;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(153)
			while((true)){
				HX_STACK_LINE(153)
				if ((!(((_g2 < (int)5))))){
					HX_STACK_LINE(153)
					break;
				}
				HX_STACK_LINE(153)
				int calleSpawn = (_g2)++;		HX_STACK_VAR(calleSpawn,"calleSpawn");
				HX_STACK_LINE(155)
				(this->arrayIntervalCalles[calleSpawn])--;
				HX_STACK_LINE(156)
				if (((this->arrayIntervalCalles->__get(calleSpawn) <= (int)0))){
					HX_STACK_LINE(158)
					::Car _car = ::Car_obj::__new(calleSpawn);		HX_STACK_VAR(_car,"_car");
					HX_STACK_LINE(159)
					this->_grpCoches->add(_car);
					HX_STACK_LINE(160)
					Float _g21 = ::Math_obj::random();		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(160)
					Float _g3 = (_g21 * (int)40);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(160)
					int _g4 = ::Math_obj::round(_g3);		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(160)
					this->arrayIntervalCalles[calleSpawn] = (_g4 + (int)65);
				}
			}
		}
		HX_STACK_LINE(164)
		hx::SubEq(this->timer,::flixel::FlxG_obj::elapsed);
		HX_STACK_LINE(165)
		if (((this->timer <= (int)0))){
			HX_STACK_LINE(167)
			hx::SubEq(this->closeTimer,::flixel::FlxG_obj::elapsed);
			HX_STACK_LINE(168)
			::String _g5 = this->timerText->get_text();		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(168)
			if (((_g5 != HX_CSTRING("TIME OVER!")))){
				HX_STACK_LINE(169)
				this->_sndEnd->play(null());
			}
			HX_STACK_LINE(171)
			this->timerText->set_text(HX_CSTRING("TIME OVER!"));
			HX_STACK_LINE(172)
			this->_playerOne->destroy();
			HX_STACK_LINE(173)
			this->_playerTwo->destroy();
			HX_STACK_LINE(175)
			if (((this->_playerOne->puntos > this->_playerTwo->puntos))){
				HX_STACK_LINE(177)
				this->winnerTxt->set_text(HX_CSTRING("Player 1 wins"));
				HX_STACK_LINE(178)
				this->winnerTxt->setFormat(null(),(int)70,(int)-16776961,HX_CSTRING("center"),null(),null(),null());
				HX_STACK_LINE(179)
				{
					HX_STACK_LINE(179)
					::flixel::text::FlxText _this = this->winnerTxt;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(179)
					Float Quality = (int)1;		HX_STACK_VAR(Quality,"Quality");
					HX_STACK_LINE(179)
					_this->set_borderStyle((int)2);
					HX_STACK_LINE(179)
					_this->set_borderColor((int)-16777216);
					HX_STACK_LINE(179)
					_this->set_borderSize((int)2);
					HX_STACK_LINE(179)
					_this->set_borderQuality(Quality);
				}
			}
			else{
				HX_STACK_LINE(181)
				if (((this->_playerOne->puntos < this->_playerTwo->puntos))){
					HX_STACK_LINE(183)
					this->winnerTxt->set_text(HX_CSTRING("Player 2 wins"));
					HX_STACK_LINE(184)
					this->winnerTxt->setFormat(null(),(int)70,(int)-65536,HX_CSTRING("center"),null(),null(),null());
					HX_STACK_LINE(185)
					{
						HX_STACK_LINE(185)
						::flixel::text::FlxText _this = this->winnerTxt;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(185)
						Float Quality = (int)1;		HX_STACK_VAR(Quality,"Quality");
						HX_STACK_LINE(185)
						_this->set_borderStyle((int)2);
						HX_STACK_LINE(185)
						_this->set_borderColor((int)-16777216);
						HX_STACK_LINE(185)
						_this->set_borderSize((int)2);
						HX_STACK_LINE(185)
						_this->set_borderQuality(Quality);
					}
				}
			}
			HX_STACK_LINE(188)
			this->add(this->winnerTxt);
			HX_STACK_LINE(190)
			if (((this->closeTimer <= (int)0))){
				HX_STACK_LINE(191)
				::openfl::_legacy::system::System_obj::exit((int)0);
			}
		}
		else{
			HX_STACK_LINE(195)
			if (((this->timer <= (int)5))){
				HX_STACK_LINE(197)
				this->timerText->setFormat(null(),(int)50,(int)-256,HX_CSTRING("center"),null(),null(),null());
				HX_STACK_LINE(198)
				{
					HX_STACK_LINE(198)
					::flixel::text::FlxText _this = this->timerText;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(198)
					Float Quality = (int)1;		HX_STACK_VAR(Quality,"Quality");
					HX_STACK_LINE(198)
					_this->set_borderStyle((int)2);
					HX_STACK_LINE(198)
					_this->set_borderColor((int)-16777216);
					HX_STACK_LINE(198)
					_this->set_borderSize((int)2);
					HX_STACK_LINE(198)
					_this->set_borderQuality(Quality);
				}
			}
			HX_STACK_LINE(200)
			int _g6 = ::Math_obj::ceil(this->timer);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(200)
			::String _g7 = ::Std_obj::string(_g6);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(200)
			this->timerText->set_text(_g7);
		}
		HX_STACK_LINE(204)
		::flixel::FlxSprite _attack = null();		HX_STACK_VAR(_attack,"_attack");
		HX_STACK_LINE(206)
		if (((bool(this->_playerOne->_attack) && bool(!(this->_playerOne->knocked))))){
			HX_STACK_LINE(208)
			this->_sndAttack->play(true);
			HX_STACK_LINE(209)
			{
				HX_STACK_LINE(209)
				int _g2 = this->_playerOne->facing;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(209)
				switch( (int)(_g2)){
					case (int)1: {
						HX_STACK_LINE(214)
						::AttackCollider _g8 = ::AttackCollider_obj::__new((this->_playerOne->x - (int)26),this->_playerOne->y);		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(214)
						_attack = _g8;
						HX_STACK_LINE(215)
						{
							HX_STACK_LINE(215)
							::flixel::util::FlxPoint _g11 = _attack->scale;		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(215)
							_g11->set_x((_g11->x * (int)-1));
						}
					}
					;break;
					case (int)16: {
						HX_STACK_LINE(217)
						::AttackCollider _g9 = ::AttackCollider_obj::__new((this->_playerOne->x + (int)39),this->_playerOne->y);		HX_STACK_VAR(_g9,"_g9");
						HX_STACK_LINE(217)
						_attack = _g9;
					}
					;break;
				}
			}
			HX_STACK_LINE(219)
			this->add(_attack);
			HX_STACK_LINE(220)
			::flixel::FlxG_obj::overlap(this->_playerTwo,_attack,this->playerTwoAttacked_dyn(),null());
		}
		HX_STACK_LINE(224)
		if (((bool(this->_playerTwo->_attack) && bool(!(this->_playerTwo->knocked))))){
			HX_STACK_LINE(226)
			this->_sndAttack->play(true);
			HX_STACK_LINE(227)
			{
				HX_STACK_LINE(227)
				int _g2 = this->_playerTwo->facing;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(227)
				switch( (int)(_g2)){
					case (int)1: {
						HX_STACK_LINE(230)
						::AttackCollider _g10 = ::AttackCollider_obj::__new((this->_playerTwo->x - (int)26),this->_playerTwo->y);		HX_STACK_VAR(_g10,"_g10");
						HX_STACK_LINE(230)
						_attack = _g10;
						HX_STACK_LINE(231)
						{
							HX_STACK_LINE(231)
							::flixel::util::FlxPoint _g11 = _attack->scale;		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(231)
							_g11->set_x((_g11->x * (int)-1));
						}
					}
					;break;
					case (int)16: {
						HX_STACK_LINE(233)
						::AttackCollider _g11 = ::AttackCollider_obj::__new((this->_playerTwo->x + (int)39),this->_playerTwo->y);		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(233)
						_attack = _g11;
					}
					;break;
				}
			}
			HX_STACK_LINE(235)
			this->add(_attack);
			HX_STACK_LINE(236)
			::flixel::FlxG_obj::overlap(this->_playerOne,_attack,this->playerOneAttacked_dyn(),null());
		}
		HX_STACK_LINE(240)
		if (((this->timer > (int)0))){
			HX_STACK_LINE(241)
			this->respawnPlayer();
		}
	}
return null();
}


Void PlayState_obj::playerTwoAttacked( ::Player P,::flixel::FlxObject A){
{
		HX_STACK_FRAME("PlayState","playerTwoAttacked",0x879a0ca1,"PlayState.playerTwoAttacked","PlayState.hx",247,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_ARG(P,"P")
		HX_STACK_ARG(A,"A")
		HX_STACK_LINE(248)
		this->_sndHit->play(true);
		HX_STACK_LINE(249)
		if ((!(this->_playerTwo->knocked))){
			HX_STACK_LINE(251)
			::Hit hit = ::Hit_obj::__new(this->_playerTwo->x,this->_playerTwo->y);		HX_STACK_VAR(hit,"hit");
			HX_STACK_LINE(252)
			this->add(hit);
			HX_STACK_LINE(253)
			{
				HX_STACK_LINE(253)
				int _g = this->_playerOne->facing;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(253)
				switch( (int)(_g)){
					case (int)256: {
						HX_STACK_LINE(254)
						this->_playerTwo->velocity->set_y((int)-1000);
					}
					;break;
					case (int)4096: {
						HX_STACK_LINE(255)
						this->_playerTwo->velocity->set_y((int)1000);
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(256)
						this->_playerTwo->velocity->set_x((int)-1000);
					}
					;break;
					case (int)16: {
						HX_STACK_LINE(257)
						this->_playerTwo->velocity->set_x((int)1000);
					}
					;break;
				}
			}
			HX_STACK_LINE(259)
			this->_playerTwo->knocked = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PlayState_obj,playerTwoAttacked,(void))

Void PlayState_obj::playerOneAttacked( ::Player P,::flixel::FlxObject A){
{
		HX_STACK_FRAME("PlayState","playerOneAttacked",0x0335a37b,"PlayState.playerOneAttacked","PlayState.hx",265,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_ARG(P,"P")
		HX_STACK_ARG(A,"A")
		HX_STACK_LINE(266)
		this->_sndHit->play(true);
		HX_STACK_LINE(267)
		if ((!(this->_playerOne->knocked))){
			HX_STACK_LINE(269)
			::Hit hit = ::Hit_obj::__new(this->_playerOne->x,this->_playerOne->y);		HX_STACK_VAR(hit,"hit");
			HX_STACK_LINE(270)
			this->add(hit);
			HX_STACK_LINE(271)
			{
				HX_STACK_LINE(271)
				int _g = this->_playerTwo->facing;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(271)
				switch( (int)(_g)){
					case (int)256: {
						HX_STACK_LINE(272)
						this->_playerOne->velocity->set_y((int)-1000);
					}
					;break;
					case (int)4096: {
						HX_STACK_LINE(273)
						this->_playerOne->velocity->set_y((int)1000);
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(274)
						this->_playerOne->velocity->set_x((int)-1000);
					}
					;break;
					case (int)16: {
						HX_STACK_LINE(275)
						this->_playerOne->velocity->set_x((int)1000);
					}
					;break;
				}
			}
		}
		HX_STACK_LINE(278)
		this->_playerOne->knocked = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PlayState_obj,playerOneAttacked,(void))

Void PlayState_obj::playerTouchCar( ::Player P,::Car C){
{
		HX_STACK_FRAME("PlayState","playerTouchCar",0x7c8d2807,"PlayState.playerTouchCar","PlayState.hx",282,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_ARG(P,"P")
		HX_STACK_ARG(C,"C")
		HX_STACK_LINE(283)
		this->_sndDeath->play(true);
		HX_STACK_LINE(284)
		P->kill();
		HX_STACK_LINE(285)
		if ((P->knocked)){
			HX_STACK_LINE(287)
			P->velocity->set_x((int)0);
			HX_STACK_LINE(288)
			P->velocity->set_y((int)0);
			HX_STACK_LINE(289)
			P->knocked = false;
		}
		HX_STACK_LINE(292)
		::Dead skull = ::Dead_obj::__new(P->x,P->y);		HX_STACK_VAR(skull,"skull");
		HX_STACK_LINE(293)
		this->add(skull);
		HX_STACK_LINE(294)
		P->setPosition(P->spawnX,P->spawnY);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PlayState_obj,playerTouchCar,(void))

Void PlayState_obj::respawnPlayer( ){
{
		HX_STACK_FRAME("PlayState","respawnPlayer",0x86bec658,"PlayState.respawnPlayer","PlayState.hx",298,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(299)
		if ((!(this->_playerOne->alive))){
			HX_STACK_LINE(301)
			hx::SubEq(this->respawnTimerP1,::flixel::FlxG_obj::elapsed);
			HX_STACK_LINE(302)
			if (((this->respawnTimerP1 <= (int)0))){
				HX_STACK_LINE(303)
				this->respawnTimerP1 = (int)1;
				HX_STACK_LINE(304)
				this->_playerOne->revive();
			}
		}
		HX_STACK_LINE(307)
		if ((!(this->_playerTwo->alive))){
			HX_STACK_LINE(309)
			hx::SubEq(this->respawnTimerP2,::flixel::FlxG_obj::elapsed);
			HX_STACK_LINE(310)
			if (((this->respawnTimerP2 <= (int)0))){
				HX_STACK_LINE(311)
				this->respawnTimerP2 = (int)1;
				HX_STACK_LINE(312)
				this->_playerTwo->revive();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,respawnPlayer,(void))

Void PlayState_obj::finishKillToadder( ::flixel::tweens::FlxTween _){
{
		HX_STACK_FRAME("PlayState","finishKillToadder",0x9e6eb691,"PlayState.finishKillToadder","PlayState.hx",320,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(321)
		this->toadderTxt->kill();
		HX_STACK_LINE(322)
		this->toadderTxt->set_exists(false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PlayState_obj,finishKillToadder,(void))


PlayState_obj::PlayState_obj()
{
}

void PlayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayState);
	HX_MARK_MEMBER_NAME(_playerOne,"_playerOne");
	HX_MARK_MEMBER_NAME(_playerTwo,"_playerTwo");
	HX_MARK_MEMBER_NAME(arrayIntervalCalles,"arrayIntervalCalles");
	HX_MARK_MEMBER_NAME(_car,"_car");
	HX_MARK_MEMBER_NAME(timer,"timer");
	HX_MARK_MEMBER_NAME(timerText,"timerText");
	HX_MARK_MEMBER_NAME(p1Punttext,"p1Punttext");
	HX_MARK_MEMBER_NAME(p2Punttext,"p2Punttext");
	HX_MARK_MEMBER_NAME(toadderTxt,"toadderTxt");
	HX_MARK_MEMBER_NAME(winnerTxt,"winnerTxt");
	HX_MARK_MEMBER_NAME(_grpCoches,"_grpCoches");
	HX_MARK_MEMBER_NAME(respawnTimerP1,"respawnTimerP1");
	HX_MARK_MEMBER_NAME(respawnTimerP2,"respawnTimerP2");
	HX_MARK_MEMBER_NAME(closeTimer,"closeTimer");
	HX_MARK_MEMBER_NAME(_sndStart,"_sndStart");
	HX_MARK_MEMBER_NAME(_sndEnd,"_sndEnd");
	HX_MARK_MEMBER_NAME(_sndAttack,"_sndAttack");
	HX_MARK_MEMBER_NAME(_sndHit,"_sndHit");
	HX_MARK_MEMBER_NAME(_sndDeath,"_sndDeath");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_playerOne,"_playerOne");
	HX_VISIT_MEMBER_NAME(_playerTwo,"_playerTwo");
	HX_VISIT_MEMBER_NAME(arrayIntervalCalles,"arrayIntervalCalles");
	HX_VISIT_MEMBER_NAME(_car,"_car");
	HX_VISIT_MEMBER_NAME(timer,"timer");
	HX_VISIT_MEMBER_NAME(timerText,"timerText");
	HX_VISIT_MEMBER_NAME(p1Punttext,"p1Punttext");
	HX_VISIT_MEMBER_NAME(p2Punttext,"p2Punttext");
	HX_VISIT_MEMBER_NAME(toadderTxt,"toadderTxt");
	HX_VISIT_MEMBER_NAME(winnerTxt,"winnerTxt");
	HX_VISIT_MEMBER_NAME(_grpCoches,"_grpCoches");
	HX_VISIT_MEMBER_NAME(respawnTimerP1,"respawnTimerP1");
	HX_VISIT_MEMBER_NAME(respawnTimerP2,"respawnTimerP2");
	HX_VISIT_MEMBER_NAME(closeTimer,"closeTimer");
	HX_VISIT_MEMBER_NAME(_sndStart,"_sndStart");
	HX_VISIT_MEMBER_NAME(_sndEnd,"_sndEnd");
	HX_VISIT_MEMBER_NAME(_sndAttack,"_sndAttack");
	HX_VISIT_MEMBER_NAME(_sndHit,"_sndHit");
	HX_VISIT_MEMBER_NAME(_sndDeath,"_sndDeath");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PlayState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_car") ) { return _car; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { return timer; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_sndEnd") ) { return _sndEnd; }
		if (HX_FIELD_EQ(inName,"_sndHit") ) { return _sndHit; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"timerText") ) { return timerText; }
		if (HX_FIELD_EQ(inName,"winnerTxt") ) { return winnerTxt; }
		if (HX_FIELD_EQ(inName,"_sndStart") ) { return _sndStart; }
		if (HX_FIELD_EQ(inName,"_sndDeath") ) { return _sndDeath; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_playerOne") ) { return _playerOne; }
		if (HX_FIELD_EQ(inName,"_playerTwo") ) { return _playerTwo; }
		if (HX_FIELD_EQ(inName,"p1Punttext") ) { return p1Punttext; }
		if (HX_FIELD_EQ(inName,"p2Punttext") ) { return p2Punttext; }
		if (HX_FIELD_EQ(inName,"toadderTxt") ) { return toadderTxt; }
		if (HX_FIELD_EQ(inName,"_grpCoches") ) { return _grpCoches; }
		if (HX_FIELD_EQ(inName,"closeTimer") ) { return closeTimer; }
		if (HX_FIELD_EQ(inName,"_sndAttack") ) { return _sndAttack; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"respawnPlayer") ) { return respawnPlayer_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"respawnTimerP1") ) { return respawnTimerP1; }
		if (HX_FIELD_EQ(inName,"respawnTimerP2") ) { return respawnTimerP2; }
		if (HX_FIELD_EQ(inName,"playerTouchCar") ) { return playerTouchCar_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"playerTwoAttacked") ) { return playerTwoAttacked_dyn(); }
		if (HX_FIELD_EQ(inName,"playerOneAttacked") ) { return playerOneAttacked_dyn(); }
		if (HX_FIELD_EQ(inName,"finishKillToadder") ) { return finishKillToadder_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"arrayIntervalCalles") ) { return arrayIntervalCalles; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlayState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_car") ) { _car=inValue.Cast< ::Car >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { timer=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_sndEnd") ) { _sndEnd=inValue.Cast< ::flixel::system::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sndHit") ) { _sndHit=inValue.Cast< ::flixel::system::FlxSound >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"timerText") ) { timerText=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"winnerTxt") ) { winnerTxt=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sndStart") ) { _sndStart=inValue.Cast< ::flixel::system::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sndDeath") ) { _sndDeath=inValue.Cast< ::flixel::system::FlxSound >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_playerOne") ) { _playerOne=inValue.Cast< ::PlOne >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_playerTwo") ) { _playerTwo=inValue.Cast< ::PlTwo >(); return inValue; }
		if (HX_FIELD_EQ(inName,"p1Punttext") ) { p1Punttext=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"p2Punttext") ) { p2Punttext=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"toadderTxt") ) { toadderTxt=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_grpCoches") ) { _grpCoches=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"closeTimer") ) { closeTimer=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sndAttack") ) { _sndAttack=inValue.Cast< ::flixel::system::FlxSound >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"respawnTimerP1") ) { respawnTimerP1=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"respawnTimerP2") ) { respawnTimerP2=inValue.Cast< Float >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"arrayIntervalCalles") ) { arrayIntervalCalles=inValue.Cast< Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_playerOne"));
	outFields->push(HX_CSTRING("_playerTwo"));
	outFields->push(HX_CSTRING("arrayIntervalCalles"));
	outFields->push(HX_CSTRING("_car"));
	outFields->push(HX_CSTRING("timer"));
	outFields->push(HX_CSTRING("timerText"));
	outFields->push(HX_CSTRING("p1Punttext"));
	outFields->push(HX_CSTRING("p2Punttext"));
	outFields->push(HX_CSTRING("toadderTxt"));
	outFields->push(HX_CSTRING("winnerTxt"));
	outFields->push(HX_CSTRING("_grpCoches"));
	outFields->push(HX_CSTRING("respawnTimerP1"));
	outFields->push(HX_CSTRING("respawnTimerP2"));
	outFields->push(HX_CSTRING("closeTimer"));
	outFields->push(HX_CSTRING("_sndStart"));
	outFields->push(HX_CSTRING("_sndEnd"));
	outFields->push(HX_CSTRING("_sndAttack"));
	outFields->push(HX_CSTRING("_sndHit"));
	outFields->push(HX_CSTRING("_sndDeath"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::PlOne*/ ,(int)offsetof(PlayState_obj,_playerOne),HX_CSTRING("_playerOne")},
	{hx::fsObject /*::PlTwo*/ ,(int)offsetof(PlayState_obj,_playerTwo),HX_CSTRING("_playerTwo")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(PlayState_obj,arrayIntervalCalles),HX_CSTRING("arrayIntervalCalles")},
	{hx::fsObject /*::Car*/ ,(int)offsetof(PlayState_obj,_car),HX_CSTRING("_car")},
	{hx::fsFloat,(int)offsetof(PlayState_obj,timer),HX_CSTRING("timer")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(PlayState_obj,timerText),HX_CSTRING("timerText")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(PlayState_obj,p1Punttext),HX_CSTRING("p1Punttext")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(PlayState_obj,p2Punttext),HX_CSTRING("p2Punttext")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(PlayState_obj,toadderTxt),HX_CSTRING("toadderTxt")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(PlayState_obj,winnerTxt),HX_CSTRING("winnerTxt")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(PlayState_obj,_grpCoches),HX_CSTRING("_grpCoches")},
	{hx::fsFloat,(int)offsetof(PlayState_obj,respawnTimerP1),HX_CSTRING("respawnTimerP1")},
	{hx::fsFloat,(int)offsetof(PlayState_obj,respawnTimerP2),HX_CSTRING("respawnTimerP2")},
	{hx::fsFloat,(int)offsetof(PlayState_obj,closeTimer),HX_CSTRING("closeTimer")},
	{hx::fsObject /*::flixel::system::FlxSound*/ ,(int)offsetof(PlayState_obj,_sndStart),HX_CSTRING("_sndStart")},
	{hx::fsObject /*::flixel::system::FlxSound*/ ,(int)offsetof(PlayState_obj,_sndEnd),HX_CSTRING("_sndEnd")},
	{hx::fsObject /*::flixel::system::FlxSound*/ ,(int)offsetof(PlayState_obj,_sndAttack),HX_CSTRING("_sndAttack")},
	{hx::fsObject /*::flixel::system::FlxSound*/ ,(int)offsetof(PlayState_obj,_sndHit),HX_CSTRING("_sndHit")},
	{hx::fsObject /*::flixel::system::FlxSound*/ ,(int)offsetof(PlayState_obj,_sndDeath),HX_CSTRING("_sndDeath")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_playerOne"),
	HX_CSTRING("_playerTwo"),
	HX_CSTRING("arrayIntervalCalles"),
	HX_CSTRING("_car"),
	HX_CSTRING("timer"),
	HX_CSTRING("timerText"),
	HX_CSTRING("p1Punttext"),
	HX_CSTRING("p2Punttext"),
	HX_CSTRING("toadderTxt"),
	HX_CSTRING("winnerTxt"),
	HX_CSTRING("_grpCoches"),
	HX_CSTRING("respawnTimerP1"),
	HX_CSTRING("respawnTimerP2"),
	HX_CSTRING("closeTimer"),
	HX_CSTRING("_sndStart"),
	HX_CSTRING("_sndEnd"),
	HX_CSTRING("_sndAttack"),
	HX_CSTRING("_sndHit"),
	HX_CSTRING("_sndDeath"),
	HX_CSTRING("create"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	HX_CSTRING("playerTwoAttacked"),
	HX_CSTRING("playerOneAttacked"),
	HX_CSTRING("playerTouchCar"),
	HX_CSTRING("respawnPlayer"),
	HX_CSTRING("finishKillToadder"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

#endif

Class PlayState_obj::__mClass;

void PlayState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("PlayState"), hx::TCanCast< PlayState_obj> ,sStaticFields,sMemberFields,
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

void PlayState_obj::__boot()
{
}

