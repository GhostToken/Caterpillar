// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VOX4UEditor/Private/VoxelActorFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelActorFactory() {}
// Cross Module References
	VOX4UEDITOR_API UClass* Z_Construct_UClass_UVoxelActorFactory_NoRegister();
	VOX4UEDITOR_API UClass* Z_Construct_UClass_UVoxelActorFactory();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UPackage* Z_Construct_UPackage__Script_VOX4UEditor();
// End Cross Module References
	void UVoxelActorFactory::StaticRegisterNativesUVoxelActorFactory()
	{
	}
	UClass* Z_Construct_UClass_UVoxelActorFactory_NoRegister()
	{
		return UVoxelActorFactory::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelActorFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelActorFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_VOX4UEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelActorFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Actor factory\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelActorFactory.h" },
		{ "ModuleRelativePath", "Private/VoxelActorFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Actor factory" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelActorFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelActorFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelActorFactory_Statics::ClassParams = {
		&UVoxelActorFactory::StaticClass,
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
		0x000030ACu,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelActorFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelActorFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelActorFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelActorFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelActorFactory, 1260979502);
	template<> VOX4UEDITOR_API UClass* StaticClass<UVoxelActorFactory>()
	{
		return UVoxelActorFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelActorFactory(Z_Construct_UClass_UVoxelActorFactory, &UVoxelActorFactory::StaticClass, TEXT("/Script/VOX4UEditor"), TEXT("UVoxelActorFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelActorFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
