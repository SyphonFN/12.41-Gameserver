#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChallengeInGameTreeEntry_Challenge

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function ChallengeInGameTreeEntry_Challenge.ChallengeInGameTreeEntry_Challenge_C.ExecuteUbergraph_ChallengeInGameTreeEntry_Challenge
// 0x0160 (0x0160 - 0x0000)
struct ChallengeInGameTreeEntry_Challenge_C_ExecuteUbergraph_ChallengeInGameTreeEntry_Challenge final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CE3[0x2];                                     // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_1;                             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6CE4[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button;                 // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsPartyAssistEnabled;                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CE5[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0034(0x0038)(IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CE6[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerEvent                          K2Node_Event_MouseEvent_1;                         // 0x0070(0x0070)(ConstParm)
	struct FPointerEvent                          K2Node_Event_MouseEvent;                           // 0x00E0(0x0070)(ConstParm)
	bool                                          K2Node_Event_bIsComplete;                          // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bIsLocked;                            // 0x0151(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bCompact;                             // 0x0152(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_HideRewards;                          // 0x0153(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0154(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6CE7[0x3];                                     // 0x0155(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default_1;                           // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x015C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x015D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChallengeInGameTreeEntry_Challenge_C_ExecuteUbergraph_ChallengeInGameTreeEntry_Challenge) == 0x000008, "Wrong alignment on ChallengeInGameTreeEntry_Challenge_C_ExecuteUbergraph_ChallengeInGameTreeEntry_Challenge");
