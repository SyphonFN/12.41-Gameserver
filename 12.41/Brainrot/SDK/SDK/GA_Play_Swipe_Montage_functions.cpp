#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Play_Swipe_Montage

#include "Basic.hpp"

#include "GA_Play_Swipe_Montage_classes.hpp"
#include "GA_Play_Swipe_Montage_parameters.hpp"


namespace SDK
{

// Function GA_Play_Swipe_Montage.GA_Play_Swipe_Montage_C.ExecuteUbergraph_GA_Play_Swipe_Montage
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Play_Swipe_Montage_C::ExecuteUbergraph_GA_Play_Swipe_Montage(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Play_Swipe_Montage_C", "ExecuteUbergraph_GA_Play_Swipe_Montage");

	Params::GA_Play_Swipe_Montage_C_ExecuteUbergraph_GA_Play_Swipe_Montage Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Play_Swipe_Montage.GA_Play_Swipe_Montage_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Play_Swipe_Montage_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Play_Swipe_Montage_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Play_Swipe_Montage.GA_Play_Swipe_Montage_C.OnCompleted_72D325494FA9FD623AC13DA17B9ACCEF
// (BlueprintCallable, BlueprintEvent)

void UGA_Play_Swipe_Montage_C::OnCompleted_72D325494FA9FD623AC13DA17B9ACCEF()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Play_Swipe_Montage_C", "OnCompleted_72D325494FA9FD623AC13DA17B9ACCEF");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Play_Swipe_Montage.GA_Play_Swipe_Montage_C.OnBlendOut_72D325494FA9FD623AC13DA17B9ACCEF
// (BlueprintCallable, BlueprintEvent)

void UGA_Play_Swipe_Montage_C::OnBlendOut_72D325494FA9FD623AC13DA17B9ACCEF()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Play_Swipe_Montage_C", "OnBlendOut_72D325494FA9FD623AC13DA17B9ACCEF");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Play_Swipe_Montage.GA_Play_Swipe_Montage_C.OnInterrupted_72D325494FA9FD623AC13DA17B9ACCEF
// (BlueprintCallable, BlueprintEvent)

void UGA_Play_Swipe_Montage_C::OnInterrupted_72D325494FA9FD623AC13DA17B9ACCEF()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Play_Swipe_Montage_C", "OnInterrupted_72D325494FA9FD623AC13DA17B9ACCEF");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Play_Swipe_Montage.GA_Play_Swipe_Montage_C.OnCancelled_72D325494FA9FD623AC13DA17B9ACCEF
// (BlueprintCallable, BlueprintEvent)

void UGA_Play_Swipe_Montage_C::OnCancelled_72D325494FA9FD623AC13DA17B9ACCEF()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Play_Swipe_Montage_C", "OnCancelled_72D325494FA9FD623AC13DA17B9ACCEF");

	UObject::ProcessEvent(Func, nullptr);
}

}
