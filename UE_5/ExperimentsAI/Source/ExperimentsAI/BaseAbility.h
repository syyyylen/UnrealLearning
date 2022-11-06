// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BaseAbility.generated.h"

/**
 * 
 */
UCLASS()
class EXPERIMENTSAI_API UBaseAbility : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, Category="Ability")
	FText AbilityName;

	UPROPERTY(EditAnywhere, Category="Ability")
	TObjectPtr<UAnimMontage> Montage;

	UPROPERTY(EditAnywhere, Category="Ability")
	float Cooldown;
};
