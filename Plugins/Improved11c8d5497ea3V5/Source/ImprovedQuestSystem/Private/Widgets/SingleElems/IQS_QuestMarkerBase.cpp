#include "Widgets/SingleElems/IQS_QuestMarkerBase.h"

// Copyright Evgeniy w4ee44@gmail.com

void UIQS_QuestMarkerBase::UpdateStateCpp(const FVector& PlayerLoc, const FRotator& PlayerRot, const FVector& PlayerMinimapLoc)
{
	//Override
}

void UIQS_QuestMarkerBase::UpdateStateWithCheckCpp(const FVector& PlayerLoc, const FRotator& PlayerRot, const FVector& PlayerMinimapLoc)
{
	//Override
}

void UIQS_QuestMarkerBase::TimedRemoveCpp()
{
	TimedRemove_BP();
}

void UIQS_QuestMarkerBase::RemoveQuestMarkByActor_BP_Implementation()
{
	//In BP
}

void UIQS_QuestMarkerBase::TimedRemove_BP_Implementation()
{
	//In BP
}