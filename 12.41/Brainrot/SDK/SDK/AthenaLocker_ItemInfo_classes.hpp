#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaLocker_ItemInfo

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaLocker_ItemInfo.AthenaLocker_ItemInfo_C
// 0x0058 (0x0288 - 0x0230)
class UAthenaLocker_ItemInfo_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                Border_ItemRarity;                                 // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_ItemType;                                   // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_RarityTint;                                 // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_93;                                          // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                   RichText_Description;                              // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_ItemName;                                     // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_ItemRarity;                                   // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_ItemType;                                     // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_34;                                    // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          ShowDescription;                                   // 0x0280(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_AthenaLocker_ItemInfo(int32 EntryPoint);
	void Set_item_definition_Invalid();
	void Set_item_definition(class UFortItemDefinition* _item_definition);
	void Overide_Item_Info(const class FText& Param_Name, const class FText& Type, const class FText& Description, EFortRarity Rarity, bool Hide_Rarity);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaLocker_ItemInfo_C">();
	}
	static class UAthenaLocker_ItemInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaLocker_ItemInfo_C>();
	}
};
static_assert(alignof(UAthenaLocker_ItemInfo_C) == 0x000008, "Wrong alignment on UAthenaLocker_ItemInfo_C");
static_assert(sizeof(UAthenaLocker_ItemInfo_C) == 0x000288, "Wrong size on UAthenaLocker_ItemInfo_C");
static_assert(offsetof(UAthenaLocker_ItemInfo_C, UberGraphFrame) == 0x000230, "Member 'UAthenaLocker_ItemInfo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaLocker_ItemInfo_C, Border_ItemRarity) == 0x000238, "Member 'UAthenaLocker_ItemInfo_C::Border_ItemRarity' has a wrong offset!");
static_assert(offsetof(UAthenaLocker_ItemInfo_C, Border_ItemType) == 0x000240, "Member 'UAthenaLocker_ItemInfo_C::Border_ItemType' has a wrong offset!");
static_assert(offsetof(UAthenaLocker_ItemInfo_C, Border_RarityTint) == 0x000248, "Member 'UAthenaLocker_ItemInfo_C::Border_RarityTint' has a wrong offset!");
static_assert(offsetof(UAthenaLocker_ItemInfo_C, Image_93) == 0x000250, "Member 'UAthenaLocker_ItemInfo_C::Image_93' has a wrong offset!");
static_assert(offsetof(UAthenaLocker_ItemInfo_C, RichText_Description) == 0x000258, "Member 'UAthenaLocker_ItemInfo_C::RichText_Description' has a wrong offset!");
static_assert(offsetof(UAthenaLocker_ItemInfo_C, Text_ItemName) == 0x000260, "Member 'UAthenaLocker_ItemInfo_C::Text_ItemName' has a wrong offset!");
static_assert(offsetof(UAthenaLocker_ItemInfo_C, Text_ItemRarity) == 0x000268, "Member 'UAthenaLocker_ItemInfo_C::Text_ItemRarity' has a wrong offset!");
static_assert(offsetof(UAthenaLocker_ItemInfo_C, Text_ItemType) == 0x000270, "Member 'UAthenaLocker_ItemInfo_C::Text_ItemType' has a wrong offset!");
static_assert(offsetof(UAthenaLocker_ItemInfo_C, VerticalBox_34) == 0x000278, "Member 'UAthenaLocker_ItemInfo_C::VerticalBox_34' has a wrong offset!");
static_assert(offsetof(UAthenaLocker_ItemInfo_C, ShowDescription) == 0x000280, "Member 'UAthenaLocker_ItemInfo_C::ShowDescription' has a wrong offset!");

}
