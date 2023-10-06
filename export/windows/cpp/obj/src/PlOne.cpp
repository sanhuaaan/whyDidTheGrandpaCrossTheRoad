#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_PlOne
#include <PlOne.h>
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

Void PlOne_obj::__construct()
{
HX_STACK_FRAME("PlOne","new",0x234e839c,"PlOne.new","PlOne.hx",10,0x99fce354)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(11)
	this->spawnX = (int)15;
	HX_STACK_LINE(12)
	this->spawnY = (int)200;
	HX_STACK_LINE(13)
	super::__construct();
	HX_STACK_LINE(14)
	this->destino = (int)1;
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","PlOne.hx",15,0x99fce354)
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
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","PlOne.hx",16,0x99fce354)
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
	this->animation->add(HX_CSTRING("walk"),Array_obj< int >::__new().Add((int)1).Add((int)2).Add((int)3).Add((int)4),(int)25,false);
	HX_STACK_LINE(18)
	this->animation->add(HX_CSTRING("attack"),Array_obj< int >::__new().Add((int)5),(int)0,false);
	HX_STACK_LINE(19)
	this->animation->add(HX_CSTRING("idle"),Array_obj< int >::__new().Add((int)0),(int)0,false);
	HX_STACK_LINE(20)
	this->animation->add(HX_CSTRING("knocked"),Array_obj< int >::__new().Add((int)6),(int)0,false);
}
;
	return null();
}

//PlOne_obj::~PlOne_obj() { }

Dynamic PlOne_obj::__CreateEmpty() { return  new PlOne_obj; }
hx::ObjectPtr< PlOne_obj > PlOne_obj::__new()
{  hx::ObjectPtr< PlOne_obj > result = new PlOne_obj();
	result->__construct();
	return result;}

Dynamic PlOne_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlOne_obj > result = new PlOne_obj();
	result->__construct();
	return result;}

Void PlOne_obj::update( ){
{
		HX_STACK_FRAME("PlOne","update",0x7525804d,"PlOne.update","PlOne.hx",24,0x99fce354)
		HX_STACK_THIS(this)
		HX_STACK_LINE(25)
		bool _g = ::flixel::FlxG_obj::keys->checkKeyStatus(Array_obj< ::String >::__new().Add(HX_CSTRING("W")),(int)1);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(25)
		this->_up = _g;
		HX_STACK_LINE(26)
		bool _g1 = ::flixel::FlxG_obj::keys->checkKeyStatus(Array_obj< ::String >::__new().Add(HX_CSTRING("S")),(int)1);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(26)
		this->_down = _g1;
		HX_STACK_LINE(27)
		bool _g2 = ::flixel::FlxG_obj::keys->checkKeyStatus(Array_obj< ::String >::__new().Add(HX_CSTRING("A")),(int)1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(27)
		this->_left = _g2;
		HX_STACK_LINE(28)
		bool _g3 = ::flixel::FlxG_obj::keys->checkKeyStatus(Array_obj< ::String >::__new().Add(HX_CSTRING("D")),(int)1);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(28)
		this->_right = _g3;
		HX_STACK_LINE(29)
		bool _g4 = ::flixel::FlxG_obj::keys->checkKeyStatus(Array_obj< ::String >::__new().Add(HX_CSTRING("SPACE")),(int)2);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(29)
		this->_attack = _g4;
		HX_STACK_LINE(30)
		this->super::update();
	}
return null();
}



PlOne_obj::PlOne_obj()
{
}

Dynamic PlOne_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlOne_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void PlOne_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(PlOne_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlOne_obj::__mClass,"__mClass");
};

#endif

Class PlOne_obj::__mClass;

void PlOne_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("PlOne"), hx::TCanCast< PlOne_obj> ,sStaticFields,sMemberFields,
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

void PlOne_obj::__boot()
{
}

