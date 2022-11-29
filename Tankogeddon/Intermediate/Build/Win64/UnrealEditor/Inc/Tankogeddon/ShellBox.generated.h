// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef TANKOGEDDON_ShellBox_generated_h
#error "ShellBox.generated.h already included, missing '#pragma once' in ShellBox.h"
#endif
#define TANKOGEDDON_ShellBox_generated_h

#define FID_Tankogeddon_Source_Tankogeddon_ShellBox_h_12_SPARSE_DATA
#define FID_Tankogeddon_Source_Tankogeddon_ShellBox_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnMeshOverlapBegin);


#define FID_Tankogeddon_Source_Tankogeddon_ShellBox_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnMeshOverlapBegin);


#define FID_Tankogeddon_Source_Tankogeddon_ShellBox_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShellBox(); \
	friend struct Z_Construct_UClass_AShellBox_Statics; \
public: \
	DECLARE_CLASS(AShellBox, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tankogeddon"), NO_API) \
	DECLARE_SERIALIZER(AShellBox)


#define FID_Tankogeddon_Source_Tankogeddon_ShellBox_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAShellBox(); \
	friend struct Z_Construct_UClass_AShellBox_Statics; \
public: \
	DECLARE_CLASS(AShellBox, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tankogeddon"), NO_API) \
	DECLARE_SERIALIZER(AShellBox)


#define FID_Tankogeddon_Source_Tankogeddon_ShellBox_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShellBox(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShellBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShellBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShellBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShellBox(AShellBox&&); \
	NO_API AShellBox(const AShellBox&); \
public:


#define FID_Tankogeddon_Source_Tankogeddon_ShellBox_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShellBox(AShellBox&&); \
	NO_API AShellBox(const AShellBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShellBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShellBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShellBox)


#define FID_Tankogeddon_Source_Tankogeddon_ShellBox_h_9_PROLOG
#define FID_Tankogeddon_Source_Tankogeddon_ShellBox_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Tankogeddon_Source_Tankogeddon_ShellBox_h_12_SPARSE_DATA \
	FID_Tankogeddon_Source_Tankogeddon_ShellBox_h_12_RPC_WRAPPERS \
	FID_Tankogeddon_Source_Tankogeddon_ShellBox_h_12_INCLASS \
	FID_Tankogeddon_Source_Tankogeddon_ShellBox_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Tankogeddon_Source_Tankogeddon_ShellBox_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Tankogeddon_Source_Tankogeddon_ShellBox_h_12_SPARSE_DATA \
	FID_Tankogeddon_Source_Tankogeddon_ShellBox_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Tankogeddon_Source_Tankogeddon_ShellBox_h_12_INCLASS_NO_PURE_DECLS \
	FID_Tankogeddon_Source_Tankogeddon_ShellBox_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANKOGEDDON_API UClass* StaticClass<class AShellBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Tankogeddon_Source_Tankogeddon_ShellBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
