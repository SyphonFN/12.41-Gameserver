#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MainModeItemDetailsHostPanel

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MainModeItemDetailsHostPanel.MainModeItemDetailsHostPanel_C
// 0x0068 (0x03A8 - 0x0340)
class UMainModeItemDetailsHostPanel_C final : public UFortItemManagementItemDetailsPanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0340(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UItemDetailsHeader_C*                   HeaderWidget;                                      // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHeroLoadoutActiveAbilitiesDetailWidget_C* HeroLoadoutActiveAbilitiesDetailWidget;            // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHeroLoadoutPerksDetailWidget_C*        HeroLoadoutPerksDetailWidget;                      // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemAlterationsListDetailWidget_C*     ItemAlterationsListDetailWidget;                   // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemCalledOutAttributesDetailWidget_C* ItemCalledOutAttributesDetailWidget_2;             // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemDescriptionDetailWidget_C*         ItemDescriptionDetailWidget;                       // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemPerksListDetailWidget_C*           ItemPerksListDetailWidget;                         // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MarkedForMulchingBackgroundImage;                  // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMultiSizeImage*                    MarkedForMulchingIndicatorImage;                   // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMiniItemCraftingIngredientsDetailWidget_C* MiniItemCraftingIngredientsDetailWidget_9;         // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USurvivorTraitsDetailWidget_C*          SurvivorTraitsDetailWidget;                        // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          ShowActiveAbilitiesOnly;                           // 0x03A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ShowSurvivorDetails;                               // 0x03A1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          HideItemDescription;                               // 0x03A2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          ShowHeroLoadoutPerks;                              // 0x03A3(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_MainModeItemDetailsHostPanel(int32 EntryPoint);
	void Construct();
	void HandleHasItemMarkedForMulchingChanged();
	void UpdateDescriptionVisibility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MainModeItemDetailsHostPanel_C">();
	}
	static class UMainModeItemDetailsHostPanel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMainModeItemDetailsHostPanel_C>();
	}
};
static_assert(alignof(UMainModeItemDetailsHostPanel_C) == 0x000008, "Wrong alignment on UMainModeItemDetailsHostPanel_C");
static_assert(sizeof(UMainModeItemDetailsHostPanel_C) == 0x0003A8, "Wrong size on UMainModeItemDetailsHostPanel_C");
static_assert(offsetof(UMainModeItemDetailsHostPanel_C, UberGraphFrame) == 0x000340, "Member 'UMainModeItemDetailsHostPanel_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMainModeItemDetailsHostPanel_C, HeaderWidget) == 0x000348, "Member 'UMainModeItemDetailsHostPanel_C::HeaderWidget' has a wrong offset!");
static_assert(offsetof(UMainModeItemDetailsHostPanel_C, HeroLoadoutActiveAbilitiesDetailWidget) == 0x000350, "Member 'UMainModeItemDetailsHostPanel_C::HeroLoadoutActiveAbilitiesDetailWidget' has a wrong offset!");
static_assert(offsetof(UMainModeItemDetailsHostPanel_C, HeroLoadoutPerksDetailWidget) == 0x000358, "Member 'UMainModeItemDetailsHostPanel_C::HeroLoadoutPerksDetailWidget' has a wrong offset!");
static_assert(offsetof(UMainModeItemDetailsHostPanel_C, ItemAlterationsListDetailWidget) == 0x000360, "Member 'UMainModeItemDetailsHostPanel_C::ItemAlterationsListDetailWidget' has a wrong offset!");
static_assert(offsetof(UMainModeItemDetailsHostPanel_C, ItemCalledOutAttributesDetailWidget_2) == 0x000368, "Member 'UMainModeItemDetailsHostPanel_C::ItemCalledOutAttributesDetailWidget_2' has a wrong offset!");
static_assert(offsetof(UMainModeItemDetailsHostPanel_C, ItemDescriptionDetailWidget) == 0x000370, "Member 'UMainModeItemDetailsHostPanel_C::ItemDescriptionDetailWidget' has a wrong offset!");
static_assert(offsetof(UMainModeItemDetailsHostPanel_C, ItemPerksListDetailWidget) == 0x000378, "Member 'UMainModeItemDetailsHostPanel_C::ItemPerksListDetailWidget' has a wrong offset!");
static_assert(offsetof(UMainModeItemDetailsHostPanel_C, MarkedForMulchingBackgroundImage) == 0x000380, "Member 'UMainModeItemDetailsHostPanel_C::MarkedForMulchingBackgroundImage' has a wrong offset!");
static_assert(offsetof(UMainModeItemDetailsHostPanel_C, MarkedForMulchingIndicatorImage) == 0x000388, "Member 'UMainModeItemDetailsHostPanel_C::MarkedForMulchingIndicatorImage' has a wrong offset!");
static_assert(offsetof(UMainModeItemDetailsHostPanel_C, MiniItemCraftingIngredientsDetailWidget_9) == 0x000390, "Member 'UMainModeItemDetailsHostPanel_C::MiniItemCraftingIngredientsDetailWidget_9' has a wrong offset!");
static_assert(offsetof(UMainModeItemDetailsHostPanel_C, SurvivorTraitsDetailWidget) == 0x000398, "Member 'UMainModeItemDetailsHostPanel_C::SurvivorTraitsDetailWidget' has a wrong offset!");
static_assert(offsetof(UMainModeItemDetailsHostPanel_C, ShowActiveAbilitiesOnly) == 0x0003A0, "Member 'UMainModeItemDetailsHostPanel_C::ShowActiveAbilitiesOnly' has a wrong offset!");
static_assert(offsetof(UMainModeItemDetailsHostPanel_C, ShowSurvivorDetails) == 0x0003A1, "Member 'UMainModeItemDetailsHostPanel_C::ShowSurvivorDetails' has a wrong offset!");
static_assert(offsetof(UMainModeItemDetailsHostPanel_C, HideItemDescription) == 0x0003A2, "Member 'UMainModeItemDetailsHostPanel_C::HideItemDescription' has a wrong offset!");
static_assert(offsetof(UMainModeItemDetailsHostPanel_C, ShowHeroLoadoutPerks) == 0x0003A3, "Member 'UMainModeItemDetailsHostPanel_C::ShowHeroLoadoutPerks' has a wrong offset!");

}