static_assert(sizeof(ChallengeInGameTreeEntry_Challenge_C_ExecuteUbergraph_ChallengeInGameTreeEntry_Challenge) == 0x000160, "Wrong size on ChallengeInGameTreeEntry_Challenge_C_ExecuteUbergraph_ChallengeInGameTreeEntry_Challenge");
static_assert(offsetof(ChallengeInGameTreeEntry_Challenge_C_ExecuteUbergraph_ChallengeInGameTreeEntry_Challenge, EntryPoint) == 0x000000, "Member 'ChallengeInGameTreeEntry_Challenge_C_ExecuteUbergraph_ChallengeInGameTreeEntry_Challenge::EntryPoint' has a wrong offset!");
static_assert(offsetof(ChallengeInGameTreeEntry_Challenge_C_ExecuteUbergraph_ChallengeInGameTreeEntry_Challenge, Temp_bool_Variable) == 0x000004, "Member 'ChallengeInGameTreeEntry_Challenge_C_ExecuteUbergraph_ChallengeInGameTreeEntry_Challenge::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ChallengeInGameTreeEntry_Challenge_C_ExecuteUbergraph_ChallengeInGameTreeEntry_Challenge, Temp_byte_Variable) == 0x000005, "Member 'ChallengeInGameTreeEntry_Challenge_C_ExecuteUbergraph_ChallengeInGameTreeEntry_Challenge::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ChallengeInGameTreeEntry_Challenge_C_ExecuteUbergraph_ChallengeInGameTreeEntry_Challenge, Temp_bool_Variable_1) == 0x000006, "Member 'ChallengeInGameTreeEntry_Challenge_C_ExecuteUbergraph_ChallengeInGameTreeEntry_Challenge::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(ChallengeInGameTreeEntry_Challenge_C_ExecuteUbergraph_ChallengeInGameTreeEntry_Challenge, Temp_byte_Variable_1) == 0x000007, "Member 'ChallengeInGameTreeEntry_Challenge_C_ExecuteUbergraph_ChallengeInGameTreeEntry_Challenge::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ChallengeInGameTreeEntry_Challenge_C_ExecuteUbergraph_ChallengeInGameTreeEntry_Challenge, Temp_byte_Variable_2) == 0x000008, "Member 'ChallengeInGameTreeEntry_Challenge_C_ExecuteUbergraph_ChallengeInGameTreeEntry_Challenge::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(ChallengeInGameTreeEntry_Challenge_C_ExecuteUbergraph_ChallengeInGameTreeEntry_Challenge, Temp_bool_Variable_2) == 0x000009, "Member 'ChallengeInGameTreeEntry_Challenge_C_ExecuteUbergraph_ChallengeInGameTreeEntry_Challenge::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(ChallengeInGameTreeEntry_Challenge_C_ExecuteUbergraph_ChallengeInGameTreeEntry_Challenge, Temp_float_Variable) == 0x00000C, "Member 'ChallengeInGameTreeEntry_Challenge_C_ExecuteUbergraph_ChallengeInGameTreeEntry_Challenge::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(ChallengeInGameTreeEntry_Challenge_C_ExecuteUbergraph_ChallengeInGameTreeEntry_Challenge, Temp_float_Variable_1) == 0x000010, "Member 'ChallengeInGameTreeEntry_Challenge_C_ExecuteUbergraph_ChallengeInGameTreeEntry_Challenge::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(ChallengeInGameTreeEntry_Challenge_C_ExecuteUbergraph_ChallengeInGameTreeEntry_Challenge, CallFunc_PlayAnimationForward_ReturnValue) == 0x000018, "Member 'ChallengeInGameTreeEntry_Challenge_C_ExecuteUbergraph_ChallengeInGameTreeEntry_Challenge::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeInGameTreeEntry_Challenge_C_ExecuteUbergraph_ChallengeInGameTreeEntry_Challenge, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000020, "Member 'ChallengeInGameTreeEntry_Challenge_C_ExecuteUbergraph_ChallengeInGameTreeEntry_Challenge::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeInGameTreeEntry_Challenge_C_ExecuteUbergraph_ChallengeInGameTreeEntry_Challenge, K2Node_ComponentBoundEvent_Button) == 0x000028, "Member 'ChallengeInGameTreeEntry_Challenge_C_ExecuteUbergraph_ChallengeInGameTreeEntry_Challenge::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(ChallengeInGameTreeEntry_Challenge_C_ExecuteUbergraph_ChallengeInGameTreeEntry_Challenge, K2Node_Event_bIsPartyAssistEnabled) == 0x000030, "Member 'ChallengeInGameTreeEntry_Challenge_C_ExecuteUbergraph_ChallengeInGameTreeEntry_Challenge::K2Node_Event_bIsPartyAssistEnabled' has a wrong offset!");
static_assert(offsetof(ChallengeInGameTreeEntry_Challenge_C_ExecuteUbergraph_ChallengeInGameTreeEntry_Challenge, K2Node_Event_MyGeometry) == 0x000034, "Member 'ChallengeInGameTreeEntry_Challenge_C_ExecuteUbergraph_ChallengeInGameTreeEntry_Challenge::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(ChallengeInGameTreeEntry_Challenge_C_ExecuteUbergraph_ChallengeInGameTreeEntry_Challenge, K2Node_Event_MouseEvent_1) == 0x000070, "Member 'ChallengeInGameTreeEntry_Challenge_C_ExecuteUbergraph_ChallengeInGameTreeEntry_Challenge::K2Node_Event_MouseEvent_1' has a wrong offset!");
static_assert(offsetof(ChallengeInGameTreeEntry_Challenge_C_ExecuteUbergraph_ChallengeInGameTreeEntry_Challenge, K2Node_Event_MouseEvent) == 0x0000E0, "Member 'ChallengeInGameTreeEntry_Challenge_C_ExecuteUbergraph_ChallengeInGameTreeEntry_Challenge::K2Node_Event_MouseEvent' has a wrong offset!");
static_assert(offsetof(ChallengeInGameTreeEntry_Challenge_C_ExecuteUbergraph_ChallengeInGameTreeEntry_Challenge, K2Node_Event_bIsComplete) == 0x000150, "Member 'ChallengeInGameTreeEntry_Challenge_C_ExecuteUbergraph_ChallengeInGameTreeEntry_Challenge::K2Node_Event_bIsComplete' has a wrong offset!");
static_assert(offsetof(ChallengeInGameTreeEntry_Challenge_C_ExecuteUbergraph_ChallengeInGameTreeEntry_Challenge, K2Node_Event_bIsLocked) == 0x000151, "Member 'ChallengeInGameTreeEntry_Challenge_C_ExecuteUbergraph_ChallengeInGameTreeEntry_Challenge::K2Node_Event_bIsLocked' has a wrong offset!");
static_assert(offsetof(ChallengeInGameTreeEntry_Challenge_C_ExecuteUbergraph_ChallengeInGameTreeEntry_Challenge, K2Node_Event_bCompact) == 0x000152, "Member 'ChallengeInGameTreeEntry_Challenge_C_ExecuteUbergraph_ChallengeInGameTreeEntry_Challenge::K2Node_Event_bCompact' has a wrong offset!");
static_assert(offsetof(ChallengeInGameTreeEntry_Challenge_C_ExecuteUbergraph_ChallengeInGameTreeEntry_Challenge, K2Node_Event_HideRewards) == 0x000153, "Member 'ChallengeInGameTreeEntry_Challenge_C_ExecuteUbergraph_ChallengeInGameTreeEntry_Challenge::K2Node_Event_HideRewards' has a wrong offset!");
static_assert(offsetof(ChallengeInGameTreeEntry_Challenge_C_ExecuteUbergraph_ChallengeInGameTreeEntry_Challenge, K2Node_Select_Default) == 0x000154, "Member 'ChallengeInGameTreeEntry_Challenge_C_ExecuteUbergraph_ChallengeInGameTreeEntry_Challenge::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ChallengeInGameTreeEntry_Challenge_C_ExecuteUbergraph_ChallengeInGameTreeEntry_Challenge, K2Node_Select_Default_1) == 0x000158, "Member 'ChallengeInGameTreeEntry_Challenge_C_ExecuteUbergraph_ChallengeInGameTreeEntry_Challenge::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(ChallengeInGameTreeEntry_Challenge_C_ExecuteUbergraph_ChallengeInGameTreeEntry_Challenge, Temp_byte_Variable_3) == 0x00015C, "Member 'ChallengeInGameTreeEntry_Challenge_C_ExecuteUbergraph_ChallengeInGameTreeEntry_Challenge::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(ChallengeInGameTreeEntry_Challenge_C_ExecuteUbergraph_ChallengeInGameTreeEntry_Challenge, K2Node_Select_Default_2) == 0x00015D, "Member 'ChallengeInGameTreeEntry_Challenge_C_ExecuteUbergraph_ChallengeInGameTreeEntry_Challenge::K2Node_Select_Default_2' has a wrong offset!");

// Function ChallengeInGameTreeEntry_Challenge.ChallengeInGameTreeEntry_Challenge_C.OnChallengeInfoSet
// 0x0004 (0x0004 - 0x0000)
struct ChallengeInGameTreeEntry_Challenge_C_OnChallengeInfoSet final
{
public:
	bool                                          bIsComplete;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bIsLocked;                                         // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bCompact;                                          // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          HideRewards;                                       // 0x0003(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChallengeInGameTreeEntry_Challenge_C_OnChallengeInfoSet) == 0x000001, "Wrong alignment on ChallengeInGameTreeEntry_Challenge_C_OnChallengeInfoSet");
static_assert(sizeof(ChallengeInGameTreeEntry_Challenge_C_OnChallengeInfoSet) == 0x000004, "Wrong size on ChallengeInGameTreeEntry_Challenge_C_OnChallengeInfoSet");
static_assert(offsetof(ChallengeInGameTreeEntry_Challenge_C_OnChallengeInfoSet, bIsComplete) == 0x000000, "Member 'ChallengeInGameTreeEntry_Challenge_C_OnChallengeInfoSet::bIsComplete' has a wrong offset!");
static_assert(offsetof(ChallengeInGameTreeEntry_Challenge_C_OnChallengeInfoSet, bIsLocked) == 0x000001, "Member 'ChallengeInGameTreeEntry_Challenge_C_OnChallengeInfoSet::bIsLocked' has a wrong offset!");
static_assert(offsetof(ChallengeInGameTreeEntry_Challenge_C_OnChallengeInfoSet, bCompact) == 0x000002, "Member 'ChallengeInGameTreeEntry_Challenge_C_OnChallengeInfoSet::bCompact' has a wrong offset!");
static_assert(offsetof(ChallengeInGameTreeEntry_Challenge_C_OnChallengeInfoSet, HideRewards) == 0x000003, "Member 'ChallengeInGameTreeEntry_Challenge_C_OnChallengeInfoSet::HideRewards' has a wrong offset!");

// Function ChallengeInGameTreeEntry_Challenge.ChallengeInGameTreeEntry_Challenge_C.OnMouseLeave
// 0x0070 (0x0070 - 0x0000)
struct ChallengeInGameTreeEntry_Challenge_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;                                        // 0x0000(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(ChallengeInGameTreeEntry_Challenge_C_OnMouseLeave) == 0x000008, "Wrong alignment on ChallengeInGameTreeEntry_Challenge_C_OnMouseLeave");
static_assert(sizeof(ChallengeInGameTreeEntry_Challenge_C_OnMouseLeave) == 0x000070, "Wrong size on ChallengeInGameTreeEntry_Challenge_C_OnMouseLeave");
static_assert(offsetof(ChallengeInGameTreeEntry_Challenge_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'ChallengeInGameTreeEntry_Challenge_C_OnMouseLeave::MouseEvent' has a wrong offset!");

// Function ChallengeInGameTreeEntry_Challenge.ChallengeInGameTreeEntry_Challenge_C.OnMouseEnter
// 0x00A8 (0x00A8 - 0x0000)
struct ChallengeInGameTreeEntry_Challenge_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(ChallengeInGameTreeEntry_Challenge_C_OnMouseEnter) == 0x000008, "Wrong alignment on ChallengeInGameTreeEntry_Challenge_C_OnMouseEnter");
static_assert(sizeof(ChallengeInGameTreeEntry_Challenge_C_OnMouseEnter) == 0x0000A8, "Wrong size on ChallengeInGameTreeEntry_Challenge_C_OnMouseEnter");
static_assert(offsetof(ChallengeInGameTreeEntry_Challenge_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'ChallengeInGameTreeEntry_Challenge_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(ChallengeInGameTreeEntry_Challenge_C_OnMouseEnter, MouseEvent) == 0x000038, "Member 'ChallengeInGameTreeEntry_Challenge_C_OnMouseEnter::MouseEvent' has a wrong offset!");

// Function ChallengeInGameTreeEntry_Challenge.ChallengeInGameTreeEntry_Challenge_C.OnPartyAssistEnabledChanged
// 0x0001 (0x0001 - 0x0000)
struct ChallengeInGameTreeEntry_Challenge_C_OnPartyAssistEnabledChanged final
{
public:
	bool                                          bIsPartyAssistEnabled;                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChallengeInGameTreeEntry_Challenge_C_OnPartyAssistEnabledChanged) == 0x000001, "Wrong alignment on ChallengeInGameTreeEntry_Challenge_C_OnPartyAssistEnabledChanged");
static_assert(sizeof(ChallengeInGameTreeEntry_Challenge_C_OnPartyAssistEnabledChanged) == 0x000001, "Wrong size on ChallengeInGameTreeEntry_Challenge_C_OnPartyAssistEnabledChanged");
static_assert(offsetof(ChallengeInGameTreeEntry_Challenge_C_OnPartyAssistEnabledChanged, bIsPartyAssistEnabled) == 0x000000, "Member 'ChallengeInGameTreeEntry_Challenge_C_OnPartyAssistEnabledChanged::bIsPartyAssistEnabled' has a wrong offset!");

// Function ChallengeInGameTreeEntry_Challenge.ChallengeInGameTreeEntry_Challenge_C.BndEvt__Button_PartyAssist_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ChallengeInGameTreeEntry_Challenge_C_BndEvt__Button_PartyAssist_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChallengeInGameTreeEntry_Challenge_C_BndEvt__Button_PartyAssist_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on ChallengeInGameTreeEntry_Challenge_C_BndEvt__Button_PartyAssist_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(ChallengeInGameTreeEntry_Challenge_C_BndEvt__Button_PartyAssist_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on ChallengeInGameTreeEntry_Challenge_C_BndEvt__Button_PartyAssist_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(ChallengeInGameTreeEntry_Challenge_C_BndEvt__Button_PartyAssist_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'ChallengeInGameTreeEntry_Challenge_C_BndEvt__Button_PartyAssist_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

}

