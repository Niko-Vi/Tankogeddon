// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tankogeddon/Disc.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisc() {}
// Cross Module References
	TANKOGEDDON_API UClass* Z_Construct_UClass_ADisc_NoRegister();
	TANKOGEDDON_API UClass* Z_Construct_UClass_ADisc();
	TANKOGEDDON_API UClass* Z_Construct_UClass_AProjectile();
	UPackage* Z_Construct_UPackage__Script_Tankogeddon();
// End Cross Module References
	void ADisc::StaticRegisterNativesADisc()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADisc);
	UClass* Z_Construct_UClass_ADisc_NoRegister()
	{
		return ADisc::StaticClass();
	}
	struct Z_Construct_UClass_ADisc_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADisc_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AProjectile,
		(UObject* (*)())Z_Construct_UPackage__Script_Tankogeddon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisc_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Disc.h" },
		{ "ModuleRelativePath", "Disc.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADisc_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADisc>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADisc_Statics::ClassParams = {
		&ADisc::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADisc_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADisc_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADisc()
	{
		if (!Z_Registration_Info_UClass_ADisc.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADisc.OuterSingleton, Z_Construct_UClass_ADisc_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADisc.OuterSingleton;
	}
	template<> TANKOGEDDON_API UClass* StaticClass<ADisc>()
	{
		return ADisc::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADisc);
	struct Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_Disc_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_Disc_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADisc, ADisc::StaticClass, TEXT("ADisc"), &Z_Registration_Info_UClass_ADisc, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADisc), 3750471827U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_Disc_h_3797132341(TEXT("/Script/Tankogeddon"),
		Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_Disc_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_Disc_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
