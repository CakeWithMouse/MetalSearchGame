// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoleSHitCharacter.h"

#ifdef HOLESHIT_HoleSHitCharacter_generated_h
#error "HoleSHitCharacter.generated.h already included, missing '#pragma once' in HoleSHitCharacter.h"
#endif
#define HOLESHIT_HoleSHitCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AHoleSHitCharacter *******************************************************
#define FID_HoleSHit_Source_HoleSHit_HoleSHitCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoMove); \
	DECLARE_FUNCTION(execDoAim);


struct Z_Construct_UClass_AHoleSHitCharacter_Statics;
HOLESHIT_API UClass* Z_Construct_UClass_AHoleSHitCharacter_NoRegister();

#define FID_HoleSHit_Source_HoleSHit_HoleSHitCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHoleSHitCharacter(); \
	friend struct ::Z_Construct_UClass_AHoleSHitCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HOLESHIT_API UClass* ::Z_Construct_UClass_AHoleSHitCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AHoleSHitCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/HoleSHit"), Z_Construct_UClass_AHoleSHitCharacter_NoRegister) \
	DECLARE_SERIALIZER(AHoleSHitCharacter)


#define FID_HoleSHit_Source_HoleSHit_HoleSHitCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AHoleSHitCharacter(AHoleSHitCharacter&&) = delete; \
	AHoleSHitCharacter(const AHoleSHitCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHoleSHitCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHoleSHitCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AHoleSHitCharacter) \
	NO_API virtual ~AHoleSHitCharacter();


#define FID_HoleSHit_Source_HoleSHit_HoleSHitCharacter_h_21_PROLOG
#define FID_HoleSHit_Source_HoleSHit_HoleSHitCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HoleSHit_Source_HoleSHit_HoleSHitCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HoleSHit_Source_HoleSHit_HoleSHitCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_HoleSHit_Source_HoleSHit_HoleSHitCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AHoleSHitCharacter;

// ********** End Class AHoleSHitCharacter *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HoleSHit_Source_HoleSHit_HoleSHitCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
