#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DailyChallengeRerollButton

#include "Basic.hpp"

#include "DailyChallengeRerollButton_classes.hpp"
#include "DailyChallengeRerollButton_parameters.hpp"


namespace SDK
{

// Function DailyChallengeRerollButton.DailyChallengeRerollButton_C.ExecuteUbergraph_DailyChallengeRerollButton
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDailyChallengeRerollButton_C::ExecuteUbergraph_DailyChallengeRerollButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DailyChallengeRerollButton_C", "ExecuteUbergraph_DailyChallengeRerollButton");

	Params::DailyChallengeRerollButton_C_ExecuteUbergraph_DailyChallengeRerollButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DailyChallengeRerollButton.DailyChallengeRerollButton_C.BP_OnClicked
// (Event, Protected, BlueprintEvent)

void UDailyChallengeRerollButton_C::BP_OnClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DailyChallengeRerollButton_C", "BP_OnClicked");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DailyChallengeRerollButton.DailyChallengeRerollButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void UDailyChallengeRerollButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DailyChallengeRerollButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DailyChallengeRerollButton.DailyChallengeRerollButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UDailyChallengeRerollButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DailyChallengeRerollButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

}

