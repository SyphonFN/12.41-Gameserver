#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_Wumba_Upgraded

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCN_Wumba_Upgraded.GCN_Wumba_Upgraded_C
// 0x0020 (0x01D0 - 0x01B0)
class UGCN_Wumba_Upgraded_C final : public UFortGameplayCueNotify_Burst
{
public:
	class UParticleSystem*                        GreyToGreen_VFX;                                   // 0x01B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        GreenToBlue_VFX;                                   // 0x01B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        BlueToPurple_VFX;                                  // 0x01C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        PurpleToOrange_VFX;                                // 0x01C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnBurst(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_Wumba_Upgraded_C">();
	}
	static class UGCN_Wumba_Upgraded_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGCN_Wumba_Upgraded_C>();
	}
};
static_assert(alignof(UGCN_Wumba_Upgraded_C) == 0x000008, "Wrong alignment on UGCN_Wumba_Upgraded_C");
static_assert(sizeof(UGCN_Wumba_Upgraded_C) == 0x0001D0, "Wrong size on UGCN_Wumba_Upgraded_C");
static_assert(offsetof(UGCN_Wumba_Upgraded_C, GreyToGreen_VFX) == 0x0001B0, "Member 'UGCN_Wumba_Upgraded_C::GreyToGreen_VFX' has a wrong offset!");
static_assert(offsetof(UGCN_Wumba_Upgraded_C, GreenToBlue_VFX) == 0x0001B8, "Member 'UGCN_Wumba_Upgraded_C::GreenToBlue_VFX' has a wrong offset!");
static_assert(offsetof(UGCN_Wumba_Upgraded_C, BlueToPurple_VFX) == 0x0001C0, "Member 'UGCN_Wumba_Upgraded_C::BlueToPurple_VFX' has a wrong offset!");
static_assert(offsetof(UGCN_Wumba_Upgraded_C, PurpleToOrange_VFX) == 0x0001C8, "Member 'UGCN_Wumba_Upgraded_C::PurpleToOrange_VFX' has a wrong offset!");

}
