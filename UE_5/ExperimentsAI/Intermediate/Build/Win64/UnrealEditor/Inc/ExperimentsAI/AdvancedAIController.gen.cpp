// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExperimentsAI/AdvancedAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvancedAIController() {}
// Cross Module References
	EXPERIMENTSAI_API UEnum* Z_Construct_UEnum_ExperimentsAI_ETaskType();
	UPackage* Z_Construct_UPackage__Script_ExperimentsAI();
	EXPERIMENTSAI_API UEnum* Z_Construct_UEnum_ExperimentsAI_EPriorityLevel();
	EXPERIMENTSAI_API UScriptStruct* Z_Construct_UScriptStruct_FAbilityParameters();
	EXPERIMENTSAI_API UScriptStruct* Z_Construct_UScriptStruct_FMovementParameters();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	EXPERIMENTSAI_API UScriptStruct* Z_Construct_UScriptStruct_FTask();
	EXPERIMENTSAI_API UClass* Z_Construct_UClass_AAdvancedAIController_NoRegister();
	EXPERIMENTSAI_API UClass* Z_Construct_UClass_AAdvancedAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	EXPERIMENTSAI_API UClass* Z_Construct_UClass_AAIPawn_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETaskType;
	static UEnum* ETaskType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETaskType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETaskType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ExperimentsAI_ETaskType, Z_Construct_UPackage__Script_ExperimentsAI(), TEXT("ETaskType"));
		}
		return Z_Registration_Info_UEnum_ETaskType.OuterSingleton;
	}
	template<> EXPERIMENTSAI_API UEnum* StaticEnum<ETaskType>()
	{
		return ETaskType_StaticEnum();
	}
	struct Z_Construct_UEnum_ExperimentsAI_ETaskType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ExperimentsAI_ETaskType_Statics::Enumerators[] = {
		{ "ETaskType::Ability", (int64)ETaskType::Ability },
		{ "ETaskType::Movement", (int64)ETaskType::Movement },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ExperimentsAI_ETaskType_Statics::Enum_MetaDataParams[] = {
		{ "Ability.DisplayName", "Ability" },
		{ "Ability.Name", "ETaskType::Ability" },
		{ "ModuleRelativePath", "AdvancedAIController.h" },
		{ "Movement.DisplayName", "Movement" },
		{ "Movement.Name", "ETaskType::Movement" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ExperimentsAI_ETaskType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ExperimentsAI,
		nullptr,
		"ETaskType",
		"ETaskType",
		Z_Construct_UEnum_ExperimentsAI_ETaskType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ExperimentsAI_ETaskType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ExperimentsAI_ETaskType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ExperimentsAI_ETaskType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ExperimentsAI_ETaskType()
	{
		if (!Z_Registration_Info_UEnum_ETaskType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETaskType.InnerSingleton, Z_Construct_UEnum_ExperimentsAI_ETaskType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETaskType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPriorityLevel;
	static UEnum* EPriorityLevel_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPriorityLevel.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPriorityLevel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ExperimentsAI_EPriorityLevel, Z_Construct_UPackage__Script_ExperimentsAI(), TEXT("EPriorityLevel"));
		}
		return Z_Registration_Info_UEnum_EPriorityLevel.OuterSingleton;
	}
	template<> EXPERIMENTSAI_API UEnum* StaticEnum<EPriorityLevel>()
	{
		return EPriorityLevel_StaticEnum();
	}
	struct Z_Construct_UEnum_ExperimentsAI_EPriorityLevel_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ExperimentsAI_EPriorityLevel_Statics::Enumerators[] = {
		{ "EPriorityLevel::ExecuteInstantly", (int64)EPriorityLevel::ExecuteInstantly },
		{ "EPriorityLevel::PriorityQueue", (int64)EPriorityLevel::PriorityQueue },
		{ "EPriorityLevel::Enqueue", (int64)EPriorityLevel::Enqueue },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ExperimentsAI_EPriorityLevel_Statics::Enum_MetaDataParams[] = {
		{ "Enqueue.DisplayName", "Enqueue" },
		{ "Enqueue.Name", "EPriorityLevel::Enqueue" },
		{ "ExecuteInstantly.DisplayName", "ExecuteInstantly" },
		{ "ExecuteInstantly.Name", "EPriorityLevel::ExecuteInstantly" },
		{ "ModuleRelativePath", "AdvancedAIController.h" },
		{ "PriorityQueue.DisplayName", "PriorityQueue" },
		{ "PriorityQueue.Name", "EPriorityLevel::PriorityQueue" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ExperimentsAI_EPriorityLevel_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ExperimentsAI,
		nullptr,
		"EPriorityLevel",
		"EPriorityLevel",
		Z_Construct_UEnum_ExperimentsAI_EPriorityLevel_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ExperimentsAI_EPriorityLevel_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ExperimentsAI_EPriorityLevel_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ExperimentsAI_EPriorityLevel_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ExperimentsAI_EPriorityLevel()
	{
		if (!Z_Registration_Info_UEnum_EPriorityLevel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPriorityLevel.InnerSingleton, Z_Construct_UEnum_ExperimentsAI_EPriorityLevel_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPriorityLevel.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AbilityParameters;
class UScriptStruct* FAbilityParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AbilityParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AbilityParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAbilityParameters, Z_Construct_UPackage__Script_ExperimentsAI(), TEXT("AbilityParameters"));
	}
	return Z_Registration_Info_UScriptStruct_AbilityParameters.OuterSingleton;
}
template<> EXPERIMENTSAI_API UScriptStruct* StaticStruct<FAbilityParameters>()
{
	return FAbilityParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAbilityParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AbilityID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BypassCooldown_MetaData[];
#endif
		static void NewProp_BypassCooldown_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_BypassCooldown;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbilityParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "AdvancedAIController.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAbilityParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAbilityParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbilityParameters_Statics::NewProp_AbilityID_MetaData[] = {
		{ "Category", "AbilityParameters" },
		{ "ModuleRelativePath", "AdvancedAIController.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAbilityParameters_Statics::NewProp_AbilityID = { "AbilityID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAbilityParameters, AbilityID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAbilityParameters_Statics::NewProp_AbilityID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityParameters_Statics::NewProp_AbilityID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbilityParameters_Statics::NewProp_BypassCooldown_MetaData[] = {
		{ "Category", "AbilityParameters" },
		{ "ModuleRelativePath", "AdvancedAIController.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAbilityParameters_Statics::NewProp_BypassCooldown_SetBit(void* Obj)
	{
		((FAbilityParameters*)Obj)->BypassCooldown = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAbilityParameters_Statics::NewProp_BypassCooldown = { "BypassCooldown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAbilityParameters), &Z_Construct_UScriptStruct_FAbilityParameters_Statics::NewProp_BypassCooldown_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAbilityParameters_Statics::NewProp_BypassCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityParameters_Statics::NewProp_BypassCooldown_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAbilityParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityParameters_Statics::NewProp_AbilityID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityParameters_Statics::NewProp_BypassCooldown,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAbilityParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ExperimentsAI,
		nullptr,
		&NewStructOps,
		"AbilityParameters",
		sizeof(FAbilityParameters),
		alignof(FAbilityParameters),
		Z_Construct_UScriptStruct_FAbilityParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAbilityParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAbilityParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_AbilityParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AbilityParameters.InnerSingleton, Z_Construct_UScriptStruct_FAbilityParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AbilityParameters.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovementParameters;
class UScriptStruct* FMovementParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovementParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovementParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovementParameters, Z_Construct_UPackage__Script_ExperimentsAI(), TEXT("MovementParameters"));
	}
	return Z_Registration_Info_UScriptStruct_MovementParameters.OuterSingleton;
}
template<> EXPERIMENTSAI_API UScriptStruct* StaticStruct<FMovementParameters>()
{
	return FMovementParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovementParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Goal_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Goal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DurationMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DurationMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DurationMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DurationMax;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovementParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "AdvancedAIController.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovementParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovementParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovementParameters_Statics::NewProp_Goal_MetaData[] = {
		{ "Category", "MovementParameters" },
		{ "ModuleRelativePath", "AdvancedAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovementParameters_Statics::NewProp_Goal = { "Goal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovementParameters, Goal), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovementParameters_Statics::NewProp_Goal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovementParameters_Statics::NewProp_Goal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovementParameters_Statics::NewProp_DurationMin_MetaData[] = {
		{ "Category", "MovementParameters" },
		{ "ModuleRelativePath", "AdvancedAIController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovementParameters_Statics::NewProp_DurationMin = { "DurationMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovementParameters, DurationMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovementParameters_Statics::NewProp_DurationMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovementParameters_Statics::NewProp_DurationMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovementParameters_Statics::NewProp_DurationMax_MetaData[] = {
		{ "Category", "MovementParameters" },
		{ "ModuleRelativePath", "AdvancedAIController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovementParameters_Statics::NewProp_DurationMax = { "DurationMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovementParameters, DurationMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovementParameters_Statics::NewProp_DurationMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovementParameters_Statics::NewProp_DurationMax_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovementParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovementParameters_Statics::NewProp_Goal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovementParameters_Statics::NewProp_DurationMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovementParameters_Statics::NewProp_DurationMax,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovementParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ExperimentsAI,
		nullptr,
		&NewStructOps,
		"MovementParameters",
		sizeof(FMovementParameters),
		alignof(FMovementParameters),
		Z_Construct_UScriptStruct_FMovementParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovementParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovementParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovementParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovementParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_MovementParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovementParameters.InnerSingleton, Z_Construct_UScriptStruct_FMovementParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovementParameters.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Task;
class UScriptStruct* FTask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Task.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Task.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTask, Z_Construct_UPackage__Script_ExperimentsAI(), TEXT("Task"));
	}
	return Z_Registration_Info_UScriptStruct_Task.OuterSingleton;
}
template<> EXPERIMENTSAI_API UScriptStruct* StaticStruct<FTask>()
{
	return FTask::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTask_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_TaskType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaskType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TaskType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PriorityLevel_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PriorityLevel_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PriorityLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityParameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MovementParameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTask_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "AdvancedAIController.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTask_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTask>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTask_Statics::NewProp_TaskType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTask_Statics::NewProp_TaskType_MetaData[] = {
		{ "Category", "Task" },
		{ "ModuleRelativePath", "AdvancedAIController.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTask_Statics::NewProp_TaskType = { "TaskType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTask, TaskType), Z_Construct_UEnum_ExperimentsAI_ETaskType, METADATA_PARAMS(Z_Construct_UScriptStruct_FTask_Statics::NewProp_TaskType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTask_Statics::NewProp_TaskType_MetaData)) }; // 3295219797
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTask_Statics::NewProp_PriorityLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTask_Statics::NewProp_PriorityLevel_MetaData[] = {
		{ "Category", "Task" },
		{ "ModuleRelativePath", "AdvancedAIController.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTask_Statics::NewProp_PriorityLevel = { "PriorityLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTask, PriorityLevel), Z_Construct_UEnum_ExperimentsAI_EPriorityLevel, METADATA_PARAMS(Z_Construct_UScriptStruct_FTask_Statics::NewProp_PriorityLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTask_Statics::NewProp_PriorityLevel_MetaData)) }; // 2040127348
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTask_Statics::NewProp_AbilityParameters_MetaData[] = {
		{ "Category", "Task" },
		{ "ModuleRelativePath", "AdvancedAIController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTask_Statics::NewProp_AbilityParameters = { "AbilityParameters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTask, AbilityParameters), Z_Construct_UScriptStruct_FAbilityParameters, METADATA_PARAMS(Z_Construct_UScriptStruct_FTask_Statics::NewProp_AbilityParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTask_Statics::NewProp_AbilityParameters_MetaData)) }; // 3503079011
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTask_Statics::NewProp_MovementParameters_MetaData[] = {
		{ "Category", "Task" },
		{ "ModuleRelativePath", "AdvancedAIController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTask_Statics::NewProp_MovementParameters = { "MovementParameters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTask, MovementParameters), Z_Construct_UScriptStruct_FMovementParameters, METADATA_PARAMS(Z_Construct_UScriptStruct_FTask_Statics::NewProp_MovementParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTask_Statics::NewProp_MovementParameters_MetaData)) }; // 1536007405
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTask_Statics::NewProp_TaskType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTask_Statics::NewProp_TaskType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTask_Statics::NewProp_PriorityLevel_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTask_Statics::NewProp_PriorityLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTask_Statics::NewProp_AbilityParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTask_Statics::NewProp_MovementParameters,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTask_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ExperimentsAI,
		nullptr,
		&NewStructOps,
		"Task",
		sizeof(FTask),
		alignof(FTask),
		Z_Construct_UScriptStruct_FTask_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTask_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTask_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTask_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTask()
	{
		if (!Z_Registration_Info_UScriptStruct_Task.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Task.InnerSingleton, Z_Construct_UScriptStruct_FTask_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Task.InnerSingleton;
	}
	DEFINE_FUNCTION(AAdvancedAIController::execUseAbility)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AbilityID);
		P_GET_UBOOL(Z_Param_ByPassCooldown);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UseAbility(Z_Param_AbilityID,Z_Param_ByPassCooldown);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAdvancedAIController::execDebugTask)
	{
		P_GET_STRUCT(FTask,Z_Param_Task);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugTask(Z_Param_Task);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAdvancedAIController::execDebugMsg)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Content);
		P_GET_STRUCT(FColor,Z_Param_Color);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugMsg(Z_Param_Content,Z_Param_Color);
		P_NATIVE_END;
	}
	void AAdvancedAIController::StaticRegisterNativesAAdvancedAIController()
	{
		UClass* Class = AAdvancedAIController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DebugMsg", &AAdvancedAIController::execDebugMsg },
			{ "DebugTask", &AAdvancedAIController::execDebugTask },
			{ "UseAbility", &AAdvancedAIController::execUseAbility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAdvancedAIController_DebugMsg_Statics
	{
		struct AdvancedAIController_eventDebugMsg_Parms
		{
			FString Content;
			FColor Color;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Content;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AAdvancedAIController_DebugMsg_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedAIController_eventDebugMsg_Parms, Content), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvancedAIController_DebugMsg_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedAIController_eventDebugMsg_Parms, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvancedAIController_DebugMsg_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvancedAIController_DebugMsg_Statics::NewProp_Content,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvancedAIController_DebugMsg_Statics::NewProp_Color,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvancedAIController_DebugMsg_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AdvancedAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvancedAIController_DebugMsg_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvancedAIController, nullptr, "DebugMsg", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAdvancedAIController_DebugMsg_Statics::AdvancedAIController_eventDebugMsg_Parms), Z_Construct_UFunction_AAdvancedAIController_DebugMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvancedAIController_DebugMsg_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvancedAIController_DebugMsg_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvancedAIController_DebugMsg_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvancedAIController_DebugMsg()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAdvancedAIController_DebugMsg_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAdvancedAIController_DebugTask_Statics
	{
		struct AdvancedAIController_eventDebugTask_Parms
		{
			FTask Task;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Task;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvancedAIController_DebugTask_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedAIController_eventDebugTask_Parms, Task), Z_Construct_UScriptStruct_FTask, METADATA_PARAMS(nullptr, 0) }; // 3074275755
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvancedAIController_DebugTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvancedAIController_DebugTask_Statics::NewProp_Task,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvancedAIController_DebugTask_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AdvancedAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvancedAIController_DebugTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvancedAIController, nullptr, "DebugTask", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAdvancedAIController_DebugTask_Statics::AdvancedAIController_eventDebugTask_Parms), Z_Construct_UFunction_AAdvancedAIController_DebugTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvancedAIController_DebugTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvancedAIController_DebugTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvancedAIController_DebugTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvancedAIController_DebugTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAdvancedAIController_DebugTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAdvancedAIController_UseAbility_Statics
	{
		struct AdvancedAIController_eventUseAbility_Parms
		{
			int32 AbilityID;
			bool ByPassCooldown;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_AbilityID;
		static void NewProp_ByPassCooldown_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ByPassCooldown;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAdvancedAIController_UseAbility_Statics::NewProp_AbilityID = { "AbilityID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedAIController_eventUseAbility_Parms, AbilityID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AAdvancedAIController_UseAbility_Statics::NewProp_ByPassCooldown_SetBit(void* Obj)
	{
		((AdvancedAIController_eventUseAbility_Parms*)Obj)->ByPassCooldown = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAdvancedAIController_UseAbility_Statics::NewProp_ByPassCooldown = { "ByPassCooldown", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvancedAIController_eventUseAbility_Parms), &Z_Construct_UFunction_AAdvancedAIController_UseAbility_Statics::NewProp_ByPassCooldown_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AAdvancedAIController_UseAbility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AdvancedAIController_eventUseAbility_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAdvancedAIController_UseAbility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvancedAIController_eventUseAbility_Parms), &Z_Construct_UFunction_AAdvancedAIController_UseAbility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvancedAIController_UseAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvancedAIController_UseAbility_Statics::NewProp_AbilityID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvancedAIController_UseAbility_Statics::NewProp_ByPassCooldown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvancedAIController_UseAbility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvancedAIController_UseAbility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AdvancedAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvancedAIController_UseAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvancedAIController, nullptr, "UseAbility", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAdvancedAIController_UseAbility_Statics::AdvancedAIController_eventUseAbility_Parms), Z_Construct_UFunction_AAdvancedAIController_UseAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvancedAIController_UseAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvancedAIController_UseAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvancedAIController_UseAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvancedAIController_UseAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAdvancedAIController_UseAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAdvancedAIController);
	UClass* Z_Construct_UClass_AAdvancedAIController_NoRegister()
	{
		return AAdvancedAIController::StaticClass();
	}
	struct Z_Construct_UClass_AAdvancedAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyAIPawn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MyAIPawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAdvancedAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_ExperimentsAI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAdvancedAIController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAdvancedAIController_DebugMsg, "DebugMsg" }, // 2535459391
		{ &Z_Construct_UFunction_AAdvancedAIController_DebugTask, "DebugTask" }, // 211370706
		{ &Z_Construct_UFunction_AAdvancedAIController_UseAbility, "UseAbility" }, // 1873578936
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvancedAIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AdvancedAIController.h" },
		{ "ModuleRelativePath", "AdvancedAIController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvancedAIController_Statics::NewProp_MyAIPawn_MetaData[] = {
		{ "Category", "AdvancedAIController" },
		{ "ModuleRelativePath", "AdvancedAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAdvancedAIController_Statics::NewProp_MyAIPawn = { "MyAIPawn", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAdvancedAIController, MyAIPawn), Z_Construct_UClass_AAIPawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAdvancedAIController_Statics::NewProp_MyAIPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvancedAIController_Statics::NewProp_MyAIPawn_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAdvancedAIController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvancedAIController_Statics::NewProp_MyAIPawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAdvancedAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAdvancedAIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAdvancedAIController_Statics::ClassParams = {
		&AAdvancedAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAdvancedAIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAdvancedAIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAdvancedAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvancedAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAdvancedAIController()
	{
		if (!Z_Registration_Info_UClass_AAdvancedAIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAdvancedAIController.OuterSingleton, Z_Construct_UClass_AAdvancedAIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAdvancedAIController.OuterSingleton;
	}
	template<> EXPERIMENTSAI_API UClass* StaticClass<AAdvancedAIController>()
	{
		return AAdvancedAIController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAdvancedAIController);
	struct Z_CompiledInDeferFile_FID_ExperimentsAI_Source_ExperimentsAI_AdvancedAIController_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ExperimentsAI_Source_ExperimentsAI_AdvancedAIController_h_Statics::EnumInfo[] = {
		{ ETaskType_StaticEnum, TEXT("ETaskType"), &Z_Registration_Info_UEnum_ETaskType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3295219797U) },
		{ EPriorityLevel_StaticEnum, TEXT("EPriorityLevel"), &Z_Registration_Info_UEnum_EPriorityLevel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2040127348U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ExperimentsAI_Source_ExperimentsAI_AdvancedAIController_h_Statics::ScriptStructInfo[] = {
		{ FAbilityParameters::StaticStruct, Z_Construct_UScriptStruct_FAbilityParameters_Statics::NewStructOps, TEXT("AbilityParameters"), &Z_Registration_Info_UScriptStruct_AbilityParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAbilityParameters), 3503079011U) },
		{ FMovementParameters::StaticStruct, Z_Construct_UScriptStruct_FMovementParameters_Statics::NewStructOps, TEXT("MovementParameters"), &Z_Registration_Info_UScriptStruct_MovementParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovementParameters), 1536007405U) },
		{ FTask::StaticStruct, Z_Construct_UScriptStruct_FTask_Statics::NewStructOps, TEXT("Task"), &Z_Registration_Info_UScriptStruct_Task, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTask), 3074275755U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ExperimentsAI_Source_ExperimentsAI_AdvancedAIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAdvancedAIController, AAdvancedAIController::StaticClass, TEXT("AAdvancedAIController"), &Z_Registration_Info_UClass_AAdvancedAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAdvancedAIController), 4049107851U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ExperimentsAI_Source_ExperimentsAI_AdvancedAIController_h_1509646668(TEXT("/Script/ExperimentsAI"),
		Z_CompiledInDeferFile_FID_ExperimentsAI_Source_ExperimentsAI_AdvancedAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ExperimentsAI_Source_ExperimentsAI_AdvancedAIController_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_ExperimentsAI_Source_ExperimentsAI_AdvancedAIController_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ExperimentsAI_Source_ExperimentsAI_AdvancedAIController_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_ExperimentsAI_Source_ExperimentsAI_AdvancedAIController_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ExperimentsAI_Source_ExperimentsAI_AdvancedAIController_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
