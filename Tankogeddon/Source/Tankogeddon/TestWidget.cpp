
#include "TestWidget.h"

#include "SRadioButtonsWidget.h"

void UTestWidget::NativeConstruct()
{
	Super::NativeConstruct();

	
	
	if(RadioButtonsHost)
	{
		RadioButtonsHost->SetContent(SNew(SRadioButtonsWidget)
			.Count(CheckboxCountOnStart)
			.Style(&WidgetStyle));
		
	}
}

void UTestWidget::ReleaseSlateResources(bool bReleaseChildren)
{
	Super::ReleaseSlateResources(bReleaseChildren);
	
}
