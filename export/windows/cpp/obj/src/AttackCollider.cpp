#include <hxcpp.h>

#ifndef INCLUDED_AttackCollider
#include <AttackCollider.h>
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
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif

Void AttackCollider_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y)
{
HX_STACK_FRAME("AttackCollider","new",0x32d6222e,"AttackCollider.new","AttackCollider.hx",11,0xf273bd02)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(12)
	super::__construct(X,Y,null());
	HX_STACK_LINE(13)
	this->loadGraphic(HX_CSTRING("assets/images/andador.png"),true,(int)26,(int)26,null(),null());
}
;
	return null();
}

//AttackCollider_obj::~AttackCollider_obj() { }

Dynamic AttackCollider_obj::__CreateEmpty() { return  new AttackCollider_obj; }
hx::ObjectPtr< AttackCollider_obj > AttackCollider_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y)
{  hx::ObjectPtr< AttackCollider_obj > result = new AttackCollider_obj();
	result->__construct(__o_X,__o_Y);
	return result;}

Dynamic AttackCollider_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AttackCollider_obj > result = new AttackCollider_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void AttackCollider_obj::update( ){
{
		HX_STACK_FRAME("AttackCollider","update",0x6435c8fb,"AttackCollider.update","AttackCollider.hx",19,0xf273bd02)
		HX_STACK_THIS(this)
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","AttackCollider.hx",19,0xf273bd02)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("alpha") , (int)0,false);
					return __result;
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static Dynamic Block( hx::ObjectPtr< ::AttackCollider_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","AttackCollider.hx",19,0xf273bd02)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("complete") , __this->finishKill_dyn(),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(19)
		::flixel::tweens::FlxTween_obj::tween(hx::ObjectPtr<OBJ_>(this),_Function_1_1::Block(),.25,_Function_1_2::Block(this));
	}
return null();
}


Void AttackCollider_obj::finishKill( ::flixel::tweens::FlxTween _){
{
		HX_STACK_FRAME("AttackCollider","finishKill",0xd1b61583,"AttackCollider.finishKill","AttackCollider.hx",24,0xf273bd02)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(24)
		this->set_exists(false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AttackCollider_obj,finishKill,(void))


AttackCollider_obj::AttackCollider_obj()
{
}

Dynamic AttackCollider_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic AttackCollider_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void AttackCollider_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(AttackCollider_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AttackCollider_obj::__mClass,"__mClass");
};

#endif

Class AttackCollider_obj::__mClass;

void AttackCollider_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("AttackCollider"), hx::TCanCast< AttackCollider_obj> ,sStaticFields,sMemberFields,
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

void AttackCollider_obj::__boot()
{
}

