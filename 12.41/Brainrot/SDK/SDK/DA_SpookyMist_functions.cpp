#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DA_SpookyMist

#include "Basic.hpp"

#include "DA_SpookyMist_classes.hpp"
#include "DA_SpookyMist_parameters.hpp"


namespace SDK
{

// Function DA_SpookyMist.DA_SpookyMist_C.ExecuteUbergraph_DA_SpookyMist
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADA_SpookyMist_C::ExecuteUbergraph_DA_SpookyMist(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DA_SpookyMist_C", "ExecuteUbergraph_DA_SpookyMist");

	Params::DA_SpookyMist_C_ExecuteUbergraph_DA_SpookyMist Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DA_SpookyMist.DA_SpookyMist_C.On DBNO
// (BlueprintCallable, BlueprintEvent)

void ADA_SpookyMist_C::On_DBNO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DA_SpookyMist_C", "On DBNO");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DA_SpookyMist.DA_SpookyMist_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ADA_SpookyMist_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DA_SpookyMist_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DA_SpookyMist.DA_SpookyMist_C.CanCancel
// (BlueprintCallable, BlueprintEvent)

void ADA_SpookyMist_C::CanCancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DA_SpookyMist_C", "CanCancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DA_SpookyMist.DA_SpookyMist_C.BPReleaseSecondaryFire
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortDecoHelper*                  FortDecoHelper                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADA_SpookyMist_C::BPReleaseSecondaryFire(class AFortDecoHelper* FortDecoHelper)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DA_SpookyMist_C", "BPReleaseSecondaryFire");

	Params::DA_SpookyMist_C_BPReleaseSecondaryFire Parms{};

	Parms.FortDecoHelper = FortDecoHelper;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DA_SpookyMist.DA_SpookyMist_C.BPOnUnEquip
// (Event, Public, BlueprintEvent)

void ADA_SpookyMist_C::BPOnUnEquip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DA_SpookyMist_C", "BPOnUnEquip");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DA_SpookyMist.DA_SpookyMist_C.BPPressTrigger
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortDecoHelper*                  FortDecoHelper                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADA_SpookyMist_C::BPPressTrigger(class AFortDecoHelper* FortDecoHelper)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DA_SpookyMist_C", "BPPressTrigger");

	Params::DA_SpookyMist_C_BPPressTrigger Parms{};

	Parms.FortDecoHelper = FortDecoHelper;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DA_SpookyMist.DA_SpookyMist_C.BPPressSecondaryFire
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortDecoHelper*                  FortDecoHelper                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADA_SpookyMist_C::BPPressSecondaryFire(class AFortDecoHelper* FortDecoHelper)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DA_SpookyMist_C", "BPPressSecondaryFire");

	Params::DA_SpookyMist_C_BPPressSecondaryFire Parms{};

	Parms.FortDecoHelper = FortDecoHelper;

	UObject::ProcessEvent(Func, &Parms);
}

}
