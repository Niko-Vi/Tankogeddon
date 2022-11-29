// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tankogeddon/ActorPool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorPool() {}
// Cross Module References
	TANKOGEDDON_API UClass* Z_Construct_UClass_AActorPool_NoRegister();
	TANKOGEDDON_API UClass* Z_Construct_UClass_AActorPool();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Tankogeddon();
	TANKOGEDDON_API UClass* Z_Construct_UClass_APoolableActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	DEFINE_FUNCTION(AActorPool::execOnPooleableActorDespawn)
	{
		P_GET_OBJECT(APoolableActor,Z_Param_PoolActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPooleableActorDespawn(Z_Param_PoolActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActorPool::execSpawnPooleableActor)
	{
		P_GET_STRUCT(FVector,Z_Param_SpawnVector);
		P_GET_STRUCT(FRotator,Z_Param_SpawnRotator);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APoolableActor**)Z_Param__Result=P_THIS->SpawnPooleableActor(Z_Param_SpawnVector,Z_Param_SpawnRotator);
		P_NATIVE_END;
	}
	void AActorPool::StaticRegisterNativesAActorPool()
	{
		UClass* Class = AActorPool::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPooleableActorDespawn", &AActorPool::execOnPooleableActorDespawn },
			{ "SpawnPooleableActor", &AActorPool::execSpawnPooleableActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AActorPool_OnPooleableActorDespawn_Statics
	{
		struct ActorPool_eventOnPooleableActorDespawn_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActorPool_OnPooleableActorDespawn_Statics::NewProp_PoolActor = { "PoolActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorPool_eventOnPooleableActorDespawn_Parms, PoolActor), Z_Construct_UClass_APoolableActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActorPool_OnPooleableActorDespawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActorPool_OnPooleableActorDespawn_Statics::NewProp_PoolActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActorPool_OnPooleableActorDespawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ActorPool.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActorPool_OnPooleableActorDespawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActorPool, nullptr, "OnPooleableActorDespawn", nullptr, nullptr, sizeof(Z_Construct_UFunction_AActorPool_OnPooleableActorDespawn_Statics::ActorPool_eventOnPooleableActorDespawn_Parms), Z_Construct_UFunction_AActorPool_OnPooleableActorDespawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActorPool_OnPooleableActorDespawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActorPool_OnPooleableActorDespawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActorPool_OnPooleableActorDespawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActorPool_OnPooleableActorDespawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActorPool_OnPooleableActorDespawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActorPool_SpawnPooleableActor_Statics
	{
		struct ActorPool_eventSpawnPooleableActor_Parms
		{
			FVector SpawnVector;
			FRotator SpawnRotator;
			APoolableActor* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnVector;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnRotator;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActorPool_SpawnPooleableActor_Statics::NewProp_SpawnVector = { "SpawnVector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorPool_eventSpawnPooleableActor_Parms, SpawnVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AActorPool_SpawnPooleableActor_Statics::NewProp_SpawnRotator = { "SpawnRotator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorPool_eventSpawnPooleableActor_Parms, SpawnRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActorPool_SpawnPooleableActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorPool_eventSpawnPooleableActor_Parms, ReturnValue), Z_Construct_UClass_APoolableActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActorPool_SpawnPooleableActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActorPool_SpawnPooleableActor_Statics::NewProp_SpawnVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActorPool_SpawnPooleableActor_Statics::NewProp_SpawnRotator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActorPool_SpawnPooleableActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActorPool_SpawnPooleableActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "ActorPool" },
		{ "ModuleRelativePath", "ActorPool.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActorPool_SpawnPooleableActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActorPool, nullptr, "SpawnPooleableActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_AActorPool_SpawnPooleableActor_Statics::ActorPool_eventSpawnPooleableActor_Parms), Z_Construct_UFunction_AActorPool_SpawnPooleableActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActorPool_SpawnPooleableActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActorPool_SpawnPooleableActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActorPool_SpawnPooleableActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActorPool_SpawnPooleableActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActorPool_SpawnPooleableActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AActorPool);
	UClass* Z_Construct_UClass_AActorPool_NoRegister()
	{
		return AActorPool::StaticClass();
	}
	struct Z_Construct_UClass_AActorPool_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoolableActorSubclass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PoolableActorSubclass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoolSize_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PoolSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PooleableActorLifeSpan_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PooleableActorLifeSpan;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AActorPool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Tankogeddon,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AActorPool_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AActorPool_OnPooleableActorDespawn, "OnPooleableActorDespawn" }, // 3669263334
		{ &Z_Construct_UFunction_AActorPool_SpawnPooleableActor, "SpawnPooleableActor" }, // 3345775687
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActorPool_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ActorPool.h" },
		{ "ModuleRelativePath", "ActorPool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActorPool_Statics::NewProp_PoolableActorSubclass_MetaData[] = {
		{ "Category", "ActorPool" },
		{ "ModuleRelativePath", "ActorPool.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AActorPool_Statics::NewProp_PoolableActorSubclass = { "PoolableActorSubclass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActorPool, PoolableActorSubclass), Z_Construct_UClass_APoolableActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AActorPool_Statics::NewProp_PoolableActorSubclass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActorPool_Statics::NewProp_PoolableActorSubclass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActorPool_Statics::NewProp_PoolSize_MetaData[] = {
		{ "Category", "ActorPool" },
		{ "ModuleRelativePath", "ActorPool.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AActorPool_Statics::NewProp_PoolSize = { "PoolSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActorPool, PoolSize), METADATA_PARAMS(Z_Construct_UClass_AActorPool_Statics::NewProp_PoolSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActorPool_Statics::NewProp_PoolSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActorPool_Statics::NewProp_PooleableActorLifeSpan_MetaData[] = {
		{ "Category", "ActorPool" },
		{ "ModuleRelativePath", "ActorPool.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AActorPool_Statics::NewProp_PooleableActorLifeSpan = { "PooleableActorLifeSpan", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActorPool, PooleableActorLifeSpan), METADATA_PARAMS(Z_Construct_UClass_AActorPool_Statics::NewProp_PooleableActorLifeSpan_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActorPool_Statics::NewProp_PooleableActorLifeSpan_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AActorPool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorPool_Statics::NewProp_PoolableActorSubclass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorPool_Statics::NewProp_PoolSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorPool_Statics::NewProp_PooleableActorLifeSpan,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AActorPool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AActorPool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AActorPool_Statics::ClassParams = {
		&AActorPool::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AActorPool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AActorPool_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AActorPool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AActorPool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AActorPool()
	{
		if (!Z_Registration_Info_UClass_AActorPool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AActorPool.OuterSingleton, Z_Construct_UClass_AActorPool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AActorPool.OuterSingleton;
	}
	template<> TANKOGEDDON_API UClass* StaticClass<AActorPool>()
	{
		return AActorPool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AActorPool);
	struct Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_ActorPool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_ActorPool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AActorPool, AActorPool::StaticClass, TEXT("AActorPool"), &Z_Registration_Info_UClass_AActorPool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AActorPool), 3589750955U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_ActorPool_h_2290826917(TEXT("/Script/Tankogeddon"),
		Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_ActorPool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_ActorPool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
