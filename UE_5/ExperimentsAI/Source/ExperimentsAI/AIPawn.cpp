// Fill out your copyright notice in the Description page of Project Settings.


#include "AIPawn.h"

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

	UAnimInstance* MyAnimInstance = SkeletalMeshComponent->GetAnimInstance();

	if(!MyAnimInstance->Montage_IsPlaying(MontageToPlay))
	{
		float ret = MyAnimInstance->Montage_Play(MontageToPlay);
		bool success;
		ret == 0.0f ? success = false : success = true;

		if(success)
			MyAnimInstance->Montage_SetEndDelegate(MontageEndDelegate, MontageToPlay);
		
		return success;
	}

	return false;
}

void AAIPawn::OnMontageEnded()
{
	GEngine->AddOnScreenDebugMessage(-1, 100.0f, FColor::Yellow, "AIPawn : On Montage Ended");
}

UBaseAbility* AAIPawn::GetAbility(int32 AbilityID)
{
	if(!Abilities.Contains(AbilityID))
		return nullptr;
	
	return *Abilities.Find(AbilityID);
}

// Called when the game starts or when spawned
void AAIPawn::BeginPlay()
{
	Super::BeginPlay();

	MontageEndDelegate.BindUFunction(this,"OnMontageEnded");
	
	SkeletalMeshComponent = Cast<USkeletalMeshComponent>(GetComponentByClass(USkeletalMeshComponent::StaticClass()));
}

// Called every frame
void AAIPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//Decrement Abilities cooldowns
	for(auto& element : Abilities)
	{
		if(element.Value->OnCooldown())
		{
			element.Value->CooldownTimeRemaining -= DeltaTime;
			if(element.Value->CooldownTimeRemaining <= 0.0f)
				element.Value->CooldownTimeRemaining = 0.0f;
		}
	}
}

void AAIPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}
