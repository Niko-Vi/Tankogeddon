// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tankogeddon/TestWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestWidget() {}
// Cross Module References
	TANKOGEDDON_API UClass* Z_Construct_UClass_UTestWidget_NoRegister();
	TANKOGEDDON_API UClass* Z_Construct_UClass_UTestWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Tankogeddon();
	TANKOGEDDON_API UScriptStruct* Z_Construct_UScriptStruct_FTestSlateStyle();
	UMG_API UClass* Z_Construct_UClass_UNativeWidgetHost_NoRegister();
// End Cross Module References
	void UTestWidget::StaticRegisterNativesUTestWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestWidget);
	UClass* Z_Construct_UClass_UTestWidget_NoRegister()
	{
		return UTestWidget::StaticClass();
	}
	struct Z_Construct_UClass_UTestWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CheckboxCountOnStart_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CheckboxCountOnStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RadioButtonsHost_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RadioButtonsHost;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Tankogeddon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TestWidget.h" },
		{ "ModuleRelativePath", "TestWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestWidget_Statics::NewProp_WidgetStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "DisplayName", "Style" },
		{ "ModuleRelativePath", "TestWidget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTestWidget_Statics::NewProp_WidgetStyle = { "WidgetStyle", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTestWidget, WidgetStyle), Z_Construct_UScriptStruct_FTestSlateStyle, METADATA_PARAMS(Z_Construct_UClass_UTestWidget_Statics::NewProp_WidgetStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestWidget_Statics::NewProp_WidgetStyle_MetaData)) }; // 2193160096
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestWidget_Statics::NewProp_CheckboxCountOnStart_MetaData[] = {
		{ "Category", "Checkbox" },
		{ "ModuleRelativePath", "TestWidget.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestWidget_Statics::NewProp_CheckboxCountOnStart = { "CheckboxCountOnStart", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTestWidget, CheckboxCountOnStart), METADATA_PARAMS(Z_Construct_UClass_UTestWidget_Statics::NewProp_CheckboxCountOnStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestWidget_Statics::NewProp_CheckboxCountOnStart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestWidget_Statics::NewProp_RadioButtonsHost_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "TestWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TestWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTestWidget_Statics::NewProp_RadioButtonsHost = { "RadioButtonsHost", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTestWidget, RadioButtonsHost), Z_Construct_UClass_UNativeWidgetHost_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTestWidget_Statics::NewProp_RadioButtonsHost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestWidget_Statics::NewProp_RadioButtonsHost_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTestWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestWidget_Statics::NewProp_WidgetStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestWidget_Statics::NewProp_CheckboxCountOnStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestWidget_Statics::NewProp_RadioButtonsHost,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestWidget_Statics::ClassParams = {
		&UTestWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTestWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTestWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTestWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTestWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTestWidget()
	{
		if (!Z_Registration_Info_UClass_UTestWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestWidget.OuterSingleton, Z_Construct_UClass_UTestWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTestWidget.OuterSingleton;
	}
	template<> TANKOGEDDON_API UClass* StaticClass<UTestWidget>()
	{
		return UTestWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestWidget);
	struct Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_TestWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_TestWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTestWidget, UTestWidget::StaticClass, TEXT("UTestWidget"), &Z_Registration_Info_UClass_UTestWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestWidget), 1082428663U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_TestWidget_h_1931728850(TEXT("/Script/Tankogeddon"),
		Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_TestWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_TestWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
