// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TANKOGEDDON_Scorable_generated_h
#error "Scorable.generated.h already included, missing '#pragma once' in Scorable.h"
#endif
#define TANKOGEDDON_Scorable_generated_h

#define FID_Tankogeddon_Source_Tankogeddon_Scorable_h_13_SPARSE_DATA
#define FID_Tankogeddon_Source_Tankogeddon_Scorable_h_13_RPC_WRAPPERS
#define FID_Tankogeddon_Source_Tankogeddon_Scorable_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Tankogeddon_Source_Tankogeddon_Scorable_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TANKOGEDDON_API UScorable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScorable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TANKOGEDDON_API, UScorable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScorable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TANKOGEDDON_API UScorable(UScorable&&); \
	TANKOGEDDON_API UScorable(const UScorable&); \
public:


#define FID_Tankogeddon_Source_Tankogeddon_Scorable_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TANKOGEDDON_API UScorable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TANKOGEDDON_API UScorable(UScorable&&); \
	TANKOGEDDON_API UScorable(const UScorable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TANKOGEDDON_API, UScorable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScorable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScorable)


#define FID_Tankogeddon_Source_Tankogeddon_Scorable_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUScorable(); \
	friend struct Z_Construct_UClass_UScorable_Statics; \
public: \
	DECLARE_CLASS(UScorable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Tankogeddon"), TANKOGEDDON_API) \
	DECLARE_SERIALIZER(UScorable)


#define FID_Tankogeddon_Source_Tankogeddon_Scorable_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Tankogeddon_Source_Tankogeddon_Scorable_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Tankogeddon_Source_Tankogeddon_Scorable_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Tankogeddon_Source_Tankogeddon_Scorable_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Tankogeddon_Source_Tankogeddon_Scorable_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Tankogeddon_Source_Tankogeddon_Scorable_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Tankogeddon_Source_Tankogeddon_Scorable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IScorable() {} \
public: \
	typedef UScorable UClassType; \
	typedef IScorable ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Tankogeddon_Source_Tankogeddon_Scorable_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IScorable() {} \
public: \
	typedef UScorable UClassType; \
	typedef IScorable ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Tankogeddon_Source_Tankogeddon_Scorable_h_10_PROLOG
#define FID_Tankogeddon_Source_Tankogeddon_Scorable_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Tankogeddon_Source_Tankogeddon_Scorable_h_13_SPARSE_DATA \
	FID_Tankogeddon_Source_Tankogeddon_Scorable_h_13_RPC_WRAPPERS \
	FID_Tankogeddon_Source_Tankogeddon_Scorable_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Tankogeddon_Source_Tankogeddon_Scorable_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Tankogeddon_Source_Tankogeddon_Scorable_h_13_SPARSE_DATA \
	FID_Tankogeddon_Source_Tankogeddon_Scorable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Tankogeddon_Source_Tankogeddon_Scorable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANKOGEDDON_API UClass* StaticClass<class UScorable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Tankogeddon_Source_Tankogeddon_Scorable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
