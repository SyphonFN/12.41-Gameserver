#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Pawn_DangerGrape

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_PlayerPawn_Athena_Phoebe_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Pawn_DangerGrape.BP_Pawn_DangerGrape_C
// 0x0010 (0x38B0 - 0x38A0)
class ABP_Pawn_DangerGrape_C final : public ABP_PlayerPawn_Athena_Phoebe_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Pawn_DangerGrape_C;              // 0x3898(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               Effect_Hologram;                                   // 0x38A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Pawn_DangerGrape(int32 EntryPoint);
	void OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void PlayResOut();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Pawn_DangerGrape_C">();
	}
	static class ABP_Pawn_DangerGrape_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Pawn_DangerGrape_C>();
	}
};
static_assert(alignof(ABP_Pawn_DangerGrape_C) == 0x000010, "Wrong alignment on ABP_Pawn_DangerGrape_C");
static_assert(sizeof(ABP_Pawn_DangerGrape_C) == 0x0038B0, "Wrong size on ABP_Pawn_DangerGrape_C");
static_assert(offsetof(ABP_Pawn_DangerGrape_C, UberGraphFrame_BP_Pawn_DangerGrape_C) == 0x003898, "Member 'ABP_Pawn_DangerGrape_C::UberGraphFrame_BP_Pawn_DangerGrape_C' has a wrong offset!");
static_assert(offsetof(ABP_Pawn_DangerGrape_C, Effect_Hologram) == 0x0038A0, "Member 'ABP_Pawn_DangerGrape_C::Effect_Hologram' has a wrong offset!");

}

