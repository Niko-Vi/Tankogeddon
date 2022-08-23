

#include "ATankHUD.h"

#include "HealthComponent.h"
#include "TankController.h"
#include "TankPawn.h"
#include "Blueprint/UserWidget.h"




void AATankHUD::BeginPlay()
{
	Super::BeginPlay();

	APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
	if(PlayerController)
	{
		ATankController* TankController = Cast<ATankController>(PlayerController);
		if(TankController)
		{
			ATankPawn* TankPawn = TankController->TankPawn;

			if(TankPawn)
			{
				TankPawn->HealthComponent->OnDie.AddUObject(this, &AATankHUD::SetDeathScreen);
			}
		}
	}
}

void AATankHUD::SetDeathScreen()
{
	ShowWidget(EWidgetID::Widget_DeathScreen);
}


UUserWidget* AATankHUD::ShowWidget(const EWidgetID WidgetID, const int32 ZOrder)
{
	HideWidget();

	TSubclassOf<UUserWidget>* WClass = WidgetClasses.Find(WidgetID);

	if(WClass && *WClass)
	{
		CreateWidgetByClass(*WClass, ZOrder);
	}

	return CurrentWidget;
}

void AATankHUD::HideWidget()
{
	if(CurrentWidget)
	{
		CurrentWidget->RemoveFromParent();
		CurrentWidget = nullptr;
	}
}


UUserWidget* AATankHUD::CreateWidgetByClass(const TSubclassOf<UUserWidget> WidgetClass, const int32 ZOrder)
{
	CurrentWidget = CreateWidget(GetOwningPlayerController(), WidgetClass);
	CurrentWidget->AddToViewport(ZOrder);

	
	return  CurrentWidget;
}
