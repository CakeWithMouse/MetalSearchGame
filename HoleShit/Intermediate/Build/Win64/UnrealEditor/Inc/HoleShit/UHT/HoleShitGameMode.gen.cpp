// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoleShit/HoleShitGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoleShitGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
HOLESHIT_API UClass* Z_Construct_UClass_AHoleShitGameMode();
HOLESHIT_API UClass* Z_Construct_UClass_AHoleShitGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_HoleShit();
// End Cross Module References

// Begin Class AHoleShitGameMode
void AHoleShitGameMode::StaticRegisterNativesAHoleShitGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHoleShitGameMode);
UClass* Z_Construct_UClass_AHoleShitGameMode_NoRegister()
{
	return AHoleShitGameMode::StaticClass();
}
struct Z_Construct_UClass_AHoleShitGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "HoleShitGameMode.h" },
		{ "ModuleRelativePath", "HoleShitGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHoleShitGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AHoleShitGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_HoleShit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHoleShitGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHoleShitGameMode_Statics::ClassParams = {
	&AHoleShitGameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHoleShitGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AHoleShitGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHoleShitGameMode()
{
	if (!Z_Registration_Info_UClass_AHoleShitGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHoleShitGameMode.OuterSingleton, Z_Construct_UClass_AHoleShitGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHoleShitGameMode.OuterSingleton;
}
template<> HOLESHIT_API UClass* StaticClass<AHoleShitGameMode>()
{
	return AHoleShitGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHoleShitGameMode);
AHoleShitGameMode::~AHoleShitGameMode() {}
// End Class AHoleShitGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_HoleShit_Source_HoleShit_HoleShitGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHoleShitGameMode, AHoleShitGameMode::StaticClass, TEXT("AHoleShitGameMode"), &Z_Registration_Info_UClass_AHoleShitGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHoleShitGameMode), 1906151347U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HoleShit_Source_HoleShit_HoleShitGameMode_h_3439840189(TEXT("/Script/HoleShit"),
	Z_CompiledInDeferFile_FID_HoleShit_Source_HoleShit_HoleShitGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HoleShit_Source_HoleShit_HoleShitGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
