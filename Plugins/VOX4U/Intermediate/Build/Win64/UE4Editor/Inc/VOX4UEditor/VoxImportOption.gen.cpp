// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VOX4UEditor/Private/VoxImportOption.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxImportOption() {}
// Cross Module References
	VOX4UEDITOR_API UEnum* Z_Construct_UEnum_VOX4UEditor_EVoxImportType();
	UPackage* Z_Construct_UPackage__Script_VOX4UEditor();
	VOX4UEDITOR_API UClass* Z_Construct_UClass_UVoxImportOption_NoRegister();
	VOX4UEDITOR_API UClass* Z_Construct_UClass_UVoxImportOption();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* EVoxImportType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VOX4UEditor_EVoxImportType, Z_Construct_UPackage__Script_VOX4UEditor(), TEXT("EVoxImportType"));
		}
		return Singleton;
	}
	template<> VOX4UEDITOR_API UEnum* StaticEnum<EVoxImportType>()
	{
		return EVoxImportType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxImportType(EVoxImportType_StaticEnum, TEXT("/Script/VOX4UEditor"), TEXT("EVoxImportType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VOX4UEditor_EVoxImportType_Hash() { return 2195632544U; }
	UEnum* Z_Construct_UEnum_VOX4UEditor_EVoxImportType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VOX4UEditor();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxImportType"), 0, Get_Z_Construct_UEnum_VOX4UEditor_EVoxImportType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxImportType::StaticMesh", (int64)EVoxImportType::StaticMesh },
				{ "EVoxImportType::SkeletalMesh", (int64)EVoxImportType::SkeletalMesh },
				{ "EVoxImportType::DestructibleMesh", (int64)EVoxImportType::DestructibleMesh },
				{ "EVoxImportType::Voxel", (int64)EVoxImportType::Voxel },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** Import mesh type */" },
				{ "DestructibleMesh.DisplayName", "Destructible Mesh" },
				{ "DestructibleMesh.Name", "EVoxImportType::DestructibleMesh" },
				{ "ModuleRelativePath", "Private/VoxImportOption.h" },
				{ "SkeletalMesh.DisplayName", "Skeletal Mesh" },
				{ "SkeletalMesh.Name", "EVoxImportType::SkeletalMesh" },
				{ "StaticMesh.DisplayName", "Static Mesh" },
				{ "StaticMesh.Name", "EVoxImportType::StaticMesh" },
				{ "ToolTip", "Import mesh type" },
				{ "Voxel.DisplayName", "Voxel" },
				{ "Voxel.Name", "EVoxImportType::Voxel" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VOX4UEditor,
				nullptr,
				"EVoxImportType",
				"EVoxImportType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UVoxImportOption::StaticRegisterNativesUVoxImportOption()
	{
	}
	UClass* Z_Construct_UClass_UVoxImportOption_NoRegister()
	{
		return UVoxImportOption::StaticClass();
	}
	struct Z_Construct_UClass_UVoxImportOption_Statics
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoxImportType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_VoxImportType;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_VoxImportType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxImportOption_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VOX4UEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxImportOption_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Import option\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxImportOption.h" },
		{ "ModuleRelativePath", "Private/VoxImportOption.h" },
		{ "ToolTip", "Import option" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxImportOption_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Generic" },
		{ "ModuleRelativePath", "Private/VoxImportOption.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxImportOption_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxImportOption, Scale), METADATA_PARAMS(Z_Construct_UClass_UVoxImportOption_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxImportOption_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxImportOption_Statics::NewProp_bImportXYCenter_MetaData[] = {
		{ "Category", "Generic" },
		{ "ModuleRelativePath", "Private/VoxImportOption.h" },
	};
#endif
	void Z_Construct_UClass_UVoxImportOption_Statics::NewProp_bImportXYCenter_SetBit(void* Obj)
	{
		((UVoxImportOption*)Obj)->bImportXYCenter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxImportOption_Statics::NewProp_bImportXYCenter = { "bImportXYCenter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UVoxImportOption), &Z_Construct_UClass_UVoxImportOption_Statics::NewProp_bImportXYCenter_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxImportOption_Statics::NewProp_bImportXYCenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxImportOption_Statics::NewProp_bImportXYCenter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxImportOption_Statics::NewProp_bImportXForward_MetaData[] = {
		{ "Category", "Generic" },
		{ "ModuleRelativePath", "Private/VoxImportOption.h" },
	};
#endif
	void Z_Construct_UClass_UVoxImportOption_Statics::NewProp_bImportXForward_SetBit(void* Obj)
	{
		((UVoxImportOption*)Obj)->bImportXForward = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxImportOption_Statics::NewProp_bImportXForward = { "bImportXForward", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UVoxImportOption), &Z_Construct_UClass_UVoxImportOption_Statics::NewProp_bImportXForward_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxImportOption_Statics::NewProp_bImportXForward_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxImportOption_Statics::NewProp_bImportXForward_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxImportOption_Statics::NewProp_VoxImportType_MetaData[] = {
		{ "Category", "ImportType" },
		{ "ModuleRelativePath", "Private/VoxImportOption.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxImportOption_Statics::NewProp_VoxImportType = { "VoxImportType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxImportOption, VoxImportType), Z_Construct_UEnum_VOX4UEditor_EVoxImportType, METADATA_PARAMS(Z_Construct_UClass_UVoxImportOption_Statics::NewProp_VoxImportType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxImportOption_Statics::NewProp_VoxImportType_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UVoxImportOption_Statics::NewProp_VoxImportType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxImportOption_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxImportOption_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxImportOption_Statics::NewProp_bImportXYCenter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxImportOption_Statics::NewProp_bImportXForward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxImportOption_Statics::NewProp_VoxImportType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxImportOption_Statics::NewProp_VoxImportType_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxImportOption_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxImportOption>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxImportOption_Statics::ClassParams = {
		&UVoxImportOption::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxImportOption_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxImportOption_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxImportOption_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxImportOption_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxImportOption()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxImportOption_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxImportOption, 3780636208);
	template<> VOX4UEDITOR_API UClass* StaticClass<UVoxImportOption>()
	{
		return UVoxImportOption::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxImportOption(Z_Construct_UClass_UVoxImportOption, &UVoxImportOption::StaticClass, TEXT("/Script/VOX4UEditor"), TEXT("UVoxImportOption"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxImportOption);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
