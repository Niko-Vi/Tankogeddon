// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tankogeddon/InGameHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInGameHUD() {}
// Cross Module References
	TANKOGEDDON_API UClass* Z_Construct_UClass_UInGameHUD_NoRegister();
	TANKOGEDDON_API UClass* Z_Construct_UClass_UInGameHUD();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Tankogeddon();
// End Cross Module References
	DEFINE_FUNCTION(UInGameHUD::execSetAmmoState)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_ammo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAmmoState(Z_Param_ammo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInGameHUD::execSetMaxHealth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Health);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxHealth(Z_Param_Health);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInGameHUD::execChangeHealth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Health);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeHealth(Z_Param_Health);
		P_NATIVE_END;
	}
	void UInGameHUD::StaticRegisterNativesUInGameHUD()
	{
		UClass* Class = UInGameHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeHealth", &UInGameHUD::execChangeHealth },
			{ "SetAmmoState", &UInGameHUD::execSetAmmoState },
			{ "SetMaxHealth", &UInGameHUD::execSetMaxHealth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInGameHUD_ChangeHealth_Statics
	{
		struct InGameHUD_eventChangeHealth_Parms
		{
			float Health;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInGameHUD_ChangeHealth_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InGameHUD_eventChangeHealth_Parms, Health), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInGameHUD_ChangeHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInGameHUD_ChangeHealth_Statics::NewProp_Health,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInGameHUD_ChangeHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InGameHUD.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInGameHUD_ChangeHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInGameHUD, nullptr, "ChangeHealth", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInGameHUD_ChangeHealth_Statics::InGameHUD_eventChangeHealth_Parms), Z_Construct_UFunction_UInGameHUD_ChangeHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInGameHUD_ChangeHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInGameHUD_ChangeHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInGameHUD_ChangeHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInGameHUD_ChangeHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInGameHUD_ChangeHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInGameHUD_SetAmmoState_Statics
	{
		struct InGameHUD_eventSetAmmoState_Parms
		{
			FText ammo;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_ammo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UInGameHUD_SetAmmoState_Statics::NewProp_ammo = { "ammo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InGameHUD_eventSetAmmoState_Parms, ammo), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInGameHUD_SetAmmoState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInGameHUD_SetAmmoState_Statics::NewProp_ammo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInGameHUD_SetAmmoState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InGameHUD.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInGameHUD_SetAmmoState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInGameHUD, nullptr, "SetAmmoState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInGameHUD_SetAmmoState_Statics::InGameHUD_eventSetAmmoState_Parms), Z_Construct_UFunction_UInGameHUD_SetAmmoState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInGameHUD_SetAmmoState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInGameHUD_SetAmmoState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInGameHUD_SetAmmoState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInGameHUD_SetAmmoState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInGameHUD_SetAmmoState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInGameHUD_SetMaxHealth_Statics
	{
		struct InGameHUD_eventSetMaxHealth_Parms
		{
			float Health;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInGameHUD_SetMaxHealth_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InGameHUD_eventSetMaxHealth_Parms, Health), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInGameHUD_SetMaxHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInGameHUD_SetMaxHealth_Statics::NewProp_Health,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInGameHUD_SetMaxHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InGameHUD.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInGameHUD_SetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInGameHUD, nullptr, "SetMaxHealth", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInGameHUD_SetMaxHealth_Statics::InGameHUD_eventSetMaxHealth_Parms), Z_Construct_UFunction_UInGameHUD_SetMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInGameHUD_SetMaxHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInGameHUD_SetMaxHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInGameHUD_SetMaxHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInGameHUD_SetMaxHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInGameHUD_SetMaxHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInGameHUD);
	UClass* Z_Construct_UClass_UInGameHUD_NoRegister()
	{
		return UInGameHUD::StaticClass();
	}
	struct Z_Construct_UClass_UInGameHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmmoState_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_AmmoState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInGameHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Tankogeddon,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInGameHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInGameHUD_ChangeHealth, "ChangeHealth" }, // 2669720749
		{ &Z_Construct_UFunction_UInGameHUD_SetAmmoState, "SetAmmoState" }, // 2625492405
		{ &Z_Construct_UFunction_UInGameHUD_SetMaxHealth, "SetMaxHealth" }, // 1118472083
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInGameHUD_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InGameHUD.h" },
		{ "ModuleRelativePath", "InGameHUD.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInGameHUD_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "InGameHUD" },
		{ "ModuleRelativePath", "InGameHUD.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInGameHUD_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInGameHUD, MaxHealth), METADATA_PARAMS(Z_Construct_UClass_UInGameHUD_Statics::NewProp_MaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInGameHUD_Statics::NewProp_MaxHealth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInGameHUD_Statics::NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "InGameHUD" },
		{ "ModuleRelativePath", "InGameHUD.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInGameHUD_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInGameHUD, CurrentHealth), METADATA_PARAMS(Z_Construct_UClass_UInGameHUD_Statics::NewProp_CurrentHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInGameHUD_Statics::NewProp_CurrentHealth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInGameHUD_Statics::NewProp_AmmoState_MetaData[] = {
		{ "Category", "InGameHUD" },
		{ "ModuleRelativePath", "InGameHUD.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UInGameHUD_Statics::NewProp_AmmoState = { "AmmoState", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInGameHUD, AmmoState), METADATA_PARAMS(Z_Construct_UClass_UInGameHUD_Statics::NewProp_AmmoState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInGameHUD_Statics::NewProp_AmmoState_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInGameHUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInGameHUD_Statics::NewProp_MaxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInGameHUD_Statics::NewProp_CurrentHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInGameHUD_Statics::NewProp_AmmoState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInGameHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInGameHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInGameHUD_Statics::ClassParams = {
		&UInGameHUD::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInGameHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInGameHUD_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInGameHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInGameHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInGameHUD()
	{
		if (!Z_Registration_Info_UClass_UInGameHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInGameHUD.OuterSingleton, Z_Construct_UClass_UInGameHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInGameHUD.OuterSingleton;
	}
	template<> TANKOGEDDON_API UClass* StaticClass<UInGameHUD>()
	{
		return UInGameHUD::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInGameHUD);
	struct Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_InGameHUD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_InGameHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInGameHUD, UInGameHUD::StaticClass, TEXT("UInGameHUD"), &Z_Registration_Info_UClass_UInGameHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInGameHUD), 3120660650U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_InGameHUD_h_2717338040(TEXT("/Script/Tankogeddon"),
		Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_InGameHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_InGameHUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
