// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintJsonEditor/Public/BlueprintJsonEditorNodes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintJsonEditorNodes() {}
// Cross Module References
	BLUEPRINTJSONEDITOR_API UClass* Z_Construct_UClass_UK2Node_AddFieldToJsonObject_NoRegister();
	BLUEPRINTJSONEDITOR_API UClass* Z_Construct_UClass_UK2Node_AddFieldToJsonObject();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	UPackage* Z_Construct_UPackage__Script_BlueprintJsonEditor();
// End Cross Module References
	void UK2Node_AddFieldToJsonObject::StaticRegisterNativesUK2Node_AddFieldToJsonObject()
	{
	}
	UClass* Z_Construct_UClass_UK2Node_AddFieldToJsonObject_NoRegister()
	{
		return UK2Node_AddFieldToJsonObject::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_AddFieldToJsonObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_AddFieldToJsonObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintJsonEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_AddFieldToJsonObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09K2 Node accepting a wild card to easily add a field to a JSON object.\n **/" },
		{ "IncludePath", "BlueprintJsonEditorNodes.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BlueprintJsonEditorNodes.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "K2 Node accepting a wild card to easily add a field to a JSON object." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_AddFieldToJsonObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_AddFieldToJsonObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_AddFieldToJsonObject_Statics::ClassParams = {
		&UK2Node_AddFieldToJsonObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_AddFieldToJsonObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_AddFieldToJsonObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_AddFieldToJsonObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK2Node_AddFieldToJsonObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK2Node_AddFieldToJsonObject, 1488573485);
	template<> BLUEPRINTJSONEDITOR_API UClass* StaticClass<UK2Node_AddFieldToJsonObject>()
	{
		return UK2Node_AddFieldToJsonObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK2Node_AddFieldToJsonObject(Z_Construct_UClass_UK2Node_AddFieldToJsonObject, &UK2Node_AddFieldToJsonObject::StaticClass, TEXT("/Script/BlueprintJsonEditor"), TEXT("UK2Node_AddFieldToJsonObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_AddFieldToJsonObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
