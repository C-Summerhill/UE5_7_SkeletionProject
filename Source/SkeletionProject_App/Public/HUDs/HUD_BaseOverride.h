// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Blueprint/UserWidget.h"
#include "HUD_BaseOverride.generated.h"

/**
 * 
 */
UCLASS()
class SKELETIONPROJECT_APP_API AHUD_BaseOverride : public AHUD
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category=HUD)
	TSubclassOf<UUserWidget> HUDWidgetClass;

	TObjectPtr<UUserWidget> HUDWidget = nullptr;
private:
	//Private Functions
	virtual void BeginPlay() override;
	
	void InitializeHUDWidget();

private:
	//Private Variables
};
