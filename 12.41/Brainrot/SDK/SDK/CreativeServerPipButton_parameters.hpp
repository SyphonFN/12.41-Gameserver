#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CreativeServerPipButton

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CommonInput_structs.hpp"
#include "UMG_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function CreativeServerPipButton.CreativeServerPipButton_C.ExecuteUbergraph_CreativeServerPipButton
// 0x0028 (0x0028 - 0x0000)
struct CreativeServerPipButton_C_ExecuteUbergraph_CreativeServerPipButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAnyChildren_ReturnValue;               // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_bUsingGamepad;          // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D29[0x5];                                     // 0x000B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    K2Node_Event_NewTriggeredAction;                   // 0x0010(0x0010)(ConstParm, NoDestructor)
	float                                         K2Node_Event_HeldPercent;                          // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CreativeServerPipButton_C_ExecuteUbergraph_CreativeServerPipButton) == 0x000008, "Wrong alignment on CreativeServerPipButton_C_ExecuteUbergraph_CreativeServerPipButton");
static_assert(sizeof(CreativeServerPipButton_C_ExecuteUbergraph_CreativeServerPipButton) == 0x000028, "Wrong size on CreativeServerPipButton_C_ExecuteUbergraph_CreativeServerPipButton");
static_assert(offsetof(CreativeServerPipButton_C_ExecuteUbergraph_CreativeServerPipButton, EntryPoint) == 0x000000, "Member 'CreativeServerPipButton_C_ExecuteUbergraph_CreativeServerPipButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(CreativeServerPipButton_C_ExecuteUbergraph_CreativeServerPipButton, Temp_byte_Variable) == 0x000004, "Member 'CreativeServerPipButton_C_ExecuteUbergraph_CreativeServerPipButton::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CreativeServerPipButton_C_ExecuteUbergraph_CreativeServerPipButton, Temp_byte_Variable_1) == 0x000005, "Member 'CreativeServerPipButton_C_ExecuteUbergraph_CreativeServerPipButton::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CreativeServerPipButton_C_ExecuteUbergraph_CreativeServerPipButton, K2Node_Event_IsDesignTime) == 0x000006, "Member 'CreativeServerPipButton_C_ExecuteUbergraph_CreativeServerPipButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(CreativeServerPipButton_C_ExecuteUbergraph_CreativeServerPipButton, CallFunc_HasAnyChildren_ReturnValue) == 0x000007, "Member 'CreativeServerPipButton_C_ExecuteUbergraph_CreativeServerPipButton::CallFunc_HasAnyChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreativeServerPipButton_C_ExecuteUbergraph_CreativeServerPipButton, Temp_bool_Variable) == 0x000008, "Member 'CreativeServerPipButton_C_ExecuteUbergraph_CreativeServerPipButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CreativeServerPipButton_C_ExecuteUbergraph_CreativeServerPipButton, K2Node_ComponentBoundEvent_bUsingGamepad) == 0x000009, "Member 'CreativeServerPipButton_C_ExecuteUbergraph_CreativeServerPipButton::K2Node_ComponentBoundEvent_bUsingGamepad' has a wrong offset!");
static_assert(offsetof(CreativeServerPipButton_C_ExecuteUbergraph_CreativeServerPipButton, K2Node_Select_Default) == 0x00000A, "Member 'CreativeServerPipButton_C_ExecuteUbergraph_CreativeServerPipButton::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CreativeServerPipButton_C_ExecuteUbergraph_CreativeServerPipButton, K2Node_Event_NewTriggeredAction) == 0x000010, "Member 'CreativeServerPipButton_C_ExecuteUbergraph_CreativeServerPipButton::K2Node_Event_NewTriggeredAction' has a wrong offset!");
static_assert(offsetof(CreativeServerPipButton_C_ExecuteUbergraph_CreativeServerPipButton, K2Node_Event_HeldPercent) == 0x000020, "Member 'CreativeServerPipButton_C_ExecuteUbergraph_CreativeServerPipButton::K2Node_Event_HeldPercent' has a wrong offset!");

// Function CreativeServerPipButton.CreativeServerPipButton_C.OnActionProgress
// 0x0004 (0x0004 - 0x0000)
struct CreativeServerPipButton_C_OnActionProgress final
{
public:
	float                                         HeldPercent;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CreativeServerPipButton_C_OnActionProgress) == 0x000004, "Wrong alignment on CreativeServerPipButton_C_OnActionProgress");
static_assert(sizeof(CreativeServerPipButton_C_OnActionProgress) == 0x000004, "Wrong size on CreativeServerPipButton_C_OnActionProgress");
static_assert(offsetof(CreativeServerPipButton_C_OnActionProgress, HeldPercent) == 0x000000, "Member 'CreativeServerPipButton_C_OnActionProgress::HeldPercent' has a wrong offset!");

// Function CreativeServerPipButton.CreativeServerPipButton_C.OnTriggeredInputActionChanged
// 0x0010 (0x0010 - 0x0000)
struct CreativeServerPipButton_C_OnTriggeredInputActionChanged final
{
public:
	struct FDataTableRowHandle                    NewTriggeredAction;                                // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(CreativeServerPipButton_C_OnTriggeredInputActionChanged) == 0x000008, "Wrong alignment on CreativeServerPipButton_C_OnTriggeredInputActionChanged");
static_assert(sizeof(CreativeServerPipButton_C_OnTriggeredInputActionChanged) == 0x000010, "Wrong size on CreativeServerPipButton_C_OnTriggeredInputActionChanged");
static_assert(offsetof(CreativeServerPipButton_C_OnTriggeredInputActionChanged, NewTriggeredAction) == 0x000000, "Member 'CreativeServerPipButton_C_OnTriggeredInputActionChanged::NewTriggeredAction' has a wrong offset!");

// Function CreativeServerPipButton.CreativeServerPipButton_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct CreativeServerPipButton_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature final
{
public:
	bool                                          bUsingGamepad;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CreativeServerPipButton_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature) == 0x000001, "Wrong alignment on CreativeServerPipButton_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature");
