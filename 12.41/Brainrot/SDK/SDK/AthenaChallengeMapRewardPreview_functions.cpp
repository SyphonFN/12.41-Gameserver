#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaChallengeMapRewardPreview

#include "Basic.hpp"

#include "AthenaChallengeMapRewardPreview_classes.hpp"
#include "AthenaChallengeMapRewardPreview_parameters.hpp"


namespace SDK
{

// Function AthenaChallengeMapRewardPreview.AthenaChallengeMapRewardPreview_C.ExecuteUbergraph_AthenaChallengeMapRewardPreview
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaChallengeMapRewardPreview_C::ExecuteUbergraph_AthenaChallengeMapRewardPreview(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengeMapRewardPreview_C", "ExecuteUbergraph_AthenaChallengeMapRewardPreview");

	Params::AthenaChallengeMapRewardPreview_C_ExecuteUbergraph_AthenaChallengeMapRewardPreview Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaChallengeMapRewardPreview.AthenaChallengeMapRewardPreview_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaChallengeMapRewardPreview_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengeMapRewardPreview_C", "OnAnimationFinished");

	Params::AthenaChallengeMapRewardPreview_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaChallengeMapRewardPreview.AthenaChallengeMapRewardPreview_C.SetPreviewVisible
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaChallengeMapRewardPreview_C::SetPreviewVisible(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengeMapRewardPreview_C", "SetPreviewVisible");

	Params::AthenaChallengeMapRewardPreview_C_SetPreviewVisible Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);
}

}
