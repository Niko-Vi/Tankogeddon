// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ActorPool.h"
#include "GameStructs.h"
#include "GameFramework/Actor.h"
#include "Cannon.generated.h"

UCLASS()
class TANKOGEDDON_API ACannon : public AActor
{
	GENERATED_BODY()

	DECLARE_EVENT_OneParam(ACannon, FChangeScore, int);
	
public:	
	// Sets default values for this actor's properties
	ACannon();

	void Fire();

	void AlterFire();

	void AlterFireStop();
	
	void Reload();

	void MiniReload();

	void DiscFire();

	void AddAmmo(uint8 Ammo);

	void Tick(float DeltaSeconds) override;

	bool IsLoaded();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	ECannonType CannonType;

	void SetupPool();

	void Destruct();

	FVector GetEyesPosition();

	UFUNCTION()
	void AddScore(int Value);

	FChangeScore ScoreChanged;

	int Score = 0;

	UFUNCTION(BlueprintCallable)
	FText GetAmmoState();
	
protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
	class UStaticMeshComponent* CannonMesh;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
	class UArrowComponent* ProjectileSpawnPoint;
	
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	//ECannonType CannonType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	TSubclassOf<AActorPool> ProjectilePoolClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	AActorPool * ProjectilePool;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	TSubclassOf<class AProjectile> ProjectileClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	TSubclassOf<class ADisc> DiscClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	UParticleSystemComponent* ShootEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	UAudioComponent* AudioShootEffect;

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
	float DiscReloadDelay = 6.0f;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Ammo")
	float DiscAutoDelay = 1.0f;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Ammo")
	uint8 DiscOnFire = 0;
	
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Ammo")
	float MiniDelay = 0.2f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ammo")
	float TraceLength = 3000.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ammo")
	float TraceDamage = 5.0f;
	
	FTimerHandle ReloadTimer;	

	FTimerHandle MiniTimer;

	FTimerHandle DiscAutoTimer;

	virtual void BeginPlay() override;

	
private:
	bool bLoaded = true;
	bool bMiniLoaded = true;
	
};
