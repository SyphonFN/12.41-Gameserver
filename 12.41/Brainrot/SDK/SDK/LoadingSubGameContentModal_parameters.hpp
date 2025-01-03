#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LoadingSubGameContentModal

#include "Basic.hpp"


namespace SDK::Params
{

// Function LoadingSubGameContentModal.LoadingSubGameContentModal_C.ExecuteUbergraph_LoadingSubGameContentModal
// 0x0030 (0x0030 - 0x0000)
struct LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6954[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_Percent;                              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6955[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_AsPercent_Float_ReturnValue;              // 0x0018(0x0018)()
};
static_assert(alignof(LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal) == 0x000008, "Wrong alignment on LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal");
static_assert(sizeof(LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal) == 0x000030, "Wrong size on LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal");
static_assert(offsetof(LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal, EntryPoint) == 0x000000, "Member 'LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal::EntryPoint' has a wrong offset!");
static_assert(offsetof(LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal, K2Node_Event_Percent) == 0x000010, "Member 'LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal::K2Node_Event_Percent' has a wrong offset!");
static_assert(offsetof(LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal, CallFunc_AsPercent_Float_ReturnValue) == 0x000018, "Member 'LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal::CallFunc_AsPercent_Float_ReturnValue' has a wrong offset!");

// Function LoadingSubGameContentModal.LoadingSubGameContentModal_C.OnUpdatedProgress
// 0x0004 (0x0004 - 0x0000)
struct LoadingSubGameContentModal_C_OnUpdatedProgress final
{
public:
	float                                         Percent;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LoadingSubGameContentModal_C_OnUpdatedProgress) == 0x000004, "Wrong alignment on LoadingSubGameContentModal_C_OnUpdatedProgress");
static_assert(sizeof(LoadingSubGameContentModal_C_OnUpdatedProgress) == 0x000004, "Wrong size on LoadingSubGameContentModal_C_OnUpdatedProgress");
static_assert(offsetof(LoadingSubGameContentModal_C_OnUpdatedProgress, Percent) == 0x000000, "Member 'LoadingSubGameContentModal_C_OnUpdatedProgress::Percent' has a wrong offset!");

}

