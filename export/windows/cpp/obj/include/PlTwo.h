#ifndef INCLUDED_PlTwo
#define INCLUDED_PlTwo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <Player.h>
HX_DECLARE_CLASS0(PlTwo)
HX_DECLARE_CLASS0(Player)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  PlTwo_obj : public ::Player_obj{
	public:
		typedef ::Player_obj super;
		typedef PlTwo_obj OBJ_;
		PlTwo_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< PlTwo_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PlTwo_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("PlTwo"); }

		virtual Void update( );

};


#endif /* INCLUDED_PlTwo */ 
