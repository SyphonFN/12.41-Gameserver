#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SocialPanel_FriendLinkButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SocialPanel_FriendLinkButton.SocialPanel_FriendLinkButton_C
// 0x0048 (0x0BC0 - 0x0B78)
class USocialPanel_FriendLinkButton_C final : public UFortSocialPanelView_FriendLinkButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B78(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       OnCopied;                                          // 0x0B80(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       OnHovered;                                         // 0x0B88(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UMenuAnchor*                            MenuAnchor_Actions;                                // 0x0B90(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMobileImage*                       SharingIcon;                                       // 0x0B98(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  Switcher_CopyState;                                // 0x0BA0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_CopyConfirmed;                                // 0x0BA8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_FriendLinkInstructions;                       // 0x0BB0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_LinkPrompt;                                   // 0x0BB8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SocialPanel_FriendLinkButton(int32 EntryPoint);
	void OnShareButtonTypeSet(EFriendLinkShareButtonType Type);
	void Construct();
	void BP_OnHovered();
	void OnCopiedToClipboard();
	void BP_OnUnhovered();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SocialPanel_FriendLinkButton_C">();
	}
	static class USocialPanel_FriendLinkButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialPanel_FriendLinkButton_C>();
	}
};
static_assert(alignof(USocialPanel_FriendLinkButton_C) == 0x000008, "Wrong alignment on USocialPanel_FriendLinkButton_C");
static_assert(sizeof(USocialPanel_FriendLinkButton_C) == 0x000BC0, "Wrong size on USocialPanel_FriendLinkButton_C");
static_assert(offsetof(USocialPanel_FriendLinkButton_C, UberGraphFrame) == 0x000B78, "Member 'USocialPanel_FriendLinkButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USocialPanel_FriendLinkButton_C, OnCopied) == 0x000B80, "Member 'USocialPanel_FriendLinkButton_C::OnCopied' has a wrong offset!");
static_assert(offsetof(USocialPanel_FriendLinkButton_C, OnHovered) == 0x000B88, "Member 'USocialPanel_FriendLinkButton_C::OnHovered' has a wrong offset!");
static_assert(offsetof(USocialPanel_FriendLinkButton_C, MenuAnchor_Actions) == 0x000B90, "Member 'USocialPanel_FriendLinkButton_C::MenuAnchor_Actions' has a wrong offset!");
static_assert(offsetof(USocialPanel_FriendLinkButton_C, SharingIcon) == 0x000B98, "Member 'USocialPanel_FriendLinkButton_C::SharingIcon' has a wrong offset!");
static_assert(offsetof(USocialPanel_FriendLinkButton_C, Switcher_CopyState) == 0x000BA0, "Member 'USocialPanel_FriendLinkButton_C::Switcher_CopyState' has a wrong offset!");
static_assert(offsetof(USocialPanel_FriendLinkButton_C, Text_CopyConfirmed) == 0x000BA8, "Member 'USocialPanel_FriendLinkButton_C::Text_CopyConfirmed' has a wrong offset!");
static_assert(offsetof(USocialPanel_FriendLinkButton_C, Text_FriendLinkInstructions) == 0x000BB0, "Member 'USocialPanel_FriendLinkButton_C::Text_FriendLinkInstructions' has a wrong offset!");
static_assert(offsetof(USocialPanel_FriendLinkButton_C, Text_LinkPrompt) == 0x000BB8, "Member 'USocialPanel_FriendLinkButton_C::Text_LinkPrompt' has a wrong offset!");

}
