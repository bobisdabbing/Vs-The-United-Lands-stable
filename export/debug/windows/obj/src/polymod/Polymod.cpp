// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_polymod_Framework
#include <polymod/Framework.h>
#endif
#ifndef INCLUDED_polymod_ModMetadata
#include <polymod/ModMetadata.h>
#endif
#ifndef INCLUDED_polymod_Polymod
#include <polymod/Polymod.h>
#endif
#ifndef INCLUDED_polymod_PolymodConfig
#include <polymod/PolymodConfig.h>
#endif
#ifndef INCLUDED_polymod_PolymodError
#include <polymod/PolymodError.h>
#endif
#ifndef INCLUDED_polymod_PolymodErrorType
#include <polymod/PolymodErrorType.h>
#endif
#ifndef INCLUDED_polymod_backends_PolymodAssetLibrary
#include <polymod/backends/PolymodAssetLibrary.h>
#endif
#ifndef INCLUDED_polymod_backends_PolymodAssets
#include <polymod/backends/PolymodAssets.h>
#endif
#ifndef INCLUDED_polymod_format_ParseRules
#include <polymod/format/ParseRules.h>
#endif
#ifndef INCLUDED_polymod_fs_IFileSystem
#include <polymod/fs/IFileSystem.h>
#endif
#ifndef INCLUDED_polymod_fs_SysFileSystem
#include <polymod/fs/SysFileSystem.h>
#endif
#ifndef INCLUDED_polymod_util_SemanticVersion
#include <polymod/util/SemanticVersion.h>
#endif
#ifndef INCLUDED_polymod_util_Util
#include <polymod/util/Util.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_321500f50b2e3bfa_132_init,"polymod.Polymod","init",0x00ecc620,"polymod.Polymod.init","polymod/Polymod.hx",132,0xd80c6d61)
HX_LOCAL_STACK_FRAME(_hx_pos_321500f50b2e3bfa_278_getDefaultIgnoreList,"polymod.Polymod","getDefaultIgnoreList",0xc5278c4b,"polymod.Polymod.getDefaultIgnoreList","polymod/Polymod.hx",278,0xd80c6d61)
HX_LOCAL_STACK_FRAME(_hx_pos_321500f50b2e3bfa_293_scan,"polymod.Polymod","scan",0x0780888d,"polymod.Polymod.scan","polymod/Polymod.hx",293,0xd80c6d61)
HX_LOCAL_STACK_FRAME(_hx_pos_321500f50b2e3bfa_388_error,"polymod.Polymod","error",0x8351eeb8,"polymod.Polymod.error","polymod/Polymod.hx",388,0xd80c6d61)
HX_LOCAL_STACK_FRAME(_hx_pos_321500f50b2e3bfa_396_warning,"polymod.Polymod","warning",0x8e76994c,"polymod.Polymod.warning","polymod/Polymod.hx",396,0xd80c6d61)
HX_LOCAL_STACK_FRAME(_hx_pos_321500f50b2e3bfa_404_notice,"polymod.Polymod","notice",0x44af4728,"polymod.Polymod.notice","polymod/Polymod.hx",404,0xd80c6d61)
HX_LOCAL_STACK_FRAME(_hx_pos_321500f50b2e3bfa_411_debug,"polymod.Polymod","debug",0xe7477543,"polymod.Polymod.debug","polymod/Polymod.hx",411,0xd80c6d61)
HX_LOCAL_STACK_FRAME(_hx_pos_321500f50b2e3bfa_426_listModFiles,"polymod.Polymod","listModFiles",0x718ff9e3,"polymod.Polymod.listModFiles","polymod/Polymod.hx",426,0xd80c6d61)
HX_LOCAL_STACK_FRAME(_hx_pos_321500f50b2e3bfa_436_initModPack,"polymod.Polymod","initModPack",0x0bf5087b,"polymod.Polymod.initModPack","polymod/Polymod.hx",436,0xd80c6d61)
HX_LOCAL_STACK_FRAME(_hx_pos_321500f50b2e3bfa_451_getModPack,"polymod.Polymod","getModPack",0xa5a25fd5,"polymod.Polymod.getModPack","polymod/Polymod.hx",451,0xd80c6d61)
HX_LOCAL_STACK_FRAME(_hx_pos_321500f50b2e3bfa_123_boot,"polymod.Polymod","boot",0xfc4d0f42,"polymod.Polymod.boot","polymod/Polymod.hx",123,0xd80c6d61)
HX_LOCAL_STACK_FRAME(_hx_pos_321500f50b2e3bfa_124_boot,"polymod.Polymod","boot",0xfc4d0f42,"polymod.Polymod.boot","polymod/Polymod.hx",124,0xd80c6d61)
namespace polymod{

void Polymod_obj::__construct() { }

Dynamic Polymod_obj::__CreateEmpty() { return new Polymod_obj; }

void *Polymod_obj::_hx_vtable = 0;

Dynamic Polymod_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Polymod_obj > _hx_result = new Polymod_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Polymod_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4937d120;
}

 ::Dynamic Polymod_obj::onError;

 ::polymod::backends::PolymodAssetLibrary Polymod_obj::library;

