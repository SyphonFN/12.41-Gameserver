#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Feedback

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteUI_structs.hpp"


namespace SDK::Params
{

// Function Feedback.Feedback_C.ExecuteUbergraph_Feedback
// 0x0060 (0x0060 - 0x0000)
struct Feedback_C_ExecuteUbergraph_Feedback final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5E29[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button;                 // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button_5;               // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_CustomEvent_Text;                           // 0x0018(0x0018)(ConstParm)
	EFortUIGameFeedbackType                       K2Node_Event_FeedbackType;                         // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5E2A[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button_4;               // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanSendFeedback_ReturnValue;              // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E2B[0x6];                                     // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button_3;               // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button_2;               // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button_1;               // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Feedback_C_ExecuteUbergraph_Feedback) == 0x000008, "Wrong alignment on Feedback_C_ExecuteUbergraph_Feedback");
static_assert(sizeof(Feedback_C_ExecuteUbergraph_Feedback) == 0x000060, "Wrong size on Feedback_C_ExecuteUbergraph_Feedback");
static_assert(offsetof(Feedback_C_ExecuteUbergraph_Feedback, EntryPoint) == 0x000000, "Member 'Feedback_C_ExecuteUbergraph_Feedback::EntryPoint' has a wrong offset!");
static_assert(offsetof(Feedback_C_ExecuteUbergraph_Feedback, K2Node_ComponentBoundEvent_Button) == 0x000008, "Member 'Feedback_C_ExecuteUbergraph_Feedback::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(Feedback_C_ExecuteUbergraph_Feedback, K2Node_ComponentBoundEvent_Button_5) == 0x000010, "Member 'Feedback_C_ExecuteUbergraph_Feedback::K2Node_ComponentBoundEvent_Button_5' has a wrong offset!");
static_assert(offsetof(Feedback_C_ExecuteUbergraph_Feedback, K2Node_CustomEvent_Text) == 0x000018, "Member 'Feedback_C_ExecuteUbergraph_Feedback::K2Node_CustomEvent_Text' has a wrong offset!");
static_assert(offsetof(Feedback_C_ExecuteUbergraph_Feedback, K2Node_Event_FeedbackType) == 0x000030, "Member 'Feedback_C_ExecuteUbergraph_Feedback::K2Node_Event_FeedbackType' has a wrong offset!");
static_assert(offsetof(Feedback_C_ExecuteUbergraph_Feedback, K2Node_ComponentBoundEvent_Button_4) == 0x000038, "Member 'Feedback_C_ExecuteUbergraph_Feedback::K2Node_ComponentBoundEvent_Button_4' has a wrong offset!");
static_assert(offsetof(Feedback_C_ExecuteUbergraph_Feedback, CallFunc_CanSendFeedback_ReturnValue) == 0x000040, "Member 'Feedback_C_ExecuteUbergraph_Feedback::CallFunc_CanSendFeedback_ReturnValue' has a wrong offset!");
static_assert(offsetof(Feedback_C_ExecuteUbergraph_Feedback, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000041, "Member 'Feedback_C_ExecuteUbergraph_Feedback::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(Feedback_C_ExecuteUbergraph_Feedback, K2Node_ComponentBoundEvent_Button_3) == 0x000048, "Member 'Feedback_C_ExecuteUbergraph_Feedback::K2Node_ComponentBoundEvent_Button_3' has a wrong offset!");
static_assert(offsetof(Feedback_C_ExecuteUbergraph_Feedback, K2Node_ComponentBoundEvent_Button_2) == 0x000050, "Member 'Feedback_C_ExecuteUbergraph_Feedback::K2Node_ComponentBoundEvent_Button_2' has a wrong offset!");
static_assert(offsetof(Feedback_C_ExecuteUbergraph_Feedback, K2Node_ComponentBoundEvent_Button_1) == 0x000058, "Member 'Feedback_C_ExecuteUbergraph_Feedback::K2Node_ComponentBoundEvent_Button_1' has a wrong offset!");

// Function Feedback.Feedback_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_7_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct Feedback_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_7_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Feedback_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_7_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on Feedback_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_7_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(Feedback_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_7_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on Feedback_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_7_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(Feedback_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_7_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'Feedback_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_7_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function Feedback.Feedback_C.BndEvt__CancelBug_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct Feedback_C_BndEvt__CancelBug_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Feedback_C_BndEvt__CancelBug_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on Feedback_C_BndEvt__CancelBug_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(Feedback_C_BndEvt__CancelBug_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on Feedback_C_BndEvt__CancelBug_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(Feedback_C_BndEvt__CancelBug_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'Feedback_C_BndEvt__CancelBug_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function Feedback.Feedback_C.BndEvt__SubmitBug_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct Feedback_C_BndEvt__SubmitBug_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Feedback_C_BndEvt__SubmitBug_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on Feedback_C_BndEvt__SubmitBug_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(Feedback_C_BndEvt__SubmitBug_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on Feedback_C_BndEvt__SubmitBug_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(Feedback_C_BndEvt__SubmitBug_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'Feedback_C_BndEvt__SubmitBug_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function Feedback.Feedback_C.BndEvt__SubmitSignIn_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct Feedback_C_BndEvt__SubmitSignIn_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Feedback_C_BndEvt__SubmitSignIn_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on Feedback_C_BndEvt__SubmitSignIn_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(Feedback_C_BndEvt__SubmitSignIn_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on Feedback_C_BndEvt__SubmitSignIn_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(Feedback_C_BndEvt__SubmitSignIn_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'Feedback_C_BndEvt__SubmitSignIn_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function Feedback.Feedback_C.BndEvt__SendButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct Feedback_C_BndEvt__SendButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Feedback_C_BndEvt__SendButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on Feedback_C_BndEvt__SendButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(Feedback_C_BndEvt__SendButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on Feedback_C_BndEvt__SendButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(Feedback_C_BndEvt__SendButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'Feedback_C_BndEvt__SendButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function Feedback.Feedback_C.OnFeedbackTypeChanged
// 0x0001 (0x0001 - 0x0000)
struct Feedback_C_OnFeedbackTypeChanged final
{
public:
	EFortUIGameFeedbackType                       Param_FeedBackType;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Feedback_C_OnFeedbackTypeChanged) == 0x000001, "Wrong alignment on Feedback_C_OnFeedbackTypeChanged");
static_assert(sizeof(Feedback_C_OnFeedbackTypeChanged) == 0x000001, "Wrong size on Feedback_C_OnFeedbackTypeChanged");
static_assert(offsetof(Feedback_C_OnFeedbackTypeChanged, Param_FeedBackType) == 0x000000, "Member 'Feedback_C_OnFeedbackTypeChanged::Param_FeedBackType' has a wrong offset!");

// Function Feedback.Feedback_C.HandleTextChanged
// 0x0018 (0x0018 - 0x0000)
struct Feedback_C_HandleTextChanged final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(Feedback_C_HandleTextChanged) == 0x000008, "Wrong alignment on Feedback_C_HandleTextChanged");
static_assert(sizeof(Feedback_C_HandleTextChanged) == 0x000018, "Wrong size on Feedback_C_HandleTextChanged");
static_assert(offsetof(Feedback_C_HandleTextChanged, Text) == 0x000000, "Member 'Feedback_C_HandleTextChanged::Text' has a wrong offset!");

// Function Feedback.Feedback_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct Feedback_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Feedback_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on Feedback_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(Feedback_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on Feedback_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(Feedback_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'Feedback_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function Feedback.Feedback_C.BindDelegates
// 0x0020 (0x0020 - 0x0000)
struct Feedback_C_BindDelegates final
{
public:
	TDelegate<void(class FText& Text)>            K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class FText& Text)>            K2Node_CreateDelegate_OutputDelegate_1;            // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(Feedback_C_BindDelegates) == 0x000004, "Wrong alignment on Feedback_C_BindDelegates");
static_assert(sizeof(Feedback_C_BindDelegates) == 0x000020, "Wrong size on Feedback_C_BindDelegates");
static_assert(offsetof(Feedback_C_BindDelegates, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'Feedback_C_BindDelegates::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Feedback_C_BindDelegates, K2Node_CreateDelegate_OutputDelegate_1) == 0x000010, "Member 'Feedback_C_BindDelegates::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");

// Function Feedback.Feedback_C.CanSendFeedback
// 0x0060 (0x0060 - 0x0000)
struct Feedback_C_CanSendFeedback final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E2C[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0008(0x0018)()
	class FText                                   CallFunc_GetText_ReturnValue_1;                    // 0x0020(0x0018)()
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_TextIsEmpty_ReturnValue_1;                // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E2D[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetText_ReturnValue_2;                    // 0x0040(0x0018)()
	bool                                          CallFunc_TextIsEmpty_ReturnValue_2;                // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Feedback_C_CanSendFeedback) == 0x000008, "Wrong alignment on Feedback_C_CanSendFeedback");
static_assert(sizeof(Feedback_C_CanSendFeedback) == 0x000060, "Wrong size on Feedback_C_CanSendFeedback");
static_assert(offsetof(Feedback_C_CanSendFeedback, ReturnValue) == 0x000000, "Member 'Feedback_C_CanSendFeedback::ReturnValue' has a wrong offset!");
static_assert(offsetof(Feedback_C_CanSendFeedback, CallFunc_GetText_ReturnValue) == 0x000008, "Member 'Feedback_C_CanSendFeedback::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Feedback_C_CanSendFeedback, CallFunc_GetText_ReturnValue_1) == 0x000020, "Member 'Feedback_C_CanSendFeedback::CallFunc_GetText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Feedback_C_CanSendFeedback, CallFunc_TextIsEmpty_ReturnValue) == 0x000038, "Member 'Feedback_C_CanSendFeedback::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(Feedback_C_CanSendFeedback, CallFunc_TextIsEmpty_ReturnValue_1) == 0x000039, "Member 'Feedback_C_CanSendFeedback::CallFunc_TextIsEmpty_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Feedback_C_CanSendFeedback, CallFunc_Not_PreBool_ReturnValue) == 0x00003A, "Member 'Feedback_C_CanSendFeedback::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Feedback_C_CanSendFeedback, CallFunc_Not_PreBool_ReturnValue_1) == 0x00003B, "Member 'Feedback_C_CanSendFeedback::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Feedback_C_CanSendFeedback, CallFunc_BooleanOR_ReturnValue) == 0x00003C, "Member 'Feedback_C_CanSendFeedback::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(Feedback_C_CanSendFeedback, CallFunc_GetText_ReturnValue_2) == 0x000040, "Member 'Feedback_C_CanSendFeedback::CallFunc_GetText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Feedback_C_CanSendFeedback, CallFunc_TextIsEmpty_ReturnValue_2) == 0x000058, "Member 'Feedback_C_CanSendFeedback::CallFunc_TextIsEmpty_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Feedback_C_CanSendFeedback, CallFunc_Not_PreBool_ReturnValue_2) == 0x000059, "Member 'Feedback_C_CanSendFeedback::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Feedback_C_CanSendFeedback, CallFunc_BooleanAND_ReturnValue) == 0x00005A, "Member 'Feedback_C_CanSendFeedback::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function Feedback.Feedback_C.TouchToClose
// 0x0218 (0x0218 - 0x0000)
struct Feedback_C_TouchToClose final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0160(0x00B8)()
};
static_assert(alignof(Feedback_C_TouchToClose) == 0x000008, "Wrong alignment on Feedback_C_TouchToClose");
static_assert(sizeof(Feedback_C_TouchToClose) == 0x000218, "Wrong size on Feedback_C_TouchToClose");
static_assert(offsetof(Feedback_C_TouchToClose, MyGeometry) == 0x000000, "Member 'Feedback_C_TouchToClose::MyGeometry' has a wrong offset!");
static_assert(offsetof(Feedback_C_TouchToClose, MouseEvent) == 0x000038, "Member 'Feedback_C_TouchToClose::MouseEvent' has a wrong offset!");
static_assert(offsetof(Feedback_C_TouchToClose, ReturnValue) == 0x0000A8, "Member 'Feedback_C_TouchToClose::ReturnValue' has a wrong offset!");
static_assert(offsetof(Feedback_C_TouchToClose, CallFunc_Handled_ReturnValue) == 0x000160, "Member 'Feedback_C_TouchToClose::CallFunc_Handled_ReturnValue' has a wrong offset!");

// Function Feedback.Feedback_C.Update Send Button Enabled
// 0x0001 (0x0001 - 0x0000)
struct Feedback_C_Update_Send_Button_Enabled final
{
public:
	bool                                          CallFunc_CanSendFeedback_ReturnValue;              // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Feedback_C_Update_Send_Button_Enabled) == 0x000001, "Wrong alignment on Feedback_C_Update_Send_Button_Enabled");
static_assert(sizeof(Feedback_C_Update_Send_Button_Enabled) == 0x000001, "Wrong size on Feedback_C_Update_Send_Button_Enabled");
static_assert(offsetof(Feedback_C_Update_Send_Button_Enabled, CallFunc_CanSendFeedback_ReturnValue) == 0x000000, "Member 'Feedback_C_Update_Send_Button_Enabled::CallFunc_CanSendFeedback_ReturnValue' has a wrong offset!");

}
