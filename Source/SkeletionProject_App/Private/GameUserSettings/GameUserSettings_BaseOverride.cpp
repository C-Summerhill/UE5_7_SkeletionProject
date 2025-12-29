// Fill out your copyright notice in the Description page of Project Settings.


#include "GameUserSettings/GameUserSettings_BaseOverride.h"

UGameUserSettings_BaseOverride* UGameUserSettings_BaseOverride::GetGameUserSettingsOverride()
{
	return Cast<UGameUserSettings_BaseOverride>(GetGameUserSettings());
}