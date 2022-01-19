// Copyright Pandores Marketplace 2021. All Rights Reserved.

#include "BlueprintJsonLibrary.h"
#include "BlueprintJsonWrapper.h"
#include "Misc/FileHelper.h"
#include "JsonObjectConverter.h"

FString UJsonLibrary::JsonValue_ToString(UJsonValue* Object)
{
	FString StrVal = TEXT("");
	if (Object && !Object->GetRawValue()->TryGetString(StrVal))
	{
		UE_LOG(LogBlueprintJson, Warning, TEXT("Tried to get String from JsonValue but the real type is %s."), *Object->GetStringType());

		switch (Object->GetType())
		{
		case EJson::Number:  return FString::Printf(TEXT("%f"), Object->GetRawValue()->AsNumber());
		case EJson::Null:    return TEXT("NULL");
		case EJson::Boolean: return Object->GetRawValue()->AsBool() ? TEXT("True") : TEXT("False");
		}
	}
	return StrVal;
}

int32 UJsonLibrary::JsonValue_ToInteger(UJsonValue* Object)
{
	if (!Object)
	{
		return 0;
	}

	int32 NumVal = 0;
	if (!Object->GetRawValue()->TryGetNumber(NumVal))
	{
		UE_LOG(LogBlueprintJson, Warning, TEXT("Tried to get Number from JsonValue but the real type is %s."), *Object->GetStringType());
	}
	return NumVal;
}


bool UJsonLibrary::JsonValue_ToBool(UJsonValue* Object)
{
	if (!Object)
	{
		return false;
	}

	bool BoolVal = false;
	if (!Object->GetRawValue()->TryGetBool(BoolVal))
	{
		UE_LOG(LogBlueprintJson, Warning, TEXT("Tried to get Boolean from JsonValue but the real type is %s."), *Object->GetStringType());
	}
	return BoolVal;
}


float UJsonLibrary::JsonValue_ToFloat(UJsonValue* Object)
{
	if (!Object)
	{
		return 0.f;
	}

	double NumVal = 0.f;
	if (!Object->GetRawValue()->TryGetNumber(NumVal))
	{
		UE_LOG(LogBlueprintJson, Warning, TEXT("Tried to get Number from JsonValue but the real type is %s."), *Object->GetStringType());
	}
	return static_cast<float>(NumVal);
}

int64 UJsonLibrary::JsonValue_ToInteger64(UJsonValue* Object)
{
	if (!Object)
	{
		return 0;
	}

	int64 NumVal = 0.f;
	if (!Object->GetRawValue()->TryGetNumber(NumVal))
	{
		UE_LOG(LogBlueprintJson, Warning, TEXT("Tried to get Number from JsonValue but the real type is %s."), *Object->GetStringType());
	}
	return NumVal;
}

FVector UJsonLibrary::JsonValue_ToVector(UJsonValue* Object)
{
	FVector Value;

	if (!Object)
	{
		const TSharedPtr<FJsonObject>* JsonObject;
		if (Object->GetRawValue()->TryGetObject(JsonObject))
		{
			if ((*JsonObject)->HasTypedField<EJson::Number>(TEXT("X")))
			{
				Value.X = (*JsonObject)->GetNumberField(TEXT("X"));
			}

			if ((*JsonObject)->HasTypedField<EJson::Number>(TEXT("Y")))
			{
				Value.Y = (*JsonObject)->GetNumberField(TEXT("Y"));
			}

			if ((*JsonObject)->HasTypedField<EJson::Number>(TEXT("Z")))
			{
				Value.Z = (*JsonObject)->GetNumberField(TEXT("Z"));
			}
		}
	}

	return Value;
}

FRotator UJsonLibrary::JsonValue_ToRotator(UJsonValue* Object)
{
	FRotator Value;

	if (!Object)
	{
		const TSharedPtr<FJsonObject>* JsonObject;
		if (Object->GetRawValue()->TryGetObject(JsonObject))
		{
			if ((*JsonObject)->HasTypedField<EJson::Number>(TEXT("Pitch")))
			{
				Value.Pitch = (*JsonObject)->GetNumberField(TEXT("Pitch"));
			}

			if ((*JsonObject)->HasTypedField<EJson::Number>(TEXT("Yaw")))
			{
				Value.Yaw = (*JsonObject)->GetNumberField(TEXT("Yaw"));
			}

			if ((*JsonObject)->HasTypedField<EJson::Number>(TEXT("Roll")))
			{
				Value.Roll = (*JsonObject)->GetNumberField(TEXT("Roll"));
			}
		}
	}

	return Value;
}

