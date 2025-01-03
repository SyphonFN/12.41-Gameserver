#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Parent_BuildingWall

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Parent_BuildingWall.Parent_BuildingWall_C
// 0x0018 (0x0CF8 - 0x0CE0)
class AParent_BuildingWall_C : public ABuildingWall
{
public:
	struct FVector                                BuildingBoundsMax;                                 // 0x0CE0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                                BuildingBoundsMin;                                 // 0x0CEC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Parent_BuildingWall_C">();
	}
	static class AParent_BuildingWall_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AParent_BuildingWall_C>();
	}
};
static_assert(alignof(AParent_BuildingWall_C) == 0x000008, "Wrong alignment on AParent_BuildingWall_C");
static_assert(sizeof(AParent_BuildingWall_C) == 0x000CF8, "Wrong size on AParent_BuildingWall_C");
static_assert(offsetof(AParent_BuildingWall_C, BuildingBoundsMax) == 0x000CE0, "Member 'AParent_BuildingWall_C::BuildingBoundsMax' has a wrong offset!");
static_assert(offsetof(AParent_BuildingWall_C, BuildingBoundsMin) == 0x000CEC, "Member 'AParent_BuildingWall_C::BuildingBoundsMin' has a wrong offset!");

}

