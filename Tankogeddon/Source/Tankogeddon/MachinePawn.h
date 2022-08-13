
#pragma once

#include "CoreMinimal.h"
#include "Cannon.h"
#include "DamageTaker.h"
#include "Scorable.h"
#include "GameFramework/Pawn.h"
#include "MachinePawn.generated.h"

UCLASS()
class TANKOGEDDON_API AMachinePawn : public APawn  , public IDamageTaker, public IScorable
{
	GENERATED_BODY()

public:

	AMachinePawn();
	
	virtual void Fire();

	virtual void SetupCannon(TSubclassOf<ACannon> NewCannonClass);
	
	virtual void BeginPlay() override;

	virtual void TakeDamage(FDamageData DamageData) override;

	virtual int GetPoints() override;

	UFUNCTION()
	void AddAndShowScore(int Value);

	UFUNCTION(BlueprintCallable)
	float GetCurrentHealth();


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
	class UBoxComponent* BoxComponent;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	TSubclassOf<ACannon> CannonClass;

	UPROPERTY()
	class ACannon * Cannon;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	class UArrowComponent* CannonSetupPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	class UHealthComponent* HealthComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Scores")
	int ScoreValue = 0;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Effects")
	UParticleSystemComponent* MachineDestroyEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Effects")
	UAudioComponent* MachineDestroySound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Effects")
	UAudioComponent* DamageTakenSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Scores")
	int CurrentScores = 0;
};
