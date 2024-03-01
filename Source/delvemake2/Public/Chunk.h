// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Block.h"

#include "Chunk.generated.h"

USTRUCT()
struct FChunkDimensions
{
	GENERATED_BODY()

	UPROPERTY()
	unsigned Width;
	UPROPERTY()
	unsigned MaxHeight;
	UPROPERTY()
	unsigned Depth;
};

using FTerrainHeightGrid = TArray<TArray<unsigned>>;

// This class represents a chunk of blocks and handles placement and destruction
UCLASS()
class DELVEMAKE2_API UChunk : public UObject
{
	friend class ADelveMakeCharacter;
	GENERATED_BODY()
	friend class AChunkMaster;

protected:
	virtual void ConditionalBeginDestroy();

public:
	UChunk();

	void InitializeChunk(const FVector2D& NewChunkCoordinates, const unsigned Width, const unsigned MaxHeight, const unsigned Depth);
	void PlaceBlock(const FVector& BlockLocation, EBlockType BlockType);
	void DestroyBlock(ABlock* block);
	void DestroyAllBlocks();

private:
	void SetUpHeightGrid();

	FTerrainHeightGrid TerrainHeightGrid;
	FChunkDimensions ChunkDimensions;
	float BlockEdgeLength;
	TArray<ABlock*> ChunkBlocks;
	FVector2D ChunkCoordinates;
};
