#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MissionProgressDisplay

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MissionProgressDisplay.MissionProgressDisplay_C
// 0x0050 (0x0290 - 0x0240)
class UMissionProgressDisplay_C final : public UAthenaChallengeProgressBar
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                       CommonText_Progress_Prestige;                      // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PrestigeBorder;                                    // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               ProgressBarSize;                                   // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              ScaleBoxTextScale;                                 // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                SpacerLeft;                                        // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                SpacerRight;                                       // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        TextStylingSwitcher;                               // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               VerticalHeightSB;                                  // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsLargeDisplay;                                    // 0x0288(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_MissionProgressDisplay(int32 EntryPoint);
	void SetPercentValueForMaterialNumber(int32 PercentValue);
	void PreConstruct(bool IsDesignTime);
	void StyleAsPrestige();
	void StyleAsNormal();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MissionProgressDisplay_C">();
	}
	static class UMissionProgressDisplay_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMissionProgressDisplay_C>();
	}
};
static_assert(alignof(UMissionProgressDisplay_C) == 0x000008, "Wrong alignment on UMissionProgressDisplay_C");
static_assert(sizeof(UMissionProgressDisplay_C) == 0x000290, "Wrong size on UMissionProgressDisplay_C");
static_assert(offsetof(UMissionProgressDisplay_C, UberGraphFrame) == 0x000240, "Member 'UMissionProgressDisplay_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMissionProgressDisplay_C, CommonText_Progress_Prestige) == 0x000248, "Member 'UMissionProgressDisplay_C::CommonText_Progress_Prestige' has a wrong offset!");
static_assert(offsetof(UMissionProgressDisplay_C, PrestigeBorder) == 0x000250, "Member 'UMissionProgressDisplay_C::PrestigeBorder' has a wrong offset!");
static_assert(offsetof(UMissionProgressDisplay_C, ProgressBarSize) == 0x000258, "Member 'UMissionProgressDisplay_C::ProgressBarSize' has a wrong offset!");
static_assert(offsetof(UMissionProgressDisplay_C, ScaleBoxTextScale) == 0x000260, "Member 'UMissionProgressDisplay_C::ScaleBoxTextScale' has a wrong offset!");
static_assert(offsetof(UMissionProgressDisplay_C, SpacerLeft) == 0x000268, "Member 'UMissionProgressDisplay_C::SpacerLeft' has a wrong offset!");
static_assert(offsetof(UMissionProgressDisplay_C, SpacerRight) == 0x000270, "Member 'UMissionProgressDisplay_C::SpacerRight' has a wrong offset!");
static_assert(offsetof(UMissionProgressDisplay_C, TextStylingSwitcher) == 0x000278, "Member 'UMissionProgressDisplay_C::TextStylingSwitcher' has a wrong offset!");
static_assert(offsetof(UMissionProgressDisplay_C, VerticalHeightSB) == 0x000280, "Member 'UMissionProgressDisplay_C::VerticalHeightSB' has a wrong offset!");
static_assert(offsetof(UMissionProgressDisplay_C, IsLargeDisplay) == 0x000288, "Member 'UMissionProgressDisplay_C::IsLargeDisplay' has a wrong offset!");

}

