// Copyright Epic Games, Inc. All Rights Reserved.

#include "CPPTrainingGameMode.h"
#include "CPPTrainingHUD.h"
#include "CPPTrainingCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACPPTrainingGameMode::ACPPTrainingGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ACPPTrainingHUD::StaticClass();
}
