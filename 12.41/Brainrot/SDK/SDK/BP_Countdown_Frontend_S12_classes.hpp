#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Countdown_Frontend_S12

#include "Basic.hpp"

#include "BP_CountdownMaster_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Countdown_Frontend_S12.BP_Countdown_Frontend_S12_C
// 0x0028 (0x0308 - 0x02E0)
class ABP_Countdown_Frontend_S12_C final : public ABP_CountdownMaster_C
{
public:
	class UTextRenderComponent*                   SEC;                                               // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                   Min;                                               // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                   HRS;                                               // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                   Day;                                               // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Monitor;                                        // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Countdown_Frontend_S12_C">();
	}
	static class ABP_Countdown_Frontend_S12_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Countdown_Frontend_S12_C>();
	}
};
static_assert(alignof(ABP_Countdown_Frontend_S12_C) == 0x000008, "Wrong alignment on ABP_Countdown_Frontend_S12_C");
static_assert(sizeof(ABP_Countdown_Frontend_S12_C) == 0x000308, "Wrong size on ABP_Countdown_Frontend_S12_C");
static_assert(offsetof(ABP_Countdown_Frontend_S12_C, SEC) == 0x0002E0, "Member 'ABP_Countdown_Frontend_S12_C::SEC' has a wrong offset!");
static_assert(offsetof(ABP_Countdown_Frontend_S12_C, Min) == 0x0002E8, "Member 'ABP_Countdown_Frontend_S12_C::Min' has a wrong offset!");
static_assert(offsetof(ABP_Countdown_Frontend_S12_C, HRS) == 0x0002F0, "Member 'ABP_Countdown_Frontend_S12_C::HRS' has a wrong offset!");
static_assert(offsetof(ABP_Countdown_Frontend_S12_C, Day) == 0x0002F8, "Member 'ABP_Countdown_Frontend_S12_C::Day' has a wrong offset!");
static_assert(offsetof(ABP_Countdown_Frontend_S12_C, SM_Monitor) == 0x000300, "Member 'ABP_Countdown_Frontend_S12_C::SM_Monitor' has a wrong offset!");

}
