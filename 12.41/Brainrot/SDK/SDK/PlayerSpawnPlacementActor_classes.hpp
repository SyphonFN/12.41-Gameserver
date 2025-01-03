#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerSpawnPlacementActor

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PlayerSpawnPlacementActor.PlayerSpawnPlacementActor_C
// 0x0008 (0x0610 - 0x0608)
class APlayerSpawnPlacementActor_C final : public AFortPlacementActor
{
public:
	class UArrowComponent*                        Arrow;                                             // 0x0608(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerSpawnPlacementActor_C">();
	}
	static class APlayerSpawnPlacementActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APlayerSpawnPlacementActor_C>();
	}
};
static_assert(alignof(APlayerSpawnPlacementActor_C) == 0x000008, "Wrong alignment on APlayerSpawnPlacementActor_C");
static_assert(sizeof(APlayerSpawnPlacementActor_C) == 0x000610, "Wrong size on APlayerSpawnPlacementActor_C");
static_assert(offsetof(APlayerSpawnPlacementActor_C, Arrow) == 0x000608, "Member 'APlayerSpawnPlacementActor_C::Arrow' has a wrong offset!");

}

