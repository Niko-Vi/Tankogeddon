// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TANKOGEDDON_InGameHUD_generated_h
#error "InGameHUD.generated.h already included, missing '#pragma once' in InGameHUD.h"
#endif
#define TANKOGEDDON_InGameHUD_generated_h

#define FID_Tankogeddon_Source_Tankogeddon_InGameHUD_h_18_SPARSE_DATA
#define FID_Tankogeddon_Source_Tankogeddon_InGameHUD_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetAmmoState); \
	DECLARE_FUNCTION(execSetMaxHealth); \
	DECLARE_FUNCTION(execChangeHealth);


#define FID_Tankogeddon_Source_Tankogeddon_InGameHUD_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetAmmoState); \
	DECLARE_FUNCTION(execSetMaxHealth); \
	DECLARE_FUNCTION(execChangeHealth);


#define FID_Tankogeddon_Source_Tankogeddon_InGameHUD_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInGameHUD(); \
	friend struct Z_Construct_UClass_UInGameHUD_Statics; \
public: \
	DECLARE_CLASS(UInGameHUD, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Tankogeddon"), NO_API) \
	DECLARE_SERIALIZER(UInGameHUD)


#define FID_Tankogeddon_Source_Tankogeddon_InGameHUD_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUInGameHUD(); \
	friend struct Z_Construct_UClass_UInGameHUD_Statics; \
public: \
	DECLARE_CLASS(UInGameHUD, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Tankogeddon"), NO_API) \
	DECLARE_SERIALIZER(UInGameHUD)


#define FID_Tankogeddon_Source_Tankogeddon_InGameHUD_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInGameHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInGameHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInGameHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInGameHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInGameHUD(UInGameHUD&&); \
	NO_API UInGameHUD(const UInGameHUD&); \
public:


#define FID_Tankogeddon_Source_Tankogeddon_InGameHUD_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInGameHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInGameHUD(UInGameHUD&&); \
	NO_API UInGameHUD(const UInGameHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInGameHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInGameHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInGameHUD)


#define FID_Tankogeddon_Source_Tankogeddon_InGameHUD_h_15_PROLOG
#define FID_Tankogeddon_Source_Tankogeddon_InGameHUD_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Tankogeddon_Source_Tankogeddon_InGameHUD_h_18_SPARSE_DATA \
	FID_Tankogeddon_Source_Tankogeddon_InGameHUD_h_18_RPC_WRAPPERS \
	FID_Tankogeddon_Source_Tankogeddon_InGameHUD_h_18_INCLASS \
	FID_Tankogeddon_Source_Tankogeddon_InGameHUD_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Tankogeddon_Source_Tankogeddon_InGameHUD_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Tankogeddon_Source_Tankogeddon_InGameHUD_h_18_SPARSE_DATA \
	FID_Tankogeddon_Source_Tankogeddon_InGameHUD_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Tankogeddon_Source_Tankogeddon_InGameHUD_h_18_INCLASS_NO_PURE_DECLS \
	FID_Tankogeddon_Source_Tankogeddon_InGameHUD_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANKOGEDDON_API UClass* StaticClass<class UInGameHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Tankogeddon_Source_Tankogeddon_InGameHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
