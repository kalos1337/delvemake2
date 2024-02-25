// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Block.h"
#include "DelveMakeUtils.h"

#include "ChunkMaster.generated.h"

UCLASS()
class DELVEMAKE2_API AChunkMaster : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AChunkMaster();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	ABlock* SpawnBlock(const FVector& Location);
	void SpawnChunk(const FVector& Location);
	
	void GenerateChunk();

	bool GetCubeEdge();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	float CubeEdgeLength;

};
