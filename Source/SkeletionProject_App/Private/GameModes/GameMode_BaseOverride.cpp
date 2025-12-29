// Fill out your copyright notice in the Description page of Project Settings.

#include "GameModes/GameMode_BaseOverride.h"

#include "Characters/Character_BaseOverride.h"
#include "HUDs/HUD_BaseOverride.h"

AGameMode_BaseOverride::AGameMode_BaseOverride()
{
	DefaultPawnClass = ACharacter_BaseOverride::StaticClass();
	HUDClass = AHUD_BaseOverride::StaticClass();
}