::Array< ::Dynamic> Polymod_obj::init( ::Dynamic params){
            	HX_GC_STACKFRAME(&_hx_pos_321500f50b2e3bfa_132_init)
HXLINE( 133)		::polymod::Polymod_obj::onError = params->__Field(HX_("errorCallback",ad,29,bf,d7),::hx::paccDynamic);
HXLINE( 135)		::String modRoot = ( (::String)(params->__Field(HX_("modRoot",04,ba,da,e0),::hx::paccDynamic)) );
HXLINE( 136)		::Array< ::String > dirs = ( (::Array< ::String >)(params->__Field(HX_("dirs",86,66,69,42),::hx::paccDynamic)) );
HXLINE( 137)		 ::polymod::util::SemanticVersion apiVersion = null();
HXLINE( 138)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 140)			::String apiStr = ( (::String)(params->__Field(HX_("apiVersion",9e,39,c9,e5),::hx::paccDynamic)) );
HXLINE( 141)			bool _hx_tmp;
HXDLIN( 141)			if (::hx::IsNotNull( apiStr )) {
HXLINE( 141)				_hx_tmp = (apiStr == HX_("",00,00,00,00));
            			}
            			else {
HXLINE( 141)				_hx_tmp = true;
            			}
HXDLIN( 141)			if (_hx_tmp) {
HXLINE( 143)				apiStr = HX_("*.*.*",a2,34,5c,4d);
            			}
HXLINE( 145)			apiVersion = ::polymod::util::SemanticVersion_obj::fromString(apiStr);
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE(   1)				{
HXLINE(   1)					null();
            				}
HXDLIN(   1)				 ::Dynamic msg = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 149)				::polymod::Polymod_obj::error(HX_("parse_api_version",e7,a5,59,ab),((HX_("Error parsing api version: (",d8,67,2c,ab) + ::Std_obj::string(msg)) + HX_(")",29,00,00,00)),HX_("init",10,3b,bb,45));
HXLINE( 150)				return ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 153)		::Array< ::Dynamic> modMeta = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 154)		::Array< ::Dynamic> modVers = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 155)		::Dynamic fileSystem;
HXDLIN( 155)		if (::hx::IsNotNull( params->__Field(HX_("customFilesystem",7c,dd,ec,23),::hx::paccDynamic) )) {
HXLINE( 155)			fileSystem = ::Type_obj::createInstance(params->__Field(HX_("customFilesystem",7c,dd,ec,23),::hx::paccDynamic),::cpp::VirtualArray_obj::__new(0));
            		}
            		else {
HXLINE( 155)			fileSystem =  ::polymod::fs::SysFileSystem_obj::__alloc( HX_CTX ,( (::String)(params->__Field(HX_("modRoot",04,ba,da,e0),::hx::paccDynamic)) ));
            		}
