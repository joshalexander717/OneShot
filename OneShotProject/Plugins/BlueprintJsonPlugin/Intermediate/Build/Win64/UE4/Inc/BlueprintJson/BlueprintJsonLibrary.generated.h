// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
class UJsonValue;
struct FQuat;
struct FTransform;
struct FRotator;
struct FColor;
struct FLinearColor;
struct FVector2D;
struct FVector;
class UJsonObject;
class UObject;
#ifdef BLUEPRINTJSON_BlueprintJsonLibrary_generated_h
#error "BlueprintJsonLibrary.generated.h already included, missing '#pragma once' in BlueprintJsonLibrary.h"
#endif
#define BLUEPRINTJSON_BlueprintJsonLibrary_generated_h

#define HostProject_Plugins_BlueprintJson_Source_BlueprintJson_Public_BlueprintJsonLibrary_h_20_SPARSE_DATA
#define HostProject_Plugins_BlueprintJson_Source_BlueprintJson_Public_BlueprintJsonLibrary_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execJsonValue_HitResult); \
	DECLARE_FUNCTION(execJsonValue_Quat); \
	DECLARE_FUNCTION(execJsonValue_Transform); \
	DECLARE_FUNCTION(execJsonValue_Rotator); \
	DECLARE_FUNCTION(execJsonValue_Color); \
	DECLARE_FUNCTION(execJsonValue_LinearColor); \
	DECLARE_FUNCTION(execJsonValue_Vector2D); \
	DECLARE_FUNCTION(execJsonValue_Vector); \
	DECLARE_FUNCTION(execJsonValue_JsonObject); \
	DECLARE_FUNCTION(execJsonValue_Boolean); \
	DECLARE_FUNCTION(execJsonValue_Name); \
	DECLARE_FUNCTION(execJsonValue_Text); \
	DECLARE_FUNCTION(execJsonValue_String); \
	DECLARE_FUNCTION(execJsonValue_Float); \
	DECLARE_FUNCTION(execJsonValue_Int64); \
	DECLARE_FUNCTION(execJsonValue_Bool); \
	DECLARE_FUNCTION(execStringifyJsonObject); \
	DECLARE_FUNCTION(execLoadJsonFile); \
	DECLARE_FUNCTION(execJsonValue_ToObject); \
	DECLARE_FUNCTION(execJsonValue_ToArray); \
	DECLARE_FUNCTION(execJsonValue_ToTransform); \
	DECLARE_FUNCTION(execJsonValue_ToRotator); \
	DECLARE_FUNCTION(execJsonValue_ToVector); \
	DECLARE_FUNCTION(execJsonValue_ToInteger64); \
	DECLARE_FUNCTION(execJsonValue_ToFloat); \
	DECLARE_FUNCTION(execJsonValue_ToBool); \
	DECLARE_FUNCTION(execJsonValue_ToInteger); \
	DECLARE_FUNCTION(execJsonValue_ToString);


#define HostProject_Plugins_BlueprintJson_Source_BlueprintJson_Public_BlueprintJsonLibrary_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execJsonValue_HitResult); \
	DECLARE_FUNCTION(execJsonValue_Quat); \
	DECLARE_FUNCTION(execJsonValue_Transform); \
	DECLARE_FUNCTION(execJsonValue_Rotator); \
	DECLARE_FUNCTION(execJsonValue_Color); \
	DECLARE_FUNCTION(execJsonValue_LinearColor); \
	DECLARE_FUNCTION(execJsonValue_Vector2D); \
	DECLARE_FUNCTION(execJsonValue_Vector); \
	DECLARE_FUNCTION(execJsonValue_JsonObject); \
	DECLARE_FUNCTION(execJsonValue_Boolean); \
	DECLARE_FUNCTION(execJsonValue_Name); \
	DECLARE_FUNCTION(execJsonValue_Text); \
	DECLARE_FUNCTION(execJsonValue_String); \
	DECLARE_FUNCTION(execJsonValue_Float); \
	DECLARE_FUNCTION(execJsonValue_Int64); \
	DECLARE_FUNCTION(execJsonValue_Bool); \
	DECLARE_FUNCTION(execStringifyJsonObject); \
	DECLARE_FUNCTION(execLoadJsonFile); \
	DECLARE_FUNCTION(execJsonValue_ToObject); \
	DECLARE_FUNCTION(execJsonValue_ToArray); \
	DECLARE_FUNCTION(execJsonValue_ToTransform); \
	DECLARE_FUNCTION(execJsonValue_ToRotator); \
	DECLARE_FUNCTION(execJsonValue_ToVector); \
	DECLARE_FUNCTION(execJsonValue_ToInteger64); \
	DECLARE_FUNCTION(execJsonValue_ToFloat); \
	DECLARE_FUNCTION(execJsonValue_ToBool); \
	DECLARE_FUNCTION(execJsonValue_ToInteger); \
	DECLARE_FUNCTION(execJsonValue_ToString);


