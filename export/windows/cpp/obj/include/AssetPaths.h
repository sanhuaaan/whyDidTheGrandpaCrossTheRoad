#ifndef INCLUDED_AssetPaths
#define INCLUDED_AssetPaths

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(AssetPaths)


class HXCPP_CLASS_ATTRIBUTES  AssetPaths_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AssetPaths_obj OBJ_;
		AssetPaths_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< AssetPaths_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AssetPaths_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("AssetPaths"); }

		static ::String data_goes_here__txt;
		static ::String andador__png;
		static ::String andadorx39__png;
		static ::String coches__png;
		static ::String dead__png;
		static ::String fondo__png;
		static ::String fondoMAL__png;
		static ::String hit__png;
		static ::String images_go_here__txt;
		static ::String player1x26__png;
		static ::String player1x39__png;
		static ::String playersx39__png;
		static ::String portadaP1__png;
		static ::String portadaP2__png;
		static ::String intro__wav;
		static ::String loop__wav;
		static ::String music_goes_here__txt;
		static ::String attack__wav;
		static ::String death__wav;
		static ::String end__wav;
		static ::String hit__wav;
		static ::String point__wav;
		static ::String ready__wav;
		static ::String sounds_go_here__txt;
		static ::String start__wav;
		static ::String step__wav;
};


#endif /* INCLUDED_AssetPaths */ 
