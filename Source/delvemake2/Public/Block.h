// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ImageUtils.h"
#include "DelveMakeUtils.h"

#include "Block.generated.h"

UENUM()
enum EBlockType
{
	Dirt,
	Rock,
	Ore,
	Wood,
	Wireframe
};
// This class represents an individual Block and handles all behavior specific to it.
UCLASS()
class DELVEMAKE2_API ABlock : public AActor
{
	friend class UChunk;
	GENERATED_BODY()
	
public:	
	ABlock();

	UFUNCTION()
	bool SetUpBlockMesh();
	UFUNCTION()
	bool SetUpBlockTypeAndMaterial(const EBlockType BlockType);
	UFUNCTION()
	UChunk* GetChunk();
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* BlockMesh;
	EBlockType CurrentBlockType;

protected:
	virtual void BeginPlay() override;

private:
	unsigned InChunkX, InChunkY, InChunkZ;
	UPROPERTY()
	UChunk* FatherChunk;
	// Dynamic material instance for runtime material changes
	UPROPERTY()
	UMaterialInstanceDynamic* DynamicMaterialInstance;
};
