#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HelpListItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass HelpListItem.HelpListItem_C
// 0x0048 (0x0BC8 - 0x0B80)
class UHelpListItem_C final : public UFortHelpTreeItemBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B80(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Arrow;                                             // 0x0B88(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         EntryHBox;                                         // 0x0B90(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       EntryHeaderName;                                   // 0x0B98(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HeaderHBox;                                        // 0x0BA0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       HeaderText;                                        // 0x0BA8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        PlayerHeaderSwitcher;                              // 0x0BB0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             InviteJoinChanged;                                 // 0x0BB8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void InviteJoinChanged__DelegateSignature();
	void ExecuteUbergraph_HelpListItem(int32 EntryPoint);
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void InitializeItem();
	void SetupExpansion(bool Expanded);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HelpListItem_C">();
	}
	static class UHelpListItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHelpListItem_C>();
	}
};
static_assert(alignof(UHelpListItem_C) == 0x000008, "Wrong alignment on UHelpListItem_C");
static_assert(sizeof(UHelpListItem_C) == 0x000BC8, "Wrong size on UHelpListItem_C");
static_assert(offsetof(UHelpListItem_C, UberGraphFrame) == 0x000B80, "Member 'UHelpListItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UHelpListItem_C, Arrow) == 0x000B88, "Member 'UHelpListItem_C::Arrow' has a wrong offset!");
static_assert(offsetof(UHelpListItem_C, EntryHBox) == 0x000B90, "Member 'UHelpListItem_C::EntryHBox' has a wrong offset!");
static_assert(offsetof(UHelpListItem_C, EntryHeaderName) == 0x000B98, "Member 'UHelpListItem_C::EntryHeaderName' has a wrong offset!");
static_assert(offsetof(UHelpListItem_C, HeaderHBox) == 0x000BA0, "Member 'UHelpListItem_C::HeaderHBox' has a wrong offset!");
static_assert(offsetof(UHelpListItem_C, HeaderText) == 0x000BA8, "Member 'UHelpListItem_C::HeaderText' has a wrong offset!");
static_assert(offsetof(UHelpListItem_C, PlayerHeaderSwitcher) == 0x000BB0, "Member 'UHelpListItem_C::PlayerHeaderSwitcher' has a wrong offset!");
static_assert(offsetof(UHelpListItem_C, InviteJoinChanged) == 0x000BB8, "Member 'UHelpListItem_C::InviteJoinChanged' has a wrong offset!");

}

