// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/CapsuleComponent.h"
#include "Block.h"
#include "DrawDebugHelpers.h"
#include "ChunkMaster.h"
#include "DelveMakeSave.h"
#include "Kismet/GameplayStatics.h"
#include "Components/PrimitiveComponent.h"

#include "DelveMakeCharacter.generated.h"

UCLASS()
class DELVEMAKE2_API ADelveMakeCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ADelveMakeCharacter();
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	//handles moving forward/backward
    UFUNCTION()
    void MoveForward(float Val);
    UFUNCTION()
    void MoveRight(float Val);
	UFUNCTION()
	void OnStartJump();
	UFUNCTION()
	void OnStopJump();
	UFUNCTION()
	bool IsBlockAimedAt(float DeltaTime);
	UFUNCTION()
	void StartDestroyingBlock();
	UFUNCTION()
	void StopDestroyingBlock();
	UFUNCTION()
	void SwapToNextBlock();
	UFUNCTION()
	void SaveGame();
	UFUNCTION()
	void LoadGame();
	UFUNCTION()
	AChunkMaster* FindWorldChunkMaster();


	UFUNCTION()
	void DestroyBlock();
	UFUNCTION()
	void PlaceBlock();
	UFUNCTION()
	void PlaceWireframeBlock(FVector HitBlockLocation, FVector SurfaceNormal);

	EBlockType BlockAimedAt;
	EBlockType BlockToPlace;
	AChunkMaster* WorldChunkMaster;
	UPROPERTY()
	ABlock* WireframeBlock;
	FTimerHandle DestructionTimerHandle;
	bool IsDestroyingBlock;
	bool IsBlockInRange;
	bool IsWireframeBlockPlaced;
};
