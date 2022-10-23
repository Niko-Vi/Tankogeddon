// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InventoryComponent.h"
#include "EquipInventoryComponent.generated.h"

/**
 * 
 */


UCLASS()
class TANKOGEDDON_API UEquipInventoryComponent : public UInventoryComponent
{
	GENERATED_BODY()

public:

	//lesson8 20:08

	UEquipInventoryComponent();

	UPROPERTY(EditAnywhere)
	TMap<int32, EEquipSLot> EquipSlots;
	
	virtual int32 GetMaxItemAmount(int32 SlotIndex, const FInventoryItemInfo& InItem) override;

	virtual void SetITem(int32 SlotIndex, const FInventorySlotInfo& Item) override;

	virtual void ClearItem(int32 SlotIndex) override;
};
