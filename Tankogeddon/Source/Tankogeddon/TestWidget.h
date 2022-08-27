// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
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
	
protected:

	UPROPERTY(BlueprintReadWrite, meta = (BindWidgetOptional))
	UNativeWidgetHost* RadioButtonsHost;
};
