// Copyright Pandores Marketplace 2021. All Rights Reserved.

#pragma once

#include "K2Node.h"
#include "BlueprintJsonEditorNodes.generated.h"

/**
 *	K2 Node accepting a wild card to easily add a field to a JSON object.
 **/
UCLASS(BlueprintType, Blueprintable)
class BLUEPRINTJSONEDITOR_API UK2Node_AddFieldToJsonObject : public UK2Node
{
	GENERATED_BODY()
public:
	UK2Node_AddFieldToJsonObject(const FObjectInitializer& OI);

	virtual void GetMenuActions(FBlueprintActionDatabaseRegistrar& ActionRegistrar) const override;
	virtual void AllocateDefaultPins() override;
	virtual FLinearColor GetNodeTitleColor() const override;
	virtual void ExpandNode(class FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph) override;
	virtual FText GetMenuCategory() const override;
	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
	virtual FText GetTooltipText() const override;
	virtual void PinDefaultValueChanged(UEdGraphPin* const Pin) override;
	virtual void NotifyPinConnectionListChanged(UEdGraphPin* Pin) override;
	virtual void ReallocatePinsDuringReconstruction(TArray<UEdGraphPin*>& OldPins);
	virtual bool IsConnectionDisallowed(const UEdGraphPin* const MyPin, const UEdGraphPin* const OtherPin, FString& OutReason) const override;

private:
	UEdGraphPin* GetJsonObjectPin();
	UEdGraphPin* GetFieldNamePin();
	UEdGraphPin* GetFieldValuePin();

	UFunction* GetMatchingFunction(class FKismetCompilerContext& CompilerContext);

	bool IsValidValueType(const UEdGraphPin* const Pin, FString& OutReason) const;
	bool IsSupportedStructType(const FString& Type) const;

	void UpdateFieldValuePin();
};


/**
 *	K2 Node iterating over the fields of a JSON object.
 **-/
UCLASS(BlueprintType, Blueprintable)
class BLUEPRINTJSONEDITOR_API UK2Node_ForEachFieldJsonObject : public UK2Node
{
	GENERATED_BODY()
public:
	UK2Node_ForEachFieldJsonObject(const FObjectInitializer& OI) : Super(OI) {};

	virtual void GetMenuActions(FBlueprintActionDatabaseRegistrar& ActionRegistrar) const override;
	virtual void AllocateDefaultPins() override;
	virtual FLinearColor GetNodeTitleColor() const override;
	virtual FText GetMenuCategory() const override;
	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
	virtual FText GetTooltipText() const override;
	virtual void PinDefaultValueChanged(UEdGraphPin* const Pin) override;
	virtual void NotifyPinConnectionListChanged(UEdGraphPin* Pin) override;
	virtual void ReallocatePinsDuringReconstruction(TArray<UEdGraphPin*>& OldPins);

	virtual class FNodeHandlingFunctor* CreateNodeHandler(class FKismetCompilerContext& CompilerContext) const override;

private:
	UEdGraphPin* GetJsonObjectPin();
	UEdGraphPin* GetFieldNamePin();
	UEdGraphPin* GetFieldValuePin();
	UEdGraphPin* GetLoopBodyPin();
	UEdGraphPin* GetCompletedPin();
};
*/
