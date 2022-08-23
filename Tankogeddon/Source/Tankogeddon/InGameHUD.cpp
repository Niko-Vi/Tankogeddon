// Fill out your copyright notice in the Description page of Project Settings.


#include "InGameHUD.h"

#include "HealthComponent.h"
#include "TankPawn.h"

void UInGameHUD::NativeConstruct()
{
	Super::NativeConstruct();

	APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
	if(PlayerController)
	{
		TankController = Cast<ATankController>(PlayerController);
		if(TankController)
		{
			ATankPawn* TankPawn = TankController->TankPawn;

			if(TankPawn)
			{
				MaxHealth = TankPawn->HealthComponent->GetMaxHealth();
				CurrentHealth = TankPawn->HealthComponent->GetHealth();

				TankPawn->HealthComponent->OnHealthChanged.AddUObject(this, &UInGameHUD::ChangeHealth);

				AmmoState = TankPawn->GetAmmoState();

				TankPawn->OnAmmoStateChanged.AddDynamic(this, &UInGameHUD::SetAmmoState);
			}
		}
	}
	
}

void UInGameHUD::NativeDestruct()
{
	Super::NativeDestruct();
}

void UInGameHUD::ChangeHealth(float Health)
{
	CurrentHealth -= Health;
}

void UInGameHUD::SetMaxHealth(float Health)
{
	MaxHealth = Health;
}

void UInGameHUD::SetAmmoState(FText ammo)
{
	AmmoState = ammo;
}
