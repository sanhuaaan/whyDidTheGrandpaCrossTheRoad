#ifndef INCLUDED___ASSET__assets_images_hit_png
#define INCLUDED___ASSET__assets_images_hit_png

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_legacy/display/BitmapData.h>
HX_DECLARE_CLASS0(__ASSET__assets_images_hit_png)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)


class HXCPP_CLASS_ATTRIBUTES  __ASSET__assets_images_hit_png_obj : public ::openfl::_legacy::display::BitmapData_obj{
	public:
		typedef ::openfl::_legacy::display::BitmapData_obj super;
		typedef __ASSET__assets_images_hit_png_obj OBJ_;
		__ASSET__assets_images_hit_png_obj();
		Void __construct(int width,int height,Dynamic __o_transparent,Dynamic __o_fillRGBA);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< __ASSET__assets_images_hit_png_obj > __new(int width,int height,Dynamic __o_transparent,Dynamic __o_fillRGBA);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~__ASSET__assets_images_hit_png_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("__ASSET__assets_images_hit_png"); }

		static ::String resourceName;
};


#endif /* INCLUDED___ASSET__assets_images_hit_png */ 
