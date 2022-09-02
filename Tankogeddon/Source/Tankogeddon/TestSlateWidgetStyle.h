// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Styling/SlateWidgetStyle.h"
#include "Styling/SlateWidgetStyleContainerBase.h"

#include "TestSlateWidgetStyle.generated.h"

/**
 * Test style for radio buttons
 */
USTRUCT()
struct TANKOGEDDON_API FTestSlateStyle : public FSlateWidgetStyle
{
	GENERATED_USTRUCT_BODY()

	FTestSlateStyle();
	virtual ~FTestSlateStyle();

	UPROPERTY(EditAnywhere, Category = "Appearance")
	FCheckBoxStyle CheckBoxStyle;
	
	UPROPERTY(EditAnywhere, Category = "Appearance")
	FTextBlockStyle TextBlockStyle;
	
	UPROPERTY(EditAnywhere, Category = "Appearance")
	FSpinBoxStyle SpinBoxStyle;

	UPROPERTY(EditAnywhere, Category = "Appearance")
	FButtonStyle ButtonStyle;
	
	// FSlateWidgetStyle
	virtual void GetResources(TArray<const FSlateBrush*>& OutBrushes) const override;
	static const FName TypeName;
	virtual const FName GetTypeName() const override { return TypeName; };
	static const FTestSlateStyle& GetDefault();
};

/**
 */
UCLASS(hidecategories=Object, MinimalAPI)
class UTestSlateWidgetStyle : public USlateWidgetStyleContainerBase
{
	GENERATED_BODY()

public:
	/** The actual data describing the widget appearance. */
	UPROPERTY(Category=Appearance, EditAnywhere, meta=(ShowOnlyInnerProperties))
	FTestSlateStyle WidgetStyle;

	virtual const struct FSlateWidgetStyle* const GetStyle() const override
	{
		return static_cast< const struct FSlateWidgetStyle* >( &WidgetStyle );
	}
};
