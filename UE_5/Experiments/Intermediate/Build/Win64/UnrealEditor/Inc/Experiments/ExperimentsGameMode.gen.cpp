// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Experiments/ExperimentsGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExperimentsGameMode() {}
// Cross Module References
	EXPERIMENTS_API UClass* Z_Construct_UClass_AExperimentsGameMode_NoRegister();
	EXPERIMENTS_API UClass* Z_Construct_UClass_AExperimentsGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Experiments();
// End Cross Module References
	void AExperimentsGameMode::StaticRegisterNativesAExperimentsGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AExperimentsGameMode);
	UClass* Z_Construct_UClass_AExperimentsGameMode_NoRegister()
	{
		return AExperimentsGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AExperimentsGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AExperimentsGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Experiments,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExperimentsGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ExperimentsGameMode.h" },
		{ "ModuleRelativePath", "ExperimentsGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AExperimentsGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExperimentsGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AExperimentsGameMode_Statics::ClassParams = {
		&AExperimentsGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AExperimentsGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AExperimentsGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AExperimentsGameMode()
	{
		if (!Z_Registration_Info_UClass_AExperimentsGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AExperimentsGameMode.OuterSingleton, Z_Construct_UClass_AExperimentsGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AExperimentsGameMode.OuterSingleton;
	}
	template<> EXPERIMENTS_API UClass* StaticClass<AExperimentsGameMode>()
	{
		return AExperimentsGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AExperimentsGameMode);
	struct Z_CompiledInDeferFile_FID_Experiments_Source_Experiments_ExperimentsGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Experiments_Source_Experiments_ExperimentsGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AExperimentsGameMode, AExperimentsGameMode::StaticClass, TEXT("AExperimentsGameMode"), &Z_Registration_Info_UClass_AExperimentsGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AExperimentsGameMode), 2202344346U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Experiments_Source_Experiments_ExperimentsGameMode_h_2720865056(TEXT("/Script/Experiments"),
		Z_CompiledInDeferFile_FID_Experiments_Source_Experiments_ExperimentsGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Experiments_Source_Experiments_ExperimentsGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
