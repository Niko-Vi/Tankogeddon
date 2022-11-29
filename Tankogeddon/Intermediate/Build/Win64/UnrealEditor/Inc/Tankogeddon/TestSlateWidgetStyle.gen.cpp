// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tankogeddon/TestSlateWidgetStyle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestSlateWidgetStyle() {}
// Cross Module References
	TANKOGEDDON_API UScriptStruct* Z_Construct_UScriptStruct_FTestSlateStyle();
	UPackage* Z_Construct_UPackage__Script_Tankogeddon();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateWidgetStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCheckBoxStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FTextBlockStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSpinBoxStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FButtonStyle();
	TANKOGEDDON_API UClass* Z_Construct_UClass_UTestSlateWidgetStyle_NoRegister();
	TANKOGEDDON_API UClass* Z_Construct_UClass_UTestSlateWidgetStyle();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerBase();
// End Cross Module References

static_assert(std::is_polymorphic<FTestSlateStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FTestSlateStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestSlateStyle;
class UScriptStruct* FTestSlateStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestSlateStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestSlateStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestSlateStyle, Z_Construct_UPackage__Script_Tankogeddon(), TEXT("TestSlateStyle"));
	}
	return Z_Registration_Info_UScriptStruct_TestSlateStyle.OuterSingleton;
}
template<> TANKOGEDDON_API UScriptStruct* StaticStruct<FTestSlateStyle>()
{
	return FTestSlateStyle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTestSlateStyle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CheckBoxStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CheckBoxStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextBlockStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextBlockStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpinBoxStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpinBoxStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ButtonStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ButtonStyle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestSlateStyle_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Test style for radio buttons\n */" },
		{ "ModuleRelativePath", "TestSlateWidgetStyle.h" },
		{ "ToolTip", "Test style for radio buttons" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTestSlateStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestSlateStyle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestSlateStyle_Statics::NewProp_CheckBoxStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "TestSlateWidgetStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTestSlateStyle_Statics::NewProp_CheckBoxStyle = { "CheckBoxStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTestSlateStyle, CheckBoxStyle), Z_Construct_UScriptStruct_FCheckBoxStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FTestSlateStyle_Statics::NewProp_CheckBoxStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestSlateStyle_Statics::NewProp_CheckBoxStyle_MetaData)) }; // 486413705
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestSlateStyle_Statics::NewProp_TextBlockStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "TestSlateWidgetStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTestSlateStyle_Statics::NewProp_TextBlockStyle = { "TextBlockStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTestSlateStyle, TextBlockStyle), Z_Construct_UScriptStruct_FTextBlockStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FTestSlateStyle_Statics::NewProp_TextBlockStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestSlateStyle_Statics::NewProp_TextBlockStyle_MetaData)) }; // 2453068466
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestSlateStyle_Statics::NewProp_SpinBoxStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "TestSlateWidgetStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTestSlateStyle_Statics::NewProp_SpinBoxStyle = { "SpinBoxStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTestSlateStyle, SpinBoxStyle), Z_Construct_UScriptStruct_FSpinBoxStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FTestSlateStyle_Statics::NewProp_SpinBoxStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestSlateStyle_Statics::NewProp_SpinBoxStyle_MetaData)) }; // 280130915
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestSlateStyle_Statics::NewProp_ButtonStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "TestSlateWidgetStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTestSlateStyle_Statics::NewProp_ButtonStyle = { "ButtonStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTestSlateStyle, ButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FTestSlateStyle_Statics::NewProp_ButtonStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestSlateStyle_Statics::NewProp_ButtonStyle_MetaData)) }; // 2266899118
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTestSlateStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestSlateStyle_Statics::NewProp_CheckBoxStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestSlateStyle_Statics::NewProp_TextBlockStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestSlateStyle_Statics::NewProp_SpinBoxStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestSlateStyle_Statics::NewProp_ButtonStyle,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestSlateStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Tankogeddon,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"TestSlateStyle",
		sizeof(FTestSlateStyle),
		alignof(FTestSlateStyle),
		Z_Construct_UScriptStruct_FTestSlateStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestSlateStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTestSlateStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestSlateStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTestSlateStyle()
	{
		if (!Z_Registration_Info_UScriptStruct_TestSlateStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestSlateStyle.InnerSingleton, Z_Construct_UScriptStruct_FTestSlateStyle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TestSlateStyle.InnerSingleton;
	}
	void UTestSlateWidgetStyle::StaticRegisterNativesUTestSlateWidgetStyle()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestSlateWidgetStyle);
	UClass* Z_Construct_UClass_UTestSlateWidgetStyle_NoRegister()
	{
		return UTestSlateWidgetStyle::StaticClass();
	}
	struct Z_Construct_UClass_UTestSlateWidgetStyle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetStyle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestSlateWidgetStyle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USlateWidgetStyleContainerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Tankogeddon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestSlateWidgetStyle_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "TestSlateWidgetStyle.h" },
		{ "ModuleRelativePath", "TestSlateWidgetStyle.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestSlateWidgetStyle_Statics::NewProp_WidgetStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The actual data describing the widget appearance. */" },
		{ "ModuleRelativePath", "TestSlateWidgetStyle.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The actual data describing the widget appearance." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTestSlateWidgetStyle_Statics::NewProp_WidgetStyle = { "WidgetStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTestSlateWidgetStyle, WidgetStyle), Z_Construct_UScriptStruct_FTestSlateStyle, METADATA_PARAMS(Z_Construct_UClass_UTestSlateWidgetStyle_Statics::NewProp_WidgetStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestSlateWidgetStyle_Statics::NewProp_WidgetStyle_MetaData)) }; // 2193160096
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTestSlateWidgetStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestSlateWidgetStyle_Statics::NewProp_WidgetStyle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestSlateWidgetStyle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestSlateWidgetStyle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestSlateWidgetStyle_Statics::ClassParams = {
		&UTestSlateWidgetStyle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTestSlateWidgetStyle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTestSlateWidgetStyle_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTestSlateWidgetStyle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTestSlateWidgetStyle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTestSlateWidgetStyle()
	{
		if (!Z_Registration_Info_UClass_UTestSlateWidgetStyle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestSlateWidgetStyle.OuterSingleton, Z_Construct_UClass_UTestSlateWidgetStyle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTestSlateWidgetStyle.OuterSingleton;
	}
	template<> TANKOGEDDON_API UClass* StaticClass<UTestSlateWidgetStyle>()
	{
		return UTestSlateWidgetStyle::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestSlateWidgetStyle);
	struct Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_TestSlateWidgetStyle_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_TestSlateWidgetStyle_h_Statics::ScriptStructInfo[] = {
		{ FTestSlateStyle::StaticStruct, Z_Construct_UScriptStruct_FTestSlateStyle_Statics::NewStructOps, TEXT("TestSlateStyle"), &Z_Registration_Info_UScriptStruct_TestSlateStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestSlateStyle), 2193160096U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_TestSlateWidgetStyle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTestSlateWidgetStyle, UTestSlateWidgetStyle::StaticClass, TEXT("UTestSlateWidgetStyle"), &Z_Registration_Info_UClass_UTestSlateWidgetStyle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestSlateWidgetStyle), 1207938767U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_TestSlateWidgetStyle_h_3160316679(TEXT("/Script/Tankogeddon"),
		Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_TestSlateWidgetStyle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_TestSlateWidgetStyle_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_TestSlateWidgetStyle_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_TestSlateWidgetStyle_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
