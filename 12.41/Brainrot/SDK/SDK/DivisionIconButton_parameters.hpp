#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DivisionIconButton

#include "Basic.hpp"


namespace SDK::Params
{

// Function DivisionIconButton.DivisionIconButton_C.ExecuteUbergraph_DivisionIconButton
// 0x0018 (0x0018 - 0x0000)
struct DivisionIconButton_C_ExecuteUbergraph_DivisionIconButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6E70[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsSelected;                          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DivisionIconButton_C_ExecuteUbergraph_DivisionIconButton) == 0x000008, "Wrong alignment on DivisionIconButton_C_ExecuteUbergraph_DivisionIconButton");
static_assert(sizeof(DivisionIconButton_C_ExecuteUbergraph_DivisionIconButton) == 0x000018, "Wrong size on DivisionIconButton_C_ExecuteUbergraph_DivisionIconButton");
static_assert(offsetof(DivisionIconButton_C_ExecuteUbergraph_DivisionIconButton, EntryPoint) == 0x000000, "Member 'DivisionIconButton_C_ExecuteUbergraph_DivisionIconButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(DivisionIconButton_C_ExecuteUbergraph_DivisionIconButton, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'DivisionIconButton_C_ExecuteUbergraph_DivisionIconButton::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(DivisionIconButton_C_ExecuteUbergraph_DivisionIconButton, K2Node_Event_bIsSelected) == 0x000010, "Member 'DivisionIconButton_C_ExecuteUbergraph_DivisionIconButton::K2Node_Event_bIsSelected' has a wrong offset!");

// Function DivisionIconButton.DivisionIconButton_C.OnRankButtonSelected
// 0x0001 (0x0001 - 0x0000)
struct DivisionIconButton_C_OnRankButtonSelected final
{
public:
	bool                                          bIsSelected;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DivisionIconButton_C_OnRankButtonSelected) == 0x000001, "Wrong alignment on DivisionIconButton_C_OnRankButtonSelected");
static_assert(sizeof(DivisionIconButton_C_OnRankButtonSelected) == 0x000001, "Wrong size on DivisionIconButton_C_OnRankButtonSelected");
static_assert(offsetof(DivisionIconButton_C_OnRankButtonSelected, bIsSelected) == 0x000000, "Member 'DivisionIconButton_C_OnRankButtonSelected::bIsSelected' has a wrong offset!");

}
