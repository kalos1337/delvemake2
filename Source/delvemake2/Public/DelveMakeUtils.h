// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

const float PLAYER_JUMP_COEFFICIENT = 1.25f;
const FVector PLAYER_SPAWN_POINT(800, 800, 10000);

const float DIRT_DESTRUCTION_TIME = 0.2f;
const float WOOD_DESTRUCTION_TIME = 0.5f;
const float ROCK_DESTRUCTION_TIME = 0.75f;
const float ORE_DESTRUCTION_TIME = 1.0f;

// 3D block grid edge
const float BLOCK_EDGE_LENGTH = 100.0f;
// Length of chunk edge in blocks
const unsigned CHUNK_EDGE_LENGTH = 16;
const unsigned MINIMUM_CHUNK_HEIGHT = 1;
const unsigned MAXIMUM_CHUNK_HEIGHT = 10;
// Range for placing blocks/destroying blocks
const float MAXIMUM_PLAYER_RANGE = 300.0f;
// Edge length of our world in chunks
const unsigned WORLD_CHUNK_EDGE_LENGTH = 3;

const int CHUNK_EDGE_UE_UNITS = CHUNK_EDGE_LENGTH * (int)BLOCK_EDGE_LENGTH;
const unsigned TOTAL_CHUNK_COUNT = WORLD_CHUNK_EDGE_LENGTH * WORLD_CHUNK_EDGE_LENGTH;

const float PERLIN_NOISE_SCALE = 0.05f;
const float PERLIN_NOISE_STRENGTH = 20.0f;
/**
 * 
 */
class DELVEMAKE2_API DelveMakeUtils
{
public:
	static FVector2D UECoordsToChunkCoords(FVector ueCoords);
	static FVector2D UECoordsToBlockCoords(FVector ueCoords);
	static FVector ChunkCoordsToUECoords(FVector2D chunkCoord);
};
