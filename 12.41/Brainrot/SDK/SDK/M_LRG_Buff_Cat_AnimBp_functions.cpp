#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: M_LRG_Buff_Cat_AnimBp

#include "Basic.hpp"

#include "M_LRG_Buff_Cat_AnimBp_classes.hpp"
#include "M_LRG_Buff_Cat_AnimBp_parameters.hpp"


namespace SDK
{

// Function M_LRG_Buff_Cat_AnimBp.M_LRG_Buff_Cat_AnimBp_C.ExecuteUbergraph_M_LRG_Buff_Cat_AnimBp
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UM_LRG_Buff_Cat_AnimBp_C::ExecuteUbergraph_M_LRG_Buff_Cat_AnimBp(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("M_LRG_Buff_Cat_AnimBp_C", "ExecuteUbergraph_M_LRG_Buff_Cat_AnimBp");

	Params::M_LRG_Buff_Cat_AnimBp_C_ExecuteUbergraph_M_LRG_Buff_Cat_AnimBp Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function M_LRG_Buff_Cat_AnimBp.M_LRG_Buff_Cat_AnimBp_C.OnNotifyPartsStopped
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                             Context                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UM_LRG_Buff_Cat_AnimBp_C::OnNotifyPartsStopped(class FName Context)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("M_LRG_Buff_Cat_AnimBp_C", "OnNotifyPartsStopped");

	Params::M_LRG_Buff_Cat_AnimBp_C_OnNotifyPartsStopped Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);
}


// Function M_LRG_Buff_Cat_AnimBp.M_LRG_Buff_Cat_AnimBp_C.OnNotifyPartsStarted
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                             Context                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UM_LRG_Buff_Cat_AnimBp_C::OnNotifyPartsStarted(class FName Context)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("M_LRG_Buff_Cat_AnimBp_C", "OnNotifyPartsStarted");

	Params::M_LRG_Buff_Cat_AnimBp_C_OnNotifyPartsStarted Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);
}


// Function M_LRG_Buff_Cat_AnimBp.M_LRG_Buff_Cat_AnimBp_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UM_LRG_Buff_Cat_AnimBp_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("M_LRG_Buff_Cat_AnimBp_C", "AnimGraph");

	Params::M_LRG_Buff_Cat_AnimBp_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}

}
