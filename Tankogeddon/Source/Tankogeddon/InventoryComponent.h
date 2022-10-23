
#pragma once

#include "CoreMinimal.h"
#include "InventoryData.h"
#include "Components/ActorComponent.h"
#include "InventoryComponent.generated.h"


UCLASS( ClassGroup=(Inventory), meta=(BlueprintSpawnableComponent) )
class TANKOGEDDON_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:	

	FORCEINLINE const FInventorySlotInfo* GetItem(int32 SlotIndex) const { return Items.Find(SlotIndex);}

	virtual void SetITem(int32 SlotIndex, const FInventorySlotInfo& Item);

	virtual void ClearItem(int32 SlotIndex);
	
	FORCEINLINE const TMap<int32, FInventorySlotInfo>& GetItems() const { return Items; }

	FORCEINLINE int32 GetItemsNum() const { return Items.Num(); }

	void SetInventory(TMap<int32, FInventorySlotInfo>& NewInventory);

	virtual int32 GetMaxItemAmount(int32 SlotIndex, const FInventoryItemInfo& InItem);
	
protected:

	UPROPERTY(EditAnywhere)
	TMap<int32, FInventorySlotInfo> Items;
	
};
