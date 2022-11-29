// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tankogeddon/RadioButtons.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRadioButtons() {}
// Cross Module References
	TANKOGEDDON_API UFunction* Z_Construct_UDelegateFunction_Tankogeddon_OnRadioButtonsChange__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Tankogeddon();
	TANKOGEDDON_API UClass* Z_Construct_UClass_URadioButtons_NoRegister();
	TANKOGEDDON_API UClass* Z_Construct_UClass_URadioButtons();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	TANKOGEDDON_API UScriptStruct* Z_Construct_UScriptStruct_FTestSlateStyle();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Tankogeddon_OnRadioButtonsChange__DelegateSignature_Statics
	{
		struct _Script_Tankogeddon_eventOnRadioButtonsChange_Parms
		{
			int32 NewRadioChoice;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewRadioChoice;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Tankogeddon_OnRadioButtonsChange__DelegateSignature_Statics::NewProp_NewRadioChoice = { "NewRadioChoice", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Tankogeddon_eventOnRadioButtonsChange_Parms, NewRadioChoice), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Tankogeddon_OnRadioButtonsChange__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Tankogeddon_OnRadioButtonsChange__DelegateSignature_Statics::NewProp_NewRadioChoice,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Tankogeddon_OnRadioButtonsChange__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n * SRadioButtons widget wrapper\n */" },
		{ "ModuleRelativePath", "RadioButtons.h" },
		{ "ToolTip", "SRadioButtons widget wrapper" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Tankogeddon_OnRadioButtonsChange__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Tankogeddon, nullptr, "OnRadioButtonsChange__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Tankogeddon_OnRadioButtonsChange__DelegateSignature_Statics::_Script_Tankogeddon_eventOnRadioButtonsChange_Parms), Z_Construct_UDelegateFunction_Tankogeddon_OnRadioButtonsChange__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Tankogeddon_OnRadioButtonsChange__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Tankogeddon_OnRadioButtonsChange__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Tankogeddon_OnRadioButtonsChange__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Tankogeddon_OnRadioButtonsChange__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Tankogeddon_OnRadioButtonsChange__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(URadioButtons::execSetCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCount(Z_Param_NewCount);
		P_NATIVE_END;
	}
	void URadioButtons::StaticRegisterNativesURadioButtons()
	{
		UClass* Class = URadioButtons::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetCount", &URadioButtons::execSetCount },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URadioButtons_SetCount_Statics
	{
		struct RadioButtons_eventSetCount_Parms
		{
			int32 NewCount;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URadioButtons_SetCount_Statics::NewProp_NewCount = { "NewCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RadioButtons_eventSetCount_Parms, NewCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadioButtons_SetCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioButtons_SetCount_Statics::NewProp_NewCount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadioButtons_SetCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RadioButtons.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URadioButtons_SetCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadioButtons, nullptr, "SetCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_URadioButtons_SetCount_Statics::RadioButtons_eventSetCount_Parms), Z_Construct_UFunction_URadioButtons_SetCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioButtons_SetCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URadioButtons_SetCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioButtons_SetCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URadioButtons_SetCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URadioButtons_SetCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URadioButtons);
	UClass* Z_Construct_UClass_URadioButtons_NoRegister()
	{
		return URadioButtons::StaticClass();
	}
	struct Z_Construct_UClass_URadioButtons_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRadioButtonsChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRadioButtonsChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetStyle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URadioButtons_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Tankogeddon,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URadioButtons_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URadioButtons_SetCount, "SetCount" }, // 564036533
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URadioButtons_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RadioButtons.h" },
		{ "ModuleRelativePath", "RadioButtons.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URadioButtons_Statics::NewProp_OnRadioButtonsChanged_MetaData[] = {
		{ "ModuleRelativePath", "RadioButtons.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URadioButtons_Statics::NewProp_OnRadioButtonsChanged = { "OnRadioButtonsChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URadioButtons, OnRadioButtonsChanged), Z_Construct_UDelegateFunction_Tankogeddon_OnRadioButtonsChange__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URadioButtons_Statics::NewProp_OnRadioButtonsChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URadioButtons_Statics::NewProp_OnRadioButtonsChanged_MetaData)) }; // 3943470547
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URadioButtons_Statics::NewProp_Count_MetaData[] = {
		{ "Category", "Checkbox" },
		{ "ModuleRelativePath", "RadioButtons.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URadioButtons_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URadioButtons, Count), METADATA_PARAMS(Z_Construct_UClass_URadioButtons_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URadioButtons_Statics::NewProp_Count_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URadioButtons_Statics::NewProp_WidgetStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "DisplayName", "Style" },
		{ "ModuleRelativePath", "RadioButtons.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URadioButtons_Statics::NewProp_WidgetStyle = { "WidgetStyle", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URadioButtons, WidgetStyle), Z_Construct_UScriptStruct_FTestSlateStyle, METADATA_PARAMS(Z_Construct_UClass_URadioButtons_Statics::NewProp_WidgetStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URadioButtons_Statics::NewProp_WidgetStyle_MetaData)) }; // 2193160096
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URadioButtons_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadioButtons_Statics::NewProp_OnRadioButtonsChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadioButtons_Statics::NewProp_Count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadioButtons_Statics::NewProp_WidgetStyle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URadioButtons_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URadioButtons>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URadioButtons_Statics::ClassParams = {
		&URadioButtons::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URadioButtons_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URadioButtons_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URadioButtons_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URadioButtons_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URadioButtons()
	{
		if (!Z_Registration_Info_UClass_URadioButtons.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URadioButtons.OuterSingleton, Z_Construct_UClass_URadioButtons_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URadioButtons.OuterSingleton;
	}
	template<> TANKOGEDDON_API UClass* StaticClass<URadioButtons>()
	{
		return URadioButtons::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URadioButtons);
	struct Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_RadioButtons_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_RadioButtons_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URadioButtons, URadioButtons::StaticClass, TEXT("URadioButtons"), &Z_Registration_Info_UClass_URadioButtons, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URadioButtons), 3515354146U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_RadioButtons_h_2258573258(TEXT("/Script/Tankogeddon"),
		Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_RadioButtons_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_RadioButtons_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
