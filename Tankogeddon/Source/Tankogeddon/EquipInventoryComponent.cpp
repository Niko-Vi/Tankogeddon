// Fill out your copyright notice in the Description page of Project Settings.


#include "EquipInventoryComponent.h"

UEquipInventoryComponent::UEquipInventoryComponent()
{
	EquipSlots.Add(0, EEquipSLot::ES_Cannon);
	EquipSlots.Add(1, EEquipSLot::ES_BackShield);
	EquipSlots.Add(2, EEquipSLot::ES_FunnyHat);
}

int32 UEquipInventoryComponent::GetMaxItemAmount(int32 SlotIndex, const FInventoryItemInfo& InItem)
{
	EEquipSLot* EquipSLotPtr = EquipSlots.Find(SlotIndex);

	if(InItem.Type == EItemType::IT_Equip && EquipSLotPtr && *EquipSLotPtr == InItem.EquipSLot)
	{
		return 1;
	}

	return 0;
}

void UEquipInventoryComponent::SetITem(int32 SlotIndex, const FInventorySlotInfo& Item)
{
	Super::SetITem(SlotIndex, Item);
}

void UEquipInventoryComponent::ClearItem(int32 SlotIndex)
{
	Super::ClearItem(SlotIndex);
}
