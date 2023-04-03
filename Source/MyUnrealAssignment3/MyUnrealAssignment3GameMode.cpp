// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyUnrealAssignment3GameMode.h"
#include "MyUnrealAssignment3Character.h"
#include "UObject/ConstructorHelpers.h"

AMyUnrealAssignment3GameMode::AMyUnrealAssignment3GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
