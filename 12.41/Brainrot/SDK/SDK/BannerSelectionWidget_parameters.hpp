#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BannerSelectionWidget

#include "Basic.hpp"

#include "CommonInput_structs.hpp"


namespace SDK::Params
{

// Function BannerSelectionWidget.BannerSelectionWidget_C.BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_105_CloseBannerEditor__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct BannerSelectionWidget_C_BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_105_CloseBannerEditor__DelegateSignature final
{
public:
	class FName                                   IconId;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   ColorId;                                           // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BannerSelectionWidget_C_BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_105_CloseBannerEditor__DelegateSignature) == 0x000004, "Wrong alignment on BannerSelectionWidget_C_BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_105_CloseBannerEditor__DelegateSignature");
static_assert(sizeof(BannerSelectionWidget_C_BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_105_CloseBannerEditor__DelegateSignature) == 0x000010, "Wrong size on BannerSelectionWidget_C_BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_105_CloseBannerEditor__DelegateSignature");
static_assert(offsetof(BannerSelectionWidget_C_BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_105_CloseBannerEditor__DelegateSignature, IconId) == 0x000000, "Member 'BannerSelectionWidget_C_BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_105_CloseBannerEditor__DelegateSignature::IconId' has a wrong offset!");
static_assert(offsetof(BannerSelectionWidget_C_BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_105_CloseBannerEditor__DelegateSignature, ColorId) == 0x000008, "Member 'BannerSelectionWidget_C_BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_105_CloseBannerEditor__DelegateSignature::ColorId' has a wrong offset!");

// Function BannerSelectionWidget.BannerSelectionWidget_C.BndEvt__ConfirmHomebaseNameButton_K2Node_ComponentBoundEvent_80_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BannerSelectionWidget_C_BndEvt__ConfirmHomebaseNameButton_K2Node_ComponentBoundEvent_80_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BannerSelectionWidget_C_BndEvt__ConfirmHomebaseNameButton_K2Node_ComponentBoundEvent_80_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on BannerSelectionWidget_C_BndEvt__ConfirmHomebaseNameButton_K2Node_ComponentBoundEvent_80_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(BannerSelectionWidget_C_BndEvt__ConfirmHomebaseNameButton_K2Node_ComponentBoundEvent_80_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on BannerSelectionWidget_C_BndEvt__ConfirmHomebaseNameButton_K2Node_ComponentBoundEvent_80_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(BannerSelectionWidget_C_BndEvt__ConfirmHomebaseNameButton_K2Node_ComponentBoundEvent_80_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'BannerSelectionWidget_C_BndEvt__ConfirmHomebaseNameButton_K2Node_ComponentBoundEvent_80_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function BannerSelectionWidget.BannerSelectionWidget_C.InitFromObject
// 0x0008 (0x0008 - 0x0000)
struct BannerSelectionWidget_C_InitFromObject final
{
public:
	class UObject*                                InitObject;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BannerSelectionWidget_C_InitFromObject) == 0x000008, "Wrong alignment on BannerSelectionWidget_C_InitFromObject");
static_assert(sizeof(BannerSelectionWidget_C_InitFromObject) == 0x000008, "Wrong size on BannerSelectionWidget_C_InitFromObject");
static_assert(offsetof(BannerSelectionWidget_C_InitFromObject, InitObject) == 0x000000, "Member 'BannerSelectionWidget_C_InitFromObject::InitObject' has a wrong offset!");

// Function BannerSelectionWidget.BannerSelectionWidget_C.OnInputModeChanged
// 0x0001 (0x0001 - 0x0000)
struct BannerSelectionWidget_C_OnInputModeChanged final
{
public:
	bool                                          bUsingGamepad;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BannerSelectionWidget_C_OnInputModeChanged) == 0x000001, "Wrong alignment on BannerSelectionWidget_C_OnInputModeChanged");
static_assert(sizeof(BannerSelectionWidget_C_OnInputModeChanged) == 0x000001, "Wrong size on BannerSelectionWidget_C_OnInputModeChanged");
static_assert(offsetof(BannerSelectionWidget_C_OnInputModeChanged, bUsingGamepad) == 0x000000, "Member 'BannerSelectionWidget_C_OnInputModeChanged::bUsingGamepad' has a wrong offset!");

