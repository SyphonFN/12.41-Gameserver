#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Athena_Fake_CoolCarpet

#include "Basic.hpp"

#include "Athena_Fake_CoolCarpet_classes.hpp"
#include "Athena_Fake_CoolCarpet_parameters.hpp"


namespace SDK
{

// Function Athena_Fake_CoolCarpet.Athena_Fake_CoolCarpet_C.ExecuteUbergraph_Athena_Fake_CoolCarpet
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAthena_Fake_CoolCarpet_C::ExecuteUbergraph_Athena_Fake_CoolCarpet(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Fake_CoolCarpet_C", "ExecuteUbergraph_Athena_Fake_CoolCarpet");

	Params::Athena_Fake_CoolCarpet_C_ExecuteUbergraph_Athena_Fake_CoolCarpet Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Athena_Fake_CoolCarpet.Athena_Fake_CoolCarpet_C.OnDamaged_
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

void AAthena_Fake_CoolCarpet_C::OnDamaged_(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Fake_CoolCarpet_C", "OnDamaged_");

	Params::Athena_Fake_CoolCarpet_C_OnDamaged_ Parms{};

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


// Function Athena_Fake_CoolCarpet.Athena_Fake_CoolCarpet_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AAthena_Fake_CoolCarpet_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Fake_CoolCarpet_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Athena_Fake_CoolCarpet.Athena_Fake_CoolCarpet_C.CloseFlaps
// (BlueprintCallable, BlueprintEvent)

void AAthena_Fake_CoolCarpet_C::CloseFlaps()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Fake_CoolCarpet_C", "CloseFlaps");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Athena_Fake_CoolCarpet.Athena_Fake_CoolCarpet_C.OpenFlaps
// (BlueprintCallable, BlueprintEvent)

void AAthena_Fake_CoolCarpet_C::OpenFlaps()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Fake_CoolCarpet_C", "OpenFlaps");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Athena_Fake_CoolCarpet.Athena_Fake_CoolCarpet_C.Flaps__UpdateFunc
// (BlueprintEvent)

void AAthena_Fake_CoolCarpet_C::Flaps__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Fake_CoolCarpet_C", "Flaps__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Athena_Fake_CoolCarpet.Athena_Fake_CoolCarpet_C.Flaps__FinishedFunc
// (BlueprintEvent)

void AAthena_Fake_CoolCarpet_C::Flaps__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Fake_CoolCarpet_C", "Flaps__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Athena_Fake_CoolCarpet.Athena_Fake_CoolCarpet_C.ShouldDie
// (BlueprintAuthorityOnly, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                      EventInstigator                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AAthena_Fake_CoolCarpet_C::ShouldDie(float Damage, class AController* EventInstigator, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Fake_CoolCarpet_C", "ShouldDie");

	Params::Athena_Fake_CoolCarpet_C_ShouldDie Parms{};

	Parms.Damage = Damage;
	Parms.EventInstigator = EventInstigator;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
