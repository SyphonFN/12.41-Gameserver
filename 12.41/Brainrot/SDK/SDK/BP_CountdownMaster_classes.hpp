#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CountdownMaster

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CountdownMaster.BP_CountdownMaster_C
// 0x00C8 (0x02E0 - 0x0218)
class ABP_CountdownMaster_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0218(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   HologramSkybeam;                                   // 0x0220(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   HologramCountdown;                                 // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   CountdownScreen;                                   // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Debug_Phase2;                                      // 0x0240(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Debug_Phase3;                                      // 0x0241(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CC3[0x2];                                     // 0x0242(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         NumberofDigits;                                    // 0x0244(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HologramHeight;                                    // 0x0248(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ScreenVisible;                                     // 0x024C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          HologramVisible;                                   // 0x024D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CC4[0x2];                                     // 0x024E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     CountdownScreen_Override;                          // 0x0250(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Beam_Override;                                     // 0x0258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     CountdownHologram_Override;                        // 0x0260(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MI_CountdownScreen;                                // 0x0268(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MI_Countdown_Hologram;                             // 0x0270(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MI_Skybeam;                                        // 0x0278(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                 Color;                                             // 0x0280(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         UV_Padding_x;                                      // 0x0284(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         UV_Padding_y;                                      // 0x0288(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         UV_Offset_x;                                       // 0x028C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         UV_Offset_y;                                       // 0x0290(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ScaleHologram_x;                                   // 0x0294(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ScaleHologram_y;                                   // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HologramVignette;                                  // 0x029C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                               BackgroundTexture;                                 // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                               PostCountdownTexture;                              // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                               DHMSTexture;                                       // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowHologramInHLOD;                                // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ShowScreenInHLOD;                                  // 0x02B9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ExcludefromMediumHLOD;                             // 0x02BA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CC5[0x5];                                     // 0x02BB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               DontUSEMI_Countdown_Hologram_HLOD;                 // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DistanceFadeLength;                                // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DistanceFadeOffset;                                // 0x02CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     HLOD_Override_Hologram;                            // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     HLOD_Override_SkyBeam;                             // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_CountdownMaster(int32 EntryPoint);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CountdownMaster_C">();
	}
	static class ABP_CountdownMaster_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CountdownMaster_C>();
	}
};
static_assert(alignof(ABP_CountdownMaster_C) == 0x000008, "Wrong alignment on ABP_CountdownMaster_C");
static_assert(sizeof(ABP_CountdownMaster_C) == 0x0002E0, "Wrong size on ABP_CountdownMaster_C");
static_assert(offsetof(ABP_CountdownMaster_C, UberGraphFrame) == 0x000218, "Member 'ABP_CountdownMaster_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, HologramSkybeam) == 0x000220, "Member 'ABP_CountdownMaster_C::HologramSkybeam' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, HologramCountdown) == 0x000228, "Member 'ABP_CountdownMaster_C::HologramCountdown' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, CountdownScreen) == 0x000230, "Member 'ABP_CountdownMaster_C::CountdownScreen' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, DefaultSceneRoot) == 0x000238, "Member 'ABP_CountdownMaster_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, Debug_Phase2) == 0x000240, "Member 'ABP_CountdownMaster_C::Debug_Phase2' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, Debug_Phase3) == 0x000241, "Member 'ABP_CountdownMaster_C::Debug_Phase3' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, NumberofDigits) == 0x000244, "Member 'ABP_CountdownMaster_C::NumberofDigits' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, HologramHeight) == 0x000248, "Member 'ABP_CountdownMaster_C::HologramHeight' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, ScreenVisible) == 0x00024C, "Member 'ABP_CountdownMaster_C::ScreenVisible' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, HologramVisible) == 0x00024D, "Member 'ABP_CountdownMaster_C::HologramVisible' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, CountdownScreen_Override) == 0x000250, "Member 'ABP_CountdownMaster_C::CountdownScreen_Override' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, Beam_Override) == 0x000258, "Member 'ABP_CountdownMaster_C::Beam_Override' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, CountdownHologram_Override) == 0x000260, "Member 'ABP_CountdownMaster_C::CountdownHologram_Override' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, MI_CountdownScreen) == 0x000268, "Member 'ABP_CountdownMaster_C::MI_CountdownScreen' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, MI_Countdown_Hologram) == 0x000270, "Member 'ABP_CountdownMaster_C::MI_Countdown_Hologram' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, MI_Skybeam) == 0x000278, "Member 'ABP_CountdownMaster_C::MI_Skybeam' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, Color) == 0x000280, "Member 'ABP_CountdownMaster_C::Color' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, UV_Padding_x) == 0x000284, "Member 'ABP_CountdownMaster_C::UV_Padding_x' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, UV_Padding_y) == 0x000288, "Member 'ABP_CountdownMaster_C::UV_Padding_y' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, UV_Offset_x) == 0x00028C, "Member 'ABP_CountdownMaster_C::UV_Offset_x' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, UV_Offset_y) == 0x000290, "Member 'ABP_CountdownMaster_C::UV_Offset_y' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, ScaleHologram_x) == 0x000294, "Member 'ABP_CountdownMaster_C::ScaleHologram_x' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, ScaleHologram_y) == 0x000298, "Member 'ABP_CountdownMaster_C::ScaleHologram_y' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, HologramVignette) == 0x00029C, "Member 'ABP_CountdownMaster_C::HologramVignette' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, BackgroundTexture) == 0x0002A0, "Member 'ABP_CountdownMaster_C::BackgroundTexture' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, PostCountdownTexture) == 0x0002A8, "Member 'ABP_CountdownMaster_C::PostCountdownTexture' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, DHMSTexture) == 0x0002B0, "Member 'ABP_CountdownMaster_C::DHMSTexture' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, ShowHologramInHLOD) == 0x0002B8, "Member 'ABP_CountdownMaster_C::ShowHologramInHLOD' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, ShowScreenInHLOD) == 0x0002B9, "Member 'ABP_CountdownMaster_C::ShowScreenInHLOD' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, ExcludefromMediumHLOD) == 0x0002BA, "Member 'ABP_CountdownMaster_C::ExcludefromMediumHLOD' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, DontUSEMI_Countdown_Hologram_HLOD) == 0x0002C0, "Member 'ABP_CountdownMaster_C::DontUSEMI_Countdown_Hologram_HLOD' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, DistanceFadeLength) == 0x0002C8, "Member 'ABP_CountdownMaster_C::DistanceFadeLength' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, DistanceFadeOffset) == 0x0002CC, "Member 'ABP_CountdownMaster_C::DistanceFadeOffset' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, HLOD_Override_Hologram) == 0x0002D0, "Member 'ABP_CountdownMaster_C::HLOD_Override_Hologram' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, HLOD_Override_SkyBeam) == 0x0002D8, "Member 'ABP_CountdownMaster_C::HLOD_Override_SkyBeam' has a wrong offset!");

}
