// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Materials/Material.h"
#include "VoxCommon.generated.h"


/** Import mesh type */
UENUM()
enum class EVoxImportType
{
	StaticMesh,
	SkeletalMesh,
	DestructibleMesh,
	Voxel
};

/** Import mesh type */
UENUM()
enum class EVoxColorType
{
	Texture,
	VertexColor
};

USTRUCT()
struct VOX4U_API FColorSwap
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