// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InventoryComponent.h"
#include "InventoryData.h"
#include "Blueprint/UserWidget.h"
#include "InventoryWidget.generated.h"

/**
 * 
 */

class UUniformGridPanel;
class UInventoryCellWidget;

UCLASS(Abstract)
class TANKOGEDDON_API UInventoryWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	
	void Init(int32 ItemsCount);

	bool AddItem(const FInventorySlotInfo& InSlot, const FInventoryItemInfo& Info, int32 SlotIndex);

	FOnItemDrop OnItemDrop;

	UPROPERTY()
	UInventoryComponent* ParentInventory;

	virtual void NativeConstruct() override;

protected:

	UPROPERTY(EditDefaultsOnly)
	int32 ItemsInRow = 5;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UInventoryCellWidget> CellClass;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUniformGridPanel* CellsPanel;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UInventoryCellWidget* GoldCell;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UInventoryCellWidget*> Cells;

	UInventoryCellWidget* CreateCell();

	void OnItemDropFunc(UInventoryCellWidget* From, UInventoryCellWidget* To);

	void InitCell(UInventoryCellWidget* NewCell);
};