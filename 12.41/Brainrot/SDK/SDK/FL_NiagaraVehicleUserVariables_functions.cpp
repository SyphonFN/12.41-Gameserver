#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FL_NiagaraVehicleUserVariables

#include "Basic.hpp"

#include "FL_NiagaraVehicleUserVariables_classes.hpp"
#include "FL_NiagaraVehicleUserVariables_parameters.hpp"


namespace SDK
{

// Function FL_NiagaraVehicleUserVariables.FL_NiagaraVehicleUserVariables_C.setNiagaraVehicleUserVariables
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraComponent*                NiagaraSystem                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    EnableSpawning                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InWater                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InAir                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    HasDriver                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   Boost                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ForwardSpeed                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   TurnDirection                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   TurnSpeed                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   TurningAngle                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFL_NiagaraVehicleUserVariables_C::SetNiagaraVehicleUserVariables(class UNiagaraComponent* NiagaraSystem, bool EnableSpawning, bool InWater, bool InAir, bool HasDriver, float Boost, float ForwardSpeed, float TurnDirection, float TurnSpeed, float TurningAngle, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FL_NiagaraVehicleUserVariables_C", "setNiagaraVehicleUserVariables");

	Params::FL_NiagaraVehicleUserVariables_C_SetNiagaraVehicleUserVariables Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.EnableSpawning = EnableSpawning;
	Parms.InWater = InWater;
	Parms.InAir = InAir;
	Parms.HasDriver = HasDriver;
	Parms.Boost = Boost;
	Parms.ForwardSpeed = ForwardSpeed;
	Parms.TurnDirection = TurnDirection;
	Parms.TurnSpeed = TurnSpeed;
	Parms.TurningAngle = TurningAngle;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function FL_NiagaraVehicleUserVariables.FL_NiagaraVehicleUserVariables_C.setNiagaraPontoonUserVariables
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraComponent*                Niagara                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVehicleSphericalPontoon         Pontoon                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFL_NiagaraVehicleUserVariables_C::SetNiagaraPontoonUserVariables(class UNiagaraComponent* Niagara, const struct FVehicleSphericalPontoon& Pontoon, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FL_NiagaraVehicleUserVariables_C", "setNiagaraPontoonUserVariables");

	Params::FL_NiagaraVehicleUserVariables_C_SetNiagaraPontoonUserVariables Parms{};

	Parms.Niagara = Niagara;
	Parms.Pontoon = std::move(Pontoon);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function FL_NiagaraVehicleUserVariables.FL_NiagaraVehicleUserVariables_C.niagaraPontoonModule
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraComponent*                Niagara                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVehicleSphericalPontoon         Pontoon                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFL_NiagaraVehicleUserVariables_C::NiagaraPontoonModule(class UNiagaraComponent* Niagara, const struct FVehicleSphericalPontoon& Pontoon, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FL_NiagaraVehicleUserVariables_C", "niagaraPontoonModule");

	Params::FL_NiagaraVehicleUserVariables_C_NiagaraPontoonModule Parms{};

	Parms.Niagara = Niagara;
	Parms.Pontoon = std::move(Pontoon);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function FL_NiagaraVehicleUserVariables.FL_NiagaraVehicleUserVariables_C.setNiagaraSkydiveUserVariables
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraComponent*                Niagara                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Velocity                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFL_NiagaraVehicleUserVariables_C::SetNiagaraSkydiveUserVariables(class UNiagaraComponent* Niagara, const struct FVector& Velocity, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FL_NiagaraVehicleUserVariables_C", "setNiagaraSkydiveUserVariables");

	Params::FL_NiagaraVehicleUserVariables_C_SetNiagaraSkydiveUserVariables Parms{};

	Parms.Niagara = Niagara;
	Parms.Velocity = std::move(Velocity);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}

}

