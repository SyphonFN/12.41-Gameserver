#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaCustomizationPickerTileButton

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C
// 0x0050 (0x0C00 - 0x0BB0)
class UAthenaCustomizationPickerTileButton_C final : public UAthenaCustomizationPickerTileButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0BB0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       OnHover;                                           // 0x0BB8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                Border_item;                                       // 0x0BC0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortLazyImage*                         Image_Equipped;                                    // 0x0BC8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               NullItemOverlay;                                   // 0x0BD0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        RootWidgetSwitcher;                                // 0x0BD8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 UnownedDampen;                                     // 0x0BE0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsSlottedSomewhere;                                // 0x0BE8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C1D[0x7];                                     // 0x0BE9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             PickedButtonHovered;                               // 0x0BF0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void PickedButtonHovered__DelegateSignature(class UWidgetSwitcher* WidgetSwitcher);
	void ExecuteUbergraph_AthenaCustomizationPickerTileButton(int32 EntryPoint);
	void OnEquippedStateChanged(bool bEquipped, bool bOnDifferentSlot);
	void OnChangeOwnedState(bool bOwned);
	void BP_OnUnhovered();
	void BP_OnHovered();
	void OnListItemObjectSet(class UObject* ListItemObject);
	void HandleEquippedStateChanged(bool bEquipped, bool bOnDifferentSlot);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaCustomizationPickerTileButton_C">();
	}
	static class UAthenaCustomizationPickerTileButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaCustomizationPickerTileButton_C>();
	}
};
static_assert(alignof(UAthenaCustomizationPickerTileButton_C) == 0x000008, "Wrong alignment on UAthenaCustomizationPickerTileButton_C");
static_assert(sizeof(UAthenaCustomizationPickerTileButton_C) == 0x000C00, "Wrong size on UAthenaCustomizationPickerTileButton_C");
static_assert(offsetof(UAthenaCustomizationPickerTileButton_C, UberGraphFrame) == 0x000BB0, "Member 'UAthenaCustomizationPickerTileButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationPickerTileButton_C, OnHover) == 0x000BB8, "Member 'UAthenaCustomizationPickerTileButton_C::OnHover' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationPickerTileButton_C, Border_item) == 0x000BC0, "Member 'UAthenaCustomizationPickerTileButton_C::Border_item' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationPickerTileButton_C, Image_Equipped) == 0x000BC8, "Member 'UAthenaCustomizationPickerTileButton_C::Image_Equipped' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationPickerTileButton_C, NullItemOverlay) == 0x000BD0, "Member 'UAthenaCustomizationPickerTileButton_C::NullItemOverlay' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationPickerTileButton_C, RootWidgetSwitcher) == 0x000BD8, "Member 'UAthenaCustomizationPickerTileButton_C::RootWidgetSwitcher' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationPickerTileButton_C, UnownedDampen) == 0x000BE0, "Member 'UAthenaCustomizationPickerTileButton_C::UnownedDampen' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationPickerTileButton_C, IsSlottedSomewhere) == 0x000BE8, "Member 'UAthenaCustomizationPickerTileButton_C::IsSlottedSomewhere' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationPickerTileButton_C, PickedButtonHovered) == 0x000BF0, "Member 'UAthenaCustomizationPickerTileButton_C::PickedButtonHovered' has a wrong offset!");

}
