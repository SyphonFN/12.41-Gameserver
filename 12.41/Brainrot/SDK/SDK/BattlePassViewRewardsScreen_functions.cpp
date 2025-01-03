#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BattlePassViewRewardsScreen

#include "Basic.hpp"

#include "BattlePassViewRewardsScreen_classes.hpp"
#include "BattlePassViewRewardsScreen_parameters.hpp"


namespace SDK
{

// Function BattlePassViewRewardsScreen.BattlePassViewRewardsScreen_C.ExecuteUbergraph_BattlePassViewRewardsScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassViewRewardsScreen_C::ExecuteUbergraph_BattlePassViewRewardsScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassViewRewardsScreen_C", "ExecuteUbergraph_BattlePassViewRewardsScreen");

	Params::BattlePassViewRewardsScreen_C_ExecuteUbergraph_BattlePassViewRewardsScreen Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattlePassViewRewardsScreen.BattlePassViewRewardsScreen_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassViewRewardsScreen_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassViewRewardsScreen_C", "BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	Params::BattlePassViewRewardsScreen_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattlePassViewRewardsScreen.BattlePassViewRewardsScreen_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBattlePassViewRewardsScreen_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassViewRewardsScreen_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattlePassViewRewardsScreen.BattlePassViewRewardsScreen_C.BndEvt__Button_CycleSort_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassViewRewardsScreen_C::BndEvt__Button_CycleSort_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassViewRewardsScreen_C", "BndEvt__Button_CycleSort_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::BattlePassViewRewardsScreen_C_BndEvt__Button_CycleSort_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattlePassViewRewardsScreen.BattlePassViewRewardsScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBattlePassViewRewardsScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassViewRewardsScreen_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattlePassViewRewardsScreen.BattlePassViewRewardsScreen_C.OnItemViewed
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UBattlePassViewRewardData*        ItemDisplayed                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassViewRewardsScreen_C::OnItemViewed(const class UBattlePassViewRewardData* ItemDisplayed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassViewRewardsScreen_C", "OnItemViewed");

	Params::BattlePassViewRewardsScreen_C_OnItemViewed Parms{};

	Parms.ItemDisplayed = ItemDisplayed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattlePassViewRewardsScreen.BattlePassViewRewardsScreen_C.GetWidgetForFramingViewedItem
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBattlePassViewRewardsScreen_C::GetWidgetForFramingViewedItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassViewRewardsScreen_C", "GetWidgetForFramingViewedItem");

	Params::BattlePassViewRewardsScreen_C_GetWidgetForFramingViewedItem Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BattlePassViewRewardsScreen.BattlePassViewRewardsScreen_C.CloseScreen
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bPassThrough                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattlePassViewRewardsScreen_C::CloseScreen(bool* bPassThrough)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassViewRewardsScreen_C", "CloseScreen");

	Params::BattlePassViewRewardsScreen_C_CloseScreen Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;
}


// Function BattlePassViewRewardsScreen.BattlePassViewRewardsScreen_C.HandleMobileClosed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    PassThrough                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattlePassViewRewardsScreen_C::HandleMobileClosed(bool* PassThrough)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassViewRewardsScreen_C", "HandleMobileClosed");

	Params::BattlePassViewRewardsScreen_C_HandleMobileClosed Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;
}

}

