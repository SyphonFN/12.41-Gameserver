#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaNews

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"


namespace SDK::Params
{

// Function AthenaNews.AthenaNews_C.UpdateStyle__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct AthenaNews_C_UpdateStyle__DelegateSignature final
{
public:
	EAthenaNewsStyle                              NewStyle;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaNews_C_UpdateStyle__DelegateSignature) == 0x000001, "Wrong alignment on AthenaNews_C_UpdateStyle__DelegateSignature");
static_assert(sizeof(AthenaNews_C_UpdateStyle__DelegateSignature) == 0x000001, "Wrong size on AthenaNews_C_UpdateStyle__DelegateSignature");
static_assert(offsetof(AthenaNews_C_UpdateStyle__DelegateSignature, NewStyle) == 0x000000, "Member 'AthenaNews_C_UpdateStyle__DelegateSignature::NewStyle' has a wrong offset!");

// Function AthenaNews.AthenaNews_C.ExecuteUbergraph_AthenaNews
// 0x0020 (0x0020 - 0x0000)
struct AthenaNews_C_ExecuteUbergraph_AthenaNews final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_644F[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EAthenaNewsStyle                              K2Node_Event_NewsStyle;                            // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6450[0x1];                                     // 0x0017(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaNews_C_ExecuteUbergraph_AthenaNews) == 0x000008, "Wrong alignment on AthenaNews_C_ExecuteUbergraph_AthenaNews");
static_assert(sizeof(AthenaNews_C_ExecuteUbergraph_AthenaNews) == 0x000020, "Wrong size on AthenaNews_C_ExecuteUbergraph_AthenaNews");
static_assert(offsetof(AthenaNews_C_ExecuteUbergraph_AthenaNews, EntryPoint) == 0x000000, "Member 'AthenaNews_C_ExecuteUbergraph_AthenaNews::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaNews_C_ExecuteUbergraph_AthenaNews, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'AthenaNews_C_ExecuteUbergraph_AthenaNews::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaNews_C_ExecuteUbergraph_AthenaNews, CallFunc_GetActiveWidgetIndex_ReturnValue) == 0x000010, "Member 'AthenaNews_C_ExecuteUbergraph_AthenaNews::CallFunc_GetActiveWidgetIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaNews_C_ExecuteUbergraph_AthenaNews, K2Node_SwitchInteger_CmpSuccess) == 0x000014, "Member 'AthenaNews_C_ExecuteUbergraph_AthenaNews::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(AthenaNews_C_ExecuteUbergraph_AthenaNews, K2Node_Event_NewsStyle) == 0x000015, "Member 'AthenaNews_C_ExecuteUbergraph_AthenaNews::K2Node_Event_NewsStyle' has a wrong offset!");
static_assert(offsetof(AthenaNews_C_ExecuteUbergraph_AthenaNews, K2Node_SwitchEnum_CmpSuccess) == 0x000016, "Member 'AthenaNews_C_ExecuteUbergraph_AthenaNews::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(AthenaNews_C_ExecuteUbergraph_AthenaNews, CallFunc_PlayAnimation_ReturnValue_1) == 0x000018, "Member 'AthenaNews_C_ExecuteUbergraph_AthenaNews::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

// Function AthenaNews.AthenaNews_C.HandleNewsStyle
// 0x0001 (0x0001 - 0x0000)
struct AthenaNews_C_HandleNewsStyle final
{
public:
	EAthenaNewsStyle                              NewsStyle;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaNews_C_HandleNewsStyle) == 0x000001, "Wrong alignment on AthenaNews_C_HandleNewsStyle");
static_assert(sizeof(AthenaNews_C_HandleNewsStyle) == 0x000001, "Wrong size on AthenaNews_C_HandleNewsStyle");
static_assert(offsetof(AthenaNews_C_HandleNewsStyle, NewsStyle) == 0x000000, "Member 'AthenaNews_C_HandleNewsStyle::NewsStyle' has a wrong offset!");

}

