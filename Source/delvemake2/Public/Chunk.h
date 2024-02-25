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
	unsigned Height;
	UPROPERTY()
	unsigned Depth;
};

/**
 * This class represents a chunk of voxel terrain and handles all high-level behaviors.
 */
UCLASS()
class DELVEMAKE2_API UChunk : public UObject
{
	GENERATED_BODY()

public:
	UChunk();

	// Method to initialize a chunk with given dimensions
	bool InitializeChunk(const unsigned Width, const unsigned Height, const unsigned Depth);

	// Method to get a block at specific coordinates within chunk
	ABlock* GetBlock(const unsigned X, const unsigned Y, const unsigned Z);

private:
	// FIXME: This might not be the best way to do this - 3dimensional array seems weird
    TArray<TArray<TArray<ABlock*>>> Blocks;	
	FChunkDimensions ChunkDimensions;
};
