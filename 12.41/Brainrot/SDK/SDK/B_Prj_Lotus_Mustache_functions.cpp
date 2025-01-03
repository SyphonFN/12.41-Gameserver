#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Prj_Lotus_Mustache

#include "Basic.hpp"

#include "B_Prj_Lotus_Mustache_classes.hpp"
#include "B_Prj_Lotus_Mustache_parameters.hpp"


namespace SDK
{

// Function B_Prj_Lotus_Mustache.B_Prj_Lotus_Mustache_C.ExecuteUbergraph_B_Prj_Lotus_Mustache
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Prj_Lotus_Mustache_C::ExecuteUbergraph_B_Prj_Lotus_Mustache(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Lotus_Mustache_C", "ExecuteUbergraph_B_Prj_Lotus_Mustache");

	Params::B_Prj_Lotus_Mustache_C_ExecuteUbergraph_B_Prj_Lotus_Mustache Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Lotus_Mustache.B_Prj_Lotus_Mustache_C.OnTouched
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Param_HitResult                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                                    bIsOverlap                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Prj_Lotus_Mustache_C::OnTouched(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FHitResult& Param_HitResult, bool bIsOverlap)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Lotus_Mustache_C", "OnTouched");

	Params::B_Prj_Lotus_Mustache_C_OnTouched Parms{};

	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.Param_HitResult = std::move(Param_HitResult);
	Parms.bIsOverlap = bIsOverlap;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Lotus_Mustache.B_Prj_Lotus_Mustache_C.SpawnBandage
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Lotus_Mustache_C::SpawnBandage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Lotus_Mustache_C", "SpawnBandage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Prj_Lotus_Mustache.B_Prj_Lotus_Mustache_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AFortWaterBodyActor*              WaterBody                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWaterInteractionComponent*   Param_WaterInteractionComponent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsFirstBody                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Prj_Lotus_Mustache_C::BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature(class AFortWaterBodyActor* WaterBody, class UFortWaterInteractionComponent* Param_WaterInteractionComponent, bool bIsFirstBody)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Lotus_Mustache_C", "BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature");

	Params::B_Prj_Lotus_Mustache_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature Parms{};

	Parms.WaterBody = WaterBody;
	Parms.Param_WaterInteractionComponent = Param_WaterInteractionComponent;
	Parms.bIsFirstBody = bIsFirstBody;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Lotus_Mustache.B_Prj_Lotus_Mustache_C.SpawnedBandageFx
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AB_Prj_Lotus_Mustache_C::SpawnedBandageFx()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Lotus_Mustache_C", "SpawnedBandageFx");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Prj_Lotus_Mustache.B_Prj_Lotus_Mustache_C.OnExploded
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<class AActor*>                   HitActors                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FHitResult>               HitResults                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)

void AB_Prj_Lotus_Mustache_C::OnExploded(const TArray<class AActor*>& HitActors, const TArray<struct FHitResult>& HitResults)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Lotus_Mustache_C", "OnExploded");

	Params::B_Prj_Lotus_Mustache_C_OnExploded Parms{};

	Parms.HitActors = std::move(HitActors);
	Parms.HitResults = std::move(HitResults);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Lotus_Mustache.B_Prj_Lotus_Mustache_C.OnBounce
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AB_Prj_Lotus_Mustache_C::OnBounce(const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Lotus_Mustache_C", "OnBounce");

	Params::B_Prj_Lotus_Mustache_C_OnBounce Parms{};

	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Lotus_Mustache.B_Prj_Lotus_Mustache_C.OnReachedLockTargetDistanceThreshold
// (Event, Public, BlueprintEvent)

void AB_Prj_Lotus_Mustache_C::OnReachedLockTargetDistanceThreshold()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Lotus_Mustache_C", "OnReachedLockTargetDistanceThreshold");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Prj_Lotus_Mustache.B_Prj_Lotus_Mustache_C.OnHomingPassedTarget
// (Event, Public, BlueprintEvent)

void AB_Prj_Lotus_Mustache_C::OnHomingPassedTarget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Lotus_Mustache_C", "OnHomingPassedTarget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Prj_Lotus_Mustache.B_Prj_Lotus_Mustache_C.Explosion VFX
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AB_Prj_Lotus_Mustache_C::Explosion_VFX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Lotus_Mustache_C", "Explosion VFX");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Prj_Lotus_Mustache.B_Prj_Lotus_Mustache_C.Timeout
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Lotus_Mustache_C::Timeout()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Lotus_Mustache_C", "Timeout");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Prj_Lotus_Mustache.B_Prj_Lotus_Mustache_C.Reset Explosion Sound
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Lotus_Mustache_C::Reset_Explosion_Sound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Lotus_Mustache_C", "Reset Explosion Sound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Prj_Lotus_Mustache.B_Prj_Lotus_Mustache_C.Play Explosion Sound
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Lotus_Mustache_C::Play_Explosion_Sound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Lotus_Mustache_C", "Play Explosion Sound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Prj_Lotus_Mustache.B_Prj_Lotus_Mustache_C.OnStop
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AB_Prj_Lotus_Mustache_C::OnStop(const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Lotus_Mustache_C", "OnStop");

	Params::B_Prj_Lotus_Mustache_C_OnStop Parms{};

	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Lotus_Mustache.B_Prj_Lotus_Mustache_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Prj_Lotus_Mustache_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Lotus_Mustache_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Prj_Lotus_Mustache.B_Prj_Lotus_Mustache_C.OnRep_Impact Location
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Lotus_Mustache_C::OnRep_Impact_Location()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Lotus_Mustache_C", "OnRep_Impact Location");

	UObject::ProcessEvent(Func, nullptr);
}

}

