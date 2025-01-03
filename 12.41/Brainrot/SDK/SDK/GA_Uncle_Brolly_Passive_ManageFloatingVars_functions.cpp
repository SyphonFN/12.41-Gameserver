#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Uncle_Brolly_Passive_ManageFloatingVars

#include "Basic.hpp"

#include "GA_Uncle_Brolly_Passive_ManageFloatingVars_classes.hpp"
#include "GA_Uncle_Brolly_Passive_ManageFloatingVars_parameters.hpp"


namespace SDK
{

// Function GA_Uncle_Brolly_Passive_ManageFloatingVars.GA_Uncle_Brolly_Passive_ManageFloatingVars_C.ExecuteUbergraph_GA_Uncle_Brolly_Passive_ManageFloatingVars
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Uncle_Brolly_Passive_ManageFloatingVars_C::ExecuteUbergraph_GA_Uncle_Brolly_Passive_ManageFloatingVars(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Uncle_Brolly_Passive_ManageFloatingVars_C", "ExecuteUbergraph_GA_Uncle_Brolly_Passive_ManageFloatingVars");

	Params::GA_Uncle_Brolly_Passive_ManageFloatingVars_C_ExecuteUbergraph_GA_Uncle_Brolly_Passive_ManageFloatingVars Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Uncle_Brolly_Passive_ManageFloatingVars.GA_Uncle_Brolly_Passive_ManageFloatingVars_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Uncle_Brolly_Passive_ManageFloatingVars_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Uncle_Brolly_Passive_ManageFloatingVars_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Uncle_Brolly_Passive_ManageFloatingVars.GA_Uncle_Brolly_Passive_ManageFloatingVars_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Uncle_Brolly_Passive_ManageFloatingVars_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Uncle_Brolly_Passive_ManageFloatingVars_C", "K2_OnEndAbility");

	Params::GA_Uncle_Brolly_Passive_ManageFloatingVars_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Uncle_Brolly_Passive_ManageFloatingVars.GA_Uncle_Brolly_Passive_ManageFloatingVars_C.OnDied_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           DamagedActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                      InstigatedBy                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          HitLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              FHitComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             BoneName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Momentum                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Uncle_Brolly_Passive_ManageFloatingVars_C::OnDied_Event_0(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Uncle_Brolly_Passive_ManageFloatingVars_C", "OnDied_Event_0");

	Params::GA_Uncle_Brolly_Passive_ManageFloatingVars_C_OnDied_Event_0 Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = std::move(HitLocation);
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = std::move(Momentum);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Uncle_Brolly_Passive_ManageFloatingVars.GA_Uncle_Brolly_Passive_ManageFloatingVars_C.ResetFloatingParameters
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UGA_Uncle_Brolly_Passive_ManageFloatingVars_C::ResetFloatingParameters(const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Uncle_Brolly_Passive_ManageFloatingVars_C", "ResetFloatingParameters");

	Params::GA_Uncle_Brolly_Passive_ManageFloatingVars_C_ResetFloatingParameters Parms{};

	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Uncle_Brolly_Passive_ManageFloatingVars.GA_Uncle_Brolly_Passive_ManageFloatingVars_C.IncrementFloatTimer
// (BlueprintCallable, BlueprintEvent)

void UGA_Uncle_Brolly_Passive_ManageFloatingVars_C::IncrementFloatTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Uncle_Brolly_Passive_ManageFloatingVars_C", "IncrementFloatTimer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Uncle_Brolly_Passive_ManageFloatingVars.GA_Uncle_Brolly_Passive_ManageFloatingVars_C.Added_9C4D361241ECBA12D560D19AD4879012
// (BlueprintCallable, BlueprintEvent)

void UGA_Uncle_Brolly_Passive_ManageFloatingVars_C::Added_9C4D361241ECBA12D560D19AD4879012()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Uncle_Brolly_Passive_ManageFloatingVars_C", "Added_9C4D361241ECBA12D560D19AD4879012");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Uncle_Brolly_Passive_ManageFloatingVars.GA_Uncle_Brolly_Passive_ManageFloatingVars_C.EventReceived_8294443E439F35A95F4ACB8574D3DC72
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Uncle_Brolly_Passive_ManageFloatingVars_C::EventReceived_8294443E439F35A95F4ACB8574D3DC72(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Uncle_Brolly_Passive_ManageFloatingVars_C", "EventReceived_8294443E439F35A95F4ACB8574D3DC72");

	Params::GA_Uncle_Brolly_Passive_ManageFloatingVars_C_EventReceived_8294443E439F35A95F4ACB8574D3DC72 Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Uncle_Brolly_Passive_ManageFloatingVars.GA_Uncle_Brolly_Passive_ManageFloatingVars_C.EventReceived_AD71D46B4473D296B23319BC390EB48F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Uncle_Brolly_Passive_ManageFloatingVars_C::EventReceived_AD71D46B4473D296B23319BC390EB48F(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Uncle_Brolly_Passive_ManageFloatingVars_C", "EventReceived_AD71D46B4473D296B23319BC390EB48F");

	Params::GA_Uncle_Brolly_Passive_ManageFloatingVars_C_EventReceived_AD71D46B4473D296B23319BC390EB48F Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}

}

