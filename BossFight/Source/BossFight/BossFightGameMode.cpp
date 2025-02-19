// Copyright Epic Games, Inc. All Rights Reserved.

#include "BossFightGameMode.h"
#include "BossFightCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABossFightGameMode::ABossFightGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
