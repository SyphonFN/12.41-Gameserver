#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_BGA_Athena_CampFire_Trap

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "B_BGA_Athena_EnvCampFire_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_BGA_Athena_CampFire_Trap.B_BGA_Athena_CampFire_Trap_C
// 0x0008 (0x0968 - 0x0960)
class AB_BGA_Athena_CampFire_Trap_C final : public AB_BGA_Athena_EnvCampFire_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_B_BGA_Athena_CampFire_Trap_C;       // 0x0960(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_B_BGA_Athena_CampFire_Trap(int32 EntryPoint);
	void OnBuildingActorInitialized(EFortBuildingInitializationReason InitializationReason, EFortBuildingPersistentState BuildingPersistentState);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_BGA_Athena_CampFire_Trap_C">();
	}
	static class AB_BGA_Athena_CampFire_Trap_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_BGA_Athena_CampFire_Trap_C>();
	}
};
static_assert(alignof(AB_BGA_Athena_CampFire_Trap_C) == 0x000008, "Wrong alignment on AB_BGA_Athena_CampFire_Trap_C");
static_assert(sizeof(AB_BGA_Athena_CampFire_Trap_C) == 0x000968, "Wrong size on AB_BGA_Athena_CampFire_Trap_C");
static_assert(offsetof(AB_BGA_Athena_CampFire_Trap_C, UberGraphFrame_B_BGA_Athena_CampFire_Trap_C) == 0x000960, "Member 'AB_BGA_Athena_CampFire_Trap_C::UberGraphFrame_B_BGA_Athena_CampFire_Trap_C' has a wrong offset!");

}
