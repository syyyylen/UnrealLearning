// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Experiments/Public/ComboInputs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComboInputs() {}
// Cross Module References
	EXPERIMENTS_API UEnum* Z_Construct_UEnum_Experiments_ComboInput();
	UPackage* Z_Construct_UPackage__Script_Experiments();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ComboInput;
	static UEnum* ComboInput_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ComboInput.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ComboInput.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Experiments_ComboInput, Z_Construct_UPackage__Script_Experiments(), TEXT("ComboInput"));
		}
		return Z_Registration_Info_UEnum_ComboInput.OuterSingleton;
	}
	template<> EXPERIMENTS_API UEnum* StaticEnum<ComboInput>()
	{
		return ComboInput_StaticEnum();
	}
	struct Z_Construct_UEnum_Experiments_ComboInput_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Experiments_ComboInput_Statics::Enumerators[] = {
		{ "ComboInput::None", (int64)ComboInput::None },
		{ "ComboInput::LightAttack", (int64)ComboInput::LightAttack },
		{ "ComboInput::HeavyAttack", (int64)ComboInput::HeavyAttack },
		{ "ComboInput::Jump", (int64)ComboInput::Jump },
		{ "ComboInput::Dash", (int64)ComboInput::Dash },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Experiments_ComboInput_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Dash.DisplayName", "Dash" },
		{ "Dash.Name", "ComboInput::Dash" },
		{ "HeavyAttack.DisplayName", "HeavyAttack" },
		{ "HeavyAttack.Name", "ComboInput::HeavyAttack" },
		{ "Jump.DisplayName", "Jump" },
		{ "Jump.Name", "ComboInput::Jump" },
		{ "LightAttack.DisplayName", "LightAttack" },
		{ "LightAttack.Name", "ComboInput::LightAttack" },
		{ "ModuleRelativePath", "Public/ComboInputs.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "ComboInput::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Experiments_ComboInput_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Experiments,
		nullptr,
		"ComboInput",
		"ComboInput",
		Z_Construct_UEnum_Experiments_ComboInput_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Experiments_ComboInput_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Experiments_ComboInput_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Experiments_ComboInput_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Experiments_ComboInput()
	{
		if (!Z_Registration_Info_UEnum_ComboInput.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ComboInput.InnerSingleton, Z_Construct_UEnum_Experiments_ComboInput_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ComboInput.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Experiments_Source_Experiments_Public_ComboInputs_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Experiments_Source_Experiments_Public_ComboInputs_h_Statics::EnumInfo[] = {
		{ ComboInput_StaticEnum, TEXT("ComboInput"), &Z_Registration_Info_UEnum_ComboInput, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 119438555U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Experiments_Source_Experiments_Public_ComboInputs_h_1623623234(TEXT("/Script/Experiments"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Experiments_Source_Experiments_Public_ComboInputs_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Experiments_Source_Experiments_Public_ComboInputs_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
