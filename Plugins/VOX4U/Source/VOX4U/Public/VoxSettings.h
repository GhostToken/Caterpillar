// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "VoxCommon.h"
#include "VoxSettings.generated.h"

/**
 * Global Vox settings
 */
UCLASS(config = Editor, defaultconfig)
class VOX4U_API UVoxSettings : public UDeveloperSettings
{
	GENERATED_BODY()

	public:

	UPROPERTY(EditAnywhere, config, Category = VOX)
		EVoxImportType VoxImportType;

	UPROPERTY(EditAnywhere, Category = "VOX|Destructible")
		FIntVector Slice = FIntVector(2, 2, 2);

	UPROPERTY(EditAnywhere, config, Category = "VOX|Colors")
		EVoxColorType ColorImportType;

	UPROPERTY(EditAnywhere, config, Category = "VOX|Colors")
		TArray<FColorSwap> ColorSwaps;

	UPROPERTY(EditAnywhere, config, Category = "VOX|Colors")
		bool UseCommonVertexColorMaterial;

	UPROPERTY(EditAnywhere, config, Category = "VOX|Size")
		uint32 bImportXForward : 1;

	UPROPERTY(EditAnywhere, config, Category = "VOX|Size")
		uint32 bImportXYCenter : 1;

	UPROPERTY(EditAnywhere, config, Category = "VOX|Size")
		float Scale;

	UPROPERTY(EditAnywhere, config, Category = "VOX|Colors")
		TSoftObjectPtr<UMaterial> VertexGlobalMaterial;
	
	UPROPERTY(EditAnywhere, config, Category = "VOX|Colors")
		TSoftObjectPtr<UMaterial> TextureBaseMaterial;

	static const UVoxSettings& Get()
	{
		return *GetMutableDefault<UVoxSettings>(UVoxSettings::StaticClass());
	}
};
