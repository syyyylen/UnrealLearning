#pragma once
#include "ComboCondition.h"
#include "ComboInputs.h"
#include "Animation/AnimMontage.h"
#include "Engine/DataTable.h"
#include "ComboSegment.generated.h"

USTRUCT(BlueprintType)
struct FComboSegment : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
    	FText SegmentName;
    
    	UPROPERTY(EditAnywhere, BlueprintReadOnly)
    	ComboCondition Condition;
    
    	UPROPERTY(EditAnywhere, BlueprintReadOnly)
    	bool Unlocked;
    
    	UPROPERTY(EditAnywhere, BlueprintReadOnly)
    	int32 Tier;
    	
    	UPROPERTY(EditAnywhere, BlueprintReadOnly)
    	int32 Cost;
    
    	UPROPERTY(EditAnywhere, BlueprintReadOnly)
    	int32 ID;
    	
    	UPROPERTY(EditAnywhere, BlueprintReadOnly)
    	int32 ParentID;
    
    	UPROPERTY(EditAnywhere, BlueprintReadOnly)
    	TArray<ComboInput> Inputs;
    
    	UPROPERTY(EditAnywhere, BlueprintReadOnly)
    	TArray<TSoftObjectPtr<UAnimMontage>> AnimMontages;
    
    	bool IsActive;
    	
    	bool Selected;
    
    	FVector Pos;
};