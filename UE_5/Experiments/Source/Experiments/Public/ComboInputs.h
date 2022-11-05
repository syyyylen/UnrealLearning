// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ComboInputs.generated.h"

UENUM(BlueprintType)
enum class ComboInput : uint8
{
	None = 0 UMETA(DisplayName = "None"),
	LightAttack = 1 UMETA(DisplayName = "LightAttack"),
	HeavyAttack = 2 UMETA(DisplayName = "HeavyAttack"),
	Jump = 3 UMETA(DisplayName = "Jump"),
	Dash = 4 UMETA(DisplayName = "Dash")
};
