// Fill out your copyright notice in the Description page of Project Settings.


#include "AITankPawn.h"

#include "Kismet/KismetMathLibrary.h"

FVector AAITankPawn::GetTurretForwardVector()
{
	return TurretMesh->GetForwardVector();
}

FVector AAITankPawn::GetEyesPosition()
{
	return CannonSetupPoint->GetComponentLocation();
}



