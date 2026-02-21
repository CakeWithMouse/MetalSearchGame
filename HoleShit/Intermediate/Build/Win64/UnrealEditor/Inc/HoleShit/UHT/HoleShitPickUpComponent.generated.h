// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoleShitPickUpComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AHoleShitCharacter;
class UPrimitiveComponent;
struct FHitResult;
#ifdef HOLESHIT_HoleShitPickUpComponent_generated_h
#error "HoleShitPickUpComponent.generated.h already included, missing '#pragma once' in HoleShitPickUpComponent.h"
#endif
#define HOLESHIT_HoleShitPickUpComponent_generated_h

#define FID_HoleShit_Source_HoleShit_HoleShitPickUpComponent_h_12_DELEGATE \
HOLESHIT_API void FOnPickUp_DelegateWrapper(const FMulticastScriptDelegate& OnPickUp, AHoleShitCharacter* PickUpCharacter);


#define FID_HoleShit_Source_HoleShit_HoleShitPickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSphereBeginOverlap);


#define FID_HoleShit_Source_HoleShit_HoleShitPickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoleShitPickUpComponent(); \
	friend struct Z_Construct_UClass_UHoleShitPickUpComponent_Statics; \
public: \
	DECLARE_CLASS(UHoleShitPickUpComponent, USphereComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HoleShit"), NO_API) \
	DECLARE_SERIALIZER(UHoleShitPickUpComponent)


#define FID_HoleShit_Source_HoleShit_HoleShitPickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHoleShitPickUpComponent(UHoleShitPickUpComponent&&); \
	UHoleShitPickUpComponent(const UHoleShitPickUpComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoleShitPickUpComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoleShitPickUpComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHoleShitPickUpComponent) \
	NO_API virtual ~UHoleShitPickUpComponent();


#define FID_HoleShit_Source_HoleShit_HoleShitPickUpComponent_h_14_PROLOG
#define FID_HoleShit_Source_HoleShit_HoleShitPickUpComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HoleShit_Source_HoleShit_HoleShitPickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HoleShit_Source_HoleShit_HoleShitPickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_HoleShit_Source_HoleShit_HoleShitPickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOLESHIT_API UClass* StaticClass<class UHoleShitPickUpComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HoleShit_Source_HoleShit_HoleShitPickUpComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
