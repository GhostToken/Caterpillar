// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VOX4U/Public/VoxelComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelComponent() {}
// Cross Module References
	VOX4U_API UClass* Z_Construct_UClass_UVoxelComponent_NoRegister();
	VOX4U_API UClass* Z_Construct_UClass_UVoxelComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_VOX4U();
	VOX4U_API UFunction* Z_Construct_UFunction_UVoxelComponent_AddVoxel();
	VOX4U_API UFunction* Z_Construct_UFunction_UVoxelComponent_ClearVoxel();
	VOX4U_API UFunction* Z_Construct_UFunction_UVoxelComponent_GetVoxelTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	VOX4U_API UFunction* Z_Construct_UFunction_UVoxelComponent_IsUnbeheldVolume();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
	VOX4U_API UClass* Z_Construct_UClass_UVoxel_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
// End Cross Module References
	void UVoxelComponent::StaticRegisterNativesUVoxelComponent()
	{
		UClass* Class = UVoxelComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddVoxel", &UVoxelComponent::execAddVoxel },
			{ "ClearVoxel", &UVoxelComponent::execClearVoxel },
			{ "GetVoxelTransform", &UVoxelComponent::execGetVoxelTransform },
			{ "IsUnbeheldVolume", &UVoxelComponent::execIsUnbeheldVolume },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVoxelComponent_AddVoxel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelComponent_AddVoxel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelComponent_AddVoxel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelComponent, nullptr, "AddVoxel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelComponent_AddVoxel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelComponent_AddVoxel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelComponent_AddVoxel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelComponent_AddVoxel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelComponent_ClearVoxel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelComponent_ClearVoxel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelComponent_ClearVoxel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelComponent, nullptr, "ClearVoxel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelComponent_ClearVoxel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelComponent_ClearVoxel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelComponent_ClearVoxel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelComponent_ClearVoxel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelComponent_GetVoxelTransform_Statics
	{
		struct VoxelComponent_eventGetVoxelTransform_Parms
		{
			FIntVector InVector;
			FTransform OutVoxelTransform;
			bool bWorldSpace;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bWorldSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWorldSpace;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutVoxelTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InVector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelComponent_GetVoxelTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VoxelComponent_eventGetVoxelTransform_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelComponent_GetVoxelTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelComponent_eventGetVoxelTransform_Parms), &Z_Construct_UFunction_UVoxelComponent_GetVoxelTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelComponent_GetVoxelTransform_Statics::NewProp_bWorldSpace_SetBit(void* Obj)
	{
		((VoxelComponent_eventGetVoxelTransform_Parms*)Obj)->bWorldSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelComponent_GetVoxelTransform_Statics::NewProp_bWorldSpace = { "bWorldSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelComponent_eventGetVoxelTransform_Parms), &Z_Construct_UFunction_UVoxelComponent_GetVoxelTransform_Statics::NewProp_bWorldSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelComponent_GetVoxelTransform_Statics::NewProp_OutVoxelTransform = { "OutVoxelTransform", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelComponent_eventGetVoxelTransform_Parms, OutVoxelTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelComponent_GetVoxelTransform_Statics::NewProp_InVector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelComponent_GetVoxelTransform_Statics::NewProp_InVector = { "InVector", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelComponent_eventGetVoxelTransform_Parms, InVector), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UFunction_UVoxelComponent_GetVoxelTransform_Statics::NewProp_InVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelComponent_GetVoxelTransform_Statics::NewProp_InVector_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelComponent_GetVoxelTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelComponent_GetVoxelTransform_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelComponent_GetVoxelTransform_Statics::NewProp_bWorldSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelComponent_GetVoxelTransform_Statics::NewProp_OutVoxelTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelComponent_GetVoxelTransform_Statics::NewProp_InVector,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelComponent_GetVoxelTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel" },
		{ "CPP_Default_bWorldSpace", "false" },
		{ "ModuleRelativePath", "Public/VoxelComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelComponent_GetVoxelTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelComponent, nullptr, "GetVoxelTransform", nullptr, nullptr, sizeof(VoxelComponent_eventGetVoxelTransform_Parms), Z_Construct_UFunction_UVoxelComponent_GetVoxelTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelComponent_GetVoxelTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelComponent_GetVoxelTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelComponent_GetVoxelTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelComponent_GetVoxelTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelComponent_GetVoxelTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelComponent_IsUnbeheldVolume_Statics
	{
		struct VoxelComponent_eventIsUnbeheldVolume_Parms
		{
			FIntVector InVector;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InVector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelComponent_IsUnbeheldVolume_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VoxelComponent_eventIsUnbeheldVolume_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelComponent_IsUnbeheldVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelComponent_eventIsUnbeheldVolume_Parms), &Z_Construct_UFunction_UVoxelComponent_IsUnbeheldVolume_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelComponent_IsUnbeheldVolume_Statics::NewProp_InVector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelComponent_IsUnbeheldVolume_Statics::NewProp_InVector = { "InVector", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelComponent_eventIsUnbeheldVolume_Parms, InVector), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UFunction_UVoxelComponent_IsUnbeheldVolume_Statics::NewProp_InVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelComponent_IsUnbeheldVolume_Statics::NewProp_InVector_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelComponent_IsUnbeheldVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelComponent_IsUnbeheldVolume_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelComponent_IsUnbeheldVolume_Statics::NewProp_InVector,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelComponent_IsUnbeheldVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelComponent_IsUnbeheldVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelComponent, nullptr, "IsUnbeheldVolume", nullptr, nullptr, sizeof(VoxelComponent_eventIsUnbeheldVolume_Parms), Z_Construct_UFunction_UVoxelComponent_IsUnbeheldVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelComponent_IsUnbeheldVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelComponent_IsUnbeheldVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelComponent_IsUnbeheldVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelComponent_IsUnbeheldVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelComponent_IsUnbeheldVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVoxelComponent_NoRegister()
	{
		return UVoxelComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstancedStaticMeshComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InstancedStaticMeshComponents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstancedStaticMeshComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Voxel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Voxel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cell_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Cell;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Cell_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Cell_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Mesh;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHideUnbeheld_MetaData[];
#endif
		static void NewProp_bHideUnbeheld_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideUnbeheld;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CellBounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CellBounds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VOX4U,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVoxelComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelComponent_AddVoxel, "AddVoxel" }, // 1241998328
		{ &Z_Construct_UFunction_UVoxelComponent_ClearVoxel, "ClearVoxel" }, // 3960703171
		{ &Z_Construct_UFunction_UVoxelComponent_GetVoxelTransform, "GetVoxelTransform" }, // 1892412204
		{ &Z_Construct_UFunction_UVoxelComponent_IsUnbeheldVolume, "IsUnbeheldVolume" }, // 3892661046
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Voxel component\n */" },
		{ "HideCategories", "Mobility Trigger" },
		{ "IncludePath", "VoxelComponent.h" },
		{ "ModuleRelativePath", "Public/VoxelComponent.h" },
		{ "ToolTip", "Voxel component" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelComponent_Statics::NewProp_InstancedStaticMeshComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VoxelComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelComponent_Statics::NewProp_InstancedStaticMeshComponents = { "InstancedStaticMeshComponents", nullptr, (EPropertyFlags)0x0020088000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelComponent, InstancedStaticMeshComponents), METADATA_PARAMS(Z_Construct_UClass_UVoxelComponent_Statics::NewProp_InstancedStaticMeshComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelComponent_Statics::NewProp_InstancedStaticMeshComponents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelComponent_Statics::NewProp_InstancedStaticMeshComponents_Inner = { "InstancedStaticMeshComponents", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelComponent_Statics::NewProp_Voxel_MetaData[] = {
		{ "Category", "VoxelComponent" },
		{ "ModuleRelativePath", "Public/VoxelComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelComponent_Statics::NewProp_Voxel = { "Voxel", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelComponent, Voxel), Z_Construct_UClass_UVoxel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelComponent_Statics::NewProp_Voxel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelComponent_Statics::NewProp_Voxel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelComponent_Statics::NewProp_Cell_MetaData[] = {
		{ "Category", "VoxelComponent" },
		{ "ModuleRelativePath", "Public/VoxelComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVoxelComponent_Statics::NewProp_Cell = { "Cell", nullptr, (EPropertyFlags)0x0020080000000045, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelComponent, Cell), METADATA_PARAMS(Z_Construct_UClass_UVoxelComponent_Statics::NewProp_Cell_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelComponent_Statics::NewProp_Cell_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelComponent_Statics::NewProp_Cell_Key_KeyProp = { "Cell_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelComponent_Statics::NewProp_Cell_ValueProp = { "Cell", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelComponent_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "VoxelComponent" },
		{ "ModuleRelativePath", "Public/VoxelComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelComponent_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0020080000000045, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelComponent, Mesh), METADATA_PARAMS(Z_Construct_UClass_UVoxelComponent_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelComponent_Statics::NewProp_Mesh_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelComponent_Statics::NewProp_Mesh_Inner = { "Mesh", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelComponent_Statics::NewProp_bHideUnbeheld_MetaData[] = {
		{ "Category", "VoxelComponent" },
		{ "ModuleRelativePath", "Public/VoxelComponent.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelComponent_Statics::NewProp_bHideUnbeheld_SetBit(void* Obj)
	{
		((UVoxelComponent*)Obj)->bHideUnbeheld = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelComponent_Statics::NewProp_bHideUnbeheld = { "bHideUnbeheld", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelComponent), &Z_Construct_UClass_UVoxelComponent_Statics::NewProp_bHideUnbeheld_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelComponent_Statics::NewProp_bHideUnbeheld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelComponent_Statics::NewProp_bHideUnbeheld_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelComponent_Statics::NewProp_CellBounds_MetaData[] = {
		{ "Category", "VoxelComponent" },
		{ "ModuleRelativePath", "Public/VoxelComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelComponent_Statics::NewProp_CellBounds = { "CellBounds", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelComponent, CellBounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(Z_Construct_UClass_UVoxelComponent_Statics::NewProp_CellBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelComponent_Statics::NewProp_CellBounds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelComponent_Statics::NewProp_InstancedStaticMeshComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelComponent_Statics::NewProp_InstancedStaticMeshComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelComponent_Statics::NewProp_Voxel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelComponent_Statics::NewProp_Cell,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelComponent_Statics::NewProp_Cell_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelComponent_Statics::NewProp_Cell_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelComponent_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelComponent_Statics::NewProp_Mesh_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelComponent_Statics::NewProp_bHideUnbeheld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelComponent_Statics::NewProp_CellBounds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelComponent_Statics::ClassParams = {
		&UVoxelComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVoxelComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelComponent, 4051829657);
	template<> VOX4U_API UClass* StaticClass<UVoxelComponent>()
	{
		return UVoxelComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelComponent(Z_Construct_UClass_UVoxelComponent, &UVoxelComponent::StaticClass, TEXT("/Script/VOX4U"), TEXT("UVoxelComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
