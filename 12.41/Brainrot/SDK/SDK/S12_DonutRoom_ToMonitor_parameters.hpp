#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S12_DonutRoom_ToMonitor

#include "Basic.hpp"


namespace SDK::Params
{

// Function S12_DonutRoom_ToMonitor.SequenceDirector_C.ExecuteUbergraph_SequenceDirector
// 0x0010 (0x0010 - 0x0000)
struct SequenceDirector_C_ExecuteUbergraph_SequenceDirector final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47C7[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             K2Node_CustomEvent_Sound;                          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SequenceDirector_C_ExecuteUbergraph_SequenceDirector) == 0x000008, "Wrong alignment on SequenceDirector_C_ExecuteUbergraph_SequenceDirector");
static_assert(sizeof(SequenceDirector_C_ExecuteUbergraph_SequenceDirector) == 0x000010, "Wrong size on SequenceDirector_C_ExecuteUbergraph_SequenceDirector");
static_assert(offsetof(SequenceDirector_C_ExecuteUbergraph_SequenceDirector, EntryPoint) == 0x000000, "Member 'SequenceDirector_C_ExecuteUbergraph_SequenceDirector::EntryPoint' has a wrong offset!");
static_assert(offsetof(SequenceDirector_C_ExecuteUbergraph_SequenceDirector, K2Node_CustomEvent_Sound) == 0x000008, "Member 'SequenceDirector_C_ExecuteUbergraph_SequenceDirector::K2Node_CustomEvent_Sound' has a wrong offset!");

// Function S12_DonutRoom_ToMonitor.SequenceDirector_C.Audio Camera Move Event
// 0x0008 (0x0008 - 0x0000)
struct SequenceDirector_C_Audio_Camera_Move_Event final
{
public:
	class USoundBase*                             Sound;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SequenceDirector_C_Audio_Camera_Move_Event) == 0x000008, "Wrong alignment on SequenceDirector_C_Audio_Camera_Move_Event");
static_assert(sizeof(SequenceDirector_C_Audio_Camera_Move_Event) == 0x000008, "Wrong size on SequenceDirector_C_Audio_Camera_Move_Event");
static_assert(offsetof(SequenceDirector_C_Audio_Camera_Move_Event, Sound) == 0x000000, "Member 'SequenceDirector_C_Audio_Camera_Move_Event::Sound' has a wrong offset!");

}

