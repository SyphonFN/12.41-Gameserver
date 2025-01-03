#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ServerBrowserInfoTile_Creative

#include "Basic.hpp"

#include "ServerBrowserInfoTile_Creative_classes.hpp"
#include "ServerBrowserInfoTile_Creative_parameters.hpp"


namespace SDK
{

// Function ServerBrowserInfoTile_Creative.ServerBrowserInfoTile_Creative_C.ExecuteUbergraph_ServerBrowserInfoTile_Creative
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UServerBrowserInfoTile_Creative_C::ExecuteUbergraph_ServerBrowserInfoTile_Creative(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ServerBrowserInfoTile_Creative_C", "ExecuteUbergraph_ServerBrowserInfoTile_Creative");

	Params::ServerBrowserInfoTile_Creative_C_ExecuteUbergraph_ServerBrowserInfoTile_Creative Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ServerBrowserInfoTile_Creative.ServerBrowserInfoTile_Creative_C.SetBackgroundImage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ArrayIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UServerBrowserInfoTile_Creative_C::SetBackgroundImage(int32 ArrayIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ServerBrowserInfoTile_Creative_C", "SetBackgroundImage");

	Params::ServerBrowserInfoTile_Creative_C_SetBackgroundImage Parms{};

	Parms.ArrayIndex = ArrayIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ServerBrowserInfoTile_Creative.ServerBrowserInfoTile_Creative_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UServerBrowserInfoTile_Creative_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ServerBrowserInfoTile_Creative_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ServerBrowserInfoTile_Creative.ServerBrowserInfoTile_Creative_C.OnOwnerNameUpdated
// (Event, Protected, BlueprintEvent)

void UServerBrowserInfoTile_Creative_C::OnOwnerNameUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ServerBrowserInfoTile_Creative_C", "OnOwnerNameUpdated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ServerBrowserInfoTile_Creative.ServerBrowserInfoTile_Creative_C.OnLaunchButtonEnableChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bEnableValue                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UServerBrowserInfoTile_Creative_C::OnLaunchButtonEnableChanged(bool bEnableValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ServerBrowserInfoTile_Creative_C", "OnLaunchButtonEnableChanged");

	Params::ServerBrowserInfoTile_Creative_C_OnLaunchButtonEnableChanged Parms{};

	Parms.bEnableValue = bEnableValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ServerBrowserInfoTile_Creative.ServerBrowserInfoTile_Creative_C.RequestUpdateBackgroundImage
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                                   FriendListHash                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UServerBrowserInfoTile_Creative_C::RequestUpdateBackgroundImage(int32 FriendListHash)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ServerBrowserInfoTile_Creative_C", "RequestUpdateBackgroundImage");

	Params::ServerBrowserInfoTile_Creative_C_RequestUpdateBackgroundImage Parms{};

	Parms.FriendListHash = FriendListHash;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ServerBrowserInfoTile_Creative.ServerBrowserInfoTile_Creative_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void UServerBrowserInfoTile_Creative_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ServerBrowserInfoTile_Creative_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ServerBrowserInfoTile_Creative.ServerBrowserInfoTile_Creative_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UServerBrowserInfoTile_Creative_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ServerBrowserInfoTile_Creative_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ServerBrowserInfoTile_Creative.ServerBrowserInfoTile_Creative_C.InputMethodChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECommonInputType                        bNewInputType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UServerBrowserInfoTile_Creative_C::InputMethodChanged(ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ServerBrowserInfoTile_Creative_C", "InputMethodChanged");

	Params::ServerBrowserInfoTile_Creative_C_InputMethodChanged Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ServerBrowserInfoTile_Creative.ServerBrowserInfoTile_Creative_C.InitializeSelectedButton
// (BlueprintCallable, BlueprintEvent)

void UServerBrowserInfoTile_Creative_C::InitializeSelectedButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ServerBrowserInfoTile_Creative_C", "InitializeSelectedButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ServerBrowserInfoTile_Creative.ServerBrowserInfoTile_Creative_C.BndEvt__Button_ShowFriends_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UServerBrowserInfoTile_Creative_C::BndEvt__Button_ShowFriends_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ServerBrowserInfoTile_Creative_C", "BndEvt__Button_ShowFriends_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::ServerBrowserInfoTile_Creative_C_BndEvt__Button_ShowFriends_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ServerBrowserInfoTile_Creative.ServerBrowserInfoTile_Creative_C.BP_OnDeselected
// (Event, Protected, BlueprintEvent)

void UServerBrowserInfoTile_Creative_C::BP_OnDeselected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ServerBrowserInfoTile_Creative_C", "BP_OnDeselected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ServerBrowserInfoTile_Creative.ServerBrowserInfoTile_Creative_C.BP_OnSelected
// (Event, Protected, BlueprintEvent)

void UServerBrowserInfoTile_Creative_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ServerBrowserInfoTile_Creative_C", "BP_OnSelected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ServerBrowserInfoTile_Creative.ServerBrowserInfoTile_Creative_C.BndEvt__Button_CloseFriends_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UServerBrowserInfoTile_Creative_C::BndEvt__Button_CloseFriends_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ServerBrowserInfoTile_Creative_C", "BndEvt__Button_CloseFriends_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::ServerBrowserInfoTile_Creative_C_BndEvt__Button_CloseFriends_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ServerBrowserInfoTile_Creative.ServerBrowserInfoTile_Creative_C.OnLoaded_296230CE4FECC5810C4B9AB00A3162F7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UServerBrowserInfoTile_Creative_C::OnLoaded_296230CE4FECC5810C4B9AB00A3162F7(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ServerBrowserInfoTile_Creative_C", "OnLoaded_296230CE4FECC5810C4B9AB00A3162F7");

	Params::ServerBrowserInfoTile_Creative_C_OnLoaded_296230CE4FECC5810C4B9AB00A3162F7 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}

}

