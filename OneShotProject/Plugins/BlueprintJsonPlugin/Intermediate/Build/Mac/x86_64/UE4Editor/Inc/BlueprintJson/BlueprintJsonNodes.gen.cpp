// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintJson/Public/BlueprintJsonNodes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintJsonNodes() {}
// Cross Module References
	BLUEPRINTJSON_API UFunction* Z_Construct_UDelegateFunction_BlueprintJson_JsonSaveEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_BlueprintJson();
	BLUEPRINTJSON_API UFunction* Z_Construct_UDelegateFunction_BlueprintJson_JsonLoadingEvent__DelegateSignature();
	BLUEPRINTJSON_API UClass* Z_Construct_UClass_UJsonObject_NoRegister();
	BLUEPRINTJSON_API UClass* Z_Construct_UClass_UJsonLoadAsyncProxyBase_NoRegister();
	BLUEPRINTJSON_API UClass* Z_Construct_UClass_UJsonLoadAsyncProxyBase();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	BLUEPRINTJSON_API UClass* Z_Construct_UClass_UJsonLoadAsyncFromFileProxy_NoRegister();
	BLUEPRINTJSON_API UClass* Z_Construct_UClass_UJsonLoadAsyncFromFileProxy();
	BLUEPRINTJSON_API UClass* Z_Construct_UClass_UJsonParseAsyncProxy_NoRegister();
	BLUEPRINTJSON_API UClass* Z_Construct_UClass_UJsonParseAsyncProxy();
	BLUEPRINTJSON_API UClass* Z_Construct_UClass_UJsonSaveAsyncProxy_NoRegister();
	BLUEPRINTJSON_API UClass* Z_Construct_UClass_UJsonSaveAsyncProxy();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_BlueprintJson_JsonSaveEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BlueprintJson_JsonSaveEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlueprintJsonNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BlueprintJson_JsonSaveEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BlueprintJson, nullptr, "JsonSaveEvent__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_BlueprintJson_JsonSaveEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlueprintJson_JsonSaveEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_BlueprintJson_JsonSaveEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_BlueprintJson_JsonSaveEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_BlueprintJson_JsonLoadingEvent__DelegateSignature_Statics
	{
		struct _Script_BlueprintJson_eventJsonLoadingEvent_Parms
		{
			const UJsonObject* JsonObject;
		};
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BlueprintJson_JsonLoadingEvent__DelegateSignature_Statics::NewProp_JsonObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_BlueprintJson_JsonLoadingEvent__DelegateSignature_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_BlueprintJson_eventJsonLoadingEvent_Parms, JsonObject), Z_Construct_UClass_UJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_BlueprintJson_JsonLoadingEvent__DelegateSignature_Statics::NewProp_JsonObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlueprintJson_JsonLoadingEvent__DelegateSignature_Statics::NewProp_JsonObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BlueprintJson_JsonLoadingEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BlueprintJson_JsonLoadingEvent__DelegateSignature_Statics::NewProp_JsonObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BlueprintJson_JsonLoadingEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlueprintJsonNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BlueprintJson_JsonLoadingEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BlueprintJson, nullptr, "JsonLoadingEvent__DelegateSignature", nullptr, nullptr, sizeof(_Script_BlueprintJson_eventJsonLoadingEvent_Parms), Z_Construct_UDelegateFunction_BlueprintJson_JsonLoadingEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlueprintJson_JsonLoadingEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_BlueprintJson_JsonLoadingEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlueprintJson_JsonLoadingEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_BlueprintJson_JsonLoadingEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_BlueprintJson_JsonLoadingEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UJsonLoadAsyncProxyBase::StaticRegisterNativesUJsonLoadAsyncProxyBase()
	{
	}
	UClass* Z_Construct_UClass_UJsonLoadAsyncProxyBase_NoRegister()
	{
		return UJsonLoadAsyncProxyBase::StaticClass();
	}
	struct Z_Construct_UClass_UJsonLoadAsyncProxyBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Success_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_Success;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Failed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_Failed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UJsonLoadAsyncProxyBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintJson,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJsonLoadAsyncProxyBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *  Base class for asynchronous json loading.\n **/" },
		{ "IncludePath", "BlueprintJsonNodes.h" },
		{ "ModuleRelativePath", "Public/BlueprintJsonNodes.h" },
		{ "ToolTip", "Base class for asynchronous json loading." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJsonLoadAsyncProxyBase_Statics::NewProp_Success_MetaData[] = {
		{ "Comment", "/* Called when the JSON has successfully been parsed. */" },
		{ "ModuleRelativePath", "Public/BlueprintJsonNodes.h" },
		{ "ToolTip", "Called when the JSON has successfully been parsed." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UJsonLoadAsyncProxyBase_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UJsonLoadAsyncProxyBase, Success), Z_Construct_UDelegateFunction_BlueprintJson_JsonLoadingEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UJsonLoadAsyncProxyBase_Statics::NewProp_Success_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJsonLoadAsyncProxyBase_Statics::NewProp_Success_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJsonLoadAsyncProxyBase_Statics::NewProp_Failed_MetaData[] = {
		{ "Comment", "/* Called when an error happened while parsing loading or parsing JSON */" },
		{ "ModuleRelativePath", "Public/BlueprintJsonNodes.h" },
		{ "ToolTip", "Called when an error happened while parsing loading or parsing JSON" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UJsonLoadAsyncProxyBase_Statics::NewProp_Failed = { "Failed", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UJsonLoadAsyncProxyBase, Failed), Z_Construct_UDelegateFunction_BlueprintJson_JsonLoadingEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UJsonLoadAsyncProxyBase_Statics::NewProp_Failed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJsonLoadAsyncProxyBase_Statics::NewProp_Failed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UJsonLoadAsyncProxyBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJsonLoadAsyncProxyBase_Statics::NewProp_Success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJsonLoadAsyncProxyBase_Statics::NewProp_Failed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UJsonLoadAsyncProxyBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJsonLoadAsyncProxyBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UJsonLoadAsyncProxyBase_Statics::ClassParams = {
		&UJsonLoadAsyncProxyBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UJsonLoadAsyncProxyBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UJsonLoadAsyncProxyBase_Statics::PropPointers),
		0,
		0x008000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UJsonLoadAsyncProxyBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UJsonLoadAsyncProxyBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UJsonLoadAsyncProxyBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UJsonLoadAsyncProxyBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UJsonLoadAsyncProxyBase, 325236279);
	template<> BLUEPRINTJSON_API UClass* StaticClass<UJsonLoadAsyncProxyBase>()
	{
		return UJsonLoadAsyncProxyBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UJsonLoadAsyncProxyBase(Z_Construct_UClass_UJsonLoadAsyncProxyBase, &UJsonLoadAsyncProxyBase::StaticClass, TEXT("/Script/BlueprintJson"), TEXT("UJsonLoadAsyncProxyBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJsonLoadAsyncProxyBase);
	DEFINE_FUNCTION(UJsonLoadAsyncFromFileProxy::execLoadJsonFileAsync)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UJsonLoadAsyncFromFileProxy**)Z_Param__Result=UJsonLoadAsyncFromFileProxy::LoadJsonFileAsync(Z_Param_FilePath);
		P_NATIVE_END;
	}
	void UJsonLoadAsyncFromFileProxy::StaticRegisterNativesUJsonLoadAsyncFromFileProxy()
	{
		UClass* Class = UJsonLoadAsyncFromFileProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadJsonFileAsync", &UJsonLoadAsyncFromFileProxy::execLoadJsonFileAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UJsonLoadAsyncFromFileProxy_LoadJsonFileAsync_Statics
	{
		struct JsonLoadAsyncFromFileProxy_eventLoadJsonFileAsync_Parms
		{
			FString FilePath;
			UJsonLoadAsyncFromFileProxy* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonLoadAsyncFromFileProxy_LoadJsonFileAsync_Statics::NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonLoadAsyncFromFileProxy_LoadJsonFileAsync_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonLoadAsyncFromFileProxy_eventLoadJsonFileAsync_Parms, FilePath), METADATA_PARAMS(Z_Construct_UFunction_UJsonLoadAsyncFromFileProxy_LoadJsonFileAsync_Statics::NewProp_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLoadAsyncFromFileProxy_LoadJsonFileAsync_Statics::NewProp_FilePath_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonLoadAsyncFromFileProxy_LoadJsonFileAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonLoadAsyncFromFileProxy_eventLoadJsonFileAsync_Parms, ReturnValue), Z_Construct_UClass_UJsonLoadAsyncFromFileProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonLoadAsyncFromFileProxy_LoadJsonFileAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLoadAsyncFromFileProxy_LoadJsonFileAsync_Statics::NewProp_FilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonLoadAsyncFromFileProxy_LoadJsonFileAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonLoadAsyncFromFileProxy_LoadJsonFileAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "JSON" },
		{ "Comment", "/* Load a JSON file and parse it asynchronously outside of the Game Thread. */" },
		{ "DisplayName", "Load JSON File Async" },
		{ "ModuleRelativePath", "Public/BlueprintJsonNodes.h" },
		{ "ToolTip", "Load a JSON file and parse it asynchronously outside of the Game Thread." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonLoadAsyncFromFileProxy_LoadJsonFileAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonLoadAsyncFromFileProxy, nullptr, "LoadJsonFileAsync", nullptr, nullptr, sizeof(JsonLoadAsyncFromFileProxy_eventLoadJsonFileAsync_Parms), Z_Construct_UFunction_UJsonLoadAsyncFromFileProxy_LoadJsonFileAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLoadAsyncFromFileProxy_LoadJsonFileAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonLoadAsyncFromFileProxy_LoadJsonFileAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonLoadAsyncFromFileProxy_LoadJsonFileAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonLoadAsyncFromFileProxy_LoadJsonFileAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonLoadAsyncFromFileProxy_LoadJsonFileAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UJsonLoadAsyncFromFileProxy_NoRegister()
	{
		return UJsonLoadAsyncFromFileProxy::StaticClass();
	}
	struct Z_Construct_UClass_UJsonLoadAsyncFromFileProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UJsonLoadAsyncFromFileProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UJsonLoadAsyncProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintJson,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UJsonLoadAsyncFromFileProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UJsonLoadAsyncFromFileProxy_LoadJsonFileAsync, "LoadJsonFileAsync" }, // 1663997940
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJsonLoadAsyncFromFileProxy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *  Asynchronous node to load Json directly from a file.\n **/" },
		{ "IncludePath", "BlueprintJsonNodes.h" },
		{ "ModuleRelativePath", "Public/BlueprintJsonNodes.h" },
		{ "ToolTip", "Asynchronous node to load Json directly from a file." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UJsonLoadAsyncFromFileProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJsonLoadAsyncFromFileProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UJsonLoadAsyncFromFileProxy_Statics::ClassParams = {
		&UJsonLoadAsyncFromFileProxy::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UJsonLoadAsyncFromFileProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UJsonLoadAsyncFromFileProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UJsonLoadAsyncFromFileProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UJsonLoadAsyncFromFileProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UJsonLoadAsyncFromFileProxy, 1260105204);
	template<> BLUEPRINTJSON_API UClass* StaticClass<UJsonLoadAsyncFromFileProxy>()
	{
		return UJsonLoadAsyncFromFileProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UJsonLoadAsyncFromFileProxy(Z_Construct_UClass_UJsonLoadAsyncFromFileProxy, &UJsonLoadAsyncFromFileProxy::StaticClass, TEXT("/Script/BlueprintJson"), TEXT("UJsonLoadAsyncFromFileProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJsonLoadAsyncFromFileProxy);
	DEFINE_FUNCTION(UJsonParseAsyncProxy::execParseJsonAsync)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Json);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UJsonParseAsyncProxy**)Z_Param__Result=UJsonParseAsyncProxy::ParseJsonAsync(Z_Param_Json);
		P_NATIVE_END;
	}
	void UJsonParseAsyncProxy::StaticRegisterNativesUJsonParseAsyncProxy()
	{
		UClass* Class = UJsonParseAsyncProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ParseJsonAsync", &UJsonParseAsyncProxy::execParseJsonAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UJsonParseAsyncProxy_ParseJsonAsync_Statics
	{
		struct JsonParseAsyncProxy_eventParseJsonAsync_Parms
		{
			FString Json;
			UJsonParseAsyncProxy* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Json_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Json;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonParseAsyncProxy_ParseJsonAsync_Statics::NewProp_Json_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonParseAsyncProxy_ParseJsonAsync_Statics::NewProp_Json = { "Json", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonParseAsyncProxy_eventParseJsonAsync_Parms, Json), METADATA_PARAMS(Z_Construct_UFunction_UJsonParseAsyncProxy_ParseJsonAsync_Statics::NewProp_Json_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonParseAsyncProxy_ParseJsonAsync_Statics::NewProp_Json_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonParseAsyncProxy_ParseJsonAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonParseAsyncProxy_eventParseJsonAsync_Parms, ReturnValue), Z_Construct_UClass_UJsonParseAsyncProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonParseAsyncProxy_ParseJsonAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonParseAsyncProxy_ParseJsonAsync_Statics::NewProp_Json,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonParseAsyncProxy_ParseJsonAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonParseAsyncProxy_ParseJsonAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "JSON" },
		{ "Comment", "/* Parse JSON string to a JSON Object asynchronously outside of the Game Thread. */" },
		{ "DisplayName", "Parse JSON Async" },
		{ "ModuleRelativePath", "Public/BlueprintJsonNodes.h" },
		{ "ToolTip", "Parse JSON string to a JSON Object asynchronously outside of the Game Thread." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonParseAsyncProxy_ParseJsonAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonParseAsyncProxy, nullptr, "ParseJsonAsync", nullptr, nullptr, sizeof(JsonParseAsyncProxy_eventParseJsonAsync_Parms), Z_Construct_UFunction_UJsonParseAsyncProxy_ParseJsonAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonParseAsyncProxy_ParseJsonAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonParseAsyncProxy_ParseJsonAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonParseAsyncProxy_ParseJsonAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonParseAsyncProxy_ParseJsonAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonParseAsyncProxy_ParseJsonAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UJsonParseAsyncProxy_NoRegister()
	{
		return UJsonParseAsyncProxy::StaticClass();
	}
	struct Z_Construct_UClass_UJsonParseAsyncProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UJsonParseAsyncProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UJsonLoadAsyncProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintJson,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UJsonParseAsyncProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UJsonParseAsyncProxy_ParseJsonAsync, "ParseJsonAsync" }, // 2291003460
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJsonParseAsyncProxy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *  Asynchronous node to parse Json.\n **/" },
		{ "IncludePath", "BlueprintJsonNodes.h" },
		{ "ModuleRelativePath", "Public/BlueprintJsonNodes.h" },
		{ "ToolTip", "Asynchronous node to parse Json." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UJsonParseAsyncProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJsonParseAsyncProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UJsonParseAsyncProxy_Statics::ClassParams = {
		&UJsonParseAsyncProxy::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UJsonParseAsyncProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UJsonParseAsyncProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UJsonParseAsyncProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UJsonParseAsyncProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UJsonParseAsyncProxy, 1089009025);
	template<> BLUEPRINTJSON_API UClass* StaticClass<UJsonParseAsyncProxy>()
	{
		return UJsonParseAsyncProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UJsonParseAsyncProxy(Z_Construct_UClass_UJsonParseAsyncProxy, &UJsonParseAsyncProxy::StaticClass, TEXT("/Script/BlueprintJson"), TEXT("UJsonParseAsyncProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJsonParseAsyncProxy);
	DEFINE_FUNCTION(UJsonSaveAsyncProxy::execSaveJsonToFileAsync)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_GET_OBJECT(UJsonObject,Z_Param_ObjectToSave);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UJsonSaveAsyncProxy**)Z_Param__Result=UJsonSaveAsyncProxy::SaveJsonToFileAsync(Z_Param_FilePath,Z_Param_ObjectToSave);
		P_NATIVE_END;
	}
	void UJsonSaveAsyncProxy::StaticRegisterNativesUJsonSaveAsyncProxy()
	{
		UClass* Class = UJsonSaveAsyncProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SaveJsonToFileAsync", &UJsonSaveAsyncProxy::execSaveJsonToFileAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UJsonSaveAsyncProxy_SaveJsonToFileAsync_Statics
	{
		struct JsonSaveAsyncProxy_eventSaveJsonToFileAsync_Parms
		{
			FString FilePath;
			const UJsonObject* ObjectToSave;
			UJsonSaveAsyncProxy* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectToSave_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectToSave;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonSaveAsyncProxy_SaveJsonToFileAsync_Statics::NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonSaveAsyncProxy_SaveJsonToFileAsync_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonSaveAsyncProxy_eventSaveJsonToFileAsync_Parms, FilePath), METADATA_PARAMS(Z_Construct_UFunction_UJsonSaveAsyncProxy_SaveJsonToFileAsync_Statics::NewProp_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonSaveAsyncProxy_SaveJsonToFileAsync_Statics::NewProp_FilePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonSaveAsyncProxy_SaveJsonToFileAsync_Statics::NewProp_ObjectToSave_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonSaveAsyncProxy_SaveJsonToFileAsync_Statics::NewProp_ObjectToSave = { "ObjectToSave", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonSaveAsyncProxy_eventSaveJsonToFileAsync_Parms, ObjectToSave), Z_Construct_UClass_UJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UJsonSaveAsyncProxy_SaveJsonToFileAsync_Statics::NewProp_ObjectToSave_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonSaveAsyncProxy_SaveJsonToFileAsync_Statics::NewProp_ObjectToSave_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonSaveAsyncProxy_SaveJsonToFileAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonSaveAsyncProxy_eventSaveJsonToFileAsync_Parms, ReturnValue), Z_Construct_UClass_UJsonSaveAsyncProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonSaveAsyncProxy_SaveJsonToFileAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonSaveAsyncProxy_SaveJsonToFileAsync_Statics::NewProp_FilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonSaveAsyncProxy_SaveJsonToFileAsync_Statics::NewProp_ObjectToSave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonSaveAsyncProxy_SaveJsonToFileAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonSaveAsyncProxy_SaveJsonToFileAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "JSON" },
		{ "Comment", "/* Save the JSON object to a file asynchronously outside of the Game Thead. */" },
		{ "DisplayName", "Save JSON to File Async" },
		{ "ModuleRelativePath", "Public/BlueprintJsonNodes.h" },
		{ "ToolTip", "Save the JSON object to a file asynchronously outside of the Game Thead." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonSaveAsyncProxy_SaveJsonToFileAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonSaveAsyncProxy, nullptr, "SaveJsonToFileAsync", nullptr, nullptr, sizeof(JsonSaveAsyncProxy_eventSaveJsonToFileAsync_Parms), Z_Construct_UFunction_UJsonSaveAsyncProxy_SaveJsonToFileAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonSaveAsyncProxy_SaveJsonToFileAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonSaveAsyncProxy_SaveJsonToFileAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonSaveAsyncProxy_SaveJsonToFileAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonSaveAsyncProxy_SaveJsonToFileAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonSaveAsyncProxy_SaveJsonToFileAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UJsonSaveAsyncProxy_NoRegister()
	{
		return UJsonSaveAsyncProxy::StaticClass();
	}
	struct Z_Construct_UClass_UJsonSaveAsyncProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Success_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_Success;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Failed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_Failed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectToSave_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectToSave;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UJsonSaveAsyncProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintJson,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UJsonSaveAsyncProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UJsonSaveAsyncProxy_SaveJsonToFileAsync, "SaveJsonToFileAsync" }, // 2349835993
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJsonSaveAsyncProxy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *  Base class for asynchronous json loading.\n **/" },
		{ "IncludePath", "BlueprintJsonNodes.h" },
		{ "ModuleRelativePath", "Public/BlueprintJsonNodes.h" },
		{ "ToolTip", "Base class for asynchronous json loading." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJsonSaveAsyncProxy_Statics::NewProp_Success_MetaData[] = {
		{ "Comment", "/* Called when the JSON has successfully been saved. */" },
		{ "ModuleRelativePath", "Public/BlueprintJsonNodes.h" },
		{ "ToolTip", "Called when the JSON has successfully been saved." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UJsonSaveAsyncProxy_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UJsonSaveAsyncProxy, Success), Z_Construct_UDelegateFunction_BlueprintJson_JsonSaveEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UJsonSaveAsyncProxy_Statics::NewProp_Success_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJsonSaveAsyncProxy_Statics::NewProp_Success_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJsonSaveAsyncProxy_Statics::NewProp_Failed_MetaData[] = {
		{ "Comment", "/* Called when an error happened while saving JSON */" },
		{ "ModuleRelativePath", "Public/BlueprintJsonNodes.h" },
		{ "ToolTip", "Called when an error happened while saving JSON" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UJsonSaveAsyncProxy_Statics::NewProp_Failed = { "Failed", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UJsonSaveAsyncProxy, Failed), Z_Construct_UDelegateFunction_BlueprintJson_JsonSaveEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UJsonSaveAsyncProxy_Statics::NewProp_Failed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJsonSaveAsyncProxy_Statics::NewProp_Failed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJsonSaveAsyncProxy_Statics::NewProp_ObjectToSave_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlueprintJsonNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UJsonSaveAsyncProxy_Statics::NewProp_ObjectToSave = { "ObjectToSave", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UJsonSaveAsyncProxy, ObjectToSave), Z_Construct_UClass_UJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UJsonSaveAsyncProxy_Statics::NewProp_ObjectToSave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJsonSaveAsyncProxy_Statics::NewProp_ObjectToSave_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UJsonSaveAsyncProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJsonSaveAsyncProxy_Statics::NewProp_Success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJsonSaveAsyncProxy_Statics::NewProp_Failed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJsonSaveAsyncProxy_Statics::NewProp_ObjectToSave,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UJsonSaveAsyncProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJsonSaveAsyncProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UJsonSaveAsyncProxy_Statics::ClassParams = {
		&UJsonSaveAsyncProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UJsonSaveAsyncProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UJsonSaveAsyncProxy_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UJsonSaveAsyncProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UJsonSaveAsyncProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UJsonSaveAsyncProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UJsonSaveAsyncProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UJsonSaveAsyncProxy, 2233343050);
	template<> BLUEPRINTJSON_API UClass* StaticClass<UJsonSaveAsyncProxy>()
	{
		return UJsonSaveAsyncProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UJsonSaveAsyncProxy(Z_Construct_UClass_UJsonSaveAsyncProxy, &UJsonSaveAsyncProxy::StaticClass, TEXT("/Script/BlueprintJson"), TEXT("UJsonSaveAsyncProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJsonSaveAsyncProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
