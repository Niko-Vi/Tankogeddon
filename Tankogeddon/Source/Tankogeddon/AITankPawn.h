// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TankPawn.h"
#include "Components/ArrowComponent.h"
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
	TArray<FVector> GetPatrolCheckpoints(){return PatrolCheckpoints;}
	
	UFUNCTION()
	float GetAccurency() { return MovementAccurency;}

	UFUNCTION()
	FVector GetTurretForwardVector();

	UFUNCTION()
	FVector GetEyesPosition();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI | Components", meta = (MakeEditWidget = true))
	TArray<FVector> PatrolCheckpoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI | Components")
	float MovementAccurency = 30.0f;
};
