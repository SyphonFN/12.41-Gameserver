#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaChallengePageEntry

#include "Basic.hpp"

#include "AthenaChallengePageEntry_classes.hpp"
#include "AthenaChallengePageEntry_parameters.hpp"


namespace SDK
{

// Function AthenaChallengePageEntry.AthenaChallengePageEntry_C.ExecuteUbergraph_AthenaChallengePageEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaChallengePageEntry_C::ExecuteUbergraph_AthenaChallengePageEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengePageEntry_C", "ExecuteUbergraph_AthenaChallengePageEntry");

	Params::AthenaChallengePageEntry_C_ExecuteUbergraph_AthenaChallengePageEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaChallengePageEntry.AthenaChallengePageEntry_C.Play On Hovered
// (BlueprintCallable, BlueprintEvent)

void UAthenaChallengePageEntry_C::Play_On_Hovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengePageEntry_C", "Play On Hovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaChallengePageEntry.AthenaChallengePageEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaChallengePageEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengePageEntry_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaChallengePageEntry.AthenaChallengePageEntry_C.OnSetState
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsCompleted                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bIsLocked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaChallengePageEntry_C::OnSetState(bool bIsCompleted, bool bIsLocked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengePageEntry_C", "OnSetState");

	Params::AthenaChallengePageEntry_C_OnSetState Parms{};

	Parms.bIsCompleted = bIsCompleted;
	Parms.bIsLocked = bIsLocked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaChallengePageEntry.AthenaChallengePageEntry_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaChallengePageEntry_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengePageEntry_C", "OnMouseLeave");

	Params::AthenaChallengePageEntry_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaChallengePageEntry.AthenaChallengePageEntry_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaChallengePageEntry_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengePageEntry_C", "OnMouseEnter");

	Params::AthenaChallengePageEntry_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaChallengePageEntry.AthenaChallengePageEntry_C.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UAthenaChallengePageEntry_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengePageEntry_C", "OnFocusLost");

	Params::AthenaChallengePageEntry_C_OnFocusLost Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaChallengePageEntry.AthenaChallengePageEntry_C.BP_OnIsLastEntrySet
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsLastEntry                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaChallengePageEntry_C::BP_OnIsLastEntrySet(bool bIsLastEntry)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengePageEntry_C", "BP_OnIsLastEntrySet");

	Params::AthenaChallengePageEntry_C_BP_OnIsLastEntrySet Parms{};

	Parms.bIsLastEntry = bIsLastEntry;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaChallengePageEntry.AthenaChallengePageEntry_C.BP_OnIsInGameSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsInGame                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaChallengePageEntry_C::BP_OnIsInGameSet(bool bIsInGame)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengePageEntry_C", "BP_OnIsInGameSet");

	Params::AthenaChallengePageEntry_C_BP_OnIsInGameSet Parms{};

	Parms.bIsInGame = bIsInGame;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaChallengePageEntry.AthenaChallengePageEntry_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UAthenaChallengePageEntry_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengePageEntry_C", "OnFocusReceived");

	Params::AthenaChallengePageEntry_C_OnFocusReceived Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function AthenaChallengePageEntry.AthenaChallengePageEntry_C.SetComplete
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaChallengePageEntry_C::SetComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengePageEntry_C", "SetComplete");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaChallengePageEntry.AthenaChallengePageEntry_C.SetLocked
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaChallengePageEntry_C::SetLocked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengePageEntry_C", "SetLocked");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaChallengePageEntry.AthenaChallengePageEntry_C.SetDefault
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaChallengePageEntry_C::SetDefault()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengePageEntry_C", "SetDefault");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaChallengePageEntry.AthenaChallengePageEntry_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UAthenaChallengePageEntry_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengePageEntry_C", "OnMouseButtonDown");

	Params::AthenaChallengePageEntry_C_OnMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function AthenaChallengePageEntry.AthenaChallengePageEntry_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UAthenaChallengePageEntry_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengePageEntry_C", "OnMouseButtonUp");

	Params::AthenaChallengePageEntry_C_OnMouseButtonUp Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

