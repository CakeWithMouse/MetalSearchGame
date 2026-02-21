// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoleShitWeaponComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AHoleShitCharacter;
#ifdef HOLESHIT_HoleShitWeaponComponent_generated_h
#error "HoleShitWeaponComponent.generated.h already included, missing '#pragma once' in HoleShitWeaponComponent.h"
#endif
#define HOLESHIT_HoleShitWeaponComponent_generated_h

#define FID_HoleShit_Source_HoleShit_HoleShitWeaponComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEndPlay); \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execAttachWeapon);


#define FID_HoleShit_Source_HoleShit_HoleShitWeaponComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoleShitWeaponComponent(); \
	friend struct Z_Construct_UClass_UHoleShitWeaponComponent_Statics; \
public: \
	DECLARE_CLASS(UHoleShitWeaponComponent, USkeletalMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HoleShit"), NO_API) \
	DECLARE_SERIALIZER(UHoleShitWeaponComponent)


#define FID_HoleShit_Source_HoleShit_HoleShitWeaponComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHoleShitWeaponComponent(UHoleShitWeaponComponent&&); \
	UHoleShitWeaponComponent(const UHoleShitWeaponComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoleShitWeaponComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoleShitWeaponComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHoleShitWeaponComponent) \
	NO_API virtual ~UHoleShitWeaponComponent();


#define FID_HoleShit_Source_HoleShit_HoleShitWeaponComponent_h_11_PROLOG
#define FID_HoleShit_Source_HoleShit_HoleShitWeaponComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HoleShit_Source_HoleShit_HoleShitWeaponComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HoleShit_Source_HoleShit_HoleShitWeaponComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_HoleShit_Source_HoleShit_HoleShitWeaponComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOLESHIT_API UClass* StaticClass<class UHoleShitWeaponComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HoleShit_Source_HoleShit_HoleShitWeaponComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
