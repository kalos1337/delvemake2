// Fill out your copyright notice in the Description page of Project Settings.


#include "DelveMakeCharacter.h"

// Sets default values
ADelveMakeCharacter::ADelveMakeCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;
	GetCharacterMovement()->JumpZVelocity *= PLAYER_JUMP_COEFFICIENT;
	IsDestroyingBlock = false;
	SetActorLocation(PLAYER_SPAWN_POINT);
	WorldChunkMaster = nullptr;

	BlockAimedAt = EBlockType::Wireframe;
	BlockToPlace = EBlockType::Dirt;
}

// Called when the game starts or when spawned
void ADelveMakeCharacter::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ADelveMakeCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (IsBlockAimedAt(DeltaTime)) {
		IsBlockInRange = true;
	}
	else {
		IsBlockInRange = false;
	}
}

// Called to bind functionality to input
void ADelveMakeCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	InputComponent->BindAxis("MoveForward", this, &ADelveMakeCharacter::MoveForward);
	InputComponent->BindAxis("MoveRight", this, &ADelveMakeCharacter::MoveRight);
	InputComponent->BindAxis("Turn", this, &ADelveMakeCharacter::AddControllerYawInput);
	InputComponent->BindAxis("LookUp", this, &ADelveMakeCharacter::AddControllerPitchInput);
	InputComponent->BindAction("Jump", IE_Pressed, this, &ADelveMakeCharacter::OnStartJump);
	InputComponent->BindAction("Jump", IE_Released, this, &ADelveMakeCharacter::OnStopJump);
	InputComponent->BindAction("DestroyBlock", IE_Pressed, this, &ADelveMakeCharacter::StartDestroyingBlock);
	InputComponent->BindAction("DestroyBlock", IE_Released, this, &ADelveMakeCharacter::StopDestroyingBlock);
	InputComponent->BindAction("PlaceBlock", IE_Pressed, this, &ADelveMakeCharacter::PlaceBlock);
	InputComponent->BindAction("NextBlock", IE_Pressed, this, &ADelveMakeCharacter::SwapToNextBlock);
	//InputComponent->BindAction("SaveGame", IE_Pressed, this, &ADelveMakeCharacter::SaveGame);
	//InputComponent->BindAction("LoadGame", IE_Pressed, this, &ADelveMakeCharacter::LoadGame);
}

// Used to rotate between currently held BlockToPlace
void ADelveMakeCharacter::SwapToNextBlock()
{
	// This is the hackiest nastiest thing imaginable
	// but I do not have the patience to deal with enum behavior in a smarter way for now
	switch (BlockToPlace)
	{
		case EBlockType::Dirt:
			BlockToPlace = EBlockType::Ore;
			break;
		case EBlockType::Ore:
			BlockToPlace = EBlockType::Rock;
			break;
		case EBlockType::Rock:
			BlockToPlace = EBlockType::Wood;
			break;
		case EBlockType::Wood:
			BlockToPlace = EBlockType::Dirt;
			break;
		default:
			BlockToPlace = EBlockType::Dirt;
			break;
	}
}

// Saves game - currently nonfunctional
void ADelveMakeCharacter::SaveGame()
{
	if (UDelveMakeSave* SaveInstance = Cast<UDelveMakeSave>(
		UGameplayStatics::CreateSaveGameObject(UDelveMakeSave::StaticClass())))
	{
		// Set our data to save
		SaveInstance->PlayerLocation = GetActorLocation();
		SaveInstance->CameraRotation = GetViewRotation();

		// Get Chunk coords and chunks
		if (! WorldChunkMaster)
		{
			FindWorldChunkMaster();
		}

		SaveInstance->SavedChunks = WorldChunkMaster->ChunkGrid;
		SaveInstance->SavedChunkCoords = WorldChunkMaster->ChunkCoords;
		SaveInstance->SavedCentralChunkCoords = WorldChunkMaster->CentralChunkCoords;


		// Save the data
		if (UGameplayStatics::SaveGameToSlot(SaveInstance, TEXT("SaveSlotName"), 0))
		{
			UE_LOG(LogTemp, Warning, TEXT("Data was saved."));
		}
	}
}

