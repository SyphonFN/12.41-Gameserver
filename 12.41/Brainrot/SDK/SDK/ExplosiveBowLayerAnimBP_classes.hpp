#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ExplosiveBowLayerAnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C
// 0x2680 (0x29E0 - 0x0360)
class UExplosiveBowLayerAnimBP_C final : public UFortItemLayerAnimInstance_ExplosiveBow
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0360(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root_34;                             // 0x0368(0x0030)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_17;                  // 0x0398(0x0070)()
	struct FAnimNode_Root                         AnimGraphNode_Root_33;                             // 0x0408(0x0030)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_16;                  // 0x0438(0x0070)()
	struct FAnimNode_Root                         AnimGraphNode_Root_32;                             // 0x04A8(0x0030)()
	float                                         Pitch;                                             // 0x04D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Yaw;                                               // 0x04DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AimOffsetAlpha;                                    // 0x04E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C03[0x4];                                     // 0x04E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_15;                  // 0x04E8(0x0070)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_14;                  // 0x0558(0x0070)()
	struct FAnimNode_Root                         AnimGraphNode_Root_31;                             // 0x05C8(0x0030)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_13;                  // 0x05F8(0x0070)()
	struct FAnimNode_Root                         AnimGraphNode_Root_30;                             // 0x0668(0x0030)()
	struct FAnimNode_Root                         AnimGraphNode_Root_29;                             // 0x0698(0x0030)()
	struct FAnimNode_Root                         AnimGraphNode_Root_28;                             // 0x06C8(0x0030)()
	struct FAnimNode_Root                         AnimGraphNode_Root_27;                             // 0x06F8(0x0030)()
	struct FAnimNode_Root                         AnimGraphNode_Root_26;                             // 0x0728(0x0030)()
	struct FAnimNode_Root                         AnimGraphNode_Root_25;                             // 0x0758(0x0030)()
	struct FFortAnimInput_AdjustedAim             InputParam;                                        // 0x0788(0x0240)(NoDestructor)
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_12;                  // 0x09C8(0x0070)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_1;                  // 0x0A38(0x00E0)()
	struct FAnimNode_RotationOffsetBlendSpace     AnimGraphNode_RotationOffsetBlendSpace;            // 0x0B18(0x0188)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_16;                   // 0x0CA0(0x0078)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive;                       // 0x0D18(0x00C8)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer;                    // 0x0DE0(0x00E0)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum_1;                   // 0x0EC0(0x00B0)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum;                     // 0x0F70(0x00B0)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_15;                   // 0x1020(0x0078)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_8;                   // 0x1098(0x00A0)()
	struct FAnimNode_Root                         AnimGraphNode_Root_24;                             // 0x1138(0x0030)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_11;                  // 0x1168(0x0070)()
	struct FAnimNode_Root                         AnimGraphNode_Root_23;                             // 0x11D8(0x0030)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_10;                  // 0x1208(0x0070)()
	struct FAnimNode_Root                         AnimGraphNode_Root_22;                             // 0x1278(0x0030)()
	struct FAnimNode_Root                         AnimGraphNode_Root_21;                             // 0x12A8(0x0030)()
	struct FAnimNode_Root                         AnimGraphNode_Root_20;                             // 0x12D8(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_14;                   // 0x1308(0x0078)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_7;                   // 0x1380(0x00A0)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_13;                   // 0x1420(0x0078)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_6;                   // 0x1498(0x00A0)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_12;                   // 0x1538(0x0078)()
	struct FAnimNode_Root                         AnimGraphNode_Root_19;                             // 0x15B0(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_11;                   // 0x15E0(0x0078)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_5;                   // 0x1658(0x00A0)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_10;                   // 0x16F8(0x0078)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_4;                   // 0x1770(0x00A0)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_9;                    // 0x1810(0x0078)()
	struct FAnimNode_Root                         AnimGraphNode_Root_18;                             // 0x1888(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_8;                    // 0x18B8(0x0078)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_3;                   // 0x1930(0x00A0)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_7;                    // 0x19D0(0x0078)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_2;                   // 0x1A48(0x00A0)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_6;                    // 0x1AE8(0x0078)()
	struct FAnimNode_Root                         AnimGraphNode_Root_17;                             // 0x1B60(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_5;                    // 0x1B90(0x0078)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_1;                   // 0x1C08(0x00A0)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_4;                    // 0x1CA8(0x0078)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x1D20(0x00A0)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x1DC0(0x0078)()
	struct FAnimNode_Root                         AnimGraphNode_Root_16;                             // 0x1E38(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x1E68(0x0078)()
	struct FAnimNode_Root                         AnimGraphNode_Root_15;                             // 0x1EE0(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x1F10(0x0078)()
	struct FAnimNode_Root                         AnimGraphNode_Root_14;                             // 0x1F88(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x1FB8(0x0078)()
	struct FAnimNode_Root                         AnimGraphNode_Root_13;                             // 0x2030(0x0030)()
	struct FAnimNode_Root                         AnimGraphNode_Root_12;                             // 0x2060(0x0030)()
	struct FAnimNode_Root                         AnimGraphNode_Root_11;                             // 0x2090(0x0030)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_9;                   // 0x20C0(0x0070)()
	struct FAnimNode_Root                         AnimGraphNode_Root_10;                             // 0x2130(0x0030)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_8;                   // 0x2160(0x0070)()
	struct FAnimNode_Root                         AnimGraphNode_Root_9;                              // 0x21D0(0x0030)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_7;                   // 0x2200(0x0070)()
	struct FAnimNode_Root                         AnimGraphNode_Root_8;                              // 0x2270(0x0030)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_6;                   // 0x22A0(0x0070)()
	struct FAnimNode_Root                         AnimGraphNode_Root_7;                              // 0x2310(0x0030)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_5;                   // 0x2340(0x0070)()
	struct FAnimNode_Root                         AnimGraphNode_Root_6;                              // 0x23B0(0x0030)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_4;                   // 0x23E0(0x0070)()
	struct FAnimNode_Root                         AnimGraphNode_Root_5;                              // 0x2450(0x0030)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_3;                   // 0x2480(0x0070)()
	struct FAnimNode_Root                         AnimGraphNode_Root_4;                              // 0x24F0(0x0030)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_2;                   // 0x2520(0x0070)()
	struct FAnimNode_Root                         AnimGraphNode_Root_3;                              // 0x2590(0x0030)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_1;                   // 0x25C0(0x0070)()
	struct FAnimNode_Root                         AnimGraphNode_Root_2;                              // 0x2630(0x0030)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x2660(0x0070)()
	struct FAnimNode_Root                         AnimGraphNode_Root_1;                              // 0x26D0(0x0030)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_SubInput;                            // 0x2700(0x0070)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x2770(0x0030)()
	struct FFortAnimInput_AdjustedAim             AdjustedAim;                                       // 0x27A0(0x0240)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void ExecuteUbergraph_ExplosiveBowLayerAnimBP(int32 EntryPoint);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ExplosiveBowLayerAnimBP_AnimGraphNode_BlendSpacePlayer_11A315AA4DFC9DAEFD15619E18677637();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ExplosiveBowLayerAnimBP_AnimGraphNode_RotationOffsetBlendSpace_4FE1ED204DA63B600CCE7AB1BB6028C4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ExplosiveBowLayerAnimBP_AnimGraphNode_BlendSpacePlayer_EDF172954C1F699670096999A0687B8B();
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void ItemRelaxedEntry(const struct FPoseLink& InPoseRelaxedEntry, struct FPoseLink* Param_ItemRelaxedEntry);
	void ItemLowerBodyJogPostPivot(const struct FPoseLink& InPoseLowerBodyJogPostPivot, struct FPoseLink* Param_ItemLowerBodyJogPostPivot);
	void ItemLowerBodyJogPrePivot(const struct FPoseLink& InPoseLowerBodyJogPrePivot, struct FPoseLink* Param_ItemLowerBodyJogPrePivot);
	void ItemLowerBodyJogStop(const struct FPoseLink& InPoseLowerBodyJogStop, struct FPoseLink* Param_ItemLowerBodyJogStop);
	void ItemLowerBodyJogStart(const struct FPoseLink& InPoseLowerBodyJogStart, struct FPoseLink* Param_ItemLowerBodyJogStart);
	void ItemLowerBodyLeanAdditive(const struct FPoseLink& InPoseLowerBodyLeanAdditive, struct FPoseLink* Param_ItemLowerBodyLeanAdditive);
	void ItemLowerBodyMovement(const struct FPoseLink& InPoseLowerBodyMovement, struct FPoseLink* Param_ItemLowerBodyMovement);
	void ItemJogPostPivotAdditive(const struct FPoseLink& InPosePostPivotAdditive, struct FPoseLink* Param_ItemJogPostPivotAdditive);
	void ItemJogPrePivotAdditive(const struct FPoseLink& InPosePrePivotAdditive, struct FPoseLink* Param_ItemJogPrePivotAdditive);
	void ItemJogStopAdditive(const struct FPoseLink& InPoseJogStopAdditive, struct FPoseLink* Param_ItemJogStopAdditive);
	void ItemJogStartAdditive(const struct FPoseLink& InPoseJogStartAdditive, struct FPoseLink* Param_ItemJogStartAdditive);
	void ItemFlyModeLoopAdditive(struct FPoseLink* Param_ItemFlyModeLoopAdditive);
	void ItemFlyModeStartAdditive(struct FPoseLink* Param_ItemFlyModeStartAdditive);
	void ItemZipLineStartAdditive(struct FPoseLink* Param_ItemZipLineStartAdditive);
	void ItemJetPackJumpAdditive(struct FPoseLink* Param_ItemJetPackJumpAdditive);
	void ItemJetPackStartAdditive(struct FPoseLink* Param_ItemJetPackStartAdditive);
	void ItemFallLandAdditive(struct FPoseLink* Param_ItemFallLandAdditive);
	void ItemFallAdditive(struct FPoseLink* Param_ItemFallAdditive);
	void ItemJumpLoopAdditive(struct FPoseLink* Param_ItemJumpLoopAdditive);
	void ItemJumpUpAdditive(struct FPoseLink* Param_ItemJumpUpAdditive);
	void ItemSlopeSliding(struct FPoseLink* Param_ItemSlopeSliding);
	void ItemCrouchTurningAdditive(struct FPoseLink* Param_ItemCrouchTurningAdditive);
	void ItemIdleAdditive(const struct FPoseLink& InPoseIdleAdditive, struct FPoseLink* Param_ItemIdleAdditive);
	void ItemFullBodySprint(const struct FPoseLink& InPoseSprint, struct FPoseLink* Param_ItemFullBodySprint);
	void ItemUpperBody(const struct FPoseLink& InPoseUpperBody, const struct FFortAnimInput_AdjustedAim& Param_InputParam, struct FPoseLink* Param_ItemUpperBody);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ExplosiveBowLayerAnimBP_C">();
	}
	static class UExplosiveBowLayerAnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UExplosiveBowLayerAnimBP_C>();
	}
};
static_assert(alignof(UExplosiveBowLayerAnimBP_C) == 0x000010, "Wrong alignment on UExplosiveBowLayerAnimBP_C");
static_assert(sizeof(UExplosiveBowLayerAnimBP_C) == 0x0029E0, "Wrong size on UExplosiveBowLayerAnimBP_C");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, UberGraphFrame) == 0x000360, "Member 'UExplosiveBowLayerAnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_Root_34) == 0x000368, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_Root_34' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_LinkedInputPose_17) == 0x000398, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_LinkedInputPose_17' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_Root_33) == 0x000408, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_Root_33' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_LinkedInputPose_16) == 0x000438, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_LinkedInputPose_16' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_Root_32) == 0x0004A8, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_Root_32' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, Pitch) == 0x0004D8, "Member 'UExplosiveBowLayerAnimBP_C::Pitch' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, Yaw) == 0x0004DC, "Member 'UExplosiveBowLayerAnimBP_C::Yaw' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AimOffsetAlpha) == 0x0004E0, "Member 'UExplosiveBowLayerAnimBP_C::AimOffsetAlpha' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_LinkedInputPose_15) == 0x0004E8, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_LinkedInputPose_15' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_LinkedInputPose_14) == 0x000558, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_LinkedInputPose_14' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_Root_31) == 0x0005C8, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_Root_31' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_LinkedInputPose_13) == 0x0005F8, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_LinkedInputPose_13' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_Root_30) == 0x000668, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_Root_30' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_Root_29) == 0x000698, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_Root_29' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_Root_28) == 0x0006C8, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_Root_28' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_Root_27) == 0x0006F8, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_Root_27' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_Root_26) == 0x000728, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_Root_26' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_Root_25) == 0x000758, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_Root_25' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, InputParam) == 0x000788, "Member 'UExplosiveBowLayerAnimBP_C::InputParam' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_LinkedInputPose_12) == 0x0009C8, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_LinkedInputPose_12' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_BlendSpacePlayer_1) == 0x000A38, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_BlendSpacePlayer_1' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_RotationOffsetBlendSpace) == 0x000B18, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_RotationOffsetBlendSpace' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_SequencePlayer_16) == 0x000CA0, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_SequencePlayer_16' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_ApplyAdditive) == 0x000D18, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_ApplyAdditive' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_BlendSpacePlayer) == 0x000DE0, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_BlendSpacePlayer' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_BlendListByEnum_1) == 0x000EC0, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_BlendListByEnum_1' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_BlendListByEnum) == 0x000F70, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_BlendListByEnum' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_SequencePlayer_15) == 0x001020, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_SequencePlayer_15' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_BlendListByBool_8) == 0x001098, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_BlendListByBool_8' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_Root_24) == 0x001138, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_Root_24' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_LinkedInputPose_11) == 0x001168, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_LinkedInputPose_11' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_Root_23) == 0x0011D8, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_Root_23' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_LinkedInputPose_10) == 0x001208, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_LinkedInputPose_10' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_Root_22) == 0x001278, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_Root_22' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_Root_21) == 0x0012A8, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_Root_21' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_Root_20) == 0x0012D8, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_Root_20' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_SequencePlayer_14) == 0x001308, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_SequencePlayer_14' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_BlendListByBool_7) == 0x001380, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_BlendListByBool_7' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_SequencePlayer_13) == 0x001420, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_SequencePlayer_13' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_BlendListByBool_6) == 0x001498, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_BlendListByBool_6' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_SequencePlayer_12) == 0x001538, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_SequencePlayer_12' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_Root_19) == 0x0015B0, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_Root_19' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_SequencePlayer_11) == 0x0015E0, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_SequencePlayer_11' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_BlendListByBool_5) == 0x001658, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_BlendListByBool_5' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_SequencePlayer_10) == 0x0016F8, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_SequencePlayer_10' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_BlendListByBool_4) == 0x001770, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_BlendListByBool_4' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_SequencePlayer_9) == 0x001810, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_SequencePlayer_9' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_Root_18) == 0x001888, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_Root_18' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_SequencePlayer_8) == 0x0018B8, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_SequencePlayer_8' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_BlendListByBool_3) == 0x001930, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_BlendListByBool_3' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_SequencePlayer_7) == 0x0019D0, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_SequencePlayer_7' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_BlendListByBool_2) == 0x001A48, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_BlendListByBool_2' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_SequencePlayer_6) == 0x001AE8, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_SequencePlayer_6' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_Root_17) == 0x001B60, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_Root_17' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_SequencePlayer_5) == 0x001B90, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_SequencePlayer_5' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_BlendListByBool_1) == 0x001C08, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_BlendListByBool_1' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_SequencePlayer_4) == 0x001CA8, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_SequencePlayer_4' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_BlendListByBool) == 0x001D20, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_SequencePlayer_3) == 0x001DC0, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_Root_16) == 0x001E38, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_Root_16' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_SequencePlayer_2) == 0x001E68, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_Root_15) == 0x001EE0, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_Root_15' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_SequencePlayer_1) == 0x001F10, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_Root_14) == 0x001F88, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_Root_14' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_SequencePlayer) == 0x001FB8, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_Root_13) == 0x002030, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_Root_13' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_Root_12) == 0x002060, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_Root_12' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_Root_11) == 0x002090, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_Root_11' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_LinkedInputPose_9) == 0x0020C0, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_LinkedInputPose_9' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_Root_10) == 0x002130, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_Root_10' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_LinkedInputPose_8) == 0x002160, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_LinkedInputPose_8' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_Root_9) == 0x0021D0, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_Root_9' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_LinkedInputPose_7) == 0x002200, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_LinkedInputPose_7' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_Root_8) == 0x002270, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_Root_8' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_LinkedInputPose_6) == 0x0022A0, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_LinkedInputPose_6' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_Root_7) == 0x002310, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_Root_7' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_LinkedInputPose_5) == 0x002340, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_LinkedInputPose_5' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_Root_6) == 0x0023B0, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_Root_6' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_LinkedInputPose_4) == 0x0023E0, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_LinkedInputPose_4' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_Root_5) == 0x002450, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_Root_5' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_LinkedInputPose_3) == 0x002480, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_LinkedInputPose_3' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_Root_4) == 0x0024F0, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_Root_4' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_LinkedInputPose_2) == 0x002520, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_LinkedInputPose_2' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_Root_3) == 0x002590, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_Root_3' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_LinkedInputPose_1) == 0x0025C0, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_LinkedInputPose_1' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_Root_2) == 0x002630, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_Root_2' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_LinkedInputPose) == 0x002660, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_LinkedInputPose' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_Root_1) == 0x0026D0, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_Root_1' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_SubInput) == 0x002700, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_SubInput' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AnimGraphNode_Root) == 0x002770, "Member 'UExplosiveBowLayerAnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UExplosiveBowLayerAnimBP_C, AdjustedAim) == 0x0027A0, "Member 'UExplosiveBowLayerAnimBP_C::AdjustedAim' has a wrong offset!");

}
