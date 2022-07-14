
#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "Components/PointLightComponent.h"
#include "GameFramework/Actor.h"
#include "MapLoader.generated.h"

UCLASS()
class TANKOGEDDON_API AMapLoader : public AActor
{
	GENERATED_BODY()
	
public:	

	AMapLoader();

	UFUNCTION()
	void Activate(bool IsActive);

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	UStaticMeshComponent* BuildingMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	UBoxComponent* BoxCollider;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	UPointLightComponent* GreenLight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	UPointLightComponent* RedLight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	bool bTeleportAllowed = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	FName LoadLevelName;

	UFUNCTION()
	void OnTriggerOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	
	virtual void BeginPlay() override;

	void SwitchLights();
};
