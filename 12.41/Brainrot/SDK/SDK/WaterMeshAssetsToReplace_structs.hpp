#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WaterMeshAssetsToReplace

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct WaterMeshAssetsToReplace.WaterMeshAssetsToReplace
// 0x0018 (0x0018 - 0x0000)
struct FWaterMeshAssetsToReplace final
{
public:
	class UStaticMesh*                            StaticMesh_4_B162F6034281E7ABCD4DD1A24FFB5843;     // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Blueprint_8_FAC48F2D497ED83408C598897E74E513;      // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         WaterMaterialID_11_1F00A5914214393D3251C4918ACFBCD2; // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FWaterMeshAssetsToReplace) == 0x000008, "Wrong alignment on FWaterMeshAssetsToReplace");
static_assert(sizeof(FWaterMeshAssetsToReplace) == 0x000018, "Wrong size on FWaterMeshAssetsToReplace");
static_assert(offsetof(FWaterMeshAssetsToReplace, StaticMesh_4_B162F6034281E7ABCD4DD1A24FFB5843) == 0x000000, "Member 'FWaterMeshAssetsToReplace::StaticMesh_4_B162F6034281E7ABCD4DD1A24FFB5843' has a wrong offset!");
static_assert(offsetof(FWaterMeshAssetsToReplace, Blueprint_8_FAC48F2D497ED83408C598897E74E513) == 0x000008, "Member 'FWaterMeshAssetsToReplace::Blueprint_8_FAC48F2D497ED83408C598897E74E513' has a wrong offset!");
static_assert(offsetof(FWaterMeshAssetsToReplace, WaterMaterialID_11_1F00A5914214393D3251C4918ACFBCD2) == 0x000010, "Member 'FWaterMeshAssetsToReplace::WaterMaterialID_11_1F00A5914214393D3251C4918ACFBCD2' has a wrong offset!");

}
