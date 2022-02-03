// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EJsonType : uint8;
struct FJsonObjectField;
class UJsonValue;
class UJsonObject;
struct FHitResult;
struct FQuat;
struct FColor;
struct FLinearColor;
struct FTransform;
struct FRotator;
struct FVector2D;
struct FVector;
class UObject;
#ifdef BLUEPRINTJSON_BlueprintJsonWrapper_generated_h
#error "BlueprintJsonWrapper.generated.h already included, missing '#pragma once' in BlueprintJsonWrapper.h"
#endif
#define BLUEPRINTJSON_BlueprintJsonWrapper_generated_h

#define OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonWrapper_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FJsonObjectField_Statics; \
	static class UScriptStruct* StaticStruct();


template<> BLUEPRINTJSON_API UScriptStruct* StaticStruct<struct FJsonObjectField>();

#define OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonWrapper_h_51_SPARSE_DATA
#define OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonWrapper_h_51_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSwitchValueType); \
	DECLARE_FUNCTION(execIsNull);


#define OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonWrapper_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSwitchValueType); \
	DECLARE_FUNCTION(execIsNull);


#define OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonWrapper_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUJsonValue(); \
	friend struct Z_Construct_UClass_UJsonValue_Statics; \
public: \
	DECLARE_CLASS(UJsonValue, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintJson"), NO_API) \
	DECLARE_SERIALIZER(UJsonValue)


#define OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonWrapper_h_51_INCLASS \
private: \
	static void StaticRegisterNativesUJsonValue(); \
	friend struct Z_Construct_UClass_UJsonValue_Statics; \
public: \
	DECLARE_CLASS(UJsonValue, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintJson"), NO_API) \
	DECLARE_SERIALIZER(UJsonValue)


#define OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonWrapper_h_51_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJsonValue(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJsonValue) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJsonValue); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJsonValue); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJsonValue(UJsonValue&&); \
	NO_API UJsonValue(const UJsonValue&); \
public:


#define OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonWrapper_h_51_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJsonValue(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJsonValue(UJsonValue&&); \
	NO_API UJsonValue(const UJsonValue&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJsonValue); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJsonValue); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJsonValue)


#define OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonWrapper_h_51_PRIVATE_PROPERTY_OFFSET
#define OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonWrapper_h_48_PROLOG
#define OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonWrapper_h_51_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonWrapper_h_51_PRIVATE_PROPERTY_OFFSET \
	OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonWrapper_h_51_SPARSE_DATA \
	OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonWrapper_h_51_RPC_WRAPPERS \
	OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonWrapper_h_51_INCLASS \
	OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonWrapper_h_51_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonWrapper_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonWrapper_h_51_PRIVATE_PROPERTY_OFFSET \
	OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonWrapper_h_51_SPARSE_DATA \
	OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonWrapper_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonWrapper_h_51_INCLASS_NO_PURE_DECLS \
	OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonWrapper_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUEPRINTJSON_API UClass* StaticClass<class UJsonValue>();

#define OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonWrapper_h_137_SPARSE_DATA
#define OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonWrapper_h_137_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAllProperties); \
	DECLARE_FUNCTION(execToJsonValue); \
	DECLARE_FUNCTION(execCreateJsonObject); \
	DECLARE_FUNCTION(execSetHitResultField); \
	DECLARE_FUNCTION(execSetQuatField); \
	DECLARE_FUNCTION(execSetColorField); \
	DECLARE_FUNCTION(execSetLinearColorField); \
	DECLARE_FUNCTION(execSetTransformField); \
	DECLARE_FUNCTION(execSetRotatorField); \
	DECLARE_FUNCTION(execSetVector2DField); \
	DECLARE_FUNCTION(execSetVectorField); \
	DECLARE_FUNCTION(execSetArrayField); \
	DECLARE_FUNCTION(execSetNullField); \
	DECLARE_FUNCTION(execSetField); \
	DECLARE_FUNCTION(execSetBooleanField); \
	DECLARE_FUNCTION(execSetFloatField); \
	DECLARE_FUNCTION(execSetInteger64Field); \
	DECLARE_FUNCTION(execSetIntegerField); \
	DECLARE_FUNCTION(execSetStringField); \
	DECLARE_FUNCTION(execSetUObjectField); \
	DECLARE_FUNCTION(execSetObjectField); \
	DECLARE_FUNCTION(execHasField); \
	DECLARE_FUNCTION(execIsFieldNull); \
	DECLARE_FUNCTION(execGetFieldAsValue); \
	DECLARE_FUNCTION(execGetFieldAsBoolean); \
	DECLARE_FUNCTION(execGetFieldAsObject); \
	DECLARE_FUNCTION(execGetFieldAsArray); \
	DECLARE_FUNCTION(execGetFieldAsFloat); \
	DECLARE_FUNCTION(execGetFieldAsInteger64); \
	DECLARE_FUNCTION(execGetFieldAsInteger); \
	DECLARE_FUNCTION(execGetFieldAsString); \
	DECLARE_FUNCTION(execParseJson);


