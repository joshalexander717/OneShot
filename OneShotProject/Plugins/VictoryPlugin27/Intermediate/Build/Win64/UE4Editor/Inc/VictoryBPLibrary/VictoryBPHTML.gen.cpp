// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VictoryBPLibrary/Public/VictoryBPHTML.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVictoryBPHTML() {}
// Cross Module References
	VICTORYBPLIBRARY_API UClass* Z_Construct_UClass_UVictoryBPHTML_NoRegister();
	VICTORYBPLIBRARY_API UClass* Z_Construct_UClass_UVictoryBPHTML();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_VictoryBPLibrary();
// End Cross Module References
	void UVictoryBPHTML::StaticRegisterNativesUVictoryBPHTML()
	{
	}
	UClass* Z_Construct_UClass_UVictoryBPHTML_NoRegister()
	{
		return UVictoryBPHTML::StaticClass();
	}
	struct Z_Construct_UClass_UVictoryBPHTML_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVictoryBPHTML_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_VictoryBPLibrary,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVictoryBPHTML_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//!! Can someone submit HTML5 update to Victory Git?\n" },
		{ "IncludePath", "VictoryBPHTML.h" },
		{ "ModuleRelativePath", "Public/VictoryBPHTML.h" },
		{ "ToolTip", "!! Can someone submit HTML5 update to Victory Git?" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVictoryBPHTML_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVictoryBPHTML>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVictoryBPHTML_Statics::ClassParams = {
		&UVictoryBPHTML::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVictoryBPHTML_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVictoryBPHTML_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVictoryBPHTML()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVictoryBPHTML_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVictoryBPHTML, 2332327398);
	template<> VICTORYBPLIBRARY_API UClass* StaticClass<UVictoryBPHTML>()
	{
		return UVictoryBPHTML::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVictoryBPHTML(Z_Construct_UClass_UVictoryBPHTML, &UVictoryBPHTML::StaticClass, TEXT("/Script/VictoryBPLibrary"), TEXT("UVictoryBPHTML"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVictoryBPHTML);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
