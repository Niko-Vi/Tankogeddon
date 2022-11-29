// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TANKOGEDDON_RadioButtons_generated_h
#error "RadioButtons.generated.h already included, missing '#pragma once' in RadioButtons.h"
#endif
#define TANKOGEDDON_RadioButtons_generated_h

#define FID_Tankogeddon_Source_Tankogeddon_RadioButtons_h_16_DELEGATE \
struct _Script_Tankogeddon_eventOnRadioButtonsChange_Parms \
{ \
	int32 NewRadioChoice; \
}; \
static inline void FOnRadioButtonsChange_DelegateWrapper(const FMulticastScriptDelegate& OnRadioButtonsChange, int32 NewRadioChoice) \
{ \
	_Script_Tankogeddon_eventOnRadioButtonsChange_Parms Parms; \
	Parms.NewRadioChoice=NewRadioChoice; \
	OnRadioButtonsChange.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Tankogeddon_Source_Tankogeddon_RadioButtons_h_21_SPARSE_DATA
#define FID_Tankogeddon_Source_Tankogeddon_RadioButtons_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetCount);


#define FID_Tankogeddon_Source_Tankogeddon_RadioButtons_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCount);


#define FID_Tankogeddon_Source_Tankogeddon_RadioButtons_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURadioButtons(); \
	friend struct Z_Construct_UClass_URadioButtons_Statics; \
public: \
	DECLARE_CLASS(URadioButtons, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Tankogeddon"), NO_API) \
	DECLARE_SERIALIZER(URadioButtons)


#define FID_Tankogeddon_Source_Tankogeddon_RadioButtons_h_21_INCLASS \
private: \
	static void StaticRegisterNativesURadioButtons(); \
	friend struct Z_Construct_UClass_URadioButtons_Statics; \
public: \
	DECLARE_CLASS(URadioButtons, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Tankogeddon"), NO_API) \
	DECLARE_SERIALIZER(URadioButtons)


#define FID_Tankogeddon_Source_Tankogeddon_RadioButtons_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URadioButtons(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URadioButtons) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URadioButtons); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URadioButtons); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URadioButtons(URadioButtons&&); \
	NO_API URadioButtons(const URadioButtons&); \
public:


#define FID_Tankogeddon_Source_Tankogeddon_RadioButtons_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URadioButtons(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URadioButtons(URadioButtons&&); \
	NO_API URadioButtons(const URadioButtons&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URadioButtons); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URadioButtons); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URadioButtons)


#define FID_Tankogeddon_Source_Tankogeddon_RadioButtons_h_18_PROLOG
#define FID_Tankogeddon_Source_Tankogeddon_RadioButtons_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Tankogeddon_Source_Tankogeddon_RadioButtons_h_21_SPARSE_DATA \
	FID_Tankogeddon_Source_Tankogeddon_RadioButtons_h_21_RPC_WRAPPERS \
	FID_Tankogeddon_Source_Tankogeddon_RadioButtons_h_21_INCLASS \
	FID_Tankogeddon_Source_Tankogeddon_RadioButtons_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Tankogeddon_Source_Tankogeddon_RadioButtons_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Tankogeddon_Source_Tankogeddon_RadioButtons_h_21_SPARSE_DATA \
	FID_Tankogeddon_Source_Tankogeddon_RadioButtons_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Tankogeddon_Source_Tankogeddon_RadioButtons_h_21_INCLASS_NO_PURE_DECLS \
	FID_Tankogeddon_Source_Tankogeddon_RadioButtons_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANKOGEDDON_API UClass* StaticClass<class URadioButtons>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Tankogeddon_Source_Tankogeddon_RadioButtons_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
