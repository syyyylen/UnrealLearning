// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BezierCurveDrawer.generated.h"

UCLASS()
class EXPERIMENTS_API ABezierCurveDrawer : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABezierCurveDrawer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void DrawCurve(float t);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	bool m_canDisplay;

	UPROPERTY(EditAnywhere)
	FVector m_start;

	UPROPERTY(EditAnywhere)
	FVector m_end;

	UPROPERTY(EditAnywhere)
	FVector m_ctrlPt1;

	UPROPERTY(EditAnywhere)
	float m_tValue;

	UPROPERTY(EditAnywhere)
	float m_drawDuration;
};
