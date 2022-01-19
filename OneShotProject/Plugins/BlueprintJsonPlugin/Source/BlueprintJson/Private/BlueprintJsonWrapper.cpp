// Copyright Pandores Marketplace 2021. All Rights Reserved.

#include "BlueprintJsonWrapper.h"
#include "BlueprintJson.h"
#include "Dom/JsonValue.h"
#include "Dom/JsonObject.h"
#include "Serialization/JsonReader.h"
#include "Serialization/JsonSerializer.h"	

/* static */ UJsonValue* UJsonValue::CreateFromRaw(const TSharedPtr<FJsonValue> RawValue)
{
	if (RawValue)
	{
		UJsonValue* const Value = NewObject < UJsonValue > ();

		Value->Value = RawValue;

		return Value;
	}
	return nullptr;
}

/* static */ UJsonValue* UJsonValue::CreateJsonValue(const int32 Value)
{
    return CreateFromRaw(MakeShared<FJsonValueNumber>(Value));
}
/* static */ UJsonValue* UJsonValue::CreateJsonValue(const int64 Value)
{
    return CreateFromRaw(MakeShared<FJsonValueNumber>(Value));
}
/* static */ UJsonValue* UJsonValue::CreateJsonValue(const float Value)
{
    return CreateFromRaw(MakeShared<FJsonValueNumber>(Value));
}
/* static */ UJsonValue* UJsonValue::CreateJsonValue(const bool Value)
{
    return CreateFromRaw(MakeShared<FJsonValueBoolean>(Value));
}
/* static */ UJsonValue* UJsonValue::CreateJsonValue(const FString& Value)
{
    return CreateFromRaw(MakeShared<FJsonValueString>(Value));
}
/* static */ UJsonValue* UJsonValue::CreateJsonValue(UObject* const       Value)
{
	if (!Value)
	{
		return nullptr;
	}
	if (UJsonValue* const JsonValue = Cast<UJsonValue>(Value))
	{
		return JsonValue;
	}
	if (UJsonObject* const JsonObject = Cast<UJsonObject>(Value))
	{
		return CreateFromRaw(MakeShared<FJsonValueObject>(JsonObject->GetRawObject()));
	}

	UE_LOG(LogBlueprintJson, Warning, TEXT("Object %s is not supported as JsonValue."), *Value->GetName());
	
	return nullptr;
}
/* static */ UJsonValue* UJsonValue::CreateJsonValue(const FVector& Value)
{
	TSharedPtr<FJsonObject> Object = MakeShared<FJsonObject>();

	Object->SetNumberField(TEXT("X"), Value.X);
	Object->SetNumberField(TEXT("Y"), Value.Y);
	Object->SetNumberField(TEXT("Z"), Value.Z);

	return UJsonValue::CreateFromRaw(MakeShared<FJsonValueObject>(Object));
}
/* static */ UJsonValue* UJsonValue::CreateJsonValue(const FVector2D& Value)
{
	TSharedPtr<FJsonObject> Object = MakeShared<FJsonObject>();

	Object->SetNumberField(TEXT("X"), Value.X);
	Object->SetNumberField(TEXT("Y"), Value.Y);

	return UJsonValue::CreateFromRaw(MakeShared<FJsonValueObject>(Object));
}
/* static */ UJsonValue* UJsonValue::CreateJsonValue(const FRotator&	Value)
{
	TSharedPtr<FJsonObject> Object = MakeShared<FJsonObject>();

	Object->SetNumberField(TEXT("Pitch"),	Value.Pitch);
	Object->SetNumberField(TEXT("Yaw"),		Value.Yaw);
	Object->SetNumberField(TEXT("Roll"),	Value.Roll);

	return UJsonValue::CreateFromRaw(MakeShared<FJsonValueObject>(Object));
}
/* static */ UJsonValue* UJsonValue::CreateJsonValue(const FTransform&	Value)
{
	// We don't pass through UJsonObject to reduce the overhead.
	// Even though it's pretty small.

	TSharedPtr<FJsonObject> LocObject = MakeShared<FJsonObject>();
	TSharedPtr<FJsonObject> RotObject = MakeShared<FJsonObject>();
	TSharedPtr<FJsonObject> ScaObject = MakeShared<FJsonObject>();
	TSharedPtr<FJsonObject> TraObject = MakeShared<FJsonObject>();

	LocObject->SetNumberField(TEXT("X"), Value.GetLocation().X);
	LocObject->SetNumberField(TEXT("Y"), Value.GetLocation().Y);
	LocObject->SetNumberField(TEXT("Z"), Value.GetLocation().Z);

	ScaObject->SetNumberField(TEXT("X"), Value.GetScale3D().X);
	ScaObject->SetNumberField(TEXT("Y"), Value.GetScale3D().Y);
	ScaObject->SetNumberField(TEXT("Z"), Value.GetScale3D().Z);

	RotObject->SetNumberField(TEXT("Pitch"), Value.Rotator().Pitch);
	RotObject->SetNumberField(TEXT("Yaw"),	 Value.Rotator().Yaw);
	RotObject->SetNumberField(TEXT("Roll"),	 Value.Rotator().Roll);

	TraObject->SetObjectField(TEXT("Location"), LocObject);
	TraObject->SetObjectField(TEXT("Scale3D"),	ScaObject);
	TraObject->SetObjectField(TEXT("Rotation"), RotObject);

	return UJsonValue::CreateFromRaw(MakeShared<FJsonValueObject>(TraObject)); 
}
/* static */ UJsonValue* UJsonValue::CreateJsonValue(const FLinearColor&Value)
{
	TSharedPtr<FJsonObject> Object = MakeShared<FJsonObject>();

	Object->SetNumberField(TEXT("R"), Value.R);
	Object->SetNumberField(TEXT("G"), Value.G);
	Object->SetNumberField(TEXT("B"), Value.B);
	Object->SetNumberField(TEXT("A"), Value.A);

	return UJsonValue::CreateFromRaw(MakeShared<FJsonValueObject>(Object)); 
}
/* static */ UJsonValue* UJsonValue::CreateJsonValue(const FColor&		Value)
{

	TSharedPtr<FJsonObject> Object = MakeShared<FJsonObject>();

	Object->SetNumberField(TEXT("R"), Value.R);
	Object->SetNumberField(TEXT("G"), Value.G);
	Object->SetNumberField(TEXT("B"), Value.B);
	Object->SetNumberField(TEXT("A"), Value.A);

	return UJsonValue::CreateFromRaw(MakeShared<FJsonValueObject>(Object)); 
}
/* static */ UJsonValue* UJsonValue::CreateJsonValue(const FQuat&		Value)
{
	TSharedPtr<FJsonObject> Object = MakeShared<FJsonObject>();

	Object->SetNumberField(TEXT("W"), Value.W);
	Object->SetNumberField(TEXT("X"), Value.X);
	Object->SetNumberField(TEXT("Y"), Value.Y);
	Object->SetNumberField(TEXT("Z"), Value.Z);

	return UJsonValue::CreateFromRaw(MakeShared<FJsonValueObject>(Object)); 
}

