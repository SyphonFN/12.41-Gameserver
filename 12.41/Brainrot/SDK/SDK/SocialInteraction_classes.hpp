#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SocialInteraction

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "SocialUMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SocialInteraction.SocialInteraction_C
// 0x0048 (0x0C18 - 0x0BD0)
class USocialInteraction_C final : public USocialInteractionButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0BD0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       OnHover;                                           // 0x0BD8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 EncourageEpicFriend;                               // 0x0BE0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 InteractionIcon;                                   // 0x0BE8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuAnchor*                            MenuAnchor_Actions;                                // 0x0BF0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                           EncourageEpicFriend_IdleColor;                     // 0x0BF8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           EncourageEpicFriend_HoveredColor;                  // 0x0C08(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SocialInteraction(int32 EntryPoint);
	void OnInteractionSet();
	void BP_OnUnhovered();
	void BP_OnHovered();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SocialInteraction_C">();
	}
	static class USocialInteraction_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialInteraction_C>();
	}
};
static_assert(alignof(USocialInteraction_C) == 0x000008, "Wrong alignment on USocialInteraction_C");
static_assert(sizeof(USocialInteraction_C) == 0x000C18, "Wrong size on USocialInteraction_C");
static_assert(offsetof(USocialInteraction_C, UberGraphFrame) == 0x000BD0, "Member 'USocialInteraction_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USocialInteraction_C, OnHover) == 0x000BD8, "Member 'USocialInteraction_C::OnHover' has a wrong offset!");
static_assert(offsetof(USocialInteraction_C, EncourageEpicFriend) == 0x000BE0, "Member 'USocialInteraction_C::EncourageEpicFriend' has a wrong offset!");
static_assert(offsetof(USocialInteraction_C, InteractionIcon) == 0x000BE8, "Member 'USocialInteraction_C::InteractionIcon' has a wrong offset!");
static_assert(offsetof(USocialInteraction_C, MenuAnchor_Actions) == 0x000BF0, "Member 'USocialInteraction_C::MenuAnchor_Actions' has a wrong offset!");
static_assert(offsetof(USocialInteraction_C, EncourageEpicFriend_IdleColor) == 0x000BF8, "Member 'USocialInteraction_C::EncourageEpicFriend_IdleColor' has a wrong offset!");
static_assert(offsetof(USocialInteraction_C, EncourageEpicFriend_HoveredColor) == 0x000C08, "Member 'USocialInteraction_C::EncourageEpicFriend_HoveredColor' has a wrong offset!");

}

