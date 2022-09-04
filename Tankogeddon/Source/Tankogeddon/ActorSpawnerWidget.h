// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TankController.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "ActorSpawnerWidget.generated.h"

/**
 * 
 */
UCLASS()
class TANKOGEDDON_API UActorSpawnerWidget : public UUserWidget
{
	GENERATED_BODY()

public:

	virtual void NativePreConstruct() override;

	virtual void NativeConstruct() override;

	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

	virtual FReply NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;

protected:

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> SpawnClass;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock* Item;

	UPROPERTY(EditAnywhere)
	FString ItemName;

	UPROPERTY()
	AActor* SpawnedActor;

	UPROPERTY()
	ATankController* TankController;

	void OnMouseButtonUp();
};
