#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_SCMachine_Passive

#include "Basic.hpp"

#include "GA_Athena_SCMachine_Passive_classes.hpp"
#include "GA_Athena_SCMachine_Passive_parameters.hpp"


namespace SDK
{

// Function GA_Athena_SCMachine_Passive.GA_Athena_SCMachine_Passive_C.ExecuteUbergraph_GA_Athena_SCMachine_Passive
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_SCMachine_Passive_C::ExecuteUbergraph_GA_Athena_SCMachine_Passive(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_SCMachine_Passive_C", "ExecuteUbergraph_GA_Athena_SCMachine_Passive");

	Params::GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_SCMachine_Passive.GA_Athena_SCMachine_Passive_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Athena_SCMachine_Passive_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_SCMachine_Passive_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Athena_SCMachine_Passive.GA_Athena_SCMachine_Passive_C.HandleOnFortPlayerDied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawnAthena*            FortPlayerPawnAthena                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_SCMachine_Passive_C::HandleOnFortPlayerDied(class AFortPlayerPawnAthena* FortPlayerPawnAthena)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_SCMachine_Passive_C", "HandleOnFortPlayerDied");

	Params::GA_Athena_SCMachine_Passive_C_HandleOnFortPlayerDied Parms{};

	Parms.FortPlayerPawnAthena = FortPlayerPawnAthena;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_SCMachine_Passive.GA_Athena_SCMachine_Passive_C.Spawn
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_SCMachine_Passive_C::Spawn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_SCMachine_Passive_C", "Spawn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Athena_SCMachine_Passive.GA_Athena_SCMachine_Passive_C.SaveOutPlayer
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Athena_SCMachine_Passive_C::SaveOutPlayer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_SCMachine_Passive_C", "SaveOutPlayer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Athena_SCMachine_Passive.GA_Athena_SCMachine_Passive_C.Check Resurrection Active
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bEnabled                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Athena_SCMachine_Passive_C::Check_Resurrection_Active(bool* bEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_SCMachine_Passive_C", "Check Resurrection Active");

	Params::GA_Athena_SCMachine_Passive_C_Check_Resurrection_Active Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bEnabled != nullptr)
		*bEnabled = Parms.bEnabled;
}

}
