// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Experiments/Public/ComboSegment.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComboSegment() {}
// Cross Module References
	EXPERIMENTS_API UScriptStruct* Z_Construct_UScriptStruct_FComboSegment();
	UPackage* Z_Construct_UPackage__Script_Experiments();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	EXPERIMENTS_API UEnum* Z_Construct_UEnum_Experiments_ComboCondition();
	EXPERIMENTS_API UEnum* Z_Construct_UEnum_Experiments_ComboInput();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FComboSegment>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FComboSegment cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComboSegment;
class UScriptStruct* FComboSegment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComboSegment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComboSegment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComboSegment, Z_Construct_UPackage__Script_Experiments(), TEXT("ComboSegment"));
	}
	return Z_Registration_Info_UScriptStruct_ComboSegment.OuterSingleton;
}
template<> EXPERIMENTS_API UScriptStruct* StaticStruct<FComboSegment>()
{
	return FComboSegment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FComboSegment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SegmentName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_SegmentName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Condition_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Condition_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Condition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Unlocked_MetaData[];
#endif
		static void NewProp_Unlocked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Unlocked;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tier_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Tier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cost_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Cost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ParentID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Inputs_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Inputs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Inputs;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_AnimMontages_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimMontages_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AnimMontages;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboSegment_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ComboSegment.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FComboSegment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComboSegment>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboSegment_Statics::NewProp_SegmentName_MetaData[] = {
		{ "Category", "ComboSegment" },
		{ "ModuleRelativePath", "Public/ComboSegment.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FComboSegment_Statics::NewProp_SegmentName = { "SegmentName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FComboSegment, SegmentName), METADATA_PARAMS(Z_Construct_UScriptStruct_FComboSegment_Statics::NewProp_SegmentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboSegment_Statics::NewProp_SegmentName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FComboSegment_Statics::NewProp_Condition_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboSegment_Statics::NewProp_Condition_MetaData[] = {
		{ "Category", "ComboSegment" },
		{ "ModuleRelativePath", "Public/ComboSegment.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FComboSegment_Statics::NewProp_Condition = { "Condition", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FComboSegment, Condition), Z_Construct_UEnum_Experiments_ComboCondition, METADATA_PARAMS(Z_Construct_UScriptStruct_FComboSegment_Statics::NewProp_Condition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboSegment_Statics::NewProp_Condition_MetaData)) }; // 138613870
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboSegment_Statics::NewProp_Unlocked_MetaData[] = {
		{ "Category", "ComboSegment" },
		{ "ModuleRelativePath", "Public/ComboSegment.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FComboSegment_Statics::NewProp_Unlocked_SetBit(void* Obj)
	{
		((FComboSegment*)Obj)->Unlocked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FComboSegment_Statics::NewProp_Unlocked = { "Unlocked", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FComboSegment), &Z_Construct_UScriptStruct_FComboSegment_Statics::NewProp_Unlocked_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FComboSegment_Statics::NewProp_Unlocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboSegment_Statics::NewProp_Unlocked_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboSegment_Statics::NewProp_Tier_MetaData[] = {
		{ "Category", "ComboSegment" },
		{ "ModuleRelativePath", "Public/ComboSegment.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FComboSegment_Statics::NewProp_Tier = { "Tier", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FComboSegment, Tier), METADATA_PARAMS(Z_Construct_UScriptStruct_FComboSegment_Statics::NewProp_Tier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboSegment_Statics::NewProp_Tier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboSegment_Statics::NewProp_Cost_MetaData[] = {
		{ "Category", "ComboSegment" },
		{ "ModuleRelativePath", "Public/ComboSegment.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FComboSegment_Statics::NewProp_Cost = { "Cost", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FComboSegment, Cost), METADATA_PARAMS(Z_Construct_UScriptStruct_FComboSegment_Statics::NewProp_Cost_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboSegment_Statics::NewProp_Cost_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboSegment_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "ComboSegment" },
		{ "ModuleRelativePath", "Public/ComboSegment.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FComboSegment_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FComboSegment, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FComboSegment_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboSegment_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboSegment_Statics::NewProp_ParentID_MetaData[] = {
		{ "Category", "ComboSegment" },
		{ "ModuleRelativePath", "Public/ComboSegment.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FComboSegment_Statics::NewProp_ParentID = { "ParentID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FComboSegment, ParentID), METADATA_PARAMS(Z_Construct_UScriptStruct_FComboSegment_Statics::NewProp_ParentID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboSegment_Statics::NewProp_ParentID_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FComboSegment_Statics::NewProp_Inputs_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FComboSegment_Statics::NewProp_Inputs_Inner = { "Inputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Experiments_ComboInput, METADATA_PARAMS(nullptr, 0) }; // 119438555
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboSegment_Statics::NewProp_Inputs_MetaData[] = {
		{ "Category", "ComboSegment" },
		{ "ModuleRelativePath", "Public/ComboSegment.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FComboSegment_Statics::NewProp_Inputs = { "Inputs", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FComboSegment, Inputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FComboSegment_Statics::NewProp_Inputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboSegment_Statics::NewProp_Inputs_MetaData)) }; // 119438555
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FComboSegment_Statics::NewProp_AnimMontages_Inner = { "AnimMontages", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboSegment_Statics::NewProp_AnimMontages_MetaData[] = {
		{ "Category", "ComboSegment" },
		{ "ModuleRelativePath", "Public/ComboSegment.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FComboSegment_Statics::NewProp_AnimMontages = { "AnimMontages", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FComboSegment, AnimMontages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FComboSegment_Statics::NewProp_AnimMontages_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboSegment_Statics::NewProp_AnimMontages_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComboSegment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboSegment_Statics::NewProp_SegmentName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboSegment_Statics::NewProp_Condition_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboSegment_Statics::NewProp_Condition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboSegment_Statics::NewProp_Unlocked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboSegment_Statics::NewProp_Tier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboSegment_Statics::NewProp_Cost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboSegment_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboSegment_Statics::NewProp_ParentID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboSegment_Statics::NewProp_Inputs_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboSegment_Statics::NewProp_Inputs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboSegment_Statics::NewProp_Inputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboSegment_Statics::NewProp_AnimMontages_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboSegment_Statics::NewProp_AnimMontages,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComboSegment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Experiments,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ComboSegment",
		sizeof(FComboSegment),
		alignof(FComboSegment),
		Z_Construct_UScriptStruct_FComboSegment_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboSegment_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FComboSegment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboSegment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FComboSegment()
	{
		if (!Z_Registration_Info_UScriptStruct_ComboSegment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComboSegment.InnerSingleton, Z_Construct_UScriptStruct_FComboSegment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ComboSegment.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Experiments_Source_Experiments_Public_ComboSegment_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Experiments_Source_Experiments_Public_ComboSegment_h_Statics::ScriptStructInfo[] = {
		{ FComboSegment::StaticStruct, Z_Construct_UScriptStruct_FComboSegment_Statics::NewStructOps, TEXT("ComboSegment"), &Z_Registration_Info_UScriptStruct_ComboSegment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComboSegment), 365383678U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Experiments_Source_Experiments_Public_ComboSegment_h_380151975(TEXT("/Script/Experiments"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Experiments_Source_Experiments_Public_ComboSegment_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Experiments_Source_Experiments_Public_ComboSegment_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
