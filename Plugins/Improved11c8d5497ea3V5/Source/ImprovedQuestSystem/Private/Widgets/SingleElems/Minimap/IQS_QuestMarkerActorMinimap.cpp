#include "Widgets/SingleElems/Minimap/IQS_QuestMarkerActorMinimap.h"

// Copyright Evgeniy w4ee44@gmail.com

void UIQS_QuestMarkerActorMinimap::UpdateStateCpp(const FVector& PlayerLoc, const FRotator& PlayerRot, const FVector& PlayerMinimapLoc)
{
	if (IsValid(ActorTargetCpp))
	{
		DistanceCpp = FVector::Dist2D(PlayerMinimapLoc, ActorTargetCpp->GetActorLocation()) * MinimapMarksScaleCpp * minimapScaleAdditionalCoefCpp;
		if (DistanceCpp > minimapMarkDistanceLimitCpp)
		{
			DistanceCpp = minimapMarkDistanceLimitCpp;
		}
		float MarkRotation = ((-1 * PlayerRot) + UKismetMathLibrary::FindLookAtRotation(PlayerMinimapLoc, ActorTargetCpp->GetActorLocation())).Yaw + MinimapMarksRotatorCpp;

		X_PositionCpp = UKismetMathLibrary::DegCos(MarkRotation) * DistanceCpp + baseMinimapCoordCenter_X_Cpp;
		Y_PositionCpp = UKismetMathLibrary::DegSin(MarkRotation) * DistanceCpp + baseMinimapCoordCenter_Y_Cpp;

		CanvasSlotCpp->SetPosition(FVector2D(X_PositionCpp, Y_PositionCpp));
	}
	else
	{
		if (!IsRemovedCpp)
		{
			SetVisibility(ESlateVisibility::Hidden);
			RemoveFromParent();
			IsRemovedCpp = true;
		}
	}
}