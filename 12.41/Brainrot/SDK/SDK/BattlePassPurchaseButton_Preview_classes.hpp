#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BattlePassPurchaseButton_Preview

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BattlePassPurchaseButton_Preview.BattlePassPurchaseButton_Preview_C
// 0x00A0 (0x0C48 - 0x0BA8)
class UBattlePassPurchaseButton_Preview_C final : public UBattlePassScreenPurchaseButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0BA8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       BackingSelectedAnim;                               // 0x0BB0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       TextBounce;                                        // 0x0BB8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ResetTrianglesAnim;                                // 0x0BC0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       HoverTrianglesAnim;                                // 0x0BC8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       GlowBurst;                                         // 0x0BD0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       LoopingButtonGlow;                                 // 0x0BD8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Selected;                                          // 0x0BE0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Backing;                                           // 0x0BE8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BackingHoverLift;                                  // 0x0BF0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Bar;                                               // 0x0BF8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ButtonBacking;                                     // 0x0C00(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                DiscountContainer;                                 // 0x0C08(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Glow;                                              // 0x0C10(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HoverTriangles;                                    // 0x0C18(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OriginalCostContainer;                             // 0x0C20(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 StrikeThrough;                                     // 0x0C28(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               SubtitleContainer;                                 // 0x0C30(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 VBuck;                                             // 0x0C38(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsBundle;                                          // 0x0C40(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_6385[0x3];                                     // 0x0C41(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         DelayCycle;                                        // 0x0C44(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BattlePassPurchaseButton_Preview(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void BP_OnUnhovered();
	void BP_OnHovered();
	void OnSetData(EBattlePassPurchaseButtonLayout LayoutType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BattlePassPurchaseButton_Preview_C">();
	}
	static class UBattlePassPurchaseButton_Preview_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBattlePassPurchaseButton_Preview_C>();
	}
};
static_assert(alignof(UBattlePassPurchaseButton_Preview_C) == 0x000008, "Wrong alignment on UBattlePassPurchaseButton_Preview_C");
static_assert(sizeof(UBattlePassPurchaseButton_Preview_C) == 0x000C48, "Wrong size on UBattlePassPurchaseButton_Preview_C");
static_assert(offsetof(UBattlePassPurchaseButton_Preview_C, UberGraphFrame) == 0x000BA8, "Member 'UBattlePassPurchaseButton_Preview_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseButton_Preview_C, BackingSelectedAnim) == 0x000BB0, "Member 'UBattlePassPurchaseButton_Preview_C::BackingSelectedAnim' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseButton_Preview_C, TextBounce) == 0x000BB8, "Member 'UBattlePassPurchaseButton_Preview_C::TextBounce' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseButton_Preview_C, ResetTrianglesAnim) == 0x000BC0, "Member 'UBattlePassPurchaseButton_Preview_C::ResetTrianglesAnim' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseButton_Preview_C, HoverTrianglesAnim) == 0x000BC8, "Member 'UBattlePassPurchaseButton_Preview_C::HoverTrianglesAnim' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseButton_Preview_C, GlowBurst) == 0x000BD0, "Member 'UBattlePassPurchaseButton_Preview_C::GlowBurst' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseButton_Preview_C, LoopingButtonGlow) == 0x000BD8, "Member 'UBattlePassPurchaseButton_Preview_C::LoopingButtonGlow' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseButton_Preview_C, Selected) == 0x000BE0, "Member 'UBattlePassPurchaseButton_Preview_C::Selected' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseButton_Preview_C, Backing) == 0x000BE8, "Member 'UBattlePassPurchaseButton_Preview_C::Backing' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseButton_Preview_C, BackingHoverLift) == 0x000BF0, "Member 'UBattlePassPurchaseButton_Preview_C::BackingHoverLift' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseButton_Preview_C, Bar) == 0x000BF8, "Member 'UBattlePassPurchaseButton_Preview_C::Bar' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseButton_Preview_C, ButtonBacking) == 0x000C00, "Member 'UBattlePassPurchaseButton_Preview_C::ButtonBacking' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseButton_Preview_C, DiscountContainer) == 0x000C08, "Member 'UBattlePassPurchaseButton_Preview_C::DiscountContainer' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseButton_Preview_C, Glow) == 0x000C10, "Member 'UBattlePassPurchaseButton_Preview_C::Glow' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseButton_Preview_C, HoverTriangles) == 0x000C18, "Member 'UBattlePassPurchaseButton_Preview_C::HoverTriangles' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseButton_Preview_C, OriginalCostContainer) == 0x000C20, "Member 'UBattlePassPurchaseButton_Preview_C::OriginalCostContainer' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseButton_Preview_C, StrikeThrough) == 0x000C28, "Member 'UBattlePassPurchaseButton_Preview_C::StrikeThrough' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseButton_Preview_C, SubtitleContainer) == 0x000C30, "Member 'UBattlePassPurchaseButton_Preview_C::SubtitleContainer' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseButton_Preview_C, VBuck) == 0x000C38, "Member 'UBattlePassPurchaseButton_Preview_C::VBuck' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseButton_Preview_C, IsBundle) == 0x000C40, "Member 'UBattlePassPurchaseButton_Preview_C::IsBundle' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseButton_Preview_C, DelayCycle) == 0x000C44, "Member 'UBattlePassPurchaseButton_Preview_C::DelayCycle' has a wrong offset!");

}
