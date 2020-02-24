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
	VOX4UEDITOR_API UEnum* Z_Construct_UEnum_VOX4UEditor_EVoxColorType();
	UPackage* Z_Construct_UPackage__Script_VOX4UEditor();
	VOX4UEDITOR_API UEnum* Z_Construct_UEnum_VOX4UEditor_EVoxImportType();
	VOX4UEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FColorSwap();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	VOX4UEDITOR_API UClass* Z_Construct_UClass_UVoxImportOption_NoRegister();
	VOX4UEDITOR_API UClass* Z_Construct_UClass_UVoxImportOption();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* EVoxColorType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VOX4UEditor_EVoxColorType, Z_Construct_UPackage__Script_VOX4UEditor(), TEXT("EVoxColorType"));
		}
		return Singleton;
	}
	template<> VOX4UEDITOR_API UEnum* StaticEnum<EVoxColorType>()
	{
		return EVoxColorType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxColorType(EVoxColorType_StaticEnum, TEXT("/Script/VOX4UEditor"), TEXT("EVoxColorType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VOX4UEditor_EVoxColorType_Hash() { return 1053712780U; }
	UEnum* Z_Construct_UEnum_VOX4UEditor_EVoxColorType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VOX4UEditor();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxColorType"), 0, Get_Z_Construct_UEnum_VOX4UEditor_EVoxColorType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxColorType::Texture", (int64)EVoxColorType::Texture },
				{ "EVoxColorType::VertexColor", (int64)EVoxColorType::VertexColor },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** Import mesh type */" },
				{ "ModuleRelativePath", "Private/VoxImportOption.h" },
				{ "Texture.Name", "EVoxColorType::Texture" },
				{ "ToolTip", "Import mesh type" },
				{ "VertexColor.Name", "EVoxColorType::VertexColor" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VOX4UEditor,
				nullptr,
				"EVoxColorType",
				"EVoxColorType",
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
class UScriptStruct* FColorSwap::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOX4UEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FColorSwap_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FColorSwap, Z_Construct_UPackage__Script_VOX4UEditor(), TEXT("ColorSwap"), sizeof(FColorSwap), Get_Z_Construct_UScriptStruct_FColorSwap_Hash());
	}
	return Singleton;
}
template<> VOX4UEDITOR_API UScriptStruct* StaticStruct<FColorSwap>()
{
	return FColorSwap::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FColorSwap(FColorSwap::StaticStruct, TEXT("/Script/VOX4UEditor"), TEXT("ColorSwap"), false, nullptr, nullptr);
static struct FScriptStruct_VOX4UEditor_StaticRegisterNativesFColorSwap
{
	FScriptStruct_VOX4UEditor_StaticRegisterNativesFColorSwap()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ColorSwap")),new UScriptStruct::TCppStructOps<FColorSwap>);
	}
} ScriptStruct_VOX4UEditor_StaticRegisterNativesFColorSwap;
	struct Z_Construct_UScriptStruct_FColorSwap_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwappedColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SwappedColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorToSwap_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorToSwap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorSwap_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/VoxImportOption.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FColorSwap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FColorSwap>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorSwap_Statics::NewProp_SwappedColor_MetaData[] = {
		{ "Category", "ColorSwap" },
		{ "ModuleRelativePath", "Private/VoxImportOption.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorSwap_Statics::NewProp_SwappedColor = { "SwappedColor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FColorSwap, SwappedColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorSwap_Statics::NewProp_SwappedColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorSwap_Statics::NewProp_SwappedColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorSwap_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "ColorSwap" },
		{ "ModuleRelativePath", "Private/VoxImportOption.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FColorSwap_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FColorSwap, Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorSwap_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorSwap_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorSwap_Statics::NewProp_ColorToSwap_MetaData[] = {
		{ "Category", "ColorSwap" },
		{ "ModuleRelativePath", "Private/VoxImportOption.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorSwap_Statics::NewProp_ColorToSwap = { "ColorToSwap", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FColorSwap, ColorToSwap), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorSwap_Statics::NewProp_ColorToSwap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorSwap_Statics::NewProp_ColorToSwap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FColorSwap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorSwap_Statics::NewProp_SwappedColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorSwap_Statics::NewProp_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorSwap_Statics::NewProp_ColorToSwap,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FColorSwap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VOX4UEditor,
		nullptr,
		&NewStructOps,
		"ColorSwap",
		sizeof(FColorSwap),
		alignof(FColorSwap),
		Z_Construct_UScriptStruct_FColorSwap_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorSwap_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FColorSwap_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorSwap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FColorSwap()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FColorSwap_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VOX4UEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ColorSwap"), sizeof(FColorSwap), Get_Z_Construct_UScriptStruct_FColorSwap_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FColorSwap_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FColorSwap_Hash() { return 1752582454U; }
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorSwaps_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ColorSwaps;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorSwaps_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ColorType;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ColorType_Underlying;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxImportOption_Statics::NewProp_ColorSwaps_MetaData[] = {
		{ "Category", "ImportType" },
		{ "ModuleRelativePath", "Private/VoxImportOption.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxImportOption_Statics::NewProp_ColorSwaps = { "ColorSwaps", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxImportOption, ColorSwaps), METADATA_PARAMS(Z_Construct_UClass_UVoxImportOption_Statics::NewProp_ColorSwaps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxImportOption_Statics::NewProp_ColorSwaps_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxImportOption_Statics::NewProp_ColorSwaps_Inner = { "ColorSwaps", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FColorSwap, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxImportOption_Statics::NewProp_ColorType_MetaData[] = {
		{ "Category", "ImportType" },
		{ "ModuleRelativePath", "Private/VoxImportOption.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxImportOption_Statics::NewProp_ColorType = { "ColorType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxImportOption, ColorType), Z_Construct_UEnum_VOX4UEditor_EVoxColorType, METADATA_PARAMS(Z_Construct_UClass_UVoxImportOption_Statics::NewProp_ColorType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxImportOption_Statics::NewProp_ColorType_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UVoxImportOption_Statics::NewProp_ColorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
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
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxImportOption_Statics::NewProp_ColorSwaps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxImportOption_Statics::NewProp_ColorSwaps_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxImportOption_Statics::NewProp_ColorType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxImportOption_Statics::NewProp_ColorType_Underlying,
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
	IMPLEMENT_CLASS(UVoxImportOption, 3325836425);
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
