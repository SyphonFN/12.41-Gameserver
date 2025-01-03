#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChatMessageEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ChatMessageEntry.ChatMessageEntry_C
// 0x0030 (0x03A8 - 0x0378)
class UChatMessageEntry_C final : public UFortChatMessageEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0378(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonBorder*                          MessageBackground;                                 // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                MessageWrapper;                                    // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                 DefaultStyle_0;                                    // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 SelfStyle;                                         // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 OtherUserStyle;                                    // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ChatMessageEntry(int32 EntryPoint);
	void OnEntryUpdated_1();
	void OnFocusedChanged(bool bIsFocused);
	void BndEvt__Button_FocusTarget_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature();
	void HandleSelectionStatusChanged(bool bIsSelected);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ChatMessageEntry_C">();
	}
	static class UChatMessageEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChatMessageEntry_C>();
	}
};
static_assert(alignof(UChatMessageEntry_C) == 0x000008, "Wrong alignment on UChatMessageEntry_C");
static_assert(sizeof(UChatMessageEntry_C) == 0x0003A8, "Wrong size on UChatMessageEntry_C");
static_assert(offsetof(UChatMessageEntry_C, UberGraphFrame) == 0x000378, "Member 'UChatMessageEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UChatMessageEntry_C, MessageBackground) == 0x000380, "Member 'UChatMessageEntry_C::MessageBackground' has a wrong offset!");
static_assert(offsetof(UChatMessageEntry_C, MessageWrapper) == 0x000388, "Member 'UChatMessageEntry_C::MessageWrapper' has a wrong offset!");
static_assert(offsetof(UChatMessageEntry_C, DefaultStyle_0) == 0x000390, "Member 'UChatMessageEntry_C::DefaultStyle_0' has a wrong offset!");
static_assert(offsetof(UChatMessageEntry_C, SelfStyle) == 0x000398, "Member 'UChatMessageEntry_C::SelfStyle' has a wrong offset!");
static_assert(offsetof(UChatMessageEntry_C, OtherUserStyle) == 0x0003A0, "Member 'UChatMessageEntry_C::OtherUserStyle' has a wrong offset!");

}

