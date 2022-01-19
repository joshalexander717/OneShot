// Copyright Pandores Marketplace 2021. All Rights Reserved.

#include "BlueprintJsonNodes.h"
#include "BlueprintJson.h"
#include "BlueprintJsonWrapper.h"
#include "BlueprintJsonLibrary.h"
#include "Async/TaskGraphInterfaces.h"
#include "Async/Async.h"
#include "Misc/FileHelper.h"


void UJsonLoadAsyncFromFileProxy::Activate()
{
	if (FilePath.IsEmpty())
	{
		UE_LOG(LogBlueprintJson, Warning, TEXT("LoadJsonFileAsync: Can't load file because FilePath is empty."));
		Failed.Broadcast(nullptr);
		SetReadyToDestroy();
	}

	else
	{
		TWeakObjectPtr<ThisClass> Self = this;
		JsonObject = Async(EAsyncExecution::ThreadPool, [Self, FilePath = MoveTemp(this->FilePath)]() -> UJsonObject* {
			return UJsonLibrary::LoadJsonFile(FilePath);
		}, [Self]() {
			OnJsonParsed(Self);
		});
	}
}

/* static */ UJsonLoadAsyncFromFileProxy* UJsonLoadAsyncFromFileProxy::LoadJsonFileAsync(const FString& FilePath)
{
	UJsonLoadAsyncFromFileProxy* const Proxy = NewObject<UJsonLoadAsyncFromFileProxy>();

	Proxy->FilePath = FilePath;

	return Proxy;
}

/* static */ UJsonParseAsyncProxy* UJsonParseAsyncProxy::ParseJsonAsync(const FString& Json)
{
	UJsonParseAsyncProxy* const Proxy = NewObject<UJsonParseAsyncProxy>();

	if (Json.IsEmpty())
	{
		UE_LOG(LogBlueprintJson, Warning, TEXT("ParseJsonAsync: Can't parse JSON because Json is empty."));
		Proxy->Failed.Broadcast(nullptr);
		Proxy->SetReadyToDestroy();
	}

	else
	{
		TWeakObjectPtr<ThisClass> Self = Proxy;
		Proxy->JsonObject = Async(EAsyncExecution::ThreadPool, [Json]() -> UJsonObject* {
			bool bSuccess = false;
			return UJsonObject::ParseJson(Json, bSuccess);
		}, [Self]() {
			OnJsonParsed(Self);
		});
	}

	return Proxy;
}

/* static */ UJsonSaveAsyncProxy* UJsonSaveAsyncProxy::SaveJsonToFileAsync(const FString& FilePath, UJsonObject* const ObjectToSave)
{
	UJsonSaveAsyncProxy* const Proxy = NewObject<UJsonSaveAsyncProxy>();

	Proxy->FilePath = FilePath;
	Proxy->ObjectToSave = ObjectToSave;

	return Proxy;
}

void UJsonSaveAsyncProxy::Activate()
{
	if (FilePath.IsEmpty() || !ObjectToSave)
	{
		UE_LOG(LogBlueprintJson, Warning, TEXT("SaveJsonToFileAsync: Can't save JSON because FilePath is empty or the object is null."));
		Failed.Broadcast();
		SetReadyToDestroy();
	}

	else
	{
		TWeakObjectPtr<UJsonSaveAsyncProxy> Self = this;
		TSharedPtr<FJsonObject> RawObject = ObjectToSave->GetRawObject();
		AsyncTask(ENamedThreads::AnyThread, [FilePath = MoveTemp(this->FilePath), RawObject = MoveTemp(RawObject), Self = MoveTemp(Self)]() mutable -> void
		{
			FString Data;
			const bool bSuccess = UJsonLibrary::StringifyJsonObject(RawObject, Data);
			SaveStringToFile(MoveTemp(Self), Data, FilePath, bSuccess);
		});
	}
}

void UJsonSaveAsyncProxy::SaveStringToFile(TWeakObjectPtr<UJsonSaveAsyncProxy> Self, const FString& Data, const FString& Path, bool bSuccess)
{
	if (bSuccess)
	{
		bSuccess = FFileHelper::SaveStringToFile(Data, *Path);
	}
	
	AsyncTask(ENamedThreads::GameThread, [Self, bSuccess]() -> void
	{
		if (Self.IsValid())
		{
			(bSuccess ? Self->Success : Self->Failed).Broadcast();
			Self->SetReadyToDestroy();
		}		
	});
}
	