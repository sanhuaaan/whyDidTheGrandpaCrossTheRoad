#include <hxcpp.h>

#ifndef INCLUDED_Dead
#include <Dead.h>
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

Void Dead_obj::__construct(Float X,Float Y)
{
HX_STACK_FRAME("Dead","new",0x14c9cdb6,"Dead.new","Dead.hx",11,0x89d9da7a)
HX_STACK_THIS(this)
HX_STACK_ARG(X,"X")
HX_STACK_ARG(Y,"Y")
{
	HX_STACK_LINE(12)
	super::__construct(X,Y,null());
	HX_STACK_LINE(13)
	this->loadGraphic(HX_CSTRING("assets/images/dead.png"),true,(int)39,(int)39,null(),null());
	HX_STACK_LINE(14)
	this->animation->add(HX_CSTRING("laugh"),Array_obj< int >::__new().Add((int)0).Add((int)1),(int)15,null());
	HX_STACK_LINE(15)
	this->animation->play(HX_CSTRING("laugh"),true,null());
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Dead.hx",17,0x89d9da7a)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("x") , (int)7,false);
				__result->Add(HX_CSTRING("y") , (int)7,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(17)
	::flixel::tweens::FlxTween_obj::tween(this->scale,_Function_1_1::Block(),(int)1,null());
	struct _Function_1_2{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Dead.hx",18,0x89d9da7a)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("alpha") , (int)0,false);
				return __result;
			}
			return null();
		}
	};
	struct _Function_1_3{
		inline static Dynamic Block( hx::ObjectPtr< ::Dead_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Dead.hx",18,0x89d9da7a)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("complete") , __this->finishKill_dyn(),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(18)
	::flixel::tweens::FlxTween_obj::tween(hx::ObjectPtr<OBJ_>(this),_Function_1_2::Block(),(int)1,_Function_1_3::Block(this));
}
;
	return null();
}

//Dead_obj::~Dead_obj() { }

Dynamic Dead_obj::__CreateEmpty() { return  new Dead_obj; }
hx::ObjectPtr< Dead_obj > Dead_obj::__new(Float X,Float Y)
{  hx::ObjectPtr< Dead_obj > result = new Dead_obj();
	result->__construct(X,Y);
	return result;}

Dynamic Dead_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Dead_obj > result = new Dead_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Dead_obj::update( ){
{
		HX_STACK_FRAME("Dead","update",0x5d840273,"Dead.update","Dead.hx",22,0x89d9da7a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(22)
		this->super::update();
	}
return null();
}


Void Dead_obj::finishKill( ::flixel::tweens::FlxTween _){
{
		HX_STACK_FRAME("Dead","finishKill",0x792a6afb,"Dead.finishKill","Dead.hx",27,0x89d9da7a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(27)
		this->destroy();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Dead_obj,finishKill,(void))


Dead_obj::Dead_obj()
{
}

Dynamic Dead_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic Dead_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Dead_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(Dead_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Dead_obj::__mClass,"__mClass");
};

#endif

Class Dead_obj::__mClass;

void Dead_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Dead"), hx::TCanCast< Dead_obj> ,sStaticFields,sMemberFields,
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

void Dead_obj::__boot()
{
}

