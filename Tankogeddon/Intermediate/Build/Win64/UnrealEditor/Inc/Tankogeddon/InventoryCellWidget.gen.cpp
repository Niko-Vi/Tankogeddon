// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tankogeddon/InventoryCellWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryCellWidget() {}
// Cross Module References
	TANKOGEDDON_API UClass* Z_Construct_UClass_UInventoryCellWidget_NoRegister();
	TANKOGEDDON_API UClass* Z_Construct_UClass_UInventoryCellWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Tankogeddon();
	TANKOGEDDON_API UClass* Z_Construct_UClass_UInventoryWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	TANKOGEDDON_API UScriptStruct* Z_Construct_UScriptStruct_FInventorySlotInfo();
// End Cross Module References
	void UInventoryCellWidget::StaticRegisterNativesUInventoryCellWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryCellWidget);
	UClass* Z_Construct_UClass_UInventoryCellWidget_NoRegister()
	{
		return UInventoryCellWidget::StaticClass();
	}
	struct Z_Construct_UClass_UInventoryCellWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IndexInInventory_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_IndexInInventory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentInventoryWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentInventoryWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanDrag_MetaData[];
#endif
		static void NewProp_bCanDrag_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanDrag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CountText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CountText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventoryCellWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Tankogeddon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryCellWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "InventoryCellWidget.h" },
		{ "ModuleRelativePath", "InventoryCellWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryCellWidget_Statics::NewProp_IndexInInventory_MetaData[] = {
		{ "Category", "InventoryCellWidget" },
		{ "ModuleRelativePath", "InventoryCellWidget.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInventoryCellWidget_Statics::NewProp_IndexInInventory = { "IndexInInventory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryCellWidget, IndexInInventory), METADATA_PARAMS(Z_Construct_UClass_UInventoryCellWidget_Statics::NewProp_IndexInInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryCellWidget_Statics::NewProp_IndexInInventory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryCellWidget_Statics::NewProp_ParentInventoryWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InventoryCellWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryCellWidget_Statics::NewProp_ParentInventoryWidget = { "ParentInventoryWidget", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryCellWidget, ParentInventoryWidget), Z_Construct_UClass_UInventoryWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryCellWidget_Statics::NewProp_ParentInventoryWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryCellWidget_Statics::NewProp_ParentInventoryWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryCellWidget_Statics::NewProp_bCanDrag_MetaData[] = {
		{ "Category", "InventoryCellWidget" },
		{ "ModuleRelativePath", "InventoryCellWidget.h" },
	};
#endif
	void Z_Construct_UClass_UInventoryCellWidget_Statics::NewProp_bCanDrag_SetBit(void* Obj)
	{
		((UInventoryCellWidget*)Obj)->bCanDrag = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInventoryCellWidget_Statics::NewProp_bCanDrag = { "bCanDrag", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UInventoryCellWidget), &Z_Construct_UClass_UInventoryCellWidget_Statics::NewProp_bCanDrag_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInventoryCellWidget_Statics::NewProp_bCanDrag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryCellWidget_Statics::NewProp_bCanDrag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryCellWidget_Statics::NewProp_ItemImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "InventoryCellWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InventoryCellWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryCellWidget_Statics::NewProp_ItemImage = { "ItemImage", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryCellWidget, ItemImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryCellWidget_Statics::NewProp_ItemImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryCellWidget_Statics::NewProp_ItemImage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryCellWidget_Statics::NewProp_CountText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "InventoryCellWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InventoryCellWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryCellWidget_Statics::NewProp_CountText = { "CountText", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryCellWidget, CountText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryCellWidget_Statics::NewProp_CountText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryCellWidget_Statics::NewProp_CountText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryCellWidget_Statics::NewProp_Item_MetaData[] = {
		{ "ModuleRelativePath", "InventoryCellWidget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInventoryCellWidget_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryCellWidget, Item), Z_Construct_UScriptStruct_FInventorySlotInfo, METADATA_PARAMS(Z_Construct_UClass_UInventoryCellWidget_Statics::NewProp_Item_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryCellWidget_Statics::NewProp_Item_MetaData)) }; // 1096428908
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryCellWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryCellWidget_Statics::NewProp_IndexInInventory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryCellWidget_Statics::NewProp_ParentInventoryWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryCellWidget_Statics::NewProp_bCanDrag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryCellWidget_Statics::NewProp_ItemImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryCellWidget_Statics::NewProp_CountText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryCellWidget_Statics::NewProp_Item,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventoryCellWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryCellWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryCellWidget_Statics::ClassParams = {
		&UInventoryCellWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInventoryCellWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryCellWidget_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInventoryCellWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryCellWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInventoryCellWidget()
	{
		if (!Z_Registration_Info_UClass_UInventoryCellWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryCellWidget.OuterSingleton, Z_Construct_UClass_UInventoryCellWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInventoryCellWidget.OuterSingleton;
	}
	template<> TANKOGEDDON_API UClass* StaticClass<UInventoryCellWidget>()
	{
		return UInventoryCellWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryCellWidget);
	struct Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_InventoryCellWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_InventoryCellWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryCellWidget, UInventoryCellWidget::StaticClass, TEXT("UInventoryCellWidget"), &Z_Registration_Info_UClass_UInventoryCellWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryCellWidget), 751408291U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_InventoryCellWidget_h_1615340608(TEXT("/Script/Tankogeddon"),
		Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_InventoryCellWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_InventoryCellWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
