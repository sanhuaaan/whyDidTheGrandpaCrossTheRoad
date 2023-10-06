#include <hxcpp.h>

#ifndef INCLUDED___ASSET__assets_sounds_sounds_go_here_txt
#include <__ASSET__assets_sounds_sounds_go_here_txt.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
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

Void __ASSET__assets_sounds_sounds_go_here_txt_obj::__construct(Dynamic __o_size)
{
HX_STACK_FRAME("__ASSET__assets_sounds_sounds_go_here_txt","new",0xed772cfe,"__ASSET__assets_sounds_sounds_go_here_txt.new","openfl/_legacy/Assets.hx",2181,0x9276b055)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_size,"size")
Dynamic size = __o_size.Default(0);
{
	HX_STACK_LINE(2183)
	super::__construct(null());
	HX_STACK_LINE(2188)
	{
		HX_STACK_LINE(2188)
		::haxe::io::Bytes bytes = ::haxe::Resource_obj::getBytes(::__ASSET__assets_sounds_sounds_go_here_txt_obj::resourceName);		HX_STACK_VAR(bytes,"bytes");
		HX_STACK_LINE(2188)
		this->b = bytes->b;
		HX_STACK_LINE(2188)
		this->length = bytes->length;
	}
}
;
	return null();
}

//__ASSET__assets_sounds_sounds_go_here_txt_obj::~__ASSET__assets_sounds_sounds_go_here_txt_obj() { }

Dynamic __ASSET__assets_sounds_sounds_go_here_txt_obj::__CreateEmpty() { return  new __ASSET__assets_sounds_sounds_go_here_txt_obj; }
hx::ObjectPtr< __ASSET__assets_sounds_sounds_go_here_txt_obj > __ASSET__assets_sounds_sounds_go_here_txt_obj::__new(Dynamic __o_size)
{  hx::ObjectPtr< __ASSET__assets_sounds_sounds_go_here_txt_obj > result = new __ASSET__assets_sounds_sounds_go_here_txt_obj();
	result->__construct(__o_size);
	return result;}

Dynamic __ASSET__assets_sounds_sounds_go_here_txt_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< __ASSET__assets_sounds_sounds_go_here_txt_obj > result = new __ASSET__assets_sounds_sounds_go_here_txt_obj();
	result->__construct(inArgs[0]);
	return result;}

::String __ASSET__assets_sounds_sounds_go_here_txt_obj::resourceName;


__ASSET__assets_sounds_sounds_go_here_txt_obj::__ASSET__assets_sounds_sounds_go_here_txt_obj()
{
}

Dynamic __ASSET__assets_sounds_sounds_go_here_txt_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { return resourceName; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic __ASSET__assets_sounds_sounds_go_here_txt_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { resourceName=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void __ASSET__assets_sounds_sounds_go_here_txt_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(__ASSET__assets_sounds_sounds_go_here_txt_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(__ASSET__assets_sounds_sounds_go_here_txt_obj::resourceName,"resourceName");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(__ASSET__assets_sounds_sounds_go_here_txt_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(__ASSET__assets_sounds_sounds_go_here_txt_obj::resourceName,"resourceName");
};

#endif

Class __ASSET__assets_sounds_sounds_go_here_txt_obj::__mClass;

void __ASSET__assets_sounds_sounds_go_here_txt_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("__ASSET__assets_sounds_sounds_go_here_txt"), hx::TCanCast< __ASSET__assets_sounds_sounds_go_here_txt_obj> ,sStaticFields,sMemberFields,
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

void __ASSET__assets_sounds_sounds_go_here_txt_obj::__boot()
{
	resourceName= HX_CSTRING("__ASSET__:file___ASSET__assets_sounds_sounds_go_here_txt");
}

