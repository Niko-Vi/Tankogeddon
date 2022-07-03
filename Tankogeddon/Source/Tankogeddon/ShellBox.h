// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ShellBox.generated.h"

UCLASS()
class TANKOGEDDON_API AShellBox : public AActor
{
	GENERATED_BODY()
	
public:	
	
	AShellBox();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
	class UStaticMeshComponent* ShellMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	uint8 Ammo = 10;

	UFUNCTION()
	void OnMeshOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
			UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const
			FHitResult& SweepResult);
};
