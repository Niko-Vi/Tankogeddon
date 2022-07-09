
#include "PoolableActor.h"

APoolableActor::APoolableActor(){

}

void APoolableActor::Deactivate(){
	SetActive(false);
	GetWorldTimerManager().ClearAllTimersForObject(this);
	OnPooleableActorDespawn.Broadcast(this);
	
	
}

void APoolableActor::SetActive(bool isActive){
	Active = isActive;	
	SetActorHiddenInGame(!isActive);
	SetActorEnableCollision(isActive);
	GetWorldTimerManager().SetTimer(LifeSpanTimer, this, &APoolableActor::Deactivate, LifeSpan, false);
}

void APoolableActor::SetLifeSpan(float lifeTime){
	LifeSpan = lifeTime;
}

void APoolableActor::SetPoolIndex(int index){
	PoolIndex = index;
}

bool APoolableActor::IsActive(){
	return Active;
}

int APoolableActor::GetPoolIndex(){
	return PoolIndex;
}
