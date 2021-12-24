// Fill out your copyright notice in the Description page of Project Settings.


#include "BatteryMan_GameMode.h"
#include "GameFramework/Actor.h"

ABatteryMan_GameMode::ABatteryMan_GameMode() {

	PrimaryActorTick.bCanEverTick = true;
}

void ABatteryMan_GameMode::BeginPlay() {

	Super::BeginPlay();
	
	//Sorte de coroutine pour faire respawn les collectibles 
	//le true a la toute fin de la ligne veut dire que ça se répete indéfiniement 
	FTimerHandle UnusedHandle;
	GetWorldTimerManager().SetTimer(UnusedHandle, this, &ABatteryMan_GameMode::SpawnPlayerRecharge, 
		FMath::RandRange(2, 5), true);
}

void ABatteryMan_GameMode::Tick(float DeltaTime) {

	Super::Tick(DeltaTime);
}

void ABatteryMan_GameMode::SpawnPlayerRecharge()
{
	//Position de spawn aléatoire 
	float RandX = FMath::RandRange(Spawn_X_Min, Spawn_X_Max);
	float RandY = FMath::RandRange(Spawn_Y_Min, Spawn_Y_Max);

	FVector SpawnPosition = FVector(RandX, RandY, Spawn_Z);
	FRotator SpawnRotation = FRotator(0.0f, 0.0f, 0.0f);

	//Et on fait spawn la recharge 
	GetWorld()->SpawnActor(PlayerRecharge, &SpawnPosition, &SpawnRotation);
}

