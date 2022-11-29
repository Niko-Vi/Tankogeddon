// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tankogeddon/DraggableItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDraggableItem() {}
// Cross Module References
	TANKOGEDDON_API UClass* Z_Construct_UClass_UDraggableItem_NoRegister();
	TANKOGEDDON_API UClass* Z_Construct_UClass_UDraggableItem();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Tankogeddon();
	UMG_API UClass* Z_Construct_UClass_UDragDropOperation_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDraggableItem::execRestoreVisuals)
	{
		P_GET_OBJECT(UDragDropOperation,Z_Param_Operation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RestoreVisuals(Z_Param_Operation);
		P_NATIVE_END;
	}
	void UDraggableItem::StaticRegisterNativesUDraggableItem()
	{
		UClass* Class = UDraggableItem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RestoreVisuals", &UDraggableItem::execRestoreVisuals },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDraggableItem_RestoreVisuals_Statics
	{
		struct DraggableItem_eventRestoreVisuals_Parms
		{
			UDragDropOperation* Operation;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Operation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDraggableItem_RestoreVisuals_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DraggableItem_eventRestoreVisuals_Parms, Operation), Z_Construct_UClass_UDragDropOperation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDraggableItem_RestoreVisuals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDraggableItem_RestoreVisuals_Statics::NewProp_Operation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDraggableItem_RestoreVisuals_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DraggableItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDraggableItem_RestoreVisuals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDraggableItem, nullptr, "RestoreVisuals", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDraggableItem_RestoreVisuals_Statics::DraggableItem_eventRestoreVisuals_Parms), Z_Construct_UFunction_UDraggableItem_RestoreVisuals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableItem_RestoreVisuals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDraggableItem_RestoreVisuals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDraggableItem_RestoreVisuals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDraggableItem_RestoreVisuals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDraggableItem_RestoreVisuals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDraggableItem);
	UClass* Z_Construct_UClass_UDraggableItem_NoRegister()
	{
		return UDraggableItem::StaticClass();
	}
	struct Z_Construct_UClass_UDraggableItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TankText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TankText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TankName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TankName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDraggableItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Tankogeddon,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDraggableItem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDraggableItem_RestoreVisuals, "RestoreVisuals" }, // 1205015408
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDraggableItem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DraggableItem.h" },
		{ "ModuleRelativePath", "DraggableItem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDraggableItem_Statics::NewProp_TankText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "DraggableItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DraggableItem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDraggableItem_Statics::NewProp_TankText = { "TankText", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDraggableItem, TankText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDraggableItem_Statics::NewProp_TankText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDraggableItem_Statics::NewProp_TankText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDraggableItem_Statics::NewProp_TankName_MetaData[] = {
		{ "Category", "DraggableItem" },
		{ "ModuleRelativePath", "DraggableItem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDraggableItem_Statics::NewProp_TankName = { "TankName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDraggableItem, TankName), METADATA_PARAMS(Z_Construct_UClass_UDraggableItem_Statics::NewProp_TankName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDraggableItem_Statics::NewProp_TankName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDraggableItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDraggableItem_Statics::NewProp_TankText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDraggableItem_Statics::NewProp_TankName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDraggableItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDraggableItem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDraggableItem_Statics::ClassParams = {
		&UDraggableItem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDraggableItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDraggableItem_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDraggableItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDraggableItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDraggableItem()
	{
		if (!Z_Registration_Info_UClass_UDraggableItem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDraggableItem.OuterSingleton, Z_Construct_UClass_UDraggableItem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDraggableItem.OuterSingleton;
	}
	template<> TANKOGEDDON_API UClass* StaticClass<UDraggableItem>()
	{
		return UDraggableItem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDraggableItem);
	struct Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_DraggableItem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_DraggableItem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDraggableItem, UDraggableItem::StaticClass, TEXT("UDraggableItem"), &Z_Registration_Info_UClass_UDraggableItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDraggableItem), 1924229932U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_DraggableItem_h_2998956391(TEXT("/Script/Tankogeddon"),
		Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_DraggableItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_DraggableItem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
