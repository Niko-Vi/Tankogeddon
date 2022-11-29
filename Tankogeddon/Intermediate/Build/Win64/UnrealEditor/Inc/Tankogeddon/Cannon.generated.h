// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TANKOGEDDON_Cannon_generated_h
#error "Cannon.generated.h already included, missing '#pragma once' in Cannon.h"
#endif
#define TANKOGEDDON_Cannon_generated_h

#define FID_Tankogeddon_Source_Tankogeddon_Cannon_h_14_SPARSE_DATA
#define FID_Tankogeddon_Source_Tankogeddon_Cannon_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAmmoState); \
	DECLARE_FUNCTION(execAddScore);


#define FID_Tankogeddon_Source_Tankogeddon_Cannon_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAmmoState); \
	DECLARE_FUNCTION(execAddScore);


#define FID_Tankogeddon_Source_Tankogeddon_Cannon_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACannon(); \
	friend struct Z_Construct_UClass_ACannon_Statics; \
public: \
	DECLARE_CLASS(ACannon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tankogeddon"), NO_API) \
	DECLARE_SERIALIZER(ACannon)


#define FID_Tankogeddon_Source_Tankogeddon_Cannon_h_14_INCLASS \
private: \
	static void StaticRegisterNativesACannon(); \
	friend struct Z_Construct_UClass_ACannon_Statics; \
public: \
	DECLARE_CLASS(ACannon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tankogeddon"), NO_API) \
	DECLARE_SERIALIZER(ACannon)


#define FID_Tankogeddon_Source_Tankogeddon_Cannon_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACannon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACannon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACannon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACannon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACannon(ACannon&&); \
	NO_API ACannon(const ACannon&); \
public:


#define FID_Tankogeddon_Source_Tankogeddon_Cannon_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACannon(ACannon&&); \
	NO_API ACannon(const ACannon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACannon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACannon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACannon)


#define FID_Tankogeddon_Source_Tankogeddon_Cannon_h_11_PROLOG
#define FID_Tankogeddon_Source_Tankogeddon_Cannon_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Tankogeddon_Source_Tankogeddon_Cannon_h_14_SPARSE_DATA \
	FID_Tankogeddon_Source_Tankogeddon_Cannon_h_14_RPC_WRAPPERS \
	FID_Tankogeddon_Source_Tankogeddon_Cannon_h_14_INCLASS \
	FID_Tankogeddon_Source_Tankogeddon_Cannon_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Tankogeddon_Source_Tankogeddon_Cannon_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Tankogeddon_Source_Tankogeddon_Cannon_h_14_SPARSE_DATA \
	FID_Tankogeddon_Source_Tankogeddon_Cannon_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Tankogeddon_Source_Tankogeddon_Cannon_h_14_INCLASS_NO_PURE_DECLS \
	FID_Tankogeddon_Source_Tankogeddon_Cannon_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANKOGEDDON_API UClass* StaticClass<class ACannon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Tankogeddon_Source_Tankogeddon_Cannon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
