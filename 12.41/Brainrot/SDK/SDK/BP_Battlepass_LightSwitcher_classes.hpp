#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Battlepass_LightSwitcher

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Battlepass_LightSwitcher.BP_Battlepass_LightSwitcher_C
// 0x0088 (0x02A0 - 0x0218)
class ABP_Battlepass_LightSwitcher_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0218(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0220(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ADirectionalLight*                      DirectionLight;                                    // 0x0228(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASkyLight*                              SkyLight;                                          // 0x0230(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class APointLight*>                    Pointlights;                                       // 0x0238(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	class AExponentialHeightFog*                  ExponentialHeightFog;                              // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADirectionalLight*                      DirectionalLight_LowDetailMode;                    // 0x0250(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AEmitter*>                       ParticleSystems;                                   // 0x0258(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	bool                                          IsActive;                                          // 0x0268(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          DebugLOWQualityLighting;                           // 0x0269(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7256[0x6];                                     // 0x026A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASkyLight*                              SkyLight_LowDetailMode;                            // 0x0270(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AExponentialHeightFog*                  ExponentialHeightfog_LowDetailMode;                // 0x0278(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LOW_FX_Setting_Use_MobileLighting;                 // 0x0280(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsLightalreadyActive;                              // 0x0281(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7257[0x6];                                     // 0x0282(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ADirectionalLight*                      DirectionalLight_LowDetailMode_Channel1;           // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADirectionalLight*                      DirectionalLight_LowDetailMode_Channel2;           // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADirectionalLight*                      DirectionLight_HIgh_Channel_2;                     // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Battlepass_LightSwitcher(int32 EntryPoint);
	void DisableLevelSetLighting();
	void EnableLevelSetLighting();
	void UpdateSettings();
	void DisableLobbySetLighting();
	void EnableLobbySetLighting();
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void SetVisiblityofSceneLighting(bool Activate, bool ConstructionScript);
	void SetVisiblityofDetailSpecificMeshes();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Battlepass_LightSwitcher_C">();
	}
	static class ABP_Battlepass_LightSwitcher_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Battlepass_LightSwitcher_C>();
	}
};
static_assert(alignof(ABP_Battlepass_LightSwitcher_C) == 0x000008, "Wrong alignment on ABP_Battlepass_LightSwitcher_C");
static_assert(sizeof(ABP_Battlepass_LightSwitcher_C) == 0x0002A0, "Wrong size on ABP_Battlepass_LightSwitcher_C");
static_assert(offsetof(ABP_Battlepass_LightSwitcher_C, UberGraphFrame) == 0x000218, "Member 'ABP_Battlepass_LightSwitcher_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Battlepass_LightSwitcher_C, DefaultSceneRoot) == 0x000220, "Member 'ABP_Battlepass_LightSwitcher_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_Battlepass_LightSwitcher_C, DirectionLight) == 0x000228, "Member 'ABP_Battlepass_LightSwitcher_C::DirectionLight' has a wrong offset!");
static_assert(offsetof(ABP_Battlepass_LightSwitcher_C, SkyLight) == 0x000230, "Member 'ABP_Battlepass_LightSwitcher_C::SkyLight' has a wrong offset!");
static_assert(offsetof(ABP_Battlepass_LightSwitcher_C, Pointlights) == 0x000238, "Member 'ABP_Battlepass_LightSwitcher_C::Pointlights' has a wrong offset!");
static_assert(offsetof(ABP_Battlepass_LightSwitcher_C, ExponentialHeightFog) == 0x000248, "Member 'ABP_Battlepass_LightSwitcher_C::ExponentialHeightFog' has a wrong offset!");
static_assert(offsetof(ABP_Battlepass_LightSwitcher_C, DirectionalLight_LowDetailMode) == 0x000250, "Member 'ABP_Battlepass_LightSwitcher_C::DirectionalLight_LowDetailMode' has a wrong offset!");
static_assert(offsetof(ABP_Battlepass_LightSwitcher_C, ParticleSystems) == 0x000258, "Member 'ABP_Battlepass_LightSwitcher_C::ParticleSystems' has a wrong offset!");
static_assert(offsetof(ABP_Battlepass_LightSwitcher_C, IsActive) == 0x000268, "Member 'ABP_Battlepass_LightSwitcher_C::IsActive' has a wrong offset!");
static_assert(offsetof(ABP_Battlepass_LightSwitcher_C, DebugLOWQualityLighting) == 0x000269, "Member 'ABP_Battlepass_LightSwitcher_C::DebugLOWQualityLighting' has a wrong offset!");
static_assert(offsetof(ABP_Battlepass_LightSwitcher_C, SkyLight_LowDetailMode) == 0x000270, "Member 'ABP_Battlepass_LightSwitcher_C::SkyLight_LowDetailMode' has a wrong offset!");
static_assert(offsetof(ABP_Battlepass_LightSwitcher_C, ExponentialHeightfog_LowDetailMode) == 0x000278, "Member 'ABP_Battlepass_LightSwitcher_C::ExponentialHeightfog_LowDetailMode' has a wrong offset!");
static_assert(offsetof(ABP_Battlepass_LightSwitcher_C, LOW_FX_Setting_Use_MobileLighting) == 0x000280, "Member 'ABP_Battlepass_LightSwitcher_C::LOW_FX_Setting_Use_MobileLighting' has a wrong offset!");
static_assert(offsetof(ABP_Battlepass_LightSwitcher_C, IsLightalreadyActive) == 0x000281, "Member 'ABP_Battlepass_LightSwitcher_C::IsLightalreadyActive' has a wrong offset!");
static_assert(offsetof(ABP_Battlepass_LightSwitcher_C, DirectionalLight_LowDetailMode_Channel1) == 0x000288, "Member 'ABP_Battlepass_LightSwitcher_C::DirectionalLight_LowDetailMode_Channel1' has a wrong offset!");
static_assert(offsetof(ABP_Battlepass_LightSwitcher_C, DirectionalLight_LowDetailMode_Channel2) == 0x000290, "Member 'ABP_Battlepass_LightSwitcher_C::DirectionalLight_LowDetailMode_Channel2' has a wrong offset!");
static_assert(offsetof(ABP_Battlepass_LightSwitcher_C, DirectionLight_HIgh_Channel_2) == 0x000298, "Member 'ABP_Battlepass_LightSwitcher_C::DirectionLight_HIgh_Channel_2' has a wrong offset!");

}
