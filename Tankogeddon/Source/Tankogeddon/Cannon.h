// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameStructs.h"
#include "GameFramework/Actor.h"
#include "Cannon.generated.h"

UCLASS()
class TANKOGEDDON_API ACannon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACannon();

	void Fire();

	void AlterFire();

	void AlterFireStop();
	
	void Reload();

	void MiniReload();

	void Tick(float DeltaSeconds) override;
	
protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
	class UStaticMeshComponent* CannonMesh;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
	class UArrowComponent* ProjectileSpawnPoint;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	ECannonType CannonType;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Ammo")
	uint8 MaxAmmo = 50;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Ammo")
	uint8 CurrentAmmo = 50;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Ammo")
	uint8 MiniAmmo = 200;
	
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Ammo")
	bool AutoFire = false;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Ammo")
	float ProjectileReloadDelay = 3.5f;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Ammo")
	float TraceReloadDelay = 1.5f;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Ammo")
	float MiniDelay = 0.2f;
	
	FTimerHandle ReloadTimer;

	FTimerHandle MiniTimer;
private:
	bool bLoaded = true;
	bool bMiniLoaded = true;
	
};
