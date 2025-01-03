#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FIlteredTextEntryWidget

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "Slate_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass FIlteredTextEntryWidget.FilteredTextEntryWidget_C
// 0x08D0 (0x0BB0 - 0x02E0)
class UFilteredTextEntryWidget_C final : public UFortEditableFilteredCountedTextBox
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Error;                                             // 0x02E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                       CommonTextBlock_Prompt;                            // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       ErrorText;                                         // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_Info;                                // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_119;                                         // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Selected;                                    // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                    InputActionWidget;                                 // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_InputAction;                               // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               WarningImage;                                      // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bUseOverrideStyle;                                 // 0x0330(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_6E66[0x7];                                     // 0x0331(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEditableTextBoxStyle                  OverrideStyle;                                     // 0x0338(0x07F0)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                          bHideValidationInfo;                               // 0x0B28(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	ETextJustify                                  Justification;                                     // 0x0B29(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          ShowTextPrompt;                                    // 0x0B2A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_6E67[0x5];                                     // 0x0B2B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 PromptTextStyle;                                   // 0x0B30(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                   PromptText;                                        // 0x0B38(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_             OnTextChanged;                                     // 0x0B50(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bUseHintText;                                      // 0x0B60(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E68[0x7];                                     // 0x0B61(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   HintText;                                          // 0x0B68(0x0018)(Edit, BlueprintVisible)
	FMulticastInlineDelegateProperty_             OnSanitizedTextReady;                              // 0x0B80(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnTextCommitByEnter;                               // 0x0B90(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          SanitizedTextReady;                                // 0x0BA0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnTextChanged__DelegateSignature(const class FText& Text);
	void OnSanitizedTextReady__DelegateSignature(const class FText& Text);
	void OnTextCommitByEnter__DelegateSignature();
	void ExecuteUbergraph_FilteredTextEntryWidget(int32 EntryPoint);
	void BndEvt__EditText_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void BndEvt__EditText_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
	void PreConstruct(bool IsDesignTime);
	void OnDirtyTextAttempted(bool bIsBadText, bool bAdditionalValidationFailed);
	void Construct();
	void UpdateConfiguration(bool bOverrideStyle, bool bHideValidation, ETextJustify TextJustification, bool bShouldShowTextPrompt, const class FText& PromptDisplayText, class UClass* TextStyle);
	void SetTextFocus();
	void HandleShowPrompt(const class FText& CurrentText);
	void GetCurrentText(class FText* Text);
	void GetErrorText(bool Additional_Validator_Failed, class FText* Appropriate_Text);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FilteredTextEntryWidget_C">();
	}
	static class UFilteredTextEntryWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFilteredTextEntryWidget_C>();
	}
};
static_assert(alignof(UFilteredTextEntryWidget_C) == 0x000010, "Wrong alignment on UFilteredTextEntryWidget_C");
static_assert(sizeof(UFilteredTextEntryWidget_C) == 0x000BB0, "Wrong size on UFilteredTextEntryWidget_C");
static_assert(offsetof(UFilteredTextEntryWidget_C, UberGraphFrame) == 0x0002E0, "Member 'UFilteredTextEntryWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFilteredTextEntryWidget_C, Error) == 0x0002E8, "Member 'UFilteredTextEntryWidget_C::Error' has a wrong offset!");
static_assert(offsetof(UFilteredTextEntryWidget_C, CommonTextBlock_Prompt) == 0x0002F0, "Member 'UFilteredTextEntryWidget_C::CommonTextBlock_Prompt' has a wrong offset!");
static_assert(offsetof(UFilteredTextEntryWidget_C, ErrorText) == 0x0002F8, "Member 'UFilteredTextEntryWidget_C::ErrorText' has a wrong offset!");
static_assert(offsetof(UFilteredTextEntryWidget_C, HorizontalBox_Info) == 0x000300, "Member 'UFilteredTextEntryWidget_C::HorizontalBox_Info' has a wrong offset!");
static_assert(offsetof(UFilteredTextEntryWidget_C, Image_119) == 0x000308, "Member 'UFilteredTextEntryWidget_C::Image_119' has a wrong offset!");
static_assert(offsetof(UFilteredTextEntryWidget_C, Image_Selected) == 0x000310, "Member 'UFilteredTextEntryWidget_C::Image_Selected' has a wrong offset!");
static_assert(offsetof(UFilteredTextEntryWidget_C, InputActionWidget) == 0x000318, "Member 'UFilteredTextEntryWidget_C::InputActionWidget' has a wrong offset!");
static_assert(offsetof(UFilteredTextEntryWidget_C, Overlay_InputAction) == 0x000320, "Member 'UFilteredTextEntryWidget_C::Overlay_InputAction' has a wrong offset!");
static_assert(offsetof(UFilteredTextEntryWidget_C, WarningImage) == 0x000328, "Member 'UFilteredTextEntryWidget_C::WarningImage' has a wrong offset!");
static_assert(offsetof(UFilteredTextEntryWidget_C, bUseOverrideStyle) == 0x000330, "Member 'UFilteredTextEntryWidget_C::bUseOverrideStyle' has a wrong offset!");
static_assert(offsetof(UFilteredTextEntryWidget_C, OverrideStyle) == 0x000338, "Member 'UFilteredTextEntryWidget_C::OverrideStyle' has a wrong offset!");
static_assert(offsetof(UFilteredTextEntryWidget_C, bHideValidationInfo) == 0x000B28, "Member 'UFilteredTextEntryWidget_C::bHideValidationInfo' has a wrong offset!");
static_assert(offsetof(UFilteredTextEntryWidget_C, Justification) == 0x000B29, "Member 'UFilteredTextEntryWidget_C::Justification' has a wrong offset!");
static_assert(offsetof(UFilteredTextEntryWidget_C, ShowTextPrompt) == 0x000B2A, "Member 'UFilteredTextEntryWidget_C::ShowTextPrompt' has a wrong offset!");
static_assert(offsetof(UFilteredTextEntryWidget_C, PromptTextStyle) == 0x000B30, "Member 'UFilteredTextEntryWidget_C::PromptTextStyle' has a wrong offset!");
static_assert(offsetof(UFilteredTextEntryWidget_C, PromptText) == 0x000B38, "Member 'UFilteredTextEntryWidget_C::PromptText' has a wrong offset!");
static_assert(offsetof(UFilteredTextEntryWidget_C, OnTextChanged) == 0x000B50, "Member 'UFilteredTextEntryWidget_C::OnTextChanged' has a wrong offset!");
static_assert(offsetof(UFilteredTextEntryWidget_C, bUseHintText) == 0x000B60, "Member 'UFilteredTextEntryWidget_C::bUseHintText' has a wrong offset!");
static_assert(offsetof(UFilteredTextEntryWidget_C, HintText) == 0x000B68, "Member 'UFilteredTextEntryWidget_C::HintText' has a wrong offset!");
static_assert(offsetof(UFilteredTextEntryWidget_C, OnSanitizedTextReady) == 0x000B80, "Member 'UFilteredTextEntryWidget_C::OnSanitizedTextReady' has a wrong offset!");
static_assert(offsetof(UFilteredTextEntryWidget_C, OnTextCommitByEnter) == 0x000B90, "Member 'UFilteredTextEntryWidget_C::OnTextCommitByEnter' has a wrong offset!");
static_assert(offsetof(UFilteredTextEntryWidget_C, SanitizedTextReady) == 0x000BA0, "Member 'UFilteredTextEntryWidget_C::SanitizedTextReady' has a wrong offset!");

}

