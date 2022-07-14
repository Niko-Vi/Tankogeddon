// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "AITankPawn.h"
#include "TankPawn.h"
#include "TankAIController.generated.h"

/**
 * 
 */
UCLASS()
class TANKOGEDDON_API ATankAIController : public AAIController
{
	GENERATED_BODY()

protected:
	UPROPERTY()
	AAITankPawn* AIPawn;

	UPROPERTY()
	APawn* PlayerPawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI | Movement")
	TArray<FVector> PatrolPath;

	int32 CurrentPatrolPointIndex = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI | Movement")
	float MovementAccurency;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI | Targeting")
	float TargetingRange = 1500.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI | Targeting")
	float TargetingSpeed = 00.1f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI | Targeting")
	float Accurency = 10.0f;

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaSeconds) override;

	float GetRotationValue();
	void Targeting();
	void RotateToPlayer();
	bool IsPlayerInRange();
	bool CanFire();
	void Fire();
	void Initialize();

	bool IsPlayerSeen();	
};
