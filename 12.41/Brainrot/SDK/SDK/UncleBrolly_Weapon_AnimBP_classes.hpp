#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UncleBrolly_Weapon_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "MantisRuntime_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass UncleBrolly_Weapon_AnimBP.UncleBrolly_Weapon_AnimBP_C
// 0x0E10 (0x10B0 - 0x02A0)
class UUncleBrolly_Weapon_AnimBP_C final : public UUncleBrollyWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x02A8(0x0030)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_16;                 // 0x02D8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_15;                 // 0x0300(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_14;                 // 0x0328(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_13;                 // 0x0350(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_12;                 // 0x0378(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_11;                 // 0x03A0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_10;                 // 0x03C8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_9;                  // 0x03F0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_8;                  // 0x0418(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_7;                  // 0x0440(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_6;                  // 0x0468(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_5;                  // 0x0490(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;                  // 0x04B8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x04E0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x0508(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x0530(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x0558(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_9;                    // 0x0580(0x0078)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_6;                       // 0x05F8(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_8;                    // 0x0628(0x0078)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_5;                       // 0x06A0(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_7;                    // 0x06D0(0x0078)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_4;                       // 0x0748(0x0030)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_2;                   // 0x0778(0x00A0)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_6;                    // 0x0818(0x0078)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_5;                    // 0x0890(0x0078)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x0908(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_4;                    // 0x0938(0x0078)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_1;                   // 0x09B0(0x00A0)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x0A50(0x0078)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x0AC8(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x0AF8(0x0078)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x0B70(0x00A0)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x0C10(0x0078)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x0C88(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0CB8(0x0078)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x0D30(0x0030)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x0D60(0x00B0)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x0E10(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0E30(0x0020)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;                        // 0x0E50(0x0108)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0F58(0x0048)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x0FA0(0x0108)()
	bool                                          BlockAnimRule;                                     // 0x10A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_UncleBrolly_Weapon_AnimBP(int32 EntryPoint);
	void AnimGraph(struct FPoseLink* Param_AnimGraph);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UncleBrolly_Weapon_AnimBP_C">();
	}
	static class UUncleBrolly_Weapon_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUncleBrolly_Weapon_AnimBP_C>();
	}
};
static_assert(alignof(UUncleBrolly_Weapon_AnimBP_C) == 0x000010, "Wrong alignment on UUncleBrolly_Weapon_AnimBP_C");
static_assert(sizeof(UUncleBrolly_Weapon_AnimBP_C) == 0x0010B0, "Wrong size on UUncleBrolly_Weapon_AnimBP_C");
static_assert(offsetof(UUncleBrolly_Weapon_AnimBP_C, UberGraphFrame) == 0x0002A0, "Member 'UUncleBrolly_Weapon_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUncleBrolly_Weapon_AnimBP_C, AnimGraphNode_Root) == 0x0002A8, "Member 'UUncleBrolly_Weapon_AnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UUncleBrolly_Weapon_AnimBP_C, AnimGraphNode_TransitionResult_16) == 0x0002D8, "Member 'UUncleBrolly_Weapon_AnimBP_C::AnimGraphNode_TransitionResult_16' has a wrong offset!");
static_assert(offsetof(UUncleBrolly_Weapon_AnimBP_C, AnimGraphNode_TransitionResult_15) == 0x000300, "Member 'UUncleBrolly_Weapon_AnimBP_C::AnimGraphNode_TransitionResult_15' has a wrong offset!");
static_assert(offsetof(UUncleBrolly_Weapon_AnimBP_C, AnimGraphNode_TransitionResult_14) == 0x000328, "Member 'UUncleBrolly_Weapon_AnimBP_C::AnimGraphNode_TransitionResult_14' has a wrong offset!");
static_assert(offsetof(UUncleBrolly_Weapon_AnimBP_C, AnimGraphNode_TransitionResult_13) == 0x000350, "Member 'UUncleBrolly_Weapon_AnimBP_C::AnimGraphNode_TransitionResult_13' has a wrong offset!");
static_assert(offsetof(UUncleBrolly_Weapon_AnimBP_C, AnimGraphNode_TransitionResult_12) == 0x000378, "Member 'UUncleBrolly_Weapon_AnimBP_C::AnimGraphNode_TransitionResult_12' has a wrong offset!");
static_assert(offsetof(UUncleBrolly_Weapon_AnimBP_C, AnimGraphNode_TransitionResult_11) == 0x0003A0, "Member 'UUncleBrolly_Weapon_AnimBP_C::AnimGraphNode_TransitionResult_11' has a wrong offset!");
static_assert(offsetof(UUncleBrolly_Weapon_AnimBP_C, AnimGraphNode_TransitionResult_10) == 0x0003C8, "Member 'UUncleBrolly_Weapon_AnimBP_C::AnimGraphNode_TransitionResult_10' has a wrong offset!");
static_assert(offsetof(UUncleBrolly_Weapon_AnimBP_C, AnimGraphNode_TransitionResult_9) == 0x0003F0, "Member 'UUncleBrolly_Weapon_AnimBP_C::AnimGraphNode_TransitionResult_9' has a wrong offset!");
static_assert(offsetof(UUncleBrolly_Weapon_AnimBP_C, AnimGraphNode_TransitionResult_8) == 0x000418, "Member 'UUncleBrolly_Weapon_AnimBP_C::AnimGraphNode_TransitionResult_8' has a wrong offset!");
static_assert(offsetof(UUncleBrolly_Weapon_AnimBP_C, AnimGraphNode_TransitionResult_7) == 0x000440, "Member 'UUncleBrolly_Weapon_AnimBP_C::AnimGraphNode_TransitionResult_7' has a wrong offset!");
static_assert(offsetof(UUncleBrolly_Weapon_AnimBP_C, AnimGraphNode_TransitionResult_6) == 0x000468, "Member 'UUncleBrolly_Weapon_AnimBP_C::AnimGraphNode_TransitionResult_6' has a wrong offset!");
static_assert(offsetof(UUncleBrolly_Weapon_AnimBP_C, AnimGraphNode_TransitionResult_5) == 0x000490, "Member 'UUncleBrolly_Weapon_AnimBP_C::AnimGraphNode_TransitionResult_5' has a wrong offset!");
static_assert(offsetof(UUncleBrolly_Weapon_AnimBP_C, AnimGraphNode_TransitionResult_4) == 0x0004B8, "Member 'UUncleBrolly_Weapon_AnimBP_C::AnimGraphNode_TransitionResult_4' has a wrong offset!");
static_assert(offsetof(UUncleBrolly_Weapon_AnimBP_C, AnimGraphNode_TransitionResult_3) == 0x0004E0, "Member 'UUncleBrolly_Weapon_AnimBP_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UUncleBrolly_Weapon_AnimBP_C, AnimGraphNode_TransitionResult_2) == 0x000508, "Member 'UUncleBrolly_Weapon_AnimBP_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UUncleBrolly_Weapon_AnimBP_C, AnimGraphNode_TransitionResult_1) == 0x000530, "Member 'UUncleBrolly_Weapon_AnimBP_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UUncleBrolly_Weapon_AnimBP_C, AnimGraphNode_TransitionResult) == 0x000558, "Member 'UUncleBrolly_Weapon_AnimBP_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UUncleBrolly_Weapon_AnimBP_C, AnimGraphNode_SequencePlayer_9) == 0x000580, "Member 'UUncleBrolly_Weapon_AnimBP_C::AnimGraphNode_SequencePlayer_9' has a wrong offset!");
static_assert(offsetof(UUncleBrolly_Weapon_AnimBP_C, AnimGraphNode_StateResult_6) == 0x0005F8, "Member 'UUncleBrolly_Weapon_AnimBP_C::AnimGraphNode_StateResult_6' has a wrong offset!");
static_assert(offsetof(UUncleBrolly_Weapon_AnimBP_C, AnimGraphNode_SequencePlayer_8) == 0x000628, "Member 'UUncleBrolly_Weapon_AnimBP_C::AnimGraphNode_SequencePlayer_8' has a wrong offset!");
static_assert(offsetof(UUncleBrolly_Weapon_AnimBP_C, AnimGraphNode_StateResult_5) == 0x0006A0, "Member 'UUncleBrolly_Weapon_AnimBP_C::AnimGraphNode_StateResult_5' has a wrong offset!");
static_assert(offsetof(UUncleBrolly_Weapon_AnimBP_C, AnimGraphNode_SequencePlayer_7) == 0x0006D0, "Member 'UUncleBrolly_Weapon_AnimBP_C::AnimGraphNode_SequencePlayer_7' has a wrong offset!");
static_assert(offsetof(UUncleBrolly_Weapon_AnimBP_C, AnimGraphNode_StateResult_4) == 0x000748, "Member 'UUncleBrolly_Weapon_AnimBP_C::AnimGraphNode_StateResult_4' has a wrong offset!");
static_assert(offsetof(UUncleBrolly_Weapon_AnimBP_C, AnimGraphNode_BlendListByBool_2) == 0x000778, "Member 'UUncleBrolly_Weapon_AnimBP_C::AnimGraphNode_BlendListByBool_2' has a wrong offset!");
static_assert(offsetof(UUncleBrolly_Weapon_AnimBP_C, AnimGraphNode_SequencePlayer_6) == 0x000818, "Member 'UUncleBrolly_Weapon_AnimBP_C::AnimGraphNode_SequencePlayer_6' has a wrong offset!");
static_assert(offsetof(UUncleBrolly_Weapon_AnimBP_C, AnimGraphNode_SequencePlayer_5) == 0x000890, "Member 'UUncleBrolly_Weapon_AnimBP_C::AnimGraphNode_SequencePlayer_5' has a wrong offset!");
static_assert(offsetof(UUncleBrolly_Weapon_AnimBP_C, AnimGraphNode_StateResult_3) == 0x000908, "Member 'UUncleBrolly_Weapon_AnimBP_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UUncleBrolly_Weapon_AnimBP_C, AnimGraphNode_SequencePlayer_4) == 0x000938, "Member 'UUncleBrolly_Weapon_AnimBP_C::AnimGraphNode_SequencePlayer_4' has a wrong offset!");
static_assert(offsetof(UUncleBrolly_Weapon_AnimBP_C, AnimGraphNode_BlendListByBool_1) == 0x0009B0, "Member 'UUncleBrolly_Weapon_AnimBP_C::AnimGraphNode_BlendListByBool_1' has a wrong offset!");
static_assert(offsetof(UUncleBrolly_Weapon_AnimBP_C, AnimGraphNode_SequencePlayer_3) == 0x000A50, "Member 'UUncleBrolly_Weapon_AnimBP_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UUncleBrolly_Weapon_AnimBP_C, AnimGraphNode_StateResult_2) == 0x000AC8, "Member 'UUncleBrolly_Weapon_AnimBP_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UUncleBrolly_Weapon_AnimBP_C, AnimGraphNode_SequencePlayer_2) == 0x000AF8, "Member 'UUncleBrolly_Weapon_AnimBP_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UUncleBrolly_Weapon_AnimBP_C, AnimGraphNode_BlendListByBool) == 0x000B70, "Member 'UUncleBrolly_Weapon_AnimBP_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UUncleBrolly_Weapon_AnimBP_C, AnimGraphNode_SequencePlayer_1) == 0x000C10, "Member 'UUncleBrolly_Weapon_AnimBP_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UUncleBrolly_Weapon_AnimBP_C, AnimGraphNode_StateResult_1) == 0x000C88, "Member 'UUncleBrolly_Weapon_AnimBP_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UUncleBrolly_Weapon_AnimBP_C, AnimGraphNode_SequencePlayer) == 0x000CB8, "Member 'UUncleBrolly_Weapon_AnimBP_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UUncleBrolly_Weapon_AnimBP_C, AnimGraphNode_StateResult) == 0x000D30, "Member 'UUncleBrolly_Weapon_AnimBP_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UUncleBrolly_Weapon_AnimBP_C, AnimGraphNode_StateMachine) == 0x000D60, "Member 'UUncleBrolly_Weapon_AnimBP_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UUncleBrolly_Weapon_AnimBP_C, AnimGraphNode_LocalToComponentSpace) == 0x000E10, "Member 'UUncleBrolly_Weapon_AnimBP_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UUncleBrolly_Weapon_AnimBP_C, AnimGraphNode_ComponentToLocalSpace) == 0x000E30, "Member 'UUncleBrolly_Weapon_AnimBP_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UUncleBrolly_Weapon_AnimBP_C, AnimGraphNode_ModifyBone_1) == 0x000E50, "Member 'UUncleBrolly_Weapon_AnimBP_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(UUncleBrolly_Weapon_AnimBP_C, AnimGraphNode_Slot) == 0x000F58, "Member 'UUncleBrolly_Weapon_AnimBP_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UUncleBrolly_Weapon_AnimBP_C, AnimGraphNode_ModifyBone) == 0x000FA0, "Member 'UUncleBrolly_Weapon_AnimBP_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UUncleBrolly_Weapon_AnimBP_C, BlockAnimRule) == 0x0010A8, "Member 'UUncleBrolly_Weapon_AnimBP_C::BlockAnimRule' has a wrong offset!");

}
