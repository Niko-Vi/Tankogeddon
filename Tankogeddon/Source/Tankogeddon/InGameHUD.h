// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "InGameHUD.generated.h"

/**
 * 
 */

class ATankController;

UCLASS()
class TANKOGEDDON_API UInGameHUD : public UUserWidget
{
	GENERATED_BODY()

	



public:
	virtual void NativeConstruct() override;

	virtual void NativeDestruct() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float MaxHealth;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float CurrentHealth;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	FText AmmoState;

	UFUNCTION(BlueprintCallable)
	void ChangeHealth(float Health);

	UFUNCTION(BlueprintCallable)
	void SetMaxHealth(float Health);

	UFUNCTION(BlueprintCallable)
	void SetAmmoState(FText ammo);

	

private:

	ATankController*  TankController;

	
	
};
