// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPPTraining/Experiments.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExperiments() {}
// Cross Module References
	CPPTRAINING_API UClass* Z_Construct_UClass_AExperiments_NoRegister();
	CPPTRAINING_API UClass* Z_Construct_UClass_AExperiments();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CPPTraining();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void AExperiments::StaticRegisterNativesAExperiments()
	{
	}
	UClass* Z_Construct_UClass_AExperiments_NoRegister()
	{
		return AExperiments::StaticClass();
	}
	struct Z_Construct_UClass_AExperiments_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationOne_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocationOne;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CubeExtends_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CubeExtends;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AExperiments_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CPPTraining,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExperiments_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Experiments.h" },
		{ "ModuleRelativePath", "Experiments.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExperiments_Statics::NewProp_LocationOne_MetaData[] = {
		{ "Category", "Location" },
		{ "ModuleRelativePath", "Experiments.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AExperiments_Statics::NewProp_LocationOne = { "LocationOne", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExperiments, LocationOne), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AExperiments_Statics::NewProp_LocationOne_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExperiments_Statics::NewProp_LocationOne_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExperiments_Statics::NewProp_CubeExtends_MetaData[] = {
		{ "Category", "Location" },
		{ "ModuleRelativePath", "Experiments.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AExperiments_Statics::NewProp_CubeExtends = { "CubeExtends", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExperiments, CubeExtends), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AExperiments_Statics::NewProp_CubeExtends_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExperiments_Statics::NewProp_CubeExtends_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AExperiments_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExperiments_Statics::NewProp_LocationOne,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExperiments_Statics::NewProp_CubeExtends,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AExperiments_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExperiments>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AExperiments_Statics::ClassParams = {
		&AExperiments::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AExperiments_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AExperiments_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AExperiments_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AExperiments_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AExperiments()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AExperiments_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AExperiments, 308186768);
	template<> CPPTRAINING_API UClass* StaticClass<AExperiments>()
	{
		return AExperiments::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AExperiments(Z_Construct_UClass_AExperiments, &AExperiments::StaticClass, TEXT("/Script/CPPTraining"), TEXT("AExperiments"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AExperiments);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
