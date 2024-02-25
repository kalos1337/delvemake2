// Fill out your copyright notice in the Description page of Project Settings.


#include "FloatingActor.h"

// Sets default values
AFloatingActor::AFloatingActor()
{
 //	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//PrimaryActorTick.bCanEverTick = true;
	//PrimaryActorTick.bStartWithTickEnabled = true;
 //   VisualMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
 //   VisualMesh->SetupAttachment(RootComponent);
 //   SetRootComponent(VisualMesh);

 //   static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeVisualAsset(TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube"));

 //   if (CubeVisualAsset.Succeeded())
 //   {
 //       UE_LOG(LogTemp, Warning, TEXT("Mesh successfully referenced."));


 //       VisualMesh->SetStaticMesh(CubeVisualAsset.Object);
 //       VisualMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
 //   }
}

// Called when the game starts or when spawned
void AFloatingActor::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Test Actor Spawned"));
}

// Called every frame
void AFloatingActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector NewLocation = GetActorLocation();
	NewLocation.X += 10.0f;
	SetActorLocation(NewLocation);
}

