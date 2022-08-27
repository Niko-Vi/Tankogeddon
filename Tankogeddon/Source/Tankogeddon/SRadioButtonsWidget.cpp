// Fill out your copyright notice in the Description page of Project Settings.


#include "SRadioButtonsWidget.h"
#include "SlateOptMacros.h"
#include "Widgets/Input/SSpinBox.h"

BEGIN_SLATE_FUNCTION_BUILD_OPTIMIZATION

void SRadioButtonsWidget::Construct(const FArguments& InArgs)
{
	OnRadioButtonsChanged = InArgs._OnRadioButtonsChanged;

	if(InArgs._Count.IsSet())
	{
		Count = InArgs._Count.Get();
	}
	
	ChildSlot
	[
		SNew(SVerticalBox)
		+ SVerticalBox::Slot()
		[
			SAssignNew(SpinBox, SSpinBox<int32>)
			.MaxValue(10)
			.MinValue(3)
			.MaxSliderValue(10)
			.MinSliderValue(3)
			.Value(Count)
			.OnValueChanged(this, &SRadioButtonsWidget::CountChanged)
		
		]

		+ SVerticalBox::Slot()
		[
			SAssignNew(Holder, SVerticalBox)
		]
	];

	CurrentVBoxSlots = 0;
	for(int32 i = 0; i < Count; ++i)
	{
		Holder->AddSlot()
		[
			CreateCheckbox(i, TEXT("Option ") + FString::FromInt(i+1))
		];
		CurrentVBoxSlots++;
	}
	
}

int32 SRadioButtonsWidget::OnPaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry,
	const FSlateRect& MyCullingRect, FSlateWindowElementList& OutDrawElements, int32 LayerId,
	const FWidgetStyle& InWidgetStyle, bool bParentEnabled) const
{

	if(Count != CurrentVBoxSlots)
	{
		Holder->ClearChildren();
		
		CurrentVBoxSlots = 0;
		for(int32 i = 0; i < Count; ++i)
		{
			Holder->AddSlot()
			[
				CreateCheckbox(i, TEXT("Option ") + FString::FromInt(i+1))
			];
			CurrentVBoxSlots++;
		}
	}
	
	return SCompoundWidget::OnPaint(Args, AllottedGeometry, MyCullingRect, OutDrawElements, LayerId, InWidgetStyle,
	                                bParentEnabled);
}

TSharedRef<SWidget> SRadioButtonsWidget::CreateCheckbox(int32 InIndex, FString InText) const
{
	return SNew(SCheckBox)
	.IsChecked_Raw(this, &SRadioButtonsWidget::IsChecked, InIndex)
	.OnCheckStateChanged_Raw(this, &SRadioButtonsWidget::OnCheckboxStateChanged, InIndex)
	[
		SNew(STextBlock)
		.Text(FText::FromString(InText))
	];
}

ECheckBoxState SRadioButtonsWidget::IsChecked(int32 InIndex) const
{
	return InIndex == CurrentIndex ? ECheckBoxState::Checked : ECheckBoxState::Unchecked;
}

void SRadioButtonsWidget::OnCheckboxStateChanged(ECheckBoxState newState, int32 InIndex) const
{
	if(newState == ECheckBoxState::Checked)
	{
		CurrentIndex = InIndex;
		OnRadioButtonsChanged.ExecuteIfBound(CurrentIndex);
	}
}

void SRadioButtonsWidget::CountChanged(int32 count)
{
	Count = count;
}



END_SLATE_FUNCTION_BUILD_OPTIMIZATION
