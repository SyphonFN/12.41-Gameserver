#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TopBarTabButton

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function TopBarTabButton.TopBarTabButton_C.ExecuteUbergraph_TopBarTabButton
// 0x00E8 (0x00E8 - 0x0000)
struct TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsMobileGame_ReturnValue;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_42D9[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Temp_class_Variable;                               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Temp_class_Variable_1;                             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UCommonButton* Button, bool Selected)> K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsMobileGame_ReturnValue_1;               // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_42DA[0x6];                                     // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UNormalBangWrapper_C*                   K2Node_DynamicCast_AsNormal_Bang_Wrapper;          // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_42DB[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButton*                          K2Node_CustomEvent_Button;                         // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Selected;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_42DC[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0050(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0078(0x0028)()
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bIsSelected;                    // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_42DD[0x6];                                     // 0x00A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 K2Node_Select_Default;                             // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_42DE[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue_1;       // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;       // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_GetCurrentTextStyleClass_ReturnValue;     // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsMobileGame_ReturnValue_2;               // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton) == 0x000008, "Wrong alignment on TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton");
static_assert(sizeof(TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton) == 0x0000E8, "Wrong size on TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton");
static_assert(offsetof(TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton, EntryPoint) == 0x000000, "Member 'TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton, CallFunc_IsMobileGame_ReturnValue) == 0x000004, "Member 'TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton, Temp_bool_Variable) == 0x000005, "Member 'TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton, Temp_class_Variable) == 0x000008, "Member 'TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton, Temp_class_Variable_1) == 0x000010, "Member 'TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton::Temp_class_Variable_1' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton, K2Node_Event_IsDesignTime) == 0x000028, "Member 'TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton, CallFunc_IsMobileGame_ReturnValue_1) == 0x000029, "Member 'TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton::CallFunc_IsMobileGame_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton, K2Node_DynamicCast_AsNormal_Bang_Wrapper) == 0x000030, "Member 'TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton::K2Node_DynamicCast_AsNormal_Bang_Wrapper' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton, K2Node_CustomEvent_Button) == 0x000040, "Member 'TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton::K2Node_CustomEvent_Button' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton, K2Node_CustomEvent_Selected) == 0x000048, "Member 'TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton::K2Node_CustomEvent_Selected' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton, K2Node_MakeStruct_SlateColor) == 0x000050, "Member 'TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton, K2Node_MakeStruct_SlateColor_1) == 0x000078, "Member 'TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton, CallFunc_BooleanOR_ReturnValue) == 0x0000A0, "Member 'TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton, K2Node_CustomEvent_bIsSelected) == 0x0000A1, "Member 'TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton::K2Node_CustomEvent_bIsSelected' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton, K2Node_Select_Default) == 0x0000A8, "Member 'TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton, CallFunc_EqualEqual_BoolBool_ReturnValue) == 0x0000B0, "Member 'TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton::CallFunc_EqualEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton, CallFunc_PlayAnimationForward_ReturnValue) == 0x0000B8, "Member 'TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton, CallFunc_PlayAnimationReverse_ReturnValue) == 0x0000C0, "Member 'TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton, CallFunc_PlayAnimationReverse_ReturnValue_1) == 0x0000C8, "Member 'TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton::CallFunc_PlayAnimationReverse_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x0000D0, "Member 'TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton, CallFunc_GetCurrentTextStyleClass_ReturnValue) == 0x0000D8, "Member 'TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton::CallFunc_GetCurrentTextStyleClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton, CallFunc_IsMobileGame_ReturnValue_2) == 0x0000E0, "Member 'TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton::CallFunc_IsMobileGame_ReturnValue_2' has a wrong offset!");

