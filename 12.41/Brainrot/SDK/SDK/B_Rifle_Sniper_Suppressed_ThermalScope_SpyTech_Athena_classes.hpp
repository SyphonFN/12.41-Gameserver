#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena

#include "Basic.hpp"

#include "B_Rifle_Generic_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena.B_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C
// 0x0020 (0x11D0 - 0x11B0)
class AB_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C final : public AB_Rifle_Generic_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_B_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C; // 0x11B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         ScalePlayerThermal_NewTrack_0_253E51B74F624080BF58BDA99C8B5B64; // 0x11B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            ScalePlayerThermal__Direction_253E51B74F624080BF58BDA99C8B5B64; // 0x11BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64B4[0x3];                                     // 0x11BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     ScalePlayerThermal;                                // 0x11C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BlendInTime;                                       // 0x11C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena(int32 EntryPoint);
	void ForceScopeBackImmediatly();
	void ReverseScopePP();
	void PlayScopePP();
	void ScalePlayerThermal__UpdateFunc();
	void ScalePlayerThermal__FinishedFunc();
	void OnSetTargeting(bool bNewIsTargeting);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C">();
	}
	static class AB_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C>();
	}
};
static_assert(alignof(AB_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C) == 0x000008, "Wrong alignment on AB_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C");
static_assert(sizeof(AB_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C) == 0x0011D0, "Wrong size on AB_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C");
static_assert(offsetof(AB_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C, UberGraphFrame_B_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C) == 0x0011B0, "Member 'AB_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C::UberGraphFrame_B_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C' has a wrong offset!");
static_assert(offsetof(AB_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C, ScalePlayerThermal_NewTrack_0_253E51B74F624080BF58BDA99C8B5B64) == 0x0011B8, "Member 'AB_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C::ScalePlayerThermal_NewTrack_0_253E51B74F624080BF58BDA99C8B5B64' has a wrong offset!");
static_assert(offsetof(AB_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C, ScalePlayerThermal__Direction_253E51B74F624080BF58BDA99C8B5B64) == 0x0011BC, "Member 'AB_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C::ScalePlayerThermal__Direction_253E51B74F624080BF58BDA99C8B5B64' has a wrong offset!");
static_assert(offsetof(AB_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C, ScalePlayerThermal) == 0x0011C0, "Member 'AB_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C::ScalePlayerThermal' has a wrong offset!");
static_assert(offsetof(AB_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C, BlendInTime) == 0x0011C8, "Member 'AB_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C::BlendInTime' has a wrong offset!");

}
