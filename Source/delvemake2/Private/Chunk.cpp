// Fill out your copyright notice in the Description page of Project Settings.


#include "Chunk.h"

#include "DelveMakeUtils.h"

void UChunk::ConditionalBeginDestroy()
{
	DestroyAllBlocks();
	ChunkBlocks.Reset();
	Super::ConditionalBeginDestroy();
}

UChunk::UChunk()
{
}

// As I am not super confident (yet!) in my knowledge of how constructing works in UE5, I have Chunk initialization done here
void UChunk::InitializeChunk(const FVector2D& NewChunkCoordinates, const unsigned Width, const unsigned MaxHeight, const unsigned Depth)
{
	ChunkCoordinates = NewChunkCoordinates;
	// Save dimensions into a struct for cleaner access.
	ChunkDimensions.Width = Width;
	ChunkDimensions.MaxHeight = MaxHeight;
	ChunkDimensions.Depth = Depth;

	SetUpHeightGrid();
}

// Sets up random height grid for chunk
void UChunk::SetUpHeightGrid()
{
	const double HillSize = 3.;

	// Resize our array to our dimensions
	TerrainHeightGrid.Init(TArray<unsigned>(), ChunkDimensions.Width);
	for (unsigned X = 0; X < ChunkDimensions.Width; X++)
	{
		// Resize
		TerrainHeightGrid[X].Init(0, ChunkDimensions.Depth);
		// Generate random terrain heights for each coordinate
		for (unsigned Y = 0; Y < ChunkDimensions.Depth; Y++)
		{
			double MaxHeightMultiplier = FMath::Sin(X / HillSize) * FMath::Cos(Y / HillSize); // -1 : 1
			MaxHeightMultiplier = MaxHeightMultiplier + 1.;
			MaxHeightMultiplier = MaxHeightMultiplier / 2;

			// Adds a little bit of randomness to our terrain
			double RandomnessCoefficient = FMath::FRandRange(0.8f, 2.0f);

			TerrainHeightGrid[X][Y] = (unsigned)FMath::Clamp(RandomnessCoefficient * MaxHeightMultiplier * (double)(MAXIMUM_CHUNK_HEIGHT), 1, MAXIMUM_CHUNK_HEIGHT - 1);
		}
	}
}

// Spawns a single block at a given @Location
// Mostly used for debugging purposes
void UChunk::PlaceBlock(const FVector& BlockLocationInChunk, EBlockType BlockType)
{
	auto x = FMath::FloorToInt32(BlockLocationInChunk.X);
	auto y = FMath::FloorToInt32(BlockLocationInChunk.Y);
	auto z = FMath::FloorToInt32(BlockLocationInChunk.Z);

	if (x < 0 || x >= 16
		|| y < 0 || y >= 16
		|| z < 0 || z >= MAXIMUM_CHUNK_HEIGHT) {
		UE_LOG(LogTemp, Warning, TEXT("Invalid in-chunk block coordinates, not spawning anything."));
		return;
	}

	for (auto block : ChunkBlocks) {
		if (block->InChunkX == x && block->InChunkY == y && block->InChunkZ == z) {
			UE_LOG(LogTemp, Warning, TEXT("There's already a block, not spawning anything."));
			return;
		}
	}

	UWorld* World = GetWorld();
	if (! World) {
		UE_LOG(LogTemp, Warning, TEXT("Couldn't get world reference, can't spawn block."));
	}

	auto ChunkUeCoords = DelveMakeUtils::ChunkCoordsToUECoords(ChunkCoordinates);

	auto ueBlockCoordinates = ChunkUeCoords + FVector(
		x * BLOCK_EDGE_LENGTH,
		y * BLOCK_EDGE_LENGTH,
		z * BLOCK_EDGE_LENGTH);

	ABlock* NewBlock = World->SpawnActor<ABlock>(ueBlockCoordinates, FRotator::ZeroRotator);

	NewBlock->SetUpBlockTypeAndMaterial(BlockType);

	NewBlock->Rename(nullptr, this);
	NewBlock->InChunkX = x;
	NewBlock->InChunkY = y;
	NewBlock->InChunkZ = z;
	NewBlock->FatherChunk = this;

	ChunkBlocks.Add(NewBlock);
}

void UChunk::DestroyBlock(ABlock * block)
{
	if (ChunkBlocks.RemoveSwap(block) == 1) {
		block->Destroy();
	}
}

void UChunk::DestroyAllBlocks() {
	for (auto block : ChunkBlocks) {
		block->Destroy();
	}
}