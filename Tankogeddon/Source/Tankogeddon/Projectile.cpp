


#include "Projectile.h"

#include "DamageTaker.h"
#include "Scorable.h"

AProjectile::AProjectile()
{
	PrimaryActorTick.bCanEverTick = false;

	USceneComponent* SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));// create scene comp
	RootComponent = SceneComponent;//add scene comp to root comp

	ProjectileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Projectile"));//create mesh comp
	ProjectileMesh->SetupAttachment(SceneComponent);//attach to root/scene
	ProjectileMesh->OnComponentBeginOverlap.AddDynamic(this, &AProjectile::OnMeshOverlapBegin);//leash to overlap method
	ProjectileMesh->SetCollisionObjectType(ECollisionChannel::ECC_GameTraceChannel1);
}

void AProjectile::Start()
{
	GetWorld()->GetTimerManager().SetTimer(MoveTimer, this, &AProjectile::Move, MoveRate, true, MoveRate);
}

void AProjectile::Move()
{
	FVector NextPos = GetActorLocation() + GetActorForwardVector() * MoveSpeed * MoveRate;
	SetActorLocation(NextPos);
}

void AProjectile::OnMeshOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UE_LOG(LogTemp, Warning, TEXT("Projectile collided with %s, collided with component %s"), *OtherActor->GetName(), *OverlappedComp->GetName());

	AActor* owner = GetOwner();
	AActor* OwnerByOwner = (owner != nullptr) ? owner->GetOwner() : nullptr;

	
	
	if(OtherActor != owner && OtherActor != OwnerByOwner)
	{
		Explode();
		/*IDamageTaker* DamageTakerActor = Cast<IDamageTaker>(OtherActor);
		IScorable* ScorableActor = Cast<IScorable>(OtherActor);
		int Scores = 0;

		if(ScorableActor)
		{
			Scores = ScorableActor->GetPoints();
		}
		
		if(DamageTakerActor)
		{
			FDamageData DamageData;
			DamageData.DamageValue = Damage;
			DamageData.Instigator = Owner;
			DamageData.DamageMaker = this;

			DamageTakerActor->TakeDamage(DamageData);

			if(OtherActor->IsActorBeingDestroyed() && Scores != 0)
			{
				if(GotKill.IsBound())
				{
					GotKill.Broadcast(Scores);
				}
			}
		}
		else
		{
			UPrimitiveComponent* mesh = Cast<UPrimitiveComponent>(OtherActor->GetRootComponent());
			if (mesh)
			{
				if (mesh->IsSimulatingPhysics())
				{
					FVector forceVector = OtherActor->GetActorLocation() - GetActorLocation();
					forceVector.Normalize();
					//mesh->AddImpulse(forceVector * PushForce, NAME_None, true);
					mesh->AddForce(forceVector * PushForce);
				}
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("Mesh is not vallid"));
			}
			//OtherActor->Destroy();
		}*/
	}
	
	Deactivate();
}

void AProjectile::Explode()
{
	if(!bExplosive)
	{
		return;
	}
	
	FVector startPos = GetActorLocation();
	FVector endPos = startPos + FVector(0.1f);

	FCollisionShape Shape = FCollisionShape::MakeSphere(ExplodeRadius);
	FCollisionQueryParams params = FCollisionQueryParams::DefaultQueryParam;
	params.AddIgnoredActor(this);
	params.bTraceComplex = true;
	params.TraceTag = "Explode trace";

	TArray<FHitResult> AttachHit;

	FQuat Rotation = FQuat::Identity;

	bool bSweepResult = GetWorld()->SweepMultiByChannel(AttachHit,
		startPos,
		endPos,
		Rotation,
		ECollisionChannel::ECC_Visibility,
		Shape,
		params);
	DrawDebugSphere(GetWorld(), startPos, ExplodeRadius, 5, FColor::Magenta, false, 2.0f);

	if(bSweepResult)
	{
		for (FHitResult hitResult : AttachHit)
		{
			AActor* OtherActor = hitResult.GetActor();
			if(!OtherActor)
			{
				continue;
			}
			MakeThings(OtherActor);
		}
	}
}

void AProjectile::MakeThings(AActor* OtherActor)
{
	IDamageTaker* damageTakerActor = Cast<IDamageTaker>(OtherActor);
	if(damageTakerActor)
	{
		IScorable* ScorableActor = Cast<IScorable>(OtherActor);
		int Scores = 0;

		if(ScorableActor)
		{
			Scores = ScorableActor->GetPoints();
		}
		FDamageData damageData;
		damageData.DamageValue = Damage;
		damageData.Instigator = GetOwner();
		damageData.DamageMaker = this;

		damageTakerActor->TakeDamage(damageData);

		if(OtherActor->IsActorBeingDestroyed() && Scores != 0)
		{
			if(GotKill.IsBound())
			{
				GotKill.Broadcast(Scores);
			}
		}
				
	}
	else
	{
		UPrimitiveComponent* mesh = Cast<UPrimitiveComponent>(OtherActor->GetRootComponent());
		if(mesh)
		{
			if(mesh->IsSimulatingPhysics())
			{
				FVector forceVector = OtherActor->GetActorLocation() - GetActorLocation();
				forceVector.Normalize();
				mesh->AddImpulse(forceVector * PushForce, NAME_None, true);
			}
		}
	}
}


