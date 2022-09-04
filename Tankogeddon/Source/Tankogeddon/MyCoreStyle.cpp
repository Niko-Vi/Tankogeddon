#include "MyCoreStyle.h"

#include "Slate/SlateGameResources.h"
#include "Styling/SlateStyleMacros.h"

#define IMAGE_BRUSH(RelativePath, ...) FSlateImageBrush(Style->RootToContentDir(RelativePath, TEXT(".png")), __VA_ARGS__)

TSharedPtr<ISlateStyle> FMyCoreStyle::StylePtr;

TSharedPtr<ISlateStyle> CreateStyle()
{
	FString Path = "/Game/UI";

	TSharedPtr<FSlateStyleSet> Style = FSlateGameResources::New(FName("MyCoreStyle"), Path, Path);

	//Style->Set("Red", FLinearColor::Red);
	//Style->Set("DefaultPadding", FMargin(10.f));
	//Style->Set("ButtonBackground", new IMAGE_BRUSH("ButtonBackground", FVector2D(200.f)));

	return Style;
}

#undef IMAGE_BRUSH

void FMyCoreStyle::Initialize()
{
	Shutdown();

	StylePtr = CreateStyle();
	FSlateStyleRegistry::RegisterSlateStyle(*StylePtr);
}

void FMyCoreStyle::Shutdown()
{
	if(StylePtr.IsValid())
	{
		FSlateStyleRegistry::UnRegisterSlateStyle(*StylePtr);
		StylePtr.Reset();
	}
}

const ISlateStyle& FMyCoreStyle::Get()
{
	if(!StylePtr.IsValid())
	{
		Initialize();
	}
	return *StylePtr;
}
