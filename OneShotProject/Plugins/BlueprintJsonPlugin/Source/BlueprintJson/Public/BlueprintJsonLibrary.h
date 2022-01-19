// Copyright Pandores Marketplace 2021. All Rights Reserved.

#pragma once

#include "UObject/TextProperty.h"
#include "BlueprintJson.h"
#include "BlueprintJsonWrapper.h"
#include "Dom/JsonObject.h"
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BlueprintJsonLibrary.generated.h"


/**
 *  C++ library exposing Json utilities to Blueprints
 **/
UCLASS()
class BLUEPRINTJSON_API UJsonLibrary: public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
    /* Tries to get this Json value as a string */
    UFUNCTION(BlueprintPure, meta = (DisplayName = "ToString (JsonValue)", CompactNodeTitle = "->", BlueprintAutocast), Category = "JSON|Value")
    static FString JsonValue_ToString(UJsonValue* Object);

    /* Tries to get this Json value as a Number */
    UFUNCTION(BlueprintPure, meta = (DisplayName = "ToInteger (JsonValue)", CompactNodeTitle = "->", BlueprintAutocast), Category = "JSON|Value")
    static int32 JsonValue_ToInteger(UJsonValue* Object);

    /* Tries to get this Json value as a Boolean */
    UFUNCTION(BlueprintPure, meta = (DisplayName = "ToBoolean (JsonValue)", CompactNodeTitle = "->", BlueprintAutocast), Category = "JSON|Value")
    static bool JsonValue_ToBool(UJsonValue* Object);

    /* Tries to get this Json value as a Number */
    UFUNCTION(BlueprintPure, meta = (DisplayName = "ToFloat (JsonValue)", CompactNodeTitle = "->", BlueprintAutocast), Category = "JSON|Value")
    static float JsonValue_ToFloat(UJsonValue* Object);
    
    /* Tries to get this Json value as a Number */
    UFUNCTION(BlueprintPure, meta = (DisplayName = "ToInteger64 (JsonValue)", CompactNodeTitle = "->", BlueprintAutocast), Category = "JSON|Value")
    static int64 JsonValue_ToInteger64(UJsonValue* Object);

    /* Tries to get this Json value as a Vector */
    UFUNCTION(BlueprintPure, meta = (DisplayName = "ToVector (JsonValue)", CompactNodeTitle = "->", BlueprintAutocast), Category = "JSON|Value")
    static FVector JsonValue_ToVector(UJsonValue* Object);
    
    /* Tries to get this Json value as a Rotator */
    UFUNCTION(BlueprintPure, meta = (DisplayName = "ToRotator (JsonValue)", CompactNodeTitle = "->", BlueprintAutocast), Category = "JSON|Value")
    static FRotator JsonValue_ToRotator(UJsonValue* Object);
    
    /* Tries to get this Json value as a Transform */
    UFUNCTION(BlueprintPure, meta = (DisplayName = "ToTransform (JsonValue)", CompactNodeTitle = "->", BlueprintAutocast), Category = "JSON|Value")
    static FTransform JsonValue_ToTransform(UJsonValue* Object);
    
    /* Tries to get this Json value as an Array */
    UFUNCTION(BlueprintPure, meta = (DisplayName = "ToArray (JsonValue)", CompactNodeTitle = "->", BlueprintAutocast), Category = "JSON|Value")
    static TArray<UJsonValue*> JsonValue_ToArray(UJsonValue* Object);

    /* Tries to get this Json value as an Object */
    UFUNCTION(BlueprintPure, meta = (DisplayName = "ToObject (JsonValue)", CompactNodeTitle = "->", BlueprintAutocast), Category = "JSON|Value")
    static UJsonObject* JsonValue_ToObject(UJsonValue* Object);

    /* Load a JSON file from disk and parse it. */
    UFUNCTION(BlueprintCallable, Category = JSON, meta =(DisplayName = "Load JSON File"))
    static UPARAM(DisplayName = "Root Object") UJsonObject* LoadJsonFile(const FString& FilePath);

    /* Stringify the provided JSON object. This node is not asynchronous. */
    UFUNCTION(BlueprintCallable, Category = "JSON|Object", meta = (DisplayName = "JSON object to string"))
    static UPARAM(DisplayName = "Success") bool StringifyJsonObject(UJsonObject* const Object, FString& OutJsonString);

    static bool StringifyJsonObject(const TSharedPtr<FJsonObject> Object, FString& OutJsonString);
    
    UFUNCTION(BlueprintPure, meta = (DisplayName = "ToJsonValue (int32)", CompactNodeTitle = "->", BlueprintAutocast), Category = "JSON|Value") 
    static UJsonValue* JsonValue_Bool(int32 Value) { return UJsonValue::CreateJsonValue(Value); }

    UFUNCTION(BlueprintPure, meta = (DisplayName = "ToJsonValue (int64)", CompactNodeTitle = "->", BlueprintAutocast), Category = "JSON|Value")   
    static UJsonValue* JsonValue_Int64(int64 Value) { return UJsonValue::CreateJsonValue(Value); }

    UFUNCTION(BlueprintPure, meta = (DisplayName = "ToJsonValue (float)", CompactNodeTitle = "->", BlueprintAutocast), Category = "JSON|Value") 
    static UJsonValue* JsonValue_Float(float Value) { return UJsonValue::CreateJsonValue(Value); }

    UFUNCTION(BlueprintPure, meta = (DisplayName = "ToJsonValue (FString)", CompactNodeTitle = "->", BlueprintAutocast), Category = "JSON|Value") 
    static UJsonValue* JsonValue_String(const FString& Value) { return UJsonValue::CreateJsonValue(Value); }

    UFUNCTION(BlueprintPure, meta = (DisplayName = "ToJsonValue (FText)", CompactNodeTitle = "->", BlueprintAutocast), Category = "JSON|Value") 
    static UJsonValue* JsonValue_Text(const FText& Value) { return UJsonValue::CreateJsonValue(Value.ToString()); }

    UFUNCTION(BlueprintPure, meta = (DisplayName = "ToJsonValue (FName)", CompactNodeTitle = "->", BlueprintAutocast), Category = "JSON|Value") 
    static UJsonValue* JsonValue_Name(const FName& Value) { return UJsonValue::CreateJsonValue(Value.ToString()); }

    UFUNCTION(BlueprintPure, meta = (DisplayName = "ToJsonValue (bool)", CompactNodeTitle = "->", BlueprintAutocast), Category = "JSON|Value") 
    static UJsonValue* JsonValue_Boolean(bool Value) { return UJsonValue::CreateJsonValue(Value); }
    
    UFUNCTION(BlueprintPure, meta = (DisplayName = "ToJsonValue (JsonObject)", CompactNodeTitle = "->", BlueprintAutocast), Category = "JSON|Value") 
    static UJsonValue* JsonValue_JsonObject(UJsonObject* Value) { return UJsonValue::CreateJsonValue(Value); }

    UFUNCTION(BlueprintPure, meta = (DisplayName = "ToJsonValue (Vector)", CompactNodeTitle = "->", BlueprintAutocast), Category = "JSON|Value") 
    static UJsonValue* JsonValue_Vector(const FVector& Value) { return UJsonValue::CreateJsonValue(Value); }

    UFUNCTION(BlueprintPure, meta = (DisplayName = "ToJsonValue (Vector2D)", CompactNodeTitle = "->", BlueprintAutocast), Category = "JSON|Value") 
    static UJsonValue* JsonValue_Vector2D(const FVector2D& Value) { return UJsonValue::CreateJsonValue(Value); }

    UFUNCTION(BlueprintPure, meta = (DisplayName = "ToJsonValue (LinearColor)", CompactNodeTitle = "->", BlueprintAutocast), Category = "JSON|Value") 
    static UJsonValue* JsonValue_LinearColor(const FLinearColor& Value) { return UJsonValue::CreateJsonValue(Value); }

    UFUNCTION(BlueprintPure, meta = (DisplayName = "ToJsonValue (Color)", CompactNodeTitle = "->", BlueprintAutocast), Category = "JSON|Value") 
    static UJsonValue* JsonValue_Color(const FColor& Value) { return UJsonValue::CreateJsonValue(Value); }

    UFUNCTION(BlueprintPure, meta = (DisplayName = "ToJsonValue (Rotator)", CompactNodeTitle = "->", BlueprintAutocast), Category = "JSON|Value") 
    static UJsonValue* JsonValue_Rotator(const FRotator& Value) { return UJsonValue::CreateJsonValue(Value); }
    
    UFUNCTION(BlueprintPure, meta = (DisplayName = "ToJsonValue (Transform)", CompactNodeTitle = "->", BlueprintAutocast), Category = "JSON|Value") 
    static UJsonValue* JsonValue_Transform(const FTransform& Value) { return UJsonValue::CreateJsonValue(Value); }

    UFUNCTION(BlueprintPure, meta = (DisplayName = "ToJsonValue (Quat)", CompactNodeTitle = "->", BlueprintAutocast), Category = "JSON|Value") 
    static UJsonValue* JsonValue_Quat(const FQuat& Value) { return UJsonValue::CreateJsonValue(Value); }

    UFUNCTION(BlueprintPure, meta = (DisplayName = "ToJsonValue (HitResult)", CompactNodeTitle = "->", BlueprintAutocast), Category = "JSON|Value") 
    static UJsonValue* JsonValue_HitResult(const FHitResult& Value) { return UJsonValue::CreateJsonValue(Value); }

};


