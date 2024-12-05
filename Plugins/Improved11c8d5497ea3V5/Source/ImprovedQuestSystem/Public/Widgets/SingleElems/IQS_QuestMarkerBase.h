// Copyright Butenko Evgeny Anatolevich w4ee44@gmail.com 2024

#pragma once

#include "CoreMinimal.h"

#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "Kismet/KismetTextLibrary.h"

#include "IQS_QuestMarkerBase.generated.h"

UCLASS(Blueprintable)
class IMPROVEDQUESTSYSTEM_API UIQS_QuestMarkerBase : public UUserWidget
{
	GENERATED_BODY()

public:
	//<Methods>
	virtual void UpdateStateCpp(const FVector& PlayerLoc, const FRotator& PlayerRot, const FVector& PlayerMinimapLoc);

	virtual void UpdateStateWithCheckCpp(const FVector& PlayerLoc, const FRotator& PlayerRot, const FVector& PlayerMinimapLoc);

	UFUNCTION(BlueprintCallable, Category = "Default")
	virtual void TimedRemoveCpp();

	UFUNCTION(BlueprintNativeEvent, Category = "Default")
	void TimedRemove_BP();

	UFUNCTION(BlueprintNativeEvent, Category = "Default")
	void RemoveQuestMarkByActor_BP();
	//</Methods>

	//<Variables>
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
	bool IsRemovedCpp = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default", meta = (ExposeOnSpawn = "true"))
	bool WillDoAnimCpp = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
	float DistanceToHideCpp = -1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
	FText MarkerAboutCpp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default", meta = (ExposeOnSpawn = "true"))
	FName QuestIdCpp;
	//</Variables>

};

