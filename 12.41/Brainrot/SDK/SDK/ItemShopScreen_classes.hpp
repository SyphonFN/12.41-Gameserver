#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemShopScreen

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemShopScreen.ItemShopScreen_C
// 0x0060 (0x0630 - 0x05D0)
class UItemShopScreen_C final : public UAthenaItemShopScreen
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       DonutDrop;                                         // 0x05D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                         AffilateInfo;                                      // 0x05E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                    CommonActionWidget_0;                              // 0x05E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                    CommonActionWidget_1;                              // 0x05F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          CommonBorder_CosmeticWarning;                      // 0x05F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          NoOffersBox;                                       // 0x0600(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ProgressSpinner;                                   // 0x0608(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_4;                                        // 0x0610(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              ScaleBox_3;                                        // 0x0618(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switcher_Sections;                                 // 0x0620(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_Sections;                              // 0x0628(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ItemShopScreen(int32 EntryPoint);
	void PostDonutDrop();
	void Construct();
	void BPPlayDonutAnimation();
	void BPSetupForDonutSequence(bool bEventEnabled);
	void OnEstablishingSections();
	void OnSectionsEstablished(bool bEmpty);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemShopScreen_C">();
	}
	static class UItemShopScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemShopScreen_C>();
	}
};
static_assert(alignof(UItemShopScreen_C) == 0x000008, "Wrong alignment on UItemShopScreen_C");
static_assert(sizeof(UItemShopScreen_C) == 0x000630, "Wrong size on UItemShopScreen_C");
static_assert(offsetof(UItemShopScreen_C, UberGraphFrame) == 0x0005D0, "Member 'UItemShopScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UItemShopScreen_C, DonutDrop) == 0x0005D8, "Member 'UItemShopScreen_C::DonutDrop' has a wrong offset!");
static_assert(offsetof(UItemShopScreen_C, AffilateInfo) == 0x0005E0, "Member 'UItemShopScreen_C::AffilateInfo' has a wrong offset!");
static_assert(offsetof(UItemShopScreen_C, CommonActionWidget_0) == 0x0005E8, "Member 'UItemShopScreen_C::CommonActionWidget_0' has a wrong offset!");
static_assert(offsetof(UItemShopScreen_C, CommonActionWidget_1) == 0x0005F0, "Member 'UItemShopScreen_C::CommonActionWidget_1' has a wrong offset!");
static_assert(offsetof(UItemShopScreen_C, CommonBorder_CosmeticWarning) == 0x0005F8, "Member 'UItemShopScreen_C::CommonBorder_CosmeticWarning' has a wrong offset!");
static_assert(offsetof(UItemShopScreen_C, NoOffersBox) == 0x000600, "Member 'UItemShopScreen_C::NoOffersBox' has a wrong offset!");
static_assert(offsetof(UItemShopScreen_C, ProgressSpinner) == 0x000608, "Member 'UItemShopScreen_C::ProgressSpinner' has a wrong offset!");
static_assert(offsetof(UItemShopScreen_C, SafeZone_4) == 0x000610, "Member 'UItemShopScreen_C::SafeZone_4' has a wrong offset!");
static_assert(offsetof(UItemShopScreen_C, ScaleBox_3) == 0x000618, "Member 'UItemShopScreen_C::ScaleBox_3' has a wrong offset!");
static_assert(offsetof(UItemShopScreen_C, Switcher_Sections) == 0x000620, "Member 'UItemShopScreen_C::Switcher_Sections' has a wrong offset!");
static_assert(offsetof(UItemShopScreen_C, VerticalBox_Sections) == 0x000628, "Member 'UItemShopScreen_C::VerticalBox_Sections' has a wrong offset!");

}

