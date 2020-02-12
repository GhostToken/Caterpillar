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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Generic" },
		{ "ModuleRelativePath", "Private/VoxAssetImportData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxAssetImportData, Scale), METADATA_PARAMS(Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_bImportXYCenter_MetaData[] = {
		{ "Category", "Generic" },
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
		{ "Category", "Generic" },
		{ "ModuleRelativePath", "Private/VoxAssetImportData.h" },
	};
#endif
	void Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_bImportXForward_SetBit(void* Obj)
	{
		((UVoxAssetImportData*)Obj)->bImportXForward = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_bImportXForward = { "bImportXForward", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UVoxAssetImportData), &Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_bImportXForward_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_bImportXForward_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_bImportXForward_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxAssetImportData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_bImportXYCenter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxAssetImportData_Statics::NewProp_bImportXForward,
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
	IMPLEMENT_CLASS(UVoxAssetImportData, 2568253918);
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
