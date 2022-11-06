// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseAbility.h"

/**
 * @brief 
 * @return Return true if the ability is currently on cooldown
 */
bool UBaseAbility::OnCooldown()
{
	return CooldownTimeRemaining > 0.0f;
}

/**
 * @brief Start this ability cooldown
 * @return Return false if the cooldown was already started
 */
void UBaseAbility::StartCooldown()
{
	CooldownTimeRemaining = Cooldown;
	GEngine->AddOnScreenDebugMessage(-1, 100.0f, FColor::Orange, "Base Ability : " + AbilityName.ToString() + " Cooldown Started");
}
