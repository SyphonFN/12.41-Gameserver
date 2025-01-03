#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LeaderboardRowWidget

#include "Basic.hpp"

#include "LeaderboardRowWidget_classes.hpp"
#include "LeaderboardRowWidget_parameters.hpp"


namespace SDK
{

// Function LeaderboardRowWidget.LeaderboardRowWidget_C.ExecuteUbergraph_LeaderboardRowWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULeaderboardRowWidget_C::ExecuteUbergraph_LeaderboardRowWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LeaderboardRowWidget_C", "ExecuteUbergraph_LeaderboardRowWidget");

	Params::LeaderboardRowWidget_C_ExecuteUbergraph_LeaderboardRowWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LeaderboardRowWidget.LeaderboardRowWidget_C.BP_OnDeselected
// (Event, Protected, BlueprintEvent)

void ULeaderboardRowWidget_C::BP_OnDeselected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LeaderboardRowWidget_C", "BP_OnDeselected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LeaderboardRowWidget.LeaderboardRowWidget_C.BP_OnSelected
// (Event, Protected, BlueprintEvent)

void ULeaderboardRowWidget_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LeaderboardRowWidget_C", "BP_OnSelected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LeaderboardRowWidget.LeaderboardRowWidget_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ULeaderboardRowWidget_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LeaderboardRowWidget_C", "OnMouseLeave");

	Params::LeaderboardRowWidget_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function LeaderboardRowWidget.LeaderboardRowWidget_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ULeaderboardRowWidget_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LeaderboardRowWidget_C", "OnMouseEnter");

	Params::LeaderboardRowWidget_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function LeaderboardRowWidget.LeaderboardRowWidget_C.BP_OnClicked
// (Event, Protected, BlueprintEvent)

void ULeaderboardRowWidget_C::BP_OnClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LeaderboardRowWidget_C", "BP_OnClicked");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LeaderboardRowWidget.LeaderboardRowWidget_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                          ListItemObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULeaderboardRowWidget_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LeaderboardRowWidget_C", "OnListItemObjectSet");

	Params::LeaderboardRowWidget_C_OnListItemObjectSet Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LeaderboardRowWidget.LeaderboardRowWidget_C.SetDataDirect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortLeaderboardRowProxyInstance* NewData                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULeaderboardRowWidget_C::SetDataDirect(class UFortLeaderboardRowProxyInstance* NewData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LeaderboardRowWidget_C", "SetDataDirect");

	Params::LeaderboardRowWidget_C_SetDataDirect Parms{};

	Parms.NewData = NewData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LeaderboardRowWidget.LeaderboardRowWidget_C.Refresh
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortLeaderboardRowProxyInstance* RowObject                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULeaderboardRowWidget_C::Refresh(class UFortLeaderboardRowProxyInstance* RowObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LeaderboardRowWidget_C", "Refresh");

	Params::LeaderboardRowWidget_C_Refresh Parms{};

	Parms.RowObject = RowObject;

	UObject::ProcessEvent(Func, &Parms);
}

}

