// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VOX4UEDITOR_VoxImportOption_generated_h
#error "VoxImportOption.generated.h already included, missing '#pragma once' in VoxImportOption.h"
#endif
#define VOX4UEDITOR_VoxImportOption_generated_h

#define Caterpillar_Plugins_VOX4U_Source_VOX4UEditor_Private_VoxImportOption_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FColorSwap_Statics; \
	VOX4UEDITOR_API static class UScriptStruct* StaticStruct();


template<> VOX4UEDITOR_API UScriptStruct* StaticStruct<struct FColorSwap>();

#define Caterpillar_Plugins_VOX4U_Source_VOX4UEditor_Private_VoxImportOption_h_52_SPARSE_DATA
#define Caterpillar_Plugins_VOX4U_Source_VOX4UEditor_Private_VoxImportOption_h_52_RPC_WRAPPERS
#define Caterpillar_Plugins_VOX4U_Source_VOX4UEditor_Private_VoxImportOption_h_52_RPC_WRAPPERS_NO_PURE_DECLS
#define Caterpillar_Plugins_VOX4U_Source_VOX4UEditor_Private_VoxImportOption_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxImportOption(); \
	friend struct Z_Construct_UClass_UVoxImportOption_Statics; \
public: \
	DECLARE_CLASS(UVoxImportOption, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VOX4UEditor"), NO_API) \
	DECLARE_SERIALIZER(UVoxImportOption) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define Caterpillar_Plugins_VOX4U_Source_VOX4UEditor_Private_VoxImportOption_h_52_INCLASS \
private: \
	static void StaticRegisterNativesUVoxImportOption(); \
	friend struct Z_Construct_UClass_UVoxImportOption_Statics; \
public: \
	DECLARE_CLASS(UVoxImportOption, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VOX4UEditor"), NO_API) \
	DECLARE_SERIALIZER(UVoxImportOption) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define Caterpillar_Plugins_VOX4U_Source_VOX4UEditor_Private_VoxImportOption_h_52_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxImportOption(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxImportOption) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxImportOption); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxImportOption); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxImportOption(UVoxImportOption&&); \
	NO_API UVoxImportOption(const UVoxImportOption&); \
public:


#define Caterpillar_Plugins_VOX4U_Source_VOX4UEditor_Private_VoxImportOption_h_52_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxImportOption(UVoxImportOption&&); \
	NO_API UVoxImportOption(const UVoxImportOption&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxImportOption); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxImportOption); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVoxImportOption)


#define Caterpillar_Plugins_VOX4U_Source_VOX4UEditor_Private_VoxImportOption_h_52_PRIVATE_PROPERTY_OFFSET
#define Caterpillar_Plugins_VOX4U_Source_VOX4UEditor_Private_VoxImportOption_h_49_PROLOG
#define Caterpillar_Plugins_VOX4U_Source_VOX4UEditor_Private_VoxImportOption_h_52_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Caterpillar_Plugins_VOX4U_Source_VOX4UEditor_Private_VoxImportOption_h_52_PRIVATE_PROPERTY_OFFSET \
	Caterpillar_Plugins_VOX4U_Source_VOX4UEditor_Private_VoxImportOption_h_52_SPARSE_DATA \
	Caterpillar_Plugins_VOX4U_Source_VOX4UEditor_Private_VoxImportOption_h_52_RPC_WRAPPERS \
	Caterpillar_Plugins_VOX4U_Source_VOX4UEditor_Private_VoxImportOption_h_52_INCLASS \
	Caterpillar_Plugins_VOX4U_Source_VOX4UEditor_Private_VoxImportOption_h_52_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Caterpillar_Plugins_VOX4U_Source_VOX4UEditor_Private_VoxImportOption_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Caterpillar_Plugins_VOX4U_Source_VOX4UEditor_Private_VoxImportOption_h_52_PRIVATE_PROPERTY_OFFSET \
	Caterpillar_Plugins_VOX4U_Source_VOX4UEditor_Private_VoxImportOption_h_52_SPARSE_DATA \
	Caterpillar_Plugins_VOX4U_Source_VOX4UEditor_Private_VoxImportOption_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	Caterpillar_Plugins_VOX4U_Source_VOX4UEditor_Private_VoxImportOption_h_52_INCLASS_NO_PURE_DECLS \
	Caterpillar_Plugins_VOX4U_Source_VOX4UEditor_Private_VoxImportOption_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOX4UEDITOR_API UClass* StaticClass<class UVoxImportOption>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Caterpillar_Plugins_VOX4U_Source_VOX4UEditor_Private_VoxImportOption_h


#define FOREACH_ENUM_EVOXCOLORTYPE(op) \
	op(EVoxColorType::Texture) \
	op(EVoxColorType::VertexColor) 

enum class EVoxColorType;
template<> VOX4UEDITOR_API UEnum* StaticEnum<EVoxColorType>();

#define FOREACH_ENUM_EVOXIMPORTTYPE(op) \
	op(EVoxImportType::StaticMesh) \
	op(EVoxImportType::SkeletalMesh) \
	op(EVoxImportType::DestructibleMesh) \
	op(EVoxImportType::Voxel) 

enum class EVoxImportType;
template<> VOX4UEDITOR_API UEnum* StaticEnum<EVoxImportType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
