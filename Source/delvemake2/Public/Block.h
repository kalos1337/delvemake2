// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Block.generated.h"

enum EBlockType
{
	Dirt,
	Rock,
	Bush,
	Ore
};

UCLASS()
class DELVEMAKE2_API ABlock : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABlock();

	bool SetUpBlockMesh();

	EBlockType BlockType;
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* BlockMesh;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
