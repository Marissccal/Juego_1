#include "Widgets/SingleElems/Compass/IQS_QuestCompassMarkerLocation.h"

// Copyright Evgeniy w4ee44@gmail.com
void UIQS_QuestCompassMarkerLocation::UpdateStateCpp(const FVector& PlayerLoc, const FRotator& PlayerRot, const FVector& PlayerMinimapLoc)
{
	APlayerController* PlayerContr = GetOwningPlayer();

	MarkerDistanceToPlayerCpp = FVector::Dist2D(PlayerLoc, LocationTargetCpp) * 0.01f;

	PlayerContr->ProjectWorldLocationToScreen(LocationTargetCpp, ScreenPositionCpp, true);
	
	SetPositionInViewport(ScreenPositionCpp);

	if (MarkerDistanceToPlayerCpp > 999.0f)
	{
		DistanceMarkerRef->SetText(FText::FromString("999m+"));
	}
	else
	{
#define LOCTEXT_NAMESPACE "UMG"
		FFormatNamedArguments Arguments;
		Arguments.Add(TEXT("Distance"), UKismetTextLibrary::Conv_DoubleToText(MarkerDistanceToPlayerCpp, ERoundingMode::HalfToEven, false, true, 1, 324, 0, 0));
		DistanceMarkerRef->SetText(FText::Format(LOCTEXT("Distance", "{Distance}m"), Arguments));
#undef LOCTEXT_NAMESPACE
	}

	bool IsC = false, IsSight = false;
	FVector2D Transition = CalcRotationCpp(PlayerContr->GetControlRotation(), UKismetMathLibrary::FindLookAtRotation(PlayerLoc, LocationTargetCpp), IsC, IsSight);
	if (IsSight)
	{
		SetRenderTranslation(Transition);
		SetVisibility(ESlateVisibility::SelfHitTestInvisible);
	}
	else
	{
		SetVisibility(ESlateVisibility::Hidden);
	}
}

void UIQS_QuestCompassMarkerLocation::CAC_Cpp(float X, float X1, ECompassComparisonResult& CompRes, float& DX, float& DY)
{
	float C1 = FMath::Fmod(X, 360.0f), C2 = FMath::Fmod(X1, 360.0f);
	DX = C1 - C2;
	DY = 360.0f - (C2 - C1);

	if (C1 > C2)
	{
		CompRes = ECompassComparisonResult::IsMore;
	}
	else
	{
		CompRes = ECompassComparisonResult::IsLess;
	}
}

void UIQS_QuestCompassMarkerLocation::CC_Cpp(float X, float Y, ECompassComparisonResult& CompRes, float& DX, float& DY)
{
	float C1 = FMath::Fmod(X, 360.0f), C2 = FMath::Fmod(Y, 360.0f);
	DX = 360.0f - (C1 - C2);
	DY = C2 - C1;

	if (C1 > C2)
	{
		CompRes = ECompassComparisonResult::IsMore;
	}
	else
	{
		CompRes = ECompassComparisonResult::IsLess;
	}
}

float UIQS_QuestCompassMarkerLocation::CalcD(float A, float B, bool Cl)
{
	ECompassComparisonResult NewCompRes = ECompassComparisonResult::IsMore;
	float DX = 0.0f, DY = 0.0f;

	if (Cl)
	{
		CAC_Cpp(A, B, NewCompRes, DX, DY);
		switch (NewCompRes)
		{
		case ECompassComparisonResult::IsMore:
			return DX;
		break;
		case ECompassComparisonResult::IsLess:
			return DY;
		break;
		default: //IsEqual
			return 0.0f;
		}
	}
	else
	{
		CC_Cpp(A, B, NewCompRes, DX, DY);
		switch (NewCompRes)
		{
		case ECompassComparisonResult::IsMore:
			return DX;
		break;
		case ECompassComparisonResult::IsLess:
			return DY;
		break;
		default: //IsEqual
			return 0.0f;
		}
	}
}

FVector2D UIQS_QuestCompassMarkerLocation::CalcRotationCpp(FRotator X, FRotator Y, bool& IsC, bool& IsSight)
{
	FVector2D ReturnValue = FVector2D::ZeroVector;

	float FovAngle = GetOwningPlayer()->PlayerCameraManager->GetFOVAngle();

	float A1 = DegreeRotCpp(X.Yaw),
		A2 = DegreeRotCpp(Y.Yaw),
		Input = CalcD(A1, A2, true),
		CompareWith = CalcD(A1, A2, false),
		C1 = Input / FovAngle,
		C2 = CompareWith / FovAngle;

	if (Input > CompareWith)
	{
		if (C2 <= 1.0f)
		{
			ReturnValue.X = FMath::Lerp(0.0f, CompTraMaxCpp, C2);
			IsC = false;
			IsSight = true;
		}
		else
		{
			IsC = false;
			IsSight = false;
		}
	}
	else
	{
		if (C1 <= 1.0f)
		{
			ReturnValue.X = -1.0f * FMath::Lerp(0.0f, CompTraMaxCpp, C1);
			IsC = true;
			IsSight = true;
		}
		else
		{
			IsC = true;
			IsSight = false;
		}
	}

	return ReturnValue;
}

float UIQS_QuestCompassMarkerLocation::DegreeRotCpp(float In)
{
	if (In < 0.0f)
	{
		return FMath::Fmod((In + 360.0f), 360.0f);
	}
	else
	{
		return In;
	}
}
