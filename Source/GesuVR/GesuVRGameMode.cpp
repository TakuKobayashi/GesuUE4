// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "GesuVR.h"
#include "GesuVRGameMode.h"
#include "GesuVRHUD.h"
#include "GesuVRCharacter.h"

AGesuVRGameMode::AGesuVRGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AGesuVRHUD::StaticClass();
}
