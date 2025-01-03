#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Uncle_Brolly_Passive

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Uncle_Brolly_Passive.GA_Uncle_Brolly_Passive_C
// 0x0010 (0x0A40 - 0x0A30)
class UGA_Uncle_Brolly_Passive_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0A30(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                        PlayerPawn;                                        // 0x0A38(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Uncle_Brolly_Passive(int32 EntryPoint);
	void K2_ActivateAbility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Uncle_Brolly_Passive_C">();
	}
	static class UGA_Uncle_Brolly_Passive_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Uncle_Brolly_Passive_C>();
	}
};
static_assert(alignof(UGA_Uncle_Brolly_Passive_C) == 0x000008, "Wrong alignment on UGA_Uncle_Brolly_Passive_C");
static_assert(sizeof(UGA_Uncle_Brolly_Passive_C) == 0x000A40, "Wrong size on UGA_Uncle_Brolly_Passive_C");
static_assert(offsetof(UGA_Uncle_Brolly_Passive_C, UberGraphFrame) == 0x000A30, "Member 'UGA_Uncle_Brolly_Passive_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Uncle_Brolly_Passive_C, PlayerPawn) == 0x000A38, "Member 'UGA_Uncle_Brolly_Passive_C::PlayerPawn' has a wrong offset!");

}

