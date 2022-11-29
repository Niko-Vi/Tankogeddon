// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tankogeddon/ATankHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeATankHUD() {}
// Cross Module References
	TANKOGEDDON_API UEnum* Z_Construct_UEnum_Tankogeddon_EWidgetID();
	UPackage* Z_Construct_UPackage__Script_Tankogeddon();
	TANKOGEDDON_API UClass* Z_Construct_UClass_AATankHUD_NoRegister();
	TANKOGEDDON_API UClass* Z_Construct_UClass_AATankHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWidgetID;
	static UEnum* EWidgetID_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWidgetID.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWidgetID.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Tankogeddon_EWidgetID, Z_Construct_UPackage__Script_Tankogeddon(), TEXT("EWidgetID"));
		}
		return Z_Registration_Info_UEnum_EWidgetID.OuterSingleton;
	}
	template<> TANKOGEDDON_API UEnum* StaticEnum<EWidgetID>()
	{
		return EWidgetID_StaticEnum();
	}
	struct Z_Construct_UEnum_Tankogeddon_EWidgetID_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Tankogeddon_EWidgetID_Statics::Enumerators[] = {
		{ "EWidgetID::Widget_MainMenu", (int64)EWidgetID::Widget_MainMenu },
		{ "EWidgetID::Widget_InGameHUD", (int64)EWidgetID::Widget_InGameHUD },
		{ "EWidgetID::Widget_DeathScreen", (int64)EWidgetID::Widget_DeathScreen },
		{ "EWidgetID::Widget_Inventory", (int64)EWidgetID::Widget_Inventory },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Tankogeddon_EWidgetID_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\nHUD and widget manager\n */" },
		{ "ModuleRelativePath", "ATankHUD.h" },
		{ "ToolTip", "HUD and widget manager" },
		{ "Widget_DeathScreen.Name", "EWidgetID::Widget_DeathScreen" },
		{ "Widget_InGameHUD.Name", "EWidgetID::Widget_InGameHUD" },
		{ "Widget_Inventory.Name", "EWidgetID::Widget_Inventory" },
		{ "Widget_MainMenu.Name", "EWidgetID::Widget_MainMenu" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Tankogeddon_EWidgetID_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Tankogeddon,
		nullptr,
		"EWidgetID",
		"EWidgetID",
		Z_Construct_UEnum_Tankogeddon_EWidgetID_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Tankogeddon_EWidgetID_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Tankogeddon_EWidgetID_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Tankogeddon_EWidgetID_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Tankogeddon_EWidgetID()
	{
		if (!Z_Registration_Info_UEnum_EWidgetID.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWidgetID.InnerSingleton, Z_Construct_UEnum_Tankogeddon_EWidgetID_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWidgetID.InnerSingleton;
	}
	DEFINE_FUNCTION(AATankHUD::execGetCurrentWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUserWidget**)Z_Param__Result=P_THIS->GetCurrentWidget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AATankHUD::execHideWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideWidget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AATankHUD::execShowWidget)
	{
		P_GET_ENUM(EWidgetID,Z_Param_WidgetID);
		P_GET_PROPERTY(FIntProperty,Z_Param_ZOrder);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUserWidget**)Z_Param__Result=P_THIS->ShowWidget(EWidgetID(Z_Param_WidgetID),Z_Param_ZOrder);
		P_NATIVE_END;
	}
	void AATankHUD::StaticRegisterNativesAATankHUD()
	{
		UClass* Class = AATankHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentWidget", &AATankHUD::execGetCurrentWidget },
			{ "HideWidget", &AATankHUD::execHideWidget },
			{ "ShowWidget", &AATankHUD::execShowWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AATankHUD_GetCurrentWidget_Statics
	{
		struct ATankHUD_eventGetCurrentWidget_Parms
		{
			UUserWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AATankHUD_GetCurrentWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AATankHUD_GetCurrentWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankHUD_eventGetCurrentWidget_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AATankHUD_GetCurrentWidget_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AATankHUD_GetCurrentWidget_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AATankHUD_GetCurrentWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AATankHUD_GetCurrentWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AATankHUD_GetCurrentWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ATankHUD.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AATankHUD_GetCurrentWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AATankHUD, nullptr, "GetCurrentWidget", nullptr, nullptr, sizeof(Z_Construct_UFunction_AATankHUD_GetCurrentWidget_Statics::ATankHUD_eventGetCurrentWidget_Parms), Z_Construct_UFunction_AATankHUD_GetCurrentWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AATankHUD_GetCurrentWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AATankHUD_GetCurrentWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AATankHUD_GetCurrentWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AATankHUD_GetCurrentWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AATankHUD_GetCurrentWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AATankHUD_HideWidget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AATankHUD_HideWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ATankHUD.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AATankHUD_HideWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AATankHUD, nullptr, "HideWidget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AATankHUD_HideWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AATankHUD_HideWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AATankHUD_HideWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AATankHUD_HideWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AATankHUD_ShowWidget_Statics
	{
		struct ATankHUD_eventShowWidget_Parms
		{
			EWidgetID WidgetID;
			int32 ZOrder;
			UUserWidget* ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_WidgetID_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetID_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_WidgetID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZOrder_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ZOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AATankHUD_ShowWidget_Statics::NewProp_WidgetID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AATankHUD_ShowWidget_Statics::NewProp_WidgetID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AATankHUD_ShowWidget_Statics::NewProp_WidgetID = { "WidgetID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankHUD_eventShowWidget_Parms, WidgetID), Z_Construct_UEnum_Tankogeddon_EWidgetID, METADATA_PARAMS(Z_Construct_UFunction_AATankHUD_ShowWidget_Statics::NewProp_WidgetID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AATankHUD_ShowWidget_Statics::NewProp_WidgetID_MetaData)) }; // 1477144197
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AATankHUD_ShowWidget_Statics::NewProp_ZOrder_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AATankHUD_ShowWidget_Statics::NewProp_ZOrder = { "ZOrder", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankHUD_eventShowWidget_Parms, ZOrder), METADATA_PARAMS(Z_Construct_UFunction_AATankHUD_ShowWidget_Statics::NewProp_ZOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AATankHUD_ShowWidget_Statics::NewProp_ZOrder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AATankHUD_ShowWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AATankHUD_ShowWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankHUD_eventShowWidget_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AATankHUD_ShowWidget_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AATankHUD_ShowWidget_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AATankHUD_ShowWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AATankHUD_ShowWidget_Statics::NewProp_WidgetID_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AATankHUD_ShowWidget_Statics::NewProp_WidgetID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AATankHUD_ShowWidget_Statics::NewProp_ZOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AATankHUD_ShowWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AATankHUD_ShowWidget_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_ZOrder", "0" },
		{ "ModuleRelativePath", "ATankHUD.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AATankHUD_ShowWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AATankHUD, nullptr, "ShowWidget", nullptr, nullptr, sizeof(Z_Construct_UFunction_AATankHUD_ShowWidget_Statics::ATankHUD_eventShowWidget_Parms), Z_Construct_UFunction_AATankHUD_ShowWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AATankHUD_ShowWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AATankHUD_ShowWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AATankHUD_ShowWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AATankHUD_ShowWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AATankHUD_ShowWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AATankHUD);
	UClass* Z_Construct_UClass_AATankHUD_NoRegister()
	{
		return AATankHUD::StaticClass();
	}
	struct Z_Construct_UClass_AATankHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetClasses_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_WidgetClasses_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_WidgetClasses_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetClasses_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_WidgetClasses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AATankHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Tankogeddon,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AATankHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AATankHUD_GetCurrentWidget, "GetCurrentWidget" }, // 405369257
		{ &Z_Construct_UFunction_AATankHUD_HideWidget, "HideWidget" }, // 3555211843
		{ &Z_Construct_UFunction_AATankHUD_ShowWidget, "ShowWidget" }, // 547157495
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AATankHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "ATankHUD.h" },
		{ "ModuleRelativePath", "ATankHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AATankHUD_Statics::NewProp_WidgetClasses_ValueProp = { "WidgetClasses", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AATankHUD_Statics::NewProp_WidgetClasses_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AATankHUD_Statics::NewProp_WidgetClasses_Key_KeyProp = { "WidgetClasses_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Tankogeddon_EWidgetID, METADATA_PARAMS(nullptr, 0) }; // 1477144197
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AATankHUD_Statics::NewProp_WidgetClasses_MetaData[] = {
		{ "Category", "ATankHUD" },
		{ "ModuleRelativePath", "ATankHUD.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AATankHUD_Statics::NewProp_WidgetClasses = { "WidgetClasses", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AATankHUD, WidgetClasses), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AATankHUD_Statics::NewProp_WidgetClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AATankHUD_Statics::NewProp_WidgetClasses_MetaData)) }; // 1477144197
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AATankHUD_Statics::NewProp_CurrentWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ATankHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AATankHUD_Statics::NewProp_CurrentWidget = { "CurrentWidget", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AATankHUD, CurrentWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AATankHUD_Statics::NewProp_CurrentWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AATankHUD_Statics::NewProp_CurrentWidget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AATankHUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AATankHUD_Statics::NewProp_WidgetClasses_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AATankHUD_Statics::NewProp_WidgetClasses_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AATankHUD_Statics::NewProp_WidgetClasses_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AATankHUD_Statics::NewProp_WidgetClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AATankHUD_Statics::NewProp_CurrentWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AATankHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AATankHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AATankHUD_Statics::ClassParams = {
		&AATankHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AATankHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AATankHUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AATankHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AATankHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AATankHUD()
	{
		if (!Z_Registration_Info_UClass_AATankHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AATankHUD.OuterSingleton, Z_Construct_UClass_AATankHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AATankHUD.OuterSingleton;
	}
	template<> TANKOGEDDON_API UClass* StaticClass<AATankHUD>()
	{
		return AATankHUD::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AATankHUD);
	struct Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_ATankHUD_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_ATankHUD_h_Statics::EnumInfo[] = {
		{ EWidgetID_StaticEnum, TEXT("EWidgetID"), &Z_Registration_Info_UEnum_EWidgetID, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1477144197U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_ATankHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AATankHUD, AATankHUD::StaticClass, TEXT("AATankHUD"), &Z_Registration_Info_UClass_AATankHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AATankHUD), 2922399688U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_ATankHUD_h_1528539708(TEXT("/Script/Tankogeddon"),
		Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_ATankHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_ATankHUD_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_ATankHUD_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_ATankHUD_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
