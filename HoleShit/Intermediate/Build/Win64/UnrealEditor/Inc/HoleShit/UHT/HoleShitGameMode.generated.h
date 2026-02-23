// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoleSHitGameMode.h"

#ifdef HOLESHIT_HoleSHitGameMode_generated_h
#error "HoleSHitGameMode.generated.h already included, missing '#pragma once' in HoleSHitGameMode.h"
#endif
#define HOLESHIT_HoleSHitGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AHoleSHitGameMode ********************************************************
struct Z_Construct_UClass_AHoleSHitGameMode_Statics;
HOLESHIT_API UClass* Z_Construct_UClass_AHoleSHitGameMode_NoRegister();

#define FID_HoleSHit_Source_HoleSHit_HoleSHitGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHoleSHitGameMode(); \
	friend struct ::Z_Construct_UClass_AHoleSHitGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HOLESHIT_API UClass* ::Z_Construct_UClass_AHoleSHitGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(AHoleSHitGameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/HoleSHit"), Z_Construct_UClass_AHoleSHitGameMode_NoRegister) \
	DECLARE_SERIALIZER(AHoleSHitGameMode)


#define FID_HoleSHit_Source_HoleSHit_HoleSHitGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AHoleSHitGameMode(AHoleSHitGameMode&&) = delete; \
	AHoleSHitGameMode(const AHoleSHitGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHoleSHitGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHoleSHitGameMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AHoleSHitGameMode) \
	NO_API virtual ~AHoleSHitGameMode();


#define FID_HoleSHit_Source_HoleSHit_HoleSHitGameMode_h_12_PROLOG
#define FID_HoleSHit_Source_HoleSHit_HoleSHitGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HoleSHit_Source_HoleSHit_HoleSHitGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_HoleSHit_Source_HoleSHit_HoleSHitGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AHoleSHitGameMode;

// ********** End Class AHoleSHitGameMode **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HoleSHit_Source_HoleSHit_HoleSHitGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
