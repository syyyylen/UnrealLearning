// Fill out your copyright notice in the Description page of Project Settings.


#include "Debug_Things_Actor.h"

// Sets default values
ADebug_Things_Actor::ADebug_Things_Actor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADebug_Things_Actor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADebug_Things_Actor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

