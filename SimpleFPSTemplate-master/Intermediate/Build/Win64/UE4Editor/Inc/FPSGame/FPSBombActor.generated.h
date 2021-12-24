// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPSGAME_FPSBombActor_generated_h
#error "FPSBombActor.generated.h already included, missing '#pragma once' in FPSBombActor.h"
#endif
#define FPSGAME_FPSBombActor_generated_h

#define SimpleFPSTemplate_master_Source_FPSGame_Public_FPSBombActor_h_16_SPARSE_DATA
#define SimpleFPSTemplate_master_Source_FPSGame_Public_FPSBombActor_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execExplode);


#define SimpleFPSTemplate_master_Source_FPSGame_Public_FPSBombActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execExplode);


#define SimpleFPSTemplate_master_Source_FPSGame_Public_FPSBombActor_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSBombActor(); \
	friend struct Z_Construct_UClass_AFPSBombActor_Statics; \
public: \
	DECLARE_CLASS(AFPSBombActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPSBombActor)


#define SimpleFPSTemplate_master_Source_FPSGame_Public_FPSBombActor_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAFPSBombActor(); \
	friend struct Z_Construct_UClass_AFPSBombActor_Statics; \
public: \
	DECLARE_CLASS(AFPSBombActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPSBombActor)


#define SimpleFPSTemplate_master_Source_FPSGame_Public_FPSBombActor_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSBombActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSBombActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSBombActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSBombActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSBombActor(AFPSBombActor&&); \
	NO_API AFPSBombActor(const AFPSBombActor&); \
public:


#define SimpleFPSTemplate_master_Source_FPSGame_Public_FPSBombActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSBombActor(AFPSBombActor&&); \
	NO_API AFPSBombActor(const AFPSBombActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSBombActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSBombActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSBombActor)


#define SimpleFPSTemplate_master_Source_FPSGame_Public_FPSBombActor_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComp() { return STRUCT_OFFSET(AFPSBombActor, MeshComp); } \
	FORCEINLINE static uint32 __PPO__ExplodeDelay() { return STRUCT_OFFSET(AFPSBombActor, ExplodeDelay); } \
	FORCEINLINE static uint32 __PPO__ExplosionTemplate() { return STRUCT_OFFSET(AFPSBombActor, ExplosionTemplate); }


#define SimpleFPSTemplate_master_Source_FPSGame_Public_FPSBombActor_h_13_PROLOG
#define SimpleFPSTemplate_master_Source_FPSGame_Public_FPSBombActor_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SimpleFPSTemplate_master_Source_FPSGame_Public_FPSBombActor_h_16_PRIVATE_PROPERTY_OFFSET \
	SimpleFPSTemplate_master_Source_FPSGame_Public_FPSBombActor_h_16_SPARSE_DATA \
	SimpleFPSTemplate_master_Source_FPSGame_Public_FPSBombActor_h_16_RPC_WRAPPERS \
	SimpleFPSTemplate_master_Source_FPSGame_Public_FPSBombActor_h_16_INCLASS \
	SimpleFPSTemplate_master_Source_FPSGame_Public_FPSBombActor_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SimpleFPSTemplate_master_Source_FPSGame_Public_FPSBombActor_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SimpleFPSTemplate_master_Source_FPSGame_Public_FPSBombActor_h_16_PRIVATE_PROPERTY_OFFSET \
	SimpleFPSTemplate_master_Source_FPSGame_Public_FPSBombActor_h_16_SPARSE_DATA \
	SimpleFPSTemplate_master_Source_FPSGame_Public_FPSBombActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	SimpleFPSTemplate_master_Source_FPSGame_Public_FPSBombActor_h_16_INCLASS_NO_PURE_DECLS \
	SimpleFPSTemplate_master_Source_FPSGame_Public_FPSBombActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSGAME_API UClass* StaticClass<class AFPSBombActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SimpleFPSTemplate_master_Source_FPSGame_Public_FPSBombActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
