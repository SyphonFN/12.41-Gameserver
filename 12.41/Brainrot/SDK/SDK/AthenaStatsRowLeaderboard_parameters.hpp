#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaStatsRowLeaderboard

#include "Basic.hpp"


namespace SDK::Params
{

// Function AthenaStatsRowLeaderboard.AthenaStatsRowLeaderboard_C.ExecuteUbergraph_AthenaStatsRowLeaderboard
// 0x0008 (0x0008 - 0x0000)
struct AthenaStatsRowLeaderboard_C_ExecuteUbergraph_AthenaStatsRowLeaderboard final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AthenaStatsRowLeaderboard_C_ExecuteUbergraph_AthenaStatsRowLeaderboard) == 0x000004, "Wrong alignment on AthenaStatsRowLeaderboard_C_ExecuteUbergraph_AthenaStatsRowLeaderboard");
static_assert(sizeof(AthenaStatsRowLeaderboard_C_ExecuteUbergraph_AthenaStatsRowLeaderboard) == 0x000008, "Wrong size on AthenaStatsRowLeaderboard_C_ExecuteUbergraph_AthenaStatsRowLeaderboard");
static_assert(offsetof(AthenaStatsRowLeaderboard_C_ExecuteUbergraph_AthenaStatsRowLeaderboard, EntryPoint) == 0x000000, "Member 'AthenaStatsRowLeaderboard_C_ExecuteUbergraph_AthenaStatsRowLeaderboard::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaStatsRowLeaderboard_C_ExecuteUbergraph_AthenaStatsRowLeaderboard, K2Node_Event_IsDesignTime) == 0x000004, "Member 'AthenaStatsRowLeaderboard_C_ExecuteUbergraph_AthenaStatsRowLeaderboard::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function AthenaStatsRowLeaderboard.AthenaStatsRowLeaderboard_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct AthenaStatsRowLeaderboard_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AthenaStatsRowLeaderboard_C_PreConstruct) == 0x000001, "Wrong alignment on AthenaStatsRowLeaderboard_C_PreConstruct");
static_assert(sizeof(AthenaStatsRowLeaderboard_C_PreConstruct) == 0x000001, "Wrong size on AthenaStatsRowLeaderboard_C_PreConstruct");
static_assert(offsetof(AthenaStatsRowLeaderboard_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'AthenaStatsRowLeaderboard_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function AthenaStatsRowLeaderboard.AthenaStatsRowLeaderboard_C.SetStatValueAsText
// 0x0018 (0x0018 - 0x0000)
struct AthenaStatsRowLeaderboard_C_SetStatValueAsText final
{
public:
	class FText                                   StatValue;                                         // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(AthenaStatsRowLeaderboard_C_SetStatValueAsText) == 0x000008, "Wrong alignment on AthenaStatsRowLeaderboard_C_SetStatValueAsText");
static_assert(sizeof(AthenaStatsRowLeaderboard_C_SetStatValueAsText) == 0x000018, "Wrong size on AthenaStatsRowLeaderboard_C_SetStatValueAsText");
static_assert(offsetof(AthenaStatsRowLeaderboard_C_SetStatValueAsText, StatValue) == 0x000000, "Member 'AthenaStatsRowLeaderboard_C_SetStatValueAsText::StatValue' has a wrong offset!");

}
