// Fill out your copyright notice in the Description page of Project Settings.


#include "AITankPawn.h"

#include "Kismet/KismetMathLibrary.h"

TArray<FVector> AAITankPawn::GetPatrolCheckpoints()
{
	TArray<FVector> points;
	for(ATargetPoint* point : PatrolCheckpoints)
	{
		points.Add(point->GetActorLocation());
	}
	return points;
}

FVector AAITankPawn::GetTurretForwardVector()
{
	return TurretMesh->GetForwardVector();
}

FVector AAITankPawn::GetEyesPosition()
{
	if(Cannon)
	{
		return Cannon->GetEyesPosition();
	}
	return CannonSetupPoint->GetComponentLocation();
}

void AAITankPawn::SetPatrolCheckPoints(TArray<ATargetPoint*> NewPatrolPoints)
{
	PatrolCheckpoints = NewPatrolPoints;
}



