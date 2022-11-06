// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BaseAbility.h"
#include "AdvancedAIController.generated.h"

/**
 * 
 */
UCLASS()
class EXPERIMENTSAI_API AAdvancedAIController : public AAIController
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadOnly)
	TMap<int32, UBaseAbility*> Abilities;

	virtual void OnPossess(APawn* InPawn) override;
	virtual void Tick(float DeltaSeconds) override;

	UFUNCTION(BlueprintCallable)
	void DebugMsg(FString Content, FColor Color);
};

