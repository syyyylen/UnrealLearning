// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ComboSegment.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "ElineComboTreeComponent.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UElineComboTreeComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UElineComboTreeComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UDataTable* GetElineDataTable();

	void InitSegmentsFromDT();

	UDataTable* m_comboDataTable;

	TArray<FComboSegment> m_segments;

	float m_debugMsgDuration;
};

// class USegmentWidget : public UUserWidget
// {
// 	virtual void NativeConstruct() override;
//
// 	FComboSegment m_segmentData;
//
// 	UVerticalBox* m_verticalBox;
// 	
// 	FVector2D m_anchorPosition;
// };
