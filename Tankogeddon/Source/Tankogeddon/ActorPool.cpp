

#include "ActorPool.h"


AActorPool::AActorPool()
{ 	
	PrimaryActorTick.bCanEverTick = false;

}

APoolableActor* AActorPool::SpawnPooleableActor(FVector SpawnVector, FRotator SpawnRotator)
{
	for(APoolableActor* PoolableActor : ActorPool)
	{
		if(PoolableActor && !PoolableActor->IsActive())
		{
			PoolableActor->TeleportTo(SpawnVector, SpawnRotator);
			PoolableActor->SetLifeSpan(PooleableActorLifeSpan);
			PoolableActor->SetActive(true);
			SpawnPoolIndexes.Add(PoolableActor->GetPoolIndex());

			
			return PoolableActor;
		}		
	}
	if(SpawnPoolIndexes.Num() > 0)
	{
		int PooledActorIndex = SpawnPoolIndexes[0];
		SpawnPoolIndexes.Remove(PooledActorIndex);
		APoolableActor* PoolableActor = ActorPool[PooledActorIndex];

		if(PoolableActor)
		{
			PoolableActor->SetActive(false);

			PoolableActor->TeleportTo(SpawnVector, SpawnRotator);
			PoolableActor->SetLifeSpan(PooleableActorLifeSpan);
			PoolableActor->SetActive(true);
			SpawnPoolIndexes.Add(PoolableActor->GetPoolIndex());

			return PoolableActor;
		}
	}

	return nullptr;
}

void AActorPool::OnPooleableActorDespawn(APoolableActor* PoolActor)
{
	SpawnPoolIndexes.Remove(PoolActor->GetPoolIndex());
}

void AActorPool::BeginPlay()
{
	Super::BeginPlay();

	if(PoolableActorSubclass)
	{
		UWorld* const world = GetWorld();
		if(world)
		{
			for(int i = 0; i < PoolSize; ++i)
			{
				APoolableActor* PoolableActor = world->SpawnActor<APoolableActor>(PoolableActorSubclass,
					FVector().ZeroVector, FRotator().ZeroRotator);
				if(PoolableActor)
				{
					PoolableActor->SetActive(false);
					PoolableActor->SetPoolIndex(i);
					PoolableActor->OnPooleableActorDespawn.AddDynamic(this, &AActorPool::OnPooleableActorDespawn);
					ActorPool.Add(PoolableActor);
				}
			}		
		}
	}	
}



