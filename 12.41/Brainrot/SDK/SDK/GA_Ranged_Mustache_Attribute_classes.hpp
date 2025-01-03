#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Ranged_Mustache_Attribute

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Ranged_Mustache_Attribute.GA_Ranged_Mustache_Attribute_C
// 0x0050 (0x0AB8 - 0x0A68)
class UGA_Ranged_Mustache_Attribute_C final : public UFortGameplayAbility_RangedWeapon
{
public:
	struct FGameplayTag                           GT_EventWeaponFire;                                // 0x0A68(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          ManualFireEvent;                                   // 0x0A70(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DCC[0x7];                                     // 0x0A71(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAttribute                     Attribute;                                         // 0x0A78(0x0038)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FGameplayTag                           MuzzleFlash;                                       // 0x0AB0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void K2_CommitExecute();
	void GetEventData(const struct FGameplayTag& EventTag, struct FGameplayEventData* GameplayEventData);

	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Ranged_Mustache_Attribute_C">();
	}
	static class UGA_Ranged_Mustache_Attribute_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Ranged_Mustache_Attribute_C>();
	}
};
static_assert(alignof(UGA_Ranged_Mustache_Attribute_C) == 0x000008, "Wrong alignment on UGA_Ranged_Mustache_Attribute_C");
static_assert(sizeof(UGA_Ranged_Mustache_Attribute_C) == 0x000AB8, "Wrong size on UGA_Ranged_Mustache_Attribute_C");
static_assert(offsetof(UGA_Ranged_Mustache_Attribute_C, GT_EventWeaponFire) == 0x000A68, "Member 'UGA_Ranged_Mustache_Attribute_C::GT_EventWeaponFire' has a wrong offset!");
static_assert(offsetof(UGA_Ranged_Mustache_Attribute_C, ManualFireEvent) == 0x000A70, "Member 'UGA_Ranged_Mustache_Attribute_C::ManualFireEvent' has a wrong offset!");
static_assert(offsetof(UGA_Ranged_Mustache_Attribute_C, Attribute) == 0x000A78, "Member 'UGA_Ranged_Mustache_Attribute_C::Attribute' has a wrong offset!");
static_assert(offsetof(UGA_Ranged_Mustache_Attribute_C, MuzzleFlash) == 0x000AB0, "Member 'UGA_Ranged_Mustache_Attribute_C::MuzzleFlash' has a wrong offset!");

}

