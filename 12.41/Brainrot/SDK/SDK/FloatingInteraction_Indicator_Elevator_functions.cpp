#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FloatingInteraction_Indicator_Elevator

#include "Basic.hpp"

#include "FloatingInteraction_Indicator_Elevator_classes.hpp"
#include "FloatingInteraction_Indicator_Elevator_parameters.hpp"


namespace SDK
{

// Function FloatingInteraction_Indicator_Elevator.FloatingInteraction_Indicator_Elevator_C.ExecuteUbergraph_FloatingInteraction_Indicator_Elevator
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFloatingInteraction_Indicator_Elevator_C::ExecuteUbergraph_FloatingInteraction_Indicator_Elevator(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FloatingInteraction_Indicator_Elevator_C", "ExecuteUbergraph_FloatingInteraction_Indicator_Elevator");

	Params::FloatingInteraction_Indicator_Elevator_C_ExecuteUbergraph_FloatingInteraction_Indicator_Elevator Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FloatingInteraction_Indicator_Elevator.FloatingInteraction_Indicator_Elevator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFloatingInteraction_Indicator_Elevator_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FloatingInteraction_Indicator_Elevator_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FloatingInteraction_Indicator_Elevator.FloatingInteraction_Indicator_Elevator_C.SetBangState
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bShowBang                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFloatingInteraction_Indicator_Elevator_C::SetBangState(bool bShowBang)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FloatingInteraction_Indicator_Elevator_C", "SetBangState");

	Params::FloatingInteraction_Indicator_Elevator_C_SetBangState Parms{};

	Parms.bShowBang = bShowBang;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FloatingInteraction_Indicator_Elevator.FloatingInteraction_Indicator_Elevator_C.TriggerLoopingHoverStateAnim
// (BlueprintCallable, BlueprintEvent)

void UFloatingInteraction_Indicator_Elevator_C::TriggerLoopingHoverStateAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FloatingInteraction_Indicator_Elevator_C", "TriggerLoopingHoverStateAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FloatingInteraction_Indicator_Elevator.FloatingInteraction_Indicator_Elevator_C.OnObjectHoverEnd
// (Event, Protected, BlueprintEvent)

void UFloatingInteraction_Indicator_Elevator_C::OnObjectHoverEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FloatingInteraction_Indicator_Elevator_C", "OnObjectHoverEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FloatingInteraction_Indicator_Elevator.FloatingInteraction_Indicator_Elevator_C.OnObjectHoverBegin
// (Event, Protected, BlueprintEvent)

void UFloatingInteraction_Indicator_Elevator_C::OnObjectHoverBegin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FloatingInteraction_Indicator_Elevator_C", "OnObjectHoverBegin");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FloatingInteraction_Indicator_Elevator.FloatingInteraction_Indicator_Elevator_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFloatingInteraction_Indicator_Elevator_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FloatingInteraction_Indicator_Elevator_C", "PreConstruct");

	Params::FloatingInteraction_Indicator_Elevator_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FloatingInteraction_Indicator_Elevator.FloatingInteraction_Indicator_Elevator_C.SetCATextFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFloatingInteraction_Indicator_Elevator_C::SetCATextFX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FloatingInteraction_Indicator_Elevator_C", "SetCATextFX");

	UObject::ProcessEvent(Func, nullptr);
}

}

