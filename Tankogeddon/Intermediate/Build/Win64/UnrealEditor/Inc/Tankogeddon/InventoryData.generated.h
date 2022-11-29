// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TANKOGEDDON_InventoryData_generated_h
#error "InventoryData.generated.h already included, missing '#pragma once' in InventoryData.h"
#endif
#define TANKOGEDDON_InventoryData_generated_h

#define FID_Tankogeddon_Source_Tankogeddon_InventoryData_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInventoryItemInfo_Statics; \
	TANKOGEDDON_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> TANKOGEDDON_API UScriptStruct* StaticStruct<struct FInventoryItemInfo>();

#define FID_Tankogeddon_Source_Tankogeddon_InventoryData_h_74_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInventorySlotInfo_Statics; \
	TANKOGEDDON_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> TANKOGEDDON_API UScriptStruct* StaticStruct<struct FInventorySlotInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Tankogeddon_Source_Tankogeddon_InventoryData_h


#define FOREACH_ENUM_EITEMTYPE(op) \
	op(EItemType::IT_Equip) \
	op(EItemType::IT_Gold) \
	op(EItemType::IT_Consumable) 

enum class EItemType;
template<> TANKOGEDDON_API UEnum* StaticEnum<EItemType>();

#define FOREACH_ENUM_EITEMRARITY(op) \
	op(EItemRarity::IR_Common) \
	op(EItemRarity::IR_Rare) \
	op(EItemRarity::IR_Epic) 

enum class EItemRarity;
template<> TANKOGEDDON_API UEnum* StaticEnum<EItemRarity>();

#define FOREACH_ENUM_EEQUIPSLOT(op) \
	op(EEquipSLot::ES_BackShield) \
	op(EEquipSLot::ES_Cannon) \
	op(EEquipSLot::ES_FunnyHat) 

enum class EEquipSLot;
template<> TANKOGEDDON_API UEnum* StaticEnum<EEquipSLot>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
