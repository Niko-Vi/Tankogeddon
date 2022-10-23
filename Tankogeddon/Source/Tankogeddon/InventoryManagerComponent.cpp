
#include "InventoryManagerComponent.h"

#include "InterchangeResult.h"
#include "InventoryComponent.h"
#include "InventoryWidget.h"
#include "InventoryCellWidget.h"



void UInventoryManagerComponent::Init(UInventoryComponent* InventoryComponent)
{
	//32:03
	LocalInventoryComponent = InventoryComponent;

	
	if(LocalInventoryComponent && ItemsData && InventoryWidgetClass)
	{
		InventoryWidget = CreateWidget<UInventoryWidget>(GetWorld(), InventoryWidgetClass);
		InventoryWidget->AddToViewport();

		InventoryWidget->SetVisibility(ESlateVisibility::Hidden);

		InventoryWidget->Init(FMath::Max(MinInventorySize, (LocalInventoryComponent->GetItemsNum()-1))); // -1 because gold cell creates anyway
		InventoryWidget->OnItemDrop.AddUObject(this, &UInventoryManagerComponent::OnItemDropFunc);

		InventoryWidget->ParentInventory = InventoryComponent;

		for(const auto& [SlotIndex, SlotInfo] : LocalInventoryComponent->GetItems())
		{
			if(auto* Data = GetItemInfo(SlotInfo.Id))
			{
				InventoryWidget->AddItem(SlotInfo, *Data, SlotIndex);
			}
			
		}		
	}
	
}

void UInventoryManagerComponent::InitEquip(UEquipInventoryComponent* EquipInventoryComponent)
{
	EquipInventory = EquipInventoryComponent;

	if(EquipInventory && ItemsData && EquipInventoryWidgetClass)
	{
		EquipInventoryWidget = CreateWidget<UInventoryWidget>(GetWorld(), EquipInventoryWidgetClass);
		EquipInventoryWidget->AddToViewport();

		EquipInventoryWidget->SetVisibility(ESlateVisibility::Hidden);

		
	}
	
}

void UInventoryManagerComponent::InitEquip(UInventoryComponent* InventoryComponent)
{
	//lesson8 25:30
	if(InventoryComponent && EquipInventoryWidgetClass)
	{
		EquipInventoryWidget = CreateWidget<UInventoryWidget>(GetWorld(), EquipInventoryWidgetClass);
		EquipInventoryWidget->ParentInventory = InventoryComponent;
		EquipInventoryWidget->OnItemDrop.AddUObject(this, &ThisClass::OnItemDropFunc);
		EquipInventoryWidget->AddToViewport();
	}
}

const FInventoryItemInfo* UInventoryManagerComponent::GetItemInfo(const FName& InID) const
{
	return ItemsData ? ItemsData->FindRow<FInventoryItemInfo>(InID, "") : nullptr;
}

void UInventoryManagerComponent::OnItemDropFunc(UInventoryCellWidget* From, UInventoryCellWidget* To)
{

	//lesson 8 36:00
	
	if(From == nullptr || To == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("first check failed From == nullptr || To == nullptr"));
		return;
	}

	auto* FromInventory = From->GetParentInventory();
	auto* ToInventory = From->GetParentInventory();

	if(FromInventory == nullptr || ToInventory == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("second check failed FromInventory == nullptr || ToInventory == nullptr"));

		return;
	}

	const FInventorySlotInfo FromItem = From->GetItem();
	if(FromItem.Count == 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("third check failed FromItem.Count == 0"));
		return;
	}

	const FInventorySlotInfo ToItem = To->GetItem();
	const FInventoryItemInfo* FromInfo = GetItemInfo(FromItem.Id);

	const int32 ToItemAmount = ToInventory->GetMaxItemAmount(To->IndexInInventory, *FromInfo);
	if(ToItemAmount == 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("fourth check failed ToItemAmount == 0"));
		return;
	}

	FInventorySlotInfo NewFromItem = ToItem;
	FInventorySlotInfo NewToItem = FromItem;
	
	if(ToItemAmount > 0)
	{
		NewToItem.Count = FMath::Min(ToItemAmount, FromItem.Count);
		if(FromItem.Count <= NewToItem.Count)
		{
			NewFromItem.Id = NewToItem.Id;
			NewFromItem.Count = FromItem.Count - NewToItem.Count;
		}
	}

	//lesson 8 39:40
	const FInventoryItemInfo* NewFromInfo = NewFromItem.Count >= 0 ? GetItemInfo(NewFromItem.Id) : nullptr;
	const FInventoryItemInfo* NewToInfo = GetItemInfo(NewToItem.Id);

	From->Clear();
	if(NewFromInfo)
	{
		UE_LOG(LogTemp, Warning, TEXT("From->AddItem(NewFromItem, *NewFromInfo)"));
		From->AddItem(NewFromItem, *NewFromInfo);
	}

	To->Clear();
	if(NewToInfo)
	{
		UE_LOG(LogTemp, Warning, TEXT("To->AddItem(NewToItem, *NewToInfo);"));
		To->AddItem(NewToItem, *NewToInfo);
	}
	
	FromInventory->SetITem(From->IndexInInventory, NewFromItem);
	ToInventory->SetITem(To->IndexInInventory, NewToItem);
}

void UInventoryManagerComponent::ChangeInventoryVisibility()
{
	if(InventoryWidget)
	{
		if(InventoryWidget->IsVisible())
		{
			InventoryWidget->SetVisibility(ESlateVisibility::Hidden);
		}
		else
		{
			InventoryWidget->SetVisibility(ESlateVisibility::Visible);
		}
	}
}