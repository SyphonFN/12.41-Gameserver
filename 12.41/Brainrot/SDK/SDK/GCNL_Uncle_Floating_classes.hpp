#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNL_Uncle_Floating

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCNL_Uncle_Floating.GCNL_Uncle_Floating_C
// 0x0020 (0x07A8 - 0x0788)
class AGCNL_Uncle_Floating_C final : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0788(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         RemainingFloatTime;                                // 0x0790(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_66C1[0x4];                                     // 0x0794(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAudioComponent*                        PreBreak_Audio;                                    // 0x0798(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           PreBreak_Handle;                                   // 0x07A0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GCNL_Uncle_Floating(int32 EntryPoint);
	void OnRemoval(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void Play_PreBreak_Audio();
	void OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_Uncle_Floating_C">();
	}
	static class AGCNL_Uncle_Floating_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_Uncle_Floating_C>();
	}
};
static_assert(alignof(AGCNL_Uncle_Floating_C) == 0x000008, "Wrong alignment on AGCNL_Uncle_Floating_C");
static_assert(sizeof(AGCNL_Uncle_Floating_C) == 0x0007A8, "Wrong size on AGCNL_Uncle_Floating_C");
static_assert(offsetof(AGCNL_Uncle_Floating_C, UberGraphFrame) == 0x000788, "Member 'AGCNL_Uncle_Floating_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCNL_Uncle_Floating_C, RemainingFloatTime) == 0x000790, "Member 'AGCNL_Uncle_Floating_C::RemainingFloatTime' has a wrong offset!");
static_assert(offsetof(AGCNL_Uncle_Floating_C, PreBreak_Audio) == 0x000798, "Member 'AGCNL_Uncle_Floating_C::PreBreak_Audio' has a wrong offset!");
static_assert(offsetof(AGCNL_Uncle_Floating_C, PreBreak_Handle) == 0x0007A0, "Member 'AGCNL_Uncle_Floating_C::PreBreak_Handle' has a wrong offset!");

}