HXLINE( 170)		if (::hx::IsNotNull( params->__Field(HX_("modVersions",3d,b3,b4,55),::hx::paccDynamic) )) {
HXLINE( 172)			int _g = 0;
HXDLIN( 172)			::Array< ::String > _g1 = ( (::Array< ::String >)(params->__Field(HX_("modVersions",3d,b3,b4,55),::hx::paccDynamic)) );
HXDLIN( 172)			while((_g < _g1->length)){
HXLINE( 172)				::String str = _g1->__get(_g);
HXDLIN( 172)				_g = (_g + 1);
HXLINE( 174)				 ::polymod::util::SemanticVersion semVer = null();
HXLINE( 175)				try {
            					HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 177)					semVer = ::polymod::util::SemanticVersion_obj::fromString(str);
            				} catch( ::Dynamic _hx_e) {
            					if (_hx_e.IsClass<  ::Dynamic >() ){
            						HX_STACK_BEGIN_CATCH
            						 ::Dynamic _g = _hx_e;
HXLINE(   1)						{
HXLINE(   1)							null();
            						}
HXDLIN(   1)						 ::Dynamic msg = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 180)						{
HXLINE( 181)							::polymod::Polymod_obj::error(HX_("param_mod_version",69,37,99,54),(HX_("There was an error with one of the mod version patterns you provided: ",a5,c6,14,8b) + ::Std_obj::string(msg)),HX_("init",10,3b,bb,45));
HXLINE( 182)							semVer = ::polymod::util::SemanticVersion_obj::fromString(HX_("*.*.*",a2,34,5c,4d));
            						}
            					}
            					else {
            						HX_STACK_DO_THROW(_hx_e);
            					}
            				}
HXLINE( 184)				modVers->push(semVer);
            			}
            		}
HXLINE( 188)		{
HXLINE( 188)			int _g = 0;
HXDLIN( 188)			int _g1 = dirs->length;
HXDLIN( 188)			while((_g < _g1)){
HXLINE( 188)				_g = (_g + 1);
HXDLIN( 188)				int i = (_g - 1);
HXLINE( 190)				if (::hx::IsNotNull( dirs->__get(i) )) {
HXLINE( 192)					::String origDir = dirs->__get(i);
HXLINE( 193)					dirs[i] = ::polymod::util::Util_obj::pathJoin(modRoot,dirs->__get(i));
HXLINE( 194)					 ::polymod::ModMetadata meta = ::polymod::fs::IFileSystem_obj::getMetadata(fileSystem,dirs->__get(i));
HXLINE( 196)					if (::hx::IsNotNull( meta )) {
HXLINE( 198)						meta->id = origDir;
HXLINE( 199)						int apiScore = meta->apiVersion->checkCompatibility(apiVersion);
HXLINE( 200)						if ((apiScore < 3)) {
HXLINE( 203)							::String _hx_tmp = ((((HX_("Mod \"",24,57,85,9f) + origDir) + HX_("\" was built for incompatible API version ",c7,84,bf,95)) + meta->apiVersion->toString()) + HX_(", current API version is ",6d,fd,69,3f));
HXLINE( 202)							::polymod::Polymod_obj::error(HX_("version_conflict_api",b4,79,7a,d1),(_hx_tmp + ( (::String)(params->__Field(HX_("apiVersion",9e,39,c9,e5),::hx::paccDynamic)) ).toString()),HX_("init",10,3b,bb,45));
            						}
            						else {
HXLINE( 213)							if ((apiVersion->major == 0)) {
HXLINE( 216)								if ((apiVersion->minor != meta->apiVersion->minor)) {
HXLINE( 219)									::String _hx_tmp = (((((HX_("Modding API is in pre-release, some things might have changed!\n",23,df,36,3a) + HX_("Mod \"",24,57,85,9f)) + origDir) + HX_("\" was built for API version ",5c,9c,7b,4e)) + meta->apiVersion->toString()) + HX_(", current API version is ",6d,fd,69,3f));
HXLINE( 218)									::polymod::Polymod_obj::warning(HX_("version_prerelease_api",26,70,a7,43),(_hx_tmp + apiVersion->toString()),HX_("init",10,3b,bb,45));
            								}
            							}
            						}
HXLINE( 230)						 ::polymod::util::SemanticVersion modVer;
HXDLIN( 230)						if ((modVers->length > i)) {
HXLINE( 230)							modVer = modVers->__get(i).StaticCast<  ::polymod::util::SemanticVersion >();
            						}
            						else {
HXLINE( 230)							modVer = null();
            						}
HXLINE( 231)						if (::hx::IsNotNull( modVer )) {
HXLINE( 233)							int score = modVer->checkCompatibility(meta->modVersion);
HXLINE( 234)							if ((score < 3)) {
HXLINE( 237)								::String _hx_tmp = ((HX_("Mod pack wants version ",0e,47,1b,3b) + modVer->toString()) + HX_(" of mod(",af,f2,b6,ab));
HXDLIN( 237)								::String _hx_tmp1 = ((_hx_tmp + meta->id) + HX_("), found incompatible version ",74,75,29,24));
HXLINE( 236)								::polymod::Polymod_obj::error(HX_("version_conflict_mod",dc,93,83,d1),((_hx_tmp1 + meta->modVersion->toString()) + HX_(" instead",62,18,ec,b3)),HX_("init",10,3b,bb,45));
            							}
            						}
HXLINE( 247)						modMeta->push(meta);
            					}
            				}
            			}
            		}
