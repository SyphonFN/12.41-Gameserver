#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MissionProgressDisplay

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function MissionProgressDisplay.MissionProgressDisplay_C.ExecuteUbergraph_MissionProgressDisplay
// 0x0108 (0x0108 - 0x0000)
struct MissionProgressDisplay_C_ExecuteUbergraph_MissionProgressDisplay final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50AB[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_MakeLiteralFloat_ReturnValue;             // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeLiteralFloat_ReturnValue_1;           // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_PercentValue;                         // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0018(0x0088)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00A0(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00E0(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00F0(0x0018)()
};
static_assert(alignof(MissionProgressDisplay_C_ExecuteUbergraph_MissionProgressDisplay) == 0x000008, "Wrong alignment on MissionProgressDisplay_C_ExecuteUbergraph_MissionProgressDisplay");
static_assert(sizeof(MissionProgressDisplay_C_ExecuteUbergraph_MissionProgressDisplay) == 0x000108, "Wrong size on MissionProgressDisplay_C_ExecuteUbergraph_MissionProgressDisplay");
static_assert(offsetof(MissionProgressDisplay_C_ExecuteUbergraph_MissionProgressDisplay, EntryPoint) == 0x000000, "Member 'MissionProgressDisplay_C_ExecuteUbergraph_MissionProgressDisplay::EntryPoint' has a wrong offset!");
static_assert(offsetof(MissionProgressDisplay_C_ExecuteUbergraph_MissionProgressDisplay, K2Node_Event_IsDesignTime) == 0x000004, "Member 'MissionProgressDisplay_C_ExecuteUbergraph_MissionProgressDisplay::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(MissionProgressDisplay_C_ExecuteUbergraph_MissionProgressDisplay, CallFunc_MakeLiteralFloat_ReturnValue) == 0x000008, "Member 'MissionProgressDisplay_C_ExecuteUbergraph_MissionProgressDisplay::CallFunc_MakeLiteralFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionProgressDisplay_C_ExecuteUbergraph_MissionProgressDisplay, CallFunc_MakeLiteralFloat_ReturnValue_1) == 0x00000C, "Member 'MissionProgressDisplay_C_ExecuteUbergraph_MissionProgressDisplay::CallFunc_MakeLiteralFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MissionProgressDisplay_C_ExecuteUbergraph_MissionProgressDisplay, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000010, "Member 'MissionProgressDisplay_C_ExecuteUbergraph_MissionProgressDisplay::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionProgressDisplay_C_ExecuteUbergraph_MissionProgressDisplay, K2Node_Event_PercentValue) == 0x000014, "Member 'MissionProgressDisplay_C_ExecuteUbergraph_MissionProgressDisplay::K2Node_Event_PercentValue' has a wrong offset!");
static_assert(offsetof(MissionProgressDisplay_C_ExecuteUbergraph_MissionProgressDisplay, K2Node_MakeStruct_SlateBrush) == 0x000018, "Member 'MissionProgressDisplay_C_ExecuteUbergraph_MissionProgressDisplay::K2Node_MakeStruct_SlateBrush' has a wrong offset!");
static_assert(offsetof(MissionProgressDisplay_C_ExecuteUbergraph_MissionProgressDisplay, K2Node_MakeStruct_FormatArgumentData) == 0x0000A0, "Member 'MissionProgressDisplay_C_ExecuteUbergraph_MissionProgressDisplay::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(MissionProgressDisplay_C_ExecuteUbergraph_MissionProgressDisplay, K2Node_MakeArray_Array) == 0x0000E0, "Member 'MissionProgressDisplay_C_ExecuteUbergraph_MissionProgressDisplay::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(MissionProgressDisplay_C_ExecuteUbergraph_MissionProgressDisplay, CallFunc_Format_ReturnValue) == 0x0000F0, "Member 'MissionProgressDisplay_C_ExecuteUbergraph_MissionProgressDisplay::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function MissionProgressDisplay.MissionProgressDisplay_C.SetPercentValueForMaterialNumber
// 0x0004 (0x0004 - 0x0000)
struct MissionProgressDisplay_C_SetPercentValueForMaterialNumber final
{
public:
	int32                                         PercentValue;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MissionProgressDisplay_C_SetPercentValueForMaterialNumber) == 0x000004, "Wrong alignment on MissionProgressDisplay_C_SetPercentValueForMaterialNumber");
static_assert(sizeof(MissionProgressDisplay_C_SetPercentValueForMaterialNumber) == 0x000004, "Wrong size on MissionProgressDisplay_C_SetPercentValueForMaterialNumber");
static_assert(offsetof(MissionProgressDisplay_C_SetPercentValueForMaterialNumber, PercentValue) == 0x000000, "Member 'MissionProgressDisplay_C_SetPercentValueForMaterialNumber::PercentValue' has a wrong offset!");

// Function MissionProgressDisplay.MissionProgressDisplay_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct MissionProgressDisplay_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MissionProgressDisplay_C_PreConstruct) == 0x000001, "Wrong alignment on MissionProgressDisplay_C_PreConstruct");
static_assert(sizeof(MissionProgressDisplay_C_PreConstruct) == 0x000001, "Wrong size on MissionProgressDisplay_C_PreConstruct");
static_assert(offsetof(MissionProgressDisplay_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'MissionProgressDisplay_C_PreConstruct::IsDesignTime' has a wrong offset!");

}
