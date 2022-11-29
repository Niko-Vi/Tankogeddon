// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tankogeddon/PhysicsProjectile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsProjectile() {}
// Cross Module References
	TANKOGEDDON_API UClass* Z_Construct_UClass_APhysicsProjectile_NoRegister();
	TANKOGEDDON_API UClass* Z_Construct_UClass_APhysicsProjectile();
	TANKOGEDDON_API UClass* Z_Construct_UClass_AProjectile();
	UPackage* Z_Construct_UPackage__Script_Tankogeddon();
	TANKOGEDDON_API UClass* Z_Construct_UClass_UPhysicsComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void APhysicsProjectile::StaticRegisterNativesAPhysicsProjectile()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APhysicsProjectile);
	UClass* Z_Construct_UClass_APhysicsProjectile_NoRegister()
	{
		return APhysicsProjectile::StaticClass();
	}
	struct Z_Construct_UClass_APhysicsProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysicsComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrailEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TrailEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementAccurency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementAccurency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxTimeSimulation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxTimeSimulation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeStep_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeStep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeedPhysics_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeedPhysics;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowtrajectory_MetaData[];
#endif
		static void NewProp_bShowtrajectory_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowtrajectory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveVector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MoveVector;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentTrajectory_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTrajectory_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CurrentTrajectory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrajectoryPointIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TrajectoryPointIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APhysicsProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AProjectile,
		(UObject* (*)())Z_Construct_UPackage__Script_Tankogeddon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsProjectile_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PhysicsProjectile.h" },
		{ "ModuleRelativePath", "PhysicsProjectile.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsProjectile_Statics::NewProp_PhysicsComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PhysicsProjectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APhysicsProjectile_Statics::NewProp_PhysicsComponent = { "PhysicsComponent", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APhysicsProjectile, PhysicsComponent), Z_Construct_UClass_UPhysicsComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APhysicsProjectile_Statics::NewProp_PhysicsComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhysicsProjectile_Statics::NewProp_PhysicsComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsProjectile_Statics::NewProp_TrailEffect_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PhysicsProjectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APhysicsProjectile_Statics::NewProp_TrailEffect = { "TrailEffect", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APhysicsProjectile, TrailEffect), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APhysicsProjectile_Statics::NewProp_TrailEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhysicsProjectile_Statics::NewProp_TrailEffect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsProjectile_Statics::NewProp_MovementAccurency_MetaData[] = {
		{ "Category", "Movement params" },
		{ "ModuleRelativePath", "PhysicsProjectile.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APhysicsProjectile_Statics::NewProp_MovementAccurency = { "MovementAccurency", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APhysicsProjectile, MovementAccurency), METADATA_PARAMS(Z_Construct_UClass_APhysicsProjectile_Statics::NewProp_MovementAccurency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhysicsProjectile_Statics::NewProp_MovementAccurency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsProjectile_Statics::NewProp_MaxTimeSimulation_MetaData[] = {
		{ "Category", "Movement params" },
		{ "ModuleRelativePath", "PhysicsProjectile.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APhysicsProjectile_Statics::NewProp_MaxTimeSimulation = { "MaxTimeSimulation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APhysicsProjectile, MaxTimeSimulation), METADATA_PARAMS(Z_Construct_UClass_APhysicsProjectile_Statics::NewProp_MaxTimeSimulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhysicsProjectile_Statics::NewProp_MaxTimeSimulation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsProjectile_Statics::NewProp_TimeStep_MetaData[] = {
		{ "Category", "Movement params" },
		{ "ModuleRelativePath", "PhysicsProjectile.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APhysicsProjectile_Statics::NewProp_TimeStep = { "TimeStep", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APhysicsProjectile, TimeStep), METADATA_PARAMS(Z_Construct_UClass_APhysicsProjectile_Statics::NewProp_TimeStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhysicsProjectile_Statics::NewProp_TimeStep_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsProjectile_Statics::NewProp_MoveSpeedPhysics_MetaData[] = {
		{ "Category", "Movement params" },
		{ "ModuleRelativePath", "PhysicsProjectile.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APhysicsProjectile_Statics::NewProp_MoveSpeedPhysics = { "MoveSpeedPhysics", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APhysicsProjectile, MoveSpeedPhysics), METADATA_PARAMS(Z_Construct_UClass_APhysicsProjectile_Statics::NewProp_MoveSpeedPhysics_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhysicsProjectile_Statics::NewProp_MoveSpeedPhysics_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsProjectile_Statics::NewProp_bShowtrajectory_MetaData[] = {
		{ "Category", "Movement params" },
		{ "ModuleRelativePath", "PhysicsProjectile.h" },
	};
#endif
	void Z_Construct_UClass_APhysicsProjectile_Statics::NewProp_bShowtrajectory_SetBit(void* Obj)
	{
		((APhysicsProjectile*)Obj)->bShowtrajectory = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APhysicsProjectile_Statics::NewProp_bShowtrajectory = { "bShowtrajectory", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APhysicsProjectile), &Z_Construct_UClass_APhysicsProjectile_Statics::NewProp_bShowtrajectory_SetBit, METADATA_PARAMS(Z_Construct_UClass_APhysicsProjectile_Statics::NewProp_bShowtrajectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhysicsProjectile_Statics::NewProp_bShowtrajectory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsProjectile_Statics::NewProp_MoveVector_MetaData[] = {
		{ "Category", "Movement params" },
		{ "ModuleRelativePath", "PhysicsProjectile.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APhysicsProjectile_Statics::NewProp_MoveVector = { "MoveVector", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APhysicsProjectile, MoveVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APhysicsProjectile_Statics::NewProp_MoveVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhysicsProjectile_Statics::NewProp_MoveVector_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APhysicsProjectile_Statics::NewProp_CurrentTrajectory_Inner = { "CurrentTrajectory", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsProjectile_Statics::NewProp_CurrentTrajectory_MetaData[] = {
		{ "Category", "Movement params" },
		{ "ModuleRelativePath", "PhysicsProjectile.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APhysicsProjectile_Statics::NewProp_CurrentTrajectory = { "CurrentTrajectory", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APhysicsProjectile, CurrentTrajectory), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APhysicsProjectile_Statics::NewProp_CurrentTrajectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhysicsProjectile_Statics::NewProp_CurrentTrajectory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsProjectile_Statics::NewProp_TrajectoryPointIndex_MetaData[] = {
		{ "Category", "Movement params" },
		{ "ModuleRelativePath", "PhysicsProjectile.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APhysicsProjectile_Statics::NewProp_TrajectoryPointIndex = { "TrajectoryPointIndex", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APhysicsProjectile, TrajectoryPointIndex), METADATA_PARAMS(Z_Construct_UClass_APhysicsProjectile_Statics::NewProp_TrajectoryPointIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhysicsProjectile_Statics::NewProp_TrajectoryPointIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APhysicsProjectile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhysicsProjectile_Statics::NewProp_PhysicsComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhysicsProjectile_Statics::NewProp_TrailEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhysicsProjectile_Statics::NewProp_MovementAccurency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhysicsProjectile_Statics::NewProp_MaxTimeSimulation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhysicsProjectile_Statics::NewProp_TimeStep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhysicsProjectile_Statics::NewProp_MoveSpeedPhysics,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhysicsProjectile_Statics::NewProp_bShowtrajectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhysicsProjectile_Statics::NewProp_MoveVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhysicsProjectile_Statics::NewProp_CurrentTrajectory_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhysicsProjectile_Statics::NewProp_CurrentTrajectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhysicsProjectile_Statics::NewProp_TrajectoryPointIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APhysicsProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APhysicsProjectile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APhysicsProjectile_Statics::ClassParams = {
		&APhysicsProjectile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APhysicsProjectile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APhysicsProjectile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APhysicsProjectile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APhysicsProjectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APhysicsProjectile()
	{
		if (!Z_Registration_Info_UClass_APhysicsProjectile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APhysicsProjectile.OuterSingleton, Z_Construct_UClass_APhysicsProjectile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APhysicsProjectile.OuterSingleton;
	}
	template<> TANKOGEDDON_API UClass* StaticClass<APhysicsProjectile>()
	{
		return APhysicsProjectile::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APhysicsProjectile);
	struct Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_PhysicsProjectile_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_PhysicsProjectile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APhysicsProjectile, APhysicsProjectile::StaticClass, TEXT("APhysicsProjectile"), &Z_Registration_Info_UClass_APhysicsProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APhysicsProjectile), 954713222U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_PhysicsProjectile_h_4087302471(TEXT("/Script/Tankogeddon"),
		Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_PhysicsProjectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_PhysicsProjectile_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
