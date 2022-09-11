
#include "InventoryManagerComponent.h"

#include "InventoryComponent.h"
#include "InventoryWidget.h"



void UInventoryManagerComponent::Init(UInventoryComponent* InventoryComponent)
{
	//32:03
	LocalInventoryComponent = InventoryComponent;

	
	if(LocalInventoryComponent && ItemsData && InventoryWidgetClass)
	{
		InventoryWidget = CreateWidget<UInventoryWidget>(GetWorld(), InventoryWidgetClass);
		InventoryWidget->AddToViewport();

		InventoryWidget->SetVisibility(ESlateVisibility::Hidden);

		InventoryWidget->Init(FMath::Max(MinInventorySize, LocalInventoryComponent->GetItemsNum()));
		InventoryWidget->OnItemDrop.AddUObject(this, &UInventoryManagerComponent::OnItemDropFunc);

		for(const auto& [SlotIndex, SlotInfo] : LocalInventoryComponent->GetItems())
		{
			if(auto* Data = GetItemInfo(SlotInfo.Id))
			{
				InventoryWidget->AddItem(SlotInfo, *Data, SlotIndex);
			}
		}		
	}
}

const FInventoryItemInfo* UInventoryManagerComponent::GetItemInfo(const FName& InID) const
{
	return ItemsData ? ItemsData->FindRow<FInventoryItemInfo>(InID, "") : nullptr;
}

void UInventoryManagerComponent::OnItemDropFunc(UInventoryCellWidget* From, UInventoryCellWidget* To)
{
	FInventorySlotInfo FromItem = From->GetItem();
	FInventorySlotInfo ToItem = To->GetItem();

	From->Clear();
	To->Clear();

	To->AddItem(FromItem, *GetItemInfo(FromItem.Id));

	if(!ToItem.Id.IsNone())
	{
		From->AddItem(ToItem, *GetItemInfo(ToItem.Id));
	}
}
