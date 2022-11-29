// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TANKOGEDDON_GameStructs_generated_h
#error "GameStructs.generated.h already included, missing '#pragma once' in GameStructs.h"
#endif
#define TANKOGEDDON_GameStructs_generated_h

#define FID_Tankogeddon_Source_Tankogeddon_GameStructs_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDamageData_Statics; \
	TANKOGEDDON_API static class UScriptStruct* StaticStruct();


template<> TANKOGEDDON_API UScriptStruct* StaticStruct<struct FDamageData>();

#define FID_Tankogeddon_Source_Tankogeddon_GameStructs_h_39_SPARSE_DATA
#define FID_Tankogeddon_Source_Tankogeddon_GameStructs_h_39_RPC_WRAPPERS
#define FID_Tankogeddon_Source_Tankogeddon_GameStructs_h_39_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Tankogeddon_Source_Tankogeddon_GameStructs_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameStructs(); \
	friend struct Z_Construct_UClass_UGameStructs_Statics; \
public: \
	DECLARE_CLASS(UGameStructs, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Tankogeddon"), NO_API) \
	DECLARE_SERIALIZER(UGameStructs)


#define FID_Tankogeddon_Source_Tankogeddon_GameStructs_h_39_INCLASS \
private: \
	static void StaticRegisterNativesUGameStructs(); \
	friend struct Z_Construct_UClass_UGameStructs_Statics; \
public: \
	DECLARE_CLASS(UGameStructs, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Tankogeddon"), NO_API) \
	DECLARE_SERIALIZER(UGameStructs)


#define FID_Tankogeddon_Source_Tankogeddon_GameStructs_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameStructs(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameStructs) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameStructs); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameStructs); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameStructs(UGameStructs&&); \
	NO_API UGameStructs(const UGameStructs&); \
public:


#define FID_Tankogeddon_Source_Tankogeddon_GameStructs_h_39_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameStructs(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameStructs(UGameStructs&&); \
	NO_API UGameStructs(const UGameStructs&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameStructs); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameStructs); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameStructs)


#define FID_Tankogeddon_Source_Tankogeddon_GameStructs_h_36_PROLOG
#define FID_Tankogeddon_Source_Tankogeddon_GameStructs_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Tankogeddon_Source_Tankogeddon_GameStructs_h_39_SPARSE_DATA \
	FID_Tankogeddon_Source_Tankogeddon_GameStructs_h_39_RPC_WRAPPERS \
	FID_Tankogeddon_Source_Tankogeddon_GameStructs_h_39_INCLASS \
	FID_Tankogeddon_Source_Tankogeddon_GameStructs_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Tankogeddon_Source_Tankogeddon_GameStructs_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Tankogeddon_Source_Tankogeddon_GameStructs_h_39_SPARSE_DATA \
	FID_Tankogeddon_Source_Tankogeddon_GameStructs_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Tankogeddon_Source_Tankogeddon_GameStructs_h_39_INCLASS_NO_PURE_DECLS \
	FID_Tankogeddon_Source_Tankogeddon_GameStructs_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANKOGEDDON_API UClass* StaticClass<class UGameStructs>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Tankogeddon_Source_Tankogeddon_GameStructs_h


#define FOREACH_ENUM_ECANNONTYPE(op) \
	op(ECannonType::FireProjectile) \
	op(ECannonType::FireTrace) \
	op(ECannonType::FireDisc) 

enum class ECannonType : uint8;
template<> TANKOGEDDON_API UEnum* StaticEnum<ECannonType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
