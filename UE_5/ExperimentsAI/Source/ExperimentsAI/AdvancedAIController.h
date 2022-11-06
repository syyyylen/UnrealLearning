// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "AIPawn.h"
#include "AdvancedAIController.generated.h"

UENUM()
enum class ETaskType : uint8
{
	Ability = 0 UMETA(DisplayName = "Ability"),
	Movement = 1 UMETA(DisplayName = "Movement")
};

UENUM()
enum class EPriorityLevel : uint8
{
	ExecuteInstantly = 0 UMETA(DisplayName = "ExecuteInstantly"),
	PriorityQueue = 1 UMETA(DisplayName = "PriorityQueue"),
	Enqueue = 2 UMETA(DisplayName = "Enqueue")
};

USTRUCT(BlueprintType)
struct FAbilityParameters
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 AbilityID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool BypassCooldown;
};

USTRUCT(BlueprintType)
struct FMovementParameters
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AActor* Goal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DurationMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DurationMax;
};

USTRUCT(BlueprintType)
struct FTask
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ETaskType TaskType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EPriorityLevel PriorityLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAbilityParameters AbilityParameters;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FMovementParameters MovementParameters;
};

/**
 * 
 */
UCLASS()
class EXPERIMENTSAI_API AAdvancedAIController : public AAIController
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadOnly)
	AAIPawn* MyAIPawn;

	virtual void OnPossess(APawn* InPawn) override;
	virtual void Tick(float DeltaSeconds) override;

	UFUNCTION(BlueprintCallable)
	void DebugMsg(FString Content, FColor Color);

	UFUNCTION(BlueprintCallable)
	void DebugTask(FTask Task);

	UFUNCTION(BlueprintCallable)
	bool UseAbility(int32 AbilityID, bool ByPassCooldown);
};

