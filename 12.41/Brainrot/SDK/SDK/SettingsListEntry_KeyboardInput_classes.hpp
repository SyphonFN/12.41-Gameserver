#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SettingsListEntry_KeyboardInput

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SettingsListEntry_KeyboardInput.SettingsListEntry_KeyboardInput_C
// 0x0010 (0x02C0 - 0x02B0)
class USettingsListEntry_KeyboardInput_C final : public UFortSettingsListEntrySetting_KeyboardInput
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       OnHover;                                           // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SettingsListEntry_KeyboardInput(int32 EntryPoint);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnUpdateKeyText(const class FText& PrimaryKeyText, const class FText& SecondaryKeyText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SettingsListEntry_KeyboardInput_C">();
	}
	static class USettingsListEntry_KeyboardInput_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USettingsListEntry_KeyboardInput_C>();
	}
};
static_assert(alignof(USettingsListEntry_KeyboardInput_C) == 0x000008, "Wrong alignment on USettingsListEntry_KeyboardInput_C");
static_assert(sizeof(USettingsListEntry_KeyboardInput_C) == 0x0002C0, "Wrong size on USettingsListEntry_KeyboardInput_C");
static_assert(offsetof(USettingsListEntry_KeyboardInput_C, UberGraphFrame) == 0x0002B0, "Member 'USettingsListEntry_KeyboardInput_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USettingsListEntry_KeyboardInput_C, OnHover) == 0x0002B8, "Member 'USettingsListEntry_KeyboardInput_C::OnHover' has a wrong offset!");

}
