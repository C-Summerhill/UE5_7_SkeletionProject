// Fill out your copyright notice in the Description page of Project Settings.


#include "HUDs/HUD_BaseOverride.h"

void AHUD_BaseOverride::InitializeHUDWidget()
{
	if (HUDWidgetClass == nullptr)
	{
		return;
	}

	HUDWidget = CreateWidget<UUserWidget>(GetWorld(), HUDWidgetClass);
	HUDWidget->AddToViewport();
}

void AHUD_BaseOverride::BeginPlay()
{
	Super::BeginPlay();
	
	InitializeHUDWidget();
}