// Copyright Butenko Evgeny Anatolevich w4ee44@gmail.com 2023

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "IQS_RewardActor.generated.h"

UCLASS(Blueprintable)
class IMPROVEDQUESTSYSTEM_API AIQS_RewardActor : public AActor
{
	GENERATED_BODY()

public:
	AIQS_RewardActor();

	UFUNCTION()
	void BeginPlay() override;

	UFUNCTION(BlueprintNativeEvent, Category = "Overridable Functions")
	void GetReward();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
	float NewLifeTime = 5.0f;

	
};

