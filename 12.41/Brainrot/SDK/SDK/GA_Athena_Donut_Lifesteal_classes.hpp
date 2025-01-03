#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_Donut_Lifesteal

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Athena_Donut_Lifesteal.GA_Athena_Donut_Lifesteal_C
// 0x0070 (0x0AA0 - 0x0A30)
class UGA_Athena_Donut_Lifesteal_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0A30(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                           T_Donut;                                           // 0x0A38(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_Heal;                                           // 0x0A40(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        Player_Pawn;                                       // 0x0A48(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           T_Vehicle;                                         // 0x0A50(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                         Row_Heal_Mult;                                     // 0x0A58(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         Row_ShouldHealShields;                             // 0x0A78(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                           GC_HealMinor;                                      // 0x0A98(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Athena_Donut_Lifesteal(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);

	bool K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_Donut_Lifesteal_C">();
	}
	static class UGA_Athena_Donut_Lifesteal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_Donut_Lifesteal_C>();
	}
};
static_assert(alignof(UGA_Athena_Donut_Lifesteal_C) == 0x000008, "Wrong alignment on UGA_Athena_Donut_Lifesteal_C");
static_assert(sizeof(UGA_Athena_Donut_Lifesteal_C) == 0x000AA0, "Wrong size on UGA_Athena_Donut_Lifesteal_C");
static_assert(offsetof(UGA_Athena_Donut_Lifesteal_C, UberGraphFrame) == 0x000A30, "Member 'UGA_Athena_Donut_Lifesteal_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Donut_Lifesteal_C, T_Donut) == 0x000A38, "Member 'UGA_Athena_Donut_Lifesteal_C::T_Donut' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Donut_Lifesteal_C, GE_Heal) == 0x000A40, "Member 'UGA_Athena_Donut_Lifesteal_C::GE_Heal' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Donut_Lifesteal_C, Player_Pawn) == 0x000A48, "Member 'UGA_Athena_Donut_Lifesteal_C::Player_Pawn' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Donut_Lifesteal_C, T_Vehicle) == 0x000A50, "Member 'UGA_Athena_Donut_Lifesteal_C::T_Vehicle' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Donut_Lifesteal_C, Row_Heal_Mult) == 0x000A58, "Member 'UGA_Athena_Donut_Lifesteal_C::Row_Heal_Mult' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Donut_Lifesteal_C, Row_ShouldHealShields) == 0x000A78, "Member 'UGA_Athena_Donut_Lifesteal_C::Row_ShouldHealShields' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Donut_Lifesteal_C, GC_HealMinor) == 0x000A98, "Member 'UGA_Athena_Donut_Lifesteal_C::GC_HealMinor' has a wrong offset!");

}

