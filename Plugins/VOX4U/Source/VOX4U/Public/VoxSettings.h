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

	UPROPERTY(EditAnywhere, config, Category = VOX)
		EVoxColorType ColorImportType;

	UPROPERTY(EditAnywhere, config, Category = VOX)
		TArray<FColorSwap> ColorSwaps;

	UPROPERTY(EditAnywhere, config, Category = VOX)
		bool UseCommonVertexColorMaterial;

	UPROPERTY(EditAnywhere, config, Category = VOX)
		uint32 bImportXForward : 1;

	UPROPERTY(EditAnywhere, config, Category = VOX)
		uint32 bImportXYCenter : 1;

	UPROPERTY(EditAnywhere, config, Category = VOX)
		float Scale;

	UPROPERTY(EditAnywhere, config, Category = VOX)
		TSoftObjectPtr<UMaterial> VertexGlobalMaterial;
	

	static const UVoxSettings& Get()
	{
		return *GetMutableDefault<UVoxSettings>(UVoxSettings::StaticClass());
	}
};
