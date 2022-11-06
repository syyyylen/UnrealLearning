// Fill out your copyright notice in the Description page of Project Settings.


#include "AIPawn.h"

#include "GameFramework/MovementComponent.h"

// Sets default values
AAIPawn::AAIPawn()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

bool AAIPawn::PlayMontage(UAnimMontage* MontageToPlay)
{
	if(SkeletalMeshComponent == nullptr)
		return false;

	if(!SkeletalMeshComponent->GetAnimInstance()->Montage_IsPlaying(MontageToPlay))
	{
		float ret = SkeletalMeshComponent->GetAnimInstance()->Montage_Play(MontageToPlay);
		bool success;
		ret == 0.0f ? success = false : success = true;
		return success;
	}

	return false;
}

// Called when the game starts or when spawned
void AAIPawn::BeginPlay()
{
	Super::BeginPlay();

	SkeletalMeshComponent = Cast<USkeletalMeshComponent>(GetComponentByClass(USkeletalMeshComponent::StaticClass()));
}

// Called every frame
void AAIPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAIPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

