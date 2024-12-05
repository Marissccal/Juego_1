// Copyright Butenko Evgeny Anatolevich w4ee44@gmail.com 2024

#pragma once
#include "Widgets/SingleElems/IQS_QuestMarkerBase.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Structure/IQS_Types.h"

#include "IQS_QuestCompassMarkerActor.generated.h"

UCLASS(Blueprintable)
class IMPROVEDQUESTSYSTEM_API UIQS_QuestCompassMarkerActor : public UIQS_QuestMarkerBase
{
	GENERATED_BODY()

public:
	//<Methods>
	void UpdateStateCpp(const FVector& PlayerLoc, const FRotator& PlayerRot, const FVector& PlayerMinimapLoc) override;

	void UpdateStateWithCheckCpp(const FVector& PlayerLoc, const FRotator& PlayerRot, const FVector& PlayerMinimapLoc) override;

	FVector2D CalcRotationCpp(FRotator X, FRotator Y, bool& IsC, bool& IsSight);

	float DegreeRotCpp(float In);

	float CalcD(float A, float B, bool Cl);

	void CAC_Cpp(float X, float X1, ECompassComparisonResult& CompRes, float& DX, float& DY);

	void CC_Cpp(float X, float Y, ECompassComparisonResult& CompRes, float& DX, float& DY);
	//</Methods>

	//<Variables>
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default", meta = (ExposeOnSpawn = "true"))
	AActor* ActorTargetCpp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default", meta = (ExposeOnSpawn = "true"))
	bool IsWorldActorCpp = false;

	UPROPERTY(BlueprintReadWrite, Category = "Default")
	UTextBlock* DistanceMarkerRef;

	float MarkerDistanceToPlayerCpp = 0.0f;
	float CompTraMaxCpp = 270.0f;
	FVector2D ScreenPositionCpp;

	//</Variables>
};

