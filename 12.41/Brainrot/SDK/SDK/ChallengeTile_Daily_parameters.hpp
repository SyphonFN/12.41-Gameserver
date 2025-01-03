#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChallengeTile_Daily

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function ChallengeTile_Daily.ChallengeTile_Daily_C.ExecuteUbergraph_ChallengeTile_Daily
// 0x00D0 (0x00D0 - 0x0000)
struct ChallengeTile_Daily_C_ExecuteUbergraph_ChallengeTile_Daily final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5014[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortChallengeSetStyle                 K2Node_Event_DisplayStyle;                         // 0x0010(0x00A0)(ConstParm)
	bool                                          K2Node_Event_bIsComplete;                          // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bIsLocked;                            // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5015[0x6];                                     // 0x00B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bHasPartyAssistedChallenge;           // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChallengeTile_Daily_C_ExecuteUbergraph_ChallengeTile_Daily) == 0x000008, "Wrong alignment on ChallengeTile_Daily_C_ExecuteUbergraph_ChallengeTile_Daily");
static_assert(sizeof(ChallengeTile_Daily_C_ExecuteUbergraph_ChallengeTile_Daily) == 0x0000D0, "Wrong size on ChallengeTile_Daily_C_ExecuteUbergraph_ChallengeTile_Daily");
static_assert(offsetof(ChallengeTile_Daily_C_ExecuteUbergraph_ChallengeTile_Daily, EntryPoint) == 0x000000, "Member 'ChallengeTile_Daily_C_ExecuteUbergraph_ChallengeTile_Daily::EntryPoint' has a wrong offset!");
static_assert(offsetof(ChallengeTile_Daily_C_ExecuteUbergraph_ChallengeTile_Daily, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'ChallengeTile_Daily_C_ExecuteUbergraph_ChallengeTile_Daily::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeTile_Daily_C_ExecuteUbergraph_ChallengeTile_Daily, K2Node_Event_DisplayStyle) == 0x000010, "Member 'ChallengeTile_Daily_C_ExecuteUbergraph_ChallengeTile_Daily::K2Node_Event_DisplayStyle' has a wrong offset!");
static_assert(offsetof(ChallengeTile_Daily_C_ExecuteUbergraph_ChallengeTile_Daily, K2Node_Event_bIsComplete) == 0x0000B0, "Member 'ChallengeTile_Daily_C_ExecuteUbergraph_ChallengeTile_Daily::K2Node_Event_bIsComplete' has a wrong offset!");
static_assert(offsetof(ChallengeTile_Daily_C_ExecuteUbergraph_ChallengeTile_Daily, K2Node_Event_bIsLocked) == 0x0000B1, "Member 'ChallengeTile_Daily_C_ExecuteUbergraph_ChallengeTile_Daily::K2Node_Event_bIsLocked' has a wrong offset!");
static_assert(offsetof(ChallengeTile_Daily_C_ExecuteUbergraph_ChallengeTile_Daily, CallFunc_PlayAnimationReverse_ReturnValue) == 0x0000B8, "Member 'ChallengeTile_Daily_C_ExecuteUbergraph_ChallengeTile_Daily::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeTile_Daily_C_ExecuteUbergraph_ChallengeTile_Daily, CallFunc_PlayAnimationForward_ReturnValue) == 0x0000C0, "Member 'ChallengeTile_Daily_C_ExecuteUbergraph_ChallengeTile_Daily::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeTile_Daily_C_ExecuteUbergraph_ChallengeTile_Daily, K2Node_Event_bHasPartyAssistedChallenge) == 0x0000C8, "Member 'ChallengeTile_Daily_C_ExecuteUbergraph_ChallengeTile_Daily::K2Node_Event_bHasPartyAssistedChallenge' has a wrong offset!");

// Function ChallengeTile_Daily.ChallengeTile_Daily_C.OnContainsPartyAssistedChallengeChanged
// 0x0001 (0x0001 - 0x0000)
struct ChallengeTile_Daily_C_OnContainsPartyAssistedChallengeChanged final
{
public:
	bool                                          bHasPartyAssistedChallenge;                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChallengeTile_Daily_C_OnContainsPartyAssistedChallengeChanged) == 0x000001, "Wrong alignment on ChallengeTile_Daily_C_OnContainsPartyAssistedChallengeChanged");
static_assert(sizeof(ChallengeTile_Daily_C_OnContainsPartyAssistedChallengeChanged) == 0x000001, "Wrong size on ChallengeTile_Daily_C_OnContainsPartyAssistedChallengeChanged");
static_assert(offsetof(ChallengeTile_Daily_C_OnContainsPartyAssistedChallengeChanged, bHasPartyAssistedChallenge) == 0x000000, "Member 'ChallengeTile_Daily_C_OnContainsPartyAssistedChallengeChanged::bHasPartyAssistedChallenge' has a wrong offset!");

// Function ChallengeTile_Daily.ChallengeTile_Daily_C.OnChallengeSetEstablished
// 0x00A8 (0x00A8 - 0x0000)
struct ChallengeTile_Daily_C_OnChallengeSetEstablished final
{
public:
	struct FFortChallengeSetStyle                 DisplayStyle;                                      // 0x0000(0x00A0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          bIsComplete;                                       // 0x00A0(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bIsLocked;                                         // 0x00A1(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChallengeTile_Daily_C_OnChallengeSetEstablished) == 0x000008, "Wrong alignment on ChallengeTile_Daily_C_OnChallengeSetEstablished");
static_assert(sizeof(ChallengeTile_Daily_C_OnChallengeSetEstablished) == 0x0000A8, "Wrong size on ChallengeTile_Daily_C_OnChallengeSetEstablished");
static_assert(offsetof(ChallengeTile_Daily_C_OnChallengeSetEstablished, DisplayStyle) == 0x000000, "Member 'ChallengeTile_Daily_C_OnChallengeSetEstablished::DisplayStyle' has a wrong offset!");
static_assert(offsetof(ChallengeTile_Daily_C_OnChallengeSetEstablished, bIsComplete) == 0x0000A0, "Member 'ChallengeTile_Daily_C_OnChallengeSetEstablished::bIsComplete' has a wrong offset!");
static_assert(offsetof(ChallengeTile_Daily_C_OnChallengeSetEstablished, bIsLocked) == 0x0000A1, "Member 'ChallengeTile_Daily_C_OnChallengeSetEstablished::bIsLocked' has a wrong offset!");

// Function ChallengeTile_Daily.ChallengeTile_Daily_C.SetDynamicColors
// 0x00B0 (0x00B0 - 0x0000)
struct ChallengeTile_Daily_C_SetDynamicColors final
{
public:
	class UImage*                                 WeeklyDynamicMaterialTarget;                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortChallengeSetStyle                 FortChallengeSetStyle;                             // 0x0008(0x00A0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChallengeTile_Daily_C_SetDynamicColors) == 0x000008, "Wrong alignment on ChallengeTile_Daily_C_SetDynamicColors");
static_assert(sizeof(ChallengeTile_Daily_C_SetDynamicColors) == 0x0000B0, "Wrong size on ChallengeTile_Daily_C_SetDynamicColors");
static_assert(offsetof(ChallengeTile_Daily_C_SetDynamicColors, WeeklyDynamicMaterialTarget) == 0x000000, "Member 'ChallengeTile_Daily_C_SetDynamicColors::WeeklyDynamicMaterialTarget' has a wrong offset!");
static_assert(offsetof(ChallengeTile_Daily_C_SetDynamicColors, FortChallengeSetStyle) == 0x000008, "Member 'ChallengeTile_Daily_C_SetDynamicColors::FortChallengeSetStyle' has a wrong offset!");
static_assert(offsetof(ChallengeTile_Daily_C_SetDynamicColors, CallFunc_GetDynamicMaterial_ReturnValue) == 0x0000A8, "Member 'ChallengeTile_Daily_C_SetDynamicColors::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

}

