#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SpatialHenchmanFactionEgo

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteUI_structs.hpp"


namespace SDK::Params
{

// Function SpatialHenchmanFactionEgo.SpatialHenchmanFactionEgo_C.ExecuteUbergraph_SpatialHenchmanFactionEgo
// 0x0140 (0x0140 - 0x0000)
struct SpatialHenchmanFactionEgo_C_ExecuteUbergraph_SpatialHenchmanFactionEgo final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42D2[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button;                 // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPointerEvent                          K2Node_Event_MouseEvent_1;                         // 0x0028(0x0070)(ConstParm)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0098(0x0038)(IsPlainOldData, NoDestructor)
	struct FPointerEvent                          K2Node_Event_MouseEvent;                           // 0x00D0(0x0070)(ConstParm)
};
static_assert(alignof(SpatialHenchmanFactionEgo_C_ExecuteUbergraph_SpatialHenchmanFactionEgo) == 0x000008, "Wrong alignment on SpatialHenchmanFactionEgo_C_ExecuteUbergraph_SpatialHenchmanFactionEgo");
static_assert(sizeof(SpatialHenchmanFactionEgo_C_ExecuteUbergraph_SpatialHenchmanFactionEgo) == 0x000140, "Wrong size on SpatialHenchmanFactionEgo_C_ExecuteUbergraph_SpatialHenchmanFactionEgo");
static_assert(offsetof(SpatialHenchmanFactionEgo_C_ExecuteUbergraph_SpatialHenchmanFactionEgo, EntryPoint) == 0x000000, "Member 'SpatialHenchmanFactionEgo_C_ExecuteUbergraph_SpatialHenchmanFactionEgo::EntryPoint' has a wrong offset!");
static_assert(offsetof(SpatialHenchmanFactionEgo_C_ExecuteUbergraph_SpatialHenchmanFactionEgo, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000008, "Member 'SpatialHenchmanFactionEgo_C_ExecuteUbergraph_SpatialHenchmanFactionEgo::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpatialHenchmanFactionEgo_C_ExecuteUbergraph_SpatialHenchmanFactionEgo, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'SpatialHenchmanFactionEgo_C_ExecuteUbergraph_SpatialHenchmanFactionEgo::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpatialHenchmanFactionEgo_C_ExecuteUbergraph_SpatialHenchmanFactionEgo, CallFunc_PlayAnimationForward_ReturnValue) == 0x000018, "Member 'SpatialHenchmanFactionEgo_C_ExecuteUbergraph_SpatialHenchmanFactionEgo::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpatialHenchmanFactionEgo_C_ExecuteUbergraph_SpatialHenchmanFactionEgo, K2Node_ComponentBoundEvent_Button) == 0x000020, "Member 'SpatialHenchmanFactionEgo_C_ExecuteUbergraph_SpatialHenchmanFactionEgo::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(SpatialHenchmanFactionEgo_C_ExecuteUbergraph_SpatialHenchmanFactionEgo, K2Node_Event_MouseEvent_1) == 0x000028, "Member 'SpatialHenchmanFactionEgo_C_ExecuteUbergraph_SpatialHenchmanFactionEgo::K2Node_Event_MouseEvent_1' has a wrong offset!");
static_assert(offsetof(SpatialHenchmanFactionEgo_C_ExecuteUbergraph_SpatialHenchmanFactionEgo, K2Node_Event_MyGeometry) == 0x000098, "Member 'SpatialHenchmanFactionEgo_C_ExecuteUbergraph_SpatialHenchmanFactionEgo::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(SpatialHenchmanFactionEgo_C_ExecuteUbergraph_SpatialHenchmanFactionEgo, K2Node_Event_MouseEvent) == 0x0000D0, "Member 'SpatialHenchmanFactionEgo_C_ExecuteUbergraph_SpatialHenchmanFactionEgo::K2Node_Event_MouseEvent' has a wrong offset!");

// Function SpatialHenchmanFactionEgo.SpatialHenchmanFactionEgo_C.OnMouseEnter
// 0x00A8 (0x00A8 - 0x0000)
struct SpatialHenchmanFactionEgo_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(SpatialHenchmanFactionEgo_C_OnMouseEnter) == 0x000008, "Wrong alignment on SpatialHenchmanFactionEgo_C_OnMouseEnter");
static_assert(sizeof(SpatialHenchmanFactionEgo_C_OnMouseEnter) == 0x0000A8, "Wrong size on SpatialHenchmanFactionEgo_C_OnMouseEnter");
static_assert(offsetof(SpatialHenchmanFactionEgo_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'SpatialHenchmanFactionEgo_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(SpatialHenchmanFactionEgo_C_OnMouseEnter, MouseEvent) == 0x000038, "Member 'SpatialHenchmanFactionEgo_C_OnMouseEnter::MouseEvent' has a wrong offset!");

// Function SpatialHenchmanFactionEgo.SpatialHenchmanFactionEgo_C.OnMouseLeave
// 0x0070 (0x0070 - 0x0000)
struct SpatialHenchmanFactionEgo_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;                                        // 0x0000(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(SpatialHenchmanFactionEgo_C_OnMouseLeave) == 0x000008, "Wrong alignment on SpatialHenchmanFactionEgo_C_OnMouseLeave");
static_assert(sizeof(SpatialHenchmanFactionEgo_C_OnMouseLeave) == 0x000070, "Wrong size on SpatialHenchmanFactionEgo_C_OnMouseLeave");
static_assert(offsetof(SpatialHenchmanFactionEgo_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'SpatialHenchmanFactionEgo_C_OnMouseLeave::MouseEvent' has a wrong offset!");

// Function SpatialHenchmanFactionEgo.SpatialHenchmanFactionEgo_C.BndEvt__SpatialHenchmenViewMoreButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct SpatialHenchmanFactionEgo_C_BndEvt__SpatialHenchmenViewMoreButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SpatialHenchmanFactionEgo_C_BndEvt__SpatialHenchmenViewMoreButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on SpatialHenchmanFactionEgo_C_BndEvt__SpatialHenchmenViewMoreButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(SpatialHenchmanFactionEgo_C_BndEvt__SpatialHenchmenViewMoreButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on SpatialHenchmanFactionEgo_C_BndEvt__SpatialHenchmenViewMoreButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(SpatialHenchmanFactionEgo_C_BndEvt__SpatialHenchmenViewMoreButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'SpatialHenchmanFactionEgo_C_BndEvt__SpatialHenchmenViewMoreButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function SpatialHenchmanFactionEgo.SpatialHenchmanFactionEgo_C.InitForVariant
// 0x0038 (0x0038 - 0x0000)
struct SpatialHenchmanFactionEgo_C_InitForVariant final
{
public:
	class UFortVariantTokenType*                  Variant;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMissionState                                 MissionState;                                      // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMissionState                                 OtherMissionState;                                 // 0x0009(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_42D3[0x2];                                     // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetDisplayName_ReturnValue;               // 0x0010(0x0018)()
	EMissionState                                 Temp_byte_Variable;                                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42D4[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Select_Default;                             // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SpatialHenchmanFactionEgo_C_InitForVariant) == 0x000008, "Wrong alignment on SpatialHenchmanFactionEgo_C_InitForVariant");
static_assert(sizeof(SpatialHenchmanFactionEgo_C_InitForVariant) == 0x000038, "Wrong size on SpatialHenchmanFactionEgo_C_InitForVariant");
static_assert(offsetof(SpatialHenchmanFactionEgo_C_InitForVariant, Variant) == 0x000000, "Member 'SpatialHenchmanFactionEgo_C_InitForVariant::Variant' has a wrong offset!");
static_assert(offsetof(SpatialHenchmanFactionEgo_C_InitForVariant, MissionState) == 0x000008, "Member 'SpatialHenchmanFactionEgo_C_InitForVariant::MissionState' has a wrong offset!");
static_assert(offsetof(SpatialHenchmanFactionEgo_C_InitForVariant, OtherMissionState) == 0x000009, "Member 'SpatialHenchmanFactionEgo_C_InitForVariant::OtherMissionState' has a wrong offset!");
static_assert(offsetof(SpatialHenchmanFactionEgo_C_InitForVariant, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00000A, "Member 'SpatialHenchmanFactionEgo_C_InitForVariant::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpatialHenchmanFactionEgo_C_InitForVariant, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00000B, "Member 'SpatialHenchmanFactionEgo_C_InitForVariant::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SpatialHenchmanFactionEgo_C_InitForVariant, CallFunc_IsValid_ReturnValue) == 0x00000C, "Member 'SpatialHenchmanFactionEgo_C_InitForVariant::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpatialHenchmanFactionEgo_C_InitForVariant, CallFunc_BooleanAND_ReturnValue) == 0x00000D, "Member 'SpatialHenchmanFactionEgo_C_InitForVariant::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpatialHenchmanFactionEgo_C_InitForVariant, CallFunc_GetDisplayName_ReturnValue) == 0x000010, "Member 'SpatialHenchmanFactionEgo_C_InitForVariant::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpatialHenchmanFactionEgo_C_InitForVariant, Temp_byte_Variable) == 0x000028, "Member 'SpatialHenchmanFactionEgo_C_InitForVariant::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(SpatialHenchmanFactionEgo_C_InitForVariant, K2Node_Select_Default) == 0x000030, "Member 'SpatialHenchmanFactionEgo_C_InitForVariant::K2Node_Select_Default' has a wrong offset!");

// Function SpatialHenchmanFactionEgo.SpatialHenchmanFactionEgo_C.OnFocusReceived
// 0x01B8 (0x01B8 - 0x0000)
struct SpatialHenchmanFactionEgo_C_OnFocusReceived final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                            InFocusEvent;                                      // 0x0038(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                            ReturnValue;                                       // 0x0040(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            K2Node_MakeStruct_EventReply;                      // 0x00F8(0x00B8)()
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SpatialHenchmanFactionEgo_C_OnFocusReceived) == 0x000008, "Wrong alignment on SpatialHenchmanFactionEgo_C_OnFocusReceived");
static_assert(sizeof(SpatialHenchmanFactionEgo_C_OnFocusReceived) == 0x0001B8, "Wrong size on SpatialHenchmanFactionEgo_C_OnFocusReceived");
static_assert(offsetof(SpatialHenchmanFactionEgo_C_OnFocusReceived, MyGeometry) == 0x000000, "Member 'SpatialHenchmanFactionEgo_C_OnFocusReceived::MyGeometry' has a wrong offset!");
static_assert(offsetof(SpatialHenchmanFactionEgo_C_OnFocusReceived, InFocusEvent) == 0x000038, "Member 'SpatialHenchmanFactionEgo_C_OnFocusReceived::InFocusEvent' has a wrong offset!");
static_assert(offsetof(SpatialHenchmanFactionEgo_C_OnFocusReceived, ReturnValue) == 0x000040, "Member 'SpatialHenchmanFactionEgo_C_OnFocusReceived::ReturnValue' has a wrong offset!");
static_assert(offsetof(SpatialHenchmanFactionEgo_C_OnFocusReceived, K2Node_MakeStruct_EventReply) == 0x0000F8, "Member 'SpatialHenchmanFactionEgo_C_OnFocusReceived::K2Node_MakeStruct_EventReply' has a wrong offset!");
static_assert(offsetof(SpatialHenchmanFactionEgo_C_OnFocusReceived, CallFunc_GetOwningPlayer_ReturnValue) == 0x0001B0, "Member 'SpatialHenchmanFactionEgo_C_OnFocusReceived::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");

}

