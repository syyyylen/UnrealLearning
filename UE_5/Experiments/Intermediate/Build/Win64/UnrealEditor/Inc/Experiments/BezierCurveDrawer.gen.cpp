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
	DEFINE_FUNCTION(ABezierCurveDrawer::execPreviewCurve)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PreviewCurve();
		P_NATIVE_END;
	}
	void ABezierCurveDrawer::StaticRegisterNativesABezierCurveDrawer()
	{
		UClass* Class = ABezierCurveDrawer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PreviewCurve", &ABezierCurveDrawer::execPreviewCurve },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABezierCurveDrawer_PreviewCurve_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABezierCurveDrawer_PreviewCurve_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/BezierCurveDrawer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABezierCurveDrawer_PreviewCurve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABezierCurveDrawer, nullptr, "PreviewCurve", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABezierCurveDrawer_PreviewCurve_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABezierCurveDrawer_PreviewCurve_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABezierCurveDrawer_PreviewCurve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABezierCurveDrawer_PreviewCurve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABezierCurveDrawer);
	UClass* Z_Construct_UClass_ABezierCurveDrawer_NoRegister()
	{
		return ABezierCurveDrawer::StaticClass();
	}
	struct Z_Construct_UClass_ABezierCurveDrawer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_previewPrecisionCount_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_m_previewPrecisionCount;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_ctrlPt2_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_m_ctrlPt2;
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
	const FClassFunctionLinkInfo Z_Construct_UClass_ABezierCurveDrawer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABezierCurveDrawer_PreviewCurve, "PreviewCurve" }, // 3688057796
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABezierCurveDrawer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BezierCurveDrawer.h" },
		{ "ModuleRelativePath", "Public/BezierCurveDrawer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABezierCurveDrawer_Statics::NewProp_m_previewPrecisionCount_MetaData[] = {
		{ "Category", "BezierCurveDrawer" },
		{ "ModuleRelativePath", "Public/BezierCurveDrawer.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABezierCurveDrawer_Statics::NewProp_m_previewPrecisionCount = { "m_previewPrecisionCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABezierCurveDrawer, m_previewPrecisionCount), METADATA_PARAMS(Z_Construct_UClass_ABezierCurveDrawer_Statics::NewProp_m_previewPrecisionCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABezierCurveDrawer_Statics::NewProp_m_previewPrecisionCount_MetaData)) };
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABezierCurveDrawer_Statics::NewProp_m_ctrlPt2_MetaData[] = {
		{ "Category", "BezierCurveDrawer" },
		{ "ModuleRelativePath", "Public/BezierCurveDrawer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABezierCurveDrawer_Statics::NewProp_m_ctrlPt2 = { "m_ctrlPt2", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABezierCurveDrawer, m_ctrlPt2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABezierCurveDrawer_Statics::NewProp_m_ctrlPt2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABezierCurveDrawer_Statics::NewProp_m_ctrlPt2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABezierCurveDrawer_Statics::NewProp_m_drawDuration_MetaData[] = {
		{ "Category", "BezierCurveDrawer" },
		{ "ModuleRelativePath", "Public/BezierCurveDrawer.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABezierCurveDrawer_Statics::NewProp_m_drawDuration = { "m_drawDuration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABezierCurveDrawer, m_drawDuration), METADATA_PARAMS(Z_Construct_UClass_ABezierCurveDrawer_Statics::NewProp_m_drawDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABezierCurveDrawer_Statics::NewProp_m_drawDuration_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABezierCurveDrawer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABezierCurveDrawer_Statics::NewProp_m_previewPrecisionCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABezierCurveDrawer_Statics::NewProp_m_start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABezierCurveDrawer_Statics::NewProp_m_end,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABezierCurveDrawer_Statics::NewProp_m_ctrlPt1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABezierCurveDrawer_Statics::NewProp_m_ctrlPt2,
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
		FuncInfo,
		Z_Construct_UClass_ABezierCurveDrawer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_ABezierCurveDrawer, ABezierCurveDrawer::StaticClass, TEXT("ABezierCurveDrawer"), &Z_Registration_Info_UClass_ABezierCurveDrawer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABezierCurveDrawer), 1035038235U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Experiments_Source_Experiments_Public_BezierCurveDrawer_h_2019905544(TEXT("/Script/Experiments"),
		Z_CompiledInDeferFile_FID_Experiments_Source_Experiments_Public_BezierCurveDrawer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Experiments_Source_Experiments_Public_BezierCurveDrawer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
