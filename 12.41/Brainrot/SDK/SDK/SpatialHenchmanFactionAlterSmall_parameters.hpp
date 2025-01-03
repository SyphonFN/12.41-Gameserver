#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SpatialHenchmanFactionAlterSmall

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function SpatialHenchmanFactionAlterSmall.SpatialHenchmanFactionAlterSmall_C.ExecuteUbergraph_SpatialHenchmanFactionAlterSmall
// 0x0180 (0x0180 - 0x0000)
struct SpatialHenchmanFactionAlterSmall_C_ExecuteUbergraph_SpatialHenchmanFactionAlterSmall final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFocusEvent                            K2Node_Event_InFocusEvent;                         // 0x0004(0x0008)(NoDestructor)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortGameStateComponent_EventLevel*> CallFunc_K2_GetComponentsByClass_ReturnValue;      // 0x0020(0x0010)(ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	class UFortGameStateComponent_EventLevel*     CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x004C(0x0038)(IsPlainOldData, NoDestructor)
	uint8                                         Pad_7001[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerEvent                          K2Node_Event_MouseEvent_1;                         // 0x0088(0x0070)(ConstParm)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7002[0x7];                                     // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerEvent                          K2Node_Event_MouseEvent;                           // 0x0100(0x0070)(ConstParm)
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button;                 // 0x0170(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;       // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SpatialHenchmanFactionAlterSmall_C_ExecuteUbergraph_SpatialHenchmanFactionAlterSmall) == 0x000008, "Wrong alignment on SpatialHenchmanFactionAlterSmall_C_ExecuteUbergraph_SpatialHenchmanFactionAlterSmall");
static_assert(sizeof(SpatialHenchmanFactionAlterSmall_C_ExecuteUbergraph_SpatialHenchmanFactionAlterSmall) == 0x000180, "Wrong size on SpatialHenchmanFactionAlterSmall_C_ExecuteUbergraph_SpatialHenchmanFactionAlterSmall");
static_assert(offsetof(SpatialHenchmanFactionAlterSmall_C_ExecuteUbergraph_SpatialHenchmanFactionAlterSmall, EntryPoint) == 0x000000, "Member 'SpatialHenchmanFactionAlterSmall_C_ExecuteUbergraph_SpatialHenchmanFactionAlterSmall::EntryPoint' has a wrong offset!");
static_assert(offsetof(SpatialHenchmanFactionAlterSmall_C_ExecuteUbergraph_SpatialHenchmanFactionAlterSmall, K2Node_Event_InFocusEvent) == 0x000004, "Member 'SpatialHenchmanFactionAlterSmall_C_ExecuteUbergraph_SpatialHenchmanFactionAlterSmall::K2Node_Event_InFocusEvent' has a wrong offset!");
static_assert(offsetof(SpatialHenchmanFactionAlterSmall_C_ExecuteUbergraph_SpatialHenchmanFactionAlterSmall, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'SpatialHenchmanFactionAlterSmall_C_ExecuteUbergraph_SpatialHenchmanFactionAlterSmall::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(SpatialHenchmanFactionAlterSmall_C_ExecuteUbergraph_SpatialHenchmanFactionAlterSmall, Temp_int_Array_Index_Variable) == 0x000010, "Member 'SpatialHenchmanFactionAlterSmall_C_ExecuteUbergraph_SpatialHenchmanFactionAlterSmall::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(SpatialHenchmanFactionAlterSmall_C_ExecuteUbergraph_SpatialHenchmanFactionAlterSmall, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'SpatialHenchmanFactionAlterSmall_C_ExecuteUbergraph_SpatialHenchmanFactionAlterSmall::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpatialHenchmanFactionAlterSmall_C_ExecuteUbergraph_SpatialHenchmanFactionAlterSmall, CallFunc_GetGameState_ReturnValue) == 0x000018, "Member 'SpatialHenchmanFactionAlterSmall_C_ExecuteUbergraph_SpatialHenchmanFactionAlterSmall::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpatialHenchmanFactionAlterSmall_C_ExecuteUbergraph_SpatialHenchmanFactionAlterSmall, CallFunc_K2_GetComponentsByClass_ReturnValue) == 0x000020, "Member 'SpatialHenchmanFactionAlterSmall_C_ExecuteUbergraph_SpatialHenchmanFactionAlterSmall::CallFunc_K2_GetComponentsByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpatialHenchmanFactionAlterSmall_C_ExecuteUbergraph_SpatialHenchmanFactionAlterSmall, CallFunc_Array_Get_Item) == 0x000030, "Member 'SpatialHenchmanFactionAlterSmall_C_ExecuteUbergraph_SpatialHenchmanFactionAlterSmall::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(SpatialHenchmanFactionAlterSmall_C_ExecuteUbergraph_SpatialHenchmanFactionAlterSmall, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000038, "Member 'SpatialHenchmanFactionAlterSmall_C_ExecuteUbergraph_SpatialHenchmanFactionAlterSmall::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpatialHenchmanFactionAlterSmall_C_ExecuteUbergraph_SpatialHenchmanFactionAlterSmall, CallFunc_PlayAnimationForward_ReturnValue) == 0x000040, "Member 'SpatialHenchmanFactionAlterSmall_C_ExecuteUbergraph_SpatialHenchmanFactionAlterSmall::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpatialHenchmanFactionAlterSmall_C_ExecuteUbergraph_SpatialHenchmanFactionAlterSmall, CallFunc_Array_Length_ReturnValue) == 0x000048, "Member 'SpatialHenchmanFactionAlterSmall_C_ExecuteUbergraph_SpatialHenchmanFactionAlterSmall::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpatialHenchmanFactionAlterSmall_C_ExecuteUbergraph_SpatialHenchmanFactionAlterSmall, K2Node_Event_MyGeometry) == 0x00004C, "Member 'SpatialHenchmanFactionAlterSmall_C_ExecuteUbergraph_SpatialHenchmanFactionAlterSmall::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(SpatialHenchmanFactionAlterSmall_C_ExecuteUbergraph_SpatialHenchmanFactionAlterSmall, K2Node_Event_MouseEvent_1) == 0x000088, "Member 'SpatialHenchmanFactionAlterSmall_C_ExecuteUbergraph_SpatialHenchmanFactionAlterSmall::K2Node_Event_MouseEvent_1' has a wrong offset!");
static_assert(offsetof(SpatialHenchmanFactionAlterSmall_C_ExecuteUbergraph_SpatialHenchmanFactionAlterSmall, CallFunc_Less_IntInt_ReturnValue) == 0x0000F8, "Member 'SpatialHenchmanFactionAlterSmall_C_ExecuteUbergraph_SpatialHenchmanFactionAlterSmall::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpatialHenchmanFactionAlterSmall_C_ExecuteUbergraph_SpatialHenchmanFactionAlterSmall, K2Node_Event_MouseEvent) == 0x000100, "Member 'SpatialHenchmanFactionAlterSmall_C_ExecuteUbergraph_SpatialHenchmanFactionAlterSmall::K2Node_Event_MouseEvent' has a wrong offset!");
static_assert(offsetof(SpatialHenchmanFactionAlterSmall_C_ExecuteUbergraph_SpatialHenchmanFactionAlterSmall, K2Node_ComponentBoundEvent_Button) == 0x000170, "Member 'SpatialHenchmanFactionAlterSmall_C_ExecuteUbergraph_SpatialHenchmanFactionAlterSmall::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(SpatialHenchmanFactionAlterSmall_C_ExecuteUbergraph_SpatialHenchmanFactionAlterSmall, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x000178, "Member 'SpatialHenchmanFactionAlterSmall_C_ExecuteUbergraph_SpatialHenchmanFactionAlterSmall::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");

// Function SpatialHenchmanFactionAlterSmall.SpatialHenchmanFactionAlterSmall_C.OnFocusLost
// 0x0008 (0x0008 - 0x0000)
struct SpatialHenchmanFactionAlterSmall_C_OnFocusLost final
{
public:
	struct FFocusEvent                            InFocusEvent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(SpatialHenchmanFactionAlterSmall_C_OnFocusLost) == 0x000004, "Wrong alignment on SpatialHenchmanFactionAlterSmall_C_OnFocusLost");
static_assert(sizeof(SpatialHenchmanFactionAlterSmall_C_OnFocusLost) == 0x000008, "Wrong size on SpatialHenchmanFactionAlterSmall_C_OnFocusLost");
static_assert(offsetof(SpatialHenchmanFactionAlterSmall_C_OnFocusLost, InFocusEvent) == 0x000000, "Member 'SpatialHenchmanFactionAlterSmall_C_OnFocusLost::InFocusEvent' has a wrong offset!");

// Function SpatialHenchmanFactionAlterSmall.SpatialHenchmanFactionAlterSmall_C.BndEvt__SpatialHenchmenViewMoreButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct SpatialHenchmanFactionAlterSmall_C_BndEvt__SpatialHenchmenViewMoreButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SpatialHenchmanFactionAlterSmall_C_BndEvt__SpatialHenchmenViewMoreButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on SpatialHenchmanFactionAlterSmall_C_BndEvt__SpatialHenchmenViewMoreButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(SpatialHenchmanFactionAlterSmall_C_BndEvt__SpatialHenchmenViewMoreButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on SpatialHenchmanFactionAlterSmall_C_BndEvt__SpatialHenchmenViewMoreButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(SpatialHenchmanFactionAlterSmall_C_BndEvt__SpatialHenchmenViewMoreButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'SpatialHenchmanFactionAlterSmall_C_BndEvt__SpatialHenchmenViewMoreButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function SpatialHenchmanFactionAlterSmall.SpatialHenchmanFactionAlterSmall_C.OnMouseLeave
// 0x0070 (0x0070 - 0x0000)
struct SpatialHenchmanFactionAlterSmall_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;                                        // 0x0000(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(SpatialHenchmanFactionAlterSmall_C_OnMouseLeave) == 0x000008, "Wrong alignment on SpatialHenchmanFactionAlterSmall_C_OnMouseLeave");
static_assert(sizeof(SpatialHenchmanFactionAlterSmall_C_OnMouseLeave) == 0x000070, "Wrong size on SpatialHenchmanFactionAlterSmall_C_OnMouseLeave");
static_assert(offsetof(SpatialHenchmanFactionAlterSmall_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'SpatialHenchmanFactionAlterSmall_C_OnMouseLeave::MouseEvent' has a wrong offset!");

// Function SpatialHenchmanFactionAlterSmall.SpatialHenchmanFactionAlterSmall_C.OnMouseEnter
// 0x00A8 (0x00A8 - 0x0000)
struct SpatialHenchmanFactionAlterSmall_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(SpatialHenchmanFactionAlterSmall_C_OnMouseEnter) == 0x000008, "Wrong alignment on SpatialHenchmanFactionAlterSmall_C_OnMouseEnter");
static_assert(sizeof(SpatialHenchmanFactionAlterSmall_C_OnMouseEnter) == 0x0000A8, "Wrong size on SpatialHenchmanFactionAlterSmall_C_OnMouseEnter");
static_assert(offsetof(SpatialHenchmanFactionAlterSmall_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'SpatialHenchmanFactionAlterSmall_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(SpatialHenchmanFactionAlterSmall_C_OnMouseEnter, MouseEvent) == 0x000038, "Member 'SpatialHenchmanFactionAlterSmall_C_OnMouseEnter::MouseEvent' has a wrong offset!");

}

