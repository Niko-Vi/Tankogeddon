// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tankogeddon/PoolableActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoolableActor() {}
// Cross Module References
	TANKOGEDDON_API UFunction* Z_Construct_UDelegateFunction_APoolableActor_OnPooleableActorDespawn__DelegateSignature();
	TANKOGEDDON_API UClass* Z_Construct_UClass_APoolableActor();
	TANKOGEDDON_API UClass* Z_Construct_UClass_APoolableActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Tankogeddon();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_APoolableActor_OnPooleableActorDespawn__DelegateSignature_Statics
	{
		struct PoolableActor_eventOnPooleableActorDespawn_Parms
		{
			APoolableActor* PoolActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PoolActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_APoolableActor_OnPooleableActorDespawn__DelegateSignature_Statics::NewProp_PoolActor = { "PoolActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PoolableActor_eventOnPooleableActorDespawn_Parms, PoolActor), Z_Construct_UClass_APoolableActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_APoolableActor_OnPooleableActorDespawn__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_APoolableActor_OnPooleableActorDespawn__DelegateSignature_Statics::NewProp_PoolActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_APoolableActor_OnPooleableActorDespawn__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PoolableActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_APoolableActor_OnPooleableActorDespawn__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APoolableActor, nullptr, "OnPooleableActorDespawn__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_APoolableActor_OnPooleableActorDespawn__DelegateSignature_Statics::PoolableActor_eventOnPooleableActorDespawn_Parms), Z_Construct_UDelegateFunction_APoolableActor_OnPooleableActorDespawn__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_APoolableActor_OnPooleableActorDespawn__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_APoolableActor_OnPooleableActorDespawn__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_APoolableActor_OnPooleableActorDespawn__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_APoolableActor_OnPooleableActorDespawn__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_APoolableActor_OnPooleableActorDespawn__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(APoolableActor::execDeactivate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Deactivate();
		P_NATIVE_END;
	}
	void APoolableActor::StaticRegisterNativesAPoolableActor()
	{
		UClass* Class = APoolableActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Deactivate", &APoolableActor::execDeactivate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APoolableActor_Deactivate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APoolableActor_Deactivate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Poolability" },
		{ "ModuleRelativePath", "PoolableActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APoolableActor_Deactivate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APoolableActor, nullptr, "Deactivate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APoolableActor_Deactivate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APoolableActor_Deactivate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APoolableActor_Deactivate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APoolableActor_Deactivate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APoolableActor);
	UClass* Z_Construct_UClass_APoolableActor_NoRegister()
	{
		return APoolableActor::StaticClass();
	}
	struct Z_Construct_UClass_APoolableActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APoolableActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Tankogeddon,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APoolableActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APoolableActor_Deactivate, "Deactivate" }, // 365703644
		{ &Z_Construct_UDelegateFunction_APoolableActor_OnPooleableActorDespawn__DelegateSignature, "OnPooleableActorDespawn__DelegateSignature" }, // 2437311273
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APoolableActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PoolableActor.h" },
		{ "ModuleRelativePath", "PoolableActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APoolableActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APoolableActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APoolableActor_Statics::ClassParams = {
		&APoolableActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APoolableActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APoolableActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APoolableActor()
	{
		if (!Z_Registration_Info_UClass_APoolableActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APoolableActor.OuterSingleton, Z_Construct_UClass_APoolableActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APoolableActor.OuterSingleton;
	}
	template<> TANKOGEDDON_API UClass* StaticClass<APoolableActor>()
	{
		return APoolableActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APoolableActor);
	struct Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_PoolableActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_PoolableActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APoolableActor, APoolableActor::StaticClass, TEXT("APoolableActor"), &Z_Registration_Info_UClass_APoolableActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APoolableActor), 3671087938U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_PoolableActor_h_3672974673(TEXT("/Script/Tankogeddon"),
		Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_PoolableActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_PoolableActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
