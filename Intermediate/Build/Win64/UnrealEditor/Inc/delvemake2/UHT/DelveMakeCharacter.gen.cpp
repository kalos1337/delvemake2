// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "delvemake2/Public/DelveMakeCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDelveMakeCharacter() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DELVEMAKE2_API UClass* Z_Construct_UClass_ABlock_NoRegister();
	DELVEMAKE2_API UClass* Z_Construct_UClass_AChunkMaster_NoRegister();
	DELVEMAKE2_API UClass* Z_Construct_UClass_ADelveMakeCharacter();
	DELVEMAKE2_API UClass* Z_Construct_UClass_ADelveMakeCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_delvemake2();
// End Cross Module References
	DEFINE_FUNCTION(ADelveMakeCharacter::execPlaceWireframeBlock)
	{
		P_GET_STRUCT(FVector,Z_Param_HitBlockLocation);
		P_GET_STRUCT(FVector,Z_Param_SurfaceNormal);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlaceWireframeBlock(Z_Param_HitBlockLocation,Z_Param_SurfaceNormal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADelveMakeCharacter::execPlaceBlock)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlaceBlock();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADelveMakeCharacter::execDestroyBlock)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroyBlock();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADelveMakeCharacter::execFindWorldChunkMaster)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AChunkMaster**)Z_Param__Result=P_THIS->FindWorldChunkMaster();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADelveMakeCharacter::execLoadGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADelveMakeCharacter::execSaveGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADelveMakeCharacter::execSwapToNextBlock)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwapToNextBlock();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADelveMakeCharacter::execStopDestroyingBlock)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopDestroyingBlock();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADelveMakeCharacter::execStartDestroyingBlock)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartDestroyingBlock();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADelveMakeCharacter::execIsBlockAimedAt)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsBlockAimedAt(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADelveMakeCharacter::execOnStopJump)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStopJump();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADelveMakeCharacter::execOnStartJump)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStartJump();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADelveMakeCharacter::execMoveRight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveRight(Z_Param_Val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADelveMakeCharacter::execMoveForward)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveForward(Z_Param_Val);
		P_NATIVE_END;
	}
	void ADelveMakeCharacter::StaticRegisterNativesADelveMakeCharacter()
	{
		UClass* Class = ADelveMakeCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DestroyBlock", &ADelveMakeCharacter::execDestroyBlock },
			{ "FindWorldChunkMaster", &ADelveMakeCharacter::execFindWorldChunkMaster },
			{ "IsBlockAimedAt", &ADelveMakeCharacter::execIsBlockAimedAt },
			{ "LoadGame", &ADelveMakeCharacter::execLoadGame },
			{ "MoveForward", &ADelveMakeCharacter::execMoveForward },
			{ "MoveRight", &ADelveMakeCharacter::execMoveRight },
			{ "OnStartJump", &ADelveMakeCharacter::execOnStartJump },
			{ "OnStopJump", &ADelveMakeCharacter::execOnStopJump },
			{ "PlaceBlock", &ADelveMakeCharacter::execPlaceBlock },
			{ "PlaceWireframeBlock", &ADelveMakeCharacter::execPlaceWireframeBlock },
			{ "SaveGame", &ADelveMakeCharacter::execSaveGame },
			{ "StartDestroyingBlock", &ADelveMakeCharacter::execStartDestroyingBlock },
			{ "StopDestroyingBlock", &ADelveMakeCharacter::execStopDestroyingBlock },
			{ "SwapToNextBlock", &ADelveMakeCharacter::execSwapToNextBlock },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADelveMakeCharacter_DestroyBlock_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADelveMakeCharacter_DestroyBlock_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DelveMakeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADelveMakeCharacter_DestroyBlock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADelveMakeCharacter, nullptr, "DestroyBlock", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADelveMakeCharacter_DestroyBlock_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADelveMakeCharacter_DestroyBlock_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ADelveMakeCharacter_DestroyBlock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADelveMakeCharacter_DestroyBlock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADelveMakeCharacter_FindWorldChunkMaster_Statics
	{
		struct DelveMakeCharacter_eventFindWorldChunkMaster_Parms
		{
			AChunkMaster* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADelveMakeCharacter_FindWorldChunkMaster_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DelveMakeCharacter_eventFindWorldChunkMaster_Parms, ReturnValue), Z_Construct_UClass_AChunkMaster_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADelveMakeCharacter_FindWorldChunkMaster_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADelveMakeCharacter_FindWorldChunkMaster_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADelveMakeCharacter_FindWorldChunkMaster_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DelveMakeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADelveMakeCharacter_FindWorldChunkMaster_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADelveMakeCharacter, nullptr, "FindWorldChunkMaster", nullptr, nullptr, Z_Construct_UFunction_ADelveMakeCharacter_FindWorldChunkMaster_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADelveMakeCharacter_FindWorldChunkMaster_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADelveMakeCharacter_FindWorldChunkMaster_Statics::DelveMakeCharacter_eventFindWorldChunkMaster_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADelveMakeCharacter_FindWorldChunkMaster_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADelveMakeCharacter_FindWorldChunkMaster_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADelveMakeCharacter_FindWorldChunkMaster_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ADelveMakeCharacter_FindWorldChunkMaster_Statics::DelveMakeCharacter_eventFindWorldChunkMaster_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ADelveMakeCharacter_FindWorldChunkMaster()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADelveMakeCharacter_FindWorldChunkMaster_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADelveMakeCharacter_IsBlockAimedAt_Statics
	{
		struct DelveMakeCharacter_eventIsBlockAimedAt_Parms
		{
			float DeltaTime;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADelveMakeCharacter_IsBlockAimedAt_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DelveMakeCharacter_eventIsBlockAimedAt_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ADelveMakeCharacter_IsBlockAimedAt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DelveMakeCharacter_eventIsBlockAimedAt_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADelveMakeCharacter_IsBlockAimedAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DelveMakeCharacter_eventIsBlockAimedAt_Parms), &Z_Construct_UFunction_ADelveMakeCharacter_IsBlockAimedAt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADelveMakeCharacter_IsBlockAimedAt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADelveMakeCharacter_IsBlockAimedAt_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADelveMakeCharacter_IsBlockAimedAt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADelveMakeCharacter_IsBlockAimedAt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DelveMakeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADelveMakeCharacter_IsBlockAimedAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADelveMakeCharacter, nullptr, "IsBlockAimedAt", nullptr, nullptr, Z_Construct_UFunction_ADelveMakeCharacter_IsBlockAimedAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADelveMakeCharacter_IsBlockAimedAt_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADelveMakeCharacter_IsBlockAimedAt_Statics::DelveMakeCharacter_eventIsBlockAimedAt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADelveMakeCharacter_IsBlockAimedAt_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADelveMakeCharacter_IsBlockAimedAt_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADelveMakeCharacter_IsBlockAimedAt_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ADelveMakeCharacter_IsBlockAimedAt_Statics::DelveMakeCharacter_eventIsBlockAimedAt_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ADelveMakeCharacter_IsBlockAimedAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADelveMakeCharacter_IsBlockAimedAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADelveMakeCharacter_LoadGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADelveMakeCharacter_LoadGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DelveMakeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADelveMakeCharacter_LoadGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADelveMakeCharacter, nullptr, "LoadGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADelveMakeCharacter_LoadGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADelveMakeCharacter_LoadGame_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ADelveMakeCharacter_LoadGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADelveMakeCharacter_LoadGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADelveMakeCharacter_MoveForward_Statics
	{
		struct DelveMakeCharacter_eventMoveForward_Parms
		{
			float Val;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Val;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADelveMakeCharacter_MoveForward_Statics::NewProp_Val = { "Val", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DelveMakeCharacter_eventMoveForward_Parms, Val), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADelveMakeCharacter_MoveForward_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADelveMakeCharacter_MoveForward_Statics::NewProp_Val,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADelveMakeCharacter_MoveForward_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//handles moving forward/backward\n" },
#endif
		{ "ModuleRelativePath", "Public/DelveMakeCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "handles moving forward/backward" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADelveMakeCharacter_MoveForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADelveMakeCharacter, nullptr, "MoveForward", nullptr, nullptr, Z_Construct_UFunction_ADelveMakeCharacter_MoveForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADelveMakeCharacter_MoveForward_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADelveMakeCharacter_MoveForward_Statics::DelveMakeCharacter_eventMoveForward_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADelveMakeCharacter_MoveForward_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADelveMakeCharacter_MoveForward_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADelveMakeCharacter_MoveForward_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ADelveMakeCharacter_MoveForward_Statics::DelveMakeCharacter_eventMoveForward_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ADelveMakeCharacter_MoveForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADelveMakeCharacter_MoveForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADelveMakeCharacter_MoveRight_Statics
	{
		struct DelveMakeCharacter_eventMoveRight_Parms
		{
			float Val;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Val;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADelveMakeCharacter_MoveRight_Statics::NewProp_Val = { "Val", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DelveMakeCharacter_eventMoveRight_Parms, Val), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADelveMakeCharacter_MoveRight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADelveMakeCharacter_MoveRight_Statics::NewProp_Val,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADelveMakeCharacter_MoveRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DelveMakeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADelveMakeCharacter_MoveRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADelveMakeCharacter, nullptr, "MoveRight", nullptr, nullptr, Z_Construct_UFunction_ADelveMakeCharacter_MoveRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADelveMakeCharacter_MoveRight_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADelveMakeCharacter_MoveRight_Statics::DelveMakeCharacter_eventMoveRight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADelveMakeCharacter_MoveRight_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADelveMakeCharacter_MoveRight_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADelveMakeCharacter_MoveRight_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ADelveMakeCharacter_MoveRight_Statics::DelveMakeCharacter_eventMoveRight_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ADelveMakeCharacter_MoveRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADelveMakeCharacter_MoveRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADelveMakeCharacter_OnStartJump_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADelveMakeCharacter_OnStartJump_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DelveMakeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADelveMakeCharacter_OnStartJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADelveMakeCharacter, nullptr, "OnStartJump", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADelveMakeCharacter_OnStartJump_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADelveMakeCharacter_OnStartJump_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ADelveMakeCharacter_OnStartJump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADelveMakeCharacter_OnStartJump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADelveMakeCharacter_OnStopJump_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADelveMakeCharacter_OnStopJump_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DelveMakeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADelveMakeCharacter_OnStopJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADelveMakeCharacter, nullptr, "OnStopJump", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADelveMakeCharacter_OnStopJump_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADelveMakeCharacter_OnStopJump_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ADelveMakeCharacter_OnStopJump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADelveMakeCharacter_OnStopJump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADelveMakeCharacter_PlaceBlock_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADelveMakeCharacter_PlaceBlock_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DelveMakeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADelveMakeCharacter_PlaceBlock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADelveMakeCharacter, nullptr, "PlaceBlock", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADelveMakeCharacter_PlaceBlock_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADelveMakeCharacter_PlaceBlock_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ADelveMakeCharacter_PlaceBlock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADelveMakeCharacter_PlaceBlock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADelveMakeCharacter_PlaceWireframeBlock_Statics
	{
		struct DelveMakeCharacter_eventPlaceWireframeBlock_Parms
		{
			FVector HitBlockLocation;
			FVector SurfaceNormal;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitBlockLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SurfaceNormal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADelveMakeCharacter_PlaceWireframeBlock_Statics::NewProp_HitBlockLocation = { "HitBlockLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DelveMakeCharacter_eventPlaceWireframeBlock_Parms, HitBlockLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADelveMakeCharacter_PlaceWireframeBlock_Statics::NewProp_SurfaceNormal = { "SurfaceNormal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DelveMakeCharacter_eventPlaceWireframeBlock_Parms, SurfaceNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADelveMakeCharacter_PlaceWireframeBlock_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADelveMakeCharacter_PlaceWireframeBlock_Statics::NewProp_HitBlockLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADelveMakeCharacter_PlaceWireframeBlock_Statics::NewProp_SurfaceNormal,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADelveMakeCharacter_PlaceWireframeBlock_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DelveMakeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADelveMakeCharacter_PlaceWireframeBlock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADelveMakeCharacter, nullptr, "PlaceWireframeBlock", nullptr, nullptr, Z_Construct_UFunction_ADelveMakeCharacter_PlaceWireframeBlock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADelveMakeCharacter_PlaceWireframeBlock_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADelveMakeCharacter_PlaceWireframeBlock_Statics::DelveMakeCharacter_eventPlaceWireframeBlock_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00840401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADelveMakeCharacter_PlaceWireframeBlock_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADelveMakeCharacter_PlaceWireframeBlock_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADelveMakeCharacter_PlaceWireframeBlock_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ADelveMakeCharacter_PlaceWireframeBlock_Statics::DelveMakeCharacter_eventPlaceWireframeBlock_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ADelveMakeCharacter_PlaceWireframeBlock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADelveMakeCharacter_PlaceWireframeBlock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADelveMakeCharacter_SaveGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADelveMakeCharacter_SaveGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DelveMakeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADelveMakeCharacter_SaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADelveMakeCharacter, nullptr, "SaveGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADelveMakeCharacter_SaveGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADelveMakeCharacter_SaveGame_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ADelveMakeCharacter_SaveGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADelveMakeCharacter_SaveGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADelveMakeCharacter_StartDestroyingBlock_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADelveMakeCharacter_StartDestroyingBlock_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DelveMakeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADelveMakeCharacter_StartDestroyingBlock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADelveMakeCharacter, nullptr, "StartDestroyingBlock", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADelveMakeCharacter_StartDestroyingBlock_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADelveMakeCharacter_StartDestroyingBlock_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ADelveMakeCharacter_StartDestroyingBlock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADelveMakeCharacter_StartDestroyingBlock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADelveMakeCharacter_StopDestroyingBlock_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADelveMakeCharacter_StopDestroyingBlock_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DelveMakeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADelveMakeCharacter_StopDestroyingBlock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADelveMakeCharacter, nullptr, "StopDestroyingBlock", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADelveMakeCharacter_StopDestroyingBlock_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADelveMakeCharacter_StopDestroyingBlock_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ADelveMakeCharacter_StopDestroyingBlock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADelveMakeCharacter_StopDestroyingBlock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADelveMakeCharacter_SwapToNextBlock_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADelveMakeCharacter_SwapToNextBlock_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DelveMakeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADelveMakeCharacter_SwapToNextBlock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADelveMakeCharacter, nullptr, "SwapToNextBlock", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADelveMakeCharacter_SwapToNextBlock_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADelveMakeCharacter_SwapToNextBlock_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ADelveMakeCharacter_SwapToNextBlock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADelveMakeCharacter_SwapToNextBlock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADelveMakeCharacter);
	UClass* Z_Construct_UClass_ADelveMakeCharacter_NoRegister()
	{
		return ADelveMakeCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ADelveMakeCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WireframeBlock_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WireframeBlock;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADelveMakeCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_delvemake2,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADelveMakeCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ADelveMakeCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADelveMakeCharacter_DestroyBlock, "DestroyBlock" }, // 340670234
		{ &Z_Construct_UFunction_ADelveMakeCharacter_FindWorldChunkMaster, "FindWorldChunkMaster" }, // 2658686877
		{ &Z_Construct_UFunction_ADelveMakeCharacter_IsBlockAimedAt, "IsBlockAimedAt" }, // 2199802180
		{ &Z_Construct_UFunction_ADelveMakeCharacter_LoadGame, "LoadGame" }, // 346244517
		{ &Z_Construct_UFunction_ADelveMakeCharacter_MoveForward, "MoveForward" }, // 1621148230
		{ &Z_Construct_UFunction_ADelveMakeCharacter_MoveRight, "MoveRight" }, // 163779645
		{ &Z_Construct_UFunction_ADelveMakeCharacter_OnStartJump, "OnStartJump" }, // 3570602127
		{ &Z_Construct_UFunction_ADelveMakeCharacter_OnStopJump, "OnStopJump" }, // 215421951
		{ &Z_Construct_UFunction_ADelveMakeCharacter_PlaceBlock, "PlaceBlock" }, // 1554466555
		{ &Z_Construct_UFunction_ADelveMakeCharacter_PlaceWireframeBlock, "PlaceWireframeBlock" }, // 3778339241
		{ &Z_Construct_UFunction_ADelveMakeCharacter_SaveGame, "SaveGame" }, // 2407716557
		{ &Z_Construct_UFunction_ADelveMakeCharacter_StartDestroyingBlock, "StartDestroyingBlock" }, // 1617470990
		{ &Z_Construct_UFunction_ADelveMakeCharacter_StopDestroyingBlock, "StopDestroyingBlock" }, // 1163700108
		{ &Z_Construct_UFunction_ADelveMakeCharacter_SwapToNextBlock, "SwapToNextBlock" }, // 2976039086
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADelveMakeCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADelveMakeCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "DelveMakeCharacter.h" },
		{ "ModuleRelativePath", "Public/DelveMakeCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADelveMakeCharacter_Statics::NewProp_WireframeBlock_MetaData[] = {
		{ "ModuleRelativePath", "Public/DelveMakeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADelveMakeCharacter_Statics::NewProp_WireframeBlock = { "WireframeBlock", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADelveMakeCharacter, WireframeBlock), Z_Construct_UClass_ABlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADelveMakeCharacter_Statics::NewProp_WireframeBlock_MetaData), Z_Construct_UClass_ADelveMakeCharacter_Statics::NewProp_WireframeBlock_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADelveMakeCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADelveMakeCharacter_Statics::NewProp_WireframeBlock,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADelveMakeCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADelveMakeCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADelveMakeCharacter_Statics::ClassParams = {
		&ADelveMakeCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADelveMakeCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADelveMakeCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADelveMakeCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ADelveMakeCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADelveMakeCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ADelveMakeCharacter()
	{
		if (!Z_Registration_Info_UClass_ADelveMakeCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADelveMakeCharacter.OuterSingleton, Z_Construct_UClass_ADelveMakeCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADelveMakeCharacter.OuterSingleton;
	}
	template<> DELVEMAKE2_API UClass* StaticClass<ADelveMakeCharacter>()
	{
		return ADelveMakeCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADelveMakeCharacter);
	ADelveMakeCharacter::~ADelveMakeCharacter() {}
	struct Z_CompiledInDeferFile_FID_delvemake2_Source_delvemake2_Public_DelveMakeCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_delvemake2_Source_delvemake2_Public_DelveMakeCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADelveMakeCharacter, ADelveMakeCharacter::StaticClass, TEXT("ADelveMakeCharacter"), &Z_Registration_Info_UClass_ADelveMakeCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADelveMakeCharacter), 4096601535U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_delvemake2_Source_delvemake2_Public_DelveMakeCharacter_h_1423632898(TEXT("/Script/delvemake2"),
		Z_CompiledInDeferFile_FID_delvemake2_Source_delvemake2_Public_DelveMakeCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_delvemake2_Source_delvemake2_Public_DelveMakeCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
