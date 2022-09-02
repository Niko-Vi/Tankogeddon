// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SRadioButtonsWidget.h"
#include "TestSlateWidgetStyle.h"
#include "Components/Widget.h"
#include "RadioButtons.generated.h"

/**
 * SRadioButtons widget wrapper
 */


DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRadioButtonsChange, int32, NewRadioChoice);

UCLASS()
class TANKOGEDDON_API URadioButtons : public UWidget
{
	GENERATED_BODY()

public:

#if WITH_EDITOR
	virtual const FText GetPaletteCategory() override { return FText::FromString(TEXT("Trying slate")); };
#endif
	

	virtual void ReleaseSlateResources(bool bReleaseChildren) override;

	UPROPERTY(BlueprintAssignable)
	FOnRadioButtonsChange OnRadioButtonsChanged;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Checkbox")
	int32 Count = 5;

	UFUNCTION(BlueprintCallable)
	void SetCount(int32 NewCount);
	
protected:

	int32 GetCount() const { return Count; }

	UPROPERTY(EditAnywhere, Category = "Appearance", Meta = (DisplayName=Style))
	FTestSlateStyle WidgetStyle;	

	void ChosenButtonChanged(int32 NewRadioChoice);

	virtual TSharedRef<SWidget> RebuildWidget() override;

	TSharedPtr<SRadioButtonsWidget> RadioButtons;
	
};
