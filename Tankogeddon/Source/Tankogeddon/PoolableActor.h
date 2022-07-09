
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PoolableActor.generated.h"



UCLASS()
class TANKOGEDDON_API APoolableActor : public AActor
{
	GENERATED_BODY()
	
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPooleableActorDespawn, APoolableActor*, PoolActor);

public:
	APoolableActor();
	UFUNCTION(BlueprintCallable, Category = "Poolability")
	void Deactivate();

	void SetActive(bool isActive);
	void SetLifeSpan(float lifeTime);
	void SetPoolIndex(int index);

	bool IsActive();
	int GetPoolIndex();

	FOnPooleableActorDespawn OnPooleableActorDespawn;

protected:

	bool Active;
	float LifeSpan = 0.0f;
	int PoolIndex;

	FTimerHandle LifeSpanTimer;
};
