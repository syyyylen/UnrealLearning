// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealBasicsTutorial/UnrealBasicsTutorialGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealBasicsTutorialGameMode() {}
// Cross Module References
	UNREALBASICSTUTORIAL_API UClass* Z_Construct_UClass_AUnrealBasicsTutorialGameMode_NoRegister();
	UNREALBASICSTUTORIAL_API UClass* Z_Construct_UClass_AUnrealBasicsTutorialGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UnrealBasicsTutorial();
// End Cross Module References
	void AUnrealBasicsTutorialGameMode::StaticRegisterNativesAUnrealBasicsTutorialGameMode()
	{
	}
	UClass* Z_Construct_UClass_AUnrealBasicsTutorialGameMode_NoRegister()
	{
		return AUnrealBasicsTutorialGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AUnrealBasicsTutorialGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnrealBasicsTutorialGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealBasicsTutorial,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealBasicsTutorialGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "UnrealBasicsTutorialGameMode.h" },
		{ "ModuleRelativePath", "UnrealBasicsTutorialGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnrealBasicsTutorialGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnrealBasicsTutorialGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUnrealBasicsTutorialGameMode_Statics::ClassParams = {
		&AUnrealBasicsTutorialGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AUnrealBasicsTutorialGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealBasicsTutorialGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnrealBasicsTutorialGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUnrealBasicsTutorialGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUnrealBasicsTutorialGameMode, 1261490089);
	template<> UNREALBASICSTUTORIAL_API UClass* StaticClass<AUnrealBasicsTutorialGameMode>()
	{
		return AUnrealBasicsTutorialGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUnrealBasicsTutorialGameMode(Z_Construct_UClass_AUnrealBasicsTutorialGameMode, &AUnrealBasicsTutorialGameMode::StaticClass, TEXT("/Script/UnrealBasicsTutorial"), TEXT("AUnrealBasicsTutorialGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnrealBasicsTutorialGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
