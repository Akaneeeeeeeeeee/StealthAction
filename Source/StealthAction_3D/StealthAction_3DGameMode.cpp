// Copyright Epic Games, Inc. All Rights Reserved.

#include "StealthAction_3DGameMode.h"
#include "StealthAction_3DCharacter.h"
#include "UObject/ConstructorHelpers.h"

AStealthAction_3DGameMode::AStealthAction_3DGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
