// Fill out your copyright notice in the Description page of Project Settings.


#include "TestSlateWidgetStyle.h"

#include "MyCoreStyle.h"

FTestSlateStyle::FTestSlateStyle()
{
	//Checkbox settings
	CheckBoxStyle = FCoreStyle::Get().GetWidgetStyle<FCheckBoxStyle>("RadioButton");
	CheckBoxStyle.Padding = 1;
	CheckBoxStyle.CheckedForeground = FSlateColor(FColor::Yellow);
	
	//Textblock settings
	TextBlockStyle = FCoreStyle::Get().GetWidgetStyle<FTextBlockStyle>("NormalUnderlinedText"); // not working? 
	TextBlockStyle.SetFontSize(20);
	TextBlockStyle.ColorAndOpacity = FSlateColor(FColor::Yellow);
	
	//Spinbox settings
	SpinBoxStyle = FCoreStyle::Get().GetWidgetStyle<FSpinBoxStyle>("SpinBox");
	SpinBoxStyle.SetForegroundColor(FColor::Red);
	
	FSlateBrush Brush;
	
	Brush.TintColor = FSlateColor(FColor::Yellow);	
	SpinBoxStyle.SetBackgroundBrush(Brush);
	
	SpinBoxStyle.ForegroundColor = 	FSlateColor(FColor::Green);
	
	Brush.TintColor = FSlateColor(FColor::Purple);	
	SpinBoxStyle.HoveredFillBrush = Brush;
	
	SpinBoxStyle.InsetPadding = 10;
	
	Brush.TintColor = FSlateColor(FColor::Cyan);	
	SpinBoxStyle.InactiveFillBrush = Brush;
	
	
	//Button settings
	ButtonStyle = FCoreStyle::Get().GetWidgetStyle<FButtonStyle>("Button");
	ButtonStyle.Normal.TintColor = FSlateColor(FColor::Cyan);
	ButtonStyle.Hovered.TintColor = FSlateColor(FColor::Blue);
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

