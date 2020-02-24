// Copyright 2016-2018 mik14a / Admix Network. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include <Engine/EngineTypes.h>
#include <UObject/NoExportTypes.h>
#include "Materials/Material.h"
#include "VoxImportOption.generated.h"

/** Import mesh type */
UENUM()
enum class EVoxImportType
{
	StaticMesh UMETA(DisplayName = "Static Mesh"),
	SkeletalMesh UMETA(DisplayName = "Skeletal Mesh"),
	DestructibleMesh UMETA(DisplayName = "Destructible Mesh"),
	Voxel UMETA(DisplayName = "Voxel"),
};

/** Import mesh type */
UENUM()
enum class EVoxColorType
{
	Texture,
	VertexColor
};

USTRUCT()
struct FColorSwap
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
	FColor ColorToSwap = FColor(0, 255, 0, 255);

	UPROPERTY(EditAnywhere)
	UMaterial* Material;
	
	UPROPERTY(EditAnywhere)
	FColor SwappedColor;;
};

/**
 * Import option
 */
UCLASS(config = EditorPerProjectUserSettings, HideCategories = Object)
class UVoxImportOption : public UObject
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, Category = ImportType)
		EVoxImportType VoxImportType;

	UPROPERTY(EditAnywhere, Category = ImportType)
		EVoxColorType ColorType;

	UPROPERTY(EditAnywhere, Category = ImportType)
		TArray<FColorSwap> ColorSwaps;

	UPROPERTY(EditAnywhere, Category = Generic)
		uint32 bImportXForward : 1;

	UPROPERTY(EditAnywhere, Category = Generic)
		uint32 bImportXYCenter : 1;

	UPROPERTY(EditAnywhere, Category = Generic)
		float Scale;

public:

	UVoxImportOption();

	bool GetImportOption(bool& bOutImportAll);

	const FMeshBuildSettings& GetBuildSettings() const
	{
		return BuildSettings;
	}

private:

	FMeshBuildSettings BuildSettings;

	friend class UVoxAssetImportData;

};
