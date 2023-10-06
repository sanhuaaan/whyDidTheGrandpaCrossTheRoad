#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_PlTwo
#include <PlTwo.h>
#endif
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
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxInput
#include <flixel/interfaces/IFlxInput.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif

Void PlTwo_obj::__construct()
{
HX_STACK_FRAME("PlTwo","new",0x4e71e1c2,"PlTwo.new","PlTwo.hx",10,0xcefd0bee)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(11)
	this->spawnX = (int)666;
	HX_STACK_LINE(12)
	this->spawnY = (int)250;
	HX_STACK_LINE(13)
	super::__construct();
	HX_STACK_LINE(14)
	this->destino = (int)0;
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","PlTwo.hx",15,0xcefd0bee)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("x") , true,false);
				__result->Add(HX_CSTRING("y") , false,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(15)
	this->_facingFlip->set((int)1,_Function_1_1::Block());
	struct _Function_1_2{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","PlTwo.hx",16,0xcefd0bee)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("x") , false,false);
				__result->Add(HX_CSTRING("y") , false,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(16)
	this->_facingFlip->set((int)16,_Function_1_2::Block());
	HX_STACK_LINE(17)
	this->animation->add(HX_CSTRING("walk"),Array_obj< int >::__new().Add((int)8).Add((int)9).Add((int)10).Add((int)11),(int)25,false);
	HX_STACK_LINE(18)
	this->animation->add(HX_CSTRING("attack"),Array_obj< int >::__new().Add((int)12),(int)0,false);
	HX_STACK_LINE(19)
	this->animation->add(HX_CSTRING("idle"),Array_obj< int >::__new().Add((int)7),(int)0,false);
	HX_STACK_LINE(20)
	this->animation->add(HX_CSTRING("knocked"),Array_obj< int >::__new().Add((int)13),(int)0,false);
	HX_STACK_LINE(22)
	this->set_facing((int)1);
}
;
	return null();
}

//PlTwo_obj::~PlTwo_obj() { }

Dynamic PlTwo_obj::__CreateEmpty() { return  new PlTwo_obj; }
hx::ObjectPtr< PlTwo_obj > PlTwo_obj::__new()
{  hx::ObjectPtr< PlTwo_obj > result = new PlTwo_obj();
	result->__construct();
	return result;}

Dynamic PlTwo_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlTwo_obj > result = new PlTwo_obj();
	result->__construct();
	return result;}

Void PlTwo_obj::update( ){
{
		HX_STACK_FRAME("PlTwo","update",0xdd0efde7,"PlTwo.update","PlTwo.hx",27,0xcefd0bee)
		HX_STACK_THIS(this)
		HX_STACK_LINE(28)
		bool _g = ::flixel::FlxG_obj::keys->checkKeyStatus(Array_obj< ::String >::__new().Add(HX_CSTRING("UP")),(int)1);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(28)
		this->_up = _g;
		HX_STACK_LINE(29)
		bool _g1 = ::flixel::FlxG_obj::keys->checkKeyStatus(Array_obj< ::String >::__new().Add(HX_CSTRING("DOWN")),(int)1);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		this->_down = _g1;
		HX_STACK_LINE(30)
		bool _g2 = ::flixel::FlxG_obj::keys->checkKeyStatus(Array_obj< ::String >::__new().Add(HX_CSTRING("LEFT")),(int)1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(30)
		this->_left = _g2;
		HX_STACK_LINE(31)
		bool _g3 = ::flixel::FlxG_obj::keys->checkKeyStatus(Array_obj< ::String >::__new().Add(HX_CSTRING("RIGHT")),(int)1);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(31)
		this->_right = _g3;
		HX_STACK_LINE(32)
		bool _g4 = ::flixel::FlxG_obj::keys->checkKeyStatus(Array_obj< ::String >::__new().Add(HX_CSTRING("ENTER")),(int)2);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(32)
		this->_attack = _g4;
		HX_STACK_LINE(33)
		this->super::update();
	}
return null();
}



PlTwo_obj::PlTwo_obj()
{
}

Dynamic PlTwo_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlTwo_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void PlTwo_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlTwo_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlTwo_obj::__mClass,"__mClass");
};

#endif

Class PlTwo_obj::__mClass;

void PlTwo_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("PlTwo"), hx::TCanCast< PlTwo_obj> ,sStaticFields,sMemberFields,
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

void PlTwo_obj::__boot()
{
}

