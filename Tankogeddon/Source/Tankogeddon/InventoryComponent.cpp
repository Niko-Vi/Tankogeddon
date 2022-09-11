
#include "InventoryComponent.h"


void UInventoryComponent::SetITem(int32 SlotIndex, const FInventorySlotInfo& Item)
{
	ClearItem(SlotIndex);
	Items.Add(SlotIndex, Item);
}

void UInventoryComponent::ClearItem(int32 SlotIndex)
{
	Items.Remove(SlotIndex);
}

void UInventoryComponent::SetInventory(TMap<int32, FInventorySlotInfo>& NewInventory)
{
	Items = NewInventory;
}
