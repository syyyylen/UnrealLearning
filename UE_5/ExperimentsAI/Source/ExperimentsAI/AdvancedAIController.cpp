// Fill out your copyright notice in the Description page of Project Settings.


#include "AdvancedAIController.h"

#include "AIPawn.h"

void AAdvancedAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	AAIPawn* MyAIPawn = Cast<AAIPawn>(InPawn);
	
	if(MyAIPawn != nullptr)
		Abilities = MyAIPawn->Abilities;
	
}

void AAdvancedAIController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	
}

/**
 * @brief 
 * @param Content Msg content
 * @param Color Msg color
 */
void AAdvancedAIController::DebugMsg(FString Content, FColor Color)
{
	FString prefix = "AdvancedAIController : ";
	GEngine->AddOnScreenDebugMessage(-1, 100.0f, Color, prefix.Append(Content));
}

