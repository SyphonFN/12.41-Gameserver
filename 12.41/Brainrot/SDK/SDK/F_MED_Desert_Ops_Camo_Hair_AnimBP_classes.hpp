#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: F_MED_Desert_Ops_Camo_Hair_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass F_MED_Desert_Ops_Camo_Hair_AnimBP.F_MED_Desert_Ops_Camo_Hair_AnimBP_C
// 0x64D0 (0x6940 - 0x0470)
class UF_MED_Desert_Ops_Camo_Hair_AnimBP_C final : public UCustomCharacterPartAnimInstance_DesertOpsCamoHair
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0470(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_6;                        // 0x0478(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_5;                        // 0x0580(0x0108)()
	uint8                                         Pad_5C77[0x8];                                     // 0x0688(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_LookAt                       AnimGraphNode_LookAt_6;                            // 0x0690(0x01B0)()
	struct FAnimNode_LookAt                       AnimGraphNode_LookAt_5;                            // 0x0840(0x01B0)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_4;                        // 0x09F0(0x0108)()
	uint8                                         Pad_5C78[0x8];                                     // 0x0AF8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_RigidBody                    AnimGraphNode_RigidBody_5;                         // 0x0B00(0x05A0)()
	struct FAnimNode_RigidBody                    AnimGraphNode_RigidBody_4;                         // 0x10A0(0x05A0)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_3;                        // 0x1640(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_2;                        // 0x1748(0x0108)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2;             // 0x1850(0x0020)()
	struct FAnimNode_BlendListByInt               AnimGraphNode_BlendListByInt;                      // 0x1870(0x00A0)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2;             // 0x1910(0x0020)()
	struct FAnimNode_LookAt                       AnimGraphNode_LookAt_4;                            // 0x1930(0x01B0)()
	struct FAnimNode_CopyPoseFromMesh             AnimGraphNode_CopyPoseFromMesh_4;                  // 0x1AE0(0x0140)(ContainsInstancedReference)
	struct FAnimNode_CopyPoseFromMesh             AnimGraphNode_CopyPoseFromMesh_3;                  // 0x1C20(0x0140)(ContainsInstancedReference)
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_8;                      // 0x1D60(0x0440)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x21A0(0x0020)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x21C0(0x0020)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_7;                      // 0x21E0(0x0440)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_6;                      // 0x2620(0x0440)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_5;                      // 0x2A60(0x0440)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_4;                      // 0x2EA0(0x0440)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_3;                      // 0x32E0(0x0440)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_2;                      // 0x3720(0x0440)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_1;                      // 0x3B60(0x0440)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics;                        // 0x3FA0(0x0440)()
	struct FAnimNode_CopyPoseFromMesh             AnimGraphNode_CopyPoseFromMesh_2;                  // 0x43E0(0x0140)(ContainsInstancedReference)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x4520(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x4540(0x0020)()
	struct FAnimNode_LookAt                       AnimGraphNode_LookAt_3;                            // 0x4560(0x01B0)()
	struct FAnimNode_LookAt                       AnimGraphNode_LookAt_2;                            // 0x4710(0x01B0)()
	struct FAnimNode_LookAt                       AnimGraphNode_LookAt_1;                            // 0x48C0(0x01B0)()
	struct FAnimNode_LookAt                       AnimGraphNode_LookAt;                              // 0x4A70(0x01B0)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x4C20(0x00A0)()
	struct FAnimNode_CopyPoseFromMesh             AnimGraphNode_CopyPoseFromMesh_1;                  // 0x4CC0(0x0140)(ContainsInstancedReference)
	struct FAnimNode_RigidBody                    AnimGraphNode_RigidBody_3;                         // 0x4E00(0x05A0)()
	struct FAnimNode_RigidBody                    AnimGraphNode_RigidBody_2;                         // 0x53A0(0x05A0)()
	struct FAnimNode_RigidBody                    AnimGraphNode_RigidBody_1;                         // 0x5940(0x05A0)()
	struct FAnimNode_RigidBody                    AnimGraphNode_RigidBody;                           // 0x5EE0(0x05A0)()
	struct FAnimNode_Constraint                   AnimGraphNode_Constraint;                          // 0x6480(0x0108)()
	struct FAnimNode_CopyPoseFromMesh             AnimGraphNode_CopyPoseFromMesh;                    // 0x6588(0x0140)(ContainsInstancedReference)
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;                        // 0x66C8(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x67D0(0x0108)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x68D8(0x0030)()
	bool                                          Long_hair_active;                                  // 0x6908(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5C79[0x7];                                     // 0x6909(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMeshComponent*                 Mesh_To_Copy;                                      // 0x6910(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ArmSwingDelta_r;                                   // 0x6918(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ArmSwingDelta_l;                                   // 0x691C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Active_hair_index;                                 // 0x6920(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Vest_active;                                       // 0x6924(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5C7A[0x3];                                     // 0x6925(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         No_vest_alpha;                                     // 0x6928(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Hat_active;                                        // 0x692C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5C7B[0x3];                                     // 0x692D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         No_hat_alpha;                                      // 0x6930(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         No_hat_short_alpha;                                // 0x6934(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Helmet_hairc_alpha;                                // 0x6938(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_F_MED_Desert_Ops_Camo_Hair_AnimBP(int32 EntryPoint);
	void OnCharacterCustomizationLoaded();
	void AnimGraph(struct FPoseLink* Param_AnimGraph);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"F_MED_Desert_Ops_Camo_Hair_AnimBP_C">();
	}
	static class UF_MED_Desert_Ops_Camo_Hair_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UF_MED_Desert_Ops_Camo_Hair_AnimBP_C>();
	}
};
static_assert(alignof(UF_MED_Desert_Ops_Camo_Hair_AnimBP_C) == 0x000010, "Wrong alignment on UF_MED_Desert_Ops_Camo_Hair_AnimBP_C");
static_assert(sizeof(UF_MED_Desert_Ops_Camo_Hair_AnimBP_C) == 0x006940, "Wrong size on UF_MED_Desert_Ops_Camo_Hair_AnimBP_C");
static_assert(offsetof(UF_MED_Desert_Ops_Camo_Hair_AnimBP_C, UberGraphFrame) == 0x000470, "Member 'UF_MED_Desert_Ops_Camo_Hair_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UF_MED_Desert_Ops_Camo_Hair_AnimBP_C, AnimGraphNode_ModifyBone_6) == 0x000478, "Member 'UF_MED_Desert_Ops_Camo_Hair_AnimBP_C::AnimGraphNode_ModifyBone_6' has a wrong offset!");
static_assert(offsetof(UF_MED_Desert_Ops_Camo_Hair_AnimBP_C, AnimGraphNode_ModifyBone_5) == 0x000580, "Member 'UF_MED_Desert_Ops_Camo_Hair_AnimBP_C::AnimGraphNode_ModifyBone_5' has a wrong offset!");
static_assert(offsetof(UF_MED_Desert_Ops_Camo_Hair_AnimBP_C, AnimGraphNode_LookAt_6) == 0x000690, "Member 'UF_MED_Desert_Ops_Camo_Hair_AnimBP_C::AnimGraphNode_LookAt_6' has a wrong offset!");
static_assert(offsetof(UF_MED_Desert_Ops_Camo_Hair_AnimBP_C, AnimGraphNode_LookAt_5) == 0x000840, "Member 'UF_MED_Desert_Ops_Camo_Hair_AnimBP_C::AnimGraphNode_LookAt_5' has a wrong offset!");
static_assert(offsetof(UF_MED_Desert_Ops_Camo_Hair_AnimBP_C, AnimGraphNode_ModifyBone_4) == 0x0009F0, "Member 'UF_MED_Desert_Ops_Camo_Hair_AnimBP_C::AnimGraphNode_ModifyBone_4' has a wrong offset!");
static_assert(offsetof(UF_MED_Desert_Ops_Camo_Hair_AnimBP_C, AnimGraphNode_RigidBody_5) == 0x000B00, "Member 'UF_MED_Desert_Ops_Camo_Hair_AnimBP_C::AnimGraphNode_RigidBody_5' has a wrong offset!");
static_assert(offsetof(UF_MED_Desert_Ops_Camo_Hair_AnimBP_C, AnimGraphNode_RigidBody_4) == 0x0010A0, "Member 'UF_MED_Desert_Ops_Camo_Hair_AnimBP_C::AnimGraphNode_RigidBody_4' has a wrong offset!");
static_assert(offsetof(UF_MED_Desert_Ops_Camo_Hair_AnimBP_C, AnimGraphNode_ModifyBone_3) == 0x001640, "Member 'UF_MED_Desert_Ops_Camo_Hair_AnimBP_C::AnimGraphNode_ModifyBone_3' has a wrong offset!");
static_assert(offsetof(UF_MED_Desert_Ops_Camo_Hair_AnimBP_C, AnimGraphNode_ModifyBone_2) == 0x001748, "Member 'UF_MED_Desert_Ops_Camo_Hair_AnimBP_C::AnimGraphNode_ModifyBone_2' has a wrong offset!");
static_assert(offsetof(UF_MED_Desert_Ops_Camo_Hair_AnimBP_C, AnimGraphNode_ComponentToLocalSpace_2) == 0x001850, "Member 'UF_MED_Desert_Ops_Camo_Hair_AnimBP_C::AnimGraphNode_ComponentToLocalSpace_2' has a wrong offset!");
static_assert(offsetof(UF_MED_Desert_Ops_Camo_Hair_AnimBP_C, AnimGraphNode_BlendListByInt) == 0x001870, "Member 'UF_MED_Desert_Ops_Camo_Hair_AnimBP_C::AnimGraphNode_BlendListByInt' has a wrong offset!");
static_assert(offsetof(UF_MED_Desert_Ops_Camo_Hair_AnimBP_C, AnimGraphNode_LocalToComponentSpace_2) == 0x001910, "Member 'UF_MED_Desert_Ops_Camo_Hair_AnimBP_C::AnimGraphNode_LocalToComponentSpace_2' has a wrong offset!");
static_assert(offsetof(UF_MED_Desert_Ops_Camo_Hair_AnimBP_C, AnimGraphNode_LookAt_4) == 0x001930, "Member 'UF_MED_Desert_Ops_Camo_Hair_AnimBP_C::AnimGraphNode_LookAt_4' has a wrong offset!");
static_assert(offsetof(UF_MED_Desert_Ops_Camo_Hair_AnimBP_C, AnimGraphNode_CopyPoseFromMesh_4) == 0x001AE0, "Member 'UF_MED_Desert_Ops_Camo_Hair_AnimBP_C::AnimGraphNode_CopyPoseFromMesh_4' has a wrong offset!");
static_assert(offsetof(UF_MED_Desert_Ops_Camo_Hair_AnimBP_C, AnimGraphNode_CopyPoseFromMesh_3) == 0x001C20, "Member 'UF_MED_Desert_Ops_Camo_Hair_AnimBP_C::AnimGraphNode_CopyPoseFromMesh_3' has a wrong offset!");
static_assert(offsetof(UF_MED_Desert_Ops_Camo_Hair_AnimBP_C, AnimGraphNode_AnimDynamics_8) == 0x001D60, "Member 'UF_MED_Desert_Ops_Camo_Hair_AnimBP_C::AnimGraphNode_AnimDynamics_8' has a wrong offset!");
static_assert(offsetof(UF_MED_Desert_Ops_Camo_Hair_AnimBP_C, AnimGraphNode_ComponentToLocalSpace_1) == 0x0021A0, "Member 'UF_MED_Desert_Ops_Camo_Hair_AnimBP_C::AnimGraphNode_ComponentToLocalSpace_1' has a wrong offset!");
static_assert(offsetof(UF_MED_Desert_Ops_Camo_Hair_AnimBP_C, AnimGraphNode_LocalToComponentSpace_1) == 0x0021C0, "Member 'UF_MED_Desert_Ops_Camo_Hair_AnimBP_C::AnimGraphNode_LocalToComponentSpace_1' has a wrong offset!");
static_assert(offsetof(UF_MED_Desert_Ops_Camo_Hair_AnimBP_C, AnimGraphNode_AnimDynamics_7) == 0x0021E0, "Member 'UF_MED_Desert_Ops_Camo_Hair_AnimBP_C::AnimGraphNode_AnimDynamics_7' has a wrong offset!");
static_assert(offsetof(UF_MED_Desert_Ops_Camo_Hair_AnimBP_C, AnimGraphNode_AnimDynamics_6) == 0x002620, "Member 'UF_MED_Desert_Ops_Camo_Hair_AnimBP_C::AnimGraphNode_AnimDynamics_6' has a wrong offset!");
static_assert(offsetof(UF_MED_Desert_Ops_Camo_Hair_AnimBP_C, AnimGraphNode_AnimDynamics_5) == 0x002A60, "Member 'UF_MED_Desert_Ops_Camo_Hair_AnimBP_C::AnimGraphNode_AnimDynamics_5' has a wrong offset!");
static_assert(offsetof(UF_MED_Desert_Ops_Camo_Hair_AnimBP_C, AnimGraphNode_AnimDynamics_4) == 0x002EA0, "Member 'UF_MED_Desert_Ops_Camo_Hair_AnimBP_C::AnimGraphNode_AnimDynamics_4' has a wrong offset!");
static_assert(offsetof(UF_MED_Desert_Ops_Camo_Hair_AnimBP_C, AnimGraphNode_AnimDynamics_3) == 0x0032E0, "Member 'UF_MED_Desert_Ops_Camo_Hair_AnimBP_C::AnimGraphNode_AnimDynamics_3' has a wrong offset!");
static_assert(offsetof(UF_MED_Desert_Ops_Camo_Hair_AnimBP_C, AnimGraphNode_AnimDynamics_2) == 0x003720, "Member 'UF_MED_Desert_Ops_Camo_Hair_AnimBP_C::AnimGraphNode_AnimDynamics_2' has a wrong offset!");
static_assert(offsetof(UF_MED_Desert_Ops_Camo_Hair_AnimBP_C, AnimGraphNode_AnimDynamics_1) == 0x003B60, "Member 'UF_MED_Desert_Ops_Camo_Hair_AnimBP_C::AnimGraphNode_AnimDynamics_1' has a wrong offset!");
static_assert(offsetof(UF_MED_Desert_Ops_Camo_Hair_AnimBP_C, AnimGraphNode_AnimDynamics) == 0x003FA0, "Member 'UF_MED_Desert_Ops_Camo_Hair_AnimBP_C::AnimGraphNode_AnimDynamics' has a wrong offset!");
static_assert(offsetof(UF_MED_Desert_Ops_Camo_Hair_AnimBP_C, AnimGraphNode_CopyPoseFromMesh_2) == 0x0043E0, "Member 'UF_MED_Desert_Ops_Camo_Hair_AnimBP_C::AnimGraphNode_CopyPoseFromMesh_2' has a wrong offset!");
static_assert(offsetof(UF_MED_Desert_Ops_Camo_Hair_AnimBP_C, AnimGraphNode_LocalToComponentSpace) == 0x004520, "Member 'UF_MED_Desert_Ops_Camo_Hair_AnimBP_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UF_MED_Desert_Ops_Camo_Hair_AnimBP_C, AnimGraphNode_ComponentToLocalSpace) == 0x004540, "Member 'UF_MED_Desert_Ops_Camo_Hair_AnimBP_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UF_MED_Desert_Ops_Camo_Hair_AnimBP_C, AnimGraphNode_LookAt_3) == 0x004560, "Member 'UF_MED_Desert_Ops_Camo_Hair_AnimBP_C::AnimGraphNode_LookAt_3' has a wrong offset!");
static_assert(offsetof(UF_MED_Desert_Ops_Camo_Hair_AnimBP_C, AnimGraphNode_LookAt_2) == 0x004710, "Member 'UF_MED_Desert_Ops_Camo_Hair_AnimBP_C::AnimGraphNode_LookAt_2' has a wrong offset!");
static_assert(offsetof(UF_MED_Desert_Ops_Camo_Hair_AnimBP_C, AnimGraphNode_LookAt_1) == 0x0048C0, "Member 'UF_MED_Desert_Ops_Camo_Hair_AnimBP_C::AnimGraphNode_LookAt_1' has a wrong offset!");
static_assert(offsetof(UF_MED_Desert_Ops_Camo_Hair_AnimBP_C, AnimGraphNode_LookAt) == 0x004A70, "Member 'UF_MED_Desert_Ops_Camo_Hair_AnimBP_C::AnimGraphNode_LookAt' has a wrong offset!");
static_assert(offsetof(UF_MED_Desert_Ops_Camo_Hair_AnimBP_C, AnimGraphNode_BlendListByBool) == 0x004C20, "Member 'UF_MED_Desert_Ops_Camo_Hair_AnimBP_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UF_MED_Desert_Ops_Camo_Hair_AnimBP_C, AnimGraphNode_CopyPoseFromMesh_1) == 0x004CC0, "Member 'UF_MED_Desert_Ops_Camo_Hair_AnimBP_C::AnimGraphNode_CopyPoseFromMesh_1' has a wrong offset!");
static_assert(offsetof(UF_MED_Desert_Ops_Camo_Hair_AnimBP_C, AnimGraphNode_RigidBody_3) == 0x004E00, "Member 'UF_MED_Desert_Ops_Camo_Hair_AnimBP_C::AnimGraphNode_RigidBody_3' has a wrong offset!");
static_assert(offsetof(UF_MED_Desert_Ops_Camo_Hair_AnimBP_C, AnimGraphNode_RigidBody_2) == 0x0053A0, "Member 'UF_MED_Desert_Ops_Camo_Hair_AnimBP_C::AnimGraphNode_RigidBody_2' has a wrong offset!");
static_assert(offsetof(UF_MED_Desert_Ops_Camo_Hair_AnimBP_C, AnimGraphNode_RigidBody_1) == 0x005940, "Member 'UF_MED_Desert_Ops_Camo_Hair_AnimBP_C::AnimGraphNode_RigidBody_1' has a wrong offset!");
static_assert(offsetof(UF_MED_Desert_Ops_Camo_Hair_AnimBP_C, AnimGraphNode_RigidBody) == 0x005EE0, "Member 'UF_MED_Desert_Ops_Camo_Hair_AnimBP_C::AnimGraphNode_RigidBody' has a wrong offset!");
static_assert(offsetof(UF_MED_Desert_Ops_Camo_Hair_AnimBP_C, AnimGraphNode_Constraint) == 0x006480, "Member 'UF_MED_Desert_Ops_Camo_Hair_AnimBP_C::AnimGraphNode_Constraint' has a wrong offset!");
static_assert(offsetof(UF_MED_Desert_Ops_Camo_Hair_AnimBP_C, AnimGraphNode_CopyPoseFromMesh) == 0x006588, "Member 'UF_MED_Desert_Ops_Camo_Hair_AnimBP_C::AnimGraphNode_CopyPoseFromMesh' has a wrong offset!");
static_assert(offsetof(UF_MED_Desert_Ops_Camo_Hair_AnimBP_C, AnimGraphNode_ModifyBone_1) == 0x0066C8, "Member 'UF_MED_Desert_Ops_Camo_Hair_AnimBP_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(UF_MED_Desert_Ops_Camo_Hair_AnimBP_C, AnimGraphNode_ModifyBone) == 0x0067D0, "Member 'UF_MED_Desert_Ops_Camo_Hair_AnimBP_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UF_MED_Desert_Ops_Camo_Hair_AnimBP_C, AnimGraphNode_Root) == 0x0068D8, "Member 'UF_MED_Desert_Ops_Camo_Hair_AnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UF_MED_Desert_Ops_Camo_Hair_AnimBP_C, Long_hair_active) == 0x006908, "Member 'UF_MED_Desert_Ops_Camo_Hair_AnimBP_C::Long_hair_active' has a wrong offset!");
static_assert(offsetof(UF_MED_Desert_Ops_Camo_Hair_AnimBP_C, Mesh_To_Copy) == 0x006910, "Member 'UF_MED_Desert_Ops_Camo_Hair_AnimBP_C::Mesh_To_Copy' has a wrong offset!");
static_assert(offsetof(UF_MED_Desert_Ops_Camo_Hair_AnimBP_C, ArmSwingDelta_r) == 0x006918, "Member 'UF_MED_Desert_Ops_Camo_Hair_AnimBP_C::ArmSwingDelta_r' has a wrong offset!");
static_assert(offsetof(UF_MED_Desert_Ops_Camo_Hair_AnimBP_C, ArmSwingDelta_l) == 0x00691C, "Member 'UF_MED_Desert_Ops_Camo_Hair_AnimBP_C::ArmSwingDelta_l' has a wrong offset!");
static_assert(offsetof(UF_MED_Desert_Ops_Camo_Hair_AnimBP_C, Active_hair_index) == 0x006920, "Member 'UF_MED_Desert_Ops_Camo_Hair_AnimBP_C::Active_hair_index' has a wrong offset!");
static_assert(offsetof(UF_MED_Desert_Ops_Camo_Hair_AnimBP_C, Vest_active) == 0x006924, "Member 'UF_MED_Desert_Ops_Camo_Hair_AnimBP_C::Vest_active' has a wrong offset!");
static_assert(offsetof(UF_MED_Desert_Ops_Camo_Hair_AnimBP_C, No_vest_alpha) == 0x006928, "Member 'UF_MED_Desert_Ops_Camo_Hair_AnimBP_C::No_vest_alpha' has a wrong offset!");
static_assert(offsetof(UF_MED_Desert_Ops_Camo_Hair_AnimBP_C, Hat_active) == 0x00692C, "Member 'UF_MED_Desert_Ops_Camo_Hair_AnimBP_C::Hat_active' has a wrong offset!");
static_assert(offsetof(UF_MED_Desert_Ops_Camo_Hair_AnimBP_C, No_hat_alpha) == 0x006930, "Member 'UF_MED_Desert_Ops_Camo_Hair_AnimBP_C::No_hat_alpha' has a wrong offset!");
static_assert(offsetof(UF_MED_Desert_Ops_Camo_Hair_AnimBP_C, No_hat_short_alpha) == 0x006934, "Member 'UF_MED_Desert_Ops_Camo_Hair_AnimBP_C::No_hat_short_alpha' has a wrong offset!");
static_assert(offsetof(UF_MED_Desert_Ops_Camo_Hair_AnimBP_C, Helmet_hairc_alpha) == 0x006938, "Member 'UF_MED_Desert_Ops_Camo_Hair_AnimBP_C::Helmet_hairc_alpha' has a wrong offset!");

}

