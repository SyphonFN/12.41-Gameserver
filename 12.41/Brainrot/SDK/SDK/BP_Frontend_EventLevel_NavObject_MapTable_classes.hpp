#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Frontend_EventLevel_NavObject_MapTable

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Frontend_EventLevel_NavObject_MapTable.BP_Frontend_EventLevel_NavObject_MapTable_C
// 0x0008 (0x0508 - 0x0500)
class ABP_Frontend_EventLevel_NavObject_MapTable_C final : public AFortNavigationActor_MapTable
{
public:
	class UFortBangCheckComponent_Map*            FortBangCheckComponent_Map;                        // 0x0500(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Frontend_EventLevel_NavObject_MapTable_C">();
	}
	static class ABP_Frontend_EventLevel_NavObject_MapTable_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Frontend_EventLevel_NavObject_MapTable_C>();
	}
};
static_assert(alignof(ABP_Frontend_EventLevel_NavObject_MapTable_C) == 0x000008, "Wrong alignment on ABP_Frontend_EventLevel_NavObject_MapTable_C");
static_assert(sizeof(ABP_Frontend_EventLevel_NavObject_MapTable_C) == 0x000508, "Wrong size on ABP_Frontend_EventLevel_NavObject_MapTable_C");
static_assert(offsetof(ABP_Frontend_EventLevel_NavObject_MapTable_C, FortBangCheckComponent_Map) == 0x000500, "Member 'ABP_Frontend_EventLevel_NavObject_MapTable_C::FortBangCheckComponent_Map' has a wrong offset!");

}

