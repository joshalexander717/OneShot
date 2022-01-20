// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintJson/Public/BlueprintJsonLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintJsonLibrary() {}
// Cross Module References
	BLUEPRINTJSON_API UClass* Z_Construct_UClass_UJsonLibrary_NoRegister();
	BLUEPRINTJSON_API UClass* Z_Construct_UClass_UJsonLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_BlueprintJson();
	BLUEPRINTJSON_API UClass* Z_Construct_UClass_UJsonValue_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	BLUEPRINTJSON_API UClass* Z_Construct_UClass_UJsonObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	BLUEPRINTJSON_API UClass* Z_Construct_UClass_UInternalJsonLibrary_NoRegister();
	BLUEPRINTJSON_API UClass* Z_Construct_UClass_UInternalJsonLibrary();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UJsonLibrary::execJsonValue_HitResult)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UJsonValue**)Z_Param__Result=UJsonLibrary::JsonValue_HitResult(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonLibrary::execJsonValue_Quat)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UJsonValue**)Z_Param__Result=UJsonLibrary::JsonValue_Quat(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonLibrary::execJsonValue_Transform)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UJsonValue**)Z_Param__Result=UJsonLibrary::JsonValue_Transform(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonLibrary::execJsonValue_Rotator)
	{
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UJsonValue**)Z_Param__Result=UJsonLibrary::JsonValue_Rotator(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonLibrary::execJsonValue_Color)
	{
		P_GET_STRUCT_REF(FColor,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UJsonValue**)Z_Param__Result=UJsonLibrary::JsonValue_Color(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonLibrary::execJsonValue_LinearColor)
	{
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UJsonValue**)Z_Param__Result=UJsonLibrary::JsonValue_LinearColor(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonLibrary::execJsonValue_Vector2D)
	{
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UJsonValue**)Z_Param__Result=UJsonLibrary::JsonValue_Vector2D(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonLibrary::execJsonValue_Vector)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UJsonValue**)Z_Param__Result=UJsonLibrary::JsonValue_Vector(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonLibrary::execJsonValue_JsonObject)
	{
		P_GET_OBJECT(UJsonObject,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UJsonValue**)Z_Param__Result=UJsonLibrary::JsonValue_JsonObject(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonLibrary::execJsonValue_Boolean)
	{
		P_GET_UBOOL(Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UJsonValue**)Z_Param__Result=UJsonLibrary::JsonValue_Boolean(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonLibrary::execJsonValue_Name)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UJsonValue**)Z_Param__Result=UJsonLibrary::JsonValue_Name(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonLibrary::execJsonValue_Text)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UJsonValue**)Z_Param__Result=UJsonLibrary::JsonValue_Text(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonLibrary::execJsonValue_String)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UJsonValue**)Z_Param__Result=UJsonLibrary::JsonValue_String(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonLibrary::execJsonValue_Float)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UJsonValue**)Z_Param__Result=UJsonLibrary::JsonValue_Float(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonLibrary::execJsonValue_Int64)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UJsonValue**)Z_Param__Result=UJsonLibrary::JsonValue_Int64(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonLibrary::execJsonValue_Bool)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UJsonValue**)Z_Param__Result=UJsonLibrary::JsonValue_Bool(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonLibrary::execStringifyJsonObject)
	{
		P_GET_OBJECT(UJsonObject,Z_Param_Object);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutJsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UJsonLibrary::StringifyJsonObject(Z_Param_Object,Z_Param_Out_OutJsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonLibrary::execLoadJsonFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UJsonObject**)Z_Param__Result=UJsonLibrary::LoadJsonFile(Z_Param_FilePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonLibrary::execJsonValue_ToObject)
	{
		P_GET_OBJECT(UJsonValue,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UJsonObject**)Z_Param__Result=UJsonLibrary::JsonValue_ToObject(Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonLibrary::execJsonValue_ToArray)
	{
		P_GET_OBJECT(UJsonValue,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UJsonValue*>*)Z_Param__Result=UJsonLibrary::JsonValue_ToArray(Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonLibrary::execJsonValue_ToTransform)
	{
		P_GET_OBJECT(UJsonValue,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UJsonLibrary::JsonValue_ToTransform(Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonLibrary::execJsonValue_ToRotator)
	{
		P_GET_OBJECT(UJsonValue,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=UJsonLibrary::JsonValue_ToRotator(Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonLibrary::execJsonValue_ToVector)
	{
		P_GET_OBJECT(UJsonValue,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UJsonLibrary::JsonValue_ToVector(Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonLibrary::execJsonValue_ToInteger64)
	{
		P_GET_OBJECT(UJsonValue,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=UJsonLibrary::JsonValue_ToInteger64(Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonLibrary::execJsonValue_ToFloat)
	{
		P_GET_OBJECT(UJsonValue,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UJsonLibrary::JsonValue_ToFloat(Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonLibrary::execJsonValue_ToBool)
	{
		P_GET_OBJECT(UJsonValue,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UJsonLibrary::JsonValue_ToBool(Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonLibrary::execJsonValue_ToInteger)
	{
		P_GET_OBJECT(UJsonValue,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UJsonLibrary::JsonValue_ToInteger(Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonLibrary::execJsonValue_ToString)
	{
		P_GET_OBJECT(UJsonValue,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UJsonLibrary::JsonValue_ToString(Z_Param_Object);
		P_NATIVE_END;
	}
	void UJsonLibrary::StaticRegisterNativesUJsonLibrary()
	{
		UClass* Class = UJsonLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "JsonValue_Bool", &UJsonLibrary::execJsonValue_Bool },
			{ "JsonValue_Boolean", &UJsonLibrary::execJsonValue_Boolean },
			{ "JsonValue_Color", &UJsonLibrary::execJsonValue_Color },
			{ "JsonValue_Float", &UJsonLibrary::execJsonValue_Float },
			{ "JsonValue_HitResult", &UJsonLibrary::execJsonValue_HitResult },
			{ "JsonValue_Int64", &UJsonLibrary::execJsonValue_Int64 },
			{ "JsonValue_JsonObject", &UJsonLibrary::execJsonValue_JsonObject },
			{ "JsonValue_LinearColor", &UJsonLibrary::execJsonValue_LinearColor },
			{ "JsonValue_Name", &UJsonLibrary::execJsonValue_Name },
			{ "JsonValue_Quat", &UJsonLibrary::execJsonValue_Quat },
			{ "JsonValue_Rotator", &UJsonLibrary::execJsonValue_Rotator },
			{ "JsonValue_String", &UJsonLibrary::execJsonValue_String },
			{ "JsonValue_Text", &UJsonLibrary::execJsonValue_Text },
			{ "JsonValue_ToArray", &UJsonLibrary::execJsonValue_ToArray },
			{ "JsonValue_ToBool", &UJsonLibrary::execJsonValue_ToBool },
			{ "JsonValue_ToFloat", &UJsonLibrary::execJsonValue_ToFloat },
			{ "JsonValue_ToInteger", &UJsonLibrary::execJsonValue_ToInteger },
			{ "JsonValue_ToInteger64", &UJsonLibrary::execJsonValue_ToInteger64 },
			{ "JsonValue_ToObject", &UJsonLibrary::execJsonValue_ToObject },
			{ "JsonValue_ToRotator", &UJsonLibrary::execJsonValue_ToRotator },
			{ "JsonValue_ToString", &UJsonLibrary::execJsonValue_ToString },
			{ "JsonValue_ToTransform", &UJsonLibrary::execJsonValue_ToTransform },
			{ "JsonValue_ToVector", &UJsonLibrary::execJsonValue_ToVector },
			{ "JsonValue_Transform", &UJsonLibrary::execJsonValue_Transform },
			{ "JsonValue_Vector", &UJsonLibrary::execJsonValue_Vector },
			{ "JsonValue_Vector2D", &UJsonLibrary::execJsonValue_Vector2D },
			{ "LoadJsonFile", &UJsonLibrary::execLoadJsonFile },
			{ "StringifyJsonObject", &UJsonLibrary::execStringifyJsonObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UJsonLibrary_JsonValue_Bool_Statics
	{
		struct JsonLibrary_eventJsonValue_Bool_Parms
		{
			int32 Value;
			UJsonValue* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJsonLibrary_JsonValue_Bool_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonLibrary_eventJsonValue_Bool_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonLibrary_JsonValue_Bool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonLibrary_eventJsonValue_Bool_Parms, ReturnValue), Z_Construct_UClass_UJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonLibrary_JsonValue_Bool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLibrary_JsonValue_Bool_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLibrary_JsonValue_Bool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonLibrary_JsonValue_Bool_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "JSON|Value" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToJsonValue (int32)" },
		{ "ModuleRelativePath", "Public/BlueprintJsonLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonLibrary_JsonValue_Bool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonLibrary, nullptr, "JsonValue_Bool", nullptr, nullptr, sizeof(JsonLibrary_eventJsonValue_Bool_Parms), Z_Construct_UFunction_UJsonLibrary_JsonValue_Bool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_JsonValue_Bool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonLibrary_JsonValue_Bool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_JsonValue_Bool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonLibrary_JsonValue_Bool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonLibrary_JsonValue_Bool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonLibrary_JsonValue_Boolean_Statics
	{
		struct JsonLibrary_eventJsonValue_Boolean_Parms
		{
			bool Value;
			UJsonValue* ReturnValue;
		};
		static void NewProp_Value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UJsonLibrary_JsonValue_Boolean_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((JsonLibrary_eventJsonValue_Boolean_Parms*)Obj)->Value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJsonLibrary_JsonValue_Boolean_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(JsonLibrary_eventJsonValue_Boolean_Parms), &Z_Construct_UFunction_UJsonLibrary_JsonValue_Boolean_Statics::NewProp_Value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonLibrary_JsonValue_Boolean_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonLibrary_eventJsonValue_Boolean_Parms, ReturnValue), Z_Construct_UClass_UJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonLibrary_JsonValue_Boolean_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLibrary_JsonValue_Boolean_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLibrary_JsonValue_Boolean_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonLibrary_JsonValue_Boolean_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "JSON|Value" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToJsonValue (bool)" },
		{ "ModuleRelativePath", "Public/BlueprintJsonLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonLibrary_JsonValue_Boolean_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonLibrary, nullptr, "JsonValue_Boolean", nullptr, nullptr, sizeof(JsonLibrary_eventJsonValue_Boolean_Parms), Z_Construct_UFunction_UJsonLibrary_JsonValue_Boolean_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_JsonValue_Boolean_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonLibrary_JsonValue_Boolean_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_JsonValue_Boolean_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonLibrary_JsonValue_Boolean()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonLibrary_JsonValue_Boolean_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonLibrary_JsonValue_Color_Statics
	{
		struct JsonLibrary_eventJsonValue_Color_Parms
		{
			FColor Value;
			UJsonValue* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonLibrary_JsonValue_Color_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJsonLibrary_JsonValue_Color_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonLibrary_eventJsonValue_Color_Parms, Value), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UFunction_UJsonLibrary_JsonValue_Color_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_JsonValue_Color_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonLibrary_JsonValue_Color_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonLibrary_eventJsonValue_Color_Parms, ReturnValue), Z_Construct_UClass_UJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonLibrary_JsonValue_Color_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLibrary_JsonValue_Color_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLibrary_JsonValue_Color_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonLibrary_JsonValue_Color_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "JSON|Value" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToJsonValue (Color)" },
		{ "ModuleRelativePath", "Public/BlueprintJsonLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonLibrary_JsonValue_Color_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonLibrary, nullptr, "JsonValue_Color", nullptr, nullptr, sizeof(JsonLibrary_eventJsonValue_Color_Parms), Z_Construct_UFunction_UJsonLibrary_JsonValue_Color_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_JsonValue_Color_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonLibrary_JsonValue_Color_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_JsonValue_Color_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonLibrary_JsonValue_Color()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonLibrary_JsonValue_Color_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonLibrary_JsonValue_Float_Statics
	{
		struct JsonLibrary_eventJsonValue_Float_Parms
		{
			float Value;
			UJsonValue* ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJsonLibrary_JsonValue_Float_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonLibrary_eventJsonValue_Float_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonLibrary_JsonValue_Float_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonLibrary_eventJsonValue_Float_Parms, ReturnValue), Z_Construct_UClass_UJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonLibrary_JsonValue_Float_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLibrary_JsonValue_Float_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLibrary_JsonValue_Float_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonLibrary_JsonValue_Float_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "JSON|Value" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToJsonValue (float)" },
		{ "ModuleRelativePath", "Public/BlueprintJsonLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonLibrary_JsonValue_Float_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonLibrary, nullptr, "JsonValue_Float", nullptr, nullptr, sizeof(JsonLibrary_eventJsonValue_Float_Parms), Z_Construct_UFunction_UJsonLibrary_JsonValue_Float_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_JsonValue_Float_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonLibrary_JsonValue_Float_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_JsonValue_Float_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonLibrary_JsonValue_Float()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonLibrary_JsonValue_Float_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonLibrary_JsonValue_HitResult_Statics
	{
		struct JsonLibrary_eventJsonValue_HitResult_Parms
		{
			FHitResult Value;
			UJsonValue* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonLibrary_JsonValue_HitResult_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJsonLibrary_JsonValue_HitResult_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonLibrary_eventJsonValue_HitResult_Parms, Value), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UJsonLibrary_JsonValue_HitResult_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_JsonValue_HitResult_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonLibrary_JsonValue_HitResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonLibrary_eventJsonValue_HitResult_Parms, ReturnValue), Z_Construct_UClass_UJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonLibrary_JsonValue_HitResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLibrary_JsonValue_HitResult_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLibrary_JsonValue_HitResult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonLibrary_JsonValue_HitResult_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "JSON|Value" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToJsonValue (HitResult)" },
		{ "ModuleRelativePath", "Public/BlueprintJsonLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonLibrary_JsonValue_HitResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonLibrary, nullptr, "JsonValue_HitResult", nullptr, nullptr, sizeof(JsonLibrary_eventJsonValue_HitResult_Parms), Z_Construct_UFunction_UJsonLibrary_JsonValue_HitResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_JsonValue_HitResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonLibrary_JsonValue_HitResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_JsonValue_HitResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonLibrary_JsonValue_HitResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonLibrary_JsonValue_HitResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonLibrary_JsonValue_Int64_Statics
	{
		struct JsonLibrary_eventJsonValue_Int64_Parms
		{
			int64 Value;
			UJsonValue* ReturnValue;
		};
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UJsonLibrary_JsonValue_Int64_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonLibrary_eventJsonValue_Int64_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonLibrary_JsonValue_Int64_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonLibrary_eventJsonValue_Int64_Parms, ReturnValue), Z_Construct_UClass_UJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonLibrary_JsonValue_Int64_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLibrary_JsonValue_Int64_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLibrary_JsonValue_Int64_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonLibrary_JsonValue_Int64_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "JSON|Value" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToJsonValue (int64)" },
		{ "ModuleRelativePath", "Public/BlueprintJsonLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonLibrary_JsonValue_Int64_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonLibrary, nullptr, "JsonValue_Int64", nullptr, nullptr, sizeof(JsonLibrary_eventJsonValue_Int64_Parms), Z_Construct_UFunction_UJsonLibrary_JsonValue_Int64_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_JsonValue_Int64_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonLibrary_JsonValue_Int64_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_JsonValue_Int64_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonLibrary_JsonValue_Int64()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonLibrary_JsonValue_Int64_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonLibrary_JsonValue_JsonObject_Statics
	{
		struct JsonLibrary_eventJsonValue_JsonObject_Parms
		{
			UJsonObject* Value;
			UJsonValue* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonLibrary_JsonValue_JsonObject_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonLibrary_eventJsonValue_JsonObject_Parms, Value), Z_Construct_UClass_UJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonLibrary_JsonValue_JsonObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonLibrary_eventJsonValue_JsonObject_Parms, ReturnValue), Z_Construct_UClass_UJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonLibrary_JsonValue_JsonObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLibrary_JsonValue_JsonObject_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLibrary_JsonValue_JsonObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonLibrary_JsonValue_JsonObject_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "JSON|Value" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToJsonValue (JsonObject)" },
		{ "ModuleRelativePath", "Public/BlueprintJsonLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonLibrary_JsonValue_JsonObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonLibrary, nullptr, "JsonValue_JsonObject", nullptr, nullptr, sizeof(JsonLibrary_eventJsonValue_JsonObject_Parms), Z_Construct_UFunction_UJsonLibrary_JsonValue_JsonObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_JsonValue_JsonObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonLibrary_JsonValue_JsonObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_JsonValue_JsonObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonLibrary_JsonValue_JsonObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonLibrary_JsonValue_JsonObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonLibrary_JsonValue_LinearColor_Statics
	{
		struct JsonLibrary_eventJsonValue_LinearColor_Parms
		{
			FLinearColor Value;
			UJsonValue* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonLibrary_JsonValue_LinearColor_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJsonLibrary_JsonValue_LinearColor_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonLibrary_eventJsonValue_LinearColor_Parms, Value), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_UJsonLibrary_JsonValue_LinearColor_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_JsonValue_LinearColor_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonLibrary_JsonValue_LinearColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonLibrary_eventJsonValue_LinearColor_Parms, ReturnValue), Z_Construct_UClass_UJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonLibrary_JsonValue_LinearColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLibrary_JsonValue_LinearColor_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLibrary_JsonValue_LinearColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonLibrary_JsonValue_LinearColor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "JSON|Value" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToJsonValue (LinearColor)" },
		{ "ModuleRelativePath", "Public/BlueprintJsonLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonLibrary_JsonValue_LinearColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonLibrary, nullptr, "JsonValue_LinearColor", nullptr, nullptr, sizeof(JsonLibrary_eventJsonValue_LinearColor_Parms), Z_Construct_UFunction_UJsonLibrary_JsonValue_LinearColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_JsonValue_LinearColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonLibrary_JsonValue_LinearColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_JsonValue_LinearColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonLibrary_JsonValue_LinearColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonLibrary_JsonValue_LinearColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonLibrary_JsonValue_Name_Statics
	{
		struct JsonLibrary_eventJsonValue_Name_Parms
		{
			FName Value;
			UJsonValue* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonLibrary_JsonValue_Name_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UJsonLibrary_JsonValue_Name_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonLibrary_eventJsonValue_Name_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UJsonLibrary_JsonValue_Name_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_JsonValue_Name_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonLibrary_JsonValue_Name_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonLibrary_eventJsonValue_Name_Parms, ReturnValue), Z_Construct_UClass_UJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonLibrary_JsonValue_Name_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLibrary_JsonValue_Name_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLibrary_JsonValue_Name_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonLibrary_JsonValue_Name_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "JSON|Value" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToJsonValue (FName)" },
		{ "ModuleRelativePath", "Public/BlueprintJsonLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonLibrary_JsonValue_Name_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonLibrary, nullptr, "JsonValue_Name", nullptr, nullptr, sizeof(JsonLibrary_eventJsonValue_Name_Parms), Z_Construct_UFunction_UJsonLibrary_JsonValue_Name_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_JsonValue_Name_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonLibrary_JsonValue_Name_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_JsonValue_Name_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonLibrary_JsonValue_Name()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonLibrary_JsonValue_Name_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonLibrary_JsonValue_Quat_Statics
	{
		struct JsonLibrary_eventJsonValue_Quat_Parms
		{
			FQuat Value;
			UJsonValue* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonLibrary_JsonValue_Quat_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJsonLibrary_JsonValue_Quat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonLibrary_eventJsonValue_Quat_Parms, Value), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UJsonLibrary_JsonValue_Quat_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_JsonValue_Quat_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonLibrary_JsonValue_Quat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonLibrary_eventJsonValue_Quat_Parms, ReturnValue), Z_Construct_UClass_UJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonLibrary_JsonValue_Quat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLibrary_JsonValue_Quat_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLibrary_JsonValue_Quat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonLibrary_JsonValue_Quat_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "JSON|Value" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToJsonValue (Quat)" },
		{ "ModuleRelativePath", "Public/BlueprintJsonLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonLibrary_JsonValue_Quat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonLibrary, nullptr, "JsonValue_Quat", nullptr, nullptr, sizeof(JsonLibrary_eventJsonValue_Quat_Parms), Z_Construct_UFunction_UJsonLibrary_JsonValue_Quat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_JsonValue_Quat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonLibrary_JsonValue_Quat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_JsonValue_Quat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonLibrary_JsonValue_Quat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonLibrary_JsonValue_Quat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonLibrary_JsonValue_Rotator_Statics
	{
		struct JsonLibrary_eventJsonValue_Rotator_Parms
		{
			FRotator Value;
			UJsonValue* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonLibrary_JsonValue_Rotator_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJsonLibrary_JsonValue_Rotator_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonLibrary_eventJsonValue_Rotator_Parms, Value), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UJsonLibrary_JsonValue_Rotator_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_JsonValue_Rotator_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonLibrary_JsonValue_Rotator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonLibrary_eventJsonValue_Rotator_Parms, ReturnValue), Z_Construct_UClass_UJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonLibrary_JsonValue_Rotator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLibrary_JsonValue_Rotator_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLibrary_JsonValue_Rotator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonLibrary_JsonValue_Rotator_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "JSON|Value" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToJsonValue (Rotator)" },
		{ "ModuleRelativePath", "Public/BlueprintJsonLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonLibrary_JsonValue_Rotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonLibrary, nullptr, "JsonValue_Rotator", nullptr, nullptr, sizeof(JsonLibrary_eventJsonValue_Rotator_Parms), Z_Construct_UFunction_UJsonLibrary_JsonValue_Rotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_JsonValue_Rotator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonLibrary_JsonValue_Rotator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_JsonValue_Rotator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonLibrary_JsonValue_Rotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonLibrary_JsonValue_Rotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonLibrary_JsonValue_String_Statics
	{
		struct JsonLibrary_eventJsonValue_String_Parms
		{
			FString Value;
			UJsonValue* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonLibrary_JsonValue_String_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonLibrary_JsonValue_String_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonLibrary_eventJsonValue_String_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UJsonLibrary_JsonValue_String_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_JsonValue_String_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonLibrary_JsonValue_String_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonLibrary_eventJsonValue_String_Parms, ReturnValue), Z_Construct_UClass_UJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonLibrary_JsonValue_String_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLibrary_JsonValue_String_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLibrary_JsonValue_String_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonLibrary_JsonValue_String_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "JSON|Value" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToJsonValue (FString)" },
		{ "ModuleRelativePath", "Public/BlueprintJsonLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonLibrary_JsonValue_String_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonLibrary, nullptr, "JsonValue_String", nullptr, nullptr, sizeof(JsonLibrary_eventJsonValue_String_Parms), Z_Construct_UFunction_UJsonLibrary_JsonValue_String_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_JsonValue_String_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonLibrary_JsonValue_String_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_JsonValue_String_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonLibrary_JsonValue_String()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonLibrary_JsonValue_String_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonLibrary_JsonValue_Text_Statics
	{
		struct JsonLibrary_eventJsonValue_Text_Parms
		{
			FText Value;
			UJsonValue* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonLibrary_JsonValue_Text_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UJsonLibrary_JsonValue_Text_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonLibrary_eventJsonValue_Text_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UJsonLibrary_JsonValue_Text_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_JsonValue_Text_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonLibrary_JsonValue_Text_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonLibrary_eventJsonValue_Text_Parms, ReturnValue), Z_Construct_UClass_UJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonLibrary_JsonValue_Text_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLibrary_JsonValue_Text_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLibrary_JsonValue_Text_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonLibrary_JsonValue_Text_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "JSON|Value" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToJsonValue (FText)" },
		{ "ModuleRelativePath", "Public/BlueprintJsonLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonLibrary_JsonValue_Text_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonLibrary, nullptr, "JsonValue_Text", nullptr, nullptr, sizeof(JsonLibrary_eventJsonValue_Text_Parms), Z_Construct_UFunction_UJsonLibrary_JsonValue_Text_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_JsonValue_Text_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonLibrary_JsonValue_Text_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_JsonValue_Text_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonLibrary_JsonValue_Text()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonLibrary_JsonValue_Text_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonLibrary_JsonValue_ToArray_Statics
	{
		struct JsonLibrary_eventJsonValue_ToArray_Parms
		{
			UJsonValue* Object;
			TArray<UJsonValue*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonLibrary_JsonValue_ToArray_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonLibrary_eventJsonValue_ToArray_Parms, Object), Z_Construct_UClass_UJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonLibrary_JsonValue_ToArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UJsonLibrary_JsonValue_ToArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonLibrary_eventJsonValue_ToArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonLibrary_JsonValue_ToArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLibrary_JsonValue_ToArray_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLibrary_JsonValue_ToArray_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLibrary_JsonValue_ToArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonLibrary_JsonValue_ToArray_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "JSON|Value" },
		{ "Comment", "/* Tries to get this Json value as an Array */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToArray (JsonValue)" },
		{ "ModuleRelativePath", "Public/BlueprintJsonLibrary.h" },
		{ "ToolTip", "Tries to get this Json value as an Array" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonLibrary_JsonValue_ToArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonLibrary, nullptr, "JsonValue_ToArray", nullptr, nullptr, sizeof(JsonLibrary_eventJsonValue_ToArray_Parms), Z_Construct_UFunction_UJsonLibrary_JsonValue_ToArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_JsonValue_ToArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonLibrary_JsonValue_ToArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_JsonValue_ToArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonLibrary_JsonValue_ToArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonLibrary_JsonValue_ToArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonLibrary_JsonValue_ToBool_Statics
	{
		struct JsonLibrary_eventJsonValue_ToBool_Parms
		{
			UJsonValue* Object;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonLibrary_JsonValue_ToBool_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonLibrary_eventJsonValue_ToBool_Parms, Object), Z_Construct_UClass_UJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJsonLibrary_JsonValue_ToBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((JsonLibrary_eventJsonValue_ToBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJsonLibrary_JsonValue_ToBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(JsonLibrary_eventJsonValue_ToBool_Parms), &Z_Construct_UFunction_UJsonLibrary_JsonValue_ToBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonLibrary_JsonValue_ToBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLibrary_JsonValue_ToBool_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLibrary_JsonValue_ToBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonLibrary_JsonValue_ToBool_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "JSON|Value" },
		{ "Comment", "/* Tries to get this Json value as a Boolean */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToBoolean (JsonValue)" },
		{ "ModuleRelativePath", "Public/BlueprintJsonLibrary.h" },
		{ "ToolTip", "Tries to get this Json value as a Boolean" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonLibrary_JsonValue_ToBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonLibrary, nullptr, "JsonValue_ToBool", nullptr, nullptr, sizeof(JsonLibrary_eventJsonValue_ToBool_Parms), Z_Construct_UFunction_UJsonLibrary_JsonValue_ToBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_JsonValue_ToBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonLibrary_JsonValue_ToBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_JsonValue_ToBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonLibrary_JsonValue_ToBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonLibrary_JsonValue_ToBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonLibrary_JsonValue_ToFloat_Statics
	{
		struct JsonLibrary_eventJsonValue_ToFloat_Parms
		{
			UJsonValue* Object;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonLibrary_JsonValue_ToFloat_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonLibrary_eventJsonValue_ToFloat_Parms, Object), Z_Construct_UClass_UJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJsonLibrary_JsonValue_ToFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonLibrary_eventJsonValue_ToFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonLibrary_JsonValue_ToFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLibrary_JsonValue_ToFloat_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLibrary_JsonValue_ToFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonLibrary_JsonValue_ToFloat_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "JSON|Value" },
		{ "Comment", "/* Tries to get this Json value as a Number */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToFloat (JsonValue)" },
		{ "ModuleRelativePath", "Public/BlueprintJsonLibrary.h" },
		{ "ToolTip", "Tries to get this Json value as a Number" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonLibrary_JsonValue_ToFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonLibrary, nullptr, "JsonValue_ToFloat", nullptr, nullptr, sizeof(JsonLibrary_eventJsonValue_ToFloat_Parms), Z_Construct_UFunction_UJsonLibrary_JsonValue_ToFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_JsonValue_ToFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonLibrary_JsonValue_ToFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_JsonValue_ToFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonLibrary_JsonValue_ToFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonLibrary_JsonValue_ToFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonLibrary_JsonValue_ToInteger_Statics
	{
		struct JsonLibrary_eventJsonValue_ToInteger_Parms
		{
			UJsonValue* Object;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonLibrary_JsonValue_ToInteger_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonLibrary_eventJsonValue_ToInteger_Parms, Object), Z_Construct_UClass_UJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJsonLibrary_JsonValue_ToInteger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonLibrary_eventJsonValue_ToInteger_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonLibrary_JsonValue_ToInteger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLibrary_JsonValue_ToInteger_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLibrary_JsonValue_ToInteger_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonLibrary_JsonValue_ToInteger_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "JSON|Value" },
		{ "Comment", "/* Tries to get this Json value as a Number */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToInteger (JsonValue)" },
		{ "ModuleRelativePath", "Public/BlueprintJsonLibrary.h" },
		{ "ToolTip", "Tries to get this Json value as a Number" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonLibrary_JsonValue_ToInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonLibrary, nullptr, "JsonValue_ToInteger", nullptr, nullptr, sizeof(JsonLibrary_eventJsonValue_ToInteger_Parms), Z_Construct_UFunction_UJsonLibrary_JsonValue_ToInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_JsonValue_ToInteger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonLibrary_JsonValue_ToInteger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_JsonValue_ToInteger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonLibrary_JsonValue_ToInteger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonLibrary_JsonValue_ToInteger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonLibrary_JsonValue_ToInteger64_Statics
	{
		struct JsonLibrary_eventJsonValue_ToInteger64_Parms
		{
			UJsonValue* Object;
			int64 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonLibrary_JsonValue_ToInteger64_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonLibrary_eventJsonValue_ToInteger64_Parms, Object), Z_Construct_UClass_UJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UJsonLibrary_JsonValue_ToInteger64_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonLibrary_eventJsonValue_ToInteger64_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonLibrary_JsonValue_ToInteger64_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLibrary_JsonValue_ToInteger64_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLibrary_JsonValue_ToInteger64_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonLibrary_JsonValue_ToInteger64_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "JSON|Value" },
		{ "Comment", "/* Tries to get this Json value as a Number */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToInteger64 (JsonValue)" },
		{ "ModuleRelativePath", "Public/BlueprintJsonLibrary.h" },
		{ "ToolTip", "Tries to get this Json value as a Number" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonLibrary_JsonValue_ToInteger64_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonLibrary, nullptr, "JsonValue_ToInteger64", nullptr, nullptr, sizeof(JsonLibrary_eventJsonValue_ToInteger64_Parms), Z_Construct_UFunction_UJsonLibrary_JsonValue_ToInteger64_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_JsonValue_ToInteger64_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonLibrary_JsonValue_ToInteger64_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_JsonValue_ToInteger64_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonLibrary_JsonValue_ToInteger64()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonLibrary_JsonValue_ToInteger64_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonLibrary_JsonValue_ToObject_Statics
	{
		struct JsonLibrary_eventJsonValue_ToObject_Parms
		{
			UJsonValue* Object;
			UJsonObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonLibrary_JsonValue_ToObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonLibrary_eventJsonValue_ToObject_Parms, Object), Z_Construct_UClass_UJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonLibrary_JsonValue_ToObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonLibrary_eventJsonValue_ToObject_Parms, ReturnValue), Z_Construct_UClass_UJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonLibrary_JsonValue_ToObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLibrary_JsonValue_ToObject_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLibrary_JsonValue_ToObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonLibrary_JsonValue_ToObject_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "JSON|Value" },
		{ "Comment", "/* Tries to get this Json value as an Object */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToObject (JsonValue)" },
		{ "ModuleRelativePath", "Public/BlueprintJsonLibrary.h" },
		{ "ToolTip", "Tries to get this Json value as an Object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonLibrary_JsonValue_ToObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonLibrary, nullptr, "JsonValue_ToObject", nullptr, nullptr, sizeof(JsonLibrary_eventJsonValue_ToObject_Parms), Z_Construct_UFunction_UJsonLibrary_JsonValue_ToObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_JsonValue_ToObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonLibrary_JsonValue_ToObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_JsonValue_ToObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonLibrary_JsonValue_ToObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonLibrary_JsonValue_ToObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonLibrary_JsonValue_ToRotator_Statics
	{
		struct JsonLibrary_eventJsonValue_ToRotator_Parms
		{
			UJsonValue* Object;
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonLibrary_JsonValue_ToRotator_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonLibrary_eventJsonValue_ToRotator_Parms, Object), Z_Construct_UClass_UJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJsonLibrary_JsonValue_ToRotator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonLibrary_eventJsonValue_ToRotator_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonLibrary_JsonValue_ToRotator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLibrary_JsonValue_ToRotator_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLibrary_JsonValue_ToRotator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonLibrary_JsonValue_ToRotator_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "JSON|Value" },
		{ "Comment", "/* Tries to get this Json value as a Rotator */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToRotator (JsonValue)" },
		{ "ModuleRelativePath", "Public/BlueprintJsonLibrary.h" },
		{ "ToolTip", "Tries to get this Json value as a Rotator" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonLibrary_JsonValue_ToRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonLibrary, nullptr, "JsonValue_ToRotator", nullptr, nullptr, sizeof(JsonLibrary_eventJsonValue_ToRotator_Parms), Z_Construct_UFunction_UJsonLibrary_JsonValue_ToRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_JsonValue_ToRotator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonLibrary_JsonValue_ToRotator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_JsonValue_ToRotator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonLibrary_JsonValue_ToRotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonLibrary_JsonValue_ToRotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonLibrary_JsonValue_ToString_Statics
	{
		struct JsonLibrary_eventJsonValue_ToString_Parms
		{
			UJsonValue* Object;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonLibrary_JsonValue_ToString_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonLibrary_eventJsonValue_ToString_Parms, Object), Z_Construct_UClass_UJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonLibrary_JsonValue_ToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonLibrary_eventJsonValue_ToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonLibrary_JsonValue_ToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLibrary_JsonValue_ToString_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLibrary_JsonValue_ToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonLibrary_JsonValue_ToString_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "JSON|Value" },
		{ "Comment", "/* Tries to get this Json value as a string */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToString (JsonValue)" },
		{ "ModuleRelativePath", "Public/BlueprintJsonLibrary.h" },
		{ "ToolTip", "Tries to get this Json value as a string" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonLibrary_JsonValue_ToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonLibrary, nullptr, "JsonValue_ToString", nullptr, nullptr, sizeof(JsonLibrary_eventJsonValue_ToString_Parms), Z_Construct_UFunction_UJsonLibrary_JsonValue_ToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_JsonValue_ToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonLibrary_JsonValue_ToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_JsonValue_ToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonLibrary_JsonValue_ToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonLibrary_JsonValue_ToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonLibrary_JsonValue_ToTransform_Statics
	{
		struct JsonLibrary_eventJsonValue_ToTransform_Parms
		{
			UJsonValue* Object;
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonLibrary_JsonValue_ToTransform_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonLibrary_eventJsonValue_ToTransform_Parms, Object), Z_Construct_UClass_UJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJsonLibrary_JsonValue_ToTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonLibrary_eventJsonValue_ToTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonLibrary_JsonValue_ToTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLibrary_JsonValue_ToTransform_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLibrary_JsonValue_ToTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonLibrary_JsonValue_ToTransform_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "JSON|Value" },
		{ "Comment", "/* Tries to get this Json value as a Transform */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToTransform (JsonValue)" },
		{ "ModuleRelativePath", "Public/BlueprintJsonLibrary.h" },
		{ "ToolTip", "Tries to get this Json value as a Transform" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonLibrary_JsonValue_ToTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonLibrary, nullptr, "JsonValue_ToTransform", nullptr, nullptr, sizeof(JsonLibrary_eventJsonValue_ToTransform_Parms), Z_Construct_UFunction_UJsonLibrary_JsonValue_ToTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_JsonValue_ToTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonLibrary_JsonValue_ToTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_JsonValue_ToTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonLibrary_JsonValue_ToTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonLibrary_JsonValue_ToTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonLibrary_JsonValue_ToVector_Statics
	{
		struct JsonLibrary_eventJsonValue_ToVector_Parms
		{
			UJsonValue* Object;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonLibrary_JsonValue_ToVector_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonLibrary_eventJsonValue_ToVector_Parms, Object), Z_Construct_UClass_UJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJsonLibrary_JsonValue_ToVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonLibrary_eventJsonValue_ToVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonLibrary_JsonValue_ToVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLibrary_JsonValue_ToVector_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLibrary_JsonValue_ToVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonLibrary_JsonValue_ToVector_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "JSON|Value" },
		{ "Comment", "/* Tries to get this Json value as a Vector */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToVector (JsonValue)" },
		{ "ModuleRelativePath", "Public/BlueprintJsonLibrary.h" },
		{ "ToolTip", "Tries to get this Json value as a Vector" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonLibrary_JsonValue_ToVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonLibrary, nullptr, "JsonValue_ToVector", nullptr, nullptr, sizeof(JsonLibrary_eventJsonValue_ToVector_Parms), Z_Construct_UFunction_UJsonLibrary_JsonValue_ToVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_JsonValue_ToVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonLibrary_JsonValue_ToVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_JsonValue_ToVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonLibrary_JsonValue_ToVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonLibrary_JsonValue_ToVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonLibrary_JsonValue_Transform_Statics
	{
		struct JsonLibrary_eventJsonValue_Transform_Parms
		{
			FTransform Value;
			UJsonValue* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonLibrary_JsonValue_Transform_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJsonLibrary_JsonValue_Transform_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonLibrary_eventJsonValue_Transform_Parms, Value), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UJsonLibrary_JsonValue_Transform_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_JsonValue_Transform_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonLibrary_JsonValue_Transform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonLibrary_eventJsonValue_Transform_Parms, ReturnValue), Z_Construct_UClass_UJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonLibrary_JsonValue_Transform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLibrary_JsonValue_Transform_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLibrary_JsonValue_Transform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonLibrary_JsonValue_Transform_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "JSON|Value" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToJsonValue (Transform)" },
		{ "ModuleRelativePath", "Public/BlueprintJsonLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonLibrary_JsonValue_Transform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonLibrary, nullptr, "JsonValue_Transform", nullptr, nullptr, sizeof(JsonLibrary_eventJsonValue_Transform_Parms), Z_Construct_UFunction_UJsonLibrary_JsonValue_Transform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_JsonValue_Transform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonLibrary_JsonValue_Transform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_JsonValue_Transform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonLibrary_JsonValue_Transform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonLibrary_JsonValue_Transform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonLibrary_JsonValue_Vector_Statics
	{
		struct JsonLibrary_eventJsonValue_Vector_Parms
		{
			FVector Value;
			UJsonValue* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonLibrary_JsonValue_Vector_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJsonLibrary_JsonValue_Vector_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonLibrary_eventJsonValue_Vector_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UJsonLibrary_JsonValue_Vector_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_JsonValue_Vector_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonLibrary_JsonValue_Vector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonLibrary_eventJsonValue_Vector_Parms, ReturnValue), Z_Construct_UClass_UJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonLibrary_JsonValue_Vector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLibrary_JsonValue_Vector_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLibrary_JsonValue_Vector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonLibrary_JsonValue_Vector_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "JSON|Value" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToJsonValue (Vector)" },
		{ "ModuleRelativePath", "Public/BlueprintJsonLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonLibrary_JsonValue_Vector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonLibrary, nullptr, "JsonValue_Vector", nullptr, nullptr, sizeof(JsonLibrary_eventJsonValue_Vector_Parms), Z_Construct_UFunction_UJsonLibrary_JsonValue_Vector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_JsonValue_Vector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonLibrary_JsonValue_Vector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_JsonValue_Vector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonLibrary_JsonValue_Vector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonLibrary_JsonValue_Vector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonLibrary_JsonValue_Vector2D_Statics
	{
		struct JsonLibrary_eventJsonValue_Vector2D_Parms
		{
			FVector2D Value;
			UJsonValue* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonLibrary_JsonValue_Vector2D_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJsonLibrary_JsonValue_Vector2D_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonLibrary_eventJsonValue_Vector2D_Parms, Value), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UJsonLibrary_JsonValue_Vector2D_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_JsonValue_Vector2D_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonLibrary_JsonValue_Vector2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonLibrary_eventJsonValue_Vector2D_Parms, ReturnValue), Z_Construct_UClass_UJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonLibrary_JsonValue_Vector2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLibrary_JsonValue_Vector2D_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLibrary_JsonValue_Vector2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonLibrary_JsonValue_Vector2D_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "JSON|Value" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToJsonValue (Vector2D)" },
		{ "ModuleRelativePath", "Public/BlueprintJsonLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonLibrary_JsonValue_Vector2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonLibrary, nullptr, "JsonValue_Vector2D", nullptr, nullptr, sizeof(JsonLibrary_eventJsonValue_Vector2D_Parms), Z_Construct_UFunction_UJsonLibrary_JsonValue_Vector2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_JsonValue_Vector2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonLibrary_JsonValue_Vector2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_JsonValue_Vector2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonLibrary_JsonValue_Vector2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonLibrary_JsonValue_Vector2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonLibrary_LoadJsonFile_Statics
	{
		struct JsonLibrary_eventLoadJsonFile_Parms
		{
			FString FilePath;
			UJsonObject* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonLibrary_LoadJsonFile_Statics::NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonLibrary_LoadJsonFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonLibrary_eventLoadJsonFile_Parms, FilePath), METADATA_PARAMS(Z_Construct_UFunction_UJsonLibrary_LoadJsonFile_Statics::NewProp_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_LoadJsonFile_Statics::NewProp_FilePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonLibrary_LoadJsonFile_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Root Object" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonLibrary_LoadJsonFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonLibrary_eventLoadJsonFile_Parms, ReturnValue), Z_Construct_UClass_UJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UJsonLibrary_LoadJsonFile_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_LoadJsonFile_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonLibrary_LoadJsonFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLibrary_LoadJsonFile_Statics::NewProp_FilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLibrary_LoadJsonFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonLibrary_LoadJsonFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "Comment", "/* Load a JSON file from disk and parse it. */" },
		{ "DisplayName", "Load JSON File" },
		{ "ModuleRelativePath", "Public/BlueprintJsonLibrary.h" },
		{ "ToolTip", "Load a JSON file from disk and parse it." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonLibrary_LoadJsonFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonLibrary, nullptr, "LoadJsonFile", nullptr, nullptr, sizeof(JsonLibrary_eventLoadJsonFile_Parms), Z_Construct_UFunction_UJsonLibrary_LoadJsonFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_LoadJsonFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonLibrary_LoadJsonFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_LoadJsonFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonLibrary_LoadJsonFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonLibrary_LoadJsonFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonLibrary_StringifyJsonObject_Statics
	{
		struct JsonLibrary_eventStringifyJsonObject_Parms
		{
			const UJsonObject* Object;
			FString OutJsonString;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutJsonString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonLibrary_StringifyJsonObject_Statics::NewProp_Object_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonLibrary_StringifyJsonObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonLibrary_eventStringifyJsonObject_Parms, Object), Z_Construct_UClass_UJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UJsonLibrary_StringifyJsonObject_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_StringifyJsonObject_Statics::NewProp_Object_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonLibrary_StringifyJsonObject_Statics::NewProp_OutJsonString = { "OutJsonString", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonLibrary_eventStringifyJsonObject_Parms, OutJsonString), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonLibrary_StringifyJsonObject_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Success" },
	};
#endif
	void Z_Construct_UFunction_UJsonLibrary_StringifyJsonObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((JsonLibrary_eventStringifyJsonObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJsonLibrary_StringifyJsonObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(JsonLibrary_eventStringifyJsonObject_Parms), &Z_Construct_UFunction_UJsonLibrary_StringifyJsonObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UJsonLibrary_StringifyJsonObject_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_StringifyJsonObject_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonLibrary_StringifyJsonObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLibrary_StringifyJsonObject_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLibrary_StringifyJsonObject_Statics::NewProp_OutJsonString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLibrary_StringifyJsonObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonLibrary_StringifyJsonObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON|Object" },
		{ "Comment", "/* Stringify the provided JSON object. This node is not asynchronous. */" },
		{ "DisplayName", "JSON object to string" },
		{ "ModuleRelativePath", "Public/BlueprintJsonLibrary.h" },
		{ "ToolTip", "Stringify the provided JSON object. This node is not asynchronous." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonLibrary_StringifyJsonObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonLibrary, nullptr, "StringifyJsonObject", nullptr, nullptr, sizeof(JsonLibrary_eventStringifyJsonObject_Parms), Z_Construct_UFunction_UJsonLibrary_StringifyJsonObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_StringifyJsonObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonLibrary_StringifyJsonObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLibrary_StringifyJsonObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonLibrary_StringifyJsonObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonLibrary_StringifyJsonObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UJsonLibrary_NoRegister()
	{
		return UJsonLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UJsonLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UJsonLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintJson,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UJsonLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UJsonLibrary_JsonValue_Bool, "JsonValue_Bool" }, // 195307050
		{ &Z_Construct_UFunction_UJsonLibrary_JsonValue_Boolean, "JsonValue_Boolean" }, // 2892442607
		{ &Z_Construct_UFunction_UJsonLibrary_JsonValue_Color, "JsonValue_Color" }, // 3004201585
		{ &Z_Construct_UFunction_UJsonLibrary_JsonValue_Float, "JsonValue_Float" }, // 3766996816
		{ &Z_Construct_UFunction_UJsonLibrary_JsonValue_HitResult, "JsonValue_HitResult" }, // 1484833731
		{ &Z_Construct_UFunction_UJsonLibrary_JsonValue_Int64, "JsonValue_Int64" }, // 594813462
		{ &Z_Construct_UFunction_UJsonLibrary_JsonValue_JsonObject, "JsonValue_JsonObject" }, // 1158758718
		{ &Z_Construct_UFunction_UJsonLibrary_JsonValue_LinearColor, "JsonValue_LinearColor" }, // 3655006512
		{ &Z_Construct_UFunction_UJsonLibrary_JsonValue_Name, "JsonValue_Name" }, // 1562268019
		{ &Z_Construct_UFunction_UJsonLibrary_JsonValue_Quat, "JsonValue_Quat" }, // 1881229186
		{ &Z_Construct_UFunction_UJsonLibrary_JsonValue_Rotator, "JsonValue_Rotator" }, // 598788072
		{ &Z_Construct_UFunction_UJsonLibrary_JsonValue_String, "JsonValue_String" }, // 4229363263
		{ &Z_Construct_UFunction_UJsonLibrary_JsonValue_Text, "JsonValue_Text" }, // 4017821840
		{ &Z_Construct_UFunction_UJsonLibrary_JsonValue_ToArray, "JsonValue_ToArray" }, // 2326431317
		{ &Z_Construct_UFunction_UJsonLibrary_JsonValue_ToBool, "JsonValue_ToBool" }, // 406878328
		{ &Z_Construct_UFunction_UJsonLibrary_JsonValue_ToFloat, "JsonValue_ToFloat" }, // 2808852874
		{ &Z_Construct_UFunction_UJsonLibrary_JsonValue_ToInteger, "JsonValue_ToInteger" }, // 4275379202
		{ &Z_Construct_UFunction_UJsonLibrary_JsonValue_ToInteger64, "JsonValue_ToInteger64" }, // 3114535191
		{ &Z_Construct_UFunction_UJsonLibrary_JsonValue_ToObject, "JsonValue_ToObject" }, // 3849756768
		{ &Z_Construct_UFunction_UJsonLibrary_JsonValue_ToRotator, "JsonValue_ToRotator" }, // 2982737984
		{ &Z_Construct_UFunction_UJsonLibrary_JsonValue_ToString, "JsonValue_ToString" }, // 2944500911
		{ &Z_Construct_UFunction_UJsonLibrary_JsonValue_ToTransform, "JsonValue_ToTransform" }, // 3381795616
		{ &Z_Construct_UFunction_UJsonLibrary_JsonValue_ToVector, "JsonValue_ToVector" }, // 1679802379
		{ &Z_Construct_UFunction_UJsonLibrary_JsonValue_Transform, "JsonValue_Transform" }, // 3266474012
		{ &Z_Construct_UFunction_UJsonLibrary_JsonValue_Vector, "JsonValue_Vector" }, // 1201004923
		{ &Z_Construct_UFunction_UJsonLibrary_JsonValue_Vector2D, "JsonValue_Vector2D" }, // 4150936454
		{ &Z_Construct_UFunction_UJsonLibrary_LoadJsonFile, "LoadJsonFile" }, // 2707348776
		{ &Z_Construct_UFunction_UJsonLibrary_StringifyJsonObject, "StringifyJsonObject" }, // 2660653371
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJsonLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *  C++ library exposing Json utilities to Blueprints\n **/" },
		{ "IncludePath", "BlueprintJsonLibrary.h" },
		{ "ModuleRelativePath", "Public/BlueprintJsonLibrary.h" },
		{ "ToolTip", "C++ library exposing Json utilities to Blueprints" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UJsonLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJsonLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UJsonLibrary_Statics::ClassParams = {
		&UJsonLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UJsonLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UJsonLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UJsonLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UJsonLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UJsonLibrary, 3425126288);
	template<> BLUEPRINTJSON_API UClass* StaticClass<UJsonLibrary>()
	{
		return UJsonLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UJsonLibrary(Z_Construct_UClass_UJsonLibrary, &UJsonLibrary::StaticClass, TEXT("/Script/BlueprintJson"), TEXT("UJsonLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJsonLibrary);
	DEFINE_FUNCTION(UInternalJsonLibrary::execJO_AddField_Arr_HitResult)
	{
		P_GET_OBJECT(UJsonObject,Z_Param_JsonObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_TARRAY_REF(FHitResult,Z_Param_Out_FieldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UInternalJsonLibrary::JO_AddField_Arr_HitResult(Z_Param_JsonObject,Z_Param_FieldName,Z_Param_Out_FieldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInternalJsonLibrary::execJO_AddField_Arr_Quat)
	{
		P_GET_OBJECT(UJsonObject,Z_Param_JsonObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_TARRAY_REF(FQuat,Z_Param_Out_FieldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UInternalJsonLibrary::JO_AddField_Arr_Quat(Z_Param_JsonObject,Z_Param_FieldName,Z_Param_Out_FieldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInternalJsonLibrary::execJO_AddField_Arr_LinearColor)
	{
		P_GET_OBJECT(UJsonObject,Z_Param_JsonObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_FieldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UInternalJsonLibrary::JO_AddField_Arr_LinearColor(Z_Param_JsonObject,Z_Param_FieldName,Z_Param_Out_FieldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInternalJsonLibrary::execJO_AddField_Arr_Rotator)
	{
		P_GET_OBJECT(UJsonObject,Z_Param_JsonObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_TARRAY_REF(FRotator,Z_Param_Out_FieldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UInternalJsonLibrary::JO_AddField_Arr_Rotator(Z_Param_JsonObject,Z_Param_FieldName,Z_Param_Out_FieldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInternalJsonLibrary::execJO_AddField_Arr_Transform)
	{
		P_GET_OBJECT(UJsonObject,Z_Param_JsonObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_TARRAY_REF(FTransform,Z_Param_Out_FieldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UInternalJsonLibrary::JO_AddField_Arr_Transform(Z_Param_JsonObject,Z_Param_FieldName,Z_Param_Out_FieldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInternalJsonLibrary::execJO_AddField_Arr_Vector2D)
	{
		P_GET_OBJECT(UJsonObject,Z_Param_JsonObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_FieldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UInternalJsonLibrary::JO_AddField_Arr_Vector2D(Z_Param_JsonObject,Z_Param_FieldName,Z_Param_Out_FieldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInternalJsonLibrary::execJO_AddField_Arr_Vector)
	{
		P_GET_OBJECT(UJsonObject,Z_Param_JsonObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_FieldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UInternalJsonLibrary::JO_AddField_Arr_Vector(Z_Param_JsonObject,Z_Param_FieldName,Z_Param_Out_FieldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInternalJsonLibrary::execJO_AddField_Arr_Object)
	{
		P_GET_OBJECT(UJsonObject,Z_Param_JsonObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_FieldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UInternalJsonLibrary::JO_AddField_Arr_Object(Z_Param_JsonObject,Z_Param_FieldName,Z_Param_Out_FieldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInternalJsonLibrary::execJO_AddField_Arr_Boolean)
	{
		P_GET_OBJECT(UJsonObject,Z_Param_JsonObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_TARRAY_REF(bool,Z_Param_Out_FieldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UInternalJsonLibrary::JO_AddField_Arr_Boolean(Z_Param_JsonObject,Z_Param_FieldName,Z_Param_Out_FieldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInternalJsonLibrary::execJO_AddField_Arr_String)
	{
		P_GET_OBJECT(UJsonObject,Z_Param_JsonObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_TARRAY_REF(FString,Z_Param_Out_FieldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UInternalJsonLibrary::JO_AddField_Arr_String(Z_Param_JsonObject,Z_Param_FieldName,Z_Param_Out_FieldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInternalJsonLibrary::execJO_AddField_Arr_Float)
	{
		P_GET_OBJECT(UJsonObject,Z_Param_JsonObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_TARRAY_REF(float,Z_Param_Out_FieldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UInternalJsonLibrary::JO_AddField_Arr_Float(Z_Param_JsonObject,Z_Param_FieldName,Z_Param_Out_FieldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInternalJsonLibrary::execJO_AddField_Arr_Int64)
	{
		P_GET_OBJECT(UJsonObject,Z_Param_JsonObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_TARRAY_REF(int64,Z_Param_Out_FieldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UInternalJsonLibrary::JO_AddField_Arr_Int64(Z_Param_JsonObject,Z_Param_FieldName,Z_Param_Out_FieldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInternalJsonLibrary::execJO_AddField_Arr_Int)
	{
		P_GET_OBJECT(UJsonObject,Z_Param_JsonObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_TARRAY_REF(int32,Z_Param_Out_FieldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UInternalJsonLibrary::JO_AddField_Arr_Int(Z_Param_JsonObject,Z_Param_FieldName,Z_Param_Out_FieldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInternalJsonLibrary::execJO_AddField_HitResult)
	{
		P_GET_OBJECT(UJsonObject,Z_Param_JsonObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_FieldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UInternalJsonLibrary::JO_AddField_HitResult(Z_Param_JsonObject,Z_Param_FieldName,Z_Param_Out_FieldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInternalJsonLibrary::execJO_AddField_Quat)
	{
		P_GET_OBJECT(UJsonObject,Z_Param_JsonObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_FieldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UInternalJsonLibrary::JO_AddField_Quat(Z_Param_JsonObject,Z_Param_FieldName,Z_Param_Out_FieldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInternalJsonLibrary::execJO_AddField_LinearColor)
	{
		P_GET_OBJECT(UJsonObject,Z_Param_JsonObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_FieldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UInternalJsonLibrary::JO_AddField_LinearColor(Z_Param_JsonObject,Z_Param_FieldName,Z_Param_Out_FieldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInternalJsonLibrary::execJO_AddField_Rotator)
	{
		P_GET_OBJECT(UJsonObject,Z_Param_JsonObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_FieldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UInternalJsonLibrary::JO_AddField_Rotator(Z_Param_JsonObject,Z_Param_FieldName,Z_Param_Out_FieldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInternalJsonLibrary::execJO_AddField_Transform)
	{
		P_GET_OBJECT(UJsonObject,Z_Param_JsonObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_FieldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UInternalJsonLibrary::JO_AddField_Transform(Z_Param_JsonObject,Z_Param_FieldName,Z_Param_Out_FieldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInternalJsonLibrary::execJO_AddField_Vector2D)
	{
		P_GET_OBJECT(UJsonObject,Z_Param_JsonObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_FieldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UInternalJsonLibrary::JO_AddField_Vector2D(Z_Param_JsonObject,Z_Param_FieldName,Z_Param_Out_FieldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInternalJsonLibrary::execJO_AddField_Vector)
	{
		P_GET_OBJECT(UJsonObject,Z_Param_JsonObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_FieldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UInternalJsonLibrary::JO_AddField_Vector(Z_Param_JsonObject,Z_Param_FieldName,Z_Param_Out_FieldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInternalJsonLibrary::execJO_AddField_Object)
	{
		P_GET_OBJECT(UJsonObject,Z_Param_JsonObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_OBJECT(UObject,Z_Param_FieldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UInternalJsonLibrary::JO_AddField_Object(Z_Param_JsonObject,Z_Param_FieldName,Z_Param_FieldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInternalJsonLibrary::execJO_AddField_Boolean)
	{
		P_GET_OBJECT(UJsonObject,Z_Param_JsonObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_UBOOL(Z_Param_FieldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UInternalJsonLibrary::JO_AddField_Boolean(Z_Param_JsonObject,Z_Param_FieldName,Z_Param_FieldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInternalJsonLibrary::execJO_AddField_Name)
	{
		P_GET_OBJECT(UJsonObject,Z_Param_JsonObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_FieldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UInternalJsonLibrary::JO_AddField_Name(Z_Param_JsonObject,Z_Param_FieldName,Z_Param_Out_FieldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInternalJsonLibrary::execJO_AddField_Text)
	{
		P_GET_OBJECT(UJsonObject,Z_Param_JsonObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_FieldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UInternalJsonLibrary::JO_AddField_Text(Z_Param_JsonObject,Z_Param_FieldName,Z_Param_Out_FieldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInternalJsonLibrary::execJO_AddField_String)
	{
		P_GET_OBJECT(UJsonObject,Z_Param_JsonObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UInternalJsonLibrary::JO_AddField_String(Z_Param_JsonObject,Z_Param_FieldName,Z_Param_FieldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInternalJsonLibrary::execJO_AddField_Float)
	{
		P_GET_OBJECT(UJsonObject,Z_Param_JsonObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FieldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UInternalJsonLibrary::JO_AddField_Float(Z_Param_JsonObject,Z_Param_FieldName,Z_Param_FieldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInternalJsonLibrary::execJO_AddField_Int64)
	{
		P_GET_OBJECT(UJsonObject,Z_Param_JsonObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_PROPERTY(FInt64Property,Z_Param_FieldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UInternalJsonLibrary::JO_AddField_Int64(Z_Param_JsonObject,Z_Param_FieldName,Z_Param_FieldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInternalJsonLibrary::execJO_AddField_Int)
	{
		P_GET_OBJECT(UJsonObject,Z_Param_JsonObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_PROPERTY(FIntProperty,Z_Param_FieldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UInternalJsonLibrary::JO_AddField_Int(Z_Param_JsonObject,Z_Param_FieldName,Z_Param_FieldValue);
		P_NATIVE_END;
	}
	void UInternalJsonLibrary::StaticRegisterNativesUInternalJsonLibrary()
	{
		UClass* Class = UInternalJsonLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "JO_AddField_Arr_Boolean", &UInternalJsonLibrary::execJO_AddField_Arr_Boolean },
			{ "JO_AddField_Arr_Float", &UInternalJsonLibrary::execJO_AddField_Arr_Float },
			{ "JO_AddField_Arr_HitResult", &UInternalJsonLibrary::execJO_AddField_Arr_HitResult },
			{ "JO_AddField_Arr_Int", &UInternalJsonLibrary::execJO_AddField_Arr_Int },
			{ "JO_AddField_Arr_Int64", &UInternalJsonLibrary::execJO_AddField_Arr_Int64 },
			{ "JO_AddField_Arr_LinearColor", &UInternalJsonLibrary::execJO_AddField_Arr_LinearColor },
			{ "JO_AddField_Arr_Object", &UInternalJsonLibrary::execJO_AddField_Arr_Object },
			{ "JO_AddField_Arr_Quat", &UInternalJsonLibrary::execJO_AddField_Arr_Quat },
			{ "JO_AddField_Arr_Rotator", &UInternalJsonLibrary::execJO_AddField_Arr_Rotator },
			{ "JO_AddField_Arr_String", &UInternalJsonLibrary::execJO_AddField_Arr_String },
			{ "JO_AddField_Arr_Transform", &UInternalJsonLibrary::execJO_AddField_Arr_Transform },
			{ "JO_AddField_Arr_Vector", &UInternalJsonLibrary::execJO_AddField_Arr_Vector },
			{ "JO_AddField_Arr_Vector2D", &UInternalJsonLibrary::execJO_AddField_Arr_Vector2D },
			{ "JO_AddField_Boolean", &UInternalJsonLibrary::execJO_AddField_Boolean },
			{ "JO_AddField_Float", &UInternalJsonLibrary::execJO_AddField_Float },
			{ "JO_AddField_HitResult", &UInternalJsonLibrary::execJO_AddField_HitResult },
			{ "JO_AddField_Int", &UInternalJsonLibrary::execJO_AddField_Int },
			{ "JO_AddField_Int64", &UInternalJsonLibrary::execJO_AddField_Int64 },
			{ "JO_AddField_LinearColor", &UInternalJsonLibrary::execJO_AddField_LinearColor },
			{ "JO_AddField_Name", &UInternalJsonLibrary::execJO_AddField_Name },
			{ "JO_AddField_Object", &UInternalJsonLibrary::execJO_AddField_Object },
			{ "JO_AddField_Quat", &UInternalJsonLibrary::execJO_AddField_Quat },
			{ "JO_AddField_Rotator", &UInternalJsonLibrary::execJO_AddField_Rotator },
			{ "JO_AddField_String", &UInternalJsonLibrary::execJO_AddField_String },
			{ "JO_AddField_Text", &UInternalJsonLibrary::execJO_AddField_Text },
			{ "JO_AddField_Transform", &UInternalJsonLibrary::execJO_AddField_Transform },
			{ "JO_AddField_Vector", &UInternalJsonLibrary::execJO_AddField_Vector },
			{ "JO_AddField_Vector2D", &UInternalJsonLibrary::execJO_AddField_Vector2D },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Boolean_Statics
	{
		struct InternalJsonLibrary_eventJO_AddField_Arr_Boolean_Parms
		{
			const UJsonObject* JsonObject;
			FString FieldName;
			TArray<bool> FieldValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JsonObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FieldValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FieldValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Boolean_Statics::NewProp_JsonObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Boolean_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Arr_Boolean_Parms, JsonObject), Z_Construct_UClass_UJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Boolean_Statics::NewProp_JsonObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Boolean_Statics::NewProp_JsonObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Boolean_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Boolean_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Arr_Boolean_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Boolean_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Boolean_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Boolean_Statics::NewProp_FieldValue_Inner = { "FieldValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Boolean_Statics::NewProp_FieldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Boolean_Statics::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Arr_Boolean_Parms, FieldValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Boolean_Statics::NewProp_FieldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Boolean_Statics::NewProp_FieldValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Boolean_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Boolean_Statics::NewProp_JsonObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Boolean_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Boolean_Statics::NewProp_FieldValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Boolean_Statics::NewProp_FieldValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Boolean_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "ModuleRelativePath", "Public/BlueprintJsonLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Boolean_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInternalJsonLibrary, nullptr, "JO_AddField_Arr_Boolean", nullptr, nullptr, sizeof(InternalJsonLibrary_eventJO_AddField_Arr_Boolean_Parms), Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Boolean_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Boolean_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Boolean_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Boolean_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Boolean()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Boolean_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Float_Statics
	{
		struct InternalJsonLibrary_eventJO_AddField_Arr_Float_Parms
		{
			const UJsonObject* JsonObject;
			FString FieldName;
			TArray<float> FieldValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JsonObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FieldValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FieldValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Float_Statics::NewProp_JsonObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Float_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Arr_Float_Parms, JsonObject), Z_Construct_UClass_UJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Float_Statics::NewProp_JsonObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Float_Statics::NewProp_JsonObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Float_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Float_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Arr_Float_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Float_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Float_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Float_Statics::NewProp_FieldValue_Inner = { "FieldValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Float_Statics::NewProp_FieldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Float_Statics::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Arr_Float_Parms, FieldValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Float_Statics::NewProp_FieldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Float_Statics::NewProp_FieldValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Float_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Float_Statics::NewProp_JsonObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Float_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Float_Statics::NewProp_FieldValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Float_Statics::NewProp_FieldValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Float_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "ModuleRelativePath", "Public/BlueprintJsonLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Float_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInternalJsonLibrary, nullptr, "JO_AddField_Arr_Float", nullptr, nullptr, sizeof(InternalJsonLibrary_eventJO_AddField_Arr_Float_Parms), Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Float_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Float_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Float_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Float_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Float()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Float_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_HitResult_Statics
	{
		struct InternalJsonLibrary_eventJO_AddField_Arr_HitResult_Parms
		{
			const UJsonObject* JsonObject;
			FString FieldName;
			TArray<FHitResult> FieldValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JsonObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FieldValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FieldValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_HitResult_Statics::NewProp_JsonObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_HitResult_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Arr_HitResult_Parms, JsonObject), Z_Construct_UClass_UJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_HitResult_Statics::NewProp_JsonObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_HitResult_Statics::NewProp_JsonObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_HitResult_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_HitResult_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Arr_HitResult_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_HitResult_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_HitResult_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_HitResult_Statics::NewProp_FieldValue_Inner = { "FieldValue", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_HitResult_Statics::NewProp_FieldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_HitResult_Statics::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Arr_HitResult_Parms, FieldValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_HitResult_Statics::NewProp_FieldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_HitResult_Statics::NewProp_FieldValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_HitResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_HitResult_Statics::NewProp_JsonObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_HitResult_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_HitResult_Statics::NewProp_FieldValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_HitResult_Statics::NewProp_FieldValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_HitResult_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "ModuleRelativePath", "Public/BlueprintJsonLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_HitResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInternalJsonLibrary, nullptr, "JO_AddField_Arr_HitResult", nullptr, nullptr, sizeof(InternalJsonLibrary_eventJO_AddField_Arr_HitResult_Parms), Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_HitResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_HitResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_HitResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_HitResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_HitResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_HitResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Int_Statics
	{
		struct InternalJsonLibrary_eventJO_AddField_Arr_Int_Parms
		{
			const UJsonObject* JsonObject;
			FString FieldName;
			TArray<int32> FieldValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JsonObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FieldValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FieldValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Int_Statics::NewProp_JsonObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Int_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Arr_Int_Parms, JsonObject), Z_Construct_UClass_UJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Int_Statics::NewProp_JsonObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Int_Statics::NewProp_JsonObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Int_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Int_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Arr_Int_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Int_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Int_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Int_Statics::NewProp_FieldValue_Inner = { "FieldValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Int_Statics::NewProp_FieldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Int_Statics::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Arr_Int_Parms, FieldValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Int_Statics::NewProp_FieldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Int_Statics::NewProp_FieldValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Int_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Int_Statics::NewProp_JsonObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Int_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Int_Statics::NewProp_FieldValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Int_Statics::NewProp_FieldValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Int_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Comment", "/* Add Array Field to JSON Object functions. */" },
		{ "ModuleRelativePath", "Public/BlueprintJsonLibrary.h" },
		{ "ToolTip", "Add Array Field to JSON Object functions." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Int_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInternalJsonLibrary, nullptr, "JO_AddField_Arr_Int", nullptr, nullptr, sizeof(InternalJsonLibrary_eventJO_AddField_Arr_Int_Parms), Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Int_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Int_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Int_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Int_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Int()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Int_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Int64_Statics
	{
		struct InternalJsonLibrary_eventJO_AddField_Arr_Int64_Parms
		{
			const UJsonObject* JsonObject;
			FString FieldName;
			TArray<int64> FieldValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JsonObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_FieldValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FieldValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Int64_Statics::NewProp_JsonObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Int64_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Arr_Int64_Parms, JsonObject), Z_Construct_UClass_UJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Int64_Statics::NewProp_JsonObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Int64_Statics::NewProp_JsonObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Int64_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Int64_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Arr_Int64_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Int64_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Int64_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Int64_Statics::NewProp_FieldValue_Inner = { "FieldValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Int64_Statics::NewProp_FieldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Int64_Statics::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Arr_Int64_Parms, FieldValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Int64_Statics::NewProp_FieldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Int64_Statics::NewProp_FieldValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Int64_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Int64_Statics::NewProp_JsonObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Int64_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Int64_Statics::NewProp_FieldValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Int64_Statics::NewProp_FieldValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Int64_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "ModuleRelativePath", "Public/BlueprintJsonLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Int64_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInternalJsonLibrary, nullptr, "JO_AddField_Arr_Int64", nullptr, nullptr, sizeof(InternalJsonLibrary_eventJO_AddField_Arr_Int64_Parms), Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Int64_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Int64_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Int64_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Int64_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Int64()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Int64_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_LinearColor_Statics
	{
		struct InternalJsonLibrary_eventJO_AddField_Arr_LinearColor_Parms
		{
			const UJsonObject* JsonObject;
			FString FieldName;
			TArray<FLinearColor> FieldValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JsonObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FieldValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FieldValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_LinearColor_Statics::NewProp_JsonObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_LinearColor_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Arr_LinearColor_Parms, JsonObject), Z_Construct_UClass_UJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_LinearColor_Statics::NewProp_JsonObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_LinearColor_Statics::NewProp_JsonObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_LinearColor_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_LinearColor_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Arr_LinearColor_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_LinearColor_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_LinearColor_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_LinearColor_Statics::NewProp_FieldValue_Inner = { "FieldValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_LinearColor_Statics::NewProp_FieldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_LinearColor_Statics::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Arr_LinearColor_Parms, FieldValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_LinearColor_Statics::NewProp_FieldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_LinearColor_Statics::NewProp_FieldValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_LinearColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_LinearColor_Statics::NewProp_JsonObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_LinearColor_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_LinearColor_Statics::NewProp_FieldValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_LinearColor_Statics::NewProp_FieldValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_LinearColor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "ModuleRelativePath", "Public/BlueprintJsonLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_LinearColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInternalJsonLibrary, nullptr, "JO_AddField_Arr_LinearColor", nullptr, nullptr, sizeof(InternalJsonLibrary_eventJO_AddField_Arr_LinearColor_Parms), Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_LinearColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_LinearColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_LinearColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_LinearColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_LinearColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_LinearColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Object_Statics
	{
		struct InternalJsonLibrary_eventJO_AddField_Arr_Object_Parms
		{
			const UJsonObject* JsonObject;
			FString FieldName;
			TArray<UObject*> FieldValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JsonObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FieldValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FieldValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Object_Statics::NewProp_JsonObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Object_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Arr_Object_Parms, JsonObject), Z_Construct_UClass_UJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Object_Statics::NewProp_JsonObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Object_Statics::NewProp_JsonObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Object_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Object_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Arr_Object_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Object_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Object_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Object_Statics::NewProp_FieldValue_Inner = { "FieldValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Object_Statics::NewProp_FieldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Object_Statics::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Arr_Object_Parms, FieldValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Object_Statics::NewProp_FieldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Object_Statics::NewProp_FieldValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Object_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Object_Statics::NewProp_JsonObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Object_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Object_Statics::NewProp_FieldValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Object_Statics::NewProp_FieldValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Object_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "ModuleRelativePath", "Public/BlueprintJsonLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Object_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInternalJsonLibrary, nullptr, "JO_AddField_Arr_Object", nullptr, nullptr, sizeof(InternalJsonLibrary_eventJO_AddField_Arr_Object_Parms), Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Object_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Object_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Object_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Object_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Object()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Object_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Quat_Statics
	{
		struct InternalJsonLibrary_eventJO_AddField_Arr_Quat_Parms
		{
			const UJsonObject* JsonObject;
			FString FieldName;
			TArray<FQuat> FieldValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JsonObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FieldValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FieldValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Quat_Statics::NewProp_JsonObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Quat_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Arr_Quat_Parms, JsonObject), Z_Construct_UClass_UJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Quat_Statics::NewProp_JsonObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Quat_Statics::NewProp_JsonObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Quat_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Quat_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Arr_Quat_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Quat_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Quat_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Quat_Statics::NewProp_FieldValue_Inner = { "FieldValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Quat_Statics::NewProp_FieldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Quat_Statics::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Arr_Quat_Parms, FieldValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Quat_Statics::NewProp_FieldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Quat_Statics::NewProp_FieldValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Quat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Quat_Statics::NewProp_JsonObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Quat_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Quat_Statics::NewProp_FieldValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Quat_Statics::NewProp_FieldValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Quat_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "ModuleRelativePath", "Public/BlueprintJsonLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Quat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInternalJsonLibrary, nullptr, "JO_AddField_Arr_Quat", nullptr, nullptr, sizeof(InternalJsonLibrary_eventJO_AddField_Arr_Quat_Parms), Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Quat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Quat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Quat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Quat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Quat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Quat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Rotator_Statics
	{
		struct InternalJsonLibrary_eventJO_AddField_Arr_Rotator_Parms
		{
			const UJsonObject* JsonObject;
			FString FieldName;
			TArray<FRotator> FieldValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JsonObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FieldValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FieldValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Rotator_Statics::NewProp_JsonObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Rotator_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Arr_Rotator_Parms, JsonObject), Z_Construct_UClass_UJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Rotator_Statics::NewProp_JsonObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Rotator_Statics::NewProp_JsonObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Rotator_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Rotator_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Arr_Rotator_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Rotator_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Rotator_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Rotator_Statics::NewProp_FieldValue_Inner = { "FieldValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Rotator_Statics::NewProp_FieldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Rotator_Statics::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Arr_Rotator_Parms, FieldValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Rotator_Statics::NewProp_FieldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Rotator_Statics::NewProp_FieldValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Rotator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Rotator_Statics::NewProp_JsonObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Rotator_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Rotator_Statics::NewProp_FieldValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Rotator_Statics::NewProp_FieldValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Rotator_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "ModuleRelativePath", "Public/BlueprintJsonLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Rotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInternalJsonLibrary, nullptr, "JO_AddField_Arr_Rotator", nullptr, nullptr, sizeof(InternalJsonLibrary_eventJO_AddField_Arr_Rotator_Parms), Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Rotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Rotator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Rotator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Rotator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Rotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Rotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_String_Statics
	{
		struct InternalJsonLibrary_eventJO_AddField_Arr_String_Parms
		{
			const UJsonObject* JsonObject;
			FString FieldName;
			TArray<FString> FieldValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JsonObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FieldValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_String_Statics::NewProp_JsonObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_String_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Arr_String_Parms, JsonObject), Z_Construct_UClass_UJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_String_Statics::NewProp_JsonObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_String_Statics::NewProp_JsonObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_String_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_String_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Arr_String_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_String_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_String_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_String_Statics::NewProp_FieldValue_Inner = { "FieldValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_String_Statics::NewProp_FieldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_String_Statics::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Arr_String_Parms, FieldValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_String_Statics::NewProp_FieldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_String_Statics::NewProp_FieldValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_String_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_String_Statics::NewProp_JsonObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_String_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_String_Statics::NewProp_FieldValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_String_Statics::NewProp_FieldValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_String_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "ModuleRelativePath", "Public/BlueprintJsonLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_String_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInternalJsonLibrary, nullptr, "JO_AddField_Arr_String", nullptr, nullptr, sizeof(InternalJsonLibrary_eventJO_AddField_Arr_String_Parms), Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_String_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_String_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_String_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_String_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_String()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_String_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Transform_Statics
	{
		struct InternalJsonLibrary_eventJO_AddField_Arr_Transform_Parms
		{
			const UJsonObject* JsonObject;
			FString FieldName;
			TArray<FTransform> FieldValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JsonObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FieldValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FieldValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Transform_Statics::NewProp_JsonObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Transform_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Arr_Transform_Parms, JsonObject), Z_Construct_UClass_UJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Transform_Statics::NewProp_JsonObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Transform_Statics::NewProp_JsonObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Transform_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Transform_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Arr_Transform_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Transform_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Transform_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Transform_Statics::NewProp_FieldValue_Inner = { "FieldValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Transform_Statics::NewProp_FieldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Transform_Statics::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Arr_Transform_Parms, FieldValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Transform_Statics::NewProp_FieldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Transform_Statics::NewProp_FieldValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Transform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Transform_Statics::NewProp_JsonObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Transform_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Transform_Statics::NewProp_FieldValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Transform_Statics::NewProp_FieldValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Transform_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "ModuleRelativePath", "Public/BlueprintJsonLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Transform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInternalJsonLibrary, nullptr, "JO_AddField_Arr_Transform", nullptr, nullptr, sizeof(InternalJsonLibrary_eventJO_AddField_Arr_Transform_Parms), Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Transform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Transform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Transform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Transform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Transform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Transform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Vector_Statics
	{
		struct InternalJsonLibrary_eventJO_AddField_Arr_Vector_Parms
		{
			const UJsonObject* JsonObject;
			FString FieldName;
			TArray<FVector> FieldValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JsonObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FieldValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FieldValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Vector_Statics::NewProp_JsonObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Vector_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Arr_Vector_Parms, JsonObject), Z_Construct_UClass_UJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Vector_Statics::NewProp_JsonObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Vector_Statics::NewProp_JsonObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Vector_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Vector_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Arr_Vector_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Vector_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Vector_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Vector_Statics::NewProp_FieldValue_Inner = { "FieldValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Vector_Statics::NewProp_FieldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Vector_Statics::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Arr_Vector_Parms, FieldValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Vector_Statics::NewProp_FieldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Vector_Statics::NewProp_FieldValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Vector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Vector_Statics::NewProp_JsonObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Vector_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Vector_Statics::NewProp_FieldValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Vector_Statics::NewProp_FieldValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Vector_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "ModuleRelativePath", "Public/BlueprintJsonLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Vector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInternalJsonLibrary, nullptr, "JO_AddField_Arr_Vector", nullptr, nullptr, sizeof(InternalJsonLibrary_eventJO_AddField_Arr_Vector_Parms), Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Vector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Vector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Vector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Vector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Vector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Vector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Vector2D_Statics
	{
		struct InternalJsonLibrary_eventJO_AddField_Arr_Vector2D_Parms
		{
			const UJsonObject* JsonObject;
			FString FieldName;
			TArray<FVector2D> FieldValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JsonObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FieldValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FieldValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Vector2D_Statics::NewProp_JsonObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Vector2D_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Arr_Vector2D_Parms, JsonObject), Z_Construct_UClass_UJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Vector2D_Statics::NewProp_JsonObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Vector2D_Statics::NewProp_JsonObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Vector2D_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Vector2D_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Arr_Vector2D_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Vector2D_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Vector2D_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Vector2D_Statics::NewProp_FieldValue_Inner = { "FieldValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Vector2D_Statics::NewProp_FieldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Vector2D_Statics::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Arr_Vector2D_Parms, FieldValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Vector2D_Statics::NewProp_FieldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Vector2D_Statics::NewProp_FieldValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Vector2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Vector2D_Statics::NewProp_JsonObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Vector2D_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Vector2D_Statics::NewProp_FieldValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Vector2D_Statics::NewProp_FieldValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Vector2D_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "ModuleRelativePath", "Public/BlueprintJsonLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Vector2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInternalJsonLibrary, nullptr, "JO_AddField_Arr_Vector2D", nullptr, nullptr, sizeof(InternalJsonLibrary_eventJO_AddField_Arr_Vector2D_Parms), Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Vector2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Vector2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Vector2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Vector2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Vector2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Vector2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Boolean_Statics
	{
		struct InternalJsonLibrary_eventJO_AddField_Boolean_Parms
		{
			const UJsonObject* JsonObject;
			FString FieldName;
			bool FieldValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JsonObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldValue_MetaData[];
#endif
		static void NewProp_FieldValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FieldValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Boolean_Statics::NewProp_JsonObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Boolean_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Boolean_Parms, JsonObject), Z_Construct_UClass_UJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Boolean_Statics::NewProp_JsonObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Boolean_Statics::NewProp_JsonObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Boolean_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Boolean_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Boolean_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Boolean_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Boolean_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Boolean_Statics::NewProp_FieldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Boolean_Statics::NewProp_FieldValue_SetBit(void* Obj)
	{
		((InternalJsonLibrary_eventJO_AddField_Boolean_Parms*)Obj)->FieldValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Boolean_Statics::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InternalJsonLibrary_eventJO_AddField_Boolean_Parms), &Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Boolean_Statics::NewProp_FieldValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Boolean_Statics::NewProp_FieldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Boolean_Statics::NewProp_FieldValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Boolean_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Boolean_Statics::NewProp_JsonObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Boolean_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Boolean_Statics::NewProp_FieldValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Boolean_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "ModuleRelativePath", "Public/BlueprintJsonLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Boolean_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInternalJsonLibrary, nullptr, "JO_AddField_Boolean", nullptr, nullptr, sizeof(InternalJsonLibrary_eventJO_AddField_Boolean_Parms), Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Boolean_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Boolean_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Boolean_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Boolean_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Boolean()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Boolean_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Float_Statics
	{
		struct InternalJsonLibrary_eventJO_AddField_Float_Parms
		{
			const UJsonObject* JsonObject;
			FString FieldName;
			float FieldValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JsonObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FieldValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Float_Statics::NewProp_JsonObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Float_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Float_Parms, JsonObject), Z_Construct_UClass_UJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Float_Statics::NewProp_JsonObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Float_Statics::NewProp_JsonObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Float_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Float_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Float_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Float_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Float_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Float_Statics::NewProp_FieldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Float_Statics::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Float_Parms, FieldValue), METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Float_Statics::NewProp_FieldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Float_Statics::NewProp_FieldValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Float_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Float_Statics::NewProp_JsonObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Float_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Float_Statics::NewProp_FieldValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Float_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "ModuleRelativePath", "Public/BlueprintJsonLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Float_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInternalJsonLibrary, nullptr, "JO_AddField_Float", nullptr, nullptr, sizeof(InternalJsonLibrary_eventJO_AddField_Float_Parms), Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Float_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Float_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Float_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Float_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Float()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Float_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_HitResult_Statics
	{
		struct InternalJsonLibrary_eventJO_AddField_HitResult_Parms
		{
			const UJsonObject* JsonObject;
			FString FieldName;
			FHitResult FieldValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JsonObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FieldValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_HitResult_Statics::NewProp_JsonObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_HitResult_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_HitResult_Parms, JsonObject), Z_Construct_UClass_UJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_HitResult_Statics::NewProp_JsonObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_HitResult_Statics::NewProp_JsonObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_HitResult_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_HitResult_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_HitResult_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_HitResult_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_HitResult_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_HitResult_Statics::NewProp_FieldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_HitResult_Statics::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_HitResult_Parms, FieldValue), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_HitResult_Statics::NewProp_FieldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_HitResult_Statics::NewProp_FieldValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_HitResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_HitResult_Statics::NewProp_JsonObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_HitResult_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_HitResult_Statics::NewProp_FieldValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_HitResult_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "ModuleRelativePath", "Public/BlueprintJsonLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_HitResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInternalJsonLibrary, nullptr, "JO_AddField_HitResult", nullptr, nullptr, sizeof(InternalJsonLibrary_eventJO_AddField_HitResult_Parms), Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_HitResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_HitResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_HitResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_HitResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_HitResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_HitResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Int_Statics
	{
		struct InternalJsonLibrary_eventJO_AddField_Int_Parms
		{
			const UJsonObject* JsonObject;
			FString FieldName;
			int32 FieldValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JsonObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FieldValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Int_Statics::NewProp_JsonObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Int_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Int_Parms, JsonObject), Z_Construct_UClass_UJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Int_Statics::NewProp_JsonObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Int_Statics::NewProp_JsonObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Int_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Int_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Int_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Int_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Int_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Int_Statics::NewProp_FieldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Int_Statics::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Int_Parms, FieldValue), METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Int_Statics::NewProp_FieldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Int_Statics::NewProp_FieldValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Int_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Int_Statics::NewProp_JsonObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Int_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Int_Statics::NewProp_FieldValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Int_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Comment", "/* Add Field to JSON Object functions. */" },
		{ "ModuleRelativePath", "Public/BlueprintJsonLibrary.h" },
		{ "ToolTip", "Add Field to JSON Object functions." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Int_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInternalJsonLibrary, nullptr, "JO_AddField_Int", nullptr, nullptr, sizeof(InternalJsonLibrary_eventJO_AddField_Int_Parms), Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Int_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Int_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Int_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Int_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Int()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Int_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Int64_Statics
	{
		struct InternalJsonLibrary_eventJO_AddField_Int64_Parms
		{
			const UJsonObject* JsonObject;
			FString FieldName;
			int64 FieldValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JsonObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_FieldValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Int64_Statics::NewProp_JsonObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Int64_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Int64_Parms, JsonObject), Z_Construct_UClass_UJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Int64_Statics::NewProp_JsonObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Int64_Statics::NewProp_JsonObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Int64_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Int64_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Int64_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Int64_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Int64_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Int64_Statics::NewProp_FieldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Int64_Statics::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Int64_Parms, FieldValue), METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Int64_Statics::NewProp_FieldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Int64_Statics::NewProp_FieldValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Int64_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Int64_Statics::NewProp_JsonObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Int64_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Int64_Statics::NewProp_FieldValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Int64_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "ModuleRelativePath", "Public/BlueprintJsonLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Int64_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInternalJsonLibrary, nullptr, "JO_AddField_Int64", nullptr, nullptr, sizeof(InternalJsonLibrary_eventJO_AddField_Int64_Parms), Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Int64_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Int64_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Int64_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Int64_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Int64()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Int64_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_LinearColor_Statics
	{
		struct InternalJsonLibrary_eventJO_AddField_LinearColor_Parms
		{
			const UJsonObject* JsonObject;
			FString FieldName;
			FLinearColor FieldValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JsonObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FieldValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_LinearColor_Statics::NewProp_JsonObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_LinearColor_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_LinearColor_Parms, JsonObject), Z_Construct_UClass_UJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_LinearColor_Statics::NewProp_JsonObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_LinearColor_Statics::NewProp_JsonObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_LinearColor_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_LinearColor_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_LinearColor_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_LinearColor_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_LinearColor_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_LinearColor_Statics::NewProp_FieldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_LinearColor_Statics::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_LinearColor_Parms, FieldValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_LinearColor_Statics::NewProp_FieldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_LinearColor_Statics::NewProp_FieldValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_LinearColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_LinearColor_Statics::NewProp_JsonObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_LinearColor_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_LinearColor_Statics::NewProp_FieldValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_LinearColor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "ModuleRelativePath", "Public/BlueprintJsonLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_LinearColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInternalJsonLibrary, nullptr, "JO_AddField_LinearColor", nullptr, nullptr, sizeof(InternalJsonLibrary_eventJO_AddField_LinearColor_Parms), Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_LinearColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_LinearColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_LinearColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_LinearColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_LinearColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_LinearColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Name_Statics
	{
		struct InternalJsonLibrary_eventJO_AddField_Name_Parms
		{
			const UJsonObject* JsonObject;
			FString FieldName;
			FName FieldValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JsonObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FieldValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Name_Statics::NewProp_JsonObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Name_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Name_Parms, JsonObject), Z_Construct_UClass_UJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Name_Statics::NewProp_JsonObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Name_Statics::NewProp_JsonObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Name_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Name_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Name_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Name_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Name_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Name_Statics::NewProp_FieldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Name_Statics::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Name_Parms, FieldValue), METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Name_Statics::NewProp_FieldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Name_Statics::NewProp_FieldValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Name_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Name_Statics::NewProp_JsonObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Name_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Name_Statics::NewProp_FieldValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Name_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "ModuleRelativePath", "Public/BlueprintJsonLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Name_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInternalJsonLibrary, nullptr, "JO_AddField_Name", nullptr, nullptr, sizeof(InternalJsonLibrary_eventJO_AddField_Name_Parms), Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Name_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Name_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Name_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Name_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Name()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Name_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Object_Statics
	{
		struct InternalJsonLibrary_eventJO_AddField_Object_Parms
		{
			const UJsonObject* JsonObject;
			FString FieldName;
			const UObject* FieldValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JsonObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FieldValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Object_Statics::NewProp_JsonObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Object_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Object_Parms, JsonObject), Z_Construct_UClass_UJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Object_Statics::NewProp_JsonObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Object_Statics::NewProp_JsonObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Object_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Object_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Object_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Object_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Object_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Object_Statics::NewProp_FieldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Object_Statics::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Object_Parms, FieldValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Object_Statics::NewProp_FieldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Object_Statics::NewProp_FieldValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Object_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Object_Statics::NewProp_JsonObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Object_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Object_Statics::NewProp_FieldValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Object_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "ModuleRelativePath", "Public/BlueprintJsonLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Object_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInternalJsonLibrary, nullptr, "JO_AddField_Object", nullptr, nullptr, sizeof(InternalJsonLibrary_eventJO_AddField_Object_Parms), Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Object_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Object_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Object_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Object_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Object()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Object_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Quat_Statics
	{
		struct InternalJsonLibrary_eventJO_AddField_Quat_Parms
		{
			const UJsonObject* JsonObject;
			FString FieldName;
			FQuat FieldValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JsonObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FieldValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Quat_Statics::NewProp_JsonObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Quat_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Quat_Parms, JsonObject), Z_Construct_UClass_UJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Quat_Statics::NewProp_JsonObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Quat_Statics::NewProp_JsonObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Quat_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Quat_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Quat_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Quat_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Quat_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Quat_Statics::NewProp_FieldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Quat_Statics::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Quat_Parms, FieldValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Quat_Statics::NewProp_FieldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Quat_Statics::NewProp_FieldValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Quat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Quat_Statics::NewProp_JsonObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Quat_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Quat_Statics::NewProp_FieldValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Quat_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "ModuleRelativePath", "Public/BlueprintJsonLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Quat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInternalJsonLibrary, nullptr, "JO_AddField_Quat", nullptr, nullptr, sizeof(InternalJsonLibrary_eventJO_AddField_Quat_Parms), Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Quat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Quat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Quat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Quat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Quat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Quat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Rotator_Statics
	{
		struct InternalJsonLibrary_eventJO_AddField_Rotator_Parms
		{
			const UJsonObject* JsonObject;
			FString FieldName;
			FRotator FieldValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JsonObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FieldValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Rotator_Statics::NewProp_JsonObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Rotator_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Rotator_Parms, JsonObject), Z_Construct_UClass_UJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Rotator_Statics::NewProp_JsonObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Rotator_Statics::NewProp_JsonObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Rotator_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Rotator_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Rotator_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Rotator_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Rotator_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Rotator_Statics::NewProp_FieldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Rotator_Statics::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Rotator_Parms, FieldValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Rotator_Statics::NewProp_FieldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Rotator_Statics::NewProp_FieldValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Rotator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Rotator_Statics::NewProp_JsonObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Rotator_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Rotator_Statics::NewProp_FieldValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Rotator_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "ModuleRelativePath", "Public/BlueprintJsonLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Rotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInternalJsonLibrary, nullptr, "JO_AddField_Rotator", nullptr, nullptr, sizeof(InternalJsonLibrary_eventJO_AddField_Rotator_Parms), Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Rotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Rotator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Rotator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Rotator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Rotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Rotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_String_Statics
	{
		struct InternalJsonLibrary_eventJO_AddField_String_Parms
		{
			const UJsonObject* JsonObject;
			FString FieldName;
			FString FieldValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JsonObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_String_Statics::NewProp_JsonObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_String_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_String_Parms, JsonObject), Z_Construct_UClass_UJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_String_Statics::NewProp_JsonObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_String_Statics::NewProp_JsonObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_String_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_String_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_String_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_String_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_String_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_String_Statics::NewProp_FieldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_String_Statics::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_String_Parms, FieldValue), METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_String_Statics::NewProp_FieldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_String_Statics::NewProp_FieldValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_String_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_String_Statics::NewProp_JsonObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_String_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_String_Statics::NewProp_FieldValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_String_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "ModuleRelativePath", "Public/BlueprintJsonLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_String_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInternalJsonLibrary, nullptr, "JO_AddField_String", nullptr, nullptr, sizeof(InternalJsonLibrary_eventJO_AddField_String_Parms), Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_String_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_String_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_String_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_String_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_String()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_String_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Text_Statics
	{
		struct InternalJsonLibrary_eventJO_AddField_Text_Parms
		{
			const UJsonObject* JsonObject;
			FString FieldName;
			FText FieldValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JsonObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_FieldValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Text_Statics::NewProp_JsonObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Text_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Text_Parms, JsonObject), Z_Construct_UClass_UJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Text_Statics::NewProp_JsonObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Text_Statics::NewProp_JsonObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Text_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Text_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Text_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Text_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Text_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Text_Statics::NewProp_FieldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Text_Statics::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Text_Parms, FieldValue), METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Text_Statics::NewProp_FieldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Text_Statics::NewProp_FieldValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Text_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Text_Statics::NewProp_JsonObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Text_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Text_Statics::NewProp_FieldValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Text_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "ModuleRelativePath", "Public/BlueprintJsonLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Text_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInternalJsonLibrary, nullptr, "JO_AddField_Text", nullptr, nullptr, sizeof(InternalJsonLibrary_eventJO_AddField_Text_Parms), Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Text_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Text_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Text_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Text_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Text()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Text_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Transform_Statics
	{
		struct InternalJsonLibrary_eventJO_AddField_Transform_Parms
		{
			const UJsonObject* JsonObject;
			FString FieldName;
			FTransform FieldValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JsonObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FieldValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Transform_Statics::NewProp_JsonObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Transform_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Transform_Parms, JsonObject), Z_Construct_UClass_UJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Transform_Statics::NewProp_JsonObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Transform_Statics::NewProp_JsonObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Transform_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Transform_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Transform_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Transform_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Transform_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Transform_Statics::NewProp_FieldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Transform_Statics::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Transform_Parms, FieldValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Transform_Statics::NewProp_FieldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Transform_Statics::NewProp_FieldValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Transform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Transform_Statics::NewProp_JsonObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Transform_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Transform_Statics::NewProp_FieldValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Transform_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "ModuleRelativePath", "Public/BlueprintJsonLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Transform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInternalJsonLibrary, nullptr, "JO_AddField_Transform", nullptr, nullptr, sizeof(InternalJsonLibrary_eventJO_AddField_Transform_Parms), Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Transform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Transform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Transform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Transform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Transform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Transform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Vector_Statics
	{
		struct InternalJsonLibrary_eventJO_AddField_Vector_Parms
		{
			const UJsonObject* JsonObject;
			FString FieldName;
			FVector FieldValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JsonObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FieldValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Vector_Statics::NewProp_JsonObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Vector_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Vector_Parms, JsonObject), Z_Construct_UClass_UJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Vector_Statics::NewProp_JsonObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Vector_Statics::NewProp_JsonObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Vector_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Vector_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Vector_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Vector_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Vector_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Vector_Statics::NewProp_FieldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Vector_Statics::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Vector_Parms, FieldValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Vector_Statics::NewProp_FieldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Vector_Statics::NewProp_FieldValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Vector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Vector_Statics::NewProp_JsonObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Vector_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Vector_Statics::NewProp_FieldValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Vector_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "ModuleRelativePath", "Public/BlueprintJsonLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Vector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInternalJsonLibrary, nullptr, "JO_AddField_Vector", nullptr, nullptr, sizeof(InternalJsonLibrary_eventJO_AddField_Vector_Parms), Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Vector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Vector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Vector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Vector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Vector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Vector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Vector2D_Statics
	{
		struct InternalJsonLibrary_eventJO_AddField_Vector2D_Parms
		{
			const UJsonObject* JsonObject;
			FString FieldName;
			FVector2D FieldValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JsonObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FieldValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Vector2D_Statics::NewProp_JsonObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Vector2D_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Vector2D_Parms, JsonObject), Z_Construct_UClass_UJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Vector2D_Statics::NewProp_JsonObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Vector2D_Statics::NewProp_JsonObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Vector2D_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Vector2D_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Vector2D_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Vector2D_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Vector2D_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Vector2D_Statics::NewProp_FieldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Vector2D_Statics::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InternalJsonLibrary_eventJO_AddField_Vector2D_Parms, FieldValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Vector2D_Statics::NewProp_FieldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Vector2D_Statics::NewProp_FieldValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Vector2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Vector2D_Statics::NewProp_JsonObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Vector2D_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Vector2D_Statics::NewProp_FieldValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Vector2D_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "ModuleRelativePath", "Public/BlueprintJsonLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Vector2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInternalJsonLibrary, nullptr, "JO_AddField_Vector2D", nullptr, nullptr, sizeof(InternalJsonLibrary_eventJO_AddField_Vector2D_Parms), Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Vector2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Vector2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Vector2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Vector2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Vector2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Vector2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInternalJsonLibrary_NoRegister()
	{
		return UInternalJsonLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UInternalJsonLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInternalJsonLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintJson,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInternalJsonLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Boolean, "JO_AddField_Arr_Boolean" }, // 1342797732
		{ &Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Float, "JO_AddField_Arr_Float" }, // 4042846404
		{ &Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_HitResult, "JO_AddField_Arr_HitResult" }, // 838685663
		{ &Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Int, "JO_AddField_Arr_Int" }, // 792211541
		{ &Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Int64, "JO_AddField_Arr_Int64" }, // 3987825483
		{ &Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_LinearColor, "JO_AddField_Arr_LinearColor" }, // 1279350725
		{ &Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Object, "JO_AddField_Arr_Object" }, // 2099030565
		{ &Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Quat, "JO_AddField_Arr_Quat" }, // 3889803819
		{ &Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Rotator, "JO_AddField_Arr_Rotator" }, // 2234254380
		{ &Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_String, "JO_AddField_Arr_String" }, // 3677571480
		{ &Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Transform, "JO_AddField_Arr_Transform" }, // 3192671576
		{ &Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Vector, "JO_AddField_Arr_Vector" }, // 505083843
		{ &Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Arr_Vector2D, "JO_AddField_Arr_Vector2D" }, // 1047776945
		{ &Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Boolean, "JO_AddField_Boolean" }, // 3059242226
		{ &Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Float, "JO_AddField_Float" }, // 144402775
		{ &Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_HitResult, "JO_AddField_HitResult" }, // 158635627
		{ &Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Int, "JO_AddField_Int" }, // 1721828424
		{ &Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Int64, "JO_AddField_Int64" }, // 1030615382
		{ &Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_LinearColor, "JO_AddField_LinearColor" }, // 4026625619
		{ &Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Name, "JO_AddField_Name" }, // 4025896027
		{ &Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Object, "JO_AddField_Object" }, // 1239629915
		{ &Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Quat, "JO_AddField_Quat" }, // 2479843304
		{ &Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Rotator, "JO_AddField_Rotator" }, // 15792051
		{ &Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_String, "JO_AddField_String" }, // 2004667581
		{ &Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Text, "JO_AddField_Text" }, // 2205262604
		{ &Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Transform, "JO_AddField_Transform" }, // 2794478826
		{ &Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Vector, "JO_AddField_Vector" }, // 1275477890
		{ &Z_Construct_UFunction_UInternalJsonLibrary_JO_AddField_Vector2D, "JO_AddField_Vector2D" }, // 2453471324
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInternalJsonLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n*  Internal C++ library for K2Node. They must be in the final build as they are hidden nodes still present in the graph.\n*  It's migrated from the default Json library to not pollute the namespace.\n**/" },
		{ "IncludePath", "BlueprintJsonLibrary.h" },
		{ "ModuleRelativePath", "Public/BlueprintJsonLibrary.h" },
		{ "ToolTip", "Internal C++ library for K2Node. They must be in the final build as they are hidden nodes still present in the graph.\nIt's migrated from the default Json library to not pollute the namespace." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInternalJsonLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInternalJsonLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInternalJsonLibrary_Statics::ClassParams = {
		&UInternalJsonLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInternalJsonLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInternalJsonLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInternalJsonLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInternalJsonLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInternalJsonLibrary, 3496784105);
	template<> BLUEPRINTJSON_API UClass* StaticClass<UInternalJsonLibrary>()
	{
		return UInternalJsonLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInternalJsonLibrary(Z_Construct_UClass_UInternalJsonLibrary, &UInternalJsonLibrary::StaticClass, TEXT("/Script/BlueprintJson"), TEXT("UInternalJsonLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInternalJsonLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
