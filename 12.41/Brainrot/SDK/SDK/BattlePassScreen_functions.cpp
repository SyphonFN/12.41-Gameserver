#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BattlePassScreen

#include "Basic.hpp"

#include "BattlePassScreen_classes.hpp"
#include "BattlePassScreen_parameters.hpp"


namespace SDK
{

// Function BattlePassScreen.BattlePassScreen_C.ExecuteUbergraph_BattlePassScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassScreen_C::ExecuteUbergraph_BattlePassScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassScreen_C", "ExecuteUbergraph_BattlePassScreen");

	Params::BattlePassScreen_C_ExecuteUbergraph_BattlePassScreen Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattlePassScreen.BattlePassScreen_C.OnSetDifferentBPText
// (Event, Protected, BlueprintEvent)

void UBattlePassScreen_C::OnSetDifferentBPText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassScreen_C", "OnSetDifferentBPText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattlePassScreen.BattlePassScreen_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBattlePassScreen_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassScreen_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattlePassScreen.BattlePassScreen_C.HandleOnInputMethodChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECommonInputType                        bNewInputType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassScreen_C::HandleOnInputMethodChanged(ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassScreen_C", "HandleOnInputMethodChanged");

	Params::BattlePassScreen_C_HandleOnInputMethodChanged Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattlePassScreen.BattlePassScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBattlePassScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassScreen_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattlePassScreen.BattlePassScreen_C.OnBattlePassViewChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// EBattlePassView                         NewView                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassScreen_C::OnBattlePassViewChanged(EBattlePassView NewView)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassScreen_C", "OnBattlePassViewChanged");

	Params::BattlePassScreen_C_OnBattlePassViewChanged Parms{};

	Parms.NewView = NewView;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattlePassScreen.BattlePassScreen_C.OnVariantUpdate
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                                   CurrentIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   TotalNumVariants                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassScreen_C::OnVariantUpdate(int32 CurrentIndex, int32 TotalNumVariants)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassScreen_C", "OnVariantUpdate");

	Params::BattlePassScreen_C_OnVariantUpdate Parms{};

	Parms.CurrentIndex = CurrentIndex;
	Parms.TotalNumVariants = TotalNumVariants;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattlePassScreen.BattlePassScreen_C.OnRequestViewRewardComplete
// (Event, Protected, BlueprintEvent)

void UBattlePassScreen_C::OnRequestViewRewardComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassScreen_C", "OnRequestViewRewardComplete");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattlePassScreen.BattlePassScreen_C.OnRequestViewReward
// (Event, Protected, BlueprintEvent)

void UBattlePassScreen_C::OnRequestViewReward()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassScreen_C", "OnRequestViewReward");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattlePassScreen.BattlePassScreen_C.OnHandleViewAllRewards
// (Event, Protected, BlueprintEvent)

void UBattlePassScreen_C::OnHandleViewAllRewards()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassScreen_C", "OnHandleViewAllRewards");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattlePassScreen.BattlePassScreen_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)

void UBattlePassScreen_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassScreen_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattlePassScreen.BattlePassScreen_C.OnHandleWatchVideo
// (Event, Protected, BlueprintEvent)

void UBattlePassScreen_C::OnHandleWatchVideo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassScreen_C", "OnHandleWatchVideo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattlePassScreen.BattlePassScreen_C.OnHandleAboutBattlePass
// (Event, Protected, BlueprintEvent)

void UBattlePassScreen_C::OnHandleAboutBattlePass()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassScreen_C", "OnHandleAboutBattlePass");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattlePassScreen.BattlePassScreen_C.OnHandleReplayCinematic
// (Event, Protected, BlueprintEvent)

void UBattlePassScreen_C::OnHandleReplayCinematic()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassScreen_C", "OnHandleReplayCinematic");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattlePassScreen.BattlePassScreen_C.HandleOnUpdatedVisibleFriendCount
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                                   LeftFriendCount                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   RightFriendCount                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassScreen_C::HandleOnUpdatedVisibleFriendCount(int32 LeftFriendCount, int32 RightFriendCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassScreen_C", "HandleOnUpdatedVisibleFriendCount");

	Params::BattlePassScreen_C_HandleOnUpdatedVisibleFriendCount Parms{};

	Parms.LeftFriendCount = LeftFriendCount;
	Parms.RightFriendCount = RightFriendCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattlePassScreen.BattlePassScreen_C.OnSetupPurchaseSeasonLevel
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// TMap<int32, class UFortSeasonPassLevelInfo*>SeasonLevelInfos                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UAthenaSeasonItemDefinition*      CurrentSeasonData                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortSeasonPassLevelInfo*         CurrentLevel                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   MaxLevelToPurchase                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   LevelToBePurchased                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassScreen_C::OnSetupPurchaseSeasonLevel(const TMap<int32, class UFortSeasonPassLevelInfo*>& SeasonLevelInfos, class UAthenaSeasonItemDefinition* CurrentSeasonData, class UFortSeasonPassLevelInfo* CurrentLevel, int32 MaxLevelToPurchase, int32 LevelToBePurchased)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassScreen_C", "OnSetupPurchaseSeasonLevel");

	Params::BattlePassScreen_C_OnSetupPurchaseSeasonLevel Parms{};

	Parms.SeasonLevelInfos = std::move(SeasonLevelInfos);
	Parms.CurrentSeasonData = CurrentSeasonData;
	Parms.CurrentLevel = CurrentLevel;
	Parms.MaxLevelToPurchase = MaxLevelToPurchase;
	Parms.LevelToBePurchased = LevelToBePurchased;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattlePassScreen.BattlePassScreen_C.HandleOnViewReward
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FFortRarityItemData              Rarity                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    bNoReward                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   NumRewardsToPurchase                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*              RewardItem                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassScreen_C::HandleOnViewReward(const struct FFortRarityItemData& Rarity, bool bNoReward, int32 NumRewardsToPurchase, const class UFortItemDefinition* RewardItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassScreen_C", "HandleOnViewReward");

	Params::BattlePassScreen_C_HandleOnViewReward Parms{};

	Parms.Rarity = std::move(Rarity);
	Parms.bNoReward = bNoReward;
	Parms.NumRewardsToPurchase = NumRewardsToPurchase;
	Parms.RewardItem = RewardItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattlePassScreen.BattlePassScreen_C.HandleViewReward
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInNoReward                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   InNumRewardsToPurchase                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassScreen_C::HandleViewReward(bool bInNoReward, int32 InNumRewardsToPurchase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassScreen_C", "HandleViewReward");

	Params::BattlePassScreen_C_HandleViewReward Parms{};

	Parms.bInNoReward = bInNoReward;
	Parms.InNumRewardsToPurchase = InNumRewardsToPurchase;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattlePassScreen.BattlePassScreen_C.HandleWatchVideoRequest
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    PlayFromDisc                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattlePassScreen_C::HandleWatchVideoRequest(bool PlayFromDisc)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassScreen_C", "HandleWatchVideoRequest");

	Params::BattlePassScreen_C_HandleWatchVideoRequest Parms{};

	Parms.PlayFromDisc = PlayFromDisc;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattlePassScreen.BattlePassScreen_C.HandleRewardTimelineAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bAnimateRewardTimeline                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattlePassScreen_C::HandleRewardTimelineAnimation(bool Param_bAnimateRewardTimeline)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassScreen_C", "HandleRewardTimelineAnimation");

	Params::BattlePassScreen_C_HandleRewardTimelineAnimation Parms{};

	Parms.Param_bAnimateRewardTimeline = Param_bAnimateRewardTimeline;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattlePassScreen.BattlePassScreen_C.HandleOffscreenIndicatorAnimations
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   LeftFriendCount                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   RightFriendCount                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassScreen_C::HandleOffscreenIndicatorAnimations(int32 LeftFriendCount, int32 RightFriendCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassScreen_C", "HandleOffscreenIndicatorAnimations");

	Params::BattlePassScreen_C_HandleOffscreenIndicatorAnimations Parms{};

	Parms.LeftFriendCount = LeftFriendCount;
	Parms.RightFriendCount = RightFriendCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattlePassScreen.BattlePassScreen_C.HandleShowVariantCycleLabel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bShowCycleLabel                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattlePassScreen_C::HandleShowVariantCycleLabel(bool bShowCycleLabel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassScreen_C", "HandleShowVariantCycleLabel");

	Params::BattlePassScreen_C_HandleShowVariantCycleLabel Parms{};

	Parms.bShowCycleLabel = bShowCycleLabel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattlePassScreen.BattlePassScreen_C.HideRightSideActions
// (Public, BlueprintCallable, BlueprintEvent)

void UBattlePassScreen_C::HideRightSideActions()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassScreen_C", "HideRightSideActions");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattlePassScreen.BattlePassScreen_C.RevealRightSideActions
// (Public, BlueprintCallable, BlueprintEvent)

void UBattlePassScreen_C::RevealRightSideActions()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassScreen_C", "RevealRightSideActions");

	UObject::ProcessEvent(Func, nullptr);
}

}
