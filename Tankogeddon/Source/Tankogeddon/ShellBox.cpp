// Fill out your copyright notice in the Description page of Project Settings.


#include "ShellBox.h"

#include "TankPawn.h"

// Sets default values
AShellBox::AShellBox()
{
	PrimaryActorTick.bCanEverTick = true;

	USceneComponent* AmmoSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	RootComponent = AmmoSceneComponent;

	ShellMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShellMesh"));
	ShellMesh->SetupAttachment(AmmoSceneComponent);
	ShellMesh->OnComponentBeginOverlap.AddDynamic(this, &AShellBox::OnMeshOverlapBegin);
	ShellMesh->SetCollisionProfileName(FName("OverlapAll"));
	ShellMesh->SetCollisionEnabled((ECollisionEnabled::QueryAndPhysics));
	ShellMesh->SetGenerateOverlapEvents(true);
}

// Called when the game starts or when spawned
void AShellBox::OnMeshOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	ATankPawn* TankPawn = Cast<ATankPawn>(OtherActor);

	if(TankPawn)
	{
		TankPawn->AddAmmo(Ammo);
		Destroy();
	}
}

