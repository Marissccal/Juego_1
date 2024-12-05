// Copyright Butenko Evgeny Anatolevich w4ee44@gmail.com 2024

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"

#include "IQS_QuestObjectiveInterfaceCpp.generated.h"

//UINTERFACE(meta = (CannotImplementInterfaceInBlueprint))
UINTERFACE(MinimalAPI, Blueprintable)
class UIQS_QuestObjectiveInterfaceCpp : public UInterface
{
	GENERATED_BODY()
};

class IIQS_QuestObjectiveInterfaceCpp
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "IQS_QuestObjective")
	FVector GetQuestObjectiveOffsetCpp();
};