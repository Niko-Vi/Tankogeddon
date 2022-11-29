// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tankogeddon/EquipInventoryComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquipInventoryComponent() {}
// Cross Module References
	TANKOGEDDON_API UClass* Z_Construct_UClass_UEquipInventoryComponent_NoRegister();
	TANKOGEDDON_API UClass* Z_Construct_UClass_UEquipInventoryComponent();
	TANKOGEDDON_API UClass* Z_Construct_UClass_UInventoryComponent();
	UPackage* Z_Construct_UPackage__Script_Tankogeddon();
	TANKOGEDDON_API UEnum* Z_Construct_UEnum_Tankogeddon_EEquipSLot();
// End Cross Module References
	void UEquipInventoryComponent::StaticRegisterNativesUEquipInventoryComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEquipInventoryComponent);
	UClass* Z_Construct_UClass_UEquipInventoryComponent_NoRegister()
	{
		return UEquipInventoryComponent::StaticClass();
	}
	struct Z_Construct_UClass_UEquipInventoryComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_EquipSlots_ValueProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EquipSlots_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_EquipSlots_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquipSlots_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_EquipSlots;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEquipInventoryComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInventoryComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Tankogeddon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipInventoryComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EquipInventoryComponent.h" },
		{ "ModuleRelativePath", "EquipInventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UEquipInventoryComponent_Statics::NewProp_EquipSlots_ValueProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEquipInventoryComponent_Statics::NewProp_EquipSlots_ValueProp = { "EquipSlots", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UEnum_Tankogeddon_EEquipSLot, METADATA_PARAMS(nullptr, 0) }; // 1808366789
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEquipInventoryComponent_Statics::NewProp_EquipSlots_Key_KeyProp = { "EquipSlots_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipInventoryComponent_Statics::NewProp_EquipSlots_MetaData[] = {
		{ "Category", "EquipInventoryComponent" },
		{ "ModuleRelativePath", "EquipInventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEquipInventoryComponent_Statics::NewProp_EquipSlots = { "EquipSlots", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEquipInventoryComponent, EquipSlots), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEquipInventoryComponent_Statics::NewProp_EquipSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipInventoryComponent_Statics::NewProp_EquipSlots_MetaData)) }; // 1808366789
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEquipInventoryComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipInventoryComponent_Statics::NewProp_EquipSlots_ValueProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipInventoryComponent_Statics::NewProp_EquipSlots_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipInventoryComponent_Statics::NewProp_EquipSlots_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipInventoryComponent_Statics::NewProp_EquipSlots,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEquipInventoryComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEquipInventoryComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEquipInventoryComponent_Statics::ClassParams = {
		&UEquipInventoryComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEquipInventoryComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEquipInventoryComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEquipInventoryComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipInventoryComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEquipInventoryComponent()
	{
		if (!Z_Registration_Info_UClass_UEquipInventoryComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEquipInventoryComponent.OuterSingleton, Z_Construct_UClass_UEquipInventoryComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEquipInventoryComponent.OuterSingleton;
	}
	template<> TANKOGEDDON_API UClass* StaticClass<UEquipInventoryComponent>()
	{
		return UEquipInventoryComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEquipInventoryComponent);
	struct Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_EquipInventoryComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_EquipInventoryComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEquipInventoryComponent, UEquipInventoryComponent::StaticClass, TEXT("UEquipInventoryComponent"), &Z_Registration_Info_UClass_UEquipInventoryComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEquipInventoryComponent), 429861293U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_EquipInventoryComponent_h_3813558232(TEXT("/Script/Tankogeddon"),
		Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_EquipInventoryComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_EquipInventoryComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
