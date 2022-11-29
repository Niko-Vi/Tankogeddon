// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ATargetPoint;
#ifdef TANKOGEDDON_AITankPawn_generated_h
#error "AITankPawn.generated.h already included, missing '#pragma once' in AITankPawn.h"
#endif
#define TANKOGEDDON_AITankPawn_generated_h

#define FID_Tankogeddon_Source_Tankogeddon_AITankPawn_h_17_SPARSE_DATA
#define FID_Tankogeddon_Source_Tankogeddon_AITankPawn_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetPatrolCheckPoints); \
	DECLARE_FUNCTION(execGetEyesPosition); \
	DECLARE_FUNCTION(execGetTurretForwardVector); \
	DECLARE_FUNCTION(execGetAccurency); \
	DECLARE_FUNCTION(execGetPatrolCheckpoints);


#define FID_Tankogeddon_Source_Tankogeddon_AITankPawn_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetPatrolCheckPoints); \
	DECLARE_FUNCTION(execGetEyesPosition); \
	DECLARE_FUNCTION(execGetTurretForwardVector); \
	DECLARE_FUNCTION(execGetAccurency); \
	DECLARE_FUNCTION(execGetPatrolCheckpoints);


#define FID_Tankogeddon_Source_Tankogeddon_AITankPawn_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAITankPawn(); \
	friend struct Z_Construct_UClass_AAITankPawn_Statics; \
public: \
	DECLARE_CLASS(AAITankPawn, ATankPawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tankogeddon"), NO_API) \
	DECLARE_SERIALIZER(AAITankPawn)


#define FID_Tankogeddon_Source_Tankogeddon_AITankPawn_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAAITankPawn(); \
	friend struct Z_Construct_UClass_AAITankPawn_Statics; \
public: \
	DECLARE_CLASS(AAITankPawn, ATankPawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tankogeddon"), NO_API) \
	DECLARE_SERIALIZER(AAITankPawn)


#define FID_Tankogeddon_Source_Tankogeddon_AITankPawn_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAITankPawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAITankPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAITankPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAITankPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAITankPawn(AAITankPawn&&); \
	NO_API AAITankPawn(const AAITankPawn&); \
public:


#define FID_Tankogeddon_Source_Tankogeddon_AITankPawn_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAITankPawn() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAITankPawn(AAITankPawn&&); \
	NO_API AAITankPawn(const AAITankPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAITankPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAITankPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAITankPawn)


#define FID_Tankogeddon_Source_Tankogeddon_AITankPawn_h_14_PROLOG
#define FID_Tankogeddon_Source_Tankogeddon_AITankPawn_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Tankogeddon_Source_Tankogeddon_AITankPawn_h_17_SPARSE_DATA \
	FID_Tankogeddon_Source_Tankogeddon_AITankPawn_h_17_RPC_WRAPPERS \
	FID_Tankogeddon_Source_Tankogeddon_AITankPawn_h_17_INCLASS \
	FID_Tankogeddon_Source_Tankogeddon_AITankPawn_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Tankogeddon_Source_Tankogeddon_AITankPawn_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Tankogeddon_Source_Tankogeddon_AITankPawn_h_17_SPARSE_DATA \
	FID_Tankogeddon_Source_Tankogeddon_AITankPawn_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Tankogeddon_Source_Tankogeddon_AITankPawn_h_17_INCLASS_NO_PURE_DECLS \
	FID_Tankogeddon_Source_Tankogeddon_AITankPawn_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANKOGEDDON_API UClass* StaticClass<class AAITankPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Tankogeddon_Source_Tankogeddon_AITankPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
