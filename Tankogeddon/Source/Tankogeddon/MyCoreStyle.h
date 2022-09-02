﻿#pragma once

#include "Slate.h"


class TANKOGEDDON_API FMyCoreStyle
{
public:

	static void Initialize();

	static void Shutdown();

	static const ISlateStyle& Get();

private:

	static TSharedPtr<ISlateStyle> StylePtr;
	
};
