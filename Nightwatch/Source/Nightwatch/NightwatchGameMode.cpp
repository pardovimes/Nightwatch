// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "NightwatchGameMode.h"
#include "NightwatchCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANightwatchGameMode::ANightwatchGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
