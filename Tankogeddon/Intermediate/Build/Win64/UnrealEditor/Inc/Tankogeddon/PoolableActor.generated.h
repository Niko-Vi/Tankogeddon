// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APoolableActor;
#ifdef TANKOGEDDON_PoolableActor_generated_h
#error "PoolableActor.generated.h already included, missing '#pragma once' in PoolableActor.h"
#endif
#define TANKOGEDDON_PoolableActor_generated_h

#define FID_Tankogeddon_Source_Tankogeddon_PoolableActor_h_15_DELEGATE \
struct PoolableActor_eventOnPooleableActorDespawn_Parms \
{ \
	APoolableActor* PoolActor; \
}; \
static inline void FOnPooleableActorDespawn_DelegateWrapper(const FMulticastScriptDelegate& OnPooleableActorDespawn, APoolableActor* PoolActor) \
{ \
	PoolableActor_eventOnPooleableActorDespawn_Parms Parms; \
	Parms.PoolActor=PoolActor; \
	OnPooleableActorDespawn.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Tankogeddon_Source_Tankogeddon_PoolableActor_h_13_SPARSE_DATA
#define FID_Tankogeddon_Source_Tankogeddon_PoolableActor_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDeactivate);


#define FID_Tankogeddon_Source_Tankogeddon_PoolableActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDeactivate);


#define FID_Tankogeddon_Source_Tankogeddon_PoolableActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPoolableActor(); \
	friend struct Z_Construct_UClass_APoolableActor_Statics; \
public: \
	DECLARE_CLASS(APoolableActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tankogeddon"), NO_API) \
	DECLARE_SERIALIZER(APoolableActor)


#define FID_Tankogeddon_Source_Tankogeddon_PoolableActor_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAPoolableActor(); \
	friend struct Z_Construct_UClass_APoolableActor_Statics; \
public: \
	DECLARE_CLASS(APoolableActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tankogeddon"), NO_API) \
	DECLARE_SERIALIZER(APoolableActor)


#define FID_Tankogeddon_Source_Tankogeddon_PoolableActor_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APoolableActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APoolableActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APoolableActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APoolableActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APoolableActor(APoolableActor&&); \
	NO_API APoolableActor(const APoolableActor&); \
public:


#define FID_Tankogeddon_Source_Tankogeddon_PoolableActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APoolableActor(APoolableActor&&); \
	NO_API APoolableActor(const APoolableActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APoolableActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APoolableActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APoolableActor)


#define FID_Tankogeddon_Source_Tankogeddon_PoolableActor_h_10_PROLOG
#define FID_Tankogeddon_Source_Tankogeddon_PoolableActor_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Tankogeddon_Source_Tankogeddon_PoolableActor_h_13_SPARSE_DATA \
	FID_Tankogeddon_Source_Tankogeddon_PoolableActor_h_13_RPC_WRAPPERS \
	FID_Tankogeddon_Source_Tankogeddon_PoolableActor_h_13_INCLASS \
	FID_Tankogeddon_Source_Tankogeddon_PoolableActor_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Tankogeddon_Source_Tankogeddon_PoolableActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Tankogeddon_Source_Tankogeddon_PoolableActor_h_13_SPARSE_DATA \
	FID_Tankogeddon_Source_Tankogeddon_PoolableActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Tankogeddon_Source_Tankogeddon_PoolableActor_h_13_INCLASS_NO_PURE_DECLS \
	FID_Tankogeddon_Source_Tankogeddon_PoolableActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANKOGEDDON_API UClass* StaticClass<class APoolableActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Tankogeddon_Source_Tankogeddon_PoolableActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
