#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HardcoreModifierListEntry

#include "Basic.hpp"

#include "HardcoreModifierListEntry_classes.hpp"
#include "HardcoreModifierListEntry_parameters.hpp"


namespace SDK
{

// Function HardcoreModifierListEntry.HardcoreModifierListEntry_C.ExecuteUbergraph_HardcoreModifierListEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHardcoreModifierListEntry_C::ExecuteUbergraph_HardcoreModifierListEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HardcoreModifierListEntry_C", "ExecuteUbergraph_HardcoreModifierListEntry");

	Params::HardcoreModifierListEntry_C_ExecuteUbergraph_HardcoreModifierListEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HardcoreModifierListEntry.HardcoreModifierListEntry_C.SetMaxLevelCompleted
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   MaxLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHardcoreModifierListEntry_C::SetMaxLevelCompleted(int32 MaxLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HardcoreModifierListEntry_C", "SetMaxLevelCompleted");

	Params::HardcoreModifierListEntry_C_SetMaxLevelCompleted Parms{};

	Parms.MaxLevel = MaxLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HardcoreModifierListEntry.HardcoreModifierListEntry_C.HandleModifierEnabled
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bModifierEnabled                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHardcoreModifierListEntry_C::HandleModifierEnabled(bool bModifierEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HardcoreModifierListEntry_C", "HandleModifierEnabled");

	Params::HardcoreModifierListEntry_C_HandleModifierEnabled Parms{};

	Parms.bModifierEnabled = bModifierEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HardcoreModifierListEntry.HardcoreModifierListEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHardcoreModifierListEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HardcoreModifierListEntry_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HardcoreModifierListEntry.HardcoreModifierListEntry_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UHardcoreModifierListEntry_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HardcoreModifierListEntry_C", "OnMouseLeave");

	Params::HardcoreModifierListEntry_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function HardcoreModifierListEntry.HardcoreModifierListEntry_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UHardcoreModifierListEntry_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HardcoreModifierListEntry_C", "OnMouseEnter");

	Params::HardcoreModifierListEntry_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}

}
