#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DonutChallengeListEntry_Header

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function DonutChallengeListEntry_Header.DonutChallengeListEntry_Header_C.ExecuteUbergraph_DonutChallengeListEntry_Header
// 0x0070 (0x0070 - 0x0000)
struct DonutChallengeListEntry_Header_C_ExecuteUbergraph_DonutChallengeListEntry_Header final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_InWeek;                               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0008(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0048(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0058(0x0018)()
};
static_assert(alignof(DonutChallengeListEntry_Header_C_ExecuteUbergraph_DonutChallengeListEntry_Header) == 0x000008, "Wrong alignment on DonutChallengeListEntry_Header_C_ExecuteUbergraph_DonutChallengeListEntry_Header");
static_assert(sizeof(DonutChallengeListEntry_Header_C_ExecuteUbergraph_DonutChallengeListEntry_Header) == 0x000070, "Wrong size on DonutChallengeListEntry_Header_C_ExecuteUbergraph_DonutChallengeListEntry_Header");
static_assert(offsetof(DonutChallengeListEntry_Header_C_ExecuteUbergraph_DonutChallengeListEntry_Header, EntryPoint) == 0x000000, "Member 'DonutChallengeListEntry_Header_C_ExecuteUbergraph_DonutChallengeListEntry_Header::EntryPoint' has a wrong offset!");
static_assert(offsetof(DonutChallengeListEntry_Header_C_ExecuteUbergraph_DonutChallengeListEntry_Header, K2Node_Event_InWeek) == 0x000004, "Member 'DonutChallengeListEntry_Header_C_ExecuteUbergraph_DonutChallengeListEntry_Header::K2Node_Event_InWeek' has a wrong offset!");
static_assert(offsetof(DonutChallengeListEntry_Header_C_ExecuteUbergraph_DonutChallengeListEntry_Header, K2Node_MakeStruct_FormatArgumentData) == 0x000008, "Member 'DonutChallengeListEntry_Header_C_ExecuteUbergraph_DonutChallengeListEntry_Header::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(DonutChallengeListEntry_Header_C_ExecuteUbergraph_DonutChallengeListEntry_Header, K2Node_MakeArray_Array) == 0x000048, "Member 'DonutChallengeListEntry_Header_C_ExecuteUbergraph_DonutChallengeListEntry_Header::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(DonutChallengeListEntry_Header_C_ExecuteUbergraph_DonutChallengeListEntry_Header, CallFunc_Format_ReturnValue) == 0x000058, "Member 'DonutChallengeListEntry_Header_C_ExecuteUbergraph_DonutChallengeListEntry_Header::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function DonutChallengeListEntry_Header.DonutChallengeListEntry_Header_C.BPUpdateTitle
// 0x0004 (0x0004 - 0x0000)
struct DonutChallengeListEntry_Header_C_BPUpdateTitle final
{
public:
	int32                                         InWeek;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DonutChallengeListEntry_Header_C_BPUpdateTitle) == 0x000004, "Wrong alignment on DonutChallengeListEntry_Header_C_BPUpdateTitle");
static_assert(sizeof(DonutChallengeListEntry_Header_C_BPUpdateTitle) == 0x000004, "Wrong size on DonutChallengeListEntry_Header_C_BPUpdateTitle");
static_assert(offsetof(DonutChallengeListEntry_Header_C_BPUpdateTitle, InWeek) == 0x000000, "Member 'DonutChallengeListEntry_Header_C_BPUpdateTitle::InWeek' has a wrong offset!");

}

