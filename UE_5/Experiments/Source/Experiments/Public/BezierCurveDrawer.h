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

	void DrawReady();

	void SetAnchorsValues();

public :

	UFUNCTION(BlueprintCallable, CallInEditor)
	void PreviewCurve();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	bool m_canDisplay;

	float m_tValue;

	UPROPERTY(EditAnywhere)
	int m_previewPrecisionCount;

	UPROPERTY(EditAnywhere)
	FVector m_start;

	FVector m_startRelative;

	UPROPERTY(EditAnywhere)
	FVector m_end;

	FVector m_endRelative;

	UPROPERTY(EditAnywhere)
	FVector m_ctrlPt1;

	FVector m_ctrlPt1Relative;

	UPROPERTY(EditAnywhere)
	FVector m_ctrlPt2;

	FVector m_ctrlPt2Relative;

	UPROPERTY(EditAnywhere)
	float m_drawDuration;
};
