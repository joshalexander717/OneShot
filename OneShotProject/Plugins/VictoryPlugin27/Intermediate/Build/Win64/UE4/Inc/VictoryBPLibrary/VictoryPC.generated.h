// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSubtitleCue;
class USoundBase;
class UAudioComponent;
struct FVictorySubtitleCue;
#ifdef VICTORYBPLIBRARY_VictoryPC_generated_h
#error "VictoryPC.generated.h already included, missing '#pragma once' in VictoryPC.h"
#endif
#define VICTORYBPLIBRARY_VictoryPC_generated_h

#define HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryPC_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVictorySubtitleCue_Statics; \
	VICTORYBPLIBRARY_API static class UScriptStruct* StaticStruct();


template<> VICTORYBPLIBRARY_API UScriptStruct* StaticStruct<struct FVictorySubtitleCue>();

#define HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryPC_h_44_SPARSE_DATA
#define HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryPC_h_44_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execVictoryPC_GetMyIP_SendRequest); \
	DECLARE_FUNCTION(execSubtitles_CPPDelegate); \
	DECLARE_FUNCTION(execVictoryPlaySpeechSound);


#define HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryPC_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execVictoryPC_GetMyIP_SendRequest); \
	DECLARE_FUNCTION(execSubtitles_CPPDelegate); \
	DECLARE_FUNCTION(execVictoryPlaySpeechSound);


#define HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryPC_h_44_EVENT_PARMS \
	struct VictoryPC_eventOnVictorySubtitlesQueued_Parms \
	{ \
		TArray<FVictorySubtitleCue> VictorySubtitles; \
		float CueDuration; \
	}; \
	struct VictoryPC_eventVictoryPC_GetMyIP_DataReceived_Parms \
	{ \
		FString YourIP; \
	};


#define HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryPC_h_44_CALLBACK_WRAPPERS
#define HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryPC_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVictoryPC(); \
	friend struct Z_Construct_UClass_AVictoryPC_Statics; \
public: \
	DECLARE_CLASS(AVictoryPC, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VictoryBPLibrary"), NO_API) \
	DECLARE_SERIALIZER(AVictoryPC)


#define HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryPC_h_44_INCLASS \
private: \
	static void StaticRegisterNativesAVictoryPC(); \
	friend struct Z_Construct_UClass_AVictoryPC_Statics; \
public: \
	DECLARE_CLASS(AVictoryPC, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VictoryBPLibrary"), NO_API) \
	DECLARE_SERIALIZER(AVictoryPC)


#define HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryPC_h_44_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVictoryPC(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVictoryPC) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVictoryPC); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVictoryPC); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVictoryPC(AVictoryPC&&); \
	NO_API AVictoryPC(const AVictoryPC&); \
public:


#define HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryPC_h_44_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVictoryPC(AVictoryPC&&); \
	NO_API AVictoryPC(const AVictoryPC&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVictoryPC); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVictoryPC); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVictoryPC)


#define HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryPC_h_44_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryPC_h_41_PROLOG \
	HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryPC_h_44_EVENT_PARMS


#define HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryPC_h_44_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryPC_h_44_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryPC_h_44_SPARSE_DATA \
	HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryPC_h_44_RPC_WRAPPERS \
	HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryPC_h_44_CALLBACK_WRAPPERS \
	HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryPC_h_44_INCLASS \
	HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryPC_h_44_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryPC_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryPC_h_44_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryPC_h_44_SPARSE_DATA \
	HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryPC_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryPC_h_44_CALLBACK_WRAPPERS \
	HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryPC_h_44_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryPC_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VICTORYBPLIBRARY_API UClass* StaticClass<class AVictoryPC>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryPC_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
