#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BattlePassLeaderboard

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BattlePassLeaderboard.BattlePassLeaderboard_C
// 0x0028 (0x0318 - 0x02F0)
class UBattlePassLeaderboard_C final : public UBattlePassLeaderboard
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBattlePassLeaderboardListEntry_C*      BattlePassLeaderboardListEntry;                    // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCloseButton_C*                         CloseButton;                                       // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULightbox_C*                            Lightbox_26;                                       // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_0;                                        // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BattlePassLeaderboard(int32 EntryPoint);
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BP_OnActivated();
	void HandleBack(bool* PassThrough);

	class UWidget* BP_GetDesiredFocusTarget() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BattlePassLeaderboard_C">();
	}
	static class UBattlePassLeaderboard_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBattlePassLeaderboard_C>();
	}
};
static_assert(alignof(UBattlePassLeaderboard_C) == 0x000008, "Wrong alignment on UBattlePassLeaderboard_C");
static_assert(sizeof(UBattlePassLeaderboard_C) == 0x000318, "Wrong size on UBattlePassLeaderboard_C");
static_assert(offsetof(UBattlePassLeaderboard_C, UberGraphFrame) == 0x0002F0, "Member 'UBattlePassLeaderboard_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBattlePassLeaderboard_C, BattlePassLeaderboardListEntry) == 0x0002F8, "Member 'UBattlePassLeaderboard_C::BattlePassLeaderboardListEntry' has a wrong offset!");
static_assert(offsetof(UBattlePassLeaderboard_C, CloseButton) == 0x000300, "Member 'UBattlePassLeaderboard_C::CloseButton' has a wrong offset!");
static_assert(offsetof(UBattlePassLeaderboard_C, Lightbox_26) == 0x000308, "Member 'UBattlePassLeaderboard_C::Lightbox_26' has a wrong offset!");
static_assert(offsetof(UBattlePassLeaderboard_C, SafeZone_0) == 0x000310, "Member 'UBattlePassLeaderboard_C::SafeZone_0' has a wrong offset!");

}
