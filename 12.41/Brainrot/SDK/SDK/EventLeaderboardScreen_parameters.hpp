#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EventLeaderboardScreen

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"


namespace SDK::Params
{

// Function EventLeaderboardScreen.EventLeaderboardScreen_C.ExecuteUbergraph_EventLeaderboardScreen
// 0x0208 (0x0208 - 0x0000)
struct EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6FAF[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ULeaderboardTab_C*                      K2Node_DynamicCast_AsLeaderboard_Tab;              // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6FB0[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button_2;               // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortTournamentDisplayInfo             K2Node_CustomEvent_TournamentDisplayInfo;          // 0x0020(0x0170)()
	TDelegate<void(class UObject* Item)>          K2Node_CreateDelegate_OutputDelegate;              // 0x0190(0x0010)(ZeroConstructor, NoDestructor)
	const class UFortEventLeaderboardEntryData*   K2Node_Event_EntryData;                            // 0x01A0(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UCommonButton* Button)>  K2Node_CreateDelegate_OutputDelegate_1;            // 0x01A8(0x0010)(ZeroConstructor, NoDestructor)
	class UCommonButton*                          K2Node_CustomEvent_Button;                         // 0x01B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortEventLeaderboardEntryData*         CallFunc_GetMyLeaderboardEntry_ReturnValue;        // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button_1;               // 0x01C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button;                 // 0x01D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UListView*                              CallFunc_GetListView_ReturnValue;                  // 0x01D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULeaderboardListViewWrapper_C*          K2Node_DynamicCast_AsLeaderboard_List_View_Wrapper; // 0x01E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6FB1[0x7];                                     // 0x01E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Item;                           // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortEventLeaderboardEntryData*         K2Node_DynamicCast_AsFort_Event_Leaderboard_Entry_Data; // 0x01F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen) == 0x000008, "Wrong alignment on EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen");
static_assert(sizeof(EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen) == 0x000208, "Wrong size on EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen");
static_assert(offsetof(EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen, EntryPoint) == 0x000000, "Member 'EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen::EntryPoint' has a wrong offset!");
static_assert(offsetof(EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen, K2Node_DynamicCast_AsLeaderboard_Tab) == 0x000008, "Member 'EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen::K2Node_DynamicCast_AsLeaderboard_Tab' has a wrong offset!");
static_assert(offsetof(EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen, K2Node_ComponentBoundEvent_Button_2) == 0x000018, "Member 'EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen::K2Node_ComponentBoundEvent_Button_2' has a wrong offset!");
static_assert(offsetof(EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen, K2Node_CustomEvent_TournamentDisplayInfo) == 0x000020, "Member 'EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen::K2Node_CustomEvent_TournamentDisplayInfo' has a wrong offset!");
static_assert(offsetof(EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen, K2Node_CreateDelegate_OutputDelegate) == 0x000190, "Member 'EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen, K2Node_Event_EntryData) == 0x0001A0, "Member 'EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen::K2Node_Event_EntryData' has a wrong offset!");
static_assert(offsetof(EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen, K2Node_CreateDelegate_OutputDelegate_1) == 0x0001A8, "Member 'EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen, K2Node_CustomEvent_Button) == 0x0001B8, "Member 'EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen::K2Node_CustomEvent_Button' has a wrong offset!");
static_assert(offsetof(EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen, CallFunc_GetMyLeaderboardEntry_ReturnValue) == 0x0001C0, "Member 'EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen::CallFunc_GetMyLeaderboardEntry_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen, K2Node_ComponentBoundEvent_Button_1) == 0x0001C8, "Member 'EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen::K2Node_ComponentBoundEvent_Button_1' has a wrong offset!");
static_assert(offsetof(EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen, K2Node_ComponentBoundEvent_Button) == 0x0001D0, "Member 'EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen, CallFunc_GetListView_ReturnValue) == 0x0001D8, "Member 'EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen::CallFunc_GetListView_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen, K2Node_DynamicCast_AsLeaderboard_List_View_Wrapper) == 0x0001E0, "Member 'EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen::K2Node_DynamicCast_AsLeaderboard_List_View_Wrapper' has a wrong offset!");
static_assert(offsetof(EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen, K2Node_DynamicCast_bSuccess_1) == 0x0001E8, "Member 'EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen, K2Node_CustomEvent_Item) == 0x0001F0, "Member 'EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen::K2Node_CustomEvent_Item' has a wrong offset!");
static_assert(offsetof(EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen, K2Node_DynamicCast_AsFort_Event_Leaderboard_Entry_Data) == 0x0001F8, "Member 'EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen::K2Node_DynamicCast_AsFort_Event_Leaderboard_Entry_Data' has a wrong offset!");
static_assert(offsetof(EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen, K2Node_DynamicCast_bSuccess_2) == 0x000200, "Member 'EventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");

// Function EventLeaderboardScreen.EventLeaderboardScreen_C.Item Double-Clicked
// 0x0008 (0x0008 - 0x0000)
struct EventLeaderboardScreen_C_Item_DoubleMinusClicked final
{
public:
	class UObject*                                Item;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventLeaderboardScreen_C_Item_DoubleMinusClicked) == 0x000008, "Wrong alignment on EventLeaderboardScreen_C_Item_DoubleMinusClicked");
static_assert(sizeof(EventLeaderboardScreen_C_Item_DoubleMinusClicked) == 0x000008, "Wrong size on EventLeaderboardScreen_C_Item_DoubleMinusClicked");
static_assert(offsetof(EventLeaderboardScreen_C_Item_DoubleMinusClicked, Item) == 0x000000, "Member 'EventLeaderboardScreen_C_Item_DoubleMinusClicked::Item' has a wrong offset!");

// Function EventLeaderboardScreen.EventLeaderboardScreen_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct EventLeaderboardScreen_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventLeaderboardScreen_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on EventLeaderboardScreen_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(EventLeaderboardScreen_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on EventLeaderboardScreen_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(EventLeaderboardScreen_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'EventLeaderboardScreen_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function EventLeaderboardScreen.EventLeaderboardScreen_C.BndEvt__LiveGames_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct EventLeaderboardScreen_C_BndEvt__LiveGames_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventLeaderboardScreen_C_BndEvt__LiveGames_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on EventLeaderboardScreen_C_BndEvt__LiveGames_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(EventLeaderboardScreen_C_BndEvt__LiveGames_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on EventLeaderboardScreen_C_BndEvt__LiveGames_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(EventLeaderboardScreen_C_BndEvt__LiveGames_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'EventLeaderboardScreen_C_BndEvt__LiveGames_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function EventLeaderboardScreen.EventLeaderboardScreen_C.ShowMyStats
// 0x0008 (0x0008 - 0x0000)
struct EventLeaderboardScreen_C_ShowMyStats final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventLeaderboardScreen_C_ShowMyStats) == 0x000008, "Wrong alignment on EventLeaderboardScreen_C_ShowMyStats");
static_assert(sizeof(EventLeaderboardScreen_C_ShowMyStats) == 0x000008, "Wrong size on EventLeaderboardScreen_C_ShowMyStats");
static_assert(offsetof(EventLeaderboardScreen_C_ShowMyStats, Button) == 0x000000, "Member 'EventLeaderboardScreen_C_ShowMyStats::Button' has a wrong offset!");

// Function EventLeaderboardScreen.EventLeaderboardScreen_C.OnLeaderboardEntrySelected
// 0x0008 (0x0008 - 0x0000)
struct EventLeaderboardScreen_C_OnLeaderboardEntrySelected final
{
public:
	const class UFortEventLeaderboardEntryData*   EntryData;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventLeaderboardScreen_C_OnLeaderboardEntrySelected) == 0x000008, "Wrong alignment on EventLeaderboardScreen_C_OnLeaderboardEntrySelected");
static_assert(sizeof(EventLeaderboardScreen_C_OnLeaderboardEntrySelected) == 0x000008, "Wrong size on EventLeaderboardScreen_C_OnLeaderboardEntrySelected");
static_assert(offsetof(EventLeaderboardScreen_C_OnLeaderboardEntrySelected, EntryData) == 0x000000, "Member 'EventLeaderboardScreen_C_OnLeaderboardEntrySelected::EntryData' has a wrong offset!");

// Function EventLeaderboardScreen.EventLeaderboardScreen_C.EventColorize
// 0x0170 (0x0170 - 0x0000)
struct EventLeaderboardScreen_C_EventColorize final
{
public:
	struct FFortTournamentDisplayInfo             TournamentDisplayInfo;                             // 0x0000(0x0170)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(EventLeaderboardScreen_C_EventColorize) == 0x000008, "Wrong alignment on EventLeaderboardScreen_C_EventColorize");
static_assert(sizeof(EventLeaderboardScreen_C_EventColorize) == 0x000170, "Wrong size on EventLeaderboardScreen_C_EventColorize");
static_assert(offsetof(EventLeaderboardScreen_C_EventColorize, TournamentDisplayInfo) == 0x000000, "Member 'EventLeaderboardScreen_C_EventColorize::TournamentDisplayInfo' has a wrong offset!");

// Function EventLeaderboardScreen.EventLeaderboardScreen_C.BndEvt__Button_Back2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct EventLeaderboardScreen_C_BndEvt__Button_Back2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventLeaderboardScreen_C_BndEvt__Button_Back2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on EventLeaderboardScreen_C_BndEvt__Button_Back2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(EventLeaderboardScreen_C_BndEvt__Button_Back2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on EventLeaderboardScreen_C_BndEvt__Button_Back2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(EventLeaderboardScreen_C_BndEvt__Button_Back2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'EventLeaderboardScreen_C_BndEvt__Button_Back2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function EventLeaderboardScreen.EventLeaderboardScreen_C.Init
// 0x0030 (0x0030 - 0x0000)
struct EventLeaderboardScreen_C_Init final
{
public:
	class FString                                 EventWindowId;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 TournamentSeriesId;                                // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class ULeaderboardTab_C*                      K2Node_DynamicCast_AsLeaderboard_Tab;              // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventLeaderboardScreen_C_Init) == 0x000008, "Wrong alignment on EventLeaderboardScreen_C_Init");
static_assert(sizeof(EventLeaderboardScreen_C_Init) == 0x000030, "Wrong size on EventLeaderboardScreen_C_Init");
static_assert(offsetof(EventLeaderboardScreen_C_Init, EventWindowId) == 0x000000, "Member 'EventLeaderboardScreen_C_Init::EventWindowId' has a wrong offset!");
static_assert(offsetof(EventLeaderboardScreen_C_Init, TournamentSeriesId) == 0x000010, "Member 'EventLeaderboardScreen_C_Init::TournamentSeriesId' has a wrong offset!");
static_assert(offsetof(EventLeaderboardScreen_C_Init, K2Node_DynamicCast_AsLeaderboard_Tab) == 0x000020, "Member 'EventLeaderboardScreen_C_Init::K2Node_DynamicCast_AsLeaderboard_Tab' has a wrong offset!");
static_assert(offsetof(EventLeaderboardScreen_C_Init, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'EventLeaderboardScreen_C_Init::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

