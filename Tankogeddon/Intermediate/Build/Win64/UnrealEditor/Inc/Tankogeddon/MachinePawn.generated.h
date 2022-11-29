// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TANKOGEDDON_MachinePawn_generated_h
#error "MachinePawn.generated.h already included, missing '#pragma once' in MachinePawn.h"
#endif
#define TANKOGEDDON_MachinePawn_generated_h

#define FID_Tankogeddon_Source_Tankogeddon_MachinePawn_h_14_SPARSE_DATA
#define FID_Tankogeddon_Source_Tankogeddon_MachinePawn_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDamageTaken); \
	DECLARE_FUNCTION(execDie); \
	DECLARE_FUNCTION(execGetCurrentHealth); \
	DECLARE_FUNCTION(execAddAndShowScore);


#define FID_Tankogeddon_Source_Tankogeddon_MachinePawn_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDamageTaken); \
	DECLARE_FUNCTION(execDie); \
	DECLARE_FUNCTION(execGetCurrentHealth); \
	DECLARE_FUNCTION(execAddAndShowScore);


#define FID_Tankogeddon_Source_Tankogeddon_MachinePawn_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMachinePawn(); \
	friend struct Z_Construct_UClass_AMachinePawn_Statics; \
public: \
	DECLARE_CLASS(AMachinePawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tankogeddon"), NO_API) \
	DECLARE_SERIALIZER(AMachinePawn) \
	virtual UObject* _getUObject() const override { return const_cast<AMachinePawn*>(this); }


#define FID_Tankogeddon_Source_Tankogeddon_MachinePawn_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAMachinePawn(); \
	friend struct Z_Construct_UClass_AMachinePawn_Statics; \
public: \
	DECLARE_CLASS(AMachinePawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tankogeddon"), NO_API) \
	DECLARE_SERIALIZER(AMachinePawn) \
	virtual UObject* _getUObject() const override { return const_cast<AMachinePawn*>(this); }


#define FID_Tankogeddon_Source_Tankogeddon_MachinePawn_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMachinePawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMachinePawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMachinePawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMachinePawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMachinePawn(AMachinePawn&&); \
	NO_API AMachinePawn(const AMachinePawn&); \
public:


#define FID_Tankogeddon_Source_Tankogeddon_MachinePawn_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMachinePawn(AMachinePawn&&); \
	NO_API AMachinePawn(const AMachinePawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMachinePawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMachinePawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMachinePawn)


#define FID_Tankogeddon_Source_Tankogeddon_MachinePawn_h_11_PROLOG
#define FID_Tankogeddon_Source_Tankogeddon_MachinePawn_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Tankogeddon_Source_Tankogeddon_MachinePawn_h_14_SPARSE_DATA \
	FID_Tankogeddon_Source_Tankogeddon_MachinePawn_h_14_RPC_WRAPPERS \
	FID_Tankogeddon_Source_Tankogeddon_MachinePawn_h_14_INCLASS \
	FID_Tankogeddon_Source_Tankogeddon_MachinePawn_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Tankogeddon_Source_Tankogeddon_MachinePawn_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Tankogeddon_Source_Tankogeddon_MachinePawn_h_14_SPARSE_DATA \
	FID_Tankogeddon_Source_Tankogeddon_MachinePawn_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Tankogeddon_Source_Tankogeddon_MachinePawn_h_14_INCLASS_NO_PURE_DECLS \
	FID_Tankogeddon_Source_Tankogeddon_MachinePawn_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANKOGEDDON_API UClass* StaticClass<class AMachinePawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Tankogeddon_Source_Tankogeddon_MachinePawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
