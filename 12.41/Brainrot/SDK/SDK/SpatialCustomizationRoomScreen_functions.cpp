#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SpatialCustomizationRoomScreen

#include "Basic.hpp"

#include "SpatialCustomizationRoomScreen_classes.hpp"
#include "SpatialCustomizationRoomScreen_parameters.hpp"


namespace SDK
{

// Function SpatialCustomizationRoomScreen.SpatialCustomizationRoomScreen_C.ExecuteUbergraph_SpatialCustomizationRoomScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpatialCustomizationRoomScreen_C::ExecuteUbergraph_SpatialCustomizationRoomScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpatialCustomizationRoomScreen_C", "ExecuteUbergraph_SpatialCustomizationRoomScreen");

	Params::SpatialCustomizationRoomScreen_C_ExecuteUbergraph_SpatialCustomizationRoomScreen Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SpatialCustomizationRoomScreen.SpatialCustomizationRoomScreen_C.BndEvt__BPS12_AboutModal_K2Node_ComponentBoundEvent_2_OnAboutModalClosedDynamic__DelegateSignature
// (BlueprintEvent)

void USpatialCustomizationRoomScreen_C::BndEvt__BPS12_AboutModal_K2Node_ComponentBoundEvent_2_OnAboutModalClosedDynamic__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpatialCustomizationRoomScreen_C", "BndEvt__BPS12_AboutModal_K2Node_ComponentBoundEvent_2_OnAboutModalClosedDynamic__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SpatialCustomizationRoomScreen.SpatialCustomizationRoomScreen_C.OnShowFirstTimeInfo
// (Event, Protected, BlueprintEvent)

void USpatialCustomizationRoomScreen_C::OnShowFirstTimeInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpatialCustomizationRoomScreen_C", "OnShowFirstTimeInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SpatialCustomizationRoomScreen.SpatialCustomizationRoomScreen_C.BndEvt__Button_About_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpatialCustomizationRoomScreen_C::BndEvt__Button_About_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpatialCustomizationRoomScreen_C", "BndEvt__Button_About_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::SpatialCustomizationRoomScreen_C_BndEvt__Button_About_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SpatialCustomizationRoomScreen.SpatialCustomizationRoomScreen_C.OnRoomStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// ESpatialCustomizationRoomState          CurrentRoomState                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESpatialCustomizationRoomState          PreviousRoomState                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpatialCustomizationRoomScreen_C::OnRoomStateChanged(ESpatialCustomizationRoomState CurrentRoomState, ESpatialCustomizationRoomState PreviousRoomState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpatialCustomizationRoomScreen_C", "OnRoomStateChanged");

	Params::SpatialCustomizationRoomScreen_C_OnRoomStateChanged Parms{};

	Parms.CurrentRoomState = CurrentRoomState;
	Parms.PreviousRoomState = PreviousRoomState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SpatialCustomizationRoomScreen.SpatialCustomizationRoomScreen_C.HandeRoomStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESpatialCustomizationRoomState          CurrentRoomState                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESpatialCustomizationRoomState          PreviousRoomState                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpatialCustomizationRoomScreen_C::HandeRoomStateChanged(ESpatialCustomizationRoomState CurrentRoomState, ESpatialCustomizationRoomState PreviousRoomState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpatialCustomizationRoomScreen_C", "HandeRoomStateChanged");

	Params::SpatialCustomizationRoomScreen_C_HandeRoomStateChanged Parms{};

	Parms.CurrentRoomState = CurrentRoomState;
	Parms.PreviousRoomState = PreviousRoomState;

	UObject::ProcessEvent(Func, &Parms);
}

}

