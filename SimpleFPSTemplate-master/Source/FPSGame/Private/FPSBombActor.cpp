// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSBombActor.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/Engine.h"

// Sets default values
AFPSBombActor::AFPSBombActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ExplodeDelay = 2.0f;
}

// Called when the game starts or when spawned
void AFPSBombActor::BeginPlay()
{
	Super::BeginPlay();


	FTimerHandle ExplodeTimerHandle;
	GetWorldTimerManager().SetTimer(ExplodeTimerHandle, this, &AFPSBombActor::Explode, ExplodeDelay);
	
}

void AFPSBombActor::Explode()
{
	//UgpStatics was an element of FPSActor so it worked only after adding the include at the top, care 
	//the include also worked with kismet/gpstatics.h 
	UGameplayStatics::SpawnEmitterAtLocation(this, ExplosionTemplate, GetActorLocation());

	Destroy();
}

// Called every frame
void AFPSBombActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

