#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChallengeDetailsImageGrid

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ChallengeDetailsImageGrid.ChallengeDetailsImageGrid_C
// 0x0020 (0x0328 - 0x0308)
class UChallengeDetailsImageGrid_C final : public UAthenaChallengeDetailImageGrid
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0308(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        RolloutLoop;                                       // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RolloutStartTime;                                  // 0x0318(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RolloutDuration;                                   // 0x031C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsRevealRollout;                                   // 0x0320(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_ChallengeDetailsImageGrid(int32 EntryPoint);
	void Rollout_Sound_Failsafe();
	void OnOwnedToCompleteTransitions(int32 Count, float TimeOffset, float AdditionalTime);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	void Stop_Rollout_Tick();
	void Start_Rollout_Tick(float Time);
	void Rollout_Tick();
	void OnLockedToOwnedTransitions(int32 Count, float TimeOffset, float AdditionalTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ChallengeDetailsImageGrid_C">();
	}
	static class UChallengeDetailsImageGrid_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChallengeDetailsImageGrid_C>();
	}
};
static_assert(alignof(UChallengeDetailsImageGrid_C) == 0x000008, "Wrong alignment on UChallengeDetailsImageGrid_C");
static_assert(sizeof(UChallengeDetailsImageGrid_C) == 0x000328, "Wrong size on UChallengeDetailsImageGrid_C");
static_assert(offsetof(UChallengeDetailsImageGrid_C, UberGraphFrame) == 0x000308, "Member 'UChallengeDetailsImageGrid_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UChallengeDetailsImageGrid_C, RolloutLoop) == 0x000310, "Member 'UChallengeDetailsImageGrid_C::RolloutLoop' has a wrong offset!");
static_assert(offsetof(UChallengeDetailsImageGrid_C, RolloutStartTime) == 0x000318, "Member 'UChallengeDetailsImageGrid_C::RolloutStartTime' has a wrong offset!");
static_assert(offsetof(UChallengeDetailsImageGrid_C, RolloutDuration) == 0x00031C, "Member 'UChallengeDetailsImageGrid_C::RolloutDuration' has a wrong offset!");
static_assert(offsetof(UChallengeDetailsImageGrid_C, IsRevealRollout) == 0x000320, "Member 'UChallengeDetailsImageGrid_C::IsRevealRollout' has a wrong offset!");

}

