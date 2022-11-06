// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
#ifdef EXPERIMENTSAI_AIPawn_generated_h
#error "AIPawn.generated.h already included, missing '#pragma once' in AIPawn.h"
#endif
#define EXPERIMENTSAI_AIPawn_generated_h

#define FID_ExperimentsAI_Source_ExperimentsAI_AIPawn_h_13_SPARSE_DATA
#define FID_ExperimentsAI_Source_ExperimentsAI_AIPawn_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPlayMontage);


#define FID_ExperimentsAI_Source_ExperimentsAI_AIPawn_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPlayMontage);


#define FID_ExperimentsAI_Source_ExperimentsAI_AIPawn_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAIPawn(); \
	friend struct Z_Construct_UClass_AAIPawn_Statics; \
public: \
	DECLARE_CLASS(AAIPawn, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ExperimentsAI"), NO_API) \
	DECLARE_SERIALIZER(AAIPawn)


#define FID_ExperimentsAI_Source_ExperimentsAI_AIPawn_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAAIPawn(); \
	friend struct Z_Construct_UClass_AAIPawn_Statics; \
public: \
	DECLARE_CLASS(AAIPawn, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ExperimentsAI"), NO_API) \
	DECLARE_SERIALIZER(AAIPawn)


#define FID_ExperimentsAI_Source_ExperimentsAI_AIPawn_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAIPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAIPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAIPawn(AAIPawn&&); \
	NO_API AAIPawn(const AAIPawn&); \
public:


#define FID_ExperimentsAI_Source_ExperimentsAI_AIPawn_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAIPawn(AAIPawn&&); \
	NO_API AAIPawn(const AAIPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAIPawn)


#define FID_ExperimentsAI_Source_ExperimentsAI_AIPawn_h_10_PROLOG
#define FID_ExperimentsAI_Source_ExperimentsAI_AIPawn_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ExperimentsAI_Source_ExperimentsAI_AIPawn_h_13_SPARSE_DATA \
	FID_ExperimentsAI_Source_ExperimentsAI_AIPawn_h_13_RPC_WRAPPERS \
	FID_ExperimentsAI_Source_ExperimentsAI_AIPawn_h_13_INCLASS \
	FID_ExperimentsAI_Source_ExperimentsAI_AIPawn_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ExperimentsAI_Source_ExperimentsAI_AIPawn_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ExperimentsAI_Source_ExperimentsAI_AIPawn_h_13_SPARSE_DATA \
	FID_ExperimentsAI_Source_ExperimentsAI_AIPawn_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ExperimentsAI_Source_ExperimentsAI_AIPawn_h_13_INCLASS_NO_PURE_DECLS \
	FID_ExperimentsAI_Source_ExperimentsAI_AIPawn_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EXPERIMENTSAI_API UClass* StaticClass<class AAIPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ExperimentsAI_Source_ExperimentsAI_AIPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
