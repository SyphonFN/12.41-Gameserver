#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Keycard_Athena_Parent

#include "Basic.hpp"

#include "B_UtilityItem_Generic_Athena_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Keycard_Athena_Parent.B_Keycard_Athena_Parent_C
// 0x0008 (0x0B90 - 0x0B88)
class AB_Keycard_Athena_Parent_C : public AB_UtilityItem_Generic_Athena_C
{
public:
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0B88(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Keycard_Athena_Parent_C">();
	}
	static class AB_Keycard_Athena_Parent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Keycard_Athena_Parent_C>();
	}
};
static_assert(alignof(AB_Keycard_Athena_Parent_C) == 0x000008, "Wrong alignment on AB_Keycard_Athena_Parent_C");
static_assert(sizeof(AB_Keycard_Athena_Parent_C) == 0x000B90, "Wrong size on AB_Keycard_Athena_Parent_C");
static_assert(offsetof(AB_Keycard_Athena_Parent_C, StaticMesh) == 0x000B88, "Member 'AB_Keycard_Athena_Parent_C::StaticMesh' has a wrong offset!");

}
