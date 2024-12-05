// Copyright Butenko Evgeny Anatolevich w4ee44@gmail.com 2024

#pragma once
#include "Widgets/SingleElems/Minimap/IQS_MinimapMarkerBase.h"

#include "IQS_QuestMarkerLocationMinimap.generated.h"

UCLASS(Blueprintable)
class IMPROVEDQUESTSYSTEM_API UIQS_QuestMarkerLocationMinimap : public UIQS_MinimapMarkerBase
{
	GENERATED_BODY()

public:
	//<Methods>
	void UpdateStateCpp(const FVector& PlayerLoc, const FRotator& PlayerRot, const FVector& PlayerMinimapLoc) override;

	//void UpdateStateWithCheckCpp(const FVector& PlayerLoc, const FRotator& PlayerRot, const FVector& PlayerMinimapLoc) override;
	//</Methods>

	//<Variables>
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default", meta = (ExposeOnSpawn = "true"))
	FVector LocationTargetCpp;
	//</Variables>
};

