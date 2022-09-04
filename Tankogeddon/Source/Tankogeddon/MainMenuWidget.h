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

UENUM()
enum EColorTheme
{
	Classic,
	Bloody,
	Sky
};

UCLASS()
class TANKOGEDDON_API UMainMenuWidget : public UUserWidget
{
	GENERATED_BODY()

public:

	virtual void NativeConstruct() override;
	

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Style theme")
	TEnumAsByte<EColorTheme> Theme;	

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
