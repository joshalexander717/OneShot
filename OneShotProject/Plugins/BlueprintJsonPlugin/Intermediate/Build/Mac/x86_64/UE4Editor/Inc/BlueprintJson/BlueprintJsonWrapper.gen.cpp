// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintJson/Public/BlueprintJsonWrapper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintJsonWrapper() {}
// Cross Module References
	BLUEPRINTJSON_API UEnum* Z_Construct_UEnum_BlueprintJson_EJsonType();
	UPackage* Z_Construct_UPackage__Script_BlueprintJson();
	BLUEPRINTJSON_API UScriptStruct* Z_Construct_UScriptStruct_FJsonObjectField();
	BLUEPRINTJSON_API UClass* Z_Construct_UClass_UJsonValue_NoRegister();
	BLUEPRINTJSON_API UClass* Z_Construct_UClass_UJsonValue();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	BLUEPRINTJSON_API UClass* Z_Construct_UClass_UJsonObject_NoRegister();
	BLUEPRINTJSON_API UClass* Z_Construct_UClass_UJsonObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	static UEnum* EJsonType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BlueprintJson_EJsonType, Z_Construct_UPackage__Script_BlueprintJson(), TEXT("EJsonType"));
		}
		return Singleton;
	}
	template<> BLUEPRINTJSON_API UEnum* StaticEnum<EJsonType>()
	{
		return EJsonType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EJsonType(EJsonType_StaticEnum, TEXT("/Script/BlueprintJson"), TEXT("EJsonType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BlueprintJson_EJsonType_Hash() { return 2654690711U; }
	UEnum* Z_Construct_UEnum_BlueprintJson_EJsonType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BlueprintJson();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EJsonType"), 0, Get_Z_Construct_UEnum_BlueprintJson_EJsonType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EJsonType::Null", (int64)EJsonType::Null },
				{ "EJsonType::String", (int64)EJsonType::String },
				{ "EJsonType::Number", (int64)EJsonType::Number },
				{ "EJsonType::Boolean", (int64)EJsonType::Boolean },
				{ "EJsonType::Array", (int64)EJsonType::Array },
				{ "EJsonType::Object", (int64)EJsonType::Object },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Array.Name", "EJsonType::Array" },
				{ "BlueprintType", "true" },
				{ "Boolean.Name", "EJsonType::Boolean" },
				{ "ModuleRelativePath", "Public/BlueprintJsonWrapper.h" },
				{ "Null.Name", "EJsonType::Null" },
				{ "Number.Name", "EJsonType::Number" },
				{ "Object.Name", "EJsonType::Object" },
				{ "String.Name", "EJsonType::String" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BlueprintJson,
				nullptr,
				"EJsonType",
				"EJsonType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FJsonObjectField::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BLUEPRINTJSON_API uint32 Get_Z_Construct_UScriptStruct_FJsonObjectField_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FJsonObjectField, Z_Construct_UPackage__Script_BlueprintJson(), TEXT("JsonObjectField"), sizeof(FJsonObjectField), Get_Z_Construct_UScriptStruct_FJsonObjectField_Hash());
	}
	return Singleton;
}
template<> BLUEPRINTJSON_API UScriptStruct* StaticStruct<FJsonObjectField>()
{
	return FJsonObjectField::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FJsonObjectField(FJsonObjectField::StaticStruct, TEXT("/Script/BlueprintJson"), TEXT("JsonObjectField"), false, nullptr, nullptr);
static struct FScriptStruct_BlueprintJson_StaticRegisterNativesFJsonObjectField
{
	FScriptStruct_BlueprintJson_StaticRegisterNativesFJsonObjectField()
	{
		UScriptStruct::DeferCppStructOps<FJsonObjectField>(FName(TEXT("JsonObjectField")));
	}
} ScriptStruct_BlueprintJson_StaticRegisterNativesFJsonObjectField;
	struct Z_Construct_UScriptStruct_FJsonObjectField_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FieldValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJsonObjectField_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* Associate a field name to its value. */" },
		{ "ModuleRelativePath", "Public/BlueprintJsonWrapper.h" },
		{ "ToolTip", "Associate a field name to its value." },
	};
#endif
	void* Z_Construct_UScriptStruct_FJsonObjectField_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJsonObjectField>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJsonObjectField_Statics::NewProp_FieldName_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/*  This field's name */" },
		{ "ModuleRelativePath", "Public/BlueprintJsonWrapper.h" },
		{ "ToolTip", "This field's name" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FJsonObjectField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJsonObjectField, FieldName), METADATA_PARAMS(Z_Construct_UScriptStruct_FJsonObjectField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJsonObjectField_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJsonObjectField_Statics::NewProp_FieldValue_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/*  This field's value */" },
		{ "ModuleRelativePath", "Public/BlueprintJsonWrapper.h" },
		{ "ToolTip", "This field's value" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FJsonObjectField_Statics::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJsonObjectField, FieldValue), Z_Construct_UClass_UJsonValue_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FJsonObjectField_Statics::NewProp_FieldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJsonObjectField_Statics::NewProp_FieldValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJsonObjectField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJsonObjectField_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJsonObjectField_Statics::NewProp_FieldValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJsonObjectField_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintJson,
		nullptr,
		&NewStructOps,
		"JsonObjectField",
		sizeof(FJsonObjectField),
		alignof(FJsonObjectField),
		Z_Construct_UScriptStruct_FJsonObjectField_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJsonObjectField_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FJsonObjectField_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJsonObjectField_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FJsonObjectField()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FJsonObjectField_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BlueprintJson();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("JsonObjectField"), sizeof(FJsonObjectField), Get_Z_Construct_UScriptStruct_FJsonObjectField_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FJsonObjectField_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FJsonObjectField_Hash() { return 3948481096U; }
	DEFINE_FUNCTION(UJsonValue::execSwitchValueType)
	{
		P_GET_ENUM_REF(EJsonType,Z_Param_Out_Branches);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchValueType((EJsonType&)(Z_Param_Out_Branches));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonValue::execIsNull)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsNull();
		P_NATIVE_END;
	}
	void UJsonValue::StaticRegisterNativesUJsonValue()
	{
		UClass* Class = UJsonValue::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsNull", &UJsonValue::execIsNull },
			{ "SwitchValueType", &UJsonValue::execSwitchValueType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UJsonValue_IsNull_Statics
	{
		struct JsonValue_eventIsNull_Parms
		{
			bool ReturnValue;
		};
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonValue_IsNull_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Is Null" },
	};
#endif
	void Z_Construct_UFunction_UJsonValue_IsNull_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((JsonValue_eventIsNull_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJsonValue_IsNull_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(JsonValue_eventIsNull_Parms), &Z_Construct_UFunction_UJsonValue_IsNull_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UJsonValue_IsNull_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonValue_IsNull_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonValue_IsNull_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonValue_IsNull_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonValue_IsNull_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON|Value" },
		{ "Comment", "/* Returns if this value represents the Json Null value. */" },
		{ "ModuleRelativePath", "Public/BlueprintJsonWrapper.h" },
		{ "ToolTip", "Returns if this value represents the Json Null value." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonValue_IsNull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonValue, nullptr, "IsNull", nullptr, nullptr, sizeof(JsonValue_eventIsNull_Parms), Z_Construct_UFunction_UJsonValue_IsNull_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonValue_IsNull_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonValue_IsNull_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonValue_IsNull_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonValue_IsNull()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonValue_IsNull_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonValue_SwitchValueType_Statics
	{
		struct JsonValue_eventSwitchValueType_Parms
		{
			EJsonType Branches;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UJsonValue_SwitchValueType_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UJsonValue_SwitchValueType_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonValue_eventSwitchValueType_Parms, Branches), Z_Construct_UEnum_BlueprintJson_EJsonType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonValue_SwitchValueType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonValue_SwitchValueType_Statics::NewProp_Branches_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonValue_SwitchValueType_Statics::NewProp_Branches,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonValue_SwitchValueType_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON|Value" },
		{ "Comment", "/* Helper node to easily branch over this JSON value's type. */" },
		{ "DisplayName", "Switch on Type" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "ModuleRelativePath", "Public/BlueprintJsonWrapper.h" },
		{ "ToolTip", "Helper node to easily branch over this JSON value's type." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonValue_SwitchValueType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonValue, nullptr, "SwitchValueType", nullptr, nullptr, sizeof(JsonValue_eventSwitchValueType_Parms), Z_Construct_UFunction_UJsonValue_SwitchValueType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonValue_SwitchValueType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonValue_SwitchValueType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonValue_SwitchValueType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonValue_SwitchValueType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonValue_SwitchValueType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UJsonValue_NoRegister()
	{
		return UJsonValue::StaticClass();
	}
	struct Z_Construct_UClass_UJsonValue_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UJsonValue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintJson,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UJsonValue_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UJsonValue_IsNull, "IsNull" }, // 3778700135
		{ &Z_Construct_UFunction_UJsonValue_SwitchValueType, "SwitchValueType" }, // 4062835515
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJsonValue_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *  A Json Value, its type is not defined.\n **/" },
		{ "IncludePath", "BlueprintJsonWrapper.h" },
		{ "ModuleRelativePath", "Public/BlueprintJsonWrapper.h" },
		{ "ToolTip", "A Json Value, its type is not defined." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UJsonValue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJsonValue>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UJsonValue_Statics::ClassParams = {
		&UJsonValue::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UJsonValue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UJsonValue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UJsonValue()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UJsonValue_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UJsonValue, 3970916321);
	template<> BLUEPRINTJSON_API UClass* StaticClass<UJsonValue>()
	{
		return UJsonValue::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UJsonValue(Z_Construct_UClass_UJsonValue, &UJsonValue::StaticClass, TEXT("/Script/BlueprintJson"), TEXT("UJsonValue"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJsonValue);
	DEFINE_FUNCTION(UJsonObject::execGetAllProperties)
	{
		P_GET_TARRAY_REF(FJsonObjectField,Z_Param_Out_OutValues);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllProperties(Z_Param_Out_OutValues);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonObject::execToJsonValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UJsonValue**)Z_Param__Result=P_THIS->ToJsonValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonObject::execCreateJsonObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UJsonObject**)Z_Param__Result=UJsonObject::CreateJsonObject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonObject::execSetHitResultField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_FieldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHitResultField(Z_Param_FieldName,Z_Param_Out_FieldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonObject::execSetQuatField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_FieldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetQuatField(Z_Param_FieldName,Z_Param_Out_FieldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonObject::execSetColorField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_STRUCT_REF(FColor,Z_Param_Out_FieldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetColorField(Z_Param_FieldName,Z_Param_Out_FieldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonObject::execSetLinearColorField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_FieldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLinearColorField(Z_Param_FieldName,Z_Param_Out_FieldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonObject::execSetTransformField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_FieldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTransformField(Z_Param_FieldName,Z_Param_Out_FieldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonObject::execSetRotatorField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_FieldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRotatorField(Z_Param_FieldName,Z_Param_Out_FieldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonObject::execSetVector2DField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_FieldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVector2DField(Z_Param_FieldName,Z_Param_Out_FieldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonObject::execSetVectorField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_FieldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVectorField(Z_Param_FieldName,Z_Param_Out_FieldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonObject::execSetArrayField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_TARRAY_REF(UJsonValue*,Z_Param_Out_FieldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetArrayField(Z_Param_FieldName,Z_Param_Out_FieldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonObject::execSetNullField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNullField(Z_Param_FieldName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonObject::execSetField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_OBJECT(UJsonValue,Z_Param_FieldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetField(Z_Param_FieldName,Z_Param_FieldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonObject::execSetBooleanField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_UBOOL(Z_Param_FieldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBooleanField(Z_Param_FieldName,Z_Param_FieldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonObject::execSetFloatField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FieldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFloatField(Z_Param_FieldName,Z_Param_FieldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonObject::execSetInteger64Field)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_PROPERTY(FInt64Property,Z_Param_FieldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInteger64Field(Z_Param_FieldName,Z_Param_FieldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonObject::execSetIntegerField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_PROPERTY(FIntProperty,Z_Param_FieldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIntegerField(Z_Param_FieldName,Z_Param_FieldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonObject::execSetStringField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStringField(Z_Param_FieldName,Z_Param_FieldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonObject::execSetUObjectField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_OBJECT(UObject,Z_Param_FieldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUObjectField(Z_Param_FieldName,Z_Param_FieldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonObject::execSetObjectField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_OBJECT(UJsonObject,Z_Param_JsonObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetObjectField(Z_Param_FieldName,Z_Param_JsonObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonObject::execHasField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasField(Z_Param_FieldName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonObject::execIsFieldNull)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsFieldNull(Z_Param_FieldName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonObject::execGetFieldAsValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UJsonValue**)Z_Param__Result=P_THIS->GetFieldAsValue(Z_Param_FieldName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonObject::execGetFieldAsBoolean)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetFieldAsBoolean(Z_Param_FieldName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonObject::execGetFieldAsObject)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UJsonObject**)Z_Param__Result=P_THIS->GetFieldAsObject(Z_Param_FieldName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonObject::execGetFieldAsArray)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UJsonValue*>*)Z_Param__Result=P_THIS->GetFieldAsArray(Z_Param_FieldName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonObject::execGetFieldAsFloat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetFieldAsFloat(Z_Param_FieldName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonObject::execGetFieldAsInteger64)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=P_THIS->GetFieldAsInteger64(Z_Param_FieldName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonObject::execGetFieldAsInteger)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetFieldAsInteger(Z_Param_FieldName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonObject::execGetFieldAsString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetFieldAsString(Z_Param_FieldName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonObject::execParseJson)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Json);
		P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UJsonObject**)Z_Param__Result=UJsonObject::ParseJson(Z_Param_Json,Z_Param_Out_bSuccess);
		P_NATIVE_END;
	}
	void UJsonObject::StaticRegisterNativesUJsonObject()
	{
		UClass* Class = UJsonObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateJsonObject", &UJsonObject::execCreateJsonObject },
			{ "GetAllProperties", &UJsonObject::execGetAllProperties },
			{ "GetFieldAsArray", &UJsonObject::execGetFieldAsArray },
			{ "GetFieldAsBoolean", &UJsonObject::execGetFieldAsBoolean },
			{ "GetFieldAsFloat", &UJsonObject::execGetFieldAsFloat },
			{ "GetFieldAsInteger", &UJsonObject::execGetFieldAsInteger },
			{ "GetFieldAsInteger64", &UJsonObject::execGetFieldAsInteger64 },
			{ "GetFieldAsObject", &UJsonObject::execGetFieldAsObject },
			{ "GetFieldAsString", &UJsonObject::execGetFieldAsString },
			{ "GetFieldAsValue", &UJsonObject::execGetFieldAsValue },
			{ "HasField", &UJsonObject::execHasField },
			{ "IsFieldNull", &UJsonObject::execIsFieldNull },
			{ "ParseJson", &UJsonObject::execParseJson },
			{ "SetArrayField", &UJsonObject::execSetArrayField },
			{ "SetBooleanField", &UJsonObject::execSetBooleanField },
			{ "SetColorField", &UJsonObject::execSetColorField },
			{ "SetField", &UJsonObject::execSetField },
			{ "SetFloatField", &UJsonObject::execSetFloatField },
			{ "SetHitResultField", &UJsonObject::execSetHitResultField },
			{ "SetInteger64Field", &UJsonObject::execSetInteger64Field },
			{ "SetIntegerField", &UJsonObject::execSetIntegerField },
			{ "SetLinearColorField", &UJsonObject::execSetLinearColorField },
			{ "SetNullField", &UJsonObject::execSetNullField },
			{ "SetObjectField", &UJsonObject::execSetObjectField },
			{ "SetQuatField", &UJsonObject::execSetQuatField },
			{ "SetRotatorField", &UJsonObject::execSetRotatorField },
			{ "SetStringField", &UJsonObject::execSetStringField },
			{ "SetTransformField", &UJsonObject::execSetTransformField },
			{ "SetUObjectField", &UJsonObject::execSetUObjectField },
			{ "SetVector2DField", &UJsonObject::execSetVector2DField },
			{ "SetVectorField", &UJsonObject::execSetVectorField },
			{ "ToJsonValue", &UJsonObject::execToJsonValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UJsonObject_CreateJsonObject_Statics
	{
		struct JsonObject_eventCreateJsonObject_Parms
		{
			UJsonObject* ReturnValue;
		};
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_CreateJsonObject_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "JSON Object" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonObject_CreateJsonObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonObject_eventCreateJsonObject_Parms, ReturnValue), Z_Construct_UClass_UJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_CreateJsonObject_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_CreateJsonObject_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonObject_CreateJsonObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonObject_CreateJsonObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_CreateJsonObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON|Object" },
		{ "Comment", "/* Creates an empty JSON object. */" },
		{ "ModuleRelativePath", "Public/BlueprintJsonWrapper.h" },
		{ "ToolTip", "Creates an empty JSON object." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonObject_CreateJsonObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonObject, nullptr, "CreateJsonObject", nullptr, nullptr, sizeof(JsonObject_eventCreateJsonObject_Parms), Z_Construct_UFunction_UJsonObject_CreateJsonObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_CreateJsonObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_CreateJsonObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_CreateJsonObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonObject_CreateJsonObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonObject_CreateJsonObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonObject_GetAllProperties_Statics
	{
		struct JsonObject_eventGetAllProperties_Parms
		{
			TArray<FJsonObjectField> OutValues;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutValues_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutValues;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJsonObject_GetAllProperties_Statics::NewProp_OutValues_Inner = { "OutValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FJsonObjectField, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_GetAllProperties_Statics::NewProp_OutValues_MetaData[] = {
		{ "DisplayName", "Properties" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UJsonObject_GetAllProperties_Statics::NewProp_OutValues = { "OutValues", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonObject_eventGetAllProperties_Parms, OutValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_GetAllProperties_Statics::NewProp_OutValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_GetAllProperties_Statics::NewProp_OutValues_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonObject_GetAllProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonObject_GetAllProperties_Statics::NewProp_OutValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonObject_GetAllProperties_Statics::NewProp_OutValues,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_GetAllProperties_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON|Object" },
		{ "Comment", "/* Returns all the properties of this object. */" },
		{ "ModuleRelativePath", "Public/BlueprintJsonWrapper.h" },
		{ "ToolTip", "Returns all the properties of this object." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonObject_GetAllProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonObject, nullptr, "GetAllProperties", nullptr, nullptr, sizeof(JsonObject_eventGetAllProperties_Parms), Z_Construct_UFunction_UJsonObject_GetAllProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_GetAllProperties_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_GetAllProperties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_GetAllProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonObject_GetAllProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonObject_GetAllProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonObject_GetFieldAsArray_Statics
	{
		struct JsonObject_eventGetFieldAsArray_Parms
		{
			FString FieldName;
			TArray<UJsonValue*> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_GetFieldAsArray_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonObject_GetFieldAsArray_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonObject_eventGetFieldAsArray_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_GetFieldAsArray_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_GetFieldAsArray_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonObject_GetFieldAsArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_GetFieldAsArray_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Field Value" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UJsonObject_GetFieldAsArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonObject_eventGetFieldAsArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_GetFieldAsArray_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_GetFieldAsArray_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonObject_GetFieldAsArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonObject_GetFieldAsArray_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonObject_GetFieldAsArray_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonObject_GetFieldAsArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_GetFieldAsArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON|Object" },
		{ "ModuleRelativePath", "Public/BlueprintJsonWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonObject_GetFieldAsArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonObject, nullptr, "GetFieldAsArray", nullptr, nullptr, sizeof(JsonObject_eventGetFieldAsArray_Parms), Z_Construct_UFunction_UJsonObject_GetFieldAsArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_GetFieldAsArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_GetFieldAsArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_GetFieldAsArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonObject_GetFieldAsArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonObject_GetFieldAsArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonObject_GetFieldAsBoolean_Statics
	{
		struct JsonObject_eventGetFieldAsBoolean_Parms
		{
			FString FieldName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_GetFieldAsBoolean_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonObject_GetFieldAsBoolean_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonObject_eventGetFieldAsBoolean_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_GetFieldAsBoolean_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_GetFieldAsBoolean_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_GetFieldAsBoolean_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Field Value" },
	};
#endif
	void Z_Construct_UFunction_UJsonObject_GetFieldAsBoolean_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((JsonObject_eventGetFieldAsBoolean_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJsonObject_GetFieldAsBoolean_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(JsonObject_eventGetFieldAsBoolean_Parms), &Z_Construct_UFunction_UJsonObject_GetFieldAsBoolean_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_GetFieldAsBoolean_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_GetFieldAsBoolean_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonObject_GetFieldAsBoolean_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonObject_GetFieldAsBoolean_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonObject_GetFieldAsBoolean_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_GetFieldAsBoolean_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON|Object" },
		{ "ModuleRelativePath", "Public/BlueprintJsonWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonObject_GetFieldAsBoolean_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonObject, nullptr, "GetFieldAsBoolean", nullptr, nullptr, sizeof(JsonObject_eventGetFieldAsBoolean_Parms), Z_Construct_UFunction_UJsonObject_GetFieldAsBoolean_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_GetFieldAsBoolean_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_GetFieldAsBoolean_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_GetFieldAsBoolean_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonObject_GetFieldAsBoolean()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonObject_GetFieldAsBoolean_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonObject_GetFieldAsFloat_Statics
	{
		struct JsonObject_eventGetFieldAsFloat_Parms
		{
			FString FieldName;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_GetFieldAsFloat_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonObject_GetFieldAsFloat_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonObject_eventGetFieldAsFloat_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_GetFieldAsFloat_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_GetFieldAsFloat_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_GetFieldAsFloat_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Field Value" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJsonObject_GetFieldAsFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonObject_eventGetFieldAsFloat_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_GetFieldAsFloat_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_GetFieldAsFloat_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonObject_GetFieldAsFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonObject_GetFieldAsFloat_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonObject_GetFieldAsFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_GetFieldAsFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON|Object" },
		{ "ModuleRelativePath", "Public/BlueprintJsonWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonObject_GetFieldAsFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonObject, nullptr, "GetFieldAsFloat", nullptr, nullptr, sizeof(JsonObject_eventGetFieldAsFloat_Parms), Z_Construct_UFunction_UJsonObject_GetFieldAsFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_GetFieldAsFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_GetFieldAsFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_GetFieldAsFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonObject_GetFieldAsFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonObject_GetFieldAsFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonObject_GetFieldAsInteger_Statics
	{
		struct JsonObject_eventGetFieldAsInteger_Parms
		{
			FString FieldName;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_GetFieldAsInteger_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonObject_GetFieldAsInteger_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonObject_eventGetFieldAsInteger_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_GetFieldAsInteger_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_GetFieldAsInteger_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_GetFieldAsInteger_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Field Value" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJsonObject_GetFieldAsInteger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonObject_eventGetFieldAsInteger_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_GetFieldAsInteger_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_GetFieldAsInteger_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonObject_GetFieldAsInteger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonObject_GetFieldAsInteger_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonObject_GetFieldAsInteger_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_GetFieldAsInteger_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON|Object" },
		{ "ModuleRelativePath", "Public/BlueprintJsonWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonObject_GetFieldAsInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonObject, nullptr, "GetFieldAsInteger", nullptr, nullptr, sizeof(JsonObject_eventGetFieldAsInteger_Parms), Z_Construct_UFunction_UJsonObject_GetFieldAsInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_GetFieldAsInteger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_GetFieldAsInteger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_GetFieldAsInteger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonObject_GetFieldAsInteger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonObject_GetFieldAsInteger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonObject_GetFieldAsInteger64_Statics
	{
		struct JsonObject_eventGetFieldAsInteger64_Parms
		{
			FString FieldName;
			int64 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_GetFieldAsInteger64_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonObject_GetFieldAsInteger64_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonObject_eventGetFieldAsInteger64_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_GetFieldAsInteger64_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_GetFieldAsInteger64_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_GetFieldAsInteger64_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Field Value" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UJsonObject_GetFieldAsInteger64_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonObject_eventGetFieldAsInteger64_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_GetFieldAsInteger64_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_GetFieldAsInteger64_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonObject_GetFieldAsInteger64_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonObject_GetFieldAsInteger64_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonObject_GetFieldAsInteger64_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_GetFieldAsInteger64_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON|Object" },
		{ "ModuleRelativePath", "Public/BlueprintJsonWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonObject_GetFieldAsInteger64_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonObject, nullptr, "GetFieldAsInteger64", nullptr, nullptr, sizeof(JsonObject_eventGetFieldAsInteger64_Parms), Z_Construct_UFunction_UJsonObject_GetFieldAsInteger64_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_GetFieldAsInteger64_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_GetFieldAsInteger64_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_GetFieldAsInteger64_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonObject_GetFieldAsInteger64()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonObject_GetFieldAsInteger64_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonObject_GetFieldAsObject_Statics
	{
		struct JsonObject_eventGetFieldAsObject_Parms
		{
			FString FieldName;
			UJsonObject* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_GetFieldAsObject_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonObject_GetFieldAsObject_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonObject_eventGetFieldAsObject_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_GetFieldAsObject_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_GetFieldAsObject_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_GetFieldAsObject_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Field Value" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonObject_GetFieldAsObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonObject_eventGetFieldAsObject_Parms, ReturnValue), Z_Construct_UClass_UJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_GetFieldAsObject_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_GetFieldAsObject_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonObject_GetFieldAsObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonObject_GetFieldAsObject_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonObject_GetFieldAsObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_GetFieldAsObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON|Object" },
		{ "ModuleRelativePath", "Public/BlueprintJsonWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonObject_GetFieldAsObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonObject, nullptr, "GetFieldAsObject", nullptr, nullptr, sizeof(JsonObject_eventGetFieldAsObject_Parms), Z_Construct_UFunction_UJsonObject_GetFieldAsObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_GetFieldAsObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_GetFieldAsObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_GetFieldAsObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonObject_GetFieldAsObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonObject_GetFieldAsObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonObject_GetFieldAsString_Statics
	{
		struct JsonObject_eventGetFieldAsString_Parms
		{
			FString FieldName;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_GetFieldAsString_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonObject_GetFieldAsString_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonObject_eventGetFieldAsString_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_GetFieldAsString_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_GetFieldAsString_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_GetFieldAsString_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Field Value" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonObject_GetFieldAsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonObject_eventGetFieldAsString_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_GetFieldAsString_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_GetFieldAsString_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonObject_GetFieldAsString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonObject_GetFieldAsString_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonObject_GetFieldAsString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_GetFieldAsString_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON|Object" },
		{ "ModuleRelativePath", "Public/BlueprintJsonWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonObject_GetFieldAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonObject, nullptr, "GetFieldAsString", nullptr, nullptr, sizeof(JsonObject_eventGetFieldAsString_Parms), Z_Construct_UFunction_UJsonObject_GetFieldAsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_GetFieldAsString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_GetFieldAsString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_GetFieldAsString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonObject_GetFieldAsString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonObject_GetFieldAsString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonObject_GetFieldAsValue_Statics
	{
		struct JsonObject_eventGetFieldAsValue_Parms
		{
			FString FieldName;
			UJsonValue* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_GetFieldAsValue_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonObject_GetFieldAsValue_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonObject_eventGetFieldAsValue_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_GetFieldAsValue_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_GetFieldAsValue_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_GetFieldAsValue_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Field Value" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonObject_GetFieldAsValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonObject_eventGetFieldAsValue_Parms, ReturnValue), Z_Construct_UClass_UJsonValue_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_GetFieldAsValue_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_GetFieldAsValue_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonObject_GetFieldAsValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonObject_GetFieldAsValue_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonObject_GetFieldAsValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_GetFieldAsValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON|Object" },
		{ "Comment", "/* Returns true if this field is the JSON Null value. */" },
		{ "ModuleRelativePath", "Public/BlueprintJsonWrapper.h" },
		{ "ToolTip", "Returns true if this field is the JSON Null value." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonObject_GetFieldAsValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonObject, nullptr, "GetFieldAsValue", nullptr, nullptr, sizeof(JsonObject_eventGetFieldAsValue_Parms), Z_Construct_UFunction_UJsonObject_GetFieldAsValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_GetFieldAsValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_GetFieldAsValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_GetFieldAsValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonObject_GetFieldAsValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonObject_GetFieldAsValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonObject_HasField_Statics
	{
		struct JsonObject_eventHasField_Parms
		{
			FString FieldName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_HasField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonObject_HasField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonObject_eventHasField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_HasField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_HasField_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_HasField_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Has Field" },
	};
#endif
	void Z_Construct_UFunction_UJsonObject_HasField_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((JsonObject_eventHasField_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJsonObject_HasField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(JsonObject_eventHasField_Parms), &Z_Construct_UFunction_UJsonObject_HasField_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_HasField_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_HasField_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonObject_HasField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonObject_HasField_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonObject_HasField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_HasField_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON|Object" },
		{ "Comment", "/* Returns whether this object has the specified field. */" },
		{ "ModuleRelativePath", "Public/BlueprintJsonWrapper.h" },
		{ "ToolTip", "Returns whether this object has the specified field." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonObject_HasField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonObject, nullptr, "HasField", nullptr, nullptr, sizeof(JsonObject_eventHasField_Parms), Z_Construct_UFunction_UJsonObject_HasField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_HasField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_HasField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_HasField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonObject_HasField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonObject_HasField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonObject_IsFieldNull_Statics
	{
		struct JsonObject_eventIsFieldNull_Parms
		{
			FString FieldName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_IsFieldNull_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonObject_IsFieldNull_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonObject_eventIsFieldNull_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_IsFieldNull_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_IsFieldNull_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_IsFieldNull_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Is Null" },
	};
#endif
	void Z_Construct_UFunction_UJsonObject_IsFieldNull_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((JsonObject_eventIsFieldNull_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJsonObject_IsFieldNull_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(JsonObject_eventIsFieldNull_Parms), &Z_Construct_UFunction_UJsonObject_IsFieldNull_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_IsFieldNull_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_IsFieldNull_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonObject_IsFieldNull_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonObject_IsFieldNull_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonObject_IsFieldNull_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_IsFieldNull_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON|Object" },
		{ "ModuleRelativePath", "Public/BlueprintJsonWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonObject_IsFieldNull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonObject, nullptr, "IsFieldNull", nullptr, nullptr, sizeof(JsonObject_eventIsFieldNull_Parms), Z_Construct_UFunction_UJsonObject_IsFieldNull_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_IsFieldNull_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_IsFieldNull_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_IsFieldNull_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonObject_IsFieldNull()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonObject_IsFieldNull_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonObject_ParseJson_Statics
	{
		struct JsonObject_eventParseJson_Parms
		{
			FString Json;
			bool bSuccess;
			UJsonObject* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Json_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Json;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[];
#endif
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_ParseJson_Statics::NewProp_Json_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonObject_ParseJson_Statics::NewProp_Json = { "Json", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonObject_eventParseJson_Parms, Json), METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_ParseJson_Statics::NewProp_Json_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_ParseJson_Statics::NewProp_Json_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_ParseJson_Statics::NewProp_bSuccess_MetaData[] = {
		{ "DisplayName", "Is Valid JSON" },
	};
#endif
	void Z_Construct_UFunction_UJsonObject_ParseJson_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((JsonObject_eventParseJson_Parms*)Obj)->bSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJsonObject_ParseJson_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(JsonObject_eventParseJson_Parms), &Z_Construct_UFunction_UJsonObject_ParseJson_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_ParseJson_Statics::NewProp_bSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_ParseJson_Statics::NewProp_bSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_ParseJson_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Root JSON Object" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonObject_ParseJson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonObject_eventParseJson_Parms, ReturnValue), Z_Construct_UClass_UJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_ParseJson_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_ParseJson_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonObject_ParseJson_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonObject_ParseJson_Statics::NewProp_Json,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonObject_ParseJson_Statics::NewProp_bSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonObject_ParseJson_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_ParseJson_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON|Object" },
		{ "Comment", "/* Parse JSON and construct a JSON object from it. */" },
		{ "ModuleRelativePath", "Public/BlueprintJsonWrapper.h" },
		{ "ToolTip", "Parse JSON and construct a JSON object from it." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonObject_ParseJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonObject, nullptr, "ParseJson", nullptr, nullptr, sizeof(JsonObject_eventParseJson_Parms), Z_Construct_UFunction_UJsonObject_ParseJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_ParseJson_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_ParseJson_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_ParseJson_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonObject_ParseJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonObject_ParseJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonObject_SetArrayField_Statics
	{
		struct JsonObject_eventSetArrayField_Parms
		{
			FString FieldName;
			TArray<UJsonValue*> FieldValue;
		};
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_SetArrayField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonObject_SetArrayField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonObject_eventSetArrayField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_SetArrayField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetArrayField_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonObject_SetArrayField_Statics::NewProp_FieldValue_Inner = { "FieldValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_SetArrayField_Statics::NewProp_FieldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UJsonObject_SetArrayField_Statics::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonObject_eventSetArrayField_Parms, FieldValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_SetArrayField_Statics::NewProp_FieldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetArrayField_Statics::NewProp_FieldValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonObject_SetArrayField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonObject_SetArrayField_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonObject_SetArrayField_Statics::NewProp_FieldValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonObject_SetArrayField_Statics::NewProp_FieldValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_SetArrayField_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON|Object" },
		{ "ModuleRelativePath", "Public/BlueprintJsonWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonObject_SetArrayField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonObject, nullptr, "SetArrayField", nullptr, nullptr, sizeof(JsonObject_eventSetArrayField_Parms), Z_Construct_UFunction_UJsonObject_SetArrayField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetArrayField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_SetArrayField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetArrayField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonObject_SetArrayField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonObject_SetArrayField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonObject_SetBooleanField_Statics
	{
		struct JsonObject_eventSetBooleanField_Parms
		{
			FString FieldName;
			bool FieldValue;
		};
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_SetBooleanField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonObject_SetBooleanField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonObject_eventSetBooleanField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_SetBooleanField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetBooleanField_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_SetBooleanField_Statics::NewProp_FieldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UJsonObject_SetBooleanField_Statics::NewProp_FieldValue_SetBit(void* Obj)
	{
		((JsonObject_eventSetBooleanField_Parms*)Obj)->FieldValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJsonObject_SetBooleanField_Statics::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(JsonObject_eventSetBooleanField_Parms), &Z_Construct_UFunction_UJsonObject_SetBooleanField_Statics::NewProp_FieldValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_SetBooleanField_Statics::NewProp_FieldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetBooleanField_Statics::NewProp_FieldValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonObject_SetBooleanField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonObject_SetBooleanField_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonObject_SetBooleanField_Statics::NewProp_FieldValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_SetBooleanField_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON|Object" },
		{ "ModuleRelativePath", "Public/BlueprintJsonWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonObject_SetBooleanField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonObject, nullptr, "SetBooleanField", nullptr, nullptr, sizeof(JsonObject_eventSetBooleanField_Parms), Z_Construct_UFunction_UJsonObject_SetBooleanField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetBooleanField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_SetBooleanField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetBooleanField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonObject_SetBooleanField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonObject_SetBooleanField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonObject_SetColorField_Statics
	{
		struct JsonObject_eventSetColorField_Parms
		{
			FString FieldName;
			FColor FieldValue;
		};
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_SetColorField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonObject_SetColorField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonObject_eventSetColorField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_SetColorField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetColorField_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_SetColorField_Statics::NewProp_FieldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJsonObject_SetColorField_Statics::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonObject_eventSetColorField_Parms, FieldValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_SetColorField_Statics::NewProp_FieldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetColorField_Statics::NewProp_FieldValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonObject_SetColorField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonObject_SetColorField_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonObject_SetColorField_Statics::NewProp_FieldValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_SetColorField_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON|Object" },
		{ "ModuleRelativePath", "Public/BlueprintJsonWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonObject_SetColorField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonObject, nullptr, "SetColorField", nullptr, nullptr, sizeof(JsonObject_eventSetColorField_Parms), Z_Construct_UFunction_UJsonObject_SetColorField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetColorField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_SetColorField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetColorField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonObject_SetColorField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonObject_SetColorField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonObject_SetField_Statics
	{
		struct JsonObject_eventSetField_Parms
		{
			FString FieldName;
			const UJsonValue* FieldValue;
		};
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_SetField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonObject_SetField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonObject_eventSetField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_SetField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetField_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_SetField_Statics::NewProp_FieldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonObject_SetField_Statics::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonObject_eventSetField_Parms, FieldValue), Z_Construct_UClass_UJsonValue_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_SetField_Statics::NewProp_FieldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetField_Statics::NewProp_FieldValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonObject_SetField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonObject_SetField_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonObject_SetField_Statics::NewProp_FieldValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_SetField_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON|Object" },
		{ "ModuleRelativePath", "Public/BlueprintJsonWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonObject_SetField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonObject, nullptr, "SetField", nullptr, nullptr, sizeof(JsonObject_eventSetField_Parms), Z_Construct_UFunction_UJsonObject_SetField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_SetField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonObject_SetField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonObject_SetField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonObject_SetFloatField_Statics
	{
		struct JsonObject_eventSetFloatField_Parms
		{
			FString FieldName;
			float FieldValue;
		};
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_SetFloatField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonObject_SetFloatField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonObject_eventSetFloatField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_SetFloatField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetFloatField_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_SetFloatField_Statics::NewProp_FieldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJsonObject_SetFloatField_Statics::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonObject_eventSetFloatField_Parms, FieldValue), METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_SetFloatField_Statics::NewProp_FieldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetFloatField_Statics::NewProp_FieldValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonObject_SetFloatField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonObject_SetFloatField_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonObject_SetFloatField_Statics::NewProp_FieldValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_SetFloatField_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON|Object" },
		{ "ModuleRelativePath", "Public/BlueprintJsonWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonObject_SetFloatField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonObject, nullptr, "SetFloatField", nullptr, nullptr, sizeof(JsonObject_eventSetFloatField_Parms), Z_Construct_UFunction_UJsonObject_SetFloatField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetFloatField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_SetFloatField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetFloatField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonObject_SetFloatField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonObject_SetFloatField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonObject_SetHitResultField_Statics
	{
		struct JsonObject_eventSetHitResultField_Parms
		{
			FString FieldName;
			FHitResult FieldValue;
		};
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_SetHitResultField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonObject_SetHitResultField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonObject_eventSetHitResultField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_SetHitResultField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetHitResultField_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_SetHitResultField_Statics::NewProp_FieldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJsonObject_SetHitResultField_Statics::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonObject_eventSetHitResultField_Parms, FieldValue), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_SetHitResultField_Statics::NewProp_FieldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetHitResultField_Statics::NewProp_FieldValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonObject_SetHitResultField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonObject_SetHitResultField_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonObject_SetHitResultField_Statics::NewProp_FieldValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_SetHitResultField_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON|Object" },
		{ "ModuleRelativePath", "Public/BlueprintJsonWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonObject_SetHitResultField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonObject, nullptr, "SetHitResultField", nullptr, nullptr, sizeof(JsonObject_eventSetHitResultField_Parms), Z_Construct_UFunction_UJsonObject_SetHitResultField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetHitResultField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_SetHitResultField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetHitResultField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonObject_SetHitResultField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonObject_SetHitResultField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonObject_SetInteger64Field_Statics
	{
		struct JsonObject_eventSetInteger64Field_Parms
		{
			FString FieldName;
			int64 FieldValue;
		};
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_SetInteger64Field_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonObject_SetInteger64Field_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonObject_eventSetInteger64Field_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_SetInteger64Field_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetInteger64Field_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_SetInteger64Field_Statics::NewProp_FieldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UJsonObject_SetInteger64Field_Statics::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonObject_eventSetInteger64Field_Parms, FieldValue), METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_SetInteger64Field_Statics::NewProp_FieldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetInteger64Field_Statics::NewProp_FieldValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonObject_SetInteger64Field_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonObject_SetInteger64Field_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonObject_SetInteger64Field_Statics::NewProp_FieldValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_SetInteger64Field_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON|Object" },
		{ "ModuleRelativePath", "Public/BlueprintJsonWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonObject_SetInteger64Field_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonObject, nullptr, "SetInteger64Field", nullptr, nullptr, sizeof(JsonObject_eventSetInteger64Field_Parms), Z_Construct_UFunction_UJsonObject_SetInteger64Field_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetInteger64Field_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_SetInteger64Field_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetInteger64Field_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonObject_SetInteger64Field()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonObject_SetInteger64Field_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonObject_SetIntegerField_Statics
	{
		struct JsonObject_eventSetIntegerField_Parms
		{
			FString FieldName;
			int32 FieldValue;
		};
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_SetIntegerField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonObject_SetIntegerField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonObject_eventSetIntegerField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_SetIntegerField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetIntegerField_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_SetIntegerField_Statics::NewProp_FieldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJsonObject_SetIntegerField_Statics::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonObject_eventSetIntegerField_Parms, FieldValue), METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_SetIntegerField_Statics::NewProp_FieldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetIntegerField_Statics::NewProp_FieldValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonObject_SetIntegerField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonObject_SetIntegerField_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonObject_SetIntegerField_Statics::NewProp_FieldValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_SetIntegerField_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON|Object" },
		{ "ModuleRelativePath", "Public/BlueprintJsonWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonObject_SetIntegerField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonObject, nullptr, "SetIntegerField", nullptr, nullptr, sizeof(JsonObject_eventSetIntegerField_Parms), Z_Construct_UFunction_UJsonObject_SetIntegerField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetIntegerField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_SetIntegerField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetIntegerField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonObject_SetIntegerField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonObject_SetIntegerField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonObject_SetLinearColorField_Statics
	{
		struct JsonObject_eventSetLinearColorField_Parms
		{
			FString FieldName;
			FLinearColor FieldValue;
		};
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_SetLinearColorField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonObject_SetLinearColorField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonObject_eventSetLinearColorField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_SetLinearColorField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetLinearColorField_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_SetLinearColorField_Statics::NewProp_FieldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJsonObject_SetLinearColorField_Statics::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonObject_eventSetLinearColorField_Parms, FieldValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_SetLinearColorField_Statics::NewProp_FieldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetLinearColorField_Statics::NewProp_FieldValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonObject_SetLinearColorField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonObject_SetLinearColorField_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonObject_SetLinearColorField_Statics::NewProp_FieldValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_SetLinearColorField_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON|Object" },
		{ "ModuleRelativePath", "Public/BlueprintJsonWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonObject_SetLinearColorField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonObject, nullptr, "SetLinearColorField", nullptr, nullptr, sizeof(JsonObject_eventSetLinearColorField_Parms), Z_Construct_UFunction_UJsonObject_SetLinearColorField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetLinearColorField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_SetLinearColorField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetLinearColorField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonObject_SetLinearColorField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonObject_SetLinearColorField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonObject_SetNullField_Statics
	{
		struct JsonObject_eventSetNullField_Parms
		{
			FString FieldName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_SetNullField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonObject_SetNullField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonObject_eventSetNullField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_SetNullField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetNullField_Statics::NewProp_FieldName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonObject_SetNullField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonObject_SetNullField_Statics::NewProp_FieldName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_SetNullField_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON|Object" },
		{ "ModuleRelativePath", "Public/BlueprintJsonWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonObject_SetNullField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonObject, nullptr, "SetNullField", nullptr, nullptr, sizeof(JsonObject_eventSetNullField_Parms), Z_Construct_UFunction_UJsonObject_SetNullField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetNullField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_SetNullField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetNullField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonObject_SetNullField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonObject_SetNullField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonObject_SetObjectField_Statics
	{
		struct JsonObject_eventSetObjectField_Parms
		{
			FString FieldName;
			const UJsonObject* JsonObject;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JsonObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_SetObjectField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonObject_SetObjectField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonObject_eventSetObjectField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_SetObjectField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetObjectField_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_SetObjectField_Statics::NewProp_JsonObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonObject_SetObjectField_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonObject_eventSetObjectField_Parms, JsonObject), Z_Construct_UClass_UJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_SetObjectField_Statics::NewProp_JsonObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetObjectField_Statics::NewProp_JsonObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonObject_SetObjectField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonObject_SetObjectField_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonObject_SetObjectField_Statics::NewProp_JsonObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_SetObjectField_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON|Object" },
		{ "ModuleRelativePath", "Public/BlueprintJsonWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonObject_SetObjectField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonObject, nullptr, "SetObjectField", nullptr, nullptr, sizeof(JsonObject_eventSetObjectField_Parms), Z_Construct_UFunction_UJsonObject_SetObjectField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetObjectField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_SetObjectField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetObjectField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonObject_SetObjectField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonObject_SetObjectField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonObject_SetQuatField_Statics
	{
		struct JsonObject_eventSetQuatField_Parms
		{
			FString FieldName;
			FQuat FieldValue;
		};
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_SetQuatField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonObject_SetQuatField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonObject_eventSetQuatField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_SetQuatField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetQuatField_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_SetQuatField_Statics::NewProp_FieldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJsonObject_SetQuatField_Statics::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonObject_eventSetQuatField_Parms, FieldValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_SetQuatField_Statics::NewProp_FieldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetQuatField_Statics::NewProp_FieldValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonObject_SetQuatField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonObject_SetQuatField_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonObject_SetQuatField_Statics::NewProp_FieldValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_SetQuatField_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON|Object" },
		{ "ModuleRelativePath", "Public/BlueprintJsonWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonObject_SetQuatField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonObject, nullptr, "SetQuatField", nullptr, nullptr, sizeof(JsonObject_eventSetQuatField_Parms), Z_Construct_UFunction_UJsonObject_SetQuatField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetQuatField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_SetQuatField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetQuatField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonObject_SetQuatField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonObject_SetQuatField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonObject_SetRotatorField_Statics
	{
		struct JsonObject_eventSetRotatorField_Parms
		{
			FString FieldName;
			FRotator FieldValue;
		};
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_SetRotatorField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonObject_SetRotatorField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonObject_eventSetRotatorField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_SetRotatorField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetRotatorField_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_SetRotatorField_Statics::NewProp_FieldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJsonObject_SetRotatorField_Statics::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonObject_eventSetRotatorField_Parms, FieldValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_SetRotatorField_Statics::NewProp_FieldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetRotatorField_Statics::NewProp_FieldValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonObject_SetRotatorField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonObject_SetRotatorField_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonObject_SetRotatorField_Statics::NewProp_FieldValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_SetRotatorField_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON|Object" },
		{ "ModuleRelativePath", "Public/BlueprintJsonWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonObject_SetRotatorField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonObject, nullptr, "SetRotatorField", nullptr, nullptr, sizeof(JsonObject_eventSetRotatorField_Parms), Z_Construct_UFunction_UJsonObject_SetRotatorField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetRotatorField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_SetRotatorField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetRotatorField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonObject_SetRotatorField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonObject_SetRotatorField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonObject_SetStringField_Statics
	{
		struct JsonObject_eventSetStringField_Parms
		{
			FString FieldName;
			FString FieldValue;
		};
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_SetStringField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonObject_SetStringField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonObject_eventSetStringField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_SetStringField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetStringField_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_SetStringField_Statics::NewProp_FieldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonObject_SetStringField_Statics::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonObject_eventSetStringField_Parms, FieldValue), METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_SetStringField_Statics::NewProp_FieldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetStringField_Statics::NewProp_FieldValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonObject_SetStringField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonObject_SetStringField_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonObject_SetStringField_Statics::NewProp_FieldValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_SetStringField_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON|Object" },
		{ "ModuleRelativePath", "Public/BlueprintJsonWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonObject_SetStringField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonObject, nullptr, "SetStringField", nullptr, nullptr, sizeof(JsonObject_eventSetStringField_Parms), Z_Construct_UFunction_UJsonObject_SetStringField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetStringField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_SetStringField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetStringField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonObject_SetStringField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonObject_SetStringField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonObject_SetTransformField_Statics
	{
		struct JsonObject_eventSetTransformField_Parms
		{
			FString FieldName;
			FTransform FieldValue;
		};
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_SetTransformField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonObject_SetTransformField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonObject_eventSetTransformField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_SetTransformField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetTransformField_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_SetTransformField_Statics::NewProp_FieldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJsonObject_SetTransformField_Statics::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonObject_eventSetTransformField_Parms, FieldValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_SetTransformField_Statics::NewProp_FieldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetTransformField_Statics::NewProp_FieldValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonObject_SetTransformField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonObject_SetTransformField_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonObject_SetTransformField_Statics::NewProp_FieldValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_SetTransformField_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON|Object" },
		{ "ModuleRelativePath", "Public/BlueprintJsonWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonObject_SetTransformField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonObject, nullptr, "SetTransformField", nullptr, nullptr, sizeof(JsonObject_eventSetTransformField_Parms), Z_Construct_UFunction_UJsonObject_SetTransformField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetTransformField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_SetTransformField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetTransformField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonObject_SetTransformField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonObject_SetTransformField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonObject_SetUObjectField_Statics
	{
		struct JsonObject_eventSetUObjectField_Parms
		{
			FString FieldName;
			const UObject* FieldValue;
		};
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_SetUObjectField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonObject_SetUObjectField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonObject_eventSetUObjectField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_SetUObjectField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetUObjectField_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_SetUObjectField_Statics::NewProp_FieldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonObject_SetUObjectField_Statics::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonObject_eventSetUObjectField_Parms, FieldValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_SetUObjectField_Statics::NewProp_FieldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetUObjectField_Statics::NewProp_FieldValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonObject_SetUObjectField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonObject_SetUObjectField_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonObject_SetUObjectField_Statics::NewProp_FieldValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_SetUObjectField_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON|Object" },
		{ "ModuleRelativePath", "Public/BlueprintJsonWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonObject_SetUObjectField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonObject, nullptr, "SetUObjectField", nullptr, nullptr, sizeof(JsonObject_eventSetUObjectField_Parms), Z_Construct_UFunction_UJsonObject_SetUObjectField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetUObjectField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_SetUObjectField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetUObjectField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonObject_SetUObjectField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonObject_SetUObjectField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonObject_SetVector2DField_Statics
	{
		struct JsonObject_eventSetVector2DField_Parms
		{
			FString FieldName;
			FVector2D FieldValue;
		};
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_SetVector2DField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonObject_SetVector2DField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonObject_eventSetVector2DField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_SetVector2DField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetVector2DField_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_SetVector2DField_Statics::NewProp_FieldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJsonObject_SetVector2DField_Statics::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonObject_eventSetVector2DField_Parms, FieldValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_SetVector2DField_Statics::NewProp_FieldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetVector2DField_Statics::NewProp_FieldValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonObject_SetVector2DField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonObject_SetVector2DField_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonObject_SetVector2DField_Statics::NewProp_FieldValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_SetVector2DField_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON|Object" },
		{ "ModuleRelativePath", "Public/BlueprintJsonWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonObject_SetVector2DField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonObject, nullptr, "SetVector2DField", nullptr, nullptr, sizeof(JsonObject_eventSetVector2DField_Parms), Z_Construct_UFunction_UJsonObject_SetVector2DField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetVector2DField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_SetVector2DField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetVector2DField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonObject_SetVector2DField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonObject_SetVector2DField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonObject_SetVectorField_Statics
	{
		struct JsonObject_eventSetVectorField_Parms
		{
			FString FieldName;
			FVector FieldValue;
		};
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_SetVectorField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonObject_SetVectorField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonObject_eventSetVectorField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_SetVectorField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetVectorField_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_SetVectorField_Statics::NewProp_FieldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJsonObject_SetVectorField_Statics::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonObject_eventSetVectorField_Parms, FieldValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_SetVectorField_Statics::NewProp_FieldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetVectorField_Statics::NewProp_FieldValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonObject_SetVectorField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonObject_SetVectorField_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonObject_SetVectorField_Statics::NewProp_FieldValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_SetVectorField_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON|Object" },
		{ "ModuleRelativePath", "Public/BlueprintJsonWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonObject_SetVectorField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonObject, nullptr, "SetVectorField", nullptr, nullptr, sizeof(JsonObject_eventSetVectorField_Parms), Z_Construct_UFunction_UJsonObject_SetVectorField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetVectorField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_SetVectorField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_SetVectorField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonObject_SetVectorField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonObject_SetVectorField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonObject_ToJsonValue_Statics
	{
		struct JsonObject_eventToJsonValue_Parms
		{
			UJsonValue* ReturnValue;
		};
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_ToJsonValue_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "JSON Value" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonObject_ToJsonValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonObject_eventToJsonValue_Parms, ReturnValue), Z_Construct_UClass_UJsonValue_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_ToJsonValue_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_ToJsonValue_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonObject_ToJsonValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonObject_ToJsonValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonObject_ToJsonValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON|Object" },
		{ "Comment", "/* Converts this JSON object to a JSON Value. */" },
		{ "ModuleRelativePath", "Public/BlueprintJsonWrapper.h" },
		{ "ToolTip", "Converts this JSON object to a JSON Value." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonObject_ToJsonValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonObject, nullptr, "ToJsonValue", nullptr, nullptr, sizeof(JsonObject_eventToJsonValue_Parms), Z_Construct_UFunction_UJsonObject_ToJsonValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_ToJsonValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonObject_ToJsonValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonObject_ToJsonValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonObject_ToJsonValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonObject_ToJsonValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UJsonObject_NoRegister()
	{
		return UJsonObject::StaticClass();
	}
	struct Z_Construct_UClass_UJsonObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UJsonObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintJson,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UJsonObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UJsonObject_CreateJsonObject, "CreateJsonObject" }, // 2526029527
		{ &Z_Construct_UFunction_UJsonObject_GetAllProperties, "GetAllProperties" }, // 1942801971
		{ &Z_Construct_UFunction_UJsonObject_GetFieldAsArray, "GetFieldAsArray" }, // 3372703393
		{ &Z_Construct_UFunction_UJsonObject_GetFieldAsBoolean, "GetFieldAsBoolean" }, // 1775974487
		{ &Z_Construct_UFunction_UJsonObject_GetFieldAsFloat, "GetFieldAsFloat" }, // 2681597972
		{ &Z_Construct_UFunction_UJsonObject_GetFieldAsInteger, "GetFieldAsInteger" }, // 3563289129
		{ &Z_Construct_UFunction_UJsonObject_GetFieldAsInteger64, "GetFieldAsInteger64" }, // 1935575938
		{ &Z_Construct_UFunction_UJsonObject_GetFieldAsObject, "GetFieldAsObject" }, // 2644678666
		{ &Z_Construct_UFunction_UJsonObject_GetFieldAsString, "GetFieldAsString" }, // 33678484
		{ &Z_Construct_UFunction_UJsonObject_GetFieldAsValue, "GetFieldAsValue" }, // 341993179
		{ &Z_Construct_UFunction_UJsonObject_HasField, "HasField" }, // 1760181451
		{ &Z_Construct_UFunction_UJsonObject_IsFieldNull, "IsFieldNull" }, // 719918387
		{ &Z_Construct_UFunction_UJsonObject_ParseJson, "ParseJson" }, // 3571405485
		{ &Z_Construct_UFunction_UJsonObject_SetArrayField, "SetArrayField" }, // 523350756
		{ &Z_Construct_UFunction_UJsonObject_SetBooleanField, "SetBooleanField" }, // 3558924313
		{ &Z_Construct_UFunction_UJsonObject_SetColorField, "SetColorField" }, // 167783383
		{ &Z_Construct_UFunction_UJsonObject_SetField, "SetField" }, // 3555711856
		{ &Z_Construct_UFunction_UJsonObject_SetFloatField, "SetFloatField" }, // 3811848659
		{ &Z_Construct_UFunction_UJsonObject_SetHitResultField, "SetHitResultField" }, // 1654440812
		{ &Z_Construct_UFunction_UJsonObject_SetInteger64Field, "SetInteger64Field" }, // 2731379086
		{ &Z_Construct_UFunction_UJsonObject_SetIntegerField, "SetIntegerField" }, // 3380211722
		{ &Z_Construct_UFunction_UJsonObject_SetLinearColorField, "SetLinearColorField" }, // 3409572073
		{ &Z_Construct_UFunction_UJsonObject_SetNullField, "SetNullField" }, // 4109153181
		{ &Z_Construct_UFunction_UJsonObject_SetObjectField, "SetObjectField" }, // 2569843434
		{ &Z_Construct_UFunction_UJsonObject_SetQuatField, "SetQuatField" }, // 3820034712
		{ &Z_Construct_UFunction_UJsonObject_SetRotatorField, "SetRotatorField" }, // 2718349124
		{ &Z_Construct_UFunction_UJsonObject_SetStringField, "SetStringField" }, // 1038027412
		{ &Z_Construct_UFunction_UJsonObject_SetTransformField, "SetTransformField" }, // 439004777
		{ &Z_Construct_UFunction_UJsonObject_SetUObjectField, "SetUObjectField" }, // 416281130
		{ &Z_Construct_UFunction_UJsonObject_SetVector2DField, "SetVector2DField" }, // 2602835331
		{ &Z_Construct_UFunction_UJsonObject_SetVectorField, "SetVectorField" }, // 3773225821
		{ &Z_Construct_UFunction_UJsonObject_ToJsonValue, "ToJsonValue" }, // 3750978351
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJsonObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *  A Json Object. Contains a list of fields.\n **/" },
		{ "IncludePath", "BlueprintJsonWrapper.h" },
		{ "ModuleRelativePath", "Public/BlueprintJsonWrapper.h" },
		{ "ToolTip", "A Json Object. Contains a list of fields." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UJsonObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJsonObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UJsonObject_Statics::ClassParams = {
		&UJsonObject::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UJsonObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UJsonObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UJsonObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UJsonObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UJsonObject, 3744306785);
	template<> BLUEPRINTJSON_API UClass* StaticClass<UJsonObject>()
	{
		return UJsonObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UJsonObject(Z_Construct_UClass_UJsonObject, &UJsonObject::StaticClass, TEXT("/Script/BlueprintJson"), TEXT("UJsonObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJsonObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
