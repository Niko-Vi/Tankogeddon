// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TANKOGEDDON_TankPawn_generated_h
#error "TankPawn.generated.h already included, missing '#pragma once' in TankPawn.h"
#endif
#define TANKOGEDDON_TankPawn_generated_h

#define FID_Tankogeddon_Source_Tankogeddon_TankPawn_h_22_DELEGATE \
struct TankPawn_eventOnAmmoStateChanged_Parms \
{ \
	FText ammoState; \
}; \
static inline void FOnAmmoStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAmmoStateChanged, const FText& ammoState) \
{ \
	TankPawn_eventOnAmmoStateChanged_Parms Parms; \
	Parms.ammoState=ammoState; \
	OnAmmoStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Tankogeddon_Source_Tankogeddon_TankPawn_h_20_SPARSE_DATA
#define FID_Tankogeddon_Source_Tankogeddon_TankPawn_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execChangeInventoryVisibility); \
	DECLARE_FUNCTION(execGetAmmoState);


#define FID_Tankogeddon_Source_Tankogeddon_TankPawn_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execChangeInventoryVisibility); \
	DECLARE_FUNCTION(execGetAmmoState);


#define FID_Tankogeddon_Source_Tankogeddon_TankPawn_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATankPawn(); \
	friend struct Z_Construct_UClass_ATankPawn_Statics; \
public: \
	DECLARE_CLASS(ATankPawn, AMachinePawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tankogeddon"), NO_API) \
	DECLARE_SERIALIZER(ATankPawn)


#define FID_Tankogeddon_Source_Tankogeddon_TankPawn_h_20_INCLASS \
private: \
	static void StaticRegisterNativesATankPawn(); \
	friend struct Z_Construct_UClass_ATankPawn_Statics; \
public: \
	DECLARE_CLASS(ATankPawn, AMachinePawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tankogeddon"), NO_API) \
	DECLARE_SERIALIZER(ATankPawn)


#define FID_Tankogeddon_Source_Tankogeddon_TankPawn_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATankPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATankPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankPawn(ATankPawn&&); \
	NO_API ATankPawn(const ATankPawn&); \
public:


#define FID_Tankogeddon_Source_Tankogeddon_TankPawn_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankPawn(ATankPawn&&); \
	NO_API ATankPawn(const ATankPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATankPawn)


#define FID_Tankogeddon_Source_Tankogeddon_TankPawn_h_17_PROLOG
#define FID_Tankogeddon_Source_Tankogeddon_TankPawn_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Tankogeddon_Source_Tankogeddon_TankPawn_h_20_SPARSE_DATA \
	FID_Tankogeddon_Source_Tankogeddon_TankPawn_h_20_RPC_WRAPPERS \
	FID_Tankogeddon_Source_Tankogeddon_TankPawn_h_20_INCLASS \
	FID_Tankogeddon_Source_Tankogeddon_TankPawn_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Tankogeddon_Source_Tankogeddon_TankPawn_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Tankogeddon_Source_Tankogeddon_TankPawn_h_20_SPARSE_DATA \
	FID_Tankogeddon_Source_Tankogeddon_TankPawn_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Tankogeddon_Source_Tankogeddon_TankPawn_h_20_INCLASS_NO_PURE_DECLS \
	FID_Tankogeddon_Source_Tankogeddon_TankPawn_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANKOGEDDON_API UClass* StaticClass<class ATankPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Tankogeddon_Source_Tankogeddon_TankPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS