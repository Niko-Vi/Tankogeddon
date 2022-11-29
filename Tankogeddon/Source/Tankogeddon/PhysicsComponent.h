
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PhysicsComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TANKOGEDDON_API UPhysicsComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	
	UPhysicsComponent();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gravity params")
	float Gravity = 9.8f;

	TArray<FVector> GenerateTrajectory(FVector StartPos,
		FVector Velocity,
		float MaxTime,
		float TimeStep,
		float MinZValue = 0.0f);
protected:
	
		
};
