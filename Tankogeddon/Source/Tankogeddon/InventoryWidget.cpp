// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryWidget.h"
#include "InventoryCellWidget.h"
#include "Components/UniformGridPanel.h"


void UInventoryWidget::Init(int32 ItemsCount)
{
	if(CellsPanel)
	{
		CellsPanel->ClearChildren();
		for(int32 i = 0; i < ItemsCount; ++i)
		{
			if(auto* Cell = CreateCell())
			{
				Cell->IndexInInventory = i;
				CellsPanel->AddChildToUniformGrid(Cell, i / ItemsInRow, i % ItemsInRow);
			}
		}
	}
}

bool UInventoryWidget::AddItem(const FInventorySlotInfo& InSlot, const FInventoryItemInfo& Info, int32 SlotIndex)
{
	//1:13:25

	if(Info.Type == EItemType::IT_Gold)
	{
		if(GoldCell)
		{
			return  GoldCell->AddItem(InSlot, Info);
		}
	}

	if(CellsPanel)
	{
		UInventoryCellWidget* Found = nullptr;

		UInventoryCellWidget** FoundPtr = Cells.FindByPredicate([&SlotIndex](UInventoryCellWidget* Cell)
		{
			return Cell && Cell->IndexInInventory == SlotIndex;
		});

		if(FoundPtr)
		{
			Found = *FoundPtr;
		}
		else
		{
			for(const auto& Cell : Cells)
			{
				if (!Cell->HasItem())
				{
					Found = Cell;
					break;
				}
			}
		}

		if(Found)
		{
			return  Found->AddItem(InSlot, Info);
		}
	}

	return false;
}

void UInventoryWidget::NativeConstruct()
{
	Super::NativeConstruct();

	for(auto* Cell : Cells)
	{
		InitCell(Cell);
	}
}

UInventoryCellWidget* UInventoryWidget::CreateCell()
{
	if(CellClass)
	{
		if(auto* Cell = CreateWidget<UInventoryCellWidget>(this, CellClass))
		{
			Cell->SetPadding(2);
			Cells.Add(Cell);

			InitCell(Cell);
			
			return Cell;
		}
	}
	return nullptr;
}

void UInventoryWidget::OnItemDropFunc(UInventoryCellWidget* From, UInventoryCellWidget* To)
{
	if(OnItemDrop.IsBound())
	{
		OnItemDrop.Broadcast(From, To);
	}
}

void UInventoryWidget::InitCell(UInventoryCellWidget* NewCell)
{
	if(NewCell)
	{
		NewCell->OnItemDrop.AddUObject(this, &ThisClass::OnItemDropFunc);
		NewCell->ParentInventoryWidget = this;
	}
}
