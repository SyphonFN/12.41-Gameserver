#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_DualPistol_Donut_Athena

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "B_Ranged_Dual_Generic_Athena_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_DualPistol_Donut_Athena.B_DualPistol_Donut_Athena_C
// 0x0010 (0x1178 - 0x1168)
class AB_DualPistol_Donut_Athena_C final : public AB_Ranged_Dual_Generic_Athena_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_B_DualPistol_Donut_Athena_C;        // 0x1168(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USoundCue*                              FireSoundOverride;                                 // 0x1170(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_DualPistol_Donut_Athena(int32 EntryPoint);
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_DualPistol_Donut_Athena_C">();
	}
	static class AB_DualPistol_Donut_Athena_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_DualPistol_Donut_Athena_C>();
	}
};
static_assert(alignof(AB_DualPistol_Donut_Athena_C) == 0x000008, "Wrong alignment on AB_DualPistol_Donut_Athena_C");
static_assert(sizeof(AB_DualPistol_Donut_Athena_C) == 0x001178, "Wrong size on AB_DualPistol_Donut_Athena_C");
static_assert(offsetof(AB_DualPistol_Donut_Athena_C, UberGraphFrame_B_DualPistol_Donut_Athena_C) == 0x001168, "Member 'AB_DualPistol_Donut_Athena_C::UberGraphFrame_B_DualPistol_Donut_Athena_C' has a wrong offset!");
static_assert(offsetof(AB_DualPistol_Donut_Athena_C, FireSoundOverride) == 0x001170, "Member 'AB_DualPistol_Donut_Athena_C::FireSoundOverride' has a wrong offset!");

}

