#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DonutChallengeListEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DonutChallengeListEntry.DonutChallengeListEntry_C
// 0x0028 (0x0BB8 - 0x0B90)
class UDonutChallengeListEntry_C final : public UDonutChallengeEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B90(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Hovered;                                           // 0x0B98(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                Border_129;                                        // 0x0BA0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Locked;                                      // 0x0BA8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_ActiveQuest;                        // 0x0BB0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_DonutChallengeListEntry(int32 EntryPoint);
	void BPIsCompleted(bool InCompletion);
	void BP_OnUnhovered();
	void BP_OnHovered();
	void BPHasRewardTexture(bool InHasReward);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DonutChallengeListEntry_C">();
	}
	static class UDonutChallengeListEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDonutChallengeListEntry_C>();
	}
};
static_assert(alignof(UDonutChallengeListEntry_C) == 0x000008, "Wrong alignment on UDonutChallengeListEntry_C");
static_assert(sizeof(UDonutChallengeListEntry_C) == 0x000BB8, "Wrong size on UDonutChallengeListEntry_C");
static_assert(offsetof(UDonutChallengeListEntry_C, UberGraphFrame) == 0x000B90, "Member 'UDonutChallengeListEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDonutChallengeListEntry_C, Hovered) == 0x000B98, "Member 'UDonutChallengeListEntry_C::Hovered' has a wrong offset!");
static_assert(offsetof(UDonutChallengeListEntry_C, Border_129) == 0x000BA0, "Member 'UDonutChallengeListEntry_C::Border_129' has a wrong offset!");
static_assert(offsetof(UDonutChallengeListEntry_C, Image_Locked) == 0x000BA8, "Member 'UDonutChallengeListEntry_C::Image_Locked' has a wrong offset!");
static_assert(offsetof(UDonutChallengeListEntry_C, WidgetSwitcher_ActiveQuest) == 0x000BB0, "Member 'UDonutChallengeListEntry_C::WidgetSwitcher_ActiveQuest' has a wrong offset!");

}

