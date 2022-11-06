// Fill out your copyright notice in the Description page of Project Settings.


#include "AdvancedAIController.h"
#include "AIPawn.h"

void AAdvancedAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	MyAIPawn = Cast<AAIPawn>(InPawn);
	
	if(MyAIPawn == nullptr)
		DebugMsg("MyAIPawn nullptr", FColor::Red);
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

void AAdvancedAIController::DebugTask(const FTask Task)
{
	DebugMsg("----------------------DEBUG TASK-------------", FColor::Black);
	
	DebugMsg("Task Type : " + UEnum::GetValueAsString(Task.TaskType), FColor::Emerald);
	DebugMsg("Priority Level : " + UEnum::GetValueAsString(Task.PriorityLevel), FColor::Emerald);
	
	if(Task.TaskType == ETaskType::Ability)
		DebugMsg("Ability ID : " + FString::FromInt(Task.AbilityParameters.AbilityID), FColor::Emerald);

	if(Task.TaskType == ETaskType::Movement)
		DebugMsg(Task.MovementParameters.Goal->GetName(), FColor::Emerald);
}

/**
 * @brief 
 * @param AbilityID Ability to use ID
 * @param ByPassCooldown If true, the ability will be used even if in cooldown
 * @return 
 */
bool AAdvancedAIController::UseAbility(int32 AbilityID, bool ByPassCooldown)
{
	if(MyAIPawn == nullptr)
		return false;

	if(MyAIPawn->Abilities.Contains(AbilityID))
	{
		UBaseAbility* myAbility = MyAIPawn->GetAbility(AbilityID);
		
		if(myAbility == nullptr)
			return false;

		if(!ByPassCooldown && myAbility->OnCooldown())
		{
			DebugMsg("Ability was already in cooldown", FColor::Red);
			return false;
		}

		if(MyAIPawn->PlayMontage(myAbility->Montage))
		{
			myAbility->StartCooldown();
			DebugMsg("Ability used", FColor::Green);
			return true;
		}
	}

	return false;
}
