// Copyright 2016-2018 mik14a / Admix Network. All Rights Reserved.

#include "VoxAssetImportData.h"

UVoxAssetImportData::UVoxAssetImportData()
	: VoxImportType(EVoxImportType::StaticMesh)
	, ColorImportType(EVoxColorType::VertexColor)
	, UseCommonVertexColorMaterial(true)
	, bImportXForward(true)
	, bImportXYCenter(true)
	, Scale(10.f)
	, Palette(nullptr)
{
}

void UVoxAssetImportData::ToVoxImportOption(UVoxImportOption& OutVoxImportOption)
{
	OutVoxImportOption.VoxImportType = VoxImportType;
	OutVoxImportOption.Slice = Slice;
	OutVoxImportOption.ColorImportType = ColorImportType;
	
	OutVoxImportOption.ColorSwaps.Empty();
	for (auto& Swap : ColorSwaps)
	{
		OutVoxImportOption.ColorSwaps.Add(Swap);
	}
	
	OutVoxImportOption.UseCommonVertexColorMaterial = UseCommonVertexColorMaterial;
	OutVoxImportOption.bImportXForward = bImportXForward;
	OutVoxImportOption.bImportXYCenter = bImportXYCenter;
	OutVoxImportOption.Scale = Scale;
	OutVoxImportOption.Palette = Palette;
	OutVoxImportOption.BuildSettings.BuildScale3D = FVector(Scale);
}

void UVoxAssetImportData::FromVoxImportOption(const UVoxImportOption& VoxImportOption)
{
	VoxImportType = VoxImportOption.VoxImportType;
	Slice = VoxImportOption.Slice;
	ColorImportType = VoxImportOption.ColorImportType;
	ColorSwaps.Empty();
	for (auto& Swap : VoxImportOption.ColorSwaps)
	{
		ColorSwaps.Add(Swap);
	}
	
	UseCommonVertexColorMaterial = VoxImportOption.UseCommonVertexColorMaterial;
	ColorImportType = VoxImportOption.ColorImportType;
	bImportXForward = VoxImportOption.bImportXForward;
	bImportXYCenter = VoxImportOption.bImportXYCenter;
	Scale = VoxImportOption.Scale;
	Palette = VoxImportOption.Palette;
}
