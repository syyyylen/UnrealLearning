// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExperimentsAI/AdvancedAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvancedAIController() {}
// Cross Module References
	EXPERIMENTSAI_API UClass* Z_Construct_UClass_AAdvancedAIController_NoRegister();
	EXPERIMENTSAI_API UClass* Z_Construct_UClass_AAdvancedAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_ExperimentsAI();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	EXPERIMENTSAI_API UClass* Z_Construct_UClass_UBaseAbility_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AAdvancedAIController::execDebugMsg)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Content);
		P_GET_STRUCT(FColor,Z_Param_Color);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugMsg(Z_Param_Content,Z_Param_Color);
		P_NATIVE_END;
	}
	void AAdvancedAIController::StaticRegisterNativesAAdvancedAIController()
	{
		UClass* Class = AAdvancedAIController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DebugMsg", &AAdvancedAIController::execDebugMsg },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAdvancedAIController_DebugMsg_Statics
	{
		struct AdvancedAIController_eventDebugMsg_Parms
		{
			FString Content;
			FColor Color;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Content;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AAdvancedAIController_DebugMsg_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedAIController_eventDebugMsg_Parms, Content), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdvancedAIController_DebugMsg_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedAIController_eventDebugMsg_Parms, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdvancedAIController_DebugMsg_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvancedAIController_DebugMsg_Statics::NewProp_Content,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdvancedAIController_DebugMsg_Statics::NewProp_Color,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAdvancedAIController_DebugMsg_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AdvancedAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdvancedAIController_DebugMsg_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAdvancedAIController, nullptr, "DebugMsg", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAdvancedAIController_DebugMsg_Statics::AdvancedAIController_eventDebugMsg_Parms), Z_Construct_UFunction_AAdvancedAIController_DebugMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvancedAIController_DebugMsg_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAdvancedAIController_DebugMsg_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdvancedAIController_DebugMsg_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAdvancedAIController_DebugMsg()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAdvancedAIController_DebugMsg_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAdvancedAIController);
	UClass* Z_Construct_UClass_AAdvancedAIController_NoRegister()
	{
		return AAdvancedAIController::StaticClass();
	}
	struct Z_Construct_UClass_AAdvancedAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Abilities_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Abilities_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Abilities_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Abilities;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAdvancedAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_ExperimentsAI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAdvancedAIController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAdvancedAIController_DebugMsg, "DebugMsg" }, // 2535459391
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvancedAIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AdvancedAIController.h" },
		{ "ModuleRelativePath", "AdvancedAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAdvancedAIController_Statics::NewProp_Abilities_ValueProp = { "Abilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UBaseAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAdvancedAIController_Statics::NewProp_Abilities_Key_KeyProp = { "Abilities_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvancedAIController_Statics::NewProp_Abilities_MetaData[] = {
		{ "Category", "AdvancedAIController" },
		{ "ModuleRelativePath", "AdvancedAIController.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AAdvancedAIController_Statics::NewProp_Abilities = { "Abilities", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAdvancedAIController, Abilities), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AAdvancedAIController_Statics::NewProp_Abilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvancedAIController_Statics::NewProp_Abilities_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAdvancedAIController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvancedAIController_Statics::NewProp_Abilities_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvancedAIController_Statics::NewProp_Abilities_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvancedAIController_Statics::NewProp_Abilities,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAdvancedAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAdvancedAIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAdvancedAIController_Statics::ClassParams = {
		&AAdvancedAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAdvancedAIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAdvancedAIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAdvancedAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvancedAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAdvancedAIController()
	{
		if (!Z_Registration_Info_UClass_AAdvancedAIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAdvancedAIController.OuterSingleton, Z_Construct_UClass_AAdvancedAIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAdvancedAIController.OuterSingleton;
	}
	template<> EXPERIMENTSAI_API UClass* StaticClass<AAdvancedAIController>()
	{
		return AAdvancedAIController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAdvancedAIController);
	struct Z_CompiledInDeferFile_FID_ExperimentsAI_Source_ExperimentsAI_AdvancedAIController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ExperimentsAI_Source_ExperimentsAI_AdvancedAIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAdvancedAIController, AAdvancedAIController::StaticClass, TEXT("AAdvancedAIController"), &Z_Registration_Info_UClass_AAdvancedAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAdvancedAIController), 3418337926U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ExperimentsAI_Source_ExperimentsAI_AdvancedAIController_h_2524316523(TEXT("/Script/ExperimentsAI"),
		Z_CompiledInDeferFile_FID_ExperimentsAI_Source_ExperimentsAI_AdvancedAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ExperimentsAI_Source_ExperimentsAI_AdvancedAIController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
