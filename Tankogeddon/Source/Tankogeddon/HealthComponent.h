
#pragma once

#include "CoreMinimal.h"
#include "GameStructs.h"
#include "Components/ActorComponent.h"
#include "HealthComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TANKOGEDDON_API UHealthComponent : public UActorComponent
{
	GENERATED_BODY()

	DECLARE_EVENT(UHealthComponent, FOnDie);
	DECLARE_EVENT_OneParam(UHealthComponent, FOnHealthChanged, float);

public:

	FOnDie OnDie;
	FOnHealthChanged OnHealthChanged;
	
	void TakeDamage(FDamageData DamageData);
	float GetHealth() const;

	UFUNCTION(BlueprintCallable)
	float GetHealthState() const;
	
	void AddHealth(float AddHealthValue);

protected:
	
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
	float MaxHealth = 35.0f;

	UPROPERTY()
	float CurrentHealth;
		
};
