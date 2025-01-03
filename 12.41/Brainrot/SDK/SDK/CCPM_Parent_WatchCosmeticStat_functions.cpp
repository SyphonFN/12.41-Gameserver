#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CCPM_Parent_WatchCosmeticStat

#include "Basic.hpp"

#include "CCPM_Parent_WatchCosmeticStat_classes.hpp"
#include "CCPM_Parent_WatchCosmeticStat_parameters.hpp"


namespace SDK
{

// Function CCPM_Parent_WatchCosmeticStat.CCPM_Parent_WatchCosmeticStat_C.ExecuteUbergraph_CCPM_Parent_WatchCosmeticStat
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACCPM_Parent_WatchCosmeticStat_C::ExecuteUbergraph_CCPM_Parent_WatchCosmeticStat(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CCPM_Parent_WatchCosmeticStat_C", "ExecuteUbergraph_CCPM_Parent_WatchCosmeticStat");

	Params::CCPM_Parent_WatchCosmeticStat_C_ExecuteUbergraph_CCPM_Parent_WatchCosmeticStat Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CCPM_Parent_WatchCosmeticStat.CCPM_Parent_WatchCosmeticStat_C.CosmeticStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Stat_Value                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACCPM_Parent_WatchCosmeticStat_C::CosmeticStateChanged(int32 Stat_Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CCPM_Parent_WatchCosmeticStat_C", "CosmeticStateChanged");

	Params::CCPM_Parent_WatchCosmeticStat_C_CosmeticStateChanged Parms{};

	Parms.Stat_Value = Stat_Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CCPM_Parent_WatchCosmeticStat.CCPM_Parent_WatchCosmeticStat_C.OnPawnAndPartChanged
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ACCPM_Parent_WatchCosmeticStat_C::OnPawnAndPartChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CCPM_Parent_WatchCosmeticStat_C", "OnPawnAndPartChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CCPM_Parent_WatchCosmeticStat.CCPM_Parent_WatchCosmeticStat_C.TrackPlayersLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NumPlayersLeft                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACCPM_Parent_WatchCosmeticStat_C::TrackPlayersLeft(int32 NumPlayersLeft)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CCPM_Parent_WatchCosmeticStat_C", "TrackPlayersLeft");

	Params::CCPM_Parent_WatchCosmeticStat_C_TrackPlayersLeft Parms{};

	Parms.NumPlayersLeft = NumPlayersLeft;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CCPM_Parent_WatchCosmeticStat.CCPM_Parent_WatchCosmeticStat_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ACCPM_Parent_WatchCosmeticStat_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CCPM_Parent_WatchCosmeticStat_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CCPM_Parent_WatchCosmeticStat.CCPM_Parent_WatchCosmeticStat_C.ActivatingCosmeticState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   StageNumBeingActivated                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACCPM_Parent_WatchCosmeticStat_C::ActivatingCosmeticState(int32 StageNumBeingActivated)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CCPM_Parent_WatchCosmeticStat_C", "ActivatingCosmeticState");

	Params::CCPM_Parent_WatchCosmeticStat_C_ActivatingCosmeticState Parms{};

	Parms.StageNumBeingActivated = StageNumBeingActivated;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CCPM_Parent_WatchCosmeticStat.CCPM_Parent_WatchCosmeticStat_C.OnStatChanged_2FF2B90E4ECEA7F5E9202F98FFE39A48
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             StatName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   StatValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACCPM_Parent_WatchCosmeticStat_C::OnStatChanged_2FF2B90E4ECEA7F5E9202F98FFE39A48(class FName StatName, int32 StatValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CCPM_Parent_WatchCosmeticStat_C", "OnStatChanged_2FF2B90E4ECEA7F5E9202F98FFE39A48");

	Params::CCPM_Parent_WatchCosmeticStat_C_OnStatChanged_2FF2B90E4ECEA7F5E9202F98FFE39A48 Parms{};

	Parms.StatName = StatName;
	Parms.StatValue = StatValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CCPM_Parent_WatchCosmeticStat.CCPM_Parent_WatchCosmeticStat_C.Cosmetic Stat Check
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Value_to_Check                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                           Param_StatThresholds                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class FName                             DEBUG_Minus_Stat_Checked                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACCPM_Parent_WatchCosmeticStat_C::Cosmetic_Stat_Check(int32 Value_to_Check, TArray<int32>& Param_StatThresholds, class FName DEBUG_Minus_Stat_Checked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CCPM_Parent_WatchCosmeticStat_C", "Cosmetic Stat Check");

	Params::CCPM_Parent_WatchCosmeticStat_C_Cosmetic_Stat_Check Parms{};

	Parms.Value_to_Check = Value_to_Check;
	Parms.Param_StatThresholds = std::move(Param_StatThresholds);
	Parms.DEBUG_Minus_Stat_Checked = DEBUG_Minus_Stat_Checked;

	UObject::ProcessEvent(Func, &Parms);

	Param_StatThresholds = std::move(Parms.Param_StatThresholds);
}


// Function CCPM_Parent_WatchCosmeticStat.CCPM_Parent_WatchCosmeticStat_C.Array Is Valid
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class FName>                     Name_Array                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                                    Vaild                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACCPM_Parent_WatchCosmeticStat_C::Array_Is_Valid(TArray<class FName>& Name_Array, bool* Vaild)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CCPM_Parent_WatchCosmeticStat_C", "Array Is Valid");

	Params::CCPM_Parent_WatchCosmeticStat_C_Array_Is_Valid Parms{};

	Parms.Name_Array = std::move(Name_Array);

	UObject::ProcessEvent(Func, &Parms);

	Name_Array = std::move(Parms.Name_Array);

	if (Vaild != nullptr)
		*Vaild = Parms.Vaild;
}


// Function CCPM_Parent_WatchCosmeticStat.CCPM_Parent_WatchCosmeticStat_C.PlayersLeftCheck
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Value_to_Check                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                           Player_Left_Thresholds                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class FName                             DEBUG_Minus_Stat_Checked                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACCPM_Parent_WatchCosmeticStat_C::PlayersLeftCheck(int32 Value_to_Check, TArray<int32>& Player_Left_Thresholds, class FName DEBUG_Minus_Stat_Checked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CCPM_Parent_WatchCosmeticStat_C", "PlayersLeftCheck");

	Params::CCPM_Parent_WatchCosmeticStat_C_PlayersLeftCheck Parms{};

	Parms.Value_to_Check = Value_to_Check;
	Parms.Player_Left_Thresholds = std::move(Player_Left_Thresholds);
	Parms.DEBUG_Minus_Stat_Checked = DEBUG_Minus_Stat_Checked;

	UObject::ProcessEvent(Func, &Parms);

	Player_Left_Thresholds = std::move(Parms.Player_Left_Thresholds);
}


// Function CCPM_Parent_WatchCosmeticStat.CCPM_Parent_WatchCosmeticStat_C.IsStageStatReuirementsMet
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InStageNumberBeingTested                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InStageThreshold                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InStatValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CurrentActiveStageNumber                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    PassedRequirements                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACCPM_Parent_WatchCosmeticStat_C::IsStageStatReuirementsMet(int32 InStageNumberBeingTested, int32 InStageThreshold, int32 InStatValue, int32 CurrentActiveStageNumber, bool* PassedRequirements)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CCPM_Parent_WatchCosmeticStat_C", "IsStageStatReuirementsMet");

	Params::CCPM_Parent_WatchCosmeticStat_C_IsStageStatReuirementsMet Parms{};

	Parms.InStageNumberBeingTested = InStageNumberBeingTested;
	Parms.InStageThreshold = InStageThreshold;
	Parms.InStatValue = InStatValue;
	Parms.CurrentActiveStageNumber = CurrentActiveStageNumber;

	UObject::ProcessEvent(Func, &Parms);

	if (PassedRequirements != nullptr)
		*PassedRequirements = Parms.PassedRequirements;
}


// Function CCPM_Parent_WatchCosmeticStat.CCPM_Parent_WatchCosmeticStat_C.IsStagePlayerLeftAliveReuirementsMet
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InStageNumberBeingTested                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InStageThreshold                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InStatValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CurrentActiveStageNumber                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    PassedRequirements                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACCPM_Parent_WatchCosmeticStat_C::IsStagePlayerLeftAliveReuirementsMet(int32 InStageNumberBeingTested, int32 InStageThreshold, int32 InStatValue, int32 CurrentActiveStageNumber, bool* PassedRequirements)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CCPM_Parent_WatchCosmeticStat_C", "IsStagePlayerLeftAliveReuirementsMet");

	Params::CCPM_Parent_WatchCosmeticStat_C_IsStagePlayerLeftAliveReuirementsMet Parms{};

	Parms.InStageNumberBeingTested = InStageNumberBeingTested;
	Parms.InStageThreshold = InStageThreshold;
	Parms.InStatValue = InStatValue;
	Parms.CurrentActiveStageNumber = CurrentActiveStageNumber;

	UObject::ProcessEvent(Func, &Parms);

	if (PassedRequirements != nullptr)
		*PassedRequirements = Parms.PassedRequirements;
}

}

