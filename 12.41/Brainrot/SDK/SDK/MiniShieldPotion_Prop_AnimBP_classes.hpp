#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MiniShieldPotion_Prop_AnimBP

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass MiniShieldPotion_Prop_AnimBP.MiniShieldPotion_Prop_AnimBP_C
// 0x00D0 (0x0340 - 0x0270)
class UMiniShieldPotion_Prop_AnimBP_C final : public UAnimInstance
{
public:
	uint8                                         Pad_595B[0x8];                                     // 0x0268(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0270(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0278(0x0030)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x02A8(0x0048)()
	struct FAnimNode_SequenceEvaluator            AnimGraphNode_SequenceEvaluator;                   // 0x02F0(0x0048)()

public:
	void ExecuteUbergraph_MiniShieldPotion_Prop_AnimBP(int32 EntryPoint);
	void AnimGraph(struct FPoseLink* Param_AnimGraph);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MiniShieldPotion_Prop_AnimBP_C">();
	}
	static class UMiniShieldPotion_Prop_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMiniShieldPotion_Prop_AnimBP_C>();
	}
};
static_assert(alignof(UMiniShieldPotion_Prop_AnimBP_C) == 0x000010, "Wrong alignment on UMiniShieldPotion_Prop_AnimBP_C");
static_assert(sizeof(UMiniShieldPotion_Prop_AnimBP_C) == 0x000340, "Wrong size on UMiniShieldPotion_Prop_AnimBP_C");
static_assert(offsetof(UMiniShieldPotion_Prop_AnimBP_C, UberGraphFrame) == 0x000270, "Member 'UMiniShieldPotion_Prop_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMiniShieldPotion_Prop_AnimBP_C, AnimGraphNode_Root) == 0x000278, "Member 'UMiniShieldPotion_Prop_AnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UMiniShieldPotion_Prop_AnimBP_C, AnimGraphNode_Slot) == 0x0002A8, "Member 'UMiniShieldPotion_Prop_AnimBP_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UMiniShieldPotion_Prop_AnimBP_C, AnimGraphNode_SequenceEvaluator) == 0x0002F0, "Member 'UMiniShieldPotion_Prop_AnimBP_C::AnimGraphNode_SequenceEvaluator' has a wrong offset!");

}
