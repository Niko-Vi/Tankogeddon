

#include "MapLoader.h"

#include "TankPawn.h"
#include "Components/LightComponent.h"
#include "Kismet/GameplayStatics.h"



AMapLoader::AMapLoader()
{
 	PrimaryActorTick.bCanEverTick = false;

	USceneComponent* SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	RootComponent = SceneComponent;

	BuildingMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BuildingMesh"));
	BuildingMesh->SetupAttachment(SceneComponent);

	GreenLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("GreenLight"));
	GreenLight->SetupAttachment(SceneComponent);

	RedLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("RedLight"));
	RedLight->SetupAttachment(SceneComponent);

	BoxCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollider"));
	BoxCollider->SetupAttachment(BuildingMesh);
	BoxCollider->OnComponentBeginOverlap.AddDynamic(this, &AMapLoader::OnTriggerOverlapBegin);

}

void AMapLoader::Activate(bool IsActive)
{
	bTeleportAllowed = IsActive;
	SwitchLights();
}

void AMapLoader::OnTriggerOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (!bTeleportAllowed)
	{
		return;
	}
	
	ATankPawn* TankPawn = Cast<ATankPawn>(OtherActor);
	if (TankPawn)
	{
		UGameplayStatics::OpenLevel(GetWorld(), LoadLevelName);
	}
}

void AMapLoader::BeginPlay()
{
	Super::BeginPlay();
	SwitchLights();
}

void AMapLoader::SwitchLights()
{
	GreenLight->SetHiddenInGame(!bTeleportAllowed);
	RedLight->SetHiddenInGame(bTeleportAllowed);
}


