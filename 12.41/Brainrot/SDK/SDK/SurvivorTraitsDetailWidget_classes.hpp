#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SurvivorTraitsDetailWidget

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SurvivorTraitsDetailWidget.SurvivorTraitsDetailWidget_C
// 0x0060 (0x0310 - 0x02B0)
class USurvivorTraitsDetailWidget_C final : public UFortItemDetailElementWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 DotRule;                                           // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItemCategoryIndicator*             FortItemCategoryIndicator2Icon;                    // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItemCategoryIndicator*             FortItemCategoryIndicatorIcon;                     // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               ParentSizeBox;                                     // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          SecondaryBorder;                                   // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItemCategoryIndicator*             SecondaryCategoryIndicator;                        // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          TertiaryBorder;                                    // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItemCategoryIndicator*             TertiaryCategoryIndicator;                         // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextPersonality;                                   // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextTertiaryHeader;                                // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          HasPersonality;                                    // 0x0308(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          HasSetBonus;                                       // 0x0309(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          HasManagerSynergy;                                 // 0x030A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void HandlePostDifferentItemToDetailSet();
	void ExecuteUbergraph_SurvivorTraitsDetailWidget(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SurvivorTraitsDetailWidget_C">();
	}
	static class USurvivorTraitsDetailWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USurvivorTraitsDetailWidget_C>();
	}
};
static_assert(alignof(USurvivorTraitsDetailWidget_C) == 0x000008, "Wrong alignment on USurvivorTraitsDetailWidget_C");
static_assert(sizeof(USurvivorTraitsDetailWidget_C) == 0x000310, "Wrong size on USurvivorTraitsDetailWidget_C");
static_assert(offsetof(USurvivorTraitsDetailWidget_C, UberGraphFrame) == 0x0002B0, "Member 'USurvivorTraitsDetailWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USurvivorTraitsDetailWidget_C, DotRule) == 0x0002B8, "Member 'USurvivorTraitsDetailWidget_C::DotRule' has a wrong offset!");
static_assert(offsetof(USurvivorTraitsDetailWidget_C, FortItemCategoryIndicator2Icon) == 0x0002C0, "Member 'USurvivorTraitsDetailWidget_C::FortItemCategoryIndicator2Icon' has a wrong offset!");
static_assert(offsetof(USurvivorTraitsDetailWidget_C, FortItemCategoryIndicatorIcon) == 0x0002C8, "Member 'USurvivorTraitsDetailWidget_C::FortItemCategoryIndicatorIcon' has a wrong offset!");
static_assert(offsetof(USurvivorTraitsDetailWidget_C, ParentSizeBox) == 0x0002D0, "Member 'USurvivorTraitsDetailWidget_C::ParentSizeBox' has a wrong offset!");
static_assert(offsetof(USurvivorTraitsDetailWidget_C, SecondaryBorder) == 0x0002D8, "Member 'USurvivorTraitsDetailWidget_C::SecondaryBorder' has a wrong offset!");
static_assert(offsetof(USurvivorTraitsDetailWidget_C, SecondaryCategoryIndicator) == 0x0002E0, "Member 'USurvivorTraitsDetailWidget_C::SecondaryCategoryIndicator' has a wrong offset!");
static_assert(offsetof(USurvivorTraitsDetailWidget_C, TertiaryBorder) == 0x0002E8, "Member 'USurvivorTraitsDetailWidget_C::TertiaryBorder' has a wrong offset!");
static_assert(offsetof(USurvivorTraitsDetailWidget_C, TertiaryCategoryIndicator) == 0x0002F0, "Member 'USurvivorTraitsDetailWidget_C::TertiaryCategoryIndicator' has a wrong offset!");
static_assert(offsetof(USurvivorTraitsDetailWidget_C, TextPersonality) == 0x0002F8, "Member 'USurvivorTraitsDetailWidget_C::TextPersonality' has a wrong offset!");
static_assert(offsetof(USurvivorTraitsDetailWidget_C, TextTertiaryHeader) == 0x000300, "Member 'USurvivorTraitsDetailWidget_C::TextTertiaryHeader' has a wrong offset!");
static_assert(offsetof(USurvivorTraitsDetailWidget_C, HasPersonality) == 0x000308, "Member 'USurvivorTraitsDetailWidget_C::HasPersonality' has a wrong offset!");
static_assert(offsetof(USurvivorTraitsDetailWidget_C, HasSetBonus) == 0x000309, "Member 'USurvivorTraitsDetailWidget_C::HasSetBonus' has a wrong offset!");
static_assert(offsetof(USurvivorTraitsDetailWidget_C, HasManagerSynergy) == 0x00030A, "Member 'USurvivorTraitsDetailWidget_C::HasManagerSynergy' has a wrong offset!");

}
