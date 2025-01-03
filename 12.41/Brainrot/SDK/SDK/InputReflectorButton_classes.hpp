#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InputReflectorButton

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"
#include "CommonInput_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass InputReflectorButton.InputReflectorButton_C
// 0x00F8 (0x0C78 - 0x0B80)
class UInputReflectorButton_C final : public UCommonPopupButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B80(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                       CenterButtonTextWidget;                            // 0x0B88(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                ContentBorder;                                     // 0x0B90(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LeftSideImage;                                     // 0x0B98(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             RightExtraContentSlot;                             // 0x0BA0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   ButtonText;                                        // 0x0BA8(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateBrush                            IconBrush;                                         // 0x0BC0(0x0088)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UClass*                                 ControllerInputStyle;                              // 0x0C48(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UClass*                                 MouseKeyboardStyle;                                // 0x0C50(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EHorizontalAlignment                          ContentAlignment;                                  // 0x0C58(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bMouseKeyboardStyleSet;                            // 0x0C59(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D78[0x6];                                     // 0x0C5A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   OverrideButtonText;                                // 0x0C60(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_InputReflectorButton(int32 EntryPoint);
	void Destruct();
	void Construct();
	void OnActionComplete();
	void OnActionProgress(float HeldPercent);
	void OnTriggeredInputActionChanged(const struct FDataTableRowHandle& NewTriggeredAction);
	void BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad);
	void PreConstruct(bool IsDesignTime);
	void OnCurrentTextStyleChanged();
	void Set_Text(const class FText& Param_ButtonText);
	void Set_Icon(const struct FSlateBrush& Param_IconBrush);
	void InitializeButton();
	void UpdateTextAndStyle(bool bUsingGamepad);
	void SetControllerStyle(class UClass* Param_ControllerInputStyle);
	void UpdateText();
	void UpdateStyle(bool UsingGamepad);
	void SetMouseKeyboardStyle(class UClass* Param_ControllerInputStyle);
	void UpdateContentAlignment();
	void SetContentAlignment(EHorizontalAlignment Param_ContentAlignment);
	void UpdateTextStyle();
	void SetInitialMouseKeyboardStyle();
	void SetTextInternal(const class FText& InButtonText);
	void ShowIcon(bool bShouldShow);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"InputReflectorButton_C">();
	}
	static class UInputReflectorButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInputReflectorButton_C>();
	}
};
static_assert(alignof(UInputReflectorButton_C) == 0x000008, "Wrong alignment on UInputReflectorButton_C");
static_assert(sizeof(UInputReflectorButton_C) == 0x000C78, "Wrong size on UInputReflectorButton_C");
static_assert(offsetof(UInputReflectorButton_C, UberGraphFrame) == 0x000B80, "Member 'UInputReflectorButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UInputReflectorButton_C, CenterButtonTextWidget) == 0x000B88, "Member 'UInputReflectorButton_C::CenterButtonTextWidget' has a wrong offset!");
static_assert(offsetof(UInputReflectorButton_C, ContentBorder) == 0x000B90, "Member 'UInputReflectorButton_C::ContentBorder' has a wrong offset!");
static_assert(offsetof(UInputReflectorButton_C, LeftSideImage) == 0x000B98, "Member 'UInputReflectorButton_C::LeftSideImage' has a wrong offset!");
static_assert(offsetof(UInputReflectorButton_C, RightExtraContentSlot) == 0x000BA0, "Member 'UInputReflectorButton_C::RightExtraContentSlot' has a wrong offset!");
static_assert(offsetof(UInputReflectorButton_C, ButtonText) == 0x000BA8, "Member 'UInputReflectorButton_C::ButtonText' has a wrong offset!");
static_assert(offsetof(UInputReflectorButton_C, IconBrush) == 0x000BC0, "Member 'UInputReflectorButton_C::IconBrush' has a wrong offset!");
static_assert(offsetof(UInputReflectorButton_C, ControllerInputStyle) == 0x000C48, "Member 'UInputReflectorButton_C::ControllerInputStyle' has a wrong offset!");
static_assert(offsetof(UInputReflectorButton_C, MouseKeyboardStyle) == 0x000C50, "Member 'UInputReflectorButton_C::MouseKeyboardStyle' has a wrong offset!");
static_assert(offsetof(UInputReflectorButton_C, ContentAlignment) == 0x000C58, "Member 'UInputReflectorButton_C::ContentAlignment' has a wrong offset!");
static_assert(offsetof(UInputReflectorButton_C, bMouseKeyboardStyleSet) == 0x000C59, "Member 'UInputReflectorButton_C::bMouseKeyboardStyleSet' has a wrong offset!");
static_assert(offsetof(UInputReflectorButton_C, OverrideButtonText) == 0x000C60, "Member 'UInputReflectorButton_C::OverrideButtonText' has a wrong offset!");

}

