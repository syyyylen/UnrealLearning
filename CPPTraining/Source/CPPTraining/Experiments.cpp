// Fill out your copyright notice in the Description page of Project Settings.


#include "Experiments.h"
//Include draw debug helpers header file 
#include "DrawDebugHelpers.h"

// Sets default values
AExperiments::AExperiments()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	LocationOne = FVector(0, 600, 600);

	CubeExtends = FVector(300, 300, 300);

}

// Called when the game starts or when spawned
void AExperiments::BeginPlay()
{
	Super::BeginPlay();
	
	DrawDebugSphere(GetWorld(), LocationOne, 200, 26, FColor(181, 0, 0), true, -1, 0, 2);

	DrawDebugBox(GetWorld(), LocationOne, CubeExtends, FColor(0, 181, 0), true, -1, 0, 3);

}

// Called every frame
void AExperiments::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

