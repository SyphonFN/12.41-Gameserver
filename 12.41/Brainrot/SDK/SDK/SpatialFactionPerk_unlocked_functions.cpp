#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SpatialFactionPerk_unlocked

#include "Basic.hpp"

#include "SpatialFactionPerk_unlocked_classes.hpp"
#include "SpatialFactionPerk_unlocked_parameters.hpp"


namespace SDK
{

// Function SpatialFactionPerk_unlocked.SpatialFactionPerk_unlocked_C.ExecuteUbergraph_SpatialFactionPerk_unlocked
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpatialFactionPerk_unlocked_C::ExecuteUbergraph_SpatialFactionPerk_unlocked(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpatialFactionPerk_unlocked_C", "ExecuteUbergraph_SpatialFactionPerk_unlocked");

	Params::SpatialFactionPerk_unlocked_C_ExecuteUbergraph_SpatialFactionPerk_unlocked Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SpatialFactionPerk_unlocked.SpatialFactionPerk_unlocked_C.BPSetup
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFactionUnlockedPerkData*         InPerk                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpatialFactionPerk_unlocked_C::BPSetup(class UFactionUnlockedPerkData* InPerk)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpatialFactionPerk_unlocked_C", "BPSetup");

	Params::SpatialFactionPerk_unlocked_C_BPSetup Parms{};

	Parms.InPerk = InPerk;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SpatialFactionPerk_unlocked.SpatialFactionPerk_unlocked_C.BP_OnDeselected_1
// (BlueprintCallable, BlueprintEvent)

void USpatialFactionPerk_unlocked_C::BP_OnDeselected_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpatialFactionPerk_unlocked_C", "BP_OnDeselected_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SpatialFactionPerk_unlocked.SpatialFactionPerk_unlocked_C.BP_OnSelected_1
// (BlueprintCallable, BlueprintEvent)

void USpatialFactionPerk_unlocked_C::BP_OnSelected_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpatialFactionPerk_unlocked_C", "BP_OnSelected_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SpatialFactionPerk_unlocked.SpatialFactionPerk_unlocked_C.BP_OnUnhovered_1
// (BlueprintCallable, BlueprintEvent)

void USpatialFactionPerk_unlocked_C::BP_OnUnhovered_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpatialFactionPerk_unlocked_C", "BP_OnUnhovered_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SpatialFactionPerk_unlocked.SpatialFactionPerk_unlocked_C.BP_OnHovered_1
// (BlueprintCallable, BlueprintEvent)

void USpatialFactionPerk_unlocked_C::BP_OnHovered_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpatialFactionPerk_unlocked_C", "BP_OnHovered_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SpatialFactionPerk_unlocked.SpatialFactionPerk_unlocked_C.OnLoaded_625B37C643E292B11217C98384656193
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpatialFactionPerk_unlocked_C::OnLoaded_625B37C643E292B11217C98384656193(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpatialFactionPerk_unlocked_C", "OnLoaded_625B37C643E292B11217C98384656193");

	Params::SpatialFactionPerk_unlocked_C_OnLoaded_625B37C643E292B11217C98384656193 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}

}