// Loads game - currently nonfunctional
void ADelveMakeCharacter::LoadGame()
{
	if (UDelveMakeSave* LoadedGame = Cast<UDelveMakeSave>(UGameplayStatics::LoadGameFromSlot(TEXT("SaveSlotName"), 0)))
	{
		SetActorLocation(LoadedGame->PlayerLocation);
		GetController()->SetControlRotation(LoadedGame->CameraRotation);

		if (! WorldChunkMaster)
		{
			FindWorldChunkMaster();
		}

		for (auto Element : WorldChunkMaster->ChunkGrid)
		{
			Element->ConditionalBeginDestroy();
		}

		WorldChunkMaster->ChunkGrid = LoadedGame->SavedChunks;
		WorldChunkMaster->ChunkCoords = LoadedGame->SavedChunkCoords;
		WorldChunkMaster->CentralChunkCoords = LoadedGame->SavedCentralChunkCoords;
	}
}

// Handles movement forward and backwards
void ADelveMakeCharacter::MoveForward(float Val)
{
	if ((Controller != nullptr) && (Val != 0.0f))
	{
	    // Find out which way is forward
        FRotator Rotation = Controller->GetControlRotation();
        // Limit pitch when walking or falling
		if (GetCharacterMovement()->IsMovingOnGround() || GetCharacterMovement()->IsFalling())
		{
			Rotation.Pitch = 0.0f;
		}
		// Add movement
		const FVector Direction = FRotationMatrix(Rotation).GetScaledAxis(EAxis::X);
		AddMovementInput(Direction, Val);
	}
}

// Handles strafing
void ADelveMakeCharacter::MoveRight(float Val)
{
	if ((Controller != nullptr) && (Val != 0.0f))
	{
		// Find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FVector Direction = FRotationMatrix(Rotation).GetScaledAxis(EAxis::Y);
		// Add movement
		AddMovementInput(Direction, Val);
	}
}

void ADelveMakeCharacter::OnStartJump()
{
	bPressedJump = true;
}

void ADelveMakeCharacter::OnStopJump()
{
	bPressedJump = false;
}

// Checks if there is ABlock currently aimed at and in range for us
bool ADelveMakeCharacter::IsBlockAimedAt(float DeltaTime)
{

	// For less-slow Wireframe placing
	static float WireframeSpawnTicker = 0;
	WireframeSpawnTicker += DeltaTime;

	FVector CameraLocation;
	FRotator CameraRotation;
	GetActorEyesViewPoint(CameraLocation, CameraRotation);

	const FVector &StartLocation = CameraLocation;
	const FVector EndLocation = StartLocation + CameraRotation.Vector() * MAXIMUM_PLAYER_RANGE;

	FHitResult HitResult;
	FCollisionQueryParams QueryParams;

	// Add self to ignored actors
	QueryParams.AddIgnoredActor(this);

	if (GetWorld()->LineTraceSingleByChannel(HitResult, StartLocation, EndLocation, ECC_Visibility, QueryParams))
	{
		// Check if the hit actor is a block
		ABlock* HitBlock = Cast<ABlock>(HitResult.GetActor());
		if (HitBlock)
		{	
			BlockAimedAt = HitBlock->CurrentBlockType;

			if (WireframeSpawnTicker > 0.1f) {
				if (IsWireframeBlockPlaced)
				{
					WireframeBlock->Destroy();
				}
				PlaceWireframeBlock(HitBlock->GetActorLocation(), HitResult.ImpactNormal);
				IsWireframeBlockPlaced = true;
				WireframeSpawnTicker = 0;
			}

			return true;
		}
	}

	if (IsWireframeBlockPlaced)
	{
		WireframeBlock->Destroy();
		IsWireframeBlockPlaced = false;
	}
	return false;
}

