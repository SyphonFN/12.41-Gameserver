#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InviteEventTitle

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass InviteEventTitle.InviteEventTitle_C
// 0x0018 (0x0248 - 0x0230)
class UInviteEventTitle_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                       Text_Invite;                                       // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLazyImage*                       TitleImage;                                        // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_InviteEventTitle(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"InviteEventTitle_C">();
	}
	static class UInviteEventTitle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInviteEventTitle_C>();
	}
};
static_assert(alignof(UInviteEventTitle_C) == 0x000008, "Wrong alignment on UInviteEventTitle_C");
static_assert(sizeof(UInviteEventTitle_C) == 0x000248, "Wrong size on UInviteEventTitle_C");
static_assert(offsetof(UInviteEventTitle_C, UberGraphFrame) == 0x000230, "Member 'UInviteEventTitle_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UInviteEventTitle_C, Text_Invite) == 0x000238, "Member 'UInviteEventTitle_C::Text_Invite' has a wrong offset!");
static_assert(offsetof(UInviteEventTitle_C, TitleImage) == 0x000240, "Member 'UInviteEventTitle_C::TitleImage' has a wrong offset!");

}
