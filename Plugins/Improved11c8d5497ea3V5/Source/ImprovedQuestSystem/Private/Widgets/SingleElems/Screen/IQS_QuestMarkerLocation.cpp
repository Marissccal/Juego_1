#include "Widgets/SingleElems/Screen/IQS_QuestMarkerLocation.h"

// Copyright Evgeniy w4ee44@gmail.com

void UIQS_QuestMarkerLocation::UpdateStateCpp(const FVector& PlayerLoc, const FRotator& PlayerRot, const FVector& PlayerMinimapLoc)
{
	APlayerController* PlayerContr = GetOwningPlayer();
	MarkerDistanceToPlayerCpp = FVector::Distance(PlayerLoc, LocationTargetCpp) * 0.01f;

	if (UGameplayStatics::ProjectWorldToScreen(PlayerContr, LocationTargetCpp, ScreenPositionCpp, true))
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