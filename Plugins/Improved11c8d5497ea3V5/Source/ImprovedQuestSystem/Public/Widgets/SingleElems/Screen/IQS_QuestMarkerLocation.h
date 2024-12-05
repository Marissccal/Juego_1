// Copyright Butenko Evgeny Anatolevich w4ee44@gmail.com 2024

#pragma once
#include "Widgets/SingleElems/IQS_QuestMarkerBase.h"
#include "Kismet/GameplayStatics.h"

#include "IQS_QuestMarkerLocation.generated.h"

UCLASS(Blueprintable)
class IMPROVEDQUESTSYSTEM_API UIQS_QuestMarkerLocation : public UIQS_QuestMarkerBase
{
	GENERATED_BODY()

public:
	//<Methods>
	void UpdateStateCpp(const FVector& PlayerLoc, const FRotator& PlayerRot, const FVector& PlayerMinimapLoc) override;
	//</Methods>

	//<Variables>
	UPROPERTY(BlueprintReadWrite, Category = "Default")
	UTextBlock* DistanceMarkerRef;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default", meta = (ExposeOnSpawn = "true"))
	FVector LocationTargetCpp;

	float MarkerDistanceToPlayerCpp = 0.0f;
	FVector2D ScreenPositionCpp;
	//</Variables>
};

