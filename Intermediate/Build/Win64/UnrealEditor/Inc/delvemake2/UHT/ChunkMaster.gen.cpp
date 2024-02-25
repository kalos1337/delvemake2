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
	DELVEMAKE2_API UClass* Z_Construct_UClass_AChunkMaster();
	DELVEMAKE2_API UClass* Z_Construct_UClass_AChunkMaster_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_delvemake2();
// End Cross Module References
	void AChunkMaster::StaticRegisterNativesAChunkMaster()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AChunkMaster);
	UClass* Z_Construct_UClass_AChunkMaster_NoRegister()
	{
		return AChunkMaster::StaticClass();
	}
	struct Z_Construct_UClass_AChunkMaster_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChunkMaster_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_delvemake2,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AChunkMaster_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChunkMaster_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ChunkMaster.h" },
		{ "ModuleRelativePath", "Public/ChunkMaster.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChunkMaster_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChunkMaster>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AChunkMaster_Statics::ClassParams = {
		&AChunkMaster::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AChunkMaster_Statics::Class_MetaDataParams), Z_Construct_UClass_AChunkMaster_Statics::Class_MetaDataParams)
	};
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
		{ Z_Construct_UClass_AChunkMaster, AChunkMaster::StaticClass, TEXT("AChunkMaster"), &Z_Registration_Info_UClass_AChunkMaster, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AChunkMaster), 2978090838U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_delvemake2_Source_delvemake2_Public_ChunkMaster_h_2272026098(TEXT("/Script/delvemake2"),
		Z_CompiledInDeferFile_FID_delvemake2_Source_delvemake2_Public_ChunkMaster_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_delvemake2_Source_delvemake2_Public_ChunkMaster_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
