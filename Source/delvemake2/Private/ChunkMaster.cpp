// Fill out your copyright notice in the Description page of Project Settings.


#include "ChunkMaster.h"

// Sets default values
AChunkMaster::AChunkMaster() : 
	PlayerPawn(nullptr)
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;
}

// Encapsulation of computing Chunk coordinates in ChunkSpace
TArray<FVector2D> AChunkMaster::ComputeChunkCoords(int CenterChunkX, int CenterChunkY)
{
	// 9 chunks, we generate from bottom left to top right
	// Middle chunk is 0,0
	TArray<FVector2D> Result;

	auto Half = FMath::FloorToInt32((float)WORLD_CHUNK_EDGE_LENGTH / 2.f);
	for (int X = CenterChunkX - Half; X < CenterChunkX + Half + 1; X++)
	{
		for (int Y = CenterChunkY - Half; Y < CenterChunkY + Half + 1; Y++)
		{
			FVector2D NewChunkCoord(X, Y);
			UE_LOG(LogTemp, Warning, TEXT("Chunk Coord Computed at %f %f"), NewChunkCoord.X, NewChunkCoord.Y);
			Result.Add(NewChunkCoord);
		}
	}

	return Result;
}

// As I am not super confident (yet!) in my knowledge of how constructing works in UE5, I have Chunk initialization done here
void AChunkMaster::InitializeWorld()
{
	for (unsigned i = 0; i < TOTAL_CHUNK_COUNT; ++i)
	{
		if (ChunkGrid[i] != nullptr) 
		{
			continue;
		}

		ChunkGrid[i] = NewObject<UChunk>(this);
		ChunkGrid[i]->InitializeChunk(ChunkCoords[i], CHUNK_EDGE_LENGTH, MAXIMUM_CHUNK_HEIGHT, CHUNK_EDGE_LENGTH);

		FVector ChunkCoord3D;
		ChunkCoord3D.X = ChunkCoords[i].X * CHUNK_EDGE_UE_UNITS;
		ChunkCoord3D.Y = ChunkCoords[i].Y * CHUNK_EDGE_UE_UNITS;
		ChunkCoord3D.Z = 0;

		SpawnChunk(ChunkGrid[i], ChunkCoord3D);

		UE_LOG(LogTemp, Warning, TEXT("Spawned Chunk at %f %f %f"), ChunkCoord3D.X, ChunkCoord3D.Y, ChunkCoord3D.Y);
	}
}

void AChunkMaster::UpdateWorld()
{
	auto PlayerChunkCoords = DelveMakeUtils::UECoordsToChunkCoords(PlayerPawn->GetActorLocation());
	auto OldCentralChunkCoords = CentralChunkCoords;
	auto OldChunkCoords = ChunkCoords;
	auto OldChunkGrid = ChunkGrid;

	CentralChunkCoords = PlayerChunkCoords;
	ChunkCoords = ComputeChunkCoords((int)CentralChunkCoords.X, (int)CentralChunkCoords.Y);
	ChunkGrid = TArray<UChunk*>();
	ChunkGrid.SetNum(TOTAL_CHUNK_COUNT);

	for (size_t i = 0; i < ChunkCoords.Num(); i++)
	{
		for (size_t y = 0; y < OldChunkCoords.Num(); y++) {
			if (ChunkCoords[i] == OldChunkCoords[y]) {
				ChunkGrid[i] = OldChunkGrid[y];
				OldChunkGrid[y] = nullptr;
			}
		}
	}

	for (auto oldChunkToPotentiallyDelete : OldChunkGrid) {
		if (oldChunkToPotentiallyDelete != nullptr) {
			// For saving on per chunk basis, now we could add some code to even of UChunk destroy to first save it to disk
			oldChunkToPotentiallyDelete->ConditionalBeginDestroy();
		}
	}

	InitializeWorld();
}

UChunk* AChunkMaster::GetChunkAtCoord(const FVector2D Coordinates)
{
	for (auto Element : ChunkGrid)
	{
		if (Element->ChunkCoordinates == Coordinates)
		{
			return Element;
		}
	}

	return nullptr;
}

// Called when the game starts or when spawned
void AChunkMaster::BeginPlay()
{
	Super::BeginPlay();

	CentralChunkCoords = FVector2D(0, 0);
	ChunkCoords = ComputeChunkCoords(CentralChunkCoords.X, CentralChunkCoords.Y);
	ChunkGrid.SetNum(TOTAL_CHUNK_COUNT);
	InitializeWorld();

	// Get reference to player pawn
	APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
	if (PlayerController)
	{
		APawn* PlayerCharacter = Cast<APawn>(PlayerController->GetPawn());
		PlayerPawn = PlayerCharacter;
	}
}

// Called every frame
void AChunkMaster::Tick(float DeltaTime)
{
	static float ChunkPositionTicker = 0;
	static float ChunkSpawnTicker = 0;

	Super::Tick(DeltaTime);

	if (PlayerPawn != nullptr) {
		ChunkPositionTicker += DeltaTime;
		ChunkSpawnTicker += DeltaTime;
		if (ChunkPositionTicker > 1) {
			ChunkPositionTicker = 0;

			
			FVector PlayerLocation = PlayerPawn->GetActorLocation();
			auto chunkCoords = DelveMakeUtils::UECoordsToChunkCoords(PlayerLocation);
			auto blockCoords = DelveMakeUtils::UECoordsToBlockCoords(PlayerLocation);

			auto Message = FString::Printf(TEXT("Player Block Coord: %f %f"), blockCoords.X, blockCoords.Y);
			auto Message2 = FString::Printf(TEXT("Player Chunk Coord: %d %d"), FMath::FloorToInt32(chunkCoords.X), FMath::FloorToInt32(chunkCoords.Y));
			GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Purple, Message);
			GEngine->AddOnScreenDebugMessage(-2, 1.f, FColor::Green, Message2);
		}

		if (ChunkSpawnTicker > 0.05f) {
			ChunkSpawnTicker = 0;
			auto playerChunkCoords = DelveMakeUtils::UECoordsToChunkCoords(PlayerPawn->GetActorLocation());
			if (playerChunkCoords != CentralChunkCoords) {
				UpdateWorld();
			}
		}
	}


}

// Spawns a given chunk into the world space
void AChunkMaster::SpawnChunk(UChunk* const SlaveChunk,const FVector& ChunkLocation)
{
	for (unsigned X = 0; X < SlaveChunk->ChunkDimensions.Width; ++X)
	{
		for (unsigned Y = 0; Y < SlaveChunk->ChunkDimensions.Depth; ++Y)
		{
			const unsigned HeightAtCoord = SlaveChunk->TerrainHeightGrid[X][Y];
			for (unsigned Z = 0; Z < HeightAtCoord; ++Z)
			{
				EBlockType TypeToSpawn;

				if (Z < 2)
				{
					TypeToSpawn = EBlockType::Ore;
				}
				else if (Z < 4)
				{
					TypeToSpawn = EBlockType::Rock;
				}
				else if (Z < 6)
				{
					TypeToSpawn = EBlockType::Dirt;
				}
				else 
				{
					TypeToSpawn = EBlockType::Wood;
				}

				SlaveChunk->PlaceBlock(FVector(X, Y, Z), TypeToSpawn);
			}
		}
	}
}



