// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Projectile.h"
#include "UDynamicMesh.h"
#include "ProjectilePool.generated.h"

/**
 * 
 */
UCLASS()
class TANKOGEDDON_API UProjectilePool : public UDynamicMeshPool
{
	GENERATED_BODY()

public:
	
	UProjectilePool();

protected:
	/*UPROPERTY()
	TArray<TObjectPtr<AProjectile>> AllCreatedMeshes;
	
	UPROPERTY()
	TArray<TObjectPtr<AProjectile>> CashedMeshes;*/
	
};
