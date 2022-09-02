// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TestSlateWidgetStyle.h"
#include "Widgets/SCompoundWidget.h"
#include "Widgets/Input/SSpinBox.h"

/**
 * Slate radio buttons
 */
DECLARE_DELEGATE_OneParam(FOnRadioButtonsChanged, int32 /*New Selected Button Index*/)

class TANKOGEDDON_API SRadioButtonsWidget : public SCompoundWidget
{
public:
	
	SLATE_BEGIN_ARGS(SRadioButtonsWidget)
	{}

	SLATE_ATTRIBUTE(int32, Count);

	SLATE_EVENT(FOnRadioButtonsChanged, OnRadioButtonsChanged);

	SLATE_STYLE_ARGUMENT(FTestSlateStyle, Style);
	
	SLATE_END_ARGS()

	/** Constructs this widget with InArgs */
	void Construct(const FArguments& InArgs);

	//UPROPERTY(BlueprintAssignable, Category = "RadioButtons | Event")
	FOnRadioButtonsChanged OnRadioButtonsChanged;

	virtual int32 OnPaint(
		const FPaintArgs& Args,
		const FGeometry& AllottedGeometry,
		const FSlateRect& MyCullingRect,
		FSlateWindowElementList& OutDrawElements,
		int32 LayerId,
		const FWidgetStyle& InWidgetStyle,
		bool bParentEnabled) const override;


protected:

	mutable  int32 CurrentVBoxSlots = 0;
	
	int32 Count = 3;

	TSharedPtr<SSpinBox<int32>> SpinBox;

	void CountChanged(int32 count);
	
	TSharedPtr<SVerticalBox> Holder;	

	TSharedRef<SWidget> CreateCheckbox(int32 InIndex, FString InText) const;

	mutable int32 CurrentIndex = 0;

	ECheckBoxState IsChecked(int32 InIndex) const;

	void OnCheckboxStateChanged(ECheckBoxState newState, int32 InIndex) const;

	const FCheckBoxStyle* CheckBoxStyle = nullptr;

	const FTextBlockStyle* TextBlockStyle = nullptr;
	
};


