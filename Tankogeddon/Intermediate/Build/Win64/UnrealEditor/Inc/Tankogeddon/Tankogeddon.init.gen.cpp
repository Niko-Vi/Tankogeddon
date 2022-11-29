// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankogeddon_init() {}
	TANKOGEDDON_API UFunction* Z_Construct_UDelegateFunction_APoolableActor_OnPooleableActorDespawn__DelegateSignature();
	TANKOGEDDON_API UFunction* Z_Construct_UDelegateFunction_ATankPawn_OnAmmoStateChanged__DelegateSignature();
	TANKOGEDDON_API UFunction* Z_Construct_UDelegateFunction_Tankogeddon_OnRadioButtonsChange__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Tankogeddon;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Tankogeddon()
	{
		if (!Z_Registration_Info_UPackage__Script_Tankogeddon.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_APoolableActor_OnPooleableActorDespawn__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ATankPawn_OnAmmoStateChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Tankogeddon_OnRadioButtonsChange__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Tankogeddon",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xED370EFD,
				0x8D13AF87,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Tankogeddon.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Tankogeddon.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Tankogeddon(Z_Construct_UPackage__Script_Tankogeddon, TEXT("/Script/Tankogeddon"), Z_Registration_Info_UPackage__Script_Tankogeddon, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xED370EFD, 0x8D13AF87));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