/* static */ UJsonValue* UJsonValue::CreateJsonValue(const FHitResult& Value)
{
	UJsonObject* const Object = UJsonObject::CreateJsonObject();

	Object->SetField(TEXT("BlockingHit"),	CreateJsonValue(Value.bBlockingHit));
	Object->SetField(TEXT("Time"),			CreateJsonValue(Value.Time));
	Object->SetField(TEXT("Distance"),		CreateJsonValue(Value.Distance));
	Object->SetField(TEXT("Location"),		CreateJsonValue(Value.Location));
	Object->SetField(TEXT("ImpactPoint"),	CreateJsonValue(Value.ImpactPoint));
	Object->SetField(TEXT("Normal"),		CreateJsonValue(Value.Normal));
	Object->SetField(TEXT("ImpactNormal"),	CreateJsonValue(Value.ImpactNormal));
	Object->SetField(TEXT("BoneName"),		CreateJsonValue(Value.BoneName.ToString()));
	Object->SetField(TEXT("FaceIndex"),		CreateJsonValue(Value.FaceIndex));
	Object->SetField(TEXT("TraceStart"),	CreateJsonValue(Value.TraceStart));
	Object->SetField(TEXT("TraceEnd"),		CreateJsonValue(Value.TraceEnd));

	return UJsonValue::CreateJsonValue(Object);
}

