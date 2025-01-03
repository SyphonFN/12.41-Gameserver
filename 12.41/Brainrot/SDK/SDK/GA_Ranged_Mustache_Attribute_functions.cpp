#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Ranged_Mustache_Attribute

#include "Basic.hpp"

#include "GA_Ranged_Mustache_Attribute_classes.hpp"
#include "GA_Ranged_Mustache_Attribute_parameters.hpp"


namespace SDK
{

// Function GA_Ranged_Mustache_Attribute.GA_Ranged_Mustache_Attribute_C.K2_CommitExecute
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_Ranged_Mustache_Attribute_C::K2_CommitExecute()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Ranged_Mustache_Attribute_C", "K2_CommitExecute");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Ranged_Mustache_Attribute.GA_Ranged_Mustache_Attribute_C.GetEventData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               GameplayEventData                                      (Parm, OutParm)

void UGA_Ranged_Mustache_Attribute_C::GetEventData(const struct FGameplayTag& EventTag, struct FGameplayEventData* GameplayEventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Ranged_Mustache_Attribute_C", "GetEventData");

	Params::GA_Ranged_Mustache_Attribute_C_GetEventData Parms{};

	Parms.EventTag = std::move(EventTag);

	UObject::ProcessEvent(Func, &Parms);

	if (GameplayEventData != nullptr)
		*GameplayEventData = std::move(Parms.GameplayEventData);
}


// Function GA_Ranged_Mustache_Attribute.GA_Ranged_Mustache_Attribute_C.K2_CanActivateAbility
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo        ActorInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct FGameplayTagContainer            RelevantTags                                           (Parm, OutParm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UGA_Ranged_Mustache_Attribute_C::K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Ranged_Mustache_Attribute_C", "K2_CanActivateAbility");

	Params::GA_Ranged_Mustache_Attribute_C_K2_CanActivateAbility Parms{};

	Parms.ActorInfo = std::move(ActorInfo);

	UObject::ProcessEvent(Func, &Parms);

	if (RelevantTags != nullptr)
		*RelevantTags = std::move(Parms.RelevantTags);

	return Parms.ReturnValue;
}

}

