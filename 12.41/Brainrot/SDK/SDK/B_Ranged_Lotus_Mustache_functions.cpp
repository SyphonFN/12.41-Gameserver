#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Ranged_Lotus_Mustache

#include "Basic.hpp"

#include "B_Ranged_Lotus_Mustache_classes.hpp"
#include "B_Ranged_Lotus_Mustache_parameters.hpp"


namespace SDK
{

// Function B_Ranged_Lotus_Mustache.B_Ranged_Lotus_Mustache_C.ExecuteUbergraph_B_Ranged_Lotus_Mustache
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Ranged_Lotus_Mustache_C::ExecuteUbergraph_B_Ranged_Lotus_Mustache(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Lotus_Mustache_C", "ExecuteUbergraph_B_Ranged_Lotus_Mustache");

	Params::B_Ranged_Lotus_Mustache_C_ExecuteUbergraph_B_Ranged_Lotus_Mustache Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Ranged_Lotus_Mustache.B_Ranged_Lotus_Mustache_C.SetHealthPercentClient
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Param_HealthPercent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Ranged_Lotus_Mustache_C::SetHealthPercentClient(float Param_HealthPercent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Lotus_Mustache_C", "SetHealthPercentClient");

	Params::B_Ranged_Lotus_Mustache_C_SetHealthPercentClient Parms{};

	Parms.Param_HealthPercent = Param_HealthPercent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Ranged_Lotus_Mustache.B_Ranged_Lotus_Mustache_C.SetHealthPercentServer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void AB_Ranged_Lotus_Mustache_C::SetHealthPercentServer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Lotus_Mustache_C", "SetHealthPercentServer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Ranged_Lotus_Mustache.B_Ranged_Lotus_Mustache_C.OnPlayWeaponFireFX
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bPersistentFire                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bSecondaryFire                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Ranged_Lotus_Mustache_C::OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Lotus_Mustache_C", "OnPlayWeaponFireFX");

	Params::B_Ranged_Lotus_Mustache_C_OnPlayWeaponFireFX Parms{};

	Parms.bPersistentFire = bPersistentFire;
	Parms.bSecondaryFire = bSecondaryFire;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Ranged_Lotus_Mustache.B_Ranged_Lotus_Mustache_C.NewTarget
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Lotus_Mustache_C::NewTarget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Lotus_Mustache_C", "NewTarget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Ranged_Lotus_Mustache.B_Ranged_Lotus_Mustache_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Ranged_Lotus_Mustache_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Lotus_Mustache_C", "ReceiveTick");

	Params::B_Ranged_Lotus_Mustache_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Ranged_Lotus_Mustache.B_Ranged_Lotus_Mustache_C.OnWeaponAttached
// (Event, Public, BlueprintEvent)

void AB_Ranged_Lotus_Mustache_C::OnWeaponAttached()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Lotus_Mustache_C", "OnWeaponAttached");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Ranged_Lotus_Mustache.B_Ranged_Lotus_Mustache_C.K2_OnUnEquip
// (Event, Public, BlueprintEvent)

void AB_Ranged_Lotus_Mustache_C::K2_OnUnEquip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Lotus_Mustache_C", "K2_OnUnEquip");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Ranged_Lotus_Mustache.B_Ranged_Lotus_Mustache_C.OnSpawnProjectile
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortProjectileBase*              SpawnProjectile                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Ranged_Lotus_Mustache_C::OnSpawnProjectile(class AFortProjectileBase* SpawnProjectile)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Lotus_Mustache_C", "OnSpawnProjectile");

	Params::B_Ranged_Lotus_Mustache_C_OnSpawnProjectile Parms{};

	Parms.SpawnProjectile = SpawnProjectile;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Ranged_Lotus_Mustache.B_Ranged_Lotus_Mustache_C.Timeline_1__UpdateFunc
// (BlueprintEvent)

void AB_Ranged_Lotus_Mustache_C::Timeline_1__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Lotus_Mustache_C", "Timeline_1__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Ranged_Lotus_Mustache.B_Ranged_Lotus_Mustache_C.Timeline_1__FinishedFunc
// (BlueprintEvent)

void AB_Ranged_Lotus_Mustache_C::Timeline_1__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Lotus_Mustache_C", "Timeline_1__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Ranged_Lotus_Mustache.B_Ranged_Lotus_Mustache_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AB_Ranged_Lotus_Mustache_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Lotus_Mustache_C", "Timeline_0__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Ranged_Lotus_Mustache.B_Ranged_Lotus_Mustache_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AB_Ranged_Lotus_Mustache_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Lotus_Mustache_C", "Timeline_0__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

}
