#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SpatialFactionScreen

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SpatialFactionScreen.SpatialFactionScreen_C
// 0x0058 (0x03F8 - 0x03A0)
class USpatialFactionScreen_C final : public USpatialFactionScreen
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UIconTextButton_C*                      Button_About;                                      // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      Button_UnlockedTech;                               // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Content_FactionLocked;                             // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_CloseButton;                               // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_buttons;                                  // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpatialFaction_About_C*                SpatialFaction_About;                              // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpatialFactionComingSoonScreen_C*      SpatialFactionComingSoonScreen;                    // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActivatableWidgetSwitcher*       Switcher_ScreenContent;                            // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpatialFactionUnlockedPerksScreen_C*   UnlockedPerksScreen;                               // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          Testanimbool_ishown;                               // 0x03F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsInIntroSequence;                                // 0x03F1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_SpatialFactionScreen(int32 EntryPoint);
	void Construct();
	void BndEvt__SpatialFaction_About_K2Node_ComponentBoundEvent_0_Close_about_screen__DelegateSignature();
	void BndEvt__UnlockedPerksScreen_K2Node_ComponentBoundEvent_6_OnUnlockedPerksScreenClosedDynamic__DelegateSignature();
	void BndEvt__FactionChoiceScreen_K2Node_ComponentBoundEvent_3_OnFactionChosenDynamic__DelegateSignature();
	void OnFactionChoiceRequired();
	void BndEvt__Button_UnlockedTech_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__Button_About_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BP_OnActivated();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SpatialFactionScreen_C">();
	}
	static class USpatialFactionScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpatialFactionScreen_C>();
	}
};
static_assert(alignof(USpatialFactionScreen_C) == 0x000008, "Wrong alignment on USpatialFactionScreen_C");
static_assert(sizeof(USpatialFactionScreen_C) == 0x0003F8, "Wrong size on USpatialFactionScreen_C");
static_assert(offsetof(USpatialFactionScreen_C, UberGraphFrame) == 0x0003A0, "Member 'USpatialFactionScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USpatialFactionScreen_C, Button_About) == 0x0003A8, "Member 'USpatialFactionScreen_C::Button_About' has a wrong offset!");
static_assert(offsetof(USpatialFactionScreen_C, Button_UnlockedTech) == 0x0003B0, "Member 'USpatialFactionScreen_C::Button_UnlockedTech' has a wrong offset!");
static_assert(offsetof(USpatialFactionScreen_C, Content_FactionLocked) == 0x0003B8, "Member 'USpatialFactionScreen_C::Content_FactionLocked' has a wrong offset!");
static_assert(offsetof(USpatialFactionScreen_C, Overlay_CloseButton) == 0x0003C0, "Member 'USpatialFactionScreen_C::Overlay_CloseButton' has a wrong offset!");
static_assert(offsetof(USpatialFactionScreen_C, SafeZone_buttons) == 0x0003C8, "Member 'USpatialFactionScreen_C::SafeZone_buttons' has a wrong offset!");
static_assert(offsetof(USpatialFactionScreen_C, SpatialFaction_About) == 0x0003D0, "Member 'USpatialFactionScreen_C::SpatialFaction_About' has a wrong offset!");
static_assert(offsetof(USpatialFactionScreen_C, SpatialFactionComingSoonScreen) == 0x0003D8, "Member 'USpatialFactionScreen_C::SpatialFactionComingSoonScreen' has a wrong offset!");
static_assert(offsetof(USpatialFactionScreen_C, Switcher_ScreenContent) == 0x0003E0, "Member 'USpatialFactionScreen_C::Switcher_ScreenContent' has a wrong offset!");
static_assert(offsetof(USpatialFactionScreen_C, UnlockedPerksScreen) == 0x0003E8, "Member 'USpatialFactionScreen_C::UnlockedPerksScreen' has a wrong offset!");
static_assert(offsetof(USpatialFactionScreen_C, Testanimbool_ishown) == 0x0003F0, "Member 'USpatialFactionScreen_C::Testanimbool_ishown' has a wrong offset!");
static_assert(offsetof(USpatialFactionScreen_C, bIsInIntroSequence) == 0x0003F1, "Member 'USpatialFactionScreen_C::bIsInIntroSequence' has a wrong offset!");

}
