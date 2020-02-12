// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FIntVector;
struct FTransform;
#ifdef VOX4U_VoxelComponent_generated_h
#error "VoxelComponent.generated.h already included, missing '#pragma once' in VoxelComponent.h"
#endif
#define VOX4U_VoxelComponent_generated_h

#define I__VOX4U_HostProject_Plugins_VOX4U_Source_VOX4U_Public_VoxelComponent_h_19_SPARSE_DATA
#define I__VOX4U_HostProject_Plugins_VOX4U_Source_VOX4U_Public_VoxelComponent_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetVoxelTransform) \
	{ \
		P_GET_STRUCT_REF(FIntVector,Z_Param_Out_InVector); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutVoxelTransform); \
		P_GET_UBOOL(Z_Param_bWorldSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetVoxelTransform(Z_Param_Out_InVector,Z_Param_Out_OutVoxelTransform,Z_Param_bWorldSpace); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsUnbeheldVolume) \
	{ \
		P_GET_STRUCT_REF(FIntVector,Z_Param_Out_InVector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsUnbeheldVolume(Z_Param_Out_InVector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearVoxel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearVoxel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddVoxel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddVoxel(); \
		P_NATIVE_END; \
	}


#define I__VOX4U_HostProject_Plugins_VOX4U_Source_VOX4U_Public_VoxelComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetVoxelTransform) \
	{ \
		P_GET_STRUCT_REF(FIntVector,Z_Param_Out_InVector); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutVoxelTransform); \
		P_GET_UBOOL(Z_Param_bWorldSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetVoxelTransform(Z_Param_Out_InVector,Z_Param_Out_OutVoxelTransform,Z_Param_bWorldSpace); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsUnbeheldVolume) \
	{ \
		P_GET_STRUCT_REF(FIntVector,Z_Param_Out_InVector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsUnbeheldVolume(Z_Param_Out_InVector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearVoxel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearVoxel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddVoxel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddVoxel(); \
		P_NATIVE_END; \
	}


#define I__VOX4U_HostProject_Plugins_VOX4U_Source_VOX4U_Public_VoxelComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelComponent(); \
	friend struct Z_Construct_UClass_UVoxelComponent_Statics; \
public: \
	DECLARE_CLASS(UVoxelComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VOX4U"), NO_API) \
	DECLARE_SERIALIZER(UVoxelComponent)


#define I__VOX4U_HostProject_Plugins_VOX4U_Source_VOX4U_Public_VoxelComponent_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUVoxelComponent(); \
	friend struct Z_Construct_UClass_UVoxelComponent_Statics; \
public: \
	DECLARE_CLASS(UVoxelComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VOX4U"), NO_API) \
	DECLARE_SERIALIZER(UVoxelComponent)


#define I__VOX4U_HostProject_Plugins_VOX4U_Source_VOX4U_Public_VoxelComponent_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelComponent(UVoxelComponent&&); \
	NO_API UVoxelComponent(const UVoxelComponent&); \
public:


#define I__VOX4U_HostProject_Plugins_VOX4U_Source_VOX4U_Public_VoxelComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelComponent(UVoxelComponent&&); \
	NO_API UVoxelComponent(const UVoxelComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVoxelComponent)


#define I__VOX4U_HostProject_Plugins_VOX4U_Source_VOX4U_Public_VoxelComponent_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CellBounds() { return STRUCT_OFFSET(UVoxelComponent, CellBounds); } \
	FORCEINLINE static uint32 __PPO__bHideUnbeheld() { return STRUCT_OFFSET(UVoxelComponent, bHideUnbeheld); } \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(UVoxelComponent, Mesh); } \
	FORCEINLINE static uint32 __PPO__Cell() { return STRUCT_OFFSET(UVoxelComponent, Cell); } \
	FORCEINLINE static uint32 __PPO__Voxel() { return STRUCT_OFFSET(UVoxelComponent, Voxel); } \
	FORCEINLINE static uint32 __PPO__InstancedStaticMeshComponents() { return STRUCT_OFFSET(UVoxelComponent, InstancedStaticMeshComponents); }


#define I__VOX4U_HostProject_Plugins_VOX4U_Source_VOX4U_Public_VoxelComponent_h_16_PROLOG
#define I__VOX4U_HostProject_Plugins_VOX4U_Source_VOX4U_Public_VoxelComponent_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	I__VOX4U_HostProject_Plugins_VOX4U_Source_VOX4U_Public_VoxelComponent_h_19_PRIVATE_PROPERTY_OFFSET \
	I__VOX4U_HostProject_Plugins_VOX4U_Source_VOX4U_Public_VoxelComponent_h_19_SPARSE_DATA \
	I__VOX4U_HostProject_Plugins_VOX4U_Source_VOX4U_Public_VoxelComponent_h_19_RPC_WRAPPERS \
	I__VOX4U_HostProject_Plugins_VOX4U_Source_VOX4U_Public_VoxelComponent_h_19_INCLASS \
	I__VOX4U_HostProject_Plugins_VOX4U_Source_VOX4U_Public_VoxelComponent_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define I__VOX4U_HostProject_Plugins_VOX4U_Source_VOX4U_Public_VoxelComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	I__VOX4U_HostProject_Plugins_VOX4U_Source_VOX4U_Public_VoxelComponent_h_19_PRIVATE_PROPERTY_OFFSET \
	I__VOX4U_HostProject_Plugins_VOX4U_Source_VOX4U_Public_VoxelComponent_h_19_SPARSE_DATA \
	I__VOX4U_HostProject_Plugins_VOX4U_Source_VOX4U_Public_VoxelComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	I__VOX4U_HostProject_Plugins_VOX4U_Source_VOX4U_Public_VoxelComponent_h_19_INCLASS_NO_PURE_DECLS \
	I__VOX4U_HostProject_Plugins_VOX4U_Source_VOX4U_Public_VoxelComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOX4U_API UClass* StaticClass<class UVoxelComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID I__VOX4U_HostProject_Plugins_VOX4U_Source_VOX4U_Public_VoxelComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
