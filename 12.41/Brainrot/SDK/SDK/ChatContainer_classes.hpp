#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChatContainer

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ChatContainer.ChatContainer_C
// 0x0080 (0x0350 - 0x02D0)
class UChatContainer_C final : public UFortChatContainer
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       SizeAnimation;                                     // 0x02D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FadeAnimation;                                     // 0x02E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonBorder*                          ChatBorder;                                        // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          CommonBorderBackground;                            // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      ConsoleChatShortcut;                               // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        CursorModeSwitcher;                                // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HBox_Messages;                                     // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               HBox_Tabs;                                         // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HudContentHBox;                                    // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeybindWidget_C*                       KeybindWidget;                                     // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_ChatSize;                                  // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_ConsoleButtonSpaceProvider;                // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switcher_SendButton;                               // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Disabled;                                     // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EUMGSequencePlayMode                          NewVar_0;                                          // 0x0348(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CurrentlyUsingGamepad;                             // 0x0349(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          AnimationClosing;                                  // 0x034A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_ChatContainer(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Destruct();
	void BndEvt__ConsoleChatShortcut_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void OnSendButtonDisplayChanged(bool bShowSendButton);
	void OnChatOpenChanged(bool bShouldBeOpen);
	void HandleCursorModeChanged(bool bEnabled, class FName ActionName, class UUserWidget* Widget);
	void OnSizeAnimationComplete();
	void HandleChatOpenChanged(bool bChatShouldBeOpen);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void SetChatBoxStyle();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ChatContainer_C">();
	}
	static class UChatContainer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChatContainer_C>();
	}
};
static_assert(alignof(UChatContainer_C) == 0x000008, "Wrong alignment on UChatContainer_C");
static_assert(sizeof(UChatContainer_C) == 0x000350, "Wrong size on UChatContainer_C");
static_assert(offsetof(UChatContainer_C, UberGraphFrame) == 0x0002D0, "Member 'UChatContainer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UChatContainer_C, SizeAnimation) == 0x0002D8, "Member 'UChatContainer_C::SizeAnimation' has a wrong offset!");
static_assert(offsetof(UChatContainer_C, FadeAnimation) == 0x0002E0, "Member 'UChatContainer_C::FadeAnimation' has a wrong offset!");
static_assert(offsetof(UChatContainer_C, ChatBorder) == 0x0002E8, "Member 'UChatContainer_C::ChatBorder' has a wrong offset!");
static_assert(offsetof(UChatContainer_C, CommonBorderBackground) == 0x0002F0, "Member 'UChatContainer_C::CommonBorderBackground' has a wrong offset!");
static_assert(offsetof(UChatContainer_C, ConsoleChatShortcut) == 0x0002F8, "Member 'UChatContainer_C::ConsoleChatShortcut' has a wrong offset!");
static_assert(offsetof(UChatContainer_C, CursorModeSwitcher) == 0x000300, "Member 'UChatContainer_C::CursorModeSwitcher' has a wrong offset!");
static_assert(offsetof(UChatContainer_C, HBox_Messages) == 0x000308, "Member 'UChatContainer_C::HBox_Messages' has a wrong offset!");
static_assert(offsetof(UChatContainer_C, HBox_Tabs) == 0x000310, "Member 'UChatContainer_C::HBox_Tabs' has a wrong offset!");
static_assert(offsetof(UChatContainer_C, HudContentHBox) == 0x000318, "Member 'UChatContainer_C::HudContentHBox' has a wrong offset!");
static_assert(offsetof(UChatContainer_C, KeybindWidget) == 0x000320, "Member 'UChatContainer_C::KeybindWidget' has a wrong offset!");
static_assert(offsetof(UChatContainer_C, SizeBox_ChatSize) == 0x000328, "Member 'UChatContainer_C::SizeBox_ChatSize' has a wrong offset!");
static_assert(offsetof(UChatContainer_C, SizeBox_ConsoleButtonSpaceProvider) == 0x000330, "Member 'UChatContainer_C::SizeBox_ConsoleButtonSpaceProvider' has a wrong offset!");
static_assert(offsetof(UChatContainer_C, Switcher_SendButton) == 0x000338, "Member 'UChatContainer_C::Switcher_SendButton' has a wrong offset!");
static_assert(offsetof(UChatContainer_C, Text_Disabled) == 0x000340, "Member 'UChatContainer_C::Text_Disabled' has a wrong offset!");
static_assert(offsetof(UChatContainer_C, NewVar_0) == 0x000348, "Member 'UChatContainer_C::NewVar_0' has a wrong offset!");
static_assert(offsetof(UChatContainer_C, CurrentlyUsingGamepad) == 0x000349, "Member 'UChatContainer_C::CurrentlyUsingGamepad' has a wrong offset!");
static_assert(offsetof(UChatContainer_C, AnimationClosing) == 0x00034A, "Member 'UChatContainer_C::AnimationClosing' has a wrong offset!");

}
