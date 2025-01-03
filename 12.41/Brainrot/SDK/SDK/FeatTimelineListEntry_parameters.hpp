#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FeatTimelineListEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function FeatTimelineListEntry.FeatTimelineListEntry_C.ExecuteUbergraph_FeatTimelineListEntry
// 0x00A8 (0x00A8 - 0x0000)
struct FeatTimelineListEntry_C_ExecuteUbergraph_FeatTimelineListEntry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7044[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_NumFeatsOnDay;                        // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_IdxOnDay;                             // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0024(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin_1;                        // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue_1;          // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_NumDays;                              // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7045[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_IntFloat_ReturnValue_2;          // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7046[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                     CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;      // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                     CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_1;    // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7047[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_3;              // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsHovered_ReturnValue;                    // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7048[0x6];                                     // 0x008A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button_1;               // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button;                 // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsUsingTouch_ReturnValue;                 // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FeatTimelineListEntry_C_ExecuteUbergraph_FeatTimelineListEntry) == 0x000008, "Wrong alignment on FeatTimelineListEntry_C_ExecuteUbergraph_FeatTimelineListEntry");
static_assert(sizeof(FeatTimelineListEntry_C_ExecuteUbergraph_FeatTimelineListEntry) == 0x0000A8, "Wrong size on FeatTimelineListEntry_C_ExecuteUbergraph_FeatTimelineListEntry");
static_assert(offsetof(FeatTimelineListEntry_C_ExecuteUbergraph_FeatTimelineListEntry, EntryPoint) == 0x000000, "Member 'FeatTimelineListEntry_C_ExecuteUbergraph_FeatTimelineListEntry::EntryPoint' has a wrong offset!");
static_assert(offsetof(FeatTimelineListEntry_C_ExecuteUbergraph_FeatTimelineListEntry, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'FeatTimelineListEntry_C_ExecuteUbergraph_FeatTimelineListEntry::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(FeatTimelineListEntry_C_ExecuteUbergraph_FeatTimelineListEntry, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'FeatTimelineListEntry_C_ExecuteUbergraph_FeatTimelineListEntry::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FeatTimelineListEntry_C_ExecuteUbergraph_FeatTimelineListEntry, K2Node_Event_NumFeatsOnDay) == 0x000018, "Member 'FeatTimelineListEntry_C_ExecuteUbergraph_FeatTimelineListEntry::K2Node_Event_NumFeatsOnDay' has a wrong offset!");
static_assert(offsetof(FeatTimelineListEntry_C_ExecuteUbergraph_FeatTimelineListEntry, K2Node_Event_IdxOnDay) == 0x00001C, "Member 'FeatTimelineListEntry_C_ExecuteUbergraph_FeatTimelineListEntry::K2Node_Event_IdxOnDay' has a wrong offset!");
static_assert(offsetof(FeatTimelineListEntry_C_ExecuteUbergraph_FeatTimelineListEntry, CallFunc_Multiply_IntFloat_ReturnValue) == 0x000020, "Member 'FeatTimelineListEntry_C_ExecuteUbergraph_FeatTimelineListEntry::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(FeatTimelineListEntry_C_ExecuteUbergraph_FeatTimelineListEntry, K2Node_MakeStruct_Margin) == 0x000024, "Member 'FeatTimelineListEntry_C_ExecuteUbergraph_FeatTimelineListEntry::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(FeatTimelineListEntry_C_ExecuteUbergraph_FeatTimelineListEntry, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000034, "Member 'FeatTimelineListEntry_C_ExecuteUbergraph_FeatTimelineListEntry::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(FeatTimelineListEntry_C_ExecuteUbergraph_FeatTimelineListEntry, K2Node_MakeStruct_Margin_1) == 0x000038, "Member 'FeatTimelineListEntry_C_ExecuteUbergraph_FeatTimelineListEntry::K2Node_MakeStruct_Margin_1' has a wrong offset!");
static_assert(offsetof(FeatTimelineListEntry_C_ExecuteUbergraph_FeatTimelineListEntry, CallFunc_Multiply_IntFloat_ReturnValue_1) == 0x000048, "Member 'FeatTimelineListEntry_C_ExecuteUbergraph_FeatTimelineListEntry::CallFunc_Multiply_IntFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FeatTimelineListEntry_C_ExecuteUbergraph_FeatTimelineListEntry, K2Node_Event_NumDays) == 0x00004C, "Member 'FeatTimelineListEntry_C_ExecuteUbergraph_FeatTimelineListEntry::K2Node_Event_NumDays' has a wrong offset!");
static_assert(offsetof(FeatTimelineListEntry_C_ExecuteUbergraph_FeatTimelineListEntry, K2Node_Event_IsDesignTime) == 0x000050, "Member 'FeatTimelineListEntry_C_ExecuteUbergraph_FeatTimelineListEntry::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(FeatTimelineListEntry_C_ExecuteUbergraph_FeatTimelineListEntry, CallFunc_Multiply_IntFloat_ReturnValue_2) == 0x000054, "Member 'FeatTimelineListEntry_C_ExecuteUbergraph_FeatTimelineListEntry::CallFunc_Multiply_IntFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FeatTimelineListEntry_C_ExecuteUbergraph_FeatTimelineListEntry, CallFunc_IsVisible_ReturnValue) == 0x000058, "Member 'FeatTimelineListEntry_C_ExecuteUbergraph_FeatTimelineListEntry::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(FeatTimelineListEntry_C_ExecuteUbergraph_FeatTimelineListEntry, CallFunc_PlayAnimation_ReturnValue_2) == 0x000060, "Member 'FeatTimelineListEntry_C_ExecuteUbergraph_FeatTimelineListEntry::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FeatTimelineListEntry_C_ExecuteUbergraph_FeatTimelineListEntry, CallFunc_SlotAsHorizontalBoxSlot_ReturnValue) == 0x000068, "Member 'FeatTimelineListEntry_C_ExecuteUbergraph_FeatTimelineListEntry::CallFunc_SlotAsHorizontalBoxSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(FeatTimelineListEntry_C_ExecuteUbergraph_FeatTimelineListEntry, CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_1) == 0x000070, "Member 'FeatTimelineListEntry_C_ExecuteUbergraph_FeatTimelineListEntry::CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FeatTimelineListEntry_C_ExecuteUbergraph_FeatTimelineListEntry, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000078, "Member 'FeatTimelineListEntry_C_ExecuteUbergraph_FeatTimelineListEntry::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(FeatTimelineListEntry_C_ExecuteUbergraph_FeatTimelineListEntry, CallFunc_PlayAnimation_ReturnValue_3) == 0x000080, "Member 'FeatTimelineListEntry_C_ExecuteUbergraph_FeatTimelineListEntry::CallFunc_PlayAnimation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(FeatTimelineListEntry_C_ExecuteUbergraph_FeatTimelineListEntry, CallFunc_IsHovered_ReturnValue) == 0x000088, "Member 'FeatTimelineListEntry_C_ExecuteUbergraph_FeatTimelineListEntry::CallFunc_IsHovered_ReturnValue' has a wrong offset!");
static_assert(offsetof(FeatTimelineListEntry_C_ExecuteUbergraph_FeatTimelineListEntry, CallFunc_BooleanOR_ReturnValue) == 0x000089, "Member 'FeatTimelineListEntry_C_ExecuteUbergraph_FeatTimelineListEntry::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(FeatTimelineListEntry_C_ExecuteUbergraph_FeatTimelineListEntry, K2Node_ComponentBoundEvent_Button_1) == 0x000090, "Member 'FeatTimelineListEntry_C_ExecuteUbergraph_FeatTimelineListEntry::K2Node_ComponentBoundEvent_Button_1' has a wrong offset!");
static_assert(offsetof(FeatTimelineListEntry_C_ExecuteUbergraph_FeatTimelineListEntry, K2Node_ComponentBoundEvent_Button) == 0x000098, "Member 'FeatTimelineListEntry_C_ExecuteUbergraph_FeatTimelineListEntry::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(FeatTimelineListEntry_C_ExecuteUbergraph_FeatTimelineListEntry, CallFunc_IsUsingTouch_ReturnValue) == 0x0000A0, "Member 'FeatTimelineListEntry_C_ExecuteUbergraph_FeatTimelineListEntry::CallFunc_IsUsingTouch_ReturnValue' has a wrong offset!");
static_assert(offsetof(FeatTimelineListEntry_C_ExecuteUbergraph_FeatTimelineListEntry, CallFunc_Not_PreBool_ReturnValue) == 0x0000A1, "Member 'FeatTimelineListEntry_C_ExecuteUbergraph_FeatTimelineListEntry::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function FeatTimelineListEntry.FeatTimelineListEntry_C.BndEvt__SimpleButton_ClickArea_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct FeatTimelineListEntry_C_BndEvt__SimpleButton_ClickArea_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FeatTimelineListEntry_C_BndEvt__SimpleButton_ClickArea_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on FeatTimelineListEntry_C_BndEvt__SimpleButton_ClickArea_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(FeatTimelineListEntry_C_BndEvt__SimpleButton_ClickArea_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on FeatTimelineListEntry_C_BndEvt__SimpleButton_ClickArea_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(FeatTimelineListEntry_C_BndEvt__SimpleButton_ClickArea_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'FeatTimelineListEntry_C_BndEvt__SimpleButton_ClickArea_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function FeatTimelineListEntry.FeatTimelineListEntry_C.BndEvt__SimpleButton_ClickArea_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct FeatTimelineListEntry_C_BndEvt__SimpleButton_ClickArea_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FeatTimelineListEntry_C_BndEvt__SimpleButton_ClickArea_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on FeatTimelineListEntry_C_BndEvt__SimpleButton_ClickArea_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(FeatTimelineListEntry_C_BndEvt__SimpleButton_ClickArea_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on FeatTimelineListEntry_C_BndEvt__SimpleButton_ClickArea_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(FeatTimelineListEntry_C_BndEvt__SimpleButton_ClickArea_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'FeatTimelineListEntry_C_BndEvt__SimpleButton_ClickArea_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function FeatTimelineListEntry.FeatTimelineListEntry_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct FeatTimelineListEntry_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FeatTimelineListEntry_C_PreConstruct) == 0x000001, "Wrong alignment on FeatTimelineListEntry_C_PreConstruct");
static_assert(sizeof(FeatTimelineListEntry_C_PreConstruct) == 0x000001, "Wrong size on FeatTimelineListEntry_C_PreConstruct");
static_assert(offsetof(FeatTimelineListEntry_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'FeatTimelineListEntry_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function FeatTimelineListEntry.FeatTimelineListEntry_C.OnTimespanInfoSet
// 0x0004 (0x0004 - 0x0000)
struct FeatTimelineListEntry_C_OnTimespanInfoSet final
{
public:
	int32                                         NumDays;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FeatTimelineListEntry_C_OnTimespanInfoSet) == 0x000004, "Wrong alignment on FeatTimelineListEntry_C_OnTimespanInfoSet");
static_assert(sizeof(FeatTimelineListEntry_C_OnTimespanInfoSet) == 0x000004, "Wrong size on FeatTimelineListEntry_C_OnTimespanInfoSet");
static_assert(offsetof(FeatTimelineListEntry_C_OnTimespanInfoSet, NumDays) == 0x000000, "Member 'FeatTimelineListEntry_C_OnTimespanInfoSet::NumDays' has a wrong offset!");

// Function FeatTimelineListEntry.FeatTimelineListEntry_C.OnFeatInfoSet
// 0x0008 (0x0008 - 0x0000)
struct FeatTimelineListEntry_C_OnFeatInfoSet final
{
public:
	int32                                         NumFeatsOnDay;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         IdxOnDay;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FeatTimelineListEntry_C_OnFeatInfoSet) == 0x000004, "Wrong alignment on FeatTimelineListEntry_C_OnFeatInfoSet");
static_assert(sizeof(FeatTimelineListEntry_C_OnFeatInfoSet) == 0x000008, "Wrong size on FeatTimelineListEntry_C_OnFeatInfoSet");
static_assert(offsetof(FeatTimelineListEntry_C_OnFeatInfoSet, NumFeatsOnDay) == 0x000000, "Member 'FeatTimelineListEntry_C_OnFeatInfoSet::NumFeatsOnDay' has a wrong offset!");
static_assert(offsetof(FeatTimelineListEntry_C_OnFeatInfoSet, IdxOnDay) == 0x000004, "Member 'FeatTimelineListEntry_C_OnFeatInfoSet::IdxOnDay' has a wrong offset!");

// Function FeatTimelineListEntry.FeatTimelineListEntry_C.SetSeasonStyle
// 0x0190 (0x0190 - 0x0000)
struct FeatTimelineListEntry_C_SetSeasonStyle final
{
public:
	struct FLinearColor                           Season12Color2;                                    // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Season12Color1;                                    // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Season11Color2;                                    // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Season11Color1;                                    // 0x0030(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Season12;                                          // 0x0040(0x0018)(Edit, BlueprintVisible)
	class FText                                   Season11;                                          // 0x0058(0x0018)(Edit, BlueprintVisible)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;         // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_2;         // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_3;         // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_4;         // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_5;         // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_6;         // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00A8(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00E8(0x0010)(ZeroConstructor, ReferenceParm)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_7;         // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0100(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0118(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0158(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0168(0x0018)()
	struct FGameplayTag                           CallFunc_CalculateSourceTag_ReturnValue;           // 0x0180(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;   // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FeatTimelineListEntry_C_SetSeasonStyle) == 0x000008, "Wrong alignment on FeatTimelineListEntry_C_SetSeasonStyle");
static_assert(sizeof(FeatTimelineListEntry_C_SetSeasonStyle) == 0x000190, "Wrong size on FeatTimelineListEntry_C_SetSeasonStyle");
static_assert(offsetof(FeatTimelineListEntry_C_SetSeasonStyle, Season12Color2) == 0x000000, "Member 'FeatTimelineListEntry_C_SetSeasonStyle::Season12Color2' has a wrong offset!");
static_assert(offsetof(FeatTimelineListEntry_C_SetSeasonStyle, Season12Color1) == 0x000010, "Member 'FeatTimelineListEntry_C_SetSeasonStyle::Season12Color1' has a wrong offset!");
static_assert(offsetof(FeatTimelineListEntry_C_SetSeasonStyle, Season11Color2) == 0x000020, "Member 'FeatTimelineListEntry_C_SetSeasonStyle::Season11Color2' has a wrong offset!");
static_assert(offsetof(FeatTimelineListEntry_C_SetSeasonStyle, Season11Color1) == 0x000030, "Member 'FeatTimelineListEntry_C_SetSeasonStyle::Season11Color1' has a wrong offset!");
static_assert(offsetof(FeatTimelineListEntry_C_SetSeasonStyle, Season12) == 0x000040, "Member 'FeatTimelineListEntry_C_SetSeasonStyle::Season12' has a wrong offset!");
static_assert(offsetof(FeatTimelineListEntry_C_SetSeasonStyle, Season11) == 0x000058, "Member 'FeatTimelineListEntry_C_SetSeasonStyle::Season11' has a wrong offset!");
static_assert(offsetof(FeatTimelineListEntry_C_SetSeasonStyle, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000070, "Member 'FeatTimelineListEntry_C_SetSeasonStyle::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(FeatTimelineListEntry_C_SetSeasonStyle, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x000078, "Member 'FeatTimelineListEntry_C_SetSeasonStyle::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FeatTimelineListEntry_C_SetSeasonStyle, CallFunc_GetDynamicMaterial_ReturnValue_2) == 0x000080, "Member 'FeatTimelineListEntry_C_SetSeasonStyle::CallFunc_GetDynamicMaterial_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FeatTimelineListEntry_C_SetSeasonStyle, CallFunc_GetDynamicMaterial_ReturnValue_3) == 0x000088, "Member 'FeatTimelineListEntry_C_SetSeasonStyle::CallFunc_GetDynamicMaterial_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(FeatTimelineListEntry_C_SetSeasonStyle, CallFunc_GetDynamicMaterial_ReturnValue_4) == 0x000090, "Member 'FeatTimelineListEntry_C_SetSeasonStyle::CallFunc_GetDynamicMaterial_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(FeatTimelineListEntry_C_SetSeasonStyle, CallFunc_GetDynamicMaterial_ReturnValue_5) == 0x000098, "Member 'FeatTimelineListEntry_C_SetSeasonStyle::CallFunc_GetDynamicMaterial_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(FeatTimelineListEntry_C_SetSeasonStyle, CallFunc_GetDynamicMaterial_ReturnValue_6) == 0x0000A0, "Member 'FeatTimelineListEntry_C_SetSeasonStyle::CallFunc_GetDynamicMaterial_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(FeatTimelineListEntry_C_SetSeasonStyle, K2Node_MakeStruct_FormatArgumentData) == 0x0000A8, "Member 'FeatTimelineListEntry_C_SetSeasonStyle::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(FeatTimelineListEntry_C_SetSeasonStyle, K2Node_MakeArray_Array) == 0x0000E8, "Member 'FeatTimelineListEntry_C_SetSeasonStyle::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(FeatTimelineListEntry_C_SetSeasonStyle, CallFunc_GetDynamicMaterial_ReturnValue_7) == 0x0000F8, "Member 'FeatTimelineListEntry_C_SetSeasonStyle::CallFunc_GetDynamicMaterial_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(FeatTimelineListEntry_C_SetSeasonStyle, CallFunc_Format_ReturnValue) == 0x000100, "Member 'FeatTimelineListEntry_C_SetSeasonStyle::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(FeatTimelineListEntry_C_SetSeasonStyle, K2Node_MakeStruct_FormatArgumentData_1) == 0x000118, "Member 'FeatTimelineListEntry_C_SetSeasonStyle::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(FeatTimelineListEntry_C_SetSeasonStyle, K2Node_MakeArray_Array_1) == 0x000158, "Member 'FeatTimelineListEntry_C_SetSeasonStyle::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(FeatTimelineListEntry_C_SetSeasonStyle, CallFunc_Format_ReturnValue_1) == 0x000168, "Member 'FeatTimelineListEntry_C_SetSeasonStyle::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FeatTimelineListEntry_C_SetSeasonStyle, CallFunc_CalculateSourceTag_ReturnValue) == 0x000180, "Member 'FeatTimelineListEntry_C_SetSeasonStyle::CallFunc_CalculateSourceTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(FeatTimelineListEntry_C_SetSeasonStyle, GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess) == 0x000188, "Member 'FeatTimelineListEntry_C_SetSeasonStyle::GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess' has a wrong offset!");

}

