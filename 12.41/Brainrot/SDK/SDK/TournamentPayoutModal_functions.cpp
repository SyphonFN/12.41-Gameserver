#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TournamentPayoutModal

#include "Basic.hpp"

#include "TournamentPayoutModal_classes.hpp"
#include "TournamentPayoutModal_parameters.hpp"


namespace SDK
{

// Function TournamentPayoutModal.TournamentPayoutModal_C.CallEventBack__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTournamentPayoutModal_C::CallEventBack__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentPayoutModal_C", "CallEventBack__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TournamentPayoutModal.TournamentPayoutModal_C.NoPayout__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTournamentPayoutModal_C::NoPayout__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentPayoutModal_C", "NoPayout__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TournamentPayoutModal.TournamentPayoutModal_C.ExecuteUbergraph_TournamentPayoutModal
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTournamentPayoutModal_C::ExecuteUbergraph_TournamentPayoutModal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentPayoutModal_C", "ExecuteUbergraph_TournamentPayoutModal");

	Params::TournamentPayoutModal_C_ExecuteUbergraph_TournamentPayoutModal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TournamentPayoutModal.TournamentPayoutModal_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTournamentPayoutModal_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentPayoutModal_C", "BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	Params::TournamentPayoutModal_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TournamentPayoutModal.TournamentPayoutModal_C.EventColorize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTournamentDisplayInfo       TournamentDisplayInfo                                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UTournamentPayoutModal_C::EventColorize(const struct FFortTournamentDisplayInfo& TournamentDisplayInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentPayoutModal_C", "EventColorize");

	Params::TournamentPayoutModal_C_EventColorize Parms{};

	Parms.TournamentDisplayInfo = std::move(TournamentDisplayInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function TournamentPayoutModal.TournamentPayoutModal_C.EventIntro
// (BlueprintCallable, BlueprintEvent)

void UTournamentPayoutModal_C::EventIntro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentPayoutModal_C", "EventIntro");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TournamentPayoutModal.TournamentPayoutModal_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           EventWindowId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           TournamentId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UTournamentPayoutModal_C::Init(const class FString& EventWindowId, const class FString& TournamentId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentPayoutModal_C", "Init");

	Params::TournamentPayoutModal_C_Init Parms{};

	Parms.EventWindowId = std::move(EventWindowId);
	Parms.TournamentId = std::move(TournamentId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function TournamentPayoutModal.TournamentPayoutModal_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTournamentPayoutModal_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentPayoutModal_C", "BndEvt__BackButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::TournamentPayoutModal_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TournamentPayoutModal.TournamentPayoutModal_C.NotifyNoPayouts
// (Event, Protected, BlueprintEvent)

void UTournamentPayoutModal_C::NotifyNoPayouts()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentPayoutModal_C", "NotifyNoPayouts");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TournamentPayoutModal.TournamentPayoutModal_C.EmptyFunction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Handled                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTournamentPayoutModal_C::EmptyFunction(bool* Handled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentPayoutModal_C", "EmptyFunction");

	Params::TournamentPayoutModal_C_EmptyFunction Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Handled != nullptr)
		*Handled = Parms.Handled;
}

}
