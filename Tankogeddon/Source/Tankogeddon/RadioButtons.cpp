

#include "RadioButtons.h"

void URadioButtons::ReleaseSlateResources(bool bReleaseChildren)
{
	Super::ReleaseSlateResources(bReleaseChildren);

	RadioButtons.Reset();
}


TSharedRef<SWidget> URadioButtons::RebuildWidget()
{
	RadioButtons = SNew(SRadioButtonsWidget)	
	.Count_UObject(this, &URadioButtons::GetCount)
	.Style(&WidgetStyle)
	.OnRadioButtonsChanged_UObject(this, &URadioButtons::ChosenButtonChanged);
	
	return RadioButtons.ToSharedRef();
}


void URadioButtons::SetCount(int32 NewCount = 5)
{
	Count = NewCount;
}

void URadioButtons::ChosenButtonChanged(int32 NewRadioChoice)
{
	if(OnRadioButtonsChanged.IsBound())
	{
		OnRadioButtonsChanged.Broadcast(NewRadioChoice);
	}
}
