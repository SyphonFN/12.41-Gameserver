#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SpatialFaction_SwapButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SpatialFaction_SwapButton.SpatialFaction_SwapButton_C
// 0x0030 (0x0BA0 - 0x0B70)
class USpatialFaction_SwapButton_C final : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B70(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       SwitcherUP;                                        // 0x0B78(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Hover;                                             // 0x0B80(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_79;                                          // 0x0B88(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_150;                                         // 0x0B90(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_factionSwitcher;                             // 0x0B98(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SpatialFaction_SwapButton(int32 EntryPoint);
	void Go_Down();
	void Go_Up();
	void BP_OnUnhovered();
	void BP_OnHovered();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SpatialFaction_SwapButton_C">();
	}
	static class USpatialFaction_SwapButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpatialFaction_SwapButton_C>();
	}
};
static_assert(alignof(USpatialFaction_SwapButton_C) == 0x000008, "Wrong alignment on USpatialFaction_SwapButton_C");
static_assert(sizeof(USpatialFaction_SwapButton_C) == 0x000BA0, "Wrong size on USpatialFaction_SwapButton_C");
static_assert(offsetof(USpatialFaction_SwapButton_C, UberGraphFrame) == 0x000B70, "Member 'USpatialFaction_SwapButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USpatialFaction_SwapButton_C, SwitcherUP) == 0x000B78, "Member 'USpatialFaction_SwapButton_C::SwitcherUP' has a wrong offset!");
static_assert(offsetof(USpatialFaction_SwapButton_C, Hover) == 0x000B80, "Member 'USpatialFaction_SwapButton_C::Hover' has a wrong offset!");
static_assert(offsetof(USpatialFaction_SwapButton_C, Image_79) == 0x000B88, "Member 'USpatialFaction_SwapButton_C::Image_79' has a wrong offset!");
static_assert(offsetof(USpatialFaction_SwapButton_C, Image_150) == 0x000B90, "Member 'USpatialFaction_SwapButton_C::Image_150' has a wrong offset!");
static_assert(offsetof(USpatialFaction_SwapButton_C, Image_factionSwitcher) == 0x000B98, "Member 'USpatialFaction_SwapButton_C::Image_factionSwitcher' has a wrong offset!");

}
