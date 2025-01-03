#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LetoSellPage

#include "Basic.hpp"

#include "LetoSellPage_classes.hpp"
#include "LetoSellPage_parameters.hpp"


namespace SDK
{

// Function LetoSellPage.LetoSellPage_C.ExecuteUbergraph_LetoSellPage
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULetoSellPage_C::ExecuteUbergraph_LetoSellPage(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LetoSellPage_C", "ExecuteUbergraph_LetoSellPage");

	Params::LetoSellPage_C_ExecuteUbergraph_LetoSellPage Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LetoSellPage.LetoSellPage_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)

void ULetoSellPage_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LetoSellPage_C", "BP_OnDeactivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LetoSellPage.LetoSellPage_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)

void ULetoSellPage_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LetoSellPage_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}

}

