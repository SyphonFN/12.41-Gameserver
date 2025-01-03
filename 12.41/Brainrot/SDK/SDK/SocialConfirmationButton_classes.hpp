#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SocialConfirmationButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SocialConfirmationButton.SocialConfirmationButton_C
// 0x0050 (0x0BC0 - 0x0B70)
class USocialConfirmationButton_C final : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B70(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       OnHover;                                           // 0x0B78(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                Border_InteractionIndicator;                       // 0x0B80(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 InteractionIcon;                                   // 0x0B88(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuAnchor*                            MenuAnchor_Actions;                                // 0x0B90(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_InteractionName;                              // 0x0B98(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bIsAccept;                                         // 0x0BA0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_595C[0x7];                                     // 0x0BA1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   DisplayText;                                       // 0x0BA8(0x0018)(Edit, BlueprintVisible)

public:
	void ExecuteUbergraph_SocialConfirmationButton(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void BP_OnUnhovered();
	void BP_OnHovered();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SocialConfirmationButton_C">();
	}
	static class USocialConfirmationButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialConfirmationButton_C>();
	}
};
static_assert(alignof(USocialConfirmationButton_C) == 0x000008, "Wrong alignment on USocialConfirmationButton_C");
static_assert(sizeof(USocialConfirmationButton_C) == 0x000BC0, "Wrong size on USocialConfirmationButton_C");
static_assert(offsetof(USocialConfirmationButton_C, UberGraphFrame) == 0x000B70, "Member 'USocialConfirmationButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USocialConfirmationButton_C, OnHover) == 0x000B78, "Member 'USocialConfirmationButton_C::OnHover' has a wrong offset!");
static_assert(offsetof(USocialConfirmationButton_C, Border_InteractionIndicator) == 0x000B80, "Member 'USocialConfirmationButton_C::Border_InteractionIndicator' has a wrong offset!");
static_assert(offsetof(USocialConfirmationButton_C, InteractionIcon) == 0x000B88, "Member 'USocialConfirmationButton_C::InteractionIcon' has a wrong offset!");
static_assert(offsetof(USocialConfirmationButton_C, MenuAnchor_Actions) == 0x000B90, "Member 'USocialConfirmationButton_C::MenuAnchor_Actions' has a wrong offset!");
static_assert(offsetof(USocialConfirmationButton_C, Text_InteractionName) == 0x000B98, "Member 'USocialConfirmationButton_C::Text_InteractionName' has a wrong offset!");
static_assert(offsetof(USocialConfirmationButton_C, bIsAccept) == 0x000BA0, "Member 'USocialConfirmationButton_C::bIsAccept' has a wrong offset!");
static_assert(offsetof(USocialConfirmationButton_C, DisplayText) == 0x000BA8, "Member 'USocialConfirmationButton_C::DisplayText' has a wrong offset!");

}