FString UJsonValue::GetStringType() const
{
	return JsonTypeToString(Value->Type);
}

/* static */ FString UJsonValue::JsonTypeToString(const EJson Json)
{
#define JSON_CASE(c) case EJson:: c : return TEXT(#c);
	switch (Json)
	{
	JSON_CASE(Array);
	JSON_CASE(Number);
	JSON_CASE(String);
	JSON_CASE(Object);
	JSON_CASE(None);
	JSON_CASE(Boolean);
	JSON_CASE(Null);
	}
#undef JSON_CASE
	return TEXT("Undefined");
}

bool UJsonValue::IsNull()
{
	return Value->Type == EJson::Null;
}

EJson UJsonValue::GetType() const
{
	return Value->Type;
}

void UJsonValue::SwitchValueType(EJsonType& Branches)
{
#define CASE_JSON(c) case EJson:: c : Branches = EJsonType:: c; break;
	switch (Value->Type)
	{
	CASE_JSON(Array);
	CASE_JSON(Number);
	CASE_JSON(String);
	CASE_JSON(Object);
	CASE_JSON(Boolean);
	default: Branches = EJsonType::Null;
	}
#undef CASE_JSON
}

UJsonObject::UJsonObject() : Super()
	, Object(MakeShared<FJsonObject>())
{}

/* static */ TSharedPtr<FJsonObject> UJsonObject::ParseJsonInternal(const FString& Json, bool& bSuccess)
{
	TSharedRef< TJsonReader<> > Reader = TJsonReaderFactory<>::Create(Json);

	TSharedPtr<FJsonObject> JsonObject;

	bSuccess = FJsonSerializer::Deserialize(Reader, JsonObject);

	return JsonObject;
}

/* static */ UJsonObject* UJsonObject::CreateFromRaw(const TSharedPtr<FJsonObject> RawObject)
{
	if (!RawObject)
	{
		return nullptr;
	}

	UJsonObject* const NewJsonObject = NewObject<UJsonObject>();

	NewJsonObject->Object = RawObject;

	return NewJsonObject;
}

/* static */ UJsonObject* UJsonObject::ParseJson(const FString& Json, bool& bSuccess)
{
	TSharedPtr<FJsonObject> RawObject = ParseJsonInternal(Json, bSuccess);

	return CreateFromRaw(RawObject);
}

/* static */ UJsonObject* UJsonObject::CreateJsonObject()
{
	UJsonObject* const Object = NewObject<UJsonObject>();

	Object->Object = MakeShared<FJsonObject>();

	return Object;
}

UJsonValue* UJsonObject::ToJsonValue()
{
	return UJsonValue::CreateFromRaw(MakeShared<FJsonValueObject>(Object));
}

void UJsonObject::GetAllProperties(TArray<FJsonObjectField>& OutValues) const
{
	OutValues.Empty(Object->Values.Num());
	for (const auto& Value : Object->Values)
	{
		OutValues.Emplace(FJsonObjectField{ Value.Key, UJsonValue::CreateFromRaw(Value.Value) });
	}
}

FString UJsonObject::GetFieldAsString(const FString& FieldName)
{
	TSharedPtr<FJsonValue> Value = Object->TryGetField(FieldName);
	if (!Value)
	{
		UE_LOG(LogBlueprintJson, Warning, TEXT("Failed to get field %s in Json Object."), *FieldName);
		return TEXT("");
	}

	FString FieldValue;
	if (!Value->TryGetString(FieldValue))
	{
		UE_LOG(LogBlueprintJson, Warning, TEXT("Field %s is not a String but is %s."), *FieldName, *UJsonValue::JsonTypeToString(Value->Type));
	}
	return FieldValue;
}

