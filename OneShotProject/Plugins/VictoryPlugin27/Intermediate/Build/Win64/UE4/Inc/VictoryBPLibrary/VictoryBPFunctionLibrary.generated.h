// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FRotator;
class USceneComponent;
struct FVector;
class APlayerController;
class UWidget;
class UPanelSlot;
class UObject;
struct FVector2D;
struct FHitResult;
class UMeshComponent;
class ULevelStreamingDynamic;
struct FLevelStreamInstanceInfo;
class UUserWidget;
class UTexture2D;
class ASceneCapture2D;
struct FLinearColor;
class USceneCaptureComponent2D;
class APostProcessVolume;
class USoundWave;
class USoundAttenuation;
class UAudioComponent;
enum class EJoyImageFormats : uint8;
class AStaticMeshActor;
class USkeletalMeshComponent;
struct FKey;
class UMaterialInterface;
class ACharacter;
class UStaticMeshComponent;
class UPrimitiveComponent;
struct FKeyEvent;
class APlayerStart;
struct FPlane;
class USoundClass;
struct FVictoryInput;
struct FVictoryInputAxis;
class AVictoryISM;
class UDestructibleComponent;
class UTextureRenderTarget2D;
class UActorComponent;
struct FDateTime;
class URamaVictoryPluginCreateProcessPipe;
class APawn;
class UNavigationQueryFilter;
class ULevelStreaming;
#ifdef VICTORYBPLIBRARY_VictoryBPFunctionLibrary_generated_h
#error "VictoryBPFunctionLibrary.generated.h already included, missing '#pragma once' in VictoryBPFunctionLibrary.h"
#endif
#define VICTORYBPLIBRARY_VictoryBPFunctionLibrary_generated_h

#define HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_229_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLevelStreamInstanceInfo_Statics; \
	VICTORYBPLIBRARY_API static class UScriptStruct* StaticStruct();


template<> VICTORYBPLIBRARY_API UScriptStruct* StaticStruct<struct FLevelStreamInstanceInfo>();

#define HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_179_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVictoryInputAxis_Statics; \
	VICTORYBPLIBRARY_API static class UScriptStruct* StaticStruct();


template<> VICTORYBPLIBRARY_API UScriptStruct* StaticStruct<struct FVictoryInputAxis>();

#define HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_128_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVictoryInput_Statics; \
	VICTORYBPLIBRARY_API static class UScriptStruct* StaticStruct();


template<> VICTORYBPLIBRARY_API UScriptStruct* StaticStruct<struct FVictoryInput>();

#define HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_68_SPARSE_DATA
#define HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_68_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPipeIsValid); \
	DECLARE_FUNCTION(execReadFromPipe); \
	DECLARE_FUNCTION(execClosePipe); \
	DECLARE_FUNCTION(execCreatePipe);


#define HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPipeIsValid); \
	DECLARE_FUNCTION(execReadFromPipe); \
	DECLARE_FUNCTION(execClosePipe); \
	DECLARE_FUNCTION(execCreatePipe);


#define HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_68_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURamaVictoryPluginCreateProcessPipe(); \
	friend struct Z_Construct_UClass_URamaVictoryPluginCreateProcessPipe_Statics; \
public: \
	DECLARE_CLASS(URamaVictoryPluginCreateProcessPipe, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VictoryBPLibrary"), NO_API) \
	DECLARE_SERIALIZER(URamaVictoryPluginCreateProcessPipe)


#define HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_68_INCLASS \
private: \
	static void StaticRegisterNativesURamaVictoryPluginCreateProcessPipe(); \
	friend struct Z_Construct_UClass_URamaVictoryPluginCreateProcessPipe_Statics; \
public: \
	DECLARE_CLASS(URamaVictoryPluginCreateProcessPipe, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VictoryBPLibrary"), NO_API) \
	DECLARE_SERIALIZER(URamaVictoryPluginCreateProcessPipe)


#define HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_68_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URamaVictoryPluginCreateProcessPipe(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URamaVictoryPluginCreateProcessPipe) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URamaVictoryPluginCreateProcessPipe); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URamaVictoryPluginCreateProcessPipe); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URamaVictoryPluginCreateProcessPipe(URamaVictoryPluginCreateProcessPipe&&); \
	NO_API URamaVictoryPluginCreateProcessPipe(const URamaVictoryPluginCreateProcessPipe&); \
public:


#define HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_68_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URamaVictoryPluginCreateProcessPipe(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URamaVictoryPluginCreateProcessPipe(URamaVictoryPluginCreateProcessPipe&&); \
	NO_API URamaVictoryPluginCreateProcessPipe(const URamaVictoryPluginCreateProcessPipe&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URamaVictoryPluginCreateProcessPipe); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URamaVictoryPluginCreateProcessPipe); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URamaVictoryPluginCreateProcessPipe)


#define HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_68_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_65_PROLOG
#define HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_68_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_68_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_68_SPARSE_DATA \
	HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_68_RPC_WRAPPERS \
	HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_68_INCLASS \
	HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_68_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_68_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_68_SPARSE_DATA \
	HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_68_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_68_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VICTORYBPLIBRARY_API UClass* StaticClass<class URamaVictoryPluginCreateProcessPipe>();

