// Fill out your copyright notice in the Description page of Project Settings.

#include "ElineComboTreeComponent.h"

#include "ComboSegment.h"
#include "Kismet/GameplayStatics.h"

UElineComboTreeComponent::UElineComboTreeComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UElineComboTreeComponent::BeginPlay()
{
	Super::BeginPlay();

	m_debugMsgDuration = 150.0f;

	m_comboDataTable = GetElineDataTable();
	
	InitSegmentsFromDT();

	GEngine->AddOnScreenDebugMessage(-1, m_debugMsgDuration, FColor::Green, TEXT("ElineComboDataComp : Segments : " + FString::FromInt(m_segments.Num())));
}

void UElineComboTreeComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

UDataTable* UElineComboTreeComponent::GetElineDataTable()
{
	UGameInstance* gameInstance = UGameplayStatics::GetGameInstance(GetWorld());

	UFunction* getElineComboDTFunc = gameInstance->FindFunction("GetElineComboDataTable");
	
	if(getElineComboDTFunc == nullptr)
	{
		return nullptr;
	}

	struct Params
	{
		UDataTable* dataTableRet;
	};

	Params retValue;

	gameInstance->ProcessEvent(getElineComboDTFunc, &retValue);

	return retValue.dataTableRet;
}

void UElineComboTreeComponent::InitSegmentsFromDT()
{
	if(m_comboDataTable == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("ComboTreeComponent : no DataTable in UpdateCombos"));
	}

	TArray<FName> dataTableRowNames = m_comboDataTable->GetRowNames();

	for(const FName& rowName : dataTableRowNames)
	{
		const FString contextString(TEXT("combo segment"));
		const FComboSegment* comboSegment = m_comboDataTable->FindRow<FComboSegment>(rowName, contextString, true);

		//m_segments[comboSegment->ID] = *comboSegment;
		
		m_segments.Add(*comboSegment);
	}
}

