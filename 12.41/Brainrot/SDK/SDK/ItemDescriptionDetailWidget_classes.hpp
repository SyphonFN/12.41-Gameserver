#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemDescriptionDetailWidget

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemDescriptionDetailWidget.ItemDescriptionDetailWidget_C
// 0x0020 (0x02D0 - 0x02B0)
class UItemDescriptionDetailWidget_C final : public UFortItemDetailElementWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                       ItemDescriptionTextBlock;                          // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       QuantityTextBlock;                                 // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          ShouldShowOnlyIfItemIsSimple;                      // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          InCollectionBook;                                  // 0x02C9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void HandleItemChanged(bool ItemChanged, bool AmmoChanged, bool IngredientsChanged);
	void UpdateQuantityTextBlock();
	void IsItemSimple(bool* Result);
	void HandlePostDifferentItemToDetailSet();
	void HandlePreDifferentItemToDetailSet();
	void HandleQuantityOverrideChanged();
	void ExecuteUbergraph_ItemDescriptionDetailWidget(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemDescriptionDetailWidget_C">();
	}
	static class UItemDescriptionDetailWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemDescriptionDetailWidget_C>();
	}
};
static_assert(alignof(UItemDescriptionDetailWidget_C) == 0x000008, "Wrong alignment on UItemDescriptionDetailWidget_C");
static_assert(sizeof(UItemDescriptionDetailWidget_C) == 0x0002D0, "Wrong size on UItemDescriptionDetailWidget_C");
static_assert(offsetof(UItemDescriptionDetailWidget_C, UberGraphFrame) == 0x0002B0, "Member 'UItemDescriptionDetailWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UItemDescriptionDetailWidget_C, ItemDescriptionTextBlock) == 0x0002B8, "Member 'UItemDescriptionDetailWidget_C::ItemDescriptionTextBlock' has a wrong offset!");
static_assert(offsetof(UItemDescriptionDetailWidget_C, QuantityTextBlock) == 0x0002C0, "Member 'UItemDescriptionDetailWidget_C::QuantityTextBlock' has a wrong offset!");
static_assert(offsetof(UItemDescriptionDetailWidget_C, ShouldShowOnlyIfItemIsSimple) == 0x0002C8, "Member 'UItemDescriptionDetailWidget_C::ShouldShowOnlyIfItemIsSimple' has a wrong offset!");
static_assert(offsetof(UItemDescriptionDetailWidget_C, InCollectionBook) == 0x0002C9, "Member 'UItemDescriptionDetailWidget_C::InCollectionBook' has a wrong offset!");

}
