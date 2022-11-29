// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
enum class EWidgetID : uint8;
#ifdef TANKOGEDDON_ATankHUD_generated_h
#error "ATankHUD.generated.h already included, missing '#pragma once' in ATankHUD.h"
#endif
#define TANKOGEDDON_ATankHUD_generated_h

#define FID_Tankogeddon_Source_Tankogeddon_ATankHUD_h_25_SPARSE_DATA
#define FID_Tankogeddon_Source_Tankogeddon_ATankHUD_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentWidget); \
	DECLARE_FUNCTION(execHideWidget); \
	DECLARE_FUNCTION(execShowWidget);


#define FID_Tankogeddon_Source_Tankogeddon_ATankHUD_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentWidget); \
	DECLARE_FUNCTION(execHideWidget); \
	DECLARE_FUNCTION(execShowWidget);


#define FID_Tankogeddon_Source_Tankogeddon_ATankHUD_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAATankHUD(); \
	friend struct Z_Construct_UClass_AATankHUD_Statics; \
public: \
	DECLARE_CLASS(AATankHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tankogeddon"), NO_API) \
	DECLARE_SERIALIZER(AATankHUD)


#define FID_Tankogeddon_Source_Tankogeddon_ATankHUD_h_25_INCLASS \
private: \
	static void StaticRegisterNativesAATankHUD(); \
	friend struct Z_Construct_UClass_AATankHUD_Statics; \
public: \
	DECLARE_CLASS(AATankHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tankogeddon"), NO_API) \
	DECLARE_SERIALIZER(AATankHUD)


#define FID_Tankogeddon_Source_Tankogeddon_ATankHUD_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AATankHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AATankHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AATankHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AATankHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AATankHUD(AATankHUD&&); \
	NO_API AATankHUD(const AATankHUD&); \
public:


#define FID_Tankogeddon_Source_Tankogeddon_ATankHUD_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AATankHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AATankHUD(AATankHUD&&); \
	NO_API AATankHUD(const AATankHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AATankHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AATankHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AATankHUD)


#define FID_Tankogeddon_Source_Tankogeddon_ATankHUD_h_22_PROLOG
#define FID_Tankogeddon_Source_Tankogeddon_ATankHUD_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Tankogeddon_Source_Tankogeddon_ATankHUD_h_25_SPARSE_DATA \
	FID_Tankogeddon_Source_Tankogeddon_ATankHUD_h_25_RPC_WRAPPERS \
	FID_Tankogeddon_Source_Tankogeddon_ATankHUD_h_25_INCLASS \
	FID_Tankogeddon_Source_Tankogeddon_ATankHUD_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Tankogeddon_Source_Tankogeddon_ATankHUD_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Tankogeddon_Source_Tankogeddon_ATankHUD_h_25_SPARSE_DATA \
	FID_Tankogeddon_Source_Tankogeddon_ATankHUD_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Tankogeddon_Source_Tankogeddon_ATankHUD_h_25_INCLASS_NO_PURE_DECLS \
	FID_Tankogeddon_Source_Tankogeddon_ATankHUD_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANKOGEDDON_API UClass* StaticClass<class AATankHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Tankogeddon_Source_Tankogeddon_ATankHUD_h


#define FOREACH_ENUM_EWIDGETID(op) \
	op(EWidgetID::Widget_MainMenu) \
	op(EWidgetID::Widget_InGameHUD) \
	op(EWidgetID::Widget_DeathScreen) \
	op(EWidgetID::Widget_Inventory) 

enum class EWidgetID : uint8;
template<> TANKOGEDDON_API UEnum* StaticEnum<EWidgetID>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
