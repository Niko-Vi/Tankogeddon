
#pragma once

#include "CoreMinimal.h"
#include "AITankPawn.h"
#include "HealthComponent.h"
#include "MapLoader.h"
#include "Components/ArrowComponent.h"
#include "Components/BoxComponent.h"
#include "Engine/TargetPoint.h"
#include "GameFramework/Actor.h"
#include "TankFactory.generated.h"

UCLASS()
class TANKOGEDDON_API ATankFactory : public AActor, public IDamageTaker
{
	GENERATED_BODY()
	
public:	

	ATankFactory();

	
protected:
	virtual void BeginPlay() override;

	UFUNCTION()
	virtual void TakeDamage(FDamageData DamageData) override;

	UFUNCTION()
	void DamageTaken(float DamageValue);

	UFUNCTION()
	void Die();

	UFUNCTION()
	void SpawnTank();
	
	

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	UStaticMeshComponent* BuildingMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	UStaticMeshComponent* ScrapMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	UBoxComponent* BoxCollider;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	UHealthComponent* HealthComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	UArrowComponent* TankSpawnPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	TSubclassOf<AAITankPawn> SpawnTankClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	float SpawnRate = 15.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	int MaximumTanksSpawn = 3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	TArray<ATargetPoint*> TankWayPoints;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	AMapLoader* MapLoader;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Effects")
	UParticleSystemComponent* FactoryDestroyEffect;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Effects")
	UAudioComponent* FactoryDestroySound;

private:
	bool bDestroyed = false;
	int TanksSpawned = 0;
};
