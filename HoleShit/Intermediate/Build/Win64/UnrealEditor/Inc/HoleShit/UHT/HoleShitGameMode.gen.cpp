// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoleSHitGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeHoleSHitGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
HOLESHIT_API UClass* Z_Construct_UClass_AHoleSHitGameMode();
HOLESHIT_API UClass* Z_Construct_UClass_AHoleSHitGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_HoleSHit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AHoleSHitGameMode ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AHoleSHitGameMode;
UClass* AHoleSHitGameMode::GetPrivateStaticClass()
{
	using TClass = AHoleSHitGameMode;
	if (!Z_Registration_Info_UClass_AHoleSHitGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("HoleSHitGameMode"),
			Z_Registration_Info_UClass_AHoleSHitGameMode.InnerSingleton,
			StaticRegisterNativesAHoleSHitGameMode,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AHoleSHitGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AHoleSHitGameMode_NoRegister()
{
	return AHoleSHitGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AHoleSHitGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a first person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "HoleSHitGameMode.h" },
		{ "ModuleRelativePath", "HoleSHitGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a first person game" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class AHoleSHitGameMode constinit property declarations ************************
// ********** End Class AHoleSHitGameMode constinit property declarations **************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHoleSHitGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AHoleSHitGameMode_Statics
UObject* (*const Z_Construct_UClass_AHoleSHitGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_HoleSHit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHoleSHitGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHoleSHitGameMode_Statics::ClassParams = {
	&AHoleSHitGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008002ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHoleSHitGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AHoleSHitGameMode_Statics::Class_MetaDataParams)
};
void AHoleSHitGameMode::StaticRegisterNativesAHoleSHitGameMode()
{
}
UClass* Z_Construct_UClass_AHoleSHitGameMode()
{
	if (!Z_Registration_Info_UClass_AHoleSHitGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHoleSHitGameMode.OuterSingleton, Z_Construct_UClass_AHoleSHitGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHoleSHitGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AHoleSHitGameMode);
AHoleSHitGameMode::~AHoleSHitGameMode() {}
// ********** End Class AHoleSHitGameMode **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HoleSHit_Source_HoleSHit_HoleSHitGameMode_h__Script_HoleSHit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHoleSHitGameMode, AHoleSHitGameMode::StaticClass, TEXT("AHoleSHitGameMode"), &Z_Registration_Info_UClass_AHoleSHitGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHoleSHitGameMode), 3706882974U) },
	};
}; // Z_CompiledInDeferFile_FID_HoleSHit_Source_HoleSHit_HoleSHitGameMode_h__Script_HoleSHit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HoleSHit_Source_HoleSHit_HoleSHitGameMode_h__Script_HoleSHit_1928748497{
	TEXT("/Script/HoleSHit"),
	Z_CompiledInDeferFile_FID_HoleSHit_Source_HoleSHit_HoleSHitGameMode_h__Script_HoleSHit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HoleSHit_Source_HoleSHit_HoleSHitGameMode_h__Script_HoleSHit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
