// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DelveMakeCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AChunkMaster;
#ifdef DELVEMAKE2_DelveMakeCharacter_generated_h
#error "DelveMakeCharacter.generated.h already included, missing '#pragma once' in DelveMakeCharacter.h"
#endif
#define DELVEMAKE2_DelveMakeCharacter_generated_h

#define FID_delvemake2_Source_delvemake2_Public_DelveMakeCharacter_h_21_SPARSE_DATA
#define FID_delvemake2_Source_delvemake2_Public_DelveMakeCharacter_h_21_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_delvemake2_Source_delvemake2_Public_DelveMakeCharacter_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_delvemake2_Source_delvemake2_Public_DelveMakeCharacter_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPlaceWireframeBlock); \
	DECLARE_FUNCTION(execPlaceBlock); \
	DECLARE_FUNCTION(execDestroyBlock); \
	DECLARE_FUNCTION(execFindWorldChunkMaster); \
	DECLARE_FUNCTION(execLoadGame); \
	DECLARE_FUNCTION(execSaveGame); \
	DECLARE_FUNCTION(execSwapToNextBlock); \
	DECLARE_FUNCTION(execStopDestroyingBlock); \
	DECLARE_FUNCTION(execStartDestroyingBlock); \
	DECLARE_FUNCTION(execIsBlockAimedAt); \
	DECLARE_FUNCTION(execOnStopJump); \
	DECLARE_FUNCTION(execOnStartJump); \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveForward);


#define FID_delvemake2_Source_delvemake2_Public_DelveMakeCharacter_h_21_ACCESSORS
#define FID_delvemake2_Source_delvemake2_Public_DelveMakeCharacter_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADelveMakeCharacter(); \
	friend struct Z_Construct_UClass_ADelveMakeCharacter_Statics; \
public: \
	DECLARE_CLASS(ADelveMakeCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/delvemake2"), NO_API) \
	DECLARE_SERIALIZER(ADelveMakeCharacter)


#define FID_delvemake2_Source_delvemake2_Public_DelveMakeCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADelveMakeCharacter(ADelveMakeCharacter&&); \
	NO_API ADelveMakeCharacter(const ADelveMakeCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADelveMakeCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADelveMakeCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADelveMakeCharacter) \
	NO_API virtual ~ADelveMakeCharacter();


#define FID_delvemake2_Source_delvemake2_Public_DelveMakeCharacter_h_18_PROLOG
#define FID_delvemake2_Source_delvemake2_Public_DelveMakeCharacter_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_delvemake2_Source_delvemake2_Public_DelveMakeCharacter_h_21_SPARSE_DATA \
	FID_delvemake2_Source_delvemake2_Public_DelveMakeCharacter_h_21_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_delvemake2_Source_delvemake2_Public_DelveMakeCharacter_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_delvemake2_Source_delvemake2_Public_DelveMakeCharacter_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_delvemake2_Source_delvemake2_Public_DelveMakeCharacter_h_21_ACCESSORS \
	FID_delvemake2_Source_delvemake2_Public_DelveMakeCharacter_h_21_INCLASS_NO_PURE_DECLS \
	FID_delvemake2_Source_delvemake2_Public_DelveMakeCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DELVEMAKE2_API UClass* StaticClass<class ADelveMakeCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_delvemake2_Source_delvemake2_Public_DelveMakeCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
