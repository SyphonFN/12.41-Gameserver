#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerAnimOverrideLayerInterface

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function PlayerAnimOverrideLayerInterface.PlayerAnimOverrideLayerInterface_C.FullBodyOverride
// 0x0020 (0x0020 - 0x0000)
struct PlayerAnimOverrideLayerInterface_C_FullBodyOverride final
{
public:
	struct FPoseLink                              PassThroughFullBodyPose;                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              Param_FullBodyOverride;                            // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(PlayerAnimOverrideLayerInterface_C_FullBodyOverride) == 0x000008, "Wrong alignment on PlayerAnimOverrideLayerInterface_C_FullBodyOverride");
static_assert(sizeof(PlayerAnimOverrideLayerInterface_C_FullBodyOverride) == 0x000020, "Wrong size on PlayerAnimOverrideLayerInterface_C_FullBodyOverride");
static_assert(offsetof(PlayerAnimOverrideLayerInterface_C_FullBodyOverride, PassThroughFullBodyPose) == 0x000000, "Member 'PlayerAnimOverrideLayerInterface_C_FullBodyOverride::PassThroughFullBodyPose' has a wrong offset!");
static_assert(offsetof(PlayerAnimOverrideLayerInterface_C_FullBodyOverride, Param_FullBodyOverride) == 0x000010, "Member 'PlayerAnimOverrideLayerInterface_C_FullBodyOverride::Param_FullBodyOverride' has a wrong offset!");

// Function PlayerAnimOverrideLayerInterface.PlayerAnimOverrideLayerInterface_C.CharacterSkeletalControlPostLegIK
// 0x0020 (0x0020 - 0x0000)
struct PlayerAnimOverrideLayerInterface_C_CharacterSkeletalControlPostLegIK final
{
public:
	struct FPoseLink                              InPosePostLegIK;                                   // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              Param_CharacterSkeletalControlPostLegIK;           // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(PlayerAnimOverrideLayerInterface_C_CharacterSkeletalControlPostLegIK) == 0x000008, "Wrong alignment on PlayerAnimOverrideLayerInterface_C_CharacterSkeletalControlPostLegIK");
static_assert(sizeof(PlayerAnimOverrideLayerInterface_C_CharacterSkeletalControlPostLegIK) == 0x000020, "Wrong size on PlayerAnimOverrideLayerInterface_C_CharacterSkeletalControlPostLegIK");
static_assert(offsetof(PlayerAnimOverrideLayerInterface_C_CharacterSkeletalControlPostLegIK, InPosePostLegIK) == 0x000000, "Member 'PlayerAnimOverrideLayerInterface_C_CharacterSkeletalControlPostLegIK::InPosePostLegIK' has a wrong offset!");
static_assert(offsetof(PlayerAnimOverrideLayerInterface_C_CharacterSkeletalControlPostLegIK, Param_CharacterSkeletalControlPostLegIK) == 0x000010, "Member 'PlayerAnimOverrideLayerInterface_C_CharacterSkeletalControlPostLegIK::Param_CharacterSkeletalControlPostLegIK' has a wrong offset!");

}
