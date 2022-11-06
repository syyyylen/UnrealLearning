// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExperimentsAI/BaseAbility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseAbility() {}
// Cross Module References
	EXPERIMENTSAI_API UClass* Z_Construct_UClass_UBaseAbility_NoRegister();
	EXPERIMENTSAI_API UClass* Z_Construct_UClass_UBaseAbility();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	UPackage* Z_Construct_UPackage__Script_ExperimentsAI();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	void UBaseAbility::StaticRegisterNativesUBaseAbility()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseAbility);
	UClass* Z_Construct_UClass_UBaseAbility_NoRegister()
	{
		return UBaseAbility::StaticClass();
	}
	struct Z_Construct_UClass_UBaseAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_AbilityName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Montage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cooldown_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Cooldown;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_ExperimentsAI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseAbility_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BaseAbility.h" },
		{ "ModuleRelativePath", "BaseAbility.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseAbility_Statics::NewProp_AbilityName_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "BaseAbility.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UBaseAbility_Statics::NewProp_AbilityName = { "AbilityName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseAbility, AbilityName), METADATA_PARAMS(Z_Construct_UClass_UBaseAbility_Statics::NewProp_AbilityName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAbility_Statics::NewProp_AbilityName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseAbility_Statics::NewProp_Montage_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "BaseAbility.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBaseAbility_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseAbility, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseAbility_Statics::NewProp_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAbility_Statics::NewProp_Montage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseAbility_Statics::NewProp_Cooldown_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "BaseAbility.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBaseAbility_Statics::NewProp_Cooldown = { "Cooldown", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseAbility, Cooldown), METADATA_PARAMS(Z_Construct_UClass_UBaseAbility_Statics::NewProp_Cooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAbility_Statics::NewProp_Cooldown_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAbility_Statics::NewProp_AbilityName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAbility_Statics::NewProp_Montage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAbility_Statics::NewProp_Cooldown,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseAbility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseAbility_Statics::ClassParams = {
		&UBaseAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBaseAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAbility_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseAbility()
	{
		if (!Z_Registration_Info_UClass_UBaseAbility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseAbility.OuterSingleton, Z_Construct_UClass_UBaseAbility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseAbility.OuterSingleton;
	}
	template<> EXPERIMENTSAI_API UClass* StaticClass<UBaseAbility>()
	{
		return UBaseAbility::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseAbility);
	struct Z_CompiledInDeferFile_FID_ExperimentsAI_Source_ExperimentsAI_BaseAbility_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ExperimentsAI_Source_ExperimentsAI_BaseAbility_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseAbility, UBaseAbility::StaticClass, TEXT("UBaseAbility"), &Z_Registration_Info_UClass_UBaseAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseAbility), 3115733059U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ExperimentsAI_Source_ExperimentsAI_BaseAbility_h_11152408(TEXT("/Script/ExperimentsAI"),
		Z_CompiledInDeferFile_FID_ExperimentsAI_Source_ExperimentsAI_BaseAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ExperimentsAI_Source_ExperimentsAI_BaseAbility_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