#define HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_277_SPARSE_DATA
#define HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_277_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAppendMultiple); \
	DECLARE_FUNCTION(execStringIsEmpty); \
	DECLARE_FUNCTION(execVerticalFOV); \
	DECLARE_FUNCTION(execHorizontalFOV); \
	DECLARE_FUNCTION(execGetActorRelativeRotation); \
	DECLARE_FUNCTION(execGetComponentRelativeRotation); \
	DECLARE_FUNCTION(execGetRotatorRelativeRotation); \
	DECLARE_FUNCTION(execGetActorRelativeLocation); \
	DECLARE_FUNCTION(execGetComponentRelativeLocation); \
	DECLARE_FUNCTION(execGetVectorRelativeLocation); \
	DECLARE_FUNCTION(execFlushPressedKeys); \
	DECLARE_FUNCTION(execInsertChildAt); \
	DECLARE_FUNCTION(execViewportPositionDeproject); \
	DECLARE_FUNCTION(execGetViewportPositionHitResultByChannel); \
	DECLARE_FUNCTION(execGetViewportPosition); \
	DECLARE_FUNCTION(execComponent_PrestreamTextures); \
	DECLARE_FUNCTION(execActor_PrestreamTextures); \
	DECLARE_FUNCTION(execUnloadStreamingLevel); \
	DECLARE_FUNCTION(execHideStreamingLevel); \
	DECLARE_FUNCTION(execRemoveFromStreamingLevels); \
	DECLARE_FUNCTION(execAddToStreamingLevels); \
	DECLARE_FUNCTION(execGetLevelInstanceInfo); \
	DECLARE_FUNCTION(execSetGenericTeamId); \
	DECLARE_FUNCTION(execGetGenericTeamId); \
	DECLARE_FUNCTION(execGetWidgetFromName); \
	DECLARE_FUNCTION(execWidgetGetChildrenOfClass); \
	DECLARE_FUNCTION(execWidgetGetParentOfClass); \
	DECLARE_FUNCTION(execWidgetIsChildOf); \
	DECLARE_FUNCTION(execGetFirstWidgetOfClass); \
	DECLARE_FUNCTION(execLoadTexture2D_FromFileByExtension); \
	DECLARE_FUNCTION(execCapture2D_SaveImage); \
	DECLARE_FUNCTION(execCaptureComponent2D_SaveImage); \
	DECLARE_FUNCTION(execCapture2D_Project); \
	DECLARE_FUNCTION(execCaptureComponent2D_Project); \
	DECLARE_FUNCTION(execGetTimeAlive); \
	DECLARE_FUNCTION(execGetCreationTime); \
	DECLARE_FUNCTION(execSetBloomIntensity); \
	DECLARE_FUNCTION(execActor__GetAttachedActors); \
	DECLARE_FUNCTION(execRandFloat_MINMAX_uniDis_MT); \
	DECLARE_FUNCTION(execRandFloat_uniDis_MT); \
	DECLARE_FUNCTION(execRandInt_MINMAX_uniDis_MT); \
	DECLARE_FUNCTION(execRandInt_uniDis_MT); \
	DECLARE_FUNCTION(execRandBool_Bernoulli_MT); \
	DECLARE_FUNCTION(execRandFloat_MINMAX_uniDis); \
	DECLARE_FUNCTION(execRandFloat_uniDis); \
	DECLARE_FUNCTION(execRandInt_MINMAX_uniDis); \
	DECLARE_FUNCTION(execRandInt_uniDis); \
	DECLARE_FUNCTION(execRandBool_Bernoulli); \
	DECLARE_FUNCTION(execseedRandWithEntropy); \
	DECLARE_FUNCTION(execseedRandWithTime); \
	DECLARE_FUNCTION(execseedRand); \
	DECLARE_FUNCTION(execconstructRand); \
	DECLARE_FUNCTION(execGetSoundWaveFromFile); \
	DECLARE_FUNCTION(execPlaySoundAtLocationFromFile); \
	DECLARE_FUNCTION(execPlaySoundAttachedFromFile); \
	DECLARE_FUNCTION(execVictory_GetPixelsArrayFromT2D); \
	DECLARE_FUNCTION(execVictory_GetPixelFromT2D); \
	DECLARE_FUNCTION(execVictory_SavePixels); \
	DECLARE_FUNCTION(execVictory_Get_Pixel); \
	DECLARE_FUNCTION(execVictory_LoadTexture2D_FromFile_Pixels); \
	DECLARE_FUNCTION(execVictory_LoadTexture2D_FromFile); \
	DECLARE_FUNCTION(execLoadTexture2D_FromDDSFile); \
	DECLARE_FUNCTION(execString__ExplodeString); \
	DECLARE_FUNCTION(execJoyGraphicsSettings__FullScreen_Set); \
	DECLARE_FUNCTION(execJoyGraphicsSettings__FullScreen_Get); \
	DECLARE_FUNCTION(execVictoryPaths__LogsDir); \
	DECLARE_FUNCTION(execVictoryPaths__ScreenShotsDir); \
	DECLARE_FUNCTION(execVictoryPaths__ConfigDir); \
	DECLARE_FUNCTION(execVictoryPaths__SavedDir); \
	DECLARE_FUNCTION(execVictoryPaths__GameRootDirectory); \
	DECLARE_FUNCTION(execVictoryPaths__WindowsNoEditorDir); \
	DECLARE_FUNCTION(execVictoryPaths__Win64Dir_BinaryLocation); \
	DECLARE_FUNCTION(execMobility__SetSceneCompMobility); \
	DECLARE_FUNCTION(execDistanceToSurface__DistaceOfPointToMeshSurface); \
	DECLARE_FUNCTION(execLensFlare__GetLensFlareOffsets); \
	DECLARE_FUNCTION(execStringConversion__GetFloatAsStringWithPrecision); \
	DECLARE_FUNCTION(execTraces__CharacterMeshTrace___ClosestSocket); \
	DECLARE_FUNCTION(execTraces__CharacterMeshTrace___ClosestBone); \
	DECLARE_FUNCTION(execTraceData__GetTraceDataFromSkeletalMeshSocket); \
	DECLARE_FUNCTION(execTraceData__GetTraceDataFromCharacterSocket); \
	DECLARE_FUNCTION(execGetAllBoneNamesBelowBone); \
	DECLARE_FUNCTION(execAccessor__GetCharacterSkeletalMesh); \
	DECLARE_FUNCTION(execData__GetCharacterBoneLocations); \
	DECLARE_FUNCTION(execCalcs__ClosestPointToSourcePoint); \
	DECLARE_FUNCTION(execRendering__UnFreezeGameRendering); \
	DECLARE_FUNCTION(execRendering__FreezeGameRendering); \
	DECLARE_FUNCTION(execFlashGameOnTaskBar); \
	DECLARE_FUNCTION(execClientWindow__GameWindowIsForeGroundInOS); \
	DECLARE_FUNCTION(execVisibility__GetNotRenderedActors); \
	DECLARE_FUNCTION(execVisibility__GetRenderedActors); \
	DECLARE_FUNCTION(execFileIO__SaveStringArrayToFile); \
	DECLARE_FUNCTION(execFileIO__SaveStringTextToFile); \
	DECLARE_FUNCTION(execAnimation__GetAimOffsetsFromRotation); \
	DECLARE_FUNCTION(execAnimation__GetAimOffsets); \
	DECLARE_FUNCTION(execDraw__Thick3DLineBetweenActors); \
	DECLARE_FUNCTION(execDraw__Thick3DLineFromSocket); \
	DECLARE_FUNCTION(execDraw__Thick3DLineFromCharacterSocket); \
	DECLARE_FUNCTION(execCharacter__GetControllerRotation); \
	DECLARE_FUNCTION(execConversions__RotatorToVector); \
	DECLARE_FUNCTION(execConversions__VectorToRotator); \
	DECLARE_FUNCTION(execViewport__GetCenterOfViewport); \
	DECLARE_FUNCTION(execViewport__GetMousePosition); \
	DECLARE_FUNCTION(execViewport__SetMousePosition); \
	DECLARE_FUNCTION(execViewport__EnableWorldRendering); \
	DECLARE_FUNCTION(execVictorySimulateKeyPress); \
	DECLARE_FUNCTION(execVictorySimulateMouseWheel); \
	DECLARE_FUNCTION(execAccessor__GetPlayerController); \
	DECLARE_FUNCTION(execAccessor__GetNameAsString); \
	DECLARE_FUNCTION(execDoesMaterialHaveParameter); \
	DECLARE_FUNCTION(execPhysics__UpdateCharacterCameraToRagdollLocation); \
	DECLARE_FUNCTION(execPhysics__InitializeVictoryRagDoll); \
	DECLARE_FUNCTION(execPhysics__GetLocationofRagDoll); \
	DECLARE_FUNCTION(execPhysics__IsRagDoll); \
	DECLARE_FUNCTION(execPhysics__LeaveRagDoll); \
	DECLARE_FUNCTION(execPhysics__EnterRagDoll); \
	DECLARE_FUNCTION(execWorldType__InGameInstanceWorld); \
	DECLARE_FUNCTION(execWorldType__InPIEWorld); \
	DECLARE_FUNCTION(execWorldType__InEditorWorld); \
	DECLARE_FUNCTION(execActor__TeleportToActor); \
	DECLARE_FUNCTION(execClone__StaticMeshActor); \
	DECLARE_FUNCTION(execGetUserDisplayAdapterBrand); \
	DECLARE_FUNCTION(execOptionsMenu__GetDisplayAdapterScreenResolutions); \
	DECLARE_FUNCTION(execString__CombineStrings_Multi); \
	DECLARE_FUNCTION(execString__CombineStrings); \
	DECLARE_FUNCTION(execHasSubstring); \
	DECLARE_FUNCTION(execVictory_SaveStringToOSClipboard); \
	DECLARE_FUNCTION(execVictory_GetStringFromOSClipboard); \
	DECLARE_FUNCTION(execIsAlphaNumeric); \
	DECLARE_FUNCTION(execVictory_SecondsToHoursMinutesSeconds); \
	DECLARE_FUNCTION(execVictoryAppendInline); \
	DECLARE_FUNCTION(execCountOccurrancesOfSubString); \
	DECLARE_FUNCTION(execConversion__FloatToRoundedInteger); \
	DECLARE_FUNCTION(execCharacterMovement__SetMaxMoveSpeed); \
	DECLARE_FUNCTION(execMinOfIntArray); \
	DECLARE_FUNCTION(execMinOfFloatArray); \
	DECLARE_FUNCTION(execMaxOfIntArray); \
	DECLARE_FUNCTION(execMaxOfFloatArray); \
	DECLARE_FUNCTION(execLoadStringFromFile); \
	DECLARE_FUNCTION(execLoadStringArrayFromFile); \
	DECLARE_FUNCTION(execRealWorldTime__GetDifferenceBetweenTimes); \
	DECLARE_FUNCTION(execRealWorldTime__GetTimePassedSincePreviousTime); \
	DECLARE_FUNCTION(execRealWorldTime__GetCurrentOSTime); \
	DECLARE_FUNCTION(execOperatingSystem__GetCurrentPlatform); \
	DECLARE_FUNCTION(execOpen_URL_In_Web_Browser); \
	DECLARE_FUNCTION(execIsStandAlone); \
	DECLARE_FUNCTION(execPlayerState_GetPlayerID); \
	DECLARE_FUNCTION(execPlayerController_GetControllerID); \
	DECLARE_FUNCTION(execSelection_SelectionBox); \
	DECLARE_FUNCTION(execGetBoxContainingWorldPoints); \
	DECLARE_FUNCTION(execGetClosestActorOfClassInRadiusOfActor); \
	DECLARE_FUNCTION(execGetClosestActorOfClassInRadiusOfLocation); \
	DECLARE_FUNCTION(execDrawCircle); \
	DECLARE_FUNCTION(execAddToActorRotation); \
	DECLARE_FUNCTION(execGetStaticMeshVertexLocations); \
	DECLARE_FUNCTION(execGetNamesOfLoadedLevels); \
	DECLARE_FUNCTION(execSpawnActorIntoLevel); \
	DECLARE_FUNCTION(execCreatePrimitiveComponent); \
	DECLARE_FUNCTION(execCreateObject); \
	DECLARE_FUNCTION(execProjectWorldToScreenPosition); \
	DECLARE_FUNCTION(execGraphicsSettings__SetFrameRateToBeUnbound); \
	DECLARE_FUNCTION(execGraphicsSettings__SetFrameRateCap); \
	DECLARE_FUNCTION(execLoops_ResetBPRunawayCounter); \
	DECLARE_FUNCTION(execGetPlayerUniqueNetID); \
	DECLARE_FUNCTION(execJoyIsKey); \
	DECLARE_FUNCTION(execIsWidgetOfClassInViewport); \
	DECLARE_FUNCTION(execRemoveAllWidgetsOfClass); \
	DECLARE_FUNCTION(execGetAllWidgetsOfClass); \
	DECLARE_FUNCTION(execGetObjectPath); \
	DECLARE_FUNCTION(execLoadObjectFromAssetPath); \
	DECLARE_FUNCTION(execGetHeadMountedDisplayDeviceType); \
	DECLARE_FUNCTION(execTransformVectorToActorSpace); \
	DECLARE_FUNCTION(execTransformVectorToActorSpaceAngle); \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_String); \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_Color); \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_Rotator); \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_Vector); \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_Float); \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_Int); \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_Bool); \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_Vector2D); \
	DECLARE_FUNCTION(execVictoryGetCustomConfigVar_Vector2D); \
	DECLARE_FUNCTION(execVictoryGetCustomConfigVar_String); \
	DECLARE_FUNCTION(execVictoryGetCustomConfigVar_Color); \
	DECLARE_FUNCTION(execVictoryGetCustomConfigVar_Rotator); \
	DECLARE_FUNCTION(execVictoryGetCustomConfigVar_Vector); \
	DECLARE_FUNCTION(execVictoryGetCustomConfigVar_Float); \
	DECLARE_FUNCTION(execVictoryGetCustomConfigVar_Int); \
	DECLARE_FUNCTION(execVictoryGetCustomConfigVar_Bool); \
	DECLARE_FUNCTION(execConversions__ColorToString); \
	DECLARE_FUNCTION(execConversions__StringToColor); \
	DECLARE_FUNCTION(execConversions__StringToRotator); \
	DECLARE_FUNCTION(execConversions__StringToVector); \
	DECLARE_FUNCTION(execGetPlayerStart); \
	DECLARE_FUNCTION(execServerTravel); \
	DECLARE_FUNCTION(execMapRangeClamped); \
	DECLARE_FUNCTION(execText_ToInt); \
	DECLARE_FUNCTION(execText_ToFloat); \
	DECLARE_FUNCTION(execText_IsNumeric); \
	DECLARE_FUNCTION(execVector2DInterpTo_Constant); \
	DECLARE_FUNCTION(execVector2DInterpTo); \
	DECLARE_FUNCTION(execNotEqual_Vector2DVector2D); \
	DECLARE_FUNCTION(execEqualEqual_Vector2DVector2D); \
	DECLARE_FUNCTION(execVictorySortFloatArray); \
	DECLARE_FUNCTION(execVictorySortIntArray); \
	DECLARE_FUNCTION(execVictoryFloatMinusEquals); \
	DECLARE_FUNCTION(execVictoryFloatPlusEquals); \
	DECLARE_FUNCTION(execVictoryIntMinusEquals); \
	DECLARE_FUNCTION(execVictoryIntPlusEquals); \
	DECLARE_FUNCTION(execIsPointOnPlane); \
	DECLARE_FUNCTION(execPointDistanceToPlane); \
	DECLARE_FUNCTION(execCreatePlane); \
	DECLARE_FUNCTION(execGetTimeInPlay); \
	DECLARE_FUNCTION(execVictoryGetSoundVolume); \
	DECLARE_FUNCTION(execVictorySoundVolumeChange); \
	DECLARE_FUNCTION(execVictoryRemoveActionKeyBind); \
	DECLARE_FUNCTION(execVictoryReBindActionKey); \
	DECLARE_FUNCTION(execVictoryGetAllActionKeyBindings); \
	DECLARE_FUNCTION(execVictoryGetVictoryInput); \
	DECLARE_FUNCTION(execVictoryReBindAxisKey); \
	DECLARE_FUNCTION(execVictoryRemoveAxisKeyBind); \
	DECLARE_FUNCTION(execVictoryGetAllAxisKeyBindings); \
	DECLARE_FUNCTION(execVictoryGetVictoryInputAxis); \
	DECLARE_FUNCTION(execVictoryGetAllAxisAndActionMappingsForKey); \
	DECLARE_FUNCTION(execScreenShots_Rename_Move_Most_Recent); \
	DECLARE_FUNCTION(execSaveGameObject_GetMostRecentSaveSlotFileName); \
	DECLARE_FUNCTION(execSaveGameObject_GetAllSaveSlotFileNames); \
	DECLARE_FUNCTION(execJoyFileIO_GetFilesInRootAndAllSubFolders); \
	DECLARE_FUNCTION(execJoyFileIO_GetFiles); \
	DECLARE_FUNCTION(execVictoryISM_ConvertToVictoryISMActors); \
	DECLARE_FUNCTION(execVictoryISM_GetAllVictoryISMActors); \
	DECLARE_FUNCTION(execVictoryDestructible_DestroyChunk); \
	DECLARE_FUNCTION(execGetDistanceBetweenComponentSurfaces); \
	DECLARE_FUNCTION(execGetDistanceToCollision); \
	DECLARE_FUNCTION(execVictoryPhysics_UpdateAngularDamping); \
	DECLARE_FUNCTION(execCreateTextureRenderTarget2D); \
	DECLARE_FUNCTION(execGetCommandLine); \
	DECLARE_FUNCTION(execSetComponentTickRate); \
	DECLARE_FUNCTION(execCompareMD5Hash); \
	DECLARE_FUNCTION(execCreateMD5Hash); \
	DECLARE_FUNCTION(execUTCToLocal); \
	DECLARE_FUNCTION(execGetUTCFromUnixTimeStamp); \
	DECLARE_FUNCTION(execGetUnixTimeStamp); \
	DECLARE_FUNCTION(execVictoryIsApplicationRunning); \
	DECLARE_FUNCTION(execVictoryGetApplicationName); \
	DECLARE_FUNCTION(execVictoryCreateProc); \
	DECLARE_FUNCTION(execVictory_GetGPUInfo); \
	DECLARE_FUNCTION(execVictory_GetGRHIAdapterName); \
	DECLARE_FUNCTION(execVictory_GetGPUBrand); \
	DECLARE_FUNCTION(execVictory_AI_MoveToWithFilter); \
	DECLARE_FUNCTION(execVictoryLoadLevelInstance);


