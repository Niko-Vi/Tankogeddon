
#pragma once

#include "CoreMinimal.h"
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

	const FInventoryItemInfo* GetItemInfo(const FName& InID) const;

	UFUNCTION(BlueprintCallable)
	void ChangeInventoryVisibility();
	
protected:

	UPROPERTY()
	UInventoryComponent* LocalInventoryComponent;

	UPROPERTY(EditAnywhere)
	UDataTable* ItemsData;

	UPROPERTY(EditAnywhere)
	int32 MinInventorySize = 20;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UInventoryWidget> InventoryWidgetClass;
	
	UPROPERTY()
	UInventoryWidget* InventoryWidget;
	
	void OnItemDropFunc(UInventoryCellWidget* From, UInventoryCellWidget* To);


		
};

inline void UInventoryManagerComponent::ChangeInventoryVisibility()
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
