// Fill out your copyright notice in the Description page of Project Settings.


#include "TurrelPawn.h"

#include "HealthComponent.h"
#include "Components/BoxComponent.h"
#include "Kismet/KismetMathLibrary.h"

ATurrelPawn::ATurrelPawn()
{
	PrimaryActorTick.bCanEverTick = false;

	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollider"));
	BoxComponent->SetupAttachment(BodyMesh);
	
	UStaticMesh* BodyMeshTemp = LoadObject<UStaticMesh>(this, *BodyMeshPath);
	if(BodyMeshTemp)
	{
		BodyMesh->SetStaticMesh(BodyMeshTemp);
	}
	UStaticMesh* TurretMeshTemp = LoadObject<UStaticMesh>(this, *TurretMeshPath);
	if(TurretMeshTemp)
	{
		TurretMesh->SetStaticMesh(TurretMeshTemp);
	}


}

void ATurrelPawn::TakeDamage(FDamageData DamageData)
{
	HealthComponent->TakeDamage(DamageData);
}

void ATurrelPawn::BeginPlay()
{
	Super::BeginPlay();

	PlayerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();

	FTimerHandle TargetingTimer;
	GetWorld()->GetTimerManager().SetTimer(TargetingTimer, this, &ATurrelPawn::Targeting, TargetingRate, true, TargetingRate);
	
}

void ATurrelPawn::Destroyed()
{
	Super::Destroyed();

	if(Cannon)
	{
		Cannon->Destroy();
	}
}

void ATurrelPawn::Targeting()
{
	if(IsPlayerInRange())
	{
		RotateToPlayer();
	}

	if(CanFire() && Cannon && Cannon->IsLoaded())
	{
		Fire();
	}	
}

void ATurrelPawn::RotateToPlayer()
{
	//get rotation to player
	FRotator TargetRotation = UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), PlayerPawn->GetActorLocation());
	//get turret rotation
	FRotator TurretRotation = TurretMesh->GetComponentRotation();
	// dismiss pitch and roll rotation to target coz it is 2d game
	TargetRotation.Pitch = TurretRotation.Pitch;
	TargetRotation.Roll = TurretRotation.Roll;
	// rotate turret component to player
	TurretMesh->SetWorldRotation(FMath::Lerp(TurretRotation, TargetRotation, TargetingSpeed));
}

bool ATurrelPawn::IsPlayerInRange()
{
	return FVector::Distance(PlayerPawn->GetActorLocation(), this->GetActorLocation()) <= TargetingRange;
}

bool ATurrelPawn::CanFire() // check if turret looking at player
{
	//get current direction of turret
	FVector TargetingDirection = TurretMesh->GetForwardVector();
	//get and normalize direction to player
	FVector DirectionToPlayer = PlayerPawn->GetActorLocation() - GetActorLocation();
	DirectionToPlayer.Normalize();

	//get angle between vector to player and current turret direction
	float AimAngle = FMath::RadiansToDegrees((acosf(FVector::DotProduct(TargetingDirection, DirectionToPlayer))));
	//if angle not more than Accurency turret can fire
	return AimAngle <= Accurency;
}
