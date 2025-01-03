#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InviteListEntry_FriendInvite_XS

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass InviteListEntry_FriendInvite_XS.InviteListEntry_FriendInvite_XS_C
// 0x0068 (0x0C20 - 0x0BB8)
class UInviteListEntry_FriendInvite_XS_C final : public UFortSocialListUserEntryBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0BB8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Selected;                                          // 0x0BC0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Hovered;                                           // 0x0BC8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Arrow;                                             // 0x0BD0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_OnlineStatusIndicator;                      // 0x0BD8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      EmptyButtonToEatOneMouseUpEvent;                   // 0x0BE0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                EntryBorder;                                       // 0x0BE8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                           Online;                                            // 0x0BF0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Offline;                                           // 0x0C00(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Away;                                              // 0x0C10(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_InviteListEntry_FriendInvite_XS(int32 EntryPoint);
	void BP_OnHovered();
	void BP_OnUnhovered();
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
	void HandleOnlineIndicatorView(uint8 OnlineStatus);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"InviteListEntry_FriendInvite_XS_C">();
	}
	static class UInviteListEntry_FriendInvite_XS_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInviteListEntry_FriendInvite_XS_C>();
	}
};
static_assert(alignof(UInviteListEntry_FriendInvite_XS_C) == 0x000008, "Wrong alignment on UInviteListEntry_FriendInvite_XS_C");
static_assert(sizeof(UInviteListEntry_FriendInvite_XS_C) == 0x000C20, "Wrong size on UInviteListEntry_FriendInvite_XS_C");
static_assert(offsetof(UInviteListEntry_FriendInvite_XS_C, UberGraphFrame) == 0x000BB8, "Member 'UInviteListEntry_FriendInvite_XS_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UInviteListEntry_FriendInvite_XS_C, Selected) == 0x000BC0, "Member 'UInviteListEntry_FriendInvite_XS_C::Selected' has a wrong offset!");
static_assert(offsetof(UInviteListEntry_FriendInvite_XS_C, Hovered) == 0x000BC8, "Member 'UInviteListEntry_FriendInvite_XS_C::Hovered' has a wrong offset!");
static_assert(offsetof(UInviteListEntry_FriendInvite_XS_C, Arrow) == 0x000BD0, "Member 'UInviteListEntry_FriendInvite_XS_C::Arrow' has a wrong offset!");
static_assert(offsetof(UInviteListEntry_FriendInvite_XS_C, Border_OnlineStatusIndicator) == 0x000BD8, "Member 'UInviteListEntry_FriendInvite_XS_C::Border_OnlineStatusIndicator' has a wrong offset!");
static_assert(offsetof(UInviteListEntry_FriendInvite_XS_C, EmptyButtonToEatOneMouseUpEvent) == 0x000BE0, "Member 'UInviteListEntry_FriendInvite_XS_C::EmptyButtonToEatOneMouseUpEvent' has a wrong offset!");
static_assert(offsetof(UInviteListEntry_FriendInvite_XS_C, EntryBorder) == 0x000BE8, "Member 'UInviteListEntry_FriendInvite_XS_C::EntryBorder' has a wrong offset!");
static_assert(offsetof(UInviteListEntry_FriendInvite_XS_C, Online) == 0x000BF0, "Member 'UInviteListEntry_FriendInvite_XS_C::Online' has a wrong offset!");
static_assert(offsetof(UInviteListEntry_FriendInvite_XS_C, Offline) == 0x000C00, "Member 'UInviteListEntry_FriendInvite_XS_C::Offline' has a wrong offset!");
static_assert(offsetof(UInviteListEntry_FriendInvite_XS_C, Away) == 0x000C10, "Member 'UInviteListEntry_FriendInvite_XS_C::Away' has a wrong offset!");

}

