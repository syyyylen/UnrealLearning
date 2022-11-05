// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExperimentsAI/ExperimentsAIGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExperimentsAIGameMode() {}
// Cross Module References
	EXPERIMENTSAI_API UClass* Z_Construct_UClass_AExperimentsAIGameMode_NoRegister();
	EXPERIMENTSAI_API UClass* Z_Construct_UClass_AExperimentsAIGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ExperimentsAI();
// End Cross Module References
	void AExperimentsAIGameMode::StaticRegisterNativesAExperimentsAIGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AExperimentsAIGameMode);
	UClass* Z_Construct_UClass_AExperimentsAIGameMode_NoRegister()
	{
		return AExperimentsAIGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AExperimentsAIGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AExperimentsAIGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ExperimentsAI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExperimentsAIGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ExperimentsAIGameMode.h" },
		{ "ModuleRelativePath", "ExperimentsAIGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AExperimentsAIGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExperimentsAIGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AExperimentsAIGameMode_Statics::ClassParams = {
		&AExperimentsAIGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AExperimentsAIGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AExperimentsAIGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AExperimentsAIGameMode()
	{
		if (!Z_Registration_Info_UClass_AExperimentsAIGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AExperimentsAIGameMode.OuterSingleton, Z_Construct_UClass_AExperimentsAIGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AExperimentsAIGameMode.OuterSingleton;
	}
	template<> EXPERIMENTSAI_API UClass* StaticClass<AExperimentsAIGameMode>()
	{
		return AExperimentsAIGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AExperimentsAIGameMode);
	struct Z_CompiledInDeferFile_FID_ExperimentsAI_Source_ExperimentsAI_ExperimentsAIGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ExperimentsAI_Source_ExperimentsAI_ExperimentsAIGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AExperimentsAIGameMode, AExperimentsAIGameMode::StaticClass, TEXT("AExperimentsAIGameMode"), &Z_Registration_Info_UClass_AExperimentsAIGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AExperimentsAIGameMode), 367061317U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ExperimentsAI_Source_ExperimentsAI_ExperimentsAIGameMode_h_810229703(TEXT("/Script/ExperimentsAI"),
		Z_CompiledInDeferFile_FID_ExperimentsAI_Source_ExperimentsAI_ExperimentsAIGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ExperimentsAI_Source_ExperimentsAI_ExperimentsAIGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
