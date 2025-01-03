#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: F_MED_TNTina_FaceAcc_AnimBp

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass F_MED_TNTina_FaceAcc_AnimBp.F_MED_TNTina_FaceAcc_AnimBp_C
// 0x1230 (0x1650 - 0x0420)
class UF_MED_TNTina_FaceAcc_AnimBp_C final : public UCustomCharacterPartAnimInstance
{
public:
	uint8                                         Pad_72AF[0x8];                                     // 0x0418(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0420(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0428(0x0030)()
	struct FAnimNode_CopyPoseFromMesh             AnimGraphNode_CopyPoseFromMesh;                    // 0x0458(0x0140)(ContainsInstancedReference)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x0598(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x05B8(0x0020)()
	uint8                                         Pad_72B0[0x8];                                     // 0x05D8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_RigidBody                    AnimGraphNode_RigidBody_1;                         // 0x05E0(0x05A0)()
	struct FAnimNode_RigidBody                    AnimGraphNode_RigidBody;                           // 0x0B80(0x05A0)()
	struct FAnimNode_Constraint                   AnimGraphNode_Constraint_1;                        // 0x1120(0x0108)()
	struct FAnimNode_Constraint                   AnimGraphNode_Constraint;                          // 0x1228(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_2;                        // 0x1330(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;                        // 0x1438(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x1540(0x0108)()
	float                                         HeadRotBack;                                       // 0x1648(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_F_MED_TNTina_FaceAcc_AnimBp(int32 EntryPoint);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimGraph(struct FPoseLink* Param_AnimGraph);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"F_MED_TNTina_FaceAcc_AnimBp_C">();
	}
	static class UF_MED_TNTina_FaceAcc_AnimBp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UF_MED_TNTina_FaceAcc_AnimBp_C>();
	}
};
static_assert(alignof(UF_MED_TNTina_FaceAcc_AnimBp_C) == 0x000010, "Wrong alignment on UF_MED_TNTina_FaceAcc_AnimBp_C");
static_assert(sizeof(UF_MED_TNTina_FaceAcc_AnimBp_C) == 0x001650, "Wrong size on UF_MED_TNTina_FaceAcc_AnimBp_C");
static_assert(offsetof(UF_MED_TNTina_FaceAcc_AnimBp_C, UberGraphFrame) == 0x000420, "Member 'UF_MED_TNTina_FaceAcc_AnimBp_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UF_MED_TNTina_FaceAcc_AnimBp_C, AnimGraphNode_Root) == 0x000428, "Member 'UF_MED_TNTina_FaceAcc_AnimBp_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UF_MED_TNTina_FaceAcc_AnimBp_C, AnimGraphNode_CopyPoseFromMesh) == 0x000458, "Member 'UF_MED_TNTina_FaceAcc_AnimBp_C::AnimGraphNode_CopyPoseFromMesh' has a wrong offset!");
static_assert(offsetof(UF_MED_TNTina_FaceAcc_AnimBp_C, AnimGraphNode_LocalToComponentSpace) == 0x000598, "Member 'UF_MED_TNTina_FaceAcc_AnimBp_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UF_MED_TNTina_FaceAcc_AnimBp_C, AnimGraphNode_ComponentToLocalSpace) == 0x0005B8, "Member 'UF_MED_TNTina_FaceAcc_AnimBp_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UF_MED_TNTina_FaceAcc_AnimBp_C, AnimGraphNode_RigidBody_1) == 0x0005E0, "Member 'UF_MED_TNTina_FaceAcc_AnimBp_C::AnimGraphNode_RigidBody_1' has a wrong offset!");
static_assert(offsetof(UF_MED_TNTina_FaceAcc_AnimBp_C, AnimGraphNode_RigidBody) == 0x000B80, "Member 'UF_MED_TNTina_FaceAcc_AnimBp_C::AnimGraphNode_RigidBody' has a wrong offset!");
static_assert(offsetof(UF_MED_TNTina_FaceAcc_AnimBp_C, AnimGraphNode_Constraint_1) == 0x001120, "Member 'UF_MED_TNTina_FaceAcc_AnimBp_C::AnimGraphNode_Constraint_1' has a wrong offset!");
static_assert(offsetof(UF_MED_TNTina_FaceAcc_AnimBp_C, AnimGraphNode_Constraint) == 0x001228, "Member 'UF_MED_TNTina_FaceAcc_AnimBp_C::AnimGraphNode_Constraint' has a wrong offset!");
static_assert(offsetof(UF_MED_TNTina_FaceAcc_AnimBp_C, AnimGraphNode_ModifyBone_2) == 0x001330, "Member 'UF_MED_TNTina_FaceAcc_AnimBp_C::AnimGraphNode_ModifyBone_2' has a wrong offset!");
static_assert(offsetof(UF_MED_TNTina_FaceAcc_AnimBp_C, AnimGraphNode_ModifyBone_1) == 0x001438, "Member 'UF_MED_TNTina_FaceAcc_AnimBp_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(UF_MED_TNTina_FaceAcc_AnimBp_C, AnimGraphNode_ModifyBone) == 0x001540, "Member 'UF_MED_TNTina_FaceAcc_AnimBp_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UF_MED_TNTina_FaceAcc_AnimBp_C, HeadRotBack) == 0x001648, "Member 'UF_MED_TNTina_FaceAcc_AnimBp_C::HeadRotBack' has a wrong offset!");

}

