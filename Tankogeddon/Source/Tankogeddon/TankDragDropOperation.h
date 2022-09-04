
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/DragDropOperation.h"
#include "TankDragDropOperation.generated.h"

/**
 * 
 */

class UDraggableItem;

UCLASS()
class TANKOGEDDON_API UTankDragDropOperation : public UDragDropOperation
{
	GENERATED_BODY()
public:
	FText TankName;

	UPROPERTY()
	UDraggableItem* OriginWidget;
};
