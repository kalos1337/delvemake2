// Fill out your copyright notice in the Description page of Project Settings.


#include "DelveMakeGameMode.h"
#include "DelveMakeCharacter.h"

ADelveMakeGameMode::ADelveMakeGameMode()
{
	DefaultPawnClass = ADelveMakeCharacter::StaticClass();
}


void ADelveMakeGameMode::BeginPlay()
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Game Mode engaged."));
	}
}
