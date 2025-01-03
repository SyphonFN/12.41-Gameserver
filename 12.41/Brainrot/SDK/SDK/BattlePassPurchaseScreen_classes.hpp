#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BattlePassPurchaseScreen

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BattlePassPurchaseScreen.BattlePassPurchaseScreen_C
// 0x00A0 (0x0478 - 0x03D8)
class UBattlePassPurchaseScreen_C final : public UBattlePassPurchaseScreen
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       SetActivatedState;                                 // 0x03E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ShowComicBubble_Landing;                           // 0x03E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ReverseShowPurchaseConfirmation;                   // 0x03F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       OnShowPurchaseConfirmation_Final;                  // 0x03F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ShowConfirmationButtons;                           // 0x0400(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ShowComicBubble_Confirmation;                      // 0x0408(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ShowCallouts;                                      // 0x0410(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       OnIntro;                                           // 0x0418(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USafeZone*                              ButtonsSafeZone;                                   // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         ConfirmationButtons;                               // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Copy;                                              // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDonut_ComicBubble_C*                   Donut_ComicBubble_Confirmation;                    // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDonut_ComicBubble_C*                   Donut_ComicBubble_Landing;                         // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Glow;                                              // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMTXButton_PurchaseScreen_C*            MTXButton_PurchaseScreen;                          // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_0;                                        // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           TagsVB;                                            // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AS12BP_MusicController_C*               MusicController;                                   // 0x0470(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BattlePassPurchaseScreen(int32 EntryPoint);
	void OnPurchaseClicked(bool bPlayForward, bool bBuyBattleBundle);
	void OnFinalPurchaseConfirmed();
	void OnLeaveScreen();
	void BP_OnDeactivated();
	void BP_OnActivated();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BattlePassPurchaseScreen_C">();
	}
	static class UBattlePassPurchaseScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBattlePassPurchaseScreen_C>();
	}
};
static_assert(alignof(UBattlePassPurchaseScreen_C) == 0x000008, "Wrong alignment on UBattlePassPurchaseScreen_C");
static_assert(sizeof(UBattlePassPurchaseScreen_C) == 0x000478, "Wrong size on UBattlePassPurchaseScreen_C");
static_assert(offsetof(UBattlePassPurchaseScreen_C, UberGraphFrame) == 0x0003D8, "Member 'UBattlePassPurchaseScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseScreen_C, SetActivatedState) == 0x0003E0, "Member 'UBattlePassPurchaseScreen_C::SetActivatedState' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseScreen_C, ShowComicBubble_Landing) == 0x0003E8, "Member 'UBattlePassPurchaseScreen_C::ShowComicBubble_Landing' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseScreen_C, ReverseShowPurchaseConfirmation) == 0x0003F0, "Member 'UBattlePassPurchaseScreen_C::ReverseShowPurchaseConfirmation' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseScreen_C, OnShowPurchaseConfirmation_Final) == 0x0003F8, "Member 'UBattlePassPurchaseScreen_C::OnShowPurchaseConfirmation_Final' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseScreen_C, ShowConfirmationButtons) == 0x000400, "Member 'UBattlePassPurchaseScreen_C::ShowConfirmationButtons' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseScreen_C, ShowComicBubble_Confirmation) == 0x000408, "Member 'UBattlePassPurchaseScreen_C::ShowComicBubble_Confirmation' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseScreen_C, ShowCallouts) == 0x000410, "Member 'UBattlePassPurchaseScreen_C::ShowCallouts' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseScreen_C, OnIntro) == 0x000418, "Member 'UBattlePassPurchaseScreen_C::OnIntro' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseScreen_C, ButtonsSafeZone) == 0x000420, "Member 'UBattlePassPurchaseScreen_C::ButtonsSafeZone' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseScreen_C, ConfirmationButtons) == 0x000428, "Member 'UBattlePassPurchaseScreen_C::ConfirmationButtons' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseScreen_C, Copy) == 0x000430, "Member 'UBattlePassPurchaseScreen_C::Copy' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseScreen_C, Donut_ComicBubble_Confirmation) == 0x000438, "Member 'UBattlePassPurchaseScreen_C::Donut_ComicBubble_Confirmation' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseScreen_C, Donut_ComicBubble_Landing) == 0x000440, "Member 'UBattlePassPurchaseScreen_C::Donut_ComicBubble_Landing' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseScreen_C, Glow) == 0x000448, "Member 'UBattlePassPurchaseScreen_C::Glow' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseScreen_C, Image_1) == 0x000450, "Member 'UBattlePassPurchaseScreen_C::Image_1' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseScreen_C, MTXButton_PurchaseScreen) == 0x000458, "Member 'UBattlePassPurchaseScreen_C::MTXButton_PurchaseScreen' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseScreen_C, SafeZone_0) == 0x000460, "Member 'UBattlePassPurchaseScreen_C::SafeZone_0' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseScreen_C, TagsVB) == 0x000468, "Member 'UBattlePassPurchaseScreen_C::TagsVB' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseScreen_C, MusicController) == 0x000470, "Member 'UBattlePassPurchaseScreen_C::MusicController' has a wrong offset!");

}

