#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FIlteredTextEntryWidget

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Slate_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.OnTextChanged__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct FilteredTextEntryWidget_C_OnTextChanged__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(FilteredTextEntryWidget_C_OnTextChanged__DelegateSignature) == 0x000008, "Wrong alignment on FilteredTextEntryWidget_C_OnTextChanged__DelegateSignature");
static_assert(sizeof(FilteredTextEntryWidget_C_OnTextChanged__DelegateSignature) == 0x000018, "Wrong size on FilteredTextEntryWidget_C_OnTextChanged__DelegateSignature");
static_assert(offsetof(FilteredTextEntryWidget_C_OnTextChanged__DelegateSignature, Text) == 0x000000, "Member 'FilteredTextEntryWidget_C_OnTextChanged__DelegateSignature::Text' has a wrong offset!");

// Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.OnSanitizedTextReady__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct FilteredTextEntryWidget_C_OnSanitizedTextReady__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(FilteredTextEntryWidget_C_OnSanitizedTextReady__DelegateSignature) == 0x000008, "Wrong alignment on FilteredTextEntryWidget_C_OnSanitizedTextReady__DelegateSignature");
static_assert(sizeof(FilteredTextEntryWidget_C_OnSanitizedTextReady__DelegateSignature) == 0x000018, "Wrong size on FilteredTextEntryWidget_C_OnSanitizedTextReady__DelegateSignature");
static_assert(offsetof(FilteredTextEntryWidget_C_OnSanitizedTextReady__DelegateSignature, Text) == 0x000000, "Member 'FilteredTextEntryWidget_C_OnSanitizedTextReady__DelegateSignature::Text' has a wrong offset!");

// Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.ExecuteUbergraph_FilteredTextEntryWidget
// 0x01A0 (0x01A0 - 0x0000)
struct FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bIsBadText;                           // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bAdditionalValidationFailed;          // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E69[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetErrorText_Appropriate_Text;            // 0x0008(0x0018)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6E6A[0x6];                                     // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_ComponentBoundEvent_Text_1;                 // 0x0030(0x0018)(ConstParm)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0048(0x0038)(IsPlainOldData, NoDestructor)
	struct FPointerEvent                          K2Node_Event_MouseEvent_1;                         // 0x0080(0x0070)(ConstParm)
	struct FPointerEvent                          K2Node_Event_MouseEvent;                           // 0x00F0(0x0070)(ConstParm)
	class FText                                   CallFunc_GetCurrentText_Text;                      // 0x0160(0x0018)()
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6E6B[0x7];                                     // 0x0179(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_ComponentBoundEvent_Text;                   // 0x0180(0x0018)(ConstParm)
	ETextCommit                                   K2Node_ComponentBoundEvent_CommitMethod;           // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0199(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x019A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget) == 0x000008, "Wrong alignment on FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget");
static_assert(sizeof(FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget) == 0x0001A0, "Wrong size on FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget");
static_assert(offsetof(FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget, EntryPoint) == 0x000000, "Member 'FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget, Temp_bool_Variable) == 0x000004, "Member 'FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget, K2Node_Event_bIsBadText) == 0x000005, "Member 'FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget::K2Node_Event_bIsBadText' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget, K2Node_Event_bAdditionalValidationFailed) == 0x000006, "Member 'FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget::K2Node_Event_bAdditionalValidationFailed' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget, CallFunc_GetErrorText_Appropriate_Text) == 0x000008, "Member 'FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget::CallFunc_GetErrorText_Appropriate_Text' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget, CallFunc_PlayAnimation_ReturnValue) == 0x000020, "Member 'FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget, K2Node_Event_IsDesignTime) == 0x000028, "Member 'FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget, Temp_byte_Variable) == 0x000029, "Member 'FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget, K2Node_ComponentBoundEvent_Text_1) == 0x000030, "Member 'FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget::K2Node_ComponentBoundEvent_Text_1' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget, K2Node_Event_MyGeometry) == 0x000048, "Member 'FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget, K2Node_Event_MouseEvent_1) == 0x000080, "Member 'FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget::K2Node_Event_MouseEvent_1' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget, K2Node_Event_MouseEvent) == 0x0000F0, "Member 'FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget::K2Node_Event_MouseEvent' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget, CallFunc_GetCurrentText_Text) == 0x000160, "Member 'FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget::CallFunc_GetCurrentText_Text' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget, Temp_byte_Variable_1) == 0x000178, "Member 'FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget, K2Node_ComponentBoundEvent_Text) == 0x000180, "Member 'FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget::K2Node_ComponentBoundEvent_Text' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget, K2Node_ComponentBoundEvent_CommitMethod) == 0x000198, "Member 'FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget::K2Node_ComponentBoundEvent_CommitMethod' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget, K2Node_Select_Default) == 0x000199, "Member 'FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00019A, "Member 'FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.BndEvt__EditText_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct FilteredTextEntryWidget_C_BndEvt__EditText_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ETextCommit                                   CommitMethod;                                      // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FilteredTextEntryWidget_C_BndEvt__EditText_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature) == 0x000008, "Wrong alignment on FilteredTextEntryWidget_C_BndEvt__EditText_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(sizeof(FilteredTextEntryWidget_C_BndEvt__EditText_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature) == 0x000020, "Wrong size on FilteredTextEntryWidget_C_BndEvt__EditText_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(offsetof(FilteredTextEntryWidget_C_BndEvt__EditText_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature, Text) == 0x000000, "Member 'FilteredTextEntryWidget_C_BndEvt__EditText_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature::Text' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_BndEvt__EditText_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature, CommitMethod) == 0x000018, "Member 'FilteredTextEntryWidget_C_BndEvt__EditText_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature::CommitMethod' has a wrong offset!");

// Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.OnMouseLeave
// 0x0070 (0x0070 - 0x0000)
struct FilteredTextEntryWidget_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;                                        // 0x0000(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(FilteredTextEntryWidget_C_OnMouseLeave) == 0x000008, "Wrong alignment on FilteredTextEntryWidget_C_OnMouseLeave");
static_assert(sizeof(FilteredTextEntryWidget_C_OnMouseLeave) == 0x000070, "Wrong size on FilteredTextEntryWidget_C_OnMouseLeave");
static_assert(offsetof(FilteredTextEntryWidget_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'FilteredTextEntryWidget_C_OnMouseLeave::MouseEvent' has a wrong offset!");

// Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.OnMouseEnter
// 0x00A8 (0x00A8 - 0x0000)
struct FilteredTextEntryWidget_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(FilteredTextEntryWidget_C_OnMouseEnter) == 0x000008, "Wrong alignment on FilteredTextEntryWidget_C_OnMouseEnter");
static_assert(sizeof(FilteredTextEntryWidget_C_OnMouseEnter) == 0x0000A8, "Wrong size on FilteredTextEntryWidget_C_OnMouseEnter");
static_assert(offsetof(FilteredTextEntryWidget_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'FilteredTextEntryWidget_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_OnMouseEnter, MouseEvent) == 0x000038, "Member 'FilteredTextEntryWidget_C_OnMouseEnter::MouseEvent' has a wrong offset!");

// Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.BndEvt__EditText_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct FilteredTextEntryWidget_C_BndEvt__EditText_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(FilteredTextEntryWidget_C_BndEvt__EditText_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on FilteredTextEntryWidget_C_BndEvt__EditText_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature");
static_assert(sizeof(FilteredTextEntryWidget_C_BndEvt__EditText_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature) == 0x000018, "Wrong size on FilteredTextEntryWidget_C_BndEvt__EditText_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature");
static_assert(offsetof(FilteredTextEntryWidget_C_BndEvt__EditText_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature, Text) == 0x000000, "Member 'FilteredTextEntryWidget_C_BndEvt__EditText_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature::Text' has a wrong offset!");

// Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct FilteredTextEntryWidget_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FilteredTextEntryWidget_C_PreConstruct) == 0x000001, "Wrong alignment on FilteredTextEntryWidget_C_PreConstruct");
static_assert(sizeof(FilteredTextEntryWidget_C_PreConstruct) == 0x000001, "Wrong size on FilteredTextEntryWidget_C_PreConstruct");
static_assert(offsetof(FilteredTextEntryWidget_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'FilteredTextEntryWidget_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.OnDirtyTextAttempted
// 0x0002 (0x0002 - 0x0000)
struct FilteredTextEntryWidget_C_OnDirtyTextAttempted final
{
public:
	bool                                          bIsBadText;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bAdditionalValidationFailed;                       // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FilteredTextEntryWidget_C_OnDirtyTextAttempted) == 0x000001, "Wrong alignment on FilteredTextEntryWidget_C_OnDirtyTextAttempted");
static_assert(sizeof(FilteredTextEntryWidget_C_OnDirtyTextAttempted) == 0x000002, "Wrong size on FilteredTextEntryWidget_C_OnDirtyTextAttempted");
static_assert(offsetof(FilteredTextEntryWidget_C_OnDirtyTextAttempted, bIsBadText) == 0x000000, "Member 'FilteredTextEntryWidget_C_OnDirtyTextAttempted::bIsBadText' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_OnDirtyTextAttempted, bAdditionalValidationFailed) == 0x000001, "Member 'FilteredTextEntryWidget_C_OnDirtyTextAttempted::bAdditionalValidationFailed' has a wrong offset!");

// Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.UpdateConfiguration
// 0x0050 (0x0050 - 0x0000)
struct FilteredTextEntryWidget_C_UpdateConfiguration final
{
public:
	bool                                          bOverrideStyle;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bHideValidation;                                   // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ETextJustify                                  TextJustification;                                 // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bShouldShowTextPrompt;                             // 0x0003(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E6C[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   PromptDisplayText;                                 // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UClass*                                 TextStyle;                                         // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6E6D[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0030(0x0018)()
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FilteredTextEntryWidget_C_UpdateConfiguration) == 0x000008, "Wrong alignment on FilteredTextEntryWidget_C_UpdateConfiguration");
static_assert(sizeof(FilteredTextEntryWidget_C_UpdateConfiguration) == 0x000050, "Wrong size on FilteredTextEntryWidget_C_UpdateConfiguration");
static_assert(offsetof(FilteredTextEntryWidget_C_UpdateConfiguration, bOverrideStyle) == 0x000000, "Member 'FilteredTextEntryWidget_C_UpdateConfiguration::bOverrideStyle' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_UpdateConfiguration, bHideValidation) == 0x000001, "Member 'FilteredTextEntryWidget_C_UpdateConfiguration::bHideValidation' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_UpdateConfiguration, TextJustification) == 0x000002, "Member 'FilteredTextEntryWidget_C_UpdateConfiguration::TextJustification' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_UpdateConfiguration, bShouldShowTextPrompt) == 0x000003, "Member 'FilteredTextEntryWidget_C_UpdateConfiguration::bShouldShowTextPrompt' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_UpdateConfiguration, PromptDisplayText) == 0x000008, "Member 'FilteredTextEntryWidget_C_UpdateConfiguration::PromptDisplayText' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_UpdateConfiguration, TextStyle) == 0x000020, "Member 'FilteredTextEntryWidget_C_UpdateConfiguration::TextStyle' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_UpdateConfiguration, Temp_byte_Variable) == 0x000028, "Member 'FilteredTextEntryWidget_C_UpdateConfiguration::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_UpdateConfiguration, CallFunc_GetText_ReturnValue) == 0x000030, "Member 'FilteredTextEntryWidget_C_UpdateConfiguration::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_UpdateConfiguration, Temp_byte_Variable_1) == 0x000048, "Member 'FilteredTextEntryWidget_C_UpdateConfiguration::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_UpdateConfiguration, Temp_bool_Variable) == 0x000049, "Member 'FilteredTextEntryWidget_C_UpdateConfiguration::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_UpdateConfiguration, K2Node_Select_Default) == 0x00004A, "Member 'FilteredTextEntryWidget_C_UpdateConfiguration::K2Node_Select_Default' has a wrong offset!");

// Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.HandleShowPrompt
// 0x0040 (0x0040 - 0x0000)
struct FilteredTextEntryWidget_C_HandleShowPrompt final
{
public:
	class FText                                   CurrentText;                                       // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          Temp_bool_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6E6E[0x5];                                     // 0x001B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetEmptyText_ReturnValue;                 // 0x0020(0x0018)()
	bool                                          CallFunc_EqualEqual_TextText_ReturnValue;          // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FilteredTextEntryWidget_C_HandleShowPrompt) == 0x000008, "Wrong alignment on FilteredTextEntryWidget_C_HandleShowPrompt");
static_assert(sizeof(FilteredTextEntryWidget_C_HandleShowPrompt) == 0x000040, "Wrong size on FilteredTextEntryWidget_C_HandleShowPrompt");
static_assert(offsetof(FilteredTextEntryWidget_C_HandleShowPrompt, CurrentText) == 0x000000, "Member 'FilteredTextEntryWidget_C_HandleShowPrompt::CurrentText' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_HandleShowPrompt, Temp_bool_Variable) == 0x000018, "Member 'FilteredTextEntryWidget_C_HandleShowPrompt::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_HandleShowPrompt, Temp_byte_Variable) == 0x000019, "Member 'FilteredTextEntryWidget_C_HandleShowPrompt::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_HandleShowPrompt, Temp_byte_Variable_1) == 0x00001A, "Member 'FilteredTextEntryWidget_C_HandleShowPrompt::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_HandleShowPrompt, CallFunc_GetEmptyText_ReturnValue) == 0x000020, "Member 'FilteredTextEntryWidget_C_HandleShowPrompt::CallFunc_GetEmptyText_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_HandleShowPrompt, CallFunc_EqualEqual_TextText_ReturnValue) == 0x000038, "Member 'FilteredTextEntryWidget_C_HandleShowPrompt::CallFunc_EqualEqual_TextText_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_HandleShowPrompt, CallFunc_BooleanAND_ReturnValue) == 0x000039, "Member 'FilteredTextEntryWidget_C_HandleShowPrompt::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_HandleShowPrompt, K2Node_Select_Default) == 0x00003A, "Member 'FilteredTextEntryWidget_C_HandleShowPrompt::K2Node_Select_Default' has a wrong offset!");

// Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.GetCurrentText
// 0x0030 (0x0030 - 0x0000)
struct FilteredTextEntryWidget_C_GetCurrentText final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(Parm, OutParm)
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0018(0x0018)()
};
static_assert(alignof(FilteredTextEntryWidget_C_GetCurrentText) == 0x000008, "Wrong alignment on FilteredTextEntryWidget_C_GetCurrentText");
static_assert(sizeof(FilteredTextEntryWidget_C_GetCurrentText) == 0x000030, "Wrong size on FilteredTextEntryWidget_C_GetCurrentText");
static_assert(offsetof(FilteredTextEntryWidget_C_GetCurrentText, Text) == 0x000000, "Member 'FilteredTextEntryWidget_C_GetCurrentText::Text' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_GetCurrentText, CallFunc_GetText_ReturnValue) == 0x000018, "Member 'FilteredTextEntryWidget_C_GetCurrentText::CallFunc_GetText_ReturnValue' has a wrong offset!");

// Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.GetErrorText
// 0x0040 (0x0040 - 0x0000)
struct FilteredTextEntryWidget_C_GetErrorText final
{
public:
	bool                                          Additional_Validator_Failed;                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E6F[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Appropriate_Text;                                  // 0x0008(0x0018)(Parm, OutParm)
	class FText                                   Result;                                            // 0x0020(0x0018)(Edit, BlueprintVisible)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FilteredTextEntryWidget_C_GetErrorText) == 0x000008, "Wrong alignment on FilteredTextEntryWidget_C_GetErrorText");
static_assert(sizeof(FilteredTextEntryWidget_C_GetErrorText) == 0x000040, "Wrong size on FilteredTextEntryWidget_C_GetErrorText");
static_assert(offsetof(FilteredTextEntryWidget_C_GetErrorText, Additional_Validator_Failed) == 0x000000, "Member 'FilteredTextEntryWidget_C_GetErrorText::Additional_Validator_Failed' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_GetErrorText, Appropriate_Text) == 0x000008, "Member 'FilteredTextEntryWidget_C_GetErrorText::Appropriate_Text' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_GetErrorText, Result) == 0x000020, "Member 'FilteredTextEntryWidget_C_GetErrorText::Result' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_GetErrorText, CallFunc_TextIsEmpty_ReturnValue) == 0x000038, "Member 'FilteredTextEntryWidget_C_GetErrorText::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_GetErrorText, CallFunc_Not_PreBool_ReturnValue) == 0x000039, "Member 'FilteredTextEntryWidget_C_GetErrorText::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_GetErrorText, CallFunc_BooleanAND_ReturnValue) == 0x00003A, "Member 'FilteredTextEntryWidget_C_GetErrorText::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

}
