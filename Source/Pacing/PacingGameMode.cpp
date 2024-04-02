// Copyright Epic Games, Inc. All Rights Reserved.

#include "PacingGameMode.h"
#include "PacingCharacter.h"
#include "UObject/ConstructorHelpers.h"

APacingGameMode::APacingGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
