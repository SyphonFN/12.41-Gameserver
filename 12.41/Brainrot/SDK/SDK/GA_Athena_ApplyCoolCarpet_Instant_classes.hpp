#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_ApplyCoolCarpet_Instant

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "GA_Athena_Apply_SneakySnowmanV2_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Athena_ApplyCoolCarpet_Instant.GA_Athena_ApplyCoolCarpet_Instant_C
// 0x0028 (0x0BF8 - 0x0BD0)
class UGA_Athena_ApplyCoolCarpet_Instant_C final : public UGA_Athena_Apply_SneakySnowmanV2_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Athena_ApplyCoolCarpet_Instant_C; // 0x0BD0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTagContainer                  NotifyFirePressedTag;                              // 0x0BD8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_GA_Athena_ApplyCoolCarpet_Instant(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_ApplyCoolCarpet_Instant_C">();
	}
	static class UGA_Athena_ApplyCoolCarpet_Instant_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_ApplyCoolCarpet_Instant_C>();
	}
};
static_assert(alignof(UGA_Athena_ApplyCoolCarpet_Instant_C) == 0x000008, "Wrong alignment on UGA_Athena_ApplyCoolCarpet_Instant_C");
static_assert(sizeof(UGA_Athena_ApplyCoolCarpet_Instant_C) == 0x000BF8, "Wrong size on UGA_Athena_ApplyCoolCarpet_Instant_C");
static_assert(offsetof(UGA_Athena_ApplyCoolCarpet_Instant_C, UberGraphFrame_GA_Athena_ApplyCoolCarpet_Instant_C) == 0x000BD0, "Member 'UGA_Athena_ApplyCoolCarpet_Instant_C::UberGraphFrame_GA_Athena_ApplyCoolCarpet_Instant_C' has a wrong offset!");
static_assert(offsetof(UGA_Athena_ApplyCoolCarpet_Instant_C, NotifyFirePressedTag) == 0x000BD8, "Member 'UGA_Athena_ApplyCoolCarpet_Instant_C::NotifyFirePressedTag' has a wrong offset!");

}
