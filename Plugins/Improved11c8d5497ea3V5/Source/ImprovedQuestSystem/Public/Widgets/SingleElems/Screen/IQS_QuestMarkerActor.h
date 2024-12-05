// Copyright Butenko Evgeny Anatolevich w4ee44@gmail.com 2024

#pragma once

#include "Widgets/SingleElems/IQS_QuestMarkerBase.h"
#include "Kismet/GameplayStatics.h"
#include "Interface/IQS_QuestObjectiveInterfaceCpp.h"

#include "IQS_QuestMarkerActor.generated.h"

UCLASS(Blueprintable)
class IMPROVEDQUESTSYSTEM_API UIQS_QuestMarkerActor : public UIQS_QuestMarkerBase
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
	AActor* ActorTargetCpp;

	float MarkerDistanceToPlayerCpp = 0.0f;
	FVector2D ScreenPositionCpp;
	//</Variables>
};