/* Macro to easily add internal array functions a body. Warp the custom array into a (UJsonValue*) array. */
#define JSON_K2NODE_SET_FIELD_ARR {                                                                             \
        if (!JsonObject)                                                                                        \
        {                                                                                                       \
            UE_LOG(LogBlueprintJson, Warning, TEXT("Failed to add field to JSON Object: Null object passed.")); \
            return;                                                                                             \
        }                                                                                                       \
        TArray<UJsonValue*> Values;                                                                             \
        for (const auto& Value : FieldValue)                                                                    \
        {                                                                                                       \
            UJsonValue* const JsonValue = UJsonValue::CreateJsonValueTemplate(Value);                           \
            if (JsonValue)                                                                                      \
            {                                                                                                   \
                Values.Emplace(JsonValue);                                                                      \
            }                                                                                                   \
        }                                                                                                       \
        JsonObject->SetArrayField(FieldName, Values);                                                           \
    }

// Macro to easily add internal functions a body. Transform the passed variable to a (UJsonValue*).
#define JSON_K2NODE_SET_FIELD {                                                                                 \
        if (JsonObject)                                                                                         \
        {                                                                                                       \
            JsonObject->SetField(FieldName, UJsonValue::CreateJsonValue(FieldValue));                           \
        }                                                                                                       \
        else                                                                                                    \
        {                                                                                                       \
            UE_LOG(LogBlueprintJson, Warning, TEXT("Failed to add field to JSON Object: Null object passed.")); \
        }                                                                                                       \
    }


