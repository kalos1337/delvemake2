// Fill out your copyright notice in the Description page of Project Settings.


#include "Block.h"

ABlock::ABlock()
{
 	// All block management is done elsewhere - no need for ticking
	PrimaryActorTick.bCanEverTick = false;

	SetUpBlockMesh();
	DynamicMaterialInstance = nullptr; // Initialize the dynamic material instance pointer
}

// Sets up block's mesh and attaches it to block actor
bool ABlock::SetUpBlockMesh()
{
	BlockMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	BlockMesh->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeMeshAsset(TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube"));

	if (CubeMeshAsset.Succeeded())
	{
		BlockMesh->SetStaticMesh(CubeMeshAsset.Object);
		BlockMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));

		// Turn off shadow casting for performance purposes (for now)
		BlockMesh->SetCastShadow(false);

		return true;
	}

	UE_LOG(LogTemp, Warning, TEXT("Failed to load cube mesh for block!"));
	return false;
}

// Sets up block's masterial and BlockType based on given EBlockType
bool ABlock::SetUpBlockTypeAndMaterial(const EBlockType BlockType)
{
	FString MaterialPath;
	CurrentBlockType = BlockType;

	switch (BlockType) {
		case EBlockType::Dirt:
			MaterialPath = "/Script/Engine.Material'/Game/grass_Mat.grass_Mat'";
			break;
		case EBlockType::Rock:
			MaterialPath = "/Script/Engine.Material'/Game/stone_Mat.stone_Mat'";
			break;
		case EBlockType::Ore:
			MaterialPath = "/Script/Engine.Material'/Game/ore_Mat.ore_Mat'";
			break;
		case EBlockType::Wood:
			MaterialPath = "/Script/Engine.Material'/Game/wood_Mat.wood_Mat'";
			break;
		case EBlockType::Wireframe:
			MaterialPath = "/Script/Engine.Material'/Game/wireframe_Mat.wireframe_Mat'";
			break;
	}

    UMaterial* BlockMaterial = LoadObject<UMaterial>(nullptr, *MaterialPath);

	if (! BlockMaterial)
	{
        UE_LOG(LogTemp, Warning, TEXT("Failed to load material: %s"), *MaterialPath);
        return false;
	}

    // Create a dynamic material instance if not already created
    if (! DynamicMaterialInstance)
    {
        DynamicMaterialInstance = UMaterialInstanceDynamic::Create(BlockMaterial, this);
    }

	// Set the material on the mesh component
    BlockMesh->SetMaterial(0, DynamicMaterialInstance);

	return true;
}

// FatherChunk getter
UChunk* ABlock::GetChunk()
{
	return FatherChunk;
}

// Called when the game starts or when spawned
void ABlock::BeginPlay()
{
	Super::BeginPlay();	
}

// Called every frame
void ABlock::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

