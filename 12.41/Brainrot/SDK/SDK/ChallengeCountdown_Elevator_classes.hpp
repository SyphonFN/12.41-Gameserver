#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChallengeCountdown_Elevator

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ChallengeCountdown_Elevator.ChallengeCountdown_Elevator_C
// 0x0040 (0x0390 - 0x0350)
class UChallengeCountdown_Elevator_C final : public UAthenaChallengeCountdownDisplay
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Clock;                                             // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         PaddingHB;                                         // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Slashes;                                           // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_TimeRemainingTag;                             // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              TextScale;                                         // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               TransformOvr;                                      // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsLargeDisplay;                                    // 0x0388(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bIsMinimalDisplay;                                 // 0x0389(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_ChallengeCountdown_Elevator(int32 EntryPoint);
	void OnChallengeSet(const struct FTimerDisplayData& DisplayStyle);
	void Construct();
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ChallengeCountdown_Elevator_C">();
	}
	static class UChallengeCountdown_Elevator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChallengeCountdown_Elevator_C>();
	}
};
static_assert(alignof(UChallengeCountdown_Elevator_C) == 0x000008, "Wrong alignment on UChallengeCountdown_Elevator_C");
static_assert(sizeof(UChallengeCountdown_Elevator_C) == 0x000390, "Wrong size on UChallengeCountdown_Elevator_C");
static_assert(offsetof(UChallengeCountdown_Elevator_C, UberGraphFrame) == 0x000350, "Member 'UChallengeCountdown_Elevator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UChallengeCountdown_Elevator_C, Clock) == 0x000358, "Member 'UChallengeCountdown_Elevator_C::Clock' has a wrong offset!");
static_assert(offsetof(UChallengeCountdown_Elevator_C, PaddingHB) == 0x000360, "Member 'UChallengeCountdown_Elevator_C::PaddingHB' has a wrong offset!");
static_assert(offsetof(UChallengeCountdown_Elevator_C, Slashes) == 0x000368, "Member 'UChallengeCountdown_Elevator_C::Slashes' has a wrong offset!");
static_assert(offsetof(UChallengeCountdown_Elevator_C, Text_TimeRemainingTag) == 0x000370, "Member 'UChallengeCountdown_Elevator_C::Text_TimeRemainingTag' has a wrong offset!");
static_assert(offsetof(UChallengeCountdown_Elevator_C, TextScale) == 0x000378, "Member 'UChallengeCountdown_Elevator_C::TextScale' has a wrong offset!");
static_assert(offsetof(UChallengeCountdown_Elevator_C, TransformOvr) == 0x000380, "Member 'UChallengeCountdown_Elevator_C::TransformOvr' has a wrong offset!");
static_assert(offsetof(UChallengeCountdown_Elevator_C, IsLargeDisplay) == 0x000388, "Member 'UChallengeCountdown_Elevator_C::IsLargeDisplay' has a wrong offset!");
static_assert(offsetof(UChallengeCountdown_Elevator_C, bIsMinimalDisplay) == 0x000389, "Member 'UChallengeCountdown_Elevator_C::bIsMinimalDisplay' has a wrong offset!");

}
