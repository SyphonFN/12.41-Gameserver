#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FloatingInteraction_Indicator_Faction

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass FloatingInteraction_Indicator_Faction.FloatingInteraction_Indicator_Faction_C
// 0x0148 (0x03D0 - 0x0288)
class UFloatingInteraction_Indicator_Faction_C final : public UFortEventLevelNavigationWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0288(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       LoopingHoverState;                                 // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Unhover;                                           // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Hover;                                             // 0x02A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       PopluateIn;                                        // 0x02A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Arrow;                                             // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CircleBurst;                                       // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 DigitalPattern;                                    // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Divider;                                           // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FloatingPip;                                       // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Glow;                                              // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Glow_1;                                            // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Glow_2;                                            // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Glow_3;                                            // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_FactionIconHeader;                           // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_FactionIconHeader_1;                         // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_FactionIconHeader_2;                         // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_FactionIconHeader_3;                         // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 InputActionMask;                                   // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 InputActionRing;                                   // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                    InputActionWidget;                                 // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Ghost;                                     // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Shadow;                                    // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 OverlayLeft;                                       // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 OverlayRight;                                      // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              ScaleBox_Null;                                     // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Select;                                            // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         SelectionStateBox;                                 // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Title_Blue;                                        // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Title_red;                                         // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Onscreen;                           // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateColor                            Bang;                                              // 0x0380(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            NoBang;                                            // 0x03A8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_FloatingInteraction_Indicator_Faction(int32 EntryPoint);
	void SetBangState(bool bShowBang);
	void Construct();
	void TriggerLoopingHoverStateAnim();
	void OnObjectHoverEnd();
	void OnObjectHoverBegin();
	void PreConstruct(bool IsDesignTime);
	void SetCATextFX();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FloatingInteraction_Indicator_Faction_C">();
	}
	static class UFloatingInteraction_Indicator_Faction_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFloatingInteraction_Indicator_Faction_C>();
	}
};
static_assert(alignof(UFloatingInteraction_Indicator_Faction_C) == 0x000008, "Wrong alignment on UFloatingInteraction_Indicator_Faction_C");
static_assert(sizeof(UFloatingInteraction_Indicator_Faction_C) == 0x0003D0, "Wrong size on UFloatingInteraction_Indicator_Faction_C");
static_assert(offsetof(UFloatingInteraction_Indicator_Faction_C, UberGraphFrame) == 0x000288, "Member 'UFloatingInteraction_Indicator_Faction_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFloatingInteraction_Indicator_Faction_C, LoopingHoverState) == 0x000290, "Member 'UFloatingInteraction_Indicator_Faction_C::LoopingHoverState' has a wrong offset!");
static_assert(offsetof(UFloatingInteraction_Indicator_Faction_C, Unhover) == 0x000298, "Member 'UFloatingInteraction_Indicator_Faction_C::Unhover' has a wrong offset!");
static_assert(offsetof(UFloatingInteraction_Indicator_Faction_C, Hover) == 0x0002A0, "Member 'UFloatingInteraction_Indicator_Faction_C::Hover' has a wrong offset!");
static_assert(offsetof(UFloatingInteraction_Indicator_Faction_C, PopluateIn) == 0x0002A8, "Member 'UFloatingInteraction_Indicator_Faction_C::PopluateIn' has a wrong offset!");
static_assert(offsetof(UFloatingInteraction_Indicator_Faction_C, Arrow) == 0x0002B0, "Member 'UFloatingInteraction_Indicator_Faction_C::Arrow' has a wrong offset!");
static_assert(offsetof(UFloatingInteraction_Indicator_Faction_C, CircleBurst) == 0x0002B8, "Member 'UFloatingInteraction_Indicator_Faction_C::CircleBurst' has a wrong offset!");
static_assert(offsetof(UFloatingInteraction_Indicator_Faction_C, DigitalPattern) == 0x0002C0, "Member 'UFloatingInteraction_Indicator_Faction_C::DigitalPattern' has a wrong offset!");
static_assert(offsetof(UFloatingInteraction_Indicator_Faction_C, Divider) == 0x0002C8, "Member 'UFloatingInteraction_Indicator_Faction_C::Divider' has a wrong offset!");
static_assert(offsetof(UFloatingInteraction_Indicator_Faction_C, FloatingPip) == 0x0002D0, "Member 'UFloatingInteraction_Indicator_Faction_C::FloatingPip' has a wrong offset!");
static_assert(offsetof(UFloatingInteraction_Indicator_Faction_C, Glow) == 0x0002D8, "Member 'UFloatingInteraction_Indicator_Faction_C::Glow' has a wrong offset!");
static_assert(offsetof(UFloatingInteraction_Indicator_Faction_C, Glow_1) == 0x0002E0, "Member 'UFloatingInteraction_Indicator_Faction_C::Glow_1' has a wrong offset!");
static_assert(offsetof(UFloatingInteraction_Indicator_Faction_C, Glow_2) == 0x0002E8, "Member 'UFloatingInteraction_Indicator_Faction_C::Glow_2' has a wrong offset!");
static_assert(offsetof(UFloatingInteraction_Indicator_Faction_C, Glow_3) == 0x0002F0, "Member 'UFloatingInteraction_Indicator_Faction_C::Glow_3' has a wrong offset!");
static_assert(offsetof(UFloatingInteraction_Indicator_Faction_C, Image_FactionIconHeader) == 0x0002F8, "Member 'UFloatingInteraction_Indicator_Faction_C::Image_FactionIconHeader' has a wrong offset!");
static_assert(offsetof(UFloatingInteraction_Indicator_Faction_C, Image_FactionIconHeader_1) == 0x000300, "Member 'UFloatingInteraction_Indicator_Faction_C::Image_FactionIconHeader_1' has a wrong offset!");
static_assert(offsetof(UFloatingInteraction_Indicator_Faction_C, Image_FactionIconHeader_2) == 0x000308, "Member 'UFloatingInteraction_Indicator_Faction_C::Image_FactionIconHeader_2' has a wrong offset!");
static_assert(offsetof(UFloatingInteraction_Indicator_Faction_C, Image_FactionIconHeader_3) == 0x000310, "Member 'UFloatingInteraction_Indicator_Faction_C::Image_FactionIconHeader_3' has a wrong offset!");
static_assert(offsetof(UFloatingInteraction_Indicator_Faction_C, InputActionMask) == 0x000318, "Member 'UFloatingInteraction_Indicator_Faction_C::InputActionMask' has a wrong offset!");
static_assert(offsetof(UFloatingInteraction_Indicator_Faction_C, InputActionRing) == 0x000320, "Member 'UFloatingInteraction_Indicator_Faction_C::InputActionRing' has a wrong offset!");
static_assert(offsetof(UFloatingInteraction_Indicator_Faction_C, InputActionWidget) == 0x000328, "Member 'UFloatingInteraction_Indicator_Faction_C::InputActionWidget' has a wrong offset!");
static_assert(offsetof(UFloatingInteraction_Indicator_Faction_C, Overlay_Ghost) == 0x000330, "Member 'UFloatingInteraction_Indicator_Faction_C::Overlay_Ghost' has a wrong offset!");
static_assert(offsetof(UFloatingInteraction_Indicator_Faction_C, Overlay_Shadow) == 0x000338, "Member 'UFloatingInteraction_Indicator_Faction_C::Overlay_Shadow' has a wrong offset!");
static_assert(offsetof(UFloatingInteraction_Indicator_Faction_C, OverlayLeft) == 0x000340, "Member 'UFloatingInteraction_Indicator_Faction_C::OverlayLeft' has a wrong offset!");
static_assert(offsetof(UFloatingInteraction_Indicator_Faction_C, OverlayRight) == 0x000348, "Member 'UFloatingInteraction_Indicator_Faction_C::OverlayRight' has a wrong offset!");
static_assert(offsetof(UFloatingInteraction_Indicator_Faction_C, ScaleBox_Null) == 0x000350, "Member 'UFloatingInteraction_Indicator_Faction_C::ScaleBox_Null' has a wrong offset!");
static_assert(offsetof(UFloatingInteraction_Indicator_Faction_C, Select) == 0x000358, "Member 'UFloatingInteraction_Indicator_Faction_C::Select' has a wrong offset!");
static_assert(offsetof(UFloatingInteraction_Indicator_Faction_C, SelectionStateBox) == 0x000360, "Member 'UFloatingInteraction_Indicator_Faction_C::SelectionStateBox' has a wrong offset!");
static_assert(offsetof(UFloatingInteraction_Indicator_Faction_C, Title_Blue) == 0x000368, "Member 'UFloatingInteraction_Indicator_Faction_C::Title_Blue' has a wrong offset!");
static_assert(offsetof(UFloatingInteraction_Indicator_Faction_C, Title_red) == 0x000370, "Member 'UFloatingInteraction_Indicator_Faction_C::Title_red' has a wrong offset!");
static_assert(offsetof(UFloatingInteraction_Indicator_Faction_C, WidgetSwitcher_Onscreen) == 0x000378, "Member 'UFloatingInteraction_Indicator_Faction_C::WidgetSwitcher_Onscreen' has a wrong offset!");
static_assert(offsetof(UFloatingInteraction_Indicator_Faction_C, Bang) == 0x000380, "Member 'UFloatingInteraction_Indicator_Faction_C::Bang' has a wrong offset!");
static_assert(offsetof(UFloatingInteraction_Indicator_Faction_C, NoBang) == 0x0003A8, "Member 'UFloatingInteraction_Indicator_Faction_C::NoBang' has a wrong offset!");

}
