
#pragma once

#include "CoreMinimal.h"
#include "PoolableActor.h"
#include "GameFramework/Actor.h"
#include "Projectile.generated.h"

UCLASS()
class TANKOGEDDON_API AProjectile : public APoolableActor
{
	GENERATED_BODY()

	DECLARE_EVENT_OneParam(AProjectile, FOnKill, int);
	
public:	
	AProjectile();

	virtual void Start();

	FOnKill GotKill;
	
protected:
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")
	class  UStaticMeshComponent* ProjectileMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	float MoveSpeed = 100.0f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	float MoveRate = 0.01f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	float Damage = 10.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	float PushForce = 1000.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage")
	float ExplodeRadius = 50.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage")
	bool bExplosive = true;

	void Explode();

	void MakeThings(AActor* OtherActor);

	FTimerHandle MoveTimer;

	virtual void Move();

	UFUNCTION()
	void OnMeshOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, 
		class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
