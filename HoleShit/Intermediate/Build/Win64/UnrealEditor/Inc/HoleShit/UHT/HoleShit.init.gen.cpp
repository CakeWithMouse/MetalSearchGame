// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoleSHit_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	HOLESHIT_API UFunction* Z_Construct_UDelegateFunction_HoleSHit_BulletCountUpdatedDelegate__DelegateSignature();
	HOLESHIT_API UFunction* Z_Construct_UDelegateFunction_HoleSHit_DamagedDelegate__DelegateSignature();
	HOLESHIT_API UFunction* Z_Construct_UDelegateFunction_HoleSHit_PawnDeathDelegate__DelegateSignature();
	HOLESHIT_API UFunction* Z_Construct_UDelegateFunction_HoleSHit_SprintStateChangedDelegate__DelegateSignature();
	HOLESHIT_API UFunction* Z_Construct_UDelegateFunction_HoleSHit_UpdateSprintMeterDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_HoleSHit;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_HoleSHit()
	{
		if (!Z_Registration_Info_UPackage__Script_HoleSHit.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_HoleSHit_BulletCountUpdatedDelegate__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_HoleSHit_DamagedDelegate__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_HoleSHit_PawnDeathDelegate__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_HoleSHit_SprintStateChangedDelegate__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_HoleSHit_UpdateSprintMeterDelegate__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/HoleSHit",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0xF8DBCF4E,
			0x3D237B20,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_HoleSHit.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_HoleSHit.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_HoleSHit(Z_Construct_UPackage__Script_HoleSHit, TEXT("/Script/HoleSHit"), Z_Registration_Info_UPackage__Script_HoleSHit, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xF8DBCF4E, 0x3D237B20));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
