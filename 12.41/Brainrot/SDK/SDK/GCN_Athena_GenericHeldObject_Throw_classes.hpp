#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_Athena_GenericHeldObject_Throw

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCN_Athena_GenericHeldObject_Throw.GCN_Athena_GenericHeldObject_Throw_C
// 0x0008 (0x01B8 - 0x01B0)
class UGCN_Athena_GenericHeldObject_Throw_C final : public UFortGameplayCueNotify_Burst
{
public:
	class USoundBase*                             Throw_Sound;                                       // 0x01B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnBurst(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_Athena_GenericHeldObject_Throw_C">();
	}
	static class UGCN_Athena_GenericHeldObject_Throw_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGCN_Athena_GenericHeldObject_Throw_C>();
	}
};
static_assert(alignof(UGCN_Athena_GenericHeldObject_Throw_C) == 0x000008, "Wrong alignment on UGCN_Athena_GenericHeldObject_Throw_C");
static_assert(sizeof(UGCN_Athena_GenericHeldObject_Throw_C) == 0x0001B8, "Wrong size on UGCN_Athena_GenericHeldObject_Throw_C");
static_assert(offsetof(UGCN_Athena_GenericHeldObject_Throw_C, Throw_Sound) == 0x0001B0, "Member 'UGCN_Athena_GenericHeldObject_Throw_C::Throw_Sound' has a wrong offset!");

}
