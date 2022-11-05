// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EXPERIMENTS_ComboInputs_generated_h
#error "ComboInputs.generated.h already included, missing '#pragma once' in ComboInputs.h"
#endif
#define EXPERIMENTS_ComboInputs_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Experiments_Source_Experiments_Public_ComboInputs_h


#define FOREACH_ENUM_COMBOINPUT(op) \
	op(ComboInput::None) \
	op(ComboInput::LightAttack) \
	op(ComboInput::HeavyAttack) \
	op(ComboInput::Jump) \
	op(ComboInput::Dash) 

enum class ComboInput : uint8;
template<> EXPERIMENTS_API UEnum* StaticEnum<ComboInput>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
