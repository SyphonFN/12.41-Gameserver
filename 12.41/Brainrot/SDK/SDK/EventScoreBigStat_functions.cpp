#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EventScoreBigStat

#include "Basic.hpp"

#include "EventScoreBigStat_classes.hpp"
#include "EventScoreBigStat_parameters.hpp"


namespace SDK
{

// Function EventScoreBigStat.EventScoreBigStat_C.SetData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Label                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ValueContext                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             FormatterText                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FFortTournamentDisplayInfo       Tournament_Display_Info                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UEventScoreBigStat_C::SetData(const class FText& Label, int32 Value, int32 ValueContext, const class FText& FormatterText, const struct FFortTournamentDisplayInfo& Tournament_Display_Info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventScoreBigStat_C", "SetData");

	Params::EventScoreBigStat_C_SetData Parms{};

	Parms.Label = std::move(Label);
	Parms.Value = Value;
	Parms.ValueContext = ValueContext;
	Parms.FormatterText = std::move(FormatterText);
	Parms.Tournament_Display_Info = std::move(Tournament_Display_Info);

	UObject::ProcessEvent(Func, &Parms);
}

}
