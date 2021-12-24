// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOSSFIGHT_Boss_generated_h
#error "Boss.generated.h already included, missing '#pragma once' in Boss.h"
#endif
#define BOSSFIGHT_Boss_generated_h

#define BossFight_Source_BossFight_Boss_h_12_SPARSE_DATA
#define BossFight_Source_BossFight_Boss_h_12_RPC_WRAPPERS
#define BossFight_Source_BossFight_Boss_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define BossFight_Source_BossFight_Boss_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABoss(); \
	friend struct Z_Construct_UClass_ABoss_Statics; \
public: \
	DECLARE_CLASS(ABoss, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BossFight"), NO_API) \
	DECLARE_SERIALIZER(ABoss)


#define BossFight_Source_BossFight_Boss_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABoss(); \
	friend struct Z_Construct_UClass_ABoss_Statics; \
public: \
	DECLARE_CLASS(ABoss, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BossFight"), NO_API) \
	DECLARE_SERIALIZER(ABoss)


#define BossFight_Source_BossFight_Boss_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABoss(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABoss) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoss); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoss); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoss(ABoss&&); \
	NO_API ABoss(const ABoss&); \
public:


#define BossFight_Source_BossFight_Boss_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoss(ABoss&&); \
	NO_API ABoss(const ABoss&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoss); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoss); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABoss)


#define BossFight_Source_BossFight_Boss_h_12_PRIVATE_PROPERTY_OFFSET
#define BossFight_Source_BossFight_Boss_h_9_PROLOG
#define BossFight_Source_BossFight_Boss_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BossFight_Source_BossFight_Boss_h_12_PRIVATE_PROPERTY_OFFSET \
	BossFight_Source_BossFight_Boss_h_12_SPARSE_DATA \
	BossFight_Source_BossFight_Boss_h_12_RPC_WRAPPERS \
	BossFight_Source_BossFight_Boss_h_12_INCLASS \
	BossFight_Source_BossFight_Boss_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BossFight_Source_BossFight_Boss_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BossFight_Source_BossFight_Boss_h_12_PRIVATE_PROPERTY_OFFSET \
	BossFight_Source_BossFight_Boss_h_12_SPARSE_DATA \
	BossFight_Source_BossFight_Boss_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	BossFight_Source_BossFight_Boss_h_12_INCLASS_NO_PURE_DECLS \
	BossFight_Source_BossFight_Boss_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOSSFIGHT_API UClass* StaticClass<class ABoss>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BossFight_Source_BossFight_Boss_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
