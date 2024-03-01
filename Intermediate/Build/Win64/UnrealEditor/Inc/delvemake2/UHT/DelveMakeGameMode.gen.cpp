// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "delvemake2/Public/DelveMakeGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDelveMakeGameMode() {}
// Cross Module References
	DELVEMAKE2_API UClass* Z_Construct_UClass_ADelveMakeGameMode();
	DELVEMAKE2_API UClass* Z_Construct_UClass_ADelveMakeGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_delvemake2();
// End Cross Module References
	void ADelveMakeGameMode::StaticRegisterNativesADelveMakeGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADelveMakeGameMode);
	UClass* Z_Construct_UClass_ADelveMakeGameMode_NoRegister()
	{
		return ADelveMakeGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ADelveMakeGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADelveMakeGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_delvemake2,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADelveMakeGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADelveMakeGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "DelveMakeGameMode.h" },
		{ "ModuleRelativePath", "Public/DelveMakeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADelveMakeGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADelveMakeGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADelveMakeGameMode_Statics::ClassParams = {
		&ADelveMakeGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADelveMakeGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ADelveMakeGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ADelveMakeGameMode()
	{
		if (!Z_Registration_Info_UClass_ADelveMakeGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADelveMakeGameMode.OuterSingleton, Z_Construct_UClass_ADelveMakeGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADelveMakeGameMode.OuterSingleton;
	}
	template<> DELVEMAKE2_API UClass* StaticClass<ADelveMakeGameMode>()
	{
		return ADelveMakeGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADelveMakeGameMode);
	ADelveMakeGameMode::~ADelveMakeGameMode() {}
	struct Z_CompiledInDeferFile_FID_delvemake2_Source_delvemake2_Public_DelveMakeGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_delvemake2_Source_delvemake2_Public_DelveMakeGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADelveMakeGameMode, ADelveMakeGameMode::StaticClass, TEXT("ADelveMakeGameMode"), &Z_Registration_Info_UClass_ADelveMakeGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADelveMakeGameMode), 722560700U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_delvemake2_Source_delvemake2_Public_DelveMakeGameMode_h_3778767825(TEXT("/Script/delvemake2"),
		Z_CompiledInDeferFile_FID_delvemake2_Source_delvemake2_Public_DelveMakeGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_delvemake2_Source_delvemake2_Public_DelveMakeGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
