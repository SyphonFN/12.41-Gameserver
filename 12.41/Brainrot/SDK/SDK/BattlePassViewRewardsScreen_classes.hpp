#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BattlePassViewRewardsScreen

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BattlePassViewRewardsScreen.BattlePassViewRewardsScreen_C
// 0x0060 (0x0628 - 0x05C8)
class UBattlePassViewRewardsScreen_C final : public UBattlePassViewAllRewardsScreen
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       PageIntro;                                         // 0x05D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       SortIntro;                                         // 0x05D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UAthenaLockedStyleNotification_C*       AthenaLockedStyleNotification;                     // 0x05E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCloseButton_C*                         CloseButton;                                       // 0x05E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CloseIcon;                                         // 0x05F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemInfoHeaderWidget_C*                ItemInfoHeaderWidget;                              // 0x05F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                         MobileCloseButton;                                 // 0x0600(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OverlayCloseButton;                                // 0x0608(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               PreviewItemArea;                                   // 0x0610(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_108;                                      // 0x0618(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       SubHeader;                                         // 0x0620(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BattlePassViewRewardsScreen(int32 EntryPoint);
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnInitialized();
	void BndEvt__Button_CycleSort_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void OnItemViewed(const class UBattlePassViewRewardData* ItemDisplayed);
	class UWidget* GetWidgetForFramingViewedItem();
	void CloseScreen(bool* bPassThrough);
	void HandleMobileClosed(bool* PassThrough);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BattlePassViewRewardsScreen_C">();
	}
	static class UBattlePassViewRewardsScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBattlePassViewRewardsScreen_C>();
	}
};
static_assert(alignof(UBattlePassViewRewardsScreen_C) == 0x000008, "Wrong alignment on UBattlePassViewRewardsScreen_C");
static_assert(sizeof(UBattlePassViewRewardsScreen_C) == 0x000628, "Wrong size on UBattlePassViewRewardsScreen_C");
static_assert(offsetof(UBattlePassViewRewardsScreen_C, UberGraphFrame) == 0x0005C8, "Member 'UBattlePassViewRewardsScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBattlePassViewRewardsScreen_C, PageIntro) == 0x0005D0, "Member 'UBattlePassViewRewardsScreen_C::PageIntro' has a wrong offset!");
static_assert(offsetof(UBattlePassViewRewardsScreen_C, SortIntro) == 0x0005D8, "Member 'UBattlePassViewRewardsScreen_C::SortIntro' has a wrong offset!");
static_assert(offsetof(UBattlePassViewRewardsScreen_C, AthenaLockedStyleNotification) == 0x0005E0, "Member 'UBattlePassViewRewardsScreen_C::AthenaLockedStyleNotification' has a wrong offset!");
static_assert(offsetof(UBattlePassViewRewardsScreen_C, CloseButton) == 0x0005E8, "Member 'UBattlePassViewRewardsScreen_C::CloseButton' has a wrong offset!");
static_assert(offsetof(UBattlePassViewRewardsScreen_C, CloseIcon) == 0x0005F0, "Member 'UBattlePassViewRewardsScreen_C::CloseIcon' has a wrong offset!");
static_assert(offsetof(UBattlePassViewRewardsScreen_C, ItemInfoHeaderWidget) == 0x0005F8, "Member 'UBattlePassViewRewardsScreen_C::ItemInfoHeaderWidget' has a wrong offset!");
static_assert(offsetof(UBattlePassViewRewardsScreen_C, MobileCloseButton) == 0x000600, "Member 'UBattlePassViewRewardsScreen_C::MobileCloseButton' has a wrong offset!");
static_assert(offsetof(UBattlePassViewRewardsScreen_C, OverlayCloseButton) == 0x000608, "Member 'UBattlePassViewRewardsScreen_C::OverlayCloseButton' has a wrong offset!");
static_assert(offsetof(UBattlePassViewRewardsScreen_C, PreviewItemArea) == 0x000610, "Member 'UBattlePassViewRewardsScreen_C::PreviewItemArea' has a wrong offset!");
static_assert(offsetof(UBattlePassViewRewardsScreen_C, SafeZone_108) == 0x000618, "Member 'UBattlePassViewRewardsScreen_C::SafeZone_108' has a wrong offset!");
static_assert(offsetof(UBattlePassViewRewardsScreen_C, SubHeader) == 0x000620, "Member 'UBattlePassViewRewardsScreen_C::SubHeader' has a wrong offset!");

}
