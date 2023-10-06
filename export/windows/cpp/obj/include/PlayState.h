#ifndef INCLUDED_PlayState
#define INCLUDED_PlayState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxState.h>
HX_DECLARE_CLASS0(Car)
HX_DECLARE_CLASS0(PlOne)
HX_DECLARE_CLASS0(PlTwo)
HX_DECLARE_CLASS0(PlayState)
HX_DECLARE_CLASS0(Player)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,system,FlxSound)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)


class HXCPP_CLASS_ATTRIBUTES  PlayState_obj : public ::flixel::FlxState_obj{
	public:
		typedef ::flixel::FlxState_obj super;
		typedef PlayState_obj OBJ_;
		PlayState_obj();
		Void __construct(Dynamic MaxSize);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< PlayState_obj > __new(Dynamic MaxSize);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PlayState_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PlayState"); }

		::PlOne _playerOne;
		::PlTwo _playerTwo;
		Array< int > arrayIntervalCalles;
		::Car _car;
		Float timer;
		::flixel::text::FlxText timerText;
		::flixel::text::FlxText p1Punttext;
		::flixel::text::FlxText p2Punttext;
		::flixel::text::FlxText toadderTxt;
		::flixel::text::FlxText winnerTxt;
		::flixel::group::FlxTypedGroup _grpCoches;
		Float respawnTimerP1;
		Float respawnTimerP2;
		Float closeTimer;
		::flixel::system::FlxSound _sndStart;
		::flixel::system::FlxSound _sndEnd;
		::flixel::system::FlxSound _sndAttack;
		::flixel::system::FlxSound _sndHit;
		::flixel::system::FlxSound _sndDeath;
		virtual Void create( );

		virtual Void destroy( );

		virtual Void update( );

		virtual Void playerTwoAttacked( ::Player P,::flixel::FlxObject A);
		Dynamic playerTwoAttacked_dyn();

		virtual Void playerOneAttacked( ::Player P,::flixel::FlxObject A);
		Dynamic playerOneAttacked_dyn();

		virtual Void playerTouchCar( ::Player P,::Car C);
		Dynamic playerTouchCar_dyn();

		virtual Void respawnPlayer( );
		Dynamic respawnPlayer_dyn();

		virtual Void finishKillToadder( ::flixel::tweens::FlxTween _);
		Dynamic finishKillToadder_dyn();

};


#endif /* INCLUDED_PlayState */ 
