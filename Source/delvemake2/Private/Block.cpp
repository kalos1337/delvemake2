// Fill out your copyright notice in the Description page of Project Settings.


#include "Block.h"

// Sets default values
ABlock::ABlock()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SetUpBlockMesh();

}

bool ABlock::SetUpBlockMesh()
{
	BlockMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	BlockMesh->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeMeshAsset(TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube"));

	if (CubeMeshAsset.Succeeded())
	{
		BlockMesh->SetStaticMesh(CubeMeshAsset.Object);
		BlockMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));

		// Get bounding box of static mesh?
		FBox MeshBounds = CubeMeshAsset.Object->GetBoundingBox();
		FVector BoundingBoxExtent = MeshBounds.GetExtent();

		UE_LOG(LogTemp, Warning, TEXT("BoxMesh dimensions: X=%f, Y=%f, Z=%f"), BoundingBoxExtent.X, BoundingBoxExtent.Y,
			BoundingBoxExtent.Z);




		return true;
	}

	UE_LOG(LogTemp, Warning, TEXT("Failed to load cube mesh for block!"));
	return false;
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

