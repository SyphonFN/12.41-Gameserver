#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_MedConsumable_Parent

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C
// 0x0100 (0x0B30 - 0x0A30)
class UGA_Athena_MedConsumable_Parent_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0A30(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                        PlayerPawn;                                        // 0x0A38(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HealsHealth;                                       // 0x0A40(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          HasHealthCap;                                      // 0x0A41(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4108[0x2];                                     // 0x0A42(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         HealthHealAmount;                                  // 0x0A44(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TriggerDuration;                                   // 0x0A48(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShouldHolster;                                     // 0x0A4C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4109[0x3];                                     // 0x0A4D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   ItemIDToHolster;                                   // 0x0A50(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           GC_PotionConsumed;                                 // 0x0A58(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_EffectToApply;                                  // 0x0A60(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HealsShields;                                      // 0x0A68(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          HasShieldCap;                                      // 0x0A69(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_410A[0x2];                                     // 0x0A6A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ShieldHealAmount;                                  // 0x0A6C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                         Row_ShieldCap;                                     // 0x0A70(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         Row_ShieldAmount;                                  // 0x0A90(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         Row_HealthCap;                                     // 0x0AB0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         Row_HealthAmount;                                  // 0x0AD0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  Tags_FailedResponse;                               // 0x0AF0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IgnoreCalcsForEffectApplication;                   // 0x0B10(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          AlwaysActivate;                                    // 0x0B11(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_410B[0x2];                                     // 0x0B12(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           EquippingCue;                                      // 0x0B14(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         OverHealing;                                       // 0x0B1C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HealthIsEffective;                                 // 0x0B20(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_410C[0x7];                                     // 0x0B21(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UForceFeedbackEffect*                   ForceFeedback;                                     // 0x0B28(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Athena_MedConsumable_Parent(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void Triggered_4C02BFB04B18D9E79F84848FFE6D2C32(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_4C02BFB04B18D9E79F84848FFE6D2C32(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_4C02BFB04B18D9E79F84848FFE6D2C32(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void ShieldCalc();
	void HealthCalc();
	void SetupGE(struct FGameplayEffectSpecHandle* Effect_Out);
	void MakeCustomMontageInfo();
	void OnMontageTriggered();

	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_MedConsumable_Parent_C">();
	}
	static class UGA_Athena_MedConsumable_Parent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_MedConsumable_Parent_C>();
	}
};
static_assert(alignof(UGA_Athena_MedConsumable_Parent_C) == 0x000008, "Wrong alignment on UGA_Athena_MedConsumable_Parent_C");
static_assert(sizeof(UGA_Athena_MedConsumable_Parent_C) == 0x000B30, "Wrong size on UGA_Athena_MedConsumable_Parent_C");
static_assert(offsetof(UGA_Athena_MedConsumable_Parent_C, UberGraphFrame) == 0x000A30, "Member 'UGA_Athena_MedConsumable_Parent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Athena_MedConsumable_Parent_C, PlayerPawn) == 0x000A38, "Member 'UGA_Athena_MedConsumable_Parent_C::PlayerPawn' has a wrong offset!");
static_assert(offsetof(UGA_Athena_MedConsumable_Parent_C, HealsHealth) == 0x000A40, "Member 'UGA_Athena_MedConsumable_Parent_C::HealsHealth' has a wrong offset!");
static_assert(offsetof(UGA_Athena_MedConsumable_Parent_C, HasHealthCap) == 0x000A41, "Member 'UGA_Athena_MedConsumable_Parent_C::HasHealthCap' has a wrong offset!");
static_assert(offsetof(UGA_Athena_MedConsumable_Parent_C, HealthHealAmount) == 0x000A44, "Member 'UGA_Athena_MedConsumable_Parent_C::HealthHealAmount' has a wrong offset!");
static_assert(offsetof(UGA_Athena_MedConsumable_Parent_C, TriggerDuration) == 0x000A48, "Member 'UGA_Athena_MedConsumable_Parent_C::TriggerDuration' has a wrong offset!");
static_assert(offsetof(UGA_Athena_MedConsumable_Parent_C, ShouldHolster) == 0x000A4C, "Member 'UGA_Athena_MedConsumable_Parent_C::ShouldHolster' has a wrong offset!");
static_assert(offsetof(UGA_Athena_MedConsumable_Parent_C, ItemIDToHolster) == 0x000A50, "Member 'UGA_Athena_MedConsumable_Parent_C::ItemIDToHolster' has a wrong offset!");
static_assert(offsetof(UGA_Athena_MedConsumable_Parent_C, GC_PotionConsumed) == 0x000A58, "Member 'UGA_Athena_MedConsumable_Parent_C::GC_PotionConsumed' has a wrong offset!");
static_assert(offsetof(UGA_Athena_MedConsumable_Parent_C, GE_EffectToApply) == 0x000A60, "Member 'UGA_Athena_MedConsumable_Parent_C::GE_EffectToApply' has a wrong offset!");
static_assert(offsetof(UGA_Athena_MedConsumable_Parent_C, HealsShields) == 0x000A68, "Member 'UGA_Athena_MedConsumable_Parent_C::HealsShields' has a wrong offset!");
static_assert(offsetof(UGA_Athena_MedConsumable_Parent_C, HasShieldCap) == 0x000A69, "Member 'UGA_Athena_MedConsumable_Parent_C::HasShieldCap' has a wrong offset!");
static_assert(offsetof(UGA_Athena_MedConsumable_Parent_C, ShieldHealAmount) == 0x000A6C, "Member 'UGA_Athena_MedConsumable_Parent_C::ShieldHealAmount' has a wrong offset!");
static_assert(offsetof(UGA_Athena_MedConsumable_Parent_C, Row_ShieldCap) == 0x000A70, "Member 'UGA_Athena_MedConsumable_Parent_C::Row_ShieldCap' has a wrong offset!");
static_assert(offsetof(UGA_Athena_MedConsumable_Parent_C, Row_ShieldAmount) == 0x000A90, "Member 'UGA_Athena_MedConsumable_Parent_C::Row_ShieldAmount' has a wrong offset!");
static_assert(offsetof(UGA_Athena_MedConsumable_Parent_C, Row_HealthCap) == 0x000AB0, "Member 'UGA_Athena_MedConsumable_Parent_C::Row_HealthCap' has a wrong offset!");
static_assert(offsetof(UGA_Athena_MedConsumable_Parent_C, Row_HealthAmount) == 0x000AD0, "Member 'UGA_Athena_MedConsumable_Parent_C::Row_HealthAmount' has a wrong offset!");
static_assert(offsetof(UGA_Athena_MedConsumable_Parent_C, Tags_FailedResponse) == 0x000AF0, "Member 'UGA_Athena_MedConsumable_Parent_C::Tags_FailedResponse' has a wrong offset!");
static_assert(offsetof(UGA_Athena_MedConsumable_Parent_C, IgnoreCalcsForEffectApplication) == 0x000B10, "Member 'UGA_Athena_MedConsumable_Parent_C::IgnoreCalcsForEffectApplication' has a wrong offset!");
static_assert(offsetof(UGA_Athena_MedConsumable_Parent_C, AlwaysActivate) == 0x000B11, "Member 'UGA_Athena_MedConsumable_Parent_C::AlwaysActivate' has a wrong offset!");
static_assert(offsetof(UGA_Athena_MedConsumable_Parent_C, EquippingCue) == 0x000B14, "Member 'UGA_Athena_MedConsumable_Parent_C::EquippingCue' has a wrong offset!");
static_assert(offsetof(UGA_Athena_MedConsumable_Parent_C, OverHealing) == 0x000B1C, "Member 'UGA_Athena_MedConsumable_Parent_C::OverHealing' has a wrong offset!");
static_assert(offsetof(UGA_Athena_MedConsumable_Parent_C, HealthIsEffective) == 0x000B20, "Member 'UGA_Athena_MedConsumable_Parent_C::HealthIsEffective' has a wrong offset!");
static_assert(offsetof(UGA_Athena_MedConsumable_Parent_C, ForceFeedback) == 0x000B28, "Member 'UGA_Athena_MedConsumable_Parent_C::ForceFeedback' has a wrong offset!");

}

