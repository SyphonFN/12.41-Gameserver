#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ServerBrowser

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ServerBrowser.ServerBrowser_C
// 0x0050 (0x03E0 - 0x0390)
class UServerBrowser_C final : public UFortServerBrowserBattleLab
{
public:
	class UIconTextButton_C*                      AddFriendsButton;                                  // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               AddFriendsContent;                                 // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       AddFriendsText;                                    // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_158;                                         // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_IdlePulse;                                   // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               IslandCodeContent;                                 // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OverlayCloseButton;                                // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OverlayTitle;                                      // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_0;                                        // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_3;                                        // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ServerBrowser_C">();
	}
	static class UServerBrowser_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UServerBrowser_C>();
	}
};
static_assert(alignof(UServerBrowser_C) == 0x000008, "Wrong alignment on UServerBrowser_C");
static_assert(sizeof(UServerBrowser_C) == 0x0003E0, "Wrong size on UServerBrowser_C");
static_assert(offsetof(UServerBrowser_C, AddFriendsButton) == 0x000390, "Member 'UServerBrowser_C::AddFriendsButton' has a wrong offset!");
static_assert(offsetof(UServerBrowser_C, AddFriendsContent) == 0x000398, "Member 'UServerBrowser_C::AddFriendsContent' has a wrong offset!");
static_assert(offsetof(UServerBrowser_C, AddFriendsText) == 0x0003A0, "Member 'UServerBrowser_C::AddFriendsText' has a wrong offset!");
static_assert(offsetof(UServerBrowser_C, Image_158) == 0x0003A8, "Member 'UServerBrowser_C::Image_158' has a wrong offset!");
static_assert(offsetof(UServerBrowser_C, Image_IdlePulse) == 0x0003B0, "Member 'UServerBrowser_C::Image_IdlePulse' has a wrong offset!");
static_assert(offsetof(UServerBrowser_C, IslandCodeContent) == 0x0003B8, "Member 'UServerBrowser_C::IslandCodeContent' has a wrong offset!");
static_assert(offsetof(UServerBrowser_C, OverlayCloseButton) == 0x0003C0, "Member 'UServerBrowser_C::OverlayCloseButton' has a wrong offset!");
static_assert(offsetof(UServerBrowser_C, OverlayTitle) == 0x0003C8, "Member 'UServerBrowser_C::OverlayTitle' has a wrong offset!");
static_assert(offsetof(UServerBrowser_C, SafeZone_0) == 0x0003D0, "Member 'UServerBrowser_C::SafeZone_0' has a wrong offset!");
static_assert(offsetof(UServerBrowser_C, SafeZone_3) == 0x0003D8, "Member 'UServerBrowser_C::SafeZone_3' has a wrong offset!");

}
