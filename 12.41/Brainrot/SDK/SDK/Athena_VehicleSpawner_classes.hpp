#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Athena_VehicleSpawner

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Athena_VehicleSpawner.Athena_VehicleSpawner_C
// 0x0018 (0x0260 - 0x0248)
class AAthena_VehicleSpawner_C : public AFortAthenaVehicleSpawner
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0248(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                 SpawnedVehicle;                                    // 0x0250(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          YAxisForward;                                      // 0x0258(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bShouldDestroyAfterVehicleSpawn;                   // 0x0259(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_Athena_VehicleSpawner(int32 EntryPoint);
	void SpawnVehicle();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Athena_VehicleSpawner_C">();
	}
	static class AAthena_VehicleSpawner_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAthena_VehicleSpawner_C>();
	}
};
static_assert(alignof(AAthena_VehicleSpawner_C) == 0x000008, "Wrong alignment on AAthena_VehicleSpawner_C");
static_assert(sizeof(AAthena_VehicleSpawner_C) == 0x000260, "Wrong size on AAthena_VehicleSpawner_C");
static_assert(offsetof(AAthena_VehicleSpawner_C, UberGraphFrame) == 0x000248, "Member 'AAthena_VehicleSpawner_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AAthena_VehicleSpawner_C, SpawnedVehicle) == 0x000250, "Member 'AAthena_VehicleSpawner_C::SpawnedVehicle' has a wrong offset!");
static_assert(offsetof(AAthena_VehicleSpawner_C, YAxisForward) == 0x000258, "Member 'AAthena_VehicleSpawner_C::YAxisForward' has a wrong offset!");
static_assert(offsetof(AAthena_VehicleSpawner_C, bShouldDestroyAfterVehicleSpawn) == 0x000259, "Member 'AAthena_VehicleSpawner_C::bShouldDestroyAfterVehicleSpawn' has a wrong offset!");

}

