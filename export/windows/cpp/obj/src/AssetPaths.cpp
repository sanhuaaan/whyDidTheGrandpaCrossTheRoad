#include <hxcpp.h>

#ifndef INCLUDED_AssetPaths
#include <AssetPaths.h>
#endif

Void AssetPaths_obj::__construct()
{
	return null();
}

//AssetPaths_obj::~AssetPaths_obj() { }

Dynamic AssetPaths_obj::__CreateEmpty() { return  new AssetPaths_obj; }
hx::ObjectPtr< AssetPaths_obj > AssetPaths_obj::__new()
{  hx::ObjectPtr< AssetPaths_obj > result = new AssetPaths_obj();
	result->__construct();
	return result;}

Dynamic AssetPaths_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AssetPaths_obj > result = new AssetPaths_obj();
	result->__construct();
	return result;}

::String AssetPaths_obj::data_goes_here__txt;

::String AssetPaths_obj::andador__png;

::String AssetPaths_obj::andadorx39__png;

::String AssetPaths_obj::coches__png;

::String AssetPaths_obj::dead__png;

::String AssetPaths_obj::fondo__png;

::String AssetPaths_obj::fondoMAL__png;

::String AssetPaths_obj::hit__png;

::String AssetPaths_obj::images_go_here__txt;

::String AssetPaths_obj::player1x26__png;

::String AssetPaths_obj::player1x39__png;

::String AssetPaths_obj::playersx39__png;

::String AssetPaths_obj::portadaP1__png;

::String AssetPaths_obj::portadaP2__png;

::String AssetPaths_obj::intro__wav;

::String AssetPaths_obj::loop__wav;

::String AssetPaths_obj::music_goes_here__txt;

::String AssetPaths_obj::attack__wav;

::String AssetPaths_obj::death__wav;

::String AssetPaths_obj::end__wav;

::String AssetPaths_obj::hit__wav;

::String AssetPaths_obj::point__wav;

::String AssetPaths_obj::ready__wav;

::String AssetPaths_obj::sounds_go_here__txt;

::String AssetPaths_obj::start__wav;

::String AssetPaths_obj::step__wav;


AssetPaths_obj::AssetPaths_obj()
{
}

Dynamic AssetPaths_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic AssetPaths_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void AssetPaths_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("data_goes_here__txt"),
	HX_CSTRING("andador__png"),
	HX_CSTRING("andadorx39__png"),
	HX_CSTRING("coches__png"),
	HX_CSTRING("dead__png"),
	HX_CSTRING("fondo__png"),
	HX_CSTRING("fondoMAL__png"),
	HX_CSTRING("hit__png"),
	HX_CSTRING("images_go_here__txt"),
	HX_CSTRING("player1x26__png"),
	HX_CSTRING("player1x39__png"),
	HX_CSTRING("playersx39__png"),
	HX_CSTRING("portadaP1__png"),
	HX_CSTRING("portadaP2__png"),
	HX_CSTRING("intro__wav"),
	HX_CSTRING("loop__wav"),
	HX_CSTRING("music_goes_here__txt"),
	HX_CSTRING("attack__wav"),
	HX_CSTRING("death__wav"),
	HX_CSTRING("end__wav"),
	HX_CSTRING("hit__wav"),
	HX_CSTRING("point__wav"),
	HX_CSTRING("ready__wav"),
	HX_CSTRING("sounds_go_here__txt"),
	HX_CSTRING("start__wav"),
	HX_CSTRING("step__wav"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetPaths_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::data_goes_here__txt,"data_goes_here__txt");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::andador__png,"andador__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::andadorx39__png,"andadorx39__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::coches__png,"coches__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::dead__png,"dead__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::fondo__png,"fondo__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::fondoMAL__png,"fondoMAL__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::hit__png,"hit__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::images_go_here__txt,"images_go_here__txt");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::player1x26__png,"player1x26__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::player1x39__png,"player1x39__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::playersx39__png,"playersx39__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::portadaP1__png,"portadaP1__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::portadaP2__png,"portadaP2__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::intro__wav,"intro__wav");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::loop__wav,"loop__wav");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::music_goes_here__txt,"music_goes_here__txt");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::attack__wav,"attack__wav");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::death__wav,"death__wav");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::end__wav,"end__wav");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::hit__wav,"hit__wav");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::point__wav,"point__wav");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::ready__wav,"ready__wav");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::sounds_go_here__txt,"sounds_go_here__txt");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::start__wav,"start__wav");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::step__wav,"step__wav");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::data_goes_here__txt,"data_goes_here__txt");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::andador__png,"andador__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::andadorx39__png,"andadorx39__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::coches__png,"coches__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::dead__png,"dead__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::fondo__png,"fondo__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::fondoMAL__png,"fondoMAL__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::hit__png,"hit__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::images_go_here__txt,"images_go_here__txt");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::player1x26__png,"player1x26__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::player1x39__png,"player1x39__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::playersx39__png,"playersx39__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::portadaP1__png,"portadaP1__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::portadaP2__png,"portadaP2__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::intro__wav,"intro__wav");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::loop__wav,"loop__wav");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::music_goes_here__txt,"music_goes_here__txt");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::attack__wav,"attack__wav");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::death__wav,"death__wav");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::end__wav,"end__wav");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::hit__wav,"hit__wav");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::point__wav,"point__wav");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::ready__wav,"ready__wav");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::sounds_go_here__txt,"sounds_go_here__txt");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::start__wav,"start__wav");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::step__wav,"step__wav");
};

