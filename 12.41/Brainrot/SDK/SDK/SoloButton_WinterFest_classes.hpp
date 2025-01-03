#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SoloButton_WinterFest

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CommonUI_classes.hpp"
#include "CommonInput_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SoloButton_WinterFest.SoloButton_WinterFest_C
// 0x0078 (0x0BE8 - 0x0B70)
class USoloButton_WinterFest_C final : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B70(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Pressed;                                           // 0x0B78(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Hover;                                             // 0x0B80(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                Border_Container;                                  // 0x0B88(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ButtonBacking;                                     // 0x0B90(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              ScaleBox_0;                                        // 0x0B98(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Control;                                   // 0x0BA0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_ButtonAction;                                 // 0x0BA8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Button_Description;                                // 0x0BB0(0x0018)(Edit, BlueprintVisible)
	bool                                          FontSizeOveride;                                   // 0x0BC8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_714A[0x3];                                     // 0x0BC9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         FontSize;                                          // 0x0BCC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                Padding_Overide;                                   // 0x0BD0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          PaddingOveride;                                    // 0x0BE0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_SoloButton_WinterFest(int32 EntryPoint);
	void BP_OnClicked();
	void BP_OnUnhovered();
	void BP_OnHovered();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void HandleSize();
	void SetText(const class FText& Text);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SoloButton_WinterFest_C">();
	}
	static class USoloButton_WinterFest_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoloButton_WinterFest_C>();
	}
};
static_assert(alignof(USoloButton_WinterFest_C) == 0x000008, "Wrong alignment on USoloButton_WinterFest_C");
static_assert(sizeof(USoloButton_WinterFest_C) == 0x000BE8, "Wrong size on USoloButton_WinterFest_C");
static_assert(offsetof(USoloButton_WinterFest_C, UberGraphFrame) == 0x000B70, "Member 'USoloButton_WinterFest_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USoloButton_WinterFest_C, Pressed) == 0x000B78, "Member 'USoloButton_WinterFest_C::Pressed' has a wrong offset!");
static_assert(offsetof(USoloButton_WinterFest_C, Hover) == 0x000B80, "Member 'USoloButton_WinterFest_C::Hover' has a wrong offset!");
static_assert(offsetof(USoloButton_WinterFest_C, Border_Container) == 0x000B88, "Member 'USoloButton_WinterFest_C::Border_Container' has a wrong offset!");
static_assert(offsetof(USoloButton_WinterFest_C, ButtonBacking) == 0x000B90, "Member 'USoloButton_WinterFest_C::ButtonBacking' has a wrong offset!");
static_assert(offsetof(USoloButton_WinterFest_C, ScaleBox_0) == 0x000B98, "Member 'USoloButton_WinterFest_C::ScaleBox_0' has a wrong offset!");
static_assert(offsetof(USoloButton_WinterFest_C, SizeBox_Control) == 0x000BA0, "Member 'USoloButton_WinterFest_C::SizeBox_Control' has a wrong offset!");
static_assert(offsetof(USoloButton_WinterFest_C, Text_ButtonAction) == 0x000BA8, "Member 'USoloButton_WinterFest_C::Text_ButtonAction' has a wrong offset!");
static_assert(offsetof(USoloButton_WinterFest_C, Button_Description) == 0x000BB0, "Member 'USoloButton_WinterFest_C::Button_Description' has a wrong offset!");
static_assert(offsetof(USoloButton_WinterFest_C, FontSizeOveride) == 0x000BC8, "Member 'USoloButton_WinterFest_C::FontSizeOveride' has a wrong offset!");
static_assert(offsetof(USoloButton_WinterFest_C, FontSize) == 0x000BCC, "Member 'USoloButton_WinterFest_C::FontSize' has a wrong offset!");
static_assert(offsetof(USoloButton_WinterFest_C, Padding_Overide) == 0x000BD0, "Member 'USoloButton_WinterFest_C::Padding_Overide' has a wrong offset!");
static_assert(offsetof(USoloButton_WinterFest_C, PaddingOveride) == 0x000BE0, "Member 'USoloButton_WinterFest_C::PaddingOveride' has a wrong offset!");

}

