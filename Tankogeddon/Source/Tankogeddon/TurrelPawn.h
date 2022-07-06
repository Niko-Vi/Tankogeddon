
#pragma once

#include "CoreMinimal.h"
#include "DamageTaker.h"
#include "MachinePawn.h"
#include "TurrelPawn.generated.h"


UCLASS()
class TANKOGEDDON_API ATurrelPawn : public AMachinePawn, public IDamageTaker
{
	GENERATED_BODY()

public:
	ATurrelPawn();

	virtual void TakeDamage(FDamageData DamageData) override;
	
protected:

	virtual void BeginPlay() override;

	void Destroyed() override;

	void Targeting();

	void RotateToPlayer();

	bool IsPlayerInRange();

	bool CanFire();

	UPROPERTY()
	class APawn* PlayerPawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	class UBoxComponent* BoxComponent;
		
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Targeting")
	float TargetingRange = 2000.0f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Targeting")
	float TargetingSpeed = 0.05f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Targeting")
	float TargetingRate = 0.01f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Targeting")
	float Accurency = 20.0f;

	const FString BodyMeshPath = "StaticMesh'/Game/Meshes/SM_CSC_Tower1.SM_CSC_Tower1'";

	const FString TurretMeshPath = "SkeletalMesh'/Game/Meshes/SK_CSC_Gun1.SK_CSC_Gun1'";
};
