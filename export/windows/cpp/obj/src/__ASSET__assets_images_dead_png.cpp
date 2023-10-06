#include <hxcpp.h>

#ifndef INCLUDED___ASSET__assets_images_dead_png
#include <__ASSET__assets_images_dead_png.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_ByteArray
#include <openfl/_legacy/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataInput
#include <openfl/_legacy/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataOutput
#include <openfl/_legacy/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IMemoryRange
#include <openfl/_legacy/utils/IMemoryRange.h>
#endif

Void __ASSET__assets_images_dead_png_obj::__construct(int width,int height,Dynamic __o_transparent,Dynamic __o_fillRGBA)
{
HX_STACK_FRAME("__ASSET__assets_images_dead_png","new",0xafb2523b,"__ASSET__assets_images_dead_png.new","openfl/_legacy/Assets.hx",2010,0x9276b055)
HX_STACK_THIS(this)
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
HX_STACK_ARG(__o_transparent,"transparent")
HX_STACK_ARG(__o_fillRGBA,"fillRGBA")
Dynamic transparent = __o_transparent.Default(true);
Dynamic fillRGBA = __o_fillRGBA.Default(-1);
{
	HX_STACK_LINE(2076)
	super::__construct(width,height,transparent,fillRGBA,null());
	HX_STACK_LINE(2078)
	::haxe::io::Bytes _g = ::haxe::Resource_obj::getBytes(::__ASSET__assets_images_dead_png_obj::resourceName);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(2078)
	::openfl::_legacy::utils::ByteArray byteArray = ::openfl::_legacy::utils::ByteArray_obj::fromBytes(_g);		HX_STACK_VAR(byteArray,"byteArray");
	HX_STACK_LINE(2079)
	{
		HX_STACK_LINE(2079)
		Dynamic _g1 = ::openfl::_legacy::display::BitmapData_obj::lime_bitmap_data_from_bytes(byteArray,null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(2079)
		this->__handle = _g1;
	}
}
;
	return null();
}

//__ASSET__assets_images_dead_png_obj::~__ASSET__assets_images_dead_png_obj() { }

Dynamic __ASSET__assets_images_dead_png_obj::__CreateEmpty() { return  new __ASSET__assets_images_dead_png_obj; }
hx::ObjectPtr< __ASSET__assets_images_dead_png_obj > __ASSET__assets_images_dead_png_obj::__new(int width,int height,Dynamic __o_transparent,Dynamic __o_fillRGBA)
{  hx::ObjectPtr< __ASSET__assets_images_dead_png_obj > result = new __ASSET__assets_images_dead_png_obj();
	result->__construct(width,height,__o_transparent,__o_fillRGBA);
	return result;}

Dynamic __ASSET__assets_images_dead_png_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< __ASSET__assets_images_dead_png_obj > result = new __ASSET__assets_images_dead_png_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

::String __ASSET__assets_images_dead_png_obj::resourceName;


__ASSET__assets_images_dead_png_obj::__ASSET__assets_images_dead_png_obj()
{
}

Dynamic __ASSET__assets_images_dead_png_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { return resourceName; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic __ASSET__assets_images_dead_png_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { resourceName=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void __ASSET__assets_images_dead_png_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("resourceName"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(__ASSET__assets_images_dead_png_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(__ASSET__assets_images_dead_png_obj::resourceName,"resourceName");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(__ASSET__assets_images_dead_png_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(__ASSET__assets_images_dead_png_obj::resourceName,"resourceName");
};

#endif

Class __ASSET__assets_images_dead_png_obj::__mClass;

void __ASSET__assets_images_dead_png_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("__ASSET__assets_images_dead_png"), hx::TCanCast< __ASSET__assets_images_dead_png_obj> ,sStaticFields,sMemberFields,
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

void __ASSET__assets_images_dead_png_obj::__boot()
{
	resourceName= HX_CSTRING("__ASSET__:bitmap___ASSET__assets_images_dead_png");
}

