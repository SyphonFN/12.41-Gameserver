#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Announce_OnboardingSatelliteCine

#include "Basic.hpp"

#include "Announce_OnboardingSatelliteCine_classes.hpp"
#include "Announce_OnboardingSatelliteCine_parameters.hpp"


namespace SDK
{

// Function Announce_OnboardingSatelliteCine.Announce_OnboardingSatelliteCine_C.OnClientAnnouncementStop
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void AAnnounce_OnboardingSatelliteCine_C::OnClientAnnouncementStop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announce_OnboardingSatelliteCine_C", "OnClientAnnouncementStop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Announce_OnboardingSatelliteCine.Announce_OnboardingSatelliteCine_C.OnPlayerSkippedCutscene
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void AAnnounce_OnboardingSatelliteCine_C::OnPlayerSkippedCutscene()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announce_OnboardingSatelliteCine_C", "OnPlayerSkippedCutscene");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Announce_OnboardingSatelliteCine.Announce_OnboardingSatelliteCine_C.HandleClientEvent_CinematicFinishedPlaying
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          EventSource                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          EventFocus                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent                 ClientEvent                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void AAnnounce_OnboardingSatelliteCine_C::HandleClientEvent_CinematicFinishedPlaying(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announce_OnboardingSatelliteCine_C", "HandleClientEvent_CinematicFinishedPlaying");

	Params::Announce_OnboardingSatelliteCine_C_HandleClientEvent_CinematicFinishedPlaying Parms{};

	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = std::move(ClientEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Announce_OnboardingSatelliteCine.Announce_OnboardingSatelliteCine_C.HandleAllowSkip
// (BlueprintCallable, BlueprintEvent)

void AAnnounce_OnboardingSatelliteCine_C::HandleAllowSkip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announce_OnboardingSatelliteCine_C", "HandleAllowSkip");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Announce_OnboardingSatelliteCine.Announce_OnboardingSatelliteCine_C.OnEnteredCinematicState
// (Event, Protected, BlueprintEvent)

void AAnnounce_OnboardingSatelliteCine_C::OnEnteredCinematicState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announce_OnboardingSatelliteCine_C", "OnEnteredCinematicState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Announce_OnboardingSatelliteCine.Announce_OnboardingSatelliteCine_C.ChinaBuildSkipPrerendered
// (BlueprintCallable, BlueprintEvent)

void AAnnounce_OnboardingSatelliteCine_C::ChinaBuildSkipPrerendered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announce_OnboardingSatelliteCine_C", "ChinaBuildSkipPrerendered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Announce_OnboardingSatelliteCine.Announce_OnboardingSatelliteCine_C.ExecuteUbergraph_Announce_OnboardingSatelliteCine
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAnnounce_OnboardingSatelliteCine_C::ExecuteUbergraph_Announce_OnboardingSatelliteCine(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announce_OnboardingSatelliteCine_C", "ExecuteUbergraph_Announce_OnboardingSatelliteCine");

	Params::Announce_OnboardingSatelliteCine_C_ExecuteUbergraph_Announce_OnboardingSatelliteCine Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
