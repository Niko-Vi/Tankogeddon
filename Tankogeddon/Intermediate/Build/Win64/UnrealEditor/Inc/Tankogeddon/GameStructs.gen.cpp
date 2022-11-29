// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tankogeddon/GameStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameStructs() {}
// Cross Module References
	TANKOGEDDON_API UEnum* Z_Construct_UEnum_Tankogeddon_ECannonType();
	UPackage* Z_Construct_UPackage__Script_Tankogeddon();
	TANKOGEDDON_API UScriptStruct* Z_Construct_UScriptStruct_FDamageData();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	TANKOGEDDON_API UClass* Z_Construct_UClass_UGameStructs_NoRegister();
	TANKOGEDDON_API UClass* Z_Construct_UClass_UGameStructs();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECannonType;
	static UEnum* ECannonType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECannonType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECannonType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Tankogeddon_ECannonType, Z_Construct_UPackage__Script_Tankogeddon(), TEXT("ECannonType"));
		}
		return Z_Registration_Info_UEnum_ECannonType.OuterSingleton;
	}
	template<> TANKOGEDDON_API UEnum* StaticEnum<ECannonType>()
	{
		return ECannonType_StaticEnum();
	}
	struct Z_Construct_UEnum_Tankogeddon_ECannonType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Tankogeddon_ECannonType_Statics::Enumerators[] = {
		{ "ECannonType::FireProjectile", (int64)ECannonType::FireProjectile },
		{ "ECannonType::FireTrace", (int64)ECannonType::FireTrace },
		{ "ECannonType::FireDisc", (int64)ECannonType::FireDisc },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Tankogeddon_ECannonType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "FireDisc.Comment", "/**\n * \n */" },
		{ "FireDisc.DisplayName", "Use Disc" },
		{ "FireDisc.Name", "ECannonType::FireDisc" },
		{ "FireProjectile.Comment", "/**\n * \n */" },
		{ "FireProjectile.DisplayName", "Use projectile" },
		{ "FireProjectile.Name", "ECannonType::FireProjectile" },
		{ "FireTrace.Comment", "/**\n * \n */" },
		{ "FireTrace.DisplayName", "Use trace" },
		{ "FireTrace.Name", "ECannonType::FireTrace" },
		{ "ModuleRelativePath", "GameStructs.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Tankogeddon_ECannonType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Tankogeddon,
		nullptr,
		"ECannonType",
		"ECannonType",
		Z_Construct_UEnum_Tankogeddon_ECannonType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Tankogeddon_ECannonType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Tankogeddon_ECannonType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Tankogeddon_ECannonType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Tankogeddon_ECannonType()
	{
		if (!Z_Registration_Info_UEnum_ECannonType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECannonType.InnerSingleton, Z_Construct_UEnum_Tankogeddon_ECannonType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECannonType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DamageData;
class UScriptStruct* FDamageData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DamageData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DamageData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDamageData, Z_Construct_UPackage__Script_Tankogeddon(), TEXT("DamageData"));
	}
	return Z_Registration_Info_UScriptStruct_DamageData.OuterSingleton;
}
template<> TANKOGEDDON_API UScriptStruct* StaticStruct<FDamageData>()
{
	return FDamageData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDamageData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageMaker_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageMaker;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDamageData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDamageData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDamageData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDamageData_Statics::NewProp_DamageValue_MetaData[] = {
		{ "ModuleRelativePath", "GameStructs.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDamageData_Statics::NewProp_DamageValue = { "DamageValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDamageData, DamageValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FDamageData_Statics::NewProp_DamageValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageData_Statics::NewProp_DamageValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDamageData_Statics::NewProp_Instigator_MetaData[] = {
		{ "ModuleRelativePath", "GameStructs.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDamageData_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDamageData, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDamageData_Statics::NewProp_Instigator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageData_Statics::NewProp_Instigator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDamageData_Statics::NewProp_DamageMaker_MetaData[] = {
		{ "ModuleRelativePath", "GameStructs.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDamageData_Statics::NewProp_DamageMaker = { "DamageMaker", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDamageData, DamageMaker), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDamageData_Statics::NewProp_DamageMaker_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageData_Statics::NewProp_DamageMaker_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDamageData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageData_Statics::NewProp_DamageValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageData_Statics::NewProp_Instigator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageData_Statics::NewProp_DamageMaker,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDamageData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Tankogeddon,
		nullptr,
		&NewStructOps,
		"DamageData",
		sizeof(FDamageData),
		alignof(FDamageData),
		Z_Construct_UScriptStruct_FDamageData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDamageData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDamageData()
	{
		if (!Z_Registration_Info_UScriptStruct_DamageData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DamageData.InnerSingleton, Z_Construct_UScriptStruct_FDamageData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DamageData.InnerSingleton;
	}
	void UGameStructs::StaticRegisterNativesUGameStructs()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameStructs);
	UClass* Z_Construct_UClass_UGameStructs_NoRegister()
	{
		return UGameStructs::StaticClass();
	}
	struct Z_Construct_UClass_UGameStructs_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameStructs_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Tankogeddon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameStructs_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameStructs.h" },
		{ "ModuleRelativePath", "GameStructs.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameStructs_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameStructs>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameStructs_Statics::ClassParams = {
		&UGameStructs::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameStructs_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameStructs_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameStructs()
	{
		if (!Z_Registration_Info_UClass_UGameStructs.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameStructs.OuterSingleton, Z_Construct_UClass_UGameStructs_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameStructs.OuterSingleton;
	}
	template<> TANKOGEDDON_API UClass* StaticClass<UGameStructs>()
	{
		return UGameStructs::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameStructs);
	struct Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_GameStructs_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_GameStructs_h_Statics::EnumInfo[] = {
		{ ECannonType_StaticEnum, TEXT("ECannonType"), &Z_Registration_Info_UEnum_ECannonType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3109063758U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_GameStructs_h_Statics::ScriptStructInfo[] = {
		{ FDamageData::StaticStruct, Z_Construct_UScriptStruct_FDamageData_Statics::NewStructOps, TEXT("DamageData"), &Z_Registration_Info_UScriptStruct_DamageData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDamageData), 3582327891U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_GameStructs_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameStructs, UGameStructs::StaticClass, TEXT("UGameStructs"), &Z_Registration_Info_UClass_UGameStructs, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameStructs), 383318018U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_GameStructs_h_816603290(TEXT("/Script/Tankogeddon"),
		Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_GameStructs_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_GameStructs_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_GameStructs_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_GameStructs_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_GameStructs_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_GameStructs_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
