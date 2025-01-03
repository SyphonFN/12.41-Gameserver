#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SpatialFactionScreen

#include "Basic.hpp"

#include "SpatialFactionScreen_classes.hpp"
#include "SpatialFactionScreen_parameters.hpp"


namespace SDK
{

// Function SpatialFactionScreen.SpatialFactionScreen_C.ExecuteUbergraph_SpatialFactionScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpatialFactionScreen_C::ExecuteUbergraph_SpatialFactionScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpatialFactionScreen_C", "ExecuteUbergraph_SpatialFactionScreen");

	Params::SpatialFactionScreen_C_ExecuteUbergraph_SpatialFactionScreen Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SpatialFactionScreen.SpatialFactionScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USpatialFactionScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpatialFactionScreen_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SpatialFactionScreen.SpatialFactionScreen_C.BndEvt__SpatialFaction_About_K2Node_ComponentBoundEvent_0_Close about screen__DelegateSignature
// (BlueprintEvent)

void USpatialFactionScreen_C::BndEvt__SpatialFaction_About_K2Node_ComponentBoundEvent_0_Close_about_screen__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpatialFactionScreen_C", "BndEvt__SpatialFaction_About_K2Node_ComponentBoundEvent_0_Close about screen__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SpatialFactionScreen.SpatialFactionScreen_C.BndEvt__UnlockedPerksScreen_K2Node_ComponentBoundEvent_6_OnUnlockedPerksScreenClosedDynamic__DelegateSignature
// (BlueprintEvent)

void USpatialFactionScreen_C::BndEvt__UnlockedPerksScreen_K2Node_ComponentBoundEvent_6_OnUnlockedPerksScreenClosedDynamic__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpatialFactionScreen_C", "BndEvt__UnlockedPerksScreen_K2Node_ComponentBoundEvent_6_OnUnlockedPerksScreenClosedDynamic__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SpatialFactionScreen.SpatialFactionScreen_C.BndEvt__FactionChoiceScreen_K2Node_ComponentBoundEvent_3_OnFactionChosenDynamic__DelegateSignature
// (BlueprintEvent)

void USpatialFactionScreen_C::BndEvt__FactionChoiceScreen_K2Node_ComponentBoundEvent_3_OnFactionChosenDynamic__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpatialFactionScreen_C", "BndEvt__FactionChoiceScreen_K2Node_ComponentBoundEvent_3_OnFactionChosenDynamic__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SpatialFactionScreen.SpatialFactionScreen_C.OnFactionChoiceRequired
// (Event, Protected, BlueprintEvent)

void USpatialFactionScreen_C::OnFactionChoiceRequired()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpatialFactionScreen_C", "OnFactionChoiceRequired");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SpatialFactionScreen.SpatialFactionScreen_C.BndEvt__Button_UnlockedTech_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpatialFactionScreen_C::BndEvt__Button_UnlockedTech_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpatialFactionScreen_C", "BndEvt__Button_UnlockedTech_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	Params::SpatialFactionScreen_C_BndEvt__Button_UnlockedTech_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SpatialFactionScreen.SpatialFactionScreen_C.BndEvt__Button_About_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpatialFactionScreen_C::BndEvt__Button_About_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpatialFactionScreen_C", "BndEvt__Button_About_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::SpatialFactionScreen_C_BndEvt__Button_About_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SpatialFactionScreen.SpatialFactionScreen_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)

void USpatialFactionScreen_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpatialFactionScreen_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}

}

