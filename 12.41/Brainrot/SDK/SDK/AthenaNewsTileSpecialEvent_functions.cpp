#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaNewsTileSpecialEvent

#include "Basic.hpp"

#include "AthenaNewsTileSpecialEvent_classes.hpp"
#include "AthenaNewsTileSpecialEvent_parameters.hpp"


namespace SDK
{

// Function AthenaNewsTileSpecialEvent.AthenaNewsTileSpecialEvent_C.ExecuteUbergraph_AthenaNewsTileSpecialEvent
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaNewsTileSpecialEvent_C::ExecuteUbergraph_AthenaNewsTileSpecialEvent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaNewsTileSpecialEvent_C", "ExecuteUbergraph_AthenaNewsTileSpecialEvent");

	Params::AthenaNewsTileSpecialEvent_C_ExecuteUbergraph_AthenaNewsTileSpecialEvent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaNewsTileSpecialEvent.AthenaNewsTileSpecialEvent_C.SetDefaultImage
// (Event, Public, BlueprintEvent)

void UAthenaNewsTileSpecialEvent_C::SetDefaultImage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaNewsTileSpecialEvent_C", "SetDefaultImage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaNewsTileSpecialEvent.AthenaNewsTileSpecialEvent_C.PlayIntroAnim
// (Event, Public, BlueprintEvent)

void UAthenaNewsTileSpecialEvent_C::PlayIntroAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaNewsTileSpecialEvent_C", "PlayIntroAnim");

	UObject::ProcessEvent(Func, nullptr);
}

}
