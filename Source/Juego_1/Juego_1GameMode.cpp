// Copyright Epic Games, Inc. All Rights Reserved.

#include "Juego_1GameMode.h"
#include "Juego_1Character.h"
#include "UObject/ConstructorHelpers.h"

AJuego_1GameMode::AJuego_1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}