#define HostProject_Plugins_BlueprintJson_Source_BlueprintJson_Public_BlueprintJsonLibrary_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUJsonLibrary(); \
	friend struct Z_Construct_UClass_UJsonLibrary_Statics; \
public: \
	DECLARE_CLASS(UJsonLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintJson"), NO_API) \
	DECLARE_SERIALIZER(UJsonLibrary)


#define HostProject_Plugins_BlueprintJson_Source_BlueprintJson_Public_BlueprintJsonLibrary_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUJsonLibrary(); \
	friend struct Z_Construct_UClass_UJsonLibrary_Statics; \
public: \
	DECLARE_CLASS(UJsonLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintJson"), NO_API) \
	DECLARE_SERIALIZER(UJsonLibrary)


#define HostProject_Plugins_BlueprintJson_Source_BlueprintJson_Public_BlueprintJsonLibrary_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJsonLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJsonLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJsonLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJsonLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJsonLibrary(UJsonLibrary&&); \
	NO_API UJsonLibrary(const UJsonLibrary&); \
public:


#define HostProject_Plugins_BlueprintJson_Source_BlueprintJson_Public_BlueprintJsonLibrary_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJsonLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJsonLibrary(UJsonLibrary&&); \
	NO_API UJsonLibrary(const UJsonLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJsonLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJsonLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJsonLibrary)


#define HostProject_Plugins_BlueprintJson_Source_BlueprintJson_Public_BlueprintJsonLibrary_h_20_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_BlueprintJson_Source_BlueprintJson_Public_BlueprintJsonLibrary_h_17_PROLOG
#define HostProject_Plugins_BlueprintJson_Source_BlueprintJson_Public_BlueprintJsonLibrary_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_BlueprintJson_Source_BlueprintJson_Public_BlueprintJsonLibrary_h_20_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_BlueprintJson_Source_BlueprintJson_Public_BlueprintJsonLibrary_h_20_SPARSE_DATA \
	HostProject_Plugins_BlueprintJson_Source_BlueprintJson_Public_BlueprintJsonLibrary_h_20_RPC_WRAPPERS \
	HostProject_Plugins_BlueprintJson_Source_BlueprintJson_Public_BlueprintJsonLibrary_h_20_INCLASS \
	HostProject_Plugins_BlueprintJson_Source_BlueprintJson_Public_BlueprintJsonLibrary_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_BlueprintJson_Source_BlueprintJson_Public_BlueprintJsonLibrary_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_BlueprintJson_Source_BlueprintJson_Public_BlueprintJsonLibrary_h_20_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_BlueprintJson_Source_BlueprintJson_Public_BlueprintJsonLibrary_h_20_SPARSE_DATA \
	HostProject_Plugins_BlueprintJson_Source_BlueprintJson_Public_BlueprintJsonLibrary_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_BlueprintJson_Source_BlueprintJson_Public_BlueprintJsonLibrary_h_20_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_BlueprintJson_Source_BlueprintJson_Public_BlueprintJsonLibrary_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUEPRINTJSON_API UClass* StaticClass<class UJsonLibrary>();

#define HostProject_Plugins_BlueprintJson_Source_BlueprintJson_Public_BlueprintJsonLibrary_h_162_SPARSE_DATA
#define HostProject_Plugins_BlueprintJson_Source_BlueprintJson_Public_BlueprintJsonLibrary_h_162_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execJO_AddField_Arr_HitResult); \
	DECLARE_FUNCTION(execJO_AddField_Arr_Quat); \
	DECLARE_FUNCTION(execJO_AddField_Arr_LinearColor); \
	DECLARE_FUNCTION(execJO_AddField_Arr_Rotator); \
	DECLARE_FUNCTION(execJO_AddField_Arr_Transform); \
	DECLARE_FUNCTION(execJO_AddField_Arr_Vector2D); \
	DECLARE_FUNCTION(execJO_AddField_Arr_Vector); \
	DECLARE_FUNCTION(execJO_AddField_Arr_Object); \
	DECLARE_FUNCTION(execJO_AddField_Arr_Boolean); \
	DECLARE_FUNCTION(execJO_AddField_Arr_String); \
	DECLARE_FUNCTION(execJO_AddField_Arr_Float); \
	DECLARE_FUNCTION(execJO_AddField_Arr_Int64); \
	DECLARE_FUNCTION(execJO_AddField_Arr_Int); \
	DECLARE_FUNCTION(execJO_AddField_HitResult); \
	DECLARE_FUNCTION(execJO_AddField_Quat); \
	DECLARE_FUNCTION(execJO_AddField_LinearColor); \
	DECLARE_FUNCTION(execJO_AddField_Rotator); \
	DECLARE_FUNCTION(execJO_AddField_Transform); \
	DECLARE_FUNCTION(execJO_AddField_Vector2D); \
	DECLARE_FUNCTION(execJO_AddField_Vector); \
	DECLARE_FUNCTION(execJO_AddField_Object); \
	DECLARE_FUNCTION(execJO_AddField_Boolean); \
	DECLARE_FUNCTION(execJO_AddField_Name); \
	DECLARE_FUNCTION(execJO_AddField_Text); \
	DECLARE_FUNCTION(execJO_AddField_String); \
	DECLARE_FUNCTION(execJO_AddField_Float); \
	DECLARE_FUNCTION(execJO_AddField_Int64); \
	DECLARE_FUNCTION(execJO_AddField_Int);


#define HostProject_Plugins_BlueprintJson_Source_BlueprintJson_Public_BlueprintJsonLibrary_h_162_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execJO_AddField_Arr_HitResult); \
	DECLARE_FUNCTION(execJO_AddField_Arr_Quat); \
	DECLARE_FUNCTION(execJO_AddField_Arr_LinearColor); \
	DECLARE_FUNCTION(execJO_AddField_Arr_Rotator); \
	DECLARE_FUNCTION(execJO_AddField_Arr_Transform); \
	DECLARE_FUNCTION(execJO_AddField_Arr_Vector2D); \
	DECLARE_FUNCTION(execJO_AddField_Arr_Vector); \
	DECLARE_FUNCTION(execJO_AddField_Arr_Object); \
	DECLARE_FUNCTION(execJO_AddField_Arr_Boolean); \
	DECLARE_FUNCTION(execJO_AddField_Arr_String); \
	DECLARE_FUNCTION(execJO_AddField_Arr_Float); \
	DECLARE_FUNCTION(execJO_AddField_Arr_Int64); \
	DECLARE_FUNCTION(execJO_AddField_Arr_Int); \
	DECLARE_FUNCTION(execJO_AddField_HitResult); \
	DECLARE_FUNCTION(execJO_AddField_Quat); \
	DECLARE_FUNCTION(execJO_AddField_LinearColor); \
	DECLARE_FUNCTION(execJO_AddField_Rotator); \
	DECLARE_FUNCTION(execJO_AddField_Transform); \
	DECLARE_FUNCTION(execJO_AddField_Vector2D); \
	DECLARE_FUNCTION(execJO_AddField_Vector); \
	DECLARE_FUNCTION(execJO_AddField_Object); \
	DECLARE_FUNCTION(execJO_AddField_Boolean); \
	DECLARE_FUNCTION(execJO_AddField_Name); \
	DECLARE_FUNCTION(execJO_AddField_Text); \
	DECLARE_FUNCTION(execJO_AddField_String); \
	DECLARE_FUNCTION(execJO_AddField_Float); \
	DECLARE_FUNCTION(execJO_AddField_Int64); \
	DECLARE_FUNCTION(execJO_AddField_Int);


#define HostProject_Plugins_BlueprintJson_Source_BlueprintJson_Public_BlueprintJsonLibrary_h_162_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInternalJsonLibrary(); \
	friend struct Z_Construct_UClass_UInternalJsonLibrary_Statics; \
public: \
	DECLARE_CLASS(UInternalJsonLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintJson"), NO_API) \
	DECLARE_SERIALIZER(UInternalJsonLibrary)


#define HostProject_Plugins_BlueprintJson_Source_BlueprintJson_Public_BlueprintJsonLibrary_h_162_INCLASS \
private: \
	static void StaticRegisterNativesUInternalJsonLibrary(); \
	friend struct Z_Construct_UClass_UInternalJsonLibrary_Statics; \
public: \
	DECLARE_CLASS(UInternalJsonLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintJson"), NO_API) \
	DECLARE_SERIALIZER(UInternalJsonLibrary)


#define HostProject_Plugins_BlueprintJson_Source_BlueprintJson_Public_BlueprintJsonLibrary_h_162_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInternalJsonLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInternalJsonLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInternalJsonLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInternalJsonLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInternalJsonLibrary(UInternalJsonLibrary&&); \
	NO_API UInternalJsonLibrary(const UInternalJsonLibrary&); \
public:


#define HostProject_Plugins_BlueprintJson_Source_BlueprintJson_Public_BlueprintJsonLibrary_h_162_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInternalJsonLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInternalJsonLibrary(UInternalJsonLibrary&&); \
	NO_API UInternalJsonLibrary(const UInternalJsonLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInternalJsonLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInternalJsonLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInternalJsonLibrary)


#define HostProject_Plugins_BlueprintJson_Source_BlueprintJson_Public_BlueprintJsonLibrary_h_162_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_BlueprintJson_Source_BlueprintJson_Public_BlueprintJsonLibrary_h_159_PROLOG
#define HostProject_Plugins_BlueprintJson_Source_BlueprintJson_Public_BlueprintJsonLibrary_h_162_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_BlueprintJson_Source_BlueprintJson_Public_BlueprintJsonLibrary_h_162_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_BlueprintJson_Source_BlueprintJson_Public_BlueprintJsonLibrary_h_162_SPARSE_DATA \
	HostProject_Plugins_BlueprintJson_Source_BlueprintJson_Public_BlueprintJsonLibrary_h_162_RPC_WRAPPERS \
	HostProject_Plugins_BlueprintJson_Source_BlueprintJson_Public_BlueprintJsonLibrary_h_162_INCLASS \
	HostProject_Plugins_BlueprintJson_Source_BlueprintJson_Public_BlueprintJsonLibrary_h_162_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_BlueprintJson_Source_BlueprintJson_Public_BlueprintJsonLibrary_h_162_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_BlueprintJson_Source_BlueprintJson_Public_BlueprintJsonLibrary_h_162_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_BlueprintJson_Source_BlueprintJson_Public_BlueprintJsonLibrary_h_162_SPARSE_DATA \
	HostProject_Plugins_BlueprintJson_Source_BlueprintJson_Public_BlueprintJsonLibrary_h_162_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_BlueprintJson_Source_BlueprintJson_Public_BlueprintJsonLibrary_h_162_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_BlueprintJson_Source_BlueprintJson_Public_BlueprintJsonLibrary_h_162_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUEPRINTJSON_API UClass* StaticClass<class UInternalJsonLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_BlueprintJson_Source_BlueprintJson_Public_BlueprintJsonLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
