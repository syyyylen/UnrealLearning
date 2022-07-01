// Fill out your copyright notice in the Description page of Project Settings.


#include "TestActor.h"

// Sets default values
ATestActor::ATestActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// init variables with values
	//Location = GetActorLocation();

}

// Called when the game starts or when spawned
void ATestActor::BeginPlay()
{
	Super::BeginPlay();

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, FString::Printf(TEXT("The actor location is: %s"), *GetActorLocation().ToString()));

	Location = GetActorLocation();

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, FString::Printf(TEXT("The location is: %s"), *Location.ToString()));

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Hello There"));
	
	DrawDebugSphere(GetWorld(), Location, 200, 26, FColor(181, 0, 0), true, -1, 0, 2);
}

// Called every frame
void ATestActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

