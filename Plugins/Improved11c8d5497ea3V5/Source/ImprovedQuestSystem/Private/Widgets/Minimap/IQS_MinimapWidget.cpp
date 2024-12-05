#include "Widgets/Minimap/IQS_MinimapWidget.h"

// Copyright Evgeniy w4ee44@gmail.com

void UIQS_MinimapWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	APawn* PlayerActor = GetOwningPlayerPawn();
	if (PlayerActor)
	{
		const FVector PlayerLoc = PlayerActor->GetActorLocation();
		float PlayerYaw = PlayerActor->GetActorRotation().Yaw;
		if (PlayerYaw < 0.0f)
		{
			PlayerYaw += 360.0f;
		}
		PlayerYaw /= 360.0f;
		UKismetMaterialLibrary::SetScalarParameterValue(GetWorld(), MP_MinimapRef, FName("Player Yaw"), PlayerYaw);
		if (IsZonemapEnabledCpp)
		{
			UKismetMaterialLibrary::SetVectorParameterValue(GetWorld(), MP_MinimapRef, FName("Player Location"), FLinearColor(halfWorldSizeXMinusOffsetCpp, halfWorldSizeYMinusOffsetCpp, 0.0f));
		}
		else
		{
			UKismetMaterialLibrary::SetVectorParameterValue(GetWorld(), MP_MinimapRef, FName("Player Location"), FLinearColor(PlayerLoc));
		}
	}
}
