

#include "MainMenuWidget.h"

#include "MyCoreStyle.h"

void UMainMenuWidget::NativeConstruct()
{
	Super::NativeConstruct();

	if(Theme == EColorTheme::Bloody)
	{
		WidgetStyle.ButtonStyle = FMyCoreStyle::Get().GetWidgetStyle<FButtonStyle>("WS_ButtonStyle_Bloody");
	}
	else if(Theme == EColorTheme::Sky)
	{
		WidgetStyle.ButtonStyle = FMyCoreStyle::Get().GetWidgetStyle<FButtonStyle>("WS_ButtonStyle_Sky");
	}
	
	PlayButton->SetStyle(WidgetStyle.ButtonStyle);
	SettingsButton->SetStyle(WidgetStyle.ButtonStyle);
	AboutButton->SetStyle(WidgetStyle.ButtonStyle);
	ExitButton->SetStyle(WidgetStyle.ButtonStyle);
}



