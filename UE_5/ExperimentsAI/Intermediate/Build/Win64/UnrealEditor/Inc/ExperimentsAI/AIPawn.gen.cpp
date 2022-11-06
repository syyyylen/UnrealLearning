// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExperimentsAI/AIPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIPawn() {}
// Cross Module References
	EXPERIMENTSAI_API UClass* Z_Construct_UClass_AAIPawn_NoRegister();
	EXPERIMENTSAI_API UClass* Z_Construct_UClass_AAIPawn();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ExperimentsAI();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	EXPERIMENTSAI_API UClass* Z_Construct_UClass_UBaseAbility_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AAIPawn::execPlayMontage)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_MontageToPlay);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PlayMontage(Z_Param_MontageToPlay);
		P_NATIVE_END;
	}
	void AAIPawn::StaticRegisterNativesAAIPawn()
	{
		UClass* Class = AAIPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PlayMontage", &AAIPawn::execPlayMontage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAIPawn_PlayMontage_Statics
	{
		struct AIPawn_eventPlayMontage_Parms
		{
			UAnimMontage* MontageToPlay;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MontageToPlay;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAIPawn_PlayMontage_Statics::NewProp_MontageToPlay = { "MontageToPlay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIPawn_eventPlayMontage_Parms, MontageToPlay), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AAIPawn_PlayMontage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AIPawn_eventPlayMontage_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAIPawn_PlayMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AIPawn_eventPlayMontage_Parms), &Z_Construct_UFunction_AAIPawn_PlayMontage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIPawn_PlayMontage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIPawn_PlayMontage_Statics::NewProp_MontageToPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIPawn_PlayMontage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIPawn_PlayMontage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AIPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIPawn_PlayMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIPawn, nullptr, "PlayMontage", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAIPawn_PlayMontage_Statics::AIPawn_eventPlayMontage_Parms), Z_Construct_UFunction_AAIPawn_PlayMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIPawn_PlayMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAIPawn_PlayMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIPawn_PlayMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAIPawn_PlayMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAIPawn_PlayMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAIPawn);
	UClass* Z_Construct_UClass_AAIPawn_NoRegister()
	{
		return AAIPawn::StaticClass();
	}
	struct Z_Construct_UClass_AAIPawn_Statics
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAIPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ExperimentsAI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAIPawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAIPawn_PlayMontage, "PlayMontage" }, // 1846052455
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AIPawn.h" },
		{ "ModuleRelativePath", "AIPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIPawn_Statics::NewProp_Abilities_ValueProp = { "Abilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UBaseAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAIPawn_Statics::NewProp_Abilities_Key_KeyProp = { "Abilities_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIPawn_Statics::NewProp_Abilities_MetaData[] = {
		{ "Category", "AIPawn" },
		{ "ModuleRelativePath", "AIPawn.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AAIPawn_Statics::NewProp_Abilities = { "Abilities", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIPawn, Abilities), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AAIPawn_Statics::NewProp_Abilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIPawn_Statics::NewProp_Abilities_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIPawn_Statics::NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "Category", "AIPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AIPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIPawn_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIPawn, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAIPawn_Statics::NewProp_SkeletalMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIPawn_Statics::NewProp_SkeletalMeshComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAIPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIPawn_Statics::NewProp_Abilities_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIPawn_Statics::NewProp_Abilities_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIPawn_Statics::NewProp_Abilities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIPawn_Statics::NewProp_SkeletalMeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAIPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAIPawn_Statics::ClassParams = {
		&AAIPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAIPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAIPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAIPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAIPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAIPawn()
	{
		if (!Z_Registration_Info_UClass_AAIPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAIPawn.OuterSingleton, Z_Construct_UClass_AAIPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAIPawn.OuterSingleton;
	}
	template<> EXPERIMENTSAI_API UClass* StaticClass<AAIPawn>()
	{
		return AAIPawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAIPawn);
	struct Z_CompiledInDeferFile_FID_ExperimentsAI_Source_ExperimentsAI_AIPawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ExperimentsAI_Source_ExperimentsAI_AIPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAIPawn, AAIPawn::StaticClass, TEXT("AAIPawn"), &Z_Registration_Info_UClass_AAIPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAIPawn), 3502697597U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ExperimentsAI_Source_ExperimentsAI_AIPawn_h_1548480547(TEXT("/Script/ExperimentsAI"),
		Z_CompiledInDeferFile_FID_ExperimentsAI_Source_ExperimentsAI_AIPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ExperimentsAI_Source_ExperimentsAI_AIPawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
