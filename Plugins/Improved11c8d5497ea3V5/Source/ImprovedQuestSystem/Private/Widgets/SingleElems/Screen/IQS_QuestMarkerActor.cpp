#include "Widgets/SingleElems/Screen/IQS_QuestMarkerActor.h"

// Copyright Evgeniy w4ee44@gmail.com

void UIQS_QuestMarkerActor::UpdateStateCpp(const FVector& PlayerLoc, const FRotator& PlayerRot, const FVector& PlayerMinimapLoc)
{
	APlayerController* PlayerContr = GetOwningPlayer();
	if (IsValid(ActorTargetCpp))
	{
		MarkerDistanceToPlayerCpp = FVector::Dist2D(PlayerLoc, ActorTargetCpp->GetActorLocation()) * 0.01f;
		FVector WorldPos;

		IIQS_QuestObjectiveInterfaceCpp* QuestObjectiveInterface = Cast<IIQS_QuestObjectiveInterfaceCpp>(ActorTargetCpp);
		if(UKismetSystemLibrary::DoesImplementInterface(ActorTargetCpp, UIQS_QuestObjectiveInterfaceCpp::StaticClass()))
		{	
			WorldPos = IIQS_QuestObjectiveInterfaceCpp::Execute_GetQuestObjectiveOffsetCpp(ActorTargetCpp);
		}
		else
		{
			WorldPos = ActorTargetCpp->GetActorLocation();
		}

		if (UGameplayStatics::ProjectWorldToScreen(PlayerContr, WorldPos, ScreenPositionCpp, true))
		{
			SetVisibility(ESlateVisibility::Visible);
		}
		else
		{
			SetVisibility(ESlateVisibility::Hidden);
		}
		SetPositionInViewport(ScreenPositionCpp);

#define LOCTEXT_NAMESPACE "UMG"
		FFormatNamedArguments Arguments;
		Arguments.Add(TEXT("Distance"), UKismetTextLibrary::Conv_DoubleToText(MarkerDistanceToPlayerCpp, ERoundingMode::HalfToEven, false, true, 1, 324, 0, 0));
		DistanceMarkerRef->SetText(FText::Format(LOCTEXT("Distance", "{Distance}m"), Arguments));
#undef LOCTEXT_NAMESPACE
	}
	else
	{
		if (!IsRemovedCpp)
		{
			TimedRemove_BP();
			IsRemovedCpp = true;
		}
	}
}