#define HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_277_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAppendMultiple); \
	DECLARE_FUNCTION(execStringIsEmpty); \
	DECLARE_FUNCTION(execVerticalFOV); \
	DECLARE_FUNCTION(execHorizontalFOV); \
	DECLARE_FUNCTION(execGetActorRelativeRotation); \
	DECLARE_FUNCTION(execGetComponentRelativeRotation); \
	DECLARE_FUNCTION(execGetRotatorRelativeRotation); \
	DECLARE_FUNCTION(execGetActorRelativeLocation); \
	DECLARE_FUNCTION(execGetComponentRelativeLocation); \
	DECLARE_FUNCTION(execGetVectorRelativeLocation); \
	DECLARE_FUNCTION(execFlushPressedKeys); \
	DECLARE_FUNCTION(execInsertChildAt); \
	DECLARE_FUNCTION(execViewportPositionDeproject); \
	DECLARE_FUNCTION(execGetViewportPositionHitResultByChannel); \
	DECLARE_FUNCTION(execGetViewportPosition); \
	DECLARE_FUNCTION(execComponent_PrestreamTextures); \
	DECLARE_FUNCTION(execActor_PrestreamTextures); \
	DECLARE_FUNCTION(execUnloadStreamingLevel); \
	DECLARE_FUNCTION(execHideStreamingLevel); \
	DECLARE_FUNCTION(execRemoveFromStreamingLevels); \
	DECLARE_FUNCTION(execAddToStreamingLevels); \
	DECLARE_FUNCTION(execGetLevelInstanceInfo); \
	DECLARE_FUNCTION(execSetGenericTeamId); \
	DECLARE_FUNCTION(execGetGenericTeamId); \
	DECLARE_FUNCTION(execGetWidgetFromName); \
	DECLARE_FUNCTION(execWidgetGetChildrenOfClass); \
	DECLARE_FUNCTION(execWidgetGetParentOfClass); \
	DECLARE_FUNCTION(execWidgetIsChildOf); \
	DECLARE_FUNCTION(execGetFirstWidgetOfClass); \
	DECLARE_FUNCTION(execLoadTexture2D_FromFileByExtension); \
	DECLARE_FUNCTION(execCapture2D_SaveImage); \
	DECLARE_FUNCTION(execCaptureComponent2D_SaveImage); \
	DECLARE_FUNCTION(execCapture2D_Project); \
	DECLARE_FUNCTION(execCaptureComponent2D_Project); \
	DECLARE_FUNCTION(execGetTimeAlive); \
	DECLARE_FUNCTION(execGetCreationTime); \
	DECLARE_FUNCTION(execSetBloomIntensity); \
	DECLARE_FUNCTION(execActor__GetAttachedActors); \
	DECLARE_FUNCTION(execRandFloat_MINMAX_uniDis_MT); \
	DECLARE_FUNCTION(execRandFloat_uniDis_MT); \
	DECLARE_FUNCTION(execRandInt_MINMAX_uniDis_MT); \
	DECLARE_FUNCTION(execRandInt_uniDis_MT); \
	DECLARE_FUNCTION(execRandBool_Bernoulli_MT); \
	DECLARE_FUNCTION(execRandFloat_MINMAX_uniDis); \
	DECLARE_FUNCTION(execRandFloat_uniDis); \
	DECLARE_FUNCTION(execRandInt_MINMAX_uniDis); \
	DECLARE_FUNCTION(execRandInt_uniDis); \
	DECLARE_FUNCTION(execRandBool_Bernoulli); \
	DECLARE_FUNCTION(execseedRandWithEntropy); \
	DECLARE_FUNCTION(execseedRandWithTime); \
	DECLARE_FUNCTION(execseedRand); \
	DECLARE_FUNCTION(execconstructRand); \
	DECLARE_FUNCTION(execGetSoundWaveFromFile); \
	DECLARE_FUNCTION(execPlaySoundAtLocationFromFile); \
	DECLARE_FUNCTION(execPlaySoundAttachedFromFile); \
	DECLARE_FUNCTION(execVictory_GetPixelsArrayFromT2D); \
	DECLARE_FUNCTION(execVictory_GetPixelFromT2D); \
	DECLARE_FUNCTION(execVictory_SavePixels); \
	DECLARE_FUNCTION(execVictory_Get_Pixel); \
	DECLARE_FUNCTION(execVictory_LoadTexture2D_FromFile_Pixels); \
	DECLARE_FUNCTION(execVictory_LoadTexture2D_FromFile); \
	DECLARE_FUNCTION(execLoadTexture2D_FromDDSFile); \
	DECLARE_FUNCTION(execString__ExplodeString); \
	DECLARE_FUNCTION(execJoyGraphicsSettings__FullScreen_Set); \
	DECLARE_FUNCTION(execJoyGraphicsSettings__FullScreen_Get); \
	DECLARE_FUNCTION(execVictoryPaths__LogsDir); \
	DECLARE_FUNCTION(execVictoryPaths__ScreenShotsDir); \
	DECLARE_FUNCTION(execVictoryPaths__ConfigDir); \
	DECLARE_FUNCTION(execVictoryPaths__SavedDir); \
	DECLARE_FUNCTION(execVictoryPaths__GameRootDirectory); \
	DECLARE_FUNCTION(execVictoryPaths__WindowsNoEditorDir); \
	DECLARE_FUNCTION(execVictoryPaths__Win64Dir_BinaryLocation); \
	DECLARE_FUNCTION(execMobility__SetSceneCompMobility); \
	DECLARE_FUNCTION(execDistanceToSurface__DistaceOfPointToMeshSurface); \
	DECLARE_FUNCTION(execLensFlare__GetLensFlareOffsets); \
	DECLARE_FUNCTION(execStringConversion__GetFloatAsStringWithPrecision); \
	DECLARE_FUNCTION(execTraces__CharacterMeshTrace___ClosestSocket); \
	DECLARE_FUNCTION(execTraces__CharacterMeshTrace___ClosestBone); \
	DECLARE_FUNCTION(execTraceData__GetTraceDataFromSkeletalMeshSocket); \
	DECLARE_FUNCTION(execTraceData__GetTraceDataFromCharacterSocket); \
	DECLARE_FUNCTION(execGetAllBoneNamesBelowBone); \
	DECLARE_FUNCTION(execAccessor__GetCharacterSkeletalMesh); \
	DECLARE_FUNCTION(execData__GetCharacterBoneLocations); \
	DECLARE_FUNCTION(execCalcs__ClosestPointToSourcePoint); \
	DECLARE_FUNCTION(execRendering__UnFreezeGameRendering); \
	DECLARE_FUNCTION(execRendering__FreezeGameRendering); \
	DECLARE_FUNCTION(execFlashGameOnTaskBar); \
	DECLARE_FUNCTION(execClientWindow__GameWindowIsForeGroundInOS); \
	DECLARE_FUNCTION(execVisibility__GetNotRenderedActors); \
	DECLARE_FUNCTION(execVisibility__GetRenderedActors); \
	DECLARE_FUNCTION(execFileIO__SaveStringArrayToFile); \
	DECLARE_FUNCTION(execFileIO__SaveStringTextToFile); \
	DECLARE_FUNCTION(execAnimation__GetAimOffsetsFromRotation); \
	DECLARE_FUNCTION(execAnimation__GetAimOffsets); \
	DECLARE_FUNCTION(execDraw__Thick3DLineBetweenActors); \
	DECLARE_FUNCTION(execDraw__Thick3DLineFromSocket); \
	DECLARE_FUNCTION(execDraw__Thick3DLineFromCharacterSocket); \
	DECLARE_FUNCTION(execCharacter__GetControllerRotation); \
	DECLARE_FUNCTION(execConversions__RotatorToVector); \
	DECLARE_FUNCTION(execConversions__VectorToRotator); \
	DECLARE_FUNCTION(execViewport__GetCenterOfViewport); \
	DECLARE_FUNCTION(execViewport__GetMousePosition); \
	DECLARE_FUNCTION(execViewport__SetMousePosition); \
	DECLARE_FUNCTION(execViewport__EnableWorldRendering); \
	DECLARE_FUNCTION(execVictorySimulateKeyPress); \
	DECLARE_FUNCTION(execVictorySimulateMouseWheel); \
	DECLARE_FUNCTION(execAccessor__GetPlayerController); \
	DECLARE_FUNCTION(execAccessor__GetNameAsString); \
	DECLARE_FUNCTION(execDoesMaterialHaveParameter); \
	DECLARE_FUNCTION(execPhysics__UpdateCharacterCameraToRagdollLocation); \
	DECLARE_FUNCTION(execPhysics__InitializeVictoryRagDoll); \
	DECLARE_FUNCTION(execPhysics__GetLocationofRagDoll); \
	DECLARE_FUNCTION(execPhysics__IsRagDoll); \
	DECLARE_FUNCTION(execPhysics__LeaveRagDoll); \
	DECLARE_FUNCTION(execPhysics__EnterRagDoll); \
	DECLARE_FUNCTION(execWorldType__InGameInstanceWorld); \
	DECLARE_FUNCTION(execWorldType__InPIEWorld); \
	DECLARE_FUNCTION(execWorldType__InEditorWorld); \
	DECLARE_FUNCTION(execActor__TeleportToActor); \
	DECLARE_FUNCTION(execClone__StaticMeshActor); \
	DECLARE_FUNCTION(execGetUserDisplayAdapterBrand); \
	DECLARE_FUNCTION(execOptionsMenu__GetDisplayAdapterScreenResolutions); \
	DECLARE_FUNCTION(execString__CombineStrings_Multi); \
	DECLARE_FUNCTION(execString__CombineStrings); \
	DECLARE_FUNCTION(execHasSubstring); \
	DECLARE_FUNCTION(execVictory_SaveStringToOSClipboard); \
	DECLARE_FUNCTION(execVictory_GetStringFromOSClipboard); \
	DECLARE_FUNCTION(execIsAlphaNumeric); \
	DECLARE_FUNCTION(execVictory_SecondsToHoursMinutesSeconds); \
	DECLARE_FUNCTION(execVictoryAppendInline); \
	DECLARE_FUNCTION(execCountOccurrancesOfSubString); \
	DECLARE_FUNCTION(execConversion__FloatToRoundedInteger); \
	DECLARE_FUNCTION(execCharacterMovement__SetMaxMoveSpeed); \
	DECLARE_FUNCTION(execMinOfIntArray); \
	DECLARE_FUNCTION(execMinOfFloatArray); \
	DECLARE_FUNCTION(execMaxOfIntArray); \
	DECLARE_FUNCTION(execMaxOfFloatArray); \
	DECLARE_FUNCTION(execLoadStringFromFile); \
	DECLARE_FUNCTION(execLoadStringArrayFromFile); \
	DECLARE_FUNCTION(execRealWorldTime__GetDifferenceBetweenTimes); \
	DECLARE_FUNCTION(execRealWorldTime__GetTimePassedSincePreviousTime); \
	DECLARE_FUNCTION(execRealWorldTime__GetCurrentOSTime); \
	DECLARE_FUNCTION(execOperatingSystem__GetCurrentPlatform); \
	DECLARE_FUNCTION(execOpen_URL_In_Web_Browser); \
	DECLARE_FUNCTION(execIsStandAlone); \
	DECLARE_FUNCTION(execPlayerState_GetPlayerID); \
	DECLARE_FUNCTION(execPlayerController_GetControllerID); \
	DECLARE_FUNCTION(execSelection_SelectionBox); \
	DECLARE_FUNCTION(execGetBoxContainingWorldPoints); \
	DECLARE_FUNCTION(execGetClosestActorOfClassInRadiusOfActor); \
	DECLARE_FUNCTION(execGetClosestActorOfClassInRadiusOfLocation); \
	DECLARE_FUNCTION(execDrawCircle); \
	DECLARE_FUNCTION(execAddToActorRotation); \
	DECLARE_FUNCTION(execGetStaticMeshVertexLocations); \
	DECLARE_FUNCTION(execGetNamesOfLoadedLevels); \
	DECLARE_FUNCTION(execSpawnActorIntoLevel); \
	DECLARE_FUNCTION(execCreatePrimitiveComponent); \
	DECLARE_FUNCTION(execCreateObject); \
	DECLARE_FUNCTION(execProjectWorldToScreenPosition); \
	DECLARE_FUNCTION(execGraphicsSettings__SetFrameRateToBeUnbound); \
	DECLARE_FUNCTION(execGraphicsSettings__SetFrameRateCap); \
	DECLARE_FUNCTION(execLoops_ResetBPRunawayCounter); \
	DECLARE_FUNCTION(execGetPlayerUniqueNetID); \
	DECLARE_FUNCTION(execJoyIsKey); \
	DECLARE_FUNCTION(execIsWidgetOfClassInViewport); \
	DECLARE_FUNCTION(execRemoveAllWidgetsOfClass); \
	DECLARE_FUNCTION(execGetAllWidgetsOfClass); \
	DECLARE_FUNCTION(execGetObjectPath); \
	DECLARE_FUNCTION(execLoadObjectFromAssetPath); \
	DECLARE_FUNCTION(execGetHeadMountedDisplayDeviceType); \
	DECLARE_FUNCTION(execTransformVectorToActorSpace); \
	DECLARE_FUNCTION(execTransformVectorToActorSpaceAngle); \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_String); \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_Color); \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_Rotator); \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_Vector); \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_Float); \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_Int); \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_Bool); \
	DECLARE_FUNCTION(execVictorySetCustomConfigVar_Vector2D); \
	DECLARE_FUNCTION(execVictoryGetCustomConfigVar_Vector2D); \
	DECLARE_FUNCTION(execVictoryGetCustomConfigVar_String); \
	DECLARE_FUNCTION(execVictoryGetCustomConfigVar_Color); \
	DECLARE_FUNCTION(execVictoryGetCustomConfigVar_Rotator); \
	DECLARE_FUNCTION(execVictoryGetCustomConfigVar_Vector); \
	DECLARE_FUNCTION(execVictoryGetCustomConfigVar_Float); \
	DECLARE_FUNCTION(execVictoryGetCustomConfigVar_Int); \
	DECLARE_FUNCTION(execVictoryGetCustomConfigVar_Bool); \
	DECLARE_FUNCTION(execConversions__ColorToString); \
	DECLARE_FUNCTION(execConversions__StringToColor); \
	DECLARE_FUNCTION(execConversions__StringToRotator); \
	DECLARE_FUNCTION(execConversions__StringToVector); \
	DECLARE_FUNCTION(execGetPlayerStart); \
	DECLARE_FUNCTION(execServerTravel); \
	DECLARE_FUNCTION(execMapRangeClamped); \
	DECLARE_FUNCTION(execText_ToInt); \
	DECLARE_FUNCTION(execText_ToFloat); \
	DECLARE_FUNCTION(execText_IsNumeric); \
	DECLARE_FUNCTION(execVector2DInterpTo_Constant); \
	DECLARE_FUNCTION(execVector2DInterpTo); \
	DECLARE_FUNCTION(execNotEqual_Vector2DVector2D); \
	DECLARE_FUNCTION(execEqualEqual_Vector2DVector2D); \
	DECLARE_FUNCTION(execVictorySortFloatArray); \
	DECLARE_FUNCTION(execVictorySortIntArray); \
	DECLARE_FUNCTION(execVictoryFloatMinusEquals); \
	DECLARE_FUNCTION(execVictoryFloatPlusEquals); \
	DECLARE_FUNCTION(execVictoryIntMinusEquals); \
	DECLARE_FUNCTION(execVictoryIntPlusEquals); \
	DECLARE_FUNCTION(execIsPointOnPlane); \
	DECLARE_FUNCTION(execPointDistanceToPlane); \
	DECLARE_FUNCTION(execCreatePlane); \
	DECLARE_FUNCTION(execGetTimeInPlay); \
	DECLARE_FUNCTION(execVictoryGetSoundVolume); \
	DECLARE_FUNCTION(execVictorySoundVolumeChange); \
	DECLARE_FUNCTION(execVictoryRemoveActionKeyBind); \
	DECLARE_FUNCTION(execVictoryReBindActionKey); \
	DECLARE_FUNCTION(execVictoryGetAllActionKeyBindings); \
	DECLARE_FUNCTION(execVictoryGetVictoryInput); \
	DECLARE_FUNCTION(execVictoryReBindAxisKey); \
	DECLARE_FUNCTION(execVictoryRemoveAxisKeyBind); \
	DECLARE_FUNCTION(execVictoryGetAllAxisKeyBindings); \
	DECLARE_FUNCTION(execVictoryGetVictoryInputAxis); \
	DECLARE_FUNCTION(execVictoryGetAllAxisAndActionMappingsForKey); \
	DECLARE_FUNCTION(execScreenShots_Rename_Move_Most_Recent); \
	DECLARE_FUNCTION(execSaveGameObject_GetMostRecentSaveSlotFileName); \
	DECLARE_FUNCTION(execSaveGameObject_GetAllSaveSlotFileNames); \
	DECLARE_FUNCTION(execJoyFileIO_GetFilesInRootAndAllSubFolders); \
	DECLARE_FUNCTION(execJoyFileIO_GetFiles); \
	DECLARE_FUNCTION(execVictoryISM_ConvertToVictoryISMActors); \
	DECLARE_FUNCTION(execVictoryISM_GetAllVictoryISMActors); \
	DECLARE_FUNCTION(execVictoryDestructible_DestroyChunk); \
	DECLARE_FUNCTION(execGetDistanceBetweenComponentSurfaces); \
	DECLARE_FUNCTION(execGetDistanceToCollision); \
	DECLARE_FUNCTION(execVictoryPhysics_UpdateAngularDamping); \
	DECLARE_FUNCTION(execCreateTextureRenderTarget2D); \
	DECLARE_FUNCTION(execGetCommandLine); \
	DECLARE_FUNCTION(execSetComponentTickRate); \
	DECLARE_FUNCTION(execCompareMD5Hash); \
	DECLARE_FUNCTION(execCreateMD5Hash); \
	DECLARE_FUNCTION(execUTCToLocal); \
	DECLARE_FUNCTION(execGetUTCFromUnixTimeStamp); \
	DECLARE_FUNCTION(execGetUnixTimeStamp); \
	DECLARE_FUNCTION(execVictoryIsApplicationRunning); \
	DECLARE_FUNCTION(execVictoryGetApplicationName); \
	DECLARE_FUNCTION(execVictoryCreateProc); \
	DECLARE_FUNCTION(execVictory_GetGPUInfo); \
	DECLARE_FUNCTION(execVictory_GetGRHIAdapterName); \
	DECLARE_FUNCTION(execVictory_GetGPUBrand); \
	DECLARE_FUNCTION(execVictory_AI_MoveToWithFilter); \
	DECLARE_FUNCTION(execVictoryLoadLevelInstance);


