// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTask;
struct FColor;
#ifdef EXPERIMENTSAI_AdvancedAIController_generated_h
#error "AdvancedAIController.generated.h already included, missing '#pragma once' in AdvancedAIController.h"
#endif
#define EXPERIMENTSAI_AdvancedAIController_generated_h

#define FID_ExperimentsAI_Source_ExperimentsAI_AdvancedAIController_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAbilityParameters_Statics; \
	EXPERIMENTSAI_API static class UScriptStruct* StaticStruct();


template<> EXPERIMENTSAI_API UScriptStruct* StaticStruct<struct FAbilityParameters>();

#define FID_ExperimentsAI_Source_ExperimentsAI_AdvancedAIController_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovementParameters_Statics; \
	EXPERIMENTSAI_API static class UScriptStruct* StaticStruct();


template<> EXPERIMENTSAI_API UScriptStruct* StaticStruct<struct FMovementParameters>();

#define FID_ExperimentsAI_Source_ExperimentsAI_AdvancedAIController_h_55_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTask_Statics; \
	EXPERIMENTSAI_API static class UScriptStruct* StaticStruct();


template<> EXPERIMENTSAI_API UScriptStruct* StaticStruct<struct FTask>();

#define FID_ExperimentsAI_Source_ExperimentsAI_AdvancedAIController_h_76_SPARSE_DATA
#define FID_ExperimentsAI_Source_ExperimentsAI_AdvancedAIController_h_76_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUseAbility); \
	DECLARE_FUNCTION(execDebugTask); \
	DECLARE_FUNCTION(execDebugMsg);


#define FID_ExperimentsAI_Source_ExperimentsAI_AdvancedAIController_h_76_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUseAbility); \
	DECLARE_FUNCTION(execDebugTask); \
	DECLARE_FUNCTION(execDebugMsg);


#define FID_ExperimentsAI_Source_ExperimentsAI_AdvancedAIController_h_76_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAdvancedAIController(); \
	friend struct Z_Construct_UClass_AAdvancedAIController_Statics; \
public: \
	DECLARE_CLASS(AAdvancedAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ExperimentsAI"), NO_API) \
	DECLARE_SERIALIZER(AAdvancedAIController)


#define FID_ExperimentsAI_Source_ExperimentsAI_AdvancedAIController_h_76_INCLASS \
private: \
	static void StaticRegisterNativesAAdvancedAIController(); \
	friend struct Z_Construct_UClass_AAdvancedAIController_Statics; \
public: \
	DECLARE_CLASS(AAdvancedAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ExperimentsAI"), NO_API) \
	DECLARE_SERIALIZER(AAdvancedAIController)


#define FID_ExperimentsAI_Source_ExperimentsAI_AdvancedAIController_h_76_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAdvancedAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAdvancedAIController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAdvancedAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAdvancedAIController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAdvancedAIController(AAdvancedAIController&&); \
	NO_API AAdvancedAIController(const AAdvancedAIController&); \
public:


#define FID_ExperimentsAI_Source_ExperimentsAI_AdvancedAIController_h_76_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAdvancedAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAdvancedAIController(AAdvancedAIController&&); \
	NO_API AAdvancedAIController(const AAdvancedAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAdvancedAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAdvancedAIController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAdvancedAIController)


#define FID_ExperimentsAI_Source_ExperimentsAI_AdvancedAIController_h_73_PROLOG
#define FID_ExperimentsAI_Source_ExperimentsAI_AdvancedAIController_h_76_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ExperimentsAI_Source_ExperimentsAI_AdvancedAIController_h_76_SPARSE_DATA \
	FID_ExperimentsAI_Source_ExperimentsAI_AdvancedAIController_h_76_RPC_WRAPPERS \
	FID_ExperimentsAI_Source_ExperimentsAI_AdvancedAIController_h_76_INCLASS \
	FID_ExperimentsAI_Source_ExperimentsAI_AdvancedAIController_h_76_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ExperimentsAI_Source_ExperimentsAI_AdvancedAIController_h_76_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ExperimentsAI_Source_ExperimentsAI_AdvancedAIController_h_76_SPARSE_DATA \
	FID_ExperimentsAI_Source_ExperimentsAI_AdvancedAIController_h_76_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ExperimentsAI_Source_ExperimentsAI_AdvancedAIController_h_76_INCLASS_NO_PURE_DECLS \
	FID_ExperimentsAI_Source_ExperimentsAI_AdvancedAIController_h_76_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EXPERIMENTSAI_API UClass* StaticClass<class AAdvancedAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ExperimentsAI_Source_ExperimentsAI_AdvancedAIController_h


#define FOREACH_ENUM_ETASKTYPE(op) \
	op(ETaskType::Ability) \
	op(ETaskType::Movement) 

enum class ETaskType : uint8;
template<> EXPERIMENTSAI_API UEnum* StaticEnum<ETaskType>();

#define FOREACH_ENUM_EPRIORITYLEVEL(op) \
	op(EPriorityLevel::ExecuteInstantly) \
	op(EPriorityLevel::PriorityQueue) \
	op(EPriorityLevel::Enqueue) 

enum class EPriorityLevel : uint8;
template<> EXPERIMENTSAI_API UEnum* StaticEnum<EPriorityLevel>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
