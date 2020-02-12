// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VOX4UEditor/Private/VoxelFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelFactory() {}
// Cross Module References
	VOX4UEDITOR_API UClass* Z_Construct_UClass_UVoxelFactory_NoRegister();
	VOX4UEDITOR_API UClass* Z_Construct_UClass_UVoxelFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_VOX4UEditor();
	VOX4UEDITOR_API UClass* Z_Construct_UClass_UVoxImportOption_NoRegister();
// End Cross Module References
	void UVoxelFactory::StaticRegisterNativesUVoxelFactory()
	{
	}
	UClass* Z_Construct_UClass_UVoxelFactory_NoRegister()
	{
		return UVoxelFactory::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportOption_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImportOption;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_VOX4UEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Factory\n */" },
		{ "IncludePath", "VoxelFactory.h" },
		{ "ModuleRelativePath", "Private/VoxelFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Factory" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelFactory_Statics::NewProp_ImportOption_MetaData[] = {
		{ "ModuleRelativePath", "Private/VoxelFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelFactory_Statics::NewProp_ImportOption = { "ImportOption", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelFactory, ImportOption), Z_Construct_UClass_UVoxImportOption_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelFactory_Statics::NewProp_ImportOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFactory_Statics::NewProp_ImportOption_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelFactory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelFactory_Statics::NewProp_ImportOption,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelFactory_Statics::ClassParams = {
		&UVoxelFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFactory_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelFactory, 3433091415);
	template<> VOX4UEDITOR_API UClass* StaticClass<UVoxelFactory>()
	{
		return UVoxelFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelFactory(Z_Construct_UClass_UVoxelFactory, &UVoxelFactory::StaticClass, TEXT("/Script/VOX4UEditor"), TEXT("UVoxelFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
