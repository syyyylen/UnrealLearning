// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ComboCondition.generated.h"

UENUM(BlueprintType)
enum class ComboCondition : uint8
{
	None = 0 UMETA(DisplayName = "None"),
	Ground = 1 UMETA(DisplayName = "Ground"),
	Air = 2 UMETA(DisplayName = "Air"),
	//Follow = 3 UMETA(DisplayName = "Follow")
};