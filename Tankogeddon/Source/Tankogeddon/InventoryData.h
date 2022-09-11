#pragma once
#include "Engine/DataTable.h"
#include "Inve"

UENUM()
enum EItemType
{
	
};

UENUM()
enum EItemRarity
{
	
};

USTRUCT(BlueprintType)
struct FInventoryItemInfo : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, Category = "General")
	FName Id;
	
	UPROPERTY(EditDefaultsOnly, Category = "General")
	FText Name;

	UPROPERTY(EditDefaultsOnly, Category = "Type")
	EItemType Type;
	
	UPROPERTY(EditDefaultsOnly, Category = "Type")
	EItemRarity Rarity;
	
	UPROPERTY(EditDefaultsOnly, Category = "Visual")
	TSoftObjectPtr<UTexture2D> Icon;

	UPROPERTY(EditDefaultsOnly, Category = "Visual")
	TSoftObjectPtr<UStaticMesh> Mesh;

	UPROPERTY(EditDefaultsOnly, Category = "Stats")
	int32 Damage;
	
	UPROPERTY(EditDefaultsOnly, Category = "Stats")
	int32 Armor;
	
	UPROPERTY(EditDefaultsOnly, Category = "Stats")
	int32 MagicPower;
	
};


USTRUCT(BlueprintType)
struct FInventorySlotInfo : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FName Id = NAME_None;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	int32 Count;
	
};