HXLINE( 252)		::polymod::Polymod_obj::library = ::polymod::backends::PolymodAssets_obj::init( ::Dynamic(::hx::Anon_obj::Create(8)
            			->setFixed(0,HX_("customBackend",63,24,96,a5), ::Dynamic(params->__Field(HX_("customBackend",63,24,96,a5),::hx::paccDynamic)))
            			->setFixed(1,HX_("fileSystem",8b,de,66,d3),fileSystem)
            			->setFixed(2,HX_("parseRules",c4,aa,37,1b), ::Dynamic(params->__Field(HX_("parseRules",c4,aa,37,1b),::hx::paccDynamic)))
            			->setFixed(3,HX_("extensionMap",5d,28,7a,23), ::Dynamic(params->__Field(HX_("extensionMap",5d,28,7a,23),::hx::paccDynamic)))
            			->setFixed(4,HX_("frameworkParams",64,76,eb,26), ::Dynamic(params->__Field(HX_("frameworkParams",64,76,eb,26),::hx::paccDynamic)))
            			->setFixed(5,HX_("dirs",86,66,69,42),dirs)
            			->setFixed(6,HX_("framework",7e,94,a4,51), ::Dynamic(params->__Field(HX_("framework",7e,94,a4,51),::hx::paccDynamic)))
            			->setFixed(7,HX_("ignoredFiles",05,36,92,57), ::Dynamic(params->__Field(HX_("ignoredFiles",05,36,92,57),::hx::paccDynamic)))));
HXLINE( 263)		if (::hx::IsNull( ::polymod::Polymod_obj::library )) {
HXLINE( 265)			return null();
            		}
HXLINE( 268)		if (::polymod::backends::PolymodAssets_obj::exists(::polymod::PolymodConfig_obj::get_modPackFile())) {
HXLINE( 270)			::polymod::Polymod_obj::initModPack(params);
            		}
HXLINE( 273)		return modMeta;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Polymod_obj,init,return )

