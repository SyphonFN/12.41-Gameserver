#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DailyChallengeStickyNoteWidget

#include "Basic.hpp"

#include "DailyChallengeStickyNoteWidget_classes.hpp"
#include "DailyChallengeStickyNoteWidget_parameters.hpp"


namespace SDK
{

// Function DailyChallengeStickyNoteWidget.DailyChallengeStickyNoteWidget_C.ExecuteUbergraph_DailyChallengeStickyNoteWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDailyChallengeStickyNoteWidget_C::ExecuteUbergraph_DailyChallengeStickyNoteWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DailyChallengeStickyNoteWidget_C", "ExecuteUbergraph_DailyChallengeStickyNoteWidget");

	Params::DailyChallengeStickyNoteWidget_C_ExecuteUbergraph_DailyChallengeStickyNoteWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DailyChallengeStickyNoteWidget.DailyChallengeStickyNoteWidget_C.OnHasChallengeUpdated
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bHasAssignedChallenge                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDailyChallengeStickyNoteWidget_C::OnHasChallengeUpdated(bool bHasAssignedChallenge)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DailyChallengeStickyNoteWidget_C", "OnHasChallengeUpdated");

	Params::DailyChallengeStickyNoteWidget_C_OnHasChallengeUpdated Parms{};

	Parms.bHasAssignedChallenge = bHasAssignedChallenge;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DailyChallengeStickyNoteWidget.DailyChallengeStickyNoteWidget_C.OnReplaceConfirmationClosed
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bAcceptedReroll                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDailyChallengeStickyNoteWidget_C::OnReplaceConfirmationClosed(bool bAcceptedReroll)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DailyChallengeStickyNoteWidget_C", "OnReplaceConfirmationClosed");

	Params::DailyChallengeStickyNoteWidget_C_OnReplaceConfirmationClosed Parms{};

	Parms.bAcceptedReroll = bAcceptedReroll;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DailyChallengeStickyNoteWidget.DailyChallengeStickyNoteWidget_C.HandleHasChallengeUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bHasChallenge                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDailyChallengeStickyNoteWidget_C::HandleHasChallengeUpdated(bool bHasChallenge)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DailyChallengeStickyNoteWidget_C", "HandleHasChallengeUpdated");

	Params::DailyChallengeStickyNoteWidget_C_HandleHasChallengeUpdated Parms{};

	Parms.bHasChallenge = bHasChallenge;

	UObject::ProcessEvent(Func, &Parms);
}

}
