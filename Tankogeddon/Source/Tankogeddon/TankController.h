// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TankController.generated.h"

/**
 * 
 */
UCLASS()
class TANKOGEDDON_API ATankController : public APlayerController
{
	GENERATED_BODY()

public:
	ATankController();

	FSimpleMulticastDelegate OnMouseButtonUp;
	
	virtual void SetupInputComponent() override;

	UPROPERTY()
	class ATankPawn* TankPawn;

	UPROPERTY()
	FVector MousePos;

	FVector GetMousePosition();

	virtual void Tick(float DeltaSeconds) override;
	
	virtual void SetPawn(APawn* InPawn) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "State")
	bool bDead = false;

	UFUNCTION(BlueprintCallable)
	bool isDead();

	virtual void BeginPlay() override;

	
protected:

	UFUNCTION()
	void MoveForward(float Value);

	UFUNCTION()
	void TurnRight(float Value);

	UFUNCTION()
	void Fire();

	UFUNCTION()
	void AlterFire();

	UFUNCTION()
	void AlterFireStop();

	UFUNCTION()
	void SwitchCannon();

	UFUNCTION()
	void ChangeInventoryVisibility();

	void OnLeftMouseButonUp();

};

