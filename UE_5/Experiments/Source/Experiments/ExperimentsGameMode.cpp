// Copyright Epic Games, Inc. All Rights Reserved.

#include "ExperimentsGameMode.h"
#include "ExperimentsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AExperimentsGameMode::AExperimentsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
