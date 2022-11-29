// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tankogeddon/InventoryData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryData() {}
// Cross Module References
	TANKOGEDDON_API UEnum* Z_Construct_UEnum_Tankogeddon_EItemType();
	UPackage* Z_Construct_UPackage__Script_Tankogeddon();
	TANKOGEDDON_API UEnum* Z_Construct_UEnum_Tankogeddon_EItemRarity();
	TANKOGEDDON_API UEnum* Z_Construct_UEnum_Tankogeddon_EEquipSLot();
	TANKOGEDDON_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItemInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	TANKOGEDDON_API UScriptStruct* Z_Construct_UScriptStruct_FInventorySlotInfo();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EItemType;
	static UEnum* EItemType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EItemType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EItemType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Tankogeddon_EItemType, Z_Construct_UPackage__Script_Tankogeddon(), TEXT("EItemType"));
		}
		return Z_Registration_Info_UEnum_EItemType.OuterSingleton;
	}
	template<> TANKOGEDDON_API UEnum* StaticEnum<EItemType>()
	{
		return EItemType_StaticEnum();
	}
	struct Z_Construct_UEnum_Tankogeddon_EItemType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Tankogeddon_EItemType_Statics::Enumerators[] = {
		{ "EItemType::IT_Equip", (int64)EItemType::IT_Equip },
		{ "EItemType::IT_Gold", (int64)EItemType::IT_Gold },
		{ "EItemType::IT_Consumable", (int64)EItemType::IT_Consumable },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Tankogeddon_EItemType_Statics::Enum_MetaDataParams[] = {
		{ "IT_Consumable.Name", "EItemType::IT_Consumable" },
		{ "IT_Equip.Name", "EItemType::IT_Equip" },
		{ "IT_Gold.Name", "EItemType::IT_Gold" },
		{ "ModuleRelativePath", "InventoryData.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Tankogeddon_EItemType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Tankogeddon,
		nullptr,
		"EItemType",
		"EItemType",
		Z_Construct_UEnum_Tankogeddon_EItemType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Tankogeddon_EItemType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Tankogeddon_EItemType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Tankogeddon_EItemType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Tankogeddon_EItemType()
	{
		if (!Z_Registration_Info_UEnum_EItemType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EItemType.InnerSingleton, Z_Construct_UEnum_Tankogeddon_EItemType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EItemType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EItemRarity;
	static UEnum* EItemRarity_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EItemRarity.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EItemRarity.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Tankogeddon_EItemRarity, Z_Construct_UPackage__Script_Tankogeddon(), TEXT("EItemRarity"));
		}
		return Z_Registration_Info_UEnum_EItemRarity.OuterSingleton;
	}
	template<> TANKOGEDDON_API UEnum* StaticEnum<EItemRarity>()
	{
		return EItemRarity_StaticEnum();
	}
	struct Z_Construct_UEnum_Tankogeddon_EItemRarity_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Tankogeddon_EItemRarity_Statics::Enumerators[] = {
		{ "EItemRarity::IR_Common", (int64)EItemRarity::IR_Common },
		{ "EItemRarity::IR_Rare", (int64)EItemRarity::IR_Rare },
		{ "EItemRarity::IR_Epic", (int64)EItemRarity::IR_Epic },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Tankogeddon_EItemRarity_Statics::Enum_MetaDataParams[] = {
		{ "IR_Common.Name", "EItemRarity::IR_Common" },
		{ "IR_Epic.Name", "EItemRarity::IR_Epic" },
		{ "IR_Rare.Name", "EItemRarity::IR_Rare" },
		{ "ModuleRelativePath", "InventoryData.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Tankogeddon_EItemRarity_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Tankogeddon,
		nullptr,
		"EItemRarity",
		"EItemRarity",
		Z_Construct_UEnum_Tankogeddon_EItemRarity_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Tankogeddon_EItemRarity_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Tankogeddon_EItemRarity_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Tankogeddon_EItemRarity_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Tankogeddon_EItemRarity()
	{
		if (!Z_Registration_Info_UEnum_EItemRarity.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EItemRarity.InnerSingleton, Z_Construct_UEnum_Tankogeddon_EItemRarity_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EItemRarity.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEquipSLot;
	static UEnum* EEquipSLot_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEquipSLot.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEquipSLot.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Tankogeddon_EEquipSLot, Z_Construct_UPackage__Script_Tankogeddon(), TEXT("EEquipSLot"));
		}
		return Z_Registration_Info_UEnum_EEquipSLot.OuterSingleton;
	}
	template<> TANKOGEDDON_API UEnum* StaticEnum<EEquipSLot>()
	{
		return EEquipSLot_StaticEnum();
	}
	struct Z_Construct_UEnum_Tankogeddon_EEquipSLot_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Tankogeddon_EEquipSLot_Statics::Enumerators[] = {
		{ "EEquipSLot::ES_BackShield", (int64)EEquipSLot::ES_BackShield },
		{ "EEquipSLot::ES_Cannon", (int64)EEquipSLot::ES_Cannon },
		{ "EEquipSLot::ES_FunnyHat", (int64)EEquipSLot::ES_FunnyHat },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Tankogeddon_EEquipSLot_Statics::Enum_MetaDataParams[] = {
		{ "ES_BackShield.Name", "EEquipSLot::ES_BackShield" },
		{ "ES_Cannon.Name", "EEquipSLot::ES_Cannon" },
		{ "ES_FunnyHat.Name", "EEquipSLot::ES_FunnyHat" },
		{ "ModuleRelativePath", "InventoryData.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Tankogeddon_EEquipSLot_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Tankogeddon,
		nullptr,
		"EEquipSLot",
		"EEquipSLot",
		Z_Construct_UEnum_Tankogeddon_EEquipSLot_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Tankogeddon_EEquipSLot_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Tankogeddon_EEquipSLot_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Tankogeddon_EEquipSLot_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Tankogeddon_EEquipSLot()
	{
		if (!Z_Registration_Info_UEnum_EEquipSLot.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEquipSLot.InnerSingleton, Z_Construct_UEnum_Tankogeddon_EEquipSLot_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEquipSLot.InnerSingleton;
	}

static_assert(std::is_polymorphic<FInventoryItemInfo>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FInventoryItemInfo cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventoryItemInfo;
class UScriptStruct* FInventoryItemInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryItemInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventoryItemInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryItemInfo, Z_Construct_UPackage__Script_Tankogeddon(), TEXT("InventoryItemInfo"));
	}
	return Z_Registration_Info_UScriptStruct_InventoryItemInfo.OuterSingleton;
}
template<> TANKOGEDDON_API UScriptStruct* StaticStruct<FInventoryItemInfo>()
{
	return FInventoryItemInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInventoryItemInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Name;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_EquipSLot_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquipSLot_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EquipSLot;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Rarity_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rarity_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Rarity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Icon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Armor_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Armor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MagicPower_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MagicPower;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "InventoryData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryItemInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "InventoryData.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItemInfo, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "InventoryData.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItemInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_EquipSLot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_EquipSLot_MetaData[] = {
		{ "Category", "Type" },
		{ "ModuleRelativePath", "InventoryData.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_EquipSLot = { "EquipSLot", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItemInfo, EquipSLot), Z_Construct_UEnum_Tankogeddon_EEquipSLot, METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_EquipSLot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_EquipSLot_MetaData)) }; // 1808366789
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Type" },
		{ "ModuleRelativePath", "InventoryData.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItemInfo, Type), Z_Construct_UEnum_Tankogeddon_EItemType, METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Type_MetaData)) }; // 2181573330
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Rarity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Rarity_MetaData[] = {
		{ "Category", "Type" },
		{ "ModuleRelativePath", "InventoryData.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Rarity = { "Rarity", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItemInfo, Rarity), Z_Construct_UEnum_Tankogeddon_EItemRarity, METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Rarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Rarity_MetaData)) }; // 2343717092
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Icon_MetaData[] = {
		{ "Category", "Visual" },
		{ "ModuleRelativePath", "InventoryData.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItemInfo, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Icon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Visual" },
		{ "ModuleRelativePath", "InventoryData.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItemInfo, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "InventoryData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItemInfo, Damage), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Armor_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "InventoryData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Armor = { "Armor", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItemInfo, Armor), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Armor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Armor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_MagicPower_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "InventoryData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_MagicPower = { "MagicPower", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItemInfo, MagicPower), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_MagicPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_MagicPower_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_EquipSLot_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_EquipSLot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Rarity_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Rarity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Icon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Armor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_MagicPower,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Tankogeddon,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"InventoryItemInfo",
		sizeof(FInventoryItemInfo),
		alignof(FInventoryItemInfo),
		Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInventoryItemInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_InventoryItemInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventoryItemInfo.InnerSingleton, Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InventoryItemInfo.InnerSingleton;
	}

static_assert(std::is_polymorphic<FInventorySlotInfo>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FInventorySlotInfo cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventorySlotInfo;
class UScriptStruct* FInventorySlotInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventorySlotInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventorySlotInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventorySlotInfo, Z_Construct_UPackage__Script_Tankogeddon(), TEXT("InventorySlotInfo"));
	}
	return Z_Registration_Info_UScriptStruct_InventorySlotInfo.OuterSingleton;
}
template<> TANKOGEDDON_API UScriptStruct* StaticStruct<FInventorySlotInfo>()
{
	return FInventorySlotInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInventorySlotInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventorySlotInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "InventoryData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInventorySlotInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventorySlotInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventorySlotInfo_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "InventorySlotInfo" },
		{ "Comment", "//UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)\n//int32 InventorySlotIndex;\n" },
		{ "ModuleRelativePath", "InventoryData.h" },
		{ "ToolTip", "UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)\nint32 InventorySlotIndex;" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInventorySlotInfo_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventorySlotInfo, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventorySlotInfo_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventorySlotInfo_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventorySlotInfo_Statics::NewProp_Count_MetaData[] = {
		{ "Category", "InventorySlotInfo" },
		{ "ModuleRelativePath", "InventoryData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventorySlotInfo_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventorySlotInfo, Count), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventorySlotInfo_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventorySlotInfo_Statics::NewProp_Count_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventorySlotInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventorySlotInfo_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventorySlotInfo_Statics::NewProp_Count,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventorySlotInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Tankogeddon,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"InventorySlotInfo",
		sizeof(FInventorySlotInfo),
		alignof(FInventorySlotInfo),
		Z_Construct_UScriptStruct_FInventorySlotInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventorySlotInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInventorySlotInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventorySlotInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInventorySlotInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_InventorySlotInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventorySlotInfo.InnerSingleton, Z_Construct_UScriptStruct_FInventorySlotInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InventorySlotInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_InventoryData_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_InventoryData_h_Statics::EnumInfo[] = {
		{ EItemType_StaticEnum, TEXT("EItemType"), &Z_Registration_Info_UEnum_EItemType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2181573330U) },
		{ EItemRarity_StaticEnum, TEXT("EItemRarity"), &Z_Registration_Info_UEnum_EItemRarity, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2343717092U) },
		{ EEquipSLot_StaticEnum, TEXT("EEquipSLot"), &Z_Registration_Info_UEnum_EEquipSLot, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1808366789U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_InventoryData_h_Statics::ScriptStructInfo[] = {
		{ FInventoryItemInfo::StaticStruct, Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewStructOps, TEXT("InventoryItemInfo"), &Z_Registration_Info_UScriptStruct_InventoryItemInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryItemInfo), 1432530979U) },
		{ FInventorySlotInfo::StaticStruct, Z_Construct_UScriptStruct_FInventorySlotInfo_Statics::NewStructOps, TEXT("InventorySlotInfo"), &Z_Registration_Info_UScriptStruct_InventorySlotInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventorySlotInfo), 1096428908U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_InventoryData_h_1045947491(TEXT("/Script/Tankogeddon"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_InventoryData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_InventoryData_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_InventoryData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Tankogeddon_Source_Tankogeddon_InventoryData_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
