// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSBombActor.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/Engine.h"
#include "Components/PrimitiveComponent.h"
#include "Materials/MaterialInstanceDynamic.h"

// Sets default values
AFPSBombActor::AFPSBombActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	MeshComp->SetCollisionResponseToChannel(ECC_Pawn, ECR_Ignore);
	RootComponent = MeshComp;

	ExplodeDelay = 2.0f;
}

// Called when the game starts or when spawned
void AFPSBombActor::BeginPlay()
{
	Super::BeginPlay();


	FTimerHandle ExplodeTimerHandle;
	GetWorldTimerManager().SetTimer(ExplodeTimerHandle, this, &AFPSBombActor::Explode, ExplodeDelay);
	
	MaterialInst = MeshComp->CreateAndSetMaterialInstanceDynamic(0);
	if (MaterialInst)
	{
		CurrentColor = MaterialInst->K2_GetVectorParameterValue("Color");
	}

	TargetColor = FLinearColor::MakeRandomColor();
}

void AFPSBombActor::Explode()
{
	//UgpStatics was an element of FPSActor so it worked only after adding the include at the top, care 
	//the include also worked with kismet/gpstatics.h 
	UGameplayStatics::SpawnEmitterAtLocation(this, ExplosionTemplate, GetActorLocation());

	//Param�tre de collision, qui est touch� ? > Les ECC_WorldDynamic et les PhysicsBody 
	FCollisionObjectQueryParams QueryParams;
	QueryParams.AddObjectTypesToQuery(ECC_WorldDynamic);
	QueryParams.AddObjectTypesToQuery(ECC_PhysicsBody);

	//Cr�ation d'une forme de collision, ensuite on lui assigne comme forme une sph�re 
	FCollisionShape CollShape;
	CollShape.SetSphere(500.0f);

	//On remplis un tableau avec les objets overlap�s, les param�tres de la fonction sont en parti d�finis au dessus
	//(qui on touche, selon quelle forme etc...
	//Ca ressemble �norm�ment a l'overlapSphere d'Unity mais en plus laborieux 
	TArray<FOverlapResult> OutOverlaps;
	GetWorld()->OverlapMultiByObjectType(OutOverlaps, GetActorLocation(), FQuat::Identity, QueryParams, CollShape);

	//La traditionelle boucle for pour parcourir le tableau d'obj recup�r�s par l'overlap
	//Attention � pas oublier les pointeurs :) 
	for (FOverlapResult Result : OutOverlaps)
	{
		UPrimitiveComponent* Overlap = Result.GetComponent();
		if (Overlap && Overlap->IsSimulatingPhysics())
		{
			UMaterialInstanceDynamic* MatInst = Overlap->CreateAndSetMaterialInstanceDynamic(0);
			if (MatInst)
			{
				MatInst->SetVectorParameterValue("Color", TargetColor);
			}
		}
	}
	
	Destroy();
}

// Called every frame
void AFPSBombActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (MaterialInst)
	{
		//Calcul de la progression du changement de couleur
		//Int�ressant ce GetWorld()-> a qui ont fait faire pleins de trucs, en l'occurence r�cup�rer le timer
		//Les Actors contiennent d�j� ce float "CreationTime" qui est : depuis quand ils ont �t� cr�es 
		float Progress = (GetWorld()->TimeSeconds - CreationTime) / ExplodeDelay;

		//Interpolation entre les deux couleurs (actuelle et cible) selon la progression 
		FLinearColor NewColor = FLinearColor::LerpUsingHSV(CurrentColor, TargetColor, Progress);

		//Et on assigne la nouvelle couleur
		MaterialInst->SetVectorParameterValue("Color", NewColor);
	}
}

