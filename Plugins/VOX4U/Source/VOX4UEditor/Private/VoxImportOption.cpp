// Copyright 2016-2018 mik14a / Admix Network. All Rights Reserved.

#include "VoxImportOption.h"
#include <Framework/Application/SlateApplication.h>
#include <Interfaces/IMainFrameModule.h>
#include <Modules/ModuleManager.h>
#include "SVoxOptionWidget.h"

UVoxImportOption::UVoxImportOption()
	: VoxImportType(EVoxImportType::StaticMesh)
	, ColorImportType(EVoxColorType::VertexColor)
	, UseCommonVertexColorMaterial(true)
	, bImportXForward(true)
	, bImportXYCenter(true)
	, Scale(10.f)
	, Palette(nullptr)
{
	BuildSettings.BuildScale3D = FVector(Scale);

	ApplyDefaultSettings();
}

bool UVoxImportOption::GetImportOption(bool& bOutImportAll)
{
	TSharedPtr<SWindow> ParentWindow;

	if (FModuleManager::Get().IsModuleLoaded("MainFrame")) {
		IMainFrameModule& MainFrame = FModuleManager::LoadModuleChecked<IMainFrameModule>("MainFrame");
		ParentWindow = MainFrame.GetParentWindow();
	}

	TSharedRef<SWindow> Window = SNew(SWindow)
		.Title(NSLOCTEXT("VOX4U", "VoxImportOpionsTitle", "VOX Import Options"))
		.SizingRule(ESizingRule::Autosized);

	TSharedPtr<SVoxOptionWidget> VoxOptionWidget;
	Window->SetContent(SAssignNew(VoxOptionWidget, SVoxOptionWidget).Window(Window).ImportOption(this));
	FSlateApplication::Get().AddModalWindow(Window, ParentWindow, false);
	SaveConfig();

	BuildSettings.BuildScale3D = FVector(Scale);
	bOutImportAll = VoxOptionWidget->ShouldImportAll();

	return VoxOptionWidget->ShouldImport();
}

void UVoxImportOption::ApplyDefaultSettings()
{
	const UVoxSettings& Settings = UVoxSettings::Get();
	VoxImportType = Settings.VoxImportType;
	ColorImportType = Settings.ColorImportType;
	Slice = Settings.Slice;
	ColorSwaps.Empty();
	for (auto& Swap : Settings.ColorSwaps)
	{
		ColorSwaps.Add(Swap);
	}

	UseCommonVertexColorMaterial = Settings.UseCommonVertexColorMaterial;
	bImportXForward = Settings.bImportXForward;
	bImportXYCenter = Settings.bImportXYCenter;
	Scale = Settings.Scale;
	Palette = Settings.TextureBaseMaterial.LoadSynchronous();
	BuildSettings.BuildScale3D = FVector(Scale);
}