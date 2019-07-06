// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Project_Tether_PTGameMode.h"
#include "Project_Tether_PTCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProject_Tether_PTGameMode::AProject_Tether_PTGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
