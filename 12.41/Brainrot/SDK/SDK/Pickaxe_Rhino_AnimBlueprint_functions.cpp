#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Pickaxe_Rhino_AnimBlueprint

#include "Basic.hpp"

#include "Pickaxe_Rhino_AnimBlueprint_classes.hpp"
#include "Pickaxe_Rhino_AnimBlueprint_parameters.hpp"


namespace SDK
{

// Function Pickaxe_Rhino_AnimBlueprint.Pickaxe_Rhino_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UPickaxe_Rhino_AnimBlueprint_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Pickaxe_Rhino_AnimBlueprint_C", "AnimGraph");

	Params::Pickaxe_Rhino_AnimBlueprint_C_AnimGraph Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}


// Function Pickaxe_Rhino_AnimBlueprint.Pickaxe_Rhino_AnimBlueprint_C.ExecuteUbergraph_Pickaxe_Rhino_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPickaxe_Rhino_AnimBlueprint_C::ExecuteUbergraph_Pickaxe_Rhino_AnimBlueprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Pickaxe_Rhino_AnimBlueprint_C", "ExecuteUbergraph_Pickaxe_Rhino_AnimBlueprint");

	Params::Pickaxe_Rhino_AnimBlueprint_C_ExecuteUbergraph_Pickaxe_Rhino_AnimBlueprint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
