// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "Chunk.h"

#include "DelveMakeSave.generated.h"

/**
 * 
 */
UCLASS()
class DELVEMAKE2_API UDelveMakeSave : public USaveGame
{
	GENERATED_BODY()
public:
	UPROPERTY(VisibleAnywhere)
	FVector PlayerLocation;
	UPROPERTY(VisibleAnywhere)
	FRotator CameraRotation;
	UPROPERTY()
	TArray<UChunk*> SavedChunks;
	UPROPERTY(VisibleAnywhere);
	TArray<FVector2D> SavedChunkCoords;
	UPROPERTY(VisibleAnywhere);
	FVector2D SavedCentralChunkCoords;
};
