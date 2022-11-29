// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tankogeddon/AITankPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAITankPawn() {}
// Cross Module References
	TANKOGEDDON_API UClass* Z_Construct_UClass_AAITankPawn_NoRegister();
	TANKOGEDDON_API UClass* Z_Construct_UClass_AAITankPawn();
	TANKOGEDDON_API UClass* Z_Construct_UClass_ATankPawn();
	UPackage* Z_Construct_UPackage__Script_Tankogeddon();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_ATargetPoint_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AAITankPawn::execSetPatrolCheckPoints)
	{
		P_GET_TARRAY(ATargetPoint*,Z_Param_NewPatrolPoints);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPatrolCheckPoints(Z_Param_NewPatrolPoints);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAITankPawn::execGetEyesPosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetEyesPosition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAITankPawn::execGetTurretForwardVector)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetTurretForwardVector();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAITankPawn::execGetAccurency)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAccurency();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAITankPawn::execGetPatrolCheckpoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=P_THIS->GetPatrolCheckpoints();
		P_NATIVE_END;
	}
	void AAITankPawn::StaticRegisterNativesAAITankPawn()
	{
		UClass* Class = AAITankPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAccurency", &AAITankPawn::execGetAccurency },
			{ "GetEyesPosition", &AAITankPawn::execGetEyesPosition },
			{ "GetPatrolCheckpoints", &AAITankPawn::execGetPatrolCheckpoints },
			{ "GetTurretForwardVector", &AAITankPawn::execGetTurretForwardVector },
			{ "SetPatrolCheckPoints", &AAITankPawn::execSetPatrolCheckPoints },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAITankPawn_GetAccurency_Statics
	{
		struct AITankPawn_eventGetAccurency_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAITankPawn_GetAccurency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AITankPawn_eventGetAccurency_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAITankPawn_GetAccurency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAITankPawn_GetAccurency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAITankPawn_GetAccurency_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AITankPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAITankPawn_GetAccurency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAITankPawn, nullptr, "GetAccurency", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAITankPawn_GetAccurency_Statics::AITankPawn_eventGetAccurency_Parms), Z_Construct_UFunction_AAITankPawn_GetAccurency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAITankPawn_GetAccurency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAITankPawn_GetAccurency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAITankPawn_GetAccurency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAITankPawn_GetAccurency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAITankPawn_GetAccurency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAITankPawn_GetEyesPosition_Statics
	{
		struct AITankPawn_eventGetEyesPosition_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAITankPawn_GetEyesPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AITankPawn_eventGetEyesPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAITankPawn_GetEyesPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAITankPawn_GetEyesPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAITankPawn_GetEyesPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AITankPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAITankPawn_GetEyesPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAITankPawn, nullptr, "GetEyesPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAITankPawn_GetEyesPosition_Statics::AITankPawn_eventGetEyesPosition_Parms), Z_Construct_UFunction_AAITankPawn_GetEyesPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAITankPawn_GetEyesPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAITankPawn_GetEyesPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAITankPawn_GetEyesPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAITankPawn_GetEyesPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAITankPawn_GetEyesPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAITankPawn_GetPatrolCheckpoints_Statics
	{
		struct AITankPawn_eventGetPatrolCheckpoints_Parms
		{
			TArray<FVector> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAITankPawn_GetPatrolCheckpoints_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AAITankPawn_GetPatrolCheckpoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AITankPawn_eventGetPatrolCheckpoints_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAITankPawn_GetPatrolCheckpoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAITankPawn_GetPatrolCheckpoints_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAITankPawn_GetPatrolCheckpoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAITankPawn_GetPatrolCheckpoints_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AITankPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAITankPawn_GetPatrolCheckpoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAITankPawn, nullptr, "GetPatrolCheckpoints", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAITankPawn_GetPatrolCheckpoints_Statics::AITankPawn_eventGetPatrolCheckpoints_Parms), Z_Construct_UFunction_AAITankPawn_GetPatrolCheckpoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAITankPawn_GetPatrolCheckpoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAITankPawn_GetPatrolCheckpoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAITankPawn_GetPatrolCheckpoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAITankPawn_GetPatrolCheckpoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAITankPawn_GetPatrolCheckpoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAITankPawn_GetTurretForwardVector_Statics
	{
		struct AITankPawn_eventGetTurretForwardVector_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAITankPawn_GetTurretForwardVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AITankPawn_eventGetTurretForwardVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAITankPawn_GetTurretForwardVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAITankPawn_GetTurretForwardVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAITankPawn_GetTurretForwardVector_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AITankPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAITankPawn_GetTurretForwardVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAITankPawn, nullptr, "GetTurretForwardVector", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAITankPawn_GetTurretForwardVector_Statics::AITankPawn_eventGetTurretForwardVector_Parms), Z_Construct_UFunction_AAITankPawn_GetTurretForwardVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAITankPawn_GetTurretForwardVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAITankPawn_GetTurretForwardVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAITankPawn_GetTurretForwardVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAITankPawn_GetTurretForwardVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAITankPawn_GetTurretForwardVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAITankPawn_SetPatrolCheckPoints_Statics
	{
		struct AITankPawn_eventSetPatrolCheckPoints_Parms
		{
			TArray<ATargetPoint*> NewPatrolPoints;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewPatrolPoints_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NewPatrolPoints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAITankPawn_SetPatrolCheckPoints_Statics::NewProp_NewPatrolPoints_Inner = { "NewPatrolPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ATargetPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AAITankPawn_SetPatrolCheckPoints_Statics::NewProp_NewPatrolPoints = { "NewPatrolPoints", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AITankPawn_eventSetPatrolCheckPoints_Parms, NewPatrolPoints), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAITankPawn_SetPatrolCheckPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAITankPawn_SetPatrolCheckPoints_Statics::NewProp_NewPatrolPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAITankPawn_SetPatrolCheckPoints_Statics::NewProp_NewPatrolPoints,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAITankPawn_SetPatrolCheckPoints_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AITankPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAITankPawn_SetPatrolCheckPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAITankPawn, nullptr, "SetPatrolCheckPoints", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAITankPawn_SetPatrolCheckPoints_Statics::AITankPawn_eventSetPatrolCheckPoints_Parms), Z_Construct_UFunction_AAITankPawn_SetPatrolCheckPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAITankPawn_SetPatrolCheckPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAITankPawn_SetPatrolCheckPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAITankPawn_SetPatrolCheckPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAITankPawn_SetPatrolCheckPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAITankPawn_SetPatrolCheckPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAITankPawn);
	UClass* Z_Construct_UClass_AAITankPawn_NoRegister()
	{
		return AAITankPawn::StaticClass();
	}
	struct Z_Construct_UClass_AAITankPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PatrolCheckpoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PatrolCheckpoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PatrolCheckpoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementAccurency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementAccurency;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAITankPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATankPawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Tankogeddon,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAITankPawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAITankPawn_GetAccurency, "GetAccurency" }, // 3606219813
		{ &Z_Construct_UFunction_AAITankPawn_GetEyesPosition, "GetEyesPosition" }, // 442490484
		{ &Z_Construct_UFunction_AAITankPawn_GetPatrolCheckpoints, "GetPatrolCheckpoints" }, // 2217614357
		{ &Z_Construct_UFunction_AAITankPawn_GetTurretForwardVector, "GetTurretForwardVector" }, // 1504315682
		{ &Z_Construct_UFunction_AAITankPawn_SetPatrolCheckPoints, "SetPatrolCheckPoints" }, // 2324022027
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAITankPawn_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AITankPawn.h" },
		{ "ModuleRelativePath", "AITankPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAITankPawn_Statics::NewProp_PatrolCheckpoints_Inner = { "PatrolCheckpoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ATargetPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAITankPawn_Statics::NewProp_PatrolCheckpoints_MetaData[] = {
		{ "Category", "AI | Components" },
		{ "MakeEditWidget", "TRUE" },
		{ "ModuleRelativePath", "AITankPawn.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAITankPawn_Statics::NewProp_PatrolCheckpoints = { "PatrolCheckpoints", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAITankPawn, PatrolCheckpoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AAITankPawn_Statics::NewProp_PatrolCheckpoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAITankPawn_Statics::NewProp_PatrolCheckpoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAITankPawn_Statics::NewProp_MovementAccurency_MetaData[] = {
		{ "Category", "AI | Components" },
		{ "ModuleRelativePath", "AITankPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAITankPawn_Statics::NewProp_MovementAccurency = { "MovementAccurency", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAITankPawn, MovementAccurency), METADATA_PARAMS(Z_Construct_UClass_AAITankPawn_Statics::NewProp_MovementAccurency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAITankPawn_Statics::NewProp_MovementAccurency_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAITankPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAITankPawn_Statics::NewProp_PatrolCheckpoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAITankPawn_Statics::NewProp_PatrolCheckpoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAITankPawn_Statics::NewProp_MovementAccurency,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAITankPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAITankPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAITankPawn_Statics::ClassParams = {
		&AAITankPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAITankPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAITankPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAITankPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAITankPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAITankPawn()
	{
		if (!Z_Registration_Info_UClass_AAITankPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAITankPawn.OuterSingleton, Z_Construct_UClass_AAITankPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAITankPawn.OuterSingleton;
	}
	template<> TANKOGEDDON_API UClass* StaticClass<AAITankPawn>()
	{
		return AAITankPawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAITankPawn);
	struct Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_AITankPawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_AITankPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAITankPawn, AAITankPawn::StaticClass, TEXT("AAITankPawn"), &Z_Registration_Info_UClass_AAITankPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAITankPawn), 2276362315U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_AITankPawn_h_3749626073(TEXT("/Script/Tankogeddon"),
		Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_AITankPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_AITankPawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
