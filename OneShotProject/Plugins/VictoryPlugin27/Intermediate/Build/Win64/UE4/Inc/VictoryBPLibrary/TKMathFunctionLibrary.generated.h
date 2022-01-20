// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
struct FVector;
class UObject;
struct FAnchors;
struct FMargin;
struct FBox;
struct FVector2D;
#ifdef VICTORYBPLIBRARY_TKMathFunctionLibrary_generated_h
#error "TKMathFunctionLibrary.generated.h already included, missing '#pragma once' in TKMathFunctionLibrary.h"
#endif
#define VICTORYBPLIBRARY_TKMathFunctionLibrary_generated_h

#define HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_TKMathFunctionLibrary_h_56_SPARSE_DATA
#define HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_TKMathFunctionLibrary_h_56_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetCenterOfMassOffset); \
	DECLARE_FUNCTION(execGetVelocityAtPoint); \
	DECLARE_FUNCTION(execConvertPhysicsLinearVelocity); \
	DECLARE_FUNCTION(execConvertAnchorToAnchor); \
	DECLARE_FUNCTION(execGridSnap); \
	DECLARE_FUNCTION(execAreLineSegmentsCrossing); \
	DECLARE_FUNCTION(execPointOnWhichSideOfLineSegment); \
	DECLARE_FUNCTION(execClosestPointsOnTwoLines); \
	DECLARE_FUNCTION(execLineToLineIntersection); \
	DECLARE_FUNCTION(execClosestPointsOfLineSegments); \
	DECLARE_FUNCTION(execSphereBoxIntersection); \
	DECLARE_FUNCTION(execProjectPointOnLine); \
	DECLARE_FUNCTION(execSignedDistancePlanePoint); \
	DECLARE_FUNCTION(execLineExtentBoxIntersection); \
	DECLARE_FUNCTION(execIsLineInsideSphere); \
	DECLARE_FUNCTION(execIsPointInsideBox); \
	DECLARE_FUNCTION(execClosestPointOnLineSeqment); \
	DECLARE_FUNCTION(execClosestPointOnSphereToLine); \
	DECLARE_FUNCTION(execIsEvenNumber); \
	DECLARE_FUNCTION(execIsMultipleOf); \
	DECLARE_FUNCTION(execIsPowerOfTwo); \
	DECLARE_FUNCTION(execRoundToNearestMultiple); \
	DECLARE_FUNCTION(execRoundToUpperMultiple); \
	DECLARE_FUNCTION(execRoundToLowerMultiple); \
	DECLARE_FUNCTION(execVectorDegreesToRadians); \
	DECLARE_FUNCTION(execVectorRadiansToDegrees); \
	DECLARE_FUNCTION(execSetVectorLength); \
	DECLARE_FUNCTION(execNegateVector2D); \
	DECLARE_FUNCTION(execNegateInt); \
	DECLARE_FUNCTION(execNegateFloat); \
	DECLARE_FUNCTION(execGetConsoleVariableInt); \
	DECLARE_FUNCTION(execGetConsoleVariableFloat);


