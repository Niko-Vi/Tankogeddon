// Fill out your copyright notice in the Description page of Project Settings.


#include "TankPawn.h"

#include "InventoryComponent.h"
#include "InventoryManagerComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/AudioComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Particles/ParticleSystemComponent.h"


// Sets default values
ATankPawn::ATankPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
/*
	BodyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BodyMesh"));
	RootComponent = BodyMesh;
	
	TurretMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("HeadMesh"));
	TurretMesh->SetupAttachment(BodyMesh);

	CannonSetupPoint = CreateDefaultSubobject<UArrowComponent>(TEXT("CannonSetupPoint"));
	CannonSetupPoint->SetupAttachment(TurretMesh);
*/
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(BodyMesh);
	SpringArm->bDoCollisionTest = false;
	SpringArm->bInheritPitch = false;
	SpringArm->bInheritRoll = false;
	SpringArm->bInheritYaw = false;	

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);

	ShootForceEffect = CreateDefaultSubobject<UForceFeedbackEffect>(TEXT("ShootForceEffect"));
	//ShootShakeEffect = CreateDefaultSubobject<UCameraShakePattern>>(TEXT("ShootCameraShakeEffect"));

	// inventory
	InventoryComponent = CreateDefaultSubobject<UInventoryComponent>(TEXT("InventoryComponent"));
	InventoryManagerComponent = CreateDefaultSubobject<UInventoryManagerComponent>(TEXT("InventoryManager"));
	
}


void ATankPawn::MoveForward(float Value)
{
	ForwardAxisValue = Value;
}

void ATankPawn::TurnRight(float Value)
{
	TurnRightAxisValue = Value;
}



void ATankPawn::AlterFire()
{
	if(Cannon)
	{
		Cannon->AlterFire();
	}
}

void ATankPawn::AlterFireStop()
{
	if(Cannon)
	{
		Cannon->AlterFireStop();
	}
}

/*FVector ATankPawn::GetTurretPos() //used for debug line draw
{
	return TurretMesh->GetComponentLocation();
}*/

/*void ATankPawn::SetupCannon(TSubclassOf<ACannon> NewCannonClass)
{
	if(!NewCannonClass)
	{
		return;
	}
	if(Cannon)
	{
		Cannon->Destroy();
	}
	FActorSpawnParameters params;
	params.Instigator = this;
	params.Owner = this;

	Cannon = GetWorld()->SpawnActor<ACannon>(NewCannonClass, params);

	Cannon->AttachToComponent(CannonSetupPoint, FAttachmentTransformRules::SnapToTargetIncludingScale);
}*/

void ATankPawn::SwitchCannon()
{
	if(Cannon->CannonType == ECannonType::FireProjectile)
	{
		CannonClass = TraceCannonClass;
		SetupCannon(CannonClass);
	}
	else if(Cannon->CannonType == ECannonType::FireTrace)
	{
		CannonClass = ProjectileCannonClass;
		SetupCannon(CannonClass);
	}
	else
	{
		CannonClass = ProjectileCannonClass;
		SetupCannon(CannonClass);
	}
}

void ATankPawn::AddAmmo(uint8 Ammo)
{
	if(Cannon)
	{
		Cannon->AddAmmo(Ammo);
	}
}


void ATankPawn::Tick(float DeltaSeconds)
{
	
		Super::Tick(DeltaSeconds);

	if(!bDead)
	{
		//Tank movement
		FVector CurrentLocation = GetActorLocation();
		FVector ForwardVector = GetActorForwardVector();
		CurrentForwardAxisValue = FMath::Lerp(CurrentForwardAxisValue, ForwardAxisValue, ForwardInterpolationKey);
		FVector MovePosition = CurrentLocation + MoveSpeed * ForwardVector * CurrentForwardAxisValue;
		SetActorLocation(MovePosition, true);

		//Tank rotation
		CurrentTurnRightAxisValue = FMath::Lerp(CurrentTurnRightAxisValue, TurnRightAxisValue, TurnInterpolationKey);
		float YawRotation = TurnSpeed * CurrentTurnRightAxisValue * DeltaSeconds;
		FRotator CurrentRotation = GetActorRotation();	
		YawRotation += CurrentRotation.Yaw;
		FRotator NewRotation = FRotator(0.0f, YawRotation,0.0f);
		SetActorRotation(NewRotation);

		//Turret rotation
		if(TankController)
		{
			FVector MousePos = TankController->GetMousePosition();

			TurnTurretTo(MousePos);
		}
	}
}

void ATankPawn::BeginPlay()
{
	Super::BeginPlay();

	SetActorLocation(FVector(GetActorLocation().X, GetActorLocation().Y, 0.0f));

	TankController = Cast<ATankController>(GetController());

	//SetupCannon(CannonClass);

	if(CurrentInventoryItems)
	{
		/*
		 * rows in table are indexes of inventory slots
		 */
		TMap<int32, FInventorySlotInfo> indexedItems;
		TArray<FName> names = CurrentInventoryItems->GetRowNames();
		FString convertible;
		int32 index;
		FInventorySlotInfo* info;

		for(auto name : names)
		{
			convertible = name.ToString();
			index = FCString::Atoi(*convertible);
			info = CurrentInventoryItems->FindRow<FInventorySlotInfo>(name, "");
			indexedItems.Add(index, *info);
		}		
		
		InventoryComponent->SetInventory(indexedItems);
	}
	
	InventoryManagerComponent->Init(InventoryComponent);
}

void ATankPawn::Fire()
{
	Super::Fire();

	if(ShootForceEffect)
	{
		FForceFeedbackParameters shootForceParams;
		shootForceParams.bLooping = false;
		shootForceParams.Tag = "shootForceParams";

		GetWorld()->GetFirstPlayerController()->ClientPlayForceFeedback(ShootForceEffect, shootForceParams);
	}
	if(ShootShakeEffect)
	{
		FCameraShakeStartParams CameraShakeStartParams;
		CameraShakeStartParams.bIsRestarting = false;
		ShootShakeEffect->StartShakePattern(CameraShakeStartParams);
		
	}

	if(Cannon)
	{
		if(OnAmmoStateChanged.IsBound())
		{
			OnAmmoStateChanged.Broadcast(Cannon->GetAmmoState());
		}
	}
	
}

/*void ATankPawn::Die()
{
	bDead = true;
	if(Cannon)
		Cannon->Destroy();
	//if(TurretMesh)
	//	TurretMesh->DestroyComponent();
	DisableInput(this->TankController);	
}*/

void ATankPawn::Destroyed()
{
	if(MachineDestroyEffect)
		MachineDestroyEffect->ActivateSystem();
	if(MachineDestroySound)
		 MachineDestroySound->Play();
	
	bDead = true;
	if(Cannon)
		Cannon->Destroy();
	
}

void ATankPawn::TurnTurretTo(FVector TargetPosition)
{
	FRotator targetRotation = UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), TargetPosition);
	FRotator turretRotation = TurretMesh->GetComponentRotation();

	targetRotation.Pitch = turretRotation.Pitch;
	targetRotation.Roll = turretRotation.Roll;

	TurretMesh->SetWorldRotation(FMath::Lerp(turretRotation, targetRotation, TurretTurnInterpolationKey));
}

FText ATankPawn::GetAmmoState()
{
	if(Cannon)
	{
		return Cannon->GetAmmoState();
	}
	return FText::FromString("fail");
}

void ATankPawn::ChangeInventoryVisibility()
{
	if(InventoryManagerComponent)
	{
		InventoryManagerComponent->ChangeInventoryVisibility();
	}
}

