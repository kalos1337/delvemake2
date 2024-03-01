// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "delvemake2/Public/ChunkMaster.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChunkMaster() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	DELVEMAKE2_API UClass* Z_Construct_UClass_AChunkMaster();
	DELVEMAKE2_API UClass* Z_Construct_UClass_AChunkMaster_NoRegister();
	DELVEMAKE2_API UClass* Z_Construct_UClass_UChunk_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_delvemake2();
// End Cross Module References
	DEFINE_FUNCTION(AChunkMaster::execSpawnChunk)
	{
		P_GET_OBJECT(UChunk,Z_Param_SlaveChunk);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ChunkLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnChunk(Z_Param_SlaveChunk,Z_Param_Out_ChunkLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AChunkMaster::execGetChunkAtCoord)
	{
		P_GET_STRUCT(FVector2D,Z_Param_Coordinates);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UChunk**)Z_Param__Result=P_THIS->GetChunkAtCoord(Z_Param_Coordinates);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AChunkMaster::execUpdateWorld)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateWorld();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AChunkMaster::execInitializeWorld)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeWorld();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AChunkMaster::execComputeChunkCoords)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_centerChunkX);
		P_GET_PROPERTY(FIntProperty,Z_Param_centerChunkY);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector2D>*)Z_Param__Result=P_THIS->ComputeChunkCoords(Z_Param_centerChunkX,Z_Param_centerChunkY);
		P_NATIVE_END;
	}
	void AChunkMaster::StaticRegisterNativesAChunkMaster()
	{
		UClass* Class = AChunkMaster::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ComputeChunkCoords", &AChunkMaster::execComputeChunkCoords },
			{ "GetChunkAtCoord", &AChunkMaster::execGetChunkAtCoord },
			{ "InitializeWorld", &AChunkMaster::execInitializeWorld },
			{ "SpawnChunk", &AChunkMaster::execSpawnChunk },
			{ "UpdateWorld", &AChunkMaster::execUpdateWorld },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AChunkMaster_ComputeChunkCoords_Statics
	{
		struct ChunkMaster_eventComputeChunkCoords_Parms
		{
			int32 centerChunkX;
			int32 centerChunkY;
			TArray<FVector2D> ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_centerChunkX;
		static const UECodeGen_Private::FIntPropertyParams NewProp_centerChunkY;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AChunkMaster_ComputeChunkCoords_Statics::NewProp_centerChunkX = { "centerChunkX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChunkMaster_eventComputeChunkCoords_Parms, centerChunkX), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AChunkMaster_ComputeChunkCoords_Statics::NewProp_centerChunkY = { "centerChunkY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChunkMaster_eventComputeChunkCoords_Parms, centerChunkY), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AChunkMaster_ComputeChunkCoords_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AChunkMaster_ComputeChunkCoords_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChunkMaster_eventComputeChunkCoords_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChunkMaster_ComputeChunkCoords_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkMaster_ComputeChunkCoords_Statics::NewProp_centerChunkX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkMaster_ComputeChunkCoords_Statics::NewProp_centerChunkY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkMaster_ComputeChunkCoords_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkMaster_ComputeChunkCoords_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChunkMaster_ComputeChunkCoords_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChunkMaster.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChunkMaster_ComputeChunkCoords_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChunkMaster, nullptr, "ComputeChunkCoords", nullptr, nullptr, Z_Construct_UFunction_AChunkMaster_ComputeChunkCoords_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkMaster_ComputeChunkCoords_Statics::PropPointers), sizeof(Z_Construct_UFunction_AChunkMaster_ComputeChunkCoords_Statics::ChunkMaster_eventComputeChunkCoords_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkMaster_ComputeChunkCoords_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChunkMaster_ComputeChunkCoords_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkMaster_ComputeChunkCoords_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AChunkMaster_ComputeChunkCoords_Statics::ChunkMaster_eventComputeChunkCoords_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AChunkMaster_ComputeChunkCoords()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChunkMaster_ComputeChunkCoords_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AChunkMaster_GetChunkAtCoord_Statics
	{
		struct ChunkMaster_eventGetChunkAtCoord_Parms
		{
			FVector2D Coordinates;
			UChunk* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Coordinates_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Coordinates;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChunkMaster_GetChunkAtCoord_Statics::NewProp_Coordinates_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AChunkMaster_GetChunkAtCoord_Statics::NewProp_Coordinates = { "Coordinates", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChunkMaster_eventGetChunkAtCoord_Parms, Coordinates), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkMaster_GetChunkAtCoord_Statics::NewProp_Coordinates_MetaData), Z_Construct_UFunction_AChunkMaster_GetChunkAtCoord_Statics::NewProp_Coordinates_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AChunkMaster_GetChunkAtCoord_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChunkMaster_eventGetChunkAtCoord_Parms, ReturnValue), Z_Construct_UClass_UChunk_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChunkMaster_GetChunkAtCoord_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkMaster_GetChunkAtCoord_Statics::NewProp_Coordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkMaster_GetChunkAtCoord_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChunkMaster_GetChunkAtCoord_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChunkMaster.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChunkMaster_GetChunkAtCoord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChunkMaster, nullptr, "GetChunkAtCoord", nullptr, nullptr, Z_Construct_UFunction_AChunkMaster_GetChunkAtCoord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkMaster_GetChunkAtCoord_Statics::PropPointers), sizeof(Z_Construct_UFunction_AChunkMaster_GetChunkAtCoord_Statics::ChunkMaster_eventGetChunkAtCoord_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00840401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkMaster_GetChunkAtCoord_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChunkMaster_GetChunkAtCoord_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkMaster_GetChunkAtCoord_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AChunkMaster_GetChunkAtCoord_Statics::ChunkMaster_eventGetChunkAtCoord_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AChunkMaster_GetChunkAtCoord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChunkMaster_GetChunkAtCoord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AChunkMaster_InitializeWorld_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChunkMaster_InitializeWorld_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChunkMaster.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChunkMaster_InitializeWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChunkMaster, nullptr, "InitializeWorld", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkMaster_InitializeWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChunkMaster_InitializeWorld_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AChunkMaster_InitializeWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChunkMaster_InitializeWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AChunkMaster_SpawnChunk_Statics
	{
		struct ChunkMaster_eventSpawnChunk_Parms
		{
			const UChunk* SlaveChunk;
			FVector ChunkLocation;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlaveChunk_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SlaveChunk;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChunkLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChunkLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChunkMaster_SpawnChunk_Statics::NewProp_SlaveChunk_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AChunkMaster_SpawnChunk_Statics::NewProp_SlaveChunk = { "SlaveChunk", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChunkMaster_eventSpawnChunk_Parms, SlaveChunk), Z_Construct_UClass_UChunk_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkMaster_SpawnChunk_Statics::NewProp_SlaveChunk_MetaData), Z_Construct_UFunction_AChunkMaster_SpawnChunk_Statics::NewProp_SlaveChunk_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChunkMaster_SpawnChunk_Statics::NewProp_ChunkLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AChunkMaster_SpawnChunk_Statics::NewProp_ChunkLocation = { "ChunkLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChunkMaster_eventSpawnChunk_Parms, ChunkLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkMaster_SpawnChunk_Statics::NewProp_ChunkLocation_MetaData), Z_Construct_UFunction_AChunkMaster_SpawnChunk_Statics::NewProp_ChunkLocation_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChunkMaster_SpawnChunk_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkMaster_SpawnChunk_Statics::NewProp_SlaveChunk,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkMaster_SpawnChunk_Statics::NewProp_ChunkLocation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChunkMaster_SpawnChunk_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChunkMaster.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChunkMaster_SpawnChunk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChunkMaster, nullptr, "SpawnChunk", nullptr, nullptr, Z_Construct_UFunction_AChunkMaster_SpawnChunk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkMaster_SpawnChunk_Statics::PropPointers), sizeof(Z_Construct_UFunction_AChunkMaster_SpawnChunk_Statics::ChunkMaster_eventSpawnChunk_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C40401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkMaster_SpawnChunk_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChunkMaster_SpawnChunk_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkMaster_SpawnChunk_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AChunkMaster_SpawnChunk_Statics::ChunkMaster_eventSpawnChunk_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AChunkMaster_SpawnChunk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChunkMaster_SpawnChunk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AChunkMaster_UpdateWorld_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChunkMaster_UpdateWorld_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChunkMaster.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChunkMaster_UpdateWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChunkMaster, nullptr, "UpdateWorld", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkMaster_UpdateWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChunkMaster_UpdateWorld_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AChunkMaster_UpdateWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChunkMaster_UpdateWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AChunkMaster);
	UClass* Z_Construct_UClass_AChunkMaster_NoRegister()
	{
		return AChunkMaster::StaticClass();
	}
	struct Z_Construct_UClass_AChunkMaster_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChunkCoords_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChunkCoords_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChunkCoords;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ChunkGrid_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChunkGrid_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChunkGrid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CentralChunkCoords_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CentralChunkCoords;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChunkMaster_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_delvemake2,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AChunkMaster_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AChunkMaster_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AChunkMaster_ComputeChunkCoords, "ComputeChunkCoords" }, // 527822767
		{ &Z_Construct_UFunction_AChunkMaster_GetChunkAtCoord, "GetChunkAtCoord" }, // 3053194862
		{ &Z_Construct_UFunction_AChunkMaster_InitializeWorld, "InitializeWorld" }, // 2027708827
		{ &Z_Construct_UFunction_AChunkMaster_SpawnChunk, "SpawnChunk" }, // 2316314105
		{ &Z_Construct_UFunction_AChunkMaster_UpdateWorld, "UpdateWorld" }, // 2453635831
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AChunkMaster_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChunkMaster_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Handles all high-level terrain generation  and interactions with terrain\n" },
#endif
		{ "IncludePath", "ChunkMaster.h" },
		{ "ModuleRelativePath", "Public/ChunkMaster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles all high-level terrain generation  and interactions with terrain" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AChunkMaster_Statics::NewProp_ChunkCoords_Inner = { "ChunkCoords", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChunkMaster_Statics::NewProp_ChunkCoords_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChunkMaster.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AChunkMaster_Statics::NewProp_ChunkCoords = { "ChunkCoords", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChunkMaster, ChunkCoords), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AChunkMaster_Statics::NewProp_ChunkCoords_MetaData), Z_Construct_UClass_AChunkMaster_Statics::NewProp_ChunkCoords_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChunkMaster_Statics::NewProp_ChunkGrid_Inner = { "ChunkGrid", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UChunk_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChunkMaster_Statics::NewProp_ChunkGrid_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChunkMaster.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AChunkMaster_Statics::NewProp_ChunkGrid = { "ChunkGrid", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChunkMaster, ChunkGrid), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AChunkMaster_Statics::NewProp_ChunkGrid_MetaData), Z_Construct_UClass_AChunkMaster_Statics::NewProp_ChunkGrid_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChunkMaster_Statics::NewProp_CentralChunkCoords_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChunkMaster.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AChunkMaster_Statics::NewProp_CentralChunkCoords = { "CentralChunkCoords", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChunkMaster, CentralChunkCoords), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AChunkMaster_Statics::NewProp_CentralChunkCoords_MetaData), Z_Construct_UClass_AChunkMaster_Statics::NewProp_CentralChunkCoords_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AChunkMaster_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunkMaster_Statics::NewProp_ChunkCoords_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunkMaster_Statics::NewProp_ChunkCoords,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunkMaster_Statics::NewProp_ChunkGrid_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunkMaster_Statics::NewProp_ChunkGrid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunkMaster_Statics::NewProp_CentralChunkCoords,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChunkMaster_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChunkMaster>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AChunkMaster_Statics::ClassParams = {
		&AChunkMaster::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AChunkMaster_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AChunkMaster_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AChunkMaster_Statics::Class_MetaDataParams), Z_Construct_UClass_AChunkMaster_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AChunkMaster_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AChunkMaster()
	{
		if (!Z_Registration_Info_UClass_AChunkMaster.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AChunkMaster.OuterSingleton, Z_Construct_UClass_AChunkMaster_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AChunkMaster.OuterSingleton;
	}
	template<> DELVEMAKE2_API UClass* StaticClass<AChunkMaster>()
	{
		return AChunkMaster::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChunkMaster);
	AChunkMaster::~AChunkMaster() {}
	struct Z_CompiledInDeferFile_FID_delvemake2_Source_delvemake2_Public_ChunkMaster_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_delvemake2_Source_delvemake2_Public_ChunkMaster_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AChunkMaster, AChunkMaster::StaticClass, TEXT("AChunkMaster"), &Z_Registration_Info_UClass_AChunkMaster, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AChunkMaster), 1904570047U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_delvemake2_Source_delvemake2_Public_ChunkMaster_h_2302160456(TEXT("/Script/delvemake2"),
		Z_CompiledInDeferFile_FID_delvemake2_Source_delvemake2_Public_ChunkMaster_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_delvemake2_Source_delvemake2_Public_ChunkMaster_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
