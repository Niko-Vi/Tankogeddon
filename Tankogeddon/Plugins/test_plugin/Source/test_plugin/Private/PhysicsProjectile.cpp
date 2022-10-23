// Fill out your copyright notice in the Description page of Project Settings.


#include "PhysicsProjectile.h"

#include "../../../../../Source/Tankogeddon/DamageTaker.h"
#include "Kismet/KismetMathLibrary.h"
#include "Particles/ParticleSystem.h"
#include "Particles/ParticleSystemComponent.h"

APhysicsProjectile::APhysicsProjectile()
{
	PhysicsComponent = CreateDefaultSubobject<UPhysicsComponent>(TEXT("PhysicsComponent"));

	TrailEffect = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("TrailEffect"));
	TrailEffect->SetupAttachment(RootComponent);
}

void APhysicsProjectile::Start()
{
	MoveVector = GetActorForwardVector() * MoveSpeedPhysics;
	CurrentTrajectory = PhysicsComponent->GenerateTrajectory(
		GetActorLocation(),
		MoveVector,
		MaxTimeSimulation,
		TimeStep,
		0.0f);

	if(bShowtrajectory)
	{
		for(FVector position: CurrentTrajectory)
		{
			DrawDebugSphere(GetWorld(), position, 5, 8, FColor::Red, true, 1, 0, 2);
		}
	}
	TrajectoryPointIndex = 0;
	if(TrailEffect)
		TrailEffect->ActivateSystem();
	
	Super::Start();
}

void APhysicsProjectile::Move()
{
	FVector CurrentMoveVector = CurrentTrajectory[TrajectoryPointIndex] - GetActorLocation();

	CurrentMoveVector.Normalize();

	FVector newLocation = GetActorLocation() + CurrentMoveVector * MoveSpeedPhysics * MoveRate;
	SetActorLocation(newLocation);

	if(FVector::Distance(newLocation, CurrentTrajectory[TrajectoryPointIndex]) <= MovementAccurency)
	{
		TrajectoryPointIndex++;
		if(TrajectoryPointIndex >= CurrentTrajectory.Num())
		{
			Explode();
			Deactivate();
		}
		else
		{
			FRotator newRotation = UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), CurrentTrajectory[TrajectoryPointIndex]);
			SetActorRotation(newRotation);
		}
	}
	
}