::Array< ::String > Polymod_obj::getDefaultIgnoreList(){
            	HX_STACKFRAME(&_hx_pos_321500f50b2e3bfa_278_getDefaultIgnoreList)
HXDLIN( 278)		::Array< ::String > _hx_tmp = ::polymod::PolymodConfig_obj::get_modIgnoreFiles();
HXLINE( 279)		::String _hx_tmp1 = ::polymod::PolymodConfig_obj::get_modMetadataFile();
HXLINE( 280)		::String _hx_tmp2 = ::polymod::PolymodConfig_obj::get_modPackFile();
HXLINE( 278)		return _hx_tmp->concat(::Array_obj< ::String >::__new(3)->init(0,_hx_tmp1)->init(1,_hx_tmp2)->init(2,::polymod::PolymodConfig_obj::get_modIconFile()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Polymod_obj,getDefaultIgnoreList,return )

::Array< ::Dynamic> Polymod_obj::scan(::String modRoot,::String __o_apiVersionStr, ::Dynamic errorCallback,::Dynamic fileSystem){
            		::String apiVersionStr = __o_apiVersionStr;
            		if (::hx::IsNull(__o_apiVersionStr)) apiVersionStr = HX_("*.*.*",a2,34,5c,4d);
            	HX_GC_STACKFRAME(&_hx_pos_321500f50b2e3bfa_293_scan)
HXLINE( 294)		::polymod::Polymod_obj::onError = errorCallback;
HXLINE( 295)		 ::polymod::util::SemanticVersion apiVersion = null();
HXLINE( 296)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 298)			apiVersion = ::polymod::util::SemanticVersion_obj::fromString(apiVersionStr);
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE(   1)				{
HXLINE(   1)					null();
            				}
HXDLIN(   1)				 ::Dynamic msg = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 302)				::polymod::Polymod_obj::error(HX_("parse_api_version",e7,a5,59,ab),((HX_("Error parsing api version: (",d8,67,2c,ab) + ::Std_obj::string(msg)) + HX_(")",29,00,00,00)),HX_("scan",7d,fd,4e,4c));
HXLINE( 303)				return ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 306)		if (::hx::IsNull( fileSystem )) {
HXLINE( 309)			fileSystem =  ::polymod::fs::SysFileSystem_obj::__alloc( HX_CTX ,modRoot);
            		}
HXLINE( 317)		::Array< ::Dynamic> modMeta = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 319)		bool _hx_tmp;
HXDLIN( 319)		if (::polymod::fs::IFileSystem_obj::exists(fileSystem,modRoot)) {
HXLINE( 319)			_hx_tmp = !(::polymod::fs::IFileSystem_obj::isDirectory(fileSystem,modRoot));
            		}
            		else {
HXLINE( 319)			_hx_tmp = true;
            		}
HXDLIN( 319)		if (_hx_tmp) {
HXLINE( 321)			return modMeta;
            		}
HXLINE( 323)		::Array< ::String > dirs = ::polymod::fs::IFileSystem_obj::readDirectory(fileSystem,modRoot);
HXLINE( 324)		int l = dirs->length;
HXLINE( 325)		{
HXLINE( 325)			int _g = 0;
HXDLIN( 325)			int _g1 = l;
HXDLIN( 325)			while((_g < _g1)){
HXLINE( 325)				_g = (_g + 1);
HXDLIN( 325)				int i = (_g - 1);
HXLINE( 327)				int j = ((l - i) - 1);
HXLINE( 328)				::String dir = dirs->__get(j);
HXLINE( 329)				::String testDir = ((modRoot + HX_("/",2f,00,00,00)) + dir);
HXLINE( 330)				bool _hx_tmp;
HXDLIN( 330)				if (::polymod::fs::IFileSystem_obj::isDirectory(fileSystem,testDir)) {
HXLINE( 330)					_hx_tmp = !(::polymod::fs::IFileSystem_obj::exists(fileSystem,testDir));
            				}
            				else {
HXLINE( 330)					_hx_tmp = true;
            				}
HXDLIN( 330)				if (_hx_tmp) {
HXLINE( 332)					dirs->removeRange(j,1);
            				}
            			}
            		}