#define HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_TKMathFunctionLibrary_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCenterOfMassOffset); \
	DECLARE_FUNCTION(execGetVelocityAtPoint); \
	DECLARE_FUNCTION(execConvertPhysicsLinearVelocity); \
	DECLARE_FUNCTION(execConvertAnchorToAnchor); \
	DECLARE_FUNCTION(execGridSnap); \
	DECLARE_FUNCTION(execAreLineSegmentsCrossing); \
	DECLARE_FUNCTION(execPointOnWhichSideOfLineSegment); \
	DECLARE_FUNCTION(execClosestPointsOnTwoLines); \
	DECLARE_FUNCTION(execLineToLineIntersection); \
	DECLARE_FUNCTION(execClosestPointsOfLineSegments); \
	DECLARE_FUNCTION(execSphereBoxIntersection); \
	DECLARE_FUNCTION(execProjectPointOnLine); \
	DECLARE_FUNCTION(execSignedDistancePlanePoint); \
	DECLARE_FUNCTION(execLineExtentBoxIntersection); \
	DECLARE_FUNCTION(execIsLineInsideSphere); \
	DECLARE_FUNCTION(execIsPointInsideBox); \
	DECLARE_FUNCTION(execClosestPointOnLineSeqment); \
	DECLARE_FUNCTION(execClosestPointOnSphereToLine); \
	DECLARE_FUNCTION(execIsEvenNumber); \
	DECLARE_FUNCTION(execIsMultipleOf); \
	DECLARE_FUNCTION(execIsPowerOfTwo); \
	DECLARE_FUNCTION(execRoundToNearestMultiple); \
	DECLARE_FUNCTION(execRoundToUpperMultiple); \
	DECLARE_FUNCTION(execRoundToLowerMultiple); \
	DECLARE_FUNCTION(execVectorDegreesToRadians); \
	DECLARE_FUNCTION(execVectorRadiansToDegrees); \
	DECLARE_FUNCTION(execSetVectorLength); \
	DECLARE_FUNCTION(execNegateVector2D); \
	DECLARE_FUNCTION(execNegateInt); \
	DECLARE_FUNCTION(execNegateFloat); \
	DECLARE_FUNCTION(execGetConsoleVariableInt); \
	DECLARE_FUNCTION(execGetConsoleVariableFloat);


#define HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_TKMathFunctionLibrary_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTKMathFunctionLibrary(); \
	friend struct Z_Construct_UClass_UTKMathFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UTKMathFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VictoryBPLibrary"), NO_API) \
	DECLARE_SERIALIZER(UTKMathFunctionLibrary)


#define HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_TKMathFunctionLibrary_h_56_INCLASS \
private: \
	static void StaticRegisterNativesUTKMathFunctionLibrary(); \
	friend struct Z_Construct_UClass_UTKMathFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UTKMathFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VictoryBPLibrary"), NO_API) \
	DECLARE_SERIALIZER(UTKMathFunctionLibrary)


#define HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_TKMathFunctionLibrary_h_56_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTKMathFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTKMathFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTKMathFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTKMathFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTKMathFunctionLibrary(UTKMathFunctionLibrary&&); \
	NO_API UTKMathFunctionLibrary(const UTKMathFunctionLibrary&); \
public:


#define HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_TKMathFunctionLibrary_h_56_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTKMathFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTKMathFunctionLibrary(UTKMathFunctionLibrary&&); \
	NO_API UTKMathFunctionLibrary(const UTKMathFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTKMathFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTKMathFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTKMathFunctionLibrary)


#define HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_TKMathFunctionLibrary_h_56_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_TKMathFunctionLibrary_h_53_PROLOG
#define HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_TKMathFunctionLibrary_h_56_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_TKMathFunctionLibrary_h_56_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_TKMathFunctionLibrary_h_56_SPARSE_DATA \
	HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_TKMathFunctionLibrary_h_56_RPC_WRAPPERS \
	HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_TKMathFunctionLibrary_h_56_INCLASS \
	HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_TKMathFunctionLibrary_h_56_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_TKMathFunctionLibrary_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_TKMathFunctionLibrary_h_56_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_TKMathFunctionLibrary_h_56_SPARSE_DATA \
	HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_TKMathFunctionLibrary_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_TKMathFunctionLibrary_h_56_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_TKMathFunctionLibrary_h_56_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VICTORYBPLIBRARY_API UClass* StaticClass<class UTKMathFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_TKMathFunctionLibrary_h


#define FOREACH_ENUM_ESPEEDUNIT(op) \
	op(CentimeterPerSecond) \
	op(FootPerSecond) \
	op(MeterPerSecond) \
	op(MeterPerMinute) \
	op(KilometerPerSecond) \
	op(KilometerPerMinute) \
	op(KilometerPerHour) \
	op(MilePerHour) \
	op(Knot) \
	op(Mach) \
	op(SpeedOfLight) \
	op(YardPerSecond) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