#define OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonWrapper_h_137_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAllProperties); \
	DECLARE_FUNCTION(execToJsonValue); \
	DECLARE_FUNCTION(execCreateJsonObject); \
	DECLARE_FUNCTION(execSetHitResultField); \
	DECLARE_FUNCTION(execSetQuatField); \
	DECLARE_FUNCTION(execSetColorField); \
	DECLARE_FUNCTION(execSetLinearColorField); \
	DECLARE_FUNCTION(execSetTransformField); \
	DECLARE_FUNCTION(execSetRotatorField); \
	DECLARE_FUNCTION(execSetVector2DField); \
	DECLARE_FUNCTION(execSetVectorField); \
	DECLARE_FUNCTION(execSetArrayField); \
	DECLARE_FUNCTION(execSetNullField); \
	DECLARE_FUNCTION(execSetField); \
	DECLARE_FUNCTION(execSetBooleanField); \
	DECLARE_FUNCTION(execSetFloatField); \
	DECLARE_FUNCTION(execSetInteger64Field); \
	DECLARE_FUNCTION(execSetIntegerField); \
	DECLARE_FUNCTION(execSetStringField); \
	DECLARE_FUNCTION(execSetUObjectField); \
	DECLARE_FUNCTION(execSetObjectField); \
	DECLARE_FUNCTION(execHasField); \
	DECLARE_FUNCTION(execIsFieldNull); \
	DECLARE_FUNCTION(execGetFieldAsValue); \
	DECLARE_FUNCTION(execGetFieldAsBoolean); \
	DECLARE_FUNCTION(execGetFieldAsObject); \
	DECLARE_FUNCTION(execGetFieldAsArray); \
	DECLARE_FUNCTION(execGetFieldAsFloat); \
	DECLARE_FUNCTION(execGetFieldAsInteger64); \
	DECLARE_FUNCTION(execGetFieldAsInteger); \
	DECLARE_FUNCTION(execGetFieldAsString); \
	DECLARE_FUNCTION(execParseJson);


#define OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonWrapper_h_137_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUJsonObject(); \
	friend struct Z_Construct_UClass_UJsonObject_Statics; \
public: \
	DECLARE_CLASS(UJsonObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintJson"), NO_API) \
	DECLARE_SERIALIZER(UJsonObject)


#define OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonWrapper_h_137_INCLASS \
private: \
	static void StaticRegisterNativesUJsonObject(); \
	friend struct Z_Construct_UClass_UJsonObject_Statics; \
public: \
	DECLARE_CLASS(UJsonObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintJson"), NO_API) \
	DECLARE_SERIALIZER(UJsonObject)


#define OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonWrapper_h_137_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJsonObject(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJsonObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJsonObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJsonObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJsonObject(UJsonObject&&); \
	NO_API UJsonObject(const UJsonObject&); \
public:


#define OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonWrapper_h_137_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJsonObject(UJsonObject&&); \
	NO_API UJsonObject(const UJsonObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJsonObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJsonObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UJsonObject)


#define OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonWrapper_h_137_PRIVATE_PROPERTY_OFFSET
#define OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonWrapper_h_134_PROLOG
#define OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonWrapper_h_137_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonWrapper_h_137_PRIVATE_PROPERTY_OFFSET \
	OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonWrapper_h_137_SPARSE_DATA \
	OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonWrapper_h_137_RPC_WRAPPERS \
	OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonWrapper_h_137_INCLASS \
	OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonWrapper_h_137_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonWrapper_h_137_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonWrapper_h_137_PRIVATE_PROPERTY_OFFSET \
	OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonWrapper_h_137_SPARSE_DATA \
	OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonWrapper_h_137_RPC_WRAPPERS_NO_PURE_DECLS \
	OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonWrapper_h_137_INCLASS_NO_PURE_DECLS \
	OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonWrapper_h_137_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUEPRINTJSON_API UClass* StaticClass<class UJsonObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID OneShotProject_Plugins_BlueprintJsonPlugin_Source_BlueprintJson_Public_BlueprintJsonWrapper_h


#define FOREACH_ENUM_EJSONTYPE(op) \
	op(EJsonType::Null) \
	op(EJsonType::String) \
	op(EJsonType::Number) \
	op(EJsonType::Boolean) \
	op(EJsonType::Array) \
	op(EJsonType::Object) 

enum class EJsonType : uint8;
template<> BLUEPRINTJSON_API UEnum* StaticEnum<EJsonType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