static_assert(sizeof(CreativeServerPipButton_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature) == 0x000001, "Wrong size on CreativeServerPipButton_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature");
static_assert(offsetof(CreativeServerPipButton_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature, bUsingGamepad) == 0x000000, "Member 'CreativeServerPipButton_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature::bUsingGamepad' has a wrong offset!");

// Function CreativeServerPipButton.CreativeServerPipButton_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct CreativeServerPipButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CreativeServerPipButton_C_PreConstruct) == 0x000001, "Wrong alignment on CreativeServerPipButton_C_PreConstruct");
static_assert(sizeof(CreativeServerPipButton_C_PreConstruct) == 0x000001, "Wrong size on CreativeServerPipButton_C_PreConstruct");
static_assert(offsetof(CreativeServerPipButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'CreativeServerPipButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function CreativeServerPipButton.CreativeServerPipButton_C.UpdateTextAndStyle
// 0x0010 (0x0010 - 0x0000)
struct CreativeServerPipButton_C_UpdateTextAndStyle final
{
public:
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue;                   // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;          // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CreativeServerPipButton_C_UpdateTextAndStyle) == 0x000008, "Wrong alignment on CreativeServerPipButton_C_UpdateTextAndStyle");
static_assert(sizeof(CreativeServerPipButton_C_UpdateTextAndStyle) == 0x000010, "Wrong size on CreativeServerPipButton_C_UpdateTextAndStyle");
static_assert(offsetof(CreativeServerPipButton_C_UpdateTextAndStyle, CallFunc_GetContext_ReturnValue) == 0x000000, "Member 'CreativeServerPipButton_C_UpdateTextAndStyle::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreativeServerPipButton_C_UpdateTextAndStyle, CallFunc_GetCurrentInputType_ReturnValue) == 0x000008, "Member 'CreativeServerPipButton_C_UpdateTextAndStyle::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreativeServerPipButton_C_UpdateTextAndStyle, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000009, "Member 'CreativeServerPipButton_C_UpdateTextAndStyle::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function CreativeServerPipButton.CreativeServerPipButton_C.UpdateStyle
// 0x0020 (0x0020 - 0x0000)
struct CreativeServerPipButton_C_UpdateStyle final
{
public:
	bool                                          bUsingGamepad;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D2A[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   ActionText;                                        // 0x0008(0x0018)(Edit, BlueprintVisible)
};
static_assert(alignof(CreativeServerPipButton_C_UpdateStyle) == 0x000008, "Wrong alignment on CreativeServerPipButton_C_UpdateStyle");
static_assert(sizeof(CreativeServerPipButton_C_UpdateStyle) == 0x000020, "Wrong size on CreativeServerPipButton_C_UpdateStyle");
static_assert(offsetof(CreativeServerPipButton_C_UpdateStyle, bUsingGamepad) == 0x000000, "Member 'CreativeServerPipButton_C_UpdateStyle::bUsingGamepad' has a wrong offset!");
static_assert(offsetof(CreativeServerPipButton_C_UpdateStyle, ActionText) == 0x000008, "Member 'CreativeServerPipButton_C_UpdateStyle::ActionText' has a wrong offset!");

// Function CreativeServerPipButton.CreativeServerPipButton_C.UpdateInputActionLayout
// 0x0120 (0x0120 - 0x0000)
struct CreativeServerPipButton_C_UpdateInputActionLayout final
{
public:
	struct FSlateBrush                            RimBrush;                                          // 0x0000(0x0088)(Edit, BlueprintVisible)
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0088(0x0088)()
	class UOverlaySlot*                           K2Node_DynamicCast_AsOverlay_Slot;                 // 0x0110(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CreativeServerPipButton_C_UpdateInputActionLayout) == 0x000008, "Wrong alignment on CreativeServerPipButton_C_UpdateInputActionLayout");
static_assert(sizeof(CreativeServerPipButton_C_UpdateInputActionLayout) == 0x000120, "Wrong size on CreativeServerPipButton_C_UpdateInputActionLayout");
static_assert(offsetof(CreativeServerPipButton_C_UpdateInputActionLayout, RimBrush) == 0x000000, "Member 'CreativeServerPipButton_C_UpdateInputActionLayout::RimBrush' has a wrong offset!");
static_assert(offsetof(CreativeServerPipButton_C_UpdateInputActionLayout, K2Node_MakeStruct_SlateBrush) == 0x000088, "Member 'CreativeServerPipButton_C_UpdateInputActionLayout::K2Node_MakeStruct_SlateBrush' has a wrong offset!");
static_assert(offsetof(CreativeServerPipButton_C_UpdateInputActionLayout, K2Node_DynamicCast_AsOverlay_Slot) == 0x000110, "Member 'CreativeServerPipButton_C_UpdateInputActionLayout::K2Node_DynamicCast_AsOverlay_Slot' has a wrong offset!");
static_assert(offsetof(CreativeServerPipButton_C_UpdateInputActionLayout, K2Node_DynamicCast_bSuccess) == 0x000118, "Member 'CreativeServerPipButton_C_UpdateInputActionLayout::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CreativeServerPipButton_C_UpdateInputActionLayout, CallFunc_IsValid_ReturnValue) == 0x000119, "Member 'CreativeServerPipButton_C_UpdateInputActionLayout::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}
