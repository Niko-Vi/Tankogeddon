

#include "TankFactory.h"
#include "Components/AudioComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"


ATankFactory::ATankFactory()
{
 	PrimaryActorTick.bCanEverTick = false;

	USceneComponent* SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	RootComponent = SceneComponent;

	BuildingMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BuildingMesh"));
	BuildingMesh->SetupAttachment(SceneComponent);

	ScrapMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ScrapMesh"));
	ScrapMesh->SetupAttachment(SceneComponent);
	SceneComponent->SetHiddenInGame(true);

	BoxCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
	BoxCollider->SetupAttachment(BuildingMesh);

	TankSpawnPoint = CreateDefaultSubobject<UArrowComponent>(TEXT("TankSpawnPoin"));
	TankSpawnPoint->SetupAttachment(BuildingMesh);

	HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComponent"));
	HealthComponent->OnHealthChanged.AddUObject(this, &ATankFactory::DamageTaken);
	HealthComponent->OnDie.AddUObject(this, &ATankFactory::Die);

	FactoryDestroyEffect = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FactoryDestroyEffect"));
	FactoryDestroySound = CreateDefaultSubobject<UAudioComponent>(TEXT("FactoryDestroySound"));

}

void ATankFactory::BeginPlay()
{
	Super::BeginPlay();

	FTimerHandle SpawnTimer;
	GetWorldTimerManager().SetTimer(SpawnTimer, this, &ATankFactory::SpawnTank, SpawnRate, true, SpawnRate);
}

void ATankFactory::TakeDamage(FDamageData DamageData)
{
	HealthComponent->TakeDamage(DamageData);	
}

void ATankFactory::DamageTaken(float DamageValue)
{
	UE_LOG(LogTemp, Warning, TEXT("%s taken %f damage,  Health: %f"), *GetName(), DamageValue, HealthComponent->GetHealth());

}

void ATankFactory::Die()
{
	bDestroyed = true;
	if(MapLoader)
	{
		MapLoader->Activate(true);
	}
	FactoryDestroyEffect->Activate();
	FactoryDestroySound->Play();
	BuildingMesh->SetHiddenInGame(true);
	ScrapMesh->SetHiddenInGame(false);
	
}

void ATankFactory::SpawnTank()
{
	if(bDestroyed)
	{
		return;
	}
	if(TanksSpawned >= MaximumTanksSpawn)
	{
		return;
	}

	FTransform spawnTransform(TankSpawnPoint->GetComponentRotation(), TankSpawnPoint->GetComponentLocation(), FVector(1));

	AAITankPawn* newTank = GetWorld()->SpawnActorDeferred<AAITankPawn>(SpawnTankClass, spawnTransform, this, nullptr, ESpawnActorCollisionHandlingMethod::AlwaysSpawn);
	newTank->SetPatrolCheckPoints(TankWayPoints);
	UGameplayStatics::FinishSpawningActor(newTank, spawnTransform);
	TanksSpawned++;

}






