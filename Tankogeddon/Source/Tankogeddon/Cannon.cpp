// Fill out your copyright notice in the Description page of Project Settings.


#include "Cannon.h"

#include "ActorPool.h"
#include "DamageTaker.h"
#include "Disc.h"
#include "Projectile.h"
#include "Components/ArrowComponent.h"
#include "Components/AudioComponent.h"
#include "Particles/ParticleSystemComponent.h"


ACannon::ACannon()
{
	PrimaryActorTick.bCanEverTick = true;

	USceneComponent* CannonSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("CannonRoot"));
	RootComponent = CannonSceneComponent;
	
	CannonMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CannonMesh"));
	CannonMesh->SetupAttachment(CannonSceneComponent);

	ProjectileSpawnPoint = CreateDefaultSubobject<UArrowComponent>(TEXT("ProjectileSpawnPoint"));
	ProjectileSpawnPoint->SetupAttachment(CannonMesh);

	ShootEffect = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ShootEffect"));
	ShootEffect->SetAutoActivate(false);
	AudioShootEffect = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioShootEffect"));
	AudioShootEffect->SetAutoActivate(false);


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
		if(!ProjectilePool)
		{
			return;
		}
		CurrentAmmo--;
		
		if(ShootEffect)
		{
			ShootEffect->ActivateSystem();
		}
		if(AudioShootEffect)
		{
			AudioShootEffect->Play();
		}
	
		
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Cyan, FString::Printf(TEXT("Fire projectile. Ammo: %d"), CurrentAmmo));
		AProjectile* Projectile = Cast<AProjectile>(ProjectilePool->SpawnPooleableActor(ProjectileSpawnPoint->GetComponentLocation(), ProjectileSpawnPoint->GetComponentRotation()));
		
		if(Projectile)
		{
			Projectile->GotKill.AddUObject(this, &ACannon::AddScore);
			Projectile->SetOwner(this);
			Projectile->Start();
		}
		
		GetWorld()->GetTimerManager().SetTimer(ReloadTimer, this, &ACannon::Reload, ProjectileReloadDelay, false);

		
	}
	else if(CannonType == ECannonType::FireTrace)
	{
		CurrentAmmo--;
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Cyan, FString::Printf(TEXT("Fire trace. Ammo: %d"), CurrentAmmo));
		GetWorld()->GetTimerManager().SetTimer(ReloadTimer, this, &ACannon::Reload, TraceReloadDelay, false);

		FHitResult HitResult;
		FCollisionQueryParams TraceParams = FCollisionQueryParams(FName(TEXT("FireTrace")), true, this);
		TraceParams.bReturnPhysicalMaterial = false;
		TraceParams.bTraceComplex = true;

		FVector StartVector = ProjectileSpawnPoint->GetComponentLocation();
		FVector EndTrace = StartVector + ProjectileSpawnPoint->GetForwardVector() * TraceLength;

		if(GetWorld()->LineTraceSingleByChannel(HitResult, StartVector, EndTrace, ECollisionChannel::ECC_Visibility, TraceParams))
		{
			DrawDebugLine(GetWorld(), StartVector, HitResult.Location, FColor::Magenta, false, 0.6f, 0, 10);
			if(HitResult.GetActor())
			{
				IDamageTaker* DamageTakerActor = Cast<IDamageTaker>(HitResult.GetActor());
				if (DamageTakerActor)
				{
					FDamageData damageData;
					damageData.DamageValue = TraceDamage;
					damageData.Instigator = this;
					damageData.DamageMaker = this;

					DamageTakerActor->TakeDamage(damageData);
				}
				else
				{
					HitResult.GetActor()->Destroy();
				}
			}
		}
		else
		{
			DrawDebugLine(GetWorld(), StartVector, EndTrace, FColor::Yellow, false, 0.6f, 0, 10);
		}
	}
	else if(CannonType == ECannonType::FireDisc)
	{
		CurrentAmmo -= 5;
		DiscOnFire = 5;
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Cyan, FString::Printf(TEXT("Fire Disc. Ammo: %d"), CurrentAmmo));
		DiscFire();
		
		GetWorld()->GetTimerManager().SetTimer(ReloadTimer, this, &ACannon::Reload, DiscReloadDelay, false);
		
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

void ACannon::DiscFire()
{
	if(DiscOnFire == 0)
	{
		return;
	}
		DiscOnFire--;
		ADisc* Disc = GetWorld()->SpawnActor<ADisc>(DiscClass, ProjectileSpawnPoint->GetComponentLocation(), ProjectileSpawnPoint->GetComponentRotation());
		if(Disc)
		{
			Disc->Start();
		}
		GetWorld()->GetTimerManager().SetTimer(DiscAutoTimer, this, &ACannon::DiscFire, DiscAutoDelay, false);
		
	
	
}

void ACannon::AddAmmo(uint8 Ammo)
{
	if(CurrentAmmo <= MaxAmmo - Ammo)
	{
		CurrentAmmo += Ammo;
	}
	else
	{
		CurrentAmmo = MaxAmmo;
	}
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

bool ACannon::IsLoaded()
{
	return bLoaded;
}

void ACannon::SetupPool()
{
	{
		if(!ProjectilePoolClass)
		{
			return;
		}
		if(ProjectilePool)
		{
			ProjectilePool->Destroy();
		}

		ProjectilePool = GetWorld()->SpawnActor<AActorPool>(ProjectilePoolClass);

		ProjectilePool->AttachToComponent(CannonMesh, FAttachmentTransformRules::SnapToTargetIncludingScale);
	}
}

void ACannon::Destruct()
{
	if(ProjectilePool)
	{
		ProjectilePool->Destroy();
	}
	Destroy();
}

FVector ACannon::GetEyesPosition()
{
	return ProjectileSpawnPoint->GetComponentLocation();
}

void ACannon::AddScore(int Value)
{
	if(ScoreChanged.IsBound())
	{
		ScoreChanged.Broadcast(Value);
	}
}

FText ACannon::GetAmmoState()
{	
	FString state;

	state = FString::FromInt(CurrentAmmo);
	state += "/";
	state += FString::FromInt(MaxAmmo);
	
	return FText::FromString(state);
}

void ACannon::BeginPlay()
{
	Super::BeginPlay();
	
	if(CannonType == ECannonType::FireProjectile)
	{
		SetupPool();
	}
	
}




