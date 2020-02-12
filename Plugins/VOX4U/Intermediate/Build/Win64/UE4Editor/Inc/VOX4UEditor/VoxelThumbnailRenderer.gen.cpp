// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VOX4UEditor/Private/VoxelThumbnailRenderer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelThumbnailRenderer() {}
// Cross Module References
	VOX4UEDITOR_API UClass* Z_Construct_UClass_UVoxelThumbnailRenderer_NoRegister();
	VOX4UEDITOR_API UClass* Z_Construct_UClass_UVoxelThumbnailRenderer();
	UNREALED_API UClass* Z_Construct_UClass_UDefaultSizedThumbnailRenderer();
	UPackage* Z_Construct_UPackage__Script_VOX4UEditor();
// End Cross Module References
	void UVoxelThumbnailRenderer::StaticRegisterNativesUVoxelThumbnailRenderer()
	{
	}
	UClass* Z_Construct_UClass_UVoxelThumbnailRenderer_NoRegister()
	{
		return UVoxelThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDefaultSizedThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_VOX4UEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Voxel asset thumbnail renderer\n */" },
		{ "IncludePath", "VoxelThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Private/VoxelThumbnailRenderer.h" },
		{ "ToolTip", "Voxel asset thumbnail renderer" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelThumbnailRenderer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelThumbnailRenderer_Statics::ClassParams = {
		&UVoxelThumbnailRenderer::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelThumbnailRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelThumbnailRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelThumbnailRenderer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelThumbnailRenderer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelThumbnailRenderer, 2510569092);
	template<> VOX4UEDITOR_API UClass* StaticClass<UVoxelThumbnailRenderer>()
	{
		return UVoxelThumbnailRenderer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelThumbnailRenderer(Z_Construct_UClass_UVoxelThumbnailRenderer, &UVoxelThumbnailRenderer::StaticClass, TEXT("/Script/VOX4UEditor"), TEXT("UVoxelThumbnailRenderer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelThumbnailRenderer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