// Handles destruction of ABlock, only called when destruction timer elapses
void ADelveMakeCharacter::DestroyBlock()
{
	if (IsDestroyingBlock && IsBlockInRange)
	{
		FVector CameraLocation;
		FRotator CameraRotation;
		GetActorEyesViewPoint(CameraLocation, CameraRotation);

		const FVector &StartLocation = CameraLocation;
		const FVector EndLocation = StartLocation + CameraRotation.Vector() * MAXIMUM_PLAYER_RANGE;

		FHitResult HitResult;
		FCollisionQueryParams QueryParams;
		// Add self to ignored actors
		QueryParams.AddIgnoredActor(this);
		if (GetWorld()->LineTraceSingleByChannel(HitResult, StartLocation, EndLocation, ECC_Visibility, QueryParams))
		{
			// Check if the hit actor is a block
			ABlock *HitBlock = Cast<ABlock>(HitResult.GetActor());
			if (HitBlock)
			{
				HitBlock->GetChunk()->DestroyBlock(HitBlock);
			}
		}

		// Reset destruction flag
		IsDestroyingBlock = false;
	}
}

// Handles timed block destruction
void ADelveMakeCharacter::StartDestroyingBlock()
{
    // Set a flag to indicate that block destruction is in progress
    IsDestroyingBlock = true;
	float DestroyTimer;

	switch (BlockAimedAt)
	{
		case EBlockType::Dirt:
			DestroyTimer = DIRT_DESTRUCTION_TIME;
			break;
		case EBlockType::Rock:
			DestroyTimer = ROCK_DESTRUCTION_TIME;
			break;
		case EBlockType::Ore:
			DestroyTimer = ORE_DESTRUCTION_TIME;
			break;
		case EBlockType::Wood:
			DestroyTimer = WOOD_DESTRUCTION_TIME;
			break;
		default:
			DestroyTimer = DIRT_DESTRUCTION_TIME;
			break;
	}

    // Start a timer for the destruction delay
    GetWorldTimerManager().SetTimer(DestructionTimerHandle, this, &ADelveMakeCharacter::DestroyBlock, DestroyTimer, false);
}

// Handles block placement
void ADelveMakeCharacter::PlaceBlock()
{
	FVector CameraLocation;
	FRotator CameraRotation;
	GetActorEyesViewPoint(CameraLocation, CameraRotation);

	const FVector &StartLocation = CameraLocation;
	const FVector EndLocation = StartLocation + CameraRotation.Vector() * MAXIMUM_PLAYER_RANGE;

	FHitResult HitResult;
	FCollisionQueryParams QueryParams;
	// Add self to ignored actors
	QueryParams.AddIgnoredActor(this);

	if (GetWorld()->LineTraceSingleByChannel(HitResult, StartLocation, EndLocation, ECC_Visibility, QueryParams))
	{ 
		// Trace direction vector
		FVector TraceDirection = (EndLocation - StartLocation).GetSafeNormal();

		// Root coords of block hit
		FVector HitBlockLocation = HitResult.GetActor()->GetActorLocation();

		// Variable that will hold co-ords of new block
		FVector NewBlockLocation;

		// Normal vector of the hit surface
		FVector SurfaceNormal = HitResult.ImpactNormal;

		// Calculate the absolute values of the components of the surface normal
        FVector AbsSurfaceNormal = FVector(FMath::Abs(SurfaceNormal.X), FMath::Abs(SurfaceNormal.Y), FMath::Abs(SurfaceNormal.Z));

        // Determine which side of the cube the trace hit
        if (AbsSurfaceNormal.X > AbsSurfaceNormal.Y && AbsSurfaceNormal.X > AbsSurfaceNormal.Z)
        {
            // Hit the X face of the cube
            // Place the new block on the X face
			//NewBlockLocation = HitBlockLocation + FVector(100, 0, 0);
			NewBlockLocation = HitBlockLocation + FVector(100 * FMath::Sign(SurfaceNormal.X), 0, 0);

        }
        else if (AbsSurfaceNormal.Y > AbsSurfaceNormal.X && AbsSurfaceNormal.Y > AbsSurfaceNormal.Z)
        {
            // Hit the Y face of the cube
            // Place the new block on the Y face
			//NewBlockLocation = HitBlockLocation + FVector(0, 100, 0);
			NewBlockLocation = HitBlockLocation + FVector(0, 100 * FMath::Sign(SurfaceNormal.Y), 0);
        }
        else
        {
            // Hit the Z face of the cube
            // Place the new block on the Z face
			//NewBlockLocation = HitBlockLocation + FVector(0, 0, 100);
			NewBlockLocation = HitBlockLocation + FVector(0, 0, 100 * FMath::Sign(SurfaceNormal.Z));

        }

		// Hacky
		FVector2D ChunkCoords = DelveMakeUtils::UECoordsToChunkCoords(NewBlockLocation);

		// Floors
		FVector NewUECoords = DelveMakeUtils::ChunkCoordsToUECoords(ChunkCoords);

		// IF block was in zerochunk, get block coordinates
		NewBlockLocation = NewBlockLocation - NewUECoords;
		NewBlockLocation = NewBlockLocation / BLOCK_EDGE_LENGTH;

		AChunkMaster* KingChunkMaster = FindWorldChunkMaster();

		UChunk* ChunkOfBlock = KingChunkMaster->GetChunkAtCoord(ChunkCoords);
		ChunkOfBlock->PlaceBlock(NewBlockLocation, BlockToPlace);
		WireframeBlock->Destroy();
		IsWireframeBlockPlaced = false;
	}
}

