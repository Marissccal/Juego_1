#include "Widgets/Compass/IQS_CompassWidget.h"

// Copyright Evgeniy w4ee44@gmail.com

void UIQS_CompassWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	if (IsValid(GetOwningPlayerPawn()))
	{
		UpdateStaticMarkersCpp();
		UpdateDynamicMarkersCpp();
	}
}

void UIQS_CompassWidget::UpdateStaticMarkersCpp()
{
	FRotator ControllerRot = GetOwningPlayerPawn()->GetControlRotation();
	for (UIQS_StaticDirWidget* Dir : DirsCpp)
	{
		bool IsC = false, IsSight = false;
		FVector2D Translation = CalcRotationCpp(ControllerRot, FRotator(0.0f, Dir->DirectionInfoCpp.WorldRotation, 0.0f), IsC, IsSight);
		if (IsSight)
		{
			Dir->SetRenderTranslation(Translation);
			if (!Dir->IsVisible())
			{
				Dir->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
			}
		}
		else
		{
			if (Dir->IsVisible())
			{
				Dir->SetVisibility(ESlateVisibility::Hidden);
			}
		}
	}
}

void UIQS_CompassWidget::UpdateDynamicMarkersCpp()
{
	const FVector PlayerLoc = GetOwningPlayerPawn()->GetActorLocation();
	const FRotator PlayerRot = GetOwningPlayerPawn()->GetActorRotation();
	for(int i = 0; i < CompassMarkersCpp.Num(); i++)
	{
		if (IsValid(CompassMarkersCpp[i]))
		{
			CompassMarkersCpp[i]->UpdateStateCpp(PlayerLoc, PlayerRot, PlayerLoc);
		}
	}

	for (int i = 0; i < WorldActorsOnCompassMarkersCpp.Num(); i++)
	{
		if (IsValid(WorldActorsOnCompassMarkersCpp[i]))
		{
			WorldActorsOnCompassMarkersCpp[i]->UpdateStateWithCheckCpp(PlayerLoc, PlayerRot, PlayerLoc);
		}
	}
}

void UIQS_CompassWidget::CAC_Cpp(float X, float X1, ECompassComparisonResult& CompRes, float& DX, float& DY)
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

void UIQS_CompassWidget::CC_Cpp(float X, float Y, ECompassComparisonResult& CompRes, float& DX, float& DY)
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

float UIQS_CompassWidget::CalcD(float A, float B, bool Cl)
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

FVector2D UIQS_CompassWidget::CalcRotationCpp(FRotator X, FRotator Y, bool& IsC, bool& IsSight)
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
		if ( C2 <= 1.0f )
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

float UIQS_CompassWidget::DegreeRotCpp(float In)
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