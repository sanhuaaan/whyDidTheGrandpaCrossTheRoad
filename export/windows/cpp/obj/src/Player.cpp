#include <hxcpp.h>

#ifndef INCLUDED_Player
#include <Player.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
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
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool
#include <flixel/util/FlxPool.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif

Void Player_obj::__construct()
{
HX_STACK_FRAME("Player","new",0x8d5554f3,"Player.new","Player.hx",11,0xa27fc9dd)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(25)
	this->puntos = (int)0;
	HX_STACK_LINE(24)
	this->knockedTimer = 0.5;
	HX_STACK_LINE(23)
	this->knocked = false;
	HX_STACK_LINE(22)
	this->attackTimer = (int)0;
	HX_STACK_LINE(19)
	this->atacando = false;
	HX_STACK_LINE(18)
	this->_attack = false;
	HX_STACK_LINE(17)
	this->_right = false;
	HX_STACK_LINE(16)
	this->_left = false;
	HX_STACK_LINE(15)
	this->_down = false;
	HX_STACK_LINE(14)
	this->_up = false;
	HX_STACK_LINE(13)
	this->speed = (int)300;
	HX_STACK_LINE(35)
	super::__construct(this->spawnX,this->spawnY,null());
	HX_STACK_LINE(36)
	Float _g = this->drag->set_y((int)4000);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(36)
	this->drag->set_x(_g);
	HX_STACK_LINE(37)
	this->loadGraphic(HX_CSTRING("assets/images/playersx39.png"),true,(int)39,(int)39,null(),null());
	HX_STACK_LINE(38)
	::flixel::system::FlxSound _g1 = ::flixel::FlxG_obj::sound->load(HX_CSTRING("assets/sounds/point.wav"),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(38)
	this->_sndPoint = _g1;
}
;
	return null();
}

//Player_obj::~Player_obj() { }

Dynamic Player_obj::__CreateEmpty() { return  new Player_obj; }
hx::ObjectPtr< Player_obj > Player_obj::__new()
{  hx::ObjectPtr< Player_obj > result = new Player_obj();
	result->__construct();
	return result;}

Dynamic Player_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Player_obj > result = new Player_obj();
	result->__construct();
	return result;}

