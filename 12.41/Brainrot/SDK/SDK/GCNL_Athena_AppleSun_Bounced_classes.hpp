#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNL_Athena_AppleSun_Bounced

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCNL_Athena_AppleSun_Bounced.GCNL_Athena_AppleSun_Bounced_C
// 0x0008 (0x0790 - 0x0788)
class AGCNL_Athena_AppleSun_Bounced_C final : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0788(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GCNL_Athena_AppleSun_Bounced(int32 EntryPoint);
	void OnApplication(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_Athena_AppleSun_Bounced_C">();
	}
	static class AGCNL_Athena_AppleSun_Bounced_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_Athena_AppleSun_Bounced_C>();
	}
};
static_assert(alignof(AGCNL_Athena_AppleSun_Bounced_C) == 0x000008, "Wrong alignment on AGCNL_Athena_AppleSun_Bounced_C");
static_assert(sizeof(AGCNL_Athena_AppleSun_Bounced_C) == 0x000790, "Wrong size on AGCNL_Athena_AppleSun_Bounced_C");
static_assert(offsetof(AGCNL_Athena_AppleSun_Bounced_C, UberGraphFrame) == 0x000788, "Member 'AGCNL_Athena_AppleSun_Bounced_C::UberGraphFrame' has a wrong offset!");

}

