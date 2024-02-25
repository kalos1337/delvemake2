// Fill out your copyright notice in the Description page of Project Settings.


#include "ChunkMaster.h"

// Sets default values
AChunkMaster::AChunkMaster()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void AChunkMaster::BeginPlay()
{
	Super::BeginPlay();

	// Should spawn a plain block at given debug location.
	FVector DebugBlockLocation(40.0f, 40.0f, 40.0f);
	SpawnBlock(FVector(40.0f, 40.0f, 40.0f));	
}

// Called every frame
void AChunkMaster::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Spawns a single block at a given @Location
// Mostly used for debugging purposes
ABlock* AChunkMaster::SpawnBlock(const FVector& Location)
{
	UWorld* World = GetWorld();
	if (! World) {
		UE_LOG(LogTemp, Warning, TEXT("Couldn't get world reference, can't spawn block."));
	}

	ABlock* NewBlock = World->SpawnActor<ABlock>(Location, FRotator::ZeroRotator);
	return NewBlock;
}

void AChunkMaster::SpawnChunk(const FVector& Location)
{
}

void AChunkMaster::GenerateChunk()
{}



