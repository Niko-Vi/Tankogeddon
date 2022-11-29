// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tankogeddon/TankController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankController() {}
// Cross Module References
	TANKOGEDDON_API UClass* Z_Construct_UClass_ATankController_NoRegister();
	TANKOGEDDON_API UClass* Z_Construct_UClass_ATankController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Tankogeddon();
	TANKOGEDDON_API UClass* Z_Construct_UClass_ATankPawn_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(ATankController::execChangeInventoryVisibility)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeInventoryVisibility();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATankController::execSwitchCannon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchCannon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATankController::execAlterFireStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AlterFireStop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATankController::execAlterFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AlterFire();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATankController::execFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Fire();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATankController::execTurnRight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TurnRight(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATankController::execMoveForward)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveForward(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATankController::execisDead)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->isDead();
		P_NATIVE_END;
	}
	void ATankController::StaticRegisterNativesATankController()
	{
		UClass* Class = ATankController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AlterFire", &ATankController::execAlterFire },
			{ "AlterFireStop", &ATankController::execAlterFireStop },
			{ "ChangeInventoryVisibility", &ATankController::execChangeInventoryVisibility },
			{ "Fire", &ATankController::execFire },
			{ "isDead", &ATankController::execisDead },
			{ "MoveForward", &ATankController::execMoveForward },
			{ "SwitchCannon", &ATankController::execSwitchCannon },
			{ "TurnRight", &ATankController::execTurnRight },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATankController_AlterFire_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATankController_AlterFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TankController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATankController_AlterFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATankController, nullptr, "AlterFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATankController_AlterFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankController_AlterFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATankController_AlterFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATankController_AlterFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATankController_AlterFireStop_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATankController_AlterFireStop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TankController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATankController_AlterFireStop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATankController, nullptr, "AlterFireStop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATankController_AlterFireStop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankController_AlterFireStop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATankController_AlterFireStop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATankController_AlterFireStop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATankController_ChangeInventoryVisibility_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATankController_ChangeInventoryVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TankController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATankController_ChangeInventoryVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATankController, nullptr, "ChangeInventoryVisibility", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATankController_ChangeInventoryVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankController_ChangeInventoryVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATankController_ChangeInventoryVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATankController_ChangeInventoryVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATankController_Fire_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATankController_Fire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TankController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATankController_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATankController, nullptr, "Fire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATankController_Fire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankController_Fire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATankController_Fire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATankController_Fire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATankController_isDead_Statics
	{
		struct TankController_eventisDead_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATankController_isDead_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TankController_eventisDead_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATankController_isDead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TankController_eventisDead_Parms), &Z_Construct_UFunction_ATankController_isDead_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATankController_isDead_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATankController_isDead_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATankController_isDead_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TankController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATankController_isDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATankController, nullptr, "isDead", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATankController_isDead_Statics::TankController_eventisDead_Parms), Z_Construct_UFunction_ATankController_isDead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankController_isDead_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATankController_isDead_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankController_isDead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATankController_isDead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATankController_isDead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATankController_MoveForward_Statics
	{
		struct TankController_eventMoveForward_Parms
		{
			float Value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATankController_MoveForward_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TankController_eventMoveForward_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATankController_MoveForward_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATankController_MoveForward_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATankController_MoveForward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TankController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATankController_MoveForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATankController, nullptr, "MoveForward", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATankController_MoveForward_Statics::TankController_eventMoveForward_Parms), Z_Construct_UFunction_ATankController_MoveForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankController_MoveForward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATankController_MoveForward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankController_MoveForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATankController_MoveForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATankController_MoveForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATankController_SwitchCannon_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATankController_SwitchCannon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TankController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATankController_SwitchCannon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATankController, nullptr, "SwitchCannon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATankController_SwitchCannon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankController_SwitchCannon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATankController_SwitchCannon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATankController_SwitchCannon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATankController_TurnRight_Statics
	{
		struct TankController_eventTurnRight_Parms
		{
			float Value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATankController_TurnRight_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TankController_eventTurnRight_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATankController_TurnRight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATankController_TurnRight_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATankController_TurnRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TankController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATankController_TurnRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATankController, nullptr, "TurnRight", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATankController_TurnRight_Statics::TankController_eventTurnRight_Parms), Z_Construct_UFunction_ATankController_TurnRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankController_TurnRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATankController_TurnRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankController_TurnRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATankController_TurnRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATankController_TurnRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATankController);
	UClass* Z_Construct_UClass_ATankController_NoRegister()
	{
		return ATankController::StaticClass();
	}
	struct Z_Construct_UClass_ATankController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TankPawn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TankPawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MousePos_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MousePos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDead_MetaData[];
#endif
		static void NewProp_bDead_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDead;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATankController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Tankogeddon,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATankController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATankController_AlterFire, "AlterFire" }, // 167659275
		{ &Z_Construct_UFunction_ATankController_AlterFireStop, "AlterFireStop" }, // 4156065446
		{ &Z_Construct_UFunction_ATankController_ChangeInventoryVisibility, "ChangeInventoryVisibility" }, // 1681273526
		{ &Z_Construct_UFunction_ATankController_Fire, "Fire" }, // 609362364
		{ &Z_Construct_UFunction_ATankController_isDead, "isDead" }, // 2385499200
		{ &Z_Construct_UFunction_ATankController_MoveForward, "MoveForward" }, // 2787930026
		{ &Z_Construct_UFunction_ATankController_SwitchCannon, "SwitchCannon" }, // 1417098484
		{ &Z_Construct_UFunction_ATankController_TurnRight, "TurnRight" }, // 2209456245
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "TankController.h" },
		{ "ModuleRelativePath", "TankController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankController_Statics::NewProp_TankPawn_MetaData[] = {
		{ "ModuleRelativePath", "TankController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATankController_Statics::NewProp_TankPawn = { "TankPawn", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankController, TankPawn), Z_Construct_UClass_ATankPawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATankController_Statics::NewProp_TankPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankController_Statics::NewProp_TankPawn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankController_Statics::NewProp_MousePos_MetaData[] = {
		{ "ModuleRelativePath", "TankController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATankController_Statics::NewProp_MousePos = { "MousePos", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankController, MousePos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ATankController_Statics::NewProp_MousePos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankController_Statics::NewProp_MousePos_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankController_Statics::NewProp_bDead_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "TankController.h" },
	};
#endif
	void Z_Construct_UClass_ATankController_Statics::NewProp_bDead_SetBit(void* Obj)
	{
		((ATankController*)Obj)->bDead = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATankController_Statics::NewProp_bDead = { "bDead", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATankController), &Z_Construct_UClass_ATankController_Statics::NewProp_bDead_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATankController_Statics::NewProp_bDead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankController_Statics::NewProp_bDead_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATankController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankController_Statics::NewProp_TankPawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankController_Statics::NewProp_MousePos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankController_Statics::NewProp_bDead,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATankController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATankController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATankController_Statics::ClassParams = {
		&ATankController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATankController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATankController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATankController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATankController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATankController()
	{
		if (!Z_Registration_Info_UClass_ATankController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATankController.OuterSingleton, Z_Construct_UClass_ATankController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATankController.OuterSingleton;
	}
	template<> TANKOGEDDON_API UClass* StaticClass<ATankController>()
	{
		return ATankController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATankController);
	struct Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_TankController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_TankController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATankController, ATankController::StaticClass, TEXT("ATankController"), &Z_Registration_Info_UClass_ATankController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATankController), 871267643U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_TankController_h_1889244737(TEXT("/Script/Tankogeddon"),
		Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_TankController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_TankController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