#define HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_277_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVictoryBPFunctionLibrary(); \
	friend struct Z_Construct_UClass_UVictoryBPFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UVictoryBPFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VictoryBPLibrary"), NO_API) \
	DECLARE_SERIALIZER(UVictoryBPFunctionLibrary)


#define HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_277_INCLASS \
private: \
	static void StaticRegisterNativesUVictoryBPFunctionLibrary(); \
	friend struct Z_Construct_UClass_UVictoryBPFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UVictoryBPFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VictoryBPLibrary"), NO_API) \
	DECLARE_SERIALIZER(UVictoryBPFunctionLibrary)


#define HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_277_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVictoryBPFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVictoryBPFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVictoryBPFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVictoryBPFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVictoryBPFunctionLibrary(UVictoryBPFunctionLibrary&&); \
	NO_API UVictoryBPFunctionLibrary(const UVictoryBPFunctionLibrary&); \
public:


#define HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_277_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVictoryBPFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVictoryBPFunctionLibrary(UVictoryBPFunctionLibrary&&); \
	NO_API UVictoryBPFunctionLibrary(const UVictoryBPFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVictoryBPFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVictoryBPFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVictoryBPFunctionLibrary)


#define HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_277_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_274_PROLOG
#define HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_277_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_277_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_277_SPARSE_DATA \
	HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_277_RPC_WRAPPERS \
	HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_277_INCLASS \
	HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_277_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_277_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_277_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_277_SPARSE_DATA \
	HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_277_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_277_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_277_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class VictoryBPFunctionLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VICTORYBPLIBRARY_API UClass* StaticClass<class UVictoryBPFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h


