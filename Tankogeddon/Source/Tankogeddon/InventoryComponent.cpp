
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

int32 UInventoryComponent::GetMaxItemAmount(int32 SlotIndex, const FInventoryItemInfo& InItem) //returns:  0 - cant put more, -1 - can put any amount 
{
	//FInventorySlotInfo* SlotPtr = Items.Find(SlotIndex);
	//if(SlotPtr == nullptr)
	//{
	//	UE_LOG(LogTemp, Warning, TEXT("InventoryComponent.cpp : 27 - SlotPtr == nullptr, slot index %d"), SlotIndex);
	//	return 0; 
	//}
	//if(SlotPtr->Id == InItem.Id)
	//{
	//	UE_LOG(LogTemp, Warning, TEXT("InventoryComponent.cpp : 32 - SlotPtr->Id == InItem.Id"));
	//	return 0;
	//}

	return  -1;
}