HXLINE( 336)		{
HXLINE( 336)			int _g2 = 0;
HXDLIN( 336)			int _g3 = dirs->length;
HXDLIN( 336)			while((_g2 < _g3)){
HXLINE( 336)				_g2 = (_g2 + 1);
HXDLIN( 336)				int i = (_g2 - 1);
HXLINE( 338)				if (::hx::IsNotNull( dirs->__get(i) )) {
HXLINE( 340)					::String origDir = dirs->__get(i);
HXLINE( 341)					dirs[i] = ((modRoot + HX_("/",2f,00,00,00)) + dirs->__get(i));
HXLINE( 342)					 ::polymod::ModMetadata meta = ::polymod::fs::IFileSystem_obj::getMetadata(fileSystem,dirs->__get(i));
HXLINE( 344)					if (::hx::IsNotNull( meta )) {
HXLINE( 346)						meta->id = origDir;
HXLINE( 347)						int apiScore = meta->apiVersion->checkCompatibility(apiVersion);
HXLINE( 348)						if ((apiScore < 3)) {
HXLINE( 351)							::String _hx_tmp = ((((HX_("Mod \"",24,57,85,9f) + origDir) + HX_("\" was built for incompatible API version ",c7,84,bf,95)) + meta->apiVersion->toString()) + HX_(", current API version is ",6d,fd,69,3f));
HXLINE( 350)							::polymod::Polymod_obj::error(HX_("version_conflict_api",b4,79,7a,d1),(_hx_tmp + apiVersion->toString()),HX_("scan",7d,fd,4e,4c));
            						}
            						else {
HXLINE( 361)							if ((apiVersion->major == 0)) {
HXLINE( 364)								if ((apiVersion->minor != meta->apiVersion->minor)) {
HXLINE( 367)									::String _hx_tmp = (((((HX_("Modding API is in pre-release, some things might have changed!\n",23,df,36,3a) + HX_("Mod \"",24,57,85,9f)) + origDir) + HX_("\" was built for API version ",5c,9c,7b,4e)) + meta->apiVersion->toString()) + HX_(", current API version is ",6d,fd,69,3f));
HXLINE( 366)									::polymod::Polymod_obj::warning(HX_("version_prerelease_api",26,70,a7,43),(_hx_tmp + apiVersion->toString()),HX_("scan",7d,fd,4e,4c));
            								}
            							}
            						}
HXLINE( 378)						modMeta->push(meta);
            					}
            				}
            			}
            		}
HXLINE( 383)		return modMeta;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Polymod_obj,scan,return )

