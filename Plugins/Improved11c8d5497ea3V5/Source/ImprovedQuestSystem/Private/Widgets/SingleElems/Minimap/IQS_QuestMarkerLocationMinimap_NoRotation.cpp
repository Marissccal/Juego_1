#include "Widgets/SingleElems/Minimap/IQS_QuestMarkerLocationMinimap_NoRotation.h"

// Copyright Evgeniy w4ee44@gmail.com

void UIQS_QuestMarkerLocationMinimap_NoRotation::UpdateStateCpp(const FVector& PlayerLoc, const FRotator& PlayerRot, const FVector& PlayerMinimapLoc)
{
	DistanceCpp = FVector::Dist2D(PlayerMinimapLoc, LocationTargetCpp) * MinimapMarksScaleCpp * minimapScaleAdditionalCoefCpp;
	if (DistanceCpp > minimapMarkDistanceLimitCpp)
	{
		DistanceCpp = minimapMarkDistanceLimitCpp;
	}
	float MarkRotation = UKismetMathLibrary::FindLookAtRotation(PlayerMinimapLoc, LocationTargetCpp).Yaw + MinimapMarksRotatorCpp;

	X_PositionCpp = UKismetMathLibrary::DegCos(MarkRotation) * DistanceCpp + baseMinimapCoordCenter_X_Cpp;
	Y_PositionCpp = UKismetMathLibrary::DegSin(MarkRotation) * DistanceCpp + baseMinimapCoordCenter_Y_Cpp;

	CanvasSlotCpp->SetPosition(FVector2D(X_PositionCpp, Y_PositionCpp));
}