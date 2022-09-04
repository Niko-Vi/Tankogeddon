// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorSpawnerWidget.h"

#include "Kismet/GameplayStatics.h"

void UActorSpawnerWidget::NativePreConstruct()
{
	Super::NativePreConstruct();

	if(Item)
	{
		Item->SetText(FText::FromString(ItemName));
	}
}

void UActorSpawnerWidget::NativeConstruct()
{
	Super::NativeConstruct();

	APlayerController* PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	TankController = Cast<ATankController>(PlayerController);
	if(TankController)
	{
		TankController->OnMouseButtonUp.AddUObject(this, &ThisClass::OnMouseButtonUp);
	}
}

void UActorSpawnerWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	if(SpawnedActor && TankController)
	{
		FVector WorldMousePosition;
		FVector WorldMouseDirection;
		TankController->DeprojectMousePositionToWorld(WorldMousePosition, WorldMouseDirection);

		FCollisionQueryParams Params;
		Params.AddIgnoredActor(SpawnedActor);
		Params.AddIgnoredActor(TankController->GetPawn());

		FHitResult OnHit;
		constexpr float distance = 10000.f;
		GetWorld()->LineTraceSingleByChannel(OnHit, WorldMousePosition, WorldMousePosition + WorldMouseDirection * distance, ECollisionChannel::ECC_Visibility, Params);

		if(OnHit.bBlockingHit)
		{
			SpawnedActor->SetActorLocation(OnHit.Location);
		}
		
	}
}

FReply UActorSpawnerWidget::NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
	if(InMouseEvent.IsMouseButtonDown(EKeys::LeftMouseButton))
	{
		SpawnedActor = GetWorld()->SpawnActor<AActor>(SpawnClass);
	}
	return  FReply::Handled();
}

void UActorSpawnerWidget::OnMouseButtonUp()
{
	SpawnedActor = nullptr;
}
