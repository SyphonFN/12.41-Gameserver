#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ComVoteFeedback

#include "Basic.hpp"

#include "ComVoteFeedback_classes.hpp"
#include "ComVoteFeedback_parameters.hpp"


namespace SDK
{

// Function ComVoteFeedback.ComVoteFeedback_C.ExecuteUbergraph_ComVoteFeedback
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComVoteFeedback_C::ExecuteUbergraph_ComVoteFeedback(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ComVoteFeedback_C", "ExecuteUbergraph_ComVoteFeedback");

	Params::ComVoteFeedback_C_ExecuteUbergraph_ComVoteFeedback Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ComVoteFeedback.ComVoteFeedback_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UComVoteFeedback_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ComVoteFeedback_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
