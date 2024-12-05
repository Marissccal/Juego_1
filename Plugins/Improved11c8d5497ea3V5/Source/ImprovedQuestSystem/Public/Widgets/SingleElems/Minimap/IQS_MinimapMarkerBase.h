// Copyright Butenko Evgeny Anatolevich w4ee44@gmail.com 2024

#pragma once
#include "Widgets/SingleElems/IQS_QuestMarkerBase.h"
#include "Components/CanvasPanelSlot.h"
#include "Kismet/KismetMathLibrary.h"

#include "IQS_MinimapMarkerBase.generated.h"

UCLASS(Blueprintable)
class IMPROVEDQUESTSYSTEM_API UIQS_MinimapMarkerBase : public UIQS_QuestMarkerBase
{
	GENERATED_BODY()

public:
	//<Methods>
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Default")
	void ShowPopUpAnimCpp_BP();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Default")
	void SetIconOpacityCpp_BP(float NewOpacity);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Default")
	void AddMinimapMarkScaleCpp_BP(float NewAddmarkScale);

	UFUNCTION(BlueprintCallable, Category = "Default")
	void SetNewMinimapMarkDistanceLimitCpp(float NewMinimapMarkDistanceLimit);
	//</Methods>

	//<Variables>
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
	float baseMinimapCoordCenter_X_Cpp = 0.0f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
	float baseMinimapCoordCenter_Y_Cpp = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
	float minimapScaleAdditionalCoefCpp = 1.0f;

	float minimapMarkDistanceLimitCpp = 90.0f,
		DistanceCpp = 0.0f,
		X_PositionCpp = 0.0f, 
		Y_PositionCpp = 0.0f;

	UPROPERTY(EditAnywhere, Category = "Default")
	UMaterialParameterCollection* MP_MinimapRef;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default", meta = (ExposeOnSpawn = "true"))
	bool isZoneMapEnabledCpp = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
	UCanvasPanelSlot* CanvasSlotCpp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default", meta = (ExposeOnSpawn = "true"))
	FVector2D MinimapWidgetSizeCpp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default", meta = (ExposeOnSpawn = "true"))
	float MinimapMarksScaleCpp = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default", meta = (ExposeOnSpawn = "true"))
	float MinimapMarksRotatorCpp = 0.0f;
	//</Variables>
};