int32 UJsonObject::GetFieldAsInteger(const FString& FieldName)
{
	TSharedPtr<FJsonValue> Value = Object->TryGetField(FieldName);
	if (!Value)
	{
		UE_LOG(LogBlueprintJson, Warning, TEXT("Failed to get field %s in Json Object."), *FieldName);
		return 0;
	}

	int32 FieldValue;
	if (!Value->TryGetNumber(FieldValue))
	{
		UE_LOG(LogBlueprintJson, Warning, TEXT("Field %s is not a Number but is %s."), *FieldName, *UJsonValue::JsonTypeToString(Value->Type));
	}
	return FieldValue;
}

int64 UJsonObject::GetFieldAsInteger64(const FString& FieldName)
{
	TSharedPtr<FJsonValue> Value = Object->TryGetField(FieldName);
	if (!Value)
	{
		UE_LOG(LogBlueprintJson, Warning, TEXT("Failed to get field %s in Json Object."), *FieldName);
		return 0;
	}

	int64 FieldValue;
	if (!Value->TryGetNumber(FieldValue))
	{
		UE_LOG(LogBlueprintJson, Warning, TEXT("Field %s is not a Number but is %s."), *FieldName, *UJsonValue::JsonTypeToString(Value->Type));
	}
	return FieldValue;
}

float UJsonObject::GetFieldAsFloat(const FString& FieldName)
{
	TSharedPtr<FJsonValue> Value = Object->TryGetField(FieldName);
	if (!Value)
	{
		UE_LOG(LogBlueprintJson, Warning, TEXT("Failed to get field %s in Json Object."), *FieldName);
		return 0.f;
	}

	double FieldValue;
	if (!Value->TryGetNumber(FieldValue))
	{
		UE_LOG(LogBlueprintJson, Warning, TEXT("Field %s is not a Number but is %s."), *FieldName, *UJsonValue::JsonTypeToString(Value->Type));
	}
	return static_cast<float>(FieldValue);
}

TArray<UJsonValue*> UJsonObject::GetFieldAsArray(const FString& FieldName)
{
	TArray<UJsonValue*> FieldValue;

	TSharedPtr<FJsonValue> Value = Object->TryGetField(FieldName);

	if (!Value)
	{
		UE_LOG(LogBlueprintJson, Warning, TEXT("Failed to get field %s in Json Object."), *FieldName);
		return FieldValue;
	}

	if (Value->Type != EJson::Array)
	{
		UE_LOG(LogBlueprintJson, Warning, TEXT("Field %s is not an Array but is %s."), *FieldName, *UJsonValue::JsonTypeToString(Value->Type));
		return FieldValue;
	}

	const TArray<TSharedPtr<FJsonValue> >& RawValues = Value->AsArray();

	for (const auto& RawValue : RawValues)
	{
		FieldValue.Emplace(UJsonValue::CreateFromRaw(RawValue));
	}

	return FieldValue;
}

UJsonObject* UJsonObject::GetFieldAsObject(const FString& FieldName)
{
	TSharedPtr<FJsonValue> Value = Object->TryGetField(FieldName);
	if (!Value)
	{
		UE_LOG(LogBlueprintJson, Warning, TEXT("Failed to get field %s in Json Object."), *FieldName);
		return nullptr;
	}

	if (Value->Type != EJson::Object)
	{
		UE_LOG(LogBlueprintJson, Warning, TEXT("Field %s is not an Object but is %s."), *FieldName, *UJsonValue::JsonTypeToString(Value->Type));
		return nullptr;
	}

	return CreateFromRaw(Value->AsObject());
}

