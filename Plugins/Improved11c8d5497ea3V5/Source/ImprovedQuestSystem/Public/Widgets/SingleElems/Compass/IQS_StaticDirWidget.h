// Copyright Butenko Evgeny Anatolevich w4ee44@gmail.com 2024

#pragma once

#include "CoreMinimal.h"

#include "Blueprint/UserWidget.h"
#include "Structure/IQS_Types.h"

#include "IQS_StaticDirWidget.generated.h"

UCLASS(Blueprintable)
class IMPROVEDQUESTSYSTEM_API UIQS_StaticDirWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	//<Variables>
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default", meta = (ExposeOnSpawn = "true"))
	FDirectionInfo DirectionInfoCpp;

	//</Variables>
};

