// Fill out your copyright notice in the Description page of Project Settings.


#include "DelveMakeUtils.h"

FVector2D DelveMakeUtils::UECoordsToChunkCoords(FVector ueCoords)
{
	ueCoords = ueCoords / BLOCK_EDGE_LENGTH / (float)CHUNK_EDGE_LENGTH;
	return FVector2D(FMath::FloorToInt32(ueCoords.X), FMath::FloorToInt32(ueCoords.Y));
}

FVector2D DelveMakeUtils::UECoordsToBlockCoords(FVector ueCoords)
{
	ueCoords = ueCoords / BLOCK_EDGE_LENGTH;
	return FVector2D(ueCoords.X, ueCoords.Y);
}

FVector DelveMakeUtils::ChunkCoordsToUECoords(FVector2D chunkCoord)
{
	auto x = FMath::Floor(chunkCoord.X) * BLOCK_EDGE_LENGTH * (float)CHUNK_EDGE_LENGTH;;
	auto y = FMath::Floor(chunkCoord.Y) * BLOCK_EDGE_LENGTH * (float)CHUNK_EDGE_LENGTH;;

	return FVector(x, y, 0.f);
}


