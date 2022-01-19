// Copyright Pandores Marketplace 2021. All Rights Reserved.

#pragma once

#include "Engine/EngineTypes.h"
#include "Serialization/JsonTypes.h"
#include "CoreMinimal.h"
#include "BlueprintJsonWrapper.generated.h"

class UJsonObject;
class FJsonValue;
class FJsonObject;

UENUM(BlueprintType)
enum class EJsonType : uint8
{
    Null,
    String,
    Number,
    Boolean,
    Array,
    Object
};

/* Associate a field name to its value. */
USTRUCT(BlueprintType)
struct BLUEPRINTJSON_API FJsonObjectField
{
    GENERATED_BODY()
public:
    FJsonObjectField() {};
    FJsonObjectField(const FString& InFieldName, UJsonValue* const InFieldValue)
        : FieldName(InFieldName)
        , FieldValue(InFieldValue)
    {};

    /*  This field's name */
    UPROPERTY(BlueprintReadOnly, Category = "Field")
    FString FieldName;
    /*  This field's value */
    UPROPERTY(BlueprintReadOnly, Category = "Field")
    UJsonValue* FieldValue;
};

/**
 *  A Json Value, its type is not defined.
 **/
UCLASS(BlueprintType)
class BLUEPRINTJSON_API UJsonValue : public UObject
{
    GENERATED_BODY()
public:
    /* Returns if this value represents the Json Null value. */
    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "JSON|Value")
    UPARAM(DisplayName = "Is Null") bool IsNull();

    /* Helper node to easily branch over this JSON value's type. */
    UFUNCTION(BlueprintCallable, Category = "JSON|Value", meta = (DisplayName="Switch on Type", ExpandEnumAsExecs = Branches))
    void SwitchValueType(EJsonType& Branches);

    /* Returns this value's type as a string. */
    FString GetStringType() const;

    /* Returns this value's type. */
    EJson GetType() const;

    /* Converts the EJson enum to string. */
    static FString JsonTypeToString(const EJson Json);

    /* Create a wrapper for Blueprint from a raw pointer */
    static UJsonValue* CreateFromRaw(const TSharedPtr<FJsonValue> RawValue);

    /* Returns the wrapped JSON value pointer */
    TSharedPtr<FJsonValue> GetRawValue() const { return Value; }

    /* Creates a JSON value holding a Number */
    static UJsonValue* CreateJsonValue(const int32          Value);

    /* Creates a JSON value holding a Number */
    static UJsonValue* CreateJsonValue(const int64          Value);

    /* Creates a JSON value holding a Number */
    static UJsonValue* CreateJsonValue(const float          Value);

    /* Creates a JSON value holding a Boolean */
    static UJsonValue* CreateJsonValue(const bool           Value);

    /* Creates a JSON value holding a String */
    static UJsonValue* CreateJsonValue(const FString&       Value);
    static UJsonValue* CreateJsonValue(const FText&         Value) { return CreateJsonValue(Value.ToString()); }
    static UJsonValue* CreateJsonValue(const FName&         Value) { return CreateJsonValue(Value.ToString()); }

    /* Creates a JSON value holding a Vector */
    static UJsonValue* CreateJsonValue(const FVector&       Value);

    /* Creates a JSON value holding a Vector2D */
    static UJsonValue* CreateJsonValue(const FVector2D&     Value);

    /* Creates a JSON value holding a Rotator */
    static UJsonValue* CreateJsonValue(const FRotator&      Value);

    /* Creates a JSON value holding a Transform */
    static UJsonValue* CreateJsonValue(const FTransform&    Value);

    /* Creates a JSON value holding a LinearColor */
    static UJsonValue* CreateJsonValue(const FLinearColor&  Value);

    /* Creates a JSON value holding a Color */
    static UJsonValue* CreateJsonValue(const FColor&        Value);

    /* Creates a JSON value holding a Quaternion */
    static UJsonValue* CreateJsonValue(const FQuat&         Value);

    /* Creates a JSON value holding a Hit Result*/
    static UJsonValue* CreateJsonValue(const FHitResult&    Value);

    /* Creates a JSON value holding a UObject. Only UJsonValue and UJsonObject are supported. */
    static UJsonValue* CreateJsonValue(UObject* const       Value);

    /* Used for custom nodes. Using CreateJsonValue is the same. */
    template<class T>
    FORCEINLINE static UJsonValue* CreateJsonValueTemplate(const T& Value)
    {
        return CreateJsonValue(Value);
    }

private:
    TSharedPtr<FJsonValue> Value;
};

/**
 *  A Json Object. Contains a list of fields.
 **/
UCLASS(BlueprintType)
class BLUEPRINTJSON_API UJsonObject : public UObject
{
	GENERATED_BODY()
public:
    UJsonObject();

