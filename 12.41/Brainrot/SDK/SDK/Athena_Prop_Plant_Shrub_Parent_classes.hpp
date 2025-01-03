#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Athena_Prop_Plant_Shrub_Parent

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Athena_Prop_Plant_Shrub_Parent.Athena_Prop_Plant_Shrub_Parent_C
// 0x0008 (0x0BA8 - 0x0BA0)
class AAthena_Prop_Plant_Shrub_Parent_C : public ABuildingProp
{
public:
	class UParticleSystem*                        LootedParticleSystem;                              // 0x0BA0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Athena_Prop_Plant_Shrub_Parent_C">();
	}
	static class AAthena_Prop_Plant_Shrub_Parent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAthena_Prop_Plant_Shrub_Parent_C>();
	}
};
static_assert(alignof(AAthena_Prop_Plant_Shrub_Parent_C) == 0x000008, "Wrong alignment on AAthena_Prop_Plant_Shrub_Parent_C");
static_assert(sizeof(AAthena_Prop_Plant_Shrub_Parent_C) == 0x000BA8, "Wrong size on AAthena_Prop_Plant_Shrub_Parent_C");
static_assert(offsetof(AAthena_Prop_Plant_Shrub_Parent_C, LootedParticleSystem) == 0x000BA0, "Member 'AAthena_Prop_Plant_Shrub_Parent_C::LootedParticleSystem' has a wrong offset!");

}

