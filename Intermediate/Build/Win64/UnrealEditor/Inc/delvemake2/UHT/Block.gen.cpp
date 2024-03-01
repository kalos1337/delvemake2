// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "delvemake2/Public/Block.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlock() {}
// Cross Module References
	DELVEMAKE2_API UClass* Z_Construct_UClass_ABlock();
	DELVEMAKE2_API UClass* Z_Construct_UClass_ABlock_NoRegister();
	DELVEMAKE2_API UClass* Z_Construct_UClass_UChunk_NoRegister();
	DELVEMAKE2_API UEnum* Z_Construct_UEnum_delvemake2_EBlockType();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_delvemake2();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBlockType;
	static UEnum* EBlockType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBlockType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBlockType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_delvemake2_EBlockType, (UObject*)Z_Construct_UPackage__Script_delvemake2(), TEXT("EBlockType"));
		}
		return Z_Registration_Info_UEnum_EBlockType.OuterSingleton;
	}
	template<> DELVEMAKE2_API UEnum* StaticEnum<EBlockType>()
	{
		return EBlockType_StaticEnum();
	}
	struct Z_Construct_UEnum_delvemake2_EBlockType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_delvemake2_EBlockType_Statics::Enumerators[] = {
		{ "Dirt", (int64)Dirt },
		{ "Rock", (int64)Rock },
		{ "Ore", (int64)Ore },
		{ "Wood", (int64)Wood },
		{ "Wireframe", (int64)Wireframe },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_delvemake2_EBlockType_Statics::Enum_MetaDataParams[] = {
		{ "Dirt.Name", "Dirt" },
		{ "ModuleRelativePath", "Public/Block.h" },
		{ "Ore.Name", "Ore" },
		{ "Rock.Name", "Rock" },
		{ "Wireframe.Name", "Wireframe" },
		{ "Wood.Name", "Wood" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_delvemake2_EBlockType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_delvemake2,
		nullptr,
		"EBlockType",
		"EBlockType",
		Z_Construct_UEnum_delvemake2_EBlockType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_delvemake2_EBlockType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_delvemake2_EBlockType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_delvemake2_EBlockType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_delvemake2_EBlockType()
	{
		if (!Z_Registration_Info_UEnum_EBlockType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBlockType.InnerSingleton, Z_Construct_UEnum_delvemake2_EBlockType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBlockType.InnerSingleton;
	}
	DEFINE_FUNCTION(ABlock::execGetChunk)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UChunk**)Z_Param__Result=P_THIS->GetChunk();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABlock::execSetUpBlockTypeAndMaterial)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_BlockType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetUpBlockTypeAndMaterial(EBlockType(Z_Param_BlockType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABlock::execSetUpBlockMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetUpBlockMesh();
		P_NATIVE_END;
	}
	void ABlock::StaticRegisterNativesABlock()
	{
		UClass* Class = ABlock::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetChunk", &ABlock::execGetChunk },
			{ "SetUpBlockMesh", &ABlock::execSetUpBlockMesh },
			{ "SetUpBlockTypeAndMaterial", &ABlock::execSetUpBlockTypeAndMaterial },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABlock_GetChunk_Statics
	{
		struct Block_eventGetChunk_Parms
		{
			UChunk* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABlock_GetChunk_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Block_eventGetChunk_Parms, ReturnValue), Z_Construct_UClass_UChunk_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABlock_GetChunk_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlock_GetChunk_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABlock_GetChunk_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Block.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlock_GetChunk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlock, nullptr, "GetChunk", nullptr, nullptr, Z_Construct_UFunction_ABlock_GetChunk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlock_GetChunk_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABlock_GetChunk_Statics::Block_eventGetChunk_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlock_GetChunk_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlock_GetChunk_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlock_GetChunk_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABlock_GetChunk_Statics::Block_eventGetChunk_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABlock_GetChunk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlock_GetChunk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABlock_SetUpBlockMesh_Statics
	{
		struct Block_eventSetUpBlockMesh_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABlock_SetUpBlockMesh_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Block_eventSetUpBlockMesh_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABlock_SetUpBlockMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Block_eventSetUpBlockMesh_Parms), &Z_Construct_UFunction_ABlock_SetUpBlockMesh_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABlock_SetUpBlockMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlock_SetUpBlockMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABlock_SetUpBlockMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Block.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlock_SetUpBlockMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlock, nullptr, "SetUpBlockMesh", nullptr, nullptr, Z_Construct_UFunction_ABlock_SetUpBlockMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlock_SetUpBlockMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABlock_SetUpBlockMesh_Statics::Block_eventSetUpBlockMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlock_SetUpBlockMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlock_SetUpBlockMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlock_SetUpBlockMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABlock_SetUpBlockMesh_Statics::Block_eventSetUpBlockMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABlock_SetUpBlockMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlock_SetUpBlockMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABlock_SetUpBlockTypeAndMaterial_Statics
	{
		struct Block_eventSetUpBlockTypeAndMaterial_Parms
		{
			TEnumAsByte<EBlockType> BlockType;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_BlockType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABlock_SetUpBlockTypeAndMaterial_Statics::NewProp_BlockType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ABlock_SetUpBlockTypeAndMaterial_Statics::NewProp_BlockType = { "BlockType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Block_eventSetUpBlockTypeAndMaterial_Parms, BlockType), Z_Construct_UEnum_delvemake2_EBlockType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlock_SetUpBlockTypeAndMaterial_Statics::NewProp_BlockType_MetaData), Z_Construct_UFunction_ABlock_SetUpBlockTypeAndMaterial_Statics::NewProp_BlockType_MetaData) }; // 850329093
	void Z_Construct_UFunction_ABlock_SetUpBlockTypeAndMaterial_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Block_eventSetUpBlockTypeAndMaterial_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABlock_SetUpBlockTypeAndMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Block_eventSetUpBlockTypeAndMaterial_Parms), &Z_Construct_UFunction_ABlock_SetUpBlockTypeAndMaterial_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABlock_SetUpBlockTypeAndMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlock_SetUpBlockTypeAndMaterial_Statics::NewProp_BlockType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlock_SetUpBlockTypeAndMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABlock_SetUpBlockTypeAndMaterial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Block.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlock_SetUpBlockTypeAndMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlock, nullptr, "SetUpBlockTypeAndMaterial", nullptr, nullptr, Z_Construct_UFunction_ABlock_SetUpBlockTypeAndMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlock_SetUpBlockTypeAndMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABlock_SetUpBlockTypeAndMaterial_Statics::Block_eventSetUpBlockTypeAndMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlock_SetUpBlockTypeAndMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlock_SetUpBlockTypeAndMaterial_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlock_SetUpBlockTypeAndMaterial_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABlock_SetUpBlockTypeAndMaterial_Statics::Block_eventSetUpBlockTypeAndMaterial_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABlock_SetUpBlockTypeAndMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlock_SetUpBlockTypeAndMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABlock);
	UClass* Z_Construct_UClass_ABlock_NoRegister()
	{
		return ABlock::StaticClass();
	}
	struct Z_Construct_UClass_ABlock_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BlockMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FatherChunk_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FatherChunk;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicMaterialInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicMaterialInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABlock_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_delvemake2,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlock_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ABlock_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABlock_GetChunk, "GetChunk" }, // 1560083286
		{ &Z_Construct_UFunction_ABlock_SetUpBlockMesh, "SetUpBlockMesh" }, // 1827770200
		{ &Z_Construct_UFunction_ABlock_SetUpBlockTypeAndMaterial, "SetUpBlockTypeAndMaterial" }, // 2451975433
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlock_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlock_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This class represents an individual Block and handles all behavior specific to it.\n" },
#endif
		{ "IncludePath", "Block.h" },
		{ "ModuleRelativePath", "Public/Block.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This class represents an individual Block and handles all behavior specific to it." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlock_Statics::NewProp_BlockMesh_MetaData[] = {
		{ "Category", "Block" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Block.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlock_Statics::NewProp_BlockMesh = { "BlockMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlock, BlockMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlock_Statics::NewProp_BlockMesh_MetaData), Z_Construct_UClass_ABlock_Statics::NewProp_BlockMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlock_Statics::NewProp_FatherChunk_MetaData[] = {
		{ "ModuleRelativePath", "Public/Block.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlock_Statics::NewProp_FatherChunk = { "FatherChunk", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlock, FatherChunk), Z_Construct_UClass_UChunk_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlock_Statics::NewProp_FatherChunk_MetaData), Z_Construct_UClass_ABlock_Statics::NewProp_FatherChunk_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlock_Statics::NewProp_DynamicMaterialInstance_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Dynamic material instance for runtime material changes\n" },
#endif
		{ "ModuleRelativePath", "Public/Block.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dynamic material instance for runtime material changes" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlock_Statics::NewProp_DynamicMaterialInstance = { "DynamicMaterialInstance", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlock, DynamicMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlock_Statics::NewProp_DynamicMaterialInstance_MetaData), Z_Construct_UClass_ABlock_Statics::NewProp_DynamicMaterialInstance_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABlock_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlock_Statics::NewProp_BlockMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlock_Statics::NewProp_FatherChunk,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlock_Statics::NewProp_DynamicMaterialInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABlock_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlock>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABlock_Statics::ClassParams = {
		&ABlock::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABlock_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABlock_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlock_Statics::Class_MetaDataParams), Z_Construct_UClass_ABlock_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlock_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ABlock()
	{
		if (!Z_Registration_Info_UClass_ABlock.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABlock.OuterSingleton, Z_Construct_UClass_ABlock_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABlock.OuterSingleton;
	}
	template<> DELVEMAKE2_API UClass* StaticClass<ABlock>()
	{
		return ABlock::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABlock);
	ABlock::~ABlock() {}
	struct Z_CompiledInDeferFile_FID_delvemake2_Source_delvemake2_Public_Block_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_delvemake2_Source_delvemake2_Public_Block_h_Statics::EnumInfo[] = {
		{ EBlockType_StaticEnum, TEXT("EBlockType"), &Z_Registration_Info_UEnum_EBlockType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 850329093U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_delvemake2_Source_delvemake2_Public_Block_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABlock, ABlock::StaticClass, TEXT("ABlock"), &Z_Registration_Info_UClass_ABlock, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABlock), 137525320U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_delvemake2_Source_delvemake2_Public_Block_h_627575516(TEXT("/Script/delvemake2"),
		Z_CompiledInDeferFile_FID_delvemake2_Source_delvemake2_Public_Block_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_delvemake2_Source_delvemake2_Public_Block_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_delvemake2_Source_delvemake2_Public_Block_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_delvemake2_Source_delvemake2_Public_Block_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
