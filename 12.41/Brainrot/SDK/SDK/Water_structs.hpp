#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Water

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum Water.EWaterBodyType
// NumValues: 0x0005
enum class EWaterBodyType : uint8
{
	River                                    = 0,
	Lake                                     = 1,
	Ocean                                    = 2,
	Transition                               = 3,
	EWaterBodyType_MAX                       = 4,
};

// ScriptStruct Water.WaterStreamingCell
// 0x0068 (0x0068 - 0x0000)
struct FWaterStreamingCell final
{
public:
	TArray<TSoftObjectPtr<class AActor>>          StreamingActors;                                   // 0x0000(0x0010)(Edit, ZeroConstructor, EditConst, UObjectWrapper, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class AActor>                  WaterProxyActor;                                   // 0x0010(0x0028)(Edit, EditConst, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBox                                   CellBox;                                           // 0x0038(0x001C)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FGuid                                  GenerationId;                                      // 0x0054(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4366[0x4];                                     // 0x0064(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FWaterStreamingCell) == 0x000008, "Wrong alignment on FWaterStreamingCell");
static_assert(sizeof(FWaterStreamingCell) == 0x000068, "Wrong size on FWaterStreamingCell");
static_assert(offsetof(FWaterStreamingCell, StreamingActors) == 0x000000, "Member 'FWaterStreamingCell::StreamingActors' has a wrong offset!");
static_assert(offsetof(FWaterStreamingCell, WaterProxyActor) == 0x000010, "Member 'FWaterStreamingCell::WaterProxyActor' has a wrong offset!");
static_assert(offsetof(FWaterStreamingCell, CellBox) == 0x000038, "Member 'FWaterStreamingCell::CellBox' has a wrong offset!");
static_assert(offsetof(FWaterStreamingCell, GenerationId) == 0x000054, "Member 'FWaterStreamingCell::GenerationId' has a wrong offset!");

// ScriptStruct Water.WaterWaveParams
// 0x002C (0x002C - 0x0000)
struct FWaterWaveParams final
{
public:
	float                                         Wavelength;                                        // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Amplitude;                                         // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Steepness;                                         // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Direction;                                         // 0x000C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4367[0x14];                                    // 0x0018(0x0014)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FWaterWaveParams) == 0x000004, "Wrong alignment on FWaterWaveParams");
static_assert(sizeof(FWaterWaveParams) == 0x00002C, "Wrong size on FWaterWaveParams");
static_assert(offsetof(FWaterWaveParams, Wavelength) == 0x000000, "Member 'FWaterWaveParams::Wavelength' has a wrong offset!");
static_assert(offsetof(FWaterWaveParams, Amplitude) == 0x000004, "Member 'FWaterWaveParams::Amplitude' has a wrong offset!");
static_assert(offsetof(FWaterWaveParams, Steepness) == 0x000008, "Member 'FWaterWaveParams::Steepness' has a wrong offset!");
static_assert(offsetof(FWaterWaveParams, Direction) == 0x00000C, "Member 'FWaterWaveParams::Direction' has a wrong offset!");

// ScriptStruct Water.WaterSplineCurveDefaults
// 0x0014 (0x0014 - 0x0000)
struct FWaterSplineCurveDefaults final
{
public:
	float                                         DefaultDepth;                                      // 0x0000(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DefaultWidth;                                      // 0x0004(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DefaultShorelineWidth;                             // 0x0008(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DefaultVelocity;                                   // 0x000C(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DefaultAudioIntensity;                             // 0x0010(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FWaterSplineCurveDefaults) == 0x000004, "Wrong alignment on FWaterSplineCurveDefaults");
static_assert(sizeof(FWaterSplineCurveDefaults) == 0x000014, "Wrong size on FWaterSplineCurveDefaults");
static_assert(offsetof(FWaterSplineCurveDefaults, DefaultDepth) == 0x000000, "Member 'FWaterSplineCurveDefaults::DefaultDepth' has a wrong offset!");
static_assert(offsetof(FWaterSplineCurveDefaults, DefaultWidth) == 0x000004, "Member 'FWaterSplineCurveDefaults::DefaultWidth' has a wrong offset!");
static_assert(offsetof(FWaterSplineCurveDefaults, DefaultShorelineWidth) == 0x000008, "Member 'FWaterSplineCurveDefaults::DefaultShorelineWidth' has a wrong offset!");
static_assert(offsetof(FWaterSplineCurveDefaults, DefaultVelocity) == 0x00000C, "Member 'FWaterSplineCurveDefaults::DefaultVelocity' has a wrong offset!");
static_assert(offsetof(FWaterSplineCurveDefaults, DefaultAudioIntensity) == 0x000010, "Member 'FWaterSplineCurveDefaults::DefaultAudioIntensity' has a wrong offset!");

// ScriptStruct Water.UnderwaterPostProcessSettings
// 0x0550 (0x0550 - 0x0000)
struct FUnderwaterPostProcessSettings final
{
public:
	bool                                          bEnabled;                                          // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4368[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Priority;                                          // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BlendRadius;                                       // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BlendWeight;                                       // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPostProcessSettings                   PostProcessSettings;                               // 0x0010(0x0530)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UMaterialInterface*                     UnderwaterPostProcessMaterial;                     // 0x0540(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4369[0x8];                                     // 0x0548(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FUnderwaterPostProcessSettings) == 0x000010, "Wrong alignment on FUnderwaterPostProcessSettings");
static_assert(sizeof(FUnderwaterPostProcessSettings) == 0x000550, "Wrong size on FUnderwaterPostProcessSettings");
static_assert(offsetof(FUnderwaterPostProcessSettings, bEnabled) == 0x000000, "Member 'FUnderwaterPostProcessSettings::bEnabled' has a wrong offset!");
static_assert(offsetof(FUnderwaterPostProcessSettings, Priority) == 0x000004, "Member 'FUnderwaterPostProcessSettings::Priority' has a wrong offset!");
static_assert(offsetof(FUnderwaterPostProcessSettings, BlendRadius) == 0x000008, "Member 'FUnderwaterPostProcessSettings::BlendRadius' has a wrong offset!");
static_assert(offsetof(FUnderwaterPostProcessSettings, BlendWeight) == 0x00000C, "Member 'FUnderwaterPostProcessSettings::BlendWeight' has a wrong offset!");
static_assert(offsetof(FUnderwaterPostProcessSettings, PostProcessSettings) == 0x000010, "Member 'FUnderwaterPostProcessSettings::PostProcessSettings' has a wrong offset!");
static_assert(offsetof(FUnderwaterPostProcessSettings, UnderwaterPostProcessMaterial) == 0x000540, "Member 'FUnderwaterPostProcessSettings::UnderwaterPostProcessMaterial' has a wrong offset!");

// ScriptStruct Water.WaterCurveSettings
// 0x0020 (0x0020 - 0x0000)
struct FWaterCurveSettings final
{
public:
	bool                                          bUseCurveChannel;                                  // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_436A[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveFloat*                            ElevationCurveAsset;                               // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ChannelEdgeOffset;                                 // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ChannelDepth;                                      // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CurveRampWidth;                                    // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_436B[0x4];                                     // 0x001C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FWaterCurveSettings) == 0x000008, "Wrong alignment on FWaterCurveSettings");
static_assert(sizeof(FWaterCurveSettings) == 0x000020, "Wrong size on FWaterCurveSettings");
static_assert(offsetof(FWaterCurveSettings, bUseCurveChannel) == 0x000000, "Member 'FWaterCurveSettings::bUseCurveChannel' has a wrong offset!");
static_assert(offsetof(FWaterCurveSettings, ElevationCurveAsset) == 0x000008, "Member 'FWaterCurveSettings::ElevationCurveAsset' has a wrong offset!");
static_assert(offsetof(FWaterCurveSettings, ChannelEdgeOffset) == 0x000010, "Member 'FWaterCurveSettings::ChannelEdgeOffset' has a wrong offset!");
static_assert(offsetof(FWaterCurveSettings, ChannelDepth) == 0x000014, "Member 'FWaterCurveSettings::ChannelDepth' has a wrong offset!");
static_assert(offsetof(FWaterCurveSettings, CurveRampWidth) == 0x000018, "Member 'FWaterCurveSettings::CurveRampWidth' has a wrong offset!");

// ScriptStruct Water.WaterBodyWeightmapSettings
// 0x0020 (0x0020 - 0x0000)
struct FWaterBodyWeightmapSettings final
{
public:
	float                                         FalloffWidth;                                      // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EdgeOffset;                                        // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                             ModulationTexture;                                 // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TextureTiling;                                     // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TextureInfluence;                                  // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Midpoint;                                          // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FinalOpacity;                                      // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FWaterBodyWeightmapSettings) == 0x000008, "Wrong alignment on FWaterBodyWeightmapSettings");
static_assert(sizeof(FWaterBodyWeightmapSettings) == 0x000020, "Wrong size on FWaterBodyWeightmapSettings");
static_assert(offsetof(FWaterBodyWeightmapSettings, FalloffWidth) == 0x000000, "Member 'FWaterBodyWeightmapSettings::FalloffWidth' has a wrong offset!");
static_assert(offsetof(FWaterBodyWeightmapSettings, EdgeOffset) == 0x000004, "Member 'FWaterBodyWeightmapSettings::EdgeOffset' has a wrong offset!");
static_assert(offsetof(FWaterBodyWeightmapSettings, ModulationTexture) == 0x000008, "Member 'FWaterBodyWeightmapSettings::ModulationTexture' has a wrong offset!");
static_assert(offsetof(FWaterBodyWeightmapSettings, TextureTiling) == 0x000010, "Member 'FWaterBodyWeightmapSettings::TextureTiling' has a wrong offset!");
static_assert(offsetof(FWaterBodyWeightmapSettings, TextureInfluence) == 0x000014, "Member 'FWaterBodyWeightmapSettings::TextureInfluence' has a wrong offset!");
static_assert(offsetof(FWaterBodyWeightmapSettings, Midpoint) == 0x000018, "Member 'FWaterBodyWeightmapSettings::Midpoint' has a wrong offset!");
static_assert(offsetof(FWaterBodyWeightmapSettings, FinalOpacity) == 0x00001C, "Member 'FWaterBodyWeightmapSettings::FinalOpacity' has a wrong offset!");

// ScriptStruct Water.WaterStreamingGrid
// 0x0040 (0x0040 - 0x0000)
struct FWaterStreamingGrid final
{
public:
	TArray<struct FWaterStreamingCell>            Cells;                                             // 0x0000(0x0010)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	struct FVector                                LandscapeLocation;                                 // 0x0010(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                LandscapeScale;                                    // 0x001C(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntPoint                              NumCells;                                          // 0x0028(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              InvWorldCellDimensions;                            // 0x0030(0x0008)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntPoint                              CellTextureSize;                                   // 0x0038(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FWaterStreamingGrid) == 0x000008, "Wrong alignment on FWaterStreamingGrid");
static_assert(sizeof(FWaterStreamingGrid) == 0x000040, "Wrong size on FWaterStreamingGrid");
static_assert(offsetof(FWaterStreamingGrid, Cells) == 0x000000, "Member 'FWaterStreamingGrid::Cells' has a wrong offset!");
static_assert(offsetof(FWaterStreamingGrid, LandscapeLocation) == 0x000010, "Member 'FWaterStreamingGrid::LandscapeLocation' has a wrong offset!");
static_assert(offsetof(FWaterStreamingGrid, LandscapeScale) == 0x00001C, "Member 'FWaterStreamingGrid::LandscapeScale' has a wrong offset!");
static_assert(offsetof(FWaterStreamingGrid, NumCells) == 0x000028, "Member 'FWaterStreamingGrid::NumCells' has a wrong offset!");
static_assert(offsetof(FWaterStreamingGrid, InvWorldCellDimensions) == 0x000030, "Member 'FWaterStreamingGrid::InvWorldCellDimensions' has a wrong offset!");
static_assert(offsetof(FWaterStreamingGrid, CellTextureSize) == 0x000038, "Member 'FWaterStreamingGrid::CellTextureSize' has a wrong offset!");

}

