#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Wumba_Gadget_AnimBP

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass Wumba_Gadget_AnimBP.Wumba_Gadget_AnimBP_C
// 0x0580 (0x07F0 - 0x0270)
class UWumba_Gadget_AnimBP_C final : public UAnimInstance
{
public:
	uint8                                         Pad_513C[0x8];                                     // 0x0268(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0270(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0278(0x0030)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x02A8(0x0048)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x02F0(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x0318(0x0078)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x0390(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x03C0(0x0078)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x0438(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x0468(0x0078)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x04E0(0x0030)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_1;                      // 0x0510(0x00B0)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive;                       // 0x05C0(0x00C8)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0688(0x0078)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x0700(0x0030)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x0730(0x00B0)()
	float                                         PegBoard_Speed;                                    // 0x07E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bHasFinishedUpgrading;                             // 0x07E4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_Wumba_Gadget_AnimBP(int32 EntryPoint);
	void UpdateUpgradingVisuals(bool NewValue);
	void AnimGraph(struct FPoseLink* Param_AnimGraph);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Wumba_Gadget_AnimBP_C">();
	}
	static class UWumba_Gadget_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWumba_Gadget_AnimBP_C>();
	}
};
static_assert(alignof(UWumba_Gadget_AnimBP_C) == 0x000010, "Wrong alignment on UWumba_Gadget_AnimBP_C");
static_assert(sizeof(UWumba_Gadget_AnimBP_C) == 0x0007F0, "Wrong size on UWumba_Gadget_AnimBP_C");
static_assert(offsetof(UWumba_Gadget_AnimBP_C, UberGraphFrame) == 0x000270, "Member 'UWumba_Gadget_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWumba_Gadget_AnimBP_C, AnimGraphNode_Root) == 0x000278, "Member 'UWumba_Gadget_AnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UWumba_Gadget_AnimBP_C, AnimGraphNode_Slot) == 0x0002A8, "Member 'UWumba_Gadget_AnimBP_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UWumba_Gadget_AnimBP_C, AnimGraphNode_TransitionResult) == 0x0002F0, "Member 'UWumba_Gadget_AnimBP_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UWumba_Gadget_AnimBP_C, AnimGraphNode_SequencePlayer_3) == 0x000318, "Member 'UWumba_Gadget_AnimBP_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UWumba_Gadget_AnimBP_C, AnimGraphNode_StateResult_3) == 0x000390, "Member 'UWumba_Gadget_AnimBP_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UWumba_Gadget_AnimBP_C, AnimGraphNode_SequencePlayer_2) == 0x0003C0, "Member 'UWumba_Gadget_AnimBP_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UWumba_Gadget_AnimBP_C, AnimGraphNode_StateResult_2) == 0x000438, "Member 'UWumba_Gadget_AnimBP_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UWumba_Gadget_AnimBP_C, AnimGraphNode_SequencePlayer_1) == 0x000468, "Member 'UWumba_Gadget_AnimBP_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UWumba_Gadget_AnimBP_C, AnimGraphNode_StateResult_1) == 0x0004E0, "Member 'UWumba_Gadget_AnimBP_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UWumba_Gadget_AnimBP_C, AnimGraphNode_StateMachine_1) == 0x000510, "Member 'UWumba_Gadget_AnimBP_C::AnimGraphNode_StateMachine_1' has a wrong offset!");
static_assert(offsetof(UWumba_Gadget_AnimBP_C, AnimGraphNode_ApplyAdditive) == 0x0005C0, "Member 'UWumba_Gadget_AnimBP_C::AnimGraphNode_ApplyAdditive' has a wrong offset!");
static_assert(offsetof(UWumba_Gadget_AnimBP_C, AnimGraphNode_SequencePlayer) == 0x000688, "Member 'UWumba_Gadget_AnimBP_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UWumba_Gadget_AnimBP_C, AnimGraphNode_StateResult) == 0x000700, "Member 'UWumba_Gadget_AnimBP_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UWumba_Gadget_AnimBP_C, AnimGraphNode_StateMachine) == 0x000730, "Member 'UWumba_Gadget_AnimBP_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UWumba_Gadget_AnimBP_C, PegBoard_Speed) == 0x0007E0, "Member 'UWumba_Gadget_AnimBP_C::PegBoard_Speed' has a wrong offset!");
static_assert(offsetof(UWumba_Gadget_AnimBP_C, bHasFinishedUpgrading) == 0x0007E4, "Member 'UWumba_Gadget_AnimBP_C::bHasFinishedUpgrading' has a wrong offset!");

}

