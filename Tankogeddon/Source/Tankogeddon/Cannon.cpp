// Fill out your copyright notice in the Description page of Project Settings.


#include "Cannon.h"

#include "Components/ArrowComponent.h"


ACannon::ACannon()
{
	PrimaryActorTick.bCanEverTick = true;

	CannonMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CannonMesh"));
	RootComponent = CannonMesh;

	ProjectileSpawnPoint = CreateDefaultSubobject<UArrowComponent>(TEXT("ProjectileSpawnPoint"));
	ProjectileSpawnPoint->SetupAttachment(CannonMesh);
}

void ACannon::Fire()
{
	if(!bLoaded || CurrentAmmo < 1)
	{
		if(CurrentAmmo < 1)
		{
			GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Cyan, FString::Printf(TEXT("No ammo")));
		}
		if(!bLoaded)
		{
			GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Cyan, FString::Printf(TEXT("Reloading")));
		}
			return;
	}

	bLoaded = false;

	if(CannonType == ECannonType::FireProjectile)
	{
		CurrentAmmo--;
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Cyan, FString::Printf(TEXT("Fire projectile. Ammo: %d"), CurrentAmmo));
		GetWorld()->GetTimerManager().SetTimer(ReloadTimer, this, &ACannon::Reload, ProjectileReloadDelay, false);
		
	}
	else if(CannonType == ECannonType::FireTrace)
	{
		CurrentAmmo--;
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Cyan, FString::Printf(TEXT("Fire trace. Ammo: %d"), CurrentAmmo));
		GetWorld()->GetTimerManager().SetTimer(ReloadTimer, this, &ACannon::Reload, TraceReloadDelay, false);
		
	}	
}

void ACannon::AlterFire()
{
	AutoFire = true;
}
void ACannon::AlterFireStop()
{
	AutoFire = false;
}


void ACannon::Reload()
{
	bLoaded = true;
}

void ACannon::MiniReload()
{
	bMiniLoaded = true;
}

void ACannon::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if(AutoFire)
	{
		if(MiniAmmo > 0 && bMiniLoaded)
		{
			bMiniLoaded = false;
			MiniAmmo--;
			GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Cyan, FString::Printf(TEXT("Ratatata!. Ammo: %d"), MiniAmmo));
			GetWorld()->GetTimerManager().SetTimer(MiniTimer, this, &ACannon::MiniReload, MiniDelay, false);			
		}		
	}
}




