#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Lotus_Athena_ApplyHeal

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Lotus_Athena_ApplyHeal.GA_Lotus_Athena_ApplyHeal_C
// 0x0008 (0x0A38 - 0x0A30)
class UGA_Lotus_Athena_ApplyHeal_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0A30(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GA_Lotus_Athena_ApplyHeal(int32 EntryPoint);
	void K2_ActivateAbility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Lotus_Athena_ApplyHeal_C">();
	}
	static class UGA_Lotus_Athena_ApplyHeal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Lotus_Athena_ApplyHeal_C>();
	}
};
static_assert(alignof(UGA_Lotus_Athena_ApplyHeal_C) == 0x000008, "Wrong alignment on UGA_Lotus_Athena_ApplyHeal_C");
static_assert(sizeof(UGA_Lotus_Athena_ApplyHeal_C) == 0x000A38, "Wrong size on UGA_Lotus_Athena_ApplyHeal_C");
static_assert(offsetof(UGA_Lotus_Athena_ApplyHeal_C, UberGraphFrame) == 0x000A30, "Member 'UGA_Lotus_Athena_ApplyHeal_C::UberGraphFrame' has a wrong offset!");

}
