#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Lotus_Mustache_HealthBar

#include "Basic.hpp"


namespace SDK::Params
{

// Function Lotus_Mustache_HealthBar.Lotus_Mustache_HealthBar_C.ExecuteUbergraph_Lotus_Mustache_HealthBar
// 0x0008 (0x0008 - 0x0000)
struct Lotus_Mustache_HealthBar_C_ExecuteUbergraph_Lotus_Mustache_HealthBar final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_HealthPercent;                  // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Lotus_Mustache_HealthBar_C_ExecuteUbergraph_Lotus_Mustache_HealthBar) == 0x000004, "Wrong alignment on Lotus_Mustache_HealthBar_C_ExecuteUbergraph_Lotus_Mustache_HealthBar");
static_assert(sizeof(Lotus_Mustache_HealthBar_C_ExecuteUbergraph_Lotus_Mustache_HealthBar) == 0x000008, "Wrong size on Lotus_Mustache_HealthBar_C_ExecuteUbergraph_Lotus_Mustache_HealthBar");
static_assert(offsetof(Lotus_Mustache_HealthBar_C_ExecuteUbergraph_Lotus_Mustache_HealthBar, EntryPoint) == 0x000000, "Member 'Lotus_Mustache_HealthBar_C_ExecuteUbergraph_Lotus_Mustache_HealthBar::EntryPoint' has a wrong offset!");
static_assert(offsetof(Lotus_Mustache_HealthBar_C_ExecuteUbergraph_Lotus_Mustache_HealthBar, K2Node_CustomEvent_HealthPercent) == 0x000004, "Member 'Lotus_Mustache_HealthBar_C_ExecuteUbergraph_Lotus_Mustache_HealthBar::K2Node_CustomEvent_HealthPercent' has a wrong offset!");

// Function Lotus_Mustache_HealthBar.Lotus_Mustache_HealthBar_C.SetHealth
// 0x0004 (0x0004 - 0x0000)
struct Lotus_Mustache_HealthBar_C_SetHealth final
{
public:
	float                                         HealthPercent;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Lotus_Mustache_HealthBar_C_SetHealth) == 0x000004, "Wrong alignment on Lotus_Mustache_HealthBar_C_SetHealth");
static_assert(sizeof(Lotus_Mustache_HealthBar_C_SetHealth) == 0x000004, "Wrong size on Lotus_Mustache_HealthBar_C_SetHealth");
static_assert(offsetof(Lotus_Mustache_HealthBar_C_SetHealth, HealthPercent) == 0x000000, "Member 'Lotus_Mustache_HealthBar_C_SetHealth::HealthPercent' has a wrong offset!");

}

