// Generated by Haxe 4.1.5
#ifndef INCLUDED_polymod_fs_IFileSystem
#define INCLUDED_polymod_fs_IFileSystem

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS1(polymod,ModMetadata)
HX_DECLARE_CLASS2(polymod,fs,IFileSystem)

namespace polymod{
namespace fs{


class HXCPP_CLASS_ATTRIBUTES IFileSystem_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		bool (::hx::Object :: *_hx_exists)(::String path); 
		static inline bool exists( ::Dynamic _hx_,::String path) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::polymod::fs::IFileSystem_obj *>(_hx_.mPtr->_hx_getInterface(0x0d05d891)))->_hx_exists)(path);
		}
		bool (::hx::Object :: *_hx_isDirectory)(::String path); 
		static inline bool isDirectory( ::Dynamic _hx_,::String path) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::polymod::fs::IFileSystem_obj *>(_hx_.mPtr->_hx_getInterface(0x0d05d891)))->_hx_isDirectory)(path);
		}
		::Array< ::String > (::hx::Object :: *_hx_readDirectory)(::String path); 
		static inline ::Array< ::String > readDirectory( ::Dynamic _hx_,::String path) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::polymod::fs::IFileSystem_obj *>(_hx_.mPtr->_hx_getInterface(0x0d05d891)))->_hx_readDirectory)(path);
		}
		::Array< ::String > (::hx::Object :: *_hx_readDirectoryRecursive)(::String path); 
		static inline ::Array< ::String > readDirectoryRecursive( ::Dynamic _hx_,::String path) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::polymod::fs::IFileSystem_obj *>(_hx_.mPtr->_hx_getInterface(0x0d05d891)))->_hx_readDirectoryRecursive)(path);
		}
		::String (::hx::Object :: *_hx_getFileContent)(::String path); 
		static inline ::String getFileContent( ::Dynamic _hx_,::String path) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::polymod::fs::IFileSystem_obj *>(_hx_.mPtr->_hx_getInterface(0x0d05d891)))->_hx_getFileContent)(path);
		}
		 ::haxe::io::Bytes (::hx::Object :: *_hx_getFileBytes)(::String path); 
		static inline  ::haxe::io::Bytes getFileBytes( ::Dynamic _hx_,::String path) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::polymod::fs::IFileSystem_obj *>(_hx_.mPtr->_hx_getInterface(0x0d05d891)))->_hx_getFileBytes)(path);
		}
		::Array< ::String > (::hx::Object :: *_hx_scanMods)(); 
		static inline ::Array< ::String > scanMods( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::polymod::fs::IFileSystem_obj *>(_hx_.mPtr->_hx_getInterface(0x0d05d891)))->_hx_scanMods)();
		}
		 ::polymod::ModMetadata (::hx::Object :: *_hx_getMetadata)(::String modId); 
		static inline  ::polymod::ModMetadata getMetadata( ::Dynamic _hx_,::String modId) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::polymod::fs::IFileSystem_obj *>(_hx_.mPtr->_hx_getInterface(0x0d05d891)))->_hx_getMetadata)(modId);
		}
};

} // end namespace polymod
} // end namespace fs

#endif /* INCLUDED_polymod_fs_IFileSystem */ 
