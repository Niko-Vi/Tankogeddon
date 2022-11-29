// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tankogeddon/PhysicsComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsComponent() {}
// Cross Module References
	TANKOGEDDON_API UClass* Z_Construct_UClass_UPhysicsComponent_NoRegister();
	TANKOGEDDON_API UClass* Z_Construct_UClass_UPhysicsComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Tankogeddon();
// End Cross Module References
	void UPhysicsComponent::StaticRegisterNativesUPhysicsComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPhysicsComponent);
	UClass* Z_Construct_UClass_UPhysicsComponent_NoRegister()
	{
		return UPhysicsComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPhysicsComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gravity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Gravity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhysicsComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Tankogeddon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PhysicsComponent.h" },
		{ "ModuleRelativePath", "PhysicsComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsComponent_Statics::NewProp_Gravity_MetaData[] = {
		{ "Category", "Gravity params" },
		{ "ModuleRelativePath", "PhysicsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsComponent_Statics::NewProp_Gravity = { "Gravity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsComponent, Gravity), METADATA_PARAMS(Z_Construct_UClass_UPhysicsComponent_Statics::NewProp_Gravity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsComponent_Statics::NewProp_Gravity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhysicsComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsComponent_Statics::NewProp_Gravity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhysicsComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicsComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsComponent_Statics::ClassParams = {
		&UPhysicsComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPhysicsComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPhysicsComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhysicsComponent()
	{
		if (!Z_Registration_Info_UClass_UPhysicsComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhysicsComponent.OuterSingleton, Z_Construct_UClass_UPhysicsComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPhysicsComponent.OuterSingleton;
	}
	template<> TANKOGEDDON_API UClass* StaticClass<UPhysicsComponent>()
	{
		return UPhysicsComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsComponent);
	struct Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_PhysicsComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_PhysicsComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPhysicsComponent, UPhysicsComponent::StaticClass, TEXT("UPhysicsComponent"), &Z_Registration_Info_UClass_UPhysicsComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhysicsComponent), 3015203729U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_PhysicsComponent_h_4000052325(TEXT("/Script/Tankogeddon"),
		Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_PhysicsComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_PhysicsComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
