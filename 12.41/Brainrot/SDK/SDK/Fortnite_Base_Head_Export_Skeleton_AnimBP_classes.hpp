#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Fortnite_Base_Head_Export_Skeleton_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "LiveLink_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass Fortnite_Base_Head_Export_Skeleton_AnimBP.Fortnite_Base_Head_Export_Skeleton_AnimBP_C
// 0x1050 (0x1480 - 0x0430)
class UFortnite_Base_Head_Export_Skeleton_AnimBP_C : public UHeadPartAnimInstance
{
public:
	uint8                                         Pad_6266[0x8];                                     // 0x0428(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0430(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_13;                    // 0x0438(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_12;                    // 0x0460(0x0028)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_4;                    // 0x0488(0x00B8)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0540(0x0048)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_2;                  // 0x0588(0x00C0)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_3;                    // 0x0648(0x00B8)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_11;                    // 0x0700(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_10;                    // 0x0728(0x0028)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x0750(0x0108)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x0858(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0878(0x0020)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_2;                    // 0x0898(0x00B8)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_9;                     // 0x0950(0x0028)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_1;                   // 0x0978(0x00A0)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_8;                     // 0x0A18(0x0028)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum_1;                   // 0x0A40(0x00B0)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_7;                     // 0x0AF0(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_6;                     // 0x0B18(0x0028)()
	struct FAnimNode_LiveLinkPose                 AnimGraphNode_LiveLinkPose_1;                      // 0x0B40(0x0050)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_1;                    // 0x0B90(0x00B8)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_5;                     // 0x0C48(0x0028)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_1;                  // 0x0C70(0x00C0)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_4;                     // 0x0D30(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_3;                     // 0x0D58(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_2;                     // 0x0D80(0x0028)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum;                     // 0x0DA8(0x00B0)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x0E58(0x0028)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x0E80(0x00A0)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x0F20(0x0028)()
	struct FAnimNode_LiveLinkPose                 AnimGraphNode_LiveLinkPose;                        // 0x0F48(0x0050)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x0F98(0x00B8)()
	struct FAnimNode_TwoWayBlend                  AnimGraphNode_TwoWayBlend;                         // 0x1050(0x00C8)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x1118(0x00C0)()
	struct FAnimNode_CopyPoseFromMesh             AnimGraphNode_CopyPoseFromMesh;                    // 0x11D8(0x0140)(ContainsInstancedReference)
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x1318(0x0078)()
	struct FAnimNode_PoseBlendNode                AnimGraphNode_PoseBlendNode;                       // 0x1390(0x0098)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x1428(0x0030)()
	class USkeletalMeshComponent*                 MeshToCopy;                                        // 0x1458(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          GetPlayerListUsesCustomCharacterParts;             // 0x1460(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsMoving;                                         // 0x1461(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsOnGround_0;                                     // 0x1462(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsSlopeSliding_0;                                 // 0x1463(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsFallingLocal;                                   // 0x1464(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsJumpingLocal;                                   // 0x1465(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsCrouching_0;                                    // 0x1466(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsCrouchWalking;                                  // 0x1467(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsCrouchSprinting_0;                              // 0x1468(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsSprinting_0;                                    // 0x1469(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsJogging_0;                                      // 0x146A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsDBNO_0;                                         // 0x146B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsTargeting_0;                                    // 0x146C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsDancing;                                        // 0x146D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsMeleeSwing_0;                                   // 0x146E(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsLocomotion_0;                                   // 0x146F(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bRecentlyFired_0;                                  // 0x1470(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6267[0x3];                                     // 0x1471(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LastFireTime;                                      // 0x1474(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSkydiving0;                                      // 0x1478(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsDive0;                                           // 0x1479(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_Fortnite_Base_Head_Export_Skeleton_AnimBP(int32 EntryPoint);
	void BlueprintInitializeAnimation();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimGraph(struct FPoseLink* Param_AnimGraph);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Fortnite_Base_Head_Export_Skeleton_AnimBP_C">();
	}
	static class UFortnite_Base_Head_Export_Skeleton_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortnite_Base_Head_Export_Skeleton_AnimBP_C>();
	}
};
static_assert(alignof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C) == 0x000010, "Wrong alignment on UFortnite_Base_Head_Export_Skeleton_AnimBP_C");
static_assert(sizeof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C) == 0x001480, "Wrong size on UFortnite_Base_Head_Export_Skeleton_AnimBP_C");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, UberGraphFrame) == 0x000430, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_UseCachedPose_13) == 0x000438, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_UseCachedPose_13' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_UseCachedPose_12) == 0x000460, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_UseCachedPose_12' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_SaveCachedPose_4) == 0x000488, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_SaveCachedPose_4' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_Slot) == 0x000540, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_LayeredBoneBlend_2) == 0x000588, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_LayeredBoneBlend_2' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_SaveCachedPose_3) == 0x000648, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_SaveCachedPose_3' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_UseCachedPose_11) == 0x000700, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_UseCachedPose_11' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_UseCachedPose_10) == 0x000728, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_UseCachedPose_10' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_ModifyBone) == 0x000750, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_LocalToComponentSpace) == 0x000858, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_ComponentToLocalSpace) == 0x000878, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_SaveCachedPose_2) == 0x000898, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_SaveCachedPose_2' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_UseCachedPose_9) == 0x000950, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_UseCachedPose_9' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_BlendListByBool_1) == 0x000978, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_BlendListByBool_1' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_UseCachedPose_8) == 0x000A18, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_UseCachedPose_8' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_BlendListByEnum_1) == 0x000A40, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_BlendListByEnum_1' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_UseCachedPose_7) == 0x000AF0, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_UseCachedPose_7' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_UseCachedPose_6) == 0x000B18, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_UseCachedPose_6' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_LiveLinkPose_1) == 0x000B40, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_LiveLinkPose_1' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_SaveCachedPose_1) == 0x000B90, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_SaveCachedPose_1' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_UseCachedPose_5) == 0x000C48, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_UseCachedPose_5' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_LayeredBoneBlend_1) == 0x000C70, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_LayeredBoneBlend_1' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_UseCachedPose_4) == 0x000D30, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_UseCachedPose_4' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_UseCachedPose_3) == 0x000D58, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_UseCachedPose_3' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_UseCachedPose_2) == 0x000D80, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_UseCachedPose_2' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_BlendListByEnum) == 0x000DA8, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_BlendListByEnum' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_UseCachedPose_1) == 0x000E58, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_BlendListByBool) == 0x000E80, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_UseCachedPose) == 0x000F20, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_LiveLinkPose) == 0x000F48, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_LiveLinkPose' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_SaveCachedPose) == 0x000F98, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_TwoWayBlend) == 0x001050, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_TwoWayBlend' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_LayeredBoneBlend) == 0x001118, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_CopyPoseFromMesh) == 0x0011D8, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_CopyPoseFromMesh' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_SequencePlayer) == 0x001318, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_PoseBlendNode) == 0x001390, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_PoseBlendNode' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, AnimGraphNode_Root) == 0x001428, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, MeshToCopy) == 0x001458, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::MeshToCopy' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, GetPlayerListUsesCustomCharacterParts) == 0x001460, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::GetPlayerListUsesCustomCharacterParts' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, bIsMoving) == 0x001461, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::bIsMoving' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, bIsOnGround_0) == 0x001462, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::bIsOnGround_0' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, bIsSlopeSliding_0) == 0x001463, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::bIsSlopeSliding_0' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, bIsFallingLocal) == 0x001464, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::bIsFallingLocal' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, bIsJumpingLocal) == 0x001465, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::bIsJumpingLocal' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, bIsCrouching_0) == 0x001466, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::bIsCrouching_0' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, bIsCrouchWalking) == 0x001467, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::bIsCrouchWalking' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, bIsCrouchSprinting_0) == 0x001468, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::bIsCrouchSprinting_0' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, bIsSprinting_0) == 0x001469, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::bIsSprinting_0' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, bIsJogging_0) == 0x00146A, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::bIsJogging_0' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, bIsDBNO_0) == 0x00146B, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::bIsDBNO_0' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, bIsTargeting_0) == 0x00146C, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::bIsTargeting_0' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, bIsDancing) == 0x00146D, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::bIsDancing' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, bIsMeleeSwing_0) == 0x00146E, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::bIsMeleeSwing_0' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, bIsLocomotion_0) == 0x00146F, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::bIsLocomotion_0' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, bRecentlyFired_0) == 0x001470, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::bRecentlyFired_0' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, LastFireTime) == 0x001474, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::LastFireTime' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, IsSkydiving0) == 0x001478, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::IsSkydiving0' has a wrong offset!");
static_assert(offsetof(UFortnite_Base_Head_Export_Skeleton_AnimBP_C, IsDive0) == 0x001479, "Member 'UFortnite_Base_Head_Export_Skeleton_AnimBP_C::IsDive0' has a wrong offset!");

}

