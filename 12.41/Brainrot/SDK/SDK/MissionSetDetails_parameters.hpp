#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MissionSetDetails

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function MissionSetDetails.MissionSetDetails_C.ExecuteUbergraph_MissionSetDetails
// 0x01D8 (0x01D8 - 0x0000)
struct MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6E50[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortChallengeSetStyle                 K2Node_Event_DisplayStyle;                         // 0x0008(0x00A0)(ConstParm)
	bool                                          K2Node_Event_bIsComplete;                          // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E51[0x3];                                     // 0x00A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_GetChallengeStyleLightAccentColor_ReturnValue; // 0x00AC(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6E52[0x4];                                     // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x00C0(0x0028)()
	TDelegate<void(bool* bPassThrough)>           K2Node_CreateDelegate_OutputDelegate;              // 0x00E8(0x0010)(ZeroConstructor, NoDestructor)
	struct FDataTableRowHandle                    K2Node_MakeStruct_DataTableRowHandle;              // 0x00F8(0x0010)(NoDestructor)
	bool                                          CallFunc_CanLevelBundle_ReturnValue;               // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E53[0x7];                                     // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UIconTextButton_C*                      K2Node_DynamicCast_AsIcon_Text_Button;             // 0x0110(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCurrentlyViewPrestige_ReturnValue;      // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCurrentlyViewPrestige_ReturnValue_1;    // 0x011A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_FirstRun;                       // 0x011B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bHidePriestigeUpsell;                 // 0x011C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E54[0x3];                                     // 0x011D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCircleArrowButton_C*                   K2Node_DynamicCast_AsCircle_Arrow_Button;          // 0x0120(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCurrentlyViewPrestige_ReturnValue_2;    // 0x0129(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E55[0x6];                                     // 0x012A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetChaseRewardForBundleLevel_ReturnValue; // 0x0130(0x0028)(HasGetValueTypeHash)
	bool                                          CallFunc_IsAssetNull_ReturnValue;                  // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E56[0x7];                                     // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeLiteralFloat_ReturnValue;             // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeLiteralFloat_ReturnValue_1;           // 0x016C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsUrgentMission_ReturnValue;              // 0x0174(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HandleBack_PassThrough;                   // 0x0175(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E57[0x2];                                     // 0x0176(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UMissionProgressDisplay_C*              K2Node_DynamicCast_AsMission_Progress_Display;     // 0x0178(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E58[0x7];                                     // 0x0181(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UItemInfoHeaderWidget_C*                K2Node_DynamicCast_AsItem_Info_Header_Widget;      // 0x0188(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E59[0x7];                                     // 0x0191(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMissionProgressDisplay_C*              K2Node_DynamicCast_AsMission_Progress_Display_1;   // 0x0198(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E5A[0x7];                                     // 0x01A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCircleArrowButton_C*                   K2Node_DynamicCast_AsCircle_Arrow_Button_1;        // 0x01A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E5B[0x7];                                     // 0x01B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCircleArrowButton_C*                   K2Node_DynamicCast_AsCircle_Arrow_Button_2;        // 0x01C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_6;                     // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E5C[0x7];                                     // 0x01C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button;                 // 0x01D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails) == 0x000008, "Wrong alignment on MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails");
static_assert(sizeof(MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails) == 0x0001D8, "Wrong size on MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails");
static_assert(offsetof(MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails, EntryPoint) == 0x000000, "Member 'MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails::EntryPoint' has a wrong offset!");
static_assert(offsetof(MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails, K2Node_Event_DisplayStyle) == 0x000008, "Member 'MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails::K2Node_Event_DisplayStyle' has a wrong offset!");
static_assert(offsetof(MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails, K2Node_Event_bIsComplete) == 0x0000A8, "Member 'MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails::K2Node_Event_bIsComplete' has a wrong offset!");
static_assert(offsetof(MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails, CallFunc_GetChallengeStyleLightAccentColor_ReturnValue) == 0x0000AC, "Member 'MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails::CallFunc_GetChallengeStyleLightAccentColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails, K2Node_MakeStruct_SlateColor) == 0x0000C0, "Member 'MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails, K2Node_CreateDelegate_OutputDelegate) == 0x0000E8, "Member 'MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails, K2Node_MakeStruct_DataTableRowHandle) == 0x0000F8, "Member 'MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails::K2Node_MakeStruct_DataTableRowHandle' has a wrong offset!");
static_assert(offsetof(MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails, CallFunc_CanLevelBundle_ReturnValue) == 0x000108, "Member 'MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails::CallFunc_CanLevelBundle_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails, K2Node_DynamicCast_AsIcon_Text_Button) == 0x000110, "Member 'MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails::K2Node_DynamicCast_AsIcon_Text_Button' has a wrong offset!");
static_assert(offsetof(MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails, K2Node_DynamicCast_bSuccess) == 0x000118, "Member 'MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails, CallFunc_IsCurrentlyViewPrestige_ReturnValue) == 0x000119, "Member 'MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails::CallFunc_IsCurrentlyViewPrestige_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails, CallFunc_IsCurrentlyViewPrestige_ReturnValue_1) == 0x00011A, "Member 'MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails::CallFunc_IsCurrentlyViewPrestige_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails, K2Node_CustomEvent_FirstRun) == 0x00011B, "Member 'MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails::K2Node_CustomEvent_FirstRun' has a wrong offset!");
static_assert(offsetof(MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails, K2Node_Event_bHidePriestigeUpsell) == 0x00011C, "Member 'MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails::K2Node_Event_bHidePriestigeUpsell' has a wrong offset!");
static_assert(offsetof(MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails, K2Node_DynamicCast_AsCircle_Arrow_Button) == 0x000120, "Member 'MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails::K2Node_DynamicCast_AsCircle_Arrow_Button' has a wrong offset!");
static_assert(offsetof(MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails, K2Node_DynamicCast_bSuccess_1) == 0x000128, "Member 'MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails, CallFunc_IsCurrentlyViewPrestige_ReturnValue_2) == 0x000129, "Member 'MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails::CallFunc_IsCurrentlyViewPrestige_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails, CallFunc_GetChaseRewardForBundleLevel_ReturnValue) == 0x000130, "Member 'MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails::CallFunc_GetChaseRewardForBundleLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails, CallFunc_IsAssetNull_ReturnValue) == 0x000158, "Member 'MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails::CallFunc_IsAssetNull_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000160, "Member 'MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails, CallFunc_MakeLiteralFloat_ReturnValue) == 0x000168, "Member 'MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails::CallFunc_MakeLiteralFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails, CallFunc_MakeLiteralFloat_ReturnValue_1) == 0x00016C, "Member 'MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails::CallFunc_MakeLiteralFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000170, "Member 'MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails, CallFunc_IsUrgentMission_ReturnValue) == 0x000174, "Member 'MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails::CallFunc_IsUrgentMission_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails, CallFunc_HandleBack_PassThrough) == 0x000175, "Member 'MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails::CallFunc_HandleBack_PassThrough' has a wrong offset!");
static_assert(offsetof(MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails, K2Node_DynamicCast_AsMission_Progress_Display) == 0x000178, "Member 'MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails::K2Node_DynamicCast_AsMission_Progress_Display' has a wrong offset!");
static_assert(offsetof(MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails, K2Node_DynamicCast_bSuccess_2) == 0x000180, "Member 'MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails, K2Node_DynamicCast_AsItem_Info_Header_Widget) == 0x000188, "Member 'MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails::K2Node_DynamicCast_AsItem_Info_Header_Widget' has a wrong offset!");
static_assert(offsetof(MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails, K2Node_DynamicCast_bSuccess_3) == 0x000190, "Member 'MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails, K2Node_DynamicCast_AsMission_Progress_Display_1) == 0x000198, "Member 'MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails::K2Node_DynamicCast_AsMission_Progress_Display_1' has a wrong offset!");
static_assert(offsetof(MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails, K2Node_DynamicCast_bSuccess_4) == 0x0001A0, "Member 'MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails, K2Node_DynamicCast_AsCircle_Arrow_Button_1) == 0x0001A8, "Member 'MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails::K2Node_DynamicCast_AsCircle_Arrow_Button_1' has a wrong offset!");
static_assert(offsetof(MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails, K2Node_DynamicCast_bSuccess_5) == 0x0001B0, "Member 'MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails, CallFunc_PlayAnimationForward_ReturnValue) == 0x0001B8, "Member 'MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails, K2Node_DynamicCast_AsCircle_Arrow_Button_2) == 0x0001C0, "Member 'MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails::K2Node_DynamicCast_AsCircle_Arrow_Button_2' has a wrong offset!");
static_assert(offsetof(MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails, K2Node_DynamicCast_bSuccess_6) == 0x0001C8, "Member 'MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails::K2Node_DynamicCast_bSuccess_6' has a wrong offset!");
static_assert(offsetof(MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails, K2Node_ComponentBoundEvent_Button) == 0x0001D0, "Member 'MissionSetDetails_C_ExecuteUbergraph_MissionSetDetails::K2Node_ComponentBoundEvent_Button' has a wrong offset!");

// Function MissionSetDetails.MissionSetDetails_C.OnChallengeSetEstablished
// 0x00A8 (0x00A8 - 0x0000)
struct MissionSetDetails_C_OnChallengeSetEstablished final
{
public:
	struct FFortChallengeSetStyle                 DisplayStyle;                                      // 0x0000(0x00A0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          bIsComplete;                                       // 0x00A0(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MissionSetDetails_C_OnChallengeSetEstablished) == 0x000008, "Wrong alignment on MissionSetDetails_C_OnChallengeSetEstablished");
static_assert(sizeof(MissionSetDetails_C_OnChallengeSetEstablished) == 0x0000A8, "Wrong size on MissionSetDetails_C_OnChallengeSetEstablished");
static_assert(offsetof(MissionSetDetails_C_OnChallengeSetEstablished, DisplayStyle) == 0x000000, "Member 'MissionSetDetails_C_OnChallengeSetEstablished::DisplayStyle' has a wrong offset!");
static_assert(offsetof(MissionSetDetails_C_OnChallengeSetEstablished, bIsComplete) == 0x0000A0, "Member 'MissionSetDetails_C_OnChallengeSetEstablished::bIsComplete' has a wrong offset!");

// Function MissionSetDetails.MissionSetDetails_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct MissionSetDetails_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MissionSetDetails_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on MissionSetDetails_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(MissionSetDetails_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on MissionSetDetails_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(MissionSetDetails_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'MissionSetDetails_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function MissionSetDetails.MissionSetDetails_C.HidePriestigeInfo
// 0x0001 (0x0001 - 0x0000)
struct MissionSetDetails_C_HidePriestigeInfo final
{
public:
	bool                                          bHidePriestigeUpsell;                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MissionSetDetails_C_HidePriestigeInfo) == 0x000001, "Wrong alignment on MissionSetDetails_C_HidePriestigeInfo");
static_assert(sizeof(MissionSetDetails_C_HidePriestigeInfo) == 0x000001, "Wrong size on MissionSetDetails_C_HidePriestigeInfo");
static_assert(offsetof(MissionSetDetails_C_HidePriestigeInfo, bHidePriestigeUpsell) == 0x000000, "Member 'MissionSetDetails_C_HidePriestigeInfo::bHidePriestigeUpsell' has a wrong offset!");

// Function MissionSetDetails.MissionSetDetails_C.StylePageForNormal
// 0x0001 (0x0001 - 0x0000)
struct MissionSetDetails_C_StylePageForNormal final
{
public:
	bool                                          FirstRun;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MissionSetDetails_C_StylePageForNormal) == 0x000001, "Wrong alignment on MissionSetDetails_C_StylePageForNormal");
static_assert(sizeof(MissionSetDetails_C_StylePageForNormal) == 0x000001, "Wrong size on MissionSetDetails_C_StylePageForNormal");
static_assert(offsetof(MissionSetDetails_C_StylePageForNormal, FirstRun) == 0x000000, "Member 'MissionSetDetails_C_StylePageForNormal::FirstRun' has a wrong offset!");

// Function MissionSetDetails.MissionSetDetails_C.HandleBack
// 0x0001 (0x0001 - 0x0000)
struct MissionSetDetails_C_HandleBack final
{
public:
	bool                                          PassThrough;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MissionSetDetails_C_HandleBack) == 0x000001, "Wrong alignment on MissionSetDetails_C_HandleBack");
static_assert(sizeof(MissionSetDetails_C_HandleBack) == 0x000001, "Wrong size on MissionSetDetails_C_HandleBack");
static_assert(offsetof(MissionSetDetails_C_HandleBack, PassThrough) == 0x000000, "Member 'MissionSetDetails_C_HandleBack::PassThrough' has a wrong offset!");

// Function MissionSetDetails.MissionSetDetails_C.SetDynamicColors
// 0x00B0 (0x00B0 - 0x0000)
struct MissionSetDetails_C_SetDynamicColors final
{
public:
	class UImage*                                 DetailsDynamicMaterialTarget;                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortChallengeSetStyle                 FortChallengeSetStyle;                             // 0x0008(0x00A0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MissionSetDetails_C_SetDynamicColors) == 0x000008, "Wrong alignment on MissionSetDetails_C_SetDynamicColors");
static_assert(sizeof(MissionSetDetails_C_SetDynamicColors) == 0x0000B0, "Wrong size on MissionSetDetails_C_SetDynamicColors");
static_assert(offsetof(MissionSetDetails_C_SetDynamicColors, DetailsDynamicMaterialTarget) == 0x000000, "Member 'MissionSetDetails_C_SetDynamicColors::DetailsDynamicMaterialTarget' has a wrong offset!");
static_assert(offsetof(MissionSetDetails_C_SetDynamicColors, FortChallengeSetStyle) == 0x000008, "Member 'MissionSetDetails_C_SetDynamicColors::FortChallengeSetStyle' has a wrong offset!");
static_assert(offsetof(MissionSetDetails_C_SetDynamicColors, CallFunc_GetDynamicMaterial_ReturnValue) == 0x0000A8, "Member 'MissionSetDetails_C_SetDynamicColors::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

// Function MissionSetDetails.MissionSetDetails_C.GetWidgetForFramingViewedItem
// 0x0008 (0x0008 - 0x0000)
struct MissionSetDetails_C_GetWidgetForFramingViewedItem final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MissionSetDetails_C_GetWidgetForFramingViewedItem) == 0x000008, "Wrong alignment on MissionSetDetails_C_GetWidgetForFramingViewedItem");
static_assert(sizeof(MissionSetDetails_C_GetWidgetForFramingViewedItem) == 0x000008, "Wrong size on MissionSetDetails_C_GetWidgetForFramingViewedItem");
static_assert(offsetof(MissionSetDetails_C_GetWidgetForFramingViewedItem, ReturnValue) == 0x000000, "Member 'MissionSetDetails_C_GetWidgetForFramingViewedItem::ReturnValue' has a wrong offset!");

// Function MissionSetDetails.MissionSetDetails_C.SetupPrestigeFXColors
// 0x0040 (0x0040 - 0x0000)
struct MissionSetDetails_C_SetupPrestigeFXColors final
{
public:
	struct FLinearColor                           PrimaryColor;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           SecondaryColor;                                    // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           AccentColor;                                       // 0x0020(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;         // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MissionSetDetails_C_SetupPrestigeFXColors) == 0x000008, "Wrong alignment on MissionSetDetails_C_SetupPrestigeFXColors");
static_assert(sizeof(MissionSetDetails_C_SetupPrestigeFXColors) == 0x000040, "Wrong size on MissionSetDetails_C_SetupPrestigeFXColors");
static_assert(offsetof(MissionSetDetails_C_SetupPrestigeFXColors, PrimaryColor) == 0x000000, "Member 'MissionSetDetails_C_SetupPrestigeFXColors::PrimaryColor' has a wrong offset!");
static_assert(offsetof(MissionSetDetails_C_SetupPrestigeFXColors, SecondaryColor) == 0x000010, "Member 'MissionSetDetails_C_SetupPrestigeFXColors::SecondaryColor' has a wrong offset!");
static_assert(offsetof(MissionSetDetails_C_SetupPrestigeFXColors, AccentColor) == 0x000020, "Member 'MissionSetDetails_C_SetupPrestigeFXColors::AccentColor' has a wrong offset!");
static_assert(offsetof(MissionSetDetails_C_SetupPrestigeFXColors, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000030, "Member 'MissionSetDetails_C_SetupPrestigeFXColors::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionSetDetails_C_SetupPrestigeFXColors, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x000038, "Member 'MissionSetDetails_C_SetupPrestigeFXColors::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");

// Function MissionSetDetails.MissionSetDetails_C.SetPrestigeFXStateNormal
// 0x0004 (0x0004 - 0x0000)
struct MissionSetDetails_C_SetPrestigeFXStateNormal final
{
public:
	float                                         CallFunc_GetRenderOpacity_ReturnValue;             // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MissionSetDetails_C_SetPrestigeFXStateNormal) == 0x000004, "Wrong alignment on MissionSetDetails_C_SetPrestigeFXStateNormal");
static_assert(sizeof(MissionSetDetails_C_SetPrestigeFXStateNormal) == 0x000004, "Wrong size on MissionSetDetails_C_SetPrestigeFXStateNormal");
static_assert(offsetof(MissionSetDetails_C_SetPrestigeFXStateNormal, CallFunc_GetRenderOpacity_ReturnValue) == 0x000000, "Member 'MissionSetDetails_C_SetPrestigeFXStateNormal::CallFunc_GetRenderOpacity_ReturnValue' has a wrong offset!");

// Function MissionSetDetails.MissionSetDetails_C.AnimatePrestigeFX
// 0x0018 (0x0018 - 0x0000)
struct MissionSetDetails_C_AnimatePrestigeFX final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MissionSetDetails_C_AnimatePrestigeFX) == 0x000008, "Wrong alignment on MissionSetDetails_C_AnimatePrestigeFX");
static_assert(sizeof(MissionSetDetails_C_AnimatePrestigeFX) == 0x000018, "Wrong size on MissionSetDetails_C_AnimatePrestigeFX");
static_assert(offsetof(MissionSetDetails_C_AnimatePrestigeFX, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'MissionSetDetails_C_AnimatePrestigeFX::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MissionSetDetails_C_AnimatePrestigeFX, CallFunc_PlayAnimationForward_ReturnValue) == 0x000010, "Member 'MissionSetDetails_C_AnimatePrestigeFX::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

// Function MissionSetDetails.MissionSetDetails_C.AnimatePrestigeFX_Off
// 0x0018 (0x0018 - 0x0000)
struct MissionSetDetails_C_AnimatePrestigeFX_Off final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MissionSetDetails_C_AnimatePrestigeFX_Off) == 0x000008, "Wrong alignment on MissionSetDetails_C_AnimatePrestigeFX_Off");
static_assert(sizeof(MissionSetDetails_C_AnimatePrestigeFX_Off) == 0x000018, "Wrong size on MissionSetDetails_C_AnimatePrestigeFX_Off");
static_assert(offsetof(MissionSetDetails_C_AnimatePrestigeFX_Off, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'MissionSetDetails_C_AnimatePrestigeFX_Off::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MissionSetDetails_C_AnimatePrestigeFX_Off, CallFunc_PlayAnimationForward_ReturnValue) == 0x000010, "Member 'MissionSetDetails_C_AnimatePrestigeFX_Off::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

// Function MissionSetDetails.MissionSetDetails_C.SetPrestigeFXStatePrestige
// 0x0004 (0x0004 - 0x0000)
struct MissionSetDetails_C_SetPrestigeFXStatePrestige final
{
public:
	float                                         CallFunc_GetRenderOpacity_ReturnValue;             // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MissionSetDetails_C_SetPrestigeFXStatePrestige) == 0x000004, "Wrong alignment on MissionSetDetails_C_SetPrestigeFXStatePrestige");
static_assert(sizeof(MissionSetDetails_C_SetPrestigeFXStatePrestige) == 0x000004, "Wrong size on MissionSetDetails_C_SetPrestigeFXStatePrestige");
static_assert(offsetof(MissionSetDetails_C_SetPrestigeFXStatePrestige, CallFunc_GetRenderOpacity_ReturnValue) == 0x000000, "Member 'MissionSetDetails_C_SetPrestigeFXStatePrestige::CallFunc_GetRenderOpacity_ReturnValue' has a wrong offset!");

// Function MissionSetDetails.MissionSetDetails_C.AnimateInPrestigeTimeline
// 0x0008 (0x0008 - 0x0000)
struct MissionSetDetails_C_AnimateInPrestigeTimeline final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MissionSetDetails_C_AnimateInPrestigeTimeline) == 0x000008, "Wrong alignment on MissionSetDetails_C_AnimateInPrestigeTimeline");
static_assert(sizeof(MissionSetDetails_C_AnimateInPrestigeTimeline) == 0x000008, "Wrong size on MissionSetDetails_C_AnimateInPrestigeTimeline");
static_assert(offsetof(MissionSetDetails_C_AnimateInPrestigeTimeline, CallFunc_PlayAnimationForward_ReturnValue) == 0x000000, "Member 'MissionSetDetails_C_AnimateInPrestigeTimeline::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

// Function MissionSetDetails.MissionSetDetails_C.AnimateInNormalTimeline
// 0x0008 (0x0008 - 0x0000)
struct MissionSetDetails_C_AnimateInNormalTimeline final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MissionSetDetails_C_AnimateInNormalTimeline) == 0x000008, "Wrong alignment on MissionSetDetails_C_AnimateInNormalTimeline");
static_assert(sizeof(MissionSetDetails_C_AnimateInNormalTimeline) == 0x000008, "Wrong size on MissionSetDetails_C_AnimateInNormalTimeline");
static_assert(offsetof(MissionSetDetails_C_AnimateInNormalTimeline, CallFunc_PlayAnimationForward_ReturnValue) == 0x000000, "Member 'MissionSetDetails_C_AnimateInNormalTimeline::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

}
