#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaReplayBrowserTab

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.ExecuteUbergraph_AthenaReplayBrowserTab
// 0x0040 (0x0040 - 0x0000)
struct AthenaReplayBrowserTab_C_ExecuteUbergraph_AthenaReplayBrowserTab final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bHasAction;                           // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E22[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AFort_Entry_Music_Controller_BP_C*> CallFunc_GetAllActorsOfClass_OutActors;            // 0x0008(0x0010)(ZeroConstructor, ReferenceParm)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	class AFort_Entry_Music_Controller_BP_C*      CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0030(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AthenaReplayBrowserTab_C_ExecuteUbergraph_AthenaReplayBrowserTab) == 0x000008, "Wrong alignment on AthenaReplayBrowserTab_C_ExecuteUbergraph_AthenaReplayBrowserTab");
static_assert(sizeof(AthenaReplayBrowserTab_C_ExecuteUbergraph_AthenaReplayBrowserTab) == 0x000040, "Wrong size on AthenaReplayBrowserTab_C_ExecuteUbergraph_AthenaReplayBrowserTab");
static_assert(offsetof(AthenaReplayBrowserTab_C_ExecuteUbergraph_AthenaReplayBrowserTab, EntryPoint) == 0x000000, "Member 'AthenaReplayBrowserTab_C_ExecuteUbergraph_AthenaReplayBrowserTab::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaReplayBrowserTab_C_ExecuteUbergraph_AthenaReplayBrowserTab, CallFunc_IsVisible_ReturnValue) == 0x000004, "Member 'AthenaReplayBrowserTab_C_ExecuteUbergraph_AthenaReplayBrowserTab::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaReplayBrowserTab_C_ExecuteUbergraph_AthenaReplayBrowserTab, K2Node_Event_bHasAction) == 0x000005, "Member 'AthenaReplayBrowserTab_C_ExecuteUbergraph_AthenaReplayBrowserTab::K2Node_Event_bHasAction' has a wrong offset!");
static_assert(offsetof(AthenaReplayBrowserTab_C_ExecuteUbergraph_AthenaReplayBrowserTab, CallFunc_GetAllActorsOfClass_OutActors) == 0x000008, "Member 'AthenaReplayBrowserTab_C_ExecuteUbergraph_AthenaReplayBrowserTab::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(AthenaReplayBrowserTab_C_ExecuteUbergraph_AthenaReplayBrowserTab, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'AthenaReplayBrowserTab_C_ExecuteUbergraph_AthenaReplayBrowserTab::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AthenaReplayBrowserTab_C_ExecuteUbergraph_AthenaReplayBrowserTab, CallFunc_Array_Get_Item) == 0x000028, "Member 'AthenaReplayBrowserTab_C_ExecuteUbergraph_AthenaReplayBrowserTab::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(AthenaReplayBrowserTab_C_ExecuteUbergraph_AthenaReplayBrowserTab, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000030, "Member 'AthenaReplayBrowserTab_C_ExecuteUbergraph_AthenaReplayBrowserTab::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaReplayBrowserTab_C_ExecuteUbergraph_AthenaReplayBrowserTab, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'AthenaReplayBrowserTab_C_ExecuteUbergraph_AthenaReplayBrowserTab::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaReplayBrowserTab_C_ExecuteUbergraph_AthenaReplayBrowserTab, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000039, "Member 'AthenaReplayBrowserTab_C_ExecuteUbergraph_AthenaReplayBrowserTab::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");

// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnActionStateChanged
// 0x0001 (0x0001 - 0x0000)
struct AthenaReplayBrowserTab_C_OnActionStateChanged final
{
public:
	bool                                          bHasAction;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AthenaReplayBrowserTab_C_OnActionStateChanged) == 0x000001, "Wrong alignment on AthenaReplayBrowserTab_C_OnActionStateChanged");
static_assert(sizeof(AthenaReplayBrowserTab_C_OnActionStateChanged) == 0x000001, "Wrong size on AthenaReplayBrowserTab_C_OnActionStateChanged");
static_assert(offsetof(AthenaReplayBrowserTab_C_OnActionStateChanged, bHasAction) == 0x000000, "Member 'AthenaReplayBrowserTab_C_OnActionStateChanged::bHasAction' has a wrong offset!");

}
