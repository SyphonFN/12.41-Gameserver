#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CCPM_M_BananaAgent

#include "Basic.hpp"

#include "CCPM_M_BananaAgent_classes.hpp"
#include "CCPM_M_BananaAgent_parameters.hpp"


namespace SDK
{

// Function CCPM_M_BananaAgent.CCPM_M_BananaAgent_C.ExecuteUbergraph_CCPM_M_BananaAgent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACCPM_M_BananaAgent_C::ExecuteUbergraph_CCPM_M_BananaAgent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CCPM_M_BananaAgent_C", "ExecuteUbergraph_CCPM_M_BananaAgent");

	Params::CCPM_M_BananaAgent_C_ExecuteUbergraph_CCPM_M_BananaAgent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CCPM_M_BananaAgent.CCPM_M_BananaAgent_C.InitializeVariabels
// (BlueprintCallable, BlueprintEvent)

void ACCPM_M_BananaAgent_C::InitializeVariabels()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CCPM_M_BananaAgent_C", "InitializeVariabels");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CCPM_M_BananaAgent.CCPM_M_BananaAgent_C.OnPostResIn
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ACCPM_M_BananaAgent_C::OnPostResIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CCPM_M_BananaAgent_C", "OnPostResIn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CCPM_M_BananaAgent.CCPM_M_BananaAgent_C.ResetSafetyGate
// (BlueprintCallable, BlueprintEvent)

void ACCPM_M_BananaAgent_C::ResetSafetyGate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CCPM_M_BananaAgent_C", "ResetSafetyGate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CCPM_M_BananaAgent.CCPM_M_BananaAgent_C.HackyWorkaroundRefreshTimerGuy
// (BlueprintCallable, BlueprintEvent)

void ACCPM_M_BananaAgent_C::HackyWorkaroundRefreshTimerGuy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CCPM_M_BananaAgent_C", "HackyWorkaroundRefreshTimerGuy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CCPM_M_BananaAgent.CCPM_M_BananaAgent_C.OnActualStatChange
// (BlueprintCallable, BlueprintEvent)

void ACCPM_M_BananaAgent_C::OnActualStatChange()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CCPM_M_BananaAgent_C", "OnActualStatChange");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CCPM_M_BananaAgent.CCPM_M_BananaAgent_C.OnPawnAndPartChanged
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ACCPM_M_BananaAgent_C::OnPawnAndPartChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CCPM_M_BananaAgent_C", "OnPawnAndPartChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CCPM_M_BananaAgent.CCPM_M_BananaAgent_C.OnStatChanged_91684B16413237DEB51BD6867C4D5996
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             StatName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   StatValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACCPM_M_BananaAgent_C::OnStatChanged_91684B16413237DEB51BD6867C4D5996(class FName StatName, int32 StatValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CCPM_M_BananaAgent_C", "OnStatChanged_91684B16413237DEB51BD6867C4D5996");

	Params::CCPM_M_BananaAgent_C_OnStatChanged_91684B16413237DEB51BD6867C4D5996 Parms{};

	Parms.StatName = StatName;
	Parms.StatValue = StatValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CCPM_M_BananaAgent.CCPM_M_BananaAgent_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ACCPM_M_BananaAgent_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CCPM_M_BananaAgent_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CCPM_M_BananaAgent.CCPM_M_BananaAgent_C.Death Check
// (Public, BlueprintCallable, BlueprintEvent)

void ACCPM_M_BananaAgent_C::Death_Check()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CCPM_M_BananaAgent_C", "Death Check");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CCPM_M_BananaAgent.CCPM_M_BananaAgent_C.GetAssociatedAthenaController
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerControllerAthena*      AsFort_Player_Controller_Athena                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACCPM_M_BananaAgent_C::GetAssociatedAthenaController(class AFortPlayerControllerAthena** AsFort_Player_Controller_Athena)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CCPM_M_BananaAgent_C", "GetAssociatedAthenaController");

	Params::CCPM_M_BananaAgent_C_GetAssociatedAthenaController Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AsFort_Player_Controller_Athena != nullptr)
		*AsFort_Player_Controller_Athena = Parms.AsFort_Player_Controller_Athena;
}


// Function CCPM_M_BananaAgent.CCPM_M_BananaAgent_C.ApplyOverrideToItems
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortItem*>                Array                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ACCPM_M_BananaAgent_C::ApplyOverrideToItems(TArray<class UFortItem*>& Array)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CCPM_M_BananaAgent_C", "ApplyOverrideToItems");

	Params::CCPM_M_BananaAgent_C_ApplyOverrideToItems Parms{};

	Parms.Array = std::move(Array);

	UObject::ProcessEvent(Func, &Parms);

	Array = std::move(Parms.Array);
}


// Function CCPM_M_BananaAgent.CCPM_M_BananaAgent_C.ApplyLevelParam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Level                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACCPM_M_BananaAgent_C::ApplyLevelParam(int32 Level)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CCPM_M_BananaAgent_C", "ApplyLevelParam");

	Params::CCPM_M_BananaAgent_C_ApplyLevelParam Parms{};

	Parms.Level = Level;

	UObject::ProcessEvent(Func, &Parms);
}

}