void Polymod_obj::error(::String code,::String message,::String __o_origin){
            		::String origin = __o_origin;
            		if (::hx::IsNull(__o_origin)) origin = HX_("unknown",8a,23,7b,e1);
            	HX_GC_STACKFRAME(&_hx_pos_321500f50b2e3bfa_388_error)
HXDLIN( 388)		if (::hx::IsNotNull( ::polymod::Polymod_obj::onError )) {
HXLINE( 390)			::polymod::Polymod_obj::onError( ::polymod::PolymodError_obj::__alloc( HX_CTX ,::polymod::PolymodErrorType_obj::ERROR_dyn(),code,message,origin));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Polymod_obj,error,(void))

void Polymod_obj::warning(::String code,::String message,::String __o_origin){
            		::String origin = __o_origin;
            		if (::hx::IsNull(__o_origin)) origin = HX_("unknown",8a,23,7b,e1);
            	HX_GC_STACKFRAME(&_hx_pos_321500f50b2e3bfa_396_warning)
HXDLIN( 396)		if (::hx::IsNotNull( ::polymod::Polymod_obj::onError )) {
HXLINE( 398)			::polymod::Polymod_obj::onError( ::polymod::PolymodError_obj::__alloc( HX_CTX ,::polymod::PolymodErrorType_obj::WARNING_dyn(),code,message,origin));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Polymod_obj,warning,(void))

void Polymod_obj::notice(::String code,::String message,::String __o_origin){
            		::String origin = __o_origin;
            		if (::hx::IsNull(__o_origin)) origin = HX_("unknown",8a,23,7b,e1);
            	HX_GC_STACKFRAME(&_hx_pos_321500f50b2e3bfa_404_notice)
HXDLIN( 404)		if (::hx::IsNotNull( ::polymod::Polymod_obj::onError )) {
HXLINE( 406)			::polymod::Polymod_obj::onError( ::polymod::PolymodError_obj::__alloc( HX_CTX ,::polymod::PolymodErrorType_obj::NOTICE_dyn(),code,message,origin));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Polymod_obj,notice,(void))

void Polymod_obj::debug(::String message, ::Dynamic posInfo){
            	HX_STACKFRAME(&_hx_pos_321500f50b2e3bfa_411_debug)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Polymod_obj,debug,(void))

::Array< ::String > Polymod_obj::listModFiles(::String type){
            	HX_STACKFRAME(&_hx_pos_321500f50b2e3bfa_426_listModFiles)
HXLINE( 427)		if (::hx::IsNotNull( ::polymod::Polymod_obj::library )) {
HXLINE( 429)			return ::polymod::Polymod_obj::library->listModFiles(type);
            		}
HXLINE( 431)		return ::Array_obj< ::String >::__new(0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Polymod_obj,listModFiles,return )

void Polymod_obj::initModPack( ::Dynamic params){
            	HX_STACKFRAME(&_hx_pos_321500f50b2e3bfa_436_initModPack)
HXLINE( 437)		::String polymodpack = ::polymod::backends::PolymodAssets_obj::getText(::polymod::PolymodConfig_obj::get_modPackFile());
HXLINE( 438)		if (::hx::IsNotNull( polymodpack )) {
HXLINE( 440)			 ::Dynamic data = ::polymod::Polymod_obj::getModPack(polymodpack);
HXLINE( 441)			::Array< ::String > mods = ( (::Array< ::String >)(data->__Field(HX_("mods",71,d3,60,48),::hx::paccDynamic)) );
HXLINE( 442)			::Array< ::String > vers = ( (::Array< ::String >)(data->__Field(HX_("versions",5b,4e,b8,d6),::hx::paccDynamic)) );
HXLINE( 444)			params->__SetField(HX_("dirs",86,66,69,42),mods,::hx::paccDynamic);
HXLINE( 445)			params->__SetField(HX_("modVersions",3d,b3,b4,55),vers,::hx::paccDynamic);
HXLINE( 446)			::polymod::Polymod_obj::init(params);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Polymod_obj,initModPack,(void))

 ::Dynamic Polymod_obj::getModPack(::String text){
            	HX_STACKFRAME(&_hx_pos_321500f50b2e3bfa_451_getModPack)
HXLINE( 452)		if (::hx::IsNotNull( text )) {
HXLINE( 454)			::Array< ::String > mods = text.split(HX_(",",2c,00,00,00));
HXLINE( 455)			bool _hx_tmp;
HXDLIN( 455)			if (::hx::IsNotNull( mods )) {
HXLINE( 455)				_hx_tmp = (mods->length == 0);
            			}
            			else {
HXLINE( 455)				_hx_tmp = true;
            			}
HXDLIN( 455)			if (_hx_tmp) {
HXLINE( 457)				return null();
            			}
HXLINE( 459)			::Array< ::String > vers = ::Array_obj< ::String >::__new(0);
HXLINE( 460)			{
HXLINE( 460)				int _g = 0;
HXDLIN( 460)				int _g1 = mods->length;
HXDLIN( 460)				while((_g < _g1)){
HXLINE( 460)					_g = (_g + 1);
HXDLIN( 460)					int i = (_g - 1);
HXLINE( 462)					vers[i] = HX_("*.*.*",a2,34,5c,4d);
HXLINE( 463)					if ((mods->__get(i).indexOf(HX_(":",3a,00,00,00),null()) != -1)) {
HXLINE( 465)						::Array< ::String > arr = mods->__get(i).split(HX_(":",3a,00,00,00));
HXLINE( 466)						bool _hx_tmp;
HXDLIN( 466)						if (::hx::IsNotNull( arr )) {
HXLINE( 466)							_hx_tmp = (arr->length == 2);
            						}
            						else {
HXLINE( 466)							_hx_tmp = false;
            						}
HXDLIN( 466)						if (_hx_tmp) {
HXLINE( 468)							mods[i] = arr->__get(0);
HXLINE( 469)							vers[i] = arr->__get(1);
            						}
            					}
            				}
            			}
HXLINE( 473)			return  ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("versions",5b,4e,b8,d6),vers)
            				->setFixed(1,HX_("mods",71,d3,60,48),mods));
            		}
HXLINE( 475)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Polymod_obj,getModPack,return )


Polymod_obj::Polymod_obj()
{
}

bool Polymod_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"scan") ) { outValue = scan_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"error") ) { outValue = error_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"debug") ) { outValue = debug_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"notice") ) { outValue = notice_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onError") ) { outValue = ( onError ); return true; }
		if (HX_FIELD_EQ(inName,"library") ) { outValue = ( library ); return true; }
		if (HX_FIELD_EQ(inName,"warning") ) { outValue = warning_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getModPack") ) { outValue = getModPack_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initModPack") ) { outValue = initModPack_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"listModFiles") ) { outValue = listModFiles_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getDefaultIgnoreList") ) { outValue = getDefaultIgnoreList_dyn(); return true; }
	}
	return false;
}