#define FOREACH_ENUM_EJOYGRAPHICSFULLSCREEN(op) \
	op(EJoyGraphicsFullScreen::FullScreen) \
	op(EJoyGraphicsFullScreen::WindowedFullScreen) \
	op(EJoyGraphicsFullScreen::WindowedFullScreenPerformance) \
	op(EJoyGraphicsFullScreen::EJoyGraphicsFullScreen_Max) 
#define FOREACH_ENUM_EVICTORYHMDDEVICE(op) \
	op(EVictoryHMDDevice::None) \
	op(EVictoryHMDDevice::OculusRift) \
	op(EVictoryHMDDevice::Morpheus) \
	op(EVictoryHMDDevice::ES2GenericStereoMesh) \
	op(EVictoryHMDDevice::SteamVR) \
	op(EVictoryHMDDevice::GearVR) 

enum class EVictoryHMDDevice : uint8;
template<> VICTORYBPLIBRARY_API UEnum* StaticEnum<EVictoryHMDDevice>();

#define FOREACH_ENUM_EJOYIMAGEFORMATS(op) \
	op(EJoyImageFormats::JPG) \
	op(EJoyImageFormats::PNG) \
	op(EJoyImageFormats::BMP) \
	op(EJoyImageFormats::ICO) \
	op(EJoyImageFormats::EXR) \
	op(EJoyImageFormats::ICNS) 

enum class EJoyImageFormats : uint8;
template<> VICTORYBPLIBRARY_API UEnum* StaticEnum<EJoyImageFormats>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
