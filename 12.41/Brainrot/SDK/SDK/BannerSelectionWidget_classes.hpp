#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BannerSelectionWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CommonInput_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BannerSelectionWidget.BannerSelectionWidget_C
// 0x0070 (0x04C0 - 0x0450)
class UBannerSelectionWidget_C final : public UFortBannerSelectorBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0450(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_LocalPlayerBannerEditor_C*          BP_LocalPlayerBannerEditor;                        // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      ConfirmHomebaseNameButton;                         // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           EntryVbox;                                         // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULightbox_C*                            Lightbox;                                          // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MainIcon;                                          // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               ProgressSizeBox;                                   // 0x0488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       ProgressText;                                      // 0x0490(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           ProgressVBox;                                      // 0x0498(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switcher;                                          // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Title;                                             // 0x04A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FMargin                                PatternPadding;                                    // 0x04B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_105_CloseBannerEditor__DelegateSignature(class FName IconId, class FName ColorId);
	void BP_OnActivated();
	void BndEvt__ConfirmHomebaseNameButton_K2Node_ComponentBoundEvent_80_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnHomebaseNameCommitFailed();
	void OnHomebaseNameCommitSucceeded();
	void GainFocusOfTextBox();
	void InitFromObject(class UObject* InitObject);
	void OnInputModeChanged(bool bUsingGamepad);
	void ExecuteUbergraph_BannerSelectionWidget(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BannerSelectionWidget_C">();
	}
	static class UBannerSelectionWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBannerSelectionWidget_C>();
	}
};
static_assert(alignof(UBannerSelectionWidget_C) == 0x000008, "Wrong alignment on UBannerSelectionWidget_C");
static_assert(sizeof(UBannerSelectionWidget_C) == 0x0004C0, "Wrong size on UBannerSelectionWidget_C");
static_assert(offsetof(UBannerSelectionWidget_C, UberGraphFrame) == 0x000450, "Member 'UBannerSelectionWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBannerSelectionWidget_C, BP_LocalPlayerBannerEditor) == 0x000458, "Member 'UBannerSelectionWidget_C::BP_LocalPlayerBannerEditor' has a wrong offset!");
static_assert(offsetof(UBannerSelectionWidget_C, ConfirmHomebaseNameButton) == 0x000460, "Member 'UBannerSelectionWidget_C::ConfirmHomebaseNameButton' has a wrong offset!");
static_assert(offsetof(UBannerSelectionWidget_C, EntryVbox) == 0x000468, "Member 'UBannerSelectionWidget_C::EntryVbox' has a wrong offset!");
static_assert(offsetof(UBannerSelectionWidget_C, Image_0) == 0x000470, "Member 'UBannerSelectionWidget_C::Image_0' has a wrong offset!");
static_assert(offsetof(UBannerSelectionWidget_C, Lightbox) == 0x000478, "Member 'UBannerSelectionWidget_C::Lightbox' has a wrong offset!");
static_assert(offsetof(UBannerSelectionWidget_C, MainIcon) == 0x000480, "Member 'UBannerSelectionWidget_C::MainIcon' has a wrong offset!");
static_assert(offsetof(UBannerSelectionWidget_C, ProgressSizeBox) == 0x000488, "Member 'UBannerSelectionWidget_C::ProgressSizeBox' has a wrong offset!");
static_assert(offsetof(UBannerSelectionWidget_C, ProgressText) == 0x000490, "Member 'UBannerSelectionWidget_C::ProgressText' has a wrong offset!");
static_assert(offsetof(UBannerSelectionWidget_C, ProgressVBox) == 0x000498, "Member 'UBannerSelectionWidget_C::ProgressVBox' has a wrong offset!");
static_assert(offsetof(UBannerSelectionWidget_C, Switcher) == 0x0004A0, "Member 'UBannerSelectionWidget_C::Switcher' has a wrong offset!");
static_assert(offsetof(UBannerSelectionWidget_C, Title) == 0x0004A8, "Member 'UBannerSelectionWidget_C::Title' has a wrong offset!");
static_assert(offsetof(UBannerSelectionWidget_C, PatternPadding) == 0x0004B0, "Member 'UBannerSelectionWidget_C::PatternPadding' has a wrong offset!");

}
