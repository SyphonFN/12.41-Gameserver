#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: M_MED_Donut_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass M_MED_Donut_AnimBP.M_MED_Donut_AnimBP_C
// 0x3000 (0x3430 - 0x0430)
class UM_MED_Donut_AnimBP_C final : public UCustomCharacterPartAnimInstance_HenchmanBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0430(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_4;                        // 0x0438(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_3;                        // 0x0540(0x0108)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0648(0x0020)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x0668(0x0020)()
	struct FAnimNode_Constraint                   AnimGraphNode_Constraint_10;                       // 0x0688(0x0108)()
	struct FAnimNode_Constraint                   AnimGraphNode_Constraint_9;                        // 0x0790(0x0108)()
	struct FAnimNode_Constraint                   AnimGraphNode_Constraint_8;                        // 0x0898(0x0108)()
	struct FAnimNode_Constraint                   AnimGraphNode_Constraint_7;                        // 0x09A0(0x0108)()
	struct FAnimNode_Constraint                   AnimGraphNode_Constraint_6;                        // 0x0AA8(0x0108)()
	struct FAnimNode_Constraint                   AnimGraphNode_Constraint_5;                        // 0x0BB0(0x0108)()
	struct FAnimNode_Constraint                   AnimGraphNode_Constraint_4;                        // 0x0CB8(0x0108)()
	struct FAnimNode_Constraint                   AnimGraphNode_Constraint_3;                        // 0x0DC0(0x0108)()
	struct FAnimNode_Constraint                   AnimGraphNode_Constraint_2;                        // 0x0EC8(0x0108)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_6;                      // 0x0FD0(0x0440)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_5;                      // 0x1410(0x0440)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_4;                      // 0x1850(0x0440)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_3;                      // 0x1C90(0x0440)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_2;                      // 0x20D0(0x0440)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_1;                      // 0x2510(0x0440)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics;                        // 0x2950(0x0440)()
	struct FAnimNode_Constraint                   AnimGraphNode_Constraint_1;                        // 0x2D90(0x0108)()
	struct FAnimNode_Constraint                   AnimGraphNode_Constraint;                          // 0x2E98(0x0108)()
	struct FAnimNode_CopyPoseFromMesh             AnimGraphNode_CopyPoseFromMesh;                    // 0x2FA0(0x0140)(ContainsInstancedReference)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x30E0(0x0030)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_2;                        // 0x3110(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;                        // 0x3218(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x3320(0x0108)()
	float                                         CrouchAlpha;                                       // 0x3428(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void OnBeginCrouching();
	void OnEndCrouching();
	void ExecuteUbergraph_M_MED_Donut_AnimBP(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"M_MED_Donut_AnimBP_C">();
	}
	static class UM_MED_Donut_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UM_MED_Donut_AnimBP_C>();
	}
};
static_assert(alignof(UM_MED_Donut_AnimBP_C) == 0x000010, "Wrong alignment on UM_MED_Donut_AnimBP_C");
static_assert(sizeof(UM_MED_Donut_AnimBP_C) == 0x003430, "Wrong size on UM_MED_Donut_AnimBP_C");
static_assert(offsetof(UM_MED_Donut_AnimBP_C, UberGraphFrame) == 0x000430, "Member 'UM_MED_Donut_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UM_MED_Donut_AnimBP_C, AnimGraphNode_ModifyBone_4) == 0x000438, "Member 'UM_MED_Donut_AnimBP_C::AnimGraphNode_ModifyBone_4' has a wrong offset!");
static_assert(offsetof(UM_MED_Donut_AnimBP_C, AnimGraphNode_ModifyBone_3) == 0x000540, "Member 'UM_MED_Donut_AnimBP_C::AnimGraphNode_ModifyBone_3' has a wrong offset!");
static_assert(offsetof(UM_MED_Donut_AnimBP_C, AnimGraphNode_ComponentToLocalSpace) == 0x000648, "Member 'UM_MED_Donut_AnimBP_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UM_MED_Donut_AnimBP_C, AnimGraphNode_LocalToComponentSpace) == 0x000668, "Member 'UM_MED_Donut_AnimBP_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UM_MED_Donut_AnimBP_C, AnimGraphNode_Constraint_10) == 0x000688, "Member 'UM_MED_Donut_AnimBP_C::AnimGraphNode_Constraint_10' has a wrong offset!");
static_assert(offsetof(UM_MED_Donut_AnimBP_C, AnimGraphNode_Constraint_9) == 0x000790, "Member 'UM_MED_Donut_AnimBP_C::AnimGraphNode_Constraint_9' has a wrong offset!");
static_assert(offsetof(UM_MED_Donut_AnimBP_C, AnimGraphNode_Constraint_8) == 0x000898, "Member 'UM_MED_Donut_AnimBP_C::AnimGraphNode_Constraint_8' has a wrong offset!");
static_assert(offsetof(UM_MED_Donut_AnimBP_C, AnimGraphNode_Constraint_7) == 0x0009A0, "Member 'UM_MED_Donut_AnimBP_C::AnimGraphNode_Constraint_7' has a wrong offset!");
static_assert(offsetof(UM_MED_Donut_AnimBP_C, AnimGraphNode_Constraint_6) == 0x000AA8, "Member 'UM_MED_Donut_AnimBP_C::AnimGraphNode_Constraint_6' has a wrong offset!");
static_assert(offsetof(UM_MED_Donut_AnimBP_C, AnimGraphNode_Constraint_5) == 0x000BB0, "Member 'UM_MED_Donut_AnimBP_C::AnimGraphNode_Constraint_5' has a wrong offset!");
static_assert(offsetof(UM_MED_Donut_AnimBP_C, AnimGraphNode_Constraint_4) == 0x000CB8, "Member 'UM_MED_Donut_AnimBP_C::AnimGraphNode_Constraint_4' has a wrong offset!");
static_assert(offsetof(UM_MED_Donut_AnimBP_C, AnimGraphNode_Constraint_3) == 0x000DC0, "Member 'UM_MED_Donut_AnimBP_C::AnimGraphNode_Constraint_3' has a wrong offset!");
static_assert(offsetof(UM_MED_Donut_AnimBP_C, AnimGraphNode_Constraint_2) == 0x000EC8, "Member 'UM_MED_Donut_AnimBP_C::AnimGraphNode_Constraint_2' has a wrong offset!");
static_assert(offsetof(UM_MED_Donut_AnimBP_C, AnimGraphNode_AnimDynamics_6) == 0x000FD0, "Member 'UM_MED_Donut_AnimBP_C::AnimGraphNode_AnimDynamics_6' has a wrong offset!");
static_assert(offsetof(UM_MED_Donut_AnimBP_C, AnimGraphNode_AnimDynamics_5) == 0x001410, "Member 'UM_MED_Donut_AnimBP_C::AnimGraphNode_AnimDynamics_5' has a wrong offset!");
static_assert(offsetof(UM_MED_Donut_AnimBP_C, AnimGraphNode_AnimDynamics_4) == 0x001850, "Member 'UM_MED_Donut_AnimBP_C::AnimGraphNode_AnimDynamics_4' has a wrong offset!");
static_assert(offsetof(UM_MED_Donut_AnimBP_C, AnimGraphNode_AnimDynamics_3) == 0x001C90, "Member 'UM_MED_Donut_AnimBP_C::AnimGraphNode_AnimDynamics_3' has a wrong offset!");
static_assert(offsetof(UM_MED_Donut_AnimBP_C, AnimGraphNode_AnimDynamics_2) == 0x0020D0, "Member 'UM_MED_Donut_AnimBP_C::AnimGraphNode_AnimDynamics_2' has a wrong offset!");
static_assert(offsetof(UM_MED_Donut_AnimBP_C, AnimGraphNode_AnimDynamics_1) == 0x002510, "Member 'UM_MED_Donut_AnimBP_C::AnimGraphNode_AnimDynamics_1' has a wrong offset!");
static_assert(offsetof(UM_MED_Donut_AnimBP_C, AnimGraphNode_AnimDynamics) == 0x002950, "Member 'UM_MED_Donut_AnimBP_C::AnimGraphNode_AnimDynamics' has a wrong offset!");
static_assert(offsetof(UM_MED_Donut_AnimBP_C, AnimGraphNode_Constraint_1) == 0x002D90, "Member 'UM_MED_Donut_AnimBP_C::AnimGraphNode_Constraint_1' has a wrong offset!");
static_assert(offsetof(UM_MED_Donut_AnimBP_C, AnimGraphNode_Constraint) == 0x002E98, "Member 'UM_MED_Donut_AnimBP_C::AnimGraphNode_Constraint' has a wrong offset!");
static_assert(offsetof(UM_MED_Donut_AnimBP_C, AnimGraphNode_CopyPoseFromMesh) == 0x002FA0, "Member 'UM_MED_Donut_AnimBP_C::AnimGraphNode_CopyPoseFromMesh' has a wrong offset!");
static_assert(offsetof(UM_MED_Donut_AnimBP_C, AnimGraphNode_Root) == 0x0030E0, "Member 'UM_MED_Donut_AnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UM_MED_Donut_AnimBP_C, AnimGraphNode_ModifyBone_2) == 0x003110, "Member 'UM_MED_Donut_AnimBP_C::AnimGraphNode_ModifyBone_2' has a wrong offset!");
static_assert(offsetof(UM_MED_Donut_AnimBP_C, AnimGraphNode_ModifyBone_1) == 0x003218, "Member 'UM_MED_Donut_AnimBP_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(UM_MED_Donut_AnimBP_C, AnimGraphNode_ModifyBone) == 0x003320, "Member 'UM_MED_Donut_AnimBP_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UM_MED_Donut_AnimBP_C, CrouchAlpha) == 0x003428, "Member 'UM_MED_Donut_AnimBP_C::CrouchAlpha' has a wrong offset!");

}

