// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EXPERIMENTSAI_BaseAbility_generated_h
#error "BaseAbility.generated.h already included, missing '#pragma once' in BaseAbility.h"
#endif
#define EXPERIMENTSAI_BaseAbility_generated_h

#define FID_ExperimentsAI_Source_ExperimentsAI_BaseAbility_h_15_SPARSE_DATA
#define FID_ExperimentsAI_Source_ExperimentsAI_BaseAbility_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStartCooldown); \
	DECLARE_FUNCTION(execOnCooldown);


#define FID_ExperimentsAI_Source_ExperimentsAI_BaseAbility_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStartCooldown); \
	DECLARE_FUNCTION(execOnCooldown);


#define FID_ExperimentsAI_Source_ExperimentsAI_BaseAbility_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseAbility(); \
	friend struct Z_Construct_UClass_UBaseAbility_Statics; \
public: \
	DECLARE_CLASS(UBaseAbility, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ExperimentsAI"), NO_API) \
	DECLARE_SERIALIZER(UBaseAbility)


#define FID_ExperimentsAI_Source_ExperimentsAI_BaseAbility_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUBaseAbility(); \
	friend struct Z_Construct_UClass_UBaseAbility_Statics; \
public: \
	DECLARE_CLASS(UBaseAbility, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ExperimentsAI"), NO_API) \
	DECLARE_SERIALIZER(UBaseAbility)


#define FID_ExperimentsAI_Source_ExperimentsAI_BaseAbility_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseAbility) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseAbility); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseAbility(UBaseAbility&&); \
	NO_API UBaseAbility(const UBaseAbility&); \
public:


#define FID_ExperimentsAI_Source_ExperimentsAI_BaseAbility_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseAbility(UBaseAbility&&); \
	NO_API UBaseAbility(const UBaseAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseAbility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseAbility)


#define FID_ExperimentsAI_Source_ExperimentsAI_BaseAbility_h_12_PROLOG
#define FID_ExperimentsAI_Source_ExperimentsAI_BaseAbility_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ExperimentsAI_Source_ExperimentsAI_BaseAbility_h_15_SPARSE_DATA \
	FID_ExperimentsAI_Source_ExperimentsAI_BaseAbility_h_15_RPC_WRAPPERS \
	FID_ExperimentsAI_Source_ExperimentsAI_BaseAbility_h_15_INCLASS \
	FID_ExperimentsAI_Source_ExperimentsAI_BaseAbility_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ExperimentsAI_Source_ExperimentsAI_BaseAbility_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ExperimentsAI_Source_ExperimentsAI_BaseAbility_h_15_SPARSE_DATA \
	FID_ExperimentsAI_Source_ExperimentsAI_BaseAbility_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ExperimentsAI_Source_ExperimentsAI_BaseAbility_h_15_INCLASS_NO_PURE_DECLS \
	FID_ExperimentsAI_Source_ExperimentsAI_BaseAbility_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EXPERIMENTSAI_API UClass* StaticClass<class UBaseAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ExperimentsAI_Source_ExperimentsAI_BaseAbility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
