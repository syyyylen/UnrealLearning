// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EXPERIMENTS_ComboCondition_generated_h
#error "ComboCondition.generated.h already included, missing '#pragma once' in ComboCondition.h"
#endif
#define EXPERIMENTS_ComboCondition_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Experiments_Source_Experiments_Public_ComboCondition_h


#define FOREACH_ENUM_COMBOCONDITION(op) \
	op(ComboCondition::None) \
	op(ComboCondition::Ground) \
	op(ComboCondition::Air) 

enum class ComboCondition : uint8;
template<> EXPERIMENTS_API UEnum* StaticEnum<ComboCondition>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