FTransform UJsonLibrary::JsonValue_ToTransform(UJsonValue* Object)
{
	FTransform Value;

	if (!Object)
	{
		const TSharedPtr<FJsonObject>* JsonObject;
		if (Object->GetRawValue()->TryGetObject(JsonObject))
		{
			const auto GetVector = [&JsonObject](const FString& Field) -> FVector
			{
				FVector Location;
				const TSharedPtr<FJsonObject>* LocationObject;
				if ((*JsonObject)->TryGetObjectField(*Field, LocationObject))
				{
					if ((*LocationObject)->HasTypedField<EJson::Number>(TEXT("X")))
					{
						Location.X = (*LocationObject)->GetNumberField(TEXT("X"));
					}

					if ((*JsonObject)->HasTypedField<EJson::Number>(TEXT("Y")))
					{
						Location.Y = (*LocationObject)->GetNumberField(TEXT("Y"));
					}

					if ((*JsonObject)->HasTypedField<EJson::Number>(TEXT("Z")))
					{
						Location.Z = (*LocationObject)->GetNumberField(TEXT("Z"));
					}
				}
				return Location;
			};

			FRotator Rotation;
			const TSharedPtr<FJsonObject>* LocationObject;
			if ((*JsonObject)->TryGetObjectField(TEXT("Rotation"), LocationObject))
			{
				if ((*LocationObject)->HasTypedField<EJson::Number>(TEXT("Pitch")))
				{
					Rotation.Pitch = (*LocationObject)->GetNumberField(TEXT("Pitch"));
				}

				if ((*LocationObject)->HasTypedField<EJson::Number>(TEXT("Yaw")))
				{
					Rotation.Yaw = (*LocationObject)->GetNumberField(TEXT("Yaw"));
				}

				if ((*LocationObject)->HasTypedField<EJson::Number>(TEXT("Roll")))
				{
					Rotation.Roll = (*LocationObject)->GetNumberField(TEXT("Roll"));
				}
			}

			Value.SetLocation(GetVector(TEXT("Location")));
			Value.SetScale3D (GetVector(TEXT("Scale3D")));
			Value.SetRotation(Rotation.Quaternion());
		}
	}

	return Value;
}

TArray<UJsonValue*> UJsonLibrary::JsonValue_ToArray(UJsonValue* Object)
{
	TArray<UJsonValue*> Arr;

	if (Object)
	{
		if (Object->GetRawValue()->Type == EJson::Array)
		{
			TArray<TSharedPtr<FJsonValue>> Values = Object->GetRawValue()->AsArray();
			
			Arr.Reserve(Values.Num());

			for (const auto& Val : Values)
			{
				Arr.Emplace(UJsonValue::CreateFromRaw(Val));
			}
		}
		else
		{
			UE_LOG(LogBlueprintJson, Warning, TEXT("Tried to get Array from JsonValue but the real type is %s."), *Object->GetStringType());
		}
	}

	return Arr;
}

UJsonObject* UJsonLibrary::JsonValue_ToObject(UJsonValue* Object)
{
	if (Object)
	{
		if (Object->GetRawValue()->Type == EJson::Object)
		{
			return UJsonObject::CreateFromRaw(Object->GetRawValue()->AsObject());
		}

		UE_LOG(LogBlueprintJson, Warning, TEXT("Tried to get Object from JsonValue but the real type is %s."), *Object->GetStringType());
	}	
	
	return nullptr;
}

UJsonObject* UJsonLibrary::LoadJsonFile(const FString& FilePath)
{
	FString Data;
	if (!FFileHelper::LoadFileToString(Data, *FilePath))
	{
		UE_LOG(LogBlueprintJson, Warning, TEXT("File %s not found."), *FilePath);
		return nullptr;
	}

	bool bSuccess = false;
	return UJsonObject::ParseJson(Data, bSuccess);
}

bool UJsonLibrary::StringifyJsonObject(UJsonObject* const Object, FString& OutJsonString)
{
	if (!Object)
	{
		UE_LOG(LogBlueprintJson, Error, TEXT("Passed null to StringifyJsonObject."));
		return false;
	}
	return StringifyJsonObject(Object->GetRawObject(), OutJsonString);
}

bool UJsonLibrary::StringifyJsonObject(const TSharedPtr<FJsonObject> Object, FString& OutJsonString)
{
	TSharedRef< TJsonWriter<> > Writer = TJsonWriterFactory<>::Create(&OutJsonString);
	return FJsonSerializer::Serialize(Object.ToSharedRef(), Writer);
}
