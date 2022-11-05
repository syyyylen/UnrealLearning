// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Experiments/Public/BaseAbility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseAbility() {}
// Cross Module References
	EXPERIMENTS_API UClass* Z_Construct_UClass_UBaseAbility_NoRegister();
	EXPERIMENTS_API UClass* Z_Construct_UClass_UBaseAbility();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	UPackage* Z_Construct_UPackage__Script_Experiments();
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
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Experiments,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseAbility_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BaseAbility.h" },
		{ "ModuleRelativePath", "Public/BaseAbility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseAbility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseAbility_Statics::ClassParams = {
		&UBaseAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
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
	template<> EXPERIMENTS_API UClass* StaticClass<UBaseAbility>()
	{
		return UBaseAbility::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseAbility);
	struct Z_CompiledInDeferFile_FID_Experiments_Source_Experiments_Public_BaseAbility_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Experiments_Source_Experiments_Public_BaseAbility_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseAbility, UBaseAbility::StaticClass, TEXT("UBaseAbility"), &Z_Registration_Info_UClass_UBaseAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseAbility), 4110406305U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Experiments_Source_Experiments_Public_BaseAbility_h_3571549129(TEXT("/Script/Experiments"),
		Z_CompiledInDeferFile_FID_Experiments_Source_Experiments_Public_BaseAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Experiments_Source_Experiments_Public_BaseAbility_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
