// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VOX4UEditor/Private/VoxAssetImportData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxAssetImportData() {}
// Cross Module References
	VOX4UEDITOR_API UClass* Z_Construct_UClass_UVoxAssetImportData_NoRegister();
	VOX4UEDITOR_API UClass* Z_Construct_UClass_UVoxAssetImportData();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData();
	UPackage* Z_Construct_UPackage__Script_VOX4UEditor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	VOX4U_API UScriptStruct* Z_Construct_UScriptStruct_FColorSwap();
	VOX4U_API UEnum* Z_Construct_UEnum_VOX4U_EVoxColorType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	VOX4U_API UEnum* Z_Construct_UEnum_VOX4U_EVoxImportType();
// End Cross Module References
	void UVoxAssetImportData::StaticRegisterNativesUVoxAssetImportData()
	{
	}
	UClass* Z_Construct_UClass_UVoxAssetImportData_NoRegister()
	{
		return UVoxAssetImportData::StaticClass();
	}
	struct Z_Construct_UClass_UVoxAssetImportData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Palette_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Palette;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bImportXYCenter_MetaData[];
#endif
		static void NewProp_bImportXYCenter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImportXYCenter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bImportXForward_MetaData[];
#endif
		static void NewProp_bImportXForward_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImportXForward;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseCommonVertexColorMaterial_MetaData[];
#endif
		static void NewProp_UseCommonVertexColorMaterial_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseCommonVertexColorMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorSwaps_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ColorSwaps;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorSwaps_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorImportType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ColorImportType;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ColorImportType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slice_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Slice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoxImportType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_VoxImportType;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_VoxImportType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxAssetImportData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetImportData,
		(UObject* (*)())Z_Construct_UPackage__Script_VOX4UEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxAssetImportData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Asset import data\n */" },
		{ "IncludePath", "VoxAssetImportData.h" },
		{ "ModuleRelativePath", "Private/VoxAssetImportData.h" },
		{ "ToolTip", "Asset import data" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_Palette_MetaData[] = {
		{ "Category", "Generic|Colors" },
		{ "ModuleRelativePath", "Private/VoxAssetImportData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_Palette = { "Palette", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxAssetImportData, Palette), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_Palette_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_Palette_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Generic|Size" },
		{ "ModuleRelativePath", "Private/VoxAssetImportData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxAssetImportData, Scale), METADATA_PARAMS(Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_bImportXYCenter_MetaData[] = {
		{ "Category", "Generic|Size" },
		{ "ModuleRelativePath", "Private/VoxAssetImportData.h" },
	};
#endif
	void Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_bImportXYCenter_SetBit(void* Obj)
	{
		((UVoxAssetImportData*)Obj)->bImportXYCenter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_bImportXYCenter = { "bImportXYCenter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UVoxAssetImportData), &Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_bImportXYCenter_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_bImportXYCenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_bImportXYCenter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_bImportXForward_MetaData[] = {
		{ "Category", "Generic|Size" },
		{ "ModuleRelativePath", "Private/VoxAssetImportData.h" },
	};
#endif
	void Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_bImportXForward_SetBit(void* Obj)
	{
		((UVoxAssetImportData*)Obj)->bImportXForward = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_bImportXForward = { "bImportXForward", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UVoxAssetImportData), &Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_bImportXForward_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_bImportXForward_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_bImportXForward_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_UseCommonVertexColorMaterial_MetaData[] = {
		{ "Category", "Generic|Colors" },
		{ "ModuleRelativePath", "Private/VoxAssetImportData.h" },
	};
#endif
	void Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_UseCommonVertexColorMaterial_SetBit(void* Obj)
	{
		((UVoxAssetImportData*)Obj)->UseCommonVertexColorMaterial = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_UseCommonVertexColorMaterial = { "UseCommonVertexColorMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxAssetImportData), &Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_UseCommonVertexColorMaterial_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_UseCommonVertexColorMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_UseCommonVertexColorMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_ColorSwaps_MetaData[] = {
		{ "Category", "Generic|Colors" },
		{ "ModuleRelativePath", "Private/VoxAssetImportData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_ColorSwaps = { "ColorSwaps", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxAssetImportData, ColorSwaps), METADATA_PARAMS(Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_ColorSwaps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_ColorSwaps_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_ColorSwaps_Inner = { "ColorSwaps", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FColorSwap, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_ColorImportType_MetaData[] = {
		{ "Category", "Generic|Colors" },
		{ "ModuleRelativePath", "Private/VoxAssetImportData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_ColorImportType = { "ColorImportType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxAssetImportData, ColorImportType), Z_Construct_UEnum_VOX4U_EVoxColorType, METADATA_PARAMS(Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_ColorImportType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_ColorImportType_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_ColorImportType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_Slice_MetaData[] = {
		{ "Category", "Generic|Destructible" },
		{ "ModuleRelativePath", "Private/VoxAssetImportData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_Slice = { "Slice", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxAssetImportData, Slice), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_Slice_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_Slice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_VoxImportType_MetaData[] = {
		{ "Category", "Generic" },
		{ "ModuleRelativePath", "Private/VoxAssetImportData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_VoxImportType = { "VoxImportType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxAssetImportData, VoxImportType), Z_Construct_UEnum_VOX4U_EVoxImportType, METADATA_PARAMS(Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_VoxImportType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_VoxImportType_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_VoxImportType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxAssetImportData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_Palette,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_bImportXYCenter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_bImportXForward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_UseCommonVertexColorMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_ColorSwaps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_ColorSwaps_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_ColorImportType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_ColorImportType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_Slice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_VoxImportType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_VoxImportType_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxAssetImportData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxAssetImportData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxAssetImportData_Statics::ClassParams = {
		&UVoxAssetImportData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxAssetImportData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxAssetImportData_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxAssetImportData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxAssetImportData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxAssetImportData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxAssetImportData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxAssetImportData, 4223344993);
	template<> VOX4UEDITOR_API UClass* StaticClass<UVoxAssetImportData>()
	{
		return UVoxAssetImportData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxAssetImportData(Z_Construct_UClass_UVoxAssetImportData, &UVoxAssetImportData::StaticClass, TEXT("/Script/VOX4UEditor"), TEXT("UVoxAssetImportData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxAssetImportData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
