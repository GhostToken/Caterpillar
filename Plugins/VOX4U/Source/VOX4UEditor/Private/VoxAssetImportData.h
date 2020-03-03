// Copyright 2016-2018 mik14a / Admix Network. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include <EditorFramework/AssetImportData.h>
#include "VoxImportOption.h"
#include "VoxAssetImportData.generated.h"

/**
 * Asset import data
 */
UCLASS()
class UVoxAssetImportData : public UAssetImportData
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, Category = Generic)
	EVoxImportType VoxImportType;

	UPROPERTY(EditAnywhere, Category = "Generic|Destructible")
	FIntVector Slice = FIntVector(2, 2, 2);

	UPROPERTY(EditAnywhere, Category = "Generic|Colors")
	EVoxColorType ColorImportType;

	UPROPERTY(EditAnywhere, Category = "Generic|Colors")
	TArray<FColorSwap> ColorSwaps;

	UPROPERTY(EditAnywhere, Category = "Generic|Colors")
	bool UseCommonVertexColorMaterial;

	UPROPERTY(EditAnywhere, Category = "Generic|Size")
	uint32 bImportXForward : 1;

	UPROPERTY(EditAnywhere, Category = "Generic|Size")
	uint32 bImportXYCenter : 1;

	UPROPERTY(EditAnywhere, Category = "Generic|Size")
	float Scale;
	
	UPROPERTY(EditAnywhere, Category = "Generic|Colors")
	UMaterial* Palette;

public:

	UVoxAssetImportData();

	void ToVoxImportOption(UVoxImportOption& OutVoxImportOption);

	void FromVoxImportOption(const UVoxImportOption& VoxImportOption);
};
