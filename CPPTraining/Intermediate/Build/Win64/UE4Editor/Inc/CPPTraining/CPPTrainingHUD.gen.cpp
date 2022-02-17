// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPPTraining/CPPTrainingHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPPTrainingHUD() {}
// Cross Module References
	CPPTRAINING_API UClass* Z_Construct_UClass_ACPPTrainingHUD_NoRegister();
	CPPTRAINING_API UClass* Z_Construct_UClass_ACPPTrainingHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_CPPTraining();
// End Cross Module References
	void ACPPTrainingHUD::StaticRegisterNativesACPPTrainingHUD()
	{
	}
	UClass* Z_Construct_UClass_ACPPTrainingHUD_NoRegister()
	{
		return ACPPTrainingHUD::StaticClass();
	}
	struct Z_Construct_UClass_ACPPTrainingHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPPTrainingHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_CPPTraining,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPPTrainingHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "CPPTrainingHUD.h" },
		{ "ModuleRelativePath", "CPPTrainingHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPPTrainingHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPPTrainingHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACPPTrainingHUD_Statics::ClassParams = {
		&ACPPTrainingHUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACPPTrainingHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACPPTrainingHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACPPTrainingHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACPPTrainingHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACPPTrainingHUD, 2003847210);
	template<> CPPTRAINING_API UClass* StaticClass<ACPPTrainingHUD>()
	{
		return ACPPTrainingHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACPPTrainingHUD(Z_Construct_UClass_ACPPTrainingHUD, &ACPPTrainingHUD::StaticClass, TEXT("/Script/CPPTraining"), TEXT("ACPPTrainingHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPPTrainingHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