/**
*  Internal C++ library for K2Node. They must be in the final build as they are hidden nodes still present in the graph.
*  It's migrated from the default Json library to not pollute the namespace.
**/ 
UCLASS()
class BLUEPRINTJSON_API UInternalJsonLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()
public:

    /*****************************************************************************************************************************/
    /*********                                                                                                           *********/
    /*********                                                                                                           *********/
    /*********     Functions bound to the custom node. They are called under the hood to have the wanted behaviour.      *********/
    /*********                                                                                                           *********/
    /*********                                                                                                           *********/
    /*****************************************************************************************************************************/

    /* Add Field to JSON Object functions. */
    UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true")) static void JO_AddField_Int        (UJsonObject* const JsonObject, const FString& FieldName, const int32           FieldValue) { JSON_K2NODE_SET_FIELD }
    UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true")) static void JO_AddField_Int64      (UJsonObject* const JsonObject, const FString& FieldName, const int64           FieldValue) { JSON_K2NODE_SET_FIELD }
    UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true")) static void JO_AddField_Float      (UJsonObject* const JsonObject, const FString& FieldName, const float           FieldValue) { JSON_K2NODE_SET_FIELD }
    UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true")) static void JO_AddField_String     (UJsonObject* const JsonObject, const FString& FieldName, const FString&        FieldValue) { JSON_K2NODE_SET_FIELD }
    UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true")) static void JO_AddField_Text       (UJsonObject* const JsonObject, const FString& FieldName, const FText&          FieldValue) { JSON_K2NODE_SET_FIELD }
    UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true")) static void JO_AddField_Name       (UJsonObject* const JsonObject, const FString& FieldName, const FName&          FieldValue) { JSON_K2NODE_SET_FIELD }
    UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true")) static void JO_AddField_Boolean    (UJsonObject* const JsonObject, const FString& FieldName, const bool            FieldValue) { JSON_K2NODE_SET_FIELD }
    UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true")) static void JO_AddField_Object     (UJsonObject* const JsonObject, const FString& FieldName, UObject* const        FieldValue) { JSON_K2NODE_SET_FIELD }
    UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true")) static void JO_AddField_Vector     (UJsonObject* const JsonObject, const FString& FieldName, const FVector&        FieldValue) { JSON_K2NODE_SET_FIELD }
    UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true")) static void JO_AddField_Vector2D   (UJsonObject* const JsonObject, const FString& FieldName, const FVector2D&      FieldValue) { JSON_K2NODE_SET_FIELD }
    UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true")) static void JO_AddField_Transform  (UJsonObject* const JsonObject, const FString& FieldName, const FTransform&     FieldValue) { JSON_K2NODE_SET_FIELD }
    UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true")) static void JO_AddField_Rotator    (UJsonObject* const JsonObject, const FString& FieldName, const FRotator&       FieldValue) { JSON_K2NODE_SET_FIELD }
    UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true")) static void JO_AddField_LinearColor(UJsonObject* const JsonObject, const FString& FieldName, const FLinearColor&   FieldValue) { JSON_K2NODE_SET_FIELD }
    UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true")) static void JO_AddField_Quat       (UJsonObject* const JsonObject, const FString& FieldName, const FQuat&          FieldValue) { JSON_K2NODE_SET_FIELD }
    UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true")) static void JO_AddField_HitResult  (UJsonObject* const JsonObject, const FString& FieldName, const FHitResult&     FieldValue) { JSON_K2NODE_SET_FIELD }
                                          
    /* Add Array Field to JSON Object functions. */
    UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true")) static void JO_AddField_Arr_Int        (UJsonObject* const JsonObject, const FString& FieldName, const TArray<int32>           & FieldValue) { JSON_K2NODE_SET_FIELD_ARR }
    UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true")) static void JO_AddField_Arr_Int64      (UJsonObject* const JsonObject, const FString& FieldName, const TArray<int64>           & FieldValue) { JSON_K2NODE_SET_FIELD_ARR }
    UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true")) static void JO_AddField_Arr_Float      (UJsonObject* const JsonObject, const FString& FieldName, const TArray<float>           & FieldValue) { JSON_K2NODE_SET_FIELD_ARR }
    UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true")) static void JO_AddField_Arr_String     (UJsonObject* const JsonObject, const FString& FieldName, const TArray<FString>         & FieldValue) { JSON_K2NODE_SET_FIELD_ARR }
    UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true")) static void JO_AddField_Arr_Boolean    (UJsonObject* const JsonObject, const FString& FieldName, const TArray<bool>            & FieldValue) { JSON_K2NODE_SET_FIELD_ARR }
    UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true")) static void JO_AddField_Arr_Object     (UJsonObject* const JsonObject, const FString& FieldName, const TArray<UObject*>        & FieldValue) { JSON_K2NODE_SET_FIELD_ARR }
    UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true")) static void JO_AddField_Arr_Vector     (UJsonObject* const JsonObject, const FString& FieldName, const TArray<FVector>         & FieldValue) { JSON_K2NODE_SET_FIELD_ARR }
    UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true")) static void JO_AddField_Arr_Vector2D   (UJsonObject* const JsonObject, const FString& FieldName, const TArray<FVector2D>       & FieldValue) { JSON_K2NODE_SET_FIELD_ARR }
    UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true")) static void JO_AddField_Arr_Transform  (UJsonObject* const JsonObject, const FString& FieldName, const TArray<FTransform>      & FieldValue) { JSON_K2NODE_SET_FIELD_ARR }
    UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true")) static void JO_AddField_Arr_Rotator    (UJsonObject* const JsonObject, const FString& FieldName, const TArray<FRotator>        & FieldValue) { JSON_K2NODE_SET_FIELD_ARR }
    UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true")) static void JO_AddField_Arr_LinearColor(UJsonObject* const JsonObject, const FString& FieldName, const TArray<FLinearColor>    & FieldValue) { JSON_K2NODE_SET_FIELD_ARR }
    UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true")) static void JO_AddField_Arr_Quat       (UJsonObject* const JsonObject, const FString& FieldName, const TArray<FQuat>           & FieldValue) { JSON_K2NODE_SET_FIELD_ARR }
    UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true")) static void JO_AddField_Arr_HitResult  (UJsonObject* const JsonObject, const FString& FieldName, const TArray<FHitResult>      & FieldValue) { JSON_K2NODE_SET_FIELD_ARR }
};

#undef JSON_K2NODE_SET_FIELD
#undef JSON_K2NODE_SET_FIELD_ARR
