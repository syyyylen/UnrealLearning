// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Experiments/Public/ComboCondition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComboCondition() {}
// Cross Module References
	EXPERIMENTS_API UEnum* Z_Construct_UEnum_Experiments_ComboCondition();
	UPackage* Z_Construct_UPackage__Script_Experiments();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ComboCondition;
	static UEnum* ComboCondition_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ComboCondition.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ComboCondition.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Experiments_ComboCondition, Z_Construct_UPackage__Script_Experiments(), TEXT("ComboCondition"));
		}
		return Z_Registration_Info_UEnum_ComboCondition.OuterSingleton;
	}
	template<> EXPERIMENTS_API UEnum* StaticEnum<ComboCondition>()
	{
		return ComboCondition_StaticEnum();
	}
	struct Z_Construct_UEnum_Experiments_ComboCondition_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Experiments_ComboCondition_Statics::Enumerators[] = {
		{ "ComboCondition::None", (int64)ComboCondition::None },
		{ "ComboCondition::Ground", (int64)ComboCondition::Ground },
		{ "ComboCondition::Air", (int64)ComboCondition::Air },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Experiments_ComboCondition_Statics::Enum_MetaDataParams[] = {
		{ "Air.DisplayName", "Air" },
		{ "Air.Name", "ComboCondition::Air" },
		{ "BlueprintType", "true" },
		{ "Ground.DisplayName", "Ground" },
		{ "Ground.Name", "ComboCondition::Ground" },
		{ "ModuleRelativePath", "Public/ComboCondition.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "ComboCondition::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Experiments_ComboCondition_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Experiments,
		nullptr,
		"ComboCondition",
		"ComboCondition",
		Z_Construct_UEnum_Experiments_ComboCondition_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Experiments_ComboCondition_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Experiments_ComboCondition_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Experiments_ComboCondition_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Experiments_ComboCondition()
	{
		if (!Z_Registration_Info_UEnum_ComboCondition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ComboCondition.InnerSingleton, Z_Construct_UEnum_Experiments_ComboCondition_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ComboCondition.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Experiments_Source_Experiments_Public_ComboCondition_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Experiments_Source_Experiments_Public_ComboCondition_h_Statics::EnumInfo[] = {
		{ ComboCondition_StaticEnum, TEXT("ComboCondition"), &Z_Registration_Info_UEnum_ComboCondition, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 138613870U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Experiments_Source_Experiments_Public_ComboCondition_h_621354595(TEXT("/Script/Experiments"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Experiments_Source_Experiments_Public_ComboCondition_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Experiments_Source_Experiments_Public_ComboCondition_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
