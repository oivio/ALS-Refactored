#pragma once

#include "AnimGraphNode_Base.h"
#include "Node/AlsAnimNode_SuppressAdditiveWarnings.h"
#include "AlsAnimGraphNode_SuppressAdditiveWarnings.generated.h"

UCLASS()
class ALSEDITOR_API UAlsAnimGraphNode_SuppressAdditiveWarnings : public UAnimGraphNode_Base
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Settings", Meta = (AllowPrivateAccess))
	FAlsAnimNode_SuppressAdditiveWarnings Node;

public:
	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;

	virtual FLinearColor GetNodeTitleColor() const override;

	virtual FText GetTooltipText() const override;

	virtual FString GetNodeCategory() const override;

	virtual void PostProcessPinName(const UEdGraphPin* Pin, FString& DisplayName) const override;
};
