#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PreviewUnbindAction

#include "Basic.hpp"


namespace SDK::Params
{

// Function PreviewUnbindAction.PreviewUnbindAction_C.ExecuteUbergraph_PreviewUnbindAction
// 0x0018 (0x0018 - 0x0000)
struct PreviewUnbindAction_C_ExecuteUbergraph_PreviewUnbindAction final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D1B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_Event_ListItemObject;                       // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsExpanded;                          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bIsSelected;                          // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PreviewUnbindAction_C_ExecuteUbergraph_PreviewUnbindAction) == 0x000008, "Wrong alignment on PreviewUnbindAction_C_ExecuteUbergraph_PreviewUnbindAction");
static_assert(sizeof(PreviewUnbindAction_C_ExecuteUbergraph_PreviewUnbindAction) == 0x000018, "Wrong size on PreviewUnbindAction_C_ExecuteUbergraph_PreviewUnbindAction");
static_assert(offsetof(PreviewUnbindAction_C_ExecuteUbergraph_PreviewUnbindAction, EntryPoint) == 0x000000, "Member 'PreviewUnbindAction_C_ExecuteUbergraph_PreviewUnbindAction::EntryPoint' has a wrong offset!");
static_assert(offsetof(PreviewUnbindAction_C_ExecuteUbergraph_PreviewUnbindAction, K2Node_Event_ListItemObject) == 0x000008, "Member 'PreviewUnbindAction_C_ExecuteUbergraph_PreviewUnbindAction::K2Node_Event_ListItemObject' has a wrong offset!");
static_assert(offsetof(PreviewUnbindAction_C_ExecuteUbergraph_PreviewUnbindAction, K2Node_Event_bIsExpanded) == 0x000010, "Member 'PreviewUnbindAction_C_ExecuteUbergraph_PreviewUnbindAction::K2Node_Event_bIsExpanded' has a wrong offset!");
static_assert(offsetof(PreviewUnbindAction_C_ExecuteUbergraph_PreviewUnbindAction, K2Node_Event_bIsSelected) == 0x000011, "Member 'PreviewUnbindAction_C_ExecuteUbergraph_PreviewUnbindAction::K2Node_Event_bIsSelected' has a wrong offset!");

// Function PreviewUnbindAction.PreviewUnbindAction_C.OnListItemObjectSet
// 0x0008 (0x0008 - 0x0000)
struct PreviewUnbindAction_C_OnListItemObjectSet final
{
public:
	class UObject*                                ListItemObject;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PreviewUnbindAction_C_OnListItemObjectSet) == 0x000008, "Wrong alignment on PreviewUnbindAction_C_OnListItemObjectSet");
static_assert(sizeof(PreviewUnbindAction_C_OnListItemObjectSet) == 0x000008, "Wrong size on PreviewUnbindAction_C_OnListItemObjectSet");
static_assert(offsetof(PreviewUnbindAction_C_OnListItemObjectSet, ListItemObject) == 0x000000, "Member 'PreviewUnbindAction_C_OnListItemObjectSet::ListItemObject' has a wrong offset!");

// Function PreviewUnbindAction.PreviewUnbindAction_C.BP_OnItemSelectionChanged
// 0x0001 (0x0001 - 0x0000)
struct PreviewUnbindAction_C_BP_OnItemSelectionChanged final
{
public:
	bool                                          bIsSelected;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PreviewUnbindAction_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong alignment on PreviewUnbindAction_C_BP_OnItemSelectionChanged");
static_assert(sizeof(PreviewUnbindAction_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong size on PreviewUnbindAction_C_BP_OnItemSelectionChanged");
static_assert(offsetof(PreviewUnbindAction_C_BP_OnItemSelectionChanged, bIsSelected) == 0x000000, "Member 'PreviewUnbindAction_C_BP_OnItemSelectionChanged::bIsSelected' has a wrong offset!");

// Function PreviewUnbindAction.PreviewUnbindAction_C.BP_OnItemExpansionChanged
// 0x0001 (0x0001 - 0x0000)
struct PreviewUnbindAction_C_BP_OnItemExpansionChanged final
{
public:
	bool                                          bIsExpanded;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PreviewUnbindAction_C_BP_OnItemExpansionChanged) == 0x000001, "Wrong alignment on PreviewUnbindAction_C_BP_OnItemExpansionChanged");
static_assert(sizeof(PreviewUnbindAction_C_BP_OnItemExpansionChanged) == 0x000001, "Wrong size on PreviewUnbindAction_C_BP_OnItemExpansionChanged");
static_assert(offsetof(PreviewUnbindAction_C_BP_OnItemExpansionChanged, bIsExpanded) == 0x000000, "Member 'PreviewUnbindAction_C_BP_OnItemExpansionChanged::bIsExpanded' has a wrong offset!");

}
