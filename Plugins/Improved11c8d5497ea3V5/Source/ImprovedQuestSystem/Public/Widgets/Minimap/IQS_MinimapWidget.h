// Copyright Butenko Evgeny Anatolevich w4ee44@gmail.com 2024

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GameFramework/Pawn.h"
#include "Kismet/KismetMaterialLibrary.h"

#include "IQS_MinimapWidget.generated.h"

UCLASS(Blueprintable)
class IMPROVEDQUESTSYSTEM_API UIQS_MinimapWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	//<Variables>
	UPROPERTY(EditAnywhere, Category = "Default")
	UMaterialParameterCollection* MP_MinimapRef;

	UPROPERTY(BlueprintReadWrite, Category = "Default")
	bool IsZonemapEnabledCpp = false;
	
	UPROPERTY(BlueprintReadWrite, Category = "Default")
	float halfWorldSizeXMinusOffsetCpp;

	UPROPERTY(BlueprintReadWrite, Category = "Default")
	float halfWorldSizeYMinusOffsetCpp;
	//</Variables>

	//<Methods>
	void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

	//</Methods>
};

