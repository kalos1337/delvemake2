// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "delvemake2/Public/DelveMakeSave.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDelveMakeSave() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	DELVEMAKE2_API UClass* Z_Construct_UClass_UChunk_NoRegister();
	DELVEMAKE2_API UClass* Z_Construct_UClass_UDelveMakeSave();
	DELVEMAKE2_API UClass* Z_Construct_UClass_UDelveMakeSave_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_delvemake2();
// End Cross Module References
	void UDelveMakeSave::StaticRegisterNativesUDelveMakeSave()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDelveMakeSave);
	UClass* Z_Construct_UClass_UDelveMakeSave_NoRegister()
	{
		return UDelveMakeSave::StaticClass();
	}
	struct Z_Construct_UClass_UDelveMakeSave_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraRotation;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SavedChunks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SavedChunks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SavedChunks;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SavedChunkCoords_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SavedChunkCoords_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SavedChunkCoords;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SavedCentralChunkCoords_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SavedCentralChunkCoords;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDelveMakeSave_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_delvemake2,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDelveMakeSave_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDelveMakeSave_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DelveMakeSave.h" },
		{ "ModuleRelativePath", "Public/DelveMakeSave.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDelveMakeSave_Statics::NewProp_PlayerLocation_MetaData[] = {
		{ "Category", "DelveMakeSave" },
		{ "ModuleRelativePath", "Public/DelveMakeSave.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDelveMakeSave_Statics::NewProp_PlayerLocation = { "PlayerLocation", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDelveMakeSave, PlayerLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDelveMakeSave_Statics::NewProp_PlayerLocation_MetaData), Z_Construct_UClass_UDelveMakeSave_Statics::NewProp_PlayerLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDelveMakeSave_Statics::NewProp_CameraRotation_MetaData[] = {
		{ "Category", "DelveMakeSave" },
		{ "ModuleRelativePath", "Public/DelveMakeSave.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDelveMakeSave_Statics::NewProp_CameraRotation = { "CameraRotation", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDelveMakeSave, CameraRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDelveMakeSave_Statics::NewProp_CameraRotation_MetaData), Z_Construct_UClass_UDelveMakeSave_Statics::NewProp_CameraRotation_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDelveMakeSave_Statics::NewProp_SavedChunks_Inner = { "SavedChunks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UChunk_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDelveMakeSave_Statics::NewProp_SavedChunks_MetaData[] = {
		{ "ModuleRelativePath", "Public/DelveMakeSave.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDelveMakeSave_Statics::NewProp_SavedChunks = { "SavedChunks", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDelveMakeSave, SavedChunks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDelveMakeSave_Statics::NewProp_SavedChunks_MetaData), Z_Construct_UClass_UDelveMakeSave_Statics::NewProp_SavedChunks_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDelveMakeSave_Statics::NewProp_SavedChunkCoords_Inner = { "SavedChunkCoords", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDelveMakeSave_Statics::NewProp_SavedChunkCoords_MetaData[] = {
		{ "Category", "DelveMakeSave" },
		{ "ModuleRelativePath", "Public/DelveMakeSave.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDelveMakeSave_Statics::NewProp_SavedChunkCoords = { "SavedChunkCoords", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDelveMakeSave, SavedChunkCoords), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDelveMakeSave_Statics::NewProp_SavedChunkCoords_MetaData), Z_Construct_UClass_UDelveMakeSave_Statics::NewProp_SavedChunkCoords_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDelveMakeSave_Statics::NewProp_SavedCentralChunkCoords_MetaData[] = {
		{ "Category", "DelveMakeSave" },
		{ "ModuleRelativePath", "Public/DelveMakeSave.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDelveMakeSave_Statics::NewProp_SavedCentralChunkCoords = { "SavedCentralChunkCoords", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDelveMakeSave, SavedCentralChunkCoords), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDelveMakeSave_Statics::NewProp_SavedCentralChunkCoords_MetaData), Z_Construct_UClass_UDelveMakeSave_Statics::NewProp_SavedCentralChunkCoords_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDelveMakeSave_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDelveMakeSave_Statics::NewProp_PlayerLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDelveMakeSave_Statics::NewProp_CameraRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDelveMakeSave_Statics::NewProp_SavedChunks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDelveMakeSave_Statics::NewProp_SavedChunks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDelveMakeSave_Statics::NewProp_SavedChunkCoords_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDelveMakeSave_Statics::NewProp_SavedChunkCoords,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDelveMakeSave_Statics::NewProp_SavedCentralChunkCoords,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDelveMakeSave_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDelveMakeSave>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDelveMakeSave_Statics::ClassParams = {
		&UDelveMakeSave::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDelveMakeSave_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDelveMakeSave_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDelveMakeSave_Statics::Class_MetaDataParams), Z_Construct_UClass_UDelveMakeSave_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDelveMakeSave_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDelveMakeSave()
	{
		if (!Z_Registration_Info_UClass_UDelveMakeSave.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDelveMakeSave.OuterSingleton, Z_Construct_UClass_UDelveMakeSave_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDelveMakeSave.OuterSingleton;
	}
	template<> DELVEMAKE2_API UClass* StaticClass<UDelveMakeSave>()
	{
		return UDelveMakeSave::StaticClass();
	}
	UDelveMakeSave::UDelveMakeSave(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDelveMakeSave);
	UDelveMakeSave::~UDelveMakeSave() {}
	struct Z_CompiledInDeferFile_FID_delvemake2_Source_delvemake2_Public_DelveMakeSave_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_delvemake2_Source_delvemake2_Public_DelveMakeSave_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDelveMakeSave, UDelveMakeSave::StaticClass, TEXT("UDelveMakeSave"), &Z_Registration_Info_UClass_UDelveMakeSave, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDelveMakeSave), 1085782132U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_delvemake2_Source_delvemake2_Public_DelveMakeSave_h_1716632661(TEXT("/Script/delvemake2"),
		Z_CompiledInDeferFile_FID_delvemake2_Source_delvemake2_Public_DelveMakeSave_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_delvemake2_Source_delvemake2_Public_DelveMakeSave_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
