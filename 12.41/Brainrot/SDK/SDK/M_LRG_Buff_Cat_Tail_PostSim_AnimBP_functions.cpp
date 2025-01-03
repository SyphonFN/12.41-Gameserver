#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: M_LRG_Buff_Cat_Tail_PostSim_AnimBP

#include "Basic.hpp"

#include "M_LRG_Buff_Cat_Tail_PostSim_AnimBP_classes.hpp"
#include "M_LRG_Buff_Cat_Tail_PostSim_AnimBP_parameters.hpp"


namespace SDK
{

// Function M_LRG_Buff_Cat_Tail_PostSim_AnimBP.M_LRG_Buff_Cat_Tail_PostSim_AnimBP_C.ExecuteUbergraph_M_LRG_Buff_Cat_Tail_PostSim_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UM_LRG_Buff_Cat_Tail_PostSim_AnimBP_C::ExecuteUbergraph_M_LRG_Buff_Cat_Tail_PostSim_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("M_LRG_Buff_Cat_Tail_PostSim_AnimBP_C", "ExecuteUbergraph_M_LRG_Buff_Cat_Tail_PostSim_AnimBP");

	Params::M_LRG_Buff_Cat_Tail_PostSim_AnimBP_C_ExecuteUbergraph_M_LRG_Buff_Cat_Tail_PostSim_AnimBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function M_LRG_Buff_Cat_Tail_PostSim_AnimBP.M_LRG_Buff_Cat_Tail_PostSim_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UM_LRG_Buff_Cat_Tail_PostSim_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("M_LRG_Buff_Cat_Tail_PostSim_AnimBP_C", "BlueprintUpdateAnimation");

	Params::M_LRG_Buff_Cat_Tail_PostSim_AnimBP_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function M_LRG_Buff_Cat_Tail_PostSim_AnimBP.M_LRG_Buff_Cat_Tail_PostSim_AnimBP_C.OnCharacterCustomizationLoaded
// (Event, Public, BlueprintEvent)

void UM_LRG_Buff_Cat_Tail_PostSim_AnimBP_C::OnCharacterCustomizationLoaded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("M_LRG_Buff_Cat_Tail_PostSim_AnimBP_C", "OnCharacterCustomizationLoaded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function M_LRG_Buff_Cat_Tail_PostSim_AnimBP.M_LRG_Buff_Cat_Tail_PostSim_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UM_LRG_Buff_Cat_Tail_PostSim_AnimBP_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("M_LRG_Buff_Cat_Tail_PostSim_AnimBP_C", "AnimGraph");

	Params::M_LRG_Buff_Cat_Tail_PostSim_AnimBP_C_AnimGraph Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}

}

