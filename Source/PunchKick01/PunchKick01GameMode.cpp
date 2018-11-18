// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "PunchKick01GameMode.h"
#include "PunchKick01Character.h"
#include "UObject/ConstructorHelpers.h"

APunchKick01GameMode::APunchKick01GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
