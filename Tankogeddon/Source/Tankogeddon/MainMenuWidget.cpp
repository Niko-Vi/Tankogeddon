// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenuWidget.h"

void UMainMenuWidget::NativeConstruct()
{
	Super::NativeConstruct();
	
	PlayButton->SetStyle(WidgetStyle.ButtonStyle);
	SettingsButton->SetStyle(WidgetStyle.ButtonStyle);
	AboutButton->SetStyle(WidgetStyle.ButtonStyle);
	ExitButton->SetStyle(WidgetStyle.ButtonStyle);
}
