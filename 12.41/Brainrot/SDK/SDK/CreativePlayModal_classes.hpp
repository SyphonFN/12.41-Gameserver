#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CreativePlayModal

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "CommonInput_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CreativePlayModal.CreativePlayModal_C
// 0x0080 (0x04F8 - 0x0478)
class UCreativePlayModal_C final : public UFortCreativePlayOptions
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0478(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FriendsAdded;                                      // 0x0480(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Intro;                                             // 0x0488(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UIconTextButton_C*                      AddFriendsButton;                                  // 0x0490(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               AddFriendsContent;                                 // 0x0498(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       AddFriendsText;                                    // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCloseButton_C*                         CloseButton;                                       // 0x04A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCreativeLobbyAdSpace_C*                CreativeLobbyAdSpace;                              // 0x04B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_158;                                         // 0x04B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_IdlePulse;                                   // 0x04C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      IslandCodeButton;                                  // 0x04C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               IslandCodeContent;                                 // 0x04D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OverlayTitle;                                      // 0x04D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_0;                                        // 0x04E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_3;                                        // 0x04E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       StartIslandText;                                   // 0x04F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CreativePlayModal(int32 EntryPoint);
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnInputMethodChanged(ECommonInputType bNewInputType);
	void CreativeIslandCodeConfirmedEvent(const class UFortCreativeIslandLink* IslandLink);
	void BndEvt__IslandCodeButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__AddFriendsButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnBeginOutro();
	void BP_OnDeactivated();
	void BP_OnActivated();
	void Construct();
	void BndEvt__CreativeOptionsServers_K2Node_ComponentBoundEvent_0_OnSelectedServerChanged__DelegateSignature(class UFortCreativeServerInfo* ServerInfo);
	void InitFromObject(class UObject* InitObject);
	void NullActionHandler(bool* bPassThrough);
	void InitializeAddFriends();
	void HandleSocialImportClosed();
	void SetStartIsland(const class FText& StartIslandName);
	void ManageCancelButton();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CreativePlayModal_C">();
	}
	static class UCreativePlayModal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCreativePlayModal_C>();
	}
};
static_assert(alignof(UCreativePlayModal_C) == 0x000008, "Wrong alignment on UCreativePlayModal_C");
static_assert(sizeof(UCreativePlayModal_C) == 0x0004F8, "Wrong size on UCreativePlayModal_C");
static_assert(offsetof(UCreativePlayModal_C, UberGraphFrame) == 0x000478, "Member 'UCreativePlayModal_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCreativePlayModal_C, FriendsAdded) == 0x000480, "Member 'UCreativePlayModal_C::FriendsAdded' has a wrong offset!");
static_assert(offsetof(UCreativePlayModal_C, Intro) == 0x000488, "Member 'UCreativePlayModal_C::Intro' has a wrong offset!");
static_assert(offsetof(UCreativePlayModal_C, AddFriendsButton) == 0x000490, "Member 'UCreativePlayModal_C::AddFriendsButton' has a wrong offset!");
static_assert(offsetof(UCreativePlayModal_C, AddFriendsContent) == 0x000498, "Member 'UCreativePlayModal_C::AddFriendsContent' has a wrong offset!");
static_assert(offsetof(UCreativePlayModal_C, AddFriendsText) == 0x0004A0, "Member 'UCreativePlayModal_C::AddFriendsText' has a wrong offset!");
static_assert(offsetof(UCreativePlayModal_C, CloseButton) == 0x0004A8, "Member 'UCreativePlayModal_C::CloseButton' has a wrong offset!");
static_assert(offsetof(UCreativePlayModal_C, CreativeLobbyAdSpace) == 0x0004B0, "Member 'UCreativePlayModal_C::CreativeLobbyAdSpace' has a wrong offset!");
static_assert(offsetof(UCreativePlayModal_C, Image_158) == 0x0004B8, "Member 'UCreativePlayModal_C::Image_158' has a wrong offset!");
static_assert(offsetof(UCreativePlayModal_C, Image_IdlePulse) == 0x0004C0, "Member 'UCreativePlayModal_C::Image_IdlePulse' has a wrong offset!");
static_assert(offsetof(UCreativePlayModal_C, IslandCodeButton) == 0x0004C8, "Member 'UCreativePlayModal_C::IslandCodeButton' has a wrong offset!");
static_assert(offsetof(UCreativePlayModal_C, IslandCodeContent) == 0x0004D0, "Member 'UCreativePlayModal_C::IslandCodeContent' has a wrong offset!");
static_assert(offsetof(UCreativePlayModal_C, OverlayTitle) == 0x0004D8, "Member 'UCreativePlayModal_C::OverlayTitle' has a wrong offset!");
static_assert(offsetof(UCreativePlayModal_C, SafeZone_0) == 0x0004E0, "Member 'UCreativePlayModal_C::SafeZone_0' has a wrong offset!");
static_assert(offsetof(UCreativePlayModal_C, SafeZone_3) == 0x0004E8, "Member 'UCreativePlayModal_C::SafeZone_3' has a wrong offset!");
static_assert(offsetof(UCreativePlayModal_C, StartIslandText) == 0x0004F0, "Member 'UCreativePlayModal_C::StartIslandText' has a wrong offset!");

}
