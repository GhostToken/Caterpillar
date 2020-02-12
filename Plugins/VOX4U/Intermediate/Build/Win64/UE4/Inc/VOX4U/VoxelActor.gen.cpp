// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VOX4U/Public/VoxelActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelActor() {}
// Cross Module References
	VOX4U_API UClass* Z_Construct_UClass_AVoxelActor_NoRegister();
	VOX4U_API UClass* Z_Construct_UClass_AVoxelActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_VOX4U();
	VOX4U_API UClass* Z_Construct_UClass_UVoxelComponent_NoRegister();
// End Cross Module References
	void AVoxelActor::StaticRegisterNativesAVoxelActor()
	{
	}
	UClass* Z_Construct_UClass_AVoxelActor_NoRegister()
	{
		return AVoxelActor::StaticClass();
	}
	struct Z_Construct_UClass_AVoxelActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoxelComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VoxelComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVoxelActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VOX4U,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelActor.h" },
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelActor_Statics::NewProp_VoxelComponent_MetaData[] = {
		{ "Category", "VoxelActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_VoxelComponent = { "VoxelComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelActor, VoxelComponent), Z_Construct_UClass_UVoxelComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxelActor_Statics::NewProp_VoxelComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelActor_Statics::NewProp_VoxelComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVoxelActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelActor_Statics::NewProp_VoxelComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVoxelActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVoxelActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVoxelActor_Statics::ClassParams = {
		&AVoxelActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVoxelActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVoxelActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVoxelActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVoxelActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVoxelActor, 2657887270);
	template<> VOX4U_API UClass* StaticClass<AVoxelActor>()
	{
		return AVoxelActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVoxelActor(Z_Construct_UClass_AVoxelActor, &AVoxelActor::StaticClass, TEXT("/Script/VOX4U"), TEXT("AVoxelActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVoxelActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
