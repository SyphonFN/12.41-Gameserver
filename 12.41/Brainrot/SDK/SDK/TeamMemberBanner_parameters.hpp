#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TeamMemberBanner

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "FortniteUI_structs.hpp"


namespace SDK::Params
{

// Function TeamMemberBanner.TeamMemberBanner_C.ExecuteUbergraph_TeamMemberBanner
// 0x0030 (0x0030 - 0x0000)
struct TeamMemberBanner_C_ExecuteUbergraph_TeamMemberBanner final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortMemberConnectionState                    Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59F4[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button_2;               // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button_1;               // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button;                 // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortMemberConnectionState                    K2Node_Event_NewConnectionState;                   // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59F5[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Select_Default;                             // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TeamMemberBanner_C_ExecuteUbergraph_TeamMemberBanner) == 0x000008, "Wrong alignment on TeamMemberBanner_C_ExecuteUbergraph_TeamMemberBanner");
static_assert(sizeof(TeamMemberBanner_C_ExecuteUbergraph_TeamMemberBanner) == 0x000030, "Wrong size on TeamMemberBanner_C_ExecuteUbergraph_TeamMemberBanner");
static_assert(offsetof(TeamMemberBanner_C_ExecuteUbergraph_TeamMemberBanner, EntryPoint) == 0x000000, "Member 'TeamMemberBanner_C_ExecuteUbergraph_TeamMemberBanner::EntryPoint' has a wrong offset!");
static_assert(offsetof(TeamMemberBanner_C_ExecuteUbergraph_TeamMemberBanner, Temp_byte_Variable) == 0x000004, "Member 'TeamMemberBanner_C_ExecuteUbergraph_TeamMemberBanner::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(TeamMemberBanner_C_ExecuteUbergraph_TeamMemberBanner, K2Node_ComponentBoundEvent_Button_2) == 0x000008, "Member 'TeamMemberBanner_C_ExecuteUbergraph_TeamMemberBanner::K2Node_ComponentBoundEvent_Button_2' has a wrong offset!");
static_assert(offsetof(TeamMemberBanner_C_ExecuteUbergraph_TeamMemberBanner, K2Node_ComponentBoundEvent_Button_1) == 0x000010, "Member 'TeamMemberBanner_C_ExecuteUbergraph_TeamMemberBanner::K2Node_ComponentBoundEvent_Button_1' has a wrong offset!");
static_assert(offsetof(TeamMemberBanner_C_ExecuteUbergraph_TeamMemberBanner, K2Node_ComponentBoundEvent_Button) == 0x000018, "Member 'TeamMemberBanner_C_ExecuteUbergraph_TeamMemberBanner::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(TeamMemberBanner_C_ExecuteUbergraph_TeamMemberBanner, K2Node_Event_NewConnectionState) == 0x000020, "Member 'TeamMemberBanner_C_ExecuteUbergraph_TeamMemberBanner::K2Node_Event_NewConnectionState' has a wrong offset!");
static_assert(offsetof(TeamMemberBanner_C_ExecuteUbergraph_TeamMemberBanner, K2Node_Select_Default) == 0x000028, "Member 'TeamMemberBanner_C_ExecuteUbergraph_TeamMemberBanner::K2Node_Select_Default' has a wrong offset!");

// Function TeamMemberBanner.TeamMemberBanner_C.OnTeamMemberConnectionStateChanged
// 0x0001 (0x0001 - 0x0000)
struct TeamMemberBanner_C_OnTeamMemberConnectionStateChanged final
{
public:
	EFortMemberConnectionState                    NewConnectionState;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TeamMemberBanner_C_OnTeamMemberConnectionStateChanged) == 0x000001, "Wrong alignment on TeamMemberBanner_C_OnTeamMemberConnectionStateChanged");
static_assert(sizeof(TeamMemberBanner_C_OnTeamMemberConnectionStateChanged) == 0x000001, "Wrong size on TeamMemberBanner_C_OnTeamMemberConnectionStateChanged");
static_assert(offsetof(TeamMemberBanner_C_OnTeamMemberConnectionStateChanged, NewConnectionState) == 0x000000, "Member 'TeamMemberBanner_C_OnTeamMemberConnectionStateChanged::NewConnectionState' has a wrong offset!");

// Function TeamMemberBanner.TeamMemberBanner_C.BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct TeamMemberBanner_C_BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TeamMemberBanner_C_BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on TeamMemberBanner_C_BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(TeamMemberBanner_C_BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on TeamMemberBanner_C_BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(TeamMemberBanner_C_BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'TeamMemberBanner_C_BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function TeamMemberBanner.TeamMemberBanner_C.BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct TeamMemberBanner_C_BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TeamMemberBanner_C_BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on TeamMemberBanner_C_BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(TeamMemberBanner_C_BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on TeamMemberBanner_C_BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(TeamMemberBanner_C_BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'TeamMemberBanner_C_BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function TeamMemberBanner.TeamMemberBanner_C.BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct TeamMemberBanner_C_BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TeamMemberBanner_C_BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on TeamMemberBanner_C_BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(TeamMemberBanner_C_BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on TeamMemberBanner_C_BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(TeamMemberBanner_C_BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'TeamMemberBanner_C_BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function TeamMemberBanner.TeamMemberBanner_C.HandleMouseHoverVisualState
// 0x00A8 (0x00A8 - 0x0000)
struct TeamMemberBanner_C_HandleMouseHoverVisualState final
{
public:
	bool                                          Hover;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59F6[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable_1;                            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_Select_Default;                             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0020(0x0088)()
};
static_assert(alignof(TeamMemberBanner_C_HandleMouseHoverVisualState) == 0x000008, "Wrong alignment on TeamMemberBanner_C_HandleMouseHoverVisualState");
static_assert(sizeof(TeamMemberBanner_C_HandleMouseHoverVisualState) == 0x0000A8, "Wrong size on TeamMemberBanner_C_HandleMouseHoverVisualState");
static_assert(offsetof(TeamMemberBanner_C_HandleMouseHoverVisualState, Hover) == 0x000000, "Member 'TeamMemberBanner_C_HandleMouseHoverVisualState::Hover' has a wrong offset!");
static_assert(offsetof(TeamMemberBanner_C_HandleMouseHoverVisualState, Temp_bool_Variable) == 0x000001, "Member 'TeamMemberBanner_C_HandleMouseHoverVisualState::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(TeamMemberBanner_C_HandleMouseHoverVisualState, Temp_object_Variable) == 0x000008, "Member 'TeamMemberBanner_C_HandleMouseHoverVisualState::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(TeamMemberBanner_C_HandleMouseHoverVisualState, Temp_object_Variable_1) == 0x000010, "Member 'TeamMemberBanner_C_HandleMouseHoverVisualState::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(TeamMemberBanner_C_HandleMouseHoverVisualState, K2Node_Select_Default) == 0x000018, "Member 'TeamMemberBanner_C_HandleMouseHoverVisualState::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(TeamMemberBanner_C_HandleMouseHoverVisualState, K2Node_MakeStruct_SlateBrush) == 0x000020, "Member 'TeamMemberBanner_C_HandleMouseHoverVisualState::K2Node_MakeStruct_SlateBrush' has a wrong offset!");

// Function TeamMemberBanner.TeamMemberBanner_C.OpenPartyFinder
// 0x0018 (0x0018 - 0x0000)
struct TeamMemberBanner_C_OpenPartyFinder final
{
public:
	class UUserWidget*                            CallFunc_GetCachedWidget_ReturnValue;              // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USocialPanel_C*                         K2Node_DynamicCast_AsSocial_Panel;                 // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsActivated_ReturnValue;                  // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TeamMemberBanner_C_OpenPartyFinder) == 0x000008, "Wrong alignment on TeamMemberBanner_C_OpenPartyFinder");
static_assert(sizeof(TeamMemberBanner_C_OpenPartyFinder) == 0x000018, "Wrong size on TeamMemberBanner_C_OpenPartyFinder");
static_assert(offsetof(TeamMemberBanner_C_OpenPartyFinder, CallFunc_GetCachedWidget_ReturnValue) == 0x000000, "Member 'TeamMemberBanner_C_OpenPartyFinder::CallFunc_GetCachedWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberBanner_C_OpenPartyFinder, K2Node_DynamicCast_AsSocial_Panel) == 0x000008, "Member 'TeamMemberBanner_C_OpenPartyFinder::K2Node_DynamicCast_AsSocial_Panel' has a wrong offset!");
static_assert(offsetof(TeamMemberBanner_C_OpenPartyFinder, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'TeamMemberBanner_C_OpenPartyFinder::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(TeamMemberBanner_C_OpenPartyFinder, CallFunc_IsActivated_ReturnValue) == 0x000011, "Member 'TeamMemberBanner_C_OpenPartyFinder::CallFunc_IsActivated_ReturnValue' has a wrong offset!");

}
