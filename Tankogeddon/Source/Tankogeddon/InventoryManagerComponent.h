
#pragma once

#include "CoreMinimal.h"
#include "EquipInventoryComponent.h"
#include "InventoryData.h"
#include "InventoryWidget.h"
#include "Components/ActorComponent.h"
#include "InventoryManagerComponent.generated.h"


class UInventoryComponent;
class UInventoryWidget;
class UInventoryCellWidget;

UCLASS( ClassGroup=(Inventory), meta=(BlueprintSpawnableComponent) )
class TANKOGEDDON_API UInventoryManagerComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	
	void Init(UInventoryComponent* InventoryComponent);

	void InitEquip(UEquipInventoryComponent* EquipInventoryComponent);

	void InitEquip(UInventoryComponent* InventoryComponent);
	
	const FInventoryItemInfo* GetItemInfo(const FName& InID) const;

	UFUNCTION(BlueprintCallable)
	void ChangeInventoryVisibility();
	
protected:

	UPROPERTY()
	UInventoryComponent* LocalInventoryComponent;

	UPROPERTY()
	UEquipInventoryComponent* EquipInventory;

	UPROPERTY(EditAnywhere)
	UDataTable* ItemsData;

	UPROPERTY(EditAnywhere)
	int32 MinInventorySize = 20;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UInventoryWidget> InventoryWidgetClass;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UInventoryWidget> EquipInventoryWidgetClass;
	
	UPROPERTY()
	UInventoryWidget* InventoryWidget;

	UPROPERTY()
	UInventoryWidget* EquipInventoryWidget;
	
	void OnItemDropFunc(UInventoryCellWidget* From, UInventoryCellWidget* To);


		
};


