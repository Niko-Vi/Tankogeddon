// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TestSlateWidgetStyle.h"
#include "Blueprint/UserWidget.h"
#include "Components/NativeWidgetHost.h"
#include "TestWidget.generated.h"

/**
 * 
 */
UCLASS()
class TANKOGEDDON_API UTestWidget : public UUserWidget
{
	GENERATED_BODY()

	virtual void NativeConstruct() override;

	virtual void ReleaseSlateResources(bool bReleaseChildren) override;

	UPROPERTY(EditAnywhere, Category = "Appearance", Meta = (DisplayName=Style))
	FTestSlateStyle WidgetStyle;

	UPROPERTY(EditAnywhere, Category = "Checkbox")
	int32 CheckboxCountOnStart = 5;
	
protected:

	UPROPERTY(BlueprintReadWrite, meta = (BindWidgetOptional))
	UNativeWidgetHost* RadioButtonsHost;
};
