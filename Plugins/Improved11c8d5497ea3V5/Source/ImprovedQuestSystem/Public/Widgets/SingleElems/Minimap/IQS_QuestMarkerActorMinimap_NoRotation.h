// Copyright Butenko Evgeny Anatolevich w4ee44@gmail.com 2024

#pragma once
#include "Widgets/SingleElems/Minimap/IQS_MinimapMarkerBase.h"

#include "IQS_QuestMarkerActorMinimap_NoRotation.generated.h"

UCLASS(Blueprintable)
class IMPROVEDQUESTSYSTEM_API UIQS_QuestMarkerActorMinimap_NoRotation : public UIQS_MinimapMarkerBase
{
	GENERATED_BODY()

public:
	//<Methods>
	void UpdateStateCpp(const FVector& PlayerLoc, const FRotator& PlayerRot, const FVector& PlayerMinimapLoc) override;
	//</Methods>

	//<Variables>
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default", meta = (ExposeOnSpawn = "true"))
	AActor* ActorTargetCpp;
	//</Variables>
};

