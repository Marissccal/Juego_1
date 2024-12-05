// Copyright Butenko Evgeny Anatolevich w4ee44@gmail.com 2024

#pragma once

#include "CoreMinimal.h"

#include "Blueprint/UserWidget.h"
#include "Widgets/SingleElems/Compass/IQS_StaticDirWidget.h"
#include "Structure/IQS_Types.h"
#include "Widgets/SingleElems/IQS_QuestMarkerBase.h"
#include "GameFramework/PlayerController.h"
#include "Camera/PlayerCameraManager.h"
#include "GameFramework/Pawn.h"

#include "IQS_CompassWidget.generated.h"

UCLASS(Blueprintable)
class IMPROVEDQUESTSYSTEM_API UIQS_CompassWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	//<Variables>
	UPROPERTY(BlueprintReadWrite, Category = "Default")
	bool IsCompassVisCpp = true;

	UPROPERTY(BlueprintReadWrite, Category = "Default")
	bool IsCompassActiCpp = false;

	UPROPERTY(BlueprintReadWrite, Category = "Default")
	TArray<UIQS_StaticDirWidget*> DirsCpp;

	UPROPERTY(BlueprintReadWrite, Category = "Default")
	TArray<UIQS_QuestMarkerBase*> CompassMarkersCpp;

	UPROPERTY(BlueprintReadWrite, Category = "Default")
	TArray<UIQS_QuestMarkerBase*> WorldActorsOnCompassMarkersCpp;

	float CompTraMaxCpp = 270.0f;

	//</Variables>

	//<Methods>
	void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

	void UpdateStaticMarkersCpp();

	void UpdateDynamicMarkersCpp();

	FVector2D CalcRotationCpp(FRotator X, FRotator Y, bool& IsC, bool& IsSight);

	float DegreeRotCpp(float In);

	float CalcD(float A, float B, bool Cl);

	void CAC_Cpp(float X, float X1, ECompassComparisonResult& CompRes, float& DX, float& DY);

	void CC_Cpp(float X, float Y, ECompassComparisonResult& CompRes, float& DX, float& DY);
	//</Methods>
};

