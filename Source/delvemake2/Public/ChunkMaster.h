// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Chunk.h"
#include "DelveMakeUtils.h"

#include "ChunkMaster.generated.h"

// Handles all high-level terrain generation  and interactions with terrain
UCLASS()
class DELVEMAKE2_API AChunkMaster : public AActor
{
	friend class ADelveMakeCharacter;
	GENERATED_BODY()
public:
	AChunkMaster();
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:

	UFUNCTION()
	TArray<FVector2D> ComputeChunkCoords(int centerChunkX, int centerChunkY);
	UFUNCTION()
	void InitializeWorld();
	UFUNCTION()
	void UpdateWorld();
	UFUNCTION()
	UChunk* GetChunkAtCoord(const FVector2D Coordinates);
	UFUNCTION()
	void SpawnChunk(UChunk* const SlaveChunk, const FVector& ChunkLocation);

	UPROPERTY()
	TArray<FVector2D> ChunkCoords;
	UPROPERTY()
	TArray<UChunk*> ChunkGrid;
	UPROPERTY()
	FVector2D CentralChunkCoords;

	APawn* PlayerPawn;
};