// Function TopBarTabButton.TopBarTabButton_C.HandleSelectionChangedVisuals
// 0x0001 (0x0001 - 0x0000)
struct TopBarTabButton_C_HandleSelectionChangedVisuals final
{
public:
	bool                                          bIsSelected;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TopBarTabButton_C_HandleSelectionChangedVisuals) == 0x000001, "Wrong alignment on TopBarTabButton_C_HandleSelectionChangedVisuals");
static_assert(sizeof(TopBarTabButton_C_HandleSelectionChangedVisuals) == 0x000001, "Wrong size on TopBarTabButton_C_HandleSelectionChangedVisuals");
static_assert(offsetof(TopBarTabButton_C_HandleSelectionChangedVisuals, bIsSelected) == 0x000000, "Member 'TopBarTabButton_C_HandleSelectionChangedVisuals::bIsSelected' has a wrong offset!");

// Function TopBarTabButton.TopBarTabButton_C.OnSelectedChangedEvent
// 0x0010 (0x0010 - 0x0000)
struct TopBarTabButton_C_OnSelectedChangedEvent final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Param_Selected;                                    // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TopBarTabButton_C_OnSelectedChangedEvent) == 0x000008, "Wrong alignment on TopBarTabButton_C_OnSelectedChangedEvent");
static_assert(sizeof(TopBarTabButton_C_OnSelectedChangedEvent) == 0x000010, "Wrong size on TopBarTabButton_C_OnSelectedChangedEvent");
static_assert(offsetof(TopBarTabButton_C_OnSelectedChangedEvent, Button) == 0x000000, "Member 'TopBarTabButton_C_OnSelectedChangedEvent::Button' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_OnSelectedChangedEvent, Param_Selected) == 0x000008, "Member 'TopBarTabButton_C_OnSelectedChangedEvent::Param_Selected' has a wrong offset!");

// Function TopBarTabButton.TopBarTabButton_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct TopBarTabButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TopBarTabButton_C_PreConstruct) == 0x000001, "Wrong alignment on TopBarTabButton_C_PreConstruct");
static_assert(sizeof(TopBarTabButton_C_PreConstruct) == 0x000001, "Wrong size on TopBarTabButton_C_PreConstruct");
static_assert(offsetof(TopBarTabButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'TopBarTabButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function TopBarTabButton.TopBarTabButton_C.InitializeButtonBorderMID
// 0x0008 (0x0008 - 0x0000)
struct TopBarTabButton_C_InitializeButtonBorderMID final
{
public:
	class UMaterialInstanceDynamic*               CallFunc_GetSingleMaterialStyleMID_ReturnValue;    // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TopBarTabButton_C_InitializeButtonBorderMID) == 0x000008, "Wrong alignment on TopBarTabButton_C_InitializeButtonBorderMID");
static_assert(sizeof(TopBarTabButton_C_InitializeButtonBorderMID) == 0x000008, "Wrong size on TopBarTabButton_C_InitializeButtonBorderMID");
static_assert(offsetof(TopBarTabButton_C_InitializeButtonBorderMID, CallFunc_GetSingleMaterialStyleMID_ReturnValue) == 0x000000, "Member 'TopBarTabButton_C_InitializeButtonBorderMID::CallFunc_GetSingleMaterialStyleMID_ReturnValue' has a wrong offset!");

// Function TopBarTabButton.TopBarTabButton_C.SeedRandomValues
// 0x0010 (0x0010 - 0x0000)
struct TopBarTabButton_C_SeedRandomValues final
{
public:
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue_2;         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue_3;         // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TopBarTabButton_C_SeedRandomValues) == 0x000004, "Wrong alignment on TopBarTabButton_C_SeedRandomValues");
static_assert(sizeof(TopBarTabButton_C_SeedRandomValues) == 0x000010, "Wrong size on TopBarTabButton_C_SeedRandomValues");
static_assert(offsetof(TopBarTabButton_C_SeedRandomValues, CallFunc_RandomFloatInRange_ReturnValue) == 0x000000, "Member 'TopBarTabButton_C_SeedRandomValues::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_SeedRandomValues, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x000004, "Member 'TopBarTabButton_C_SeedRandomValues::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_SeedRandomValues, CallFunc_RandomFloatInRange_ReturnValue_2) == 0x000008, "Member 'TopBarTabButton_C_SeedRandomValues::CallFunc_RandomFloatInRange_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_SeedRandomValues, CallFunc_RandomFloatInRange_ReturnValue_3) == 0x00000C, "Member 'TopBarTabButton_C_SeedRandomValues::CallFunc_RandomFloatInRange_ReturnValue_3' has a wrong offset!");

// Function TopBarTabButton.TopBarTabButton_C.UpdateMIDWithRandomValues
// 0x0001 (0x0001 - 0x0000)
struct TopBarTabButton_C_UpdateMIDWithRandomValues final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TopBarTabButton_C_UpdateMIDWithRandomValues) == 0x000001, "Wrong alignment on TopBarTabButton_C_UpdateMIDWithRandomValues");
static_assert(sizeof(TopBarTabButton_C_UpdateMIDWithRandomValues) == 0x000001, "Wrong size on TopBarTabButton_C_UpdateMIDWithRandomValues");
static_assert(offsetof(TopBarTabButton_C_UpdateMIDWithRandomValues, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'TopBarTabButton_C_UpdateMIDWithRandomValues::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function TopBarTabButton.TopBarTabButton_C.SetText
// 0x0020 (0x0020 - 0x0000)
struct TopBarTabButton_C_SetText final
{
public:
	class FText                                   Param_ButtonText;                                  // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TopBarTabButton_C_SetText) == 0x000008, "Wrong alignment on TopBarTabButton_C_SetText");
static_assert(sizeof(TopBarTabButton_C_SetText) == 0x000020, "Wrong size on TopBarTabButton_C_SetText");
static_assert(offsetof(TopBarTabButton_C_SetText, Param_ButtonText) == 0x000000, "Member 'TopBarTabButton_C_SetText::Param_ButtonText' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_SetText, CallFunc_TextIsEmpty_ReturnValue) == 0x000018, "Member 'TopBarTabButton_C_SetText::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_SetText, CallFunc_Not_PreBool_ReturnValue) == 0x000019, "Member 'TopBarTabButton_C_SetText::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function TopBarTabButton.TopBarTabButton_C.OverrideIcon
// 0x0098 (0x0098 - 0x0000)
struct TopBarTabButton_C_OverrideIcon final
{
public:
	bool                                          Show;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_42DF[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            InSlateBrush;                                      // 0x0008(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          Temp_bool_Variable;                                // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0092(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0093(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TopBarTabButton_C_OverrideIcon) == 0x000008, "Wrong alignment on TopBarTabButton_C_OverrideIcon");
static_assert(sizeof(TopBarTabButton_C_OverrideIcon) == 0x000098, "Wrong size on TopBarTabButton_C_OverrideIcon");
static_assert(offsetof(TopBarTabButton_C_OverrideIcon, Show) == 0x000000, "Member 'TopBarTabButton_C_OverrideIcon::Show' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_OverrideIcon, InSlateBrush) == 0x000008, "Member 'TopBarTabButton_C_OverrideIcon::InSlateBrush' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_OverrideIcon, Temp_bool_Variable) == 0x000090, "Member 'TopBarTabButton_C_OverrideIcon::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_OverrideIcon, Temp_byte_Variable) == 0x000091, "Member 'TopBarTabButton_C_OverrideIcon::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_OverrideIcon, Temp_byte_Variable_1) == 0x000092, "Member 'TopBarTabButton_C_OverrideIcon::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_OverrideIcon, K2Node_Select_Default) == 0x000093, "Member 'TopBarTabButton_C_OverrideIcon::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_OverrideIcon, CallFunc_IsValid_ReturnValue) == 0x000094, "Member 'TopBarTabButton_C_OverrideIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}