// Function BannerSelectionWidget.BannerSelectionWidget_C.ExecuteUbergraph_BannerSelectionWidget
// 0x0130 (0x0130 - 0x0000)
struct BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_ComponentBoundEvent_IconId;                 // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_ComponentBoundEvent_ColorId;                // 0x000C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue_1;          // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4170[0x2];                                     // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button;                 // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4171[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortUINavigationManager*               CallFunc_GetUINavigationManager_ReturnValue;       // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                  K2Node_DynamicCast_AsFort_Player_Controller;       // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4172[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue_1;            // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0050(0x0010)(ZeroConstructor, NoDestructor)
	class AFortPlayerController*                  K2Node_DynamicCast_AsFort_Player_Controller_1;     // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4173[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortUINavigationManager*               CallFunc_GetUINavigationManager_ReturnValue_1;     // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue_2;            // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue_3;            // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                  K2Node_DynamicCast_AsFort_Player_Controller_2;     // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4174[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerController*                  K2Node_DynamicCast_AsFort_Player_Controller_3;     // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetAtNameHomeBaseScreen_ReturnValue;      // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4175[0x6];                                     // 0x00A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortGlobalUIContext*                   CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue_4;            // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                  K2Node_DynamicCast_AsFort_Player_Controller_4;     // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4176[0x7];                                     // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x00C8(0x0018)()
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue;                   // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlayerNameValid_OutIsValid;             // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4177[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_IsPlayerNameValid_OutErrorText;           // 0x00F0(0x0018)()
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;          // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4178[0x7];                                     // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_Event_InitObject;                           // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue_1;                 // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bUsingGamepad;                        // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4179[0x7];                                     // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortUINavigationManager*               CallFunc_GetUINavigationManager_ReturnValue_2;     // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget) == 0x000008, "Wrong alignment on BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget");
static_assert(sizeof(BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget) == 0x000130, "Wrong size on BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget");
static_assert(offsetof(BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget, EntryPoint) == 0x000000, "Member 'BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget, K2Node_ComponentBoundEvent_IconId) == 0x000004, "Member 'BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget::K2Node_ComponentBoundEvent_IconId' has a wrong offset!");
static_assert(offsetof(BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget, K2Node_ComponentBoundEvent_ColorId) == 0x00000C, "Member 'BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget::K2Node_ComponentBoundEvent_ColorId' has a wrong offset!");
static_assert(offsetof(BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget, CallFunc_NotEqual_NameName_ReturnValue) == 0x000014, "Member 'BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget, CallFunc_NotEqual_NameName_ReturnValue_1) == 0x000015, "Member 'BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget::CallFunc_NotEqual_NameName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget, K2Node_ComponentBoundEvent_Button) == 0x000018, "Member 'BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget, CallFunc_BooleanAND_ReturnValue) == 0x000020, "Member 'BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget, CallFunc_GetUINavigationManager_ReturnValue) == 0x000028, "Member 'BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget::CallFunc_GetUINavigationManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget, CallFunc_GetOwningPlayer_ReturnValue) == 0x000030, "Member 'BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget, K2Node_DynamicCast_AsFort_Player_Controller) == 0x000038, "Member 'BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget::K2Node_DynamicCast_AsFort_Player_Controller' has a wrong offset!");
static_assert(offsetof(BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget, CallFunc_GetOwningPlayer_ReturnValue_1) == 0x000048, "Member 'BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget::CallFunc_GetOwningPlayer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget, K2Node_CreateDelegate_OutputDelegate) == 0x000050, "Member 'BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget, K2Node_DynamicCast_AsFort_Player_Controller_1) == 0x000060, "Member 'BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget::K2Node_DynamicCast_AsFort_Player_Controller_1' has a wrong offset!");
static_assert(offsetof(BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget, K2Node_DynamicCast_bSuccess_1) == 0x000068, "Member 'BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget, CallFunc_GetUINavigationManager_ReturnValue_1) == 0x000070, "Member 'BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget::CallFunc_GetUINavigationManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget, CallFunc_GetOwningPlayer_ReturnValue_2) == 0x000078, "Member 'BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget::CallFunc_GetOwningPlayer_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget, CallFunc_GetOwningPlayer_ReturnValue_3) == 0x000080, "Member 'BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget::CallFunc_GetOwningPlayer_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget, K2Node_DynamicCast_AsFort_Player_Controller_2) == 0x000088, "Member 'BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget::K2Node_DynamicCast_AsFort_Player_Controller_2' has a wrong offset!");
static_assert(offsetof(BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget, K2Node_DynamicCast_bSuccess_2) == 0x000090, "Member 'BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget, K2Node_DynamicCast_AsFort_Player_Controller_3) == 0x000098, "Member 'BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget::K2Node_DynamicCast_AsFort_Player_Controller_3' has a wrong offset!");
static_assert(offsetof(BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget, K2Node_DynamicCast_bSuccess_3) == 0x0000A0, "Member 'BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget, CallFunc_GetAtNameHomeBaseScreen_ReturnValue) == 0x0000A1, "Member 'BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget::CallFunc_GetAtNameHomeBaseScreen_ReturnValue' has a wrong offset!");
static_assert(offsetof(BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x0000A8, "Member 'BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget, CallFunc_GetOwningPlayer_ReturnValue_4) == 0x0000B0, "Member 'BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget::CallFunc_GetOwningPlayer_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget, K2Node_DynamicCast_AsFort_Player_Controller_4) == 0x0000B8, "Member 'BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget::K2Node_DynamicCast_AsFort_Player_Controller_4' has a wrong offset!");
static_assert(offsetof(BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget, K2Node_DynamicCast_bSuccess_4) == 0x0000C0, "Member 'BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget, CallFunc_GetText_ReturnValue) == 0x0000C8, "Member 'BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget, CallFunc_GetContext_ReturnValue) == 0x0000E0, "Member 'BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget, CallFunc_IsPlayerNameValid_OutIsValid) == 0x0000E8, "Member 'BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget::CallFunc_IsPlayerNameValid_OutIsValid' has a wrong offset!");
static_assert(offsetof(BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget, CallFunc_IsPlayerNameValid_OutErrorText) == 0x0000F0, "Member 'BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget::CallFunc_IsPlayerNameValid_OutErrorText' has a wrong offset!");
static_assert(offsetof(BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget, CallFunc_GetCurrentInputType_ReturnValue) == 0x000108, "Member 'BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget, K2Node_Event_InitObject) == 0x000110, "Member 'BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget::K2Node_Event_InitObject' has a wrong offset!");
static_assert(offsetof(BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget, CallFunc_GetContext_ReturnValue_1) == 0x000118, "Member 'BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget::CallFunc_GetContext_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget, K2Node_Event_bUsingGamepad) == 0x000120, "Member 'BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget::K2Node_Event_bUsingGamepad' has a wrong offset!");
static_assert(offsetof(BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget, CallFunc_GetUINavigationManager_ReturnValue_2) == 0x000128, "Member 'BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget::CallFunc_GetUINavigationManager_ReturnValue_2' has a wrong offset!");

}
