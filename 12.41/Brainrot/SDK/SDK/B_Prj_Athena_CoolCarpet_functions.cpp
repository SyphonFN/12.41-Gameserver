#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Prj_Athena_CoolCarpet

#include "Basic.hpp"

#include "B_Prj_Athena_CoolCarpet_classes.hpp"
#include "B_Prj_Athena_CoolCarpet_parameters.hpp"


namespace SDK
{

// Function B_Prj_Athena_CoolCarpet.B_Prj_Athena_CoolCarpet_C.ExecuteUbergraph_B_Prj_Athena_CoolCarpet
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Prj_Athena_CoolCarpet_C::ExecuteUbergraph_B_Prj_Athena_CoolCarpet(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Athena_CoolCarpet_C", "ExecuteUbergraph_B_Prj_Athena_CoolCarpet");

	Params::B_Prj_Athena_CoolCarpet_C_ExecuteUbergraph_B_Prj_Athena_CoolCarpet Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Athena_CoolCarpet.B_Prj_Athena_CoolCarpet_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Prj_Athena_CoolCarpet_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Athena_CoolCarpet_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