Void Player_obj::update( ){
{
		HX_STACK_FRAME("Player","update",0xf1f8df56,"Player.update","Player.hx",44,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(45)
		this->puntua();
		HX_STACK_LINE(47)
		if ((!(this->knocked))){
			HX_STACK_LINE(48)
			this->movement();
		}
		else{
			HX_STACK_LINE(51)
			this->animation->play(HX_CSTRING("knocked"),null(),null());
			HX_STACK_LINE(52)
			hx::SubEq(this->knockedTimer,::flixel::FlxG_obj::elapsed);
			HX_STACK_LINE(53)
			if (((this->knockedTimer <= (int)0))){
				HX_STACK_LINE(54)
				this->knockedTimer = 0.5;
				HX_STACK_LINE(55)
				this->knocked = false;
			}
		}
		HX_STACK_LINE(60)
		if (((this->x < (int)0))){
			HX_STACK_LINE(61)
			this->set_x((int)0);
		}
		HX_STACK_LINE(62)
		Float _g = this->get_width();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(62)
		Float _g1 = ((int)720 - _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(62)
		if (((this->x > _g1))){
			HX_STACK_LINE(63)
			Float _g2 = this->get_width();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(63)
			Float _g3 = ((int)720 - _g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(63)
			this->set_x(_g3);
		}
		HX_STACK_LINE(64)
		if (((this->y < (int)0))){
			HX_STACK_LINE(65)
			this->set_y((int)0);
		}
		HX_STACK_LINE(66)
		Float _g4 = this->get_height();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(66)
		Float _g5 = ((int)480 - _g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(66)
		if (((this->y > _g5))){
			HX_STACK_LINE(67)
			Float _g6 = this->get_height();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(67)
			Float _g7 = ((int)480 - _g6);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(67)
			this->set_y(_g7);
		}
		HX_STACK_LINE(70)
		this->super::update();
	}
return null();
}


Void Player_obj::movement( ){
{
		HX_STACK_FRAME("Player","movement",0x91ad8bbc,"Player.movement","Player.hx",74,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(75)
		if ((this->_attack)){
			HX_STACK_LINE(76)
			this->attackTimer = 0.25;
			HX_STACK_LINE(77)
			this->atacando = true;
		}
		HX_STACK_LINE(80)
		hx::SubEq(this->attackTimer,::flixel::FlxG_obj::elapsed);
		HX_STACK_LINE(81)
		if (((this->attackTimer <= (int)0))){
			HX_STACK_LINE(82)
			this->atacando = false;
		}
		HX_STACK_LINE(85)
		if (((bool(this->_up) && bool(this->_down)))){
			HX_STACK_LINE(86)
			bool _g = this->_down = false;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(86)
			this->_up = _g;
		}
		HX_STACK_LINE(87)
		if (((bool(this->_left) && bool(this->_right)))){
			HX_STACK_LINE(88)
			bool _g1 = this->_right = false;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(88)
			this->_left = _g1;
		}
		HX_STACK_LINE(91)
		if (((bool(((bool((bool((bool(this->_up) || bool(this->_down))) || bool(this->_left))) || bool(this->_right)))) && bool(!(this->atacando))))){
			HX_STACK_LINE(93)
			Float mA = (int)0;		HX_STACK_VAR(mA,"mA");
			HX_STACK_LINE(94)
			if ((this->_left)){
				HX_STACK_LINE(96)
				mA = (int)180;
				HX_STACK_LINE(97)
				if ((this->_up)){
					HX_STACK_LINE(98)
					hx::AddEq(mA,(int)45);
				}
				else{
					HX_STACK_LINE(99)
					if ((this->_down)){
						HX_STACK_LINE(100)
						hx::SubEq(mA,(int)45);
					}
				}
				HX_STACK_LINE(101)
				this->set_facing((int)1);
			}
			else{
				HX_STACK_LINE(103)
				if ((this->_right)){
					HX_STACK_LINE(105)
					mA = (int)0;
					HX_STACK_LINE(106)
					if ((this->_up)){
						HX_STACK_LINE(107)
						hx::SubEq(mA,(int)45);
					}
					else{
						HX_STACK_LINE(108)
						if ((this->_down)){
							HX_STACK_LINE(109)
							hx::AddEq(mA,(int)45);
						}
					}
					HX_STACK_LINE(110)
					this->set_facing((int)16);
				}
				else{
					HX_STACK_LINE(112)
					if ((this->_up)){
						HX_STACK_LINE(114)
						mA = (int)-90;
					}
					else{
						HX_STACK_LINE(117)
						if ((this->_down)){
							HX_STACK_LINE(119)
							mA = (int)90;
						}
					}
				}
			}
			HX_STACK_LINE(123)
			{
				HX_STACK_LINE(123)
				::flixel::util::FlxPoint point = this->velocity;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(123)
				Float sin = (int)0;		HX_STACK_VAR(sin,"sin");
				HX_STACK_LINE(123)
				Float cos = (int)0;		HX_STACK_VAR(cos,"cos");
				HX_STACK_LINE(123)
				Float radians = (mA * -(((Float(::Math_obj::PI) / Float((int)180)))));		HX_STACK_VAR(radians,"radians");
				HX_STACK_LINE(123)
				while((true)){
					HX_STACK_LINE(123)
					if ((!(((radians < -(::Math_obj::PI)))))){
						HX_STACK_LINE(123)
						break;
					}
					HX_STACK_LINE(123)
					hx::AddEq(radians,(::Math_obj::PI * (int)2));
				}
				HX_STACK_LINE(123)
				while((true)){
					HX_STACK_LINE(123)
					if ((!(((radians > ::Math_obj::PI))))){
						HX_STACK_LINE(123)
						break;
					}
					HX_STACK_LINE(123)
					radians = (radians - (::Math_obj::PI * (int)2));
				}
				HX_STACK_LINE(123)
				if (((radians < (int)0))){
					HX_STACK_LINE(123)
					sin = ((1.27323954 * radians) + ((.405284735 * radians) * radians));
					HX_STACK_LINE(123)
					if (((sin < (int)0))){
						HX_STACK_LINE(123)
						sin = ((.225 * (((sin * -(sin)) - sin))) + sin);
					}
					else{
						HX_STACK_LINE(123)
						sin = ((.225 * (((sin * sin) - sin))) + sin);
					}
				}
				else{
					HX_STACK_LINE(123)
					sin = ((1.27323954 * radians) - ((0.405284735 * radians) * radians));
					HX_STACK_LINE(123)
					if (((sin < (int)0))){
						HX_STACK_LINE(123)
						sin = ((.225 * (((sin * -(sin)) - sin))) + sin);
					}
					else{
						HX_STACK_LINE(123)
						sin = ((.225 * (((sin * sin) - sin))) + sin);
					}
				}
				HX_STACK_LINE(123)
				hx::AddEq(radians,(Float(::Math_obj::PI) / Float((int)2)));
				HX_STACK_LINE(123)
				if (((radians > ::Math_obj::PI))){
					HX_STACK_LINE(123)
					radians = (radians - (::Math_obj::PI * (int)2));
				}
				HX_STACK_LINE(123)
				if (((radians < (int)0))){
					HX_STACK_LINE(123)
					cos = ((1.27323954 * radians) + ((0.405284735 * radians) * radians));
					HX_STACK_LINE(123)
					if (((cos < (int)0))){
						HX_STACK_LINE(123)
						cos = ((.225 * (((cos * -(cos)) - cos))) + cos);
					}
					else{
						HX_STACK_LINE(123)
						cos = ((.225 * (((cos * cos) - cos))) + cos);
					}
				}
				else{
					HX_STACK_LINE(123)
					cos = ((1.27323954 * radians) - ((0.405284735 * radians) * radians));
					HX_STACK_LINE(123)
					if (((cos < (int)0))){
						HX_STACK_LINE(123)
						cos = ((.225 * (((cos * -(cos)) - cos))) + cos);
					}
					else{
						HX_STACK_LINE(123)
						cos = ((.225 * (((cos * cos) - cos))) + cos);
					}
				}
				HX_STACK_LINE(123)
				Float dx = this->speed;		HX_STACK_VAR(dx,"dx");
				HX_STACK_LINE(123)
				Float dy = (int)0;		HX_STACK_VAR(dy,"dy");
				HX_STACK_LINE(123)
				if (((point == null()))){
					HX_STACK_LINE(123)
					::flixel::util::FlxPoint _g2;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(123)
					{
						HX_STACK_LINE(123)
						Float X = (int)0;		HX_STACK_VAR(X,"X");
						HX_STACK_LINE(123)
						Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
						HX_STACK_LINE(123)
						::flixel::util::FlxPoint point1 = ::flixel::util::FlxPoint_obj::_pool->get()->__Field(HX_CSTRING("set"),true)(X,Y);		HX_STACK_VAR(point1,"point1");
						HX_STACK_LINE(123)
						point1->_inPool = false;
						HX_STACK_LINE(123)
						_g2 = point1;
					}
					HX_STACK_LINE(123)
					point = _g2;
				}
				HX_STACK_LINE(123)
				point->set_x(((cos * dx) - (sin * dy)));
				HX_STACK_LINE(123)
				point->set_y((((int)0 - (sin * dx)) - (cos * dy)));
				HX_STACK_LINE(123)
				point;
			}
		}
		HX_STACK_LINE(127)
		if (((bool((bool(((bool((this->velocity->x != (int)0)) || bool((this->velocity->y != (int)0))))) && bool(!(this->atacando)))) && bool(!(this->knocked))))){
			HX_STACK_LINE(129)
			this->animation->play(HX_CSTRING("walk"),null(),null());
		}
		HX_STACK_LINE(133)
		if ((this->atacando)){
			HX_STACK_LINE(134)
			this->animation->play(HX_CSTRING("attack"),null(),null());
		}
		HX_STACK_LINE(136)
		if (((bool((bool((bool((this->velocity->x == (int)0)) && bool((this->velocity->y == (int)0)))) && bool(!(this->atacando)))) && bool(!(this->knocked))))){
			HX_STACK_LINE(137)
			this->animation->play(HX_CSTRING("idle"),null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,movement,(void))

Void Player_obj::puntua( ){
{
		HX_STACK_FRAME("Player","puntua",0xd9db85e4,"Player.puntua","Player.hx",142,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(143)
		if (((bool((this->x > (int)660)) && bool((this->destino == (int)1))))){
			HX_STACK_LINE(145)
			this->spawnX = (int)661;
			HX_STACK_LINE(146)
			(this->puntos)++;
			HX_STACK_LINE(147)
			this->_sndPoint->play(null());
			HX_STACK_LINE(148)
			this->destino = (int)0;
		}
		HX_STACK_LINE(150)
		if (((bool((this->x < (int)20)) && bool((this->destino == (int)0))))){
			HX_STACK_LINE(152)
			this->set_facing((int)1);
			HX_STACK_LINE(153)
			this->spawnX = (int)20;
			HX_STACK_LINE(154)
			(this->puntos)++;
			HX_STACK_LINE(155)
			this->_sndPoint->play(null());
			HX_STACK_LINE(156)
			this->destino = (int)1;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,puntua,(void))

Void Player_obj::destroy( ){
{
		HX_STACK_FRAME("Player","destroy",0x4e80f70d,"Player.destroy","Player.hx",166,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(167)
		this->super::destroy();
		HX_STACK_LINE(168)
		::flixel::system::FlxSound _g = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_sndPoint);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(168)
		this->_sndPoint = _g;
	}
return null();
}



Player_obj::Player_obj()
{
}

void Player_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Player);
	HX_MARK_MEMBER_NAME(speed,"speed");
	HX_MARK_MEMBER_NAME(_up,"_up");
	HX_MARK_MEMBER_NAME(_down,"_down");
	HX_MARK_MEMBER_NAME(_left,"_left");
	HX_MARK_MEMBER_NAME(_right,"_right");
	HX_MARK_MEMBER_NAME(_attack,"_attack");
	HX_MARK_MEMBER_NAME(atacando,"atacando");
	HX_MARK_MEMBER_NAME(spawnX,"spawnX");
	HX_MARK_MEMBER_NAME(spawnY,"spawnY");
	HX_MARK_MEMBER_NAME(attackTimer,"attackTimer");
	HX_MARK_MEMBER_NAME(knocked,"knocked");
	HX_MARK_MEMBER_NAME(knockedTimer,"knockedTimer");
	HX_MARK_MEMBER_NAME(puntos,"puntos");
	HX_MARK_MEMBER_NAME(destino,"destino");
	HX_MARK_MEMBER_NAME(_sndPoint,"_sndPoint");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Player_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(speed,"speed");
	HX_VISIT_MEMBER_NAME(_up,"_up");
	HX_VISIT_MEMBER_NAME(_down,"_down");
	HX_VISIT_MEMBER_NAME(_left,"_left");
	HX_VISIT_MEMBER_NAME(_right,"_right");
	HX_VISIT_MEMBER_NAME(_attack,"_attack");
	HX_VISIT_MEMBER_NAME(atacando,"atacando");
	HX_VISIT_MEMBER_NAME(spawnX,"spawnX");
	HX_VISIT_MEMBER_NAME(spawnY,"spawnY");
	HX_VISIT_MEMBER_NAME(attackTimer,"attackTimer");
	HX_VISIT_MEMBER_NAME(knocked,"knocked");
	HX_VISIT_MEMBER_NAME(knockedTimer,"knockedTimer");
	HX_VISIT_MEMBER_NAME(puntos,"puntos");
	HX_VISIT_MEMBER_NAME(destino,"destino");
	HX_VISIT_MEMBER_NAME(_sndPoint,"_sndPoint");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Player_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_up") ) { return _up; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { return speed; }
		if (HX_FIELD_EQ(inName,"_down") ) { return _down; }
		if (HX_FIELD_EQ(inName,"_left") ) { return _left; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_right") ) { return _right; }
		if (HX_FIELD_EQ(inName,"spawnX") ) { return spawnX; }
		if (HX_FIELD_EQ(inName,"spawnY") ) { return spawnY; }
		if (HX_FIELD_EQ(inName,"puntos") ) { return puntos; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"puntua") ) { return puntua_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_attack") ) { return _attack; }
		if (HX_FIELD_EQ(inName,"knocked") ) { return knocked; }
		if (HX_FIELD_EQ(inName,"destino") ) { return destino; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"atacando") ) { return atacando; }
		if (HX_FIELD_EQ(inName,"movement") ) { return movement_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_sndPoint") ) { return _sndPoint; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"attackTimer") ) { return attackTimer; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"knockedTimer") ) { return knockedTimer; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Player_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_up") ) { _up=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_down") ) { _down=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_left") ) { _left=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_right") ) { _right=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"spawnX") ) { spawnX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"spawnY") ) { spawnY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"puntos") ) { puntos=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_attack") ) { _attack=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"knocked") ) { knocked=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"destino") ) { destino=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"atacando") ) { atacando=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_sndPoint") ) { _sndPoint=inValue.Cast< ::flixel::system::FlxSound >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"attackTimer") ) { attackTimer=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"knockedTimer") ) { knockedTimer=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Player_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("speed"));
	outFields->push(HX_CSTRING("_up"));
	outFields->push(HX_CSTRING("_down"));
	outFields->push(HX_CSTRING("_left"));
	outFields->push(HX_CSTRING("_right"));
	outFields->push(HX_CSTRING("_attack"));
	outFields->push(HX_CSTRING("atacando"));
	outFields->push(HX_CSTRING("spawnX"));
	outFields->push(HX_CSTRING("spawnY"));
	outFields->push(HX_CSTRING("attackTimer"));
	outFields->push(HX_CSTRING("knocked"));
	outFields->push(HX_CSTRING("knockedTimer"));
	outFields->push(HX_CSTRING("puntos"));
	outFields->push(HX_CSTRING("destino"));
	outFields->push(HX_CSTRING("_sndPoint"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Player_obj,speed),HX_CSTRING("speed")},
	{hx::fsBool,(int)offsetof(Player_obj,_up),HX_CSTRING("_up")},
	{hx::fsBool,(int)offsetof(Player_obj,_down),HX_CSTRING("_down")},
	{hx::fsBool,(int)offsetof(Player_obj,_left),HX_CSTRING("_left")},
	{hx::fsBool,(int)offsetof(Player_obj,_right),HX_CSTRING("_right")},
	{hx::fsBool,(int)offsetof(Player_obj,_attack),HX_CSTRING("_attack")},
	{hx::fsBool,(int)offsetof(Player_obj,atacando),HX_CSTRING("atacando")},
	{hx::fsFloat,(int)offsetof(Player_obj,spawnX),HX_CSTRING("spawnX")},
	{hx::fsFloat,(int)offsetof(Player_obj,spawnY),HX_CSTRING("spawnY")},
	{hx::fsFloat,(int)offsetof(Player_obj,attackTimer),HX_CSTRING("attackTimer")},
	{hx::fsBool,(int)offsetof(Player_obj,knocked),HX_CSTRING("knocked")},
	{hx::fsFloat,(int)offsetof(Player_obj,knockedTimer),HX_CSTRING("knockedTimer")},
	{hx::fsInt,(int)offsetof(Player_obj,puntos),HX_CSTRING("puntos")},
	{hx::fsInt,(int)offsetof(Player_obj,destino),HX_CSTRING("destino")},
	{hx::fsObject /*::flixel::system::FlxSound*/ ,(int)offsetof(Player_obj,_sndPoint),HX_CSTRING("_sndPoint")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("speed"),
	HX_CSTRING("_up"),
	HX_CSTRING("_down"),
	HX_CSTRING("_left"),
	HX_CSTRING("_right"),
	HX_CSTRING("_attack"),
	HX_CSTRING("atacando"),
	HX_CSTRING("spawnX"),
	HX_CSTRING("spawnY"),
	HX_CSTRING("attackTimer"),
	HX_CSTRING("knocked"),
	HX_CSTRING("knockedTimer"),
	HX_CSTRING("puntos"),
	HX_CSTRING("destino"),
	HX_CSTRING("_sndPoint"),
	HX_CSTRING("update"),
	HX_CSTRING("movement"),
	HX_CSTRING("puntua"),
	HX_CSTRING("destroy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

#endif

Class Player_obj::__mClass;

void Player_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Player"), hx::TCanCast< Player_obj> ,sStaticFields,sMemberFields,
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

void Player_obj::__boot()
{
}