bool Polymod_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"onError") ) { onError=ioValue.Cast<  ::Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"library") ) { library=ioValue.Cast<  ::polymod::backends::PolymodAssetLibrary >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Polymod_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Polymod_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Polymod_obj::onError,HX_("onError",29,6a,67,09)},
	{::hx::fsObject /*  ::polymod::backends::PolymodAssetLibrary */ ,(void *) &Polymod_obj::library,HX_("library",fb,26,70,3f)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Polymod_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Polymod_obj::onError,"onError");
	HX_MARK_MEMBER_NAME(Polymod_obj::library,"library");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Polymod_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Polymod_obj::onError,"onError");
	HX_VISIT_MEMBER_NAME(Polymod_obj::library,"library");
};

#endif

::hx::Class Polymod_obj::__mClass;

static ::String Polymod_obj_sStaticFields[] = {
	HX_("onError",29,6a,67,09),
	HX_("library",fb,26,70,3f),
	HX_("init",10,3b,bb,45),
	HX_("getDefaultIgnoreList",3b,e1,b2,45),
	HX_("scan",7d,fd,4e,4c),
	HX_("error",c8,cb,29,73),
	HX_("warning",5c,da,cb,09),
	HX_("notice",18,d8,b8,31),
	HX_("debug",53,52,1f,d7),
	HX_("listModFiles",d3,de,44,5a),
	HX_("initModPack",8b,11,e8,97),
	HX_("getModPack",c5,28,df,2e),
	::String(null())
};

void Polymod_obj::__register()
{
	Polymod_obj _hx_dummy;
	Polymod_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("polymod.Polymod",5e,af,2e,e4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Polymod_obj::__GetStatic;
	__mClass->mSetStaticField = &Polymod_obj::__SetStatic;
	__mClass->mMarkFunc = Polymod_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Polymod_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Polymod_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Polymod_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Polymod_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Polymod_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Polymod_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_321500f50b2e3bfa_123_boot)
HXDLIN( 123)		onError = null();
            	}
{
            	HX_STACKFRAME(&_hx_pos_321500f50b2e3bfa_124_boot)
HXDLIN( 124)		library = null();
            	}
}

} // end namespace polymod
