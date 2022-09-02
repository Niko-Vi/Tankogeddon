// Fill out your copyright notice in the Description page of Project Settings.


#include "TestSlateWidgetStyle.h"

#include "MyCoreStyle.h"

FTestSlateStyle::FTestSlateStyle()
{
	CheckBoxStyle = FCoreStyle::Get().GetWidgetStyle<FCheckBoxStyle>("RadioButton");
	TextBlockStyle = FCoreStyle::Get().GetWidgetStyle<FTextBlockStyle>("NormalText");
	SpinBoxStyle = FCoreStyle::Get().GetWidgetStyle<FSpinBoxStyle>("SpinBox");	

	ButtonStyle = FCoreStyle::Get().GetWidgetStyle<FButtonStyle>("Button");
}

FTestSlateStyle::~FTestSlateStyle()
{
}

const FName FTestSlateStyle::TypeName(TEXT("FTestSlateStyle"));

const FTestSlateStyle& FTestSlateStyle::GetDefault()
{
	static FTestSlateStyle Default;
	return Default;
}

void FTestSlateStyle::GetResources(TArray<const FSlateBrush*>& OutBrushes) const
{
	// Add any brush resources here so that Slate can correctly atlas and reference them

	FSlateWidgetStyle::GetResources(OutBrushes);

	CheckBoxStyle.GetResources(OutBrushes);
	TextBlockStyle.GetResources(OutBrushes);
	SpinBoxStyle.GetResources(OutBrushes);
	
	ButtonStyle.GetResources(OutBrushes);
}

