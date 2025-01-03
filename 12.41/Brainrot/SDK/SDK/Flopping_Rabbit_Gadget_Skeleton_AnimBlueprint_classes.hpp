#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint.Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C
// 0x0D00 (0x0F70 - 0x0270)
class UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C final : public UAnimInstance
{
public:
	uint8                                         Pad_5D4F[0x8];                                     // 0x0268(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0270(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_LinkedInputPose              AnimGraphNode_SubInput;                            // 0x0278(0x0070)()
	uint8                                         Pad_5D50[0x8];                                     // 0x02E8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_RigidBody                    AnimGraphNode_RigidBody;                           // 0x02F0(0x05A0)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x0890(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x08B0(0x0020)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x08D0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x08F8(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x0920(0x0078)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x0998(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x09C8(0x0078)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x0A40(0x0030)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x0A70(0x00B0)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x0B20(0x0108)()
	uint8                                         Pad_5D51[0x8];                                     // 0x0C28(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_Trail                        AnimGraphNode_Trail;                               // 0x0C30(0x0260)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0E90(0x0048)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0ED8(0x0030)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x0F08(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0F28(0x0020)()
	struct FVector                                GripOffset;                                        // 0x0F48(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OneHandGrip;                                       // 0x0F54(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D52[0x3];                                     // 0x0F55(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Trail_Alpha;                                       // 0x0F58(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Trail_RelaxScale;                                  // 0x0F5C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               GripRotation;                                      // 0x0F60(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint(int32 EntryPoint);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* Param_AnimGraph);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C">();
	}
	static class UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C>();
	}
};
static_assert(alignof(UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C) == 0x000010, "Wrong alignment on UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C");
static_assert(sizeof(UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C) == 0x000F70, "Wrong size on UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C");
static_assert(offsetof(UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C, UberGraphFrame) == 0x000270, "Member 'UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C, AnimGraphNode_SubInput) == 0x000278, "Member 'UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C::AnimGraphNode_SubInput' has a wrong offset!");
static_assert(offsetof(UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C, AnimGraphNode_RigidBody) == 0x0002F0, "Member 'UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C::AnimGraphNode_RigidBody' has a wrong offset!");
static_assert(offsetof(UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C, AnimGraphNode_LocalToComponentSpace_1) == 0x000890, "Member 'UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C::AnimGraphNode_LocalToComponentSpace_1' has a wrong offset!");
static_assert(offsetof(UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C, AnimGraphNode_ComponentToLocalSpace_1) == 0x0008B0, "Member 'UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C::AnimGraphNode_ComponentToLocalSpace_1' has a wrong offset!");
static_assert(offsetof(UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C, AnimGraphNode_TransitionResult_1) == 0x0008D0, "Member 'UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C, AnimGraphNode_TransitionResult) == 0x0008F8, "Member 'UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C, AnimGraphNode_SequencePlayer_1) == 0x000920, "Member 'UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C, AnimGraphNode_StateResult_1) == 0x000998, "Member 'UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C, AnimGraphNode_SequencePlayer) == 0x0009C8, "Member 'UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C, AnimGraphNode_StateResult) == 0x000A40, "Member 'UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C, AnimGraphNode_StateMachine) == 0x000A70, "Member 'UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C, AnimGraphNode_ModifyBone) == 0x000B20, "Member 'UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C, AnimGraphNode_Trail) == 0x000C30, "Member 'UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C::AnimGraphNode_Trail' has a wrong offset!");
static_assert(offsetof(UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C, AnimGraphNode_Slot) == 0x000E90, "Member 'UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C, AnimGraphNode_Root) == 0x000ED8, "Member 'UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C, AnimGraphNode_LocalToComponentSpace) == 0x000F08, "Member 'UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C, AnimGraphNode_ComponentToLocalSpace) == 0x000F28, "Member 'UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C, GripOffset) == 0x000F48, "Member 'UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C::GripOffset' has a wrong offset!");
static_assert(offsetof(UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C, OneHandGrip) == 0x000F54, "Member 'UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C::OneHandGrip' has a wrong offset!");
static_assert(offsetof(UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C, Trail_Alpha) == 0x000F58, "Member 'UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C::Trail_Alpha' has a wrong offset!");
static_assert(offsetof(UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C, Trail_RelaxScale) == 0x000F5C, "Member 'UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C::Trail_RelaxScale' has a wrong offset!");
static_assert(offsetof(UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C, GripRotation) == 0x000F60, "Member 'UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C::GripRotation' has a wrong offset!");

}

