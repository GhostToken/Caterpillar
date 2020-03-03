// Copyright 2016-2018 mik14a / Admix Network. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include <Engine/EngineTypes.h>
#include <UObject/NoExportTypes.h>
#include "Materials/Material.h"
#include "VoxSettings.h"
#include "VoxImportOption.generated.h"

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

	UPROPERTY(EditAnywhere, Category = "ImportType|Destructible")
		FIntVector Slice = FIntVector(2, 2, 2);

	UPROPERTY(EditAnywhere, Category = "ImportType|Colors")
		EVoxColorType ColorImportType;

	UPROPERTY(EditAnywhere, Category = "ImportType|Colors")
		TArray<FColorSwap> ColorSwaps;

	UPROPERTY(EditAnywhere, Category = "ImportType|Colors")
		bool UseCommonVertexColorMaterial;

	UPROPERTY(EditAnywhere, Category = "ImportType|Size")
		uint32 bImportXForward : 1;

	UPROPERTY(EditAnywhere, Category = "ImportType|Size")
		uint32 bImportXYCenter : 1;

	UPROPERTY(EditAnywhere, Category = "ImportType|Size")
		float Scale;
	
	UPROPERTY(EditAnywhere, Category = "ImportType|Colors")
		UMaterial* Palette;

public:

	UVoxImportOption();

	bool GetImportOption(bool& bOutImportAll);

	const FMeshBuildSettings& GetBuildSettings() const
	{
		return BuildSettings;
	}

	void ApplyDefaultSettings();

private:

	FMeshBuildSettings BuildSettings;

	friend class UVoxAssetImportData;
};
