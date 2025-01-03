#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: F_MED_Photographer_Jacket_CtrlRig

#include "Basic.hpp"

#include "ControlRig_structs.hpp"
#include "ControlRig_classes.hpp"


namespace SDK
{

// ControlRigBlueprintGeneratedClass F_MED_Photographer_Jacket_CtrlRig.F_MED_Photographer_Jacket_CtrlRig_C
// 0x0FF0 (0x1330 - 0x0340)
class UF_MED_Photographer_Jacket_CtrlRig_C final : public UControlRig
{
public:
	struct FRigUnit_BeginExecution                BeginExecution;                                    // 0x0340(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                         Pad_6D0A[0x8];                                     // 0x0368(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRigUnit_GetRelativeBoneTransform      GetRelativeBoneTransform;                          // 0x0370(0x0070)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionToEuler         MathQuaternionToEuler_0_0_0_0;                     // 0x03E0(0x0040)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathFloatAbs                  MathFloatAbs;                                      // 0x0420(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathFloatRemap                MathFloatRemap_0_0_0_0_0_0;                        // 0x0448(0x0040)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                         Pad_6D0B[0x8];                                     // 0x0488(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRigUnit_MathQuaternionFromEuler       MathQuaternionFromEuler_1;                         // 0x0490(0x0040)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetRelativeBoneTransform      GetRelativeBoneTransform_0;                        // 0x04D0(0x0070)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionToEuler         MathQuaternionToEuler_0_0_0_0_0;                   // 0x0540(0x0040)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathFloatRemap                MathFloatRemap_0_0_0_0_0_0_0;                      // 0x0580(0x0040)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathFloatAbs                  MathFloatAbs_0;                                    // 0x05C0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_ModifyBoneTransforms          ModifyBoneTransforms;                              // 0x05E8(0x0058)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_ModifyBoneTransforms          ModifyBoneTransforms_0;                            // 0x0640(0x0058)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                         Pad_6D0C[0x8];                                     // 0x0698(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRigUnit_MathQuaternionFromEuler       MathQuaternionFromEuler_1_0;                       // 0x06A0(0x0040)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_ModifyBoneTransforms          ModifyBoneTransforms_0_0;                          // 0x06E0(0x0058)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                         Pad_6D0D[0x8];                                     // 0x0738(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRigUnit_MathQuaternionFromEuler       MathQuaternionFromEuler_1_0_0;                     // 0x0740(0x0040)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetRelativeBoneTransform      GetRelativeBoneTransform_0_0;                      // 0x0780(0x0070)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionToEuler         MathQuaternionToEuler_0_0_0_0_0_0;                 // 0x07F0(0x0040)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathFloatRemap                MathFloatRemap_0_0_0_0_0_0_0_0;                    // 0x0830(0x0040)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathFloatAbs                  MathFloatAbs_0_0;                                  // 0x0870(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_ModifyBoneTransforms          ModifyBoneTransforms_0_0_0;                        // 0x0898(0x0058)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionFromEuler       MathQuaternionFromEuler_1_0_0_0;                   // 0x08F0(0x0040)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathVectorAdd                 MathVectorAdd;                                     // 0x0930(0x0048)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         Crouching;                                         // 0x0978(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D0E[0x4];                                     // 0x097C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRigUnit_MathVectorMul                 MathVectorMul;                                     // 0x0980(0x0048)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathVectorMul                 MathVectorMul_0;                                   // 0x09C8(0x0048)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathVectorAdd                 MathVectorAdd_0;                                   // 0x0A10(0x0048)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_ModifyBoneTransforms          ModifyBoneTransforms_1;                            // 0x0A58(0x0058)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionFromEuler       MathQuaternionFromEuler_1_1;                       // 0x0AB0(0x0040)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionFromEuler       MathQuaternionFromEuler_1_0_0_0_0;                 // 0x0AF0(0x0040)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         NotDancing;                                        // 0x0B30(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D0F[0x4];                                     // 0x0B34(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRigUnit_MathFloatMul                  MathFloatMul;                                      // 0x0B38(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                         Pad_6D10[0x8];                                     // 0x0B68(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRigUnit_GetBoneTransform              GetBoneTransform_1_0_0_0;                          // 0x0B70(0x0070)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetBoneTransform              GetBoneTransform_0_0_0_0;                          // 0x0BE0(0x0070)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionGetAxis         MathQuaternionGetAxis_0_1_0_0;                     // 0x0C50(0x0040)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathVectorSub                 MathVectorSub_0_1_0_0;                             // 0x0C90(0x0048)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                         Pad_6D11[0x8];                                     // 0x0CD8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRigUnit_MathQuaternionFromTwoVectors  MathQuaternionFromTwoVectors_0_1_0_0;              // 0x0CE0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionMul             MathQuaternionMul_0_1_0_0;                         // 0x0D30(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_SetBoneRotation               SetBoneRotation_0_1_0_0;                           // 0x0D80(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathTransformTransformVector  MathTransformTransformVector_0_1_0_0;              // 0x0DD0(0x0070)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathVectorNegate              MathVectorNegate_0_0;                              // 0x0E40(0x0038)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                         Pad_6D12[0x8];                                     // 0x0E78(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRigUnit_DebugTransformMutable         DebugTransformMutable;                             // 0x0E80(0x00D0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetBoneTransform              GetBoneTransform_1_0_0_0_0;                        // 0x0F50(0x0070)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetBoneTransform              GetBoneTransform_0_0_0_0_0;                        // 0x0FC0(0x0070)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionGetAxis         MathQuaternionGetAxis_0_1_0_0_0;                   // 0x1030(0x0040)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathVectorSub                 MathVectorSub_0_1_0_0_0;                           // 0x1070(0x0048)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                         Pad_6D13[0x8];                                     // 0x10B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRigUnit_MathQuaternionFromTwoVectors  MathQuaternionFromTwoVectors_0_1_0_0_0;            // 0x10C0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionMul             MathQuaternionMul_0_1_0_0_0;                       // 0x1110(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_SetBoneRotation               SetBoneRotation_0_1_0_0_0;                         // 0x1160(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathTransformTransformVector  MathTransformTransformVector_0_1_0_0_0;            // 0x11B0(0x0070)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathVectorNegate              MathVectorNegate_0_0_0;                            // 0x1220(0x0038)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                         Pad_6D14[0x8];                                     // 0x1258(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRigUnit_DebugTransformMutable         DebugTransformMutable_0;                           // 0x1260(0x00D0)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"F_MED_Photographer_Jacket_CtrlRig_C">();
	}
	static class UF_MED_Photographer_Jacket_CtrlRig_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UF_MED_Photographer_Jacket_CtrlRig_C>();
	}
};
static_assert(alignof(UF_MED_Photographer_Jacket_CtrlRig_C) == 0x000010, "Wrong alignment on UF_MED_Photographer_Jacket_CtrlRig_C");
static_assert(sizeof(UF_MED_Photographer_Jacket_CtrlRig_C) == 0x001330, "Wrong size on UF_MED_Photographer_Jacket_CtrlRig_C");
static_assert(offsetof(UF_MED_Photographer_Jacket_CtrlRig_C, BeginExecution) == 0x000340, "Member 'UF_MED_Photographer_Jacket_CtrlRig_C::BeginExecution' has a wrong offset!");
static_assert(offsetof(UF_MED_Photographer_Jacket_CtrlRig_C, GetRelativeBoneTransform) == 0x000370, "Member 'UF_MED_Photographer_Jacket_CtrlRig_C::GetRelativeBoneTransform' has a wrong offset!");
static_assert(offsetof(UF_MED_Photographer_Jacket_CtrlRig_C, MathQuaternionToEuler_0_0_0_0) == 0x0003E0, "Member 'UF_MED_Photographer_Jacket_CtrlRig_C::MathQuaternionToEuler_0_0_0_0' has a wrong offset!");
static_assert(offsetof(UF_MED_Photographer_Jacket_CtrlRig_C, MathFloatAbs) == 0x000420, "Member 'UF_MED_Photographer_Jacket_CtrlRig_C::MathFloatAbs' has a wrong offset!");
static_assert(offsetof(UF_MED_Photographer_Jacket_CtrlRig_C, MathFloatRemap_0_0_0_0_0_0) == 0x000448, "Member 'UF_MED_Photographer_Jacket_CtrlRig_C::MathFloatRemap_0_0_0_0_0_0' has a wrong offset!");
static_assert(offsetof(UF_MED_Photographer_Jacket_CtrlRig_C, MathQuaternionFromEuler_1) == 0x000490, "Member 'UF_MED_Photographer_Jacket_CtrlRig_C::MathQuaternionFromEuler_1' has a wrong offset!");
static_assert(offsetof(UF_MED_Photographer_Jacket_CtrlRig_C, GetRelativeBoneTransform_0) == 0x0004D0, "Member 'UF_MED_Photographer_Jacket_CtrlRig_C::GetRelativeBoneTransform_0' has a wrong offset!");
static_assert(offsetof(UF_MED_Photographer_Jacket_CtrlRig_C, MathQuaternionToEuler_0_0_0_0_0) == 0x000540, "Member 'UF_MED_Photographer_Jacket_CtrlRig_C::MathQuaternionToEuler_0_0_0_0_0' has a wrong offset!");
static_assert(offsetof(UF_MED_Photographer_Jacket_CtrlRig_C, MathFloatRemap_0_0_0_0_0_0_0) == 0x000580, "Member 'UF_MED_Photographer_Jacket_CtrlRig_C::MathFloatRemap_0_0_0_0_0_0_0' has a wrong offset!");
static_assert(offsetof(UF_MED_Photographer_Jacket_CtrlRig_C, MathFloatAbs_0) == 0x0005C0, "Member 'UF_MED_Photographer_Jacket_CtrlRig_C::MathFloatAbs_0' has a wrong offset!");
static_assert(offsetof(UF_MED_Photographer_Jacket_CtrlRig_C, ModifyBoneTransforms) == 0x0005E8, "Member 'UF_MED_Photographer_Jacket_CtrlRig_C::ModifyBoneTransforms' has a wrong offset!");
static_assert(offsetof(UF_MED_Photographer_Jacket_CtrlRig_C, ModifyBoneTransforms_0) == 0x000640, "Member 'UF_MED_Photographer_Jacket_CtrlRig_C::ModifyBoneTransforms_0' has a wrong offset!");
static_assert(offsetof(UF_MED_Photographer_Jacket_CtrlRig_C, MathQuaternionFromEuler_1_0) == 0x0006A0, "Member 'UF_MED_Photographer_Jacket_CtrlRig_C::MathQuaternionFromEuler_1_0' has a wrong offset!");
static_assert(offsetof(UF_MED_Photographer_Jacket_CtrlRig_C, ModifyBoneTransforms_0_0) == 0x0006E0, "Member 'UF_MED_Photographer_Jacket_CtrlRig_C::ModifyBoneTransforms_0_0' has a wrong offset!");
static_assert(offsetof(UF_MED_Photographer_Jacket_CtrlRig_C, MathQuaternionFromEuler_1_0_0) == 0x000740, "Member 'UF_MED_Photographer_Jacket_CtrlRig_C::MathQuaternionFromEuler_1_0_0' has a wrong offset!");
static_assert(offsetof(UF_MED_Photographer_Jacket_CtrlRig_C, GetRelativeBoneTransform_0_0) == 0x000780, "Member 'UF_MED_Photographer_Jacket_CtrlRig_C::GetRelativeBoneTransform_0_0' has a wrong offset!");
static_assert(offsetof(UF_MED_Photographer_Jacket_CtrlRig_C, MathQuaternionToEuler_0_0_0_0_0_0) == 0x0007F0, "Member 'UF_MED_Photographer_Jacket_CtrlRig_C::MathQuaternionToEuler_0_0_0_0_0_0' has a wrong offset!");
static_assert(offsetof(UF_MED_Photographer_Jacket_CtrlRig_C, MathFloatRemap_0_0_0_0_0_0_0_0) == 0x000830, "Member 'UF_MED_Photographer_Jacket_CtrlRig_C::MathFloatRemap_0_0_0_0_0_0_0_0' has a wrong offset!");
static_assert(offsetof(UF_MED_Photographer_Jacket_CtrlRig_C, MathFloatAbs_0_0) == 0x000870, "Member 'UF_MED_Photographer_Jacket_CtrlRig_C::MathFloatAbs_0_0' has a wrong offset!");
static_assert(offsetof(UF_MED_Photographer_Jacket_CtrlRig_C, ModifyBoneTransforms_0_0_0) == 0x000898, "Member 'UF_MED_Photographer_Jacket_CtrlRig_C::ModifyBoneTransforms_0_0_0' has a wrong offset!");
static_assert(offsetof(UF_MED_Photographer_Jacket_CtrlRig_C, MathQuaternionFromEuler_1_0_0_0) == 0x0008F0, "Member 'UF_MED_Photographer_Jacket_CtrlRig_C::MathQuaternionFromEuler_1_0_0_0' has a wrong offset!");
static_assert(offsetof(UF_MED_Photographer_Jacket_CtrlRig_C, MathVectorAdd) == 0x000930, "Member 'UF_MED_Photographer_Jacket_CtrlRig_C::MathVectorAdd' has a wrong offset!");
static_assert(offsetof(UF_MED_Photographer_Jacket_CtrlRig_C, Crouching) == 0x000978, "Member 'UF_MED_Photographer_Jacket_CtrlRig_C::Crouching' has a wrong offset!");
static_assert(offsetof(UF_MED_Photographer_Jacket_CtrlRig_C, MathVectorMul) == 0x000980, "Member 'UF_MED_Photographer_Jacket_CtrlRig_C::MathVectorMul' has a wrong offset!");
static_assert(offsetof(UF_MED_Photographer_Jacket_CtrlRig_C, MathVectorMul_0) == 0x0009C8, "Member 'UF_MED_Photographer_Jacket_CtrlRig_C::MathVectorMul_0' has a wrong offset!");
static_assert(offsetof(UF_MED_Photographer_Jacket_CtrlRig_C, MathVectorAdd_0) == 0x000A10, "Member 'UF_MED_Photographer_Jacket_CtrlRig_C::MathVectorAdd_0' has a wrong offset!");
static_assert(offsetof(UF_MED_Photographer_Jacket_CtrlRig_C, ModifyBoneTransforms_1) == 0x000A58, "Member 'UF_MED_Photographer_Jacket_CtrlRig_C::ModifyBoneTransforms_1' has a wrong offset!");
static_assert(offsetof(UF_MED_Photographer_Jacket_CtrlRig_C, MathQuaternionFromEuler_1_1) == 0x000AB0, "Member 'UF_MED_Photographer_Jacket_CtrlRig_C::MathQuaternionFromEuler_1_1' has a wrong offset!");
static_assert(offsetof(UF_MED_Photographer_Jacket_CtrlRig_C, MathQuaternionFromEuler_1_0_0_0_0) == 0x000AF0, "Member 'UF_MED_Photographer_Jacket_CtrlRig_C::MathQuaternionFromEuler_1_0_0_0_0' has a wrong offset!");
static_assert(offsetof(UF_MED_Photographer_Jacket_CtrlRig_C, NotDancing) == 0x000B30, "Member 'UF_MED_Photographer_Jacket_CtrlRig_C::NotDancing' has a wrong offset!");
static_assert(offsetof(UF_MED_Photographer_Jacket_CtrlRig_C, MathFloatMul) == 0x000B38, "Member 'UF_MED_Photographer_Jacket_CtrlRig_C::MathFloatMul' has a wrong offset!");
static_assert(offsetof(UF_MED_Photographer_Jacket_CtrlRig_C, GetBoneTransform_1_0_0_0) == 0x000B70, "Member 'UF_MED_Photographer_Jacket_CtrlRig_C::GetBoneTransform_1_0_0_0' has a wrong offset!");
static_assert(offsetof(UF_MED_Photographer_Jacket_CtrlRig_C, GetBoneTransform_0_0_0_0) == 0x000BE0, "Member 'UF_MED_Photographer_Jacket_CtrlRig_C::GetBoneTransform_0_0_0_0' has a wrong offset!");
static_assert(offsetof(UF_MED_Photographer_Jacket_CtrlRig_C, MathQuaternionGetAxis_0_1_0_0) == 0x000C50, "Member 'UF_MED_Photographer_Jacket_CtrlRig_C::MathQuaternionGetAxis_0_1_0_0' has a wrong offset!");
static_assert(offsetof(UF_MED_Photographer_Jacket_CtrlRig_C, MathVectorSub_0_1_0_0) == 0x000C90, "Member 'UF_MED_Photographer_Jacket_CtrlRig_C::MathVectorSub_0_1_0_0' has a wrong offset!");
static_assert(offsetof(UF_MED_Photographer_Jacket_CtrlRig_C, MathQuaternionFromTwoVectors_0_1_0_0) == 0x000CE0, "Member 'UF_MED_Photographer_Jacket_CtrlRig_C::MathQuaternionFromTwoVectors_0_1_0_0' has a wrong offset!");
static_assert(offsetof(UF_MED_Photographer_Jacket_CtrlRig_C, MathQuaternionMul_0_1_0_0) == 0x000D30, "Member 'UF_MED_Photographer_Jacket_CtrlRig_C::MathQuaternionMul_0_1_0_0' has a wrong offset!");
static_assert(offsetof(UF_MED_Photographer_Jacket_CtrlRig_C, SetBoneRotation_0_1_0_0) == 0x000D80, "Member 'UF_MED_Photographer_Jacket_CtrlRig_C::SetBoneRotation_0_1_0_0' has a wrong offset!");
static_assert(offsetof(UF_MED_Photographer_Jacket_CtrlRig_C, MathTransformTransformVector_0_1_0_0) == 0x000DD0, "Member 'UF_MED_Photographer_Jacket_CtrlRig_C::MathTransformTransformVector_0_1_0_0' has a wrong offset!");
static_assert(offsetof(UF_MED_Photographer_Jacket_CtrlRig_C, MathVectorNegate_0_0) == 0x000E40, "Member 'UF_MED_Photographer_Jacket_CtrlRig_C::MathVectorNegate_0_0' has a wrong offset!");
static_assert(offsetof(UF_MED_Photographer_Jacket_CtrlRig_C, DebugTransformMutable) == 0x000E80, "Member 'UF_MED_Photographer_Jacket_CtrlRig_C::DebugTransformMutable' has a wrong offset!");
static_assert(offsetof(UF_MED_Photographer_Jacket_CtrlRig_C, GetBoneTransform_1_0_0_0_0) == 0x000F50, "Member 'UF_MED_Photographer_Jacket_CtrlRig_C::GetBoneTransform_1_0_0_0_0' has a wrong offset!");
static_assert(offsetof(UF_MED_Photographer_Jacket_CtrlRig_C, GetBoneTransform_0_0_0_0_0) == 0x000FC0, "Member 'UF_MED_Photographer_Jacket_CtrlRig_C::GetBoneTransform_0_0_0_0_0' has a wrong offset!");
static_assert(offsetof(UF_MED_Photographer_Jacket_CtrlRig_C, MathQuaternionGetAxis_0_1_0_0_0) == 0x001030, "Member 'UF_MED_Photographer_Jacket_CtrlRig_C::MathQuaternionGetAxis_0_1_0_0_0' has a wrong offset!");
static_assert(offsetof(UF_MED_Photographer_Jacket_CtrlRig_C, MathVectorSub_0_1_0_0_0) == 0x001070, "Member 'UF_MED_Photographer_Jacket_CtrlRig_C::MathVectorSub_0_1_0_0_0' has a wrong offset!");
static_assert(offsetof(UF_MED_Photographer_Jacket_CtrlRig_C, MathQuaternionFromTwoVectors_0_1_0_0_0) == 0x0010C0, "Member 'UF_MED_Photographer_Jacket_CtrlRig_C::MathQuaternionFromTwoVectors_0_1_0_0_0' has a wrong offset!");
static_assert(offsetof(UF_MED_Photographer_Jacket_CtrlRig_C, MathQuaternionMul_0_1_0_0_0) == 0x001110, "Member 'UF_MED_Photographer_Jacket_CtrlRig_C::MathQuaternionMul_0_1_0_0_0' has a wrong offset!");
static_assert(offsetof(UF_MED_Photographer_Jacket_CtrlRig_C, SetBoneRotation_0_1_0_0_0) == 0x001160, "Member 'UF_MED_Photographer_Jacket_CtrlRig_C::SetBoneRotation_0_1_0_0_0' has a wrong offset!");
static_assert(offsetof(UF_MED_Photographer_Jacket_CtrlRig_C, MathTransformTransformVector_0_1_0_0_0) == 0x0011B0, "Member 'UF_MED_Photographer_Jacket_CtrlRig_C::MathTransformTransformVector_0_1_0_0_0' has a wrong offset!");
static_assert(offsetof(UF_MED_Photographer_Jacket_CtrlRig_C, MathVectorNegate_0_0_0) == 0x001220, "Member 'UF_MED_Photographer_Jacket_CtrlRig_C::MathVectorNegate_0_0_0' has a wrong offset!");
static_assert(offsetof(UF_MED_Photographer_Jacket_CtrlRig_C, DebugTransformMutable_0) == 0x001260, "Member 'UF_MED_Photographer_Jacket_CtrlRig_C::DebugTransformMutable_0' has a wrong offset!");

}

