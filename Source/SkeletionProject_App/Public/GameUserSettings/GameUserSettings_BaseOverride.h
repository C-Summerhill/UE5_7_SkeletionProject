// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameUserSettings.h"
#include "GameUserSettings_BaseOverride.generated.h"

/**
 * 
 */
UCLASS()
class SKELETIONPROJECT_APP_API UGameUserSettings_BaseOverride : public UGameUserSettings
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "GameUserSettings")
	static UGameUserSettings_BaseOverride* GetGameUserSettingsOverride();
};