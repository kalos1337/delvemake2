// Fill out your copyright notice in the Description page of Project Settings.


#include "Chunk.h"

UChunk::UChunk()
{

}

bool UChunk::InitializeChunk(const unsigned Width, const unsigned Height, const unsigned Depth)
{
	// Save dimensions into a struct for cleaner access.
	ChunkDimensions.Width = Width;
	ChunkDimensions.Height = Height;
	ChunkDimensions.Depth = Depth;

	Blocks.SetNum(Width);
	for (unsigned X = 0; X < Width; X++)
	{
		Blocks[X].SetNum(Height);
		for (unsigned Y = 0; Y < Height; Y++)
		{
			Blocks[X][Y].SetNum(Depth);
			for (unsigned Z = 0; Z < Depth; Z++)
			{
				// Create and initialize ABlock instances within the chunk
				ABlock* NewBlock = NewObject<ABlock>();
				// Customize NewBlock as needed based on the grid position
                // For example, set its location within the world
                // NewBlock->SetActorLocation(FVector(X * BlockSize, Y * BlockSize, Z * BlockSize));
			    Blocks[X][Y][Z] = NewBlock;
			}
		}
	}

	return true;
}

/**
 * @brief Returns pointer to Block instance at given coordinates in chunk
 *
 * @param X
 * @param Y
 * @param Z
 */
ABlock* UChunk::GetBlock(const unsigned X, const unsigned Y, const unsigned Z)
{
	if (X <= ChunkDimensions.Width && Y <= ChunkDimensions.Height && Z < +ChunkDimensions.Depth)
	{
		return Blocks[X][Y][Z];
	}
	
	return nullptr;
}