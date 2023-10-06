#include <hxcpp.h>

#ifndef INCLUDED_Car
#include <Car.h>
#endif
#ifndef INCLUDED_IMap
#include <IMap.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif

Void Car_obj::__construct(int calle)
{
HX_STACK_FRAME("Car","new",0x6d25d6e6,"Car.new","Car.hx",7,0xef45074a)
HX_STACK_THIS(this)
HX_STACK_ARG(calle,"calle")
{
	HX_STACK_LINE(11)
	this->arrayColores = Array_obj< ::String >::__new().Add(HX_CSTRING("R")).Add(HX_CSTRING("G")).Add(HX_CSTRING("W")).Add(HX_CSTRING("B")).Add(HX_CSTRING("Y"));
	HX_STACK_LINE(9)
	this->speed = (int)200;
	HX_STACK_LINE(15)
	Float _g = ::Math_obj::random();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(15)
	Float _g1 = (_g * (int)30);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(15)
	Float _g2 = (_g1 + (int)160);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(15)
	this->speed = _g2;
	HX_STACK_LINE(17)
	switch( (int)(calle)){
		case (int)1: {
			HX_STACK_LINE(18)
			super::__construct((int)100,(int)580,null());
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(19)
			super::__construct((int)250,(int)580,null());
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(20)
			super::__construct((int)410,(int)-100,null());
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(21)
			super::__construct((int)560,(int)-100,null());
		}
		;break;
	}
	HX_STACK_LINE(24)
	this->calle = calle;
	HX_STACK_LINE(26)
	this->loadGraphic(HX_CSTRING("assets/images/coches.png"),true,(int)60,(int)80,null(),null());
	HX_STACK_LINE(27)
	{
		HX_STACK_LINE(27)
		int _g11 = (int)1;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(27)
		int _g3 = this->arrayColores->length;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(27)
		while((true)){
			HX_STACK_LINE(27)
			if ((!(((_g11 < _g3))))){
				HX_STACK_LINE(27)
				break;
			}
			HX_STACK_LINE(27)
			int indiceColor = (_g11)++;		HX_STACK_VAR(indiceColor,"indiceColor");
			HX_STACK_LINE(28)
			this->animation->add(this->arrayColores->__get(indiceColor),Array_obj< int >::__new().Add(indiceColor),(int)0,false);
		}
	}
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Car.hx",30,0xef45074a)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("x") , false,false);
				__result->Add(HX_CSTRING("y") , true,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(30)
	this->_facingFlip->set((int)256,_Function_1_1::Block());
	struct _Function_1_2{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Car.hx",31,0xef45074a)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("x") , false,false);
				__result->Add(HX_CSTRING("y") , false,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(31)
	this->_facingFlip->set((int)4096,_Function_1_2::Block());
	HX_STACK_LINE(33)
	if (((calle <= (int)2))){
		HX_STACK_LINE(35)
		hx::MultEq(this->speed,(int)-1);
		HX_STACK_LINE(36)
		this->set_facing((int)256);
	}
	HX_STACK_LINE(40)
	Float _g3 = ::Math_obj::random();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(40)
	Float _g4 = (_g3 * this->arrayColores->length);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(40)
	int _g5 = ::Math_obj::floor(_g4);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(40)
	::String _g6 = this->arrayColores->__get(_g5);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(40)
	this->animation->play(_g6,null(),null());
}
;
	return null();
}

//Car_obj::~Car_obj() { }

Dynamic Car_obj::__CreateEmpty() { return  new Car_obj; }
hx::ObjectPtr< Car_obj > Car_obj::__new(int calle)
{  hx::ObjectPtr< Car_obj > result = new Car_obj();
	result->__construct(calle);
	return result;}

Dynamic Car_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Car_obj > result = new Car_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Car_obj::update( ){
{
		HX_STACK_FRAME("Car","update",0xb94dd743,"Car.update","Car.hx",44,0xef45074a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(45)
		this->super::update();
		HX_STACK_LINE(47)
		this->velocity->set_y(this->speed);
		HX_STACK_LINE(49)
		if (((bool((this->y < (int)-100)) || bool((this->y > (int)580))))){
			HX_STACK_LINE(50)
			this->destroy();
		}
	}
return null();
}



Car_obj::Car_obj()
{
}

void Car_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Car);
	HX_MARK_MEMBER_NAME(speed,"speed");
	HX_MARK_MEMBER_NAME(calle,"calle");
	HX_MARK_MEMBER_NAME(arrayColores,"arrayColores");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Car_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(speed,"speed");
	HX_VISIT_MEMBER_NAME(calle,"calle");
	HX_VISIT_MEMBER_NAME(arrayColores,"arrayColores");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Car_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { return speed; }
		if (HX_FIELD_EQ(inName,"calle") ) { return calle; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"arrayColores") ) { return arrayColores; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Car_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"calle") ) { calle=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"arrayColores") ) { arrayColores=inValue.Cast< Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Car_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("speed"));
	outFields->push(HX_CSTRING("calle"));
	outFields->push(HX_CSTRING("arrayColores"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Car_obj,speed),HX_CSTRING("speed")},
	{hx::fsInt,(int)offsetof(Car_obj,calle),HX_CSTRING("calle")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(Car_obj,arrayColores),HX_CSTRING("arrayColores")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("speed"),
	HX_CSTRING("calle"),
	HX_CSTRING("arrayColores"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Car_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Car_obj::__mClass,"__mClass");
};

#endif

Class Car_obj::__mClass;

void Car_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Car"), hx::TCanCast< Car_obj> ,sStaticFields,sMemberFields,
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

void Car_obj::__boot()
{
}

