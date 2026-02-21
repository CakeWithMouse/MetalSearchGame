// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoleShitProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef HOLESHIT_HoleShitProjectile_generated_h
#error "HoleShitProjectile.generated.h already included, missing '#pragma once' in HoleShitProjectile.h"
#endif
#define HOLESHIT_HoleShitProjectile_generated_h

#define FID_HoleShit_Source_HoleShit_HoleShitProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_HoleShit_Source_HoleShit_HoleShitProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHoleShitProjectile(); \
	friend struct Z_Construct_UClass_AHoleShitProjectile_Statics; \
public: \
	DECLARE_CLASS(AHoleShitProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HoleShit"), NO_API) \
	DECLARE_SERIALIZER(AHoleShitProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_HoleShit_Source_HoleShit_HoleShitProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AHoleShitProjectile(AHoleShitProjectile&&); \
	AHoleShitProjectile(const AHoleShitProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHoleShitProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHoleShitProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHoleShitProjectile) \
	NO_API virtual ~AHoleShitProjectile();


#define FID_HoleShit_Source_HoleShit_HoleShitProjectile_h_12_PROLOG
#define FID_HoleShit_Source_HoleShit_HoleShitProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HoleShit_Source_HoleShit_HoleShitProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HoleShit_Source_HoleShit_HoleShitProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_HoleShit_Source_HoleShit_HoleShitProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOLESHIT_API UClass* StaticClass<class AHoleShitProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HoleShit_Source_HoleShit_HoleShitProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
