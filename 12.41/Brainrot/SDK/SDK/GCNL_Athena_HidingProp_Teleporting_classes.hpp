#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNL_Athena_HidingProp_Teleporting

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCNL_Athena_HidingProp_Teleporting.GCNL_Athena_HidingProp_Teleporting_C
// 0x0028 (0x07B0 - 0x0788)
class AGCNL_Athena_HidingProp_Teleporting_C final : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0788(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         Timeline_0_LerpWhiteWash_3C12694840EC8C9B33E562A2C6B279BA; // 0x0790(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_3C12694840EC8C9B33E562A2C6B279BA; // 0x0794(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_588B[0x3];                                     // 0x0795(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x0798(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AEmitterCameraLensEffectBase*           LensEffect;                                        // 0x07A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        OnePTravelAudio;                                   // 0x07A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GCNL_Athena_HidingProp_Teleporting(int32 EntryPoint);
	void OnRemoval(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents);
	void Timeline_0__DoFlash__EventFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_0__FinishedFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_Athena_HidingProp_Teleporting_C">();
	}
	static class AGCNL_Athena_HidingProp_Teleporting_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_Athena_HidingProp_Teleporting_C>();
	}
};
static_assert(alignof(AGCNL_Athena_HidingProp_Teleporting_C) == 0x000008, "Wrong alignment on AGCNL_Athena_HidingProp_Teleporting_C");
static_assert(sizeof(AGCNL_Athena_HidingProp_Teleporting_C) == 0x0007B0, "Wrong size on AGCNL_Athena_HidingProp_Teleporting_C");
static_assert(offsetof(AGCNL_Athena_HidingProp_Teleporting_C, UberGraphFrame) == 0x000788, "Member 'AGCNL_Athena_HidingProp_Teleporting_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_HidingProp_Teleporting_C, Timeline_0_LerpWhiteWash_3C12694840EC8C9B33E562A2C6B279BA) == 0x000790, "Member 'AGCNL_Athena_HidingProp_Teleporting_C::Timeline_0_LerpWhiteWash_3C12694840EC8C9B33E562A2C6B279BA' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_HidingProp_Teleporting_C, Timeline_0__Direction_3C12694840EC8C9B33E562A2C6B279BA) == 0x000794, "Member 'AGCNL_Athena_HidingProp_Teleporting_C::Timeline_0__Direction_3C12694840EC8C9B33E562A2C6B279BA' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_HidingProp_Teleporting_C, Timeline_0) == 0x000798, "Member 'AGCNL_Athena_HidingProp_Teleporting_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_HidingProp_Teleporting_C, LensEffect) == 0x0007A0, "Member 'AGCNL_Athena_HidingProp_Teleporting_C::LensEffect' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_HidingProp_Teleporting_C, OnePTravelAudio) == 0x0007A8, "Member 'AGCNL_Athena_HidingProp_Teleporting_C::OnePTravelAudio' has a wrong offset!");

}