#endif

Class AssetPaths_obj::__mClass;

void AssetPaths_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("AssetPaths"), hx::TCanCast< AssetPaths_obj> ,sStaticFields,sMemberFields,
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

void AssetPaths_obj::__boot()
{
	data_goes_here__txt= HX_CSTRING("assets/data/data-goes-here.txt");
	andador__png= HX_CSTRING("assets/images/andador.png");
	andadorx39__png= HX_CSTRING("assets/images/andadorx39.png");
	coches__png= HX_CSTRING("assets/images/coches.png");
	dead__png= HX_CSTRING("assets/images/dead.png");
	fondo__png= HX_CSTRING("assets/images/fondo.png");
	fondoMAL__png= HX_CSTRING("assets/images/fondoMAL.png");
	hit__png= HX_CSTRING("assets/images/hit.png");
	images_go_here__txt= HX_CSTRING("assets/images/images-go-here.txt");
	player1x26__png= HX_CSTRING("assets/images/player1x26.png");
	player1x39__png= HX_CSTRING("assets/images/player1x39.png");
	playersx39__png= HX_CSTRING("assets/images/playersx39.png");
	portadaP1__png= HX_CSTRING("assets/images/portadaP1.png");
	portadaP2__png= HX_CSTRING("assets/images/portadaP2.png");
	intro__wav= HX_CSTRING("assets/music/intro.wav");
	loop__wav= HX_CSTRING("assets/music/loop.wav");
	music_goes_here__txt= HX_CSTRING("assets/music/music-goes-here.txt");
	attack__wav= HX_CSTRING("assets/sounds/attack.wav");
	death__wav= HX_CSTRING("assets/sounds/death.wav");
	end__wav= HX_CSTRING("assets/sounds/end.wav");
	hit__wav= HX_CSTRING("assets/sounds/hit.wav");
	point__wav= HX_CSTRING("assets/sounds/point.wav");
	ready__wav= HX_CSTRING("assets/sounds/ready.wav");
	sounds_go_here__txt= HX_CSTRING("assets/sounds/sounds-go-here.txt");
	start__wav= HX_CSTRING("assets/sounds/start.wav");
	step__wav= HX_CSTRING("assets/sounds/step.wav");
}

