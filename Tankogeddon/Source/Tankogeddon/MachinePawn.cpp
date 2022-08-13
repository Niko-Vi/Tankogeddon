

#include "MachinePawn.h"

#include "HealthComponent.h"
#include "Components/ArrowComponent.h"
#include "Components/AudioComponent.h"
#include "Components/BoxComponent.h"
#include "Particles/ParticleSystemComponent.h"


AMachinePawn::AMachinePawn()
{
 	
	PrimaryActorTick.bCanEverTick = false;

	BodyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BodyMesh"));
	RootComponent = BodyMesh;
	
	TurretMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("HeadMesh"));
	TurretMesh->SetupAttachment(BodyMesh);

	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollider"));
	BoxComponent->SetupAttachment(BodyMesh);

	CannonSetupPoint = CreateDefaultSubobject<UArrowComponent>(TEXT("CannonSetupPoint"));
	CannonSetupPoint->SetupAttachment(TurretMesh);
	
	HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComponent"));
	HealthComponent->OnDie.AddUObject(this, &AMachinePawn::Destroyed);
	HealthComponent->OnHealthChanged.AddUObject(this, &AMachinePawn::DamageTaken);

	MachineDestroyEffect = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("DestroyEffect"));
	MachineDestroySound = CreateDefaultSubobject<UAudioComponent>(TEXT("DestroySound"));
	DamageTakenSound = CreateDefaultSubobject<UAudioComponent>(TEXT("DamageTakenSound"));
}

void AMachinePawn::TakeDamage(FDamageData DamageData)
{
	HealthComponent->TakeDamage(DamageData);
}

int AMachinePawn::GetPoints()
{
	return ScoreValue;
}

void AMachinePawn::BeginPlay()
{
	Super::BeginPlay();

	SetupCannon(CannonClass);
}

void AMachinePawn::Destroyed()
{
	Super::Destroyed();

	if(Cannon)
	{
		Cannon->Destroy();
	}
	if(MachineDestroyEffect)
	{
		MachineDestroyEffect->ActivateSystem();
	}
	if(MachineDestroySound)
	{
		MachineDestroySound->Play();
	}
	
	Die();
}

void AMachinePawn::Die()
{
	Destroy();
}

void AMachinePawn::AddAndShowScore(int Value)
{
	CurrentScores += Value;
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Cyan, FString::Printf(TEXT("Current score %d"), CurrentScores));
}

float AMachinePawn::GetCurrentHealth()
{
	if(HealthComponent)
	{
		return HealthComponent->GetHealthState();
	}
	return 0;
}



void AMachinePawn::DamageTaken(float DamageValue)
{
	if(DamageTakenSound)
	{
		DamageTakenSound->Play();
	}
	UE_LOG(LogTemp, Warning, TEXT("%s taken %f damage,  Health: %f"), *GetName(), DamageValue, HealthComponent->GetHealth());
}


void AMachinePawn::Fire()
{
	if(Cannon)
	{
		Cannon->Fire();
	}
}

void AMachinePawn::SetupCannon(TSubclassOf<ACannon> NewCannonClass)
{
	if(!NewCannonClass)
	{
		return;
	}
	if(Cannon)
	{		
		Cannon->Destruct();
	}
	FActorSpawnParameters params;
	params.Instigator = this;
	params.Owner = this;

	Cannon = GetWorld()->SpawnActor<ACannon>(NewCannonClass, params);
	Cannon->SetOwner(this);
	Cannon->ScoreChanged.AddUObject(this, &AMachinePawn::AddAndShowScore);

	Cannon->AttachToComponent(CannonSetupPoint, FAttachmentTransformRules::SnapToTargetIncludingScale);
}




