// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef CPPTRAINING_CPPTrainingProjectile_generated_h
#error "CPPTrainingProjectile.generated.h already included, missing '#pragma once' in CPPTrainingProjectile.h"
#endif
#define CPPTRAINING_CPPTrainingProjectile_generated_h

#define CPPTraining_Source_CPPTraining_CPPTrainingProjectile_h_15_SPARSE_DATA
#define CPPTraining_Source_CPPTraining_CPPTrainingProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define CPPTraining_Source_CPPTraining_CPPTrainingProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define CPPTraining_Source_CPPTraining_CPPTrainingProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACPPTrainingProjectile(); \
	friend struct Z_Construct_UClass_ACPPTrainingProjectile_Statics; \
public: \
	DECLARE_CLASS(ACPPTrainingProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CPPTraining"), NO_API) \
	DECLARE_SERIALIZER(ACPPTrainingProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define CPPTraining_Source_CPPTraining_CPPTrainingProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesACPPTrainingProjectile(); \
	friend struct Z_Construct_UClass_ACPPTrainingProjectile_Statics; \
public: \
	DECLARE_CLASS(ACPPTrainingProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CPPTraining"), NO_API) \
	DECLARE_SERIALIZER(ACPPTrainingProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define CPPTraining_Source_CPPTraining_CPPTrainingProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACPPTrainingProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACPPTrainingProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPPTrainingProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPPTrainingProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACPPTrainingProjectile(ACPPTrainingProjectile&&); \
	NO_API ACPPTrainingProjectile(const ACPPTrainingProjectile&); \
public:


#define CPPTraining_Source_CPPTraining_CPPTrainingProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACPPTrainingProjectile(ACPPTrainingProjectile&&); \
	NO_API ACPPTrainingProjectile(const ACPPTrainingProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPPTrainingProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPPTrainingProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACPPTrainingProjectile)


#define CPPTraining_Source_CPPTraining_CPPTrainingProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ACPPTrainingProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ACPPTrainingProjectile, ProjectileMovement); }


#define CPPTraining_Source_CPPTraining_CPPTrainingProjectile_h_12_PROLOG
#define CPPTraining_Source_CPPTraining_CPPTrainingProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CPPTraining_Source_CPPTraining_CPPTrainingProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	CPPTraining_Source_CPPTraining_CPPTrainingProjectile_h_15_SPARSE_DATA \
	CPPTraining_Source_CPPTraining_CPPTrainingProjectile_h_15_RPC_WRAPPERS \
	CPPTraining_Source_CPPTraining_CPPTrainingProjectile_h_15_INCLASS \
	CPPTraining_Source_CPPTraining_CPPTrainingProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CPPTraining_Source_CPPTraining_CPPTrainingProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CPPTraining_Source_CPPTraining_CPPTrainingProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	CPPTraining_Source_CPPTraining_CPPTrainingProjectile_h_15_SPARSE_DATA \
	CPPTraining_Source_CPPTraining_CPPTrainingProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	CPPTraining_Source_CPPTraining_CPPTrainingProjectile_h_15_INCLASS_NO_PURE_DECLS \
	CPPTraining_Source_CPPTraining_CPPTrainingProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPPTRAINING_API UClass* StaticClass<class ACPPTrainingProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CPPTraining_Source_CPPTraining_CPPTrainingProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
