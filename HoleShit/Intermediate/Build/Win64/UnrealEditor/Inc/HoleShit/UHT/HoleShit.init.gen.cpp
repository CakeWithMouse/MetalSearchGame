// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoleShit_init() {}
	HOLESHIT_API UFunction* Z_Construct_UDelegateFunction_HoleShit_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_HoleShit;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_HoleShit()
	{
		if (!Z_Registration_Info_UPackage__Script_HoleShit.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_HoleShit_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/HoleShit",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xFE3B6B96,
				0xBBBB7377,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_HoleShit.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_HoleShit.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_HoleShit(Z_Construct_UPackage__Script_HoleShit, TEXT("/Script/HoleShit"), Z_Registration_Info_UPackage__Script_HoleShit, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xFE3B6B96, 0xBBBB7377));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
