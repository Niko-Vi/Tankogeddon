// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TankPawn.h"
#include "Components/ArrowComponent.h"
#include "Engine/TargetPoint.h"
#include "AITankPawn.generated.h"

/**
 * 
 */
UCLASS()
class TANKOGEDDON_API AAITankPawn : public ATankPawn
{
	GENERATED_BODY()

public:
	UFUNCTION()
	TArray<FVector> GetPatrolCheckpoints();

	UFUNCTION()
	float GetAccurency() { return MovementAccurency; }

	UFUNCTION()
	FVector GetTurretForwardVector();

	UFUNCTION()
	FVector GetEyesPosition();

	UFUNCTION()
	void SetPatrolCheckPoints(TArray<ATargetPoint*> NewPatrolPoints);
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI | Components", meta = (MakeEditWidget = true))
	TArray<ATargetPoint*> PatrolCheckpoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI | Components")
	float MovementAccurency = 30.0f;
};
