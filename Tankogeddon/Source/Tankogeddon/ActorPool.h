
#pragma once

#include "CoreMinimal.h"
#include "PoolableActor.h"
#include "GameFramework/Actor.h"
#include "ActorPool.generated.h"

UCLASS()
class TANKOGEDDON_API AActorPool : public AActor
{
	GENERATED_BODY()
	


public:
	AActorPool();
	
	UFUNCTION(BlueprintCallable, Category = "ActorPool")
	APoolableActor* SpawnPooleableActor(FVector SpawnVector, FRotator SpawnRotator);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ActorPool")
	TSubclassOf<APoolableActor> PoolableActorSubclass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ActorPool")
	int PoolSize = 3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ActorPool")
	float PooleableActorLifeSpan = 0.0f;

	UFUNCTION()
	void OnPooleableActorDespawn(APoolableActor* PoolActor);

protected:

	virtual void BeginPlay() override;

	TArray<APoolableActor*> ActorPool;
	TArray<int> SpawnPoolIndexes;
	
};
