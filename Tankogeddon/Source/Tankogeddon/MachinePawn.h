
#pragma once

#include "CoreMinimal.h"
#include "Cannon.h"
#include "DamageTaker.h"
#include "GameFramework/Pawn.h"
#include "MachinePawn.generated.h"

UCLASS()
class TANKOGEDDON_API AMachinePawn : public APawn  , public IDamageTaker
{
	GENERATED_BODY()

public:

	AMachinePawn();
	
	virtual void Fire();

	virtual void SetupCannon(TSubclassOf<ACannon> NewCannonClass);

	virtual void Tick(float DeltaSeconds) override;

	virtual void BeginPlay() override;

	virtual void TakeDamage(FDamageData DamageData) override;

protected:
	
	virtual void Destroyed() override;

	UFUNCTION()
	virtual void Die();

	UFUNCTION()
	virtual void DamageTaken(float DamageValue);
	
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")
	UStaticMeshComponent * BodyMesh;
	
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")
	UStaticMeshComponent * TurretMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	TSubclassOf<ACannon> CannonClass;

	UPROPERTY()
	class ACannon * Cannon;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	class UArrowComponent* CannonSetupPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	class UHealthComponent* HealthComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Effects")
	UParticleSystemComponent* MachineDestroyEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Effects")
	UAudioComponent* MachineDestroySound;

	

};
