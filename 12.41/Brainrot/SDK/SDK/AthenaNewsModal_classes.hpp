#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaNewsModal

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaNewsModal.AthenaNewsModal_C
// 0x00B0 (0x0500 - 0x0450)
class UAthenaNewsModal_C final : public UFortAthenaNewsPanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0450(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       NewPopUpIntro;                                     // 0x0458(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                B_TapToClose;                                      // 0x0460(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BackgroundFill;                                    // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BackgroundFill_1;                                  // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      BrowseToExternalURLButton;                         // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                BrowseToExternalURLSpacer;                         // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                ButtonBar_Spacer;                                  // 0x0488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      FNBR_LobbyButton;                                  // 0x0490(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      ItemShopButton;                                    // 0x0498(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULightbox_C*                            Lightbox;                                          // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_0;                                        // 0x04A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               SpecialEventBackgroundOVR;                         // 0x04B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               SpecialEventBackgroundOVR_Secondary;               // 0x04B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SpeedLines;                                        // 0x04C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      STW_CloseButton;                                   // 0x04C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      STWFounderPackButton;                              // 0x04D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                STWFounderPackSpacer;                              // 0x04D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_ExitButtons;                        // 0x04E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                 BS_Default;                                        // 0x04E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 BS_SpecialEvent;                                   // 0x04F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 BS_SpecialEvent_Secondary;                         // 0x04F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AthenaNewsModal(int32 EntryPoint);
	void BndEvt__STWUpdateButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__STWFounderPackButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__AthenaNews_K2Node_ComponentBoundEvent_2_UpdateStyle__DelegateSignature(EAthenaNewsStyle NewStyle);
	void BndEvt__STW_CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void BndEvt__IconTextButton_C_0_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ForceNewsClosed();
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void DialogResult_3BE479B64CDE5378C77A8DA453770A3B(EFortDialogResult Result, class FName ResultName);
	struct FEventReply OnMouseButtonDown_0(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void ShouldShowSTWUpsellInBR(bool* ShouldShow);
	void UpdateExternalNewsWidgets();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaNewsModal_C">();
	}
	static class UAthenaNewsModal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaNewsModal_C>();
	}
};
static_assert(alignof(UAthenaNewsModal_C) == 0x000008, "Wrong alignment on UAthenaNewsModal_C");
static_assert(sizeof(UAthenaNewsModal_C) == 0x000500, "Wrong size on UAthenaNewsModal_C");
static_assert(offsetof(UAthenaNewsModal_C, UberGraphFrame) == 0x000450, "Member 'UAthenaNewsModal_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaNewsModal_C, NewPopUpIntro) == 0x000458, "Member 'UAthenaNewsModal_C::NewPopUpIntro' has a wrong offset!");
static_assert(offsetof(UAthenaNewsModal_C, B_TapToClose) == 0x000460, "Member 'UAthenaNewsModal_C::B_TapToClose' has a wrong offset!");
static_assert(offsetof(UAthenaNewsModal_C, BackgroundFill) == 0x000468, "Member 'UAthenaNewsModal_C::BackgroundFill' has a wrong offset!");
static_assert(offsetof(UAthenaNewsModal_C, BackgroundFill_1) == 0x000470, "Member 'UAthenaNewsModal_C::BackgroundFill_1' has a wrong offset!");
static_assert(offsetof(UAthenaNewsModal_C, BrowseToExternalURLButton) == 0x000478, "Member 'UAthenaNewsModal_C::BrowseToExternalURLButton' has a wrong offset!");
static_assert(offsetof(UAthenaNewsModal_C, BrowseToExternalURLSpacer) == 0x000480, "Member 'UAthenaNewsModal_C::BrowseToExternalURLSpacer' has a wrong offset!");
static_assert(offsetof(UAthenaNewsModal_C, ButtonBar_Spacer) == 0x000488, "Member 'UAthenaNewsModal_C::ButtonBar_Spacer' has a wrong offset!");
static_assert(offsetof(UAthenaNewsModal_C, FNBR_LobbyButton) == 0x000490, "Member 'UAthenaNewsModal_C::FNBR_LobbyButton' has a wrong offset!");
static_assert(offsetof(UAthenaNewsModal_C, ItemShopButton) == 0x000498, "Member 'UAthenaNewsModal_C::ItemShopButton' has a wrong offset!");
static_assert(offsetof(UAthenaNewsModal_C, Lightbox) == 0x0004A0, "Member 'UAthenaNewsModal_C::Lightbox' has a wrong offset!");
static_assert(offsetof(UAthenaNewsModal_C, SafeZone_0) == 0x0004A8, "Member 'UAthenaNewsModal_C::SafeZone_0' has a wrong offset!");
static_assert(offsetof(UAthenaNewsModal_C, SpecialEventBackgroundOVR) == 0x0004B0, "Member 'UAthenaNewsModal_C::SpecialEventBackgroundOVR' has a wrong offset!");
static_assert(offsetof(UAthenaNewsModal_C, SpecialEventBackgroundOVR_Secondary) == 0x0004B8, "Member 'UAthenaNewsModal_C::SpecialEventBackgroundOVR_Secondary' has a wrong offset!");
static_assert(offsetof(UAthenaNewsModal_C, SpeedLines) == 0x0004C0, "Member 'UAthenaNewsModal_C::SpeedLines' has a wrong offset!");
static_assert(offsetof(UAthenaNewsModal_C, STW_CloseButton) == 0x0004C8, "Member 'UAthenaNewsModal_C::STW_CloseButton' has a wrong offset!");
static_assert(offsetof(UAthenaNewsModal_C, STWFounderPackButton) == 0x0004D0, "Member 'UAthenaNewsModal_C::STWFounderPackButton' has a wrong offset!");
static_assert(offsetof(UAthenaNewsModal_C, STWFounderPackSpacer) == 0x0004D8, "Member 'UAthenaNewsModal_C::STWFounderPackSpacer' has a wrong offset!");
static_assert(offsetof(UAthenaNewsModal_C, WidgetSwitcher_ExitButtons) == 0x0004E0, "Member 'UAthenaNewsModal_C::WidgetSwitcher_ExitButtons' has a wrong offset!");
static_assert(offsetof(UAthenaNewsModal_C, BS_Default) == 0x0004E8, "Member 'UAthenaNewsModal_C::BS_Default' has a wrong offset!");
static_assert(offsetof(UAthenaNewsModal_C, BS_SpecialEvent) == 0x0004F0, "Member 'UAthenaNewsModal_C::BS_SpecialEvent' has a wrong offset!");
static_assert(offsetof(UAthenaNewsModal_C, BS_SpecialEvent_Secondary) == 0x0004F8, "Member 'UAthenaNewsModal_C::BS_SpecialEvent_Secondary' has a wrong offset!");

}
