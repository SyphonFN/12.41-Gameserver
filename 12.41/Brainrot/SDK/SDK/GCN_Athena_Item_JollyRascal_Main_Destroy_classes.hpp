#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_Athena_Item_JollyRascal_Main_Destroy

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCN_Athena_Item_JollyRascal_Main_Destroy.GCN_Athena_Item_JollyRascal_Main_Destroy_C
// 0x0050 (0x0200 - 0x01B0)
class UGCN_Athena_Item_JollyRascal_Main_Destroy_C final : public UFortGameplayCueNotify_Burst
{
public:
	TMap<int32, class USoundBase*>                MapSound;                                          // 0x01B0(0x0050)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

public:
	void OnBurst(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_Athena_Item_JollyRascal_Main_Destroy_C">();
	}
	static class UGCN_Athena_Item_JollyRascal_Main_Destroy_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGCN_Athena_Item_JollyRascal_Main_Destroy_C>();
	}
};
static_assert(alignof(UGCN_Athena_Item_JollyRascal_Main_Destroy_C) == 0x000008, "Wrong alignment on UGCN_Athena_Item_JollyRascal_Main_Destroy_C");
static_assert(sizeof(UGCN_Athena_Item_JollyRascal_Main_Destroy_C) == 0x000200, "Wrong size on UGCN_Athena_Item_JollyRascal_Main_Destroy_C");
static_assert(offsetof(UGCN_Athena_Item_JollyRascal_Main_Destroy_C, MapSound) == 0x0001B0, "Member 'UGCN_Athena_Item_JollyRascal_Main_Destroy_C::MapSound' has a wrong offset!");

}
