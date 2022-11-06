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

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Ability")
	FText AbilityName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Ability")
	TObjectPtr<UAnimMontage> Montage;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Ability")
	float Cooldown;

	UPROPERTY(BlueprintReadOnly, Category="Ability Internal")
	float CooldownTimeRemaining;
	
	UFUNCTION(BlueprintCallable)
	bool OnCooldown();

	UFUNCTION(BlueprintCallable)
	void StartCooldown();
};
