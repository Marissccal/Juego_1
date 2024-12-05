#include "Widgets/SingleElems/Minimap/IQS_PlayerMarker.h"

// Copyright Evgeniy w4ee44@gmail.com

void UIQS_PlayerMarker::UpdateStateCpp(const FVector& PlayerLoc, const FRotator& PlayerRot, const FVector& PlayerMinimapLoc)
{
	if(IsValid(ActorTargetCpp))
	{
		DistanceCpp = FVector::Dist2D(PlayerMinimapLoc, ActorTargetCpp->GetActorLocation()) * MinimapMarksScaleCpp * minimapScaleAdditionalCoefCpp;
		float MarkRotation = UKismetMathLibrary::FindLookAtRotation(PlayerMinimapLoc, ActorTargetCpp->GetActorLocation()).Yaw + MinimapMarksRotatorCpp;

		X_PositionCpp = UKismetMathLibrary::Clamp(UKismetMathLibrary::DegCos(MarkRotation) * DistanceCpp + baseMinimapCoordCenter_X_Cpp, 0.0f, 800.0f);
		Y_PositionCpp = UKismetMathLibrary::Clamp(UKismetMathLibrary::DegSin(MarkRotation) * DistanceCpp + baseMinimapCoordCenter_Y_Cpp, 0.0f, 800.0f);

		CanvasSlotCpp->SetPosition(FVector2D(X_PositionCpp, Y_PositionCpp));
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
