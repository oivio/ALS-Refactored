#pragma once

#include "GameplayTagContainer.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AlsAnimNotifyState_SetLocomotionAction.generated.h"

UCLASS(DisplayName = "Als Set Locomotion Action Animation Notify State", Meta = (ShowWorldContextPin))
class ALS_API UAlsAnimNotifyState_SetLocomotionAction : public UAnimNotifyState
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Settings", Meta = (AllowPrivateAccess))
	FGameplayTag LocomotionAction;

public:
	UAlsAnimNotifyState_SetLocomotionAction();

	virtual FString GetNotifyName_Implementation() const override;

	virtual void NotifyBegin(USkeletalMeshComponent* Mesh, UAnimSequenceBase* Animation,
	                         float TotalDuration, const FAnimNotifyEventReference& EventReference) override;

	virtual void NotifyEnd(USkeletalMeshComponent* Mesh, UAnimSequenceBase* Animation,
	                       const FAnimNotifyEventReference& EventReference) override;
};
