#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaMOTDTeaserWidget

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaMOTDTeaserWidget.AthenaMOTDTeaserWidget_C
// 0x0070 (0x0500 - 0x0490)
class UAthenaMOTDTeaserWidget_C final : public UFortAthenaMOTDTeaserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0490(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       OnHovered;                                         // 0x0498(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                Border_Details;                                    // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_PipDisplay;                                 // 0x04A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                    InputActionWidget;                                 // 0x04B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                   RichTextBlock_NewsTitle;                           // 0x04B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USimpleCommonButton_C*                  SimpleCommonButton;                                // 0x04C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         PerItemDisplayTime;                                // 0x04C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NumItems;                                          // 0x04CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurDisplayedItemIndex;                             // 0x04D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7092[0x4];                                     // 0x04D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           ScrollToNextItemTimerHandle;                       // 0x04D8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          DesignTime;                                        // 0x04E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7093[0x7];                                     // 0x04E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               MIDFont;                                           // 0x04E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           DefaultColor;                                      // 0x04F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AthenaMOTDTeaserWidget(int32 EntryPoint);
	void OnClicked(class UCommonButton* Button);
	void OnNewsPopulated();
	void BndEvt__SimpleCommonButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void HandleEntryWidgetHoveredChanged(bool NewIsHovered);
	void BndEvt__FortAthenaMOTDTileListView_K2Node_ComponentBoundEvent_1_OnListEntryReleasedDynamic__DelegateSignature(class UUserWidget* Widget);
	void ScrollNextItem();
	void BndEvt__FortAthenaMOTDTileListView_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature(class UUserWidget* Widget);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void UpdateCurDisplayedNewsVisual();
	void SetDynamicColors(const struct FLinearColor& DarkColor, const struct FLinearColor& LightColor);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaMOTDTeaserWidget_C">();
	}
	static class UAthenaMOTDTeaserWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaMOTDTeaserWidget_C>();
	}
};
static_assert(alignof(UAthenaMOTDTeaserWidget_C) == 0x000008, "Wrong alignment on UAthenaMOTDTeaserWidget_C");
static_assert(sizeof(UAthenaMOTDTeaserWidget_C) == 0x000500, "Wrong size on UAthenaMOTDTeaserWidget_C");
static_assert(offsetof(UAthenaMOTDTeaserWidget_C, UberGraphFrame) == 0x000490, "Member 'UAthenaMOTDTeaserWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTeaserWidget_C, OnHovered) == 0x000498, "Member 'UAthenaMOTDTeaserWidget_C::OnHovered' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTeaserWidget_C, Border_Details) == 0x0004A0, "Member 'UAthenaMOTDTeaserWidget_C::Border_Details' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTeaserWidget_C, Border_PipDisplay) == 0x0004A8, "Member 'UAthenaMOTDTeaserWidget_C::Border_PipDisplay' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTeaserWidget_C, InputActionWidget) == 0x0004B0, "Member 'UAthenaMOTDTeaserWidget_C::InputActionWidget' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTeaserWidget_C, RichTextBlock_NewsTitle) == 0x0004B8, "Member 'UAthenaMOTDTeaserWidget_C::RichTextBlock_NewsTitle' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTeaserWidget_C, SimpleCommonButton) == 0x0004C0, "Member 'UAthenaMOTDTeaserWidget_C::SimpleCommonButton' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTeaserWidget_C, PerItemDisplayTime) == 0x0004C8, "Member 'UAthenaMOTDTeaserWidget_C::PerItemDisplayTime' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTeaserWidget_C, NumItems) == 0x0004CC, "Member 'UAthenaMOTDTeaserWidget_C::NumItems' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTeaserWidget_C, CurDisplayedItemIndex) == 0x0004D0, "Member 'UAthenaMOTDTeaserWidget_C::CurDisplayedItemIndex' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTeaserWidget_C, ScrollToNextItemTimerHandle) == 0x0004D8, "Member 'UAthenaMOTDTeaserWidget_C::ScrollToNextItemTimerHandle' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTeaserWidget_C, DesignTime) == 0x0004E0, "Member 'UAthenaMOTDTeaserWidget_C::DesignTime' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTeaserWidget_C, MIDFont) == 0x0004E8, "Member 'UAthenaMOTDTeaserWidget_C::MIDFont' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTeaserWidget_C, DefaultColor) == 0x0004F0, "Member 'UAthenaMOTDTeaserWidget_C::DefaultColor' has a wrong offset!");

}

