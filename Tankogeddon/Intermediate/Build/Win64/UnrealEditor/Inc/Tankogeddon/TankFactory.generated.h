// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDamageData;
#ifdef TANKOGEDDON_TankFactory_generated_h
#error "TankFactory.generated.h already included, missing '#pragma once' in TankFactory.h"
#endif
#define TANKOGEDDON_TankFactory_generated_h

#define FID_Tankogeddon_Source_Tankogeddon_TankFactory_h_17_SPARSE_DATA
#define FID_Tankogeddon_Source_Tankogeddon_TankFactory_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSpawnTank); \
	DECLARE_FUNCTION(execDie); \
	DECLARE_FUNCTION(execDamageTaken); \
	DECLARE_FUNCTION(execTakeDamage);


#define FID_Tankogeddon_Source_Tankogeddon_TankFactory_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpawnTank); \
	DECLARE_FUNCTION(execDie); \
	DECLARE_FUNCTION(execDamageTaken); \
	DECLARE_FUNCTION(execTakeDamage);


#define FID_Tankogeddon_Source_Tankogeddon_TankFactory_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATankFactory(); \
	friend struct Z_Construct_UClass_ATankFactory_Statics; \
public: \
	DECLARE_CLASS(ATankFactory, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tankogeddon"), NO_API) \
	DECLARE_SERIALIZER(ATankFactory) \
	virtual UObject* _getUObject() const override { return const_cast<ATankFactory*>(this); }


#define FID_Tankogeddon_Source_Tankogeddon_TankFactory_h_17_INCLASS \
private: \
	static void StaticRegisterNativesATankFactory(); \
	friend struct Z_Construct_UClass_ATankFactory_Statics; \
public: \
	DECLARE_CLASS(ATankFactory, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tankogeddon"), NO_API) \
	DECLARE_SERIALIZER(ATankFactory) \
	virtual UObject* _getUObject() const override { return const_cast<ATankFactory*>(this); }


#define FID_Tankogeddon_Source_Tankogeddon_TankFactory_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATankFactory(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATankFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankFactory(ATankFactory&&); \
	NO_API ATankFactory(const ATankFactory&); \
public:


#define FID_Tankogeddon_Source_Tankogeddon_TankFactory_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankFactory(ATankFactory&&); \
	NO_API ATankFactory(const ATankFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankFactory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATankFactory)


#define FID_Tankogeddon_Source_Tankogeddon_TankFactory_h_14_PROLOG
#define FID_Tankogeddon_Source_Tankogeddon_TankFactory_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Tankogeddon_Source_Tankogeddon_TankFactory_h_17_SPARSE_DATA \
	FID_Tankogeddon_Source_Tankogeddon_TankFactory_h_17_RPC_WRAPPERS \
	FID_Tankogeddon_Source_Tankogeddon_TankFactory_h_17_INCLASS \
	FID_Tankogeddon_Source_Tankogeddon_TankFactory_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Tankogeddon_Source_Tankogeddon_TankFactory_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Tankogeddon_Source_Tankogeddon_TankFactory_h_17_SPARSE_DATA \
	FID_Tankogeddon_Source_Tankogeddon_TankFactory_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Tankogeddon_Source_Tankogeddon_TankFactory_h_17_INCLASS_NO_PURE_DECLS \
	FID_Tankogeddon_Source_Tankogeddon_TankFactory_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANKOGEDDON_API UClass* StaticClass<class ATankFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Tankogeddon_Source_Tankogeddon_TankFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
