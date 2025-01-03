#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DonutChallengeScreen

#include "Basic.hpp"

#include "DonutChallengeScreen_classes.hpp"
#include "DonutChallengeScreen_parameters.hpp"


namespace SDK
{

// Function DonutChallengeScreen.DonutChallengeScreen_C.ExecuteUbergraph_DonutChallengeScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDonutChallengeScreen_C::ExecuteUbergraph_DonutChallengeScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DonutChallengeScreen_C", "ExecuteUbergraph_DonutChallengeScreen");

	Params::DonutChallengeScreen_C_ExecuteUbergraph_DonutChallengeScreen Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DonutChallengeScreen.DonutChallengeScreen_C.PlayDonutAttract
// (BlueprintCallable, BlueprintEvent)

void UDonutChallengeScreen_C::PlayDonutAttract()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DonutChallengeScreen_C", "PlayDonutAttract");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DonutChallengeScreen.DonutChallengeScreen_C.ShowSkinUnlockMessage
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bShowMessage                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   InChallengeNum                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDonutChallengeScreen_C::ShowSkinUnlockMessage(bool bShowMessage, int32 InChallengeNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DonutChallengeScreen_C", "ShowSkinUnlockMessage");

	Params::DonutChallengeScreen_C_ShowSkinUnlockMessage Parms{};

	Parms.bShowMessage = bShowMessage;
	Parms.InChallengeNum = InChallengeNum;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DonutChallengeScreen.DonutChallengeScreen_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)

void UDonutChallengeScreen_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DonutChallengeScreen_C", "BP_OnDeactivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DonutChallengeScreen.DonutChallengeScreen_C.Anim_SetupControllerFocus
// (BlueprintCallable, BlueprintEvent)

void UDonutChallengeScreen_C::Anim_SetupControllerFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DonutChallengeScreen_C", "Anim_SetupControllerFocus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DonutChallengeScreen.DonutChallengeScreen_C.UpdateBPOwnedStateVisuals
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bInOwnsBattlePass                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDonutChallengeScreen_C::UpdateBPOwnedStateVisuals(bool bInOwnsBattlePass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DonutChallengeScreen_C", "UpdateBPOwnedStateVisuals");

	Params::DonutChallengeScreen_C_UpdateBPOwnedStateVisuals Parms{};

	Parms.bInOwnsBattlePass = bInOwnsBattlePass;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DonutChallengeScreen.DonutChallengeScreen_C.BndEvt__IconTextButton_1_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDonutChallengeScreen_C::BndEvt__IconTextButton_1_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DonutChallengeScreen_C", "BndEvt__IconTextButton_1_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	Params::DonutChallengeScreen_C_BndEvt__IconTextButton_1_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DonutChallengeScreen.DonutChallengeScreen_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDonutChallengeScreen_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DonutChallengeScreen_C", "BndEvt__IconTextButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::DonutChallengeScreen_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DonutChallengeScreen.DonutChallengeScreen_C.ToggleBattlePassWindow
// (BlueprintCallable, BlueprintEvent)

void UDonutChallengeScreen_C::ToggleBattlePassWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DonutChallengeScreen_C", "ToggleBattlePassWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DonutChallengeScreen.DonutChallengeScreen_C.BndEvt__IconTextButton_155_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDonutChallengeScreen_C::BndEvt__IconTextButton_155_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DonutChallengeScreen_C", "BndEvt__IconTextButton_155_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::DonutChallengeScreen_C_BndEvt__IconTextButton_155_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DonutChallengeScreen.DonutChallengeScreen_C.ResetDonutPC
// (BlueprintCallable, BlueprintEvent)

void UDonutChallengeScreen_C::ResetDonutPC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DonutChallengeScreen_C", "ResetDonutPC");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DonutChallengeScreen.DonutChallengeScreen_C.SequenceEvent_0
// (BlueprintCallable, BlueprintEvent)

void UDonutChallengeScreen_C::SequenceEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DonutChallengeScreen_C", "SequenceEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DonutChallengeScreen.DonutChallengeScreen_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDonutChallengeScreen_C::BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DonutChallengeScreen_C", "BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::DonutChallengeScreen_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DonutChallengeScreen.DonutChallengeScreen_C.ToggleChallengesWindow
// (BlueprintCallable, BlueprintEvent)

void UDonutChallengeScreen_C::ToggleChallengesWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DonutChallengeScreen_C", "ToggleChallengesWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DonutChallengeScreen.DonutChallengeScreen_C.PlayLoginSequence
// (BlueprintCallable, BlueprintEvent)

void UDonutChallengeScreen_C::PlayLoginSequence()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DonutChallengeScreen_C", "PlayLoginSequence");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DonutChallengeScreen.DonutChallengeScreen_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)

void UDonutChallengeScreen_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DonutChallengeScreen_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DonutChallengeScreen.DonutChallengeScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDonutChallengeScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DonutChallengeScreen_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DonutChallengeScreen.DonutChallengeScreen_C.BndEvt__Button_BattlepassUpsell_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDonutChallengeScreen_C::BndEvt__Button_BattlepassUpsell_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DonutChallengeScreen_C", "BndEvt__Button_BattlepassUpsell_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::DonutChallengeScreen_C_BndEvt__Button_BattlepassUpsell_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DonutChallengeScreen.DonutChallengeScreen_C.SetPasswordText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UDonutChallengeScreen_C::SetPasswordText(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DonutChallengeScreen_C", "SetPasswordText");

	Params::DonutChallengeScreen_C_SetPasswordText Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function DonutChallengeScreen.DonutChallengeScreen_C.On_Border_Minimized_MouseButtonDown_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UDonutChallengeScreen_C::On_Border_Minimized_MouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DonutChallengeScreen_C", "On_Border_Minimized_MouseButtonDown_0");

	Params::DonutChallengeScreen_C_On_Border_Minimized_MouseButtonDown_0 Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function DonutChallengeScreen.DonutChallengeScreen_C.On_Border_WindowMinimize_MouseButtonDown_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UDonutChallengeScreen_C::On_Border_WindowMinimize_MouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DonutChallengeScreen_C", "On_Border_WindowMinimize_MouseButtonDown_0");

	Params::DonutChallengeScreen_C_On_Border_WindowMinimize_MouseButtonDown_0 Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function DonutChallengeScreen.DonutChallengeScreen_C.On_Border_BattlepassUpsellMinimized_MouseButtonDown_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UDonutChallengeScreen_C::On_Border_BattlepassUpsellMinimized_MouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DonutChallengeScreen_C", "On_Border_BattlepassUpsellMinimized_MouseButtonDown_0");

	Params::DonutChallengeScreen_C_On_Border_BattlepassUpsellMinimized_MouseButtonDown_0 Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function DonutChallengeScreen.DonutChallengeScreen_C.SetBattlepassState
// (Public, BlueprintCallable, BlueprintEvent)

void UDonutChallengeScreen_C::SetBattlepassState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DonutChallengeScreen_C", "SetBattlepassState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DonutChallengeScreen.DonutChallengeScreen_C.On_Border_WindowMinimize_1_MouseButtonDown_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UDonutChallengeScreen_C::On_Border_WindowMinimize_1_MouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DonutChallengeScreen_C", "On_Border_WindowMinimize_1_MouseButtonDown_0");

	Params::DonutChallengeScreen_C_On_Border_WindowMinimize_1_MouseButtonDown_0 Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function DonutChallengeScreen.DonutChallengeScreen_C.OnMouseButtonUp_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UDonutChallengeScreen_C::OnMouseButtonUp_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DonutChallengeScreen_C", "OnMouseButtonUp_0");

	Params::DonutChallengeScreen_C_OnMouseButtonUp_0 Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function DonutChallengeScreen.DonutChallengeScreen_C.SequenceEvent__ENTRYPOINTDonutChallengeScreen_0
// (Public, BlueprintCallable, BlueprintEvent)

void UDonutChallengeScreen_C::SequenceEvent__ENTRYPOINTDonutChallengeScreen_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DonutChallengeScreen_C", "SequenceEvent__ENTRYPOINTDonutChallengeScreen_0");

	UObject::ProcessEvent(Func, nullptr);
}

}

