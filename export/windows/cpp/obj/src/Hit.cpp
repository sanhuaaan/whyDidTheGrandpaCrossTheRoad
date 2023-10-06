#include <hxcpp.h>

#ifndef INCLUDED_Hit
#include <Hit.h>
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
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif

Void Hit_obj::__construct(Float X,Float Y)
{
HX_STACK_FRAME("Hit","new",0x96b934a5,"Hit.new","Hit.hx",10,0x8b94e66b)
HX_STACK_THIS(this)
HX_STACK_ARG(X,"X")
HX_STACK_ARG(Y,"Y")
{
	HX_STACK_LINE(11)
	super::__construct(X,Y,null());
	HX_STACK_LINE(12)
	this->loadGraphic(HX_CSTRING("assets/images/hit.png"),true,(int)39,(int)39,null(),null());
	HX_STACK_LINE(13)
	this->animation->add(HX_CSTRING("plas"),Array_obj< int >::__new().Add((int)0).Add((int)1),(int)15,null());
	HX_STACK_LINE(14)
	this->animation->play(HX_CSTRING("plas"),true,null());
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Hit.hx",15,0x8b94e66b)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("alpha") , (int)0,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(15)
	::flixel::tweens::FlxTween_obj::tween(hx::ObjectPtr<OBJ_>(this),_Function_1_1::Block(),.2,null());
	struct _Function_1_2{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Hit.hx",16,0x8b94e66b)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("x") , (int)3,false);
				__result->Add(HX_CSTRING("y") , (int)3,false);
				return __result;
			}
			return null();
		}
	};
	struct _Function_1_3{
		inline static Dynamic Block( hx::ObjectPtr< ::Hit_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Hit.hx",16,0x8b94e66b)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("type") , (int)8,false);
				__result->Add(HX_CSTRING("complete") , __this->finishKill_dyn(),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(16)
	::flixel::tweens::FlxTween_obj::tween(this->scale,_Function_1_2::Block(),.2,_Function_1_3::Block(this));
}
;
	return null();
}

//Hit_obj::~Hit_obj() { }

Dynamic Hit_obj::__CreateEmpty() { return  new Hit_obj; }
hx::ObjectPtr< Hit_obj > Hit_obj::__new(Float X,Float Y)
{  hx::ObjectPtr< Hit_obj > result = new Hit_obj();
	result->__construct(X,Y);
	return result;}

Dynamic Hit_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Hit_obj > result = new Hit_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Hit_obj::update( ){
{
		HX_STACK_FRAME("Hit","update",0x84b25ae4,"Hit.update","Hit.hx",20,0x8b94e66b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(20)
		this->super::update();
	}
return null();
}


Void Hit_obj::finishKill( ::flixel::tweens::FlxTween _){
{
		HX_STACK_FRAME("Hit","finishKill",0x22ac4fec,"Hit.finishKill","Hit.hx",26,0x8b94e66b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(26)
		this->destroy();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Hit_obj,finishKill,(void))


Hit_obj::Hit_obj()
{
}

Dynamic Hit_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"finishKill") ) { return finishKill_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Hit_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Hit_obj::__GetFields(Array< ::String> &outFields)
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
	HX_CSTRING("finishKill"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Hit_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Hit_obj::__mClass,"__mClass");
};

#endif

Class Hit_obj::__mClass;

void Hit_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Hit"), hx::TCanCast< Hit_obj> ,sStaticFields,sMemberFields,
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

void Hit_obj::__boot()
{
}

