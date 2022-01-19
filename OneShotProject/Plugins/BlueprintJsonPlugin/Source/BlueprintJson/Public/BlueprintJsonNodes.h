// Copyright Pandores Marketplace 2021. All Rights Reserved.

#pragma once

#include "Async/Future.h"
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "Async/Async.h"
#include "BlueprintJsonNodes.generated.h"

class UJsonObject;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FJsonLoadingEvent, UJsonObject* const, JsonObject);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FJsonSaveEvent);

/**
 *  Base class for asynchronous json loading.
 **/
UCLASS(Abstract)
class UJsonLoadAsyncProxyBase : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
public:
    /* Called when the JSON has successfully been parsed. */
    UPROPERTY(BlueprintAssignable)
    FJsonLoadingEvent Success;

    /* Called when an error happened while parsing loading or parsing JSON */
    UPROPERTY(BlueprintAssignable)
    FJsonLoadingEvent Failed;

    
protected:
    template<class T>
    static void OnJsonParsed(TWeakObjectPtr<T> Self)
    {
        AsyncTask(ENamedThreads::GameThread, [Self = MoveTemp(Self)]()
        {
            if (Self.IsValid())
            {
                T* const Proxy = Self.Get();
                if (Proxy->JsonObject.IsReady())
                {
                    UJsonObject* const Json = Proxy->JsonObject.Get();

                    if (Json)
                    {
                        Proxy->Success.Broadcast(Json);
                    }
                    else
                    {
                        Proxy->Failed.Broadcast(nullptr);
                    }
                }
                else
                {
                    Proxy->Failed.Broadcast(nullptr);
                }
                Proxy->SetReadyToDestroy();
            }
        });
    }

    TFuture<UJsonObject*> JsonObject;
};

/**
 *  Asynchronous node to load Json directly from a file.
 **/
UCLASS()
class UJsonLoadAsyncFromFileProxy final : public UJsonLoadAsyncProxyBase
{
    GENERATED_BODY()
public:
    /* Load a JSON file and parse it asynchronously outside of the Game Thread. */
    UFUNCTION(BlueprintCallable, Category = JSON, meta = (BlueprintInternalUseOnly = "true", DisplayName = "Load JSON File Async"))
    static UJsonLoadAsyncFromFileProxy* LoadJsonFileAsync(const FString& FilePath);
    
    virtual void Activate();
private:
    FString FilePath;
};
 
/**
 *  Asynchronous node to parse Json.
 **/
UCLASS()
class UJsonParseAsyncProxy final : public UJsonLoadAsyncProxyBase
{
    GENERATED_BODY()
public:
    /* Parse JSON string to a JSON Object asynchronously outside of the Game Thread. */
    UFUNCTION(BlueprintCallable, Category = JSON, meta = (BlueprintInternalUseOnly = "true", DisplayName = "Parse JSON Async"))
    static UJsonParseAsyncProxy* ParseJsonAsync(const FString& Json);
};

/**
 *  Base class for asynchronous json loading.
 **/
UCLASS()
class UJsonSaveAsyncProxy final : public UBlueprintAsyncActionBase
{
    GENERATED_BODY()
public:
    /* Called when the JSON has successfully been saved. */
    UPROPERTY(BlueprintAssignable)
    FJsonSaveEvent Success;

    /* Called when an error happened while saving JSON */
    UPROPERTY(BlueprintAssignable)
    FJsonSaveEvent Failed;

    /* Save the JSON object to a file asynchronously outside of the Game Thead. */
    UFUNCTION(BlueprintCallable, Category = JSON, meta = (BlueprintInternalUseOnly = "true", DisplayName = "Save JSON to File Async"))
    static UJsonSaveAsyncProxy* SaveJsonToFileAsync(const FString& FilePath, UJsonObject* const ObjectToSave);

    virtual void Activate();

private:
    static void SaveStringToFile(TWeakObjectPtr<UJsonSaveAsyncProxy> Self, const FString& Data, const FString & Path, bool bSuccess);

    FString FilePath;

    UPROPERTY()
    UJsonObject* ObjectToSave;
};


