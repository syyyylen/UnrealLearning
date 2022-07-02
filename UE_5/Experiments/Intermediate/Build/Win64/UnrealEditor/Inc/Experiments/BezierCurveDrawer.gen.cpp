// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Experiments/Public/BezierCurveDrawer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBezierCurveDrawer() {}
// Cross Module References
	EXPERIMENTS_API UClass* Z_Construct_UClass_ABezierCurveDrawer_NoRegister();
	EXPERIMENTS_API UClass* Z_Construct_UClass_ABezierCurveDrawer();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Experiments();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void ABezierCurveDrawer::StaticRegisterNativesABezierCurveDrawer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABezierCurveDrawer);
	UClass* Z_Construct_UClass_ABezierCurveDrawer_NoRegister()
	{
		return ABezierCurveDrawer::StaticClass();
	}
	struct Z_Construct_UClass_ABezierCurveDrawer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_start_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_m_start;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_end_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_m_end;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_ctrlPt1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_m_ctrlPt1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_tValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_tValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_drawDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_drawDuration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABezierCurveDrawer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Experiments,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABezierCurveDrawer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BezierCurveDrawer.h" },
		{ "ModuleRelativePath", "Public/BezierCurveDrawer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABezierCurveDrawer_Statics::NewProp_m_start_MetaData[] = {
		{ "Category", "BezierCurveDrawer" },
		{ "ModuleRelativePath", "Public/BezierCurveDrawer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABezierCurveDrawer_Statics::NewProp_m_start = { "m_start", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABezierCurveDrawer, m_start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABezierCurveDrawer_Statics::NewProp_m_start_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABezierCurveDrawer_Statics::NewProp_m_start_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABezierCurveDrawer_Statics::NewProp_m_end_MetaData[] = {
		{ "Category", "BezierCurveDrawer" },
		{ "ModuleRelativePath", "Public/BezierCurveDrawer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABezierCurveDrawer_Statics::NewProp_m_end = { "m_end", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABezierCurveDrawer, m_end), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABezierCurveDrawer_Statics::NewProp_m_end_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABezierCurveDrawer_Statics::NewProp_m_end_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABezierCurveDrawer_Statics::NewProp_m_ctrlPt1_MetaData[] = {
		{ "Category", "BezierCurveDrawer" },
		{ "ModuleRelativePath", "Public/BezierCurveDrawer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABezierCurveDrawer_Statics::NewProp_m_ctrlPt1 = { "m_ctrlPt1", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABezierCurveDrawer, m_ctrlPt1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABezierCurveDrawer_Statics::NewProp_m_ctrlPt1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABezierCurveDrawer_Statics::NewProp_m_ctrlPt1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABezierCurveDrawer_Statics::NewProp_m_tValue_MetaData[] = {
		{ "Category", "BezierCurveDrawer" },
		{ "ModuleRelativePath", "Public/BezierCurveDrawer.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABezierCurveDrawer_Statics::NewProp_m_tValue = { "m_tValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABezierCurveDrawer, m_tValue), METADATA_PARAMS(Z_Construct_UClass_ABezierCurveDrawer_Statics::NewProp_m_tValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABezierCurveDrawer_Statics::NewProp_m_tValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABezierCurveDrawer_Statics::NewProp_m_drawDuration_MetaData[] = {
		{ "Category", "BezierCurveDrawer" },
		{ "ModuleRelativePath", "Public/BezierCurveDrawer.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABezierCurveDrawer_Statics::NewProp_m_drawDuration = { "m_drawDuration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABezierCurveDrawer, m_drawDuration), METADATA_PARAMS(Z_Construct_UClass_ABezierCurveDrawer_Statics::NewProp_m_drawDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABezierCurveDrawer_Statics::NewProp_m_drawDuration_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABezierCurveDrawer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABezierCurveDrawer_Statics::NewProp_m_start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABezierCurveDrawer_Statics::NewProp_m_end,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABezierCurveDrawer_Statics::NewProp_m_ctrlPt1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABezierCurveDrawer_Statics::NewProp_m_tValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABezierCurveDrawer_Statics::NewProp_m_drawDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABezierCurveDrawer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABezierCurveDrawer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABezierCurveDrawer_Statics::ClassParams = {
		&ABezierCurveDrawer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABezierCurveDrawer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABezierCurveDrawer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABezierCurveDrawer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABezierCurveDrawer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABezierCurveDrawer()
	{
		if (!Z_Registration_Info_UClass_ABezierCurveDrawer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABezierCurveDrawer.OuterSingleton, Z_Construct_UClass_ABezierCurveDrawer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABezierCurveDrawer.OuterSingleton;
	}
	template<> EXPERIMENTS_API UClass* StaticClass<ABezierCurveDrawer>()
	{
		return ABezierCurveDrawer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABezierCurveDrawer);
	struct Z_CompiledInDeferFile_FID_Experiments_Source_Experiments_Public_BezierCurveDrawer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Experiments_Source_Experiments_Public_BezierCurveDrawer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABezierCurveDrawer, ABezierCurveDrawer::StaticClass, TEXT("ABezierCurveDrawer"), &Z_Registration_Info_UClass_ABezierCurveDrawer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABezierCurveDrawer), 729306300U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Experiments_Source_Experiments_Public_BezierCurveDrawer_h_3479375851(TEXT("/Script/Experiments"),
		Z_CompiledInDeferFile_FID_Experiments_Source_Experiments_Public_BezierCurveDrawer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Experiments_Source_Experiments_Public_BezierCurveDrawer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
