// Fill out your copyright notice in the Description page of Project Settings.


#include "TankAIController.h"


void ATankAIController::BeginPlay()
{
	Super::BeginPlay();

	Initialize();
}

void ATankAIController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if(!AIPawn)
	{
		Initialize();
	}
	if(!AIPawn)
	{
		return;
	}

	AIPawn->MoveForward(1);

	float RotationValue = GetRotationValue();
	AIPawn->TurnRight(RotationValue);

	Targeting();
	
}

float ATankAIController::GetRotationValue()
{
	FVector currentPoint = PatrolPath[CurrentPatrolPointIndex];
	FVector pawnLocation = AIPawn->GetActorLocation();
	if(FVector::Distance(currentPoint, pawnLocation) <= MovementAccurency)
	{
		CurrentPatrolPointIndex++;
		if(CurrentPatrolPointIndex >= PatrolPath.Num())
		{
			CurrentPatrolPointIndex = 0;
		}
	}

	FVector moveDirection = currentPoint - pawnLocation;
	moveDirection.Normalize();
	FVector forwardDirection = AIPawn->GetActorForwardVector();
	FVector rightDirection = AIPawn->GetActorRightVector();

	DrawDebugLine(GetWorld(), pawnLocation, currentPoint, FColor::Green,
		false, 0.1f, 0, 5);

	float forwardAngle = FMath::RadiansToDegrees(acosf(FVector::DotProduct(forwardDirection, moveDirection)));
	float rightAngle = FMath::RadiansToDegrees(acosf(FVector::DotProduct(rightDirection, moveDirection)));

	float rotationValue = 0;
	if(forwardAngle > 5)
	{
		rotationValue = 1;
	}
	if(rightAngle > 90)
	{
		rotationValue = -rotationValue;
	}
	return rotationValue;
}

void ATankAIController::Targeting()
{
	if(CanFire())
	{
		Fire();
	}
	else
	{
		RotateToPlayer();
	}
}

void ATankAIController::RotateToPlayer()
{
	if(IsPlayerInRange())
	{
		AIPawn->TurnTurretTo(PlayerPawn->GetActorLocation());
	}
}

bool ATankAIController::IsPlayerInRange()
{
	return FVector::Distance(AIPawn->GetActorLocation(), PlayerPawn->GetActorLocation()) <=TargetingRange;
}

bool ATankAIController::CanFire()
{
	if(!IsPlayerSeen())
	{
		return false;
	}

	FVector targetDirection = AIPawn->GetTurretForwardVector();
	FVector directionToPlayer = PlayerPawn->GetActorLocation() - AIPawn->GetActorLocation();
	directionToPlayer.Normalize();
	float aimAngle = FMath::RadiansToDegrees(acosf(FVector::DotProduct(targetDirection, directionToPlayer)));

	return aimAngle <= Accurency;
}

void ATankAIController::Fire()
{
	if(AIPawn)
	{
		AIPawn->Fire();
	}
}

void ATankAIController::Initialize()
{
	AIPawn = Cast<AAITankPawn>(GetPawn());

	if(!AIPawn)
	{
		return;
	}
	PlayerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();

	FVector pawnLocation = AIPawn->GetActorLocation();
	MovementAccurency = AIPawn->GetAccurency();
	TArray<FVector> points = AIPawn->GetPatrolCheckpoints();
	for(FVector point : points)
	{
		PatrolPath.Add(point + pawnLocation);
	}
	CurrentPatrolPointIndex = 0;
}


bool ATankAIController::IsPlayerSeen()
{
	FVector playerPosition = PlayerPawn->GetActorLocation();
	FVector eyesPosition = AIPawn->GetEyesPosition();

	FHitResult HitResult;

	FCollisionQueryParams traceParams = FCollisionQueryParams(FName(TEXT("FireTrace")),
		true, this);
	traceParams.bTraceComplex = true;
	traceParams.AddIgnoredActor(AIPawn);
	traceParams.bReturnPhysicalMaterial = false;

	//if(GetWorld()->LineTraceSingleByChannel(HitResult, eyesPosition, playerPosition,
	//	ECollisionChannel::ECC_Visibility, traceParams))
	//{
	GetWorld()->LineTraceSingleByChannel(HitResult, eyesPosition, playerPosition,
		ECollisionChannel::ECC_Visibility, traceParams);
	
		if(HitResult.GetActor())
		{
			DrawDebugLine(GetWorld(), eyesPosition, HitResult.Location, FColor::Red, false,
				0.5f, 0, 10);
			
			return  HitResult.GetActor() == PlayerPawn;
		}
	//}
	DrawDebugLine(GetWorld(), eyesPosition, playerPosition, FColor::Green, false,
		0.5f, 0, 10);
	return false;
}

