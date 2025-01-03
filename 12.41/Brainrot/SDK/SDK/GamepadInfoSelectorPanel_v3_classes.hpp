#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GamepadInfoSelectorPanel_v3

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C
// 0x00C8 (0x0510 - 0x0448)
class UGamepadInfoSelectorPanel_v3_C final : public UFortGamePadInfoSelectorPanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0448(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonBorder*                          CommonBorder_Reset;                                // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortRadioButtonGroup_C*                FortRadioButtonGroup_Configs;                      // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortRadioButtonGroup_C*                FortRadioButtonGroup_Platforms;                    // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortRichTextBlock*                     FortRichTextBlock_Reset1;                          // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortRichTextBlock*                     FortRichTextBlock_Reset2;                          // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeybindWidget_C*                       KeybindWidget_Reset;                               // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuHeader_C*                   OptionsMenuHeader_Configs;                         // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuHeader_C*                   OptionsMenuHeader_Platforms;                       // 0x0488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                ResetButton;                                       // 0x0490(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_Platforms;                             // 0x0498(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                    Back;                                              // 0x04A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	FMulticastInlineDelegateProperty_             GamepadInfoSelectorBack;                           // 0x04B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FDataTableRowHandle                    Apply;                                             // 0x04C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	FMulticastInlineDelegateProperty_             GamepadInfoSelectorApply;                          // 0x04D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FDataTableRowHandle                    Reset;                                             // 0x04E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	FMulticastInlineDelegateProperty_             GamepadInfoSelectorReset;                          // 0x04F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             GamepadInfoSelectorFocus;                          // 0x0500(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void GamepadInfoSelectorBack__DelegateSignature();
	void GamepadInfoSelectorApply__DelegateSignature();
	void GamepadInfoSelectorReset__DelegateSignature();
	void GamepadInfoSelectorFocus__DelegateSignature();
	void ExecuteUbergraph_GamepadInfoSelectorPanel_v3(int32 EntryPoint);
	void BndEvt__ResetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BP_OnActivated();
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void BP_OnDeactivated();
	void HandleBack(bool* PassThrough);
	void HandleApply(bool* PassThrough);
	void HandleReset(bool* PassThrough);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GamepadInfoSelectorPanel_v3_C">();
	}
	static class UGamepadInfoSelectorPanel_v3_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGamepadInfoSelectorPanel_v3_C>();
	}
};
static_assert(alignof(UGamepadInfoSelectorPanel_v3_C) == 0x000008, "Wrong alignment on UGamepadInfoSelectorPanel_v3_C");
static_assert(sizeof(UGamepadInfoSelectorPanel_v3_C) == 0x000510, "Wrong size on UGamepadInfoSelectorPanel_v3_C");
static_assert(offsetof(UGamepadInfoSelectorPanel_v3_C, UberGraphFrame) == 0x000448, "Member 'UGamepadInfoSelectorPanel_v3_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGamepadInfoSelectorPanel_v3_C, CommonBorder_Reset) == 0x000450, "Member 'UGamepadInfoSelectorPanel_v3_C::CommonBorder_Reset' has a wrong offset!");
static_assert(offsetof(UGamepadInfoSelectorPanel_v3_C, FortRadioButtonGroup_Configs) == 0x000458, "Member 'UGamepadInfoSelectorPanel_v3_C::FortRadioButtonGroup_Configs' has a wrong offset!");
static_assert(offsetof(UGamepadInfoSelectorPanel_v3_C, FortRadioButtonGroup_Platforms) == 0x000460, "Member 'UGamepadInfoSelectorPanel_v3_C::FortRadioButtonGroup_Platforms' has a wrong offset!");
static_assert(offsetof(UGamepadInfoSelectorPanel_v3_C, FortRichTextBlock_Reset1) == 0x000468, "Member 'UGamepadInfoSelectorPanel_v3_C::FortRichTextBlock_Reset1' has a wrong offset!");
static_assert(offsetof(UGamepadInfoSelectorPanel_v3_C, FortRichTextBlock_Reset2) == 0x000470, "Member 'UGamepadInfoSelectorPanel_v3_C::FortRichTextBlock_Reset2' has a wrong offset!");
static_assert(offsetof(UGamepadInfoSelectorPanel_v3_C, KeybindWidget_Reset) == 0x000478, "Member 'UGamepadInfoSelectorPanel_v3_C::KeybindWidget_Reset' has a wrong offset!");
static_assert(offsetof(UGamepadInfoSelectorPanel_v3_C, OptionsMenuHeader_Configs) == 0x000480, "Member 'UGamepadInfoSelectorPanel_v3_C::OptionsMenuHeader_Configs' has a wrong offset!");
static_assert(offsetof(UGamepadInfoSelectorPanel_v3_C, OptionsMenuHeader_Platforms) == 0x000488, "Member 'UGamepadInfoSelectorPanel_v3_C::OptionsMenuHeader_Platforms' has a wrong offset!");
static_assert(offsetof(UGamepadInfoSelectorPanel_v3_C, ResetButton) == 0x000490, "Member 'UGamepadInfoSelectorPanel_v3_C::ResetButton' has a wrong offset!");
static_assert(offsetof(UGamepadInfoSelectorPanel_v3_C, VerticalBox_Platforms) == 0x000498, "Member 'UGamepadInfoSelectorPanel_v3_C::VerticalBox_Platforms' has a wrong offset!");
static_assert(offsetof(UGamepadInfoSelectorPanel_v3_C, Back) == 0x0004A0, "Member 'UGamepadInfoSelectorPanel_v3_C::Back' has a wrong offset!");
static_assert(offsetof(UGamepadInfoSelectorPanel_v3_C, GamepadInfoSelectorBack) == 0x0004B0, "Member 'UGamepadInfoSelectorPanel_v3_C::GamepadInfoSelectorBack' has a wrong offset!");
static_assert(offsetof(UGamepadInfoSelectorPanel_v3_C, Apply) == 0x0004C0, "Member 'UGamepadInfoSelectorPanel_v3_C::Apply' has a wrong offset!");
static_assert(offsetof(UGamepadInfoSelectorPanel_v3_C, GamepadInfoSelectorApply) == 0x0004D0, "Member 'UGamepadInfoSelectorPanel_v3_C::GamepadInfoSelectorApply' has a wrong offset!");
static_assert(offsetof(UGamepadInfoSelectorPanel_v3_C, Reset) == 0x0004E0, "Member 'UGamepadInfoSelectorPanel_v3_C::Reset' has a wrong offset!");
static_assert(offsetof(UGamepadInfoSelectorPanel_v3_C, GamepadInfoSelectorReset) == 0x0004F0, "Member 'UGamepadInfoSelectorPanel_v3_C::GamepadInfoSelectorReset' has a wrong offset!");
static_assert(offsetof(UGamepadInfoSelectorPanel_v3_C, GamepadInfoSelectorFocus) == 0x000500, "Member 'UGamepadInfoSelectorPanel_v3_C::GamepadInfoSelectorFocus' has a wrong offset!");

}

