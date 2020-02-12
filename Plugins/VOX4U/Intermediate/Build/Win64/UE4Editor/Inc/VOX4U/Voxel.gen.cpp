// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VOX4U/Public/Voxel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxel() {}
// Cross Module References
	VOX4U_API UClass* Z_Construct_UClass_UVoxel_NoRegister();
	VOX4U_API UClass* Z_Construct_UClass_UVoxel();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_VOX4U();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
// End Cross Module References
	void UVoxel::StaticRegisterNativesUVoxel()
	{
	}
	UClass* Z_Construct_UClass_UVoxel_NoRegister()
	{
		return UVoxel::StaticClass();
	}
	struct Z_Construct_UClass_UVoxel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetImportData;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Voxel_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Voxel;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Voxel_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Voxel_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Mesh;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bXYCenter_MetaData[];
#endif
		static void NewProp_bXYCenter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bXYCenter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CellBounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CellBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Size;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VOX4U,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxel_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * VOXEL Asset\n */" },
		{ "IncludePath", "Voxel.h" },
		{ "ModuleRelativePath", "Public/Voxel.h" },
		{ "ToolTip", "VOXEL Asset" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxel_Statics::NewProp_AssetImportData_MetaData[] = {
		{ "Category", "Reimport" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Voxel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxel_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x0012000800080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxel, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxel_Statics::NewProp_AssetImportData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxel_Statics::NewProp_AssetImportData_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxel_Statics::NewProp_Voxel_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/Voxel.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVoxel_Statics::NewProp_Voxel = { "Voxel", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxel, Voxel), METADATA_PARAMS(Z_Construct_UClass_UVoxel_Statics::NewProp_Voxel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxel_Statics::NewProp_Voxel_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxel_Statics::NewProp_Voxel_Key_KeyProp = { "Voxel_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxel_Statics::NewProp_Voxel_ValueProp = { "Voxel", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxel_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/Voxel.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxel_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000010041, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxel, Mesh), METADATA_PARAMS(Z_Construct_UClass_UVoxel_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxel_Statics::NewProp_Mesh_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxel_Statics::NewProp_Mesh_Inner = { "Mesh", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxel_Statics::NewProp_bXYCenter_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/Voxel.h" },
	};
#endif
	void Z_Construct_UClass_UVoxel_Statics::NewProp_bXYCenter_SetBit(void* Obj)
	{
		((UVoxel*)Obj)->bXYCenter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxel_Statics::NewProp_bXYCenter = { "bXYCenter", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UVoxel), &Z_Construct_UClass_UVoxel_Statics::NewProp_bXYCenter_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxel_Statics::NewProp_bXYCenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxel_Statics::NewProp_bXYCenter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxel_Statics::NewProp_CellBounds_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/Voxel.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxel_Statics::NewProp_CellBounds = { "CellBounds", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxel, CellBounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(Z_Construct_UClass_UVoxel_Statics::NewProp_CellBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxel_Statics::NewProp_CellBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxel_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/Voxel.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxel_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxel, Size), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UClass_UVoxel_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxel_Statics::NewProp_Size_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxel_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxel_Statics::NewProp_AssetImportData,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxel_Statics::NewProp_Voxel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxel_Statics::NewProp_Voxel_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxel_Statics::NewProp_Voxel_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxel_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxel_Statics::NewProp_Mesh_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxel_Statics::NewProp_bXYCenter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxel_Statics::NewProp_CellBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxel_Statics::NewProp_Size,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxel_Statics::ClassParams = {
		&UVoxel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxel_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxel, 1309615595);
	template<> VOX4U_API UClass* StaticClass<UVoxel>()
	{
		return UVoxel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxel(Z_Construct_UClass_UVoxel, &UVoxel::StaticClass, TEXT("/Script/VOX4U"), TEXT("UVoxel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
