#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNL_Creative_GrinderFeet

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCNL_Creative_GrinderFeet.GCNL_Creative_GrinderFeet_C
// 0x0048 (0x07D0 - 0x0788)
class AGCNL_Creative_GrinderFeet_C final : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0788(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               LeftFootFX;                                        // 0x0790(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               RightFootFX;                                       // 0x0798(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortCollisionAudioComponent*           CollisionAudioComp;                                // 0x07A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Collision_Audio;                                   // 0x07A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Target_Pawn;                                       // 0x07B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Current_Grind_Loop_Audio;                          // 0x07B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Grind_3p_Loop;                                     // 0x07C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Grind_1p_Loop;                                     // 0x07C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GCNL_Creative_GrinderFeet(int32 EntryPoint);
	void On_Target_Pawn_Hit_Event(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents);
	void ReceiveTick(float DeltaSeconds);
	void OnRemoval(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void OnApplication(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	struct FVector GetPawnTeamNumber(const class AActor* Actor);
	void DeactivateFootParticles();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_Creative_GrinderFeet_C">();
	}
	static class AGCNL_Creative_GrinderFeet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_Creative_GrinderFeet_C>();
	}
};
static_assert(alignof(AGCNL_Creative_GrinderFeet_C) == 0x000008, "Wrong alignment on AGCNL_Creative_GrinderFeet_C");
static_assert(sizeof(AGCNL_Creative_GrinderFeet_C) == 0x0007D0, "Wrong size on AGCNL_Creative_GrinderFeet_C");
static_assert(offsetof(AGCNL_Creative_GrinderFeet_C, UberGraphFrame) == 0x000788, "Member 'AGCNL_Creative_GrinderFeet_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCNL_Creative_GrinderFeet_C, LeftFootFX) == 0x000790, "Member 'AGCNL_Creative_GrinderFeet_C::LeftFootFX' has a wrong offset!");
static_assert(offsetof(AGCNL_Creative_GrinderFeet_C, RightFootFX) == 0x000798, "Member 'AGCNL_Creative_GrinderFeet_C::RightFootFX' has a wrong offset!");
static_assert(offsetof(AGCNL_Creative_GrinderFeet_C, CollisionAudioComp) == 0x0007A0, "Member 'AGCNL_Creative_GrinderFeet_C::CollisionAudioComp' has a wrong offset!");
static_assert(offsetof(AGCNL_Creative_GrinderFeet_C, Collision_Audio) == 0x0007A8, "Member 'AGCNL_Creative_GrinderFeet_C::Collision_Audio' has a wrong offset!");
static_assert(offsetof(AGCNL_Creative_GrinderFeet_C, Target_Pawn) == 0x0007B0, "Member 'AGCNL_Creative_GrinderFeet_C::Target_Pawn' has a wrong offset!");
static_assert(offsetof(AGCNL_Creative_GrinderFeet_C, Current_Grind_Loop_Audio) == 0x0007B8, "Member 'AGCNL_Creative_GrinderFeet_C::Current_Grind_Loop_Audio' has a wrong offset!");
static_assert(offsetof(AGCNL_Creative_GrinderFeet_C, Grind_3p_Loop) == 0x0007C0, "Member 'AGCNL_Creative_GrinderFeet_C::Grind_3p_Loop' has a wrong offset!");
static_assert(offsetof(AGCNL_Creative_GrinderFeet_C, Grind_1p_Loop) == 0x0007C8, "Member 'AGCNL_Creative_GrinderFeet_C::Grind_1p_Loop' has a wrong offset!");

}
