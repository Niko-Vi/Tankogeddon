// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tankogeddon/ActorSpawnerWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorSpawnerWidget() {}
// Cross Module References
	TANKOGEDDON_API UClass* Z_Construct_UClass_UActorSpawnerWidget_NoRegister();
	TANKOGEDDON_API UClass* Z_Construct_UClass_UActorSpawnerWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Tankogeddon();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	TANKOGEDDON_API UClass* Z_Construct_UClass_ATankController_NoRegister();
// End Cross Module References
	void UActorSpawnerWidget::StaticRegisterNativesUActorSpawnerWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorSpawnerWidget);
	UClass* Z_Construct_UClass_UActorSpawnerWidget_NoRegister()
	{
		return UActorSpawnerWidget::StaticClass();
	}
	struct Z_Construct_UClass_UActorSpawnerWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SpawnClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ItemName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TankController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TankController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorSpawnerWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Tankogeddon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorSpawnerWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ActorSpawnerWidget.h" },
		{ "ModuleRelativePath", "ActorSpawnerWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorSpawnerWidget_Statics::NewProp_SpawnClass_MetaData[] = {
		{ "Category", "ActorSpawnerWidget" },
		{ "ModuleRelativePath", "ActorSpawnerWidget.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UActorSpawnerWidget_Statics::NewProp_SpawnClass = { "SpawnClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActorSpawnerWidget, SpawnClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UActorSpawnerWidget_Statics::NewProp_SpawnClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorSpawnerWidget_Statics::NewProp_SpawnClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorSpawnerWidget_Statics::NewProp_Item_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ActorSpawnerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActorSpawnerWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActorSpawnerWidget_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActorSpawnerWidget, Item), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UActorSpawnerWidget_Statics::NewProp_Item_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorSpawnerWidget_Statics::NewProp_Item_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorSpawnerWidget_Statics::NewProp_ItemName_MetaData[] = {
		{ "Category", "ActorSpawnerWidget" },
		{ "ModuleRelativePath", "ActorSpawnerWidget.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UActorSpawnerWidget_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActorSpawnerWidget, ItemName), METADATA_PARAMS(Z_Construct_UClass_UActorSpawnerWidget_Statics::NewProp_ItemName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorSpawnerWidget_Statics::NewProp_ItemName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorSpawnerWidget_Statics::NewProp_SpawnedActor_MetaData[] = {
		{ "ModuleRelativePath", "ActorSpawnerWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActorSpawnerWidget_Statics::NewProp_SpawnedActor = { "SpawnedActor", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActorSpawnerWidget, SpawnedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UActorSpawnerWidget_Statics::NewProp_SpawnedActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorSpawnerWidget_Statics::NewProp_SpawnedActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorSpawnerWidget_Statics::NewProp_TankController_MetaData[] = {
		{ "ModuleRelativePath", "ActorSpawnerWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActorSpawnerWidget_Statics::NewProp_TankController = { "TankController", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActorSpawnerWidget, TankController), Z_Construct_UClass_ATankController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UActorSpawnerWidget_Statics::NewProp_TankController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorSpawnerWidget_Statics::NewProp_TankController_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActorSpawnerWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorSpawnerWidget_Statics::NewProp_SpawnClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorSpawnerWidget_Statics::NewProp_Item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorSpawnerWidget_Statics::NewProp_ItemName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorSpawnerWidget_Statics::NewProp_SpawnedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorSpawnerWidget_Statics::NewProp_TankController,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorSpawnerWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorSpawnerWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorSpawnerWidget_Statics::ClassParams = {
		&UActorSpawnerWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UActorSpawnerWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UActorSpawnerWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UActorSpawnerWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorSpawnerWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorSpawnerWidget()
	{
		if (!Z_Registration_Info_UClass_UActorSpawnerWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorSpawnerWidget.OuterSingleton, Z_Construct_UClass_UActorSpawnerWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorSpawnerWidget.OuterSingleton;
	}
	template<> TANKOGEDDON_API UClass* StaticClass<UActorSpawnerWidget>()
	{
		return UActorSpawnerWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorSpawnerWidget);
	struct Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_ActorSpawnerWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_ActorSpawnerWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorSpawnerWidget, UActorSpawnerWidget::StaticClass, TEXT("UActorSpawnerWidget"), &Z_Registration_Info_UClass_UActorSpawnerWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorSpawnerWidget), 826189679U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_ActorSpawnerWidget_h_1631601266(TEXT("/Script/Tankogeddon"),
		Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_ActorSpawnerWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_ActorSpawnerWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