bool UJsonObject::GetFieldAsBoolean(const FString& FieldName)
{
	TSharedPtr<FJsonValue> Value = Object->TryGetField(FieldName);
	if (!Value)
	{
		UE_LOG(LogBlueprintJson, Warning, TEXT("Failed to get field %s in Json Object."), *FieldName);
		return false;
	}

	bool bFieldValue = false;
	if (!Value->TryGetBool(bFieldValue))
	{
		UE_LOG(LogBlueprintJson, Warning, TEXT("Field %s is not a Boolean but is %s."), *FieldName, *UJsonValue::JsonTypeToString(Value->Type));
	}
	return bFieldValue;
}

UJsonValue* UJsonObject::GetFieldAsValue(const FString& FieldName)
{
	if (!Object->HasField(FieldName))
	{
		UE_LOG(LogBlueprintJson, Warning, TEXT("Failed to get field %s in Json Object."), *FieldName);
		return nullptr;
	}
	return UJsonValue::CreateFromRaw(Object->TryGetField(FieldName));
}

bool UJsonObject::IsFieldNull(const FString& FieldName)
{
	TSharedPtr<FJsonValue> Value = Object->TryGetField(FieldName);
	if (!Value)
	{
		UE_LOG(LogBlueprintJson, Warning, TEXT("Failed to get field %s in Json Object."), *FieldName);
		return true;
	}
	return Value->IsNull();
}

bool UJsonObject::HasField(const FString& FieldName)
{
	return Object->HasField(FieldName);
}

void UJsonObject::SetObjectField(const FString& FieldName, UJsonObject* const JsonObject)
{
	if (!JsonObject)
	{
		UE_LOG(LogBlueprintJson, Warning, TEXT("Null object passed to AddObjectField."));
		return;
	}
	Object->SetObjectField(FieldName, JsonObject->Object);
}

void UJsonObject::SetStringField(const FString& FieldName, const FString& FieldValue)
{
	Object->SetStringField(FieldName, FieldValue);
}

void UJsonObject::SetIntegerField(const FString& FieldName, const int32 FieldValue)
{
	Object->SetNumberField(FieldName, static_cast<double>(FieldValue));
}

void UJsonObject::SetInteger64Field(const FString& FieldName, const int64 FieldValue)
{
	Object->SetNumberField(FieldName, static_cast<double>(FieldValue));
}

void UJsonObject::SetFloatField(const FString& FieldName, const float FieldValue)
{
	Object->SetNumberField(FieldName, static_cast<double>(FieldValue));
}

void UJsonObject::SetBooleanField(const FString& FieldName, const bool FieldValue)
{
	Object->SetBoolField(FieldName, FieldValue);
}

void UJsonObject::SetField(const FString& FieldName, UJsonValue* const FieldValue)
{
	if (!FieldValue)
	{
		UE_LOG(LogBlueprintJson, Warning, TEXT("Null value passed to SetField."));
		return;
	}
	Object->SetField(FieldName, FieldValue->GetRawValue());
}

void UJsonObject::SetRawField(const FString& FieldName, const TSharedPtr<FJsonValue>& FieldValue)
{
	Object->SetField(FieldName, FieldValue);
}

void UJsonObject::SetUObjectField(const FString& FieldName, UObject* const FieldValue)
{
	if (UJsonObject* const JsonObject = Cast<UJsonObject>(FieldValue))
	{
		SetObjectField(FieldName, JsonObject);
	}

	else if (UJsonValue* const JsonValue = Cast<UJsonValue>(FieldValue))
	{
		SetField(FieldName, JsonValue);
	}
}

void UJsonObject::SetArrayField(const FString& FieldName, const TArray<UJsonValue*>& FieldValue)
{
	TArray<TSharedPtr<FJsonValue> > Values;
	for (const auto& Value : FieldValue)
	{
		if (Value)
		{
			Values.Emplace(Value->GetRawValue());
		}
	}
	Object->SetArrayField(FieldName, Values);
}

void UJsonObject::SetNullField(const FString& FieldName)
{
	Object->SetField(FieldName, MakeShared<FJsonValueNull>());
}

