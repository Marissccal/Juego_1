// Copyright Butenko Evgeny Anatolevich w4ee44@gmail.com 2023

#include "RewardActor/IQS_RewardActor.h"

AIQS_RewardActor::AIQS_RewardActor()
{
	
}

void AIQS_RewardActor::BeginPlay()
{
	Super::BeginPlay();
	GetReward();
	SetLifeSpan(NewLifeTime);
}


void AIQS_RewardActor::GetReward_Implementation()
{
	//override
}