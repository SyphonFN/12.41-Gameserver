#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SquadMarker

#include "Basic.hpp"

#include "SquadMarker_classes.hpp"
#include "SquadMarker_parameters.hpp"


namespace SDK
{

// Function SquadMarker.SquadMarker_C.ExecuteUbergraph_SquadMarker
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USquadMarker_C::ExecuteUbergraph_SquadMarker(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SquadMarker_C", "ExecuteUbergraph_SquadMarker");

	Params::SquadMarker_C_ExecuteUbergraph_SquadMarker Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
