#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_StormTrackerSniper

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass BP_StormTrackerSniper.BP_StormTrackerSniper_C
// 0x0100 (0x0370 - 0x0270)
class UBP_StormTrackerSniper_C final : public UAnimInstance
{
public:
	uint8                                         Pad_3D93[0x8];                                     // 0x0268(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0270(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0278(0x0030)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x02A8(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x02F0(0x0078)()

public:
	void ExecuteUbergraph_BP_StormTrackerSniper(int32 EntryPoint);
	void AnimGraph(struct FPoseLink* Param_AnimGraph);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_StormTrackerSniper_C">();
	}
	static class UBP_StormTrackerSniper_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_StormTrackerSniper_C>();
	}
};
static_assert(alignof(UBP_StormTrackerSniper_C) == 0x000010, "Wrong alignment on UBP_StormTrackerSniper_C");
static_assert(sizeof(UBP_StormTrackerSniper_C) == 0x000370, "Wrong size on UBP_StormTrackerSniper_C");
static_assert(offsetof(UBP_StormTrackerSniper_C, UberGraphFrame) == 0x000270, "Member 'UBP_StormTrackerSniper_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_StormTrackerSniper_C, AnimGraphNode_Root) == 0x000278, "Member 'UBP_StormTrackerSniper_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UBP_StormTrackerSniper_C, AnimGraphNode_Slot) == 0x0002A8, "Member 'UBP_StormTrackerSniper_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UBP_StormTrackerSniper_C, AnimGraphNode_SequencePlayer) == 0x0002F0, "Member 'UBP_StormTrackerSniper_C::AnimGraphNode_SequencePlayer' has a wrong offset!");

}

