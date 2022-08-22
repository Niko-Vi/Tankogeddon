

#include "ATankHUD.h"

#include "Blueprint/UserWidget.h"


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
