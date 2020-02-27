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

	UPROPERTY(EditAnywhere, Category = ImportType)
		EVoxColorType ColorImportType;

	UPROPERTY(EditAnywhere, Category = ImportType)
		TArray<FColorSwap> ColorSwaps;

	UPROPERTY(EditAnywhere, Category = ImportType)
		bool UseCommonVertexColorMaterial;

	UPROPERTY(EditAnywhere, Category = ImportType)
		uint32 bImportXForward : 1;

	UPROPERTY(EditAnywhere, Category = ImportType)
		uint32 bImportXYCenter : 1;

	UPROPERTY(EditAnywhere, Category = ImportType)
		float Scale;
	
	UPROPERTY(EditAnywhere, Category = ImportType)
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
