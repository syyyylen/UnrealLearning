// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Experiments/Public/Debug_Things_Actor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDebug_Things_Actor() {}
// Cross Module References
	EXPERIMENTS_API UClass* Z_Construct_UClass_ADebug_Things_Actor_NoRegister();
	EXPERIMENTS_API UClass* Z_Construct_UClass_ADebug_Things_Actor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Experiments();
// End Cross Module References
	void ADebug_Things_Actor::StaticRegisterNativesADebug_Things_Actor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADebug_Things_Actor);
	UClass* Z_Construct_UClass_ADebug_Things_Actor_NoRegister()
	{
		return ADebug_Things_Actor::StaticClass();
	}
	struct Z_Construct_UClass_ADebug_Things_Actor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADebug_Things_Actor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Experiments,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADebug_Things_Actor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Debug_Things_Actor.h" },
		{ "ModuleRelativePath", "Public/Debug_Things_Actor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADebug_Things_Actor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADebug_Things_Actor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADebug_Things_Actor_Statics::ClassParams = {
		&ADebug_Things_Actor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADebug_Things_Actor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADebug_Things_Actor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADebug_Things_Actor()
	{
		if (!Z_Registration_Info_UClass_ADebug_Things_Actor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADebug_Things_Actor.OuterSingleton, Z_Construct_UClass_ADebug_Things_Actor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADebug_Things_Actor.OuterSingleton;
	}
	template<> EXPERIMENTS_API UClass* StaticClass<ADebug_Things_Actor>()
	{
		return ADebug_Things_Actor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADebug_Things_Actor);
	struct Z_CompiledInDeferFile_FID_Experiments_Source_Experiments_Public_Debug_Things_Actor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Experiments_Source_Experiments_Public_Debug_Things_Actor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADebug_Things_Actor, ADebug_Things_Actor::StaticClass, TEXT("ADebug_Things_Actor"), &Z_Registration_Info_UClass_ADebug_Things_Actor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADebug_Things_Actor), 2228852280U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Experiments_Source_Experiments_Public_Debug_Things_Actor_h_3734324058(TEXT("/Script/Experiments"),
		Z_CompiledInDeferFile_FID_Experiments_Source_Experiments_Public_Debug_Things_Actor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Experiments_Source_Experiments_Public_Debug_Things_Actor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
