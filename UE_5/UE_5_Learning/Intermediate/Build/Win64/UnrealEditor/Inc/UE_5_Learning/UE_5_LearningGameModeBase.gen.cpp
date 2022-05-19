// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_5_Learning/UE_5_LearningGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE_5_LearningGameModeBase() {}
// Cross Module References
	UE_5_LEARNING_API UClass* Z_Construct_UClass_AUE_5_LearningGameModeBase_NoRegister();
	UE_5_LEARNING_API UClass* Z_Construct_UClass_AUE_5_LearningGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UE_5_Learning();
// End Cross Module References
	void AUE_5_LearningGameModeBase::StaticRegisterNativesAUE_5_LearningGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUE_5_LearningGameModeBase);
	UClass* Z_Construct_UClass_AUE_5_LearningGameModeBase_NoRegister()
	{
		return AUE_5_LearningGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AUE_5_LearningGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUE_5_LearningGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UE_5_Learning,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE_5_LearningGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UE_5_LearningGameModeBase.h" },
		{ "ModuleRelativePath", "UE_5_LearningGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUE_5_LearningGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUE_5_LearningGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUE_5_LearningGameModeBase_Statics::ClassParams = {
		&AUE_5_LearningGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AUE_5_LearningGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUE_5_LearningGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUE_5_LearningGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AUE_5_LearningGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUE_5_LearningGameModeBase.OuterSingleton, Z_Construct_UClass_AUE_5_LearningGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUE_5_LearningGameModeBase.OuterSingleton;
	}
	template<> UE_5_LEARNING_API UClass* StaticClass<AUE_5_LearningGameModeBase>()
	{
		return AUE_5_LearningGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUE_5_LearningGameModeBase);
	struct Z_CompiledInDeferFile_FID_UE_5_Learning_Source_UE_5_Learning_UE_5_LearningGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_5_Learning_Source_UE_5_Learning_UE_5_LearningGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUE_5_LearningGameModeBase, AUE_5_LearningGameModeBase::StaticClass, TEXT("AUE_5_LearningGameModeBase"), &Z_Registration_Info_UClass_AUE_5_LearningGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUE_5_LearningGameModeBase), 924832554U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_5_Learning_Source_UE_5_Learning_UE_5_LearningGameModeBase_h_2432341410(TEXT("/Script/UE_5_Learning"),
		Z_CompiledInDeferFile_FID_UE_5_Learning_Source_UE_5_Learning_UE_5_LearningGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_5_Learning_Source_UE_5_Learning_UE_5_LearningGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
