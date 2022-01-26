// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UJsonObject;
class UJsonLoadAsyncFromFileProxy;
class UJsonParseAsyncProxy;
class UJsonSaveAsyncProxy;
#ifdef BLUEPRINTJSON_BlueprintJsonNodes_generated_h
#error "BlueprintJsonNodes.generated.h already included, missing '#pragma once' in BlueprintJsonNodes.h"
#endif
#define BLUEPRINTJSON_BlueprintJsonNodes_generated_h

#define OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_14_DELEGATE \
static inline void FJsonSaveEvent_DelegateWrapper(const FMulticastScriptDelegate& JsonSaveEvent) \
{ \
	JsonSaveEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_13_DELEGATE \
struct _Script_BlueprintJson_eventJsonLoadingEvent_Parms \
{ \
	const UJsonObject* JsonObject; \
}; \
static inline void FJsonLoadingEvent_DelegateWrapper(const FMulticastScriptDelegate& JsonLoadingEvent, const UJsonObject* JsonObject) \
{ \
	_Script_BlueprintJson_eventJsonLoadingEvent_Parms Parms; \
	Parms.JsonObject=JsonObject; \
	JsonLoadingEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_22_SPARSE_DATA
#define OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_22_RPC_WRAPPERS
#define OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUJsonLoadAsyncProxyBase(); \
	friend struct Z_Construct_UClass_UJsonLoadAsyncProxyBase_Statics; \
public: \
	DECLARE_CLASS(UJsonLoadAsyncProxyBase, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/BlueprintJson"), NO_API) \
	DECLARE_SERIALIZER(UJsonLoadAsyncProxyBase)


#define OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUJsonLoadAsyncProxyBase(); \
	friend struct Z_Construct_UClass_UJsonLoadAsyncProxyBase_Statics; \
public: \
	DECLARE_CLASS(UJsonLoadAsyncProxyBase, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/BlueprintJson"), NO_API) \
	DECLARE_SERIALIZER(UJsonLoadAsyncProxyBase)


#define OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJsonLoadAsyncProxyBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJsonLoadAsyncProxyBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJsonLoadAsyncProxyBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJsonLoadAsyncProxyBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJsonLoadAsyncProxyBase(UJsonLoadAsyncProxyBase&&); \
	NO_API UJsonLoadAsyncProxyBase(const UJsonLoadAsyncProxyBase&); \
public:


#define OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJsonLoadAsyncProxyBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJsonLoadAsyncProxyBase(UJsonLoadAsyncProxyBase&&); \
	NO_API UJsonLoadAsyncProxyBase(const UJsonLoadAsyncProxyBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJsonLoadAsyncProxyBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJsonLoadAsyncProxyBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJsonLoadAsyncProxyBase)


#define OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_22_PRIVATE_PROPERTY_OFFSET
#define OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_19_PROLOG
#define OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_22_PRIVATE_PROPERTY_OFFSET \
	OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_22_SPARSE_DATA \
	OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_22_RPC_WRAPPERS \
	OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_22_INCLASS \
	OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_22_PRIVATE_PROPERTY_OFFSET \
	OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_22_SPARSE_DATA \
	OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_22_INCLASS_NO_PURE_DECLS \
	OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUEPRINTJSON_API UClass* StaticClass<class UJsonLoadAsyncProxyBase>();

#define OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_73_SPARSE_DATA
#define OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_73_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadJsonFileAsync);


#define OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadJsonFileAsync);


#define OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_73_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUJsonLoadAsyncFromFileProxy(); \
	friend struct Z_Construct_UClass_UJsonLoadAsyncFromFileProxy_Statics; \
public: \
	DECLARE_CLASS(UJsonLoadAsyncFromFileProxy, UJsonLoadAsyncProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintJson"), NO_API) \
	DECLARE_SERIALIZER(UJsonLoadAsyncFromFileProxy)


#define OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_73_INCLASS \
private: \
	static void StaticRegisterNativesUJsonLoadAsyncFromFileProxy(); \
	friend struct Z_Construct_UClass_UJsonLoadAsyncFromFileProxy_Statics; \
public: \
	DECLARE_CLASS(UJsonLoadAsyncFromFileProxy, UJsonLoadAsyncProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintJson"), NO_API) \
	DECLARE_SERIALIZER(UJsonLoadAsyncFromFileProxy)


#define OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_73_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJsonLoadAsyncFromFileProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJsonLoadAsyncFromFileProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJsonLoadAsyncFromFileProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJsonLoadAsyncFromFileProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJsonLoadAsyncFromFileProxy(UJsonLoadAsyncFromFileProxy&&); \
	NO_API UJsonLoadAsyncFromFileProxy(const UJsonLoadAsyncFromFileProxy&); \
public:


#define OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_73_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJsonLoadAsyncFromFileProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJsonLoadAsyncFromFileProxy(UJsonLoadAsyncFromFileProxy&&); \
	NO_API UJsonLoadAsyncFromFileProxy(const UJsonLoadAsyncFromFileProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJsonLoadAsyncFromFileProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJsonLoadAsyncFromFileProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJsonLoadAsyncFromFileProxy)


#define OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_73_PRIVATE_PROPERTY_OFFSET
#define OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_70_PROLOG
#define OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_73_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_73_PRIVATE_PROPERTY_OFFSET \
	OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_73_SPARSE_DATA \
	OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_73_RPC_WRAPPERS \
	OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_73_INCLASS \
	OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_73_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_73_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_73_PRIVATE_PROPERTY_OFFSET \
	OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_73_SPARSE_DATA \
	OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
	OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_73_INCLASS_NO_PURE_DECLS \
	OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_73_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUEPRINTJSON_API UClass* StaticClass<class UJsonLoadAsyncFromFileProxy>();

#define OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_90_SPARSE_DATA
#define OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_90_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execParseJsonAsync);


#define OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_90_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execParseJsonAsync);


#define OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_90_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUJsonParseAsyncProxy(); \
	friend struct Z_Construct_UClass_UJsonParseAsyncProxy_Statics; \
public: \
	DECLARE_CLASS(UJsonParseAsyncProxy, UJsonLoadAsyncProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintJson"), NO_API) \
	DECLARE_SERIALIZER(UJsonParseAsyncProxy)


#define OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_90_INCLASS \
private: \
	static void StaticRegisterNativesUJsonParseAsyncProxy(); \
	friend struct Z_Construct_UClass_UJsonParseAsyncProxy_Statics; \
public: \
	DECLARE_CLASS(UJsonParseAsyncProxy, UJsonLoadAsyncProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintJson"), NO_API) \
	DECLARE_SERIALIZER(UJsonParseAsyncProxy)


#define OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_90_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJsonParseAsyncProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJsonParseAsyncProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJsonParseAsyncProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJsonParseAsyncProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJsonParseAsyncProxy(UJsonParseAsyncProxy&&); \
	NO_API UJsonParseAsyncProxy(const UJsonParseAsyncProxy&); \
public:


#define OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_90_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJsonParseAsyncProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJsonParseAsyncProxy(UJsonParseAsyncProxy&&); \
	NO_API UJsonParseAsyncProxy(const UJsonParseAsyncProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJsonParseAsyncProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJsonParseAsyncProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJsonParseAsyncProxy)


#define OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_90_PRIVATE_PROPERTY_OFFSET
#define OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_87_PROLOG
#define OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_90_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_90_PRIVATE_PROPERTY_OFFSET \
	OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_90_SPARSE_DATA \
	OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_90_RPC_WRAPPERS \
	OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_90_INCLASS \
	OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_90_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_90_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_90_PRIVATE_PROPERTY_OFFSET \
	OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_90_SPARSE_DATA \
	OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_90_RPC_WRAPPERS_NO_PURE_DECLS \
	OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_90_INCLASS_NO_PURE_DECLS \
	OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_90_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUEPRINTJSON_API UClass* StaticClass<class UJsonParseAsyncProxy>();

#define OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_103_SPARSE_DATA
#define OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_103_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSaveJsonToFileAsync);


#define OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_103_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSaveJsonToFileAsync);


#define OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_103_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUJsonSaveAsyncProxy(); \
	friend struct Z_Construct_UClass_UJsonSaveAsyncProxy_Statics; \
public: \
	DECLARE_CLASS(UJsonSaveAsyncProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintJson"), NO_API) \
	DECLARE_SERIALIZER(UJsonSaveAsyncProxy)


#define OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_103_INCLASS \
private: \
	static void StaticRegisterNativesUJsonSaveAsyncProxy(); \
	friend struct Z_Construct_UClass_UJsonSaveAsyncProxy_Statics; \
public: \
	DECLARE_CLASS(UJsonSaveAsyncProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintJson"), NO_API) \
	DECLARE_SERIALIZER(UJsonSaveAsyncProxy)


#define OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_103_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJsonSaveAsyncProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJsonSaveAsyncProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJsonSaveAsyncProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJsonSaveAsyncProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJsonSaveAsyncProxy(UJsonSaveAsyncProxy&&); \
	NO_API UJsonSaveAsyncProxy(const UJsonSaveAsyncProxy&); \
public:


#define OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_103_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJsonSaveAsyncProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJsonSaveAsyncProxy(UJsonSaveAsyncProxy&&); \
	NO_API UJsonSaveAsyncProxy(const UJsonSaveAsyncProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJsonSaveAsyncProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJsonSaveAsyncProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJsonSaveAsyncProxy)


#define OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_103_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ObjectToSave() { return STRUCT_OFFSET(UJsonSaveAsyncProxy, ObjectToSave); }


#define OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_100_PROLOG
#define OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_103_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_103_PRIVATE_PROPERTY_OFFSET \
	OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_103_SPARSE_DATA \
	OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_103_RPC_WRAPPERS \
	OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_103_INCLASS \
	OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_103_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_103_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_103_PRIVATE_PROPERTY_OFFSET \
	OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_103_SPARSE_DATA \
	OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_103_RPC_WRAPPERS_NO_PURE_DECLS \
	OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_103_INCLASS_NO_PURE_DECLS \
	OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h_103_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUEPRINTJSON_API UClass* StaticClass<class UJsonSaveAsyncProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonNodes_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
