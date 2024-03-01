// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Block.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UChunk;
#ifdef DELVEMAKE2_Block_generated_h
#error "Block.generated.h already included, missing '#pragma once' in Block.h"
#endif
#define DELVEMAKE2_Block_generated_h

#define FID_delvemake2_Source_delvemake2_Public_Block_h_26_SPARSE_DATA
#define FID_delvemake2_Source_delvemake2_Public_Block_h_26_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_delvemake2_Source_delvemake2_Public_Block_h_26_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_delvemake2_Source_delvemake2_Public_Block_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetChunk); \
	DECLARE_FUNCTION(execSetUpBlockTypeAndMaterial); \
	DECLARE_FUNCTION(execSetUpBlockMesh);


#define FID_delvemake2_Source_delvemake2_Public_Block_h_26_ACCESSORS
#define FID_delvemake2_Source_delvemake2_Public_Block_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABlock(); \
	friend struct Z_Construct_UClass_ABlock_Statics; \
public: \
	DECLARE_CLASS(ABlock, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/delvemake2"), NO_API) \
	DECLARE_SERIALIZER(ABlock)


#define FID_delvemake2_Source_delvemake2_Public_Block_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABlock(ABlock&&); \
	NO_API ABlock(const ABlock&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlock); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlock); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABlock) \
	NO_API virtual ~ABlock();


#define FID_delvemake2_Source_delvemake2_Public_Block_h_22_PROLOG
#define FID_delvemake2_Source_delvemake2_Public_Block_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_delvemake2_Source_delvemake2_Public_Block_h_26_SPARSE_DATA \
	FID_delvemake2_Source_delvemake2_Public_Block_h_26_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_delvemake2_Source_delvemake2_Public_Block_h_26_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_delvemake2_Source_delvemake2_Public_Block_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_delvemake2_Source_delvemake2_Public_Block_h_26_ACCESSORS \
	FID_delvemake2_Source_delvemake2_Public_Block_h_26_INCLASS_NO_PURE_DECLS \
	FID_delvemake2_Source_delvemake2_Public_Block_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DELVEMAKE2_API UClass* StaticClass<class ABlock>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_delvemake2_Source_delvemake2_Public_Block_h


#define FOREACH_ENUM_EBLOCKTYPE(op) \
	op(Dirt) \
	op(Rock) \
	op(Ore) \
	op(Wood) \
	op(Wireframe) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