// Places a helper wireframe block that helps us see where the actual block will be placed
void ADelveMakeCharacter::PlaceWireframeBlock(FVector HitBlockLocation, FVector SurfaceNormal)
{
	// Calculate the absolute values of the components of the surface normal
    FVector AbsSurfaceNormal = FVector(FMath::Abs(SurfaceNormal.X), FMath::Abs(SurfaceNormal.Y), FMath::Abs(SurfaceNormal.Z));
	FVector NewBlockLocation(0.0, 0.0, 0.0);

    // Determine which side of the cube the trace hit - this is code reuse from PlaceBlock(), will rework later
    if (AbsSurfaceNormal.X > AbsSurfaceNormal.Y && AbsSurfaceNormal.X > AbsSurfaceNormal.Z)
    {
        // Hit the X face of the cube
        // Place the new block on the X face
		//NewBlockLocation = HitBlockLocation + FVector(100, 0, 0);
		NewBlockLocation = HitBlockLocation + FVector(100 * FMath::Sign(SurfaceNormal.X), 0, 0);

    }
    else if (AbsSurfaceNormal.Y > AbsSurfaceNormal.X && AbsSurfaceNormal.Y > AbsSurfaceNormal.Z)
    {
        // Hit the Y face of the cube
        // Place the new block on the Y face
		//NewBlockLocation = HitBlockLocation + FVector(0, 100, 0);
		NewBlockLocation = HitBlockLocation + FVector(0, 100 * FMath::Sign(SurfaceNormal.Y), 0);
    }
    else
    {
        // Hit the Z face of the cube
        // Place the new block on the Z face
		//NewBlockLocation = HitBlockLocation + FVector(0, 0, 100);
		NewBlockLocation = HitBlockLocation + FVector(0, 0, 100 * FMath::Sign(SurfaceNormal.Z));

    }

	//// prevent blocks in the same location
	//if (WireframeBlock)
	//{
	//	if (NewBlockLocation == WireframeBlock->GetActorLocation())
	//	{
	//		return;
	//	}
	//}

	WireframeBlock = GetWorld()->SpawnActor<ABlock>(NewBlockLocation, FRotator::ZeroRotator);

	WireframeBlock->SetUpBlockTypeAndMaterial(EBlockType::Wireframe);
	UPrimitiveComponent* BlockPrimitiveComponent = WireframeBlock->FindComponentByClass<UPrimitiveComponent>();

	// Turn off block collision so we don't place our actual new block "on it"
	BlockPrimitiveComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void ADelveMakeCharacter::StopDestroyingBlock()
{
	// Clear the destruction timer
    GetWorldTimerManager().ClearTimer(DestructionTimerHandle);

    // Reset the destruction flag
    IsDestroyingBlock = false;
}

// Extremely slow, stupid way to do this
AChunkMaster* ADelveMakeCharacter::FindWorldChunkMaster()
{
	if (WorldChunkMaster != nullptr)
	{
		return WorldChunkMaster;
	}

	UWorld* World = GetWorld();
	AChunkMaster* OurChunkMaster;
	TArray<AActor*> OutActors;

	UGameplayStatics::GetAllActorsOfClass(World, AChunkMaster::StaticClass(), OutActors);

	OurChunkMaster = Cast<AChunkMaster>(OutActors[0]);
	WorldChunkMaster = OurChunkMaster;

	return OurChunkMaster;
}
