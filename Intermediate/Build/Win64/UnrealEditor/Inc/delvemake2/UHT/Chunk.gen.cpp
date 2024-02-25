// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "delvemake2/Public/Chunk.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChunk() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DELVEMAKE2_API UClass* Z_Construct_UClass_UChunk();
	DELVEMAKE2_API UClass* Z_Construct_UClass_UChunk_NoRegister();
	DELVEMAKE2_API UScriptStruct* Z_Construct_UScriptStruct_FChunkDimensions();
	UPackage* Z_Construct_UPackage__Script_delvemake2();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChunkDimensions;
class UScriptStruct* FChunkDimensions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChunkDimensions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChunkDimensions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChunkDimensions, (UObject*)Z_Construct_UPackage__Script_delvemake2(), TEXT("ChunkDimensions"));
	}
	return Z_Registration_Info_UScriptStruct_ChunkDimensions.OuterSingleton;
}
template<> DELVEMAKE2_API UScriptStruct* StaticStruct<FChunkDimensions>()
{
	return FChunkDimensions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChunkDimensions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Width;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Height;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Depth_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Depth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChunkDimensions_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Chunk.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChunkDimensions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChunkDimensions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChunkDimensions_Statics::NewProp_Width_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chunk.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FChunkDimensions_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChunkDimensions, Width), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkDimensions_Statics::NewProp_Width_MetaData), Z_Construct_UScriptStruct_FChunkDimensions_Statics::NewProp_Width_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChunkDimensions_Statics::NewProp_Height_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chunk.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FChunkDimensions_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChunkDimensions, Height), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkDimensions_Statics::NewProp_Height_MetaData), Z_Construct_UScriptStruct_FChunkDimensions_Statics::NewProp_Height_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChunkDimensions_Statics::NewProp_Depth_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chunk.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FChunkDimensions_Statics::NewProp_Depth = { "Depth", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChunkDimensions, Depth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkDimensions_Statics::NewProp_Depth_MetaData), Z_Construct_UScriptStruct_FChunkDimensions_Statics::NewProp_Depth_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChunkDimensions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkDimensions_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkDimensions_Statics::NewProp_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkDimensions_Statics::NewProp_Depth,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChunkDimensions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_delvemake2,
		nullptr,
		&NewStructOps,
		"ChunkDimensions",
		Z_Construct_UScriptStruct_FChunkDimensions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkDimensions_Statics::PropPointers),
		sizeof(FChunkDimensions),
		alignof(FChunkDimensions),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkDimensions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChunkDimensions_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkDimensions_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FChunkDimensions()
	{
		if (!Z_Registration_Info_UScriptStruct_ChunkDimensions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChunkDimensions.InnerSingleton, Z_Construct_UScriptStruct_FChunkDimensions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChunkDimensions.InnerSingleton;
	}
	void UChunk::StaticRegisterNativesUChunk()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChunk);
	UClass* Z_Construct_UClass_UChunk_NoRegister()
	{
		return UChunk::StaticClass();
	}
	struct Z_Construct_UClass_UChunk_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChunk_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_delvemake2,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChunk_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChunk_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This class represents a chunk of voxel terrain and handles all high-level behaviors.\n */" },
#endif
		{ "IncludePath", "Chunk.h" },
		{ "ModuleRelativePath", "Public/Chunk.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This class represents a chunk of voxel terrain and handles all high-level behaviors." },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChunk_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChunk>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UChunk_Statics::ClassParams = {
		&UChunk::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChunk_Statics::Class_MetaDataParams), Z_Construct_UClass_UChunk_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UChunk()
	{
		if (!Z_Registration_Info_UClass_UChunk.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChunk.OuterSingleton, Z_Construct_UClass_UChunk_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UChunk.OuterSingleton;
	}
	template<> DELVEMAKE2_API UClass* StaticClass<UChunk>()
	{
		return UChunk::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChunk);
	UChunk::~UChunk() {}
	struct Z_CompiledInDeferFile_FID_delvemake2_Source_delvemake2_Public_Chunk_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_delvemake2_Source_delvemake2_Public_Chunk_h_Statics::ScriptStructInfo[] = {
		{ FChunkDimensions::StaticStruct, Z_Construct_UScriptStruct_FChunkDimensions_Statics::NewStructOps, TEXT("ChunkDimensions"), &Z_Registration_Info_UScriptStruct_ChunkDimensions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChunkDimensions), 1331606079U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_delvemake2_Source_delvemake2_Public_Chunk_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UChunk, UChunk::StaticClass, TEXT("UChunk"), &Z_Registration_Info_UClass_UChunk, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChunk), 2242583233U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_delvemake2_Source_delvemake2_Public_Chunk_h_397132018(TEXT("/Script/delvemake2"),
		Z_CompiledInDeferFile_FID_delvemake2_Source_delvemake2_Public_Chunk_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_delvemake2_Source_delvemake2_Public_Chunk_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_delvemake2_Source_delvemake2_Public_Chunk_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_delvemake2_Source_delvemake2_Public_Chunk_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
