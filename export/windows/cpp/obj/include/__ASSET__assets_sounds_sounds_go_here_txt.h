#ifndef INCLUDED___ASSET__assets_sounds_sounds_go_here_txt
#define INCLUDED___ASSET__assets_sounds_sounds_go_here_txt

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_legacy/utils/ByteArray.h>
HX_DECLARE_CLASS0(__ASSET__assets_sounds_sounds_go_here_txt)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(openfl,_legacy,utils,ByteArray)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IDataInput)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IDataOutput)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IMemoryRange)


class HXCPP_CLASS_ATTRIBUTES  __ASSET__assets_sounds_sounds_go_here_txt_obj : public ::openfl::_legacy::utils::ByteArray_obj{
	public:
		typedef ::openfl::_legacy::utils::ByteArray_obj super;
		typedef __ASSET__assets_sounds_sounds_go_here_txt_obj OBJ_;
		__ASSET__assets_sounds_sounds_go_here_txt_obj();
		Void __construct(Dynamic __o_size);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< __ASSET__assets_sounds_sounds_go_here_txt_obj > __new(Dynamic __o_size);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~__ASSET__assets_sounds_sounds_go_here_txt_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("__ASSET__assets_sounds_sounds_go_here_txt"); }

		static ::String resourceName;
};


#endif /* INCLUDED___ASSET__assets_sounds_sounds_go_here_txt */ 