    /* Parse JSON and construct a JSON object from it. */
    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "JSON|Object")
    static UPARAM(DisplayName = "Root JSON Object") UJsonObject* ParseJson(const FString& Json, UPARAM(DisplayName = "Is Valid JSON") bool& bSuccess);

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "JSON|Object")
    UPARAM(DisplayName = "Field Value") FString GetFieldAsString(const FString& FieldName);

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "JSON|Object")
    UPARAM(DisplayName = "Field Value") int32 GetFieldAsInteger(const FString& FieldName);

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "JSON|Object")
    UPARAM(DisplayName = "Field Value") int64 GetFieldAsInteger64(const FString& FieldName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "JSON|Object")
    UPARAM(DisplayName = "Field Value") float GetFieldAsFloat(const FString& FieldName);

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "JSON|Object")
    UPARAM(DisplayName = "Field Value") TArray<UJsonValue*> GetFieldAsArray(const FString& FieldName);

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "JSON|Object")
    UPARAM(DisplayName = "Field Value") UJsonObject* GetFieldAsObject(const FString& FieldName);

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "JSON|Object")
    UPARAM(DisplayName = "Field Value") bool GetFieldAsBoolean(const FString& FieldName);

    /* Returns true if this field is the JSON Null value. */
    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "JSON|Object")
    UPARAM(DisplayName = "Field Value") UJsonValue* GetFieldAsValue(const FString& FieldName);

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "JSON|Object")
    UPARAM(DisplayName = "Is Null") bool IsFieldNull(const FString& FieldName);

    /* Returns whether this object has the specified field. */
    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "JSON|Object")
    UPARAM(DisplayName = "Has Field") bool HasField(const FString& FieldName);

    UFUNCTION(BlueprintCallable, Category = "JSON|Object")
    void SetObjectField(const FString & FieldName, UJsonObject* const JsonObject);

    UFUNCTION(BlueprintCallable, Category = "JSON|Object")
    void SetUObjectField(const FString & FieldName, UObject* const FieldValue);

    UFUNCTION(BlueprintCallable, Category = "JSON|Object")
    void SetStringField(const FString & FieldName, const FString &FieldValue);

    UFUNCTION(BlueprintCallable, Category = "JSON|Object")
    void SetIntegerField(const FString & FieldName, const int32 FieldValue);

    UFUNCTION(BlueprintCallable, Category = "JSON|Object")
    void SetInteger64Field(const FString & FieldName, const int64 FieldValue);
    
    UFUNCTION(BlueprintCallable, Category = "JSON|Object")
    void SetFloatField(const FString & FieldName, const float FieldValue);

    UFUNCTION(BlueprintCallable, Category = "JSON|Object")
    void SetBooleanField(const FString & FieldName, const bool FieldValue);

    UFUNCTION(BlueprintCallable, Category = "JSON|Object")
    void SetField(const FString& FieldName, UJsonValue* const FieldValue);

    UFUNCTION(BlueprintCallable, Category = "JSON|Object")
    void SetNullField(const FString & FieldName);

    UFUNCTION(BlueprintCallable, Category = "JSON|Object")
    void SetArrayField(const FString & FieldName, const TArray<UJsonValue*> & FieldValue);

    UFUNCTION(BlueprintCallable, Category = "JSON|Object")
    void SetVectorField(const FString & FieldName, const FVector & FieldValue) { SetUObjectField(FieldName, UJsonValue::CreateJsonValue(FieldValue)); }

    UFUNCTION(BlueprintCallable, Category = "JSON|Object")
    void SetVector2DField(const FString & FieldName, const FVector2D & FieldValue) { SetUObjectField(FieldName, UJsonValue::CreateJsonValue(FieldValue)); }

    UFUNCTION(BlueprintCallable, Category = "JSON|Object")
    void SetRotatorField(const FString & FieldName, const FRotator & FieldValue) { SetUObjectField(FieldName, UJsonValue::CreateJsonValue(FieldValue)); }

    UFUNCTION(BlueprintCallable, Category = "JSON|Object")
    void SetTransformField(const FString & FieldName, const FTransform & FieldValue) { SetUObjectField(FieldName, UJsonValue::CreateJsonValue(FieldValue)); }

    UFUNCTION(BlueprintCallable, Category = "JSON|Object")
    void SetLinearColorField(const FString & FieldName, const FLinearColor & FieldValue) { SetUObjectField(FieldName, UJsonValue::CreateJsonValue(FieldValue)); }
    
    UFUNCTION(BlueprintCallable, Category = "JSON|Object")
    void SetColorField(const FString & FieldName, const FColor& FieldValue) { SetUObjectField(FieldName, UJsonValue::CreateJsonValue(FieldValue)); }

    UFUNCTION(BlueprintCallable, Category = "JSON|Object")
    void SetQuatField(const FString & FieldName, const FQuat& FieldValue) { SetUObjectField(FieldName, UJsonValue::CreateJsonValue(FieldValue)); }

    UFUNCTION(BlueprintCallable, Category = "JSON|Object")
    void SetHitResultField(const FString & FieldName, const FHitResult& FieldValue) { SetUObjectField(FieldName, UJsonValue::CreateJsonValue(FieldValue)); }

    /* Creates an empty JSON object. */
    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "JSON|Object")
    static UPARAM(DisplayName = "JSON Object") UJsonObject* CreateJsonObject();

    /* Converts this JSON object to a JSON Value. */
    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "JSON|Object")
    UPARAM(DisplayName = "JSON Value") UJsonValue* ToJsonValue();

    /* Create a new UJsonObject from a raw FJsonObject. */
    static UJsonObject* CreateFromRaw(const TSharedPtr<FJsonObject> RawObject);

    /* Returns thie Object's raw pointer. */
    TSharedPtr<FJsonObject> GetRawObject() { return Object; };

    /* Returns all the properties of this object. */
    UFUNCTION(BlueprintPure, Category = "JSON|Object")
    void GetAllProperties(UPARAM(DisplayName="Properties") TArray<FJsonObjectField>& OutValues) const;

    /* Sets a raw field without using a wrapper. */
    void SetRawField(const FString& FieldName, const TSharedPtr<FJsonValue> & FieldValue);
private:
   
    static TSharedPtr<FJsonObject> ParseJsonInternal(const FString& Json, bool& bSuccess);

    TSharedPtr<FJsonObject> Object;
};


