// Copyright Epic Games, Inc. All Rights Reserved.

#include "E01GameMode.h"
#include "E01Character.h"
#include "UObject/ConstructorHelpers.h"

AE01GameMode::AE01GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
