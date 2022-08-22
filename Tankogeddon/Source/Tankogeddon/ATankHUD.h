#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "ATankHUD.generated.h"

/**
HUD and widget manager
 */


UENUM()
enum class EWidgetID : uint8
{
	Widget_MainMenu = 0,
	Widget_InGameHUD = 1,
	Widget_DeathScreen = 2
};


UCLASS()
class TANKOGEDDON_API AATankHUD : public AHUD
{
	GENERATED_BODY()

public:	

	UFUNCTION(BlueprintCallable)
	UUserWidget* ShowWidget(const EWidgetID WidgetID, const int32 ZOrder = 0);

	UFUNCTION(BlueprintCallable)
	void HideWidget();

	UFUNCTION(BlueprintCallable)
	UUserWidget* GetCurrentWidget() const { return CurrentWidget; }

protected:

	UUserWidget* CreateWidgetByClass(const TSubclassOf<UUserWidget> WidgetClass, const int32 ZOrder = 0);

	UPROPERTY(EditAnywhere)
	TMap<EWidgetID, TSubclassOf<UUserWidget>> WidgetClasses;
	
	UPROPERTY()
	UUserWidget* CurrentWidget;
	
};
