// Fill out your copyright notice in the Description page of Project Settings.


#include "BezierCurveDrawer.h"

// Sets default values
ABezierCurveDrawer::ABezierCurveDrawer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	m_tValue = 0.0f;
	m_drawDuration = 1.0f;
	m_canDisplay = true;
}

// Called when the game starts or when spawned
void ABezierCurveDrawer::BeginPlay()
{
	Super::BeginPlay();

	m_canDisplay = true;

	m_start = GetActorLocation() + m_start;
	m_end = GetActorLocation() + m_end;
	m_ctrlPt1 = GetActorLocation() + m_ctrlPt1;

	DrawDebugPoint(GetWorld(), m_start, 30, FColor::Green, true);
	DrawDebugPoint(GetWorld(), m_ctrlPt1, 30, FColor::Yellow, true);
	DrawDebugPoint(GetWorld(), m_end, 30, FColor::Red, true);

	DrawDebugLine(GetWorld(), m_start, m_ctrlPt1, FColor::Blue, true, -1, 0, 5);
	DrawDebugLine(GetWorld(), m_ctrlPt1, m_end, FColor::Blue, true, -1, 0, 5);
}

void ABezierCurveDrawer::DrawCurve(float t)
{
	if(m_canDisplay && t > 1.0f) GEngine->AddOnScreenDebugMessage(-1, 150.f, FColor::Cyan, FString::Printf(TEXT("T VALUE HIGHER THAN 1")));

	FVector pos1 = FMath::Lerp(m_start, m_ctrlPt1, t);
	FVector pos2 = FMath::Lerp(m_ctrlPt1, m_end, t);

	DrawDebugLine(GetWorld(), pos1, pos2, FColor::Green, false, -1, 0, 5);

	FVector posCurve = FMath::Lerp(pos1, pos2, t);

	DrawDebugPoint(GetWorld(), posCurve, 10, FColor::Red, true);
}

// Called every frame
void ABezierCurveDrawer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	m_tValue += DeltaTime;
	float t = m_tValue * 1.0f / m_drawDuration;
	if(m_canDisplay) DrawCurve(t);

	if (m_canDisplay && m_tValue > m_drawDuration) {

		GEngine->AddOnScreenDebugMessage(-1, 150.f, FColor::Purple, FString::Printf(TEXT("DRAW OVER")));

		m_canDisplay = false;
	}
}