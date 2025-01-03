#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_Athena_HealMinor

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCN_Athena_HealMinor.GCN_Athena_HealMinor_C
// 0x0000 (0x01B0 - 0x01B0)
class UGCN_Athena_HealMinor_C final : public UFortGameplayCueNotify_Burst
{
public:
	void OnBurst(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_Athena_HealMinor_C">();
	}
	static class UGCN_Athena_HealMinor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGCN_Athena_HealMinor_C>();
	}
};
static_assert(alignof(UGCN_Athena_HealMinor_C) == 0x000008, "Wrong alignment on UGCN_Athena_HealMinor_C");
static_assert(sizeof(UGCN_Athena_HealMinor_C) == 0x0001B0, "Wrong size on UGCN_Athena_HealMinor_C");

}

