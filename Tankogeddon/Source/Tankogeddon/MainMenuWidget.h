// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TestSlateWidgetStyle.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "MainMenuWidget.generated.h"

/**
 * 
 */
UCLASS()
class TANKOGEDDON_API UMainMenuWidget : public UUserWidget
{
	GENERATED_BODY()

public:

	virtual void NativeConstruct() override;

	//virtual void ReleaseSlateResources(bool bReleaseChildren) override;

	UPROPERTY(EditAnywhere, Category = "Appearance", Meta = (DisplayName=Style))
	FTestSlateStyle WidgetStyle;
	
	UPROPERTY(meta = (BindWidget))
	UButton* PlayButton;
	
	UPROPERTY(meta = (BindWidget))
	UButton* SettingsButton;
	
	UPROPERTY(meta = (BindWidget))
	UButton* AboutButton;

	UPROPERTY(meta = (BindWidget))
	UButton* ExitButton;
	
	
};
