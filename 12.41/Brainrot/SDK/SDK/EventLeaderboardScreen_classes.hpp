#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EventLeaderboardScreen

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass EventLeaderboardScreen.EventLeaderboardScreen_C
// 0x0080 (0x03D0 - 0x0350)
class UEventLeaderboardScreen_C final : public UFortEventLeaderboardScreen
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UEventsSimpleButton_C*                  Button_Back;                                       // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCloseButton_C*                         CloseButton;                                       // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventLeaderboardEntryDetails_C*        EntryDetails;                                      // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventLeaderboardEventDetails_C*        EventLeaderboardEventDetails;                      // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_0;                                        // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortEventLeaderboardEntryData*         DebugLeaderboardEntry1;                            // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortEventLeaderboardEntryData*         DebugLeaderboardEntry2;                            // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortEventLeaderboardEntryData*         DebugLeaderboardEntry3;                            // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortEventLeaderboardEntryData*         DebugLeaderboardEntry4;                            // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortEventLeaderboardEntryData*> DebugLeaderboardEntries;                           // 0x03A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             EventCloseButton;                                  // 0x03B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             EventviewLiveGames;                                // 0x03C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void EventCloseButton__DelegateSignature();
	void EventViewLiveGames__DelegateSignature();
	void ExecuteUbergraph_EventLeaderboardScreen(int32 EntryPoint);
	void Item_DoubleMinusClicked(class UObject* Item);
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__LiveGames_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ShowMyStats(class UCommonButton* Button);
	void Construct();
	void Event_Leaderboard_Screen_On_Activated();
	void OnLeaderboardEntrySelected(const class UFortEventLeaderboardEntryData* EntryData);
	void EventIntro();
	void EventColorize(const struct FFortTournamentDisplayInfo& TournamentDisplayInfo);
	void BndEvt__Button_Back2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Init(const class FString& EventWindowId, const class FString& TournamentSeriesId);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EventLeaderboardScreen_C">();
	}
	static class UEventLeaderboardScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEventLeaderboardScreen_C>();
	}
};
static_assert(alignof(UEventLeaderboardScreen_C) == 0x000008, "Wrong alignment on UEventLeaderboardScreen_C");
static_assert(sizeof(UEventLeaderboardScreen_C) == 0x0003D0, "Wrong size on UEventLeaderboardScreen_C");
static_assert(offsetof(UEventLeaderboardScreen_C, UberGraphFrame) == 0x000350, "Member 'UEventLeaderboardScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardScreen_C, Button_Back) == 0x000358, "Member 'UEventLeaderboardScreen_C::Button_Back' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardScreen_C, CloseButton) == 0x000360, "Member 'UEventLeaderboardScreen_C::CloseButton' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardScreen_C, EntryDetails) == 0x000368, "Member 'UEventLeaderboardScreen_C::EntryDetails' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardScreen_C, EventLeaderboardEventDetails) == 0x000370, "Member 'UEventLeaderboardScreen_C::EventLeaderboardEventDetails' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardScreen_C, SafeZone_0) == 0x000378, "Member 'UEventLeaderboardScreen_C::SafeZone_0' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardScreen_C, DebugLeaderboardEntry1) == 0x000380, "Member 'UEventLeaderboardScreen_C::DebugLeaderboardEntry1' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardScreen_C, DebugLeaderboardEntry2) == 0x000388, "Member 'UEventLeaderboardScreen_C::DebugLeaderboardEntry2' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardScreen_C, DebugLeaderboardEntry3) == 0x000390, "Member 'UEventLeaderboardScreen_C::DebugLeaderboardEntry3' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardScreen_C, DebugLeaderboardEntry4) == 0x000398, "Member 'UEventLeaderboardScreen_C::DebugLeaderboardEntry4' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardScreen_C, DebugLeaderboardEntries) == 0x0003A0, "Member 'UEventLeaderboardScreen_C::DebugLeaderboardEntries' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardScreen_C, EventCloseButton) == 0x0003B0, "Member 'UEventLeaderboardScreen_C::EventCloseButton' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardScreen_C, EventviewLiveGames) == 0x0003C0, "Member 'UEventLeaderboardScreen_C::EventviewLiveGames' has a wrong offset!");

}

