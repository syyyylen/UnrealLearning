// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseAbility.h"
#include "GameFramework/Character.h"
#include "AIPawn.generated.h"

UCLASS()
class EXPERIMENTSAI_API AAIPawn : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAIPawn();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="AI Pawn")
	TMap<int32, TObjectPtr<UBaseAbility>> Abilities;

	UPROPERTY(BlueprintReadOnly)
	USkeletalMeshComponent* SkeletalMeshComponent;

	UFUNCTION(BlueprintCallable)
	bool PlayMontage(UAnimMontage* MontageToPlay);

	FOnMontageEnded MontageEndDelegate;
	
	UFUNCTION()
	void OnMontageEnded();

	UFUNCTION(BlueprintCallable)
	UBaseAbility* GetAbility(int32 AbilityID);
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
