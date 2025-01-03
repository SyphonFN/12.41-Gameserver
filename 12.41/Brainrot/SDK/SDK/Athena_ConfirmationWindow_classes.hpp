#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Athena_ConfirmationWindow

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Athena_ConfirmationWindow.Athena_ConfirmationWindow_C
// 0x0048 (0x0370 - 0x0328)
class UAthena_ConfirmationWindow_C final : public UAthenaConfirmationWindow
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0328(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Intro;                                             // 0x0330(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_66;                                          // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Separator_Down;                              // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Separator_Up;                                // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_145;                                      // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox_Description;                             // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                           ButtonIconColor;                                   // 0x0360(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Athena_ConfirmationWindow(int32 EntryPoint);
	void OnSetButtonText(class UCommonButton* Button, const class FText& Text);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Athena_ConfirmationWindow_C">();
	}
	static class UAthena_ConfirmationWindow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthena_ConfirmationWindow_C>();
	}
};
static_assert(alignof(UAthena_ConfirmationWindow_C) == 0x000008, "Wrong alignment on UAthena_ConfirmationWindow_C");
static_assert(sizeof(UAthena_ConfirmationWindow_C) == 0x000370, "Wrong size on UAthena_ConfirmationWindow_C");
static_assert(offsetof(UAthena_ConfirmationWindow_C, UberGraphFrame) == 0x000328, "Member 'UAthena_ConfirmationWindow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthena_ConfirmationWindow_C, Intro) == 0x000330, "Member 'UAthena_ConfirmationWindow_C::Intro' has a wrong offset!");
static_assert(offsetof(UAthena_ConfirmationWindow_C, Image_66) == 0x000338, "Member 'UAthena_ConfirmationWindow_C::Image_66' has a wrong offset!");
static_assert(offsetof(UAthena_ConfirmationWindow_C, Image_Separator_Down) == 0x000340, "Member 'UAthena_ConfirmationWindow_C::Image_Separator_Down' has a wrong offset!");
static_assert(offsetof(UAthena_ConfirmationWindow_C, Image_Separator_Up) == 0x000348, "Member 'UAthena_ConfirmationWindow_C::Image_Separator_Up' has a wrong offset!");
static_assert(offsetof(UAthena_ConfirmationWindow_C, SafeZone_145) == 0x000350, "Member 'UAthena_ConfirmationWindow_C::SafeZone_145' has a wrong offset!");
static_assert(offsetof(UAthena_ConfirmationWindow_C, ScrollBox_Description) == 0x000358, "Member 'UAthena_ConfirmationWindow_C::ScrollBox_Description' has a wrong offset!");
static_assert(offsetof(UAthena_ConfirmationWindow_C, ButtonIconColor) == 0x000360, "Member 'UAthena_ConfirmationWindow_C::ButtonIconColor' has a wrong offset!");

}

