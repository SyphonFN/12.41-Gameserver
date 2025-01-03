#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FluidSim_FN

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FluidForceDynamic_structs.hpp"
#include "BP_FluidSim_01_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FluidSim_FN.BP_FluidSim_FN_C
// 0x0100 (0x0540 - 0x0440)
class ABP_FluidSim_FN_C final : public ABP_FluidSim_01_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_FluidSim_FN_C;                   // 0x0440(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FFluidForceDynamic                     BoatForceSettings;                                 // 0x0448(0x0070)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	struct FFluidForceDynamic                     PlayerForceSettings;                               // 0x04B8(0x0070)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                          NearPawns;                                         // 0x0528(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_602A[0x7];                                     // 0x0529(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AFortPawn*>                      RelevantFortPawns;                                 // 0x0530(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)

public:
	void ExecuteUbergraph_BP_FluidSim_FN(int32 EntryPoint);
	void GetPlayerPawnForces();
	void GetLocalPawn(class APawn** Pawn);
	void GetFortnitePawnForces();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FluidSim_FN_C">();
	}
	static class ABP_FluidSim_FN_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_FluidSim_FN_C>();
	}
};
static_assert(alignof(ABP_FluidSim_FN_C) == 0x000008, "Wrong alignment on ABP_FluidSim_FN_C");
static_assert(sizeof(ABP_FluidSim_FN_C) == 0x000540, "Wrong size on ABP_FluidSim_FN_C");
static_assert(offsetof(ABP_FluidSim_FN_C, UberGraphFrame_BP_FluidSim_FN_C) == 0x000440, "Member 'ABP_FluidSim_FN_C::UberGraphFrame_BP_FluidSim_FN_C' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_FN_C, BoatForceSettings) == 0x000448, "Member 'ABP_FluidSim_FN_C::BoatForceSettings' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_FN_C, PlayerForceSettings) == 0x0004B8, "Member 'ABP_FluidSim_FN_C::PlayerForceSettings' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_FN_C, NearPawns) == 0x000528, "Member 'ABP_FluidSim_FN_C::NearPawns' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_FN_C, RelevantFortPawns) == 0x000530, "Member 'ABP_FluidSim_FN_C::RelevantFortPawns' has a wrong offset!");

}

